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



static int g_3 = 1L;
static unsigned long long g_21 = 1UL;
static unsigned long long g_30[8][2][7] = {{{0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}, {0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}}, {{0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}, {0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}}, {{0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}, {0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}}, {{0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}, {0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}}, {{0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}, {0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}}, {{0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}, {0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}}, {{0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}, {0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}}, {{0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}, {0UL, 0xC5530C4E2BF5F40ELL, 1UL, 8UL, 5UL, 0x75015E0C0A103363LL, 2UL}}};
static int g_31 = 0x75B167D3L;
static int **g_72 = (void*)0;
static short g_95 = 6L;
static int g_99 = (-4L);
static int g_105 = 0xEBBCFA1FL;
static unsigned g_113 = 0xB9274591L;
static unsigned *g_112 = &g_113;
static unsigned g_116 = 0x8CC9215AL;
static unsigned long long g_124 = 0x2B5D766400F4CAC2LL;
static unsigned **g_136[1][6][1] = {{{&g_112}, {&g_112}, {&g_112}, {&g_112}, {&g_112}, {&g_112}}};
static int g_145[6] = {0L, 0xBAC1F965L, 0L, 0xBAC1F965L, 0L, 0xBAC1F965L};
static int *g_144 = &g_145[5];
static unsigned char g_153 = 0x84L;
static long long g_156[4][7] = {{0xD39EDE03748BFE3BLL, 0xE0FD48341D410C6DLL, (-2L), (-2L), 0xE0FD48341D410C6DLL, 0xD39EDE03748BFE3BLL, 0xE0FD48341D410C6DLL}, {0xD39EDE03748BFE3BLL, 0xE0FD48341D410C6DLL, (-2L), (-2L), 0xE0FD48341D410C6DLL, 0xD39EDE03748BFE3BLL, 0xE0FD48341D410C6DLL}, {0xD39EDE03748BFE3BLL, 0xE0FD48341D410C6DLL, (-2L), (-2L), 0xE0FD48341D410C6DLL, 0xD39EDE03748BFE3BLL, 0xE0FD48341D410C6DLL}, {0xD39EDE03748BFE3BLL, 0xE0FD48341D410C6DLL, (-2L), (-2L), 0xE0FD48341D410C6DLL, 0xD39EDE03748BFE3BLL, 0xE0FD48341D410C6DLL}};
static unsigned long long **g_176 = (void*)0;
static char g_219[3] = {(-7L), (-7L), (-7L)};
static char g_221 = 8L;
static int g_222 = 0xACA3D234L;
static unsigned long long *g_262 = &g_124;
static int *g_275[2] = {&g_145[0], &g_145[0]};
static short *g_277 = &g_95;
static short **g_276[9][3] = {{&g_277, &g_277, &g_277}, {&g_277, &g_277, &g_277}, {&g_277, &g_277, &g_277}, {&g_277, &g_277, &g_277}, {&g_277, &g_277, &g_277}, {&g_277, &g_277, &g_277}, {&g_277, &g_277, &g_277}, {&g_277, &g_277, &g_277}, {&g_277, &g_277, &g_277}};
static short g_344 = 0xC355L;
static int *g_359 = &g_145[5];
static long long *g_400[3] = {&g_156[2][5], &g_156[2][5], &g_156[2][5]};
static long long **g_399 = &g_400[1];
static long long ***g_398 = &g_399;
static long long g_422 = 0x592546ABEB55A9C7LL;
static unsigned short g_445 = 1UL;
static unsigned long long g_479[10][4] = {{18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}, {18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}, {18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}, {18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}, {18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}, {18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}, {18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}, {18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}, {18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}, {18446744073709551615UL, 18446744073709551615UL, 0xF3A90E59BD8FBE61LL, 0xFBEF4600CD059F32LL}};
static int g_483[9] = {0xA95974F7L, (-1L), 0xA95974F7L, (-1L), 0xA95974F7L, (-1L), 0xA95974F7L, (-1L), 0xA95974F7L};
static unsigned long long g_516 = 0xC5556554FD4947CELL;
static int g_551[1] = {0L};
static unsigned g_591 = 4294967290UL;
static unsigned char *g_623 = &g_153;
static unsigned char **g_622 = &g_623;
static char g_644 = 0xD2L;
static unsigned char g_674 = 0x74L;
static unsigned short g_675 = 0xAFF2L;
static unsigned char g_677 = 3UL;
static short ***g_694 = &g_276[4][2];
static short ****g_693 = &g_694;
static char g_734 = 0xD3L;
static char g_737[1] = {7L};
static unsigned short *g_874 = (void*)0;
static unsigned short **g_873[4] = {(void*)0, &g_874, (void*)0, &g_874};
static unsigned g_913 = 0xF7BF0D2DL;
static unsigned g_918 = 0x59EE8C06L;
static unsigned long long *g_921[1] = {(void*)0};
static int *g_967[4][4] = {{&g_145[5], (void*)0, &g_483[8], (void*)0}, {&g_145[5], (void*)0, &g_483[8], (void*)0}, {&g_145[5], (void*)0, &g_483[8], (void*)0}, {&g_145[5], (void*)0, &g_483[8], (void*)0}};
static char g_969 = (-10L);
static unsigned short g_1131 = 65534UL;
static unsigned g_1256[5][5] = {{0UL, 0x8ADA9CD6L, 4294967295UL, 0x8ADA9CD6L, 0UL}, {0UL, 0x8ADA9CD6L, 4294967295UL, 0x8ADA9CD6L, 0UL}, {0UL, 0x8ADA9CD6L, 4294967295UL, 0x8ADA9CD6L, 0UL}, {0UL, 0x8ADA9CD6L, 4294967295UL, 0x8ADA9CD6L, 0UL}, {0UL, 0x8ADA9CD6L, 4294967295UL, 0x8ADA9CD6L, 0UL}};
static char g_1322 = 0x56L;
static unsigned g_1475[9] = {6UL, 4294967289UL, 6UL, 4294967289UL, 6UL, 4294967289UL, 6UL, 4294967289UL, 6UL};



static int func_1(void);
static unsigned short func_6(int p_7, char p_8, long long p_9, unsigned p_10, unsigned char p_11);
static long long func_14(unsigned short p_15, unsigned long long p_16, unsigned char p_17, char p_18, char p_19);
static unsigned short func_22(unsigned short p_23);
static unsigned short func_24(unsigned long long * p_25, unsigned p_26);
static unsigned long long * func_27(unsigned long long * p_28);
static char func_42(int p_43, long long p_44, unsigned long long * p_45);
static char func_49(unsigned long long * p_50, unsigned long long * p_51);
static int * func_53(char p_54, int p_55, int * p_56, int * p_57, unsigned long long * p_58);
static int * func_59(int * p_60, int * p_61, unsigned long long * p_62, int p_63, unsigned p_64);
static int func_1(void)
{
    long long l_2[3][3] = {{(-1L), 0x9C28ADE19D29BE1DLL, (-1L)}, {(-1L), 0x9C28ADE19D29BE1DLL, (-1L)}, {(-1L), 0x9C28ADE19D29BE1DLL, (-1L)}};
    unsigned long long *l_29 = &g_30[6][1][2];
    int l_1473 = (-5L);
    unsigned short l_1495 = 65530UL;
    int *l_1498 = &g_145[5];
    int i, j;
    for (g_3 = 0; (g_3 <= 2); g_3 += 1)
    {
        unsigned long long *l_20 = &g_21;
        int l_925[6] = {(-1L), (-1L), 9L, (-1L), (-1L), 9L};
        unsigned l_1502 = 0xF7BB8A07L;
        unsigned l_1506[8];
        char l_1509[4];
        unsigned *l_1511 = &g_1475[6];
        int i;
        for (i = 0; i < 8; i++)
            l_1506[i] = 0xC34C132AL;
        for (i = 0; i < 4; i++)
            l_1509[i] = 0xAFL;
    }
    (*g_144) = ((*l_1498) && (*g_277));
    (*g_144) = (*l_1498);
    return (*g_144);
}







static unsigned short func_6(int p_7, char p_8, long long p_9, unsigned p_10, unsigned char p_11)
{
    long long l_1453 = 3L;
    unsigned short *l_1458 = &g_445;
    int l_1459[1];
    long long l_1464 = 1L;
    int *l_1465 = (void*)0;
    int *l_1466 = (void*)0;
    int l_1467 = 0xF2E197D9L;
    int *l_1468 = &g_483[3];
    int i;
    for (i = 0; i < 1; i++)
        l_1459[i] = 1L;
    (*l_1468) = (l_1467 = (l_1464 = ((safe_lshift_func_int16_t_s_u(((safe_div_func_uint32_t_u_u(p_8, (l_1453 && ((***g_398) || (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((*l_1458) = l_1453), (((l_1459[0] = g_422) < (**g_622)) ^ l_1453))), 0)))))) ^ ((*g_262) = p_8)), ((safe_sub_func_uint8_t_u_u((((safe_add_func_int32_t_s_s((-6L), p_8)) < 0xB5F7L) & (**g_622)), 0x5FL)) | 2UL))) <= l_1453)));
    return p_9;
}







static long long func_14(unsigned short p_15, unsigned long long p_16, unsigned char p_17, char p_18, char p_19)
{
    int l_1314 = 7L;
    int *l_1315 = &g_483[3];
    char *l_1350 = (void*)0;
    char l_1382 = 4L;
    for (g_116 = 0; (g_116 < 3); g_116 = safe_add_func_uint64_t_u_u(g_116, 2))
    {
        short *****l_1311 = &g_693;
        unsigned l_1312 = 0x3C138C60L;
        int l_1313 = 0L;
        unsigned long long *l_1321 = &g_30[4][1][0];
        int *l_1352 = &g_483[3];
        unsigned char l_1375 = 248UL;
        int *l_1387 = &g_145[5];
        l_1314 = (safe_div_func_uint16_t_u_u(((l_1312 = p_17) ^ (p_18 || 4294967294UL)), l_1313));
        l_1315 = l_1315;
        for (g_222 = 0; (g_222 < (-1)); --g_222)
        {
            unsigned long long l_1318 = 0xE0B2F40E9DBD73B9LL;
            unsigned char l_1331 = 0UL;
            int l_1341 = 0xAD359E01L;
            int l_1343 = 6L;
            char *l_1351[5][4] = {{&g_1322, &g_1322, &g_734, &g_1322}, {&g_1322, &g_1322, &g_734, &g_1322}, {&g_1322, &g_1322, &g_734, &g_1322}, {&g_1322, &g_1322, &g_734, &g_1322}, {&g_1322, &g_1322, &g_734, &g_1322}};
            unsigned long long *l_1369[1][9] = {{(void*)0, &g_516, (void*)0, &g_516, (void*)0, &g_516, (void*)0, &g_516, (void*)0}};
            int *l_1376 = (void*)0;
            unsigned short l_1413 = 0x7431L;
            unsigned short **l_1429 = &g_874;
            int **l_1440 = &g_275[1];
            int i, j;
            l_1313 = l_1318;
            if ((l_1341 = ((safe_mod_func_int16_t_s_s((l_1318 || l_1318), ((*g_277) = (safe_mod_func_int64_t_s_s((safe_div_func_int32_t_s_s((*l_1315), (safe_div_func_uint64_t_u_u((safe_add_func_uint8_t_u_u((l_1331 ^ (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int8_t_s((safe_rshift_func_uint8_t_u_u(((**g_622) = ((safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((&l_1313 == l_1315), (0xFC9B1323L | p_18))), p_16)) || (*l_1315))), l_1313)))), p_16))), 253UL)), l_1318)))), (-6L)))))) > l_1313)))
            {
                int **l_1342 = &g_275[0];
                int *l_1385 = &l_1341;
                (*l_1342) = &g_551[0];
                if (l_1343)
                {
                    unsigned long long *l_1353 = &g_21;
                    int **l_1354 = (void*)0;
                    int **l_1355[2][4] = {{(void*)0, &g_144, (void*)0, &g_144}, {(void*)0, &g_144, (void*)0, &g_144}};
                    unsigned *l_1378 = (void*)0;
                    unsigned *l_1379 = &g_113;
                    int i, j;
                    g_967[0][3] = ((*l_1342) = &l_1341);
                    if ((safe_unary_minus_func_int8_t_s((*l_1352))))
                    {
                        unsigned l_1363 = 0x988476C7L;
                        if (l_1318)
                            break;
                        (*l_1315) = (safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(((safe_div_func_uint64_t_u_u(p_18, (*g_262))) <= l_1341), (*g_623))), ((*g_262) & 0xB57E484789FCAC2BLL)));
                    }
                    else
                    {
                        (*l_1352) = 0x33F74CAAL;
                        return l_1341;
                    }
                    if ((*l_1352))
                    {
                        unsigned l_1366 = 18446744073709551607UL;
                        int l_1367 = (-2L);
                        int *l_1368 = &g_145[2];
                        if ((*l_1352))
                            break;
                        l_1368 = ((*l_1342) = l_1315);
                    }
                    else
                    {
                        int *l_1372 = &l_1313;
                        unsigned long long *l_1377 = &l_1318;
                        (*l_1315) = (safe_mod_func_int16_t_s_s((p_17 | (((l_1378 = l_1378) == l_1379) || 1L)), p_17));
                    }
                }
                else
                {
                    char l_1396 = 0L;
                    unsigned char *l_1403[9][8][2] = {{{&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}}, {{&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}}, {{&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}}, {{&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}}, {{&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}}, {{&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}}, {{&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}}, {{&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}}, {{&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}, {&l_1375, &l_1375}}};
                    int l_1404 = 0x1F16F437L;
                    int i, j, k;
                    for (g_591 = 0; (g_591 > 30); g_591 = safe_add_func_int32_t_s_s(g_591, 4))
                    {
                        return l_1382;
                    }
                    for (g_344 = 0; (g_344 != 23); g_344 = safe_add_func_int32_t_s_s(g_344, 1))
                    {
                        int *l_1386[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1386[i] = (void*)0;
                        (*l_1342) = (void*)0;
                        l_1386[0] = l_1385;
                        (*l_1342) = l_1387;
                        if (p_19)
                            continue;
                    }
                    (*l_1387) = ((((*l_1315) = (((safe_div_func_uint8_t_u_u((((safe_sub_func_uint64_t_u_u((safe_mod_func_int16_t_s_s((*g_277), (safe_lshift_func_uint16_t_u_s((*l_1387), 4)))), l_1396)) <= p_19) ^ (safe_sub_func_uint32_t_u_u((*l_1315), (((**g_399) = (safe_div_func_uint32_t_u_u((safe_add_func_int8_t_s_s((p_17 ^ (*g_112)), (l_1404 = (g_677 = (((*g_623) = (**g_622)) & 0x25L))))), (*l_1387)))) == p_19)))), g_913)) >= 0UL) <= 0x522AD4C398530CAELL)) == 4294967295UL) >= p_17);
                    if ((*l_1387))
                        continue;
                }
            }
            else
            {
                long long l_1419[6][10] = {{0xBF6B5ED287635269LL, (-1L), (-1L), 0x49FECAFC20E50897LL, 1L, 0xCDC650D7055F9584LL, 0x26B6E83DD8EADEFCLL, (-9L), (-2L), 1L}, {0xBF6B5ED287635269LL, (-1L), (-1L), 0x49FECAFC20E50897LL, 1L, 0xCDC650D7055F9584LL, 0x26B6E83DD8EADEFCLL, (-9L), (-2L), 1L}, {0xBF6B5ED287635269LL, (-1L), (-1L), 0x49FECAFC20E50897LL, 1L, 0xCDC650D7055F9584LL, 0x26B6E83DD8EADEFCLL, (-9L), (-2L), 1L}, {0xBF6B5ED287635269LL, (-1L), (-1L), 0x49FECAFC20E50897LL, 1L, 0xCDC650D7055F9584LL, 0x26B6E83DD8EADEFCLL, (-9L), (-2L), 1L}, {0xBF6B5ED287635269LL, (-1L), (-1L), 0x49FECAFC20E50897LL, 1L, 0xCDC650D7055F9584LL, 0x26B6E83DD8EADEFCLL, (-9L), (-2L), 1L}, {0xBF6B5ED287635269LL, (-1L), (-1L), 0x49FECAFC20E50897LL, 1L, 0xCDC650D7055F9584LL, 0x26B6E83DD8EADEFCLL, (-9L), (-2L), 1L}};
                int *l_1421[5] = {&l_1341, &g_551[0], &l_1341, &g_551[0], &l_1341};
                unsigned long long *l_1422 = &l_1318;
                int **l_1438 = &l_1421[3];
                int i, j;
                for (g_1131 = 23; (g_1131 == 59); ++g_1131)
                {
                    unsigned long long *l_1416 = &g_30[6][1][2];
                    int l_1420 = 0x93F1B557L;
                    int **l_1423 = &l_1315;
                    (*l_1423) = &l_1341;
                    return p_19;
                }
                if (((p_18 = (safe_sub_func_uint32_t_u_u(p_16, p_16))) > (p_17 > (safe_sub_func_int32_t_s_s((p_15 < p_17), ((*l_1387) = p_17))))))
                {
                    unsigned short ***l_1428[5][9] = {{&g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0]}, {&g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0]}, {&g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0]}, {&g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0]}, {&g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0], &g_873[0], (void*)0, &g_873[0], &g_873[0]}};
                    int i, j;
                    l_1429 = &g_874;
                }
                else
                {
                    char l_1432 = (-1L);
                    int **l_1433 = &g_275[1];
                    (*l_1352) = ((safe_sub_func_int32_t_s_s((*l_1315), (0xD6C96B678CDAB5D4LL | p_16))) >= l_1432);
                    (*l_1433) = &g_3;
                }
                for (l_1314 = (-21); (l_1314 < 8); l_1314 = safe_add_func_uint8_t_u_u(l_1314, 1))
                {
                    return p_17;
                }
                if (((*g_112) == (*l_1387)))
                {
                    (*l_1387) = ((p_18 && 1L) >= p_17);
                }
                else
                {
                    int ***l_1439[8] = {&l_1438, &g_72, &l_1438, &g_72, &l_1438, &g_72, &l_1438, &g_72};
                    unsigned l_1447[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1447[i] = 0xE8E80467L;
                    if ((safe_sub_func_uint32_t_u_u((((l_1438 == (l_1440 = (void*)0)) < (((**g_622) & (((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s((~1UL), 15)), (1UL || (safe_sub_func_uint64_t_u_u(((*l_1352) = ((*l_1321) = (l_1331 <= (~g_918)))), (p_15 || (**g_399))))))) >= 0xE2L) < g_1256[0][2]) > 4294967295UL) > p_15)) <= 0x1D854BB2L)) | p_15), p_15)))
                    {
                        int *l_1448 = &g_551[0];
                        if (l_1447[2])
                            break;
                        (*l_1438) = l_1448;
                        if ((**l_1438))
                            continue;
                    }
                    else
                    {
                        if (p_19)
                            break;
                        (*l_1438) = (*l_1438);
                    }
                    (*l_1387) = (-2L);
                }
            }
            if ((*l_1315))
                continue;
        }
    }
    return p_17;
}







static unsigned short func_22(unsigned short p_23)
{
    int *l_1203[5];
    unsigned long long *l_1210 = (void*)0;
    unsigned long long **l_1211 = &g_921[0];
    unsigned long long *l_1212 = &g_30[2][1][3];
    short ***l_1213 = &g_276[1][0];
    unsigned char l_1232[9][8] = {{0x32L, 0UL, 250UL, 0UL, 0x32L, 0x2EL, 0x32L, 0UL}, {0x32L, 0UL, 250UL, 0UL, 0x32L, 0x2EL, 0x32L, 0UL}, {0x32L, 0UL, 250UL, 0UL, 0x32L, 0x2EL, 0x32L, 0UL}, {0x32L, 0UL, 250UL, 0UL, 0x32L, 0x2EL, 0x32L, 0UL}, {0x32L, 0UL, 250UL, 0UL, 0x32L, 0x2EL, 0x32L, 0UL}, {0x32L, 0UL, 250UL, 0UL, 0x32L, 0x2EL, 0x32L, 0UL}, {0x32L, 0UL, 250UL, 0UL, 0x32L, 0x2EL, 0x32L, 0UL}, {0x32L, 0UL, 250UL, 0UL, 0x32L, 0x2EL, 0x32L, 0UL}, {0x32L, 0UL, 250UL, 0UL, 0x32L, 0x2EL, 0x32L, 0UL}};
    char l_1233 = (-8L);
    int *l_1235 = &g_483[5];
    int *l_1237 = &g_145[5];
    unsigned l_1306[6][7] = {{0x704C3CA5L, 1UL, 1UL, 4294967294UL, 0x43AE6CDCL, 4294967294UL, 1UL}, {0x704C3CA5L, 1UL, 1UL, 4294967294UL, 0x43AE6CDCL, 4294967294UL, 1UL}, {0x704C3CA5L, 1UL, 1UL, 4294967294UL, 0x43AE6CDCL, 4294967294UL, 1UL}, {0x704C3CA5L, 1UL, 1UL, 4294967294UL, 0x43AE6CDCL, 4294967294UL, 1UL}, {0x704C3CA5L, 1UL, 1UL, 4294967294UL, 0x43AE6CDCL, 4294967294UL, 1UL}, {0x704C3CA5L, 1UL, 1UL, 4294967294UL, 0x43AE6CDCL, 4294967294UL, 1UL}};
    int i, j;
    for (i = 0; i < 5; i++)
        l_1203[i] = &g_3;
    for (g_677 = 0; (g_677 <= 45); g_677 = safe_add_func_uint64_t_u_u(g_677, 1))
    {
        unsigned char **l_1202 = &g_623;
        unsigned long long *l_1204 = &g_30[1][0][1];
        int *l_1205 = &g_145[5];
        for (g_644 = 1; (g_644 >= 0); g_644 -= 1)
        {
            unsigned char **l_1201[5][8][3] = {{{&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}}, {{&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}}, {{&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}}, {{&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}}, {{&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}, {&g_623, &g_623, &g_623}}};
            int i, j, k;
            g_275[g_644] = l_1205;
        }
        if ((*l_1205))
            break;
        if (p_23)
            continue;
    }
    if ((((safe_lshift_func_int8_t_s_s((safe_div_func_uint16_t_u_u(0xF1B3L, (((*g_623) = p_23) & (((**g_399) == (p_23 < (((void*)0 != l_1213) >= 0L))) <= 0xF2B8C370L)))), g_913)) ^ p_23) & p_23))
    {
        unsigned l_1214 = 0x38230018L;
        return l_1214;
    }
    else
    {
        unsigned l_1217[4] = {0x1C25BCB0L, 4294967291UL, 0x1C25BCB0L, 4294967291UL};
        int l_1221[5][10] = {{0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L}, {0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L}, {0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L}, {0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L}, {0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L, 0L, 4L}};
        short **l_1230[6][10][4] = {{{&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}}, {{&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}}, {{&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}}, {{&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}}, {{&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}}, {{&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}, {&g_277, (void*)0, &g_277, &g_277}}};
        unsigned long long *l_1231 = (void*)0;
        int i, j, k;
        for (g_153 = 0; (g_153 >= 50); g_153 = safe_add_func_int16_t_s_s(g_153, 1))
        {
            unsigned ***l_1218 = &g_136[0][5][0];
            int l_1219 = 0x5FA6E2C9L;
            long long *l_1220 = &g_422;
            l_1221[0][6] = (l_1217[0] & ((**g_622) & (((void*)0 != l_1218) != ((***l_1218) = (l_1219 <= (((*g_262) > ((*l_1220) = ((***g_398) = p_23))) && 0xA9L))))));
            for (g_918 = 0; (g_918 <= 3); g_918 += 1)
            {
                char l_1222 = 0x30L;
                int i, j;
                g_967[g_918][g_918] = &l_1221[0][6];
            }
            for (g_105 = 20; (g_105 < (-1)); g_105--)
            {
                int *l_1229 = &g_31;
                for (g_116 = 0; (g_116 >= 58); ++g_116)
                {
                    int **l_1227 = &g_967[0][1];
                    int **l_1228 = &l_1203[0];
                    (*l_1228) = ((*l_1227) = l_1203[2]);
                    (*l_1228) = l_1229;
                }
            }
        }
        (*l_1213) = l_1230[5][7][2];
        l_1221[3][6] = p_23;
    }
    if (l_1233)
    {
        int **l_1234[4] = {(void*)0, &l_1203[0], (void*)0, &l_1203[0]};
        int i;
        l_1203[2] = l_1203[0];
    }
    else
    {
        short l_1236 = 0L;
        unsigned long long *l_1245 = (void*)0;
        int *l_1248 = &g_145[5];
        short *****l_1276 = &g_693;
        l_1235 = &g_3;
        l_1236 = p_23;
        l_1237 = l_1237;
        for (g_918 = (-28); (g_918 < 48); g_918++)
        {
            unsigned l_1242[2][4];
            int *l_1253 = &g_145[1];
            short ****l_1258 = &l_1213;
            int l_1269 = 0xAED6D125L;
            long long l_1273 = 1L;
            unsigned long long ***l_1282 = &l_1211;
            unsigned long long ***l_1285 = &l_1211;
            unsigned char l_1286[10][9] = {{1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}, {1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}, {1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}, {1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}, {1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}, {1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}, {1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}, {1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}, {1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}, {1UL, 1UL, 0xB9L, 254UL, 0x27L, 254UL, 0xB9L, 1UL, 1UL}};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 4; j++)
                    l_1242[i][j] = 0xBA2053F5L;
            }
            for (g_105 = 0; (g_105 >= 0); g_105 -= 1)
            {
                int l_1243 = (-4L);
                int *l_1250 = &g_551[0];
                unsigned long long *l_1262 = &g_479[3][3];
            }
        }
    }
    return p_23;
}







static unsigned short func_24(unsigned long long * p_25, unsigned p_26)
{
    unsigned long long l_926 = 18446744073709551615UL;
    long long **l_932 = &g_400[1];
    int l_938 = (-5L);
    unsigned short l_940 = 6UL;
    unsigned long long **l_941 = &g_921[0];
    int *l_942 = &g_551[0];
    long long ****l_972 = &g_398;
    long long ****l_973 = &g_398;
    unsigned short **l_980 = &g_874;
    short *l_990 = &g_95;
    unsigned long long l_1042 = 0x7E530F86F62E7535LL;
    long long l_1105[7];
    unsigned char **l_1125 = (void*)0;
    unsigned char l_1165 = 255UL;
    int **l_1198 = &g_359;
    int i;
    for (i = 0; i < 7; i++)
        l_1105[i] = 0xCEBC0469ECD6560CLL;
    if (l_926)
    {
        short l_931 = 0xB5E5L;
        long long **l_933 = &g_400[1];
        int *l_934[4][4][8] = {{{&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}}, {{&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}}, {{&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}}, {{&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}, {&g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99, &g_99}}};
        int *l_935 = &g_483[3];
        short ****l_939[2][9];
        unsigned long long *l_944 = &g_479[3][1];
        unsigned l_965 = 3UL;
        int l_974 = (-10L);
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 9; j++)
                l_939[i][j] = &g_694;
        }
lbl_956:
        (*g_359) = p_26;
        (*l_935) = ((*g_359) = (safe_lshift_func_int16_t_s_u(l_926, (safe_lshift_func_int8_t_s_u((l_931 == (((*g_398) = l_932) == l_933)), (((&g_105 == l_934[1][1][2]) > ((0x59L != p_26) ^ p_26)) >= 65534UL))))));
        (*g_359) = ((l_938 = l_926) == (*l_935));
        if ((l_939[1][0] != l_939[1][2]))
        {
            int *l_943 = (void*)0;
            int **l_945 = &g_275[1];
            short *l_950 = &l_931;
            long long l_954 = 0x0FDBCCB4C4C023F2LL;
            (*l_945) = l_934[0][1][4];
            for (g_516 = 29; (g_516 == 6); --g_516)
            {
                short *l_951 = (void*)0;
                int l_953 = 0xEC6BB3CEL;
                if ((safe_add_func_int32_t_s_s(0xE0152B31L, ((*g_112) = (p_26 && ((*g_277) = ((l_950 != l_951) > (*l_935))))))))
                {
                    unsigned long long *l_952 = (void*)0;
                    int l_955[1][7][7] = {{{9L, 9L, 8L, 9L, 9L, 8L, 9L}, {9L, 9L, 8L, 9L, 9L, 8L, 9L}, {9L, 9L, 8L, 9L, 9L, 8L, 9L}, {9L, 9L, 8L, 9L, 9L, 8L, 9L}, {9L, 9L, 8L, 9L, 9L, 8L, 9L}, {9L, 9L, 8L, 9L, 9L, 8L, 9L}, {9L, 9L, 8L, 9L, 9L, 8L, 9L}}};
                    int i, j, k;
                    (*l_945) = &l_938;
                    if (l_926)
                        goto lbl_956;
                    for (g_153 = 0; (g_153 >= 43); g_153 = safe_add_func_int64_t_s_s(g_153, 5))
                    {
                        (*l_945) = (void*)0;
                    }
                }
                else
                {
                    (*l_935) = (-2L);
                    for (l_926 = 26; (l_926 == 30); ++l_926)
                    {
                        (*g_359) = ((*l_935) = p_26);
                        (*l_942) = 0x081CB671L;
                    }
                }
                if ((safe_div_func_int16_t_s_s((*g_277), l_953)))
                {
                    int *l_966 = &g_31;
                    for (g_674 = 0; (g_674 <= 2); g_674 += 1)
                    {
                        return l_953;
                    }
                    (*l_945) = &l_953;
                    if (p_26)
                        continue;
                    for (g_105 = 1; (g_105 < 29); g_105 = safe_add_func_uint64_t_u_u(g_105, 9))
                    {
                        (*g_398) = (*g_398);
                        (*g_359) = 0x4B755FB2L;
                        if (l_965)
                            break;
                        (*l_945) = l_966;
                    }
                }
                else
                {
                    unsigned **l_968 = &g_112;
                    (*l_945) = g_967[0][3];
                    for (p_26 = 0; (p_26 <= 8); p_26 += 1)
                    {
                        int i;
                        g_136[0][3][0] = l_968;
                        return g_483[p_26];
                    }
                    (*l_935) = g_969;
                }
                return p_26;
            }
        }
        else
        {
            short l_979 = 0L;
            unsigned long long *l_981 = &g_30[6][1][2];
            (*l_935) = ((safe_div_func_int64_t_s_s(((l_972 = &g_398) == l_973), l_974)) >= (safe_add_func_uint64_t_u_u(((*l_935) == (safe_rshift_func_uint16_t_u_u((*l_935), p_26))), (*p_25))));
            (*l_942) = (safe_div_func_int16_t_s_s(p_26, p_26));
        }
    }
    else
    {
        unsigned l_993 = 6UL;
        int l_994 = 0x18E68BE0L;
        int *l_998 = (void*)0;
        char l_1008 = 0x0AL;
        short l_1017 = 0xACBAL;
        unsigned l_1043 = 0UL;
        int *l_1045 = &g_551[0];
        char l_1094[8];
        unsigned short **l_1111 = (void*)0;
        unsigned long long *l_1120 = &g_479[1][1];
        short **l_1121 = &l_990;
        unsigned long long *l_1144 = &g_30[2][1][4];
        short l_1160 = 1L;
        unsigned char *l_1172 = &g_153;
        int l_1195 = 0xDD967050L;
        int i;
        for (i = 0; i < 8; i++)
            l_1094[i] = 0x18L;
        l_994 = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((void*)0 == l_990), 6)), ((safe_lshift_func_int16_t_s_s(l_993, 6)) & l_993))), 4));
    }
    (*l_1198) = &l_938;
    return (*l_942);
}







static unsigned long long * func_27(unsigned long long * p_28)
{
    int l_722 = 0x2A560DCBL;
    unsigned short *l_725[8][8] = {{&g_445, &g_445, &g_675, (void*)0, &g_675, (void*)0, &g_675, &g_445}, {&g_445, &g_445, &g_675, (void*)0, &g_675, (void*)0, &g_675, &g_445}, {&g_445, &g_445, &g_675, (void*)0, &g_675, (void*)0, &g_675, &g_445}, {&g_445, &g_445, &g_675, (void*)0, &g_675, (void*)0, &g_675, &g_445}, {&g_445, &g_445, &g_675, (void*)0, &g_675, (void*)0, &g_675, &g_445}, {&g_445, &g_445, &g_675, (void*)0, &g_675, (void*)0, &g_675, &g_445}, {&g_445, &g_445, &g_675, (void*)0, &g_675, (void*)0, &g_675, &g_445}, {&g_445, &g_445, &g_675, (void*)0, &g_675, (void*)0, &g_675, &g_445}};
    short **l_757[1];
    unsigned long long *l_797[9][3][1] = {{{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}}};
    int l_805 = 0x8056D0F0L;
    int l_811 = 0x24150625L;
    unsigned short l_837[7] = {0x61C9L, 0x61C9L, 0x655BL, 0x61C9L, 0x61C9L, 0x655BL, 0x61C9L};
    unsigned long long l_838 = 0x56BE1E351472BA8CLL;
    unsigned char *l_841 = &g_677;
    int *l_843 = &g_483[2];
    unsigned long long *l_862 = &g_516;
    int l_865 = 0xE0F44719L;
    int *l_883 = &l_722;
    unsigned long long *l_923 = &l_838;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_757[i] = &g_277;
    for (g_31 = 22; (g_31 >= (-4)); g_31 = safe_sub_func_uint16_t_u_u(g_31, 1))
    {
        unsigned long long *l_39[9];
        int l_46 = 1L;
        int *l_742 = &g_145[5];
        int l_752[1][7][2] = {{{0xF69F92BDL, 9L}, {0xF69F92BDL, 9L}, {0xF69F92BDL, 9L}, {0xF69F92BDL, 9L}, {0xF69F92BDL, 9L}, {0xF69F92BDL, 9L}, {0xF69F92BDL, 9L}}};
        short *l_779 = &g_95;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_39[i] = (void*)0;
    }
    if ((safe_div_func_uint32_t_u_u(0x88661345L, l_722)))
    {
        unsigned l_790 = 0UL;
        char l_791 = 0x19L;
        int *l_793[4][9] = {{&g_3, (void*)0, &g_483[8], &g_145[5], &g_483[8], (void*)0, &g_3, &g_551[0], &g_551[0]}, {&g_3, (void*)0, &g_483[8], &g_145[5], &g_483[8], (void*)0, &g_3, &g_551[0], &g_551[0]}, {&g_3, (void*)0, &g_483[8], &g_145[5], &g_483[8], (void*)0, &g_3, &g_551[0], &g_551[0]}, {&g_3, (void*)0, &g_483[8], &g_145[5], &g_483[8], (void*)0, &g_3, &g_551[0], &g_551[0]}};
        unsigned long long *l_798[3];
        char l_802 = 0L;
        int *l_866 = &g_483[8];
        unsigned long long *l_876[10][4][6] = {{{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}, {{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}, {{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}, {{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}, {{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}, {{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}, {{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}, {{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}, {{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}, {{(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}, {(void*)0, &g_124, (void*)0, (void*)0, &g_30[5][0][2], (void*)0}}};
        int *l_920 = &g_31;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_798[i] = &g_30[6][1][2];
        (*g_359) = 0x37081810L;
        if (((safe_lshift_func_int8_t_s_s((l_790 < (l_790 & l_791)), g_219[2])) >= l_790))
        {
            int **l_792 = &g_144;
            (*l_792) = &l_722;
            (*l_792) = (void*)0;
        }
        else
        {
            int *l_796[5][1];
            int **l_799[4][6][6] = {{{&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}}, {{&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}}, {{&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}}, {{&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}, {&l_796[2][0], &l_796[0][0], &l_793[1][2], &g_359, &g_144, &g_144}}};
            short l_812 = 0L;
            int l_815 = 1L;
            unsigned long long *l_816 = &g_30[4][1][6];
            unsigned long long ***l_821 = (void*)0;
            unsigned char *l_842 = &g_153;
            int l_896 = 5L;
            short l_919[6] = {(-10L), (-10L), 0xCF70L, (-10L), (-10L), 0xCF70L};
            int i, j, k;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_796[i][j] = &g_145[5];
            }
            l_793[2][0] = (g_144 = &l_722);
            if ((func_42(((*p_28) ^ 1L), ((safe_mod_func_uint64_t_u_u(l_802, (safe_add_func_int16_t_s_s((l_805 = ((*g_277) = (l_722 = l_722))), ((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(g_734, (safe_unary_minus_func_uint32_t_u(l_811)))), ((l_812 = l_811) > ((safe_sub_func_int16_t_s_s((l_811 > (l_811 & 0xC8L)), g_737[0])) && l_815)))) || (*p_28)))))) == (***g_398)), l_816) == g_551[0]))
            {
                unsigned l_831 = 0x0B58C2ADL;
                long long l_834 = 1L;
                l_722 = (~((*g_359) = (safe_lshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s((l_821 == &g_176), l_834)), l_805))));
                l_722 = (*g_359);
            }
            else
            {
                long long l_839 = 0L;
                int *l_844 = &g_31;
                unsigned long long *l_845 = (void*)0;
                unsigned long long *l_846 = &g_124;
                int *l_847 = &g_31;
                for (g_675 = 9; (g_675 >= 31); g_675 = safe_add_func_uint64_t_u_u(g_675, 8))
                {
                    char l_840 = 0xBEL;
                    if ((l_837[0] & l_838))
                    {
                        l_722 = l_805;
                    }
                    else
                    {
                        return p_28;
                    }
                    l_840 = l_839;
                    (*g_359) = (l_841 == l_842);
                    l_843 = l_793[3][7];
                }
                l_843 = l_844;
                for (g_221 = 0; (g_221 >= 0); g_221 -= 1)
                {
                    l_847 = (void*)0;
                    for (g_677 = 1; (g_677 <= 5); g_677 += 1)
                    {
                        return p_28;
                    }
                }
                for (l_805 = 27; (l_805 != (-28)); l_805 = safe_sub_func_uint8_t_u_u(l_805, 5))
                {
                    (*l_843) = (-6L);
                }
            }
            for (l_722 = 13; (l_722 >= (-28)); l_722--)
            {
                unsigned long long l_857[3][9] = {{0xF3334007AF29A2ADLL, 18446744073709551615UL, 0x4913418A1680BB8DLL, 0x15D195D8C617591CLL, 0x4913418A1680BB8DLL, 18446744073709551615UL, 0xF3334007AF29A2ADLL, 0UL, 0xED7F6A21284DC6D1LL}, {0xF3334007AF29A2ADLL, 18446744073709551615UL, 0x4913418A1680BB8DLL, 0x15D195D8C617591CLL, 0x4913418A1680BB8DLL, 18446744073709551615UL, 0xF3334007AF29A2ADLL, 0UL, 0xED7F6A21284DC6D1LL}, {0xF3334007AF29A2ADLL, 18446744073709551615UL, 0x4913418A1680BB8DLL, 0x15D195D8C617591CLL, 0x4913418A1680BB8DLL, 18446744073709551615UL, 0xF3334007AF29A2ADLL, 0UL, 0xED7F6A21284DC6D1LL}};
                unsigned long long **l_863 = (void*)0;
                unsigned long long **l_864[2];
                int *l_867 = (void*)0;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_864[i] = &l_797[2][1][0];
                l_867 = l_793[1][2];
                for (g_591 = 0; (g_591 <= 40); g_591 = safe_add_func_uint64_t_u_u(g_591, 8))
                {
                    unsigned char l_872 = 0x60L;
                    (*g_359) = (safe_add_func_int16_t_s_s(l_872, 0x809EL));
                    for (l_790 = 0; (l_790 <= 0); l_790 += 1)
                    {
                        char *l_875[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                        int i, j;
                        (*g_359) = (g_551[l_790] = g_156[(l_790 + 1)][(l_790 + 4)]);
                        l_866 = l_867;
                        l_793[1][8] = &g_551[0];
                    }
                    if ((l_872 != (*l_843)))
                    {
                        return p_28;
                    }
                    else
                    {
                        int *l_877 = &g_145[2];
                        l_877 = l_793[3][7];
                    }
                    if ((*g_359))
                        continue;
                }
            }
            for (g_445 = 0; (g_445 <= 1); g_445 += 1)
            {
                unsigned long long *l_882 = &l_838;
                int *l_887 = &g_483[7];
                int *l_924 = (void*)0;
                if ((&g_136[0][1][0] != (void*)0))
                {
                    int i;
                    (*g_359) = ((safe_rshift_func_int8_t_s_u((safe_div_func_int8_t_s_s(2L, ((**g_622) = l_837[(g_445 + 2)]))), 2)) < (*g_359));
                    return p_28;
                }
                else
                {
                    char l_884[8][7] = {{0L, 0x16L, 0xA9L, (-1L), 0xEFL, (-5L), 0xEFL}, {0L, 0x16L, 0xA9L, (-1L), 0xEFL, (-5L), 0xEFL}, {0L, 0x16L, 0xA9L, (-1L), 0xEFL, (-5L), 0xEFL}, {0L, 0x16L, 0xA9L, (-1L), 0xEFL, (-5L), 0xEFL}, {0L, 0x16L, 0xA9L, (-1L), 0xEFL, (-5L), 0xEFL}, {0L, 0x16L, 0xA9L, (-1L), 0xEFL, (-5L), 0xEFL}, {0L, 0x16L, 0xA9L, (-1L), 0xEFL, (-5L), 0xEFL}, {0L, 0x16L, 0xA9L, (-1L), 0xEFL, (-5L), 0xEFL}};
                    int *l_886 = &g_3;
                    int i, j;
                    l_866 = l_866;
                    g_144 = l_883;
                    if (l_884[1][0])
                        continue;
                    if (l_884[1][0])
                    {
                        unsigned ***l_885 = &g_136[0][5][0];
                        (*l_885) = &g_112;
                    }
                    else
                    {
                        unsigned long long l_888 = 1UL;
                        (*g_359) = l_884[1][0];
                        l_886 = func_59(l_886, l_887, p_28, l_888, (*l_887));
                        return p_28;
                    }
                }
                for (l_790 = 2; (l_790 <= 6); l_790 += 1)
                {
                    int l_895 = 0x6F05F626L;
                    int l_897 = 5L;
                    unsigned long long *l_902 = &g_516;
                    int *l_922 = &g_145[1];
                    int i;
                    l_897 = (l_896 = ((*l_883) = ((*l_843) = ((&g_623 == &l_841) < ((safe_lshift_func_int8_t_s_u((g_219[2] = (safe_lshift_func_uint16_t_u_u((l_837[l_790] = ((**g_399) >= (***g_398))), l_895))), 2)) <= 0xDDEE4F04L)))));
                    if ((safe_rshift_func_uint16_t_u_u((*l_883), (l_793[1][2] == l_793[1][2]))))
                    {
                        unsigned l_903 = 0x72AE7E61L;
                        (*l_883) = (l_903 >= 0L);
                        if (l_837[l_790])
                            continue;
                    }
                    else
                    {
                        unsigned long long **l_908 = &l_797[0][1][0];
                        int l_911 = (-4L);
                        int *l_912 = &g_99;
                        l_911 = (safe_div_func_uint64_t_u_u(((*g_262) = ((safe_div_func_uint8_t_u_u((*l_883), (safe_div_func_uint8_t_u_u((*l_883), g_422)))) ^ 0x8753L)), 7UL));
                        l_919[1] = ((((0x09E4L == ((safe_add_func_int32_t_s_s(l_911, ((l_837[l_790] == ((l_911 & (*l_887)) != (safe_rshift_func_uint16_t_u_u((l_911 == ((((!((void*)0 != &g_359)) == (((***g_398) = (((*l_883) = ((((*l_887) && (*l_843)) | 0xF9BC37EE2FB1B2DBLL) == 5UL)) >= (*g_623))) < l_911)) && l_897) <= 0xF5F18B5FL)), l_897)))) | 0xDC92L))) & (*g_623))) < 0xEE837F8DF1430453LL) <= g_918) <= g_222);
                    }
                    g_275[0] = (void*)0;
                    for (g_422 = 0; (g_422 >= 0); g_422 -= 1)
                    {
                        int i, j;
                    }
                }
            }
        }
    }
    else
    {
        return &g_124;
    }
    return p_28;
}







static char func_42(int p_43, long long p_44, unsigned long long * p_45)
{
    unsigned long long *l_52 = &g_30[6][1][2];
    int l_678 = 9L;
    int l_698[8][2][2] = {{{1L, 0x9E1BCCE9L}, {1L, 0x9E1BCCE9L}}, {{1L, 0x9E1BCCE9L}, {1L, 0x9E1BCCE9L}}, {{1L, 0x9E1BCCE9L}, {1L, 0x9E1BCCE9L}}, {{1L, 0x9E1BCCE9L}, {1L, 0x9E1BCCE9L}}, {{1L, 0x9E1BCCE9L}, {1L, 0x9E1BCCE9L}}, {{1L, 0x9E1BCCE9L}, {1L, 0x9E1BCCE9L}}, {{1L, 0x9E1BCCE9L}, {1L, 0x9E1BCCE9L}}, {{1L, 0x9E1BCCE9L}, {1L, 0x9E1BCCE9L}}};
    int l_699[6] = {0x059440F6L, 0x87E6C294L, 0x059440F6L, 0x87E6C294L, 0x059440F6L, 0x87E6C294L};
    int i, j, k;
    (*g_359) = (safe_add_func_int8_t_s_s(func_49(l_52, l_52), p_44));
    if (l_678)
    {
        int *l_679[6][9][4] = {{{&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}}, {{&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}}, {{&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}}, {{&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}}, {{&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}}, {{&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}, {&l_678, (void*)0, (void*)0, &g_551[0]}}};
        int l_686 = (-1L);
        unsigned short *l_695[9] = {&g_445, &g_445, &g_445, &g_445, &g_445, &g_445, &g_445, &g_445, &g_445};
        int i, j, k;
        l_679[4][7][2] = &l_678;
        l_699[0] = ((safe_mod_func_int32_t_s_s(0x621BA2A0L, ((safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((**g_622) = l_686), ((safe_sub_func_uint8_t_u_u(((p_43 || (safe_mod_func_uint16_t_u_u((l_698[3][1][1] = ((safe_add_func_int8_t_s_s(p_44, ((g_675 = ((void*)0 == g_693)) == (l_678 = 1UL)))) == (p_43 | (safe_lshift_func_int8_t_s_u(p_44, p_43))))), g_551[0]))) & 1UL), g_30[0][0][4])) & 1L))), 0L)) | 18446744073709551607UL))) == 2UL);
    }
    else
    {
        short *l_708 = &g_344;
        unsigned short *l_712 = &g_675;
        int l_721 = 5L;
        l_721 = (((safe_div_func_uint8_t_u_u((*g_623), (safe_sub_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((safe_div_func_int16_t_s_s(((*l_708) = (2L > ((*g_277) = p_43))), ((*l_712) = (safe_unary_minus_func_uint64_t_u(((safe_lshift_func_uint16_t_u_s(p_44, p_44)) < (**g_622))))))), (safe_rshift_func_uint8_t_u_u((l_699[3] = p_44), 2)))) > (safe_rshift_func_uint16_t_u_s((p_43 && (safe_mod_func_uint32_t_u_u(((*g_112) = l_721), 4294967292UL))), 12))), 65535UL)))) <= l_698[3][1][1]) <= 0xC89A606678049938LL);
    }
    return l_699[2];
}







static char func_49(unsigned long long * p_50, unsigned long long * p_51)
{
    int *l_65 = &g_31;
    unsigned long long *l_66 = &g_30[6][1][2];
    int l_67[8][5] = {{0xCB6AEF2DL, 0xA391DE2FL, 0xE7DFBF73L, (-9L), 0xE7DFBF73L}, {0xCB6AEF2DL, 0xA391DE2FL, 0xE7DFBF73L, (-9L), 0xE7DFBF73L}, {0xCB6AEF2DL, 0xA391DE2FL, 0xE7DFBF73L, (-9L), 0xE7DFBF73L}, {0xCB6AEF2DL, 0xA391DE2FL, 0xE7DFBF73L, (-9L), 0xE7DFBF73L}, {0xCB6AEF2DL, 0xA391DE2FL, 0xE7DFBF73L, (-9L), 0xE7DFBF73L}, {0xCB6AEF2DL, 0xA391DE2FL, 0xE7DFBF73L, (-9L), 0xE7DFBF73L}, {0xCB6AEF2DL, 0xA391DE2FL, 0xE7DFBF73L, (-9L), 0xE7DFBF73L}, {0xCB6AEF2DL, 0xA391DE2FL, 0xE7DFBF73L, (-9L), 0xE7DFBF73L}};
    int **l_360 = &g_275[1];
    short l_405[3];
    int *l_413[6];
    unsigned l_430 = 0xBD62A388L;
    unsigned char *l_442 = &g_153;
    unsigned char *l_443 = &g_153;
    int l_447 = 0x7BE1634EL;
    short l_471 = 0x0C94L;
    unsigned long long *l_526 = &g_30[0][0][0];
    unsigned long long ***l_587[3][3][1] = {{{&g_176}, {&g_176}, {&g_176}}, {{&g_176}, {&g_176}, {&g_176}}, {{&g_176}, {&g_176}, {&g_176}}};
    long long l_595 = 0xD0014828A005212FLL;
    int *l_597 = (void*)0;
    short l_665 = 2L;
    char *l_666 = &g_644;
    unsigned ***l_671 = &g_136[0][5][0];
    unsigned char *l_672 = (void*)0;
    unsigned char *l_673 = &g_674;
    unsigned char *l_676[3][5] = {{(void*)0, (void*)0, &g_677, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_677, (void*)0, (void*)0}, {(void*)0, (void*)0, &g_677, (void*)0, (void*)0}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_405[i] = 0L;
    for (i = 0; i < 6; i++)
        l_413[i] = &l_67[3][0];
    (*l_360) = func_53(g_31, g_31, func_59(&g_31, (l_65 = l_65), l_66, l_67[3][0], l_67[3][0]), &l_67[3][3], l_66);
    if (((*g_359) = (*l_65)))
    {
        long long l_361 = (-1L);
        unsigned *l_368 = (void*)0;
        unsigned l_370 = 0UL;
        int *l_377 = (void*)0;
        unsigned long long *l_379 = (void*)0;
        long long *l_395[10][10] = {{(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}, {(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}, {(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}, {(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}, {(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}, {(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}, {(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}, {(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}, {(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}, {(void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4], (void*)0, (void*)0, (void*)0, &g_156[0][4], &g_156[0][5], &g_156[0][4]}};
        long long **l_394 = &l_395[0][7];
        long long ***l_393 = &l_394;
        unsigned ***l_404 = &g_136[0][1][0];
        unsigned short *l_464[6] = {&g_445, (void*)0, &g_445, (void*)0, &g_445, (void*)0};
        int l_480 = 6L;
        int l_489[7] = {(-5L), 0xC6DBD5CCL, (-5L), 0xC6DBD5CCL, (-5L), 0xC6DBD5CCL, (-5L)};
        long long l_491 = 0xCF3960AAA81D8225LL;
        int *l_527 = (void*)0;
        unsigned l_535 = 0UL;
        short ***l_554 = &g_276[1][0];
        unsigned short l_629 = 0xC309L;
        int i, j;
    }
    else
    {
        unsigned char l_647 = 0x2DL;
        int *l_648 = &g_145[4];
        long long *l_661 = &l_595;
        int l_662 = (-1L);
        (*g_359) = l_647;
        (*l_360) = l_648;
        l_662 = (safe_add_func_uint16_t_u_u((~((g_156[3][0] > (safe_add_func_uint64_t_u_u(0xD47FD82C257FBE02LL, (safe_div_func_int64_t_s_s((safe_div_func_uint8_t_u_u(((((*l_648) = (**g_399)) & (+((-1L) && ((*g_623) = ((safe_rshift_func_int16_t_s_s((*g_277), 11)) < ((*l_661) = ((*g_623) <= (((-1L) || (-1L)) >= (*g_623))))))))) == g_99), g_3)), (*g_262)))))) != l_647)), (*l_65)));
    }
    (*g_359) = ((*l_65) && (safe_lshift_func_uint8_t_u_u((((*l_65) || ((**g_622) = (((*l_666) = (l_665 && g_422)) > ((*l_65) | ((*g_262) && (*p_50)))))) <= (safe_lshift_func_uint16_t_u_s(((g_677 = (g_675 = ((*l_673) = (safe_sub_func_uint32_t_u_u((*g_112), (&g_136[0][2][0] == l_671)))))) != 8L), 8))), 4)));
    (*g_359) = (*l_65);
    return (*l_65);
}







static int * func_53(char p_54, int p_55, int * p_56, int * p_57, unsigned long long * p_58)
{
    long long l_352[6][5][7] = {{{0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}}, {{0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}}, {{0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}}, {{0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}}, {{0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}}, {{0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}, {0x6DE2C5261853A4BDLL, 0x991AB5BA0F185E36LL, 1L, 1L, (-2L), 0xE109F48C37F4F738LL, (-10L)}}};
    int *l_357[8][6][5] = {{{&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}}, {{&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}}, {{&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}}, {{&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}}, {{&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}}, {{&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}}, {{&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}}, {{&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}, {&g_145[5], (void*)0, (void*)0, &g_31, &g_145[5]}}};
    int i, j, k;
    for (g_221 = 25; (g_221 == 16); --g_221)
    {
        int **l_351 = &g_275[1];
        unsigned long long l_355 = 0xA3B7F026A4BC359ELL;
        unsigned char l_356 = 255UL;
        (*l_351) = &p_55;
        (*p_57) = ((l_352[3][2][4] != (((*g_112) = (safe_sub_func_uint64_t_u_u(((*g_262) = 0xE659F9DB165CC771LL), g_145[1]))) ^ (l_355 != (l_352[3][2][4] != l_352[5][4][6])))) < l_356);
        if (l_355)
            continue;
    }
    for (g_113 = 0; (g_113 <= 1); g_113 += 1)
    {
        long long l_358 = 0x450C6046515910C9LL;
        int i;
        l_357[1][0][3] = g_275[g_113];
        l_358 = (*p_57);
    }
    return g_359;
}







static int * func_59(int * p_60, int * p_61, unsigned long long * p_62, int p_63, unsigned p_64)
{
    unsigned l_75 = 1UL;
    unsigned short l_101 = 1UL;
    unsigned char *l_152[8] = {&g_153, &g_153, &g_153, &g_153, &g_153, &g_153, &g_153, &g_153};
    int l_161 = 0xB716F66FL;
    unsigned l_228 = 0x7D4F8AA3L;
    int *l_249 = &g_145[0];
    int **l_347[7];
    int *l_348 = &g_31;
    int i;
    for (i = 0; i < 7; i++)
        l_347[i] = &g_144;
    if ((*p_60))
    {
        unsigned char l_77 = 0xBBL;
        int *l_147 = &g_31;
        int l_182 = 5L;
        for (p_63 = 13; (p_63 != 14); p_63++)
        {
            char l_98 = 2L;
            unsigned long long l_111 = 0x2DCCEB0059F0AD72LL;
            int *l_127 = &g_31;
            for (p_64 = (-29); (p_64 == 28); p_64 = safe_add_func_int64_t_s_s(p_64, 4))
            {
                int *l_74 = &g_31;
                int **l_73 = &l_74;
                int *l_76 = (void*)0;
                int l_119[7];
                unsigned **l_135[6][1] = {{&g_112}, {&g_112}, {&g_112}, {&g_112}, {&g_112}, {&g_112}};
                unsigned **l_138 = (void*)0;
                long long *l_154 = (void*)0;
                long long *l_155 = &g_156[0][5];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_119[i] = (-1L);
                l_73 = g_72;
                l_77 = l_75;
                if ((p_63 == (safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_77, 1)), g_30[4][1][1]))))
                {
                    unsigned l_82 = 18446744073709551607UL;
                    unsigned char *l_85 = (void*)0;
                    unsigned char *l_86[10][3] = {{&l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77}, {&l_77, &l_77, &l_77}};
                    int l_87[8] = {0x74779CF8L, 0x74779CF8L, 0x0FADE0F7L, 0x74779CF8L, 0x74779CF8L, 0x0FADE0F7L, 0x74779CF8L, 0x74779CF8L};
                    unsigned *l_115 = &g_113;
                    unsigned l_126 = 0UL;
                    int i, j;
                    if (l_82)
                        break;
                    if (((safe_rshift_func_int8_t_s_s(p_63, ((249UL && (l_87[2] = p_63)) || (safe_add_func_uint16_t_u_u(p_64, l_75))))) && (safe_div_func_uint64_t_u_u(g_30[3][0][0], g_3))))
                    {
                        short *l_94 = &g_95;
                        g_99 = (safe_sub_func_uint8_t_u_u((((*l_94) = g_31) && (safe_add_func_uint32_t_u_u((l_98 | l_98), 0x798E375BL))), l_77));
                    }
                    else
                    {
                        unsigned l_100 = 4294967295UL;
                        l_101 = ((*p_61) != l_100);
                    }
                    for (l_77 = 0; (l_77 <= 12); l_77++)
                    {
                        unsigned *l_104 = &l_75;
                        int l_106 = 8L;
                        unsigned **l_114[6] = {&g_112, &l_104, &g_112, &l_104, &g_112, &l_104};
                        char l_122[4] = {(-1L), (-6L), (-1L), (-6L)};
                        unsigned long long *l_123 = &g_124;
                        int *l_125 = &l_119[0];
                        int **l_128[4] = {&l_127, &l_127, &l_127, &l_127};
                        int i;
                        l_106 = ((g_105 = ((*l_104) = p_64)) < (l_106 | p_64));
                        (*l_125) = (safe_add_func_uint64_t_u_u((0UL || 5UL), (((safe_lshift_func_int16_t_s_s((l_111 || (g_112 != (l_115 = &g_113))), 5)) ^ p_64) > ((g_116 <= (((safe_mod_func_int64_t_s_s((((*p_62) = l_119[0]) | (safe_mod_func_uint64_t_u_u(((*l_123) = (l_122[2] & p_63)), g_105))), g_3)) < 0x992DL) > g_113)) != l_82))));
                        if (l_126)
                            continue;
                        p_61 = l_127;
                    }
                }
                else
                {
                    unsigned l_134 = 18446744073709551615UL;
                    for (g_99 = 1; (g_99 >= 0); g_99 -= 1)
                    {
                        int **l_129[3][5] = {{&l_74, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_74, (void*)0, (void*)0, (void*)0, (void*)0}, {&l_74, (void*)0, (void*)0, (void*)0, (void*)0}};
                        int i, j;
                        p_60 = (l_127 = &p_63);
                    }
                    if (g_113)
                        continue;
                    for (g_116 = 0; (g_116 <= 6); g_116 += 1)
                    {
                        unsigned ***l_137 = &l_135[5][0];
                        unsigned ***l_139 = &l_138;
                        char *l_140 = &l_98;
                        short *l_143 = &g_95;
                        int **l_146 = &l_74;
                        int i;
                        if ((*p_61))
                            break;
                        l_119[g_116] = (safe_mod_func_int32_t_s_s((*p_60), (safe_div_func_int8_t_s_s(((*l_140) = (l_134 | (((*l_137) = (g_136[0][5][0] = l_135[1][0])) == ((*l_139) = l_138)))), (safe_lshift_func_int16_t_s_u(((*l_143) = g_30[6][1][2]), 0))))));
                        (*l_146) = (g_144 = &p_63);
                        (*l_146) = l_147;
                    }
                    g_144 = l_127;
                }
            }
            if (l_101)
                break;
        }
        for (g_113 = 2; (g_113 <= 7); g_113 += 1)
        {
            int **l_171[4] = {&g_144, &l_147, &g_144, &l_147};
            long long *l_181[5][2] = {{&g_156[0][5], &g_156[0][2]}, {&g_156[0][5], &g_156[0][2]}, {&g_156[0][5], &g_156[0][2]}, {&g_156[0][5], &g_156[0][2]}, {&g_156[0][5], &g_156[0][2]}};
            long long **l_180 = &l_181[3][1];
            int i, j;
            g_144 = l_147;
            for (g_95 = 0; (g_95 <= 0); g_95 += 1)
            {
                int *l_172 = &g_145[2];
                p_61 = &g_145[4];
                g_144 = (p_61 = &g_3);
                l_172 = &p_63;
                for (g_124 = 0; (g_124 <= 7); g_124 += 1)
                {
                    int i, j, k;
                    g_144 = (p_60 = &p_63);
                    for (g_99 = 0; (g_99 <= 0); g_99 += 1)
                    {
                        long long *l_175 = (void*)0;
                        long long **l_174 = &l_175;
                        long long ***l_173 = &l_174;
                        unsigned long long ***l_177 = &g_176;
                        int i, j, k;
                        (*l_173) = (void*)0;
                        l_172 = l_172;
                        (*l_177) = g_176;
                        (*l_172) = g_30[g_95][(g_99 + 1)][(g_99 + 6)];
                    }
                    if (g_30[g_124][g_95][(g_95 + 4)])
                        continue;
                    for (g_105 = 0; (g_105 >= 0); g_105 -= 1)
                    {
                        (*p_60) = (-1L);
                        l_172 = &p_63;
                        l_172 = &p_63;
                    }
                }
            }
            l_182 = (safe_add_func_uint64_t_u_u(((*l_147) >= (p_63 & ((void*)0 != l_180))), l_161));
            for (g_153 = 0; (g_153 <= 1); g_153 += 1)
            {
                return &g_145[5];
            }
        }
        for (g_105 = 17; (g_105 == (-10)); g_105 = safe_sub_func_uint8_t_u_u(g_105, 6))
        {
            if (l_161)
                break;
        }
    }
    else
    {
        int *l_185[6][3];
        int **l_247 = (void*)0;
        int **l_248[9];
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 3; j++)
                l_185[i][j] = &g_145[4];
        }
        for (i = 0; i < 9; i++)
            l_248[i] = &l_185[3][1];
        for (g_153 = 1; (g_153 <= 5); g_153 += 1)
        {
            int **l_186 = &l_185[0][1];
            int *l_201 = &g_145[4];
            long long l_202 = (-9L);
            int i;
            for (g_113 = 0; g_113 < 8; g_113 += 1)
            {
                l_152[g_113] = (void*)0;
            }
            if (g_145[g_153])
                continue;
            (*l_186) = l_185[0][0];
            for (g_95 = 3; (g_95 >= 0); g_95 -= 1)
            {
                unsigned ***l_187 = &g_136[0][5][0];
                int *l_204 = &g_145[2];
                int i, j;
            }
        }
        if ((*p_61))
        {
            return &g_145[5];
        }
        else
        {
            int *l_229 = &g_31;
            unsigned long long l_240 = 0x3A9D2924244690C4LL;
lbl_231:
            for (g_222 = 15; (g_222 > (-4)); g_222--)
            {
                for (p_64 = 0; (p_64 <= 3); p_64 += 1)
                {
                    int **l_230[4] = {&g_144, &l_185[0][0], &g_144, &l_185[0][0]};
                    int i;
                    (*g_144) = l_228;
                    p_61 = l_229;
                    for (g_116 = 0; (g_116 <= 3); g_116 += 1)
                    {
                        (*g_144) = (p_64 | l_228);
                        if (g_124)
                            goto lbl_231;
                    }
                }
            }
            (*g_144) = (*g_144);
            if ((*p_61))
            {
                int *l_243[8][8][4] = {{{&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}}, {{&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}}, {{&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}}, {{&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}}, {{&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}}, {{&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}}, {{&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}}, {{&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}, {&g_3, (void*)0, &l_161, &g_3}}};
                int i, j, k;
                if ((safe_mod_func_uint64_t_u_u((((((*g_112) = (safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u((g_30[6][1][2] > p_63), (((-1L) || (safe_lshift_func_int16_t_s_u((0x9BDAL > p_63), g_30[6][1][2]))) ^ (0L || ((l_240 < (*g_144)) && g_3))))) && (*p_62)), 0))) ^ 0xB0E1256EL) | p_64) != l_101), l_228)))
                {
                    for (g_99 = (-14); (g_99 < 5); g_99 = safe_add_func_uint64_t_u_u(g_99, 4))
                    {
                        int **l_244 = &l_243[2][4][3];
                        l_243[7][1][1] = l_185[0][0];
                        (*l_244) = &p_63;
                        (*l_244) = &g_145[5];
                    }
                }
                else
                {
                    int *l_245 = &g_145[5];
                    return l_245;
                }
            }
            else
            {
                int *l_246 = &g_31;
                return l_246;
            }
        }
        (*g_144) = (*p_61);
        l_249 = &p_63;
    }
    for (g_116 = 0; (g_116 != 4); g_116++)
    {
        int l_269 = 4L;
        int l_272[1];
        int l_273 = 1L;
        long long *l_281 = &g_156[3][0];
        long long **l_322 = &l_281;
        long long ***l_321 = &l_322;
        int i;
        for (i = 0; i < 1; i++)
            l_272[i] = 0x28337C76L;
        for (p_63 = 0; (p_63 != 10); ++p_63)
        {
            int *l_254 = (void*)0;
            int *l_255 = &l_161;
            unsigned long long *l_261[8] = {&g_30[6][1][2], (void*)0, &g_30[6][1][2], (void*)0, &g_30[6][1][2], (void*)0, &g_30[6][1][2], (void*)0};
            unsigned long long **l_260[5] = {&l_261[7], &l_261[7], &l_261[7], &l_261[7], &l_261[7]};
            unsigned **l_265[4];
            int *l_266 = &g_145[2];
            short **l_280 = &g_277;
            unsigned short l_293[2];
            int *l_296 = &g_31;
            int i;
            for (i = 0; i < 4; i++)
                l_265[i] = &g_112;
            for (i = 0; i < 2; i++)
                l_293[i] = 1UL;
            (*l_255) = (*l_249);
            (*l_266) = (safe_mod_func_uint64_t_u_u((((g_30[6][1][2] == p_63) >= ((*l_255) = (~(*p_61)))) >= (!g_30[4][0][3])), (safe_sub_func_uint8_t_u_u((((p_62 = (void*)0) == (g_262 = &g_30[4][0][5])) && (*g_112)), (g_153 = (safe_mod_func_uint64_t_u_u((l_265[1] != &g_112), g_99)))))));
            (*l_255) = ((safe_mod_func_int32_t_s_s((*p_61), p_63)) < l_269);
        }
    }
    for (p_64 = 9; (p_64 == 22); p_64++)
    {
        int *l_327[3];
        int **l_328[1];
        char l_345 = 0x6EL;
        int i;
        for (i = 0; i < 3; i++)
            l_327[i] = (void*)0;
        for (i = 0; i < 1; i++)
            l_328[i] = &g_275[1];
        g_275[0] = l_327[2];
        (*l_249) = (safe_unary_minus_func_uint64_t_u(0x3EF3CD140C127A3CLL));
        for (g_124 = 27; (g_124 <= 3); --g_124)
        {
            unsigned long long l_346 = 18446744073709551615UL;
            for (g_105 = (-20); (g_105 != (-19)); ++g_105)
            {
                unsigned long long l_340[7][10] = {{0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL, 0UL, 0UL, 0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL}, {0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL, 0UL, 0UL, 0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL}, {0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL, 0UL, 0UL, 0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL}, {0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL, 0UL, 0UL, 0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL}, {0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL, 0UL, 0UL, 0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL}, {0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL, 0UL, 0UL, 0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL}, {0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL, 0UL, 0UL, 0UL, 0x03077D0F53552D05LL, 18446744073709551615UL, 0x03077D0F53552D05LL}};
                short *l_343 = &g_344;
                int i, j;
                if (((!0x22L) | ((safe_sub_func_int64_t_s_s(((safe_add_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(0UL, (l_340[2][5] && (*g_277)))), p_64)) < (*g_144)), g_95)) < (((safe_rshift_func_int8_t_s_s((((*l_343) = (-1L)) & l_345), l_346)) & (*l_249)) ^ (*p_61)))))
                {
                    p_61 = &p_63;
                    p_60 = (void*)0;
                    p_61 = &p_63;
                }
                else
                {
                    return &g_145[5];
                }
            }
        }
    }
    g_144 = &l_161;
    return l_348;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_30[i][j][k], "g_30[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_31, "g_31", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_124, "g_124", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_145[i], "g_145[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_153, "g_153", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_156[i][j], "g_156[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_219[i], "g_219[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_479[i][j], "g_479[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_483[i], "g_483[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_516, "g_516", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_551[i], "g_551[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_675, "g_675", print_hash_value);
    transparent_crc(g_677, "g_677", print_hash_value);
    transparent_crc(g_734, "g_734", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_737[i], "g_737[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_913, "g_913", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_969, "g_969", print_hash_value);
    transparent_crc(g_1131, "g_1131", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_1256[i][j], "g_1256[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1322, "g_1322", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1475[i], "g_1475[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
