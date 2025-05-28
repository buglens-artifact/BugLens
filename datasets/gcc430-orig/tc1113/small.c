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



static short g_13 = 0xBE9FL;
static unsigned char g_41 = 1UL;
static unsigned long long g_44 = 0xCEA2FF3E141B6BA0LL;
static unsigned g_66[2] = {1UL, 1UL};
static unsigned char g_73 = 0UL;
static volatile unsigned long long g_76 = 0UL;
static volatile unsigned long long *g_75 = &g_76;
static volatile unsigned long long * volatile * volatile g_74 = &g_75;
static short g_81 = 0x4B13L;
static long long g_83 = 0L;
static int g_101[8] = {1L, 1L, 8L, 1L, 1L, 8L, 1L, 1L};
static int * const g_100 = &g_101[7];
static int *g_103 = (void*)0;
static int ** volatile g_102[2][4] = {{&g_103, (void*)0, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0}};
static int ** volatile g_104 = (void*)0;
static unsigned g_107 = 0UL;
static int ** volatile g_113 = &g_103;
static char g_126[2] = {0x80L, 0x80L};
static int ** volatile g_169[10] = {&g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103};
static int ** const volatile g_170 = (void*)0;
static int ** volatile g_171 = &g_103;
static short g_269[3][8][6] = {{{1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}}, {{1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}}, {{1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}, {1L, 1L, 0x6821L, 1L, 3L, 0xF07CL}}};
static int g_272 = (-1L);
static int * volatile g_271[2] = {&g_272, &g_272};
static volatile unsigned char * const * const volatile g_283 = (void*)0;
static int ** const volatile g_304[1][3][7] = {{{&g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103}}};
static int ** volatile g_306 = (void*)0;
static unsigned long long g_329 = 8UL;
static int ** volatile g_360 = &g_103;
static unsigned long long **g_361 = (void*)0;
static volatile unsigned char g_371 = 0UL;
static volatile unsigned char *g_370 = &g_371;
static volatile unsigned char **g_369 = &g_370;
static const int *g_406[10] = {&g_101[4], &g_272, &g_101[4], &g_272, &g_101[4], &g_272, &g_101[4], &g_272, &g_101[4], &g_272};
static const int ** volatile g_405 = &g_406[7];
static const int ** volatile g_443 = &g_406[8];
static volatile unsigned g_476 = 0xAD4B5F37L;
static unsigned long long g_478[6][9] = {{5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL}, {5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL, 5UL}};
static int g_499 = 0L;
static int g_510[10] = {0x99F58D1AL, 0xB473B25EL, 0x99F58D1AL, 0xB473B25EL, 0x99F58D1AL, 0xB473B25EL, 0x99F58D1AL, 0xB473B25EL, 0x99F58D1AL, 0xB473B25EL};
static int * volatile g_521 = &g_272;
static unsigned *g_545 = &g_66[1];
static unsigned long long *g_550 = &g_478[3][7];
static int ** volatile g_553 = (void*)0;
static int ** volatile g_554[6][3][8] = {{{(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}}, {{(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}}, {{(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}}, {{(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}}, {{(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}}, {{(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}, {(void*)0, &g_103, &g_103, (void*)0, (void*)0, &g_103, &g_103, (void*)0}}};
static short *** volatile g_637 = (void*)0;
static short *g_640 = &g_13;
static short **g_639[5] = {&g_640, (void*)0, &g_640, (void*)0, &g_640};
static short *** volatile g_638 = &g_639[4];
static unsigned short g_674 = 0x1F6AL;
static int g_679 = (-10L);
static const int ** volatile g_747[6][1] = {{&g_406[7]}, {&g_406[7]}, {&g_406[7]}, {&g_406[7]}, {&g_406[7]}, {&g_406[7]}};
static const int ** volatile g_748 = &g_406[5];
static unsigned g_768[7][5][7] = {{{6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}}, {{6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}}, {{6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}}, {{6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}}, {{6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}}, {{6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}}, {{6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}, {6UL, 0UL, 0x42E3FC3EL, 5UL, 5UL, 0x42E3FC3EL, 0UL}}};
static unsigned long long ***g_773 = &g_361;
static volatile int g_792[1] = {1L};
static volatile int *g_791[6][4] = {{(void*)0, (void*)0, &g_792[0], &g_792[0]}, {(void*)0, (void*)0, &g_792[0], &g_792[0]}, {(void*)0, (void*)0, &g_792[0], &g_792[0]}, {(void*)0, (void*)0, &g_792[0], &g_792[0]}, {(void*)0, (void*)0, &g_792[0], &g_792[0]}, {(void*)0, (void*)0, &g_792[0], &g_792[0]}};
static volatile int **g_790 = &g_791[1][2];
static unsigned g_808[1][5] = {{0xED4A7614L, 0xED4A7614L, 0xED4A7614L, 0xED4A7614L, 0xED4A7614L}};
static short *** volatile g_849 = &g_639[0];
static int ** volatile g_900 = &g_103;
static int ** volatile g_965 = &g_103;
static int ** volatile g_1005[2][9] = {{&g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103}, {&g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103, &g_103}};
static int ** volatile g_1006 = &g_103;
static int ** volatile g_1007[10][3][8] = {{{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}, {{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}, {{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}, {{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}, {{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}, {{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}, {{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}, {{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}, {{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}, {{&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}, {&g_103, (void*)0, &g_103, (void*)0, &g_103, &g_103, &g_103, (void*)0}}};
static long long g_1043 = 0x044C7E91EBDBC17FLL;
static unsigned g_1048[3] = {0x3159F631L, 0x3159F631L, 0x3159F631L};
static long long *g_1059 = (void*)0;
static long long **g_1058 = &g_1059;
static long long ***g_1057[8][3] = {{&g_1058, &g_1058, &g_1058}, {&g_1058, &g_1058, &g_1058}, {&g_1058, &g_1058, &g_1058}, {&g_1058, &g_1058, &g_1058}, {&g_1058, &g_1058, &g_1058}, {&g_1058, &g_1058, &g_1058}, {&g_1058, &g_1058, &g_1058}, {&g_1058, &g_1058, &g_1058}};
static unsigned short g_1097 = 0xF367L;
static int ** volatile g_1195 = &g_103;
static volatile unsigned g_1208 = 0x2B422C08L;
static int ** volatile g_1215 = &g_103;
static int g_1229 = 0x668F8038L;
static long long g_1282[4][6][3] = {{{0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}}, {{0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}}, {{0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}}, {{0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}, {0L, 0x872123F33F8C61A8LL, 0xA520780576EB3057LL}}};
static volatile char g_1295[4] = {1L, (-3L), 1L, (-3L)};
static volatile char *g_1294 = &g_1295[2];
static volatile char **g_1293 = &g_1294;
static int g_1297 = (-2L);
static int g_1306 = (-6L);
static volatile short g_1342 = 0xEDD6L;
static unsigned short *g_1364 = &g_674;
static unsigned short **g_1363 = &g_1364;
static unsigned short *** volatile g_1362[2][10][1] = {{{&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}}, {{&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}, {&g_1363}}};
static const int *g_1370 = &g_272;
static const int ** volatile g_1369[7][10][2] = {{{(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}}, {{(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}}, {{(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}}, {{(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}}, {{(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}}, {{(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}}, {{(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}, {(void*)0, &g_1370}}};
static const int ** volatile g_1371 = &g_1370;
static long long g_1387 = 1L;
static unsigned g_1442 = 0x39D055DEL;
static unsigned g_1663 = 0x6B49F8E7L;
static unsigned g_1667[5][3] = {{0x78A9BC6CL, 0x78A9BC6CL, 18446744073709551615UL}, {0x78A9BC6CL, 0x78A9BC6CL, 18446744073709551615UL}, {0x78A9BC6CL, 0x78A9BC6CL, 18446744073709551615UL}, {0x78A9BC6CL, 0x78A9BC6CL, 18446744073709551615UL}, {0x78A9BC6CL, 0x78A9BC6CL, 18446744073709551615UL}};
static volatile char * volatile *g_1674 = &g_1294;
static volatile char * volatile ** volatile g_1673 = &g_1674;
static volatile char * volatile ** volatile *g_1672 = &g_1673;
static int * volatile g_1730 = &g_1229;
static int * volatile g_1826 = &g_1297;
static int * volatile * const volatile g_1827 = &g_271[0];
static unsigned char *g_1879 = &g_73;
static unsigned char **g_1878 = &g_1879;
static unsigned g_1947 = 0x0C27046AL;
static unsigned char g_2016 = 0xCBL;
static const int ** volatile g_2025 = &g_1370;



static unsigned long long func_1(void);
static unsigned short func_6(char p_7, short p_8);
static short func_9(long long p_10, unsigned p_11, unsigned long long p_12);
static long long func_14(long long p_15, int p_16, int p_17, unsigned char p_18);
static unsigned short func_19(long long p_20, int p_21);
static int func_23(const int p_24, int p_25, unsigned p_26, unsigned p_27);
static int func_28(int p_29, long long p_30, int p_31, unsigned p_32);
static long long func_33(unsigned char p_34, unsigned long long p_35, unsigned p_36, unsigned p_37, unsigned p_38);
static unsigned func_49(unsigned p_50, short p_51, unsigned long long * p_52, unsigned long long p_53, unsigned short p_54);
static int func_59(unsigned long long * p_60, unsigned long long * const p_61);
static unsigned long long func_1(void)
{
    unsigned l_22[4] = {0xA3187110L, 0xDB696893L, 0xA3187110L, 0xDB696893L};
    unsigned long long *l_42 = (void*)0;
    unsigned long long *l_43 = &g_44;
    long long *l_1216 = &g_1043;
    unsigned char l_1217 = 0xD2L;
    int *l_2047 = &g_679;
    int *l_2048 = &g_499;
    int *l_2049 = &g_679;
    int *l_2050 = &g_1229;
    int *l_2051 = &g_1229;
    unsigned l_2052[4];
    int **l_2055 = &l_2047;
    int i;
    for (i = 0; i < 4; i++)
        l_2052[i] = 0x357257EAL;
    (*g_100) = (((safe_mod_func_int32_t_s_s((0xA137B189L ^ (+((-1L) && (safe_add_func_uint16_t_u_u(func_6(((((*g_640) = func_9(g_13, ((func_14((func_19(l_22[2], (g_510[7] = func_23(func_28(l_22[2], ((*l_1216) = func_33(((safe_lshift_func_uint16_t_u_u(g_13, 5)) < g_13), ((l_22[0] || ((*l_43) = ((!(g_41 = g_13)) > 0x78254981L))) == g_13), l_22[2], g_13, g_13)), l_22[2], l_22[2]), l_22[1], l_1217, g_1048[2]))) && l_22[0]), g_1048[1], g_1048[2], g_1048[1]) ^ l_22[1]) | g_1663), g_1663)) , l_22[3]) , l_1217), g_1387), 65528UL))))), l_1217)) || l_22[2]) & g_1663);
    l_2052[1]++;
    (*l_2055) = l_2050;
    (*l_2055) = (*l_2055);
    return (**g_74);
}







static unsigned short func_6(char p_7, short p_8)
{
    short l_1857 = (-8L);
    int **l_1865 = (void*)0;
    int ***l_1864[8][7][2] = {{{&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}}, {{&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}}, {{&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}}, {{&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}}, {{&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}}, {{&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}}, {{&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}}, {{&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}, {&l_1865, (void*)0}}};
    int ****l_1866 = &l_1864[3][0][1];
    long long l_1867 = 0x4E3C9B25703FDDF9LL;
    unsigned long long l_1868 = 0UL;
    int *l_1869 = &g_1297;
    unsigned char *l_1877 = (void*)0;
    unsigned char **l_1876 = &l_1877;
    unsigned short l_1928 = 0xCD33L;
    unsigned l_1932 = 4294967288UL;
    long long ***l_1972 = &g_1058;
    unsigned short l_2030[9] = {65534UL, 65534UL, 0xA175L, 65534UL, 65534UL, 0xA175L, 65534UL, 65534UL, 0xA175L};
    int i, j, k;
    if ((((p_7 >= p_7) || (((*g_100) = (safe_add_func_uint16_t_u_u(func_14((((**g_1363) = 2UL) , ((((safe_add_func_int16_t_s_s(((~l_1857) | (-1L)), (l_1857 > (1UL & 0x03L)))) & ((*g_100) = ((+(safe_sub_func_int16_t_s_s((*g_640), p_7))) < p_7))) , (*l_1866)) == (*l_1866))), p_7, p_7, p_7), (-1L)))) > 0UL)) , p_8))
    {
        (*g_1827) = l_1869;
    }
    else
    {
        int l_1874[10][6] = {{1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}, {1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}, {1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}, {1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}, {1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}, {1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}, {1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}, {1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}, {1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}, {1L, 0L, 1L, 1L, (-1L), 0xA49B7CDDL}};
        int *l_1938 = &g_499;
        int *l_1940[10][9] = {{&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}, {&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}, {&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}, {&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}, {&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}, {&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}, {&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}, {&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}, {&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}, {&g_499, &g_679, &g_499, &g_1229, (void*)0, (void*)0, &g_101[7], &g_101[7], &g_499}};
        int l_1941[1];
        short l_1951 = 0xE34BL;
        char *l_1952 = (void*)0;
        unsigned long long l_1955 = 18446744073709551612UL;
        long long *l_1970 = &l_1867;
        unsigned l_1971 = 18446744073709551615UL;
        unsigned short l_1997 = 1UL;
        unsigned long long * const **l_2010 = (void*)0;
        unsigned *l_2037 = &g_808[0][1];
        unsigned long long *l_2040 = &g_44;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1941[i] = 0xFD74B779L;
        for (g_1442 = (-19); (g_1442 == 47); g_1442++)
        {
            int *l_1875 = &g_510[8];
            int l_1884 = 9L;
            unsigned long long *l_1905 = &g_44;
            unsigned long long l_1907 = 18446744073709551606UL;
            int l_1920 = (-1L);
            int l_1922 = (-1L);
            int l_1924[9] = {0x793D15C6L, 0xECF0AEBAL, 0x793D15C6L, 0xECF0AEBAL, 0x793D15C6L, 0xECF0AEBAL, 0x793D15C6L, 0xECF0AEBAL, 0x793D15C6L};
            int l_1931[9];
            int *l_1936 = (void*)0;
            short l_1942[7][5][1] = {{{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}, {(-1L)}}};
            long long *l_1943 = &g_1387;
            long long l_1969 = 0x1C0F75984E3A8A42LL;
            char **l_1987 = &l_1952;
            char ***l_1986 = &l_1987;
            char ****l_1985 = &l_1986;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_1931[i] = 1L;
        }
        for (l_1951 = 22; (l_1951 == (-14)); --l_1951)
        {
            int *l_1994 = &l_1874[7][4];
            int l_2000 = (-1L);
            l_1994 = &l_1874[9][3];
            (*l_1938) = ((safe_lshift_func_uint16_t_u_u((*l_1994), 10)) && l_1997);
            for (p_7 = 0; (p_7 > (-7)); --p_7)
            {
                unsigned short l_2001 = 0x9AEFL;
                --l_2001;
                (*l_1994) = p_8;
            }
        }
        if ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int32_t_s_s(func_9((*l_1869), (safe_add_func_int64_t_s_s(p_8, p_8)), (p_7 , (**g_74))), ((*l_1938) ^= (p_7 || p_8)))), 13)))
        {
            unsigned short *l_2015 = &g_1097;
            short *l_2017 = &l_1857;
            const int l_2018 = 0x2B8F984AL;
            int l_2023 = (-1L);
            const int **l_2024 = &g_406[2];
            (*l_1869) = ((~(((((*l_1970) = p_8) <= func_59(&l_1868, &l_1955)) == ((*l_2017) |= (((void*)0 == l_2010) , (l_1940[5][1] != ((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint16_t_u_u((l_2015 == ((*g_1363) = (*g_1363))), 0x325CL)) != g_2016), g_510[3])) , l_1938))))) , p_8)) ^ l_2018);
            for (g_674 = 8; (g_674 != 5); g_674 = safe_sub_func_int16_t_s_s(g_674, 3))
            {
                l_2023 = (p_8 & (safe_rshift_func_uint8_t_u_u(0xA9L, (*l_1869))));
                if (p_8)
                    continue;
            }
            (*g_2025) = ((*l_2024) = &l_1874[9][3]);
        }
        else
        {
            int *l_2031 = &g_101[5];
            l_1938 = (((+(0x620DL > 0x2E00L)) & ((safe_mod_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((*g_1294) | g_808[0][1]), (*g_1364))), (((l_2030[6] && g_679) || 4294967295UL) & (0x2654L & (**g_1363))))) & g_674)) , l_2031);
        }
        (*l_1938) &= ((((safe_mod_func_uint32_t_u_u(g_768[6][1][3], (safe_unary_minus_func_int64_t_s(0xFC746711E63E19AALL)))) , (safe_lshift_func_uint16_t_u_s(((!(**g_1363)) | 1L), 4))) == 65535UL) , 1L);
    }
    return p_8;
}







static short func_9(long long p_10, unsigned p_11, unsigned long long p_12)
{
    unsigned long long l_1833 = 0UL;
    unsigned l_1836 = 7UL;
    long long *** const * const l_1847 = &g_1057[4][2];
    int l_1851 = 0L;
    int l_1852 = (-8L);
    for (g_1097 = 13; (g_1097 != 16); g_1097++)
    {
        char *l_1830[6] = {(void*)0, &g_126[1], (void*)0, &g_126[1], (void*)0, &g_126[1]};
        unsigned long long *l_1837 = (void*)0;
        unsigned long long *l_1838[5];
        int l_1839 = 0xCC9639C3L;
        long long ****l_1846 = &g_1057[4][2];
        int l_1848 = 1L;
        int *l_1850 = &g_272;
        int i;
        for (i = 0; i < 5; i++)
            l_1838[i] = &g_478[4][0];
        if ((((*g_640) = ((l_1830[1] != ((*g_75) , (**g_1673))) , ((safe_mod_func_int64_t_s_s((l_1833 < 1UL), (0x2231AA56D6BD1D52LL || 0x108F5CCA8E650CC4LL))) < (safe_lshift_func_int8_t_s_s((l_1839 = (((l_1833 && (p_12 |= l_1836)) | 0x92L) , 0xD2L)), 2))))) >= 65533UL))
        {
            unsigned long long *l_1840 = &g_329;
            int l_1843 = 0x27404E17L;
            (*g_100) = l_1833;
            (*g_100) = func_28(func_59(l_1840, l_1840), ((l_1839 = (l_1843 != ((((safe_rshift_func_int8_t_s_s(0xE3L, 6)) , l_1846) == l_1847) > (((0L != p_11) , (*g_1364)) , 1UL)))) & g_510[3]), l_1833, l_1848);
        }
        else
        {
            int **l_1849[1][9][4] = {{{(void*)0, &g_103, &g_103, &g_103}, {(void*)0, &g_103, &g_103, &g_103}, {(void*)0, &g_103, &g_103, &g_103}, {(void*)0, &g_103, &g_103, &g_103}, {(void*)0, &g_103, &g_103, &g_103}, {(void*)0, &g_103, &g_103, &g_103}, {(void*)0, &g_103, &g_103, &g_103}, {(void*)0, &g_103, &g_103, &g_103}, {(void*)0, &g_103, &g_103, &g_103}}};
            int i, j, k;
            l_1850 = (void*)0;
        }
    }
    for (p_11 = 0; (p_11 <= 1); p_11 += 1)
    {
        int i;
        g_271[p_11] = g_271[p_11];
        return (*g_640);
    }
    l_1852 = (((l_1851 ^= p_11) ^ l_1833) <= 255UL);
    return l_1851;
}







static long long func_14(long long p_15, int p_16, int p_17, unsigned char p_18)
{
    unsigned long long * const l_1231[1][7][5] = {{{&g_44, &g_44, &g_44, &g_44, &g_44}, {&g_44, &g_44, &g_44, &g_44, &g_44}, {&g_44, &g_44, &g_44, &g_44, &g_44}, {&g_44, &g_44, &g_44, &g_44, &g_44}, {&g_44, &g_44, &g_44, &g_44, &g_44}, {&g_44, &g_44, &g_44, &g_44, &g_44}, {&g_44, &g_44, &g_44, &g_44, &g_44}}};
    int l_1248 = 0xCD6B9BA1L;
    int l_1262[1][5][4] = {{{0xFF0F65B2L, 0xFF0F65B2L, 0x3577DB15L, (-10L)}, {0xFF0F65B2L, 0xFF0F65B2L, 0x3577DB15L, (-10L)}, {0xFF0F65B2L, 0xFF0F65B2L, 0x3577DB15L, (-10L)}, {0xFF0F65B2L, 0xFF0F65B2L, 0x3577DB15L, (-10L)}, {0xFF0F65B2L, 0xFF0F65B2L, 0x3577DB15L, (-10L)}}};
    const unsigned short *l_1291 = &g_1097;
    const char **l_1292 = (void*)0;
    short l_1296 = 3L;
    int l_1301 = 1L;
    unsigned long long l_1335 = 18446744073709551607UL;
    unsigned long long l_1400 = 0xE7E8067A1DF79C10LL;
    int **l_1420[4] = {&g_103, &g_103, &g_103, &g_103};
    const unsigned char l_1421 = 0x88L;
    int *l_1422 = (void*)0;
    int *l_1423 = (void*)0;
    int *l_1424[5][3] = {{&g_679, &g_679, &g_499}, {&g_679, &g_679, &g_499}, {&g_679, &g_679, &g_499}, {&g_679, &g_679, &g_499}, {&g_679, &g_679, &g_499}};
    int *l_1425 = &g_1297;
    int *l_1426 = (void*)0;
    int *l_1427[7] = {&g_679, &g_679, &g_101[7], &g_679, &g_679, &g_101[7], &g_679};
    int *l_1428 = (void*)0;
    int *l_1429 = &l_1248;
    unsigned l_1430[8][8] = {{0xEDDF23A3L, 0xBB30B653L, 18446744073709551615UL, 18446744073709551607UL, 18446744073709551607UL, 18446744073709551615UL, 0xBB30B653L, 0xEDDF23A3L}, {0xEDDF23A3L, 0xBB30B653L, 18446744073709551615UL, 18446744073709551607UL, 18446744073709551607UL, 18446744073709551615UL, 0xBB30B653L, 0xEDDF23A3L}, {0xEDDF23A3L, 0xBB30B653L, 18446744073709551615UL, 18446744073709551607UL, 18446744073709551607UL, 18446744073709551615UL, 0xBB30B653L, 0xEDDF23A3L}, {0xEDDF23A3L, 0xBB30B653L, 18446744073709551615UL, 18446744073709551607UL, 18446744073709551607UL, 18446744073709551615UL, 0xBB30B653L, 0xEDDF23A3L}, {0xEDDF23A3L, 0xBB30B653L, 18446744073709551615UL, 18446744073709551607UL, 18446744073709551607UL, 18446744073709551615UL, 0xBB30B653L, 0xEDDF23A3L}, {0xEDDF23A3L, 0xBB30B653L, 18446744073709551615UL, 18446744073709551607UL, 18446744073709551607UL, 18446744073709551615UL, 0xBB30B653L, 0xEDDF23A3L}, {0xEDDF23A3L, 0xBB30B653L, 18446744073709551615UL, 18446744073709551607UL, 18446744073709551607UL, 18446744073709551615UL, 0xBB30B653L, 0xEDDF23A3L}, {0xEDDF23A3L, 0xBB30B653L, 18446744073709551615UL, 18446744073709551607UL, 18446744073709551607UL, 18446744073709551615UL, 0xBB30B653L, 0xEDDF23A3L}};
    unsigned l_1493 = 0x2BB310D1L;
    unsigned char l_1578 = 0xC9L;
    char *l_1597 = &g_126[0];
    char **l_1596 = &l_1597;
    short **l_1637 = &g_640;
    unsigned long long *l_1682[6] = {&g_478[0][0], &g_478[0][0], &l_1335, &g_478[0][0], &g_478[0][0], &l_1335};
    int l_1748 = (-9L);
    int *l_1815[3][9][9] = {{{&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}}, {{&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}}, {{&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}, {&g_1229, &l_1262[0][1][3], &g_1229, (void*)0, &g_272, (void*)0, (void*)0, &g_101[7], &g_499}}};
    const int l_1821 = 0x7B0D31D4L;
    int i, j, k;
    for (g_499 = 2; (g_499 >= 0); g_499 -= 1)
    {
        const unsigned l_1227[9] = {1UL, 0xDD735F99L, 1UL, 0xDD735F99L, 1UL, 0xDD735F99L, 1UL, 0xDD735F99L, 1UL};
        unsigned long long *l_1228 = &g_478[5][1];
        int l_1255[5];
        unsigned char l_1264 = 0x56L;
        unsigned char l_1279 = 0x43L;
        short l_1281 = 1L;
        char *l_1302 = &g_126[1];
        unsigned short *l_1319 = &g_674;
        unsigned short **l_1318 = &l_1319;
        const long long *l_1329[4] = {&g_1282[1][2][2], &g_1043, &g_1282[1][2][2], &g_1043};
        const long long ** const l_1328 = &l_1329[3];
        int l_1336[3];
        unsigned long long l_1358 = 8UL;
        int i;
        for (i = 0; i < 5; i++)
            l_1255[i] = 0x091538CFL;
        for (i = 0; i < 3; i++)
            l_1336[i] = (-8L);
        if (((*g_100) = (l_1227[7] >= (func_59(l_1228, l_1228) >= (g_1229 = 9L)))))
        {
            unsigned long long *l_1230 = &g_44;
            unsigned short l_1232 = 65535UL;
            char l_1246 = (-3L);
            int l_1253 = 0x30F28C54L;
            int l_1263[8] = {2L, 2L, 2L, 2L, 2L, 2L, 2L, 2L};
            unsigned l_1284 = 5UL;
            unsigned char l_1298 = 249UL;
            int *l_1305 = &l_1253;
            int *l_1307[8] = {&g_1306, &g_1306, &g_510[7], &g_1306, &g_1306, &g_510[7], &g_1306, &g_1306};
            int i;
            if ((p_15 >= l_1232))
            {
                char *l_1237 = &g_126[0];
                int l_1247 = 1L;
                long long *l_1249 = &g_83;
                int *l_1250 = &g_272;
                (*l_1250) |= (((18446744073709551615UL | (~((*l_1249) = (safe_lshift_func_int16_t_s_u((g_679 != (9L < (safe_add_func_int32_t_s_s(((0xDFL < ((*l_1237) = 6L)) , ((*g_100) &= ((**g_74) < (safe_rshift_func_uint16_t_u_s(p_18, (*g_640)))))), (((safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(func_23(p_15, l_1246, (*g_545), l_1247), g_81)), 0xEB20L)), g_269[0][5][5])) & l_1247) ^ l_1248))))), l_1227[3]))))) , &p_15) == (void*)0);
            }
            else
            {
                int **l_1251 = &g_103;
                int *l_1252 = &g_101[3];
                int *l_1254 = &l_1248;
                int *l_1256 = &g_679;
                int *l_1257 = &g_679;
                int *l_1258 = (void*)0;
                int l_1259 = 0xE74A37E3L;
                int *l_1260 = &g_101[3];
                int *l_1261[1][1][4] = {{{&g_272, &l_1248, &g_272, &l_1248}}};
                int i, j, k;
                (*l_1251) = (void*)0;
                l_1264--;
                if (l_1264)
                {
                    if (l_1255[4])
                        break;
                }
                else
                {
                    int *l_1267 = &l_1259;
                    short *l_1276 = &g_81;
                    int l_1280[10] = {0x14700638L, 0x3939FA25L, 0L, 0L, 0x3939FA25L, 0x14700638L, 0x3939FA25L, 0L, 0L, 0x3939FA25L};
                    long long l_1283 = 0L;
                    int i;
                    (*l_1251) = l_1267;
                    (*g_100) = (safe_add_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_u(p_16, 4)), ((((safe_sub_func_uint16_t_u_u(((*l_1267) = ((((((((safe_rshift_func_int16_t_s_u(((*l_1276) = l_1263[2]), ((--(*l_1230)) != (l_1255[1] <= func_28(((void*)0 == &l_1246), func_28(p_18, p_15, p_18, (*g_545)), l_1262[0][1][0], l_1279))))) && p_16) || p_15) != 1L) , (-5L)) ^ 0L) > p_17) || g_1097)), 1L)) != 0L) || p_17) & p_17)));
                    --l_1284;
                    (**g_1006) = (func_23((safe_lshift_func_int16_t_s_s((((*l_1276) = (safe_lshift_func_int8_t_s_u(((func_23(((7L != ((*g_75) , (p_18 , ((*l_1256) >= ((l_1291 != (void*)0) && 0UL))))) , p_16), (l_1292 != g_1293), l_1248, p_17) > l_1284) ^ (-7L)), p_15))) , 1L), p_17)), (*l_1256), l_1262[0][1][0], l_1296) && g_1297);
                }
                ++l_1298;
            }
            (*l_1305) = func_19(l_1284, ((*l_1305) = func_23(p_16, (*g_521), ((((((((l_1301 , &l_1246) != l_1302) || 0x8E70CE20747A2DB2LL) <= (--(*l_1228))) >= ((*l_1305) |= ((*g_100) = func_23(l_1263[5], l_1264, l_1279, p_17)))) && p_15) < p_17) && g_1306), l_1255[1])));
        }
        else
        {
            int *l_1309 = &l_1255[1];
            unsigned short **l_1322 = &l_1319;
            long long **l_1327[1];
            int ***l_1338 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_1327[i] = &g_1059;
            for (g_679 = 0; (g_679 <= 2); g_679 += 1)
            {
                int *l_1308 = &l_1262[0][4][2];
                int ***l_1337 = (void*)0;
                (*l_1308) |= ((*g_100) |= 0xA5044818L);
                (*g_100) = p_17;
                for (g_41 = 0; (g_41 <= 2); g_41 += 1)
                {
                    unsigned char l_1311 = 0x91L;
                    long long **l_1325 = &g_1059;
                    for (g_1229 = 2; (g_1229 >= 0); g_1229 -= 1)
                    {
                        int **l_1310 = &g_103;
                        long long ***l_1326[3][7][4] = {{{&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}}, {{&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}}, {{&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}, {&l_1325, &l_1325, (void*)0, &g_1058}}};
                        int i, j, k;
                        (*l_1310) = l_1309;
                        if (l_1311)
                            break;
                        (*g_100) ^= (safe_add_func_int16_t_s_s(p_18, ((~(*l_1309)) , ((((0L >= (safe_mod_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((l_1318 == ((safe_rshift_func_int16_t_s_s((+p_15), 13)) , l_1322)), 2)), 1L))) == (safe_add_func_int16_t_s_s((0x774F5478L & ((p_16 , 3L) , 0xBFDE9C2DL)), g_510[4]))) || p_18) <= (-5L)))));
                        (*l_1309) = (((*l_1228) = ((func_19(((l_1325 = (l_1327[0] = l_1325)) != l_1328), (safe_unary_minus_func_uint64_t_u(((((((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((2L && (((p_15 = l_1335) || (l_1336[1] = func_23(p_18, (0x9E80385FL & (**l_1310)), ((func_28(p_17, (p_18 , l_1336[1]), p_17, (*g_545)) != p_17) >= (**g_369)), p_18))) ^ (-1L))) < 0x7AL) | (**l_1310)), p_16)), 0)) > 0x5518L) || (**l_1310)) , l_1262[0][1][0]) , (*g_1294)) , p_16)))) , l_1337) != l_1338)) < (-1L));
                    }
                    return l_1255[1];
                }
            }
        }
        if (l_1335)
            break;
        l_1336[1] = (safe_rshift_func_uint8_t_u_u(p_18, 7));
        if (p_18)
            continue;
        for (g_44 = 0; (g_44 <= 2); g_44 += 1)
        {
            int *l_1341[10] = {&l_1262[0][1][0], &l_1262[0][1][0], &l_1262[0][0][3], &l_1262[0][1][0], &l_1262[0][1][0], &l_1262[0][0][3], &l_1262[0][1][0], &l_1262[0][1][0], &l_1262[0][0][3], &l_1262[0][1][0]};
            unsigned l_1343 = 0UL;
            char l_1355 = 1L;
            unsigned char *l_1412 = (void*)0;
            int i;
            l_1343++;
            (*g_100) = 0x20A41684L;
            for (l_1264 = 0; (l_1264 <= 2); l_1264 += 1)
            {
                unsigned l_1352 = 1UL;
                int l_1356 = 0xD3A55A92L;
                unsigned short **l_1361 = &l_1319;
                int l_1374 = 0x64C5B049L;
                short l_1375 = (-1L);
                int l_1376 = 0xADF0C209L;
                int l_1377 = 0L;
                int l_1378 = 0x102AF984L;
                int l_1379 = 1L;
                unsigned l_1380 = 0x41F150AEL;
                long long **l_1392 = &g_1059;
                short l_1399 = 0x1210L;
                for (p_17 = 2; (p_17 >= 0); p_17 -= 1)
                {
                    int l_1357[7][9][4] = {{{0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}}, {{0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}}, {{0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}}, {{0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}}, {{0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}}, {{0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}}, {{0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}, {0x1F25FAB9L, (-8L), 0xE6F743DCL, 0x02193668L}}};
                    int i, j, k;
                    if (((*g_100) |= p_18))
                    {
                        int *l_1346 = &g_1297;
                        unsigned *l_1353 = &g_66[0];
                        unsigned *l_1354 = &l_1352;
                        unsigned short ***l_1365 = &l_1318;
                        int i, j, k;
                        (*g_100) ^= p_15;
                        (*l_1346) = ((*g_100) = ((func_23(((*l_1346) = p_18), (((safe_sub_func_uint32_t_u_u(func_28(p_18, (func_23(func_28(((*g_100) = (safe_sub_func_uint8_t_u_u(((((safe_unary_minus_func_int64_t_s(func_23(p_15, p_18, p_16, ((*l_1354) = ((*l_1353) = func_19(l_1352, (~0L))))))) & (*g_75)) || 255UL) && p_18), l_1227[3]))), l_1355, l_1356, p_18), l_1301, p_15, g_478[0][0]) , p_17), p_17, l_1281), 0x7339E2CAL)) > 0x05L) <= p_16), p_16, g_81) && (*g_640)) <= l_1356));
                        l_1358++;
                        (*l_1365) = l_1361;
                    }
                    else
                    {
                        const int **l_1366 = &g_406[7];
                        const int *l_1368 = (void*)0;
                        const int **l_1367 = &l_1368;
                        int l_1372 = (-1L);
                        int l_1373[9] = {(-5L), 0xB05A988CL, (-5L), 0xB05A988CL, (-5L), 0xB05A988CL, (-5L), 0xB05A988CL, (-5L)};
                        int i;
                        (*g_1371) = ((*l_1367) = ((*l_1366) = l_1341[7]));
                        ++l_1380;
                        if (p_17)
                            continue;
                    }
                    for (g_1097 = (-4); (g_1097 < 29); g_1097 = safe_add_func_uint8_t_u_u(g_1097, 4))
                    {
                        return p_16;
                    }
                }
                for (l_1248 = (-18); (l_1248 > 12); l_1248++)
                {
                    int *l_1388 = &l_1255[1];
                    int l_1413 = 1L;
                    if (p_18)
                    {
                        (*g_100) = 0L;
                        if (g_1387)
                            break;
                        if (l_1375)
                            break;
                        l_1341[4] = l_1388;
                    }
                    else
                    {
                        long long **l_1391 = (void*)0;
                        long long *l_1393[3][5] = {{(void*)0, &g_1282[0][1][1], &g_1282[1][4][1], &g_1282[0][1][1], (void*)0}, {(void*)0, &g_1282[0][1][1], &g_1282[1][4][1], &g_1282[0][1][1], (void*)0}, {(void*)0, &g_1282[0][1][1], &g_1282[1][4][1], &g_1282[0][1][1], (void*)0}};
                        const int l_1398[6] = {0xDD1C86F5L, 0xDD1C86F5L, 0xCD1B4836L, 0xDD1C86F5L, 0xDD1C86F5L, 0xCD1B4836L};
                        const char ** const *l_1407 = &l_1292;
                        int i, j;
                        (*g_100) = ((safe_add_func_int8_t_s_s(func_19(((*l_1388) = ((l_1391 != (p_16 , l_1392)) , 1L)), (safe_mod_func_uint64_t_u_u(func_28(((~(safe_sub_func_uint64_t_u_u((l_1398[4] & (l_1399 != l_1398[1])), (((p_18 >= l_1358) != 9L) > l_1378)))) < (*g_370)), p_15, p_18, (*g_545)), l_1400))), 1L)) | p_15);
                        if (p_16)
                            break;
                        l_1374 |= ((*g_100) = (*l_1388));
                        (*l_1388) ^= (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(4294967289UL, ((safe_lshift_func_int16_t_s_u(((((void*)0 == l_1407) ^ (func_23(p_16, l_1264, (safe_sub_func_int32_t_s_s(p_18, 1L)), (g_768[1][0][1] = ((p_15 ^ (safe_sub_func_int8_t_s_s(((l_1398[3] , (*g_369)) != l_1412), l_1413))) > 9L))) & 0x31EDL)) != p_18), (*g_1364))) , g_107))), p_15));
                    }
                    if (p_16)
                        break;
                    if (l_1335)
                        break;
                }
            }
        }
    }
    if ((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u(((*g_1364) = func_23(((*l_1425) = (safe_add_func_uint32_t_u_u(4294967295UL, (l_1420[3] != (l_1421 , l_1420[2]))))), (func_23(((*l_1429) = 0xF1F54667L), l_1430[6][0], (*g_545), (*g_545)) , p_18), (*g_545), (*g_545))), (*g_640))), 8)))
    {
        unsigned long long l_1431 = 0xE5B0DD9393B85C03LL;
        int l_1434[1][1];
        int *l_1440 = (void*)0;
        char l_1444 = 2L;
        long long *l_1451 = &g_1282[2][5][2];
        unsigned l_1480[4] = {0xC07F43FAL, 4294967295UL, 0xC07F43FAL, 4294967295UL};
        short l_1482[9];
        unsigned l_1492 = 5UL;
        unsigned short l_1512[2];
        char l_1543[2][4] = {{0xE3L, 0xCAL, 0xE3L, 0xCAL}, {0xE3L, 0xCAL, 0xE3L, 0xCAL}};
        long long l_1573 = 4L;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_1434[i][j] = (-1L);
        }
        for (i = 0; i < 9; i++)
            l_1482[i] = 0x6EB4L;
        for (i = 0; i < 2; i++)
            l_1512[i] = 0x7155L;
        if (p_17)
        {
            l_1431--;
        }
        else
        {
            unsigned char l_1435 = 4UL;
            int l_1441 = 1L;
            long long l_1443[10][8][3] = {{{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}, {{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}, {{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}, {{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}, {{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}, {{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}, {{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}, {{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}, {{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}, {{8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}, {8L, 0xDD45805BD5A4D4A7LL, (-1L)}}};
            int *l_1464 = &l_1248;
            unsigned long long *l_1485 = &l_1400;
            const unsigned char l_1509[2] = {0x08L, 0x08L};
            int i, j, k;
            --l_1435;
            (*g_1195) = &l_1434[0][0];
            for (g_44 = (-15); (g_44 == 22); ++g_44)
            {
                l_1440 = &l_1434[0][0];
            }
            if (((l_1441 = p_18) , ((((0x6EBA264029783267LL <= (p_17 <= ((*l_1429) = (*g_75)))) <= ((*g_103) || (l_1441 & (g_329 || ((func_19(p_15, ((((func_23((p_17 , p_15), (*g_103), p_17, p_17) , g_1442) >= 0x0BL) , (**g_1363)) , g_1229)) ^ l_1443[8][2][2]) , p_16))))) == l_1444) && l_1443[8][2][2])))
            {
                unsigned l_1454 = 18446744073709551608UL;
                unsigned long long *l_1455 = &g_478[2][8];
                char *l_1456 = &g_126[0];
                int l_1465 = 0x51939C5CL;
                (*l_1429) ^= ((((*l_1456) = (safe_add_func_int8_t_s_s((((**g_1363) = ((func_28((p_16 , l_1454), p_15, p_15, (*g_545)) >= p_18) < p_17)) , 0x01L), p_16))) | 253UL) & p_15);
                for (p_16 = (-14); (p_16 > (-3)); ++p_16)
                {
                    long long l_1459 = 2L;
                    (**g_360) = (+((p_15 | ((-7L) <= ((*l_1451) = l_1443[1][6][2]))) <= p_17));
                    l_1464 = l_1464;
                    l_1465 = (*l_1464);
                    for (g_107 = 0; (g_107 < 8); g_107 = safe_add_func_int32_t_s_s(g_107, 8))
                    {
                        unsigned l_1481 = 0x5EA4CE35L;
                        (*g_100) ^= ((safe_lshift_func_uint16_t_u_u(p_15, func_28((*l_1425), func_19(p_16, l_1465), (safe_rshift_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((((safe_rshift_func_int8_t_s_s((0x11L & (((0x87C17F4FL <= ((safe_sub_func_int32_t_s_s(((((*l_1451) |= (safe_add_func_uint64_t_u_u((**g_74), func_23((p_16 , l_1465), l_1480[2], l_1465, (*g_545))))) | (-2L)) || l_1481), 0x55708896L)) & (*g_640))) ^ (*l_1464)) , 0x21L)), 3)) <= 0x3C4A4295L) | l_1459), l_1465)), l_1482[2])), p_16))) == p_16);
                    }
                }
                g_1297 ^= (safe_sub_func_int64_t_s_s(func_59(l_1485, l_1485), ((*g_1364) || (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((safe_add_func_int32_t_s_s((((((func_28(l_1492, func_28(l_1454, p_15, ((*g_1364) && p_17), g_808[0][1]), p_17, p_15) <= p_16) , 0x23BE3983E1DB8854LL) && p_17) != (*l_1464)) , 0x193EA588L), l_1493)) && (-7L)) < p_18) == (*g_1364)), (**g_1363))), 0x62B2L)))));
                for (p_15 = 5; (p_15 <= 4); p_15 = safe_sub_func_int32_t_s_s(p_15, 7))
                {
                    return p_15;
                }
            }
            else
            {
                unsigned char *l_1498 = &l_1435;
                int l_1505[6][3] = {{(-4L), 0xD39B4D39L, 0x54797F06L}, {(-4L), 0xD39B4D39L, 0x54797F06L}, {(-4L), 0xD39B4D39L, 0x54797F06L}, {(-4L), 0xD39B4D39L, 0x54797F06L}, {(-4L), 0xD39B4D39L, 0x54797F06L}, {(-4L), 0xD39B4D39L, 0x54797F06L}};
                char *l_1508 = &g_126[0];
                int *l_1510 = (void*)0;
                int *l_1511 = &g_101[6];
                unsigned l_1542 = 0x24E0A496L;
                int i, j;
                (*l_1464) = func_23(((*l_1511) ^= ((((**g_1363) = (safe_rshift_func_uint8_t_u_s((--(*l_1498)), ((((safe_mod_func_int16_t_s_s(((*l_1425) = (((((l_1505[4][0] < l_1505[0][2]) < 0x8960L) & p_17) != l_1505[0][2]) || l_1509[1])), 2UL)) , l_1505[3][0]) || 0xAE5A53A6L) > (*l_1464))))) , p_18) && 0xB065E3D1L)), l_1512[0], (*g_545), p_18);
                for (g_1043 = 3; (g_1043 >= 1); g_1043 -= 1)
                {
                    const unsigned long long l_1513 = 18446744073709551615UL;
                    (*g_103) |= l_1513;
                    if (p_18)
                    {
                        return p_17;
                    }
                    else
                    {
                        (*g_100) = (safe_lshift_func_int16_t_s_s((*l_1464), 10));
                        return p_16;
                    }
                }
                for (g_1442 = 0; (g_1442 <= 3); g_1442 += 1)
                {
                    int l_1541[7] = {0x324A51B2L, 2L, 0x324A51B2L, 2L, 0x324A51B2L, 2L, 0x324A51B2L};
                    int i;
                    if (g_1295[g_1442])
                    {
                        const unsigned char l_1520 = 0x1BL;
                        long long **l_1536 = &g_1059;
                        long long ***l_1537 = &g_1058;
                        int *l_1538[4] = {&g_679, (void*)0, &g_679, (void*)0};
                        int *l_1539[2][8] = {{&l_1434[0][0], &l_1505[0][2], (void*)0, (void*)0, &l_1505[0][2], &l_1434[0][0], &l_1505[0][2], (void*)0}, {&l_1434[0][0], &l_1505[0][2], (void*)0, (void*)0, &l_1505[0][2], &l_1434[0][0], &l_1505[0][2], (void*)0}};
                        int *l_1540 = &l_1441;
                        int i, j;
                        (*l_1511) = g_1295[g_1442];
                        if (p_17)
                            continue;
                        (**g_113) = (safe_mod_func_int8_t_s_s(p_17, p_15));
                        if ((**g_360))
                            break;
                    }
                    else
                    {
                        short l_1546 = 0L;
                        int l_1553 = 0x1E1D0A66L;
                        l_1553 |= (safe_add_func_int64_t_s_s(l_1541[3], (l_1546 == (safe_add_func_uint64_t_u_u((func_19(p_16, p_15) < (((*l_1464) = ((g_73++) <= ((((-1L) >= ((safe_add_func_int64_t_s_s((*l_1464), l_1546)) | (&g_1058 == (void*)0))) >= 0x24687B1B4C6A1E12LL) == p_16))) & (*g_1364))), p_18)))));
                    }
                }
            }
        }
        if (((-1L) || l_1543[0][3]))
        {
            unsigned long long * const l_1554 = &l_1431;
            int * const l_1560 = &g_510[3];
            int l_1561 = (-7L);
            l_1561 = (((((p_17 != (safe_sub_func_int32_t_s_s((&p_18 != &p_18), (safe_rshift_func_uint16_t_u_s(((**g_1363) = (!(65535UL < (0x88F91B087E4D9B92LL != 1UL)))), (safe_unary_minus_func_int8_t_s(1L))))))) ^ p_15) , &p_16) != l_1560) || l_1561);
            for (l_1400 = 1; (l_1400 <= 7); l_1400 += 1)
            {
                int i;
                l_1440 = &g_101[l_1400];
            }
        }
        else
        {
            char l_1562 = 0x1AL;
            int l_1563 = 0x2C759D99L;
            int l_1564 = 0xCEF3909FL;
            int l_1565 = 0x93CBE433L;
            int l_1566 = 2L;
            int l_1567 = 4L;
            int l_1568 = 0xFA28D7A7L;
            int l_1569 = 0xEAD05739L;
            int l_1570 = 0x33BFABD5L;
            int l_1571 = 0xC7F9CD0CL;
            int l_1572 = (-3L);
            int l_1574 = 1L;
            int l_1575 = 7L;
            int l_1576 = (-9L);
            int l_1577 = 0x90B87E54L;
            l_1578++;
            if (p_16)
            {
                int l_1581[2][8] = {{0x53539E07L, 0x75676C22L, 4L, 0x75676C22L, 0x53539E07L, 0x75676C22L, 4L, 0x75676C22L}, {0x53539E07L, 0x75676C22L, 4L, 0x75676C22L, 0x53539E07L, 0x75676C22L, 4L, 0x75676C22L}};
                int i, j;
                (*l_1425) = l_1581[0][0];
            }
            else
            {
                unsigned l_1582 = 4294967295UL;
                (*l_1425) = 0x011CCFA7L;
                return l_1582;
            }
        }
    }
    else
    {
        long long *l_1583 = &g_1282[3][0][2];
        int l_1590 = 6L;
        short *l_1591 = (void*)0;
        unsigned char l_1630 = 0UL;
        int *l_1638 = &g_679;
        long long *l_1710 = &g_83;
        int *l_1785[9];
        int **l_1784[9][7] = {{(void*)0, &l_1785[3], &l_1785[8], (void*)0, &l_1785[1], &l_1785[1], &l_1785[0]}, {(void*)0, &l_1785[3], &l_1785[8], (void*)0, &l_1785[1], &l_1785[1], &l_1785[0]}, {(void*)0, &l_1785[3], &l_1785[8], (void*)0, &l_1785[1], &l_1785[1], &l_1785[0]}, {(void*)0, &l_1785[3], &l_1785[8], (void*)0, &l_1785[1], &l_1785[1], &l_1785[0]}, {(void*)0, &l_1785[3], &l_1785[8], (void*)0, &l_1785[1], &l_1785[1], &l_1785[0]}, {(void*)0, &l_1785[3], &l_1785[8], (void*)0, &l_1785[1], &l_1785[1], &l_1785[0]}, {(void*)0, &l_1785[3], &l_1785[8], (void*)0, &l_1785[1], &l_1785[1], &l_1785[0]}, {(void*)0, &l_1785[3], &l_1785[8], (void*)0, &l_1785[1], &l_1785[1], &l_1785[0]}, {(void*)0, &l_1785[3], &l_1785[8], (void*)0, &l_1785[1], &l_1785[1], &l_1785[0]}};
        int l_1814 = 0x6C6B1604L;
        int *l_1820 = &l_1748;
        int i, j;
        for (i = 0; i < 9; i++)
            l_1785[i] = &g_1306;
        if ((p_17 != l_1590))
        {
            unsigned l_1595 = 18446744073709551615UL;
            char ***l_1652 = (void*)0;
            unsigned l_1679 = 18446744073709551615UL;
            short ***l_1684 = &g_639[1];
            unsigned long long **l_1715 = &g_550;
            int *l_1717 = (void*)0;
            unsigned long long *l_1723 = &g_44;
            unsigned short l_1726 = 0xF84CL;
            if (((void*)0 != l_1591))
            {
                short *l_1598 = &g_269[0][5][5];
                int l_1611[7][7] = {{0x3B3CC9E8L, 1L, 0x3B3CC9E8L, (-4L), 0xA4130E32L, 8L, (-5L)}, {0x3B3CC9E8L, 1L, 0x3B3CC9E8L, (-4L), 0xA4130E32L, 8L, (-5L)}, {0x3B3CC9E8L, 1L, 0x3B3CC9E8L, (-4L), 0xA4130E32L, 8L, (-5L)}, {0x3B3CC9E8L, 1L, 0x3B3CC9E8L, (-4L), 0xA4130E32L, 8L, (-5L)}, {0x3B3CC9E8L, 1L, 0x3B3CC9E8L, (-4L), 0xA4130E32L, 8L, (-5L)}, {0x3B3CC9E8L, 1L, 0x3B3CC9E8L, (-4L), 0xA4130E32L, 8L, (-5L)}, {0x3B3CC9E8L, 1L, 0x3B3CC9E8L, (-4L), 0xA4130E32L, 8L, (-5L)}};
                char l_1612 = 0L;
                int l_1613 = 5L;
                int *l_1650 = &g_1297;
                char ***l_1651 = &l_1596;
                unsigned long long * const l_1656 = &g_478[1][7];
                unsigned l_1670 = 0x1607382FL;
                char ****l_1671[7][5][6] = {{{(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}}, {{(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}}, {{(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}}, {{(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}}, {{(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}}, {{(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}}, {{(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}, {(void*)0, (void*)0, &l_1652, (void*)0, &l_1652, &l_1652}}};
                unsigned char l_1681 = 0xF3L;
                unsigned long long *l_1685 = &l_1335;
                char l_1693 = (-6L);
                int i, j, k;
                for (g_1442 = 0; (g_1442 >= 1); g_1442 = safe_add_func_int16_t_s_s(g_1442, 3))
                {
                    int *l_1594 = &g_101[7];
                    if (l_1590)
                        break;
                    (*g_1006) = l_1594;
                }
                (*l_1429) = l_1595;
                if (func_23((((((l_1596 != &l_1597) , ((((*l_1598) = p_15) , func_19(((((((((safe_lshift_func_int16_t_s_u((l_1595 | (safe_lshift_func_int16_t_s_s(((*l_1598) = l_1595), (safe_sub_func_int8_t_s_s((l_1613 |= (func_28((safe_rshift_func_int8_t_s_u(p_16, ((func_19((safe_add_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((func_19(l_1611[4][4], (((l_1595 < 5L) == l_1611[1][3]) >= p_15)) & (**g_1293)) ^ p_18), p_17)), 0xF1CCL)), g_679) >= 5L) , 248UL))), p_18, (*l_1429), (*g_545)) != l_1612)), 0xCAL))))), 5)) , 0x21378858L) , 255UL) ^ g_126[0]) & (*l_1429)) , 0x68L) != p_17) <= l_1611[4][4]), p_15)) ^ g_768[3][2][4])) & p_16) , 5L) && 65535UL), l_1612, p_15, (*g_545)))
                {
                    short **l_1636[3][6][6] = {{{&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}}, {{&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}}, {{&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}, {&l_1598, &g_640, &l_1598, &g_640, &l_1598, &g_640}}};
                    int l_1643 = 3L;
                    int i, j, k;
                    (*l_1425) = 0x43611804L;
                    for (g_107 = 0; (g_107 == 34); g_107 = safe_add_func_uint64_t_u_u(g_107, 6))
                    {
                        int *l_1631 = &l_1262[0][1][0];
                        short ***l_1632 = &g_639[2];
                        short ***l_1633 = &g_639[0];
                        short ***l_1634 = &g_639[4];
                        short ***l_1635[6][2][8] = {{{&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}, {&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}}, {{&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}, {&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}}, {{&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}, {&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}}, {{&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}, {&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}}, {{&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}, {&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}}, {{&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}, {&g_639[1], (void*)0, &g_639[0], &g_639[4], &g_639[4], &g_639[4], &g_639[4], &g_639[4]}}};
                        int i, j, k;
                        (*g_100) = (((l_1638 = (((safe_rshift_func_uint16_t_u_u(((*g_1364) = (safe_lshift_func_int16_t_s_s((0x9C7A75D8EB064F48LL > (((l_1636[2][1][3] = ((((**g_1293) > p_18) , (safe_rshift_func_uint8_t_u_u(((18446744073709551613UL | (((g_41++) >= ((**l_1596) = (((g_73 = p_15) && (safe_lshift_func_uint8_t_u_u((func_23(((*l_1631) = (((*g_100) = (func_23(((((safe_rshift_func_int16_t_s_s(l_1590, ((*l_1598) = ((**g_74) != p_18)))) ^ ((safe_mod_func_int8_t_s_s((p_18 != 0UL), l_1613)) == p_16)) >= p_15) < g_1097), l_1611[4][4], l_1630, p_15) , p_16)) , p_16)), p_16, p_18, p_17) && 0x3E997462L), 6))) & p_15))) , p_16)) , 0UL), 7))) , (void*)0)) == l_1637) != p_17)), 11))), 11)) & 0x414741F8BD065789LL) , &l_1611[4][4])) != &l_1590) ^ 1L);
                        (*g_100) |= (safe_mod_func_uint64_t_u_u(p_17, p_17));
                        (*g_443) = (void*)0;
                        (*g_100) ^= (((0xA4960E60L > ((*l_1631) = ((safe_lshift_func_uint8_t_u_s(((l_1643 >= func_23((*l_1638), ((g_478[2][0] |= (safe_mod_func_int32_t_s_s((p_17 != (safe_rshift_func_int8_t_s_u((((safe_sub_func_int64_t_s_s((*l_1631), (p_16 >= (*l_1631)))) < (*l_1631)) || p_15), 7))), g_269[1][5][3]))) != 5L), p_18, p_16)) , p_16), 0)) && p_17))) || g_269[0][5][5]) , l_1643);
                    }
                }
                else
                {
                    unsigned long long *l_1655 = &g_478[0][0];
                    int l_1664 = 8L;
                    int l_1665 = 0x56E142B7L;
                    int l_1666[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1666[i] = 1L;
                    for (l_1613 = 0; (l_1613 <= 2); l_1613 += 1)
                    {
                        l_1650 = &l_1590;
                    }
                    if (((((((l_1651 != l_1652) && 1UL) > ((((safe_sub_func_uint16_t_u_u(func_59(l_1655, l_1656), (safe_rshift_func_uint16_t_u_s((func_23((((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_1048[2], ((g_1663 && ((*l_1650) &= (((--g_1667[0][2]) > (p_17 < p_18)) < (*g_640)))) == l_1670))), 10)) , l_1671[4][0][4]) == g_1672), l_1595, p_18, p_17) == p_18), 2)))) & g_1043) < 0x6BL) != (*l_1638))) <= l_1665) == 1L) > 0x4E81588BL))
                    {
                        unsigned *l_1680 = &g_808[0][3];
                        long long *l_1683 = &g_1043;
                        (*l_1650) = (((l_1665 , 1UL) , l_1679) && (*g_640));
                    }
                    else
                    {
                        short l_1686 = 0L;
                        const int *l_1687 = &g_679;
                        const int **l_1688 = &g_406[7];
                        l_1686 = (-1L);
                        (*l_1688) = l_1687;
                    }
                }
                for (g_1097 = 0; (g_1097 <= 32); g_1097 = safe_add_func_uint64_t_u_u(g_1097, 4))
                {
                    int *l_1694 = (void*)0;
                    for (p_15 = 0; (p_15 < (-22)); p_15 = safe_sub_func_uint16_t_u_u(p_15, 9))
                    {
                        if (l_1693)
                            break;
                    }
                    l_1638 = l_1694;
                    if ((*g_521))
                        break;
                }
            }
            else
            {
                unsigned l_1704 = 7UL;
                int l_1706 = 0xF3AA7004L;
                int l_1713 = 0L;
                short *l_1722 = (void*)0;
                for (p_16 = 0; (p_16 >= 0); p_16 -= 1)
                {
                    int l_1695 = (-6L);
                    return l_1695;
                }
                if ((((void*)0 == &g_1058) ^ (safe_sub_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(9L, 3)), (safe_sub_func_int64_t_s_s(p_17, (0xEE9FL == (safe_sub_func_int32_t_s_s(p_15, l_1704)))))))))
                {
                    char l_1705 = 0xB3L;
                    int *l_1714[7] = {(void*)0, &l_1590, (void*)0, &l_1590, (void*)0, &l_1590, (void*)0};
                    int i;
                    for (g_1442 = 0; (g_1442 <= 3); g_1442 += 1)
                    {
                        unsigned char l_1707 = 1UL;
                        unsigned long long **l_1716 = &l_1682[4];
                        int i;
                        ++l_1707;
                        (*l_1638) |= (l_1713 &= ((((l_1710 == (void*)0) <= l_1705) || func_28(((*l_1429) |= p_18), ((*l_1710) ^= ((p_16 , (p_16 < (l_1706 & (((safe_lshift_func_int16_t_s_s(p_15, ((*g_1674) == (void*)0))) , p_15) >= p_15)))) != (*l_1425))), l_1705, (*g_545))) , p_17));
                        l_1714[6] = &l_1590;
                        l_1716 = (g_1282[1][2][2] , l_1715);
                    }
                    l_1638 = l_1717;
                    (*g_100) ^= ((**g_369) ^ p_15);
                }
                else
                {
                    unsigned short l_1727 = 65530UL;
                    int l_1729 = 0xC19CBDC1L;
                    const char l_1734[6] = {1L, 0xCCL, 1L, 0xCCL, 1L, 0xCCL};
                    unsigned short **l_1743 = &g_1364;
                    unsigned char l_1746 = 0xA1L;
                    unsigned *l_1747 = &g_1048[1];
                    unsigned l_1757 = 18446744073709551615UL;
                    int i;
                    if (p_16)
                    {
                        unsigned l_1728 = 0xDFCB8C18L;
                        l_1729 |= ((safe_lshift_func_uint16_t_u_s(((**g_1674) ^ l_1726), 4)) ^ (l_1728 = (~l_1727)));
                        (*l_1429) = p_15;
                    }
                    else
                    {
                        int * volatile *l_1731 = &l_1638;
                        (*l_1731) = g_1730;
                    }
                    (**g_1672) = ((func_19((((l_1729 = ((+l_1706) < ((safe_mod_func_int16_t_s_s(((g_674 , ((func_23(l_1734[5], (safe_sub_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(((l_1743 == &l_1291) , ((*l_1425) |= l_1727)), g_83)), 2)), ((safe_sub_func_int64_t_s_s((g_1442 < ((*l_1747) = ((l_1746 >= 4L) , (*l_1638)))), 0x41C0EA092474CCE7LL)) <= l_1704))), 0UL)), (*g_545), p_16) && 0xD5L) >= p_15)) , l_1748), 0xA87AL)) < p_16))) , 3UL) , p_15), p_16) < 0x09F9L) , (**g_1672));
                    l_1706 &= ((safe_lshift_func_uint8_t_u_u(((((*l_1723)++) > func_23(p_17, ((*l_1425) = (((((*l_1638) = ((safe_lshift_func_int8_t_s_u(l_1734[5], (~(((l_1713 = p_16) <= (l_1757 ^= (safe_rshift_func_int8_t_s_u(0L, 7)))) & (p_16 < 0xC241434F5776E4FCLL))))) >= (safe_mod_func_int16_t_s_s(1L, 0xDBEBL)))) >= 0xBC5C29FCL) != 0x6D72L) >= 0UL)), (*g_545), p_16)) & 0xB5L), (**g_369))) == 7L);
                }
            }
        }
        else
        {
            unsigned l_1778[4][7] = {{0xEE1747B9L, 0x9818C39FL, 0x64313847L, 0x9818C39FL, 0xEE1747B9L, 4294967289UL, 0xEE1747B9L}, {0xEE1747B9L, 0x9818C39FL, 0x64313847L, 0x9818C39FL, 0xEE1747B9L, 4294967289UL, 0xEE1747B9L}, {0xEE1747B9L, 0x9818C39FL, 0x64313847L, 0x9818C39FL, 0xEE1747B9L, 4294967289UL, 0xEE1747B9L}, {0xEE1747B9L, 0x9818C39FL, 0x64313847L, 0x9818C39FL, 0xEE1747B9L, 4294967289UL, 0xEE1747B9L}};
            int l_1779 = (-1L);
            unsigned long long *l_1781 = &g_44;
            int *l_1787 = &g_1297;
            long long **l_1802 = &g_1059;
            int i, j;
            for (l_1748 = (-20); (l_1748 > (-10)); l_1748++)
            {
                unsigned short l_1771 = 0x5644L;
                short *l_1798[10][8] = {{&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}, {&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}, {&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}, {&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}, {&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}, {&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}, {&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}, {&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}, {&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}, {&l_1296, &g_269[1][3][0], &g_13, (void*)0, (void*)0, &g_13, &g_269[1][3][0], &l_1296}};
                int l_1799 = 0xA00A8FE4L;
                unsigned long long *l_1811[2];
                int *l_1816 = &l_1262[0][1][0];
                int i, j;
                for (i = 0; i < 2; i++)
                    l_1811[i] = &l_1400;
                for (l_1630 = 0; (l_1630 != 37); l_1630 = safe_add_func_uint64_t_u_u(l_1630, 2))
                {
                    unsigned long long l_1780[9] = {7UL, 7UL, 18446744073709551615UL, 7UL, 7UL, 18446744073709551615UL, 7UL, 7UL, 18446744073709551615UL};
                    int l_1783 = 1L;
                    int **l_1786 = (void*)0;
                    int *l_1788 = &l_1590;
                    int i;
                    for (g_674 = (-6); (g_674 > 5); g_674++)
                    {
                        char l_1766 = (-6L);
                        unsigned long long *l_1782 = (void*)0;
                        (*l_1429) = (((+((l_1766 >= (((safe_mod_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s(p_18, 4)) , (*l_1638)), (-1L))) <= l_1771) , (~((~(l_1783 |= (((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_s(0xE74CL, (safe_lshift_func_int8_t_s_s((l_1779 = (func_19(((*l_1638) ^= ((void*)0 == &g_66[0])), p_15) ^ l_1778[2][3])), 1)))) ^ (**g_74)), l_1780[8])) , l_1781) != l_1782))) | p_15)))) || p_18)) , l_1784[4][6]) == l_1786);
                        l_1787 = &l_1590;
                    }
                    l_1788 = &l_1783;
                }
                if (p_17)
                {
                    unsigned char l_1791 = 0x79L;
                    unsigned *l_1792 = (void*)0;
                    unsigned *l_1793[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_1793[i] = &g_107;
                    (*l_1787) = ((0xD35A2397BF404E7CLL != (safe_lshift_func_int8_t_s_u((**g_1293), l_1791))) ^ (!p_18));
                    if (l_1771)
                        continue;
                    (*l_1425) |= ((l_1792 != l_1638) <= (func_23((*l_1429), (((*l_1638) , 0xB3251ABCL) , 0x189E72F1L), p_18, p_15) , p_18));
                    if (p_16)
                        continue;
                }
                else
                {
                    unsigned short l_1812[4];
                    long long **l_1813 = &g_1059;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1812[i] = 0x36EBL;
                    for (g_41 = 0; (g_41 >= 18); g_41 = safe_add_func_uint64_t_u_u(g_41, 6))
                    {
                        if (p_15)
                            break;
                        if ((*g_1730))
                            break;
                        (*l_1429) |= (*l_1638);
                    }
                    l_1814 ^= ((l_1802 == ((p_15 , (safe_lshift_func_uint16_t_u_u(65535UL, (safe_sub_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(p_15, (g_674 >= (l_1771 | func_19(l_1812[1], (*l_1787)))))) && l_1812[1]), (*g_370))), (*l_1429)))))) , l_1813)) , l_1812[3]);
                    l_1816 = l_1815[2][2][3];
                }
            }
        }
        for (l_1578 = 10; (l_1578 < 34); ++l_1578)
        {
            int *l_1819 = &l_1748;
            l_1820 = (l_1638 = ((*g_965) = l_1819));
            (*g_100) = l_1821;
            for (g_1229 = 28; (g_1229 >= (-17)); --g_1229)
            {
                const int *l_1824[10][3] = {{&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}, {&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}, {&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}, {&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}, {&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}, {&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}, {&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}, {&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}, {&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}, {&g_1297, &l_1262[0][4][1], &l_1262[0][1][0]}};
                const int **l_1825 = &l_1824[4][0];
                int i, j;
                (*l_1825) = l_1824[4][0];
                (*g_1827) = g_1826;
            }
            l_1638 = (l_1820 = l_1819);
        }
    }
    return p_15;
}







static unsigned short func_19(long long p_20, int p_21)
{
    unsigned l_1219[4][10][3] = {{{0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}}, {{0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}}, {{0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}}, {{0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}, {0xB010A941L, 0x8744E07AL, 0x8EA92FF1L}}};
    int *l_1224 = &g_679;
    int i, j, k;
    l_1219[3][0][1] = (!p_20);
    for (p_20 = 0; (p_20 != (-16)); --p_20)
    {
        for (g_272 = 0; (g_272 > 5); ++g_272)
        {
            int **l_1225 = (void*)0;
            int **l_1226 = &l_1224;
            (*l_1226) = l_1224;
        }
        return g_41;
    }
    return (*l_1224);
}







static int func_23(const int p_24, int p_25, unsigned p_26, unsigned p_27)
{
    unsigned short l_1218[1];
    int i;
    for (i = 0; i < 1; i++)
        l_1218[i] = 1UL;
    return l_1218[0];
}







static int func_28(int p_29, long long p_30, int p_31, unsigned p_32)
{
    return p_32;
}







static long long func_33(unsigned char p_34, unsigned long long p_35, unsigned p_36, unsigned p_37, unsigned p_38)
{
    unsigned long long * const l_62 = &g_44;
    int l_548 = 0xAC70D042L;
    unsigned long long *l_549 = &g_478[0][0];
    const int l_858 = (-4L);
    int l_879 = 1L;
    int l_880 = 0xC7F80961L;
    int l_881 = (-1L);
    short l_882[10][1] = {{0x6AA8L}, {0x6AA8L}, {0x6AA8L}, {0x6AA8L}, {0x6AA8L}, {0x6AA8L}, {0x6AA8L}, {0x6AA8L}, {0x6AA8L}, {0x6AA8L}};
    int l_883 = 0x42368109L;
    int l_884 = 0xA984C5B1L;
    int l_885[2];
    unsigned l_887 = 1UL;
    unsigned char l_938 = 1UL;
    const unsigned short *l_968 = &g_674;
    int l_1018 = (-1L);
    char *l_1021 = &g_126[0];
    unsigned l_1047 = 0xA925C2A1L;
    short l_1101 = 1L;
    unsigned l_1102 = 0xC0696D8DL;
    int i, j;
    for (i = 0; i < 2; i++)
        l_885[i] = 1L;
    for (p_36 = 4; (p_36 < 14); p_36 = safe_add_func_uint8_t_u_u(p_36, 1))
    {
        unsigned long long *l_551 = &g_478[0][0];
        int l_863 = 0x6F7EAEDBL;
        int l_877 = 8L;
        int l_878[3][5][7] = {{{0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}}, {{0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}}, {{0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}, {0x3617E481L, (-1L), 0x4212DA40L, 0x7C9F8FCCL, 0x0C40D93AL, (-1L), 0x9BBE2A80L}}};
        int i, j, k;
        if ((safe_add_func_uint32_t_u_u(func_49(p_37, ((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint8_t_u_u((func_59(&p_35, l_62) , (((*g_74) != (g_550 = (((safe_mod_func_uint8_t_u_u(p_37, l_548)) , g_478[2][5]) , l_549))) >= g_126[1])), g_499)) == l_548) ^ p_35), 13)) && p_35), l_551, l_548, p_38), p_37)))
        {
            short **l_848 = (void*)0;
            unsigned char *l_859 = &g_41;
            (*g_849) = l_848;
            (*g_100) ^= (((*l_859) = (((+(safe_mod_func_int8_t_s_s(g_73, (safe_lshift_func_int16_t_s_u((safe_add_func_uint16_t_u_u(p_35, (0L >= ((safe_rshift_func_uint16_t_u_s(g_792[0], 15)) || g_83)))), 12))))) , (**g_369)) , ((l_548 , g_107) == (g_13 , l_858)))) & 0x47L);
            for (g_107 = 0; (g_107 <= 3); g_107 += 1)
            {
                unsigned long long l_866 = 0x3EFBE65C977DCEBCLL;
                for (p_37 = 0; (p_37 <= 3); p_37 += 1)
                {
                    int *l_860 = &g_272;
                    int *l_861 = &g_499;
                    int *l_862 = &g_101[1];
                    int *l_864 = &g_679;
                    int *l_865[3][10][3] = {{{&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}}, {{&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}}, {{&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}, {&g_272, &g_272, (void*)0}}};
                    int i, j, k;
                    --l_866;
                }
            }
        }
        else
        {
            return g_107;
        }
        for (p_37 = 0; (p_37 < 3); p_37 = safe_add_func_uint64_t_u_u(p_37, 1))
        {
            int *l_871 = &g_272;
            int *l_872 = &l_548;
            int *l_873 = (void*)0;
            int *l_874 = &g_679;
            int *l_875 = &g_499;
            int *l_876[9];
            short l_886 = 0L;
            short *l_895 = &l_882[0][0];
            int i;
            for (i = 0; i < 9; i++)
                l_876[i] = &g_272;
            l_887++;
            if (p_37)
                continue;
            (*l_871) &= ((g_73 = (**g_369)) , (((p_36 < (*l_874)) ^ func_59(l_549, &p_35)) || ((safe_unary_minus_func_uint32_t_u(0UL)) & (((*l_895) ^= (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(p_35, 5)), (g_478[0][0] , 1L)))) | p_36))));
        }
    }
    if (p_35)
    {
        int l_916 = 0xAD22BFBEL;
        int l_924 = 0x1971EA8CL;
        int l_925 = (-1L);
        int l_926 = 0L;
        unsigned short l_931 = 0x7E9DL;
        int *l_936 = &g_499;
        int *l_937 = &g_272;
        for (p_35 = 0; (p_35 >= 28); p_35 = safe_add_func_uint32_t_u_u(p_35, 1))
        {
            int l_901 = 7L;
            unsigned long long l_910 = 18446744073709551615UL;
            long long *l_912 = &g_83;
            long long **l_911[10] = {&l_912, &l_912, &l_912, &l_912, &l_912, &l_912, &l_912, &l_912, &l_912, &l_912};
            const short l_914 = 0L;
            int l_927 = 0xDEF3FE89L;
            short l_928 = 0x5F4CL;
            int l_929 = 1L;
            char l_930 = 1L;
            int i;
            for (g_107 = 0; (g_107 <= 1); g_107 += 1)
            {
                char l_913 = 0L;
                int i;
                if ((l_885[g_107] ^= 0x9BF8AFE4L))
                {
                    int *l_898 = &l_885[1];
                    int **l_899 = (void*)0;
                    (*g_900) = l_898;
                }
                else
                {
                    unsigned short l_915 = 65530UL;
                    int l_923 = 0x2EC36336L;
                    (*g_100) = ((p_36 == (l_901 == g_478[0][0])) != (safe_add_func_int32_t_s_s(0x1C5F3F5DL, (l_913 = ((((((((safe_sub_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(0x97L, (safe_rshift_func_int16_t_s_s((((((p_35 == (0xF69BL & (!((((void*)0 == &g_554[2][2][2]) >= p_36) <= l_885[g_107])))) <= (*g_75)) != 0x0869L) < 246UL) & 0xFD7BF094L), l_910)))), 65531UL)) , (void*)0) != l_911[0]) >= g_13) ^ g_81) & p_37) != 0x9A54L) < 65534UL)))));
                    if ((l_882[1][0] < p_38))
                    {
                        return p_38;
                    }
                    else
                    {
                        int *l_917 = &g_101[7];
                        int *l_918 = &g_101[7];
                        int *l_919 = &g_679;
                        int *l_920 = &g_101[3];
                        int *l_921 = &l_881;
                        int *l_922[8][5][6] = {{{&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}}, {{&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}}, {{&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}}, {{&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}}, {{&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}}, {{&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}}, {{&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}}, {{&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}, {&l_885[g_107], &g_101[4], (void*)0, &l_880, (void*)0, (void*)0}}};
                        int i, j, k;
                        (*g_100) |= ((l_914 | l_915) < l_916);
                        (*g_100) = p_38;
                        l_931++;
                        (*l_920) |= (safe_add_func_int16_t_s_s(p_34, l_927));
                    }
                }
                (*g_100) |= p_34;
                (*g_100) = l_928;
            }
        }
        --l_938;
    }
    else
    {
        char l_948 = (-3L);
        int *l_964 = &l_885[1];
        unsigned long long *l_1017 = &g_44;
        char * const *l_1026[2];
        char * const ** const l_1025 = &l_1026[1];
        long long *l_1042 = &g_1043;
        long long **l_1041 = &l_1042;
        long long **l_1046 = &l_1042;
        int l_1050 = 0x01E1FCA0L;
        int l_1085 = 9L;
        int l_1086 = 0x2B520F9EL;
        int l_1087 = 0x03CDEACAL;
        int l_1090 = 6L;
        int l_1092 = (-9L);
        int l_1093 = 0x1011288BL;
        int l_1094[9][10][2] = {{{0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}}, {{0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}}, {{0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}}, {{0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}}, {{0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}}, {{0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}}, {{0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}}, {{0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}}, {{0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}, {0L, (-1L)}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1026[i] = (void*)0;
        for (l_884 = 0; (l_884 <= 1); l_884 += 1)
        {
            unsigned l_945 = 18446744073709551615UL;
            const unsigned short *l_966 = &g_674;
            const unsigned short **l_967 = &l_966;
            unsigned long long *l_977 = &g_478[0][0];
            unsigned char *l_990[1];
            unsigned char ** const l_989 = &l_990[0];
            const int l_1010 = (-1L);
            long long **l_1044[2];
            int l_1049 = 0x3AF8B44FL;
            int l_1083 = 3L;
            int l_1096 = 0x12D0569AL;
            unsigned long long * const l_1125 = &g_329;
            unsigned long long l_1135[5];
            int l_1172 = (-1L);
            int l_1175 = 9L;
            int l_1176 = 0xD30E06F9L;
            int l_1177 = (-8L);
            int l_1179 = 2L;
            int l_1180 = 0x77C3C6F9L;
            int l_1182 = (-3L);
            int i;
            for (i = 0; i < 1; i++)
                l_990[i] = &l_938;
            for (i = 0; i < 2; i++)
                l_1044[i] = &l_1042;
            for (i = 0; i < 5; i++)
                l_1135[i] = 18446744073709551607UL;
            for (g_73 = 0; (g_73 <= 9); g_73 += 1)
            {
                char *l_949 = &g_126[0];
                int i;
                if ((((*l_949) = ((safe_sub_func_int32_t_s_s(l_885[l_884], ((((safe_add_func_uint64_t_u_u((l_945 >= ((*g_550) || (p_37 , (((l_887 || 4294967295UL) < ((l_885[l_884] && ((p_37 != p_38) && p_36)) == g_66[1])) != l_948)))), l_882[0][0])) ^ (*g_550)) , p_34) , (-6L)))) , (-6L))) , 0x212B879AL))
                {
                    unsigned char l_950[3];
                    int l_955 = 0x7D47AD5DL;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_950[i] = 249UL;
                    l_885[l_884] = ((((g_792[0] ^ l_950[2]) | (safe_mod_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(p_37, (l_945 & l_885[l_884]))), l_955))) && 5L) , 0x5C5482F6L);
                }
                else
                {
                    int i;
                    l_885[l_884] &= p_37;
                    (*g_100) = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u(g_44, (safe_rshift_func_uint8_t_u_u((**g_369), 4)))), (safe_rshift_func_int16_t_s_u((*g_640), 2))));
                    (*g_965) = l_964;
                }
            }
            if ((l_885[l_884] && ((!(((*l_967) = l_966) == l_968)) < (safe_mod_func_uint64_t_u_u(p_34, (safe_mod_func_uint32_t_u_u(p_36, (safe_add_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u((func_59(l_977, l_549) || g_329), g_679)), 0x57E1441943DF056DLL)))))))))
            {
                char l_1004 = 0xE6L;
                for (l_880 = 0; (l_880 >= 0); l_880 -= 1)
                {
                    int l_993 = 0x90092CEEL;
                    for (g_41 = 0; (g_41 <= 1); g_41 += 1)
                    {
                        int *l_985 = (void*)0;
                        int *l_986 = (void*)0;
                        unsigned char *l_988 = &g_73;
                        unsigned char **l_987 = &l_988;
                        short *l_998 = &l_882[9][0];
                        unsigned long long l_999 = 0x70390DED8B9451AELL;
                        int i, j;
                        l_885[(l_880 + 1)] ^= (safe_unary_minus_func_uint8_t_u((g_510[l_880] && ((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((g_510[(g_41 + 3)] , (g_478[(g_41 + 2)][(l_880 + 1)] | (safe_sub_func_uint64_t_u_u((p_36 ^ ((g_510[8] = g_510[l_880]) , (l_987 != l_989))), ((((safe_sub_func_uint16_t_u_u((l_993 || (safe_sub_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((((*l_998) = (g_679 , p_38)) != 0UL) != 0xCAL), 0x2992FEA7L)), l_999))), 0UL)) && (*g_75)) , (void*)0) == (void*)0))))), 5)), l_999)) , p_37))));
                        (*g_100) = ((g_81 , (safe_rshift_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0x1630L, ((void*)0 == &l_966))), 2))) , ((((void*)0 == &p_34) , &g_791[5][2]) != &g_791[1][1]));
                    }
                    if ((*g_521))
                        continue;
                    for (l_938 = 0; (l_938 <= 0); l_938 += 1)
                    {
                        int i;
                        (*g_100) ^= (l_885[l_884] = l_1004);
                        (*g_100) &= l_883;
                        (*g_1006) = &l_885[l_884];
                    }
                    if (l_885[1])
                        break;
                }
                if (p_34)
                {
                    int **l_1008 = &g_103;
                    (*l_1008) = l_964;
                    (*g_103) = 0x407E5E41L;
                    l_885[l_884] = l_880;
                }
                else
                {
                    const int l_1009 = 0xF9E7D4F7L;
                    (*l_964) = (((l_1009 | p_38) & (l_1010 > (p_35 >= (safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(((p_38 == p_34) | (((*l_62)--) && (l_1004 ^ ((l_1010 & ((l_1017 = &p_35) != (void*)0)) , p_34)))), 10)), 8))))) ^ l_1018);
                    (*g_100) = func_59(l_977, &p_35);
                }
                return l_1004;
            }
            else
            {
                char **l_1028 = &l_1021;
                char ***l_1027 = &l_1028;
                char ****l_1029 = &l_1027;
                unsigned short l_1030 = 0xE3FAL;
                int *l_1037 = &l_883;
                unsigned long long * const l_1040 = &g_44;
                long long ***l_1045[4] = {&l_1041, (void*)0, &l_1041, (void*)0};
                unsigned long long *l_1074 = &g_44;
                int l_1078 = 0x202327C2L;
                int l_1081 = 0xC67445C2L;
                int l_1089[4];
                long long l_1095 = 0L;
                long long l_1100 = (-1L);
                int i;
                for (i = 0; i < 4; i++)
                    l_1089[i] = (-8L);
                (*l_964) = ((safe_add_func_int32_t_s_s(((l_1021 == (p_34 , &g_126[0])) , (safe_unary_minus_func_int32_t_s(((((safe_rshift_func_int16_t_s_u(9L, (l_1025 != ((*l_1029) = l_1027)))) & (((**l_989) = p_35) , g_371)) , l_1030) != 0x7BL)))), 4294967295UL)) < 0x93L);
                (*l_1037) |= ((safe_lshift_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((((*g_640) & l_1030) > 0x87L), (((((*l_964) = (safe_mod_func_int16_t_s_s(func_49(l_880, p_36, l_1017, l_945, l_885[l_884]), (-4L)))) <= 0x9C60L) > 6L) ^ 0x2602L))), g_510[7])) ^ p_36);
                l_1050 &= (safe_lshift_func_uint16_t_u_s((((****l_1029) = (l_1049 = ((func_59(l_977, l_1040) < ((p_38 , ((((l_1041 == (l_1046 = l_1044[0])) & ((*l_964) = 0x7042FAB5L)) ^ 0xBDD5L) & l_1047)) ^ g_1048[1])) < 0x5ADC31C236749FCCLL))) != l_883), (*l_1037)));
                for (l_880 = 0; (l_880 >= 0); l_880 -= 1)
                {
                    const unsigned long long l_1068 = 18446744073709551606UL;
                    int l_1077 = 0xC30CFA7BL;
                    int l_1079 = 0xBF1C20C2L;
                    int l_1080 = 0x271679AAL;
                    int l_1082 = 0xE329062DL;
                    int l_1084 = 0x0AF793EAL;
                    int l_1088 = 0x2EAA562FL;
                    int l_1091[4][5][2] = {{{0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}}, {{0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}}, {{0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}}, {{0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}, {0x49FB0979L, 0x49FB0979L}}};
                    int i, j, k;
                    l_881 = (((safe_lshift_func_int16_t_s_s(func_59(&g_478[0][0], l_1042), p_36)) && func_59(&g_329, &g_329)) | p_34);
                    for (l_1049 = 0; (l_1049 >= 0); l_1049 -= 1)
                    {
                        long long ****l_1060 = &l_1045[3];
                        long long ****l_1061 = &g_1057[6][2];
                        unsigned short *l_1062 = &g_674;
                        int l_1069 = (-9L);
                        unsigned *l_1070[10][6][4] = {{{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}, {{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}, {{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}, {{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}, {{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}, {{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}, {{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}, {{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}, {{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}, {{&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}, {&g_808[0][1], &g_107, &g_1048[1], &g_107}}};
                        int *l_1071 = &l_548;
                        unsigned short *l_1075 = &l_1030;
                        int *l_1076[8] = {&g_679, &g_101[0], &g_679, &g_101[0], &g_679, &g_101[0], &g_679, &g_101[0]};
                        int i, j, k;
                        (*l_1071) &= (((g_107 &= (safe_add_func_int32_t_s_s(((*g_100) &= ((g_499 & (l_885[l_884] , (((*l_1061) = ((*l_1060) = g_1057[4][2])) != &g_1058))) < ((((((*l_1062) = p_34) , (safe_unary_minus_func_int8_t_s(((safe_lshift_func_int16_t_s_s((*l_964), ((safe_rshift_func_uint8_t_u_s(1UL, 2)) == 18446744073709551615UL))) <= (l_1068 == 249UL))))) && p_37) >= 0UL) || (*l_964)))), l_1069))) || (*l_1037)) && l_945);
                        (*g_100) = (p_35 , (((l_62 != ((((*l_1075) ^= (((*l_1037) & (-8L)) , (((--(*l_1062)) == p_35) == (*l_1071)))) >= p_37) , (void*)0)) | (-4L)) | l_1068));
                        --g_1097;
                        l_1102--;
                    }
                }
            }
            for (g_674 = 0; (g_674 <= 0); g_674 += 1)
            {
                unsigned long long *l_1105 = (void*)0;
                int *l_1108 = &g_510[3];
                int l_1111 = 8L;
                unsigned l_1122[2][5];
                short l_1166 = 0xBF71L;
                int l_1168 = 0xFF4F43DAL;
                int l_1169[6][6][7] = {{{0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}}, {{0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}}, {{0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}}, {{0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}}, {{0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}}, {{0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}, {0x11C75D30L, 1L, 4L, 0x0098F3BEL, 0xE94775EBL, 0x22F17105L, 0x514BCB95L}}};
                char l_1170 = (-4L);
                char l_1184 = 0x4BL;
                unsigned long long l_1185 = 1UL;
                unsigned short *l_1200 = &g_1097;
                int *l_1205 = (void*)0;
                int *l_1206 = &l_1094[2][0][0];
                int *l_1207[7] = {&g_101[7], &g_101[7], &l_1087, &g_101[7], &g_101[7], &l_1087, &g_101[7]};
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1122[i][j] = 0xE2165642L;
                }
                if ((p_38 , (((*l_964) >= (((*l_1108) = (safe_add_func_int32_t_s_s((+p_34), p_38))) , (safe_lshift_func_uint16_t_u_u(((-9L) && 0xE1ED01AAL), 1)))) && ((l_1101 | 0x9078L) != l_1111))))
                {
                    int l_1117 = 4L;
                    int l_1130 = 0L;
                    int l_1149 = 0xCFB50DA8L;
                    int l_1163 = 0xB2CA2DF6L;
                    int l_1165 = 0x892E0389L;
                    int l_1167 = (-3L);
                    int l_1171 = 0x6ADD2BCAL;
                    int l_1173 = 0L;
                    int l_1174 = 0x1458A61AL;
                    int l_1178 = 1L;
                    int l_1181 = 5L;
                    int l_1183[6][4] = {{0x7933B046L, 0x739950F4L, 0x7933B046L, 0x739950F4L}, {0x7933B046L, 0x739950F4L, 0x7933B046L, 0x739950F4L}, {0x7933B046L, 0x739950F4L, 0x7933B046L, 0x739950F4L}, {0x7933B046L, 0x739950F4L, 0x7933B046L, 0x739950F4L}, {0x7933B046L, 0x739950F4L, 0x7933B046L, 0x739950F4L}, {0x7933B046L, 0x739950F4L, 0x7933B046L, 0x739950F4L}};
                    unsigned short *l_1190 = &g_1097;
                    unsigned long long * const l_1191 = &l_1135[2];
                    int i, j;
                    if ((p_35 | (((safe_rshift_func_int8_t_s_s(((((*l_1042) ^= l_1111) < ((p_34 , ((((~((0x5FA1A0CDD7B0B427LL | (l_945 && (safe_rshift_func_int8_t_s_u(((p_34 < (l_1117 = (((-1L) == l_1102) ^ (safe_unary_minus_func_uint64_t_u((l_1049 > l_1111)))))) ^ p_35), p_37)))) && 0L)) , (*l_964)) , l_1117) > p_37)) , l_1102)) == p_34), 2)) >= g_126[0]) & 0xF5BB1C8EL)))
                    {
                        unsigned long long **l_1118[4];
                        unsigned long long **l_1119 = &g_550;
                        unsigned long long **l_1126 = &l_1017;
                        int *l_1127 = (void*)0;
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1118[i] = (void*)0;
                        (*g_100) |= l_1111;
                        (*g_100) = (((((l_1111 >= (((func_59((l_1105 = &p_35), ((*l_1119) = &p_35)) <= (safe_sub_func_uint8_t_u_u(p_36, 249UL))) || ((*l_964) = 0L)) >= g_1043)) , (((p_37 , l_1111) == l_1117) && 0x469487BE99755BA3LL)) >= p_35) > p_35) , l_1122[0][2]);
                        g_679 ^= (l_1018 ^= (((!((safe_lshift_func_int16_t_s_s((((((((((*l_964) = 0x50977EBBL) == p_36) , (func_59(l_549, ((*l_1126) = l_1125)) , p_36)) , (+((**g_74) <= ((g_1048[1] & (((g_41 == l_1117) ^ p_38) , (-1L))) && 0x809C4F13C1875206LL)))) | p_37) & p_34) | l_1122[0][2]) , p_35), l_1096)) , p_34)) , p_34) < 0x0EL));
                        (*g_100) = (((safe_add_func_int64_t_s_s(l_1130, (((func_59(l_1017, &p_35) <= (safe_rshift_func_int8_t_s_s((g_1097 && (((safe_lshift_func_uint8_t_u_s((1UL != (l_885[1] ^= ((p_36 & 0x4B3CL) == (l_1135[3] < l_1117)))), p_36)) || l_885[l_884]) || 0xB0226DA5L)), l_1117))) && l_885[1]) < l_1117))) <= 0x4BA22A86L) , 0L);
                    }
                    else
                    {
                        int *l_1136 = &g_101[1];
                        int *l_1137 = &l_879;
                        int *l_1138 = &g_499;
                        int *l_1139 = &l_883;
                        int *l_1140 = (void*)0;
                        int *l_1141 = &l_880;
                        int *l_1142 = &l_1094[2][0][1];
                        int *l_1143 = &l_1049;
                        int *l_1144 = &l_885[l_884];
                        int *l_1145 = &l_885[l_884];
                        int *l_1146 = (void*)0;
                        int *l_1147 = &g_679;
                        int *l_1148 = &l_1085;
                        int *l_1150 = (void*)0;
                        int *l_1151 = (void*)0;
                        int *l_1152 = &l_885[1];
                        int *l_1153 = &l_1085;
                        int *l_1154 = &l_885[l_884];
                        int *l_1155 = (void*)0;
                        int *l_1156 = &l_880;
                        int *l_1157 = &l_1149;
                        int *l_1158 = &l_1094[1][9][0];
                        int *l_1159 = &l_1050;
                        int *l_1160 = &l_1090;
                        int *l_1161 = &l_1094[1][9][0];
                        int *l_1162 = (void*)0;
                        int *l_1164[5] = {&l_880, &g_679, &l_880, &g_679, &l_880};
                        short *l_1192 = (void*)0;
                        short *l_1193 = &g_269[0][5][5];
                        int i;
                        ++l_1185;
                        (*l_1160) = (0UL & ((*l_1193) = (safe_add_func_uint8_t_u_u((l_1190 == &g_1097), (func_59(&p_35, l_1191) <= 0xDFC4ADC5L)))));
                    }
                    (*g_100) ^= (((0xA5L != g_1097) || (l_1180 || ((*g_550) = (p_38 >= (**g_74))))) , ((*l_967) != &g_1097));
                    return p_36;
                }
                else
                {
                    int *l_1194[6] = {&l_1085, &l_1179, &l_1085, &l_1179, &l_1085, &l_1179};
                    int i;
                    l_883 &= l_1168;
                    if (l_1101)
                        break;
                    for (l_887 = 0; (l_887 <= 1); l_887 += 1)
                    {
                        (*g_1195) = l_1194[5];
                        if (p_37)
                            break;
                    }
                }
                l_1086 = (((safe_rshift_func_int8_t_s_u(g_101[1], 4)) & (((*l_964) = p_38) ^ ((safe_rshift_func_uint8_t_u_u(((((*l_1200) &= p_34) != (((p_35 &= (((p_37 > ((g_1048[1] <= (++g_73)) >= l_548)) == (safe_sub_func_uint8_t_u_u(l_938, p_37))) != 0x8DA0L)) == 1UL) > 65534UL)) && 0x527AL), 1)) , p_35))) , p_35);
                ++g_1208;
            }
        }
        for (g_329 = 0; (g_329 == 46); g_329++)
        {
            int **l_1214 = (void*)0;
            int ***l_1213 = &l_1214;
            (*g_100) &= (((l_1213 != &l_1214) || (*l_964)) , 1L);
        }
    }
    (*g_1215) = &l_881;
    return p_38;
}







static unsigned func_49(unsigned p_50, short p_51, unsigned long long * p_52, unsigned long long p_53, unsigned short p_54)
{
    char l_574 = 0L;
    int l_600[2][8];
    long long l_610 = 0L;
    short *l_636 = &g_269[2][5][2];
    short **l_635 = &l_636;
    unsigned long long l_658 = 18446744073709551615UL;
    unsigned long long * const *l_775 = &g_550;
    unsigned long long * const **l_774 = &l_775;
    unsigned l_833 = 0x5C1591DDL;
    const long long **l_839 = (void*)0;
    const long long ***l_838 = &l_839;
    unsigned *l_842 = &g_808[0][3];
    char *l_846 = (void*)0;
    char **l_845 = &l_846;
    unsigned char *l_847[3];
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
            l_600[i][j] = (-6L);
    }
    for (i = 0; i < 3; i++)
        l_847[i] = &g_41;
    for (g_329 = 0; (g_329 <= 2); g_329 += 1)
    {
        int *l_552 = &g_499;
        int **l_555 = &g_103;
        int l_594 = 1L;
        int l_596 = 1L;
        int l_604 = (-1L);
        int l_605[5][6] = {{0xF8E417D2L, (-1L), 2L, 2L, (-1L), 0xF8E417D2L}, {0xF8E417D2L, (-1L), 2L, 2L, (-1L), 0xF8E417D2L}, {0xF8E417D2L, (-1L), 2L, 2L, (-1L), 0xF8E417D2L}, {0xF8E417D2L, (-1L), 2L, 2L, (-1L), 0xF8E417D2L}, {0xF8E417D2L, (-1L), 2L, 2L, (-1L), 0xF8E417D2L}};
        short l_615 = 0L;
        long long *l_632 = (void*)0;
        unsigned long long **l_724 = &g_550;
        char *l_782 = &g_126[0];
        int i, j;
        (*l_555) = l_552;
        if ((*g_100))
        {
            unsigned l_558 = 18446744073709551615UL;
            char *l_559[10];
            int l_569 = (-9L);
            int l_601 = 0L;
            int l_603 = 1L;
            int l_606 = (-1L);
            int l_608 = (-4L);
            int l_611 = 0xD19FF5B8L;
            int l_614 = 3L;
            int i;
            for (i = 0; i < 10; i++)
                l_559[i] = &g_126[0];
            for (g_81 = 5; (g_81 >= 0); g_81 -= 1)
            {
                unsigned l_586 = 0x70345AFAL;
                int l_589 = 4L;
                int l_599 = 5L;
                int l_602 = (-10L);
                int l_607 = 0x3D92FC4BL;
                int l_609 = 1L;
                int l_612[3];
                unsigned short l_616 = 0xE691L;
                long long *l_631[9];
                long long *l_634 = &l_610;
                int i;
                for (i = 0; i < 3; i++)
                    l_612[i] = (-8L);
                for (i = 0; i < 9; i++)
                    l_631[i] = (void*)0;
                for (p_54 = 1; (p_54 <= 5); p_54 += 1)
                {
                    unsigned *l_562[8] = {&g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107, &g_107};
                    int l_571[2][1][7] = {{{0x398CBF1AL, (-10L), 0x398CBF1AL, (-10L), 0x398CBF1AL, (-10L), 0x398CBF1AL}}, {{0x398CBF1AL, (-10L), 0x398CBF1AL, (-10L), 0x398CBF1AL, (-10L), 0x398CBF1AL}}};
                    int *l_590 = &l_571[0][0][2];
                    int *l_591 = &l_571[0][0][6];
                    int *l_592 = &g_101[7];
                    int *l_593 = &l_589;
                    int *l_595 = &l_589;
                    int *l_597 = &l_571[0][0][3];
                    int *l_598[10] = {&l_569, &g_499, &g_499, &g_499, &g_499, &l_569, &g_499, &g_499, &g_499, &g_499};
                    long long l_613 = 0xB6F0634E5C6C04AALL;
                    int i, j, k;
                    if (g_478[g_329][g_81])
                        break;
                    if ((((safe_sub_func_uint16_t_u_u(l_558, (&g_126[0] == l_559[9]))) == ((g_269[0][5][5] , (**g_360)) == (g_107 &= (safe_sub_func_uint8_t_u_u((((*g_100) = 0x081EE48EL) < (**l_555)), (0UL > g_126[0])))))) != g_73))
                    {
                        int *l_563 = &g_272;
                        (*l_555) = l_563;
                        if ((*l_563))
                            break;
                    }
                    else
                    {
                        int *l_564 = &g_101[7];
                        int *l_565 = &g_101[7];
                        int l_566 = 0x3FE7F3FDL;
                        int *l_567 = &g_499;
                        int *l_568 = (void*)0;
                        int *l_570 = &l_569;
                        int *l_572 = &g_101[3];
                        int *l_573 = &l_571[0][0][2];
                        int *l_575 = &l_569;
                        int *l_576 = &l_566;
                        int *l_577 = (void*)0;
                        int *l_578 = (void*)0;
                        int *l_579 = &g_101[7];
                        int *l_580 = &g_499;
                        int *l_581 = (void*)0;
                        int *l_582 = (void*)0;
                        int *l_583 = &g_101[7];
                        int *l_584 = &g_272;
                        int *l_585[1][4][8];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 4; j++)
                            {
                                for (k = 0; k < 8; k++)
                                    l_585[i][j][k] = &g_101[7];
                            }
                        }
                        --l_586;
                    }
                    --l_616;
                }
                (**l_555) = l_603;
                for (l_574 = 1; (l_574 <= 5); l_574 += 1)
                {
                    unsigned l_624 = 1UL;
                    for (p_53 = 0; (p_53 <= 5); p_53 += 1)
                    {
                        return l_609;
                    }
                    for (l_558 = 0; (l_558 <= 5); l_558 += 1)
                    {
                        unsigned long long l_619 = 0x4D5D4AC070095C9CLL;
                        int *l_622 = (void*)0;
                        int *l_623 = &l_605[1][1];
                        long long **l_633[7][10] = {{&l_631[2], &l_631[5], &l_632, (void*)0, &l_632, &l_631[5], &l_631[2], &l_631[2], &l_631[2], (void*)0}, {&l_631[2], &l_631[5], &l_632, (void*)0, &l_632, &l_631[5], &l_631[2], &l_631[2], &l_631[2], (void*)0}, {&l_631[2], &l_631[5], &l_632, (void*)0, &l_632, &l_631[5], &l_631[2], &l_631[2], &l_631[2], (void*)0}, {&l_631[2], &l_631[5], &l_632, (void*)0, &l_632, &l_631[5], &l_631[2], &l_631[2], &l_631[2], (void*)0}, {&l_631[2], &l_631[5], &l_632, (void*)0, &l_632, &l_631[5], &l_631[2], &l_631[2], &l_631[2], (void*)0}, {&l_631[2], &l_631[5], &l_632, (void*)0, &l_632, &l_631[5], &l_631[2], &l_631[2], &l_631[2], (void*)0}, {&l_631[2], &l_631[5], &l_632, (void*)0, &l_632, &l_631[5], &l_631[2], &l_631[2], &l_631[2], (void*)0}};
                        int i, j;
                        ++l_619;
                        l_624++;
                        l_600[0][2] = ((safe_mod_func_uint64_t_u_u((g_371 | (((safe_mod_func_int32_t_s_s((*g_103), (**l_555))) , g_81) , (**l_555))), (+(((g_269[2][7][0] <= p_50) , l_631[2]) == (l_634 = l_632))))) , 0xF22002BAL);
                    }
                    (*g_638) = l_635;
                }
            }
        }
        else
        {
            int l_643 = 0x2EF33B96L;
            int l_654 = (-1L);
            int l_655[1][7][9] = {{{0x8D72A514L, 0x8D72A514L, 0x6D616582L, 0x189E0213L, 0x18D2C5FBL, 6L, 1L, 0x8D72A514L, (-2L)}, {0x8D72A514L, 0x8D72A514L, 0x6D616582L, 0x189E0213L, 0x18D2C5FBL, 6L, 1L, 0x8D72A514L, (-2L)}, {0x8D72A514L, 0x8D72A514L, 0x6D616582L, 0x189E0213L, 0x18D2C5FBL, 6L, 1L, 0x8D72A514L, (-2L)}, {0x8D72A514L, 0x8D72A514L, 0x6D616582L, 0x189E0213L, 0x18D2C5FBL, 6L, 1L, 0x8D72A514L, (-2L)}, {0x8D72A514L, 0x8D72A514L, 0x6D616582L, 0x189E0213L, 0x18D2C5FBL, 6L, 1L, 0x8D72A514L, (-2L)}, {0x8D72A514L, 0x8D72A514L, 0x6D616582L, 0x189E0213L, 0x18D2C5FBL, 6L, 1L, 0x8D72A514L, (-2L)}, {0x8D72A514L, 0x8D72A514L, 0x6D616582L, 0x189E0213L, 0x18D2C5FBL, 6L, 1L, 0x8D72A514L, (-2L)}}};
            unsigned l_685 = 0xD6EBDFFFL;
            char *l_708 = &g_126[1];
            char ** const l_707[5][2][1] = {{{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}, {{(void*)0}, {(void*)0}}};
            char ** const *l_706[3];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_706[i] = &l_707[1][1][0];
            for (p_51 = 4; (p_51 >= 0); p_51 -= 1)
            {
                long long *l_644 = &l_610;
                int l_656 = (-1L);
                int l_657 = 0L;
                int l_680 = 1L;
                int l_681 = 1L;
                int l_682[9] = {1L, 0x8F043A87L, 1L, 0x8F043A87L, 1L, 0x8F043A87L, 1L, 0x8F043A87L, 1L};
                char l_683 = 0x64L;
                unsigned l_691 = 0x0BED6334L;
                int i;
                (*g_100) &= (-9L);
                l_643 = ((*g_103) &= (l_643 ^ (((*p_52) , l_644) != l_644)));
                if (((*g_100) = (safe_sub_func_int64_t_s_s(p_54, 1L))))
                {
                    int l_650 = 0x17136ABFL;
                    int l_651 = 0x8104564CL;
                    int l_652 = 0xBBE29FFFL;
                    int l_653[6][5][8] = {{{0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}}, {{0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}}, {{0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}}, {{0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}}, {{0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}}, {{0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}, {0L, (-1L), 0L, 0L, 1L, 0x933BF0C1L, 1L, 0L}}};
                    int i, j, k;
                    if (p_50)
                    {
                        unsigned long long l_647 = 18446744073709551612UL;
                        (*l_555) = (*l_555);
                        if ((**g_113))
                            break;
                        l_647 = p_53;
                    }
                    else
                    {
                        int *l_648 = &l_605[1][1];
                        int *l_649[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_649[i] = &l_600[1][0];
                        l_658--;
                    }
                }
                else
                {
                    int l_661 = 3L;
                    (*l_552) |= l_661;
                    (*l_552) = ((safe_lshift_func_int16_t_s_u(p_51, p_51)) , (p_51 | 0x88E3369BL));
                    for (l_596 = 2; (l_596 >= 0); l_596 -= 1)
                    {
                        long long **l_667 = (void*)0;
                        long long **l_669 = &l_644;
                        long long ***l_668 = &l_669;
                        int l_672 = (-1L);
                        unsigned short *l_673[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_673[i] = &g_674;
                        (*g_100) ^= ((g_478[p_51][(g_329 + 3)] &= (*g_75)) || (safe_lshift_func_uint16_t_u_s((l_661 |= (p_54 = (p_51 < (4294967290UL & (safe_unary_minus_func_int32_t_s(((l_667 != (p_53 , ((*l_668) = l_667))) , (l_672 = (p_51 , (((((g_478[p_51][(g_329 + 3)] , (safe_lshift_func_int16_t_s_s(((0xCAD70BA4L > (*g_103)) & p_54), p_51))) , 0UL) <= p_54) , (*l_555)) != &l_661)))))))))), p_50)));
                    }
                }
                for (g_41 = 0; (g_41 <= 5); g_41 += 1)
                {
                    int *l_675 = &g_499;
                    int *l_676 = &l_657;
                    int *l_677 = (void*)0;
                    int *l_678[1];
                    char l_684 = 0x49L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_678[i] = &l_643;
                    ++l_685;
                    for (l_604 = 0; (l_604 <= 2); l_604 += 1)
                    {
                        short l_688[8][7][3] = {{{0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}}, {{0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}}, {{0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}}, {{0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}}, {{0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}}, {{0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}}, {{0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}}, {{0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}, {0L, 0x56F2L, (-1L)}}};
                        int l_689 = (-7L);
                        int l_690 = 1L;
                        unsigned long long *l_696 = (void*)0;
                        unsigned long long *l_697 = &l_658;
                        unsigned l_698[5] = {0x1F16B6D9L, 0x02612819L, 0x1F16B6D9L, 0x02612819L, 0x1F16B6D9L};
                        char *l_701[8][6][4] = {{{(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}}, {{(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}}, {{(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}}, {{(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}}, {{(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}}, {{(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}}, {{(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}}, {{(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}, {(void*)0, &l_684, (void*)0, &g_126[1]}}};
                        int i, j, k;
                        --l_691;
                        l_655[0][6][6] = ((l_689 &= (safe_sub_func_int64_t_s_s(p_50, ((*l_697) = (g_478[(p_51 + 1)][(p_51 + 3)] = l_655[0][3][7]))))) > ((p_54 = (((l_698[2] < (&g_66[1] != (void*)0)) >= ((**g_113) < (safe_mod_func_int8_t_s_s((g_126[0] = 0x8FL), l_690)))) & l_698[2])) < g_674));
                    }
                    (*l_552) ^= 0xB5037388L;
                }
            }
            if (p_51)
            {
                short l_732 = 0x8D12L;
                int *l_733[2][3][4] = {{{(void*)0, (void*)0, &l_605[1][1], &l_605[1][1]}, {(void*)0, (void*)0, &l_605[1][1], &l_605[1][1]}, {(void*)0, (void*)0, &l_605[1][1], &l_605[1][1]}}, {{(void*)0, (void*)0, &l_605[1][1], &l_605[1][1]}, {(void*)0, (void*)0, &l_605[1][1], &l_605[1][1]}, {(void*)0, (void*)0, &l_605[1][1], &l_605[1][1]}}};
                unsigned l_734[7] = {0xA2AD6FB2L, 0xA2AD6FB2L, 18446744073709551611UL, 0xA2AD6FB2L, 0xA2AD6FB2L, 18446744073709551611UL, 0xA2AD6FB2L};
                int i, j, k;
                (*l_555) = (*l_555);
                for (l_658 = 1; (l_658 <= 7); l_658 += 1)
                {
                    int l_702 = 0xA1779716L;
                    char ** const **l_709 = &l_706[2];
                    int l_716 = 0x5C12B01FL;
                    unsigned l_720 = 18446744073709551613UL;
                    int i;
                    for (g_272 = 2; (g_272 >= 0); g_272 -= 1)
                    {
                        int i, j, k;
                        (**l_555) |= g_101[l_658];
                        (*l_552) = g_510[(l_658 + 2)];
                    }
                    g_101[l_658] ^= 1L;
                    (*l_552) = ((l_702 &= g_101[l_658]) < ((safe_unary_minus_func_uint8_t_u(g_101[(g_329 + 4)])) <= (safe_mod_func_uint64_t_u_u((*g_75), ((((*l_709) = l_706[2]) == (((safe_lshift_func_uint8_t_u_s(g_83, g_81)) || (l_655[0][0][2] , ((p_51 < (safe_rshift_func_int16_t_s_s((l_716 = ((**l_635) ^= (safe_rshift_func_int8_t_s_u(p_53, 7)))), 4))) , g_41))) , (void*)0)) & (*g_550))))));
                    for (g_674 = 0; (g_674 <= 0); g_674 += 1)
                    {
                        int l_717 = 1L;
                        int *l_718[7] = {&l_654, &l_654, &g_101[(g_329 + 4)], &l_654, &l_654, &g_101[(g_329 + 4)], &l_654};
                        short l_719 = 0L;
                        int i, j, k;
                        --l_720;
                        (*g_103) = (l_655[g_674][(g_329 + 1)][(g_329 + 5)] , (-1L));
                    }
                    for (p_53 = 0; (p_53 <= 2); p_53 += 1)
                    {
                        int i, j, k;
                        (**l_555) = (**l_555);
                    }
                }
                for (p_53 = 0; (p_53 <= 5); p_53 += 1)
                {
                    unsigned long long ***l_723[9][2] = {{(void*)0, &g_361}, {(void*)0, &g_361}, {(void*)0, &g_361}, {(void*)0, &g_361}, {(void*)0, &g_361}, {(void*)0, &g_361}, {(void*)0, &g_361}, {(void*)0, &g_361}, {(void*)0, &g_361}};
                    int i, j;
                    l_724 = &p_52;
                    (*l_555) = (*l_555);
                    (**l_555) &= g_478[p_53][(g_329 + 6)];
                    if (p_50)
                        continue;
                    for (g_674 = 0; (g_674 <= 2); g_674 += 1)
                    {
                        int i;
                        (*g_100) = ((((safe_unary_minus_func_int32_t_s((p_53 || 1L))) & ((safe_lshift_func_int8_t_s_s(g_371, ((**l_555) = (p_54 , (g_126[1] ^= (((g_510[3] < l_658) && (safe_sub_func_int32_t_s_s(p_51, (safe_sub_func_int64_t_s_s(0xFC49A14348386662LL, l_574))))) | l_610)))))) >= 0xAED4L)) >= 0UL) & g_83);
                    }
                }
                l_734[2]++;
            }
            else
            {
                const int *l_737 = &l_594;
                short l_745 = 8L;
                int l_758 = (-9L);
                int l_759[7][2] = {{1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}, {1L, 1L}};
                int *l_764 = &l_655[0][4][3];
                int *l_765 = &l_643;
                int *l_766 = &l_605[1][1];
                int *l_767[4][5][5] = {{{(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}}, {{(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}}, {{(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}}, {{(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}, {(void*)0, &l_600[1][7], (void*)0, &l_600[0][6], &l_605[1][1]}}};
                int i, j, k;
                for (g_272 = 2; (g_272 >= 0); g_272 -= 1)
                {
                    const int *l_738[1][4][8] = {{{(void*)0, &g_101[7], &g_499, &l_594, &g_499, &g_101[7], (void*)0, &l_596}, {(void*)0, &g_101[7], &g_499, &l_594, &g_499, &g_101[7], (void*)0, &l_596}, {(void*)0, &g_101[7], &g_499, &l_594, &g_499, &g_101[7], (void*)0, &l_596}, {(void*)0, &g_101[7], &g_499, &l_594, &g_499, &g_101[7], (void*)0, &l_596}}};
                    int l_760 = (-5L);
                    int i, j, k;
                    for (p_50 = 0; (p_50 <= 2); p_50 += 1)
                    {
                        if (p_50)
                            break;
                        (*l_555) = &l_655[0][3][7];
                        l_738[0][2][1] = l_737;
                    }
                    (*l_552) = (safe_rshift_func_uint16_t_u_s(65535UL, (*g_640)));
                    (*g_103) = (safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s(l_745, g_101[7])) , &g_674) == &g_674) == (*l_737)), 4));
                    for (g_44 = 0; (g_44 <= 2); g_44 += 1)
                    {
                        const int **l_746 = (void*)0;
                        int *l_749 = (void*)0;
                        int *l_750 = &l_594;
                        int *l_751 = &l_605[4][0];
                        int *l_752 = &g_101[1];
                        int l_753 = 9L;
                        int *l_754 = &l_604;
                        int *l_755 = &l_655[0][4][8];
                        int *l_756 = &l_600[0][5];
                        int *l_757[6][4] = {{&l_753, &g_679, &g_101[7], &l_753}, {&l_753, &g_679, &g_101[7], &l_753}, {&l_753, &g_679, &g_101[7], &l_753}, {&l_753, &g_679, &g_101[7], &l_753}, {&l_753, &g_679, &g_101[7], &l_753}, {&l_753, &g_679, &g_101[7], &l_753}};
                        unsigned short l_761 = 65532UL;
                        int i, j;
                        (*g_748) = l_738[0][3][5];
                        l_761++;
                    }
                    for (g_83 = 2; (g_83 >= 0); g_83 -= 1)
                    {
                        if (l_685)
                            break;
                    }
                }
                g_768[3][2][4]--;
            }
            (*g_100) |= ((**g_360) && (((safe_add_func_uint16_t_u_u(l_685, ((**l_635) = p_53))) , (g_773 = &g_361)) != l_774));
        }
        (*l_552) = ((safe_lshift_func_uint16_t_u_s(p_51, 3)) , ((*l_552) <= (*g_75)));
        (*g_100) ^= (((2UL < (&l_632 != (void*)0)) == (((g_329 == (safe_add_func_uint8_t_u_u((p_53 < (0x11F86F3DL == (((*l_782) = p_53) || 0xFCL))), (+(0L != 0x8DEAL))))) <= l_600[1][4]) >= g_83)) == g_499);
        for (g_81 = 0; (g_81 <= 2); g_81 += 1)
        {
            int *l_783 = &g_679;
            (*l_555) = l_783;
            (**l_555) = (safe_sub_func_uint32_t_u_u(0xBCD1D0F9L, g_269[2][0][0]));
            for (l_596 = 2; (l_596 >= 0); l_596 -= 1)
            {
                unsigned long long l_786[7] = {18446744073709551606UL, 18446744073709551606UL, 18446744073709551615UL, 18446744073709551606UL, 18446744073709551606UL, 18446744073709551615UL, 18446744073709551606UL};
                volatile int **l_794[1][1][5] = {{{&g_791[0][2], &g_791[1][2], &g_791[0][2], &g_791[1][2], &g_791[0][2]}}};
                int *l_805 = &g_101[7];
                short ***l_806 = (void*)0;
                short ***l_807 = &g_639[0];
                int i, j, k;
                --l_786[4];
                for (l_594 = 0; (l_594 <= 2); l_594 += 1)
                {
                    unsigned short l_789 = 0UL;
                    int l_795 = 2L;
                    long long l_796 = 0x39FE59A3A5E876C2LL;
                    unsigned char *l_799 = (void*)0;
                    unsigned char *l_800[8] = {&g_73, &g_41, &g_73, &g_41, &g_73, &g_41, &g_73, &g_41};
                    int i;
                    for (g_83 = 4; (g_83 >= 0); g_83 -= 1)
                    {
                        int i, j, k;
                        l_605[g_329][l_594] = ((((0x51CAA6A239872DC2LL & (g_768[(l_594 + 2)][(g_329 + 1)][(l_594 + 4)] < (4294967294UL >= ((l_605[l_596][(l_594 + 3)] && p_51) != l_789)))) || ((*g_75) , g_768[(l_594 + 2)][(g_329 + 1)][(l_594 + 4)])) < l_789) <= 0x8BL);
                        (*l_555) = l_783;
                        l_605[(g_329 + 1)][(g_329 + 3)] = p_50;
                    }
                    for (p_50 = 0; (p_50 <= 9); p_50 += 1)
                    {
                        int i, j, k;
                        if (g_768[l_596][l_596][(g_81 + 2)])
                            break;
                        (*g_100) = (g_768[(g_81 + 4)][(l_596 + 1)][l_596] || (l_786[0] , p_53));
                        return g_107;
                    }
                    for (g_272 = 3; (g_272 >= 0); g_272 -= 1)
                    {
                        volatile int ***l_793[3][10] = {{&g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790}, {&g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790}, {&g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790, &g_790}};
                        int i, j, k;
                        if (g_768[(l_594 + 3)][(l_594 + 1)][(g_329 + 2)])
                            break;
                        l_794[0][0][1] = g_790;
                        l_795 = (*l_783);
                    }
                    if ((l_796 == (safe_sub_func_int8_t_s_s(g_73, (l_600[1][0] = 0x04L)))))
                    {
                        unsigned short *l_801 = &g_674;
                        unsigned short *l_804 = &l_789;
                        (*g_100) = (((*l_804) = (!((*l_801)--))) == 0xE2F6L);
                        return p_53;
                    }
                    else
                    {
                        (*l_555) = l_805;
                    }
                }
                (*l_807) = (void*)0;
            }
            for (p_51 = 0; (p_51 <= 2); p_51 += 1)
            {
                unsigned short l_812 = 0x1CD7L;
                if (p_51)
                {
                    return p_54;
                }
                else
                {
                    for (g_73 = 0; (g_73 <= 2); g_73 += 1)
                    {
                        int l_809 = 0x85B93419L;
                        int *l_810 = &g_101[7];
                        int *l_811[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_811[i] = &l_594;
                        (*l_552) = ((&g_74 == ((*g_100) , &g_74)) & 1UL);
                        if (g_808[0][3])
                            continue;
                        --l_812;
                    }
                }
                for (g_44 = 0; (g_44 <= 2); g_44 += 1)
                {
                    if (((*l_552) = (p_53 || (*l_783))))
                    {
                        unsigned char *l_817 = &g_73;
                        int l_824 = 9L;
                        long long *l_825 = &l_610;
                        unsigned **l_826 = (void*)0;
                        unsigned **l_827 = &g_545;
                        (*l_783) &= ((safe_add_func_uint8_t_u_u(((*l_817) = 0xF0L), (safe_lshift_func_uint8_t_u_u((+((safe_mod_func_uint8_t_u_u((--g_41), 0xABL)) , p_54)), 2)))) <= ((((*l_825) = l_824) , &g_768[0][0][3]) == ((*l_827) = l_552)));
                        (*l_555) = l_783;
                    }
                    else
                    {
                        int *l_828 = (void*)0;
                        int *l_829 = &g_272;
                        int *l_830 = &g_499;
                        int *l_831 = &l_600[1][5];
                        int *l_832 = &l_604;
                        --l_833;
                        return g_792[0];
                    }
                    return g_371;
                }
            }
        }
    }
    (*g_100) = (p_54 == ((*p_52) == ((((((**l_635) = ((safe_sub_func_uint8_t_u_u((*g_370), 0x50L)) >= (((void*)0 == l_838) , ((safe_rshift_func_int8_t_s_u((((!(((g_41 = ((((*l_842) |= p_53) , ((*l_842)--)) & ((void*)0 != l_845))) | (-9L)) < l_600[1][0])) , 0xEBL) , l_600[1][0]), p_54)) < g_499)))) | l_574) | 18446744073709551615UL) < l_574) || l_600[1][0])));
    return l_600[0][6];
}







static int func_59(unsigned long long * p_60, unsigned long long * const p_61)
{
    unsigned long long l_71 = 0x34D1CD05094191B8LL;
    int l_95 = (-1L);
    int l_99 = 0L;
    int l_143 = (-1L);
    int l_144 = 0x3571D3B0L;
    unsigned long long l_160 = 18446744073709551615UL;
    int l_164 = 0x8C720A73L;
    int l_165 = 0x4E01C407L;
    int l_227 = 0x8BBF57C4L;
    int l_233 = 1L;
    unsigned *l_278 = &g_66[0];
    unsigned long long l_311[9][6] = {{1UL, 18446744073709551615UL, 0UL, 4UL, 0UL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 4UL, 0UL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 4UL, 0UL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 4UL, 0UL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 4UL, 0UL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 4UL, 0UL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 4UL, 0UL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 4UL, 0UL, 18446744073709551615UL}, {1UL, 18446744073709551615UL, 0UL, 4UL, 0UL, 18446744073709551615UL}};
    unsigned char *l_319 = (void*)0;
    int *l_353 = (void*)0;
    char *l_355 = &g_126[0];
    char **l_354 = &l_355;
    unsigned long long **l_362 = (void*)0;
    unsigned long long *l_364[7][2][8] = {{{(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}, {(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}}, {{(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}, {(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}}, {{(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}, {(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}}, {{(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}, {(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}}, {{(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}, {(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}}, {{(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}, {(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}}, {{(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}, {(void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44, (void*)0, &g_44}}};
    unsigned long long **l_363 = &l_364[5][0][0];
    unsigned l_387 = 0xB8C32160L;
    char l_449[10] = {(-1L), (-1L), 0x67L, 0x67L, (-1L), (-1L), (-1L), 0x67L, 0x67L, (-1L)};
    const long long l_453[6] = {1L, 0x8808EBED17D93663LL, 1L, 0x8808EBED17D93663LL, 1L, 0x8808EBED17D93663LL};
    unsigned long long l_477 = 0UL;
    char l_479 = (-4L);
    unsigned char l_539 = 249UL;
    int i, j, k;
    for (g_41 = 0; (g_41 != 19); g_41 = safe_add_func_uint32_t_u_u(g_41, 7))
    {
        short l_65 = 0x9F5AL;
        unsigned long long *l_89 = &g_44;
        unsigned long long *l_96[4][10][6] = {{{&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}}, {{&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}}, {{&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}}, {{&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}, {&g_44, &g_44, &g_44, &l_71, &l_71, &l_71}}};
        unsigned char *l_97[7] = {&g_41, &g_41, (void*)0, &g_41, &g_41, (void*)0, &g_41};
        int l_141 = 0xC08A347BL;
        int l_142 = 0x882AC582L;
        int l_145[4] = {2L, (-7L), 2L, (-7L)};
        unsigned char l_150[5][9][5] = {{{0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}}, {{0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}}, {{0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}}, {{0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}}, {{0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}, {0UL, 255UL, 0xEBL, 7UL, 252UL}}};
        int *l_163[2][5] = {{&l_145[1], &l_141, &l_145[1], &l_141, &l_145[1]}, {&l_145[1], &l_141, &l_145[1], &l_141, &l_145[1]}};
        unsigned short l_166 = 0x17EAL;
        int i, j, k;
        if (l_65)
        {
            unsigned long long l_79 = 1UL;
            unsigned char l_110[7] = {0xB0L, 0x44L, 0xB0L, 0x44L, 0xB0L, 0x44L, 0xB0L};
            int * const l_112 = &l_99;
            int l_123 = 0x603581D6L;
            int l_146 = (-6L);
            unsigned char l_147 = 1UL;
            int i;
            for (l_65 = 1; (l_65 >= 0); l_65 -= 1)
            {
                const unsigned long long **l_69 = (void*)0;
                const unsigned long long *l_70 = (void*)0;
                unsigned char *l_72[5][8][6] = {{{&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}}, {{&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}}, {{&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}}, {{&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}}, {{&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73, &g_73}}};
                int *l_77[5];
                unsigned l_78[2];
                short *l_80 = &g_81;
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_77[i] = (void*)0;
                for (i = 0; i < 2; i++)
                    l_78[i] = 18446744073709551615UL;
                if ((g_66[l_65] , (g_66[l_65] , (((safe_add_func_uint64_t_u_u(((g_73 = ((&g_44 == (l_70 = &g_44)) <= (g_66[l_65] != l_71))) || g_66[l_65]), ((((*l_80) ^= (((g_74 != (((l_78[0] |= g_13) < l_79) , (void*)0)) && g_44) <= g_13)) && l_71) & 0x13L))) & l_71) , l_79))))
                {
                    long long *l_82 = &g_83;
                    int l_94 = 0x0CFC2012L;
                    unsigned char **l_98 = (void*)0;
                    if (((0xD7F9B64AL <= (((*l_82) = (-3L)) >= (+(!(l_99 = (((((((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s(((-1L) != (l_95 = ((l_97[6] = ((safe_lshift_func_int8_t_s_u(((((-1L) || ((l_89 = p_60) == &l_71)) , ((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u((g_66[1] > (((l_94 > ((g_73 && l_95) & 0UL)) , (*g_74)) != l_70)), g_73)), l_79)) , p_60)) != l_96[1][9][4]), 6)) , l_97[6])) != l_72[0][2][2]))))), 4)) && (**g_74)) > 0x2AL) , (-1L)) >= (*p_60)) , g_41) & 18446744073709551606UL)))))) && (-9L)))
                    {
                        int **l_105 = &l_77[1];
                        (*l_105) = g_100;
                        (*g_100) = l_79;
                        return l_79;
                    }
                    else
                    {
                        (*g_100) = (l_79 == 3UL);
                    }
                    for (l_99 = 1; (l_99 >= 0); l_99 -= 1)
                    {
                        unsigned *l_106 = &g_107;
                        (*g_100) = (((*l_106) |= l_79) | (((((void*)0 != l_72[0][2][2]) <= ((safe_add_func_uint8_t_u_u(((5UL ^ 8UL) ^ ((1UL >= l_94) == l_99)), (g_76 , 0x22L))) >= g_66[1])) && g_101[0]) > (*p_60)));
                        return g_13;
                    }
                    return l_110[0];
                }
                else
                {
                    int **l_111 = &g_103;
                    unsigned *l_124 = &g_107;
                    char *l_125[8][10][1] = {{{&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}}, {{&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}}, {{&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}}, {{&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}}, {{&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}}, {{&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}}, {{&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}}, {{&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}, {&g_126[1]}}};
                    int i, j, k;
                    (*l_111) = &l_99;
                    for (g_73 = 0; (g_73 <= 1); g_73 += 1)
                    {
                        (*g_113) = l_112;
                    }
                    (*g_103) = l_65;
                    (*g_100) = ((*g_103) = (safe_sub_func_int32_t_s_s((**l_111), (((((*g_75) == ((safe_rshift_func_int8_t_s_s(g_66[0], (g_126[0] = (safe_unary_minus_func_int64_t_s((safe_mod_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(((*l_124) = ((0x87L ^ (l_65 < l_99)) == (((l_123 = g_44) < (g_107 == (g_101[6] ^ 1UL))) , 0xDDB6L))), g_44)), 65535UL))))))) | (*p_60))) <= (**l_111)) ^ l_71) || (**l_111)))));
                }
                return g_13;
            }
            for (l_65 = 0; (l_65 <= 2); ++l_65)
            {
                long long l_136 = 6L;
                int *l_138 = &l_123;
                int *l_139 = &l_123;
                int *l_140[6][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
                int i, j;
                for (l_123 = 0; (l_123 >= (-21)); l_123 = safe_sub_func_uint8_t_u_u(l_123, 2))
                {
                    unsigned char l_133 = 0xFFL;
                    if ((((safe_add_func_int16_t_s_s(0x7D21L, l_133)) , (safe_lshift_func_uint8_t_u_s(l_136, g_81))) | (safe_unary_minus_func_uint64_t_u((*p_61)))))
                    {
                        return g_73;
                    }
                    else
                    {
                        (*l_112) &= 0x0A5B8026L;
                    }
                    return l_136;
                }
                ++l_147;
            }
            l_150[0][8][4]--;
            for (l_95 = 28; (l_95 >= 20); --l_95)
            {
                if ((*l_112))
                    break;
            }
        }
        else
        {
            int **l_155 = &g_103;
            (*l_155) = &l_141;
        }
        (*g_100) = ((*g_100) ^ (safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(l_143, l_160)), ((safe_mod_func_uint64_t_u_u((l_150[3][7][0] ^ (l_142 = g_41)), (*p_61))) , l_71))));
        l_166++;
        for (g_44 = 1; (g_44 <= 4); g_44 += 1)
        {
            int l_172 = (-6L);
            const unsigned char *l_176[6] = {&g_41, (void*)0, &g_41, (void*)0, &g_41, (void*)0};
            int i;
            (*g_171) = &g_101[(g_44 + 3)];
            g_101[g_44] = l_71;
            for (l_143 = 4; (l_143 >= 0); l_143 -= 1)
            {
                int *l_177 = &l_141;
                int **l_178 = &l_163[0][2];
                int i, j, k;
                if (l_150[l_143][(g_44 + 1)][l_143])
                {
                    int i, j, k;
                    (*g_100) = l_150[g_44][(l_143 + 2)][l_143];
                    l_172 = ((*g_103) |= 1L);
                    (*g_103) = (safe_mod_func_uint8_t_u_u((0UL >= 1UL), l_165));
                }
                else
                {
                    int **l_175 = &l_163[1][4];
                    (*l_175) = (void*)0;
                }
                l_95 |= (*g_100);
                (*g_100) = (l_99 , ((l_150[l_143][(g_44 + 1)][l_143] | (l_176[3] != &l_150[l_143][(g_44 + 1)][l_143])) , (l_143 || (((l_150[l_143][(g_44 + 1)][l_143] , (l_177 == (g_13 , ((*l_178) = &l_164)))) , g_66[0]) == g_126[0]))));
            }
        }
    }
    l_144 &= ((*g_100) = l_165);
    for (l_144 = 0; (l_144 < (-21)); l_144 = safe_sub_func_uint32_t_u_u(l_144, 2))
    {
        int *l_181 = &l_95;
        int **l_184 = &g_103;
        int *l_185[5][4] = {{&g_101[5], &l_143, &g_101[7], &g_101[1]}, {&g_101[5], &l_143, &g_101[7], &g_101[1]}, {&g_101[5], &l_143, &g_101[7], &g_101[1]}, {&g_101[5], &l_143, &g_101[7], &g_101[1]}, {&g_101[5], &l_143, &g_101[7], &g_101[1]}};
        unsigned *l_186 = &g_107;
        int i, j;
        (*g_100) = ((l_181 != (void*)0) < (((l_99 && (safe_rshift_func_uint16_t_u_u(((l_185[1][2] = l_181) != (((*l_186)--) , &l_143)), g_44))) , (safe_sub_func_int64_t_s_s((((((l_99 != l_144) || l_144) <= g_126[1]) & 65535UL) , g_107), g_101[7]))) || (*g_75)));
        (*g_100) = (safe_add_func_uint8_t_u_u((safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(l_165, l_164)), 0L)), ((*l_181) , (safe_add_func_int64_t_s_s((*l_181), (*g_75))))));
    }
    for (l_99 = (-9); (l_99 < (-2)); l_99 = safe_add_func_int32_t_s_s(l_99, 9))
    {
        unsigned l_201 = 3UL;
        int l_221 = 0xAFDCDC94L;
        int l_222 = 1L;
        int l_224 = (-1L);
        int l_225 = 4L;
        int l_226[10] = {4L, 0L, 0x7469F826L, 0x7469F826L, 0L, 4L, 0L, 0x7469F826L, 0x7469F826L, 0L};
        unsigned l_228[2];
        const unsigned short l_414 = 0xE64FL;
        int *l_456 = &l_227;
        int i;
        for (i = 0; i < 2; i++)
            l_228[i] = 0x926347CDL;
        if (l_201)
        {
            const short l_202 = 0xD408L;
            int l_217[4][10][4] = {{{0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}}, {{0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}}, {{0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}}, {{0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}, {0x039A9A80L, 8L, (-1L), 0x564F0666L}}};
            int l_265 = 0L;
            int *l_324 = (void*)0;
            int *l_325 = &l_165;
            int *l_326 = &l_225;
            int *l_327 = &l_265;
            int *l_328[2][7] = {{&g_101[1], &l_226[9], &l_217[0][9][1], &l_226[9], &g_101[1], &l_165, &g_101[1]}, {&g_101[1], &l_226[9], &l_217[0][9][1], &l_226[9], &g_101[1], &l_165, &g_101[1]}};
            int i, j, k;
            if ((((l_165 = g_76) < (g_126[0] >= ((l_202 && ((g_41 == (safe_rshift_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((*p_60), (*p_60))), 4))) ^ (l_201 < 0xE1L))) >= g_83))) <= (*g_100)))
            {
                unsigned char l_212 = 0x72L;
                int l_219[5];
                long long l_223 = 1L;
                int i;
                for (i = 0; i < 5; i++)
                    l_219[i] = 0L;
                if ((safe_mod_func_uint32_t_u_u(l_201, 0xDAD95808L)))
                {
                    int **l_209 = &g_103;
                    char l_210 = 1L;
                    int *l_211 = (void*)0;
                    (*l_209) = (void*)0;
                    l_212--;
                    for (g_44 = (-24); (g_44 <= 51); g_44 = safe_add_func_uint32_t_u_u(g_44, 9))
                    {
                        l_217[3][9][0] = l_202;
                        l_95 |= ((~g_76) != (0x522DL == g_44));
                    }
                    (*g_100) |= l_217[1][2][3];
                }
                else
                {
                    int *l_218 = &l_217[2][0][1];
                    int *l_220[1];
                    long long l_234 = 0x263616B983BC1D7ALL;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_220[i] = &l_219[0];
                    (*g_100) ^= (0UL && l_212);
                    ++l_228[1];
                    l_219[0] = (l_225 &= ((*p_61) , ((((safe_add_func_uint32_t_u_u(l_233, l_234)) || ((((((void*)0 == &g_83) | (0L >= (g_44 != ((safe_add_func_uint8_t_u_u(l_228[0], (g_101[4] < g_41))) , l_219[0])))) , l_222) >= (*g_100)) < l_71)) <= l_217[2][2][0]) && l_226[4])));
                }
            }
            else
            {
                unsigned l_252 = 0UL;
                int *l_259 = (void*)0;
                unsigned *l_262[1];
                short *l_266 = &g_81;
                short *l_267 = (void*)0;
                short *l_268 = &g_269[0][5][5];
                char *l_270 = &g_126[0];
                int l_273 = 0x0D8ED367L;
                int *l_307[4];
                int i;
                for (i = 0; i < 1; i++)
                    l_262[i] = &g_66[0];
                for (i = 0; i < 4; i++)
                    l_307[i] = &l_224;
                for (g_83 = 13; (g_83 == 13); g_83 = safe_add_func_uint32_t_u_u(g_83, 5))
                {
                    unsigned l_247[9][1][6] = {{{0xE44B4A44L, 18446744073709551615UL, 0x4914E082L, 0x7411C626L, 0x4914E082L, 18446744073709551615UL}}, {{0xE44B4A44L, 18446744073709551615UL, 0x4914E082L, 0x7411C626L, 0x4914E082L, 18446744073709551615UL}}, {{0xE44B4A44L, 18446744073709551615UL, 0x4914E082L, 0x7411C626L, 0x4914E082L, 18446744073709551615UL}}, {{0xE44B4A44L, 18446744073709551615UL, 0x4914E082L, 0x7411C626L, 0x4914E082L, 18446744073709551615UL}}, {{0xE44B4A44L, 18446744073709551615UL, 0x4914E082L, 0x7411C626L, 0x4914E082L, 18446744073709551615UL}}, {{0xE44B4A44L, 18446744073709551615UL, 0x4914E082L, 0x7411C626L, 0x4914E082L, 18446744073709551615UL}}, {{0xE44B4A44L, 18446744073709551615UL, 0x4914E082L, 0x7411C626L, 0x4914E082L, 18446744073709551615UL}}, {{0xE44B4A44L, 18446744073709551615UL, 0x4914E082L, 0x7411C626L, 0x4914E082L, 18446744073709551615UL}}, {{0xE44B4A44L, 18446744073709551615UL, 0x4914E082L, 0x7411C626L, 0x4914E082L, 18446744073709551615UL}}};
                    int *l_250[10] = {(void*)0, &l_221, &l_99, &l_99, &l_221, (void*)0, &l_221, &l_99, &l_99, &l_221};
                    int i, j, k;
                    (*g_100) = 0xABD99D5EL;
                    for (l_233 = (-7); (l_233 <= (-26)); --l_233)
                    {
                        int *l_241 = &l_222;
                        int *l_242 = &g_101[5];
                        int *l_243 = (void*)0;
                        int *l_244 = &l_144;
                        int *l_245 = &l_227;
                        int *l_246[3];
                        int **l_251 = &l_246[2];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_246[i] = &l_217[3][9][0];
                        l_247[3][0][1]--;
                        (*l_241) |= (l_250[8] != ((*l_251) = l_250[8]));
                    }
                }
                if (l_252)
                    break;
                l_273 |= ((*g_100) = (l_221 == (safe_rshift_func_int8_t_s_u(((*l_270) &= (safe_add_func_int64_t_s_s((safe_mod_func_uint16_t_u_u(((l_95 = l_201) , 0xADD0L), l_165)), ((safe_add_func_uint16_t_u_u(l_217[3][9][0], (((l_99 , l_227) ^ (((*l_268) = (((l_265 = (g_66[0]--)) , 0x9EL) < (((*l_266) = g_81) , l_221))) != 0xA48CL)) && l_217[3][9][0]))) == g_41)))), l_228[1]))));
                for (l_144 = (-5); (l_144 != 29); l_144 = safe_add_func_uint64_t_u_u(l_144, 2))
                {
                    int **l_305 = (void*)0;
                    int l_308 = (-1L);
                    int l_309 = 0x1057A475L;
                    int l_310[6][5] = {{(-6L), 1L, 0x477D5D28L, 0x974BC649L, 0x477D5D28L}, {(-6L), 1L, 0x477D5D28L, 0x974BC649L, 0x477D5D28L}, {(-6L), 1L, 0x477D5D28L, 0x974BC649L, 0x477D5D28L}, {(-6L), 1L, 0x477D5D28L, 0x974BC649L, 0x477D5D28L}, {(-6L), 1L, 0x477D5D28L, 0x974BC649L, 0x477D5D28L}, {(-6L), 1L, 0x477D5D28L, 0x974BC649L, 0x477D5D28L}};
                    int i, j;
                    if ((l_224 >= (*g_100)))
                    {
                        unsigned char *l_282[3];
                        unsigned char **l_281 = &l_282[2];
                        const int l_290 = (-1L);
                        int *l_303 = &l_226[9];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_282[i] = &g_41;
                        (*g_100) = (safe_lshift_func_uint16_t_u_u((((l_278 != ((safe_lshift_func_uint16_t_u_s(((void*)0 != l_281), g_44)) , &l_201)) | (*p_60)) < (((void*)0 != g_283) && (safe_mod_func_int64_t_s_s(l_217[0][3][1], 18446744073709551615UL)))), 11));
                        l_222 ^= (((safe_add_func_int8_t_s_s((l_143 = 0x57L), (safe_mod_func_uint8_t_u_u(l_290, ((**l_281) = ((safe_rshift_func_int8_t_s_u((((((((*l_270) = 0xD0L) == (g_44 >= ((safe_add_func_int32_t_s_s(((*l_303) = (((*g_100) = (+l_217[0][7][2])) < ((g_13 || (l_221 , ((safe_lshift_func_int16_t_s_s(((safe_add_func_uint8_t_u_u(l_226[9], (safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_u((0xF4L == g_269[0][5][5]), 12)), l_290)))) == l_252), g_83)) , 0x71EF585538BD618FLL))) & (*p_60)))), 0xD4ED68F6L)) && (*g_75)))) != (-2L)) ^ g_269[1][6][0]) && 0x6F0254D38C07B383LL) , (*l_303)), g_13)) , 255UL)))))) != (-1L)) && 8L);
                    }
                    else
                    {
                        return l_217[3][9][0];
                    }
                    l_307[2] = (g_81 , &l_224);
                    l_311[8][0]++;
                    for (l_221 = 0; (l_221 <= (-25)); l_221 = safe_sub_func_int64_t_s_s(l_221, 4))
                    {
                        unsigned l_316 = 18446744073709551607UL;
                        unsigned char *l_321 = &g_41;
                        unsigned char **l_320 = &l_321;
                        int **l_322 = (void*)0;
                        int **l_323 = &l_307[3];
                        ++l_316;
                        (*l_323) = (((l_164 >= g_269[1][6][2]) , (l_319 != ((*l_320) = &g_73))) , (void*)0);
                    }
                }
            }
            --g_329;
        }
        else
        {
            unsigned char l_347[3][4][3] = {{{0x1CL, 0x1CL, 0x09L}, {0x1CL, 0x1CL, 0x09L}, {0x1CL, 0x1CL, 0x09L}, {0x1CL, 0x1CL, 0x09L}}, {{0x1CL, 0x1CL, 0x09L}, {0x1CL, 0x1CL, 0x09L}, {0x1CL, 0x1CL, 0x09L}, {0x1CL, 0x1CL, 0x09L}}, {{0x1CL, 0x1CL, 0x09L}, {0x1CL, 0x1CL, 0x09L}, {0x1CL, 0x1CL, 0x09L}, {0x1CL, 0x1CL, 0x09L}}};
            int *l_350 = &l_143;
            int i, j, k;
            for (l_71 = 0; (l_71 <= 40); ++l_71)
            {
                (*g_100) = l_311[8][0];
                return l_95;
            }
            if ((l_225 < l_226[9]))
            {
                long long l_344 = 0xBC05A89F3CFECB3FLL;
                int l_345[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_345[i] = 6L;
                for (l_224 = 7; (l_224 == (-9)); l_224--)
                {
                    char l_346 = 0xE8L;
                    int **l_351 = (void*)0;
                    int **l_352[6][5][8] = {{{(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}}, {{(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}}, {{(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}}, {{(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}}, {{(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}}, {{(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}, {(void*)0, &g_103, &l_350, &g_103, &g_103, (void*)0, &g_103, &l_350}}};
                    char ***l_356 = (void*)0;
                    char ***l_357 = &l_354;
                    int i, j, k;
                    for (l_144 = 0; (l_144 < 17); l_144 = safe_add_func_int64_t_s_s(l_144, 1))
                    {
                        int *l_338 = (void*)0;
                        int *l_339 = &l_221;
                        int *l_340 = &l_222;
                        int *l_341 = &l_233;
                        int *l_342 = &l_95;
                        int *l_343[6][4] = {{&l_233, &l_221, &l_233, &l_221}, {&l_233, &l_221, &l_233, &l_221}, {&l_233, &l_221, &l_233, &l_221}, {&l_233, &l_221, &l_233, &l_221}, {&l_233, &l_221, &l_233, &l_221}, {&l_233, &l_221, &l_233, &l_221}};
                        int i, j;
                        l_347[1][2][1]--;
                    }
                    l_353 = l_350;
                    (*l_357) = l_354;
                }
            }
            else
            {
                int **l_358 = (void*)0;
                int **l_359 = &l_353;
                (*g_360) = ((*l_359) = &l_225);
            }
            (*l_350) &= l_201;
            (*g_100) = l_225;
        }
        (*g_100) = ((l_363 = (l_362 = g_361)) != &p_61);
    }
    return g_107;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_44, "g_44", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_66[i], "g_66[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_107, "g_107", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_126[i], "g_126[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_269[i][j][k], "g_269[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_478[i][j], "g_478[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_499, "g_499", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_510[i], "g_510[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_674, "g_674", print_hash_value);
    transparent_crc(g_679, "g_679", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_768[i][j][k], "g_768[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_792[i], "g_792[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_808[i][j], "g_808[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1043, "g_1043", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1048[i], "g_1048[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1208, "g_1208", print_hash_value);
    transparent_crc(g_1229, "g_1229", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1282[i][j][k], "g_1282[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1295[i], "g_1295[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1297, "g_1297", print_hash_value);
    transparent_crc(g_1306, "g_1306", print_hash_value);
    transparent_crc(g_1342, "g_1342", print_hash_value);
    transparent_crc(g_1387, "g_1387", print_hash_value);
    transparent_crc(g_1442, "g_1442", print_hash_value);
    transparent_crc(g_1663, "g_1663", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1667[i][j], "g_1667[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1947, "g_1947", print_hash_value);
    transparent_crc(g_2016, "g_2016", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
