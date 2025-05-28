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



static int g_2 = 1L;
static int g_6 = 0xA5202749L;
static unsigned g_8 = 0UL;
static unsigned g_11[7][4] = {{0x3E731E7BL, 0x35DB5A26L, 0UL, 0x2A77B69CL}, {0x3E731E7BL, 0x35DB5A26L, 0UL, 0x2A77B69CL}, {0x3E731E7BL, 0x35DB5A26L, 0UL, 0x2A77B69CL}, {0x3E731E7BL, 0x35DB5A26L, 0UL, 0x2A77B69CL}, {0x3E731E7BL, 0x35DB5A26L, 0UL, 0x2A77B69CL}, {0x3E731E7BL, 0x35DB5A26L, 0UL, 0x2A77B69CL}, {0x3E731E7BL, 0x35DB5A26L, 0UL, 0x2A77B69CL}};
static short g_12 = 3L;
static int *g_49 = &g_2;
static int **g_48 = &g_49;
static int g_54 = (-1L);
static unsigned char g_67 = 0x9AL;
static int g_83 = 0x77B3F785L;
static unsigned char *g_102[2] = {(void*)0, (void*)0};
static unsigned char **g_101[6][3][2] = {{{&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}}, {{&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}}, {{&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}}, {{&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}}, {{&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}}, {{&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}, {&g_102[1], &g_102[0]}}};
static unsigned char ***g_100[8][9] = {{&g_101[3][2][1], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0]}, {&g_101[3][2][1], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0]}, {&g_101[3][2][1], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0]}, {&g_101[3][2][1], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0]}, {&g_101[3][2][1], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0]}, {&g_101[3][2][1], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0]}, {&g_101[3][2][1], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0]}, {&g_101[3][2][1], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[5][1][0], &g_101[1][1][0]}};
static const short g_112 = (-1L);
static const short *g_111 = &g_112;
static const short **g_110 = &g_111;
static unsigned short g_123[1][2][7] = {{{0xC7D6L, 1UL, 0x4089L, 1UL, 0xC7D6L, 0UL, 0xC7D6L}, {0xC7D6L, 1UL, 0x4089L, 1UL, 0xC7D6L, 0UL, 0xC7D6L}}};
static long long g_132 = (-1L);
static int g_133 = (-6L);
static short g_168[5][4] = {{(-9L), 4L, (-5L), 4L}, {(-9L), 4L, (-5L), 4L}, {(-9L), 4L, (-5L), 4L}, {(-9L), 4L, (-5L), 4L}, {(-9L), 4L, (-5L), 4L}};
static unsigned short g_177 = 0x6762L;
static int *g_259 = (void*)0;
static short *g_263 = &g_168[1][0];
static short **g_262 = &g_263;
static unsigned long long g_274 = 1UL;
static char g_277 = 0xC7L;
static unsigned *g_294 = &g_11[1][1];
static unsigned **g_293 = &g_294;
static int g_327 = 0x1EE8F791L;
static const int g_338 = 7L;
static const int *g_337 = &g_338;
static long long *g_361[10] = {&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132};
static long long **g_360 = &g_361[0];
static unsigned g_378 = 0xF7D43EE3L;
static const long long g_428 = 1L;
static unsigned short *g_479[3] = {(void*)0, (void*)0, (void*)0};
static int **g_511 = &g_49;
static int **g_512 = &g_259;
static int *g_514 = (void*)0;
static int **g_513 = &g_514;
static unsigned short g_570 = 0x97D9L;
static unsigned short g_572 = 9UL;
static long long g_590 = 0xC51BC57A362CAB29LL;
static int g_604 = 0xC5C8E9D3L;
static unsigned *g_618 = &g_8;
static const short *** const g_630 = (void*)0;
static const short *** const *g_629 = &g_630;
static char g_636[1] = {8L};
static short g_653 = 0xA859L;
static long long g_669 = 0xBEE2B2B85B75A3D1LL;
static unsigned g_690 = 0x307BBEE2L;
static unsigned char g_739 = 0x74L;
static unsigned char g_747 = 8UL;
static int **g_761 = (void*)0;
static long long g_781 = 0x956D09C457482558LL;
static const char g_832[1][7][2] = {{{0x24L, 0x3BL}, {0x24L, 0x3BL}, {0x24L, 0x3BL}, {0x24L, 0x3BL}, {0x24L, 0x3BL}, {0x24L, 0x3BL}, {0x24L, 0x3BL}}};
static char g_857 = 0x23L;
static const unsigned short g_868 = 65535UL;
static const unsigned short *g_867[3][5][9] = {{{&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}}, {{&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}}, {{&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}, {&g_868, &g_868, (void*)0, &g_868, &g_868, &g_868, &g_868, &g_868, &g_868}}};
static const unsigned short **g_866 = &g_867[2][0][3];
static const int * const *g_901 = &g_337;
static unsigned long long g_924[10][3][8] = {{{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}, {{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}, {{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}, {{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}, {{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}, {{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}, {{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}, {{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}, {{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}, {{18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}, {18446744073709551615UL, 7UL, 18446744073709551615UL, 0x65D5F3BDADF46E45LL, 0x65D5F3BDADF46E45LL, 18446744073709551615UL, 7UL, 18446744073709551615UL}}};
static const int g_948 = 1L;
static unsigned short g_1090 = 1UL;



static int func_1(void);
static const int * const * func_13(unsigned * p_14, int ** p_15);
static unsigned * func_16(unsigned long long p_17);
static int ** func_19(int * p_20);
static int * func_21(int p_22, int ** p_23, int ** p_24);
static int ** func_27(unsigned long long p_28, unsigned p_29);
static unsigned long long func_30(int ** p_31, unsigned short p_32, short p_33);
static int ** func_34(long long p_35, long long p_36, unsigned long long p_37, unsigned p_38, short p_39);
static long long func_40(const int * p_41, unsigned char p_42, unsigned p_43);
static long long func_44(char p_45, char p_46, int ** p_47);
static int func_1(void)
{
    int l_5[4][3][8] = {{{6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}, {6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}, {6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}}, {{6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}, {6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}, {6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}}, {{6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}, {6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}, {6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}}, {{6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}, {6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}, {6L, 1L, 0x48B08158L, 1L, 6L, 0L, 1L, 1L}}};
    int **l_908 = &g_49;
    long long **l_920 = &g_361[0];
    int ***l_921 = &g_512;
    unsigned char l_922 = 0UL;
    int ***l_923 = &g_761;
    char l_944 = 0L;
    char l_945 = (-1L);
    unsigned char l_949[6];
    int *l_961 = &g_83;
    const short **l_964 = &g_111;
    const unsigned short l_978 = 0x4566L;
    short l_990 = 0L;
    int l_997 = 0xE13D942AL;
    short l_1031 = 1L;
    unsigned long long l_1075 = 1UL;
    short l_1085[6][7][2] = {{{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}, {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}}};
    long long l_1101 = 0x6C3C27560ACBD6E1LL;
    unsigned char l_1111 = 0x46L;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_949[i] = 248UL;
    for (g_2 = (-4); (g_2 < 22); g_2 = safe_add_func_uint32_t_u_u(g_2, 1))
    {
        int *l_9[8] = {&l_5[0][0][5], &g_6, &l_5[0][0][5], &g_6, &l_5[0][0][5], &g_6, &l_5[0][0][5], &g_6};
        int i;
        for (g_6 = 2; (g_6 >= 0); g_6 -= 1)
        {
            int *l_7[4];
            int i;
            for (i = 0; i < 4; i++)
                l_7[i] = &l_5[1][0][6];
            if (l_5[1][1][0])
                break;
            g_8 = 5L;
            for (g_8 = 0; (g_8 <= 2); g_8 += 1)
            {
                unsigned *l_10 = &g_11[1][1];
                int ***l_510 = &g_48;
                const int * const *l_900 = &g_337;
                const int * const **l_899[5][4][3] = {{{(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}}, {{(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}}, {{(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}}, {{(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}}, {{(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}, {(void*)0, &l_900, (void*)0}}};
                int i, j, k;
                l_5[(g_6 + 1)][g_8][(g_6 + 2)] = ((&g_6 != (void*)0) && (&g_6 == l_9[3]));
                g_12 = (((*l_10) = l_5[(g_6 + 1)][g_8][(g_6 + 2)]) ^ 0L);
            }
            l_5[0][1][5] = (*g_49);
        }
        for (g_570 = 0; (g_570 >= 5); g_570 = safe_add_func_uint32_t_u_u(g_570, 2))
        {
            int **l_912 = &g_49;
            for (g_6 = 0; (g_6 == (-5)); g_6 = safe_sub_func_int64_t_s_s(g_6, 9))
            {
                int **l_911 = &l_9[3];
                char *l_913 = &g_857;
                int l_914[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_914[i] = (-1L);
                l_914[4] = (((*l_913) = (4294967292UL | ((safe_mod_func_uint64_t_u_u((func_30(l_908, ((safe_mod_func_int64_t_s_s((func_44(((**g_262) >= ((l_908 != l_911) <= (*g_263))), (g_868 > 0x17L), l_912) > g_832[0][6][1]), (**l_911))) != (**g_110)), (**l_911)) == 5L), (**l_911))) && 0x49D1L))) | (**l_911));
                for (g_177 = (-16); (g_177 <= 22); g_177 = safe_add_func_uint64_t_u_u(g_177, 8))
                {
                    (*l_908) = l_9[3];
                }
            }
            if ((**l_908))
                continue;
        }
    }
    for (g_277 = (-9); (g_277 > 5); g_277 = safe_add_func_int16_t_s_s(g_277, 8))
    {
        char l_919 = (-5L);
        (**g_48) = l_919;
        (*g_512) = (*g_511);
    }
    if (((((*l_921) = func_27((((&g_361[0] == l_920) >= (**l_908)) ^ ((**l_908) < 0x54CC7D3D6302515ELL)), ((*g_294) = (**l_908)))) != ((*l_923) = func_34(l_5[1][1][3], l_5[2][1][1], g_747, l_5[2][0][7], l_922))) <= g_924[0][2][3]))
    {
        unsigned long long l_929 = 0x7F62653E6EFF60DCLL;
        unsigned l_931 = 0x8F9299D4L;
        int **l_939 = (void*)0;
        short ***l_943 = (void*)0;
        short l_946[8] = {0x50CEL, 0x50CEL, (-3L), 0x50CEL, 0x50CEL, (-3L), 0x50CEL, 0x50CEL};
        const unsigned l_947[4] = {0x234C8B97L, 0x653123A4L, 0x234C8B97L, 0x653123A4L};
        int *l_950 = (void*)0;
        int *l_951 = &g_327;
        char *l_958 = &l_944;
        int i;
        for (g_604 = 0; (g_604 == 19); ++g_604)
        {
            unsigned short *l_930[3];
            int i;
            for (i = 0; i < 3; i++)
                l_930[i] = &g_177;
            for (g_747 = 0; (g_747 < 55); g_747 = safe_add_func_uint64_t_u_u(g_747, 4))
            {
                (*g_761) = (*g_513);
            }
            (*g_513) = func_16(((*g_263) <= (l_931 = l_929)));
        }
        (*g_511) = func_21(((*l_951) = (safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u(((0xD9AB8CE213A35378LL && ((+(safe_rshift_func_uint8_t_u_u(l_931, 6))) ^ ((0x1E7FD0C1L <= (*g_618)) | (((((((safe_sub_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u((func_30(func_34((l_943 != (void*)0), l_931, g_338, (**g_293), l_944), l_945, (**g_110)) ^ l_931))), 0xDAL)) & l_946[7]) ^ 1L) > 1UL) & l_947[3]) < (*g_111)) && 0x71L)))) | g_948))), l_931)), l_949[4]))), &g_259, (*l_923));
        l_5[1][1][5] = (safe_sub_func_int8_t_s_s(g_8, (g_277 = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((~(g_604 != func_30(&g_514, l_947[3], ((void*)0 == (**l_923))))), 4)), ((*l_958) = g_133))))));
        g_2 = (safe_rshift_func_uint16_t_u_u(0xA8D2L, 9));
    }
    else
    {
        int * const l_967[9][9][3] = {{{&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}}, {{&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}, {&g_6, &g_6, &g_6}}};
        int **l_975 = &g_259;
        unsigned **l_980 = &g_294;
        int l_1074[6] = {0x926B5F05L, 0x926B5F05L, 1L, 0x926B5F05L, 0x926B5F05L, 1L};
        char l_1087 = 0xFEL;
        int i, j, k;
        (*g_513) = ((*l_908) = l_961);
        for (g_590 = 0; (g_590 < 28); ++g_590)
        {
            long long l_969 = 0L;
            unsigned **l_981[4][10] = {{(void*)0, &g_618, &g_618, &g_618, (void*)0, &g_618, &g_618, &g_618, (void*)0, &g_618}, {(void*)0, &g_618, &g_618, &g_618, (void*)0, &g_618, &g_618, &g_618, (void*)0, &g_618}, {(void*)0, &g_618, &g_618, &g_618, (void*)0, &g_618, &g_618, &g_618, (void*)0, &g_618}, {(void*)0, &g_618, &g_618, &g_618, (void*)0, &g_618, &g_618, &g_618, (void*)0, &g_618}};
            int i, j;
        }
        for (l_922 = 0; (l_922 >= 40); l_922++)
        {
            const unsigned ***l_1012[7];
            int l_1014 = (-1L);
            int *l_1037 = &l_997;
            const int *l_1104 = (void*)0;
            int i;
            for (i = 0; i < 7; i++)
                l_1012[i] = (void*)0;
            for (g_690 = 0; (g_690 != 42); g_690++)
            {
                unsigned ***l_1013[9][8][3] = {{{&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}}, {{&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}}, {{&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}}, {{&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}}, {{&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}}, {{&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}}, {{&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}}, {{&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}}, {{&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}, {&g_293, &g_293, &g_293}}};
                const long long l_1017 = (-1L);
                int i, j, k;
                for (g_572 = 0; (g_572 != 1); g_572 = safe_add_func_int16_t_s_s(g_572, 8))
                {
                    char l_1029[9] = {0L, (-7L), 0L, (-7L), 0L, (-7L), 0L, (-7L), 0L};
                    int *l_1030 = (void*)0;
                    int i;
                    for (g_274 = 0; (g_274 > 7); g_274++)
                    {
                        int l_1028 = (-1L);
                    }
                }
                for (g_570 = 0; (g_570 > 14); g_570++)
                {
                    const int * const l_1036[1][3][1] = {{{&l_5[0][0][6]}, {&l_5[0][0][6]}, {&l_5[0][0][6]}}};
                    int i, j, k;
                    for (g_653 = 0; (g_653 < 29); ++g_653)
                    {
                        (*g_514) = (**g_901);
                        g_337 = l_1036[0][1][0];
                        l_1037 = (void*)0;
                    }
                }
            }
            for (g_133 = 2; (g_133 >= 0); g_133 -= 1)
            {
                int l_1046 = 0x069B3347L;
                int l_1055[10][10][2] = {{{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}, {{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}, {{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}, {{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}, {{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}, {{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}, {{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}, {{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}, {{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}, {{8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}, {8L, (-1L)}}};
                short l_1060 = 0L;
                int **l_1097[1][5] = {{(void*)0, &g_259, (void*)0, &g_259, (void*)0}};
                unsigned short l_1102 = 0UL;
                int i, j, k;
            }
        }
    }
    for (g_277 = 14; (g_277 > 19); g_277++)
    {
        short **l_1109 = &g_263;
        int l_1110 = (-1L);
        for (g_747 = 5; (g_747 <= 7); g_747 = safe_add_func_int16_t_s_s(g_747, 8))
        {
            l_1110 = (l_1109 != (void*)0);
        }
        (*l_908) = (*g_513);
        if ((*g_337))
            continue;
        if ((*l_961))
            break;
    }
    return l_1111;
}







static const int * const * func_13(unsigned * p_14, int ** p_15)
{
    int * const l_762[8][2][1] = {{{&g_54}, {&g_54}}, {{&g_54}, {&g_54}}, {{&g_54}, {&g_54}}, {{&g_54}, {&g_54}}, {{&g_54}, {&g_54}}, {{&g_54}, {&g_54}}, {{&g_54}, {&g_54}}, {{&g_54}, {&g_54}}};
    unsigned ***l_764 = &g_293;
    int l_771 = (-7L);
    char l_772 = 0x8DL;
    int **l_773 = &g_514;
    unsigned *l_782 = &g_690;
    short l_785[8] = {4L, 4L, 1L, 4L, 4L, 1L, 4L, 4L};
    unsigned long long l_786 = 0x314BAE04EF73A879LL;
    int l_787 = 0x31489E1FL;
    char *l_788[3];
    long long l_789 = (-1L);
    int l_790 = 0x4F253DA4L;
    char l_791[1][6][9] = {{{0xD7L, 1L, 0x5EL, 1L, 0xD7L, 0x95L, 0xF0L, 1L, 0x6DL}, {0xD7L, 1L, 0x5EL, 1L, 0xD7L, 0x95L, 0xF0L, 1L, 0x6DL}, {0xD7L, 1L, 0x5EL, 1L, 0xD7L, 0x95L, 0xF0L, 1L, 0x6DL}, {0xD7L, 1L, 0x5EL, 1L, 0xD7L, 0x95L, 0xF0L, 1L, 0x6DL}, {0xD7L, 1L, 0x5EL, 1L, 0xD7L, 0x95L, 0xF0L, 1L, 0x6DL}, {0xD7L, 1L, 0x5EL, 1L, 0xD7L, 0x95L, 0xF0L, 1L, 0x6DL}}};
    unsigned long long l_823 = 18446744073709551615UL;
    long long l_876 = 0xCABD99FB93141B40LL;
    int l_898 = 0xC57382EEL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_788[i] = &l_772;
    for (g_570 = 0; (g_570 <= 3); g_570 += 1)
    {
        int *l_763 = &g_83;
        l_763 = l_762[5][0][0];
        for (g_747 = 0; (g_747 <= 3); g_747 += 1)
        {
            unsigned char l_768 = 0x9BL;
            int l_769 = 1L;
            const int * const *l_770 = &g_337;
            for (g_54 = 3; (g_54 >= 0); g_54 -= 1)
            {
                unsigned ****l_765 = (void*)0;
                unsigned ****l_766 = &l_764;
                int l_767 = 0xF82E9CEDL;
                l_767 = (&g_293 != ((*l_766) = l_764));
                for (g_277 = 1; (g_277 >= 0); g_277 -= 1)
                {
                    l_769 = l_768;
                    if ((*g_337))
                        continue;
                }
                for (g_590 = 0; (g_590 <= 3); g_590 += 1)
                {
                    (*g_513) = &l_767;
                    return l_770;
                }
            }
        }
    }
    if (((((l_771 | (((**g_262) = (1L == g_747)) & (safe_lshift_func_uint8_t_u_s(((**g_293) & (g_54 = ((((((g_636[0] = ((safe_add_func_uint16_t_u_u((((((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((*l_782) = g_781))), (safe_sub_func_uint64_t_u_u(0x83CFD48F986F0188LL, (**g_360))))) > (**g_360)) && (*g_337)) != g_604) & l_785[5]), l_786)) != l_787)) & l_789) | (*g_111)) && (*g_111)) | l_790) && 0x2E0D1C2EL))), g_739)))) & 1UL) >= l_791[0][1][4]) ^ (**g_360)))
    {
        long long ***l_792 = &g_360;
        int l_815[7][3][10] = {{{0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}}, {{0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}}, {{0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}}, {{0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}}, {{0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}}, {{0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}}, {{0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}, {0xB383ABF2L, (-1L), 0x2D85DB3DL, 1L, 0x09B36389L, 0x83B943CAL, 0xDECD3F20L, 5L, 0x0C2108F9L, 0xFDE54377L}}};
        int i, j, k;
        (*l_792) = &g_361[0];
        for (g_590 = 0; (g_590 <= 17); ++g_590)
        {
            for (g_570 = 0; (g_570 <= 0); g_570 += 1)
            {
                return &g_337;
            }
        }
        l_815[0][2][2] = (safe_mod_func_uint64_t_u_u(((safe_add_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(l_815[0][2][6], l_815[1][1][6])), 65534UL)) & g_168[4][1]), g_112));
    }
    else
    {
        const unsigned char l_824 = 6UL;
        const int * const *l_825 = &g_337;
        int l_836 = 1L;
        int **l_843[3][9] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}};
        unsigned char l_888 = 252UL;
        char l_897 = 0x1DL;
        int i, j;
        l_823 = (safe_unary_minus_func_uint32_t_u((**g_293)));
        if (l_824)
        {
            return l_825;
        }
        else
        {
            unsigned short l_835 = 0x3F10L;
            unsigned char *l_837 = &g_739;
            (*g_513) = func_16((g_2 & (safe_mod_func_int8_t_s_s((((*l_837) = (safe_rshift_func_uint16_t_u_s(func_30(&g_259, ((safe_sub_func_uint8_t_u_u((**l_825), (5UL <= g_832[0][6][1]))) >= 0xBCL), ((~(l_836 = func_30(&g_514, (**l_825), (safe_add_func_int32_t_s_s((**l_825), l_835))))) != (**l_825))), (**l_825)))) | 0xA9L), l_835))));
        }
        for (l_787 = 1; (l_787 <= 28); l_787 = safe_add_func_uint32_t_u_u(l_787, 9))
        {
            (*l_773) = func_16(g_428);
        }
        for (l_772 = (-12); (l_772 == 28); ++l_772)
        {
            int *l_842[7][5] = {{&l_836, (void*)0, &l_836, (void*)0, &l_836}, {&l_836, (void*)0, &l_836, (void*)0, &l_836}, {&l_836, (void*)0, &l_836, (void*)0, &l_836}, {&l_836, (void*)0, &l_836, (void*)0, &l_836}, {&l_836, (void*)0, &l_836, (void*)0, &l_836}, {&l_836, (void*)0, &l_836, (void*)0, &l_836}, {&l_836, (void*)0, &l_836, (void*)0, &l_836}};
            const int *l_844[9][1][8] = {{{&g_54, (void*)0, &l_836, &l_836, (void*)0, &g_54, &g_6, &l_771}}, {{&g_54, (void*)0, &l_836, &l_836, (void*)0, &g_54, &g_6, &l_771}}, {{&g_54, (void*)0, &l_836, &l_836, (void*)0, &g_54, &g_6, &l_771}}, {{&g_54, (void*)0, &l_836, &l_836, (void*)0, &g_54, &g_6, &l_771}}, {{&g_54, (void*)0, &l_836, &l_836, (void*)0, &g_54, &g_6, &l_771}}, {{&g_54, (void*)0, &l_836, &l_836, (void*)0, &g_54, &g_6, &l_771}}, {{&g_54, (void*)0, &l_836, &l_836, (void*)0, &g_54, &g_6, &l_771}}, {{&g_54, (void*)0, &l_836, &l_836, (void*)0, &g_54, &g_6, &l_771}}, {{&g_54, (void*)0, &l_836, &l_836, (void*)0, &g_54, &g_6, &l_771}}};
            const unsigned short *l_865 = &g_177;
            const unsigned short **l_864 = &l_865;
            short l_887 = (-4L);
            short **l_892[10][6][4] = {{{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}, {{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}, {{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}, {{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}, {{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}, {{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}, {{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}, {{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}, {{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}, {{&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}, {&g_263, &g_263, &g_263, &g_263}}};
            int i, j, k;
            (*g_513) = l_842[4][4];
            for (g_590 = 0; (g_590 >= 0); g_590 -= 1)
            {
                unsigned long long l_852 = 7UL;
                int l_854 = 0xD511E13BL;
                const int *l_882 = &l_854;
                for (l_836 = 0; (l_836 <= 2); l_836 += 1)
                {
                    const int **l_845[7];
                    const int **l_846[5];
                    const int **l_847 = (void*)0;
                    const int **l_848[2][4];
                    const int **l_849 = &l_844[2][0][6];
                    unsigned long long *l_853 = &l_852;
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_845[i] = &l_844[6][0][0];
                    for (i = 0; i < 5; i++)
                        l_846[i] = &l_844[8][0][7];
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_848[i][j] = (void*)0;
                    }
                    g_337 = l_844[4][0][4];
                    if (g_168[(l_836 + 2)][(g_590 + 1)])
                        continue;
                    (*l_849) = (*l_825);
                    if (((safe_add_func_uint64_t_u_u(g_11[1][1], ((*l_853) = (0xCE85L >= l_852)))) > l_854))
                    {
                        unsigned l_855 = 0x4E508281L;
                        const int * const *l_856 = &l_844[4][0][4];
                        l_855 = (-1L);
                        return &g_337;
                    }
                    else
                    {
                        (*l_849) = p_14;
                        if (g_857)
                            break;
                        return l_848[1][2];
                    }
                }
                for (g_177 = 0; (g_177 <= 2); g_177 += 1)
                {
                    const int * const *l_858 = &l_844[4][0][7];
                    const int **l_859 = &l_844[4][0][4];
                    int l_879 = (-1L);
                    unsigned short *l_889 = &g_123[0][1][6];
                    int i;
                    for (g_669 = 0; (g_669 <= 0); g_669 += 1)
                    {
                        return &g_337;
                    }
                    (*l_859) = (*l_825);
                    for (l_786 = 0; (l_786 <= 2); l_786 += 1)
                    {
                        int **l_873 = (void*)0;
                        int ***l_874 = (void*)0;
                        int ***l_875 = &g_761;
                        unsigned long long *l_877 = &l_852;
                        unsigned long long *l_878 = &l_823;
                        unsigned long long l_880 = 0x6F0294F88ACCC5CDLL;
                        int *l_881 = &g_604;
                        int i, j, k;
                        l_879 = (safe_mod_func_int64_t_s_s((safe_add_func_int8_t_s_s(g_636[g_590], ((g_866 = l_864) != &g_479[0]))), (+((*l_878) = ((*l_877) = (~((safe_mod_func_uint16_t_u_u((g_636[g_590] <= ((safe_lshift_func_int16_t_s_u((*g_263), (((*l_875) = l_873) != (void*)0))) == ((((*l_782) = (**g_293)) | 0x9D6448ECL) & l_876))), l_852)) >= (**g_262))))))));
                        l_844[(g_590 + 7)][g_590][(g_590 + 5)] = func_16(l_854);
                        (*g_513) = func_16(l_880);
                        l_882 = l_844[(g_590 + 1)][g_590][(l_786 + 3)];
                    }
                    if ((safe_mod_func_int16_t_s_s(g_636[g_590], (safe_rshift_func_int8_t_s_u(((**g_360) < (l_887 > ((*l_889) = l_888))), 2)))))
                    {
                        l_879 = (safe_sub_func_uint32_t_u_u(4294967289UL, (**g_293)));
                    }
                    else
                    {
                        short ***l_893 = &l_892[4][3][0];
                        int l_896 = 0L;
                        (*l_773) = p_14;
                        (*l_893) = l_892[4][3][0];
                        l_897 = (safe_sub_func_int8_t_s_s(g_604, l_896));
                    }
                }
            }
            if (g_868)
                continue;
        }
    }
    g_54 = l_898;
    return &g_337;
}







static unsigned * func_16(unsigned long long p_17)
{
    unsigned *l_18 = (void*)0;
    return l_18;
}







static int ** func_19(int * p_20)
{
    const int *l_518 = &g_338;
    short **l_534 = (void*)0;
    int l_573 = (-1L);
    int l_581 = 0L;
    short * const ***l_588 = (void*)0;
    unsigned short **l_598 = &g_479[2];
    char l_634 = 1L;
    unsigned **l_677 = &g_294;
    int **l_691 = &g_259;
    long long *l_704 = &g_669;
    short ***l_712 = &l_534;
    short ****l_711 = &l_712;
    unsigned short *l_758 = &g_123[0][1][1];
    unsigned short *l_759 = &g_570;
    int *l_760 = &l_573;
    for (g_378 = 0; (g_378 != 55); g_378++)
    {
        short l_522 = 0xDBD7L;
        int *l_557 = &g_54;
        short l_592 = (-1L);
        unsigned short **l_596 = &g_479[2];
        short ***l_603 = &g_262;
        long long l_608 = 7L;
        int l_651[9][6][3] = {{{(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}}, {{(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}}, {{(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}}, {{(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}}, {{(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}}, {{(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}}, {{(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}}, {{(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}}, {{(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}, {(-5L), 0x8A73DA05L, (-1L)}}};
        int i, j, k;
        for (g_177 = 0; (g_177 <= 0); g_177 += 1)
        {
            const int **l_519 = &g_337;
            short ***l_535 = (void*)0;
            short ***l_536 = &l_534;
            int *l_537 = &g_83;
            int *l_538 = &g_54;
            unsigned short *l_558 = &g_123[0][1][5];
            unsigned long long *l_559 = &g_274;
            int i, j;
            (*l_519) = l_518;
            p_20 = ((*g_513) = func_16(g_274));
            (*l_538) = (safe_sub_func_int64_t_s_s((((l_522 | l_522) <= ((*l_537) = ((~((safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s((*l_518), (safe_sub_func_uint16_t_u_u(((+(safe_rshift_func_uint16_t_u_s(l_522, 15))) != (safe_mod_func_int64_t_s_s(l_522, (safe_unary_minus_func_uint16_t_u(((*l_518) > l_522)))))), ((*g_263) = (g_12 | (((*l_536) = l_534) != (void*)0))))))), 15)) >= 4294967295UL)) & 0x9FL))) ^ 0x705BL), (-9L)));
            (*l_557) = (safe_rshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u((((safe_add_func_uint64_t_u_u(((*l_559) = ((safe_rshift_func_int8_t_s_u(((*l_518) == (**g_293)), 7)) <= (-4L))), (*l_537))) || 0xAB6AAE44L) & 5L), 7)), (**l_519)));
            for (g_274 = 0; (g_274 <= 0); g_274 += 1)
            {
                int **l_562 = (void*)0;
                short *l_567 = &l_522;
                unsigned short *l_568 = (void*)0;
                unsigned short *l_569 = &g_570;
                unsigned short *l_571 = &g_572;
                unsigned l_595 = 1UL;
                const char l_612 = 0L;
                int ***l_617 = &g_512;
                const short *** const l_628 = &g_110;
                const short *** const *l_627 = &l_628;
                int **l_637 = &l_538;
                unsigned char * const * const l_638 = &g_102[1];
                int i, j, k;
            }
        }
    }
    if ((*l_518))
    {
        int *l_655 = &l_573;
        unsigned short *l_658 = &g_123[0][0][3];
        for (l_573 = 0; (l_573 <= 1); l_573 += 1)
        {
            short l_654 = 0x1013L;
            if (l_654)
                break;
            for (g_277 = 1; (g_277 >= 0); g_277 -= 1)
            {
                for (g_572 = 0; (g_572 <= 1); g_572 += 1)
                {
                    for (g_133 = 0; (g_133 <= 3); g_133 += 1)
                    {
                        int i, j;
                        (*g_513) = (void*)0;
                        (*g_513) = l_655;
                        l_581 = (safe_add_func_int32_t_s_s(0xD0504981L, (((*l_598) = l_658) == &g_177)));
                        if (g_168[(l_573 + 3)][(g_277 + 1)])
                            break;
                    }
                }
            }
        }
    }
    else
    {
        short l_662 = (-10L);
        const int *l_664 = &l_573;
        short *** const *l_714 = &l_712;
        int l_718 = (-9L);
        int **l_736 = &g_49;
        unsigned l_737[6] = {1UL, 0x318AB3CCL, 1UL, 0x318AB3CCL, 1UL, 0x318AB3CCL};
        unsigned short l_744 = 0xA232L;
        int i;
        for (l_573 = 2; (l_573 >= 0); l_573 -= 1)
        {
            int **l_663[6] = {&g_49, &g_49, &g_49, &g_49, &g_49, &g_49};
            short l_703 = 0x3C00L;
            char *l_705 = &g_277;
            int ***l_706 = &g_48;
            short *****l_713 = &l_711;
            short *** const **l_715 = &l_714;
            int i;
            for (g_277 = 0; (g_277 <= 2); g_277 += 1)
            {
                unsigned char l_659[6][1][5] = {{{0UL, 0UL, 0x4DL, 0x04L, 0xDDL}}, {{0UL, 0UL, 0x4DL, 0x04L, 0xDDL}}, {{0UL, 0UL, 0x4DL, 0x04L, 0xDDL}}, {{0UL, 0UL, 0x4DL, 0x04L, 0xDDL}}, {{0UL, 0UL, 0x4DL, 0x04L, 0xDDL}}, {{0UL, 0UL, 0x4DL, 0x04L, 0xDDL}}};
                long long l_670 = 0L;
                int l_694[4][7] = {{0L, 1L, 1L, 1L, 0L, 1L, 1L}, {0L, 1L, 1L, 1L, 0L, 1L, 1L}, {0L, 1L, 1L, 1L, 0L, 1L, 1L}, {0L, 1L, 1L, 1L, 0L, 1L, 1L}};
                int i, j, k;
                p_20 = ((*g_513) = (void*)0);
                for (g_590 = 0; (g_590 <= 0); g_590 += 1)
                {
                    int l_665[6][5][1] = {{{2L}, {2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}, {2L}}, {{2L}, {2L}, {2L}, {2L}, {2L}}};
                    unsigned short *l_668 = &g_177;
                    unsigned ** const l_679 = &g_618;
                    int l_693 = 0x15A5AEFCL;
                    char *l_702 = &g_636[0];
                    int i, j, k;
                    if (((l_581 = l_659[2][0][4]) >= ((**g_360) = (safe_lshift_func_int8_t_s_u((((((l_662 > func_30(l_663[5], l_659[4][0][1], (*l_664))) != (*l_664)) && 1L) >= l_670) | l_670), 1)))))
                    {
                        return &g_49;
                    }
                    else
                    {
                        unsigned ***l_678[5][9] = {{&g_293, &g_293, &l_677, &g_293, (void*)0, &g_293, (void*)0, &g_293, &l_677}, {&g_293, &g_293, &l_677, &g_293, (void*)0, &g_293, (void*)0, &g_293, &l_677}, {&g_293, &g_293, &l_677, &g_293, (void*)0, &g_293, (void*)0, &g_293, &l_677}, {&g_293, &g_293, &l_677, &g_293, (void*)0, &g_293, (void*)0, &g_293, &l_677}, {&g_293, &g_293, &l_677, &g_293, (void*)0, &g_293, (void*)0, &g_293, &l_677}};
                        int l_692 = 0x3E6A147AL;
                        int i, j;
                        l_694[1][5] = (safe_sub_func_uint32_t_u_u(((safe_sub_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((*g_618), ((g_293 = l_677) == l_679))), ((l_665[2][0][0] <= ((((safe_mod_func_int64_t_s_s(l_659[2][0][4], (safe_rshift_func_uint16_t_u_s(((!l_665[3][0][0]) | (l_693 = (safe_rshift_func_uint8_t_u_u(l_692, l_692)))), 10)))) | l_665[3][0][0]) == 0xB8L) && 65534UL)) > l_670))) <= (*g_294)), l_692));
                        l_693 = 0xDBBF7CC9L;
                    }
                    l_694[2][2] = (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((((*l_664) <= ((l_665[5][3][0] ^ ((safe_add_func_uint32_t_u_u(((*g_294) = func_30(&g_259, l_693, (g_123[g_590][g_590][l_573] < 0x735EL))), (safe_unary_minus_func_int8_t_s(((*l_702) = ((g_123[g_590][g_590][l_573] || (((0xD6L | 4L) != (*g_111)) < 0UL)) >= 0x9812FAB2903A1F06LL)))))) > l_670)) && (*l_518))) ^ (*l_518)), (*l_518))), (*l_664)));
                }
            }
            (*g_513) = func_16((*l_664));
            l_581 = (l_703 || (((l_704 = (*g_360)) == (*g_360)) || (((*l_705) = g_123[0][1][6]) == func_30(((*l_706) = &g_514), (safe_sub_func_uint32_t_u_u((*g_294), ((safe_lshift_func_uint16_t_u_s((*l_664), (((*l_713) = l_711) == ((*l_715) = l_714)))) == 0UL))), (*l_664)))));
        }
        p_20 = p_20;
        (*l_691) = (*g_513);
        for (g_378 = 17; (g_378 < 41); g_378 = safe_add_func_uint32_t_u_u(g_378, 1))
        {
            const unsigned short l_720 = 4UL;
            unsigned long long l_734[6] = {1UL, 1UL, 0xBD5D487B0A79DF31LL, 1UL, 1UL, 0xBD5D487B0A79DF31LL};
            unsigned short **l_749 = &g_479[2];
            int l_752 = 0xC447D592L;
            const int **l_753 = &l_518;
            int *l_754[1];
            int i;
            for (i = 0; i < 1; i++)
                l_754[i] = &l_573;
        }
    }
    (*l_760) = (safe_sub_func_uint16_t_u_u(((*l_759) = ((*l_758) = (*l_518))), (*l_518)));
    return g_761;
}







static int * func_21(int p_22, int ** p_23, int ** p_24)
{
    int *l_515 = (void*)0;
    for (g_54 = 0; g_54 < 1; g_54 += 1)
    {
        for (p_22 = 0; p_22 < 2; p_22 += 1)
        {
            for (g_83 = 0; g_83 < 7; g_83 += 1)
            {
                g_123[g_54][p_22][g_83] = 0x20BBL;
            }
        }
    }
    (*p_23) = (*g_513);
    l_515 = l_515;
    return (*p_24);
}







static int ** func_27(unsigned long long p_28, unsigned p_29)
{
    long long *l_380 = &g_132;
    int **l_382 = &g_259;
    int l_384 = 0x3A1357D6L;
    int l_419[5] = {(-1L), 0xA69A0212L, (-1L), 0xA69A0212L, (-1L)};
    unsigned long long l_441[7] = {0x040474EEFF7961D5LL, 5UL, 0x040474EEFF7961D5LL, 5UL, 0x040474EEFF7961D5LL, 5UL, 0x040474EEFF7961D5LL};
    unsigned char *l_452 = &g_67;
    short l_496[10][5] = {{1L, (-1L), (-1L), 0x2F11L, (-1L)}, {1L, (-1L), (-1L), 0x2F11L, (-1L)}, {1L, (-1L), (-1L), 0x2F11L, (-1L)}, {1L, (-1L), (-1L), 0x2F11L, (-1L)}, {1L, (-1L), (-1L), 0x2F11L, (-1L)}, {1L, (-1L), (-1L), 0x2F11L, (-1L)}, {1L, (-1L), (-1L), 0x2F11L, (-1L)}, {1L, (-1L), (-1L), 0x2F11L, (-1L)}, {1L, (-1L), (-1L), 0x2F11L, (-1L)}, {1L, (-1L), (-1L), 0x2F11L, (-1L)}};
    int i, j;
    for (g_177 = 0; (g_177 != 35); g_177 = safe_add_func_uint64_t_u_u(g_177, 4))
    {
        unsigned l_383 = 0xAE9A6A0FL;
        unsigned **l_395 = &g_294;
        int **l_407 = &g_259;
        int l_410 = 0L;
        long long ***l_424 = &g_360;
        unsigned char **l_437 = &g_102[0];
        unsigned l_482 = 4294967295UL;
        int *l_487 = &g_2;
        unsigned char l_497 = 0x68L;
        for (g_133 = (-6); (g_133 < 14); g_133 = safe_add_func_uint64_t_u_u(g_133, 6))
        {
            unsigned l_379 = 18446744073709551606UL;
            int **l_381 = &g_49;
            int l_386[6][1][6] = {{{0x04F2B350L, 0L, 2L, 0x4FBE84A8L, 0x4FBE84A8L, 2L}}, {{0x04F2B350L, 0L, 2L, 0x4FBE84A8L, 0x4FBE84A8L, 2L}}, {{0x04F2B350L, 0L, 2L, 0x4FBE84A8L, 0x4FBE84A8L, 2L}}, {{0x04F2B350L, 0L, 2L, 0x4FBE84A8L, 0x4FBE84A8L, 2L}}, {{0x04F2B350L, 0L, 2L, 0x4FBE84A8L, 0x4FBE84A8L, 2L}}, {{0x04F2B350L, 0L, 2L, 0x4FBE84A8L, 0x4FBE84A8L, 2L}}};
            long long ***l_390 = &g_360;
            long long l_408 = 0x1CB164968F0B6BEDLL;
            char *l_409[9];
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_409[i] = &g_277;
            if ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(((((safe_add_func_uint64_t_u_u(l_383, l_383)) == g_112) != p_29) && l_384), g_168[3][3])) & p_28), 0x3BA3L)))
            {
                unsigned short l_387 = 9UL;
                long long ***l_389[3];
                const int *l_392 = &g_2;
                const int **l_393 = &l_392;
                int i;
                for (i = 0; i < 3; i++)
                    l_389[i] = &g_360;
                for (l_379 = 0; (l_379 <= 9); l_379 += 1)
                {
                    int *l_388 = &g_54;
                    int *l_391 = &g_83;
                    (*g_48) = func_16(l_383);
                    for (g_12 = 9; (g_12 >= 0); g_12 -= 1)
                    {
                        int *l_385[9][2][2] = {{{&g_83, &g_6}, {&g_83, &g_6}}, {{&g_83, &g_6}, {&g_83, &g_6}}, {{&g_83, &g_6}, {&g_83, &g_6}}, {{&g_83, &g_6}, {&g_83, &g_6}}, {{&g_83, &g_6}, {&g_83, &g_6}}, {{&g_83, &g_6}, {&g_83, &g_6}}, {{&g_83, &g_6}, {&g_83, &g_6}}, {{&g_83, &g_6}, {&g_83, &g_6}}, {{&g_83, &g_6}, {&g_83, &g_6}}};
                        int i, j, k;
                        l_387 = (l_386[3][0][4] = (*g_337));
                        (*l_382) = l_388;
                        (*g_48) = (*l_381);
                    }
                    (*l_391) = (((*l_388) = l_387) != ((l_390 = l_389[2]) != &g_360));
                }
                (*l_393) = l_392;
            }
            else
            {
                int *l_394 = &l_386[2][0][3];
                (*l_394) = l_383;
            }
            l_410 = ((((*l_380) = (l_395 != (void*)0)) && ((((g_277 = ((safe_unary_minus_func_uint64_t_u(0xC872D799A517C3C2LL)) | (safe_mod_func_int8_t_s_s((1L | (func_30(&g_49, (safe_add_func_uint32_t_u_u((0x44BEL & l_386[3][0][4]), p_28)), p_29) == 0x0426L)), 0x22L)))) < p_29) & p_29) >= g_8)) && 0xDE0CL);
            (*l_407) = (*l_407);
            if (p_28)
                continue;
        }
        (*l_407) = (void*)0;
        if ((p_29 ^ 0x2A531EEAB81F295BLL))
        {
            short l_411[5] = {0L, 0xFCC4L, 0L, 0xFCC4L, 0L};
            unsigned char **l_436 = &g_102[1];
            long long l_443 = 0x2D1C0889641B2DF1LL;
            int **l_457[10] = {&g_49, &g_49, &g_49, &g_49, &g_49, &g_49, &g_49, &g_49, &g_49, &g_49};
            short l_478[10] = {0L, 0L, 0x6CC6L, 0L, 0L, 0x6CC6L, 0L, 0L, 0x6CC6L, 0L};
            int i;
            if (l_411[2])
            {
                int *l_414 = (void*)0;
                int *l_415 = &g_54;
                unsigned l_416 = 18446744073709551612UL;
                const long long *l_427 = &g_428;
                const long long **l_426 = &l_427;
                const long long ***l_425 = &l_426;
                l_416 = ((*l_415) = (safe_lshift_func_int8_t_s_u(g_168[0][3], 6)));
                for (g_12 = 3; (g_12 < 11); g_12 = safe_add_func_uint64_t_u_u(g_12, 9))
                {
                    char *l_429 = &g_277;
                    l_419[3] = ((*l_415) = (*g_337));
                    (*l_407) = l_415;
                    (**l_407) = ((((**l_382) >= ((safe_lshift_func_int8_t_s_u(l_411[3], 7)) < (~((*l_429) = (safe_lshift_func_uint8_t_u_u((l_424 != (l_425 = (void*)0)), 2)))))) & (safe_rshift_func_int8_t_s_s(g_11[1][1], 1))) != 0x9C51L);
                }
                (*l_382) = func_16(p_28);
            }
            else
            {
                unsigned char l_440 = 0xBBL;
                int **l_456 = &g_49;
                for (g_277 = 0; (g_277 >= (-19)); g_277--)
                {
                    short ** const *l_445 = (void*)0;
                    short ** const **l_444 = &l_445;
                    const int l_453 = (-1L);
                    if ((*g_337))
                        break;
                    if ((safe_lshift_func_int16_t_s_u(((+(l_436 != l_437)) | (*g_294)), p_29)))
                    {
                        int *l_442 = &l_419[4];
                        l_440 = (safe_lshift_func_int8_t_s_s(9L, 7));
                        if (l_441[4])
                            break;
                        (*l_442) = 0xBD94C2BEL;
                        return l_382;
                    }
                    else
                    {
                        if (l_443)
                            break;
                    }
                    if (((**g_360) ^ (((((*l_444) = &g_262) != (void*)0) > (*g_294)) | p_29)))
                    {
                        short l_458 = 0x3988L;
                        g_54 = (safe_sub_func_uint64_t_u_u(l_458, p_28));
                        (*l_456) = ((*l_407) = func_16(p_28));
                    }
                    else
                    {
                        g_54 = p_28;
                        return l_457[9];
                    }
                    for (l_440 = 26; (l_440 <= 46); ++l_440)
                    {
                        unsigned char l_461 = 0xC8L;
                        if (l_461)
                            break;
                    }
                }
                for (l_383 = 15; (l_383 != 34); l_383++)
                {
                    if (((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((-5L), p_29)), 10)) ^ (((safe_add_func_uint64_t_u_u(((safe_sub_func_uint8_t_u_u(((g_133 <= (p_29 >= func_30(l_407, p_29, p_28))) || (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((l_478[1] ^ (**g_293)), 3)), p_29)), 0xB3D7C2D8L))), p_28)) ^ g_428), 18446744073709551606UL)) && 1L) == g_132)))
                    {
                        unsigned short *l_480 = (void*)0;
                        unsigned short **l_481 = &l_480;
                        g_83 = ((g_479[2] = &g_123[0][1][5]) != ((*l_481) = l_480));
                        return &g_259;
                    }
                    else
                    {
                        int l_483 = 0L;
                        l_483 = l_482;
                        if (p_28)
                            continue;
                    }
                }
                for (l_384 = 0; (l_384 >= (-14)); l_384 = safe_sub_func_int32_t_s_s(l_384, 8))
                {
                    int *l_486[8][10] = {{&g_2, &g_54, (void*)0, &g_83, &g_83, (void*)0, &g_54, &g_2, &l_419[0], &g_2}, {&g_2, &g_54, (void*)0, &g_83, &g_83, (void*)0, &g_54, &g_2, &l_419[0], &g_2}, {&g_2, &g_54, (void*)0, &g_83, &g_83, (void*)0, &g_54, &g_2, &l_419[0], &g_2}, {&g_2, &g_54, (void*)0, &g_83, &g_83, (void*)0, &g_54, &g_2, &l_419[0], &g_2}, {&g_2, &g_54, (void*)0, &g_83, &g_83, (void*)0, &g_54, &g_2, &l_419[0], &g_2}, {&g_2, &g_54, (void*)0, &g_83, &g_83, (void*)0, &g_54, &g_2, &l_419[0], &g_2}, {&g_2, &g_54, (void*)0, &g_83, &g_83, (void*)0, &g_54, &g_2, &l_419[0], &g_2}, {&g_2, &g_54, (void*)0, &g_83, &g_83, (void*)0, &g_54, &g_2, &l_419[0], &g_2}};
                    int i, j;
                    if ((*g_337))
                    {
                        if (l_440)
                            break;
                        if ((*g_337))
                            break;
                        (*l_407) = (*l_382);
                        if ((*g_337))
                            break;
                    }
                    else
                    {
                        if ((*g_337))
                            break;
                        (*l_382) = l_486[2][7];
                        if (p_29)
                            break;
                    }
                }
            }
            (*g_48) = func_16(g_6);
            return l_457[9];
        }
        else
        {
            long long l_490 = 0xD5D044424D83999CLL;
            int **l_495[4];
            const long long *l_507[7];
            const long long **l_506[6][8][5] = {{{(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}}, {{(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}}, {{(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}}, {{(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}}, {{(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}}, {{(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}, {(void*)0, &l_507[0], &l_507[0], (void*)0, &l_507[4]}}};
            const long long ***l_508 = &l_506[1][7][0];
            char l_509 = 0x16L;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_495[i] = &g_259;
            for (i = 0; i < 7; i++)
                l_507[i] = &g_428;
            (*g_48) = l_487;
            l_497 = (safe_sub_func_int16_t_s_s((((l_490 < (safe_add_func_uint64_t_u_u(p_29, p_28))) && p_29) < 255UL), l_496[9][4]));
            g_54 = (safe_mod_func_uint32_t_u_u(0x87F12CDAL, ((((**g_262) = (((void*)0 == l_452) < p_28)) ^ p_29) | (*g_294))));
        }
    }
    return l_382;
}







static unsigned long long func_30(int ** p_31, unsigned short p_32, short p_33)
{
    const int *l_355 = (void*)0;
    unsigned char *l_356[3][9][4] = {{{(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}}, {{(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}}, {{(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}, {(void*)0, &g_67, &g_67, &g_67}}};
    int l_357 = 0x5DD11A3AL;
    long long * const *l_358 = (void*)0;
    long long * const **l_359 = &l_358;
    int l_362 = (-8L);
    unsigned **l_363 = &g_294;
    int *l_364 = &l_357;
    int i, j, k;
    l_362 = ((safe_rshift_func_int16_t_s_u((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((0x2E5CL ^ (((p_33 >= (safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((*g_263) = (*g_111)), 6)), 1L))) <= ((l_357 = (((*l_359) = l_358) != g_360)) <= p_32)) >= 0x80BE2E15L)), 10)), 0xE108L)), 15)) && p_32);
    g_293 = l_363;
    (*l_364) = l_362;
    return p_33;
}







static int ** func_34(long long p_35, long long p_36, unsigned long long p_37, unsigned p_38, short p_39)
{
    return &g_49;
}







static long long func_40(const int * p_41, unsigned char p_42, unsigned p_43)
{
    const short *l_108 = (void*)0;
    const short **l_107 = &l_108;
    int l_119 = 1L;
    int **l_120 = (void*)0;
    char l_121 = 9L;
    unsigned short *l_122 = &g_123[0][1][5];
    int *l_124 = &l_119;
    long long *l_131[8][8] = {{&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132, &g_132}};
    unsigned char *l_138 = &g_67;
    unsigned *l_139 = &g_11[5][0];
    long long *l_143 = &g_132;
    int l_144 = 0xEF3D6048L;
    unsigned char **l_281 = &g_102[0];
    int l_284 = 0x55B130C0L;
    const int *l_288 = &l_119;
    int i, j;
    for (p_42 = 19; (p_42 <= 52); p_42 = safe_add_func_uint8_t_u_u(p_42, 4))
    {
        int l_105 = 0xFB9E8BD0L;
        for (g_67 = 13; (g_67 != 54); g_67 = safe_add_func_int8_t_s_s(g_67, 8))
        {
            int *l_106 = &g_83;
            const short ***l_109 = &l_107;
            const short **l_114 = &l_108;
            const short ***l_113 = &l_114;
            (*l_106) = (0x12L & (((safe_add_func_int16_t_s_s((g_100[7][3] == (void*)0), (safe_sub_func_uint64_t_u_u(18446744073709551606UL, p_42)))) == l_105) < l_105));
            (*l_113) = (g_110 = ((*l_109) = l_107));
            (*l_106) = (!(*p_41));
        }
    }
    (*l_124) = (((*l_122) = ((safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(func_44((l_119 <= (p_42 = l_119)), g_11[1][1], &g_49), p_43)), l_121)) <= g_2)) >= 0x848CL);
    if ((((*l_139) = (safe_rshift_func_uint8_t_u_s((func_44((safe_mod_func_uint64_t_u_u((g_8 & ((*l_124) = (((*l_138) = (safe_add_func_int32_t_s_s((((g_133 = (g_132 = g_123[0][1][5])) > ((((g_11[1][1] < (!p_43)) ^ (p_43 <= (safe_mod_func_int8_t_s_s((safe_sub_func_int64_t_s_s(p_42, g_83)), 0x28L)))) < (*l_124)) <= 0x9613L)) & g_11[1][1]), (**g_48)))) && (*l_124)))), (-1L))), g_12, &g_49) && 18446744073709551612UL), g_123[0][0][0]))) ^ p_43))
    {
        int *l_140 = &g_6;
        (*l_124) = (*p_41);
        (*g_48) = l_140;
    }
    else
    {
        long long *l_141[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
        long long **l_142 = &l_131[3][4];
        int l_151[4][7][4] = {{{0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}}, {{0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}}, {{0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}}, {{0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}, {0xA5F8AAA1L, 0xC2CD0B65L, 0L, 0xB9B2B9B8L}}};
        int **l_218 = (void*)0;
        int l_241 = 0L;
        const unsigned short l_248[9][4][3] = {{{0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}}, {{0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}}, {{0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}}, {{0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}}, {{0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}}, {{0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}}, {{0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}}, {{0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}}, {{0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}, {0x13F3L, 0x753FL, 1UL}}};
        int *l_251 = &l_144;
        unsigned char **l_295 = &g_102[1];
        unsigned char **l_296 = &g_102[0];
        const int l_317 = 0xF9AA37D9L;
        unsigned l_344[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_344[i] = 0UL;
        (*l_124) = (*g_49);
        if ((((*l_122) = (*l_124)) | (((*l_142) = l_141[7]) == l_143)))
        {
            unsigned char l_153[4];
            short * const l_159 = (void*)0;
            unsigned l_169 = 1UL;
            unsigned char **l_172[5][4][8] = {{{&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}}, {{&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}}, {{&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}}, {{&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}}, {{&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}, {&g_102[1], &l_138, &g_102[1], &g_102[0], &g_102[1], &g_102[1], &g_102[1], &g_102[1]}}};
            int l_173[5][6][8] = {{{(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}}, {{(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}}, {{(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}}, {{(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}}, {{(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}, {(-7L), (-1L), 8L, (-8L), 8L, (-1L), (-7L), 0x65D8ACBCL}}};
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_153[i] = 0xA2L;
            (*l_124) = ((*l_124) < l_144);
            for (g_132 = 0; (g_132 < 22); g_132 = safe_add_func_uint64_t_u_u(g_132, 6))
            {
                char *l_152 = &l_121;
                int l_154 = 0x80494BA7L;
                int *l_170 = &g_54;
                l_151[1][0][2] = (safe_lshift_func_int8_t_s_u(((safe_rshift_func_uint16_t_u_u(((*l_122) = l_151[0][3][1]), ((0UL != (l_151[2][4][1] != ((*l_152) = g_11[1][1]))) ^ l_153[3]))) >= (*g_111)), l_154));
                (*l_170) = ((safe_rshift_func_int16_t_s_s((l_154 >= (safe_sub_func_int32_t_s_s((l_159 != (void*)0), ((safe_mod_func_uint32_t_u_u((p_42 == (p_42 | (0UL <= (safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(((*l_122) = ((((*l_124) = (func_44((*l_124), (g_168[1][2] = p_43), &g_49) && l_154)) & (*p_41)) | g_132)), 65528UL)), 9L)), g_2))))), g_132)) > l_153[3])))), 5)) < l_169);
            }
            if (l_151[0][3][1])
            {
                unsigned char ***l_171 = &g_101[5][1][0];
                unsigned short *l_176 = &g_177;
                unsigned char *l_178 = &l_153[3];
                unsigned char *l_179 = &l_153[1];
                (*g_48) = func_16(p_43);
                (*l_124) = ((((*l_139) = g_123[0][0][6]) > ((((*l_171) = (void*)0) != l_172[4][3][5]) ^ (l_173[0][5][0] = 0xF490EF0FED554AE0LL))) != (~(safe_lshift_func_uint16_t_u_u(((*l_176) = (*l_124)), 13))));
                (*l_124) = (g_132 == 254UL);
                (*l_124) = ((l_178 = &p_42) != (l_179 = &p_42));
            }
            else
            {
                int l_180 = (-4L);
                (*l_124) = l_180;
            }
            for (p_43 = (-29); (p_43 <= 53); ++p_43)
            {
                unsigned char *l_203[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_203[i] = &l_153[3];
                for (l_169 = 0; (l_169 <= 3); l_169 += 1)
                {
                    const int *l_183[2][7][5] = {{{(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}}, {{(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}, {(void*)0, &g_6, &l_144, &l_173[3][1][3], &l_144}}};
                    int i, j, k;
                    l_183[0][2][2] = p_41;
                    for (l_144 = 0; (l_144 <= 3); l_144 += 1)
                    {
                        int *l_184[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_184[i] = &l_144;
                        (*g_48) = l_184[2];
                    }
                    for (g_83 = 3; (g_83 >= 0); g_83 -= 1)
                    {
                        int i, j, k;
                        if (l_151[g_83][(l_169 + 3)][g_83])
                            break;
                    }
                    for (g_132 = 0; (g_132 <= 3); g_132 += 1)
                    {
                        int i, j, k;
                        (*l_124) = 0x6B5423CFL;
                        l_151[0][3][1] = ((*l_124) = (safe_unary_minus_func_int32_t_s(0L)));
                        if ((*p_41))
                            break;
                        (*g_48) = func_16((safe_unary_minus_func_uint16_t_u((p_43 < (safe_mod_func_int32_t_s_s((((void*)0 == (*l_142)) != (g_2 >= (safe_sub_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((0x6134L && (safe_add_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(((l_173[2][1][7] & ((safe_add_func_int64_t_s_s((l_151[0][3][1] ^ (&p_42 == (l_203[0] = &p_42))), p_42)) > 4UL)) <= p_42), (*g_111))) & 0x04E7L), (-1L)))), 5)), 1)), 5)) >= 1UL), 1UL)))), p_42))))));
                    }
                }
            }
        }
        else
        {
            char *l_210 = &l_121;
            int **l_211 = (void*)0;
            int l_217[6];
            long long *l_242[4] = {&g_132, &g_132, &g_132, &g_132};
            int ***l_245 = (void*)0;
            int ***l_246[6] = {&g_48, &g_48, &l_218, &g_48, &g_48, &l_218};
            short l_279 = 0x3F7AL;
            unsigned char * const *l_282 = &g_102[0];
            char l_283 = 0x2FL;
            unsigned char l_285[6][6] = {{0xCAL, 9UL, 0xCAL, 0x84L, 0x4DL, 0x1FL}, {0xCAL, 9UL, 0xCAL, 0x84L, 0x4DL, 0x1FL}, {0xCAL, 9UL, 0xCAL, 0x84L, 0x4DL, 0x1FL}, {0xCAL, 9UL, 0xCAL, 0x84L, 0x4DL, 0x1FL}, {0xCAL, 9UL, 0xCAL, 0x84L, 0x4DL, 0x1FL}, {0xCAL, 9UL, 0xCAL, 0x84L, 0x4DL, 0x1FL}};
            unsigned char l_309 = 255UL;
            int i, j;
            for (i = 0; i < 6; i++)
                l_217[i] = (-1L);
            if ((((safe_lshift_func_uint16_t_u_s(p_42, 2)) >= ((((safe_mod_func_int64_t_s_s(p_43, (safe_sub_func_int16_t_s_s(p_43, p_42)))) <= (*p_41)) || (*l_124)) != p_42)) < 0xE978L))
            {
                unsigned short l_212 = 0x202EL;
                int l_213[8] = {0x7505CF3AL, 0x7505CF3AL, 0x8AF58D63L, 0x7505CF3AL, 0x7505CF3AL, 0x8AF58D63L, 0x7505CF3AL, 0x7505CF3AL};
                int i;
                (*l_124) = ((p_42 = 1UL) && (l_213[1] != (-7L)));
            }
            else
            {
                unsigned l_214 = 0x48666776L;
                int *l_220[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_220[i] = &l_151[0][3][1];
                (*l_124) = l_214;
                if (((*l_124) = l_214))
                {
                    unsigned l_219 = 0x78BBDB83L;
                    int **l_221 = &l_220[0];
                    int l_240[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_240[i] = 0x6F34C10FL;
                    (*g_48) = func_16(l_219);
                    (*l_221) = ((*g_48) = l_220[0]);
                    (*l_124) = func_44((((**l_221) = (((0x2F0E14FAL <= 0xE66ED0BEL) | (0xB4D8L && (l_210 == l_138))) >= 0x896ED7C6L)) & (safe_sub_func_uint32_t_u_u((p_42 && (p_43 <= p_43)), 0x16E16E4EL))), g_12, &g_49);
                    for (l_119 = 0; (l_119 < 2); ++l_119)
                    {
                    }
                }
                else
                {
                    for (g_12 = 0; (g_12 <= 0); g_12 = safe_add_func_uint32_t_u_u(g_12, 6))
                    {
                        (*g_48) = (*g_48);
                    }
                }
            }
            if ((**g_48))
            {
                int l_247 = 0xFBA8FC99L;
                (*l_124) = ((p_43 < ((((func_44(g_11[4][1], (0L != g_123[0][1][5]), &g_49) | g_2) <= (l_247 | ((*p_41) & (*l_124)))) <= p_43) ^ g_6)) | l_248[4][1][2]);
                for (g_67 = 12; (g_67 <= 9); g_67--)
                {
                    l_251 = func_16(l_247);
                }
            }
            else
            {
                short *l_254 = &g_168[2][2];
                short **l_253 = &l_254;
                short ***l_252 = &l_253;
                int l_275 = (-6L);
                unsigned char **l_280 = &g_102[1];
                const int *l_287[8] = {&g_54, (void*)0, &g_54, (void*)0, &g_54, (void*)0, &g_54, (void*)0};
                const int **l_286[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_286[i] = &l_287[1];
                if ((l_252 != &l_253))
                {
                    for (l_241 = (-1); (l_241 < (-23)); --l_241)
                    {
                        (*l_251) = (safe_add_func_int64_t_s_s(((void*)0 != &g_132), 0xD8DB81AA3C218025LL));
                        g_259 = ((*g_48) = func_16(g_6));
                        if ((*p_41))
                            continue;
                    }
                }
                else
                {
                    short **l_264 = &g_263;
                    unsigned long long *l_273 = &g_274;
                    char *l_276 = &g_277;
                    int l_278 = 0xB34C2925L;
                    (*l_251) = ((((((p_43 > p_42) == p_43) || g_123[0][1][5]) < 0x7FB3CA96074C041ELL) < (**g_48)) <= l_275);
                    for (g_274 = 0; (g_274 <= 3); g_274 += 1)
                    {
                        if ((**g_48))
                            break;
                        (*g_48) = (*g_48);
                        if (l_278)
                            break;
                    }
                }
                l_285[5][5] = ((((*l_122) = (l_279 = l_275)) && p_42) != (p_43 != (*l_124)));
                l_288 = p_41;
                for (p_42 = (-27); (p_42 == 12); ++p_42)
                {
                    const int *l_297 = &l_151[3][4][1];
                    short ** const l_298 = (void*)0;
                    for (l_279 = 0; (l_279 >= 24); ++l_279)
                    {
                        l_288 = (*g_48);
                    }
                    for (g_177 = 0; (g_177 <= 0); g_177 += 1)
                    {
                        g_293 = g_293;
                        p_41 = p_41;
                        l_296 = (l_295 = l_280);
                        return p_43;
                    }
                    for (g_133 = 0; (g_133 <= 3); g_133 += 1)
                    {
                        l_297 = p_41;
                        if ((*p_41))
                            break;
                    }
                    (*l_124) = ((g_132 >= ((*l_251) = 7L)) >= p_43);
                }
            }
            if ((*p_41))
            {
                int l_305[3][6][6] = {{{0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}}, {{0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}}, {{0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}, {0x1F6079FCL, 0xE59279D7L, 0xE59279D7L, 0x1F6079FCL, 0xEB201C3AL, 0L}}};
                int i, j, k;
                for (p_42 = 0; (p_42 <= 7); p_42 += 1)
                {
                    int **l_311 = &g_259;
                    int l_312[7][7] = {{9L, 4L, 0x85742EE5L, (-1L), 0L, (-6L), 0xAAB49C6AL}, {9L, 4L, 0x85742EE5L, (-1L), 0L, (-6L), 0xAAB49C6AL}, {9L, 4L, 0x85742EE5L, (-1L), 0L, (-6L), 0xAAB49C6AL}, {9L, 4L, 0x85742EE5L, (-1L), 0L, (-6L), 0xAAB49C6AL}, {9L, 4L, 0x85742EE5L, (-1L), 0L, (-6L), 0xAAB49C6AL}, {9L, 4L, 0x85742EE5L, (-1L), 0L, (-6L), 0xAAB49C6AL}, {9L, 4L, 0x85742EE5L, (-1L), 0L, (-6L), 0xAAB49C6AL}};
                    int i, j;
                    (*g_48) = func_16(p_42);
                    for (g_177 = 0; (g_177 <= 7); g_177 += 1)
                    {
                        int **l_306 = &l_124;
                        int l_310 = 0xC84BFAA1L;
                        l_312[6][0] = ((*l_124) = (safe_sub_func_int16_t_s_s(p_43, ((p_42 || (*p_41)) < p_43))));
                        l_312[4][5] = (*p_41);
                        g_54 = (safe_add_func_uint16_t_u_u(((*l_122) = (safe_sub_func_int32_t_s_s(((**l_306) = (g_6 > g_11[4][2])), (*p_41)))), l_317));
                    }
                }
            }
            else
            {
                char l_318 = 0x81L;
                int l_332 = 0x261F9E83L;
                unsigned l_334 = 4294967295UL;
                long long ***l_342 = (void*)0;
                long long ***l_343 = (void*)0;
                if ((0UL && ((*p_41) < l_318)))
                {
                    return p_42;
                }
                else
                {
                    short ****l_328 = (void*)0;
                    short ***l_330 = &g_262;
                    short ****l_329 = &l_330;
                    char *l_331[2][5] = {{&l_283, &l_283, &l_283, &l_283, &l_283}, {&l_283, &l_283, &l_283, &l_283, &l_283}};
                    unsigned long long *l_333 = &g_274;
                    int i, j;
                    (*g_48) = func_16((safe_lshift_func_uint8_t_u_u((*l_124), 2)));
                    for (g_177 = 1; (g_177 <= 5); g_177 += 1)
                    {
                        unsigned short l_321 = 0xC780L;
                        const int **l_322 = &l_288;
                        (*l_124) = l_321;
                        (*l_124) = (*p_41);
                        (*g_48) = (*g_48);
                        (*l_322) = p_41;
                    }
                    (*l_124) = 1L;
                    l_334 = (l_144 = ((*l_124) = (safe_add_func_uint64_t_u_u(0x65E62D59CFF97F81LL, ((*l_333) = ((*g_263) == 0x1423L))))));
                }
                for (l_144 = 0; (l_144 != (-22)); l_144--)
                {
                    const int **l_339 = &l_288;
                    (*l_339) = (g_337 = p_41);
                    for (g_132 = 0; (g_132 != 11); g_132 = safe_add_func_uint8_t_u_u(g_132, 1))
                    {
                        if ((*p_41))
                            break;
                    }
                }
                (*l_124) = (l_332 = (&l_143 == (l_142 = &l_141[7])));
                p_41 = func_16(p_43);
            }
        }
        (*l_124) = (g_83 = l_344[1]);
    }
    return g_177;
}







static long long func_44(char p_45, char p_46, int ** p_47)
{
    short l_55 = 0x9B20L;
    int l_60 = 0x64B5AD8EL;
    const unsigned char *l_87 = &g_67;
    const unsigned char **l_86 = &l_87;
    int *l_89 = &l_60;
    if ((*g_49))
    {
        const unsigned short l_52 = 0x8FEFL;
        int *l_58[1];
        int * const l_71 = &g_6;
        int i;
        for (i = 0; i < 1; i++)
            l_58[i] = &g_6;
        if ((safe_sub_func_int8_t_s_s(l_52, g_12)))
        {
            int *l_53[3];
            int i;
            for (i = 0; i < 3; i++)
                l_53[i] = &g_54;
            l_55 = 2L;
            for (l_55 = 2; (l_55 < 3); l_55++)
            {
                int *l_59 = &g_54;
                l_60 = (((*g_48) = l_58[0]) == l_59);
                if ((**p_47))
                {
                    int *l_63 = (void*)0;
                    unsigned char *l_66 = &g_67;
                    for (p_45 = 0; (p_45 != (-29)); p_45 = safe_sub_func_uint16_t_u_u(p_45, 4))
                    {
                        g_48 = &g_49;
                        (*p_47) = l_63;
                    }
                    (*p_47) = func_16(((safe_lshift_func_uint8_t_u_u(((*l_66) = p_46), 3)) > (*l_59)));
                }
                else
                {
                    (*g_48) = (*p_47);
                    for (p_45 = 0; (p_45 != 15); p_45 = safe_add_func_uint8_t_u_u(p_45, 3))
                    {
                        unsigned char l_70 = 0x6AL;
                        return l_70;
                    }
                }
            }
        }
        else
        {
            return g_11[1][1];
        }
        (*p_47) = l_71;
        for (l_60 = 3; (l_60 >= 0); l_60 -= 1)
        {
            return p_45;
        }
    }
    else
    {
        int l_93[3][7] = {{0x2068ECBDL, 0xEBBB00C1L, 0x39F7431CL, 0x39F7431CL, 0xEBBB00C1L, 0x2068ECBDL, 0xEBBB00C1L}, {0x2068ECBDL, 0xEBBB00C1L, 0x39F7431CL, 0x39F7431CL, 0xEBBB00C1L, 0x2068ECBDL, 0xEBBB00C1L}, {0x2068ECBDL, 0xEBBB00C1L, 0x39F7431CL, 0x39F7431CL, 0xEBBB00C1L, 0x2068ECBDL, 0xEBBB00C1L}};
        int i, j;
        for (g_12 = 3; (g_12 >= 0); g_12 -= 1)
        {
            char l_72 = 0xC9L;
            int *l_90 = &g_54;
        }
        for (g_83 = 0; (g_83 < (-27)); g_83--)
        {
            l_93[0][6] = (*g_49);
        }
        (*l_89) = (-1L);
        (*g_48) = (*g_48);
    }
    for (g_83 = 0; g_83 < 7; g_83 += 1)
    {
        for (p_46 = 0; p_46 < 4; p_46 += 1)
        {
            g_11[g_83][p_46] = 0x13F082F4L;
        }
    }
    return p_46;
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
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_11[i][j], "g_11[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_123[i][j][k], "g_123[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_168[i][j], "g_168[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_274, "g_274", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_338, "g_338", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_590, "g_590", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_636[i], "g_636[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_653, "g_653", print_hash_value);
    transparent_crc(g_669, "g_669", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    transparent_crc(g_747, "g_747", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_832[i][j][k], "g_832[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_857, "g_857", print_hash_value);
    transparent_crc(g_868, "g_868", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_924[i][j][k], "g_924[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_948, "g_948", print_hash_value);
    transparent_crc(g_1090, "g_1090", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
