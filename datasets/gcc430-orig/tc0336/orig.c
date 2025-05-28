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



static unsigned short g_21 = 0x5768L;
static int g_39 = 0xED02E889L;
static volatile int g_59 = 0x6C28CBD6L;
static volatile int g_60[8][3] = {{0xD4644688L,(-6L),(-4L)},{1L,(-6L),1L},{0L,0xD4644688L,(-4L)},{0L,0L,0xD4644688L},{1L,0xD4644688L,0xD4644688L},{0xD4644688L,(-6L),(-4L)},{1L,(-6L),1L},{0L,0xD4644688L,(-4L)}};
static volatile int g_61 = 0xBC712BADL;
static int g_62 = 0xEA4087B3L;
static int *g_67 = &g_39;
static int ** volatile g_66 = &g_67;
static int g_69 = (-5L);
static int * volatile g_68 = &g_69;
static long long g_88 = 0x0E685266ADDA102FLL;
static long long g_95 = 0L;
static short g_103 = 0x1910L;
static unsigned g_107 = 0x2D068568L;
static unsigned short g_122 = 0xABF6L;
static unsigned long long g_125 = 0UL;
static short g_142 = 0x73A7L;
static char g_146 = 0x77L;
static short g_148[9][9] = {{0x4104L,(-8L),0x4104L,0x4104L,(-8L),0x4104L,0x4104L,(-8L),0x4104L},{0x4104L,(-8L),0x4104L,0x4104L,(-8L),0x4104L,0x4104L,(-8L),0x4104L},{0x4104L,(-8L),0x4104L,0x4104L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L},{0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L},{0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L},{0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L},{0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L},{0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L},{0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L,0x3F39L,0x4104L,0x3F39L}};
static short g_205 = 0x7417L;
static unsigned *g_225 = &g_107;
static int ** volatile g_230 = &g_67;
static unsigned char g_252[10][9][2] = {{{1UL,0x4CL},{0xB8L,0x1DL},{0x65L,0x65L},{0UL,0UL},{0x27L,247UL},{0x88L,255UL},{0UL,0x88L},{0x95L,255UL},{0x95L,0x88L}},{{0UL,255UL},{0x88L,247UL},{0x27L,0UL},{0UL,0x65L},{0x65L,0x1DL},{0xB8L,0x4CL},{1UL,0x27L},{251UL,250UL},{247UL,250UL}},{{0UL,1UL},{255UL,0x1DL},{250UL,255UL},{4UL,4UL},{0x1CL,0x88L},{1UL,0UL},{0x27L,251UL},{0x88L,0x27L},{0x88L,0x65L}},{{0x88L,0x27L},{0x88L,251UL},{0x27L,0UL},{1UL,0x88L},{0x1CL,4UL},{4UL,255UL},{250UL,0x1DL},{255UL,1UL},{0UL,0x4CL}},{{0UL,0x4CL},{0UL,1UL},{255UL,0x1DL},{250UL,255UL},{4UL,4UL},{0x1CL,0x88L},{1UL,0UL},{0x27L,251UL},{0x88L,0x27L}},{{0x88L,0x65L},{0x88L,0x27L},{0x88L,251UL},{0x27L,0UL},{1UL,0x88L},{0x1CL,4UL},{4UL,255UL},{250UL,0x1DL},{255UL,1UL}},{{0UL,0x4CL},{0UL,0x4CL},{0UL,1UL},{255UL,0x1DL},{250UL,255UL},{4UL,4UL},{0x1CL,0x88L},{1UL,0UL},{0x27L,251UL}},{{0x88L,0x27L},{0x88L,0x65L},{0x88L,0x27L},{250UL,4UL},{247UL,0x1DL},{0UL,250UL},{255UL,0x95L},{0x95L,0x65L},{0x27L,255UL}},{{0x1CL,0UL},{0xB8L,1UL},{0x1DL,1UL},{0xB8L,0UL},{0x1CL,255UL},{0x27L,0x65L},{0x95L,0x95L},{255UL,250UL},{0UL,0x1DL}},{{247UL,4UL},{250UL,247UL},{0x88L,0xF4L},{0x88L,247UL},{250UL,4UL},{247UL,0x1DL},{0UL,250UL},{255UL,0x95L},{0x95L,0x65L}}};
static int ** const volatile g_260 = &g_67;
static unsigned **g_271 = &g_225;
static unsigned *** const volatile g_270[6] = {(void*)0,&g_271,(void*)0,(void*)0,&g_271,(void*)0};
static char g_349[4][7] = {{0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL},{0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL,0x2CL}};
static volatile unsigned short g_377 = 2UL;
static unsigned char g_406 = 0UL;
static char g_409 = 0x58L;
static short * const g_438 = &g_148[4][3];
static short * const * const g_437 = &g_438;
static const int *g_456 = &g_69;
static const int ** volatile g_455 = &g_456;
static unsigned ** volatile *g_523[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static unsigned ** volatile * volatile *g_522 = &g_523[9];
static int g_527[3][10][8] = {{{0x05E8601AL,(-2L),0x1079E005L,0x88E9B7B8L,1L,0x9357E4A7L,0x1529773DL,8L},{0x4C1CAF87L,1L,0L,1L,1L,0L,1L,0x4C1CAF87L},{8L,0x4C1CAF87L,0L,8L,0x6B13857BL,1L,0x05E8601AL,8L},{(-2L),(-9L),0x1079E005L,1L,8L,1L,0x1079E005L,(-9L)},{0x9357E4A7L,0x4C1CAF87L,8L,(-1L),8L,0L,0x6B13857BL,0x1079E005L},{(-9L),1L,1L,0x6B13857BL,0x9357E4A7L,0x9357E4A7L,0x6B13857BL,1L},{0x6B13857BL,0x6B13857BL,8L,0L,0x88E9B7B8L,0L,0x1079E005L,(-2L)},{0x88E9B7B8L,0L,0x1079E005L,(-2L),0x05E8601AL,1L,0x05E8601AL,(-2L)},{0L,8L,0L,0L,0x1529773DL,(-9L),1L,1L},{(-1L),8L,0L,0x6B13857BL,0x1079E005L,0x1529773DL,0x1529773DL,0x1079E005L}},{{(-1L),0x05E8601AL,0x05E8601AL,(-1L),0x1529773DL,0x6B13857BL,(-2L),(-9L)},{0L,8L,0x6B13857BL,1L,0x05E8601AL,8L,(-9L),8L},{0x88E9B7B8L,8L,(-1L),(-2L),0x1529773DL,0x4C1CAF87L,0L,0x9357E4A7L},{0x4C1CAF87L,1L,0x1529773DL,0L,8L,1L,(-2L),(-2L)},{0x6B13857BL,0x1079E005L,0x1529773DL,0x1529773DL,0x1079E005L,0x6B13857BL,0L,8L},{8L,(-9L),(-1L),0x9357E4A7L,(-2L),0L,0x6B13857BL,0x4C1CAF87L},{(-1L),8L,0x4C1CAF87L,0x9357E4A7L,0x4C1CAF87L,8L,(-1L),8L},{0x1079E005L,0x4C1CAF87L,1L,0x1529773DL,0L,8L,1L,(-2L)},{0x9357E4A7L,8L,0x05E8601AL,0L,0L,0x05E8601AL,8L,0x9357E4A7L},{0x1079E005L,0x9357E4A7L,8L,(-2L),0x4C1CAF87L,8L,1L,(-9L)}},{{(-1L),0x6B13857BL,0x88E9B7B8L,8L,(-2L),8L,0x88E9B7B8L,0x6B13857BL},{8L,0x9357E4A7L,(-9L),0L,0x1079E005L,0x05E8601AL,0x4C1CAF87L,0x88E9B7B8L},{0x6B13857BL,8L,0L,0x4C1CAF87L,8L,8L,0x4C1CAF87L,0L},{0x4C1CAF87L,0x4C1CAF87L,(-9L),0x05E8601AL,0x1529773DL,8L,0x88E9B7B8L,(-1L)},{0x1529773DL,8L,1L,0x4C1CAF87L,0x1079E005L,0x88E9B7B8L,0x1079E005L,0x4C1CAF87L},{0x1529773DL,1L,0x1529773DL,8L,8L,8L,(-9L),0x88E9B7B8L},{0x9357E4A7L,0x05E8601AL,8L,(-2L),1L,8L,8L,1L},{0x9357E4A7L,0x1079E005L,0x1079E005L,0x9357E4A7L,8L,(-2L),0x4C1CAF87L,8L},{0x1529773DL,0x6B13857BL,(-2L),(-9L),0x1079E005L,1L,8L,1L},{0L,0x6B13857BL,0x4C1CAF87L,0x6B13857BL,0L,(-2L),0x9357E4A7L,(-1L)}}};
static short g_531 = 0x815AL;
static short g_533 = 0L;
static const unsigned char **g_687 = (void*)0;
static const unsigned char *** volatile g_686 = &g_687;
static int ** volatile g_689 = &g_67;
static volatile unsigned long long * volatile g_722 = (void*)0;
static volatile unsigned long long * volatile *g_721 = &g_722;
static volatile unsigned long long * volatile **g_720 = &g_721;
static int ** volatile g_742[7] = {&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67};
static unsigned g_761 = 0x7D9BE2D8L;
static unsigned *g_760 = &g_761;
static int ** volatile g_820[5] = {&g_67,&g_67,&g_67,&g_67,&g_67};
static int ** volatile g_823 = &g_67;
static unsigned g_847 = 4294967295UL;
static int ** volatile g_867[6] = {&g_67,&g_67,&g_67,&g_67,&g_67,&g_67};
static int ** volatile g_868 = &g_67;
static volatile short g_869[6][5] = {{0L,6L,0L,(-9L),0xC3FBL},{0x1A82L,1L,0xAFADL,0xB55FL,0xC3FBL},{(-1L),5L,5L,(-1L),0L},{5L,(-1L),0xAFADL,0xC3FBL,1L},{5L,0xAFADL,0L,0xAFADL,5L},{(-1L),0xB55FL,0x1A82L,0xC3FBL,5L}};
static int * volatile g_872 = &g_62;
static int g_949 = 0x71443E84L;
static const long long g_959[9] = {0xC56D6C5C87342B2BLL,(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static short *g_965[7] = {&g_142,&g_531,&g_531,&g_142,&g_531,&g_531,&g_142};
static const char g_968 = 0x05L;
static const char *g_967[2] = {&g_968,&g_968};
static char *g_979 = &g_349[3][4];
static short **g_995[9][4][3] = {{{&g_965[4],&g_965[0],&g_965[0]},{(void*)0,&g_965[0],&g_965[2]},{(void*)0,&g_965[4],&g_965[0]},{&g_965[0],&g_965[4],&g_965[0]}},{{&g_965[0],&g_965[0],&g_965[0]},{&g_965[6],&g_965[0],&g_965[0]},{&g_965[0],&g_965[0],&g_965[1]},{&g_965[1],&g_965[0],&g_965[1]}},{{(void*)0,&g_965[0],&g_965[1]},{&g_965[4],&g_965[0],&g_965[0]},{&g_965[2],(void*)0,&g_965[0]},{&g_965[0],&g_965[0],&g_965[0]}},{{&g_965[1],&g_965[0],&g_965[0]},{&g_965[1],&g_965[2],&g_965[2]},{&g_965[0],&g_965[1],&g_965[0]},{&g_965[2],(void*)0,(void*)0}},{{&g_965[4],(void*)0,&g_965[0]},{(void*)0,&g_965[0],&g_965[4]},{&g_965[1],(void*)0,&g_965[0]},{&g_965[0],(void*)0,&g_965[6]}},{{&g_965[6],&g_965[1],(void*)0},{&g_965[0],&g_965[2],&g_965[2]},{&g_965[0],&g_965[0],&g_965[2]},{(void*)0,&g_965[0],(void*)0}},{{(void*)0,(void*)0,&g_965[6]},{&g_965[4],&g_965[0],&g_965[0]},{&g_965[0],&g_965[2],(void*)0},{&g_965[0],&g_965[4],&g_965[1]}},{{(void*)0,&g_965[0],&g_965[0]},{&g_965[0],&g_965[0],&g_965[6]},{&g_965[0],&g_965[0],&g_965[0]},{&g_965[0],(void*)0,&g_965[0]}},{{&g_965[4],(void*)0,(void*)0},{&g_965[0],&g_965[0],(void*)0},{&g_965[2],&g_965[0],&g_965[4]},{&g_965[2],&g_965[0],&g_965[0]}}};
static unsigned **g_1081[7][2] = {{&g_760,&g_760},{&g_760,&g_760},{&g_760,&g_760},{&g_760,&g_760},{&g_760,&g_760},{&g_760,&g_760},{&g_760,&g_760}};
static int ** volatile g_1086 = &g_67;
static int ** const volatile g_1129[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static int ** volatile g_1130[5] = {&g_67,&g_67,&g_67,&g_67,&g_67};
static int ** volatile g_1137 = &g_67;
static int * volatile g_1147 = &g_527[0][2][4];
static unsigned long long g_1189 = 0xF7CA6716231EE7D2LL;
static unsigned long long **g_1214 = (void*)0;
static unsigned long long ***g_1213[1] = {&g_1214};
static short g_1231 = (-1L);
static int ** volatile g_1238 = &g_67;
static int ** volatile g_1247[7][4] = {{&g_67,&g_67,(void*)0,(void*)0},{&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,(void*)0,&g_67},{&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,(void*)0}};
static int ** volatile g_1248[4][8][8] = {{{&g_67,(void*)0,&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{(void*)0,(void*)0,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67},{(void*)0,&g_67,&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67},{&g_67,(void*)0,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67,(void*)0,&g_67,(void*)0},{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,(void*)0,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67,(void*)0,(void*)0,&g_67}},{{&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,(void*)0,(void*)0,&g_67,&g_67,&g_67},{(void*)0,&g_67,&g_67,&g_67,(void*)0,&g_67,&g_67,(void*)0},{&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67,(void*)0,&g_67},{&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67},{(void*)0,&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67}},{{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,(void*)0,&g_67,(void*)0,(void*)0,&g_67},{&g_67,(void*)0,(void*)0,&g_67,&g_67,&g_67,(void*)0,(void*)0},{(void*)0,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,(void*)0},{(void*)0,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{(void*)0,(void*)0,&g_67,&g_67,(void*)0,(void*)0,&g_67,&g_67}},{{(void*)0,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,(void*)0,&g_67,&g_67,(void*)0,&g_67},{(void*)0,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67,&g_67},{&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,&g_67,(void*)0},{&g_67,&g_67,(void*)0,&g_67,&g_67,&g_67,&g_67,&g_67}}};
static int ** volatile g_1262 = &g_67;
static unsigned char * const g_1307 = &g_252[9][2][1];
static unsigned char * const *g_1306[4][4][9] = {{{&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307},{&g_1307,(void*)0,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307},{&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307},{&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307}},{{&g_1307,(void*)0,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,(void*)0},{(void*)0,(void*)0,(void*)0,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307},{&g_1307,(void*)0,(void*)0,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307},{&g_1307,&g_1307,&g_1307,(void*)0,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307}},{{&g_1307,(void*)0,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307},{&g_1307,&g_1307,(void*)0,(void*)0,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307},{&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307},{&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307}},{{(void*)0,(void*)0,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,(void*)0,&g_1307},{&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,(void*)0,&g_1307},{&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307},{(void*)0,&g_1307,&g_1307,(void*)0,&g_1307,&g_1307,&g_1307,&g_1307,&g_1307}}};
static int ** volatile g_1318 = &g_67;
static volatile unsigned g_1324[3] = {0x67F348CEL,0x67F348CEL,0x67F348CEL};
static volatile unsigned char g_1336 = 0x60L;



static unsigned long long func_1(void);
static unsigned long long func_2(long long p_3, unsigned p_4, long long p_5);
static long long func_10(unsigned char p_11, unsigned p_12);
static const short func_18(int p_19, unsigned short p_20);
static short func_22(int p_23);
static int * func_29(int * p_30, int * p_31, int * p_32);
static int * func_33(long long p_34, int * p_35, short p_36, int * p_37);
static unsigned short func_41(int p_42, short p_43, const unsigned p_44, unsigned long long p_45, long long p_46);
static int * func_50(int * p_51, short p_52, int * p_53);
static int * func_54(int * p_55);
static unsigned long long func_1(void)
{
    char l_17 = 0xF9L;
    unsigned ** const * const l_525[3][7] = {{&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_271,&g_271,&g_271,&g_271,&g_271,&g_271,&g_271}};
    unsigned ** const * const *l_524 = &l_525[2][2];
    int *l_526 = &g_527[0][8][2];
    unsigned ** const *l_528 = &g_271;
    unsigned ** const **l_529 = &l_528;
    short *l_530 = &g_531;
    short *l_532 = &g_533;
    const unsigned long long l_534 = 2UL;
    short **l_1330 = &l_532;
    unsigned l_1333 = 4294967295UL;
    unsigned l_1337 = 18446744073709551615UL;
    int i, j;
    if (((func_2((safe_mod_func_uint32_t_u_u(0x8F69F7FDL, (safe_mod_func_int64_t_s_s((~func_10(((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(l_17, (func_18(g_21, l_17) > (l_17 && func_41(((*l_526) &= (g_522 != l_524)), ((*l_532) ^= ((*l_530) = (((((*l_529) = l_528) != &g_271) | l_17) ^ g_103))), l_534, g_103, g_409))))), g_409)) & 1L), g_103)), g_103)))), l_534, g_847) <= l_17) | l_534))
    {
        unsigned long long l_1331[8] = {18446744073709551615UL,0x70CE69A0B2000D4DLL,0x70CE69A0B2000D4DLL,18446744073709551615UL,0x70CE69A0B2000D4DLL,0x70CE69A0B2000D4DLL,18446744073709551615UL,0x70CE69A0B2000D4DLL};
        int **l_1332 = &g_67;
        int *l_1334 = (void*)0;
        int **l_1335 = &l_1334;
        int i;
        (*l_1335) = ((*l_1332) = l_526);

        ;
        ;
        for (g_205 = 3; (g_205 >= 0); g_205 -= 1)
        {
            g_1247[0][2] = (void*)0;
            if (g_1336)
                continue;
            return (**l_1335);
        }
    }
    else
    {
        return (*l_526);
    }

    ;
    (*l_526) ^= l_1337;
    (*l_526) = (-6L);
    return (*l_526);
}







static unsigned long long func_2(long long p_3, unsigned p_4, long long p_5)
{
    unsigned long long l_870 = 18446744073709551606UL;
    int l_885 = 0x20FEA9CAL;
    int l_887 = (-1L);
    int l_889[3];
    long long l_895[10][4] = {{0L,0x2D9327D8BACE60DALL,0L,0xCDB5CEF83B697EBDLL},{0L,0xCDB5CEF83B697EBDLL,0xCDB5CEF83B697EBDLL,0L},{5L,0xCDB5CEF83B697EBDLL,0x8BAB47F5205E94BDLL,0xCDB5CEF83B697EBDLL},{0xCDB5CEF83B697EBDLL,0x2D9327D8BACE60DALL,0x8BAB47F5205E94BDLL,0x8BAB47F5205E94BDLL},{5L,5L,0xCDB5CEF83B697EBDLL,0x8BAB47F5205E94BDLL},{0L,0x2D9327D8BACE60DALL,0L,0xCDB5CEF83B697EBDLL},{0L,0xCDB5CEF83B697EBDLL,0xCDB5CEF83B697EBDLL,0L},{5L,0xCDB5CEF83B697EBDLL,0x8BAB47F5205E94BDLL,0xCDB5CEF83B697EBDLL},{0xCDB5CEF83B697EBDLL,0x2D9327D8BACE60DALL,0x8BAB47F5205E94BDLL,0x8BAB47F5205E94BDLL},{5L,5L,0xCDB5CEF83B697EBDLL,0x8BAB47F5205E94BDLL}};
    short l_897[4][7] = {{(-3L),1L,1L,(-3L),1L,1L,(-3L)},{9L,(-1L),9L,9L,(-1L),9L,9L},{(-3L),(-3L),0x04CDL,(-3L),(-3L),0x04CDL,(-3L)},{(-1L),9L,9L,(-1L),9L,9L,(-1L)}};
    unsigned short l_914 = 0xA850L;
    short *l_929 = &g_533;
    short **l_928 = &l_929;
    short ***l_927 = &l_928;
    char l_987 = 0x59L;
    unsigned long long *l_1023 = &g_125;
    int l_1040 = 0x9BE3C5B2L;
    int l_1045 = 0xFD51F5E2L;
    int l_1049 = 0xE2E58DE8L;
    unsigned long long **l_1211 = (void*)0;
    unsigned long long ***l_1210[7][5][7] = {{{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{(void*)0,&l_1211,&l_1211,&l_1211,(void*)0,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,(void*)0,&l_1211,(void*)0,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211}},{{(void*)0,&l_1211,&l_1211,(void*)0,(void*)0,&l_1211,(void*)0},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,(void*)0,&l_1211,&l_1211,&l_1211,&l_1211,(void*)0},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,(void*)0,&l_1211,(void*)0,(void*)0,&l_1211,&l_1211}},{{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,&l_1211,(void*)0,&l_1211,(void*)0,&l_1211,&l_1211},{&l_1211,&l_1211,(void*)0,&l_1211,&l_1211,&l_1211,(void*)0},{&l_1211,&l_1211,(void*)0,(void*)0,&l_1211,(void*)0,&l_1211},{&l_1211,(void*)0,(void*)0,&l_1211,&l_1211,&l_1211,&l_1211}},{{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,(void*)0,(void*)0},{(void*)0,&l_1211,(void*)0,&l_1211,(void*)0,(void*)0,&l_1211}},{{&l_1211,(void*)0,&l_1211,&l_1211,&l_1211,(void*)0,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{(void*)0,&l_1211,&l_1211,(void*)0,&l_1211,&l_1211,(void*)0},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,(void*)0}},{{&l_1211,(void*)0,(void*)0,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,(void*)0,(void*)0,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211}},{{&l_1211,&l_1211,&l_1211,(void*)0,&l_1211,(void*)0,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,(void*)0,&l_1211,(void*)0},{&l_1211,&l_1211,&l_1211,&l_1211,(void*)0,&l_1211,&l_1211},{&l_1211,(void*)0,&l_1211,&l_1211,(void*)0,&l_1211,&l_1211},{&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211,&l_1211}}};
    int *l_1237[6][7][6] = {{{&g_949,&l_889[0],&g_69,&l_889[1],&g_527[0][8][2],&l_889[0]},{&l_889[0],&g_39,&g_62,&l_889[0],(void*)0,&l_889[0]},{&g_949,&l_885,&g_69,&l_1049,&g_527[0][0][3],&g_62},{(void*)0,&l_1049,&l_889[0],&g_62,(void*)0,&g_949},{(void*)0,&g_69,&g_39,&g_39,&l_1045,&g_62},{(void*)0,&g_39,&l_889[0],(void*)0,&l_889[0],&g_949},{&l_885,&l_1049,&l_1049,&l_889[0],&l_887,&g_949}},{{&g_69,(void*)0,&g_949,&g_527[0][8][2],(void*)0,(void*)0},{&g_69,&l_887,&l_889[1],(void*)0,&l_1049,&l_889[0]},{&g_949,&g_62,&g_527[0][8][7],&g_39,&l_885,&g_39},{(void*)0,&l_1049,&g_949,&g_39,&g_527[0][0][3],&l_1045},{(void*)0,&g_39,&g_62,&l_1049,&l_889[0],&g_527[0][8][7]},{&g_69,(void*)0,(void*)0,&g_62,(void*)0,(void*)0},{&g_949,&l_889[0],&g_39,&g_527[0][9][3],&g_527[1][0][3],&g_949}},{{&l_887,&g_527[0][8][2],&l_1049,&l_889[0],(void*)0,&l_889[1]},{&g_527[0][0][3],&g_62,&l_889[1],&l_889[1],&g_62,&g_527[0][0][3]},{&g_949,(void*)0,&l_889[0],&l_885,&g_69,(void*)0},{&l_889[0],&g_527[0][8][2],&g_39,&l_889[0],&g_949,&g_949},{&l_889[0],&g_39,&l_889[0],&l_885,&g_69,&l_1049},{&g_949,&g_69,(void*)0,&l_889[1],&l_1049,(void*)0},{&g_527[0][0][3],(void*)0,&l_889[2],&l_889[0],&l_889[0],&l_1045}},{{(void*)0,&g_949,&l_1049,&l_889[0],&l_885,&g_62},{&g_527[0][8][2],&l_889[0],&l_889[2],&l_889[0],&g_527[0][8][7],(void*)0},{&l_1049,&g_527[1][0][3],&l_889[0],&g_39,&l_1045,&l_887},{&g_62,&g_527[0][2][0],&l_889[0],&g_527[0][8][7],(void*)0,&g_62},{&l_889[0],&g_527[0][8][2],&l_1049,(void*)0,&l_889[0],(void*)0},{&g_62,&g_949,&g_527[0][8][2],&l_885,&l_887,&l_889[1]},{&g_949,&g_527[0][8][7],&g_527[0][9][3],&l_1049,(void*)0,&g_69}},{{&g_69,&l_889[2],&g_527[0][0][3],&l_889[1],(void*)0,&g_949},{&l_889[0],&l_889[1],&l_1049,&g_39,&g_62,&l_889[0]},{&l_889[0],&l_1049,&l_1049,&l_885,&l_889[1],(void*)0},{&l_1049,(void*)0,&l_1045,&l_885,&l_1045,(void*)0},{&g_527[0][8][2],(void*)0,&g_69,&g_39,&g_39,(void*)0},{&g_62,&l_889[0],&g_949,&l_887,&l_889[0],&l_889[0]},{&l_885,&l_889[0],&l_889[1],&g_949,&g_39,&g_39}},{{(void*)0,(void*)0,&g_62,&g_949,&l_1045,&g_527[0][8][2]},{&g_949,(void*)0,&g_949,&g_949,&l_889[1],&g_527[0][9][3]},{&l_885,&g_949,&l_885,&g_949,&g_62,(void*)0},{&l_889[0],(void*)0,&l_1049,&g_527[0][2][0],&l_885,&g_949},{&l_889[1],&l_885,&l_885,&l_1049,&g_62,&l_889[1]},{&g_39,&l_1049,(void*)0,(void*)0,&g_949,&g_62},{(void*)0,&l_1049,&l_885,&g_62,&g_39,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_889[i] = (-6L);
    for (g_122 = 12; (g_122 < 30); g_122 = safe_add_func_int8_t_s_s(g_122, 8))
    {
        int *l_866 = &g_39;
        (*g_868) = func_54(l_866);

        ;
        (*l_866) = g_869[5][3];
        if (l_870)
            break;
    }
    return p_4;
}







static long long func_10(unsigned char p_11, unsigned p_12)
{
    int *l_535 = &g_62;
    int *l_536 = &g_69;
    int *l_537 = &g_39;
    int *l_538 = &g_69;
    int *l_539 = &g_527[0][8][2];
    int *l_540 = &g_62;
    int *l_541 = &g_69;
    int l_542[6][3][8] = {{{0x93E1E2B1L,0x3D408906L,9L,(-8L),(-8L),9L,0x3D408906L,0x93E1E2B1L},{0x93E1E2B1L,0x0D769C01L,(-1L),0xDA0D3863L,0x3D408906L,0xE93E5DCFL,9L,0xE93E5DCFL},{0xDA0D3863L,0x92D4C323L,0x61D9F419L,0x92D4C323L,0xDA0D3863L,0xE93E5DCFL,(-4L),0x3D408906L}},{{0xE9D651A1L,0x0D769C01L,0x92D4C323L,(-1L),9L,9L,(-1L),0x92D4C323L},{0x3D408906L,0x3D408906L,0x92D4C323L,0x93E1E2B1L,(-1L),(-8L),(-4L),0xE9D651A1L},{9L,(-4L),0x61D9F419L,0x3D408906L,0x61D9F419L,(-4L),9L,0xE9D651A1L}},{{(-4L),(-8L),(-1L),0x93E1E2B1L,0x92D4C323L,0x3D408906L,0x3D408906L,0x92D4C323L},{(-1L),9L,9L,(-1L),0x92D4C323L,0x0D769C01L,0xE9D651A1L,0x3D408906L},{(-4L),(-1L),0x93E1E2B1L,0xE9D651A1L,0x92D4C323L,0xE9D651A1L,0x93E1E2B1L,(-1L)}},{{0xE93E5DCFL,(-1L),0x61D9F419L,0x93E1E2B1L,0x3D408906L,9L,(-8L),(-8L)},{0x61D9F419L,0xE93E5DCFL,0x0D769C01L,0x0D769C01L,0xE93E5DCFL,0x61D9F419L,(-8L),0x92D4C323L},{(-4L),0x0D769C01L,0x61D9F419L,9L,0x93E1E2B1L,0xDA0D3863L,0x93E1E2B1L,9L}},{{0x93E1E2B1L,0xDA0D3863L,0x93E1E2B1L,9L,0x61D9F419L,0x0D769C01L,(-4L),0x92D4C323L},{(-8L),0x61D9F419L,0xE93E5DCFL,0x0D769C01L,0x0D769C01L,0xE93E5DCFL,0x61D9F419L,(-8L)},{(-8L),9L,0x3D408906L,0x93E1E2B1L,0x61D9F419L,(-1L),0xE93E5DCFL,(-1L)}},{{0x93E1E2B1L,0xE9D651A1L,0x92D4C323L,0xE9D651A1L,0x93E1E2B1L,(-1L),0xDA0D3863L,0x61D9F419L},{(-4L),9L,0xE9D651A1L,(-1L),0xE93E5DCFL,0xE93E5DCFL,(-1L),0xE9D651A1L},{0x61D9F419L,0x61D9F419L,0xE9D651A1L,(-8L),0x3D408906L,0x0D769C01L,0xDA0D3863L,(-4L)}}};
    int *l_543[3][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    short l_544 = 0xB966L;
    unsigned l_545 = 18446744073709551613UL;
    unsigned short l_553 = 3UL;
    int l_626[6][1] = {{0xE1B21C6EL},{0x62C2E38FL},{0xE1B21C6EL},{0xE1B21C6EL},{0x62C2E38FL},{0xE1B21C6EL}};
    int l_659 = 0x407FBBDFL;
    char *l_683 = &g_349[3][4];
    int l_728 = 0xBAC05B21L;
    int l_814 = 1L;
    short l_822 = (-1L);
    int i, j, k;
    --l_545;
    for (g_21 = 0; (g_21 <= 18); g_21 = safe_add_func_uint32_t_u_u(g_21, 1))
    {
        unsigned l_552 = 0x5B4BFFA4L;
        int *l_555 = &l_542[2][2][6];
        unsigned l_603 = 0xE0F571BCL;
        unsigned long long l_606[10][2] = {{18446744073709551611UL,18446744073709551615UL},{18446744073709551611UL,18446744073709551611UL},{18446744073709551615UL,18446744073709551611UL},{18446744073709551611UL,18446744073709551615UL},{18446744073709551611UL,18446744073709551611UL},{18446744073709551615UL,18446744073709551611UL},{18446744073709551611UL,18446744073709551615UL},{18446744073709551611UL,18446744073709551611UL},{18446744073709551615UL,18446744073709551611UL},{18446744073709551611UL,18446744073709551615UL}};
        unsigned short *l_643 = (void*)0;
        int l_654[5];
        unsigned char l_660 = 0xBBL;
        int *l_688 = &g_62;
        int *l_821 = &l_542[2][2][6];
        unsigned long long l_824[2][3] = {{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL}};
        unsigned l_852 = 0xAD56DF2FL;
        int i, j;
        for (i = 0; i < 5; i++)
            l_654[i] = 0xB3390232L;
        (*l_541) ^= p_11;
    }
    return (*l_540);
}







static const short func_18(int p_19, unsigned short p_20)
{
    short l_24[9];
    unsigned long long *l_391 = &g_125;
    int l_395[8][9] = {{0x25896856L,1L,(-1L),1L,0x25896856L,6L,0x21D9A10FL,0L,0L},{0x559879DBL,(-1L),0x559879DBL,9L,0xAD4B7213L,0xAD4B7213L,9L,0x559879DBL,(-1L)},{5L,0xDAF20625L,0x21D9A10FL,8L,(-1L),6L,(-1L),0xE6A6E6A6L,(-1L)},{(-1L),0xBF9764AFL,9L,9L,0xBF9764AFL,(-1L),0xAD4B7213L,(-1L),0xBF9764AFL},{0L,0xDAF20625L,(-1L),1L,5L,0L,5L,1L,(-1L)},{(-1L),(-1L),0xAD4B7213L,0xBF9764AFL,0x06ACA1CEL,0xBF9764AFL,0xAD4B7213L,(-1L),(-1L)},{(-1L),1L,5L,0L,5L,1L,(-1L),1L,0x06CCB5C9L},{0x559879DBL,0x06ACA1CEL,9L,0x06ACA1CEL,0x559879DBL,0xBF9764AFL,0xBF9764AFL,0x559879DBL,0x06ACA1CEL}};
    int l_396 = 0x01C32341L;
    int l_397 = 0x8BF59D9AL;
    int l_398 = 0x0052A782L;
    int l_399 = 0x65CBF7AAL;
    int l_400 = 0L;
    int l_401 = 0x2FBA7ADAL;
    int l_403 = (-2L);
    int l_404[8];
    unsigned l_423 = 0UL;
    unsigned **l_431 = &g_225;
    const int *l_454[8];
    long long l_491[9] = {0xAD79EE5AFECAA13CLL,0xAD79EE5AFECAA13CLL,1L,0xAD79EE5AFECAA13CLL,0xAD79EE5AFECAA13CLL,1L,0xAD79EE5AFECAA13CLL,0xAD79EE5AFECAA13CLL,1L};
    long long l_510 = 0xFBFFE980547E5001LL;
    short *l_520 = &g_103;
    short **l_519 = &l_520;
    short ***l_521 = &l_519;
    int i, j;
    for (i = 0; i < 9; i++)
        l_24[i] = 0x7473L;
    for (i = 0; i < 8; i++)
        l_404[i] = (-1L);
    for (i = 0; i < 8; i++)
        l_454[i] = &g_69;
    if ((0x19D8L ^ func_22(l_24[2])))
    {
        unsigned short l_393[9][5] = {{1UL,0xCC40L,0xB49DL,0xCC40L,1UL},{0xCDF2L,0UL,1UL,0xC92AL,0UL},{1UL,2UL,2UL,1UL,0xA5C9L},{8UL,0x4431L,65535UL,0UL,0UL},{1UL,1UL,1UL,0xA5C9L,1UL},{0UL,1UL,0xC92AL,0UL,0xC92AL},{0xFB51L,0xFB51L,0xB49DL,1UL,0xCC40L},{0xCDF2L,8UL,0xC92AL,0xC92AL,8UL},{0xCC40L,2UL,1UL,0xCC40L,0xA5C9L}};
        int l_394[5][4][8] = {{{0x8A9DB2C5L,0x7449C447L,0x2DE1CC61L,0x95A59389L,(-5L),0L,0x3DDF9D1AL,(-6L)},{(-10L),0x6C82A8B2L,1L,6L,0x95A59389L,6L,1L,0x6C82A8B2L},{0x8E1A79D7L,1L,(-10L),0x27F0345FL,0xC5875928L,0xFC9776F6L,(-5L),1L},{0x6C82A8B2L,0x698D8807L,(-2L),(-5L),0x8E1A79D7L,7L,(-5L),0L}},{{1L,1L,(-1L),1L,0xCE40A3ABL,(-4L),0x38C7D021L,0x9A3D4B13L},{0xCE40A3ABL,(-4L),0x38C7D021L,0x9A3D4B13L,(-2L),0x2DE1CC61L,0xE91A89F2L,1L},{(-10L),0xEB101B36L,(-6L),(-1L),6L,(-5L),2L,0L},{0xB9843407L,1L,1L,1L,0x7E972E4EL,0L,0L,0x7E972E4EL}},{{0xFC9776F6L,(-2L),(-2L),0xFC9776F6L,0L,1L,0x9A3D4B13L,0L},{(-10L),(-10L),0x7449C447L,2L,0xE91A89F2L,0x6C82A8B2L,9L,0xEB101B36L},{0L,(-10L),1L,0x6B5106A1L,0xCE40A3ABL,1L,0xB9843407L,4L},{1L,(-2L),0L,0L,(-1L),0L,(-10L),0x6B5106A1L}},{{9L,1L,0x4466AAAEL,0xCE40A3ABL,1L,(-5L),0xFC9776F6L,0xC5875928L},{(-1L),0xEB101B36L,1L,7L,(-10L),0x2DE1CC61L,0L,1L},{0x9A3D4B13L,(-4L),1L,4L,1L,(-4L),0x9A3D4B13L,(-1L)},{1L,1L,0x378D74DEL,0xCE40A3ABL,0L,0x8A9DB2C5L,(-10L),9L}},{{1L,0xEB101B36L,(-1L),0x38C7D021L,0x7E972E4EL,(-1L),(-1L),0x9A3D4B13L},{(-1L),1L,0L,9L,0x6B5106A1L,(-1L),1L,0L},{1L,2L,0x378D74DEL,0xEB101B36L,9L,0x6C82A8B2L,0xE91A89F2L,2L},{0xB9843407L,0x9A3D4B13L,0L,7L,(-1L),(-1L),0x6B5106A1L,0xE91A89F2L}}};
        long long l_402[2];
        int l_412[2];
        int **l_413 = &g_67;
        unsigned char *l_418[5][9] = {{&g_406,&g_406,&g_406,&g_406,&g_406,&g_406,&g_406,&g_406,&g_406},{&g_406,&g_406,&g_406,&g_406,&g_406,&g_406,&g_406,&g_406,&g_406},{(void*)0,&g_406,&g_252[5][3][0],&g_406,(void*)0,(void*)0,&g_406,&g_252[5][3][0],&g_406},{&g_406,&g_406,&g_252[5][3][0],&g_252[5][3][0],&g_406,&g_406,&g_406,&g_252[5][3][0],&g_252[5][3][0]},{(void*)0,(void*)0,&g_406,&g_252[5][3][0],&g_406,(void*)0,(void*)0,&g_406,&g_252[5][3][0]}};
        unsigned *l_433 = &g_107;
        unsigned **l_451 = &l_433;
        unsigned char l_468[2];
        char l_492 = 0x46L;
        unsigned l_493 = 4294967295UL;
        short l_499 = 0x35D3L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_402[i] = 0x20BD113D3C45A414LL;
        for (i = 0; i < 2; i++)
            l_412[i] = 0xEF93D842L;
        for (i = 0; i < 2; i++)
            l_468[i] = 0x60L;
        for (g_39 = 0; (g_39 <= (-4)); g_39 = safe_sub_func_int32_t_s_s(g_39, 2))
        {
            int *l_392[4] = {&g_62,&g_62,&g_62,&g_62};
            long long l_405 = 0L;
            long long *l_410 = &l_402[0];
            long long *l_411 = &l_405;
            int i;
            l_393[6][2] = (g_69 &= (safe_mod_func_int64_t_s_s(0x008BFA158FE8BF1ELL, func_41((**g_66), g_252[0][4][0], (l_391 == &g_125), g_349[3][4], l_24[3]))));
            g_406++;
            l_412[0] &= func_41(l_397, (~g_205), g_60[0][1], p_20, (l_394[3][3][2] && ((*l_411) ^= ((*l_410) = g_409))));
        }
        (*l_413) = func_54(&l_404[1]);

        ;
        if (((l_24[2] > (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint32_t_u_u(((l_403 = (0L < g_21)) != (safe_mod_func_uint32_t_u_u(0x14477C67L, p_19))), (safe_add_func_uint8_t_u_u((**l_413), ((0UL == (p_20 >= (0x8808L || l_423))) >= p_19))))) > p_20), l_400))) > 0x85CEB02AL))
        {
            unsigned * const *l_428[5] = {&g_225,&g_225,&g_225,&g_225,&g_225};
            unsigned l_447 = 0xF37C2A7FL;
            int l_457 = 0x813B63A4L;
            int l_458 = 0L;
            int l_459 = (-10L);
            int l_462 = (-1L);
            int l_464 = 0xE92F90E0L;
            int l_465 = (-1L);
            int l_466 = 0x4197EA2BL;
            int l_467[5] = {0x704AB6BEL,0x704AB6BEL,0x704AB6BEL,0x704AB6BEL,0x704AB6BEL};
            int l_489 = 0x3CCEC671L;
            int i;
            for (l_397 = 0; (l_397 <= 7); l_397 += 1)
            {
                unsigned * const **l_429 = (void*)0;
                unsigned * const **l_430 = &l_428[1];
                unsigned short *l_432 = &l_393[8][3];
                int *l_436[2][3] = {{(void*)0,(void*)0,(void*)0},{&g_62,&g_62,(void*)0}};
                int l_448 = 0xE1C94F13L;
                const char l_449 = 0L;
                const unsigned long long l_452[4][10][2] = {{{0x7F56782A205476DALL,0x5DB6C569B6ADCA27LL},{18446744073709551610UL,18446744073709551613UL},{0x27D1C3543EC14B81LL,18446744073709551610UL},{0x9205A8B69695079ALL,0x8ADBFD8D1D5FBB19LL},{0x9205A8B69695079ALL,18446744073709551610UL},{0x27D1C3543EC14B81LL,18446744073709551613UL},{18446744073709551610UL,0x5DB6C569B6ADCA27LL},{0x7F56782A205476DALL,0x4C572B0AE1982765LL},{18446744073709551609UL,7UL},{7UL,0x04E03C146E845D0DLL}},{{0xD2DFAF3CF9002E4DLL,0x11C9FCD6B9C0C3E2LL},{0x26CB09B32B41EA42LL,0x9205A8B69695079ALL},{0x0A1542E635198F2ALL,1UL},{0x4C572B0AE1982765LL,0xEA7308894FC4B509LL},{0x04E03C146E845D0DLL,8UL},{1UL,8UL},{0x04E03C146E845D0DLL,0xEA7308894FC4B509LL},{0x4C572B0AE1982765LL,1UL},{0x0A1542E635198F2ALL,0x9205A8B69695079ALL},{0x26CB09B32B41EA42LL,0x11C9FCD6B9C0C3E2LL}},{{0xD2DFAF3CF9002E4DLL,0x04E03C146E845D0DLL},{7UL,7UL},{18446744073709551609UL,0x4C572B0AE1982765LL},{0x7F56782A205476DALL,0x5DB6C569B6ADCA27LL},{18446744073709551610UL,18446744073709551613UL},{0x27D1C3543EC14B81LL,18446744073709551610UL},{0x9205A8B69695079ALL,0x8ADBFD8D1D5FBB19LL},{0x9205A8B69695079ALL,18446744073709551610UL},{0x27D1C3543EC14B81LL,18446744073709551613UL},{18446744073709551610UL,0x5DB6C569B6ADCA27LL}},{{0x7F56782A205476DALL,0x4C572B0AE1982765LL},{18446744073709551609UL,7UL},{7UL,0x04E03C146E845D0DLL},{0xD2DFAF3CF9002E4DLL,0x11C9FCD6B9C0C3E2LL},{0x26CB09B32B41EA42LL,0x9205A8B69695079ALL},{0x0A1542E635198F2ALL,1UL},{0x4C572B0AE1982765LL,0xEA7308894FC4B509LL},{0x04E03C146E845D0DLL,8UL},{1UL,8UL},{0x04E03C146E845D0DLL,0xEA7308894FC4B509LL}}};
                int i, j, k;
                l_404[l_397] = ((safe_sub_func_uint16_t_u_u((l_404[l_397] | 0x069FBD8BCDC92195LL), ((*l_432) = (l_404[l_397] <= (((*l_430) = l_428[1]) != l_431))))) | ((void*)0 == l_433));
                l_399 ^= ((**l_413) == func_41(p_19, (safe_mod_func_uint16_t_u_u(func_41(((*g_68) = (**l_413)), (((void*)0 == g_437) != 18446744073709551607UL), (!(safe_sub_func_uint16_t_u_u(((((safe_sub_func_int64_t_s_s((safe_mul_func_int16_t_s_s((0x7615L <= ((((((**l_431) |= (safe_add_func_int16_t_s_s(0x09BEL, (**g_437)))) | (**l_413)) != p_20) <= p_20) > 4294967291UL)), p_20)), 0L)) && 1L) == p_19) ^ l_447), 1L))), l_448, l_24[6]), p_19)), l_449, l_396, p_20));
                for (g_125 = 0; (g_125 <= 3); g_125 += 1)
                {
                    unsigned ***l_450[8] = {&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431,&l_431};
                    int l_453 = (-10L);
                    int l_460[8][7][4] = {{{(-3L),1L,(-1L),0xCF5132A3L},{0x9796963DL,0L,(-1L),0x34996A78L},{0x84ADCEB3L,1L,0x8C552CA8L,(-8L)},{0x6C7B3431L,(-1L),0x16E2ADF1L,0x8A7D58F4L},{0x44A580ADL,0xB89AD34FL,(-1L),0xE6AD17FCL},{0x01904127L,(-10L),0x55AD8233L,0xAD0BEAE4L},{1L,(-1L),(-5L),(-1L)}},{{(-1L),0xB6D1D580L,0L,0xCF5132A3L},{0x4AD375B8L,0x8BE28EB4L,0xAC029ABEL,0L},{(-3L),(-2L),(-1L),0L},{0x5BADD165L,(-1L),1L,(-1L)},{0xCF5132A3L,0x033E6721L,8L,3L},{5L,6L,0xFE1095AAL,(-7L)},{0xD18C4577L,1L,0L,1L}},{{0xD18C4577L,0x5BADD165L,0xFE1095AAL,1L},{5L,1L,8L,0x16E2ADF1L},{0xCF5132A3L,0x685E4329L,1L,0x55AD8233L},{0x5BADD165L,9L,(-1L),0xF6DB7BD4L},{(-3L),0L,0xAC029ABEL,(-1L)},{0x4AD375B8L,1L,0L,0x5BADD165L},{(-1L),1L,(-5L),9L}},{{1L,0x4AD375B8L,0x55AD8233L,0x3DDA2D32L},{0x01904127L,0L,(-1L),(-6L)},{0x44A580ADL,2L,0x16E2ADF1L,0x7D833FA4L},{0x6C7B3431L,0L,0x8C552CA8L,0L},{0L,(-5L),0x44A580ADL,0x55AD8233L},{0x033E6721L,0xD5BE09B2L,(-6L),0xB6D1D580L},{(-1L),0x16E2ADF1L,3L,0x7D833FA4L}},{{0L,8L,0L,(-1L)},{3L,0L,0x4488F8F5L,1L},{0xE6AD17FCL,0x34996A78L,0xAC029ABEL,8L},{(-1L),0x7F1C34DEL,0x7F1C34DEL,(-1L)},{0x7D833FA4L,1L,0x033E6721L,(-10L)},{0xAD0BEAE4L,6L,0xB89AD34FL,0x4488F8F5L},{0x9796963DL,0x5BADD165L,1L,0x4488F8F5L}},{{(-6L),6L,(-7L),(-10L)},{0xD5BE09B2L,1L,(-1L),(-1L)},{0x8BE28EB4L,0x7F1C34DEL,(-9L),8L},{5L,0x34996A78L,0x9796963DL,1L},{1L,0L,0x3DDA2D32L,(-1L)},{0L,8L,(-3L),0x7D833FA4L},{0x64A6D1CBL,0x16E2ADF1L,(-1L),0xB6D1D580L}},{{(-1L),0xD5BE09B2L,(-1L),0x55AD8233L},{0x55AD8233L,(-5L),1L,0L},{5L,0L,0x64A6D1CBL,0xFCC2D968L},{(-1L),(-1L),1L,5L},{0xFE1095AAL,0x9796963DL,0x8BE28EB4L,0x6D562344L},{0x34996A78L,(-7L),0L,0x7664CEDCL},{6L,(-1L),0xB6D1D580L,5L}},{{0L,0xD5BE09B2L,5L,(-6L)},{0x64A6D1CBL,(-9L),(-1L),(-1L)},{0x8A7D58F4L,1L,9L,(-7L)},{0x16E2ADF1L,0xB6D1D580L,0x16E2ADF1L,9L},{1L,0x189A3244L,1L,0xCF5132A3L},{1L,5L,1L,0x189A3244L},{0x7664CEDCL,0L,1L,0L}}};
                    int i, j, k;
                    (**l_413) = 7L;
                    (**g_260) = (((l_397 & g_148[4][3]) >= 0L) <= (0xC5DFL <= func_41((*g_68), ((l_451 = (void*)0) == &g_225), l_452[1][3][1], l_453, l_447)));

                    ;
                    (*g_455) = l_454[5];
                    for (g_62 = 0; (g_62 <= 1); g_62 += 1)
                    {
                        int l_461 = 0x0DA5D7B8L;
                        int l_463[7][1][1];
                        int i, j, k;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 1; k++)
                                    l_463[i][j][k] = 7L;
                            }
                        }
                        l_394[(g_62 + 2)][g_125][g_62] ^= (0xB7AAL == ((void*)0 == &g_67));
                        --l_468[1];
                        if (l_394[g_125][g_125][g_62])
                            break;
                        return p_19;


                    }
                }
            }

            ;
            (*l_413) = (*l_413);
            for (g_122 = 2; (g_122 == 43); ++g_122)
            {
                char l_482 = 0x0EL;
                int l_483[10][5][5] = {{{0xB201D0D9L,0x44C90AF2L,0x668F6BE1L,1L,4L},{0xB7D2482FL,0xAE10E44DL,1L,(-3L),3L},{0x44C90AF2L,0x7EBB2B6CL,0xAE10E44DL,3L,0L},{8L,0x5DC80E9AL,(-9L),0xB201D0D9L,0x7A311C29L},{8L,(-3L),0x761E100BL,(-4L),(-3L)}},{{0x44C90AF2L,0x65BD939FL,0xC6AE6DF9L,0xEAA18650L,5L},{0xB7D2482FL,0xB7953CE7L,0x3EDD73FAL,1L,1L},{0xB201D0D9L,0x668F6BE1L,0L,0x2630C877L,0x2C558310L},{(-9L),(-4L),0x72B2A599L,3L,3L},{0xB7953CE7L,(-1L),0xB7953CE7L,9L,0L}},{{0L,0x41E6A13AL,0xCBF657FDL,(-3L),8L},{0x7EBB2B6CL,8L,(-2L),0xE84026C5L,(-3L)},{0L,0x3EDD73FAL,0xCBF657FDL,8L,0x82F553D3L},{(-9L),0xF224AB2FL,8L,0x5F49680FL,0x7A311C29L},{0L,1L,0x5F49680FL,1L,8L}},{{(-2L),1L,(-3L),1L,(-1L)},{(-1L),(-6L),0xE2BF0666L,0xE84026C5L,9L},{3L,1L,0x72B2A599L,0x7A311C29L,0xF7525A05L},{0x2568A000L,3L,0xEAA18650L,1L,(-3L)},{1L,0xEDB0A48BL,(-3L),1L,(-3L)}},{{0x5F49680FL,0xB7D2482FL,(-8L),0L,0xF7525A05L},{0L,0L,(-9L),0x126D340CL,9L},{(-6L),0xF7525A05L,0x4D583A4DL,0L,(-1L)},{9L,1L,(-1L),0x65BD939FL,8L},{0xF90EDB41L,1L,0x7A311C29L,0x3EDD73FAL,0x7A311C29L}},{{5L,5L,9L,5L,1L},{1L,9L,0x239F71B1L,0x2630C877L,0x41E6A13AL},{0x3EDD73FAL,0x41E6A13AL,0L,3L,1L},{(-9L),9L,0x3EDD73FAL,0xC6AE6DF9L,1L},{1L,5L,0x5DC80E9AL,(-1L),(-9L)}},{{9L,1L,0x126D340CL,5L,4L},{0L,1L,0L,(-1L),1L},{0xF224AB2FL,0x5DC80E9AL,1L,0x3EDD73FAL,(-4L)},{(-6L),0L,(-1L),1L,1L},{(-3L),5L,8L,1L,0x5F49680FL}},{{0L,0xE84026C5L,1L,1L,5L},{0xCBF657FDL,(-3L),0x6989D4ADL,1L,0xF224AB2FL},{(-7L),8L,0x668F6BE1L,0x3EDD73FAL,5L},{8L,0xE2BF0666L,0L,1L,1L},{0x65BD939FL,1L,0L,9L,0xB7953CE7L}},{{0x239F71B1L,0L,0x761E100BL,0x761E100BL,0L},{0xF7525A05L,(-9L),1L,0x5F49680FL,9L},{(-2L),0x82F553D3L,9L,1L,0L},{1L,(-8L),0xEDB0A48BL,3L,1L},{(-2L),(-1L),0x5DC80E9AL,0x7EBB2B6CL,1L}},{{0xF7525A05L,1L,0xF224AB2FL,3L,0x761E100BL},{0x239F71B1L,0xCBF657FDL,(-1L),0x89992479L,(-1L)},{0x65BD939FL,0x239F71B1L,0x7EBB2B6CL,9L,0xCBF657FDL},{8L,0xAE10E44DL,(-1L),1L,0xB7D2482FL},{(-7L),(-1L),0xE84026C5L,0L,0x239F71B1L}}};
                int *l_498 = &l_467[3];
                int i, j, k;
                for (g_107 = 0; (g_107 >= 6); ++g_107)
                {
                    const int **l_475[2][5] = {{&l_454[4],&l_454[4],&l_454[4],&l_454[4],&l_454[4]},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                    int l_484 = 0x79FA5F1FL;
                    int l_485 = (-8L);
                    int l_486 = 0xFF10A7EFL;
                    int l_487 = (-1L);
                    int l_488[6][4][9] = {{{0x96DB92C1L,0xB881ACE1L,0x0826293FL,0x0826293FL,0xB881ACE1L,0x96DB92C1L,0L,0x96DB92C1L,0xB881ACE1L},{0x8F8A3137L,(-2L),6L,2L,(-1L),(-1L),(-1L),2L,6L},{(-6L),(-6L),0L,0xB881ACE1L,0x539AE094L,0xB881ACE1L,0L,(-6L),(-6L)},{6L,2L,(-1L),(-1L),(-1L),2L,6L,(-2L),0x8F8A3137L}},{{0xB881ACE1L,0x96DB92C1L,0L,0x96DB92C1L,0xB881ACE1L,0x0826293FL,0x0826293FL,0xB881ACE1L,0x96DB92C1L},{6L,0x4BE6B779L,6L,0x69E3920AL,0x15296998L,0x60F77A0AL,1L,(-2L),(-1L)},{(-6L),0x679FE781L,0x0826293FL,0L,0L,0x0826293FL,0x679FE781L,(-6L),0x679FE781L},{0x8F8A3137L,(-1L),1L,0x69E3920AL,0x344CE5D9L,2L,0x15296998L,2L,0x344CE5D9L}},{{0x96DB92C1L,0x679FE781L,0x679FE781L,0x96DB92C1L,(-6L),0xB881ACE1L,(-6L),0x96DB92C1L,0x679FE781L},{(-1L),0x4BE6B779L,0x15296998L,(-1L),0xDA51166FL,(-1L),0x15296998L,0x4BE6B779L,(-1L)},{0x679FE781L,0x96DB92C1L,0L,0x679FE781L,0L,0x539AE094L,0x96DB92C1L,0x96DB92C1L,0x539AE094L},{6L,(-1L),1L,(-1L),6L,(-1L),0x344CE5D9L,(-2L),0xDA51166FL}},{{0x96DB92C1L,0L,0x96DB92C1L,0xB881ACE1L,0x0826293FL,0x0826293FL,0xB881ACE1L,0x96DB92C1L,0L},{0x15296998L,2L,0x344CE5D9L,0x69E3920AL,1L,(-1L),0x8F8A3137L,0x60F77A0AL,0x8F8A3137L},{0x539AE094L,0x679FE781L,0xB881ACE1L,0xB881ACE1L,0x679FE781L,0x539AE094L,0x0826293FL,0x539AE094L,0x679FE781L},{0xDA51166FL,2L,0x8F8A3137L,(-1L),0x15296998L,(-2L),0x15296998L,(-1L),0x8F8A3137L}},{{0L,0L,0x0826293FL,0x679FE781L,(-6L),0x679FE781L,0x0826293FL,0L,0L},{0x8F8A3137L,(-1L),0x15296998L,(-2L),0x15296998L,(-1L),0x8F8A3137L,2L,0xDA51166FL},{0x679FE781L,0x539AE094L,0x0826293FL,0x539AE094L,0x679FE781L,0xB881ACE1L,0xB881ACE1L,0x679FE781L,0x539AE094L},{0x8F8A3137L,0x60F77A0AL,0x8F8A3137L,(-1L),1L,0x69E3920AL,0x344CE5D9L,2L,0x15296998L}},{{0L,0x96DB92C1L,0xB881ACE1L,0x0826293FL,0x0826293FL,0xB881ACE1L,0x96DB92C1L,0x539AE094L,0xB881ACE1L},{6L,0x69E3920AL,0x15296998L,0x60F77A0AL,1L,(-2L),(-1L),(-2L),1L},{0x679FE781L,0xB881ACE1L,0xB881ACE1L,0x679FE781L,0x539AE094L,0x0826293FL,0x539AE094L,0x679FE781L,0xB881ACE1L},{0xDA51166FL,(-1L),(-1L),0x69E3920AL,0x8F8A3137L,0x69E3920AL,(-1L),(-1L),0xDA51166FL}}};
                    int i, j, k;
                    (*g_455) = (*g_455);
                    (**l_413) = (!(**g_260));
                    if (func_41(p_20, p_19, g_88, (0x6216598BL >= p_19), (((*l_391) |= g_146) || ((*l_413) == (void*)0))))
                    {
                        int *l_476 = &l_458;
                        int *l_477 = &l_398;
                        int *l_478 = &l_400;
                        int *l_479 = &l_396;
                        int *l_480 = &l_394[2][0][0];
                        int *l_481[6];
                        short l_490[6][6] = {{0x5106L,0x5106L,0x5FA3L,0x5FA3L,0x5106L,0x5106L},{0x5106L,0x5FA3L,0x5FA3L,0x5106L,0x5106L,0x5FA3L},{0x5106L,0x5106L,0x5FA3L,0x5FA3L,0x5106L,0x5106L},{0x5106L,0x5FA3L,0x5FA3L,0x5106L,0x5106L,0x5FA3L},{0x5106L,0x5106L,0x5FA3L,0x5FA3L,0x5106L,0x5106L},{0x5106L,0x5FA3L,0x5FA3L,0x5106L,0x5106L,0x5FA3L}};
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_481[i] = &l_466;
                        l_493++;
                    }
                    else
                    {
                        int *l_496 = &l_462;
                        int **l_497 = &l_496;
                        l_498 = func_54(((*l_497) = ((*l_413) = l_496)));

                        ;
                        ;
                    }
                    if (l_499)
                        break;
                }

                ;
            }

            ;
        }
        else
        {
            char l_500 = 0x6AL;
            int *l_501 = &l_397;
            int *l_502 = &l_412[1];
            int *l_503 = &l_394[0][1][7];
            int *l_504 = &l_412[0];
            int *l_505 = &l_404[3];
            int *l_506 = &g_39;
            int *l_507 = &l_394[2][0][0];
            int *l_508 = (void*)0;
            int *l_509 = &l_412[0];
            int *l_511 = &l_398;
            int *l_512 = &l_398;
            int *l_513[1];
            unsigned l_514[9];
            int i;
            for (i = 0; i < 1; i++)
                l_513[i] = &g_39;
            for (i = 0; i < 9; i++)
                l_514[i] = 4294967295UL;
            l_514[8]--;
            return p_19;


        }


        ;
        return p_20;


    }
    else
    {
        unsigned long long **l_517 = &l_391;
        unsigned long long ***l_518 = &l_517;
        (*l_518) = l_517;
    }

    ;
    (*l_521) = l_519;
    (*g_67) &= (**g_455);
    return p_19;
}







static short func_22(int p_23)
{
    int l_376[3];
    int i;
    for (i = 0; i < 3; i++)
        l_376[i] = 0xF938B6D8L;
    for (p_23 = (-6); (p_23 <= (-14)); p_23--)
    {
        int *l_40 = (void*)0;
        unsigned short l_380 = 65535UL;
        int l_383[5][2][10] = {{{(-5L),0L,0L,0L,0L,(-5L),0L,(-7L),(-5L),(-5L)},{0L,(-7L),0L,0L,0L,0L,(-7L),0L,2L,(-7L)}},{{0L,(-5L),0L,(-7L),(-5L),(-5L),(-7L),0L,(-5L),0L},{(-5L),(-7L),0L,(-5L),0L,0L,0L,0L,(-5L),0L}},{{0L,0L,0L,(-7L),0L,2L,(-7L),(-7L),2L,0L},{0L,0L,0L,0L,(-5L),0L,(-7L),(-5L),(-5L),(-7L)}},{{(-5L),0L,0L,0L,0L,(-5L),0L,(-7L),(-5L),(-5L)},{0L,(-7L),0L,0L,0L,0L,(-7L),0L,2L,(-7L)}},{{0L,(-5L),0L,(-7L),(-5L),(-5L),(-7L),0L,(-5L),0L},{(-5L),(-7L),0L,(-5L),0L,0L,0L,0L,(-5L),0L}}};
        int i, j, k;
        for (g_21 = 0; (g_21 < 21); ++g_21)
        {
            int *l_38 = &g_39;
            int **l_369[6][10] = {{&l_38,&l_40,&g_67,&g_67,&l_38,(void*)0,&g_67,&l_40,&g_67,&g_67},{&l_40,&l_40,&l_40,&g_67,&g_67,(void*)0,(void*)0,&g_67,&g_67,(void*)0},{&l_40,&g_67,(void*)0,(void*)0,&g_67,&l_40,&l_38,&g_67,&g_67,&g_67},{(void*)0,&l_38,&l_38,&g_67,&g_67,&l_38,&g_67,&l_40,&l_38,&g_67},{(void*)0,&l_38,&g_67,&l_40,&g_67,&l_38,&g_67,&l_38,&g_67,&l_38},{&l_38,&g_67,&l_38,&g_67,&l_38,&g_67,&l_40,&g_67,&l_38,(void*)0}};
            int i, j;
            (*g_260) = func_29(func_33(p_23, l_38, g_21, l_40), g_225, g_225);

            ;
        }
        (*g_68) = p_23;
        for (g_142 = (-24); (g_142 == 13); g_142 = safe_add_func_uint32_t_u_u(g_142, 2))
        {
            long long l_372[8][3][6] = {{{0x8470BAADAA977918LL,0x1543F78BDB11BAC8LL,1L,0x0C196969434FFD99LL,0xFD065A8A1E2BD952LL,1L},{2L,(-2L),(-8L),0xFD065A8A1E2BD952LL,(-8L),(-2L)},{2L,1L,0xFD065A8A1E2BD952LL,0x0C196969434FFD99LL,1L,0x1543F78BDB11BAC8LL}},{{0x8470BAADAA977918LL,0xFD065A8A1E2BD952LL,2L,0xC487C337AA3CF775LL,0xC487C337AA3CF775LL,2L},{0xFD065A8A1E2BD952LL,0xFD065A8A1E2BD952LL,(-1L),0x8470BAADAA977918LL,1L,0xC487C337AA3CF775LL},{(-2L),1L,0x0C196969434FFD99LL,(-1L),(-8L),(-1L)}},{{0x0C196969434FFD99LL,(-2L),0x0C196969434FFD99LL,0x1543F78BDB11BAC8LL,0xFD065A8A1E2BD952LL,0xC487C337AA3CF775LL},{1L,0x1543F78BDB11BAC8LL,(-1L),0xB3821923FF9E340CLL,2L,2L},{0xB3821923FF9E340CLL,2L,2L,0xB3821923FF9E340CLL,(-1L),0x1543F78BDB11BAC8LL}},{{1L,0xC487C337AA3CF775LL,0xFD065A8A1E2BD952LL,0x1543F78BDB11BAC8LL,0x0C196969434FFD99LL,(-2L)},{0x0C196969434FFD99LL,1L,(-1L),1L,0x8470BAADAA977918LL,0xB3821923FF9E340CLL},{0x0C196969434FFD99LL,0x1543F78BDB11BAC8LL,0xFD065A8A1E2BD952LL,0xC487C337AA3CF775LL,1L,(-8L)}},{{(-8L),1L,0x1543F78BDB11BAC8LL,0x1543F78BDB11BAC8LL,1L,(-8L)},{0xC487C337AA3CF775LL,2L,0xFD065A8A1E2BD952LL,0x8470BAADAA977918LL,(-8L),0xB3821923FF9E340CLL},{1L,0x0C196969434FFD99LL,(-1L),(-8L),(-1L),0x0C196969434FFD99LL}},{{1L,0xB3821923FF9E340CLL,(-8L),0x8470BAADAA977918LL,0xFD065A8A1E2BD952LL,2L},{0xC487C337AA3CF775LL,(-8L),1L,0x1543F78BDB11BAC8LL,0x1543F78BDB11BAC8LL,1L},{(-8L),(-8L),1L,0xC487C337AA3CF775LL,0xFD065A8A1E2BD952LL,0x1543F78BDB11BAC8LL}},{{0x0C196969434FFD99LL,0xB3821923FF9E340CLL,0x8470BAADAA977918LL,1L,(-1L),1L},{0x8470BAADAA977918LL,0x0C196969434FFD99LL,0x8470BAADAA977918LL,2L,(-8L),0x1543F78BDB11BAC8LL},{(-2L),2L,1L,1L,1L,1L}},{{1L,1L,1L,1L,1L,2L},{(-2L),0x1543F78BDB11BAC8LL,(-8L),2L,0x8470BAADAA977918LL,0x0C196969434FFD99LL},{0x8470BAADAA977918LL,1L,(-1L),1L,0x8470BAADAA977918LL,0xB3821923FF9E340CLL}}};
            int *l_373 = (void*)0;
            int *l_374 = &g_39;
            int *l_375[5];
            unsigned l_384 = 0x5A4EDAE0L;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_375[i] = &g_62;
            --g_377;
            --l_380;
            l_384--;
        }
    }
    return g_349[2][5];
}







static int * func_29(int * p_30, int * p_31, int * p_32)
{
    int *l_361 = &g_62;
    unsigned short *l_362 = &g_122;
    unsigned long long *l_365 = &g_125;
    unsigned char l_368[5][3][7] = {{{251UL,251UL,1UL,251UL,251UL,1UL,251UL},{251UL,0xF9L,0xF9L,251UL,0xF9L,0xF9L,0xF9L},{1UL,0xF9L,1UL,1UL,0xF9L,1UL,1UL}},{{0xF9L,0xF9L,251UL,0xF9L,0xF9L,251UL,0xF9L},{0xF9L,1UL,1UL,0xF9L,1UL,1UL,0xF9L},{1UL,0xF9L,1UL,1UL,0xF9L,1UL,1UL}},{{0xF9L,0xF9L,251UL,0xF9L,0xF9L,251UL,0xF9L},{0xF9L,1UL,1UL,0xF9L,1UL,1UL,0xF9L},{1UL,0xF9L,1UL,1UL,0xF9L,1UL,1UL}},{{0xF9L,0xF9L,251UL,0xF9L,0xF9L,251UL,0xF9L},{0xF9L,1UL,1UL,0xF9L,1UL,1UL,0xF9L},{1UL,0xF9L,1UL,1UL,0xF9L,1UL,1UL}},{{0xF9L,0xF9L,251UL,0xF9L,0xF9L,251UL,0xF9L},{0xF9L,1UL,1UL,0xF9L,1UL,1UL,0xF9L},{1UL,0xF9L,1UL,1UL,0xF9L,1UL,1UL}}};
    int i, j, k;
    (*g_230) = l_361;

    ;
    g_69 &= func_41(((0x12B6L || 0xCC6BL) > ((g_252[4][8][1] | ((((*l_362) |= 0xCBB9L) && (((1UL ^ (((*p_32) = ((safe_add_func_int8_t_s_s((((*l_365) = (*l_361)) < ((((safe_rshift_func_uint16_t_u_u(((*l_361) == g_148[4][3]), 1)) == 0xA2BAL) && g_349[3][4]) | l_368[1][1][3])), (*l_361))) != (*l_361))) != (*l_361))) >= (*l_361)) || 0UL)) == (*l_361))) >= g_349[3][0])), g_61, (*l_361), g_252[3][6][1], (*l_361));
    return p_32;


}







static int * func_33(long long p_34, int * p_35, short p_36, int * p_37)
{
    long long l_47[2];
    int *l_56 = (void*)0;
    int **l_243[9][8][3] = {{{&l_56,&l_56,&g_67},{&g_67,&g_67,&g_67},{&g_67,&l_56,&l_56},{&g_67,&l_56,&g_67},{&l_56,&l_56,&g_67},{&l_56,&g_67,&g_67},{&g_67,&l_56,&l_56},{&l_56,&l_56,&g_67}},{{&l_56,&l_56,&g_67},{&g_67,&g_67,&g_67},{&g_67,&l_56,&l_56},{&g_67,&l_56,&g_67},{&l_56,&l_56,&g_67},{&l_56,&g_67,&g_67},{&g_67,&l_56,&l_56},{&l_56,&l_56,&g_67}},{{&l_56,&l_56,&g_67},{&g_67,&g_67,&g_67},{&g_67,&l_56,&l_56},{&g_67,&l_56,&g_67},{&l_56,&l_56,&g_67},{&l_56,&g_67,&g_67},{&g_67,&l_56,&l_56},{&l_56,&l_56,&g_67}},{{&l_56,&l_56,&g_67},{&g_67,&g_67,&g_67},{&g_67,&l_56,&l_56},{&g_67,&l_56,&g_67},{&l_56,&l_56,&g_67},{&l_56,&g_67,&g_67},{&g_67,&l_56,&l_56},{&l_56,&l_56,&g_67}},{{&l_56,&l_56,(void*)0},{&g_67,&g_67,&l_56},{&l_56,(void*)0,&g_67},{&g_67,&g_67,&l_56},{&l_56,(void*)0,(void*)0},{&g_67,&g_67,&l_56},{&l_56,&l_56,&g_67},{&g_67,&g_67,&l_56}},{{&l_56,&l_56,(void*)0},{&g_67,&g_67,&l_56},{&l_56,(void*)0,&g_67},{&g_67,&g_67,&l_56},{&l_56,(void*)0,(void*)0},{&g_67,&g_67,&l_56},{&l_56,&l_56,&g_67},{&g_67,&g_67,&l_56}},{{&l_56,&l_56,(void*)0},{&g_67,&g_67,&l_56},{&l_56,(void*)0,&g_67},{&g_67,&g_67,&l_56},{&l_56,(void*)0,(void*)0},{&g_67,&g_67,&l_56},{&l_56,&l_56,&g_67},{&g_67,&g_67,&l_56}},{{&l_56,&l_56,(void*)0},{&g_67,&g_67,&l_56},{&l_56,(void*)0,&g_67},{&g_67,&g_67,&l_56},{&l_56,(void*)0,(void*)0},{&g_67,&g_67,&l_56},{&l_56,&l_56,&g_67},{&g_67,&g_67,&l_56}},{{&l_56,&l_56,(void*)0},{&g_67,&g_67,&l_56},{&l_56,(void*)0,&g_67},{&g_67,&g_67,&l_56},{&l_56,(void*)0,(void*)0},{&g_67,&g_67,&l_56},{&l_56,&l_56,&g_67},{&g_67,&g_67,&l_56}}};
    short *l_244 = (void*)0;
    short *l_245[4] = {&g_148[4][3],&g_148[4][3],&g_148[4][3],&g_148[4][3]};
    char *l_249 = (void*)0;
    char *l_250[4] = {&g_146,&g_146,&g_146,&g_146};
    long long l_251[2][8][4] = {{{(-2L),(-2L),1L,0xFD536921B34851EFLL},{1L,0xFD536921B34851EFLL,0x88F001C752FF0263LL,0xCA8F3B588DF57AABLL},{0xCA8F3B588DF57AABLL,(-9L),(-2L),0x88F001C752FF0263LL},{0x65134EA958541D51LL,(-9L),3L,0xCA8F3B588DF57AABLL},{(-9L),0xFD536921B34851EFLL,4L,0xFD536921B34851EFLL},{(-5L),(-2L),(-5L),0x1353EE151F7C336CLL},{4L,4L,0x691D8E7BA680AF3ELL,4L},{0x1353EE151F7C336CLL,0x691D8E7BA680AF3ELL,(-9L),(-5L)}},{{0x1353EE151F7C336CLL,1L,0x691D8E7BA680AF3ELL,1L},{4L,(-5L),(-5L),4L},{(-5L),0xCA8F3B588DF57AABLL,4L,1L},{(-9L),1L,3L,(-1L)},{0x65134EA958541D51LL,4L,(-2L),(-1L)},{0xCA8F3B588DF57AABLL,1L,0x88F001C752FF0263LL,1L},{1L,0xCA8F3B588DF57AABLL,1L,4L},{(-2L),(-5L),0x1353EE151F7C336CLL,1L}}};
    unsigned char l_253 = 255UL;
    unsigned long long l_261 = 3UL;
    char l_264 = 0xF9L;
    unsigned l_292 = 7UL;
    unsigned char l_310 = 0x3EL;
    unsigned l_322[1];
    unsigned long long l_348[7][6][6] = {{{1UL,0xE0EA05DB0BE6F6EBLL,0x07A97E9CE892552BLL,0xBA88B05C5E7CFC8ELL,8UL,18446744073709551615UL},{1UL,0xE0EA05DB0BE6F6EBLL,0x38C0A4E7A549F0C9LL,1UL,18446744073709551608UL,0x8836129E778932A1LL},{0xA87C7A67DB924B90LL,1UL,18446744073709551612UL,0x5E03390A5FE8DCF1LL,0x69B84B6786FB1533LL,0x1D79FBAA5E398C09LL},{0x1D79FBAA5E398C09LL,0x9A509C7792C4FCC7LL,0x2C323A422A1BE60ALL,0xA87C7A67DB924B90LL,18446744073709551615UL,1UL},{18446744073709551607UL,0xBA88B05C5E7CFC8ELL,7UL,0x60DADA44061427EELL,3UL,0xA87C7A67DB924B90LL},{0x95229BD1876565A8LL,0xA87C7A67DB924B90LL,0x69B84B6786FB1533LL,18446744073709551615UL,5UL,18446744073709551607UL}},{{0x69B84B6786FB1533LL,18446744073709551613UL,1UL,1UL,1UL,1UL},{18446744073709551609UL,18446744073709551609UL,0x8836129E778932A1LL,3UL,8UL,18446744073709551611UL},{0x312E50F9D88742B6LL,0x4B5DF1EF3BB995AFLL,1UL,1UL,0x07A97E9CE892552BLL,0x8836129E778932A1LL},{0x9A509C7792C4FCC7LL,0x312E50F9D88742B6LL,1UL,0UL,18446744073709551609UL,18446744073709551611UL},{0x1D79FBAA5E398C09LL,0UL,0x8836129E778932A1LL,0x395DEFAC72EE6599LL,0xBA88B05C5E7CFC8ELL,1UL},{0x395DEFAC72EE6599LL,0xBA88B05C5E7CFC8ELL,1UL,18446744073709551615UL,0x209C41B56AB63B21LL,18446744073709551607UL}},{{0UL,4UL,0x69B84B6786FB1533LL,18446744073709551611UL,0x4B5DF1EF3BB995AFLL,0xA87C7A67DB924B90LL},{0x4B5DF1EF3BB995AFLL,0x38C0A4E7A549F0C9LL,7UL,1UL,0x2C323A422A1BE60ALL,1UL},{0xE0EA05DB0BE6F6EBLL,5UL,0x2C323A422A1BE60ALL,0x1D79FBAA5E398C09LL,8UL,0x1D79FBAA5E398C09LL},{18446744073709551612UL,0x69B84B6786FB1533LL,18446744073709551612UL,1UL,0xC0F4D55598F39391LL,0x8836129E778932A1LL},{18446744073709551611UL,0xA87C7A67DB924B90LL,4UL,8UL,1UL,18446744073709551612UL},{0UL,18446744073709551614UL,0xF317043BEBC221F6LL,8UL,18446744073709551613UL,0xBA88B05C5E7CFC8ELL}},{{18446744073709551611UL,0x95229BD1876565A8LL,18446744073709551615UL,0xBA88B05C5E7CFC8ELL,0UL,0x254B57014F9A1E60LL},{0xA87C7A67DB924B90LL,0xC5DABB0892998137LL,0xC0F4D55598F39391LL,0UL,0x8836129E778932A1LL,18446744073709551614UL},{0x07A97E9CE892552BLL,18446744073709551607UL,0xBA88B05C5E7CFC8ELL,7UL,0x60DADA44061427EELL,3UL},{0x2C323A422A1BE60ALL,0x8836129E778932A1LL,1UL,18446744073709551613UL,5UL,1UL},{0UL,1UL,18446744073709551607UL,0x1D79FBAA5E398C09LL,1UL,1UL},{18446744073709551614UL,0UL,0UL,18446744073709551614UL,0x07A97E9CE892552BLL,0x38C0A4E7A549F0C9LL}},{{0UL,4UL,7UL,18446744073709551611UL,0x312E50F9D88742B6LL,0x1D79FBAA5E398C09LL},{0x254B57014F9A1E60LL,0x95229BD1876565A8LL,18446744073709551611UL,0x209C41B56AB63B21LL,0x312E50F9D88742B6LL,0xC5DABB0892998137LL},{0x5E03390A5FE8DCF1LL,4UL,0xC0F4D55598F39391LL,1UL,0x07A97E9CE892552BLL,8UL},{0xBF19C5951E3A4B9FLL,0UL,3UL,7UL,1UL,0xF43DAA89CE8F9D4DLL},{0xC0F4D55598F39391LL,1UL,18446744073709551615UL,18446744073709551612UL,5UL,0x95229BD1876565A8LL},{18446744073709551607UL,0x8836129E778932A1LL,0x9A509C7792C4FCC7LL,18446744073709551615UL,0x60DADA44061427EELL,1UL}},{{4UL,18446744073709551607UL,0x5E03390A5FE8DCF1LL,0UL,0x8836129E778932A1LL,0x312E50F9D88742B6LL},{0UL,0xC5DABB0892998137LL,0x60DADA44061427EELL,0xC5DABB0892998137LL,0UL,18446744073709551615UL},{0x312E50F9D88742B6LL,18446744073709551615UL,0xBF19C5951E3A4B9FLL,0x2C323A422A1BE60ALL,1UL,18446744073709551612UL},{18446744073709551611UL,18446744073709551613UL,18446744073709551611UL,18446744073709551615UL,0xC5DABB0892998137LL,18446744073709551612UL},{4UL,0xF43DAA89CE8F9D4DLL,0xBF19C5951E3A4B9FLL,0xE0EA05DB0BE6F6EBLL,18446744073709551609UL,1UL},{0xC5DABB0892998137LL,18446744073709551611UL,18446744073709551615UL,1UL,18446744073709551607UL,0xF317043BEBC221F6LL}},{{0xBA88B05C5E7CFC8ELL,4UL,3UL,0x07A97E9CE892552BLL,5UL,0x4B5DF1EF3BB995AFLL},{1UL,0xBA88B05C5E7CFC8ELL,0x209C41B56AB63B21LL,0UL,8UL,18446744073709551615UL},{0x60DADA44061427EELL,0x95229BD1876565A8LL,18446744073709551609UL,0x38C0A4E7A549F0C9LL,1UL,0x07A97E9CE892552BLL},{0x95229BD1876565A8LL,18446744073709551615UL,0x8836129E778932A1LL,0x8836129E778932A1LL,18446744073709551615UL,0x95229BD1876565A8LL},{0x209C41B56AB63B21LL,18446744073709551612UL,18446744073709551611UL,0xF317043BEBC221F6LL,0UL,1UL},{0x254B57014F9A1E60LL,3UL,0x2C323A422A1BE60ALL,0xE0EA05DB0BE6F6EBLL,8UL,0xBF19C5951E3A4B9FLL}}};
    const unsigned *l_354 = &l_322[0];
    const unsigned **l_353 = &l_354;
    const unsigned ***l_352 = &l_353;
    int l_356 = 0x142506CCL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_47[i] = (-10L);
    for (i = 0; i < 1; i++)
        l_322[i] = 1UL;
    if ((func_41(l_47[1], (l_251[1][7][3] = (safe_add_func_int8_t_s_s((g_146 = (0x35L < (((*g_66) = func_50(((*g_66) = (p_37 = func_54(l_56))), (g_148[4][3] = 0x3D5AL), g_225)) == g_225))), p_36))), g_103, g_252[4][8][1], l_253) > p_34))
    {
        unsigned **l_256 = &g_225;
        unsigned ***l_255 = &l_256;
        int * const l_259 = &g_62;
        (*l_255) = &g_225;
        for (g_62 = 0; (g_62 != (-26)); --g_62)
        {
            (*g_260) = l_259;

            ;
            l_261--;
            (*g_68) = ((*p_35) = (*g_68));
            if (l_264)
                break;
        }

        ;
    }
    else
    {
        const short l_274[1] = {0x592DL};
        int l_278 = 0L;
        int **l_286 = &g_67;
        unsigned char *l_298 = &g_252[7][0][1];
        unsigned long long *l_303 = &l_261;
        int l_311 = 0x828DF365L;
        int l_312 = 2L;
        int l_313 = (-1L);
        int l_314 = 0L;
        int l_315 = 0L;
        long long l_316 = 0xDADD9A6624988E6ELL;
        int l_317 = 0x61428B24L;
        int l_318 = 0x98EF1BACL;
        int l_319 = 0x25802926L;
        int l_320[8] = {2L,2L,2L,2L,2L,2L,2L,2L};
        long long l_321[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int i;
        for (p_36 = (-21); (p_36 >= 21); p_36 = safe_add_func_int16_t_s_s(p_36, 8))
        {
            short l_273 = 0x584CL;
            int l_287 = 0x1454BE33L;
            int *l_293 = &g_39;
            for (g_122 = 13; (g_122 <= 56); ++g_122)
            {
                unsigned **l_269 = &g_225;
                unsigned ***l_272 = &l_269;
                const unsigned long long l_277 = 18446744073709551614UL;
                (*l_272) = l_269;
                if (l_273)
                {
                    l_278 &= (p_34 ^ ((func_41((*g_68), l_273, l_274[0], p_34, g_21) ^ (safe_add_func_int32_t_s_s(l_277, (*p_35)))) == 0xF2C9L));
                    (*p_35) = (*p_35);
                }
                else
                {
                    int l_285 = (-2L);
                    unsigned long long *l_289 = (void*)0;
                    unsigned long long *l_290 = (void*)0;
                    unsigned long long *l_291 = &l_261;
                    for (g_107 = 0; (g_107 <= 3); g_107 += 1)
                    {
                    }
                    for (l_264 = 0; (l_264 < 28); l_264 = safe_add_func_uint8_t_u_u(l_264, 5))
                    {
                        return (*g_260);


                    }
                    (*l_286) = func_54(func_50(p_35, func_41((((~0x64C937B7ED02BA2BLL) >= (safe_mod_func_uint32_t_u_u(4294967287UL, (safe_add_func_uint32_t_u_u(func_41(l_285, (l_287 = (&g_67 == l_286)), l_274[0], ((*l_291) = (safe_unary_minus_func_int64_t_s(g_21))), l_277), 0x9262CF15L))))) || p_34), p_36, g_107, p_36, l_292), l_293));


                }
                (*l_293) = (~(safe_lshift_func_uint8_t_u_s(2UL, 4)));
            }
            (*p_35) = ((p_34 | 0xBE79B3061134DBC5LL) != (&l_274[0] != l_244));
        }


        (*p_35) = (((void*)0 != l_245[2]) || (safe_mod_func_uint8_t_u_u((++(*l_298)), g_69)));
        (*p_35) = (~(l_278 ^ (0x7BL > (((safe_sub_func_uint16_t_u_u(((func_41((*p_35), ((l_303 == (void*)0) >= (l_274[0] & ((safe_rshift_func_int8_t_s_u(((-5L) == p_34), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(4L, g_122)), g_62)))) < 1L))), g_88, p_34, g_205) != g_122) >= 0x24BEAB7BL), 0x3899L)) && l_310) < 0x326D28A6E83F28C3LL))));
        l_322[0]++;
    }

    ;

    (*g_260) = func_54(p_37);

    ;
    for (g_95 = 0; (g_95 > (-17)); g_95 = safe_sub_func_int16_t_s_s(g_95, 2))
    {
        int l_333[8][10][3] = {{{0x43FE9FF8L,0L,0L},{0x12BDEA78L,0x80613362L,1L},{(-1L),(-1L),0xB34E7BD4L},{(-1L),(-6L),0x494368E3L},{0L,0x12BDEA78L,0x43FE9FF8L},{0xBBCE7E7FL,1L,0x2FEC3AA4L},{(-1L),0xBBCE7E7FL,0xAF09F1FFL},{0x215CE016L,0xE84EF8B8L,0L},{0xB34E7BD4L,0x80837693L,(-2L)},{0x12BDEA78L,0L,0x3FED448EL}},{{0x560D00AAL,0x8725E799L,1L},{0L,0x8725E799L,0x60333C6FL},{0x47122620L,0L,0x90C7987EL},{0L,0x80837693L,0L},{0x8725E799L,0xE84EF8B8L,0L},{(-6L),0xBBCE7E7FL,0xD10AD33CL},{0L,1L,0x43FE9FF8L},{0x90C7987EL,0xAF09F1FFL,0L},{0x80613362L,0xFDEF52C4L,0x80613362L},{0xE84EF8B8L,0x494368E3L,(-1L)}},{{(-2L),0xB7DA6FFCL,0x8FDDDCC9L},{0x02400B42L,0xD299265BL,0x184F68C7L},{0x60333C6FL,0xB34E7BD4L,0x6390AD62L},{0x02400B42L,0x2A75278EL,(-5L)},{(-2L),0xD10AD33CL,0x889C9659L},{0xE84EF8B8L,0x7B3AA694L,(-1L)},{0x80613362L,0L,(-6L)},{0x90C7987EL,0x02400B42L,0x93FF6E82L},{0L,0x12BDEA78L,1L},{(-6L),(-2L),0x2A75278EL}},{{0x8725E799L,0xDD709AE3L,(-1L)},{0L,0x1F365315L,0xE84EF8B8L},{0x47122620L,1L,0x93F7766EL},{0L,(-1L),0x93F7766EL},{0x560D00AAL,(-1L),0xE84EF8B8L},{0x12BDEA78L,(-1L),(-1L)},{0xB34E7BD4L,1L,0x2A75278EL},{(-1L),0L,0x8725E799L},{0x90C7987EL,0xFDEF52C4L,0x93F7766EL},{6L,0xDD709AE3L,0x2A75278EL}},{{0x2FEC3AA4L,0x47122620L,0x47122620L},{(-1L),0x2FEC3AA4L,(-6L)},{0x12BDEA78L,(-4L),0x60333C6FL},{0xE84EF8B8L,1L,0xB7DA6FFCL},{0L,0xBBCE7E7FL,0xDD709AE3L},{(-5L),1L,0L},{0x560D00AAL,(-4L),0x90C7987EL},{(-1L),0x2FEC3AA4L,0xFDEF52C4L},{0x09A82928L,0x47122620L,0x80613362L},{0x8FDDDCC9L,0xDD709AE3L,0xF763856BL}},{{0xBBCE7E7FL,0xFDEF52C4L,0x1F365315L},{0x93F7766EL,0L,0x6C644FDAL},{0L,0L,(-1L)},{1L,0L,0xB34E7BD4L},{(-1L),0x6390AD62L,0x93FF6E82L},{0L,(-2L),0L},{0L,1L,1L},{(-1L),0L,9L},{1L,0x889C9659L,0x215CE016L},{0L,9L,0xE84EF8B8L}},{{0x93F7766EL,0x184F68C7L,(-1L)},{0xBBCE7E7FL,0x98AD1224L,0L},{0x8FDDDCC9L,0x7B3AA694L,0x09A82928L},{0x09A82928L,0x09A82928L,0L},{(-1L),0x1F365315L,0L},{0x560D00AAL,(-1L),0x447B1F80L},{(-5L),0x8625C242L,1L},{0L,0x560D00AAL,0x447B1F80L},{0xE84EF8B8L,1L,0L},{0xAF09F1FFL,0x09A82928L,0xD299265BL}},{{0x60333C6FL,1L,0L},{(-5L),(-1L),(-1L)},{0xB34E7BD4L,0x02400B42L,0x60333C6FL},{0x8FDDDCC9L,6L,(-1L)},{(-1L),0x6390AD62L,0x447B1F80L},{0L,1L,0xD10AD33CL},{0xE84EF8B8L,0xD299265BL,0x8725E799L},{0x6C644FDAL,0x98AD1224L,1L},{0x447B1F80L,0x98AD1224L,9L},{0x93F7766EL,0xD299265BL,0L}}};
        int l_334 = 1L;
        int l_336[9][1][1] = {{{0xC23C86C2L}},{{0x7AAE4016L}},{{0xC23C86C2L}},{{0x7AAE4016L}},{{0xC23C86C2L}},{{0x7AAE4016L}},{{0xC23C86C2L}},{{0x7AAE4016L}},{{0xC23C86C2L}}};
        unsigned ***l_351 = &g_271;
        unsigned ****l_350 = &l_351;
        const unsigned l_355 = 0x0DC1FB2AL;
        int *l_358 = &l_336[5][0][0];
        int *l_360[10][1][6] = {{{&g_39,&l_334,&l_334,&g_39,&l_334,&l_334}},{{&g_39,&l_334,&l_334,&g_39,&l_334,&l_334}},{{&g_39,&l_334,&l_334,&g_39,&l_334,&l_334}},{{&g_39,&l_334,&l_334,&g_39,&l_334,&l_334}},{{&g_39,&l_334,&l_334,&g_39,&l_334,&l_334}},{{&g_39,&l_334,&l_334,&g_39,&l_334,&l_334}},{{&g_39,&l_334,&l_334,&g_39,&l_334,&l_334}},{{&g_39,&l_334,&l_334,&g_39,&l_334,&l_334}},{{&g_39,&l_334,&l_334,&g_39,&l_334,&g_39}},{{&l_334,&g_39,&g_39,&l_334,&g_39,&g_39}}};
        int i, j, k;
        if ((*g_68))
        {
            int l_329 = 0x67C6F24EL;
            for (p_34 = 0; (p_34 < 27); ++p_34)
            {
                if (l_329)
                    break;
            }
            for (l_253 = (-27); (l_253 >= 23); l_253 = safe_add_func_int16_t_s_s(l_253, 5))
            {
                return (*g_66);


            }
        }
        else
        {
            char l_332[3][5][4] = {{{1L,1L,0x83L,0x0BL},{0xB4L,0x2AL,0xB4L,0x83L},{0xB4L,0x83L,0x83L,0xB4L},{1L,0x83L,0x0BL,0x83L},{0x83L,0x2AL,0x0BL,0x0BL}},{{1L,1L,0x83L,0x0BL},{0xB4L,0x2AL,0xB4L,0x83L},{0xB4L,0x83L,0x83L,0xB4L},{1L,0x83L,0x0BL,0x83L},{0x83L,0x2AL,0x0BL,0x0BL}},{{1L,1L,0x83L,0x0BL},{0xB4L,0x2AL,0xB4L,0x83L},{0xB4L,0x83L,0x83L,0xB4L},{1L,0x83L,0x0BL,0x83L},{0x83L,0x2AL,0x0BL,0x0BL}}};
            int l_335 = 0L;
            int l_337 = (-1L);
            int l_338 = (-1L);
            int l_339 = 0x73489FC4L;
            int l_340 = (-8L);
            int l_341[7][10] = {{0xD21BD2DCL,(-1L),(-6L),0x0ED09C11L,0x8E91A2BFL,0x6BBA75F5L,0x8E91A2BFL,0x0ED09C11L,(-6L),(-1L)},{(-8L),6L,0L,1L,0x1886731CL,0x9AC35681L,0xAE89F30FL,(-6L),0x73C10BF9L,0x73C10BF9L},{6L,0xC0671A72L,0x9AC35681L,0x6BBA75F5L,0x6BBA75F5L,0x9AC35681L,0xC0671A72L,6L,6L,0L},{1L,0x73C10BF9L,0xAE89F30FL,0x0ED09C11L,0x1B1C92C5L,(-6L),0xC0671A72L,0L,0xC0671A72L,(-6L)},{0x6BBA75F5L,0x1B1C92C5L,0xAE89F30FL,0x1B1C92C5L,0x6BBA75F5L,0L,6L,0x0ED09C11L,0L,(-8L)},{6L,0x9AC35681L,(-8L),0L,0x8E91A2BFL,(-1L),(-1L),0x8E91A2BFL,0L,(-8L)},{0L,0L,0x73C10BF9L,(-8L),0x6BBA75F5L,0xD21BD2DCL,0x8E91A2BFL,0xAE89F30FL,0x1886731CL,(-6L)}};
            unsigned l_342 = 0x15219D6CL;
            int i, j, k;
            for (g_88 = 0; (g_88 <= 2); g_88 += 1)
            {
                int i, j;
                (*p_35) |= g_60[(g_88 + 4)][g_88];
                (*p_35) |= 0x2CD16F8AL;
            }
            --l_342;
        }
        (*p_35) &= 0x148FB7D6L;
        if (func_41(((safe_unary_minus_func_int32_t_s(func_41((*g_68), g_148[4][3], (g_349[3][4] = (safe_rshift_func_uint16_t_u_s(l_348[2][1][0], 3))), g_95, p_36))) | (((func_41((((*l_350) = &g_271) == l_352), l_336[7][0][0], l_355, l_356, g_21) && 0xE24FB3AEL) || 18446744073709551612UL) < l_336[6][0][0])), p_34, p_36, p_36, p_34))
        {
            int *l_357 = &l_334;
            l_336[5][0][0] ^= (*p_35);
            l_358 = &l_336[0][0][0];
        }
        else
        {
            int *l_359 = &l_356;
            p_37 = func_54(l_359);

            ;
            ;
            return (*g_260);


        }
        (*l_358) ^= (*p_35);
    }
    (*g_68) ^= (*p_35);
    return (*g_230);


}







static unsigned short func_41(int p_42, short p_43, const unsigned p_44, unsigned long long p_45, long long p_46)
{
    unsigned long long l_254 = 0UL;
    for (p_42 = 0; (p_42 <= 1); p_42 += 1)
    {
        return l_254;
    }
    return l_254;
}







static int * func_50(int * p_51, short p_52, int * p_53)
{
    short l_246 = 5L;
    unsigned char l_247 = 255UL;
    int l_248 = 0x36C3F1C7L;
    l_246 ^= (*p_53);
    (*p_53) = l_247;
    l_248 &= ((*p_53) &= l_246);
    return p_51;


}







static int * func_54(int * p_55)
{
    unsigned l_77 = 0x3F7CEC7EL;
    int * const l_82 = &g_69;
    int l_157 = 0x3DC7C683L;
    int l_162 = 0xED2A57F4L;
    int l_169 = 0xD805DE68L;
    int l_206 = 0xB66DA5D0L;
    int l_207 = 6L;
    int l_212[10][2] = {{0xB83B5214L,0L},{0xD023D6CAL,0L},{0xC8C352A3L,0xC8C352A3L},{0xB83B5214L,0xC8C352A3L},{0xC8C352A3L,0L},{0xD023D6CAL,0L},{0xB83B5214L,0xD023D6CAL},{0L,0L},{0L,0xD023D6CAL},{0xB83B5214L,0L}};
    unsigned short l_218[4][9][5] = {{{0x29FBL,1UL,0x91A9L,0xAF28L,0x3678L},{0xC3BEL,1UL,65532UL,0x851BL,65532UL},{0x35A5L,65531UL,0xE471L,0x07EBL,65533UL},{0xC3BEL,1UL,0x9232L,0x0BD5L,0x91A9L},{0x29FBL,0x851BL,4UL,0x29FBL,0xCFEEL},{0xC176L,0x6CDDL,1UL,0xE471L,65533UL},{0UL,0xE471L,65526UL,0x6D1EL,0x6105L},{0xDF60L,1UL,0xD01FL,65529UL,0x2AEEL},{0UL,0xFC6BL,65535UL,6UL,0x204AL}},{{0x07EBL,1UL,65535UL,3UL,0xD053L},{0x91A9L,0x7495L,0xD01FL,65535UL,1UL},{4UL,0x9232L,0UL,65532UL,0x91A9L},{0xFC6BL,0xBFC5L,0x7B4AL,0xE7BBL,0UL},{0x50DEL,0x07EBL,0x560BL,0x07EBL,0x50DEL},{0x001EL,0xFC6BL,4UL,0x6CCEL,0x07EBL},{0xFC6BL,0xD053L,65528UL,1UL,65532UL},{1UL,65529UL,0x0C96L,0xFC6BL,0x07EBL},{0x6CCEL,1UL,0x5598L,0x001EL,0x50DEL}},{{0x07EBL,65532UL,1UL,0x50DEL,0UL},{0xE7BBL,65526UL,0xAF28L,0xFC6BL,0x91A9L},{65532UL,0xE471L,1UL,4UL,1UL},{65535UL,65535UL,0xBFC5L,0x91A9L,0xD053L},{3UL,0x204AL,0UL,0x07EBL,0x204AL},{6UL,0x204AL,0x5598L,0UL,0x2AEEL},{65529UL,65535UL,0xD053L,0xDF60L,0x6105L},{0x7495L,0xE471L,65532UL,65535UL,8UL},{65535UL,65526UL,0x3C59L,0UL,1UL}},{{0xFC6BL,0x001EL,0x001EL,0xFC6BL,4UL},{0xE7BBL,65535UL,65531UL,0x204AL,8UL},{0xF3A6L,0x204AL,0xD053L,6UL,0x91A9L},{0x50DEL,0x3C1BL,0UL,0x204AL,65528UL},{65526UL,1UL,0UL,0xFC6BL,3UL},{65535UL,0x3678L,0xFFD3L,0UL,0xC176L},{0x9232L,6UL,0UL,0x2AEEL,0x5598L},{65535UL,0x07EBL,0x0C96L,0x50DEL,0x9232L},{4UL,1UL,0UL,0x7B4AL,1UL}}};
    unsigned char l_235 = 1UL;
    int i, j, k;
    for (g_39 = (-24); (g_39 != (-17)); g_39 = safe_add_func_int64_t_s_s(g_39, 1))
    {
        int *l_70 = (void*)0;
        int *l_71 = &g_69;
        int *l_72 = &g_62;
        int *l_73 = &g_69;
        int *l_74 = &g_69;
        int *l_75[7] = {&g_69,&g_69,&g_69,&g_69,&g_69,&g_69,&g_69};
        int l_76 = 0L;
        int l_105 = 0xE06DCF8EL;
        int l_200 = 0x35B5DD2DL;
        const char * const l_240 = &g_146;
        int i;
        for (g_62 = 0; (g_62 == 24); g_62 = safe_add_func_int32_t_s_s(g_62, 6))
        {
            int *l_65 = &g_39;
            (*g_66) = l_65;

            ;
            (*g_68) = (8L != g_39);
        }
        l_77--;
        if ((*l_74))
            break;
        for (l_77 = 0; (l_77 <= 6); l_77 += 1)
        {
            int *l_119 = &g_69;
            int l_155 = 0xBFB5A670L;
            int l_158 = 0x8A40D3F7L;
            int l_171 = (-6L);
            int l_172 = 0x3656F6DEL;
            char l_199[8][5][2] = {{{(-1L),0x67L},{(-7L),(-8L)},{0x1EL,(-8L)},{(-7L),0x67L},{(-1L),2L}},{{0x7FL,0x1EL},{0x02L,3L},{0x67L,(-2L)},{(-7L),0xFCL},{0L,0x7FL}},{{2L,0x67L},{0xD6L,3L},{0xFCL,(-6L)},{0x02L,7L},{(-1L),(-1L)}},{{2L,0xFCL},{0xFDL,(-8L)},{7L,(-2L)},{0xD6L,0xB0L},{(-6L),7L}},{{(-6L),0xB0L},{0xFCL,0xA0L},{0xB0L,0x20L},{0L,0L},{(-1L),(-8L)}},{{(-8L),0xB0L},{0x1EL,0xC2L},{0L,0xECL},{0xFCL,0x7FL},{(-1L),(-6L)}},{{7L,0L},{1L,0xA0L},{0x7FL,0xECL},{0x1EL,0x75L},{(-6L),(-1L)}},{{(-8L),0x7FL},{1L,0x20L},{0x75L,0x20L},{1L,0x7FL},{(-8L),(-1L)}}};
            short l_208 = (-10L);
            int l_210 = (-8L);
            int l_211[3];
            char *l_241 = &l_199[6][1][1];
            unsigned *l_242 = &g_107;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_211[i] = 0xAD26139DL;
        }
    }
    return p_55;


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
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_60[i][j], "g_60[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_125, "g_125", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_148[i][j], "g_148[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_205, "g_205", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_252[i][j][k], "g_252[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_349[i][j], "g_349[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_406, "g_406", print_hash_value);
    transparent_crc(g_409, "g_409", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_527[i][j][k], "g_527[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_531, "g_531", print_hash_value);
    transparent_crc(g_533, "g_533", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_847, "g_847", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_869[i][j], "g_869[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_949, "g_949", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_959[i], "g_959[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_968, "g_968", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1231, "g_1231", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1324[i], "g_1324[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1336, "g_1336", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
