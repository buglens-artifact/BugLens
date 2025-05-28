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



static unsigned g_11 = 1UL;
static unsigned short g_81[10] = {0x01FBL,0x01FBL,0x01FBL,0x01FBL,0x01FBL,0x01FBL,0x01FBL,0x01FBL,0x01FBL,0x01FBL};
static int g_94 = 0xFF9F6C92L;
static int g_95 = 0xFB129D73L;
static unsigned g_106 = 0UL;
static unsigned short g_110 = 0x94C0L;
static unsigned g_171 = 4294967295UL;
static const char g_207 = 0x0DL;
static int g_209 = 0x903A0161L;
static unsigned g_218 = 0UL;
static int g_219[6] = {(-6L),(-6L),0xA68E1F30L,(-6L),(-6L),0xA68E1F30L};
static unsigned short g_232 = 0xB2D8L;
static unsigned g_275 = 18446744073709551615UL;
static int g_276 = 1L;
static unsigned g_290 = 0x1627D106L;
static const int g_321 = 0x1FDFEFE2L;
static unsigned short g_356 = 0UL;
static volatile int g_357 = 0x994FFB7BL;
static int g_455 = 0x50AA98B1L;
static const volatile short g_542[10][8][3] = {{{0x01C0L,0x079CL,(-1L)},{0x4CF1L,0xB821L,0x4CF1L},{0x079CL,(-2L),2L},{0xFA35L,(-1L),0L},{(-1L),2L,1L},{(-6L),(-9L),(-1L)},{(-1L),0x20F9L,(-1L)},{0xFA35L,0xFA35L,0xB821L}},{{0x079CL,0x8CF6L,0x0A5AL},{0x4CF1L,2L,0xFA35L},{0x8CF6L,0x20F9L,2L},{1L,0xB821L,(-6L)},{0x3843L,0xBF34L,0xBF34L},{0x897FL,0x1E44L,(-1L)},{0x079CL,0x01C0L,8L},{(-1L),0L,(-1L)}},{{8L,0x8CF6L,(-1L)},{0xFA35L,0L,0x2258L},{8L,0x01C0L,8L},{0L,0x1E44L,0xB821L},{(-2L),0xBF34L,0x2C0AL},{0x2258L,0xB821L,0L},{(-6L),0x20F9L,0x0A5AL},{0x2258L,(-5L),1L}},{{(-2L),(-2L),0x01C0L},{0L,(-6L),0x24E8L},{8L,(-1L),(-2L)},{0xFA35L,2L,0x4CF1L},{8L,8L,(-2L)},{(-1L),0x24E8L,0x24E8L},{0x079CL,(-6L),0x01C0L},{0x897FL,(-1L),1L}},{{0x3843L,1L,0x0A5AL},{1L,0xFA35L,0L},{0x8CF6L,1L,0x2C0AL},{0xB821L,(-1L),0xB821L},{1L,(-6L),8L},{(-6L),0x24E8L,0x2258L},{0x2C0AL,8L,(-1L)},{0x1E44L,2L,(-1L)}},{{0x2C0AL,(-1L),8L},{(-6L),(-6L),(-9L)},{0x0A5AL,(-1L),1L},{0x2258L,0xFA35L,(-5L)},{0x20F9L,0x01C0L,(-1L)},{(-6L),0x2258L,(-5L)},{(-6L),1L,1L},{(-1L),1L,(-9L)}},{{0x3843L,0x9245L,(-2L)},{0x1E44L,(-1L),0x897FL},{(-2L),0x20F9L,0xBF34L},{2L,(-1L),0x4CF1L},{0x2C0AL,0x9245L,0x2C0AL},{(-1L),1L,0x2258L},{(-1L),1L,2L},{0x4CF1L,0x2258L,0x24E8L}},{{8L,0x01C0L,0x079CL},{0x4CF1L,0xFA35L,(-6L)},{(-1L),(-1L),0x9245L},{(-1L),(-5L),0L},{0x2C0AL,0x8CF6L,(-1L)},{2L,(-1L),0L},{(-2L),0x2C0AL,(-1L)},{0x1E44L,0L,0L}},{{0x3843L,8L,0x9245L},{(-1L),(-9L),(-6L)},{(-6L),0x0A5AL,0x079CL},{(-6L),2L,0x24E8L},{0x20F9L,0x0A5AL,2L},{0x2258L,(-9L),0x2258L},{0x0A5AL,8L,0x2C0AL},{(-5L),0L,0x4CF1L}},{{2L,0x2C0AL,0xBF34L},{1L,(-1L),0L},{8L,(-2L),(-6L)},{1L,1L,2L},{0xBF34L,8L,(-1L)},{(-9L),(-6L),1L},{(-1L),0x8CF6L,0x2C0AL},{0x1E44L,(-9L),1L}}};
static short g_598 = 0xF6EDL;
static int g_600 = 0x676C1A8EL;
static int g_642 = 0x2D04C37EL;
static unsigned g_647[5][5] = {{0xD1038098L,0xF9DE3774L,0x61A59D0FL,0xF9DE3774L,0xD1038098L},{0UL,0x5F3D5748L,6UL,0x5F3D5748L,0UL},{0xD1038098L,0xF9DE3774L,0x61A59D0FL,0xF9DE3774L,0xD1038098L},{0UL,0x5F3D5748L,6UL,0x5F3D5748L,0UL},{0xD1038098L,0xF9DE3774L,0x61A59D0FL,0xF9DE3774L,0xD1038098L}};
static char g_650 = (-1L);
static unsigned g_793 = 0UL;
static const unsigned char g_817 = 0xA8L;
static int g_862 = 0x9963F794L;
static unsigned g_909 = 1UL;
static int g_911 = 0L;
static unsigned g_972 = 1UL;
static unsigned g_1001 = 18446744073709551615UL;
static char g_1027 = 6L;
static short g_1050[1] = {(-3L)};
static int g_1061 = 3L;
static unsigned short g_1070 = 0xB249L;
static int g_1099 = 0x30D65FC5L;
static unsigned char g_1161 = 0x0BL;
static unsigned char g_1218 = 0x46L;
static char g_1220 = (-1L);
static unsigned short g_1245 = 0x274EL;
static unsigned g_1249 = 4294967289UL;
static unsigned short g_1394 = 0UL;
static short g_1669 = 0L;
static int g_1717[9][8][3] = {{{0x148C497FL,0x9F255CECL,(-1L)},{(-3L),0x357C3BA0L,0x357C3BA0L},{(-9L),(-1L),0x9F255CECL},{0xE26C17C3L,0x278A3A8CL,1L},{0x9F255CECL,0xF259288AL,0x5E9501F1L},{(-9L),0xBBB60476L,(-8L)},{0xB9E33EF1L,0xF259288AL,(-2L)},{(-1L),0x278A3A8CL,(-9L)}},{{(-3L),(-1L),(-6L)},{(-9L),0x357C3BA0L,(-9L)},{1L,0x9F255CECL,1L},{4L,1L,0x8479BC33L},{0x15002F9EL,0x5E9501F1L,0x50F2F05EL},{1L,(-8L),(-1L)},{0x15002F9EL,(-2L),0x3D5B1C04L},{4L,(-9L),0x864CAF3AL}},{{1L,(-6L),1L},{0x8479BC33L,0x8479BC33L,0xF16C1562L},{0x148C497FL,0x15002F9EL,1L},{1L,(-8L),(-5L)},{1L,0xF259288AL,(-6L)},{(-1L),1L,(-5L)},{1L,(-9L),1L},{0x278A3A8CL,(-9L),0xF16C1562L}},{{0x9F255CECL,1L,1L},{0x864CAF3AL,0xF16C1562L,(-9L)},{0x07C5ED44L,1L,(-9L)},{(-9L),(-5L),1L},{0x15002F9EL,(-6L),0xF259288AL},{(-1L),(-5L),(-8L)},{(-1L),1L,0x15002F9EL},{0xE26C17C3L,0xF16C1562L,0x8479BC33L}},{{(-2L),1L,(-2L)},{(-2L),(-9L),(-1L)},{0xC4C7A2B9L,(-9L),0x50F2F05EL},{0xBC26688AL,1L,3L},{(-9L),0xF259288AL,(-1L)},{0xBC26688AL,(-8L),(-3L)},{0xC4C7A2B9L,0x15002F9EL,1L},{(-2L),0x8479BC33L,(-1L)}},{{(-2L),(-2L),(-3L)},{0xE26C17C3L,(-1L),(-8L)},{(-1L),0x50F2F05EL,0L},{(-1L),3L,(-9L)},{0x15002F9EL,(-1L),0L},{(-9L),(-3L),(-8L)},{0x07C5ED44L,1L,(-3L)},{0x864CAF3AL,(-1L),(-1L)}},{{0x9F255CECL,0xC4C7A2B9L,0xB9E33EF1L},{0x8479BC33L,(-8L),0x278A3A8CL},{0xB9E33EF1L,(-3L),0x3D325819L},{(-1L),(-1L),1L},{0L,(-3L),0x5E9501F1L},{4L,(-8L),(-1L)},{(-6L),0xC4C7A2B9L,(-1L)},{0xBC26688AL,(-5L),0xBC26688AL}},{{0x3D5B1C04L,0xB9E33EF1L,1L},{(-9L),0x278A3A8CL,(-1L)},{7L,0x3D325819L,(-1L)},{0x278A3A8CL,1L,4L},{7L,0x5E9501F1L,0x07C5ED44L},{(-9L),(-1L),0x357C3BA0L},{0x3D5B1C04L,(-1L),0L},{0xBC26688AL,0xBC26688AL,0xBBB60476L}},{{(-6L),1L,0x50F2F05EL},{4L,(-1L),0xF16C1562L},{0L,(-1L),0x15002F9EL},{(-1L),4L,0xF16C1562L},{0xB9E33EF1L,0x07C5ED44L,0x50F2F05EL},{0x8479BC33L,0x357C3BA0L,0xBBB60476L},{1L,0L,0L},{(-8L),0xBBB60476L,0x357C3BA0L}}};
static unsigned char g_1718[6] = {3UL,0x8EL,3UL,3UL,0x8EL,3UL};
static unsigned g_1729 = 4294967295UL;
static int g_1826 = (-1L);
static unsigned g_1862 = 18446744073709551609UL;



static short func_1(void);
static short func_2(unsigned short p_3, unsigned short p_4, unsigned char p_5);
static unsigned func_8(char p_9, int p_10);
static const unsigned short func_21(unsigned short p_22);
static int func_29(char p_30, unsigned char p_31);
static unsigned char func_32(int p_33, int p_34, unsigned char p_35, const int p_36, unsigned char p_37);
static short func_38(unsigned short p_39);
static const unsigned short func_40(const unsigned char p_41);
static const int func_42(unsigned p_43, char p_44, const short p_45, unsigned short p_46);
static int func_52(int p_53);
static short func_1(void)
{
    unsigned short l_20 = 3UL;
    int l_1202 = 1L;
    unsigned short l_1797 = 0xAA61L;
    unsigned l_1817 = 0x7027CD35L;
    unsigned short l_1851 = 0x46CBL;
    unsigned short l_1858 = 65532UL;
    int l_1861 = 0x83F5C729L;
    unsigned l_1874 = 0xCB1A0267L;
    unsigned short l_1881 = 65535UL;
    if ((2L == (func_2((safe_sub_func_uint16_t_u_u((func_8(((((g_11 , ((g_11 ^ (safe_add_func_int8_t_s_s((((g_11 , (safe_add_func_uint32_t_u_u(((l_1202 = ((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(l_20, 0xB5411457L)), (~(func_21(g_11) , g_232)))) <= g_817)) <= g_321), g_11))) ^ g_207) == l_20), 0UL))) | 1UL)) & g_817) || 0x4F871AB1L) , g_600), l_20) >= 1UL), (-9L))), l_20, l_20) , l_20)))
    {
        g_1099 = 0x9C100168L;
    }
    else
    {
        int l_1762 = (-1L);
        int l_1765 = 0xA70DE11CL;
        int l_1766 = 0xA66E0713L;
        unsigned short l_1774 = 65535UL;
        unsigned l_1819[4] = {0x37949B01L,0x37949B01L,0x37949B01L,0x37949B01L};
        unsigned l_1852[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        int i;
        l_1766 = (func_40(g_356) >= (safe_sub_func_uint8_t_u_u((l_1202 && (((safe_rshift_func_int16_t_s_s(((l_1202 = g_1050[0]) && 0x95A2L), 12)) <= (func_8(g_647[3][4], (((l_1762 = g_862) < 0x68A8L) ^ (g_1027 = (g_650 = (safe_add_func_int32_t_s_s(((l_1765 = 0x55L) == l_1766), g_909)))))) , g_1050[0])) == g_321)), 0xDDL)));
        g_642 = l_1766;
        if ((g_455 = g_1161))
        {
            unsigned short l_1773[2];
            unsigned char l_1818 = 0xECL;
            int l_1835 = 1L;
            unsigned short l_1838 = 0xC0DEL;
            int l_1853 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_1773[i] = 1UL;
            for (g_600 = 0; (g_600 < (-24)); g_600 = safe_sub_func_uint32_t_u_u(g_600, 1))
            {
                short l_1769 = (-4L);
                int l_1777 = 0x8E37D978L;
                int l_1798 = 0x91C292B7L;
                g_642 = g_1718[2];
                g_642 = (g_81[3] , l_1769);
                g_276 = g_95;
                for (g_598 = 0; (g_598 > (-2)); g_598 = safe_sub_func_int32_t_s_s(g_598, 2))
                {
                    char l_1772 = 9L;
                    int l_1785 = 8L;
                    l_1773[0] = l_1772;
                    if (func_42((l_1774 = 18446744073709551615UL), (safe_mod_func_uint8_t_u_u(l_1777, l_1772)), (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(0xF019L, g_972)) > (safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(g_95)), (l_1785 = func_8(l_1769, g_909))))), l_1772)), l_20))
                    {
                        int l_1786 = 0L;
                        l_1798 = ((l_1797 = func_42(((((l_1786 || ((safe_rshift_func_uint8_t_u_u(l_1786, 7)) >= l_1765)) || (l_1769 >= (safe_mod_func_uint32_t_u_u(g_1718[0], (safe_add_func_uint16_t_u_u((l_1772 & (safe_rshift_func_uint8_t_u_s(((g_1220 = (safe_rshift_func_uint16_t_u_u(func_52(l_1773[0]), func_8((l_1785 , g_647[1][2]), g_1717[6][0][2])))) & g_600), 6))), g_455)))))) || l_1765) > g_1729), g_972, l_1773[0], l_1773[0])) , l_1765);
                    }
                    else
                    {
                        unsigned char l_1801 = 1UL;
                        l_1801 = (safe_lshift_func_uint16_t_u_s(0x6483L, 12));
                        l_1202 = func_52(l_1772);
                        g_642 = (safe_add_func_uint16_t_u_u(7UL, (safe_mod_func_uint8_t_u_u(((func_38(((((safe_mod_func_int16_t_s_s(((safe_unary_minus_func_int32_t_s((((l_1817 = (safe_sub_func_int8_t_s_s((0x6747L & (safe_sub_func_uint16_t_u_u(g_209, (safe_rshift_func_int16_t_s_s(((l_1801 & (g_647[2][2] >= 1L)) , (0xFDA7L != g_972)), (safe_rshift_func_uint16_t_u_u(l_1801, 4))))))), 0x48L))) > 65530UL) , g_542[1][5][0]))) != g_642), 0x62CEL)) || l_1818) & 0UL) >= l_1819[3])) == g_356) , l_1773[0]), g_793))));
                        l_1798 = (g_1099 = ((safe_add_func_uint16_t_u_u((((safe_rshift_func_uint8_t_u_u(func_38(g_911), ((((((safe_lshift_func_uint16_t_u_s((g_207 >= g_1826), 10)) != ((safe_lshift_func_int8_t_s_s(0x58L, (safe_lshift_func_uint8_t_u_u((l_1835 = (((g_600 , (safe_add_func_int16_t_s_s(g_598, ((~(safe_add_func_int8_t_s_s((l_1774 , func_8(((g_1669 = (l_1798 <= l_1773[1])) > (-1L)), l_1773[1])), l_1773[1]))) == 5L)))) >= g_862) & g_321)), g_1729)))) > l_1785)) && g_219[2]) , g_1220) != l_1817) || l_1818))) ^ l_1819[0]) >= g_1050[0]), g_817)) && g_598));
                    }
                    l_1765 = g_1027;
                    l_1202 = l_1785;
                }
            }
            l_1762 = 0x834EF5CDL;
            l_1838 = ((((((safe_lshift_func_int8_t_s_s((l_1773[0] , l_1818), 0)) >= ((0xB76BF840L != g_647[3][3]) & ((g_600 == g_909) || g_1050[0]))) || l_1773[0]) , (l_1202 = l_1819[1])) | l_1819[3]) , l_1819[0]);
            l_1202 = (((-8L) | func_38((l_1853 = ((safe_sub_func_int16_t_s_s(((safe_sub_func_int16_t_s_s(l_1838, l_20)) < (g_1050[0] = ((g_1099 , (0x34BC5146L < (safe_add_func_uint16_t_u_u(g_972, ((safe_add_func_int16_t_s_s(g_110, ((g_1161 = ((g_207 , (safe_rshift_func_uint16_t_u_u((safe_add_func_uint8_t_u_u((g_1218 = ((((((((g_81[3] = func_32((g_642 = g_219[3]), l_1765, l_1773[0], l_20, l_1773[0])) && g_1717[1][2][1]) < g_171) >= l_1851) != g_1729) > l_1817) , l_1819[1]) != l_1852[3])), 7L)), 2))) >= l_1202)) && g_455))) >= 0L))))) == 0x00554737L))), l_1765)) & g_106)))) && 9L);
        }
        else
        {
            unsigned l_1857 = 0UL;
            for (l_1762 = 0; (l_1762 == (-29)); --l_1762)
            {
                int l_1856 = 0x53F8CAA4L;
                if (l_1817)
                    break;
                l_1856 = l_1851;
                g_209 = l_1857;
            }
            g_600 = ((g_972 < 4294967289UL) && l_1858);
        }
        g_209 = (g_642 == (g_95 == l_1774));
    }
    if ((g_1717[6][0][2] , (l_1861 = (((l_1817 , ((safe_rshift_func_int8_t_s_u(0x25L, func_2(g_1027, g_219[0], g_1001))) != (((g_1862 = (~(g_321 == ((((0xA5L || g_817) && l_1861) >= l_1797) || 0x1CA24346L)))) ^ 0x752BECEEL) != l_1817))) ^ l_1817) , g_455))))
    {
        g_209 = l_1202;
        return l_1817;
    }
    else
    {
        unsigned l_1873 = 1UL;
        int l_1875 = 1L;
        unsigned short l_1876 = 65535UL;
        l_1876 = (+((l_1875 = (g_817 == ((g_110 = (g_1717[5][1][0] ^ ((g_1050[0] == (safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(g_1669, 1)), (l_1874 = (safe_rshift_func_uint8_t_u_s((((l_1873 < l_1873) , (-1L)) == (g_1027 > g_1718[1])), 6))))) >= l_1873) & 1UL), l_1851)) | g_1245), g_11))) == g_275))) < l_20))) , 0x5AC0B446L));
        if (l_1797)
        {
            short l_1885 = 0x5049L;
            for (g_209 = (-14); (g_209 <= 18); ++g_209)
            {
                int l_1886 = 0xDEB7EF80L;
                int l_1894 = 0x943D0F92L;
                if ((g_455 = (safe_lshift_func_int8_t_s_u((func_38((+func_8(g_650, l_1881))) , (safe_sub_func_int8_t_s_s((l_1875 = (((safe_unary_minus_func_uint16_t_u(65531UL)) , 0x108EC7D8L) == (((-1L) > (9L != (~func_38(l_1885)))) ^ l_1876))), 0x2AL))), l_1858))))
                {
                    if ((+0x8FC0D48CL))
                    {
                        if (g_1050[0])
                            break;
                        if (g_94)
                            continue;
                        g_1717[6][0][2] = g_1826;
                    }
                    else
                    {
                        g_600 = 0x5FE0E8B7L;
                        if (l_1886)
                            continue;
                    }
                    return g_1220;
                }
                else
                {
                    int l_1889[5] = {(-6L),(-6L),(-6L),(-6L),(-6L)};
                    int i;
                    for (g_232 = 0; (g_232 <= 4); g_232 += 1)
                    {
                        g_276 = (safe_rshift_func_uint16_t_u_s(g_321, 13));
                    }
                    l_1889[1] = l_1885;
                    g_455 = (((safe_rshift_func_int8_t_s_s((g_110 , (l_20 < g_1717[6][0][2])), g_219[3])) || ((g_110 = (((func_8(l_20, ((((-1L) != (0xB133BCE0L | 3UL)) < g_1669) <= l_1889[1])) > 0UL) > g_1161) | 0xAE96L)) | 0x92B2L)) > 0x48C8656FL);
                }
                g_1099 = g_1669;
                g_276 = func_8((safe_sub_func_int8_t_s_s((l_1894 = ((-2L) | 2UL)), 0x1CL)), l_1858);
            }
            l_1861 = l_1885;
        }
        else
        {
            g_1717[8][6][2] = (-1L);
        }
    }
    for (g_1862 = (-23); (g_1862 >= 52); g_1862++)
    {
        unsigned l_1897 = 0xEC197ECFL;
        l_1897 = 9L;
    }
    return l_1817;
}







static short func_2(unsigned short p_3, unsigned short p_4, unsigned char p_5)
{
    unsigned char l_1203 = 0x7DL;
    int l_1219 = 0x248603BCL;
    int l_1221 = 0x449F2C61L;
    short l_1272[2];
    unsigned char l_1278 = 255UL;
    char l_1290 = (-6L);
    const short l_1303 = 0L;
    unsigned l_1310 = 0x23A72FD5L;
    unsigned char l_1388 = 0xA7L;
    short l_1524 = 6L;
    unsigned char l_1572 = 0x09L;
    int l_1588 = 2L;
    unsigned l_1607 = 0x6FC9B0F7L;
    int l_1675 = 0x9A141056L;
    char l_1687 = (-1L);
    int i;
    for (i = 0; i < 2; i++)
        l_1272[i] = 0xDDB1L;
    for (p_4 = 0; (p_4 <= 4); p_4 += 1)
    {
        unsigned short l_1205 = 0xE74AL;
        int l_1211[1][9] = {{0x51B94CDBL,0x51B94CDBL,0x51B94CDBL,0x51B94CDBL,0x51B94CDBL,0x51B94CDBL,0x51B94CDBL,0x51B94CDBL,0x51B94CDBL}};
        int i, j;
        if ((0xC477203DL <= g_455))
        {
            int l_1204[1][8] = {{5L,8L,8L,5L,8L,8L,5L,8L}};
            int i, j;
            l_1205 = (l_1204[0][3] = (!(l_1203 | g_1099)));
            l_1211[0][2] = (l_1221 = (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u(((g_219[0] = ((func_21(p_3) ^ ((safe_rshift_func_uint16_t_u_u((0x9D0E6C46L ^ func_8(g_207, (l_1211[0][2] = g_817))), 13)) , (((!l_1203) > (g_1220 = (+(safe_add_func_uint32_t_u_u((l_1219 = (safe_mod_func_int8_t_s_s((g_11 == (g_1218 = (safe_add_func_uint16_t_u_u((((g_321 >= g_321) ^ g_11) || p_5), 0x9688L)))), g_321))), 1L))))) , (-1L)))) >= 0xB5L)) , p_3))), 2)));
            g_94 = (g_290 <= (((l_1211[0][2] = g_218) || (l_1211[0][1] = (safe_sub_func_uint8_t_u_u(9UL, ((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(l_1219, l_1211[0][2])), l_1205)) && (safe_add_func_uint32_t_u_u((l_1205 > (((safe_rshift_func_uint16_t_u_s(0x2158L, 0)) & (((((safe_rshift_func_uint8_t_u_s(g_650, 4)) > g_209) , g_1050[0]) >= p_3) && 0x90C1B405L)) && p_5)), l_1219))))))) , 0xCAL));
        }
        else
        {
            l_1221 = p_4;
            if (g_1161)
                continue;
        }
        return g_647[4][4];
    }
    for (g_600 = (-30); (g_600 < (-9)); g_600 = safe_add_func_uint32_t_u_u(g_600, 1))
    {
        unsigned short l_1236 = 0x7759L;
        int l_1277 = 5L;
        l_1236 = ((p_5 == (l_1203 <= (l_1221 = 255UL))) > 0x435F7854L);
        if ((g_1099 = (p_3 , g_1050[0])))
        {
            short l_1237 = 8L;
            int l_1242 = 0x58AFF672L;
            if (((~(p_4 != (func_52(l_1237) || p_3))) & (p_4 < ((g_1218 , func_8((safe_lshift_func_int16_t_s_u(func_8(((p_5 > g_219[4]) , (safe_lshift_func_int16_t_s_s(p_3, 11))), g_647[3][4]), 3)), p_5)) < 0x1F55735FL))))
            {
                short l_1246[4];
                int l_1250 = (-10L);
                int i;
                for (i = 0; i < 4; i++)
                    l_1246[i] = (-5L);
                l_1250 = (((l_1221 = (l_1242 = (l_1236 > g_209))) , (g_1050[0] | 0x5C7E93A2L)) & (((((((safe_mod_func_int16_t_s_s(p_3, func_38((g_1249 = ((l_1246[2] = g_1245) , ((func_38(((g_542[9][1][1] > ((((safe_sub_func_uint16_t_u_u(0x2DF2L, ((6L > p_5) > g_650))) & p_3) , 251UL) ^ 9UL)) | g_219[5])) == l_1246[2]) > p_5)))))) ^ 5UL) ^ p_4) < p_4) >= 6UL) == g_1061) , 0x91L));
                for (g_95 = 13; (g_95 <= (-14)); g_95 = safe_sub_func_uint16_t_u_u(g_95, 3))
                {
                    return g_356;
                }
            }
            else
            {
                char l_1255 = 1L;
                if (l_1242)
                    break;
                l_1221 = (safe_sub_func_int16_t_s_s((l_1255 == 0x63DADEB6L), ((0x599EL <= p_5) , (safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_u(l_1236, 7)) , (g_1218 , (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_171, l_1219)), g_1001)))), p_4)))));
            }
        }
        else
        {
            g_94 = p_5;
            l_1221 = l_1236;
            l_1219 = g_650;
            g_642 = (g_94 = l_1219);
        }
        for (g_218 = 0; g_218 < 10; g_218 += 1)
        {
            g_81[g_218] = 0x3771L;
        }
        g_276 = ((safe_sub_func_uint32_t_u_u((((1L || ((safe_sub_func_int16_t_s_s((l_1221 = (safe_mod_func_uint16_t_u_u(((l_1219 = (safe_lshift_func_int16_t_s_s(l_1272[0], ((l_1277 = (g_276 | (~(g_356 == ((g_1050[0] && p_5) > (((g_1220 = (safe_sub_func_uint8_t_u_u(l_1236, func_8(g_1220, l_1236)))) < l_1219) >= l_1219)))))) && l_1278)))) && g_290), 0xB7B8L))), p_4)) ^ 0x9E24885AL)) , (-1L)) == 0L), g_1061)) , l_1221);
    }
    if ((g_1070 & (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s((p_5 | (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(((((safe_add_func_int32_t_s_s((((g_647[0][1] = (((((safe_rshift_func_uint16_t_u_s(65526UL, p_5)) & ((l_1290 >= (safe_sub_func_int8_t_s_s(func_8((safe_add_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(l_1272[0], g_542[3][4][1])), p_3)), (g_862 == g_1001)), g_276))) || 0xB6L)) , 0xE2F83BCBL) == p_5) , g_1061)) , 0xCEL) >= p_5), g_1070)) < 0x6AA988ABL) ^ p_4) != g_219[0]))), l_1272[1]))), 65531UL)), 6))))
    {
        unsigned short l_1301 = 8UL;
        short l_1313 = 0L;
        int l_1322 = 0x4AE99CA5L;
        const short l_1346 = 0xB3D6L;
        short l_1357 = 0L;
        unsigned l_1393 = 0UL;
        unsigned char l_1465 = 0x0BL;
        int l_1532 = 0L;
        const unsigned short l_1542 = 0xD0CAL;
        int l_1620 = 0x67CA8B84L;
        if ((safe_mod_func_int8_t_s_s((g_1027 = (safe_add_func_int32_t_s_s((l_1301 & ((safe_unary_minus_func_uint16_t_u(g_817)) || (p_5 , (((!l_1303) < ((safe_add_func_uint8_t_u_u((((safe_add_func_uint8_t_u_u(l_1203, g_356)) >= (l_1221 = ((p_5 < ((safe_sub_func_uint32_t_u_u(p_5, ((p_3 > 0L) >= p_3))) < l_1301)) & 1L))) , g_356), 0xCBL)) == p_3)) >= l_1310)))), p_4))), 246UL)))
        {
            unsigned short l_1317 = 0xD012L;
            int l_1318 = 0x6F3DEF5CL;
            int l_1331 = 0x64A6826AL;
            int l_1395[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1395[i] = 6L;
            if (l_1301)
            {
                unsigned l_1314 = 7UL;
                if ((65530UL ^ func_32((g_600 = (((((safe_add_func_int8_t_s_s((l_1313 = g_1050[0]), l_1314)) != ((p_4 , (safe_mod_func_int16_t_s_s(0x9B7BL, (0L | p_5)))) && ((l_1318 = l_1317) >= (1UL != l_1221)))) & g_642) | g_290) == p_4)), l_1301, p_5, l_1314, p_3)))
                {
                    short l_1327 = (-1L);
                    l_1331 = ((((g_1220 = ((safe_sub_func_uint32_t_u_u((l_1322 = (safe_unary_minus_func_uint32_t_u(l_1317))), g_81[2])) , (l_1318 = (l_1322 = (safe_lshift_func_uint8_t_u_s(g_1061, 6)))))) , (!(safe_sub_func_uint16_t_u_u(l_1327, (0xE3B313DCL && (safe_add_func_uint8_t_u_u(((g_1027 >= ((safe_unary_minus_func_uint32_t_u(g_276)) <= (g_1245 = g_218))) , g_600), p_3))))))) , g_909) < 0x92L);
                }
                else
                {
                    unsigned l_1333 = 8UL;
                    g_600 = 0x66AEEA0AL;
                    l_1333 = ((safe_unary_minus_func_uint32_t_u(l_1322)) | g_598);
                    return p_3;
                }
                for (g_95 = 2; (g_95 <= 9); g_95 += 1)
                {
                    int i;
                    l_1318 = g_81[g_95];
                }
                g_600 = ((func_38(p_3) >= (safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_u((l_1314 <= (l_1317 && p_5)), (0L ^ (p_3 , (l_1318 = (safe_sub_func_int8_t_s_s((p_3 == (l_1331 = l_1314)), 1UL))))))), p_5)), p_5))) , g_972);
                g_455 = g_455;
            }
            else
            {
                unsigned short l_1347 = 0UL;
                l_1219 = ((p_4 = 0x6B99L) && l_1322);
                for (g_1061 = 0; (g_1061 > (-9)); g_1061 = safe_sub_func_int8_t_s_s(g_1061, 6))
                {
                    for (l_1317 = (-9); (l_1317 < 43); ++l_1317)
                    {
                        unsigned l_1348[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1348[i] = 0x0CD49D7BL;
                        if (g_817)
                            break;
                        l_1347 = l_1346;
                        l_1348[0] = g_1161;
                    }
                }
            }
            g_1099 = (safe_rshift_func_int16_t_s_u(((l_1318 = (g_1218 = p_3)) , ((((+l_1310) != (g_81[4] <= g_110)) , p_5) , (g_793 < 65526UL))), 7));
            for (g_1027 = 0; (g_1027 != 16); ++g_1027)
            {
                unsigned char l_1366[5][10] = {{249UL,249UL,0xB4L,249UL,249UL,0xB4L,249UL,249UL,0xB4L,249UL},{249UL,1UL,1UL,249UL,1UL,1UL,249UL,1UL,1UL,249UL},{1UL,249UL,1UL,1UL,249UL,1UL,1UL,249UL,1UL,1UL},{249UL,249UL,0xB4L,249UL,249UL,0xB4L,249UL,249UL,0xB4L,249UL},{249UL,1UL,1UL,249UL,1UL,1UL,249UL,1UL,1UL,249UL}};
                int l_1409 = 0x698781A2L;
                int i, j;
                g_1099 = p_5;
                if (func_42(g_1027, (4294967295UL ^ g_219[0]), l_1331, (safe_add_func_int8_t_s_s(g_95, (p_3 <= (((safe_rshift_func_int16_t_s_u(g_1245, 4)) , l_1357) , g_817))))))
                {
                    int l_1376 = 0x02D06A94L;
                    for (l_1331 = 0; (l_1331 <= 5); l_1331 += 1)
                    {
                        g_642 = l_1272[1];
                    }
                    if (p_5)
                        continue;
                    if ((safe_mod_func_int16_t_s_s((l_1272[0] | g_542[1][5][0]), (safe_add_func_int16_t_s_s(g_642, p_4)))))
                    {
                        unsigned char l_1364 = 254UL;
                        int l_1365 = 0L;
                        l_1365 = ((p_4 | ((g_650 = p_3) || (safe_add_func_int16_t_s_s((l_1331 = l_1203), (g_81[1] = 0x4DF4L))))) <= l_1364);
                    }
                    else
                    {
                        int l_1375 = 0x7A444FA7L;
                        int l_1383 = 0xA67EFAD9L;
                        l_1366[4][3] = 0x2E7E145FL;
                        g_600 = 1L;
                        l_1376 = ((func_42((safe_add_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((l_1346 != (l_1375 = (safe_add_func_uint32_t_u_u((p_3 , 0UL), 0x7A416EE9L)))), (l_1313 , l_1376))), ((safe_add_func_uint8_t_u_u(func_32(l_1357, (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(((((g_1245 && 1UL) <= g_1099) <= g_321) > 0x47CEL), 3)), 252UL)), l_1383, l_1318, g_862), (-10L))) <= 0x4AL))), 0x71L)), g_218, p_5, g_647[3][4]) <= 1UL) || p_3);
                        g_455 = (safe_rshift_func_uint16_t_u_u(l_1375, 9));
                    }
                    l_1395[0] = ((func_52(((l_1376 && (g_1070 = func_42((~(safe_sub_func_int32_t_s_s((l_1388 && p_4), (g_600 < (g_909 >= (((safe_add_func_int8_t_s_s(((g_972 != (p_3 & (safe_add_func_uint16_t_u_u(((l_1376 & ((((g_647[2][1] = func_8(l_1331, l_1376)) & l_1303) > g_1070) <= 0xD5L)) != l_1366[4][3]), l_1318)))) > 0xB46CL), p_3)) && 0xE3L) , 0xFFE3L)))))), g_1027, g_1001, l_1393))) , g_1394)) && p_5) || p_5);
                }
                else
                {
                    unsigned short l_1406 = 65527UL;
                    int l_1416 = 1L;
                    int l_1417 = 6L;
                    int l_1418 = 0L;
                    if (((p_4 , ((g_1249 = (0xDD3DL >= p_3)) || ((g_598 = g_356) != ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_s(p_5, (((-1L) || ((safe_sub_func_uint8_t_u_u(0x6EL, (safe_sub_func_int8_t_s_s(g_290, l_1406)))) > 0UL)) == 0x1A1AL))), g_647[3][4])), 4)) , p_3)))) , g_1394))
                    {
                        l_1219 = p_3;
                        return l_1395[0];
                    }
                    else
                    {
                        g_94 = g_275;
                    }
                    l_1418 = ((l_1417 = ((l_1409 = ((p_3 = func_40((+l_1221))) , (safe_sub_func_uint32_t_u_u((((g_598 = p_4) , l_1331) ^ g_817), g_110)))) , (l_1416 = ((((safe_rshift_func_uint8_t_u_u((p_5 = ((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(((~func_52(g_1099)) , 0xD5B8L), g_1218)), l_1331)) , 2UL)), g_972)) >= p_4) & 0L) > g_455)))) >= g_1218);
                    l_1318 = ((((((safe_sub_func_uint16_t_u_u(g_276, (p_5 < (((safe_lshift_func_int16_t_s_s(p_4, (((l_1418 = (func_32(func_32((g_1099 = (safe_lshift_func_int8_t_s_u(p_5, (!(l_1395[0] > 2L))))), (safe_rshift_func_uint16_t_u_u((((0xF9L == (1L != 0xC3D27E46L)) <= l_1303) <= 6UL), l_1409)), g_909, l_1318, l_1346), p_3, p_3, p_5, p_4) , g_81[3])) <= g_232) , 1L))) < l_1417) & l_1303)))) > p_5) && p_4) != 0UL) ^ l_1409) , g_647[1][3]);
                }
            }
        }
        else
        {
            const unsigned l_1434 = 0xB9D8FA58L;
            int l_1466 = 0x7D72B07AL;
            int l_1489 = 0x347A37AEL;
            int l_1575 = 1L;
            for (p_5 = 5; (p_5 != 46); ++p_5)
            {
                int l_1442 = (-1L);
                int l_1492[3][3][3] = {{{0xCF7BBADEL,0x700A072FL,0xCF7BBADEL},{0xCF7BBADEL,0x700A072FL,0xCF7BBADEL},{0xCF7BBADEL,0x700A072FL,0xCF7BBADEL}},{{0xCF7BBADEL,0x700A072FL,0xCF7BBADEL},{0xCF7BBADEL,0x700A072FL,0xCF7BBADEL},{0xCF7BBADEL,0x700A072FL,0xCF7BBADEL}},{{0xCF7BBADEL,0x700A072FL,0xCF7BBADEL},{0xCF7BBADEL,0x700A072FL,0xCF7BBADEL},{0xCF7BBADEL,0x700A072FL,0xCF7BBADEL}}};
                int i, j, k;
                if (((safe_add_func_int8_t_s_s(p_5, g_1099)) < 0UL))
                {
                    char l_1431[9][8][3] = {{{(-1L),0x56L,0x2DL},{0x15L,(-1L),0xD7L},{0x79L,0x47L,0xECL},{(-3L),(-1L),0x40L},{0x10L,(-9L),1L},{0xD6L,0x55L,0x1DL},{0x15L,0x55L,(-1L)},{0x83L,(-9L),0x57L}},{{0xECL,(-1L),1L},{0L,0x47L,1L},{0x40L,(-1L),0x1DL},{0x10L,0x52L,0x15L},{0x79L,8L,0x1DL},{0xECL,0x10L,1L},{0x8CL,(-9L),1L},{1L,(-1L),0x57L}},{{0L,0x2DL,(-1L)},{(-3L),0L,0x1DL},{(-3L),1L,1L},{0L,8L,0x40L},{1L,0x55L,0xECL},{0x8CL,0x52L,0xD7L},{0xECL,0L,0x57L},{0x79L,1L,1L}},{{0x10L,0L,0x40L},{0x40L,0x52L,0xD2L},{0L,0x55L,0x10L},{0xECL,8L,0xECL},{0x83L,1L,1L},{0x15L,0L,1L},{0xD6L,0x2DL,0xECL},{0x10L,(-1L),0x10L}},{{(-3L),(-9L),0xD2L},{0xC8L,(-1L),1L},{0xD3L,0xC3L,(-9L)},{0x1DL,1L,(-6L)},{0xD3L,0x27L,0x21L},{0xC8L,5L,0x83L},{0L,(-10L),1L},{0x47L,0x61L,0x57L}},{{0xF1L,(-9L),0x79L},{0xD3L,(-9L),(-1L)},{0x10L,0x61L,(-6L)},{0xD7L,(-10L),0xECL},{2L,5L,(-9L)},{1L,0x27L,0x79L},{0x47L,1L,0xD3L},{0xC8L,0xC3L,0x79L}},{{0xD7L,(-1L),(-9L)},{0x7FL,0x61L,0xECL},{0x57L,0x27L,(-6L)},{2L,8L,(-1L)},{0L,0x87L,0x79L},{0L,0xD4L,0x57L},{2L,0xC3L,1L},{0x57L,(-9L),0x83L}},{{0x7FL,1L,0x21L},{0xD7L,0x87L,(-6L)},{0xC8L,(-9L),(-9L)},{0x47L,0x87L,1L},{1L,1L,0x08L},{2L,(-9L),0x47L},{0xD7L,0xC3L,0x83L},{0x10L,0xD4L,0xECL}},{{0xD3L,0x87L,0x92L},{0x5DL,(-6L),0xCEL},{1L,5L,1L},{0x7EL,0x10L,0x91L},{0xBAL,0xD2L,5L},{(-1L),0x8CL,0x1CL},{1L,(-3L),(-3L)},{(-1L),5L,0x0EL}}};
                    int i, j, k;
                    l_1431[7][1][0] = func_38(g_909);
                }
                else
                {
                    int l_1435 = 1L;
                    unsigned char l_1467 = 0x5EL;
                    g_276 = 0xE1325B71L;
                    g_209 = (safe_lshift_func_int8_t_s_u(l_1434, 2));
                    for (l_1219 = 1; (l_1219 <= 9); l_1219 += 1)
                    {
                        int i;
                        l_1435 = g_81[l_1219];
                        l_1322 = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((((p_3 ^ (g_650 = g_290)) && (safe_sub_func_uint8_t_u_u((l_1442 != g_81[3]), 246UL))) , (0UL ^ ((g_81[l_1219] = (p_5 != (safe_rshift_func_int16_t_s_s(0L, 4)))) <= (safe_mod_func_int32_t_s_s((((safe_lshift_func_uint8_t_u_s(((func_8(p_5, l_1434) == 0xA8L) != g_1061), 5)) & p_5) >= l_1442), g_972))))), 13)), 0));
                    }
                    g_455 = (p_3 | (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(p_4, ((l_1466 = (g_290 & (l_1465 = ((g_1249 & (255UL != (safe_mod_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((func_32((g_232 , func_8((safe_sub_func_int32_t_s_s(p_5, (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(func_32(p_5, (0xA4L >= p_3), l_1442, p_3, l_1357), g_218)), p_5)), g_455)))), l_1435)), g_207, l_1278, p_4, g_95) <= l_1434), g_321)), 0x3E99L)))) , g_1161)))) <= l_1467))) < p_3), 5)));
                }
                if (g_1061)
                    continue;
                if ((l_1388 > l_1301))
                {
                    l_1466 = ((safe_lshift_func_uint8_t_u_s((func_21(p_5) , ((func_21(((safe_mod_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_1290, 0xCB21C121L)), (safe_lshift_func_int8_t_s_s(func_8(func_21(func_52((g_106 , g_357))), p_5), g_1245)))) <= 0x4C12349FL)) | p_5) , l_1221)), 5)) > p_3);
                }
                else
                {
                    const short l_1490 = 0x0144L;
                    int l_1497[8][10] = {{0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L},{0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L},{0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L},{0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L},{0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L},{0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L},{0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L},{0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L,0x7C6218A0L}};
                    int i, j;
                    if (g_171)
                    {
                        unsigned l_1476 = 0x83B217E8L;
                        l_1476 = g_321;
                    }
                    else
                    {
                        unsigned short l_1491 = 7UL;
                        l_1492[2][1][0] = (safe_sub_func_int32_t_s_s(((p_4 , g_81[9]) && ((l_1466 = 0xE50888F1L) > (safe_rshift_func_int8_t_s_u(func_38(((l_1492[0][0][0] = (safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s(func_38(((p_5 == (((l_1310 && (((safe_lshift_func_uint8_t_u_u((((9UL | (func_42((l_1489 = ((g_81[5] == 0x25L) != func_8((g_1220 = ((safe_mod_func_int16_t_s_s(l_1442, (-1L))) <= 0x5386L)), l_1301))), g_219[0], l_1490, l_1442) , p_4)) , l_1490) || p_4), 6)) & p_4) > g_1161)) >= 4294967288UL) == g_1099)) , l_1491)), p_4)), g_911))) & p_5)), 3)))), p_5));
                        g_209 = (safe_lshift_func_uint16_t_u_u((p_4 = ((((((g_219[0] & (4294967295UL && (safe_mod_func_uint8_t_u_u(8UL, (l_1497[5][4] = 0xF9L))))) & (safe_mod_func_int8_t_s_s(l_1466, (7L || g_542[5][2][2])))) & (safe_add_func_uint8_t_u_u((l_1219 = (func_52((g_95 = (0x63L < (~func_8((((safe_rshift_func_int16_t_s_u(g_972, g_1249)) , g_81[3]) >= p_4), p_3))))) >= l_1301)), p_5))) || 0UL) == 1L) & 0xB103L)), 11));
                        return p_4;
                    }
                    return g_232;
                }
            }
            for (l_1465 = 26; (l_1465 <= 54); l_1465 = safe_add_func_uint16_t_u_u(l_1465, 4))
            {
                l_1466 = (safe_rshift_func_int8_t_s_u(func_52(g_290), 5));
            }
            for (g_909 = 0; (g_909 < 37); g_909++)
            {
                int l_1515 = 0xDF05788DL;
                int l_1567 = 0x3945D8A5L;
                if ((safe_lshift_func_int8_t_s_s((g_219[0] | (l_1489 || l_1489)), g_94)))
                {
                    unsigned l_1514 = 4UL;
                    l_1515 = (0xD22FL && (safe_lshift_func_int16_t_s_u(l_1514, p_5)));
                    return l_1515;
                }
                else
                {
                    short l_1531[8] = {1L,8L,8L,1L,8L,8L,1L,8L};
                    int l_1554 = 1L;
                    int i;
                    if (p_4)
                    {
                        const unsigned l_1533 = 0x29F7DE5EL;
                        int l_1536 = 0xC13D649EL;
                        l_1466 = (g_642 = ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((((((g_455 == ((0x5DL & ((safe_mod_func_uint32_t_u_u((l_1524 = ((+l_1489) < 1L)), p_3)) && ((g_1027 ^ (((((safe_sub_func_uint16_t_u_u((l_1532 = ((((((safe_add_func_int8_t_s_s(p_4, (safe_add_func_uint8_t_u_u((l_1515 && (((l_1434 == g_106) | 0x18L) <= 0x92L)), g_356)))) , 1UL) != g_232) && p_4) == g_276) | l_1531[1])), p_4)) < p_3) && 0xE2L) , 0x16E3D690L) <= l_1524)) >= g_1050[0]))) , l_1489)) , 3UL) | 0x2258L) , 8UL) , g_219[0]) || 8L), 0xCEL)), p_5)), g_972)) , 0x2E27C473L));
                        l_1536 = ((l_1533 , (safe_rshift_func_uint16_t_u_u((p_4 = l_1515), (~(p_3 >= (p_5 != ((((-1L) || l_1531[1]) , func_32(g_598, g_81[3], p_3, g_862, l_1466)) , 0xAAL))))))) >= l_1533);
                    }
                    else
                    {
                        unsigned l_1541 = 18446744073709551615UL;
                        const unsigned short l_1543 = 1UL;
                        g_276 = (0x9AC276CCL <= (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(func_32((((g_1220 = ((g_106 < ((g_171 != p_3) | func_32(l_1541, p_5, p_5, l_1542, l_1531[1]))) != g_817)) & p_4) <= l_1531[1]), l_1541, g_1001, l_1543, p_4), l_1532)), 10)));
                        return p_4;
                    }
                    l_1219 = (l_1466 = 0xE35D3636L);
                    for (g_1001 = 0; (g_1001 != 39); g_1001++)
                    {
                        short l_1559 = 0x95D5L;
                        unsigned l_1565 = 0x3CD00D47L;
                        int l_1566 = (-1L);
                        l_1221 = ((safe_sub_func_uint32_t_u_u(g_232, (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(l_1515, 2)) > ((safe_mod_func_int8_t_s_s((((l_1554 = ((+l_1489) < 0xE4L)) > g_1099) < (g_1050[0] = (g_598 = g_219[0]))), (g_650 = (+(l_1219 = (l_1322 && g_817)))))) , (safe_sub_func_uint8_t_u_u((l_1466 = (g_1161 = ((func_8(((safe_lshift_func_int16_t_s_u(((p_5 = l_1466) > 1L), 5)) ^ l_1531[2]), p_3) == g_290) == l_1203))), g_1249)))), 0)))) != p_4);
                        g_94 = p_5;
                        g_455 = 0xFB4E9E81L;
                        l_1221 = (l_1559 | (g_232 ^ (func_52((l_1567 = (((1UL && ((safe_mod_func_uint8_t_u_u((l_1566 = (p_5 = (safe_add_func_int32_t_s_s(func_38(func_8(((((p_5 , ((func_32(g_1061, g_232, ((((l_1434 == ((((safe_unary_minus_func_int32_t_s(((p_5 == (((0x4ACB8C55L <= l_1559) ^ l_1489) & 0x5C65L)) || 0x02L))) <= p_4) ^ 0x15CD3F38L) >= g_95)) == p_3) , l_1357) || l_1565), g_817, l_1559) , g_1218) , p_3)) > l_1346) > p_5) != p_5), p_3)), 0x6A6C8A07L)))), g_972)) , p_4)) ^ p_4) & p_4))) && p_5)));
                    }
                }
            }
            if ((l_1221 = ((safe_rshift_func_int16_t_s_s((-1L), (g_81[8] ^ (safe_rshift_func_int16_t_s_u((p_3 >= func_8((l_1322 = (l_1303 ^ p_4)), g_650)), 14))))) >= ((((l_1489 = l_1572) == ((safe_lshift_func_uint16_t_u_s((l_1575 = (l_1466 = func_8(l_1532, g_1249))), 9)) | l_1434)) , 8L) & p_4))))
            {
                unsigned l_1582[9] = {18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL};
                int l_1583 = 0xC565FA30L;
                int i;
                g_642 = ((safe_add_func_uint32_t_u_u(0x6D2F508FL, ((g_598 = (g_171 < (0L | (p_5 >= (l_1221 = (safe_mod_func_int8_t_s_s(func_52(l_1582[6]), l_1346))))))) > (l_1583 = g_1394)))) > (((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s((g_1050[0] = (0L > l_1434)), g_171)), g_1070)) || l_1346) ^ g_232));
                g_209 = g_1394;
            }
            else
            {
                g_1099 = (l_1588 , 0x18CCD4A0L);
            }
        }
        if (l_1303)
        {
            unsigned l_1604 = 18446744073709551615UL;
            int l_1613[2];
            int i;
            for (i = 0; i < 2; i++)
                l_1613[i] = (-2L);
            for (l_1219 = 0; l_1219 < 1; l_1219 += 1)
            {
                g_1050[l_1219] = (-10L);
            }
            for (g_1027 = 7; (g_1027 < 23); g_1027 = safe_add_func_int8_t_s_s(g_1027, 8))
            {
                int l_1593[1];
                int l_1612[10][4][2] = {{{1L,1L},{(-10L),0L},{0L,0xCB6A5BF7L},{1L,0L}},{{0xFA4CF828L,1L},{0xFA4CF828L,0L},{1L,0xCB6A5BF7L},{0L,0L}},{{(-10L),1L},{1L,0L},{0L,0x00D490C3L},{0x6CF687B2L,0x8C7E7DDFL}},{{0x720C0CD0L,(-10L)},{2L,0x5BBFC17AL},{0L,0x5BBFC17AL},{2L,(-10L)}},{{0x720C0CD0L,0x8C7E7DDFL},{0x6CF687B2L,0x00D490C3L},{0L,0L},{1L,1L}},{{(-10L),0L},{0L,0xCB6A5BF7L},{1L,0L},{0xFA4CF828L,1L}},{{0xFA4CF828L,0L},{1L,0xCB6A5BF7L},{0L,0L},{(-10L),1L}},{{1L,0L},{0L,0x00D490C3L},{0x6CF687B2L,0x8C7E7DDFL},{0x720C0CD0L,(-10L)}},{{2L,0x5BBFC17AL},{0L,0x5BBFC17AL},{2L,(-10L)},{0x720C0CD0L,0x8C7E7DDFL}},{{0L,1L},{(-5L),(-5L)},{0x00D490C3L,0x6CF687B2L},{0L,0x8C7E7DDFL}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1593[i] = 0xF5A407FBL;
                for (p_5 = 0; (p_5 != 43); p_5 = safe_add_func_int16_t_s_s(p_5, 7))
                {
                    return p_4;
                }
                l_1219 = (l_1593[0] > func_38((((p_4 > 0xD9L) | (~(l_1465 == ((safe_add_func_int32_t_s_s((l_1221 = 1L), (g_909 = ((p_4 < (safe_sub_func_uint16_t_u_u(((g_357 <= 0xE0L) <= l_1593[0]), g_1394))) , p_5)))) , p_3)))) , p_4)));
                l_1613[0] = (((safe_add_func_int8_t_s_s((l_1593[0] == ((9UL <= (safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(1UL, (l_1612[1][3][1] = (((l_1604 = (-1L)) , ((g_219[0] <= (safe_sub_func_uint8_t_u_u(l_1607, (func_32(g_1394, p_3, ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_int8_t_s_u(0x5BL, 5)) , 6UL) == l_1572), 0x99L)) > p_3), g_647[0][0], p_5) > 0UL)))) | 7UL)) && p_5)))), l_1593[0]))) > p_5)), g_1099)) || p_3) > 65531UL);
            }
            l_1221 = (l_1613[0] = (((l_1310 & (func_40(l_1388) >= (4294967289UL && func_8(((safe_add_func_uint32_t_u_u((l_1357 || g_1161), ((g_647[0][1] = p_3) == (safe_lshift_func_int16_t_s_u(((p_4 < (safe_sub_func_int16_t_s_s((l_1310 > p_4), g_207))) , 0L), 11))))) || g_1050[0]), l_1290)))) , l_1620) > g_1070));
        }
        else
        {
            unsigned char l_1631[7] = {0x9EL,0x9EL,0x9EL,0x9EL,0x9EL,0x9EL,0x9EL};
            int l_1676 = 4L;
            int i;
            g_455 = (p_4 != (safe_sub_func_uint8_t_u_u((l_1322 = ((l_1219 = (safe_lshift_func_uint16_t_u_u(g_1220, (g_356 = (safe_lshift_func_uint8_t_u_u(g_209, 1)))))) || (safe_rshift_func_uint8_t_u_u((p_5 < g_290), func_8(((g_81[6] = 1UL) <= (p_3 = ((((safe_add_func_int32_t_s_s(g_647[2][0], (l_1607 <= g_321))) && p_5) ^ l_1588) <= 5L))), l_1631[2]))))), p_5)));
            for (g_642 = 0; (g_642 != 22); ++g_642)
            {
                unsigned char l_1640 = 0UL;
                unsigned l_1646[4][3][1] = {{{5UL},{5UL},{4294967292UL}},{{5UL},{5UL},{4294967292UL}},{{5UL},{5UL},{4294967292UL}},{{5UL},{5UL},{4294967292UL}}};
                int l_1647 = (-1L);
                unsigned short l_1689 = 65535UL;
                int i, j, k;
                g_600 = (g_909 , 0x80A3D7ECL);
                g_276 = (g_81[2] && g_862);
                if (((safe_sub_func_uint8_t_u_u(p_4, ((!p_3) | (g_1027 = l_1631[1])))) >= ((safe_lshift_func_uint8_t_u_u((g_1161 = (safe_sub_func_int32_t_s_s((g_600 = g_650), p_5))), 0)) != l_1640)))
                {
                    unsigned char l_1645 = 1UL;
                    int l_1648 = 0xD0A23773L;
                    int l_1670 = (-7L);
                    g_455 = ((((safe_mod_func_uint8_t_u_u(((func_52((~(safe_mod_func_int32_t_s_s(l_1607, (l_1648 = (l_1647 = (((+(func_8(p_4, l_1607) , ((((0UL <= ((l_1645 || g_1161) <= l_1646[0][2][0])) != 0x55C2L) && l_1542) && 0x06L))) < g_1050[0]) , p_4))))))) >= p_3) != 0x5DBDL), 0x5CL)) | g_972) ^ g_1050[0]) , p_4);
                    g_455 = (l_1648 = ((safe_sub_func_int32_t_s_s(g_106, (safe_rshift_func_uint16_t_u_s((p_3 = 0xE358L), 8)))) && p_5));
                    for (g_232 = 0; (g_232 != 45); g_232 = safe_add_func_int16_t_s_s(g_232, 9))
                    {
                        unsigned short l_1655[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1655[i] = 0UL;
                        l_1655[0] = l_1645;
                        g_1099 = ((l_1655[0] ^ ((((g_209 <= ((l_1322 = (safe_mod_func_uint8_t_u_u(l_1620, (safe_sub_func_int8_t_s_s((((g_598 && l_1646[0][2][0]) & (g_1669 = (safe_lshift_func_uint8_t_u_s((safe_sub_func_int8_t_s_s((safe_unary_minus_func_int16_t_s((g_1050[0] = (safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(g_276, (l_1322 , p_4))) <= 0x33L), g_290))))), g_218)), 0)))) <= l_1631[3]), 5UL))))) & l_1301)) <= g_81[3]) , l_1631[2]) == g_290)) && l_1655[0]);
                        if (g_321)
                            continue;
                        l_1670 = (g_817 < ((g_793 = ((l_1648 = 0UL) ^ (((g_455 ^ l_1645) || g_321) , func_52(g_647[2][0])))) != (g_290 = 2UL)));
                    }
                    l_1647 = (((((((safe_add_func_uint8_t_u_u(func_42(g_647[3][2], l_1219, g_1061, g_1394), (p_4 , g_647[3][1]))) , ((((l_1620 >= p_3) | 0x4857F632L) >= p_5) != 0xD1DAL)) | l_1203) , g_110) ^ l_1645) && g_1061) < 0x2F260E11L);
                }
                else
                {
                    unsigned char l_1683[1][2][6] = {{{255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL}}};
                    int l_1688[1][4] = {{0L,0L,0L,0L}};
                    int i, j, k;
                    for (l_1310 = 0; (l_1310 > 5); l_1310++)
                    {
                        l_1676 = ((l_1524 , l_1675) < 4294967292UL);
                        l_1647 = func_40((safe_add_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((p_4 , (((!0x80L) != l_1683[0][1][4]) , l_1683[0][1][2])) , ((safe_lshift_func_int16_t_s_u((l_1688[0][0] = (safe_unary_minus_func_int16_t_s(l_1687))), 7)) < (l_1676 = (g_650 , (l_1675 = (g_1050[0] < ((l_1689 = g_207) , func_32((safe_sub_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u(l_1631[2], l_1388)), p_4)), g_598, l_1313, l_1303, p_3)))))))), g_598)), 0)), g_972)));
                        l_1322 = 0xD34B28A3L;
                    }
                }
            }
        }
    }
    else
    {
        unsigned l_1703 = 0xD5DDC17EL;
        int l_1705[5] = {0x8E730E2AL,0x8E730E2AL,0x8E730E2AL,0x8E730E2AL,0x8E730E2AL};
        const unsigned short l_1716[5][8] = {{0x150BL,0x150BL,65531UL,0x150BL,0x150BL,65531UL,0x150BL,0x150BL},{1UL,0x150BL,1UL,1UL,0x150BL,1UL,1UL,0x150BL},{0x150BL,1UL,1UL,0x150BL,1UL,1UL,0x150BL,1UL},{0x150BL,0x150BL,65531UL,0x150BL,0x150BL,65531UL,0x150BL,0x150BL},{1UL,0x150BL,1UL,1UL,0x150BL,1UL,1UL,0x150BL}};
        unsigned short l_1724 = 9UL;
        int l_1750 = 1L;
        int l_1757[5];
        int i, j;
        for (i = 0; i < 5; i++)
            l_1757[i] = (-4L);
        for (p_3 = 0; (p_3 != 23); p_3++)
        {
            const char l_1702[9] = {0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL,0x7DL};
            int l_1719 = 0xD3F4CC35L;
            int i;
            for (g_1001 = (-2); (g_1001 >= 31); g_1001 = safe_add_func_int8_t_s_s(g_1001, 1))
            {
                if (p_4)
                    break;
            }
            for (g_1669 = (-28); (g_1669 <= (-12)); g_1669 = safe_add_func_int16_t_s_s(g_1669, 5))
            {
                short l_1704 = 1L;
                int l_1744 = (-1L);
                int l_1749 = 0L;
                unsigned l_1755 = 5UL;
                l_1719 = (((l_1705[2] = (safe_mod_func_uint32_t_u_u(func_38((func_40((g_1218 = l_1702[2])) == (l_1704 = (1L ^ l_1703)))), l_1702[2]))) & (g_1718[0] = (g_1717[6][0][2] = ((g_1050[0] = 0x4192L) >= ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0x82L, ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((((((l_1716[1][7] != g_647[3][4]) | g_1245) | g_911) , 0x8C853F0AL) >= p_4), l_1702[7])), 2)) , l_1702[2]))), g_1249)), 6)) & l_1303))))) == p_5);
                if ((safe_add_func_uint8_t_u_u((g_1027 <= (safe_mod_func_uint8_t_u_u(255UL, l_1724))), (safe_rshift_func_int8_t_s_s(0x2FL, (!(((func_42((((((safe_add_func_uint16_t_u_u((0xA372E887L >= (g_1099 = l_1705[0])), func_8((g_1050[0] > g_321), g_219[5]))) , 0x4BL) | l_1203) > (-10L)) | g_1001), p_4, l_1704, g_542[6][1][0]) < g_1729) < 0xD24FL) , p_4)))))))
                {
                    char l_1745 = (-1L);
                    int l_1746 = 1L;
                    g_600 = (g_1717[6][5][2] = l_1703);
                    l_1746 = func_29(((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_5, ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(l_1705[1], 1)), (((!(g_972 = 0x1C343C30L)) != p_3) >= (l_1744 = (l_1221 = (((safe_add_func_uint32_t_u_u(l_1702[2], (safe_rshift_func_uint16_t_u_u((func_40((p_4 , (safe_rshift_func_int16_t_s_s(l_1724, 8)))) ^ p_3), 14)))) || p_3) && 0x33F0L)))))) , 0x9D4CL))), g_1729)) , 7L), l_1745);
                }
                else
                {
                    unsigned l_1756 = 0x32B61E53L;
                    g_600 = g_94;
                    l_1757[2] = (((l_1750 = (g_81[9] = (l_1749 = (safe_lshift_func_uint8_t_u_u((l_1705[2] = l_1702[2]), g_455))))) < (safe_sub_func_int32_t_s_s((!(safe_add_func_uint32_t_u_u((65532UL ^ g_276), ((((1L >= (g_647[0][0] && (l_1755 >= p_4))) | (p_4 , 0xCAL)) ^ l_1719) == g_321)))), l_1756))) >= p_4);
                }
            }
        }
    }
    g_276 = (g_209 = l_1303);
    return p_4;
}







static unsigned func_8(char p_9, int p_10)
{
    return p_9;
}







static const unsigned short func_21(unsigned short p_22)
{
    int l_23 = (-1L);
    int l_24[6] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int l_609 = (-1L);
    int l_916 = 0xCFB31B9EL;
    unsigned l_944 = 0x7889AE3FL;
    unsigned l_959[2];
    unsigned short l_1000[8][5] = {{5UL,0UL,5UL,0UL,65535UL},{65531UL,0xA4A2L,65531UL,1UL,1UL},{5UL,0UL,5UL,0UL,65535UL},{65531UL,0xA4A2L,65531UL,1UL,1UL},{5UL,0UL,5UL,0UL,65535UL},{65531UL,0xA4A2L,65531UL,1UL,1UL},{5UL,0UL,5UL,0UL,65535UL},{65531UL,0xA4A2L,65531UL,1UL,1UL}};
    short l_1003 = 0L;
    char l_1006 = 0x2EL;
    short l_1145[3][8] = {{(-3L),(-3L),0x8CDEL,1L,0xDEE5L,1L,0x8CDEL,(-3L)},{(-3L),(-2L),0x8E71L,0x8CDEL,0x8CDEL,0x8E71L,(-2L),(-3L)},{(-2L),3L,(-3L),1L,(-3L),3L,(-2L),(-2L)}};
    unsigned l_1200 = 18446744073709551612UL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_959[i] = 7UL;
    l_23 = l_23;
    for (p_22 = 0; (p_22 <= 5); p_22 += 1)
    {
        const int l_603 = 0x4DD5E1CDL;
        int l_917 = 0L;
        for (l_23 = 0; (l_23 <= 5); l_23 += 1)
        {
            int l_610 = 0x3AAE0DB3L;
            int l_951 = 0x422F4314L;
            int i;
            l_917 = (((l_24[l_23] , ((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((l_916 = ((l_24[5] = func_29(((l_610 = (l_609 = (((l_24[p_22] = ((func_32(g_11, ((65530UL >= func_38(((((((((func_40(g_11) == p_22) | ((safe_sub_func_int8_t_s_s(((g_321 >= 1UL) != l_603), p_22)) , l_603)) ^ (-1L)) <= 0x6E3CAB8DL) , 0xC2346ADAL) ^ (-6L)) | (-6L)) , l_603))) , g_209), l_24[l_23], g_321, l_23) != p_22) ^ g_321)) | l_603) | g_207))) < (-3L)), g_11)) <= (-1L))), g_207)) < l_23), g_207)) < 0x4BFEL)) , g_219[4]) != 65535UL);
            for (g_171 = 0; (g_171 == 13); g_171++)
            {
                unsigned short l_922 = 0UL;
                int l_927 = 1L;
                l_922 = (safe_rshift_func_int16_t_s_s(p_22, 0));
                for (l_610 = (-29); (l_610 == (-4)); l_610++)
                {
                    for (g_862 = 0; (g_862 >= 5); g_862++)
                    {
                        const unsigned l_942 = 0x20F2EFA0L;
                        int l_943[7] = {4L,4L,4L,4L,4L,4L,4L};
                        int i;
                        g_455 = l_24[3];
                        l_927 = 0x578A7915L;
                        g_455 = (((l_944 = ((l_943[3] = ((p_22 > p_22) == (safe_lshift_func_int8_t_s_u((func_52(((safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_219[0], 6)), (l_610 == (0x389ED56FL & (safe_lshift_func_uint8_t_u_u(p_22, 1)))))) , ((p_22 , (safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(0xC0B554C1L, ((((safe_rshift_func_int8_t_s_u(0x37L, p_22)) & p_22) , l_942) & (-6L)))), g_909))) && 0x31E8D5ADL))) <= l_24[l_23]), p_22)))) >= 1UL)) , p_22) && 0UL);
                    }
                    l_951 = (l_609 = (((g_911 | (l_24[p_22] = (1L & g_356))) , (l_24[p_22] = p_22)) && ((safe_sub_func_uint8_t_u_u((((g_11 || func_52(g_209)) && ((l_944 , (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((g_911 || g_650) | 0x773A335AL), 13)) & g_81[3]), 9))) == g_862)) , 0x15L), p_22)) , g_817)));
                }
            }
        }
    }
    if ((((g_598 = ((l_609 | (g_455 = (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((((g_171 | (safe_sub_func_int8_t_s_s((~(g_650 = (safe_unary_minus_func_uint16_t_u(p_22)))), ((l_959[0] = p_22) , 8UL)))) , (p_22 >= (l_916 = (g_642 < (safe_sub_func_uint8_t_u_u((((((!(l_24[2] = (p_22 ^ g_911))) ^ p_22) >= g_817) != p_22) ^ g_11), l_916)))))) && g_219[0]), l_944)), 0x2CABL)))) == l_609)) , g_817) <= g_106))
    {
        const unsigned l_966 = 18446744073709551615UL;
        int l_967 = 0x1F9D9BE3L;
        int l_968 = 8L;
        int l_971 = 0xE13219B0L;
        for (p_22 = 0; p_22 < 6; p_22 += 1)
        {
            l_24[p_22] = 6L;
        }
        l_24[5] = (l_916 = ((safe_mod_func_uint16_t_u_u((((g_972 = (func_40(func_29(((((safe_add_func_int16_t_s_s(g_81[3], (g_647[2][0] , (-7L)))) | (l_966 >= (l_968 = (l_967 , 0x4FF5L)))) == (p_22 | (0xC946L && (l_971 = (safe_rshift_func_int8_t_s_s((g_11 <= g_357), 5)))))) , g_542[1][5][0]), p_22)) | p_22)) | g_321) | p_22), 0x1838L)) , 0x8A1DD668L));
    }
    else
    {
        char l_989[3];
        int l_990 = 0x37566C80L;
        int l_995 = 0x9DE39EA0L;
        int i;
        for (i = 0; i < 3; i++)
            l_989[i] = 0x91L;
        g_642 = (g_276 = p_22);
        l_990 = (((safe_rshift_func_int16_t_s_s(9L, 7)) , ((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(l_944, (safe_mod_func_uint16_t_u_u((l_916 , (((safe_lshift_func_uint16_t_u_s(0x768CL, (safe_sub_func_uint32_t_u_u(l_959[0], (!(safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_22, 11)), 5))))))) , (p_22 || g_862)) & (-5L))), l_23)))) ^ g_911), 0x456EF254L)) ^ p_22)) ^ l_989[2]);
        g_455 = (g_642 = (func_38(g_972) , func_52((g_647[1][3] ^ (g_357 || (g_207 , (safe_mod_func_int16_t_s_s(((0L > ((0xB3L || (safe_mod_func_uint16_t_u_u((g_356 = ((l_995 = (l_990 = 255UL)) && l_989[2])), g_207))) , g_219[0])) , g_642), g_94))))))));
    }
    if (((((g_598 > (((p_22 || (func_32((l_23 = ((safe_lshift_func_uint16_t_u_s(g_171, ((func_52((((0x9D4FE54AL == 0xFCA75FE2L) | (safe_lshift_func_uint8_t_u_u(p_22, (l_23 > func_32(((l_24[2] = func_38(((func_52((l_916 = (l_609 <= p_22))) != p_22) , 0x3B19L))) == p_22), g_275, l_1000[2][3], g_356, l_1000[2][3]))))) || g_542[1][5][0])) < p_22) , g_1001))) | 4294967294UL)), g_647[3][4], g_218, p_22, l_1000[4][3]) | 0x89BA3B8DL)) , l_1000[4][2]) & 0x08L)) & 1L) | g_171) && p_22))
    {
        int l_1002 = 0L;
        const unsigned char l_1017 = 0x12L;
        for (g_110 = 0; (g_110 <= 4); g_110 += 1)
        {
            int i;
            l_23 = ((g_81[(g_110 + 3)] = (+(g_81[g_110] , (l_1002 <= (((g_455 && ((p_22 , 1L) || l_959[0])) != (p_22 , l_1003)) > 0UL))))) & 1L);
            for (g_94 = 0; (g_94 <= 9); g_94 += 1)
            {
                int i, j;
                g_642 = (l_24[3] = g_647[g_110][g_110]);
            }
        }
        l_23 = (safe_add_func_uint32_t_u_u(g_542[0][4][1], (p_22 == func_52((!l_1006)))));
        for (g_600 = 9; (g_600 != 27); g_600 = safe_add_func_uint16_t_u_u(g_600, 1))
        {
            int l_1009 = (-6L);
            l_1009 = (g_642 = g_321);
            for (l_609 = (-21); (l_609 <= (-4)); l_609 = safe_add_func_uint8_t_u_u(l_609, 4))
            {
                unsigned l_1016 = 0x86B652A3L;
                for (g_793 = (-20); (g_793 >= 54); ++g_793)
                {
                    g_209 = 0x7CCBE23EL;
                    if (l_1006)
                        break;
                    for (l_1006 = 0; (l_1006 == (-7)); l_1006--)
                    {
                        l_1009 = (g_276 = 0x25D85BDEL);
                        if (l_1016)
                            continue;
                    }
                }
            }
            l_1009 = 0L;
            return l_1017;
        }
        l_1002 = g_911;
    }
    else
    {
        int l_1048 = 0xCF1F5393L;
        unsigned l_1094 = 4294967293UL;
        const unsigned char l_1136[6] = {0x04L,0x04L,0x4AL,0x04L,0x04L,0x4AL};
        int l_1137[7][3][3] = {{{0x63EDF641L,0x63EDF641L,0x1D42F45FL},{1L,0x7CA02AA8L,(-1L)},{0x63EDF641L,0x63EDF641L,0x1D42F45FL}},{{1L,0x31FE99E5L,1L},{0xB566A7B1L,0xB566A7B1L,0x63EDF641L},{1L,0x31FE99E5L,1L}},{{0xB566A7B1L,0xB566A7B1L,0x63EDF641L},{1L,0x31FE99E5L,1L},{0xB566A7B1L,0xB566A7B1L,0x63EDF641L}},{{1L,0x31FE99E5L,1L},{0xB566A7B1L,0xB566A7B1L,0x63EDF641L},{1L,0x31FE99E5L,1L}},{{0xB566A7B1L,0xB566A7B1L,0x63EDF641L},{1L,0x31FE99E5L,1L},{0xB566A7B1L,0xB566A7B1L,0x63EDF641L}},{{1L,0x31FE99E5L,1L},{0xB566A7B1L,0xB566A7B1L,0x63EDF641L},{1L,0x31FE99E5L,1L}},{{0xB566A7B1L,0xB566A7B1L,0x63EDF641L},{1L,0x31FE99E5L,1L},{0xB566A7B1L,0xB566A7B1L,0x63EDF641L}}};
        unsigned l_1169 = 0x9E57F3FAL;
        char l_1189[8];
        unsigned char l_1201 = 0xD2L;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_1189[i] = 0xD8L;
        for (l_23 = 0; (l_23 < (-14)); l_23 = safe_sub_func_int32_t_s_s(l_23, 4))
        {
            int l_1026 = 4L;
            if ((g_94 | (255UL == l_1000[6][1])))
            {
                short l_1032 = 1L;
                l_1032 = (func_29((safe_sub_func_uint32_t_u_u(((~p_22) > p_22), g_171)), g_276) < ((safe_mod_func_int32_t_s_s((((((safe_mod_func_int8_t_s_s((l_1000[0][4] && ((g_1027 = l_1026) | (safe_add_func_int32_t_s_s(p_22, (safe_sub_func_uint8_t_u_u((g_207 <= (-1L)), p_22)))))), g_793)) >= 9L) | 4UL) || p_22) | g_11), 0x32CCE53BL)) ^ p_22));
                return g_455;
            }
            else
            {
                unsigned l_1037 = 4294967293UL;
                int l_1053 = 0x52D34FB2L;
                const int l_1054 = 0x48C7E5FFL;
                int l_1062 = 1L;
                for (g_650 = 5; (g_650 >= 0); g_650 -= 1)
                {
                    int l_1049 = 0x69FA0BA8L;
                    for (g_290 = 0; (g_290 <= 4); g_290 += 1)
                    {
                        int i, j;
                        l_24[g_650] = (-1L);
                        l_24[g_650] = ((0xF749E2D9L ^ (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(func_38((l_1037 = g_647[g_290][g_290])), l_24[g_650])), 65533UL))) , (g_219[5] != ((func_52(((((safe_rshift_func_int16_t_s_s(g_642, 13)) & func_52((g_911 = g_1027))) | g_642) , g_647[3][4])) >= l_1000[2][3]) && l_944)));
                        g_209 = ((safe_rshift_func_uint8_t_u_u(l_1037, 7)) != ((func_32(p_22, p_22, (g_1050[0] = (((safe_rshift_func_int16_t_s_s(1L, (((safe_add_func_uint8_t_u_u(((((safe_add_func_int8_t_s_s(p_22, (l_609 & ((func_32((g_106 & (l_1048 < ((-8L) ^ g_793))), l_1026, g_598, p_22, g_171) , l_24[g_650]) | g_642)))) ^ p_22) | g_542[1][5][0]) || p_22), l_1037)) == g_106) != g_647[2][4]))) >= l_1049) > 0xA583L)), l_1037, p_22) == p_22) ^ l_1049));
                        if (g_647[g_290][g_290])
                            continue;
                    }
                    for (g_218 = (-1); (g_218 != 27); g_218++)
                    {
                        l_1053 = 0x9B48F313L;
                        return l_1049;
                    }
                    if (((l_1053 = ((((l_1026 = (0xC278L > (func_40(l_1054) > g_972))) == (((safe_lshift_func_int8_t_s_u(p_22, (l_24[1] = (safe_rshift_func_uint8_t_u_u(((p_22 < l_1037) , (safe_lshift_func_int16_t_s_u((-1L), 1))), 2))))) & l_1003) | l_1037)) >= l_1048) ^ 4UL)) >= p_22))
                    {
                        unsigned l_1069[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1069[i] = 0x8B208B6AL;
                        l_1053 = ((-1L) ^ (g_1061 = g_357));
                        g_94 = ((l_1062 > (0x319A4014L | ((((safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((g_171 = (l_1048 || (((g_81[3] = (((g_1001 , ((safe_mod_func_uint32_t_u_u(g_642, l_1000[5][3])) & p_22)) | (0x2BE8L <= g_598)) >= l_1026)) == g_219[1]) < p_22))), g_218)), 65529UL)) != g_909) , l_1069[1]) >= p_22))) < g_598);
                    }
                    else
                    {
                        unsigned l_1071 = 0x1E92B273L;
                        l_1053 = (g_1070 = g_600);
                        l_1071 = (g_650 || 250UL);
                        g_209 = ((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(((0xFFL ^ ((safe_sub_func_uint32_t_u_u(g_218, g_542[7][1][1])) ^ p_22)) >= (safe_lshift_func_int16_t_s_u((+(g_600 ^ (g_642 = (safe_sub_func_int16_t_s_s(g_793, g_232))))), 12))), (g_219[3] , ((g_1070 , p_22) & l_1054)))), p_22)) , g_1050[0]);
                    }
                }
                for (g_862 = 1; (g_862 <= 4); g_862 += 1)
                {
                    int l_1104 = 0xDAEA064CL;
                    for (l_1006 = 4; (l_1006 >= 0); l_1006 -= 1)
                    {
                        int i, j;
                        if (l_1000[(g_862 + 3)][l_1006])
                            break;
                    }
                    if (((((safe_mod_func_int32_t_s_s(func_38(p_22), (l_1026 || func_32(func_32((safe_add_func_uint8_t_u_u(g_218, p_22)), (l_1000[5][2] ^ ((((l_609 = 0x13EA91B9L) > (safe_sub_func_uint32_t_u_u((((l_1048 = ((~p_22) <= (0x395614ACL < p_22))) <= 0x5C90L) != g_647[3][4]), 0x326E9BECL))) , 0x4B9CEB81L) , l_1037)), p_22, g_817, g_219[4]), g_598, g_650, g_11, p_22)))) , g_600) , 0x2AA7D118L) , g_218))
                    {
                        unsigned l_1088 = 18446744073709551610UL;
                        int l_1089[7] = {2L,2L,0x19DD9898L,2L,2L,0x19DD9898L,2L};
                        int i;
                        if (l_1088)
                            break;
                        if (g_1050[0])
                            break;
                        g_94 = (l_1089[5] = g_81[3]);
                    }
                    else
                    {
                        g_455 = (((func_38((g_81[3] = l_1062)) | (safe_lshift_func_uint16_t_u_s(g_600, p_22))) , func_38((safe_lshift_func_uint16_t_u_s(func_52(g_1070), 0)))) >= (((l_1094 = ((((l_1062 < l_1037) > l_1026) == 0x32L) | 0x17F8L)) , p_22) , p_22));
                    }
                    l_1104 = ((g_793 || (safe_rshift_func_int8_t_s_s(((+(p_22 , g_81[4])) && ((func_40(((l_609 = (((safe_rshift_func_uint16_t_u_u(l_1026, ((g_1099 = func_38((p_22 = p_22))) != 4UL))) <= l_1037) , (safe_sub_func_uint16_t_u_u((((safe_lshift_func_uint8_t_u_u((((l_1104 ^ l_1054) == l_1048) || p_22), 3)) | p_22) | l_1104), l_1026)))) < 249UL)) || l_1037) , 0x1D28L)), 6))) & l_1104);
                }
                l_1053 = (l_1048 = g_455);
                if (g_1050[0])
                    break;
            }
        }
        for (g_909 = 0; (g_909 <= 0); g_909 += 1)
        {
            char l_1119[4][10] = {{0xF7L,(-4L),(-4L),0xF7L,0L,0x6BL,0xF7L,0x6BL,0L,0xF7L},{0x6BL,0xF7L,0x6BL,0L,0xF7L,(-4L),(-4L),0xF7L,0L,0x6BL},{0x88L,0x88L,0x83L,0xF7L,0x42L,0x83L,0x42L,0xF7L,0x83L,0x88L},{0x42L,(-4L),0x6BL,0x42L,0L,0L,0xF7L,0L,0x6BL,0xF7L}};
            int l_1126 = 1L;
            int i, j;
            for (g_232 = 0; (g_232 <= 0); g_232 += 1)
            {
                unsigned l_1117 = 0x6CAA9AF7L;
                int l_1118 = 0x07569717L;
                for (g_1001 = 0; (g_1001 <= 0); g_1001 += 1)
                {
                    for (l_1003 = 0; (l_1003 >= 0); l_1003 -= 1)
                    {
                        int i;
                        l_1048 = 0x402175ACL;
                        g_209 = (((g_1050[g_909] < (((g_276 = ((func_32((safe_add_func_uint16_t_u_u((((g_647[2][0] = (9L != (((((safe_add_func_uint16_t_u_u(((l_1118 = ((safe_rshift_func_uint8_t_u_s(func_52(((g_81[(g_1001 + 3)] > g_647[1][4]) || (safe_lshift_func_uint16_t_u_s((g_218 >= ((g_232 >= ((safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(g_542[0][0][0], (l_1048 ^ p_22))), p_22)) , 0xECL)) == p_22)), 8)))), 1)) ^ l_1117)) || p_22), 0x52A2L)) <= g_862) && l_1000[6][4]) , g_81[2]) & g_1050[g_909]))) , 0x732FL) >= p_22), p_22)), p_22, g_1050[g_909], g_1050[g_909], g_642) & 4294967295UL) > 1UL)) , 0xC8L) & 0x3EL)) ^ p_22) > l_1119[3][7]);
                        if (g_1050[g_909])
                            continue;
                    }
                }
                l_24[2] = (func_52(g_650) , p_22);
                return l_1006;
            }
            for (g_171 = 0; (g_171 <= 0); g_171 += 1)
            {
                unsigned short l_1135 = 1UL;
                int i;
                l_1126 = ((-5L) <= (safe_add_func_int32_t_s_s(((safe_add_func_uint16_t_u_u(g_1050[g_909], g_219[0])) != 65535UL), ((p_22 || (65535UL == 0xDD5AL)) , (g_1001 == ((l_1000[7][1] , g_1050[g_909]) , l_1119[3][7]))))));
                l_1137[2][2][0] = (((((((p_22 <= 0x76AEF123L) & ((((g_1070 = (((safe_lshift_func_int8_t_s_s(((g_1027 = func_52((l_1048 = (l_609 = g_207)))) < func_32((g_357 , ((safe_mod_func_uint8_t_u_u((g_275 == func_32(((l_1135 = ((g_276 && (safe_rshift_func_int16_t_s_u((g_598 = (g_1050[g_909] | 0xF4079033L)), 7))) < l_1000[2][3])) , p_22), g_1050[g_909], l_944, g_1050[g_909], p_22)), g_1050[g_909])) , l_1126)), p_22, p_22, l_1136[4], g_1099)), 1)) & 0UL) > g_647[3][4])) >= 0L) , 254UL) == g_650)) == 0x99L) && p_22) & g_1099) < 5L) == p_22);
            }
        }
        if (((g_106 = g_357) , (safe_sub_func_int16_t_s_s(func_29(p_22, (+g_1050[0])), (g_1070 = (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_u(p_22, 4)) , p_22), 0)))))))
        {
            int l_1144 = 3L;
            int l_1146[5] = {0x42CE4570L,0x42CE4570L,0x42CE4570L,0x42CE4570L,0x42CE4570L};
            int i;
            g_209 = l_1144;
            l_1146[1] = ((l_1145[2][5] , l_1144) && (l_1144 = l_1144));
            return g_600;
        }
        else
        {
            unsigned char l_1170 = 1UL;
            int l_1174 = 0xEB81D140L;
            l_1048 = (((safe_lshift_func_int8_t_s_s(0xEFL, (safe_lshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(func_42(p_22, p_22, (g_81[5] , g_650), g_209), (p_22 <= (safe_rshift_func_uint8_t_u_u(g_1027, 7))))), g_911)))) | p_22) == g_862);
            if ((func_52(l_1145[0][2]) == g_1027))
            {
                g_209 = l_1003;
            }
            else
            {
                const unsigned short l_1168[6][10] = {{0x9178L,1UL,2UL,0UL,4UL,4UL,0UL,2UL,1UL,0x9178L},{1UL,0x22FAL,1UL,0UL,0x523BL,0x9178L,0x523BL,0UL,1UL,0x22FAL},{0x2920L,2UL,0x9178L,0x22FAL,0x523BL,0x6EF8L,0x6EF8L,0x523BL,0x22FAL,0x9178L},{0x523BL,0x523BL,1UL,0x2920L,4UL,0x6EF8L,1UL,0x6EF8L,4UL,0x2920L},{0x2920L,9UL,0x2920L,0x6EF8L,0UL,0x9178L,1UL,1UL,0x9178L,0UL},{1UL,0x523BL,0x523BL,1UL,0x2920L,4UL,0x6EF8L,1UL,0x6EF8L,4UL}};
                int l_1171 = 0x0B2EF09EL;
                int l_1190 = 1L;
                int i, j;
                l_1171 = (safe_add_func_uint16_t_u_u((247UL != (safe_rshift_func_int16_t_s_s((g_1050[0] = g_1099), 1))), (safe_rshift_func_uint8_t_u_u(((g_1161 = func_52(g_542[1][5][0])) ^ ((p_22 != func_32(func_32(g_1061, (func_32(((safe_lshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u((((((safe_lshift_func_uint16_t_u_u(((g_642 , (l_1168[5][5] == 0x74L)) != l_1169), 8)) >= g_909) && 65535UL) && l_1168[5][5]) , g_218), p_22)) , l_1170), 6)) , p_22), p_22, g_321, p_22, g_11) , 0x9485106EL), g_207, l_959[1], l_959[1]), g_171, g_1001, p_22, p_22)) || p_22)), 6))));
                l_1137[2][2][0] = ((1L && l_1000[0][1]) <= (((((safe_rshift_func_uint8_t_u_s((((g_321 == (!(((((~0xFD1DL) != l_1174) ^ g_357) , ((((p_22 , ((safe_add_func_int16_t_s_s(0x4E04L, (p_22 = func_52((((safe_lshift_func_int8_t_s_u(((((safe_mod_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((+(((((!((((p_22 == l_1168[3][1]) == 0x38BD49BAL) || 0x08FAL) , g_207)) , l_1137[3][0][0]) | 1UL) >= g_1050[0]) != 0x8913L)), p_22)), 0xAE30L)) & g_911) , 0L) <= g_276), 0)) | g_542[1][5][0]) & p_22))))) , 0x80C61E1FL)) , 0xF4206236L) < l_1174) , g_356)) ^ g_207))) , l_23) == 1UL), 2)) < 0x6C0EL) < l_1168[5][5]) ^ l_1168[5][5]) , p_22));
                l_1174 = ((((((func_40(l_1171) , 0xA5F004B6L) || (g_600 = l_1174)) > (l_1190 = ((p_22 | (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u((g_1027 > (p_22 , ((l_1168[5][5] && (safe_rshift_func_uint16_t_u_s(g_1027, l_1170))) != l_1189[0]))), g_1070)) , (-8L)), l_1168[5][5]))) , g_817))) , 0x57L) | l_944) <= l_1171);
                l_1137[2][2][0] = (safe_sub_func_uint8_t_u_u(g_1050[0], (g_1161 = p_22)));
            }
            if (g_793)
            {
                g_642 = (2UL | (safe_add_func_uint32_t_u_u(l_1174, g_276)));
                l_609 = (l_1174 = p_22);
                g_1099 = 0x45793337L;
            }
            else
            {
                int l_1199 = 0x5689345BL;
                l_1137[5][2][1] = ((((((0L <= ((safe_rshift_func_uint16_t_u_u(0UL, 12)) || p_22)) , (((l_23 = (((((((func_32(l_1170, l_1094, p_22, (g_209 = ((((safe_mod_func_int8_t_s_s(((0UL == (-4L)) != 0xADB8L), g_11)) , p_22) != l_1199) , p_22)), p_22) , 0L) , l_1199) == g_909) == 0L) >= 254UL) || 4294967295UL) , g_1050[0])) , 253UL) | l_1170)) >= 8UL) , l_1200) || 0xF7121BA4L) , (-10L));
            }
            l_1137[3][0][0] = l_1201;
        }
        return l_1137[2][2][0];
    }
    return l_959[1];
}







static int func_29(char p_30, unsigned char p_31)
{
    unsigned l_615 = 0x8BA2D4EAL;
    int l_618[10][1][6] = {{{0x9C1A0B6EL,0x3111D284L,0xC3B4C0D6L,0x3111D284L,0x9C1A0B6EL,0x51275D8AL}},{{0x9C1A0B6EL,(-10L),0x3111D284L,4L,(-8L),(-8L)}},{{(-10L),(-1L),(-1L),(-10L),0xC3B4C0D6L,(-8L)}},{{0L,(-8L),0x3111D284L,0x51275D8AL,4L,0x51275D8AL}},{{0xC3B4C0D6L,(-1L),0x9C1A0B6EL,(-10L),0x3111D284L,4L}},{{(-1L),(-1L),(-8L),0x9C1A0B6EL,0x9C1A0B6EL,(-8L)}},{{0x51275D8AL,0x51275D8AL,0xC3B4C0D6L,0x9C1A0B6EL,(-1L),(-10L)}},{{(-1L),0xC3B4C0D6L,4L,(-10L),4L,0xC3B4C0D6L}},{{0x9C1A0B6EL,(-1L),4L,0L,0x51275D8AL,(-10L)}},{{(-8L),0L,0xC3B4C0D6L,0xC3B4C0D6L,0L,(-8L)}}};
    unsigned short l_625 = 5UL;
    const unsigned short l_626 = 0xA907L;
    int l_653 = (-8L);
    unsigned l_712 = 0x640507C8L;
    int l_851 = 0x992B04F5L;
    const char l_859 = 0xBCL;
    unsigned char l_910[9][5] = {{0x44L,0xE4L,0x44L,0xE4L,0x44L},{0x7EL,0x7EL,0x7EL,0x7EL,0x7EL},{0x44L,0xE4L,0x44L,0xE4L,0x44L},{0x7EL,0x7EL,0x7EL,0x7EL,0x7EL},{0x44L,0xE4L,0x44L,0xE4L,0x44L},{0x7EL,0x7EL,0x7EL,0x7EL,0x7EL},{0x44L,0xE4L,0x44L,0xE4L,0x44L},{0x7EL,0x7EL,0x7EL,0x7EL,0x7EL},{0x44L,0xE4L,0x44L,0xE4L,0x44L}};
    int i, j, k;
    for (g_95 = 0; g_95 < 10; g_95 += 1)
    {
        g_81[g_95] = 0x6925L;
    }
    l_618[6][0][3] = (safe_sub_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s((g_356 = (((g_356 <= (7L | ((((func_32((l_615 , ((safe_add_func_int8_t_s_s(((l_615 > l_618[3][0][0]) < (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(g_356, ((safe_sub_func_uint8_t_u_u((((func_38(p_30) , (l_615 ^ g_218)) , l_615) != 0xE853L), 0x73L)) & p_31))), g_207))), 0x45L)) , 0L)), l_625, l_618[3][0][5], l_626, g_207) >= p_30) , p_30) | 0xD2DD8162L) , 1UL))) | p_31) ^ g_232)), 7)) > g_171), 4UL));
    for (g_209 = (-16); (g_209 < (-25)); g_209 = safe_sub_func_int32_t_s_s(g_209, 5))
    {
        for (g_600 = 15; (g_600 >= (-10)); g_600 = safe_sub_func_uint32_t_u_u(g_600, 5))
        {
            int l_633 = 0xF106643CL;
            unsigned l_643[2];
            int i;
            for (i = 0; i < 2; i++)
                l_643[i] = 0x93189D29L;
            l_643[0] = ((255UL & ((safe_rshift_func_int8_t_s_u(p_30, 1)) != ((func_52(((l_633 | (safe_lshift_func_uint16_t_u_s(((-9L) | g_219[0]), (safe_rshift_func_uint8_t_u_s((0x97A3L | ((safe_mod_func_uint16_t_u_u((p_30 & (safe_mod_func_uint32_t_u_u((!((g_642 = g_276) , 0x9EBC3F98L)), 0xF1CF328DL))), g_275)) <= g_95)), 0))))) , g_232)) , g_218) & p_30))) & g_209);
            if (g_95)
                break;
        }
    }
    for (g_94 = 0; (g_94 > 8); g_94++)
    {
        char l_646[8] = {0xDDL,0xDDL,0xDDL,0xDDL,0xDDL,0xDDL,0xDDL,0xDDL};
        int l_654 = 1L;
        const unsigned l_737 = 3UL;
        const unsigned char l_897 = 0xBEL;
        int i;
        g_642 = (l_618[3][0][0] = p_30);
        l_646[1] = 1L;
        for (g_209 = 7; (g_209 >= 2); g_209 -= 1)
        {
            int l_689 = 1L;
            int l_898[4];
            int i;
            for (i = 0; i < 4; i++)
                l_898[i] = (-5L);
            l_653 = (((g_647[3][4] = l_646[g_209]) == ((g_106 = (l_618[3][0][0] = func_32((g_600 != p_31), g_232, (g_95 || (p_30 = g_598)), ((safe_sub_func_uint8_t_u_u((g_650 = 250UL), ((g_207 , ((safe_lshift_func_int8_t_s_u((g_94 <= 0xB2L), l_646[g_209])) > g_290)) , l_646[7]))) > 0x09L), p_31))) , 0L)) , g_455);
            if (g_357)
            {
                unsigned l_669 = 1UL;
                int l_670 = 0xBD23FD2BL;
                l_653 = ((l_654 = l_653) != (safe_rshift_func_uint8_t_u_s(((((g_650 = (func_32((safe_mod_func_int8_t_s_s(l_646[g_209], g_218)), (l_618[3][0][0] = ((safe_mod_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(func_32((safe_lshift_func_uint8_t_u_u(((0x8606L & (safe_rshift_func_uint16_t_u_u((g_81[2] = (g_650 || (p_30 & ((g_356 = ((((g_11 == func_32(p_30, (l_669 = p_30), l_646[g_209], g_647[3][4], l_646[g_209])) == 0x26DAD73DL) > p_30) != p_30)) != 0xA446L)))), p_31))) < l_670), p_31)), l_670, l_646[1], p_30, g_275), g_218)), 0)) >= g_11), l_670)) , 1L)), p_31, p_30, g_171) && 0x4CL)) & (-1L)) , l_618[3][0][0]) , p_31), l_615)));
            }
            else
            {
                unsigned short l_677 = 0x1AF9L;
                const unsigned char l_678 = 0xCFL;
                unsigned l_696 = 0x868CF5B9L;
                int l_705 = 0x6516586EL;
                int l_713 = 0x076DD5FCL;
                l_689 = ((safe_sub_func_uint32_t_u_u(((safe_sub_func_uint32_t_u_u((1UL && (((safe_lshift_func_int8_t_s_u(1L, func_32(l_677, l_618[4][0][5], (p_31 = (~l_646[g_209])), l_678, (safe_mod_func_uint32_t_u_u((g_218 = ((safe_sub_func_int16_t_s_s((-7L), (safe_mod_func_uint32_t_u_u(0x6E51BC03L, (safe_add_func_uint8_t_u_u((safe_add_func_int16_t_s_s((-9L), 0xCCE0L)), p_30)))))) != 0x68F8A7FEL)), 0x287AAA15L))))) <= p_30) == 0x34L)), 0x8410E401L)) && g_110), 0x1B304FF5L)) ^ g_542[1][5][0]);
                if ((((safe_rshift_func_uint16_t_u_s((((l_646[4] ^ (l_654 = l_689)) != l_618[8][0][2]) >= (g_356 , (((g_650 > ((safe_lshift_func_uint8_t_u_u(0x41L, ((p_31 >= (safe_sub_func_uint8_t_u_u((l_646[1] == func_32(p_31, p_31, l_696, p_30, g_542[0][0][0])), 252UL))) < g_171))) != g_356)) && 7UL) > g_642))), 3)) || 7L) <= l_618[3][0][0]))
                {
                    const short l_714 = 0x5A7FL;
                    l_653 = (p_31 >= (g_219[5] , (g_219[0] , ((safe_lshift_func_int8_t_s_s(((func_32(g_647[3][4], (safe_lshift_func_int8_t_s_s((p_30 ^ (safe_mod_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s(((!(l_705 = g_219[0])) , (l_625 | (safe_mod_func_uint16_t_u_u(((((l_713 = (l_705 = (safe_add_func_uint16_t_u_u(p_30, (safe_mod_func_uint8_t_u_u(func_32((p_30 , p_30), l_712, l_678, l_689, p_30), 0x52L)))))) , 0xA3612ABAL) | p_31) , 0x3DD5L), p_30)))), g_209)) == g_106), 0x481875AEL))), 5)), l_615, l_714, p_31) < l_626) , 0x6CL), 6)) >= g_276))));
                }
                else
                {
                    short l_727 = 0L;
                    int l_728 = 0x75DBD460L;
                    g_276 = (safe_sub_func_uint8_t_u_u(0x32L, (safe_sub_func_int8_t_s_s(((0L < (safe_rshift_func_uint8_t_u_s(func_32(((p_30 , ((g_232 = p_31) && (l_728 = (g_598 = (((p_30 | ((((func_32((g_357 ^ (safe_sub_func_uint16_t_u_u((g_81[3] = l_654), (safe_rshift_func_int16_t_s_u(l_696, 8))))), (((((safe_add_func_uint16_t_u_u(p_31, p_31)) <= p_31) && l_713) != 0xEE33F77FL) , 0x12BE0A0AL), p_31, p_30, p_31) ^ p_31) || l_727) == (-10L)) || g_219[0])) > g_356) != l_646[g_209]))))) && p_30), g_11, p_31, g_276, g_219[0]), p_31))) , 1L), g_209))));
                    l_654 = ((l_728 != (safe_rshift_func_uint16_t_u_s((((l_705 = (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s((l_689 , (g_95 && p_30)), (((g_357 || (g_647[4][1] = (safe_sub_func_uint32_t_u_u(4294967288UL, l_713)))) < (g_356 | (p_31 , 0x00L))) != l_689))) > (-1L)), p_31))) ^ l_737) != l_618[3][0][0]), 14))) && 0x6D7C2224L);
                }
            }
            if (p_31)
                continue;
            if ((g_455 = ((l_625 , (safe_rshift_func_uint8_t_u_u(0x4EL, (((safe_rshift_func_uint8_t_u_u(g_81[3], 6)) <= 65529UL) ^ 9UL)))) != ((safe_rshift_func_uint8_t_u_s(((p_31 = 255UL) , ((1L | ((((-10L) == ((g_647[3][4] ^ l_626) , p_30)) || 5L) <= p_30)) & 6UL)), 2)) & 0xE2L))))
            {
                unsigned l_746 = 0UL;
                const unsigned l_781[5][4] = {{18446744073709551607UL,18446744073709551607UL,0xC4F3BA8AL,18446744073709551607UL},{18446744073709551607UL,18446744073709551613UL,18446744073709551613UL,18446744073709551607UL},{18446744073709551613UL,18446744073709551607UL,18446744073709551613UL,18446744073709551613UL},{18446744073709551607UL,18446744073709551607UL,0xC4F3BA8AL,18446744073709551607UL},{18446744073709551607UL,18446744073709551613UL,18446744073709551613UL,18446744073709551607UL}};
                int l_814 = (-1L);
                unsigned short l_818[7] = {65535UL,0UL,65535UL,65535UL,0UL,65535UL,65535UL};
                int i, j;
                if ((safe_lshift_func_uint16_t_u_u((p_31 , l_746), 0)))
                {
                    unsigned short l_751 = 0x4F42L;
                    int l_752 = 0x02D02769L;
                    l_689 = (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(func_32(p_30, (l_752 = l_751), ((l_654 = p_30) | (safe_lshift_func_int16_t_s_s(l_751, g_542[1][5][0]))), p_31, func_32(((0xBB4CL || (((safe_lshift_func_uint16_t_u_s(func_32((safe_rshift_func_uint8_t_u_u(l_751, 3)), p_31, p_31, p_31, l_746), g_290)) > g_95) , 0x751CL)) != 0x57L), l_746, p_31, p_31, l_746)), p_30)), 4));
                    for (g_95 = 0; (g_95 <= (-23)); --g_95)
                    {
                        unsigned l_761 = 0x4B3B9826L;
                        int l_778 = 5L;
                        int l_790 = 1L;
                        unsigned char l_794 = 0x0FL;
                        g_642 = g_650;
                        l_761 = l_746;
                        g_455 = (((l_689 = ((safe_lshift_func_int16_t_s_s(func_32(((safe_lshift_func_uint8_t_u_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(g_357, g_356)), (g_598 = (safe_lshift_func_int16_t_s_u(func_32((g_642 = (p_30 <= (l_752 = p_31))), (l_751 != (((((safe_lshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(func_32(l_761, ((l_778 = 0x669F1C80L) , (l_618[7][0][5] = (safe_add_func_int32_t_s_s(l_781[3][3], ((((safe_sub_func_int32_t_s_s((l_654 = p_30), g_276)) == l_646[3]) , 0xA772L) & g_647[3][4]))))), g_94, p_31, l_737), g_94)), l_712)) & g_598), 5)) <= p_31) >= g_356) > l_751) | l_626)), p_31, g_95, p_30), p_31))))) , 0xBCL), l_761)) || p_30), p_30, l_689, g_650, p_30), 3)) || 4UL)) , p_31) ^ p_30);
                        l_794 = ((safe_lshift_func_int16_t_s_s(g_290, 6)) <= (+((4294967287UL ^ (l_778 = (-1L))) <= ((safe_sub_func_int16_t_s_s((-6L), (l_653 ^ func_32(p_30, (func_32((g_276 = (safe_add_func_int32_t_s_s(func_32(((l_790 = (l_752 = l_752)) , (safe_add_func_uint32_t_u_u(((g_542[3][7][0] == ((l_790 ^ g_207) , p_31)) , 0UL), l_737))), g_793, p_31, p_31, g_455), l_746))), l_689, l_626, l_761, p_31) != p_31), g_219[0], p_30, p_30)))) > p_30))));
                    }
                }
                else
                {
                    char l_815 = (-1L);
                    int l_839 = 7L;
                    for (l_654 = 12; (l_654 <= (-23)); l_654--)
                    {
                        unsigned char l_816 = 0xC3L;
                        g_455 = ((safe_rshift_func_uint16_t_u_u(func_32(func_32((safe_lshift_func_uint8_t_u_s(0UL, 3)), ((safe_unary_minus_func_uint16_t_u((0x5CL || (safe_add_func_int16_t_s_s(0x0A51L, p_30))))) , ((safe_mod_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_s(((safe_add_func_int32_t_s_s((-7L), ((-7L) < (p_31 = ((((safe_add_func_uint32_t_u_u((g_94 || ((safe_lshift_func_int16_t_s_s(((l_814 = p_31) , (((l_814 = ((p_31 , g_598) | p_31)) && p_31) , g_321)), l_815)) && 0x73L)), g_110)) , 0xC0BAL) , g_209) >= p_30))))) <= g_171), g_95)) ^ l_816), l_653)) ^ 7L)), g_276, g_817, p_30), l_618[9][0][1], p_30, g_219[0], l_618[3][0][2]), p_30)) < 4294967290UL);
                        l_818[1] = l_625;
                    }
                    if (((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((func_32(p_31, ((g_598 = (func_32(((safe_lshift_func_uint8_t_u_s((65535UL == g_647[3][4]), func_32((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((g_455 , l_689) & (safe_add_func_uint32_t_u_u(l_646[g_209], ((safe_rshift_func_int8_t_s_s((2UL || ((6UL > g_11) & 6UL)), 3)) | (-6L))))), p_30)), 2)), l_815, l_818[3], g_218, p_31))) && (-5L)), l_689, g_207, l_646[1], p_30) || g_232)) > g_647[3][4]), p_31, p_30, p_31) ^ l_626), 9L)), 1L)) != p_30))
                    {
                        if (g_207)
                            break;
                    }
                    else
                    {
                        char l_833 = (-3L);
                        l_839 = ((((l_833 == (g_817 <= (safe_lshift_func_int16_t_s_u(0xDA28L, 3)))) || (safe_sub_func_uint8_t_u_u((0x1293L != p_31), (safe_unary_minus_func_uint16_t_u(p_30))))) ^ ((g_357 < func_32((l_654 = (p_30 >= ((g_598 = l_815) , p_31))), p_30, l_689, g_232, p_31)) ^ g_793)) || l_818[5]);
                    }
                }
                for (g_276 = (-20); (g_276 != (-30)); --g_276)
                {
                    unsigned l_856[1];
                    int l_860 = 7L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_856[i] = 1UL;
                    for (p_31 = 0; (p_31 != 20); p_31 = safe_add_func_int8_t_s_s(p_31, 4))
                    {
                        unsigned l_850 = 0x7BE36854L;
                        l_654 = (safe_add_func_int32_t_s_s(func_32(g_321, g_232, (g_94 != ((2UL != ((l_814 = func_32(l_646[6], (safe_add_func_int8_t_s_s((-1L), (0x71E3L == g_81[8]))), ((safe_rshift_func_uint8_t_u_u(func_32(l_850, l_781[3][3], g_650, g_207, p_30), g_356)) == g_647[3][3]), l_646[1], l_625)) & l_618[3][0][5])) , l_851)), l_851, l_654), 0L));
                    }
                    for (g_218 = 0; (g_218 != 17); ++g_218)
                    {
                        unsigned l_858 = 0UL;
                        int l_861 = 0L;
                        l_861 = (p_30 < ((safe_mod_func_uint32_t_u_u((0x0BA69F2DL > func_32(l_654, l_856[0], p_30, ((((~l_689) | func_32(func_32((l_860 = (safe_unary_minus_func_int8_t_s((0x9CL || ((func_32(l_858, g_542[1][5][0], l_851, l_859, l_689) != g_598) && l_654))))), g_209, p_30, g_207, g_110), p_30, l_646[g_209], p_31, g_455)) < p_31) || l_856[0]), p_31)), l_856[0])) && p_30));
                        if (p_30)
                            continue;
                        if (g_817)
                            continue;
                        if (p_30)
                            continue;
                    }
                }
            }
            else
            {
                short l_869 = 0x519AL;
                unsigned char l_912 = 0x2FL;
                for (l_653 = 0; (l_653 <= 9); l_653 += 1)
                {
                    int l_913[3][1][2];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_913[i][j][k] = 0xF8C17D52L;
                        }
                    }
                    l_654 = (((g_356 = func_32(g_81[g_209], func_32((p_31 || ((g_862 = g_357) >= (p_30 > ((safe_mod_func_uint8_t_u_u(l_712, (safe_lshift_func_int16_t_s_s(func_32((safe_mod_func_int16_t_s_s(((p_31 & (g_598 = (((l_869 = func_32(p_31, (g_219[0] < g_81[g_209]), g_647[3][4], g_95, p_31)) != l_615) | (-10L)))) || g_94), l_689)), l_689, p_30, l_689, g_647[4][4]), 6)))) | p_31)))), p_30, p_31, l_712, l_737), g_321, l_654, g_218)) , g_356) >= g_455);
                    if (((((((((((g_321 <= ((func_32(((l_626 <= (g_106 == (safe_sub_func_uint8_t_u_u((((l_689 = (-6L)) | (g_81[g_209] & (g_642 = func_32(((safe_lshift_func_int16_t_s_u(((g_862 = ((g_11 ^ ((!(p_30 && (p_31 = 1UL))) , (((g_542[1][5][0] ^ 0xD7L) , 0x6CL) != p_31))) , 0xC537B86CL)) , l_646[g_209]), 8)) < 252UL), g_600, p_30, g_647[3][4], l_646[g_209])))) || 0UL), p_30)))) | l_618[3][0][0]), p_30, l_646[0], g_81[g_209], l_653) && l_646[g_209]) | p_30)) , p_30) <= p_30) & 6UL) || g_650) == p_30) || g_94) > 0x7CL) == (-9L)) > p_30))
                    {
                        unsigned l_896[6] = {4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL,4294967293UL};
                        int i;
                        l_851 = (g_81[3] , (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((((l_851 , (((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(0xE8L, (((safe_sub_func_int16_t_s_s(p_31, (g_209 | (safe_rshift_func_int16_t_s_s(((g_650 = ((((0xC8L ^ (((((g_647[3][4] = (g_356 & (safe_rshift_func_uint16_t_u_u((g_290 < (safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((((p_31 <= l_654) <= g_81[l_653]) && l_896[1]), g_95)), p_31))), l_897)))) < p_30) < p_30) != l_851) & 0x90L)) , 8L) & p_31) != g_542[1][5][0])) < p_30), 1))))) >= 0xF023F052L) < 0x3722D299L))) <= p_30), p_30)), 13)) <= g_94) > 0xAAL)) >= l_869) < 0L), g_171)), 0x56CEL)));
                        l_898[2] = (l_654 = (l_689 = l_737));
                    }
                    else
                    {
                        g_642 = p_30;
                    }
                    for (g_290 = 0; (g_290 <= 16); ++g_290)
                    {
                        if (g_290)
                            break;
                        l_654 = l_654;
                        l_913[1][0][0] = ((~g_11) , ((((l_712 >= (g_862 | (func_32(p_31, g_11, g_862, func_32(((safe_rshift_func_uint8_t_u_s(g_275, 5)) && (g_911 = (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_s(p_31, 12)) && (g_909 = ((l_618[3][0][0] != 0xA527ED7BL) != p_31))) , p_30), l_910[6][3])), 2)))), p_30, g_356, l_869, l_912), p_30) | p_30))) ^ l_689) == l_618[3][0][1]) ^ p_30));
                    }
                    for (g_911 = 4; (g_911 >= 0); g_911 -= 1)
                    {
                        l_913[2][0][1] = (safe_mod_func_uint16_t_u_u(p_31, (((l_869 <= (p_30 >= ((+g_290) & 0x18A43F41L))) , g_232) && g_600)));
                    }
                }
            }
        }
    }
    return p_31;
}







static unsigned char func_32(int p_33, int p_34, unsigned char p_35, const int p_36, unsigned char p_37)
{
    char l_608 = 0xCAL;
    g_600 = g_219[0];
    return l_608;
}







static short func_38(unsigned short p_39)
{
    unsigned short l_605 = 0x2477L;
    int l_607[3];
    int i;
    for (i = 0; i < 3; i++)
        l_607[i] = 0x32B43972L;
    for (g_276 = 3; (g_276 <= 9); g_276 += 1)
    {
        int l_604 = (-3L);
        int i;
        l_604 = func_52(g_81[g_276]);
        l_607[1] = ((((l_605 | (((g_81[g_276] = 65530UL) , (0L > ((safe_unary_minus_func_uint8_t_u(255UL)) > ((g_542[1][5][0] > p_39) > g_598)))) && (((func_52(g_542[1][5][0]) < g_232) < l_605) & g_290))) && g_95) == g_276) > p_39);
        if (p_39)
            break;
    }
    return g_95;
}







static const unsigned short func_40(const unsigned char p_41)
{
    int l_51 = 0x64E48C0CL;
    int l_64 = (-3L);
    int l_554 = 0x36FAE6D1L;
    unsigned char l_565 = 255UL;
    unsigned l_566 = 6UL;
    int l_599 = 6L;
    l_554 = func_42(p_41, (((safe_lshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s(l_51, func_52((safe_sub_func_uint8_t_u_u(((g_11 != 0x47D05199L) | (safe_lshift_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((p_41 , (safe_lshift_func_int8_t_s_u((-6L), ((l_64 = ((safe_sub_func_int16_t_s_s(l_51, g_11)) , (((((g_11 & 0xC0ACL) ^ 4294967290UL) | p_41) <= 0x6747B1D0L) , 0UL))) < l_51)))), l_51)), p_41))), 0x58L))))) | g_11), 7)) == 0xF4L) == (-3L)), p_41, p_41);
    for (g_356 = 1; (g_356 <= 9); g_356 += 1)
    {
        int l_567 = 0xED9F8CC0L;
        int i;
        l_567 = (((g_95 = (-8L)) , (l_566 = (0xA5L <= (((safe_lshift_func_uint8_t_u_s(g_81[g_356], (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((0x0147L ^ (p_41 <= (safe_sub_func_int16_t_s_s((l_565 , (0xD2EBL == g_81[g_356])), ((g_81[g_356] > 4L) && g_81[g_356]))))) >= g_110), p_41)), l_554)))) ^ l_64) , 1L)))) , p_41);
        l_64 = (g_455 = g_357);
        l_567 = ((safe_sub_func_uint32_t_u_u(g_171, ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((g_81[g_356] = 65535UL), (((safe_rshift_func_int16_t_s_u((((safe_rshift_func_uint8_t_u_s(((p_41 , (p_41 != (safe_lshift_func_uint16_t_u_u(p_41, ((p_41 & ((g_110 = (safe_sub_func_int32_t_s_s(((safe_lshift_func_int8_t_s_u(g_290, 3)) < p_41), ((safe_sub_func_uint16_t_u_u(l_566, p_41)) != g_321)))) ^ p_41)) & l_567))))) == p_41), l_567)) ^ l_554) == 0x63L), 11)) || 0L) > 0x6AL))), p_41)) || 0x77F6L))) & 1L);
    }
    g_455 = (g_209 = ((p_41 | ((l_51 > l_51) && (((((g_106 || ((0xACE0L != 65534UL) != (g_600 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((l_599 = ((l_554 = (safe_mod_func_uint16_t_u_u(((g_598 = ((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(l_566, (g_276 = (l_64 = func_52((g_81[3] | g_81[3])))))) , l_554), p_41)) , l_565) && 0x1913D0C9L), p_41)) ^ p_41)) <= l_565), g_275))) < 0x22F1A4E1L)) , g_275), 3)), p_41))))) | 0L) >= p_41) == g_11) && 0x58B9A117L))) <= g_542[1][5][0]));
    return g_455;
}







static const int func_42(unsigned p_43, char p_44, const short p_45, unsigned short p_46)
{
    unsigned char l_111 = 0UL;
    int l_123 = 2L;
    int l_214 = 0x8BC2CC7AL;
    short l_231 = 1L;
    int l_257 = 0x56CFA103L;
    unsigned char l_261 = 0x2EL;
    unsigned l_465 = 0xFAC342DEL;
    if ((l_111 = ((p_46 != g_81[3]) && 0x8E54L)))
    {
        short l_127 = (-10L);
        int l_208[8][6] = {{4L,0xB5030AC0L,0xC1B0773BL,0xB5030AC0L,4L,0x815B4C5AL},{0xE2CB60F7L,0xB5030AC0L,0x95207075L,0xB5030AC0L,0xE2CB60F7L,0x815B4C5AL},{4L,0xB5030AC0L,0xC1B0773BL,0xB5030AC0L,4L,0x815B4C5AL},{0xE2CB60F7L,0xB5030AC0L,0x95207075L,0xB5030AC0L,0xE2CB60F7L,0x815B4C5AL},{4L,0xB5030AC0L,0xC1B0773BL,0xB5030AC0L,4L,0x815B4C5AL},{0xE2CB60F7L,0xB5030AC0L,0x95207075L,0xB5030AC0L,0xE2CB60F7L,0x815B4C5AL},{4L,0xB5030AC0L,0xC1B0773BL,0xB5030AC0L,4L,0x815B4C5AL},{0xE2CB60F7L,0xB5030AC0L,0x95207075L,0xB5030AC0L,0xE2CB60F7L,0x815B4C5AL}};
        int l_260 = 0xFDFD5089L;
        unsigned char l_268 = 0x65L;
        int l_307[10][8][3] = {{{0x8E65868CL,0x8E65868CL,0x4F555A75L},{0x6ED36738L,0xDA58FE99L,0x4F555A75L},{0xDA58FE99L,0x6ED36738L,0x4F555A75L},{0x8E65868CL,0x8E65868CL,0x4F555A75L},{0x6ED36738L,0xDA58FE99L,0x4F555A75L},{0xDA58FE99L,0x6ED36738L,0x4F555A75L},{0x8E65868CL,0x8E65868CL,0x4F555A75L},{0x6ED36738L,0xDA58FE99L,0xDA58FE99L}},{{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),(-4L),0xDA58FE99L},{1L,0xB52ADD3FL,0xDA58FE99L},{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),(-4L),0xDA58FE99L},{1L,0xB52ADD3FL,0xDA58FE99L},{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),(-4L),0xDA58FE99L}},{{1L,0xB52ADD3FL,0xDA58FE99L},{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),(-4L),0xDA58FE99L},{1L,0xB52ADD3FL,0xDA58FE99L},{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),(-4L),0xDA58FE99L},{1L,0xB52ADD3FL,0xDA58FE99L},{0xB52ADD3FL,1L,0xDA58FE99L}},{{(-4L),(-4L),0xDA58FE99L},{1L,0xB52ADD3FL,0xDA58FE99L},{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),(-4L),0xDA58FE99L},{1L,0xB52ADD3FL,0xDA58FE99L},{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),(-4L),0xDA58FE99L},{1L,0xB52ADD3FL,0xDA58FE99L}},{{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),(-4L),0xDA58FE99L},{1L,0xB52ADD3FL,0xDA58FE99L},{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),(-4L),0xDA58FE99L},{1L,0xB52ADD3FL,0xDA58FE99L},{0xB52ADD3FL,1L,0xDA58FE99L},{(-4L),1L,0x8E65868CL}},{{0xB52ADD3FL,(-4L),0x8E65868CL},{(-4L),0xB52ADD3FL,0x8E65868CL},{1L,1L,0x8E65868CL},{0xB52ADD3FL,(-4L),0x8E65868CL},{(-4L),0xB52ADD3FL,0x8E65868CL},{1L,1L,0x8E65868CL},{0xB52ADD3FL,(-4L),0x8E65868CL},{(-4L),0xB52ADD3FL,0x8E65868CL}},{{1L,1L,0x8E65868CL},{0xB52ADD3FL,(-4L),0x8E65868CL},{(-4L),0xB52ADD3FL,0x8E65868CL},{1L,1L,0x8E65868CL},{0xB52ADD3FL,(-4L),0x8E65868CL},{(-4L),0xB52ADD3FL,0x8E65868CL},{1L,1L,0x8E65868CL},{0xB52ADD3FL,(-4L),0x8E65868CL}},{{(-4L),0xB52ADD3FL,0x8E65868CL},{1L,1L,0x8E65868CL},{0xB52ADD3FL,(-4L),0x8E65868CL},{(-4L),0xB52ADD3FL,0x8E65868CL},{1L,1L,0x8E65868CL},{0xB52ADD3FL,(-4L),0x8E65868CL},{(-4L),0xB52ADD3FL,0x8E65868CL},{1L,1L,0x8E65868CL}},{{0xB52ADD3FL,(-4L),0x8E65868CL},{(-4L),0xB52ADD3FL,0x8E65868CL},{1L,1L,0x8E65868CL},{0xB52ADD3FL,(-4L),0x8E65868CL},{(-4L),0xB52ADD3FL,0x8E65868CL},{1L,1L,0x8E65868CL},{0xB52ADD3FL,(-4L),0x8E65868CL},{0x5B76E90CL,(-1L),(-4L)}},{{0x4F555A75L,0x4F555A75L,(-4L)},{(-1L),0x5B76E90CL,(-4L)},{0x5B76E90CL,(-1L),(-4L)},{0x4F555A75L,0x4F555A75L,(-4L)},{(-1L),0x5B76E90CL,(-4L)},{0x5B76E90CL,(-1L),(-4L)},{0x4F555A75L,0x4F555A75L,(-4L)},{(-1L),0x5B76E90CL,(-4L)}}};
        unsigned l_484 = 4294967292UL;
        int i, j, k;
        if (l_111)
        {
            unsigned l_126 = 8UL;
            int l_128 = 0x116371A0L;
            int l_137 = 7L;
            int l_186[7][7][2] = {{{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L}},{{6L,0L},{(-1L),0L},{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L},{6L,0L}},{{(-1L),0L},{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L},{6L,0L},{(-1L),0L}},{{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L}},{{6L,0L},{(-1L),0L},{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L},{6L,0L}},{{(-1L),0L},{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L},{6L,0L},{(-1L),0L}},{{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L},{6L,0L},{(-1L),0L},{(-1L),0L}}};
            char l_215 = 0x0DL;
            int i, j, k;
            for (g_95 = 0; (g_95 >= (-7)); g_95--)
            {
                char l_129 = 0L;
                l_129 = ((safe_sub_func_uint8_t_u_u(((safe_unary_minus_func_int8_t_s((safe_add_func_int8_t_s_s(g_81[3], g_11)))) , (g_110 ^ (safe_mod_func_uint8_t_u_u(g_11, (-1L))))), (safe_lshift_func_int16_t_s_u((l_123 = g_94), 8)))) > (safe_sub_func_int8_t_s_s(g_81[7], ((l_128 = ((l_126 != g_106) && l_127)) != g_106))));
                if (p_46)
                    break;
                l_128 = l_129;
            }
            for (l_123 = 0; (l_123 != 16); l_123 = safe_add_func_int8_t_s_s(l_123, 3))
            {
                short l_134 = (-6L);
                int l_164[10] = {0x1A2CE7F3L,(-3L),0x1A2CE7F3L,(-3L),0x1A2CE7F3L,(-3L),0x1A2CE7F3L,(-3L),0x1A2CE7F3L,(-3L)};
                int i;
                if ((safe_sub_func_uint8_t_u_u(((func_52(g_110) > ((l_134 < ((safe_sub_func_uint32_t_u_u(4294967292UL, ((l_137 <= l_134) ^ (safe_lshift_func_int8_t_s_u(l_123, 6))))) >= (p_43 && p_45))) <= 0x839FL)) & l_111), g_11)))
                {
                    return g_81[2];
                }
                else
                {
                    unsigned char l_144 = 0xEFL;
                    int l_206 = 0xAC0F502BL;
                    if (((p_43 & (p_44 = g_81[3])) || (p_46 == ((g_95 > (safe_sub_func_uint32_t_u_u((safe_mod_func_int16_t_s_s((l_144 == g_110), (p_44 , (((!p_44) || ((-8L) <= 1UL)) , g_94)))), p_45))) >= l_144))))
                    {
                        unsigned char l_163 = 0xB2L;
                        g_94 = (l_126 == ((safe_add_func_int8_t_s_s(((g_81[3] = (l_128 = g_94)) <= (p_46 = ((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((4294967295UL < (p_43 >= (p_46 != 0x02L))), 2)) && (p_44 > l_144)), 4)) <= (g_94 , g_110)))), 0xC9L)) >= 4L));
                        l_164[9] = ((safe_sub_func_uint32_t_u_u((func_52(l_123) > (((g_11 , ((safe_add_func_uint32_t_u_u(((safe_mod_func_int32_t_s_s(((p_43 > (0xB79EB048L >= ((safe_add_func_uint32_t_u_u(p_46, 4294967293UL)) < (safe_mod_func_int32_t_s_s(l_134, (p_44 , g_11)))))) & l_127), l_163)) < l_134), 4294967290UL)) == 0x2D6AL)) & p_45) < p_44)), 0x59F51D59L)) & p_44);
                    }
                    else
                    {
                        char l_185 = (-1L);
                        int l_187 = 0x5A5BBF8FL;
                        l_187 = (p_43 != (safe_lshift_func_int16_t_s_s(func_52(((safe_rshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((g_171 = p_45), (safe_lshift_func_int8_t_s_s(((l_128 = (l_127 || ((safe_lshift_func_uint8_t_u_u(l_111, 0)) == 0x4EB220E4L))) ^ (safe_lshift_func_int8_t_s_s((g_95 < (0xD7L && (safe_lshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((l_186[3][2][0] = (((safe_lshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(0x44B6F7AEL, (l_185 >= l_127))), g_81[5])) , l_144) | l_185)) > (-1L)))), g_110)))), 1))), g_81[3])))), l_144)) > l_185)), p_44)));
                        g_209 = (safe_mod_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((((safe_sub_func_uint8_t_u_u(7UL, p_43)) != (p_46 = ((g_11 <= g_95) > g_106))) & ((l_208[0][0] = (safe_mod_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_rshift_func_int8_t_s_u(((safe_mod_func_int16_t_s_s(((((safe_mod_func_int8_t_s_s((((((((l_206 || (g_94 = 0x9B231F37L)) , (0x65F83DE7L <= l_187)) , 6L) == g_81[3]) & l_123) >= 0L) || g_94), g_207)) <= 0x1DL) , 0xE7L) | 6UL), p_44)) >= 0xD706A571L), p_43)), p_44)), (-7L)))) & 255UL)) >= g_110), g_207)), (-1L))) == (-1L)), 0x7D26L));
                        l_208[0][0] = (safe_add_func_uint8_t_u_u(l_111, p_45));
                    }
                }
            }
            l_128 = ((((((l_208[3][3] != 4294967291UL) || func_52(p_45)) || g_11) , ((((l_186[3][2][0] >= (p_46 = (g_81[3] = (g_110 <= l_127)))) <= (((p_43 , 0UL) , l_128) != 1L)) < p_43) || g_106)) < p_45) != g_171);
            for (g_94 = 0; (g_94 < 17); ++g_94)
            {
                l_214 = (l_123 = (-2L));
                l_215 = l_214;
            }
        }
        else
        {
            int l_234 = 3L;
            int l_376 = 0xF3AD8DB4L;
            unsigned l_416 = 4294967292UL;
            int l_433 = 5L;
            l_214 = (((((g_106 , (safe_add_func_int16_t_s_s(p_44, (g_218 = g_171)))) <= 65534UL) <= g_219[0]) <= 0x17DBC78BL) ^ 0x38543485L);
            for (g_171 = 8; (g_171 <= 53); ++g_171)
            {
                short l_233 = (-1L);
                int l_238 = 1L;
                unsigned char l_311 = 0xF4L;
                short l_340 = 0x97D6L;
                if ((l_234 = (g_106 ^ (((!((p_44 ^ (l_214 = p_43)) , (l_208[0][0] = ((safe_lshift_func_uint16_t_u_s((g_81[7] | ((((p_43 <= ((0x4262232EL != ((((safe_add_func_int16_t_s_s(l_111, (((g_81[3] || ((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((((p_45 , 0x990AL) & 0UL) ^ g_94))), l_231)), p_45)) && 0x0EFDL) | g_95) != l_127)) | 0L) ^ 0xD15AL))) ^ g_232) || 0xE576L) > l_111)) | l_208[5][3])) >= p_44) <= 6L) , 0x1ED5E969L)), p_46)) , l_233)))) == g_94) >= g_219[0]))))
                {
                    for (l_123 = 0; (l_123 != 0); ++l_123)
                    {
                        unsigned l_237 = 0x030FC9DBL;
                        l_234 = g_218;
                        l_237 = 0x90AFDDB5L;
                    }
                    if (l_233)
                    {
                        l_238 = g_94;
                    }
                    else
                    {
                        if (g_95)
                            break;
                    }
                }
                else
                {
                    int l_241 = 0L;
                    int l_267[6][1] = {{(-4L)},{(-4L)},{(-10L)},{(-4L)},{(-4L)},{(-10L)}};
                    int i, j;
                    g_94 = (safe_rshift_func_uint16_t_u_s(l_111, (l_241 > ((l_214 ^ ((4L && ((safe_sub_func_uint16_t_u_u(1UL, g_95)) ^ (g_209 = (l_208[2][2] , l_214)))) , (((l_238 = 1L) , p_44) > l_208[0][0]))) > l_123))));
                    for (l_233 = 24; (l_233 <= 17); l_233--)
                    {
                        unsigned short l_250 = 0x5BF4L;
                        char l_262[2][5] = {{0x3CL,0x3CL,0xA5L,0x3CL,0x3CL},{0x59L,0x3CL,0x59L,0x59L,0x3CL}};
                        int i, j;
                        g_209 = func_52(((safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((~(((-1L) & 0x07CED499L) && func_52(l_250))), (safe_mod_func_uint32_t_u_u((g_232 <= l_127), g_207)))), g_11)) ^ 0xBD2DL));
                        l_262[1][1] = (func_52(g_95) ^ ((+(safe_mod_func_int8_t_s_s(l_208[0][0], 247UL))) & (l_250 ^ ((l_260 = (safe_sub_func_int8_t_s_s(0x4CL, (((g_219[4] | (l_257 , (safe_mod_func_uint16_t_u_u(p_43, p_46)))) == 249UL) , g_232)))) >= l_261))));
                        g_209 = (safe_sub_func_int32_t_s_s(p_43, g_81[3]));
                    }
                    if (((p_44 || g_94) , p_44))
                    {
                        l_267[3][0] = (safe_add_func_int32_t_s_s(l_238, g_95));
                    }
                    else
                    {
                        short l_281 = 0L;
                        l_238 = l_234;
                        l_208[6][3] = (g_81[3] || 0x25L);
                        l_257 = l_268;
                        l_267[3][0] = (l_111 >= ((g_219[0] & ((safe_lshift_func_uint8_t_u_s(g_106, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((g_275 = 0x47L), (g_209 & (((g_276 = g_106) <= ((safe_add_func_uint8_t_u_u(p_46, g_219[2])) == ((safe_mod_func_int8_t_s_s(((l_214 ^ l_281) != p_44), g_106)) == l_261))) , g_219[0])))), 0x4413F615L)))) , l_268)) || l_241));
                    }
                }
                if ((0xFA596293L | func_52((safe_mod_func_int16_t_s_s((((65531UL != (safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(l_238, ((safe_mod_func_int16_t_s_s((((g_290 = l_234) , g_219[2]) != (safe_mod_func_int16_t_s_s((safe_sub_func_int32_t_s_s(func_52((func_52((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(func_52((safe_sub_func_int16_t_s_s(((func_52(g_207) , func_52(((safe_rshift_func_uint8_t_u_u((p_43 < (g_81[3] , 0x904DL)), 7)) <= p_43))) || l_231), l_208[0][0]))), g_209)), g_207))) , (-5L))), g_11)), l_234))), l_234)) == l_238))), 0x05L))) == 0L) == l_260), p_45)))))
                {
                    for (l_234 = 10; (l_234 >= 26); l_234 = safe_add_func_int8_t_s_s(l_234, 6))
                    {
                        return g_232;
                    }
                    l_307[2][1][2] = ((safe_lshift_func_int8_t_s_u(g_219[0], 5)) , g_106);
                }
                else
                {
                    const short l_308 = 4L;
                    if (l_238)
                    {
                        return l_308;
                    }
                    else
                    {
                        unsigned char l_312 = 0UL;
                        l_312 = (safe_add_func_int32_t_s_s(l_311, ((+65535UL) != (g_275 >= p_44))));
                    }
                }
                if (func_52((l_238 = (safe_sub_func_int8_t_s_s(((-3L) < (l_208[0][0] = g_290)), p_44)))))
                {
                    int l_323 = 0xA4408C10L;
                    short l_330[9][4] = {{0x4609L,(-1L),0x4609L,(-1L)},{0x4609L,(-1L),0x4609L,(-1L)},{0x4609L,(-1L),0x4609L,(-1L)},{0x4609L,(-1L),0x4609L,(-1L)},{0x4609L,(-1L),0x4609L,(-1L)},{0x4609L,(-1L),0x4609L,(-1L)},{0x4609L,(-1L),0x4609L,(-1L)},{0x4609L,(-1L),0x4609L,(-1L)},{0x4609L,(-1L),0x4609L,(-1L)}};
                    int l_331[2];
                    unsigned l_346 = 0xEA817F4DL;
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_331[i] = 0xE55B3C0CL;
                    l_234 = (safe_rshift_func_uint8_t_u_u(g_275, 1));
                    for (g_209 = 9; (g_209 >= 0); g_209 -= 1)
                    {
                        int l_322 = 9L;
                        int i;
                        l_214 = (g_276 = (l_323 = ((l_322 = ((((l_208[3][1] = func_52(g_81[g_209])) == ((p_44 , (g_219[0] , g_232)) >= g_219[0])) || (p_44 , (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((g_232 ^ ((p_45 > g_321) , g_275)), 13)), g_209)))) != 65535UL)) > l_238)));
                        l_257 = (l_307[3][4][2] = (p_43 >= g_11));
                        l_214 = (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_45, 7)), 5));
                    }
                    l_331[1] = (l_208[5][4] ^ func_52((safe_add_func_int8_t_s_s(((p_43 = ((l_331[1] = (p_44 = l_330[6][2])) & ((safe_add_func_int16_t_s_s(((func_52(g_11) < (safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((+(l_340 & ((l_307[2][1][2] > ((safe_unary_minus_func_uint8_t_u(l_234)) >= (safe_rshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(p_43, 4)) || (l_346 > 0xE1L)), g_321)))) != 0x82L))) , p_45), l_208[0][0])) != 0xDD21L), g_321)) == p_43), l_330[5][3]))) >= l_261), g_219[0])) , 0xB0L))) , l_346), p_45))));
                }
                else
                {
                    int l_355 = 0x672E093AL;
                    l_214 = (safe_sub_func_uint8_t_u_u(p_44, (safe_sub_func_int16_t_s_s((((((g_356 = (safe_mod_func_uint32_t_u_u((func_52(p_45) && ((~(((l_127 >= p_43) != ((l_234 = func_52((p_45 , (safe_add_func_int32_t_s_s(p_45, g_171))))) != l_307[4][0][1])) == g_171)) > l_355)), 0xE1FE8385L))) ^ 0xF388L) ^ l_231) < p_44) && g_276), p_45))));
                    l_307[2][1][2] = 0x0F185DDBL;
                }
                for (l_268 = 0; (l_268 <= 5); l_268 += 1)
                {
                    int i;
                    if (g_219[l_268])
                        break;
                    if (g_357)
                        break;
                }
            }
            for (g_290 = 0; (g_290 <= 5); g_290 += 1)
            {
                unsigned l_366[2];
                int l_419 = (-4L);
                unsigned l_431 = 1UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_366[i] = 18446744073709551615UL;
                for (l_268 = 0; (l_268 <= 9); l_268 += 1)
                {
                    for (g_110 = 0; (g_110 <= 9); g_110 += 1)
                    {
                        int i, j;
                        l_208[(g_290 + 2)][g_290] = g_81[(g_290 + 3)];
                    }
                    for (g_232 = 2; (g_232 <= 9); g_232 += 1)
                    {
                        int i;
                        l_366[1] = (g_81[g_232] , (safe_mod_func_uint16_t_u_u(g_275, (safe_rshift_func_uint8_t_u_s(((safe_lshift_func_uint8_t_u_u((((func_52(p_46) >= (g_219[0] , g_290)) & ((safe_mod_func_uint16_t_u_u(g_290, 65532UL)) == (0x92L | p_43))) & (-1L)), 5)) , 6UL), 1)))));
                        return g_11;
                    }
                    for (p_44 = 9; (p_44 >= 2); p_44 -= 1)
                    {
                        unsigned l_367 = 4294967288UL;
                        int l_368 = (-9L);
                        int i;
                        l_234 = (func_52((l_234 > (l_368 = l_367))) ^ ((((safe_sub_func_int16_t_s_s((1UL | (((p_46 = (p_45 || 0xFF17299EL)) == 0xCAB4L) >= ((safe_sub_func_uint16_t_u_u(0UL, g_219[3])) != 0x5798L))), p_44)) ^ 0x78L) ^ 0x7EL) , 0x8D1B6FB1L));
                        if (l_123)
                            continue;
                        l_214 = 0L;
                    }
                }
                for (l_261 = 0; (l_261 <= 9); l_261 += 1)
                {
                    int l_402[10] = {3L,0L,3L,0L,3L,0L,3L,0L,3L,0L};
                    unsigned l_432 = 8UL;
                    int i;
                    if ((safe_add_func_uint8_t_u_u((!g_81[l_261]), p_43)))
                    {
                        int l_375 = 0xD153DDF3L;
                        int i, j;
                        if (g_356)
                            break;
                        l_208[(g_290 + 2)][g_290] = l_375;
                        g_94 = ((l_376 = l_366[1]) != ((safe_lshift_func_uint16_t_u_u(0xA5D0L, l_127)) <= 0x42L));
                    }
                    else
                    {
                        unsigned l_387 = 0x7904C0D5L;
                        int l_400[9];
                        int l_401 = (-1L);
                        int i;
                        for (i = 0; i < 9; i++)
                            l_400[i] = 0L;
                        l_387 = (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((~((g_219[3] || (((((safe_lshift_func_int8_t_s_s(p_43, (((0xCF3DL & ((((((g_94 && 0xE3L) <= p_45) != p_46) | p_43) >= (safe_add_func_int8_t_s_s((l_376 , 0x08L), g_290))) , 1UL)) >= 0xF27FL) | 0x8D72D4DDL))) , p_44) > p_45) | g_106) <= g_81[3])) || 0x887CB2C0L)), 1UL)), l_208[2][3]));
                        g_276 = (safe_rshift_func_uint16_t_u_s(((((((((safe_add_func_int16_t_s_s((p_43 , (((l_401 = ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s(((l_400[5] = (p_46 <= ((l_234 = g_81[l_261]) >= p_45))) && (0x5F23333DL != (((func_52((l_234 , l_111)) >= p_43) , 0x2AL) && g_276))), p_45)), l_366[1])), 1)), g_290)) >= 249UL)) , l_366[1]) & 0L)), p_43)) , p_43) == l_214) , (-1L)) , l_231) && p_44) <= 4294967295UL) > l_402[2]), p_45));
                        l_400[5] = ((safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(l_214, 1)), (safe_add_func_int32_t_s_s(((p_45 && g_81[3]) ^ g_95), (p_45 == ((((safe_sub_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u(g_219[0], ((g_218 <= ((((65535UL ^ ((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint8_t_u((((((g_81[3] && 65535UL) || p_44) == g_219[0]) || l_416) , 0UL))) || p_44), g_290)) <= g_81[l_261])) | g_232) && 0xDF4BL) == g_218)) ^ l_234))) , 0xCFA25ABAL), 0x344784ECL)) > g_356) ^ p_44) > g_11)))))) , l_401);
                    }
                    l_234 = g_110;
                    l_419 = (safe_sub_func_int8_t_s_s((0x08L & g_219[0]), p_44));
                    for (l_416 = 0; (l_416 <= 9); l_416 += 1)
                    {
                        int l_420 = 4L;
                        int i;
                        l_420 = l_111;
                        l_433 = ((g_218 != (safe_rshift_func_uint16_t_u_u(((0x996BL < ((((l_234 = (p_43 = l_420)) , ((((l_432 = ((func_52(((safe_lshift_func_int8_t_s_s(((safe_add_func_int32_t_s_s((safe_add_func_uint8_t_u_u(func_52((((g_81[l_261] = ((func_52(p_46) != p_45) == p_46)) != (((safe_add_func_uint16_t_u_u(l_402[4], l_402[7])) || g_207) >= g_290)) ^ p_44)), 1UL)), g_357)) || g_357), p_45)) == l_431)) , p_45) | p_45)) < 246UL) | l_419) || p_46)) || g_218) , p_45)) != (-3L)), l_402[2]))) >= 1UL);
                        g_209 = (g_275 , (safe_lshift_func_uint8_t_u_s((l_402[5] = func_52(p_46)), l_366[1])));
                        l_208[0][0] = p_46;
                    }
                }
            }
        }
        for (g_171 = 0; (g_171 <= 5); g_171 += 1)
        {
            int l_475[4];
            int l_479 = (-1L);
            int i;
            for (i = 0; i < 4; i++)
                l_475[i] = 0xDF14B8F8L;
            if (g_218)
                break;
            for (l_111 = 0; (l_111 <= 5); l_111 += 1)
            {
                unsigned short l_436 = 0xA10CL;
                const int l_437 = 0x8F61A761L;
                int l_452[8] = {1L,(-9L),1L,(-9L),1L,(-9L),1L,(-9L)};
                int i;
                if ((((l_436 = p_46) | l_437) , l_208[2][5]))
                {
                    short l_438[4];
                    int l_451 = 0L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_438[i] = 0xB18AL;
                    if (((1L > ((l_438[1] ^ (g_11 ^ (safe_rshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(func_52(((p_46 <= 0xDCAB2CDCL) > (safe_add_func_int16_t_s_s((func_52((((l_307[6][4][0] = (((l_127 > 4UL) , (((safe_sub_func_int16_t_s_s(p_45, (((safe_add_func_int16_t_s_s((l_451 = (safe_mod_func_uint16_t_u_u(l_438[2], g_321))), g_232)) > 0xDBCB59ABL) | g_81[3]))) | p_46) , 0x01486592L)) > l_438[1])) , l_436) == 0UL)) | 0x0561L), 65535UL)))), 4294967291UL)) < (-7L)), g_290)))) >= l_261)) || 0x6DL))
                    {
                        int i;
                        l_452[6] = func_52((g_219[l_111] = 0x1824B5A7L));
                        g_94 = (l_208[0][0] = l_438[2]);
                    }
                    else
                    {
                        g_94 = (-1L);
                    }
                    for (p_43 = 0; (p_43 >= 18); p_43 = safe_add_func_int8_t_s_s(p_43, 5))
                    {
                        l_452[2] = func_52(l_214);
                        if (g_81[7])
                            continue;
                        if (g_321)
                            continue;
                    }
                    g_276 = (g_94 = (((p_43 | p_44) , (g_455 = g_11)) || (safe_lshift_func_uint8_t_u_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((~((g_94 < (((((l_208[7][4] = p_43) , 253UL) | (((g_11 | l_123) , p_44) != 0x7F4EFB91L)) , g_11) , p_44)) && g_81[2])), p_46)), p_43)), g_95))));
                }
                else
                {
                    char l_464 = 9L;
                    int l_474 = 0xE638D3E4L;
                    for (l_214 = 0; (l_214 != 28); l_214 = safe_add_func_int32_t_s_s(l_214, 6))
                    {
                        l_208[0][0] = (l_464 , (l_475[1] = (p_44 != (l_474 = (((l_214 > g_106) < l_465) >= (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(g_356, 4)) , (l_464 , (((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((0UL || l_257) , 1UL), g_455)), 5)) > g_275) <= p_45))), g_276)))))));
                        g_455 = p_46;
                        g_455 = g_290;
                        g_94 = (safe_unary_minus_func_int8_t_s((4294967290UL == (g_11 < g_106))));
                    }
                }
                for (g_275 = 0; (g_275 != 2); g_275 = safe_add_func_uint16_t_u_u(g_275, 1))
                {
                    if (g_276)
                    {
                        return l_436;
                    }
                    else
                    {
                        g_455 = p_43;
                        return p_43;
                    }
                }
                l_479 = (l_257 = l_475[2]);
                for (l_261 = 0; (l_261 <= 2); l_261 += 1)
                {
                    unsigned short l_483 = 0x8FB8L;
                    for (p_43 = 0; (p_43 <= 2); p_43 += 1)
                    {
                        int i;
                        return l_452[(l_261 + 3)];
                    }
                    for (l_257 = 2; (l_257 >= 0); l_257 -= 1)
                    {
                        int i, j, k;
                        l_307[(l_261 + 3)][(l_257 + 3)][l_257] = l_452[(g_171 + 2)];
                        g_209 = (((g_106 >= 1UL) < (safe_unary_minus_func_uint32_t_u((0x80L || l_214)))) & ((safe_mod_func_int8_t_s_s(g_11, ((g_110 = ((((l_452[5] = g_171) > l_483) , p_45) & (l_475[0] , l_484))) & p_44))) == l_307[(l_261 + 3)][(l_257 + 3)][l_257]));
                    }
                }
            }
        }
    }
    else
    {
        short l_511 = 1L;
        int l_517 = 0L;
        unsigned l_527[1][4][1] = {{{0xCDAC9B48L},{0x664BDADBL},{0xCDAC9B48L},{0x664BDADBL}}};
        int i, j, k;
        l_214 = l_261;
        l_123 = (l_214 = g_219[0]);
        for (l_214 = 0; (l_214 < 9); ++l_214)
        {
            char l_498 = 9L;
            int l_518[1][6] = {{0x66165A78L,(-1L),0x66165A78L,0x66165A78L,(-1L),0x66165A78L}};
            unsigned l_548 = 0xECC132E5L;
            int i, j;
            for (g_110 = 0; (g_110 <= 5); g_110 += 1)
            {
                short l_487 = 0xAD94L;
                unsigned l_489 = 0UL;
                int l_492 = 0x9B596491L;
                const unsigned l_493 = 0x212E9CECL;
                int l_514 = (-6L);
                for (l_123 = 5; (l_123 >= 1); l_123 -= 1)
                {
                    int l_488 = (-5L);
                    for (p_44 = 0; (p_44 <= 5); p_44 += 1)
                    {
                        int i;
                        l_487 = 0x2C6DF329L;
                        l_492 = ((l_488 = g_219[l_123]) , (g_209 = ((p_43 == (l_489 ^ ((g_219[0] != (safe_sub_func_uint8_t_u_u(g_81[3], p_44))) , (g_171 == g_219[l_123])))) , (+(+0x17993C8AL)))));
                    }
                }
                if (l_493)
                    break;
                if ((((safe_mod_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s(l_498, ((safe_sub_func_int8_t_s_s(p_46, p_45)) & (safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(((p_45 >= ((p_45 , (((safe_sub_func_uint8_t_u_u(p_44, (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(g_275, 5)), l_511)))) != ((((safe_sub_func_uint32_t_u_u((l_123 & g_95), 4294967295UL)) <= p_43) < 65535UL) | 0x5AL)) <= l_498)) != g_81[3])) ^ l_214), l_487)), (-1L)))))) < l_511) <= l_514), 254UL)) < 0x56BBL) , 7L))
                {
                    for (p_46 = 0; (p_46 <= 5); p_46 += 1)
                    {
                        g_276 = p_44;
                    }
                }
                else
                {
                    int l_544 = 0x64323D63L;
                    int l_545 = 2L;
                    int l_549 = 3L;
                    g_455 = (!(safe_add_func_uint8_t_u_u(252UL, ((p_46 = g_219[5]) <= ((l_517 = g_276) >= (l_518[0][4] = p_43))))));
                    if (((g_275 & ((safe_mod_func_int16_t_s_s(((l_517 = p_46) || (safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(p_44, 11)), 5))), p_46)) , (safe_rshift_func_uint16_t_u_s(p_44, 4)))) == ((g_81[3] < l_527[0][3][0]) , 0x6418L)))
                    {
                        char l_543 = 0L;
                        l_544 = ((((p_44 <= (safe_rshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s((l_492 = p_46), g_11)) , (safe_mod_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((((~p_45) & (g_219[0] <= g_356)) > (safe_mod_func_int8_t_s_s((p_44 >= ((((safe_sub_func_uint8_t_u_u(l_518[0][5], (safe_lshift_func_uint8_t_u_s(((((l_517 = g_276) > p_46) >= l_514) & g_542[1][5][0]), 2)))) > g_207) == l_527[0][1][0]) || p_46)), g_290))), l_498)) , p_45), l_518[0][4]))), g_81[3]))) || g_542[1][5][0]) && l_543) || p_46);
                        if (l_544)
                            continue;
                        l_517 = g_276;
                        l_545 = (+0x3E08397DL);
                    }
                    else
                    {
                        char l_550[3][3][4];
                        int l_551 = 0L;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 4; k++)
                                    l_550[i][j][k] = 0x33L;
                            }
                        }
                        l_492 = p_44;
                        l_518[0][1] = ((l_518[0][4] , (((g_276 = 8L) == (l_514 = ((safe_mod_func_int8_t_s_s((((-1L) > (0xBFL || (((p_45 > (l_548 > (p_46 != l_549))) & (-10L)) <= p_43))) > g_321), l_544)) != g_321))) && 0UL)) <= 0x73B8L);
                        l_550[1][1][2] = (l_545 != l_518[0][2]);
                        l_551 = g_94;
                    }
                    if (p_45)
                        continue;
                    if (g_171)
                        continue;
                }
                g_276 = (-1L);
            }
            if (l_111)
                continue;
            g_455 = (safe_rshift_func_uint16_t_u_u(p_45, g_209));
            g_209 = p_46;
        }
    }
    return g_106;
}







static int func_52(int p_53)
{
    int l_73 = 1L;
    short l_76[9] = {0xEC85L,0L,0xEC85L,0L,0xEC85L,0L,0xEC85L,0L,0xEC85L};
    int l_82 = 0x9D8D7774L;
    int l_83 = 0L;
    int l_84 = 0xC685B35AL;
    int l_85 = (-1L);
    int l_96 = 0x8ADFEA02L;
    int l_97[7] = {(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)};
    int i;
    l_85 = (l_84 = ((-6L) != (safe_add_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_u(g_11, (+(((safe_rshift_func_uint16_t_u_s(p_53, 1)) < (+l_73)) <= g_11)))) == (p_53 || (l_83 = (((((safe_sub_func_int8_t_s_s((((l_76[4] > (l_82 = ((safe_lshift_func_int8_t_s_s((g_11 || ((g_81[3] = ((safe_add_func_int8_t_s_s(0xD2L, p_53)) > 0L)) , 0xC8A6L)), 3)) <= l_76[7]))) || 65528UL) , 0xACL), l_76[4])) == p_53) <= g_11) & g_11) || g_81[3])))), 15)) , g_11), 2UL))));
    l_97[0] = (l_96 = (((((g_81[3] != p_53) <= (safe_add_func_uint8_t_u_u((g_95 = (((((l_85 , (safe_lshift_func_int16_t_s_u(((l_85 = 0UL) >= (safe_rshift_func_uint8_t_u_u(p_53, ((l_84 = ((((g_81[9] | p_53) & 0xD0FDL) < (g_94 = ((l_82 = (l_83 = (safe_sub_func_uint16_t_u_u(((p_53 , p_53) <= 0x112DL), 0x816DL)))) >= p_53))) < l_76[3])) && p_53)))), 3))) | (-1L)) , p_53) != l_76[4]) > l_76[4])), l_73))) & p_53) , (-9L)) != 0xE2L));
    for (g_94 = 24; (g_94 > 1); g_94 = safe_sub_func_int32_t_s_s(g_94, 6))
    {
        char l_109[2][4];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 4; j++)
                l_109[i][j] = 0x77L;
        }
        l_84 = ((l_76[8] | (safe_lshift_func_int16_t_s_s((g_110 = ((g_95 >= (l_97[4] = (p_53 , (safe_sub_func_uint8_t_u_u(g_95, ((((safe_lshift_func_int8_t_s_s(((g_106 = g_94) && (~(safe_add_func_int8_t_s_s(g_94, 0xA2L)))), 3)) ^ ((l_109[1][2] | ((!p_53) >= 1UL)) <= p_53)) && g_106) > l_109[1][3])))))) > 9UL)), 10))) | p_53);
    }
    l_96 = (g_94 = 1L);
    return g_110;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_81[i], "g_81[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_219[i], "g_219[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_290, "g_290", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_356, "g_356", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_542[i][j][k], "g_542[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_600, "g_600", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_647[i][j], "g_647[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_650, "g_650", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_909, "g_909", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    transparent_crc(g_972, "g_972", print_hash_value);
    transparent_crc(g_1001, "g_1001", print_hash_value);
    transparent_crc(g_1027, "g_1027", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1050[i], "g_1050[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1061, "g_1061", print_hash_value);
    transparent_crc(g_1070, "g_1070", print_hash_value);
    transparent_crc(g_1099, "g_1099", print_hash_value);
    transparent_crc(g_1161, "g_1161", print_hash_value);
    transparent_crc(g_1218, "g_1218", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1245, "g_1245", print_hash_value);
    transparent_crc(g_1249, "g_1249", print_hash_value);
    transparent_crc(g_1394, "g_1394", print_hash_value);
    transparent_crc(g_1669, "g_1669", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1717[i][j][k], "g_1717[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1718[i], "g_1718[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1729, "g_1729", print_hash_value);
    transparent_crc(g_1826, "g_1826", print_hash_value);
    transparent_crc(g_1862, "g_1862", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
