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



static int g_2 = 0L;
static unsigned short g_70 = 0x8EDCL;
static unsigned short g_72[8] = {0UL, 8UL, 0UL, 8UL, 0UL, 8UL, 0UL, 8UL};
static int g_74 = (-2L);
static unsigned long long g_76 = 0xFF5F6F594A39B7B3LL;
static int g_95 = 0L;
static int *g_100 = (void*)0;
static unsigned short *g_106 = &g_70;
static unsigned short **g_105[3] = {&g_106, &g_106, &g_106};
static unsigned g_139 = 0xD0F06499L;
static int g_141 = 0x01F4E425L;
static long long g_142 = 2L;
static unsigned long long g_156[1] = {18446744073709551607UL};
static unsigned *g_175 = &g_139;
static unsigned **g_174[2][9] = {{&g_175, &g_175, &g_175, &g_175, &g_175, &g_175, &g_175, &g_175, &g_175}, {&g_175, &g_175, &g_175, &g_175, &g_175, &g_175, &g_175, &g_175, &g_175}};
static unsigned long long *g_179 = &g_156[0];
static unsigned long long **g_178 = &g_179;
static unsigned char g_195 = 1UL;
static char g_211 = 0x59L;
static char g_216 = 1L;
static short g_218 = 0L;
static unsigned ***g_240 = &g_174[1][2];
static int g_325 = 0x447648BDL;
static int *g_361 = (void*)0;
static unsigned char g_383[2] = {0UL, 0UL};
static unsigned g_393 = 0UL;
static char g_415 = 0x7DL;
static int *g_419[7] = {&g_74, &g_74, (void*)0, &g_74, &g_74, (void*)0, &g_74};
static long long g_437[3][4][10] = {{{(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}, {(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}, {(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}, {(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}}, {{(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}, {(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}, {(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}, {(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}}, {{(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}, {(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}, {(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}, {(-3L), (-1L), 0xFB23BA3EBB224FDALL, 0xFB23BA3EBB224FDALL, (-1L), (-3L), 0x20F8E4809A2B2D58LL, 7L, 0x53C80E120C080BE2LL, 0xB5F7BA5FABDF0591LL}}};
static short g_461 = (-3L);
static unsigned long long g_538 = 7UL;
static const short *g_552[4] = {&g_461, &g_218, &g_461, &g_218};
static const short **g_551 = &g_552[2];
static int g_586 = 0xCA61AD9BL;
static char *g_629[8] = {(void*)0, (void*)0, &g_415, (void*)0, (void*)0, &g_415, (void*)0, (void*)0};
static char **g_628[4][8][2] = {{{&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}}, {{&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}}, {{&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}}, {{&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}, {&g_629[6], &g_629[6]}}};
static unsigned g_712 = 0xC45199AAL;
static unsigned char g_713 = 249UL;
static int **g_755 = &g_419[5];
static int ***g_754[8] = {&g_755, &g_755, &g_755, &g_755, &g_755, &g_755, &g_755, &g_755};
static int ****g_753 = &g_754[4];
static short g_803 = 0x7947L;
static char *g_857 = &g_211;
static int g_906[7] = {1L, 0x8BFFEA6AL, 1L, 0x8BFFEA6AL, 1L, 0x8BFFEA6AL, 1L};
static long long g_929 = (-1L);
static unsigned g_964 = 0xF20EB369L;
static unsigned short g_1004 = 0x5861L;



static short func_1(void);
static int func_7(long long p_8, unsigned long long p_9, int p_10, unsigned long long p_11, char p_12);
static short func_13(unsigned char p_14, unsigned p_15, unsigned long long p_16, short p_17);
static unsigned short func_20(int p_21, const unsigned short p_22, long long p_23, unsigned p_24);
static unsigned long long func_39(unsigned p_40, unsigned p_41);
static unsigned long long func_49(char p_50, unsigned p_51, unsigned p_52, unsigned p_53, char p_54);
static char func_61(int p_62, int p_63);
static char func_64(unsigned long long p_65, int p_66);
static long long func_67(unsigned short p_68);
static int * func_82(int p_83, int ** const p_84);
static short func_1(void)
{
    unsigned l_26 = 0x5FA2EF70L;
    int *l_623[5][1] = {{&g_74}, {&g_74}, {&g_74}, {&g_74}, {&g_74}};
    char * const l_665[8] = {&g_211, &g_216, &g_211, &g_216, &g_211, &g_216, &g_211, &g_216};
    unsigned char l_666 = 0x63L;
    char l_690 = 0x72L;
    unsigned l_699 = 0xD489B8CFL;
    int ***l_707 = (void*)0;
    unsigned long long *l_714 = (void*)0;
    unsigned char l_721[6];
    unsigned short l_778 = 0x121AL;
    short *l_791 = (void*)0;
    short **l_790 = &l_791;
    unsigned char l_819 = 0x09L;
    short l_823[9];
    unsigned char l_826 = 8UL;
    unsigned short **l_858 = &g_106;
    unsigned short l_865 = 65527UL;
    long long l_959 = (-1L);
    int *l_972 = &g_74;
    int i, j;
    for (i = 0; i < 6; i++)
        l_721[i] = 8UL;
    for (i = 0; i < 9; i++)
        l_823[i] = 2L;
    for (g_2 = 10; (g_2 > (-20)); g_2 = safe_sub_func_int8_t_s_s(g_2, 1))
    {
        char l_25 = 0L;
        short *l_458 = &g_218;
        short *l_459 = (void*)0;
        short *l_460 = &g_461;
        int l_627 = 0x8A26D010L;
        int * const **l_705 = (void*)0;
        unsigned long long l_730 = 1UL;
        int l_742 = 1L;
        unsigned long long l_760 = 18446744073709551615UL;
        long long l_770[3][5] = {{2L, 2L, (-1L), 2L, 2L}, {2L, 2L, (-1L), 2L, 2L}, {2L, 2L, (-1L), 2L, 2L}};
        unsigned long long l_802 = 0UL;
        int i, j;
        if ((safe_add_func_int32_t_s_s(func_7((0x220985A9L >= (g_2 > 0L)), ((((*l_460) = ((g_2 == g_2) == ((*l_458) = func_13((safe_rshift_func_int16_t_s_s(((g_437[1][1][9] = ((((func_20(l_25, l_25, l_26, g_2) && l_26) ^ l_26) || (*g_179)) <= 0x3DF4L)) || g_2), l_26)), l_25, l_25, g_156[0])))) ^ l_26) && l_25), g_156[0], (*g_179), g_2), 0x6CC97E80L)))
        {
            if ((*g_361))
                break;
        }
        else
        {
            int *l_616 = (void*)0;
            short l_620 = 0x0679L;
            int l_626 = 0xF8CE8F5BL;
            char **l_633 = &g_629[6];
            short l_658 = (-3L);
            short l_667 = (-4L);
            unsigned char l_668[7] = {0x6FL, 0x6FL, 4UL, 0x6FL, 0x6FL, 4UL, 0x6FL};
            int * const ***l_706[9] = {&l_705, &l_705, &l_705, &l_705, &l_705, &l_705, &l_705, &l_705, &l_705};
            int i;
            for (l_25 = (-8); (l_25 != (-1)); ++l_25)
            {
                unsigned long long l_614 = 18446744073709551613UL;
                char *l_615 = &g_216;
                int **l_639[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_639[i] = &l_616;
                if (((((*l_615) = (l_614 = g_415)) != l_26) && l_25))
                {
                    l_616 = &g_95;
                }
                else
                {
                    unsigned short l_619 = 0x3375L;
                    for (g_586 = 0; (g_586 < 25); g_586 = safe_add_func_uint8_t_u_u(g_586, 1))
                    {
                        int *l_621 = &g_74;
                        int **l_622 = (void*)0;
                        l_620 = l_619;
                        l_623[1][0] = l_621;
                    }
                    for (l_26 = 9; (l_26 > 1); --l_26)
                    {
                        l_626 = (&g_174[1][4] != &g_174[0][7]);
                    }
                }
                if ((l_627 = (*g_100)))
                {
                    char ***l_630 = &g_628[1][4][1];
                    char **l_632 = &l_615;
                    char ***l_631[3][3];
                    int **l_634 = &g_419[6];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_631[i][j] = &l_632;
                    }
                    l_633 = ((*l_630) = g_628[2][5][0]);
                    (*l_634) = (void*)0;
                    for (g_325 = 0; (g_325 > (-17)); g_325 = safe_sub_func_uint32_t_u_u(g_325, 1))
                    {
                        (*l_634) = (void*)0;
                    }
                }
                else
                {
                    return (**g_551);
                }
                g_419[6] = func_82((g_156[0] & (safe_add_func_uint8_t_u_u(g_383[1], 0xE1L))), &g_419[4]);
            }
            if ((*g_361))
            {
                char ***l_640 = &g_628[2][5][0];
                int l_648[9][10] = {{0xEFCDA477L, 0x0730B60DL, 0L, 5L, 0xE9281F35L, (-7L), (-1L), 0x19B76634L, 0L, 0x19B76634L}, {0xEFCDA477L, 0x0730B60DL, 0L, 5L, 0xE9281F35L, (-7L), (-1L), 0x19B76634L, 0L, 0x19B76634L}, {0xEFCDA477L, 0x0730B60DL, 0L, 5L, 0xE9281F35L, (-7L), (-1L), 0x19B76634L, 0L, 0x19B76634L}, {0xEFCDA477L, 0x0730B60DL, 0L, 5L, 0xE9281F35L, (-7L), (-1L), 0x19B76634L, 0L, 0x19B76634L}, {0xEFCDA477L, 0x0730B60DL, 0L, 5L, 0xE9281F35L, (-7L), (-1L), 0x19B76634L, 0L, 0x19B76634L}, {0xEFCDA477L, 0x0730B60DL, 0L, 5L, 0xE9281F35L, (-7L), (-1L), 0x19B76634L, 0L, 0x19B76634L}, {0xEFCDA477L, 0x0730B60DL, 0L, 5L, 0xE9281F35L, (-7L), (-1L), 0x19B76634L, 0L, 0x19B76634L}, {0xEFCDA477L, 0x0730B60DL, 0L, 5L, 0xE9281F35L, (-7L), (-1L), 0x19B76634L, 0L, 0x19B76634L}, {0xEFCDA477L, 0x0730B60DL, 0L, 5L, 0xE9281F35L, (-7L), (-1L), 0x19B76634L, 0L, 0x19B76634L}};
                unsigned *l_660 = &l_26;
                int *l_681 = &l_626;
                int i, j;
                if ((((*l_640) = &g_629[6]) == l_633))
                {
                    unsigned short l_641 = 65535UL;
                    unsigned char *l_651 = &g_195;
                    unsigned *l_659[6][8][5] = {{{&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}}, {{&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}}, {{&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}}, {{&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}}, {{&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}}, {{&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}, {&l_26, &g_139, &l_26, &l_26, &l_26}}};
                    int l_669 = 1L;
                    short * const *l_672[8][4][4] = {{{&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}}, {{&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}}, {{&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}}, {{&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}}, {{&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}}, {{&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}}, {{&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}}, {{&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}, {&l_458, (void*)0, &l_458, &l_459}}};
                    int **l_679 = &l_616;
                    int ***l_678[3][9][6] = {{{&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}}, {{&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}}, {{&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}, {&l_679, &l_679, (void*)0, &l_679, &l_679, &l_679}}};
                    int ***l_680 = &l_679;
                    int i, j, k;
                    l_648[3][2] = (l_641 <= ((((*l_651) = ((safe_lshift_func_int8_t_s_u((safe_div_func_int32_t_s_s(((void*)0 == &g_552[2]), (safe_div_func_uint16_t_u_u(func_61(l_648[3][2], (0x7DL && func_67(l_641))), ((*l_460) = (safe_add_func_uint64_t_u_u(0UL, (**g_178)))))))), 2)) <= g_2)) | 0xA3L) & l_648[2][8]));
                    if (((((func_64(l_648[2][4], (l_668[0] = (func_39(((safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((safe_div_func_uint64_t_u_u((*g_179), l_648[7][5])), l_648[3][2])), 5)) ^ ((l_658 <= func_39((l_659[5][3][0] != l_660), (l_641 ^ ((safe_add_func_int8_t_s_s((safe_add_func_int8_t_s_s((l_666 = ((((((void*)0 == l_665[7]) != 0L) != 0x696D27BEF5E952D7LL) && g_383[0]) < 18446744073709551615UL)), g_325)), l_25)) && l_667)))) <= 0L)), l_25) != l_648[3][2]))) || l_648[3][2]) & l_658) > 0x3F2D156C00769C40LL) || l_669))
                    {
                        int **l_677 = &g_419[3];
                        (*l_677) = &g_2;
                        if ((*g_361))
                            break;
                    }
                    else
                    {
                        return l_641;
                    }
                    l_681 = &g_95;
                }
                else
                {
                    for (l_25 = 0; (l_25 < 3); l_25 = safe_add_func_uint32_t_u_u(l_25, 2))
                    {
                        (*l_681) = (g_538 > (**g_178));
                    }
                }
                for (l_620 = 0; (l_620 <= 0); l_620 += 1)
                {
                    unsigned long long l_691 = 0x482497A15904ECC8LL;
                    int i, j;
                    l_627 = (((*l_681) = (safe_sub_func_uint64_t_u_u((*g_179), (safe_add_func_int32_t_s_s(l_627, (safe_mod_func_uint16_t_u_u((((void*)0 == &g_419[1]) >= ((((*l_681) & g_156[0]) & 0xD7F9L) >= (l_690 | l_658))), (*l_681)))))))) && l_691);
                    return (**g_551);
                }
            }
            else
            {
                short l_696 = (-1L);
                int l_700 = 1L;
                l_700 = (safe_add_func_int16_t_s_s(((func_13((func_64(func_7(g_325, l_627, (safe_lshift_func_uint8_t_u_u(l_696, g_437[2][1][6])), (func_61((*g_100), (*g_100)) | ((*l_458) = (l_25 == (safe_sub_func_uint64_t_u_u(l_696, g_586))))), l_25), l_627) > g_538), l_627, l_627, l_627) >= l_699) > g_437[1][0][3]), 65532UL));
                l_627 = ((*g_178) != (*g_178));
            }
            g_713 = ((((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(1UL, (((l_705 = l_705) != l_707) & (safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(((l_25 || (g_712 = (-1L))) && ((void*)0 != &l_707)), 18446744073709551608UL)), l_25))))), 1)) | (*g_175)) && (*g_361)) < g_325);
        }
        l_627 = (((void*)0 == l_714) || ((safe_rshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(l_627, (safe_sub_func_int8_t_s_s(l_721[2], l_25)))), g_156[0])) == ((((safe_sub_func_int64_t_s_s(g_461, ((safe_sub_func_uint64_t_u_u((!(safe_add_func_int64_t_s_s(g_415, ((safe_sub_func_uint8_t_u_u(1UL, l_730)) && l_25)))), g_218)) != l_25))) & l_627) ^ (**g_551)) & (-1L))));
        for (g_415 = 3; (g_415 > (-20)); g_415 = safe_sub_func_uint8_t_u_u(g_415, 1))
        {
            unsigned long long l_733 = 5UL;
            unsigned l_738[9][1][10] = {{{1UL, 0x2E4BD962L, 0x2A7B49C2L, 0x12C987DFL, 0x2A7B49C2L, 0x2E4BD962L, 1UL, 1UL, 0UL, 4294967295UL}}, {{1UL, 0x2E4BD962L, 0x2A7B49C2L, 0x12C987DFL, 0x2A7B49C2L, 0x2E4BD962L, 1UL, 1UL, 0UL, 4294967295UL}}, {{1UL, 0x2E4BD962L, 0x2A7B49C2L, 0x12C987DFL, 0x2A7B49C2L, 0x2E4BD962L, 1UL, 1UL, 0UL, 4294967295UL}}, {{1UL, 0x2E4BD962L, 0x2A7B49C2L, 0x12C987DFL, 0x2A7B49C2L, 0x2E4BD962L, 1UL, 1UL, 0UL, 4294967295UL}}, {{1UL, 0x2E4BD962L, 0x2A7B49C2L, 0x12C987DFL, 0x2A7B49C2L, 0x2E4BD962L, 1UL, 1UL, 0UL, 4294967295UL}}, {{1UL, 0x2E4BD962L, 0x2A7B49C2L, 0x12C987DFL, 0x2A7B49C2L, 0x2E4BD962L, 1UL, 1UL, 0UL, 4294967295UL}}, {{1UL, 0x2E4BD962L, 0x2A7B49C2L, 0x12C987DFL, 0x2A7B49C2L, 0x2E4BD962L, 1UL, 1UL, 0UL, 4294967295UL}}, {{1UL, 0x2E4BD962L, 0x2A7B49C2L, 0x12C987DFL, 0x2A7B49C2L, 0x2E4BD962L, 1UL, 1UL, 0UL, 4294967295UL}}, {{1UL, 0x2E4BD962L, 0x2A7B49C2L, 0x12C987DFL, 0x2A7B49C2L, 0x2E4BD962L, 1UL, 1UL, 0UL, 4294967295UL}}};
            int l_741 = 0x5325BB10L;
            long long l_743 = 0x546A8452EEE0DE7ALL;
            long long l_746 = 0L;
            int i, j, k;
            l_742 = (l_627 = ((l_733 <= (l_730 < (safe_lshift_func_int16_t_s_s((safe_div_func_int8_t_s_s(((l_733 & l_738[4][0][0]) & ((func_13(g_72[2], l_627, ((**g_178) = ((safe_sub_func_uint8_t_u_u(0x99L, (l_741 = l_738[4][0][0]))) <= l_730)), (**g_551)) <= 2UL) < l_627)), l_738[8][0][7])), 11)))) | l_738[4][0][0]));
            l_741 = l_743;
            if ((safe_sub_func_uint16_t_u_u(65535UL, (((-8L) != (l_460 != (*g_551))) && 0xF9L))))
            {
                int **l_747 = &g_361;
                int l_750 = 0xA14A4196L;
                unsigned char l_763 = 0xDCL;
                (*l_747) = (g_419[1] = func_82((l_746 = 0x7E402FBCL), &g_419[0]));
                for (l_25 = 0; (l_25 != 21); l_25++)
                {
                    unsigned l_756 = 1UL;
                    int l_759[5][1] = {{0x17B81FB9L}, {0x17B81FB9L}, {0x17B81FB9L}, {0x17B81FB9L}, {0x17B81FB9L}};
                    int i, j;
                    l_750 = (*g_100);
                    if ((*g_100))
                        continue;
                    if (((safe_sub_func_uint64_t_u_u(((((l_756 = ((void*)0 == g_753)) < (safe_sub_func_int8_t_s_s(func_13(l_759[2][0], l_760, (*g_179), (**g_551)), 0x49L))) == 0xDCL) != l_759[3][0]), g_195)) > (**g_551)))
                    {
                        return (**g_551);
                    }
                    else
                    {
                        l_741 = l_759[2][0];
                        (*l_747) = (*g_755);
                    }
                }
                for (g_76 = 0; (g_76 >= 22); g_76 = safe_add_func_int64_t_s_s(g_76, 7))
                {
                    int l_764 = 3L;
                    if ((~l_750))
                    {
                        if (l_750)
                            break;
                        if (l_746)
                            break;
                    }
                    else
                    {
                        int l_767 = 1L;
                        if ((*g_100))
                            break;
                        l_741 = l_763;
                        l_767 = (l_764 || ((safe_rshift_func_uint16_t_u_u((*g_106), 10)) & func_67(((-1L) | (**g_178)))));
                        l_741 = (safe_rshift_func_int16_t_s_s((((*l_458) = l_764) < 1UL), 11));
                    }
                    return (**g_551);
                }
                l_741 = l_770[1][0];
            }
            else
            {
                unsigned char l_773 = 0x14L;
                int l_804 = 0xEA5ECCACL;
                for (g_74 = 10; (g_74 < 23); g_74 = safe_add_func_int8_t_s_s(g_74, 7))
                {
                    (***g_753) = (void*)0;
                }
                if (l_773)
                {
                    unsigned l_777 = 0x21EDE268L;
                    unsigned l_781[9] = {0x26BA1A55L, 0x7AEE8F77L, 0x26BA1A55L, 0x7AEE8F77L, 0x26BA1A55L, 0x7AEE8F77L, 0x26BA1A55L, 0x7AEE8F77L, 0x26BA1A55L};
                    unsigned long long * const *l_793 = &g_179;
                    unsigned long long * const **l_792 = &l_793;
                    int l_794 = (-1L);
                    int i;
                    for (g_76 = 16; (g_76 > 28); ++g_76)
                    {
                        unsigned short l_776 = 0x5065L;
                        l_627 = (l_776 == (l_777 >= ((0UL > func_67((l_778 <= (safe_rshift_func_uint8_t_u_s((((*l_460) = (func_67(l_781[5]) ^ ((**g_178) = ((**g_551) != (safe_div_func_uint32_t_u_u(((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((**g_551), (0xFDL > g_538))), l_777)) > (*g_361)), (-1L))))))) < (*g_106)), 5))))) ^ l_773)));
                        l_741 = (*g_361);
                        (***g_753) = (*g_755);
                    }
                    l_794 = (((safe_lshift_func_int8_t_s_s((((void*)0 != l_790) <= (+l_781[5])), (((-1L) | ((l_792 == &g_178) < (*g_179))) <= l_773))) ^ l_773) & g_437[0][1][6]);
                    for (l_760 = 1; (l_760 != 16); ++l_760)
                    {
                        (*g_755) = (***g_753);
                    }
                    g_803 = (l_781[6] || (safe_add_func_uint16_t_u_u((((((l_770[1][0] > (((*g_179) >= (safe_sub_func_uint8_t_u_u((safe_unary_minus_func_int64_t_s(g_211)), l_802))) > (((void*)0 != &g_552[3]) != g_383[1]))) != l_794) ^ (*g_179)) && 9UL) == (**g_551)), 0x3D95L)));
                }
                else
                {
                    return l_746;
                }
                l_804 = (18446744073709551610UL <= ((l_741 <= 6L) == ((void*)0 == &g_552[2])));
            }
            (***g_753) = (*g_755);
        }
    }
    for (g_76 = (-3); (g_76 == 20); g_76 = safe_add_func_uint8_t_u_u(g_76, 1))
    {
        short l_807 = 0x9412L;
        int l_808 = 0x3DA49BE2L;
        int *l_824[7] = {&g_2, &l_808, &g_2, &l_808, &g_2, &l_808, &g_2};
        unsigned l_847 = 18446744073709551615UL;
        int *l_852 = &g_95;
        unsigned long long l_878 = 0UL;
        unsigned char *l_880[2][4][5] = {{{&l_666, &l_721[3], &l_721[1], &l_721[1], &l_721[3]}, {&l_666, &l_721[3], &l_721[1], &l_721[1], &l_721[3]}, {&l_666, &l_721[3], &l_721[1], &l_721[1], &l_721[3]}, {&l_666, &l_721[3], &l_721[1], &l_721[1], &l_721[3]}}, {{&l_666, &l_721[3], &l_721[1], &l_721[1], &l_721[3]}, {&l_666, &l_721[3], &l_721[1], &l_721[1], &l_721[3]}, {&l_666, &l_721[3], &l_721[1], &l_721[1], &l_721[3]}, {&l_666, &l_721[3], &l_721[1], &l_721[1], &l_721[3]}}};
        unsigned char **l_879 = &l_880[1][3][2];
        int l_963 = (-10L);
        int i, j, k;
    }
    return (**g_551);
}







static int func_7(long long p_8, unsigned long long p_9, int p_10, unsigned long long p_11, char p_12)
{
    unsigned short l_464 = 0UL;
    int *l_466[3];
    int *l_511 = &g_74;
    short l_527 = 0xB962L;
    unsigned long long *l_548 = &g_538;
    long long *l_564 = &g_437[0][3][9];
    long long **l_563 = &l_564;
    unsigned long long ***l_609 = &g_178;
    int i;
    for (i = 0; i < 3; i++)
        l_466[i] = &g_74;
    if ((safe_lshift_func_uint16_t_u_s(l_464, 13)))
    {
        int **l_465[8] = {&g_361, &g_361, &g_361, &g_361, &g_361, &g_361, &g_361, &g_361};
        int i;
        l_466[1] = func_82(l_464, &g_419[1]);
    }
    else
    {
        unsigned char l_491 = 0x81L;
        int l_495 = 0x19E3B03DL;
        int *l_498 = &g_95;
        unsigned short ***l_525 = (void*)0;
        unsigned long long l_528 = 0UL;
        char *l_558 = &g_216;
        char **l_557 = &l_558;
        for (l_464 = 0; (l_464 <= 0); l_464 += 1)
        {
            unsigned l_476 = 0x1F40AD70L;
            int l_486 = (-1L);
            long long *l_493 = (void*)0;
            long long **l_492 = &l_493;
            int l_496 = (-2L);
            for (g_211 = 2; (g_211 >= 0); g_211 -= 1)
            {
                int l_477[2][1][1];
                char l_494 = 8L;
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_477[i][j][k] = (-4L);
                    }
                }
                l_466[g_211] = &g_2;
            }
        }
        for (g_415 = 0; (g_415 >= (-1)); g_415 = safe_sub_func_int32_t_s_s(g_415, 3))
        {
            char l_521 = 0xD2L;
            long long *l_522[9] = {&g_437[1][0][3], &g_437[1][2][9], &g_437[1][0][3], &g_437[1][2][9], &g_437[1][0][3], &g_437[1][2][9], &g_437[1][0][3], &g_437[1][2][9], &g_437[1][0][3]};
            int **l_523 = &g_419[1];
            int i;
            (*l_523) = func_82((!((safe_add_func_int8_t_s_s(g_383[1], ((safe_add_func_int64_t_s_s(((safe_div_func_uint64_t_u_u(((**g_178) != 1L), func_64((**g_178), l_521))) ^ p_9), (p_8 = (0xC3F3F374L < 1UL)))) && 0UL))) & 0x16L)), &g_419[5]);
            if ((*l_511))
                continue;
            return l_521;
        }
        for (p_11 = 0; (p_11 <= 6); p_11 += 1)
        {
            unsigned char *l_526 = &l_491;
            int l_529 = (-1L);
            unsigned long long *l_547[4][5] = {{&g_156[0], (void*)0, &g_76, (void*)0, &g_156[0]}, {&g_156[0], (void*)0, &g_76, (void*)0, &g_156[0]}, {&g_156[0], (void*)0, &g_76, (void*)0, &g_156[0]}, {&g_156[0], (void*)0, &g_76, (void*)0, &g_156[0]}};
            short l_550 = (-3L);
            long long **l_566 = &l_564;
            int l_571 = (-1L);
            unsigned l_597 = 0xE930FD7EL;
            int i, j;
            (*l_511) = (g_156[0] == (func_13(((*l_526) = (!func_20(p_9, p_12, (safe_unary_minus_func_int8_t_s((g_325 && (((void*)0 == l_525) & g_95)))), p_9))), l_527, (**g_178), l_528) >= p_9));
            if (l_529)
                break;
            for (g_195 = 0; (g_195 <= 2); g_195 += 1)
            {
                int **l_530[8][5] = {{&g_419[p_11], &l_498, &g_100, &g_100, &l_498}, {&g_419[p_11], &l_498, &g_100, &g_100, &l_498}, {&g_419[p_11], &l_498, &g_100, &g_100, &l_498}, {&g_419[p_11], &l_498, &g_100, &g_100, &l_498}, {&g_419[p_11], &l_498, &g_100, &g_100, &l_498}, {&g_419[p_11], &l_498, &g_100, &g_100, &l_498}, {&g_419[p_11], &l_498, &g_100, &g_100, &l_498}, {&g_419[p_11], &l_498, &g_100, &g_100, &l_498}};
                unsigned long long **l_537 = &g_179;
                int i, j;
                l_466[1] = &l_495;
                (*l_511) = func_13(func_67((*l_511)), p_11, ((**g_178) = (*g_179)), (safe_div_func_uint64_t_u_u(p_10, (safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(func_13(((void*)0 == l_537), (+(*g_175)), p_9, g_461), 253UL)), p_8)))));
                l_466[1] = (g_419[1] = func_82(((*l_498) & ((&g_461 == (void*)0) < func_67(p_11))), &g_419[p_11]));
            }
        }
    }
    (*l_511) = p_8;
    for (g_74 = 0; (g_74 != (-4)); g_74 = safe_sub_func_int16_t_s_s(g_74, 3))
    {
        int **l_605 = &l_466[0];
        int l_606 = (-1L);
        unsigned long long ***l_610[2][6][3];
        short *l_611 = &l_527;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 6; j++)
            {
                for (k = 0; k < 3; k++)
                    l_610[i][j][k] = (void*)0;
            }
        }
        (*l_605) = &g_2;
        l_606 = (*g_361);
        l_606 = (safe_add_func_uint16_t_u_u((((l_610[1][1][0] = l_609) != (void*)0) >= g_70), ((*l_611) = (*l_511))));
    }
    return (*l_511);
}







static short func_13(unsigned char p_14, unsigned p_15, unsigned long long p_16, short p_17)
{
    short l_454 = 5L;
    int ** const l_455 = &g_361;
    int **l_456 = (void*)0;
    int **l_457[4][6] = {{&g_419[2], &g_419[1], &g_419[1], &g_419[1], &g_419[2], &g_419[5]}, {&g_419[2], &g_419[1], &g_419[1], &g_419[1], &g_419[2], &g_419[5]}, {&g_419[2], &g_419[1], &g_419[1], &g_419[1], &g_419[2], &g_419[5]}, {&g_419[2], &g_419[1], &g_419[1], &g_419[1], &g_419[2], &g_419[5]}};
    int i, j;
    (*l_455) = func_82((l_454 >= p_14), l_455);
    g_100 = ((*l_455) = (*l_455));
    return g_218;
}







static unsigned short func_20(int p_21, const unsigned short p_22, long long p_23, unsigned p_24)
{
    unsigned long long l_46[6][7] = {{18446744073709551615UL, 18446744073709551607UL, 0xF356D9DE360ABED9LL, 18446744073709551607UL, 18446744073709551615UL, 0UL, 0xF356D9DE360ABED9LL}, {18446744073709551615UL, 18446744073709551607UL, 0xF356D9DE360ABED9LL, 18446744073709551607UL, 18446744073709551615UL, 0UL, 0xF356D9DE360ABED9LL}, {18446744073709551615UL, 18446744073709551607UL, 0xF356D9DE360ABED9LL, 18446744073709551607UL, 18446744073709551615UL, 0UL, 0xF356D9DE360ABED9LL}, {18446744073709551615UL, 18446744073709551607UL, 0xF356D9DE360ABED9LL, 18446744073709551607UL, 18446744073709551615UL, 0UL, 0xF356D9DE360ABED9LL}, {18446744073709551615UL, 18446744073709551607UL, 0xF356D9DE360ABED9LL, 18446744073709551607UL, 18446744073709551615UL, 0UL, 0xF356D9DE360ABED9LL}, {18446744073709551615UL, 18446744073709551607UL, 0xF356D9DE360ABED9LL, 18446744073709551607UL, 18446744073709551615UL, 0UL, 0xF356D9DE360ABED9LL}};
    long long *l_420[8][9][3] = {{{&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}}, {{&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}}, {{&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}}, {{&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}}, {{&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}}, {{&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}}, {{&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}}, {{&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}, {&g_142, &g_142, &g_142}}};
    int l_421 = 9L;
    int ** const l_424[10] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
    unsigned l_429[7] = {4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL, 0UL, 4294967295UL};
    int i, j, k;
    if ((65533UL != (safe_rshift_func_int8_t_s_s((((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s((((l_421 = (((safe_mod_func_int32_t_s_s(((0x77B69C93L & ((safe_lshift_func_int8_t_s_s((safe_div_func_int64_t_s_s(0x26CDEE94CCB090AELL, func_39((safe_add_func_uint32_t_u_u((safe_add_func_int64_t_s_s(g_2, l_46[4][2])), ((safe_mod_func_uint64_t_u_u(func_49(((0L == 255UL) > (safe_rshift_func_int8_t_s_s(g_2, 5))), p_21, p_22, l_46[4][5], p_23), g_139)) > 0xED37AC70L))), p_21))), l_46[4][2])) != p_23)) == 0x65L), p_23)) == 4294967295UL) & 0xCE97L)) | 0x439A260F41EE8F79LL) > g_383[1]), 0xF2L)) & g_2), g_383[1])) >= p_23) || 1L), 4))))
    {
        int ** const l_422 = &g_419[1];
        (*l_422) = func_82(p_24, l_422);
        return (*g_106);
    }
    else
    {
        int *l_423 = &g_74;
        g_100 = &g_95;
    }
    p_21 = ((-10L) || (safe_div_func_uint8_t_u_u(func_67(func_61(p_24, (safe_sub_func_uint8_t_u_u(g_74, (((p_24 & p_24) < (-7L)) > ((**g_178) > (p_24 < (*g_100)))))))), l_429[2])));
    for (g_211 = 0; g_211 < 2; g_211 += 1)
    {
        g_383[g_211] = 0x7DL;
    }
    for (g_95 = 0; (g_95 <= 0); g_95 += 1)
    {
        unsigned long long *** const l_444 = &g_178;
        int *l_446[2][3] = {{&g_74, (void*)0, &g_74}, {&g_74, (void*)0, &g_74}};
        unsigned char l_453[2];
        int i, j;
        for (i = 0; i < 2; i++)
            l_453[i] = 0x4AL;
        for (g_142 = 1; (g_142 <= 7); g_142 += 1)
        {
            int l_430 = 0x9E625C92L;
            long long *l_436[10];
            int l_445 = 0xC42C7830L;
            int l_449 = 0x3F320E88L;
            int i;
            for (i = 0; i < 10; i++)
                l_436[i] = &g_437[1][0][3];
            if (l_430)
            {
                int *l_431 = &l_421;
                l_431 = &p_21;
                (*l_431) = func_67((*l_431));
                (*l_431) = ((*l_431) | g_156[0]);
            }
            else
            {
                int i;
                l_445 = (p_21 = (safe_mod_func_uint64_t_u_u(((l_429[(g_95 + 2)] = 4294967292UL) | (safe_add_func_int8_t_s_s((&g_142 == (l_436[6] = &g_142)), (safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(p_22, p_22)), (p_21 < ((safe_add_func_int16_t_s_s(1L, (l_444 != (void*)0))) > l_430))))))), 0x880848E3E9AFF7FALL)));
                if ((l_446[0][2] != (void*)0))
                {
                    int *l_447 = &g_74;
                    l_447 = &g_74;
                    l_445 = ((*l_447) = p_24);
                }
                else
                {
                    g_361 = (void*)0;
                }
                if (l_445)
                    continue;
            }
            for (l_430 = 0; (l_430 <= 7); l_430 += 1)
            {
                short l_448 = (-1L);
                unsigned long long l_452 = 0x9A5AC69248938E8CLL;
                for (g_211 = 0; (g_211 <= 1); g_211 += 1)
                {
                    int i, j;
                    l_446[(g_95 + 1)][(g_95 + 2)] = l_446[0][2];
                    if (l_448)
                    {
                        p_21 = l_449;
                    }
                    else
                    {
                        int i, j;
                        p_21 = ((safe_mod_func_uint32_t_u_u(4294967294UL, l_452)) > l_453[0]);
                        p_21 = 4L;
                        return p_21;
                    }
                    if (p_22)
                        continue;
                    if (p_23)
                        continue;
                }
                g_361 = &p_21;
            }
            if (p_21)
                continue;
        }
    }
    return (*g_106);
}







static unsigned long long func_39(unsigned p_40, unsigned p_41)
{
    int *l_351 = &g_74;
    int **l_352[3][2][9] = {{{&g_100, (void*)0, &g_100, (void*)0, &l_351, &l_351, &g_100, &g_100, &l_351}, {&g_100, (void*)0, &g_100, (void*)0, &l_351, &l_351, &g_100, &g_100, &l_351}}, {{&g_100, (void*)0, &g_100, (void*)0, &l_351, &l_351, &g_100, &g_100, &l_351}, {&g_100, (void*)0, &g_100, (void*)0, &l_351, &l_351, &g_100, &g_100, &l_351}}, {{&g_100, (void*)0, &g_100, (void*)0, &l_351, &l_351, &g_100, &g_100, &l_351}, {&g_100, (void*)0, &g_100, (void*)0, &l_351, &l_351, &g_100, &g_100, &l_351}}};
    int ***l_418 = &l_352[1][0][8];
    int i, j, k;
    g_100 = l_351;
    for (g_74 = 0; (g_74 >= (-14)); g_74 = safe_sub_func_uint8_t_u_u(g_74, 4))
    {
        unsigned l_357 = 0xAA44AC05L;
        int *l_360 = &g_74;
        int l_364 = 0x9E21C6ADL;
        for (g_216 = (-27); (g_216 < (-14)); g_216 = safe_add_func_int32_t_s_s(g_216, 9))
        {
            int *l_359 = (void*)0;
            if ((l_357 = (*g_100)))
            {
                int *l_358 = &g_2;
                l_359 = l_358;
            }
            else
            {
                g_100 = l_360;
                return (**g_178);
            }
            g_361 = func_82(p_40, &l_359);
            l_359 = l_360;
            l_359 = func_82((*g_361), &g_361);
        }
        for (g_141 = (-8); (g_141 == (-6)); g_141++)
        {
            unsigned l_373 = 1UL;
            short *l_374[7] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
            unsigned ***l_381[10];
            int l_382 = 0xF0FFA9F0L;
            int l_384 = 0xC8CFE953L;
            int i;
            for (i = 0; i < 10; i++)
                l_381[i] = &g_174[1][4];
            l_364 = ((*l_360) ^ (g_139 && 7L));
            l_384 = (safe_sub_func_int64_t_s_s(g_76, (safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s(((*l_360) || (l_373 != (g_218 = 0x81EDL))), 4294967295UL)), (safe_lshift_func_int16_t_s_u((!(safe_div_func_uint16_t_u_u((*l_360), (l_382 = ((safe_mod_func_uint64_t_u_u(((void*)0 != l_381[4]), (*g_179))) && (*l_360)))))), g_383[1]))))));
        }
        for (g_195 = 15; (g_195 != 26); ++g_195)
        {
            char **l_387 = (void*)0;
            int l_391 = (-4L);
            unsigned l_409 = 0UL;
            l_364 = (*g_100);
            if ((*l_351))
            {
                char ***l_388 = (void*)0;
                char ***l_389 = &l_387;
                (*l_389) = l_387;
                return p_40;
            }
            else
            {
                long long l_390 = 0x72F35EB201C3AF00LL;
                unsigned *l_392 = &g_393;
                int l_394 = (-1L);
                char *l_410 = &g_216;
                int l_416 = 0x90F09D01L;
                l_390 = p_41;
                l_394 = (((*l_392) = (l_391 = (p_41 = ((*g_175) = l_391)))) && l_391);
                if ((safe_add_func_uint8_t_u_u((&l_392 == (void*)0), (((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s(g_139, ((*l_410) = (g_211 = (0x1A6E5059L || (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((**g_178) >= (g_2 & ((9L & (safe_mod_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((p_40 <= ((*g_179) != (-3L))), 0xAB49C6AEL)), (-1L)))) != l_409))), 6)), g_195))))))), 1)) < 1L) ^ (*g_175)))))
                {
                    for (g_325 = 0; (g_325 == 8); ++g_325)
                    {
                        l_394 = p_40;
                    }
                    if ((*l_351))
                        break;
                }
                else
                {
                    if (p_40)
                    {
                        l_391 = (safe_lshift_func_int8_t_s_u(p_41, l_394));
                        return (**g_178);
                    }
                    else
                    {
                        int ** const l_417 = &l_351;
                        g_361 = func_82((l_416 = (g_415 = l_394)), l_417);
                    }
                }
            }
        }
    }
    g_419[1] = func_82((*g_100), ((*l_418) = &l_351));
    g_100 = (void*)0;
    return (**g_178);
}







static unsigned long long func_49(char p_50, unsigned p_51, unsigned p_52, unsigned p_53, char p_54)
{
    unsigned short *l_69 = &g_70;
    unsigned short *l_71 = &g_72[2];
    unsigned long long *l_75 = &g_76;
    int l_77 = 0L;
    int *l_143 = &l_77;
    unsigned long long *l_149 = &g_76;
    short *l_257 = &g_218;
    short **l_256[10][10] = {{&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}, {&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}, {&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}, {&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}, {&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}, {&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}, {&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}, {&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}, {&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}, {&l_257, &l_257, (void*)0, &l_257, (void*)0, (void*)0, &l_257, &l_257, &l_257, (void*)0}};
    short *l_258 = &g_218;
    unsigned short ***l_304[9][10] = {{&g_105[2], &g_105[2], &g_105[0], &g_105[0], &g_105[2], &g_105[0], &g_105[0], &g_105[0], &g_105[2], &g_105[0]}, {&g_105[2], &g_105[2], &g_105[0], &g_105[0], &g_105[2], &g_105[0], &g_105[0], &g_105[0], &g_105[2], &g_105[0]}, {&g_105[2], &g_105[2], &g_105[0], &g_105[0], &g_105[2], &g_105[0], &g_105[0], &g_105[0], &g_105[2], &g_105[0]}, {&g_105[2], &g_105[2], &g_105[0], &g_105[0], &g_105[2], &g_105[0], &g_105[0], &g_105[0], &g_105[2], &g_105[0]}, {&g_105[2], &g_105[2], &g_105[0], &g_105[0], &g_105[2], &g_105[0], &g_105[0], &g_105[0], &g_105[2], &g_105[0]}, {&g_105[2], &g_105[2], &g_105[0], &g_105[0], &g_105[2], &g_105[0], &g_105[0], &g_105[0], &g_105[2], &g_105[0]}, {&g_105[2], &g_105[2], &g_105[0], &g_105[0], &g_105[2], &g_105[0], &g_105[0], &g_105[0], &g_105[2], &g_105[0]}, {&g_105[2], &g_105[2], &g_105[0], &g_105[0], &g_105[2], &g_105[0], &g_105[0], &g_105[0], &g_105[2], &g_105[0]}, {&g_105[2], &g_105[2], &g_105[0], &g_105[0], &g_105[2], &g_105[0], &g_105[0], &g_105[0], &g_105[2], &g_105[0]}};
    unsigned l_347[9][2][3] = {{{0xF6CA641DL, 0UL, 18446744073709551615UL}, {0xF6CA641DL, 0UL, 18446744073709551615UL}}, {{0xF6CA641DL, 0UL, 18446744073709551615UL}, {0xF6CA641DL, 0UL, 18446744073709551615UL}}, {{0xF6CA641DL, 0UL, 18446744073709551615UL}, {0xF6CA641DL, 0UL, 18446744073709551615UL}}, {{0xF6CA641DL, 0UL, 18446744073709551615UL}, {0xF6CA641DL, 0UL, 18446744073709551615UL}}, {{0xF6CA641DL, 0UL, 18446744073709551615UL}, {0xF6CA641DL, 0UL, 18446744073709551615UL}}, {{0xF6CA641DL, 0UL, 18446744073709551615UL}, {0xF6CA641DL, 0UL, 18446744073709551615UL}}, {{0xF6CA641DL, 0UL, 18446744073709551615UL}, {0xF6CA641DL, 0UL, 18446744073709551615UL}}, {{0xF6CA641DL, 0UL, 18446744073709551615UL}, {0xF6CA641DL, 0UL, 18446744073709551615UL}}, {{0xF6CA641DL, 0UL, 18446744073709551615UL}, {0xF6CA641DL, 0UL, 18446744073709551615UL}}};
    unsigned long long l_350 = 18446744073709551615UL;
    int i, j, k;
    (*l_143) = (safe_add_func_int16_t_s_s((safe_add_func_uint8_t_u_u((func_61((0x4BL != func_64(((*l_75) = (p_50 == func_67(((*l_71) = ((*l_69) = (0x8A1D584D75F053D0LL >= p_53)))))), l_77)), l_77) || 0xD0L), g_141)), p_52));
    for (p_53 = 0; (p_53 == 49); ++p_53)
    {
        unsigned long long *l_148 = (void*)0;
        int l_150 = 1L;
        unsigned short *l_160 = &g_72[2];
        unsigned *l_163 = &g_139;
        char *l_215 = &g_216;
        unsigned l_245 = 0x4C9A174EL;
        for (g_141 = 0; (g_141 > (-1)); g_141 = safe_sub_func_uint32_t_u_u(g_141, 6))
        {
            int ** const l_162 = &l_143;
        }
        for (g_74 = 0; (g_74 <= 1); g_74 += 1)
        {
            return (*g_179);
        }
    }
    if ((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_s(0xA5L, 7)) ^ (l_69 == (l_258 = l_69))) <= p_54), func_67((*g_106)))))
    {
        short l_269 = (-9L);
        int *l_283[5][3] = {{&g_2, &l_77, &g_2}, {&g_2, &l_77, &g_2}, {&g_2, &l_77, &g_2}, {&g_2, &l_77, &g_2}, {&g_2, &l_77, &g_2}};
        unsigned *l_310 = &g_139;
        int l_321 = 0x7872F4CCL;
        int i, j;
        for (g_76 = 0; (g_76 < 3); g_76 = safe_add_func_int8_t_s_s(g_76, 1))
        {
            long long l_274 = 0xF5F2D47BFB23A127LL;
            int l_279 = 0x52B52744L;
        }
    }
    else
    {
        unsigned l_326 = 0xD8DB81AAL;
        unsigned char *l_342 = (void*)0;
        unsigned char *l_343[7] = {(void*)0, (void*)0, &g_195, (void*)0, (void*)0, &g_195, (void*)0};
        int l_344 = (-9L);
        int *l_345 = &g_74;
        int l_346 = 1L;
        long long *l_348 = (void*)0;
        long long *l_349[6][1][7] = {{{(void*)0, (void*)0, &g_142, (void*)0, (void*)0, &g_142, &g_142}}, {{(void*)0, (void*)0, &g_142, (void*)0, (void*)0, &g_142, &g_142}}, {{(void*)0, (void*)0, &g_142, (void*)0, (void*)0, &g_142, &g_142}}, {{(void*)0, (void*)0, &g_142, (void*)0, (void*)0, &g_142, &g_142}}, {{(void*)0, (void*)0, &g_142, (void*)0, (void*)0, &g_142, &g_142}}, {{(void*)0, (void*)0, &g_142, (void*)0, (void*)0, &g_142, &g_142}}};
        int i, j, k;
        (*l_143) = l_326;
        (*l_143) = (safe_div_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((*l_143) != (safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint64_t_u((**g_178))), 0UL))), 3)), (safe_add_func_uint8_t_u_u(l_326, (g_195 = (p_52 > l_326)))))) & (func_61((l_346 = ((*l_345) = (g_95 = (l_344 = (*l_143))))), (l_347[6][1][0] != (g_142 = g_2))) < l_350)), 0xE925L)), g_139));
    }
    return p_52;
}







static char func_61(int p_62, int p_63)
{
    unsigned l_113 = 0x31EA725BL;
    int *l_116 = (void*)0;
    int **l_125[2][7][5] = {{{&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}}, {{&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}, {&l_116, &g_100, &l_116, &g_100, &l_116}}};
    int *l_128 = (void*)0;
    const unsigned long long *l_133 = &g_76;
    int i, j, k;
    for (g_74 = 0; (g_74 <= 6); g_74 = safe_add_func_uint32_t_u_u(g_74, 5))
    {
        int ** const l_114 = (void*)0;
        int **l_115 = &g_100;
        (*l_115) = &p_62;
        (*l_115) = l_116;
        for (g_76 = (-21); (g_76 < 32); g_76 = safe_add_func_int8_t_s_s(g_76, 3))
        {
            int l_121 = 0x1E79BFF9L;
            if (l_113)
            {
                short l_120 = 7L;
                (*l_115) = l_116;
                l_121 = (p_62 && (safe_unary_minus_func_int32_t_s(l_120)));
                if (p_63)
                    break;
                g_100 = &l_121;
            }
            else
            {
                int l_122 = 0x5BC693E6L;
                return l_122;
            }
            if (((**l_115) = p_63))
            {
                (*g_100) = 0L;
                (**l_115) = (*g_100);
            }
            else
            {
                int *l_123 = &g_95;
                (*l_123) = ((**l_115) = p_63);
                (*l_123) = ((**l_115) = (safe_unary_minus_func_uint8_t_u(g_72[2])));
            }
        }
        g_100 = &p_63;
    }
    g_100 = (void*)0;
    for (l_113 = 0; (l_113 >= 11); l_113 = safe_add_func_uint16_t_u_u(l_113, 8))
    {
        unsigned long long *l_131[7][10] = {{&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76}, {&g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76, &g_76}};
        int l_132[9];
        int l_136[8][9][3] = {{{(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}}, {{(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}}, {{(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}}, {{(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}}, {{(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}}, {{(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}}, {{(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}}, {{(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}, {(-1L), 0x1340892DL, 0x6F312D9EL}}};
        unsigned *l_137 = (void*)0;
        unsigned *l_138[4] = {(void*)0, &g_139, (void*)0, &g_139};
        int l_140 = 0x2BCF3F1EL;
        int i, j, k;
        for (i = 0; i < 9; i++)
            l_132[i] = 1L;
        l_128 = &g_74;
        g_95 = (safe_lshift_func_int16_t_s_s(0x757FL, 12));
        g_100 = &g_2;
        g_142 = (func_67((p_63 <= (func_64((((l_132[7] = p_63) & ((&g_95 == &g_95) & (l_133 == l_133))) >= ((*g_106) = ((safe_add_func_uint32_t_u_u((l_136[0][7][1] = (l_136[3][2][2] != p_63)), func_67((l_140 <= g_72[3])))) >= g_141))), l_140) >= g_2))) != g_2);
    }
    return g_72[1];
}







static char func_64(unsigned long long p_65, int p_66)
{
    int *l_110[7];
    int i;
    for (i = 0; i < 7; i++)
        l_110[i] = &g_74;
    for (g_76 = 0; (g_76 <= 7); g_76 += 1)
    {
        int *l_79 = (void*)0;
        int **l_78 = &l_79;
        int i;
        (*l_78) = (void*)0;
        return g_72[g_76];
    }
    for (g_74 = (-15); (g_74 < (-28)); g_74 = safe_sub_func_int32_t_s_s(g_74, 5))
    {
        unsigned short *l_87 = &g_70;
        unsigned short **l_88 = &l_87;
        int *l_90 = &g_2;
        int ** const l_89 = &l_90;
        unsigned short ***l_107 = &g_105[0];
        (*l_89) = func_82((((void*)0 != &g_72[7]) > (safe_sub_func_int16_t_s_s((((*l_88) = l_87) == &g_72[7]), p_66))), l_89);
        for (p_66 = 0; p_66 < 8; p_66 += 1)
        {
            g_72[p_66] = 65534UL;
        }
        (*l_107) = g_105[0];
    }
    p_66 = (safe_rshift_func_int16_t_s_s(func_67(p_65), 11));
    l_110[4] = l_110[4];
    return g_72[1];
}







static long long func_67(unsigned short p_68)
{
    int *l_73 = &g_74;
    (*l_73) = (-7L);
    return g_74;
}







static int * func_82(int p_83, int ** const p_84)
{
    unsigned l_98 = 0xB4D66FC9L;
    int *l_99 = &g_2;
    unsigned short *l_103 = &g_72[2];
    int *l_104 = &g_95;
    for (g_76 = (-13); (g_76 != 23); g_76 = safe_add_func_int64_t_s_s(g_76, 2))
    {
        unsigned l_93 = 4294967294UL;
        int *l_94[5][2] = {{&g_95, &g_95}, {&g_95, &g_95}, {&g_95, &g_95}, {&g_95, &g_95}, {&g_95, &g_95}};
        int i, j;
        g_95 = l_93;
    }
    (*l_104) = ((l_98 == ((&g_95 != (g_100 = l_99)) == (safe_rshift_func_int16_t_s_u((((*p_84) = &g_2) == &g_74), g_70)))) >= (((*l_103) = (*l_99)) != p_83));
    return (*p_84);
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_72[i], "g_72[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    transparent_crc(g_142, "g_142", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_156[i], "g_156[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_218, "g_218", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_383[i], "g_383[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_393, "g_393", print_hash_value);
    transparent_crc(g_415, "g_415", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_437[i][j][k], "g_437[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_538, "g_538", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_712, "g_712", print_hash_value);
    transparent_crc(g_713, "g_713", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_906[i], "g_906[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_929, "g_929", print_hash_value);
    transparent_crc(g_964, "g_964", print_hash_value);
    transparent_crc(g_1004, "g_1004", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
