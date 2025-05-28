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



static unsigned g_17 = 0UL;
static int g_29 = (-1L);
static short g_63[1] = {0L};
static int g_64 = 0x4807C1F4L;
static unsigned short g_80[3] = {0xC651L, 0xC651L, 0xC651L};
static int g_81[8][6] = {{0xA46C4288L, 0L, 1L, (-1L), 1L, 0L}, {0xA46C4288L, 0L, 1L, (-1L), 1L, 0L}, {0xA46C4288L, 0L, 1L, (-1L), 1L, 0L}, {0xA46C4288L, 0L, 1L, (-1L), 1L, 0L}, {0xA46C4288L, 0L, 1L, (-1L), 1L, 0L}, {0xA46C4288L, 0L, 1L, (-1L), 1L, 0L}, {0xA46C4288L, 0L, 1L, (-1L), 1L, 0L}, {0xA46C4288L, 0L, 1L, (-1L), 1L, 0L}};
static int *g_115 = &g_64;
static int **g_185 = &g_115;
static int ***g_184 = &g_185;
static long long g_212 = 3L;
static const int *g_256[8] = {&g_64, &g_64, &g_64, &g_64, &g_64, &g_64, &g_64, &g_64};
static volatile char g_311 = (-9L);
static int g_349[3] = {0xB2CF21ABL, 0xB2CF21ABL, 0xB2CF21ABL};
static short g_400 = 0xC73CL;
static char g_532[7] = {0x3CL, (-8L), 0x3CL, (-8L), 0x3CL, (-8L), 0x3CL};
static int g_647 = 0x5BB5EE1FL;
static int * const g_646 = &g_647;
static int g_686 = 0x722565CBL;
static unsigned g_704[6] = {0UL, 4294967287UL, 0UL, 4294967287UL, 0UL, 4294967287UL};
static volatile unsigned long long g_745[8][5][4] = {{{0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}}, {{0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}}, {{0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}}, {{0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}}, {{0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}}, {{0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}}, {{0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}}, {{0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}, {0xE880D7C93BF7AB81LL, 18446744073709551610UL, 0xCA72185C303C875ELL, 0x63E63BF82FCB1454LL}}};
static int * const g_805 = &g_29;
static volatile unsigned short g_915[6][2] = {{65535UL, 0x642BL}, {65535UL, 0x642BL}, {65535UL, 0x642BL}, {65535UL, 0x642BL}, {65535UL, 0x642BL}, {65535UL, 0x642BL}};



static int func_1(void);
static const unsigned char func_10(int p_11);
static char func_13(unsigned long long p_14);
static int * func_30(int * p_31, int * p_32, const int * const p_33, long long p_34, int * const p_35);
static int * func_37(unsigned p_38, unsigned p_39, long long p_40);
static const unsigned func_43(unsigned p_44, long long p_45, unsigned p_46, long long p_47);
static unsigned short func_55(unsigned long long p_56, const int p_57, int * const p_58, int * p_59);
static short func_60(unsigned char p_61, int * p_62);
static const short func_69(const int * p_70, short p_71);
static int * func_72(unsigned long long p_73, int * p_74, char p_75, int * p_76, unsigned char p_77);
static int func_1(void)
{
    unsigned long long l_12 = 0xDCD66A07563FFAF0LL;
    short l_20 = 0x78D7L;
    int l_1033[6] = {0x035BF33BL, 0x035BF33BL, 0x9863C31BL, 0x035BF33BL, 0x035BF33BL, 0x9863C31BL};
    int i;
    l_1033[3] ^= (((((safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(((((safe_div_func_uint8_t_u_u(func_10((l_12 && func_13((((((safe_add_func_int32_t_s_s(0xADE661FBL, g_17)) == g_17) <= ((1UL == ((l_12 >= (safe_div_func_int8_t_s_s(g_17, l_20))) | (safe_add_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(247UL, l_20)) && 255UL), g_17)))) == 0x7722ABACL)) >= l_12) >= g_17)))), g_80[1])) || 0x16654E31L) | 0x0A488B0CD82F86BDLL) & 255UL), g_704[0])), 0UL)) >= 0x3E90L), g_704[2])) && 1UL) >= g_532[2]) ^ 0x17L) == g_80[0]);



    return (*g_805);
}







static const unsigned char func_10(int p_11)
{
    unsigned long long l_684 = 18446744073709551615UL;
    int *l_685 = &g_686;
    int *l_695 = &g_349[0];
    unsigned char l_718 = 0x32L;
    int ***l_738 = &g_185;
    const unsigned long long l_739 = 0x5B8CF264539FA5D8LL;
    unsigned char l_752 = 255UL;
    int *l_852 = (void*)0;
    int *l_858 = &g_686;
    int l_892[2][3] = {{(-1L), (-5L), (-1L)}, {(-1L), (-5L), (-1L)}};
    int i, j;
    (*g_185) = func_72((!(func_13(l_684) | l_684)), l_685, ((p_11 >= ((0L != g_532[4]) & (safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((g_81[0][4] | (g_80[2] ^ p_11)), (*l_685))), g_63[0])))) <= 0x33L), l_685, g_532[4]);

    ;
    (*g_646) |= p_11;
    if ((safe_rshift_func_int16_t_s_u(((safe_sub_func_uint16_t_u_u((~p_11), ((l_695 == l_685) != ((safe_rshift_func_int8_t_s_s(0xF4L, (*l_685))) <= (safe_sub_func_uint8_t_u_u(func_13((*l_685)), ((safe_rshift_func_int8_t_s_u((g_80[0] & ((safe_div_func_int16_t_s_s((g_532[4] | g_80[1]), p_11)) | g_686)), g_704[3])) | (*l_685)))))))) ^ p_11), 1)))
    {
        int l_705 = 0x115FCBABL;
        int *l_706[4] = {(void*)0, &g_29, (void*)0, &g_29};
        int ***l_723 = &g_185;
        int i;
        for (g_17 = 0; (g_17 <= 5); g_17 += 1)
        {
            unsigned l_719 = 0xACAEB7F4L;
            int ***l_729 = &g_185;
            if (l_705)
                break;
            (*g_185) = l_706[1];

            ;
            for (g_686 = 0; (g_686 <= 2); g_686 += 1)
            {
                int * const * const l_717 = &l_706[1];
                int i, j;
                for (g_29 = 0; (g_29 <= 2); g_29 += 1)
                {
                    int ** const *l_722 = (void*)0;
                    int i, j;
                    g_349[g_29] = ((safe_add_func_uint16_t_u_u(1UL, ((safe_lshift_func_int16_t_s_u(g_81[(g_686 + 1)][g_17], func_43(func_55(g_349[g_29], ((safe_div_func_int32_t_s_s(((safe_div_func_int8_t_s_s(g_349[g_29], p_11)) >= (((safe_sub_func_int32_t_s_s(p_11, ((*g_184) != l_717))) != l_718) || g_532[5])), g_349[0])) != 0x3B202912FEA4A419LL), &g_349[g_29], l_695), l_719, g_704[3], g_81[(g_686 + 1)][g_17]))) && g_80[2]))) & (-2L));

                    ;
                    if (((safe_sub_func_uint8_t_u_u(p_11, (65530UL | g_81[0][4]))) <= (l_722 == l_723)))
                    {
                        (*g_185) = (*g_185);
                        return p_11;
                    }
                    else
                    {
                        int ***l_728 = &g_185;
                        (*g_646) = (safe_mod_func_int16_t_s_s(g_311, (l_719 ^ 0xCFL)));
                        (**l_723) = (void*)0;

                        ;
                        (*l_695) = (safe_mod_func_int64_t_s_s((((l_728 != l_729) <= (l_729 != (void*)0)) & (((void*)0 == (**l_728)) || p_11)), g_81[0][4]));
                    }

                    ;
                }
                (**l_723) = l_685;

                ;
                (**l_723) = (**l_723);
                if (p_11)
                    continue;
            }

            ;
        }

        ;
        l_695 = (void*)0;

        ;
        (**l_723) = (**l_738);
    }
    else
    {
        unsigned char l_744[4][9] = {{0x8DL, 0x45L, 255UL, 0x45L, 0x8DL, 255UL, 0x8DL, 0x45L, 255UL}, {0x8DL, 0x45L, 255UL, 0x45L, 0x8DL, 255UL, 0x8DL, 0x45L, 255UL}, {0x8DL, 0x45L, 255UL, 0x45L, 0x8DL, 255UL, 0x8DL, 0x45L, 255UL}, {0x8DL, 0x45L, 255UL, 0x45L, 0x8DL, 255UL, 0x8DL, 0x45L, 255UL}};
        int **l_757 = (void*)0;
        int *l_768 = &g_349[0];
        int l_823 = 0L;
        int *l_902[3][5][1] = {{{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}}};
        const int *l_905 = &g_686;
        const unsigned long long l_918[10] = {0x2DB1F67CC90D5D06LL, 0xF6FCDD169A2B9BDBLL, 0x2DB1F67CC90D5D06LL, 0xF6FCDD169A2B9BDBLL, 0x2DB1F67CC90D5D06LL, 0xF6FCDD169A2B9BDBLL, 0x2DB1F67CC90D5D06LL, 0xF6FCDD169A2B9BDBLL, 0x2DB1F67CC90D5D06LL, 0xF6FCDD169A2B9BDBLL};
        int l_936 = 0x453B494CL;
        int l_1015 = 0L;
        int i, j, k;
        if ((safe_mod_func_int64_t_s_s((((((p_11 ^ ((((safe_div_func_int8_t_s_s((l_744[1][5] ^ (g_745[2][1][1] || (safe_add_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(0x31L, (p_11 <= g_704[2]))), ((safe_mod_func_int32_t_s_s((g_63[0] > 0x16056078A82E582FLL), func_43(p_11, p_11, g_63[0], g_686))) & g_349[1]))))), p_11)) == (*l_695)) >= l_752) || g_81[6][5])) && p_11) && 0UL) >= 4L) ^ 1L), l_744[1][7])))
        {
            int l_764 = 0x6DCEA7BEL;
            int * const l_765 = &g_686;
            int *l_766 = &g_349[0];
            const short l_767 = (-6L);
            int l_788[10];
            int l_811 = (-7L);
            int i;
            for (i = 0; i < 10; i++)
                l_788[i] = 0L;
            if ((func_55(func_55((safe_sub_func_uint64_t_u_u((func_55((safe_mod_func_uint64_t_u_u((((g_64 == (((void*)0 == (**g_184)) ^ 0xC074L)) != ((void*)0 != l_757)) <= g_349[0]), (safe_sub_func_int16_t_s_s((g_29 | (safe_rshift_func_int16_t_s_s((((safe_add_func_int32_t_s_s(9L, p_11)) < (***l_738)) != l_764), p_11))), g_647)))), (***g_184), (*g_185), (**g_184)) <= 255UL), g_745[2][1][1])), p_11, l_765, l_766), l_767, l_695, l_768) == (*l_768)))
            {
                char l_773 = 0L;
                int ***l_774 = &g_185;
                if ((safe_lshift_func_int8_t_s_u((func_60((func_69((**g_184), p_11) | (safe_lshift_func_uint8_t_u_s(((((-3L) | l_773) && (g_686 <= (g_704[3] || ((*l_685) | (l_774 == l_774))))) >= 0xE536L), 7))), &g_647) == p_11), 4)))
                {
                    (*g_115) = ((void*)0 == &l_766);
                    for (g_400 = 0; (g_400 <= (-4)); g_400 = safe_sub_func_uint16_t_u_u(g_400, 5))
                    {
                        unsigned long long l_781 = 18446744073709551615UL;
                        l_781 = ((safe_sub_func_uint32_t_u_u(p_11, (*g_646))) & (g_647 == (((*g_646) ^ (***g_184)) || (!(safe_lshift_func_int8_t_s_s((!(*l_766)), g_745[5][1][0]))))));
                        (*l_765) = (***g_184);
                    }
                }
                else
                {
                    unsigned l_789 = 4294967288UL;
                    unsigned long long l_790 = 0x245F9AC53489A73ELL;
                    int *** const l_802 = &g_185;
                    (*g_646) = (((safe_rshift_func_int16_t_s_s(((**l_738) != (void*)0), (safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s(l_788[0], l_789)), (func_60(func_60((***l_774), (**l_774)), (**l_774)) || l_789))))) || l_790) & (*l_768));
                    for (g_647 = 0; (g_647 <= 26); g_647++)
                    {
                        (**l_738) = (**g_184);
                        return g_745[0][4][2];
                    }
                    for (g_64 = 0; (g_64 > 25); ++g_64)
                    {
                        long long l_801 = 0xFAE1F4E2AACC8D64LL;
                        int *l_806 = &g_64;
                        (*l_766) = (1L | (safe_mod_func_uint64_t_u_u((!(*l_768)), func_55(((safe_sub_func_uint8_t_u_u(func_43((g_349[0] & p_11), l_801, func_55(((void*)0 != l_802), func_55(g_81[1][2], ((+(safe_rshift_func_uint8_t_u_u(g_64, 3))) <= g_745[6][3][3]), (**l_774), (*g_185)), g_805, l_806), p_11), 0x18L)) < 0x77B07F95AF784048LL), p_11, l_766, &g_64))));

                        ;
                    }
                }
            }
            else
            {
                int l_816 = 7L;
                if ((safe_rshift_func_uint16_t_u_s((*l_768), (safe_add_func_int64_t_s_s(p_11, func_55(func_55(l_811, (&g_185 == (void*)0), (*g_185), (**g_184)), (((safe_div_func_int64_t_s_s((safe_div_func_uint32_t_u_u(0UL, 0x6A5C822AL)), g_704[3])) | p_11) || g_745[2][3][0]), &l_811, &l_811))))))
                {
                    int *l_817 = &g_349[0];
                    int *l_818 = &l_811;
                    (*l_818) ^= (func_43(p_11, g_29, (*l_695), (l_816 <= (g_647 == ((void*)0 == (*g_184))))) || ((((func_60(l_816, l_817) | (-7L)) < g_686) ^ 0xF08C3B23L) || 0x6FL));

                    ;
                    for (l_811 = 3; (l_811 >= 0); l_811 -= 1)
                    {
                        int i;
                        (*l_695) = (safe_rshift_func_uint8_t_u_u(func_13(g_704[2]), 3));

                        ;
                        (*l_765) ^= (***g_184);
                        (*g_185) = &l_811;

                        ;
                    }

                    ;
                }
                else
                {
                    const int *l_827 = &l_811;
                    int *l_846 = &g_686;
                    if ((p_11 > ((safe_mod_func_int16_t_s_s((&g_185 != (void*)0), l_823)) > (safe_mod_func_uint16_t_u_u(g_400, 0x3831L)))))
                    {
                        unsigned long long l_826[6];
                        const int **l_828 = &l_827;
                        unsigned short l_829 = 0x8384L;
                        int i;
                        for (i = 0; i < 6; i++)
                            l_826[i] = 0x427528DCFABE639FLL;
                        (*l_765) = l_826[4];
                        (*l_828) = l_827;
                        (**g_184) = func_72(l_829, &l_816, (safe_add_func_uint8_t_u_u(p_11, (***l_738))), (*g_185), (p_11 >= g_349[1]));

                        ;
                        (*l_765) = (safe_sub_func_uint16_t_u_u(p_11, g_80[1]));
                    }
                    else
                    {
                        int *l_834 = &g_349[0];
                        (**g_184) = l_834;

                        ;
                        return g_349[0];
                    }

                    ;
                    if ((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(p_11, (safe_rshift_func_uint16_t_u_u(1UL, 7)))) || (safe_add_func_int16_t_s_s(((*l_768) != (safe_rshift_func_uint16_t_u_u(p_11, 8))), p_11))), p_11)))
                    {
                        (*l_846) |= ((((safe_unary_minus_func_int8_t_s(0xFFL)) >= ((*l_768) >= g_704[3])) | func_43(p_11, ((func_55(p_11, p_11, (**l_738), l_846) >= 0x3E0448C52CDC9DA1LL) & (-3L)), p_11, g_745[7][0][3])) || p_11);

                        ;
                    }
                    else
                    {
                        (**l_738) = (**g_184);
                    }
                }

                ;
            }


        }
        else
        {
            int *l_857 = (void*)0;
            int l_893 = 0x13430FA2L;
            (*g_646) |= func_60(((safe_unary_minus_func_int16_t_s(p_11)) && (((safe_rshift_func_uint8_t_u_u(func_60((safe_lshift_func_uint16_t_u_s(65535UL, 8)), l_852), p_11)) & (safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((g_704[5] != p_11), 2)), func_55((p_11 ^ (*l_695)), (*g_805), (*g_185), l_857)))) && p_11)), l_857);
            l_858 = (*g_185);

            ;
            if (p_11)
            {
                unsigned char l_896 = 249UL;
                const int * const l_903 = &g_349[0];
                int * const l_904 = &g_686;
                for (g_64 = (-26); (g_64 == 14); g_64 = safe_add_func_int8_t_s_s(g_64, 2))
                {
                    for (g_212 = 7; (g_212 >= 0); g_212 -= 1)
                    {
                        int *l_867 = (void*)0;
                        (*l_685) &= (safe_sub_func_uint32_t_u_u((safe_mod_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(func_55(p_11, (*l_858), (**g_184), l_867), g_64)), p_11)), 1UL));
                    }
                    (*g_646) = (***l_738);
                }
                for (l_718 = 29; (l_718 < 55); l_718 = safe_add_func_int64_t_s_s(l_718, 5))
                {
                    int l_878 = (-9L);
                    unsigned char l_881[2][3][8] = {{{251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L}, {251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L}, {251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L}}, {{251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L}, {251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L}, {251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L, 251UL, 0x06L}}};
                    int i, j, k;
                    (***g_184) = p_11;
                    (*g_646) |= (safe_mod_func_uint16_t_u_u(((!0xC4B38C0EL) | p_11), func_43(g_63[0], func_43((safe_lshift_func_int16_t_s_u(g_400, p_11)), p_11, p_11, (safe_div_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(((-9L) >= (*l_695)), p_11)), l_878))), p_11, g_400)));

                    ;
                    for (g_29 = (-6); (g_29 == 16); g_29 = safe_add_func_int32_t_s_s(g_29, 8))
                    {
                        int l_899 = 0x2C2B7A2CL;
                        (*g_115) |= l_881[1][2][1];
                        (***g_184) ^= ((safe_sub_func_int8_t_s_s((g_81[0][4] ^ (safe_div_func_uint8_t_u_u(g_532[4], (safe_div_func_int32_t_s_s(((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((l_892[0][1] != l_893), ((1UL ^ (safe_mod_func_uint8_t_u_u(g_29, 0xF3L))) & (-1L)))), 10)) && l_896), 0xE0B71013L))))), 255UL)) > 0x47C75A919B255561LL);
                        l_878 |= (func_55((safe_lshift_func_uint8_t_u_s(l_899, func_69(l_905, g_81[5][5]))), p_11, &l_899, &l_893) == (*l_685));
                    }

                    ;
                    return g_647;
                }
                (***l_738) = (safe_lshift_func_int8_t_s_s((safe_div_func_uint32_t_u_u(((-1L) & 0x89L), (safe_lshift_func_uint8_t_u_s((*l_904), (safe_div_func_uint16_t_u_u(((0xB0C49D1EB78F8185LL | (!(safe_unary_minus_func_int8_t_s(((g_915[1][0] && (*l_768)) & (0x43B28AEE96A09140LL && (*l_904))))))) > (safe_sub_func_int32_t_s_s(((func_60(g_532[4], (**g_184)) & l_918[3]) <= (*g_646)), 0x79D6153CL))), g_686)))))), 6));
                for (l_823 = 2; (l_823 != (-14)); l_823--)
                {
                    unsigned short l_933 = 65535UL;
                    (*g_115) = (-1L);
                    for (p_11 = 0; (p_11 <= 7); p_11 += 1)
                    {
                        int i;
                        (*g_805) = ((((***l_738) == g_349[0]) && ((safe_rshift_func_uint16_t_u_u(65531UL, (***l_738))) > g_704[3])) | ((safe_add_func_uint8_t_u_u((safe_div_func_int64_t_s_s(((p_11 < ((*g_805) ^ (safe_mod_func_uint8_t_u_u((*l_695), (safe_div_func_int16_t_s_s(p_11, g_81[0][4])))))) < (*l_904)), l_933)), g_81[2][3])) == p_11));
                    }
                }
            }
            else
            {
                unsigned l_941 = 1UL;
                int *l_942 = &g_64;
                if (func_43(g_349[1], (*l_695), (safe_mod_func_int32_t_s_s((p_11 || ((-2L) <= (func_60(g_745[2][1][1], l_768) ^ 0UL))), ((g_81[3][3] && p_11) && l_936))), g_81[4][2]))
                {
                    int l_945 = 0x4FE21C2AL;
                    for (g_64 = 0; (g_64 <= 1); g_64 += 1)
                    {
                        int i;
                        (**l_738) = (void*)0;

                        ;
                        (*g_646) ^= (g_349[(g_64 + 1)] == func_55((safe_sub_func_uint16_t_u_u(g_81[0][3], (g_532[4] && (safe_add_func_int8_t_s_s(6L, l_941))))), p_11, (**g_184), l_942));
                        if (p_11)
                            break;
                    }

                    ;
                    (*g_646) &= (safe_mod_func_uint32_t_u_u((func_69(l_942, l_945) < (g_81[3][1] == (((((safe_rshift_func_uint16_t_u_u((p_11 < p_11), ((safe_rshift_func_int8_t_s_s((p_11 ^ l_945), 1)) <= (*l_905)))) > 0x57L) < g_29) == (-1L)) ^ g_311))), p_11));

                    ;
                }
                else
                {
                    int *l_952 = &l_936;
                    if ((0x48687A6CL >= (safe_div_func_uint8_t_u_u(g_64, func_55(g_532[4], p_11, l_942, l_952)))))
                    {
                        return g_81[1][1];
                    }
                    else
                    {
                        (**l_738) = (**g_184);
                        (*l_858) ^= p_11;
                    }
                    return g_80[2];
                }

                ;
            }

            ;
        }


        ;
        if (((*l_738) == (*l_738)))
        {
            long long l_959[1];
            int *l_965 = &g_647;
            int i;
            for (i = 0; i < 1; i++)
                l_959[i] = 0xC00B452666243CF3LL;
            for (l_823 = 0; (l_823 <= 7); l_823 += 1)
            {
                int * const l_953 = &g_349[0];
                unsigned long long l_969 = 0x06FCD4EAFA9E5B62LL;
                int i;
                for (g_212 = 5; (g_212 >= 0); g_212 -= 1)
                {
                    int **l_954 = (void*)0;
                    int **l_955 = (void*)0;
                    int **l_956[7][5];
                    int **l_957 = &l_695;
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 5; j++)
                            l_956[i][j] = (void*)0;
                    }
                    (*l_957) = l_953;
                    return g_81[l_823][g_212];
                }
                (*g_646) = p_11;
                g_256[l_823] = (void*)0;
                for (g_212 = 5; (g_212 >= 0); g_212 -= 1)
                {
                    int **l_958 = &l_695;
                    (*l_958) = l_953;
                    if ((**l_958))
                        break;
                    if ((l_959[0] || (p_11 < ((safe_sub_func_uint16_t_u_u((18446744073709551608UL != ((+(p_11 || (((g_704[3] & (safe_lshift_func_int8_t_s_u(((((*l_685) != (**l_958)) < p_11) ^ ((-9L) > (**l_958))), 3))) != 0xE588L) < (**l_958)))) == g_647)), p_11)) == g_17))))
                    {
                        int *l_964 = &g_64;
                        (*g_185) = l_964;

                        ;
                        (*l_958) = func_30(func_30(func_30((**l_738), l_965, (*g_185), g_915[3][0], l_964), l_965, l_965, g_80[0], l_953), l_964, l_964, p_11, l_964);

                        ;

                        return g_80[0];
                    }
                    else
                    {
                        int **l_966 = (void*)0;
                        int **l_967[1][10] = {{&l_858, &l_965, (void*)0, (void*)0, &l_965, &l_858, &l_965, (void*)0, (void*)0, &l_965}};
                        int **l_968 = &l_768;
                        int i, j;
                        (*l_968) = l_953;
                        (*g_805) &= l_969;
                        if (p_11)
                            break;
                        (*g_185) = l_965;

                        ;
                    }

                    ;
                    for (g_686 = 5; (g_686 >= 1); g_686 -= 1)
                    {
                        short l_970 = 7L;
                        if (l_970)
                            break;
                        return g_704[2];
                    }
                }
            }


        }
        else
        {
            const int *l_982 = &g_349[0];
            int l_1012 = 0x83468F8FL;
            int l_1025[6] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
            int i;
            for (l_936 = 0; (l_936 > (-27)); --l_936)
            {
                int l_981 = (-7L);
                int l_983[5][2][4] = {{{0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}, {0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}}, {{0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}, {0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}}, {{0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}, {0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}}, {{0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}, {0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}}, {{0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}, {0x72912CEDL, 0xEEB014B5L, (-6L), 0xEEB014B5L}}};
                int i, j, k;
                for (g_647 = 0; (g_647 >= (-19)); g_647 = safe_sub_func_uint32_t_u_u(g_647, 3))
                {
                    int *l_986 = &l_936;
                    (*l_685) = 0xF76440E9L;
                    if (((safe_add_func_uint8_t_u_u(g_81[6][2], (safe_div_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0xF601L, l_981)), g_29)))) > l_981))
                    {
                        (*g_805) ^= func_69(l_982, g_915[0][1]);
                        if (p_11)
                            continue;
                        l_983[3][0][3] ^= (!((void*)0 != &l_902[1][2][0]));
                        (*l_695) |= (safe_mod_func_int64_t_s_s((l_986 != (void*)0), 0xEF26305AF521F927LL));
                    }
                    else
                    {
                        l_983[3][0][3] = (~(+0xA37A19EDL));
                        if ((*l_986))
                            break;
                        if (p_11)
                            continue;
                    }
                    for (l_981 = 13; (l_981 < 10); l_981 = safe_sub_func_int8_t_s_s(l_981, 3))
                    {
                        int *l_989 = &l_983[3][0][3];
                        (**l_738) = l_989;

                        ;
                        (**g_184) = func_37(g_80[2], ((safe_add_func_uint64_t_u_u(((safe_div_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(p_11, (((safe_add_func_uint8_t_u_u(g_704[2], (4UL > p_11))) & (((safe_mod_func_uint32_t_u_u(1UL, (*l_858))) | (func_43((((safe_lshift_func_uint16_t_u_s(g_63[0], 1)) != (safe_mod_func_int64_t_s_s(((safe_div_func_uint32_t_u_u(g_63[0], 0xF9BDC064L)) >= (*g_646)), 18446744073709551615UL))) > p_11), (*l_905), p_11, (*l_989)) == 0xF43FL)) & (*l_768))) == (*l_986)))), (*l_982))) || (***g_184)), (*l_685))) & p_11), (*l_989));

                        ;
                        (***g_184) |= (safe_rshift_func_int8_t_s_u(((void*)0 != (*g_184)), (((void*)0 != (*g_184)) > (p_11 & (((((*l_986) < ((((((&l_986 == (void*)0) & (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(4L, 6)), 0x92L))) & p_11) != (*l_982)) != g_81[1][5]) < p_11)) || (-1L)) != p_11) ^ (*l_858))))));
                    }
                }
                l_1012 ^= l_983[3][0][3];
            }
            for (l_936 = 0; (l_936 != 10); l_936 = safe_add_func_uint32_t_u_u(l_936, 6))
            {
                return g_532[4];
            }
            (*g_185) = &g_686;

            ;
            if ((((p_11 < 0xB0C9BBDCL) <= (&g_185 == &l_757)) >= (l_1015 > ((((g_17 & (*l_982)) > g_915[1][0]) & ((**g_184) == (**l_738))) ^ (*l_905)))))
            {
                unsigned char l_1021[7][1][10] = {{{0x09L, 250UL, 0x58L, 1UL, 0xCCL, 0UL, 9UL, 5UL, 5UL, 9UL}}, {{0x09L, 250UL, 0x58L, 1UL, 0xCCL, 0UL, 9UL, 5UL, 5UL, 9UL}}, {{0x09L, 250UL, 0x58L, 1UL, 0xCCL, 0UL, 9UL, 5UL, 5UL, 9UL}}, {{0x09L, 250UL, 0x58L, 1UL, 0xCCL, 0UL, 9UL, 5UL, 5UL, 9UL}}, {{0x09L, 250UL, 0x58L, 1UL, 0xCCL, 0UL, 9UL, 5UL, 5UL, 9UL}}, {{0x09L, 250UL, 0x58L, 1UL, 0xCCL, 0UL, 9UL, 5UL, 5UL, 9UL}}, {{0x09L, 250UL, 0x58L, 1UL, 0xCCL, 0UL, 9UL, 5UL, 5UL, 9UL}}};
                int ***l_1024 = (void*)0;
                int i, j, k;
                for (g_17 = (-18); (g_17 <= 16); g_17++)
                {
                    short l_1020 = 0x732BL;
                    if (func_60((g_349[0] >= 0x440FL), (**g_184)))
                    {
                        l_1021[4][0][9] = ((~(safe_sub_func_int16_t_s_s((*l_768), 0xA968L))) && l_1020);
                        return g_532[5];
                    }
                    else
                    {
                        (***g_184) = (-3L);
                        return p_11;
                    }
                }
                if (((safe_rshift_func_int16_t_s_s(((l_1021[4][0][9] && (0x5D9621E8L || ((void*)0 == l_1024))) >= ((l_1025[2] >= g_532[3]) ^ (g_647 <= (&l_757 == &g_185)))), 10)) | 8UL))
                {
                    int *l_1026 = &l_1012;
                    (**l_738) = l_1026;

                    ;
                }
                else
                {
                    return p_11;
                }

                ;
            }
            else
            {
                int * const l_1031 = &g_647;
                int *l_1032 = (void*)0;
                (*g_805) = (safe_sub_func_uint8_t_u_u(0UL, func_43((safe_mod_func_uint16_t_u_u(1UL, (func_55(g_212, (1L < p_11), l_1031, l_1032) | g_745[1][1][0]))), (*l_1031), g_686, p_11)));

                ;
            }

            ;
        }


    }



    ;
    ;
    (*g_805) = 1L;
    return g_704[3];
}







static char func_13(unsigned long long p_14)
{
    short l_25[4] = {0xD644L, 0x4570L, 0xD644L, 0x4570L};
    int *l_36 = &g_29;
    int i;
    for (g_17 = 0; g_17 < 4; g_17 += 1)
    {
        l_25[g_17] = 7L;
    }
    for (g_17 = 12; (g_17 != 8); g_17--)
    {
        for (p_14 = 0; (p_14 <= 3); p_14 += 1)
        {
            int *l_28 = &g_29;
            (*l_28) ^= ((0x76C56D20A2E71CC5LL < 18446744073709551615UL) > 0x8BL);
        }
    }
    (**g_184) = func_30(l_36, func_37(g_29, (0x054F86FCL & (safe_mod_func_int32_t_s_s((func_43((*l_36), (safe_add_func_int64_t_s_s(g_17, (*l_36))), (p_14 || ((safe_div_func_uint8_t_u_u((*l_36), (safe_unary_minus_func_int16_t_s((func_55((func_60((*l_36), &g_29) >= (*l_36)), (*l_36), (**g_184), (**g_184)) >= p_14))))) ^ 0L)), p_14) == g_81[5][3]), g_81[5][0]))), (*l_36)), l_36, g_81[6][1], g_646);

    ;
    if (((0xFB65L ^ p_14) == 8L))
    {
        const int l_676[10][7][3] = {{{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}, {{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}, {{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}, {{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}, {{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}, {{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}, {{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}, {{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}, {{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}, {{0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}, {0x1732B45CL, 1L, 0x5E2B3361L}}};
        int * const l_677 = &g_647;
        char l_680 = 0xA1L;
        int i, j, k;
        (*l_36) = (safe_sub_func_int64_t_s_s(p_14, (safe_div_func_uint64_t_u_u(((safe_lshift_func_int16_t_s_u(func_55(((*l_36) >= ((func_55(p_14, l_676[4][6][2], l_677, (*g_185)) || p_14) > ((safe_lshift_func_uint8_t_u_s(l_680, 2)) <= p_14))), p_14, l_36, &g_29), g_400)) <= 0x13D87283L), p_14))));
        (*g_646) = (*l_36);
    }
    else
    {
        int *l_681 = &g_647;
        (**g_184) = l_681;

        ;
        (*l_36) ^= (((((0x49BAL && (func_69(l_36, p_14) < g_81[0][4])) && (l_681 == l_681)) || (func_60(g_17, (**g_184)) < 1L)) == p_14) ^ p_14);

        ;
    }

    ;
    return (*l_36);
}







static int * func_30(int * p_31, int * p_32, const int * const p_33, long long p_34, int * const p_35)
{
    int *l_650 = &g_349[0];
    int *l_665 = &g_349[0];
    for (g_647 = 16; (g_647 != (-5)); g_647 = safe_sub_func_int64_t_s_s(g_647, 4))
    {
        (*g_115) = 0x02E0EAB3L;
        if ((***g_184))
            break;
    }
    (*g_185) = l_650;

    ;
    for (g_17 = (-19); (g_17 == 37); g_17++)
    {
        const unsigned long long l_663 = 1UL;
        int * const l_664 = &g_29;
        (*g_646) &= (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(4UL, (safe_sub_func_uint16_t_u_u((func_55(g_311, (((((func_43((p_34 > p_34), g_80[0], g_29, p_34) <= ((safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(0UL, 0xBD2301C0L)), 3)) | p_34)) <= g_400) < (*l_650)) > l_663) ^ g_349[0]), l_664, l_665) > 1UL), g_64)))), (*l_664)));
        for (g_64 = 0; (g_64 == 5); g_64 = safe_add_func_uint8_t_u_u(g_64, 4))
        {
            const int **l_668[6][8] = {{(void*)0, (void*)0, &g_256[4], (void*)0, (void*)0, (void*)0, &g_256[4], (void*)0}, {(void*)0, (void*)0, &g_256[4], (void*)0, (void*)0, (void*)0, &g_256[4], (void*)0}, {(void*)0, (void*)0, &g_256[4], (void*)0, (void*)0, (void*)0, &g_256[4], (void*)0}, {(void*)0, (void*)0, &g_256[4], (void*)0, (void*)0, (void*)0, &g_256[4], (void*)0}, {(void*)0, (void*)0, &g_256[4], (void*)0, (void*)0, (void*)0, &g_256[4], (void*)0}, {(void*)0, (void*)0, &g_256[4], (void*)0, (void*)0, (void*)0, &g_256[4], (void*)0}};
            const int **l_669 = &g_256[4];
            int i, j;
            (*l_669) = p_33;
        }
    }


    return l_650;


}







static int * func_37(unsigned p_38, unsigned p_39, long long p_40)
{
    int *l_484 = &g_349[0];
    int *l_576 = &g_349[2];
    int *l_594 = &g_29;
    int *l_628 = (void*)0;
    unsigned short l_629 = 0xF536L;
    int ***l_644 = &g_185;
    int *l_645 = &g_29;
    (***g_184) |= p_39;
    (**g_184) = l_484;
    for (g_17 = (-1); (g_17 > 19); g_17++)
    {
        unsigned char l_499 = 255UL;
        unsigned l_503[6] = {0x8DFF1753L, 0x8DFF1753L, 0UL, 0x8DFF1753L, 0x8DFF1753L, 0UL};
        int **l_509 = &g_115;
        char l_517 = 0xC6L;
        int l_527 = (-1L);
        int *l_531 = &g_29;
        int *l_566[1];
        const long long l_572[2][8][10] = {{{0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}}, {{0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}, {0xA187154011A1ABBFLL, 0xDFCE7FC3D92F1670LL, 0xDFCE7FC3D92F1670LL, 0xA187154011A1ABBFLL, 0x63CDFEDB5C036F06LL, 3L, 0L, 0xF836E0340334A31CLL, 0xF1E18DB2BDD87A6FLL, (-1L)}}};
        unsigned l_575 = 0xDC350340L;
        short l_590 = 0x960DL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_566[i] = &g_349[0];
        for (g_400 = 0; (g_400 <= 9); g_400++)
        {
            short l_502 = (-1L);
            int *l_515 = &g_349[0];
            int l_518 = 0L;
            const unsigned long long l_642 = 18446744073709551615UL;
        }
        (*l_531) ^= (safe_unary_minus_func_uint64_t_u(((l_644 == &g_185) >= (**l_509))));
    }
    return l_645;


}







static const unsigned func_43(unsigned p_44, long long p_45, unsigned p_46, long long p_47)
{
    int *l_483 = &g_349[1];
    (*g_185) = l_483;

    ;
    (**g_184) = (*g_185);
    return g_81[0][4];
}







static unsigned short func_55(unsigned long long p_56, const int p_57, int * const p_58, int * p_59)
{
    unsigned long long l_465 = 1UL;
    int ***l_473 = &g_185;
    unsigned long long l_474 = 18446744073709551615UL;
    (*g_185) = (**l_473);
    (*g_185) = (*g_185);
    return g_29;
}







static short func_60(unsigned char p_61, int * p_62)
{
    int *l_79[2];
    int l_378 = 0x891171E0L;
    long long l_393[4][3] = {{(-9L), 1L, (-9L)}, {(-9L), 1L, (-9L)}, {(-9L), 1L, (-9L)}, {(-9L), 1L, (-9L)}};
    unsigned char l_422 = 255UL;
    unsigned char l_445 = 255UL;
    unsigned l_460 = 0xCD24DB85L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_79[i] = &g_29;
    for (p_61 = 0; (p_61 <= 0); p_61 += 1)
    {
        unsigned short l_78[6];
        int l_366 = 1L;
        const unsigned char l_367[1][1][3] = {{{0x74L, 0x74L, 0x74L}}};
        int l_437 = 0x411244D6L;
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_78[i] = 0UL;
        for (g_64 = 0; (g_64 >= 0); g_64 -= 1)
        {
            int i;
            if (g_63[g_64])
                break;
        }
    }
    return p_61;
}







static const short func_69(const int * p_70, short p_71)
{
    int *l_341 = &g_64;
    for (g_64 = 19; (g_64 == 13); g_64 = safe_sub_func_uint64_t_u_u(g_64, 1))
    {
        unsigned l_360 = 0x234A3B4DL;
        (*g_185) = l_341;

        ;
        (*g_185) = (**g_184);
        for (p_71 = 0; (p_71 <= (-23)); p_71 = safe_sub_func_uint16_t_u_u(p_71, 8))
        {
            int *l_348 = &g_349[0];
            unsigned l_359 = 1UL;
            (*l_348) = (safe_add_func_uint32_t_u_u((*l_341), (safe_sub_func_uint64_t_u_u(((*g_115) && (*l_341)), p_71))));
            (*l_348) = (safe_sub_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s((0x429EL || ((*l_341) <= (l_348 != l_348))), 7)), (g_349[1] <= (p_71 || g_17))));
            for (g_212 = 1; (g_212 <= 5); g_212 += 1)
            {
                const int **l_354 = &g_256[3];
                int i, j;
                (*l_354) = g_256[(g_212 + 1)];
                l_360 = ((safe_sub_func_int16_t_s_s((g_81[(g_212 + 2)][g_212] | (safe_sub_func_int64_t_s_s(g_63[0], (*l_348)))), l_359)) & (*l_341));
            }
            for (l_359 = 0; (l_359 != 13); l_359 = safe_add_func_int16_t_s_s(l_359, 8))
            {
                long long l_365 = 0L;
                (*l_348) &= (**g_185);
                (*l_348) ^= (safe_rshift_func_uint8_t_u_s(l_365, 4));
            }
        }
    }
    return (*l_341);
}







static int * func_72(unsigned long long p_73, int * p_74, char p_75, int * p_76, unsigned char p_77)
{
    char l_84 = 1L;
    int *l_87 = &g_29;
    int l_88 = (-9L);
    int ** const l_114 = &l_87;
    int *l_189 = &l_88;
    unsigned l_297 = 4294967286UL;
    unsigned short l_300[5];
    int l_322 = 2L;
    int i;
    for (i = 0; i < 5; i++)
        l_300[i] = 0xFED8L;
    for (g_64 = 2; (g_64 >= 0); g_64 -= 1)
    {
        for (p_75 = 2; (p_75 >= 0); p_75 -= 1)
        {
            g_81[0][4] = g_29;
            p_76 = (void*)0;

            ;
        }
    }


    l_88 |= (safe_sub_func_uint8_t_u_u((((l_84 != p_75) != 65535UL) ^ g_29), (safe_lshift_func_uint16_t_u_u((0x9DFF04C3L && (l_87 == (void*)0)), (p_76 != p_76)))));
    if (((safe_div_func_int16_t_s_s(((*l_87) >= (g_81[0][4] > g_63[0])), g_64)) != ((safe_rshift_func_uint16_t_u_u((safe_mod_func_int16_t_s_s(g_17, g_80[1])), 14)) & (g_81[5][0] && (p_76 != &l_88)))))
    {
        short l_104 = 3L;
        unsigned l_154[7] = {0x094C73A1L, 0x094C73A1L, 0UL, 0x094C73A1L, 0x094C73A1L, 0UL, 0x094C73A1L};
        int l_173 = 1L;
        int *l_246 = (void*)0;
        int ***l_268 = &g_185;
        unsigned l_271 = 18446744073709551612UL;
        int *l_310[3][3] = {{&l_88, (void*)0, &l_88}, {&l_88, (void*)0, &l_88}, {&l_88, (void*)0, &l_88}};
        long long l_329 = 0x0067A72BEE661A0DLL;
        int i, j;
        if ((*p_74))
        {
            unsigned short l_103 = 0x720AL;
            int **l_153 = &l_87;
            int ***l_152 = &l_153;
            int l_196 = 0x44CB16B9L;
            if ((*l_87))
            {
                int **l_98 = (void*)0;
                int ***l_97 = &l_98;
                unsigned char l_118 = 0UL;
                char l_131 = (-1L);
                for (g_64 = 0; g_64 < 8; g_64 += 1)
                {
                    for (p_73 = 0; p_73 < 6; p_73 += 1)
                    {
                        g_81[g_64][p_73] = (-6L);
                    }
                }
                (*l_97) = &p_76;

                ;
                for (p_73 = 0; (p_73 == 56); p_73 = safe_add_func_int8_t_s_s(p_73, 9))
                {
                    unsigned l_109[8][5][6] = {{{4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}}, {{4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}}, {{4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}}, {{4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}}, {{4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}}, {{4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}}, {{4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}}, {{4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}, {4294967295UL, 1UL, 1UL, 7UL, 1UL, 0UL}}};
                    int l_122 = (-8L);
                    int i, j, k;
                }
            }
            else
            {
                int **l_134 = &g_115;
                if ((((l_104 & (+g_64)) && ((((safe_mod_func_uint32_t_u_u((g_81[1][5] == (l_134 == (void*)0)), (safe_div_func_uint8_t_u_u(g_29, (**l_134))))) > (safe_sub_func_int8_t_s_s(l_104, (l_103 == l_104)))) & 1L) & 0L)) == g_80[1]))
                {
                    int *l_141 = &g_64;
                    (*l_114) = (void*)0;

                    ;
                    for (l_88 = 0; (l_88 < (-29)); l_88 = safe_sub_func_uint8_t_u_u(l_88, 9))
                    {
                        l_141 = (void*)0;

                        ;
                        (*g_115) = (**l_134);
                    }

                    ;
                }
                else
                {
                    unsigned l_144[7];
                    int *l_149 = &l_88;
                    int i;
                    for (i = 0; i < 7; i++)
                        l_144[i] = 0x21925695L;
                    for (p_73 = (-7); (p_73 > 24); p_73 = safe_add_func_int64_t_s_s(p_73, 8))
                    {
                    }
                    (*l_134) = &g_29;

                    ;
                    (*l_149) |= (*g_115);
                }

                ;
                ;
            }

            ;
            ;
            g_64 = (*g_115);
            if ((safe_lshift_func_int8_t_s_s((((void*)0 == l_152) | l_154[1]), (safe_lshift_func_uint8_t_u_s(0xB1L, 2)))))
            {
                unsigned l_157 = 0UL;
                int l_160[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_160[i] = 2L;
                if (l_157)
                {
                    (*l_153) = p_76;


                }
                else
                {
                    g_64 |= (safe_add_func_uint64_t_u_u(0x707698F8DB1BCEFELL, ((void*)0 == (*l_153))));
                }


                g_64 = 0xC679D41DL;
                if ((&g_64 != &g_64))
                {
                    g_64 ^= (*p_74);
                    l_160[0] = l_157;
                }
                else
                {
                    short l_169 = 1L;
                    if (l_160[0])
                    {
                        int ***l_163 = &l_153;
                        int *l_164 = (void*)0;
                        int *l_165 = (void*)0;
                        int *l_168[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_168[i] = &l_88;
                        g_64 = (((safe_sub_func_uint32_t_u_u(((p_77 ^ 0x5435L) <= (l_160[0] && p_77)), g_63[0])) || (1L <= (-1L))) != ((void*)0 == l_163));
                        (**l_152) = l_165;

                        ;
                        l_169 = (safe_lshift_func_int16_t_s_s((g_81[5][3] & p_75), 10));
                    }
                    else
                    {
                        int *l_170[10][6] = {{&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}, {&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}, {&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}, {&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}, {&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}, {&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}, {&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}, {&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}, {&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}, {&g_29, &g_29, &l_88, &l_160[0], &g_64, &l_160[0]}};
                        int i, j;
                        g_64 = (*g_115);
                        l_160[0] = (p_75 <= g_81[3][5]);
                        g_64 = ((&p_76 != (void*)0) != ((5L | g_80[1]) <= (l_169 && ((void*)0 == p_74))));
                        (*l_114) = (void*)0;

                        ;
                    }

                    ;
                    l_173 ^= (safe_sub_func_uint32_t_u_u((p_73 > g_17), 0x293C1CF1L));
                    for (l_84 = 0; (l_84 > 14); l_84 = safe_add_func_uint8_t_u_u(l_84, 7))
                    {
                        (*l_153) = &g_64;

                        ;
                        return &g_29;


                    }
                    (**l_152) = p_74;


                }


            }
            else
            {
                int *l_188 = &l_173;
                for (l_103 = 0; (l_103 >= 8); l_103 = safe_add_func_int16_t_s_s(l_103, 1))
                {
                    (**l_152) = (*l_114);
                }
                (*l_188) &= (safe_mod_func_uint16_t_u_u(((g_29 >= ((safe_add_func_int16_t_s_s((safe_sub_func_int32_t_s_s((p_73 > g_81[0][0]), (*g_115))), ((void*)0 != g_184))) | g_17)) <= (safe_sub_func_int64_t_s_s((&p_76 != (void*)0), g_81[0][2]))), g_81[0][4]));
                (**l_152) = l_189;

                ;
            }


            l_196 ^= (((safe_add_func_int16_t_s_s(g_63[0], (&p_76 != (void*)0))) >= 0x5E1E2EF9C45FBFB9LL) | (p_73 || (g_29 || (((safe_rshift_func_uint16_t_u_s((g_17 && (safe_add_func_int64_t_s_s(p_77, (((void*)0 != (*g_184)) >= g_29)))), 2)) < (*l_189)) <= g_80[2]))));
        }
        else
        {
            unsigned char l_205 = 255UL;
            long long l_215 = 0xDB0838230FADCD0BLL;
            unsigned l_227[1][6][5] = {{{0xFB75AE65L, 0x7DB7F8A6L, 0xFB75AE65L, 0UL, 0x26318D7EL}, {0xFB75AE65L, 0x7DB7F8A6L, 0xFB75AE65L, 0UL, 0x26318D7EL}, {0xFB75AE65L, 0x7DB7F8A6L, 0xFB75AE65L, 0UL, 0x26318D7EL}, {0xFB75AE65L, 0x7DB7F8A6L, 0xFB75AE65L, 0UL, 0x26318D7EL}, {0xFB75AE65L, 0x7DB7F8A6L, 0xFB75AE65L, 0UL, 0x26318D7EL}, {0xFB75AE65L, 0x7DB7F8A6L, 0xFB75AE65L, 0UL, 0x26318D7EL}}};
            const int *l_254 = &g_29;
            int i, j, k;
            (*g_115) = (*p_74);
            for (l_88 = 0; (l_88 <= 2); l_88 += 1)
            {
                int l_211[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_211[i] = 7L;
                (*g_185) = (void*)0;

                ;
                if (l_154[l_88])
                    break;
                for (g_64 = 4; (g_64 >= 0); g_64 -= 1)
                {
                    int i, j;
                    l_173 |= (safe_mod_func_uint16_t_u_u(((((g_80[l_88] || g_81[(g_64 + 3)][(l_88 + 1)]) <= ((!(((~((safe_mod_func_int64_t_s_s((g_81[(l_88 + 1)][(g_64 + 1)] < ((((p_74 == (**g_184)) && (6L > ((0x7586884AE3615448LL | l_154[g_64]) | (safe_add_func_uint32_t_u_u(((!(safe_sub_func_uint16_t_u_u(p_77, p_75))) < g_64), l_205))))) && p_75) | (*l_189))), g_80[l_88])) == 0x65F44572L)) & p_73) < g_64)) >= p_73)) != 6UL) || 1UL), l_154[g_64]));
                    l_211[0] = (safe_add_func_int16_t_s_s(g_29, (p_77 <= (safe_add_func_uint32_t_u_u((p_73 & (safe_unary_minus_func_uint16_t_u(p_73))), ((void*)0 != p_74))))));
                }
                for (g_64 = 6; (g_64 >= 0); g_64 -= 1)
                {
                    unsigned l_213 = 0xC3080978L;
                    for (l_205 = 1; (l_205 <= 5); l_205 += 1)
                    {
                        int *l_214[3][7][10] = {{{&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}}, {{&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}}, {{&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}, {&g_29, &l_211[0], &g_29, &l_173, &g_64, (void*)0, &l_211[0], (void*)0, &g_64, &l_173}}};
                        int i, j, k;
                        g_212 ^= g_80[l_88];
                        if (l_213)
                            break;
                        l_211[0] = 0x742DCBA3L;
                        (**g_184) = (*g_185);
                    }
                    l_215 = (*p_74);
                }
                for (l_173 = 6; (l_173 >= 0); l_173 -= 1)
                {
                    int l_216 = 0L;
                    int *l_217 = &l_211[0];
                    l_216 = 0L;
                    (*l_217) = l_154[l_88];
                    (*l_217) = 9L;
                    for (g_64 = 5; (g_64 >= 0); g_64 -= 1)
                    {
                        return (*g_185);


                    }
                }
            }

            ;
            if ((*l_87))
            {
                int ***l_236 = &g_185;
                if ((p_75 <= (253UL >= p_77)))
                {
                    long long l_232 = 2L;
                    int ***l_237 = &g_185;
                    (*l_189) = (*p_74);
                    for (l_88 = 0; (l_88 < (-11)); l_88--)
                    {
                        int ***l_224 = &g_185;
                        int *l_233 = &g_64;
                        (*l_233) &= (safe_sub_func_uint8_t_u_u(l_104, (((g_80[2] > ((p_75 || ((l_224 == l_224) == p_75)) < (safe_sub_func_int32_t_s_s(0xE8CEDF58L, l_227[0][0][1])))) >= (safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((l_227[0][0][1] || 0xD27AE381L), l_232)), 0UL))) > l_232)));
                        (*g_185) = (*l_114);

                        ;
                    }

                    ;
                    if ((((((l_232 && 0x82D2ECE7L) != (((l_232 && (p_73 | g_29)) || (safe_lshift_func_uint16_t_u_u(g_81[3][5], 7))) || (l_236 != l_237))) >= g_212) && g_17) >= 0xC9ECL))
                    {
                        g_64 ^= (*p_74);
                        g_64 &= (*p_74);
                        (**l_237) = &l_173;

                        ;
                        (***l_237) |= (safe_div_func_int8_t_s_s(l_154[1], l_154[1]));
                    }
                    else
                    {
                        (**l_236) = (*l_114);

                        ;
                        (*l_189) = (safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(g_212, p_75)) != p_75), (***l_237))) >= 0UL), p_73));
                        (*g_185) = l_246;

                        ;
                    }

                    ;
                }
                else
                {
                    long long l_251[10][2][9] = {{{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}, {{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}, {{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}, {{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}, {{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}, {{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}, {{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}, {{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}, {{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}, {{1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}, {1L, (-5L), (-3L), 0xEE339FBE7750FABALL, (-7L), 0x0F99FADDA2EB418FLL, 0x5572A71F94C5C2B4LL, 5L, 1L}}};
                    int i, j, k;
                    g_64 = ((&p_74 == (void*)0) ^ g_80[2]);
                    l_251[9][1][8] &= (g_17 || (safe_sub_func_int16_t_s_s((*l_189), (((safe_mod_func_int32_t_s_s((g_63[0] | (**l_114)), (*p_74))) || (-10L)) <= (*p_74)))));
                    for (l_173 = 0; (l_173 < 7); l_173++)
                    {
                        const int **l_255[7][1] = {{&l_254}, {&l_254}, {&l_254}, {&l_254}, {&l_254}, {&l_254}, {&l_254}};
                        int i, j;
                        g_256[4] = l_254;
                        (*l_189) = (((*l_254) | (safe_rshift_func_int8_t_s_u((g_212 ^ p_75), 3))) || ((safe_lshift_func_uint16_t_u_u(g_212, 12)) != g_63[0]));
                    }
                }

                ;
            }
            else
            {
                int *l_261 = (void*)0;
                l_261 = (*g_185);

                ;
            }

            ;
            (*l_189) |= (safe_add_func_int64_t_s_s(g_64, (safe_mod_func_uint16_t_u_u(1UL, ((p_73 && (&l_246 != &p_74)) || (p_75 != ((*l_254) == 4294967295UL)))))));
        }


        ;
        g_64 = 0xBEA74FAEL;
        if ((safe_sub_func_int8_t_s_s(((void*)0 == l_268), (safe_rshift_func_uint16_t_u_u((g_80[2] <= l_271), 12)))))
        {
            int l_274 = 1L;
            (*l_189) ^= (0x1EL <= ((safe_mod_func_int32_t_s_s(((*p_74) != (+l_274)), 0xE1187358L)) && ((p_77 >= (p_73 <= ((-10L) || (*p_74)))) != (safe_mod_func_int32_t_s_s((safe_lshift_func_int8_t_s_u(p_75, 6)), p_73)))));
            if ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s(0x2BL, (safe_add_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((g_81[4][4] == (safe_mod_func_int32_t_s_s(1L, (g_29 & (safe_div_func_uint16_t_u_u(p_77, g_80[2])))))), p_77)), 65527UL)), (safe_lshift_func_int16_t_s_s(((*l_189) || 18446744073709551607UL), l_297)))))), 0)))
            {
                (*l_189) |= (safe_mod_func_uint32_t_u_u((!0x9B9B5C6DL), l_300[0]));
            }
            else
            {
                for (l_271 = 0; (l_271 != 3); l_271++)
                {
                    int l_305 = 8L;
                    if (((safe_mod_func_int64_t_s_s((g_81[0][4] >= ((void*)0 == p_76)), ((g_63[0] == (l_305 ^ (0xA8L && (((((safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(g_64, 7)), p_73)) < ((*p_74) <= 3UL)) < g_81[0][4]) ^ 0x949B4F07L) | p_75)))) | 0x1DL))) && 0x0EAFDD4135D0B070LL))
                    {
                        return p_74;



                    }
                    else
                    {
                        unsigned long long l_312[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_312[i] = 0UL;
                        l_312[7] = (0xC09305815CEF59ACLL <= g_311);
                    }
                    (*l_189) ^= 0x3898DC6CL;
                    if ((*l_189))
                        continue;
                    (*l_189) &= (*p_74);
                }
                (*l_114) = p_74;


            }
            (**g_184) = (*g_185);
        }
        else
        {
            char l_336 = 0x85L;
            int l_337 = 0xA361F727L;
            for (l_88 = 16; (l_88 > 29); ++l_88)
            {
                unsigned l_317[6] = {0xBD461673L, 0xBD461673L, 5UL, 0xBD461673L, 0xBD461673L, 5UL};
                int i;
                if ((&l_114 != l_268))
                {
                    l_317[4] = (safe_rshift_func_uint8_t_u_s(((void*)0 != (**g_184)), 0));
                }
                else
                {
                    if ((safe_div_func_uint64_t_u_u(l_317[4], p_75)))
                    {
                        if (l_317[4])
                            break;
                    }
                    else
                    {
                        unsigned long long l_320 = 18446744073709551607UL;
                        int l_321 = 0xE786ED6AL;
                        l_321 = l_320;
                        l_322 = (!(*p_74));
                        (**l_268) = (*l_114);


                        l_321 |= 7L;
                    }
                    (**l_268) = (**g_184);
                    g_64 &= (*p_74);
                }
            }


            (*l_189) = (safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((l_329 != (-7L)), p_73)), (*l_189))), (safe_div_func_int8_t_s_s(((safe_add_func_int16_t_s_s((0x1BD4E096BAAEF258LL < ((void*)0 == &g_185)), l_336)) == (((g_81[1][4] == p_73) > g_63[0]) != 255UL)), g_81[0][4]))));
            l_337 &= (*p_74);
        }


        (*l_189) = (*p_74);
    }
    else
    {
        unsigned short l_338 = 0x28ACL;
        l_338 = (*p_74);
    }



    return p_76;



}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_29, "g_29", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_63[i], "g_63[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_64, "g_64", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_80[i], "g_80[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_81[i][j], "g_81[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_349[i], "g_349[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_400, "g_400", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_532[i], "g_532[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_647, "g_647", print_hash_value);
    transparent_crc(g_686, "g_686", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_704[i], "g_704[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_745[i][j][k], "g_745[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_915[i][j], "g_915[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
