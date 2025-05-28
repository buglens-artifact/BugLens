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



static int g_13 = 0x274952F3L;
static unsigned long long g_26 = 0xA6D0811FC80AE7B1LL;
static char g_59 = 7L;
static char g_62 = (-2L);
static unsigned short g_69 = 0xB36FL;
static int g_76 = 0xA1241BC4L;
static long long g_89 = 1L;
static int g_91 = (-3L);
static char g_93 = 0xE7L;
static short g_106 = 0x095EL;
static int *g_112[5] = {&g_91,&g_91,&g_91,&g_91,&g_91};
static int **g_111 = &g_112[3];
static char *g_121 = &g_59;
static char **g_120 = &g_121;
static int g_155 = 0x12B47A6FL;
static unsigned char g_162 = 255UL;
static unsigned short g_171 = 0UL;
static unsigned g_172[5][5][8] = {{{5UL,0UL,0x3B8E4AF2L,0x4B5AAFE1L,0xC76759B4L,9UL,0xC76759B4L,0x4B5AAFE1L},{0x58FC3BA6L,1UL,0x58FC3BA6L,9UL,8UL,18446744073709551615UL,0UL,0x060BA4DFL},{0x987D7C54L,0x837CBF35L,18446744073709551615UL,0x0EF0FED5L,4UL,18446744073709551615UL,8UL,0UL},{0x987D7C54L,0x247686F9L,0x9DFFE3AFL,0x9CB02FEDL,8UL,0UL,0x49EDBDCEL,18446744073709551615UL},{0x58FC3BA6L,0x22D9FCF2L,0xCF8A12A9L,0x9DB9FF8EL,0xC76759B4L,0x060BA4DFL,0x9DFFE3AFL,9UL}},{{5UL,0UL,1UL,1UL,18446744073709551615UL,0xB04089B8L,0x3B8E4AF2L,18446744073709551609UL},{0x890EE7B7L,0UL,0x9DFFE3AFL,18446744073709551609UL,0x49EDBDCEL,9UL,18446744073709551615UL,9UL},{0x5390B466L,18446744073709551615UL,0xCD8020B3L,18446744073709551615UL,0x5390B466L,1UL,0x49EDBDCEL,18446744073709551615UL},{0xF644599FL,0UL,4UL,0x060BA4DFL,18446744073709551614UL,0UL,0UL,18446744073709551615UL},{0xCF8A12A9L,18446744073709551609UL,4UL,0x837CBF35L,0x3B8E4AF2L,18446744073709551615UL,0x49EDBDCEL,0UL}},{{18446744073709551614UL,1UL,0xCD8020B3L,18446744073709551615UL,0UL,0xB04089B8L,18446744073709551615UL,0x060BA4DFL},{8UL,0x9CB02FEDL,0x9DFFE3AFL,0x247686F9L,0x987D7C54L,0x22D9FCF2L,0x3B8E4AF2L,9UL},{0xC2A35738L,0xB04089B8L,1UL,0x247686F9L,0x5390B466L,0xF148B747L,0x987D7C54L,0x060BA4DFL},{0UL,0UL,0xF73C2BB4L,18446744073709551615UL,0xF73C2BB4L,0UL,0UL,0UL},{5UL,0UL,0x987D7C54L,0x837CBF35L,18446744073709551615UL,0x0EF0FED5L,4UL,18446744073709551615UL}},{{18446744073709551614UL,0x4B5AAFE1L,0x39B79987L,0x060BA4DFL,18446744073709551615UL,0xB04089B8L,0UL,18446744073709551615UL},{5UL,0x62681438L,0x9DFFE3AFL,18446744073709551615UL,0xF73C2BB4L,0x837CBF35L,0x70B1BDB0L,9UL},{8UL,0x060BA4DFL,0xF644599FL,1UL,5UL,0x0EF0FED5L,0x58FC3BA6L,0xF148B747L},{0x9DFFE3AFL,9UL,0xCD8020B3L,0x5D8ACBC5L,0x39B79987L,0x0EF0FED5L,8UL,18446744073709551609UL},{0UL,0x060BA4DFL,18446744073709551615UL,0UL,4UL,0UL,18446744073709551615UL,0x060BA4DFL}},{{18446744073709551615UL,0UL,0xC2A35738L,0xF148B747L,18446744073709551614UL,18446744073709551609UL,0xF73C2BB4L,0x5D8ACBC5L},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x62681438L,0xF73C2BB4L,0x9CB02FEDL},{0xCF8A12A9L,18446744073709551615UL,0xC2A35738L,18446744073709551609UL,5UL,9UL,18446744073709551615UL,0UL},{5UL,9UL,18446744073709551615UL,0UL,0xCD8020B3L,0x22D9FCF2L,8UL,1UL},{0x70B1BDB0L,18446744073709551609UL,0xCD8020B3L,0UL,0xF73C2BB4L,0x4B5AAFE1L,0x58FC3BA6L,1UL}}};
static short *g_197[9] = {&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106};
static short **g_196[2] = {&g_197[6],&g_197[6]};
static unsigned short *g_230 = &g_171;
static unsigned short **g_229 = &g_230;
static long long *g_240 = &g_89;
static long long **g_239 = &g_240;
static short g_256[4] = {7L,7L,7L,7L};
static unsigned char *g_262[2] = {&g_162,&g_162};
static unsigned char **g_261 = &g_262[0];
static long long g_320 = 5L;
static unsigned g_336 = 0UL;
static char ** const g_400[1] = {&g_121};
static unsigned g_431 = 1UL;
static unsigned long long *g_453[6][7] = {{(void*)0,(void*)0,&g_26,(void*)0,(void*)0,&g_26,(void*)0},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26},{(void*)0,&g_26,(void*)0,(void*)0,&g_26,(void*)0,(void*)0}};
static unsigned long long *g_465 = (void*)0;
static int g_601 = 0x2ABF76A8L;
static unsigned short * const *g_659 = &g_230;
static unsigned short * const **g_658 = &g_659;
static int *g_697 = &g_13;
static unsigned long long g_713[4][9] = {{0x6D3D5FEBB54981AFLL,0UL,18446744073709551610UL,18446744073709551610UL,0UL,0x6D3D5FEBB54981AFLL,0UL,18446744073709551610UL,18446744073709551610UL},{0xD7BC4E3B47B44950LL,0xD7BC4E3B47B44950LL,0x6D3D5FEBB54981AFLL,18446744073709551610UL,0x6D3D5FEBB54981AFLL,0xD7BC4E3B47B44950LL,0xD7BC4E3B47B44950LL,0x6D3D5FEBB54981AFLL,18446744073709551610UL},{18446744073709551610UL,0UL,18446744073709551610UL,0x6D3D5FEBB54981AFLL,0x6D3D5FEBB54981AFLL,18446744073709551610UL,0UL,18446744073709551610UL,0x6D3D5FEBB54981AFLL},{18446744073709551610UL,0x6D3D5FEBB54981AFLL,0x6D3D5FEBB54981AFLL,18446744073709551610UL,0UL,18446744073709551610UL,0x6D3D5FEBB54981AFLL,0x6D3D5FEBB54981AFLL,18446744073709551610UL}};
static int *g_754 = &g_155;
static unsigned *g_764 = &g_431;
static unsigned char g_868 = 255UL;
static unsigned char **g_869 = &g_262[0];



static char func_1(void);
static int * func_2(unsigned char p_3, int * p_4);
static unsigned func_9(unsigned long long p_10);
static char func_14(int * p_15, unsigned short p_16, int * p_17, int * p_18, unsigned p_19);
static int * func_20(int * p_21, int * const p_22, unsigned p_23, int * const p_24);
static int * func_27(unsigned long long * p_28, unsigned p_29);
static unsigned long long * func_30(unsigned long long p_31, int * const p_32, const unsigned char p_33, char p_34, int p_35);
static int * func_36(unsigned p_37, unsigned p_38, unsigned long long * p_39, unsigned long long p_40);
static unsigned func_41(unsigned long long * p_42);
static unsigned long long * func_43(char p_44, long long p_45, unsigned long long * p_46, const int * p_47);
static char func_1(void)
{
    unsigned l_5 = 0x95E17CA0L;
    int *l_6[2];
    const long long l_862 = 0x253DA49BE2E0D1C2LL;
    unsigned char * const *l_863 = &g_262[0];
    unsigned char * const **l_864[4];
    unsigned char * const *l_865 = (void*)0;
    unsigned char * const l_867 = &g_868;
    unsigned char * const *l_866[8][2][7] = {{{&l_867,&l_867,&l_867,&l_867,&l_867,&l_867,&l_867},{&l_867,&l_867,&l_867,&l_867,&l_867,&l_867,&l_867}},{{&l_867,&l_867,&l_867,&l_867,&l_867,&l_867,&l_867},{&l_867,&l_867,&l_867,&l_867,&l_867,(void*)0,&l_867}},{{&l_867,(void*)0,&l_867,&l_867,&l_867,&l_867,&l_867},{&l_867,(void*)0,&l_867,&l_867,&l_867,&l_867,&l_867}},{{&l_867,(void*)0,&l_867,(void*)0,&l_867,&l_867,&l_867},{&l_867,&l_867,(void*)0,&l_867,&l_867,&l_867,(void*)0}},{{&l_867,&l_867,&l_867,&l_867,&l_867,&l_867,&l_867},{&l_867,&l_867,&l_867,&l_867,&l_867,&l_867,&l_867}},{{&l_867,&l_867,(void*)0,&l_867,&l_867,&l_867,&l_867},{&l_867,&l_867,&l_867,&l_867,&l_867,&l_867,&l_867}},{{(void*)0,&l_867,&l_867,&l_867,&l_867,&l_867,(void*)0},{&l_867,&l_867,&l_867,&l_867,&l_867,&l_867,&l_867}},{{&l_867,&l_867,&l_867,&l_867,&l_867,&l_867,&l_867},{(void*)0,&l_867,&l_867,&l_867,&l_867,&l_867,&l_867}}};
    int l_870 = 0L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_6[i] = (void*)0;
    for (i = 0; i < 4; i++)
        l_864[i] = &l_863;
    (*g_111) = func_2(l_5, l_6[1]);



    ;
    (*g_697) = (!(safe_mul_func_int16_t_s_s(l_862, ((l_866[5][1][5] = (l_865 = l_863)) == g_869))));

    ;

    return l_870;
}







static int * func_2(unsigned char p_3, int * p_4)
{
    unsigned short l_11 = 0x98F0L;
    int *l_12 = &g_13;
    unsigned long long *l_25 = &g_26;
    short l_234[1][2];
    unsigned long long *l_718 = (void*)0;
    long long ***l_729 = &g_239;
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
            l_234[i][j] = 0L;
    }
    (*g_697) = ((0x985A9576L & (safe_sub_func_uint32_t_u_u((((func_9((l_11 ^ ((+((void*)0 != l_12)) <= (((*g_121) = ((func_14(((*g_111) = func_20(&g_13, (((*l_25) = g_13) , func_27(func_30((*l_12), func_36(func_41(func_43(p_3, p_3, &g_26, l_12)), l_234[0][1], l_25, (*l_12)), p_3, (*l_12), p_3), (*l_12))), g_320, l_12)), p_3, p_4, p_4, (*l_12)) < p_3) < p_3)) >= p_3)))) | l_234[0][0]) , (*l_12)) & (-1L)), g_256[2]))) || (*l_12));


    if (((void*)0 != &g_112[3]))
    {
        unsigned short l_711 = 0x6BC0L;
        int *l_724[8][9] = {{&g_91,(void*)0,(void*)0,&g_91,&g_13,&g_13,&g_13,&g_91,(void*)0},{&g_76,&g_76,&g_91,&g_76,&g_76,&g_91,&g_76,&g_13,&g_13},{&g_76,&g_13,&g_91,(void*)0,&g_91,&g_13,&g_76,&g_76,&g_13},{&g_91,&g_76,&g_76,&g_76,&g_91,&g_76,&g_76,&g_91,&g_76},{&g_76,&g_91,&g_76,&g_13,(void*)0,(void*)0,&g_13,&g_76,&g_91},{&g_13,&g_91,&g_76,&g_76,&g_76,&g_76,&g_91,&g_13,&g_91},{&g_13,(void*)0,&g_13,&g_13,(void*)0,&g_13,(void*)0,&g_13,(void*)0},{&g_76,&g_91,&g_91,&g_76,&g_13,&g_91,&g_13,&g_76,&g_91}};
        unsigned l_741 = 0xAFC3C1EBL;
        int *l_751 = &g_601;
        unsigned char l_757 = 255UL;
        int i, j;
        for (g_69 = 0; (g_69 != 16); g_69++)
        {
            unsigned char l_710 = 2UL;
            unsigned long long *l_712 = &g_713[0][7];
            int *l_719 = &g_91;
            (*l_12) = (!l_710);
            (*g_111) = (((((+p_3) , ((*l_25) = l_711)) | (*l_12)) < (*l_12)) , p_4);
            for (p_3 = (-8); (p_3 == 47); p_3 = safe_add_func_uint16_t_u_u(p_3, 5))
            {
                unsigned l_728[5] = {0x7C160742L,0x7C160742L,0x7C160742L,0x7C160742L,0x7C160742L};
                unsigned l_742[7][2][6] = {{{0x7B38F0D4L,2UL,1UL,0x7B38F0D4L,0xF7CC9F53L,2UL},{1UL,0x7B38F0D4L,0x5CD709D4L,0x7B38F0D4L,1UL,1UL}},{{0x7B38F0D4L,1UL,1UL,18446744073709551615UL,1UL,2UL},{2UL,0x7B38F0D4L,8UL,1UL,0xF7CC9F53L,2UL}},{{0xF7CC9F53L,2UL,1UL,0x384A5ABFL,0x384A5ABFL,1UL},{0xF7CC9F53L,0xF7CC9F53L,0x5CD709D4L,2UL,0xF7CC9F53L,1UL}},{{0x7B38F0D4L,0x384A5ABFL,2UL,1UL,18446744073709551615UL,1UL},{0x2CBF17C0L,0x7B38F0D4L,2UL,0x2CBF17C0L,0x384A5ABFL,1UL}},{{2UL,0x2CBF17C0L,1UL,0x2CBF17C0L,2UL,2UL},{0x2CBF17C0L,2UL,2UL,1UL,2UL,18446744073709551610UL}},{{0x7B38F0D4L,0x2CBF17C0L,0x5CD709D4L,2UL,0x384A5ABFL,18446744073709551610UL},{0x384A5ABFL,0x7B38F0D4L,2UL,18446744073709551615UL,18446744073709551615UL,2UL}},{{0x384A5ABFL,0x384A5ABFL,1UL,2UL,0xF7CC9F53L,1UL},{0x7B38F0D4L,0x384A5ABFL,2UL,1UL,18446744073709551615UL,1UL}}};
                int i, j, k;
                for (g_106 = 0; g_106 < 6; g_106 += 1)
                {
                    for (g_26 = 0; g_26 < 7; g_26 += 1)
                    {
                        g_453[g_106][g_26] = &g_713[0][7];
                    }
                }
                for (g_76 = (-8); (g_76 <= (-6)); g_76 = safe_add_func_uint16_t_u_u(g_76, 5))
                {
                    return l_724[1][6];


                }
                for (g_26 = 0; (g_26 != 19); g_26 = safe_add_func_int32_t_s_s(g_26, 4))
                {
                    long long ***l_727 = &g_239;
                    int l_740 = 0xBDF8829CL;
                    int *l_756 = &g_13;
                    if (((l_727 != (l_728[1] , l_729)) | func_14(l_719, l_728[1], p_4, func_36((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((**g_659), (((safe_mul_func_uint16_t_u_u((**g_229), ((+((safe_mod_func_uint64_t_u_u((((((*l_12) = ((func_9((safe_mod_func_int16_t_s_s(6L, 65526UL))) , p_3) & l_740)) | 0x301EL) , p_3) || 0x80975E5AL), 0xABF03E918F150AF0LL)) < 0xD4E745C3A9B91923LL)) != 0xBBEE2798C22A159ALL))) , 4L) != 18446744073709551612UL))), l_741)), p_3, l_25, p_3), l_742[5][0][3])))
                    {
                        int *l_753[4][9] = {{&g_155,&g_155,&g_155,&g_601,&g_155,&g_155,&g_155,&g_155,&g_601},{(void*)0,&g_155,(void*)0,&g_601,&g_601,(void*)0,&g_155,(void*)0,&g_601},{&g_155,&g_155,&g_155,&g_155,&g_601,&g_155,&g_155,&g_155,&g_155},{(void*)0,&g_601,(void*)0,&g_601,(void*)0,(void*)0,&g_601,(void*)0,&g_601}};
                        int **l_752[2][3];
                        unsigned short l_755[8] = {0xFCF9L,0xFCF9L,0xAB29L,0xFCF9L,0xFCF9L,0xAB29L,0xFCF9L,0xFCF9L};
                        unsigned *l_758 = &g_431;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_752[i][j] = &l_753[1][5];
                        }
                        (*l_12) = (g_172[3][1][0] , (((p_3 ^ p_3) , &g_453[2][4]) != (void*)0));
                        p_4 = (void*)0;
                    }
                    else
                    {
                        int *l_759 = &g_91;
                        (*g_697) = func_9((*l_12));
                        return l_759;


                    }
                    return l_724[1][6];


                }
            }
        }


    }
    else
    {
        char l_774 = 0x56L;
        int l_781 = 0L;
        unsigned short l_799 = 0xA232L;
        unsigned **l_801[1][1];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_801[i][j] = &g_764;
        }
        for (g_171 = 0; g_171 < 1; g_171 += 1)
        {
            for (g_91 = 0; g_91 < 2; g_91 += 1)
            {
                l_234[g_171][g_91] = 1L;
            }
        }
        for (g_106 = 4; (g_106 >= 0); g_106 -= 1)
        {
            unsigned *l_762 = (void*)0;
            int l_773[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
            unsigned * const l_804 = (void*)0;
            unsigned * const *l_803 = &l_804;
            int *l_805 = &l_773[6];
            unsigned long long *l_807 = &g_26;
            int i;
            for (g_13 = 0; (g_13 <= 4); g_13 += 1)
            {
                int l_771 = (-4L);
                const unsigned short l_772[5] = {65529UL,65529UL,65529UL,65529UL,65529UL};
                int l_776 = 0x19050A61L;
                int l_777[1][1];
                int *l_780 = &g_76;
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_777[i][j] = 1L;
                }
                for (g_93 = 4; (g_93 >= 0); g_93 -= 1)
                {
                    unsigned **l_763[6][4] = {{&l_762,&l_762,&l_762,(void*)0},{&l_762,&l_762,(void*)0,&l_762},{&l_762,&l_762,&l_762,&l_762},{&l_762,&l_762,(void*)0,(void*)0},{&l_762,&l_762,(void*)0,&l_762},{&l_762,&l_762,(void*)0,&l_762}};
                    short *l_775[7];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_775[i] = (void*)0;
                    l_777[0][0] = (safe_sub_func_int16_t_s_s((((g_764 = l_762) != ((l_776 = ((g_431 = (((g_172[g_93][g_93][(g_13 + 3)] < (p_3 ^ (((safe_add_func_uint64_t_u_u((safe_add_func_int16_t_s_s(((((**g_261) = (safe_add_func_int32_t_s_s(func_9(g_172[g_93][g_93][(g_13 + 3)]), (l_771 < (0xFCL == l_772[3]))))) || 6L) ^ l_773[6]), (-1L))), l_774)) || p_3) || p_3))) < p_3) || (-1L))) , 0L)) , &g_431)) ^ (*l_12)), 1UL));
                }
                (*l_780) = (l_776 = ((safe_sub_func_uint8_t_u_u((*l_12), l_774)) <= l_772[3]));
                l_781 = (-3L);
                for (g_62 = 1; (g_62 <= 4); g_62 += 1)
                {
                    unsigned *l_783 = &g_431;
                    unsigned **l_784 = &l_762;
                    int l_792 = (-1L);
                    (*g_111) = (((func_9(p_3) != func_9((safe_unary_minus_func_int64_t_s((&g_336 != ((*l_784) = l_783)))))) >= ((-1L) == (safe_lshift_func_int8_t_s_s(((safe_add_func_int8_t_s_s((((safe_div_func_int16_t_s_s((1UL < ((safe_unary_minus_func_int64_t_s(((-1L) < (*l_12)))) >= l_774)), l_792)) , p_3) != p_3), l_773[6])) == 0xC9L), 6)))) , p_4);

                    ;
                    (*g_111) = p_4;
                    (*g_111) = p_4;
                }
            }

            ;
            p_4 = &g_13;

            ;
            for (g_91 = 0; (g_91 <= 4); g_91 += 1)
            {
                unsigned l_800[10][1];
                int i, j;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_800[i][j] = 0xB313AAEFL;
                }
                (*g_111) = func_27((((**g_261) = (((*g_697) = (safe_mul_func_int16_t_s_s(p_3, (func_9(l_774) == 0xD0B8A6E9297632B8LL)))) != (safe_lshift_func_int16_t_s_u(p_3, l_234[0][1])))) , &g_713[1][2]), ((safe_sub_func_int16_t_s_s(l_799, p_3)) ^ l_800[4][0]));
                for (p_3 = 0; (p_3 <= 4); p_3 += 1)
                {
                    long long l_808 = 0xE20F165315A8B134LL;
                    for (l_774 = 4; (l_774 >= 0); l_774 -= 1)
                    {
                        unsigned ***l_802 = &l_801[0][0];
                        int l_806 = (-10L);
                        (*g_111) = ((((*l_802) = l_801[0][0]) != (l_803 = &l_762)) , (((***l_729) = ((void*)0 != l_805)) , (((l_806 = (!(((**g_120) = p_3) , p_3))) & (-1L)) , &g_76)));

                        ;
                        (*p_4) = (*p_4);
                        (*g_111) = p_4;
                    }
                    for (g_93 = 0; (g_93 <= 4); g_93 += 1)
                    {
                        unsigned long long **l_811 = &l_807;
                        short *l_816 = &l_234[0][1];
                        const int l_817 = 0xB72B3EDCL;
                        (*g_111) = func_27(l_807, l_808);
                        (*p_4) = (safe_sub_func_int32_t_s_s((((((*l_807) = (l_811 != &g_453[0][1])) | (p_3 != (l_808 <= (*l_805)))) < (((*l_816) = (*l_12)) != ((void*)0 == l_12))) < (l_808 > l_774)), l_817));
                        if ((*p_4))
                            continue;
                    }
                }
            }

            ;
        }

        ;
        ;
        for (g_431 = 0; (g_431 <= 8); g_431 += 1)
        {
            short *l_818 = &g_256[1];
            unsigned *l_819 = &g_172[1][3][2];
            int l_826 = 0xE8FCBABAL;
            int l_829 = 0L;
            int i;
            (*g_111) = func_36((((*l_818) = l_774) > (0x4F12L == p_3)), ((*l_819) = (((*l_12) = ((p_3 || p_3) || (0x07L | p_3))) && (l_781 = 0xE521EDE2L))), l_718, p_3);
            if (((((*l_25) = ((safe_div_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((**g_120) = (safe_add_func_uint64_t_u_u(((p_3 ^ (((((l_826 ^ ((*l_12) = (l_829 = (safe_sub_func_uint32_t_u_u((*l_12), 0x80AFDF15L))))) < (safe_sub_func_uint8_t_u_u((!l_826), ((**g_261) = 0x01L)))) , l_799) || p_3) <= 255UL)) > l_826), l_826))), p_3)), l_826)) != l_826)) ^ 0L) ^ (-1L)))
            {
                unsigned long long l_844 = 0x3CFD48F986F0188CLL;
                unsigned short ***l_854[6][1];
                unsigned short ****l_853 = &l_854[1][0];
                int *l_856 = &g_76;
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_854[i][j] = (void*)0;
                }
                for (g_171 = 0; (g_171 <= 0); g_171 += 1)
                {
                    (*g_697) = (safe_sub_func_int64_t_s_s((-1L), 0x89EED8D8DD49A389LL));
                    (*g_697) = (safe_div_func_uint64_t_u_u((p_3 && l_774), l_774));
                }
                for (l_799 = (-12); (l_799 >= 34); ++l_799)
                {
                    int *** const l_841 = &g_111;
                    for (l_829 = 0; (l_829 <= 1); l_829 += 1)
                    {
                        int ***l_855 = &g_111;
                        int i;
                        (*l_12) = ((safe_lshift_func_uint8_t_u_s((((*g_240) = g_256[(l_829 + 1)]) , ((p_3 , l_841) != ((((l_781 = (p_3 , (safe_mul_func_uint16_t_u_u((func_9(l_844) || (safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u((((((safe_lshift_func_uint16_t_u_u((((p_3 , p_3) != (safe_lshift_func_int16_t_s_s(p_3, 15))) == p_3), p_3)) , &g_658) != l_853) >= (*l_12)) , (**g_659)), (*l_12))) & (**g_659)), (**g_229)))), l_844)))) , l_829) > p_3) , l_855))), 1)) || p_3);
                        (**l_841) = p_4;
                        (*l_12) = l_826;
                    }
                    return l_856;


                }
            }
            else
            {
                return p_4;


            }
            (*g_111) = p_4;
            for (l_826 = (-18); (l_826 != 15); l_826 = safe_add_func_int16_t_s_s(l_826, 9))
            {
                int *l_859[10][9] = {{&l_829,&l_829,&g_91,&l_781,&g_13,&g_13,&g_76,&g_13,(void*)0},{(void*)0,&l_781,&l_826,&l_829,&g_13,(void*)0,&g_76,&g_13,&l_781},{&l_829,&g_13,&l_826,&l_781,&g_76,&l_781,&l_826,&g_13,&l_829},{(void*)0,&g_76,&g_13,&g_91,&l_781,&l_829,&g_91,&g_13,&g_76},{&g_13,&g_91,&l_829,(void*)0,(void*)0,&g_91,&l_829,&l_826,&l_829},{(void*)0,&l_781,&g_91,&l_781,&l_829,&l_781,&l_829,&l_781,&l_829},{&l_829,&g_91,&g_91,&g_91,&g_13,&g_76,&l_781,&l_826,&l_781},{&g_91,&l_829,&l_781,&l_826,&g_76,&g_91,&l_781,&g_91,&g_76},{&g_13,&g_13,&g_91,(void*)0,&g_13,&l_826,&g_76,&g_76,&g_13},{(void*)0,&g_76,&g_13,&l_781,&l_781,&g_13,&g_76,(void*)0,&g_13}};
                int i, j;
                l_859[0][3] = &l_781;
            }
        }
    }

    ;

    ;
    return &g_13;


}







static unsigned func_9(unsigned long long p_10)
{
    int l_707[2];
    int i;
    for (i = 0; i < 2; i++)
        l_707[i] = 0L;
    return l_707[1];
}







static char func_14(int * p_15, unsigned short p_16, int * p_17, int * p_18, unsigned p_19)
{
    unsigned short l_706 = 65535UL;
    (*p_15) = (*p_15);
    return l_706;
}







static int * func_20(int * p_21, int * const p_22, unsigned p_23, int * const p_24)
{
    unsigned long long l_491[3];
    int l_493[10][4] = {{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
    short ** const l_598 = &g_197[6];
    short **l_599 = &g_197[6];
    long long ***l_618 = &g_239;
    long long ****l_617 = &l_618;
    unsigned short ***l_623[7][6][5] = {{{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,(void*)0,&g_229,&g_229,&g_229},{(void*)0,&g_229,&g_229,(void*)0,&g_229},{&g_229,&g_229,&g_229,(void*)0,&g_229},{&g_229,(void*)0,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229}},{{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229}},{{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229}},{{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229}},{{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229}},{{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229}},{{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229},{&g_229,&g_229,(void*)0,&g_229,&g_229},{&g_229,&g_229,&g_229,&g_229,&g_229}}};
    const int *l_630 = &l_493[8][1];
    const int **l_629[9] = {&l_630,&l_630,&l_630,&l_630,&l_630,&l_630,&l_630,&l_630,&l_630};
    const int ***l_628 = &l_629[0];
    short l_631 = (-1L);
    char **l_673 = (void*)0;
    const int l_705 = (-6L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_491[i] = 0x1A638DAC64B3BD3BLL;
    for (p_23 = 0; (p_23 > 17); p_23 = safe_add_func_uint64_t_u_u(p_23, 1))
    {
        long long l_473 = (-1L);
        unsigned long long *l_474[10] = {&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26};
        unsigned l_495 = 18446744073709551615UL;
        int *l_504 = &g_91;
        unsigned long long *l_533 = &l_491[0];
        int i;
        for (g_171 = 0; (g_171 != 58); ++g_171)
        {
            unsigned long long l_475[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            int *l_488 = &g_155;
            int l_511 = 7L;
            int *l_586 = &g_76;
            short *l_597 = &g_256[2];
            short ***l_600 = &l_599;
            unsigned *l_602 = (void*)0;
            unsigned *l_603 = &g_431;
            int i;
        }
        if ((*p_24))
            break;
        for (g_106 = 0; (g_106 >= 13); g_106++)
        {
            short l_614 = (-1L);
            (*l_504) = (((safe_lshift_func_uint8_t_u_u((0x8CE8F5B15C773743LL <= (safe_mod_func_uint64_t_u_u((safe_div_func_uint8_t_u_u((((*g_240) = p_23) || ((((((**g_239) = p_23) , ((safe_rshift_func_int8_t_s_u(0xC2L, 2)) < ((**g_229) = ((l_614 = p_23) < ((safe_mul_func_uint16_t_u_u(((**g_261) && 0UL), ((void*)0 != &p_21))) , (*g_240)))))) , l_614) , l_614) | p_23)), (**g_261))), p_23))), (*l_504))) , l_614) & 0x4C6D35B93D66BEC8LL);
        }
        if ((*p_22))
            continue;
    }
    (*g_111) = func_27((((((*l_617) = (void*)0) == &g_239) || (safe_add_func_int32_t_s_s(l_493[8][3], l_491[1]))) , &l_491[2]), g_320);


    ;
    for (g_76 = 0; (g_76 == (-30)); g_76--)
    {
        unsigned char l_638 = 1UL;
        int l_639 = 1L;
        int l_640 = 0xC6310BEAL;
        unsigned long long *l_651 = &l_491[1];
        char * const *l_670 = &g_121;
        unsigned short * const ***l_680 = &g_658;
    }
    return p_21;


}







static int * func_27(unsigned long long * p_28, unsigned p_29)
{
    int *l_468[7] = {&g_13,&g_13,&g_13,&g_13,&g_13,&g_13,&g_13};
    int i;
    return l_468[6];


}







static unsigned long long * func_30(unsigned long long p_31, int * const p_32, const unsigned char p_33, char p_34, int p_35)
{
    short l_434 = 0xD079L;
    const unsigned short *l_435 = &g_69;
    int l_446 = 0x05D67222L;
    unsigned long long *l_449 = &g_26;
    unsigned long long **l_452[1][7] = {{&l_449,&l_449,&l_449,&l_449,&l_449,&l_449,&l_449}};
    unsigned long long *l_454 = (void*)0;
    int l_455 = 1L;
    int *l_466 = &g_76;
    int i, j;
    (*p_32) = (l_434 >= (8UL <= (((((l_435 != l_435) != ((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u((((safe_add_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(0x0B15A4E9L, (l_446 , (safe_add_func_int64_t_s_s((**g_239), ((**g_229) != (**g_229))))))) != g_89), p_31)) , 255UL) > l_434), p_33)), p_33)) ^ 0L)) < (*g_230)) < p_33) < l_446)));
    (*p_32) = ((((safe_lshift_func_uint16_t_u_u(((*g_230) = (*g_230)), (l_434 & ((g_256[2] , l_434) | (l_434 != l_446))))) , ((((1UL != (**g_120)) , l_446) != 0L) >= p_35)) || p_31) < l_434);
    l_455 = (7UL != l_434);
    if ((((**g_261) = (l_455 , (0x630B20F8B623F715LL | (65535UL ^ ((l_434 | (((*p_32) = 0L) , ((l_434 , p_34) | 0UL))) <= 0x36EAC91FL))))) > l_434))
    {
        int **l_456[5];
        int **l_457 = &g_112[3];
        unsigned *l_458[1][4] = {{&g_172[1][3][2],&g_172[1][3][2],&g_172[1][3][2],&g_172[1][3][2]}};
        unsigned long long *l_461[9][3] = {{&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26},{&g_26,&g_26,&g_26}};
        int i, j;
        for (i = 0; i < 5; i++)
            l_456[i] = &g_112[3];
        (*l_457) = p_32;
        l_466 = func_36((g_172[2][2][7] = p_33), ((l_446 || (((safe_sub_func_uint32_t_u_u(p_33, (((p_33 <= ((l_455 == (safe_unary_minus_func_int16_t_s(p_35))) & (*p_32))) < (((safe_mod_func_int8_t_s_s((**g_120), 8UL)) , (void*)0) == &g_336)) , 0x1ABF1F39L))) < (**g_239)) > (-1L))) <= 2L), g_465, l_446);
    }
    else
    {
        for (g_69 = 0; (g_69 <= 0); g_69 += 1)
        {
            int *l_467 = &g_91;
            (*g_111) = l_467;
            for (l_455 = 0; (l_455 >= 0); l_455 -= 1)
            {
                (*g_111) = (void*)0;
            }
        }
    }
    return &g_26;


}







static int * func_36(unsigned p_37, unsigned p_38, unsigned long long * p_39, unsigned long long p_40)
{
    int l_238 = 1L;
    const long long **l_254 = (void*)0;
    int *l_260 = &g_76;
    unsigned short l_337[10] = {0xD6FDL,1UL,0xD6FDL,0xD6FDL,1UL,0xD6FDL,0xD6FDL,1UL,0xD6FDL,0xD6FDL};
    unsigned long long *l_373 = &g_26;
    int i;
    for (g_106 = 5; (g_106 >= 0); g_106 -= 1)
    {
        int *l_235 = &g_76;
        const int *l_236 = &g_91;
        int l_257 = 0x435AD968L;
        int l_258[6] = {(-7L),(-7L),(-7L),(-7L),(-7L),(-7L)};
        unsigned long long *l_271[9] = {&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26,&g_26};
        int *l_342 = &g_76;
        int i;
        if (p_38)
        {
            return l_235;


        }
        else
        {
            const int **l_237 = &l_236;
            short **l_244 = &g_197[1];
            (*l_237) = l_236;
            if (l_238)
            {
                long long ***l_241 = &g_239;
                (*l_241) = g_239;
                for (g_62 = 4; (g_62 >= 0); g_62 -= 1)
                {
                    int i;
                    l_244 = ((safe_mod_func_int16_t_s_s(0x633CL, (**l_237))) , &g_197[6]);
                    for (l_238 = 5; (l_238 >= 0); l_238 -= 1)
                    {
                        int i, j, k;
                        (*l_235) = g_172[g_62][g_62][(g_106 + 2)];
                    }
                }
                if (l_238)
                    continue;
            }
            else
            {
                (*g_111) = &g_76;
            }
            (*g_111) = &g_76;
        }
    }
    (*g_111) = l_260;
    for (g_59 = 21; (g_59 == (-18)); g_59--)
    {
        short l_349 = 0x2D6CL;
        const unsigned l_352 = 0UL;
        int *l_359 = &g_76;
        unsigned long long *l_425 = &g_26;
    }
    return l_260;


}







static unsigned func_41(unsigned long long * p_42)
{
    int l_137 = 0L;
    int *l_138[2];
    long long l_139 = (-1L);
    char *l_142 = (void*)0;
    long long l_189 = 0xE0025C80A1DA3663LL;
    short **l_198 = &g_197[2];
    unsigned long long l_199 = 0UL;
    int i;
    for (i = 0; i < 2; i++)
        l_138[i] = &l_137;
    if ((l_139 = ((**g_111) = l_137)))
    {
        char * const l_143 = &g_62;
        int l_144 = 9L;
        int l_152 = 1L;
        const int *l_161 = (void*)0;
        const int **l_160 = &l_161;
        unsigned l_190 = 0xE7CADE12L;
        for (g_62 = 0; (g_62 != 29); g_62 = safe_add_func_uint16_t_u_u(g_62, 4))
        {
            int **l_149[4];
            int **l_151 = &g_112[3];
            int ***l_150 = &l_151;
            short *l_153 = &g_106;
            unsigned short *l_154 = &g_69;
            char *l_184 = (void*)0;
            unsigned long long l_191 = 18446744073709551606UL;
            int i;
            for (i = 0; i < 4; i++)
                l_149[i] = &g_112[3];
        }
        for (l_152 = 0; (l_152 == 18); l_152 = safe_add_func_uint64_t_u_u(l_152, 9))
        {
            long long l_195[10] = {0x95231DAC2A05BAC6LL,0x95231DAC2A05BAC6LL,0x95231DAC2A05BAC6LL,0x95231DAC2A05BAC6LL,0x95231DAC2A05BAC6LL,0x95231DAC2A05BAC6LL,0x95231DAC2A05BAC6LL,0x95231DAC2A05BAC6LL,0x95231DAC2A05BAC6LL,0x95231DAC2A05BAC6LL};
            int i;
            l_198 = (l_195[5] , g_196[0]);
            (**g_111) = (**g_111);
            return l_199;
        }
        for (g_93 = 0; (g_93 > 13); g_93 = safe_add_func_int8_t_s_s(g_93, 4))
        {
            unsigned l_202 = 0x8531C68EL;
            int l_207 = 9L;
            short **l_208 = &g_197[6];
            if (l_202)
            {
                for (g_26 = 0; (g_26 != 54); g_26 = safe_add_func_uint32_t_u_u(g_26, 2))
                {
                    short ***l_209 = &l_208;
                    for (l_190 = (-30); (l_190 > 18); l_190 = safe_add_func_int32_t_s_s(l_190, 7))
                    {
                        l_207 = (**g_111);
                        (*g_111) = (*g_111);
                    }
                    (*l_209) = l_208;
                }
            }
            else
            {
                char l_210 = 1L;
                if (l_210)
                    break;
            }
        }
    }
    else
    {
        unsigned l_214 = 1UL;
        unsigned long long *l_226 = &g_26;
        short ***l_227 = &g_196[0];
        short *l_228 = &g_106;
        unsigned short ***l_231 = &g_229;
        for (l_199 = (-3); (l_199 <= 12); l_199 = safe_add_func_uint64_t_u_u(l_199, 6))
        {
            int *l_213 = (void*)0;
            (*g_111) = l_213;


            return l_214;
        }
        for (l_199 = 21; (l_199 != 29); l_199++)
        {
            int l_217 = 0xA9099480L;
            for (l_189 = 0; (l_189 <= 1); l_189 += 1)
            {
                int i;
                (*g_111) = (l_138[l_189] = &l_137);
                (**g_111) = ((*g_121) > g_93);
            }


            (*g_111) = &l_137;
            return l_217;


        }
        (**g_111) = ((safe_sub_func_int16_t_s_s((((((*l_198) = (((((((l_214 != (safe_lshift_func_uint8_t_u_s(247UL, 1))) , (((((safe_add_func_int32_t_s_s((**g_111), (safe_lshift_func_int16_t_s_s(((void*)0 != l_226), 3)))) <= g_26) , &l_198) == l_227) >= 0UL)) < g_69) >= l_214) | 0x7A610555L) <= l_214) , l_228)) == (void*)0) & l_214) & 0x84L), l_214)) & g_162);
        (*l_231) = g_229;
    }
    for (g_69 = 0; (g_69 == 29); g_69 = safe_add_func_int64_t_s_s(g_69, 3))
    {
        l_138[0] = (void*)0;
    }


    return g_59;
}







static unsigned long long * func_43(char p_44, long long p_45, unsigned long long * p_46, const int * p_47)
{
    unsigned long long l_48[2][9][5] = {{{1UL,0x8E1F916744FA7555LL,0xFEFD6E511AFD208DLL,1UL,18446744073709551615UL},{0x2DC0978C764457C1LL,0x4E2BBA6DAD3F04E2LL,0xBAB721576660B256LL,0x268DD2AC30BCA0BELL,0x36042C8CDAB0B826LL},{1UL,0x2932384B6D700D1ALL,0xCCB090AEC51AC06ELL,0x2932384B6D700D1ALL,1UL},{18446744073709551614UL,0x8A0F8393131EC8E1LL,0x36042C8CDAB0B826LL,0xBAB721576660B256LL,0xDCFF2FD6B221494FLL},{1UL,18446744073709551615UL,0x70C0F3ADCFEC76E8LL,18446744073709551615UL,0UL},{0xABED9978317D239FLL,0x9A46BB218AD385E3LL,0xFA18394D2570D978LL,0x8A0F8393131EC8E1LL,0xDCFF2FD6B221494FLL},{0xCCB090AEC51AC06ELL,18446744073709551615UL,18446744073709551615UL,0xCCB090AEC51AC06ELL,1UL},{0xDCFF2FD6B221494FLL,18446744073709551612UL,0xC844FC37F20BAB1FLL,18446744073709551615UL,0x36042C8CDAB0B826LL},{18446744073709551611UL,1UL,0x6BC59458D81C9193LL,0xB5BCDCEC458AF326LL,18446744073709551615UL}},{{0xC844FC37F20BAB1FLL,18446744073709551606UL,0x4E2BBA6DAD3F04E2LL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551611UL,18446744073709551615UL,0xCCB090AEC51AC06ELL,18446744073709551615UL},{18446744073709551606UL,0x2DC0978C764457C1LL,18446744073709551611UL,0x8A0F8393131EC8E1LL,0xBAB721576660B256LL},{0x23FE298319B20E95LL,6UL,1UL,18446744073709551615UL,18446744073709551612UL},{0x8A0F8393131EC8E1LL,18446744073709551615UL,18446744073709551611UL,0xBAB721576660B256LL,18446744073709551611UL},{0x6BC59458D81C9193LL,0x6BC59458D81C9193LL,18446744073709551615UL,0x2932384B6D700D1ALL,0xB5BCDCEC458AF326LL},{0x36042C8CDAB0B826LL,0x5C00D4B3BEBDA3FALL,0x4E2BBA6DAD3F04E2LL,0x268DD2AC30BCA0BELL,18446744073709551614UL},{0UL,18446744073709551615UL,0x6BC59458D81C9193LL,1UL,0x70C0F3ADCFEC76E8LL},{0x1EF224B34D7AEB8FLL,0x5C00D4B3BEBDA3FALL,18446744073709551611UL,18446744073709551611UL,0x1EF224B34D7AEB8FLL}}};
    unsigned short l_107 = 7UL;
    int l_110 = 3L;
    char *l_118[2];
    int *l_133 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_118[i] = &g_59;
    for (p_44 = 1; (p_44 >= 0); p_44 -= 1)
    {
        unsigned short l_63[7][1] = {{2UL},{0xDA0DL},{2UL},{2UL},{0xDA0DL},{2UL},{2UL}};
        int l_64 = 0L;
        int *l_75 = &g_76;
        unsigned long long *l_81 = (void*)0;
        const int *l_85 = &g_76;
        int l_94 = 8L;
        const int **l_115 = &l_85;
        int i, j;
        if ((*p_47))
        {
            int *l_50[3];
            int **l_49 = &l_50[1];
            int i;
            for (i = 0; i < 3; i++)
                l_50[i] = &g_13;
            (*l_49) = &g_13;
        }
        else
        {
            unsigned long long *l_60 = &l_48[0][2][4];
            char *l_61 = &g_62;
            int *l_70[9][6][2] = {{{&l_64,&g_13},{&g_13,(void*)0},{&l_64,(void*)0},{&g_13,&g_13},{&l_64,&g_13},{&l_64,&l_64}},{{&g_13,&l_64},{&g_13,&l_64},{&g_13,&l_64},{&g_13,&g_13},{&l_64,&g_13},{&l_64,&g_13}},{{&g_13,&l_64},{&g_13,&l_64},{&g_13,&l_64},{&g_13,&l_64},{&l_64,&g_13},{&l_64,&g_13}},{{&g_13,(void*)0},{&l_64,(void*)0},{&g_13,&g_13},{&l_64,&g_13},{&l_64,&l_64},{&g_13,&l_64}},{{&g_13,&l_64},{&g_13,&l_64},{&g_13,&g_13},{&l_64,&g_13},{&l_64,&g_13},{&g_13,&l_64}},{{&g_13,&l_64},{&g_13,&l_64},{&g_13,&l_64},{&l_64,&g_13},{&l_64,&g_13},{&g_13,(void*)0}},{{&l_64,(void*)0},{&g_13,&g_13},{&l_64,&g_13},{&l_64,&l_64},{&g_13,&l_64},{&g_13,&l_64}},{{&g_13,&l_64},{&g_13,&g_13},{&l_64,(void*)0},{&l_64,&g_13},{&g_13,&g_13},{&g_13,&g_13}},{{&l_64,&l_64},{&g_13,&l_64},{&l_64,&g_13},{&l_64,&g_13},{(void*)0,&l_64},{&l_64,&l_64}}};
            int **l_77 = &l_75;
            const int *l_84 = (void*)0;
            int i, j, k;
            if ((l_64 = ((safe_rshift_func_int16_t_s_s(0x46B8L, (((safe_div_func_int32_t_s_s(((g_26 , (((safe_lshift_func_uint16_t_u_s((g_26 <= ((*l_61) = (((safe_rshift_func_int16_t_s_u((g_59 = p_44), 5)) & ((~g_26) ^ 1UL)) != ((*l_60) = (g_26 && g_26))))), 2)) && (*p_47)) , l_63[4][0])) ^ 1L), g_13)) >= g_26) , p_45))) , (*p_47))))
            {
                unsigned short l_67 = 1UL;
                int *l_74 = &g_13;
                if (g_62)
                {
                    int **l_73 = &l_70[2][0][0];
                    for (g_26 = 0; (g_26 <= 1); g_26 += 1)
                    {
                        int *l_68 = (void*)0;
                        g_69 = (safe_mul_func_int8_t_s_s((g_26 & l_67), p_44));
                    }
                    for (p_45 = 0; (p_45 <= 1); p_45 += 1)
                    {
                        int **l_71 = (void*)0;
                        int **l_72 = &l_70[7][4][1];
                        (*l_72) = l_70[2][0][0];
                    }
                    (*l_73) = (void*)0;
                    for (l_64 = 0; (l_64 <= 1); l_64 += 1)
                    {
                        int ***l_78 = &l_77;
                        l_75 = l_74;

                        ;
                        (*l_78) = l_77;
                        g_76 = ((safe_add_func_int64_t_s_s(g_69, g_59)) == 1L);
                    }

                    ;
                }
                else
                {
                    return l_81;


                }

                ;
            }
            else
            {
                return &g_26;


            }

            ;
            for (l_64 = 1; (l_64 >= 0); l_64 -= 1)
            {
                const int *l_83[7][10] = {{(void*)0,(void*)0,(void*)0,&l_64,&l_64,(void*)0,(void*)0,(void*)0,&l_64,&l_64},{(void*)0,(void*)0,(void*)0,&l_64,&l_64,(void*)0,(void*)0,(void*)0,&l_64,&l_64},{(void*)0,(void*)0,(void*)0,&l_64,&l_64,(void*)0,(void*)0,(void*)0,&l_64,&l_64},{(void*)0,(void*)0,(void*)0,&l_64,&l_64,(void*)0,(void*)0,(void*)0,&l_64,&l_64},{(void*)0,(void*)0,(void*)0,&l_64,&l_64,(void*)0,(void*)0,(void*)0,&l_64,&l_64},{(void*)0,(void*)0,(void*)0,&l_64,&l_64,(void*)0,(void*)0,(void*)0,&l_64,&l_64},{(void*)0,(void*)0,(void*)0,&l_64,&l_64,(void*)0,(void*)0,(void*)0,&l_64,&l_64}};
                const int **l_82[10] = {&l_83[1][4],&l_83[1][4],&l_83[1][4],&l_83[1][4],&l_83[1][4],&l_83[1][4],&l_83[1][4],&l_83[1][4],&l_83[1][4],&l_83[1][4]};
                int i, j;
                l_84 = p_47;

                ;
                for (g_59 = 1; (g_59 >= 0); g_59 -= 1)
                {
                    long long *l_88[9][4][4] = {{{&g_89,&g_89,(void*)0,&g_89},{&g_89,(void*)0,(void*)0,&g_89},{&g_89,(void*)0,&g_89,(void*)0},{&g_89,(void*)0,(void*)0,&g_89}},{{&g_89,(void*)0,&g_89,&g_89},{&g_89,&g_89,(void*)0,&g_89},{&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,(void*)0,&g_89}},{{&g_89,(void*)0,(void*)0,&g_89},{&g_89,(void*)0,&g_89,(void*)0},{&g_89,(void*)0,(void*)0,&g_89},{&g_89,(void*)0,&g_89,&g_89}},{{&g_89,&g_89,(void*)0,&g_89},{&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,(void*)0,&g_89},{&g_89,(void*)0,(void*)0,&g_89}},{{&g_89,(void*)0,&g_89,(void*)0},{&g_89,(void*)0,(void*)0,&g_89},{&g_89,(void*)0,&g_89,&g_89},{&g_89,&g_89,(void*)0,&g_89}},{{&g_89,&g_89,&g_89,&g_89},{&g_89,&g_89,(void*)0,&g_89},{&g_89,&g_89,&g_89,(void*)0},{(void*)0,(void*)0,&g_89,&g_89}},{{(void*)0,(void*)0,(void*)0,(void*)0},{&g_89,&g_89,(void*)0,&g_89},{&g_89,(void*)0,(void*)0,&g_89},{(void*)0,(void*)0,&g_89,&g_89}},{{(void*)0,(void*)0,&g_89,&g_89},{&g_89,&g_89,&g_89,(void*)0},{(void*)0,(void*)0,&g_89,&g_89},{(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_89,&g_89,(void*)0,&g_89},{&g_89,(void*)0,(void*)0,&g_89},{(void*)0,(void*)0,&g_89,&g_89},{(void*)0,(void*)0,&g_89,&g_89}}};
                    int l_90 = 0x913F082FL;
                    char *l_92 = &g_93;
                    int i, j, k;
                    if ((*p_47))
                        break;
                    l_85 = p_47;

                    ;
                    if ((safe_div_func_int8_t_s_s(((*l_61) = ((g_62 || (g_89 = g_59)) , p_45)), ((*l_92) = (((l_48[g_59][(l_64 + 6)][(g_59 + 1)] = l_90) >= p_45) , (g_91 && (*p_47)))))))
                    {
                        g_76 = g_69;
                        l_90 = (l_94 = g_89);
                    }
                    else
                    {
                        const int *l_95 = &g_91;
                        l_95 = p_47;

                        ;
                        l_90 = ((safe_mod_func_uint64_t_u_u(g_62, (p_45 && (g_26 , 0x97C6D2EDL)))) , 0x757F9C6BL);
                    }
                    g_91 = ((safe_sub_func_int32_t_s_s(l_48[g_59][(l_64 + 6)][(g_59 + 1)], ((safe_lshift_func_uint16_t_u_s((g_59 , p_45), (safe_sub_func_int8_t_s_s(((~p_44) > (p_44 > (g_106 = ((*p_46) = (safe_lshift_func_int16_t_s_u(l_90, 3)))))), ((*l_61) = (g_59 , l_107)))))) | g_69))) > 0x3EDC7201A7A66DA9LL);
                }
            }

            ;
            ;
        }

        ;
        ;
        (*g_111) = (*g_111);
        (*l_115) = p_47;

        ;
        for (l_107 = 0; (l_107 <= 1); l_107 += 1)
        {
            unsigned long long l_116 = 0UL;
            char *l_117 = &g_59;
            int l_119 = 9L;
            (**g_111) = l_116;
        }
    }
    for (g_76 = 3; (g_76 == 5); ++g_76)
    {
        for (g_93 = 26; (g_93 > (-6)); --g_93)
        {
            return p_46;


        }
    }
    l_133 = (*g_111);

    ;
    for (g_69 = 0; (g_69 < 20); g_69++)
    {
        unsigned char l_136 = 252UL;
        if (l_136)
            break;
    }
    return &g_26;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_162, "g_162", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_172[i][j][k], "g_172[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_256[i], "g_256[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_336, "g_336", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_601, "g_601", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_713[i][j], "g_713[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_868, "g_868", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
