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



static volatile int g_3[6][8] = {{(-2L),0x10B999FBL,0x4E94F934L,1L,(-10L),9L,1L,0xFB6318D5L},{1L,0xEB77278FL,0x4E94F934L,0x9BACC5D9L,0x9BACC5D9L,0x4E94F934L,0xEB77278FL,1L},{(-10L),0x00585B7FL,(-2L),2L,0x545EE28FL,0x10B999FBL,0x7C04CCB6L,0x4E94F934L},{3L,1L,0x545EE28FL,0xD15DE05DL,2L,0x10B999FBL,2L,0xD15DE05DL},{0xEB77278FL,0x00585B7FL,0xEB77278FL,(-2L),0x10B999FBL,0x4E94F934L,1L,(-10L)},{0xD15DE05DL,0xEB77278FL,2L,0x7C04CCB6L,3L,9L,0xD15DE05DL,0xD15DE05DL}};
static volatile int g_4 = 0xFFCF33F2L;
static int g_5 = (-9L);
static volatile int g_10 = 5L;
static volatile int g_11[5][8] = {{0x7609FA85L,2L,0L,2L,0x7609FA85L,0xEF4A0426L,0xEF4A0426L,0x7609FA85L},{2L,0x88E10E5EL,0x88E10E5EL,2L,1L,0x7609FA85L,1L,2L},{0x88E10E5EL,1L,0x88E10E5EL,0xEF4A0426L,0L,0L,0xEF4A0426L,0x88E10E5EL},{1L,1L,0L,0x7609FA85L,0x4ABC2489L,0x7609FA85L,0L,1L},{1L,0x88E10E5EL,0xEF4A0426L,0L,0L,0xEF4A0426L,0x88E10E5EL,1L}};
static volatile int g_12[5] = {9L,9L,9L,9L,9L};
static volatile int g_13 = 8L;
static volatile int g_14 = 0L;
static volatile int g_15 = 2L;
static int g_16 = 0x5B611FB8L;
static int *g_64 = (void*)0;
static int **g_63 = &g_64;
static unsigned short g_68 = 0x26CCL;
static char g_79 = 0x2CL;
static unsigned short g_111[6][8][2] = {{{65535UL,65535UL},{65535UL,65533UL},{65528UL,0xACA8L},{0UL,0x6D15L},{0x6D15L,65535UL},{65526UL,6UL},{0xACA8L,0x2B65L},{65535UL,1UL}},{{0UL,0x8945L},{0xA86AL,0xACA8L},{0xB119L,65535UL},{1UL,0x2B65L},{65526UL,0UL},{0x8945L,0UL},{0x6D15L,1UL},{0xB119L,65533UL}},{{0UL,65533UL},{0xB119L,1UL},{0x6D15L,0UL},{0x8945L,0UL},{65526UL,0x2B65L},{1UL,65535UL},{0xB119L,0xACA8L},{0xA86AL,0x8945L}},{{65526UL,65535UL},{1UL,0xACA8L},{65535UL,65535UL},{1UL,1UL},{0x7030L,0x7030L},{65526UL,65535UL},{0x2B65L,0xAD34L},{1UL,0x94F3L}},{{1UL,1UL},{0x8CE9L,0xB119L},{0x8CE9L,1UL},{1UL,0x94F3L},{1UL,0xAD34L},{0x2B65L,65535UL},{65526UL,0x7030L},{0x7030L,1UL}},{{1UL,65535UL},{65535UL,0xACA8L},{1UL,65535UL},{65526UL,0x8CE9L},{0xB119L,65535UL},{65533UL,0x94F3L},{65535UL,0xACA8L},{1UL,0x4427L}}};
static unsigned short *g_110 = &g_111[0][2][0];
static int g_120 = 6L;
static int *g_119 = &g_120;
static unsigned g_136 = 4294967295UL;
static unsigned char g_146 = 2UL;
static unsigned char *g_169[7][4][7] = {{{&g_146,&g_146,&g_146,&g_146,&g_146,(void*)0,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,(void*)0,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,(void*)0,&g_146,&g_146,(void*)0,&g_146,&g_146}},{{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,&g_146,(void*)0,&g_146,&g_146,&g_146}},{{(void*)0,&g_146,&g_146,&g_146,&g_146,(void*)0,&g_146},{(void*)0,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,(void*)0,&g_146,(void*)0,&g_146,(void*)0},{(void*)0,&g_146,(void*)0,&g_146,&g_146,&g_146,(void*)0}},{{(void*)0,&g_146,&g_146,&g_146,(void*)0,&g_146,&g_146},{(void*)0,&g_146,(void*)0,&g_146,&g_146,(void*)0,&g_146},{&g_146,(void*)0,(void*)0,&g_146,&g_146,&g_146,&g_146},{(void*)0,&g_146,&g_146,&g_146,(void*)0,&g_146,(void*)0}},{{&g_146,(void*)0,&g_146,&g_146,&g_146,(void*)0,&g_146},{&g_146,&g_146,&g_146,(void*)0,(void*)0,&g_146,&g_146},{(void*)0,&g_146,&g_146,(void*)0,&g_146,(void*)0,&g_146},{&g_146,(void*)0,&g_146,&g_146,&g_146,(void*)0,(void*)0}},{{&g_146,&g_146,&g_146,(void*)0,&g_146,&g_146,&g_146},{&g_146,&g_146,(void*)0,&g_146,&g_146,&g_146,&g_146},{&g_146,(void*)0,&g_146,&g_146,&g_146,&g_146,(void*)0},{(void*)0,(void*)0,&g_146,&g_146,&g_146,(void*)0,&g_146}},{{&g_146,&g_146,(void*)0,&g_146,&g_146,&g_146,(void*)0},{&g_146,&g_146,(void*)0,&g_146,&g_146,(void*)0,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146},{&g_146,&g_146,&g_146,&g_146,&g_146,&g_146,&g_146}}};
static unsigned char **g_168[9] = {&g_169[2][0][2],&g_169[2][0][2],&g_169[2][0][2],&g_169[2][0][2],&g_169[2][0][2],&g_169[2][0][2],&g_169[2][0][2],&g_169[2][0][2],&g_169[2][0][2]};
static short g_191 = (-2L);
static unsigned g_203 = 0x3AC011F5L;
static volatile char g_232 = 0x30L;
static unsigned *g_328 = &g_203;
static unsigned g_574 = 18446744073709551612UL;
static unsigned char g_575 = 0x37L;
static short g_606 = (-1L);
static unsigned g_625 = 7UL;
static int **g_653 = (void*)0;
static short g_656 = 0x037EL;
static volatile int *g_666[7][10] = {{&g_12[1],(void*)0,&g_12[1],&g_4,&g_12[4],&g_15,&g_11[4][7],&g_4,&g_4,&g_11[4][7]},{&g_12[4],(void*)0,&g_15,&g_15,(void*)0,&g_12[4],&g_12[4],&g_4,(void*)0,&g_4},{(void*)0,&g_4,&g_12[1],&g_11[4][7],&g_4,&g_11[4][7],&g_12[1],&g_4,(void*)0,&g_12[4]},{(void*)0,&g_15,(void*)0,&g_15,&g_11[4][7],&g_4,&g_4,&g_11[4][7],&g_15,&g_12[4]},{&g_4,&g_4,&g_11[4][7],&g_15,&g_12[4],&g_4,&g_12[1],(void*)0,&g_12[1],&g_4},{&g_12[4],&g_11[4][7],&g_11[4][7],&g_11[4][7],&g_12[4],(void*)0,&g_12[1],&g_4,(void*)0,(void*)0},{&g_15,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_15,&g_11[4][7],(void*)0}};
static volatile int ** volatile g_665 = &g_666[3][9];
static char *g_674 = &g_79;
static char **g_673[4] = {&g_674,&g_674,&g_674,&g_674};
static char ***g_672 = &g_673[2];
static volatile unsigned g_705 = 0xC6F299FBL;
static int g_784 = 0L;
static char g_805[1] = {0xCBL};
static unsigned short *g_816 = &g_68;
static char g_866 = 0xC0L;
static unsigned char g_906 = 1UL;
static volatile int ** volatile g_943 = &g_666[1][3];
static unsigned char ***g_1006 = &g_168[0];
static unsigned char ****g_1005 = &g_1006;
static unsigned char g_1020 = 9UL;
static volatile int g_1027 = 0L;
static int g_1045 = 1L;
static volatile int ** volatile g_1046 = (void*)0;
static volatile int ** volatile g_1047 = &g_666[4][8];
static unsigned short **g_1063 = &g_816;
static unsigned short ** volatile *g_1062 = &g_1063;
static unsigned g_1157 = 0x307A17C0L;
static volatile int **g_1193 = &g_666[3][8];
static volatile int *** volatile g_1192[4][2][6] = {{{(void*)0,(void*)0,&g_1193,(void*)0,(void*)0,&g_1193},{(void*)0,(void*)0,&g_1193,(void*)0,(void*)0,&g_1193}},{{(void*)0,(void*)0,&g_1193,(void*)0,(void*)0,&g_1193},{(void*)0,(void*)0,&g_1193,(void*)0,(void*)0,&g_1193}},{{(void*)0,(void*)0,&g_1193,(void*)0,(void*)0,&g_1193},{(void*)0,(void*)0,&g_1193,(void*)0,(void*)0,&g_1193}},{{(void*)0,(void*)0,&g_1193,(void*)0,(void*)0,&g_1193},{(void*)0,(void*)0,&g_1193,(void*)0,(void*)0,&g_1193}}};
static short g_1226 = 0xA409L;
static int g_1280 = (-1L);
static volatile short g_1341 = 0x10F9L;
static int g_1342 = 0x0CF1E972L;
static int g_1397[8] = {0x0FFB15FFL,0x0FFB15FFL,0x0FFB15FFL,0x0FFB15FFL,0x0FFB15FFL,0x0FFB15FFL,0x0FFB15FFL,0x0FFB15FFL};
static volatile unsigned g_1403 = 0x09A21531L;
static volatile unsigned *g_1402 = &g_1403;
static volatile unsigned **g_1401[3][5] = {{&g_1402,&g_1402,&g_1402,&g_1402,&g_1402},{&g_1402,&g_1402,&g_1402,&g_1402,&g_1402},{&g_1402,&g_1402,&g_1402,&g_1402,&g_1402}};
static volatile unsigned *** volatile g_1400 = &g_1401[0][0];
static int *g_1458[7] = {&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120};
static short **g_1477 = (void*)0;
static unsigned short g_1505[6] = {0x145BL,0x145BL,0x01AEL,0x145BL,0x145BL,0x01AEL};
static unsigned **g_1533 = &g_328;
static int *g_1545[2] = {&g_5,&g_5};
static volatile unsigned short g_1574 = 1UL;
static short g_1698 = 0x2D70L;
static int **g_1728[8] = {&g_1545[1],&g_1545[1],&g_1545[1],&g_1545[1],&g_1545[1],&g_1545[1],&g_1545[1],&g_1545[1]};
static int **g_1734 = &g_1458[2];
static unsigned char g_1740 = 0x80L;
static int g_1753 = 0L;
static char g_1756 = 5L;
static unsigned char g_1812[10] = {0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL,0x7FL};
static unsigned g_1823 = 0x6CF5F9AEL;
static int g_1868[10][9][1] = {{{0L},{0L},{1L},{0x5B09F2BFL},{0xA3F5EFAFL},{0xA3F5EFAFL},{0x5B09F2BFL},{1L},{0L}},{{0L},{0xA3F5EFAFL},{0L},{(-1L)},{0L},{0xA3F5EFAFL},{0L},{0L},{1L}},{{0x5B09F2BFL},{0xA3F5EFAFL},{0xA3F5EFAFL},{0x5B09F2BFL},{1L},{0L},{0L},{0xA3F5EFAFL},{0L}},{{(-1L)},{0L},{0xA3F5EFAFL},{0L},{0L},{1L},{0x5B09F2BFL},{0xA3F5EFAFL},{0xA3F5EFAFL}},{{0x5B09F2BFL},{1L},{0L},{0L},{0xA3F5EFAFL},{0L},{(-1L)},{0L},{0xA3F5EFAFL}},{{0L},{0x360A124AL},{0x5B09F2BFL},{0xCE88AF51L},{(-1L)},{(-1L)},{0xCE88AF51L},{0x5B09F2BFL},{0x360A124AL}},{{0L},{(-1L)},{0x360A124AL},{0xC8FC3ABCL},{0x360A124AL},{(-1L)},{0L},{0x360A124AL},{0x5B09F2BFL}},{{0xCE88AF51L},{(-1L)},{(-1L)},{0xCE88AF51L},{0x5B09F2BFL},{0x360A124AL},{0L},{(-1L)},{0x360A124AL}},{{0xC8FC3ABCL},{0x360A124AL},{(-1L)},{0L},{0x360A124AL},{0x5B09F2BFL},{0xCE88AF51L},{(-1L)},{(-1L)}},{{0xCE88AF51L},{0x5B09F2BFL},{0x360A124AL},{0L},{(-1L)},{0x360A124AL},{0xC8FC3ABCL},{0x360A124AL},{(-1L)}}};
static unsigned char *****g_2044 = &g_1005;
static char **g_2100 = (void*)0;
static unsigned char g_2102 = 1UL;
static unsigned char g_2134 = 0xC7L;
static int *g_2184 = &g_1397[1];
static volatile unsigned short g_2297 = 0xF7DBL;
static short ***g_2304 = &g_1477;
static short g_2325 = (-2L);
static char g_2347 = 0x25L;
static volatile char g_2407 = 1L;
static unsigned short g_2442 = 0x7A32L;
static int g_2553[4] = {(-4L),(-4L),(-4L),(-4L)};
static unsigned g_2568 = 0xB5F89A24L;
static int * volatile g_2620 = &g_1280;
static volatile unsigned short *g_2726 = &g_2297;
static volatile unsigned short * volatile *g_2725 = &g_2726;
static volatile unsigned short * volatile **g_2724[7][4][1] = {{{&g_2725},{&g_2725},{(void*)0},{&g_2725}},{{&g_2725},{&g_2725},{(void*)0},{&g_2725}},{{&g_2725},{&g_2725},{(void*)0},{&g_2725}},{{&g_2725},{&g_2725},{(void*)0},{&g_2725}},{{&g_2725},{&g_2725},{(void*)0},{&g_2725}},{{&g_2725},{&g_2725},{(void*)0},{&g_2725}},{{&g_2725},{&g_2725},{(void*)0},{&g_2725}}};
static volatile unsigned short * volatile ***g_2723 = &g_2724[0][0][0];
static volatile unsigned short * volatile *** volatile * volatile g_2722 = &g_2723;
static volatile unsigned g_2824 = 18446744073709551607UL;
static short g_2901 = 1L;
static unsigned short g_2993 = 0UL;
static unsigned char g_2994 = 0xEDL;
static int *g_3015 = &g_1280;
static int *g_3043[4] = {&g_1868[6][5][0],&g_1868[6][5][0],&g_1868[6][5][0],&g_1868[6][5][0]};
static int *g_3070 = &g_5;
static unsigned char g_3151 = 1UL;
static int **g_3190 = &g_119;
static unsigned short g_3221 = 65535UL;
static unsigned *g_3269 = &g_1157;
static volatile unsigned short g_3305 = 65533UL;
static short g_3364 = 0x7266L;
static short ****g_3430 = (void*)0;
static volatile char g_3495 = 0xAEL;
static unsigned ***g_3589 = &g_1533;
static unsigned ****g_3588 = &g_3589;
static unsigned g_3601 = 0x5AB79D64L;
static unsigned *****g_3651 = &g_3588;
static unsigned g_3668 = 0UL;
static char g_3669 = (-8L);
static unsigned **g_3672 = &g_3269;
static short *g_3691 = &g_1698;
static short **g_3690 = &g_3691;
static int g_3785 = 0x1E84C930L;
static short g_3786[5] = {0L,0L,0L,0L,0L};
static unsigned short g_3788 = 9UL;
static unsigned g_3806 = 18446744073709551612UL;
static char g_3815 = 0L;
static unsigned g_3830 = 0xF88AD387L;
static int ** volatile g_3884 = (void*)0;
static unsigned * volatile g_3932 = &g_136;
static int g_3935[8] = {0x2E4C354EL,0x2E4C354EL,0x2E4C354EL,0x2E4C354EL,0x2E4C354EL,0x2E4C354EL,0x2E4C354EL,0x2E4C354EL};
static unsigned char *** volatile * volatile ** volatile g_3965 = (void*)0;
static unsigned char *** volatile * volatile ** volatile *g_3964 = &g_3965;



static unsigned short func_1(void);
static int func_17(unsigned short p_18, unsigned char p_19);
static unsigned char func_21(int ** p_22);
static int ** func_23(int * p_24, int p_25, int p_26, int * p_27, int p_28);
static int * func_29(int p_30, int * p_31, char p_32, int ** p_33, short p_34);
static char func_37(int * p_38, char p_39, int * p_40);
static int * func_41(short p_42, unsigned p_43, char p_44, int p_45);
static int * func_46(int ** p_47, unsigned p_48, int ** p_49, int * p_50, int p_51);
static unsigned short func_53(int * p_54, char p_55, int ** p_56);
static short func_57(int p_58, unsigned char p_59, int ** p_60, int ** p_61, unsigned p_62);
static unsigned short func_1(void)
{
    int l_2[8];
    int **l_52 = (void*)0;
    int *l_1332 = &g_5;
    int l_1349 = (-3L);
    int l_1925[2];
    char l_3507 = (-1L);
    unsigned char *l_3508 = (void*)0;
    unsigned char *l_3509 = &g_1812[9];
    int l_3514 = 1L;
    unsigned char *l_3517 = &g_2102;
    int l_3528[4][3][6] = {{{0L,0xB6FA9CCCL,2L,0L,0xB6FA9CCCL,0L},{0L,0xB6FA9CCCL,0L,2L,2L,0L},{0L,0L,2L,0xC4A5EEBEL,2L,0L}},{{2L,0xB6FA9CCCL,0xC4A5EEBEL,0xC4A5EEBEL,0xB6FA9CCCL,2L},{0L,2L,0xC4A5EEBEL,2L,0L,0L},{0L,2L,2L,0L,0xB6FA9CCCL,0L}},{{0L,0xB6FA9CCCL,0L,2L,2L,0L},{0L,0L,2L,0xC4A5EEBEL,2L,0L},{2L,0xB6FA9CCCL,0xC4A5EEBEL,0xC4A5EEBEL,0xB6FA9CCCL,2L}},{{0L,2L,0xC4A5EEBEL,2L,0L,0L},{0L,2L,2L,0L,0xB6FA9CCCL,0L},{0L,0xB6FA9CCCL,0L,2L,2L,0L}}};
    int *l_3529 = &g_1753;
    unsigned char l_3530 = 255UL;
    unsigned char l_3533[8][8] = {{0x77L,0x02L,0x02L,0x77L,0x31L,0xD0L,0x31L,0x77L},{0x02L,0x31L,0x02L,0UL,3UL,3UL,0UL,0x02L},{0x31L,0x31L,3UL,0xD0L,248UL,0xD0L,3UL,0x31L},{0x31L,0UL,0x31L,248UL,248UL,0x31L,0UL,0x77L},{0UL,0xD0L,0x77L,3UL,0x77L,0xD0L,0UL,0UL},{0xD0L,3UL,0x31L,0x31L,3UL,0xD0L,248UL,0xD0L},{3UL,0xD0L,248UL,0xD0L,3UL,0x31L,0x31L,3UL},{0xD0L,0UL,0UL,0xD0L,0x77L,3UL,0x77L,0xD0L}};
    char l_3534 = 0xF0L;
    unsigned l_3560 = 0xF65B2C75L;
    int l_3564 = 0L;
    int **l_3570 = (void*)0;
    unsigned l_3592 = 4294967293UL;
    short l_3610 = (-7L);
    unsigned short **l_3654 = (void*)0;
    unsigned l_3728 = 0xA5DF1BD0L;
    int l_3740 = 0x0151FFC5L;
    unsigned short l_3747 = 65528UL;
    int l_3798 = 0xA2DD5AF7L;
    char l_3819[10][10][2] = {{{0x16L,(-8L)},{0x7EL,9L},{0L,0L},{(-1L),3L},{(-9L),0x5DL},{6L,1L},{0x53L,0xA8L},{(-4L),0x64L},{3L,5L},{0x93L,0xAEL}},{{(-6L),1L},{0x5DL,0xBAL},{9L,0x50L},{(-1L),0L},{(-1L),(-3L)},{7L,(-8L)},{1L,0x90L},{0x16L,0xD1L},{0xA8L,0x88L},{(-1L),0L}},{{0xB9L,(-1L)},{0xAEL,0xBAL},{6L,(-10L)},{2L,(-9L)},{0x93L,0x64L},{0x9FL,2L},{0x49L,0xA8L},{(-6L),(-10L)},{1L,1L},{1L,0x85L}},{{(-1L),0x8DL},{0L,0x49L},{0xADL,0L},{6L,(-1L)},{6L,0L},{0xADL,0x49L},{0L,0x8DL},{(-1L),0x85L},{1L,1L},{1L,1L}},{{(-1L),0xBFL},{(-1L),0L},{0L,(-10L)},{(-1L),1L},{0x9FL,1L},{9L,(-3L)},{0xB4L,1L},{(-1L),0x57L},{7L,(-4L)},{0x98L,0L}},{{0xBAL,0x64L},{0L,0x7EL},{0xADL,0x54L},{7L,0x21L},{(-6L),0x85L},{7L,(-3L)},{0x49L,0xAEL},{(-1L),0xB4L},{(-1L),0x8BL},{0x16L,(-10L)}},{{2L,0xBFL},{0x9BL,0xAEL},{9L,0x49L},{1L,0x16L},{(-6L),0x57L},{0x2EL,0x49L},{0xB8L,0x7EL},{0xBAL,(-1L)},{6L,7L},{0x98L,0x54L}},{{0x2EL,0x8DL},{1L,1L},{7L,0x49L},{1L,9L},{0x9FL,0xB4L},{2L,0L},{(-6L),0x93L},{0x49L,(-10L)},{0x9AL,0x56L},{1L,0x16L}},{{(-10L),2L},{1L,5L},{0x57L,6L},{0xD1L,0x8DL},{0x50L,1L},{0x9BL,1L},{0L,(-6L)},{0x57L,(-1L)},{0xBFL,0x53L},{(-10L),0x16L}},{{0x85L,0x86L},{0xB9L,0x65L},{0x49L,(-4L)},{0x53L,0x49L},{(-3L),(-10L)},{0L,0x86L},{0x16L,1L},{(-10L),(-6L)},{0xBFL,0x64L},{0x8DL,6L}}};
    short l_3846 = 0x4893L;
    int **l_3848 = &g_3070;
    unsigned char ***l_3897 = (void*)0;
    unsigned char ******l_3919 = &g_2044;
    unsigned char l_3937 = 0x02L;
    int *l_3942 = &g_1280;
    int l_3945[6] = {(-1L),(-1L),0x4A0AB099L,(-1L),(-1L),0x4A0AB099L};
    int *l_3959[8][9] = {{&g_1397[0],&g_1397[0],(void*)0,&g_1397[0],&g_1397[0],(void*)0,&g_1397[0],&g_1397[0],(void*)0},{&g_1868[1][8][0],&g_1868[1][8][0],&l_3514,&g_1868[1][8][0],&g_1868[1][8][0],&l_3514,&g_1868[1][8][0],&g_1868[1][8][0],&l_3514},{&g_1397[0],&g_1397[0],(void*)0,&g_1397[0],&g_1397[0],(void*)0,&g_1397[0],&g_1397[0],(void*)0},{&g_1868[1][8][0],&g_1868[1][8][0],&l_3514,&g_1868[1][8][0],&g_1868[1][8][0],&l_3514,&g_1868[1][8][0],&g_1868[1][8][0],&l_3514},{&g_1397[0],&g_1397[0],(void*)0,&g_1397[0],&g_1397[0],(void*)0,&g_1397[0],&g_1397[0],(void*)0},{&g_1868[1][8][0],&g_1868[1][8][0],&l_3514,&g_1868[1][8][0],&g_1868[1][8][0],&l_3514,&g_1868[1][8][0],&g_1868[1][8][0],&l_3514},{&g_1397[0],&g_1397[0],(void*)0,&g_1397[0],&g_1397[0],(void*)0,&g_1397[0],&g_1397[0],(void*)0},{&g_1868[1][8][0],&g_1868[1][8][0],&l_3514,&g_1868[1][8][0],&g_1868[1][8][0],&l_3514,&g_1868[1][8][0],&g_1868[1][8][0],&l_3514}};
    int l_3963[8];
    int l_4006 = (-1L);
    unsigned l_4015 = 0x9AD008ADL;
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_2[i] = 0x26BDDE0BL;
    for (i = 0; i < 2; i++)
        l_1925[i] = 0xD02FBB18L;
    for (i = 0; i < 8; i++)
        l_3963[i] = 0xF3E41F72L;
    for (g_3[2][0] = 0; g_3[2][0] < 8; g_3[2][0] += 1)
    {
        l_2[g_3[2][0]] = 0x0A3CFCE2L;
    }
    for (g_5 = (-15); (g_5 < (-25)); --g_5)
    {
        int *l_9 = (void*)0;
        int **l_8 = &l_9;
        int *l_1334 = &g_16;
        unsigned l_1352 = 0x2B7DBD4AL;
        (*l_8) = (void*)0;
        for (g_16 = 0; (g_16 <= 5); g_16 += 1)
        {
            unsigned short l_20 = 0xF5ECL;
            int *l_1350 = &l_2[4];
            unsigned l_1353 = 0xB4668219L;
            int l_3504[5];
            int i, j;
            for (i = 0; i < 5; i++)
                l_3504[i] = 0x776AE408L;
        }
    }
    (*g_3070) = (((((safe_mul_func_int16_t_s_s(((+l_3507) | (++(*l_3509))), (*l_1332))) && (((*l_3509)++) & (~((***g_672) = ((*l_1332) ^ (***g_672)))))) ^ l_3514) | ((*g_2184) |= (((((*l_1332) && (*l_1332)) , ((*l_3529) = ((safe_add_func_uint8_t_u_u((--(*l_3517)), (safe_mul_func_uint8_t_u_u(((func_37(((safe_div_func_uint16_t_u_u(((*l_1332) == ((safe_mod_func_int32_t_s_s(((*g_119) = (safe_div_func_uint32_t_u_u((***g_1400), (-4L)))), l_3528[1][1][5])) && (*l_1332))), 1UL)) , &l_1349), (*l_1332), l_3529) || (*l_1332)) >= 0xA0D316B5L), 0xC3L)))) < 0x4E6F0AA6L))) , 0x02F98AD6L) != (*l_1332)))) , (*l_3529));
    if (func_57(((*g_3015) = (l_3530 ^ (safe_mul_func_int8_t_s_s((*l_1332), ((((*l_3529) , func_46(&l_1332, (*l_1332), ((((*g_110) < ((*g_816) = (l_3533[1][4] | ((l_3534 && ((*l_3509) = 0x91L)) || (*l_3529))))) && (*l_3529)) , (void*)0), &l_1349, (*l_1332))) != (void*)0) & (**g_2725)))))), (*l_1332), &l_3529, &g_1458[0], (*g_328)))
    {
        char l_3535 = 0x71L;
        unsigned char ***l_3538 = &g_168[2];
        int l_3539 = 0x845DC134L;
        int l_3540 = 0x882244D1L;
        unsigned l_3563 = 0x179BBB93L;
        unsigned char l_3565 = 0xA0L;
        int **l_3566 = &l_1332;
        unsigned char **l_3574 = &g_169[1][3][4];
        int *l_3577 = &l_3540;
        unsigned l_3578[9][9] = {{4294967295UL,0x43692413L,0xBC89AF54L,1UL,0x411A8B7CL,0x428B4D6EL,0x72FEDEF5L,0xF1ECF534L,0xF1ECF534L},{0x72FEDEF5L,5UL,0x84CEEA8AL,4294967294UL,0x84CEEA8AL,5UL,0x72FEDEF5L,0xAC4B35C4L,6UL},{0xF1ECF534L,0UL,0x4B024A05L,6UL,4294967291UL,0x4C66F985L,0x63F06CF0L,0x411A8B7CL,0xBC89AF54L},{4294967288UL,0x2B7EB771L,1UL,0UL,4294967295UL,0x3A48AE4FL,0x43692413L,0xAC4B35C4L,7UL},{7UL,0xF1ECF534L,0UL,4294967288UL,1UL,4294967288UL,0UL,0xF1ECF534L,7UL},{1UL,6UL,4294967294UL,4294967291UL,7UL,0x91049874L,0xF1ECF534L,0x256EB000L,0xBC89AF54L},{0x3A48AE4FL,0xBC89AF54L,0x256EB000L,0xF1ECF534L,0x91049874L,7UL,4294967291UL,4294967294UL,6UL},{1UL,4294967288UL,0x256EB000L,0xAC4B35C4L,0x428B4D6EL,0x2B7EB771L,0x428B4D6EL,0xAC4B35C4L,0x256EB000L},{4294967288UL,4294967288UL,0x84CEEA8AL,4294967295UL,0UL,0x411A8B7CL,4294967294UL,0x2B7EB771L,0x3A48AE4FL}};
        unsigned char l_3617 = 0UL;
        unsigned short l_3622[8][2] = {{0xD9D7L,0xD4DBL},{0x4515L,0x4515L},{0x4515L,0xD4DBL},{0xD9D7L,0xC5ECL},{0xD4DBL,0xC5ECL},{0xD9D7L,0xD4DBL},{0x4515L,0x4515L},{0x4515L,0xD4DBL}};
        char l_3656 = 0x0DL;
        unsigned l_3663 = 4294967295UL;
        unsigned l_3667[8][9] = {{18446744073709551613UL,0UL,6UL,0UL,0UL,5UL,1UL,5UL,0UL},{18446744073709551613UL,8UL,8UL,18446744073709551613UL,0x1432FD07L,0UL,0UL,5UL,8UL},{0UL,0x1432FD07L,5UL,0x03ACBF6AL,0xCD2DEF60L,0UL,1UL,0x1432FD07L,0x1432FD07L},{18446744073709551610UL,5UL,0x1432FD07L,0x03ACBF6AL,0x1432FD07L,5UL,18446744073709551610UL,8UL,5UL},{0x03ACBF6AL,5UL,5UL,18446744073709551613UL,0UL,6UL,0UL,0UL,5UL},{18446744073709551610UL,0x1432FD07L,8UL,0UL,5UL,5UL,0UL,8UL,0x1432FD07L},{0UL,8UL,6UL,1UL,5UL,6UL,18446744073709551610UL,0x1432FD07L,8UL},{3UL,8UL,0UL,0x03ACBF6AL,8UL,0xCD2DEF60L,0UL,0xCD2DEF60L,8UL}};
        short l_3670 = 0x59EBL;
        unsigned **l_3671 = &g_3269;
        unsigned l_3694 = 0x93D06C1CL;
        unsigned char l_3708 = 0UL;
        unsigned l_3710 = 18446744073709551615UL;
        char l_3712[9] = {0xBFL,0xB5L,0xBFL,0xB5L,0xBFL,0xB5L,0xBFL,0xB5L,0xBFL};
        int l_3742 = 0L;
        int l_3743 = 3L;
        int l_3744 = (-9L);
        int l_3745[8];
        char l_3756 = 0x70L;
        unsigned l_3817 = 0x64E9DA38L;
        int l_3821 = 0L;
        int *l_3828 = &l_3744;
        char ***l_3834 = &g_2100;
        int *l_3883[3][4][9] = {{{&l_3564,&g_1045,&l_3564,(void*)0,&g_2553[3],&g_784,&l_3564,&g_1045,&g_1045},{&g_2553[0],&g_1045,&g_1045,&g_2553[3],&g_1045,&g_1045,&g_2553[0],&l_3564,&l_3798},{&l_3564,&g_784,&g_2553[3],(void*)0,&l_3564,&g_1045,&l_3564,(void*)0,&g_2553[3]},{&g_2553[3],&g_2553[3],&g_2553[0],(void*)0,&l_3798,&g_784,&g_1045,&l_3564,&g_1045}},{{&g_2553[3],&g_2553[0],&g_784,&g_784,&g_2553[0],&g_2553[3],(void*)0,&g_1045,&g_2553[1]},{&l_3564,(void*)0,&g_2553[0],&g_2553[1],&g_2553[0],&g_2553[0],&g_2553[1],&g_2553[0],(void*)0},{&g_2553[0],&l_3564,&g_2553[3],&l_3564,&l_3798,(void*)0,(void*)0,(void*)0,(void*)0},{&l_3564,&g_2553[0],&g_1045,&g_2553[0],&l_3564,&l_3564,&g_1045,&g_2553[3],&g_2553[1]}},{{&g_1045,&l_3564,&l_3564,&g_2553[0],&g_1045,&l_3564,(void*)0,&g_2553[1],&l_3564},{&g_784,&g_2553[0],&g_2553[3],(void*)0,&g_1045,&g_2553[1],&l_3564,&g_2553[1],&g_1045},{&l_3798,&l_3564,&l_3564,&l_3798,&l_3564,&g_2553[0],&g_1045,&g_1045,&g_2553[3]},{&g_784,&g_1045,&l_3564,(void*)0,(void*)0,&l_3564,&g_1045,&g_784,&g_2553[0]}}};
        int **l_3882[1][8] = {{&l_3883[1][1][6],&l_3883[1][1][6],&l_3883[1][1][6],&l_3883[1][1][6],&l_3883[1][1][6],&l_3883[1][1][6],&l_3883[1][1][6],&l_3883[1][1][6]}};
        char *l_3929 = &l_3819[3][0][0];
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_3745[i] = 1L;
        if ((l_3535 != (safe_lshift_func_uint8_t_u_u(0UL, (((*g_1005) == l_3538) || ((((*l_3529) == (*l_1332)) >= l_3539) ^ (***g_672)))))))
        {
            int l_3549 = (-1L);
            short *l_3567 = (void*)0;
            short *l_3568 = (void*)0;
            short *l_3569 = &g_2901;
            int *l_3571 = &g_1280;
            int l_3585 = 0x6C2DDCB4L;
            unsigned ****l_3591[5][8] = {{&g_3589,&g_3589,(void*)0,&g_3589,&g_3589,(void*)0,&g_3589,&g_3589},{&g_3589,&g_3589,&g_3589,&g_3589,&g_3589,&g_3589,(void*)0,&g_3589},{&g_3589,(void*)0,&g_3589,&g_3589,&g_3589,(void*)0,&g_3589,&g_3589},{&g_3589,&g_3589,(void*)0,&g_3589,&g_3589,(void*)0,&g_3589,&g_3589},{&g_3589,&g_3589,(void*)0,&g_3589,&g_3589,&g_3589,(void*)0,&g_3589}};
            unsigned short ***l_3655 = &l_3654;
            int i, j;
            (**l_3566) = ((func_37(func_46(&g_1545[1], (((*l_3569) = ((((!(*l_1332)) , l_3566) != l_3566) , (-1L))) , (***g_1400)), l_3570, (*g_3190), l_3549), (**l_3566), l_3571) ^ (*g_110)) , (**l_3566));
            if ((((**g_1005) != (l_3574 = (***g_2044))) < ((((~65534UL) < ((*g_119) || ((((safe_sub_func_uint16_t_u_u((((*l_1332) < ((**g_1063) >= ((*l_3529) , (((*l_3529) & func_37(l_3577, (*l_3571), (*l_3566))) && (**l_3566))))) & 0x1BABL), (*l_3571))) , l_3578[4][2]) & (*l_3577)) != (*l_3577)))) != (*l_3577)) != (*l_3577))))
            {
                unsigned char l_3581 = 4UL;
                unsigned *****l_3590[2];
                int *l_3611[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_3590[i] = &g_3588;
                for (i = 0; i < 2; i++)
                    l_3611[i] = (void*)0;
                (*l_1332) = (**l_3566);
                l_3571 = (void*)0;

                ;
                for (g_784 = 0; (g_784 == (-9)); g_784--)
                {
                    for (l_3564 = 7; (l_3564 >= 0); l_3564 -= 1)
                    {
                        int i;
                        (*l_3566) = &g_1397[l_3564];

                        ;
                        g_1397[l_3564] = (((***g_672) ^= 1L) , 0L);
                        (*g_1734) = l_3571;
                        (*l_3566) = (void*)0;

                        ;
                    }
                }

                ;

                if ((l_3581 <= (safe_unary_minus_func_uint8_t_u(((*l_3509) = (safe_lshift_func_int16_t_s_s(((*l_3529) >= (-8L)), 14)))))))
                {
                    unsigned l_3608 = 0x73501168L;
                    int *l_3609 = &g_784;
                    int l_3612 = 0x1B31C7EFL;
                    l_1925[1] |= (safe_sub_func_uint16_t_u_u(((((***g_1062) = (safe_mul_func_uint16_t_u_u(func_17(((((*l_3529) = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((**g_2725), 5UL)), 1))) & (((func_37((((*l_3569) &= ((((l_3581 >= g_3601) >= func_37(func_41(l_3581, (*g_3269), l_3581, ((*l_3609) |= (((safe_lshift_func_uint16_t_u_u((((safe_sub_func_uint8_t_u_u((((*l_3577) == (safe_sub_func_uint8_t_u_u(250UL, l_3608))) && (*g_3070)), (*g_674))) || 0xEEL) == (*l_3577)), (***g_1062))) , l_3608) < (*l_3577)))), l_3610, l_3611[1])) ^ l_3608) <= (*l_3577))) , (void*)0), l_3608, (*g_3190)) ^ 0x2E69L) , 0xEFEDL) && (*l_3577))) , l_3608), l_3608), 2L))) > (-1L)) , l_3608), 0xCE68L));


                    ;



                    ;
                    ;
                    l_3612 = 0L;
                }
                else
                {
                    int *l_3628 = &g_5;
                    int ***l_3639 = (void*)0;
                    for (g_906 = 24; (g_906 <= 16); --g_906)
                    {
                        unsigned char l_3621 = 254UL;
                        int l_3623 = 0xBE8BC94BL;
                        (*g_119) &= 0x96A3B0B8L;
                        (*g_119) = ((safe_mul_func_int16_t_s_s(l_3617, (safe_div_func_int32_t_s_s(l_3585, ((*l_3529) = (safe_unary_minus_func_int16_t_s((*l_3577)))))))) ^ (l_3621 , (l_3623 = (l_3622[7][0] & 255UL))));
                    }
                    for (g_2901 = 0; (g_2901 == 6); g_2901 = safe_add_func_int32_t_s_s(g_2901, 3))
                    {
                        return (*g_2726);
                    }
                    for (g_2325 = 0; (g_2325 >= 1); ++g_2325)
                    {
                        int l_3633 = (-9L);
                        int l_3638 = 0x69747061L;
                        (*g_3070) = (((*g_3588) = (*g_3588)) == (void*)0);
                        (*g_3070) = func_37(l_3628, ((!(!((***g_672) & (safe_lshift_func_uint16_t_u_u(l_3633, (***g_1062)))))) > ((((safe_div_func_int8_t_s_s((*g_674), (*l_3628))) < (safe_mul_func_uint16_t_u_u((((*l_3569) = func_37(&l_3633, (((((0L | (1UL != (*l_3628))) <= l_3638) || (*l_3628)) && 0UL) , (*l_3628)), l_3611[1])) || 0UL), (**g_1063)))) , l_3639) != &g_653)), l_3628);
                    }
                }


                ;



                ;
                ;
            }
            else
            {
                for (l_3564 = (-17); (l_3564 >= 15); ++l_3564)
                {
                    unsigned l_3642 = 0x00D1AE6DL;
                    if ((*l_3529))
                        break;
                    ++l_3642;
                    if ((**l_3566))
                        continue;
                }
            }


            ;
            ;



            ;
            ;
            ;
            (*l_3566) = ((*g_63) = func_46(&l_3571, (*l_3577), &l_3577, l_3571, (*g_2184)));

            ;
            ;
        }
        else
        {
            char l_3660 = 0x6DL;
            int *l_3666 = &g_1397[1];
            g_3669 |= (safe_add_func_int16_t_s_s((((*l_3529) = ((((safe_unary_minus_func_uint16_t_u((((**l_3566) ^ (((l_3660 , ((**g_1063)--)) ^ (**l_3566)) < (*g_1402))) || (***g_1400)))) && (l_3663 >= (*g_674))) && func_21(func_23((*g_1734), (safe_lshift_func_int8_t_s_s((l_3660 , (*g_674)), 4)), (*l_1332), l_3666, (*l_3577)))) || (*l_1332))) ^ l_3667[1][7]), g_3668));


            ;



            ;
        }




        ;

        ;



        ;
        ;
        ;
        if (l_3670)
        {
            int l_3673 = 1L;
            g_3672 = l_3671;
            (*g_2184) = (l_3673 || ((*g_1402) >= 4294967295UL));
            (*g_3190) = (void*)0;

            ;
        }
        else
        {
            short *l_3688[6] = {&g_1226,&g_2325,&g_2325,&g_1226,&g_2325,&g_2325};
            short **l_3687 = &l_3688[1];
            int l_3692[3][3][2] = {{{(-5L),3L},{0x92268EE1L,1L},{0x92268EE1L,3L}},{{(-5L),(-5L)},{3L,0x92268EE1L},{3L,1L}},{{0x92268EE1L,0xDB498820L},{0xDB498820L,0x92268EE1L},{1L,3L}}};
            short l_3701 = (-4L);
            int l_3709 = (-1L);
            int **l_3711 = (void*)0;
            int l_3773 = 7L;
            int *l_3790 = &g_1397[6];
            int *l_3791 = (void*)0;
            int *l_3792 = (void*)0;
            int *l_3793 = &l_2[5];
            int *l_3794 = &l_3692[2][1][0];
            int *l_3795 = &g_16;
            int *l_3796[9] = {&g_1342,&g_1868[0][1][0],&g_1868[0][1][0],&g_1342,&g_1868[0][1][0],&g_1868[0][1][0],&g_1342,&g_1868[0][1][0],&g_1868[0][1][0]};
            int l_3797 = 1L;
            unsigned l_3799 = 1UL;
            char l_3807 = 1L;
            unsigned l_3822[6] = {0x45D57D4EL,0x45D57D4EL,0x45D57D4EL,0x45D57D4EL,0x45D57D4EL,0x45D57D4EL};
            unsigned l_3831[4];
            unsigned **l_3836 = (void*)0;
            unsigned **l_3837 = &g_328;
            unsigned *l_3838 = &l_3578[4][2];
            int l_3847 = 0x7FE262C0L;
            char *l_3849 = (void*)0;
            char *l_3850 = (void*)0;
            char *l_3851 = &l_3807;
            unsigned *l_3852 = &l_3799;
            unsigned l_3896[9] = {4294967295UL,0xD7853D6EL,4294967295UL,0xD7853D6EL,4294967295UL,0xD7853D6EL,4294967295UL,0xD7853D6EL,4294967295UL};
            unsigned l_3898 = 0x7E5B18CEL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_3831[i] = 1UL;
            for (l_1349 = 9; (l_1349 != 0); --l_1349)
            {
                unsigned short l_3678 = 0x6092L;
                unsigned l_3679 = 0xF7978C8EL;
                unsigned *l_3680 = &l_3578[1][1];
                short ***l_3689[1];
                int *l_3693[7] = {&g_1397[6],&g_1397[6],&g_1397[6],&g_1397[6],&g_1397[6],&g_1397[6],&g_1397[6]};
                unsigned l_3726 = 0x1CDDE748L;
                unsigned short l_3774 = 0xDF5FL;
                int i;
                for (i = 0; i < 1; i++)
                    l_3689[i] = &l_3687;
                for (g_906 = 0; (g_906 >= 54); g_906 = safe_add_func_int32_t_s_s(g_906, 9))
                {
                    return (*g_2726);
                }
                (*g_3015) = (((0x88B31DE1L | (((*l_3680) = ((+l_3678) > l_3679)) == (((safe_add_func_int16_t_s_s((+(*l_3577)), l_3692[1][0][0])) | 3UL) | l_3692[1][0][0]))) , l_3678) == (*l_3529));
                l_3694--;
                if ((*l_3577))
                {
                    unsigned short l_3717 = 65535UL;
                    unsigned char ******l_3721 = (void*)0;
                    unsigned char *******l_3720 = &l_3721;
                    unsigned char ********l_3719 = &l_3720;
                    char *l_3722 = (void*)0;
                    char *l_3723 = (void*)0;
                    char *l_3724 = &g_2347;
                    int *l_3725 = &g_1868[8][6][0];
                    int l_3727[2];
                    unsigned l_3732 = 18446744073709551614UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_3727[i] = 0x9636A425L;
                    if ((safe_add_func_uint32_t_u_u((l_3692[1][2][1] ^= (((*g_110) ^= (safe_lshift_func_int16_t_s_u(((**l_3687) = (*g_3691)), 9))) , (*g_1402))), ((l_3717 < (func_37(l_3693[0], ((*l_3724) = ((((*l_3719) = ((**g_3690) , ((g_1342 != (*l_3577)) , (((**g_3672) = (safe_unary_minus_func_int8_t_s(((*g_674) |= ((l_3717 != 0x2BL) , 0L))))) , (void*)0)))) != (void*)0) , (*l_3529))), l_3725) & l_3726)) < 0xB3A7L))))
                    {
                        int l_3731[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_3731[i] = 1L;
                        --l_3728;
                        if (l_3731[0])
                            break;
                        l_3732++;
                    }
                    else
                    {
                        (*g_1193) = (*g_1047);
                        if ((*l_3725))
                            break;
                        (*l_3577) |= (safe_lshift_func_uint16_t_u_u((**g_2725), 7));
                    }

                    ;
                    (*l_3566) = (*l_3566);
                    return (**g_2725);
                }
                else
                {
                    unsigned char l_3737 = 0UL;
                    int l_3741[1];
                    int l_3746 = 1L;
                    int l_3763 = 0x49DE622CL;
                    int *l_3780 = &l_3514;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_3741[i] = 0x12157191L;
                    l_3737++;
                    --l_3747;
                    if (l_3737)
                    {
                        unsigned l_3752 = 0xAF9A0ABCL;
                        int *l_3755[3];
                        unsigned short l_3764 = 0x5C10L;
                        unsigned l_3765 = 0x4F1D62BAL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_3755[i] = &g_120;
                        (*g_1734) = func_46(&l_1332, ((**g_3690) && (((*g_110) && ((safe_mul_func_int16_t_s_s(((void*)0 != &g_3588), l_3746)) & l_3752)) >= (safe_rshift_func_uint16_t_u_s(0x637EL, 7)))), (l_3737 , &g_3043[1]), l_3755[2], l_3756);
                        l_3765 |= ((safe_add_func_uint16_t_u_u(((((*l_3529) , l_3746) | l_3746) , 1UL), l_3764)) , 0xBBDE0FEDL);
                        (*g_3015) = (*g_3015);
                    }
                    else
                    {
                        unsigned char l_3768 = 0UL;
                        (*g_3070) = (((*g_674) &= (l_3768 , 0xD7L)) & l_3768);
                        return (**g_1063);
                    }
                    for (l_3742 = (-13); (l_3742 >= 10); l_3742 = safe_add_func_int16_t_s_s(l_3742, 6))
                    {
                        unsigned l_3778 = 4294967295UL;
                        int *l_3779 = &l_1925[1];
                        int **l_3787 = &l_3779;
                        int *l_3789[6][7][4] = {{{&l_3692[0][0][0],&g_5,&l_3763,&g_1753},{&l_3744,&l_3745[1],&l_3692[1][0][0],(void*)0},{&g_1868[6][6][0],&g_1753,&l_3709,(void*)0},{(void*)0,&l_3744,&l_3692[0][0][0],(void*)0},{(void*)0,(void*)0,&l_3692[2][0][1],&g_1868[6][6][0]},{(void*)0,&l_1925[1],&l_3740,&l_3744},{&g_1753,(void*)0,&l_3528[1][1][5],&l_3692[0][0][0]}},{{&l_3744,&l_3743,&g_1280,&g_1868[6][6][0]},{&l_3741[0],&l_3709,&l_3692[1][0][0],&l_3745[1]},{(void*)0,&l_3744,(void*)0,&g_1397[2]},{&l_3709,(void*)0,&g_16,(void*)0},{(void*)0,&l_3740,&l_3741[0],(void*)0},{&g_1280,&g_5,&l_3741[0],&g_5},{(void*)0,&l_3741[0],&g_16,&l_3741[0]}},{{&l_3709,&g_1342,&l_3763,&g_5},{&l_3763,&g_5,&g_1342,&l_3540},{(void*)0,&l_1925[1],&l_3741[0],&l_3740},{&g_1397[2],(void*)0,&l_3745[0],(void*)0},{&g_1868[6][6][0],&g_120,&g_3785,&g_120},{&g_120,&l_1925[1],&l_3744,&l_3763},{&l_1925[1],&l_3763,&g_1342,&g_5}},{{&g_16,&l_3744,&g_120,&l_3745[4]},{&l_3709,(void*)0,&l_3692[1][0][0],&g_1397[2]},{&l_3740,&l_3745[0],&l_3692[2][0][1],&l_3692[0][0][0]},{&g_1342,&l_3692[1][0][0],&g_1753,(void*)0},{&l_3709,&l_3692[0][0][0],&g_1397[4],&l_1925[1]},{(void*)0,&g_1342,&g_1342,(void*)0},{&g_120,&l_3740,&g_1868[6][6][0],&l_3692[0][1][0]}},{{&g_120,&g_1397[6],&l_3743,&l_3740},{&l_3692[0][0][0],&l_3692[2][0][1],&l_3745[0],&l_3740},{&l_3514,&g_1397[6],&l_3528[1][1][5],&l_3692[0][1][0]},{(void*)0,&l_3740,&g_1868[6][6][0],(void*)0},{&g_5,&g_1342,&l_3763,&l_1925[1]},{&l_3540,&l_3692[0][0][0],&l_3692[1][0][0],(void*)0},{&l_3740,&l_3692[1][0][0],&g_3785,&l_3692[0][0][0]}},{{(void*)0,&l_3745[0],(void*)0,&g_1397[2]},{&g_120,(void*)0,&l_3692[1][0][0],&l_3745[4]},{&l_3763,&l_3744,&l_3744,&g_5},{&g_1397[6],&g_1753,&l_3540,(void*)0},{&l_3692[1][0][0],&l_3528[1][1][5],&g_16,&g_1868[6][6][0]},{&g_120,&l_3744,&l_3743,(void*)0},{&g_1397[2],&g_1342,&l_3514,&l_3692[0][0][0]}}};
                        int i, j, k;
                        (*l_3529) = (safe_unary_minus_func_int32_t_s(((*g_3070) ^= ((void*)0 != &l_3610))));
                        (*l_3787) = func_46(&g_1545[0], l_3778, &g_1458[1], l_3693[1], (*l_3780));

                        ;
                    }
                }
            }
            l_3799++;
            for (g_2994 = 0; (g_2994 <= 6); g_2994 += 1)
            {
                unsigned short l_3810 = 65529UL;
                int *l_3816 = (void*)0;
                int l_3818 = 7L;
                int l_3820 = 0x0E7D2422L;
                unsigned ****l_3825 = &g_3589;
                unsigned short ***l_3835[4][10];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_3835[i][j] = &g_1063;
                }
                (*l_3577) = ((safe_mul_func_int8_t_s_s((((((((safe_rshift_func_int16_t_s_s(func_37((*l_3566), (g_3806 || (((*g_674) = l_3807) != (safe_mul_func_uint8_t_u_u((l_3810 , (0xC888L | (safe_mul_func_int16_t_s_s((-1L), ((safe_add_func_uint8_t_u_u(0x9CL, (l_3810 & func_37((*l_3566), g_3815, l_3816)))) != l_3817))))), l_3818)))), &l_3818), (**g_3690))) == l_3819[8][0][1]) , 0xE8L) == (-1L)) > 0xEAL) , (*l_3793)) || 0x672FF11CL), 0L)) , (*g_3015));
                ++l_3822[4];
                for (g_3364 = 0; (g_3364 <= 6); g_3364 += 1)
                {
                    int *l_3829 = (void*)0;
                    int l_3832 = (-1L);
                    (*g_63) = func_46(&l_3816, (***g_1400), &l_3529, ((*g_63) = func_41(((*l_3795) | func_37(func_41((*l_3577), (**g_3672), (l_3825 == (*g_3651)), (((safe_lshift_func_uint16_t_u_u(func_37(l_3828, l_3810, l_3829), (**g_1063))) , (*l_3529)) <= g_3830)), l_3831[0], l_3829)), (*l_3529), (*l_3828), g_1157)), l_3832);

                    ;
                    (*g_3070) |= ((*l_3794) = 1L);
                }
                for (l_3821 = 0; (l_3821 <= 6); l_3821 += 1)
                {
                    char l_3833 = 0xF1L;
                    if (((l_3833 , l_3834) != &g_673[0]))
                    {
                        int i, j;
                        (*g_1193) = g_666[g_2994][l_3821];
                    }
                    else
                    {
                        (*g_1734) = (void*)0;
                        (*l_3795) ^= (-8L);
                        (*g_2184) = 0x01118BDDL;
                        (*g_2184) |= (l_3835[3][1] == (*g_2723));
                    }
                }
            }
            if (((l_3838 = &l_3728) != ((safe_lshift_func_int16_t_s_s((*l_3828), (*g_3691))) , l_3852)))
            {
                char l_3859 = 0x5BL;
                int l_3860 = 0x78926D22L;
                unsigned l_3886[8] = {4294967295UL,0x811119F3L,4294967295UL,4294967295UL,0x811119F3L,4294967295UL,4294967295UL,0x811119F3L};
                int *l_3891 = &l_3797;
                int i;
                if ((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(9UL, (*g_3691))), (++(*l_3517)))))
                {
                    unsigned l_3874 = 9UL;
                    int **l_3879 = &l_3793;
                    if (l_3859)
                    {
                        unsigned char l_3861 = 0x24L;
                        unsigned **l_3870[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        char *l_3873 = &g_805[0];
                        int i;
                        --l_3861;
                        (*l_3790) |= ((safe_rshift_func_uint16_t_u_s((*l_3577), 1)) ^ l_3860);
                    }
                    else
                    {
                        unsigned char l_3885 = 0x9AL;
                        (*l_3828) |= (**l_3879);
                        l_3885 &= ((safe_rshift_func_uint8_t_u_s((**l_3879), 7)) , (l_3882[0][7] != g_3884));
                    }
                    ++l_3886[5];
                    (*l_3793) = ((**l_3848) <= (safe_mul_func_int16_t_s_s((**g_3690), ((safe_lshift_func_int8_t_s_s(l_3896[8], 7)) >= ((void*)0 == l_3897)))));
                    l_3898++;
                }
                else
                {
                    unsigned char l_3901 = 255UL;
                    (*g_1193) = (*g_943);
                    (*l_3529) = l_3901;
                }
                return (*g_2726);
            }
            else
            {
                unsigned l_3902[10] = {0x0D3FEB8AL,0x108C3065L,0x108C3065L,0x0D3FEB8AL,0UL,0x0D3FEB8AL,0x108C3065L,0x108C3065L,0x0D3FEB8AL,0UL};
                int i;
                l_3902[2]--;
                (*l_3793) = (*l_3577);
                for (g_2325 = (-28); (g_2325 >= 7); g_2325 = safe_add_func_int8_t_s_s(g_2325, 3))
                {
                    char l_3909 = 0L;
                    int l_3916[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_3916[i] = 0x5207E46DL;
                    for (g_3364 = 0; (g_3364 != (-28)); g_3364--)
                    {
                        l_3909 = (+(*g_2184));
                    }
                    for (l_3530 = 0; (l_3530 == 51); ++l_3530)
                    {
                        (*g_3015) = ((safe_mul_func_uint16_t_u_u((***g_1062), l_3909)) , (*g_3070));
                        l_3916[0] = (safe_rshift_func_uint8_t_u_s((0xF8C875A1L == (*l_3828)), 5));
                    }
                    if ((*l_3790))
                        continue;
                    (*g_3070) = (0x7915L && (*g_816));
                }
            }

            ;
        }
        (*g_2184) ^= (safe_mul_func_int16_t_s_s(((l_3919 == &g_2044) < (((**l_3848) , (safe_add_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((*l_3828) , (*l_3828)), (*g_3015))) , 1L), (**l_3848)))) , (*g_3691))), 1L));
    }
    else
    {
        int *l_3933 = (void*)0;
        char l_3934[8] = {1L,0x2DL,1L,1L,0x2DL,1L,1L,0x2DL};
        int l_3958 = 0x1E904A21L;
        int l_3987 = 1L;
        int l_3991 = 4L;
        unsigned short l_3996 = 1UL;
        unsigned **l_4007 = &g_328;
        int *l_4010 = &l_3987;
        int i;
        for (g_2442 = 0; (g_2442 < 17); g_2442 = safe_add_func_uint16_t_u_u(g_2442, 1))
        {
            char l_3936 = 0x6EL;
            int *l_3938 = &g_1868[9][1][0];
            int **l_3943 = &g_1458[4];
            int l_3986 = (-7L);
            int l_3988 = 5L;
            int l_3995 = 0x043F1E46L;
            int l_4016 = 1L;
            unsigned l_4017[6][6] = {{0xCFDCDD67L,1UL,0xCFDCDD67L,1UL,0xCFDCDD67L,1UL},{0xCFDCDD67L,1UL,0xCFDCDD67L,1UL,0xCFDCDD67L,1UL},{0xCFDCDD67L,1UL,0xCFDCDD67L,1UL,0xCFDCDD67L,1UL},{0xCFDCDD67L,1UL,0xCFDCDD67L,1UL,0xCFDCDD67L,1UL},{0xCFDCDD67L,1UL,0xCFDCDD67L,1UL,0xCFDCDD67L,1UL},{0xCFDCDD67L,1UL,0xCFDCDD67L,1UL,0xCFDCDD67L,1UL}};
            int i, j;
            if (((((*g_3691) |= (g_3932 != &l_3728)) || ((**g_2725) || func_37(((*g_3190) = l_3933), (((+func_37((*g_1734), (l_3937 = (+func_37(func_41((**g_3690), (l_3934[5] , g_3935[6]), (***g_672), g_1397[0]), l_3936, (*g_1734)))), l_3933)) ^ (*g_674)) <= 0xA5L), l_3938))) && (***g_672)))
            {
                int *l_3939 = &l_3740;
                unsigned *l_3944 = &g_136;
                l_3933 = l_3939;

                ;
                (*l_3529) = ((*l_3939) | ((safe_div_func_int16_t_s_s((*l_3939), func_37((l_3938 = l_3942), (*l_3529), func_46(l_3943, (*l_3939), &g_119, ((*g_63) = (*l_3943)), (*l_1332))))) <= (*g_110)));

                ;
                ;
                (*g_2184) ^= ((((((*l_3944) = (*l_3933)) && (((*l_3919) = (void*)0) != (void*)0)) & (**l_3848)) >= (((*g_3691) &= l_3945[3]) , (safe_add_func_int32_t_s_s((func_37((*g_3190), (*l_3938), (*g_1734)) & (*g_110)), 0xC77E0BEFL)))) , 0x79A95959L);
            }
            else
            {
                short l_3950 = 0L;
                int l_3985 = 0L;
                int l_3993 = 0L;
                unsigned short l_3999[10][9] = {{65529UL,8UL,1UL,8UL,0xCABEL,2UL,0x2483L,2UL,0xCABEL},{65535UL,0x49E2L,0UL,9UL,1UL,65535UL,0xCA95L,1UL,0x7A4CL},{65535UL,1UL,0x5E7FL,0xCABEL,65529UL,0xABA2L,0x441AL,0x441AL,0xABA2L},{1UL,0x2EB3L,9UL,0x2EB3L,1UL,1UL,0xAE14L,0UL,0UL},{0xAF24L,1UL,1UL,65535UL,0x7C3DL,1UL,0x2483L,0UL,0x2483L},{1UL,0UL,0UL,0UL,0UL,1UL,65535UL,1UL,1UL},{8UL,0x441AL,0UL,0x7C3DL,0x2483L,0xABA2L,8UL,9UL,9UL},{65535UL,65535UL,65529UL,0UL,65529UL,65535UL,65535UL,0UL,0x5C88L},{1UL,9UL,0xABA2L,0x15CCL,0x5E7FL,1UL,0x2483L,1UL,65535UL},{0UL,0xAE14L,0x5C88L,65535UL,65535UL,0x5C88L,0xAE14L,0UL,0UL}};
                unsigned char ****l_4008 = &g_1006;
                int i, j;
                (**l_3848) |= 1L;
                if (((*g_3015) ^= ((*l_3938) ^= (l_3933 != (**g_1400)))))
                {
                    char l_3951[4] = {0xE1L,0xE1L,0xE1L,0xE1L};
                    int *l_3962 = &g_1868[3][8][0];
                    int *l_3970 = &l_3514;
                    char *l_3975 = &g_805[0];
                    int ***l_3980 = &g_653;
                    unsigned l_3982 = 6UL;
                    char l_3989 = 0x2EL;
                    int l_3990 = 0xF9137877L;
                    int l_3992 = 1L;
                    int i;
                    for (g_2325 = 0; (g_2325 > (-25)); g_2325 = safe_sub_func_int16_t_s_s(g_2325, 7))
                    {
                        (*g_63) = func_46(&l_3938, l_3950, &l_3933, (*g_1734), ((l_3951[1] ^ (safe_mul_func_int8_t_s_s(l_3951[1], (*g_674)))) , (*g_2184)));

                        ;
                        if (l_3951[1])
                            break;
                    }
                    (*l_1332) = (0xA2CDL && (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u(l_3958, 1)) >= (*g_3932)), (func_37(l_3959[5][1], (safe_mul_func_uint8_t_u_u(l_3951[1], ((*l_3509) = 0x46L))), func_46(&g_64, (*l_3962), &l_3962, l_3962, (*g_3070))) & 0xFC8400A2L))));
                    for (g_3669 = 3; (g_3669 >= 0); g_3669 -= 1)
                    {
                        int i;
                        (**g_1734) ^= (l_3951[g_3669] && l_3951[g_3669]);
                    }
                    if (((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((+((*l_3942) = func_37(l_3970, ((*g_674) = (***g_672)), l_3933))) >= (*g_3932)) <= 1L), (*l_3970))), 8UL)) >= l_3950))
                    {
                        if ((*g_2184))
                            break;
                        if ((*g_2620))
                            continue;
                    }
                    else
                    {
                        int l_3981 = 2L;
                        int l_3994 = 0xD7DB2721L;
                        (*g_1193) = (*g_1047);
                        --l_3982;
                        --l_3996;
                        ++l_3999[6][7];
                    }
                }
                else
                {
                    unsigned short l_4009[9] = {65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL,65529UL};
                    short *l_4011 = &g_2901;
                    short *l_4012[6] = {&l_3610,&l_3846,&l_3610,&l_3610,&l_3846,&l_3610};
                    int i;
                    (*l_4010) &= ((safe_add_func_int32_t_s_s(((+((*l_3938) = (((*g_3691) = (*g_3691)) ^ (*g_110)))) || ((*l_3938) , l_3993)), func_37(((*l_3943) = (*l_3848)), (safe_add_func_int16_t_s_s(((**l_3848) = (((((*l_4011) = (l_4006 || func_37(func_41(l_3985, ((((((***g_3651) = (*g_3589)) == ((*g_1402) , l_4007)) , 18446744073709551606UL) , l_4008) == (void*)0), l_4009[1], g_2102), l_3950, l_4010))) & (*g_816)) <= 0xEF1D2BCEL) , l_3999[8][8])), 0x084DL)), (*g_3190)))) ^ l_4009[1]);
                }
            }

            ;
            for (g_625 = 0; (g_625 != 38); ++g_625)
            {
                if (l_4015)
                    break;
                l_4017[2][3]++;
            }
        }


        ;

        ;
        ;
    }


    ;




    ;

    ;



    ;
    ;
    ;
    return (**l_3848);


}







static int func_17(unsigned short p_18, unsigned char p_19)
{
    int ***l_3203 = &g_653;
    int *l_3206 = &g_1342;
    int l_3218 = (-3L);
    int l_3219 = 0xF7A588D8L;
    int l_3220 = 1L;
    char l_3255 = 0x16L;
    int l_3298 = (-1L);
    int l_3299 = 0xCA1A6F5AL;
    int l_3304 = 0x745D1222L;
    int l_3308[5][7][2] = {{{1L,0xA23698CBL},{0x6F409F9AL,0x33F255FDL},{(-6L),(-4L)},{0L,0x2CFB71BDL},{0x1AEF588AL,1L},{0xB9AA0C4BL,0xF6E6DCDBL},{0x33F255FDL,0x32ACB7CEL}},{{0xF58F5F49L,0x6F409F9AL},{0L,0x6F409F9AL},{0xF58F5F49L,0x32ACB7CEL},{0x33F255FDL,0xF6E6DCDBL},{0xB9AA0C4BL,1L},{0x1AEF588AL,0x2CFB71BDL},{0L,(-4L)}},{{(-6L),0x33F255FDL},{0x6F409F9AL,0xA23698CBL},{1L,0x0C161678L},{7L,7L},{(-1L),(-4L)},{0x0C161678L,(-6L)},{(-1L),0xE38F31BDL}},{{9L,(-1L)},{0x32ACB7CEL,(-9L)},{0x32ACB7CEL,(-1L)},{9L,0xE38F31BDL},{(-1L),(-6L)},{0x0C161678L,(-4L)},{(-1L),7L}},{{7L,0x0C161678L},{1L,0xA23698CBL},{0x6F409F9AL,0x33F255FDL},{(-6L),(-4L)},{0L,0x2CFB71BDL},{0x1AEF588AL,1L},{0xB9AA0C4BL,0xF6E6DCDBL}}};
    unsigned l_3315 = 0xC63B1BA3L;
    int *l_3326 = &l_3298;
    int *l_3330 = &l_3218;
    unsigned l_3374 = 0x808C739BL;
    unsigned short l_3381 = 0x516CL;
    unsigned char l_3387 = 0xFCL;
    int l_3392[2];
    int l_3394 = (-6L);
    unsigned short l_3399[3][10][8] = {{{65535UL,65533UL,0x9243L,0x63A6L,65529UL,0xBA65L,0x79F8L,0xBA65L},{6UL,65533UL,0x4A51L,65533UL,6UL,0x9243L,0xDE20L,1UL},{0x9243L,65529UL,6UL,8UL,0xBCDFL,0xC9DBL,65533UL,0x4A51L},{0x9243L,6UL,0xC9DBL,0xC9DBL,6UL,0x9243L,65535UL,65532UL},{65532UL,0x79F8L,0xDE20L,0xBCDFL,0x4A51L,65535UL,0x9243L,1UL},{0xDE20L,0xBA65L,1UL,0xBCDFL,1UL,0xBA65L,0xDE20L,65532UL},{6UL,1UL,8UL,0xC9DBL,65535UL,65532UL,0x63A6L,0x4A51L},{0xBCDFL,65533UL,65529UL,65535UL,65535UL,65529UL,65533UL,0xBCDFL},{6UL,0xBCDFL,0xBA65L,0x4A51L,1UL,65533UL,8UL,0x79F8L},{0xDE20L,0x9243L,6UL,65533UL,0x4A51L,65533UL,6UL,0x9243L}},{{65532UL,0xBCDFL,0x79F8L,65535UL,6UL,65529UL,1UL,6UL},{0x9243L,65533UL,65535UL,1UL,65532UL,65532UL,1UL,65535UL},{1UL,1UL,0x79F8L,65529UL,0xC9DBL,0xBA65L,6UL,0xDE20L},{0xC9DBL,0xBA65L,6UL,0xDE20L,8UL,65535UL,8UL,0xDE20L},{0xBA65L,0x79F8L,0xBA65L,65529UL,0x63A6L,0x9243L,0x79F8L,6UL},{0xBCDFL,65529UL,65532UL,0x4A51L,8UL,0xBA65L,0xBA65L,8UL},{0xBCDFL,6UL,6UL,0xBCDFL,0xBA65L,0x4A51L,1UL,65533UL},{0xC9DBL,0x9243L,0x4A51L,0x79F8L,6UL,0x63A6L,65533UL,0x63A6L},{65535UL,0x9243L,1UL,0x9243L,65535UL,0x4A51L,0xBCDFL,0xDE20L},{0x4A51L,6UL,65535UL,6UL,65535UL,0xBA65L,0x9243L,0x9243L}},{{65533UL,65529UL,65535UL,65535UL,65529UL,65533UL,0xBCDFL,65535UL},{65535UL,0x63A6L,1UL,0xDE20L,0x9243L,6UL,65533UL,0x4A51L},{1UL,0xC9DBL,0x4A51L,0xDE20L,0x4A51L,0xC9DBL,1UL,65535UL},{65529UL,0x4A51L,6UL,65535UL,6UL,65535UL,0xBA65L,0x9243L},{0xDE20L,0x79F8L,65532UL,6UL,6UL,65532UL,0x79F8L,0xDE20L},{65529UL,0xDE20L,0xC9DBL,0x9243L,0x4A51L,0x79F8L,6UL,0x63A6L},{1UL,65533UL,8UL,0x79F8L,0x9243L,0x79F8L,65535UL,0x4A51L},{65529UL,65535UL,65533UL,65532UL,8UL,6UL,0xDE20L,65535UL},{0x4A51L,0x9243L,0xC9DBL,0xDE20L,65529UL,65529UL,0xDE20L,0xC9DBL},{0xDE20L,0xDE20L,65533UL,6UL,0xBA65L,0x63A6L,65535UL,0xBCDFL}}};
    unsigned char ******l_3475 = &g_2044;
    short *l_3485 = (void*)0;
    short **l_3484 = &l_3485;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_3392[i] = 0xE088F08CL;
    if (((safe_rshift_func_int16_t_s_s(0x1238L, 14)) != (safe_mod_func_int16_t_s_s((safe_div_func_int16_t_s_s(((***g_1400) == ((0x00F01413L == ((safe_sub_func_uint16_t_u_u(((((*l_3206) = (safe_sub_func_uint32_t_u_u((l_3203 != l_3203), (func_37((*g_3190), (safe_lshift_func_int8_t_s_s((*g_674), 0)), l_3206) > 4L)))) , 0x49L) , p_19), p_19)) <= 0x548BL)) , p_18)), g_136)), p_18))))
    {
        int **l_3211[4][1][10] = {{{&g_3043[0],&g_3043[0],(void*)0,(void*)0,&g_3043[0],&g_3043[0],&g_3043[0],&g_3043[0],&g_3043[0],&g_3043[0]}},{{&g_3043[0],(void*)0,(void*)0,&g_3043[0],&g_3043[0],&g_3043[0],&g_3043[0],&g_3043[0],&g_3043[0],(void*)0}},{{&g_3043[0],&g_3043[0],&g_3043[0],(void*)0,&g_3043[0],&g_3043[0],(void*)0,&g_3043[0],&g_3043[0],&g_3043[0]}},{{&g_3043[0],(void*)0,&g_3043[0],&g_3043[0],&g_3043[0],&g_3043[0],(void*)0,&g_3043[0],&g_3043[0],(void*)0}}};
        unsigned short l_3217 = 7UL;
        unsigned char l_3256 = 0xB5L;
        unsigned *l_3266 = &g_1157;
        int l_3280 = 0x79BF27ACL;
        char ****l_3283 = &g_672;
        unsigned l_3291 = 4294967294UL;
        unsigned l_3329[8][1][5] = {{{0x5473F3F5L,18446744073709551615UL,0x65A4086CL,0x65A4086CL,18446744073709551615UL}},{{0x3757AC33L,0xF561DCFDL,0x18220247L,18446744073709551610UL,0x7767F1F5L}},{{0x5473F3F5L,18446744073709551615UL,0x65A4086CL,0x65A4086CL,18446744073709551615UL}},{{0x3757AC33L,0xF561DCFDL,0x18220247L,18446744073709551610UL,0x7767F1F5L}},{{0x5473F3F5L,18446744073709551615UL,0x65A4086CL,0x65A4086CL,18446744073709551615UL}},{{0x3757AC33L,0xF561DCFDL,0x18220247L,18446744073709551610UL,0x3757AC33L}},{{0x65A4086CL,0x5473F3F5L,0xBBE58759L,0xBBE58759L,0x5473F3F5L}},{{0x18220247L,18446744073709551615UL,1UL,1UL,0x3757AC33L}}};
        short *l_3331 = &g_1226;
        unsigned l_3370 = 0UL;
        unsigned l_3402 = 0xCC794AA8L;
        unsigned *l_3408 = (void*)0;
        short ****l_3422 = &g_2304;
        unsigned l_3434 = 0xD24FD5C7L;
        int i, j, k;
        (*l_3206) = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u((((0xAE5CL & p_19) && p_19) & (safe_unary_minus_func_uint32_t_u(p_18))), 15)), ((((safe_div_func_int16_t_s_s(((*l_3206) && ((*g_674) ^= ((*l_3206) , (*l_3206)))), (safe_add_func_uint16_t_u_u(((***g_1062) = (0x35L != 0x33L)), (-9L))))) , 0x1056L) , l_3217) > 1UL)));
        (*g_1734) = l_3206;
        g_3221++;
        for (g_1226 = 0; (g_1226 > (-9)); g_1226 = safe_sub_func_uint32_t_u_u(g_1226, 1))
        {
            int l_3226 = 0x9A8E7BE4L;
            unsigned short l_3245 = 0x77AEL;
            int **l_3264[6][6][7] = {{{&g_2184,(void*)0,(void*)0,(void*)0,&g_119,&g_1545[1],&g_64},{&g_3043[3],&g_3043[0],&g_119,&g_2184,&l_3206,&g_1458[4],&l_3206},{(void*)0,&g_1545[1],&g_1545[1],(void*)0,&g_119,&g_1545[1],&g_1458[1]},{&g_3015,&g_1458[1],(void*)0,&g_3043[0],&g_1458[1],&g_1545[1],&g_119},{(void*)0,&g_3043[0],&g_1545[1],&g_1458[4],&g_64,&l_3206,&g_1458[1]},{&g_3043[0],&g_1545[1],&g_119,&g_1458[1],&g_1458[1],&g_3043[3],&l_3206}},{{&g_1458[1],&g_2184,&g_64,&g_1458[2],(void*)0,(void*)0,&g_64},{(void*)0,&g_1545[1],&g_119,(void*)0,&g_1545[1],&g_1545[1],&g_64},{&g_1458[1],&g_1545[1],&g_3043[0],(void*)0,(void*)0,(void*)0,&g_1545[1]},{&l_3206,&g_2184,&g_1545[1],&g_1545[1],&g_1545[1],&g_1545[1],&g_2184},{&g_1458[1],&g_1545[1],&l_3206,&g_2184,&g_1545[1],&g_119,&g_1458[1]},{(void*)0,&g_3043[0],(void*)0,&g_1458[0],&g_119,(void*)0,&g_1545[1]}},{{&g_1458[1],&l_3206,&l_3206,(void*)0,&g_3043[0],&g_119,&g_1545[1]},{&g_2184,&g_1545[1],&g_3043[0],&g_119,&g_1545[1],(void*)0,&g_119},{&g_1545[1],(void*)0,(void*)0,&g_1545[1],&g_1458[1],&g_64,&g_2184},{&g_64,(void*)0,&g_1458[1],&l_3206,(void*)0,&g_64,(void*)0},{&g_64,&g_1458[1],&g_1458[1],(void*)0,&g_3043[0],(void*)0,(void*)0},{&l_3206,&g_1458[1],&g_1545[1],&g_1458[1],&l_3206,&g_119,(void*)0}},{{&g_1458[1],(void*)0,&g_1458[1],&g_3043[3],&g_1545[1],&g_1545[1],(void*)0},{&g_119,(void*)0,(void*)0,&g_1458[2],&g_1545[1],&g_1545[1],&g_1545[1]},{&g_1458[1],&g_3043[3],&g_1458[0],(void*)0,&l_3206,(void*)0,&g_1545[1]},{&l_3206,&g_1458[1],&g_1458[4],&g_119,&g_1458[1],&g_1545[1],(void*)0},{&g_64,&g_3043[0],&g_2184,&g_1545[1],&g_3043[3],&g_1545[1],&l_3206},{&g_64,&g_3043[0],&g_2184,&g_1545[1],&g_1545[1],(void*)0,&g_119}},{{&g_1545[1],&g_119,&g_1458[4],&g_1545[1],&l_3206,&g_1545[1],&g_1458[4]},{&g_2184,&g_2184,&g_1458[0],&l_3206,&g_3015,&g_1458[1],(void*)0},{&g_3043[0],&g_1545[1],&g_1545[1],&g_1458[1],(void*)0,&g_1458[1],&g_2184},{&g_1545[1],(void*)0,&g_3043[0],(void*)0,&g_119,&g_1545[1],&g_3015},{(void*)0,&g_1458[1],&g_2184,&g_119,&g_119,&l_3206,&g_64},{&g_3043[0],&g_119,(void*)0,&g_1545[1],&g_119,&g_119,(void*)0}},{{&g_1545[1],(void*)0,&g_119,&g_64,&l_3206,(void*)0,(void*)0},{&g_119,&g_1545[1],&g_1458[1],(void*)0,(void*)0,(void*)0,&g_64},{&l_3206,&g_1458[0],&g_2184,&g_2184,&g_1458[0],&l_3206,&g_3015},{&g_1458[2],&g_1458[1],&g_119,&g_64,(void*)0,&g_64,&g_2184},{&g_2184,&g_1458[4],&g_1545[1],&g_1458[1],(void*)0,&g_1458[1],(void*)0},{&g_1458[1],&g_1458[1],&g_1458[1],&l_3206,(void*)0,(void*)0,&g_1458[1]}}};
            unsigned *l_3278 = &g_203;
            int ***l_3286[4];
            short ****l_3367 = &g_2304;
            short l_3390 = 0x04B7L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_3286[i] = (void*)0;
            for (g_1740 = 0; (g_1740 <= 9); g_1740 += 1)
            {
                unsigned short ***l_3237[6][7] = {{&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,(void*)0,(void*)0},{&g_1063,(void*)0,&g_1063,&g_1063,(void*)0,(void*)0,(void*)0},{&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,(void*)0,&g_1063},{&g_1063,&g_1063,&g_1063,(void*)0,(void*)0,&g_1063,&g_1063},{(void*)0,&g_1063,&g_1063,&g_1063,(void*)0,&g_1063,&g_1063}};
                int l_3238 = 0L;
                int **l_3246 = &g_1458[1];
                unsigned *l_3257 = &g_136;
                unsigned *l_3258 = &g_203;
                unsigned ***l_3263[3];
                unsigned char l_3265[1];
                int l_3296 = 0x734966F4L;
                int l_3297 = 1L;
                int l_3303 = (-1L);
                int l_3309 = 0L;
                int l_3310 = 7L;
                int l_3311 = 0x35B5578CL;
                int l_3312 = 0x0CAFA96EL;
                int l_3313 = 0x65C766F9L;
                int l_3314 = 0x07600297L;
                int i, j;
                for (i = 0; i < 3; i++)
                    l_3263[i] = &g_1533;
                for (i = 0; i < 1; i++)
                    l_3265[i] = 8UL;
                (*g_3015) ^= ((p_19 < (*g_2726)) , 1L);
                (*g_2184) = ((0x0EL <= p_19) , (*l_3206));
                l_3226 = (safe_mul_func_int8_t_s_s((0xE7L | (((*l_3206) | (((safe_lshift_func_int16_t_s_s(p_19, (safe_mod_func_uint32_t_u_u(((*l_3258) = ((p_19 && l_3255) <= ((((*l_3206) | (*g_2620)) < ((*g_2184) = 1L)) | ((*l_3257) = func_37(&l_3220, l_3256, &l_3226))))), g_625)))) | 8L) , l_3245)) < 0x97L)), p_18));
                (*g_2184) = (p_18 > ((l_3265[0] , p_19) < 255UL));
                for (g_1823 = 0; (g_1823 <= 3); g_1823 += 1)
                {
                    unsigned *l_3268 = &g_1157;
                    unsigned **l_3267 = &l_3268;
                    int l_3273 = 0L;
                    int l_3279 = 2L;
                    unsigned short l_3293 = 0x6557L;
                    char l_3300 = 1L;
                    int l_3301 = 0xFE9EF38CL;
                    int l_3302[4][5][9] = {{{0xF3293132L,0L,0x47986C8EL,0xFD27D336L,4L,0xFC38AB33L,4L,0xFD27D336L,0x47986C8EL},{0x1823E264L,0xF70555E6L,0L,0x059C0111L,0xA0271808L,0xD74B8D48L,1L,(-1L),0xD354AD07L},{(-1L),0xAFA2EEC3L,0xFC38AB33L,0xB425F5CEL,1L,1L,0xB425F5CEL,0xFC38AB33L,0xAFA2EEC3L},{0L,0x9DA13B66L,0L,1L,0x586BD9BCL,0x059C0111L,0x1823E264L,0x6D8C90A6L,(-4L)},{0xFD27D336L,(-1L),0x47986C8EL,0xAFA2EEC3L,(-10L),0xAFA2EEC3L,0x47986C8EL,(-1L),0xFD27D336L}},{{0x586BD9BCL,0x9DA13B66L,0x6C0F3F58L,0xFCA9457BL,0x1823E264L,1L,0xD354AD07L,4L,0xF6641C50L},{0x4448CF4CL,0xAFA2EEC3L,0x74B1A596L,0xFC38AB33L,0xFC38AB33L,0x74B1A596L,0xAFA2EEC3L,0x4448CF4CL,(-1L)},{0x586BD9BCL,0xF70555E6L,0xD354AD07L,0x6816A348L,9L,0xCC5AFAA5L,(-4L),0xFCA9457BL,0x04C1C3ADL},{0xFD27D336L,0L,0xB425F5CEL,0x4448CF4CL,0xB425F5CEL,0xF3293132L,0xB425F5CEL,(-1L),0x4448CF4CL},{0L,(-3L),0x1823E264L,(-1L),0xF6641C50L,0x6D8C90A6L,(-3L),0xFCA9457BL,(-3L)}},{{0xAFA2EEC3L,0x74B1A596L,0xFC38AB33L,0xFC38AB33L,0x74B1A596L,0xAFA2EEC3L,0x4448CF4CL,(-1L),0xB425F5CEL},{0x04C1C3ADL,0xC7606873L,9L,0x6D8C90A6L,0L,0xD74B8D48L,0xF6641C50L,5L,0x6C0F3F58L},{0xFC38AB33L,(-1L),0xB425F5CEL,(-1L),0xFC38AB33L,(-10L),0x4448CF4CL,0xFD27D336L,0L},{0xA0271808L,5L,0x04C1C3ADL,4L,0x586BD9BCL,(-3L),(-3L),(-3L),0x586BD9BCL},{0x4448CF4CL,1L,1L,0x4448CF4CL,0L,(-10L),0xB425F5CEL,0xAFA2EEC3L,4L}},{{(-1L),0x059C0111L,0L,0xFCA9457BL,0xD354AD07L,0xD74B8D48L,0x6C0F3F58L,0xC30B7AA6L,0x04C1C3ADL},{0xF3293132L,0xDF70B666L,0xF3293132L,1L,0L,0xAFA2EEC3L,0L,0x47986C8EL,(-10L)},{9L,0x6816A348L,0xD354AD07L,0xF70555E6L,0x586BD9BCL,0x6D8C90A6L,0x586BD9BCL,0xF70555E6L,0xD354AD07L},{(-10L),(-10L),0xDF70B666L,1L,0xFC38AB33L,0xF3293132L,4L,0xB425F5CEL,1L},{(-3L),5L,0xA0271808L,(-1L),0x5601ECFBL,0x059C0111L,2L,0x6816A348L,0xF6641C50L}}};
                    int i, j, k;
                    if ((l_3266 != (g_3269 = ((*l_3267) = l_3206))))
                    {
                        unsigned l_3270 = 7UL;
                        (*g_3190) = &l_3238;

                        ;
                        l_3270 &= (*g_119);
                    }
                    else
                    {
                        l_3279 = (p_19 | (((safe_mod_func_int16_t_s_s(p_18, l_3273)) <= ((safe_lshift_func_uint16_t_u_u((***g_1062), ((safe_rshift_func_uint8_t_u_s((l_3278 == (void*)0), ((*g_674) = p_18))) , (g_2442--)))) >= (((void*)0 != (*g_1193)) <= 2UL))) , p_18));
                    }

                    ;
                    ;
                    if ((l_3283 == (void*)0))
                    {
                        (*g_3015) ^= 7L;
                    }
                    else
                    {
                        int ***l_3285 = (void*)0;
                        int ****l_3284[1][7][10] = {{{&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285},{&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285},{&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285},{&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285},{&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285},{&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285},{&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285,&l_3285}}};
                        unsigned short ****l_3288[5][1];
                        unsigned short *****l_3287 = &l_3288[0][0];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_3288[i][j] = (void*)0;
                        }
                        l_3279 = ((((*l_3278) = 0xFEAD361AL) , (((((l_3286[3] = &g_63) == (void*)0) | (((*l_3287) = (void*)0) == (void*)0)) , (((safe_lshift_func_uint8_t_u_u((*l_3206), 1)) < (l_3291 |= ((*l_3206) >= p_19))) > 0x8A0CL)) < p_19)) , p_19);
                        if ((*g_3070))
                            break;
                        (*l_3206) &= 0x38DAAFE1L;
                    }
                    if (p_18)
                    {
                        (*l_3206) = p_19;
                    }
                    else
                    {
                        int l_3292[8][2][8] = {{{(-1L),0xD5DDDF9CL,(-4L),(-1L),0x8179D24AL,(-3L),(-1L),0x18EE37AAL},{(-3L),0x8A43C81EL,0x63100BF3L,(-1L),0xD5DDDF9CL,3L,(-1L),0x18EE37AAL}},{{0xBC5730D3L,0xD5DDDF9CL,0xD5A84F07L,(-1L),0xB800EBF3L,(-3L),0x18EE37AAL,0x18EE37AAL},{3L,0x8A43C81EL,(-1L),(-1L),0x8A43C81EL,3L,0x08B493F9L,0x18EE37AAL}},{{(-1L),0xD5DDDF9CL,(-4L),(-1L),0x8179D24AL,(-3L),(-1L),0x18EE37AAL},{(-3L),0x8A43C81EL,0x63100BF3L,(-1L),0xD5DDDF9CL,3L,(-1L),0x18EE37AAL}},{{0xBC5730D3L,0xD5DDDF9CL,0xD5A84F07L,(-1L),0xB800EBF3L,(-3L),0x18EE37AAL,0x18EE37AAL},{3L,0x8A43C81EL,(-1L),(-1L),0x8A43C81EL,3L,0x08B493F9L,0x18EE37AAL}},{{(-1L),0xD5DDDF9CL,(-4L),(-1L),0x8179D24AL,(-3L),(-1L),0x18EE37AAL},{(-3L),0x8A43C81EL,0x63100BF3L,(-1L),0xD5DDDF9CL,3L,(-1L),0x18EE37AAL}},{{0xBC5730D3L,0xD5DDDF9CL,0xD5A84F07L,(-1L),0xB800EBF3L,(-3L),0x18EE37AAL,0x18EE37AAL},{3L,0x8A43C81EL,(-1L),(-1L),0x8A43C81EL,3L,0x08B493F9L,0x18EE37AAL}},{{(-1L),0xD5DDDF9CL,(-4L),(-1L),0x8179D24AL,(-3L),(-1L),0x18EE37AAL},{(-3L),0x8A43C81EL,0x63100BF3L,(-1L),0xD5DDDF9CL,3L,(-1L),0x18EE37AAL}},{{0xBC5730D3L,0xD5DDDF9CL,0xD5A84F07L,(-1L),0xB800EBF3L,(-3L),0x18EE37AAL,0x18EE37AAL},{3L,0x8A43C81EL,(-1L),(-1L),0x8A43C81EL,3L,0x08B493F9L,0x18EE37AAL}}};
                        int i, j, k;
                        ++l_3293;
                        --g_3305;
                        (*g_63) = &l_3218;

                        ;
                    }
                    --l_3315;
                }


            }


            if (p_19)
                continue;
            (*g_1734) = func_46(&g_119, ((((safe_rshift_func_int16_t_s_s(((*l_3206) = (safe_lshift_func_uint8_t_u_u((*l_3206), 0))), (safe_lshift_func_uint16_t_u_u(p_19, 0)))) & (1L | (safe_mul_func_uint16_t_u_u(p_19, (l_3211[1][0][5] == (((p_19 , p_19) , ((**g_1063) = (p_18 ^ p_18))) , l_3211[1][0][5])))))) >= p_19) < p_19), &g_3043[0], l_3326, (*l_3326));
            if ((p_19 & (((safe_add_func_uint32_t_u_u((p_19 || ((((p_19 , (*l_3326)) || p_19) <= p_19) , p_18)), p_19)) , l_3331) != (void*)0)))
            {
                int l_3342 = 1L;
                short ****l_3369 = &g_2304;
                if (p_18)
                    break;
                for (g_1280 = 0; (g_1280 >= 22); g_1280 = safe_add_func_int32_t_s_s(g_1280, 5))
                {
                    char *l_3352 = (void*)0;
                    short l_3355 = 0x3312L;
                    for (g_2134 = 0; (g_2134 <= 0); g_2134 += 1)
                    {
                        int *l_3351 = &g_1045;
                        unsigned char *l_3353 = (void*)0;
                        unsigned char *l_3354 = &g_906;
                        int i, j, k;
                        (*l_3330) = (g_1868[(g_2134 + 8)][(g_2134 + 8)][g_2134] = ((g_111[(g_2134 + 4)][g_2134][g_2134] <= g_111[(g_2134 + 4)][(g_2134 + 7)][(g_2134 + 1)]) && (safe_sub_func_int16_t_s_s(p_19, (+(safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s(p_19, g_68)) && (safe_rshift_func_uint8_t_u_s((((*l_3206) , g_111[(g_2134 + 4)][g_2134][g_2134]) & 250UL), l_3342))), p_18)))))));
                        (*l_3330) |= ((safe_add_func_uint32_t_u_u(((*l_3278) = (safe_mul_func_int16_t_s_s(0L, (*g_816)))), ((((((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_18, 12)), 2)) | (*l_3326)) , l_3351) == (void*)0) & (p_19 >= ((*l_3354) = (l_3352 == (void*)0)))) < l_3355))) || 0UL);
                    }
                    return p_18;



                }
                for (l_3220 = 0; (l_3220 <= 1); l_3220 += 1)
                {
                    short *****l_3368 = &l_3367;
                    int i;
                    if ((0x9AB3L <= (&l_3299 == (p_18 , ((4294967291UL >= ((*g_2184) = l_3342)) , (g_1545[l_3220] = &l_3298))))))
                    {
                        short *l_3365 = &g_2901;
                        int l_3366 = 0x30E917D9L;
                        int i;
                        g_1545[l_3220] = func_41(((**g_1400) == (void*)0), p_18, (safe_lshift_func_int16_t_s_u(((((*l_3330) &= (safe_add_func_uint16_t_u_u((((*g_674) > l_3342) || ((*l_3365) = (safe_mul_func_uint8_t_u_u((&g_2723 == (void*)0), ((safe_add_func_uint32_t_u_u(g_3364, 0xADBB0D1EL)) == p_18))))), l_3366))) || 0x4D7D8466L) , 1L), (*g_816))), p_18);
                        (*l_3326) ^= p_19;
                    }
                    else
                    {
                        (*l_3206) &= p_19;
                    }
                    (*l_3330) = ((p_19 = l_3342) && 0xACL);
                    (*l_3326) &= p_18;
                    (*g_2184) = ((((*l_3368) = l_3367) == l_3369) || (l_3370 |= l_3342));
                    for (g_1020 = 0; (g_1020 <= 0); g_1020 += 1)
                    {
                        int i, j, k;
                        (*g_2184) &= p_19;
                    }
                }
            }
            else
            {
                unsigned short l_3377 = 0xB840L;
                int **l_3386 = &g_2184;
                int l_3396 = 1L;
                int l_3397[1][10] = {{0L,0L,0L,0L,0L,0L,0L,0L,0L,0L}};
                unsigned l_3411 = 0xF940B0D9L;
                short ****l_3431 = &g_2304;
                int i, j;
                for (g_1020 = 0; (g_1020 < 10); g_1020 = safe_add_func_uint32_t_u_u(g_1020, 6))
                {
                    int l_3373 = 0xDC0909ACL;
                    int l_3380 = 0x3BF97733L;
                    int **l_3385 = &g_64;
                    int l_3393 = 0xB0D06067L;
                    int l_3395[6] = {(-1L),(-1L),1L,(-1L),(-1L),1L};
                    short l_3398 = 0L;
                    int i;
                    ++l_3374;
                    if (l_3377)
                    {
                        (*l_3326) = (safe_lshift_func_int16_t_s_s((g_656 = p_19), (l_3373 != 0xF2L)));
                        --l_3381;
                        if (p_19)
                            break;
                        (*g_1193) = (*g_665);
                    }
                    else
                    {
                        (*g_3190) = func_46(l_3385, p_19, l_3386, &l_3298, p_18);

                        ;
                        return p_18;



                    }
                    --l_3387;
                    for (g_1045 = 0; (g_1045 >= 0); g_1045 -= 1)
                    {
                        int l_3391[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_3391[i] = (-1L);
                        ++l_3399[0][9][3];
                        (**l_3386) &= p_19;
                        l_3391[1] = (-4L);
                        l_3402++;
                    }
                }
                for (l_3315 = 0; (l_3315 <= 0); l_3315 += 1)
                {
                    int *l_3405 = &l_3219;
                    (*g_63) = l_3405;

                    ;
                    (*l_3405) = ((func_37(&l_3299, ((p_18 >= (*l_3330)) , p_19), func_46((g_1728[3] = &l_3405), (*l_3405), &l_3405, (*l_3386), p_19)) == 0xA423L) <= p_18);


                    return (*g_3070);




                }
                for (g_1698 = 4; (g_1698 >= 0); g_1698 -= 1)
                {
                    int *l_3427[1][6] = {{&l_3219,&l_3219,&l_3226,&l_3219,&l_3219,&l_3226}};
                    int i, j;
                    g_12[g_1698] ^= (safe_div_func_int8_t_s_s(p_18, (safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(((4294967295UL < (safe_add_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((0x43L >= (!p_19)), (l_3422 != l_3367))), ((safe_mul_func_int16_t_s_s((**l_3386), (safe_add_func_uint16_t_u_u(((func_37(l_3427[0][2], (+(p_19 , 1L)), l_3427[0][2]) & (**l_3386)) != 0xDFBFL), (*l_3330))))) , p_19)))) , (*l_3330)), 1)) && 65535UL), 1))));
                    (*l_3326) ^= p_19;
                    for (p_18 = 0; (p_18 <= 1); p_18 += 1)
                    {
                        int l_3428 = (-1L);
                        short *****l_3429[5][2][9] = {{{&l_3422,&l_3422,&l_3367,&l_3367,&l_3367,(void*)0,&l_3367,&l_3367,&l_3367},{&l_3422,&l_3422,&l_3422,&l_3422,&l_3367,&l_3422,(void*)0,&l_3422,&l_3367}},{{&l_3422,&l_3367,&l_3367,&l_3422,&l_3422,&l_3367,(void*)0,&l_3367,(void*)0},{(void*)0,&l_3367,&l_3422,&l_3422,&l_3367,(void*)0,&l_3367,&l_3422,&l_3367}},{{&l_3367,&l_3367,&l_3367,&l_3422,&l_3422,&l_3367,&l_3367,&l_3367,&l_3422},{&l_3367,&l_3422,(void*)0,&l_3367,&l_3367,&l_3367,&l_3367,(void*)0,&l_3422}},{{&l_3422,&l_3367,(void*)0,&l_3422,&l_3367,&l_3367,&l_3367,&l_3367,(void*)0},{&l_3422,&l_3367,&l_3422,&l_3367,(void*)0,&l_3367,&l_3422,&l_3422,&l_3367}},{{&l_3422,&l_3367,&l_3367,&l_3367,&l_3422,(void*)0,&l_3367,&l_3367,&l_3367},{&l_3367,(void*)0,&l_3367,&l_3367,&l_3367,(void*)0,&l_3367,(void*)0,&l_3422}}};
                        int i, j, k;
                        (*l_3206) |= ((l_3428 | (((((*l_3326) &= p_18) , (((g_3430 = &g_2304) == l_3431) , (l_3428 <= ((((!(--(*l_3278))) , 0x39L) || p_18) , (-1L))))) | (**l_3386)) & (*g_1402))) >= p_18);

                        ;
                    }
                }
                (*l_3206) &= ((p_18 , l_3434) , (p_18 >= 3L));
            }
        }




        ;
        ;
    }
    else
    {
        int ***l_3443 = &g_3190;
        int ****l_3442 = &l_3443;
        unsigned short ***l_3483 = &g_1063;
        int l_3497 = (-5L);
        int l_3498 = (-1L);
        int l_3500 = (-10L);
        for (g_146 = 0; (g_146 <= 54); ++g_146)
        {
            char *l_3453 = &g_805[0];
            int *l_3465 = (void*)0;
            int l_3499 = (-3L);
            for (g_656 = (-23); (g_656 <= 0); g_656 = safe_add_func_uint32_t_u_u(g_656, 6))
            {
                unsigned char l_3448 = 0x34L;
                char **l_3454 = &g_674;
                int l_3462 = (-1L);
                int *l_3472 = &g_5;
                int l_3496 = 1L;
                for (g_906 = 0; (g_906 <= 0); g_906 += 1)
                {
                    unsigned l_3439[8][2] = {{4294967295UL,4294967295UL},{4294967295UL,0UL},{4294967295UL,4294967295UL},{4294967295UL,0UL},{4294967295UL,4294967295UL},{4294967295UL,0UL},{4294967295UL,4294967295UL},{4294967295UL,0UL}};
                    int i, j;
                    return l_3439[5][0];
                }
                if ((((safe_mul_func_uint8_t_u_u(0xC1L, (*l_3330))) < 65533UL) < (l_3442 != ((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((-1L), ((*l_3206) = l_3448))), (safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(p_19, (((*l_3454) = l_3453) != ((**g_1063) , (void*)0)))), 13)))) , (void*)0))))
                {
                    (*l_3330) ^= p_18;
                    return p_18;
                }
                else
                {
                    unsigned *l_3480 = (void*)0;
                    unsigned char l_3481 = 0x4DL;
                    for (g_606 = 0; (g_606 >= 1); ++g_606)
                    {
                        if (l_3448)
                            break;
                    }
                    for (l_3220 = 0; (l_3220 != 28); l_3220++)
                    {
                        unsigned char *l_3459[6] = {&l_3387,&l_3387,&l_3387,&l_3387,&l_3387,&l_3387};
                        int *l_3463 = (void*)0;
                        char *l_3464 = &l_3255;
                        int i;
                        l_3462 |= ((++p_19) && (p_19 , p_19));
                        (*g_3190) = (((func_37(l_3463, (l_3462 ^= ((*l_3464) &= ((*g_674) = 0xCCL))), l_3465) , (((p_19 , (0L && 3UL)) & ((((safe_add_func_uint8_t_u_u(((((--(*g_3269)) , func_37((***l_3442), (safe_add_func_int32_t_s_s((p_18 || 0xBE8883EBL), (*l_3206))), l_3472)) >= (***g_1400)) , 0xCBL), p_18)) , p_19) , p_18) <= p_19)) > p_19)) <= (*l_3330)) , l_3463);

                        ;
                        (*g_63) = (void*)0;

                        ;
                    }
                    if ((safe_lshift_func_int16_t_s_s(p_18, 0)))
                    {
                        (*l_3206) = ((void*)0 != l_3475);
                        return p_19;
                    }
                    else
                    {
                        unsigned short l_3482 = 5UL;
                        (*l_3206) &= (safe_rshift_func_int16_t_s_u((((((safe_add_func_int32_t_s_s((l_3480 == (l_3481 , func_46(&l_3330, (*l_3330), (**l_3442), (***l_3442), (p_18 > p_18)))), l_3482)) == 0L) , l_3481) == 0x0EBEL) == (-1L)), 15));
                    }
                }

                ;
                if (((((+(l_3483 != (void*)0)) != (((func_37((*g_3190), p_18, &l_3462) > ((p_19 > ((l_3484 != (*g_2304)) ^ p_18)) <= p_19)) != (*l_3206)) , (*l_3472))) , (*l_3472)) >= p_18))
                {
                    if (p_18)
                        break;
                    (*g_2184) = p_19;
                    return p_18;
                }
                else
                {
                    char l_3486 = 0L;
                    int l_3487 = 1L;
                    int *l_3488 = &g_1397[6];
                    int *l_3489 = &l_3304;
                    int *l_3490 = (void*)0;
                    int *l_3491 = &l_3308[0][3][1];
                    int *l_3492 = &l_3298;
                    int *l_3493 = &g_1280;
                    int *l_3494[5][4][10] = {{{&l_3308[0][3][1],&l_3462,(void*)0,(void*)0,(void*)0,&l_3462,&l_3308[0][3][1],&l_3304,&g_16,&g_1753},{&g_16,&l_3218,&l_3298,&g_1397[6],&g_1397[6],&l_3308[4][1][1],&l_3218,&g_120,&g_1868[6][6][0],&l_3304},{(void*)0,&l_3218,&g_1397[6],&g_120,&l_3218,&g_1397[6],&l_3308[0][3][1],&g_1753,&l_3218,&l_3218},{&g_1868[2][2][0],&l_3462,&l_3308[1][4][1],&l_3299,&l_3220,(void*)0,&l_3218,&l_3308[4][1][1],&g_1397[6],&l_3218}},{{&l_3308[2][0][0],&g_1397[6],&l_3308[0][3][1],(void*)0,&l_3298,&l_3308[4][6][1],(void*)0,&g_1397[6],&g_1280,&l_3308[0][3][1]},{&l_3308[3][3][0],&l_3308[1][4][1],(void*)0,(void*)0,(void*)0,&g_1868[2][2][0],&l_3487,&l_3220,&l_3218,&l_3218},{(void*)0,&g_16,&g_1397[6],&l_3308[2][0][0],&g_1342,&g_1342,&l_3308[2][0][0],&g_1397[6],&g_16,(void*)0},{&g_1397[6],&l_3308[3][3][0],&g_16,(void*)0,&l_3462,&g_1280,(void*)0,(void*)0,&l_3308[0][3][1],&g_1397[6]}},{{&l_3308[4][1][1],&g_16,&l_3218,&l_3308[3][3][0],&l_3462,&l_3218,&g_1397[6],&l_3308[4][1][1],&l_3218,(void*)0},{&l_3462,(void*)0,&g_1280,(void*)0,&g_1342,&g_120,(void*)0,&g_1397[6],&g_1397[6],&l_3218},{&g_1753,&l_3308[4][1][1],&g_1342,&g_1280,(void*)0,&g_1397[6],&g_120,(void*)0,&l_3462,&l_3308[0][3][1]},{&g_1397[6],&g_16,&g_5,(void*)0,&l_3298,&l_3218,(void*)0,&l_3462,&l_3299,&l_3220}},{{&l_3220,&l_3308[4][6][1],&g_120,(void*)0,(void*)0,&l_3308[0][3][1],&l_3220,&l_3308[0][3][1],(void*)0,(void*)0},{&g_1397[6],&g_1397[6],&g_1397[6],&g_1280,&l_3220,(void*)0,&g_120,&l_3308[3][3][0],(void*)0,&g_1280},{&l_3308[4][1][1],&l_3304,&l_3462,(void*)0,&l_3220,&l_3308[0][3][1],&l_3220,&l_3308[3][3][0],&l_3308[0][3][1],&l_3487},{&l_3298,&l_3308[0][3][1],&g_1280,&l_3298,(void*)0,(void*)0,&l_3220,&g_16,&l_3308[0][3][1],&l_3220}},{{&g_1342,&l_3308[4][1][1],&g_1753,&g_120,&l_3308[2][0][0],&l_3308[4][6][1],&l_3308[0][3][1],&l_3487,&g_1280,(void*)0},{&g_16,&g_1868[6][6][0],&g_1753,&l_3304,(void*)0,&l_3308[2][2][1],&l_3308[1][4][1],&g_16,&l_3308[0][3][1],(void*)0},{&l_3487,&l_3308[0][3][1],&g_120,(void*)0,&g_16,&g_1397[6],&l_3308[2][0][0],&g_1342,&g_1342,&l_3308[2][0][0]},{&g_16,&g_16,&l_3308[4][6][1],&l_3308[4][6][1],&g_16,&g_16,&g_1397[6],&l_3298,&g_1397[6],(void*)0}}};
                    unsigned l_3501 = 18446744073709551615UL;
                    int i, j, k;
                    if ((*l_3326))
                        break;
                    l_3486 |= (-1L);
                    --l_3501;
                    return p_19;
                }
            }
            (*l_3326) = (*l_3206);
        }

        ;
    }



    ;

    ;
    ;
    return p_18;



}







static unsigned char func_21(int ** p_22)
{
    short l_2452 = 0xB74EL;
    unsigned char *l_2455 = (void*)0;
    unsigned l_2460[4][8][7] = {{{8UL,1UL,4294967289UL,1UL,8UL,0x40615929L,1UL},{4294967286UL,0UL,1UL,5UL,6UL,1UL,0xB7A55C27L},{7UL,0xA39B297EL,4294967293UL,4294967293UL,0xA39B297EL,7UL,9UL},{4294967286UL,5UL,0x0CADC8A0L,4294967286UL,0xB7A55C27L,0xAB657D9DL,5UL},{8UL,0x0B9BBFD0L,7UL,0x2869D51EL,0x40615929L,4294967294UL,9UL},{1UL,1UL,0xAB657D9DL,4294967293UL,0UL,1UL,4294967293UL},{7UL,4294967293UL,1UL,0x0B9BBFD0L,0x0B9BBFD0L,1UL,4294967293UL},{1UL,1UL,0xAB657D9DL,1UL,1UL,4294967293UL,0x83CBF82EL}},{{4294967290UL,0x0B9BBFD0L,0x40615929L,4294967290UL,4294967293UL,4294967290UL,0x40615929L},{0UL,0UL,0x945F59C7L,1UL,1UL,0xB7A55C27L,0UL},{9UL,0x40615929L,4294967287UL,0x0B9BBFD0L,4294967294UL,4294967294UL,0x0B9BBFD0L},{0x0CADC8A0L,0x83CBF82EL,0x0CADC8A0L,4294967293UL,1UL,0x0CADC8A0L,1UL},{0x0B9BBFD0L,4294967293UL,0UL,1UL,4294967293UL,8UL,4294967293UL},{6UL,4294967293UL,4294967293UL,6UL,1UL,0x0CADC8A0L,1UL},{4294967294UL,9UL,0x40615929L,4294967287UL,0x0B9BBFD0L,4294967294UL,4294967294UL},{0UL,1UL,4294967286UL,1UL,0UL,0xB7A55C27L,1UL}},{{7UL,4294967289UL,4294967290UL,0x0B9BBFD0L,0x40615929L,4294967290UL,4294967293UL},{4294967293UL,0x83CBF82EL,0xAB657D9DL,0xAB657D9DL,0x83CBF82EL,4294967293UL,1UL},{7UL,1UL,0UL,4294967293UL,0x0B9BBFD0L,0x2869D51EL,1UL},{6UL,0x0CADC8A0L,0xAB657D9DL,0UL,0xAB657D9DL,0x0CADC8A0L,6UL},{4294967290UL,1UL,4294967294UL,4294967287UL,7UL,4294967290UL,4294967287UL},{0x83CBF82EL,1UL,0x6686EC9CL,1UL,1UL,0x6686EC9CL,1UL},{1UL,0x40615929L,4294967294UL,9UL,0x40615929L,4294967287UL,0x0B9BBFD0L},{1UL,1UL,0xAB657D9DL,1UL,1UL,1UL,0xAB657D9DL}},{{7UL,7UL,0UL,9UL,1UL,1UL,7UL},{6UL,0xAB657D9DL,1UL,1UL,0x0CADC8A0L,0x0CADC8A0L,1UL},{4294967289UL,0x0B9BBFD0L,4294967289UL,4294967287UL,1UL,4294967289UL,0x40615929L},{1UL,1UL,0xB7A55C27L,0UL,1UL,4294967286UL,1UL},{4294967293UL,4294967287UL,4294967287UL,4294967293UL,0x40615929L,4294967289UL,1UL},{0x0CADC8A0L,6UL,0xAB657D9DL,1UL,1UL,0x0CADC8A0L,0x0CADC8A0L},{7UL,1UL,0xA39B297EL,1UL,7UL,1UL,1UL},{0x83CBF82EL,4294967293UL,1UL,1UL,0xAB657D9DL,1UL,1UL}}};
    int l_2470 = (-1L);
    unsigned short l_2482[10];
    int l_2511 = 4L;
    int l_2521 = 0xB3211351L;
    int l_2523 = 0L;
    int l_2525 = 0x2067E191L;
    int l_2526 = 0xAE9E523FL;
    int l_2527[4][5] = {{0x4BEEB5E3L,0xF03B03ECL,0x1D448770L,0x1D448770L,0xF03B03ECL},{0x82F4A48FL,0x851BE1B8L,0x8C138AA3L,0x8C138AA3L,0x851BE1B8L},{0x4BEEB5E3L,0xF03B03ECL,0x1D448770L,0x1D448770L,0xF03B03ECL},{0x82F4A48FL,0x851BE1B8L,0x8C138AA3L,0x8C138AA3L,0x851BE1B8L}};
    unsigned l_2543 = 4294967288UL;
    unsigned l_2546[1];
    short l_2563 = 0xDE4DL;
    unsigned l_2588 = 1UL;
    unsigned l_2591 = 0x0C329AC8L;
    unsigned char ****l_2683 = &g_1006;
    char ****l_2686 = (void*)0;
    unsigned short l_2716 = 65526UL;
    int **l_2721[3][8][7] = {{{&g_64,&g_1545[0],&g_1545[0],&g_64,&g_1545[0],(void*)0,&g_119},{&g_64,(void*)0,&g_119,&g_64,&g_1545[1],&g_1545[1],&g_1545[1]},{&g_64,(void*)0,&g_1545[0],&g_2184,&g_1545[0],(void*)0,&g_119},{&g_1545[1],(void*)0,(void*)0,&g_64,&g_1545[1],&g_1545[1],&g_1545[1]},{&g_64,&g_1545[0],&g_1545[0],&g_64,&g_1545[0],(void*)0,&g_119},{&g_64,(void*)0,&g_119,&g_64,&g_1545[1],&g_1545[1],&g_1545[1]},{&g_64,(void*)0,&g_1545[0],&g_2184,&g_1545[0],(void*)0,&g_119},{&g_1545[1],(void*)0,(void*)0,&g_64,&g_1545[1],&g_1545[1],&g_1545[1]}},{{&g_64,&g_1545[0],&g_1545[0],&g_64,&g_1545[0],(void*)0,&g_119},{&g_64,(void*)0,&g_119,&g_64,&g_1545[1],&g_1545[1],&g_1545[1]},{&g_64,(void*)0,&g_1545[0],&g_2184,&g_119,(void*)0,&g_1458[1]},{(void*)0,&g_64,&g_1545[1],&g_119,&g_1458[0],(void*)0,&g_1458[0]},{&g_1545[1],&g_2184,&g_2184,&g_1545[1],&g_119,&g_1545[0],&g_1458[1]},{&g_119,&g_64,&g_64,&g_119,&g_1545[1],(void*)0,&g_1545[1]},{&g_1545[1],&g_64,&g_2184,&g_1545[1],&g_119,(void*)0,&g_1458[1]},{(void*)0,&g_64,&g_1545[1],&g_119,&g_1458[0],(void*)0,&g_1458[0]}},{{&g_1545[1],&g_2184,&g_2184,&g_1545[1],&g_119,&g_1545[0],&g_1458[1]},{&g_119,&g_64,&g_64,&g_119,&g_1545[1],(void*)0,&g_1545[1]},{&g_1545[1],&g_64,&g_2184,&g_1545[1],&g_119,(void*)0,&g_1458[1]},{(void*)0,&g_64,&g_1545[1],&g_119,&g_1458[0],(void*)0,&g_1458[0]},{&g_1545[1],&g_2184,&g_2184,&g_1545[1],&g_119,&g_1545[0],&g_1458[1]},{&g_119,&g_64,&g_64,&g_119,&g_1545[1],(void*)0,&g_1545[1]},{&g_1545[1],&g_64,&g_2184,&g_1545[1],&g_119,(void*)0,&g_1458[1]},{(void*)0,&g_64,&g_1545[1],&g_119,&g_1458[0],(void*)0,&g_1458[0]}}};
    int l_2736 = 0x84F6A5DCL;
    int l_2741 = 0xF5BF2E6BL;
    int l_2742 = 1L;
    int l_2743 = 0x86570CFEL;
    short ****l_2749 = &g_2304;
    unsigned short l_2751 = 1UL;
    int *l_2765 = &l_2511;
    char l_2775[7][6] = {{0L,(-1L),0xF3L,0x57L,0x57L,0xF3L},{0x7BL,0x7BL,0x57L,0L,0x57L,0x7BL},{0x57L,(-1L),0L,0L,(-1L),0x57L},{0x7BL,0x57L,0L,0x57L,0x7BL,0x7BL},{0xF3L,0x57L,0x57L,0xF3L,(-1L),0xF3L},{0xF3L,(-1L),0xF3L,0x57L,0x57L,0xF3L},{0x7BL,0x7BL,0x57L,0L,0x57L,0x7BL}};
    unsigned char ******l_2782[8][6] = {{&g_2044,&g_2044,(void*)0,&g_2044,&g_2044,&g_2044},{&g_2044,&g_2044,&g_2044,&g_2044,&g_2044,(void*)0},{&g_2044,&g_2044,&g_2044,&g_2044,&g_2044,&g_2044},{&g_2044,&g_2044,(void*)0,&g_2044,&g_2044,&g_2044},{&g_2044,&g_2044,&g_2044,&g_2044,&g_2044,(void*)0},{&g_2044,&g_2044,&g_2044,&g_2044,&g_2044,&g_2044},{&g_2044,&g_2044,(void*)0,&g_2044,&g_2044,&g_2044},{&g_2044,&g_2044,&g_2044,&g_2044,&g_2044,(void*)0}};
    unsigned ***l_2848 = &g_1533;
    int ***l_2869 = (void*)0;
    unsigned short l_2970[7] = {0x157EL,0UL,0UL,0x157EL,0UL,0UL,0x157EL};
    short *l_2974 = &g_2901;
    unsigned l_2990 = 0xD662E902L;
    unsigned l_3062 = 0x25BB6234L;
    int l_3080[10];
    char l_3090 = 0L;
    int *l_3166 = &g_16;
    char l_3180 = (-3L);
    unsigned l_3191 = 0xC24DDBE7L;
    int *l_3192 = (void*)0;
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_2482[i] = 1UL;
    for (i = 0; i < 1; i++)
        l_2546[i] = 0UL;
    for (i = 0; i < 10; i++)
        l_3080[i] = 1L;
    if (l_2452)
    {
        unsigned short l_2456 = 0UL;
        int *l_2457 = &g_1397[6];
        unsigned l_2461 = 4294967290UL;
        char **l_2475 = &g_674;
        unsigned char l_2493[1];
        int l_2520[5] = {0x6D728660L,0x6D728660L,0x6D728660L,0x6D728660L,0x6D728660L};
        char l_2532[4];
        unsigned char ****l_2557 = &g_1006;
        short ***l_2611 = &g_1477;
        int l_2632 = 0x80FD3994L;
        unsigned char l_2754 = 249UL;
        int i;
        for (i = 0; i < 1; i++)
            l_2493[i] = 252UL;
        for (i = 0; i < 4; i++)
            l_2532[i] = 0x75L;
        if (((safe_mod_func_int8_t_s_s((((void*)0 != l_2455) , l_2456), (((**g_1063) &= ((((*g_2184) = (l_2456 , (!((9L & l_2452) | 0x577D8B59L)))) == l_2460[1][2][3]) <= l_2452)) || (***g_1062)))) ^ l_2461))
        {
            int l_2467 = (-8L);
            int *l_2468 = &g_1342;
            int l_2518[2][4] = {{(-10L),(-10L),(-10L),(-10L)},{(-10L),(-10L),(-10L),(-10L)}};
            int *l_2545 = &g_784;
            int **l_2544 = &l_2545;
            int l_2550 = (-10L);
            int i, j;
            for (g_1823 = 0; (g_1823 <= 8); g_1823 += 1)
            {
                short l_2464[9][9][3] = {{{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L}},{{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL}},{{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L},{0x95F3L,3L,0x8D8DL},{0x28FEL,0x28FEL,2L}},{{0x95F3L,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L}},{{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL}},{{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L}},{{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL}},{{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L}},{{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL},{0x915BL,1L,0x95F3L},{0x76D7L,0x76D7L,0x28FEL}}};
                int **l_2486 = &g_119;
                int l_2488 = 0xDA51394BL;
                int l_2517[2];
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_2517[i] = 0xBF0411ADL;
                for (g_1045 = 0; (g_1045 <= 2); g_1045 += 1)
                {
                    int *l_2469 = &g_5;
                    short l_2483 = 0x442CL;
                    int i, j;
                    l_2470 = (g_1812[g_1823] , (g_3[(g_1045 + 3)][(g_1045 + 1)] ^ (func_37(((*l_2457) , ((*g_63) = func_46(&g_1458[1], g_1812[g_1823], (((l_2464[3][8][2] >= l_2464[3][8][2]) | (g_1812[g_1823] < (safe_div_func_int32_t_s_s(l_2467, 4294967289UL)))) , p_22), l_2468, l_2464[3][8][2]))), (*l_2457), l_2469) < (*l_2469))));

                    ;
                    (*p_22) = l_2468;
                    for (g_2442 = 0; (g_2442 <= 8); g_2442 += 1)
                    {
                        unsigned *l_2484 = (void*)0;
                        unsigned *l_2485 = &l_2461;
                        int *l_2487 = (void*)0;
                        int *l_2489 = &g_1868[6][6][0];
                        int *l_2490 = &g_1342;
                        int *l_2491 = &l_2470;
                        int *l_2492[9][7][3] = {{{(void*)0,(void*)0,&g_1280},{(void*)0,&g_1397[6],&g_1342},{(void*)0,&g_1342,&l_2470},{&g_5,&g_1342,(void*)0},{&g_1753,&g_1397[6],&l_2488},{(void*)0,(void*)0,&g_1397[6]},{&l_2488,&l_2470,&g_1868[6][6][0]}},{{&g_16,&g_1868[6][6][0],&g_1397[6]},{&g_5,&g_1342,&g_1753},{&l_2488,&g_120,&l_2470},{&g_1342,&g_1342,&g_16},{&g_1868[6][6][0],&g_1868[6][6][0],&g_1342},{&g_1753,&g_1397[6],(void*)0},{&g_5,&g_1753,&l_2488}},{{(void*)0,&g_1868[6][6][0],&l_2488},{&l_2470,&g_5,&l_2488},{(void*)0,&g_16,(void*)0},{&g_1342,&l_2470,&g_1342},{&g_120,&g_120,&g_16},{&g_1397[6],(void*)0,&g_120},{(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_1397[6],&g_1868[6][6][0]},{&l_2488,&l_2488,&g_5},{(void*)0,&l_2488,&l_2470},{&g_1342,&g_1342,&g_1397[6]},{&l_2488,&g_120,&g_1753},{&g_1753,&g_16,&g_1868[7][7][0]},{&g_1753,&g_5,&g_1342}},{{&l_2488,&l_2470,&l_2488},{&g_1342,&g_1280,&g_1342},{(void*)0,&g_120,&g_1868[8][7][0]},{&l_2488,&g_1280,&g_1397[5]},{(void*)0,&g_1280,&g_1342},{(void*)0,&l_2488,&g_1397[6]},{&g_1397[6],&l_2470,&l_2470}},{{&g_120,(void*)0,&g_1753},{&g_1342,(void*)0,&l_2470},{(void*)0,(void*)0,&g_1342},{&l_2470,&g_1397[6],&g_5},{(void*)0,(void*)0,&l_2488},{&g_5,(void*)0,&g_1868[6][6][0]},{&g_1753,(void*)0,&g_120}},{{&g_1342,&g_1397[6],&l_2470},{&g_5,(void*)0,&l_2470},{&g_1342,&g_1868[6][6][0],&g_1342},{(void*)0,&g_1342,&g_120},{(void*)0,&g_1397[6],&l_2488},{&g_120,&l_2488,&g_5},{&l_2488,(void*)0,(void*)0}},{{&l_2488,(void*)0,&g_1868[7][7][0]},{(void*)0,&g_1753,&g_1868[7][7][0]},{&g_1868[6][6][0],&g_1342,(void*)0},{&g_16,&l_2470,&g_5},{&g_1868[3][5][0],&g_120,&l_2488},{(void*)0,&g_120,&g_120},{(void*)0,&g_1753,&g_1342}},{{&l_2488,&g_1280,&l_2470},{&g_1342,(void*)0,&l_2470},{&g_120,&l_2470,&g_120},{&l_2470,&l_2488,&g_1753},{&g_1342,&l_2488,&l_2488},{(void*)0,&l_2470,(void*)0},{&l_2470,&g_1753,&g_16}}};
                        int i, j, k;
                        (*l_2457) = (*l_2457);
                        l_2493[0]--;
                        return (*l_2469);
                    }
                }
                (*g_63) = &l_2470;

                ;
                for (g_574 = 1; (g_574 <= 9); g_574 += 1)
                {
                    int *l_2501 = (void*)0;
                    int l_2506 = 0x931D0723L;
                    int l_2516 = 3L;
                    int l_2519 = 1L;
                    int l_2522 = 0xB6F8548EL;
                    int l_2524 = 0xDFF00E8FL;
                    int l_2528 = 0x15A5D2D1L;
                    int l_2529 = 0x5D32A2C6L;
                    int l_2530 = (-2L);
                    int l_2531 = (-1L);
                    int l_2533[1][9][7] = {{{0L,0L,0L,0L,0L,0L,0L},{6L,0xF4F0B5BBL,6L,0xF4F0B5BBL,6L,0xF4F0B5BBL,6L},{0L,0L,0L,0L,0L,0L,0L},{6L,0xF4F0B5BBL,6L,0xF4F0B5BBL,6L,0xF4F0B5BBL,6L},{0L,0L,0L,0L,0L,0L,0L},{6L,0xF4F0B5BBL,6L,0xF4F0B5BBL,6L,0xF4F0B5BBL,6L},{0L,0L,0L,0L,0L,0L,0L},{6L,0xF4F0B5BBL,6L,0xF4F0B5BBL,6L,0xF4F0B5BBL,6L},{0L,0L,0L,0L,0L,0L,0L}}};
                    unsigned char l_2534[8][7] = {{0xC5L,5UL,3UL,0x44L,0x44L,3UL,5UL},{249UL,0xAFL,255UL,0x61L,0x61L,255UL,0xAFL},{0xC5L,5UL,3UL,0x44L,0x44L,3UL,5UL},{249UL,0xAFL,255UL,0x61L,0x61L,255UL,0xAFL},{0xC5L,5UL,3UL,0x44L,0x44L,3UL,5UL},{249UL,0xAFL,255UL,0x61L,0x61L,255UL,0xAFL},{0xC5L,5UL,3UL,0x44L,0x44L,3UL,5UL},{249UL,0xAFL,255UL,0x61L,0x61L,255UL,0xAFL}};
                    int i, j, k;
                    (*g_1734) = ((*g_63) = (void*)0);

                    ;
                    for (g_1280 = 0; (g_1280 <= 9); g_1280 += 1)
                    {
                        short ****l_2496 = &g_2304;
                        (*g_2184) = ((void*)0 == l_2496);
                    }
                    for (l_2456 = 0; (l_2456 <= 6); l_2456 += 1)
                    {
                        int l_2512 = 1L;
                        int *l_2513 = &g_1342;
                        int *l_2514 = &g_1868[6][6][0];
                        int *l_2515[6][5] = {{(void*)0,(void*)0,&g_120,(void*)0,&g_120},{(void*)0,(void*)0,&g_120,(void*)0,(void*)0},{&g_16,&g_16,(void*)0,(void*)0,(void*)0},{&g_16,&g_16,(void*)0,(void*)0,(void*)0},{&g_16,&g_16,(void*)0,(void*)0,(void*)0},{&g_16,&g_16,(void*)0,(void*)0,(void*)0}};
                        int i, j;
                        l_2470 |= (safe_sub_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(g_1812[g_574], (*l_2468))), ((*l_2468) != func_37(l_2501, (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((void*)0 != &g_1477), 8)), ((l_2506 == func_37((*g_63), ((safe_sub_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(l_2464[3][3][0], 251UL)) , (*l_2457)) , l_2452), l_2511)) ^ 0x546C2F95L), l_2457)) ^ (**g_1063)))), &l_2470))));
                        g_1458[l_2456] = l_2457;
                        (*l_2457) = l_2482[5];
                        l_2534[2][0]++;
                    }
                }

                ;
                (*l_2457) = g_1812[(g_1823 + 1)];
                for (g_1045 = 0; (g_1045 <= 9); g_1045 += 1)
                {
                    int *l_2547 = &g_1868[6][6][0];
                    int i;
                    (*l_2468) ^= (safe_rshift_func_uint8_t_u_s(g_1812[g_1823], l_2546[0]));
                    (*g_1734) = l_2547;
                    g_2553[0] ^= (((*l_2468) = ((g_136 = l_2517[1]) >= ((*l_2457) = (safe_sub_func_uint8_t_u_u(((*l_2547) = l_2550), (*l_2468)))))) , (safe_mul_func_uint8_t_u_u((*l_2457), ((*l_2457) ^ (*l_2457)))));
                }
            }



        }
        else
        {
            short *l_2554 = &g_2325;
            unsigned char ****l_2558[6] = {&g_1006,&g_1006,&g_1006,&g_1006,&g_1006,&g_1006};
            int l_2560 = 3L;
            int l_2562 = 1L;
            int l_2564[3];
            unsigned char l_2670 = 0x17L;
            unsigned short ***l_2728 = &g_1063;
            unsigned short ****l_2727[6][3] = {{(void*)0,(void*)0,(void*)0},{&l_2728,&l_2728,&l_2728},{(void*)0,(void*)0,(void*)0},{&l_2728,&l_2728,&l_2728},{(void*)0,(void*)0,(void*)0},{&l_2728,&l_2728,&l_2728}};
            unsigned char l_2744 = 0x9BL;
            int l_2768 = 0xBBD39D8AL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_2564[i] = 0L;
            if (((((*l_2554) = ((void*)0 != (*g_1006))) , (-1L)) > (g_653 == (void*)0)))
            {
                char l_2559 = 0x74L;
                int l_2561 = 0xD2A4FC66L;
                int l_2565 = 0L;
                int l_2566 = 1L;
                int l_2567 = 0x78493871L;
                int l_2587 = (-1L);
                short ***l_2608 = &g_1477;
                int ***l_2649 = &g_653;
                unsigned short *l_2650 = &g_1505[3];
                unsigned l_2654[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_2654[i] = 0x99E42F82L;
                if (((*g_2184) = (safe_sub_func_uint32_t_u_u((*g_1402), ((0x5DL || ((*l_2457) != l_2560)) && l_2564[2])))))
                {
                    int l_2573 = (-7L);
                    int *l_2582 = (void*)0;
                    int l_2585 = 0L;
                    int l_2586[9] = {0L,0xD27FBD2BL,0L,0xD27FBD2BL,0L,0xD27FBD2BL,0L,0xD27FBD2BL,0L};
                    int i;
                    for (g_1753 = 28; (g_1753 < (-9)); g_1753--)
                    {
                        if (l_2573)
                            break;
                    }
                    if (((l_2573 > ((!(safe_sub_func_uint16_t_u_u((**g_1063), (*l_2457)))) < ((((safe_sub_func_uint8_t_u_u((*l_2457), 0L)) || (safe_mul_func_uint8_t_u_u(func_37(&l_2511, l_2573, l_2582), l_2527[1][4]))) && (***g_1062)) , (-1L)))) && l_2564[1]))
                    {
                        return (*l_2457);
                    }
                    else
                    {
                        int *l_2583 = (void*)0;
                        int *l_2584[8] = {&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120,&g_120};
                        int i;
                        l_2588--;
                        l_2591--;
                        l_2565 = (((*l_2457) = l_2470) | ((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s(0UL, (safe_rshift_func_uint16_t_u_s((**g_1063), 9)))) || ((((*g_1402) <= (safe_sub_func_uint8_t_u_u((!((((safe_div_func_uint8_t_u_u(l_2482[5], (-1L))) | (((*l_2554) = (+l_2546[0])) < 0x81A5L)) & (9UL | l_2564[0])) , l_2591)), l_2526))) , l_2511) < l_2561)), l_2566)) != l_2511), l_2565)) >= 255UL));
                        (*g_2184) ^= l_2521;
                    }
                    for (g_68 = 0; (g_68 <= 8); g_68 += 1)
                    {
                        short ****l_2609 = &l_2608;
                        short ****l_2610[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int *l_2618 = &g_1397[4];
                        int *l_2619 = &g_1868[5][3][0];
                        int i;
                        (*g_2184) = 0xA4232B04L;
                        (*l_2457) = l_2586[g_68];
                        (*g_2184) ^= l_2565;
                        (*g_2620) &= (((0xCF57985BL == ((func_37((l_2619 = func_41(func_37(func_41(l_2565, l_2587, l_2559, (safe_rshift_func_uint16_t_u_s((((*l_2609) = l_2608) != (l_2611 = &g_1477)), 7))), (safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(((***g_672) = (safe_sub_func_int16_t_s_s((l_2586[g_68] ^ (*l_2457)), 0UL))), l_2546[0])) == 0xC78357D6L), 0xA4L)), l_2618), l_2559, l_2546[0], (*l_2618))), (*l_2457), &l_2511) & l_2586[4]) & 0x67FF14ACL)) | l_2559) >= 0UL);

                        ;
                    }
                }
                else
                {
                    unsigned char l_2623 = 0x5BL;
                    int l_2636[2][8][3] = {{{0xF57B75BAL,0x01531A11L,0L},{0x47A3F7A6L,(-3L),1L},{0x8D8F5CFDL,0x8D8F5CFDL,(-4L)},{0x47A3F7A6L,0x124B2E6FL,(-3L)},{0xF57B75BAL,(-4L),0x755C0708L},{0x124B2E6FL,(-1L),(-1L)},{0x7778BFD2L,0xF57B75BAL,0x755C0708L},{(-10L),(-1L),(-1L)}},{{0x01531A11L,0L,0x7778BFD2L},{0x47A3F7A6L,0x244F7E03L,0x47A3F7A6L},{0x7778BFD2L,0L,0x01531A11L},{(-1L),(-1L),4L},{1L,0x8D8F5CFDL,0x755C0708L},{0x598449BBL,0x598449BBL,1L},{1L,0x7778BFD2L,0x8D8F5CFDL},{(-1L),1L,0xFC7E2B25L}}};
                    int *l_2652 = &g_120;
                    int *l_2653[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                        l_2653[i] = (void*)0;
                    for (g_1740 = 0; (g_1740 < 38); g_1740 = safe_add_func_int8_t_s_s(g_1740, 2))
                    {
                        int *l_2629 = &l_2567;
                        unsigned short l_2635 = 65529UL;
                        ++l_2623;
                        l_2636[0][2][0] = ((l_2546[0] , (safe_mod_func_int8_t_s_s((~((l_2623 , (*l_2457)) , (l_2623 < (((***g_672) &= ((((safe_unary_minus_func_int32_t_s(func_37(l_2629, ((l_2623 > (safe_add_func_int16_t_s_s((l_2526 = l_2632), 0xD461L))) , (safe_sub_func_int16_t_s_s(l_2560, 0x33EDL))), &l_2632))) == (*l_2457)) , (*l_2457)) , 0x79L)) | (*l_2457))))), 0x2AL))) , l_2635);
                    }
                    l_2567 = 0x6A828CFEL;
                    for (l_2559 = 0; (l_2559 == (-27)); l_2559--)
                    {
                        unsigned *l_2651 = &g_574;
                        (*g_2184) = (*g_2184);
                        (*g_1193) = (((*l_2651) = ((safe_rshift_func_int16_t_s_s((l_2470 , ((*l_2554) = ((safe_div_func_uint16_t_u_u(l_2567, (safe_sub_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((l_2649 != l_2649), 8)), l_2452)))) | (***g_1062)))), l_2560)) > (&l_2456 != l_2650))) , (*g_1047));
                    }
                    ++l_2654[8];
                }
                return l_2562;
            }
            else
            {
                int l_2661[1];
                int l_2682 = 0xC3BDF041L;
                unsigned l_2684 = 0x54B228FDL;
                unsigned short l_2685 = 0xB931L;
                int l_2715 = 8L;
                int l_2732 = 0L;
                int l_2733 = 0x44C4C793L;
                int l_2735 = 5L;
                int l_2737 = 0L;
                int l_2738 = 0x15E1E486L;
                int l_2739 = 0x63741FE1L;
                int l_2740[2];
                int i;
                for (i = 0; i < 1; i++)
                    l_2661[i] = 1L;
                for (i = 0; i < 2; i++)
                    l_2740[i] = 0x52F0BDF7L;
                if ((l_2661[0] = (safe_div_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(0xB6E3DD01L, (*g_2184))), (*l_2457)))))
                {
                    short l_2664 = (-10L);
                    int l_2668 = 1L;
                    int l_2669[4] = {1L,1L,1L,1L};
                    int i;
                    for (g_1157 = 0; (g_1157 == 56); g_1157 = safe_add_func_int8_t_s_s(g_1157, 2))
                    {
                        int *l_2665 = &l_2511;
                        int *l_2666 = (void*)0;
                        int *l_2667[5][1][1] = {{{&l_2527[3][2]}},{{&g_1868[6][6][0]}},{{&l_2527[3][2]}},{{&g_1868[6][6][0]}},{{&l_2527[3][2]}}};
                        unsigned *l_2681[8] = {&l_2588,&g_203,&l_2588,&l_2588,&g_203,&l_2588,&l_2588,&g_203};
                        int i, j, k;
                        l_2670--;
                        if ((*l_2665))
                            break;
                        (*g_1734) = l_2665;
                        (*g_2184) = l_2661[0];
                    }


                }
                else
                {
                    unsigned l_2687[6][4][3] = {{{0x89DB7836L,0x4CA05643L,1UL},{1UL,4294967295UL,1UL},{1UL,0xA8266167L,0x7EB25BC2L},{0x4E35F4B8L,7UL,0x8D18FC1DL}},{{0x4F83F41BL,0xEBB7B7B0L,4294967295UL},{0xA8266167L,4294967295UL,4294967295UL},{0x03C53889L,0x8D18FC1DL,0x8D18FC1DL},{1UL,1UL,0x7EB25BC2L}},{{0UL,0x8220C28EL,1UL},{0x774CE866L,0xDF57DD33L,1UL},{0x6F2B8DB8L,4UL,0x03C53889L},{0xEBB7B7B0L,0xDF57DD33L,4294967295UL}},{{0xDBA71278L,0x8220C28EL,0x89DB7836L},{4294967294UL,1UL,0x4F83F41BL},{7UL,0x8D18FC1DL,4UL},{0x8D18FC1DL,4294967295UL,4UL}},{{0x8D18FC1DL,0xEBB7B7B0L,4294967294UL},{7UL,1UL,0xCF14DB88L},{0x3B158488L,0UL,7UL},{0xEBB7B7B0L,0x774CE866L,0x6F2B8DB8L}},{{0x03C53889L,0x6F2B8DB8L,4294967295UL},{0xCF14DB88L,0xEBB7B7B0L,0x6F2B8DB8L},{0x8220C28EL,0xDBA71278L,7UL},{7UL,4294967294UL,0xCF14DB88L}}};
                    int l_2705 = 0x62183A49L;
                    int l_2707 = (-4L);
                    int l_2708 = (-1L);
                    int l_2713 = (-8L);
                    int l_2714[10][6][4] = {{{0x1E775473L,8L,(-3L),0xCE2120BCL},{2L,0x449B73ECL,1L,(-7L)},{(-10L),8L,(-1L),(-7L)},{8L,0x449B73ECL,1L,0xCE2120BCL},{0xEDF85396L,8L,0x0A3E4462L,0L},{0xECAFB42DL,8L,(-10L),1L}},{{0L,1L,0xECAFB42DL,1L},{3L,0x5B8FB583L,(-2L),0x0F687AB6L},{0xCE2120BCL,0xB64590ABL,1L,(-6L)},{(-3L),0L,0x449B73ECL,0xECAFB42DL},{0x37F410FDL,0x12429C13L,(-7L),8L},{8L,(-1L),0xE61DD07EL,0x1FCCCA0FL}},{{0x449B73ECL,(-1L),0x1FCCCA0FL,(-1L)},{0xB79B47FDL,0xEDF85396L,(-1L),1L},{0xA3A91EABL,2L,0x37F410FDL,2L},{0xE6495D43L,1L,0x3BECB004L,0x98F0BDB7L},{0xE6495D43L,0xF341BAC3L,0x37F410FDL,0L},{0xA3A91EABL,0x98F0BDB7L,(-1L),0x3BECB004L}},{{0xB79B47FDL,0xA3A91EABL,0x1FCCCA0FL,0xC4B3A367L},{0x3F0AD2ADL,(-1L),8L,0x449B73ECL},{(-6L),(-2L),0x98F0BDB7L,0xF341BAC3L},{0xE6495D43L,0x98F0BDB7L,0x3F0AD2ADL,(-1L)},{0x449B73ECL,0x5EE4E6E4L,0xF341BAC3L,8L},{0xEDF85396L,2L,0x5EE4E6E4L,0x1FC80B9EL}},{{(-3L),0x7B9F35F2L,1L,0xE6495D43L},{0L,(-1L),6L,6L},{1L,1L,1L,0x7B9F35F2L},{2L,(-10L),0L,0x1FCCCA0FL},{8L,1L,0x1FC80B9EL,0L},{6L,1L,0x5B8FB583L,0x1FCCCA0FL}},{{1L,(-10L),0x449B73ECL,0x7B9F35F2L},{2L,1L,(-6L),6L},{0x37F410FDL,(-1L),(-10L),0xE6495D43L},{8L,0x7B9F35F2L,(-1L),0x1FC80B9EL},{0xB64590ABL,2L,(-3L),8L},{0x1FDB67FDL,0x5EE4E6E4L,0x1E775473L,(-1L)}},{{3L,0x98F0BDB7L,(-2L),0xF341BAC3L},{0xC4B3A367L,(-2L),0xB79B47FDL,0x449B73ECL},{0L,(-1L),2L,0x0F687AB6L},{0xE61DD07EL,1L,0xE61DD07EL,0L},{(-2L),0xB64590ABL,0x7B9F35F2L,0x12429C13L},{0L,0x8540711CL,(-1L),0xB64590ABL}},{{0x5B8FB583L,0x0A3E4462L,(-1L),0xA3A91EABL},{0x8540711CL,0xE6495D43L,0x12429C13L,0x0F687AB6L},{1L,0x37F410FDL,0xEDF85396L,0x1FC80B9EL},{0xEDF85396L,0x1FC80B9EL,0x1FDB67FDL,(-3L)},{(-1L),(-6L),(-2L),0x98F0BDB7L},{(-3L),0xEDF85396L,8L,0xC4B3A367L}},{{0xE6495D43L,8L,0x1FC80B9EL,0xB64590ABL},{1L,2L,(-10L),0x3F0AD2ADL},{0x1E775473L,(-2L),(-1L),1L},{0xE61DD07EL,0x0F687AB6L,0xECAFB42DL,0x517C257CL},{8L,0x98F0BDB7L,0x98F0BDB7L,8L},{0x1FDB67FDL,3L,6L,0L}},{{0xA3A91EABL,(-2L),0x517C257CL,(-1L)},{1L,8L,(-6L),(-1L)},{(-7L),(-2L),0x8540711CL,0L},{0x37F410FDL,3L,0xF341BAC3L,8L},{0xC4B3A367L,0x98F0BDB7L,1L,0x517C257CL},{0x7B9F35F2L,0x0F687AB6L,0xC4B3A367L,1L}}};
                    int i, j, k;
                    if (((l_2686 == l_2686) , l_2687[2][3][1]))
                    {
                        char ***l_2688 = &g_673[2];
                        int l_2689[9] = {0xD7B33E72L,0xD7B33E72L,0xD7B33E72L,0xD7B33E72L,0xD7B33E72L,0xD7B33E72L,0xD7B33E72L,0xD7B33E72L,0xD7B33E72L};
                        int i;
                        (*l_2457) = ((((l_2527[1][4] = func_37(&l_2562, (l_2684 | l_2684), &l_2520[1])) , (*g_2620)) , ((0xCFL == (l_2661[0] , (l_2688 != (void*)0))) <= l_2543)) > 0x4F03A0ECL);
                        (*l_2457) = (l_2562 && (l_2689[8] & l_2661[0]));
                    }
                    else
                    {
                        unsigned *l_2704[7] = {&l_2460[1][2][3],&l_2460[1][2][3],&l_2460[1][2][3],&l_2460[1][2][3],&l_2460[1][2][3],&l_2460[1][2][3],&l_2460[1][2][3]};
                        int l_2706 = 0L;
                        int *l_2709 = &l_2523;
                        int *l_2710 = &g_1753;
                        int *l_2711 = &l_2470;
                        int *l_2712[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_2712[i] = &l_2564[2];
                        (*g_2184) = (((*l_2457) ^ (safe_lshift_func_int16_t_s_u((((safe_div_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u(l_2661[0])), 2)) || l_2525), (((safe_rshift_func_int16_t_s_u(l_2564[0], ((*g_816) ^= (l_2564[0] < (safe_unary_minus_func_int8_t_s(l_2546[0])))))) >= ((safe_add_func_uint8_t_u_u(l_2687[1][0][1], (((l_2705 = (safe_rshift_func_int8_t_s_s(((*g_1063) != (void*)0), 4))) == l_2682) & l_2687[5][0][0]))) || (***g_1400))) , l_2684))) , 0x1AL) , g_2442), l_2687[2][3][1]))) <= 0UL);
                        --l_2716;
                    }
                    if ((!(((safe_rshift_func_uint16_t_u_u(((*l_2457) <= 2UL), 8)) != func_37(&l_2520[3], (&g_1062 == (((void*)0 != g_2722) , l_2727[0][2])), &l_2632)) || l_2715)))
                    {
                        int l_2729 = 0xDD97757CL;
                        int l_2730 = (-1L);
                        int l_2731[5][7][5] = {{{0xD8F48391L,0xB2A38596L,0xD8F48391L,0xD8F48391L,0xB2A38596L},{0x9A69B146L,0x1256F83AL,0x1256F83AL,0x9A69B146L,0x1256F83AL},{0xD8F48391L,0xD8F48391L,0xB2A38596L,0xD8F48391L,0xD8F48391L},{(-1L),0x1256F83AL,(-1L),(-1L),0x1256F83AL},{0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL},{0x1256F83AL,0x1256F83AL,0x9A69B146L,0x1256F83AL,0x1256F83AL},{0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L}},{{0x1256F83AL,(-1L),(-1L),0x1256F83AL,(-1L)},{0xD8F48391L,0xD8F48391L,0xB2A38596L,0xD8F48391L,0xD8F48391L},{(-1L),0x1256F83AL,(-1L),(-1L),0x1256F83AL},{0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL},{0x1256F83AL,0x1256F83AL,0x9A69B146L,0x1256F83AL,0x1256F83AL},{0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L},{0x1256F83AL,(-1L),(-1L),0x1256F83AL,(-1L)}},{{0xD8F48391L,0xD8F48391L,0xB2A38596L,0xD8F48391L,0xD8F48391L},{(-1L),0x1256F83AL,(-1L),(-1L),0x1256F83AL},{0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL},{0x1256F83AL,0x1256F83AL,0x9A69B146L,0x1256F83AL,0x1256F83AL},{0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L},{0x1256F83AL,(-1L),(-1L),0x1256F83AL,(-1L)},{0xD8F48391L,0xD8F48391L,0xB2A38596L,0xD8F48391L,0xD8F48391L}},{{(-1L),0x1256F83AL,(-1L),(-1L),0x1256F83AL},{0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL},{0x1256F83AL,0x1256F83AL,0x9A69B146L,0x1256F83AL,0x1256F83AL},{0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L},{0x1256F83AL,(-1L),(-1L),0x1256F83AL,(-1L)},{0xD8F48391L,0xD8F48391L,0xB2A38596L,0xD8F48391L,0xD8F48391L},{(-1L),0x1256F83AL,(-1L),(-1L),0x1256F83AL}},{{0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL},{0x1256F83AL,0x1256F83AL,0x9A69B146L,0x1256F83AL,0x1256F83AL},{0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L},{0x1256F83AL,(-1L),(-1L),0x1256F83AL,(-1L)},{0xD8F48391L,0xD8F48391L,0xB2A38596L,0xD8F48391L,0xD8F48391L},{(-1L),0x1256F83AL,(-1L),(-1L),0x1256F83AL},{0xD8F48391L,0x7FC65E6EL,0x7FC65E6EL,0xD8F48391L,0x7FC65E6EL}}};
                        int l_2734 = 0x35408E97L;
                        int i, j, k;
                        (*g_1734) = &l_2682;


                        l_2744--;
                        l_2705 = (l_2734 , (l_2729 > g_16));
                    }
                    else
                    {
                        int l_2750 = 0x3EA69925L;
                        l_2714[5][2][3] ^= (safe_sub_func_int8_t_s_s((((l_2749 != ((l_2562 ^= 3UL) , (void*)0)) >= l_2708) ^ ((*l_2457) >= (((*l_2457) , (0UL && ((l_2750 = ((***g_1400) && l_2564[2])) & (*l_2457)))) , l_2713))), l_2751));
                        (*g_2184) = ((safe_add_func_int8_t_s_s((!l_2754), (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(255UL, ((**l_2475) = (***g_672)))), l_2744)) == l_2564[0]), ((func_37(&l_2705, l_2682, l_2765) , g_120) , 249UL))) == l_2705), (*l_2457))), 14)))) <= l_2744);
                    }


                }


                (*g_2184) = l_2670;
            }


            for (l_2562 = (-7); (l_2562 != 5); l_2562 = safe_add_func_uint32_t_u_u(l_2562, 3))
            {
                return l_2768;


            }
            l_2775[4][2] |= ((safe_div_func_uint8_t_u_u((1UL <= ((*l_2457) = (safe_lshift_func_uint16_t_u_s((l_2744 , l_2560), 14)))), (safe_add_func_int32_t_s_s(l_2562, l_2560)))) , l_2562);
        }



        return (*l_2457);



    }
    else
    {
        int *l_2781 = &g_1868[6][2][0];
        unsigned char ******l_2788 = &g_2044;
        int l_2795 = 0x9DB72483L;
        int l_2818 = 0L;
        int l_2819[8][5] = {{0x50F99650L,(-2L),0x50F99650L,0xAC878FCDL,0xAC878FCDL},{1L,0x5C6B1953L,1L,7L,7L},{0x50F99650L,(-2L),0x50F99650L,0xAC878FCDL,0xAC878FCDL},{1L,0x5C6B1953L,1L,7L,7L},{0x50F99650L,(-2L),0x50F99650L,0xAC878FCDL,0xAC878FCDL},{1L,0L,7L,0L,0L},{0xAC878FCDL,0x9A6CD4CAL,0xAC878FCDL,0xFD4A0CC4L,0xFD4A0CC4L},{7L,0L,7L,0L,0L}};
        unsigned ***l_2851 = &g_1533;
        unsigned short ***l_2856 = &g_1063;
        unsigned l_2866[3][8] = {{4294967295UL,0x8BD5E570L,0x8BD5E570L,4294967295UL,0x8BD5E570L,0x8BD5E570L,4294967295UL,0x8BD5E570L},{4294967295UL,4294967295UL,0x12536DE7L,4294967295UL,4294967295UL,0x12536DE7L,4294967295UL,4294967295UL},{0x8BD5E570L,4294967295UL,0x8BD5E570L,0x8BD5E570L,4294967295UL,0x8BD5E570L,0x8BD5E570L,4294967295UL}};
        int *l_2878[5];
        unsigned char ****l_2883 = &g_1006;
        unsigned **l_2888 = &g_328;
        unsigned char l_2900 = 8UL;
        int *l_2902[10] = {&g_784,&g_784,&g_784,&g_784,&g_784,&g_784,&g_784,&g_784,&g_784,&g_784};
        unsigned l_2973[10];
        int *l_2984 = &l_2819[6][3];
        unsigned l_3004 = 18446744073709551612UL;
        char **l_3039 = &g_674;
        char l_3040[8][1] = {{0L},{1L},{0L},{1L},{0L},{1L},{0L},{1L}};
        int l_3055[2][9][7] = {{{0x9725A535L,0x58D09BE0L,0x58D09BE0L,0x9725A535L,0x405A9FEDL,0x58D09BE0L,3L},{7L,0x3AE8310EL,7L,0x897BB54BL,(-1L),0x897BB54BL,7L},{0x9725A535L,0x9725A535L,(-1L),3L,0x9725A535L,0x6B0E1D86L,3L},{(-1L),0x897BB54BL,0x2898107CL,0x3AE8310EL,0x2898107CL,0x897BB54BL,(-1L)},{0x405A9FEDL,3L,0x58D09BE0L,0x405A9FEDL,0x9725A535L,0x58D09BE0L,0x58D09BE0L},{(-1L),0x3AE8310EL,(-3L),0x3AE8310EL,(-1L),1L,(-1L)},{0x9725A535L,0x405A9FEDL,0x58D09BE0L,3L,0x405A9FEDL,0x405A9FEDL,3L},{0x2898107CL,0x3AE8310EL,0x2898107CL,0x897BB54BL,(-1L),0x897BB54BL,0x2898107CL},{0x9725A535L,3L,(-1L),0x9725A535L,0x9725A535L,(-1L),3L}},{{(-1L),0x897BB54BL,7L,0x3AE8310EL,7L,0x897BB54BL,(-1L)},{0x405A9FEDL,0x9725A535L,0x58D09BE0L,0x58D09BE0L,0x9725A535L,0x405A9FEDL,0x58D09BE0L},{(-1L),0x3AE8310EL,0L,0x3AE8310EL,(-1L),1L,(-1L)},{0x9725A535L,0x58D09BE0L,0x58D09BE0L,0x9725A535L,0x405A9FEDL,0x58D09BE0L,3L},{7L,0x3AE8310EL,7L,0x897BB54BL,(-1L),0x897BB54BL,7L},{0x9725A535L,0x9725A535L,(-1L),3L,0x9725A535L,0x6B0E1D86L,3L},{(-1L),0x897BB54BL,0x2898107CL,0x3AE8310EL,0x2898107CL,0x897BB54BL,(-1L)},{0x405A9FEDL,3L,0x58D09BE0L,0x405A9FEDL,0x9725A535L,0x58D09BE0L,0x58D09BE0L},{(-1L),0x3AE8310EL,(-3L),0x3AE8310EL,(-1L),1L,(-1L)}}};
        int l_3059[5] = {0x53555F3DL,0x53555F3DL,0x53555F3DL,0x53555F3DL,0x53555F3DL};
        unsigned char l_3104 = 0x8FL;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_2878[i] = &l_2795;
        for (i = 0; i < 10; i++)
            l_2973[i] = 18446744073709551615UL;
        if ((*l_2765))
        {
            int *l_2778 = &g_5;
            int l_2814 = 2L;
            int l_2815 = 0x3E4FE5D8L;
            int l_2816[8] = {0x3CCFECC2L,3L,0x3CCFECC2L,3L,0x3CCFECC2L,3L,0x3CCFECC2L,3L};
            unsigned ****l_2849 = (void*)0;
            unsigned ****l_2850 = &l_2848;
            unsigned short ***l_2857 = &g_1063;
            short l_2887 = 0x0CEAL;
            unsigned char l_2897 = 254UL;
            unsigned l_2898 = 4UL;
            unsigned short l_2905[4];
            int i;
            for (i = 0; i < 4; i++)
                l_2905[i] = 0xF996L;
            for (g_146 = (-7); (g_146 != 17); g_146 = safe_add_func_uint32_t_u_u(g_146, 4))
            {
                int *l_2787[7][1][8] = {{{&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521}},{{&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521}},{{&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521}},{{&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521}},{{&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521}},{{&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521}},{{&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521,&l_2525,&l_2521}}};
                unsigned char ******l_2792[6] = {&g_2044,&g_2044,&g_2044,&g_2044,&g_2044,&g_2044};
                unsigned **l_2794 = &g_328;
                unsigned short l_2828 = 0UL;
                int i, j, k;
                if ((func_37(l_2778, ((*g_674) = ((safe_rshift_func_uint16_t_u_s(0x567BL, ((&g_653 == (void*)0) , 0L))) ^ (*l_2778))), l_2781) , (l_2782[4][2] != l_2782[4][2])))
                {
                    unsigned char *******l_2789 = &l_2782[4][2];
                    unsigned char *******l_2790 = (void*)0;
                    unsigned char *******l_2791[4];
                    int l_2793 = 0x5A34E0EAL;
                    unsigned *l_2808 = &g_574;
                    unsigned short *l_2811 = (void*)0;
                    unsigned short *l_2812 = &l_2751;
                    char l_2813 = 8L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2791[i] = &l_2788;
                    (*g_1734) = (((((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s(func_37(l_2778, (***g_672), l_2787[3][0][7]), (((l_2792[3] = ((*l_2789) = l_2788)) == &g_2044) , (*g_1402)))), l_2793)) || ((void*)0 == l_2794)) & (*l_2765)) && l_2795) , &l_2795);
                    (*g_2184) &= ((safe_rshift_func_uint8_t_u_s((+(safe_mod_func_uint32_t_u_u((***g_1400), (safe_sub_func_uint8_t_u_u((l_2813 = ((!((safe_rshift_func_uint8_t_u_s(((*l_2778) ^ ((***g_1062) |= (safe_add_func_uint16_t_u_u(l_2793, l_2793)))), ((*l_2778) >= ((safe_rshift_func_uint8_t_u_u(((*l_2781) = (((*l_2812) |= func_37(((--(*l_2808)) , (void*)0), (*l_2778), &l_2795)) != 65535UL)), (*l_2778))) || 0xAD3DL)))) || (*l_2781))) ^ (*l_2778))), (*l_2778)))))), 4)) , l_2793);
                }
                else
                {
                    char l_2817 = 0xD6L;
                    int l_2820[2];
                    unsigned l_2821 = 4294967295UL;
                    unsigned l_2827 = 1UL;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_2820[i] = 0xDADD6103L;
                    --l_2821;
                    g_2824--;
                    if (l_2827)
                        continue;
                }
                ++l_2828;
                for (g_1280 = 0; (g_1280 <= 6); ++g_1280)
                {
                    int l_2833 = (-1L);
                    (*g_1734) = func_41(g_120, l_2833, (***g_672), l_2833);
                    if ((*l_2781))
                        continue;
                    if (l_2833)
                        continue;
                    (*g_2184) = ((*l_2781) = (*l_2781));
                }
                if ((*l_2781))
                    continue;
            }


            if (((safe_add_func_uint32_t_u_u(((*l_2765) , (((*l_2781) = (safe_lshift_func_uint8_t_u_u((((((safe_add_func_uint32_t_u_u((*l_2781), (((safe_rshift_func_uint16_t_u_u((6L ^ (safe_rshift_func_uint8_t_u_u((l_2815 ^= (((l_2819[0][4] ^= (safe_rshift_func_uint8_t_u_u(func_37((((*l_2765) = (*l_2781)) , (void*)0), (*l_2778), &l_2795), (*l_2778)))) | 0L) , 0x9BL)), (*l_2778)))), (*l_2778))) , l_2856) != l_2857))) != (***g_1400)) < 250UL) >= (*l_2781)) , (*l_2781)), (*l_2778)))) <= l_2795)), (*l_2778))) != (*g_816)))
            {
                unsigned char l_2862 = 5UL;
                int l_2865 = (-1L);
                unsigned l_2870[8][1] = {{18446744073709551612UL},{9UL},{18446744073709551612UL},{9UL},{18446744073709551612UL},{9UL},{18446744073709551612UL},{9UL}};
                int *l_2876 = &l_2525;
                int i, j;
                if ((safe_div_func_uint16_t_u_u((250UL & ((void*)0 != &g_673[2])), (safe_div_func_int32_t_s_s(((++l_2862) || 0xABL), ((*l_2765) ^= (((*l_2781) > (-8L)) < (***g_672))))))))
                {
                    (*l_2781) = (0x206F6EC3L < 0x61BCF2ECL);
                    for (g_136 = 0; (g_136 <= 0); g_136 += 1)
                    {
                        --l_2866[0][7];
                        l_2865 |= 0xF5EE2CBDL;
                        (*g_2184) |= ((void*)0 == l_2869);
                        if (l_2870[7][0])
                            continue;
                    }
                }
                else
                {
                    int l_2875 = 0x87B6FF57L;
                    int l_2877 = (-1L);
                    for (l_2751 = (-21); (l_2751 < 45); l_2751 = safe_add_func_int16_t_s_s(l_2751, 8))
                    {
                        if ((*l_2781))
                            break;
                        return (*l_2781);


                    }
                    (*l_2876) = (((((l_2865 = (l_2870[6][0] || (safe_lshift_func_int8_t_s_u(l_2875, 6)))) || (*l_2765)) | (*l_2765)) ^ func_37(&l_2814, (l_2877 &= ((0x30262A88L ^ (*l_2778)) == ((*g_2184) ^= ((((func_37((l_2870[2][0] , &l_2875), (*g_674), l_2876) >= (*l_2778)) | 0xBCL) != (*l_2876)) <= l_2875)))), l_2878[4])) == (-2L));
                }
                return (*l_2781);


            }
            else
            {
                char l_2881 = (-10L);
                unsigned char ****l_2882 = &g_1006;
                int *l_2884 = &g_1342;
                int *l_2891[6][4][1] = {{{&l_2814},{&l_2816[1]},{(void*)0},{&g_1397[6]}},{{&g_1397[6]},{(void*)0},{&l_2816[1]},{&l_2814}},{{(void*)0},{&l_2814},{&l_2816[1]},{(void*)0}},{{&g_1397[6]},{&g_1397[6]},{(void*)0},{&l_2816[1]}},{{&l_2814},{(void*)0},{&l_2814},{&l_2816[1]}},{{(void*)0},{&l_2816[1]},{&l_2816[1]},{(void*)0}}};
                unsigned l_2899 = 0UL;
                int i, j, k;
                (*g_2184) = (safe_add_func_int32_t_s_s(((l_2881 == ((l_2883 = l_2882) != (void*)0)) , func_37(&l_2815, (*l_2778), l_2884)), ((safe_div_func_int8_t_s_s((***g_672), func_37(func_46(&l_2765, (*l_2884), p_22, l_2884, (*l_2781)), (***g_672), &l_2814))) && 3L)));
                (*g_63) = func_41((*l_2884), l_2887, (*g_674), (g_2553[0] = (((void*)0 != l_2888) >= ((*l_2884) ^ (((*l_2778) ^ (((safe_div_func_int8_t_s_s((*l_2778), ((((*l_2765) = func_37(l_2891[2][3][0], (*l_2884), &l_2819[5][0])) == (*l_2778)) , (*l_2884)))) >= (*l_2884)) | 0x30D3L)) || 1L)))));

                ;
                if (((*l_2884) >= 0x35E3CEA8L))
                {
                    return (*l_2778);


                }
                else
                {
                    char l_2894 = 0x33L;
                    (*l_2884) = ((((!(0x970AL < (*l_2884))) <= (safe_mul_func_uint8_t_u_u((l_2894 ^ ((((safe_div_func_uint16_t_u_u(((**g_1063) ^= ((*l_2778) , (0xFCL | (l_2897 >= ((*g_64) ^= (l_2898 , l_2894)))))), ((((*l_2781) < l_2899) , (-3L)) & (*l_2781)))) >= (***g_1400)) != l_2900) | g_2901)), 0x54L))) , l_2778) != l_2902[6]);
                    (*p_22) = &l_2815;


                    for (g_1756 = 0; (g_1756 != (-16)); g_1756 = safe_sub_func_int8_t_s_s(g_1756, 2))
                    {
                        if (l_2905[1])
                            break;
                        (*g_1193) = (void*)0;
                        if ((*l_2781))
                            continue;
                    }
                }


                return (*l_2781);


            }
        }
        else
        {
            unsigned l_2906[8] = {0xABA65527L,0xABA65527L,0xABA65527L,0xABA65527L,0xABA65527L,0xABA65527L,0xABA65527L,0xABA65527L};
            short *l_2909 = (void*)0;
            short *l_2910 = &g_191;
            int l_2916 = 0x7E29C1E9L;
            int l_2919[4][5];
            int l_2934[8] = {(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L),(-5L)};
            int **l_2935 = (void*)0;
            int **l_2983 = &g_1458[6];
            int *l_2989 = &g_2553[2];
            unsigned l_3001 = 0xF0F04271L;
            unsigned char **l_3011 = &g_169[0][2][4];
            char l_3021 = 1L;
            int l_3022 = 0xFDB46A76L;
            short l_3069[7][6] = {{(-1L),5L,5L,(-1L),0xD741L,(-1L)},{0L,5L,0xD741L,0L,0xD741L,5L},{0xBFD7L,5L,(-1L),0xBFD7L,0xD741L,0xD741L},{(-1L),5L,5L,(-1L),0xD741L,(-1L)},{0L,5L,0xD741L,0L,0xD741L,5L},{0xBFD7L,5L,(-1L),0xBFD7L,0xD741L,0xD741L},{(-1L),5L,5L,(-1L),0xD741L,(-1L)}};
            int *l_3135[2][1];
            int l_3167[2];
            short l_3174 = 0L;
            int i, j;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                    l_2919[i][j] = 0x15EAAFD9L;
            }
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 1; j++)
                    l_3135[i][j] = &g_1753;
            }
            for (i = 0; i < 2; i++)
                l_3167[i] = 0L;
            (*g_1734) = func_41(l_2906[7], g_2297, l_2906[2], l_2906[7]);
            if ((safe_add_func_uint16_t_u_u((((*l_2910) = 1L) , ((void*)0 != (*g_1400))), (safe_lshift_func_int16_t_s_u((*l_2781), 13)))))
            {
                int l_2913[3];
                int l_2914[3];
                short l_2924 = 0x43BBL;
                unsigned short l_2925 = 0x372CL;
                unsigned short l_2936 = 0xC164L;
                int *l_2939 = &l_2795;
                int **l_2963 = (void*)0;
                int l_2969 = 0L;
                unsigned char ****l_2972 = (void*)0;
                int l_2976 = (-1L);
                unsigned *l_2991 = &l_2543;
                unsigned *l_2992 = &l_2460[0][2][5];
                char l_2995[6][1];
                short l_3026[1][6][3] = {{{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L},{1L,1L,1L}}};
                short l_3075 = 8L;
                int l_3123 = 0xDBE7A035L;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_2913[i] = (-8L);
                for (i = 0; i < 3; i++)
                    l_2914[i] = 0xA51B20E9L;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_2995[i][j] = 0x98L;
                }
                if ((g_16 , (*g_2620)))
                {
                    return l_2913[2];
                }
                else
                {
                    char l_2915 = (-1L);
                    int l_2917 = (-2L);
                    int l_2918 = (-1L);
                    int l_2920 = 0x569DE83EL;
                    int l_2921 = (-1L);
                    int l_2922 = 1L;
                    int l_2923 = 0x44EFE062L;
                    l_2914[0] |= (-10L);
                    --l_2925;
                }
                for (l_2526 = 0; (l_2526 <= 2); l_2526 += 1)
                {
                    int *l_2928 = (void*)0;
                    short l_2933 = 0x824FL;
                    int l_2979 = 0x2B6A1B35L;
                    for (g_1157 = 0; (g_1157 <= 0); g_1157 += 1)
                    {
                        int i, j;
                        if (l_2866[l_2526][(l_2526 + 1)])
                            break;
                    }
                    if ((l_2936 <= (*g_2184)))
                    {
                        unsigned l_2957 = 0UL;
                        int l_2958 = (-1L);
                        int ***l_2964 = &g_653;
                        int *l_2971 = &g_1280;
                        (*l_2765) = (safe_mul_func_int16_t_s_s((((func_37(((*g_1734) = (((***g_672) , (***g_1400)) , l_2939)), (*g_674), ((((safe_add_func_int32_t_s_s((*l_2939), ((0xEA11L <= (safe_rshift_func_int8_t_s_s(func_37(&l_2914[0], (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((***l_2856) = (safe_lshift_func_uint8_t_u_u((((((((((safe_unary_minus_func_uint8_t_u(((l_2958 = (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((*l_2939), ((((safe_mod_func_int32_t_s_s(((*g_2184) &= ((*l_2781) >= l_2957)), (*l_2939))) > g_1505[2]) != (*l_2939)) , l_2957))), l_2957))) < (*l_2939)))) , (*l_2939)) , 65535UL) , g_805[0]) && (*l_2939)) , (*l_2939)) , 0x0926F431L) == l_2957) < (*l_2939)), 4))) && (***g_1062)), (*l_2939))), (*l_2939))), &l_2819[7][3]), (*l_2765)))) > 0x54B0L))) && l_2957) && (*l_2765)) , (void*)0)) != (*l_2939)) & 3L) ^ 2UL), (*l_2765)));
                        (*g_2184) ^= ((safe_mul_func_uint8_t_u_u((*l_2939), (l_2958 == (l_2957 && (safe_add_func_int8_t_s_s((((((l_2963 != ((*l_2964) = &l_2902[6])) & (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(func_37((g_16 , l_2928), (***g_672), &l_2958), (*l_2939))) ^ 0L), l_2969))) >= (***g_1400)) == 0x0AL) , l_2970[0]), 0xADL)))))) || 0x69L);
                        (*l_2781) |= l_2906[0];
                        l_2971 = &l_2958;

                        ;
                    }
                    else
                    {
                        short *l_2975 = &g_1698;
                        int l_2977 = 0L;
                        int l_2978 = 1L;
                        l_2978 &= ((((g_1005 = &g_1006) != l_2972) >= l_2977) & (*l_2939));

                        ;
                        (*g_1734) = &l_2978;


                        (*g_63) = l_2928;

                        ;
                    }
                    for (g_1157 = 0; (g_1157 <= 2); g_1157 += 1)
                    {
                        unsigned char l_2980 = 0x38L;
                        int i, j;
                        ++l_2980;
                        if (l_2866[g_1157][(g_1157 + 1)])
                            break;
                        if (l_2866[l_2526][g_1157])
                            continue;
                        if (l_2866[g_1157][(g_1157 + 3)])
                            continue;
                    }
                }

                ;

                if ((*l_2939))
                {
                    int l_2996 = 0xACF49B51L;
                    int l_2997 = 9L;
                    int l_2998 = 0xF358C7D6L;
                    int l_2999 = 0x3813D3AFL;
                    int l_3000[1][7][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 7; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_3000[i][j][k] = 9L;
                        }
                    }
                    l_3001++;
                    l_3004--;
                }
                else
                {
                    short l_3014[5];
                    unsigned char l_3016[8][1][2] = {{{0xE6L,0x1AL}},{{0xE6L,0xE6L}},{{0x1AL,0xE6L}},{{0xE6L,0x1AL}},{{0xE6L,0xE6L}},{{0x1AL,0xE6L}},{{0xE6L,0x1AL}},{{0xE6L,0xE6L}}};
                    int l_3025 = 6L;
                    int l_3027[9] = {(-1L),(-4L),(-1L),(-4L),(-1L),(-4L),(-1L),(-4L),(-1L)};
                    unsigned short l_3028[5][4] = {{7UL,0x104DL,7UL,7UL},{0x104DL,0x104DL,65532UL,0x104DL},{0x104DL,7UL,7UL,0x104DL},{7UL,0x104DL,7UL,7UL},{0x104DL,0x104DL,65532UL,0x104DL}};
                    int **l_3067 = &g_1458[4];
                    char l_3068 = (-9L);
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_3014[i] = 1L;
                    (*l_2765) &= (((((safe_lshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_3011 != ((*l_2939) , (**l_2883))), ((*l_2984) ^ ((((safe_lshift_func_uint8_t_u_s(0xE2L, (l_3014[2] , func_37(func_41((*l_2939), l_3014[2], ((l_3014[2] | 1L) , l_3014[2]), l_3014[3]), (***g_672), g_3015)))) != (*l_2939)) == (*l_2939)) == (*g_1402))))), (*l_2984))) , l_3016[4][0][0]) != (*l_2781)) & 5UL) , (*g_2620));
                    (*g_1734) = func_41(((safe_sub_func_int8_t_s_s((*l_2939), 0x1DL)) | (safe_mul_func_int16_t_s_s((*l_2939), l_3014[3]))), g_574, ((*g_674) |= l_3021), (l_3014[2] ^ (((-2L) ^ ((l_3014[4] | (*g_3015)) <= l_3022)) | (*l_2939))));
                    if (((l_3016[4][0][0] | ((safe_mod_func_int8_t_s_s((*l_2984), (*l_2781))) | (--l_3028[4][0]))) == (safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((safe_mod_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s(0x684DB05AL, ((((*l_2765) &= (((*g_672) = (void*)0) != l_3039)) < 5UL) , 0x2F8BA208L))) || l_3027[6]) == l_3040[6][0]) , 0x2CA7L), 65535UL)) & (*l_2939)) , l_3027[8]) ^ (*g_674)), (*l_2781))), 0x3EL))))
                    {
                        int ***l_3041 = (void*)0;
                        int ***l_3042 = &g_653;
                        int l_3044 = 0xA4100DE2L;
                        char *l_3047 = &g_2347;
                        unsigned short l_3054 = 65534UL;
                        (*l_3042) = g_653;
                        l_2878[1] = &l_2914[0];


                        (*g_1734) = &l_3027[6];


                        (*l_2939) = l_3016[7][0][1];
                    }
                    else
                    {
                        unsigned l_3056 = 0xA7E6960AL;
                        int l_3060 = 4L;
                        int l_3061 = 0xB4259D56L;
                        (*l_2984) &= ((l_3028[4][0] <= l_3055[0][3][4]) , (*g_3015));
                        (*p_22) = &l_3027[6];


                        l_3056--;
                        ++l_3062;
                    }




                    for (g_1740 = 0; (g_1740 <= 0); g_1740 += 1)
                    {
                        int i;
                        (*g_1193) = (*g_1193);
                        (*p_22) = g_3070;
                    }


                }




                for (l_2521 = 0; (l_2521 <= 6); l_2521 += 1)
                {
                    short l_3071 = 0xB44EL;
                    int l_3072[7] = {0x2B6BC46EL,0x2B6BC46EL,0x2B6BC46EL,0x2B6BC46EL,0x2B6BC46EL,0x2B6BC46EL,0x2B6BC46EL};
                    unsigned l_3077 = 0x70EFC127L;
                    char *l_3119 = &l_2775[4][2];
                    int i;
                    for (l_2543 = 0; (l_2543 <= 9); l_2543 += 1)
                    {
                        int l_3073 = 0x8A205D57L;
                        int l_3074 = (-3L);
                        int l_3076[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_3076[i] = 1L;
                        l_3077++;
                    }
                    for (g_2442 = 1; (g_2442 <= 4); g_2442 += 1)
                    {
                        unsigned l_3081 = 1UL;
                        int i, j;
                        ++l_3081;
                        return l_2819[l_2521][g_2442];



                    }
                    if (((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s((*l_2939), 0)), 1)) , (*g_3015)))
                    {
                        unsigned char l_3105[10][4] = {{251UL,0xB2L,251UL,0xB4L},{0UL,0xB2L,251UL,0xB2L},{0UL,0xB4L,251UL,0xB2L},{251UL,0xB2L,251UL,0xB4L},{0UL,0xB2L,251UL,0xB2L},{0UL,0xB4L,251UL,0xB2L},{251UL,0xB2L,251UL,0xB4L},{0UL,0xB2L,251UL,0xB2L},{0UL,0xB4L,251UL,0xB2L},{251UL,0xB2L,251UL,0xB4L}};
                        int i, j;
                        return l_3105[9][3];



                    }
                    else
                    {
                        char l_3106 = (-2L);
                        unsigned char l_3122[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_3122[i] = 0x82L;
                        (*l_2765) = (l_3106 , ((((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((*l_2984), ((*l_2765) , (*l_2765)))), (safe_mod_func_int16_t_s_s(((*l_2974) = (safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((l_3106 > ((*l_3039) == l_3119)), (((safe_add_func_int16_t_s_s(((((l_3122[2] > l_3123) == 0x2849B1D1L) <= (*l_2939)) == 0xC6L), (**g_2725))) , (*g_1400)) != (void*)0))), 1UL)), l_3106))), (*g_816))))) | 0xBCDCL) , (*l_2781)) || (*l_2781)));
                        (*l_2781) = l_3072[6];
                    }
                    if ((*l_2765))
                        break;
                }
            }
            else
            {
                int l_3126 = (-4L);
                int *l_3141 = &l_2521;
                int l_3150 = (-6L);
                int *l_3154 = &g_120;
                (*l_2781) ^= (((**g_1063) = (safe_lshift_func_int8_t_s_s(0xD9L, 2))) >= l_3126);
                (*g_3015) = ((***g_1062) && (l_3126 , (*l_2765)));
                for (l_2525 = 0; (l_2525 == 23); ++l_2525)
                {
                    unsigned short l_3153 = 6UL;
                    int *l_3155 = (void*)0;
                    for (l_2470 = 27; (l_2470 >= 14); l_2470--)
                    {
                        unsigned *l_3138 = (void*)0;
                        int *l_3142 = &l_3022;
                        unsigned *l_3143 = (void*)0;
                        unsigned *l_3144[4][4][7] = {{{&g_203,&l_2866[0][7],&l_3001,(void*)0,(void*)0,&l_3001,&l_2866[2][5]},{&l_2866[0][7],&l_2460[0][6][3],&l_3001,(void*)0,&g_203,(void*)0,&l_2990},{&g_2568,&l_3001,&l_2866[0][4],&l_2866[0][7],&l_2866[0][4],(void*)0,(void*)0},{&l_3001,(void*)0,&l_3062,(void*)0,&l_2990,&l_2866[0][7],&l_2866[2][5]}},{{&g_203,&l_2460[1][2][3],&g_203,(void*)0,&g_203,&l_2543,&g_203},{(void*)0,&l_2460[3][2][1],&l_3062,&g_2568,&l_2543,&g_2568,&l_3001},{&l_2866[0][7],&l_2866[0][4],&l_2588,&l_3001,(void*)0,(void*)0,&l_2460[3][2][1]},{&l_2460[0][6][3],(void*)0,&l_2460[1][2][3],&l_2543,&l_2460[2][6][4],(void*)0,&l_2460[1][7][4]}},{{&g_2568,(void*)0,&l_2460[1][7][4],(void*)0,&l_2866[0][7],&l_2588,&l_2588},{&l_3001,&l_2866[0][4],&l_2866[0][7],&l_2866[0][4],&l_3001,&g_2568,&l_2460[0][6][3]},{&l_2866[0][4],&l_2460[3][2][1],&l_2460[1][2][3],(void*)0,(void*)0,&l_2990,(void*)0},{&l_2866[0][7],&l_2460[1][2][3],&l_2866[0][7],&g_203,&g_2568,&l_2866[0][7],&g_203}},{{&l_2866[0][4],(void*)0,&g_203,&g_2568,&l_2460[1][7][4],&l_3001,(void*)0},{&l_3001,(void*)0,&g_2568,&l_2460[1][7][4],&g_203,(void*)0,&g_2568},{&g_2568,&l_2990,&l_2866[0][7],&l_3001,(void*)0,&l_2866[0][4],&g_2568},{&l_2460[0][6][3],(void*)0,&g_203,(void*)0,&g_2568,&g_2568,(void*)0}}};
                        int l_3149 = 0xDFB355A3L;
                        int l_3152 = 0xB20BF55FL;
                        char *l_3156 = &g_1756;
                        int *l_3165[8] = {&l_2795,&g_1342,&l_2795,&g_1342,&l_2795,&g_1342,&l_2795,&g_1342};
                        int i, j, k;
                    }
                    for (l_2990 = 0; (l_2990 >= 47); l_2990 = safe_add_func_int16_t_s_s(l_2990, 6))
                    {
                        int l_3179 = 0x4519082EL;
                        return l_3179;


                    }
                    if ((*l_2765))
                        break;
                    (*p_22) = &l_3150;
                }


                return (*l_3166);


            }

            ;



        }

        ;



        (*l_2781) &= ((l_3180 <= ((*l_3166) > (*g_674))) >= 1L);
    }




    for (l_2743 = (-8); (l_2743 >= (-1)); l_2743 = safe_add_func_int32_t_s_s(l_2743, 1))
    {
        unsigned short l_3189 = 0x8B61L;
        for (g_2347 = (-4); (g_2347 == 14); ++g_2347)
        {
            unsigned char **l_3187 = &g_169[0][2][4];
            int l_3188 = 0L;
            (*g_3015) ^= (((safe_rshift_func_uint8_t_u_s(((void*)0 != l_3187), l_3188)) , l_3189) <= (l_2848 == &g_1401[0][0]));
        }
    }
    (*g_3190) = ((*g_1734) = func_46(g_3190, ((2L ^ (-1L)) > ((*g_2184) = func_37(func_46(&g_1458[1], (***g_1400), &l_3166, l_3192, (*l_3166)), (*l_2765), (*g_3190)))), &l_3166, (*g_3190), (*l_3166)));

    ;

    return (*l_3166);
}







static int ** func_23(int * p_24, int p_25, int p_26, int * p_27, int p_28)
{
    unsigned l_1926 = 1UL;
    unsigned short l_1927 = 0x27B7L;
    unsigned *l_1950[9] = {&g_203,&g_203,&g_203,&g_203,&g_203,&g_203,&g_203,&g_203,&g_203};
    int l_1966 = 0L;
    int l_1969 = 5L;
    int l_1970 = 0x3B668CAAL;
    unsigned ***l_1994 = &g_1533;
    char ****l_2020 = &g_672;
    short l_2022 = 4L;
    unsigned char *****l_2045[8][2] = {{&g_1005,&g_1005},{&g_1005,&g_1005},{&g_1005,&g_1005},{&g_1005,&g_1005},{&g_1005,&g_1005},{&g_1005,&g_1005},{&g_1005,&g_1005},{&g_1005,&g_1005}};
    int l_2056 = 0x7C21B7BAL;
    int l_2057 = 0x186F5681L;
    int l_2058 = (-1L);
    char l_2059[3];
    int l_2060 = 8L;
    int l_2061 = (-10L);
    int l_2062 = 0xCC6850CDL;
    int l_2063 = 0L;
    int l_2064 = (-10L);
    int l_2066 = (-6L);
    int l_2067 = 0x0927EE8EL;
    int l_2068 = 6L;
    int l_2069[6];
    unsigned short ***l_2076[10] = {&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063};
    unsigned short ****l_2075 = &l_2076[3];
    unsigned l_2080[7][6][3] = {{{0x26084209L,0UL,18446744073709551615UL},{18446744073709551606UL,0x26084209L,0UL},{18446744073709551615UL,0x0A827A48L,0x473F79E0L},{0x473F79E0L,0x918C0A31L,0x0A827A48L},{0UL,18446744073709551610UL,0xD828AF83L},{0xA238AB09L,0xD2415078L,0xD828AF83L}},{{0x0A827A48L,5UL,0x0A827A48L},{18446744073709551615UL,18446744073709551613UL,0x473F79E0L},{18446744073709551615UL,0xA2BF4E6DL,0UL},{0x195B13A4L,18446744073709551615UL,18446744073709551615UL},{0x2D8984A2L,0xA238AB09L,1UL},{0x195B13A4L,0x555B64C1L,0xE524DCD3L}},{{18446744073709551615UL,0x0AAA74AFL,0UL},{18446744073709551615UL,0UL,18446744073709551610UL},{0x0A827A48L,18446744073709551615UL,0x555B64C1L},{0xA238AB09L,18446744073709551615UL,0xD2415078L},{0UL,0UL,0x195B13A4L},{0x473F79E0L,0x0AAA74AFL,0xA238AB09L}},{{18446744073709551615UL,0xA238AB09L,0x195B13A4L},{0UL,18446744073709551615UL,0x2D8984A2L},{0x918C0A31L,0xD828AF83L,0x195B13A4L},{0x26084209L,0UL,18446744073709551615UL},{0UL,0x0AAA74AFL,18446744073709551615UL},{18446744073709551613UL,0xE524DCD3L,0x0A827A48L}},{{0x195B13A4L,0x0A827A48L,0xA238AB09L},{0x195B13A4L,0UL,0UL},{18446744073709551613UL,0x2D8984A2L,0x473F79E0L},{0UL,0x22CE966DL,18446744073709551615UL},{0x26084209L,0x918C0A31L,18446744073709551606UL},{0x918C0A31L,0x473F79E0L,0x26084209L}},{{0UL,0x918C0A31L,18446744073709551615UL},{0xD828AF83L,0x22CE966DL,18446744073709551610UL},{18446744073709551610UL,0x2D8984A2L,0x22CE966DL},{1UL,0UL,0UL},{18446744073709551615UL,0x0A827A48L,0UL},{0x22CE966DL,0xE524DCD3L,0x22CE966DL}},{{0x555B64C1L,0x0AAA74AFL,18446744073709551610UL},{0UL,0UL,18446744073709551615UL},{18446744073709551615UL,0xD828AF83L,0x26084209L},{0xD2415078L,18446744073709551615UL,18446744073709551606UL},{18446744073709551615UL,0xA238AB09L,18446744073709551615UL},{0UL,5UL,0x473F79E0L}}};
    char *l_2095[3][4] = {{&g_805[0],&l_2059[1],&l_2059[1],&g_805[0]},{&l_2059[0],&l_2059[1],(void*)0,&l_2059[1]},{&l_2059[1],&g_79,(void*)0,(void*)0}};
    short *l_2096 = &g_656;
    int l_2097[10][10] = {{0xBFDE897DL,0x8B1B63D6L,0xF28518FDL,(-1L),0x8B1B63D6L,(-1L),0xF28518FDL,0x8B1B63D6L,0xBFDE897DL,0xBFDE897DL},{(-9L),(-6L),(-6L),0xF28518FDL,0xF28518FDL,(-6L),(-1L),0xBFDE897DL,(-6L),0xBFDE897DL},{0xF28518FDL,0x53FED7A1L,1L,0xF28518FDL,1L,0x53FED7A1L,0xF28518FDL,0L,0L,0xF28518FDL},{0L,0xBFDE897DL,1L,1L,0xBFDE897DL,0L,0x53FED7A1L,0xBFDE897DL,0x53FED7A1L,0L},{(-1L),0xBFDE897DL,(-6L),0xBFDE897DL,(-1L),(-6L),0xF28518FDL,0xF28518FDL,(-6L),(-1L)},{(-1L),0x53FED7A1L,0x53FED7A1L,(-1L),1L,0L,(-1L),0L,1L,(-1L)},{0L,(-1L),0L,1L,(-1L),0x53FED7A1L,0x53FED7A1L,(-1L),1L,0L},{0xF28518FDL,0xF28518FDL,(-6L),(-1L),0xBFDE897DL,(-6L),0xBFDE897DL,(-1L),(-6L),0xF28518FDL},{0xBFDE897DL,0x53FED7A1L,0L,0xBFDE897DL,1L,1L,0xBFDE897DL,0L,0x53FED7A1L,0xBFDE897DL},{0L,0xF28518FDL,0x53FED7A1L,1L,0xF28518FDL,1L,0x53FED7A1L,0xF28518FDL,0L,0L}};
    int **l_2098[6] = {&g_119,&g_119,&g_119,&g_119,&g_119,&g_119};
    char ***l_2099[8][5][1] = {{{&g_673[2]},{(void*)0},{&g_673[2]},{&g_673[2]},{&g_673[0]}},{{&g_673[2]},{&g_673[0]},{&g_673[2]},{&g_673[2]},{&g_673[0]}},{{&g_673[2]},{&g_673[0]},{&g_673[2]},{&g_673[2]},{&g_673[0]}},{{&g_673[2]},{&g_673[0]},{&g_673[2]},{&g_673[2]},{&g_673[0]}},{{&g_673[2]},{&g_673[0]},{&g_673[2]},{&g_673[2]},{&g_673[0]}},{{&g_673[2]},{&g_673[0]},{&g_673[2]},{&g_673[2]},{&g_673[0]}},{{&g_673[2]},{&g_673[0]},{&g_673[2]},{&g_673[2]},{&g_673[0]}},{{&g_673[2]},{&g_673[0]},{&g_673[2]},{&g_673[2]},{&g_673[0]}}};
    unsigned short l_2101 = 0UL;
    unsigned l_2110[1];
    int l_2130 = 0x393DCB92L;
    unsigned l_2153[1];
    short l_2156 = (-1L);
    int *l_2158 = &g_16;
    int *l_2159 = &l_1970;
    unsigned l_2170 = 4294967295UL;
    int l_2213 = 1L;
    int l_2217 = 6L;
    unsigned char l_2264 = 0x60L;
    unsigned char l_2306 = 0xDAL;
    int l_2364[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
    int l_2369 = 0L;
    int *l_2371 = (void*)0;
    int *l_2385 = &l_2061;
    unsigned short l_2409 = 1UL;
    char l_2429 = 0xF5L;
    unsigned l_2449 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_2059[i] = 0L;
    for (i = 0; i < 6; i++)
        l_2069[i] = (-1L);
    for (i = 0; i < 1; i++)
        l_2110[i] = 0UL;
    for (i = 0; i < 1; i++)
        l_2153[i] = 0x10FAEF08L;
    if (((l_1926 ^ 7UL) <= l_1927))
    {
        unsigned char ***l_1938 = &g_168[2];
        unsigned char l_1953 = 0x4FL;
        int l_1965[4][10] = {{0L,0x0188E41CL,0x0188E41CL,0L,0x0188E41CL,0x0188E41CL,0L,0x0188E41CL,0x0188E41CL,0L},{0x0188E41CL,0L,0x0188E41CL,0x0188E41CL,0L,0x0188E41CL,0x0188E41CL,0L,0x0188E41CL,0x0188E41CL},{0L,0L,2L,0L,0L,2L,0L,0L,2L,0L},{0L,0x0188E41CL,0x0188E41CL,0L,0x0188E41CL,0x0188E41CL,0L,0x0188E41CL,0x0188E41CL,0L}};
        int l_1986 = 0x2CB2D2CCL;
        int **l_1992 = &g_1545[1];
        int l_2041 = 0xFB1C216CL;
        int i, j;
        for (g_68 = 0; (g_68 >= 6); g_68 = safe_add_func_int32_t_s_s(g_68, 7))
        {
            int *l_1939 = (void*)0;
            unsigned *l_1949[3];
            int l_1962[2];
            int l_1990 = 0x02FA13EAL;
            unsigned ***l_1995 = &g_1533;
            char l_2002[2];
            char ***l_2003 = &g_673[2];
            unsigned char ****l_2017 = (void*)0;
            int i;
            for (i = 0; i < 3; i++)
                l_1949[i] = &g_203;
            for (i = 0; i < 2; i++)
                l_1962[i] = (-5L);
            for (i = 0; i < 2; i++)
                l_2002[i] = 1L;
        }
    }
    else
    {
        unsigned char *****l_2042 = (void*)0;
        unsigned char ******l_2043 = &l_2042;
        int l_2046 = (-8L);
        int l_2047 = 1L;
        int *l_2048 = &l_1966;
        int *l_2049 = &l_2047;
        int *l_2050 = &g_1342;
        int *l_2051 = &g_1753;
        int *l_2052 = &l_1969;
        int *l_2053 = &g_1753;
        int *l_2054 = (void*)0;
        int *l_2055[3];
        short l_2065 = 0L;
        unsigned char l_2070[2];
        short *l_2079 = &g_606;
        int i;
        for (i = 0; i < 3; i++)
            l_2055[i] = &g_1868[6][6][0];
        for (i = 0; i < 2; i++)
            l_2070[i] = 255UL;
        (**g_1734) |= ((g_2044 = ((*l_2043) = (l_2022 , l_2042))) != l_2045[3][1]);

        ;
        l_2070[1]--;
        (*l_2048) &= ((((*l_2049) && (safe_sub_func_uint32_t_u_u(((l_2022 , l_2075) != &l_2076[6]), (safe_mul_func_uint8_t_u_u((((*l_2079) &= (((void*)0 != p_27) < (p_28 , (*l_2050)))) , (&g_1005 == &g_1005)), l_2080[0][1][2]))))) ^ (*l_2050)) | (*l_2053));
        (*g_1734) = &p_26;


    }


    ;
    if ((l_2060 ^ ((safe_div_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((((safe_mul_func_int16_t_s_s((safe_div_func_uint8_t_u_u((((**g_672) = (***l_2020)) != (void*)0), p_25)), g_1397[6])) != (*p_27)) | p_26) & (**g_1063)), (*p_27))), p_28)) == p_26)))
    {
        int l_2105 = (-1L);
        int l_2111 = 0x52758B54L;
        int l_2112 = 0L;
        unsigned l_2113 = 0xC5334899L;
        int **l_2114 = &g_1458[0];
        p_24 = (p_26 , (*g_1734));

        ;
        (*p_27) &= ((l_2101 |= 0x31B71C43L) , (p_25 & (**l_2114)));
    }
    else
    {
        unsigned char l_2115 = 0x6CL;
        int l_2124 = 0x21499C02L;
        int l_2128 = (-6L);
        int l_2131 = 0x1B4C02A6L;
        int l_2133 = 0x58F2018AL;
        int *l_2143[5] = {&g_1868[1][5][0],&g_1868[1][5][0],&g_1868[1][5][0],&g_1868[1][5][0],&g_1868[1][5][0]};
        int i;
        (*p_27) = l_2115;
        for (l_1927 = 25; (l_1927 > 59); ++l_1927)
        {
            char l_2127[2][3][7] = {{{(-1L),0x72L,0x8FL,0x41L,0x72L,0L,0x2AL},{0x2AL,0L,0x72L,0x41L,0x72L,0L,0x2AL},{0x2AL,0L,0x72L,0x41L,0x72L,0L,0x2AL}},{{0x2AL,0L,0x72L,0x41L,0x72L,0L,0x2AL},{0x2AL,0L,0x72L,0x41L,0x72L,0L,0x2AL},{0x2AL,0L,0x72L,0x41L,0x72L,0L,0x2AL}}};
            int l_2129 = 1L;
            int l_2132 = (-4L);
            unsigned l_2139 = 0x2AFAF95AL;
            int i, j, k;
        }
        (*p_27) |= (safe_rshift_func_int8_t_s_s(p_26, (***g_672)));
    }

    ;
    for (l_2068 = (-28); (l_2068 <= 10); ++l_2068)
    {
        int l_2152 = 0x3DE503E5L;
        unsigned char l_2157 = 0x90L;
        int *l_2160 = &l_2058;
        int l_2161 = 6L;
        int l_2164 = (-9L);
        int l_2166 = 0xEA23FF0BL;
        int l_2168[9][8][2] = {{{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L}},{{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L}},{{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L}},{{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L}},{{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L}},{{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L}},{{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L}},{{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L}},{{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L},{0x640C5587L,0x640C5587L}}};
        int *l_2183[9][2] = {{&l_2068,&g_1868[6][6][0]},{&l_2068,&l_2068},{&l_2068,&g_1868[6][6][0]},{&l_2068,&l_2068},{&l_2068,&g_1868[6][6][0]},{&l_2068,&l_2068},{&l_2068,&g_1868[6][6][0]},{&l_2068,&l_2068},{&l_2068,&g_1868[6][6][0]}};
        char l_2206[3][4] = {{0L,0xE0L,0L,0x18L},{0L,0x18L,0x18L,0L},{(-1L),0x18L,(-5L),0x18L}};
        volatile int *l_2214[2][2][7] = {{{&g_15,&g_3[0][0],&g_3[5][2],&g_3[5][2],&g_3[0][0],&g_15,&g_3[0][0]},{&g_3[0][3],(void*)0,(void*)0,&g_3[0][3],&g_12[1],&g_3[0][3],(void*)0}},{{&g_11[4][7],&g_11[4][7],&g_15,&g_3[5][2],&g_15,&g_11[4][7],&g_11[4][7]},{&g_11[3][1],(void*)0,&g_3[1][2],(void*)0,&g_11[3][1],&g_11[3][1],(void*)0}}};
        int ***l_2227[10][5][5] = {{{&g_63,&g_1728[4],&g_1728[7],(void*)0,&l_2098[1]},{&g_63,(void*)0,&g_1734,&g_63,(void*)0},{&g_1728[3],&g_1734,&g_1728[3],&g_1734,&g_1728[3]},{&g_1734,&l_2098[2],(void*)0,&g_1728[5],&g_1728[3]},{&l_2098[2],&g_63,(void*)0,&g_1728[3],&g_1728[1]}},{{&l_2098[2],&g_63,&g_1734,&l_2098[2],&g_1728[3]},{&l_2098[3],&g_1728[3],&g_1728[7],&g_1728[7],&g_1728[3]},{&g_1728[3],&g_1734,&l_2098[0],&g_1728[2],(void*)0},{&g_1728[4],&l_2098[2],(void*)0,&l_2098[2],&l_2098[1]},{&g_1734,&g_1728[4],&l_2098[0],&g_1728[1],&g_63}},{{&g_1734,&g_1728[1],(void*)0,&g_1728[4],(void*)0},{&g_1728[2],&g_1728[2],&g_1728[1],&g_63,&g_1728[3]},{&g_1728[1],&g_1734,&l_2098[3],&g_1728[1],&l_2098[1]},{&g_1728[4],&g_1734,&g_1728[5],(void*)0,&g_1734},{&l_2098[1],&g_1734,&g_1734,&l_2098[2],&l_2098[2]}},{{&g_1728[3],&g_1728[2],&g_1728[3],&g_1728[5],&g_63},{&g_1728[4],&g_1728[1],&g_1728[7],(void*)0,&l_2098[2]},{&l_2098[2],&g_1728[4],&g_1728[3],&g_63,&g_1728[2]},{(void*)0,&l_2098[1],&g_1728[7],&l_2098[2],&l_2098[2]},{&g_1728[4],&g_1728[3],&g_1728[3],&g_1728[4],(void*)0}},{{(void*)0,&g_1728[4],&g_1734,&g_1728[3],&g_1728[4]},{(void*)0,&l_2098[2],&g_1728[5],&l_2098[0],&g_63},{&g_1734,(void*)0,&l_2098[3],&g_1728[3],&g_1728[7]},{&g_63,&g_1728[4],&g_1728[1],&g_1728[4],&g_63},{&l_2098[3],(void*)0,(void*)0,&l_2098[2],&l_2098[1]}},{{&g_1728[2],(void*)0,&l_2098[0],&g_63,(void*)0},{(void*)0,&g_1734,&l_2098[3],(void*)0,&l_2098[1]},{&g_1728[1],&g_63,&g_1728[5],&g_1728[5],&g_63},{&g_1728[1],&g_1734,&g_1728[3],&g_63,&l_2098[2]},{&g_1728[5],&g_1728[1],(void*)0,(void*)0,(void*)0}},{{&g_1728[3],&l_2098[2],&l_2098[2],(void*)0,&g_1728[7]},{&g_1728[5],&g_1734,&l_2098[2],&l_2098[0],&l_2098[2]},{&g_1728[1],&g_1728[1],&l_2098[2],&g_1728[7],&l_2098[3]},{&g_1734,&g_1728[5],&l_2098[5],&g_1734,&g_1728[1]},{&l_2098[2],&g_1728[3],&g_1728[3],(void*)0,&g_1728[3]}},{{&g_1728[1],&g_1728[5],&g_1728[2],(void*)0,(void*)0},{&g_1734,&g_1728[1],&g_1734,&g_1728[3],&g_63},{&l_2098[0],&g_1734,&g_1734,&g_1734,&g_1728[1]},{&g_1734,&l_2098[2],(void*)0,&g_1728[7],&g_1728[1]},{&l_2098[2],&g_1728[1],&g_1734,&g_1728[1],&g_1728[3]}},{{&l_2098[2],&g_1734,&g_1734,&l_2098[2],&l_2098[2]},{&g_1734,&l_2098[0],&g_1728[2],(void*)0,&l_2098[0]},{&l_2098[2],&g_1734,&g_1728[3],&l_2098[2],&g_63},{&g_1728[5],&l_2098[2],&l_2098[5],(void*)0,&g_1734},{&g_1728[7],&l_2098[2],&l_2098[2],&l_2098[2],&g_1728[7]}},{{&l_2098[5],&g_1734,&l_2098[2],&g_1728[1],&g_1728[1]},{&g_1728[1],&l_2098[2],&l_2098[2],&g_1728[7],&l_2098[3]},{&g_1734,&g_1734,&g_63,&g_1728[3],(void*)0},{&l_2098[3],&g_1734,&g_1728[3],&g_1728[3],&g_1734},{(void*)0,&g_1734,&g_1728[1],(void*)0,&g_1728[3]}}};
        unsigned l_2281 = 0xDE6BB827L;
        unsigned char l_2323 = 0x36L;
        int *l_2330 = &g_16;
        unsigned l_2338 = 0x6983A717L;
        char *l_2345 = (void*)0;
        int *l_2402 = &g_5;
        int i, j, k;
    }
    return &g_1458[5];



}







static int * func_29(int p_30, int * p_31, char p_32, int ** p_33, short p_34)
{
    int l_1361 = 0x02B424E5L;
    unsigned short l_1365 = 1UL;
    int *l_1366[2][6] = {{&g_16,&g_16,&g_1280,&g_16,&g_16,&g_1280},{&g_16,&g_16,&g_1280,&g_16,&g_16,&g_1280}};
    unsigned short ***l_1381 = &g_1063;
    unsigned short ****l_1380 = &l_1381;
    short l_1456 = 1L;
    char l_1460 = 0xE3L;
    short l_1553 = 8L;
    unsigned l_1568[6][9][4] = {{{5UL,0x2B539002L,0UL,18446744073709551615UL},{0xB415AD86L,1UL,0x877228C6L,0xAE7A31BEL},{18446744073709551607UL,0UL,5UL,5UL},{0xAE93E954L,0UL,18446744073709551610UL,0x7F4F1F76L},{8UL,0x26978387L,0xD00878CAL,1UL},{0x877228C6L,5UL,0x7474B817L,0x19990F13L},{0xAF278419L,8UL,0xAF278419L,9UL},{9UL,1UL,0x7F4F1F76L,1UL},{0x2ABD0178L,1UL,0x897F9CCCL,1UL}},{{0xB872904BL,0x72D4F275L,0x897F9CCCL,0xB415AD86L},{0x2ABD0178L,0x9C739074L,0x7F4F1F76L,5UL},{9UL,0x2ABD0178L,0xAF278419L,0xA5562BE3L},{0xAF278419L,0xA5562BE3L,0x7474B817L,1UL},{0x877228C6L,0xBE45C5BDL,0xD00878CAL,0xB872904BL},{8UL,5UL,18446744073709551610UL,0UL},{0xAE93E954L,0x7A15DE54L,5UL,0xD00878CAL},{18446744073709551607UL,0x4BC542C8L,0x877228C6L,0x877228C6L},{0xB415AD86L,5UL,1UL,0x26978387L}},{{18446744073709551615UL,0x897F9CCCL,0xAE93E954L,0x62257234L},{0xB872904BL,0x2ABD0178L,1UL,0xAE93E954L},{0xB415AD86L,0x2ABD0178L,0x7A15DE54L,0x62257234L},{0x2ABD0178L,0x897F9CCCL,0x877228C6L,0x26978387L},{0xD839757EL,5UL,1UL,5UL},{5UL,1UL,0x4BC542C8L,0xAF278419L},{0x72D4F275L,0xB415AD86L,0xBE45C5BDL,1UL},{0x4BC542C8L,0x19990F13L,0x897F9CCCL,0UL},{1UL,0xB872904BL,0x62257234L,1UL}},{{0xAF278419L,0xBE45C5BDL,0xAE7A31BEL,0xBE45C5BDL},{0x897F9CCCL,0xAE7A31BEL,8UL,0x19990F13L},{1UL,0x7F4F1F76L,1UL,5UL},{0x26978387L,8UL,0xB415AD86L,0xA5562BE3L},{0x26978387L,9UL,1UL,0x2B539002L},{1UL,0xA5562BE3L,8UL,18446744073709551610UL},{0x897F9CCCL,0x6ECFE255L,0xAE7A31BEL,1UL},{0xAF278419L,0x72D4F275L,0x62257234L,0x897F9CCCL},{1UL,0xD839757EL,0x897F9CCCL,18446744073709551608UL}},{{0x4BC542C8L,0x7474B817L,0xBE45C5BDL,18446744073709551615UL},{0x72D4F275L,18446744073709551607UL,0x4BC542C8L,0x877228C6L},{5UL,1UL,1UL,5UL},{0xD839757EL,0x62257234L,0x877228C6L,18446744073709551607UL},{0x2ABD0178L,18446744073709551608UL,0x7A15DE54L,9UL},{18446744073709551608UL,0x897F9CCCL,0xD839757EL,1UL},{1UL,9UL,18446744073709551607UL,0x9C739074L},{0x62257234L,5UL,0x19990F13L,0xD00878CAL},{0UL,18446744073709551615UL,0x7474B817L,0UL}},{{0x7F4F1F76L,0x9C739074L,0x2ABD0178L,0x62257234L},{0x7A15DE54L,0xA5562BE3L,0UL,9UL},{18446744073709551615UL,0x72D4F275L,1UL,0x877228C6L},{0x7474B817L,0xAF278419L,0xBE45C5BDL,0xAE7A31BEL},{0x2B539002L,18446744073709551615UL,0x2B539002L,0x897F9CCCL},{0x897F9CCCL,0xAE095B74L,9UL,0xB415AD86L},{0xB872904BL,1UL,5UL,0xAE095B74L},{1UL,5UL,5UL,0UL},{0xB872904BL,1UL,9UL,0x2ABD0178L}}};
    int *l_1582 = &l_1361;
    int *l_1653[10][7][3] = {{{&g_1280,&g_1397[6],&g_120},{&g_5,&g_1280,&g_5},{(void*)0,(void*)0,&g_1280},{&g_5,&g_1342,&g_1280},{&g_1280,&g_1280,(void*)0},{&g_1342,(void*)0,(void*)0},{&g_16,&g_1280,(void*)0}},{{(void*)0,&g_120,&g_1280},{&g_120,&g_120,&g_1280},{&g_5,&g_1342,&g_5},{&g_1280,&g_120,&g_120},{&g_1280,&g_120,(void*)0},{(void*)0,&g_1280,&g_16},{(void*)0,(void*)0,&g_1342}},{{(void*)0,&g_16,(void*)0},{(void*)0,&g_5,(void*)0},{&g_16,&g_120,&g_120},{&g_5,(void*)0,(void*)0},{&g_1397[6],&g_1342,(void*)0},{&g_120,(void*)0,&g_5},{(void*)0,&g_5,(void*)0}},{{&g_5,(void*)0,&g_120},{(void*)0,&g_1342,&g_1397[6]},{(void*)0,(void*)0,&g_5},{&g_120,&g_120,&g_16},{(void*)0,&g_5,(void*)0},{(void*)0,&g_16,&g_1280},{&g_5,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_1280},{&g_120,&g_1342,(void*)0},{&g_1397[6],&g_120,&g_16},{&g_5,&g_1342,&g_5},{&g_16,&g_120,&g_1397[6]},{(void*)0,&g_1342,&g_120},{&g_1280,(void*)0,(void*)0}},{{(void*)0,(void*)0,&g_5},{&g_1280,&g_16,(void*)0},{(void*)0,&g_5,(void*)0},{&g_16,&g_120,&g_120},{&g_5,(void*)0,(void*)0},{&g_1397[6],&g_1342,(void*)0},{&g_120,(void*)0,&g_5}},{{(void*)0,&g_5,(void*)0},{&g_5,(void*)0,&g_120},{(void*)0,&g_1342,&g_1397[6]},{(void*)0,(void*)0,&g_5},{&g_120,&g_5,(void*)0},{(void*)0,(void*)0,&g_1342},{&g_1342,(void*)0,&g_120}},{{(void*)0,&g_1342,&g_1342},{&g_120,&g_1342,&g_120},{&g_5,&g_5,&g_1342},{&g_16,&g_1280,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_1280,&g_16},{&g_1342,&g_5,&g_5}},{{&g_120,&g_1342,&g_120},{&g_1342,&g_1342,(void*)0},{&g_120,(void*)0,&g_1342},{&g_1342,(void*)0,(void*)0},{(void*)0,&g_5,&g_5},{(void*)0,&g_1342,(void*)0},{&g_16,(void*)0,&g_1342}},{{&g_5,&g_1342,(void*)0},{&g_120,&g_1280,&g_120},{(void*)0,&g_1342,&g_5},{&g_1342,(void*)0,&g_16},{(void*)0,&g_1342,(void*)0},{&g_5,&g_5,(void*)0},{(void*)0,(void*)0,&g_1342}}};
    char l_1687[10] = {0x70L,(-1L),(-2L),(-1L),0x70L,0x70L,(-1L),(-2L),(-1L),0x70L};
    int l_1719 = 0x5101F638L;
    int ***l_1774 = &g_653;
    unsigned char l_1844[10];
    unsigned char ****l_1883 = &g_1006;
    int *l_1891 = (void*)0;
    int *l_1924[4][7] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_16,&g_1868[3][4][0],&g_16,&g_16,&g_1868[3][4][0],&g_16,&g_16},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_16,&g_1342,&g_1342,&g_16,&g_1342,&g_1342,&g_16}};
    int i, j, k;
    for (i = 0; i < 10; i++)
        l_1844[i] = 255UL;
    for (g_574 = 0; (g_574 >= 27); g_574++)
    {
        char l_1364[10][3][2] = {{{0xB2L,0xB2L},{1L,0L},{(-1L),0L}},{{0x0DL,1L},{6L,0x0DL},{1L,(-1L)}},{{1L,0x0DL},{6L,1L},{0x0DL,0L}},{{(-1L),0L},{1L,0xB2L},{0xB2L,0xB2L}},{{1L,0L},{(-1L),0L},{0x0DL,1L}},{{6L,0x0DL},{1L,(-1L)},{1L,0x0DL}},{{6L,1L},{0x0DL,0L},{(-1L),0L}},{{1L,0xB2L},{0xB2L,0xB2L},{1L,0L}},{{(-1L),0L},{0x0DL,1L},{6L,0x0DL}},{{1L,(-1L)},{1L,0x0DL},{6L,1L}}};
        int l_1369 = 4L;
        int l_1370 = 0xB618FE86L;
        unsigned **l_1399[3][10] = {{&g_328,(void*)0,&g_328,&g_328,(void*)0,&g_328,&g_328,(void*)0,&g_328,&g_328},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_328,&g_328,(void*)0,&g_328,&g_328,(void*)0,&g_328,&g_328,(void*)0}};
        unsigned ***l_1398 = &l_1399[2][3];
        unsigned short l_1425 = 0xFA65L;
        unsigned short ****l_1426 = &l_1381;
        int l_1430 = 6L;
        int l_1431 = 0x759EE4ADL;
        int l_1434 = 0xCB6334C8L;
        unsigned short l_1436 = 65529UL;
        int l_1461[3][8][7] = {{{0xF013EC5CL,0x24061354L,1L,0L,0x16659E0EL,0xEAE5249FL,8L},{0xF013EC5CL,1L,(-9L),(-2L),8L,0xEAE5249FL,0x16659E0EL},{0xBFA4ACF2L,(-10L),0xA25D0016L,(-2L),0x16659E0EL,0xEE622136L,0L},{(-2L),(-10L),(-9L),0L,0L,(-1L),0L},{0xBFA4ACF2L,1L,1L,0xBFA4ACF2L,0L,0xEE622136L,0x16659E0EL},{0xF013EC5CL,0x24061354L,1L,0L,0x16659E0EL,0xEAE5249FL,8L},{0xF013EC5CL,1L,(-9L),(-2L),8L,0xEAE5249FL,0x16659E0EL},{0xBFA4ACF2L,(-10L),0xA25D0016L,(-2L),0x16659E0EL,0xEE622136L,0L}},{{(-2L),(-10L),(-9L),0L,0L,(-1L),0L},{0xBFA4ACF2L,1L,1L,0xBFA4ACF2L,0L,0xEE622136L,0x16659E0EL},{0xF013EC5CL,0x24061354L,1L,0L,0x16659E0EL,0xEAE5249FL,8L},{0xF013EC5CL,1L,(-9L),(-2L),8L,0xEAE5249FL,0x16659E0EL},{0xBFA4ACF2L,(-10L),0xA25D0016L,0xEAE5249FL,0xF013EC5CL,0xE9B1CC8FL,0L},{0xEAE5249FL,4L,(-4L),0xEE622136L,0L,6L,0L},{(-1L),0x64E38B13L,0x64E38B13L,(-1L),0L,0xE9B1CC8FL,0xF013EC5CL},{0L,0x27405EF1L,0x64E38B13L,0xEE622136L,0xF013EC5CL,(-1L),0x10D52C88L}},{{0L,0x64E38B13L,(-4L),0xEAE5249FL,0x10D52C88L,(-1L),0xF013EC5CL},{(-1L),4L,(-4L),0xEAE5249FL,0xF013EC5CL,0xE9B1CC8FL,0L},{0xEAE5249FL,4L,(-4L),0xEE622136L,0L,6L,0L},{(-1L),0x64E38B13L,0x64E38B13L,(-1L),0L,0xE9B1CC8FL,0xF013EC5CL},{0L,0x27405EF1L,0x64E38B13L,0xEE622136L,0xF013EC5CL,(-1L),0x10D52C88L},{0L,0x64E38B13L,(-4L),0xEAE5249FL,0x10D52C88L,(-1L),0xF013EC5CL},{(-1L),4L,(-4L),0xEAE5249FL,0xF013EC5CL,0xE9B1CC8FL,0L},{0xEAE5249FL,4L,(-4L),0xEE622136L,0L,6L,0L}}};
        unsigned char l_1491 = 0xC4L;
        unsigned char l_1523 = 1UL;
        unsigned l_1549 = 0x90569669L;
        int i, j, k;
        for (g_68 = (-2); (g_68 > 47); g_68++)
        {
            int *l_1358 = &g_16;
            unsigned short *l_1371 = &g_111[0][2][0];
            unsigned char *l_1378 = &g_575;
            int l_1379[10][10] = {{0xFD61E8B8L,(-5L),0xBD650EA6L,6L,0xF13B6F4CL,1L,0xBF4A8E65L,0xBF4A8E65L,1L,0xF13B6F4CL},{0L,0xFD61E8B8L,0xFD61E8B8L,0L,0x7E3C3226L,0xFD61E8B8L,0L,0xC628F2ADL,0xBD650EA6L,0xC628F2ADL},{(-5L),6L,0x6E0FF5B8L,0xC628F2ADL,0x6E0FF5B8L,6L,(-5L),0L,0xBD650EA6L,0L},{0L,0xFD61E8B8L,0x7E3C3226L,0xF13B6F4CL,(-5L),(-5L),0xF13B6F4CL,0x7E3C3226L,0xFD61E8B8L,0L},{0xF6F33C26L,0xFD61E8B8L,0xBD650EA6L,0xBF4A8E65L,0xC628F2ADL,0L,(-5L),0L,0xC628F2ADL,0xBF4A8E65L},{0xBF4A8E65L,6L,0xBF4A8E65L,0xFD61E8B8L,0xC628F2ADL,1L,0L,0x6E0FF5B8L,0x6E0FF5B8L,0L},{0xC628F2ADL,(-5L),1L,1L,(-5L),0xC628F2ADL,0xF6F33C26L,0x6E0FF5B8L,0xF13B6F4CL,0L},{6L,0L,0xBF4A8E65L,0x7E3C3226L,0x6E0FF5B8L,0x7E3C3226L,0xBF4A8E65L,0L,6L,0xC628F2ADL},{6L,1L,0xBD650EA6L,0xF6F33C26L,0x7E3C3226L,0xC628F2ADL,0xC628F2ADL,0x7E3C3226L,0xF6F33C26L,0xBD650EA6L},{0xC628F2ADL,0xC628F2ADL,0x7E3C3226L,0xF6F33C26L,0xBD650EA6L,1L,6L,0L,6L,1L}};
            unsigned l_1463 = 0UL;
            int i, j;
            (*p_33) = l_1358;

            ;
            (*p_31) = ((safe_sub_func_int8_t_s_s((***g_672), l_1361)) >= 0x0AL);
            if (((safe_mod_func_int8_t_s_s(((*g_674) = l_1364[7][2][1]), (*l_1358))) | (l_1365 , (func_37(l_1366[0][1], p_32, func_41(g_866, (safe_rshift_func_uint8_t_u_s(((++(*l_1371)) || ((((*l_1358) != (**p_33)) <= ((*l_1378) = (safe_mod_func_int8_t_s_s((safe_div_func_uint8_t_u_u((1L || p_34), (*l_1358))), (*l_1358))))) || (**g_1063))), 2)), l_1379[8][8], p_34)) , (*p_31)))))
            {
                int *l_1391[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1391[i] = &l_1379[8][8];
                if ((l_1380 != &l_1381))
                {
                    (*g_1193) = (*g_1193);
                }
                else
                {
                    int l_1384 = (-6L);
                    int l_1433 = 0L;
                    for (l_1361 = 26; (l_1361 >= 8); l_1361--)
                    {
                        l_1384 |= l_1370;
                        (*p_31) = (**p_33);
                    }
                    for (g_625 = 0; (g_625 <= 35); g_625 = safe_add_func_uint32_t_u_u(g_625, 8))
                    {
                        int ***l_1404 = (void*)0;
                        int ***l_1405 = &g_63;
                        int **l_1407[1];
                        int ***l_1406 = &l_1407[0];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1407[i] = &l_1391[2];
                    }
                    (*g_1193) = (*g_1193);
                    for (g_136 = 29; (g_136 == 44); g_136 = safe_add_func_uint8_t_u_u(g_136, 2))
                    {
                        int l_1429 = 0x40F0D03EL;
                        int l_1432 = (-1L);
                        int l_1435[10] = {2L,2L,2L,2L,2L,2L,2L,2L,2L,2L};
                        short *l_1449 = &g_656;
                        short *l_1450 = &g_1226;
                        int i;
                        --l_1436;
                        l_1379[2][4] ^= (safe_sub_func_int32_t_s_s(((*p_31) = ((g_203 ^= (safe_rshift_func_uint8_t_u_u(255UL, p_34))) , (safe_rshift_func_uint8_t_u_s((l_1384 = l_1432), l_1433)))), (safe_add_func_uint8_t_u_u((((func_37((*g_63), (*g_674), &l_1379[2][2]) != (!(safe_rshift_func_int16_t_s_u(((*l_1450) |= ((*l_1449) = p_32)), (*l_1358))))) != 0UL) , (*l_1358)), l_1432))));
                        (*g_63) = (void*)0;

                        ;
                        (*p_31) = ((*p_31) >= (l_1435[1] & 1UL));
                    }

                    ;
                }

                ;
            }
            else
            {
                int l_1455 = 3L;
                int *l_1457 = &l_1431;
                int l_1459[1];
                int l_1462 = 1L;
                int i;
                for (i = 0; i < 1; i++)
                    l_1459[i] = 1L;
                (*p_31) = (safe_div_func_uint16_t_u_u((((*g_674) = (((safe_sub_func_uint16_t_u_u(func_37((*g_63), (*l_1358), (*p_33)), (((l_1425 == l_1369) != (l_1431 = (l_1455 = p_30))) && (g_203 |= 0xB7F571BEL)))) > (*l_1358)) && p_34)) || (*l_1358)), 65530UL));
                if (l_1456)
                {
                    return g_1458[1];


                }
                else
                {
                    (*p_31) = (func_37((*g_63), (func_37((*g_63), p_32, &l_1455) > (-5L)), (((**g_63) && 1L) , func_46(&g_1458[1], (***g_1400), &g_1458[1], &l_1455, (*l_1358)))) , (-7L));
                }
                --l_1463;
            }

            ;
        }
        (*p_33) = (p_34 , &l_1434);

        ;
        if (((**g_63) = (p_34 <= (l_1461[1][0][0] ^= func_37((*p_33), (***g_672), func_46(&g_64, p_30, &g_1458[1], (*p_33), l_1436))))))
        {
            unsigned short l_1470 = 0xC4BDL;
            short **l_1476 = (void*)0;
            short ***l_1475 = &l_1476;
            short ***l_1478 = &g_1477;
            unsigned short l_1479 = 0x7201L;
            int l_1495 = 0x5698991DL;
            int l_1501 = 0xC40B7738L;
            int l_1502 = 0x48B500B8L;
            int l_1504 = (-1L);
            if (func_37(func_46(&l_1366[0][1], ((safe_add_func_uint16_t_u_u((func_37(((*g_63) = ((((4294967295UL & (l_1470 ^= (***g_1400))) || p_32) != (safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((**g_63) , (p_30 , (((*l_1475) = (void*)0) != ((*l_1478) = g_1477)))), 11)), 0xA355C284L))) , l_1366[0][0])), p_34, p_31) >= l_1369), (-8L))) > l_1425), &g_1458[1], &l_1461[1][0][0], l_1370), l_1479, &g_1397[6]))
            {
                for (g_203 = (-9); (g_203 < 37); ++g_203)
                {
                    int *l_1482 = &l_1431;
                    return (*p_33);


                }
            }
            else
            {
                unsigned char l_1487[9];
                int l_1490 = (-5L);
                int l_1499 = (-2L);
                int l_1500[6][7][6] = {{{0xFE3A8412L,0xDE061E06L,0L,0x62409C12L,0L,7L},{(-1L),(-2L),0L,0x1F591707L,0xB5DF624FL,1L},{8L,0xFFF8E303L,0x934EAC91L,1L,1L,0x174B960DL},{0xDBB3153FL,4L,0x59199FBBL,1L,1L,(-1L)},{8L,0L,0x50C9F97CL,0x1F591707L,0x59199FBBL,0xECAB0C5FL},{(-1L),1L,(-9L),0x62409C12L,(-1L),(-8L)},{0xFE3A8412L,0xB5DF624FL,0L,(-9L),3L,3L}},{{0x47C8C7C7L,0x75F18E88L,0x75F18E88L,0x47C8C7C7L,1L,0L},{5L,(-10L),8L,0L,(-2L),(-9L)},{0x0135165CL,0L,7L,8L,(-2L),0x1963C95DL},{4L,(-10L),(-1L),(-6L),1L,3L},{0xFBAE6C0BL,0x75F18E88L,0L,0x3628CFD8L,3L,0x59199FBBL},{0x84E9DD67L,0xB5DF624FL,7L,4L,(-1L),0x75F18E88L},{0L,1L,3L,0x2144ED8CL,0x59199FBBL,0L}},{{0x3130A654L,0L,0x9F7A423BL,0xCDA2E417L,1L,0x934EAC91L},{1L,4L,(-8L),(-1L),1L,1L},{0L,0xECAB0C5FL,0L,(-6L),0x09C51C98L,(-7L)},{1L,0xFFF8E303L,(-9L),0L,0x59199FBBL,8L},{5L,1L,0x35188A0EL,0x0135165CL,0x1963C95DL,1L},{(-10L),(-6L),0x9F7A423BL,0x3628CFD8L,(-6L),(-9L)},{(-6L),1L,0x50C9F97CL,0xE5CA0FF7L,3L,7L}},{{0xC7844936L,3L,0x934EAC91L,0xFBAE6C0BL,1L,0L},{0xC7844936L,0x174B960DL,(-6L),0xE5CA0FF7L,0xB5DF624FL,(-1L)},{(-6L),3L,8L,0x3628CFD8L,0L,3L},{(-10L),0L,0x174B960DL,0x0135165CL,0L,4L},{5L,(-1L),0L,0L,0L,(-1L)},{1L,0x9F7A423BL,0xB5DF624FL,(-6L),(-7L),0x75F18E88L},{0L,7L,1L,0L,0L,0x1963C95DL}},{{0x77870C76L,7L,1L,0x62409C12L,(-7L),0L},{0x2144ED8CL,0x9F7A423BL,0x59199FBBL,0xCDA2E417L,0L,0x35188A0EL},{0L,(-1L),(-1L),0x04FEC563L,0L,(-10L)},{(-6L),0L,3L,0x47C8C7C7L,(-3L),0L},{3L,0L,0xFE436B37L,0x174B960DL,(-1L),2L},{(-9L),0xCB0568AFL,(-10L),1L,1L,0xFE436B37L},{(-2L),0x106A97DFL,(-10L),0L,0L,2L}},{{1L,1L,0xFE436B37L,0xDE061E06L,1L,0L},{0xDE061E06L,1L,0L,4L,0x37E6CEEBL,(-1L)},{0L,0xFE436B37L,1L,0L,5L,0x4801D254L},{1L,0L,5L,8L,0xC9E81EBBL,0x07DED58DL},{1L,(-1L),1L,0x50C9F97CL,0x07DED58DL,0x37E6CEEBL},{0x1963C95DL,0L,1L,0x50C9F97CL,1L,1L},{1L,5L,(-1L),8L,1L,(-1L)}}};
                int l_1503 = 0x8D028DA7L;
                unsigned *l_1508 = (void*)0;
                unsigned *l_1509 = (void*)0;
                unsigned *l_1510 = &g_625;
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_1487[i] = 0xBAL;
                for (l_1479 = 0; (l_1479 <= 5); l_1479 = safe_add_func_uint32_t_u_u(l_1479, 1))
                {
                    int l_1488 = 0xF6FD10ECL;
                    short l_1489[3];
                    int l_1494[4][9][3] = {{{1L,(-9L),1L},{0x6BCBB3B4L,(-1L),0L},{0L,(-1L),0L},{4L,(-9L),7L},{0x41DA8E33L,4L,4L},{4L,0L,0x577DD433L},{0L,0x0C04BEFBL,0x577DD433L},{0x6BCBB3B4L,0x577DD433L,4L},{1L,0L,7L}},{{0x577DD433L,0x577DD433L,0L},{(-9L),0x0C04BEFBL,0L},{1L,0x41DA8E33L,0x6BCBB3B4L},{7L,0L,(-1L)},{0x6BCBB3B4L,1L,0x6BCBB3B4L},{0x0C04BEFBL,4L,0x577DD433L},{(-9L),4L,0L},{0L,1L,0L},{0L,0L,0L}},{{0L,0x41DA8E33L,7L},{(-9L),(-1L),7L},{0x0C04BEFBL,7L,0L},{0x6BCBB3B4L,0L,0L},{7L,7L,0L},{1L,(-1L),0x577DD433L},{1L,0x41DA8E33L,0x6BCBB3B4L},{7L,0L,(-1L)},{0x6BCBB3B4L,1L,0x6BCBB3B4L}},{{0x0C04BEFBL,4L,0x577DD433L},{(-9L),4L,0L},{0L,1L,0L},{0L,0L,0L},{0L,0x41DA8E33L,7L},{(-9L),(-1L),7L},{0x0C04BEFBL,7L,0L},{0x6BCBB3B4L,0L,0L},{7L,7L,0L}}};
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_1489[i] = 0x6995L;
                    for (g_606 = (-17); (g_606 <= 12); g_606 = safe_add_func_uint8_t_u_u(g_606, 2))
                    {
                        unsigned short l_1496 = 0x3A91L;
                        (*g_63) = func_41(l_1487[7], g_12[3], ((*g_674) = l_1488), l_1489[1]);

                        ;
                        ++l_1491;
                        --l_1496;
                    }
                }
                --g_1505[3];
                (*g_63) = func_41(p_32, (++(*l_1510)), (*g_674), l_1487[2]);

                ;
            }

            ;
            if ((**p_33))
                break;
        }
        else
        {
            int *l_1546 = (void*)0;
            int l_1551 = 1L;
            int l_1556 = 0x3608916AL;
            int l_1560 = (-8L);
            int l_1562 = 0x354E8376L;
            int l_1563 = 2L;
            int l_1569 = 0xE7B9D53CL;
            int l_1570 = 3L;
            int l_1571 = 0L;
            int l_1572 = 1L;
            int l_1573[9][10] = {{8L,1L,2L,8L,0L,0L,8L,2L,1L,8L},{2L,0L,1L,0L,0L,0L,1L,0L,2L,2L},{8L,0L,1L,1L,1L,1L,0L,2L,1L,2L},{1L,(-1L),(-1L),1L,(-1L),(-1L),1L,(-3L),(-3L),1L},{(-3L),2L,(-1L),(-1L),2L,(-3L),(-1L),2L,(-1L),(-3L)},{0L,2L,1L,2L,0L,1L,1L,1L,1L,0L},{0L,(-1L),(-1L),0L,(-1L),(-3L),0L,(-3L),(-1L),0L},{(-3L),0L,(-3L),(-1L),0L,(-1L),(-1L),0L,(-1L),(-3L)},{1L,1L,1L,0L,2L,1L,2L,0L,1L,1L}};
            int i, j;
            for (l_1491 = 0; (l_1491 == 47); l_1491 = safe_add_func_int8_t_s_s(l_1491, 7))
            {
                unsigned char l_1526 = 248UL;
                int *l_1544 = &l_1370;
                unsigned l_1548 = 0x81EC9BFAL;
                int l_1554 = 0x995A4DF9L;
                int l_1555[10][4] = {{1L,1L,1L,1L},{5L,1L,0x68392C3CL,1L},{1L,(-1L),0x68392C3CL,0x68392C3CL},{5L,5L,1L,0x68392C3CL},{1L,(-1L),1L,1L},{1L,1L,1L,1L},{5L,1L,5L,0x68392C3CL},{0x68392C3CL,1L,5L,5L},{1L,1L,0x68392C3CL,5L},{(-1L),1L,(-1L),0x68392C3CL}};
                int **l_1567 = (void*)0;
                int i, j;
                (*g_1193) = (*g_943);
                for (g_625 = 0; (g_625 >= 35); g_625++)
                {
                    unsigned l_1527[7][5][6] = {{{0x08F23623L,0x08F23623L,0UL,0UL,1UL,0x07F667E3L},{4294967295UL,0UL,0xFD38733EL,0x07F667E3L,0x21A5245CL,0UL},{4294967288UL,4294967295UL,0xFD38733EL,0xF9B73072L,0x08F23623L,0x07F667E3L},{0xDD8A53DBL,0xF9B73072L,0UL,0xE3CFF6BEL,0x105AB9C7L,0x19FC36FDL},{0xE3CFF6BEL,0x105AB9C7L,0x19FC36FDL,3UL,0x08F23623L,0x21A5245CL}},{{0x21A5245CL,4294967289UL,0UL,4294967295UL,0x21A5245CL,0xF9B73072L},{0x21A5245CL,0xE3CFF6BEL,4294967289UL,3UL,1UL,1UL},{0xE3CFF6BEL,0x5A6C5309L,0x5A6C5309L,0xE3CFF6BEL,4294967288UL,0x5C81F13FL},{0xDD8A53DBL,1UL,4294967289UL,0xF9B73072L,0x439F2745L,0x105AB9C7L},{4294967288UL,4294967295UL,0UL,0x07F667E3L,0x439F2745L,0xFD38733EL}},{{4294967295UL,1UL,0x19FC36FDL,0UL,4294967288UL,0xDD8A53DBL},{0x08F23623L,0x5A6C5309L,0UL,4294967288UL,1UL,0x81F8B52BL},{4294967295UL,0xE3CFF6BEL,0xFD38733EL,0x81F8B52BL,0x21A5245CL,0xE3CFF6BEL},{4294967288UL,4294967289UL,0xFD38733EL,0xDD8A53DBL,0x105AB9C7L,0UL},{1UL,0xDD8A53DBL,0UL,0UL,0xDD8A53DBL,1UL}},{{4294967288UL,0x19FC36FDL,0x5C81F13FL,4294967295UL,0x105AB9C7L,3UL},{0x439F2745L,0x08F23623L,0xFD38733EL,0x5A6C5309L,0x439F2745L,0xDD8A53DBL},{0x439F2745L,0UL,0x5A6C5309L,4294967295UL,7UL,4294967295UL},{4294967288UL,0x105AB9C7L,0xF9B73072L,0UL,0x21A5245CL,7UL},{1UL,4294967295UL,0x5A6C5309L,0xDD8A53DBL,4294967295UL,0x19FC36FDL}},{{0x21A5245CL,0x07F667E3L,0xFD38733EL,0UL,4294967295UL,0x439F2745L},{0x08F23623L,4294967295UL,0x5C81F13FL,0x21A5245CL,0x21A5245CL,0x5C81F13FL},{0x105AB9C7L,0x105AB9C7L,0UL,0xFD38733EL,7UL,0xE3CFF6BEL},{0x08F23623L,0UL,3UL,0xE3CFF6BEL,0x439F2745L,0UL},{0x21A5245CL,0x08F23623L,3UL,0x19FC36FDL,0x105AB9C7L,0xE3CFF6BEL}},{{1UL,0x19FC36FDL,0UL,4294967288UL,0xDD8A53DBL,0x5C81F13FL},{4294967288UL,0xDD8A53DBL,0x5C81F13FL,4294967289UL,0x105AB9C7L,0x439F2745L},{0x439F2745L,0x5A6C5309L,0xFD38733EL,0x08F23623L,0x439F2745L,0x19FC36FDL},{0x439F2745L,4294967288UL,0x5A6C5309L,4294967289UL,7UL,7UL},{4294967288UL,0xF9B73072L,0x81F8B52BL,0x08F23623L,0x105AB9C7L,0xFD38733EL}},{{4294967288UL,0x21A5245CL,4294967295UL,0UL,1UL,0xE3CFF6BEL},{0x105AB9C7L,3UL,0xF9B73072L,4294967295UL,1UL,0x19FC36FDL},{7UL,0x21A5245CL,0UL,0xF9B73072L,0x105AB9C7L,4294967288UL},{0x07F667E3L,0x81F8B52BL,0x5A6C5309L,0x105AB9C7L,0x21A5245CL,4294967289UL},{7UL,0x08F23623L,0x19FC36FDL,4294967289UL,0xDD8A53DBL,0x08F23623L}}};
                    short l_1528[5];
                    int l_1531 = (-1L);
                    unsigned **l_1532 = &g_328;
                    unsigned char l_1564 = 255UL;
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                        l_1528[i] = 0x1341L;
                    l_1370 ^= func_37(func_41((safe_mul_func_uint16_t_u_u((0L > ((p_32 & ((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(func_37(((*p_33) = (*p_33)), l_1523, ((safe_div_func_uint8_t_u_u(l_1364[1][1][1], p_30)) , (void*)0)), g_191)), l_1526)) >= p_32)) , p_32)), l_1527[2][4][2])), p_34, l_1528[3], p_30), l_1527[3][0][2], p_31);
                }
                (*g_63) = func_46(l_1567, p_34, &g_1545[0], (*p_33), ((func_37(&l_1461[1][6][6], p_30, (*g_63)) & l_1568[0][4][3]) ^ p_30));

                ;
                (*p_31) = l_1491;
            }

            ;
            if ((*p_31))
                continue;

            g_1574--;
        }

        ;
    }


    for (g_866 = 0; (g_866 < 18); ++g_866)
    {
        char l_1579 = 0L;
        char **l_1583 = &g_674;
        int *l_1588 = &g_1397[5];
        unsigned short l_1593 = 0xC823L;
        int l_1623[1][5][4] = {{{7L,9L,7L,0x0E9A398AL},{0x807E202EL,9L,0x46B3C57CL,(-10L)},{9L,(-3L),(-3L),9L},{7L,(-10L),(-3L),0x0E9A398AL},{9L,0x807E202EL,0x46B3C57CL,0x807E202EL}}};
        unsigned l_1683 = 0x6F75AF68L;
        short l_1684[7] = {0x070EL,0x070EL,0x070EL,0x070EL,0x070EL,0x070EL,0x070EL};
        int l_1790 = 0xB845DCD0L;
        unsigned char *l_1802 = &g_1740;
        unsigned short *l_1863[5][2][8] = {{{&l_1593,(void*)0,&l_1593,&g_1505[3],&l_1593,(void*)0,&l_1593,&g_1505[3]},{&g_111[0][2][0],&g_1505[3],(void*)0,&l_1365,&l_1593,(void*)0,&g_68,(void*)0}},{{&l_1593,(void*)0,&g_68,(void*)0,&l_1593,&l_1365,(void*)0,&g_1505[3]},{&g_111[0][2][0],&g_1505[3],&l_1593,(void*)0,&l_1593,&g_1505[3],&l_1593,(void*)0}},{{&l_1593,&l_1593,&l_1593,&l_1593,&l_1365,&g_1505[3],&l_1593,&l_1365},{&g_111[0][2][0],(void*)0,&l_1365,(void*)0,&l_1593,(void*)0,&l_1365,(void*)0}},{{&g_111[0][2][0],&l_1365,&l_1593,&g_1505[3],&l_1365,&l_1593,(void*)0,(void*)0},{(void*)0,&g_1505[3],&g_111[0][2][0],(void*)0,&g_111[0][2][0],&g_1505[3],(void*)0,&l_1365}},{{&l_1593,(void*)0,&l_1593,&l_1593,&g_68,&g_1505[3],&l_1365,&g_1505[3]},{&g_68,&g_1505[3],&l_1365,&g_1505[3],&g_68,&l_1593,&l_1593,(void*)0}}};
        int l_1901[8][6] = {{0x87AEE1ADL,0x87AEE1ADL,0x7F59B927L,0L,0x7F59B927L,0x87AEE1ADL},{0x7F59B927L,1L,0L,0L,1L,0x7F59B927L},{0x87AEE1ADL,0x7F59B927L,0L,0x7F59B927L,0x87AEE1ADL,0x87AEE1ADL},{(-2L),0x7F59B927L,0x7F59B927L,(-2L),1L,(-2L)},{(-2L),1L,(-2L),0x7F59B927L,0x7F59B927L,(-2L)},{0x87AEE1ADL,0x87AEE1ADL,0x7F59B927L,0L,0x7F59B927L,0x87AEE1ADL},{0x7F59B927L,1L,0L,0L,1L,0x7F59B927L},{0x87AEE1ADL,0x7F59B927L,0L,0x7F59B927L,0x87AEE1ADL,0x87AEE1ADL}};
        char l_1902 = 4L;
        short *l_1919 = &g_656;
        int i, j, k;
        l_1579 = (*p_31);
    }
    (*p_31) &= (safe_mul_func_uint8_t_u_u(((((*g_674) , (p_34 | (p_30 ^ ((***g_672) = (0xBD22455EL > func_37(&l_1719, (safe_mul_func_uint16_t_u_u((func_37((((p_30 != p_30) , 0x2060DE59L) , (*g_1734)), p_30, p_31) > 4UL), (*g_816))), &l_1719)))))) , p_32) && p_32), 0xE5L));
    return l_1924[1][6];


}







static char func_37(int * p_38, char p_39, int * p_40)
{
    int l_1351 = 8L;
    return l_1351;
}







static int * func_41(short p_42, unsigned p_43, char p_44, int p_45)
{
    unsigned l_1335 = 0x7A308A5AL;
    int l_1338[7][3];
    int *l_1339[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    short l_1340 = 0x63FCL;
    int l_1343[9][6] = {{(-8L),1L,1L,(-8L),1L,1L},{(-8L),1L,1L,(-8L),1L,1L},{(-8L),1L,1L,(-8L),1L,1L},{(-8L),1L,1L,(-8L),1L,1L},{(-8L),1L,1L,(-8L),1L,1L},{(-8L),1L,1L,(-8L),1L,1L},{(-8L),1L,1L,(-8L),1L,1L},{(-8L),1L,1L,(-8L),1L,1L},{(-8L),1L,1L,(-8L),1L,1L}};
    int l_1344 = 0x1F3F43A9L;
    unsigned char l_1345 = 0x3DL;
    int *l_1348 = &g_1280;
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
            l_1338[i][j] = 0x6314071DL;
    }
    l_1335--;
    --l_1345;
    return l_1348;


}







static int * func_46(int ** p_47, unsigned p_48, int ** p_49, int * p_50, int p_51)
{
    int *l_1333[10][5] = {{&g_120,&g_16,(void*)0,&g_16,(void*)0},{(void*)0,&g_120,&g_120,(void*)0,(void*)0},{&g_120,&g_16,(void*)0,&g_16,(void*)0},{(void*)0,&g_120,&g_120,(void*)0,(void*)0},{&g_120,&g_16,(void*)0,&g_16,(void*)0},{(void*)0,&g_120,&g_120,(void*)0,(void*)0},{&g_120,&g_16,(void*)0,&g_16,(void*)0},{(void*)0,&g_120,(void*)0,&g_120,&g_16},{(void*)0,&g_120,(void*)0,&g_16,&g_120},{&g_120,(void*)0,(void*)0,&g_120,&g_16}};
    int i, j;
    return l_1333[3][4];


}







static unsigned short func_53(int * p_54, char p_55, int ** p_56)
{
    char ***l_667 = (void*)0;
    char ****l_668[6][7] = {{&l_667,&l_667,(void*)0,(void*)0,(void*)0,(void*)0,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,&l_667,&l_667,&l_667,&l_667,&l_667},{&l_667,&l_667,(void*)0,&l_667,&l_667,(void*)0,(void*)0},{(void*)0,&l_667,&l_667,(void*)0,&l_667,&l_667,(void*)0},{&l_667,(void*)0,&l_667,&l_667,(void*)0,&l_667,&l_667}};
    char *l_671 = &g_79;
    char **l_670 = &l_671;
    char ***l_669[9][4][1] = {{{&l_670},{(void*)0},{&l_670},{&l_670}},{{&l_670},{&l_670},{(void*)0},{&l_670}},{{&l_670},{&l_670},{&l_670},{(void*)0}},{{&l_670},{&l_670},{&l_670},{&l_670}},{{(void*)0},{&l_670},{&l_670},{&l_670}},{{&l_670},{(void*)0},{&l_670},{&l_670}},{{&l_670},{&l_670},{(void*)0},{&l_670}},{{&l_670},{&l_670},{&l_670},{(void*)0}},{{&l_670},{&l_670},{&l_670},{&l_670}}};
    int *l_675 = &g_120;
    unsigned short *l_679 = &g_68;
    unsigned *l_686 = &g_136;
    int l_699 = 0x4FAB8671L;
    unsigned short l_710 = 0xDBD2L;
    int l_724[10][8][3] = {{{0L,0x10BE16E1L,0xF29B396DL},{0L,1L,0xA41925B8L},{0xEAEF8E9EL,0x021B2AEDL,0x2337E222L},{0xA41925B8L,(-7L),(-1L)},{(-1L),0xC79FA746L,1L},{(-7L),0x5F3BACDAL,0xF58741E5L},{0x9C24AC38L,0x8E9B6E58L,0L},{1L,(-1L),(-1L)}},{{(-1L),(-10L),(-1L)},{0xF6C4F8BEL,9L,0x0B4CA2F5L},{9L,0x3FBBE8BEL,(-9L)},{0x10B8400CL,0x5C1C4B2BL,0x5C1C4B2BL},{0x56AB0D5CL,0x6277CFD7L,4L},{1L,0xF6365B61L,0xE91C8D9CL},{4L,0x2A6F0155L,0x10060CFFL},{(-9L),6L,0x4FF53578L}},{{0x621A0F2AL,0x2A6F0155L,0x7FB887A1L},{0x945E98E3L,0xF6365B61L,0x621A0F2AL},{0x2337E222L,0x6277CFD7L,0xDEBDC309L},{0x83D962FBL,0x5C1C4B2BL,0L},{0x5252515BL,0x3FBBE8BEL,(-1L)},{0x04FBE0F5L,9L,1L},{(-6L),(-10L),0xE28DA621L},{0xF58741E5L,(-1L),0x75CC1E65L}},{{1L,0x8E9B6E58L,0xC8B57128L},{0xCB276520L,0x5F3BACDAL,(-8L)},{0x4FF53578L,0xC79FA746L,0x45AF018AL},{0x3FBBE8BEL,(-7L),9L},{0L,0x021B2AEDL,0xC79FA746L},{(-5L),0xF6C4F8BEL,0x31C5424CL},{9L,(-1L),0x31C5424CL},{0x0AAC4D4AL,0x56AB0D5CL,0xC79FA746L}},{{0L,0x1911670BL,9L},{0x15D59931L,1L,0x75CC1E65L},{0x31C5424CL,0xE91C8D9CL,0x021B2AEDL},{0x6277CFD7L,0x2337E222L,0x2A6F0155L},{0L,0L,1L},{0x4FF53578L,4L,0x52DF99FDL},{(-1L),0x3FBBE8BEL,0x624A8B97L},{0x7FB887A1L,0x75CC1E65L,0L}},{{0x15D59931L,0xC79FA746L,0x8E9B6E58L},{7L,(-9L),7L},{0xF58741E5L,(-1L),0x5BAC832EL},{(-1L),1L,(-1L)},{0xE589AD5FL,0L,0x10060CFFL},{1L,0x945E98E3L,0xEFE29D6CL},{0xE589AD5FL,0xCB276520L,0x9C24AC38L},{(-1L),0x0AAC4D4AL,0x04FBE0F5L}},{{0xF58741E5L,0L,(-5L)},{7L,0x98C99325L,1L},{0x15D59931L,0x6277CFD7L,0xE91C8D9CL},{0x7FB887A1L,0x021B2AEDL,1L},{(-1L),(-1L),0xC79FA746L},{0x4FF53578L,(-8L),0x56AB0D5CL},{0L,0x5BAC832EL,0xEAEF8E9EL},{0x6277CFD7L,5L,1L}},{{0x31C5424CL,(-1L),(-8L)},{1L,7L,9L},{0x56AB0D5CL,0x04FBE0F5L,0x4D38E62EL},{0x5C1C4B2BL,0x621A0F2AL,0x945E98E3L},{0xF29B396DL,0x621A0F2AL,0x5F3BACDAL},{(-10L),0x04FBE0F5L,0xDEBDC309L},{(-1L),7L,0L},{(-7L),(-1L),0x3FBBE8BEL}},{{0x10060CFFL,5L,0xF6365B61L},{0xF58741E5L,0x10060CFFL,4L},{0L,9L,0x1911670BL},{(-1L),0x98C99325L,0xF58741E5L},{(-1L),0xF29B396DL,(-9L)},{0x0B4CA2F5L,1L,0x75CC1E65L},{(-9L),(-9L),1L},{0x5C1C4B2BL,0x5C1C4B2BL,0x10B8400CL}},{{4L,0x945E98E3L,0L},{0xE91C8D9CL,1L,0L},{0x10060CFFL,0x0B4CA2F5L,(-1L)},{0x4FF53578L,0xE91C8D9CL,0L},{0x7FB887A1L,(-9L),0L},{0x621A0F2AL,0xCB276520L,0x10B8400CL},{0xDEBDC309L,0L,1L},{0L,0xE28DA621L,0x75CC1E65L}}};
    unsigned short **l_761[4] = {&g_110,&g_110,&g_110,&g_110};
    char l_802 = 0xD7L;
    int l_806 = 3L;
    unsigned short l_807 = 0x8840L;
    unsigned l_888 = 0x9DE26B8FL;
    short l_897 = 0x4425L;
    int l_905 = 0L;
    int **l_908 = (void*)0;
    volatile int *l_913 = &g_14;
    int **l_941 = &l_675;
    unsigned char l_944[8][2][7] = {{{0x66L,3UL,0x63L,252UL,0UL,0x63L,8UL},{0UL,0x66L,8UL,0xDBL,0xA7L,1UL,1UL}},{{0xBBL,0x66L,247UL,0x66L,0xBBL,0x88L,0xA7L},{0x5CL,3UL,0x74L,255UL,0x3BL,0xDBL,0x66L}},{{255UL,0xA7L,0xD2L,0UL,8UL,1UL,0x63L},{0x5CL,255UL,0x26L,0xFDL,255UL,255UL,4UL}},{{0xBBL,0xD2L,0x74L,4UL,1UL,1UL,0x74L},{1UL,1UL,1UL,0x26L,0x74L,0x5AL,0x27L}},{{255UL,0UL,4UL,0xD2L,0x3BL,252UL,255UL},{0UL,255UL,0x27L,0x74L,0x88L,0x5AL,0xDBL}},{{247UL,0xDBL,0x88L,247UL,8UL,1UL,0x26L},{255UL,255UL,8UL,8UL,8UL,8UL,255UL}},{{8UL,1UL,0x5AL,0x63L,0x88L,0x26L,0xD2L},{0x5AL,255UL,1UL,1UL,0x3BL,255UL,0x88L}},{{3UL,255UL,0xA7L,0x63L,0x74L,0x5CL,255UL},{0xDBL,0x88L,247UL,8UL,1UL,0x26L,3UL}}};
    int l_955 = (-3L);
    int l_980 = (-7L);
    unsigned char ****l_1003[5];
    int l_1115 = 0x01D0A73EL;
    unsigned l_1154 = 0xC240516CL;
    unsigned *l_1181[10][2];
    char l_1184 = (-6L);
    int **l_1191 = &g_64;
    char **l_1222 = &l_671;
    unsigned l_1223 = 0x9EFB13C0L;
    int l_1227 = 0L;
    unsigned l_1228[2];
    unsigned short ***l_1246 = &g_1063;
    unsigned short ****l_1245 = &l_1246;
    unsigned short l_1252 = 65529UL;
    int l_1279 = (-1L);
    unsigned short l_1303[7][9][4] = {{{0xFADEL,65535UL,65531UL,2UL},{0xFADEL,65531UL,0xFADEL,0xB55FL},{65535UL,2UL,0xB55FL,0xB55FL},{65531UL,65531UL,0x243AL,2UL},{2UL,65535UL,0x243AL,65535UL},{65531UL,0xFADEL,0xB55FL,0x243AL},{65535UL,0xFADEL,0xFADEL,65535UL},{0xFADEL,65535UL,0x243AL,0xFADEL},{65535UL,0x243AL,65535UL,2UL}},{{0xD40EL,0xFADEL,2UL,2UL},{0x243AL,0x243AL,0xB55FL,0xFADEL},{0xFADEL,0xD40EL,0xB55FL,0xD40EL},{0x243AL,65535UL,2UL,0xB55FL},{0xD40EL,65535UL,65535UL,0xD40EL},{65535UL,0xD40EL,0x243AL,0xFADEL},{65535UL,0x243AL,65535UL,2UL},{0xD40EL,0xFADEL,2UL,2UL},{0x243AL,0x243AL,0xB55FL,0xFADEL}},{{0xFADEL,0xD40EL,0xB55FL,0xD40EL},{0x243AL,65535UL,2UL,0xB55FL},{0xD40EL,65535UL,65535UL,0xD40EL},{65535UL,0xD40EL,0x243AL,0xFADEL},{65535UL,0x243AL,65535UL,2UL},{0xD40EL,0xFADEL,2UL,2UL},{0x243AL,0x243AL,0xB55FL,0xFADEL},{0xFADEL,0xD40EL,0xB55FL,0xD40EL},{0x243AL,65535UL,2UL,0xB55FL}},{{0xD40EL,65535UL,65535UL,0xD40EL},{65535UL,0xD40EL,0x243AL,0xFADEL},{65535UL,0x243AL,65535UL,2UL},{0xD40EL,0xFADEL,2UL,2UL},{0x243AL,0xD40EL,65531UL,0xB55FL},{0xB55FL,0xFADEL,65531UL,0xFADEL},{0xD40EL,2UL,0x243AL,65531UL},{0xFADEL,2UL,2UL,0xFADEL},{2UL,0xFADEL,0xD40EL,0xB55FL}},{{2UL,0xD40EL,2UL,0x243AL},{0xFADEL,0xB55FL,0x243AL,0x243AL},{0xD40EL,0xD40EL,65531UL,0xB55FL},{0xB55FL,0xFADEL,65531UL,0xFADEL},{0xD40EL,2UL,0x243AL,65531UL},{0xFADEL,2UL,2UL,0xFADEL},{2UL,0xFADEL,0xD40EL,0xB55FL},{2UL,0xD40EL,2UL,0x243AL},{0xFADEL,0xB55FL,0x243AL,0x243AL}},{{0xD40EL,0xD40EL,65531UL,0xB55FL},{0xB55FL,0xFADEL,65531UL,0xFADEL},{0xD40EL,2UL,0x243AL,65531UL},{0xFADEL,2UL,2UL,0xFADEL},{2UL,0xFADEL,0xD40EL,0xB55FL},{2UL,0xD40EL,2UL,0x243AL},{0xFADEL,0xB55FL,0x243AL,0x243AL},{0xD40EL,0xD40EL,65531UL,0xB55FL},{0xB55FL,0xFADEL,65531UL,0xFADEL}},{{0xD40EL,2UL,0x243AL,65531UL},{65535UL,0xFADEL,0xFADEL,65535UL},{0xFADEL,65535UL,65531UL,2UL},{0xFADEL,65531UL,0xFADEL,0xB55FL},{65535UL,2UL,0xB55FL,0xB55FL},{65531UL,65531UL,0x243AL,2UL},{2UL,65535UL,0x243AL,65535UL},{65531UL,0xFADEL,0xB55FL,0x243AL},{65535UL,0xFADEL,0xFADEL,65535UL}}};
    unsigned char ****l_1322[7];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1003[i] = (void*)0;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_1181[i][j] = &g_136;
    }
    for (i = 0; i < 2; i++)
        l_1228[i] = 4294967295UL;
    for (i = 0; i < 7; i++)
        l_1322[i] = (void*)0;
    if (((l_669[7][3][0] = l_667) == (g_672 = g_672)))
    {
        (*p_56) = l_675;
    }
    else
    {
        unsigned char *l_676[9] = {&g_575,&g_146,&g_575,&g_575,&g_146,&g_575,&g_575,&g_146,&g_575};
        short *l_677 = (void*)0;
        unsigned short **l_678 = &g_110;
        unsigned **l_684 = &g_328;
        unsigned **l_685 = &g_328;
        int l_691 = (-1L);
        char l_694 = (-9L);
        int l_722 = 0L;
        int l_723[1][5] = {{0xFC8E5F8CL,0xFC8E5F8CL,0xFC8E5F8CL,0xFC8E5F8CL,0xFC8E5F8CL}};
        int l_725 = 1L;
        char ****l_777 = &l_669[5][1][0];
        int l_790 = 3L;
        unsigned **l_836 = &l_686;
        int **l_839 = (void*)0;
        short l_886 = 0xB57AL;
        short l_891 = 6L;
        int **l_916 = (void*)0;
        char l_1098 = 0xC6L;
        unsigned l_1133 = 0x86BBDEB4L;
        char l_1134 = (-6L);
        unsigned l_1146 = 4294967295UL;
        unsigned l_1159[2][3];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 3; j++)
                l_1159[i][j] = 0x8C3E1099L;
        }
        for (p_55 = 0; (p_55 <= 8); p_55 += 1)
        {
            return (*l_675);
        }
        if ((((((void*)0 != l_676[2]) & ((l_677 != ((((l_679 = ((*l_678) = l_677)) == &g_68) || ((safe_rshift_func_int16_t_s_s(((safe_div_func_int8_t_s_s(((l_686 = p_54) != l_675), (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((l_691 >= ((*g_119) , l_691)), 2)), p_55)))) & 0xBE401321L), p_55)) , p_55)) , l_677)) != (*l_675))) <= p_55) && l_691))
        {
            char l_713 = 0x60L;
            int l_719[6][4] = {{(-2L),0xFC75F781L,0xFC75F781L,(-2L)},{1L,0xFC75F781L,0x26C0ADBBL,0xFC75F781L},{0xFC75F781L,(-1L),0x26C0ADBBL,0x26C0ADBBL},{1L,1L,0xFC75F781L,0x26C0ADBBL},{(-2L),(-1L),(-2L),0xFC75F781L},{(-2L),0xFC75F781L,0xFC75F781L,(-2L)}};
            unsigned char l_736 = 0xDDL;
            unsigned short **l_759 = &g_110;
            unsigned short l_828 = 0x10F8L;
            char ****l_833 = &l_669[1][2][0];
            unsigned **l_837 = (void*)0;
            short l_862[10][4] = {{0xB2C8L,0x4B79L,0x1843L,0xFF95L},{0x4B79L,0x0B40L,0x1843L,0x1843L},{0xB2C8L,0xB2C8L,(-3L),0x2262L},{0L,0x88DDL,8L,0xFF95L},{8L,0xFF95L,0x4B79L,8L},{0xB2C8L,0xFF95L,0x012DL,0xFF95L},{0xFF95L,0x88DDL,0x7CDEL,8L},{(-6L),0x88DDL,(-8L),0x7CDEL},{0x4B79L,0x1843L,0xFF95L,0xEA02L},{0x4B79L,(-8L),(-8L),0x4B79L}};
            int l_872 = 0x1FBF9050L;
            short *l_887[3];
            int *l_889 = (void*)0;
            int *l_890 = &l_699;
            int l_896 = 0x0FF96A24L;
            unsigned l_898[3];
            int l_907 = 1L;
            int i, j;
            for (i = 0; i < 3; i++)
                l_887[i] = &l_886;
            for (i = 0; i < 3; i++)
                l_898[i] = 0UL;
            for (g_203 = 0; (g_203 <= 8); g_203 += 1)
            {
                unsigned l_714 = 0x9C092C5DL;
                int l_720 = 1L;
            }
            (**p_56) ^= (safe_mod_func_int8_t_s_s((***g_672), l_691));
            if ((**p_56))
            {
                short l_769[4] = {1L,1L,1L,1L};
                int l_798[5][5][3] = {{{6L,8L,9L},{0L,0x9DA60F37L,0x9DA60F37L},{0xDCC1202DL,1L,0x8FB8350CL},{5L,1L,0x9DA60F37L},{9L,0xD4F6EB05L,9L}},{{1L,1L,1L},{0xDCC1202DL,0xD4F6EB05L,0x7FCF62E1L},{1L,1L,(-3L)},{6L,1L,9L},{1L,0x9DA60F37L,1L}},{{0xDCC1202DL,8L,0x8FB8350CL},{1L,1L,1L},{9L,0x7A7D9F63L,9L},{5L,1L,(-3L)},{0xDCC1202DL,0x7A7D9F63L,0x7FCF62E1L}},{{0L,1L,1L},{6L,8L,9L},{0L,0x9DA60F37L,0x9DA60F37L},{0xDCC1202DL,1L,0x8FB8350CL},{5L,1L,0x9DA60F37L}},{{9L,0xD4F6EB05L,9L},{1L,1L,1L},{0xDCC1202DL,0xD4F6EB05L,0x7FCF62E1L},{1L,1L,(-3L)},{6L,1L,9L}}};
                int l_803[6] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
                int i, j, k;
                (*l_675) ^= l_722;
                for (l_725 = 6; (l_725 >= 0); l_725 -= 1)
                {
                    unsigned l_770 = 0x8F3520B1L;
                    int l_797 = 0L;
                    int l_799 = 0L;
                    int l_800 = 0x8219AD6EL;
                    int l_801[8] = {9L,9L,9L,9L,9L,9L,9L,9L};
                    int l_804 = 0xF1FB2975L;
                    int i;
                    if ((*l_675))
                    {
                        return l_719[0][3];


                    }
                    else
                    {
                        short l_765 = 6L;
                        int *l_766 = &l_724[0][1][0];
                        int *l_767 = &l_724[0][6][2];
                        int *l_768[6][10][4] = {{{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]}},{{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]}},{{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]}},{{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]}},{{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]}},{{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]},{&l_723[0][0],&l_723[0][0],&l_723[0][0],&l_723[0][0]}}};
                        int i, j, k;
                        (**p_56) = (**p_56);
                        ++l_770;
                        (*l_675) ^= l_691;
                    }
                    for (l_722 = 0; (l_722 <= 4); l_722 += 1)
                    {
                        short *l_782 = (void*)0;
                        int l_783 = (-1L);
                        int *l_785 = (void*)0;
                        int *l_786 = &l_691;
                        int *l_787 = &l_719[2][2];
                        int *l_788 = (void*)0;
                        int *l_789 = &l_783;
                        int *l_791 = &l_719[0][3];
                        int *l_792 = &l_691;
                        int *l_793 = &l_719[4][1];
                        int *l_794 = &l_699;
                        int *l_795 = (void*)0;
                        int *l_796[9][5] = {{&l_719[0][1],(void*)0,&l_719[0][1],&g_120,&l_719[0][3]},{&l_724[8][7][1],&l_691,&l_719[4][2],&g_120,&l_724[3][2][0]},{&l_719[1][1],&l_724[8][7][1],&l_724[8][7][1],&l_719[1][1],&l_719[0][1]},{&g_5,&l_723[0][1],&l_719[4][2],&l_724[3][2][0],&l_691},{&l_699,&l_699,&l_719[0][1],&l_699,&l_699},{&l_723[0][1],&g_120,&l_724[8][7][1],&l_724[3][2][0],(void*)0},{&g_5,&l_719[0][2],&l_719[1][1],&l_719[1][1],&g_5},{&g_5,(void*)0,&l_724[3][2][0],&l_724[8][7][1],&g_120},{&l_724[8][7][1],&l_719[0][1],&l_719[0][3],&l_719[1][1],&l_719[0][3]}};
                        int i, j;
                        g_3[l_722][l_722] = (safe_lshift_func_uint8_t_u_s((((*g_674) = ((g_11[l_722][l_722] && (l_719[0][3] ^= (safe_rshift_func_uint8_t_u_u((((void*)0 != l_777) != (safe_mul_func_int8_t_s_s((safe_add_func_int16_t_s_s(((0xA984FD2BL < 1UL) & p_55), (l_723[0][1] &= ((g_11[l_722][l_722] != (p_55 && (~(0x2CD20F39L < 0L)))) <= g_625)))), (***g_672)))), p_55)))) & l_783)) >= g_784), l_770));
                        l_807++;
                        l_806 &= (((*l_792) = ((void*)0 == (**g_672))) , (((((safe_unary_minus_func_uint32_t_u(p_55)) >= (((l_723[0][1] = ((*l_789) && p_55)) , ((safe_add_func_int32_t_s_s((((p_55 || (-2L)) <= p_55) || ((*l_675) = ((*l_675) > 0x0AB9L))), l_800)) , l_719[0][3])) > 0L)) && l_799) ^ 0xA4L) , (*p_54)));
                        (*g_63) = &l_699;

                        ;
                    }
                }


                (*g_63) = (*p_56);

                ;
            }
            else
            {
                char l_820 = 8L;
                int *l_824 = (void*)0;
                int *l_825 = (void*)0;
                int *l_826 = &l_699;
                int *l_827[6] = {&l_691,&l_724[6][3][2],&l_691,&l_691,&l_724[6][3][2],&l_691};
                unsigned ***l_838 = &l_684;
                int *l_841 = &l_790;
                int **l_840 = &l_841;
                unsigned char l_863 = 1UL;
                int i;
                for (l_806 = 0; (l_806 <= 5); l_806 += 1)
                {
                    int l_815[4][7] = {{0L,(-3L),0x1A4D614DL,0x1A4D614DL,(-3L),0L,(-3L)},{0x68EAE95EL,0L,0L,0x68EAE95EL,(-3L),0x68EAE95EL,0L},{0x5FA88572L,0x5FA88572L,0L,0x1A4D614DL,0L,0x5FA88572L,0x5FA88572L},{0x5FA88572L,0L,0x1A4D614DL,0L,0x5FA88572L,0x5FA88572L,0L}};
                    int l_819[7][2] = {{0xC9C0FF0DL,0xC9C0FF0DL},{(-1L),0xC9C0FF0DL},{0xC9C0FF0DL,(-1L)},{0xC9C0FF0DL,0xC9C0FF0DL},{(-1L),0xC9C0FF0DL},{0xC9C0FF0DL,(-1L)},{0xC9C0FF0DL,0xC9C0FF0DL}};
                    int i, j;
                    if ((!(safe_add_func_int32_t_s_s(((*g_119) = (*p_54)), l_815[0][4]))))
                    {
                        (*g_119) = (((*l_759) = (void*)0) == (g_816 = &g_111[0][2][0]));

                        ;
                    }
                    else
                    {
                        short l_817[8] = {0x2E22L,0x2E22L,0x2E22L,0x2E22L,0x2E22L,0x2E22L,0x2E22L,0x2E22L};
                        int *l_818[1];
                        unsigned short l_821 = 0x3D2CL;
                        int i;
                        for (i = 0; i < 1; i++)
                            l_818[i] = &l_719[1][2];
                        l_817[4] = ((*g_119) = (*p_54));
                        l_723[0][1] |= ((*l_675) = (**p_56));
                        l_821--;
                        if ((*g_119))
                            break;
                    }
                    for (l_694 = 5; (l_694 >= 1); l_694 -= 1)
                    {
                        if (l_722)
                            break;
                        if (l_815[0][4])
                            continue;
                        return p_55;
                    }
                }

                ;
                --l_828;
                l_806 &= ((*l_675) ^= ((safe_mul_func_uint8_t_u_u(((((void*)0 != l_833) != (*l_826)) | (1UL >= (l_719[3][3] = ((safe_div_func_uint8_t_u_u((((8UL == 0xE5L) >= ((void*)0 != (*l_678))) , l_828), (-1L))) || 0x3FL)))), p_55)) ^ l_723[0][3]));
                if ((((l_836 == ((*l_838) = l_837)) , l_839) == l_840))
                {
                    unsigned l_865 = 0UL;
                    for (g_656 = 24; (g_656 >= 20); g_656--)
                    {
                        short *l_858[2];
                        int l_864[4] = {(-1L),(-1L),(-1L),(-1L)};
                        int i;
                        for (i = 0; i < 2; i++)
                            l_858[i] = &g_191;
                        g_866 |= ((((((safe_sub_func_int16_t_s_s(((safe_div_func_uint32_t_u_u((*l_826), (safe_div_func_uint16_t_u_u((safe_div_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((((((*g_816) ^= ((safe_mod_func_uint32_t_u_u(((0x338FL <= (g_191 = (((*l_759) = (*l_678)) == (void*)0))) < (((((((*l_675) , 0L) | (((*l_675) | (safe_unary_minus_func_uint8_t_u(((-1L) <= ((((safe_sub_func_int16_t_s_s(0x2EFBL, 0x0530L)) , 65535UL) | l_862[2][1]) != p_55))))) <= 0xF3L)) , 0L) , (void*)0) != p_54) , 0x6B5FF8C7L)), p_55)) || p_55)) ^ 0L) < (*l_675)) || p_55), p_55)) , (*l_826)), p_55)), l_863)))) || (-10L)), 65529UL)) == p_55) <= l_864[1]) , l_865) == p_55) <= g_13);
                    }
                    (*g_63) = &l_806;

                    ;
                }
                else
                {
                    unsigned l_874 = 4294967290UL;
                    for (g_575 = (-30); (g_575 > 53); g_575 = safe_add_func_int32_t_s_s(g_575, 9))
                    {
                        int **l_871 = &l_824;
                        int l_873 = 0xF354435FL;
                        (*g_63) = ((safe_sub_func_uint16_t_u_u((((*p_56) = &g_16) != ((*l_871) = &l_719[0][3])), l_872)) , (*p_56));

                        ;
                        ;
                        ;
                        l_874++;
                    }

                    ;
                    ;
                    (*g_63) = (void*)0;

                    ;
                }

                ;
                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            if ((((*l_890) = ((*l_675) = (safe_div_func_uint16_t_u_u(p_55, (safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint16_t_u_s((l_862[2][1] != (safe_mod_func_uint32_t_u_u(p_55, 0xDC2465A3L))), (l_888 = (2L != (safe_lshift_func_int16_t_s_s(g_805[0], ((*p_54) != l_713))))))) != p_55))))))) , l_891))
            {
                char l_892[7] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                int l_893 = 0xE62879B4L;
                int *l_894 = &l_872;
                int *l_895[7][5] = {{(void*)0,(void*)0,&l_719[5][1],(void*)0,(void*)0},{&l_724[8][7][1],(void*)0,&l_724[8][7][1],&l_724[8][7][1],(void*)0},{(void*)0,&l_724[8][7][1],&l_724[8][7][1],(void*)0,&l_724[8][7][1]},{(void*)0,(void*)0,&l_719[5][1],(void*)0,(void*)0},{&l_724[8][7][1],(void*)0,&l_724[8][7][1],&l_724[8][7][1],(void*)0},{(void*)0,&l_724[8][7][1],&l_724[8][7][1],(void*)0,&l_724[8][7][1]},{(void*)0,(void*)0,&l_719[5][1],(void*)0,(void*)0}};
                int i, j;
                l_898[2]++;
            }
            else
            {
                g_906 |= ((((*l_675) , (*g_672)) != (void*)0) | ((((p_55 <= ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((*l_890) = ((**l_670) &= 1L)), l_905)), (*l_675))) ^ l_723[0][1])) & (**p_56)) <= g_3[2][0]) || p_55));
                (*l_890) = (((*l_675) |= 0x70L) || l_907);
                return (*g_816);


            }
        }
        else
        {
            int l_917 = 0x56B68F4EL;
            int **l_942 = &g_119;
            l_913 = ((((void*)0 == l_908) | (safe_mul_func_uint8_t_u_u(l_723[0][0], (safe_sub_func_uint8_t_u_u((&l_699 != (void*)0), (+p_55)))))) , (*g_665));

            ;
            if (((p_55 <= (p_55 , p_55)) , ((l_694 != (*p_54)) , (safe_div_func_int32_t_s_s(((l_917 , p_55) >= p_55), (*l_675))))))
            {
                volatile int *l_921[9] = {&g_10,(void*)0,&g_10,&g_10,(void*)0,&g_10,&g_10,(void*)0,&g_10};
                int i;
                for (p_55 = (-24); (p_55 != 19); p_55 = safe_add_func_int32_t_s_s(p_55, 8))
                {
                    volatile int **l_920 = (void*)0;
                    int **l_930 = &g_64;
                    unsigned *l_931 = &g_203;
                    l_921[6] = (*g_665);
                    l_723[0][1] &= (((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_div_func_uint32_t_u_u((((2L && (safe_mul_func_uint8_t_u_u(p_55, ((safe_mul_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(l_917, 1)), (safe_unary_minus_func_int8_t_s((((safe_lshift_func_uint16_t_u_s(((*g_816) = ((**l_941) == p_55)), (**l_942))) , (void*)0) != (void*)0))))) >= p_55)))) && p_55) <= 0x483BL), (**p_56))), 9UL)), 5)) , (**l_942)) && 0L);
                    if ((*g_119))
                        break;
                }


                return (**l_941);
            }
            else
            {
                unsigned l_954 = 0xC20EE55AL;
                int *l_962[4];
                int **l_961 = &l_962[0];
                int i;
                for (i = 0; i < 4; i++)
                    l_962[i] = (void*)0;
                if ((*p_54))
                {
                    (*g_943) = (*g_665);
                }
                else
                {
                    unsigned short l_950[6] = {0x311DL,0xD719L,0x311DL,0x311DL,0xD719L,0x311DL};
                    unsigned *l_951 = &g_203;
                    char *l_958[4][2];
                    short *l_959 = &g_656;
                    int ***l_960[2];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_958[i][j] = &l_694;
                    }
                    for (i = 0; i < 2; i++)
                        l_960[i] = &g_653;
                    if (((l_944[4][0][1]--) != ((**l_942) , (((**l_942) = ((safe_unary_minus_func_uint32_t_u(((l_961 = (((((((((*l_959) ^= g_111[0][2][0]) || p_55) > p_55) , 1UL) ^ (**l_941)) , g_705) , l_954) , g_653)) == l_839))) > 0x7C73L)) < 0x93L))))
                    {
                        unsigned short l_977[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_977[i] = 0xEFDFL;
                        (**l_941) = (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s((5UL < (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*g_674), p_55)), l_950[0]))), p_55)), l_950[2]));
                        return p_55;
                    }
                    else
                    {
                        return (*g_816);
                    }
                }
            }
            for (g_574 = (-28); (g_574 > 3); g_574 = safe_add_func_uint16_t_u_u(g_574, 5))
            {
                (*g_63) = (*p_56);

                ;
                (**p_56) = l_980;
            }


        }


        ;
        ;
        ;
        ;
        ;
        ;
        ;
        for (g_79 = 0; (g_79 <= 0); g_79 += 1)
        {
            unsigned l_992[1][8][4] = {{{4294967288UL,0xC7CA78E2L,6UL,0x637B4865L},{0x579EED59L,0xC7CA78E2L,0xC7CA78E2L,0x579EED59L},{0xC7CA78E2L,0x579EED59L,4294967288UL,4294967288UL},{0xC7CA78E2L,4294967288UL,0xC7CA78E2L,6UL},{0x579EED59L,4294967288UL,6UL,6UL},{4294967288UL,4294967288UL,0x637B4865L,4294967288UL},{4294967288UL,0x579EED59L,0x637B4865L,0x579EED59L},{4294967288UL,0xC7CA78E2L,6UL,0x637B4865L}}};
            int ***l_1019 = (void*)0;
            unsigned short **l_1024 = (void*)0;
            int l_1025 = 0xFF255158L;
            int l_1026 = 0L;
            unsigned char *****l_1067 = &l_1003[1];
            int l_1088 = 1L;
            int l_1090 = 0x3AD5C4F9L;
            int l_1095 = 0xC9B0C183L;
            int l_1099 = 0xCB596EA3L;
            int l_1101 = 0L;
            int l_1104 = (-1L);
            int l_1108 = 0x1E979075L;
            int l_1109 = (-4L);
            int l_1110 = 0x4B32D199L;
            int l_1114[2][9] = {{0x0F24CE89L,0x545EF931L,0x545EF931L,0x0F24CE89L,0x545EF931L,0x545EF931L,0x0F24CE89L,0x545EF931L,0x545EF931L},{0x0F24CE89L,0x545EF931L,0x545EF931L,0x0F24CE89L,0x545EF931L,0x545EF931L,0x0F24CE89L,0x545EF931L,0x545EF931L}};
            unsigned l_1118[10] = {0xCD4E41A3L,0xCD4E41A3L,0xCD4E41A3L,0xCD4E41A3L,0xCD4E41A3L,0xCD4E41A3L,0xCD4E41A3L,0xCD4E41A3L,0xCD4E41A3L,0xCD4E41A3L};
            unsigned short l_1135 = 1UL;
            char l_1142 = 5L;
            int i, j, k;
            if ((**p_56))
            {
                int *l_983[9] = {(void*)0,&l_905,&l_724[0][7][2],&l_724[0][7][2],(void*)0,&l_724[0][7][2],&l_724[0][7][2],(void*)0,&l_724[0][7][2]};
                unsigned *l_984 = &g_203;
                unsigned char **l_1041[8] = {&g_169[2][2][5],&g_169[1][2][2],&g_169[2][2][5],&g_169[2][2][5],&g_169[1][2][2],&g_169[2][2][5],&g_169[2][2][5],&g_169[1][2][2]};
                int i;
                if ((safe_div_func_int8_t_s_s(((l_691 ^= (((**p_56) ^ p_55) ^ g_15)) , (((&g_673[2] == &g_673[2]) , ((*l_984)--)) == ((**l_941) = (p_55 , (**p_56))))), ((safe_mul_func_int8_t_s_s((((((g_805[g_79] |= (*g_674)) || (safe_add_func_uint32_t_u_u(4294967295UL, 1L))) <= (-8L)) <= g_625) != 0xB8L), 0x1FL)) , p_55))))
                {
                    unsigned l_991 = 9UL;
                    int l_1007[4][2][4] = {{{(-1L),4L,(-10L),0x8AA90236L},{0xDD2E51B3L,4L,4L,0xDD2E51B3L}},{{4L,0xDD2E51B3L,(-1L),(-1L)},{4L,(-1L),4L,(-10L)}},{{0xDD2E51B3L,(-1L),(-10L),(-10L)},{(-1L),(-1L),0x8AA90236L,(-1L)}},{{(-1L),0xDD2E51B3L,0x8AA90236L,0xDD2E51B3L},{(-1L),4L,(-10L),0x8AA90236L}}};
                    int l_1013 = (-9L);
                    int l_1023 = (-9L);
                    short *l_1044 = &g_656;
                    int i, j, k;
                    for (g_606 = 0; (g_606 <= 4); g_606 += 1)
                    {
                        int i, j;
                        (*l_675) = (g_11[g_606][(g_79 + 5)] && g_11[g_79][(g_79 + 3)]);
                        if (l_991)
                            continue;
                    }
                    (*l_941) = (*p_56);

                    ;
                    if (((((**p_56) != l_992[0][1][3]) , p_55) < l_992[0][1][3]))
                    {
                        unsigned short l_993 = 0xDB4BL;
                        int l_994 = 0x9F452AF4L;
                        unsigned char ***l_1002 = &g_168[2];
                        unsigned char ****l_1001 = &l_1002;
                        unsigned char *****l_1004[1][8][10] = {{{&l_1003[1],&l_1003[2],&l_1001,&l_1003[2],&l_1003[1],&l_1003[0],&l_1003[1],&l_1003[2],&l_1001,&l_1003[2]},{(void*)0,&l_1003[0],&l_1001,&l_1003[2],&l_1001,&l_1003[0],(void*)0,&l_1003[0],&l_1001,&l_1003[2]},{&l_1003[3],&l_1003[2],&l_1003[3],&l_1003[0],&l_1003[1],&l_1003[0],&l_1003[3],&l_1003[2],&l_1003[3],&l_1003[0]},{(void*)0,&l_1003[2],&l_1003[0],&l_1003[2],(void*)0,&l_1003[0],(void*)0,&l_1003[2],&l_1003[0],&l_1003[2]},{&l_1003[1],&l_1003[0],&l_1003[3],&l_1003[2],&l_1003[3],&l_1003[0],&l_1003[1],&l_1003[0],&l_1003[3],&l_1003[2]},{&l_1001,&l_1003[2],&l_1001,&l_1003[0],(void*)0,&l_1003[0],&l_1001,&l_1003[2],&l_1001,&l_1003[0]},{&l_1003[1],&l_1003[2],&l_1001,&l_1003[2],&l_1003[1],&l_1003[0],&l_1003[1],&l_1003[2],&l_1001,&l_1003[2]},{(void*)0,&l_1003[0],&l_1001,&l_1003[2],&l_1001,&l_1003[0],(void*)0,&l_1003[0],&l_1001,&l_1003[2]}}};
                        unsigned l_1008 = 0UL;
                        unsigned short **l_1016 = &g_110;
                        short *l_1021 = (void*)0;
                        short *l_1022[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_1022[i] = &g_606;
                        l_1008 ^= (l_993 , ((((((((((**l_941) , (l_994 |= p_55)) < (safe_rshift_func_uint16_t_u_s(((*l_675) || (safe_mod_func_int8_t_s_s((*g_674), (safe_sub_func_uint32_t_u_u((p_55 >= (l_1007[3][0][3] = ((0x6D4FL || ((l_1001 == (g_1005 = l_1003[0])) != p_55)) , p_55))), 3L))))), g_5))) == 0xDBA117BFL) , p_55) == 0x8FL) > (*g_674)) , p_55) >= l_992[0][1][3]) || g_656));

                        ;
                        l_1026 ^= ((l_1025 = (l_983[0] != ((safe_mul_func_uint8_t_u_u((l_1007[3][0][3] < ((+(safe_sub_func_uint32_t_u_u((((+(**l_941)) || ((*l_675) & p_55)) , (((l_1013 = g_191) >= ((safe_div_func_uint16_t_u_u(((l_1016 == ((7UL >= ((l_1023 |= (((l_994 |= (safe_mod_func_uint8_t_u_u(((p_55 , &l_908) == l_1019), g_1020))) || p_55) >= 0UL)) , (-1L))) , l_1024)) == p_55), (-3L))) == g_12[3])) < 1UL)), 0x8DBCA7EFL))) && (**l_941))), l_1008)) , p_54))) , 0x53EEF011L);
                    }
                    else
                    {
                        unsigned l_1028 = 4294967291UL;
                        ++l_1028;
                    }

                    ;
                    g_1045 ^= (((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((l_1013 ^= (g_191 = ((*l_1044) = (safe_add_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((**p_56) | (l_1007[3][0][3] , p_55)), (*g_816))), ((safe_rshift_func_uint8_t_u_s(l_1023, (((*g_1006) = (*g_1006)) != l_1041[7]))) ^ (safe_div_func_int32_t_s_s(0xE88AC8B9L, 0xF3D21EC0L)))))))), g_3[0][0])), l_992[0][1][3])) && p_55) >= p_55);
                }
                else
                {
                    int l_1068 = (-2L);
                    int l_1070 = 0xC94FB6C3L;
                    (*g_1047) = (*g_943);
                    (*g_63) = (void*)0;

                    ;
                    if ((((l_1026 |= p_55) && 0xFA84L) , 0xE3FEE832L))
                    {
                        unsigned short ***l_1060 = (void*)0;
                        unsigned short ****l_1061 = &l_1060;
                        short *l_1064[10][2] = {{&g_656,&g_191},{&g_606,&g_191},{&g_656,&g_191},{&g_606,&g_191},{&g_656,&g_191},{&g_606,&g_191},{&g_656,&g_191},{&g_606,&g_191},{&g_656,&g_191},{&g_606,&g_191}};
                        unsigned char *****l_1065 = &l_1003[0];
                        unsigned char ******l_1066[1][10] = {{&l_1065,&l_1065,&l_1065,&l_1065,&l_1065,&l_1065,&l_1065,&l_1065,&l_1065,&l_1065}};
                        int i, j;
                        (*g_63) = &l_1025;

                        ;
                        (*g_64) |= (safe_lshift_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(0xDBL, (safe_mul_func_int16_t_s_s(((((*l_1061) = ((safe_mod_func_int8_t_s_s(1L, (***g_672))) , l_1060)) == g_1062) , g_866), (l_1026 = 0L))))), 1)), (&g_1005 == (l_1067 = l_1065)))) , p_55) <= (**p_56)), 2));
                    }
                    else
                    {
                        int l_1069 = 9L;
                        (*l_941) = (*p_56);

                        ;
                        l_1069 = (l_1068 ^ p_55);
                        l_1026 = 0xFB42746BL;
                    }

                    ;
                    ;
                    l_1070 = (**p_56);
                }


                ;
                ;
                for (l_790 = (-21); (l_790 != 17); ++l_790)
                {
                    l_724[0][0][2] |= l_992[0][1][3];
                    l_1026 &= (safe_add_func_uint32_t_u_u(p_55, (**p_56)));
                }
                return (**g_1063);


            }
            else
            {
                short l_1087 = 6L;
                int l_1089 = 1L;
                int l_1091 = 8L;
                int l_1093 = 0xEB8F072DL;
                int l_1100 = 0xCB187269L;
                int l_1102 = (-1L);
                int l_1106 = 0xBE311831L;
                int l_1107 = 0x093A2D36L;
                int l_1111 = 0xB60B3CC4L;
                int l_1112 = (-7L);
                int l_1113[3][7] = {{0x0B61BF74L,0L,(-10L),(-10L),0L,0x0B61BF74L,6L},{0x0B61BF74L,0L,(-10L),(-10L),0L,0x0B61BF74L,6L},{0x0B61BF74L,0L,(-10L),(-10L),0L,0x0B61BF74L,6L}};
                int l_1116[1][7] = {{0xE4EE8675L,0xBD489060L,0xE4EE8675L,0xE4EE8675L,0xBD489060L,0xE4EE8675L,0xE4EE8675L}};
                unsigned l_1121 = 0xCAF22749L;
                unsigned char *l_1127[5][2] = {{&l_944[4][0][1],&g_1020},{&l_944[4][0][1],&g_1020},{&l_944[4][0][1],&l_944[4][0][1]},{&g_1020,&g_1020},{&g_1020,&l_944[4][0][4]}};
                unsigned char *l_1128 = &l_944[4][0][1];
                int i, j;
                for (g_120 = 0; (g_120 != (-15)); g_120 = safe_sub_func_uint32_t_u_u(g_120, 7))
                {
                    char l_1092[9][3][6] = {{{(-1L),0x16L,0x06L,0L,0x47L,0L},{(-1L),0L,(-1L),1L,0xC1L,0x1BL},{1L,0xC1L,0x1BL,0x85L,6L,1L}},{{0xB2L,0x1BL,(-5L),0x85L,1L,1L},{1L,0x93L,0x93L,1L,0x16L,(-1L)},{(-1L),0xB2L,1L,0L,(-5L),0x06L}},{{(-1L),0x85L,0x47L,1L,(-5L),0xC1L},{0x16L,0xB2L,1L,0xB2L,0x16L,1L},{0x47L,0x93L,0x42L,(-1L),1L,(-1L)}},{{0x42L,0x1BL,0x16L,0x93L,6L,(-1L)},{1L,0xC1L,0x42L,0x42L,0xC1L,1L},{6L,0L,1L,(-5L),0x47L,0xC1L}},{{0L,0x16L,0x47L,1L,0x85L,0x06L},{0L,(-1L),1L,(-5L),1L,(-1L)},{6L,0x47L,0x93L,0x42L,(-1L),1L}},{{1L,1L,0x06L,(-1L),0x16L,1L},{0L,1L,0xC1L,0x42L,0x42L,0xC1L},{1L,1L,1L,6L,1L,0xB9L}},{{(-1L),0x42L,(-1L),0x85L,0x47L,1L},{0x16L,(-1L),(-1L),0xB9L,1L,0xB9L},{1L,0xB9L,1L,0x1BL,0x93L,0xC1L}},{{0x1BL,0x93L,0xC1L,0x47L,(-5L),1L},{6L,0xC1L,0x06L,0x47L,0x1BL,0x1BL},{0x1BL,(-1L),(-1L),0x1BL,(-1L),0x42L}},{{1L,6L,1L,0xB9L,0x06L,(-1L)},{0x16L,0x47L,1L,0x85L,0x06L,0x93L},{(-1L),6L,0x1BL,6L,(-1L),0x85L}}};
                    int l_1094 = (-1L);
                    int l_1096 = 1L;
                    int l_1097 = 1L;
                    int l_1103 = 1L;
                    int l_1105[4];
                    char l_1117 = 0xF4L;
                    int *l_1122 = &l_806;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                        l_1105[i] = 0x20BCF539L;
                    (*l_1122) &= (((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((p_55 != ((***g_1062) = p_55)), (safe_mod_func_int8_t_s_s((l_1026 = 0x1DL), 0xDCL)))), 7UL)), (safe_lshift_func_int8_t_s_u(((l_1118[6]--) , (-1L)), ((1L ^ l_1121) , p_55))))) < l_722) > 255UL);
                    l_1109 = ((l_1121 , g_805[0]) && ((((safe_sub_func_uint8_t_u_u(p_55, (safe_add_func_uint16_t_u_u(((*l_941) != (*p_56)), (g_146 >= 0xDEA4L))))) , l_1127[2][0]) != l_1128) >= (**l_941)));
                    l_1091 = ((((safe_mod_func_uint16_t_u_u(p_55, 65535UL)) != ((g_203 = (safe_add_func_int32_t_s_s(((0x79251382L || (-7L)) ^ ((*l_1122) = (((p_55 < ((**g_1063) ^= p_55)) || (l_1106 = l_1133)) | (!(*p_54))))), (l_1134 | p_55)))) ^ 4294967292UL)) , 0UL) && l_1135);
                    (*l_1122) = (*l_1122);
                }
                (**l_941) = (safe_mul_func_int16_t_s_s(0x1940L, ((safe_lshift_func_int8_t_s_u((p_55 = (safe_mul_func_int8_t_s_s(l_1142, (+(***g_672))))), 6)) , ((0x09L ^ (((**l_941) ^ g_12[3]) > p_55)) > p_55))));
                (*p_56) = ((~(l_1112 = (-1L))) , (*p_56));
                if (l_1113[1][6])
                {
                    if ((**l_941))
                        break;
                    (*l_675) = 1L;
                }
                else
                {
                    short l_1145 = 0x82D0L;
                    int l_1162 = 1L;
                    unsigned short l_1166 = 0xCC77L;
                    for (l_1134 = 0; (l_1134 < 19); ++l_1134)
                    {
                        return l_1145;


                    }
                    if ((((*l_1128) = p_55) >= l_1146))
                    {
                        int *l_1147 = &l_1113[2][1];
                        int *l_1148 = &l_1088;
                        int *l_1149 = (void*)0;
                        int *l_1150 = (void*)0;
                        int *l_1151 = &l_1091;
                        int *l_1152 = &l_1090;
                        int *l_1153[4][9] = {{&l_905,&l_905,(void*)0,&l_724[8][4][2],&l_1113[1][6],&l_724[8][4][2],(void*)0,&l_905,&l_905},{&l_1026,(void*)0,&l_905,&l_724[8][4][2],&l_905,(void*)0,&l_1026,&l_1026,(void*)0},{&l_724[8][4][2],(void*)0,(void*)0,(void*)0,&l_724[8][4][2],(void*)0,&l_905,(void*)0,&l_724[8][4][2]},{(void*)0,(void*)0,(void*)0,&l_905,&l_1113[1][6],&l_1113[1][6],&l_905,(void*)0,(void*)0}};
                        int i, j;
                        l_1154--;
                        (*l_675) = (p_55 ^ (l_1101 |= (***g_1062)));
                    }
                    else
                    {
                        int *l_1158 = &l_723[0][1];
                        g_1157 = (p_55 > 0x98L);
                        l_1159[1][0]--;
                        (*g_63) = (*p_56);

                        ;
                        (*l_1158) &= (*l_675);
                    }
                    if ((*p_54))
                    {
                        int *l_1163 = &l_1114[0][4];
                        int *l_1164 = (void*)0;
                        int *l_1165[5] = {&l_1116[0][3],&l_1116[0][3],&l_1116[0][3],&l_1116[0][3],&l_1116[0][3]};
                        int i;
                        l_1162 = (*p_54);
                        --l_1166;
                        (**l_941) = ((p_55 <= 0x9EL) & p_55);
                        (*g_63) = (*p_56);

                        ;
                    }
                    else
                    {
                        unsigned l_1173 = 0UL;
                        int *l_1176[5][4][8] = {{{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905},{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905}},{{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905},{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905}},{{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905},{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905}},{{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905},{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905}},{{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905},{&l_723[0][0],&l_905,&l_1088,&l_905,(void*)0,&g_120,&l_1162,&l_905},{&l_905,&l_905,&g_120,&l_905,&l_905,&g_120,&l_905,&l_905}}};
                        int i, j, k;
                        (*l_675) = l_1162;
                        (*l_675) &= (safe_add_func_int16_t_s_s(((!(safe_lshift_func_int16_t_s_s(l_1173, (safe_mul_func_int8_t_s_s((p_55 ^= ((void*)0 != l_1176[4][0][0])), ((~(safe_sub_func_uint32_t_u_u(0x004DF3E1L, 4294967288UL))) >= ((*p_54) , (((safe_add_func_int32_t_s_s((((((*g_816) > l_723[0][1]) , ((0xCB79L > 1L) >= (***g_672))) && l_1093) && l_1107), g_11[4][1])) , 0x3A040D45L) , (*g_674))))))))) , 0x7D3AL), 65527UL));
                    }
                    for (l_1095 = 5; (l_1095 >= 1); l_1095 -= 1)
                    {
                        if (l_1162)
                            break;
                        (*p_56) = (void*)0;

                        ;
                        return p_55;


                    }
                }
            }
        }
    }


    ;
    ;
    ;
    ;
    ;
    ;
    if ((**l_941))
    {
        volatile int ***l_1194 = &g_1193;
        (*l_675) &= 1L;
        (*l_1194) = &g_666[2][5];
        return (*l_675);


    }
    else
    {
        unsigned l_1197 = 0xBB97B6DEL;
        char ***l_1214[3][8][10] = {{{&g_673[2],&g_673[2],(void*)0,&g_673[2],(void*)0,&l_670,&g_673[2],(void*)0,(void*)0,&g_673[2]},{&g_673[2],&g_673[0],&g_673[2],&l_670,&l_670,&g_673[0],&g_673[2],&g_673[2],&g_673[0],&l_670},{&g_673[2],&g_673[2],&g_673[2],&g_673[2],&l_670,&l_670,(void*)0,(void*)0,(void*)0,&l_670},{&g_673[0],&g_673[2],&l_670,&g_673[2],&g_673[0],&g_673[1],&g_673[2],(void*)0,(void*)0,&g_673[0]},{(void*)0,&g_673[2],&g_673[2],&g_673[2],&g_673[1],&g_673[2],&g_673[2],&g_673[0],&g_673[0],&g_673[2]},{&g_673[2],&g_673[2],&g_673[0],(void*)0,&g_673[0],&g_673[2],&g_673[2],&g_673[2],&g_673[0],&g_673[0]},{&g_673[2],&l_670,&g_673[2],&l_670,&l_670,&g_673[2],&l_670,&g_673[2],&g_673[1],&g_673[2]},{(void*)0,&g_673[0],&g_673[2],&g_673[2],&l_670,&g_673[1],&g_673[2],&l_670,(void*)0,&l_670}},{{&g_673[0],&g_673[2],&g_673[2],&l_670,&g_673[0],&l_670,&g_673[2],&g_673[2],&g_673[2],&g_673[0]},{&g_673[2],&g_673[1],&g_673[2],&g_673[2],&g_673[0],&g_673[0],&g_673[2],&g_673[2],(void*)0,&g_673[1]},{&l_670,&g_673[2],&g_673[0],&g_673[1],&g_673[0],(void*)0,(void*)0,&g_673[0],&g_673[1],&g_673[2]},{(void*)0,(void*)0,&g_673[2],&g_673[2],&l_670,&l_670,&g_673[2],&g_673[2],&l_670,&g_673[0]},{&g_673[0],&g_673[0],&g_673[2],&l_670,(void*)0,&g_673[2],&g_673[2],&g_673[2],&g_673[1],&g_673[2]},{&g_673[2],(void*)0,&l_670,&g_673[2],&g_673[0],&l_670,&g_673[2],&g_673[2],&l_670,&l_670},{&g_673[1],&l_670,&g_673[2],&g_673[0],&g_673[1],(void*)0,&l_670,&l_670,&l_670,&l_670},{&g_673[2],(void*)0,&g_673[2],&g_673[2],(void*)0,&g_673[2],&g_673[2],&l_670,&g_673[1],(void*)0}},{{&g_673[0],&g_673[2],&g_673[2],&l_670,&g_673[1],&g_673[2],&l_670,(void*)0,&l_670,&l_670},{&g_673[0],&l_670,&g_673[2],&g_673[2],&g_673[0],&g_673[2],&l_670,&l_670,(void*)0,(void*)0},{&g_673[2],&l_670,&l_670,(void*)0,(void*)0,(void*)0,&l_670,&l_670,&g_673[2],&g_673[2]},{&g_673[1],&g_673[2],&l_670,&g_673[2],&l_670,&l_670,&g_673[2],&l_670,&g_673[2],&g_673[1]},{&g_673[2],(void*)0,&g_673[2],(void*)0,(void*)0,&g_673[2],(void*)0,&g_673[0],&l_670,&g_673[2]},{&g_673[1],(void*)0,&g_673[2],&g_673[2],(void*)0,&g_673[2],&g_673[2],(void*)0,&g_673[2],(void*)0},{(void*)0,(void*)0,&g_673[2],&g_673[1],&g_673[0],&g_673[2],&l_670,&g_673[2],&g_673[0],&g_673[2]},{&g_673[1],&l_670,&g_673[2],&g_673[2],&g_673[0],(void*)0,&l_670,&l_670,(void*)0,&g_673[0]}}};
        int i, j, k;
        for (l_1154 = 0; (l_1154 != 59); l_1154 = safe_add_func_int32_t_s_s(l_1154, 1))
        {
            char l_1213 = 4L;
            ++l_1197;
            for (l_807 = 16; (l_807 < 52); l_807++)
            {
                for (l_888 = 0; l_888 < 5; l_888 += 1)
                {
                    for (l_955 = 0; l_955 < 8; l_955 += 1)
                    {
                        g_11[l_888][l_955] = 1L;
                    }
                }
            }
            for (l_807 = 0; (l_807 <= 52); l_807 = safe_add_func_int8_t_s_s(l_807, 3))
            {
                short l_1204[7] = {0xE7D4L,0xAF76L,0xAF76L,0xE7D4L,0xAF76L,0xAF76L,0xE7D4L};
                short *l_1207[9] = {&g_606,&g_606,&g_606,&g_606,&g_606,&g_606,&g_606,&g_606,&g_606};
                int ***l_1210 = &l_908;
                int *l_1215 = (void*)0;
                int *l_1216 = &g_120;
                int i;
                (*l_941) = ((*l_1191) = (*p_56));

                ;
                l_1204[6] |= l_1197;
                (*l_1216) = (safe_sub_func_int32_t_s_s(((g_606 = ((**l_1191) , g_10)) , (safe_sub_func_int8_t_s_s((l_1204[6] < l_1204[6]), p_55))), 0x8EED1FE5L));
                if ((*p_54))
                    continue;
            }
        }

        ;
        for (g_574 = (-22); (g_574 != 48); g_574++)
        {
            unsigned l_1219 = 1UL;
            (*l_941) = (l_1219 , (*l_941));
            return (***g_1062);


        }
    }

    ;
    if (((*g_816) || (safe_div_func_uint16_t_u_u(((l_1227 = (*p_54)) <= l_1228[1]), p_55))))
    {
        unsigned short l_1269 = 65535UL;
        int l_1271 = 0x69481DFFL;
        int l_1275[6][6][4] = {{{1L,9L,9L,1L},{(-1L),9L,0x0F5A57BAL,9L},{9L,0L,0x0F5A57BAL,0x0F5A57BAL},{(-1L),(-1L),9L,0x0F5A57BAL},{1L,0L,1L,9L},{1L,9L,9L,1L}},{{(-1L),9L,0x0F5A57BAL,9L},{9L,0L,0x0F5A57BAL,0x0F5A57BAL},{(-1L),(-1L),9L,0x0F5A57BAL},{1L,0L,1L,9L},{1L,9L,9L,1L},{1L,0x0F5A57BAL,(-1L),0x0F5A57BAL}},{{0x0F5A57BAL,9L,(-1L),(-1L)},{1L,1L,0x0F5A57BAL,(-1L)},{0L,9L,0L,0x0F5A57BAL},{0L,0x0F5A57BAL,0x0F5A57BAL,0L},{1L,0x0F5A57BAL,(-1L),0x0F5A57BAL},{0x0F5A57BAL,9L,(-1L),(-1L)}},{{1L,1L,0x0F5A57BAL,(-1L)},{0L,9L,0L,0x0F5A57BAL},{0L,0x0F5A57BAL,0x0F5A57BAL,0L},{1L,0x0F5A57BAL,(-1L),0x0F5A57BAL},{0x0F5A57BAL,9L,(-1L),(-1L)},{1L,1L,0x0F5A57BAL,(-1L)}},{{0L,9L,0L,0x0F5A57BAL},{0L,0x0F5A57BAL,0x0F5A57BAL,0L},{1L,0x0F5A57BAL,(-1L),0x0F5A57BAL},{0x0F5A57BAL,9L,(-1L),(-1L)},{1L,1L,0x0F5A57BAL,(-1L)},{0L,9L,0L,0x0F5A57BAL}},{{0L,0x0F5A57BAL,0x0F5A57BAL,0L},{1L,0x0F5A57BAL,(-1L),0x0F5A57BAL},{0x0F5A57BAL,9L,(-1L),(-1L)},{1L,1L,0x0F5A57BAL,(-1L)},{0L,9L,0L,1L},{0x0F5A57BAL,1L,1L,0x0F5A57BAL}}};
        int l_1276 = 0xDBC39CFEL;
        int i, j, k;
        for (l_802 = 0; (l_802 == (-28)); l_802--)
        {
            unsigned short l_1242 = 2UL;
            int ***l_1250 = &l_908;
            int *l_1253[10][9] = {{(void*)0,&l_955,&l_955,(void*)0,&l_724[8][7][1],(void*)0,&l_724[8][7][1],(void*)0,&l_955},{&l_724[8][7][1],&l_724[8][7][1],&g_16,(void*)0,&l_724[8][7][1],&l_955,&g_5,&l_699,&l_724[8][7][1]},{&l_806,&l_955,&l_699,&l_905,&l_699,(void*)0,&l_724[8][7][1],&l_724[8][7][1],&l_724[8][7][1]},{&l_724[8][7][1],&l_905,&g_16,&l_699,&g_16,&l_905,&l_724[8][7][1],(void*)0,&l_724[0][0][2]},{&l_724[8][7][1],&l_724[8][7][1],&l_955,&l_905,(void*)0,&l_955,(void*)0,(void*)0,(void*)0},{&l_806,&l_724[8][7][1],&l_955,&g_120,(void*)0,(void*)0,(void*)0,(void*)0,&g_120},{&l_724[8][7][1],&l_806,&l_724[8][7][1],&l_724[0][0][2],&l_955,(void*)0,&l_699,&l_724[8][7][1],&g_16},{(void*)0,&g_120,&l_955,&l_955,(void*)0,&l_955,&l_806,&l_699,(void*)0},{(void*)0,&l_905,&l_905,&l_724[0][0][2],&l_724[0][0][2],&l_905,&l_905,(void*)0,&l_724[8][7][1]},{(void*)0,&l_905,&l_724[8][7][1],&g_120,&g_5,(void*)0,&l_955,&l_724[8][7][1],(void*)0}};
            unsigned char l_1281 = 0x69L;
            int i, j;
            for (g_625 = 0; (g_625 < 29); g_625 = safe_add_func_uint16_t_u_u(g_625, 9))
            {
                unsigned l_1259 = 0xE309693AL;
                int l_1272[4][10] = {{3L,0x46FDEB44L,0x46FDEB44L,3L,1L,0xF816A422L,4L,0xEFD507A8L,(-1L),(-3L)},{0x81202589L,0xA7587FE5L,(-1L),4L,0x46FDEB44L,0L,0x46FDEB44L,4L,(-1L),0xA7587FE5L},{0x1269295DL,(-1L),5L,3L,9L,6L,0xF816A422L,(-1L),1L,1L},{(-1L),(-3L),6L,0L,0L,6L,(-3L),(-1L),3L,0xF816A422L}};
                int i, j;
                for (l_955 = 15; (l_955 != 2); l_955 = safe_sub_func_uint8_t_u_u(l_955, 7))
                {
                    int ****l_1235 = (void*)0;
                    int ***l_1237 = &l_941;
                    int ****l_1236 = &l_1237;
                    int ***l_1239 = &g_63;
                    int ****l_1238 = &l_1239;
                    unsigned short ****l_1248 = (void*)0;
                    unsigned short *****l_1247 = &l_1248;
                    int l_1273 = (-1L);
                    int l_1274 = 0x4858A264L;
                    int l_1277 = 2L;
                    int l_1278[6][4] = {{0xC2E26413L,0xC2E26413L,0x0BC83E19L,0xC2E26413L},{0xC2E26413L,1L,1L,0xC2E26413L},{1L,0xC2E26413L,1L,1L},{0xC2E26413L,0xC2E26413L,0x0BC83E19L,0xC2E26413L},{0xC2E26413L,1L,1L,0xC2E26413L},{1L,0xC2E26413L,1L,1L}};
                    short *l_1294 = &g_191;
                    int i, j;
                    (*g_1193) = (*g_665);
                }
                (*l_941) = ((*p_56) = (*p_56));
                l_1272[3][6] &= (0UL && p_55);
            }
            return p_55;


        }
    }
    else
    {
        short l_1302[7];
        short **l_1311 = (void*)0;
        int **l_1329 = &l_675;
        int *l_1330 = &l_905;
        unsigned short l_1331 = 0xEDDBL;
        int i;
        for (i = 0; i < 7; i++)
            l_1302[i] = (-3L);
        for (g_1280 = 0; (g_1280 >= (-7)); --g_1280)
        {
            int *l_1298 = &l_724[8][7][1];
            int *l_1299 = &l_806;
            int *l_1300 = &l_905;
            int *l_1301[1];
            unsigned char *****l_1308 = &l_1003[0];
            int i;
            for (i = 0; i < 1; i++)
                l_1301[i] = &l_724[8][7][1];
            l_1303[4][3][1]--;
            if ((**p_56))
                continue;
            if ((*p_54))
                continue;
            (*l_1299) &= (safe_add_func_uint16_t_u_u((((*l_1308) = (void*)0) == ((safe_mul_func_uint16_t_u_u((*l_1300), p_55)) , l_1322[4])), (-2L)));
        }
        l_1331 = (safe_add_func_int16_t_s_s((p_55 == (safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_55, ((((**p_56) != (~((*l_1330) ^= ((*g_674) , 0x2803E53BL)))) >= (**l_1329)) & 0x803A0A9EL))), (**l_1329)))), (*g_816)));
        (*l_1329) = (*p_56);
    }
    return p_55;


}







static short func_57(int p_58, unsigned char p_59, int ** p_60, int ** p_61, unsigned p_62)
{
    int **l_65[10][2] = {{(void*)0,(void*)0},{(void*)0,&g_64},{(void*)0,(void*)0},{(void*)0,&g_64},{(void*)0,(void*)0},{(void*)0,&g_64},{(void*)0,(void*)0},{(void*)0,&g_64},{(void*)0,(void*)0},{(void*)0,&g_64}};
    int **l_66 = &g_64;
    unsigned short *l_67 = &g_68;
    int l_139[2];
    unsigned char l_163 = 0xA2L;
    int l_209 = (-1L);
    unsigned char l_233 = 0x50L;
    int l_262 = 0x340D29AFL;
    char *l_264[9][3] = {{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79},{&g_79,&g_79,&g_79}};
    char **l_263 = &l_264[2][1];
    unsigned l_284 = 0x84CD2F1CL;
    unsigned char ***l_299[5];
    unsigned char ****l_298[1];
    int l_377 = (-1L);
    unsigned char ***l_382 = &g_168[2];
    unsigned short l_385[10][9] = {{0x9AD6L,0UL,0xC2D2L,0xD8BCL,0UL,0xD8BCL,0xC2D2L,0UL,0x9AD6L},{0xFED1L,0UL,0x5676L,0UL,0xFED1L,0xFED1L,0UL,0x5676L,0UL},{0xC2D2L,0xF3E7L,1UL,1UL,0UL,0UL,0UL,1UL,1UL},{0xFED1L,0xFED1L,0UL,0x5676L,0UL,0xFED1L,0xFED1L,0UL,0x5676L},{0x9AD6L,0xF3E7L,0x9AD6L,0UL,0xC2D2L,0xD8BCL,0UL,0xD8BCL,0xC2D2L},{0x9F73L,0UL,0UL,0x9F73L,0x9BFFL,0x9F73L,0UL,0UL,0x9F73L},{3UL,0UL,1UL,0UL,3UL,0x49BFL,0xC2D2L,1UL,0xC2D2L},{0UL,0x9BFFL,0x5676L,0x5676L,0x9BFFL,0UL,0x9BFFL,0x5676L,0x5676L},{3UL,0x49BFL,0xC2D2L,1UL,0xC2D2L,0x49BFL,3UL,0UL,3UL},{0x9BFFL,0UL,0x9BFFL,0x5676L,0x5676L,0x9BFFL,0UL,0x9BFFL,0x5676L}};
    int l_417[3][7] = {{0xD94E81F9L,0xD94E81F9L,0xD94E81F9L,0xD94E81F9L,0xD94E81F9L,0xD94E81F9L,0xD94E81F9L},{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)},{0xD94E81F9L,0xD94E81F9L,0xD94E81F9L,0xD94E81F9L,0xD94E81F9L,0xD94E81F9L,0xD94E81F9L}};
    unsigned char l_425 = 1UL;
    short **l_428[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    char l_455[10] = {4L,4L,4L,4L,4L,4L,4L,4L,4L,4L};
    unsigned short l_460 = 65530UL;
    short *l_476 = &g_191;
    short **l_475 = &l_476;
    unsigned *l_556 = &g_203;
    int l_619 = 0xEFE0E990L;
    char l_624 = 0x77L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_139[i] = 0x672B4E2EL;
    for (i = 0; i < 5; i++)
        l_299[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_298[i] = &l_299[2];
    g_11[4][7] |= ((((p_62 , ((g_5 , l_65[2][0]) == l_66)) >= p_62) , (++(*l_67))) >= p_62);
    if (g_16)
    {
        int l_75 = 0x91A4AC15L;
        char *l_78[10] = {&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79,&g_79};
        int l_80[2];
        unsigned short l_87[5][9] = {{0xE4D3L,0xE4D3L,65535UL,0UL,65535UL,0x1C80L,0x82F8L,0x1C80L,65535UL},{65535UL,0xE4D3L,0xE4D3L,65535UL,0UL,65535UL,0x1C80L,0x82F8L,0x1C80L},{0x82F8L,0xBFFDL,65535UL,65535UL,0xBFFDL,0x82F8L,0xD559L,0xE4D3L,65531UL},{0UL,65535UL,0x82F8L,0UL,0UL,0x82F8L,65535UL,0UL,0xBFFDL},{65531UL,65535UL,0UL,0UL,0x197CL,0x197CL,0UL,0xE4D3L,0UL}};
        char l_88[6][8] = {{1L,0xFDL,0x90L,0L,(-5L),5L,0x38L,7L},{(-6L),0x54L,1L,0x38L,1L,1L,0x38L,1L},{0x38L,0x38L,0x90L,5L,0x1AL,(-2L),7L,0x51L},{0x1AL,(-2L),7L,0x51L,1L,1L,1L,0x51L},{(-2L),0x90L,(-2L),5L,0x66L,(-6L),0x54L,1L},{0L,(-5L),5L,0x38L,7L,0x66L,0x66L,7L}};
        unsigned l_149 = 0xA444081CL;
        unsigned char ***l_187 = (void*)0;
        short l_222 = 0x32C9L;
        char **l_228 = &l_78[6];
        char l_229[4];
        char l_230 = 0xE7L;
        int l_231 = 0xC9231B19L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_80[i] = 0xFFBA2427L;
        for (i = 0; i < 4; i++)
            l_229[i] = 3L;
        g_13 = ((safe_mul_func_int16_t_s_s(p_59, ((safe_div_func_int16_t_s_s(l_75, ((*l_67)++))) ^ ((((l_80[1] = g_3[4][0]) , (((safe_mod_func_int8_t_s_s(0L, (~l_80[1]))) < ((safe_mod_func_int16_t_s_s(g_15, p_59)) | ((-4L) & (safe_rshift_func_int16_t_s_u(((((*p_61) == (*l_66)) <= 0x8E2BL) < l_87[4][3]), g_16))))) , g_16)) >= l_87[0][2]) > l_88[2][0])))) & l_75);
        for (g_79 = 5; (g_79 >= 0); g_79 -= 1)
        {
            unsigned short l_113[5];
            unsigned l_115 = 18446744073709551615UL;
            volatile int l_118 = (-3L);
            int l_137 = (-3L);
            int l_152 = 0xC0090DE9L;
            int l_156 = 1L;
            int l_160 = 0x75C3F9EEL;
            int *l_180 = &g_120;
            unsigned char ***l_186 = &g_168[2];
            unsigned short l_216 = 7UL;
            unsigned char ****l_223 = &l_186;
            char **l_226[5][8] = {{&l_78[7],&l_78[7],(void*)0,(void*)0,&l_78[7],&l_78[7],(void*)0,(void*)0},{&l_78[7],&l_78[7],(void*)0,(void*)0,&l_78[7],&l_78[7],(void*)0,(void*)0},{&l_78[7],&l_78[7],(void*)0,(void*)0,&l_78[7],&l_78[7],(void*)0,(void*)0},{&l_78[7],&l_78[7],(void*)0,(void*)0,&l_78[7],&l_78[7],(void*)0,(void*)0},{&l_78[7],&l_78[7],(void*)0,(void*)0,&l_78[7],&l_78[7],(void*)0,(void*)0}};
            char ***l_227[1][10] = {{&l_226[1][3],&l_226[1][3],&l_226[1][3],&l_226[1][3],&l_226[3][2],&l_226[3][2],&l_226[1][3],&l_226[1][3],&l_226[1][3],&l_226[3][2]}};
            int i, j;
            for (i = 0; i < 5; i++)
                l_113[i] = 4UL;
        }
        l_233++;
    }
    else
    {
        unsigned l_242 = 4294967291UL;
        unsigned short *l_251 = &g_68;
        unsigned short **l_252 = &l_67;
        unsigned short **l_253 = &g_110;
        int l_266 = 0xF680B5AEL;
        int l_268 = 0x2AD8B430L;
        int l_277 = (-1L);
        int l_280 = (-10L);
        int l_281 = 0L;
        int l_321[2][9] = {{0xE670D3CCL,0L,1L,0L,0xE670D3CCL,0xE670D3CCL,0L,1L,0L},{0L,0x33EEFA31L,1L,1L,0x33EEFA31L,0L,0x33EEFA31L,1L,1L}};
        unsigned l_413 = 0x5BEE4979L;
        int *l_427[7] = {&l_266,(void*)0,&l_266,&l_266,(void*)0,&l_266,&l_266};
        short **l_429 = (void*)0;
        int l_461 = 0x309A9D60L;
        unsigned *l_462 = &g_136;
        unsigned l_490 = 18446744073709551615UL;
        unsigned char *l_545 = &l_425;
        int i, j;
        for (g_191 = 0; (g_191 >= (-12)); --g_191)
        {
            unsigned l_238 = 6UL;
            int l_241 = 2L;
            unsigned char *l_247 = (void*)0;
            unsigned char *l_248 = &l_163;
            l_238--;
            (*l_66) = (*g_63);
            l_242--;
            (*g_119) = (p_62 , (safe_rshift_func_uint8_t_u_u(l_242, (p_59 , ((*l_248) = p_62)))));
        }
        if (((((p_58 , (((*g_119) ^= (safe_div_func_int32_t_s_s((l_251 == ((*l_253) = ((*l_252) = l_67))), (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(p_58, (safe_div_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(6UL, l_262)) , ((void*)0 == l_263)), (-8L))))), 2))))) & p_58)) , (*g_119)) < g_111[0][2][1]) || 0xD0FC8B0EL))
        {
            int l_267 = 0xC4A3E8A9L;
            int l_269 = 0xC9804672L;
            int l_272 = 5L;
            int l_273 = 0x9F6374DBL;
            int l_276 = 0x7D8C577AL;
            int l_282 = (-1L);
            int l_283 = 6L;
            unsigned l_287 = 1UL;
            if ((0xB374L | p_62))
            {
                return l_242;
            }
            else
            {
                int l_265 = (-1L);
                int l_270 = (-2L);
                int l_271 = 0x50010058L;
                int l_274 = 1L;
                int l_275 = (-6L);
                int l_278 = 0x92C1AE49L;
                int l_279[6][5] = {{0xF9DC5812L,0L,0xB451EF16L,0L,0xF9DC5812L},{0xF9DC5812L,0L,0xB451EF16L,0L,0xF9DC5812L},{0xF9DC5812L,0L,0xB451EF16L,0L,0xF9DC5812L},{0xF9DC5812L,0L,0xB451EF16L,0L,0xF9DC5812L},{0xF9DC5812L,0L,0xB451EF16L,0L,0xF9DC5812L},{0xF9DC5812L,0L,0xB451EF16L,0L,0xF9DC5812L}};
                int i, j;
                ++l_284;
                l_287++;
                (*g_119) = (((++(*g_110)) <= (((l_271 > ((safe_add_func_int32_t_s_s((p_62 , 0x7A9D417DL), (safe_mod_func_int16_t_s_s((~(g_13 , p_59)), l_270)))) && (p_58 == (l_298[0] == (void*)0)))) > 4294967295UL) , 0UL)) == p_59);
                for (l_287 = 0; (l_287 != 46); l_287 = safe_add_func_int16_t_s_s(l_287, 5))
                {
                    int *l_302 = &g_16;
                    (*g_63) = (*g_63);
                    (*p_61) = l_302;
                }

                ;
            }

            ;
        }
        else
        {
            unsigned l_358 = 0xFB6A3B96L;
            int l_408 = (-10L);
            unsigned char l_409 = 1UL;
            int l_412[7][8][4] = {{{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L}},{{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L}},{{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L}},{{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L}},{{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L}},{{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L}},{{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L},{(-4L),(-9L),0x0CB769CCL,(-9L)},{(-4L),0x00C8F4B1L,0x0CB769CCL,0x00C8F4B1L}}};
            int l_430 = 0xA583837AL;
            unsigned short l_432 = 65535UL;
            unsigned l_445 = 0xB369480EL;
            int i, j, k;
            for (g_146 = 0; (g_146 >= 59); ++g_146)
            {
                unsigned short l_305 = 65535UL;
                if (l_305)
                    break;
            }
            (*l_66) = (void*)0;
            for (l_266 = 0; (l_266 == 15); l_266 = safe_add_func_uint8_t_u_u(l_266, 7))
            {
                char l_320 = 0x33L;
                int l_347 = 0L;
                unsigned l_353 = 0x823A3FC5L;
                char l_416 = 0x89L;
                if (((safe_mul_func_uint8_t_u_u((+p_62), (((0x57L <= ((safe_sub_func_uint16_t_u_u((*g_110), 1L)) , (++p_59))) > (l_268 >= (p_58 > ((p_58 < (safe_div_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u(65535UL, (safe_lshift_func_int16_t_s_u(g_120, (*g_110))))) || (*g_119)) >= p_62), (*g_110)))) && p_58)))) >= 0x4B19L))) , 1L))
                {
                    l_320 = 0x030865E2L;
                    for (g_191 = 0; (g_191 <= 4); g_191 += 1)
                    {
                        unsigned *l_343 = &g_203;
                        int l_344 = 0x54F700D4L;
                        unsigned short *l_345 = (void*)0;
                        unsigned short *l_346 = &g_111[0][2][0];
                        int i;
                        if (l_321[0][3])
                            break;
                        g_12[g_191] = ((l_320 , (safe_mul_func_uint16_t_u_u(((*l_346) = ((*l_251) = ((p_62 != (safe_lshift_func_uint16_t_u_s((safe_div_func_uint8_t_u_u(((g_328 = &p_62) != (void*)0), (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(p_59, 1)), (safe_lshift_func_int8_t_s_s(g_13, ((!((*l_343) = g_5)) <= (((((g_111[1][2][1] != (((*g_119) , 65531UL) ^ 0x96F7L)) > (*g_110)) > p_62) <= p_62) | g_136)))))), 0L)) ^ 0UL), l_344)) , p_58), p_59)))), g_111[0][7][1]))) <= 0L))), g_5))) >= 2L);

                        ;
                        (*g_119) |= (p_59 & (l_347 = l_344));
                    }
                }
                else
                {
                    unsigned l_350 = 4UL;
                    if ((safe_mod_func_int16_t_s_s(g_4, p_58)))
                    {
                        ++l_350;
                    }
                    else
                    {
                        unsigned char l_356 = 0x8AL;
                        int *l_357[8][8] = {{(void*)0,&l_321[1][6],&l_321[0][6],&l_321[0][3],&l_321[0][6],&l_321[1][6],(void*)0,&l_321[0][3]},{&l_321[0][3],&l_321[0][3],(void*)0,&l_321[0][3],(void*)0,&l_321[1][6],&l_321[0][6],&l_321[1][6]},{(void*)0,&l_321[1][6],&l_321[0][6],&l_321[1][6],(void*)0,&l_321[0][3],(void*)0,&l_321[0][3]},{&l_321[0][3],&l_321[0][3],(void*)0,&l_321[1][6],&l_321[0][6],&l_321[0][3],&l_321[0][6],&l_321[1][6]},{(void*)0,(void*)0,(void*)0,&l_321[0][3],&l_321[0][6],&l_321[0][3],(void*)0,&l_321[0][3]},{&l_321[0][6],(void*)0,&l_321[0][6],&l_321[0][3],(void*)0,&l_321[0][3],&l_321[0][6],(void*)0},{&l_321[0][6],&l_321[0][3],(void*)0,&l_321[0][3],&l_321[0][6],&l_321[0][3],(void*)0,(void*)0},{(void*)0,&l_321[1][6],&l_321[0][6],&l_321[0][3],&l_321[0][6],&l_321[1][6],(void*)0,&l_321[0][3]}};
                        int i, j;
                        (*g_119) = l_353;
                        (*g_119) = (safe_mod_func_uint16_t_u_u(((l_358 = l_356) , 0x091FL), (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(l_347, 3)), (*g_328)))));
                    }
                    for (l_350 = 5; (l_350 >= 35); ++l_350)
                    {
                        return g_136;


                    }
                    for (l_281 = 1; (l_281 >= 0); l_281 -= 1)
                    {
                        int i, j;
                        return l_321[l_281][(l_281 + 7)];


                    }
                    if (l_350)
                        continue;
                }
                for (p_59 = 0; (p_59 <= 4); p_59 += 1)
                {
                    unsigned short **l_365 = &l_251;
                    int l_376 = 0x80C4C83DL;
                    int i, j;
                    g_11[p_59][p_59] = (l_365 != (g_11[p_59][(p_59 + 3)] , &l_251));
                    (*g_119) ^= (safe_mod_func_uint16_t_u_u((*g_110), g_203));
                    for (p_62 = 0; (p_62 <= 5); p_62 += 1)
                    {
                        unsigned short *l_390[3][1];
                        int l_391 = 0xB40A61C0L;
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_390[i][j] = (void*)0;
                        }
                        (*g_119) &= ((p_58 , ((safe_sub_func_uint16_t_u_u(((**l_252)--), g_11[p_59][(p_59 + 3)])) != (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(l_376, 6)), 7)))) && p_58);
                        if (l_358)
                            continue;
                        (*g_119) = (((**l_252)++) <= ((safe_mul_func_int16_t_s_s((l_382 != &g_168[5]), ((l_385[3][1] || ((safe_rshift_func_int8_t_s_s(p_58, p_62)) > ((((safe_add_func_int8_t_s_s(((**l_263) |= ((g_111[1][0][0] = (l_277 = l_280)) , p_62)), ((l_391 = p_59) && g_120))) < 9L) , 0xF8L) | 1UL))) & l_266))) , g_111[0][2][0]));
                    }
                    for (g_203 = 0; (g_203 != 20); g_203++)
                    {
                        char l_402 = 8L;
                        int l_405 = 6L;
                        (*g_119) = (safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(p_62, (safe_div_func_int32_t_s_s(g_11[p_59][(p_59 + 3)], l_402)))), 5)), ((safe_mul_func_uint16_t_u_u(((l_405 &= p_59) , ((((l_268 &= ((((p_58 ^ (l_347 = (safe_add_func_uint16_t_u_u((p_59 == (l_281 = (l_376 , l_347))), ((((g_191 == 0x44L) , (*g_328)) & (*g_119)) || (-3L)))))) && g_120) , 65527UL) , (-1L))) != 1UL) || p_62) < (*g_119))), 0x971FL)) & 0xDEL)));
                        l_409++;
                        l_413--;
                        (*g_119) = l_416;
                    }
                }
            }

            ;
            if ((l_417[1][1] > (safe_rshift_func_int16_t_s_u(2L, 15))))
            {
                unsigned short l_422[7] = {6UL,6UL,0x6B16L,6UL,6UL,0x6B16L,6UL};
                int *l_426 = &l_139[0];
                int i;
                p_58 = ((*g_119) = ((*g_110) <= (safe_mod_func_int32_t_s_s(l_422[6], (safe_sub_func_uint8_t_u_u(l_425, g_120))))));
                (*g_119) ^= (-1L);
                l_427[2] = l_426;


                for (l_409 = 0; (l_409 <= 2); l_409 += 1)
                {
                    l_429 = l_428[3];
                    for (g_191 = 0; (g_191 <= 2); g_191 += 1)
                    {
                        int i, j;
                        l_417[g_191][(l_409 + 1)] = (l_417[l_409][(g_191 + 4)] <= l_417[g_191][(g_191 + 2)]);
                        if ((*g_119))
                            break;
                        return p_58;


                    }
                }
            }
            else
            {
                int l_431[3][6] = {{0xB558DCE8L,0xB558DCE8L,0xB558DCE8L,0xB558DCE8L,0xB558DCE8L,0xB558DCE8L},{0xB558DCE8L,0xB558DCE8L,0xB558DCE8L,0xB558DCE8L,0xB558DCE8L,0xB558DCE8L},{0xB558DCE8L,0xB558DCE8L,0xB558DCE8L,0xB558DCE8L,0xB558DCE8L,0xB558DCE8L}};
                int l_437 = 0x3F08047FL;
                char ***l_438 = &l_263;
                int l_442 = 0x7BCFD331L;
                int l_443 = 1L;
                int l_444[4][4][10] = {{{0L,0x1748A1E7L,(-6L),0x9DBB3CD7L,0x45496D31L,0L,0x4CDBDDA0L,(-7L),0x1748A1E7L,0xBBC64855L},{0L,0x4CDBDDA0L,(-7L),0x1748A1E7L,0xBBC64855L,(-1L),(-1L),0xBBC64855L,0x1748A1E7L,(-7L)},{0x9F0C9A03L,0x9F0C9A03L,0L,0x3266121EL,0x9DBB3CD7L,0xE5F3EE39L,0L,0xBBC64855L,0xFD28801FL,5L},{0L,(-1L),(-7L),0L,0x04F80896L,(-1L),0L,(-7L),(-7L),0x9DBB3CD7L}},{{0L,0x9F0C9A03L,0xB63D813EL,0x1748A1E7L,5L,(-1L),(-1L),5L,0xCA88D76FL,(-7L)},{0L,0x4CDBDDA0L,0L,0x43AEA9E8L,5L,0xE5F3EE39L,0x4CDBDDA0L,0x9DBB3CD7L,0xFD28801FL,0x9DBB3CD7L},{0x9F0C9A03L,(-1L),0x04F80896L,0x43AEA9E8L,0x04F80896L,(-1L),0x9F0C9A03L,(-7L),0xCA88D76FL,5L},{0L,0L,0x04F80896L,0x1748A1E7L,0x9DBB3CD7L,0L,(-1L),0x9DBB3CD7L,(-7L),(-7L)}},{{0x4CDBDDA0L,0L,0L,0L,0xBBC64855L,0xE5F3EE39L,0x9F0C9A03L,5L,0xFD28801FL,0xBBC64855L},{0x4CDBDDA0L,(-1L),0xB63D813EL,0x3266121EL,0x04F80896L,0L,0x4CDBDDA0L,(-7L),0x1748A1E7L,0xBBC64855L},{0x49339704L,(-6L),0xE5F3EE39L,1L,(-1L),0L,0L,(-1L),1L,0xE5F3EE39L},{3L,3L,0x4CDBDDA0L,0L,0L,0x13282A5AL,0x45496D31L,(-1L),(-8L),(-1L)}},{{0x45496D31L,0L,0xE5F3EE39L,(-1L),0x60A6F103L,0L,0x45496D31L,0xE5F3EE39L,0x98C238BAL,0L},{0x49339704L,3L,0L,1L,(-1L),0L,0L,(-1L),8L,0xE5F3EE39L},{0x45496D31L,(-6L),0x4CDBDDA0L,1L,(-1L),0x13282A5AL,(-6L),0L,(-8L),0L},{3L,0L,0x60A6F103L,1L,0x60A6F103L,0L,3L,0xE5F3EE39L,8L,(-1L)}}};
                int *l_448 = &l_430;
                int i, j, k;
                if (p_59)
                {
                    --l_432;
                    (*g_119) = (safe_sub_func_int16_t_s_s(p_62, l_431[1][5]));
                    l_437 &= (*g_119);
                    if ((*g_119))
                    {
                        (*g_63) = (((void*)0 != l_438) , (*p_61));

                        ;
                        (*g_119) = (l_437 = (*g_119));
                    }
                    else
                    {
                        int *l_439 = (void*)0;
                        l_439 = (l_431[0][4] , ((*g_63) = (void*)0));
                    }

                    ;
                }
                else
                {
                    int *l_440 = (void*)0;
                    int l_441[5] = {0xB0B057DFL,0xB0B057DFL,0xB0B057DFL,0xB0B057DFL,0xB0B057DFL};
                    int i;
                    (*l_66) = l_440;
                    l_445++;
                    l_441[0] ^= (((((*g_110) , (g_146 & p_58)) , g_79) , (void*)0) == l_440);
                }

                ;
                (*g_119) ^= (((*l_448) = 0x51071179L) , (p_58 = (((((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((l_455[7] ^ p_59), (*g_110))), 3)), g_3[2][5])) , g_12[4]) < p_59) , 0xBAC9L) < (*g_110))));
            }

            ;

        }

        ;
        ;
        ;

        if (((*g_119) <= (safe_mod_func_uint16_t_u_u((g_12[4] , (((*l_462) ^= ((((0xA4L != (((l_460 = ((p_59 = (((p_62 >= (safe_mod_func_int32_t_s_s((*g_119), ((((p_59 >= (p_59 < p_58)) != (*g_328)) , p_59) & 1UL)))) , &g_110) != &g_110)) == p_62)) || l_461) <= p_58)) , 0x0CL) && 0x40L) | 0xB91F5DE5L)) ^ p_58)), 4UL))))
        {
            unsigned short **l_467 = &l_251;
            int l_474 = 0x0F5BCEBBL;
            char l_477 = 0x2DL;
            unsigned char **l_488 = &g_169[4][2][6];
            int l_502 = 0x15C9F3F9L;
            int l_505 = 0x2E6DD331L;
            int l_507 = (-1L);
            int l_512 = (-1L);
            int l_515 = 0L;
            int l_517 = (-10L);
            int l_519 = (-6L);
            int l_521 = 0x6BC76A94L;
            int l_522[10][10][2] = {{{(-4L),5L},{0x5A18B36BL,0xE5DC9B86L},{(-1L),0L},{0x179CF0D5L,0x4DC5C50BL},{0x95BEE7D0L,0xEEACB47BL},{0xC7D955F1L,(-1L)},{5L,0x4AEAE882L},{(-1L),8L},{2L,4L},{1L,0x4FE1CF96L}},{{(-1L),(-1L)},{0xF4883CDAL,0xD3EF86D0L},{0x6FFC6498L,0x3BF7712EL},{(-1L),(-1L)},{0L,(-8L)},{0x36AE6D00L,0x6FFC6498L},{0x98419E8FL,0xD0B6D3BFL},{(-1L),0x4AEAE882L},{0x8F3E7A18L,0L},{0x8B4A6378L,4L}},{{0x6FFC6498L,1L},{1L,0x28C829EBL},{0L,2L},{0x9B6D4910L,0x4FE1CF96L},{0x4DC5C50BL,0xE4055DBAL},{7L,0xBD21684AL},{1L,7L},{7L,0xA77A7FD4L},{(-1L),0L},{0x22A8AC4CL,(-1L)}},{{(-1L),0x6BE338C7L},{0x98419E8FL,0xFF89D26EL},{4L,0xD3EF86D0L},{7L,0xD3EF86D0L},{4L,0xFF89D26EL},{0x98419E8FL,0x6BE338C7L},{(-1L),(-1L)},{0x22A8AC4CL,0L},{(-1L),0xA77A7FD4L},{7L,7L}},{{1L,0xBD21684AL},{7L,0xE4055DBAL},{0x4DC5C50BL,0x4FE1CF96L},{0x9B6D4910L,2L},{0L,0x28C829EBL},{1L,1L},{0x6FFC6498L,4L},{0x8B4A6378L,0L},{0x8F3E7A18L,0x4AEAE882L},{(-1L),0xD0B6D3BFL}},{{0x98419E8FL,0x6FFC6498L},{0x36AE6D00L,0xFC777497L},{1L,0xD3EF86D0L},{3L,7L},{1L,0xD0B6D3BFL},{(-1L),1L},{0x4715FF2AL,0x8F3E7A18L},{0x8B4A6378L,0xA77A7FD4L},{0xFF89D26EL,0xDD34C061L},{0x3BF7712EL,0x28C829EBL}},{{7L,1L},{(-1L),0L},{0x4DC5C50BL,0x90C2D2DFL},{(-1L),0x82AC15FFL},{0L,0x6BE338C7L},{0xDD34C061L,(-8L)},{0x4AEAE882L,0x95BEE7D0L},{(-4L),(-1L)},{1L,0x7ED54342L},{(-1L),1L}},{{3L,7L},{(-10L),0x6FFC6498L},{1L,(-4L)},{0x00799516L,0x7ED54342L},{0xE4055DBAL,0L},{0x1AC8EC1CL,0x1AC8EC1CL},{0x4AEAE882L,(-1L)},{7L,(-1L)},{0L,0x82AC15FFL},{0x18BB4DC5L,0L}},{{0xA77A7FD4L,0xA3E686CAL},{0xA77A7FD4L,0L},{0x18BB4DC5L,0x82AC15FFL},{0L,(-1L)},{7L,(-1L)},{0x4AEAE882L,0x1AC8EC1CL},{0x1AC8EC1CL,0L},{0xE4055DBAL,0x7ED54342L},{0x00799516L,(-4L)},{1L,0x6FFC6498L}},{{(-10L),7L},{3L,1L},{(-1L),0x7ED54342L},{1L,(-1L)},{(-4L),0x95BEE7D0L},{0x4AEAE882L,(-8L)},{0xDD34C061L,0x6BE338C7L},{0L,0x82AC15FFL},{(-1L),0x90C2D2DFL},{4L,(-9L)}}};
            int l_524[4];
            unsigned short l_528 = 1UL;
            short **l_551 = (void*)0;
            unsigned char l_560 = 0x1BL;
            int *l_566 = &l_522[4][2][0];
            unsigned l_643 = 0UL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_524[i] = 4L;
            if (((safe_mul_func_int16_t_s_s((((((~(1L ^ (safe_sub_func_int32_t_s_s(((void*)0 != l_467), (*g_119))))) | (safe_rshift_func_uint16_t_u_s((p_62 ^ (safe_sub_func_int8_t_s_s(p_59, g_146))), 9))) , (l_428[3] = l_428[1])) == ((((**l_467) &= ((safe_mul_func_int16_t_s_s(p_62, g_111[0][2][0])) & p_58)) <= l_474) , l_475)) , (-3L)), 0x061FL)) | l_477))
            {
                unsigned *l_482 = &g_136;
                (*g_119) = (*g_119);
                for (l_461 = (-12); (l_461 >= 24); l_461++)
                {
                    unsigned **l_483 = &l_482;
                    int l_489 = 0xF2CCF957L;
                    l_490 = (((((p_62 < (((*l_483) = l_482) == &g_136)) == (((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((*l_462) |= 4294967292UL), l_474)), p_59)) , l_488) == &g_169[0][1][3])) , (l_489 & g_136)) > 0xCED3L) != p_62);
                }
                (*l_66) = (*g_63);
            }
            else
            {
                int l_498 = (-1L);
                int l_499 = (-7L);
                int l_503 = 0x3C6620C9L;
                int l_504 = 0x77C9EB97L;
                int l_510 = 0x7D75627FL;
                int l_516[10][2][9] = {{{0x0B827835L,(-1L),(-1L),0L,0x6B324086L,0xCAE15F4CL,1L,(-1L),(-6L)},{0x95F3FE8BL,0L,0L,8L,0x6B324086L,0L,(-1L),0xF9E3A539L,0L}},{{0xDD28A3ECL,0xF9E3A539L,(-1L),0x6B324086L,0xF9E3A539L,0x272DCDFBL,0x6B324086L,1L,0L},{8L,0xB3A02661L,(-1L),0L,0x63C5FAEAL,0x272DCDFBL,(-1L),(-1L),0L}},{{(-1L),0x6B324086L,0x561A65DEL,0x07090DF1L,1L,(-9L),1L,0x07090DF1L,0x561A65DEL},{0xB3A02661L,0xB3A02661L,0L,0x95F3FE8BL,0x30BAD962L,0xE07E7455L,1L,0x0B827835L,(-1L)}},{{0L,0xE9DB4D38L,0x53D278A8L,0L,8L,1L,(-1L),8L,(-1L)},{1L,(-1L),0L,0xF9E3A539L,(-1L),0L,0x6B324086L,8L,0L}},{{(-1L),(-10L),0x561A65DEL,0x30BAD962L,0x6B324086L,(-6L),0L,0x0B827835L,0xEF44185DL},{0xF9E3A539L,0L,(-1L),0xF9E3A539L,(-10L),0x376585A1L,0x0B827835L,0x07090DF1L,0xEF44185DL}},{{0x07090DF1L,1L,(-1L),0L,(-1L),0L,(-1L),(-1L),0L},{(-10L),0x95F3FE8BL,0x272DCDFBL,0x95F3FE8BL,(-10L),0x3B46D735L,1L,1L,(-1L)}},{{(-10L),0x63C5FAEAL,(-6L),0x07090DF1L,0x6B324086L,0L,8L,0xE9DB4D38L,0L},{0xCD3C0872L,0xDB2BAAABL,0x30BAD962L,(-7L),0xDB2BAAABL,8L,0xA7C345A7L,1L,0x0B827835L}},{{0L,0xDB2BAAABL,1L,(-1L),0xE12A3135L,(-1L),(-7L),1L,(-1L)},{0xA7C345A7L,(-4L),(-1L),0x4CAC18F1L,(-3L),0xB3A02661L,0xA7C345A7L,(-7L),1L}},{{0x36FD9F42L,1L,(-1L),0xA7C345A7L,0x4CAC18F1L,0L,0xE12A3135L,(-4L),8L},{(-7L),0x36FD9F42L,1L,(-4L),(-4L),1L,0x36FD9F42L,(-7L),(-1L)}},{{0L,1L,0x30BAD962L,(-4L),0L,(-1L),0xDB2BAAABL,1L,0L},{(-10L),1L,0L,0xA7C345A7L,0L,0xF9E3A539L,(-8L),1L,(-1L)}}};
                short l_609 = (-4L);
                int l_610[5] = {0x4F63C0DEL,0x4F63C0DEL,0x4F63C0DEL,0x4F63C0DEL,0x4F63C0DEL};
                unsigned **l_635[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_635[i] = &l_462;
                for (l_268 = 0; (l_268 <= 21); l_268 = safe_add_func_int16_t_s_s(l_268, 2))
                {
                    unsigned l_495 = 18446744073709551613UL;
                    int l_500 = (-4L);
                    int l_501 = 0xD38C4780L;
                    int l_506 = 0xAC85B621L;
                    int l_508 = 0x838036B2L;
                    int l_511 = 0xF4A2EBE1L;
                    int l_513 = (-1L);
                    int l_514 = (-8L);
                    int l_518 = (-1L);
                    int l_520 = 0x494EC520L;
                    int l_523 = 0xA1809485L;
                    unsigned l_525 = 0x2D197766L;
                    unsigned *l_557 = &l_525;
                    (*g_63) = (void*)0;

                    ;
                    for (l_233 = (-18); (l_233 < 10); l_233 = safe_add_func_int16_t_s_s(l_233, 6))
                    {
                        short l_496 = 0x6DBEL;
                        int l_497[8][8] = {{(-1L),0xF1458DB5L,0x2BA0D029L,(-1L),0xAACD7124L,0xAAF633FDL,0x7A13D84FL,0xAACD7124L},{0xF1458DB5L,0x7A13D84FL,0L,0xF1458DB5L,(-1L),(-1L),0xCF1EB54EL,(-1L)},{0xCF1EB54EL,0xC363280AL,0L,0xC363280AL,0xCF1EB54EL,0L,8L,0xF3B5EB84L},{(-1L),0xDE926697L,0xAAF633FDL,0L,0xCF1EB54EL,8L,(-1L),0xAACD7124L},{0xDE926697L,0x2BA0D029L,0xAAF633FDL,0xC363280AL,0L,(-5L),0xDE926697L,(-1L)},{0xCF1EB54EL,0xF3B5EB84L,0x39DC0F7FL,1L,1L,0x39DC0F7FL,0xF3B5EB84L,0xCF1EB54EL},{(-1L),0xDE926697L,(-5L),0L,0xC363280AL,0xAAF633FDL,0x2BA0D029L,0xDE926697L},{0xAACD7124L,(-1L),8L,0xCF1EB54EL,0L,0xAAF633FDL,0xCF1EB54EL,1L}};
                        int l_509 = (-6L);
                        int i, j;
                        if (l_495)
                            break;
                        l_525--;
                        --l_528;
                        (*l_66) = &l_268;

                        ;
                    }

                    ;
                    if (((*g_119) = (l_501 < (safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s(0x67L, (safe_mod_func_int16_t_s_s(g_4, (((safe_div_func_int32_t_s_s(3L, l_519)) > l_520) , p_58))))), (l_524[1] = (-9L)))))))
                    {
                        unsigned short l_546[9] = {0x99FEL,0x99FEL,0x99FEL,0x99FEL,0x99FEL,0x99FEL,0x99FEL,0x99FEL,0x99FEL};
                        int i;
                        l_523 |= ((safe_rshift_func_uint8_t_u_u(l_516[9][0][6], (safe_mul_func_int16_t_s_s(1L, l_500)))) ^ ((safe_mul_func_uint8_t_u_u((&p_59 == l_545), p_58)) <= (*g_119)));
                        l_546[2]++;
                        l_520 = ((safe_rshift_func_uint16_t_u_s(p_58, p_59)) | (65535UL | 0x0F35L));
                        (*g_63) = (*p_61);

                        ;
                    }
                    else
                    {
                        (*g_63) = (*p_61);

                        ;
                        (*g_119) = ((void*)0 != l_551);
                    }

                    ;
                    (*g_119) = (safe_sub_func_int32_t_s_s(0x97140F03L, (p_58 & (safe_mul_func_int16_t_s_s(((l_556 = &p_62) != (l_557 = &g_136)), (((*g_110) > (l_510 , (l_516[6][1][3] >= ((safe_lshift_func_int16_t_s_s(g_5, g_191)) >= l_560)))) , l_524[2]))))));

                    ;
                    ;
                }

                ;
                ;
                for (l_499 = 19; (l_499 <= 22); l_499++)
                {
                    short l_565 = 0x1E8CL;
                    (*g_119) ^= (p_62 != ((p_62 >= ((*l_462) = (*g_328))) == l_565));
                    (*g_119) &= (-1L);
                    l_566 = ((*g_63) = (*p_61));

                    ;
                }

                ;
                if ((*g_119))
                {
                    short l_576[1];
                    int *l_581 = &l_321[0][3];
                    int l_591[3];
                    unsigned char l_632[2];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_576[i] = (-1L);
                    for (i = 0; i < 3; i++)
                        l_591[i] = 0x4C5D4A77L;
                    for (i = 0; i < 2; i++)
                        l_632[i] = 1UL;
                    for (g_79 = 28; (g_79 <= (-5)); g_79--)
                    {
                        (*g_119) = (*g_119);
                    }
                    for (l_504 = 0; (l_504 <= 6); l_504 += 1)
                    {
                        unsigned short l_571 = 0x1AD5L;
                        unsigned **l_584 = &l_556;
                        int *l_590 = &l_498;
                        int **l_589 = &l_590;
                        g_575 ^= (g_574 &= ((*g_119) = (((g_203 && g_10) || ((safe_div_func_int8_t_s_s(g_232, p_58)) , p_59)) , ((((l_571 | (*g_119)) < ((safe_mul_func_uint16_t_u_u((((-1L) == p_62) > p_62), (*g_110))) != 0xC1F5L)) , p_58) & p_58))));
                        l_576[0] ^= (((g_5 , &l_476) == l_429) != l_571);
                        l_591[1] = (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((p_58 , l_581) != (void*)0), l_571)) && (safe_lshift_func_int16_t_s_u(0x1044L, (((*l_584) = (g_3[1][6] , &g_136)) != l_566)))), ((**l_263) ^= ((safe_lshift_func_uint16_t_u_s((((safe_mod_func_uint32_t_u_u(((((*l_589) = g_64) == &l_498) | g_191), 0x0E7D315CL)) >= p_59) >= (-6L)), 14)) , l_498))));

                        ;
                        (*g_119) = (*g_119);
                    }

                    ;
                    for (l_209 = 0; (l_209 < (-24)); l_209 = safe_sub_func_uint8_t_u_u(l_209, 8))
                    {
                        short l_607 = 0x5E16L;
                        int l_608 = 8L;
                        int l_611 = 0x5A1F07ACL;
                        int l_612 = (-1L);
                        int l_613 = (-1L);
                        int l_614 = 0x1285AD9DL;
                        int l_615 = 0L;
                        int l_616 = 0xA5543107L;
                        int l_617 = 0L;
                        int l_618 = 0xF2EA8454L;
                        int l_620 = (-1L);
                        int l_621 = 0L;
                        int l_622 = (-3L);
                        int l_623[3][2][6] = {{{(-1L),0xA009BFC7L,(-1L),0xA009BFC7L,(-1L),0xA009BFC7L},{(-1L),0xA009BFC7L,(-1L),0xA009BFC7L,(-1L),0xA009BFC7L}},{{(-1L),0xA009BFC7L,(-1L),0xA009BFC7L,(-1L),0xA009BFC7L},{(-1L),0xA009BFC7L,(-1L),0xA009BFC7L,(-1L),0xA009BFC7L}},{{(-1L),0xA009BFC7L,(-1L),0xA009BFC7L,(-1L),0xA009BFC7L},{(-1L),0xA009BFC7L,(-1L),0xA009BFC7L,(-1L),0xA009BFC7L}}};
                        int i, j, k;
                        g_606 |= (safe_add_func_int8_t_s_s((0x7984L != p_59), ((safe_add_func_uint16_t_u_u((++(*l_67)), (safe_sub_func_int32_t_s_s(((((((0x14F618B6L < 0xED235E95L) != ((*l_545)--)) ^ 0x4E02L) & p_62) && ((((l_576[0] == (++(*l_545))) , (g_191 = ((-5L) > (*g_328)))) , 0L) < p_58)) <= (*g_328)), (*g_119))))) , g_14)));
                        g_625--;
                        l_427[0] = (*g_63);
                        l_632[1] |= ((safe_add_func_int16_t_s_s(0x6A22L, (safe_mod_func_int32_t_s_s(l_612, p_62)))) , ((*g_119) = (l_516[6][1][3] |= (*g_119))));
                    }


                }
                else
                {
                    int l_641 = 0x44CB00BEL;
                    char l_659 = 1L;
                    (*g_63) = &l_504;

                    ;
                    if ((safe_add_func_int16_t_s_s(((l_635[2] == (void*)0) && (g_606 = (-1L))), ((safe_mul_func_uint32_t_u_u((*g_328), (&p_59 == ((*l_488) = &p_59)))) && (l_610[3] , (**p_61))))))
                    {
                        unsigned char l_642 = 255UL;
                        (**p_61) = ((l_642 |= ((safe_unary_minus_func_int8_t_s((p_58 , (safe_div_func_uint16_t_u_u(l_641, p_62))))) < (**g_63))) >= l_643);
                        (*g_119) = (p_58 && 0xCCL);
                    }
                    else
                    {
                        short l_646 = 0x14FEL;
                        (*g_64) |= (safe_rshift_func_uint16_t_u_s(l_646, 8));
                        (*g_119) |= (safe_mul_func_uint8_t_u_u((+((safe_mul_func_int8_t_s_s((p_62 || ((*g_64) = l_499)), (!((g_656 = (((safe_lshift_func_uint16_t_u_s((*g_110), (((((((g_653 == ((g_13 ^ ((void*)0 != l_566)) , g_653)) < (safe_add_func_uint8_t_u_u(l_646, g_191))) >= 0x02L) >= 0xC6L) , p_62) || 0xFBL) , l_646))) , g_653) == g_653)) , p_59)))) & p_59)), p_62));
                        (**l_66) = (*g_64);
                    }


                    for (l_477 = 19; (l_477 <= (-4)); l_477 = safe_sub_func_uint32_t_u_u(l_477, 5))
                    {
                        l_659 ^= l_641;
                        (*g_119) ^= 0x1F2D4E88L;
                        (*l_66) = &l_280;

                        ;
                    }

                    ;
                }

                ;


                ;
            }




            ;
            ;
        }
        else
        {
            unsigned char l_662 = 0x61L;
            l_662 = (safe_sub_func_int16_t_s_s(0L, p_58));
            for (l_662 = (-23); (l_662 <= 45); l_662++)
            {
                if ((*g_119))
                    break;
            }
        }




        ;
    }


    ;

    ;
    ;
    (*g_665) = &g_4;
    return g_68;



}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_3[i][j], "g_3[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_12[i], "g_12[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_111[i][j][k], "g_111[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_606, "g_606", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_656, "g_656", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_784, "g_784", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_805[i], "g_805[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_906, "g_906", print_hash_value);
    transparent_crc(g_1020, "g_1020", print_hash_value);
    transparent_crc(g_1027, "g_1027", print_hash_value);
    transparent_crc(g_1045, "g_1045", print_hash_value);
    transparent_crc(g_1157, "g_1157", print_hash_value);
    transparent_crc(g_1226, "g_1226", print_hash_value);
    transparent_crc(g_1280, "g_1280", print_hash_value);
    transparent_crc(g_1341, "g_1341", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1397[i], "g_1397[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1403, "g_1403", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1505[i], "g_1505[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1574, "g_1574", print_hash_value);
    transparent_crc(g_1698, "g_1698", print_hash_value);
    transparent_crc(g_1740, "g_1740", print_hash_value);
    transparent_crc(g_1753, "g_1753", print_hash_value);
    transparent_crc(g_1756, "g_1756", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1812[i], "g_1812[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1823, "g_1823", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_1868[i][j][k], "g_1868[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_2102, "g_2102", print_hash_value);
    transparent_crc(g_2134, "g_2134", print_hash_value);
    transparent_crc(g_2297, "g_2297", print_hash_value);
    transparent_crc(g_2325, "g_2325", print_hash_value);
    transparent_crc(g_2347, "g_2347", print_hash_value);
    transparent_crc(g_2407, "g_2407", print_hash_value);
    transparent_crc(g_2442, "g_2442", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_2553[i], "g_2553[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2568, "g_2568", print_hash_value);
    transparent_crc(g_2824, "g_2824", print_hash_value);
    transparent_crc(g_2901, "g_2901", print_hash_value);
    transparent_crc(g_2993, "g_2993", print_hash_value);
    transparent_crc(g_2994, "g_2994", print_hash_value);
    transparent_crc(g_3151, "g_3151", print_hash_value);
    transparent_crc(g_3221, "g_3221", print_hash_value);
    transparent_crc(g_3305, "g_3305", print_hash_value);
    transparent_crc(g_3364, "g_3364", print_hash_value);
    transparent_crc(g_3495, "g_3495", print_hash_value);
    transparent_crc(g_3601, "g_3601", print_hash_value);
    transparent_crc(g_3668, "g_3668", print_hash_value);
    transparent_crc(g_3669, "g_3669", print_hash_value);
    transparent_crc(g_3785, "g_3785", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_3786[i], "g_3786[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3788, "g_3788", print_hash_value);
    transparent_crc(g_3806, "g_3806", print_hash_value);
    transparent_crc(g_3815, "g_3815", print_hash_value);
    transparent_crc(g_3830, "g_3830", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_3935[i], "g_3935[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
