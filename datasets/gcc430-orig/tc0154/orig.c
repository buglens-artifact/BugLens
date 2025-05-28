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



static volatile int g_2 = 0L;
static volatile int g_3 = 0L;
static int g_4 = 0x89480189L;
static int g_13 = 0x0B101AAEL;
static int g_59 = (-3L);
static int *g_58 = &g_59;
static unsigned char g_111 = 0x12L;
static int **g_128[10][3][8] = {{{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}, {{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}, {{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}, {{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}, {{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}, {{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}, {{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}, {{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}, {{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}, {{&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}, {&g_58, &g_58, &g_58, &g_58, &g_58, (void*)0, &g_58, &g_58}}};
static int ***g_127 = &g_128[7][2][4];
static int **g_183 = &g_58;
static const int g_325 = 0xF114BED5L;
static const int *g_414 = &g_59;
static const unsigned g_462 = 0UL;
static volatile unsigned char g_512 = 1UL;
static int *g_636 = &g_4;
static const int *g_638 = &g_4;
static volatile unsigned g_701 = 1UL;
static int *g_755 = &g_59;
static volatile int *g_774 = &g_3;
static int *g_775 = &g_13;
static char g_823 = 0x21L;
static const volatile int *g_853 = &g_3;
static int *g_869[1] = {&g_13};
static unsigned short g_870 = 0UL;
static int *g_886 = (void*)0;
static unsigned char g_911 = 0UL;



static int func_1(void);
static int func_7(char p_8, int p_9);
static int * func_14(int * p_15, int * p_16, unsigned p_17);
static int * func_18(unsigned p_19, int * p_20, unsigned p_21, int * p_22, int p_23);
static int * func_24(unsigned short p_25, int * p_26, unsigned short p_27, int * p_28, int * p_29);
static int * func_30(int * p_31, char p_32, int p_33, const int * p_34);
static int * func_35(const int * const p_36);
static const int * func_37(unsigned short p_38, int * p_39, int * p_40, const unsigned char p_41);
static int * func_42(unsigned p_43, unsigned char p_44, unsigned p_45, int p_46);
static int func_49(short p_50, int * p_51, int * p_52);
static int func_1(void)
{
    int l_10 = 0x9AC196A1L;
    int l_814 = 0xC84BD6CCL;
    int **l_832 = (void*)0;
    const int *l_852[6];
    char l_890 = 1L;
    int ***l_907 = (void*)0;
    int i;
    for (i = 0; i < 6; i++)
        l_852[i] = &g_59;
    for (g_4 = 4; (g_4 < (-10)); g_4--)
    {
        unsigned char l_808 = 253UL;
        int *l_809 = &g_59;
        char l_843 = 4L;
        char l_893 = 0x31L;
        unsigned short l_899 = 65530UL;
        int *l_908[3][1][5] = {{{&g_13, &g_13, &g_13, &g_13, &g_13}}, {{&g_13, &g_13, &g_13, &g_13, &g_13}}, {{&g_13, &g_13, &g_13, &g_13, &g_13}}};
        int i, j, k;
    }
    (*g_775) = (*g_638);
    (*g_636) = (&l_10 == (void*)0);
    (*g_183) = (*g_183);
    return g_325;
}







static int func_7(char p_8, int p_9)
{
    unsigned l_11 = 3UL;
    int *l_12[4][10] = {{&g_4, (void*)0, (void*)0, &g_13, &g_4, &g_4, &g_13, &g_4, &g_4, &g_4}, {&g_4, (void*)0, (void*)0, &g_13, &g_4, &g_4, &g_13, &g_4, &g_4, &g_4}, {&g_4, (void*)0, (void*)0, &g_13, &g_4, &g_4, &g_13, &g_4, &g_4, &g_4}, {&g_4, (void*)0, (void*)0, &g_13, &g_4, &g_4, &g_13, &g_4, &g_4, &g_4}};
    int *l_53 = &g_13;
    int i, j;
    p_9 = ((l_11 | 0x95768819L) | p_8);
    l_12[2][1] = func_14(func_18((g_13 ^ p_9), func_24(g_2, func_30(func_35(func_37(g_4, func_42((safe_mod_func_uint32_t_u_u(((1L > (func_49((p_8 || (((p_9 | p_8) <= g_4) & g_13)), &g_13, l_53) < 0x3D268E0CL)) && 0L), 0x27C55D31L)), p_8, p_8, p_8), l_12[2][4], p_9)), (*l_53), (*l_53), l_12[1][4]), p_8, l_12[1][1], l_12[0][7]), p_8, l_12[3][8], p_9), l_53, g_13);



    ;
    return (*g_638);
}







static int * func_14(int * p_15, int * p_16, unsigned p_17)
{
    unsigned l_796 = 0xDC83E77CL;
    int l_797 = 0L;
    int *l_798 = (void*)0;
    for (p_17 = (-19); (p_17 <= 19); p_17 = safe_add_func_int16_t_s_s(p_17, 2))
    {
        l_797 = (safe_sub_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((*g_775), 0xB30F2816L)), ((safe_rshift_func_uint16_t_u_s(g_111, l_796)) == p_17)));
        (*g_183) = func_35(p_16);

        ;
    }


    (*g_183) = &l_797;

    ;
    return l_798;



}







static int * func_18(unsigned p_19, int * p_20, unsigned p_21, int * p_22, int p_23)
{
    int *l_649 = &g_4;
    int ** const *l_650 = &g_128[5][2][5];
    short l_669 = 0L;
    int *l_684 = &g_13;
    (*g_183) = l_649;

    ;
    (*g_183) = func_24((*l_649), p_22, (*l_649), p_22, (*g_183));

    ;
    return p_20;


}







static int * func_24(unsigned short p_25, int * p_26, unsigned short p_27, int * p_28, int * p_29)
{
    int * const l_467 = &g_13;
    int * const *l_469 = &l_467;
    int * const **l_468 = &l_469;
    int *l_470 = &g_59;
    unsigned short l_515 = 65526UL;
    unsigned l_547 = 0x0104F00DL;
    const int *l_559 = &g_59;
    unsigned l_564 = 18446744073709551615UL;
    int l_584[1][6][3] = {{{0x361A3AF0L, 0x2021CDB3L, 0x3548984BL}, {0x361A3AF0L, 0x2021CDB3L, 0x3548984BL}, {0x361A3AF0L, 0x2021CDB3L, 0x3548984BL}, {0x361A3AF0L, 0x2021CDB3L, 0x3548984BL}, {0x361A3AF0L, 0x2021CDB3L, 0x3548984BL}, {0x361A3AF0L, 0x2021CDB3L, 0x3548984BL}}};
    int l_604 = (-1L);
    char l_614 = 0xBAL;
    int i, j, k;
    (*l_470) = (((p_25 || (safe_lshift_func_int16_t_s_u((l_467 != (void*)0), p_27))) ^ (*l_467)) == ((void*)0 == l_468));
    (*l_470) = ((safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_s(g_462, 1)), ((safe_rshift_func_int16_t_s_u(g_111, 2)) | (safe_rshift_func_uint8_t_u_s((safe_sub_func_int32_t_s_s((***l_468), (**l_469))), 0))))) == g_4);
    for (g_111 = 13; (g_111 <= 22); g_111 = safe_add_func_uint16_t_u_u(g_111, 5))
    {
        int **l_483 = &g_58;
        int l_491 = 0x8B393728L;
        unsigned l_610 = 2UL;
        (*l_468) = l_483;

        ;
    }

    ;
    if ((*l_470))
    {
        const int *l_641 = &l_584[0][1][1];
        (*g_183) = p_28;

        ;
        for (l_515 = 29; (l_515 == 52); ++l_515)
        {
            int *l_637 = (void*)0;
            for (p_27 = 18; (p_27 <= 3); p_27 = safe_sub_func_uint16_t_u_u(p_27, 2))
            {
                int l_632 = 0x0B2C11E3L;
                int l_633 = 9L;
                const int **l_640[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_640[i] = &g_414;
                if (l_632)
                {
                    int *l_639 = &g_4;
                    (*g_183) = (*g_183);
                    l_633 = (p_27 > 1UL);
                    (*g_183) = l_639;

                    ;
                    (*g_183) = l_639;
                }
                else
                {
                    p_29 = (void*)0;

                    ;
                }
                l_641 = func_37(l_632, p_28, p_26, g_325);

                ;
            }
        }

        ;
    }
    else
    {
        int *l_648 = &g_59;
        for (g_111 = 0; (g_111 > 6); g_111 = safe_add_func_uint8_t_u_u(g_111, 9))
        {
            const unsigned l_647 = 3UL;
            for (p_25 = (-5); (p_25 == 6); p_25 = safe_add_func_uint16_t_u_u(p_25, 5))
            {
                unsigned short l_646[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_646[i] = 0x03A2L;
                (*l_470) = l_646[1];
            }
            if (l_647)
                continue;
        }
        (*g_183) = p_28;

        ;
        l_648 = (*g_183);

        ;
    }

    ;
    return p_28;


}







static int * func_30(int * p_31, char p_32, int p_33, const int * p_34)
{
    int *l_308 = &g_59;
    int l_362 = 0x46365F0AL;
    int l_372 = (-2L);
    unsigned short l_391 = 1UL;
    char l_435 = 0xE6L;
    unsigned short l_452 = 1UL;
    if ((*p_31))
    {
        const int *l_329 = (void*)0;
        const int **l_335 = &l_329;
        const int ***l_334 = &l_335;
        int *l_361[2];
        int i;
        for (i = 0; i < 2; i++)
            l_361[i] = (void*)0;
        if (((void*)0 != l_308))
        {
            short l_311 = 0x41E1L;
            int *l_312[3];
            int i;
            for (i = 0; i < 3; i++)
                l_312[i] = &g_4;
            (*g_183) = l_308;

            ;
            (*p_31) = (safe_rshift_func_uint16_t_u_u((p_33 & p_32), g_59));
            for (l_311 = 2; (l_311 >= 0); l_311 -= 1)
            {
                short l_320 = (-1L);
                int * const *l_321 = &g_58;
                for (g_111 = 0; (g_111 <= 2); g_111 += 1)
                {
                    int i;
                    l_312[l_311] = p_31;
                    for (p_33 = 2; (p_33 >= 0); p_33 -= 1)
                    {
                        int i, j, k;
                        (*g_183) = (*g_183);
                        (*p_31) = (*g_58);
                        if ((*g_58))
                            break;
                    }
                }
                for (g_59 = 2; (g_59 >= 0); g_59 -= 1)
                {
                    int ***l_314[9][6] = {{&g_128[4][1][0], &g_183, &g_128[7][2][4], &g_183, &g_128[4][1][0], &g_128[7][2][4]}, {&g_128[4][1][0], &g_183, &g_128[7][2][4], &g_183, &g_128[4][1][0], &g_128[7][2][4]}, {&g_128[4][1][0], &g_183, &g_128[7][2][4], &g_183, &g_128[4][1][0], &g_128[7][2][4]}, {&g_128[4][1][0], &g_183, &g_128[7][2][4], &g_183, &g_128[4][1][0], &g_128[7][2][4]}, {&g_128[4][1][0], &g_183, &g_128[7][2][4], &g_183, &g_128[4][1][0], &g_128[7][2][4]}, {&g_128[4][1][0], &g_183, &g_128[7][2][4], &g_183, &g_128[4][1][0], &g_128[7][2][4]}, {&g_128[4][1][0], &g_183, &g_128[7][2][4], &g_183, &g_128[4][1][0], &g_128[7][2][4]}, {&g_128[4][1][0], &g_183, &g_128[7][2][4], &g_183, &g_128[4][1][0], &g_128[7][2][4]}, {&g_128[4][1][0], &g_183, &g_128[7][2][4], &g_183, &g_128[4][1][0], &g_128[7][2][4]}};
                    const int *l_324 = &g_325;
                    int i, j;
                    (*g_183) = p_31;
                    for (p_32 = 2; (p_32 >= 0); p_32 -= 1)
                    {
                        int l_313 = 0xD3E90253L;
                        const int *l_323 = &g_59;
                        const int **l_322[8] = {&l_323, &l_323, &l_323, &l_323, &l_323, &l_323, &l_323, &l_323};
                        int i, j, k;
                        if (l_313)
                            break;
                    }
                }
            }


        }
        else
        {
lbl_331:
            for (p_32 = 0; (p_32 <= (-13)); p_32 = safe_sub_func_uint8_t_u_u(p_32, 5))
            {
                int ***l_328 = &g_128[7][2][4];
                const int **l_330 = &l_329;
                (*p_31) = ((l_328 != &g_128[3][2][0]) & p_33);
                l_329 = p_34;
                if (g_111)
                    goto lbl_331;
                (*l_330) = p_34;
            }
            for (p_32 = (-18); (p_32 < (-2)); ++p_32)
            {
                unsigned l_344 = 0xCD0A6EE8L;
                const int * const l_354 = &g_59;
                if ((((((void*)0 != &l_329) < ((((p_32 | p_33) < (l_334 == (void*)0)) < (*l_308)) | 1UL)) >= 0xF0L) != (*p_31)))
                {
                    (*l_308) = ((-2L) != (safe_add_func_uint16_t_u_u(g_325, (p_33 > 255UL))));
                    (*p_31) = (0x1AL == 0UL);
                }
                else
                {
                    const int **l_345 = (void*)0;
                    if (((safe_lshift_func_int8_t_s_u(g_59, 5)) ^ (safe_rshift_func_uint8_t_u_s(255UL, (((safe_add_func_uint32_t_u_u(((~l_344) > (&p_31 != l_345)), ((safe_add_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((g_111 < (safe_mod_func_uint16_t_u_u(p_32, (safe_add_func_int8_t_s_s((p_32 < 0x16L), g_59))))), g_13)) ^ (*l_308)), 65534UL)) >= g_59))) == 0x44ABEB6FL) != 2L)))))
                    {
                        (*g_183) = p_31;

                        ;
                        (**l_334) = func_35(l_354);

                        ;
                    }
                    else
                    {
                        int *l_355 = &g_13;
                        (*l_335) = l_355;

                        ;
                        (*g_183) = p_31;

                        ;
                    }

                    ;
                    ;
                    (*p_31) = (*p_31);
                    for (p_33 = (-4); (p_33 > 1); ++p_33)
                    {
                        return (*g_183);



                    }
                    (*g_127) = &l_308;
                }
            }

            ;
        }


        ;
        if ((*p_31))
        {
            int *l_360 = &g_59;
            (*l_335) = p_34;

            ;
        }
        else
        {
            int *l_363 = &g_59;
            l_363 = (void*)0;

            ;
            return p_31;



        }

        ;
        for (g_59 = 0; (g_59 == 24); g_59 = safe_add_func_int32_t_s_s(g_59, 1))
        {
            char l_366 = 0x1DL;
            const int *l_375[7][2] = {{&g_13, &g_13}, {&g_13, &g_13}, {&g_13, &g_13}, {&g_13, &g_13}, {&g_13, &g_13}, {&g_13, &g_13}, {&g_13, &g_13}};
            int l_379 = (-8L);
            int i, j;
            if (((p_32 >= (65535UL && (p_32 & l_366))) >= (((l_308 != p_31) == ((safe_mod_func_uint32_t_u_u((((((((safe_lshift_func_int8_t_s_s((g_111 >= 0UL), ((*p_31) < (*p_31)))) > p_33) ^ (*p_31)) || 0x4BL) | g_13) > g_325) || (*l_308)), p_32)) || p_32)) >= 65535UL)))
            {
                unsigned char l_371 = 253UL;
                (*l_335) = p_34;

                ;
                l_372 = l_371;
                for (l_362 = 0; (l_362 == 26); ++l_362)
                {
                    (**l_334) = l_375[3][1];

                    ;
                }

                ;
            }
            else
            {
                int ***l_378 = (void*)0;
                (*l_335) = &l_372;

                ;
                (*l_335) = l_375[6][0];

                ;
                for (l_372 = 0; (l_372 != (-29)); --l_372)
                {
                    l_308 = p_31;
                    if ((*l_308))
                        break;
                }
                (*l_335) = func_37(((&g_183 != l_378) >= (5L >= g_13)), p_31, p_31, p_32);

                ;
            }
            for (l_366 = 2; (l_366 >= 0); l_366 -= 1)
            {
                unsigned char l_380[7][7][5] = {{{1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}}, {{1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}}, {{1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}}, {{1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}}, {{1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}}, {{1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}}, {{1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}, {1UL, 1UL, 0xF9L, 0x95L, 5UL}}};
                int *l_394 = &l_379;
                int i, j, k;
                l_372 = (g_59 | p_33);
                if ((*p_31))
                    break;
                (*l_335) = p_34;

                ;
                l_379 = ((*l_308) | 0x66L);
                for (g_111 = 0; (g_111 <= 2); g_111 += 1)
                {
                    int l_393 = (-5L);
                    int i, j, k;
                    l_379 = l_380[6][4][1];
                    if ((safe_rshift_func_uint8_t_u_u((((*p_31) < (safe_mod_func_uint8_t_u_u(p_32, g_4))) > (!(((*l_308) && g_4) >= (safe_lshift_func_int16_t_s_s((safe_mod_func_int32_t_s_s((*l_308), (safe_mod_func_int32_t_s_s((*p_31), g_325)))), (*l_308)))))), (*l_308))))
                    {
                        char l_392 = 0x7EL;
                        if (l_391)
                            break;
                        if (l_366)
                            goto lbl_331;
                        l_393 = l_392;
                    }
                    else
                    {
                        return p_31;



                    }
                }
            }
        }

        ;
    }
    else
    {
        int ** const l_399[1] = {&g_58};
        const int *l_428 = &g_59;
        int *l_442 = &g_4;
        int **l_443 = (void*)0;
        int i;
        for (p_32 = 0; (p_32 <= (-7)); --p_32)
        {
            int l_402 = 0L;
            int *l_403 = &g_13;
            const int **l_427[7][3][6] = {{{&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}}, {{&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}}, {{&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}}, {{&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}}, {{&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}}, {{&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}}, {{&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}, {&g_414, &g_414, &g_414, (void*)0, &g_414, &g_414}}};
            int i, j, k;
            if ((safe_add_func_uint8_t_u_u((&g_58 != l_399[0]), (0x75DEL < (safe_lshift_func_uint16_t_u_u(((p_32 < g_325) ^ (-1L)), 6))))))
            {
                for (l_372 = (-9); (l_372 > (-27)); l_372 = safe_sub_func_int16_t_s_s(l_372, 8))
                {
                    return l_403;


                }
            }
            else
            {
                unsigned l_408 = 18446744073709551615UL;
                for (g_111 = 0; (g_111 <= 2); g_111 += 1)
                {
                    const short l_412 = 0xD085L;
                    const int **l_413 = (void*)0;
                    g_414 = func_37(((safe_mod_func_uint8_t_u_u(g_111, g_13)) ^ p_33), p_31, p_31, l_412);
                    p_31 = (void*)0;

                    ;
                    for (l_402 = 2; (l_402 >= 0); l_402 -= 1)
                    {
                        int i, j, k;
                        (*g_183) = func_35(p_34);

                        ;
                        (*g_183) = &l_372;

                        ;
                        (*g_183) = (void*)0;

                        ;
                    }
                }
                (*l_308) = l_408;
            }
            l_428 = p_34;

            ;
        }

        ;
        ;
        ;
        (*l_308) = (safe_rshift_func_uint8_t_u_u((~(safe_mod_func_int32_t_s_s((p_32 & (~(((safe_sub_func_uint8_t_u_u((g_13 != (*l_308)), (l_435 & 0x4D6352B6L))) | (*l_308)) >= g_59))), p_33))), p_32));
        for (g_59 = 2; (g_59 >= 0); g_59 -= 1)
        {
            int l_436[1];
            int i;
            for (i = 0; i < 1; i++)
                l_436[i] = 0L;
            for (p_32 = 0; (p_32 <= 2); p_32 += 1)
            {
                short l_440 = 0L;
                char l_441 = (-1L);
                l_436[0] = l_436[0];
                for (l_372 = 0; (l_372 <= 2); l_372 += 1)
                {
                    int l_439 = 6L;
                    int i, j, k;
                    if (((safe_add_func_int32_t_s_s(p_33, ((65527UL & ((void*)0 == p_34)) && g_59))) >= g_4))
                    {
                        l_439 = 3L;
                        if (l_436[0])
                            continue;
                        if (l_440)
                            break;
                    }
                    else
                    {
                        if (l_441)
                            break;
                    }
                    p_31 = l_442;

                    ;
                }
            }
        }

        ;
        (*l_308) = ((p_33 != (((l_443 != (void*)0) & (((p_33 & (safe_sub_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u((((((safe_mod_func_int32_t_s_s((0xF7EF95CAL == (g_325 >= (safe_sub_func_int32_t_s_s((*l_308), p_33)))), ((g_325 | 4294967295UL) && (*l_308)))) | 4294967291UL) && 0x6FADL) > (*l_308)) == p_32), p_32)) >= g_59), p_32))) && l_452) >= p_33)) == p_33)) || (*l_308));
    }


    ;
    ;
    for (l_435 = 0; (l_435 <= 2); l_435 += 1)
    {
        unsigned short l_454 = 8UL;
        int l_458 = 0xAFEE9071L;
        (*g_127) = &p_31;
        if ((*l_308))
            continue;
        for (g_59 = 0; (g_59 <= 2); g_59 += 1)
        {
            for (p_32 = 2; (p_32 >= 0); p_32 -= 1)
            {
                int l_453 = 9L;
                int l_457 = 0x8860A4EFL;
                int i, j, k;
                (*g_183) = p_31;

                ;
                for (g_111 = 0; (g_111 <= 2); g_111 += 1)
                {
                    unsigned l_455 = 0UL;
                    int **l_456 = &l_308;
                    l_454 = l_453;
                    if (l_455)
                        continue;
                    for (l_452 = 0; (l_452 <= 2); l_452 += 1)
                    {
                        if (l_454)
                            break;
                    }
                    for (l_453 = 0; (l_453 <= 2); l_453 += 1)
                    {
                        l_457 = (&g_58 != l_456);
                    }
                }
                l_458 = l_453;
            }
            if ((*l_308))
                break;
            for (l_458 = 2; (l_458 >= 0); l_458 -= 1)
            {
                int *l_459 = &g_59;
                const int *l_460[4][10] = {{&g_4, &l_372, &g_325, &g_4, &g_13, &g_4, &l_458, &g_59, &g_325, &g_59}, {&g_4, &l_372, &g_325, &g_4, &g_13, &g_4, &l_458, &g_59, &g_325, &g_59}, {&g_4, &l_372, &g_325, &g_4, &g_13, &g_4, &l_458, &g_59, &g_325, &g_59}, {&g_4, &l_372, &g_325, &g_4, &g_13, &g_4, &l_458, &g_59, &g_325, &g_59}};
                int i, j, k;
                for (p_33 = 2; (p_33 >= 0); p_33 -= 1)
                {
                    const int **l_461 = &l_460[2][2];
                    int i, j, k;
                    l_459 = l_459;
                    (*l_461) = l_460[2][2];
                    if (g_462)
                        continue;
                }
                (*g_183) = &l_458;

                ;
            }
        }


    }


    return p_31;



}







static int * func_35(const int * const p_36)
{
    unsigned char l_251 = 249UL;
    unsigned l_266 = 0xBF1FC371L;
    int *l_273 = &g_59;
    const unsigned l_294 = 4294967289UL;
    const int *l_296[3][6][4] = {{{(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}}, {{(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}}, {{(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}, {(void*)0, &g_59, &g_13, &g_59}}};
    const int **l_295 = &l_296[2][3][1];
    const int l_307 = 1L;
    int i, j, k;
lbl_279:
    if (l_251)
    {
        const int *l_255 = &g_59;
        int *l_258 = (void*)0;
        int *l_259 = &g_59;
        const int **l_260 = &l_255;
        for (l_251 = (-27); (l_251 >= 12); l_251++)
        {
            const int **l_254 = (void*)0;
            l_255 = p_36;
        }


        (*l_259) = (l_251 != (safe_lshift_func_uint16_t_u_u(((252UL < ((-10L) || (((void*)0 == &p_36) & 1UL))) != 0x02L), 3)));
        (*l_260) = p_36;
        return l_259;


    }
    else
    {
        unsigned l_261 = 2UL;
        unsigned l_264 = 0xF07992E3L;
        int l_265 = 0x1CA6C46EL;
        const int *l_268 = &g_59;
        const int **l_267 = &l_268;
        (*l_267) = p_36;


    }
    for (l_266 = 0; (l_266 == 24); ++l_266)
    {
        int *l_274[2][7] = {{(void*)0, (void*)0, (void*)0, &g_59, &g_59, &g_59, (void*)0}, {(void*)0, (void*)0, (void*)0, &g_59, &g_59, &g_59, (void*)0}};
        const int *l_276 = (void*)0;
        const int **l_275 = &l_276;
        const int **l_280 = (void*)0;
        const int **l_281[5][1][8] = {{{&l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276}}, {{&l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276}}, {{&l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276}}, {{&l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276}}, {{&l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276, &l_276}}};
        const int **l_282 = &l_276;
        int i, j, k;
        (*l_275) = func_37((safe_add_func_int16_t_s_s(g_59, l_266)), l_273, l_274[1][0], (0x82L & 251UL));

        ;
        if ((*l_273))
            break;
        for (l_251 = (-22); (l_251 != 41); ++l_251)
        {
            if (l_266)
                goto lbl_279;
        }
        (*l_282) = p_36;


    }
    (*l_295) = func_37((((safe_rshift_func_int16_t_s_s(g_4, (*l_273))) && (safe_sub_func_uint8_t_u_u(((*l_273) <= ((((((safe_sub_func_uint8_t_u_u((!g_13), g_111)) && 6L) | (((safe_unary_minus_func_int16_t_s((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((*l_273), (*l_273))) != (g_59 | g_111)), 6)))) ^ (*l_273)) && g_111)) != (*l_273)) <= 1UL) == g_59)), 0UL))) & (*l_273)), l_273, l_273, l_294);
    (*l_273) = (safe_lshift_func_uint16_t_u_u(65535UL, (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u((*l_273), ((safe_lshift_func_int16_t_s_s((&l_295 == &g_128[2][2][7]), (safe_sub_func_int16_t_s_s(0xB542L, ((((void*)0 == (*l_295)) != (0x44E97368L >= (*l_273))) && g_13))))) || l_307))), (*l_273)))));
    return l_273;


}







static const int * func_37(unsigned short p_38, int * p_39, int * p_40, const unsigned char p_41)
{
    int ***l_244 = (void*)0;
    int *l_247 = (void*)0;
    int l_248 = 0x5B4982E0L;
    l_248 = (~(safe_mod_func_uint16_t_u_u(p_38, ((&g_128[7][0][0] == l_244) | ((safe_mod_func_int8_t_s_s(g_59, p_41)) > p_38)))));
    if (l_248)
    {
        short l_249 = 0xB3D4L;
        l_249 = ((void*)0 != p_40);
    }
    else
    {
        int *l_250 = (void*)0;
        p_39 = l_250;

        ;
    }
    return p_40;


}







static int * func_42(unsigned p_43, unsigned char p_44, unsigned p_45, int p_46)
{
    int l_233 = 2L;
    for (g_59 = 0; (g_59 > 24); ++g_59)
    {
        short l_238[7][5] = {{1L, 1L, 6L, (-1L), (-1L)}, {1L, 1L, 6L, (-1L), (-1L)}, {1L, 1L, 6L, (-1L), (-1L)}, {1L, 1L, 6L, (-1L), (-1L)}, {1L, 1L, 6L, (-1L), (-1L)}, {1L, 1L, 6L, (-1L), (-1L)}, {1L, 1L, 6L, (-1L), (-1L)}};
        int *l_240 = &g_13;
        int *l_241 = &g_59;
        int i, j;
        for (p_46 = 0; (p_46 < (-14)); --p_46)
        {
            (*g_183) = (void*)0;

            ;
            (*g_183) = &p_46;

            ;
            (*g_183) = (*g_183);
        }

        ;
        if ((((l_233 || ((~(((0x52FD6F03L < (0UL != ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_59, 4)), 5)) == l_238[2][3]))) < p_43) < g_111)) < p_43)) || (2UL > 4294967289UL)) >= l_233))
        {
            int *l_239[10][4][4] = {{{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}, {{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}, {{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}, {{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}, {{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}, {{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}, {{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}, {{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}, {{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}, {{&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}, {&g_59, &g_59, &g_4, &g_59}}};
            int i, j, k;
            return l_240;



        }
        else
        {
            (*g_183) = (*g_183);
        }
        return l_241;



    }
    return (*g_183);


}







static int func_49(short p_50, int * p_51, int * p_52)
{
    int *l_56 = &g_13;
    unsigned char l_67[8][1] = {{247UL}, {247UL}, {247UL}, {247UL}, {247UL}, {247UL}, {247UL}, {247UL}};
    int **l_69 = &l_56;
    char l_119 = (-1L);
    int l_132 = (-1L);
    int *l_163 = &g_59;
    unsigned short l_173 = 0xAEB3L;
    char l_184 = 0x71L;
    unsigned l_213 = 2UL;
    int *l_220 = &l_132;
    int i, j;
lbl_107:
    for (p_50 = 0; (p_50 >= (-2)); p_50 = safe_sub_func_uint8_t_u_u(p_50, 5))
    {
        int **l_57[5] = {&l_56, &l_56, &l_56, &l_56, &l_56};
        int *l_60 = (void*)0;
        int i;
        g_58 = l_56;

        ;
        l_56 = l_56;
        p_52 = &g_4;

        ;
        g_58 = l_60;

        ;
    }
lbl_228:
    if (((g_59 ^ g_4) < (p_50 >= (p_50 == (g_4 > (safe_mod_func_uint32_t_u_u(g_13, (safe_lshift_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_u((-9L), 11)) == p_50) && g_4) == p_50), (*l_56))))))))))
    {
        int l_72 = 1L;
        int **l_83[9][2][1] = {{{&l_56}, {&l_56}}, {{&l_56}, {&l_56}}, {{&l_56}, {&l_56}}, {{&l_56}, {&l_56}}, {{&l_56}, {&l_56}}, {{&l_56}, {&l_56}}, {{&l_56}, {&l_56}}, {{&l_56}, {&l_56}}, {{&l_56}, {&l_56}}};
        unsigned char l_88[6] = {1UL, 1UL, 251UL, 1UL, 1UL, 251UL};
        int **l_170 = &l_163;
        int i, j, k;
        for (p_50 = 0; (p_50 >= 0); p_50 -= 1)
        {
            int *l_91 = &l_72;
            int l_131 = 0xA468D3B5L;
            const int * const l_145 = &l_131;
            if ((*p_52))
            {
                int **l_68 = &g_58;
                unsigned l_96[9] = {0UL, 0UL, 0x21466050L, 0UL, 0UL, 0x21466050L, 0UL, 0UL, 0x21466050L};
                int i;
                (*l_68) = p_51;

                ;
                for (g_59 = 0; (g_59 >= 0); g_59 -= 1)
                {
                    int i, j;
                    if ((((void*)0 != l_69) == l_67[(g_59 + 6)][g_59]))
                    {
                        return (*p_51);


                    }
                    else
                    {
                        int *l_73 = &l_72;
                        (*l_73) = ((safe_sub_func_int32_t_s_s(l_67[(g_59 + 6)][g_59], 0xCC6B0C40L)) > (((*l_56) | (**l_68)) || l_72));
                    }
                }
                if ((((safe_unary_minus_func_uint32_t_u(0xF72239D1L)) ^ (((p_50 || (((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((((void*)0 != l_83[0][0][0]) != (((safe_sub_func_uint16_t_u_u(g_59, ((0L < (safe_sub_func_int32_t_s_s((p_50 && (*l_56)), g_59))) >= p_50))) ^ p_50) || 65535UL)), 5)) != 0x3911DF38L), 3)) & (-1L)) != l_88[1])) && 9L) < p_50)) & p_50))
                {
                    for (l_72 = 0; (l_72 <= (-8)); l_72 = safe_sub_func_uint8_t_u_u(l_72, 4))
                    {
                        g_59 = (*g_58);
                        (*l_68) = l_91;

                        ;
                        (*l_68) = (*l_68);
                        (*l_68) = &g_59;

                        ;
                    }

                    ;
                }
                else
                {
                    for (g_59 = 0; (g_59 >= 0); g_59 -= 1)
                    {
                        p_52 = &g_59;

                        ;
                        (*l_91) = 0x76B58F18L;
                        g_58 = p_52;

                        ;
                        (*l_91) = (&g_59 != &g_4);
                    }

                    ;
                    if ((safe_lshift_func_uint16_t_u_s(g_59, 0)))
                    {
                        int l_99[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_99[i] = 5L;
                        l_99[0] = (safe_mod_func_int16_t_s_s(l_96[5], (0x9547L & (g_4 != 0xEDL))));
                        if ((**l_68))
                            continue;
                        (*l_68) = &g_13;

                        ;
                    }
                    else
                    {
                        int ***l_100 = &l_83[6][1][0];
                        if ((*p_51))
                            break;
                        (*l_100) = &p_52;
                        (*l_91) = (*g_58);
                    }
                }

                ;
            }
            else
            {
                int l_110[2];
                int **l_129 = &g_58;
                int i;
                for (i = 0; i < 2; i++)
                    l_110[i] = 7L;
                for (l_72 = 5; (l_72 >= 0); l_72 -= 1)
                {
                    (*l_69) = (void*)0;

                    ;
                    (*l_69) = &g_13;

                    ;
                    for (g_59 = 0; (g_59 >= 0); g_59 -= 1)
                    {
                        (*l_69) = p_52;
                    }

                    ;
                }
                for (l_72 = 0; (l_72 < 6); ++l_72)
                {
                    (*l_69) = &g_13;

                    ;
                    l_91 = p_51;

                    ;
                    for (g_59 = 0; (g_59 <= (-6)); g_59 = safe_sub_func_int32_t_s_s(g_59, 7))
                    {
                        return g_13;


                    }
                }

                ;
                if ((*p_52))
                {
                    for (g_59 = 0; (g_59 == (-4)); g_59 = safe_sub_func_uint16_t_u_u(g_59, 2))
                    {
                        if (g_13)
                            goto lbl_107;
                        g_111 = (safe_sub_func_uint8_t_u_u(l_110[1], (*l_56)));
                    }
                    if ((*l_91))
                        continue;
                    l_110[1] = ((*p_52) < (safe_add_func_int16_t_s_s((!(((((safe_mod_func_int16_t_s_s((((*p_51) <= (p_50 ^ (((!(**l_69)) >= (&l_56 != &l_91)) & ((safe_unary_minus_func_uint8_t_u(g_59)) && (safe_sub_func_uint8_t_u_u(((void*)0 == l_91), p_50)))))) == (*l_91)), l_110[1])) || l_110[1]) ^ 0x2074A6A3L) || (*l_91)) < 0x271EL)), l_110[1])));
                }
                else
                {
                    (*l_69) = p_52;
                    g_59 = (0xED343B42L | (g_4 & ((g_4 != l_119) ^ (safe_unary_minus_func_uint16_t_u((safe_mod_func_uint32_t_u_u((p_50 || 0xAC69L), (*p_51))))))));
                }
                for (l_119 = 0; (l_119 <= 0); l_119 += 1)
                {
                    short l_130 = 1L;
                    int l_133 = 0xB132FC06L;
                    l_131 = (7L != (((safe_mod_func_uint32_t_u_u(p_50, (((void*)0 != g_127) ^ (*l_91)))) < (l_129 == (*g_127))) < l_130));
                    if ((*p_52))
                    {
                        if (p_50)
                            goto lbl_107;
                        if ((*l_56))
                            break;
                    }
                    else
                    {
                        l_132 = (0x2EF1L | g_59);
                    }
                    for (l_72 = 0; (l_72 >= 0); l_72 -= 1)
                    {
                        int i, j, k;
                        (*l_69) = (*l_69);
                        l_133 = l_130;
                    }
                }
            }

            ;
            for (l_119 = 0; (l_119 <= 0); l_119 += 1)
            {
                int l_144 = 0x8B4BADC3L;
            }
        }


        (*g_127) = &l_56;
        (*l_163) = ((g_59 | (**l_69)) <= (safe_add_func_int32_t_s_s((*p_51), (p_50 & ((void*)0 == &l_83[0][0][0])))));
        (**l_170) = ((&l_83[0][0][0] == &g_128[9][0][6]) <= ((0xA1967897L && ((p_50 | ((void*)0 != l_170)) <= (safe_sub_func_int8_t_s_s(((*l_56) || (0x6084L > 0x9FB7L)), 0x91L)))) ^ l_173));
    }
    else
    {
        int **l_182[4] = {&g_58, (void*)0, &g_58, (void*)0};
        int i;
        if (((safe_rshift_func_int16_t_s_u(0x8512L, 8)) == (((safe_add_func_int8_t_s_s((p_50 ^ p_50), (0xD69B0F20L != (safe_rshift_func_int8_t_s_s((g_4 || (l_182[0] != g_183)), (((p_50 != p_50) <= (*p_51)) <= (*l_163))))))) | p_50) != (*l_56))))
        {
            for (l_119 = 0; (l_119 >= 0); l_119 -= 1)
            {
                return l_184;


            }
        }
        else
        {
            (*l_163) = (*p_52);
            (*g_183) = (*l_69);

            ;
        }
        p_51 = p_51;
        (*g_183) = (*l_69);

        ;
    }
    (*l_69) = (*l_69);
    for (l_173 = 0; (l_173 <= 0); l_173 += 1)
    {
        unsigned l_200 = 2UL;
        int *l_221 = (void*)0;
        (*l_163) = 8L;
        if ((*p_52))
            continue;
        for (l_132 = 0; (l_132 >= 0); l_132 -= 1)
        {
            char l_199 = 1L;
            int *l_222 = &g_13;
            int l_227 = 0x4E0D86B5L;
            for (g_59 = 0; (g_59 <= 0); g_59 += 1)
            {
                int l_217 = 0xE1B70F6BL;
                int i, j;
            }
            for (l_199 = 0; (l_199 <= 0); l_199 += 1)
            {
                int i, j;
                if (((((void*)0 != &g_128[6][0][4]) != ((safe_sub_func_int16_t_s_s(l_67[(l_199 + 3)][l_132], (((+(-1L)) <= (g_13 >= p_50)) & l_67[(l_199 + 3)][l_132]))) & (l_200 && g_111))) || 0x70EA170AL))
                {
                    l_221 = l_220;

                    ;
                    (*l_69) = l_222;

                    ;
                }
                else
                {
                    for (l_213 = 0; (l_213 <= 0); l_213 += 1)
                    {
                        return (*l_163);


                    }
                }
            }
            for (p_50 = 0; (p_50 <= 0); p_50 += 1)
            {
                unsigned l_225 = 0xA2D98C83L;
                if ((*p_51))
                    break;
                for (l_184 = 0; (l_184 <= 2); l_184 += 1)
                {
                    int i, j, k;
                    (*g_183) = l_222;

                    ;
                }
                for (g_59 = 0; (g_59 >= 0); g_59 -= 1)
                {
                    unsigned l_226 = 0xCF6594A5L;
                    l_227 = (safe_add_func_int8_t_s_s(((*p_51) & l_225), (g_59 || l_226)));
                }
                if (g_4)
                    goto lbl_228;
            }
        }

        ;
    }
    return (*p_52);


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_870, "g_870", print_hash_value);
    transparent_crc(g_911, "g_911", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
