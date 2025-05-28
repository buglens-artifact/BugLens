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


struct S0 {
   unsigned f0 : 11;
   unsigned f1 : 22;
   signed f2 : 1;
   unsigned f3 : 8;
   signed f4 : 25;
   signed f5 : 14;
   unsigned f6 : 21;
   signed f7 : 20;
   signed f8 : 7;
   unsigned f9 : 27;
};


static int g_2 = 0x7CF2E566L;
static int g_11 = 0xDB8E9646L;
static int *g_13[10] = {&g_2, &g_2, &g_2, &g_2, &g_2, &g_2, &g_2, &g_2, &g_2, &g_2};
static int **g_12 = &g_13[1];
static unsigned char g_27[2][6][6] = {{{0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}}, {{0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}, {0xF9L, 0x0FL, 0xF9L, 0x0FL, 0xF9L, 0x0FL}}};
static unsigned char g_65 = 0x85L;
static unsigned char *g_64 = &g_65;
static unsigned short g_71 = 0xB004L;
static unsigned char **g_76 = &g_64;
static unsigned g_85 = 0x2DD28D51L;
static struct S0 g_94 = {34,608,-0,15,-838,51,62,942,-10,6044};
static unsigned short g_176 = 65535UL;
static struct S0 **g_189 = (void*)0;
static struct S0 ***g_188 = &g_189;
static unsigned char g_220 = 4UL;
static int *g_221 = &g_11;
static short g_266[9] = {(-1L), 0xBF41L, (-1L), 0xBF41L, (-1L), 0xBF41L, (-1L), 0xBF41L, (-1L)};
static char g_296 = 0x4BL;
static char *g_378 = (void*)0;
static char **g_377[5][5][5] = {{{&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}}, {{&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}, {&g_378, &g_378, &g_378, &g_378, &g_378}}};
static char ***g_376 = &g_377[3][3][2];
static char g_427 = 0x36L;
static struct S0 g_438 = {14,251,0,1,-4583,4,1116,-114,-5,6382};
static short *g_442 = &g_266[7];
static short **g_441 = &g_442;
static unsigned g_494 = 4UL;
static unsigned g_498 = 0x23EB6ABDL;
static int *g_512 = &g_2;
static char g_518[10][6][4] = {{{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}, {{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}, {{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}, {{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}, {{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}, {{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}, {{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}, {{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}, {{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}, {{4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}, {4L, 0x7FL, (-1L), 1L}}};
static int g_586 = 0x449C38A6L;
static int ***g_593 = &g_12;
static int *g_611 = &g_586;
static int **g_610 = &g_611;
static int g_676 = (-7L);
static unsigned char ***g_801 = &g_76;
static unsigned char ****g_800 = &g_801;
static unsigned char *****g_799 = &g_800;
static unsigned g_820 = 0xD9BF3BBEL;
static int *g_879[9][3] = {{&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}, {&g_2, &g_2, &g_2}};
static int *g_911 = &g_2;
static int *****g_925 = (void*)0;
static unsigned g_930[5][5] = {{0x7865B03FL, 0x110FC472L, 18446744073709551615UL, 6UL, 6UL}, {0x7865B03FL, 0x110FC472L, 18446744073709551615UL, 6UL, 6UL}, {0x7865B03FL, 0x110FC472L, 18446744073709551615UL, 6UL, 6UL}, {0x7865B03FL, 0x110FC472L, 18446744073709551615UL, 6UL, 6UL}, {0x7865B03FL, 0x110FC472L, 18446744073709551615UL, 6UL, 6UL}};
static short ***g_956 = (void*)0;
static char g_975 = 0xB5L;
static unsigned char g_985 = 1UL;
static unsigned g_987[1][4][4] = {{{4294967294UL, 0xCA75643EL, 1UL, 1UL}, {4294967294UL, 0xCA75643EL, 1UL, 1UL}, {4294967294UL, 0xCA75643EL, 1UL, 1UL}, {4294967294UL, 0xCA75643EL, 1UL, 1UL}}};
static char g_1005 = 0x05L;
static int ***g_1088 = &g_12;
static int g_1094 = 0x06653108L;
static struct S0 *g_1102 = &g_94;
static int g_1167 = 0x3438B562L;
static short g_1169[2] = {5L, 5L};
static unsigned *g_1245 = &g_930[0][2];
static unsigned **g_1244 = &g_1245;
static unsigned ***g_1243[9] = {&g_1244, &g_1244, &g_1244, &g_1244, &g_1244, &g_1244, &g_1244, &g_1244, &g_1244};
static unsigned ****g_1242 = &g_1243[5];
static struct S0 g_1260[5][10] = {{{42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {14,459,0,11,1591,97,795,-958,-10,2994}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {33,352,-0,1,2840,122,612,910,-1,313}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}}, {{42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {14,459,0,11,1591,97,795,-958,-10,2994}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {33,352,-0,1,2840,122,612,910,-1,313}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}}, {{42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {14,459,0,11,1591,97,795,-958,-10,2994}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {33,352,-0,1,2840,122,612,910,-1,313}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}}, {{42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {14,459,0,11,1591,97,795,-958,-10,2994}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {33,352,-0,1,2840,122,612,910,-1,313}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}}, {{42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {14,459,0,11,1591,97,795,-958,-10,2994}, {21,1660,0,0,996,-62,1422,-619,-9,6587}, {33,352,-0,1,2840,122,612,910,-1,313}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {42,480,-0,10,2085,-101,300,246,-10,9689}, {33,352,-0,1,2840,122,612,910,-1,313}}};
static short g_1284 = 0x3A8EL;
static int *g_1606[9][4] = {{&g_2, &g_2, (void*)0, &g_1167}, {&g_2, &g_2, (void*)0, &g_1167}, {&g_2, &g_2, (void*)0, &g_1167}, {&g_2, &g_2, (void*)0, &g_1167}, {&g_2, &g_2, (void*)0, &g_1167}, {&g_2, &g_2, (void*)0, &g_1167}, {&g_2, &g_2, (void*)0, &g_1167}, {&g_2, &g_2, (void*)0, &g_1167}, {&g_2, &g_2, (void*)0, &g_1167}};
static unsigned short *g_1620 = &g_71;
static unsigned short **g_1619 = &g_1620;



static unsigned short func_1(void);
static int * func_5(char p_6, unsigned char p_7);
static unsigned func_18(int ** p_19, short p_20);
static int ** func_21(unsigned p_22, char p_23, int *** p_24, int p_25);
static int *** func_31(short p_32, int * p_33, struct S0 p_34, unsigned short p_35, unsigned char p_36);
static unsigned short func_41(int * p_42, int * p_43);
static int * func_44(int *** p_45, int p_46, int p_47);
static int *** func_48(unsigned p_49);
static unsigned short func_52(int ** p_53, unsigned p_54);
static int ** func_55(struct S0 p_56, char p_57, struct S0 p_58);
static unsigned short func_1(void)
{
    int l_9 = 0x59310C13L;
    int *l_1667 = &g_1167;
    struct S0 *l_1668 = &g_1260[1][5];
    for (g_2 = (-9); (g_2 <= 26); g_2 = safe_add_func_int8_t_s_s(g_2, 9))
    {
        int l_8[8] = {0xB7D8CF4CL, 0xB7D8CF4CL, 0L, 0xB7D8CF4CL, 0xB7D8CF4CL, 0L, 0xB7D8CF4CL, 0xB7D8CF4CL};
        int *l_10 = &g_11;
        int **l_1666[10] = {&g_512, &g_879[4][1], &g_512, &g_879[4][1], &g_512, &g_879[4][1], &g_512, &g_879[4][1], &g_512, &g_879[4][1]};
        struct S0 **l_1669 = &g_1102;
        int i;
        l_1667 = func_5(l_8[5], (((*l_10) = l_9) > 0UL));
        (*l_1669) = l_1668;
        return (*g_1620);
    }
    return (*l_1667);
}







static int * func_5(char p_6, unsigned char p_7)
{
    int ***l_14 = (void*)0;
    int ***l_15[7][9] = {{&g_12, &g_12, &g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, &g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, &g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, &g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, &g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, &g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, &g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12}};
    unsigned char *l_26 = &g_27[0][2][4];
    unsigned short l_30 = 0x7DB4L;
    struct S0 l_60 = {18,73,-0,9,357,-123,715,-44,-10,3780};
    unsigned short *l_563 = (void*)0;
    unsigned short *l_564 = &l_30;
    char *l_565 = &g_296;
    struct S0 l_566 = {11,123,-0,1,-4629,-15,684,753,-6,1861};
    char l_821 = 0x43L;
    unsigned char l_1058 = 1UL;
    int ***l_1089 = &g_12;
    int ***l_1149 = &g_12;
    int ***l_1150[5][5] = {{(void*)0, &g_12, (void*)0, &g_12, (void*)0}, {(void*)0, &g_12, (void*)0, &g_12, (void*)0}, {(void*)0, &g_12, (void*)0, &g_12, (void*)0}, {(void*)0, &g_12, (void*)0, &g_12, (void*)0}, {(void*)0, &g_12, (void*)0, &g_12, (void*)0}};
    char l_1151 = (-1L);
    int *l_1152[7] = {&g_11, &g_11, &g_11, &g_11, &g_11, &g_11, &g_11};
    unsigned char ****l_1214 = &g_801;
    char l_1241 = (-1L);
    struct S0 l_1256 = {4,1304,0,15,-4716,114,127,-10,3,212};
    struct S0 l_1262 = {37,515,-0,14,-1138,-82,332,-474,7,2656};
    int l_1272 = (-1L);
    unsigned l_1289 = 0xC1A557E4L;
    unsigned l_1327 = 0x2B307E26L;
    unsigned ***l_1340 = &g_1244;
    int **l_1353 = &g_611;
    unsigned *l_1477[5] = {&g_930[0][2], &g_930[0][2], &g_930[0][2], &g_930[0][2], &g_930[0][2]};
    struct S0 **l_1552 = &g_1102;
    struct S0 **l_1554 = &g_1102;
    struct S0 **l_1555 = (void*)0;
    unsigned char l_1559[3];
    struct S0 l_1621 = {38,515,0,3,-5730,-10,1379,853,-3,7846};
    int *l_1647 = &g_1167;
    int ***l_1652 = &g_610;
    int ****l_1651[3];
    int *l_1658[7] = {&g_1167, &g_1167, (void*)0, &g_1167, &g_1167, (void*)0, &g_1167};
    int *l_1665 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_1559[i] = 0x96L;
    for (i = 0; i < 3; i++)
        l_1651[i] = &l_1652;
    g_12 = g_12;
    if ((safe_mod_func_int16_t_s_s(((p_6 >= 1L) , g_2), ((((-9L) | func_18(func_21((((*l_26) = 0x75L) <= (safe_lshift_func_uint8_t_u_s((((l_14 = ((l_30 = p_6) , func_31(((safe_add_func_int8_t_s_s(((*l_565) = (safe_rshift_func_uint16_t_u_u(((*l_564) = func_41(func_44(func_48((safe_lshift_func_uint8_t_u_u(((p_6 <= 0x8F9EL) | (func_52(func_55((((safe_unary_minus_func_int16_t_s((p_7 , (-5L)))) & 0xA4F1DFBAL) , l_60), g_2, l_60), g_11) < (-7L))), 2))), g_266[3], p_6), &g_2)), 10))), (-1L))) , p_7), &g_2, l_566, p_6, p_7))) == (void*)0) & 0L), p_6))), l_821, g_593, p_7), p_7)) == 0x19BEL) || 4294967295UL))))
    {
        int *l_1007 = &g_11;
        unsigned short *l_1015 = &l_30;
        struct S0 l_1054 = {7,644,-0,11,-1505,-11,887,215,10,9641};
        int *****l_1060 = (void*)0;
        unsigned short l_1228 = 65531UL;
        (**g_593) = l_1007;
        (*g_221) = p_6;
        if (((*g_221) = (-1L)))
        {
            unsigned l_1014 = 1UL;
            int *l_1019[8] = {&g_2, (void*)0, &g_2, (void*)0, &g_2, (void*)0, &g_2, (void*)0};
            unsigned short l_1020 = 6UL;
            int l_1032[8] = {(-3L), (-3L), 0L, (-3L), (-3L), 0L, (-3L), (-3L)};
            unsigned l_1039 = 0UL;
            int ****l_1062 = &l_15[3][6];
            int *****l_1061 = &l_1062;
            struct S0 *l_1095[7] = {&g_94, &l_566, &g_94, &l_566, &g_94, &l_566, &g_94};
            int i;
            for (g_498 = (-13); (g_498 != 3); g_498 = safe_add_func_uint16_t_u_u(g_498, 3))
            {
                unsigned short **l_1016 = &l_563;
                int l_1017[5] = {8L, 0x5BF0A95CL, 8L, 0x5BF0A95CL, 8L};
                unsigned short *l_1018 = &g_176;
                int *l_1024[4];
                int *l_1027[7][4][6] = {{{&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}}, {{&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}}, {{&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}}, {{&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}}, {{&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}}, {{&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}}, {{&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}, {&g_11, &g_2, (void*)0, (void*)0, &l_1017[1], &l_1017[0]}}};
                char ****l_1035[1];
                int i, j, k;
                for (i = 0; i < 4; i++)
                    l_1024[i] = &l_1017[4];
                for (i = 0; i < 1; i++)
                    l_1035[i] = &g_376;
                (*g_221) = (1L & ((*l_1007) & (safe_add_func_int32_t_s_s((0xD033E4B5L <= (safe_add_func_uint16_t_u_u((l_1014 <= ((((*l_1016) = l_1015) != &l_30) , ((*l_1018) = ((**l_1016) = l_1017[0])))), p_6))), 0xD10F64E5L))));
                (**g_593) = l_1019[0];
                if ((0x447FCA61L >= (p_6 < l_1020)))
                {
                    struct S0 l_1021 = {22,1509,0,7,-2944,-21,649,-981,-9,7199};
                    struct S0 *l_1022 = &g_438;
                    (*l_1022) = l_1021;
                }
                else
                {
                    int *l_1023 = &g_11;
                    l_1024[2] = l_1023;
                }
                if (((*l_1007) = (p_7 && 0x11791185L)))
                {
                    for (g_975 = (-11); (g_975 != (-1)); g_975 = safe_add_func_uint8_t_u_u(g_975, 4))
                    {
                        l_1027[5][0][0] = l_1019[0];
                    }
                }
                else
                {
                    struct S0 l_1033 = {23,184,0,13,-839,31,825,214,-4,4379};
                    unsigned char *l_1034 = &g_220;
                    int *l_1036 = &l_1017[2];
                    if (((p_7 , ((*l_1007) != ((safe_mul_func_int16_t_s_s((*l_1007), ((((**g_76) = (+p_6)) | (((*l_26) = (safe_rshift_func_int8_t_s_u(l_1032[3], ((g_676 | ((l_1033 , &g_376) != ((&p_7 == l_1034) , l_1035[0]))) > p_7)))) <= l_1033.f8)) || p_7))) , 255UL))) != p_7))
                    {
                        l_1033.f7 = (&l_1014 != &l_1014);
                    }
                    else
                    {
                        short l_1037 = (-3L);
                        (**g_593) = l_1036;
                        l_1037 = p_7;
                    }
                    (*l_1036) = ((*g_221) = p_7);
                    return l_1019[1];
                }
            }
            (*g_12) = l_1007;
            if (((void*)0 != (**g_799)))
            {
                unsigned l_1038 = 0xF05A76DBL;
                (*g_221) = ((((*l_565) = l_1038) , l_1039) < (*l_1007));
                l_1019[6] = l_1007;
                (*l_1007) = (p_7 || (safe_rshift_func_uint8_t_u_s(p_7, 2)));
            }
            else
            {
                struct S0 l_1048 = {22,1961,-0,7,4142,-81,1410,-757,9,10439};
                int *l_1057 = (void*)0;
                unsigned l_1081 = 0x6D268979L;
                for (g_498 = 0; (g_498 <= 4); g_498 += 1)
                {
                    struct S0 l_1053 = {32,1683,0,6,2953,-110,283,-982,-6,3571};
                    unsigned *l_1059[3][7][4] = {{{&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}}, {{&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}}, {{&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}, {&g_987[0][3][1], &g_987[0][2][1], &l_1014, &g_820}}};
                    int i, j, k;
                    if ((((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(0x1FL, (((p_7 == 0L) <= (*g_221)) & p_7))), (*l_1007))) , l_1060) == l_1061))
                    {
                        int *l_1063[9][7] = {{&g_2, &g_2, &g_11, &g_2, &g_2, &g_11, &g_2}, {&g_2, &g_2, &g_11, &g_2, &g_2, &g_11, &g_2}, {&g_2, &g_2, &g_11, &g_2, &g_2, &g_11, &g_2}, {&g_2, &g_2, &g_11, &g_2, &g_2, &g_11, &g_2}, {&g_2, &g_2, &g_11, &g_2, &g_2, &g_11, &g_2}, {&g_2, &g_2, &g_11, &g_2, &g_2, &g_11, &g_2}, {&g_2, &g_2, &g_11, &g_2, &g_2, &g_11, &g_2}, {&g_2, &g_2, &g_11, &g_2, &g_2, &g_11, &g_2}, {&g_2, &g_2, &g_11, &g_2, &g_2, &g_11, &g_2}};
                        int i, j;
                        if (p_6)
                            break;
                        l_1057 = l_1063[6][3];
                        (*g_12) = func_44((**l_1061), (*g_611), (safe_sub_func_int16_t_s_s(((*l_1007) ^ p_6), (((safe_mod_func_uint16_t_u_u(((~(((safe_sub_func_int32_t_s_s(p_7, (l_1053.f4 || (safe_add_func_int8_t_s_s(p_7, (safe_mul_func_uint8_t_u_u((**g_76), p_6))))))) , p_7) , p_7)) >= p_7), g_94.f6)) , p_6) ^ p_7))));
                    }
                    else
                    {
                        l_1054 = l_1048;
                        if (p_6)
                            continue;
                    }
                    l_566 = l_1054;
                    for (g_296 = 0; (g_296 <= 4); g_296 += 1)
                    {
                        char *l_1079 = &g_518[5][4][2];
                        int ****l_1080 = (void*)0;
                        l_1054.f7 = ((*g_221) = ((safe_mod_func_int8_t_s_s((((((0xBF0D5248L | ((void*)0 == g_925)) , &p_6) == (void*)0) , 0x7EL) > (**g_76)), ((((((*l_1061) = &l_14) != ((safe_unary_minus_func_int8_t_s(((*l_1079) = (safe_add_func_uint8_t_u_u(((*l_26) = 0UL), 0x2BL))))) , l_1080)) && l_1081) & 0x8EDD84F9L) , p_7))) | g_71));
                    }
                }
                for (g_498 = 16; (g_498 > 27); g_498 = safe_add_func_int16_t_s_s(g_498, 1))
                {
                    int ***l_1090 = &g_12;
                    l_60.f2 = (safe_add_func_uint32_t_u_u((((void*)0 != (*g_376)) && (safe_rshift_func_uint8_t_u_u((p_6 > p_7), (**g_76)))), (((*l_1062) = g_1088) != (l_1090 = l_1089))));
                    for (l_1058 = 0; (l_1058 < 14); l_1058 = safe_add_func_int32_t_s_s(l_1058, 3))
                    {
                        unsigned short l_1093 = 3UL;
                        l_1093 = (-1L);
                        if (g_1094)
                            break;
                    }
                }
                l_1095[1] = &l_1048;
            }
        }
        else
        {
            struct S0 l_1098 = {1,1514,0,15,-4957,-44,1104,-697,3,4030};
            int *l_1106 = &g_11;
            unsigned l_1116[4][4] = {{18446744073709551615UL, 0x51011B26L, 0x55CC8B14L, 0x51011B26L}, {18446744073709551615UL, 0x51011B26L, 0x55CC8B14L, 0x51011B26L}, {18446744073709551615UL, 0x51011B26L, 0x55CC8B14L, 0x51011B26L}, {18446744073709551615UL, 0x51011B26L, 0x55CC8B14L, 0x51011B26L}};
            unsigned *l_1133 = &g_930[0][2];
            unsigned **l_1132[4];
            unsigned ***l_1131 = &l_1132[2];
            unsigned ***l_1135[8] = {&l_1132[2], &l_1132[2], (void*)0, &l_1132[2], &l_1132[2], (void*)0, &l_1132[2], &l_1132[2]};
            unsigned ****l_1134 = &l_1135[0];
            int i, j;
            for (i = 0; i < 4; i++)
                l_1132[i] = &l_1133;
            (*g_221) = (-7L);
            if ((*l_1007))
            {
                struct S0 *l_1100 = &l_566;
                struct S0 **l_1101 = (void*)0;
                unsigned *l_1104[8] = {&g_930[2][4], &g_930[2][4], (void*)0, &g_930[2][4], &g_930[2][4], (void*)0, &g_930[2][4], &g_930[2][4]};
                unsigned **l_1103 = &l_1104[5];
                unsigned ***l_1105 = &l_1103;
                int i;
                (**g_1088) = (void*)0;
                for (g_975 = (-22); (g_975 < 0); g_975 = safe_add_func_int32_t_s_s(g_975, 8))
                {
                    struct S0 *l_1099 = (void*)0;
                    if (p_7)
                        break;
                    l_1098 = l_1098;
                }
                g_1102 = l_1100;
                (*l_1105) = l_1103;
            }
            else
            {
                int **l_1111 = &l_1106;
                l_1106 = (l_1054 , ((*g_12) = l_1106));
                if (((p_6 == p_6) >= ((safe_mul_func_uint16_t_u_u(g_438.f3, ((*g_64) >= (((((safe_lshift_func_uint8_t_u_s(((l_60 , (p_7 , (**g_76))) , (*l_1106)), p_6)) & 0x5C9FL) <= 251UL) != 3UL) >= p_6)))) < g_438.f1)))
                {
                    int *l_1114 = (void*)0;
                    for (p_6 = 0; (p_6 != (-9)); --p_6)
                    {
                        short *l_1115 = &g_266[8];
                        (**l_1089) = l_1114;
                        (*g_221) = (func_18((*g_1088), ((*l_1115) = p_7)) & l_1116[2][1]);
                        (*g_12) = (void*)0;
                    }
                }
                else
                {
                    int l_1123 = 0xD3F13618L;
                    struct S0 l_1124 = {26,854,0,8,-3884,-77,1224,-426,2,2592};
                    for (g_220 = 0; (g_220 > 52); g_220 = safe_add_func_int16_t_s_s(g_220, 6))
                    {
                        short l_1119 = 0x55DFL;
                        short *l_1120 = &l_1119;
                        (*l_1106) = p_7;
                    }
                    return l_1106;
                }
            }
            (*g_221) = (l_1131 != ((*l_1134) = &l_1132[3]));
        }
        for (g_676 = 1; (g_676 >= 0); g_676 -= 1)
        {
            unsigned l_1141 = 0xFB290FE1L;
            int *l_1148 = &g_11;
            struct S0 *l_1176[7] = {&l_566, &g_94, &l_566, &g_94, &l_566, &g_94, &l_566};
            int ***l_1180[4];
            unsigned short **l_1181 = &l_563;
            int **l_1198 = &g_611;
            int *l_1207 = (void*)0;
            int i;
            for (i = 0; i < 4; i++)
                l_1180[i] = (void*)0;
        }
    }
    else
    {
        unsigned short l_1257 = 65532UL;
        int l_1259[2];
        unsigned **l_1269 = &g_1245;
        int **l_1285 = &g_13[9];
        int l_1305 = 0x6C0D30BAL;
        int ***l_1308 = (void*)0;
        int l_1309 = 0x02CE2670L;
        unsigned l_1317[6] = {0x52E57EC2L, 4294967295UL, 0x52E57EC2L, 4294967295UL, 0x52E57EC2L, 4294967295UL};
        int **l_1335[2];
        unsigned l_1378 = 0xCD57AE00L;
        struct S0 *l_1382[10] = {&g_1260[0][7], (void*)0, &g_1260[0][7], (void*)0, &g_1260[0][7], (void*)0, &g_1260[0][7], (void*)0, &g_1260[0][7], (void*)0};
        char l_1433[10] = {0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L)};
        unsigned char ****l_1443 = &g_801;
        char l_1460 = 0x81L;
        int i;
        for (i = 0; i < 2; i++)
            l_1259[i] = 0xB15E64C4L;
        for (i = 0; i < 2; i++)
            l_1335[i] = &g_13[0];
        for (g_1005 = 0; (g_1005 == (-1)); --g_1005)
        {
            unsigned l_1255 = 1UL;
            unsigned l_1271[3][7] = {{18446744073709551615UL, 0xEF1F472CL, 18446744073709551615UL, 0xEF1F472CL, 18446744073709551615UL, 0xEF1F472CL, 18446744073709551615UL}, {18446744073709551615UL, 0xEF1F472CL, 18446744073709551615UL, 0xEF1F472CL, 18446744073709551615UL, 0xEF1F472CL, 18446744073709551615UL}, {18446744073709551615UL, 0xEF1F472CL, 18446744073709551615UL, 0xEF1F472CL, 18446744073709551615UL, 0xEF1F472CL, 18446744073709551615UL}};
            int *l_1279 = &l_1259[1];
            int ***l_1290 = &l_1285;
            char ****l_1294 = (void*)0;
            unsigned ****l_1295[10] = {&g_1243[5], &g_1243[5], (void*)0, &g_1243[5], &g_1243[5], (void*)0, &g_1243[5], &g_1243[5], (void*)0, &g_1243[5]};
            unsigned *l_1330 = &g_987[0][3][3];
            int i, j;
            for (l_1058 = 0; (l_1058 <= 3); l_1058 += 1)
            {
                short ***l_1254 = &g_441;
                short l_1258[9][10] = {{0xE876L, 0x04CEL, 0x2344L, 0x04CEL, 0xE876L, (-10L), 0xE876L, 0x04CEL, 0x2344L, 0x04CEL}, {0xE876L, 0x04CEL, 0x2344L, 0x04CEL, 0xE876L, (-10L), 0xE876L, 0x04CEL, 0x2344L, 0x04CEL}, {0xE876L, 0x04CEL, 0x2344L, 0x04CEL, 0xE876L, (-10L), 0xE876L, 0x04CEL, 0x2344L, 0x04CEL}, {0xE876L, 0x04CEL, 0x2344L, 0x04CEL, 0xE876L, (-10L), 0xE876L, 0x04CEL, 0x2344L, 0x04CEL}, {0xE876L, 0x04CEL, 0x2344L, 0x04CEL, 0xE876L, (-10L), 0xE876L, 0x04CEL, 0x2344L, 0x04CEL}, {0xE876L, 0x04CEL, 0x2344L, 0x04CEL, 0xE876L, (-10L), 0xE876L, 0x04CEL, 0x2344L, 0x04CEL}, {0xE876L, 0x04CEL, 0x2344L, 0x04CEL, 0xE876L, (-10L), 0xE876L, 0x04CEL, 0x2344L, 0x04CEL}, {0xE876L, 0x04CEL, 0x2344L, 0x04CEL, 0xE876L, (-10L), 0xE876L, 0x04CEL, 0x2344L, 0x04CEL}, {0xE876L, 0x04CEL, 0x2344L, 0x04CEL, 0xE876L, (-10L), 0xE876L, 0x04CEL, 0x2344L, 0x04CEL}};
                char l_1261 = 0x11L;
                int ***l_1263 = &g_12;
                int ****l_1274 = &g_1088;
                int *****l_1273 = &l_1274;
                unsigned l_1282 = 0xCE342FA7L;
                short l_1286 = 0L;
                int l_1310 = 0x47A7854EL;
                struct S0 ***l_1311[10] = {&g_189, &g_189, (void*)0, (void*)0, &g_189, &g_189, &g_189, (void*)0, (void*)0, &g_189};
                int i, j;
                if ((((safe_lshift_func_uint8_t_u_u(255UL, (safe_add_func_int32_t_s_s((((****g_800) = ((l_1254 == (((p_6 & l_1255) ^ ((((l_1258[6][2] ^ 255UL) < 0xE86EL) , 0xAAL) < p_7)) , l_1254)) >= p_6)) ^ p_7), g_1260[0][7].f8)))) && 0xE9L) <= p_7))
                {
                    for (g_1167 = 3; (g_1167 >= 0); g_1167 -= 1)
                    {
                        int i, j, k;
                        (*g_1102) = l_1262;
                        if (g_518[g_1167][g_1167][g_1167])
                            break;
                        (**g_593) = (void*)0;
                    }
                    if (l_1257)
                        continue;
                }
                else
                {
                    int *l_1264 = &g_586;
                    int l_1270[9][9][1] = {{{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}};
                    int i, j, k;
                    (**g_593) = func_44(l_1263, (l_1259[1] = ((*l_1264) = (**g_610))), ((*g_221) = (p_7 , (l_1258[6][2] <= (((*l_564) = 0UL) | (((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(g_94.f6, (p_7 > ((((**g_1242) = (p_6 , (void*)0)) == l_1269) <= l_1270[2][4][0])))) || p_7), l_1271[2][1])) , 0xE7L) != (*****g_799)))))));
                }
            }
            (**l_1149) = (((((safe_add_func_int16_t_s_s((((safe_lshift_func_int8_t_s_u(l_1327, (safe_add_func_uint16_t_u_u(g_94.f3, (((*l_1279) , (2L >= p_7)) <= ((*l_1330) = ((void*)0 != &g_611))))))) | ((((**g_76) , l_1317[4]) || 0xF570L) , 0x54L)) , 0x4C17L), p_7)) != 0x6539L) , p_6) >= 1L) , (void*)0);
        }
        (**g_593) = &g_1167;
        if ((safe_mod_func_int16_t_s_s(9L, (safe_add_func_uint16_t_u_u(((p_6 & (p_7 < (func_18(l_1335[0], p_6) , (safe_sub_func_int32_t_s_s(p_7, ((safe_add_func_uint8_t_u_u((((&l_1269 == ((*g_1242) = l_1340)) , p_7) , p_7), p_7)) | p_7)))))) && p_7), p_6)))))
        {
            int **l_1343 = (void*)0;
            int l_1348 = 0x17116605L;
            struct S0 l_1379[10][1][10] = {{{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}, {{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}, {{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}, {{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}, {{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}, {{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}, {{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}, {{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}, {{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}, {{{7,1046,0,15,5058,-28,297,733,8,10902}, {7,1046,0,15,5058,-28,297,733,8,10902}, {15,1128,-0,5,-4360,124,369,-772,-7,1811}, {17,1596,-0,1,-4395,-78,886,-354,-1,2401}, {28,2035,-0,0,1362,-123,458,-419,-6,755}, {24,1137,-0,6,4443,-48,460,-724,-0,6598}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}, {7,1046,0,15,5058,-28,297,733,8,10902}, {13,1304,0,14,-1998,41,482,-615,-0,4213}, {21,1265,-0,6,-1798,-118,1347,-328,2,6062}}}};
            int l_1384 = 0L;
            int i, j, k;
            for (g_586 = 17; (g_586 <= (-23)); --g_586)
            {
                short l_1351[6][9] = {{0xA1C4L, 0L, 0xD8C7L, 0L, 0xA1C4L, 9L, 0xA1C4L, 0L, 0xD8C7L}, {0xA1C4L, 0L, 0xD8C7L, 0L, 0xA1C4L, 9L, 0xA1C4L, 0L, 0xD8C7L}, {0xA1C4L, 0L, 0xD8C7L, 0L, 0xA1C4L, 9L, 0xA1C4L, 0L, 0xD8C7L}, {0xA1C4L, 0L, 0xD8C7L, 0L, 0xA1C4L, 9L, 0xA1C4L, 0L, 0xD8C7L}, {0xA1C4L, 0L, 0xD8C7L, 0L, 0xA1C4L, 9L, 0xA1C4L, 0L, 0xD8C7L}, {0xA1C4L, 0L, 0xD8C7L, 0L, 0xA1C4L, 9L, 0xA1C4L, 0L, 0xD8C7L}};
                short *l_1352 = &g_266[8];
                int l_1354 = 0x55D7121AL;
                unsigned ***l_1383 = &g_1244;
                int i, j;
                (*l_1285) = func_44((g_94.f6 , l_1150[4][2]), (l_1343 != ((p_7 | ((safe_rshift_func_uint8_t_u_u((**g_76), 5)) || ((l_1354 = ((**g_76) = l_1351[4][6])) != p_6))) , (void*)0)), p_7);
                for (g_498 = 0; (g_498 <= 4); g_498 += 1)
                {
                    int **l_1364[10][8] = {{&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}, {&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}, {&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}, {&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}, {&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}, {&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}, {&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}, {&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}, {&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}, {&g_879[2][0], &g_512, &g_512, &l_1152[0], &g_879[6][1], &l_1152[0], &g_879[8][2], &g_512}};
                    int i, j;
                    for (g_1284 = 4; (g_1284 >= 0); g_1284 -= 1)
                    {
                        char l_1361 = (-10L);
                        int *l_1365 = &l_1305;
                        int i, j, k;
                        l_1354 = (safe_mod_func_uint16_t_u_u(g_94.f0, (safe_rshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u((g_1260[0][7].f9 < (p_7 > ((*g_221) = l_1361))), (p_7 | (safe_mul_func_uint8_t_u_u((****g_800), p_7))))), p_7))));
                        (*l_1365) = l_1351[2][6];
                    }
                    for (g_975 = 0; (g_975 <= 4); g_975 += 1)
                    {
                        int *l_1366[6][7][6] = {{{&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}}, {{&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}}, {{&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}}, {{&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}}, {{&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}}, {{&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}, {&l_1305, (void*)0, (void*)0, (void*)0, &l_1272, &l_1259[0]}}};
                        int i, j, k;
                        return &g_2;
                    }
                }
                for (g_494 = 0; (g_494 <= 4); g_494 += 1)
                {
                    unsigned char l_1377 = 4UL;
                    for (l_1241 = 0; (l_1241 <= 8); l_1241 += 1)
                    {
                        unsigned *l_1367 = &l_1317[4];
                        unsigned *l_1368 = &g_498;
                        struct S0 *l_1380 = &l_60;
                        struct S0 **l_1381[10][6][4] = {{{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}, {{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}, {{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}, {{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}, {{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}, {{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}, {{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}, {{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}, {{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}, {{&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}, {&g_1102, &g_1102, &g_1102, (void*)0}}};
                        int i, j, k;
                        g_911 = ((**l_1149) = func_44(l_1150[g_494][g_494], (**g_610), p_7));
                        l_1382[6] = (l_1380 = ((safe_lshift_func_int16_t_s_u((g_94.f0 , p_7), (safe_lshift_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u(p_7, (safe_add_func_int32_t_s_s(p_6, (g_266[2] , ((*g_1242) != (*g_1242))))))) <= p_7) == p_6), p_7)))) , (void*)0));
                    }
                    (**l_1089) = &l_1354;
                    l_1384 = (((*g_1242) = l_1383) == (void*)0);
                }
                if (p_7)
                {
                    struct S0 **l_1385 = &g_1102;
                    if ((*g_221))
                        break;
                    (*l_1385) = &l_566;
                }
                else
                {
                    int *l_1405 = &l_1259[1];
                    for (g_498 = 0; (g_498 != 17); g_498 = safe_add_func_uint16_t_u_u(g_498, 1))
                    {
                        char l_1400 = 1L;
                        int ****l_1412 = &l_1150[1][1];
                        int ****l_1413 = &g_1088;
                        int *l_1416 = &l_1309;
                        unsigned short *l_1417 = &g_176;
                        (*g_1102) = l_1379[7][0][1];
                        (**l_1149) = func_44(((safe_lshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u((((*l_1352) = (safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((l_1400 > (p_6 | (safe_sub_func_int32_t_s_s(1L, 0x5E8F8774L)))), (safe_mod_func_uint32_t_u_u(4294967292UL, p_6)))), (0x3123L & p_7)))) != 0xAC3FL), (*****g_799))) < (*l_1405)), 10)) < p_6), l_1354)), (****g_800))) , (void*)0), (*g_611), p_7);
                        l_1354 = (safe_rshift_func_int8_t_s_u((-1L), 7));
                        (*l_1405) = ((g_71 = (+(safe_mod_func_uint16_t_u_u(((*l_1417) = ((*l_564) = (safe_mul_func_uint16_t_u_u(((*g_611) , ((((*l_1412) = &l_1343) != &l_1335[0]) ^ 0x54F0D750L)), p_7)))), p_7)))) >= 0x2FDBL);
                    }
                    for (l_1378 = 0; l_1378 < 7; l_1378 += 1)
                    {
                        l_1152[l_1378] = &l_1272;
                    }
                }
            }
        }
        else
        {
            unsigned char l_1418 = 255UL;
            unsigned *l_1419 = (void*)0;
            int l_1420 = 0L;
            char l_1421 = 0xC8L;
            int *l_1432 = &g_586;
            int l_1434[5];
            int ***l_1435 = &g_12;
            struct S0 l_1459 = {10,1541,0,14,1187,-10,1371,437,5,7399};
            struct S0 **l_1462 = (void*)0;
            int i;
            for (i = 0; i < 5; i++)
                l_1434[i] = 0x29E80D75L;
            (**g_593) = func_44(l_1435, p_7, (*g_221));
            if ((l_1434[4] = 0x1CC2A49FL))
            {
                int *l_1436 = (void*)0;
                unsigned char ****l_1444 = (void*)0;
                int l_1449[8][1][7] = {{{(-2L), 0xAB0FB64FL, 0x0B351BE4L, 1L, (-6L), 0L, 0L}}, {{(-2L), 0xAB0FB64FL, 0x0B351BE4L, 1L, (-6L), 0L, 0L}}, {{(-2L), 0xAB0FB64FL, 0x0B351BE4L, 1L, (-6L), 0L, 0L}}, {{(-2L), 0xAB0FB64FL, 0x0B351BE4L, 1L, (-6L), 0L, 0L}}, {{(-2L), 0xAB0FB64FL, 0x0B351BE4L, 1L, (-6L), 0L, 0L}}, {{(-2L), 0xAB0FB64FL, 0x0B351BE4L, 1L, (-6L), 0L, 0L}}, {{(-2L), 0xAB0FB64FL, 0x0B351BE4L, 1L, (-6L), 0L, 0L}}, {{(-2L), 0xAB0FB64FL, 0x0B351BE4L, 1L, (-6L), 0L, 0L}}};
                unsigned *l_1453 = &g_820;
                int i, j, k;
                for (g_586 = 0; (g_586 <= 4); g_586 += 1)
                {
                    int *l_1437 = &l_1305;
                    int l_1440 = 1L;
                    unsigned char *****l_1445 = (void*)0;
                    unsigned char *****l_1446 = &l_1214;
                    char *l_1450 = &g_518[5][4][2];
                    int ***l_1451 = &g_12;
                    int ****l_1452 = &g_1088;
                    for (g_1284 = 4; (g_1284 >= 1); g_1284 -= 1)
                    {
                        l_1437 = ((*l_1285) = l_1436);
                    }
                    (**l_1435) = func_44(((*l_1452) = l_1451), (*g_611), (*g_512));
                    for (p_7 = 0; (p_7 <= 4); p_7 += 1)
                    {
                        (*g_221) = 0xA34630A4L;
                    }
                }
                l_1460 = (((*l_1453) = 4294967295UL) || (safe_add_func_int8_t_s_s((+(safe_mul_func_int16_t_s_s((p_7 == (g_438.f7 < (safe_unary_minus_func_uint8_t_u((l_1459 , (((p_7 , 0x29L) , (g_985 != 0x96F8L)) && (**g_76))))))), p_7))), 0UL)));
            }
            else
            {
                int *l_1461 = &g_1167;
                return l_1461;
            }
            g_1102 = &l_1459;
            for (g_220 = 0; (g_220 > 4); g_220++)
            {
                int l_1467[5] = {5L, 3L, 5L, 3L, 5L};
                unsigned ***l_1468[2];
                unsigned *l_1486[10] = {&g_820, &l_1317[4], (void*)0, (void*)0, &l_1317[4], &g_820, &l_1317[4], (void*)0, (void*)0, &l_1317[4]};
                int **l_1495 = &g_13[3];
                char *l_1514 = (void*)0;
                char *l_1515 = &g_518[9][2][3];
                struct S0 l_1525 = {42,349,0,2,-4291,114,782,320,10,7414};
                int i;
                for (i = 0; i < 2; i++)
                    l_1468[i] = &l_1269;
                for (g_975 = 11; (g_975 != (-11)); --g_975)
                {
                    unsigned l_1469 = 0x98F08923L;
                    int *l_1472 = (void*)0;
                    l_1469 = (g_27[1][5][4] | (l_1340 == ((!((p_7 , 4294967295UL) , ((249UL || l_1467[4]) == (*g_911)))) , l_1468[0])));
                    for (g_65 = 20; (g_65 > 30); ++g_65)
                    {
                        return l_1472;
                    }
                }
                (*g_221) = (safe_mod_func_int32_t_s_s(((safe_rshift_func_uint8_t_u_u(((l_1477[3] != (p_7 , l_1419)) <= ((*g_64) = p_6)), 6)) == 1L), g_94.f9));
                for (g_176 = 18; (g_176 == 12); g_176 = safe_sub_func_int16_t_s_s(g_176, 3))
                {
                    int *l_1496 = &l_1467[4];
                    int l_1497 = 0xE97518CFL;
                    int **l_1523 = (void*)0;
                    if (((*g_221) = ((safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_85, ((((void*)0 == l_1496) < l_1497) , (safe_rshift_func_int8_t_s_u(p_7, (safe_sub_func_int32_t_s_s(0x29CE10A8L, p_7))))))), g_266[5])), p_7)) & l_1497)))
                    {
                        unsigned char l_1504[1][1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1504[i][j] = 0x9CL;
                        }
                        (*g_221) = (safe_lshift_func_int16_t_s_s(l_1504[0][0], 0));
                    }
                    else
                    {
                        unsigned char l_1511 = 0xDAL;
                        short *l_1512 = (void*)0;
                        short *l_1513 = &g_1169[0];
                        (*g_1102) = l_1256;
                        (*g_1102) = (*g_1102);
                        (*g_221) = (((safe_rshift_func_uint8_t_u_u(0xC9L, (((l_1497 = (safe_mul_func_uint16_t_u_u(5UL, (((*g_911) < ((((safe_lshift_func_int16_t_s_s(l_1511, ((*l_1513) = ((*g_512) ^ l_1497)))) , l_1514) != l_1515) != g_1005)) , 0x2573L)))) <= (*g_512)) > l_1511))) || 0xDF373143L) == 0x0CL);
                    }
                    if ((((safe_add_func_uint8_t_u_u((*g_64), l_1497)) | 250UL) , ((*g_221) = p_7)))
                    {
                        int *l_1518 = &g_1167;
                        unsigned l_1524 = 0xE16640E8L;
                        (*g_1102) = l_1459;
                        (*g_221) = p_6;
                        (*g_12) = l_1518;
                        (*l_1518) = ((*l_1518) <= ((*l_1515) = (g_438.f4 | g_438.f1)));
                    }
                    else
                    {
                        l_1525 = l_60;
                        (*g_221) = (*g_911);
                    }
                }
            }
        }
    }
    if ((safe_mul_func_int8_t_s_s(p_6, (((safe_add_func_int32_t_s_s(((*g_221) = ((0xF6L || p_7) ^ (-7L))), 0x5276E261L)) != 0UL) <= p_7))))
    {
        struct S0 l_1532 = {41,896,0,3,1220,-15,581,929,1,1209};
        int *l_1533 = &g_1094;
        unsigned char l_1551[4][3] = {{0xA3L, 6UL, 0xA3L}, {0xA3L, 6UL, 0xA3L}, {0xA3L, 6UL, 0xA3L}, {0xA3L, 6UL, 0xA3L}};
        struct S0 ***l_1553 = &l_1552;
        struct S0 **l_1556 = &g_1102;
        struct S0 ***l_1557 = &g_189;
        struct S0 ***l_1558 = &l_1556;
        int l_1560 = 1L;
        short l_1561 = 0x9458L;
        int ***l_1564 = &g_12;
        unsigned char l_1574 = 255UL;
        unsigned char l_1575 = 0x87L;
        int l_1582[9] = {0xC57CC417L, 0x88001FF4L, 0xC57CC417L, 0x88001FF4L, 0xC57CC417L, 0x88001FF4L, 0xC57CC417L, 0x88001FF4L, 0xC57CC417L};
        unsigned l_1593[4];
        unsigned short l_1662 = 0x3CBDL;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1593[i] = 0x3883AB4FL;
        l_1532 = l_60;
        l_1532.f4 = (((((*l_1533) = (-1L)) , (p_6 | ((safe_unary_minus_func_int32_t_s(((safe_rshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u((l_1532.f2 = (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((l_1555 = (l_1554 = ((*l_1553) = ((safe_sub_func_int16_t_s_s(p_6, ((l_1551[3][0] = p_6) , ((***g_801) , (p_6 >= 0xD1L))))) , l_1552)))) != ((*l_1558) = l_1556)), l_1532.f8)), l_1559[0])), 2))), p_7)), p_6)) | g_987[0][0][2]), p_7)) , p_6), p_6)) > l_1532.f7))) , l_1560))) , p_7) , l_1561);
        (**g_593) = &l_1560;
        if ((*g_512))
        {
            l_1532.f2 = 0x08DD6DE5L;
        }
        else
        {
            struct S0 *l_1562 = &l_1532;
            int *l_1563 = &g_11;
            short l_1599 = 6L;
            short l_1611 = (-1L);
            unsigned char **l_1626[3];
            int *****l_1634 = (void*)0;
            int *l_1657[6][5][8] = {{{&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}}, {{&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}}, {{&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}}, {{&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}}, {{&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}}, {{&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}, {&g_1167, (void*)0, (void*)0, &l_1272, &g_1167, &l_1560, (void*)0, &g_11}}};
            struct S0 l_1661 = {11,334,-0,6,21,56,872,-748,10,4147};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1626[i] = &l_26;
            (*l_1562) = g_438;
            if ((1UL & ((***g_801) = 0x5CL)))
            {
                char l_1571 = 0x8AL;
                int **l_1580 = &g_911;
                unsigned *l_1598[2][9][2] = {{{&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}}, {{&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}, {&g_820, &g_820}}};
                int l_1603 = 0x7C2F71D8L;
                struct S0 l_1608 = {8,1947,-0,9,1139,0,856,-502,-10,3945};
                int ***l_1624 = &l_1580;
                int *l_1648 = &l_1272;
                int i, j, k;
                if (l_1561)
                {
                    unsigned short l_1568 = 65535UL;
                    int *l_1576 = &g_11;
                    unsigned *l_1577 = (void*)0;
                    unsigned *l_1578 = (void*)0;
                    unsigned *l_1579[9][2][8] = {{{&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}, {&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}}, {{&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}, {&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}}, {{&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}, {&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}}, {{&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}, {&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}}, {{&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}, {&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}}, {{&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}, {&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}}, {{&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}, {&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}}, {{&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}, {&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}}, {{&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}, {&g_987[0][1][3], &g_987[0][3][0], &g_85, &g_987[0][1][0], &g_85, &g_987[0][3][0], &g_987[0][1][3], &g_987[0][0][3]}}};
                    int i, j, k;
                    (**g_593) = l_1563;
                    (**l_1564) = func_44(l_1564, (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(l_1568)), (0xBBE4L || 0x45D0L))), (safe_sub_func_int8_t_s_s(l_1571, func_18(((safe_mul_func_int16_t_s_s((l_1574 & l_1575), p_6)) , l_1580), p_7))));
                }
                else
                {
                    int ***l_1581 = &l_1580;
                    short *l_1587[8][2] = {{&g_1284, (void*)0}, {&g_1284, (void*)0}, {&g_1284, (void*)0}, {&g_1284, (void*)0}, {&g_1284, (void*)0}, {&g_1284, (void*)0}, {&g_1284, (void*)0}, {&g_1284, (void*)0}};
                    int ****l_1588[6];
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_1588[i] = &l_1150[3][0];
                    if (((p_7 , l_1581) == (g_1088 = l_1581)))
                    {
                        int *l_1589 = (void*)0;
                        return l_1589;
                    }
                    else
                    {
                        (*l_1580) = (*l_1580);
                    }
                    (*l_1563) = p_7;
                    for (l_1327 = 20; (l_1327 <= 13); l_1327 = safe_sub_func_uint8_t_u_u(l_1327, 5))
                    {
                        int *l_1592 = &l_1560;
                        return (*l_1580);
                    }
                }
                if (((l_1593[2] && ((*l_1563) == (safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s((l_1599 == p_7), p_6)), (****g_800))))) != 0xF7L))
                {
                    int *l_1600 = &l_1560;
                    (*g_12) = l_1600;
                    l_1603 = (safe_lshift_func_int8_t_s_s(0xB3L, p_7));
                    (**l_1089) = l_1600;
                    (**l_1564) = l_1563;
                }
                else
                {
                    int *l_1607[8][4][7] = {{{&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}}, {{&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}}, {{&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}}, {{&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}}, {{&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}}, {{&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}}, {{&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}}, {{&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}, {&g_1167, &l_1560, &l_1560, &l_1560, &g_1167, (void*)0, &g_1167}}};
                    int i, j, k;
                    for (g_65 = (-15); (g_65 == 53); g_65 = safe_add_func_int8_t_s_s(g_65, 1))
                    {
                        l_1607[1][2][5] = ((*l_1580) = g_1606[3][2]);
                        (*l_1562) = l_1608;
                        return (*l_1580);
                    }
                    for (l_1327 = 0; (l_1327 <= 1); l_1327 += 1)
                    {
                        int i;
                        (**l_1089) = func_44(&l_1580, g_1169[l_1327], ((*g_221) = (l_1608 , p_7)));
                        (**g_593) = l_1607[1][2][5];
                        (*l_1580) = (void*)0;
                    }
                    for (g_676 = (-7); (g_676 > 14); g_676++)
                    {
                        (**g_1088) = l_1563;
                    }
                }
                if (l_1611)
                {
                    int ***l_1612 = &g_12;
                    unsigned short **l_1618 = &l_563;
                    (**l_1612) = func_44(l_1612, ((safe_add_func_uint8_t_u_u((l_1603 , (p_7 > g_427)), ((*l_1563) = p_7))) > (-1L)), p_6);
                    for (g_498 = 10; (g_498 != 17); ++g_498)
                    {
                        int *l_1617[8] = {&l_1272, &g_11, &l_1272, &g_11, &l_1272, &g_11, &l_1272, &g_11};
                        int i;
                        (**l_1089) = l_1617[4];
                        g_1619 = l_1618;
                        (*l_1562) = l_1621;
                    }
                    for (g_586 = 0; g_586 < 5; g_586 += 1)
                    {
                        for (l_1151 = 0; l_1151 < 5; l_1151 += 1)
                        {
                            for (g_494 = 0; g_494 < 5; g_494 += 1)
                            {
                                g_377[g_586][l_1151][g_494] = &g_378;
                            }
                        }
                    }
                }
                else
                {
                    for (l_1151 = 0; (l_1151 != (-27)); l_1151--)
                    {
                        return l_1563;
                    }
                }
                if (p_6)
                {
                    struct S0 l_1628 = {39,281,-0,9,-3684,-126,543,-747,-6,5648};
                    int ***l_1633 = &l_1580;
                    for (g_676 = 0; (g_676 <= 2); g_676 += 1)
                    {
                        int *l_1625 = &l_1603;
                        unsigned char **l_1627 = &l_26;
                        int i;
                        g_1606[3][2] = ((**g_1088) = func_44((l_1624 = &g_12), l_1559[g_676], (*l_1563)));
                        l_1627 = ((***g_799) = l_1626[2]);
                        (*l_1647) = ((l_1628 , (safe_lshift_func_int16_t_s_s(0x8D22L, 13))) , (((*l_1625) = (safe_rshift_func_uint16_t_u_s((p_6 , 0UL), p_6))) , 1L));
                        (**l_1624) = ((*l_1580) = &l_1560);
                    }
                    (**l_1633) = l_1648;
                    (*l_1563) = (safe_lshift_func_uint8_t_u_u(((void*)0 != l_1651[2]), 2));
                    (**g_593) = (*l_1580);
                }
                else
                {
                    int *l_1656 = &l_1560;
                    for (l_1058 = 25; (l_1058 != 23); --l_1058)
                    {
                        int *l_1655 = &l_1560;
                        (**l_1089) = (((*g_1620) && p_6) , l_1655);
                        return l_1563;
                    }
                    if (p_6)
                    {
                        (*l_1562) = l_1608;
                    }
                    else
                    {
                        (**g_593) = ((*l_1580) = (void*)0);
                        return l_1658[1];
                    }
                }
            }
            else
            {
                (*l_1647) = ((p_7 == 0x1E02DC4BL) > (*g_1620));
            }
            (**g_593) = func_44(l_1089, (((*****g_799) || l_1662) != 1UL), (*l_1563));
            (*l_1562) = (*l_1562);
        }
    }
    else
    {
        struct S0 l_1663 = {42,2028,-0,13,5139,105,1207,601,0,8597};
        int *l_1664 = &g_11;
        l_1663 = l_1663;
        (*l_1552) = &l_1663;
        (**g_593) = l_1664;
        (**l_1149) = l_1664;
    }
    return l_1665;
}







static unsigned func_18(int ** p_19, short p_20)
{
    struct S0 *l_829 = &g_94;
    struct S0 **l_828 = &l_829;
    int l_834 = (-5L);
    int *l_835[1][2][5];
    int **l_836 = (void*)0;
    int **l_837 = &l_835[0][1][2];
    unsigned *l_842 = &g_494;
    int l_843 = 0xDF76AE1CL;
    char *l_844 = &g_518[4][3][0];
    int ***l_859[9] = {&g_12, &g_12, &g_12, &g_12, &g_12, &g_12, &g_12, &g_12, &g_12};
    int *l_905[8];
    int ****l_924 = &l_859[5];
    int ****l_928 = &l_859[3];
    int *****l_927 = &l_928;
    int *l_935 = &l_834;
    int *l_936 = &l_843;
    unsigned char ***l_957 = &g_76;
    unsigned short l_989 = 0x4713L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 5; k++)
                l_835[i][j][k] = &g_676;
        }
    }
    for (i = 0; i < 8; i++)
        l_905[i] = &l_834;
    (*g_188) = l_828;
    (*g_221) = (-10L);
    if ((safe_add_func_uint8_t_u_u(0xA4L, (l_834 = ((*l_844) = ((l_843 = (safe_lshift_func_uint8_t_u_s(((*g_64) = (((((l_834 , (((*g_610) != ((*l_837) = l_835[0][1][4])) , 0x2BL)) <= (((safe_mod_func_int8_t_s_s(((0x43B0BE86L != ((~((*l_842) = (safe_lshift_func_int8_t_s_s(l_834, 5)))) != l_843)) <= 0L), 0x12L)) , 0x39L) >= l_843)) >= p_20) , l_834) , l_834)), p_20))) > p_20))))))
    {
        short l_857 = 1L;
        int l_858 = 0x61BBCCC1L;
        unsigned char ****l_866 = &g_801;
        for (g_220 = 0; (g_220 >= 23); g_220++)
        {
            int ***l_847[8][3][2] = {{{&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}}, {{&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}}, {{&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}}, {{&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}}, {{&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}}, {{&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}}, {{&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}}, {{&g_12, &g_12}, {&g_12, &g_12}, {&g_12, &g_12}}};
            unsigned short *l_854 = &g_176;
            int **l_869 = &g_13[1];
            int i, j, k;
            (*g_12) = func_44(l_847[0][2][1], ((l_857 = ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(((*g_512) , (g_94.f0 | p_20)), 9)), 1)) , ((*g_221) = (safe_mul_func_uint16_t_u_u((p_20 == (+(((~(g_518[9][2][3] || (((*l_854) = 65526UL) && (safe_add_func_int8_t_s_s(l_834, 1L))))) , 0xBFA7L) < 2UL))), 0xA436L))))) == l_858), l_834);
            (**g_593) = func_44(l_859[7], (safe_mod_func_int32_t_s_s((((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(((*g_64) = ((l_857 , l_866) != (*g_799))), 0L)), g_94.f2)) || (**g_76)) , ((*g_221) = (l_858 && ((*g_221) > 0xBC7099DEL)))), p_20)), l_857);
            (*g_221) = (p_20 == (safe_mod_func_int8_t_s_s((l_857 > p_20), (g_220 & 0x46998A07L))));
        }
        return p_20;
    }
    else
    {
        int *l_872 = &g_11;
        int ***l_896[7][4][8] = {{{&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}}, {{&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}}, {{&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}}, {{&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}}, {{&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}}, {{&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}}, {{&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}, {&g_12, &g_12, (void*)0, &g_12, &g_12, &g_12, &g_12, &g_12}}};
        int l_906[1];
        short l_937 = 0x6C0DL;
        unsigned char l_954 = 0x30L;
        int *l_973 = &g_2;
        int l_996 = 0xAFDD2A83L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_906[i] = 7L;
        for (p_20 = 21; (p_20 <= 7); --p_20)
        {
            int *l_873[6] = {&l_834, &l_834, &l_834, &l_834, &l_834, &l_834};
            short *l_874 = (void*)0;
            char ****l_887 = &g_376;
            unsigned l_893 = 0x17644F41L;
            struct S0 l_895[10] = {{8,2041,0,7,5046,94,431,378,-7,1795}, {8,2041,0,7,5046,94,431,378,-7,1795}, {8,2041,0,7,5046,94,431,378,-7,1795}, {8,2041,0,7,5046,94,431,378,-7,1795}, {8,2041,0,7,5046,94,431,378,-7,1795}, {8,2041,0,7,5046,94,431,378,-7,1795}, {8,2041,0,7,5046,94,431,378,-7,1795}, {8,2041,0,7,5046,94,431,378,-7,1795}, {8,2041,0,7,5046,94,431,378,-7,1795}, {8,2041,0,7,5046,94,431,378,-7,1795}};
            int *l_909 = &l_843;
            unsigned short *l_910[9][5][4] = {{{&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}}, {{&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}}, {{&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}}, {{&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}}, {{&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}}, {{&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}}, {{&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}}, {{&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}}, {{&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}, {&g_176, &g_176, &g_176, &g_176}}};
            int i, j, k;
            if ((*g_221))
            {
                unsigned char l_875 = 0xF6L;
                l_875 = ((*l_872) = (&p_20 != ((!8L) , l_874)));
                for (l_834 = 0; (l_834 <= 0); l_834 += 1)
                {
                    short l_876 = 0xD5E7L;
                    return l_876;
                }
            }
            else
            {
                int **l_884 = &l_873[2];
                int *l_892 = &g_586;
                for (g_427 = 0; (g_427 < 23); ++g_427)
                {
                    (**g_593) = g_879[4][1];
                }
                for (l_843 = 0; (l_843 < 29); ++l_843)
                {
                    int *l_897 = &l_834;
                    if ((safe_mul_func_uint8_t_u_u(0x31L, p_20)))
                    {
                        char ****l_888 = &g_376;
                        unsigned short *l_889 = &g_176;
                        int l_894 = 0x9F683F96L;
                        (***g_188) = (l_894 , l_895[9]);
                    }
                    else
                    {
                        (*l_872) = p_20;
                        (*g_221) = (**l_884);
                        (*l_872) = (**l_884);
                    }
                    l_873[5] = func_44(&p_19, (safe_unary_minus_func_int16_t_s(p_20)), (p_20 , 0x4BB6B40AL));
                }
                (*p_19) = func_44(&g_12, (((safe_rshift_func_int8_t_s_s(p_20, 5)) > ((**l_884) && g_586)) >= 1UL), (p_20 , (safe_mod_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((****g_800) > (**l_884)), p_20)), p_20))));
            }
            (*p_19) = l_873[5];
            (*l_872) = ((l_906[0] < ((safe_lshift_func_int16_t_s_s(((void*)0 == &l_893), 8)) <= (((g_266[8] = 0L) < (((g_176 = ((p_20 == ((0x8DL & p_20) , p_20)) < (*****g_799))) == (*l_909)) < p_20)) && 0x32L))) <= g_518[6][0][2]);
        }
        (*g_12) = g_911;
        for (l_843 = 0; (l_843 <= 8); l_843 += 1)
        {
            char l_916 = (-1L);
            int l_917[1][5];
            int ******l_926 = &g_925;
            unsigned *l_929 = &g_930[0][2];
            struct S0 l_931 = {11,231,-0,13,-4354,-17,759,611,4,10937};
            struct S0 l_938 = {25,1208,0,8,3590,115,866,735,7,1162};
            unsigned char l_1001 = 0UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 5; j++)
                    l_917[i][j] = 0xDF8F4D91L;
            }
            (**g_593) = (g_266[l_843] , func_44(&g_12, ((**l_837) = (safe_rshift_func_int8_t_s_u((safe_mod_func_int16_t_s_s(p_20, (g_266[l_843] & ((p_20 , (*l_872)) < ((((*l_842) = (g_94.f9 && 0xAACCL)) & l_916) != 3UL))))), 5))), (*l_872)));
            if (((*l_872) = ((l_917[0][4] = p_20) <= ((p_20 != ((safe_mod_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s(p_20, 3L)) || (((*l_929) = (safe_mod_func_uint8_t_u_u(((l_924 = &l_859[7]) == ((((+p_20) , ((*l_926) = g_925)) != l_927) , ((*l_927) = &g_593))), p_20))) , g_94.f7)), p_20)) | (*g_64))) > p_20))))
            {
                (****l_927) = func_44(&g_12, (**g_610), (*g_911));
            }
            else
            {
                struct S0 l_942[7][9][4] = {{{{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}}, {{{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}}, {{{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}}, {{{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}}, {{{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}}, {{{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}}, {{{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}, {{20,436,0,11,4242,-73,758,420,6,6804}, {13,1890,-0,2,-270,-6,801,-14,-3,133}, {38,1999,0,5,-4693,-123,940,-444,6,514}, {20,436,0,11,4242,-73,758,420,6,6804}}}};
                int *l_953[5];
                short ***l_955 = (void*)0;
                unsigned char ***l_958 = &g_76;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_953[i] = &g_11;
                (***g_188) = l_931;
                if ((safe_mul_func_uint16_t_u_u(p_20, p_20)))
                {
                    int *l_934 = &l_834;
                    int ***l_941 = &g_610;
                    int ****l_940 = &l_941;
                    unsigned short *l_943 = &g_176;
                    (*l_828) = (void*)0;
                    for (l_834 = 0; (l_834 <= 1); l_834 += 1)
                    {
                        (***l_924) = l_934;
                        if ((*l_934))
                            break;
                        (*g_221) = (p_20 , ((l_937 , p_20) || ((*l_844) = p_20)));
                        (***l_928) = &g_2;
                    }
                    if ((l_938 , ((safe_unary_minus_func_uint16_t_u((((*l_940) = &g_610) != (void*)0))) == g_85)))
                    {
                        return l_942[0][2][2].f5;
                    }
                    else
                    {
                        if (p_20)
                            break;
                    }
                    (*p_19) = func_44(&p_19, (((safe_lshift_func_uint16_t_u_s(((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_438.f8, 1)), ((safe_unary_minus_func_int32_t_s(((void*)0 != l_953[4]))) > p_20))) <= 1UL), 9)) , l_955) != g_956), p_20);
                }
                else
                {
                    char l_974 = 0x57L;
                    int *l_976 = &l_834;
                    int i;
                    (*p_19) = func_44(((*l_924) = &p_19), (g_586 = ((**l_837) = ((*l_976) = p_20))), (*g_512));
                    return g_27[0][4][3];
                }
                return g_94.f6;
            }
            for (g_71 = 0; (g_71 <= 1); g_71 += 1)
            {
                unsigned short *l_986 = (void*)0;
                int l_988 = 4L;
                int l_1002 = 0x9365A393L;
                (*g_221) = (safe_sub_func_int32_t_s_s((*l_872), ((((-10L) ^ (safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(((g_987[0][1][3] = (safe_add_func_uint8_t_u_u(((***g_801) && (*g_64)), (+p_20)))) >= l_988), 0x791CL)) | g_438.f9), p_20))) , 0xB14BF192L) || 0xEDEFC2B2L)));
                if (p_20)
                    continue;
                (*g_221) = ((~0xE3L) && (((*g_512) || p_20) < l_989));
                for (g_494 = 0; (g_494 <= 1); g_494 += 1)
                {
                    unsigned short *l_992 = &g_176;
                    short *l_1003[6][1];
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1003[i][j] = (void*)0;
                    }
                    if ((((*l_992) = (g_27[g_494][(g_494 + 2)][(g_71 + 1)] || (safe_sub_func_int16_t_s_s(0x2440L, p_20)))) >= (g_266[7] = (l_988 = (safe_rshift_func_int8_t_s_s((*l_872), (+((safe_unary_minus_func_uint32_t_u(g_930[0][4])) , ((p_20 && ((l_996 , (safe_rshift_func_int16_t_s_u(((g_27[g_494][(g_494 + 2)][(g_71 + 1)] != (safe_mod_func_uint16_t_u_u(l_1001, g_27[g_494][(g_494 + 2)][(g_71 + 1)]))) < g_27[g_494][(g_494 + 2)][(g_71 + 1)]), p_20))) , l_1002)) != p_20)))))))))
                    {
                        (*g_221) = l_1002;
                    }
                    else
                    {
                        int *l_1004 = &l_988;
                        l_1004 = &g_11;
                        return p_20;
                    }
                    (*g_221) = g_1005;
                }
            }
        }
    }
    if (((void*)0 != &g_820))
    {
        struct S0 l_1006[6] = {{32,634,-0,13,-5089,-70,678,-584,8,1224}, {32,634,-0,13,-5089,-70,678,-584,8,1224}, {37,631,-0,1,-3852,-37,1167,947,-2,5512}, {32,634,-0,13,-5089,-70,678,-584,8,1224}, {32,634,-0,13,-5089,-70,678,-584,8,1224}, {37,631,-0,1,-3852,-37,1167,947,-2,5512}};
        int i;
        l_1006[1] = l_1006[1];
        return l_1006[1].f2;
    }
    else
    {
        return p_20;
    }
}







static int ** func_21(unsigned p_22, char p_23, int *** p_24, int p_25)
{
    int *l_825 = &g_2;
    struct S0 l_826[10][4][6] = {{{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}, {{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}, {{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}, {{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}, {{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}, {{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}, {{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}, {{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}, {{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}, {{{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}, {{44,1515,-0,10,4141,32,221,-576,-1,5081}, {25,1508,0,1,1490,-14,818,-194,-4,1571}, {24,1764,0,1,-3066,5,1304,393,2,2698}, {27,393,-0,2,-4373,84,163,-33,-4,3651}, {18,1447,0,12,-2247,20,280,-774,-6,8831}, {16,1445,-0,5,-3309,98,1210,512,6,5907}}}};
    struct S0 *l_827 = &g_438;
    int i, j, k;
    for (g_427 = (-9); (g_427 != (-27)); g_427--)
    {
        int *l_824 = &g_2;
        (**g_593) = l_824;
        (**p_24) = l_825;
    }
    (*g_221) = (*g_221);
    (*l_827) = l_826[3][1][0];
    g_94 = ((*l_827) = (*l_827));
    return (*g_593);
}







static int *** func_31(short p_32, int * p_33, struct S0 p_34, unsigned short p_35, unsigned char p_36)
{
    struct S0 l_567 = {42,187,-0,0,5634,103,1054,699,-8,10014};
    struct S0 l_568 = {41,1295,-0,12,1624,65,1232,457,-9,4262};
    unsigned char l_589 = 0x7FL;
    int ***l_591 = &g_12;
    unsigned l_625 = 0x71C0419AL;
    unsigned l_639[2];
    unsigned l_655 = 0x33763FD0L;
    unsigned *l_671 = &l_625;
    struct S0 *l_672 = &g_438;
    unsigned char l_673 = 0xAAL;
    char *l_674[10][6] = {{&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}, {&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}, {&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}, {&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}, {&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}, {&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}, {&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}, {&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}, {&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}, {&g_296, &g_296, &g_518[1][3][1], &g_427, &g_518[2][4][0], &g_518[4][4][1]}};
    int **l_819 = &g_611;
    int i, j;
    for (i = 0; i < 2; i++)
        l_639[i] = 4294967295UL;
    l_568 = (g_94 = l_567);
    for (p_36 = 0; (p_36 == 11); p_36 = safe_add_func_uint32_t_u_u(p_36, 3))
    {
        char l_583 = 8L;
        int l_606 = 0xEB03D1D0L;
        char l_609 = 0x25L;
        int ***l_621 = &g_12;
        struct S0 l_668 = {28,506,-0,3,2820,-64,1435,-350,-10,5542};
        (*g_221) = 0L;
        for (p_35 = 2; (p_35 <= 9); p_35 += 1)
        {
            unsigned l_581 = 0x0D0AAC3FL;
            int *l_585[9] = {&g_586, &g_586, &g_586, &g_586, &g_586, &g_586, &g_586, &g_586, &g_586};
            int *l_590 = &g_11;
            int **l_612 = &g_611;
            struct S0 l_616[3] = {{10,1565,0,8,-3543,-29,187,785,0,3895}, {10,1565,0,8,-3543,-29,187,785,0,3895}, {10,1565,0,8,-3543,-29,187,785,0,3895}};
            int i;
        }
        if ((*p_33))
            break;
        if (((*g_64) & (**g_76)))
        {
            struct S0 l_622 = {28,1749,0,12,2053,92,1180,194,-7,710};
            struct S0 *l_623 = &g_438;
            unsigned l_624 = 1UL;
            int *l_630 = &g_2;
            (*g_221) = ((((+p_35) || ((*g_64) | (l_622.f5 = ((**g_441) ^ l_624)))) && l_625) , (*g_512));
            for (l_606 = 0; (l_606 < 2); l_606++)
            {
                for (l_609 = 0; (l_609 < (-26)); l_609--)
                {
                    unsigned l_637[2];
                    int ***l_638[6];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_637[i] = 18446744073709551609UL;
                    for (i = 0; i < 6; i++)
                        l_638[i] = &g_12;
                    (**g_593) = l_630;
                    (*g_221) = (safe_lshift_func_int8_t_s_s(0L, (*l_630)));
                    if (((*g_221) = ((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(0xA0B4L, (0x1CL >= ((l_637[0] != (p_33 == ((*g_610) = p_33))) && 5L)))) < 0L), 0UL)) <= 0xE9DAL)))
                    {
                        p_33 = ((**l_621) = l_630);
                        if ((*p_33))
                            break;
                        if ((*p_33))
                            break;
                    }
                    else
                    {
                        int ***l_640 = &g_12;
                        (**l_591) = p_33;
                        (*l_623) = p_34;
                        return l_640;
                    }
                }
            }
        }
        else
        {
            unsigned char l_647 = 255UL;
            if ((*g_221))
                break;
            for (l_589 = 0; (l_589 >= 9); l_589 = safe_add_func_uint8_t_u_u(l_589, 9))
            {
                int *l_650 = (void*)0;
                int l_656 = 0xAB902159L;
                unsigned l_661 = 0UL;
                struct S0 l_666 = {29,1140,-0,15,214,-95,865,-666,-10,8806};
                for (g_220 = (-28); (g_220 != 46); g_220++)
                {
                    for (p_35 = 0; (p_35 > 13); p_35 = safe_add_func_uint32_t_u_u(p_35, 1))
                    {
                        (*g_221) = l_647;
                    }
                }
                if (((safe_rshift_func_int16_t_s_s(((p_33 == l_650) ^ (safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((*g_221) = (*p_33)), p_34.f7)), (l_655 , l_656)))), ((**g_441) = (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(((*g_64) = ((void*)0 != p_33)), 0xB8L)), l_656))))) , 0x29A2ADF6L))
                {
                    if ((g_427 , ((l_661 , (safe_mul_func_int16_t_s_s(((*g_442) = p_34.f2), p_34.f7))) >= (-1L))))
                    {
                        return &g_12;
                    }
                    else
                    {
                        struct S0 *l_664 = &l_568;
                        int l_665 = 0x64E416FFL;
                        (*l_664) = p_34;
                        l_665 = 0xBD5F37DEL;
                    }
                    if (l_656)
                        continue;
                }
                else
                {
                    struct S0 *l_667 = &g_94;
                    (*l_667) = l_666;
                    (*l_667) = l_668;
                    return &g_12;
                }
            }
        }
    }
    (*g_221) = (*p_33);
    if ((safe_add_func_uint16_t_u_u(((((!((*l_671) = 0x7F668657L)) && ((l_567.f7 , 0xD4L) == (l_568.f5 = (l_568.f8 = (((-2L) != ((**g_441) == (((0xBE3DL > (*g_442)) || (l_591 == ((((*l_672) = p_34) , p_34.f6) , l_591))) != l_673))) | p_34.f3))))) , g_438.f5) & p_34.f9), p_34.f6)))
    {
        short l_675 = 0x8196L;
        short l_677 = 0L;
        (*l_672) = (*l_672);
        (*g_221) = 0L;
        l_677 = (((*l_671) = l_675) , ((*g_221) = (((((*l_672) , g_71) , g_494) < 4294967287UL) != g_676)));
    }
    else
    {
        unsigned l_678 = 0x7F1481FBL;
        int *l_687 = &g_11;
        short *l_713 = &g_266[8];
        struct S0 l_731 = {25,1944,-0,7,-1323,65,951,-204,-0,1600};
        int ***l_737 = &g_12;
        int l_753[7] = {4L, 4L, 5L, 4L, 4L, 5L, 4L};
        int l_773 = 0x422B9F10L;
        int **l_816 = &g_611;
        int i;
        if (((*g_221) = (l_678 && (*p_33))))
        {
            struct S0 l_679 = {16,374,0,7,4156,110,1257,827,5,4802};
            int ***l_680 = (void*)0;
            int **l_688 = &l_687;
            l_687 = (l_679 , func_44(l_680, (safe_sub_func_int8_t_s_s((g_94.f5 != (g_220 & (((((((*l_671) = (safe_sub_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(0x2C41L, 2L)), ((((0xB2L <= (*g_64)) && g_438.f9) > 65533UL) > p_36)))) , (*g_512)) > 0xFB805638L) , l_678) , (-6L)) | 0x9169309DL))), l_678)), (*g_221)));
            (*g_221) = (*p_33);
            (*l_688) = ((**g_593) = (void*)0);
            for (g_498 = 0; (g_498 <= 9); g_498 += 1)
            {
                return &g_12;
            }
        }
        else
        {
            unsigned l_691 = 0x888F81F2L;
            int l_706 = 1L;
            unsigned char l_732 = 0xDCL;
            int **l_736 = &g_512;
            char **l_774 = &l_674[2][4];
            int l_776 = 0x1CFD7AC9L;
            int ***l_817 = &g_610;
            int ***l_818[4];
            int i;
            for (i = 0; i < 4; i++)
                l_818[i] = &l_816;
            for (g_71 = 0; (g_71 >= 45); ++g_71)
            {
                return &g_12;
            }
            if (l_691)
            {
                unsigned short *l_705 = (void*)0;
                int **l_719 = (void*)0;
                struct S0 *l_724[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_724[i] = &l_568;
                (*g_221) = ((((!p_34.f3) , p_36) || (-4L)) , (-3L));
                for (l_589 = (-22); (l_589 != 12); ++l_589)
                {
                    int *l_720 = &g_2;
                    struct S0 *l_721 = (void*)0;
                    if ((l_691 || l_706))
                    {
                        unsigned short l_718 = 65531UL;
                        (**g_593) = p_33;
                        (**g_593) = (((safe_lshift_func_uint8_t_u_s(((((*g_441) = &p_32) != l_713) < ((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(p_34.f5, l_718)), 3)) <= (*l_687))), p_34.f9)) , p_35) , l_720);
                    }
                    else
                    {
                        struct S0 **l_722 = &l_672;
                        struct S0 **l_723 = &l_721;
                        (*l_723) = ((*l_722) = l_721);
                        (*g_12) = p_33;
                    }
                }
                g_94 = (g_438 = p_34);
                (*g_12) = (void*)0;
            }
            else
            {
                unsigned short l_735 = 65535UL;
                int ***l_743 = (void*)0;
                int *l_761 = &l_706;
                int *l_790 = (void*)0;
                l_567.f5 = ((*l_687) = ((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((!(p_35 < 65535UL)), (safe_mul_func_uint16_t_u_u((((p_34.f3 != g_438.f7) | p_36) ^ 0x8DL), p_32)))), 4)) || (*g_442)) < g_296) && p_34.f7));
                if (l_732)
                {
                    unsigned l_738 = 0x1E3AF008L;
                    struct S0 l_739[2] = {{34,212,-0,3,-3859,-94,214,638,-7,2541}, {34,212,-0,3,-3859,-94,214,638,-7,2541}};
                    unsigned l_748 = 0x382342D9L;
                    unsigned char ***l_751 = &g_76;
                    unsigned char ****l_750 = &l_751;
                    unsigned char *****l_749 = &l_750;
                    int i;
                    if (((((g_438.f7 >= p_34.f4) || (safe_rshift_func_uint16_t_u_s(((*g_221) > (*l_687)), 10))) == (*l_687)) , (*l_687)))
                    {
                        struct S0 *l_740[6] = {&l_567, (void*)0, &l_567, (void*)0, &l_567, (void*)0};
                        unsigned short *l_741 = (void*)0;
                        unsigned short *l_742 = &g_71;
                        int i;
                        (*l_687) = (0xC0ECL < ((*g_442) = (65535UL < ((*l_742) = g_438.f4))));
                    }
                    else
                    {
                        return l_743;
                    }
                    if ((((*g_221) = ((*g_64) , ((safe_sub_func_uint8_t_u_u(l_739[1].f9, p_34.f3)) >= (safe_mod_func_int32_t_s_s(0x22D74019L, l_748))))) , ((**l_736) < ((**g_441) > (l_749 != ((safe_unary_minus_func_int32_t_s(l_753[3])) , (void*)0))))))
                    {
                        unsigned short *l_756 = (void*)0;
                        unsigned short *l_757[9] = {&g_176, (void*)0, &g_176, (void*)0, &g_176, (void*)0, &g_176, (void*)0, &g_176};
                        int *l_760[6] = {&l_753[3], &l_753[3], &g_2, &l_753[3], &l_753[3], &g_2};
                        int i;
                        p_34.f5 = ((g_71 = (safe_mul_func_int16_t_s_s(p_34.f8, p_34.f8))) < (safe_add_func_uint16_t_u_u((+(g_94.f7 , 65535UL)), ((*g_442) = p_35))));
                        (**l_591) = (*l_736);
                        l_761 = (((**g_441) = p_34.f1) , l_760[1]);
                    }
                    else
                    {
                        int *l_762 = &g_11;
                        (**l_737) = l_762;
                        (*l_687) = (l_567.f6 & (-2L));
                    }
                }
                else
                {
                    int **l_765 = &g_13[1];
                    char **l_775 = (void*)0;
                    (*l_687) = (safe_rshift_func_uint16_t_u_s(p_34.f8, (**g_441)));
                    (*l_761) = (*g_512);
                    if ((!(1UL && ((safe_mod_func_uint8_t_u_u((**l_736), (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s((p_36 > (**g_76)), 1)), (*l_687))))) ^ (*g_221)))))
                    {
                        int *l_789 = &l_753[3];
                        (*g_221) = ((void*)0 != l_736);
                        l_790 = l_789;
                    }
                    else
                    {
                        unsigned short l_793 = 0x0C7FL;
                        int *l_798 = &g_2;
                        (*g_221) = (p_34.f7 = ((safe_mul_func_int8_t_s_s(l_793, (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((&l_672 == (*g_188)) , ((*p_33) <= ((*l_671) = g_266[0]))), 3)), ((void*)0 != g_799))))) != (*g_442)));
                    }
                }
                for (g_65 = (-7); (g_65 <= 44); g_65++)
                {
                    if (((*g_221) = ((safe_lshift_func_uint16_t_u_s(g_438.f6, 3)) <= (**l_736))))
                    {
                        (*l_736) = p_33;
                    }
                    else
                    {
                        int *l_808 = &l_753[3];
                        (**l_737) = func_44(&g_12, (**g_610), ((*l_808) = ((*l_687) = (*p_33))));
                    }
                    return &g_12;
                }
            }
            (*g_221) = ((p_34.f5 && (((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_438.f7 >= (safe_unary_minus_func_uint8_t_u(((l_819 = ((*l_817) = l_816)) == l_816)))), 6)), l_568.f3)), (((((4294967295UL & ((l_706 = 0x8FL) <= p_34.f2)) , g_820) != (***g_801)) , 0x26E0D878L) <= (*p_33)))) > (**l_736)) != 0xA7L)) || (***g_801));
        }
        (**g_593) = &l_753[3];
        (*g_12) = &g_11;
        (*l_737) = func_55(p_34, p_34.f6, p_34);
    }
    return l_591;
}







static unsigned short func_41(int * p_42, int * p_43)
{
    int l_281[9][7][3] = {{{0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}}, {{0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}}, {{0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}}, {{0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}}, {{0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}}, {{0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}}, {{0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}}, {{0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}}, {{0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}, {0x27F07D8BL, (-1L), (-4L)}}};
    int l_286 = 1L;
    struct S0 l_320[2] = {{2,1275,0,6,5091,-44,631,-233,2,4333}, {2,1275,0,6,5091,-44,631,-233,2,4333}};
    int **l_342 = &g_13[1];
    unsigned l_368[10][10][1] = {{{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}, {{0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}, {0UL}}};
    struct S0 l_375 = {3,762,0,5,3768,-74,242,860,-8,1909};
    short *l_413 = &g_266[3];
    short **l_412 = &l_413;
    unsigned l_415 = 0UL;
    int *l_443 = &l_286;
    unsigned char *l_451 = (void*)0;
    int ***l_551[3];
    short l_557 = 1L;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_551[i] = &l_342;
    if ((l_286 = ((safe_lshift_func_uint16_t_u_u(l_281[8][1][2], ((safe_rshift_func_uint16_t_u_u(g_94.f2, ((0L <= (*p_43)) , l_281[8][1][2]))) || (safe_mod_func_int16_t_s_s(g_94.f1, l_281[8][1][2]))))) == (*g_64))))
    {
        short l_294 = 0xA360L;
        char *l_295 = &g_296;
        int *l_328 = &l_286;
        int l_346 = 0xC1FDE580L;
        char l_372 = (-1L);
        struct S0 l_373 = {39,1196,0,0,-5160,98,757,642,-1,10765};
        int ***l_411 = &l_342;
        unsigned char ***l_436 = &g_76;
        short **l_439 = (void*)0;
        unsigned short l_470 = 3UL;
        int l_473[6] = {0x00BD0FC2L, 0x00BD0FC2L, 0x560E50F5L, 0x00BD0FC2L, 0x00BD0FC2L, 0x560E50F5L};
        unsigned short l_495 = 0xFAF8L;
        struct S0 l_506 = {12,1921,-0,14,3500,69,919,-371,2,7481};
        struct S0 l_529 = {40,1249,-0,9,-3299,13,161,-88,-5,7827};
        char ***l_546 = (void*)0;
        int i;
        if ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((*g_64), ((safe_unary_minus_func_uint8_t_u((1L | ((*l_295) = (safe_sub_func_int16_t_s_s(l_294, l_294)))))) == ((l_294 , 247UL) , 0xD1D6L)))), g_266[8])))
        {
            unsigned l_306 = 0x0B59D0CFL;
            struct S0 l_324 = {44,1201,-0,1,-3492,-11,137,-924,7,211};
            int ***l_338 = &g_12;
            struct S0 *l_362 = &g_94;
            short l_374 = 0xAAC9L;
            for (g_85 = 0; (g_85 != 57); g_85 = safe_add_func_int32_t_s_s(g_85, 4))
            {
                int l_311 = 0xFBD77C71L;
                struct S0 l_321 = {35,1414,-0,11,-4162,106,752,4,-6,7380};
                unsigned char *l_329 = (void*)0;
                struct S0 *l_331 = &l_320[1];
                struct S0 l_333 = {1,1385,-0,3,5670,-103,452,-45,-9,1524};
                int ***l_334 = &g_12;
                int ***l_336 = (void*)0;
                for (g_176 = 0; (g_176 >= 6); ++g_176)
                {
                    struct S0 l_312 = {22,1920,0,4,-4425,-59,1444,-711,10,3108};
                    unsigned char *l_319 = &g_220;
                    int ***l_322 = &g_12;
                    unsigned short l_323 = 0x60D8L;
                    struct S0 *l_325 = &g_94;
                    (*l_325) = (((safe_mod_func_int16_t_s_s(((~(safe_unary_minus_func_uint16_t_u(l_323))) != 0x9AL), l_306)) > 4294967295UL) , l_324);
                }
                if ((*p_43))
                {
                    unsigned char l_326 = 0xF2L;
                    int l_327 = 9L;
                    (*g_12) = func_44((l_326 , &g_12), l_327, l_324.f9);
                    (*g_12) = l_328;
                    if (((*l_328) > (l_329 == ((*g_76) = l_295))))
                    {
                        struct S0 *l_330 = (void*)0;
                        l_331 = l_330;
                    }
                    else
                    {
                        struct S0 l_332 = {28,1843,-0,1,3422,-69,473,341,-9,11581};
                        (*l_331) = l_332;
                        if (l_324.f4)
                            break;
                    }
                    for (g_65 = 0; (g_65 <= 9); g_65 += 1)
                    {
                        int i;
                        g_13[g_65] = p_42;
                    }
                }
                else
                {
                    unsigned short *l_335[7] = {&g_71, &g_71, &g_71, &g_71, &g_71, &g_71, &g_71};
                    int ****l_337 = &l_336;
                    int ****l_339 = &l_338;
                    struct S0 *l_343 = &g_94;
                    int i;
                    (*l_331) = l_333;
                    (*l_342) = func_44((l_334 = &g_12), (*l_328), ((l_324.f5 = (+0x5BE4L)) , ((((*g_221) = (((*l_337) = l_336) != ((*l_339) = l_338))) , (safe_lshift_func_uint8_t_u_u((**g_76), 7))) , (*g_221))));
                    (*l_343) = ((*l_331) = l_320[1]);
                }
                (*l_328) = (*g_221);
            }
            for (g_11 = 0; (g_11 <= 28); g_11++)
            {
                unsigned l_347 = 0x3A8E6423L;
                struct S0 l_351 = {34,6,0,8,-2859,-65,1230,581,9,1387};
                if (l_346)
                {
                    (*g_12) = p_42;
                    return l_347;
                }
                else
                {
                    struct S0 l_354[10] = {{10,553,-0,11,-3273,119,289,172,-0,3747}, {10,553,-0,11,-3273,119,289,172,-0,3747}, {10,553,-0,11,-3273,119,289,172,-0,3747}, {10,553,-0,11,-3273,119,289,172,-0,3747}, {10,553,-0,11,-3273,119,289,172,-0,3747}, {10,553,-0,11,-3273,119,289,172,-0,3747}, {10,553,-0,11,-3273,119,289,172,-0,3747}, {10,553,-0,11,-3273,119,289,172,-0,3747}, {10,553,-0,11,-3273,119,289,172,-0,3747}, {10,553,-0,11,-3273,119,289,172,-0,3747}};
                    int *l_357 = (void*)0;
                    int i;
                    for (l_306 = 0; (l_306 <= 2); l_306 += 1)
                    {
                        short l_348 = (-7L);
                        char **l_349 = &l_295;
                        char ***l_350 = &l_349;
                        l_348 = (*p_42);
                        if ((*p_43))
                            break;
                        (*l_350) = l_349;
                        (*l_342) = p_42;
                    }
                    for (g_71 = 0; (g_71 <= 9); g_71 += 1)
                    {
                        struct S0 *l_352 = (void*)0;
                        struct S0 *l_353 = &l_320[1];
                        (*l_353) = l_351;
                        (*l_353) = l_354[3];
                    }
                    for (g_220 = 9; (g_220 >= 4); --g_220)
                    {
                        return g_94.f7;
                    }
                    (*g_12) = l_357;
                }
            }
            for (g_85 = (-9); (g_85 >= 3); g_85++)
            {
                unsigned char l_369 = 0xADL;
                char ***l_379 = (void*)0;
                int **l_387[6] = {&l_328, &g_13[1], &l_328, &g_13[1], &l_328, &g_13[1]};
                struct S0 l_389 = {2,591,-0,6,168,-47,983,967,-9,247};
                int i;
                for (g_220 = 5; (g_220 < 60); g_220++)
                {
                    struct S0 **l_363 = &l_362;
                    (*l_363) = l_362;
                }
            }
            (*g_221) = (*p_43);
        }
        else
        {
            for (l_372 = 0; (l_372 >= (-22)); l_372 = safe_sub_func_uint32_t_u_u(l_372, 7))
            {
                unsigned l_398 = 0x947F1023L;
                struct S0 l_399[4][3][5] = {{{{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}, {{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}, {{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}}, {{{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}, {{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}, {{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}}, {{{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}, {{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}, {{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}}, {{{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}, {{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}, {{18,611,-0,4,3147,104,815,-783,-5,8489}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {8,1326,-0,9,4108,-87,950,811,9,10865}, {23,1055,0,11,-2683,90,608,-1,-10,7876}, {18,611,-0,4,3147,104,815,-783,-5,8489}}}};
                int i, j, k;
                for (g_65 = 0; (g_65 <= 2); g_65 += 1)
                {
                    char l_397 = (-4L);
                    struct S0 *l_400 = &l_320[1];
                    if ((l_397 == l_398))
                    {
                        int i;
                        (*l_328) = 0x1AB74292L;
                    }
                    else
                    {
                        return g_11;
                    }
                    (*l_400) = l_399[0][2][2];
                    for (g_176 = 0; (g_176 <= 2); g_176 += 1)
                    {
                        unsigned l_409 = 4294967290UL;
                        unsigned char *l_410 = &g_220;
                        (*l_328) = (((*g_221) = 0x2C1DCA76L) <= (safe_sub_func_uint8_t_u_u(((*l_410) = ((((safe_sub_func_uint32_t_u_u(((((safe_rshift_func_int16_t_s_u(l_397, 1)) ^ (l_397 , ((((**g_76) != l_397) && (safe_mul_func_uint8_t_u_u(1UL, ((void*)0 == &l_397)))) != (g_94.f8 , l_409)))) && (*p_42)) < 0L), 1L)) , (*l_328)) && (*g_64)) == 0x0CL)), 0x3AL)));
                        (*g_12) = &g_11;
                    }
                }
            }
        }
        for (l_346 = 0; (l_346 <= 9); l_346 += 1)
        {
            short ***l_414 = &l_412;
            int l_426 = (-5L);
            unsigned char ***l_435 = (void*)0;
            struct S0 l_450 = {9,1404,-0,1,-3185,120,48,388,-0,11061};
            char l_454 = 0x61L;
            int i;
            g_13[l_346] = func_44(l_411, g_94.f0, (*p_43));
            (*l_414) = l_412;
            if (((g_266[8] || (((*p_43) == g_94.f0) >= 0x44L)) > ((void*)0 != &g_266[5])))
            {
                l_375.f2 = ((&l_372 != (((l_415 || (safe_add_func_uint32_t_u_u((*l_328), (safe_rshift_func_uint8_t_u_u(((**g_76) = (safe_lshift_func_int16_t_s_u((0L > (g_94.f0 , (*l_328))), g_2))), 6))))) , (*l_328)) , (void*)0)) | 0x511E5E6EL);
                if ((*p_43))
                    break;
            }
            else
            {
                short l_433 = (-2L);
                int *l_453 = &l_281[3][2][2];
                if (g_427)
                {
                    short l_432 = 0L;
                    struct S0 l_434[9][2] = {{{31,1116,-0,5,-2597,23,77,-918,-5,766}, {28,1682,-0,14,-5379,92,1342,-348,0,9932}}, {{31,1116,-0,5,-2597,23,77,-918,-5,766}, {28,1682,-0,14,-5379,92,1342,-348,0,9932}}, {{31,1116,-0,5,-2597,23,77,-918,-5,766}, {28,1682,-0,14,-5379,92,1342,-348,0,9932}}, {{31,1116,-0,5,-2597,23,77,-918,-5,766}, {28,1682,-0,14,-5379,92,1342,-348,0,9932}}, {{31,1116,-0,5,-2597,23,77,-918,-5,766}, {28,1682,-0,14,-5379,92,1342,-348,0,9932}}, {{31,1116,-0,5,-2597,23,77,-918,-5,766}, {28,1682,-0,14,-5379,92,1342,-348,0,9932}}, {{31,1116,-0,5,-2597,23,77,-918,-5,766}, {28,1682,-0,14,-5379,92,1342,-348,0,9932}}, {{31,1116,-0,5,-2597,23,77,-918,-5,766}, {28,1682,-0,14,-5379,92,1342,-348,0,9932}}, {{31,1116,-0,5,-2597,23,77,-918,-5,766}, {28,1682,-0,14,-5379,92,1342,-348,0,9932}}};
                    struct S0 ***l_437 = &g_189;
                    int i, j;
                    if ((*g_221))
                    {
                        struct S0 l_428 = {41,1893,0,1,5558,26,653,711,10,10821};
                        l_428 = l_373;
                        (*g_221) = (safe_unary_minus_func_int32_t_s((safe_sub_func_int8_t_s_s(l_426, ((l_432 && l_433) && (((*l_295) = ((l_428.f1 , 0x268EL) || g_427)) , 0x8815L))))));
                    }
                    else
                    {
                        int i;
                        g_13[l_346] = (void*)0;
                        g_438 = g_94;
                    }
                }
                else
                {
                    int l_440[4][9][7] = {{{0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}}, {{0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}}, {{0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}}, {{0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}, {0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL, 0L, 0xF081D7FDL}}};
                    short ***l_452[2][9][2] = {{{&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}}, {{&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}, {&g_441, &g_441}}};
                    int i, j, k;
                    (*l_342) = func_44(&l_342, g_438.f1, ((*g_64) <= l_440[3][3][3]));
                    l_443 = p_42;
                    (*l_342) = func_44(l_411, (*l_328), (*l_328));
                }
                (**l_411) = func_44(&g_12, ((*l_453) = l_433), (((***l_414) = (-1L)) ^ (l_454 & 0L)));
            }
        }
        (*l_342) = (void*)0;
        for (g_176 = 0; (g_176 < 57); ++g_176)
        {
            int l_465 = 1L;
            struct S0 l_472 = {2,674,0,0,-2502,23,1319,-938,-7,5744};
            struct S0 **l_474 = (void*)0;
            struct S0 *l_476 = &l_373;
            struct S0 **l_475 = &l_476;
            int **l_521[3];
            char ****l_545[6][9][4] = {{{&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}}, {{&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}}, {{&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}}, {{&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}}, {{&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}}, {{&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}, {&g_376, &g_376, &g_376, &g_376}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_521[i] = &l_328;
            for (g_85 = 0; (g_85 > 60); ++g_85)
            {
                struct S0 l_461 = {22,1756,0,12,963,-95,1153,-304,-1,3004};
                struct S0 *l_462 = &l_320[0];
                int l_471 = 0xB1698CAFL;
                l_461.f4 = (((safe_rshift_func_int16_t_s_u((0x85L <= ((l_342 = func_55(((*l_462) = l_461), ((*g_64) < (((safe_sub_func_uint8_t_u_u((l_465 <= (l_471 = (((((l_461.f5 , (safe_mul_func_uint16_t_u_u((g_438.f5 , 0x9846L), (*g_442)))) & ((safe_mul_func_uint16_t_u_u(0xA16CL, 65526UL)) || 0xBCL)) <= l_465) , (*g_64)) ^ l_470))), l_465)) == (*p_42)) > (*p_42))), l_472)) != &g_13[9])), 0)) >= (*g_442)) < l_473[5]);
            }
            if ((((*l_475) = &l_320[1]) == (void*)0))
            {
                unsigned l_477 = 0xB4FC3091L;
                unsigned *l_480 = &g_85;
                int *l_481 = &l_346;
                unsigned *l_482 = &l_415;
                (*l_328) = (((l_477 > l_472.f1) , (*l_328)) , (((l_472.f7 , ((*l_295) = l_472.f3)) , (*l_443)) >= ((*l_482) = ((((*g_221) == ((*l_481) = (safe_mod_func_int16_t_s_s((((*l_480) = (*l_328)) || (*p_43)), 65527UL)))) , 0x4CA2301EL) , (*l_481)))));
            }
            else
            {
                unsigned *l_491 = &l_415;
                unsigned *l_492 = (void*)0;
                unsigned *l_493 = &g_494;
                unsigned *l_496 = (void*)0;
                unsigned *l_497 = &g_498;
                struct S0 l_505 = {43,582,0,11,-2306,38,560,-197,-5,2714};
                unsigned *l_507 = &l_368[5][7][0];
                unsigned char *l_508 = &g_220;
                unsigned short *l_531[4] = {(void*)0, &l_495, (void*)0, &l_495};
                int i;
                if ((safe_rshift_func_uint8_t_u_s(((*l_508) = ((*g_64) = (((l_505.f4 , 7UL) != (*g_442)) ^ (**g_441)))), 2)))
                {
                    unsigned l_509[7][4][8] = {{{0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}}, {{0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}}, {{0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}}, {{0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}}, {{0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}}, {{0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}}, {{0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}, {0xBAD084C4L, 0xBAD084C4L, 1UL, 4294967286UL, 0x5FF7BC8DL, 4294967295UL, 4294967286UL, 0xBAD084C4L}}};
                    int ***l_513 = &g_12;
                    int i, j, k;
                    if (l_509[3][3][1])
                        break;
                    for (g_427 = 0; (g_427 < (-7)); g_427--)
                    {
                        int ****l_522[10] = {&l_411, (void*)0, &l_411, (void*)0, &l_411, (void*)0, &l_411, (void*)0, &l_411, (void*)0};
                        int i;
                        (*g_12) = g_512;
                        (**l_513) = func_44(l_513, (safe_mul_func_int8_t_s_s(((*l_295) = (*l_328)), l_505.f2)), (*g_221));
                        return g_438.f9;
                    }
                }
                else
                {
                    short **l_527 = &l_413;
                    char l_542[8][2] = {{0xC7L, 0xEBL}, {0xC7L, 0xEBL}, {0xC7L, 0xEBL}, {0xC7L, 0xEBL}, {0xC7L, 0xEBL}, {0xC7L, 0xEBL}, {0xC7L, 0xEBL}, {0xC7L, 0xEBL}};
                    int i, j;
                    for (g_427 = 0; (g_427 <= (-1)); g_427--)
                    {
                        int *l_528 = &l_346;
                        int ****l_530[2][7] = {{&l_411, &l_411, &l_411, &l_411, &l_411, &l_411, &l_411}, {&l_411, &l_411, &l_411, &l_411, &l_411, &l_411, &l_411}};
                        unsigned short **l_532 = (void*)0;
                        unsigned short **l_533 = &l_531[1];
                        unsigned short *l_535[4] = {(void*)0, &l_470, (void*)0, &l_470};
                        unsigned short **l_534 = &l_535[1];
                        int i, j;
                        (*l_342) = ((safe_add_func_int16_t_s_s((*g_442), (&g_442 != l_527))) , l_528);
                        (*l_476) = l_529;
                        (*l_342) = func_44((l_411 = &l_342), (*l_443), (l_542[0][0] = ((((*p_42) , l_413) == ((*l_534) = ((*l_533) = l_531[0]))) , ((*g_221) = ((safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u(((0x2537L || ((**g_441) = (safe_mod_func_uint16_t_u_u((((*l_328) | (-6L)) || g_438.f0), 0xF257L)))) | 0x9EL), (*l_328))) , (*l_328)), 8)) & (*g_64))))));
                    }
                    (**l_411) = (void*)0;
                    (*l_328) = ((*g_221) = 0xF56E50ACL);
                    (*g_12) = p_42;
                }
            }
            (*g_221) = (((*l_443) <= g_266[7]) || (!((g_2 || ((*g_64) , (&g_377[3][0][4] == (l_546 = &g_377[3][3][2])))) , (**g_76))));
        }
    }
    else
    {
        unsigned char **l_547 = &g_64;
        unsigned char ***l_548 = &g_76;
        int ***l_550[7][4] = {{&g_12, &l_342, &g_12, &l_342}, {&g_12, &l_342, &g_12, &l_342}, {&g_12, &l_342, &g_12, &l_342}, {&g_12, &l_342, &g_12, &l_342}, {&g_12, &l_342, &g_12, &l_342}, {&g_12, &l_342, &g_12, &l_342}, {&g_12, &l_342, &g_12, &l_342}};
        int ****l_549[1][2][1];
        struct S0 l_552[10][8][3] = {{{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}, {{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}, {{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}, {{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}, {{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}, {{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}, {{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}, {{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}, {{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}, {{{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}, {{23,1736,0,5,1812,-116,167,-56,-3,2549}, {22,621,0,0,-4754,22,782,-642,-3,9059}, {32,1764,-0,4,-2310,-42,509,772,-6,8519}}}};
        int l_553[10][8] = {{0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}, {0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}, {0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}, {0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}, {0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}, {0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}, {0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}, {0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}, {0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}, {0xE0EAEF29L, 0xE4D44342L, 0L, 0xAEC89622L, 0xCA72A4A4L, 7L, 0xCA72A4A4L, 0xAEC89622L}};
        unsigned *l_556 = &l_368[0][1][0];
        struct S0 *l_558 = &g_438;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 1; k++)
                    l_549[i][j][k] = &l_550[0][2];
            }
        }
        p_43 = func_44(&g_12, g_71, (*p_43));
        (*l_548) = l_547;
        (*l_342) = func_44((l_551[1] = &l_342), g_266[8], (*p_43));
    }
    (*g_221) = (safe_mod_func_uint8_t_u_u(0x0DL, (safe_lshift_func_int16_t_s_s((!(*g_442)), 8))));
    (*g_221) = (*g_221);
    return g_427;
}







static int * func_44(int *** p_45, int p_46, int p_47)
{
    int *l_278 = &g_2;
    (*g_12) = &g_2;
    return l_278;
}







static int *** func_48(unsigned p_49)
{
    int **l_83 = &g_13[1];
    unsigned *l_84[1][4] = {{&g_85, &g_85, &g_85, &g_85}};
    int l_86[4] = {(-2L), 0xBE992D14L, (-2L), 0xBE992D14L};
    int *l_87 = &l_86[2];
    struct S0 l_124 = {17,612,-0,2,31,-111,1215,413,-5,8603};
    unsigned char **l_146 = (void*)0;
    int ***l_165 = &g_12;
    int ****l_164 = &l_165;
    struct S0 *l_167 = &g_94;
    struct S0 **l_166 = &l_167;
    struct S0 l_195 = {1,857,-0,0,-5626,106,460,-665,-2,4268};
    unsigned char ***l_204 = &l_146;
    unsigned char ****l_203[8];
    int *l_223[1][1];
    int *l_256 = &l_86[1];
    short *l_265[1][1];
    short *l_268 = (void*)0;
    struct S0 l_277 = {1,1947,0,10,3933,58,799,-422,-1,5281};
    int i, j;
    for (i = 0; i < 8; i++)
        l_203[i] = &l_204;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_223[i][j] = &g_11;
    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_265[i][j] = &g_266[8];
    }
    if (((*l_87) = (safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_65, ((safe_rshift_func_int8_t_s_u((g_2 ^ func_52(l_83, (p_49 = g_2))), (*g_64))) <= ((*g_64) | (g_71 && (+g_85)))))), l_86[2]))))
    {
        unsigned l_88[6] = {0UL, 0UL, 1UL, 0UL, 0UL, 1UL};
        struct S0 *l_93 = &g_94;
        struct S0 **l_92 = &l_93;
        int *l_103 = &l_86[2];
        int ***l_122 = &l_83;
        int l_134 = (-7L);
        int **l_151 = &g_13[1];
        unsigned char **l_158 = &g_64;
        unsigned char **l_159 = &g_64;
        unsigned l_169 = 3UL;
        short l_174 = 0x2D7DL;
        unsigned l_179[7] = {4294967293UL, 4294967293UL, 0x61081902L, 4294967293UL, 4294967293UL, 0x61081902L, 4294967293UL};
        unsigned l_183 = 4294967286UL;
        unsigned char ***l_201 = &g_76;
        unsigned char ****l_200 = &l_201;
        unsigned short *l_235[6][5] = {{&g_71, &g_71, &g_71, &g_71, &g_176}, {&g_71, &g_71, &g_71, &g_71, &g_176}, {&g_71, &g_71, &g_71, &g_71, &g_176}, {&g_71, &g_71, &g_71, &g_71, &g_176}, {&g_71, &g_71, &g_71, &g_71, &g_176}, {&g_71, &g_71, &g_71, &g_71, &g_176}};
        unsigned short *l_237 = (void*)0;
        int i, j;
        if (l_88[3])
        {
            struct S0 *l_91 = (void*)0;
            struct S0 **l_90 = &l_91;
            struct S0 ***l_89[7][9] = {{&l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90}, {&l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90}, {&l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90}, {&l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90}, {&l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90}, {&l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90}, {&l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90, &l_90}};
            int *l_102 = &g_2;
            int *l_107[7] = {&l_86[2], &l_86[2], &l_86[2], &l_86[2], &l_86[2], &l_86[2], &l_86[2]};
            int i, j;
            l_92 = (void*)0;
            for (g_65 = 1; (g_65 <= 5); g_65 += 1)
            {
                int *l_104[4][7] = {{&g_11, &g_11, (void*)0, &g_11, &g_11, (void*)0, &g_11}, {&g_11, &g_11, (void*)0, &g_11, &g_11, (void*)0, &g_11}, {&g_11, &g_11, (void*)0, &g_11, &g_11, (void*)0, &g_11}, {&g_11, &g_11, (void*)0, &g_11, &g_11, (void*)0, &g_11}};
                int i, j;
                if (l_88[g_65])
                    break;
                for (p_49 = 0; (p_49 <= 0); p_49 += 1)
                {
                    int l_101 = 1L;
                    int **l_108 = &l_103;
                    int i, j;
                    (*l_83) = l_84[p_49][(p_49 + 1)];
                    for (g_85 = 0; (g_85 <= 3); g_85 += 1)
                    {
                        unsigned short *l_100 = &g_71;
                        int i, j;
                        (*l_83) = l_84[p_49][g_85];
                        (*g_12) = ((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(((l_86[(p_49 + 3)] ^ 0xFC586C6AL) , (((*l_100) = (safe_unary_minus_func_uint32_t_u(0xC8FC35A0L))) , (-1L))), (p_49 , (-10L)))), ((((func_52(((g_94.f8 & (0x91L > g_94.f2)) , (void*)0), l_101) ^ p_49) < l_88[g_65]) && 4UL) , l_101))) , (void*)0);
                        l_103 = l_102;
                        (*l_83) = l_104[3][1];
                    }
                    if ((safe_sub_func_uint16_t_u_u((((*l_83) = l_84[p_49][(p_49 + 3)]) != ((*l_108) = l_107[5])), (-3L))))
                    {
                        (*g_12) = (void*)0;
                        (*g_12) = l_104[0][6];
                    }
                    else
                    {
                        int *l_109 = &l_86[1];
                        l_109 = (*g_12);
                    }
                }
            }
        }
        else
        {
            int ***l_111 = &l_83;
            int ****l_110 = &l_111;
            int ***l_112 = &l_83;
            int ****l_113 = &l_112;
            int ****l_119[4] = {&l_112, &l_112, &l_112, &l_112};
            int i;
            if ((((((*l_110) = &g_12) != ((*l_113) = l_112)) , ((*g_12) == (*g_12))) < (-6L)))
            {
                return &g_12;
            }
            else
            {
                unsigned l_116 = 0UL;
                int ***l_123 = &l_83;
                char l_125 = 0L;
                int *l_135 = &g_11;
                (*l_103) = (**g_12);
                if ((**g_12))
                {
                    (***l_113) = ((*l_103) , (*g_12));
                    (*l_103) = (((-1L) ^ (p_49 > (***l_111))) & p_49);
                }
                else
                {
                    int ****l_117[5] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                    int ****l_121[4][5][5] = {{{(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}}, {{(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}}, {{(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}}, {{(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}, {(void*)0, &l_111, &l_112, (void*)0, &l_112}}};
                    int i, j, k;
                    if (((safe_mul_func_int16_t_s_s(l_116, p_49)) > 1UL))
                    {
                        int *****l_118[9][1][7] = {{{&l_110, (void*)0, &l_113, &l_117[4], &l_113, (void*)0, &l_110}}, {{&l_110, (void*)0, &l_113, &l_117[4], &l_113, (void*)0, &l_110}}, {{&l_110, (void*)0, &l_113, &l_117[4], &l_113, (void*)0, &l_110}}, {{&l_110, (void*)0, &l_113, &l_117[4], &l_113, (void*)0, &l_110}}, {{&l_110, (void*)0, &l_113, &l_117[4], &l_113, (void*)0, &l_110}}, {{&l_110, (void*)0, &l_113, &l_117[4], &l_113, (void*)0, &l_110}}, {{&l_110, (void*)0, &l_113, &l_117[4], &l_113, (void*)0, &l_110}}, {{&l_110, (void*)0, &l_113, &l_117[4], &l_113, (void*)0, &l_110}}, {{&l_110, (void*)0, &l_113, &l_117[4], &l_113, (void*)0, &l_110}}};
                        int ****l_120 = (void*)0;
                        int i, j, k;
                        (**l_112) = (((l_119[3] = l_117[0]) != (l_121[2][0][3] = l_120)) , (**l_111));
                        (**l_112) = l_103;
                    }
                    else
                    {
                        return &g_12;
                    }
                    (*l_87) = func_52(func_55(g_94, (*l_87), l_124), l_125);
                }
                if (func_52(&g_13[8], ((safe_lshift_func_uint8_t_u_u((p_49 , ((((safe_mul_func_uint8_t_u_u((func_52(&g_13[4], g_94.f7) ^ g_71), p_49)) || (*l_87)) > (safe_add_func_int8_t_s_s((((l_134 = (((((safe_sub_func_int16_t_s_s(g_71, 1UL)) , g_2) < 1UL) , (*g_64)) < g_94.f6)) == 9UL) ^ 3UL), (*l_87)))) <= g_94.f7)), (*g_64))) , p_49)))
                {
                    int *l_136 = (void*)0;
                    int ***l_137 = &l_83;
                    l_135 = ((**l_122) = (*l_83));
                    if ((***l_112))
                    {
                        (***l_110) = l_136;
                        return &g_12;
                    }
                    else
                    {
                        int *l_138 = (void*)0;
                        (**l_92) = l_124;
                        (**l_112) = (*g_12);
                        (*g_12) = (*g_12);
                        l_138 = (*g_12);
                    }
                    for (g_11 = 0; (g_11 >= 3); g_11 = safe_add_func_int8_t_s_s(g_11, 1))
                    {
                        int ***l_141[5][5] = {{&g_12, (void*)0, &l_83, (void*)0, &g_12}, {&g_12, (void*)0, &l_83, (void*)0, &g_12}, {&g_12, (void*)0, &l_83, (void*)0, &g_12}, {&g_12, (void*)0, &l_83, (void*)0, &g_12}, {&g_12, (void*)0, &l_83, (void*)0, &g_12}};
                        int i, j;
                        return &g_12;
                    }
                    (***l_110) = (*g_12);
                }
                else
                {
                    int l_145 = (-6L);
                    for (g_71 = 0; (g_71 < 6); g_71++)
                    {
                        char l_144[9][7][4] = {{{(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}}, {{(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}}, {{(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}}, {{(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}}, {{(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}}, {{(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}}, {{(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}}, {{(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}}, {{(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}, {(-7L), 0L, 8L, (-10L)}}};
                        int i, j, k;
                        l_144[2][2][0] = 0xE7025324L;
                        (*l_135) = 0L;
                    }
                    (*l_135) = ((**g_12) && ((*l_87) = p_49));
                    (*l_135) = l_145;
                }
            }
            (*l_93) = (**l_92);
            return &g_12;
        }
        if (func_52((g_94.f6 , &g_13[2]), p_49))
        {
            unsigned char ***l_147 = &l_146;
            (*l_147) = l_146;
        }
        else
        {
            int *l_148 = &l_134;
            (*l_83) = l_148;
        }
        for (g_65 = 0; (g_65 <= 5); g_65 += 1)
        {
            unsigned char **l_156 = (void*)0;
            int l_177 = 0x3FBE80DEL;
            unsigned char ***l_182 = &l_146;
            unsigned char ****l_181 = &l_182;
            struct S0 l_190 = {10,1377,-0,2,4768,-108,202,130,5,5312};
            unsigned short *l_193 = (void*)0;
            unsigned short *l_194 = &g_176;
            int **l_216 = (void*)0;
            char l_222[8][6] = {{0L, 0xA3L, 0xE9L, 0xA3L, 0L, 1L}, {0L, 0xA3L, 0xE9L, 0xA3L, 0L, 1L}, {0L, 0xA3L, 0xE9L, 0xA3L, 0L, 1L}, {0L, 0xA3L, 0xE9L, 0xA3L, 0L, 1L}, {0L, 0xA3L, 0xE9L, 0xA3L, 0L, 1L}, {0L, 0xA3L, 0xE9L, 0xA3L, 0L, 1L}, {0L, 0xA3L, 0xE9L, 0xA3L, 0L, 1L}, {0L, 0xA3L, 0xE9L, 0xA3L, 0L, 1L}};
            int i, j;
            (*l_87) = ((void*)0 == (*g_76));
            for (g_11 = 1; (g_11 <= 5); g_11 += 1)
            {
                int *l_152[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_152[i] = &l_86[2];
                for (l_134 = 4; (l_134 >= 0); l_134 -= 1)
                {
                    int *l_153 = &l_86[2];
                    int i;
                    if (l_88[l_134])
                        break;
                    (**l_122) = (*g_12);
                    (*l_87) = p_49;
                    for (g_85 = 0; (g_85 <= 40); g_85 = safe_add_func_uint8_t_u_u(g_85, 6))
                    {
                        (*l_87) = func_52(l_151, p_49);
                        (*l_83) = l_152[1];
                        (*l_83) = (void*)0;
                        (*l_83) = l_153;
                    }
                }
                for (g_85 = (-12); (g_85 > 60); g_85 = safe_add_func_uint32_t_u_u(g_85, 3))
                {
                    unsigned char ***l_157[6][7] = {{(void*)0, &g_76, (void*)0, &g_76, (void*)0, &g_76, (void*)0}, {(void*)0, &g_76, (void*)0, &g_76, (void*)0, &g_76, (void*)0}, {(void*)0, &g_76, (void*)0, &g_76, (void*)0, &g_76, (void*)0}, {(void*)0, &g_76, (void*)0, &g_76, (void*)0, &g_76, (void*)0}, {(void*)0, &g_76, (void*)0, &g_76, (void*)0, &g_76, (void*)0}, {(void*)0, &g_76, (void*)0, &g_76, (void*)0, &g_76, (void*)0}};
                    int i, j;
                    l_159 = (l_158 = l_156);
                }
                for (g_85 = 0; (g_85 == 21); g_85 = safe_add_func_int8_t_s_s(g_85, 3))
                {
                    struct S0 l_180 = {44,1187,-0,9,637,57,980,690,0,5619};
                    if (((safe_sub_func_uint16_t_u_u(func_52(&l_87, p_49), g_94.f6)) , (l_164 == (void*)0)))
                    {
                        unsigned l_168 = 0xDFBDDCB5L;
                        unsigned short *l_175[10] = {(void*)0, &g_176, (void*)0, &g_176, (void*)0, &g_176, (void*)0, &g_176, (void*)0, &g_176};
                        int l_178 = 0x98129C71L;
                        int i;
                        (*l_151) = (*l_151);
                        (*l_87) = (l_166 != &l_93);
                        l_169 = l_168;
                        (*l_87) = (((g_71 > func_52((g_94.f6 , ((l_178 = (l_177 = ((((p_49 || ((safe_add_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((func_52(&g_13[1], l_174) <= p_49), 4)) == (&g_64 != (void*)0)), 255UL)) && 0x9A02L)) ^ g_85) , g_94.f0) , 0xB49CL))) , &g_13[1])), l_179[4])) , 0x86F0DDE4L) | 0x86CCFD89L);
                    }
                    else
                    {
                        l_180 = g_94;
                        if (p_49)
                            continue;
                    }
                }
                return &g_12;
            }
        }
    }
    else
    {
        unsigned l_276[6][7][6] = {{{0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}}, {{0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}}, {{0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}}, {{0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}}, {{0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}}, {{0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}, {0x8A9D31F0L, 0x2BD2A3ABL, 0x3A4BD303L, 5UL, 0xB6A1154AL, 1UL}}};
        int i, j, k;
        l_276[4][4][4] = (p_49 , (-2L));
        (**l_166) = l_277;
        (**l_165) = (**l_165);
    }
    return &g_12;
}







static unsigned short func_52(int ** p_53, unsigned p_54)
{
    unsigned char **l_75 = &g_64;
    (*g_12) = (*g_12);
    g_76 = l_75;
    for (p_54 = 0; p_54 < 10; p_54 += 1)
    {
        g_13[p_54] = &g_2;
    }
    return p_54;
}







static int ** func_55(struct S0 p_56, char p_57, struct S0 p_58)
{
    unsigned l_61 = 18446744073709551610UL;
    unsigned l_70 = 18446744073709551614UL;
    struct S0 l_72 = {35,926,-0,10,-3072,-59,487,-871,-4,9176};
    struct S0 *l_73 = &l_72;
    int **l_74 = &g_13[1];
    (*l_73) = ((l_61 != ((g_71 = (safe_lshift_func_int16_t_s_u((((g_2 <= l_61) , ((((((p_56.f3 , ((g_64 != &g_65) == (l_61 && (((safe_rshift_func_uint8_t_u_u((((((l_61 == ((safe_mul_func_int8_t_s_s(p_58.f4, g_2)) <= l_61)) , (-9L)) , l_61) & 0L) & p_56.f1), 0)) & p_58.f5) < 0x52L)))) ^ l_70) < 1UL) || 6L) == g_2) <= l_61)) >= p_56.f8), g_11))) > p_56.f4)) , l_72);
    return l_74;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_27[i][j][k], "g_27[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_85, "g_85", print_hash_value);
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_94.f7, "g_94.f7", print_hash_value);
    transparent_crc(g_94.f8, "g_94.f8", print_hash_value);
    transparent_crc(g_94.f9, "g_94.f9", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_266[i], "g_266[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_427, "g_427", print_hash_value);
    transparent_crc(g_438.f0, "g_438.f0", print_hash_value);
    transparent_crc(g_438.f1, "g_438.f1", print_hash_value);
    transparent_crc(g_438.f2, "g_438.f2", print_hash_value);
    transparent_crc(g_438.f3, "g_438.f3", print_hash_value);
    transparent_crc(g_438.f4, "g_438.f4", print_hash_value);
    transparent_crc(g_438.f5, "g_438.f5", print_hash_value);
    transparent_crc(g_438.f6, "g_438.f6", print_hash_value);
    transparent_crc(g_438.f7, "g_438.f7", print_hash_value);
    transparent_crc(g_438.f8, "g_438.f8", print_hash_value);
    transparent_crc(g_438.f9, "g_438.f9", print_hash_value);
    transparent_crc(g_494, "g_494", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_518[i][j][k], "g_518[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_930[i][j], "g_930[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_975, "g_975", print_hash_value);
    transparent_crc(g_985, "g_985", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_987[i][j][k], "g_987[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1005, "g_1005", print_hash_value);
    transparent_crc(g_1094, "g_1094", print_hash_value);
    transparent_crc(g_1167, "g_1167", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1169[i], "g_1169[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_1260[i][j].f0, "g_1260[i][j].f0", print_hash_value);
            transparent_crc(g_1260[i][j].f1, "g_1260[i][j].f1", print_hash_value);
            transparent_crc(g_1260[i][j].f2, "g_1260[i][j].f2", print_hash_value);
            transparent_crc(g_1260[i][j].f3, "g_1260[i][j].f3", print_hash_value);
            transparent_crc(g_1260[i][j].f4, "g_1260[i][j].f4", print_hash_value);
            transparent_crc(g_1260[i][j].f5, "g_1260[i][j].f5", print_hash_value);
            transparent_crc(g_1260[i][j].f6, "g_1260[i][j].f6", print_hash_value);
            transparent_crc(g_1260[i][j].f7, "g_1260[i][j].f7", print_hash_value);
            transparent_crc(g_1260[i][j].f8, "g_1260[i][j].f8", print_hash_value);
            transparent_crc(g_1260[i][j].f9, "g_1260[i][j].f9", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1284, "g_1284", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
