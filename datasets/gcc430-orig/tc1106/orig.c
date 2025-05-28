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



static volatile unsigned g_10[5][10] = {{18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL}, {18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL}, {18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL}, {18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL}, {18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL}};
static int g_21 = 6L;
static short g_45 = 0x2EF7L;
static unsigned g_50 = 0x74DB503BL;
static int g_71 = 0xB42DCBDEL;
static int g_73 = 0xDB22C08FL;
static int g_92 = 0x71D1BA05L;
static const int * volatile * const g_95 = (void*)0;
static unsigned g_97 = 0UL;
static unsigned * const g_96 = &g_97;
static const int **g_100 = (void*)0;
static const int g_103 = 0x6A37A547L;
static unsigned short g_127[7] = {0x3D0BL, 0x3D0BL, 0x3D0BL, 0x3D0BL, 0x3D0BL, 0x3D0BL, 0x3D0BL};
static int *g_135[10] = {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73, &g_73, &g_73, &g_73, &g_73};
static int **g_134 = &g_135[4];
static unsigned *g_148 = &g_97;
static unsigned * const *g_147[7][8][3] = {{{&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}}, {{&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}}, {{&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}}, {{&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}}, {{&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}}, {{&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}}, {{&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}, {&g_148, &g_96, (void*)0}}};
static short g_159 = 1L;
static unsigned g_169 = 1UL;
static char g_215[5] = {0xE0L, 0xE0L, 0xE0L, 0xE0L, 0xE0L};
static unsigned g_217 = 4294967295UL;
static short g_239 = 0x6C0BL;
static const int g_260 = (-3L);
static const int *g_295 = &g_73;
static short *g_334 = &g_159;
static short **g_333 = &g_334;
static const short *g_348 = &g_239;
static const short **g_347 = &g_348;
static unsigned char g_389 = 0x24L;
static unsigned char *g_388[5][2] = {{&g_389, &g_389}, {&g_389, &g_389}, {&g_389, &g_389}, {&g_389, &g_389}, {&g_389, &g_389}};
static unsigned char g_393[3] = {0x73L, 0x73L, 0x73L};
static char g_394 = 0x48L;
static unsigned char g_444 = 0xCCL;
static unsigned * const **g_519 = &g_147[6][2][2];
static unsigned short *g_521 = &g_127[4];
static unsigned short **g_520 = &g_521;
static char *g_569 = &g_215[0];
static char **g_568[5][2][9] = {{{&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}, {&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}}, {{&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}, {&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}}, {{&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}, {&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}}, {{&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}, {&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}}, {{&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}, {&g_569, &g_569, (void*)0, &g_569, &g_569, &g_569, &g_569, &g_569, &g_569}}};
static char ** volatile *g_567[5] = {&g_568[1][1][1], &g_568[0][0][4], &g_568[1][1][1], &g_568[0][0][4], &g_568[1][1][1]};
static int g_581 = 1L;
static int *g_597 = &g_71;
static const int g_665 = 0x0AD66061L;
static char ***g_671 = (void*)0;
static char ****g_670 = &g_671;
static int g_695 = 0x4FED14B5L;
static volatile unsigned char * volatile * const *g_708 = (void*)0;
static short g_800 = 0xC69DL;
static const unsigned short g_845 = 65527UL;
static volatile int g_939[2][4] = {{0x3C754676L, 0x3C754676L, 0x3C754676L, 0x3C754676L}, {0x3C754676L, 0x3C754676L, 0x3C754676L, 0x3C754676L}};
static volatile int g_940 = 9L;
static volatile int g_941[9][5][5] = {{{0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}}, {{0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}}, {{0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}}, {{0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}}, {{0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}}, {{0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}}, {{0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}}, {{0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}}, {{0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}, {0xA7C345A7L, (-10L), 4L, 1L, (-8L)}}};
static volatile int *g_938[2][6] = {{&g_941[0][2][2], &g_941[0][2][2], &g_940, &g_941[0][2][2], &g_941[0][2][2], &g_940}, {&g_941[0][2][2], &g_941[0][2][2], &g_940, &g_941[0][2][2], &g_941[0][2][2], &g_940}};
static volatile int g_997 = 0x09FB1400L;
static volatile int * volatile g_996 = &g_997;
static volatile int * volatile *g_995 = &g_996;
static volatile int * volatile * volatile *g_994 = &g_995;
static unsigned g_1060 = 0x7E314B21L;
static short g_1063 = 0x48E6L;
static short * volatile * volatile * const *g_1117 = (void*)0;
static volatile int g_1139 = (-10L);
static volatile int *g_1138[3] = {&g_1139, &g_1139, &g_1139};
static char ** volatile ** volatile g_1254[8] = {&g_567[2], &g_567[4], &g_567[2], &g_567[4], &g_567[2], &g_567[4], &g_567[2], &g_567[4]};
static char ** volatile ** volatile *g_1253 = &g_1254[1];
static int g_1288 = 0xF321269FL;
static int **g_1313 = &g_597;
static unsigned **g_1328 = &g_148;
static int g_1359 = 0x807BFF61L;
static short g_1360 = 0x7A40L;
static int * volatile g_1441 = &g_1288;



static unsigned short func_1(void);
static short func_2(short p_3, const unsigned short p_4, unsigned p_5, unsigned p_6, short p_7);
static unsigned short func_15(short p_16, unsigned char p_17, unsigned p_18, int p_19);
static int func_22(int p_23);
static unsigned func_26(const short p_27, char p_28, short p_29, short p_30, unsigned p_31);
static short func_53(unsigned char p_54, unsigned short p_55, unsigned char p_56, char p_57);
static unsigned char func_58(unsigned p_59, unsigned p_60, int p_61);
static const unsigned short func_66(unsigned char p_67);
static int ** func_74(int ** p_75, int p_76);
static int ** func_77(short p_78, unsigned char p_79, int * p_80, unsigned * const p_81);
static unsigned short func_1(void)
{
    unsigned short l_20[9][2] = {{0x2949L, 0xF33FL}, {0x2949L, 0xF33FL}, {0x2949L, 0xF33FL}, {0x2949L, 0xF33FL}, {0x2949L, 0xF33FL}, {0x2949L, 0xF33FL}, {0x2949L, 0xF33FL}, {0x2949L, 0xF33FL}, {0x2949L, 0xF33FL}};
    int l_1433[2];
    int i, j;
    for (i = 0; i < 2; i++)
        l_1433[i] = (-1L);
    (*g_1441) = (func_2(((safe_sub_func_uint8_t_u_u(g_10[4][2], (safe_sub_func_int8_t_s_s((l_1433[0] = ((safe_rshift_func_int8_t_s_u(((0x934FL ^ func_15(l_20[7][1], g_21, l_20[7][1], func_22(l_20[7][1]))) == l_20[1][0]), l_20[6][1])) || 0x27L)), l_20[7][1])))) | l_20[3][0]), l_20[7][1], l_20[3][1], l_20[3][0], l_20[7][1]) > 1UL);
    return l_20[7][1];
}







static short func_2(short p_3, const unsigned short p_4, unsigned p_5, unsigned p_6, short p_7)
{
    int l_1438 = 0x0D1249A1L;
    int l_1439 = 1L;
    int *l_1440 = &g_1359;
    l_1439 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(0x04L, 1)), l_1438));
    l_1440 = &l_1439;
    return (**g_347);
}







static unsigned short func_15(short p_16, unsigned char p_17, unsigned p_18, int p_19)
{
    int l_1408 = (-2L);
    int *l_1415 = (void*)0;
    int *l_1416[6] = {(void*)0, &g_1359, (void*)0, &g_1359, (void*)0, &g_1359};
    int l_1417 = 0x569C160DL;
    unsigned l_1418[4][2] = {{0x1AD5F4A6L, 0UL}, {0x1AD5F4A6L, 0UL}, {0x1AD5F4A6L, 0UL}, {0x1AD5F4A6L, 0UL}};
    unsigned short l_1431 = 5UL;
    unsigned char l_1432 = 0x48L;
    int i, j;
    l_1418[0][1] = (safe_div_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((!p_17) != (~l_1408)) != (safe_mod_func_uint32_t_u_u(0x34025E78L, (l_1417 = (safe_mod_func_uint32_t_u_u((l_1408 | 1UL), (safe_mul_func_int8_t_s_s((l_1408 ^ 4294967295UL), p_18)))))))), p_19)), (-1L)));
    l_1432 = (l_1431 = ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(0xF74D1490L, 0x51616C8FL)), p_17)), ((*g_569) = (safe_sub_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u(((*g_521) = (safe_lshift_func_uint16_t_u_s(p_18, 6))), p_16)), p_19))))) , 1L));
    return (**g_520);
}







static int func_22(int p_23)
{
    short *l_44[3][6] = {{&g_45, &g_45, &g_45, &g_45, &g_45, &g_45}, {&g_45, &g_45, &g_45, &g_45, &g_45, &g_45}, {&g_45, &g_45, &g_45, &g_45, &g_45, &g_45}};
    int l_46 = 1L;
    unsigned *l_49[6][9][2] = {{{&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}}, {{&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}}, {{&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}}, {{&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}}, {{&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}}, {{&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}, {&g_50, &g_50}}};
    short *l_1153 = &g_800;
    unsigned char *l_1379 = &g_393[0];
    int *l_1380 = &g_73;
    char l_1385 = 0L;
    unsigned l_1386 = 4294967295UL;
    int i, j, k;
    (*l_1380) = (p_23 >= (l_46 = ((safe_add_func_uint8_t_u_u(((*l_1379) = (func_26(((*l_1153) = ((safe_mod_func_uint8_t_u_u(((safe_mod_func_int16_t_s_s((safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u(g_21, (safe_lshift_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((((*g_569) = ((g_45 = 5L) & (((((l_46 < p_23) != (safe_add_func_int8_t_s_s(((((g_50 = p_23) != g_21) > l_46) & ((safe_sub_func_int32_t_s_s((func_53(func_58(g_21, l_46, p_23), p_23, l_46, p_23) , p_23), p_23)) , l_46)), l_46))) == 0UL) | 0xC1DF30F6L) ^ 0x027CFDC8L))) > l_46) >= 0x4CL), p_23)), l_46)))) , 0x20L), (-5L))), l_46)) , p_23), p_23)) || p_23)), l_46, p_23, p_23, p_23) != 0x8AD5B502L)), 0UL)) , 0x3C77905EL)));
    for (g_1063 = 0; (g_1063 <= 1); g_1063 += 1)
    {
        int *l_1381 = (void*)0;
        const int l_1389 = (-3L);
        char *l_1399 = &g_394;
        (*g_134) = (void*)0;
        (*g_134) = l_1381;
        for (g_71 = 1; (g_71 >= 0); g_71 -= 1)
        {
            int l_1384 = 0xB8028F17L;
            int i, j;
            if (((((safe_div_func_int16_t_s_s(((*l_1380) <= p_23), (*g_521))) >= 0x20L) , p_23) , (-6L)))
            {
                (*g_134) = (void*)0;
            }
            else
            {
                unsigned char l_1391 = 0UL;
                for (g_45 = 16; (g_45 != (-18)); g_45--)
                {
                    const unsigned l_1390 = 0x7F56C88FL;
                    int l_1398[3][4];
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 4; j++)
                            l_1398[i][j] = 0L;
                    }
                    (*l_1380) = (p_23 = (~(*g_295)));
                    if (l_1389)
                    {
                        p_23 = 0x324C33E2L;
                        if (l_1390)
                            continue;
                        (*l_1380) = p_23;
                        (*l_1380) = l_1391;
                    }
                    else
                    {
                        unsigned *l_1396 = (void*)0;
                        unsigned *l_1397[2][5][2] = {{{&g_169, (void*)0}, {&g_169, (void*)0}, {&g_169, (void*)0}, {&g_169, (void*)0}, {&g_169, (void*)0}}, {{&g_169, (void*)0}, {&g_169, (void*)0}, {&g_169, (void*)0}, {&g_169, (void*)0}, {&g_169, (void*)0}}};
                        unsigned char l_1400 = 1UL;
                        int i, j, k;
                        (*l_1380) = (p_23 > ((safe_mul_func_int16_t_s_s(p_23, p_23)) , (+l_1384)));
                        (*l_1380) = (safe_add_func_uint8_t_u_u(p_23, (p_23 , ((((*g_569) = p_23) > (((((l_1398[1][3] = ((*g_96) = ((-7L) && ((**g_333) = (*g_348))))) || (l_1399 != (void*)0)) , l_1400) | 0xFA94L) <= p_23)) , 0xF0L))));
                    }
                    return l_1391;
                }
                (*g_134) = &p_23;
            }
            for (g_581 = (-23); (g_581 < 18); g_581 = safe_add_func_int32_t_s_s(g_581, 6))
            {
                (*g_134) = l_1381;
            }
            (*l_1380) = (-7L);
        }
    }
    return (*l_1380);
}







static unsigned func_26(const short p_27, char p_28, short p_29, short p_30, unsigned p_31)
{
    short l_1158 = 0x076CL;
    unsigned char *l_1159 = &g_389;
    int l_1162[10][5] = {{0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}, {0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}, {0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}, {0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}, {0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}, {0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}, {0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}, {0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}, {0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}, {0xA4DE4947L, 0x82081F4AL, 1L, (-3L), 1L}};
    unsigned l_1163 = 18446744073709551608UL;
    int l_1164 = 0xF1BAEB7BL;
    unsigned short l_1189 = 0xD197L;
    unsigned *l_1196 = (void*)0;
    unsigned l_1232 = 3UL;
    unsigned char l_1255 = 0x70L;
    short * const *l_1259 = &g_334;
    short * const **l_1258[7];
    const int *l_1269 = (void*)0;
    const int **l_1268 = &l_1269;
    char **l_1276 = &g_569;
    unsigned *l_1338 = &g_1060;
    unsigned **l_1339 = (void*)0;
    unsigned **l_1340 = (void*)0;
    unsigned **l_1341 = (void*)0;
    int *l_1350 = &g_1288;
    unsigned l_1361 = 18446744073709551609UL;
    unsigned short **l_1364 = &g_521;
    int i, j;
    for (i = 0; i < 7; i++)
        l_1258[i] = &l_1259;
    if ((((safe_rshift_func_int16_t_s_s((l_1158 && ((*g_96) , p_30)), 5)) < ((p_29 , l_1159) == l_1159)) > ((((l_1162[2][0] = l_1158) & ((l_1158 == p_31) <= l_1158)) & l_1163) <= l_1164)))
    {
        unsigned l_1171 = 4294967286UL;
        int *l_1172 = &g_73;
        for (g_159 = 5; (g_159 >= 0); g_159 -= 1)
        {
            int i;
            l_1171 = (g_127[(g_159 + 1)] & (safe_lshift_func_int8_t_s_u((safe_sub_func_int32_t_s_s(g_127[(g_159 + 1)], (safe_mul_func_int16_t_s_s(((void*)0 == &g_348), g_127[(g_159 + 1)])))), 5)));
            for (g_389 = 0; (g_389 <= 1); g_389 += 1)
            {
                int l_1186 = 0x1A8B10A0L;
                int i;
                (*g_134) = l_1172;
                for (l_1171 = 0; (l_1171 <= 2); l_1171 += 1)
                {
                    int l_1185[10] = {0x20845E7BL, 0x20845E7BL, 1L, 0x20845E7BL, 0x20845E7BL, 1L, 0x20845E7BL, 0x20845E7BL, 1L, 0x20845E7BL};
                    unsigned *l_1187 = (void*)0;
                    unsigned *l_1188 = &g_1060;
                    int i, j, k;
                    l_1162[5][0] = ((g_393[(g_389 + 1)] == ((safe_sub_func_int8_t_s_s((safe_add_func_int32_t_s_s(((safe_mul_func_int8_t_s_s((p_28 , g_127[(g_159 + 1)]), 0xF7L)) < l_1158), 0x2313EA2BL)), l_1189)) , p_31)) != (**g_520));
                    (*l_1172) = (p_31 <= (*l_1172));
                    for (g_695 = 0; (g_695 <= 1); g_695 += 1)
                    {
                        int l_1190 = 0xE80B54A1L;
                        return l_1190;
                    }
                }
                return g_393[g_389];
            }
        }
        (*g_134) = ((safe_sub_func_uint32_t_u_u((p_28 > (0xFC83L <= l_1162[2][0])), (*l_1172))) , &l_1162[9][3]);
    }
    else
    {
        short ***l_1195 = &g_333;
        int *l_1197 = &g_73;
        int *l_1198 = &g_92;
        char l_1218 = 0x85L;
        int **l_1225[3][3][2] = {{{&l_1198, &g_135[2]}, {&l_1198, &g_135[2]}, {&l_1198, &g_135[2]}}, {{&l_1198, &g_135[2]}, {&l_1198, &g_135[2]}, {&l_1198, &g_135[2]}}, {{&l_1198, &g_135[2]}, {&l_1198, &g_135[2]}, {&l_1198, &g_135[2]}}};
        unsigned char l_1260[6] = {0xB0L, 0xB0L, 0xE1L, 0xB0L, 0xB0L, 0xE1L};
        short l_1263 = 0xA7CCL;
        unsigned short **l_1275 = &g_521;
        int i, j, k;
lbl_1310:
        (*l_1198) = ((*l_1197) = ((safe_rshift_func_int16_t_s_s(((void*)0 != l_1195), (**g_333))) , ((void*)0 != l_1196)));
        for (g_45 = 0; (g_45 <= 2); g_45 += 1)
        {
            unsigned char l_1233 = 4UL;
            short * const * const l_1257 = (void*)0;
            short * const * const *l_1256 = &l_1257;
            const int **l_1271[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
            int **l_1277 = (void*)0;
            unsigned char l_1309[5][1];
            int i, j;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1309[i][j] = 0xADL;
            }
            for (l_1163 = 0; (l_1163 <= 2); l_1163 += 1)
            {
                int l_1222[3][9] = {{(-4L), 1L, (-4L), 0L, 0xB3DBF6FAL, 0L, 0x70105859L, 0x70105859L, 0L}, {(-4L), 1L, (-4L), 0L, 0xB3DBF6FAL, 0L, 0x70105859L, 0x70105859L, 0L}, {(-4L), 1L, (-4L), 0L, 0xB3DBF6FAL, 0L, 0x70105859L, 0x70105859L, 0L}};
                int *l_1223 = &g_92;
                unsigned char l_1226 = 255UL;
                int i, j;
                for (g_394 = 0; (g_394 <= 2); g_394 += 1)
                {
                    int **l_1217 = &g_597;
                    unsigned l_1219 = 0xC02C78AFL;
                    short *l_1220 = (void*)0;
                    short *l_1221 = &g_1063;
                    int l_1246 = 1L;
                    if (((safe_sub_func_int8_t_s_s(p_28, (p_29 , ((safe_div_func_int16_t_s_s((l_1164 > (safe_lshift_func_uint16_t_u_u(((*g_521) = (((*l_1221) = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s((l_1189 > ((*l_1197) = (safe_div_func_int8_t_s_s(0L, (safe_mod_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((*g_521) ^ (l_1217 != ((l_1218 != ((**g_333) = p_30)) , (void*)0))), p_31)), l_1219)))))), 0xE9L)), 7)), p_27))) <= (-1L))), 1))), l_1222[1][8])) , p_29)))) < p_31))
                    {
                        (*g_134) = (*g_134);
                        (*g_134) = l_1223;
                    }
                    else
                    {
                        int ***l_1224[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1224[i] = &g_134;
                        l_1225[2][2][1] = &l_1223;
                        (*l_1197) = ((-1L) != ((p_29 , &g_597) == (void*)0));
                    }
                    (*g_134) = ((safe_unary_minus_func_int32_t_s((*g_295))) , (void*)0);
                    if ((safe_lshift_func_int8_t_s_s(l_1162[4][3], 2)))
                    {
                        l_1223 = l_1223;
                        (*g_134) = (*g_134);
                    }
                    else
                    {
                        unsigned *l_1247 = &g_1060;
                        int l_1250 = 1L;
                        l_1260[3] = ((((safe_add_func_uint16_t_u_u(((*g_521) = (*g_521)), ((safe_rshift_func_int16_t_s_u((((((~(l_1255 = (safe_mul_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((((*l_1247) = (((-3L) < (safe_add_func_uint16_t_u_u(p_28, (*g_348)))) && l_1246)) , ((((**g_333) = (*g_348)) != (l_1250 > ((((safe_mul_func_uint8_t_u_u(l_1219, (g_1253 != (void*)0))) == 0L) , p_28) <= (*l_1223)))) > p_28)), 65528UL)) > (*l_1223)) , p_31), 0x1BL)))) && l_1219) >= 0L) > l_1250) | (**g_347)), g_71)) && l_1233))) , l_1256) != l_1258[2]) < 0xA2252BAEL);
                    }
                    (*l_1197) = ((safe_mul_func_int8_t_s_s(((&l_1246 != ((*g_134) = l_1223)) , (*l_1223)), p_27)) == l_1263);
                }
                for (l_1218 = 0; (l_1218 <= 2); l_1218 += 1)
                {
                    for (g_159 = 0; (g_159 <= 2); g_159 += 1)
                    {
                        unsigned char l_1264 = 0xC9L;
                        if ((*g_295))
                            break;
                        (*l_1198) = l_1264;
                        (*g_134) = l_1223;
                    }
                    (*g_134) = (void*)0;
                }
                (*l_1197) = (l_1233 || ((*g_148) = (safe_add_func_int32_t_s_s(((*l_1198) = 0xD0E91C8DL), (*g_295)))));
                for (g_71 = 0; (g_71 <= 2); g_71 += 1)
                {
                    unsigned l_1267[4][8] = {{4294967295UL, 4294967294UL, 0x0CFF1E1AL, 4294967294UL, 4294967295UL, 5UL, 4294967295UL, 4294967294UL}, {4294967295UL, 4294967294UL, 0x0CFF1E1AL, 4294967294UL, 4294967295UL, 5UL, 4294967295UL, 4294967294UL}, {4294967295UL, 4294967294UL, 0x0CFF1E1AL, 4294967294UL, 4294967295UL, 5UL, 4294967295UL, 4294967294UL}, {4294967295UL, 4294967294UL, 0x0CFF1E1AL, 4294967294UL, 4294967295UL, 5UL, 4294967295UL, 4294967294UL}};
                    int i, j;
                    (*l_1197) = ((&p_30 != ((*g_333) = (*g_333))) < 7UL);
                    for (g_695 = 0; (g_695 <= 2); g_695 += 1)
                    {
                        l_1267[1][6] = 0xF58741E5L;
                        (*l_1223) = (*g_295);
                        (*g_134) = (*g_134);
                    }
                }
            }
            if (p_30)
            {
                const int ***l_1270[1][7][10] = {{{&l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, (void*)0, &l_1268}, {&l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, (void*)0, &l_1268}, {&l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, (void*)0, &l_1268}, {&l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, (void*)0, &l_1268}, {&l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, (void*)0, &l_1268}, {&l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, (void*)0, &l_1268}, {&l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, &l_1268, (void*)0, &l_1268}}};
                int i, j, k;
                l_1271[2] = l_1268;
            }
            else
            {
                int l_1274 = 0xBB0B4CA2L;
                int l_1290 = 9L;
                int **l_1299 = &g_597;
                int *l_1314 = &l_1162[2][0];
                unsigned char *l_1331 = &l_1309[3][0];
                if (((p_27 , &p_31) == ((((((p_28 == 0x6B8BB146L) , l_1233) , p_29) , &g_938[1][0]) != l_1277) , &p_31)))
                {
                    int *l_1278[2];
                    unsigned short ** const *l_1282 = (void*)0;
                    int **l_1311 = &g_597;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1278[i] = &g_73;
                    (*l_1198) = p_27;
                    if (p_29)
                    {
                        int l_1281 = 0L;
                        short **l_1287 = &g_334;
                        unsigned *l_1289 = &g_169;
                        unsigned char *l_1291[2][5];
                        int l_1292[7];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_1291[i][j] = &l_1255;
                        }
                        for (i = 0; i < 7; i++)
                            l_1292[i] = 0x638733DBL;
                        (*g_134) = l_1278[1];
                        (*l_1198) = ((safe_div_func_uint8_t_u_u((((*l_1159) = (l_1162[2][0] = (l_1274 || l_1281))) > (l_1292[0] = (((-1L) ^ ((p_29 = (&g_520 == (l_1282 = (void*)0))) >= ((safe_mod_func_int8_t_s_s((*l_1198), p_31)) || p_27))) | p_31))), p_28)) && p_29);
                        (*l_1198) = (safe_div_func_int8_t_s_s(p_30, 0x68L));
                    }
                    else
                    {
                        short l_1308 = 0x3A1BL;
                        (*l_1198) = l_1274;
                        (*l_1198) = (((safe_rshift_func_int8_t_s_u((safe_div_func_int16_t_s_s((l_1299 != &l_1269), (safe_add_func_int8_t_s_s((((*g_348) == (l_1308 != l_1309[3][0])) | p_31), l_1189)))), 0)) >= l_1164) && l_1290);
                        if (g_389)
                            goto lbl_1310;
                    }
                    for (g_394 = 2; (g_394 >= 0); g_394 -= 1)
                    {
                        int ***l_1312 = (void*)0;
                        g_1313 = l_1311;
                        (*l_1198) = 6L;
                        (*g_134) = l_1278[0];
                        l_1314 = (*g_134);
                    }
                    if (l_1189)
                        break;
                }
                else
                {
                    unsigned **l_1327 = &g_148;
                    unsigned ***l_1326[8] = {&l_1327, (void*)0, &l_1327, (void*)0, &l_1327, (void*)0, &l_1327, (void*)0};
                    int l_1329 = 0xF331ECFBL;
                    unsigned *l_1330 = &g_1060;
                    int i;
                    (*l_1198) = p_30;
                    if (p_28)
                        break;
                    if (p_31)
                    {
                        return (*g_148);
                    }
                    else
                    {
                        (*l_1197) = ((*g_569) , 0x728634E5L);
                    }
                }
            }
            for (l_1233 = 0; (l_1233 <= 2); l_1233 += 1)
            {
                return p_30;
            }
        }
        (*g_134) = (*g_134);
        (*g_134) = &l_1162[8][0];
    }
    l_1162[3][4] = (l_1232 >= (safe_mul_func_uint16_t_u_u(l_1255, (&l_1232 == (l_1338 = l_1338)))));
    if ((((l_1163 >= (safe_lshift_func_int16_t_s_u((p_29 = (**g_333)), p_31))) | (**g_520)) & ((safe_lshift_func_int16_t_s_u(((safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s((((*l_1350) = p_27) <= 0x195AA687L), 4)), ((((safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s(((g_1359 = (safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s(l_1255, (-1L))), (~((p_30 , (**g_333)) < p_28))))) , (*g_348)), 0xC906L)) , 4294967294UL) < p_28), 3)) , 255UL) , p_28) > g_1360))) <= l_1361), (**g_520))) <= 0xEF24L)))
    {
        char l_1367 = 2L;
        int l_1375 = 1L;
        for (g_71 = 0; (g_71 > 0); g_71 = safe_add_func_int32_t_s_s(g_71, 7))
        {
            unsigned short ***l_1365 = &g_520;
            int l_1366 = 8L;
            int *l_1376[7][9] = {{&l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0]}, {&l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0]}, {&l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0]}, {&l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0]}, {&l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0]}, {&l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0]}, {&l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0], &l_1162[3][2], &l_1162[2][0]}};
            int i, j;
            if (p_31)
                break;
            (*l_1365) = l_1364;
            l_1162[6][0] = ((*l_1350) = (0x6F14L <= (((l_1366 = 3UL) , (p_27 <= (l_1375 = (*g_334)))) >= p_28)));
            (*g_134) = &l_1366;
        }
    }
    else
    {
        return (*g_148);
    }
    for (g_239 = (-2); (g_239 == 6); g_239 = safe_add_func_uint16_t_u_u(g_239, 2))
    {
        return (*l_1350);
    }
    return p_28;
}







static short func_53(unsigned char p_54, unsigned short p_55, unsigned char p_56, char p_57)
{
    int l_705 = 0x9D494F48L;
    unsigned char **l_707 = &g_388[1][0];
    unsigned char ***l_706[9][7] = {{&l_707, (void*)0, &l_707, (void*)0, &l_707, (void*)0, &l_707}, {&l_707, (void*)0, &l_707, (void*)0, &l_707, (void*)0, &l_707}, {&l_707, (void*)0, &l_707, (void*)0, &l_707, (void*)0, &l_707}, {&l_707, (void*)0, &l_707, (void*)0, &l_707, (void*)0, &l_707}, {&l_707, (void*)0, &l_707, (void*)0, &l_707, (void*)0, &l_707}, {&l_707, (void*)0, &l_707, (void*)0, &l_707, (void*)0, &l_707}, {&l_707, (void*)0, &l_707, (void*)0, &l_707, (void*)0, &l_707}, {&l_707, (void*)0, &l_707, (void*)0, &l_707, (void*)0, &l_707}, {&l_707, (void*)0, &l_707, (void*)0, &l_707, (void*)0, &l_707}};
    unsigned **l_716 = &g_148;
    unsigned ***l_715[6] = {&l_716, (void*)0, &l_716, (void*)0, &l_716, (void*)0};
    char *l_717 = &g_215[3];
    int *l_718[9][7] = {{&g_73, (void*)0, &l_705, &l_705, &g_73, (void*)0, (void*)0}, {&g_73, (void*)0, &l_705, &l_705, &g_73, (void*)0, (void*)0}, {&g_73, (void*)0, &l_705, &l_705, &g_73, (void*)0, (void*)0}, {&g_73, (void*)0, &l_705, &l_705, &g_73, (void*)0, (void*)0}, {&g_73, (void*)0, &l_705, &l_705, &g_73, (void*)0, (void*)0}, {&g_73, (void*)0, &l_705, &l_705, &g_73, (void*)0, (void*)0}, {&g_73, (void*)0, &l_705, &l_705, &g_73, (void*)0, (void*)0}, {&g_73, (void*)0, &l_705, &l_705, &g_73, (void*)0, (void*)0}, {&g_73, (void*)0, &l_705, &l_705, &g_73, (void*)0, (void*)0}};
    int l_719[2];
    unsigned char l_766 = 0xE4L;
    unsigned l_769[3][1];
    unsigned short **l_790 = &g_521;
    unsigned l_806 = 0UL;
    short **l_809 = &g_334;
    unsigned l_826 = 18446744073709551613UL;
    short *l_857 = &g_239;
    int **l_869 = &g_597;
    int ***l_898[6] = {&g_134, &g_134, &g_134, &g_134, &g_134, &g_134};
    unsigned l_900 = 0xD302A235L;
    unsigned l_967 = 0x637A6890L;
    unsigned l_984[5] = {4294967287UL, 1UL, 4294967287UL, 1UL, 4294967287UL};
    char l_992 = 0L;
    char **l_1008 = &g_569;
    short ***l_1121 = (void*)0;
    short ****l_1120[9][6] = {{&l_1121, &l_1121, &l_1121, &l_1121, &l_1121, &l_1121}, {&l_1121, &l_1121, &l_1121, &l_1121, &l_1121, &l_1121}, {&l_1121, &l_1121, &l_1121, &l_1121, &l_1121, &l_1121}, {&l_1121, &l_1121, &l_1121, &l_1121, &l_1121, &l_1121}, {&l_1121, &l_1121, &l_1121, &l_1121, &l_1121, &l_1121}, {&l_1121, &l_1121, &l_1121, &l_1121, &l_1121, &l_1121}, {&l_1121, &l_1121, &l_1121, &l_1121, &l_1121, &l_1121}, {&l_1121, &l_1121, &l_1121, &l_1121, &l_1121, &l_1121}, {&l_1121, &l_1121, &l_1121, &l_1121, &l_1121, &l_1121}};
    char l_1152 = 0x4AL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_719[i] = 0L;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_769[i][j] = 0x3A50CA8DL;
    }
    l_719[0] = (safe_sub_func_uint32_t_u_u(((l_705 , (l_706[2][6] != g_708)) || ((safe_div_func_int16_t_s_s((!(safe_lshift_func_uint16_t_u_s((safe_mod_func_int8_t_s_s((*g_569), p_57)), 0))), (func_58((l_715[0] == &l_716), ((p_57 < (l_717 == l_717)) , 3UL), p_54) & p_55))) , (-3L))), 4294967295UL));
    for (p_56 = 0; (p_56 == 39); p_56++)
    {
        unsigned l_726 = 0x92956B03L;
        int l_755 = 1L;
        unsigned char **l_765[10] = {&g_388[2][0], &g_388[2][0], &g_388[2][0], &g_388[2][0], &g_388[2][0], &g_388[2][0], &g_388[2][0], &g_388[2][0], &g_388[2][0], &g_388[2][0]};
        unsigned short l_776[5] = {0xCF79L, 0x0A6FL, 0xCF79L, 0x0A6FL, 0xCF79L};
        unsigned short * const *l_779 = &g_521;
        unsigned short * const **l_778[10] = {&l_779, &l_779, &l_779, &l_779, &l_779, &l_779, &l_779, &l_779, &l_779, &l_779};
        char l_828 = (-9L);
        unsigned l_846 = 0x41B37F23L;
        int l_866 = 1L;
        int *l_906[5];
        int *l_968 = &l_755;
        int i;
        for (i = 0; i < 5; i++)
            l_906[i] = &l_705;
    }
    if (p_56)
    {
        (*g_134) = (void*)0;
    }
    else
    {
        unsigned **l_982 = &g_148;
        int l_983 = (-8L);
        int l_985 = 0xBF9B19F9L;
        l_985 = ((safe_lshift_func_int8_t_s_s(((((*l_717) = 0L) < ((((((void*)0 != l_982) , ((((**g_134) = (p_56 || 0xFD79L)) > (((l_983 , (l_983 = p_57)) == 0x70806903L) , p_56)) < (**g_520))) <= (**g_520)) | l_984[4]) != 1L)) != (*g_348)), 0)) ^ l_985);
        (**g_134) = (l_985 > (*g_96));
    }
    return (*g_334);
}







static unsigned char func_58(unsigned p_59, unsigned p_60, int p_61)
{
    unsigned short l_685 = 0x6A6EL;
    for (p_60 = 22; (p_60 < 24); p_60 = safe_add_func_uint16_t_u_u(p_60, 3))
    {
        for (p_59 = 3; (p_59 <= 19); ++p_59)
        {
            int *l_682 = &g_92;
            int * const *l_696 = (void*)0;
        }
        if ((**g_134))
            continue;
    }
    (*g_134) = (*g_134);
    return p_61;
}







static const unsigned short func_66(unsigned char p_67)
{
    int l_70 = 0x13A4B1F0L;
    int *l_72 = &g_73;
    unsigned short l_511 = 0x71DBL;
    unsigned short *l_515 = &g_127[2];
    unsigned short **l_514 = &l_515;
    unsigned * const **l_518 = (void*)0;
    short ***l_531 = &g_333;
    short *** const *l_530 = &l_531;
    char l_592 = 9L;
    unsigned char *l_635 = &g_393[2];
    char ***l_654 = (void*)0;
    const int *l_664 = &g_665;
    unsigned * const l_681 = &g_217;
    (*l_72) = (safe_sub_func_int32_t_s_s(l_70, (g_71 = p_67)));
    if (g_21)
    {
        char l_90 = 9L;
        int *l_91 = &g_92;
        int ***l_504 = &g_134;
        unsigned char *l_510[10] = {&g_444, (void*)0, &g_389, &g_389, (void*)0, &g_444, (void*)0, &g_389, &g_389, (void*)0};
        short ***l_529[3];
        short ****l_528 = &l_529[2];
        short l_532 = (-2L);
        unsigned **l_545 = &g_148;
        unsigned ***l_544[5];
        unsigned short ***l_553 = &g_520;
        short l_613 = 0x454AL;
        int l_672 = (-6L);
        int i;
        for (i = 0; i < 3; i++)
            l_529[i] = &g_333;
        for (i = 0; i < 5; i++)
            l_544[i] = &l_545;
        g_73 = (*l_72);
        (*l_504) = func_74(func_77((safe_sub_func_uint32_t_u_u((safe_div_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((p_67 <= (p_67 , g_71)) != ((safe_mod_func_int32_t_s_s((*l_72), ((*l_91) = l_90))) , ((4294967288UL && 8UL) , (safe_mul_func_int8_t_s_s(g_21, ((&l_91 == g_95) >= g_73)))))), g_21)), g_73)), 0L)), g_73, l_91, g_96), p_67);
        if (((*l_91) = (safe_unary_minus_func_uint32_t_u((safe_div_func_uint32_t_u_u((safe_mul_func_int8_t_s_s(g_103, (*l_91))), ((p_67 != 0x5142L) & ((*l_72) & (l_511 = p_67)))))))))
        {
            unsigned l_524 = 0UL;
            int *l_533 = &g_73;
            unsigned short **l_538 = &l_515;
            unsigned **l_543 = &g_148;
            unsigned l_642[4] = {0x7CF793F7L, 1UL, 0x7CF793F7L, 1UL};
            int i;
lbl_614:
            for (l_70 = 23; (l_70 > 26); l_70 = safe_add_func_int16_t_s_s(l_70, 3))
            {
                unsigned **l_517 = (void*)0;
                unsigned ***l_516 = &l_517;
                char *l_527 = &g_215[2];
                (*l_91) = ((*l_72) = ((((l_514 == ((l_516 == (g_519 = l_518)) , g_520)) , ((0xDF28L < ((((*l_72) > ((*l_527) = (l_524 , ((p_67 , (((safe_sub_func_int16_t_s_s(((**g_333) = (*l_72)), (*l_72))) & g_127[6]) ^ (*l_91))) != (-10L))))) , l_528) != l_530)) <= (*g_348))) ^ 1L) ^ l_532));
            }
            if (l_524)
            {
                int *l_534[4][10] = {{(void*)0, (void*)0, &g_21, (void*)0, &g_21, (void*)0, &g_21, (void*)0, &g_21, (void*)0}, {(void*)0, (void*)0, &g_21, (void*)0, &g_21, (void*)0, &g_21, (void*)0, &g_21, (void*)0}, {(void*)0, (void*)0, &g_21, (void*)0, &g_21, (void*)0, &g_21, (void*)0, &g_21, (void*)0}, {(void*)0, (void*)0, &g_21, (void*)0, &g_21, (void*)0, &g_21, (void*)0, &g_21, (void*)0}};
                unsigned short **l_540[9] = {&l_515, (void*)0, &l_515, (void*)0, &l_515, (void*)0, &l_515, (void*)0, &l_515};
                int l_593 = 0x92BCEAA8L;
                int i, j;
                l_534[1][7] = (p_67 , l_533);
                if ((~((*l_91) = (*l_533))))
                {
                    char *l_550[10][9] = {{(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}, {(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}, {(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}, {(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}, {(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}, {(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}, {(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}, {(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}, {(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}, {(void*)0, &l_90, &l_90, (void*)0, &g_215[0], &g_215[2], &g_215[0], (void*)0, &l_90}};
                    unsigned short ***l_555[9];
                    unsigned short ****l_554 = &l_555[5];
                    unsigned short ***l_557 = &g_520;
                    unsigned short ****l_556 = &l_557;
                    int i, j;
                    for (i = 0; i < 9; i++)
                        l_555[i] = &l_538;
                    for (g_239 = 17; (g_239 <= (-4)); --g_239)
                    {
                        const char l_537[8][9] = {{1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L}, {1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L}, {1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L}, {1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L}, {1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L}, {1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L}, {1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L}, {1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L, 0xDFL, 1L}};
                        unsigned short ***l_539 = &l_514;
                        unsigned **l_542[2];
                        unsigned ***l_541[5];
                        int i, j;
                        for (i = 0; i < 2; i++)
                            l_542[i] = &g_148;
                        for (i = 0; i < 5; i++)
                            l_541[i] = &l_542[0];
                        (*l_91) = l_537[3][3];
                        l_540[5] = ((*l_539) = l_538);
                        l_543 = (void*)0;
                    }
                    (*g_134) = (((p_67 <= ((p_67 ^ (g_127[4] && p_67)) ^ p_67)) != (**g_520)) , l_72);
                    (*l_91) = ((*l_72) = (g_393[1] && (l_544[2] != ((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((g_215[0] = p_67) | (safe_mul_func_int8_t_s_s(g_159, ((l_553 = &l_514) == ((*l_556) = ((*l_554) = &l_540[5])))))), (&l_545 != &g_147[2][5][2]))), (safe_sub_func_int16_t_s_s((-2L), 1UL)))) , (void*)0))));
                    for (l_511 = 0; (l_511 <= 9); l_511 += 1)
                    {
                        const unsigned short l_560 = 0xD7C9L;
                        return l_560;
                    }
                }
                else
                {
                    int l_580 = 2L;
                    if ((safe_add_func_int16_t_s_s(0xD092L, (safe_lshift_func_uint16_t_u_s((g_581 = ((*g_521) = ((safe_lshift_func_int16_t_s_u((*l_91), ((void*)0 != g_567[4]))) <= (safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((((!((((*l_91) , 1UL) <= (+(((*l_72) = ((****l_530) = (((safe_lshift_func_uint8_t_u_u(p_67, 5)) & (safe_mul_func_int8_t_s_s(p_67, (safe_sub_func_int16_t_s_s(((((8UL != p_67) , 0L) ^ 65535UL) , 1L), l_580))))) | 0L))) , 0x4DL))) | 0xEDL)) && 1L) || (-1L)), p_67)) == p_67), 2))))), (**g_347))))))
                    {
                        return (*l_533);
                    }
                    else
                    {
                        int l_586 = (-4L);
                        l_534[3][1] = l_72;
                        l_586 = (safe_sub_func_int8_t_s_s(((*g_148) >= (((safe_sub_func_uint16_t_u_u((1L > l_580), l_586)) || (**g_520)) | 0xFEL)), ((safe_unary_minus_func_int8_t_s(((void*)0 != &l_543))) | (**g_333))));
                        l_592 = (l_580 && (safe_mul_func_int8_t_s_s((-1L), (safe_rshift_func_int8_t_s_s(l_580, 1)))));
                    }
                    if (p_67)
                    {
                        (*l_72) = ((*l_533) && 0x85L);
                        return (*g_521);
                    }
                    else
                    {
                        int *l_594 = &g_73;
                        int **l_595 = (void*)0;
                        int **l_596[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_596[i] = (void*)0;
                        (**l_504) = &l_580;
                        (*l_533) = l_593;
                        l_594 = l_533;
                        (*l_533) = ((p_67 , l_594) != (g_597 = (void*)0));
                    }
                }
                for (g_73 = 19; (g_73 > (-22)); g_73 = safe_sub_func_int16_t_s_s(g_73, 1))
                {
                    int *l_600[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_600[i] = &g_73;
                    if (((p_67 & (*l_72)) <= (*l_533)))
                    {
                        (**l_504) = l_600[1];
                        if (p_67)
                            break;
                    }
                    else
                    {
                        (**l_504) = l_72;
                        (*l_91) = 0x84CD2F1CL;
                        if (p_67)
                            break;
                    }
                    (**l_504) = l_534[2][1];
                }
            }
            else
            {
                int l_601 = 0x4B96A36FL;
                int l_643 = (-4L);
                (*g_134) = l_72;
                if (l_601)
                {
                    unsigned l_608 = 1UL;
                    unsigned char l_624[6][10] = {{1UL, 1UL, 252UL, 0x1CL, 0x92L, 255UL, 0x92L, 0x1CL, 252UL, 1UL}, {1UL, 1UL, 252UL, 0x1CL, 0x92L, 255UL, 0x92L, 0x1CL, 252UL, 1UL}, {1UL, 1UL, 252UL, 0x1CL, 0x92L, 255UL, 0x92L, 0x1CL, 252UL, 1UL}, {1UL, 1UL, 252UL, 0x1CL, 0x92L, 255UL, 0x92L, 0x1CL, 252UL, 1UL}, {1UL, 1UL, 252UL, 0x1CL, 0x92L, 255UL, 0x92L, 0x1CL, 252UL, 1UL}, {1UL, 1UL, 252UL, 0x1CL, 0x92L, 255UL, 0x92L, 0x1CL, 252UL, 1UL}};
                    int i, j;
                    if ((safe_rshift_func_uint16_t_u_s((((*g_334) | (((safe_add_func_int8_t_s_s((0xF923204FL > ((safe_lshift_func_uint16_t_u_s((!((void*)0 != &g_521)), 5)) == ((*l_533) = ((l_608 > 8UL) , (0xBCL & (safe_sub_func_int16_t_s_s((p_67 == (((safe_mul_func_uint16_t_u_u(65535UL, l_613)) > p_67) == p_67)), 1L))))))), 6UL)) , l_601) > p_67)) | l_608), 7)))
                    {
                        int * const l_615 = &g_21;
                        int **l_616[3];
                        const int **l_617 = (void*)0;
                        const int **l_618 = &g_295;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_616[i] = &g_135[4];
                        if (l_90)
                            goto lbl_614;
                        l_72 = l_615;
                        (*l_618) = &g_103;
                    }
                    else
                    {
                        char ***l_623[2];
                        int l_625 = 0L;
                        int *l_626 = &l_601;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_623[i] = &g_568[2][1][0];
                        (**l_504) = &l_601;
                        (*l_626) = ((p_67 & ((safe_rshift_func_uint8_t_u_u((((safe_div_func_int8_t_s_s(((void*)0 != &g_295), p_67)) , p_67) && ((**g_333) = (**g_347))), ((*l_91) = ((*l_72) = ((((void*)0 != l_623[0]) && l_624[1][5]) < (*g_348)))))) < 0x5F53BD4EL)) ^ l_625);
                        l_643 = ((safe_add_func_int32_t_s_s((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(((p_67 < ((*l_635) = ((void*)0 == l_635))) ^ ((*l_72) = (safe_lshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(p_67, (safe_rshift_func_int16_t_s_s(((((((**l_530) = (*l_531)) != &g_348) && l_642[1]) & (l_601 = (~(*l_91)))) ^ p_67), 12)))), (*g_348))))), p_67)), p_67)), (*g_148))) <= 1L);
                    }
                    return (*l_91);
                }
                else
                {
                    for (g_73 = 0; (g_73 >= (-1)); --g_73)
                    {
                        return (*g_521);
                    }
                }
                (*l_72) = (*l_533);
            }
        }
        else
        {
            int *l_646[9] = {&g_92, &g_92, &g_92, &g_92, &g_92, &g_92, &g_92, &g_92, &g_92};
            int i;
            (**l_504) = (void*)0;
            (*l_91) = (((*l_72) = (!p_67)) || ((void*)0 == l_646[4]));
            for (l_90 = (-18); (l_90 <= (-28)); l_90 = safe_sub_func_uint8_t_u_u(l_90, 1))
            {
                const int *l_666 = &g_92;
                for (l_532 = 0; (l_532 <= 6); l_532 += 1)
                {
                    int i;
                    (*l_72) = (~(((void*)0 != l_504) < (safe_lshift_func_uint8_t_u_s(0xD0L, 3))));
                    return g_127[l_532];
                }
                for (l_592 = 0; (l_592 <= 4); l_592 += 1)
                {
                    int *l_657 = &g_71;
                    int i;
                    if (g_127[(l_592 + 2)])
                    {
                        const unsigned l_653[10][2] = {{0x6B7D9FB5L, 5UL}, {0x6B7D9FB5L, 5UL}, {0x6B7D9FB5L, 5UL}, {0x6B7D9FB5L, 5UL}, {0x6B7D9FB5L, 5UL}, {0x6B7D9FB5L, 5UL}, {0x6B7D9FB5L, 5UL}, {0x6B7D9FB5L, 5UL}, {0x6B7D9FB5L, 5UL}, {0x6B7D9FB5L, 5UL}};
                        int i, j;
                        (*l_91) = ((*l_72) = p_67);
                        (*l_72) = (safe_mod_func_int32_t_s_s(l_653[7][1], p_67));
                    }
                    else
                    {
                        char ****l_655 = &l_654;
                        int l_656 = 0xF7D0EC3EL;
                        int **l_658 = (void*)0;
                        int **l_659 = (void*)0;
                        int *l_660 = &g_581;
                        const int **l_663 = (void*)0;
                        int i;
                        (*l_72) = (((((*l_655) = l_654) == (p_67 , g_567[l_592])) , ((void*)0 != &g_393[2])) || ((g_127[(l_592 + 2)] , (l_656 , (p_67 , (l_660 = l_657)))) == l_646[6]));
                        (*l_91) = (safe_add_func_uint16_t_u_u((&g_71 == (l_664 = l_657)), (*g_348)));
                    }
                    if (p_67)
                    {
                        const int **l_667 = &l_666;
                        (*l_667) = l_666;
                    }
                    else
                    {
                        return (*g_521);
                    }
                    if ((*l_91))
                        break;
                }
                l_646[4] = (void*)0;
            }
            l_672 = ((*l_72) && ((((void*)0 != &g_348) , (*l_72)) , (safe_div_func_int32_t_s_s((((*g_569) = p_67) , (p_67 || (&g_567[3] == (g_670 = g_670)))), p_67))));
        }
    }
    else
    {
        int l_677[7];
        int l_680 = 1L;
        int i;
        for (i = 0; i < 7; i++)
            l_677[i] = 0x3AC1C0ACL;
        l_680 = (((p_67 , (safe_mul_func_int16_t_s_s(0x0A99L, ((safe_rshift_func_int16_t_s_u((((*g_597) = (p_67 & (((((l_677[5] | ((***l_531) = (p_67 == p_67))) >= (*l_72)) , ((safe_rshift_func_uint16_t_u_u(l_677[5], ((*g_347) == (void*)0))) >= 0x0FL)) > p_67) & p_67))) , (-5L)), l_677[1])) != p_67)))) | l_677[5]) != l_677[5]);
        (*l_72) = p_67;
    }
    g_134 = &l_72;
    return (**g_520);
}







static int ** func_74(int ** p_75, int p_76)
{
    int l_418[5][4][6] = {{{0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}}, {{0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}}, {{0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}}, {{0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}}, {{0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}, {0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL, 0x4CE79318L, 0xDF80EDAAL}}};
    short ***l_458 = (void*)0;
    char *l_464[8][2][2] = {{{&g_215[4], &g_215[4]}, {&g_215[4], &g_215[4]}}, {{&g_215[4], &g_215[4]}, {&g_215[4], &g_215[4]}}, {{&g_215[4], &g_215[4]}, {&g_215[4], &g_215[4]}}, {{&g_215[4], &g_215[4]}, {&g_215[4], &g_215[4]}}, {{&g_215[4], &g_215[4]}, {&g_215[4], &g_215[4]}}, {{&g_215[4], &g_215[4]}, {&g_215[4], &g_215[4]}}, {{&g_215[4], &g_215[4]}, {&g_215[4], &g_215[4]}}, {{&g_215[4], &g_215[4]}, {&g_215[4], &g_215[4]}}};
    char ** const l_463 = &l_464[3][1][1];
    const int l_495 = 0xF81F4668L;
    int l_498[6];
    short *l_499 = &g_239;
    int l_500 = 0xD73E622EL;
    int *l_501 = &g_71;
    unsigned char *l_502[5];
    const int **l_503 = &g_295;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_498[i] = 0x78C2EEBBL;
    for (i = 0; i < 5; i++)
        l_502[i] = (void*)0;
    for (g_217 = (-11); (g_217 > 55); g_217++)
    {
        char l_419 = (-2L);
        int **l_422 = &g_135[8];
        for (g_169 = 0; (g_169 <= 4); g_169 += 1)
        {
            int l_413 = 1L;
            if (p_76)
                break;
            for (g_239 = 0; (g_239 <= 2); g_239 += 1)
            {
                unsigned l_420 = 3UL;
                int l_421[3][8] = {{3L, 0x69CEDF13L, 3L, 0x69CEDF13L, 3L, 0x69CEDF13L, 3L, 0x69CEDF13L}, {3L, 0x69CEDF13L, 3L, 0x69CEDF13L, 3L, 0x69CEDF13L, 3L, 0x69CEDF13L}, {3L, 0x69CEDF13L, 3L, 0x69CEDF13L, 3L, 0x69CEDF13L, 3L, 0x69CEDF13L}};
                int i, j;
                for (g_389 = 0; (g_389 <= 4); g_389 += 1)
                {
                    int i;
                    l_413 = 0x83595F58L;
                    if (g_393[g_239])
                        break;
                }
                l_421[0][2] = (safe_sub_func_int8_t_s_s(g_103, (safe_mod_func_int32_t_s_s((l_413 >= l_418[2][0][0]), (l_419 , l_420)))));
                return l_422;
            }
        }
    }
    for (g_97 = 12; (g_97 <= 59); g_97 = safe_add_func_uint8_t_u_u(g_97, 4))
    {
        unsigned char l_425 = 0x6FL;
        int l_428[5][8] = {{0xFBCFE45BL, 0xD077DB20L, 0x92182E4BL, 0xA366EE92L, 0xD077DB20L, (-8L), 0xD077DB20L, 0xA366EE92L}, {0xFBCFE45BL, 0xD077DB20L, 0x92182E4BL, 0xA366EE92L, 0xD077DB20L, (-8L), 0xD077DB20L, 0xA366EE92L}, {0xFBCFE45BL, 0xD077DB20L, 0x92182E4BL, 0xA366EE92L, 0xD077DB20L, (-8L), 0xD077DB20L, 0xA366EE92L}, {0xFBCFE45BL, 0xD077DB20L, 0x92182E4BL, 0xA366EE92L, 0xD077DB20L, (-8L), 0xD077DB20L, 0xA366EE92L}, {0xFBCFE45BL, 0xD077DB20L, 0x92182E4BL, 0xA366EE92L, 0xD077DB20L, (-8L), 0xD077DB20L, 0xA366EE92L}};
        int l_441 = 1L;
        unsigned char l_455 = 253UL;
        char **l_466 = (void*)0;
        int *l_479 = &l_441;
        int i, j;
        l_428[3][5] = (((l_425 = 0x2D43L) > (safe_rshift_func_int8_t_s_u(0xEAL, ((p_76 < (*g_295)) ^ (**g_333))))) , l_425);
        if ((*g_295))
            continue;
        for (g_169 = (-7); (g_169 != 59); ++g_169)
        {
            int *l_431 = &l_428[1][5];
            short **l_462[10][3][5] = {{{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}, {{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}, {{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}, {{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}, {{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}, {{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}, {{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}, {{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}, {{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}, {{&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}, {&g_334, &g_334, (void*)0, &g_334, &g_334}}};
            int i, j, k;
            (*l_431) = l_418[0][1][4];
        }
        for (g_239 = 9; (g_239 > (-12)); g_239 = safe_sub_func_int16_t_s_s(g_239, 4))
        {
            if ((*l_479))
                break;
        }
    }
    (*l_503) = ((l_418[2][0][0] = (((safe_lshift_func_int16_t_s_s(l_418[2][0][0], 15)) || 0x9905270DL) | (p_76 , ((((*l_501) = (((l_500 = (safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((((*l_499) = (l_498[2] = ((**g_333) = (l_495 < ((safe_add_func_uint16_t_u_u(g_169, 0UL)) > p_76))))) ^ (g_127[5] = (6L == l_418[4][1][2]))) && l_495), p_76)), 7)), l_495))) < l_418[2][1][4]) , g_389)) , 0xC9ADC35CL) <= l_495)))) , &l_495);
    (*l_503) = (((p_76 || (*g_148)) | p_76) , (*l_503));
    return p_75;
}







static int ** func_77(short p_78, unsigned char p_79, int * p_80, unsigned * const p_81)
{
    const int *l_102 = &g_103;
    const int **l_101 = &l_102;
    int *l_105 = &g_92;
    int **l_104 = &l_105;
    int **l_133 = &l_105;
    unsigned short l_136 = 0x7DBBL;
    unsigned char l_218 = 252UL;
    unsigned l_241 = 0x6ED50CF4L;
    unsigned l_267 = 0x5AC172C5L;
    unsigned short l_315 = 0xB2D4L;
    unsigned l_324 = 0xC4550EEFL;
    unsigned **l_326[5][10][2] = {{{&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}}, {{&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}}, {{&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}}, {{&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}}, {{&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}, {&g_148, &g_148}}};
    short **l_346 = &g_334;
    int *l_381 = &g_21;
    unsigned l_410 = 18446744073709551615UL;
    int i, j, k;
    if ((((*p_80) , (*p_80)) || ((((*g_96) = (*p_81)) , (((0x39L | ((safe_sub_func_uint8_t_u_u(g_97, ((l_101 = g_100) != (l_104 = (void*)0)))) == (*l_105))) , p_81) != (void*)0)) , 0x42281945L)))
    {
        int l_111 = 1L;
        short l_124[4] = {(-7L), 0x6CC0L, (-7L), 0x6CC0L};
        unsigned short *l_167 = (void*)0;
        int **l_183 = &g_135[4];
        const unsigned short *l_313 = (void*)0;
        const unsigned short **l_312 = &l_313;
        unsigned short **l_329 = &l_167;
        unsigned short ***l_328 = &l_329;
        int i;
        if ((*p_80))
        {
            unsigned short l_106[6] = {0x1FE8L, 0x1FE8L, 0x318EL, 0x1FE8L, 0x1FE8L, 0x318EL};
            int l_128 = 0xFC50AAA1L;
            int l_193 = 0xCA683B8FL;
            char l_228 = 0x27L;
            unsigned **l_269 = (void*)0;
            unsigned ***l_268[8];
            int i;
            for (i = 0; i < 8; i++)
                l_268[i] = &l_269;
            if (l_106[2])
            {
                unsigned l_116 = 1UL;
                int l_125 = 0xAF9C35C0L;
                unsigned l_129 = 0x5D73B7D9L;
                for (p_78 = 6; (p_78 == 8); p_78 = safe_add_func_int32_t_s_s(p_78, 9))
                {
                    unsigned short *l_117 = &l_106[2];
                    const short l_122 = 0L;
                    int *l_123 = &g_73;
                    unsigned short *l_126[9] = {&g_127[3], &g_127[4], &g_127[3], &g_127[4], &g_127[3], &g_127[4], &g_127[3], &g_127[4], &g_127[3]};
                    int i;
                    if ((safe_rshift_func_int8_t_s_u(l_111, ((((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint8_t_u_u(p_78, (((*l_117) = l_116) <= ((0x06L & (safe_mod_func_uint32_t_u_u(((g_127[4] = ((l_125 = (safe_lshift_func_uint8_t_u_u(l_111, ((((*l_105) <= (l_124[0] = (((*l_123) = (l_122 ^ ((p_79 < p_78) < 65532UL))) | (*p_80)))) , &g_97) == (void*)0)))) < (*p_80))) == l_128), 0x23B15C07L))) , 0x64E9L)))) >= (*g_96)), 2)) <= l_116) != l_128) , l_129))))
                    {
                        int *l_132 = (void*)0;
                        (*l_105) = (safe_rshift_func_uint16_t_u_s((g_97 || p_79), 11));
                        l_132 = p_80;
                        p_80 = &l_111;
                    }
                    else
                    {
                        return g_134;
                    }
                }
                return &g_135[7];
            }
            else
            {
                (*g_134) = &l_128;
                if ((*p_80))
                {
                    (*p_80) = l_136;
                }
                else
                {
                    (*l_133) = &l_111;
                    (*p_80) = (safe_add_func_uint32_t_u_u((*p_81), 4294967295UL));
                }
            }
            for (g_92 = 0; (g_92 != 15); g_92 = safe_add_func_int16_t_s_s(g_92, 1))
            {
                char l_143[3][8] = {{0x5BL, 0x0FL, 0x5BL, 0x68L, 1L, 0xE9L, (-6L), (-6L)}, {0x5BL, 0x0FL, 0x5BL, 0x68L, 1L, 0xE9L, (-6L), (-6L)}, {0x5BL, 0x0FL, 0x5BL, 0x68L, 1L, 0xE9L, (-6L), (-6L)}};
                unsigned * const **l_144 = (void*)0;
                unsigned * const *l_146 = &g_96;
                unsigned * const **l_145[7][3][3] = {{{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}, {{(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}, {(void*)0, (void*)0, (void*)0}}};
                short l_155[8][4][4] = {{{0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}}, {{0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}}, {{0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}}, {{0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}}, {{0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}}, {{0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}}, {{0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}}, {{0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}, {0x0488L, 0x0E52L, 0x54D6L, (-3L)}}};
                int l_170 = 0x7E0054F3L;
                int i, j, k;
                l_143[0][5] = ((**g_134) = (safe_div_func_int32_t_s_s((*p_80), (*g_96))));
                g_147[6][2][2] = &g_96;
                for (g_71 = 0; (g_71 <= 2); g_71 += 1)
                {
                    unsigned **l_152 = &g_148;
                    unsigned ***l_151 = &l_152;
                    int i, j;
                }
            }
            for (p_78 = 2; (p_78 < (-28)); p_78 = safe_sub_func_uint8_t_u_u(p_78, 6))
            {
                unsigned l_177 = 0x5E0746DCL;
                short *l_178[8][2][8];
                int *l_187 = &g_21;
                unsigned short l_189 = 65535UL;
                unsigned * const * const l_216 = (void*)0;
                int l_229 = 0xF21F2E2BL;
                unsigned char *l_266 = &l_218;
                int i, j, k;
                for (i = 0; i < 8; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 8; k++)
                            l_178[i][j][k] = &g_159;
                    }
                }
            }
        }
        else
        {
            int **l_289 = &l_105;
            unsigned short *l_298 = &l_136;
            short l_322 = 1L;
            unsigned ***l_327 = &l_326[4][8][0];
            (*l_289) = p_81;
            for (g_217 = 1; (g_217 <= 4); g_217 += 1)
            {
                int *l_293 = (void*)0;
                short l_301 = 0xE631L;
                int i;
            }
            (*l_133) = (*g_134);
            (*l_327) = l_326[4][8][0];
        }
        (*l_328) = &l_167;
    }
    else
    {
        unsigned short l_350 = 0x6BC0L;
        short *l_362 = &g_159;
        unsigned * const l_368 = &l_267;
        int *l_380 = &g_92;
        const unsigned char *l_391 = &g_389;
        short ***l_399 = (void*)0;
        for (g_71 = 22; (g_71 < (-28)); g_71--)
        {
            short **l_335[9];
            int l_341 = 1L;
            int ***l_357 = &l_104;
            int i;
            for (i = 0; i < 9; i++)
                l_335[i] = &g_334;
            for (l_324 = 0; (l_324 <= 9); l_324 += 1)
            {
                int l_332 = (-1L);
                short **l_337 = (void*)0;
                unsigned char *l_345 = &l_218;
                unsigned char **l_344 = &l_345;
                const short ***l_349[5][6] = {{&g_347, (void*)0, &g_347, &g_347, &g_347, &g_347}, {&g_347, (void*)0, &g_347, &g_347, &g_347, &g_347}, {&g_347, (void*)0, &g_347, &g_347, &g_347, &g_347}, {&g_347, (void*)0, &g_347, &g_347, &g_347, &g_347}, {&g_347, (void*)0, &g_347, &g_347, &g_347, &g_347}};
                int *l_363[7] = {&g_21, &g_21, &l_332, &g_21, &g_21, &l_332, &g_21};
                int i, j;
                if (l_332)
                    break;
                for (g_239 = 9; (g_239 >= 0); g_239 -= 1)
                {
                    short ***l_336[3];
                    int l_338 = 0x11ED50EAL;
                    int **l_339 = (void*)0;
                    int **l_340 = &l_105;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_336[i] = &g_333;
                    if (((*p_80) > (0x47L < ((g_333 = (l_335[4] = g_333)) != l_337))))
                    {
                        int i;
                        g_135[g_239] = (*g_134);
                        (*p_80) = (-1L);
                        if (l_338)
                            break;
                    }
                    else
                    {
                        g_135[l_324] = (void*)0;
                    }
                    if ((*l_102))
                        continue;
                    (*l_340) = p_81;
                    if (((*l_102) != (*g_295)))
                    {
                        return &g_135[3];
                    }
                    else
                    {
                        (*p_80) = l_341;
                    }
                }
                (**l_133) = (((safe_rshift_func_uint8_t_u_s(((void*)0 != l_344), ((((*l_345) = (l_346 == (g_347 = g_347))) , (l_350 = p_79)) , g_71))) , ((safe_sub_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0xC132L, 2)), ((safe_sub_func_int16_t_s_s((l_357 == ((safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s((**g_333), (**g_333))), (*p_80))) , (void*)0)), l_350)) || (*g_148)))) , l_362)) != (*g_333));
                l_341 = ((**l_133) = (!(*g_295)));
            }
            if ((*l_105))
                break;
        }
        if (((~(((safe_div_func_uint16_t_u_u(g_92, g_71)) && (p_78 , ((((!(safe_sub_func_uint8_t_u_u(p_79, (l_368 == p_81)))) != (g_127[4] , 0x62L)) && (-1L)) , 0x82D8CDE2L))) , (*p_81))) ^ 9L))
        {
            int l_377 = 0L;
            if (((*l_105) = (g_217 & (safe_mod_func_int8_t_s_s(g_21, ((safe_div_func_int8_t_s_s((0xA3L >= l_350), g_215[0])) , ((2L == (*p_81)) & (safe_add_func_uint32_t_u_u(l_350, (safe_div_func_int32_t_s_s((*p_80), l_377)))))))))))
            {
                for (g_169 = (-22); (g_169 >= 23); g_169 = safe_add_func_int8_t_s_s(g_169, 8))
                {
                    l_380 = p_80;
                    return &g_135[4];
                }
                (*l_133) = l_381;
            }
            else
            {
                unsigned char *l_385 = &l_218;
                unsigned char **l_390 = &g_388[4][0];
                const unsigned char **l_392 = &l_391;
                int l_395 = 0x6976F03EL;
                l_377 = ((*l_105) = (safe_mod_func_uint16_t_u_u((((safe_unary_minus_func_uint8_t_u(((*l_385) = g_127[5]))) >= ((safe_mod_func_int16_t_s_s(((g_92 , (((*l_390) = g_388[2][0]) == ((*l_392) = l_391))) < g_393[2]), g_394)) & (g_97 && g_92))) , (**l_133)), p_79)));
                (*p_80) = 0xD98A267DL;
                (*p_80) = (*p_80);
                (**l_133) = l_395;
            }
        }
        else
        {
            int *l_396 = (void*)0;
            int *l_402 = &g_73;
            int l_407 = 0x9C85D9A5L;
            l_396 = p_80;
            (*p_80) = (((safe_sub_func_int16_t_s_s(((((((**l_133) == (g_260 || (((l_399 == (void*)0) < (safe_mul_func_int16_t_s_s(((((g_217 , (&p_79 != (((*l_402) = 1L) , &g_389))) , (safe_add_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s((p_78 != (*l_380)), 1)) >= (-1L)), 0UL))) | g_260) == (*l_105)), (**g_333)))) && (*l_380)))) > p_79) <= 255UL) > p_79) > l_407), 0xE9B3L)) == p_79) , (-9L));
        }
        for (g_389 = 12; (g_389 < 49); g_389 = safe_add_func_int16_t_s_s(g_389, 5))
        {
            if (l_410)
                break;
        }
    }
    return &g_135[4];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_10[i][j], "g_10[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_127[i], "g_127[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_159, "g_159", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_215[i], "g_215[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_393[i], "g_393[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_581, "g_581", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_695, "g_695", print_hash_value);
    transparent_crc(g_800, "g_800", print_hash_value);
    transparent_crc(g_845, "g_845", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_939[i][j], "g_939[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_940, "g_940", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_941[i][j][k], "g_941[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_997, "g_997", print_hash_value);
    transparent_crc(g_1060, "g_1060", print_hash_value);
    transparent_crc(g_1063, "g_1063", print_hash_value);
    transparent_crc(g_1139, "g_1139", print_hash_value);
    transparent_crc(g_1288, "g_1288", print_hash_value);
    transparent_crc(g_1359, "g_1359", print_hash_value);
    transparent_crc(g_1360, "g_1360", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
