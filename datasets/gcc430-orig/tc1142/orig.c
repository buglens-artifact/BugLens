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



static char g_14 = 0L;
static unsigned g_64 = 1UL;
static int * const g_69 = (void*)0;
static int g_75 = 0xD8EB7BFBL;
static long long g_81 = (-9L);
static unsigned g_93 = 0x2B68169BL;
static char g_97 = 0x19L;
static short g_104 = 0x5D7BL;
static unsigned short g_113 = 0UL;
static int g_155 = (-1L);
static unsigned g_177 = 7UL;
static unsigned long long g_195 = 8UL;
static int *g_230 = &g_75;
static int g_286 = (-1L);
static short g_291 = 0xF429L;
static unsigned short g_294 = 0x73ACL;
static int g_319 = 0x073866EEL;
static char g_389 = 0x24L;
static char g_393 = 0x57L;
static unsigned g_407 = 0x77AA3E9DL;
static unsigned g_441 = 4294967291UL;
static int ** const g_572 = &g_230;
static int ** const *g_571 = &g_572;
static unsigned g_582 = 0xCCB6DA8DL;
static int g_597 = 0x54922CB8L;
static unsigned char g_600 = 1UL;
static unsigned short g_649 = 65534UL;
static char g_680 = 1L;
static int g_683 = 0x7F0D242CL;
static unsigned g_705 = 0x629423FCL;
static int g_775 = 0xA3BBF8FDL;
static char g_803 = 1L;
static unsigned char g_809 = 4UL;
static unsigned char g_919 = 0x68L;
static int g_976 = (-1L);
static unsigned long long g_977 = 1UL;
static short g_1032 = 5L;
static unsigned long long g_1041 = 0xA2B2E422E0EE37ADLL;
static int g_1111 = 1L;
static long long g_1154 = 1L;
static short g_1192 = 0L;
static int g_1198 = (-4L);
static unsigned char g_1227 = 8UL;
static unsigned char g_1259 = 0x8CL;
static unsigned g_1373 = 0xF592A963L;
static int g_1455 = 0L;
static unsigned char g_1457 = 0x15L;
static unsigned long long g_1583 = 0UL;
static unsigned short g_1622 = 1UL;
static unsigned g_1674 = 5UL;
static long long g_1785 = 0x2C35C0C6285197FDLL;
static long long g_1790 = 0xBF08258C86774279LL;
static unsigned long long g_1804 = 18446744073709551615UL;
static unsigned g_1809 = 4294967295UL;
static unsigned char g_1919 = 0x35L;
static unsigned char g_1957 = 0x31L;
static unsigned short g_2000 = 65535UL;
static unsigned long long g_2065 = 0x19097E40A4581476LL;
static short g_2173 = 1L;
static unsigned char g_2177 = 0xB9L;
static char g_2212 = 0x18L;
static int g_2245 = 2L;
static char g_2252 = 1L;
static unsigned short g_2254 = 0x5444L;
static unsigned g_2328 = 0x5CFAAB91L;
static int g_2379 = (-1L);
static unsigned char g_2380 = 253UL;
static long long g_2495 = (-1L);
static int g_2499 = 0x95B8FE10L;
static long long g_2508 = (-9L);
static char g_2517 = (-1L);
static long long g_2544 = 7L;
static long long g_2547 = 0xB303E327F2739003LL;
static unsigned short g_2549 = 0x9782L;



static short func_1(void);
static unsigned char func_4(const int p_5, char p_6, unsigned long long p_7);
static char func_15(int p_16, char p_17, unsigned short p_18, short p_19, unsigned p_20);
static const short func_23(unsigned short p_24, int p_25, int p_26);
static unsigned short func_27(long long p_28, const char p_29, unsigned p_30);
static unsigned char func_35(unsigned p_36, unsigned long long p_37, unsigned p_38, int p_39, unsigned char p_40);
static char func_41(unsigned char p_42, const char p_43);
static unsigned char func_44(const unsigned p_45, int p_46, unsigned p_47, short p_48);
static unsigned short func_55(short p_56);
static char func_61(unsigned char p_62, const long long p_63);
static short func_1(void)
{
    const int l_8 = 0x9AC70C30L;
    long long l_835 = 0xEC71DCDE16B01091LL;
    int l_1488 = 0x34FAB2FFL;
    int l_1556 = 0xD914379EL;
    int l_1672 = 0x0168C480L;
    int **l_1685 = (void*)0;
    int *** const l_1684 = &l_1685;
    short l_1690 = 0x1473L;
    const char l_1708 = 0xDCL;
    long long l_2008 = 0x646694C6AD6DA8F0LL;
    char l_2143 = 0x55L;
    int l_2160 = 0x88B506CDL;
    char l_2294 = (-1L);
    unsigned long long l_2314 = 0x389526A793B7E458LL;
    unsigned l_2315 = 5UL;
    int l_2434 = 0xE607B9CAL;
    int l_2538 = 0x27BCE922L;
    int l_2548 = 0x029831F3L;
    l_1488 = (safe_sub_func_uint8_t_u_u(func_4(l_8, ((((((safe_add_func_uint16_t_u_u((safe_div_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u(0xD3L)), g_14)), (((func_15((safe_lshift_func_int16_t_s_s((l_8 > func_23(func_27((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(func_35((func_41(func_44(((safe_mul_func_uint16_t_u_u((safe_div_func_int32_t_s_s((((safe_add_func_uint64_t_u_u((func_55((safe_mod_func_int8_t_s_s(g_14, ((safe_sub_func_int8_t_s_s(func_61(g_64, l_8), ((((((l_8 > 0x55L) <= l_8) != l_835) > l_8) ^ 0x29L) && g_775))) & 18446744073709551612UL)))) | 9UL), l_8)) == l_8) >= l_8), l_835)), l_835)) != g_775), l_8, l_835, l_8), g_319) != l_8), g_600, g_597, l_8, l_835), g_319)), 0x4FE6L)), g_389, l_8), l_8, g_286)), l_8)), l_8, l_835, g_976, g_1192) >= g_14) >= 1L) > 3UL))) & 0x2C38BF66290F7355LL) < l_8) || l_835) || g_286) < l_835), l_8), l_8));

    ;
    for (g_1192 = 27; (g_1192 >= (-21)); g_1192--)
    {
        short l_1493 = 0L;
        int l_1502 = (-1L);
        int l_1504 = 5L;
        for (g_1032 = 2; (g_1032 != (-30)); --g_1032)
        {
            unsigned char l_1512 = 0x19L;
            int l_1558 = 2L;
            int l_1575 = 0x8AF9F7A7L;
            int *l_1683 = &g_75;
        }
    }
    (**g_572) = (+(l_1684 != &g_572));
    if ((((4294967295UL != (safe_add_func_uint16_t_u_u(((**g_571) == (*g_572)), g_600))) > (((*l_1684) != (*g_571)) <= (safe_lshift_func_int8_t_s_s(((g_1227 == g_1198) <= g_1198), 2)))) ^ l_1690))
    {
        int **l_1693 = &g_230;
        short l_1704 = 0x5443L;
        long long l_1713 = (-3L);
        unsigned char l_1749 = 0xB2L;
        char l_1756 = 0xB5L;
        int l_1807 = (-4L);
        short l_1828 = 0xDE0BL;
        short l_2102 = (-1L);
        int l_2112 = 9L;
        int l_2156 = (-9L);
        int **l_2266 = &g_230;
        int *l_2271 = &g_1455;
        unsigned short l_2291 = 1UL;
        int l_2304 = 0xCFA7CB76L;
        long long l_2326 = 0x5481AB87927B8A6CLL;
        unsigned l_2393 = 0x1BD5D920L;
        int *l_2407 = &l_2156;
        int *l_2424 = &l_2112;
        int *l_2425 = &l_2112;
        int *l_2426 = &g_75;
        int *l_2427 = &g_2379;
        int *l_2428 = (void*)0;
        int *l_2429 = &g_2245;
        int *l_2430 = &g_2379;
        int *l_2431 = &g_2379;
        int *l_2432 = &l_2156;
        int *l_2433 = &l_1488;
        int *l_2435 = &g_683;
        int *l_2436 = (void*)0;
        int *l_2437 = &l_2112;
        int *l_2438 = &l_2434;
        int *l_2439 = &l_1807;
        int *l_2440 = &l_2160;
        int *l_2441 = &g_2379;
        int l_2442 = 0x71897960L;
        int *l_2443 = (void*)0;
        int *l_2444 = &g_1111;
        int *l_2445 = &l_1672;
        int *l_2446 = &l_2112;
        int *l_2447 = &g_2379;
        int *l_2448 = &g_2379;
        int *l_2449 = (void*)0;
        int *l_2450 = (void*)0;
        int l_2451 = 5L;
        int *l_2452 = &g_1111;
        int *l_2453 = &l_2112;
        int *l_2454 = &l_2434;
        int *l_2455 = &g_1111;
        int *l_2456 = &g_1455;
        int *l_2457 = &g_75;
        int *l_2458 = &g_2379;
        int *l_2459 = &l_2442;
        int l_2460 = 0L;
        int *l_2461 = &l_2460;
        int *l_2462 = &l_1672;
        int *l_2463 = &l_1672;
        int *l_2464 = &l_1672;
        int *l_2465 = &g_2245;
        int *l_2466 = &l_2156;
        int *l_2467 = &g_75;
        int *l_2468 = &g_1111;
        int *l_2469 = &g_1455;
        int *l_2470 = &l_1556;
        int *l_2471 = &l_2160;
        int *l_2472 = &l_2112;
        int *l_2473 = &g_2379;
        int *l_2474 = (void*)0;
        int *l_2475 = (void*)0;
        int *l_2476 = &g_2245;
        int *l_2477 = &l_1556;
        int *l_2478 = (void*)0;
        int *l_2479 = &l_2451;
        int *l_2480 = &l_2156;
        int *l_2481 = &l_2160;
        int *l_2482 = &g_2379;
        int *l_2483 = &g_2245;
        int *l_2484 = (void*)0;
        int *l_2485 = &g_683;
        int *l_2486 = &g_75;
        int *l_2487 = &g_2379;
        int *l_2488 = &l_1488;
        int *l_2489 = &l_1488;
        int *l_2490 = &g_2379;
        int *l_2491 = &l_1488;
        int *l_2492 = &l_2442;
        int *l_2493 = &g_1455;
        int *l_2494 = &g_2245;
        int *l_2496 = &g_1455;
        int *l_2497 = &g_2245;
        int *l_2498 = &l_1672;
        int *l_2500 = &g_2245;
        int *l_2501 = &g_1455;
        int *l_2502 = &g_2245;
        int l_2503 = (-1L);
        int *l_2504 = &g_75;
        int *l_2505 = &l_2460;
        int *l_2506 = &l_2460;
        int *l_2507 = &l_1488;
        int *l_2509 = &g_1111;
        int *l_2510 = &l_2503;
        int *l_2511 = &l_2156;
        int *l_2512 = &g_1111;
        int *l_2513 = &l_1807;
        int l_2514 = 0L;
        int l_2515 = 7L;
        int *l_2516 = &l_2460;
        int *l_2518 = &g_2379;
        int *l_2519 = &l_2442;
        int *l_2520 = &g_1111;
        int *l_2521 = &l_1672;
        int *l_2522 = &l_2160;
        int *l_2523 = &l_2160;
        int l_2524 = 0x19B39CAAL;
        int *l_2525 = (void*)0;
        int *l_2526 = &l_2442;
        int *l_2527 = (void*)0;
        int *l_2528 = &l_2160;
        int *l_2529 = &l_2442;
        int *l_2530 = &l_1807;
        int *l_2531 = &g_683;
        int *l_2532 = &g_2245;
        int *l_2533 = &l_2434;
        int *l_2534 = (void*)0;
        int *l_2535 = &g_2379;
        int *l_2536 = &g_2245;
        int *l_2537 = &l_1807;
        int *l_2539 = &l_2112;
        int *l_2540 = &l_2451;
        int *l_2541 = (void*)0;
        int *l_2542 = (void*)0;
        int *l_2543 = &g_683;
        int *l_2545 = &l_1488;
        int *l_2546 = &l_1556;
        if (((65530UL ^ (g_389 & (((safe_mod_func_uint64_t_u_u(18446744073709551615UL, g_389)) & 0xEBBFC154L) != (func_44(g_291, l_1690, ((void*)0 == l_1693), g_155) < g_291)))) >= 4294967290UL))
        {
            int l_1703 = 0x3E3EA531L;
            int ***l_1714 = &l_1693;
            unsigned long long l_1814 = 18446744073709551611UL;
            int l_1864 = 0xE850B326L;
            int l_1893 = (-1L);
            int l_1918 = (-1L);
            short l_1931 = 0L;
            int **l_2265 = &g_230;
            if (((*g_572) != (*l_1693)))
            {
                unsigned l_1696 = 18446744073709551606UL;
                int *** const l_1701 = &l_1693;
                for (g_64 = 6; (g_64 == 31); ++g_64)
                {
                    int *** const l_1702 = (void*)0;
                    int *l_1705 = &g_1455;
                    g_1455 = (g_14 >= (0x56C3L < (l_1696 == (safe_rshift_func_uint16_t_u_u(func_27((safe_div_func_int32_t_s_s(func_23((l_1701 != l_1702), ((0x73ADL || l_1703) <= ((void*)0 != (**g_571))), g_1111), 0x53AED819L)), g_195, l_1704), 13)))));

                    ;
                    (*g_230) = ((*g_572) == (void*)0);
                    (*l_1693) = l_1705;

                    ;
                }

                ;
                (*l_1693) = (**g_571);
            }
            else
            {
                short l_1719 = 1L;
                int l_1722 = 0xBA11D63BL;
                int l_1774 = 0xC37E7681L;
                int l_1782 = 0x6257F663L;
                int *l_1831 = (void*)0;
                int *l_2009 = (void*)0;
                int l_2083 = (-6L);
                (**g_572) &= (&g_572 == &g_572);
                if ((safe_lshift_func_uint8_t_u_u(l_1708, 2)))
                {
                    unsigned long long l_1720 = 18446744073709551615UL;
                    int l_1769 = 1L;
                    int l_1798 = 0x59B3DF4FL;
                    int ***l_1820 = &l_1693;
                    int l_1827 = 0x98D86601L;
                    (**l_1693) = 0xA461F920L;
                    if ((+((((g_93 <= ((g_600 || ((+l_1703) != (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(((l_1713 >= func_35(((void*)0 == l_1714), (safe_mul_func_uint8_t_u_u((&g_572 == &g_572), (safe_lshift_func_uint8_t_u_u(l_1719, g_775)))), g_919, (*g_230), (***l_1714))) < g_75), 0x8108L)), l_1720)))) ^ g_1032)) || 1UL) == l_1719) && g_1373)))
                    {
                        int *l_1721 = (void*)0;
                        int *l_1723 = &g_1111;
                        int *l_1724 = &g_683;
                        int *l_1725 = (void*)0;
                        int *l_1726 = (void*)0;
                        int *l_1727 = &l_1488;
                        int *l_1728 = &l_1556;
                        int *l_1729 = &g_683;
                        int *l_1730 = &l_1556;
                        int *l_1731 = &g_1455;
                        int *l_1732 = (void*)0;
                        int *l_1733 = &g_1455;
                        int *l_1734 = &g_683;
                        int *l_1735 = &g_75;
                        int *l_1736 = &l_1722;
                        int *l_1737 = &g_1111;
                        int *l_1738 = &l_1703;
                        int *l_1739 = (void*)0;
                        int *l_1740 = &g_75;
                        int *l_1741 = &g_683;
                        int *l_1742 = &l_1722;
                        int *l_1743 = (void*)0;
                        int *l_1744 = &g_75;
                        int *l_1745 = &g_1455;
                        int *l_1746 = &g_1111;
                        int *l_1747 = &l_1672;
                        int *l_1748 = &l_1722;
                        l_1721 = (*l_1693);

                        ;
                        ++l_1749;
                    }
                    else
                    {
                        int *l_1752 = &g_683;
                        int *l_1753 = &l_1556;
                        int *l_1754 = &l_1703;
                        int *l_1755 = &l_1703;
                        int *l_1757 = &g_683;
                        int *l_1758 = &g_75;
                        int *l_1759 = (void*)0;
                        int *l_1760 = &l_1672;
                        int *l_1761 = &l_1556;
                        int *l_1762 = &l_1722;
                        int *l_1763 = &l_1672;
                        int *l_1764 = &l_1722;
                        int *l_1765 = (void*)0;
                        int *l_1766 = &g_683;
                        int *l_1767 = &l_1672;
                        int *l_1768 = &g_75;
                        int *l_1770 = (void*)0;
                        int *l_1771 = &l_1769;
                        int *l_1772 = &l_1672;
                        int *l_1773 = &g_683;
                        int *l_1775 = (void*)0;
                        int *l_1776 = (void*)0;
                        int *l_1777 = (void*)0;
                        int *l_1778 = &l_1769;
                        int *l_1779 = &l_1769;
                        int *l_1780 = &g_1455;
                        int *l_1781 = &l_1672;
                        int *l_1783 = &l_1672;
                        int *l_1784 = &l_1769;
                        int *l_1786 = &g_683;
                        int *l_1787 = &g_75;
                        int *l_1788 = &g_1111;
                        int *l_1789 = &g_75;
                        int l_1791 = (-1L);
                        int *l_1792 = &g_683;
                        int *l_1793 = (void*)0;
                        int *l_1794 = &l_1769;
                        int *l_1795 = &l_1722;
                        int *l_1796 = &l_1672;
                        int *l_1797 = &g_75;
                        int *l_1799 = &l_1769;
                        int *l_1800 = &l_1769;
                        int *l_1801 = &l_1556;
                        int *l_1802 = &l_1672;
                        int *l_1803 = &g_683;
                        int *l_1808 = &l_1807;
                        --g_1804;
                        (**l_1714) = (**l_1714);
                        g_1809++;
                    }
                    for (g_286 = 0; (g_286 > (-2)); g_286 = safe_sub_func_uint8_t_u_u(g_286, 6))
                    {
                        char l_1815 = 0xDCL;
                        l_1815 &= func_27(l_1814, g_97, g_64);

                        ;
                    }

                    ;
                    g_1111 |= func_15((g_809 >= (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(((l_1769 && (l_1820 != (void*)0)) ^ (**l_1693)), (+(**l_1693)))), ((safe_mod_func_int32_t_s_s(((0x4BL != ((safe_add_func_int32_t_s_s((*g_230), (safe_lshift_func_int8_t_s_u(0x14L, g_809)))) & l_1827)) | (**l_1693)), (-1L))) && 0UL)))), g_649, g_1192, (***l_1820), l_1828);
                }
                else
                {
                    int l_1832 = 0x83A119E6L;
                    int l_1833 = 0xC793B042L;
                    int *l_1834 = (void*)0;
                    int *l_1835 = &l_1833;
                    int *l_1836 = &l_1672;
                    int *l_1837 = &l_1722;
                    int *l_1838 = (void*)0;
                    int *l_1839 = &l_1672;
                    int *l_1840 = &l_1703;
                    int *l_1841 = &g_683;
                    int *l_1842 = &g_1111;
                    int *l_1843 = &l_1703;
                    int *l_1844 = &l_1722;
                    int *l_1845 = &l_1782;
                    int *l_1846 = (void*)0;
                    int *l_1847 = &g_1455;
                    int *l_1848 = (void*)0;
                    int *l_1849 = &l_1807;
                    int *l_1850 = (void*)0;
                    int *l_1851 = &l_1722;
                    int *l_1852 = &g_1111;
                    int *l_1853 = &g_683;
                    int *l_1854 = (void*)0;
                    int *l_1855 = &g_1455;
                    int *l_1856 = &g_75;
                    int *l_1857 = &l_1833;
                    int *l_1858 = &g_75;
                    int *l_1859 = &l_1672;
                    int *l_1860 = &g_1455;
                    int *l_1861 = &l_1556;
                    int *l_1862 = &g_1111;
                    int *l_1863 = (void*)0;
                    int *l_1865 = &l_1774;
                    int *l_1866 = &l_1807;
                    int *l_1867 = (void*)0;
                    int *l_1868 = &l_1782;
                    int *l_1869 = &l_1488;
                    int *l_1870 = &l_1556;
                    int *l_1871 = &l_1672;
                    int *l_1872 = &l_1488;
                    int *l_1873 = &l_1864;
                    int *l_1874 = (void*)0;
                    int *l_1875 = &l_1672;
                    int *l_1876 = &l_1782;
                    int *l_1877 = (void*)0;
                    int *l_1878 = &l_1703;
                    int *l_1879 = &l_1722;
                    int *l_1880 = &l_1774;
                    int *l_1881 = &l_1774;
                    int *l_1882 = &l_1782;
                    int *l_1883 = &l_1722;
                    int *l_1884 = &l_1488;
                    int *l_1885 = &l_1807;
                    int *l_1886 = &g_1455;
                    int *l_1887 = (void*)0;
                    int *l_1888 = (void*)0;
                    int *l_1889 = &l_1807;
                    int *l_1890 = &l_1782;
                    int *l_1891 = &l_1833;
                    int *l_1892 = &g_1455;
                    int *l_1894 = &l_1807;
                    int *l_1895 = &l_1833;
                    int *l_1896 = &g_683;
                    int *l_1897 = &l_1488;
                    int *l_1898 = &l_1833;
                    int *l_1899 = &l_1703;
                    int *l_1900 = &l_1488;
                    int l_1901 = (-1L);
                    int *l_1902 = &l_1774;
                    int *l_1903 = &g_1455;
                    int *l_1904 = &g_683;
                    int *l_1905 = (void*)0;
                    int *l_1906 = &l_1556;
                    int *l_1907 = &l_1672;
                    int *l_1908 = &g_75;
                    int *l_1909 = (void*)0;
                    int *l_1910 = &l_1556;
                    int *l_1911 = &l_1901;
                    int *l_1912 = &l_1893;
                    int *l_1913 = &l_1864;
                    int *l_1914 = &l_1672;
                    int *l_1915 = &l_1833;
                    int *l_1916 = &l_1556;
                    int *l_1917 = &l_1782;
                    int l_1924 = 1L;
                    for (g_14 = 0; (g_14 > 28); g_14++)
                    {
                        l_1831 = (**g_571);

                        ;
                    }

                    ;
                    ++g_1919;
                    (*l_1882) = (safe_mod_func_int64_t_s_s((**l_1693), func_15((***g_571), (((***g_571) > func_55(l_1924)) & (g_294 == (((safe_add_func_uint32_t_u_u(((*l_1714) == (*l_1684)), func_4(g_1373, g_14, g_1111))) || 0L) >= (**l_1693)))), g_1809, (*l_1898), g_1259)));
                }

                ;
                ;
                if ((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(65535UL, (g_1227 & ((+(**l_1693)) == g_1192)))), (((void*)0 == (**l_1714)) < (((*g_230) < (0L != g_319)) > l_1931)))))
                {
                    unsigned l_1960 = 9UL;
                    int l_1987 = (-1L);
                    for (g_1259 = 0; (g_1259 < 15); ++g_1259)
                    {
                        int *l_1936 = &l_1488;
                        int *l_1937 = &l_1703;
                        int *l_1938 = (void*)0;
                        int *l_1939 = &l_1672;
                        int *l_1940 = &l_1672;
                        int *l_1941 = &l_1864;
                        int *l_1942 = (void*)0;
                        int *l_1943 = &g_683;
                        int *l_1944 = &g_1111;
                        int *l_1945 = &l_1774;
                        int *l_1946 = &l_1864;
                        int *l_1947 = &l_1703;
                        int *l_1948 = &l_1703;
                        int *l_1949 = &l_1918;
                        int *l_1950 = &l_1893;
                        int *l_1951 = &l_1807;
                        int *l_1952 = &l_1774;
                        int *l_1953 = &l_1918;
                        int *l_1954 = &l_1774;
                        int *l_1955 = &l_1807;
                        int *l_1956 = (void*)0;
                        if ((**g_572))
                            break;
                        (***l_1714) = (safe_lshift_func_uint16_t_u_s((**l_1693), 2));
                        ++g_1957;
                        (*l_1936) = (**l_1693);
                    }
                    if ((~func_55(l_1960)))
                    {
                        int *l_1961 = &g_1111;
                        int *l_1962 = (void*)0;
                        int *l_1963 = &l_1782;
                        int *l_1964 = (void*)0;
                        int *l_1965 = &l_1893;
                        int l_1966 = 0x72164896L;
                        int *l_1967 = &l_1966;
                        int *l_1968 = &l_1966;
                        int *l_1969 = &l_1918;
                        int *l_1970 = &l_1722;
                        int *l_1971 = &l_1966;
                        int *l_1972 = &g_75;
                        int *l_1973 = &l_1807;
                        int *l_1974 = &l_1893;
                        int *l_1975 = (void*)0;
                        int *l_1976 = &l_1722;
                        int *l_1977 = &l_1864;
                        int *l_1978 = (void*)0;
                        int *l_1979 = &l_1722;
                        int *l_1980 = &l_1672;
                        int *l_1981 = &g_1111;
                        int *l_1982 = &l_1782;
                        int *l_1983 = &l_1807;
                        int *l_1984 = &l_1703;
                        int *l_1985 = &l_1966;
                        int *l_1986 = (void*)0;
                        int *l_1988 = &l_1782;
                        int *l_1989 = (void*)0;
                        int *l_1990 = &l_1556;
                        int *l_1991 = &l_1782;
                        int *l_1992 = &l_1774;
                        int *l_1993 = &l_1722;
                        int *l_1994 = &l_1782;
                        int *l_1995 = (void*)0;
                        int *l_1996 = &l_1782;
                        int *l_1997 = &g_1455;
                        int l_1998 = 0x4C8AE15CL;
                        int *l_1999 = &l_1998;
                        g_2000--;
                    }
                    else
                    {
                        unsigned long long l_2007 = 0x32FEBD23C6395280LL;
                        int *l_2010 = &l_1672;
                        int *l_2011 = &g_1111;
                        int *l_2012 = &g_1455;
                        int *l_2013 = &l_1556;
                        int *l_2014 = &l_1893;
                        int *l_2015 = &l_1722;
                        int *l_2016 = &l_1807;
                        int *l_2017 = &l_1703;
                        int *l_2018 = &l_1556;
                        int *l_2019 = &g_683;
                        int *l_2020 = &l_1893;
                        int *l_2021 = &l_1488;
                        int *l_2022 = &l_1703;
                        int *l_2023 = &l_1703;
                        int *l_2024 = &g_683;
                        int *l_2025 = &l_1807;
                        long long l_2026 = 0xD137AE51740C8C4DLL;
                        int *l_2027 = &l_1488;
                        int *l_2028 = &l_1807;
                        int *l_2029 = (void*)0;
                        int *l_2030 = (void*)0;
                        int *l_2031 = &g_683;
                        int *l_2032 = &l_1722;
                        int *l_2033 = &l_1488;
                        int *l_2034 = &l_1807;
                        int *l_2035 = (void*)0;
                        int *l_2036 = &l_1782;
                        int *l_2037 = (void*)0;
                        int *l_2038 = &l_1893;
                        int *l_2039 = (void*)0;
                        int *l_2040 = &l_1703;
                        int *l_2041 = &l_1864;
                        int *l_2042 = &l_1893;
                        int *l_2043 = &l_1703;
                        int *l_2044 = &g_1111;
                        int *l_2045 = &l_1774;
                        int *l_2046 = (void*)0;
                        int *l_2047 = (void*)0;
                        int *l_2048 = &l_1864;
                        int *l_2049 = &g_1111;
                        int *l_2050 = &l_1893;
                        int *l_2051 = &l_1807;
                        int *l_2052 = &l_1918;
                        int *l_2053 = &l_1987;
                        int *l_2054 = (void*)0;
                        int *l_2055 = &l_1774;
                        int *l_2056 = &g_683;
                        int *l_2057 = &g_1111;
                        int *l_2058 = &g_1455;
                        int *l_2059 = &l_1864;
                        int *l_2060 = &l_1672;
                        int *l_2061 = (void*)0;
                        int *l_2062 = &l_1722;
                        int *l_2063 = (void*)0;
                        int *l_2064 = (void*)0;
                        l_2008 &= (((safe_mul_func_uint16_t_u_u((**l_1693), (safe_sub_func_uint64_t_u_u(l_2007, g_809)))) || 18446744073709551615UL) || g_919);
                        l_2009 = (**g_571);

                        ;
                        --g_2065;
                    }

                    ;
                }
                else
                {
                    long long l_2082 = (-1L);
                    (*g_230) = (safe_sub_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((!(g_597 >= (safe_div_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((g_1809 && g_319), 7)), func_55(g_1809))))) && 0L) >= (l_1714 != &g_572)), ((((safe_div_func_int32_t_s_s((***g_571), g_809)) >= 253UL) == g_919) >= 0xD8219B57L))), (*g_230)));
                    (**l_1693) = ((safe_div_func_uint32_t_u_u((**l_1693), 4L)) >= func_15((***g_571), (**l_1693), g_919, ((void*)0 != &g_572), g_1457));
                    for (g_1674 = 0; (g_1674 > 14); ++g_1674)
                    {
                        int *l_2084 = &l_1703;
                        (*l_2084) &= func_23(l_2082, ((l_2083 == g_75) > (((***l_1714) < (**l_1693)) & ((func_15(l_2082, (***l_1714), g_14, g_705, g_1111) || g_2065) == (**l_1693)))), (**l_1693));
                        if (l_2082)
                            break;
                        (*g_572) = (*g_572);
                    }
                }

                ;
                for (l_1703 = 20; (l_1703 != (-26)); l_1703 = safe_sub_func_int16_t_s_s(l_1703, 3))
                {
                    const int ***l_2091 = (void*)0;
                    int *l_2093 = (void*)0;
                    int *l_2094 = &l_1774;
                    int *l_2095 = &l_1918;
                    int *l_2096 = &g_1455;
                    int *l_2097 = &g_1455;
                    int *l_2098 = &l_1807;
                    int *l_2099 = &l_1556;
                    int *l_2100 = &l_1864;
                    int *l_2101 = &l_1807;
                    int *l_2103 = &l_1556;
                    int *l_2104 = &g_683;
                    int *l_2105 = &l_1774;
                    int *l_2106 = &l_1782;
                    int *l_2107 = &l_1918;
                    int *l_2108 = &l_1918;
                    int *l_2109 = &l_1864;
                    int *l_2110 = (void*)0;
                    int *l_2111 = &g_1111;
                    int *l_2113 = (void*)0;
                    int *l_2114 = &l_1672;
                    int *l_2115 = (void*)0;
                    int *l_2116 = &g_683;
                    int *l_2117 = &l_1556;
                    int *l_2118 = &l_1782;
                    int *l_2119 = (void*)0;
                    int *l_2120 = &l_1893;
                    int l_2121 = 0x223DF4B7L;
                    int *l_2122 = (void*)0;
                    int *l_2123 = &l_1807;
                    int *l_2124 = &l_1918;
                    int *l_2125 = &l_1722;
                    int *l_2126 = &l_1893;
                    int *l_2127 = &l_1893;
                    int *l_2128 = (void*)0;
                    int *l_2129 = &g_75;
                    int *l_2130 = &l_1893;
                    int *l_2131 = &l_1807;
                    int *l_2132 = &l_2112;
                    int *l_2133 = (void*)0;
                    int *l_2134 = &l_2112;
                    int *l_2135 = &l_1774;
                    int *l_2136 = (void*)0;
                    int *l_2137 = &l_2121;
                    int *l_2138 = &g_1111;
                    int *l_2139 = &l_2112;
                    int *l_2140 = &g_75;
                    int *l_2141 = (void*)0;
                    int *l_2142 = &l_2112;
                    int *l_2144 = &l_1782;
                    int *l_2145 = &l_1672;
                    int *l_2146 = &l_1864;
                    int *l_2147 = &l_2121;
                    int *l_2148 = (void*)0;
                    int *l_2149 = &l_1722;
                    int *l_2150 = &l_2121;
                    int *l_2151 = &l_2121;
                    int *l_2152 = (void*)0;
                    int *l_2153 = &l_2112;
                    int *l_2154 = &g_683;
                    int l_2155 = 0x47753703L;
                    int *l_2157 = &l_1918;
                    int *l_2158 = (void*)0;
                    int *l_2159 = &l_1893;
                    int *l_2161 = &l_1722;
                    int *l_2162 = &l_1782;
                    int *l_2163 = &l_1782;
                    int *l_2164 = &g_683;
                    int *l_2165 = &l_2160;
                    int *l_2166 = &l_1672;
                    int *l_2167 = (void*)0;
                    int *l_2168 = &g_1111;
                    int *l_2169 = &g_75;
                    int l_2170 = (-1L);
                    int *l_2171 = &l_1782;
                    int *l_2172 = &l_1864;
                    int *l_2174 = &l_1722;
                    int *l_2175 = &l_1864;
                    int *l_2176 = (void*)0;
                    (*l_1693) = (*l_1693);
                    for (g_104 = 15; (g_104 <= 17); g_104 = safe_add_func_int64_t_s_s(g_104, 8))
                    {
                        const short l_2092 = 0xBC0AL;
                        (**l_1693) = (safe_lshift_func_int8_t_s_s((l_2091 == &g_572), l_2092));
                        if ((***l_1714))
                            continue;
                        if ((***g_571))
                            continue;
                        (*g_572) = (**g_571);
                    }
                    --g_2177;
                }
            }

            ;
            (***l_1714) = (-1L);
            for (l_1488 = (-19); (l_1488 != 14); l_1488++)
            {
                short l_2240 = 0L;
                int *l_2272 = &l_1556;
                unsigned l_2282 = 0UL;
                for (g_113 = 0; (g_113 <= 56); g_113 = safe_add_func_uint8_t_u_u(g_113, 2))
                {
                    unsigned short l_2190 = 0UL;
                    int *l_2194 = &l_1807;
                    if (((g_1227 == (safe_mul_func_uint16_t_u_u((((*g_572) != (*l_1693)) >= func_15((safe_sub_func_uint8_t_u_u(g_195, (***l_1714))), g_1192, (***l_1714), ((safe_sub_func_uint16_t_u_u(((*l_1684) == (*g_571)), l_2190)) ^ 0x8590L), g_1198)), g_683))) < g_155))
                    {
                        long long l_2193 = 0L;
                        int *l_2195 = &g_75;
                        int *l_2196 = &g_683;
                        int *l_2197 = &g_1455;
                        int *l_2198 = &l_2112;
                        int *l_2199 = (void*)0;
                        int *l_2200 = &l_1556;
                        int *l_2201 = &l_1893;
                        int *l_2202 = &g_1111;
                        int *l_2203 = (void*)0;
                        int *l_2204 = &l_1556;
                        int *l_2205 = &l_1703;
                        int *l_2206 = (void*)0;
                        int *l_2207 = &g_1111;
                        int *l_2208 = &l_1893;
                        int *l_2209 = (void*)0;
                        int *l_2210 = &g_1455;
                        int *l_2211 = &l_2156;
                        int *l_2213 = &g_1111;
                        int *l_2214 = (void*)0;
                        int *l_2215 = &l_1807;
                        int *l_2216 = &g_1455;
                        int *l_2217 = (void*)0;
                        int *l_2218 = &g_75;
                        int *l_2219 = &l_1893;
                        int *l_2220 = &l_1807;
                        int *l_2221 = &l_1864;
                        int *l_2222 = &g_1111;
                        int *l_2223 = &l_2156;
                        int *l_2224 = &g_1111;
                        int *l_2225 = &l_1672;
                        int *l_2226 = &g_683;
                        int *l_2227 = &g_1111;
                        int *l_2228 = &g_75;
                        int *l_2229 = &l_1672;
                        int *l_2230 = &l_1893;
                        int *l_2231 = &l_1672;
                        int *l_2232 = &g_1111;
                        int *l_2233 = (void*)0;
                        int *l_2234 = &l_1893;
                        int *l_2235 = &l_1672;
                        int *l_2236 = (void*)0;
                        int *l_2237 = &g_1111;
                        int *l_2238 = &g_1455;
                        int *l_2239 = &l_2160;
                        int l_2241 = 0x05A6A5F5L;
                        int *l_2242 = &l_1556;
                        int *l_2243 = &g_1111;
                        int *l_2244 = &l_2241;
                        int *l_2246 = &l_2156;
                        int *l_2247 = &g_683;
                        int *l_2248 = &l_2160;
                        int *l_2249 = &l_1864;
                        int *l_2250 = (void*)0;
                        int *l_2251 = (void*)0;
                        int *l_2253 = &l_1703;
                        (**l_1693) ^= ((safe_rshift_func_int8_t_s_u(l_2193, 1)) & g_705);
                        l_2194 = (**l_1714);

                        ;
                        (*l_2194) = (***g_571);
                        --g_2254;
                    }
                    else
                    {
                        (*l_1693) = (*g_572);
                        if ((**l_1693))
                            break;
                    }

                    ;
                    for (l_2008 = 0; (l_2008 == 9); l_2008 = safe_add_func_int16_t_s_s(l_2008, 7))
                    {
                        unsigned l_2264 = 0x7CCC62AEL;
                        (***l_1714) = ((safe_add_func_int16_t_s_s((~((0x29FAL & (func_15((**g_572), g_14, g_393, ((safe_unary_minus_func_uint64_t_u(0xC4B411FF16DA9F83LL)) >= l_2264), ((l_2265 == l_2266) == ((safe_lshift_func_uint8_t_u_u((g_1809 ^ (*l_2194)), 0)) || (*l_2194)))) != g_291)) || g_1455)), g_14)) && 0x9C5AL);
                    }
                }
                for (l_1893 = 0; (l_1893 != (-25)); l_1893--)
                {
                    short l_2281 = 0x8DEFL;
                    int *l_2288 = (void*)0;
                    l_2272 = l_2271;

                    ;
                    (*g_230) &= (safe_lshift_func_int8_t_s_s(g_1192, 5));
                    l_2282 ^= (((***l_1714) < ((*l_2272) != (safe_mod_func_uint8_t_u_u(func_15((*l_2272), (g_2212 || (safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s((0x9388L && (0xD6B237FBD0CDF774LL < func_55(l_2281))), g_441)), g_75))), g_393, g_81, g_1032), g_93)))) | l_2281);
                    (*l_2271) = (((safe_lshift_func_int16_t_s_u((!(safe_add_func_uint16_t_u_u(0x6184L, ((g_2177 || 0xAB1DL) > ((safe_unary_minus_func_int8_t_s((*l_2272))) | g_1227))))), 3)) & (l_2272 == l_2288)) && (((safe_rshift_func_uint8_t_u_u(func_44((*l_2271), (**g_572), g_600, g_1457), g_113)) & g_93) && 0x802070C73FD19A3FLL));
                }

                ;
                if (l_2291)
                {
                    unsigned long long l_2301 = 0xE796D3903B87BE23LL;
                    unsigned l_2323 = 0xA4BA5A57L;
                    if ((safe_add_func_int64_t_s_s(l_2294, (safe_div_func_int16_t_s_s((g_680 == (safe_add_func_int32_t_s_s(((0xC8L ^ ((safe_mod_func_uint32_t_u_u(g_2173, (*g_230))) && func_27(func_35(((*l_2272) != ((void*)0 == (**g_571))), g_2252, g_1957, (**g_572), (*l_2272)), g_1373, g_1919))) == 8L), l_2301))), g_919)))))
                    {
                        int l_2305 = 0x78C237E7L;
                        int *l_2316 = (void*)0;
                        int *l_2317 = &g_1111;
                        (*l_2317) ^= ((safe_rshift_func_uint8_t_u_s((((**l_2265) != func_15((~l_2304), g_2245, g_195, l_2305, func_55(func_15((**g_572), g_1804, ((safe_div_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((func_4(l_2301, (safe_mul_func_int8_t_s_s((((safe_add_func_int64_t_s_s((((func_15((*g_230), (*l_2272), (*l_2272), l_2314, g_1785) < g_1785) != 0x02617ABE76511468LL) != (*g_230)), (*l_2272))) >= g_1198) > g_177), (-1L))), g_1790) <= g_705), g_2245)), l_2315)) | (**l_2265)), l_2305, g_407)))) | l_2305), 5)) ^ (***g_571));
                    }
                    else
                    {
                        int **l_2318 = &l_2271;
                        int l_2327 = (-1L);
                        int l_2329 = 0x4876855BL;
                        (*l_2265) = (*g_572);
                        l_2329 ^= ((&l_2272 == l_2318) <= ((((((void*)0 == &l_1693) > (safe_add_func_uint32_t_u_u(func_23(((safe_div_func_int32_t_s_s(((0xDEA84C14L > ((!(((func_55(l_2323) < (((g_286 && (((safe_lshift_func_int8_t_s_u(((0x31L != 0x62L) ^ (-2L)), g_195)) || g_389) | (**l_1693))) && g_1785) == l_2326)) && l_2327) > g_775)) < (**g_572))) <= 0x10B7L), g_177)) != g_1785), g_2328, (**l_1693)), 6UL))) <= g_977) == g_1785) != 0UL));
                        g_683 ^= (*l_2271);
                    }
                }
                else
                {
                    for (l_2314 = 19; (l_2314 < 36); l_2314 = safe_add_func_int16_t_s_s(l_2314, 8))
                    {
                        (*l_2266) = (*g_572);
                    }
                }
                for (g_441 = 0; (g_441 > 24); g_441 = safe_add_func_int8_t_s_s(g_441, 8))
                {
                    const int *l_2334 = &l_2156;
                    const int **l_2335 = &l_2334;
                    (*l_2335) = l_2334;
                    (**l_1714) = (**l_1714);
                }
            }
            (*g_230) = ((***g_571) & (g_1674 >= (((safe_rshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((0x204EL ^ g_2173), ((safe_sub_func_int16_t_s_s(0L, ((((void*)0 == &l_1693) <= (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((**l_2266), ((safe_rshift_func_int16_t_s_s(0xA045L, 0)) != g_2212))) & (**l_1693)), (**l_1693))) != 0L), 1L)), g_1622)), g_683))) & (*l_2271)))) ^ (**l_2265)))), g_600)) || g_1227) == 0UL)));
        }
        else
        {
            int *l_2354 = &g_1111;
            int *l_2355 = &l_2160;
            int *l_2356 = (void*)0;
            int *l_2357 = &l_1556;
            int *l_2358 = &l_2160;
            int *l_2359 = &g_1455;
            int *l_2360 = (void*)0;
            int *l_2361 = &g_683;
            int *l_2362 = &l_1488;
            int *l_2363 = &l_1807;
            int *l_2364 = &g_75;
            int *l_2365 = &g_75;
            int *l_2366 = &l_1807;
            int *l_2367 = (void*)0;
            int *l_2368 = (void*)0;
            int *l_2369 = &g_1111;
            int *l_2370 = (void*)0;
            int *l_2371 = (void*)0;
            int *l_2372 = &l_1556;
            int *l_2373 = &l_2160;
            int *l_2374 = &l_1672;
            int *l_2375 = &g_2245;
            int *l_2376 = (void*)0;
            int *l_2377 = &g_1455;
            int *l_2378 = &l_1556;
            ++g_2380;
            for (l_1556 = 0; (l_1556 == 25); l_1556 = safe_add_func_uint8_t_u_u(l_1556, 1))
            {
                int l_2399 = 1L;
                unsigned l_2402 = 0UL;
                (*l_2365) &= (safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_mod_func_int32_t_s_s((l_2393 != (safe_sub_func_int64_t_s_s((-2L), (**l_2266)))), (*l_2359))) < ((safe_unary_minus_func_uint32_t_u((func_55(g_919) < ((((*l_2362) ^ (&g_572 == (void*)0)) < (***g_571)) == 0xBCL)))) >= (*l_2271))), 13)) && 0xD706FD32L), (**l_1693))), 0x85L));
                (*l_2377) = (safe_mod_func_int64_t_s_s(((((-1L) ^ l_2399) & (g_1259 != (safe_add_func_uint32_t_u_u(0x4EAA2A94L, (((**g_572) & 0x84A1E976L) ^ g_977))))) == 0xCD794796L), g_1192));
                if ((func_35(((g_291 < (l_2402 <= (*g_230))) ^ 0UL), g_1583, ((*l_2361) >= (safe_mul_func_uint8_t_u_u((l_2399 | ((safe_rshift_func_int16_t_s_u((**l_1693), (!g_683))) < g_2065)), 0x0DL))), (*g_230), (*l_2271)) <= g_1373))
                {
                    (*l_2354) = (((**g_571) == l_2407) ^ func_4(g_1041, (*l_2374), (g_2177 == (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((**l_1693), (safe_sub_func_uint16_t_u_u(g_97, ((safe_sub_func_int64_t_s_s(g_2245, g_2379)) & g_2328))))) == (*l_2271)), g_600)))));
                    (*g_572) = l_2372;

                    ;
                    (*l_2355) &= (-10L);
                }
                else
                {
                    return g_93;


                }

                ;
                for (l_1828 = 20; (l_1828 < 15); l_1828--)
                {
                    const int ** const l_2421 = (void*)0;
                    const int ** const *l_2420 = &l_2421;
                    for (g_649 = (-20); (g_649 != 12); ++g_649)
                    {
                        (*l_1693) = l_2366;

                        ;
                        (*l_2373) &= (&l_1685 == l_2420);
                        (*l_2364) &= (safe_rshift_func_int8_t_s_s((l_2402 != 0xFDF5L), (~(func_4(g_1790, ((void*)0 != (*g_571)), ((l_2402 || g_97) <= func_55(l_2402))) || (**g_572)))));
                        (*l_2359) ^= (&l_2399 == &l_2399);
                    }
                }

                ;
            }

            ;
        }

        ;
        (*l_2271) = 1L;
        ++g_2549;
    }
    else
    {
        (*g_572) = (*g_572);
    }


    return l_2315;


}







static unsigned char func_4(const int p_5, char p_6, unsigned long long p_7)
{
    int *l_1487 = &g_683;
    l_1487 = l_1487;
    return (*l_1487);
}







static char func_15(int p_16, char p_17, unsigned short p_18, short p_19, unsigned p_20)
{
    int l_1486 = 0xAEC9A877L;
    return l_1486;
}







static const short func_23(unsigned short p_24, int p_25, int p_26)
{
    unsigned long long l_1071 = 0UL;
    int **l_1072 = &g_230;
    long long l_1091 = (-8L);
    int l_1096 = 0x475BC0DCL;
    int l_1100 = 0L;
    int l_1145 = 5L;
    int l_1146 = (-9L);
    int l_1189 = 5L;
    int l_1216 = 0x2C656128L;
    unsigned l_1355 = 1UL;
    unsigned l_1380 = 0x78E9D8DCL;
    unsigned l_1485 = 0UL;
    (***g_571) = (((***g_571) || (*g_230)) <= 18446744073709551611UL);
    for (g_1032 = 25; (g_1032 < 25); g_1032 = safe_add_func_uint64_t_u_u(g_1032, 6))
    {
        const long long l_1070 = 0xD3078027FEC2BBE0LL;
        int l_1077 = 0xBB5726BCL;
        int l_1170 = 0x51D00AEEL;
        int l_1194 = (-1L);
        int * const *l_1262 = &g_69;
        unsigned l_1282 = 0x29290ECAL;
        const int l_1331 = 0x3608869CL;
        int l_1456 = 0L;
    }
    (**l_1072) = ((*g_571) != (*g_571));
    l_1145 &= (safe_rshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(((p_24 < (~(((p_26 == ((safe_div_func_int16_t_s_s((((**l_1072) || (safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_u(func_44((**l_1072), (safe_add_func_int32_t_s_s((**l_1072), func_55((safe_mul_func_uint8_t_u_u(((((0xD2L || ((-6L) <= (safe_sub_func_uint32_t_u_u((p_24 != (0x7DC7CDA7L | 1L)), g_319)))) && 0x57L) | g_393) ^ (**l_1072)), g_113))))), (**l_1072), g_683), g_93))))) | g_195), p_24)) & l_1485)) || p_24) & 0x02C4L))) != 0xD014L), p_24)), 6));
    return p_24;
}







static unsigned short func_27(long long p_28, const char p_29, unsigned p_30)
{
    int *l_1061 = &g_75;
    (**g_571) = l_1061;

    ;
    (**g_571) = (*g_572);
    (**g_572) |= p_29;
    return g_775;
}







static unsigned char func_35(unsigned p_36, unsigned long long p_37, unsigned p_38, int p_39, unsigned char p_40)
{
    int **l_1055 = &g_230;
    int ***l_1054 = &l_1055;
    const unsigned l_1058 = 0x83EFA4F3L;
    int *l_1059 = (void*)0;
    int *l_1060 = &g_683;
    for (g_683 = (-22); (g_683 != 19); ++g_683)
    {
        for (g_441 = (-19); (g_441 > 59); g_441 = safe_add_func_int16_t_s_s(g_441, 9))
        {
            return g_680;
        }
    }
    (*l_1060) = (safe_add_func_int32_t_s_s(((g_389 || (&g_572 != l_1054)) == g_14), (safe_mod_func_uint64_t_u_u((l_1058 > 4294967287UL), p_40))));
    (*l_1060) = (p_38 > (g_441 ^ g_389));
    return p_37;
}







static char func_41(unsigned char p_42, const char p_43)
{
    unsigned char l_843 = 253UL;
    int l_844 = 0L;
    int l_880 = 1L;
    int l_887 = 6L;
    int l_904 = 0x9D61C1FCL;
    int l_906 = 1L;
    int l_910 = 8L;
    int l_915 = 0xFE74D237L;
    char l_935 = 4L;
    unsigned l_936 = 0UL;
    unsigned short l_939 = 0x6043L;
    unsigned short l_983 = 0x578DL;
    int l_1013 = (-4L);
    int l_1033 = 0x6CE4FC17L;
    if (l_843)
    {
        unsigned l_845 = 0x46871D43L;
        --l_845;
    }
    else
    {
        int *l_848 = &l_844;
        int *l_849 = (void*)0;
        int *l_850 = &g_683;
        int *l_851 = &g_75;
        int *l_852 = &g_75;
        int *l_853 = &g_75;
        int *l_854 = &g_75;
        int *l_855 = &g_75;
        int *l_856 = &g_683;
        int *l_857 = &g_75;
        int *l_858 = (void*)0;
        int *l_859 = &l_844;
        int *l_860 = &g_75;
        int *l_861 = (void*)0;
        int l_862 = 1L;
        int *l_863 = (void*)0;
        int *l_864 = &g_683;
        int *l_865 = &g_683;
        int l_866 = 1L;
        int *l_867 = &l_844;
        int *l_868 = &l_862;
        int *l_869 = (void*)0;
        int *l_870 = (void*)0;
        int *l_871 = &l_866;
        int *l_872 = &g_683;
        int *l_873 = &l_844;
        int *l_874 = (void*)0;
        int *l_875 = &l_862;
        int *l_876 = &g_75;
        int *l_877 = &l_862;
        int *l_878 = &l_844;
        int *l_879 = &g_75;
        int *l_881 = &l_844;
        int *l_882 = &l_866;
        int *l_883 = (void*)0;
        int *l_884 = (void*)0;
        int *l_885 = &l_880;
        int *l_886 = &l_844;
        int l_888 = 0L;
        int *l_889 = &l_844;
        int *l_890 = &l_862;
        int l_891 = 0xEDE9FFD4L;
        int *l_892 = &l_887;
        int *l_893 = &l_888;
        int *l_894 = &l_888;
        int *l_895 = &l_891;
        int *l_896 = &l_844;
        int *l_897 = &g_683;
        int *l_898 = &g_683;
        int *l_899 = &l_891;
        int *l_900 = &l_891;
        int *l_901 = &l_888;
        int *l_902 = &l_888;
        int l_903 = 6L;
        int *l_905 = &l_903;
        int *l_907 = &l_866;
        int *l_908 = &g_683;
        int *l_909 = &l_880;
        int *l_911 = &l_862;
        int *l_912 = &l_891;
        int *l_913 = (void*)0;
        int *l_914 = (void*)0;
        int *l_916 = &g_75;
        int *l_917 = &l_844;
        int *l_918 = &l_888;
        ++g_919;
        (**g_571) = &l_887;

        ;
        (**g_571) = (*g_572);
    }

    ;
    (*g_230) ^= (safe_add_func_uint16_t_u_u(p_43, ((safe_add_func_int64_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(l_915)), (func_55(p_42) != ((safe_mul_func_uint16_t_u_u((p_42 < 0xE98F48B73A5177CFLL), (~l_910))) <= (safe_div_func_int64_t_s_s(l_915, p_42)))))), l_935)) < p_42), p_42)) < p_42)));
    if ((((((g_177 < ((l_935 != l_906) && func_55(l_936))) == (&g_572 == (void*)0)) && 18446744073709551614UL) == (safe_lshift_func_uint8_t_u_u(func_55(p_42), 1))) && l_939))
    {
        int *l_940 = &l_904;
        int *l_941 = &l_910;
        int l_942 = 1L;
        int *l_943 = &l_844;
        int *l_944 = &l_887;
        int *l_945 = &l_910;
        int *l_946 = &g_75;
        int *l_947 = (void*)0;
        int *l_948 = &l_904;
        int *l_949 = &g_683;
        int *l_950 = (void*)0;
        int *l_951 = &l_910;
        int *l_952 = &l_887;
        int *l_953 = &l_904;
        int *l_954 = &l_887;
        int *l_955 = (void*)0;
        int *l_956 = &l_844;
        int *l_957 = &l_904;
        int *l_958 = &l_915;
        int l_959 = 0xF62CA21BL;
        int *l_960 = &l_844;
        int *l_961 = &l_880;
        int *l_962 = &l_904;
        int *l_963 = &l_942;
        int *l_964 = &l_844;
        int *l_965 = &l_904;
        int *l_966 = &g_75;
        int *l_967 = &l_942;
        int *l_968 = &l_915;
        int l_969 = 0L;
        int *l_970 = &l_887;
        int *l_971 = &l_969;
        int *l_972 = &l_904;
        int *l_973 = &l_959;
        int *l_974 = &l_910;
        int *l_975 = &l_959;
        --g_977;
        (*l_960) = l_915;
    }
    else
    {
        char l_980 = 0L;
        l_980 &= p_42;
    }
    for (g_64 = 0; (g_64 <= 13); g_64 = safe_add_func_uint8_t_u_u(g_64, 2))
    {
        int *l_984 = &l_880;
        int *l_985 = &l_910;
        int *l_986 = &l_887;
        int *l_987 = &l_880;
        int *l_988 = &l_844;
        int *l_989 = (void*)0;
        int *l_990 = &l_887;
        int *l_991 = &g_683;
        int *l_992 = (void*)0;
        int *l_993 = &l_844;
        int *l_994 = &l_887;
        int *l_995 = &l_880;
        int *l_996 = &l_844;
        int *l_997 = (void*)0;
        int *l_998 = &l_904;
        int *l_999 = (void*)0;
        int *l_1000 = &g_75;
        int *l_1001 = &l_904;
        int *l_1002 = &g_75;
        int *l_1003 = &l_904;
        int *l_1004 = &g_683;
        int *l_1005 = &g_75;
        int l_1006 = 0xF2CF6669L;
        int *l_1007 = (void*)0;
        int l_1008 = (-6L);
        int *l_1009 = &g_75;
        int *l_1010 = &l_904;
        int *l_1011 = (void*)0;
        int *l_1012 = &g_683;
        int *l_1014 = &l_910;
        int *l_1015 = &l_915;
        int *l_1016 = &g_683;
        int *l_1017 = (void*)0;
        int *l_1018 = (void*)0;
        int *l_1019 = &g_683;
        int *l_1020 = &g_683;
        int *l_1021 = &l_1008;
        int *l_1022 = &l_880;
        int *l_1023 = &g_683;
        int *l_1024 = &l_915;
        int *l_1025 = &l_910;
        int *l_1026 = &g_75;
        int *l_1027 = &l_915;
        int *l_1028 = &l_1008;
        int *l_1029 = &g_683;
        int l_1030 = 0x6937AFC0L;
        int *l_1031 = (void*)0;
        int *l_1034 = &l_1013;
        int *l_1035 = &l_915;
        int *l_1036 = &l_1013;
        int *l_1037 = &l_1013;
        int *l_1038 = (void*)0;
        int *l_1039 = &l_844;
        int *l_1040 = (void*)0;
        (***g_571) = l_983;
        g_1041++;
        for (l_844 = 7; (l_844 == (-27)); --l_844)
        {
            int **l_1046 = (void*)0;
            int ***l_1047 = &l_1046;
            if ((*l_1005))
                break;
            (*l_1047) = l_1046;
            (*g_572) = (*g_572);
            (*g_572) = (*g_572);
        }
    }
    return p_43;


}







static unsigned char func_44(const unsigned p_45, int p_46, unsigned p_47, short p_48)
{
    int * const l_841 = &g_683;
    int **l_842 = &g_230;
    for (g_775 = (-20); (g_775 == 17); g_775 = safe_add_func_int32_t_s_s(g_775, 3))
    {
        (**g_571) = &p_46;

        ;
    }


    (*l_842) = l_841;

    ;
    (*l_842) = (*l_842);
    return (**l_842);
}







static unsigned short func_55(short p_56)
{
    unsigned char l_836 = 6UL;
    l_836++;
    return l_836;
}







static char func_61(unsigned char p_62, const long long p_63)
{
    const int l_67 = 0xCD8491F1L;
    int l_139 = 0L;
    int l_176 = 0xCAA66001L;
    unsigned char l_183 = 0x40L;
    int **l_237 = &g_230;
    unsigned char l_554 = 1UL;
    int *l_588 = &l_176;
    long long l_604 = 0L;
    char l_630 = 7L;
    short l_662 = 0x7147L;
    int l_686 = (-1L);
    int *l_813 = &l_686;
    int *l_814 = &l_139;
    int *l_815 = (void*)0;
    int *l_816 = &l_139;
    int *l_817 = &l_686;
    int *l_818 = &l_686;
    int *l_819 = &g_683;
    int *l_820 = &l_139;
    int *l_821 = (void*)0;
    int *l_822 = &l_139;
    int *l_823 = (void*)0;
    int *l_824 = (void*)0;
    int *l_825 = &g_683;
    int *l_826 = &g_683;
    int *l_827 = (void*)0;
    int *l_828 = (void*)0;
    int *l_829 = &l_139;
    int *l_830 = &l_176;
    int *l_831 = &l_139;
    unsigned char l_832 = 251UL;
    if ((p_62 >= (safe_mod_func_uint8_t_u_u(p_63, l_67))))
    {
        const int l_68 = (-1L);
        int *l_141 = &l_139;
        int **l_140 = &l_141;
        if (g_64)
        {
            int l_78 = (-6L);
            if (l_68)
            {
                int *l_74 = &g_75;
                int l_77 = 0xE76DCB0CL;
                if (g_14)
                {
                    int *l_71 = (void*)0;
                    int **l_70 = &l_71;
                    (*l_70) = g_69;
                    for (p_62 = 0; (p_62 != 27); p_62 = safe_add_func_int8_t_s_s(p_62, 4))
                    {
                        int *l_76 = &g_75;
                        int *l_79 = &l_78;
                        int *l_80 = &g_75;
                        int *l_82 = &l_77;
                        int *l_83 = &l_78;
                        int *l_84 = (void*)0;
                        int *l_85 = &l_78;
                        int *l_86 = &g_75;
                        int *l_87 = &l_77;
                        int *l_88 = &g_75;
                        int *l_89 = &l_77;
                        int *l_90 = (void*)0;
                        int *l_91 = &l_78;
                        int *l_92 = &g_75;
                        int *l_96 = &l_78;
                        int *l_98 = &l_77;
                        int *l_99 = &g_75;
                        int *l_100 = &l_78;
                        int *l_101 = &l_78;
                        int *l_102 = &l_78;
                        int *l_103 = &l_78;
                        int *l_105 = &g_75;
                        int *l_106 = &l_78;
                        int *l_107 = (void*)0;
                        int *l_108 = &l_78;
                        int *l_109 = &l_78;
                        int *l_110 = (void*)0;
                        int *l_111 = &l_77;
                        int *l_112 = &l_77;
                        l_74 = l_74;
                        g_93++;
                        g_113++;
                    }
                }
                else
                {
                    return g_93;
                }
                (*l_74) = (safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(0x8841F9F80411BC31LL, (safe_mul_func_int8_t_s_s(l_78, (safe_sub_func_int64_t_s_s((safe_add_func_uint64_t_u_u(p_62, 0x44E93343DEF57315LL)), (g_93 >= (safe_rshift_func_int16_t_s_u(g_104, 13))))))))), g_81)), (safe_lshift_func_int16_t_s_s(p_62, (safe_lshift_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((safe_mod_func_int64_t_s_s(0xB212F019D465F4E4LL, 0x767EE7A741179D74LL)) <= 65530UL), g_64)) == 0x5F2AL), p_62))))));
            }
            else
            {
                int *l_138 = (void*)0;
                l_78 &= 0xADB298F9L;
                l_139 = l_78;
            }
            return p_63;
        }
        else
        {
            g_75 &= (l_68 < 0x0D08L);
        }
        (*l_140) = &l_139;
    }
    else
    {
        const short l_152 = 0L;
        int *l_154 = &l_139;
        int **l_153 = &l_154;
        int *l_156 = &l_139;
        int *l_157 = &l_139;
        int *l_158 = (void*)0;
        int *l_159 = &g_75;
        int *l_160 = &g_75;
        int *l_161 = &g_75;
        int *l_162 = &l_139;
        int *l_163 = &l_139;
        int *l_164 = &l_139;
        int *l_165 = &l_139;
        int *l_166 = &g_75;
        int *l_167 = (void*)0;
        int *l_168 = (void*)0;
        int *l_169 = &l_139;
        int *l_170 = &g_75;
        int *l_171 = &l_139;
        int *l_172 = &l_139;
        int *l_173 = &g_75;
        int *l_174 = (void*)0;
        int *l_175 = &l_139;
        unsigned l_182 = 0xB27CD67DL;
        unsigned long long l_238 = 0xDF05FF3C1E06D60ALL;
        unsigned l_276 = 0x85FBC085L;
        int l_440 = 0xF6FE1F7AL;
        g_155 ^= (safe_add_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(0x8AL, g_64)) > (~0L)), (safe_sub_func_int32_t_s_s(((-7L) < l_152), ((((void*)0 != l_153) || (1UL || (**l_153))) < 4294967295UL))))), (**l_153))), g_75));
        g_177--;
        if ((safe_div_func_int64_t_s_s(l_182, (l_183 | p_63))))
        {
            int l_194 = (-4L);
            int **l_261 = (void*)0;
            if ((g_97 & ((void*)0 == &l_139)))
            {
                int *l_203 = &l_194;
                int *l_204 = &l_139;
                for (g_64 = 0; (g_64 != 55); g_64++)
                {
                    for (g_104 = (-27); (g_104 > (-17)); ++g_104)
                    {
                        (**l_153) &= p_63;
                        (*l_153) = &g_75;

                        ;
                        if (g_177)
                            break;
                        (*l_161) = p_63;
                    }
                    for (l_182 = 0; (l_182 > 10); l_182 = safe_add_func_int32_t_s_s(l_182, 1))
                    {
                        (*l_166) = (0x48933AC5CED91AC4LL < (0x13B74EAEL | l_67));
                        (*l_161) = p_63;
                        (*l_161) &= (safe_add_func_int64_t_s_s(l_194, p_63));
                        if (g_81)
                            break;
                    }
                    (*l_157) = (&l_194 == &g_75);
                    g_195++;
                }

                ;
                if ((safe_sub_func_uint8_t_u_u(p_62, p_62)))
                {
                    int *l_200 = &g_75;
                    (*l_153) = l_200;

                    ;
                    for (p_62 = 12; (p_62 < 9); p_62 = safe_sub_func_int32_t_s_s(p_62, 5))
                    {
                        (*l_153) = l_203;

                        ;
                        (*l_163) = ((l_204 == &g_75) >= (safe_rshift_func_uint16_t_u_s(p_63, 7)));
                    }

                    ;
                    (*l_172) = (*l_200);
                }
                else
                {
                    const unsigned l_219 = 0x19F0035EL;
                    l_176 = (safe_mul_func_uint16_t_u_u((*l_157), ((safe_sub_func_uint64_t_u_u(((((g_64 && p_63) > ((safe_mul_func_int8_t_s_s(l_194, (!(g_93 | (&l_204 == &g_69))))) >= (safe_div_func_int16_t_s_s(g_64, ((safe_mul_func_int16_t_s_s(0x17EFL, g_195)) ^ p_62))))) >= 0xA39D249FF5904A8ALL) & l_219), (*l_166))) < 0x7EB286D7ADF18600LL)));
                }

                ;
            }
            else
            {
                short l_222 = 6L;
                l_222 = (safe_add_func_int32_t_s_s((-4L), (&g_69 != &g_69)));
                return l_176;
            }

            ;
            (*l_153) = &g_75;

            ;
            l_194 |= (**l_153);
            if ((safe_add_func_uint16_t_u_u(0x3A62L, (+1UL))))
            {
                int *l_229 = &g_75;
                int *l_320 = &l_139;
                long long l_340 = 1L;
                int l_417 = 0x9423C260L;
                int l_433 = (-1L);
                if (((safe_sub_func_int32_t_s_s(l_194, (safe_mul_func_uint16_t_u_u(1UL, g_93)))) & (g_93 != 0x1EL)))
                {
                    unsigned l_239 = 0xC393FB47L;
                    int *l_262 = &l_139;
                    long long l_273 = 0xDDE0D53B31187F98LL;
                    unsigned long long l_277 = 6UL;
                    g_230 = l_229;
                    if ((((safe_mul_func_uint16_t_u_u((&g_69 == &g_69), (safe_rshift_func_uint8_t_u_s(((l_194 < ((safe_div_func_uint32_t_u_u((l_67 == (*l_229)), (0x3EL & (0xC975L > ((void*)0 == l_237))))) == 0x6A6E12AA013F98BFLL)) == 246UL), (*l_160))))) ^ l_238) & l_239))
                    {
                        long long l_254 = 3L;
                        l_254 &= (safe_mul_func_int8_t_s_s(g_155, (((0UL < (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(g_97, 4)), (safe_sub_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((*l_229), 0x9A51L)), (((((safe_sub_func_int8_t_s_s(((((safe_add_func_int64_t_s_s((-3L), (-9L))) & 1UL) < (p_62 | 0x6B2BBD4C00339178LL)) | p_62), g_64)) == (-1L)) >= 0xB0L) & p_62) == g_113)))))) && l_194) & 0UL)));
                        (*l_229) |= (((-1L) && ((*l_237) != (*l_153))) == g_64);
                        (*l_161) = (safe_mul_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((void*)0 == l_261), 6)), g_195));
                    }
                    else
                    {
                        const int *l_263 = &g_75;
                        const int **l_264 = &l_263;
                        (*l_237) = l_262;

                        ;
                        (*l_159) ^= (*g_230);
                        (*l_264) = l_263;
                    }

                    ;
                    l_176 ^= ((safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(((*l_237) == &l_194), l_273)) && (**l_237)), p_62)), (safe_add_func_uint8_t_u_u(p_62, l_276)))), (l_277 <= (*l_229)))) && g_104);
                    if ((safe_div_func_uint8_t_u_u(((0x008CE353L < p_63) ^ ((safe_div_func_int16_t_s_s(p_62, (*l_229))) || (g_97 > (*l_229)))), (safe_sub_func_int16_t_s_s((safe_sub_func_uint8_t_u_u((((void*)0 != &l_262) ^ ((p_63 | (**l_237)) == p_62)), g_104)), (*l_229))))))
                    {
                        int *l_287 = (void*)0;
                        int *l_288 = (void*)0;
                        int *l_289 = &g_75;
                        int *l_290 = &l_194;
                        int *l_292 = &l_176;
                        int *l_293 = &l_139;
                        g_294++;
                        (*l_156) = (**l_237);
                        (*l_153) = (*l_153);
                    }
                    else
                    {
                        return g_177;


                    }
                }
                else
                {
                    int *l_301 = &l_139;
                    if ((safe_div_func_uint8_t_u_u((0x0C62L | (0x54D3L && g_177)), (g_64 ^ (safe_add_func_int8_t_s_s(((((0L || (l_194 < 0x83L)) && (**l_237)) != (**l_237)) | 0UL), 0xE6L))))))
                    {
                        (*l_237) = &g_75;
                        (*l_162) = ((**l_237) < 0x97EFL);
                        (*l_237) = l_301;

                        ;
                        (*l_154) ^= (g_113 <= g_104);
                    }
                    else
                    {
                        (*l_163) &= (-9L);
                        (*l_153) = (*l_153);
                    }

                    ;
                    if (((*l_229) | (safe_unary_minus_func_int8_t_s((safe_lshift_func_int8_t_s_u((*l_301), (*l_154)))))))
                    {
                        (**l_153) &= (8UL && (((0xB5L ^ ((~(g_93 < ((safe_add_func_int32_t_s_s(p_63, (safe_div_func_int64_t_s_s((!(safe_rshift_func_int8_t_s_s(g_286, ((safe_rshift_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((((*l_237) == (void*)0) > g_319), 0xF88FC330L)), 6)), g_195)), p_63)) & 0x834D8CA7F0EEFAABLL)))), 7L)))) && p_63))) > 0x153FFEB0L)) != (-1L)) > 0x48E6692431AA5C5DLL));
                        (*l_153) = l_320;

                        ;
                    }
                    else
                    {
                        return g_294;


                    }

                    ;
                    (*l_237) = l_301;

                    ;
                }

                ;
                ;
                for (g_177 = 0; (g_177 > 38); g_177++)
                {
                    char l_329 = 0x61L;
                    int l_341 = (-6L);
                    l_341 |= (((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(((*l_156) <= ((*g_230) >= (l_329 | g_81))), 3)), g_104)), ((safe_div_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(0UL, (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s((*l_162), (safe_add_func_int64_t_s_s((**l_153), l_340)))), 6)))), p_63)) | g_319))) == 0x5087L) >= (*l_229));
                    (*l_160) = (*l_163);
                    if ((safe_mod_func_int8_t_s_s(((safe_add_func_int64_t_s_s((*l_320), (safe_mul_func_int16_t_s_s((**l_237), (*l_229))))) | ((*l_153) != (*l_153))), (-5L))))
                    {
                        (*l_170) ^= 0x199CA37CL;
                    }
                    else
                    {
                        unsigned char l_348 = 247UL;
                        ++l_348;
                        if (p_63)
                            continue;
                    }
                    l_341 &= ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((g_195 != p_63), g_294)), (**l_237))) || (**l_237));
                }
                if (((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s((0x26L ^ (**l_237)), (safe_mul_func_uint16_t_u_u(0xEFB7L, g_286)))), p_63)) <= (safe_sub_func_uint64_t_u_u(g_177, ((safe_sub_func_uint16_t_u_u((safe_div_func_int8_t_s_s((~((safe_add_func_int8_t_s_s(p_62, ((p_63 | p_62) && g_319))) | 0x3CL)), 1L)), p_62)) == p_62)))))
                {
                    unsigned l_373 = 0UL;
                    int l_376 = 0x8B05D211L;
                    int l_377 = 0x81F414D7L;
                    int l_379 = 0xBC5EB18EL;
                    int l_380 = 0x04C1EA07L;
                    (*l_153) = &g_75;

                    ;
                    (*l_161) = (safe_mul_func_int16_t_s_s((p_62 > g_75), (0xFEBA5A16B7DE68C3LL > g_64)));
                    for (l_183 = 0; (l_183 > 44); l_183 = safe_add_func_int32_t_s_s(l_183, 3))
                    {
                        (*l_237) = &g_75;

                        ;
                        (*l_166) = (g_104 | 0xA7043D30L);
                        if ((*g_230))
                            break;
                    }
                    if ((*g_230))
                    {
                        int l_378 = 1L;
                        int *l_381 = &l_377;
                        int *l_382 = &l_376;
                        int *l_383 = &l_380;
                        int *l_384 = &g_75;
                        int *l_385 = &l_376;
                        int *l_386 = &l_194;
                        int *l_387 = (void*)0;
                        int *l_388 = &l_176;
                        int *l_390 = &l_377;
                        int *l_391 = &g_75;
                        int *l_392 = &l_378;
                        int *l_394 = &l_139;
                        int *l_395 = &l_377;
                        int *l_396 = &l_378;
                        int *l_397 = &l_380;
                        int *l_398 = &l_380;
                        int *l_399 = &l_194;
                        int *l_400 = &l_176;
                        int *l_401 = &l_376;
                        int l_402 = (-1L);
                        int *l_403 = &g_75;
                        int *l_404 = (void*)0;
                        int *l_405 = (void*)0;
                        int *l_406 = (void*)0;
                        l_373--;
                        g_230 = (void*)0;

                        ;
                        --g_407;
                        (*l_164) = (*l_395);
                    }
                    else
                    {
                        int *l_410 = &l_194;
                        int *l_411 = (void*)0;
                        int l_412 = 7L;
                        int *l_413 = &l_380;
                        int *l_414 = &l_139;
                        int *l_415 = &l_376;
                        int *l_416 = &l_377;
                        int *l_418 = &l_139;
                        int *l_419 = &l_379;
                        int *l_420 = &l_139;
                        int *l_421 = &l_379;
                        int *l_422 = (void*)0;
                        int *l_423 = &l_412;
                        int *l_424 = &l_379;
                        int *l_425 = &l_377;
                        int *l_426 = &l_139;
                        int *l_427 = &l_380;
                        int *l_428 = &g_75;
                        int *l_429 = (void*)0;
                        int *l_430 = &l_194;
                        int *l_431 = &l_377;
                        int *l_432 = &l_194;
                        int *l_434 = (void*)0;
                        int *l_435 = (void*)0;
                        int *l_436 = &l_433;
                        int *l_437 = &l_194;
                        int *l_438 = &l_194;
                        int *l_439 = &l_176;
                        g_230 = &g_75;

                        ;
                        l_410 = &g_75;

                        ;
                        g_441--;
                    }

                    ;
                }
                else
                {
                    return g_407;


                }

                ;
                ;
                return g_319;
            }
            else
            {
                (*l_165) = (*l_175);
                for (g_93 = (-29); (g_93 != 5); g_93 = safe_add_func_uint32_t_u_u(g_93, 5))
                {
                    (*g_230) = (-8L);
                    return g_113;
                }
            }
        }
        else
        {
            int ***l_446 = &l_237;
            int l_466 = 0xD6611CEDL;
            (*l_446) = (void*)0;

            ;
            if ((&g_75 != (void*)0))
            {
                int **l_451 = &l_170;
                int l_456 = 0x213E5AC4L;
                unsigned long long l_478 = 0x184E34E2CBAFA041LL;
                int l_485 = 0x730B52F0L;
                if ((~p_62))
                {
                    int l_455 = 0x87DF7D04L;
                    for (g_75 = 0; (g_75 < (-15)); g_75 = safe_sub_func_int8_t_s_s(g_75, 7))
                    {
                        (*l_153) = &g_75;

                        ;
                        (*l_164) = p_62;
                        (*l_175) &= (*g_230);
                    }

                    ;
                    l_139 &= (*g_230);
                    for (l_440 = 0; (l_440 < (-11)); l_440 = safe_sub_func_int8_t_s_s(l_440, 1))
                    {
                        (*l_154) = ((void*)0 != l_451);
                        (*l_165) = (*g_230);
                    }
                    for (g_113 = 24; (g_113 == 11); g_113 = safe_sub_func_int32_t_s_s(g_113, 9))
                    {
                        long long l_454 = 0x67DE76BAA813B8E7LL;
                        int *l_457 = &g_75;
                        int *l_458 = &l_176;
                        int *l_459 = &g_75;
                        int *l_460 = &g_75;
                        int *l_461 = &l_139;
                        int *l_462 = (void*)0;
                        int *l_463 = (void*)0;
                        int *l_464 = &l_440;
                        int *l_465 = &l_440;
                        int *l_467 = &l_466;
                        int *l_468 = &l_176;
                        int *l_469 = &l_139;
                        int *l_470 = &l_466;
                        int *l_471 = &l_139;
                        int *l_472 = &l_176;
                        int *l_473 = &l_466;
                        int *l_474 = &l_139;
                        int *l_475 = &l_139;
                        int *l_476 = &l_176;
                        int *l_477 = (void*)0;
                        --l_478;
                    }
                }
                else
                {
                    unsigned long long l_486 = 1UL;
                    (*l_169) = (*g_230);
                    (*l_159) = ((safe_sub_func_int32_t_s_s((p_62 != (safe_add_func_int32_t_s_s(l_485, (p_63 <= ((p_62 != (((void*)0 != (*l_153)) ^ 0L)) | l_486))))), g_195)) != p_63);
                    (*l_163) = (((safe_lshift_func_int8_t_s_s(l_176, (1L <= (safe_unary_minus_func_int8_t_s(g_81))))) || g_104) >= g_286);
                }

                ;
            }
            else
            {
                int *l_490 = &l_466;
                (*l_153) = &g_75;

                ;
                (*l_153) = (*l_153);
                l_490 = &g_75;

                ;
                (*l_153) = (*l_153);
            }

            ;
            for (g_177 = 0; (g_177 == 13); ++g_177)
            {
                char l_493 = 8L;
                (*g_230) ^= (l_493 && (!((&g_75 == &g_75) <= (!(p_62 && (&g_69 != l_237))))));
            }
            (*l_162) = (0x7822L != ((safe_lshift_func_uint8_t_u_u((p_62 <= (safe_add_func_int16_t_s_s(p_63, ((g_64 || 0UL) >= (~0x0BC75360L))))), ((*g_230) <= (0x4C04760FD3A3C413LL < (*l_173))))) || p_62));
        }

        ;
        ;
    }

    ;
    if ((p_62 <= l_183))
    {
        unsigned short l_502 = 0x8A64L;
        int l_507 = 0L;
        int *l_513 = &l_139;
        unsigned long long l_531 = 1UL;
        unsigned l_609 = 0x9FE29DAEL;
        int l_644 = (-1L);
        if (l_502)
        {
            l_507 = ((safe_add_func_int32_t_s_s((*g_230), g_389)) < (safe_lshift_func_int8_t_s_s(p_62, p_63)));
        }
        else
        {
            short l_510 = 1L;
            const int *l_511 = &l_176;
            int l_542 = (-1L);
            if ((safe_mul_func_uint8_t_u_u(0x57L, l_510)))
            {
                const int **l_512 = &l_511;
                (*l_512) = l_511;
                (*l_513) = ((void*)0 != l_513);
                (*g_230) ^= (*l_513);
                for (l_510 = 17; (l_510 >= (-6)); l_510 = safe_sub_func_int64_t_s_s(l_510, 5))
                {
                    (*g_230) = (p_62 && 1L);
                }
            }
            else
            {
                int l_516 = 0xD2702151L;
                int *l_517 = &g_75;
                int *l_518 = &l_507;
                int *l_519 = &l_516;
                int *l_520 = &l_176;
                int *l_521 = &l_139;
                int *l_522 = &l_516;
                int *l_523 = &g_75;
                int *l_524 = &l_507;
                int *l_525 = &l_507;
                int *l_526 = &g_75;
                int *l_527 = &l_139;
                int *l_528 = &l_176;
                int *l_529 = &g_75;
                int *l_530 = &g_75;
                l_531++;
                if ((safe_add_func_int32_t_s_s((p_63 > (p_63 != (p_62 & ((safe_lshift_func_uint8_t_u_u(((l_511 != (void*)0) != g_389), 2)) || 0UL)))), (safe_lshift_func_uint8_t_u_s(((((safe_div_func_int32_t_s_s(0x7ED652D0L, ((g_177 <= g_195) & p_63))) != 0x96L) && 4294967291UL) == 4294967295UL), 2)))))
                {
                    unsigned long long l_543 = 18446744073709551607UL;
                    (*l_517) = 0L;
                    (*l_524) = (*g_230);
                    --l_543;
                }
                else
                {
                    unsigned long long l_551 = 0xE487063272226A99LL;
                    l_529 = &g_75;
                    if ((safe_div_func_int64_t_s_s(((*l_513) ^ 0x9F912CC4L), g_14)))
                    {
                        int **l_548 = &l_524;
                        (*l_548) = &g_75;

                        ;
                        l_542 ^= (*g_230);
                    }
                    else
                    {
                        int *l_549 = &l_516;
                        int **l_550 = &l_549;
                        (*l_550) = l_549;
                        --l_551;
                        --l_554;
                    }

                    ;
                }

                ;
                for (g_393 = 9; (g_393 >= (-23)); g_393--)
                {
                    int **l_585 = (void*)0;
                    for (g_97 = 0; (g_97 > 2); g_97++)
                    {
                        (*l_513) = p_62;
                        if (p_62)
                            break;
                        (*l_525) |= 0x3C7EE490L;
                        return g_97;
                    }
                    for (g_195 = 0; (g_195 != 16); ++g_195)
                    {
                        int *l_563 = &l_542;
                        int l_577 = 0x20669BB4L;
                        l_563 = &g_75;

                        ;
                        (*l_513) &= (safe_mod_func_int32_t_s_s((safe_unary_minus_func_int16_t_s(g_97)), (safe_mul_func_int8_t_s_s(p_62, ((((safe_div_func_uint16_t_u_u((*l_563), (*l_563))) > g_407) == (+((!((void*)0 == g_571)) == (0xA9AAFF6A0F1A0B10LL ^ (safe_add_func_uint16_t_u_u((safe_div_func_int16_t_s_s((((void*)0 != &l_527) != g_113), l_577)), 0x25C3L)))))) && g_389)))));
                        (*l_518) |= (safe_add_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(g_582, (safe_rshift_func_int8_t_s_u(p_63, (p_62 >= g_582))))) != ((*g_571) != l_585)), (safe_mod_func_int8_t_s_s(((*l_563) <= (((&l_507 != l_588) & p_63) <= (*l_530))), p_63))));
                        (**g_572) = p_63;
                    }
                    if ((*l_522))
                        continue;
                }
                for (g_104 = (-24); (g_104 >= 24); g_104 = safe_add_func_uint64_t_u_u(g_104, 5))
                {
                    (*g_230) &= p_63;
                    if (p_63)
                        break;
                    if (p_63)
                        break;
                    (*l_524) = p_63;
                }
            }
            (*g_572) = (void*)0;

            ;
            if ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(6UL, (safe_rshift_func_int16_t_s_u(0x4BF3L, g_597)))) == (((safe_mod_func_int8_t_s_s(p_62, g_177)) > (~0x87D3886AL)) | (g_600 && (&l_542 == (**g_571))))), p_62)))
            {
                int *l_601 = &l_542;
                unsigned long long l_613 = 1UL;
                l_601 = (*g_572);

                ;
                l_542 = ((0x6FF9L > (safe_add_func_uint32_t_u_u((((((&l_542 != (**g_571)) ^ (g_64 >= (0x68L <= g_104))) > (*l_513)) != ((**g_571) != (void*)0)) >= g_81), g_286))) >= g_93);
                if ((l_604 > ((safe_add_func_int64_t_s_s((l_609 >= ((void*)0 == &l_588)), p_63)) > g_14)))
                {
                    long long l_612 = 1L;
                    (*l_513) = (safe_mod_func_int64_t_s_s((g_81 || (l_612 || g_407)), g_14));
                }
                else
                {
                    int l_616 = 0xF1DE974FL;
                    (*l_588) = l_613;
                    for (g_97 = (-13); (g_97 > (-17)); --g_97)
                    {
                        return l_616;
                    }
                }
            }
            else
            {
                unsigned l_617 = 4294967295UL;
                int l_629 = 0xC7D03E1FL;
                int **l_632 = &g_230;
                if (l_617)
                {
                    long long l_626 = 1L;
                    for (l_510 = 0; (l_510 != 12); l_510++)
                    {
                        unsigned long long l_622 = 1UL;
                        int *l_623 = (void*)0;
                        l_629 = (safe_mul_func_uint8_t_u_u(((((l_622 < (g_81 || ((void*)0 == &g_572))) <= (&l_542 != l_623)) && (~(l_617 ^ ((safe_div_func_uint16_t_u_u(((l_626 && (safe_lshift_func_int16_t_s_u(g_294, 7))) == l_617), 0x305CL)) == g_441)))) < l_617), g_75));
                        if (l_630)
                            break;
                    }
                    (*l_513) = (1UL ^ (g_177 != g_75));
                    return p_62;
                }
                else
                {
                    int *l_636 = &l_629;
                    if ((g_113 < 0L))
                    {
                        (*l_588) = (0x5EF2AA02L >= (safe_unary_minus_func_int64_t_s(g_600)));
                        (*l_588) = ((l_632 != (void*)0) >= 0x6545FCD3875BE9CCLL);
                        (*l_588) = p_63;
                    }
                    else
                    {
                        unsigned l_633 = 0x9778D70FL;
                        l_633++;
                    }
                    (*l_636) |= (((g_155 ^ (*l_511)) & (*l_513)) | g_81);
                }
            }
        }

        ;
        (*g_572) = (void*)0;

        ;
        for (g_291 = 29; (g_291 < (-3)); g_291 = safe_sub_func_int64_t_s_s(g_291, 8))
        {
            int *l_639 = &l_139;
            int *l_640 = (void*)0;
            int *l_641 = &l_176;
            int *l_642 = &g_75;
            int *l_643 = (void*)0;
            int *l_645 = (void*)0;
            int l_646 = 0L;
            int *l_647 = &l_507;
            int *l_648 = &l_507;
            --g_649;
        }
    }
    else
    {
        char l_656 = 0x92L;
        int *l_658 = &g_75;
        int *l_659 = &l_176;
        int *l_660 = &g_75;
        int *l_661 = (void*)0;
        int *l_663 = (void*)0;
        int *l_664 = &l_139;
        int l_665 = 0xB9280CF3L;
        int *l_666 = &l_139;
        int *l_667 = &l_665;
        int *l_668 = &l_176;
        int *l_669 = &g_75;
        int *l_670 = &l_176;
        int l_671 = 9L;
        int *l_672 = &g_75;
        int *l_673 = &l_671;
        int *l_674 = (void*)0;
        int *l_675 = &l_139;
        int *l_676 = &l_671;
        int *l_677 = &l_139;
        int *l_678 = &l_176;
        int *l_679 = &l_176;
        int *l_681 = &l_176;
        int *l_682 = &l_139;
        int *l_684 = &g_75;
        int *l_685 = (void*)0;
        int *l_687 = &l_176;
        int *l_688 = &l_139;
        int *l_689 = &l_665;
        int *l_690 = (void*)0;
        int *l_691 = &l_176;
        int *l_692 = &g_683;
        int *l_693 = &g_683;
        int *l_694 = &l_139;
        int *l_695 = &l_665;
        int *l_696 = (void*)0;
        int *l_697 = &l_176;
        int *l_698 = (void*)0;
        int *l_699 = (void*)0;
        int *l_700 = (void*)0;
        int *l_701 = &g_75;
        int *l_702 = &l_686;
        int *l_703 = (void*)0;
        int *l_704 = &l_665;
        (*g_230) = ((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((l_656 >= g_600), 4)), ((safe_unary_minus_func_uint32_t_u((+(l_656 | l_656)))) || l_656))) & 0UL);
        g_705++;
        (*l_667) &= (*l_684);
    }

    ;
    for (g_104 = 13; (g_104 != (-28)); g_104--)
    {
        int l_812 = (-5L);
        for (p_62 = (-12); (p_62 == 13); ++p_62)
        {
            int l_716 = 1L;
            int *l_717 = &g_75;
            int l_738 = 0x3B1CA12DL;
            int l_787 = 0x91258D43L;
            for (l_139 = 0; (l_139 > (-16)); --l_139)
            {
                (**g_571) = (*g_572);
                (*l_588) = (1L <= (safe_lshift_func_int8_t_s_u((-1L), p_62)));
                (*g_572) = (**g_571);
                if (l_716)
                {
                    (*l_588) &= p_62;
                    return g_600;
                }
                else
                {
                    int *l_718 = &g_683;
                    int *l_719 = &l_176;
                    int *l_720 = &g_683;
                    int *l_721 = &g_75;
                    int *l_722 = &g_75;
                    int *l_723 = (void*)0;
                    int *l_724 = &l_176;
                    int *l_725 = &g_683;
                    int l_726 = 0x7B809886L;
                    int *l_727 = &l_716;
                    int *l_728 = &g_75;
                    int *l_729 = &g_75;
                    int *l_730 = &l_176;
                    int *l_731 = &g_75;
                    int *l_732 = (void*)0;
                    int *l_733 = &l_176;
                    int *l_734 = &g_683;
                    int *l_735 = (void*)0;
                    int *l_736 = &g_683;
                    int *l_737 = &l_176;
                    int *l_739 = &l_738;
                    int *l_740 = &g_75;
                    int *l_741 = &g_75;
                    int *l_742 = &g_75;
                    int *l_743 = &l_726;
                    int *l_744 = &l_686;
                    int *l_745 = (void*)0;
                    int *l_746 = &l_726;
                    int *l_747 = &l_176;
                    int *l_748 = &g_683;
                    int *l_749 = &l_716;
                    int *l_750 = &g_75;
                    int *l_751 = (void*)0;
                    int *l_752 = &l_716;
                    int *l_753 = &l_726;
                    int *l_754 = &l_176;
                    int *l_755 = &l_176;
                    int *l_756 = (void*)0;
                    int *l_757 = &l_716;
                    int *l_758 = &l_726;
                    int *l_759 = &g_683;
                    int *l_760 = &g_75;
                    int *l_761 = (void*)0;
                    int *l_762 = &l_726;
                    int *l_763 = &l_176;
                    int *l_764 = &l_686;
                    int *l_765 = &g_683;
                    int *l_766 = &l_726;
                    int *l_767 = &l_716;
                    int *l_768 = &l_176;
                    int *l_769 = &l_716;
                    int *l_770 = &l_738;
                    int *l_771 = &l_738;
                    int *l_772 = &l_726;
                    int *l_773 = &l_738;
                    int *l_774 = &l_686;
                    int *l_776 = &l_176;
                    int *l_777 = &l_738;
                    int l_778 = (-5L);
                    int *l_779 = &g_75;
                    int *l_780 = &g_75;
                    int *l_781 = &l_716;
                    int *l_782 = (void*)0;
                    int *l_783 = &g_683;
                    int *l_784 = (void*)0;
                    int *l_785 = &g_75;
                    int *l_786 = &l_726;
                    int *l_788 = &l_176;
                    int l_789 = (-1L);
                    int *l_790 = (void*)0;
                    int *l_791 = &l_686;
                    int *l_792 = &l_686;
                    int *l_793 = &l_716;
                    int *l_794 = &g_75;
                    int *l_795 = (void*)0;
                    int *l_796 = &g_75;
                    int *l_797 = &l_726;
                    int *l_798 = &l_176;
                    int *l_799 = &l_686;
                    int *l_800 = &l_716;
                    int *l_801 = &l_789;
                    int *l_802 = &l_787;
                    int *l_804 = (void*)0;
                    int *l_805 = &l_787;
                    int *l_806 = &l_787;
                    int *l_807 = &l_787;
                    int *l_808 = &l_176;
                    if (p_62)
                        break;
                    l_717 = (**g_571);
                    (*l_588) ^= p_63;
                    --g_809;
                }
            }

            ;
            if (l_812)
                continue;
            l_812 &= (*l_588);
        }
        (**g_571) = (**g_571);
    }
    l_832--;
    return p_63;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_291, "g_291", print_hash_value);
    transparent_crc(g_294, "g_294", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_582, "g_582", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_649, "g_649", print_hash_value);
    transparent_crc(g_680, "g_680", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_775, "g_775", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_809, "g_809", print_hash_value);
    transparent_crc(g_919, "g_919", print_hash_value);
    transparent_crc(g_976, "g_976", print_hash_value);
    transparent_crc(g_977, "g_977", print_hash_value);
    transparent_crc(g_1032, "g_1032", print_hash_value);
    transparent_crc(g_1041, "g_1041", print_hash_value);
    transparent_crc(g_1111, "g_1111", print_hash_value);
    transparent_crc(g_1154, "g_1154", print_hash_value);
    transparent_crc(g_1192, "g_1192", print_hash_value);
    transparent_crc(g_1198, "g_1198", print_hash_value);
    transparent_crc(g_1227, "g_1227", print_hash_value);
    transparent_crc(g_1259, "g_1259", print_hash_value);
    transparent_crc(g_1373, "g_1373", print_hash_value);
    transparent_crc(g_1455, "g_1455", print_hash_value);
    transparent_crc(g_1457, "g_1457", print_hash_value);
    transparent_crc(g_1583, "g_1583", print_hash_value);
    transparent_crc(g_1622, "g_1622", print_hash_value);
    transparent_crc(g_1674, "g_1674", print_hash_value);
    transparent_crc(g_1785, "g_1785", print_hash_value);
    transparent_crc(g_1790, "g_1790", print_hash_value);
    transparent_crc(g_1804, "g_1804", print_hash_value);
    transparent_crc(g_1809, "g_1809", print_hash_value);
    transparent_crc(g_1919, "g_1919", print_hash_value);
    transparent_crc(g_1957, "g_1957", print_hash_value);
    transparent_crc(g_2000, "g_2000", print_hash_value);
    transparent_crc(g_2065, "g_2065", print_hash_value);
    transparent_crc(g_2173, "g_2173", print_hash_value);
    transparent_crc(g_2177, "g_2177", print_hash_value);
    transparent_crc(g_2212, "g_2212", print_hash_value);
    transparent_crc(g_2245, "g_2245", print_hash_value);
    transparent_crc(g_2252, "g_2252", print_hash_value);
    transparent_crc(g_2254, "g_2254", print_hash_value);
    transparent_crc(g_2328, "g_2328", print_hash_value);
    transparent_crc(g_2379, "g_2379", print_hash_value);
    transparent_crc(g_2380, "g_2380", print_hash_value);
    transparent_crc(g_2495, "g_2495", print_hash_value);
    transparent_crc(g_2499, "g_2499", print_hash_value);
    transparent_crc(g_2508, "g_2508", print_hash_value);
    transparent_crc(g_2517, "g_2517", print_hash_value);
    transparent_crc(g_2544, "g_2544", print_hash_value);
    transparent_crc(g_2547, "g_2547", print_hash_value);
    transparent_crc(g_2549, "g_2549", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
