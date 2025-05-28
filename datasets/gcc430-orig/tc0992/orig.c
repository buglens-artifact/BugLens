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



static int g_5 = 0x4F37831EL;
static short g_11 = 0x580DL;
static int g_61[4][4][7] = {{{(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}}, {{(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}}, {{(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}}, {{(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}, {(-1L), 0x487C7592L, 0x22F747EAL, 0L, 0x0DB12629L, (-3L), (-1L)}}};
static int g_65 = 1L;
static int *g_64 = &g_65;
static int g_90 = 0x753FA0D0L;
static int * const g_89 = &g_90;
static unsigned char g_109 = 255UL;
static int g_131 = 0L;
static unsigned g_132 = 0UL;
static unsigned short g_137 = 65526UL;
static int g_163 = (-1L);
static const volatile int ***g_164 = (void*)0;
static int g_165[5] = {(-1L), 0L, (-1L), 0L, (-1L)};
static unsigned short g_171 = 0x715AL;
static int g_172[1][1][3] = {{{0xCCE82B33L, 0xCCE82B33L, 0xCCE82B33L}}};
static int **g_180 = &g_64;
static int *g_212[10][5] = {{&g_5, &g_5, &g_5, &g_65, &g_90}, {&g_5, &g_5, &g_5, &g_65, &g_90}, {&g_5, &g_5, &g_5, &g_65, &g_90}, {&g_5, &g_5, &g_5, &g_65, &g_90}, {&g_5, &g_5, &g_5, &g_65, &g_90}, {&g_5, &g_5, &g_5, &g_65, &g_90}, {&g_5, &g_5, &g_5, &g_65, &g_90}, {&g_5, &g_5, &g_5, &g_65, &g_90}, {&g_5, &g_5, &g_5, &g_65, &g_90}, {&g_5, &g_5, &g_5, &g_65, &g_90}};
static char g_216[5][9][5] = {{{0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}}, {{0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}}, {{0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}}, {{0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}}, {{0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}, {0x29L, 1L, 0x5BL, (-1L), 0x29L}}};
static unsigned char g_223 = 246UL;
static short g_249[9] = {0x21AFL, 0x21AFL, 1L, 0x21AFL, 0x21AFL, 1L, 0x21AFL, 0x21AFL, 1L};
static volatile short g_255 = 0x772FL;
static volatile unsigned char g_295[4][8][2] = {{{4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}}, {{4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}}, {{4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}}, {{4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}, {4UL, 4UL}}};
static unsigned g_301[7] = {0xFCE0573BL, 0UL, 0xFCE0573BL, 0UL, 0xFCE0573BL, 0UL, 0xFCE0573BL};
static unsigned g_358 = 0x507F7564L;
static unsigned g_412 = 0x8D35BC13L;
static int *g_427 = (void*)0;
static unsigned short * const g_439 = &g_171;
static unsigned short * const *g_438 = &g_439;
static unsigned char g_466 = 0xEBL;
static unsigned g_485 = 0x7B47903EL;
static const int g_543 = (-3L);
static unsigned g_665 = 1UL;
static unsigned *g_674 = &g_301[1];
static int ***g_702 = &g_180;
static int *g_708 = &g_61[1][1][5];
static short *g_765 = &g_11;
static int g_797 = (-8L);



static unsigned func_1(void);
static int * func_2(int * p_3);
static int * func_6(int * p_7, unsigned p_8, int * p_9, int * p_10);
static int * func_12(int * const p_13, unsigned char p_14);
static char func_17(unsigned p_18, unsigned p_19, int * p_20, short p_21);
static short func_28(int * p_29, unsigned p_30, int * p_31);
static int * func_32(int * p_33, unsigned short p_34);
static int * func_35(unsigned char p_36, short p_37, int * const p_38, int * p_39, unsigned char p_40);
static unsigned char func_41(int * p_42, int * p_43, int p_44);
static int * func_54(int ** p_55, int p_56);
static unsigned func_1(void)
{
    int *l_4[5];
    int **l_631 = &g_212[7][2];
    unsigned char l_669 = 0x28L;
    unsigned *l_675 = (void*)0;
    short l_735 = 0xBC96L;
    int *l_790 = (void*)0;
    unsigned l_809 = 4294967295UL;
    int i;
    for (i = 0; i < 5; i++)
        l_4[i] = &g_5;
    (*l_631) = func_2(l_4[0]);
    for (g_223 = 0; (g_223 <= 3); g_223 += 1)
    {
        int *l_633 = (void*)0;
        int ***l_703 = &l_631;
        int *l_704[2];
        int *l_709 = &g_90;
        int *l_728 = &g_90;
        unsigned l_729 = 0xA9638E3DL;
        unsigned short l_730 = 1UL;
        unsigned **l_787 = (void*)0;
        unsigned short ***l_808 = (void*)0;
        int l_810 = 0x1DCD9726L;
        int i;
        for (i = 0; i < 2; i++)
            l_704[i] = &g_61[1][1][5];
        if (g_249[(g_223 + 2)])
        {
            int *l_632 = &g_172[0][0][0];
            int *l_643[3];
            unsigned short *l_645[7] = {&g_171, &g_171, (void*)0, &g_171, &g_171, (void*)0, &g_171};
            unsigned short **l_644 = &l_645[5];
            int l_671 = (-7L);
            int i;
            for (i = 0; i < 3; i++)
                l_643[i] = &g_131;
            l_633 = l_632;
            if (((*l_633) = ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s((func_28(&g_90, g_249[(g_223 + 3)], &g_5) < (safe_mul_func_uint8_t_u_u((((**g_438) || func_17((safe_lshift_func_int16_t_s_u((*l_632), (safe_sub_func_uint32_t_u_u((*l_632), (*l_632))))), g_172[0][0][1], l_643[0], g_543)) || (*l_633)), g_412))))), g_90)) || (-4L))))
            {
                unsigned char l_653[7][3] = {{0xCDL, 255UL, 0xCDL}, {0xCDL, 255UL, 0xCDL}, {0xCDL, 255UL, 0xCDL}, {0xCDL, 255UL, 0xCDL}, {0xCDL, 255UL, 0xCDL}, {0xCDL, 255UL, 0xCDL}, {0xCDL, 255UL, 0xCDL}};
                int **l_662 = &g_64;
                unsigned *l_666 = &g_301[4];
                int i, j;
                for (g_358 = 3; (g_358 <= 8); g_358 += 1)
                {
                    unsigned short ***l_646 = &l_644;
                    int *l_647 = &g_90;
                    (*l_646) = l_644;
                    for (g_65 = 3; (g_65 >= 0); g_65 -= 1)
                    {
                        int i, j, k;
                        if (g_61[g_223][g_65][(g_223 + 2)])
                            break;
                        (*l_631) = l_647;
                    }
                    for (g_90 = 8; (g_90 >= 2); g_90 -= 1)
                    {
                        unsigned char ***l_652 = (void*)0;
                        int i, j, k;
                        g_61[g_223][g_223][g_223] = (safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(0x0421BE90L, func_28(l_633, ((void*)0 != l_652), l_643[1]))), 1));
                        return l_653[1][1];
                    }
                }
                g_131 ^= ((safe_sub_func_uint8_t_u_u(((((*g_89) = (*g_89)) || ((g_412 = ((*l_666) = (safe_rshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((g_249[(g_223 + 5)] = ((g_295[1][2][0] < g_132) ^ func_41(((*l_631) = func_54(l_662, (*l_633))), &g_172[0][0][2], (safe_mod_func_int32_t_s_s((~g_665), (--(*l_666))))))), g_165[1])), (*l_633))), 4)))) & (*l_633))) & 252UL), l_669)) <= 6L);
            }
            else
            {
                int l_670 = 0L;
                for (g_132 = 0; (g_132 <= 1); g_132 += 1)
                {
                    return l_670;
                }
                return g_65;
            }
            (*g_89) = ((*l_633) = l_671);
        }
        else
        {
            short l_672 = 0xE9FEL;
            int *l_673 = &g_61[1][1][5];
            (*g_89) = l_672;
            (*l_631) = l_673;
        }
        if (((&g_301[3] == (l_675 = g_674)) && (**g_438)))
        {
            char l_676 = 1L;
            int l_683 = 0L;
            unsigned short *l_688[1][7][8] = {{{(void*)0, &g_137, &g_137, &g_137, (void*)0, &g_137, (void*)0, &g_137}, {(void*)0, &g_137, &g_137, &g_137, (void*)0, &g_137, (void*)0, &g_137}, {(void*)0, &g_137, &g_137, &g_137, (void*)0, &g_137, (void*)0, &g_137}, {(void*)0, &g_137, &g_137, &g_137, (void*)0, &g_137, (void*)0, &g_137}, {(void*)0, &g_137, &g_137, &g_137, (void*)0, &g_137, (void*)0, &g_137}, {(void*)0, &g_137, &g_137, &g_137, (void*)0, &g_137, (void*)0, &g_137}, {(void*)0, &g_137, &g_137, &g_137, (void*)0, &g_137, (void*)0, &g_137}}};
            unsigned *l_691 = &g_358;
            int l_733[10] = {(-1L), (-1L), 5L, (-1L), (-1L), 5L, (-1L), (-1L), 5L, (-1L)};
            unsigned char l_739 = 0xC8L;
            int *l_761 = (void*)0;
            int *l_766 = (void*)0;
            int *l_783 = &g_5;
            int i, j, k;
            (*g_89) |= (l_676 & (4294967295UL > l_676));
            l_683 ^= (safe_mul_func_uint8_t_u_u(g_165[2], (safe_sub_func_int32_t_s_s(((*g_89) = (safe_rshift_func_uint16_t_u_s(g_249[(g_223 + 2)], g_171))), (*g_674)))));
            if ((safe_mod_func_int8_t_s_s((((l_676 == (((void*)0 != &l_675) <= (safe_div_func_int32_t_s_s((g_301[5] & (l_683 = ((*g_439) = (*g_439)))), (safe_lshift_func_uint8_t_u_s(1UL, 5)))))) | (func_17(((*l_691) = (0x5572E52BL || 0x1A8AB41CL)), (safe_sub_func_int32_t_s_s(l_676, (*g_674))), &g_131, g_249[3]) >= g_165[1])) > g_301[0]), g_665)))
            {
                int l_699 = 0x92CFB042L;
                int ***l_701 = (void*)0;
                int ****l_700[6] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
                unsigned char *l_707 = &l_669;
                unsigned l_710[8] = {0UL, 1UL, 0UL, 1UL, 0UL, 1UL, 0UL, 1UL};
                int *l_723 = &g_172[0][0][0];
                char l_732[6] = {0x4BL, 0xD4L, 0x4BL, 0xD4L, 0x4BL, 0xD4L};
                char l_742 = (-8L);
                unsigned short l_743 = 0UL;
                volatile unsigned char l_746[8][5] = {{248UL, 0xE2L, 2UL, 2UL, 0xE2L}, {248UL, 0xE2L, 2UL, 2UL, 0xE2L}, {248UL, 0xE2L, 2UL, 2UL, 0xE2L}, {248UL, 0xE2L, 2UL, 2UL, 0xE2L}, {248UL, 0xE2L, 2UL, 2UL, 0xE2L}, {248UL, 0xE2L, 2UL, 2UL, 0xE2L}, {248UL, 0xE2L, 2UL, 2UL, 0xE2L}, {248UL, 0xE2L, 2UL, 2UL, 0xE2L}};
                int i, j;
                (*l_631) = &l_683;
                (**l_703) = &l_683;
                for (g_485 = 0; (g_485 <= 1); g_485 += 1)
                {
                    unsigned l_726[5];
                    char *l_727 = &g_216[1][5][4];
                    int l_731 = 0xC31321D1L;
                    int l_734 = 0xE2102B63L;
                    int l_738[6][6] = {{4L, 0xEA80FE72L, (-1L), (-1L), (-1L), (-1L)}, {4L, 0xEA80FE72L, (-1L), (-1L), (-1L), (-1L)}, {4L, 0xEA80FE72L, (-1L), (-1L), (-1L), (-1L)}, {4L, 0xEA80FE72L, (-1L), (-1L), (-1L), (-1L)}, {4L, 0xEA80FE72L, (-1L), (-1L), (-1L), (-1L)}, {4L, 0xEA80FE72L, (-1L), (-1L), (-1L), (-1L)}};
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_726[i] = 0xA7DADFDAL;
                    l_730 &= (l_676 < (safe_sub_func_uint32_t_u_u(func_17((safe_rshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(l_676, l_676)), (safe_sub_func_int16_t_s_s((~(func_28(l_723, (((*l_727) = (safe_div_func_int16_t_s_s(l_726[4], ((l_683 < 0x79L) | func_17(g_61[1][1][5], g_358, &g_61[1][1][5], l_726[3]))))) | 0x75L), l_728) >= 0x00L)), g_223)))), 15)), g_132, &g_65, g_543), l_729)));
                    for (g_132 = 0; (g_132 <= 1); g_132 += 1)
                    {
                        int l_736 = 0xB2C13B13L;
                        int l_737 = 0x76F421DFL;
                        int i, j, k;
                        if (g_295[g_132][(g_485 + 5)][g_132])
                            break;
                        ++l_739;
                        --l_743;
                        l_746[6][0] = g_295[(g_132 + 2)][(g_132 + 6)][g_132];
                    }
                }
                for (g_11 = 0; (g_11 != 21); g_11++)
                {
                    unsigned char l_753[6] = {7UL, 7UL, 0x6DL, 7UL, 7UL, 0x6DL};
                    int l_756 = 0xB40524EFL;
                    int i;
                    for (g_171 = 0; (g_171 <= 5); g_171 += 1)
                    {
                        int i;
                        (*l_631) = func_12(&l_733[5], l_732[g_171]);
                        (*l_709) = ((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(l_753[2], (g_137 = ((void*)0 == &g_5)))), (safe_lshift_func_uint16_t_u_s(0x6FDEL, 12)))) ^ ((*g_439) & (g_163 && (0x70E7C518L < (g_90 && (**g_438))))));
                        l_756 = l_753[2];
                    }
                }
            }
            else
            {
                int l_757[7] = {(-1L), (-1L), 0xBC247BD4L, (-1L), (-1L), 0xBC247BD4L, (-1L)};
                int **l_758 = &l_633;
                short **l_764[6];
                int *l_784[9][3] = {{&g_65, &g_61[1][1][5], &g_5}, {&g_65, &g_61[1][1][5], &g_5}, {&g_65, &g_61[1][1][5], &g_5}, {&g_65, &g_61[1][1][5], &g_5}, {&g_65, &g_61[1][1][5], &g_5}, {&g_65, &g_61[1][1][5], &g_5}, {&g_65, &g_61[1][1][5], &g_5}, {&g_65, &g_61[1][1][5], &g_5}, {&g_65, &g_61[1][1][5], &g_5}};
                int i, j;
                for (i = 0; i < 6; i++)
                    l_764[i] = (void*)0;
                (*g_89) = func_17(l_757[3], func_28((*l_758), g_165[2], &l_733[8]), (*l_758), (*l_709));
                if (func_17(((*l_691)++), g_249[3], &g_90, (*g_765)))
                {
                    unsigned l_769 = 1UL;
                    unsigned char l_781 = 0xBAL;
                    int l_782[8][4] = {{8L, 8L, (-1L), 8L}, {8L, 8L, (-1L), 8L}, {8L, 8L, (-1L), 8L}, {8L, 8L, (-1L), 8L}, {8L, 8L, (-1L), 8L}, {8L, 8L, (-1L), 8L}, {8L, 8L, (-1L), 8L}, {8L, 8L, (-1L), 8L}};
                    int i, j;
                    if ((safe_div_func_uint16_t_u_u(l_769, 0x4097L)))
                    {
                        int * const l_770 = &l_733[6];
                        int **l_771 = &g_64;
                        unsigned char *l_780 = (void*)0;
                        (*l_771) = l_770;
                        l_782[7][2] = ((*g_674) > (safe_rshift_func_uint8_t_u_s((l_781 = func_41(&l_733[6], ((**l_703) = &l_683), (*l_770))), l_769)));
                        (*g_708) |= (*l_770);
                        if ((*g_708))
                            continue;
                    }
                    else
                    {
                        (**l_703) = &l_733[0];
                        (*l_758) = ((*l_631) = l_783);
                        (*l_783) &= func_28((*l_758), g_61[1][1][5], l_784[7][2]);
                    }
                    if ((*g_708))
                        continue;
                    if (l_782[7][2])
                        continue;
                    return g_65;
                }
                else
                {
                    for (g_412 = 0; (g_412 <= 0); g_412 += 1)
                    {
                        (*g_708) &= (g_466 & g_255);
                    }
                }
            }
            (*l_728) = (safe_add_func_uint16_t_u_u((*g_439), (&g_674 == l_787)));
        }
        else
        {
            unsigned short *l_795 = (void*)0;
            int l_800 = 1L;
            for (l_730 = 0; l_730 < 10; l_730 += 1)
            {
                for (l_669 = 0; l_669 < 5; l_669 += 1)
                {
                    g_212[l_730][l_669] = &g_90;
                }
            }
            for (g_137 = 0; (g_137 != 36); ++g_137)
            {
                unsigned short *l_794 = &g_171;
                unsigned short **l_793 = &l_794;
                unsigned char *l_796[5] = {&l_669, &g_109, &l_669, &g_109, &l_669};
                int i;
                (*l_728) ^= 0L;
                (**l_703) = l_790;
                (*l_728) = (0x605EL & (safe_div_func_uint8_t_u_u((g_797 = (((*l_793) = &g_171) != l_795)), g_295[2][1][0])));
                for (g_412 = 25; (g_412 > 30); g_412 = safe_add_func_int16_t_s_s(g_412, 1))
                {
                    (*l_728) = l_800;
                }
            }
            for (l_730 = 0; (l_730 <= 24); l_730 = safe_add_func_int32_t_s_s(l_730, 3))
            {
                (*l_709) = ((*g_439) & ((*g_765) && l_800));
            }
        }
        (*g_89) |= ((((+1L) <= ((*g_708) | 0L)) > (*g_674)) == ((l_810 = (safe_lshift_func_int8_t_s_s(((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint8_t_u(((&g_438 != l_808) >= (l_703 != (void*)0)))), func_17(g_171, l_809, l_790, (*g_765)))) < (*g_674)), g_165[4]))) != (*g_674)));
    }
    (*g_89) &= ((&g_765 == &g_765) ^ g_255);
    (*l_631) = func_54(&g_212[5][0], (*g_708));
    return g_358;
}







static int * func_2(int * p_3)
{
    int * const l_15 = &g_5;
    int *l_45 = &g_5;
    int **l_46 = &l_45;
    int *l_91 = (void*)0;
    int l_429[2];
    const int **l_540 = (void*)0;
    const int *l_542 = &g_543;
    const int **l_541 = &l_542;
    const int *l_545[5] = {(void*)0, &g_543, (void*)0, &g_543, (void*)0};
    const int **l_544 = &l_545[0];
    int *l_546 = &g_61[2][2][5];
    unsigned char l_564 = 1UL;
    unsigned short l_585[10] = {6UL, 6UL, 65526UL, 6UL, 6UL, 65526UL, 6UL, 6UL, 65526UL, 6UL};
    short *l_590 = &g_249[3];
    int i;
    for (i = 0; i < 2; i++)
        l_429[i] = (-6L);
    (*l_544) = ((*l_541) = func_6(p_3, g_11, ((*l_46) = func_12(l_15, (safe_unary_minus_func_int8_t_s(func_17((((safe_mod_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(0x3B37L, (((safe_div_func_uint32_t_u_u(0xD0E75D5FL, g_11)) >= func_28(func_32(p_3, (l_15 != ((*l_46) = func_35(func_41(((*l_46) = l_45), p_3, g_5), g_11, g_89, l_91, g_90)))), g_412, g_427)) ^ g_301[2]))), g_412)) > 0x26L) || 0x7BD9L), l_429[1], g_427, g_358))))), p_3));
    (*l_544) = l_546;
    (*l_541) = (*l_541);
    for (g_11 = 0; (g_11 > (-20)); g_11 = safe_sub_func_uint32_t_u_u(g_11, 3))
    {
        char l_560 = 0xDCL;
        int l_561 = (-3L);
        int l_562 = (-3L);
        int l_563 = 0xD2CE9985L;
        unsigned char *l_609 = &g_223;
        unsigned char **l_608 = &l_609;
        for (g_5 = 3; (g_5 != 6); g_5 = safe_add_func_int8_t_s_s(g_5, 3))
        {
            int *l_551 = &l_429[0];
            int *l_552 = &l_429[1];
            int *l_553 = &l_429[1];
            int *l_554 = &l_429[0];
            int *l_555 = &g_61[2][0][4];
            int *l_556 = &g_61[1][1][5];
            int *l_557 = &l_429[1];
            int *l_558 = (void*)0;
            int *l_559[1][8] = {{&g_172[0][0][0], (void*)0, &g_172[0][0][0], (void*)0, &g_172[0][0][0], (void*)0, &g_172[0][0][0], (void*)0}};
            unsigned l_594 = 0x60A387B7L;
            short l_621[5][10] = {{0xAF9DL, 1L, 0x0183L, 1L, 1L, 0xD7CFL, 1L, 1L, 0x0183L, 1L}, {0xAF9DL, 1L, 0x0183L, 1L, 1L, 0xD7CFL, 1L, 1L, 0x0183L, 1L}, {0xAF9DL, 1L, 0x0183L, 1L, 1L, 0xD7CFL, 1L, 1L, 0x0183L, 1L}, {0xAF9DL, 1L, 0x0183L, 1L, 1L, 0xD7CFL, 1L, 1L, 0x0183L, 1L}, {0xAF9DL, 1L, 0x0183L, 1L, 1L, 0xD7CFL, 1L, 1L, 0x0183L, 1L}};
            int i, j;
            l_564--;
            if (l_563)
            {
                int l_567 = (-1L);
                int l_568 = 0x338FAFEEL;
                unsigned char l_569[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_569[i] = 0UL;
                --l_569[0];
            }
            else
            {
                return p_3;
            }
            if (func_28(func_54(&g_64, (*l_45)), (**l_541), &l_561))
            {
                unsigned short l_572 = 0x507BL;
                int *l_579 = &l_429[0];
                short l_592 = 0x03FDL;
                if (func_17((*l_556), l_572, p_3, ((*l_557) = (safe_add_func_uint16_t_u_u(l_572, (+(safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((((l_562 || func_17(g_255, (&g_163 == l_555), p_3, l_572)) | g_172[0][0][0]) && (-10L)), 7)), (*g_439)))))))))
                {
                    return p_3;
                }
                else
                {
                    char l_582[2][7][4] = {{{0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}}, {{0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}, {0xBBL, 0x70L, 0xFEL, 0x8CL}}};
                    int ***l_591 = &l_46;
                    int **l_593 = &g_212[5][0];
                    int i, j, k;
                    (*l_555) = ((((*g_439) = (safe_rshift_func_int8_t_s_s(l_582[1][1][3], (l_562 < (**l_541))))) <= (~(((func_17((l_585[4] | ((safe_rshift_func_uint16_t_u_s(l_562, 9)) != 8UL)), (func_17((safe_mod_func_int16_t_s_s(((void*)0 != l_590), (+(((*l_593) = (g_427 = func_54(((*l_591) = &g_212[0][3]), l_592))) == &g_543)))), l_594, &l_429[1], (*l_579)) & 0xD3FCL), &g_172[0][0][0], g_172[0][0][0]) | (*l_579)) || 0x029EL) || (*l_546)))) >= 0L);
                }
                for (l_592 = (-3); (l_592 <= (-14)); l_592 = safe_sub_func_uint8_t_u_u(l_592, 1))
                {
                    unsigned char **l_606 = (void*)0;
                    unsigned char ***l_607 = &l_606;
                    int l_622 = 0L;
                    char *l_623[3];
                    int *l_625[1];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_623[i] = (void*)0;
                    for (i = 0; i < 1; i++)
                        l_625[i] = &l_429[1];
                    (*l_46) = l_579;
                    for (g_65 = 0; (g_65 < 0); g_65 = safe_add_func_int32_t_s_s(g_65, 1))
                    {
                        const int *l_599 = &l_562;
                        (*l_544) = l_599;
                    }
                    if ((*p_3))
                        break;
                    if (func_17((((**l_541) <= ((*l_579) = (safe_mod_func_int32_t_s_s((0xD145L < (safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((((*l_607) = l_606) != l_608) > (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((((*p_3) > (p_3 != p_3)) > (l_561 & (safe_unary_minus_func_int8_t_s(func_17(((*l_579) & l_621[2][5]), g_216[4][7][1], p_3, l_562))))), l_622)), (*l_579))), g_295[1][4][0])), g_466)), (*l_579)))), (*l_551))), (*l_579)))), g_163)))) || g_61[3][0][0]), (*l_15), l_559[0][6], g_61[1][1][5]))
                    {
                        int *l_624 = &g_65;
                        return l_624;
                    }
                    else
                    {
                        (*g_89) ^= (*p_3);
                        l_625[0] = p_3;
                    }
                }
            }
            else
            {
                for (g_163 = (-3); (g_163 > 17); g_163 = safe_add_func_int16_t_s_s(g_163, 3))
                {
                    int *l_630[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_630[i] = &l_561;
                    for (l_561 = 12; (l_561 > 5); l_561 = safe_sub_func_uint8_t_u_u(l_561, 7))
                    {
                        (*l_544) = l_559[0][5];
                    }
                    return p_3;
                }
            }
        }
        (*l_541) = func_12(p_3, l_560);
        return &g_131;
    }
    return p_3;
}







static int * func_6(int * p_7, unsigned p_8, int * p_9, int * p_10)
{
    char l_443 = 0L;
    int l_451 = 0x331975ABL;
    int l_452[3][8][6] = {{{9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}}, {{9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}}, {{9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}, {9L, 0x72FB0342L, 0x152A88D4L, (-1L), (-1L), 0x05E0FE0EL}}};
    unsigned short *l_503 = &g_137;
    int **l_516 = (void*)0;
    const unsigned *l_534[5] = {&g_301[1], &g_132, &g_301[1], &g_132, &g_301[1]};
    const unsigned **l_533 = &l_534[0];
    int i, j, k;
    (*p_10) |= 6L;
    for (g_131 = 0; (g_131 == (-7)); --g_131)
    {
        int *l_444 = &g_172[0][0][0];
        int *l_445 = &g_61[1][1][5];
        int *l_446 = &g_61[1][2][6];
        int *l_447 = (void*)0;
        int l_448 = 0x6EE0FD75L;
        int *l_449 = &g_5;
        int *l_450[1];
        unsigned l_453[2];
        int **l_529 = &g_212[5][0];
        int i;
        for (i = 0; i < 1; i++)
            l_450[i] = &g_61[1][1][5];
        for (i = 0; i < 2; i++)
            l_453[i] = 0xA23D7ACFL;
        l_453[1]++;
        if ((*g_89))
            break;
        for (g_137 = 0; (g_137 <= 4); g_137 += 1)
        {
            unsigned l_460[6] = {4294967293UL, 4294967293UL, 0xC49C0D10L, 4294967293UL, 4294967293UL, 0xC49C0D10L};
            int l_472 = 0x82250481L;
            char l_473 = 0xFEL;
            int l_475 = (-6L);
            unsigned char *l_504 = &g_466;
            int ***l_505 = &g_180;
            int ***l_506 = &g_180;
            int ***l_507 = &g_180;
            int ***l_508 = &g_180;
            int ***l_509 = &g_180;
            int ***l_510 = &g_180;
            int ***l_511 = &g_180;
            int ***l_512 = &g_180;
            int ***l_513 = &g_180;
            int ***l_514 = &g_180;
            int ***l_515[7];
            int i;
            for (i = 0; i < 7; i++)
                l_515[i] = &g_180;
            for (g_5 = 3; (g_5 >= 0); g_5 -= 1)
            {
                short l_459 = (-1L);
                int **l_463 = &g_212[5][0];
                for (g_163 = 3; (g_163 >= 0); g_163 -= 1)
                {
                    unsigned char l_456 = 0xAFL;
                    for (g_171 = 1; (g_171 <= 4); g_171 += 1)
                    {
                        int i, j, k;
                        g_61[g_5][g_163][g_163] |= (g_165[g_171] == g_165[g_171]);
                    }
                    for (p_8 = 0; (p_8 <= 3); p_8 += 1)
                    {
                        int i, j, k;
                        g_61[p_8][p_8][g_137] |= g_165[(p_8 + 1)];
                        l_456--;
                    }
                    for (p_8 = 0; (p_8 <= 3); p_8 += 1)
                    {
                        int i, j, k;
                        l_460[0]++;
                        g_212[5][0] = func_54(&g_64, g_165[(p_8 + 1)]);
                        if (g_61[g_163][g_163][(g_163 + 3)])
                            break;
                    }
                }
                l_445 = p_7;
                (*l_463) = p_7;
                for (g_163 = 3; (g_163 >= 0); g_163 -= 1)
                {
                    int i;
                    (*l_444) |= (l_460[g_137] != func_28((p_10 = p_7), g_249[g_5], &l_451));
                }
            }
            for (g_412 = 0; g_412 < 1; g_412 += 1)
            {
                l_450[g_412] = &g_5;
            }
            for (g_132 = 0; (g_132 <= 4); g_132 += 1)
            {
                unsigned short l_491 = 65531UL;
                short l_494 = 0x351BL;
                int l_495 = 0xF8CBD84AL;
                int l_496 = (-1L);
                int l_497[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_497[i] = (-6L);
                for (p_8 = 0; (p_8 <= 4); p_8 += 1)
                {
                    unsigned *l_467 = (void*)0;
                    unsigned *l_468 = &l_453[1];
                    int l_469 = 3L;
                    int l_470 = 5L;
                    int l_471[7][5] = {{0x47A01228L, 0x6329F8CBL, 0x1133F69EL, 0xDB6210E3L, 0L}, {0x47A01228L, 0x6329F8CBL, 0x1133F69EL, 0xDB6210E3L, 0L}, {0x47A01228L, 0x6329F8CBL, 0x1133F69EL, 0xDB6210E3L, 0L}, {0x47A01228L, 0x6329F8CBL, 0x1133F69EL, 0xDB6210E3L, 0L}, {0x47A01228L, 0x6329F8CBL, 0x1133F69EL, 0xDB6210E3L, 0L}, {0x47A01228L, 0x6329F8CBL, 0x1133F69EL, 0xDB6210E3L, 0L}, {0x47A01228L, 0x6329F8CBL, 0x1133F69EL, 0xDB6210E3L, 0L}};
                    unsigned short l_476 = 0xC77FL;
                    int l_492 = 0xFA648F9AL;
                    int i, j;
                    l_469 |= ((*g_89) = (g_301[1] & (((*l_468) = (safe_lshift_func_int16_t_s_u((-7L), g_466))) && (g_132 | (*p_10)))));
                    if ((*p_9))
                    {
                        short l_474[9][7][4] = {{{4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}}, {{4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}}, {{4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}}, {{4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}}, {{4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}}, {{4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}}, {{4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}}, {{4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}}, {{4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}, {4L, (-1L), 1L, 0x68A8L}}};
                        unsigned *l_481 = &g_358;
                        unsigned *l_484 = &g_485;
                        int i, j, k;
                        --l_476;
                        (*l_449) = (g_61[1][1][5] || ((func_17(((*l_484) = ((*l_481)++)), (func_17(g_132, p_8, l_484, g_216[1][7][3]) != func_17((safe_rshift_func_int8_t_s_s((!p_8), p_8)), l_475, &l_469, g_171)), p_9, l_471[0][3]) != (-8L)) <= 0x4BE0L));
                    }
                    else
                    {
                        unsigned char *l_489 = &g_466;
                        unsigned char * const *l_488 = &l_489;
                        unsigned char * const **l_490 = &l_488;
                        int l_493 = (-1L);
                        unsigned l_498 = 0xA3DC266BL;
                        (*l_490) = l_488;
                        if (l_491)
                            continue;
                        l_498--;
                    }
                }
            }
            (*p_9) = (((p_8 <= (safe_lshift_func_int16_t_s_u(p_8, 6))) < ((l_503 != (void*)0) || (((*l_504) = 8UL) || g_90))) == ((l_516 = &g_212[5][0]) != &g_212[4][0]));
        }
        for (g_171 = 0; (g_171 <= 4); g_171 += 1)
        {
            int l_538[8] = {0xB371B30BL, 0xB371B30BL, 0x4D662F79L, 0xB371B30BL, 0xB371B30BL, 0x4D662F79L, 0xB371B30BL, 0xB371B30BL};
            int i;
            for (l_451 = 1; (l_451 <= 4); l_451 += 1)
            {
                unsigned char l_530 = 9UL;
                int *l_539 = &g_172[0][0][0];
                for (g_5 = 2; (g_5 >= 0); g_5 -= 1)
                {
                    int ***l_527 = &g_180;
                    int ***l_528[5][9] = {{&g_180, &l_516, (void*)0, (void*)0, &l_516, &g_180, &l_516, (void*)0, (void*)0}, {&g_180, &l_516, (void*)0, (void*)0, &l_516, &g_180, &l_516, (void*)0, (void*)0}, {&g_180, &l_516, (void*)0, (void*)0, &l_516, &g_180, &l_516, (void*)0, (void*)0}, {&g_180, &l_516, (void*)0, (void*)0, &l_516, &g_180, &l_516, (void*)0, (void*)0}, {&g_180, &l_516, (void*)0, (void*)0, &l_516, &g_180, &l_516, (void*)0, (void*)0}};
                    int i, j, k;
                    if ((safe_sub_func_uint16_t_u_u(g_301[(l_451 + 2)], (((safe_lshift_func_int16_t_s_s(((void*)0 == &l_452[g_5][(g_171 + 2)][(l_451 + 1)]), ((safe_add_func_int16_t_s_s((((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((l_452[g_5][(g_171 + 3)][(g_171 + 1)] | (((l_529 = &p_7) != &p_10) & l_530)), g_11)), (((void*)0 != &g_212[5][0]) ^ p_8))) < p_8) && g_61[1][1][5]), (*g_439))) == g_132))) >= (*p_7)) > l_530))))
                    {
                        const unsigned **l_535 = &l_534[3];
                        int i, j, k;
                        l_452[g_5][(g_5 + 1)][(g_171 + 1)] = (safe_rshift_func_int16_t_s_u(((void*)0 == &g_216[4][0][3]), 3));
                        l_535 = l_533;
                        if ((*l_445))
                            continue;
                    }
                    else
                    {
                        int i, j;
                        g_212[(g_171 + 4)][g_171] = (void*)0;
                        (*p_9) = (g_131 & ((*g_89) = (safe_add_func_uint8_t_u_u(func_28(p_7, l_538[4], l_539), p_8))));
                    }
                    (*l_529) = (void*)0;
                    return p_10;
                }
            }
        }
    }
    return p_7;
}







static int * func_12(int * const p_13, unsigned char p_14)
{
    int **l_433 = (void*)0;
    int **l_434 = &g_212[5][0];
    unsigned short *l_437 = &g_137;
    int l_440 = (-8L);
    (*l_434) = &g_61[1][1][5];
    l_440 = (((safe_mod_func_int16_t_s_s(p_14, ((*l_437) = 0x71CDL))) >= ((*p_13) = (&l_437 == g_438))) >= (g_255 > g_90));
    return &g_172[0][0][0];
}







static char func_17(unsigned p_18, unsigned p_19, int * p_20, short p_21)
{
    int l_432[6];
    int i;
    for (i = 0; i < 6; i++)
        l_432[i] = 8L;
    l_432[3] = (safe_div_func_int8_t_s_s(l_432[3], l_432[3]));
    return g_165[3];
}







static short func_28(int * p_29, unsigned p_30, int * p_31)
{
    int **l_428[5][9] = {{&g_427, &g_427, &g_427, &g_212[4][2], &g_427, &g_64, &g_427, &g_212[4][2], &g_427}, {&g_427, &g_427, &g_427, &g_212[4][2], &g_427, &g_64, &g_427, &g_212[4][2], &g_427}, {&g_427, &g_427, &g_427, &g_212[4][2], &g_427, &g_64, &g_427, &g_212[4][2], &g_427}, {&g_427, &g_427, &g_427, &g_212[4][2], &g_427, &g_64, &g_427, &g_212[4][2], &g_427}, {&g_427, &g_427, &g_427, &g_212[4][2], &g_427, &g_64, &g_427, &g_212[4][2], &g_427}};
    int i, j;
    p_31 = func_54(l_428[0][2], (*g_89));
    return p_30;
}







static int * func_32(int * p_33, unsigned short p_34)
{
    int **l_207 = &g_64;
    int **l_208 = &g_64;
    int **l_209 = &g_64;
    int **l_210 = &g_64;
    int **l_211[1];
    int l_227[2];
    unsigned short l_264[7] = {65535UL, 65535UL, 65526UL, 65535UL, 65535UL, 65526UL, 65535UL};
    short l_287 = 0L;
    int l_288 = 1L;
    int l_375 = (-1L);
    unsigned l_387 = 0x7518B554L;
    const char l_405 = 5L;
    unsigned char *l_423[5];
    unsigned char l_424 = 0x74L;
    int i;
    for (i = 0; i < 1; i++)
        l_211[i] = &g_64;
    for (i = 0; i < 2; i++)
        l_227[i] = 1L;
    for (i = 0; i < 5; i++)
        l_423[i] = &g_223;
    if ((safe_rshift_func_int8_t_s_s(((p_33 = p_33) != (g_212[5][0] = &g_90)), (g_137 | ((*g_89) != 4294967295UL)))))
    {
        char *l_215 = &g_216[1][7][3];
        int l_229 = 0xE6548DDAL;
        int *l_256 = &g_65;
        int l_258[8] = {(-8L), (-8L), 1L, (-8L), (-8L), 1L, (-8L), (-8L)};
        unsigned char l_289 = 255UL;
        int i;
        for (g_5 = 0; (g_5 <= 4); g_5 += 1)
        {
            unsigned char *l_217 = (void*)0;
            unsigned char *l_218 = &g_109;
            unsigned char *l_221 = (void*)0;
            unsigned char *l_222 = &g_223;
            int l_228 = 0x2924E2C5L;
            int l_231 = 0x5CEED9E4L;
            unsigned char l_251 = 8UL;
            int l_257 = 0L;
            int l_260 = 0x0803622AL;
            int l_261 = 0x67061903L;
            int l_262[7];
            unsigned char l_278[8] = {0x08L, 251UL, 0x08L, 251UL, 0x08L, 251UL, 0x08L, 251UL};
            int i;
            for (i = 0; i < 7; i++)
                l_262[i] = 0x5255962FL;
            if (((*g_89) |= ((safe_add_func_int16_t_s_s((((*l_218) = (l_215 == l_215)) || g_165[g_5]), (g_165[g_5] <= (safe_mul_func_int8_t_s_s((-1L), ((*l_222) ^= 0x7EL)))))) || (p_33 != p_33))))
            {
                unsigned *l_224 = &g_132;
                int l_230 = (-1L);
                int l_232 = (-1L);
                unsigned l_233[3][5][2] = {{{18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}}, {{18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}}, {{18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}, {18446744073709551615UL, 0xD32D8AEBL}}};
                int i, j, k;
                l_227[0] &= (((0UL < g_11) | g_165[g_5]) || (~((*l_224)++)));
                l_233[0][3][0]++;
                if ((*p_33))
                    continue;
            }
            else
            {
                int *l_247 = &g_165[1];
                int l_259[2][4][3] = {{{(-1L), 0x262F6BA7L, (-1L)}, {(-1L), 0x262F6BA7L, (-1L)}, {(-1L), 0x262F6BA7L, (-1L)}, {(-1L), 0x262F6BA7L, (-1L)}}, {{(-1L), 0x262F6BA7L, (-1L)}, {(-1L), 0x262F6BA7L, (-1L)}, {(-1L), 0x262F6BA7L, (-1L)}, {(-1L), 0x262F6BA7L, (-1L)}}};
                int l_263 = 0x88981969L;
                short *l_275 = &g_249[3];
                int i, j, k;
                if ((l_231 &= (1UL != ((*l_215) = g_132))))
                {
                    unsigned short l_246 = 0xB8C2L;
                    if ((*p_33))
                    {
                        unsigned char l_238 = 0UL;
                        short *l_248 = &g_249[3];
                        unsigned short *l_250 = &g_137;
                        l_229 &= (p_34 && ((safe_rshift_func_int16_t_s_u(l_238, (g_165[1] > (safe_unary_minus_func_int32_t_s((((*l_250) = ((safe_lshift_func_int8_t_s_u((-1L), p_34)) & (safe_rshift_func_int8_t_s_s(((*l_215) = (safe_div_func_uint8_t_u_u(((g_137 || ((*l_248) ^= (l_246 >= ((*g_89) = (((l_247 == l_247) | l_246) && p_34))))) == 0x8BL), l_246))), l_246)))) || l_228)))))) == g_223));
                        ++l_251;
                        if ((*p_33))
                            break;
                    }
                    else
                    {
                        int *l_254 = &g_131;
                        l_254 = p_33;
                    }
                }
                else
                {
                    if (g_255)
                        break;
                    (*l_209) = l_256;
                    (*l_209) = (*l_210);
                }
                l_264[6]--;
                (*l_256) = (safe_div_func_uint8_t_u_u((~((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(((*l_222) = p_34), (safe_add_func_int16_t_s_s(((*l_275) = ((g_11 > 1L) >= (0xB401L || ((p_33 = p_33) == &l_259[0][1][0])))), 0x2B68L)))), (safe_add_func_int16_t_s_s(g_109, p_34)))) <= p_34)), g_216[2][2][4]));
                ++l_278[4];
            }
            for (g_163 = 3; (g_163 == 19); ++g_163)
            {
                return &g_90;
            }
            (*l_256) |= (safe_rshift_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(0x70C51F59L, (*p_33))), 2));
        }
        l_256 = ((*l_207) = &g_61[1][1][5]);
        ++l_289;
        (**l_210) &= (*p_33);
    }
    else
    {
        unsigned char l_302 = 255UL;
        int l_314[7][1][6] = {{{0L, (-8L), 0xF3C083DEL, 0xC69F4B6FL, 0xC69F4B6FL, 0xF3C083DEL}}, {{0L, (-8L), 0xF3C083DEL, 0xC69F4B6FL, 0xC69F4B6FL, 0xF3C083DEL}}, {{0L, (-8L), 0xF3C083DEL, 0xC69F4B6FL, 0xC69F4B6FL, 0xF3C083DEL}}, {{0L, (-8L), 0xF3C083DEL, 0xC69F4B6FL, 0xC69F4B6FL, 0xF3C083DEL}}, {{0L, (-8L), 0xF3C083DEL, 0xC69F4B6FL, 0xC69F4B6FL, 0xF3C083DEL}}, {{0L, (-8L), 0xF3C083DEL, 0xC69F4B6FL, 0xC69F4B6FL, 0xF3C083DEL}}, {{0L, (-8L), 0xF3C083DEL, 0xC69F4B6FL, 0xC69F4B6FL, 0xF3C083DEL}}};
        unsigned *l_398 = &g_301[6];
        unsigned short *l_408 = &l_264[6];
        int *l_417 = &g_65;
        int i, j, k;
        for (g_132 = 14; (g_132 <= 2); g_132--)
        {
            short l_294 = (-1L);
            int * const l_296 = &g_131;
            const unsigned short *l_317[8][1][8] = {{{&l_264[1], (void*)0, &l_264[5], &l_264[6], &l_264[0], &l_264[6], &l_264[5], (void*)0}}, {{&l_264[1], (void*)0, &l_264[5], &l_264[6], &l_264[0], &l_264[6], &l_264[5], (void*)0}}, {{&l_264[1], (void*)0, &l_264[5], &l_264[6], &l_264[0], &l_264[6], &l_264[5], (void*)0}}, {{&l_264[1], (void*)0, &l_264[5], &l_264[6], &l_264[0], &l_264[6], &l_264[5], (void*)0}}, {{&l_264[1], (void*)0, &l_264[5], &l_264[6], &l_264[0], &l_264[6], &l_264[5], (void*)0}}, {{&l_264[1], (void*)0, &l_264[5], &l_264[6], &l_264[0], &l_264[6], &l_264[5], (void*)0}}, {{&l_264[1], (void*)0, &l_264[5], &l_264[6], &l_264[0], &l_264[6], &l_264[5], (void*)0}}, {{&l_264[1], (void*)0, &l_264[5], &l_264[6], &l_264[0], &l_264[6], &l_264[5], (void*)0}}};
            char *l_320 = &g_216[1][7][3];
            int l_325 = 0x87503FEBL;
            unsigned short l_349 = 65535UL;
            int l_354 = (-1L);
            int l_355[9][8] = {{(-1L), 0L, (-6L), (-8L), 9L, (-1L), 9L, (-8L)}, {(-1L), 0L, (-6L), (-8L), 9L, (-1L), 9L, (-8L)}, {(-1L), 0L, (-6L), (-8L), 9L, (-1L), 9L, (-8L)}, {(-1L), 0L, (-6L), (-8L), 9L, (-1L), 9L, (-8L)}, {(-1L), 0L, (-6L), (-8L), 9L, (-1L), 9L, (-8L)}, {(-1L), 0L, (-6L), (-8L), 9L, (-1L), 9L, (-8L)}, {(-1L), 0L, (-6L), (-8L), 9L, (-1L), 9L, (-8L)}, {(-1L), 0L, (-6L), (-8L), 9L, (-1L), 9L, (-8L)}, {(-1L), 0L, (-6L), (-8L), 9L, (-1L), 9L, (-8L)}};
            unsigned l_370[1];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_370[i] = 0xA0CF3344L;
        }
        p_33 = &g_131;
        ++l_424;
    }
    (*l_209) = (void*)0;
    return p_33;
}







static int * func_35(unsigned char p_36, short p_37, int * const p_38, int * p_39, unsigned char p_40)
{
    short l_92 = 0x9909L;
    int l_94 = (-1L);
    int l_97 = 0x229A812DL;
    int l_104 = 0x7A7D0CF2L;
    int l_105 = 0x80B265A9L;
    int l_106 = (-1L);
    int l_107 = 0x6AA3471AL;
    int l_108 = 0x7E243D31L;
    unsigned l_183 = 0UL;
    int *l_189 = &l_94;
    int l_196 = (-10L);
    int l_197 = 0x1A5D7D25L;
    short l_198[8];
    int l_199 = 0x0E99874EL;
    int i;
    for (i = 0; i < 8; i++)
        l_198[i] = 1L;
    for (p_37 = 0; (p_37 <= 3); p_37 += 1)
    {
        int *l_93 = &g_5;
        int l_95[6];
        int *l_96 = &g_61[2][1][4];
        int *l_98 = &l_95[1];
        int *l_99 = &g_5;
        int *l_100 = &l_95[5];
        int *l_101 = &l_95[4];
        int *l_102 = &g_5;
        int *l_103[1][4] = {{&g_5, &l_97, &g_5, &l_97}};
        int **l_178[8][7] = {{&l_96, &l_103[0][3], (void*)0, &g_64, (void*)0, &l_103[0][3], &l_96}, {&l_96, &l_103[0][3], (void*)0, &g_64, (void*)0, &l_103[0][3], &l_96}, {&l_96, &l_103[0][3], (void*)0, &g_64, (void*)0, &l_103[0][3], &l_96}, {&l_96, &l_103[0][3], (void*)0, &g_64, (void*)0, &l_103[0][3], &l_96}, {&l_96, &l_103[0][3], (void*)0, &g_64, (void*)0, &l_103[0][3], &l_96}, {&l_96, &l_103[0][3], (void*)0, &g_64, (void*)0, &l_103[0][3], &l_96}, {&l_96, &l_103[0][3], (void*)0, &g_64, (void*)0, &l_103[0][3], &l_96}, {&l_96, &l_103[0][3], (void*)0, &g_64, (void*)0, &l_103[0][3], &l_96}};
        int i, j;
        for (i = 0; i < 6; i++)
            l_95[i] = 0xAD17113EL;
        (*g_89) ^= (+(&p_38 == &g_64));
        (*g_64) = 0x8410211DL;
        g_109--;
        for (l_104 = 0; (l_104 <= 3); l_104 += 1)
        {
            unsigned short l_112[1];
            int l_129 = 0x9578A626L;
            int l_190 = 0x1B0E40B4L;
            int l_191 = 0xDB27BB03L;
            int l_192 = (-2L);
            int l_193 = (-2L);
            int l_194 = (-10L);
            int l_195 = 0x7C073804L;
            char l_200 = 0L;
            int l_201[9][1][7] = {{{(-1L), 1L, (-2L), 0x94299CB9L, 0xAA828677L, 0x94299CB9L, (-2L)}}, {{(-1L), 1L, (-2L), 0x94299CB9L, 0xAA828677L, 0x94299CB9L, (-2L)}}, {{(-1L), 1L, (-2L), 0x94299CB9L, 0xAA828677L, 0x94299CB9L, (-2L)}}, {{(-1L), 1L, (-2L), 0x94299CB9L, 0xAA828677L, 0x94299CB9L, (-2L)}}, {{(-1L), 1L, (-2L), 0x94299CB9L, 0xAA828677L, 0x94299CB9L, (-2L)}}, {{(-1L), 1L, (-2L), 0x94299CB9L, 0xAA828677L, 0x94299CB9L, (-2L)}}, {{(-1L), 1L, (-2L), 0x94299CB9L, 0xAA828677L, 0x94299CB9L, (-2L)}}, {{(-1L), 1L, (-2L), 0x94299CB9L, 0xAA828677L, 0x94299CB9L, (-2L)}}, {{(-1L), 1L, (-2L), 0x94299CB9L, 0xAA828677L, 0x94299CB9L, (-2L)}}};
            unsigned l_202 = 18446744073709551609UL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_112[i] = 0x5AA4L;
            (*l_102) = l_112[0];
            if ((*g_89))
            {
                int * const l_119 = &l_95[3];
                for (g_90 = 0; (g_90 <= 0); g_90 += 1)
                {
                    char l_130 = (-8L);
                    int i, j, k;
                    (*g_64) &= g_61[p_37][l_104][(g_90 + 6)];
                    if (((safe_add_func_int16_t_s_s((!(l_112[g_90] | l_112[g_90])), ((g_11 & ((*g_89) >= ((*l_101) = (*g_89)))) < (safe_rshift_func_int16_t_s_u(g_61[1][1][5], 15))))) ^ g_5))
                    {
                        int **l_126 = (void*)0;
                        int **l_127 = &l_99;
                        char *l_128 = (void*)0;
                        g_132 ^= ((((void*)0 != l_119) > ((safe_add_func_int8_t_s_s((l_129 &= (0xC9008584L == (((*l_127) = func_54(&p_39, func_41(&g_65, func_54(&g_64, ((*l_100) = ((g_61[2][1][3] ^ (safe_sub_func_uint16_t_u_u(p_40, (safe_add_func_int32_t_s_s(1L, 1UL))))) > (*l_119)))), g_109))) == p_38))), l_130)) >= g_109)) <= g_131);
                        return &g_131;
                    }
                    else
                    {
                        unsigned short *l_136 = &g_137;
                        int *l_138 = &l_95[5];
                        int i;
                        (*g_64) |= ((*l_101) = (safe_unary_minus_func_uint16_t_u(g_61[3][2][5])));
                        l_129 = (func_41(l_138, &g_65, (*l_119)) & (safe_lshift_func_uint16_t_u_s(g_11, 10)));
                    }
                }
                (*p_38) &= ((*l_93) &= (*l_100));
                return &g_61[1][1][5];
            }
            else
            {
                const int l_141 = 7L;
                int *l_153 = &l_94;
                (*l_93) &= ((*g_89) = (l_108 && (1L && ((!l_141) != ((safe_mod_func_uint16_t_u_u(l_141, ((-1L) & (safe_lshift_func_uint8_t_u_u(g_90, 5))))) & 255UL)))));
                for (l_108 = 3; (l_108 >= 0); l_108 -= 1)
                {
                    int l_152[6] = {6L, 0xD496A5D4L, 6L, 0xD496A5D4L, 6L, 0xD496A5D4L};
                    int **l_177 = (void*)0;
                    int i, j, k;
                    (*l_102) ^= g_61[l_108][p_37][(l_104 + 2)];
                    for (l_106 = 3; (l_106 >= 0); l_106 -= 1)
                    {
                        return p_39;
                    }
                    for (g_131 = 0; (g_131 < 1); ++g_131)
                    {
                        int *l_162 = &g_163;
                        short *l_166 = &l_92;
                        unsigned *l_167 = (void*)0;
                        unsigned *l_168[2];
                        unsigned short *l_169 = &l_112[0];
                        unsigned short *l_170 = &g_171;
                        int ***l_179[9] = {&l_178[4][3], &l_178[1][3], &l_178[4][3], &l_178[1][3], &l_178[4][3], &l_178[1][3], &l_178[4][3], &l_178[1][3], &l_178[4][3]};
                        unsigned char *l_184 = (void*)0;
                        unsigned char *l_185 = &g_109;
                        unsigned l_186 = 0xEF612EB8L;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_168[i] = &g_132;
                        (*p_38) &= (g_137 ^ ((safe_div_func_int8_t_s_s((func_41(&g_61[l_108][p_37][(l_104 + 2)], &g_61[1][1][5], l_141) <= (safe_rshift_func_uint16_t_u_u(l_152[5], 7))), (((g_131 != l_97) && (g_11 || l_141)) ^ g_109))) <= p_36));
                        l_153 = func_54(&g_64, l_94);
                        g_172[0][0][0] |= (((*l_170) &= ((*l_169) = (0x80324DE1L == ((*l_101) = (g_137 > (safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((g_165[1] ^= (safe_lshift_func_int16_t_s_s(func_41(&l_129, &g_65, (~((*l_162) &= g_11))), (g_164 == (void*)0)))) != ((*l_166) &= p_40)), g_90)), l_106)), l_152[0]))))))) && 8L);
                        l_129 &= ((*p_38) = func_41(&l_129, &l_95[5], (safe_div_func_int8_t_s_s(p_40, (safe_mul_func_uint32_t_u_u((l_177 != (g_180 = l_178[4][4])), ((g_132 = (((((safe_mul_func_int16_t_s_s((((g_137 ^ 3UL) && (l_183 >= ((*l_185) = 0xD0L))) | l_112[0]), g_172[0][0][1])) <= 8UL) >= p_40) | p_37) != l_186)) != 0xAD467135L)))))));
                    }
                    l_189 = (p_39 = func_54(&p_39, (safe_sub_func_int16_t_s_s(g_90, p_36))));
                }
            }
            l_202--;
            return p_39;
        }
    }
    return (*g_180);
}







static unsigned char func_41(int * p_42, int * p_43, int p_44)
{
    short l_49[5][2][3] = {{{0x85CAL, 0x589DL, 0x85CAL}, {0x85CAL, 0x589DL, 0x85CAL}}, {{0x85CAL, 0x589DL, 0x85CAL}, {0x85CAL, 0x589DL, 0x85CAL}}, {{0x85CAL, 0x589DL, 0x85CAL}, {0x85CAL, 0x589DL, 0x85CAL}}, {{0x85CAL, 0x589DL, 0x85CAL}, {0x85CAL, 0x589DL, 0x85CAL}}, {{0x85CAL, 0x589DL, 0x85CAL}, {0x85CAL, 0x589DL, 0x85CAL}}};
    int l_67 = 0x815809F1L;
    int l_83 = 0x78FB872AL;
    int i, j, k;
    for (p_44 = 28; (p_44 > 11); p_44 = safe_sub_func_uint32_t_u_u(p_44, 9))
    {
        int l_70 = 0x837911FBL;
        int l_71 = 0L;
        int l_73 = (-1L);
        unsigned l_75 = 0x2697EBF9L;
        unsigned short l_78[10] = {1UL, 65535UL, 3UL, 3UL, 65535UL, 1UL, 65535UL, 3UL, 3UL, 65535UL};
        int **l_88 = (void*)0;
        int ***l_87 = &l_88;
        int i;
        for (g_5 = 1; (g_5 >= 0); g_5 -= 1)
        {
            int **l_57 = (void*)0;
            int *l_63 = &g_5;
            int **l_62 = &l_63;
            int *l_66 = &g_61[0][1][6];
            int l_72 = 0L;
            char l_74 = 0xD4L;
            int l_82 = 0x59122B3AL;
            g_65 &= ((*l_66) = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((((*l_62) = func_54(l_57, g_11)) == &g_5), (-1L))), ((((g_64 = p_43) == p_42) != g_5) ^ ((-6L) < 0xBB41L)))));
            for (g_65 = 0; (g_65 <= 1); g_65 += 1)
            {
                int *l_68 = &g_61[1][2][1];
                int *l_69[5][7] = {{&g_61[1][1][5], &g_5, (void*)0, &g_5, &g_61[1][1][5], &g_5, (void*)0}, {&g_61[1][1][5], &g_5, (void*)0, &g_5, &g_61[1][1][5], &g_5, (void*)0}, {&g_61[1][1][5], &g_5, (void*)0, &g_5, &g_61[1][1][5], &g_5, (void*)0}, {&g_61[1][1][5], &g_5, (void*)0, &g_5, &g_61[1][1][5], &g_5, (void*)0}, {&g_61[1][1][5], &g_5, (void*)0, &g_5, &g_61[1][1][5], &g_5, (void*)0}};
                int i, j;
                ++l_75;
                for (l_72 = 0; (l_72 <= 1); l_72 += 1)
                {
                    unsigned char l_84 = 0UL;
                    int i, j, k;
                    for (l_67 = 1; (l_67 >= 0); l_67 -= 1)
                    {
                        int l_81[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_81[i] = 0x913691F7L;
                        l_78[0]--;
                        ++l_84;
                    }
                    (*l_68) &= l_49[(g_5 + 2)][l_72][g_5];
                    if ((*p_43))
                        continue;
                }
            }
        }
        (*l_87) = &g_64;
    }
    return g_65;
}







static int * func_54(int ** p_55, int p_56)
{
    int *l_60 = &g_61[1][1][5];
    (*l_60) = (safe_lshift_func_int8_t_s_s((~0x69L), 5));
    return &g_5;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_61[i][j][k], "g_61[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_163, "g_163", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_165[i], "g_165[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_171, "g_171", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_172[i][j][k], "g_172[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_216[i][j][k], "g_216[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_223, "g_223", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_249[i], "g_249[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_255, "g_255", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_295[i][j][k], "g_295[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_301[i], "g_301[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_485, "g_485", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
