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



static unsigned char g_6 = 255UL;
static int g_39 = 1L;
static int g_73[3] = {0x78356027L, 0x78356027L, 0x78356027L};
static unsigned short g_97 = 0UL;
static char g_101 = 0x48L;
static long long g_103 = (-1L);
static const unsigned g_104 = 1UL;
static unsigned long long g_114[5] = {0x99C904586DB868C9LL, 0x99C904586DB868C9LL, 0x99C904586DB868C9LL, 0x99C904586DB868C9LL, 0x99C904586DB868C9LL};
static unsigned short g_126 = 1UL;
static short g_138 = 0L;
static unsigned g_178 = 0x71E7B35EL;
static int *g_194 = &g_73[1];
static int g_203 = 6L;
static int **g_205 = &g_194;
static int ***g_204 = &g_205;
static short g_239 = (-1L);
static int g_249 = 1L;
static int ***g_263 = &g_205;
static const unsigned short g_296 = 0x7376L;
static unsigned *g_342 = &g_178;
static unsigned **g_341 = &g_342;
static unsigned char g_352 = 0xB7L;
static unsigned char g_354 = 0x73L;
static unsigned g_368 = 0x043BED2EL;
static unsigned long long g_413 = 0xB6D71226635AE45BLL;
static int g_431 = (-1L);
static short *g_458[2][4][7] = {{{&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}}, {{&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}, {&g_138, &g_138, &g_138, &g_138, &g_138, &g_138, &g_138}}};
static int *g_467 = &g_73[0];
static char g_482[4] = {0x0DL, 0xF6L, 0x0DL, 0xF6L};
static int *g_565 = &g_431;
static int **g_564 = &g_565;
static int g_577 = 0x9D187583L;
static long long *g_678[2][6][10] = {{{(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}}, {{(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}, {(void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103, (void*)0, &g_103}}};
static short g_690 = 0xB65DL;
static char ***g_717 = (void*)0;
static const int *g_727 = &g_73[0];
static int * const *g_732 = &g_565;
static char *g_734 = &g_482[2];
static char **g_733 = &g_734;
static unsigned long long g_790 = 0x0B2FD4D1632CA187LL;
static const int g_848 = 7L;



static const int func_1(void);
static char func_2(long long p_3, unsigned p_4, unsigned p_5);
static unsigned char func_7(int p_8, unsigned p_9, unsigned char p_10, unsigned p_11);
static unsigned short func_18(const unsigned char p_19);
static unsigned long long func_27(char p_28, unsigned p_29);
static int * func_34(int * p_35, int * p_36, int * p_37);
static int func_40(int p_41, int p_42);
static unsigned func_49(unsigned p_50);
static const int func_55(int p_56, int p_57, int * p_58, const int p_59);
static unsigned char func_70(unsigned short p_71);
static const int func_1(void)
{
    unsigned short l_24 = 3UL;
    unsigned char *l_597 = &g_352;
    int *l_612 = &g_39;
    int *l_613 = (void*)0;
    unsigned l_640 = 0xA6905ADCL;
    unsigned l_666 = 0x4520E412L;
    unsigned l_748 = 0x934461CEL;
    unsigned char l_774[4][9] = {{0x98L, 0UL, 254UL, 0UL, 0x98L, 0x9DL, 0x98L, 0UL, 254UL}, {0x98L, 0UL, 254UL, 0UL, 0x98L, 0x9DL, 0x98L, 0UL, 254UL}, {0x98L, 0UL, 254UL, 0UL, 0x98L, 0x9DL, 0x98L, 0UL, 254UL}, {0x98L, 0UL, 254UL, 0UL, 0x98L, 0x9DL, 0x98L, 0UL, 254UL}};
    int *l_794 = (void*)0;
    char l_819 = (-1L);
    int l_840 = (-6L);
    const int **l_845 = &g_727;
    const int *l_847[3];
    const int **l_846 = &l_847[1];
    const int *l_849 = &g_203;
    int l_850 = (-1L);
    short *l_857 = (void*)0;
    short *l_858 = &g_690;
    short *l_863 = &g_239;
    short *l_864[4];
    unsigned char l_865 = 0xECL;
    short **l_874 = &g_458[0][3][6];
    unsigned short l_875 = 0UL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_847[i] = &g_848;
    for (i = 0; i < 4; i++)
        l_864[i] = &g_138;
    if ((func_2(g_6, g_6, (func_7(((*g_467) = (((*l_597) = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((safe_mod_func_uint64_t_u_u(g_6, g_6)) ^ (func_18((g_6 && (!(safe_add_func_uint32_t_u_u((safe_sub_func_int64_t_s_s((l_24 ^ ((safe_mod_func_uint64_t_u_u(func_27((l_24 && 1L), (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(9L, l_24)), l_24))), 0xC8CA76D067266A00LL)) && l_24)), g_431)), 1L))))) <= l_24)), g_431)), l_24)) <= (-1L))) && l_24)), l_24, g_482[1], l_24) >= l_24)) & g_296))
    {
        int *l_623 = (void*)0;
        int ** const l_622 = &l_623;
        int ** const *l_621 = &l_622;
        const int l_629 = (-9L);
        unsigned char l_630[1];
        int i;
        for (i = 0; i < 1; i++)
            l_630[i] = 252UL;
        l_613 = l_612;
        for (g_97 = 0; (g_97 != 59); g_97 = safe_add_func_int16_t_s_s(g_97, 5))
        {
            int *** const l_616 = &g_564;
            int *l_620 = (void*)0;
            int ** const l_619 = &l_620;
            int ** const *l_618[2][8][2] = {{{&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}}, {{&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}, {&l_619, &l_619}}};
            int ** const **l_617[8] = {&l_618[0][7][0], &l_618[0][7][0], &l_618[0][7][0], &l_618[0][7][0], &l_618[0][7][0], &l_618[0][7][0], &l_618[0][7][0], &l_618[0][7][0]};
            int ** const *l_628 = &g_205;
            const int *l_638 = &g_577;
            int i, j, k;
            (*l_612) = (((*g_205) == (void*)0) ^ ((((l_616 == (l_621 = &g_564)) != (safe_sub_func_uint64_t_u_u(0xA5D2BC23DBDBAE1CLL, ((*l_612) >= ((safe_sub_func_int8_t_s_s((-6L), ((((l_628 != (void*)0) || g_178) | 9L) && l_629))) | l_630[0]))))) >= g_354) <= l_629));
            for (l_24 = 0; (l_24 <= 17); l_24 = safe_add_func_int64_t_s_s(l_24, 9))
            {
                short **l_634 = &g_458[0][2][2];
                short ***l_633 = &l_634;
                int *l_635 = &g_73[0];
                const int *l_637[1][9] = {{&g_577, &g_577, (void*)0, &g_577, &g_577, (void*)0, &g_577, &g_577, (void*)0}};
                const int **l_636[5] = {&l_637[0][2], &l_637[0][2], &l_637[0][2], &l_637[0][2], &l_637[0][2]};
                int i, j;
                (*l_633) = &g_458[0][2][2];
                l_635 = (*g_205);
                l_638 = &l_629;
            }
        }
    }
    else
    {
        unsigned long long l_639 = 1UL;
        int l_641 = 0x08F45706L;
        short l_672[7];
        char *l_731 = &g_482[2];
        char **l_730 = &l_731;
        int *l_750 = &l_641;
        int **l_752 = &l_612;
        unsigned * const *l_789 = &g_342;
        int * const *l_807 = &g_194;
        int * const * const *l_806 = &l_807;
        int * const * const **l_805 = &l_806;
        int * const *l_832 = (void*)0;
        int i;
        for (i = 0; i < 7; i++)
            l_672[i] = 0x54FDL;
        if ((l_641 = l_640))
        {
            int *l_646 = &g_73[0];
            const int *l_725[3];
            char *l_729 = &g_101;
            char **l_728[5] = {&l_729, &l_729, &l_729, &l_729, &l_729};
            int i;
            for (i = 0; i < 3; i++)
                l_725[i] = &g_577;
lbl_652:
            for (g_203 = 0; (g_203 == (-10)); g_203--)
            {
                int *l_649[1];
                int **l_650 = &l_649[0];
                int **l_651[8];
                int i;
                for (i = 0; i < 1; i++)
                    l_649[i] = (void*)0;
                for (i = 0; i < 8; i++)
                    l_651[i] = &l_646;
            }
            l_641 = (*g_467);
            for (g_431 = 1; (g_431 >= 0); g_431 -= 1)
            {
                int l_687 = 0x4622A7AAL;
                int l_688 = 0xC32580C4L;
                int i;
                g_73[g_431] = func_18(l_641);
                for (g_39 = 1; (g_39 >= 0); g_39 -= 1)
                {
                    short l_655 = 3L;
                    short *l_656 = &g_239;
                    int l_667[9] = {0L, 0L, 1L, 0L, 0L, 1L, 0L, 0L, 1L};
                    int i;
                    if ((*l_646))
                        break;
                    if (l_641)
                        goto lbl_652;
                    g_73[g_431] = (*g_467);
                    l_667[1] = ((0UL != (safe_sub_func_int16_t_s_s((*l_646), ((*l_656) = l_655)))) == (safe_unary_minus_func_int8_t_s(((safe_sub_func_uint32_t_u_u((**g_341), (safe_lshift_func_int16_t_s_u((((((safe_lshift_func_int8_t_s_s((((*g_467) & ((safe_mul_func_int16_t_s_s(l_655, l_666)) >= (g_73[g_431] != 0L))) | l_641), g_482[1])) != g_413) && l_655) < (**g_341)) != g_178), 6)))) > 4294967293UL))));
                    for (g_239 = 0; (g_239 <= 1); g_239 += 1)
                    {
                        int l_668 = 0x1E9862A5L;
                        int **l_669 = &l_646;
                        (*g_467) = func_2(l_667[5], l_668, (0xA4C669A9B68F9782LL || (~0x0BC81B89C0AE154FLL)));
                        (*l_669) = ((*g_205) = &l_641);
                        (*l_646) = (**g_205);
                    }
                }
                for (g_126 = 0; (g_126 <= 1); g_126 += 1)
                {
                    unsigned l_675 = 6UL;
                    (*l_646) = ((safe_add_func_uint16_t_u_u((l_672[1] && g_203), (*l_646))) && (l_672[1] > l_639));
                    for (g_138 = 1; (g_138 >= 0); g_138 -= 1)
                    {
                        int l_676 = 1L;
                        (*l_646) = (0UL || (l_672[2] == (safe_add_func_int64_t_s_s((&g_341 == (void*)0), 0x0C696E374C6DCBF0LL))));
                        l_676 = (g_6 | l_675);
                        if (l_676)
                            break;
                    }
                    for (g_97 = 0; (g_97 <= 1); g_97 += 1)
                    {
                        long long *l_677[6][3][4] = {{{&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}}, {{&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}}, {{&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}}, {{&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}}, {{&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}}, {{&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103}}};
                        int l_679 = 0xCE591C32L;
                        short *l_680 = &g_239;
                        unsigned short *l_689[9][9] = {{(void*)0, &g_97, (void*)0, &l_24, &g_126, &l_24, &g_126, &l_24, (void*)0}, {(void*)0, &g_97, (void*)0, &l_24, &g_126, &l_24, &g_126, &l_24, (void*)0}, {(void*)0, &g_97, (void*)0, &l_24, &g_126, &l_24, &g_126, &l_24, (void*)0}, {(void*)0, &g_97, (void*)0, &l_24, &g_126, &l_24, &g_126, &l_24, (void*)0}, {(void*)0, &g_97, (void*)0, &l_24, &g_126, &l_24, &g_126, &l_24, (void*)0}, {(void*)0, &g_97, (void*)0, &l_24, &g_126, &l_24, &g_126, &l_24, (void*)0}, {(void*)0, &g_97, (void*)0, &l_24, &g_126, &l_24, &g_126, &l_24, (void*)0}, {(void*)0, &g_97, (void*)0, &l_24, &g_126, &l_24, &g_126, &l_24, (void*)0}, {(void*)0, &g_97, (void*)0, &l_24, &g_126, &l_24, &g_126, &l_24, (void*)0}};
                        int i, j, k;
                        (*g_467) = (+((((&g_103 != (g_678[1][4][7] = l_677[2][2][3])) ^ l_679) > ((*l_680) = 0x8CF3L)) ^ (func_70((g_690 = (safe_rshift_func_int8_t_s_u((safe_sub_func_int8_t_s_s(((0x7EE56372L < (*g_342)) || (~0xC4L)), (safe_mod_func_int32_t_s_s((l_687 = (g_73[g_431] = 1L)), l_688)))), 1)))) < (-3L))));
                        return (*g_565);
                    }
                    (*g_205) = l_646;
                    for (g_354 = 0; (g_354 <= 1); g_354 += 1)
                    {
                        unsigned long long l_697 = 0x535AE0ED97950838LL;
                        (*l_612) = (func_40(l_675, (safe_lshift_func_uint16_t_u_s(0xA8C7L, (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint8_t_u_u(0x27L, (l_697 == (safe_add_func_uint16_t_u_u(l_672[3], ((*l_646) > (((l_697 == ((safe_sub_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((**g_341), (**g_341))), (*g_194))) ^ 0x4338L)) == l_639) | g_482[2]))))))) <= l_697), 3))))) != g_114[4]);
                        if (l_697)
                            break;
                        (*g_205) = (*g_205);
                        (*g_205) = &l_641;
                    }
                }
            }
            for (g_178 = 0; (g_178 <= 1); g_178 += 1)
            {
                unsigned long long l_704[10][5] = {{0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}, {0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}, {0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}, {0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}, {0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}, {0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}, {0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}, {0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}, {0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}, {0x4876D5A04B163484LL, 0x4C4C61292745B712LL, 0x4876D5A04B163484LL, 0x75CD24657ED765CDLL, 18446744073709551614UL}};
                char **l_736 = &l_729;
                int i, j;
            }
        }
        else
        {
            short l_743 = 8L;
            int l_749 = 6L;
            int l_773 = 0xA8115647L;
            int *l_795 = &l_749;
            (*g_467) = (*l_612);
            (*g_467) = l_743;
            if ((((l_672[5] | (g_239 <= (((**g_341) > 0x22C86B8FL) | (((l_672[1] != g_104) != (g_354 && ((*l_597) = g_482[2]))) == (safe_mod_func_int16_t_s_s(l_748, g_296)))))) > (*l_612)) || (**g_341)))
            {
                unsigned *l_751 = &l_666;
                l_749 = (*l_612);
                l_750 = &l_641;
                (*l_612) = (&g_368 == l_751);
                l_613 = (*g_205);
            }
            else
            {
                short l_760 = (-10L);
                if (((void*)0 != l_752))
                {
                    int ***l_753 = &l_752;
                    (*l_753) = &l_750;
                }
                else
                {
                    int *l_767 = &l_749;
                    char * const l_772[7][7][1] = {{{&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}}, {{&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}}, {{&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}}, {{&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}}, {{&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}}, {{&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}}, {{&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}, {&g_101}}};
                    long long *l_775 = (void*)0;
                    long long *l_776 = &g_103;
                    int i, j, k;
                    (*g_467) = ((safe_div_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((((*l_776) = (l_760 == (safe_lshift_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(((safe_add_func_uint64_t_u_u(((void*)0 != l_767), ((safe_add_func_int16_t_s_s((((safe_mul_func_int8_t_s_s(l_749, ((*l_612) >= ((l_773 = (((*g_727) | (*l_612)) < g_138)) < 1L)))) & 0x8D8CC8D3L) || (*l_750)), l_774[3][2])) == (**l_752)))) != (*l_767)), 0x23L)), (*l_750))))) < l_743) ^ (*g_342)), g_39)), 0UL)), (*l_767))) < l_760);
                    if ((0UL > ((((safe_mod_func_int16_t_s_s(0x4BF6L, (*l_612))) ^ (safe_add_func_uint8_t_u_u((g_790 = (safe_rshift_func_int8_t_s_u(((*l_767) = (safe_div_func_uint16_t_u_u((((g_103 && func_18((safe_div_func_int64_t_s_s(func_18((safe_mul_func_int16_t_s_s((((5UL == (*l_767)) < ((*g_734) | (((void*)0 != l_789) < l_760))) != l_760), (*l_750)))), (*l_612))))) & 0xC2C55D5CL) == (**l_752)), 65534UL))), g_73[0]))), (-9L)))) >= g_239) && (**l_752))))
                    {
                        int *l_791 = &l_641;
                        (*g_205) = &l_749;
                        l_791 = l_612;
                        (*l_750) = 0x9AAAC07CL;
                    }
                    else
                    {
                        long long l_792 = (-1L);
lbl_793:
                        (*l_612) = (0x6BL | func_7(((*l_767) = ((void*)0 == (*g_341))), l_792, g_126, (**g_341)));
                        (*l_750) = ((*g_467) = (&g_341 == &g_341));
                        if (g_368)
                            goto lbl_793;
                    }
                    if (l_743)
                    {
                        (*l_767) = (*g_727);
                    }
                    else
                    {
                        int *l_796 = &l_641;
                        (*l_767) = ((**l_752) & 1UL);
                        (*g_205) = (*g_205);
                        (*l_750) = l_760;
                        l_750 = ((*l_752) = ((*g_205) = (*g_205)));
                    }
                }
                (*l_752) = (*l_752);
                return (**g_732);
            }
            return (**l_752);
        }
        for (l_666 = (-15); (l_666 >= 1); l_666 = safe_add_func_int16_t_s_s(l_666, 5))
        {
            unsigned short l_821 = 65529UL;
            int *l_825 = &l_641;
            int *l_826 = &g_577;
            unsigned short l_831 = 0x81C2L;
            if ((*g_727))
                break;
            for (g_6 = 0; (g_6 < 20); g_6 = safe_add_func_int32_t_s_s(g_6, 9))
            {
                unsigned l_812 = 0xE0164812L;
                const int l_820 = 0x9AECBD21L;
                int *l_824 = &g_73[2];
                long long *l_833 = &g_103;
                if (((safe_sub_func_uint64_t_u_u(((*l_612) < (safe_mul_func_int16_t_s_s((((l_805 == &g_263) != ((**g_733) = 0x8CL)) == (((~(safe_rshift_func_uint8_t_u_s((safe_mul_func_uint16_t_u_u(l_812, (1L < (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_812, (safe_mod_func_int64_t_s_s(((g_114[4] | l_819) == (*l_750)), l_820)))), 2UL))))), 5))) && l_821) && 0x698E89F0L)), l_820))), l_820)) > (*l_612)))
                {
                    int *l_822[4][10] = {{(void*)0, &g_203, &g_73[0], (void*)0, &g_203, &g_577, &g_203, (void*)0, &g_73[0], &g_203}, {(void*)0, &g_203, &g_73[0], (void*)0, &g_203, &g_577, &g_203, (void*)0, &g_73[0], &g_203}, {(void*)0, &g_203, &g_73[0], (void*)0, &g_203, &g_577, &g_203, (void*)0, &g_73[0], &g_203}, {(void*)0, &g_203, &g_73[0], (void*)0, &g_203, &g_577, &g_203, (void*)0, &g_73[0], &g_203}};
                    int i, j;
                    (*g_205) = l_822[0][2];
                }
                else
                {
                    (*l_612) = (*g_467);
                    for (g_790 = 0; (g_790 <= 3); g_790 += 1)
                    {
                        int *l_823 = &g_203;
                        int i;
                        if (g_482[g_790])
                            break;
                        (*g_205) = l_823;
                        if (l_812)
                            continue;
                    }
                    l_824 = l_794;
                }
                l_826 = (*g_205);
                (*g_467) = (((safe_sub_func_int64_t_s_s(((safe_add_func_uint32_t_u_u(0xD2A6B41DL, (*l_612))) != l_831), (((*l_833) = (&l_824 != l_832)) & (safe_add_func_int32_t_s_s((*l_612), (safe_lshift_func_uint8_t_u_s((safe_mod_func_int32_t_s_s((*l_750), ((**l_789) = l_840))), 7))))))) == g_368) > (-1L));
                (*l_825) = (*g_727);
            }
            if ((*g_467))
                break;
        }
    }
    (*l_612) = (*g_727);
    l_849 = ((*l_846) = ((*l_845) = (void*)0));
    (*g_467) = (l_850 | (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(0xCDE5L, (65534UL | (((safe_div_func_int16_t_s_s(((*l_858) = (*l_612)), ((safe_rshift_func_int16_t_s_s((safe_div_func_int16_t_s_s((&g_126 != &g_126), ((*l_612) && ((l_865 = ((*l_863) = 8L)) < (safe_mul_func_uint16_t_u_u((safe_div_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((((*l_874) = &g_138) == (void*)0), 0L)), 8L)), (*l_612))), (-4L))))))), g_178)) & (-1L)))) == l_875) == (**g_341))))), 18446744073709551615UL)));
    return (*l_612);
}







static char func_2(long long p_3, unsigned p_4, unsigned p_5)
{
    unsigned l_611 = 0x582A0A3AL;
    (*g_467) = l_611;
    return g_138;
}







static unsigned char func_7(int p_8, unsigned p_9, unsigned char p_10, unsigned p_11)
{
    short l_605[2];
    int i;
    for (i = 0; i < 2; i++)
        l_605[i] = 2L;
    return g_203;
}







static unsigned short func_18(const unsigned char p_19)
{
    int *l_594 = &g_203;
    (*g_205) = l_594;
    if ((*g_194))
    {
        (*g_205) = l_594;
    }
    else
    {
        return g_114[1];
    }
    for (g_577 = 0; (g_577 <= 15); g_577++)
    {
        if (p_19)
            break;
        return (*l_594);
    }
    (*g_205) = (void*)0;
    return g_431;
}







static unsigned long long func_27(char p_28, unsigned p_29)
{
    int *l_38 = &g_39;
    (*g_205) = func_34(l_38, &g_39, &g_39);
    (*g_205) = (*g_205);
    return (*l_38);
}







static int * func_34(int * p_35, int * p_36, int * p_37)
{
    unsigned short l_51 = 0xFAFEL;
    int l_243 = 0x6BCCB619L;
    int *l_248 = &g_249;
    unsigned *l_250 = &g_178;
    int *l_299[4];
    int **l_378[9][4] = {{&l_299[3], &l_299[0], &g_194, &l_299[0]}, {&l_299[3], &l_299[0], &g_194, &l_299[0]}, {&l_299[3], &l_299[0], &g_194, &l_299[0]}, {&l_299[3], &l_299[0], &g_194, &l_299[0]}, {&l_299[3], &l_299[0], &g_194, &l_299[0]}, {&l_299[3], &l_299[0], &g_194, &l_299[0]}, {&l_299[3], &l_299[0], &g_194, &l_299[0]}, {&l_299[3], &l_299[0], &g_194, &l_299[0]}, {&l_299[3], &l_299[0], &g_194, &l_299[0]}};
    unsigned short l_437 = 4UL;
    int l_493 = (-8L);
    long long l_593 = 1L;
    int i, j;
    for (i = 0; i < 4; i++)
        l_299[i] = (void*)0;
    if (func_40((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((func_49(l_51) || (((*l_250) = (+(l_51 || func_49((safe_add_func_int32_t_s_s((**g_205), ((func_55(((*l_248) = ((l_243 = l_51) > func_55((safe_lshift_func_uint16_t_u_u(g_6, 12)), (*p_36), (*g_205), (safe_lshift_func_uint16_t_u_s(l_51, l_51))))), (***g_204), (**g_204), (***g_204)) & l_51) > l_51))))))) < l_51)), l_51)) == l_51), l_51)), l_51)), l_51))
    {
        return p_35;
    }
    else
    {
        const short *l_271 = &g_138;
        int l_277 = 0x5B3BB289L;
        int l_326[10] = {0xA45A5E1EL, 0x7ABD4A53L, 0x2B4C23AAL, 0x2B4C23AAL, 0x7ABD4A53L, 0xA45A5E1EL, 0x7ABD4A53L, 0x2B4C23AAL, 0x2B4C23AAL, 0x7ABD4A53L};
        unsigned short l_409 = 0UL;
        char l_418 = 1L;
        int * const l_468 = &l_326[6];
        int i;
        if ((*p_35))
        {
            unsigned char l_278 = 0x45L;
            int l_295 = 0xC2317CE2L;
            int *l_320 = &g_73[2];
            int **l_331 = &l_299[0];
            const short *l_333 = &g_138;
            if ((safe_mul_func_uint8_t_u_u(255UL, l_51)))
            {
                int *l_279 = &l_243;
                char l_287 = 0x10L;
                unsigned char l_304 = 247UL;
                unsigned short l_307[9] = {65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL, 0UL, 65535UL};
                unsigned long long l_319 = 18446744073709551615UL;
                int i;
                if (l_243)
                {
                    int *l_280 = &g_203;
                    for (g_126 = 0; (g_126 <= 2); g_126 += 1)
                    {
                        char *l_276 = &g_101;
                        int i;
                        l_243 = ((*p_37) = (g_73[g_126] = ((!(g_73[g_126] < (safe_lshift_func_uint8_t_u_s(func_55(g_203, (*p_37), &g_73[g_126], (4294967295UL > (l_271 == &g_138))), (safe_lshift_func_int16_t_s_u(((safe_sub_func_int8_t_s_s(((*l_276) = func_55(((void*)0 != &l_51), (*p_35), p_37, (**g_205))), l_277)) >= l_278), 9)))))) ^ g_73[g_126])));
                        (*g_205) = l_279;
                        if ((*p_36))
                            break;
                        p_36 = l_280;
                    }
                    (*g_194) = (*g_194);
                    (*g_205) = l_280;
                    if ((g_73[0] > ((0x51094EE7D0B9ABF4LL & 18446744073709551607UL) | g_138)))
                    {
                        unsigned short *l_288 = &l_51;
                        const int l_293 = (-10L);
                        unsigned long long *l_294 = (void*)0;
                        char *l_297 = &l_287;
                        (*p_37) = ((*l_279) = (~func_49(func_70((((*l_250) = (safe_rshift_func_int8_t_s_u(((*l_297) = func_40(((*g_194) = func_55((((void*)0 != &g_263) < (((func_70(((*l_288) = ((*l_280) = (safe_add_func_uint32_t_u_u((safe_div_func_int64_t_s_s((*l_279), l_287)), (*l_279)))))) && ((*l_250) = (safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((((*p_35) = (*p_36)) <= l_293), (l_295 = l_293))), l_278)))) & l_243) || l_293)), l_278, p_37, g_296)), g_101)), 1))) & 3UL)))));
                        return p_36;
                    }
                    else
                    {
                        unsigned short l_298 = 0x88E6L;
                        (*g_205) = p_37;
                        (*g_194) = (l_298 | 3L);
                        (*g_205) = l_299[0];
                    }
                }
                else
                {
                    int l_310 = 0xD2330F1EL;
                    for (g_249 = 0; (g_249 != 17); ++g_249)
                    {
                        if ((*p_37))
                            break;
                        (*g_205) = &l_295;
                    }
                    for (g_178 = 13; (g_178 < 49); g_178 = safe_add_func_uint64_t_u_u(g_178, 8))
                    {
                        char *l_308 = &l_287;
                        int l_309[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_309[i] = 0x78E9862CL;
                        (*g_205) = (*g_205);
                        (*p_35) = ((((0xC6L <= (+0L)) ^ func_70(l_304)) & ((safe_rshift_func_int8_t_s_s((l_307[7] && 0xADCAL), ((*l_308) = (~(*l_279))))) || l_277)) >= (*l_279));
                        l_309[0] = 0x56DE6141L;
                        (*p_35) = (+l_310);
                    }
                    for (g_101 = 0; (g_101 < 15); g_101 = safe_add_func_uint32_t_u_u(g_101, 8))
                    {
                        unsigned char *l_313 = (void*)0;
                        (*p_37) = ((void*)0 != l_313);
                        (**g_205) = (l_310 < func_49((*l_279)));
                    }
                    if ((safe_rshift_func_uint8_t_u_s(2UL, 4)))
                    {
                        long long *l_316 = &g_103;
                        (*g_205) = &l_243;
                        l_319 = ((l_316 != &g_103) == (safe_div_func_int8_t_s_s(func_70((*l_279)), l_277)));
                        p_37 = (*g_205);
                        p_37 = (*g_205);
                    }
                    else
                    {
                        (*g_205) = (*g_205);
                        (*l_279) = (*g_194);
                    }
                }
                for (g_126 = 0; (g_126 <= 8); g_126 += 1)
                {
                    long long l_321 = 5L;
                    (*p_36) = g_126;
                    for (l_277 = 8; (l_277 >= 2); l_277 -= 1)
                    {
                        unsigned long long l_322 = 0xE049319BCA8379ABLL;
                        unsigned char l_323 = 0x6BL;
                        (*g_205) = (l_320 = (*g_205));
                        if ((*p_37))
                            break;
                        (*l_279) = l_321;
                        (*l_279) = ((*p_35) = (l_322 ^ l_323));
                    }
                    (*p_36) = (*p_37);
                }
                (*p_35) = (*p_36);
            }
            else
            {
                short *l_335 = &g_138;
                short **l_334 = &l_335;
                (**g_205) = (*p_36);
                (*p_36) = (safe_unary_minus_func_uint8_t_u((l_333 == ((*l_334) = (void*)0))));
            }
        }
        else
        {
            unsigned short l_338 = 0x6290L;
            int l_369 = 9L;
            for (g_103 = 0; (g_103 < 10); g_103++)
            {
                int l_343[3][2] = {{0L, 0L}, {0L, 0L}, {0L, 0L}};
                int i, j;
            }
        }
        for (g_239 = 29; (g_239 != 3); g_239 = safe_sub_func_int32_t_s_s(g_239, 4))
        {
            for (l_243 = 0; (l_243 <= (-12)); l_243 = safe_sub_func_int32_t_s_s(l_243, 3))
            {
                return p_36;
            }
            (*g_205) = &l_243;
        }
        for (g_239 = 4; (g_239 <= 24); ++g_239)
        {
            return p_35;
        }
        if ((l_378[1][2] == &l_299[0]))
        {
            unsigned short l_381[2][2];
            int *l_460 = (void*)0;
            char *l_466 = &g_101;
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                    l_381[i][j] = 1UL;
            }
            if (((&g_249 == (void*)0) & (safe_mod_func_uint64_t_u_u(l_381[1][1], l_326[9]))))
            {
                const short l_386[2] = {(-4L), (-4L)};
                unsigned short *l_387 = (void*)0;
                unsigned short *l_388 = &g_97;
                long long l_404 = 0xB0B3959362763AF5LL;
                unsigned char *l_407 = &g_6;
                unsigned *l_427 = &g_368;
                int *l_430 = &g_431;
                long long *l_436 = &g_103;
                unsigned long long *l_438 = &g_114[1];
                int *l_463[5][10][5] = {{{&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}}, {{&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}}, {{&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}}, {{&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}}, {{&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}, {&g_39, &g_203, &g_39, &g_203, &g_39}}};
                int i, j, k;
                (*p_35) = (safe_add_func_uint32_t_u_u((safe_div_func_int64_t_s_s(l_386[0], func_70(((*l_388) = l_326[3])))), l_277));
                for (g_97 = 0; (g_97 >= 53); g_97++)
                {
                    unsigned char *l_406 = (void*)0;
                    int l_408 = 0xADA6B60CL;
                    p_36 = p_36;
                    for (g_103 = 0; (g_103 >= (-25)); g_103 = safe_sub_func_uint16_t_u_u(g_103, 1))
                    {
                        unsigned long long *l_395 = &g_114[4];
                        unsigned char *l_405 = &g_352;
                        int l_410 = 0xEB566F39L;
                        unsigned long long *l_411 = (void*)0;
                        unsigned long long *l_412 = &g_413;
                        (*p_37) = (safe_mod_func_uint64_t_u_u((~((*l_395) = l_386[0])), ((*l_412) = (((1UL && (**g_341)) <= (safe_lshift_func_int16_t_s_s(g_296, 7))) && g_178))));
                    }
                    (*g_205) = p_35;
                }
                if ((safe_add_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u(((*l_438) = l_437), l_381[1][0])) == g_39), 0x7EL)))
                {
                    unsigned char l_441 = 0x1FL;
                    short *l_450[8];
                    int l_451 = 0L;
                    int *l_459 = &l_243;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_450[i] = &g_138;
                    for (g_97 = 0; (g_97 <= 26); g_97++)
                    {
                        (*p_36) = (l_441 && (~(l_418 > (safe_lshift_func_uint16_t_u_s(l_386[0], 3)))));
                    }
                    if (((4294967295UL || (((safe_div_func_int16_t_s_s((l_404 & (safe_lshift_func_uint16_t_u_s(l_381[0][0], ((**g_341) < l_381[0][0])))), 0x58D5L)) > (((safe_div_func_uint16_t_u_u(l_409, (l_451 = l_386[0]))) < l_381[0][0]) == g_126)) != l_381[1][1])) >= 248UL))
                    {
                        int *l_452 = (void*)0;
                        (*g_205) = l_452;
                        return (*g_205);
                    }
                    else
                    {
                        unsigned l_455[6];
                        short *l_456 = (void*)0;
                        short **l_457[4][2] = {{&l_450[6], &l_450[6]}, {&l_450[6], &l_450[6]}, {&l_450[6], &l_450[6]}, {&l_450[6], &l_450[6]}};
                        int i, j;
                        for (i = 0; i < 6; i++)
                            l_455[i] = 0x670C37A9L;
                        (*p_35) = (safe_mul_func_int16_t_s_s((-8L), ((l_455[3] ^ g_103) >= (0x1B679BC15D0ED0B7LL && (((*l_438) = l_386[0]) >= (l_450[4] != (g_458[0][2][2] = l_456)))))));
                        l_459 = &g_39;
                        return l_460;
                    }
                }
                else
                {
                    int *l_462[7] = {&l_326[1], (void*)0, &l_326[1], (void*)0, &l_326[1], (void*)0, &l_326[1]};
                    int i;
                    if (((*g_342) && ((void*)0 == &g_138)))
                    {
                        return p_36;
                    }
                    else
                    {
                        int *l_461 = (void*)0;
                        l_463[4][8][0] = (l_460 = (l_462[4] = l_461));
                    }
                }
            }
            else
            {
                (*p_36) = (-9L);
            }
            if (((safe_add_func_int16_t_s_s(l_326[3], (((*l_466) = g_114[3]) | (l_381[1][1] ^ l_326[4])))) > 1UL))
            {
                (*g_205) = g_467;
                return p_35;
            }
            else
            {
                int **l_469 = &g_194;
                (*l_469) = l_468;
            }
        }
        else
        {
            return p_35;
        }
    }
    for (g_39 = (-24); (g_39 <= (-7)); g_39++)
    {
        unsigned long long l_472 = 0x635DDA8162FA79A0LL;
        int l_484[5][10][4] = {{{0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}}, {{0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}}, {{0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}}, {{0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}}, {{0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}, {0x9B93D802L, 1L, 0xAED3171AL, 1L}}};
        unsigned l_508[7][9][4] = {{{5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}}, {{5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}}, {{5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}}, {{5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}}, {{5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}}, {{5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}}, {{5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}, {5UL, 0x3BB0D358L, 0x661E7457L, 5UL}}};
        unsigned l_521[9] = {0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL, 18446744073709551615UL, 0UL};
        int l_536[5][3][10] = {{{0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}}, {{0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}}, {{0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}}, {{0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}}, {{0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}, {0L, (-1L), 0x93A95681L, 5L, (-1L), 0x11508E36L, 0x96D62F49L, 0L, 0L, 0x6AC21D1FL}}};
        unsigned **l_542[1];
        int *l_552 = &g_73[0];
        unsigned l_563 = 7UL;
        int ***l_589 = &g_564;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_542[i] = &g_342;
        (*g_467) = (!(*g_467));
        if (l_472)
            continue;
        for (g_413 = 0; (g_413 <= 3); g_413 += 1)
        {
            short l_483 = 0x4023L;
            int *l_487 = (void*)0;
            short l_494 = 0x400AL;
            const unsigned short l_529 = 0UL;
            char *l_549[5][7][7] = {{{&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}}, {{&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}}, {{&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}}, {{&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}}, {{&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}, {&g_482[3], (void*)0, &g_482[2], (void*)0, (void*)0, &g_482[1], &g_482[2]}}};
            char **l_548 = &l_549[1][0][3];
            int i, j, k;
            if ((safe_mul_func_int8_t_s_s(g_114[g_413], g_114[g_413])))
            {
                int l_479 = 5L;
                short *l_485 = (void*)0;
                short *l_486 = &g_239;
                unsigned char l_492[2][9] = {{1UL, 1UL, 0x03L, 0xA5L, 0UL, 0xA5L, 0x03L, 1UL, 1UL}, {1UL, 1UL, 0x03L, 0xA5L, 0UL, 0xA5L, 0x03L, 1UL, 1UL}};
                int i, j;
                l_484[2][3][1] = (l_483 = ((*g_467) = ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u((l_472 == g_73[2]), l_472)) < g_482[2]), 8)) >= (*p_35))));
                l_494 = (((l_484[2][3][1] >= (safe_add_func_int64_t_s_s(g_126, g_368))) != (safe_sub_func_uint8_t_u_u((g_354 = (g_114[g_413] < l_492[0][0])), g_114[4]))) && l_493);
            }
            else
            {
                int l_514 = 0L;
                unsigned long long l_537[2];
                unsigned **l_544 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_537[i] = 0x8FB30ABB05021547LL;
                if ((*p_37))
                {
                    int l_507[4][7][7] = {{{0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}}, {{0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}}, {{0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}}, {{0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}, {0x49AC0B78L, 0x103671FCL, 0L, (-5L), 1L, 0x19A253F7L, 0x2C761483L}}};
                    int l_513 = 1L;
                    int i, j, k;
                    l_484[2][3][1] = (+(safe_sub_func_int8_t_s_s(((safe_div_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(((*p_36) >= (((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u(g_103, (((*g_341) = (*g_341)) == (void*)0))), ((*g_467) = ((((((l_507[1][3][1] = (safe_rshift_func_uint8_t_u_u(((l_507[1][3][1] | 6UL) != l_508[0][5][1]), 3))) ^ (safe_mul_func_uint8_t_u_u((0x20L != (safe_sub_func_uint64_t_u_u(g_178, l_513))), g_482[2]))) < g_114[1]) <= 0xF8L) & 0x01L) & l_472)))) < l_514) >= g_482[2])), l_514)), (-1L))) >= l_513), l_484[2][2][1])));
                }
                else
                {
                    long long l_533 = (-1L);
                    unsigned l_534 = 4UL;
                    int *l_535[4] = {&l_493, &l_243, &l_493, &l_243};
                    unsigned ***l_543[8][3] = {{&l_542[0], &l_542[0], &l_542[0]}, {&l_542[0], &l_542[0], &l_542[0]}, {&l_542[0], &l_542[0], &l_542[0]}, {&l_542[0], &l_542[0], &l_542[0]}, {&l_542[0], &l_542[0], &l_542[0]}, {&l_542[0], &l_542[0], &l_542[0]}, {&l_542[0], &l_542[0], &l_542[0]}, {&l_542[0], &l_542[0], &l_542[0]}};
                    unsigned short *l_545 = &l_437;
                    int i, j;
                    for (g_103 = 0; (g_103 <= 3); g_103 += 1)
                    {
                        int i;
                        l_299[g_103] = p_35;
                        l_484[1][0][2] = (safe_lshift_func_int8_t_s_u((safe_mod_func_int64_t_s_s((!(safe_div_func_int64_t_s_s(l_521[7], 0xF0CCCB458B8BB484LL))), (safe_div_func_uint32_t_u_u((l_514 > l_536[4][2][4]), l_537[1])))), 5));
                    }
                    for (l_533 = 1; (l_533 >= 0); l_533 -= 1)
                    {
                        return p_35;
                    }
                    (*g_467) = (((safe_sub_func_int16_t_s_s(0L, g_73[2])) & ((l_544 = l_542[0]) == &g_342)) == ((*l_545) = (0xDDL > g_354)));
                }
                for (l_493 = 3; (l_493 >= 0); l_493 -= 1)
                {
                    char **l_547 = (void*)0;
                    char ***l_546[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_546[i] = &l_547;
                    l_548 = (void*)0;
                    for (g_354 = 0; (g_354 <= 3); g_354 += 1)
                    {
                        int i, j, k;
                        l_484[l_493][(g_354 + 3)][l_493] = (safe_add_func_uint8_t_u_u(g_482[g_413], g_203));
                        if ((*p_35))
                            continue;
                        if (l_484[l_493][(g_354 + 3)][l_493])
                            continue;
                    }
                }
            }
            l_552 = p_36;
        }
        for (g_97 = 0; (g_97 > 26); g_97 = safe_add_func_int32_t_s_s(g_97, 8))
        {
            unsigned char *l_555 = &g_352;
            const int l_558 = 0xC26A492DL;
            int l_559 = (-1L);
            char *l_560 = (void*)0;
            char *l_561 = &g_482[2];
        }
    }
    (*g_205) = &g_73[1];
    (*p_36) = (*g_194);
    return p_35;
}







static int func_40(int p_41, int p_42)
{
    unsigned l_257[8][2][2] = {{{4294967295UL, 0x9590F92BL}, {4294967295UL, 0x9590F92BL}}, {{4294967295UL, 0x9590F92BL}, {4294967295UL, 0x9590F92BL}}, {{4294967295UL, 0x9590F92BL}, {4294967295UL, 0x9590F92BL}}, {{4294967295UL, 0x9590F92BL}, {4294967295UL, 0x9590F92BL}}, {{4294967295UL, 0x9590F92BL}, {4294967295UL, 0x9590F92BL}}, {{4294967295UL, 0x9590F92BL}, {4294967295UL, 0x9590F92BL}}, {{4294967295UL, 0x9590F92BL}, {4294967295UL, 0x9590F92BL}}, {{4294967295UL, 0x9590F92BL}, {4294967295UL, 0x9590F92BL}}};
    int ***l_260 = (void*)0;
    int ***l_261 = (void*)0;
    int ****l_262[8] = {&g_204, &g_204, &g_204, &g_204, &g_204, &g_204, &g_204, &g_204};
    short *l_264 = &g_239;
    char *l_265[9] = {&g_101, &g_101, &g_101, &g_101, &g_101, &g_101, &g_101, &g_101, &g_101};
    int *l_266 = &g_249;
    int i, j, k;
    (**g_205) = func_55(((*l_266) = (safe_sub_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(g_103, 8)), ((((g_126 || (p_41 == ((l_257[4][0][1] = (p_42 <= (&g_178 == &g_178))) & ((g_101 = (safe_mul_func_int16_t_s_s(((*l_264) = (((l_260 = &g_205) != (g_263 = (g_204 = l_261))) || ((g_239 != p_41) && 1UL))), p_42))) < p_41)))) <= (**g_205)) == g_203) >= g_104)))), (*g_194), (*g_205), (**g_205));
    return p_41;
}







static unsigned func_49(unsigned p_50)
{
    const int *l_54 = &g_39;
    short *l_236 = &g_138;
    short *l_237 = (void*)0;
    short *l_238 = &g_239;
    unsigned l_240 = 0x360856D3L;
    (*g_194) = (((safe_add_func_uint16_t_u_u(g_39, (l_54 == &g_39))) && (func_55((g_6 != 1UL), (p_50 && (safe_mul_func_int8_t_s_s((safe_add_func_int64_t_s_s((safe_sub_func_int8_t_s_s((((((safe_rshift_func_int16_t_s_s(((*l_238) = ((*l_236) = ((safe_lshift_func_uint8_t_u_s(func_70(g_39), 4)) > (g_126 < g_114[3])))), 4)) == g_114[4]) || (**g_205)) <= 5L) > p_50), p_50)), p_50)), l_240))), (*g_205), p_50) < p_50)) != p_50);
    return (*l_54);
}







static const int func_55(int p_56, int p_57, int * p_58, const int p_59)
{
    return (*g_194);
}







static unsigned char func_70(unsigned short p_71)
{
    short l_72[1][1][6] = {{{5L, 4L, 5L, 4L, 5L, 4L}}};
    const int *l_80 = (void*)0;
    int *l_81[9][4][7] = {{{&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}}, {{&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}}, {{&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}}, {{&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}}, {{&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}}, {{&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}}, {{&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}}, {{&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}}, {{&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}, {&g_73[0], &g_73[0], &g_73[0], &g_73[2], &g_39, &g_73[1], &g_39}}};
    int **l_95 = &l_81[7][2][2];
    unsigned char l_165 = 0x86L;
    unsigned l_190 = 0x9ED696CBL;
    int i, j, k;
    for (g_39 = 0; g_39 < 1; g_39 += 1)
    {
        for (p_71 = 0; p_71 < 1; p_71 += 1)
        {
            for (g_73[0] = 0; g_73[0] < 6; g_73[0] += 1)
            {
                l_72[g_39][p_71][g_73[0]] = 6L;
            }
        }
    }
    g_39 = (g_73[0] = (safe_div_func_uint16_t_u_u(((safe_mod_func_uint64_t_u_u(l_72[0][0][4], l_72[0][0][2])) ^ (safe_div_func_int64_t_s_s((l_80 == l_81[7][2][3]), g_73[2]))), g_39)));
    for (g_39 = 0; (g_39 > 0); g_39++)
    {
        int *l_85[4][2] = {{&g_73[0], &g_73[0]}, {&g_73[0], &g_73[0]}, {&g_73[0], &g_73[0]}, {&g_73[0], &g_73[0]}};
        int l_127 = (-2L);
        char l_207 = 0x62L;
        long long *l_208 = (void*)0;
        int i, j;
    }
    return p_71;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_39, "g_39", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_73[i], "g_73[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_103, "g_103", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_114[i], "g_114[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_203, "g_203", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_249, "g_249", print_hash_value);
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_354, "g_354", print_hash_value);
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_413, "g_413", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_482[i], "g_482[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_790, "g_790", print_hash_value);
    transparent_crc(g_848, "g_848", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
