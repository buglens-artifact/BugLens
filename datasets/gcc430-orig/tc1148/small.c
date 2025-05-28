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


union U0 {
   volatile char f0;
};


static int g_6 = 0x6E838462L;
static int *g_56 = (void*)0;
static int g_57 = (-6L);
static int g_70 = (-1L);
static char g_82 = 0xEFL;
static volatile int g_88 = 0xA305481BL;
static volatile int g_90 = 1L;
static char g_92 = 0x2CL;
static volatile int g_94 = 0x3A315420L;
static volatile unsigned g_95 = 0x5FD513F7L;
static volatile short g_98 = 0x3478L;
static volatile char g_99 = (-5L);
static volatile unsigned g_100 = 7UL;
static union U0 g_104[8] = {{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL},{0xFEL}};
static union U0 *g_106 = (void*)0;
static union U0 ** volatile g_105 = &g_106;
static unsigned short g_115 = 65535UL;
static unsigned char g_153[7][9][4] = {{{0x13L,0x0FL,1UL,0xD5L},{1UL,0xD5L,0xD5L,1UL},{0xDFL,4UL,4UL,0x72L},{0xF7L,0x45L,1UL,0x40L},{252UL,0x6FL,0xCBL,0x40L},{0x54L,0x45L,1UL,0x72L},{0xF1L,4UL,0xF7L,1UL},{0x6FL,0xD5L,7UL,0xD5L},{0xF7L,0x0FL,1UL,4UL}},{{0xDBL,0x6FL,0x6FL,0x13L},{0xD5L,1UL,0x72L,0xDFL},{0xD5L,253UL,0x6FL,0x72L},{0x57L,0xDFL,1UL,0xDBL},{0xDBL,1UL,0xF1L,0xF1L},{0x76L,0x76L,0xDBL,1UL},{4UL,4UL,0x72L,0x6FL},{0xCBL,0xDBL,0xDFL,0x72L},{0x45L,0xDBL,0x13L,0x6FL}},{{0xDBL,4UL,0UL,1UL},{8UL,0x76L,252UL,0xF1L},{0x72L,1UL,0x72L,0xDBL},{0xF7L,0xDFL,253UL,0x72L},{0x0FL,253UL,0x54L,0xDFL},{0xDBL,1UL,0x54L,0x13L},{0x0FL,0x76L,253UL,0UL},{0xF7L,7UL,0x72L,252UL},{0x72L,252UL,252UL,0x72L}},{{8UL,0x6FL,0UL,253UL},{0xDBL,0x40L,0x13L,0x54L},{0x45L,0x76L,0xDFL,0x54L},{0xCBL,0x40L,0x72L,253UL},{4UL,0x6FL,0xDBL,0x72L},{0x76L,252UL,0xF1L,252UL},{0xDBL,0xDFL,0x45L,0x57L},{0xD5L,0xF7L,0x13L,0x76L},{1UL,252UL,0x40L,0xF1L}},{{1UL,0x54L,0x13L,0x40L},{0xD5L,0xF1L,0x45L,0UL},{0UL,0x6FL,8UL,8UL},{0xF7L,0xF7L,0UL,0x45L},{1UL,0xDBL,0x40L,0x13L},{7UL,0UL,0xF1L,0x40L},{0x72L,0UL,0x76L,0x13L},{0UL,0xDBL,0x57L,0x45L},{4UL,0xF7L,1UL,8UL}},{{0x40L,0x6FL,0x40L,0UL},{4UL,0xF1L,0x54L,0x40L},{0xCBL,0x54L,0x0FL,0xF1L},{0UL,252UL,0x0FL,0x76L},{0xCBL,0xF7L,0x54L,0x57L},{4UL,0xDFL,0x40L,1UL},{0x40L,1UL,1UL,0x40L},{4UL,0x13L,0x57L,0x54L},{0UL,253UL,0x76L,0x0FL}},{{0x72L,0xF7L,0xF1L,0x0FL},{7UL,253UL,0x40L,0x54L},{1UL,0x13L,0UL,0x40L},{0xF7L,0x72L,1UL,0x72L},{0xD5L,8UL,0x40L,1UL},{252UL,0xDBL,0xF7L,4UL},{1UL,0x45L,0x54L,4UL},{1UL,0xCBL,0xF7L,0x54L},{252UL,4UL,0x40L,0xD5L}}};
static unsigned g_180 = 0x5DAAA1FBL;
static int g_188 = 0xB659F954L;
static union U0 **g_193[6][10] = {{&g_106,&g_106,(void*)0,&g_106,&g_106,&g_106,&g_106,&g_106,(void*)0,&g_106},{&g_106,(void*)0,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106},{&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,(void*)0,&g_106,&g_106,&g_106},{&g_106,(void*)0,&g_106,&g_106,&g_106,&g_106,(void*)0,(void*)0,&g_106,&g_106},{&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,(void*)0,&g_106,&g_106},{&g_106,(void*)0,&g_106,(void*)0,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106}};
static union U0 *** volatile g_192 = &g_193[4][1];
static unsigned g_229 = 0UL;
static short g_249 = (-9L);
static int g_269 = (-9L);
static unsigned short g_274 = 0UL;
static volatile unsigned short g_320 = 0x93F2L;
static int *** volatile g_324 = (void*)0;
static int *** volatile g_325 = (void*)0;
static int *** volatile g_326 = (void*)0;
static volatile short g_334 = (-8L);
static unsigned short g_336[7] = {65535UL,65535UL,65535UL,65535UL,65535UL,65535UL,65535UL};
static volatile unsigned g_377 = 1UL;
static int * volatile g_380 = &g_70;
static unsigned short g_402[4] = {6UL,6UL,6UL,6UL};
static volatile int g_420[9] = {2L,0x8551E7B2L,2L,0x8551E7B2L,2L,0x8551E7B2L,2L,0x8551E7B2L,2L};
static int * volatile g_457 = (void*)0;
static int * volatile g_458 = &g_70;
static unsigned char g_479 = 7UL;
static char g_514 = 0xE3L;
static int **g_520 = &g_56;
static int ***g_519 = &g_520;
static short g_523[10] = {0L,0L,(-5L),0L,0L,(-5L),0L,0L,(-5L),0L};
static int * volatile g_615[7] = {&g_70,(void*)0,(void*)0,&g_70,(void*)0,(void*)0,&g_70};
static int * volatile g_616[7][7][5] = {{{&g_6,&g_6,&g_6,&g_70,&g_6},{&g_70,&g_70,&g_70,(void*)0,&g_70},{&g_6,&g_70,&g_70,&g_6,&g_6},{&g_70,&g_70,&g_70,&g_70,&g_70},{&g_6,&g_6,&g_6,&g_6,&g_6},{&g_70,&g_70,&g_70,&g_70,&g_70},{&g_6,&g_6,&g_70,&g_6,&g_6}},{{&g_70,(void*)0,(void*)0,&g_70,&g_70},{&g_6,&g_6,&g_6,&g_6,&g_6},{&g_70,&g_70,(void*)0,(void*)0,&g_70},{&g_6,&g_6,&g_70,&g_70,&g_6},{&g_70,&g_70,(void*)0,&g_70,&g_70},{&g_6,&g_70,&g_6,&g_6,&g_6},{&g_70,&g_70,(void*)0,&g_70,&g_70}},{{&g_6,&g_6,&g_70,&g_6,&g_6},{&g_70,(void*)0,&g_70,&g_70,&g_70},{&g_6,&g_6,&g_6,&g_70,&g_6},{&g_70,&g_70,&g_70,(void*)0,&g_70},{&g_6,&g_70,&g_70,&g_6,&g_6},{&g_70,&g_70,&g_70,&g_70,&g_70},{&g_6,&g_6,&g_6,&g_6,&g_6}},{{&g_70,&g_70,&g_70,&g_70,&g_70},{&g_6,&g_6,&g_70,&g_6,&g_6},{&g_70,(void*)0,(void*)0,&g_70,&g_70},{&g_6,&g_6,&g_6,&g_6,&g_6},{&g_70,&g_70,(void*)0,(void*)0,&g_70},{&g_6,&g_6,&g_70,&g_70,&g_6},{&g_70,&g_70,(void*)0,&g_70,&g_70}},{{&g_6,&g_70,&g_6,&g_6,&g_6},{&g_70,&g_70,(void*)0,&g_70,&g_70},{&g_6,&g_6,&g_70,&g_6,&g_6},{&g_70,(void*)0,&g_70,&g_70,&g_70},{&g_6,&g_6,&g_6,&g_70,&g_6},{&g_70,&g_70,&g_70,(void*)0,&g_70},{&g_6,&g_70,&g_70,&g_6,&g_6}},{{&g_70,&g_70,&g_70,&g_70,&g_70},{&g_6,&g_6,&g_6,&g_6,&g_6},{&g_70,&g_70,&g_70,&g_70,&g_70},{&g_6,&g_6,&g_70,&g_6,&g_6},{&g_70,(void*)0,(void*)0,&g_70,&g_70},{&g_6,&g_6,&g_6,&g_6,&g_6},{&g_70,&g_70,(void*)0,(void*)0,&g_70}},{{&g_6,&g_6,&g_70,&g_70,&g_6},{&g_70,&g_70,(void*)0,&g_70,&g_70},{&g_6,&g_70,&g_6,&g_6,&g_6},{&g_70,&g_70,(void*)0,&g_70,&g_70},{&g_6,&g_6,&g_70,&g_6,&g_6},{&g_70,(void*)0,&g_70,&g_70,&g_70},{&g_6,&g_6,&g_6,&g_70,&g_6}}};
static int * volatile g_617[6][1][7] = {{{&g_70,&g_6,&g_6,&g_70,&g_6,&g_6,&g_70}},{{(void*)0,&g_70,(void*)0,&g_6,&g_6,&g_6,(void*)0}},{{&g_70,&g_70,&g_70,&g_6,&g_6,&g_70,&g_6}},{{(void*)0,&g_70,&g_70,&g_6,&g_70,&g_70,(void*)0}},{{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}},{{(void*)0,&g_6,&g_6,&g_6,(void*)0,&g_70,(void*)0}}};
static volatile unsigned char g_668[8] = {0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L,0x99L};
static unsigned char *g_676 = &g_153[1][1][3];
static unsigned char **g_675 = &g_676;
static volatile int g_740 = 0xB1F0DE42L;
static unsigned g_811 = 1UL;
static int *g_822 = &g_6;
static unsigned g_900[4][7][1] = {{{0UL},{4294967295UL},{4294967295UL},{4294967295UL},{0UL},{4294967295UL},{0UL}},{{4294967295UL},{4294967295UL},{4294967295UL},{0UL},{4294967295UL},{0UL},{4294967295UL}},{{4294967295UL},{4294967295UL},{0UL},{4294967295UL},{0UL},{4294967295UL},{4294967295UL}},{{4294967295UL},{0UL},{4294967295UL},{0UL},{4294967295UL},{4294967295UL},{4294967295UL}}};
static unsigned g_905 = 0x37DA5518L;
static int ** volatile g_916 = &g_56;
static int ** volatile g_963 = (void*)0;
static unsigned char *** volatile g_1018 = &g_675;
static int ** volatile g_1030 = &g_56;
static int g_1066 = 0x15A9330FL;
static union U0 ** volatile g_1115 = &g_106;
static volatile char * volatile g_1169 = &g_104[7].f0;
static volatile char * volatile *g_1168 = &g_1169;
static volatile char * volatile ** volatile g_1170 = &g_1168;
static char *g_1205[5] = {&g_92,&g_92,&g_92,&g_92,&g_92};
static char **g_1204[3][9] = {{&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0]},{&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0]},{&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0],&g_1205[0]}};
static char ***g_1203[8][8][4] = {{{&g_1204[1][6],(void*)0,&g_1204[1][5],&g_1204[2][6]},{&g_1204[1][6],&g_1204[1][5],&g_1204[1][6],&g_1204[1][5]},{&g_1204[1][5],(void*)0,&g_1204[1][6],&g_1204[1][6]},{&g_1204[1][6],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]},{&g_1204[2][6],(void*)0,&g_1204[2][6],&g_1204[1][5]},{&g_1204[2][6],&g_1204[1][5],&g_1204[1][5],&g_1204[2][6]},{&g_1204[1][6],&g_1204[1][5],&g_1204[1][6],&g_1204[1][5]},{&g_1204[1][5],(void*)0,&g_1204[1][6],&g_1204[1][6]}},{{&g_1204[1][6],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]},{&g_1204[2][6],(void*)0,&g_1204[2][6],&g_1204[1][5]},{&g_1204[2][6],&g_1204[1][5],&g_1204[1][5],&g_1204[2][6]},{&g_1204[1][6],&g_1204[1][5],&g_1204[1][6],&g_1204[1][5]},{&g_1204[1][5],(void*)0,&g_1204[1][6],&g_1204[1][6]},{&g_1204[1][6],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]},{&g_1204[2][6],(void*)0,&g_1204[2][6],&g_1204[1][5]},{&g_1204[2][6],&g_1204[1][5],&g_1204[1][5],&g_1204[2][6]}},{{&g_1204[1][6],&g_1204[1][5],&g_1204[1][6],&g_1204[1][5]},{&g_1204[1][5],(void*)0,&g_1204[1][6],&g_1204[1][6]},{&g_1204[1][6],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]},{&g_1204[2][6],(void*)0,&g_1204[2][6],&g_1204[1][5]},{&g_1204[2][6],&g_1204[1][5],&g_1204[1][5],&g_1204[2][6]},{&g_1204[1][6],&g_1204[1][5],&g_1204[1][6],&g_1204[1][5]},{&g_1204[1][5],(void*)0,&g_1204[1][6],&g_1204[1][6]},{&g_1204[1][6],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]}},{{&g_1204[2][6],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]},{&g_1204[1][5],&g_1204[1][6],&g_1204[1][6],&g_1204[1][5]},{(void*)0,&g_1204[1][6],&g_1204[2][6],&g_1204[1][6]},{&g_1204[1][6],&g_1204[1][6],&g_1204[2][6],&g_1204[2][6]},{(void*)0,(void*)0,&g_1204[1][6],&g_1204[2][6]},{&g_1204[1][5],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]},{&g_1204[1][5],&g_1204[1][6],&g_1204[1][6],&g_1204[1][5]},{(void*)0,&g_1204[1][6],&g_1204[2][6],&g_1204[1][6]}},{{&g_1204[1][6],&g_1204[1][6],&g_1204[2][6],&g_1204[2][6]},{(void*)0,(void*)0,&g_1204[1][6],&g_1204[2][6]},{&g_1204[1][5],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]},{&g_1204[1][5],&g_1204[1][6],&g_1204[1][6],&g_1204[1][5]},{(void*)0,&g_1204[1][6],&g_1204[2][6],&g_1204[1][6]},{&g_1204[1][6],&g_1204[1][6],&g_1204[2][6],&g_1204[2][6]},{(void*)0,(void*)0,&g_1204[1][6],&g_1204[2][6]},{&g_1204[1][5],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]}},{{&g_1204[1][5],&g_1204[1][6],&g_1204[1][6],&g_1204[1][5]},{(void*)0,&g_1204[1][6],&g_1204[2][6],&g_1204[1][6]},{&g_1204[1][6],&g_1204[1][6],&g_1204[2][6],&g_1204[2][6]},{(void*)0,(void*)0,&g_1204[1][6],&g_1204[2][6]},{&g_1204[1][5],&g_1204[1][6],&g_1204[1][5],&g_1204[1][6]},{&g_1204[1][5],&g_1204[1][6],&g_1204[1][6],&g_1204[1][5]},{(void*)0,&g_1204[1][6],&g_1204[2][6],&g_1204[1][6]},{&g_1204[1][6],&g_1204[1][6],&g_1204[2][6],&g_1204[2][6]}},{{&g_1204[1][5],&g_1204[1][5],&g_1204[2][6],(void*)0},{&g_1204[1][6],&g_1204[1][6],&g_1204[1][6],&g_1204[2][6]},{&g_1204[1][6],&g_1204[2][6],&g_1204[2][6],&g_1204[1][6]},{&g_1204[1][5],&g_1204[2][6],(void*)0,&g_1204[2][6]},{&g_1204[2][6],&g_1204[1][6],(void*)0,(void*)0},{&g_1204[1][5],&g_1204[1][5],&g_1204[2][6],(void*)0},{&g_1204[1][6],&g_1204[1][6],&g_1204[1][6],&g_1204[2][6]},{&g_1204[1][6],&g_1204[2][6],&g_1204[2][6],&g_1204[1][6]}},{{&g_1204[1][5],&g_1204[2][6],(void*)0,&g_1204[2][6]},{&g_1204[2][6],&g_1204[1][6],(void*)0,(void*)0},{&g_1204[1][5],&g_1204[1][5],&g_1204[2][6],(void*)0},{&g_1204[1][6],&g_1204[1][6],&g_1204[1][6],&g_1204[2][6]},{&g_1204[1][6],&g_1204[2][6],&g_1204[2][6],&g_1204[1][6]},{&g_1204[1][5],&g_1204[2][6],(void*)0,&g_1204[2][6]},{&g_1204[2][6],&g_1204[1][6],(void*)0,(void*)0},{&g_1204[1][5],&g_1204[1][5],&g_1204[2][6],(void*)0}}};
static char ***g_1209 = &g_1204[1][6];
static unsigned char g_1216 = 0x31L;
static int ** volatile g_1264[7][8] = {{(void*)0,&g_822,(void*)0,&g_56,&g_56,(void*)0,(void*)0,(void*)0},{&g_822,&g_56,&g_56,&g_56,&g_822,&g_56,&g_56,(void*)0},{&g_822,&g_822,&g_56,&g_56,&g_56,&g_822,&g_822,&g_56},{(void*)0,&g_56,&g_56,(void*)0,&g_822,(void*)0,&g_56,&g_56},{&g_822,&g_56,(void*)0,(void*)0,&g_56,&g_822,&g_56,(void*)0},{&g_56,&g_56,&g_56,&g_56,&g_822,&g_56,&g_56,&g_56},{&g_822,&g_56,&g_56,&g_822,&g_822,&g_822,&g_822,&g_56}};
static int g_1292 = 0L;



static int func_1(void);
static int * func_2(int * p_3, int * p_4);
static int * func_7(unsigned char p_8, int * p_9, int * p_10, unsigned short p_11);
static int * func_12(int * p_13, unsigned char p_14, int * p_15, short p_16, unsigned p_17);
static unsigned char func_20(int * p_21);
static int * func_22(unsigned short p_23);
static unsigned short func_24(unsigned p_25, int * p_26, int * p_27, int * p_28);
static int * func_29(int p_30, int p_31, char p_32);
static unsigned func_33(int * p_34, unsigned p_35);
static int * func_36(unsigned p_37, char p_38, char p_39, unsigned p_40);
static int func_1(void)
{
    int *l_5 = &g_6;
    int **l_1270 = &g_822;
    int l_1288[4] = {0x94E93196L,0x94E93196L,0x94E93196L,0x94E93196L};
    int l_1289 = 1L;
    int l_1291 = 0xCC56B737L;
    int i;
    (*l_1270) = func_2(l_5, func_7(g_6, func_12(&g_6, ((safe_sub_func_uint8_t_u_u(func_20(func_22(func_24((*l_5), func_29((func_33(func_36((*l_5), (*l_5), (*l_5), ((void*)0 == &g_6)), g_188) >= 4294967295UL), (*l_5), (*l_5)), l_5, l_5))), g_811)) & g_6), l_5, g_900[1][0][0], (*l_5)), &g_6, g_811));




    ;
    ;
    for (g_249 = 0; (g_249 > 4); g_249++)
    {
        short l_1277[7] = {5L,(-1L),(-1L),5L,(-1L),(-1L),5L};
        int l_1282 = (-5L);
        unsigned char *l_1283 = (void*)0;
        unsigned char *l_1284[2][10] = {{&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216},{&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216,&g_1216}};
        int *l_1287[4];
        char l_1290 = 0x12L;
        unsigned l_1293 = 0UL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1287[i] = &g_1066;
    }
    return g_6;
}







static int * func_2(int * p_3, int * p_4)
{
    int *l_976[8][10] = {{&g_70,&g_70,&g_70,&g_6,&g_70,&g_70,&g_70,&g_6,&g_70,&g_70},{&g_70,&g_70,&g_6,&g_70,&g_70,&g_70,&g_6,&g_70,&g_70,(void*)0},{&g_70,&g_6,&g_70,&g_70,(void*)0,&g_70,&g_70,&g_6,&g_6,&g_70},{&g_70,&g_70,&g_6,&g_6,&g_70,&g_70,(void*)0,&g_70,&g_70,&g_6},{&g_70,&g_70,&g_6,&g_6,&g_70,&g_70,&g_70,&g_6,&g_6,&g_70},{&g_70,&g_70,&g_6,&g_6,&g_70,&g_70,&g_70,&g_6,&g_6,&g_70},{&g_70,&g_70,&g_6,&g_6,&g_70,&g_70,&g_70,&g_6,&g_6,&g_70},{&g_70,&g_70,&g_6,&g_6,&g_70,&g_70,&g_6,(void*)0,(void*)0,&g_6}};
    unsigned char **l_988[4][4][1] = {{{&g_676},{&g_676},{&g_676},{&g_676}},{{&g_676},{&g_676},{&g_676},{&g_676}},{{&g_676},{&g_676},{&g_676},{&g_676}},{{&g_676},{&g_676},{&g_676},{&g_676}}};
    short l_1011[6];
    int *l_1026 = &g_70;
    unsigned char l_1031 = 255UL;
    short *l_1065[8][1];
    short **l_1064[6] = {&l_1065[0][0],&l_1065[0][0],&l_1065[0][0],&l_1065[0][0],&l_1065[0][0],&l_1065[0][0]};
    int *l_1108 = &g_70;
    unsigned char l_1146 = 0x95L;
    unsigned l_1171[3];
    unsigned l_1182[2];
    char l_1188 = (-1L);
    int *l_1197 = &g_6;
    char ***l_1207 = &g_1204[1][6];
    unsigned short l_1219[6][2];
    int l_1233 = 0x074F5306L;
    int *l_1269 = &g_70;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1011[i] = (-8L);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
            l_1065[i][j] = (void*)0;
    }
    for (i = 0; i < 3; i++)
        l_1171[i] = 0xD8D2417AL;
    for (i = 0; i < 2; i++)
        l_1182[i] = 0x442C2086L;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
            l_1219[i][j] = 65527UL;
    }
    for (g_811 = 0; (g_811 <= 0); g_811 += 1)
    {
        unsigned l_971 = 0x53D285D2L;
        int l_1010 = 1L;
        int l_1012 = 1L;
        int l_1013 = 0xD57FE4BEL;
        for (g_70 = 0; (g_70 <= 0); g_70 += 1)
        {
            short l_979 = 1L;
            unsigned short l_989[5][6] = {{0xF4CDL,0x2620L,0x554FL,0UL,0x554FL,0x2620L},{0xF4CDL,0x2620L,0x554FL,0UL,0x554FL,0x2620L},{0xF4CDL,0x2620L,0x554FL,0UL,0x554FL,0x2620L},{0xF4CDL,0x2620L,0x554FL,0UL,0x554FL,0x2620L},{0xF4CDL,0x2620L,0x554FL,0UL,0x554FL,0x2620L}};
            int l_1009[1];
            int i, j;
            for (i = 0; i < 1; i++)
                l_1009[i] = (-7L);
            for (g_274 = 0; (g_274 <= 0); g_274 += 1)
            {
                int l_968 = (-7L);
                int i;
                for (g_249 = 4; (g_249 >= 0); g_249 -= 1)
                {
                    int *l_969 = &l_968;
                    int *l_970[6][4] = {{&g_70,&g_6,&g_6,(void*)0},{&g_6,&g_6,&g_6,&l_968},{(void*)0,(void*)0,&g_70,(void*)0},{(void*)0,&g_6,&g_6,(void*)0},{&g_6,(void*)0,&l_968,&l_968},{&g_6,&g_6,&g_70,(void*)0}};
                    int i, j, k;
                    ++l_971;
                    if (g_336[(g_811 + 1)])
                        continue;
                    for (g_188 = 0; (g_188 <= 0); g_188 += 1)
                    {
                        int i, j, k;
                        g_615[g_274] = func_7((g_153[(g_70 + 2)][(g_188 + 4)][(g_274 + 2)]++), l_976[5][0], p_3, (safe_mod_func_uint8_t_u_u(g_336[(g_70 + 6)], l_979)));
                    }
                }
                if (g_336[(g_70 + 2)])
                    continue;
            }
            for (g_115 = 0; (g_115 <= 0); g_115 += 1)
            {
                int l_1001[5][7][7] = {{{(-1L),(-5L),0x0C6E4C29L,(-7L),(-1L),0L,0x4D057D24L},{0xA5CDCB76L,0L,0L,0x52A82BA1L,0L,0x42C6518FL,0x8CDACF5DL},{1L,1L,0x1A5E5206L,(-1L),0x66E5A765L,0xBD95BFBCL,0x8DAB5690L},{0xF413B7ACL,1L,0L,0L,8L,0L,0x52A82BA1L},{0xBA9A73FCL,0L,(-5L),1L,(-1L),1L,1L},{(-1L),(-7L),(-1L),(-7L),(-1L),0x88E4F109L,0xDE3A08EBL},{0x7ACB3A63L,0x585540DAL,0x42C6518FL,1L,0x4D057D24L,0x2270D56FL,0x5D775FA4L}},{{(-7L),0L,(-1L),2L,1L,0L,0x55057118L},{0x7ACB3A63L,1L,0xDE3A08EBL,0xEE497474L,0x8CDACF5DL,(-1L),0x21C547FBL},{(-1L),(-3L),0x9B014D0EL,1L,0x21C547FBL,0x789E0CF4L,(-7L)},{0xBA9A73FCL,0xDE3A08EBL,1L,0xBD95BFBCL,(-3L),0L,1L},{(-5L),1L,1L,(-10L),0x410EEBA6L,0L,(-5L)},{0L,0xDE3A08EBL,(-1L),0xBE4B311CL,(-5L),0x49C584F9L,0xBD95BFBCL},{0x55057118L,1L,(-10L),0x8DAB5690L,0x52A82BA1L,0x55057118L,0L}},{{0x42C6518FL,0x7173DBDAL,(-10L),0xBA9A73FCL,1L,0x791CEA11L,0xF0ABB025L},{0x791CEA11L,0x4B420CA7L,(-1L),2L,0x2270D56FL,0xF0ABB025L,(-5L)},{0L,0xBD95BFBCL,1L,1L,0x0C6E4C29L,0xD6CEFF86L,0L},{1L,0x52A82BA1L,0x220FF3A3L,(-1L),0x4D057D24L,(-1L),1L},{0xC5D8C185L,0x0C6E4C29L,0x49C584F9L,(-5L),1L,(-5L),0x49C584F9L},{0x42C6518FL,0x42C6518FL,1L,(-7L),(-1L),0L,0x2270D56FL},{5L,1L,1L,0xEB5B0692L,0x791CEA11L,0xEE497474L,1L}},{{(-5L),0xEBC6E674L,1L,(-5L),(-1L),0xD6CEFF86L,0x73DEB954L},{(-1L),0x73DEB954L,0L,1L,1L,1L,0xBD95BFBCL},{0x8DAB5690L,(-10L),0x0C6E4C29L,1L,0x4D057D24L,0xC5D8C185L,0xEA1A11D8L},{0x7ACB3A63L,0xF413B7ACL,0x7ACB3A63L,0x3F59B9FCL,0x89E55C8AL,0x4D057D24L,(-1L)},{(-1L),0xF0ABB025L,0xC5D8C185L,(-1L),0xEBC6E674L,1L,0x7173DBDAL},{1L,0x88E4F109L,0x410EEBA6L,0x2270D56FL,0x7ACB3A63L,0x0C6E4C29L,1L},{0xF413B7ACL,0L,0x5D775FA4L,0L,0x13F14D72L,0xA5CDCB76L,1L}},{{(-8L),0x42C6518FL,0xD15860B7L,(-1L),1L,0x1E4A7349L,0x7173DBDAL},{0L,(-1L),0xA5CDCB76L,0x66E5A765L,0x42C6518FL,0x30B2B295L,(-1L)},{0xBD95BFBCL,0x069A0CAAL,8L,0xEE497474L,1L,0xDE3A08EBL,0L},{1L,3L,0x49C584F9L,0x791CEA11L,0x2270D56FL,(-10L),(-1L)},{0L,0x13F14D72L,1L,1L,0x13F14D72L,0L,0L},{0x49C584F9L,4L,0xEE497474L,0x1A5E5206L,0x789E0CF4L,0L,5L},{0x73DEB954L,0x9B014D0EL,0x069A0CAAL,(-5L),0L,0x21C547FBL,0xEBC6E674L}}};
                int l_1008[2];
                unsigned short l_1014 = 0xA3DBL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_1008[i] = 0xF7962665L;
                if ((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_mod_func_int32_t_s_s(((l_971 ^ l_971) && (safe_sub_func_uint8_t_u_u((((*g_676) = (l_988[0][2][0] == &g_676)) <= g_811), l_989[4][3]))), (safe_mod_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint16_t_u_u(func_20(l_976[5][0]), (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_104[7].f0, g_523[4])), 5)), l_979)))))), 0xFD67L)))) | 65535UL), l_979)), l_1001[0][6][4])))
                {
                    int **l_1002 = &l_976[5][0];
                    char l_1005 = 0L;
                    (*l_1002) = p_4;
                    if ((safe_rshift_func_int16_t_s_u(l_989[1][4], 6)))
                    {
                        (*p_3) = ((void*)0 == &p_3);
                    }
                    else
                    {
                        if (l_971)
                            break;
                        if ((*g_380))
                            continue;
                        (*l_1002) = p_4;
                        if (l_1005)
                            break;
                    }
                    for (g_188 = 0; (g_188 >= 0); g_188 -= 1)
                    {
                        (*p_3) = (~(safe_mod_func_uint32_t_u_u(func_20(p_3), (*p_4))));
                    }
                }
                else
                {
                    (*p_3) = (0xB2L & 0x09L);
                }
                --l_1014;
                for (l_1010 = 0; (l_1010 >= 0); l_1010 -= 1)
                {
                    char *l_1019 = &g_514;
                    int l_1025 = 5L;
                    int *l_1027 = (void*)0;
                    (*p_3) ^= l_1012;
                    l_1008[0] ^= (*g_458);
                    for (l_1013 = 0; (l_1013 <= 0); l_1013 += 1)
                    {
                        unsigned char **l_1017 = (void*)0;
                        char **l_1020 = &l_1019;
                        int i, j, k;
                        (*p_4) = l_1001[0][6][4];
                        (*g_1018) = l_1017;

                        ;
                        l_1009[0] = ((g_900[(g_115 + 2)][(g_811 + 5)][l_1010] |= g_153[4][6][1]) || ((*p_3) |= ((((*l_1020) = l_1019) != (void*)0) == 0xF899L)));
                        (*g_1030) = func_7((safe_rshift_func_int8_t_s_u((func_20(func_7((safe_rshift_func_uint16_t_u_s(l_1025, 15)), (l_1027 = l_1026), p_3, l_1001[0][6][4])) && func_20(l_976[5][0])), ((safe_lshift_func_int8_t_s_u((-1L), 3)) < l_1008[0]))), p_3, &l_1010, l_1010);

                        ;
                        ;
                    }

                    ;
                }
            }
        }


        l_1031++;
    }


    ;
    if ((*l_1026))
    {
        int *l_1048 = (void*)0;
        short l_1050 = 0x146EL;
        int l_1051 = (-1L);
        unsigned char *l_1053 = &g_479;
        unsigned char ***l_1081[1][8][10] = {{{&l_988[3][0][0],&l_988[0][2][0],&l_988[2][1][0],&g_675,&l_988[0][2][0],&l_988[3][0][0],&l_988[0][2][0],&g_675,&l_988[2][1][0],&l_988[0][2][0]},{&g_675,&l_988[0][2][0],&l_988[0][2][0],&g_675,(void*)0,&l_988[1][2][0],&l_988[0][2][0],&l_988[2][1][0],(void*)0,(void*)0},{&g_675,&l_988[0][2][0],&g_675,&l_988[2][1][0],&l_988[2][1][0],&g_675,&l_988[0][2][0],&g_675,&l_988[0][2][0],&l_988[0][2][0]},{&g_675,(void*)0,&l_988[0][2][0],&g_675,&g_675,&l_988[2][1][0],&g_675,&l_988[0][2][0],&g_675,&l_988[2][1][0]},{&l_988[3][0][0],&g_675,&l_988[0][2][0],&g_675,&l_988[3][0][0],&l_988[0][2][0],&l_988[0][2][0],&g_675,&l_988[0][2][0],&g_675},{&l_988[0][2][0],&l_988[1][2][0],&g_675,&l_988[0][2][0],&l_988[0][2][0],&l_988[0][2][0],&l_988[0][2][0],&l_988[0][2][0],&l_988[0][2][0],&g_675},{&l_988[0][2][0],&l_988[0][2][0],(void*)0,&g_675,&l_988[3][0][0],&l_988[3][0][0],&l_988[0][2][0],&l_988[0][2][0],(void*)0,&l_988[2][1][0]},{&l_988[0][2][0],&g_675,&l_988[0][2][0],&l_988[0][2][0],&g_675,&l_988[0][2][0],&l_988[0][2][0],&g_675,&l_988[0][2][0],&l_988[0][2][0]}}};
        int *l_1099 = &l_1051;
        unsigned l_1114 = 0xD9AE04D2L;
        int l_1117 = 0x98372FDCL;
        int l_1118 = (-7L);
        int l_1123 = 1L;
        int l_1132 = (-1L);
        int l_1135 = 1L;
        int l_1141 = 1L;
        int l_1166 = 1L;
        short l_1218[9][4] = {{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L},{9L,9L,9L,9L}};
        int i, j, k;
        if ((*l_1026))
        {
            short *l_1038 = (void*)0;
            int l_1047 = 0x8E54F60DL;
            unsigned *l_1049 = &g_180;
            (*l_1026) = ((safe_add_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(g_274, (((void*)0 == l_1038) || ((((*l_1049) &= (safe_add_func_int16_t_s_s((func_20(p_4) < (safe_rshift_func_uint8_t_u_s((0x8A340406L & (safe_mod_func_uint16_t_u_u(1UL, (safe_add_func_int32_t_s_s(((*p_3) ^= (func_24((l_1047 < g_229), p_4, l_1048, p_3) & l_1047)), g_523[8]))))), l_1047))), g_99))) != (*l_1026)) && (*p_4))))), l_1050)) && l_1051);
        }
        else
        {
            int l_1052 = 1L;
            unsigned char *l_1054 = (void*)0;
            unsigned l_1060 = 0x87F2D603L;
            int **l_1163 = (void*)0;
            int **l_1164 = (void*)0;
            int **l_1165[9][5] = {{&l_1099,&g_56,&l_1099,&l_1026,&l_1099},{&l_1099,&l_1099,&l_1026,&l_1026,&l_1026},{&g_56,&l_1099,&l_1099,&g_56,&l_1099},{&g_56,&l_1026,&l_976[5][0],&l_976[5][0],&l_1026},{&l_1099,&l_1099,&l_976[5][0],&l_1026,&l_1026},{&l_1099,&l_1099,&l_1099,&l_976[5][0],&l_1026},{&l_1026,&g_56,&l_1026,&g_56,&l_1026},{&l_1099,&g_56,&l_1099,&l_1026,&l_1099},{&l_1099,&l_1099,&l_1026,&l_1026,&l_1026}};
            unsigned char *l_1167 = (void*)0;
            unsigned l_1177 = 0x1105DA13L;
            int i, j;
            if ((*p_3))
            {
                char l_1055 = (-2L);
                short *l_1062 = &g_523[6];
                short **l_1061 = &l_1062;
                short ***l_1063 = &l_1061;
                char *l_1067[10] = {&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92,&g_92};
                int i;
                (*l_1026) |= ((*p_3) |= (l_1052 != (l_1053 != l_1054)));
                (*l_1026) |= (func_24(l_1055, l_1026, p_3, p_3) >= 255UL);
            }
            else
            {
                int *l_1085 = &g_6;
                for (g_479 = 2; (g_479 != 52); ++g_479)
                {
                    unsigned l_1082 = 1UL;
                    int *l_1084 = &g_1066;
                    for (l_1051 = 0; (l_1051 <= 12); l_1051++)
                    {
                        unsigned char l_1074 = 0x06L;
                        char *l_1083 = &g_514;
                        l_1052 |= ((safe_div_func_uint8_t_u_u(l_1074, (safe_lshift_func_int16_t_s_s(g_269, (safe_mul_func_int16_t_s_s(g_6, 2UL)))))) >= (func_24(g_1066, func_7(((((*l_1083) = ((safe_rshift_func_uint16_t_u_s(g_334, (g_249 = (l_1081[0][1][0] != &l_988[0][2][0])))) ^ ((*g_676) = l_1082))) == g_523[5]) >= l_1082), &l_1051, l_1084, l_1074), l_1085, &g_1066) == g_479));
                        if ((*l_1084))
                            continue;
                        if ((*g_822))
                            break;
                        if ((*l_1085))
                            break;
                    }
                }
            }
            for (l_1060 = 0; (l_1060 <= 7); l_1060 += 1)
            {
                char l_1090 = 0x34L;
                int ****l_1093 = &g_519;
                int **l_1098 = &l_976[5][0];
                int l_1125 = 0x54DA7A87L;
                int l_1129 = (-1L);
                int l_1131 = 0xB53EFDBCL;
                int l_1134 = 0x3866709DL;
                int l_1136[9][8][3] = {{{0x99B7156DL,0L,0x3AA86B62L},{(-9L),(-1L),0x3AA86B62L},{0x7E33B5EFL,0x87E36417L,(-1L)},{0x3EF6E303L,0x7E33B5EFL,0x58F0159CL},{0x66B12AB2L,(-1L),7L},{9L,0x7E33B5EFL,0x13B466B1L},{0xA911668AL,0x87E36417L,(-1L)},{(-1L),(-1L),0x290ED24AL}},{{(-1L),0L,(-1L)},{0xA911668AL,0x4F800107L,0xDC7B7EEEL},{9L,(-4L),0x70329A60L},{0x66B12AB2L,0xA911668AL,0xDC7B7EEEL},{0x3EF6E303L,0xDEAA0527L,(-1L)},{0x7E33B5EFL,8L,0x7D23C596L},{1L,8L,0x13B466B1L},{(-4L),0L,(-1L)}},{{8L,0x7E33B5EFL,(-1L)},{(-9L),0xDEAA0527L,0xDC7B7EEEL},{8L,9L,(-1L)},{(-4L),0x4F800107L,5L},{1L,0xA85C7F73L,5L},{0x3EF6E303L,(-9L),(-1L)},{(-1L),0x3EF6E303L,0xDC7B7EEEL},{0xA911668AL,(-1L),(-1L)}},{{6L,0x3EF6E303L,(-1L)},{0x7E33B5EFL,(-9L),0x13B466B1L},{0xA85C7F73L,0xA85C7F73L,0x7D23C596L},{0xA85C7F73L,0x4F800107L,0x9EF2A1B4L},{0x7E33B5EFL,9L,(-1L)},{6L,0xDEAA0527L,0x290ED24AL},{0xA911668AL,0x7E33B5EFL,(-1L)},{(-1L),0L,0x9EF2A1B4L}},{{0x3EF6E303L,8L,0x7D23C596L},{1L,8L,0x13B466B1L},{(-4L),0L,(-1L)},{8L,0x7E33B5EFL,(-1L)},{(-9L),0xDEAA0527L,0xDC7B7EEEL},{8L,9L,(-1L)},{(-4L),0x4F800107L,5L},{1L,0xA85C7F73L,5L}},{{0x3EF6E303L,(-9L),(-1L)},{(-1L),0x3EF6E303L,0xDC7B7EEEL},{0xA911668AL,(-1L),(-1L)},{6L,0x3EF6E303L,(-1L)},{0x7E33B5EFL,(-9L),0x13B466B1L},{0x30AA5EB6L,0x30AA5EB6L,(-9L)},{0x30AA5EB6L,0x28F378ACL,0x99B7156DL},{1L,0x8F8AB729L,6L}},{{0L,9L,0x87E36417L},{0xACB5290AL,1L,6L},{0x9F563CE1L,0L,0x99B7156DL},{0x767F7E40L,0x03B63CA1L,(-9L)},{4L,0x03B63CA1L,0x7E33B5EFL},{0x3F45BEC6L,0L,0x3EF6E303L},{0x03B63CA1L,1L,0x66B12AB2L},{0x3A46B140L,9L,9L}},{{0x03B63CA1L,0x8F8AB729L,0xA911668AL},{0x3F45BEC6L,0x28F378ACL,(-1L)},{4L,0x30AA5EB6L,(-1L)},{0x767F7E40L,0x3A46B140L,0xA911668AL},{0x9F563CE1L,0x767F7E40L,9L},{0xACB5290AL,0x666118BBL,0x66B12AB2L},{0L,0x767F7E40L,0x3EF6E303L},{1L,0x3A46B140L,0x7E33B5EFL}},{{0x30AA5EB6L,0x30AA5EB6L,(-9L)},{0x30AA5EB6L,0x28F378ACL,0x99B7156DL},{1L,0x8F8AB729L,6L},{0L,9L,0x87E36417L},{0xACB5290AL,1L,6L},{0x9F563CE1L,0L,0x99B7156DL},{0x767F7E40L,0x03B63CA1L,(-9L)},{4L,0x03B63CA1L,0x7E33B5EFL}}};
                int i, j, k;
                (*g_822) = (!(safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(g_320, 4)) && func_24(l_1090, (p_4 = p_3), ((*l_1098) = func_12(p_3, ((*g_676) |= 255UL), func_7(((*l_1053) = ((safe_sub_func_uint32_t_u_u((*l_1026), (l_1093 != l_1093))) > (safe_sub_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s(l_1051, (*l_1026))) < l_1052), g_402[0])))), &l_1052, &l_1051, g_336[1]), g_334, g_523[4])), &l_1051)), 65528UL)));
                p_4 = &l_1052;

                ;
                (*l_1098) = l_976[0][6];
            }

            ;
            (*l_1108) = ((safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((g_900[0][3][0] | (safe_mul_func_uint8_t_u_u(1UL, (safe_sub_func_uint32_t_u_u(0xA26608ACL, l_1052))))), 9)), (safe_mod_func_int32_t_s_s(((*l_1099) = (((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint16_t_u_u((((*l_1099) & func_20((p_3 = p_4))) & 0x24E23F78L), (0x14438657L ^ (*p_4)))), 7)) >= g_402[1]) <= (*l_1108))), l_1166)))) || (*l_1026));

            ;
            if ((l_1054 != (l_1167 = l_1054)))
            {
                (*g_1170) = g_1168;
                l_1171[2]++;
            }
            else
            {
                unsigned short l_1176 = 65527UL;
                int l_1185 = 1L;
                int l_1189[9] = {0xD62A51EDL,0xD62A51EDL,(-1L),0xD62A51EDL,0xD62A51EDL,(-1L),0xD62A51EDL,0xD62A51EDL,(-1L)};
                char l_1190 = 1L;
                char ***l_1208 = &g_1204[1][7];
                unsigned char *l_1226 = &l_1031;
                int l_1229 = (-10L);
                int l_1230 = 0xAA17F5C4L;
                int l_1236 = 6L;
                int i;
                if (((*g_1169) > (safe_unary_minus_func_int8_t_s((*l_1099)))))
                {
                    char *l_1175 = &g_92;
                    int l_1187[4][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    unsigned l_1191[6][7] = {{0UL,0xA9CEDBAFL,0x383E3FA6L,0xA9CEDBAFL,0UL,0UL,0xA9CEDBAFL},{6UL,0xB94EEBF8L,6UL,0x6FAE4240L,0x6FAE4240L,6UL,0xB94EEBF8L},{0xA9CEDBAFL,0xA20F2D78L,0x383E3FA6L,0x383E3FA6L,0xA20F2D78L,0xA9CEDBAFL,0xA20F2D78L},{6UL,0x6FAE4240L,0x6FAE4240L,6UL,0xB94EEBF8L,6UL,0x6FAE4240L},{0UL,0UL,0xA9CEDBAFL,0x383E3FA6L,0xA9CEDBAFL,0UL,0UL},{0UL,0x6FAE4240L,4294967294UL,0x6FAE4240L,0UL,0UL,0x6FAE4240L}};
                    int i, j;
                    p_4 = p_3;
                    (*l_1026) = ((((*l_1175) = (-5L)) != l_1176) | (0L < l_1177));
                    if ((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(l_1182[0], (*l_1099))), (*l_1099))))
                    {
                        char l_1183 = 0xA6L;
                        int l_1184 = 0xA1CC2E4BL;
                        int l_1186[7][4][9] = {{{0x25D906A4L,0x25D906A4L,0x9D4BBF15L,0x25D906A4L,0x25D906A4L,0x9D4BBF15L,0x25D906A4L,0x25D906A4L,0x9D4BBF15L},{0x33AA2458L,(-3L),(-8L),(-3L),0x33AA2458L,8L,0x33AA2458L,(-3L),(-8L)},{0x25D906A4L,0x25D906A4L,0x9D4BBF15L,0x25D906A4L,0x25D906A4L,0x9D4BBF15L,0x25D906A4L,0x25D906A4L,0x9D4BBF15L},{0x33AA2458L,(-3L),(-8L),(-3L),0x33AA2458L,8L,0x33AA2458L,(-3L),0x33AA2458L}},{{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L},{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L}},{{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L},{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L}},{{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L},{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L}},{{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L},{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L}},{{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L},{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,(-1L),0x33AA2458L,(-1L),0xE183DF52L,(-3L),0xE183DF52L,(-1L),0x33AA2458L}},{{4L,4L,0x25D906A4L,4L,4L,0x25D906A4L,4L,4L,0x25D906A4L},{0xE183DF52L,8L,0xE183DF52L,8L,(-8L),(-1L),(-8L),8L,0xE183DF52L},{0x9D4BBF15L,0x9D4BBF15L,4L,0x9D4BBF15L,0x9D4BBF15L,4L,0x9D4BBF15L,0x9D4BBF15L,4L},{(-8L),8L,0xE183DF52L,8L,(-8L),(-1L),(-8L),8L,0xE183DF52L}}};
                        int i, j, k;
                        l_1191[5][2]++;
                        p_4 = p_3;
                    }
                    else
                    {
                        p_3 = (void*)0;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned short l_1196 = 65535UL;
                    int l_1211 = 0x7672B308L;
                    int l_1234[6][8] = {{0xA265AD83L,0L,0L,0xA265AD83L,0xC3DED10AL,0xF99FA451L,0xC3DED10AL,0xA265AD83L},{0L,0xC3DED10AL,0L,8L,0xE35F8BADL,0xE35F8BADL,8L,0L},{0xC3DED10AL,0xC3DED10AL,0xE35F8BADL,0xF99FA451L,9L,0xF99FA451L,0xE35F8BADL,0xC3DED10AL},{0xC3DED10AL,0L,8L,0xE35F8BADL,0xE35F8BADL,8L,0L,0xC3DED10AL},{0L,0xA265AD83L,0xC3DED10AL,0xF99FA451L,0xC3DED10AL,0xA265AD83L,0L,0L},{0xA265AD83L,0xF99FA451L,8L,8L,0xF99FA451L,0xA265AD83L,0xE35F8BADL,0xA265AD83L}};
                    unsigned char l_1238 = 248UL;
                    int i, j;
                    if (((!g_115) || (!l_1196)))
                    {
                        unsigned l_1198 = 4294967289UL;
                        char ****l_1206[1][6] = {{&g_1203[7][3][2],&g_1203[7][3][2],&g_1203[7][3][2],&g_1203[7][3][2],&g_1203[7][3][2],&g_1203[7][3][2]}};
                        unsigned short *l_1210 = &l_1176;
                        int l_1217 = 9L;
                        int i, j;
                        l_1197 = p_4;

                        ;
                        ++l_1198;
                        (*l_1108) = (safe_lshift_func_int8_t_s_u(((((*l_1210) = ((l_1207 = g_1203[0][5][3]) != (g_1209 = l_1208))) >= ((((l_1211 ^= (~func_20(p_4))) < 4L) >= (safe_lshift_func_int16_t_s_s(func_20((l_1026 = func_22(l_1198))), 0))) < (safe_lshift_func_uint8_t_u_s((*l_1099), l_1196)))) < 0x53L), g_1216));

                        ;
                        ;
                        ++l_1219[5][1];
                    }
                    else
                    {
                        unsigned char *l_1227[2];
                        int l_1228 = 1L;
                        int l_1231 = 0L;
                        int l_1232 = 0xF65ADDC2L;
                        int l_1235 = 0x5417D31EL;
                        int l_1237 = (-1L);
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1227[i] = &l_1031;
                        (*l_1099) |= (*p_4);
                        (*l_1026) = (safe_div_func_uint8_t_u_u((*l_1197), ((*l_1226) ^= (safe_mod_func_int8_t_s_s((l_1054 == (l_1227[0] = l_1226)), (*g_676))))));
                        ++l_1238;
                    }

                    ;
                    ;
                    ;
                    (*l_1197) |= ((*l_1099) = (safe_add_func_uint16_t_u_u(l_1196, g_523[4])));
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
        }



        ;

        ;
    }
    else
    {
        unsigned char l_1243 = 0x3FL;
        int l_1253 = 3L;
        int l_1256 = (-5L);
        int *l_1262[1][8][9] = {{{&g_6,(void*)0,&g_6,&l_1253,&g_70,&g_70,&l_1256,&g_70,&l_1256},{&g_6,&g_70,&l_1253,&l_1256,&l_1233,&l_1233,&l_1256,&l_1253,&g_70},{&g_6,&g_6,&g_6,&l_1233,&g_1066,&g_1066,&l_1256,(void*)0,&g_1066},{&l_1256,(void*)0,&g_6,&l_1253,&l_1256,&g_6,&l_1256,&g_70,&g_6},{&g_70,&l_1256,&g_6,&l_1256,&l_1233,(void*)0,&l_1253,(void*)0,&l_1233},{&l_1256,&g_70,&g_70,&l_1256,&g_6,&g_6,(void*)0,(void*)0,&l_1233},{&g_1066,&g_1066,&l_1233,&l_1253,&g_6,&l_1253,&g_6,&l_1256,(void*)0},{&l_1256,&g_6,&l_1253,&l_1233,&g_6,(void*)0,&g_1066,&l_1233,&g_1066}}};
        int i, j, k;
        l_1243++;
        for (g_188 = 0; (g_188 == (-16)); --g_188)
        {
            unsigned l_1252[2][6][8] = {{{1UL,0x8388796EL,0x81BDFAEEL,0x8388796EL,1UL,1UL,0x8388796EL,0x81BDFAEEL},{1UL,1UL,0x8388796EL,0x81BDFAEEL,0x8388796EL,1UL,1UL,0x8388796EL},{1UL,0x8388796EL,0x8388796EL,1UL,0x0AE200DFL,1UL,0x8388796EL,0x8388796EL},{0x8388796EL,0x0AE200DFL,0x81BDFAEEL,0x81BDFAEEL,0x0AE200DFL,0x8388796EL,0x0AE200DFL,0x81BDFAEEL},{1UL,0x0AE200DFL,1UL,0x8388796EL,0x8388796EL,1UL,0x81BDFAEEL,0x8388796EL},{0x0AE200DFL,1UL,1UL,1UL,0x0AE200DFL,0x0AE200DFL,1UL,1UL}},{{0x0AE200DFL,0x0AE200DFL,1UL,1UL,1UL,0x0AE200DFL,0x0AE200DFL,1UL},{0x8388796EL,1UL,1UL,0x8388796EL,0x81BDFAEEL,0x8388796EL,1UL,1UL},{1UL,0x81BDFAEEL,1UL,1UL,0x81BDFAEEL,1UL,0x81BDFAEEL,1UL},{0x8388796EL,0x81BDFAEEL,0x8388796EL,1UL,1UL,0x8388796EL,0x81BDFAEEL,0x8388796EL},{0x0AE200DFL,1UL,1UL,1UL,0x0AE200DFL,0x0AE200DFL,1UL,1UL},{0x0AE200DFL,0x0AE200DFL,1UL,1UL,1UL,0x0AE200DFL,0x0AE200DFL,1UL}}};
            int l_1254 = 0xF231827FL;
            int l_1255[3][4];
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1255[i][j] = 2L;
            }
        }
    }



    ;

    ;
    return l_1269;


}







static int * func_7(unsigned char p_8, int * p_9, int * p_10, unsigned short p_11)
{
    int *l_966 = &g_70;
    int *l_967 = &g_70;
    l_967 = l_966;
    return p_10;


}







static int * func_12(int * p_13, unsigned char p_14, int * p_15, short p_16, unsigned p_17)
{
    int *l_948 = &g_70;
    char *l_959[10] = {&g_82,&g_82,&g_92,&g_82,&g_82,&g_92,&g_82,&g_82,&g_92,&g_82};
    int l_960 = 0x7A691008L;
    unsigned char ***l_961 = (void*)0;
    short *l_962 = &g_249;
    int **l_964 = (void*)0;
    int *l_965 = &g_70;
    int i;
    p_13 = l_948;

    ;
    (*p_13) |= (safe_lshift_func_uint16_t_u_u((func_20(l_948) > g_402[3]), 8));
    l_948 = func_22((g_334 != ((*l_948) & (((safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((*l_962) ^= (p_14 || (safe_rshift_func_int8_t_s_s(((((*l_948) || ((l_960 |= p_17) >= g_180)) | (l_961 != l_961)) ^ p_16), 4)))), (*l_948))), (*l_948))) <= (*l_948)) > 0x4740L))));

    ;
    (*p_13) = (*l_948);
    return l_965;


}







static unsigned char func_20(int * p_21)
{
    unsigned char l_945[1][9];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
            l_945[i][j] = 8UL;
    }
    l_945[0][8]++;
    return l_945[0][8];
}







static int * func_22(unsigned short p_23)
{
    unsigned l_911 = 4UL;
    int *l_912 = &g_70;
    int *l_913[6] = {&g_6,&g_6,&g_6,&g_6,&g_6,&g_6};
    unsigned char l_914 = 1UL;
    char l_927 = 0x59L;
    int l_939 = 0xB9CBCA70L;
    int i;
    l_914 ^= ((*l_912) = l_911);
    if (p_23)
    {
        int l_915 = 0xCA14DA42L;
        unsigned short l_919 = 0x9B41L;
        int *l_922[1];
        unsigned short *l_923 = &g_402[3];
        unsigned *l_926[4][7];
        short l_928 = 5L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_922[i] = &g_70;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 7; j++)
                l_926[i][j] = (void*)0;
        }
        l_915 = p_23;
        (*g_916) = l_912;

        ;
        l_922[0] = func_36(((l_927 = (safe_sub_func_uint8_t_u_u(l_919, p_23))) < 0x995264C5L), p_23, (*l_912), l_928);



    }
    else
    {
        unsigned l_929[6][1][8] = {{{1UL,0x7FBA1B27L,0x528C6472L,1UL,0x528C6472L,0x7FBA1B27L,1UL,0xE88DF553L}},{{0x9B066B25L,4294967288UL,0xD9590747L,1UL,1UL,0xD9590747L,4294967288UL,0x9B066B25L}},{{0xE88DF553L,1UL,0x7FBA1B27L,0x528C6472L,1UL,0x528C6472L,0xE88DF553L,0x9B066B25L}},{{4294967288UL,0xE88DF553L,0x528C6472L,4294967288UL,0x7FBA1B27L,0x7FBA1B27L,4294967288UL,0x528C6472L}},{{0x9B066B25L,0x9B066B25L,7UL,1UL,4294967288UL,7UL,4294967288UL,1UL}},{{0x528C6472L,1UL,0x528C6472L,0x7FBA1B27L,1UL,0xE88DF553L,0xE88DF553L,1UL}}};
        short *l_936 = &g_249;
        short **l_937 = &l_936;
        int *l_938[3][8] = {{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70},{&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70,&g_70}};
        int i, j, k;
        l_938[0][3] = func_36(g_274, p_23, l_929[1][0][3], ((safe_sub_func_uint32_t_u_u(((g_274 ^ ((p_23 < (safe_sub_func_uint16_t_u_u(g_668[5], g_523[4]))) | (safe_add_func_uint16_t_u_u(p_23, (((*l_937) = l_936) != &g_523[4]))))) == p_23), p_23)) | p_23));



    }


    l_939 = ((*l_912) ^= p_23);
    for (g_905 = 13; (g_905 < 60); g_905++)
    {
        unsigned short l_942[6] = {0UL,0x3CAAL,0x3CAAL,0UL,0x3CAAL,0x3CAAL};
        int i;
        l_942[5]--;
    }
    return &g_6;


}







static unsigned short func_24(unsigned p_25, int * p_26, int * p_27, int * p_28)
{
    unsigned l_908 = 6UL;
    ++l_908;
    return g_336[1];
}







static int * func_29(int p_30, int p_31, char p_32)
{
    int l_614[2];
    int *l_619 = &l_614[0];
    union U0 **l_624 = &g_106;
    unsigned char *l_625 = &g_153[6][7][0];
    char *l_686[9] = {&g_92,(void*)0,(void*)0,&g_92,(void*)0,(void*)0,&g_92,(void*)0,(void*)0};
    char **l_685[6] = {&l_686[4],&l_686[4],&l_686[4],&l_686[4],&l_686[4],&l_686[4]};
    short *l_703 = (void*)0;
    int *l_730 = &l_614[0];
    unsigned short l_846[4][5];
    short *l_856[1];
    int *l_903 = &g_6;
    int *l_906 = &l_614[1];
    int *l_907 = &g_6;
    int i, j;
    for (i = 0; i < 2; i++)
        l_614[i] = (-1L);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_846[i][j] = 0xF406L;
    }
    for (i = 0; i < 1; i++)
        l_856[i] = &g_523[8];
    for (g_274 = 0; (g_274 <= 4); g_274 = safe_add_func_int8_t_s_s(g_274, 3))
    {
        char l_618[10][1] = {{0x29L},{0L},{0L},{0x29L},{6L},{0x29L},{0L},{0L},{0x29L},{6L}};
        int i, j;
        l_618[3][0] &= (l_614[0] = (-10L));
        (*g_520) = &l_614[0];

        ;
        l_619 = (*g_520);
    }


    if ((safe_mod_func_uint8_t_u_u(((*l_625) = (safe_mod_func_uint16_t_u_u((l_624 == (*g_192)), (*l_619)))), g_92)))
    {
        char l_656 = (-9L);
        int l_657 = 7L;
        int l_659 = 0L;
        int l_664 = 0x3C724AE9L;
        int l_666[4][7][4] = {{{0x374B378BL,(-1L),(-1L),0x374B378BL},{0x374B378BL,0x0817C1CCL,0x148B674FL,0xFCC4C244L},{0x7371334AL,0x374B378BL,0x2088A9F6L,(-7L)},{0x78D56F81L,0L,0x2088A9F6L,0x374B378BL},{0xFCC4C244L,0x78D56F81L,(-1L),0x7371334AL},{0x67C7A5A9L,0x148B674FL,0x78D56F81L,0x78D56F81L},{0x0817C1CCL,0x0817C1CCL,0x78D56F81L,0x2088A9F6L}},{{0x67C7A5A9L,0L,(-1L),0x148B674FL},{0xFCC4C244L,(-1L),0x2088A9F6L,(-1L)},{0x2088A9F6L,(-1L),0xFCC4C244L,0x148B674FL},{(-1L),0L,0x67C7A5A9L,0x2088A9F6L},{0x78D56F81L,0x0817C1CCL,0x0817C1CCL,0x78D56F81L},{0x78D56F81L,0x148B674FL,0x67C7A5A9L,0x7371334AL},{(-1L),0x78D56F81L,0xFCC4C244L,0x374B378BL}},{{0x2088A9F6L,(-7L),0x2088A9F6L,0x374B378BL},{0xFCC4C244L,0x78D56F81L,(-1L),0x7371334AL},{0x67C7A5A9L,0x148B674FL,0x78D56F81L,0x78D56F81L},{0x0817C1CCL,0x0817C1CCL,0x78D56F81L,0x2088A9F6L},{0x67C7A5A9L,0L,(-1L),0x148B674FL},{0xFCC4C244L,(-1L),0x2088A9F6L,(-1L)},{0x2088A9F6L,(-1L),0xFCC4C244L,0x148B674FL}},{{(-1L),0L,0x67C7A5A9L,0x2088A9F6L},{0x78D56F81L,0x0817C1CCL,0x0817C1CCL,0x78D56F81L},{0x78D56F81L,0x148B674FL,0x67C7A5A9L,0x7371334AL},{(-1L),0x78D56F81L,0xFCC4C244L,0x374B378BL},{0x2088A9F6L,(-7L),0x2088A9F6L,0x374B378BL},{0xFCC4C244L,0x78D56F81L,(-1L),0x7371334AL},{0x67C7A5A9L,0x148B674FL,(-1L),(-1L)}}};
        unsigned char l_697 = 0UL;
        int *l_731 = &l_666[2][1][0];
        int ****l_739[6][6][7] = {{{(void*)0,&g_519,(void*)0,&g_519,&g_519,&g_519,&g_519},{(void*)0,&g_519,&g_519,(void*)0,&g_519,&g_519,&g_519},{&g_519,&g_519,(void*)0,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,(void*)0,&g_519}},{{&g_519,(void*)0,&g_519,(void*)0,&g_519,(void*)0,&g_519},{&g_519,(void*)0,&g_519,(void*)0,&g_519,(void*)0,&g_519},{&g_519,&g_519,&g_519,&g_519,(void*)0,&g_519,&g_519},{&g_519,(void*)0,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519}},{{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,(void*)0},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,(void*)0},{&g_519,&g_519,(void*)0,&g_519,(void*)0,&g_519,&g_519},{&g_519,(void*)0,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,(void*)0},{(void*)0,(void*)0,&g_519,&g_519,&g_519,&g_519,(void*)0}},{{&g_519,&g_519,&g_519,&g_519,(void*)0,&g_519,&g_519},{&g_519,&g_519,(void*)0,&g_519,&g_519,(void*)0,&g_519},{&g_519,(void*)0,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,(void*)0,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519}},{{&g_519,&g_519,&g_519,(void*)0,&g_519,&g_519,&g_519},{(void*)0,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,(void*)0,&g_519,(void*)0,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519},{&g_519,(void*)0,(void*)0,&g_519,&g_519,&g_519,(void*)0}},{{&g_519,&g_519,&g_519,(void*)0,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,(void*)0},{(void*)0,&g_519,(void*)0,&g_519,&g_519,&g_519,&g_519},{&g_519,&g_519,(void*)0,(void*)0,&g_519,&g_519,&g_519},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,(void*)0},{&g_519,&g_519,&g_519,&g_519,&g_519,&g_519,&g_519}}};
        unsigned short l_748 = 0xC913L;
        union U0 **l_777 = &g_106;
        short *l_808 = &g_523[4];
        short l_834 = 0L;
        int l_840 = 4L;
        union U0 *l_850 = &g_104[1];
        int i, j, k;
        for (g_514 = 8; (g_514 >= 0); g_514 -= 1)
        {
            int *l_627 = &g_70;
            char l_658 = 2L;
            int l_663 = (-1L);
            int l_665 = 0x7A16717FL;
            int l_667 = (-1L);
            int i;
            if ((g_420[g_514] | g_92))
            {
                unsigned l_626 = 0xF9263B17L;
                for (p_32 = 2; (p_32 <= 7); p_32 += 1)
                {
                    int i;
                    g_420[p_32] &= l_626;
                }
                return l_627;



            }
            else
            {
                unsigned l_647 = 9UL;
                int l_661 = (-3L);
                int l_662[4] = {(-8L),(-8L),(-8L),(-8L)};
                unsigned *l_691 = &l_647;
                int *l_696[8][1] = {{&l_662[0]},{(void*)0},{&l_662[0]},{&l_662[0]},{(void*)0},{&l_662[0]},{&l_662[0]},{(void*)0}};
                int i, j;
                for (g_274 = 0; (g_274 <= 8); g_274 += 1)
                {
                    unsigned *l_628 = &g_180;
                    int ***l_645 = &g_520;
                    int l_660[10] = {0x8C624A98L,0x011AA4A3L,0x011AA4A3L,0x8C624A98L,(-10L),0x8C624A98L,0x011AA4A3L,0x011AA4A3L,0x8C624A98L,(-10L)};
                    unsigned char **l_678[10] = {&g_676,&l_625,&l_625,&g_676,&l_625,&l_625,&g_676,&l_625,&l_625,&g_676};
                    int i;
                    if (((-3L) > (((*l_628) = (p_30 && 8UL)) & (safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((safe_unary_minus_func_uint32_t_u(((g_104[7].f0 != (*l_627)) && (*l_627)))), g_402[3])), 1)))))
                    {
                        short *l_642 = (void*)0;
                        short *l_643 = (void*)0;
                        short *l_644[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_644[i] = (void*)0;
                        g_420[g_274] = ((*l_619) = ((safe_add_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((g_249 = (*l_627)), (*l_619))) || ((void*)0 != l_645)), g_57)), 0xBA46EB7CL)), g_153[6][7][0])) != 0x1D03L));
                    }
                    else
                    {
                        unsigned short l_646 = 1UL;
                        int *l_648 = &g_6;
                        l_647 = l_646;
                        return l_648;



                    }
                    for (p_30 = 0; (p_30 <= 7); p_30 += 1)
                    {
                        int *l_649 = &l_614[0];
                        int *l_650 = &g_70;
                        int *l_651 = &l_614[1];
                        int *l_652 = &l_614[0];
                        int *l_653 = &g_70;
                        int *l_654 = &g_70;
                        int *l_655[4] = {&g_6,&g_6,&g_6,&g_6};
                        unsigned char ***l_677 = &g_675;
                        unsigned char ***l_679 = &l_678[9];
                        unsigned char *l_682 = &g_479;
                        char ***l_687 = &l_685[5];
                        int i;
                        ++g_668[5];
                        l_657 &= (safe_div_func_int32_t_s_s((((+g_334) ^ (~(safe_rshift_func_int8_t_s_s((((*l_677) = g_675) != ((*l_679) = l_678[9])), ((safe_rshift_func_uint8_t_u_u(((*l_625) = ((*l_619) != g_523[3])), ((*l_682)--))) & (*l_619)))))) != ((*l_628) = g_6)), l_664));
                        (*l_687) = l_685[2];
                    }
                }
                (*l_627) |= ((*l_619) |= ((l_664 & ((((*l_691) = (safe_unary_minus_func_uint8_t_u((p_32 ^ p_30)))) >= ((l_666[1][4][3] = g_57) || (2L >= ((safe_mul_func_int16_t_s_s(0x21A0L, g_153[6][7][0])) && 0x93DEL)))) > 0x53L)) == 0xD011L));
                l_697++;
                (*g_519) = &l_696[1][0];

                ;
            }


            for (l_657 = 2; (l_657 <= 7); l_657 += 1)
            {
                int *l_700[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_700[i] = &l_666[1][4][3];
                return &g_6;



            }
            for (l_697 = 1; (l_697 <= 7); l_697 += 1)
            {
                int **l_701 = &l_619;
                short l_702 = 0L;
                short *l_705 = &g_523[4];
                int l_718 = 0xC62DAD0CL;
                int l_720[2][10][3] = {{{0xDEC40B05L,9L,0xC1550166L},{0xDEC40B05L,0xC1550166L,0x2C4001A9L},{9L,(-1L),0xD1518E04L},{0x2C4001A9L,0xDACED133L,0xC8BDD4F7L},{0xDACED133L,(-1L),0x73EC1238L},{0x1416DF16L,0xC1550166L,0x1416DF16L},{(-1L),9L,0x1416DF16L},{1L,0x05BF62A7L,0x73EC1238L},{0x73EC1238L,0x1416DF16L,0xC8BDD4F7L},{9L,(-8L),0xD1518E04L}},{{0x73EC1238L,7L,0x2C4001A9L},{1L,1L,0xC1550166L},{(-1L),1L,0x05BF62A7L},{0x1416DF16L,7L,1L},{0xDACED133L,(-8L),(-1L)},{0x2C4001A9L,0x1416DF16L,1L},{9L,0x05BF62A7L,0x05BF62A7L},{0xDEC40B05L,9L,0xC1550166L},{0xDEC40B05L,0xC1550166L,0x2C4001A9L},{9L,(-1L),0xD1518E04L}}};
                unsigned short l_722[7] = {6UL,6UL,65527UL,6UL,6UL,65527UL,6UL};
                int i, j, k;
                l_657 &= (((*l_627) > (l_666[1][1][2] | (g_115 && g_98))) >= g_269);
                for (g_249 = 2; (g_249 <= 7); g_249 += 1)
                {
                    short **l_704[9][5] = {{&l_703,&l_703,&l_703,&l_703,&l_703},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_703,&l_703,&l_703,&l_703,&l_703},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_703,&l_703,&l_703,&l_703,&l_703},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_703,&l_703,&l_703,&l_703,&l_703},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&l_703,&l_703,&l_703,&l_703,&l_703}};
                    int l_717 = 0x32D2A1FFL;
                    int l_719 = 0xFF47C385L;
                    int l_721[1];
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_721[i] = (-1L);
                    if (((*l_619) = ((l_705 = l_703) == (void*)0)))
                    {
                        unsigned short *l_710 = &g_336[1];
                        int *l_713 = &l_664;
                        int *l_714 = &l_666[1][6][0];
                        int *l_715 = &l_614[0];
                        int *l_716[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_716[i] = (void*)0;
                        (*l_627) = (safe_rshift_func_int8_t_s_s(0xF3L, (**l_701)));
                        (**l_701) = (g_94 != ((safe_mul_func_uint16_t_u_u(g_82, (p_32 || (**l_701)))) != ((*l_710)++)));
                        if (p_31)
                            continue;
                        ++l_722[6];
                    }
                    else
                    {
                        unsigned short l_729 = 0x6A61L;
                        l_729 ^= ((*l_619) = (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(g_95, p_30)), 1)));
                        if (p_32)
                            break;
                        if ((*l_627))
                            continue;
                    }

                    ;
                    return &g_70;



                }

                ;
            }
        }


        for (g_274 = 0; (g_274 <= 36); g_274++)
        {
            unsigned l_736 = 9UL;
            unsigned short *l_741[5] = {&g_115,&g_115,&g_115,&g_115,&g_115};
            int l_742 = 0x29801DE9L;
            int l_743 = (-3L);
            short l_744 = 0x9A35L;
            int l_745 = 0xCB94991DL;
            int l_746 = 0x43029512L;
            int l_747[7] = {4L,4L,(-8L),4L,4L,(-8L),4L};
            unsigned char l_756 = 246UL;
            union U0 **l_766 = &g_106;
            int i;
            (*l_731) |= (safe_div_func_uint16_t_u_u(((*l_730) = (((*l_625) |= (~(l_736 || (((safe_sub_func_int16_t_s_s(0x9BA0L, ((!(&g_324 != &g_519)) == 0x9FL))) || (((void*)0 == l_739[0][0][4]) != p_31)) && g_740)))) <= g_188)), 0xEA4CL));
            --l_748;
            for (l_656 = 11; (l_656 > (-12)); l_656 = safe_sub_func_int8_t_s_s(l_656, 3))
            {
                short l_755 = 5L;
                unsigned char l_762[8] = {0x17L,250UL,0x17L,250UL,0x17L,250UL,0x17L,250UL};
                int i;
                for (p_30 = 0; (p_30 <= 14); p_30 = safe_add_func_int16_t_s_s(p_30, 3))
                {
                    --l_756;
                    (*l_730) |= 0x2A2F5BECL;
                }
                if (p_32)
                    continue;
                for (g_188 = (-4); (g_188 != (-11)); g_188 = safe_sub_func_int8_t_s_s(g_188, 2))
                {
                    int l_761 = 0x35BD6130L;
                    l_762[0]--;
                }
            }
            (*l_731) ^= (safe_unary_minus_func_uint32_t_u((l_624 == l_766)));
        }
        for (p_31 = 29; (p_31 < (-17)); p_31 = safe_sub_func_int32_t_s_s(p_31, 1))
        {
            unsigned char l_769 = 1UL;
            int l_782[8][9] = {{0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L,0x0949D9C9L},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
            unsigned char l_819[3];
            int *l_821 = &l_664;
            union U0 *l_849 = &g_104[7];
            int l_851 = 0L;
            short *l_857 = (void*)0;
            int i, j;
            for (i = 0; i < 3; i++)
                l_819[i] = 0xD1L;
            (*l_731) ^= ((*l_619) = l_769);
        }
    }
    else
    {
        int *l_904 = &l_614[1];
        g_905 &= func_33(l_904, p_31);
    }


    return l_907;



}







static unsigned func_33(int * p_34, unsigned p_35)
{
    unsigned l_350 = 0xC29EBB6EL;
    short *l_355 = &g_249;
    int l_369 = 0xC7A9D6D4L;
    int l_425 = (-1L);
    int l_427 = (-1L);
    int l_432 = 0x9D1DCC96L;
    int l_433 = 0L;
    int l_434[3][2][8] = {{{0x05F31D6AL,(-1L),0xA27A642BL,(-1L),0x05F31D6AL,0L,0x05F31D6AL,(-1L)},{(-1L),(-1L),(-1L),0xD5EA8174L,0x05F31D6AL,0xD5EA8174L,(-1L),(-1L)}},{{0x05F31D6AL,0xD5EA8174L,(-1L),(-1L),(-1L),0xD5EA8174L,0x05F31D6AL,0xD5EA8174L},{0x05F31D6AL,(-1L),0xA27A642BL,(-1L),0x05F31D6AL,0L,0x05F31D6AL,(-1L)}},{{(-1L),(-1L),(-1L),0xD5EA8174L,0x05F31D6AL,0xD5EA8174L,(-1L),(-1L)},{0x05F31D6AL,0xD5EA8174L,(-1L),(-1L),(-1L),0xD5EA8174L,0x05F31D6AL,0xD5EA8174L}}};
    unsigned char l_497[10][1];
    unsigned l_532 = 0xF044905EL;
    union U0 ***l_539[7] = {&g_193[4][1],&g_193[4][1],(void*)0,&g_193[4][1],&g_193[4][1],(void*)0,&g_193[4][1]};
    int i, j, k;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
            l_497[i][j] = 0xDFL;
    }
    for (p_35 = 0; (p_35 < 50); p_35++)
    {
        char l_366[10] = {0x84L,0x84L,0x84L,0x84L,0x84L,0x84L,0x84L,0x84L,0x84L,0x84L};
        int l_374 = 0x0C308B3AL;
        int l_375 = (-1L);
        unsigned short *l_404 = &g_115;
        short l_423 = (-1L);
        int l_426 = 0x40E1191EL;
        int l_430[5] = {8L,8L,8L,8L,8L};
        unsigned char **l_454 = (void*)0;
        int ***l_518 = (void*)0;
        unsigned char l_526 = 247UL;
        unsigned char l_548 = 0xC4L;
        union U0 *l_552 = (void*)0;
        union U0 *l_553 = &g_104[7];
        unsigned short l_556[2][9] = {{65532UL,0x86D5L,0x86D5L,65532UL,0x86D5L,0x86D5L,65532UL,0x86D5L,0x86D5L},{65535UL,0x8C84L,0x8C84L,65535UL,0x8C84L,0x8C84L,65535UL,0x8C84L,0x8C84L}};
        unsigned *l_566 = (void*)0;
        unsigned *l_567 = (void*)0;
        unsigned *l_568 = &g_180;
        int *l_573 = &l_430[4];
        int i, j;
        if (l_350)
        {
            short *l_356 = &g_249;
            int l_357[5][2] = {{0xA5762564L,0xD49BB3FBL},{0xA5762564L,0xD49BB3FBL},{0xA5762564L,0xD49BB3FBL},{0xA5762564L,0xD49BB3FBL},{0xA5762564L,0xD49BB3FBL}};
            int **l_358 = &g_56;
            unsigned short l_435 = 1UL;
            int l_445 = (-3L);
            int i, j;
            (*l_358) = func_36((safe_mul_func_int16_t_s_s(4L, (safe_mod_func_uint16_t_u_u(0xAA5AL, p_35)))), p_35, g_57, ((((l_355 != (l_356 = l_355)) & (((*l_355) = (0x641EL >= (p_35 > l_350))) <= g_92)) >= l_357[1][0]) == p_35));

            ;
            for (l_350 = 0; (l_350 > 26); l_350++)
            {
                int l_368 = 0x14DB46A2L;
                int l_371 = 0L;
                int l_372 = 0x18963462L;
                int l_376 = 0x13E8822BL;
                unsigned char l_401 = 0xA0L;
                int l_428 = 9L;
                int l_429 = (-7L);
                int l_431[4];
                unsigned l_443 = 0x76E67036L;
                char *l_444 = &l_366[0];
                unsigned short l_452[10] = {0x61C1L,0xC0F9L,0x61C1L,0x61C1L,0xC0F9L,0x61C1L,0x61C1L,0xC0F9L,0x61C1L,0x61C1L};
                short l_478 = 0x2552L;
                int i;
                for (i = 0; i < 4; i++)
                    l_431[i] = 0x3F9184D6L;
                if (l_350)
                {
                    short l_367 = (-3L);
                    char l_370 = 5L;
                    int l_373 = 0x8CE73DE4L;
                    for (g_180 = 1; (g_180 <= 6); g_180 += 1)
                    {
                        int *l_361 = &l_357[1][0];
                        int *l_362 = (void*)0;
                        int *l_363 = &l_357[1][0];
                        int *l_364 = &l_357[1][0];
                        int *l_365[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_365[i] = &l_357[1][0];
                        ++g_377;
                        (*l_358) = (void*)0;

                        ;
                    }
                    (*g_380) = (*p_34);
                }
                else
                {
                    union U0 *l_381 = (void*)0;
                    int l_392 = 0xF5D29A8CL;
                    for (g_249 = 1; (g_249 <= 5); g_249 += 1)
                    {
                        union U0 **l_382 = (void*)0;
                        union U0 **l_383 = &l_381;
                        int i, j;
                        l_374 = (((*l_383) = l_381) != &g_104[(g_249 + 2)]);
                    }
                    for (g_82 = 0; (g_82 <= 7); ++g_82)
                    {
                        char *l_393 = &g_92;
                        int *l_400 = &l_376;
                        int *l_403 = &l_375;
                        (*g_380) = ((*l_403) = (((((*l_393) ^= (safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(((p_35 & g_90) || (-6L)), (safe_mul_func_int8_t_s_s(l_392, g_336[1])))), (-1L)))) && (safe_mul_func_uint8_t_u_u(g_274, (safe_mul_func_uint32_t_u_u(g_104[7].f0, ((g_402[3] ^= (safe_mod_func_int32_t_s_s(((*l_400) = (*p_34)), l_401))) < 2L)))))) || 0x0AL) != l_392));
                        (*l_358) = p_34;


                        return l_366[0];
                    }
                }
                if ((l_404 != (void*)0))
                {
                    unsigned short l_409 = 0x1643L;
                    short *l_421 = &g_249;
                    int *l_424[6][6][2] = {{{(void*)0,&l_372},{&l_357[1][0],(void*)0},{&l_376,&g_70},{&l_376,(void*)0},{&l_357[1][0],&l_372},{(void*)0,&l_375}},{{&g_70,&l_372},{&l_374,&l_357[2][0]},{&l_357[2][0],&l_369},{&l_372,&l_372},{&l_357[2][1],&l_368},{(void*)0,&l_374}},{{&l_376,(void*)0},{&l_357[1][0],&g_6},{&l_376,&l_368},{&l_376,&l_372},{&l_368,&l_368},{&g_70,&l_369}},{{&l_372,&l_357[2][0]},{&l_369,&l_357[2][0]},{&l_372,&l_369},{&g_70,&l_368},{&l_368,&l_372},{&l_376,&l_368}},{{&l_376,&g_6},{&l_357[1][0],(void*)0},{&l_376,&l_374},{(void*)0,&l_368},{&l_357[2][1],&l_372},{&l_372,&l_369}},{{&l_357[2][0],&l_357[2][0]},{&l_374,&l_372},{&g_70,&l_369},{&l_369,&l_357[1][0]},{(void*)0,&l_369},{&l_357[1][0],&l_369}}};
                    char *l_438[9];
                    int i, j, k;
                    for (i = 0; i < 9; i++)
                        l_438[i] = &l_366[4];
                    for (g_274 = 2; (g_274 <= 7); g_274 += 1)
                    {
                        short l_405 = 0xE696L;
                        int *l_406 = &l_368;
                        int *l_407 = &l_372;
                        int *l_408[5][3] = {{(void*)0,&l_357[1][0],&g_70},{&l_357[4][0],&l_357[1][0],&l_357[4][0]},{&g_6,(void*)0,&g_70},{&g_6,&g_6,(void*)0},{&l_357[4][0],(void*)0,(void*)0}};
                        unsigned char *l_422 = &l_401;
                        int i, j;
                        l_409++;
                        if ((*p_34))
                            continue;
                        (*l_406) ^= ((safe_mul_func_int8_t_s_s(g_153[6][7][0], (safe_mul_func_uint8_t_u_u(g_249, (((safe_add_func_int8_t_s_s((*l_407), (safe_lshift_func_int16_t_s_u(p_35, 8)))) != g_420[5]) <= ((*l_422) ^= ((l_421 == l_404) && p_35))))))) ^ l_423);
                    }
                    l_435++;
                    l_372 = (((g_92 = (g_402[0] == l_401)) || p_35) != (4294967295UL < (p_35 < l_431[0])));
                    l_375 |= l_425;
                }
                else
                {
                    int *l_439 = &l_427;
                    (*l_439) &= (l_369 |= (*p_34));
                    for (g_94 = 0; g_94 < 4; g_94 += 1)
                    {
                        l_431[g_94] = 0L;
                    }
                    for (g_92 = 0; (g_92 < (-27)); g_92--)
                    {
                        short l_442 = 4L;
                        (*l_439) |= l_442;
                    }
                    if ((*p_34))
                        continue;
                }
                p_34 = func_36(g_334, p_35, ((*l_444) = (((p_35 > (*p_34)) ^ (0L > g_153[6][0][1])) && l_443)), (g_180--));


                ;
                for (g_229 = 0; (g_229 != 45); ++g_229)
                {
                    unsigned char **l_455 = (void*)0;
                    int l_463 = (-3L);
                    int *l_475 = &l_374;
                    int *l_476 = (void*)0;
                    int *l_477[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    for (l_375 = 0; (l_375 == (-21)); l_375 = safe_sub_func_int8_t_s_s(l_375, 7))
                    {
                        unsigned l_453 = 0x38593839L;
                        unsigned *l_456 = &l_443;
                        l_453 &= (~l_452[8]);
                        (*g_458) |= (((*l_456) = (l_454 != l_455)) == l_376);
                        if ((*g_458))
                            continue;
                        l_369 ^= (0x19BAE856L != (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(l_463, (*p_34))), (5L || (safe_div_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_453, ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((g_269 >= g_402[3]), 11)), (1UL != g_90))) < 0xE530L))), p_35)))), l_357[1][0]))))));
                    }
                    g_479--;
                    for (l_426 = 0; (l_426 >= 11); l_426 = safe_add_func_uint8_t_u_u(l_426, 6))
                    {
                        int l_484 = 0L;
                        (*l_475) = (*g_458);
                        if (l_484)
                            continue;
                    }
                    for (g_115 = 0; (g_115 >= 58); g_115 = safe_add_func_uint16_t_u_u(g_115, 2))
                    {
                        return p_35;
                    }
                }
            }


        }
        else
        {
            int *l_489 = &g_70;
            short l_494 = 0xFAB8L;
            int *l_495 = &l_433;
            int l_528 = (-1L);
            int l_529 = 0xF161E9A5L;
            int l_530 = 0xCE6FDAF3L;
            int l_531 = 0x390D5C1CL;
            unsigned char *l_549 = &g_153[6][7][0];
            if (((p_35 | (safe_add_func_int32_t_s_s(((*l_489) = l_432), (safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((l_374 || (1L <= (((5UL > p_35) != p_35) <= ((*l_495) = (0x2C988986L && l_494))))) < p_35), g_82)), 2))))) >= g_153[5][0][2]))
            {
                return g_479;


            }
            else
            {
                unsigned l_496 = 0x3E1A043BL;
                unsigned *l_498 = &l_496;
                int **l_499 = &g_56;
                int l_515 = 1L;
                l_497[0][0] = l_496;
                (*l_495) |= (0x5D88655BL | ((*l_498) = 1UL));
                (*l_499) = p_34;


                for (l_496 = 3; (l_496 <= 8); l_496 += 1)
                {
                    for (g_82 = 3; (g_82 >= 0); g_82 -= 1)
                    {
                        int i;
                        g_420[l_496] = (-1L);
                        if (g_420[l_496])
                            break;
                        if (g_402[g_82])
                            continue;
                    }
                    for (g_229 = 3; (g_229 <= 8); g_229 += 1)
                    {
                        unsigned char *l_512[8] = {&l_497[4][0],&l_497[4][0],&l_497[4][0],&l_497[4][0],&l_497[4][0],&l_497[4][0],&l_497[4][0],&l_497[4][0]};
                        int l_513 = 0x110F1EB7L;
                        int ****l_521[6][5];
                        short *l_522[2];
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_521[i][j] = &g_519;
                        }
                        for (i = 0; i < 2; i++)
                            l_522[i] = &l_423;
                        (*l_489) ^= g_420[l_496];
                        (*l_489) = ((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint8_t_u_u(p_35, ((-3L) < p_35))), 6)), (safe_sub_func_int16_t_s_s((p_35 < (p_35 >= p_35)), (((((*g_56) && (safe_rshift_func_uint8_t_u_s((g_153[6][7][0]--), 5))) <= (((g_523[4] = ((*l_355) = (l_518 != (g_519 = g_519)))) >= g_269) < 7L)) <= p_35) == 1L))))), g_402[1])) || (**g_520));
                    }
                }
            }


            (*l_489) &= (safe_mul_func_int16_t_s_s(g_402[1], (l_526 | l_350)));
            if ((*p_34))
            {
                for (g_274 = 1; (g_274 <= 5); g_274 += 1)
                {
                    (**g_519) = &l_433;

                    ;
                }


            }
            else
            {
                int *l_527[7][5] = {{&l_425,(void*)0,&l_425,&l_430[0],(void*)0},{(void*)0,&l_427,(void*)0,&l_427,(void*)0},{&l_425,&l_427,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_70},{&l_427,&l_425,&l_425,&l_427,(void*)0},{&l_427,(void*)0,&l_430[0],&l_430[0],(void*)0},{(void*)0,&l_425,&l_430[0],(void*)0,(void*)0}};
                int i, j;
                l_532--;
            }


            (*l_495) = (((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(p_35, (l_539[5] == &g_193[4][1]))), (safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_u(l_548, (--(*l_549)))), ((l_553 = l_552) != (*g_105)))), (*l_489))), (safe_add_func_uint32_t_u_u(l_556[0][3], ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s(p_35, 3)), 14)) == p_35))))))) | (*p_34)) || 0x1E31L);

            ;
        }

        ;
        for (g_70 = 9; (g_70 != 11); ++g_70)
        {
            int *l_563 = &g_70;
            (*g_520) = l_563;

            ;
        }
        if (((*l_573) = (g_57 >= (safe_div_func_uint32_t_u_u(((*l_568) = l_433), (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_35, 3)), 9)))))))
        {
            char l_574 = 0xD1L;
            l_574 &= ((-3L) >= 3UL);
        }
        else
        {
            int l_590 = 0xB042B4CBL;
            int l_591 = 0x6D09B6B3L;
            if ((safe_add_func_int16_t_s_s((*l_573), (safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((*l_404) &= (((safe_div_func_int16_t_s_s(p_35, p_35)) != ((*g_192) != &g_106)) || (safe_rshift_func_int8_t_s_s(p_35, 6)))), 10)), 4)))))
            {
                unsigned l_592 = 0UL;
                int l_597 = 0xE8E71C75L;
                int l_598 = 0L;
                unsigned l_606[7] = {7UL,7UL,7UL,7UL,7UL,7UL,7UL};
                int i;
                if ((p_35 && ((0xEBDBL || p_35) ^ ((safe_mod_func_uint32_t_u_u(((*l_568) = p_35), l_434[0][0][6])) >= (p_35 && (safe_add_func_int16_t_s_s(((*p_34) > (((*p_34) && 4294967290UL) != p_35)), g_402[3])))))))
                {
                    if ((*l_573))
                        break;
                    return p_35;


                }
                else
                {
                    int *l_589[2][5];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_589[i][j] = &l_374;
                    }
                    l_592++;
                    if ((*p_34))
                        break;
                    if ((safe_add_func_uint16_t_u_u(p_35, 0x8AF9L)))
                    {
                        (*l_573) = (l_591 = l_592);
                    }
                    else
                    {
                        unsigned l_599 = 4294967295UL;
                        int l_607[6] = {2L,1L,1L,2L,1L,1L};
                        unsigned short l_608 = 65534UL;
                        int i;
                        ++l_599;
                        (*g_520) = &l_598;

                        ;
                        (*g_520) = func_36((safe_add_func_uint8_t_u_u(l_599, l_599)), (((safe_rshift_func_uint16_t_u_s(l_434[0][0][3], 10)) & 1UL) | (g_153[6][7][0] ^ p_35)), l_606[1], g_94);

                        ;
                        l_608++;
                    }
                }
            }
            else
            {
                int *l_611 = &l_433;
                (*l_611) = ((*l_573) &= (*p_34));
            }
            if ((*p_34))
                break;
        }
    }


    (*g_520) = &l_369;

    ;
    return p_35;


}







static int * func_36(unsigned p_37, char p_38, char p_39, unsigned p_40)
{
    int l_43 = 1L;
    int *l_55[6][4] = {{(void*)0,&g_6,&g_6,(void*)0},{&g_6,(void*)0,&g_6,&g_6},{(void*)0,(void*)0,&g_6,(void*)0},{(void*)0,&g_6,&g_6,(void*)0},{&g_6,(void*)0,&g_6,&g_6},{(void*)0,(void*)0,&g_6,(void*)0}};
    int **l_54[1][10][10] = {{{&l_55[1][3],&l_55[4][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[4][1],&l_55[1][3],&l_55[1][1],(void*)0},{&l_55[1][1],&l_55[4][1],&l_55[1][3],&l_55[1][1],(void*)0,&l_55[1][1],&l_55[1][3],&l_55[4][1],&l_55[1][1],&l_55[1][1]},{&l_55[1][1],&l_55[3][2],&l_55[1][3],(void*)0,&l_55[4][1],&l_55[4][1],(void*)0,&l_55[1][3],&l_55[3][2],&l_55[1][1]},{&l_55[3][2],&l_55[1][1],&l_55[1][1],(void*)0,&l_55[1][1],&l_55[1][1],&l_55[1][1],(void*)0,&l_55[1][1],&l_55[1][1]},{&l_55[1][1],&l_55[1][3],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[1][1]},{&l_55[1][1],&l_55[1][1],&l_55[3][2],&l_55[1][1],&l_55[4][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[4][1],&l_55[1][1]},{&l_55[1][1],&l_55[1][0],&l_55[1][1],&l_55[1][1],(void*)0,&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],(void*)0},{&l_55[3][2],&l_55[1][1],&l_55[1][1],&l_55[3][2],&l_55[1][1],&l_55[4][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[4][1]},{&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],(void*)0,&l_55[1][1],&l_55[1][1],&l_55[3][2],&l_55[3][2],&l_55[1][1]},{&l_55[4][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[1][1],&l_55[4][1],&l_55[1][3],&l_55[1][1],(void*)0,&l_55[1][1]}}};
    int *l_71 = &g_70;
    unsigned short l_155[4][3][7] = {{{65534UL,8UL,1UL,1UL,8UL,65534UL,0xA8A4L},{65530UL,0x176EL,0UL,0x1967L,0x9ACCL,1UL,0xA735L},{65534UL,8UL,1UL,1UL,8UL,65534UL,0xA8A4L}},{{65530UL,0x176EL,0UL,0x1967L,0x9ACCL,1UL,0xA735L},{65534UL,8UL,1UL,1UL,8UL,65534UL,0xA8A4L},{65530UL,0x176EL,0UL,0x1967L,0x9ACCL,1UL,0xA735L}},{{65534UL,8UL,1UL,1UL,8UL,65534UL,0xA8A4L},{65530UL,0x176EL,0UL,0x1967L,0x9ACCL,1UL,0xA735L},{65534UL,8UL,1UL,1UL,8UL,65534UL,0xA8A4L}},{{65530UL,0x176EL,0UL,0x1967L,0x9ACCL,1UL,0xA735L},{65534UL,8UL,1UL,1UL,8UL,65534UL,1UL},{0xB680L,0xF69FL,0x9ACCL,0x176EL,0x2703L,65526UL,0UL}}};
    unsigned char l_195[10] = {255UL,0x13L,0x13L,255UL,0x5BL,255UL,0x13L,0x13L,255UL,0x5BL};
    int *l_206 = &g_70;
    unsigned short l_221 = 0x0CEEL;
    unsigned short l_222 = 0x2FB3L;
    union U0 **l_253 = &g_106;
    union U0 **l_291 = &g_106;
    short l_295[10][2] = {{2L,2L},{6L,2L},{2L,6L},{2L,2L},{6L,2L},{2L,6L},{2L,2L},{6L,2L},{2L,6L},{2L,2L}};
    int l_328 = 0xB01AC9A1L;
    int *l_345 = &g_6;
    int *l_347 = &l_328;
    int i, j, k;
    g_57 = (safe_div_func_uint16_t_u_u((l_43 <= (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((safe_div_func_int16_t_s_s(l_43, 0x0A83L)) == 255UL), 0)), 0)) || g_6), (8L ^ (safe_add_func_int32_t_s_s(0L, (&g_6 != (g_56 = &g_6)))))))), p_38));

    ;
    if ((g_57 > 65530UL))
    {
        short l_62 = 0xCF57L;
        int **l_65 = &l_55[3][2];
        int l_66 = (-10L);
        union U0 *l_77 = (void*)0;
        int l_83 = (-4L);
        int *l_107 = &g_70;
        int l_146[6][5] = {{0x01D3DC7AL,0L,0L,0x01D3DC7AL,0x01D3DC7AL},{0x4D10B9EBL,0L,0x4D10B9EBL,0L,0x4D10B9EBL},{0x01D3DC7AL,0x01D3DC7AL,0L,0L,0x01D3DC7AL},{0xFFE034FBL,0L,0xFFE034FBL,0L,0xFFE034FBL},{0x01D3DC7AL,0L,0L,0x01D3DC7AL,0x01D3DC7AL},{0x4D10B9EBL,0L,0x4D10B9EBL,0L,0x4D10B9EBL}};
        union U0 *l_226 = &g_104[7];
        int i, j;
        if ((safe_mul_func_uint8_t_u_u(p_37, (((safe_rshift_func_int16_t_s_s(0x8870L, 3)) && (l_62 || (g_57 < 0x6274L))) ^ ((((safe_add_func_int32_t_s_s((l_66 = (l_65 == l_65)), p_39)) & (g_57 == g_57)) && 0x93L) | 0x7DDD2E78L)))))
        {
            int l_85[5];
            union U0 *l_103 = &g_104[7];
            int *l_135 = (void*)0;
            int l_139 = (-2L);
            char *l_149 = &g_82;
            int i;
            for (i = 0; i < 5; i++)
                l_85[i] = 1L;
            for (l_62 = 26; (l_62 != 8); --l_62)
            {
                int *l_69[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_69[i] = &g_70;
                for (l_66 = 3; (l_66 >= 0); l_66 -= 1)
                {
                    for (g_57 = 3; (g_57 >= 0); g_57 -= 1)
                    {
                        int i, j;
                        l_69[0] = l_55[l_66][g_57];
                    }
                }


            }
            (*l_65) = l_71;


            for (p_40 = 0; (p_40 == 2); p_40 = safe_add_func_int32_t_s_s(p_40, 6))
            {
                int l_75 = 0xA221E122L;
                int l_86 = 1L;
                int l_87 = 0xAB3148BBL;
                int l_93[9][9] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x0CDDE2BAL,0x5C325D18L,0x0CDDE2BAL,0xA9A2C06FL,1L,0xA9A2C06FL,0x0CDDE2BAL,0x5C325D18L,0x0CDDE2BAL},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{0x7363D2F6L,0xA9A2C06FL,0x7363D2F6L,(-1L),0x0CDDE2BAL,(-1L),0x7363D2F6L,0xA9A2C06FL,0x7363D2F6L},{0xEE062075L,(-1L),0xEE062075L,0xEE062075L,(-1L),0xEE062075L,0xEE062075L,(-1L),0xEE062075L},{0x7363D2F6L,0xA9A2C06FL,0x7363D2F6L,(-1L),0x0CDDE2BAL,(-1L),0x7363D2F6L,0xA9A2C06FL,0x7363D2F6L},{0xEE062075L,(-1L),0xEE062075L,0xEE062075L,(-1L),0xEE062075L,0xEE062075L,(-1L),0xEE062075L},{0x7363D2F6L,0xA9A2C06FL,0x7363D2F6L,(-1L),0x0CDDE2BAL,(-1L),0x7363D2F6L,0xA9A2C06FL,0x7363D2F6L},{0xEE062075L,(-1L),0xEE062075L,0xEE062075L,(-1L),0xEE062075L,0xEE062075L,(-1L),0xEE062075L}};
                union U0 **l_118 = &g_106;
                int i, j;
                for (l_62 = 0; (l_62 >= 0); l_62 -= 1)
                {
                    int *l_74 = &g_70;
                    return l_74;


                }
                l_66 |= (*g_56);
            }
        }
        else
        {
            unsigned short l_190 = 0xA1E8L;
            int *l_191 = &g_6;
            unsigned short l_220 = 0xF6F4L;
            short *l_230 = &l_62;
            if ((&g_56 != (void*)0))
            {
                short l_208 = (-1L);
                int l_209 = 3L;
                l_190 |= (*g_56);
                (*l_65) = l_191;
                if ((*g_56))
                {
                    int l_210[6] = {0xD7401777L,0xD7401777L,0xD7401777L,0xD7401777L,0xD7401777L,0xD7401777L};
                    char *l_214 = &g_82;
                    char *l_215 = &g_92;
                    unsigned *l_216 = (void*)0;
                    unsigned *l_217 = &g_180;
                    int i;
                    if ((p_38 || (*g_56)))
                    {
                        (*g_192) = &g_106;
                    }
                    else
                    {
                        int *l_194 = &g_70;
                        (*l_65) = l_194;


                        (*l_71) ^= l_195[9];
                        return &g_70;


                    }
                    for (l_83 = 0; (l_83 <= 0); l_83 += 1)
                    {
                        short *l_196 = &l_62;
                        int l_203 = 2L;
                        (*l_65) = (void*)0;
                        (*l_107) = ((((*l_196) |= g_104[7].f0) || (safe_add_func_int16_t_s_s((safe_add_func_uint32_t_u_u((0UL == (l_203 > (&g_94 == (void*)0))), (l_203 || (((*l_191) ^ (((!7UL) > (safe_div_func_uint8_t_u_u(p_39, (-4L)))) < p_38)) < 251UL)))), p_38))) & g_153[3][6][3]);
                        (*l_71) = l_203;
                        return l_206;


                    }
                    if (p_37)
                    {
                        int *l_207[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_207[i] = &g_6;
                        l_207[2] = l_207[2];
                        return l_191;


                    }
                    else
                    {
                        unsigned l_211 = 0x1DF0D93DL;
                        (*l_206) = (l_208 = 7L);
                        ++l_211;
                    }
                    if (((g_95 < (l_209 ^= ((*l_215) = ((*l_214) = (p_40 && g_57))))) & (((((*l_217)--) >= ((*l_191) && 0L)) > p_37) && l_208)))
                    {
                        l_221 = (((*l_206) = l_220) <= (*g_56));
                        (*l_107) ^= l_210[5];
                        l_222 |= p_39;
                    }
                    else
                    {
                        unsigned l_223 = 1UL;
                        (*l_65) = (g_56 = &l_209);


                        ;
                        l_223--;
                    }


                    ;
                }
                else
                {
                    (*l_71) ^= ((~(*g_56)) > 4294967293UL);
                }


                ;
                l_226 = (void*)0;

                ;
            }
            else
            {
                short l_236 = 0x4D7BL;
                if (((*l_71) = (0x5AL > g_100)))
                {
                    return &g_6;


                }
                else
                {
                    union U0 **l_235 = &l_77;
                    g_94 |= ((safe_add_func_int8_t_s_s(0x2CL, g_70)) || (~(g_115 || (g_229 |= p_40))));
                    (*l_71) &= (l_230 == &g_98);
                    (*l_71) = (safe_add_func_int32_t_s_s((*l_107), (g_70 <= (l_235 != (void*)0))));
                }
                l_236 = 0x6F0046A0L;
            }



            ;
        }



        ;
        (*l_65) = &l_83;


    }
    else
    {
        short *l_248[9] = {(void*)0,&g_249,(void*)0,(void*)0,&g_249,(void*)0,(void*)0,&g_249,(void*)0};
        int l_259 = 2L;
        int *l_272 = (void*)0;
        int l_323 = 0x8BE80E76L;
        int l_333 = 0x849C066DL;
        char *l_346[5][2] = {{&g_92,(void*)0},{(void*)0,&g_92},{(void*)0,(void*)0},{&g_92,(void*)0},{(void*)0,&g_92}};
        int i, j;
        for (l_221 = 13; (l_221 == 14); l_221 = safe_add_func_int8_t_s_s(l_221, 3))
        {
            union U0 **l_252 = &g_106;
            int l_256 = 0xF27348CBL;
            int **l_292 = &l_206;
            int l_329 = (-4L);
            int l_332 = (-1L);
            for (g_229 = 0; (g_229 >= 4); g_229 = safe_add_func_uint32_t_u_u(g_229, 1))
            {
                unsigned char *l_245 = &l_195[9];
                unsigned char *l_254 = &g_153[6][7][0];
                int l_255 = 0xC26F1CBDL;
                union U0 **l_289 = &g_106;
                unsigned l_300 = 0x483294FBL;
                int l_335 = 0x4C56C392L;
                if ((safe_div_func_uint16_t_u_u((((0UL | ((*l_245)--)) || (l_248[4] == l_248[4])) > ((safe_sub_func_uint8_t_u_u(0UL, ((*l_254) ^= (l_252 == l_253)))) | l_255)), l_256)))
                {
                    g_56 = &g_70;

                    ;
                    (*g_56) = (safe_sub_func_int8_t_s_s(g_82, ((*l_254) = l_259)));
                    return &g_6;


                }
                else
                {
                    short l_273[6][1][1] = {{{0xAFB5L}},{{1L}},{{0xAFB5L}},{{1L}},{{0xAFB5L}},{{1L}}};
                    int i, j, k;
                    if ((*g_56))
                    {
                        unsigned l_268 = 0xDE78825FL;
                        g_56 = &g_70;

                        ;
                        (*l_206) &= l_259;
                        (*l_71) = (safe_mul_func_int16_t_s_s(((((!(*l_71)) >= ((*l_253) == (*l_253))) <= p_39) < (l_256 &= p_39)), (((((((safe_sub_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((l_268 >= (g_269 |= (g_249 = ((*g_56) >= p_39)))), (safe_sub_func_int32_t_s_s((*g_56), g_99)))) == g_82), l_259)) >= 255UL) || 0xB01AL) | p_37) > p_39) & g_57) != p_39)));
                    }
                    else
                    {
                        l_272 = &g_6;

                        ;
                        g_274++;
                    }
                }
                l_255 = (!((void*)0 == &g_180));
                if (l_256)
                {
                    union U0 ***l_290 = &l_253;
                    int l_319 = 0L;
                    int **l_327 = &l_55[1][1];
                    int l_330 = 0xB0CD92A0L;
                    int l_331 = (-4L);
                    if ((safe_lshift_func_uint8_t_u_s((g_88 == (safe_div_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((((*l_245) = (safe_add_func_uint16_t_u_u((safe_div_func_uint32_t_u_u((&l_222 == &g_274), (safe_add_func_int32_t_s_s(((((*l_290) = l_289) == l_291) && (l_292 == (void*)0)), ((((-1L) < (safe_sub_func_int8_t_s_s((p_38 && 0UL), 0x90L))) ^ p_38) && p_37))))), g_57))) || l_295[7][0]) != 0UL), g_188)), l_255))), g_229)))
                    {
                        int l_309 = 0xA7E2C84DL;
                        char *l_312 = &g_92;
                        int l_317 = 1L;
                        int l_318 = 0x085E4CA7L;
                        (*l_71) = ((safe_div_func_int8_t_s_s(((safe_mul_func_int8_t_s_s(((l_300 <= ((*l_254) = (**l_292))) != (0x20L || p_40)), (((!(safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(l_309, 3)), (safe_div_func_int8_t_s_s(((*l_312) = g_99), (safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(((l_318 |= (l_317 = (g_229 <= p_38))) <= (l_255 |= l_309)), g_229)), p_40)))))), g_115)), 1))) == l_309) <= p_38))) != p_37), g_6)) | 249UL);
                        --g_320;
                        l_323 = 0xE19689D2L;
                        return &g_6;


                    }
                    else
                    {
                        (*l_71) ^= p_39;
                    }
                    if (((void*)0 != &l_319))
                    {
                        l_327 = &l_272;

                        ;
                    }
                    else
                    {
                        (**l_292) ^= l_300;
                    }

                    ;
                    if (p_38)
                        break;
                    g_336[1]--;
                }
                else
                {
                    if (p_39)
                    {
                        (**l_292) = 1L;
                    }
                    else
                    {
                        (*l_71) |= p_40;
                    }
                    if (p_38)
                        break;
                }
            }

            ;
            ;
            (**l_292) &= (((g_336[3] ^ 8L) ^ (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(g_274, (safe_rshift_func_int8_t_s_s(0x60L, 7)))), (&g_180 == &p_40)))) & (l_252 == l_253));
            return l_345;


        }
        (*l_71) = ((p_39 = g_336[4]) == 253UL);
        l_272 = &l_333;

        ;
    }



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
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_104[i].f0, "g_104[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_153[i][j][k], "g_153[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_229, "g_229", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_334, "g_334", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_336[i], "g_336[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_377, "g_377", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_402[i], "g_402[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_420[i], "g_420[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_479, "g_479", print_hash_value);
    transparent_crc(g_514, "g_514", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_523[i], "g_523[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_668[i], "g_668[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_811, "g_811", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_900[i][j][k], "g_900[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_905, "g_905", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    transparent_crc(g_1216, "g_1216", print_hash_value);
    transparent_crc(g_1292, "g_1292", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
