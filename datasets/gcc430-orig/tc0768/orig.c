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



static int g_35 = 0xF7D26684L;
static int g_54 = 0x8842B4CFL;
static volatile unsigned char g_84 = 254UL;
static volatile unsigned char *g_83 = &g_84;
static int g_85 = 0xE568C3B0L;
static unsigned short g_87 = 0xBAF6L;
static int g_88 = 0x1E6DB759L;
static short g_99[2] = {(-1L), (-1L)};
static int g_103[9] = {0x3C6BE40DL, 0x3C6BE40DL, 3L, 0x3C6BE40DL, 0x3C6BE40DL, 3L, 0x3C6BE40DL, 0x3C6BE40DL, 3L};
static char g_132 = (-5L);
static unsigned g_155 = 0x6C5E5C33L;
static unsigned short g_184 = 0x9B28L;
static int g_245 = 0L;
static unsigned g_261 = 1UL;
static unsigned g_265[10][2] = {{0xB928183CL, 0xB928183CL}, {0xB928183CL, 0xB928183CL}, {0xB928183CL, 0xB928183CL}, {0xB928183CL, 0xB928183CL}, {0xB928183CL, 0xB928183CL}, {0xB928183CL, 0xB928183CL}, {0xB928183CL, 0xB928183CL}, {0xB928183CL, 0xB928183CL}, {0xB928183CL, 0xB928183CL}, {0xB928183CL, 0xB928183CL}};
static int *g_299 = &g_103[0];
static unsigned g_333 = 0UL;
static volatile int g_350 = (-1L);
static volatile unsigned g_378[4] = {0UL, 0x25456EE9L, 0UL, 0x25456EE9L};
static unsigned char g_415 = 0x77L;
static unsigned char *g_414[6][10][4] = {{{&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415}}};
static unsigned char *g_417[3] = {&g_415, &g_415, &g_415};
static char g_419 = 0xBFL;
static unsigned short g_429 = 0x24C4L;
static short g_431 = 0x75D7L;
static int *g_459 = &g_54;
static short *g_465 = &g_99[0];
static short **g_464 = &g_465;
static char *g_532[7][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
static char **g_531 = &g_532[2][0];
static char ***g_530 = &g_531;
static int g_597 = (-3L);
static int *g_596 = &g_597;
static int g_613 = 0x8633D6BAL;
static short g_712 = 0x0CD3L;
static int g_715 = 0x04226B79L;
static volatile unsigned char **g_729 = &g_83;
static volatile unsigned char ***g_728[5][1] = {{&g_729}, {&g_729}, {&g_729}, {&g_729}, {&g_729}};
static volatile int g_758 = 0L;
static volatile int *g_757[1] = {&g_758};
static volatile int **g_756 = &g_757[0];
static volatile int ***g_755 = &g_756;
static unsigned g_773[9] = {18446744073709551615UL, 0x7A0D1984L, 18446744073709551615UL, 0x7A0D1984L, 18446744073709551615UL, 0x7A0D1984L, 18446744073709551615UL, 0x7A0D1984L, 18446744073709551615UL};
static unsigned short g_796 = 0xFD6DL;



static unsigned short func_1(void);
static unsigned short func_11(unsigned short p_12);
static int * func_13(int p_14, int * p_15, unsigned char p_16, int * p_17, unsigned char p_18);
static int func_19(int p_20, int * p_21);
static int * func_25(unsigned p_26, int * p_27, int * p_28, char p_29);
static int * func_31(int p_32, unsigned p_33, int p_34);
static int func_36(unsigned char p_37, unsigned p_38);
static unsigned short func_41(int * p_42, int p_43, int * p_44, unsigned p_45);
static int * func_46(short p_47, int * p_48, unsigned p_49, char p_50, int p_51);
static int func_58(int * p_59, unsigned p_60, unsigned char p_61, char p_62);
static unsigned short func_1(void)
{
    int l_4[9][1];
    unsigned short *l_711[1];
    unsigned l_713 = 0x0D35A0B7L;
    int *l_714 = &g_715;
    int *l_716 = &g_245;
    int **l_754 = &l_716;
    int ***l_753 = &l_754;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
            l_4[i][j] = (-8L);
    }
    for (i = 0; i < 1; i++)
        l_711[i] = (void*)0;
    (*l_716) = ((*l_714) ^= ((safe_sub_func_int8_t_s_s(l_4[3][0], (0x8769L == ((safe_sub_func_uint8_t_u_u(1UL, l_4[3][0])) <= (safe_sub_func_uint16_t_u_u((g_712 |= ((safe_lshift_func_uint8_t_u_s((func_11(l_4[6][0]) ^ g_613), 5)) || func_11(l_4[7][0]))), l_713)))))) <= 0xA2A9L));
    for (l_713 = (-26); (l_713 != 50); l_713 = safe_add_func_uint8_t_u_u(l_713, 9))
    {
        unsigned char *l_719 = &g_415;
        int l_723 = 0x8212F7B5L;
        short l_724 = 3L;
        short **l_732 = &g_465;
        short ***l_733[3];
        int l_762 = 0xF62BFFB0L;
        int i;
        for (i = 0; i < 3; i++)
            l_733[i] = &l_732;
        if ((l_719 == l_719))
        {
            int *l_720 = &g_103[5];
            char **l_727 = &g_532[4][0];
            l_724 |= (((*l_719) &= (((*l_714) = func_41(l_720, (*l_716), &g_597, g_99[0])) > 0xB6CFE53AL)) ^ (safe_rshift_func_uint16_t_u_s((*l_720), (((*l_720) == (((l_723 <= (*l_720)) && g_265[5][1]) || (-5L))) || l_723))));
            for (g_715 = 12; (g_715 <= (-24)); g_715--)
            {
                (*g_459) ^= ((void*)0 == l_727);
                (*l_720) = (((void*)0 != g_728[4][0]) > (-1L));
            }
        }
        else
        {
            for (g_415 = 0; (g_415 <= 57); ++g_415)
            {
                return g_715;
            }
            if (l_723)
                continue;
            if ((*l_714))
                continue;
        }
        g_464 = l_732;
        for (g_333 = 0; (g_333 >= 3); ++g_333)
        {
            int l_759[1][1][8] = {{{0x8D306709L, 0xB1441BD3L, 0x8D306709L, 0xB1441BD3L, 0x8D306709L, 0xB1441BD3L, 0x8D306709L, 0xB1441BD3L}}};
            unsigned short l_775 = 0UL;
            int i, j, k;
            for (g_54 = 0; (g_54 <= 1); ++g_54)
            {
                int **l_738 = &l_714;
                (*l_738) = &l_723;
                for (g_88 = 0; (g_88 > (-14)); g_88 = safe_sub_func_uint16_t_u_u(g_88, 7))
                {
                    for (g_715 = 1; (g_715 >= 0); g_715 -= 1)
                    {
                        short l_741 = 0x43DDL;
                        return l_741;
                    }
                }
                return (*l_716);
            }
            for (l_723 = (-24); (l_723 < (-14)); l_723 = safe_add_func_uint16_t_u_u(l_723, 3))
            {
                int *l_744 = &g_103[5];
                int ***l_751 = (void*)0;
                int ****l_752 = (void*)0;
                int *l_760 = &l_4[3][0];
                l_744 = &g_245;
                (*l_760) &= func_41(&g_103[5], (safe_mod_func_uint32_t_u_u(g_184, (((safe_sub_func_int8_t_s_s((+(safe_lshift_func_uint8_t_u_u((**g_729), ((((0xF10DFBF7L >= ((l_753 = l_751) == g_755)) && 0UL) != func_58((*l_754), (((0xA3L | l_759[0][0][6]) | l_723) > (*g_459)), l_759[0][0][6], l_759[0][0][4])) ^ 0x3145L)))), (*l_714))) != g_613) | (*g_465)))), &l_723, g_184);
            }
            if ((**g_756))
            {
                int *l_761[9][6] = {{&l_4[3][0], &l_723, (void*)0, &l_723, &l_4[3][0], &g_103[5]}, {&l_4[3][0], &l_723, (void*)0, &l_723, &l_4[3][0], &g_103[5]}, {&l_4[3][0], &l_723, (void*)0, &l_723, &l_4[3][0], &g_103[5]}, {&l_4[3][0], &l_723, (void*)0, &l_723, &l_4[3][0], &g_103[5]}, {&l_4[3][0], &l_723, (void*)0, &l_723, &l_4[3][0], &g_103[5]}, {&l_4[3][0], &l_723, (void*)0, &l_723, &l_4[3][0], &g_103[5]}, {&l_4[3][0], &l_723, (void*)0, &l_723, &l_4[3][0], &g_103[5]}, {&l_4[3][0], &l_723, (void*)0, &l_723, &l_4[3][0], &g_103[5]}, {&l_4[3][0], &l_723, (void*)0, &l_723, &l_4[3][0], &g_103[5]}};
                unsigned l_763 = 1UL;
                int i, j;
                --l_763;
                if ((*g_596))
                    continue;
                if ((*g_596))
                    break;
            }
            else
            {
                char l_774 = 0L;
                short l_786 = 0x5EB8L;
                int l_795 = (-1L);
                for (g_597 = (-6); (g_597 < (-21)); g_597 = safe_sub_func_uint8_t_u_u(g_597, 1))
                {
                    unsigned char l_772 = 0xD0L;
                    int l_787 = 0xC0191F84L;
                    short **l_794 = (void*)0;
                    (**g_755) = (*g_756);
                    (*l_716) = ((safe_lshift_func_uint8_t_u_s((~((safe_sub_func_int8_t_s_s(((func_19(l_772, &g_715) > g_773[8]) <= ((***g_755) ^ (g_184 | g_429))), l_774)) ^ l_759[0][0][0])), l_762)) ^ l_774);
                    if (l_775)
                        break;
                    (***g_755) = ((l_759[0][0][6] = (((((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_772, 2UL)), 5)), ((!l_786) ^ (((l_787 = (0L ^ l_759[0][0][6])) && (((safe_lshift_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((((g_464 = l_794) != (void*)0) || g_758), l_775)), l_795)) < 0x3FE5D168L) || 0x7C96AEDCL), l_774)) ^ l_787) | l_724)) < l_775)))), g_103[5])), l_772)) || l_775) != 0x33L) != l_723) < g_773[8])) < (*l_714));
                }
                if ((*g_596))
                    continue;
                return g_155;
            }
        }
    }
    return g_796;
}







static unsigned short func_11(unsigned short p_12)
{
    int l_24[5] = {1L, (-1L), 1L, (-1L), 1L};
    int l_30 = 0x56123D4AL;
    int **l_595 = &g_459;
    unsigned l_710 = 0x14BDD351L;
    int i;
    g_596 = func_13(func_19((safe_sub_func_uint16_t_u_u(l_24[3], p_12)), func_25(l_30, ((*l_595) = func_31(g_35, p_12, func_36(l_24[3], l_24[3]))), g_596, p_12)), &l_24[3], p_12, &g_597, p_12);
    return l_710;
}







static int * func_13(int p_14, int * p_15, unsigned char p_16, int * p_17, unsigned char p_18)
{
    unsigned l_622 = 3UL;
    int **l_623 = &g_299;
    unsigned *l_628 = &g_261;
    unsigned *l_629 = &g_155;
    unsigned *l_630 = &l_622;
    int l_636 = 0L;
    int l_637 = 0xAD240C32L;
    int l_638 = 0xA294665FL;
    int l_639 = (-3L);
    int l_640 = 0x736B8437L;
    int l_641 = 0xC2426C4FL;
    int l_642 = (-4L);
    int l_643 = (-1L);
    int l_644 = 0L;
    int l_645 = 1L;
    int l_646 = 0x05132B0EL;
    int l_647 = (-1L);
    int l_648 = (-1L);
    int l_649 = 6L;
    int l_650 = 0x484D10D0L;
    int l_651 = 0L;
    int l_652 = 0x9000BB3EL;
    int l_653 = 0x9D256391L;
    int l_654 = 0x1F6D03A8L;
    int l_655 = (-2L);
    int l_656 = 1L;
    int l_657 = 0x404A24C9L;
    int l_658 = 4L;
    int l_659[7][2][5] = {{{(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}, {(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}}, {{(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}, {(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}}, {{(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}, {(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}}, {{(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}, {(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}}, {{(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}, {(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}}, {{(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}, {(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}}, {{(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}, {(-10L), 0L, 0xAE9AB75EL, 0x5D4DCE52L, 0x23795F42L}}};
    unsigned short l_661 = 7UL;
    unsigned char *l_708 = &g_415;
    short **l_709 = &g_465;
    int i, j, k;
    (*g_596) ^= ((g_378[1] < (safe_mod_func_uint16_t_u_u(p_18, (safe_rshift_func_int8_t_s_s(l_622, l_622))))) && (g_265[5][1] = (((*l_628) = func_41(((*l_623) = p_17), (*g_459), p_15, ((*l_630) |= ((*l_629) &= (safe_rshift_func_int16_t_s_s((!((safe_lshift_func_uint16_t_u_s((&g_378[1] == l_628), p_18)) >= g_350)), 10)))))) != g_132)));
    if ((p_18 && (safe_mod_func_int32_t_s_s((safe_sub_func_int16_t_s_s(func_19(p_18, func_46((**g_464), func_25(p_18, &g_103[5], func_25(((-1L) ^ (p_17 == p_15)), (g_459 = &g_103[5]), p_15, p_14), p_18), g_261, p_14, g_429)), p_16)), 0x327EBE25L))))
    {
        int *l_635[10][4][6] = {{{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}, {{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}, {{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}, {{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}, {{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}, {{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}, {{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}, {{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}, {{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}, {{&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}, {&g_103[5], &g_103[5], &g_54, &g_103[5], &g_103[5], &g_54}}};
        short l_660 = (-6L);
        int i, j, k;
        l_661--;
    }
    else
    {
        unsigned **l_664[6];
        int *l_665 = &l_644;
        int l_692 = 0xEA72192FL;
        int l_694 = 0xA9B1169DL;
        int l_696 = 0L;
        int l_697[6] = {(-9L), (-9L), 0L, (-9L), (-9L), 0L};
        int i;
        for (i = 0; i < 6; i++)
            l_664[i] = &l_628;
        (*p_15) ^= (*p_17);
        (*p_17) |= (g_99[1] != ((0x1AL <= func_58(func_25((l_664[4] != l_664[4]), &g_85, l_665, p_14), (0xCE15L ^ p_18), (*g_83), p_18)) >= (*l_665)));
        for (g_184 = 0; (g_184 <= 3); g_184 += 1)
        {
            int *l_669 = &l_640;
            int l_686 = 0x444D546BL;
            int l_690 = 0x071EE425L;
            int l_691 = 0xDE22D223L;
            int l_695 = 0x88247E7AL;
            int l_698 = (-3L);
            int l_699 = 0xFA22AF1EL;
            for (l_657 = 3; (l_657 >= 0); l_657 -= 1)
            {
                int *l_672[7][9] = {{&l_657, &l_639, &l_649, &l_654, &l_649, &l_639, &l_657, &g_103[5], &l_645}, {&l_657, &l_639, &l_649, &l_654, &l_649, &l_639, &l_657, &g_103[5], &l_645}, {&l_657, &l_639, &l_649, &l_654, &l_649, &l_639, &l_657, &g_103[5], &l_645}, {&l_657, &l_639, &l_649, &l_654, &l_649, &l_639, &l_657, &g_103[5], &l_645}, {&l_657, &l_639, &l_649, &l_654, &l_649, &l_639, &l_657, &g_103[5], &l_645}, {&l_657, &l_639, &l_649, &l_654, &l_649, &l_639, &l_657, &g_103[5], &l_645}, {&l_657, &l_639, &l_649, &l_654, &l_649, &l_639, &l_657, &g_103[5], &l_645}};
                int i, j;
                if ((*p_15))
                {
                    int *l_666 = &g_35;
                    (*l_665) = func_58(&g_103[4], ((*l_629) &= func_19(((*l_666) |= g_613), p_15)), (*l_665), ((-2L) | (((*l_628)++) && (+(*g_459)))));
                    return p_17;
                }
                else
                {
                    int **l_673 = &g_459;
                    char *l_674 = &g_132;
                    short l_675 = 0xFFF5L;
                    int l_687 = 1L;
                    int l_688[1];
                    int l_693 = 0x6CE1DD43L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_688[i] = 0x7A9432BDL;
                    l_675 &= (safe_sub_func_uint16_t_u_u((0xD9D7C49BL & ((*l_628) &= func_41(l_672[2][1], ((*l_665) || func_41(func_25(g_103[8], ((*l_673) = ((*l_623) = &g_597)), &g_54, ((*l_674) |= p_16)), (*g_596), &g_597, p_18)), p_15, g_54))), 65535UL));
                    if (((func_19(p_16, l_672[2][1]) >= (g_261++)) > p_16))
                    {
                        (*l_665) ^= ((**l_673) ^= (func_19(g_378[2], p_15) | (safe_lshift_func_uint16_t_u_u(g_103[5], p_16))));
                        return &g_85;
                    }
                    else
                    {
                        char l_682 = 0xF2L;
                        int l_683 = (-1L);
                        unsigned short *l_684[2];
                        int l_685 = 0xD8206672L;
                        int l_689[10] = {3L, 1L, 3L, 1L, 3L, 1L, 3L, 1L, 3L, 1L};
                        unsigned short l_700 = 0x0BC2L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_684[i] = (void*)0;
                        (*l_669) |= func_41(((*l_623) = (*l_673)), (*p_17), p_17, ((l_685 |= ((safe_sub_func_uint16_t_u_u(g_155, (((l_683 = func_41(&g_597, (((func_41(p_17, (*p_15), p_15, l_682) & (*g_465)) > 4294967294UL) >= p_14), &g_85, (*l_665))) | p_14) == 3UL))) && (*g_596))) || l_685));
                        l_700--;
                        (*p_15) = (*g_596);
                    }
                }
            }
            for (l_622 = 0; (l_622 <= 3); l_622 += 1)
            {
                unsigned char l_705[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_705[i][j] = 2UL;
                }
                (*l_665) |= (0L ^ (65535UL ^ func_58(&g_54, ((((*g_459) != func_19((*l_669), &g_103[0])) < (safe_add_func_uint32_t_u_u(0x586FF5C1L, (*g_596)))) > (*p_15)), l_705[3][0], p_18)));
                if ((*g_459))
                    break;
            }
            (*l_623) = p_17;
        }
        (*l_623) = &l_694;
    }
    (*g_459) = ((safe_lshift_func_uint8_t_u_u((p_16 > p_14), ((((*l_708) &= p_16) <= l_656) > ((**g_464) = ((l_709 == &g_465) >= p_16))))) >= (((*p_15) = (~((*g_596) |= (func_19(g_350, p_15) && (*g_83))))) | g_103[5]));
    (*p_15) = (*p_17);
    return p_17;
}







static int func_19(int p_20, int * p_21)
{
    int l_617 = 0L;
    for (g_87 = 0; (g_87 != 56); g_87 = safe_add_func_int8_t_s_s(g_87, 1))
    {
        unsigned short l_616 = 0x8432L;
        l_616 |= (*p_21);
    }
    return l_617;
}







static int * func_25(unsigned p_26, int * p_27, int * p_28, char p_29)
{
    int *l_598 = &g_245;
    int **l_599[9] = {&g_596, &l_598, &g_596, &l_598, &g_596, &l_598, &g_596, &l_598, &g_596};
    int *l_600 = &g_245;
    char *l_601 = (void*)0;
    unsigned char *l_604 = &g_415;
    int i;
    g_459 = l_598;
    p_27 = l_600;
    p_27 = &g_103[5];
    return p_28;
}







static int * func_31(int p_32, unsigned p_33, int p_34)
{
    int *l_577 = &g_103[5];
    unsigned char *l_578[7][4][7] = {{{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}, {{&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}, {&g_415, &g_415, &g_415, &g_415, &g_415, &g_415, &g_415}}};
    int l_579[6] = {1L, 0L, 1L, 0L, 1L, 0L};
    char l_580 = (-7L);
    char l_581 = 4L;
    int l_582 = 0xCB526039L;
    unsigned l_583 = 0x56066AA8L;
    unsigned *l_589 = &g_265[9][0];
    unsigned **l_588 = &l_589;
    int **l_594[3][9][8] = {{{(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}, {{(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, &l_577, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0}}};
    int i, j, k;
    g_459 = func_46((func_58(l_577, g_87, (l_583++), (safe_add_func_int32_t_s_s(((void*)0 == l_588), 0L))) ^ (safe_lshift_func_uint8_t_u_u(((*g_459) & (p_34 >= (((safe_add_func_int8_t_s_s((*l_577), (*l_577))) | p_34) & (*l_577)))), (*l_577)))), &l_579[3], (*l_577), p_33, p_34);
    g_245 |= (*l_577);
    return &g_245;
}







static int func_36(unsigned char p_37, unsigned p_38)
{
    unsigned char l_52 = 3UL;
    int *l_53 = &g_54;
    unsigned short l_55[7];
    unsigned l_372 = 0x2D1B386BL;
    int l_381 = (-1L);
    char *l_390[4];
    int l_391 = 0x676BD8C8L;
    unsigned char *l_392 = &l_52;
    int *l_413 = &g_85;
    int l_432[8] = {1L, 1L, (-10L), 1L, 1L, (-10L), 1L, 1L};
    unsigned char l_456 = 1UL;
    int i;
    for (i = 0; i < 7; i++)
        l_55[i] = 0x2ECCL;
    for (i = 0; i < 4; i++)
        l_390[i] = &g_132;
    l_381 ^= (safe_add_func_int16_t_s_s((func_41(func_46(((-1L) < l_52), l_53, g_35, p_38, l_55[5]), (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((l_372 > g_35) | p_37), 9L)), p_37)), l_53, l_55[1]) < p_38), g_333));
    if ((((*l_392) = (safe_add_func_uint32_t_u_u((*l_53), ((safe_mod_func_int8_t_s_s(p_37, (safe_mod_func_int8_t_s_s((l_391 = (((((4294967295UL > (*l_53)) != (safe_lshift_func_uint8_t_u_u(((*l_53) == 4294967295UL), 1))) < (((*g_83) | (*l_53)) && (l_381 &= ((*l_53) | p_37)))) | 0xD2L) == (*l_53))), p_37)))) == (-9L))))) != 5UL))
    {
        char l_396 = (-3L);
        unsigned *l_399[1];
        unsigned *l_400 = &g_265[3][0];
        int **l_401[7][6][1];
        short *l_450 = &g_99[1];
        unsigned char **l_470 = &g_414[2][1][2];
        char **l_477 = (void*)0;
        unsigned char l_505 = 255UL;
        int l_518 = 0x236087C1L;
        char l_544[7][9] = {{6L, (-4L), 0xFDL, (-4L), 6L, 0L, 0xFDL, 0L, 6L}, {6L, (-4L), 0xFDL, (-4L), 6L, 0L, 0xFDL, 0L, 6L}, {6L, (-4L), 0xFDL, (-4L), 6L, 0L, 0xFDL, 0L, 6L}, {6L, (-4L), 0xFDL, (-4L), 6L, 0L, 0xFDL, 0L, 6L}, {6L, (-4L), 0xFDL, (-4L), 6L, 0L, 0xFDL, 0L, 6L}, {6L, (-4L), 0xFDL, (-4L), 6L, 0L, 0xFDL, 0L, 6L}, {6L, (-4L), 0xFDL, (-4L), 6L, 0L, 0xFDL, 0L, 6L}};
        unsigned l_549 = 0x91F060E0L;
        unsigned short *l_559 = &l_55[5];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_399[i] = &g_155;
        for (i = 0; i < 7; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 1; k++)
                    l_401[i][j][k] = &g_299;
            }
        }
        (*l_53) = (((((*l_400) |= ((*g_83) >= ((safe_unary_minus_func_uint8_t_u(((safe_rshift_func_uint8_t_u_u((g_245 == l_396), (safe_rshift_func_uint8_t_u_s((0L >= func_58(&l_391, p_37, (l_399[0] != (void*)0), (*l_53))), l_396)))) | g_132))) ^ g_99[1]))) && p_37) == 0L) == p_38);
        g_299 = &l_381;
        for (l_52 = 0; (l_52 <= 1); l_52 += 1)
        {
            unsigned char l_402 = 248UL;
            unsigned short *l_405[10][6] = {{(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}, {(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}, {(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}, {(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}, {(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}, {(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}, {(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}, {(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}, {(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}, {(void*)0, &g_184, &l_55[5], (void*)0, &g_184, (void*)0}};
            int l_425 = 1L;
            unsigned *l_426[7][10][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
            int l_436 = 0L;
            unsigned l_440 = 0xA4A63D35L;
            unsigned l_453 = 18446744073709551612UL;
            int *l_454 = &l_391;
            int l_480 = 0L;
            int l_504 = 0xF8B0B07FL;
            char *l_510 = &g_419;
            char *l_511 = &g_419;
            int l_517[8] = {(-1L), (-1L), 1L, (-1L), (-1L), 1L, (-1L), (-1L)};
            int l_519 = 1L;
            unsigned l_523 = 4294967295UL;
            int ***l_552[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_552[i] = &l_401[5][1][0];
            for (g_333 = 0; (g_333 <= 3); g_333 += 1)
            {
                l_402++;
                if (p_38)
                    break;
            }
            (*l_53) = ((+(*l_53)) ^ (p_38 != (+((l_391 = p_38) == g_85))));
        }
    }
    else
    {
        for (l_372 = 0; (l_372 >= 39); l_372 = safe_add_func_uint16_t_u_u(l_372, 9))
        {
            unsigned short *l_567 = &l_55[5];
            int l_570[1];
            int i;
            for (i = 0; i < 1; i++)
                l_570[i] = 0x574519E2L;
            (*g_459) = ((safe_sub_func_uint16_t_u_u(((*l_567) = (safe_mod_func_uint32_t_u_u(3UL, p_38))), (((safe_lshift_func_uint16_t_u_s(p_37, l_570[0])) < (safe_sub_func_int32_t_s_s((g_103[5] == ((*l_413) > (safe_sub_func_uint8_t_u_u(3UL, p_37)))), (*g_459)))) > 0x18DDL))) > p_37);
            return p_37;
        }
        (*l_53) |= (safe_lshift_func_int16_t_s_s((*g_465), (**g_464)));
        (*l_413) |= (*g_459);
    }
    return g_333;
}







static unsigned short func_41(int * p_42, int p_43, int * p_44, unsigned p_45)
{
    int *l_373 = &g_85;
    int *l_374 = &g_245;
    int *l_375 = &g_103[5];
    int *l_376[7] = {(void*)0, &g_245, (void*)0, &g_245, (void*)0, &g_245, (void*)0};
    int l_377[7] = {0x0E7AA8C0L, 0x0E7AA8C0L, 0L, 0x0E7AA8C0L, 0x0E7AA8C0L, 0L, 0x0E7AA8C0L};
    int i;
    g_378[1]++;
    g_245 = (*l_374);
    return g_87;
}







static int * func_46(short p_47, int * p_48, unsigned p_49, char p_50, int p_51)
{
    unsigned char l_71[4][4][9] = {{{0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}}, {{0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}}, {{0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}}, {{0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}, {0x38L, 3UL, 249UL, 0x7EL, 0UL, 0x4CL, 0x5CL, 0x85L, 5UL}}};
    unsigned short *l_102 = &g_87;
    int l_131[5][9][2] = {{{0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}}, {{0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}}, {{0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}}, {{0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}}, {{0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}, {0x06B3A0AEL, 0xA2A759B8L}}};
    unsigned char l_231 = 0x1EL;
    short l_244 = 1L;
    char l_246 = 0x88L;
    short l_247[3][6] = {{1L, (-1L), (-6L), (-1L), 1L, 0L}, {1L, (-1L), (-6L), (-1L), 1L, 0L}, {1L, (-1L), (-6L), (-1L), 1L, 0L}};
    int l_248 = 1L;
    unsigned short l_249 = 65531UL;
    char l_282 = 3L;
    int *l_298 = (void*)0;
    int l_351[4] = {1L, 0x9BCCC838L, 1L, 0x9BCCC838L};
    unsigned char *l_367 = &l_231;
    int i, j, k;
lbl_293:
    for (g_54 = 8; (g_54 > 19); ++g_54)
    {
        int l_64 = 1L;
        unsigned char *l_72 = &l_71[1][1][0];
        int l_133 = 3L;
        unsigned l_134 = 0x4D0A6DBDL;
        unsigned l_174 = 0x0BB935E2L;
        int l_191[4] = {0L, 4L, 0L, 4L};
        int i;
        if (func_58(p_48, (safe_unary_minus_func_int8_t_s(l_64)), ((*l_72) = (g_54 && (safe_sub_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(g_54, (&l_64 != p_48))), (+(((safe_mod_func_uint16_t_u_u(((g_35 != l_71[1][0][2]) | g_54), 65535UL)) && 0x9493L) && g_35)))))), l_64))
        {
            int *l_92 = &l_64;
            short *l_98[9][5] = {{&g_99[0], (void*)0, &g_99[0], &g_99[0], &g_99[0]}, {&g_99[0], (void*)0, &g_99[0], &g_99[0], &g_99[0]}, {&g_99[0], (void*)0, &g_99[0], &g_99[0], &g_99[0]}, {&g_99[0], (void*)0, &g_99[0], &g_99[0], &g_99[0]}, {&g_99[0], (void*)0, &g_99[0], &g_99[0], &g_99[0]}, {&g_99[0], (void*)0, &g_99[0], &g_99[0], &g_99[0]}, {&g_99[0], (void*)0, &g_99[0], &g_99[0], &g_99[0]}, {&g_99[0], (void*)0, &g_99[0], &g_99[0], &g_99[0]}, {&g_99[0], (void*)0, &g_99[0], &g_99[0], &g_99[0]}};
            int l_112[2][4][10] = {{{7L, 1L, (-1L), 0xAAE9426AL, 6L, 0xAAE9426AL, (-1L), 1L, 7L, (-9L)}, {7L, 1L, (-1L), 0xAAE9426AL, 6L, 0xAAE9426AL, (-1L), 1L, 7L, (-9L)}, {7L, 1L, (-1L), 0xAAE9426AL, 6L, 0xAAE9426AL, (-1L), 1L, 7L, (-9L)}, {7L, 1L, (-1L), 0xAAE9426AL, 6L, 0xAAE9426AL, (-1L), 1L, 7L, (-9L)}}, {{7L, 1L, (-1L), 0xAAE9426AL, 6L, 0xAAE9426AL, (-1L), 1L, 7L, (-9L)}, {7L, 1L, (-1L), 0xAAE9426AL, 6L, 0xAAE9426AL, (-1L), 1L, 7L, (-9L)}, {7L, 1L, (-1L), 0xAAE9426AL, 6L, 0xAAE9426AL, (-1L), 1L, 7L, (-9L)}, {7L, 1L, (-1L), 0xAAE9426AL, 6L, 0xAAE9426AL, (-1L), 1L, 7L, (-9L)}}};
            int l_124 = 0L;
            int l_142 = 0x558E2862L;
            unsigned l_145[5];
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_145[i] = 0x4AC731D9L;
            (*l_92) = (-8L);
            (*l_92) = (safe_unary_minus_func_int16_t_s(((safe_sub_func_int16_t_s_s((((void*)0 == &g_84) < ((254UL & l_64) != ((safe_rshift_func_uint16_t_u_u(g_84, 10)) >= (p_47 &= func_58(p_48, g_87, (g_87 < ((*l_92) & l_64)), p_50))))), g_99[0])) && l_64)));
            if ((((((g_99[0] <= p_47) >= (l_64 == (safe_rshift_func_int8_t_s_u((g_103[5] = (l_102 == l_102)), (*g_83))))) || 9L) && (safe_add_func_int16_t_s_s(((l_72 = &l_71[1][0][2]) != &l_71[1][0][2]), (*l_92)))) ^ 9UL))
            {
                int **l_106 = (void*)0;
                int **l_107 = &l_92;
                int *l_108 = &l_64;
                int *l_109 = &g_103[7];
                int l_110 = 0x20E956D3L;
                int *l_111 = (void*)0;
                int *l_113 = &g_85;
                int *l_114 = (void*)0;
                int *l_115 = (void*)0;
                int *l_116 = &g_85;
                int *l_117 = &l_64;
                int *l_118 = &l_64;
                int *l_119 = &l_112[1][2][7];
                int *l_120 = &l_110;
                int *l_121 = &g_103[5];
                int *l_122 = &l_64;
                int *l_123 = &g_103[5];
                int *l_125 = &l_110;
                int *l_126 = (void*)0;
                int *l_127 = (void*)0;
                int *l_128 = &l_112[1][2][7];
                int *l_129 = (void*)0;
                int *l_130[7][6] = {{&l_64, &l_112[1][2][2], &l_64, &l_112[1][2][7], &l_124, &g_103[5]}, {&l_64, &l_112[1][2][2], &l_64, &l_112[1][2][7], &l_124, &g_103[5]}, {&l_64, &l_112[1][2][2], &l_64, &l_112[1][2][7], &l_124, &g_103[5]}, {&l_64, &l_112[1][2][2], &l_64, &l_112[1][2][7], &l_124, &g_103[5]}, {&l_64, &l_112[1][2][2], &l_64, &l_112[1][2][7], &l_124, &g_103[5]}, {&l_64, &l_112[1][2][2], &l_64, &l_112[1][2][7], &l_124, &g_103[5]}, {&l_64, &l_112[1][2][2], &l_64, &l_112[1][2][7], &l_124, &g_103[5]}};
                int i, j;
                (*l_107) = (void*)0;
                l_134++;
                if (((*l_121) ^= (*p_48)))
                {
                    if ((safe_rshift_func_uint8_t_u_u(((*l_72) = 0x61L), (0x1FL >= p_51))))
                    {
                        return &g_85;
                    }
                    else
                    {
                        (*l_121) = l_71[1][0][2];
                    }
                }
                else
                {
                    char l_141[9] = {0x41L, 0xA5L, 0x41L, 0xA5L, 0x41L, 0xA5L, 0x41L, 0xA5L, 0x41L};
                    int i;
                    for (l_110 = 3; (l_110 >= 0); l_110 -= 1)
                    {
                        if (g_54)
                            break;
                    }
                    for (p_47 = (-8); (p_47 != (-7)); p_47++)
                    {
                        int l_143[5][6] = {{1L, 0x74CFE09AL, 1L, (-1L), 0x6656B126L, 0x7CC6476DL}, {1L, 0x74CFE09AL, 1L, (-1L), 0x6656B126L, 0x7CC6476DL}, {1L, 0x74CFE09AL, 1L, (-1L), 0x6656B126L, 0x7CC6476DL}, {1L, 0x74CFE09AL, 1L, (-1L), 0x6656B126L, 0x7CC6476DL}, {1L, 0x74CFE09AL, 1L, (-1L), 0x6656B126L, 0x7CC6476DL}};
                        int l_144 = 0L;
                        int i, j;
                        (*l_113) &= l_131[4][2][1];
                        ++l_145[4];
                        (*l_125) &= g_87;
                    }
                }
                g_103[4] &= (!(&g_103[4] == &l_133));
            }
            else
            {
                int **l_148 = &l_92;
                (*l_148) = (void*)0;
            }
        }
        else
        {
            int *l_149 = &g_103[4];
            (*l_149) = 0xD5F3CC42L;
        }
        for (l_133 = 0; (l_133 == 10); l_133++)
        {
            int *l_160 = &g_54;
            int l_193 = (-1L);
            int l_195[8][5][6] = {{{4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}}, {{4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}}, {{4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}}, {{4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}}, {{4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}}, {{4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}}, {{4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}}, {{4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}, {4L, (-1L), 0x9281E620L, (-1L), 4L, (-1L)}}};
            int i, j, k;
            for (p_50 = 0; (p_50 == 10); p_50 = safe_add_func_uint32_t_u_u(p_50, 2))
            {
                unsigned *l_154[4][2][1] = {{{&g_155}, {&g_155}}, {{&g_155}, {&g_155}}, {{&g_155}, {&g_155}}, {{&g_155}, {&g_155}}};
                int l_165 = 0x22C4725CL;
                int *l_169 = &l_165;
                int l_196 = 0x0D427A97L;
                int i, j, k;
                if ((func_58(&g_54, (g_155++), p_47, (((((g_35 | ((*l_102) |= 0xE14DL)) ^ g_35) > p_50) & 3UL) ^ 1UL)) || l_131[1][0][0]))
                {
                    int *l_159[2];
                    int **l_158 = &l_159[0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_159[i] = &l_131[4][2][1];
                    (*l_158) = p_48;
                    return l_160;
                }
                else
                {
                    int *l_166 = &g_103[0];
                    int l_190 = 1L;
                    int l_192 = 0x5B6209F6L;
                    int l_194 = 0x94E00818L;
                    unsigned short l_197 = 1UL;
                    (*l_166) = (((255UL == (safe_add_func_int16_t_s_s((p_51 == g_88), p_47))) >= (((0xB1EDL | (safe_add_func_uint32_t_u_u((l_154[3][0][0] == &g_155), ((l_64 || (g_103[2] & p_49)) != p_47)))) == g_54) < l_165)) < 1L);
                    if ((safe_add_func_int32_t_s_s((func_58(l_169, (g_103[5] & 0xF0A9B80DL), (*l_169), p_49) <= 65533UL), (p_51 && 0L))))
                    {
                        int *l_170 = &l_64;
                        int **l_171 = &l_170;
                        short *l_180[5];
                        short **l_179 = &l_180[0];
                        short *l_182 = &g_99[0];
                        short **l_181 = &l_182;
                        unsigned short *l_183 = &g_184;
                        char *l_185[8][5] = {{&g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132}, {&g_132, &g_132, &g_132, &g_132, &g_132}};
                        int l_186 = 5L;
                        int *l_187 = (void*)0;
                        int *l_188 = (void*)0;
                        int *l_189[7][10][3] = {{{&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}}, {{&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}}, {{&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}}, {{&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}}, {{&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}}, {{&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}}, {{&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}, {&g_54, (void*)0, &l_131[4][2][1]}}};
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_180[i] = (void*)0;
                        (*l_171) = l_170;
                        g_85 = (safe_add_func_int16_t_s_s(((g_132 ^= (((*l_102) = l_174) <= (safe_mod_func_int16_t_s_s((255UL || (safe_rshift_func_uint8_t_u_s((((*l_183) &= (((*l_179) = &g_99[1]) == ((*l_181) = &g_99[0]))) <= p_49), 0))), g_99[0])))) >= ((*p_48) & l_64)), g_99[1]));
                        if ((*p_48))
                            continue;
                        l_197++;
                    }
                    else
                    {
                        (*l_169) = (*p_48);
                        if ((*l_169))
                            continue;
                    }
                    (*l_166) = (4294967293UL ^ 4294967295UL);
                    for (g_85 = (-15); (g_85 != 24); g_85 = safe_add_func_int16_t_s_s(g_85, 1))
                    {
                        (*l_166) = g_103[5];
                        return p_48;
                    }
                }
            }
            for (g_132 = 0; (g_132 < (-3)); g_132 = safe_sub_func_uint16_t_u_u(g_132, 4))
            {
                int *l_204 = (void*)0;
                int *l_205 = &l_131[4][0][0];
                int *l_206 = &l_131[4][2][1];
                int l_207 = 1L;
                int *l_208 = &l_191[3];
                int *l_209 = &l_131[1][7][1];
                int *l_210 = &l_64;
                int *l_211 = &g_103[5];
                int *l_212 = &l_195[2][1][5];
                int *l_213 = &g_103[2];
                int *l_214 = &l_193;
                int *l_215 = &l_131[2][3][0];
                int *l_216 = (void*)0;
                int *l_217 = (void*)0;
                int *l_218 = (void*)0;
                int *l_219 = (void*)0;
                int *l_220 = &l_195[4][3][4];
                int *l_221 = &l_195[1][1][0];
                int *l_222 = &g_85;
                int *l_223 = &l_191[3];
                int *l_224 = &g_103[5];
                int *l_225 = &l_191[3];
                int *l_226 = &l_191[1];
                int *l_227 = &l_131[2][4][0];
                int *l_228 = &l_64;
                int *l_229 = &l_193;
                int *l_230[6][5] = {{(void*)0, (void*)0, &l_191[0], (void*)0, (void*)0}, {(void*)0, (void*)0, &l_191[0], (void*)0, (void*)0}, {(void*)0, (void*)0, &l_191[0], (void*)0, (void*)0}, {(void*)0, (void*)0, &l_191[0], (void*)0, (void*)0}, {(void*)0, (void*)0, &l_191[0], (void*)0, (void*)0}, {(void*)0, (void*)0, &l_191[0], (void*)0, (void*)0}};
                int i, j;
                l_231--;
            }
        }
    }
lbl_319:
    for (g_132 = 0; (g_132 > (-13)); g_132--)
    {
        int *l_236 = &l_131[3][5][1];
        int *l_237 = &l_131[4][2][1];
        int l_238 = 0L;
        int *l_239 = &g_103[5];
        int *l_240 = (void*)0;
        int *l_241 = (void*)0;
        int *l_242 = &l_131[4][2][1];
        int *l_243[6];
        unsigned *l_260 = &g_261;
        unsigned *l_264 = &g_265[5][1];
        unsigned char *l_297 = &l_231;
        int i;
        for (i = 0; i < 6; i++)
            l_243[i] = &g_103[0];
        l_249--;
        if (((safe_mod_func_int32_t_s_s((((safe_rshift_func_int16_t_s_s((*l_239), 7)) | func_58(&g_245, p_47, p_50, (safe_lshift_func_uint16_t_u_s((((*l_264) = (p_47 < (((*l_102) = (((safe_add_func_uint32_t_u_u(((*l_239) <= g_155), ((*l_260)--))) || l_247[2][3]) & (p_50 | 0L))) >= p_50))) ^ (-1L)), g_245)))) != g_155), (*p_48))) > p_50))
        {
            unsigned short l_268 = 65527UL;
            int *l_275[5];
            unsigned *l_278 = (void*)0;
            unsigned *l_279 = &g_155;
            int i;
            for (i = 0; i < 5; i++)
                l_275[i] = &g_103[7];
            (*l_239) = ((*p_48) = ((safe_lshift_func_uint8_t_u_u(l_268, (safe_mod_func_int8_t_s_s(((65527UL | ((*l_102) = p_47)) && (((safe_mod_func_uint16_t_u_u((((*l_264)--) ^ (g_54 | ((!((l_131[2][8][0] = (func_58(&l_131[4][2][1], ((*l_279) = (g_155 == ((g_99[0] ^ func_58(l_275[2], (safe_add_func_uint8_t_u_u(func_58(&l_238, p_50, (*g_83), p_47), 0x59L)), (*l_236), p_51)) || p_51))), p_47, g_184) == 0UL)) ^ g_54)) != g_132))), 0x1E43L)) <= g_261) > 0x11E7L)), l_246)))) >= 0UL));
            (*l_239) |= ((safe_lshift_func_int16_t_s_s(func_58(&g_85, g_261, (*g_83), g_265[0][1]), l_282)) != (p_47 ^ ((g_265[0][0] == (safe_rshift_func_uint16_t_u_u((((g_265[5][1] != (*p_48)) || g_54) != 0x25L), p_50))) == p_50)));
            return p_48;
        }
        else
        {
            int **l_285 = &l_242;
            (*l_285) = &g_103[5];
            for (g_245 = 0; (g_245 > 8); ++g_245)
            {
                unsigned l_294 = 0x66876D67L;
                for (l_282 = 8; (l_282 >= 0); l_282 -= 1)
                {
                    unsigned *l_290 = &g_155;
                    int i;
                    g_103[l_282] = g_103[l_282];
                    for (p_50 = 0; (p_50 <= 1); p_50 += 1)
                    {
                        int i, j;
                        (*p_48) = (safe_add_func_uint16_t_u_u(((func_58(p_48, ((-7L) <= ((((*l_285) = (*l_285)) != (void*)0) >= g_265[(l_282 + 1)][p_50])), p_49, ((void*)0 != &g_265[3][1])) == (*g_83)) || g_265[(l_282 + 1)][p_50]), p_51));
                        (*l_239) &= ((*l_237) = (l_290 != (void*)0));
                    }
                    for (g_85 = 0; (g_85 < 6); g_85 = safe_add_func_int16_t_s_s(g_85, 6))
                    {
                        if (g_184)
                            goto lbl_293;
                    }
                    --l_294;
                }
            }
            g_103[3] ^= ((*l_236) = ((l_297 == &l_71[1][0][2]) >= (*p_48)));
            g_299 = l_298;
        }
        if ((*l_237))
            break;
    }
    if ((*p_48))
    {
        char *l_302 = &l_282;
        int l_303 = (-1L);
        int *l_304 = &g_85;
        int *l_305 = &l_303;
        int *l_306 = &g_103[5];
        int *l_307 = &l_131[1][1][0];
        int *l_308 = &g_85;
        int *l_309 = (void*)0;
        int *l_310[3];
        unsigned l_311 = 1UL;
        int i;
        for (i = 0; i < 3; i++)
            l_310[i] = &g_245;
        for (g_85 = 18; (g_85 <= 16); g_85--)
        {
            (*p_48) ^= ((p_49 <= p_50) & (&g_132 != l_302));
        }
        (*p_48) = l_303;
        l_311--;
    }
    else
    {
        int *l_318 = &l_131[4][2][1];
        int l_344 = 0L;
        int l_346 = 0L;
        int l_347 = 0x53C98BD1L;
        int l_349 = 0xB5F09633L;
        int l_352 = 0x0D5C5E34L;
        int l_353 = 0xF7037521L;
        int l_354 = 0x6C8784A2L;
        int **l_366 = &l_298;
        for (g_54 = 24; (g_54 != 19); g_54--)
        {
            char l_334 = 0x76L;
            unsigned char l_335 = 255UL;
            int l_343 = 0xDA2389F4L;
            int l_345 = 0x25946A8EL;
            int l_348[2];
            unsigned l_363 = 18446744073709551607UL;
            int i;
            for (i = 0; i < 2; i++)
                l_348[i] = 0L;
            if ((0x6EB9916FL != (p_50 <= (safe_sub_func_uint8_t_u_u((&g_99[0] == &g_99[1]), 255UL)))))
            {
                int l_320 = 0x8C4F9A4BL;
                for (l_248 = 1; (l_248 >= 0); l_248 -= 1)
                {
                    return p_48;
                }
                if (l_249)
                    goto lbl_319;
                (*l_318) = l_320;
                for (g_261 = (-12); (g_261 != 27); g_261 = safe_add_func_uint8_t_u_u(g_261, 6))
                {
                    unsigned *l_323 = &g_265[5][1];
                    int **l_326 = (void*)0;
                    int **l_327 = (void*)0;
                    int **l_328 = &l_318;
                    unsigned *l_329 = (void*)0;
                    unsigned *l_330 = &g_155;
                    unsigned *l_331 = (void*)0;
                    unsigned *l_332 = &g_333;
                }
            }
            else
            {
                int *l_338 = &g_245;
                int *l_339 = &l_131[1][8][1];
                int *l_340 = &g_103[5];
                int *l_341 = (void*)0;
                int *l_342[10] = {&g_103[4], &g_103[4], (void*)0, &g_103[4], &g_103[4], (void*)0, &g_103[4], &g_103[4], (void*)0, &g_103[4]};
                unsigned short l_355 = 0UL;
                int i;
                ++l_355;
            }
            if (g_35)
                goto lbl_319;
            for (g_261 = (-21); (g_261 > 21); g_261++)
            {
                int *l_360 = &g_245;
                int *l_361 = (void*)0;
                int *l_362[10][3] = {{&g_85, &g_85, &l_349}, {&g_85, &g_85, &l_349}, {&g_85, &g_85, &l_349}, {&g_85, &g_85, &l_349}, {&g_85, &g_85, &l_349}, {&g_85, &g_85, &l_349}, {&g_85, &g_85, &l_349}, {&g_85, &g_85, &l_349}, {&g_85, &g_85, &l_349}, {&g_85, &g_85, &l_349}};
                int i, j;
                l_363++;
            }
        }
        (*l_318) = ((g_99[0] = g_54) <= (~(*l_318)));
        p_48 = &g_103[7];
        (*l_366) = p_48;
    }
    (*p_48) = func_58(&l_131[4][5][1], ((((void*)0 != &l_249) >= func_58(p_48, g_261, p_50, g_245)) || ((*l_367) = p_51)), (*g_83), g_54);
    return &g_103[5];
}







static int func_58(int * p_59, unsigned p_60, unsigned char p_61, char p_62)
{
    int l_79[5][6] = {{0x2C9EA21FL, (-6L), 0x65DBDCDBL, (-6L), 0x2C9EA21FL, 0xCDD50170L}, {0x2C9EA21FL, (-6L), 0x65DBDCDBL, (-6L), 0x2C9EA21FL, 0xCDD50170L}, {0x2C9EA21FL, (-6L), 0x65DBDCDBL, (-6L), 0x2C9EA21FL, 0xCDD50170L}, {0x2C9EA21FL, (-6L), 0x65DBDCDBL, (-6L), 0x2C9EA21FL, 0xCDD50170L}, {0x2C9EA21FL, (-6L), 0x65DBDCDBL, (-6L), 0x2C9EA21FL, 0xCDD50170L}};
    unsigned char *l_80 = (void*)0;
    unsigned short *l_86 = &g_87;
    unsigned l_89 = 4294967293UL;
    int *l_90[9][6][4] = {{{&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}}, {{&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}}, {{&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}}, {{&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}}, {{&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}}, {{&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}}, {{&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}}, {{&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}}, {{&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}, {&l_79[3][3], &g_54, &g_54, &l_79[3][3]}}};
    unsigned short l_91 = 0x2E77L;
    int i, j, k;
    l_91 = (safe_sub_func_int8_t_s_s((((safe_lshift_func_int8_t_s_u((+(safe_rshift_func_uint16_t_u_u(l_79[3][3], (((void*)0 != l_80) || (g_88 = (((*l_86) ^= (0UL <= (safe_mod_func_int16_t_s_s((((void*)0 != g_83) || ((g_85 = g_35) ^ (g_54 == l_79[4][1]))), p_60)))) && g_85)))))), 7)) && l_79[2][3]) == l_89), g_35));
    return (*p_59);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_88, "g_88", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_99[i], "g_99[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_103[i], "g_103[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_155, "g_155", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_265[i][j], "g_265[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_350, "g_350", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_378[i], "g_378[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_415, "g_415", print_hash_value);
    transparent_crc(g_419, "g_419", print_hash_value);
    transparent_crc(g_429, "g_429", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_597, "g_597", print_hash_value);
    transparent_crc(g_613, "g_613", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_715, "g_715", print_hash_value);
    transparent_crc(g_758, "g_758", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_773[i], "g_773[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_796, "g_796", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
