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



static unsigned g_5 = 0x125D16DFL;
static short g_14 = 0x39CBL;
static unsigned g_18 = 0x05732AA6L;
static unsigned short g_61 = 0x171CL;
static int g_84[2][6][1] = {{{0L},{(-5L)},{0L},{(-5L)},{0L},{(-5L)}},{{0L},{(-5L)},{0L},{(-5L)},{0L},{(-5L)}}};
static int *g_83 = &g_84[0][4][0];
static short g_96 = 0xB27FL;
static int **g_99[2] = {&g_83,&g_83};
static int g_115 = (-1L);
static unsigned char g_122 = 1UL;
static unsigned char g_132 = 0x94L;
static unsigned g_137 = 4294967289UL;
static int ***g_165[10] = {&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1],&g_99[1]};
static unsigned short g_178[7][4] = {{0xC32FL,0xC32FL,0xC32FL,0xC32FL},{0xC32FL,0xC32FL,0xC32FL,0xC32FL},{0xC32FL,0xC32FL,0xC32FL,0xC32FL},{0xC32FL,0xC32FL,0xC32FL,0xC32FL},{0xC32FL,0xC32FL,0xC32FL,0xC32FL},{0xC32FL,0xC32FL,0xC32FL,0xC32FL},{0xC32FL,0xC32FL,0xC32FL,0xC32FL}};
static int g_182 = 0L;
static short g_214 = 0xC4A4L;
static char g_219[7][8][4] = {{{0x12L,0x12L,0xDFL,0L},{0x7AL,(-1L),0x8EL,0x1AL},{0x47L,0x29L,(-5L),0x8EL},{(-3L),0x29L,0x9DL,0x1AL},{0x29L,(-1L),(-1L),0L},{0x5CL,0x12L,0L,0L},{0xF5L,0L,(-4L),(-6L)},{0L,0x34L,0L,0L}},{{0L,0x7AL,0x34L,(-2L)},{0xF5L,0L,(-6L),0xF5L},{0x2BL,0x47L,(-1L),0x5FL},{0L,4L,0xE4L,(-9L)},{(-3L),(-6L),0L,(-1L)},{0x1AL,(-2L),0x8EL,0x5FL},{(-7L),0x1AL,(-7L),(-1L)},{0x12L,0L,0x64L,4L}},{{(-1L),(-7L),0L,0L},{(-1L),9L,0L,0xC4L},{(-1L),0L,0x64L,0L},{0x12L,(-5L),(-7L),0L},{(-7L),0L,0x8EL,0x47L},{0x1AL,0x29L,0L,(-10L)},{(-3L),(-7L),0xDEL,0x8DL},{(-7L),0x2BL,0x34L,0x5CL}},{{0x5FL,(-10L),0x9CL,0x1AL},{9L,0L,1L,0x12L},{0x47L,0L,(-7L),(-2L)},{0x1AL,(-1L),(-1L),0L},{9L,(-2L),(-2L),9L},{0L,0x8DL,0x34L,0xE4L},{0x7AL,0L,(-2L),(-6L)},{0x29L,(-5L),0x8EL,(-6L)}},{{0x89L,0L,(-1L),0xE4L},{(-1L),0x8DL,0x31L,9L},{(-10L),(-2L),0x47L,0L},{0xC4L,(-1L),0xE4L,(-2L)},{0x2BL,0L,0x9DL,0x12L},{(-6L),0L,0x47L,0x1AL},{0x8EL,(-10L),(-9L),0x5CL},{(-1L),0x2BL,(-7L),0x8DL}},{{0x8DL,(-7L),0x8EL,0xF5L},{0L,0x7AL,0xDEL,0x89L},{0x7AL,0x2BL,(-4L),0x2BL},{0x5FL,0x8EL,(-2L),0x1AL},{0x34L,0L,1L,(-5L)},{0x1AL,0L,0xDFL,4L},{0x1AL,0xCAL,0x31L,0x8EL},{0xDFL,(-5L),0L,0xDFL}},{{(-2L),0x34L,0x7AL,0L},{(-1L),0xF7L,0L,0L},{0x7EL,0xE4L,(-2L),1L},{0x34L,0x8EL,0x29L,0L},{0x5CL,(-4L),0xCAL,(-7L)},{(-2L),(-5L),(-7L),0xF7L},{0L,0x5CL,0L,(-5L)},{0L,0x31L,0x64L,0xE4L}}};
static volatile short g_227 = 0x0C3EL;
static char g_301 = (-2L);
static short *g_403 = &g_214;
static short **g_402 = &g_403;
static unsigned *g_431 = (void*)0;
static unsigned **g_430 = &g_431;
static unsigned g_433 = 0x7BA86002L;
static volatile unsigned char *g_482 = (void*)0;
static volatile unsigned short g_505 = 65535UL;
static volatile unsigned short *g_504 = &g_505;
static int *g_523 = (void*)0;
static short g_529 = 3L;
static short ***g_545 = (void*)0;
static unsigned short g_587 = 0xE29FL;
static char g_599 = 1L;
static volatile unsigned g_620 = 0xD1C30F77L;
static unsigned char g_661 = 0x80L;



static char func_1(void);
static unsigned * func_6(unsigned * p_7, unsigned * p_8, unsigned * p_9, unsigned * p_10);
static unsigned * func_11(unsigned char p_12, unsigned p_13);
static unsigned func_15(unsigned p_16);
static unsigned func_26(int p_27, unsigned * p_28, unsigned * p_29, char p_30);
static int func_40(unsigned * p_41, unsigned * p_42, unsigned * p_43, int p_44, char p_45);
static unsigned * func_46(unsigned short p_47, char p_48);
static unsigned char func_49(unsigned char p_50, int p_51, unsigned * p_52);
static unsigned * func_70(unsigned * p_71);
static unsigned ** func_74(unsigned ** p_75, unsigned p_76);
static char func_1(void)
{
    unsigned *l_4 = &g_5;
    unsigned *l_17 = &g_18;
    unsigned char *l_513 = &g_132;
    int l_518 = (-7L);
    unsigned *l_551 = (void*)0;
    unsigned *l_625 = &g_137;
    int *l_650 = &g_182;
    if ((safe_add_func_uint32_t_u_u(((*l_4) = 5UL), ((l_625 = func_6(func_11(g_14, (g_14 & (func_15((l_17 == (void*)0)) && (safe_sub_func_uint32_t_u_u(((l_513 != l_513) & (safe_mod_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(((&g_431 == (void*)0) | l_518), l_518)), 0x631EL))), l_518))))), l_551, g_523, g_431)) == l_17))))
    {
        int **l_626 = &g_83;
        unsigned *l_627 = &g_5;
        (*l_626) = &l_518;
        (*l_626) = func_6(l_551, l_627, func_6((g_431 = &g_5), func_6(&g_18, l_551, l_627, l_627), l_627, &g_5), l_627);
    }
    else
    {
        int *l_638 = (void*)0;
        int l_640 = (-6L);
        for (g_5 = 0; (g_5 < 11); ++g_5)
        {
            unsigned char *l_635 = &g_132;
            int ****l_639 = &g_165[5];
            int l_644 = 0xA64A1A8EL;
            short **l_652 = &g_403;
            for (g_214 = 0; (g_214 <= 1); g_214 += 1)
            {
                unsigned l_632 = 1UL;
                unsigned char *l_636 = (void*)0;
                int *l_637[3];
                unsigned char l_667 = 0x44L;
                int **l_680[7];
                int *l_681 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_637[i] = &l_518;
                for (i = 0; i < 7; i++)
                    l_680[i] = &g_83;
                l_638 = func_46((safe_rshift_func_uint8_t_u_s(g_84[0][4][0], (l_632 ^ (g_182 == (safe_mul_func_uint8_t_u_u(g_214, g_115)))))), (~((l_518 = (0xDFL != ((((l_635 == l_636) == l_518) == 0xCCL) > 7UL))) && l_518)));
                l_640 = ((void*)0 != l_639);
                for (g_115 = 0; (g_115 <= 1); g_115 += 1)
                {
                    unsigned l_643 = 3UL;
                    short ***l_653 = &l_652;
                    short ***l_654[8][2][5] = {{{&g_402,&g_402,&g_402,&g_402,&g_402},{(void*)0,&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,&g_402,&g_402,&g_402},{&g_402,&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,(void*)0,&g_402,&g_402},{&g_402,&g_402,&g_402,&g_402,(void*)0}},{{&g_402,&g_402,&g_402,&g_402,&g_402},{&g_402,&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,&g_402,&g_402,&g_402},{(void*)0,&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,(void*)0,&g_402,&g_402},{&g_402,&g_402,&g_402,&g_402,&g_402}},{{&g_402,&g_402,&g_402,&g_402,&g_402},{&g_402,&g_402,&g_402,&g_402,(void*)0}},{{&g_402,&g_402,&g_402,&g_402,&g_402},{&g_402,&g_402,&g_402,&g_402,&g_402}}};
                    unsigned char l_674 = 1UL;
                    int *l_678 = (void*)0;
                    int i, j, k;
                }
                l_681 = l_638;
            }
            return g_18;
        }
        (*l_650) = (*l_650);
    }
    l_650 = &l_518;
    return g_182;
}







static unsigned * func_6(unsigned * p_7, unsigned * p_8, unsigned * p_9, unsigned * p_10)
{
    unsigned short l_554 = 0x2BAAL;
    int *l_556 = &g_182;
    unsigned char l_574[3][6] = {{255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL},{255UL,255UL,255UL,255UL,255UL,255UL}};
    int *l_590[6];
    unsigned l_610 = 0x9B02FB52L;
    short ***l_615 = &g_402;
    unsigned l_622 = 18446744073709551615UL;
    int i, j;
    for (i = 0; i < 6; i++)
        l_590[i] = &g_182;
    for (g_122 = (-30); (g_122 >= 15); g_122 = safe_add_func_int16_t_s_s(g_122, 9))
    {
        int *l_557[10][3][1] = {{{&g_182},{&g_182},{&g_182}},{{&g_84[0][4][0]},{&g_182},{&g_84[0][4][0]}},{{&g_182},{&g_182},{&g_182}},{{&g_84[0][4][0]},{&g_182},{&g_84[0][4][0]}},{{&g_182},{&g_182},{&g_182}},{{&g_84[0][4][0]},{&g_182},{&g_84[0][4][0]}},{{&g_182},{&g_182},{&g_182}},{{&g_84[0][4][0]},{&g_182},{&g_84[0][4][0]}},{{&g_182},{&g_182},{&g_182}},{{&g_84[0][4][0]},{&g_182},{&g_84[0][4][0]}}};
        unsigned l_575[10] = {0x05961A09L,0x05961A09L,0x05961A09L,0x05961A09L,0x05961A09L,0x05961A09L,0x05961A09L,0x05961A09L,0x05961A09L,0x05961A09L};
        unsigned short l_607 = 0xE43AL;
        int l_621 = 0xD7BC48B4L;
        unsigned short l_623 = 0x75C0L;
        short l_624 = 0x16A2L;
        int i, j, k;
    }
    return &g_18;
}







static unsigned * func_11(unsigned char p_12, unsigned p_13)
{
    int *l_519 = &g_182;
    int **l_520[2];
    int *l_521[7] = {(void*)0,&g_84[1][1][0],(void*)0,(void*)0,&g_84[1][1][0],(void*)0,(void*)0};
    int *l_522 = &g_84[1][0][0];
    int *l_524[8][1][9] = {{{&g_84[1][3][0],(void*)0,&g_84[0][4][0],(void*)0,&g_84[1][3][0],&g_84[0][0][0],&g_84[0][5][0],(void*)0,&g_84[1][3][0]}},{{&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0],&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0],&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0]}},{{&g_84[0][5][0],(void*)0,&g_84[1][3][0],(void*)0,&g_84[0][5][0],(void*)0,&g_84[0][5][0],(void*)0,&g_84[1][3][0]}},{{&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0],&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0],&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0]}},{{&g_84[0][5][0],(void*)0,&g_84[1][3][0],(void*)0,&g_84[0][5][0],(void*)0,&g_84[0][5][0],(void*)0,&g_84[1][3][0]}},{{&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0],&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0],&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0]}},{{&g_84[0][5][0],(void*)0,&g_84[1][3][0],(void*)0,&g_84[0][5][0],(void*)0,&g_84[0][5][0],(void*)0,&g_84[1][3][0]}},{{&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0],&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0],&g_84[1][2][0],&g_84[1][2][0],&g_84[0][4][0]}}};
    unsigned char *l_527 = &g_132;
    unsigned char *l_528[4] = {&g_122,&g_122,&g_122,&g_122};
    unsigned l_534 = 1UL;
    short *l_548 = &g_96;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_520[i] = &g_83;
    l_522 = (l_521[6] = l_519);
    l_524[2][0][3] = g_523;
    if ((safe_lshift_func_int8_t_s_s(g_84[1][3][0], ((g_529 = ((*l_527) = g_137)) | (safe_mul_func_int16_t_s_s(((5L & p_13) && p_12), ((p_12 != (**g_402)) < (safe_sub_func_int16_t_s_s(((p_12 != (l_534 & (-2L))) < p_13), (*g_403))))))))))
    {
        unsigned l_538 = 5UL;
        char *l_539 = &g_219[5][1][2];
        unsigned *l_540 = &g_18;
        int *l_541[1][10][9] = {{{&g_84[0][4][0],&g_84[0][0][0],&g_84[0][4][0],&g_84[0][2][0],(void*)0,(void*)0,&g_84[0][2][0],&g_84[0][4][0],&g_84[0][0][0]},{&g_84[0][4][0],&g_84[0][0][0],&g_84[0][4][0],&g_84[0][4][0],(void*)0,&g_84[0][5][0],&g_84[0][4][0],&g_84[0][4][0],(void*)0},{&g_84[0][2][0],&g_84[0][0][0],&g_182,&g_84[0][4][0],(void*)0,(void*)0,&g_84[0][4][0],&g_84[0][4][0],&g_182},{(void*)0,&g_84[0][4][0],(void*)0,&g_84[1][4][0],(void*)0,(void*)0,&g_84[1][4][0],(void*)0,&g_84[0][4][0]},{&g_84[0][5][0],&g_84[0][4][0],&g_84[0][5][0],(void*)0,(void*)0,&g_84[0][3][0],(void*)0,(void*)0,&g_84[0][4][0]},{&g_84[1][4][0],&g_84[0][4][0],(void*)0,&g_84[0][5][0],(void*)0,&g_84[0][0][0],&g_84[0][5][0],(void*)0,&g_182},{(void*)0,&g_84[0][4][0],(void*)0,&g_84[1][4][0],(void*)0,(void*)0,&g_84[1][4][0],(void*)0,&g_84[0][4][0]},{&g_84[0][5][0],&g_84[0][4][0],&g_84[0][5][0],(void*)0,(void*)0,&g_84[0][3][0],(void*)0,(void*)0,&g_84[0][4][0]},{&g_84[1][4][0],&g_84[0][4][0],(void*)0,&g_84[0][5][0],(void*)0,&g_84[0][0][0],&g_84[0][5][0],(void*)0,&g_182},{(void*)0,&g_84[0][4][0],(void*)0,&g_84[1][4][0],(void*)0,(void*)0,&g_84[1][4][0],(void*)0,&g_84[0][4][0]}}};
        int i, j, k;
        l_541[0][8][5] = func_46((((safe_mul_func_int16_t_s_s(func_49((((*l_539) = l_538) != ((*g_403) ^ (((((+p_13) && 0L) | (*g_504)) <= l_538) & p_12))), g_182, l_540), 0x3DB7L)) & 1L) | p_13), p_13);
        for (p_12 = 0; (p_12 <= 3); p_12 += 1)
        {
            unsigned ***l_542 = &g_430;
            (*l_542) = &g_431;
            (*l_522) = ((0xB2L ^ p_12) > ((*l_540) = (0x21L <= (safe_add_func_int16_t_s_s((((*g_403) = p_12) | (*l_522)), p_12)))));
            return l_524[0][0][3];
        }
        (*l_522) = (((g_545 = &g_402) == &g_402) || p_12);
    }
    else
    {
        short *l_549[1][10][5] = {{{(void*)0,&g_214,&g_529,&g_14,&g_529},{&g_214,&g_214,(void*)0,&g_214,&g_214},{&g_529,&g_14,&g_529,&g_214,(void*)0},{&g_214,&g_529,&g_529,&g_214,&g_529},{(void*)0,&g_14,&g_214,&g_14,(void*)0},{&g_529,&g_214,&g_529,&g_529,&g_214},{(void*)0,&g_214,&g_214,&g_214,&g_214},{&g_529,&g_529,&g_214,&g_529,&g_529},{&g_214,&g_214,&g_214,&g_214,&g_529},{&g_529,(void*)0,(void*)0,&g_529,(void*)0}}};
        unsigned *l_550 = (void*)0;
        int i, j, k;
        (*l_522) = (9UL == (0xA7L <= ((((p_13 <= g_178[3][3]) > p_13) && (safe_mul_func_uint8_t_u_u(func_26((((*g_402) = l_548) != l_549[0][0][1]), l_522, l_550, p_12), 250UL))) && 0xB6C0L)));
    }
    return l_521[6];
}







static unsigned func_15(unsigned p_16)
{
    unsigned char l_33 = 255UL;
    unsigned short l_60 = 0xE823L;
    int l_426[1];
    int l_427 = (-1L);
    unsigned *l_496 = &g_137;
    int *l_500[3];
    int **l_509[2];
    int *l_510 = &g_84[1][4][0];
    int i;
    for (i = 0; i < 1; i++)
        l_426[i] = 0x58418CE8L;
    for (i = 0; i < 3; i++)
        l_500[i] = &l_427;
    for (i = 0; i < 2; i++)
        l_509[i] = &g_83;
    for (g_18 = 14; (g_18 != 54); g_18++)
    {
        char l_23 = 3L;
        unsigned char l_59 = 6UL;
        unsigned *l_200 = &g_18;
        int *l_425 = &g_182;
        short l_472 = 5L;
        if ((~((safe_mul_func_uint16_t_u_u((0x7001L < g_14), l_23)) | (+(safe_add_func_int8_t_s_s((func_26((l_427 = ((safe_lshift_func_uint16_t_u_s((l_33 | ((l_426[0] = ((*l_425) = (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(func_40(func_46(l_23, (func_49(((0x32L == ((safe_sub_func_int16_t_s_s(((safe_add_func_uint32_t_u_u((0x29L <= (l_59 = p_16)), p_16)) < 0xC3E5F885L), 0x8323L)) >= l_60)) <= 0UL), g_61, &g_18) != 0x42L)), l_200, l_200, p_16, l_60), 0xDAB5C596L)), 1UL)), 0x2965L)))) > p_16)), 0)) != 1L)), &g_18, &g_18, p_16) <= l_472), 0xE9L))))))
        {
            if (p_16)
                break;
        }
        else
        {
            unsigned char l_473 = 255UL;
            unsigned *l_478[2];
            char l_484 = 0L;
            int i;
            for (i = 0; i < 2; i++)
                l_478[i] = &g_137;
            if (l_473)
                break;
            if (p_16)
                break;
            for (l_427 = 0; (l_427 >= 4); l_427 = safe_add_func_uint32_t_u_u(l_427, 3))
            {
                unsigned short l_479[7] = {0x33A7L,0x33A7L,0x33A7L,0x33A7L,0x33A7L,0x33A7L,0x33A7L};
                unsigned l_480 = 18446744073709551615UL;
                unsigned char *l_481 = &g_132;
                unsigned char *l_483[4] = {&l_33,&l_33,&l_33,&l_33};
                int i;
            }
        }
        if (l_426[0])
            continue;
    }
    for (g_132 = 0; (g_132 <= 43); g_132++)
    {
        unsigned char l_494[5];
        unsigned *l_495 = &g_137;
        int *l_497 = &l_426[0];
        int i;
        for (i = 0; i < 5; i++)
            l_494[i] = 255UL;
        (*l_497) = (safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(0L, (g_18 >= ((l_494[4] & func_40(l_495, l_495, l_496, l_426[0], g_61)) == g_18)))) != g_132), 0xA14AL));
        for (l_60 = 22; (l_60 >= 45); ++l_60)
        {
            unsigned short l_501 = 0xE860L;
            unsigned *l_502 = &g_18;
            unsigned **l_503 = &g_431;
            int **l_506 = &g_83;
            int **l_507 = (void*)0;
            int **l_508[2];
            int i;
            for (i = 0; i < 2; i++)
                l_508[i] = &l_497;
            l_500[0] = &l_426[0];
        }
        if ((*l_497))
            break;
        if (p_16)
            break;
    }
    l_510 = &l_426[0];
    return p_16;
}







static unsigned func_26(int p_27, unsigned * p_28, unsigned * p_29, char p_30)
{
    unsigned *l_429 = &g_18;
    unsigned **l_428 = &l_429;
    unsigned *l_432[2][4] = {{&g_433,&g_433,&g_433,&g_433},{&g_433,&g_433,(void*)0,&g_433}};
    unsigned ***l_434 = &g_430;
    unsigned char l_435 = 8UL;
    short l_442 = 0x6A4AL;
    int l_443 = 0x67E31A61L;
    int *l_444 = &g_84[1][0][0];
    unsigned l_471[9][7][4] = {{{0xB1D07667L,0UL,0x6947C06BL,0xAC3DCB07L},{7UL,0x82DD4AD8L,0xE6CA02F0L,0xA2894C2EL},{0xA2894C2EL,0xB1D07667L,0UL,0xB1D07667L},{0x9744CDEBL,1UL,0x0C252F89L,8UL},{18446744073709551607UL,0xD64F1DF2L,18446744073709551615UL,0UL},{1UL,5UL,18446744073709551608UL,0UL},{1UL,7UL,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551607UL,0UL,0x0C252F89L,0x6947C06BL},{0x9744CDEBL,18446744073709551608UL,0UL,0x7AD1E282L},{0xA2894C2EL,0xCF23DB82L,0xE6CA02F0L,1UL},{7UL,0x7A1D36FDL,0x6947C06BL,8UL},{0xB1D07667L,18446744073709551615UL,5UL,0x6860DCBFL},{0x7A1D36FDL,1UL,18446744073709551608UL,0UL},{1UL,0x9744CDEBL,0x7A1D36FDL,0xAA2DB966L}},{{0UL,0UL,2UL,2UL},{0UL,0UL,18446744073709551615UL,1UL},{1UL,0xBE5443D2L,0xAC3DCB07L,0x2E403100L},{0x12C8D5EFL,0xB1D07667L,0xC825F862L,0xAC3DCB07L},{0x2C617D1CL,0xB1D07667L,5UL,0x2E403100L},{0xB1D07667L,0xBE5443D2L,0x1A827954L,1UL},{0xCF23DB82L,0UL,18446744073709551607UL,2UL}},{{2UL,0x7A1D36FDL,0x7AD1E282L,0xA2894C2EL},{0x1A827954L,8UL,0xAA2DB966L,0xD64F1DF2L},{1UL,0x12A5DED1L,0x6947C06BL,0xBE5443D2L},{0xE6CA02F0L,0UL,1UL,0xAC3DCB07L},{0xBE5443D2L,0x6860DCBFL,0xB1D07667L,0x12A5DED1L},{0UL,0x2C617D1CL,0x1A827954L,18446744073709551615UL},{1UL,0x1A827954L,1UL,0UL}},{{0x12A5DED1L,0x7A1D36FDL,0xA2894C2EL,0xC825F862L},{0x73552851L,0x1A573B29L,0xA51754D4L,0x7A1D36FDL},{1UL,2UL,0xA51754D4L,18446744073709551612UL},{0x73552851L,1UL,0xA2894C2EL,0xAC3DCB07L},{0x12A5DED1L,5UL,1UL,18446744073709551615UL},{1UL,18446744073709551615UL,0x1A827954L,1UL},{0UL,0x73552851L,0xB1D07667L,1UL}},{{0xBE5443D2L,0x7A1D36FDL,1UL,0UL},{0xE6CA02F0L,0x12C8D5EFL,0x6947C06BL,5UL},{1UL,18446744073709551612UL,0xAA2DB966L,0x2C617D1CL},{0x1A827954L,0x7AD1E282L,0x73552851L,7UL},{5UL,0UL,0UL,5UL},{0x7AD1E282L,0xD64F1DF2L,0x2E403100L,0xA51754D4L},{2UL,18446744073709551612UL,0xC825F862L,0x73552851L}},{{18446744073709551615UL,0xAA2DB966L,0xE6CA02F0L,0x73552851L},{0x2C617D1CL,18446744073709551612UL,7UL,0xA51754D4L},{0x0C252F89L,0xD64F1DF2L,0UL,5UL},{0x12A5DED1L,0UL,0x12C8D5EFL,7UL},{0x7A1D36FDL,0x7AD1E282L,0xA2894C2EL,18446744073709551615UL},{0UL,0x7A1D36FDL,0x2E403100L,0xC7340A80L},{0xA2894C2EL,0x2C617D1CL,0x7AD1E282L,8UL}},{{1UL,0xAA2DB966L,0x1A827954L,0x1A573B29L},{2UL,0xBE5443D2L,0x82DD4AD8L,0x0C252F89L},{0x0C252F89L,1UL,0x9744CDEBL,1UL},{18446744073709551615UL,0xC825F862L,8UL,7UL},{0xD64F1DF2L,1UL,0UL,0x7A1D36FDL},{0xC825F862L,5UL,0x2E403100L,0xAA2DB966L},{0xC825F862L,2UL,0UL,0xE6CA02F0L}},{{0xD64F1DF2L,0xAA2DB966L,8UL,0x1A827954L},{18446744073709551615UL,0x2E403100L,0x9744CDEBL,0x6947C06BL},{0x0C252F89L,18446744073709551615UL,0x82DD4AD8L,0x8A9A34BCL},{2UL,0xA2894C2EL,0x1A827954L,7UL},{1UL,0UL,0x7AD1E282L,1UL},{0xA2894C2EL,0x8A9A34BCL,0x2E403100L,0xAC3DCB07L},{0xD64F1DF2L,7UL,1UL,0x0C252F89L}}};
    int i, j, k;
    (*l_444) = ((((l_428 != ((*l_434) = &l_429)) < l_435) >= ((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((!((**g_402) | g_178[3][3])) && g_301), (l_443 = (((safe_sub_func_int32_t_s_s(l_435, 1UL)) > l_442) >= 0xFFL)))), p_27)) | g_61)) && l_442);
    for (g_122 = 0; (g_122 >= 25); ++g_122)
    {
        unsigned ****l_449 = &l_434;
        int l_452[2];
        unsigned char l_463 = 0xC7L;
        unsigned short *l_464 = &g_178[3][3];
        int i;
        for (i = 0; i < 2; i++)
            l_452[i] = (-6L);
        l_444 = &l_443;
        (*l_444) = 0xE7A088DFL;
        p_27 = ((safe_add_func_int16_t_s_s(((void*)0 != l_449), p_27)) > ((*l_464) = ((safe_sub_func_uint32_t_u_u(l_452[1], (((*l_444) ^ (((l_452[1] & (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(((*l_444) <= ((*g_403) = (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_452[1], 2)), 4)), 3)))), l_463)) ^ 0UL), 0xA3A6B289L))) > 0UL) == g_84[0][4][0])) == 249UL))) || l_452[1])));
        for (l_443 = 17; (l_443 > (-21)); l_443--)
        {
            int *l_467 = &g_84[1][4][0];
            int **l_468 = &l_444;
            (*l_467) = 4L;
            (*l_468) = l_467;
            (**l_468) = (safe_lshift_func_int16_t_s_u(p_30, 1));
            for (g_115 = 0; (g_115 <= 3); g_115 += 1)
            {
                for (g_214 = 3; (g_214 >= 0); g_214 -= 1)
                {
                    int i, j;
                    if (g_178[(g_115 + 2)][g_214])
                        break;
                }
            }
        }
    }
    return l_471[8][6][0];
}







static int func_40(unsigned * p_41, unsigned * p_42, unsigned * p_43, int p_44, char p_45)
{
    int l_228 = (-8L);
    int *l_231 = &g_84[0][3][0];
    int *l_265 = &g_84[0][4][0];
    int l_337 = 1L;
    unsigned *l_389 = &g_137;
    unsigned **l_388 = &l_389;
    unsigned ***l_387 = &l_388;
    short **l_404 = &g_403;
    short **l_406[5];
    int i;
    for (i = 0; i < 5; i++)
        l_406[i] = (void*)0;
    for (g_115 = 0; (g_115 <= 0); g_115 += 1)
    {
        unsigned char l_220 = 255UL;
        int l_229 = 1L;
        unsigned l_281 = 8UL;
        unsigned *l_383 = (void*)0;
        unsigned **l_382 = &l_383;
        unsigned ***l_381 = &l_382;
        unsigned l_422[5];
        int i;
        for (i = 0; i < 5; i++)
            l_422[i] = 0x53E39D04L;
        for (p_44 = 0; (p_44 >= 0); p_44 -= 1)
        {
            unsigned short *l_201 = &g_61;
            int **l_202 = &g_83;
            short *l_211 = &g_96;
            short *l_212 = (void*)0;
            short *l_213 = &g_214;
            int l_217[3];
            char *l_218 = &g_219[6][5][1];
            unsigned *l_236[1][1];
            int *l_336[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i, j;
            for (i = 0; i < 3; i++)
                l_217[i] = 0x04CDBB5AL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_236[i][j] = &g_137;
            }
            (*l_202) = func_46(((*l_201) = g_178[3][3]), g_182);
        }
        for (g_137 = 0; (g_137 <= 0); g_137 += 1)
        {
            short **l_344 = (void*)0;
            int l_353 = 0L;
            char l_415 = (-10L);
            int *l_421 = (void*)0;
            if ((l_337 = ((*l_265) = p_45)))
            {
                unsigned char *l_348 = &l_220;
                int *l_351 = &l_337;
                (*l_231) = (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(((void*)0 == l_344), p_45)) & (g_84[0][4][0] >= (l_229 = ((*l_348) = (p_45 != (p_44 <= (safe_unary_minus_func_int16_t_s((g_178[3][3] | (!g_132)))))))))), ((safe_rshift_func_uint16_t_u_u((((*l_351) = (p_45 || p_44)) < 0x5C429B6AL), 8)) > p_45))) >= 0x7FL), 6UL));
                if (p_44)
                    continue;
                if (p_45)
                    break;
            }
            else
            {
                unsigned short l_352 = 0x900BL;
                (*l_231) = 0xD26692E6L;
                (*l_265) = p_44;
                (*l_231) = l_352;
                p_44 = ((*l_231) = (~l_353));
            }
            for (p_45 = 0; (p_45 <= 3); p_45 += 1)
            {
                short *l_372 = &g_214;
                unsigned char *l_373 = &g_122;
                int *l_380 = &l_353;
                int i, j, k;
                g_84[g_137][(p_45 + 2)][g_115] = (safe_add_func_int32_t_s_s((((*l_373) = ((((*l_372) = (((((safe_rshift_func_int8_t_s_u(((safe_mod_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((g_84[g_137][(g_115 + 1)][g_137] | (~0x42F59FF7L)), g_178[(p_45 + 3)][p_45])), (safe_add_func_uint8_t_u_u(g_182, (((+l_281) && g_301) >= g_84[0][4][0]))))), g_227)), (safe_sub_func_uint16_t_u_u(l_220, g_301)))), g_178[6][3])) != g_178[3][3]), p_45)) == 0UL) < 0UL) != 0x091CL) > (-10L))) != 8L) == l_353)) | 0x95L), (*l_231)));
                (*l_380) = ((*l_265) = (((!(safe_mul_func_int16_t_s_s(((safe_add_func_int32_t_s_s(0L, 0xD489A5C8L)) != p_44), p_45))) && (l_281 | (safe_rshift_func_int16_t_s_s((g_214 = g_132), 6)))) || g_227));
                if ((g_122 | 0xE453L))
                {
                    for (p_44 = 3; (p_44 >= 0); p_44 -= 1)
                    {
                        unsigned ****l_384 = &l_381;
                        unsigned ***l_386 = &l_382;
                        unsigned ****l_385[3];
                        int **l_390 = &g_83;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_385[i] = &l_386;
                        (*l_380) = 0xF41B2F46L;
                        (*l_390) = func_46((((((*l_384) = l_381) == (l_387 = &l_382)) <= l_353) > ((l_229 = g_122) && g_301)), p_45);
                        (*l_390) = &l_337;
                        if (l_281)
                            continue;
                    }
                }
                else
                {
                    return (*l_231);
                }
            }
            if ((*l_265))
            {
                unsigned short l_391 = 0x7AE9L;
                if (l_391)
                    break;
                p_44 = (safe_mul_func_int8_t_s_s((!l_353), (safe_add_func_int16_t_s_s(((*g_403) = (safe_rshift_func_uint16_t_u_u(p_44, (l_281 || ((safe_lshift_func_int16_t_s_s(g_227, 5)) >= (((safe_lshift_func_uint8_t_u_u((+(((l_353 == ((g_402 == l_404) > p_45)) | g_61) ^ (*l_265))), l_220)) < (*g_403)) || p_44)))))), g_219[6][5][1]))));
            }
            else
            {
                int *l_409 = (void*)0;
                for (g_301 = 3; (g_301 >= 0); g_301 -= 1)
                {
                    short ***l_405 = &l_404;
                    int *l_407 = &l_229;
                    int **l_410 = (void*)0;
                    int **l_411 = &l_407;
                    char *l_412 = &g_219[5][4][1];
                    int i, j, k;
                    if (((*l_407) = ((g_84[(g_137 + 1)][(g_115 + 5)][g_137] = (g_84[(g_137 + 1)][(g_115 + 5)][g_137] == ((l_406[3] = ((*l_405) = (void*)0)) != (void*)0))) ^ g_178[g_115][(g_115 + 2)])))
                    {
                        (*l_231) = l_353;
                    }
                    else
                    {
                        int **l_408 = &l_265;
                        int i, j;
                        (*l_407) = 0L;
                        (*l_408) = func_46((g_178[(g_115 + 6)][g_301] = 0xB330L), p_44);
                        (*l_408) = &p_44;
                        (*l_408) = &p_44;
                    }
                    (*l_411) = l_409;
                    l_415 = (((p_44 != ((*l_412) = p_45)) != 0xC3EDL) && (safe_sub_func_uint32_t_u_u(g_132, p_44)));
                }
                if ((safe_add_func_int16_t_s_s((0xA81FL | l_415), 0x4D1AL)))
                {
                    for (l_353 = 0; (l_353 <= 0); l_353 += 1)
                    {
                        int *l_418[3][4][6] = {{{&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&l_229,&l_353,&l_229,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&l_229},{&l_229,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&l_229,&l_229,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&l_229},{&g_84[0][4][0],&l_229,(void*)0,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],(void*)0,&l_229},{(void*)0,&g_84[0][4][0],&l_229,&l_353,&l_353,&l_229}},{{(void*)0,(void*)0,&l_353,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&g_84[0][4][0],&g_84[(l_353 + 1)][(g_137 + 4)][g_115]},{&g_84[0][4][0],(void*)0,&g_84[0][4][0],&l_229,&l_353,&l_353},{&l_229,&g_84[0][4][0],&g_84[0][4][0],&l_229,(void*)0,&g_84[(l_353 + 1)][(g_137 + 4)][g_115]},{&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&l_229,&l_353,&l_229,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&l_229}},{{&l_229,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&l_229,&l_229,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&l_229},{&g_84[0][4][0],&l_229,(void*)0,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],(void*)0,&l_229},{(void*)0,&g_84[0][4][0],&l_229,&l_353,&l_353,&l_229},{(void*)0,(void*)0,&l_353,&g_84[(l_353 + 1)][(g_137 + 4)][g_115],&g_84[0][4][0],&g_84[(l_353 + 1)][(g_137 + 4)][g_115]}}};
                        int i, j, k;
                        l_418[0][3][3] = &g_84[(l_353 + 1)][(g_137 + 4)][g_115];
                    }
                    if (p_44)
                        break;
                }
                else
                {
                    (*l_231) = l_229;
                    for (g_61 = 0; (g_61 <= 0); g_61 += 1)
                    {
                        if ((*l_231))
                            break;
                    }
                    for (l_228 = 0; l_228 < 7; l_228 += 1)
                    {
                        for (l_220 = 0; l_220 < 8; l_220 += 1)
                        {
                            for (p_45 = 0; p_45 < 4; p_45 += 1)
                            {
                                g_219[l_228][l_220][p_45] = 0x61L;
                            }
                        }
                    }
                }
            }
            for (g_182 = 0; (g_182 >= 0); g_182 -= 1)
            {
                char l_419[1];
                int **l_420 = (void*)0;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_419[i] = 0x50L;
                l_421 = func_46(l_229, l_419[0]);
                if (p_44)
                    break;
                if (l_422[4])
                    break;
                g_84[(g_182 + 1)][(g_115 + 5)][g_115] = (safe_mul_func_uint16_t_u_u(65535UL, p_44));
            }
        }
    }
    return p_45;
}







static unsigned * func_46(unsigned short p_47, char p_48)
{
    int *l_191 = &g_182;
    int l_197 = 0x0E716780L;
    for (g_122 = 0; (g_122 <= 9); g_122 += 1)
    {
        int *l_190[9] = {&g_84[0][4][0],&g_84[0][4][0],&g_84[0][4][0],&g_84[0][4][0],&g_84[0][4][0],&g_84[0][4][0],&g_84[0][4][0],&g_84[0][4][0],&g_84[0][4][0]};
        int i;
        l_191 = l_190[2];
        for (g_96 = 0; (g_96 <= 1); g_96 += 1)
        {
            int l_193 = 4L;
            int l_195 = 0x7FB4A33CL;
        }
    }
    return l_191;
}







static unsigned char func_49(unsigned char p_50, int p_51, unsigned * p_52)
{
    char l_62 = (-1L);
    int l_169 = 0x8E1F83D2L;
    int *l_189 = (void*)0;
    if (l_62)
    {
        return g_18;
    }
    else
    {
        char l_68 = 0xA3L;
        unsigned *l_143[5];
        int l_166 = (-5L);
        int i;
        for (i = 0; i < 5; i++)
            l_143[i] = &g_18;
        for (p_51 = (-2); (p_51 == (-28)); p_51--)
        {
            unsigned char l_69 = 0x50L;
            int l_142 = 0L;
            int **l_144 = &g_83;
            unsigned *l_153[10] = {&g_137,(void*)0,(void*)0,(void*)0,&g_137,(void*)0,&g_18,&g_18,(void*)0,&g_137};
            int i;
            for (p_50 = 27; (p_50 < 43); p_50 = safe_add_func_int8_t_s_s(p_50, 7))
            {
                int l_67 = 0x05A42069L;
                unsigned *l_140[7][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
                unsigned **l_139 = &l_140[6][3];
                int *l_141 = &g_84[0][4][0];
                int i, j;
                l_68 = (l_67 != 0x9EFCC72FL);
            }
            l_142 = 0xBD04037DL;
            (*l_144) = p_52;
            if ((*g_83))
            {
                unsigned char *l_154[1];
                short *l_155 = &g_96;
                int **l_158 = &g_83;
                int i;
                for (i = 0; i < 1; i++)
                    l_154[i] = &g_122;
                if (((p_51 != ((*l_155) = (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(1L, (safe_lshift_func_uint16_t_u_s((((void*)0 != &g_99[1]) > ((safe_sub_func_uint16_t_u_u(((&g_18 != l_153[2]) ^ g_132), ((p_50 = p_50) != g_115))) <= g_122)), 10)))), 1)))) & 0x63E212FDL))
                {
                    int ***l_163 = (void*)0;
                    int ****l_164 = &l_163;
                    int *l_171 = &l_166;
                    l_166 = (safe_mod_func_uint16_t_u_u(((p_50 ^ ((void*)0 == l_158)) >= 0UL), (safe_mod_func_uint8_t_u_u(6UL, (safe_sub_func_int32_t_s_s((((*l_164) = l_163) == g_165[1]), ((*l_144) != (void*)0)))))));
                    if ((safe_mul_func_uint8_t_u_u((g_18 < 0L), (&g_14 != (void*)0))))
                    {
                        (*l_158) = (*l_144);
                    }
                    else
                    {
                        int *l_170 = &l_142;
                        if (p_50)
                            break;
                        (*l_170) = ((l_169 = 0x4C03L) & 0x1B1CL);
                    }
                    (*l_171) = p_50;
                }
                else
                {
                    (*l_144) = p_52;
                    (*l_144) = func_70(p_52);
                }
            }
            else
            {
                unsigned *l_181 = &g_18;
                int l_183 = (-1L);
                for (p_50 = 13; (p_50 >= 22); ++p_50)
                {
                    for (g_61 = 0; (g_61 <= 38); g_61++)
                    {
                        unsigned short *l_177[1];
                        int l_186 = (-1L);
                        int i;
                        for (i = 0; i < 1; i++)
                            l_177[i] = &g_178[3][3];
                        if ((*g_83))
                            break;
                        l_186 = (safe_unary_minus_func_uint16_t_u((((0xA8L & (((g_178[4][2] = 9UL) | ((safe_rshift_func_uint16_t_u_s((g_182 = (l_181 == (void*)0)), l_183)) & (p_50 >= (safe_sub_func_int16_t_s_s((l_169 = ((g_14 != g_84[0][4][0]) != 0x93A3L)), g_18))))) > g_84[1][4][0])) | 0UL) <= 0xF4ABBFA7L)));
                        l_169 = (safe_rshift_func_uint8_t_u_s(l_169, 0));
                        l_189 = p_52;
                    }
                    (*l_144) = p_52;
                    return g_122;
                }
            }
        }
        l_169 = l_166;
        return g_178[3][3];
    }
}







static unsigned * func_70(unsigned * p_71)
{
    unsigned *l_89 = &g_18;
    unsigned **l_88 = &l_89;
    int **l_90 = &g_83;
    int l_117 = (-9L);
    int l_138 = 0x54240B61L;
    for (g_61 = 0; (g_61 <= 41); g_61 = safe_add_func_uint8_t_u_u(g_61, 6))
    {
        unsigned *l_78 = &g_18;
        unsigned **l_77 = &l_78;
        unsigned ***l_85 = (void*)0;
        unsigned **l_87 = (void*)0;
        unsigned ***l_86[8] = {&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87,&l_87};
        int i;
        l_88 = (l_77 = func_74(l_77, g_61));
        if ((*g_83))
            continue;
    }
    (*l_90) = p_71;
    for (g_61 = 0; (g_61 <= 0); g_61 += 1)
    {
        unsigned *l_91 = &g_18;
        unsigned **l_92 = &l_89;
        int l_93 = 0xF870A655L;
        int *l_94 = (void*)0;
        int *l_95 = &l_93;
        int **l_97 = &l_94;
        int l_104 = 0x652FB001L;
        short l_116 = 0x780AL;
        (*l_90) = &g_84[0][4][0];
        (*l_90) = &g_84[0][4][0];
        if ((((((*g_83) | (g_96 = ((((*l_92) = l_91) == &g_18) & ((*l_95) = l_93)))) & ((**l_90) && (**l_90))) ^ (p_71 != ((*l_97) = l_94))) & ((**l_90) <= 0x6EL)))
        {
            int ***l_98[6] = {&l_97,&l_97,(void*)0,&l_97,&l_97,(void*)0};
            int i;
            (*l_95) = (*g_83);
            g_99[1] = &l_95;
            if ((*l_95))
                break;
        }
        else
        {
            unsigned char l_107[6] = {255UL,255UL,254UL,255UL,255UL,254UL};
            int l_119 = 0x9F2DD615L;
            int ***l_123 = &g_99[0];
            int i;
            (*g_83) = (-1L);
            for (l_93 = 0; (l_93 >= 0); l_93 -= 1)
            {
                int l_111 = 0x4DB4AF44L;
                int l_114 = (-3L);
                int *l_118 = (void*)0;
                for (g_96 = 0; (g_96 <= 0); g_96 += 1)
                {
                    int l_112 = 0x8A8812E5L;
                    int i, j, k;
                    if (g_84[l_93][(g_61 + 4)][g_96])
                    {
                        int i, j, k;
                        g_84[g_96][g_96][g_61] = (safe_rshift_func_uint16_t_u_s(((*p_71) < (safe_lshift_func_int16_t_s_u(l_104, g_61))), 1));
                    }
                    else
                    {
                        int *l_108 = &g_84[0][1][0];
                        int *l_113[9][6][3] = {{{&l_104,&l_104,&l_112},{&l_112,&l_104,&l_112},{&l_104,&l_93,&l_93},{&l_112,&l_93,(void*)0},{&l_104,&l_104,&l_93},{&l_104,&l_104,&l_112}},{{&l_112,&l_104,&l_112},{&l_104,&l_93,&l_93},{&l_112,&l_93,(void*)0},{&l_112,&l_93,&l_112},{&l_112,&l_112,&l_93},{&l_93,&l_93,&l_93}},{{&l_93,&l_104,&l_112},{&l_93,&l_104,(void*)0},{&l_112,&l_93,&l_112},{&l_112,&l_112,&l_93},{&l_93,&l_93,&l_93},{&l_93,&l_104,&l_112}},{{&l_93,&l_104,(void*)0},{&l_112,&l_93,&l_112},{&l_112,&l_112,&l_93},{&l_93,&l_93,&l_93},{&l_93,&l_104,&l_112},{&l_93,&l_104,(void*)0}},{{&l_112,&l_93,&l_112},{&l_112,&l_112,&l_93},{&l_93,&l_93,&l_93},{&l_93,&l_104,&l_112},{&l_93,&l_104,(void*)0},{&l_112,&l_93,&l_112}},{{&l_112,&l_112,&l_93},{&l_93,&l_93,&l_93},{&l_93,&l_104,&l_112},{&l_93,&l_104,(void*)0},{&l_112,&l_93,&l_112},{&l_112,&l_112,&l_93}},{{&l_93,&l_93,&l_93},{&l_93,&l_104,&l_112},{&l_93,&l_104,(void*)0},{&l_112,&l_93,&l_112},{&l_112,(void*)0,&l_112},{(void*)0,&l_93,&l_112}},{{&l_93,&l_104,&l_93},{(void*)0,&l_104,&l_93},{(void*)0,&l_93,&l_93},{(void*)0,(void*)0,&l_112},{(void*)0,&l_93,&l_112},{&l_93,&l_104,&l_93}},{{(void*)0,&l_104,&l_93},{(void*)0,&l_93,&l_93},{(void*)0,(void*)0,&l_112},{(void*)0,&l_93,&l_112},{&l_93,&l_104,&l_93},{(void*)0,&l_104,&l_93}}};
                        int i, j, k;
                        (*l_90) = (*l_97);
                        l_117 = (safe_sub_func_uint32_t_u_u((((*l_108) = l_107[0]) ^ ((l_104 = ((l_107[5] == (*l_95)) && (0xCF7AL < ((g_115 = (((safe_add_func_int32_t_s_s(l_107[0], (l_112 = ((l_111 < g_14) || l_112)))) | (l_114 = 4294967293UL)) || g_61)) & (*p_71))))) > (*p_71))), l_116));
                        (*l_90) = ((*l_97) = l_118);
                        l_119 = ((*l_108) && g_96);
                    }
                }
                for (g_96 = 0; (g_96 >= 0); g_96 -= 1)
                {
                    unsigned char l_125[1][5][9] = {{{0x21L,0x0DL,0xDAL,0x0DL,0x21L,0xF2L,0xF2L,0x21L,0x0DL},{0xE0L,1UL,0xE0L,0xEAL,255UL,255UL,0xEAL,0xE0L,1UL},{0x4FL,0x10L,0xF2L,0xDAL,0xDAL,0xF2L,0x10L,0x4FL,0x10L},{0x22L,255UL,0xEAL,0xEAL,255UL,0x22L,255UL,0x22L,255UL},{0x0DL,0x10L,0x10L,0x0DL,0x4FL,0x21L,0x4FL,0x0DL,0x10L}}};
                    int i, j, k;
                    for (l_114 = 0; (l_114 <= 0); l_114 += 1)
                    {
                        int i, j, k;
                        (*l_97) = &g_84[g_61][(l_114 + 3)][l_93];
                        return &g_18;
                    }
                    for (g_115 = 0; (g_115 <= 0); g_115 += 1)
                    {
                        int l_124[10][1] = {{0x264F7316L},{0x264F7316L},{0x84C8BE40L},{0x264F7316L},{0x264F7316L},{0x84C8BE40L},{0x264F7316L},{0x264F7316L},{0x84C8BE40L},{0x264F7316L}};
                        int *l_126 = &l_114;
                        unsigned short l_127 = 0xD86CL;
                        int i, j, k;
                        l_124[0][0] = ((safe_mod_func_uint16_t_u_u(((g_18 | (0x3AL > g_18)) || (g_122 = 9UL)), g_115)) >= (g_84[g_96][(l_93 + 3)][g_115] = (l_123 == (void*)0)));
                        (*l_126) = l_125[0][3][5];
                        l_127 = ((*l_126) = 0xC3079E44L);
                        (*l_126) = (*l_126);
                    }
                }
            }
            (*l_95) = (safe_add_func_uint32_t_u_u(((safe_mul_func_int16_t_s_s(l_107[0], g_132)) >= (1UL >= g_122)), (*p_71)));
        }
        for (l_93 = 0; (l_93 >= 0); l_93 -= 1)
        {
            int *l_133[1][10] = {{&l_93,(void*)0,&l_93,(void*)0,&l_93,&l_93,(void*)0,&l_93,(void*)0,&l_93}};
            unsigned *l_136 = &g_137;
            int i, j;
            (*l_90) = (*l_90);
            for (g_122 = 0; (g_122 <= 0); g_122 += 1)
            {
                int i;
                (*l_90) = (void*)0;
            }
            l_104 = (p_71 != ((*l_97) = (*l_90)));
            l_138 = ((safe_mod_func_uint32_t_u_u(g_18, ((*l_136) = g_84[0][1][0]))) != l_117);
            for (g_96 = 0; (g_96 >= 0); g_96 -= 1)
            {
                int i, j, k;
                if (g_84[g_61][g_96][g_61])
                    break;
            }
        }
    }
    return p_71;
}







static unsigned ** func_74(unsigned ** p_75, unsigned p_76)
{
    int *l_79 = (void*)0;
    int **l_80 = &l_79;
    (*l_80) = l_79;
    for (p_76 = (-11); (p_76 != 13); p_76 = safe_add_func_int32_t_s_s(p_76, 8))
    {
        (*l_80) = g_83;
        (*l_80) = &g_84[0][4][0];
    }
    return p_75;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_84[i][j][k], "g_84[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_178[i][j], "g_178[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_182, "g_182", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_219[i][j][k], "g_219[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_433, "g_433", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_529, "g_529", print_hash_value);
    transparent_crc(g_587, "g_587", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
