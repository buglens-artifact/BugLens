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



static int g_3 = 1L;
static int *g_2 = &g_3;
static unsigned long long g_62[6] = {18446744073709551613UL, 0xB6367AFFF16CE65CLL, 18446744073709551613UL, 0xB6367AFFF16CE65CLL, 18446744073709551613UL, 0xB6367AFFF16CE65CLL};
static int g_63 = 0xEEB303A6L;
static int g_64 = 0x389D0E13L;
static int g_65 = 0xA992350CL;
static int g_81 = (-10L);
static int **g_227 = &g_2;
static int g_440 = 0x5F3D8B2DL;
static int g_449[4] = {0L, 0L, 0L, 0L};
static int *g_487 = &g_3;
static int **g_486 = &g_487;
static int g_490 = (-5L);



static unsigned long long func_1(void);
static int * func_5(unsigned char p_6, int * p_7, unsigned p_8);
static unsigned char func_9(unsigned short p_10, int p_11);
static int func_12(char p_13, unsigned short p_14);
static unsigned long long func_18(int ** p_19);
static int ** func_20(unsigned p_21, long long p_22, int ** p_23, unsigned p_24);
static unsigned short func_33(unsigned short p_34, int ** p_35, int ** p_36, int ** p_37, unsigned long long p_38);
static int ** func_41(unsigned long long p_42, int * p_43);
static char func_44(unsigned p_45, unsigned short p_46, unsigned p_47);
static long long func_56(int ** p_57, unsigned p_58);
static unsigned long long func_1(void)
{
    int **l_4[5][6][8] = {{{&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}}, {{&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}}, {{&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}}, {{&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}}, {{&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}, {&g_2, &g_2, &g_2, &g_2, (void*)0, (void*)0, &g_2, &g_2}}};
    int l_15 = 9L;
    unsigned l_578 = 6UL;
    int i, j, k;
    g_2 = g_2;
    (*g_486) = func_5(func_9(g_3, func_12(((l_15 || g_3) , (safe_sub_func_int64_t_s_s((-1L), func_18(func_20((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(0xC556L, (safe_rshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(func_33((safe_mod_func_uint8_t_u_u((g_3 | g_3), g_3)), func_41((func_44((safe_add_func_int16_t_s_s((g_3 > (*g_2)), g_3)), g_3, g_3) , g_64), &g_3), l_4[4][1][0], l_4[4][1][0], g_3), g_3)), 1)))), g_62[4])), g_3, g_486, g_440))))), g_3)), &g_3, l_578);
    return g_65;
}







static int * func_5(unsigned char p_6, int * p_7, unsigned p_8)
{
    int ***l_581 = &g_227;
    int l_584 = 0xB915AE76L;
    int l_585 = 0L;
    (*g_227) = (*g_227);
    (*p_7) = (!(safe_lshift_func_uint8_t_u_u(((((void*)0 == l_581) , p_6) <= ((safe_add_func_int8_t_s_s(((**l_581) != (func_12(l_584, (((&g_227 == l_581) >= func_12(p_6, func_56(&g_2, p_8))) & p_6)) , p_7)), l_585)) || g_63)), 1)));
    return (*g_227);
}







static unsigned char func_9(unsigned short p_10, int p_11)
{
    int *l_576[1][10][1] = {{{&g_3}, {&g_3}, {&g_3}, {&g_3}, {&g_3}, {&g_3}, {&g_3}, {&g_3}, {&g_3}, {&g_3}}};
    unsigned char l_577 = 0xD7L;
    int i, j, k;
    (*g_486) = l_576[0][1][0];
    p_11 = (g_81 < (l_577 , (-3L)));
    return g_64;
}







static int func_12(char p_13, unsigned short p_14)
{
    unsigned char l_575 = 0x5FL;
    return l_575;
}







static unsigned long long func_18(int ** p_19)
{
    int *l_524 = (void*)0;
    int l_525 = 0x136C637AL;
    int ***l_526 = (void*)0;
    int l_529 = (-5L);
    char l_552[4][3][1] = {{{(-8L)}, {(-8L)}, {(-8L)}}, {{(-8L)}, {(-8L)}, {(-8L)}}, {{(-8L)}, {(-8L)}, {(-8L)}}, {{(-8L)}, {(-8L)}, {(-8L)}}};
    unsigned short l_572[6];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_572[i] = 0x70E1L;
    for (g_440 = 0; (g_440 <= 3); g_440 += 1)
    {
        (*g_227) = l_524;
    }
    l_529 = (((l_525 , &p_19) == l_526) || (safe_mul_func_uint8_t_u_u(255UL, func_56(&g_2, (g_64 , (g_81 , g_62[3]))))));
    for (l_529 = 0; (l_529 > (-26)); l_529 = safe_sub_func_int32_t_s_s(l_529, 4))
    {
        char l_532 = 0x2FL;
        int **l_561[7][2] = {{&g_487, &g_487}, {&g_487, &g_487}, {&g_487, &g_487}, {&g_487, &g_487}, {&g_487, &g_487}, {&g_487, &g_487}, {&g_487, &g_487}};
        int i, j;
        if ((0x8F4561DA41F62F64LL != (&g_227 != (void*)0)))
        {
            int *l_533 = (void*)0;
            int *l_534 = &l_525;
            (*g_486) = (void*)0;
            (*l_534) = (l_532 || l_532);
        }
        else
        {
            unsigned l_535 = 0xCDEC1C79L;
            short l_540 = 0L;
            int *l_571 = &g_490;
            if ((l_535 , (g_81 <= (l_532 && (65535UL || (9L != g_490))))))
            {
                long long l_536[2][1];
                int *l_538 = &g_63;
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_536[i][j] = 0xA4DB7A2FF9E693D8LL;
                }
                (*p_19) = (*g_227);
                if (l_536[1][0])
                {
                    int *l_537 = &g_64;
                    (*l_537) = l_535;
                    (*g_227) = (*g_486);
                    return l_532;
                }
                else
                {
                    short l_539[6] = {0x6225L, (-9L), 0x6225L, (-9L), 0x6225L, (-9L)};
                    int l_541 = 0x452E0254L;
                    int i;
                    l_541 = (((l_538 == l_538) == (l_539[5] <= l_539[3])) == l_540);
                }
                if (((((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((safe_add_func_int16_t_s_s(0x3750L, ((safe_mul_func_uint8_t_u_u(l_535, 0x0BL)) == (~g_62[0])))) , 0x661DL), 13)) & (safe_lshift_func_int8_t_s_u((func_56(p_19, g_490) , l_535), l_536[1][0]))), g_440)) != 0xA4A6L) <= l_532) , l_552[1][0][0]))
                {
                    int l_555[6] = {0x8E4DFDAFL, 0x8E4DFDAFL, 0x9F6EF841L, 0x8E4DFDAFL, 0x8E4DFDAFL, 0x9F6EF841L};
                    int i;
                    for (g_65 = 9; (g_65 < 29); ++g_65)
                    {
                        (*l_538) = l_532;
                        l_555[2] = 0xE192BB06L;
                        (*g_227) = (*g_486);
                    }
                    for (g_65 = 0; (g_65 > (-5)); g_65--)
                    {
                        if (l_540)
                            break;
                    }
                }
                else
                {
                    if ((*l_538))
                        break;
                }
                for (g_490 = 0; (g_490 >= 28); g_490 = safe_add_func_int8_t_s_s(g_490, 4))
                {
                    (*g_227) = (*g_227);
                }
            }
            else
            {
                unsigned l_560 = 8UL;
                int l_573 = 0L;
                long long l_574 = 0xA76985ACB13EE3A2LL;
                if (l_532)
                {
                    int l_562 = 0x88E13076L;
                    (*g_227) = (void*)0;
                    g_63 = g_81;
                }
                else
                {
                    p_19 = &g_2;
                    (*l_571) = 0x274AF30EL;
                }
                l_573 = 5L;
                l_574 = (-5L);
                if ((*l_571))
                    break;
            }
        }
    }
    return l_552[1][0][0];
}







static int ** func_20(unsigned p_21, long long p_22, int ** p_23, unsigned p_24)
{
    int *l_497 = &g_64;
    int ***l_498 = &g_486;
    char l_499 = 1L;
    long long l_523 = 0x6D039B72B157AAEDLL;
    for (g_81 = 0; (g_81 == (-5)); g_81--)
    {
        long long l_495 = (-8L);
        int *l_496 = &g_65;
        (*g_486) = (*g_486);
        (*g_486) = (*g_227);
        (*l_496) = (g_490 , func_44(p_21, g_449[0], ((0L == (g_490 > (p_21 > ((6UL && ((((((safe_lshift_func_int8_t_s_u(p_21, (g_440 > p_24))) <= l_495) , 1UL) , l_495) , g_65) > p_24)) & 0xC6L)))) >= 0xA553L)));
    }
    (*l_497) = (**p_23);
    l_497 = l_497;
    if (((l_498 == (l_499 , &p_23)) == p_24))
    {
        short l_501 = 0L;
        int ***l_514 = &g_227;
        for (g_81 = 5; (g_81 >= 0); g_81 -= 1)
        {
            int l_500 = (-1L);
            (*g_486) = (void*)0;
            l_500 = (func_44(l_500, (((((l_501 > (*g_2)) >= g_3) , g_3) & ((((g_64 && (*l_497)) , ((**l_498) != (void*)0)) && l_500) && 0x638DL)) , g_3), g_65) || 0xB5L);
            for (p_24 = 0; (p_24 <= 3); p_24 += 1)
            {
                int **l_504 = &l_497;
                int i;
                (*l_497) = (g_449[p_24] == g_62[g_81]);
            }
        }
    }
    else
    {
        int l_518 = 0x283B95BEL;
        (*p_23) = (**l_498);
        (*l_497) = (((g_449[2] != (***l_498)) && (((safe_mod_func_int16_t_s_s(g_81, ((!l_518) || 0x276C7E572716CB6BLL))) >= func_56(&g_2, ((safe_lshift_func_int16_t_s_u((g_65 > 0x84C2F172L), ((safe_mul_func_int16_t_s_s(p_21, 0x57A8L)) || g_64))) , p_21))) && (**p_23))) || l_523);
    }
    return &g_487;
}







static unsigned short func_33(unsigned short p_34, int ** p_35, int ** p_36, int ** p_37, unsigned long long p_38)
{
    int *l_236 = (void*)0;
    unsigned short l_304[1][6][9] = {{{4UL, 4UL, 0xC9D4L, 0xC9D4L, 4UL, 4UL, 4UL, 0xC9D4L, 0xC9D4L}, {4UL, 4UL, 0xC9D4L, 0xC9D4L, 4UL, 4UL, 4UL, 0xC9D4L, 0xC9D4L}, {4UL, 4UL, 0xC9D4L, 0xC9D4L, 4UL, 4UL, 4UL, 0xC9D4L, 0xC9D4L}, {4UL, 4UL, 0xC9D4L, 0xC9D4L, 4UL, 4UL, 4UL, 0xC9D4L, 0xC9D4L}, {4UL, 4UL, 0xC9D4L, 0xC9D4L, 4UL, 4UL, 4UL, 0xC9D4L, 0xC9D4L}, {4UL, 4UL, 0xC9D4L, 0xC9D4L, 4UL, 4UL, 4UL, 0xC9D4L, 0xC9D4L}}};
    int ***l_363 = &g_227;
    int *l_382 = &g_65;
    unsigned char l_423 = 0x21L;
    int **l_429 = &l_382;
    int l_438 = 1L;
    unsigned l_477 = 0x23AE28D1L;
    int i, j, k;
    l_236 = (*g_227);
    if ((safe_lshift_func_int8_t_s_s((0xE25D2D7BL != (((func_56(((safe_div_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s((0x23B886E6L | (p_38 != (((safe_unary_minus_func_int8_t_s(p_34)) > g_62[2]) < (safe_div_func_uint64_t_u_u(p_38, (safe_rshift_func_uint8_t_u_u(((g_3 , 0UL) >= g_81), g_65))))))), 2UL)) && g_65), p_34)) , (void*)0), p_38) & 0x3CD54210L) | 0xA20B9343L) != 0x8ED6L)), g_65)))
    {
        unsigned long long l_254 = 0UL;
        int *l_257 = &g_64;
        unsigned l_273 = 0xBEB16780L;
        int l_282[10][4][6] = {{{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}, {{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}, {{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}, {{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}, {{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}, {{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}, {{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}, {{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}, {{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}, {{0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}, {0L, (-3L), (-7L), (-7L), (-3L), 0L}}};
        int i, j, k;
        for (g_64 = 0; (g_64 < 12); ++g_64)
        {
            int ***l_262 = (void*)0;
            int *l_285 = &g_63;
            short l_323 = 0L;
            if ((((safe_mul_func_int16_t_s_s((((safe_sub_func_int32_t_s_s(l_254, (0x39L || 255UL))) && 18446744073709551612UL) ^ func_56(p_35, g_65)), ((((safe_mul_func_int8_t_s_s(p_34, (l_257 == l_257))) , g_64) , g_65) > p_34))) >= 0x00L) , (*l_257)))
            {
                unsigned l_274 = 0UL;
                unsigned long long l_286 = 0xBEC31C5FECF5FCE7LL;
                int *l_325 = &l_282[7][1][3];
                unsigned long long l_350 = 0x418DC97FACF82B64LL;
                if (((safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u(p_34, ((void*)0 == l_262))), 1L)) < (safe_div_func_uint8_t_u_u(((func_44(g_81, (((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s(((safe_mod_func_int64_t_s_s(func_56(func_41(g_65, (*g_227)), p_34), p_38)) != (*l_236)), g_81)), l_273)), l_274)) & g_81) , g_65), p_38) && p_34) != g_81), 0xB8L))))
                {
                    unsigned long long l_279 = 0x45477F4ADE73CA45LL;
                    for (p_38 = 0; (p_38 > 22); ++p_38)
                    {
                        (*p_35) = (void*)0;
                    }
                    for (g_63 = (-21); (g_63 > 2); g_63 = safe_add_func_uint16_t_u_u(g_63, 6))
                    {
                        int *l_280 = (void*)0;
                        int *l_281 = &g_65;
                        (*p_35) = (*g_227);
                        (*l_281) = l_279;
                        (*p_35) = (*g_227);
                    }
                    (*g_227) = (*g_227);
                    l_282[5][0][4] = (*l_257);
                }
                else
                {
                    unsigned long long l_295[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_295[i] = 0x34B4380D1C07B5D8LL;
                    if ((safe_add_func_int8_t_s_s(func_56(&g_2, p_38), g_81)))
                    {
                        (*p_35) = l_285;
                        return l_286;
                    }
                    else
                    {
                        (*l_285) = (g_3 || (safe_sub_func_int64_t_s_s((&g_2 != ((safe_lshift_func_uint8_t_u_s((p_38 , (0x07CEL && ((safe_add_func_int8_t_s_s((safe_div_func_int8_t_s_s(l_295[0], (safe_mod_func_int64_t_s_s((((safe_add_func_int64_t_s_s((((*g_2) && (safe_lshift_func_int8_t_s_u(1L, ((((safe_rshift_func_uint8_t_u_s(0xB9L, 5)) , l_286) ^ g_64) ^ l_304[0][1][4])))) || g_65), 0x212ADDC4B2344DFELL)) , (*l_236)) == g_3), g_63)))), p_38)) , 3UL))), p_38)) , p_37)), g_64)));
                    }
                    for (l_254 = 0; (l_254 > 5); ++l_254)
                    {
                        unsigned l_324 = 5UL;
                        (*g_227) = l_236;
                        (*l_285) = ((((safe_rshift_func_int8_t_s_u((((*g_227) != (*g_227)) , (safe_div_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(l_295[0], 14)) >= (safe_rshift_func_int16_t_s_s(0x4DA2L, (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0x3B1EL, (*l_236))), ((((1UL || func_44((*l_285), (safe_sub_func_uint32_t_u_u((((safe_div_func_int32_t_s_s((**g_227), g_62[1])) == 65532UL) == p_38), 1UL)), p_38)) != p_34) & g_65) && l_323)))))), l_324))), 0)) && (**g_227)) <= (*l_236)) | g_65);
                        (*g_227) = l_325;
                        (*p_35) = (void*)0;
                    }
                    (*l_325) = 0x99AFD36CL;
                    (*l_325) = (p_38 > (((*l_257) , (safe_mul_func_uint16_t_u_u((func_44(((*l_236) , ((l_325 != (*g_227)) | func_56(&l_236, p_34))), (safe_add_func_int64_t_s_s(g_81, g_62[3])), p_34) , g_64), (*l_325)))) < g_65));
                }
                (*l_285) = (((safe_mul_func_int16_t_s_s(func_44(func_56(((((((safe_lshift_func_uint16_t_u_u((*l_257), 2)) , (*l_257)) , (*l_236)) == ((safe_div_func_int64_t_s_s(((safe_rshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u(g_3, (((-1L) || p_34) >= ((((((*l_257) , (((safe_add_func_int16_t_s_s((*l_285), g_81)) < p_34) == 18446744073709551608UL)) , (*l_236)) <= 1UL) , p_38) <= p_38)))), p_34)) , (*l_236)), p_34)) , g_81)) ^ p_38) , p_36), g_81), g_62[1], (*l_257)), g_3)) | 0L) > (-1L));
                (*l_285) = (func_44(((((((*p_35) != l_236) && (-10L)) ^ 0xB3L) >= (((safe_mod_func_uint16_t_u_u(p_34, g_3)) & ((*g_227) == l_325)) <= g_65)) <= 0x43L), (*l_257), l_350) , (*l_325));
                (*l_285) = (func_44((((safe_lshift_func_int16_t_s_u(g_3, g_63)) <= 250UL) , ((safe_unary_minus_func_int64_t_s((-10L))) || (safe_div_func_uint16_t_u_u(((p_38 >= (-1L)) , (((safe_div_func_int8_t_s_s(p_34, (((0x411A97A5L < (*l_257)) || (**g_227)) , (*l_285)))) & g_3) , p_38)), (*l_236))))), (*l_325), p_34) || 1UL);
            }
            else
            {
                unsigned l_360 = 4294967291UL;
                int l_365[3][10][4] = {{{(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}}, {{(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}}, {{(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}, {(-7L), 6L, 0x9D16ABC9L, (-6L)}}};
                int i, j, k;
                for (g_65 = 0; (g_65 < (-25)); g_65 = safe_sub_func_int32_t_s_s(g_65, 1))
                {
                    for (g_63 = 0; (g_63 >= 0); g_63 -= 1)
                    {
                        int i, j, k;
                        l_360 = l_304[g_63][(g_63 + 4)][(g_63 + 8)];
                        if ((*g_2))
                            break;
                    }
                    return p_38;
                }
                if ((+(safe_add_func_uint32_t_u_u(8UL, (&g_227 != l_363)))))
                {
                    for (g_63 = 5; (g_63 >= 1); g_63 -= 1)
                    {
                        unsigned short l_364 = 65530UL;
                        l_365[0][0][1] = l_364;
                    }
                }
                else
                {
                    int *l_372 = &g_3;
                    unsigned short l_373 = 0xBE2FL;
                    if ((g_62[4] != ((p_38 > (safe_div_func_uint8_t_u_u(g_3, 255UL))) | ((((((safe_add_func_int8_t_s_s((g_65 > ((&p_36 == (p_34 , &g_227)) , ((**l_363) == l_372))), p_34)) , p_38) >= l_360) ^ l_373) != g_64) > l_365[1][7][3]))))
                    {
                        int l_374 = (-6L);
                        (*g_227) = (*g_227);
                        if (l_374)
                            continue;
                    }
                    else
                    {
                        (*l_285) = (safe_lshift_func_int16_t_s_u(0xE2D0L, g_64));
                        (*p_35) = (*g_227);
                        if ((*g_2))
                            continue;
                    }
                    (*p_35) = (*p_35);
                }
            }
            for (g_81 = 5; (g_81 >= 0); g_81 -= 1)
            {
                int *l_377 = &g_64;
                (*p_35) = (**l_363);
                l_257 = l_377;
                for (l_254 = 0; (l_254 <= 0); l_254 += 1)
                {
                    int i;
                    for (g_65 = 5; (g_65 >= 1); g_65 -= 1)
                    {
                        int i;
                        (*l_285) = g_62[g_81];
                    }
                    return g_62[g_81];
                }
            }
        }
    }
    else
    {
        char l_381 = 0x2DL;
        unsigned char l_414 = 0x72L;
        int *l_422 = &g_64;
        int ***l_476[3];
        int i;
        for (i = 0; i < 3; i++)
            l_476[i] = (void*)0;
        for (g_81 = 0; (g_81 > 1); g_81++)
        {
            int *l_380 = (void*)0;
            g_65 = (**p_35);
            if ((**p_35))
                continue;
        }
        (*l_382) = (func_44(l_381, ((((*l_363) != (void*)0) , 0x6FL) ^ 1L), ((((void*)0 != l_382) ^ (safe_lshift_func_uint16_t_u_s(l_381, (safe_sub_func_uint32_t_u_u(0x2AB8E564L, g_63))))) , 0xFE5A35B0L)) < (-1L));
        if ((safe_add_func_uint32_t_u_u(g_65, (((safe_add_func_int8_t_s_s((l_381 , (-1L)), (func_44(g_3, (((((p_34 , (p_34 , p_38)) == (((g_64 , (safe_add_func_uint64_t_u_u(((func_44(p_38, (***l_363), g_81) == (-8L)) <= l_381), g_64))) >= p_38) == 8L)) , l_381) <= g_81) > 0x1EL), g_81) <= g_64))) , 0xEEE2EC9CF85DDD06LL) == g_3))))
        {
            return l_381;
        }
        else
        {
            unsigned l_393 = 0UL;
            unsigned char l_401 = 1UL;
            int l_413 = 0xA4D54C2EL;
            int *l_416[7] = {&g_3, &g_3, &g_65, &g_3, &g_3, &g_65, &g_3};
            int i;
            l_393 = (p_38 ^ l_381);
            for (g_65 = 0; (g_65 > (-22)); g_65--)
            {
                int **l_396[10][2] = {{&l_236, &l_236}, {&l_236, &l_236}, {&l_236, &l_236}, {&l_236, &l_236}, {&l_236, &l_236}, {&l_236, &l_236}, {&l_236, &l_236}, {&l_236, &l_236}, {&l_236, &l_236}, {&l_236, &l_236}};
                int *l_428 = &g_64;
                int **l_462 = (void*)0;
                int i, j;
                if ((((g_62[4] >= ((g_3 , func_56(l_396[7][1], p_34)) || (safe_add_func_uint32_t_u_u((246UL >= (func_44(g_3, (g_62[1] , func_44((0x00CF8C86L && 0x713C9789L), p_38, l_393)), l_381) != g_81)), 0x3CA2A10FL)))) != (-1L)) && g_3))
                {
                    (*p_35) = (*p_35);
                }
                else
                {
                    long long l_402 = 0x0B541A9235C06537LL;
                    unsigned l_415 = 0x4277E1FFL;
                    if ((safe_sub_func_uint8_t_u_u((l_401 >= func_56(p_37, l_401)), l_402)))
                    {
                        l_415 = (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s(func_44((safe_lshift_func_int8_t_s_u((0x4EEEL | 0xF9BEL), 5)), l_381, ((p_34 , (&p_35 != (l_381 , &p_37))) & (l_381 , (safe_lshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((l_413 || p_34), 1UL)), 7))))), l_414)) && p_34), 1UL));
                        if ((*l_382))
                            continue;
                    }
                    else
                    {
                        short l_419[6] = {0x6FF0L, 3L, 0x6FF0L, 3L, 0x6FF0L, 3L};
                        int i;
                        (**l_363) = l_416[5];
                        (*p_35) = (*g_227);
                        g_64 = (+((safe_lshift_func_uint16_t_u_s(g_62[4], l_419[0])) ^ (((((l_414 , (safe_sub_func_int32_t_s_s((g_62[3] < (p_34 & 1UL)), g_81))) == ((((void*)0 != p_37) , (void*)0) != &p_35)) && p_34) < 1UL) <= p_34)));
                    }
                    (*p_35) = l_422;
                    (*g_2) = (*l_422);
                    if (l_423)
                        continue;
                }
                for (g_81 = (-12); (g_81 != (-1)); ++g_81)
                {
                    short l_439 = (-9L);
                    unsigned char l_481 = 1UL;
                }
                (*g_227) = (*g_227);
            }
            return g_449[2];
        }
    }
    (*l_429) = (*p_35);
    return (*l_382);
}







static int ** func_41(unsigned long long p_42, int * p_43)
{
    unsigned long long l_223 = 0x30A5C780974CCA55LL;
    int **l_225 = (void*)0;
    int **l_230 = (void*)0;
    int *l_235 = &g_63;
    for (g_65 = 0; (g_65 < (-10)); g_65 = safe_sub_func_int16_t_s_s(g_65, 4))
    {
        unsigned long long l_224 = 18446744073709551615UL;
        int ***l_226[1][5][8] = {{{&l_225, (void*)0, &l_225, (void*)0, &l_225, &l_225, &l_225, &l_225}, {&l_225, (void*)0, &l_225, (void*)0, &l_225, &l_225, &l_225, &l_225}, {&l_225, (void*)0, &l_225, (void*)0, &l_225, &l_225, &l_225, &l_225}, {&l_225, (void*)0, &l_225, (void*)0, &l_225, &l_225, &l_225, &l_225}, {&l_225, (void*)0, &l_225, (void*)0, &l_225, &l_225, &l_225, &l_225}}};
        int i, j, k;
        g_227 = (((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(l_223, p_42)), ((l_223 , func_56(&g_2, (l_224 != func_56(l_225, (l_224 && g_3))))) || (-9L)))) , 18446744073709551611UL) , &g_2);
        (*g_227) = p_43;
        (*g_227) = (p_42 , p_43);
    }
    (*l_235) = func_56(&g_2, (g_65 != (func_44(((((safe_lshift_func_uint8_t_u_s((func_44(((func_56(l_230, p_42) < (*g_2)) , (g_62[5] || ((g_62[5] >= (((safe_add_func_int32_t_s_s((safe_mod_func_uint16_t_u_u(p_42, g_65)), 7L)) <= g_64) < 0xE73054497D976471LL)) > g_62[5]))), g_64, p_42) , p_42), g_62[2])) , p_42) , 7UL) != p_42), g_81, p_42) , 0x1CFCL)));
    return &g_2;
}







static char func_44(unsigned p_45, unsigned short p_46, unsigned p_47)
{
    int *l_50[6][8][1];
    char l_211 = 0xCEL;
    unsigned l_214 = 0xADDDA188L;
    int **l_215 = (void*)0;
    int **l_216 = &l_50[4][1][0];
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
                l_50[i][j][k] = &g_3;
        }
    }
    g_2 = l_50[4][1][0];
    for (p_47 = 0; (p_47 > 49); p_47 = safe_add_func_int64_t_s_s(p_47, 5))
    {
        int l_53 = 0x5996FD0FL;
        int **l_59[7][6][3] = {{{&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}}, {{&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}}, {{&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}}, {{&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}}, {{&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}}, {{&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}}, {{&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}, {&g_2, &g_2, (void*)0}}};
        int i, j, k;
        l_53 = (*g_2);
        if ((*g_2))
            break;
        l_214 = (((safe_sub_func_int64_t_s_s(func_56(l_59[6][2][1], p_45), g_81)) > g_65) <= (+(((safe_rshift_func_uint8_t_u_s(p_45, l_211)) , (safe_mul_func_uint8_t_u_u(g_65, (((l_50[2][6][0] != (void*)0) , 9L) && p_45)))) , p_46)));
        if (p_45)
            break;
    }
    (*l_216) = l_50[4][3][0];
    return p_47;
}







static long long func_56(int ** p_57, unsigned p_58)
{
    short l_80[4][1];
    int *l_83 = &g_65;
    short l_121 = 0x6069L;
    int l_129 = 0x8018D861L;
    short l_161 = 9L;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_80[i][j] = 0xF4B0L;
    }
    for (p_58 = (-17); (p_58 < 29); p_58 = safe_add_func_int8_t_s_s(p_58, 1))
    {
        int *l_69 = (void*)0;
        int l_88 = 0L;
        for (g_63 = 0; (g_63 <= 5); g_63 += 1)
        {
            int *l_66 = &g_64;
            unsigned l_99 = 0UL;
            int l_127 = 9L;
            int l_208 = 0x80347476L;
            int i;
        }
    }
    return g_3;
}





int main (int argc, char* argv[])
{
    int i;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_62[i], "g_62[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_440, "g_440", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_449[i], "g_449[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_490, "g_490", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
