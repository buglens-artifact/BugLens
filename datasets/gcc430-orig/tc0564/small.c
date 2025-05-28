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



static int g_4 = 0x87013DCEL;
static char g_21 = 0x24L;
static unsigned short g_39 = 0x4811L;
static unsigned short g_55 = 65535UL;
static char g_65 = (-7L);
static char *g_64[7] = {&g_65, &g_65, &g_65, &g_65, &g_65, &g_65, &g_65};
static unsigned g_76[3][3] = {{1UL, 18446744073709551614UL, 1UL}, {1UL, 18446744073709551614UL, 1UL}, {1UL, 18446744073709551614UL, 1UL}};
static unsigned g_79 = 0xAD251A65L;
static char g_81 = 0xA7L;
static unsigned short *g_99 = &g_55;
static unsigned short **g_98 = &g_99;
static unsigned short ***g_97[1] = {&g_98};
static int g_120 = 0xCC553FEAL;
static int g_122 = 7L;
static unsigned char g_139 = 0x23L;
static unsigned *g_147 = &g_79;
static int *g_175[7][10][3] = {{{&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}}, {{&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}}, {{&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}}, {{&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}}, {{&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}}, {{&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}}, {{&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}, {&g_122, (void*)0, (void*)0}}};
static char *g_177[3][9][5] = {{{&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}}, {{&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}}, {{&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}, {&g_81, (void*)0, &g_81, (void*)0, (void*)0}}};
static unsigned char g_298 = 3UL;
static unsigned **g_304 = (void*)0;
static unsigned ***g_303 = &g_304;
static unsigned g_310 = 18446744073709551615UL;
static int *g_493 = (void*)0;
static unsigned *g_539[7][4][2] = {{{&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}}, {{&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}}, {{&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}}, {{&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}}, {{&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}}, {{&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}}, {{&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}, {&g_76[2][2], &g_76[2][2]}}};
static short g_541 = 2L;
static short *g_569 = &g_541;
static char g_574 = 0L;
static char **g_615 = &g_177[2][2][2];
static char ***g_614 = &g_615;
static unsigned g_619 = 4294967295UL;
static unsigned short g_621 = 0UL;
static int *g_647 = (void*)0;
static short g_671[3] = {(-1L), (-1L), (-1L)};
static short g_733 = 0xFD28L;
static int g_764[3][7] = {{1L, (-1L), 7L, (-1L), 1L, (-1L), 7L}, {1L, (-1L), 7L, (-1L), 1L, (-1L), 7L}, {1L, (-1L), 7L, (-1L), 1L, (-1L), 7L}};
static unsigned **g_767[9] = {&g_539[5][0][0], &g_539[6][0][0], &g_539[5][0][0], &g_539[6][0][0], &g_539[5][0][0], &g_539[6][0][0], &g_539[5][0][0], &g_539[6][0][0], &g_539[5][0][0]};
static int *g_812 = &g_120;
static int **g_811 = &g_812;
static unsigned g_923 = 18446744073709551615UL;
static int g_926 = 0x64712FE7L;
static short g_955[4] = {0x4FA6L, 0x4FA6L, 0x4FA6L, 0x4FA6L};
static unsigned g_987 = 0xEDA4C54DL;
static unsigned char *g_1119[10][8][2] = {{{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}, {{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}, {{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}, {{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}, {{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}, {{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}, {{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}, {{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}, {{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}, {{&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}, {&g_139, &g_139}}};
static int ***g_1327 = &g_811;
static int ****g_1326[7][8] = {{&g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327}, {&g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327}, {&g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327}, {&g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327}, {&g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327}, {&g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327}, {&g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327, &g_1327}};
static unsigned short g_1342[1][8][8] = {{{65528UL, 0xE53AL, 0xA98DL, 0x31D7L, 0x156AL, 0xA610L, 0x156AL, 0x31D7L}, {65528UL, 0xE53AL, 0xA98DL, 0x31D7L, 0x156AL, 0xA610L, 0x156AL, 0x31D7L}, {65528UL, 0xE53AL, 0xA98DL, 0x31D7L, 0x156AL, 0xA610L, 0x156AL, 0x31D7L}, {65528UL, 0xE53AL, 0xA98DL, 0x31D7L, 0x156AL, 0xA610L, 0x156AL, 0x31D7L}, {65528UL, 0xE53AL, 0xA98DL, 0x31D7L, 0x156AL, 0xA610L, 0x156AL, 0x31D7L}, {65528UL, 0xE53AL, 0xA98DL, 0x31D7L, 0x156AL, 0xA610L, 0x156AL, 0x31D7L}, {65528UL, 0xE53AL, 0xA98DL, 0x31D7L, 0x156AL, 0xA610L, 0x156AL, 0x31D7L}, {65528UL, 0xE53AL, 0xA98DL, 0x31D7L, 0x156AL, 0xA610L, 0x156AL, 0x31D7L}}};
static int **g_1437 = &g_647;
static int ***g_1436[10][8][2] = {{{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}, {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}, {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}, {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}, {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}, {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}, {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}, {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}, {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}, {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}}};
static char g_1622 = 0xD6L;
static unsigned char **g_1650 = (void*)0;
static unsigned ***g_1711 = &g_767[6];
static unsigned ****g_1710 = &g_1711;
static int g_1784 = 6L;
static int *g_1785[9] = {&g_926, &g_926, &g_926, &g_926, &g_926, &g_926, &g_926, &g_926, &g_926};



static unsigned char func_1(void);
static unsigned short func_2(short p_3);
static char func_8(unsigned short p_9, unsigned p_10, int p_11, char p_12);
static unsigned func_14(char p_15, unsigned p_16, unsigned char p_17, short p_18, int p_19);
static unsigned char func_22(char * p_23, short p_24, short p_25);
static int func_28(unsigned p_29);
static char * func_30(unsigned char p_31);
static int func_40(unsigned p_41, unsigned char p_42, int p_43, char * p_44);
static unsigned short * func_45(char * p_46, char * p_47, int p_48);
static char * func_49(unsigned p_50);
static unsigned char func_1(void)
{
    unsigned short l_5 = 9UL;
    char *l_1771 = &g_21;
    int l_1776 = 0xB4322D11L;
    unsigned char *l_1777 = &g_139;
    int l_1782 = 0x93AEED61L;
    int l_1783 = 0x3F37033CL;
    int *l_1786 = &l_1783;
    unsigned char l_1791 = 0x64L;
    int l_1793[1];
    short l_1837[4][7] = {{1L, 1L, 0L, 0x62A1L, 0x62A1L, 0L, 1L}, {1L, 1L, 0L, 0x62A1L, 0x62A1L, 0L, 1L}, {1L, 1L, 0L, 0x62A1L, 0x62A1L, 0L, 1L}, {1L, 1L, 0L, 0x62A1L, 0x62A1L, 0L, 1L}};
    int **l_1841 = (void*)0;
    unsigned l_1848 = 4294967289UL;
    int l_1851 = 0x5950B13AL;
    int i, j;
    for (i = 0; i < 1; i++)
        l_1793[i] = 0x63C44DF1L;
    if ((func_2((l_5 = g_4)) && ((*g_99) = ((l_5 && (safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(l_5, l_5)), (l_1771 != &g_574)))) > (((safe_lshift_func_uint8_t_u_s(((safe_mul_func_int8_t_s_s(((((*l_1777) = (l_1776 = 0x07L)) ^ ((l_1783 = (safe_add_func_int8_t_s_s((safe_add_func_int32_t_s_s((&g_1327 != (void*)0), l_1782)), 0x95L))) && l_1783)) && 9UL), l_5)) && l_1783), g_1784)) & l_5) ^ l_1782)))))
    {
        unsigned l_1787[3][5][2] = {{{5UL, 5UL}, {5UL, 5UL}, {5UL, 5UL}, {5UL, 5UL}, {5UL, 5UL}}, {{5UL, 5UL}, {5UL, 5UL}, {5UL, 5UL}, {5UL, 5UL}, {5UL, 5UL}}, {{5UL, 5UL}, {5UL, 5UL}, {5UL, 5UL}, {5UL, 5UL}, {5UL, 5UL}}};
        int i, j, k;
        (*g_1437) = g_1785[7];

        ;
        (*g_1437) = l_1786;

        ;
        (*g_647) = l_1787[0][4][1];
        (*g_493) = (**g_1437);
    }
    else
    {
        int *****l_1790 = &g_1326[5][1];
        unsigned l_1792 = 0x262AA441L;
        int *l_1804 = &g_926;
        short *l_1807 = &g_671[0];
        unsigned char *l_1810 = &l_1791;
        unsigned l_1823 = 0xE45E08BFL;
        unsigned l_1836 = 1UL;
        int *l_1849 = &g_122;
        int **l_1850 = &g_175[0][0][1];
        (*l_1786) = (safe_lshift_func_uint16_t_u_s(((((*l_1786) >= (l_1790 != l_1790)) & l_1791) & ((*l_1786) | ((**g_98) = (((((l_1792 == func_8((*l_1786), (l_1793[0] < (l_1792 , (*l_1786))), (*l_1786), l_1792)) && (*l_1786)) > (*l_1786)) , (*g_569)) , 0xB031L)))), 15));
        if ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((*l_1786), (*l_1786))), (*l_1804))))
        {
            (*g_1437) = &l_1776;

            ;
            return (*l_1804);


        }
        else
        {
            int l_1827[5][5] = {{0x0285ABE6L, 0x0285ABE6L, 0L, 0x0285ABE6L, 0x0285ABE6L}, {0x0285ABE6L, 0x0285ABE6L, 0L, 0x0285ABE6L, 0x0285ABE6L}, {0x0285ABE6L, 0x0285ABE6L, 0L, 0x0285ABE6L, 0x0285ABE6L}, {0x0285ABE6L, 0x0285ABE6L, 0L, 0x0285ABE6L, 0x0285ABE6L}, {0x0285ABE6L, 0x0285ABE6L, 0L, 0x0285ABE6L, 0x0285ABE6L}};
            int l_1835 = (-9L);
            char l_1839 = (-1L);
            int i, j;
            for (g_541 = 0; (g_541 != (-4)); g_541--)
            {
                int l_1830 = 0x01628294L;
                int l_1838[10][2][5] = {{{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}, {{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}, {{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}, {{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}, {{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}, {{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}, {{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}, {{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}, {{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}, {{1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}, {1L, 0x06B3EEA4L, 9L, 0xBD4494AFL, 4L}}};
                int **l_1840 = &g_1785[7];
                int i, j, k;
                for (g_122 = 0; (g_122 > (-8)); --g_122)
                {
                    short l_1826 = 0L;
                    (*g_493) = (safe_mod_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_s(((safe_sub_func_uint16_t_u_u((*l_1786), ((l_1823 , (-1L)) & (safe_mod_func_int8_t_s_s(((func_40((0x9AL || l_1826), l_1827[4][3], ((safe_lshift_func_int16_t_s_u((l_1830 ^ (safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_1835 = (*l_1786)), l_1836)), l_1837[0][0]))), l_1830)) != (*g_569)), l_1810) != l_1838[0][1][1]) == l_1838[3][0][0]), (*l_1804)))))) != (*g_569)), 12)) , 0xD251BE72L), (*g_493))), l_1839));
                    l_1841 = l_1840;

                    ;
                }
            }

            ;
            (*l_1786) = (safe_mod_func_uint16_t_u_u(65531UL, (*g_569)));
        }

        ;
        for (g_1784 = 0; (g_1784 <= 8); g_1784 += 1)
        {
            unsigned l_1844[5] = {0UL, 0xA997605DL, 0UL, 0xA997605DL, 0UL};
            int *l_1845 = &l_1783;
            int i;
            for (g_541 = 5; (g_541 >= 0); g_541 -= 1)
            {
                return l_1844[1];


            }
            (*g_1437) = l_1845;

            ;
            (*g_647) = (safe_mod_func_int32_t_s_s((-1L), l_1848));
            for (l_1848 = 0; (l_1848 <= 6); l_1848 += 1)
            {
                if ((*l_1804))
                    break;
                for (g_310 = 0; (g_310 <= 6); g_310 += 1)
                {
                    int i;
                    (**g_1710) = g_767[g_1784];
                }
            }
        }


        (*l_1850) = ((*g_1437) = l_1849);

        ;
    }


    ;

    ;

    ;

    ;
    ;
    ;
    ;
    return l_1851;


}







static unsigned short func_2(short p_3)
{
    char l_13 = (-1L);
    char *l_20 = &g_21;
    unsigned short *l_38 = &g_39;
    char **l_521 = &g_177[2][6][4];
    unsigned char l_548 = 0x66L;
    unsigned char *l_1427 = &g_298;
    int l_1623 = 0xDE961BA8L;
    int *l_1766 = &g_122;
    (*l_1766) = ((((safe_mul_func_int16_t_s_s((((func_8(g_4, l_13, ((l_1623 = func_14(l_13, g_4, (((*l_20) = l_13) , ((*l_1427) = func_22(((safe_mul_func_int16_t_s_s(((func_28((((*l_521) = func_30((((*l_38) = (((safe_rshift_func_int16_t_s_u(l_13, 13)) != 0x578CL) || ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u(p_3, p_3)), l_13)) == g_21))) , l_13))) != (void*)0)) < l_548) < 0L), 2UL)) , &g_81), g_4, g_4))), p_3, p_3)) , l_13), p_3) < p_3) < p_3) <= 0x08C2439FL), 0xC3CEL)) || l_1623) >= p_3) | p_3);


    ;

    ;

    ;


    ;
    ;
    return p_3;
}







static char func_8(unsigned short p_9, unsigned p_10, int p_11, char p_12)
{
    unsigned short l_1649 = 0xC4E8L;
    unsigned ****l_1661[1];
    int l_1669 = 1L;
    short l_1746 = 0x99F5L;
    char *l_1765 = &g_574;
    int i;
    for (i = 0; i < 1; i++)
        l_1661[i] = (void*)0;
    for (g_81 = 13; (g_81 == (-24)); g_81 = safe_sub_func_int16_t_s_s(g_81, 1))
    {
        int l_1633 = 4L;
        char *l_1634 = &g_21;
        unsigned **l_1635 = (void*)0;
        unsigned ****l_1662[5] = {&g_303, &g_303, &g_303, &g_303, &g_303};
        unsigned *****l_1663 = (void*)0;
        unsigned *****l_1664 = &l_1662[1];
        unsigned char *l_1667[9][2][9] = {{{(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}, {(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}, {(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}, {(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}, {(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}, {(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}, {(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}, {(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}, {(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}, {(void*)0, &g_139, &g_139, &g_298, &g_139, &g_298, &g_298, &g_139, &g_139}}};
        int l_1668[7];
        int l_1672 = 1L;
        unsigned l_1716 = 4UL;
        char l_1748[1];
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_1668[i] = 0xFC412098L;
        for (i = 0; i < 1; i++)
            l_1748[i] = 0x58L;
        if ((*g_493))
        {
            short l_1632 = 9L;
            int *l_1638 = (void*)0;
            (*g_1437) = ((safe_rshift_func_int16_t_s_s(((*g_569) = ((&g_304 != (void*)0) != ((func_28((((safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((*g_493) = (4L > l_1632)), (p_12 <= 65527UL))), ((*g_569) | (*g_99)))) , (((*g_493) = (~(*g_493))) , l_1635)) == &g_539[5][0][0])) > p_9) || 65535UL))), 13)) , (void*)0);

            ;
            if (p_10)
                break;
            for (g_139 = 20; (g_139 != 10); g_139 = safe_sub_func_uint16_t_u_u(g_139, 3))
            {
                int *l_1639 = &g_926;
                unsigned char **l_1646 = &g_1119[6][1][0];
                char *l_1647 = (void*)0;
                char *l_1648 = &g_65;
                if (p_11)
                    break;
                (*g_1437) = l_1638;
                (*l_1639) = func_28((l_1633 || ((**g_98) = l_1633)));
                (*l_1639) = ((*l_1639) == (safe_lshift_func_int8_t_s_u((func_28(((((safe_sub_func_int32_t_s_s(func_28(func_28((((*g_99) = (p_11 >= (safe_add_func_uint32_t_u_u((l_1646 != (g_1650 = ((((*g_493) = (((*l_1648) = ((*l_1634) = l_1633)) < l_1633)) , l_1649) , &g_1119[6][1][0]))), (safe_mod_func_uint16_t_u_u(0x36AEL, (p_9 | l_1633))))))) , p_9))), l_1649)) > 0xF6F0L) , p_11) ^ 2L)) , p_9), 3)));

                ;
            }
            (*g_493) = 0xDC46E7DFL;
        }
        else
        {
            return l_1633;


        }

        ;
        l_1672 = (((safe_rshift_func_uint16_t_u_u(((*g_99) = (safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((l_1649 | (safe_sub_func_int8_t_s_s(((l_1633 >= l_1633) <= (l_1661[0] == ((*l_1664) = l_1662[4]))), (l_1669 = (l_1668[0] = (safe_mod_func_uint8_t_u_u((6L && 0xAFCCL), l_1649))))))), ((*g_569) = ((safe_rshift_func_int16_t_s_s((*g_569), 12)) > 0x26L)))), 0x90L))), p_10)) && 4L) && p_11);
        if ((safe_sub_func_int8_t_s_s(l_1649, (!(safe_rshift_func_uint8_t_u_s(0xE8L, 6))))))
        {
            short **l_1677[2];
            short **l_1678 = &g_569;
            int l_1701 = (-1L);
            unsigned **l_1704[10][7][3] = {{{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}, {{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}, {{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}, {{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}, {{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}, {{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}, {{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}, {{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}, {{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}, {{&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1677[i] = (void*)0;
            for (g_298 = 1; (g_298 <= 6); g_298 += 1)
            {
                char l_1694 = 0x8EL;
                l_1678 = l_1677[0];

                ;
                for (l_1669 = 0; (l_1669 <= 6); l_1669 += 1)
                {
                    unsigned l_1679 = 0UL;
                    int *l_1702 = (void*)0;
                    unsigned **l_1703[5][6] = {{&g_147, &g_147, &g_147, &g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147}};
                    int i, j;
                    (*g_493) = l_1679;
                    for (p_11 = 6; (p_11 >= 1); p_11 -= 1)
                    {
                        (*g_1437) = &l_1669;

                        ;
                        if (l_1679)
                            continue;
                    }
                    l_1702 = ((safe_mul_func_int8_t_s_s((-1L), (l_1668[6] , ((*l_1634) = (safe_sub_func_int16_t_s_s(((p_9 , ((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((*g_569) && (p_12 | (safe_sub_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s((l_1694 || (safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s((l_1694 < 0x07E3L), ((safe_rshift_func_int8_t_s_u(p_11, 5)) , l_1679))), l_1694))), 5L)) , l_1649) & l_1701) & p_9), l_1694)))), 5L)), 5UL)), 1)) , l_1694)) ^ p_10), p_12)))))) , l_1702);
                    l_1704[9][2][0] = l_1703[3][0];
                }
            }

            ;
            ;
        }
        else
        {
            unsigned short l_1714 = 1UL;
            int *l_1717 = (void*)0;
            int l_1722 = 0xC831D331L;
            l_1669 = ((p_12 <= (p_11 <= (func_14(l_1649, (p_9 != 0xA6161793L), p_12, (*g_569), ((*g_812) = p_12)) | l_1672))) , p_11);


            if (p_9)
            {
                unsigned l_1707 = 0x48C068E5L;
                char *l_1715[7][3] = {{&g_81, &g_81, &g_21}, {&g_81, &g_81, &g_21}, {&g_81, &g_81, &g_21}, {&g_81, &g_81, &g_21}, {&g_81, &g_81, &g_21}, {&g_81, &g_81, &g_21}, {&g_81, &g_81, &g_21}};
                int i, j;
                if (((safe_add_func_uint32_t_u_u((l_1669 = l_1707), (((safe_mod_func_int8_t_s_s((((void*)0 == g_1710) ^ (*g_569)), 1L)) , (p_9 >= (safe_mul_func_uint16_t_u_u(func_40(p_12, l_1714, (*g_812), l_1715[4][2]), p_10)))) ^ 0x2117E54FL))) <= l_1649))
                {
                    return p_11;
                }
                else
                {
                    return l_1714;
                }
            }
            else
            {
                int *l_1718[4][5][4] = {{{&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}}, {{&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}}, {{&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}}, {{&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}, {&g_926, (void*)0, &g_926, (void*)0}}};
                unsigned l_1740 = 1UL;
                int i, j, k;
                if (l_1716)
                {
                    (*g_1437) = l_1717;

                    ;
                }
                else
                {
                    return l_1668[0];
                }

                ;
                (*g_1437) = l_1717;
                (*g_1437) = l_1718[2][0][3];

                ;
                for (g_139 = 0; (g_139 <= 24); g_139 = safe_add_func_int16_t_s_s(g_139, 4))
                {
                    char l_1721 = (-1L);
                    unsigned short *l_1727 = &l_1649;
                    unsigned char l_1733 = 1UL;
                    int l_1750 = 0L;
                    if (p_10)
                    {
                        unsigned char l_1738 = 0UL;
                        int l_1739 = 0xDD035D2BL;
                        l_1721 = func_28((0x1EL || p_10));
                        l_1722 = l_1721;
                        l_1739 = ((*g_569) , (safe_rshift_func_uint8_t_u_s(((((((safe_mul_func_int16_t_s_s((((p_11 >= (func_14(((((void*)0 != l_1727) | (func_14(((*l_1634) = (safe_unary_minus_func_int32_t_s((l_1721 , 1L)))), (safe_lshift_func_uint16_t_u_s(((**g_98) = (safe_rshift_func_int16_t_s_u(func_14(l_1733, (p_12 , (safe_lshift_func_int16_t_s_u(((l_1738 = (safe_rshift_func_uint8_t_u_s(((void*)0 != &g_1711), 4))) || p_9), 10))), l_1739, (*g_569), (*g_812)), 9))), 2)), p_10, l_1669, l_1739) , 0x1BE27780L)) > 0x987FL), l_1739, l_1733, l_1668[0], p_12) , (**g_98))) >= p_12) & 0x31L), p_11)) ^ l_1740) > 0x99B8L) != 0UL) < p_9) , p_11), l_1733)));


                        if (p_9)
                            break;
                    }
                    else
                    {
                        int *l_1741[7][7] = {{&g_4, &g_122, &g_4, &g_122, &g_4, &g_122, &g_4}, {&g_4, &g_122, &g_4, &g_122, &g_4, &g_122, &g_4}, {&g_4, &g_122, &g_4, &g_122, &g_4, &g_122, &g_4}, {&g_4, &g_122, &g_4, &g_122, &g_4, &g_122, &g_4}, {&g_4, &g_122, &g_4, &g_122, &g_4, &g_122, &g_4}, {&g_4, &g_122, &g_4, &g_122, &g_4, &g_122, &g_4}, {&g_4, &g_122, &g_4, &g_122, &g_4, &g_122, &g_4}};
                        unsigned *l_1747[6][4][8] = {{{&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}}, {{&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}}, {{&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}}, {{&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}}, {{&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}}, {{&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}, {&g_76[2][2], &l_1716, (void*)0, (void*)0, &g_310, &g_76[2][2], &g_923, &g_76[0][1]}}};
                        char *l_1749 = (void*)0;
                        int i, j, k;
                        (*g_493) = p_9;
                        l_1741[3][2] = &l_1722;


                        l_1750 = (((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(l_1672, l_1746)) , p_10), p_9)) < p_9) , p_10);
                        (*g_1437) = l_1718[2][1][2];

                        ;
                    }


                    (*g_1437) = &l_1668[0];

                    ;
                }


            }


        }


    }


    (*g_493) = p_11;
    return l_1649;


}







static unsigned func_14(char p_15, unsigned p_16, unsigned char p_17, short p_18, int p_19)
{
    short l_1442 = 1L;
    char l_1443 = 0x5CL;
    short l_1444[5];
    int l_1445 = 0x87266968L;
    unsigned short l_1473 = 0x3D20L;
    unsigned short **l_1499 = &g_99;
    int l_1512 = 0x55C0DF19L;
    unsigned char l_1536 = 0x10L;
    unsigned short l_1563 = 65535UL;
    unsigned char l_1574 = 0UL;
    int *l_1575 = (void*)0;
    int **l_1580 = (void*)0;
    int **l_1581 = (void*)0;
    char l_1582[6] = {(-10L), (-10L), (-1L), (-10L), (-10L), (-1L)};
    int *l_1611 = (void*)0;
    int *l_1612[5][3][5] = {{{&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}}, {{&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}}, {{&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}}, {{&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}}, {{&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}, {&g_4, &l_1512, &g_926, &l_1512, &g_4}}};
    char l_1613[5][4] = {{0L, 0x48L, 0L, 0x48L}, {0L, 0x48L, 0L, 0x48L}, {0L, 0x48L, 0L, 0x48L}, {0L, 0x48L, 0L, 0x48L}, {0L, 0x48L, 0L, 0x48L}};
    unsigned char l_1616 = 1UL;
    unsigned *l_1618 = &g_76[2][2];
    int ***l_1621[4][2] = {{&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}, {&g_1437, &g_1437}};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1444[i] = 5L;
    for (g_79 = 0; (g_79 <= 2); g_79 += 1)
    {
        int ***l_1439 = &g_1437;
        unsigned short l_1468 = 0x1A18L;
        int l_1551 = 0L;
        unsigned char *l_1583[2];
        int *l_1586 = (void*)0;
        int l_1587 = 9L;
        int ****l_1599 = (void*)0;
        unsigned short **l_1602 = &g_99;
        int i;
        for (i = 0; i < 2; i++)
            l_1583[i] = &g_298;
        for (g_65 = 0; (g_65 <= 1); g_65 += 1)
        {
            unsigned **l_1430 = &g_539[5][0][0];
            unsigned *l_1433 = &g_987;
            int l_1434[10];
            unsigned char *l_1435[1][1];
            int ***l_1438 = &g_1437;
            unsigned short ****l_1446 = (void*)0;
            unsigned char l_1470 = 1UL;
            short l_1498[9][4] = {{(-1L), 0xEECCL, 5L, 0xF95EL}, {(-1L), 0xEECCL, 5L, 0xF95EL}, {(-1L), 0xEECCL, 5L, 0xF95EL}, {(-1L), 0xEECCL, 5L, 0xF95EL}, {(-1L), 0xEECCL, 5L, 0xF95EL}, {(-1L), 0xEECCL, 5L, 0xF95EL}, {(-1L), 0xEECCL, 5L, 0xF95EL}, {(-1L), 0xEECCL, 5L, 0xF95EL}, {(-1L), 0xEECCL, 5L, 0xF95EL}};
            char l_1510[4];
            int i, j;
            for (i = 0; i < 10; i++)
                l_1434[i] = 0xB74AE24CL;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1435[i][j] = &g_139;
            }
            for (i = 0; i < 4; i++)
                l_1510[i] = 0x80L;
        }
        l_1587 = ((safe_lshift_func_uint8_t_u_s((l_1551 = (safe_mod_func_uint16_t_u_u((((l_1580 = l_1580) != l_1581) , 0x5665L), ((*g_569) = func_28(l_1582[2]))))), l_1536)) > (l_1468 , (safe_mod_func_int8_t_s_s(p_15, (p_17 , p_17)))));

        ;
        if (p_17)
            continue;
        for (l_1442 = 0; (l_1442 <= 1); l_1442 += 1)
        {
            unsigned l_1594[7][6] = {{18446744073709551612UL, 18446744073709551612UL, 0xB48679AAL, 0x5559A480L, 0xB48679AAL, 18446744073709551612UL}, {18446744073709551612UL, 18446744073709551612UL, 0xB48679AAL, 0x5559A480L, 0xB48679AAL, 18446744073709551612UL}, {18446744073709551612UL, 18446744073709551612UL, 0xB48679AAL, 0x5559A480L, 0xB48679AAL, 18446744073709551612UL}, {18446744073709551612UL, 18446744073709551612UL, 0xB48679AAL, 0x5559A480L, 0xB48679AAL, 18446744073709551612UL}, {18446744073709551612UL, 18446744073709551612UL, 0xB48679AAL, 0x5559A480L, 0xB48679AAL, 18446744073709551612UL}, {18446744073709551612UL, 18446744073709551612UL, 0xB48679AAL, 0x5559A480L, 0xB48679AAL, 18446744073709551612UL}, {18446744073709551612UL, 18446744073709551612UL, 0xB48679AAL, 0x5559A480L, 0xB48679AAL, 18446744073709551612UL}};
            int l_1604 = 0x05B37AB9L;
            int *l_1608 = &l_1587;
            int i, j;
            for (g_65 = 1; (g_65 >= 0); g_65 -= 1)
            {
                unsigned l_1600 = 0x2743D5E2L;
                for (g_621 = 0; (g_621 <= 2); g_621 += 1)
                {
                    unsigned char l_1590 = 0x9AL;
                    int l_1591 = 0x50AC6068L;
                    int i, j, k;
                    if (((safe_sub_func_uint8_t_u_u(((l_1591 = (p_16 , l_1590)) == (((func_28(l_1594[2][3]) <= ((((safe_lshift_func_int8_t_s_u(p_16, 4)) < (l_1444[(g_65 + 3)] = p_19)) , p_19) < p_17)) == ((((safe_mod_func_uint16_t_u_u((p_15 || l_1594[2][3]), (-6L))) | 0x26A20A30L) , l_1599) != (void*)0)) || (*g_493))), p_16)) == l_1600))
                    {
                        int i, j, k;
                        g_175[(g_65 + 5)][(l_1442 + 8)][g_65] = g_539[(g_65 + 4)][(l_1442 + 1)][g_65];
                    }
                    else
                    {
                        int *l_1601 = (void*)0;
                        unsigned short ***l_1603 = &l_1602;
                        int *l_1605 = &g_926;
                        l_1445 = l_1594[4][4];
                        (*l_1603) = l_1602;
                        (*l_1605) = (l_1604 = func_28(p_16));
                    }
                }
            }
            (*l_1608) = (safe_mul_func_uint8_t_u_u(func_28(p_17), l_1444[4]));
            (*g_1437) = &l_1512;

            ;
            for (g_120 = 1; (g_120 >= 0); g_120 -= 1)
            {
                int i, j, k;
                if (p_15)
                {
                    int i, j, k;
                    (*g_1437) = (g_175[g_120][(g_79 + 4)][l_1442] = g_539[(g_120 + 3)][(g_120 + 2)][g_120]);

                    ;
                }
                else
                {
                    if (p_17)
                        break;
                    l_1512 = p_16;
                }

                ;
                return p_18;


            }
        }
    }


    l_1613[1][0] = (safe_mul_func_uint8_t_u_u(p_16, func_28(p_18)));

    ;
    g_1622 = ((p_15 = ((safe_mod_func_uint16_t_u_u((*g_99), func_28(((*l_1618) = (l_1616 , (safe_unary_minus_func_int8_t_s(p_19))))))) & (p_19 , ((safe_lshift_func_uint16_t_u_s(0xB291L, 15)) , (!(p_18 > (l_1621[3][1] == l_1621[1][1]))))))) | p_16);
    return p_18;


}







static unsigned char func_22(char * p_23, short p_24, short p_25)
{
    unsigned l_549[2][5] = {{0x1EE9843AL, 4294967295UL, 0x1EE9843AL, 4294967295UL, 0x1EE9843AL}, {0x1EE9843AL, 4294967295UL, 0x1EE9843AL, 4294967295UL, 0x1EE9843AL}};
    int *l_556 = &g_122;
    char l_623[1][3][8] = {{{(-10L), 1L, (-10L), 1L, (-10L), 1L, (-10L), 1L}, {(-10L), 1L, (-10L), 1L, (-10L), 1L, (-10L), 1L}, {(-10L), 1L, (-10L), 1L, (-10L), 1L, (-10L), 1L}}};
    unsigned l_636 = 0xDDEF379EL;
    int l_644 = 1L;
    unsigned char l_673 = 1UL;
    unsigned short **l_684 = &g_99;
    unsigned l_706 = 0x0C278129L;
    int *l_809 = &g_120;
    int **l_808 = &l_809;
    unsigned l_832 = 4294967295UL;
    unsigned ***l_836 = &g_767[0];
    unsigned **l_852 = (void*)0;
    unsigned short l_889 = 0x446BL;
    unsigned char l_911 = 246UL;
    int l_961 = 0x67B340A1L;
    unsigned *l_1029[6][6] = {{&g_310, &g_923, &g_76[2][2], &g_76[2][0], &g_310, &g_923}, {&g_310, &g_923, &g_76[2][2], &g_76[2][0], &g_310, &g_923}, {&g_310, &g_923, &g_76[2][2], &g_76[2][0], &g_310, &g_923}, {&g_310, &g_923, &g_76[2][2], &g_76[2][0], &g_310, &g_923}, {&g_310, &g_923, &g_76[2][2], &g_76[2][0], &g_310, &g_923}, {&g_310, &g_923, &g_76[2][2], &g_76[2][0], &g_310, &g_923}};
    unsigned char l_1102 = 0xBAL;
    unsigned l_1153 = 0x48669129L;
    unsigned short l_1175 = 0UL;
    short l_1223 = 0xED01L;
    unsigned l_1225[9][2][7] = {{{0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}, {0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}}, {{0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}, {0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}}, {{0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}, {0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}}, {{0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}, {0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}}, {{0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}, {0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}}, {{0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}, {0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}}, {{0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}, {0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}}, {{0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}, {0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}}, {{0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}, {0x4D8B5D2DL, 6UL, 1UL, 0UL, 2UL, 0xC0B58349L, 0xEFE190B6L}}};
    short l_1248 = 0x7963L;
    char **l_1289 = (void*)0;
    unsigned l_1317 = 0xF984D1A0L;
    char l_1413 = (-9L);
    int **l_1426 = &l_556;
    int i, j, k;
    if (((l_549[1][2] < ((func_28(((safe_lshift_func_uint16_t_u_u(((*g_99) = (((p_25 < func_28((((safe_add_func_int16_t_s_s((-1L), l_549[1][2])) != ((safe_mul_func_uint16_t_u_u(((void*)0 == l_556), ((*g_493) ^ 0x5236A81CL))) >= (*l_556))) & (*l_556)))) ^ 0x58A7L) != (*p_23))), p_25)) | (*l_556))) == (*l_556)) <= (-1L))) >= g_79))
    {
        int *l_560 = &g_122;
        short *l_568 = &g_541;
        int l_580 = 0xC780BEFEL;
        unsigned char l_600 = 0UL;
        int l_625[8][5] = {{(-1L), 0xFF168173L, 0xB214EE00L, 5L, 0xDDCA573DL}, {(-1L), 0xFF168173L, 0xB214EE00L, 5L, 0xDDCA573DL}, {(-1L), 0xFF168173L, 0xB214EE00L, 5L, 0xDDCA573DL}, {(-1L), 0xFF168173L, 0xB214EE00L, 5L, 0xDDCA573DL}, {(-1L), 0xFF168173L, 0xB214EE00L, 5L, 0xDDCA573DL}, {(-1L), 0xFF168173L, 0xB214EE00L, 5L, 0xDDCA573DL}, {(-1L), 0xFF168173L, 0xB214EE00L, 5L, 0xDDCA573DL}, {(-1L), 0xFF168173L, 0xB214EE00L, 5L, 0xDDCA573DL}};
        char *l_639 = &g_574;
        unsigned short *l_642 = (void*)0;
        unsigned short *l_643[6] = {&g_39, &g_39, &g_621, &g_39, &g_39, &g_621};
        char *l_645 = &g_21;
        int l_646 = 0L;
        int **l_781 = (void*)0;
        unsigned short l_784 = 0x4872L;
        int l_790 = 0xB3F5A7C8L;
        int *l_835 = &g_764[0][3];
        int i, j;
        if (func_28((*l_556)))
        {
            int **l_557 = (void*)0;
            int **l_558 = (void*)0;
            int **l_559[5];
            int i;
            for (i = 0; i < 5; i++)
                l_559[i] = &g_175[5][4][2];
            g_493 = (l_560 = &g_122);

            ;
            for (g_541 = (-18); (g_541 < 21); g_541++)
            {
                unsigned char l_563[3][5][6] = {{{7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}}, {{7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}}, {{7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}, {7UL, 0x00L, 251UL, 0xE6L, 0x09L, 0xFEL}}};
                int i, j, k;
                g_493 = &g_122;
                l_563[0][4][3] = 0x33DD5F45L;
            }
        }
        else
        {
            int **l_582 = &l_560;
            if ((*l_556))
            {
                g_175[3][9][0] = l_560;
            }
            else
            {
                unsigned *l_575 = &g_310;
                unsigned char **l_576 = (void*)0;
                unsigned char *l_578[8];
                unsigned char **l_577 = &l_578[1];
                unsigned *l_579[9][6][4] = {{{&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}}, {{&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}}, {{&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}}, {{&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}}, {{&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}}, {{&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}}, {{&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}}, {{&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}}, {{&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}, {&l_549[1][2], &l_549[1][2], &l_549[1][2], &g_79}}};
                int **l_581 = &l_556;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_578[i] = (void*)0;
                (*l_560) = ((*l_556) > ((safe_mul_func_uint8_t_u_u(((((g_569 = l_568) == (p_25 , &p_24)) || (-1L)) | (((l_580 = ((!((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(g_541, 9)), 3)) , ((((*l_577) = func_49(p_24)) == &g_298) & 0x0475B19BL))) & 0xFAFBL)) , &g_298) == p_23)), 0x18L)) < p_24));
                (*l_581) = l_556;
            }
            (*l_582) = &g_122;
            for (g_55 = 0; (g_55 <= 2); g_55 += 1)
            {
                char **l_584[6];
                char ***l_583 = &l_584[3];
                int l_598[9] = {0x85166613L, 0x85166613L, 0x0D1626BAL, 0x85166613L, 0x85166613L, 0x0D1626BAL, 0x85166613L, 0x85166613L, 0x0D1626BAL};
                unsigned *l_599 = &g_76[2][2];
                int i;
                for (i = 0; i < 6; i++)
                    l_584[i] = &g_177[1][1][1];
                l_580 = ((**l_582) = func_28(((void*)0 != l_583)));
                for (g_139 = 0; (g_139 <= 5); g_139 += 1)
                {
                    unsigned short *l_587[6][2];
                    int l_601 = 0L;
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_587[i][j] = &g_55;
                    }
                    if ((0x8CL & (safe_rshift_func_uint8_t_u_u(((p_24 >= ((*l_556) || (p_25 = (l_587[1][1] == (void*)0)))) && (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(((p_25 > ((safe_mul_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s(((l_598[3] , l_599) == (void*)0), 0xBBL)) , 0x306AL), (*l_560))) , p_25)) && 0xA7L), (*g_569))) & l_600), p_25)), l_601))), 4))))
                    {
                        return (**l_582);
                    }
                    else
                    {
                        char l_602 = (-1L);
                        return l_602;
                    }
                }
                for (g_81 = 0; (g_81 <= 2); g_81 += 1)
                {
                    int *l_603[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_603[i] = (void*)0;
                }
                for (l_580 = 0; (l_580 <= 2); l_580 += 1)
                {
                    unsigned short l_627 = 65535UL;
                    l_627 = ((*l_560) = l_598[3]);
                    for (g_621 = 0; (g_621 <= 2); g_621 += 1)
                    {
                        return g_122;
                    }
                }
            }
        }

        ;
        if (((p_24 < (g_619 = ((((safe_mul_func_int8_t_s_s((*p_23), ((((*l_560) = ((safe_sub_func_uint32_t_u_u(((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(0x2BL, (*l_556))), ((*l_645) = (l_636 > (((**g_98) = (safe_mod_func_int16_t_s_s((*g_569), 0xC02FL))) ^ (l_644 = (((*l_639) = (*p_23)) != (safe_mul_func_uint16_t_u_u(((*p_23) & (*l_560)), 0x3723L))))))))) || 0x07D4L), l_646)) == (*l_560))) , 0x39AEL) < 0xDEB6L))) >= 4UL) , &g_122) == g_647))) || (*l_556)))
        {
            char l_652 = 0L;
            unsigned char *l_653 = &g_298;
            int *l_674 = &g_122;
            unsigned short **l_685 = &l_643[0];
            int l_707[4][3] = {{(-5L), 0x1D6175D3L, 1L}, {(-5L), 0x1D6175D3L, 1L}, {(-5L), 0x1D6175D3L, 1L}, {(-5L), 0x1D6175D3L, 1L}};
            int i, j;
            if ((safe_rshift_func_uint8_t_u_u(((*l_653) = (safe_rshift_func_int8_t_s_s(((*p_23) = l_652), ((((**g_98) && l_652) > (*l_560)) < p_24)))), g_4)))
            {
                int **l_654 = (void*)0;
                int **l_655 = &l_556;
                int l_672 = 1L;
                (*l_655) = (void*)0;

                ;
                (*l_655) = ((l_673 = (((g_120 | ((*l_645) = (*p_23))) , p_24) , 0xBD63A90FL)) , l_674);

                ;
                (*l_556) = p_24;
            }
            else
            {
                short l_695 = 0xF996L;
                int l_734 = 0x5C5E1D03L;
                int **l_742[2][5][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
                int i, j, k;
                for (g_574 = (-20); (g_574 > (-21)); g_574 = safe_sub_func_uint32_t_u_u(g_574, 5))
                {
                    for (g_120 = 0; (g_120 == 24); ++g_120)
                    {
                        int *l_679 = &l_625[1][2];
                        int **l_680 = &g_175[5][1][2];
                        (*l_680) = l_679;
                    }


                    for (l_636 = (-27); (l_636 != 41); l_636++)
                    {
                        int **l_683 = &g_647;
                        (*l_683) = &l_644;

                        ;
                        (*l_683) = l_674;

                        ;
                    }

                    ;
                    return (*l_674);


                }
                (*l_556) = ((l_685 = l_684) == (void*)0);

                ;
                for (g_139 = (-21); (g_139 == 6); g_139 = safe_add_func_int32_t_s_s(g_139, 4))
                {
                    unsigned short l_690 = 0x67E2L;
                    int l_735 = 1L;
                    if (((safe_rshift_func_int8_t_s_u(l_690, 3)) >= p_25))
                    {
                        short *l_691 = (void*)0;
                        unsigned short ***l_704[8];
                        short *l_705 = &g_671[0];
                        int **l_708[3][3][7] = {{{&g_493, (void*)0, &g_647, &l_674, (void*)0, &g_175[3][2][2], (void*)0}, {&g_493, (void*)0, &g_647, &l_674, (void*)0, &g_175[3][2][2], (void*)0}, {&g_493, (void*)0, &g_647, &l_674, (void*)0, &g_175[3][2][2], (void*)0}}, {{&g_493, (void*)0, &g_647, &l_674, (void*)0, &g_175[3][2][2], (void*)0}, {&g_493, (void*)0, &g_647, &l_674, (void*)0, &g_175[3][2][2], (void*)0}, {&g_493, (void*)0, &g_647, &l_674, (void*)0, &g_175[3][2][2], (void*)0}}, {{&g_493, (void*)0, &g_647, &l_674, (void*)0, &g_175[3][2][2], (void*)0}, {&g_493, (void*)0, &g_647, &l_674, (void*)0, &g_175[3][2][2], (void*)0}, {&g_493, (void*)0, &g_647, &l_674, (void*)0, &g_175[3][2][2], (void*)0}}};
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_704[i] = &g_98;
                        (*l_560) = ((void*)0 != l_691);
                        l_707[3][1] = (safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s(((*l_674) = (((l_695 & (safe_lshift_func_uint8_t_u_s((*l_674), 7))) && ((((*l_653) = ((((*l_705) = ((((((*p_23) = ((p_24 & p_25) < (safe_mod_func_int16_t_s_s(((*l_568) = (safe_add_func_int8_t_s_s(((*l_556) , (safe_mod_func_uint8_t_u_u(l_690, (*l_560)))), ((*g_569) == 0xEFF5L)))), l_695)))) , (void*)0) != &g_98) , &l_684) == l_704[7])) | p_24) > l_695)) == (*l_556)) , 246UL)) | (-10L))))) >= l_706), 6L));
                        l_556 = &g_122;
                        (*l_674) = ((safe_add_func_uint16_t_u_u(((*g_99) = (0xBAL >= 0L)), (*g_569))) && func_40(p_25, (safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_lshift_func_uint8_t_u_u(1UL, 6)), ((~(safe_mod_func_int32_t_s_s((((*l_653) = l_695) | p_25), (*l_560)))) , (((((*g_99) = 0xFD05L) < (*g_569)) >= p_24) || p_25)))) == 0x404B8AD6L), p_25)), g_39, p_23));
                    }
                    else
                    {
                        unsigned short l_736[5] = {0x2175L, 1UL, 0x2175L, 1UL, 0x2175L};
                        int *l_737 = &g_120;
                        int *l_738 = &l_707[3][1];
                        int **l_741 = &l_737;
                        int i;
                        (*l_556) = (*g_493);
                        l_625[1][2] = ((*l_674) = 0x62CB018BL);
                        (*l_738) = ((safe_mul_func_uint8_t_u_u(g_55, ((*p_23) & (safe_add_func_uint16_t_u_u(((*l_556) = (safe_mod_func_uint16_t_u_u((*l_674), (safe_rshift_func_int16_t_s_s(l_695, (((safe_rshift_func_uint16_t_u_u(func_28((((*l_737) = (((((*g_569) = (safe_add_func_uint32_t_u_u(((~func_28((safe_mod_func_uint32_t_u_u(((+(func_28(p_24) & (l_735 = (l_734 = (((p_24 , (p_25 ^ (*l_556))) , p_25) | g_733))))) == 0x66D0703DL), p_25)))) , g_619), p_24))) , (*p_23)) ^ l_736[2]) >= g_298)) , l_734)), 2)) <= (*l_674)) ^ 0xC8L)))))), (*g_99)))))) || (*l_674));

                        ;
                        (*l_738) = ((l_695 ^ ((*p_23) , (-1L))) , (func_28((safe_rshift_func_uint8_t_u_u((((*l_741) = (l_734 , (void*)0)) == l_674), g_671[0]))) & p_25));

                        ;
                    }
                    return g_139;
                }
                g_175[5][6][0] = &l_644;


            }


            ;
            for (l_673 = 0; (l_673 <= 1); l_673 += 1)
            {
                unsigned l_757 = 0UL;
                int l_778 = 0x69E981E6L;
                int l_789 = 0L;
                int **l_799 = (void*)0;
                int **l_804[3][5];
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_804[i][j] = &g_493;
                }
                l_674 = &g_122;
                for (g_298 = 0; (g_298 <= 2); g_298 += 1)
                {
                    int **l_743 = &g_647;
                    int **l_744 = &g_175[1][0][1];
                    int l_777 = (-9L);
                    int i, j;
                    (*l_744) = ((*l_743) = &l_707[0][2]);

                    ;
                    if ((safe_rshift_func_int16_t_s_u(((((~((*l_560) & ((&g_304 == (void*)0) | p_25))) >= p_24) , ((+(safe_mul_func_uint8_t_u_u(p_24, ((((*l_560) = ((l_549[l_673][(l_673 + 1)] = (*l_556)) > p_24)) < (safe_mod_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(((1UL <= (*g_569)) , (*p_23)), 6)), g_298)) , l_757) == p_25), p_24)) || 0x9BL), (*g_569)))) < 0x793BBC55L)))) & p_24)) & p_25), (*g_99))))
                    {
                        (*g_647) = (-3L);
                        (*l_743) = &g_4;

                        ;
                    }
                    else
                    {
                        unsigned char *l_758 = (void*)0;
                        unsigned char *l_759 = &g_139;
                        unsigned *l_760 = &g_310;
                        unsigned **l_766 = &g_539[1][3][1];
                        unsigned ***l_765[7] = {&l_766, &l_766, &l_766, &l_766, &l_766, &l_766, &l_766};
                        int i;
                        (*l_744) = (*l_743);
                        (*l_744) = (void*)0;
                        (**l_743) = ((((((*l_759) = g_574) >= func_28(((*l_760) = 0UL))) < (g_764[0][3] = (p_24 >= ((safe_unary_minus_func_int16_t_s(((safe_add_func_int8_t_s_s((g_621 <= (*p_23)), ((((*l_674) , ((((*p_23) && ((~(0L ^ 0x23DBL)) , 255UL)) , (*g_647)) != 0x8F4BA8E2L)) <= 1UL) && (*l_560)))) && 0x63L))) , 0x7E728FAEL)))) > p_25) == (*l_556));

                        ;
                        g_767[7] = &g_539[0][2][1];
                    }

                    ;
                    l_560 = &g_764[0][0];

                    ;
                    for (g_79 = 0; (g_79 <= 2); g_79 += 1)
                    {
                        int ***l_768 = &l_743;
                        unsigned char *l_787 = (void*)0;
                        unsigned char *l_788[8][9][3] = {{{(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}}, {{(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}, {(void*)0, &g_139, &g_139}}};
                        int i, j, k;
                        (*l_674) = ((((*l_768) = &g_175[6][7][0]) == (void*)0) , ((((*l_674) || (((safe_mul_func_uint16_t_u_u((((func_28((safe_add_func_int32_t_s_s((-1L), (((safe_sub_func_uint16_t_u_u(p_25, (((((+(*l_674)) != (func_28((((((((*l_556) || ((*p_23) = ((*l_639) = (*p_23)))) > (((*g_569) = (safe_rshift_func_uint16_t_u_u(func_28(((*g_98) != l_568)), 15))) > l_757)) & l_757) , 0x04628B6CL) , 65535UL) & 4UL)) && (*l_556))) , 0xF5954DC3L) , (*p_23)) , 0x865BL))) , (*l_556)) ^ 0L)))) == 0x6742L) , l_549[l_673][(l_673 + 1)]) != (*g_647)), 1L)) && 1L) , l_777)) & 4294967290UL) != l_757));

                        ;
                        g_175[(g_298 + 2)][(g_298 + 3)][g_79] = (l_778 , g_539[(g_298 + 3)][(g_79 + 1)][l_673]);
                        (*l_674) = ((((safe_add_func_int32_t_s_s(((void*)0 == l_781), ((p_24 == (((*g_99) ^ (((-1L) != ((safe_sub_func_uint8_t_u_u((func_28(l_784) , ((func_28(((safe_mul_func_uint8_t_u_u((g_139 = g_541), g_574)) | p_25)) && (*l_674)) && p_25)), 0x75L)) < p_25)) <= l_789)) != g_298)) , p_24))) <= (*l_556)) && (*g_647)) > p_24);

                        ;
                        (*l_556) = ((func_28(func_28(((!(-1L)) >= l_790))) >= (*p_23)) || 0x20B2L);
                    }

                    ;
                }
                for (l_580 = 0; (l_580 <= 1); l_580 += 1)
                {
                    int **l_791 = &g_175[1][0][1];
                    for (g_120 = 0; (g_120 <= 2); g_120 += 1)
                    {
                        int i, j, k;
                        g_175[(g_120 + 4)][(l_673 + 6)][(l_580 + 1)] = g_539[(l_580 + 3)][(l_580 + 1)][l_673];
                        (*l_556) = g_76[l_580][(l_580 + 1)];
                    }
                    (*l_791) = &l_625[0][2];
                    g_493 = &g_122;

                    ;
                    for (g_122 = 2; (g_122 >= 0); g_122 -= 1)
                    {
                        short l_792[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_792[i] = 0x6A03L;
                        return l_792[0];



                    }
                }
                for (l_778 = 2; (l_778 >= 0); l_778 -= 1)
                {
                    int l_805 = 0xF27FF4C7L;
                    int ***l_810 = (void*)0;
                    (*l_556) = (safe_sub_func_uint16_t_u_u((((**l_684) = (((((((safe_add_func_int32_t_s_s(p_25, ((*g_569) != (safe_sub_func_int32_t_s_s(((void*)0 == l_799), (safe_mod_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((void*)0 == &g_120) ^ p_25), 15)), (*l_560)))))))) , (*p_23)) , l_804[2][3]) != (void*)0) | l_805) > p_24) <= 4294967295UL)) | (*g_569)), p_24));
                    if (p_24)
                        continue;
                    (*l_556) = 0xED1FC0FEL;
                    if (((((((p_24 = (0x2D85L ^ ((((safe_lshift_func_uint16_t_u_u(((*g_614) != (void*)0), (((l_781 = l_808) != (g_811 = (void*)0)) != 0xCCL))) && ((((*g_569) == (safe_lshift_func_int16_t_s_u(l_805, 6))) || (((((*g_569) = 0x7CFDL) & 1UL) , 0x0495L) , p_25)) , p_25)) , p_24) , 0xC28AL))) < 0x6A39L) != (-7L)) < (*l_674)) <= (*p_23)) & l_805))
                    {
                        return g_298;



                    }
                    else
                    {
                        return (*l_560);



                    }
                }
            }


            ;
            ;
        }
        else
        {
            int l_815 = (-7L);
            (*l_556) = l_815;
            for (g_619 = 0; (g_619 < 30); g_619 = safe_add_func_int32_t_s_s(g_619, 1))
            {
                unsigned l_819 = 0x54A29311L;
                for (l_644 = 2; (l_644 >= 0); l_644 -= 1)
                {
                    int **l_818 = &l_556;
                    (*l_818) = (((*l_560) == l_815) , &g_4);

                    ;
                    g_175[3][6][0] = &g_4;
                    for (l_580 = 0; (l_580 >= 0); l_580 -= 1)
                    {
                        int i, j, k;
                        (*l_560) = p_25;
                        g_175[(l_580 + 3)][(l_580 + 7)][l_644] = &l_644;
                    }
                    for (g_120 = 0; (g_120 <= 0); g_120 += 1)
                    {
                        l_819 = l_815;
                        return g_81;


                    }
                }
                for (l_580 = 0; (l_580 <= 0); l_580 += 1)
                {
                    short l_820 = 1L;
                    unsigned char *l_829[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                    int l_830 = 0x76E518CEL;
                    unsigned **l_831 = &g_147;
                    int *l_833 = &l_815;
                    int **l_834[2];
                    unsigned ****l_837 = &l_836;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_834[i] = &g_493;
                    (*l_560) = (((**g_98) = ((func_28(l_820) & l_815) < (((p_25 == ((*l_560) < ((~(safe_rshift_func_int16_t_s_s(p_24, ((safe_lshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s(0x5EL, 0x5AL)), ((safe_mod_func_int32_t_s_s(((l_830 = g_4) < l_820), p_24)) | p_25))) , p_24)))) | (*p_23)))) > 0xF13AL) != 8UL))) > 0x3227L);

                    ;
                    (*l_833) = ((*l_560) = p_24);
                    g_175[2][5][2] = (l_835 = &l_580);

                    ;
                    (*l_560) = ((*l_833) = (((*l_837) = l_836) != (void*)0));
                }
                if (p_25)
                    break;
                for (p_25 = 0; (p_25 != (-10)); p_25 = safe_sub_func_int32_t_s_s(p_25, 2))
                {
                    (*l_835) = (-7L);
                }
            }


            ;
            ;
        }


        ;
        ;

        ;
    }
    else
    {
        return p_25;
    }


    ;
    ;

    if ((*l_556))
    {
        char l_842 = 0xC5L;
        unsigned char *l_849 = &l_673;
        int l_850 = 0xFECFC25DL;
        unsigned **l_881[3][7][6] = {{{&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}}, {{&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}}, {{&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}, {&g_147, &g_147, &g_147, (void*)0, &g_147, &g_147}}};
        int *l_888[7] = {(void*)0, &g_764[1][2], (void*)0, &g_764[1][2], (void*)0, &g_764[1][2], (void*)0};
        int l_890[9][6] = {{(-7L), 8L, 0xE0E97CE2L, 0xC79C192DL, 0xFB059212L, 0x271BCC58L}, {(-7L), 8L, 0xE0E97CE2L, 0xC79C192DL, 0xFB059212L, 0x271BCC58L}, {(-7L), 8L, 0xE0E97CE2L, 0xC79C192DL, 0xFB059212L, 0x271BCC58L}, {(-7L), 8L, 0xE0E97CE2L, 0xC79C192DL, 0xFB059212L, 0x271BCC58L}, {(-7L), 8L, 0xE0E97CE2L, 0xC79C192DL, 0xFB059212L, 0x271BCC58L}, {(-7L), 8L, 0xE0E97CE2L, 0xC79C192DL, 0xFB059212L, 0x271BCC58L}, {(-7L), 8L, 0xE0E97CE2L, 0xC79C192DL, 0xFB059212L, 0x271BCC58L}, {(-7L), 8L, 0xE0E97CE2L, 0xC79C192DL, 0xFB059212L, 0x271BCC58L}, {(-7L), 8L, 0xE0E97CE2L, 0xC79C192DL, 0xFB059212L, 0x271BCC58L}};
        char l_922 = (-3L);
        short *l_948 = &g_671[0];
        short *l_949 = (void*)0;
        int *l_979 = &g_764[0][3];
        int **l_981[3];
        int *l_982 = &l_890[6][0];
        unsigned short *l_983 = &l_889;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_981[i] = &g_493;
        if (((p_24 != (safe_mul_func_int16_t_s_s(((*g_569) = l_842), ((*p_23) == ((0xD4L | (((*l_556) , (safe_add_func_int16_t_s_s(((p_24 != (safe_rshift_func_uint16_t_u_s(((l_850 = (p_24 >= (safe_rshift_func_uint8_t_u_s(((*l_849) = p_24), 4)))) , p_24), 4))) , p_25), p_24))) >= p_24)) , 0xCBL))))) == 0x9DL))
        {
            int *l_851[8] = {&l_644, &l_644, &l_644, &l_644, &l_644, &l_644, &l_644, &l_644};
            char *l_891 = &g_65;
            int l_907 = 0x1764BBBBL;
            int **l_912 = (void*)0;
            unsigned *l_913 = &g_76[2][2];
            int ***l_925[7] = {(void*)0, (void*)0, &g_811, (void*)0, (void*)0, &g_811, (void*)0};
            int ****l_924 = &l_925[6];
            int i;
            l_644 = l_850;
            if (((0xB9971B4DL > ((void*)0 != l_852)) <= (func_40(p_24, ((*l_849) = (p_24 , ((0xD01DBFE3L >= (safe_mod_func_uint32_t_u_u(0xD3B079F4L, (*g_493)))) > (safe_add_func_uint32_t_u_u(4294967295UL, 0x9F7DFBABL))))), (*l_556), &l_842) == (-8L))))
            {
                for (l_673 = 16; (l_673 == 18); l_673++)
                {
                    int *l_861 = &g_764[0][3];
                    for (g_120 = 0; (g_120 > 7); g_120 = safe_add_func_int16_t_s_s(g_120, 9))
                    {
                        int **l_862 = (void*)0;
                        int **l_863 = &g_493;
                        (*l_863) = l_861;

                        ;
                    }
                }

                ;
            }
            else
            {
                unsigned l_879 = 0xDCD18C05L;
                int l_882[4][3][7] = {{{0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}, {0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}, {0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}}, {{0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}, {0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}, {0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}}, {{0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}, {0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}, {0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}}, {{0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}, {0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}, {0xA1476BBCL, 0L, 0x586080ADL, 0L, 0xA1476BBCL, 0x3FD81D55L, 0xA1476BBCL}}};
                int i, j, k;
                if (((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((0x15L > g_76[2][2]), ((safe_add_func_int8_t_s_s((*l_556), ((safe_rshift_func_int16_t_s_u((p_25 <= (((**g_98) = p_24) > ((p_24 > l_842) , (safe_sub_func_uint32_t_u_u((safe_rshift_func_int16_t_s_s((-1L), ((*l_556) < g_65))), l_850))))), p_24)) <= 0L))) , (*l_556)))), g_4)) < (*p_23)))
                {
                    unsigned short l_880 = 0xC94EL;
                    int *l_887 = &l_850;
                    for (g_733 = 28; (g_733 != (-4)); --g_733)
                    {
                        int **l_878 = &g_175[0][1][0];
                        (*l_878) = &g_122;
                        l_644 = p_24;
                    }
                    if ((~p_25))
                    {
                        l_879 = (*l_556);
                        l_880 = p_25;
                        (*g_303) = l_881[2][5][0];

                        ;
                    }
                    else
                    {
                        l_882[1][2][4] = p_25;
                    }

                    ;
                    for (l_673 = 0; (l_673 <= 2); l_673 += 1)
                    {
                        unsigned short l_885 = 65534UL;
                        int **l_886[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_886[i] = &l_851[7];
                        l_644 = (safe_lshift_func_int8_t_s_s((*p_23), (*p_23)));
                        l_885 = l_879;
                        l_556 = &g_764[2][4];

                        ;
                        l_888[5] = (g_175[1][0][1] = ((((*p_23) && (l_879 , (l_851[3] == (void*)0))) <= (*g_493)) , (p_25 , l_887)));
                    }


                    ;

                }
                else
                {
                    return l_889;


                }


                ;
                ;

                if (p_25)
                {
                    unsigned l_892[5][9] = {{0x813FD377L, 0xF85B6E39L, 0x7A4CADA7L, 1UL, 0xDBF73DF8L, 0x5E50F545L, 1UL, 0x97C3F12FL, 18446744073709551615UL}, {0x813FD377L, 0xF85B6E39L, 0x7A4CADA7L, 1UL, 0xDBF73DF8L, 0x5E50F545L, 1UL, 0x97C3F12FL, 18446744073709551615UL}, {0x813FD377L, 0xF85B6E39L, 0x7A4CADA7L, 1UL, 0xDBF73DF8L, 0x5E50F545L, 1UL, 0x97C3F12FL, 18446744073709551615UL}, {0x813FD377L, 0xF85B6E39L, 0x7A4CADA7L, 1UL, 0xDBF73DF8L, 0x5E50F545L, 1UL, 0x97C3F12FL, 18446744073709551615UL}, {0x813FD377L, 0xF85B6E39L, 0x7A4CADA7L, 1UL, 0xDBF73DF8L, 0x5E50F545L, 1UL, 0x97C3F12FL, 18446744073709551615UL}};
                    int i, j;
                    if (l_890[6][0])
                    {
                        short l_893 = (-8L);
                        unsigned ****l_894 = &g_303;
                        int l_895[10] = {(-6L), (-6L), 0x66066ECBL, (-6L), (-6L), 0x66066ECBL, (-6L), (-6L), 0x66066ECBL, (-6L)};
                        int i;
                        l_892[0][3] = func_40(l_879, l_879, p_25, l_891);
                        l_893 = 0x01869470L;
                        l_882[3][1][2] = (((*l_894) = &l_852) != &g_304);

                        ;
                        l_882[3][2][6] = (l_895[2] = 4L);
                    }
                    else
                    {
                        int **l_896 = &g_493;
                        unsigned *l_908 = &l_892[0][3];
                        (*l_896) = &g_122;

                        ;
                        l_851[7] = ((func_40(((*l_908) = (safe_rshift_func_uint16_t_u_s((((*g_811) == (((safe_rshift_func_int16_t_s_u(p_24, 7)) <= (safe_mod_func_int8_t_s_s(0x69L, ((*l_891) = (((((safe_lshift_func_uint8_t_u_s(((*l_849) = 1UL), (safe_rshift_func_int16_t_s_s(((p_25 || (l_881[2][5][0] == (((*l_556) && (((255UL || l_882[3][0][4]) , (*l_556)) , p_24)) , (*g_303)))) , (*g_569)), (*g_569))))) | l_907) && g_55) || (*l_556)) | (*g_99)))))) , (void*)0)) , (*g_99)), 3))), g_81, (*g_812), p_23) | 0x23AE3302L) , (*l_896));
                        l_882[0][1][0] = (**l_896);
                        (**l_896) = p_24;
                    }

                    ;
                }
                else
                {
                    l_556 = ((safe_sub_func_int8_t_s_s(((**l_836) == (l_911 , (**l_836))), p_25)) , &l_882[2][0][6]);

                    ;
                }

                ;
                ;
            }


            ;
            ;
            ;


            g_493 = &l_890[7][0];

            ;
            if (((((((*g_493) = (*g_493)) > p_25) , p_25) > g_926) ^ 0xDA67836AL))
            {
                short *l_930 = (void*)0;
                unsigned l_935[7];
                int l_936[2];
                int *l_938[7][9] = {{&l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850}, {&l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850}, {&l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850}, {&l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850}, {&l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850}, {&l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850}, {&l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850, &l_936[1], &g_764[0][1], &l_936[1], &l_850}};
                char *l_945 = &g_81;
                unsigned l_951 = 18446744073709551612UL;
                int *l_954 = &l_890[6][0];
                int i, j;
                for (i = 0; i < 7; i++)
                    l_935[i] = 0UL;
                for (i = 0; i < 2; i++)
                    l_936[i] = 0x5BAC394AL;
                if ((l_936[1] = (((safe_sub_func_uint8_t_u_u((+(g_298 = (p_25 , g_79))), (*p_23))) , (safe_unary_minus_func_uint8_t_u((l_930 == (void*)0)))) , ((p_25 > (safe_add_func_uint8_t_u_u(((*l_849) = 0xEBL), 0xC6L))) , (safe_mod_func_int8_t_s_s(((l_935[2] , &g_812) != (void*)0), l_549[1][2]))))))
                {
                    int **l_937[7];
                    unsigned short *l_950[4][10];
                    int i, j;
                    for (i = 0; i < 7; i++)
                        l_937[i] = &g_175[1][2][1];
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 10; j++)
                            l_950[i][j] = &g_621;
                    }
                    l_936[1] = p_25;
                    l_938[4][4] = &g_926;
                    l_556 = (g_175[2][8][0] = &g_764[1][6]);


                    ;
                    (*g_493) = (safe_rshift_func_int8_t_s_u((func_40((*l_556), (safe_mod_func_int16_t_s_s((*l_556), (safe_add_func_uint8_t_u_u(((*l_849) = g_4), (*p_23))))), (*l_556), l_945) == (safe_add_func_int16_t_s_s((p_24 = (~p_24)), (l_951 = (l_948 != l_949))))), 5));
                }
                else
                {
                    for (g_39 = (-28); (g_39 > 11); g_39 = safe_add_func_uint32_t_u_u(g_39, 5))
                    {
                        g_175[3][6][2] = l_954;


                        return p_24;




                    }
                }


            }
            else
            {
                int **l_956 = &l_851[3];
                int l_974[6];
                int i;
                for (i = 0; i < 6; i++)
                    l_974[i] = 0xB4301AD3L;
                (*l_956) = ((g_955[3] <= ((**g_614) == (void*)0)) , (void*)0);


                for (g_574 = 13; (g_574 == 13); g_574 = safe_add_func_int32_t_s_s(g_574, 8))
                {
                    short l_969[8] = {(-1L), 0x7E71L, (-1L), 0x7E71L, (-1L), 0x7E71L, (-1L), 0x7E71L};
                    short l_970 = 0xB6A1L;
                    int i;
                }
                (*l_956) = &g_764[0][3];


            }



        }
        else
        {
            int **l_980 = &l_888[4];
            (*l_980) = (l_979 = ((safe_add_func_int32_t_s_s((!0x0AE9EB58L), func_28((safe_lshift_func_int16_t_s_s((*g_569), 13))))) , &l_890[6][4]));

            ;

            ;
        }


        ;
        ;
        ;


        ;
        l_982 = &l_890[5][3];
        (*l_982) = 0xC3964F52L;
        (*l_982) = (func_28(p_25) > ((*l_983) = (l_706 != p_25)));

        ;
    }
    else
    {
        unsigned l_986 = 0xD6BAED32L;
        unsigned char *l_998 = &g_298;
        int l_999 = (-1L);
        int l_1032 = 0xB7E88714L;
        int *l_1044 = &g_122;
        char l_1047 = (-1L);
        unsigned char l_1064 = 0x75L;
        char l_1065 = 0L;
        int l_1081 = 0xAD53182AL;
        unsigned l_1110[2][10][8] = {{{4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}}, {{4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}, {4294967287UL, 0xADDB695BL, 7UL, 7UL, 0xADDB695BL, 4294967287UL, 0xADDB695BL, 7UL}}};
        short l_1111 = 0x2756L;
        unsigned l_1118[8][7] = {{0UL, 18446744073709551609UL, 1UL, 4UL, 1UL, 18446744073709551609UL, 0UL}, {0UL, 18446744073709551609UL, 1UL, 4UL, 1UL, 18446744073709551609UL, 0UL}, {0UL, 18446744073709551609UL, 1UL, 4UL, 1UL, 18446744073709551609UL, 0UL}, {0UL, 18446744073709551609UL, 1UL, 4UL, 1UL, 18446744073709551609UL, 0UL}, {0UL, 18446744073709551609UL, 1UL, 4UL, 1UL, 18446744073709551609UL, 0UL}, {0UL, 18446744073709551609UL, 1UL, 4UL, 1UL, 18446744073709551609UL, 0UL}, {0UL, 18446744073709551609UL, 1UL, 4UL, 1UL, 18446744073709551609UL, 0UL}, {0UL, 18446744073709551609UL, 1UL, 4UL, 1UL, 18446744073709551609UL, 0UL}};
        unsigned short l_1139 = 65535UL;
        char l_1141 = 0xA6L;
        int l_1159[10] = {(-1L), 0L, 0L, 0L, 0L, (-1L), 0L, 0L, 0L, 0L};
        int i, j, k;
        if (((((((g_987 = (safe_lshift_func_uint16_t_u_u(p_25, ((*g_99) = func_28(l_986))))) , (safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s(0x2DL, (!((-2L) | (((safe_sub_func_int32_t_s_s((((safe_rshift_func_uint8_t_u_s(((safe_add_func_int16_t_s_s(p_24, (l_998 != l_998))) , ((((l_999 = func_40(((p_25 & p_25) , 0UL), p_24, p_24, p_23)) , p_24) ^ (*l_556)) && l_999)), 2)) & 0x2487L) , 2L), p_24)) < p_25) & (-4L)))))), p_24))) == 5UL) & l_986) , (*p_23)) > p_24))
        {
            short l_1004 = 0x975BL;
            int l_1035 = 0L;
            int l_1036 = 0x81B2C993L;
            if ((((-1L) | ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((((((*g_569) != l_986) > p_25) > ((0x0A31L | ((**l_684) = l_1004)) <= (((*g_614) = &p_23) != (void*)0))) < ((*g_303) != (void*)0)), 0x2314031CL)), 0x84C07733L)) | 255UL)) <= l_986))
            {
                int l_1007[9] = {0x52778169L, 0x52778169L, 0xC5A0291FL, 0x52778169L, 0x52778169L, 0xC5A0291FL, 0x52778169L, 0x52778169L, 0xC5A0291FL};
                unsigned *l_1008 = (void*)0;
                unsigned *l_1009[4][9] = {{&l_986, &g_310, &g_310, (void*)0, &g_923, &g_76[1][2], (void*)0, &g_76[2][2], (void*)0}, {&l_986, &g_310, &g_310, (void*)0, &g_923, &g_76[1][2], (void*)0, &g_76[2][2], (void*)0}, {&l_986, &g_310, &g_310, (void*)0, &g_923, &g_76[1][2], (void*)0, &g_76[2][2], (void*)0}, {&l_986, &g_310, &g_310, (void*)0, &g_923, &g_76[1][2], (void*)0, &g_76[2][2], (void*)0}};
                int l_1010 = 3L;
                char *l_1013 = &l_623[0][1][2];
                int l_1014 = 1L;
                unsigned l_1042 = 4294967295UL;
                int **l_1043 = &g_175[2][6][1];
                int i, j;
                if ((((*l_998) = (safe_sub_func_int32_t_s_s(l_1007[8], ((((func_40((l_986 , (l_1010 = ((*l_556) < (*p_23)))), (((*l_998) = 0x7AL) , (((safe_mul_func_int8_t_s_s((p_25 , (&l_556 == (void*)0)), l_999)) , (**g_811)) , g_79)), (*g_812), l_1013) , p_24) == p_25) & l_1014) , l_1007[8])))) & (-4L)))
                {
                    int l_1027 = 0x8BBB5D15L;
                    unsigned **l_1028[1];
                    int *l_1030 = &l_999;
                    int *l_1031[5][3] = {{&l_644, &l_1010, &l_644}, {&l_644, &l_1010, &l_644}, {&l_644, &l_1010, &l_644}, {&l_644, &l_1010, &l_644}, {&l_644, &l_1010, &l_644}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_1028[i] = &l_1008;
                    g_175[3][9][0] = (void*)0;
                    l_1032 = (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((*l_1030) = (safe_lshift_func_int16_t_s_u((-1L), (((safe_lshift_func_int16_t_s_s((p_24 != 0xAD2FD779L), (safe_mul_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((l_1027 , 0x46L), 3)), (*p_23))))) != (g_139 , (((**l_836) = (**l_836)) == (l_1029[0][0] = (p_24 , (void*)0))))) >= (***g_614))))), p_25)), 6UL));
                    for (g_923 = 0; (g_923 >= 12); g_923 = safe_add_func_uint8_t_u_u(g_923, 4))
                    {
                        unsigned char l_1037[8] = {5UL, 246UL, 5UL, 246UL, 5UL, 246UL, 5UL, 246UL};
                        int i;
                        (*l_1030) = p_25;
                        l_1035 = l_1032;
                        l_1036 = ((*l_1030) = (&l_684 != (void*)0));
                        (*l_1030) = l_1037[4];
                    }
                    g_175[1][0][1] = &g_4;
                }
                else
                {
                    l_1042 = (0UL < (safe_sub_func_uint8_t_u_u(g_81, ((safe_mul_func_int16_t_s_s(func_28((*l_556)), (-1L))) | p_24))));
                    return l_1010;



                }
                (*l_1043) = &l_1035;


                l_1044 = &g_764[1][5];

                ;
                for (l_1042 = 0; (l_1042 <= 2); l_1042 += 1)
                {
                    for (p_25 = 2; (p_25 >= 0); p_25 -= 1)
                    {
                        int i;
                        return g_671[p_25];



                    }
                }
            }
            else
            {
                short l_1045 = 0xA635L;
                int **l_1046 = &g_647;
                (*l_1044) = l_1045;
                (*l_1046) = &l_961;

                ;
                (*l_1044) = l_1047;
                (**l_1046) = (((*p_23) < (*l_556)) ^ (l_1035 >= (*l_556)));
            }


            ;

            ;
            (*l_1044) = (p_24 != 0x53D8L);
        }
        else
        {
            for (l_636 = 24; (l_636 < 14); l_636 = safe_sub_func_uint16_t_u_u(l_636, 2))
            {
                char l_1060 = (-3L);
                int l_1061 = 0x7641A783L;
                for (g_733 = (-11); (g_733 > 25); g_733++)
                {
                    (*l_1044) = (*g_493);
                    for (l_1032 = 0; (l_1032 == 28); l_1032 = safe_add_func_uint8_t_u_u(l_1032, 9))
                    {
                        return g_79;


                    }
                    if ((((p_24 & 0x2EL) | (safe_mul_func_int16_t_s_s((*g_569), ((**g_98) | (p_25 < (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u(l_1060, 3)), 0xEE1E2DD0L))))))) <= (l_1061 = (*g_569))))
                    {
                        if (p_24)
                            break;
                        (*l_1044) = (safe_mod_func_int8_t_s_s(((*p_23) = l_1061), (l_1064 ^ (*g_99))));
                        (*l_1044) = func_28(l_1065);
                    }
                    else
                    {
                        if (p_24)
                            break;
                    }
                }
                l_1061 = (safe_lshift_func_int8_t_s_u((*p_23), (~g_21)));
            }
        }

        ;
        ;

        ;
        if ((~((((**l_684) = (0xE2AE0EF1L | ((*l_1044) = p_25))) || (*l_1044)) ^ (*p_23))))
        {
            int *l_1072 = (void*)0;
            int l_1101 = 0x53DCE657L;
            unsigned short **l_1105 = &g_99;
            for (l_999 = 0; (l_999 <= (-21)); --l_999)
            {
                int ***l_1070[10][4] = {{&g_811, &l_808, (void*)0, &l_808}, {&g_811, &l_808, (void*)0, &l_808}, {&g_811, &l_808, (void*)0, &l_808}, {&g_811, &l_808, (void*)0, &l_808}, {&g_811, &l_808, (void*)0, &l_808}, {&g_811, &l_808, (void*)0, &l_808}, {&g_811, &l_808, (void*)0, &l_808}, {&g_811, &l_808, (void*)0, &l_808}, {&g_811, &l_808, (void*)0, &l_808}, {&g_811, &l_808, (void*)0, &l_808}};
                int l_1075 = 8L;
                char *l_1079 = &g_574;
                int **l_1080[9][10] = {{&l_1072, &l_1072, (void*)0, &g_175[2][6][2], &g_175[1][0][1], &l_1072, &g_493, &l_1072, &g_493, &g_493}, {&l_1072, &l_1072, (void*)0, &g_175[2][6][2], &g_175[1][0][1], &l_1072, &g_493, &l_1072, &g_493, &g_493}, {&l_1072, &l_1072, (void*)0, &g_175[2][6][2], &g_175[1][0][1], &l_1072, &g_493, &l_1072, &g_493, &g_493}, {&l_1072, &l_1072, (void*)0, &g_175[2][6][2], &g_175[1][0][1], &l_1072, &g_493, &l_1072, &g_493, &g_493}, {&l_1072, &l_1072, (void*)0, &g_175[2][6][2], &g_175[1][0][1], &l_1072, &g_493, &l_1072, &g_493, &g_493}, {&l_1072, &l_1072, (void*)0, &g_175[2][6][2], &g_175[1][0][1], &l_1072, &g_493, &l_1072, &g_493, &g_493}, {&l_1072, &l_1072, (void*)0, &g_175[2][6][2], &g_175[1][0][1], &l_1072, &g_493, &l_1072, &g_493, &g_493}, {&l_1072, &l_1072, (void*)0, &g_175[2][6][2], &g_175[1][0][1], &l_1072, &g_493, &l_1072, &g_493, &g_493}, {&l_1072, &l_1072, (void*)0, &g_175[2][6][2], &g_175[1][0][1], &l_1072, &g_493, &l_1072, &g_493, &g_493}};
                int i, j;
            }
            (*l_1044) = (l_1081 , func_28((*l_556)));
            for (g_81 = 0; (g_81 != 6); g_81++)
            {
                int *l_1090 = (void*)0;
                char l_1100[8][4][4] = {{{(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}}, {{(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}}, {{(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}}, {{(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}}, {{(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}}, {{(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}}, {{(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}}, {{(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}, {(-7L), 0x29L, (-7L), 0xE6L}}};
                unsigned short ***l_1104[6][10][4] = {{{&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}}, {{&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}}, {{&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}}, {{&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}}, {{&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}}, {{&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}, {&g_98, (void*)0, &l_684, &l_684}}};
                int l_1140 = 2L;
                int i, j, k;
            }
        }
        else
        {
            int l_1147 = 4L;
            short l_1152[6] = {0L, 0L, (-5L), 0L, 0L, (-5L)};
            char *l_1154[1][9] = {{&l_1047, &g_21, &l_1047, &g_21, &l_1047, &g_21, &l_1047, &g_21, &l_1047}};
            int i, j;
            if ((safe_sub_func_uint16_t_u_u(65528UL, (safe_unary_minus_func_int32_t_s((1L ^ func_40((*l_556), (p_24 < (l_1147 , (safe_lshift_func_uint8_t_u_u((*l_1044), 4)))), (((safe_mul_func_int16_t_s_s(0L, (l_1152[0] == (*l_556)))) , l_1152[1]) >= l_1153), l_1154[0][1])))))))
            {
                int l_1168 = 0L;
                if ((0x7E5BL | 0xAC4BL))
                {
                    return l_1152[2];




                }
                else
                {
                    unsigned l_1162 = 0x4CC33282L;
                    int l_1163 = 4L;
                    int *l_1164 = &l_1081;
                    l_1147 = 0xBE31FD63L;
                    if ((l_1044 != (*l_808)))
                    {
                        int l_1155 = (-1L);
                        return l_1155;




                    }
                    else
                    {
                        unsigned *l_1158 = &l_706;
                        (*l_1044) = (1UL <= (0xAA5CL & (safe_sub_func_uint32_t_u_u(((*l_1158) = (*l_1044)), l_1159[3]))));
                    }
                    l_1163 = (safe_rshift_func_uint8_t_u_u((*l_1044), (p_25 >= l_1162)));
                    for (l_1163 = 0; (l_1163 <= 9); l_1163 += 1)
                    {
                        int **l_1165 = (void*)0;
                        int **l_1166 = (void*)0;
                        int **l_1167 = &g_175[1][0][1];
                        l_1164 = &g_122;

                        ;
                        (*l_1167) = &g_122;
                        (*l_1044) = (l_1147 = p_25);
                        (*l_1164) = l_1168;
                    }

                    ;
                }
            }
            else
            {
                unsigned short l_1176 = 1UL;
                unsigned l_1179[3];
                int *l_1181 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_1179[i] = 0x52AD8AC2L;
                for (l_999 = 0; (l_999 > (-8)); --l_999)
                {
                    int **l_1180[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1180[i] = &g_493;
                }
            }
            for (l_1153 = 0; (l_1153 >= 39); l_1153 = safe_add_func_int32_t_s_s(l_1153, 4))
            {
                unsigned l_1186 = 4294967295UL;
                (*l_1044) = (safe_add_func_uint8_t_u_u(l_1186, 0x72L));
                (*l_1044) = p_25;
                (*l_1044) = (safe_add_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u((~0x68L))), ((void*)0 != &g_614)));
                for (g_81 = 13; (g_81 <= 29); g_81++)
                {
                    int *l_1192 = &l_1147;
                    l_1192 = (void*)0;

                    ;
                }
            }
            for (p_25 = 3; (p_25 > 9); p_25++)
            {
                if ((*l_556))
                    break;
            }
        }
    }


    ;
    ;
    ;

    ;

    for (l_636 = 0; (l_636 <= 6); l_636 += 1)
    {
        short *l_1219 = &g_955[3];
        int l_1220 = 5L;
        char *l_1221 = &g_574;
        unsigned *l_1222[6] = {&g_619, &l_549[1][2], &g_619, &l_549[1][2], &g_619, &l_549[1][2]};
        int *l_1224[7][7] = {{&g_122, (void*)0, &g_764[1][0], &g_764[0][3], &g_764[0][3], &g_764[1][0], (void*)0}, {&g_122, (void*)0, &g_764[1][0], &g_764[0][3], &g_764[0][3], &g_764[1][0], (void*)0}, {&g_122, (void*)0, &g_764[1][0], &g_764[0][3], &g_764[0][3], &g_764[1][0], (void*)0}, {&g_122, (void*)0, &g_764[1][0], &g_764[0][3], &g_764[0][3], &g_764[1][0], (void*)0}, {&g_122, (void*)0, &g_764[1][0], &g_764[0][3], &g_764[0][3], &g_764[1][0], (void*)0}, {&g_122, (void*)0, &g_764[1][0], &g_764[0][3], &g_764[0][3], &g_764[1][0], (void*)0}, {&g_122, (void*)0, &g_764[1][0], &g_764[0][3], &g_764[0][3], &g_764[1][0], (void*)0}};
        unsigned l_1235 = 0xFF81161CL;
        int *l_1269 = (void*)0;
        int ***l_1297[8][8] = {{&l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808}, {&l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808}, {&l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808}, {&l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808}, {&l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808}, {&l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808}, {&l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808}, {&l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808, &l_808}};
        int ****l_1296 = &l_1297[6][0];
        unsigned l_1321 = 0x937A56D3L;
        unsigned char *l_1346 = &g_298;
        unsigned char l_1371[10] = {0x27L, 1UL, 0x27L, 1UL, 0x27L, 1UL, 0x27L, 1UL, 0x27L, 1UL};
        unsigned ***l_1411 = &l_852;
        int i, j;
        for (g_55 = 0; (g_55 <= 2); g_55 += 1)
        {
            unsigned l_1203 = 0x6BDD478CL;
            for (g_81 = 0; (g_81 <= 2); g_81 += 1)
            {
                int i, j;
                return g_764[g_81][l_636];





            }
            for (p_25 = 0; (p_25 <= 0); p_25 += 1)
            {
                unsigned short l_1205 = 4UL;
                int *l_1206 = &g_764[1][6];
                int i, j, k;
                g_175[(p_25 + 3)][(g_55 + 1)][(p_25 + 1)] = &g_764[g_55][l_636];
                (*l_1206) = (((5L & (safe_lshift_func_int16_t_s_s(l_623[p_25][g_55][l_636], 5))) , ((safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(p_24, (safe_add_func_uint32_t_u_u(l_1203, (5UL > l_889))))), (((*g_569) < 1L) , (safe_unary_minus_func_int16_t_s((p_24 ^ 0xD89718ABL)))))) , g_764[g_55][l_636])) || l_1205);
            }
        }
        l_1225[0][0][4] = (safe_rshift_func_int8_t_s_s((*p_23), ((safe_sub_func_int32_t_s_s((p_25 > (*g_99)), l_1223)) > (*g_569))));
        g_647 = ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s((safe_unary_minus_func_uint8_t_u(0x1DL)), ((*p_23) = 0x7FL))), l_911)), 252UL)), l_1235)) , &g_926);

        ;
        for (l_1102 = 0; (l_1102 <= 2); l_1102 += 1)
        {
            char l_1236 = 8L;
            unsigned *l_1245 = (void*)0;
            if (p_24)
                break;
            for (g_139 = 0; (g_139 <= 2); g_139 += 1)
            {
                int i, j;
                (*g_647) = func_40(p_24, l_1236, p_25, &l_623[0][1][3]);
                if (p_24)
                {
                    int *l_1237[1];
                    unsigned l_1238 = 0x12FB4304L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_1237[i] = (void*)0;
                    if (func_28(p_24))
                    {
                        int i, j, k;
                        g_175[l_1102][(l_1102 + 2)][l_1102] = l_1237[0];
                        return l_1238;




                    }
                    else
                    {
                        return l_1236;




                    }
                }
                else
                {
                    for (g_39 = 0; (g_39 <= 2); g_39 += 1)
                    {
                        return p_24;




                    }
                }
                l_644 = (safe_mod_func_int16_t_s_s(func_40((g_76[l_1102][l_1102] = (+(safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((((void*)0 == l_1245) == p_25), ((*g_569) = (-1L)))) , l_1236), p_24)))), p_25, (**g_811), &l_623[0][1][1]), 0x7146L));
            }
            for (g_733 = 6; (g_733 >= 0); g_733 -= 1)
            {
                int i, j, k;
                g_175[g_733][l_1102][l_1102] = &l_644;
                g_175[l_636][(l_1102 + 7)][l_1102] = &l_1220;
            }
            if ((*g_493))
                break;
        }


        for (g_79 = 0; (g_79 <= 6); g_79 += 1)
        {
            char l_1249 = 0x2FL;
            int *l_1250 = (void*)0;
            unsigned char **l_1260[3];
            unsigned **l_1267 = &g_147;
            int l_1283 = 0L;
            int ****l_1298 = &l_1297[6][0];
            short l_1325[1][4] = {{(-4L), 0x0627L, (-4L), 0x0627L}};
            int l_1349[2];
            unsigned l_1352 = 0xD5DB5DD7L;
            int *l_1353 = &g_926;
            unsigned short l_1379 = 3UL;
            unsigned char l_1422 = 0UL;
            int i, j;
            for (i = 0; i < 3; i++)
                l_1260[i] = &g_1119[6][1][0];
            for (i = 0; i < 2; i++)
                l_1349[i] = (-1L);
            l_1249 = (*g_647);
            if ((*g_647))
            {
                return p_25;




            }
            else
            {
                unsigned short l_1279 = 0x6D5DL;
                int l_1282 = 0x77C0B219L;
                for (l_706 = 2; (l_706 <= 6); l_706 += 1)
                {
                    int *l_1252 = &g_122;
                    if (((*p_23) != 0x6BL))
                    {
                        int **l_1251 = &l_1224[0][4];
                        char *l_1259 = &l_623[0][0][1];
                        if (p_24)
                            break;
                        (*l_1251) = l_1250;
                        (*l_1251) = l_1252;
                        (*g_647) = (func_28(p_25) , ((0xBCD3L != (((((safe_add_func_int8_t_s_s(((*l_1221) = ((*p_23) = (func_28(p_24) && (*p_23)))), ((*l_1259) = (safe_add_func_uint8_t_u_u(p_25, (p_25 , (safe_rshift_func_uint16_t_u_s(0xA4B2L, p_24)))))))) > p_25) , (void*)0) != l_1260[1]) , (*l_1252))) < p_24));
                    }
                    else
                    {
                        int **l_1268[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1268[i] = (void*)0;
                        (*l_1252) = ((*g_647) = ((safe_sub_func_int16_t_s_s(((p_24 , 0x7C04L) , (-1L)), ((*p_23) ^ ((*l_1221) = func_28(((g_619 = (*l_1252)) , p_24)))))) < (safe_mul_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(0x53E8L, 7)), (((&g_298 != (void*)0) , l_1267) != &l_1222[3])))));
                        l_1269 = &l_1220;

                        ;
                        return p_25;




                    }
                }
                for (l_1175 = 0; (l_1175 <= 0); l_1175 += 1)
                {
                    short l_1278[10][5] = {{0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}, {0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}, {0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}, {0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}, {0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}, {0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}, {0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}, {0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}, {0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}, {0x0A1AL, 0x40B9L, 0xC760L, 0x53F8L, 0xABFBL}};
                    unsigned l_1284 = 7UL;
                    int i, j, k;
                    for (l_673 = 0; (l_673 <= 6); l_673 += 1)
                    {
                        int i, j, k;
                        l_1283 = (safe_mod_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(l_623[l_1175][(l_1175 + 2)][(g_79 + 1)], (l_1278[3][0] = (p_24 > (p_25 && (safe_rshift_func_uint8_t_u_u(func_28(l_623[l_1175][(l_1175 + 2)][(g_79 + 1)]), 1))))))) , func_28(l_1279)), ((safe_add_func_uint8_t_u_u((l_1282 = 0xDCL), ((p_24 | 0x96L) , 0x1FL))) & l_623[l_1175][(l_1175 + 2)][(g_79 + 1)]))), 0x7FL));
                        return l_1284;




                    }
                    if (l_623[l_1175][(l_1175 + 1)][g_79])
                        break;
                }
                if ((p_25 >= l_1282))
                {
                    int **l_1285[4][5][8] = {{{&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}}, {{&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}}, {{&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}}, {{&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}, {&l_1269, &l_556, &l_1224[0][1], (void*)0, (void*)0, &l_1224[0][1], &l_556, &l_1269}}};
                    int i, j, k;
                    g_175[1][0][1] = &l_1282;


                }
                else
                {
                    int **l_1286 = &l_1224[2][5];
                    (*l_1286) = &g_764[0][3];
                }


                g_175[1][0][1] = &l_1283;


            }


        }
    }


    (*l_1426) = (((**l_808) = (~((*p_23) | 0xA5L))) , &l_961);

    ;
    return p_24;





}







static int func_28(unsigned p_29)
{
    unsigned *l_526 = &g_76[1][1];
    int l_533[1];
    int l_534 = (-1L);
    unsigned *l_538 = &g_76[1][1];
    unsigned **l_537[8][3][3] = {{{(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}}, {{(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}}, {{(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}}, {{(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}}, {{(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}}, {{(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}}, {{(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}}, {{(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}, {(void*)0, &l_526, &l_538}}};
    short *l_540 = &g_541;
    int *l_542[1];
    unsigned l_543 = 1UL;
    int **l_547[1];
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_533[i] = 0xDA31A8DDL;
    for (i = 0; i < 1; i++)
        l_542[i] = &g_122;
    for (i = 0; i < 1; i++)
        l_547[i] = &l_542[0];
    l_543 = (safe_lshift_func_int16_t_s_s(((*l_540) = (safe_add_func_uint8_t_u_u((l_526 == (g_539[5][0][0] = (((safe_mod_func_int32_t_s_s(((l_533[0] = ((safe_sub_func_uint16_t_u_u(((safe_mul_func_int16_t_s_s((p_29 > l_533[0]), (g_122 , (~((((l_534 && l_533[0]) | l_534) || (safe_add_func_uint8_t_u_u(g_39, g_120))) > p_29))))) , 0x4793L), l_534)) || l_533[0])) ^ g_55), 0x0353BE89L)) & p_29) , &g_76[2][2]))), p_29))), 4));
    for (g_120 = 0; (g_120 >= (-4)); g_120--)
    {
        int **l_546 = &g_493;
        (*l_546) = &l_533[0];

        ;
    }


    g_175[1][0][1] = &l_533[0];


    g_175[1][0][1] = (g_493 = &g_4);

    ;
    return p_29;


}







static char * func_30(unsigned char p_31)
{
    unsigned l_68 = 0xD5D57D38L;
    unsigned *l_78 = &g_79;
    char *l_80 = &g_81;
    int *l_121 = &g_122;
    int **l_123 = (void*)0;
    int **l_124 = &l_121;
    int *l_126 = &g_122;
    int l_267 = 0L;
    short l_296 = 0x9DE6L;
    unsigned l_335[3][5] = {{9UL, 0x99FDA0DBL, 9UL, 0x99FDA0DBL, 9UL}, {9UL, 0x99FDA0DBL, 9UL, 0x99FDA0DBL, 9UL}, {9UL, 0x99FDA0DBL, 9UL, 0x99FDA0DBL, 9UL}};
    int l_345 = (-2L);
    int l_354[5];
    char l_355[8][1][1];
    char *l_356[10] = {(void*)0, &g_65, &g_65, &g_65, &g_65, (void*)0, &g_65, &g_65, &g_65, &g_65};
    int l_357[8] = {(-1L), (-1L), 3L, (-1L), (-1L), 3L, (-1L), (-1L)};
    int *l_363 = &l_345;
    unsigned l_380 = 0x5E2CB494L;
    short l_399 = 0x87F7L;
    unsigned short ***l_424 = (void*)0;
    unsigned char l_425 = 7UL;
    unsigned short *l_447 = &g_55;
    int l_471 = 0xE2A7245CL;
    char **l_480 = (void*)0;
    char ***l_479 = &l_480;
    char *l_492 = &l_355[2][0][0];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_354[i] = (-5L);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 1; k++)
                l_355[i][j][k] = 1L;
        }
    }
    (*l_121) = (((*l_80) = (func_40((((p_31 , func_45(func_49(p_31), (g_39 , g_64[3]), (safe_mod_func_uint8_t_u_u(l_68, 0x61L)))) != ((((*l_78) = l_68) , (-1L)) , (void*)0)) , g_55), p_31, l_68, l_80) , 5L)) == g_120);
    (*l_124) = &g_4;

    ;
    if ((*l_121))
    {
        char l_125 = 1L;
        int l_143 = 0x26640828L;
        int l_144 = 0xA6F56A42L;
        unsigned *l_145 = &g_79;
        unsigned l_157 = 0x0D562ED7L;
        char l_186 = 1L;
        if ((((void*)0 == &g_79) == (((*l_80) = (g_21 != (!(p_31 & l_125)))) , ((void*)0 == &g_4))))
        {
            unsigned char *l_137 = (void*)0;
            unsigned char *l_138 = &g_139;
            int l_140 = 0x5127A508L;
            int *l_141 = &l_140;
            unsigned char *l_142[3];
            unsigned **l_146[5] = {&l_78, &l_145, &l_78, &l_145, &l_78};
            unsigned *l_148[3];
            int l_149 = 0x64E9E4B1L;
            int i;
            for (i = 0; i < 3; i++)
                l_142[i] = (void*)0;
            for (i = 0; i < 3; i++)
                l_148[i] = &g_76[2][2];
            (*l_124) = l_126;

            ;
            (*l_141) = (g_122 = (p_31 , (g_76[2][2] , ((safe_unary_minus_func_uint8_t_u((g_120 , (safe_rshift_func_uint16_t_u_s((func_40(func_40((l_149 = (safe_rshift_func_int16_t_s_u(((g_147 = ((((~(((((**l_124) >= (l_143 = (((*l_141) = ((p_31 != (((*l_138) = (safe_unary_minus_func_int32_t_s(((safe_add_func_int32_t_s_s(((func_40(p_31, (((safe_add_func_uint8_t_u_u(0x33L, (**l_124))) && (-1L)) ^ 0xF170L), g_120, &g_21) , 0xC9D8L) && l_125), 0L)) >= 0x26L)))) | l_140)) && (**l_124))) != g_81))) == (*l_126)) | (-1L)) == l_144)) && g_55) | 0xB1L) , l_145)) != (void*)0), 9))), g_65, l_125, &g_21), l_144, p_31, &g_21) && l_144), 8))))) >= 0x128FL))));
            (*l_124) = &g_122;
        }
        else
        {
            short l_153 = 0xB339L;
            int l_188 = (-10L);
            for (g_122 = 0; (g_122 <= 2); g_122 += 1)
            {
                short l_154 = 0x2824L;
                char *l_170[5][8] = {{&g_65, &g_81, &g_65, (void*)0, (void*)0, &g_81, &g_21, &g_65}, {&g_65, &g_81, &g_65, (void*)0, (void*)0, &g_81, &g_21, &g_65}, {&g_65, &g_81, &g_65, (void*)0, (void*)0, &g_81, &g_21, &g_65}, {&g_65, &g_81, &g_65, (void*)0, (void*)0, &g_81, &g_21, &g_65}, {&g_65, &g_81, &g_65, (void*)0, (void*)0, &g_81, &g_21, &g_65}};
                int i, j;
                for (l_144 = 2; (l_144 >= 0); l_144 -= 1)
                {
                    unsigned char *l_152 = &g_139;
                    int l_163 = 0x34D06322L;
                    int i;
                    l_153 = (safe_sub_func_uint8_t_u_u(p_31, ((*l_152) = p_31)));
                    if ((g_55 && (l_154 != (safe_rshift_func_uint16_t_u_s((p_31 , ((l_143 == l_143) && l_157)), (safe_add_func_int32_t_s_s(l_154, 0x4236FC2CL)))))))
                    {
                        int *l_160 = &g_4;
                        int *l_171 = (void*)0;
                        int *l_172 = &l_163;
                        unsigned **l_174 = &l_78;
                        unsigned ***l_173 = &l_174;
                        l_160 = l_160;
                        (*l_172) = (safe_mul_func_uint8_t_u_u(p_31, g_4));
                        (*l_173) = &g_147;

                        ;
                    }
                    else
                    {
                        unsigned l_176 = 0UL;
                        g_175[1][0][1] = (*l_124);
                        l_176 = l_157;
                        return g_177[1][6][3];


                    }
                    return &g_65;


                }
                for (g_39 = 0; (g_39 <= 2); g_39 += 1)
                {
                    int *l_187 = &g_4;
                }
            }
            l_144 = (!p_31);
            l_143 = func_40((g_120 , (safe_add_func_int8_t_s_s(l_188, p_31))), (*l_121), l_153, &g_21);
            return &g_21;


        }

        ;
    }
    else
    {
        short l_192[4][10] = {{(-6L), 0x829CL, 0xA0BAL, (-4L), 0x50B3L, (-4L), 0xA0BAL, 0x829CL, (-6L), 0x558CL}, {(-6L), 0x829CL, 0xA0BAL, (-4L), 0x50B3L, (-4L), 0xA0BAL, 0x829CL, (-6L), 0x558CL}, {(-6L), 0x829CL, 0xA0BAL, (-4L), 0x50B3L, (-4L), 0xA0BAL, 0x829CL, (-6L), 0x558CL}, {(-6L), 0x829CL, 0xA0BAL, (-4L), 0x50B3L, (-4L), 0xA0BAL, 0x829CL, (-6L), 0x558CL}};
        int l_198[5][2][10] = {{{0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}, {0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}}, {{0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}, {0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}}, {{0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}, {0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}}, {{0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}, {0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}}, {{0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}, {0xA6EB9843L, 1L, 0L, 0x6361B46BL, 0xDD691CFFL, 0x7550297CL, 0xDD691CFFL, 0x6361B46BL, 0L, 1L}}};
        int *l_199[4];
        unsigned char *l_200[9] = {&g_139, &g_139, (void*)0, &g_139, &g_139, (void*)0, &g_139, &g_139, (void*)0};
        unsigned l_201 = 4294967294UL;
        unsigned char l_231 = 0x28L;
        short l_258 = (-6L);
        int l_280 = 8L;
        int l_284 = 0xA404982AL;
        char **l_292[5][9] = {{&g_64[5], &g_64[5], (void*)0, &l_80, &g_177[1][2][0], &g_64[2], &g_177[2][7][3], &g_64[5], (void*)0}, {&g_64[5], &g_64[5], (void*)0, &l_80, &g_177[1][2][0], &g_64[2], &g_177[2][7][3], &g_64[5], (void*)0}, {&g_64[5], &g_64[5], (void*)0, &l_80, &g_177[1][2][0], &g_64[2], &g_177[2][7][3], &g_64[5], (void*)0}, {&g_64[5], &g_64[5], (void*)0, &l_80, &g_177[1][2][0], &g_64[2], &g_177[2][7][3], &g_64[5], (void*)0}, {&g_64[5], &g_64[5], (void*)0, &l_80, &g_177[1][2][0], &g_64[2], &g_177[2][7][3], &g_64[5], (void*)0}};
        char ***l_291 = &l_292[4][7];
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_199[i] = &g_120;
        (*l_124) = &g_122;

        ;
        if (((((l_192[0][5] == 5UL) != (safe_mod_func_uint8_t_u_u((((*g_99) = l_192[3][6]) , l_192[0][5]), (safe_unary_minus_func_int8_t_s(p_31))))) , (l_198[0][1][3] = (p_31 | ((safe_rshift_func_int16_t_s_u((func_40(p_31, p_31, ((*l_121) = (l_198[0][1][3] = func_40((p_31 , l_192[1][7]), (**l_124), g_76[2][1], l_80))), &g_81) , p_31), p_31)) == p_31)))) , l_201))
        {
            int l_209 = 0xE5E2D9EDL;
            unsigned char *l_219 = &g_139;
            int l_278 = 0xECBD2F91L;
            char *l_279[5] = {&g_65, &g_65, &g_65, &g_65, &g_65};
            int l_281 = 0xDECE071EL;
            unsigned short l_282 = 0xE223L;
            short *l_283[4] = {&l_192[0][5], (void*)0, &l_192[0][5], (void*)0};
            unsigned char l_285 = 246UL;
            int l_314 = (-2L);
            int i;
            for (l_201 = (-17); (l_201 < 29); l_201 = safe_add_func_uint8_t_u_u(l_201, 9))
            {
                unsigned char l_208 = 0x94L;
                int l_216 = (-8L);
                int *l_221 = &l_198[0][0][1];
                char *l_232 = &g_21;
                for (g_122 = 0; (g_122 <= (-24)); g_122 = safe_sub_func_uint32_t_u_u(g_122, 9))
                {
                    char l_217 = 0xC4L;
                    for (g_55 = 0; (g_55 < 46); g_55 = safe_add_func_uint16_t_u_u(g_55, 9))
                    {
                        int *l_210 = (void*)0;
                        unsigned **l_211 = &g_147;
                        int *l_218 = &l_198[3][1][2];
                        l_209 = l_208;
                        (*l_124) = l_210;

                        ;
                        (*l_218) = ((((((*l_211) = (void*)0) == (void*)0) == (l_209 & p_31)) >= ((safe_lshift_func_int8_t_s_u(((p_31 && ((*l_78) = ((p_31 <= 252UL) | ((safe_rshift_func_int16_t_s_u((0x9188L | (l_216 || 0x675DL)), p_31)) , g_55)))) || 0x659E81E9L), g_65)) && l_217)) == g_76[2][2]);

                        ;
                    }
                    for (g_55 = 0; (g_55 <= 2); g_55 += 1)
                    {
                        unsigned char *l_220[10][7][3] = {{{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}, {{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}, {{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}, {{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}, {{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}, {{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}, {{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}, {{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}, {{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}, {{&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}, {&g_139, &l_208, &l_208}}};
                        int i, j, k;
                        l_209 = (l_219 != l_220[7][3][1]);
                        (*l_124) = &g_122;

                        ;
                    }
                    l_221 = &g_4;

                    ;
                }

                ;
                for (g_120 = 0; (g_120 > 16); g_120 = safe_add_func_int8_t_s_s(g_120, 8))
                {
                    int l_224 = 0x1B9816CBL;
                    l_224 = (((void*)0 != &l_68) , p_31);
                    (*l_126) = (1UL && ((func_40(((l_209 <= (*l_126)) , (l_198[0][1][3] & (safe_lshift_func_uint16_t_u_u(((p_31 != (safe_mul_func_uint8_t_u_u((l_209 = func_40(p_31, ((*l_219) = (safe_mul_func_uint16_t_u_u(((*g_99) = (g_122 != func_40(p_31, func_40(p_31, l_224, g_122, l_80), l_231, &g_65))), (*l_221)))), (*l_221), &g_81)), p_31))) < 0UL), 6)))), g_120, p_31, l_232) , l_231) == p_31));
                    (*l_126) = p_31;
                    (*l_124) = (((void*)0 == &g_76[2][2]) , &l_198[0][1][3]);

                    ;
                }
            }

            ;
            ;
            for (g_55 = 27; (g_55 != 36); ++g_55)
            {
                unsigned char l_235[9];
                unsigned char *l_249 = &g_139;
                char **l_266 = &g_64[3];
                char ***l_265 = &l_266;
                int i;
                for (i = 0; i < 9; i++)
                    l_235[i] = 0UL;
                if (p_31)
                    break;
                if (((*l_126) = l_235[7]))
                {
                    int *l_245 = &l_198[0][1][3];
                    char *l_248 = &g_81;
                    if ((safe_add_func_int16_t_s_s((-8L), (safe_add_func_uint32_t_u_u(((*l_78) = ((((-1L) != ((*l_80) = ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int8_t_s_u(0xB0L, (g_139 = 0x9BL))) || p_31))), (((*l_245) = ((*l_126) = 4L)) != ((g_81 || 0L) & ((safe_rshift_func_uint16_t_u_u(0xC5EEL, p_31)) < l_209))))) | 0x4FL))) || l_192[0][5]) <= 4294967295UL)), p_31)))))
                    {
                        return l_248;


                    }
                    else
                    {
                        l_198[2][1][2] = p_31;
                    }
                    (*l_245) = ((((l_249 = &p_31) != &g_139) , (safe_add_func_int16_t_s_s(((safe_mul_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((g_65 | (safe_mul_func_uint32_t_u_u(((*l_245) , p_31), (l_235[4] , (p_31 , (p_31 < 0xFBL)))))), g_76[2][1])), p_31)) | l_258), l_209))) < 0xB3F8993EL);

                    ;
                }
                else
                {
                    int l_264[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_264[i] = 1L;
                    (*l_124) = &l_209;

                    ;
                    for (g_81 = 0; (g_81 < 13); g_81 = safe_add_func_uint32_t_u_u(g_81, 6))
                    {
                        unsigned l_263 = 18446744073709551606UL;
                        (*l_121) = ((safe_sub_func_int32_t_s_s(p_31, ((1L || l_209) , l_263))) , ((*l_126) = l_264[1]));
                    }
                }

                ;
                (*l_265) = &g_64[3];
            }

            ;
            if (((((*l_78) = (((**g_98) = ((4294967288UL > (((l_267 < l_198[4][0][3]) <= ((safe_mod_func_int16_t_s_s((l_284 = ((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s(l_209, ((l_281 = (((l_258 <= (((safe_mul_func_int8_t_s_s((((safe_sub_func_uint8_t_u_u(p_31, ((*l_80) = p_31))) , (l_280 = (l_278 = ((*l_80) = 0xBBL)))) && (g_139 = (l_209 <= p_31))), p_31)) ^ l_209) , p_31)) & p_31) & p_31)) | l_282))), p_31)) < 0xA6DCL)), l_209)) , p_31)) , l_285)) , 65535UL)) , 9UL)) >= l_198[0][1][3]) <= p_31))
            {
                unsigned short **l_290 = &g_99;
                int *l_295 = &g_122;
                char **l_299 = (void*)0;
                int l_311 = 0x7D645D23L;
                (*l_126) = ((((safe_lshift_func_uint8_t_u_s((~(((func_40(((safe_rshift_func_int8_t_s_u(p_31, 3)) >= 0x14L), p_31, (((void*)0 == l_290) , p_31), l_279[4]) >= 0x26L) && l_281) , 247UL)), 2)) , (void*)0) == l_291) & (-1L));
                for (g_81 = (-2); (g_81 > 15); ++g_81)
                {
                    unsigned *l_297 = (void*)0;
                    int l_309 = (-1L);
                    char *l_315 = &g_65;
                    l_295 = (void*)0;

                    ;
                    if (func_40(l_296, g_76[2][2], (0x4219L & g_65), ((g_298 = 0x4A94D3F0L) , &g_81)))
                    {
                        unsigned ***l_302 = (void*)0;
                        g_175[1][0][1] = (((func_40(g_122, ((*l_219) = ((((*l_291) = l_299) != &l_80) & ((*g_99) = 0x20EAL))), (g_120 = ((safe_add_func_uint8_t_u_u(((l_280 , l_302) == g_303), (((((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_309, 4)), g_310)) | l_309) && 1L) || l_231) > l_311))) ^ (*l_126))), &g_21) && 0xD8L) == 3UL) , &l_281);
                    }
                    else
                    {
                        (*l_126) = ((safe_add_func_int32_t_s_s(func_40((1UL | func_40(((func_40((((func_40(g_4, l_314, (l_278 = g_122), l_219) , (void*)0) == &g_175[1][0][1]) <= (-10L)), p_31, g_39, &g_65) , g_55) , g_76[1][2]), p_31, p_31, l_315)), l_309, g_298, &g_21), p_31)) , 0x2E33F7AAL);
                    }
                    (*l_124) = (*l_124);
                }


                ;
            }
            else
            {
                int l_336 = 1L;
                (*l_124) = &l_314;

                ;
                for (l_314 = 0; (l_314 > 10); l_314 = safe_add_func_int8_t_s_s(l_314, 8))
                {
                    char l_325 = 8L;
                    unsigned char **l_337 = &l_200[4];
                    int *l_344 = &l_284;
                    for (l_209 = 0; (l_209 < 26); l_209++)
                    {
                        int *l_320 = &g_122;
                        (*l_124) = l_320;

                        ;
                    }
                    for (l_280 = 10; (l_280 < (-5)); --l_280)
                    {
                        unsigned char l_334 = 0xF2L;
                        (*l_124) = ((((l_198[1][0][7] = 8L) <= (safe_mod_func_uint32_t_u_u(l_325, (l_209 = (safe_add_func_int32_t_s_s(l_258, ((safe_lshift_func_int16_t_s_u((~(safe_sub_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u(((*g_99) = func_40(l_201, ((+l_334) ^ l_335[1][1]), l_325, &g_65)), g_21)) , 0xB999L) , g_120), l_336))), 14)) >= l_282))))))) <= g_4) , (void*)0);

                        ;
                    }
                    l_345 = ((~(&g_175[1][0][1] != (void*)0)) != ((((*l_344) = ((((((*l_337) = (void*)0) != (void*)0) ^ (safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(((p_31 , (safe_add_func_int32_t_s_s(((*l_126) = (l_336 < l_280)), ((void*)0 != g_99)))) == 1UL), 0)) > 0x4EL), l_258))) , l_325) & l_325)) , g_21) , p_31));
                }

                ;
            }

            ;

        }
        else
        {
            for (l_296 = 3; (l_296 >= 0); l_296 -= 1)
            {
                return &g_65;


            }
            (*l_124) = &l_284;

            ;
        }


        ;

        (*l_291) = &l_80;
    }


    ;

    if ((((safe_lshift_func_uint8_t_u_s((((((**g_98) = func_40(p_31, g_76[2][2], (safe_lshift_func_int8_t_s_u((l_357[3] = (l_354[4] = ((*l_126) , ((*l_80) = (safe_mod_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u(p_31, (*g_99))) != l_354[0]), ((*l_78) = (p_31 , (((*l_126) = 9L) ^ l_355[4][0][0]))))))))), 7)), &l_355[5][0][0])) ^ 0x9282L) != 4L) <= 0xC09D12EAL), p_31)) != g_76[2][2]) , 0xBFC8B555L))
    {
        short l_362[1];
        char *l_379 = (void*)0;
        int *l_381 = &g_122;
        unsigned char l_416 = 0xFAL;
        short l_428 = (-5L);
        int l_441 = 0xC83543ACL;
        int l_472 = 0x9433F045L;
        unsigned l_496 = 4294967295UL;
        unsigned short **l_515[9];
        int i;
        for (i = 0; i < 1; i++)
            l_362[i] = 0L;
        for (i = 0; i < 9; i++)
            l_515[i] = &g_99;
        for (g_298 = 0; g_298 < 10; g_298 += 1)
        {
            l_356[g_298] = &l_355[3][0][0];
        }

        for (l_68 = 0; (l_68 <= 2); l_68 += 1)
        {
            unsigned short l_358 = 65530UL;
            int l_359 = 0x2A4FBE48L;
            unsigned *l_376 = &g_76[2][2];
            unsigned *l_377[3][9][4] = {{{&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}}, {{&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}}, {{&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}, {&l_68, &l_68, &l_335[1][1], &l_335[1][1]}}};
            unsigned char *l_378 = &g_139;
            unsigned short ***l_398[7] = {&g_98, &g_98, &g_98, &g_98, &g_98, &g_98, &g_98};
            unsigned short *l_423[10] = {&g_55, &l_358, &g_55, &l_358, &g_55, &l_358, &g_55, &l_358, &g_55, &l_358};
            int i, j, k;
            if (((+(((void*)0 == (*g_303)) | (p_31 < l_358))) ^ ((0x2CL <= (l_359 = ((*l_80) = l_358))) , (safe_add_func_int32_t_s_s(((((l_362[0] = g_76[2][0]) <= (0xAECAL != (((g_4 < g_120) | p_31) , (-4L)))) ^ p_31) || l_359), l_359)))))
            {
                (*l_124) = l_363;

                ;
                l_126 = ((*l_124) = (void*)0);

                ;
                ;
            }
            else
            {
                for (g_21 = 0; (g_21 <= 2); g_21 += 1)
                {
                    for (g_79 = 0; (g_79 <= 2); g_79 += 1)
                    {
                        (*l_124) = &l_359;

                        ;
                    }
                    if (p_31)
                        continue;
                }


            }


            (*l_363) = (safe_mul_func_int16_t_s_s((*l_363), (((*g_99) != (*l_363)) , (p_31 , (safe_lshift_func_uint16_t_u_u(l_380, 6))))));
            l_381 = l_381;
            (*l_363) = (safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s(l_358, (safe_mul_func_uint16_t_u_u((p_31 & p_31), g_310)))), p_31));
            for (l_380 = 0; (l_380 <= 2); l_380 += 1)
            {
                unsigned l_396 = 0xF335461CL;
                int *l_402 = &l_359;
                unsigned **l_407 = &l_377[0][1][1];
                short *l_408 = (void*)0;
                short *l_409 = &l_399;
                for (g_81 = 0; (g_81 <= 2); g_81 += 1)
                {
                    char *l_401 = &l_355[6][0][0];
                    (*l_124) = &g_122;

                    ;
                    for (l_296 = 2; (l_296 >= 0); l_296 -= 1)
                    {
                        unsigned short ***l_397 = &g_98;
                        int l_400 = 0xBF3D7069L;
                        int i, j;
                        (*l_363) = (func_40((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(p_31, 253UL)), 8L)), (safe_sub_func_uint8_t_u_u(((l_335[l_68][(l_296 + 2)] = (((((**g_98) , g_21) ^ (safe_mul_func_uint16_t_u_u((l_396 , (+p_31)), ((l_397 == l_398[1]) , p_31)))) , l_399) >= l_400)) , g_76[2][2]), p_31)), g_298, l_401) >= 0xD8L);
                        (*l_124) = l_402;

                        ;
                        return &g_65;


                    }
                }
                (*l_363) = ((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u((((((((*l_407) = &l_380) != (p_31 , &g_310)) < (~((*l_409) = l_359))) <= ((*l_402) && 6UL)) , ((safe_add_func_int8_t_s_s(p_31, (p_31 , (((g_99 == &l_362[0]) || p_31) , l_358)))) , (*l_381))) , (*l_402)), l_358)), p_31)) >= l_358);
                (*l_363) = (l_358 , (((func_40((~p_31), p_31, (safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((l_416 = p_31), (safe_rshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_s(0xCAL, 3)), ((safe_rshift_func_int8_t_s_s(((void*)0 != (*l_407)), ((void*)0 != l_423[4]))) , 65535UL))))), (*l_363))), l_378) , 0x3217L) , (void*)0) == l_424));
            }


        }

        ;
        for (g_81 = 0; (g_81 <= 0); g_81 += 1)
        {
            unsigned *l_431 = &g_310;
            unsigned char *l_432 = &l_416;
            char *l_433 = &g_21;
            unsigned short *l_440[2];
            int l_442[7];
            int *l_495 = &l_442[2];
            int i;
            for (i = 0; i < 2; i++)
                l_440[i] = (void*)0;
            for (i = 0; i < 7; i++)
                l_442[i] = 0xEE6CEABCL;
            (*l_363) = (func_40(((*l_431) = (p_31 && (((((*l_381) & l_425) > (safe_mul_func_int16_t_s_s(((l_428 < p_31) != ((*l_432) = func_40(g_39, (func_40(((*l_431) = (safe_lshift_func_int8_t_s_u(((6UL | ((0UL <= 0xD9337297L) || (-2L))) , (*l_381)), 4))), (*l_381), g_139, &l_355[4][0][0]) ^ 1UL), g_81, &g_21))), (-1L)))) && (-1L)) , g_81))), p_31, p_31, l_433) & (*l_381));
            if ((!(safe_lshift_func_int16_t_s_s(((((func_40(p_31, (!(g_122 < (p_31 | func_40(((l_362[g_81] = p_31) && (((l_441 = (safe_mod_func_int16_t_s_s(p_31, (safe_mul_func_int8_t_s_s((((**g_98) = (*l_381)) >= (!(((g_76[2][2] & (p_31 <= (l_362[g_81] , p_31))) || 5L) <= 0xC4L))), p_31))))) && p_31) <= 0xBB4543E1L)), p_31, g_39, &g_21)))), l_442[2], &g_81) | l_442[3]) , p_31) == 0x4A7EL) != 5L), p_31))))
            {
                char **l_454 = &g_64[1];
                int l_455 = (-1L);
                int l_470[2];
                char l_489[9][8] = {{0x36L, (-2L), 6L, (-1L), 2L, 5L, 2L, (-1L)}, {0x36L, (-2L), 6L, (-1L), 2L, 5L, 2L, (-1L)}, {0x36L, (-2L), 6L, (-1L), 2L, 5L, 2L, (-1L)}, {0x36L, (-2L), 6L, (-1L), 2L, 5L, 2L, (-1L)}, {0x36L, (-2L), 6L, (-1L), 2L, 5L, 2L, (-1L)}, {0x36L, (-2L), 6L, (-1L), 2L, 5L, 2L, (-1L)}, {0x36L, (-2L), 6L, (-1L), 2L, 5L, 2L, (-1L)}, {0x36L, (-2L), 6L, (-1L), 2L, 5L, 2L, (-1L)}, {0x36L, (-2L), 6L, (-1L), 2L, 5L, 2L, (-1L)}};
                short *l_490 = &l_296;
                unsigned l_491 = 1UL;
                int i, j;
                for (i = 0; i < 2; i++)
                    l_470[i] = (-8L);
                (*l_363) = ((safe_sub_func_int8_t_s_s(((*l_433) = (p_31 != ((safe_add_func_int32_t_s_s((p_31 && ((void*)0 == l_447)), 5L)) || p_31))), (safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(((p_31 ^ ((safe_add_func_uint32_t_u_u(7UL, (((((*l_454) = (g_139 , (void*)0)) != l_433) || 0L) != 0x9AL))) || l_455)) ^ p_31), 6)), 0xB8L)))) >= (*l_381));
                for (l_345 = 0; (l_345 <= 2); l_345 += 1)
                {
                    int *l_456 = &l_442[1];
                    for (g_55 = 0; (g_55 <= 9); g_55 += 1)
                    {
                        int i, j, k;
                        if (l_355[g_81][g_81][g_81])
                            break;
                        if (g_76[l_345][l_345])
                            continue;
                    }
                    l_456 = &l_442[2];
                    for (p_31 = 0; (p_31 <= 2); p_31 += 1)
                    {
                        int *l_457 = &l_345;
                        int i, j, k;
                        (*l_124) = (l_355[(g_81 + 1)][g_81][g_81] , l_457);

                        ;
                        if (g_76[l_345][g_81])
                            continue;
                        l_472 = ((safe_add_func_uint16_t_u_u((*g_99), (safe_mul_func_uint8_t_u_u(((l_455 = (*g_99)) < (safe_mul_func_uint16_t_u_u(((safe_sub_func_uint16_t_u_u((**g_98), (safe_rshift_func_int16_t_s_s((p_31 | (+(*l_456))), 9)))) , (safe_mul_func_uint16_t_u_u(l_470[1], (l_441 = (((*l_381) = 0xC40AL) && (p_31 , 0L)))))), g_39))), l_362[g_81])))) && l_471);
                    }
                }
                (*l_363) = func_40(g_76[1][2], l_442[2], ((safe_mod_func_uint16_t_u_u((((*l_381) = ((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((*l_432) = ((((l_479 == (void*)0) < (safe_rshift_func_int16_t_s_u(((*l_490) = (((l_470[1] = ((p_31 , l_470[1]) , 0x41B2FBE9L)) > (((func_40(g_310, (((((*l_490) = (safe_mod_func_int16_t_s_s((func_40(((safe_sub_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((!(((*l_381) = 0xB456L) && 0UL)), p_31)), p_31)) != p_31), l_442[2], g_76[2][2], &g_65) > l_489[4][0]), p_31))) && p_31) >= l_491) , p_31), g_21, &g_81) < 5UL) ^ (-1L)) == l_442[2])) && 0x853E965EL)), l_489[4][0]))) , p_31) , 0xA3L)), 0x57L)), l_472)) >= p_31)) == g_4), 0x2576L)) , (-9L)), l_492);
                (*l_381) = (*l_381);
            }
            else
            {
                int *l_494 = &l_345;
                l_494 = g_493;

                ;
                if (p_31)
                    continue;
                l_495 = &l_472;

                ;
            }

            ;
            for (l_471 = 0; (l_471 <= 2); l_471 += 1)
            {
                short l_510 = 0xAEC5L;
                unsigned **l_513 = &g_147;
                unsigned short **l_514[2];
                char *l_516 = (void*)0;
                short l_517 = 0xA8F9L;
                char *l_518 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_514[i] = &g_99;
                for (g_39 = 0; g_39 < 10; g_39 += 1)
                {
                    l_356[g_39] = &g_65;
                }
                for (g_120 = 2; (g_120 >= 0); g_120 -= 1)
                {
                    (*l_363) = 7L;
                }
                for (l_428 = 2; (l_428 >= 0); l_428 -= 1)
                {
                    unsigned short l_503 = 0x644FL;
                    unsigned l_511 = 0x4E9ADA3FL;
                    unsigned short **l_512[9][4] = {{&l_447, (void*)0, (void*)0, &l_440[1]}, {&l_447, (void*)0, (void*)0, &l_440[1]}, {&l_447, (void*)0, (void*)0, &l_440[1]}, {&l_447, (void*)0, (void*)0, &l_440[1]}, {&l_447, (void*)0, (void*)0, &l_440[1]}, {&l_447, (void*)0, (void*)0, &l_440[1]}, {&l_447, (void*)0, (void*)0, &l_440[1]}, {&l_447, (void*)0, (void*)0, &l_440[1]}, {&l_447, (void*)0, (void*)0, &l_440[1]}};
                    int i, j;
                    if (((*l_381) = (l_496 , ((*l_495) = (((safe_lshift_func_uint8_t_u_u((p_31 != (safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(p_31, p_31)), func_40(g_120, l_503, g_76[2][2], &g_21)))), p_31)) | p_31) > 65527UL)))))
                    {
                        (*l_363) = p_31;
                        (*l_381) = p_31;
                        (*l_495) = (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(((void*)0 != l_381), (*l_363))), ((*l_78) = l_503))), l_510));
                        (*l_495) = (0xC583L && l_511);
                    }
                    else
                    {
                        (*l_124) = &l_442[2];

                        ;
                        (*l_124) = &l_472;

                        ;
                    }
                    for (l_472 = 0; (l_472 >= 0); l_472 -= 1)
                    {
                        int i;
                        (*l_363) = (l_512[8][3] != ((l_362[l_472] , l_362[l_472]) , l_514[1]));
                        if (l_517)
                            break;
                    }
                    for (g_122 = 0; (g_122 <= 2); g_122 += 1)
                    {
                        (*l_363) = p_31;
                        (*l_363) = ((*l_495) = 0L);
                        return l_518;


                    }
                    (*l_363) = p_31;
                }
            }
        }



    }
    else
    {
        int l_519 = 0xC4756F38L;
        int *l_520[7];
        int i;
        for (i = 0; i < 7; i++)
            l_520[i] = &l_345;
        (*l_363) = l_519;
        (*l_124) = &g_122;

        ;
        l_520[1] = &g_4;


    }



    ;

    return &g_81;


}







static int func_40(unsigned p_41, unsigned char p_42, int p_43, char * p_44)
{
    unsigned l_88 = 0UL;
    if ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((*p_44), (safe_sub_func_uint16_t_u_u(l_88, p_42)))), 0xBCEC63F7L)))
    {
        unsigned *l_93 = &g_79;
        unsigned short *l_96 = &g_55;
        unsigned short **l_95 = &l_96;
        unsigned short ***l_94[2][7][7] = {{{&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}}, {{&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}, {&l_95, &l_95, &l_95, &l_95, &l_95, &l_95, &l_95}}};
        int l_100 = 0x2D8B6467L;
        int l_105 = 0xE175E042L;
        int *l_106 = &l_100;
        int i, j, k;
        (*l_106) = ((safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((p_43 ^ ((void*)0 == &g_79)), ((*l_93) = g_65))) < (((((l_88 < ((*g_99) = ((l_94[0][4][5] == g_97[0]) | l_100))) < ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((l_88 > 0x40L) || p_42), 13)), 5)) || l_105)) || 0xE77AL) , (*p_44)) > 0x09L)), l_105)) < 1UL);
    }
    else
    {
        int l_109 = 0x70660D0CL;
        unsigned short **l_110 = &g_99;
        int *l_119 = &l_109;
        (*l_119) = (safe_rshift_func_int16_t_s_u(((l_88 , l_109) == (**g_98)), (((l_110 == (void*)0) <= (safe_lshift_func_int16_t_s_u((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(1UL, (l_109 , (((safe_lshift_func_int16_t_s_s(l_109, 5)) | ((&l_88 != &l_88) <= g_76[2][2])) < g_76[1][1])))), (*p_44))), p_41))) , p_42)));
    }
    return g_4;
}







static unsigned short * func_45(char * p_46, char * p_47, int p_48)
{
    int *l_75[6][10] = {{(void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4}, {(void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4}, {(void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4}, {(void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4}, {(void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4}, {(void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4, (void*)0, &g_4}};
    unsigned short *l_77 = &g_39;
    int i, j;
    for (g_39 = 2; (g_39 <= 6); g_39 += 1)
    {
        short l_72 = 0xA55BL;
        for (g_21 = 6; (g_21 >= 0); g_21 -= 1)
        {
            int *l_69[10][4] = {{(void*)0, &g_4, &g_4, &g_4}, {(void*)0, &g_4, &g_4, &g_4}, {(void*)0, &g_4, &g_4, &g_4}, {(void*)0, &g_4, &g_4, &g_4}, {(void*)0, &g_4, &g_4, &g_4}, {(void*)0, &g_4, &g_4, &g_4}, {(void*)0, &g_4, &g_4, &g_4}, {(void*)0, &g_4, &g_4, &g_4}, {(void*)0, &g_4, &g_4, &g_4}, {(void*)0, &g_4, &g_4, &g_4}};
            int i, j;
            for (g_65 = 5; (g_65 >= 2); g_65 -= 1)
            {
                int **l_70 = (void*)0;
                int **l_71 = &l_69[7][2];
                for (g_55 = 1; (g_55 <= 6); g_55 += 1)
                {
                    for (p_48 = 6; (p_48 >= 0); p_48 -= 1)
                    {
                        if (p_48)
                            break;
                    }
                }
                (*l_71) = l_69[9][0];
            }
            if (p_48)
                break;
        }
        if (l_72)
            continue;
    }
    g_76[2][2] = (safe_lshift_func_int16_t_s_u(g_39, 6));
    return l_77;


}







static char * func_49(unsigned p_50)
{
    unsigned short *l_57 = (void*)0;
    unsigned short **l_56 = &l_57;
    int *l_60 = &g_4;
    char *l_63[6];
    int i;
    for (i = 0; i < 6; i++)
        l_63[i] = (void*)0;
    for (p_50 = 0; (p_50 < 11); p_50 = safe_add_func_uint8_t_u_u(p_50, 2))
    {
        for (g_21 = 0; (g_21 <= 7); g_21++)
        {
            unsigned short ***l_58 = (void*)0;
            unsigned short ***l_59 = &l_56;
            int **l_61 = (void*)0;
            int **l_62 = &l_60;
            g_55 = ((~g_39) < g_39);
            (*l_59) = l_56;
            (*l_62) = l_60;
        }
    }
    return l_63[0];


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_76[i][j], "g_76[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_310, "g_310", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_619, "g_619", print_hash_value);
    transparent_crc(g_621, "g_621", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_671[i], "g_671[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_733, "g_733", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_764[i][j], "g_764[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_923, "g_923", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_955[i], "g_955[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_987, "g_987", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_1342[i][j][k], "g_1342[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1622, "g_1622", print_hash_value);
    transparent_crc(g_1784, "g_1784", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
