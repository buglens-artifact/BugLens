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



static char g_9 = (-1L);
static char g_12 = (-1L);
static char *g_11 = &g_12;
static unsigned g_62 = 4294967295UL;
static int g_63[3][5][1] = {{{0x51B4373CL}, {0x51B4373CL}, {0x51B4373CL}, {0x51B4373CL}, {0x51B4373CL}}, {{0x51B4373CL}, {0x51B4373CL}, {0x51B4373CL}, {0x51B4373CL}, {0x51B4373CL}}, {{0x51B4373CL}, {0x51B4373CL}, {0x51B4373CL}, {0x51B4373CL}, {0x51B4373CL}}};
static int *g_83 = &g_63[0][4][0];
static int **g_82 = &g_83;
static short g_85 = (-1L);
static unsigned char g_97 = 248UL;
static volatile unsigned char g_100 = 4UL;
static const unsigned char *g_108 = &g_97;
static const unsigned char **g_107 = &g_108;
static const unsigned char *** volatile g_106[10] = {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107};
static const unsigned char *** volatile g_109 = &g_107;
static const int *g_113 = &g_63[1][1][0];
static const int ** volatile g_112 = &g_113;
static char **g_120 = &g_11;
static char *** volatile g_119 = &g_120;
static char g_131 = (-1L);
static unsigned *g_148 = &g_62;
static unsigned **g_147[5][1][9] = {{{&g_148, &g_148, (void*)0, &g_148, &g_148, (void*)0, &g_148, &g_148, &g_148}}, {{&g_148, &g_148, (void*)0, &g_148, &g_148, (void*)0, &g_148, &g_148, &g_148}}, {{&g_148, &g_148, (void*)0, &g_148, &g_148, (void*)0, &g_148, &g_148, &g_148}}, {{&g_148, &g_148, (void*)0, &g_148, &g_148, (void*)0, &g_148, &g_148, &g_148}}, {{&g_148, &g_148, (void*)0, &g_148, &g_148, (void*)0, &g_148, &g_148, &g_148}}};
static short g_201[8][2][8] = {{{0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}, {0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}}, {{0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}, {0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}}, {{0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}, {0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}}, {{0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}, {0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}}, {{0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}, {0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}}, {{0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}, {0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}}, {{0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}, {0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}}, {{0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}, {0xC497L, 0L, 0x9B80L, 1L, 0x1BF6L, 0x3F6DL, 0x3F6DL, 0x1BF6L}}};
static const char g_217 = (-1L);
static volatile int g_258 = 0xD47F5433L;
static unsigned char g_263 = 0xC1L;
static const int ** volatile g_266 = &g_113;
static short g_275 = 0xBD5DL;
static unsigned g_288 = 8UL;
static short *g_295 = (void*)0;
static short *g_296 = &g_275;
static short *g_297 = (void*)0;
static int g_313[8][8][1] = {{{0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}}, {{0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}}, {{0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}}, {{0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}}, {{0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}}, {{0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}}, {{0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}}, {{0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}, {0xB0C70AD7L}}};
static unsigned char **g_319 = (void*)0;
static unsigned char ***g_318 = &g_319;
static int * volatile g_320 = &g_63[2][3][0];
static int * volatile g_322 = &g_63[0][2][0];
static volatile char g_360 = 0x51L;
static unsigned *g_363 = (void*)0;
static const short *g_374[4] = {&g_85, &g_85, &g_85, &g_85};
static const short **g_373 = &g_374[0];
static unsigned short g_378 = 0x6FDBL;
static short g_381 = 7L;
static int * const volatile g_389 = &g_63[1][0][0];
static int * volatile g_391 = &g_63[1][2][0];
static int * volatile g_397[5][4] = {{(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0, (void*)0}};
static int **g_431 = &g_83;
static unsigned g_566 = 0xBAECFB9EL;
static int * volatile g_586[2] = {&g_63[0][1][0], &g_63[0][1][0]};
static int * volatile g_587 = (void*)0;
static const int *g_611 = &g_63[0][3][0];
static const int ** volatile g_612 = &g_611;
static int ** const volatile g_613 = (void*)0;
static const int ** volatile g_618 = &g_611;
static const int ** volatile g_623 = (void*)0;
static unsigned char g_659 = 0xB0L;
static unsigned char ***g_695[5] = {&g_319, &g_319, &g_319, &g_319, &g_319};
static unsigned short g_701 = 0xEF5AL;



static int func_1(void);
static int * func_2(unsigned p_3, int * p_4);
static const int * func_16(int * p_17, char * p_18, int * p_19);
static int * func_20(char p_21, char p_22, short p_23, char * const p_24, short p_25);
static unsigned short func_34(unsigned short p_35, int p_36, int p_37, unsigned short p_38);
static int func_39(char * p_40, unsigned p_41, int * p_42, int * p_43);
static char * func_44(const short p_45);
static short func_50(short p_51, char * p_52);
static char * func_53(int * p_54, unsigned p_55, unsigned p_56, unsigned short p_57, int p_58);
static int * func_59(unsigned p_60);
static int func_1(void)
{
    int l_7 = (-1L);
    char *l_8 = &g_9;
    short l_10 = 0x7597L;
    int l_15[2];
    int **l_614 = &g_83;
    unsigned char * const l_656 = &g_263;
    unsigned char * const *l_655 = &l_656;
    unsigned l_673[6][4] = {{18446744073709551615UL, 0x4367ACB1L, 0xDEB85D08L, 0x4367ACB1L}, {18446744073709551615UL, 0x4367ACB1L, 0xDEB85D08L, 0x4367ACB1L}, {18446744073709551615UL, 0x4367ACB1L, 0xDEB85D08L, 0x4367ACB1L}, {18446744073709551615UL, 0x4367ACB1L, 0xDEB85D08L, 0x4367ACB1L}, {18446744073709551615UL, 0x4367ACB1L, 0xDEB85D08L, 0x4367ACB1L}, {18446744073709551615UL, 0x4367ACB1L, 0xDEB85D08L, 0x4367ACB1L}};
    unsigned char ***l_694 = &g_319;
    const unsigned l_712 = 0xF749C664L;
    char *l_714 = &g_12;
    unsigned char l_735[8] = {255UL, 255UL, 255UL, 255UL, 255UL, 255UL, 255UL, 255UL};
    int i, j;
    for (i = 0; i < 2; i++)
        l_15[i] = 0x7F3E76E5L;
    (*l_614) = func_2(((0UL <= (safe_mul_func_uint16_t_u_u(((0xD4L > (0x14L > (l_10 = ((*l_8) = l_7)))) & (g_11 != (void*)0)), (safe_div_func_int8_t_s_s((l_15[1] > l_7), 0x58L))))) == l_15[0]), &l_15[1]);
    for (g_381 = (-5); (g_381 > (-12)); g_381--)
    {
        const unsigned short l_617 = 65533UL;
        unsigned short l_644 = 0x176FL;
        int l_648 = 0x4F99D82CL;
        unsigned char *l_661 = &g_97;
        unsigned char **l_660[10] = {(void*)0, &l_661, (void*)0, &l_661, (void*)0, &l_661, (void*)0, &l_661, (void*)0, &l_661};
        char **l_682 = &l_8;
        int i;
        for (g_85 = 1; (g_85 >= 0); g_85 -= 1)
        {
            int l_635 = 0xD448C036L;
            unsigned l_654[8];
            unsigned char * const l_658 = &g_659;
            unsigned char * const *l_657[2][5][10] = {{{&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}, {&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}, {&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}, {&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}, {&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}}, {{&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}, {&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}, {&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}, {&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}, {&l_656, &l_658, &l_656, (void*)0, &l_656, (void*)0, &l_658, &l_658, &l_656, (void*)0}}};
            int i, j, k;
            for (i = 0; i < 8; i++)
                l_654[i] = 0x02D2A682L;
        }
        for (l_7 = 9; (l_7 >= 3); l_7 -= 1)
        {
            const unsigned char *l_702 = (void*)0;
            int l_707[2];
            char *l_716 = (void*)0;
            int l_717 = 0x34F85D48L;
            int i;
            for (i = 0; i < 2; i++)
                l_707[i] = 0xBA5681ADL;
            if ((((*l_655) != l_702) && (+(*g_297))))
            {
                int *l_711 = &l_648;
                char *l_715 = &g_12;
                for (g_62 = 0; (g_62 <= 1); g_62 += 1)
                {
                    for (g_9 = 6; (g_9 >= 0); g_9 -= 1)
                    {
                        short *l_708[7] = {&l_10, &l_10, &g_201[4][0][7], &l_10, &l_10, &g_201[4][0][7], &l_10};
                        int i, j;
                        (*l_711) = (func_39(((*l_682) = (*g_120)), ((g_201[2][0][6] = (l_707[0] = ((*g_295) = (((safe_div_func_int8_t_s_s(l_15[g_62], l_15[g_62])) >= l_15[g_62]) < (safe_mod_func_uint32_t_u_u((l_15[g_62] <= 1L), (~l_15[g_62]))))))) <= ((65528UL != (safe_mul_func_int8_t_s_s(0L, l_15[g_62]))) || l_673[g_62][(g_62 + 2)])), &l_15[g_62], l_711) & 0x0DL);
                    }
                }
                for (g_131 = 3; (g_131 >= 0); g_131 -= 1)
                {
                    short l_718[8][10][2] = {{{0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}}, {{0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}}, {{0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}}, {{0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}}, {{0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}}, {{0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}}, {{0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}}, {{0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}, {0x8A3DL, 0x8CF8L}}};
                    int i, j, k;
                    for (g_9 = 3; (g_9 >= 0); g_9 -= 1)
                    {
                        int i, j;
                        (*g_83) = (l_673[g_131][g_9] >= l_707[0]);
                        (**g_82) = 6L;
                        if (l_712)
                            continue;
                    }
                    for (g_659 = 0; (g_659 <= 0); g_659 += 1)
                    {
                        char *l_713[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_713[i] = (void*)0;
                        (**g_82) = (((*l_682) = l_713[0]) == (l_715 = (l_714 = ((*g_120) = (*g_120)))));
                    }
                    for (g_378 = 0; (g_378 <= 0); g_378 += 1)
                    {
                        int i, j, k;
                    }
                    if ((*l_711))
                        continue;
                }
            }
            else
            {
                char l_733[10];
                int *l_734 = &l_707[0];
                int i;
                for (i = 0; i < 10; i++)
                    l_733[i] = 0xC0L;
                (*l_734) = (((((safe_mul_func_uint16_t_u_u(g_201[0][1][3], (g_85 = ((**l_614) = (((*g_296) = ((*g_297) | (safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(0x02L, (safe_div_func_uint32_t_u_u(((*g_148) = l_617), ((**l_614) && (*g_391)))))) == l_648), (safe_add_func_int16_t_s_s((**g_373), l_707[0])))), 0)) >= 0x3CL), l_733[6])))) || 0x7A83L))))) <= 1L) < 0xCA1E0724L) && l_617) > g_97);
                return l_644;
            }
        }
        l_648 = 0x3E42E893L;
    }
    return l_735[7];
}







static int * func_2(unsigned p_3, int * p_4)
{
    char *l_28[9] = {&g_9, &g_9, &g_12, &g_9, &g_9, &g_12, &g_9, &g_9, &g_12};
    unsigned *l_61 = &g_62;
    int l_290 = (-1L);
    short *l_294 = &g_201[0][1][3];
    short **l_293[4][8][8] = {{{&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}}, {{&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}}, {{&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}}, {{&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}, {&l_294, &l_294, &l_294, &l_294, &l_294, &l_294, &l_294, (void*)0}}};
    unsigned *l_298 = (void*)0;
    unsigned *l_299 = &g_288;
    unsigned short *l_582 = (void*)0;
    unsigned short *l_583 = &g_378;
    int i, j, k;
    (*g_612) = func_16(func_20(((safe_add_func_uint16_t_u_u((l_28[6] == (void*)0), (safe_mul_func_uint16_t_u_u(((*l_583) = (safe_unary_minus_func_int8_t_s(((((safe_lshift_func_uint16_t_u_s(func_34(p_3, p_3, func_39(func_44(((safe_mul_func_int16_t_s_s((safe_div_func_int16_t_s_s(((*l_294) = func_50(g_9, func_53(func_59(((*l_61) = p_3)), l_290, ((*l_299) = (safe_add_func_uint32_t_u_u(((g_297 = (g_296 = (g_295 = &g_275))) != &g_275), (-6L)))), l_290, l_290))), 0xB783L)), l_290)) == p_3)), l_290, p_4, p_4), p_3), 11)) | g_217) ^ l_290) ^ p_3)))), 1L)))) & 0x7DD8L), p_3, p_3, (*g_120), p_3), (*g_120), g_363);
    (*p_4) = 0xD32B4419L;
    return p_4;
}







static const int * func_16(int * p_17, char * p_18, int * p_19)
{
    const unsigned char **l_595 = (void*)0;
    unsigned char *l_597[10][2] = {{&g_97, &g_97}, {&g_97, &g_97}, {&g_97, &g_97}, {&g_97, &g_97}, {&g_97, &g_97}, {&g_97, &g_97}, {&g_97, &g_97}, {&g_97, &g_97}, {&g_97, &g_97}, {&g_97, &g_97}};
    unsigned char **l_596 = &l_597[3][1];
    char *l_604 = &g_131;
    int l_605 = 0x924F2173L;
    int l_606 = 0x875D5389L;
    int i, j;
    for (g_378 = (-20); (g_378 <= 36); g_378++)
    {
        for (g_12 = (-1); (g_12 == 21); g_12 = safe_add_func_int8_t_s_s(g_12, 6))
        {
            return p_19;
        }
    }
    (*p_17) = ((safe_lshift_func_uint16_t_u_u((l_595 == (l_596 = l_596)), (safe_mod_func_uint8_t_u_u((((func_39((*g_120), ((((safe_add_func_int16_t_s_s((**g_373), 0x1D83L)) >= (safe_mul_func_int8_t_s_s((*p_18), ((*l_604) = (&g_120 != (void*)0))))) > (g_313[1][2][0] < (*g_297))) & l_605), &l_605, &l_605) >= 6L) & l_606) | l_606), 0xB8L)))) <= l_606);
    for (g_131 = (-12); (g_131 <= 24); ++g_131)
    {
        const short l_609 = 5L;
        const int *l_610 = &l_606;
        l_606 = l_609;
        return p_17;
    }
    return g_611;
}







static int * func_20(char p_21, char p_22, short p_23, char * const p_24, short p_25)
{
    int *l_588 = &g_63[2][1][0];
    (*l_588) = (safe_div_func_int16_t_s_s((-1L), p_21));
    return &g_63[2][0][0];
}







static unsigned short func_34(unsigned short p_35, int p_36, int p_37, unsigned short p_38)
{
    int l_534[10][4] = {{1L, 0x69AE72D6L, 7L, 0x69AE72D6L}, {1L, 0x69AE72D6L, 7L, 0x69AE72D6L}, {1L, 0x69AE72D6L, 7L, 0x69AE72D6L}, {1L, 0x69AE72D6L, 7L, 0x69AE72D6L}, {1L, 0x69AE72D6L, 7L, 0x69AE72D6L}, {1L, 0x69AE72D6L, 7L, 0x69AE72D6L}, {1L, 0x69AE72D6L, 7L, 0x69AE72D6L}, {1L, 0x69AE72D6L, 7L, 0x69AE72D6L}, {1L, 0x69AE72D6L, 7L, 0x69AE72D6L}, {1L, 0x69AE72D6L, 7L, 0x69AE72D6L}};
    unsigned char l_537 = 0x76L;
    int *l_546 = &g_63[0][2][0];
    int i, j;
    for (g_378 = 28; (g_378 <= 7); --g_378)
    {
        char l_535 = 0x87L;
        int *l_536[7][7][5] = {{{&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}}, {{&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}}, {{&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}}, {{&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}}, {{&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}}, {{&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}}, {{&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}, {&l_534[7][3], &l_534[4][2], &l_534[1][0], &l_534[4][2], &l_534[2][3]}}};
        int l_552 = 0x42CA2F4BL;
        char l_569 = 1L;
        short **l_578 = &g_297;
        int i, j, k;
        for (g_381 = 0; (g_381 <= 11); ++g_381)
        {
            int *l_533[5];
            unsigned char l_539 = 0x2DL;
            char *l_561 = &g_9;
            int i;
            for (i = 0; i < 5; i++)
                l_533[i] = &g_63[2][4][0];
            l_534[4][2] = (safe_rshift_func_uint16_t_u_s(((void*)0 == &g_378), 9));
            (*g_322) = (*g_322);
            if (l_535)
                continue;
            if ((l_536[1][0][2] == (void*)0))
            {
                const unsigned char l_538 = 0x21L;
                for (g_288 = 0; (g_288 <= 0); g_288 += 1)
                {
                    int i, j, k;
                    l_537 = (g_63[(g_288 + 2)][(g_288 + 3)][g_288] || (*g_108));
                    if (l_538)
                        continue;
                    (*g_322) = p_37;
                    l_539 = l_534[4][2];
                }
                (*g_322) = (safe_div_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((*g_296), 65532UL)), (1UL & (*g_297))));
            }
            else
            {
                const unsigned l_544 = 4294967294UL;
                int l_568 = 0L;
                short **l_580 = &g_297;
                short ***l_579 = &l_580;
                if ((l_534[4][2] = p_38))
                {
                    (*g_320) = l_544;
                    (*g_82) = l_533[3];
                    (*g_82) = l_536[0][1][3];
                }
                else
                {
                    int *l_545[8][4] = {{(void*)0, &l_534[8][1], (void*)0, &l_534[8][1]}, {(void*)0, &l_534[8][1], (void*)0, &l_534[8][1]}, {(void*)0, &l_534[8][1], (void*)0, &l_534[8][1]}, {(void*)0, &l_534[8][1], (void*)0, &l_534[8][1]}, {(void*)0, &l_534[8][1], (void*)0, &l_534[8][1]}, {(void*)0, &l_534[8][1], (void*)0, &l_534[8][1]}, {(void*)0, &l_534[8][1], (void*)0, &l_534[8][1]}, {(void*)0, &l_534[8][1], (void*)0, &l_534[8][1]}};
                    int i, j;
                    if (l_544)
                    {
                        (*g_82) = l_545[1][0];
                    }
                    else
                    {
                        l_545[2][3] = l_545[4][3];
                        l_546 = &l_534[7][3];
                    }
                }
                for (g_131 = 0; (g_131 == 2); ++g_131)
                {
                    short **l_549[4][4][10] = {{{&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}}, {{&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}}, {{&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}}, {{&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}, {&g_295, &g_295, (void*)0, &g_296, &g_296, (void*)0, &g_295, &g_295, &g_295, &g_297}}};
                    int l_550[5][9] = {{(-3L), (-3L), 0x88C261FCL, (-9L), 0xDAA9DDF6L, (-9L), 0x88C261FCL, (-3L), (-3L)}, {(-3L), (-3L), 0x88C261FCL, (-9L), 0xDAA9DDF6L, (-9L), 0x88C261FCL, (-3L), (-3L)}, {(-3L), (-3L), 0x88C261FCL, (-9L), 0xDAA9DDF6L, (-9L), 0x88C261FCL, (-3L), (-3L)}, {(-3L), (-3L), 0x88C261FCL, (-9L), 0xDAA9DDF6L, (-9L), 0x88C261FCL, (-3L), (-3L)}, {(-3L), (-3L), 0x88C261FCL, (-9L), 0xDAA9DDF6L, (-9L), 0x88C261FCL, (-3L), (-3L)}};
                    unsigned char *l_551[10][6] = {{&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}, {&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}, {&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}, {&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}, {&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}, {&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}, {&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}, {&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}, {&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}, {&l_537, &l_537, &l_537, &g_97, &l_537, &g_97}};
                    int *l_567 = (void*)0;
                    int i, j, k;
                    if (p_36)
                        break;
                    l_550[1][1] = ((*l_546) = (2L == (p_37 > (+((void*)0 == l_549[1][2][0])))));
                    l_552 = ((void*)0 != l_551[7][4]);
                    for (g_288 = (-8); (g_288 <= 39); g_288 = safe_add_func_uint8_t_u_u(g_288, 3))
                    {
                        int l_562 = 0x8D053B8AL;
                        unsigned *l_565[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_565[i] = &g_566;
                        (*l_546) = (safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint16_t_u_u(((l_568 = (safe_mod_func_int32_t_s_s(l_562, l_544))) != 0x0DL), 0x50F8L)) && l_569), 1));
                        if (p_35)
                            continue;
                    }
                }
                l_568 = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(((&g_322 == (void*)0) != 0L), (+(safe_rshift_func_int8_t_s_s((l_578 != ((*l_579) = &g_296)), (safe_unary_minus_func_int16_t_s((-8L)))))))), ((*g_322) = p_36))), (5UL < l_544)));
            }
        }
        for (g_566 = 0; g_566 < 5; g_566 += 1)
        {
            for (g_85 = 0; g_85 < 4; g_85 += 1)
            {
                g_397[g_566][g_85] = &l_534[5][2];
            }
        }
    }
    (*l_546) = p_36;
    return g_217;
}







static int func_39(char * p_40, unsigned p_41, int * p_42, int * p_43)
{
    int l_518 = 7L;
    char ***l_519[6] = {&g_120, &g_120, &g_120, &g_120, &g_120, &g_120};
    int i;
    for (g_263 = 22; (g_263 < 6); g_263 = safe_sub_func_int16_t_s_s(g_263, 7))
    {
        (*g_82) = p_42;
        (*g_82) = p_42;
    }
    for (g_275 = 0; (g_275 >= (-11)); g_275--)
    {
        char l_516 = 0xCDL;
        const int *l_517 = &g_63[1][2][0];
        l_517 = l_517;
    }
    if (l_518)
    {
        unsigned char l_526 = 253UL;
        (*p_42) = ((g_360 || (l_519[1] != (void*)0)) == (safe_mul_func_uint8_t_u_u((p_40 == (void*)0), (safe_add_func_uint16_t_u_u(0xF96BL, (safe_lshift_func_int8_t_s_u(l_526, 0)))))));
    }
    else
    {
        (*g_82) = p_42;
    }
    (*p_43) = (*p_43);
    return p_41;
}







static char * func_44(const short p_45)
{
    unsigned **l_477[8] = {&g_148, &g_148, &g_363, &g_148, &g_148, &g_363, &g_148, &g_148};
    short *l_499 = &g_201[0][1][3];
    int l_502 = 0L;
    char *l_504[6] = {&g_9, &g_9, &g_9, &g_9, &g_9, &g_9};
    int i;
lbl_505:
    l_477[2] = l_477[2];
    if (p_45)
    {
        unsigned char l_500 = 0x2FL;
        for (g_9 = 0; (g_9 == 29); g_9 = safe_add_func_uint32_t_u_u(g_9, 6))
        {
            char l_496 = 0x22L;
            unsigned char *l_501 = &g_97;
            int *l_503 = &l_502;
            (*l_503) = (safe_lshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((1L != (safe_add_func_uint32_t_u_u(((safe_div_func_uint16_t_u_u((0x4C46L > (safe_mul_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(((l_496 = g_313[0][7][0]) == (g_100 < (safe_mod_func_int8_t_s_s((0L >= ((*l_501) = ((0x6CL >= (((*g_297) != (l_499 != (*g_373))) != l_500)) ^ 0xA6227AADL))), p_45)))), l_500)) && 0L), p_45))), l_502)) < l_502), p_45))), (**g_120))), 0x40L)), 14));
        }
        for (g_381 = 3; (g_381 >= 0); g_381 -= 1)
        {
            return l_504[3];
        }
    }
    else
    {
        if (g_9)
            goto lbl_505;
        for (g_275 = 25; (g_275 == 9); g_275--)
        {
            for (g_85 = 7; (g_85 == (-3)); g_85 = safe_sub_func_int32_t_s_s(g_85, 4))
            {
                char l_510[7];
                int *l_511 = &g_63[1][3][0];
                int i;
                for (i = 0; i < 7; i++)
                    l_510[i] = 0x31L;
                (*l_511) = l_510[2];
            }
        }
    }
    return l_504[4];
}







static short func_50(short p_51, char * p_52)
{
    unsigned l_412 = 18446744073709551615UL;
    int l_417 = 0L;
    int **l_429 = &g_83;
    unsigned char l_432 = 0x82L;
    char l_435 = 2L;
    int *l_436 = &g_63[2][3][0];
    unsigned char *** const l_457 = &g_319;
    if ((((*g_296) = p_51) < 0L))
    {
        short l_405[5];
        int *l_415 = (void*)0;
        int *l_416 = &g_63[1][1][0];
        int i;
        for (i = 0; i < 5; i++)
            l_405[i] = 0x55CAL;
        l_417 = (p_51 <= (safe_div_func_uint16_t_u_u((((*g_148) = (safe_mod_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((p_51 | ((l_405[1] <= ((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(l_412, 0xE98639F8L)), p_51)) < (((*l_416) = (((safe_mod_func_int8_t_s_s(l_412, (p_51 ^ (0x91BAL ^ l_412)))) != 6UL) || (*p_52))) >= l_412)), p_51)) >= (*g_11))) < l_412)), p_51)), (*g_11)))) > l_412), p_51)));
lbl_442:
        for (g_381 = 0; (g_381 < (-23)); g_381 = safe_sub_func_uint16_t_u_u(g_381, 1))
        {
            unsigned short l_420 = 65535UL;
            int l_421 = (-1L);
            char *l_426 = &g_9;
            int ***l_430[8];
            int i;
            for (i = 0; i < 8; i++)
                l_430[i] = &l_429;
            (*g_82) = l_416;
            l_421 = (*g_322);
            l_435 = ((((*g_11) | ((*l_426) = (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s(p_51, 6)), p_51)))) && (((0xA2L || (((*g_83) = ((g_82 = l_429) == (g_431 = (void*)0))) < ((*g_148) = l_432))) > (safe_add_func_int8_t_s_s(((*p_52) = (*p_52)), ((void*)0 == &g_397[1][2])))) | g_288)) == 0UL);
        }
        (*l_429) = l_436;
        for (g_9 = 0; (g_9 >= 0); g_9 -= 1)
        {
            unsigned l_440 = 0x28FD4CB0L;
            if (p_51)
            {
                unsigned l_437 = 0x8498A269L;
                (*l_429) = (void*)0;
                return l_437;
            }
            else
            {
                unsigned char l_441 = 0x85L;
                (**l_429) = (safe_mul_func_uint8_t_u_u((!l_440), l_441));
            }
            if ((*l_436))
                break;
            if ((*l_416))
                continue;
            for (l_412 = 0; (l_412 <= 0); l_412 += 1)
            {
                if (l_412)
                    goto lbl_442;
                return (*g_295);
            }
        }
    }
    else
    {
        unsigned *l_467[1][9];
        int l_469[8][10][3] = {{{4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}}, {{4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}}, {{4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}}, {{4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}}, {{4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}}, {{4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}}, {{4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}}, {{4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}, {4L, 1L, 1L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 9; j++)
                l_467[i][j] = &g_62;
        }
        for (g_12 = 0; (g_12 != 26); ++g_12)
        {
            unsigned l_449[10][4][6] = {{{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}, {{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}, {{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}, {{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}, {{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}, {{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}, {{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}, {{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}, {{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}, {{0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}, {0x4997CFD8L, 0x09D42BEFL, 4294967295UL, 1UL, 0x22676BD8L, 0xBCDDE061L}}};
            char *l_450[10][6] = {{&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}, {&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}, {&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}, {&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}, {&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}, {&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}, {&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}, {&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}, {&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}, {&g_12, &g_9, (void*)0, &g_9, &g_9, (void*)0}};
            unsigned char l_451 = 0x1AL;
            int l_452 = 0xDD08DC8BL;
            unsigned short *l_460 = &g_378;
            int i, j, k;
            (*l_436) = ((safe_rshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((l_451 = (p_51 < l_449[0][3][0])), (l_452 = (*g_11)))) && (safe_lshift_func_uint16_t_u_u((~((l_449[5][3][5] == (safe_sub_func_int32_t_s_s((p_51 == l_452), ((void*)0 != l_457)))) & (((*g_296) = ((safe_add_func_uint16_t_u_u(((*l_460) = l_449[1][2][5]), p_51)) == p_51)) != l_451))), 7))), 7)) == p_51);
            if (((*l_436) = (*g_389)))
            {
                unsigned l_468 = 3UL;
                l_452 = (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_s(((((g_9 = (*l_436)) > ((**g_119) == (*g_120))) && (safe_sub_func_uint16_t_u_u(((l_467[0][5] != l_467[0][5]) || (p_51 = ((0x63L | 0x4AL) <= ((*g_295) = l_468)))), ((*l_436) && l_452)))) > l_469[2][0][2]), l_469[2][0][2])), l_449[1][1][1]));
            }
            else
            {
                int * const l_470[5][8] = {{&l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0}, {&l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0}, {&l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0}, {&l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0}, {&l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0, &l_469[2][0][2], (void*)0}};
                int **l_471[5][3][9] = {{{(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}}, {{(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}}, {{(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}}, {{(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}}, {{(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}, {(void*)0, &l_436, &l_436, &g_83, &l_436, &g_83, &g_83, &l_436, &g_83}}};
                int **l_472 = &g_83;
                unsigned l_476 = 0x6FC082FCL;
                int i, j, k;
                (*g_431) = &l_469[2][0][2];
                (*l_472) = l_470[3][1];
                for (g_131 = 0; (g_131 != 7); g_131 = safe_add_func_uint32_t_u_u(g_131, 5))
                {
                    int ***l_475 = &l_471[3][1][3];
                    (*l_475) = (void*)0;
                }
                return l_476;
            }
        }
    }
    return p_51;
}







static char * func_53(int * p_54, unsigned p_55, unsigned p_56, unsigned short p_57, int p_58)
{
    unsigned char *l_304[1][9] = {{&g_263, &g_263, &g_263, &g_263, &g_263, &g_263, &g_263, &g_263, &g_263}};
    int l_307[9][2][4] = {{{(-10L), (-5L), 0L, (-6L)}, {(-10L), (-5L), 0L, (-6L)}}, {{(-10L), (-5L), 0L, (-6L)}, {(-10L), (-5L), 0L, (-6L)}}, {{(-10L), (-5L), 0L, (-6L)}, {(-10L), (-5L), 0L, (-6L)}}, {{(-10L), (-5L), 0L, (-6L)}, {(-10L), (-5L), 0L, (-6L)}}, {{(-10L), (-5L), 0L, (-6L)}, {(-10L), (-5L), 0L, (-6L)}}, {{(-10L), (-5L), 0L, (-6L)}, {(-10L), (-5L), 0L, (-6L)}}, {{(-10L), (-5L), 0L, (-6L)}, {(-10L), (-5L), 0L, (-6L)}}, {{(-10L), (-5L), 0L, (-6L)}, {(-10L), (-5L), 0L, (-6L)}}, {{(-10L), (-5L), 0L, (-6L)}, {(-10L), (-5L), 0L, (-6L)}}};
    unsigned l_308 = 0xB31F9E2EL;
    char *l_369 = &g_131;
    short l_382 = 0x7463L;
    unsigned l_390[9];
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_390[i] = 18446744073709551609UL;
    (*g_82) = func_59((safe_mul_func_int8_t_s_s((safe_sub_func_int8_t_s_s((0xB5L <= (*g_108)), (g_263 = p_58))), (safe_lshift_func_int8_t_s_u((l_307[5][0][1] == (***g_119)), ((p_56 | l_308) | (safe_sub_func_uint8_t_u_u((g_313[7][5][0] = (((*g_83) = (safe_add_func_int32_t_s_s(((*g_296) == (l_307[5][0][1] | (*g_11))), 0UL))) > l_307[5][0][1])), 0x4DL))))))));
    for (p_55 = 0; (p_55 != 24); p_55 = safe_add_func_int16_t_s_s(p_55, 6))
    {
        unsigned char **l_317 = &l_304[0][6];
        unsigned char ***l_316[4] = {&l_317, &l_317, &l_317, &l_317};
        char * const **l_321 = (void*)0;
        int i;
        (*g_320) = ((g_318 = l_316[0]) != &l_317);
        (*g_322) = ((void*)0 != l_321);
        for (g_12 = 28; (g_12 >= (-9)); g_12--)
        {
            (*g_82) = p_54;
        }
        return l_304[0][2];
    }
lbl_395:
    for (p_57 = 2; (p_57 > 47); ++p_57)
    {
        int l_329[5][8][2] = {{{0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}}, {{0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}}, {{0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}}, {{0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}}, {{0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}, {0x5C2E586AL, 1L}}};
        int i, j, k;
        for (g_263 = 15; (g_263 == 53); g_263 = safe_add_func_uint8_t_u_u(g_263, 5))
        {
            return (*g_120);
        }
        if (l_307[5][0][1])
            continue;
        if ((l_329[4][5][1] && ((p_58 <= (safe_div_func_int16_t_s_s(((*g_295) = 0x506BL), (safe_div_func_uint8_t_u_u((g_97 = (p_54 != (void*)0)), (safe_lshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((l_308 != p_58), (safe_div_func_int32_t_s_s((p_58 ^ 1UL), 0xD39850ADL)))), l_307[5][0][1]))))))) > 0x341DCE14L)))
        {
            int *l_342 = &l_329[4][5][1];
            int l_347[8][10][3] = {{{0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}}, {{0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}}, {{0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}}, {{0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}}, {{0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}}, {{0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}}, {{0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}}, {{0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}, {0x6F3A2024L, 0x0CC1CDA1L, 0x555A82EAL}}};
            unsigned short l_372 = 0x49C9L;
            const short ***l_375 = &g_373;
            int i, j, k;
            for (g_12 = 0; (g_12 <= 29); g_12 = safe_add_func_uint16_t_u_u(g_12, 2))
            {
                (*g_82) = l_342;
            }
            for (g_131 = 20; (g_131 >= (-5)); g_131 = safe_sub_func_uint32_t_u_u(g_131, 2))
            {
                int l_348 = 0L;
                int *l_365 = &l_329[4][5][1];
                for (l_308 = 0; (l_308 > 31); l_308 = safe_add_func_uint32_t_u_u(l_308, 3))
                {
                    unsigned short l_357[7];
                    short *l_364 = &g_201[0][1][5];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_357[i] = 0x2666L;
                    if (((*l_342) = (l_347[2][1][2] < 0xDFFB09DBL)))
                    {
                        (*l_342) = ((p_58 <= 65535UL) ^ l_348);
                        return (**g_119);
                    }
                    else
                    {
                        short l_351 = (-1L);
                        unsigned char *l_354 = &g_263;
                        l_329[0][4][0] = ((((*g_297) = ((((safe_lshift_func_int16_t_s_s(((((l_351 <= (0xE8L | (g_97 = 0xC0L))) | ((9L ^ ((safe_div_func_uint16_t_u_u((l_354 != (void*)0), (safe_rshift_func_int8_t_s_u((*g_11), ((-1L) >= (l_357[4] = l_307[5][0][1])))))) | (*l_342))) | 0x5385L)) > (*g_11)) <= g_263), 3)) || p_55) > (*l_342)) != 0xB218L)) && l_351) > l_308);
                        (*g_82) = l_365;
                        (*g_82) = (void*)0;
                        (*g_82) = &l_307[5][0][1];
                    }
                    (**g_82) = l_357[6];
                    for (g_288 = 0; (g_288 == 14); g_288++)
                    {
                        int *l_368 = &l_307[5][0][1];
                        (*l_342) = 0x9A4B633BL;
                        l_368 = p_54;
                        (*g_82) = p_54;
                        return l_369;
                    }
                }
                return (**g_119);
            }
            (*g_320) = ((safe_mul_func_uint16_t_u_u(l_372, (((*l_375) = g_373) == (void*)0))) & l_307[5][0][1]);
        }
        else
        {
            unsigned char l_376 = 0x80L;
            (*g_322) = l_376;
        }
    }
    for (g_12 = 0; (g_12 <= 1); g_12 += 1)
    {
        unsigned short *l_377 = &g_378;
        int l_385 = 5L;
        if ((((*l_377) = p_55) == ((safe_rshift_func_uint16_t_u_u((g_381 & (p_58 ^ ((void*)0 != &g_297))), 3)) >= p_58)))
        {
            int l_386 = 6L;
            (*g_322) = (l_382 || (~((safe_mul_func_int16_t_s_s((l_385 ^ (*g_320)), ((*g_297) = (p_55 != l_386)))) == (l_385 | (*g_108)))));
        }
        else
        {
            (*g_82) = p_54;
        }
        l_385 = (((*l_377) = p_56) <= g_288);
        (*g_389) = (~((safe_lshift_func_uint16_t_u_u(g_263, 15)) >= l_385));
        for (l_382 = 0; (l_382 <= 1); l_382 += 1)
        {
            short l_398 = (-10L);
            (*g_391) = l_390[1];
            for (g_263 = 0; (g_263 <= 1); g_263 += 1)
            {
                unsigned short l_396 = 65533UL;
                for (g_62 = 0; (g_62 <= 1); g_62 += 1)
                {
                    unsigned l_392 = 0x676A4765L;
                    int l_393 = 0x83F7DA68L;
                    for (l_308 = 0; (l_308 <= 1); l_308 += 1)
                    {
                        int *l_394 = &g_63[0][0][0];
                        int i, j, k;
                        l_307[(l_382 + 1)][g_12][g_12] = 0xA8EDB6B8L;
                        l_393 = l_392;
                        l_394 = &l_385;
                    }
                }
                for (p_58 = 1; (p_58 >= 0); p_58 -= 1)
                {
                    int i, j, k;
                    if (g_97)
                        goto lbl_395;
                    (*g_82) = &l_307[8][0][0];
                    l_307[(g_12 + 4)][l_382][l_382] = (*g_83);
                }
                for (g_62 = 0; (g_62 <= 0); g_62 += 1)
                {
                    l_385 = l_396;
                }
            }
            for (p_58 = 0; (p_58 >= 0); p_58 -= 1)
            {
                l_398 = (*g_391);
            }
        }
    }
    return l_304[0][6];
}







static int * func_59(unsigned p_60)
{
    int * const l_67 = (void*)0;
    int *l_71[9] = {&g_63[1][0][0], &g_63[1][0][0], &g_63[2][1][0], &g_63[1][0][0], &g_63[1][0][0], &g_63[2][1][0], &g_63[1][0][0], &g_63[1][0][0], &g_63[2][1][0]};
    int l_80[4] = {1L, 0x8E87BB6AL, 1L, 0x8E87BB6AL};
    unsigned char *l_192 = (void*)0;
    unsigned l_205 = 18446744073709551610UL;
    char ***l_212 = &g_120;
    char l_232 = 5L;
    int *l_241 = (void*)0;
    short l_289 = 0x1678L;
    int i;
    for (p_60 = 0; (p_60 <= 0); p_60 += 1)
    {
        unsigned *l_66[9] = {&g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62, &g_62};
        unsigned **l_65 = &l_66[2];
        unsigned ***l_64 = &l_65;
        int *l_69 = &g_63[0][0][0];
        int **l_68[7][1][4] = {{{(void*)0, &l_69, &l_69, &l_69}}, {{(void*)0, &l_69, &l_69, &l_69}}, {{(void*)0, &l_69, &l_69, &l_69}}, {{(void*)0, &l_69, &l_69, &l_69}}, {{(void*)0, &l_69, &l_69, &l_69}}, {{(void*)0, &l_69, &l_69, &l_69}}, {{(void*)0, &l_69, &l_69, &l_69}}};
        int **l_70[4] = {&l_69, &l_69, &l_69, &l_69};
        unsigned **l_81[2][5][4] = {{{&l_66[2], &l_66[2], (void*)0, &l_66[2]}, {&l_66[2], &l_66[2], (void*)0, &l_66[2]}, {&l_66[2], &l_66[2], (void*)0, &l_66[2]}, {&l_66[2], &l_66[2], (void*)0, &l_66[2]}, {&l_66[2], &l_66[2], (void*)0, &l_66[2]}}, {{&l_66[2], &l_66[2], (void*)0, &l_66[2]}, {&l_66[2], &l_66[2], (void*)0, &l_66[2]}, {&l_66[2], &l_66[2], (void*)0, &l_66[2]}, {&l_66[2], &l_66[2], (void*)0, &l_66[2]}, {&l_66[2], &l_66[2], (void*)0, &l_66[2]}}};
        int l_103 = 1L;
        int l_161 = 0L;
        int i, j, k;
        (*l_64) = (void*)0;
        l_71[4] = l_67;
        (*l_69) = p_60;
        if (g_62)
        {
            short *l_84 = &g_85;
            unsigned l_86 = 0xD6677330L;
            int *l_88 = (void*)0;
            int *l_91 = &g_63[2][3][0];
            unsigned char *l_96 = &g_97;
            (**g_82) = (safe_lshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(l_80[1], ((*l_84) = (((*l_64) == l_81[1][2][2]) && (g_62 = ((void*)0 != g_82)))))) & ((g_12 < l_86) < g_9)), (p_60 ^ p_60))), g_63[0][3][0])), 7));
            if ((p_60 == (*g_11)))
            {
                int *l_87 = &l_80[3];
                return l_88;
            }
            else
            {
                (**g_82) = (safe_lshift_func_int8_t_s_u(((*g_11) = (g_12 >= g_62)), 4));
            }
            l_91 = &l_80[1];
            (**g_82) = (0UL || (((*g_11) <= (*g_11)) ^ (safe_mul_func_int16_t_s_s((p_60 <= (safe_sub_func_uint8_t_u_u(((*l_96) = 249UL), (safe_add_func_uint8_t_u_u(g_100, (*l_69)))))), ((*g_11) >= (safe_add_func_int32_t_s_s((p_60 == l_103), p_60)))))));
        }
        else
        {
            const unsigned char *l_105[6][5] = {{(void*)0, &g_97, &g_97, (void*)0, &g_97}, {(void*)0, &g_97, &g_97, (void*)0, &g_97}, {(void*)0, &g_97, &g_97, (void*)0, &g_97}, {(void*)0, &g_97, &g_97, (void*)0, &g_97}, {(void*)0, &g_97, &g_97, (void*)0, &g_97}, {(void*)0, &g_97, &g_97, (void*)0, &g_97}};
            const unsigned char **l_104 = &l_105[1][2];
            short *l_110 = &g_85;
            const int *l_111 = &l_80[1];
            int l_114 = (-1L);
            int i, j;
            (*g_109) = l_104;
            (*g_83) = (((*l_110) = 0x2792L) != (p_60 | 0x17L));
            (*g_112) = l_111;
            l_114 = p_60;
        }
        for (g_85 = 0; (g_85 >= 0); g_85 -= 1)
        {
            unsigned short l_127[2];
            const unsigned char l_128[4] = {0x9DL, 250UL, 0x9DL, 250UL};
            int l_146 = 0xADFC1283L;
            int *l_179 = (void*)0;
            unsigned char *l_182 = (void*)0;
            unsigned *l_193 = &g_62;
            char l_235 = 1L;
            unsigned l_287 = 0UL;
            int i;
            for (i = 0; i < 2; i++)
                l_127[i] = 0x01A5L;
            (*l_69) = (safe_mod_func_uint32_t_u_u(p_60, 0xD69053DEL));
            for (g_12 = 0; (g_12 <= 0); g_12 += 1)
            {
                int l_117[10][5][5] = {{{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}, {{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}, {{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}, {{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}, {{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}, {{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}, {{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}, {{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}, {{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}, {{1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}, {1L, 0x280801E7L, 0xFCA2CAD0L, 0x2F7064ECL, 0x5BC9E733L}}};
                char **l_118 = &g_11;
                unsigned char *l_124 = &g_97;
                int i, j, k;
            }
        }
    }
    (**g_82) = (l_289 > (*g_83));
    return (*g_82);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_63[i][j][k], "g_63[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_201[i][j][k], "g_201[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_313[i][j][k], "g_313[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_360, "g_360", print_hash_value);
    transparent_crc(g_378, "g_378", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_566, "g_566", print_hash_value);
    transparent_crc(g_659, "g_659", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
