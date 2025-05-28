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



static volatile int g_3 = 4L;
static volatile int g_4[7] = {1L,1L,1L,1L,1L,1L,1L};
static int g_5 = 0L;
static short g_19 = (-4L);
static int g_42 = 6L;
static unsigned g_43 = 0x78317D23L;
static int g_46[4][7][1] = {{{0x9A46BB21L},{0L},{0x5584E2BBL},{0x5584E2BBL},{0L},{0x9A46BB21L},{(-1L)}},{{1L},{0L},{1L},{0L},{1L},{(-1L)},{0x9A46BB21L}},{{0L},{0x5584E2BBL},{0x5584E2BBL},{0L},{0x9A46BB21L},{(-1L)},{1L}},{{0L},{1L},{0L},{1L},{(-1L)},{0x9A46BB21L},{0L}}};
static unsigned g_90[5][2] = {{0xEEB1CB69L,0x303358B4L},{0xEEB1CB69L,0xEEB1CB69L},{0x303358B4L,0xEEB1CB69L},{0xEEB1CB69L,0x303358B4L},{0xEEB1CB69L,0xEEB1CB69L}};
static unsigned char g_92[9][7][1] = {{{0xD8L},{0x7BL},{0x1EL},{0x90L},{0x1EL},{0x7BL},{0x5CL}},{{0x96L},{249UL},{1UL},{0UL},{1UL},{249UL},{0x96L}},{{0x5CL},{0x7BL},{0x1EL},{0x90L},{0x1EL},{0x7BL},{0x5CL}},{{0x96L},{249UL},{1UL},{0UL},{1UL},{249UL},{0x96L}},{{0x5CL},{0x7BL},{0x1EL},{0x90L},{0x1EL},{0x7BL},{0x5CL}},{{0x96L},{249UL},{1UL},{0UL},{1UL},{249UL},{0x96L}},{{0x5CL},{0x7BL},{0x1EL},{0x90L},{0x1EL},{0x7BL},{0x5CL}},{{0x96L},{249UL},{1UL},{0UL},{1UL},{249UL},{0x96L}},{{0x5CL},{0x7BL},{0x1EL},{0x90L},{0x1EL},{0x7BL},{0x5CL}}};
static short g_94 = 6L;
static unsigned g_105 = 9UL;
static int *g_106 = &g_46[2][1][0];
static unsigned g_122 = 0x6BD3C73EL;
static unsigned short g_152[9][9] = {{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL},{65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL,65527UL},{5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL,5UL}};
static unsigned char *g_165 = (void*)0;
static unsigned char **g_164 = &g_165;
static volatile char **g_197 = (void*)0;
static volatile char g_201 = 9L;
static int g_235[7] = {9L,9L,9L,9L,9L,9L,9L};
static int *g_240 = &g_46[3][3][0];
static char g_269 = 0x9EL;
static volatile short g_343 = 0x1D3EL;
static volatile short *g_342 = &g_343;
static volatile short **g_341 = &g_342;
static int g_366 = 0L;
static unsigned char g_382 = 0UL;
static const char * const **g_455 = (void*)0;
static unsigned g_496 = 0x0155C866L;
static unsigned char g_538[10][6] = {{7UL,6UL,4UL,0x86L,0UL,253UL},{1UL,7UL,4UL,0UL,4UL,7UL},{246UL,0UL,253UL,0x6EL,0x20L,0x7FL},{0x6EL,0x20L,0x7FL,4UL,255UL,255UL},{1UL,0x20L,0x25L,0x25L,0x20L,1UL},{0x20L,0UL,7UL,6UL,4UL,0x86L},{0x25L,7UL,255UL,1UL,0UL,7UL},{255UL,1UL,0x6EL,1UL,255UL,0UL},{255UL,0UL,0UL,255UL,7UL,0x20L},{4UL,6UL,7UL,0UL,0x20L,0x20L}};
static const unsigned g_594 = 18446744073709551615UL;
static const int g_607 = 0x9F2AA58AL;
static int *g_624[6] = {&g_235[3],&g_235[3],&g_235[3],&g_235[3],&g_235[3],&g_235[3]};
static int **g_623 = &g_624[0];
static char g_655 = (-10L);
static int g_705 = 0L;
static short g_720 = 0x0A90L;
static unsigned short *g_748 = &g_152[7][4];
static unsigned short **g_747 = &g_748;
static char *g_778 = (void*)0;
static char **g_777 = &g_778;
static char ***g_776 = &g_777;
static unsigned g_812[6] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
static unsigned *g_855 = &g_90[3][0];
static unsigned **g_854 = &g_855;
static const unsigned *g_863 = &g_594;
static const unsigned **g_862 = &g_863;
static const int *g_870 = &g_366;
static char ***g_974 = (void*)0;
static unsigned g_1263[2][9][4] = {{{0UL,0x80E8F532L,0x96B7ED6FL,0x13589B4BL},{0UL,18446744073709551607UL,18446744073709551607UL,0UL},{7UL,0x13589B4BL,18446744073709551608UL,18446744073709551607UL},{0x13589B4BL,0x80E8F532L,1UL,18446744073709551615UL},{0xE8ED4237L,7UL,18446744073709551607UL,18446744073709551615UL},{18446744073709551615UL,0x80E8F532L,18446744073709551615UL,18446744073709551607UL},{0UL,0x13589B4BL,9UL,0UL},{0xE8ED4237L,18446744073709551607UL,18446744073709551608UL,0x13589B4BL},{18446744073709551607UL,0x80E8F532L,18446744073709551608UL,18446744073709551608UL}},{{0xE8ED4237L,0xE8ED4237L,9UL,18446744073709551615UL},{0UL,0x5569611BL,18446744073709551615UL,0x13589B4BL},{18446744073709551615UL,0x13589B4BL,18446744073709551607UL,18446744073709551615UL},{0xE8ED4237L,0x13589B4BL,1UL,0x13589B4BL},{0x13589B4BL,0x5569611BL,18446744073709551608UL,18446744073709551615UL},{7UL,0xE8ED4237L,18446744073709551607UL,18446744073709551608UL},{0UL,0x80E8F532L,0x96B7ED6FL,0x13589B4BL},{0x80E8F532L,18446744073709551608UL,18446744073709551608UL,0x80E8F532L},{18446744073709551615UL,18446744073709551615UL,7UL,18446744073709551608UL}}};
static const unsigned short g_1292 = 0xAB96L;
static int g_1300 = 0x80667E55L;
static char g_1314 = 0x4AL;
static short *g_1406 = &g_720;
static short **g_1405[5] = {&g_1406,&g_1406,&g_1406,&g_1406,&g_1406};
static unsigned g_1462 = 4294967294UL;
static unsigned g_1659 = 18446744073709551615UL;
static unsigned short g_1661[2] = {7UL,7UL};
static unsigned short g_1662 = 0xD4AEL;
static unsigned char g_1717 = 0xCEL;
static unsigned char * const g_1716 = &g_1717;
static unsigned char * const *g_1715 = &g_1716;
static unsigned char * const **g_1714[7][9][1] = {{{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715}},{{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715}},{{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715}},{{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715}},{{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715}},{{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715}},{{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715},{&g_1715}}};
static unsigned char * const ***g_1713[7][5][2] = {{{&g_1714[6][0][0],&g_1714[3][4][0]},{(void*)0,&g_1714[6][0][0]},{&g_1714[0][5][0],&g_1714[6][0][0]},{&g_1714[6][0][0],&g_1714[0][5][0]},{(void*)0,&g_1714[6][0][0]}},{{(void*)0,&g_1714[0][5][0]},{&g_1714[6][0][0],&g_1714[6][0][0]},{&g_1714[0][5][0],&g_1714[6][0][0]},{(void*)0,&g_1714[6][0][0]},{&g_1714[6][0][0],&g_1714[2][3][0]}},{{&g_1714[2][3][0],&g_1714[6][0][0]},{&g_1714[6][0][0],&g_1714[6][0][0]},{&g_1714[2][3][0],&g_1714[2][3][0]},{&g_1714[6][0][0],&g_1714[6][0][0]},{&g_1714[0][5][0],&g_1714[3][4][0]}},{{(void*)0,&g_1714[3][2][0]},{&g_1714[6][0][0],(void*)0},{&g_1714[6][0][0],(void*)0},{&g_1714[6][0][0],(void*)0},{&g_1714[6][0][0],&g_1714[3][2][0]}},{{(void*)0,&g_1714[3][4][0]},{&g_1714[0][5][0],&g_1714[6][0][0]},{&g_1714[6][0][0],&g_1714[2][3][0]},{&g_1714[2][3][0],&g_1714[6][0][0]},{&g_1714[6][0][0],&g_1714[6][0][0]}},{{&g_1714[2][3][0],&g_1714[2][3][0]},{&g_1714[6][0][0],&g_1714[6][0][0]},{&g_1714[0][5][0],&g_1714[3][4][0]},{(void*)0,&g_1714[3][2][0]},{&g_1714[6][0][0],(void*)0}},{{&g_1714[6][0][0],(void*)0},{&g_1714[6][0][0],(void*)0},{&g_1714[6][0][0],&g_1714[3][2][0]},{(void*)0,&g_1714[3][4][0]},{&g_1714[0][5][0],&g_1714[6][0][0]}}};
static int g_1756 = (-1L);
static char ****g_1784 = &g_974;
static char *****g_1783 = &g_1784;
static unsigned short g_1846[6][9][4] = {{{0xF1E1L,0x94BDL,0x0071L,9UL},{0x1A2CL,0xBBC2L,1UL,0x82BFL},{0UL,0UL,7UL,0x82BFL},{0xDE7CL,0xBBC2L,0x3697L,9UL},{0x1615L,0x94BDL,65528UL,0xBBC2L},{0xF043L,0x382BL,0xF1E1L,0UL},{0x0071L,0x96A6L,0x3697L,1UL},{0xC463L,0x1A2CL,65526UL,0x1A2CL},{0UL,0x3697L,0xDE7CL,0x94BDL}},{{0x3697L,0x96A6L,0x0071L,7UL},{0xBBC2L,0xF043L,0x2837L,0x1A2CL},{0x1A2CL,0x9AF6L,0xF1E1L,0x1615L},{0UL,0x1A2CL,1UL,9UL},{0xF043L,0xC463L,0x2837L,0x1FA6L},{0x94BDL,0x3697L,0UL,0x1615L},{0xF1E1L,0x82BFL,0x3697L,0x3697L},{4UL,4UL,65527UL,0xF043L},{0xBBC2L,7UL,0UL,0x82BFL}},{{1UL,0x96A6L,0x382BL,0UL},{0xF043L,0x96A6L,65535UL,0x82BFL},{0x96A6L,7UL,0xF1E1L,0xF043L},{0x3697L,4UL,0UL,0x3697L},{0x1A2CL,0x82BFL,65528UL,0x1615L},{0x96A6L,0x3697L,1UL,0x1FA6L},{0x382BL,0xC463L,0x382BL,9UL},{0x94BDL,0x1A2CL,0xF616L,0x1615L},{0xBBC2L,0x9AF6L,0x3697L,0x1A2CL}},{{0UL,4UL,0x3697L,0x382BL},{0xBBC2L,0UL,0xF616L,0x82BFL},{0x94BDL,0UL,0x382BL,0x96A6L},{0x382BL,0x96A6L,1UL,0x9AF6L},{0x96A6L,0UL,65528UL,0xF043L},{0x1A2CL,0UL,0UL,0x1A2CL},{0x3697L,0x82BFL,0xF1E1L,0x0071L},{0x96A6L,0x1A2CL,0x1615L,0x3697L},{1UL,0x8640L,65535UL,0x3697L}},{{0xC42CL,0x382BL,65530UL,0xF616L},{7UL,0xF1E1L,0xF043L,0x382BL},{0x9AF6L,0x27F5L,0x2837L,1UL},{65526UL,0xDE7CL,65530UL,65528UL},{0x0071L,0UL,0x94BDL,0UL},{1UL,65530UL,0xC42CL,0xF1E1L},{65530UL,0xDE7CL,65526UL,65535UL},{0x382BL,0x9AF6L,0x82BFL,0x382BL},{0x382BL,65528UL,65526UL,0UL}},{{65530UL,0x382BL,0xC42CL,65527UL},{1UL,9UL,0x94BDL,0x3697L},{0x0071L,0x2837L,65530UL,0UL},{65526UL,0xF1E1L,0x2837L,0x2837L},{0x9AF6L,0x9AF6L,0xF043L,1UL},{7UL,1UL,65530UL,0xF1E1L},{0xC42CL,0UL,65535UL,65530UL},{1UL,0UL,0x1615L,0xF1E1L},{0UL,1UL,65526UL,1UL}}};
static int g_1934[4][4][7] = {{{0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L},{0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L},{0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L},{0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L}},{{0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L},{0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L},{0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L},{0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L}},{{0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L},{0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L},{0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L},{0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L}},{{0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L},{0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L},{0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L,0xC7F38D60L},{0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L,0x4ED20875L}}};
static int * const g_1933 = &g_1934[0][0][3];
static int * const *g_1932 = &g_1933;
static unsigned **g_1999 = &g_855;



static int func_1(void);
static int * func_6(unsigned p_7, short p_8, int * p_9);
static unsigned char func_21(int * p_22, unsigned p_23);
static const int func_27(unsigned short p_28, int * p_29, unsigned p_30);
static const unsigned char func_35(int * p_36, int p_37, short * const p_38);
static int * func_39(const short * p_40);
static int * func_48(int * p_49, short * p_50, int * p_51, short * p_52, int p_53);
static short * func_54(int * p_55, int * p_56, short * p_57);
static int * func_59(unsigned p_60, int p_61, short * p_62, const unsigned p_63, unsigned p_64);
static int func_65(unsigned char p_66, unsigned p_67, unsigned char p_68, const short p_69, int p_70);
static int func_1(void)
{
    short l_2[7] = {0xE469L,0L,0xE469L,0L,0L,0xE469L,0L};
    int l_20 = 0x889E022AL;
    int *l_1941[1];
    int l_1951[6];
    unsigned char **l_1952 = (void*)0;
    unsigned *l_2014 = &g_1659;
    int **l_2015 = &g_106;
    int l_2016 = 0x8E613D6CL;
    unsigned short ** const l_2017 = &g_748;
    unsigned short **l_2018 = &g_748;
    unsigned short ***l_2019 = &l_2018;
    const unsigned ***l_2020[9];
    const unsigned **l_2021 = &g_863;
    int i;
    for (i = 0; i < 1; i++)
        l_1941[i] = (void*)0;
    for (i = 0; i < 6; i++)
        l_1951[i] = 0xA9FDFCDDL;
    for (i = 0; i < 9; i++)
        l_2020[i] = &g_862;
    for (g_5 = 5; (g_5 >= 0); g_5 -= 1)
    {
        short *l_18[7];
        int *l_24[8][2][9] = {{{(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5},{(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5}},{{&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5},{&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5},{&g_5,(void*)0,&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5}},{{(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5},{&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5,(void*)0,&g_5,&g_5}},{{&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5}},{{(void*)0,&g_5,&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5},{(void*)0,&g_5,(void*)0,(void*)0,&g_5,(void*)0,&g_5,&g_5,&g_5}},{{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,(void*)0,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0}},{{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0},{&g_5,&g_5,&g_5,&g_5,&g_5,&g_5,(void*)0,(void*)0,&g_5}}};
        int **l_1940[6];
        unsigned l_1970 = 0x90A7961FL;
        int l_1988 = 0x33A574B4L;
        int i, j, k;
        for (i = 0; i < 7; i++)
            l_18[i] = &g_19;
        for (i = 0; i < 6; i++)
            l_1940[i] = &g_106;
    }
    (*l_2015) = (((*l_2014) = (*g_863)) , (*g_1932));
    l_2021 = (((**l_2015) , ((**g_747) = (func_35(&g_1934[0][0][3], (**l_2015), &l_2[4]) <= (l_2016 , (l_2017 == ((*l_2019) = l_2018)))))) , &g_863);
    g_106 = (*g_1932);
    return (**l_2015);
}







static int * func_6(unsigned p_7, short p_8, int * p_9)
{
    unsigned l_1782 = 18446744073709551609UL;
    int l_1833 = 1L;
    short *l_1848 = (void*)0;
    int *l_1852 = &g_366;
    char ** const *l_1853 = &g_777;
    char **l_1901 = (void*)0;
    short l_1904 = 0x2964L;
    char * const *l_1905 = (void*)0;
    unsigned *l_1911 = &l_1782;
    unsigned ** const l_1910 = &l_1911;
    unsigned l_1912[2][9][4] = {{{0xA63433A6L,0UL,0x78E420D2L,0UL},{0x78E420D2L,0UL,0xA63433A6L,0x62049C92L},{0UL,0x8633A3CEL,5UL,0x78E420D2L},{0xE917097EL,4294967295UL,4294967295UL,0xE917097EL},{0xE917097EL,0x62049C92L,5UL,0x23665B93L},{0UL,0xE917097EL,0xA63433A6L,0x28B228A0L},{0x78E420D2L,0x117661FCL,0x78E420D2L,0x28B228A0L},{0xA63433A6L,0xE917097EL,0UL,0x23665B93L},{5UL,0x62049C92L,0xE917097EL,0xE917097EL}},{{4294967295UL,4294967295UL,0xE917097EL,0x78E420D2L},{5UL,0x117661FCL,4294967295UL,5UL},{0x23665B93L,4294967295UL,0xA63433A6L,4294967295UL},{0xA63433A6L,4294967295UL,0x23665B93L,5UL},{4294967295UL,0x117661FCL,0x8633A3CEL,0xA63433A6L},{0x78E420D2L,0x62049C92L,0x62049C92L,0x78E420D2L},{0x78E420D2L,5UL,0x8633A3CEL,0UL},{4294967295UL,0x78E420D2L,0x23665B93L,0xE917097EL},{0xA63433A6L,0x28B228A0L,0xA63433A6L,0xE917097EL}}};
    unsigned l_1917 = 0UL;
    short ***l_1927 = &g_1405[2];
    int * const *l_1935 = (void*)0;
    int i, j, k;
    if (l_1782)
    {
        char ** const *l_1787[4] = {&g_777,&g_777,&g_777,&g_777};
        char ** const **l_1786 = &l_1787[0];
        char ** const *** const l_1785[4] = {&l_1786,&l_1786,&l_1786,&l_1786};
        int *l_1788[10][2][10] = {{{&g_46[1][4][0],(void*)0,(void*)0,&g_42,&g_42,(void*)0,(void*)0,&g_46[1][4][0],&g_42,&g_366},{(void*)0,&g_366,&g_366,&g_46[2][1][0],&g_42,&g_42,&g_366,&g_42,&g_366,&g_42}},{{&g_5,&g_46[1][4][0],&g_366,&g_42,&g_46[2][2][0],&g_42,&g_366,&g_46[1][4][0],&g_5,&g_366},{&g_46[2][1][0],(void*)0,(void*)0,&g_366,(void*)0,&g_46[2][1][0],&g_42,&g_46[2][1][0],&g_42,&g_366}},{{(void*)0,&g_5,&g_46[1][4][0],&g_366,&g_366,&g_366,&g_366,&g_46[1][4][0],&g_5,(void*)0},{&g_46[1][4][0],&g_46[2][1][0],&g_5,&g_42,&g_46[1][4][0],&g_366,&g_366,&g_46[2][1][0],&g_42,&g_366}},{{&g_46[2][2][0],&g_46[2][1][0],&g_46[2][1][0],&g_46[2][2][0],&g_42,&g_42,&g_42,&g_46[2][2][0],&g_46[2][1][0],&g_46[2][1][0]},{&g_42,&g_366,&g_42,&g_366,&g_42,&g_42,&g_46[2][1][0],&g_366,&g_366,(void*)0}},{{&g_46[1][4][0],&g_46[2][2][0],&g_42,&g_42,(void*)0,&g_42,&g_42,(void*)0,&g_42,&g_42},{&g_42,&g_42,(void*)0,(void*)0,&g_46[1][4][0],&g_42,&g_366,&g_42,&g_46[3][3][0],&g_366}},{{&g_46[2][2][0],&g_46[1][4][0],&g_42,(void*)0,&g_46[1][4][0],&g_42,&g_366,&g_42,&g_46[1][4][0],(void*)0},{&g_366,&g_42,&g_366,&g_42,&g_366,&g_42,&g_42,&g_46[2][1][0],&g_366,&g_366}},{{&g_46[2][1][0],&g_46[2][2][0],&g_46[3][3][0],(void*)0,&g_42,&g_42,&g_46[2][1][0],&g_46[2][1][0],&g_42,&g_42},{&g_46[2][2][0],&g_366,&g_366,&g_46[2][2][0],&g_366,&g_46[1][4][0],&g_42,&g_42,&g_366,&g_46[2][1][0]}},{{&g_366,&g_46[2][1][0],&g_42,&g_42,&g_366,&g_42,&g_366,&g_42,&g_366,&g_42},{(void*)0,&g_46[1][4][0],&g_46[1][4][0],&g_46[1][4][0],&g_42,&g_42,&g_366,&g_42,(void*)0,&g_5}},{{&g_42,&g_42,&g_5,&g_42,&g_46[2][1][0],(void*)0,&g_5,&g_42,&g_42,&g_5},{&g_42,&g_42,&g_46[3][3][0],&g_46[3][3][0],&g_42,&g_42,&g_5,&g_46[1][4][0],(void*)0,&g_46[3][3][0]}},{{&g_42,&g_42,(void*)0,&g_366,&g_5,&g_46[1][4][0],&g_366,&g_42,&g_46[2][2][0],&g_42},{&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42,&g_42}}};
        short l_1795 = 9L;
        const unsigned char *l_1796 = &g_538[7][5];
        unsigned l_1857 = 4UL;
        int i, j, k;
        g_46[3][4][0] = (g_1783 == l_1785[0]);
        if ((0x90L | p_8))
        {
            short l_1792 = 0x63F6L;
            int **l_1800[10][6][2] = {{{&l_1788[2][0][0],&l_1788[0][0][8]},{&l_1788[2][0][6],&g_240},{&l_1788[5][0][0],&l_1788[2][0][0]},{&g_240,&l_1788[5][0][0]},{(void*)0,&g_106},{(void*)0,&l_1788[5][0][0]}},{{&g_240,&l_1788[2][0][0]},{&l_1788[5][0][0],&g_240},{&l_1788[2][0][6],&l_1788[0][0][8]},{&l_1788[2][0][0],&g_240},{&g_240,&g_240},{&l_1788[2][0][0],&l_1788[0][0][8]}},{{&l_1788[2][0][6],&g_240},{&l_1788[5][0][0],&l_1788[2][0][0]},{&g_240,&l_1788[5][0][0]},{(void*)0,&g_106},{(void*)0,&l_1788[5][0][0]},{&g_240,&l_1788[2][0][0]}},{{&l_1788[5][0][0],&g_240},{&l_1788[2][0][6],&l_1788[0][0][8]},{&l_1788[2][0][0],&g_240},{&g_240,&g_240},{&l_1788[2][0][0],&l_1788[0][0][8]},{&l_1788[2][0][6],(void*)0}},{{&g_240,&l_1788[5][0][0]},{&l_1788[0][0][8],&g_240},{&g_240,&g_240},{&g_240,&g_240},{&l_1788[0][0][8],&l_1788[5][0][0]},{&g_240,(void*)0}},{{&l_1788[2][0][0],&l_1788[0][0][8]},{&l_1788[5][0][0],&g_106},{&g_106,&g_106},{&l_1788[5][0][0],&l_1788[0][0][8]},{&l_1788[2][0][0],(void*)0},{&g_240,&l_1788[5][0][0]}},{{&l_1788[0][0][8],&g_240},{&g_240,&g_240},{&g_240,&g_240},{&l_1788[0][0][8],&l_1788[5][0][0]},{&g_240,(void*)0},{&l_1788[2][0][0],&l_1788[0][0][8]}},{{&l_1788[5][0][0],&g_106},{&g_106,&g_106},{&l_1788[5][0][0],&l_1788[0][0][8]},{&l_1788[2][0][0],(void*)0},{&g_240,&l_1788[5][0][0]},{&l_1788[0][0][8],&g_240}},{{&g_240,&g_240},{&g_240,&g_240},{&l_1788[0][0][8],&l_1788[5][0][0]},{&g_240,(void*)0},{&l_1788[2][0][0],&l_1788[0][0][8]},{&l_1788[5][0][0],&g_106}},{{&g_106,&g_106},{&l_1788[5][0][0],&l_1788[0][0][8]},{&l_1788[2][0][0],(void*)0},{&g_240,&l_1788[5][0][0]},{&l_1788[0][0][8],&g_240},{&g_240,&g_240}}};
            unsigned char ** const *l_1803 = (void*)0;
            char l_1832 = 0xF3L;
            short *l_1860 = &l_1792;
            char **l_1900 = &g_778;
            char **l_1902 = &g_778;
            int i, j, k;
            for (g_1462 = 0; (g_1462 <= 1); g_1462 += 1)
            {
                char l_1791 = (-7L);
                short *l_1793[2][3];
                short *l_1794 = &g_19;
                int **l_1797 = (void*)0;
                int **l_1798 = (void*)0;
                int **l_1799 = &l_1788[9][0][1];
                int i, j;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1793[i][j] = &g_19;
                }
                (*l_1799) = func_59((((((5L ^ ((l_1782 <= (0x91L && (((((*g_748) , l_1795) ^ p_8) , l_1796) != l_1796))) , l_1782)) && 0L) & 0x16L) < (*p_9)) , l_1791), l_1792, l_1794, (*g_863), l_1791);
            }
            p_9 = &g_46[2][0][0];
            for (g_19 = 0; (g_19 >= 21); g_19 = safe_add_func_int32_t_s_s(g_19, 5))
            {
                unsigned char ***l_1804[5][5];
                int l_1822[7][3][6] = {{{0xA01E8A2AL,(-5L),0xA01E8A2AL,2L,1L,(-1L)},{0x55520C2EL,0x34C4E230L,0xA01E8A2AL,0x55520C2EL,(-5L),0x17BC6B90L},{0x17BC6B90L,9L,(-1L),0x55520C2EL,0L,2L}},{{0x55520C2EL,0L,2L,2L,(-1L),0xC38B555CL},{(-9L),0x17BC6B90L,0x489E4207L,0x5F3FDB87L,0x55520C2EL,0xC38B555CL},{0x489E4207L,2L,0xA5E39A3BL,0L,7L,0xA5E39A3BL}},{{0x489E4207L,0x55520C2EL,0L,0x5F3FDB87L,0xA01E8A2AL,0x5F3FDB87L},{(-9L),0x55520C2EL,(-9L),0xA5E39A3BL,7L,0L},{0xC38B555CL,2L,(-9L),0xC38B555CL,0x55520C2EL,0x5F3FDB87L}},{{0x5F3FDB87L,0x17BC6B90L,0L,0xC38B555CL,(-1L),0xA5E39A3BL},{0xC38B555CL,(-1L),0xA5E39A3BL,0xA5E39A3BL,(-1L),0xC38B555CL},{(-9L),0x17BC6B90L,0x489E4207L,0x5F3FDB87L,0x55520C2EL,0xC38B555CL}},{{0x489E4207L,2L,0xA5E39A3BL,0L,7L,0xA5E39A3BL},{0x489E4207L,0x55520C2EL,0L,0x5F3FDB87L,0xA01E8A2AL,0x5F3FDB87L},{(-9L),0x55520C2EL,(-9L),0xA5E39A3BL,7L,0L}},{{0xC38B555CL,2L,(-9L),0xC38B555CL,0x55520C2EL,0x5F3FDB87L},{0x5F3FDB87L,0x17BC6B90L,0L,0xC38B555CL,(-1L),0xA5E39A3BL},{0xC38B555CL,(-1L),0xA5E39A3BL,0xA5E39A3BL,(-1L),0xC38B555CL}},{{(-9L),0x17BC6B90L,0x489E4207L,0x5F3FDB87L,0x55520C2EL,0xC38B555CL},{0x489E4207L,2L,0xA5E39A3BL,0xA5E39A3BL,(-1L),0x5F3FDB87L},{0L,7L,0xA5E39A3BL,(-9L),0x55520C2EL,(-9L)}}};
                unsigned short l_1834 = 0UL;
                short *l_1859 = &l_1792;
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_1804[i][j] = &g_164;
                }
            }
            if ((+func_27(((!((*l_1852) & p_7)) || 4UL), l_1788[0][0][8], (*g_863))))
            {
                int *l_1865 = &g_46[1][4][0];
                return l_1865;
            }
            else
            {
                unsigned l_1868[6][7];
                int l_1895 = 1L;
                int *l_1903 = &g_366;
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 7; j++)
                        l_1868[i][j] = 0UL;
                }
                for (g_19 = 0; (g_19 == (-23)); --g_19)
                {
                    int l_1877 = 0xE8D04081L;
                    unsigned short l_1882 = 0x91F6L;
                    int l_1883 = 2L;
                    unsigned *l_1893 = &g_1263[1][3][2];
                    unsigned ** const l_1892 = &l_1893;
                    short * const l_1894 = &g_720;
                    int l_1897[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1897[i] = 2L;
                    l_1868[3][5] = (*p_9);
                    for (g_1462 = 29; (g_1462 > 26); --g_1462)
                    {
                        unsigned char l_1896 = 0x9EL;
                        (*p_9) = ((*l_1852) = (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s(((**g_341) > p_8), (p_8 && ((*g_855) = ((l_1883 = p_7) <= p_8))))), 0)), (*g_1406))) != p_8) > p_8));
                        if ((*p_9))
                            continue;
                        (*l_1852) = (((safe_sub_func_int32_t_s_s(((0xA95BFD4DL ^ (p_8 , (safe_add_func_int16_t_s_s((((*g_855) ^ l_1895) && p_7), l_1868[5][4])))) , l_1896), (*p_9))) & 0x7DL) > 0UL);
                        if (l_1897[1])
                            break;
                    }
                }
                (*p_9) = l_1868[3][5];
                l_1903 = (l_1852 = func_59((*l_1852), ((0L ^ (((((p_7 = ((safe_add_func_uint16_t_u_u(((l_1900 != (l_1902 = l_1901)) , (*g_748)), p_8)) ^ l_1868[2][1])) < (*p_9)) | (*g_855)) | (*g_855)) != (*l_1852))) , p_8), &l_1792, (*g_863), p_8));
                return &g_46[1][6][0];
            }
        }
        else
        {
            return &g_46[2][1][0];
        }
    }
    else
    {
        short *l_1906 = (void*)0;
        int **l_1907[3][5] = {{&l_1852,&l_1852,&l_1852,&l_1852,&l_1852},{&l_1852,&l_1852,&l_1852,&l_1852,&l_1852},{&l_1852,&l_1852,&l_1852,&l_1852,&l_1852}};
        int i, j;
        g_870 = func_59(l_1904, ((*l_1853) != (l_1905 = l_1901)), (l_1906 = l_1906), (**g_862), p_7);
        l_1852 = p_9;
    }
    if ((((((&g_863 != l_1910) | (0x82L != 1UL)) , (((p_8 <= (l_1912[1][8][3] ^ (+((*g_855) = ((safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(l_1917, ((((*g_1406) = (safe_rshift_func_int8_t_s_s(1L, 2))) >= (p_8 , 0xFA93L)) == p_8))), 0x91L)) & (*g_870)))))) > p_8) , p_8)) , 0x65A99B20L) , 0x8CB05D4BL))
    {
        int *l_1920 = &l_1833;
        unsigned char ***l_1925 = &g_164;
        short *** const l_1926[4] = {&g_1405[2],&g_1405[2],&g_1405[2],&g_1405[2]};
        short ****l_1928[5] = {&l_1927,&l_1927,&l_1927,&l_1927,&l_1927};
        int * const l_1931 = (void*)0;
        int * const *l_1930 = &l_1931;
        int * const **l_1929[6][5] = {{(void*)0,(void*)0,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,(void*)0,&l_1930},{(void*)0,(void*)0,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,(void*)0,&l_1930},{(void*)0,(void*)0,&l_1930,&l_1930,&l_1930},{&l_1930,&l_1930,&l_1930,(void*)0,&l_1930}};
        int i, j;
        (*l_1920) = 0x7ECCFFFCL;
        (*l_1920) = (0xC474C712L == ((((!(*l_1852)) ^ ((safe_lshift_func_int16_t_s_s((((*l_1920) | (safe_lshift_func_int16_t_s_u(((*l_1852) != (*l_1920)), (*g_748)))) , (*l_1920)), p_7)) > 1L)) || (*l_1852)) , (*l_1920)));
        l_1935 = (g_1932 = (void*)0);
        for (l_1904 = (-16); (l_1904 < 20); l_1904++)
        {
            int *l_1938 = &g_366;
            l_1852 = l_1938;
        }
    }
    else
    {
        int *l_1939 = &g_366;
        return l_1939;
    }
    return &g_366;
}







static unsigned char func_21(int * p_22, unsigned p_23)
{
    short l_31[8][7] = {{0xBECCL,2L,0L,2L,0xBECCL,2L,0L},{(-8L),0x26CDL,(-3L),(-3L),0x26CDL,(-8L),(-1L)},{(-1L),0xF5CBL,(-1L),2L,(-1L),0xF5CBL,(-1L)},{(-8L),(-3L),(-1L),0x26CDL,0x26CDL,(-1L),(-3L)},{0xBECCL,0xF5CBL,0L,0xF5CBL,0xBECCL,0xF5CBL,0L},{0x26CDL,0x26CDL,(-1L),(-3L),(-8L),(-8L),(-3L)},{(-1L),2L,(-1L),0xF5CBL,(-1L),2L,(-1L)},{0x26CDL,(-3L),(-3L),0x26CDL,(-8L),(-1L),(-1L)}};
    unsigned l_1400 = 0xF8114CD5L;
    unsigned short l_1707[4][4][2] = {{{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL}},{{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL}},{{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL}},{{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL},{0x8D79L,0xE3BFL}}};
    short *l_1741 = &l_31[1][1];
    int *l_1757[6][6][5] = {{{&g_46[2][1][0],(void*)0,&g_42,&g_46[0][4][0],&g_5},{&g_42,&g_366,&g_5,&g_366,&g_366},{&g_42,&g_366,&g_366,&g_42,&g_42},{&g_366,(void*)0,&g_46[2][1][0],&g_366,&g_5},{&g_366,&g_5,&g_46[1][6][0],&g_42,&g_46[2][1][0]},{&g_5,&g_5,&g_42,&g_366,&g_366}},{{&g_42,&g_46[0][4][0],(void*)0,&g_42,(void*)0},{&g_46[2][1][0],&g_366,&g_366,&g_366,&g_366},{&g_42,&g_366,&g_42,&g_5,&g_5},{&g_366,&g_42,&g_366,&g_42,&g_5},{&g_42,&g_46[0][4][0],&g_366,&g_5,(void*)0},{&g_366,&g_366,&g_42,&g_366,&g_5}},{{&g_42,&g_42,(void*)0,&g_46[0][4][0],&g_46[0][4][0]},{&g_366,&g_366,&g_366,&g_5,&g_366},{&g_46[0][4][0],&g_46[1][6][0],&g_366,(void*)0,&g_5},{&g_42,&g_366,&g_46[3][4][0],&g_5,&g_42},{&g_46[2][1][0],&g_5,&g_366,&g_5,&g_5},{&g_42,&g_46[2][1][0],&g_366,(void*)0,&g_46[2][1][0]}},{{&g_42,&g_46[2][1][0],(void*)0,&g_46[2][1][0],&g_42},{&g_5,&g_42,&g_42,&g_46[2][1][0],&g_366},{&g_46[0][4][0],&g_46[1][6][0],&g_366,&g_46[0][4][0],&g_366},{(void*)0,&g_366,&g_366,&g_42,&g_366},{&g_46[2][1][0],&g_46[0][4][0],&g_42,&g_366,&g_42},{&g_366,&g_366,&g_46[2][1][0],&g_366,&g_46[2][1][0]}},{{(void*)0,(void*)0,(void*)0,&g_46[2][1][0],&g_5},{&g_366,&g_42,&g_46[2][1][0],&g_46[2][1][0],&g_42},{&g_46[2][1][0],&g_366,(void*)0,&g_42,&g_5},{&g_46[2][1][0],&g_366,&g_5,&g_5,&g_5},{(void*)0,&g_46[1][6][0],&g_46[2][4][0],&g_42,(void*)0},{&g_46[2][1][0],&g_46[1][2][0],&g_46[1][2][0],&g_46[2][1][0],(void*)0}},{{&g_42,&g_46[0][5][0],&g_46[0][4][0],&g_46[1][6][0],&g_366},{&g_366,&g_5,&g_5,(void*)0,&g_46[2][1][0]},{&g_366,&g_46[2][4][0],(void*)0,&g_46[1][6][0],&g_42},{&g_42,&g_46[2][1][0],&g_366,&g_46[2][1][0],&g_42},{(void*)0,(void*)0,&g_42,&g_42,(void*)0},{&g_366,&g_46[2][1][0],&g_46[3][4][0],&g_5,&g_46[3][1][0]}}};
    char l_1762[7][5][1] = {{{1L},{1L},{0xF7L},{2L},{(-4L)}},{{1L},{6L},{0L},{0L},{8L}},{{0L},{0L},{6L},{1L},{(-4L)}},{{2L},{0xF7L},{1L},{1L},{0xF7L}},{{2L},{(-4L)},{1L},{6L},{0L}},{{0L},{8L},{0L},{0L},{6L}},{{1L},{(-4L)},{2L},{0xF7L},{1L}}};
    unsigned char *l_1763 = (void*)0;
    unsigned l_1765 = 0x3A0C258DL;
    int **l_1781 = &g_240;
    int i, j, k;
    for (p_23 = 0; (p_23 == 33); p_23 = safe_add_func_int16_t_s_s(p_23, 6))
    {
        int *l_32 = (void*)0;
        unsigned char l_1085 = 0x01L;
        unsigned l_1086 = 0xCDA18883L;
        unsigned **l_1612 = &g_855;
        unsigned char l_1631 = 247UL;
        unsigned char l_1654 = 252UL;
        const unsigned char l_1663 = 255UL;
        unsigned l_1665 = 0x7883D7E0L;
        short **l_1685 = (void*)0;
        char l_1686 = 0xE2L;
        char l_1688 = (-10L);
        int l_1689 = 0x8AA904A1L;
        int l_1697 = 0L;
        unsigned *l_1700 = &l_1400;
        unsigned char * const *l_1711 = &g_165;
        unsigned char * const **l_1710[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned char * const ***l_1709 = &l_1710[5];
        short l_1732 = 7L;
        int l_1780 = (-1L);
        int i;
        if (((0x7965L < ((g_19 <= ((func_27(l_31[3][1], l_32, ((safe_mul_func_int16_t_s_s((0x6DL >= func_35(func_39(&l_31[1][3]), ((((~(((g_594 != p_23) && l_1085) < l_1086)) ^ 7UL) , p_23) > g_19), &l_31[2][6])), 1UL)) , l_1400)) , l_1400) , p_23)) >= 4294967295UL)) , 0x12A388FFL))
        {
            int **l_1609 = &l_32;
            (*l_1609) = p_22;
        }
        else
        {
            int *l_1610[1];
            short *l_1615[2][3] = {{&l_31[3][1],&l_31[3][1],&g_720},{&l_31[3][1],&l_31[3][1],&g_720}};
            unsigned short *l_1678 = &g_1661[1];
            unsigned char l_1683 = 0x3CL;
            short ***l_1684[4][7][2] = {{{&g_1405[2],&g_1405[2]},{(void*)0,&g_1405[2]},{&g_1405[2],&g_1405[4]},{&g_1405[2],&g_1405[2]},{&g_1405[2],&g_1405[2]},{&g_1405[2],&g_1405[4]},{&g_1405[2],&g_1405[2]}},{{(void*)0,&g_1405[2]},{&g_1405[2],&g_1405[4]},{&g_1405[2],&g_1405[2]},{&g_1405[2],&g_1405[2]},{&g_1405[2],&g_1405[4]},{&g_1405[2],&g_1405[2]},{(void*)0,&g_1405[2]}},{{&g_1405[2],&g_1405[4]},{&g_1405[2],&g_1405[2]},{&g_1405[2],&g_1405[2]},{&g_1405[2],&g_1405[4]},{&g_1405[2],&g_1405[2]},{(void*)0,&g_1405[2]},{&g_1405[2],&g_1405[4]}},{{&g_1405[2],&g_1405[2]},{&g_1405[2],&g_1405[2]},{&g_1405[2],&g_1405[4]},{&g_1405[2],&g_1405[2]},{(void*)0,&g_1405[2]},{&g_1405[2],&g_1405[4]},{&g_1405[2],&g_1405[2]}}};
            int **l_1687[4];
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_1610[i] = (void*)0;
            for (i = 0; i < 4; i++)
                l_1687[i] = &l_1610[0];
            g_46[2][1][0] = 0x9A3C84B1L;
            for (g_366 = 6; (g_366 >= 2); g_366 -= 1)
            {
                short *l_1613 = &g_720;
                short l_1622 = 0L;
                char l_1626[2];
                unsigned char *l_1630 = &g_538[8][1];
                int l_1667 = 0xB3D16C89L;
                int i;
                for (i = 0; i < 2; i++)
                    l_1626[i] = 0L;
                if (g_235[g_366])
                {
                    short l_1611 = 7L;
                    int l_1627 = (-1L);
                    for (l_1085 = 0; (l_1085 <= 0); l_1085 += 1)
                    {
                        short **l_1614[10];
                        unsigned char *l_1623 = (void*)0;
                        unsigned char *l_1624 = &g_538[7][5];
                        int **l_1625 = &g_106;
                        int i;
                        for (i = 0; i < 10; i++)
                            l_1614[i] = (void*)0;
                        (*l_1625) = (((*g_748) = (*g_748)) , func_59(p_23, l_1611, (((void*)0 == l_1612) , (l_1615[1][1] = l_1613)), ((((safe_mul_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(0x09C7CD9DL, (*g_855))), g_235[g_366])) >= p_23) == 0xEB26L) || 0x239BL), p_23));
                        if (l_1626[0])
                            continue;
                        l_1627 = p_23;
                    }
                    if ((safe_mod_func_int8_t_s_s(p_23, p_23)))
                    {
                        unsigned short *l_1660[7][9] = {{&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0]},{&g_1661[0],(void*)0,&g_1661[0],&g_1661[0],(void*)0,&g_1661[0],(void*)0,&g_1661[0],&g_1661[0]},{&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0]},{&g_1661[0],(void*)0,&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],(void*)0,&g_1661[0],&g_1661[0]},{&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0]},{(void*)0,&g_1661[0],&g_1661[0],&g_1661[0],(void*)0,(void*)0,&g_1661[0],&g_1661[0],&g_1661[0]},{&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0],&g_1661[0]}};
                        int l_1664 = 0L;
                        int i, j;
                        if (l_1626[0])
                            break;
                        l_1664 = (safe_sub_func_int16_t_s_s((((safe_sub_func_uint16_t_u_u((p_23 <= p_23), ((safe_mod_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(p_23, l_1627)), ((*l_1613) = (safe_mod_func_uint16_t_u_u((**g_747), p_23))))) | l_1665))) , 0x198AL) == p_23), 1L));
                    }
                    else
                    {
                        int *l_1666 = &g_46[2][1][0];
                        l_1666 = (void*)0;
                        if (l_1400)
                            continue;
                        if (p_23)
                            continue;
                    }
                }
                else
                {
                    int l_1668[8][7][4] = {{{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}},{{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}},{{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}},{{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}},{{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}},{{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}},{{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}},{{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L},{2L,2L,2L,2L}}};
                    int i, j, k;
                    l_1668[2][6][1] = (l_1667 = p_23);
                    for (l_1631 = 0; (l_1631 <= 5); l_1631 += 1)
                    {
                        char l_1673 = 1L;
                        g_106 = (void*)0;
                        l_1667 = ((safe_rshift_func_int16_t_s_s((l_1668[0][5][0] == p_23), (safe_sub_func_uint32_t_u_u(g_235[g_366], l_1673)))) >= l_1673);
                    }
                }
                if (l_31[2][2])
                    continue;
                for (g_705 = 1; (g_705 <= 5); g_705 += 1)
                {
                    l_1667 = l_31[3][1];
                }
            }
            l_32 = func_59((~(p_23 && (((!(((g_1405[3] = ((safe_mod_func_int16_t_s_s(p_23, (*g_748))) , (void*)0)) != l_1685) , l_1686)) , (*g_748)) || p_23))), p_23, &l_31[3][1], p_23, (*g_855));
            l_1689 = (l_1688 = p_23);
        }
        for (g_705 = 0; (g_705 != (-27)); g_705 = safe_sub_func_uint32_t_u_u(g_705, 1))
        {
            int **l_1694 = &g_240;
            char l_1727 = 0xFEL;
            short *l_1730[8] = {(void*)0,&g_720,&g_720,(void*)0,&g_720,&g_720,(void*)0,&g_720};
            unsigned char *l_1750 = &g_1717;
            int *l_1770[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            (*l_1694) = ((safe_mod_func_uint32_t_u_u((*g_855), p_23)) , &g_42);
            for (l_1086 = 0; (l_1086 <= 45); l_1086++)
            {
                unsigned l_1708 = 1UL;
                const unsigned char ***l_1719 = (void*)0;
                const unsigned char ****l_1718 = &l_1719;
                int l_1720 = 0xE475DA2AL;
                short *l_1721 = &g_720;
                unsigned l_1773 = 0xB032C611L;
            }
        }
        return (*g_1716);
    }
    (*l_1781) = (void*)0;
    return p_23;
}







static const int func_27(unsigned short p_28, int * p_29, unsigned p_30)
{
    int l_1411[10][5][5] = {{{0x38F9D73AL,7L,0xEA0F7D99L,0L,0x355B6347L},{3L,0x8536C9C7L,1L,1L,0x36CCBABFL},{1L,7L,0x80704414L,(-6L),(-1L)},{0x3E5DE951L,0xEDCD589DL,0xA794B48AL,1L,0xBE57A468L},{(-7L),(-6L),1L,1L,0L}},{{0xEA0F7D99L,0L,0xA1487D01L,0x1EF60A9DL,(-6L)},{0xE96CC5D3L,0x36CCBABFL,3L,0L,0L},{0x355B6347L,(-5L),0L,0x36CCBABFL,0L},{7L,7L,0x38F9D73AL,(-1L),0x2EE0708BL},{0x34896719L,1L,7L,(-7L),3L}},{{0xA55FBD71L,1L,7L,0x355B6347L,0x953D4055L},{0x04B10BD5L,1L,0L,0L,9L},{1L,7L,0xD459FB34L,0xEA0F7D99L,1L},{(-6L),(-5L),1L,1L,0x35F72751L},{1L,0x36CCBABFL,0x8536C9C7L,0x80704414L,0L}},{{0L,0x34896719L,0x1EF60A9DL,0xA794B48AL,(-1L)},{(-3L),3L,0L,1L,(-1L)},{0x8536C9C7L,(-1L),1L,0xA1487D01L,0L},{0L,0xA1487D01L,(-7L),0x38F9D73AL,0x35F72751L},{7L,0x7C4758A0L,1L,1L,1L}},{{0x8BC6E108L,1L,0x8BC6E108L,6L,9L},{0x1EF60A9DL,0L,2L,1L,0x953D4055L},{0x80704414L,0x8BC6E108L,0x953D4055L,0xF80F925BL,3L},{0xF80F925BL,0xA8CE8CF5L,2L,0x953D4055L,0x2EE0708BL},{0x38F9D73AL,0xCECCD4DCL,0x8BC6E108L,0x34896719L,1L}},{{0L,(-5L),0x35F72751L,0x1EF60A9DL,(-3L)},{(-3L),7L,1L,0xEDCD589DL,7L},{0xF80F925BL,0x04B10BD5L,0L,0x5DD41A77L,0L},{1L,0xA8CE8CF5L,0x8536C9C7L,0x8BC6E108L,0xEDCD589DL},{1L,0xBE57A468L,(-7L),1L,0xEA0F7D99L}},{{0xF80F925BL,1L,(-1L),(-7L),1L},{(-3L),1L,1L,0xB88875C8L,0x04B10BD5L},{0L,(-1L),(-1L),0L,0x2EE0708BL},{0x81BCB928L,9L,(-3L),0xA55FBD71L,0L},{9L,0x35F72751L,(-6L),0xA8CE8CF5L,0x80704414L}},{{0x7C4758A0L,1L,6L,0xA55FBD71L,3L},{(-7L),1L,0x81BCB928L,0L,(-5L)},{0xEDCD589DL,0x34896719L,1L,0xB88875C8L,0L},{(-6L),2L,0x8DA96B49L,(-7L),(-7L)},{1L,0xEA0F7D99L,3L,1L,2L}},{{(-1L),0xCECCD4DCL,7L,0x8BC6E108L,0x1EF60A9DL},{0x04B10BD5L,0xCECCD4DCL,0xF80F925BL,0x5DD41A77L,0xB88875C8L},{1L,0xEA0F7D99L,2L,0xEDCD589DL,0xA8CE8CF5L},{1L,2L,0L,0x1EF60A9DL,1L},{(-7L),(-1L),0xF80F925BL,(-1L),(-7L)}},{{1L,6L,0x34896719L,(-3L),0x38F9D73AL},{1L,1L,1L,(-6L),3L},{0xA794B48AL,0L,0L,6L,0x38F9D73AL},{0x3E5DE951L,(-6L),0xEDCD589DL,0x81BCB928L,(-7L)},{0x38F9D73AL,0xBE57A468L,1L,1L,1L}}};
    char l_1412[6][7][3] = {{{(-4L),0xD9L,0xBDL},{0xA8L,0x1EL,0xE1L},{0x82L,0x12L,0xC9L},{0x71L,0xA8L,0xE1L},{3L,(-8L),0xBDL},{3L,(-4L),0x1EL},{0x63L,0xA6L,0x63L}},{{0x1EL,(-4L),3L},{0xBDL,(-8L),3L},{0xE1L,0xA8L,0x71L},{0xC9L,0x12L,0x82L},{0xE1L,0x1EL,0xA8L},{0xBDL,0xD9L,(-4L)},{0x1EL,9L,9L}},{{0x63L,0L,(-4L)},{3L,1L,0xA8L},{3L,0x65L,0x82L},{0x71L,0L,0x71L},{0x82L,0x65L,3L},{0xA8L,1L,3L},{(-4L),0L,0x63L}},{{9L,(-4L),0x71L},{0L,0xFBL,0xC9L},{9L,0x71L,0x8CL},{0x63L,0x65L,0xAAL},{0xE1L,9L,0x8CL},{0L,0xA6L,0xC9L},{1L,3L,0x71L}},{{(-4L),2L,(-4L)},{0x71L,3L,1L},{0xC9L,0xA6L,0L},{0x8CL,9L,0xE1L},{0xAAL,0x65L,0x63L},{0x8CL,0x71L,9L},{0xC9L,0xFBL,0L}},{{0x71L,(-4L),(-4L)},{(-4L),0x12L,0L},{1L,0L,9L},{0L,1L,0x63L},{0xE1L,1L,0xE1L},{0x63L,1L,0L},{9L,0L,1L}}};
    int l_1418 = 1L;
    int l_1421 = 0L;
    char l_1427 = 0xE5L;
    int **l_1463 = &g_624[2];
    char ****l_1484 = &g_776;
    char **** const *l_1483 = &l_1484;
    unsigned short l_1525 = 65527UL;
    short *l_1545 = &g_94;
    short * const l_1551 = &g_19;
    int *l_1568 = &g_42;
    int i, j, k;
    for (g_655 = 0; (g_655 <= 16); ++g_655)
    {
        short *l_1404[7] = {&g_720,&g_720,&g_19,&g_720,&g_720,&g_19,&g_720};
        short **l_1403 = &l_1404[2];
        short ***l_1407 = (void*)0;
        short ***l_1408[7];
        const unsigned l_1413 = 0x420B5995L;
        unsigned l_1422 = 3UL;
        char *l_1423 = &g_269;
        unsigned char *l_1424 = &g_538[8][3];
        int l_1425 = (-4L);
        unsigned char *l_1426 = &g_92[7][4][0];
        int l_1428 = 0x674162ABL;
        int *l_1429 = &l_1421;
        int i;
        for (i = 0; i < 7; i++)
            l_1408[i] = &g_1405[2];
        (*l_1429) = ((((*g_855) , l_1403) == (g_1405[4] = g_1405[2])) || ((safe_rshift_func_int16_t_s_u((l_1411[2][1][0] , (((((l_1412[0][4][1] || l_1413) == (((*l_1426) = ((l_1425 = ((*l_1424) = l_1422)) ^ 0xACL)) && l_1427)) , l_1411[5][1][0]) ^ l_1413) < l_1413)), l_1428)) == l_1411[2][1][0]));
    }
    for (g_43 = 0; (g_43 <= 7); g_43++)
    {
        int *l_1432 = &g_46[2][1][0];
        char *l_1443 = &g_1314;
        int l_1450[10][1][7] = {{{1L,0x91B756F1L,8L,(-8L),0xF3D38361L,1L,1L}},{{(-1L),(-1L),8L,(-1L),(-1L),0xFB41EFD5L,1L}},{{0x91B756F1L,0x82A50068L,1L,0x60E78640L,0x87C667CAL,(-10L),8L}},{{1L,0L,0x56201ED2L,0x71B36CFBL,(-9L),0x82A50068L,0x71B36CFBL}},{{0xA438C2B2L,8L,1L,0L,(-1L),1L,1L}},{{0xFB41EFD5L,3L,1L,0x2B09038BL,0x2B09038BL,1L,3L}},{{0x56201ED2L,(-9L),1L,(-1L),0x91B756F1L,(-10L),0x2B09038BL}},{{(-9L),(-1L),0L,0x56201ED2L,0xB9DABEADL,0xC41249A3L,0xFB41EFD5L}},{{0x82A50068L,1L,0xA438C2B2L,(-1L),0xC41249A3L,0x52B98AEDL,0x91B756F1L}},{{1L,0xFB41EFD5L,0L,0x2B09038BL,(-8L),(-9L),(-8L)}}};
        char *l_1451 = &l_1412[0][4][1];
        char *****l_1482 = (void*)0;
        char l_1508 = 0x79L;
        short **l_1537 = (void*)0;
        int **l_1538[8][2][3] = {{{&g_240,&g_106,&g_240},{(void*)0,(void*)0,(void*)0}},{{&g_240,&g_106,&g_240},{(void*)0,(void*)0,(void*)0}},{{&g_240,&g_106,&g_240},{(void*)0,(void*)0,(void*)0}},{{&g_240,&g_106,&g_240},{(void*)0,(void*)0,(void*)0}},{{&g_240,&g_106,&g_240},{(void*)0,(void*)0,(void*)0}},{{&g_240,&g_106,&g_240},{(void*)0,(void*)0,(void*)0}},{{&g_240,&g_106,&g_240},{(void*)0,(void*)0,(void*)0}},{{&g_240,&g_106,&g_240},{(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        (*l_1432) = p_28;
        if (((safe_sub_func_int32_t_s_s((safe_mod_func_uint8_t_u_u((*l_1432), (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_1432) || ((*l_1432) > p_30)), 65532UL)), ((((*l_1443) = (safe_mul_func_uint8_t_u_u((*l_1432), (*l_1432)))) | ((*l_1451) = (safe_rshift_func_int16_t_s_u((~((safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s((*l_1432), (((((l_1450[2][0][1] = p_28) , 65535UL) < 1L) || (**g_747)) , (*g_1406)))), l_1411[9][2][1])) && l_1412[0][4][1])), 1)))) != l_1421))))), p_28)) , (*l_1432)))
        {
            int **l_1471 = &g_106;
            const int l_1477 = 0xE976317DL;
            const unsigned short l_1478 = 2UL;
            for (g_720 = 0; (g_720 == 28); g_720 = safe_add_func_int8_t_s_s(g_720, 2))
            {
                (*l_1432) = (safe_mul_func_uint8_t_u_u(p_30, l_1411[2][1][0]));
                for (g_105 = 0; (g_105 != 33); g_105 = safe_add_func_uint16_t_u_u(g_105, 5))
                {
                    int **l_1466 = &g_624[2];
                    for (g_42 = 0; (g_42 >= 0); g_42 -= 1)
                    {
                        int **l_1458 = &g_106;
                        unsigned char *l_1461 = &g_382;
                        int ***l_1464 = (void*)0;
                        int ***l_1465[5];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                            l_1465[i] = &g_623;
                        (*l_1458) = &g_46[(g_42 + 1)][(g_42 + 6)][g_42];
                        (*l_1458) = &g_46[(g_42 + 2)][(g_42 + 4)][g_42];
                        (*l_1432) = (p_30 || (safe_sub_func_uint8_t_u_u(((*l_1461) = 255UL), ((g_1462 != ((l_1421 , l_1463) == (l_1466 = &g_624[0]))) , (l_1421 = 247UL)))));
                    }
                    if ((safe_add_func_int32_t_s_s((*l_1432), (safe_sub_func_uint8_t_u_u((((p_28 , p_30) < 1UL) && (p_30 <= ((((void*)0 == l_1471) < (safe_rshift_func_int8_t_s_u(p_30, (safe_mul_func_uint8_t_u_u(((safe_unary_minus_func_uint16_t_u(((*g_748) = p_28))) , l_1477), l_1478))))) > 0x77L))), 1UL)))))
                    {
                        int *l_1479 = (void*)0;
                        (*l_1471) = l_1479;
                        if (p_28)
                            break;
                        (*l_1471) = &l_1418;
                        return l_1411[2][1][0];
                    }
                    else
                    {
                        return p_30;
                    }
                }
                (*l_1471) = &l_1450[7][0][2];
            }
            (*l_1432) = l_1421;
        }
        else
        {
            char l_1499 = 0xC8L;
            char l_1505[8][10][3] = {{{0L,1L,1L},{0x57L,0xB8L,0xD6L},{(-2L),0x78L,0L},{(-8L),0x1BL,(-7L)},{3L,(-1L),3L},{0L,0xD0L,0xB4L},{(-6L),0L,0x2DL},{0x1BL,1L,1L},{0x59L,(-5L),(-1L)},{3L,0x8FL,(-8L)}},{{0x14L,0xF0L,1L},{0xB4L,0x15L,0xBBL},{(-1L),0x59L,0L},{0xB9L,0x3AL,0x43L},{0xB3L,0xB3L,0xB8L},{(-1L),(-1L),1L},{(-1L),(-2L),(-5L)},{1L,(-7L),(-4L)},{0L,(-1L),(-5L)},{0L,0xAEL,1L}},{{0L,(-1L),0xB8L},{0x15L,0xE6L,0x43L},{0L,0x2DL,0L},{5L,8L,0xBBL},{0xD5L,0x1AL,1L},{0xFCL,1L,(-8L)},{3L,2L,(-1L)},{1L,0L,1L},{(-1L),1L,0x2DL},{8L,0xB4L,0xB4L}},{{(-5L),0x31L,3L},{0x3AL,0x39L,(-7L)},{(-1L),0x15L,0L},{1L,0xB4L,0xE6L},{(-1L),0L,(-1L)},{8L,0xDDL,0x3AL},{0xE0L,1L,(-5L)},{1L,0xD0L,8L},{1L,3L,(-1L)},{0x39L,0x82L,1L}},{{0xB3L,0x59L,3L},{1L,(-1L),0xFCL},{(-1L),0L,0xD5L},{0xD6L,0x9EL,5L},{0xC9L,0xD5L,0L},{0x15L,1L,0x15L},{(-2L),(-10L),0L},{0xBBL,0x3AL,0L},{0x14L,0L,0L},{0x5CL,0xB8L,1L}},{{0x14L,0xC9L,(-1L)},{0xBBL,0xFAL,(-1L)},{(-2L),0x15L,0xB3L},{0x15L,0L,0xB9L},{0xC9L,0x1AL,(-1L)},{0xD6L,(-8L),0xB4L},{(-1L),(-1L),0x14L},{1L,0x76L,3L},{0xB3L,0L,0x59L},{0x39L,0xD6L,0x1BL}},{{1L,0x2DL,(-6L)},{1L,1L,0L},{0xE0L,0xD3L,3L},{8L,0x17L,(-8L)},{(-1L),(-1L),(-2L)},{0x15L,1L,0x71L},{(-1L),0xDCL,(-1L)},{0x57L,0x49L,(-1L)},{1L,(-5L),0x2DL},{1L,0L,0xBBL}},{{0xD3L,0L,1L},{0x1BL,0x5CL,0L},{0L,(-1L),3L},{0x82L,(-4L),0xFAL},{(-2L),(-1L),0L},{0xFAL,0L,0x39L},{0L,0x2DL,0x2DL},{0x71L,0xDDL,0x82L},{(-1L),1L,0xB3L},{5L,0x8FL,0x15L}}};
            int l_1522 = 0xB76694BDL;
            const unsigned char l_1524[9][1][1] = {{{0UL}},{{0UL}},{{0UL}},{{0UL}},{{0UL}},{{0UL}},{{0UL}},{{0UL}},{{0UL}}};
            int i, j, k;
            if (((*l_1432) = ((safe_add_func_uint32_t_u_u((*g_855), (*g_855))) <= ((*g_748) = ((*g_1406) < (l_1482 == l_1483))))))
            {
                unsigned short l_1493 = 1UL;
                int l_1495 = 0L;
                for (g_1462 = 0; (g_1462 == 29); ++g_1462)
                {
                    int **l_1487 = (void*)0;
                    int **l_1488 = &g_240;
                    unsigned char *l_1494 = &g_92[5][2][0];
                    (*l_1488) = &g_46[2][1][0];
                    l_1495 = (safe_lshift_func_uint8_t_u_s(((*l_1494) = (safe_sub_func_uint8_t_u_u((l_1493 = 247UL), 0x47L))), 1));
                    for (g_366 = 0; (g_366 <= 0); g_366 += 1)
                    {
                        unsigned *l_1496 = &g_105;
                        unsigned short l_1504 = 3UL;
                        unsigned char *l_1506 = &g_538[7][5];
                        int *l_1507 = &l_1421;
                        int i, j, k;
                        (*l_1507) = (g_46[(g_366 + 3)][(g_366 + 5)][g_366] = (((((*l_1496) = g_92[(g_366 + 1)][(g_366 + 5)][g_366]) , ((0x94962F95L <= ((safe_rshift_func_int8_t_s_u(l_1499, (safe_mul_func_int8_t_s_s(((((g_92[(g_366 + 3)][(g_366 + 4)][g_366] = (p_30 < (*l_1432))) > ((*l_1506) = (safe_mod_func_int8_t_s_s(p_28, (((l_1504 = p_30) , l_1505[7][6][0]) && (+(p_30 && (*g_748)))))))) <= l_1493) & (*l_1432)), l_1412[0][4][1])))) < 0x61L)) , 255UL)) | p_28) & 1UL));
                    }
                }
                (*l_1432) = l_1508;
                for (l_1418 = (-19); (l_1418 == 1); ++l_1418)
                {
                    int **l_1513[8][5] = {{(void*)0,&g_106,&g_106,(void*)0,&l_1432},{(void*)0,&l_1432,&g_240,&g_240,&l_1432},{&l_1432,&g_106,&g_240,&g_106,&g_106},{&g_106,&l_1432,&g_106,&g_240,&g_106},{&l_1432,(void*)0,&g_106,(void*)0,&l_1432},{&g_106,(void*)0,&l_1432,&l_1432,&l_1432},{&l_1432,&l_1432,&g_106,&l_1432,(void*)0},{(void*)0,&g_106,&g_106,(void*)0,&l_1432}};
                    const short l_1523[6][2][2] = {{{(-5L),0x7162L},{(-1L),0xDD7EL}},{{0x7162L,0xDD7EL},{(-1L),0x7162L}},{{0xAFC0L,0xAFC0L},{0xAFC0L,0x7162L}},{{(-1L),0xDD7EL},{0x7162L,0xDD7EL}},{{(-1L),0x7162L},{0xAFC0L,0xAFC0L}},{{0xAFC0L,0x7162L},{(-1L),0xDD7EL}}};
                    int i, j, k;
                    for (g_1462 = 0; (g_1462 < 10); ++g_1462)
                    {
                        (*l_1432) = p_28;
                        if ((*l_1432))
                            continue;
                    }
                    g_240 = &l_1450[2][0][1];
                    (*l_1432) = (l_1411[5][2][0] , (l_1493 != p_28));
                }
            }
            else
            {
                char l_1528 = 0x92L;
                l_1522 = (+((safe_add_func_uint8_t_u_u(l_1528, ((safe_mul_func_int16_t_s_s((p_30 , 0xCE2FL), ((*g_748) = ((safe_mod_func_uint8_t_u_u(((+(**g_747)) ^ (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((((!(p_30 & (4UL < (*l_1432)))) , l_1427) , ((*l_1432) = ((void*)0 == l_1537))) == 0x07D51336L), (*g_748))), l_1427))), p_30)) , (**g_747))))) ^ 0x81C3DE48L))) > (-1L)));
                return p_28;
            }
        }
        p_29 = &g_366;
    }
    for (l_1421 = 7; (l_1421 >= 0); l_1421 -= 1)
    {
        int **l_1539[9] = {&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106,&g_106};
        unsigned l_1543 = 0x36AA21D0L;
        int l_1546 = 0x57391970L;
        short *l_1549 = &g_19;
        short **l_1550 = &l_1545;
        int l_1567 = 0xCDB0BE86L;
        unsigned char *l_1586 = (void*)0;
        unsigned short **l_1595 = (void*)0;
        unsigned short * const *l_1596 = &g_748;
        short *l_1597 = &g_19;
        short l_1601 = 0xE285L;
        int i;
        p_29 = (void*)0;
        for (g_1462 = 0; (g_1462 <= 4); g_1462 += 1)
        {
            unsigned char *l_1542 = &g_92[5][2][0];
            const int l_1544 = 0xD8CC090CL;
            int i, j;
            g_46[2][1][0] = p_28;
            for (g_42 = 0; (g_42 <= 5); g_42 += 1)
            {
                int i, j, k;
                return l_1411[(l_1421 + 1)][g_1462][g_1462];
            }
            return l_1544;
        }
        if (l_1525)
        {
            int *l_1552 = &g_46[1][4][0];
            short *l_1563 = &g_94;
            l_1552 = ((**g_862) , p_29);
            g_870 = func_59(((safe_mod_func_int8_t_s_s((-1L), p_28)) ^ (safe_mod_func_uint16_t_u_u(p_28, (safe_mod_func_int16_t_s_s((1L || p_28), 0x5747L))))), (safe_add_func_int16_t_s_s(((safe_sub_func_uint8_t_u_u(((void*)0 == &g_624[4]), p_30)) <= p_28), 6UL)), l_1563, p_30, p_30);
        }
        else
        {
            char l_1566 = (-1L);
            g_46[1][0][0] = (p_28 , (p_28 < (((((*g_748) = p_30) , g_122) & 4294967289UL) >= (-1L))));
            p_29 = &l_1421;
            l_1568 = &l_1421;
        }
        for (g_1300 = 0; (g_1300 <= 5); g_1300 += 1)
        {
            int *l_1569 = &g_46[2][1][0];
            int *l_1587 = &l_1567;
            g_366 = p_28;
            for (l_1418 = 0; (l_1418 <= 4); l_1418 += 1)
            {
                int *l_1585 = &g_366;
                for (g_382 = 0; (g_382 <= 5); g_382 += 1)
                {
                    p_29 = p_29;
                    g_870 = p_29;
                }
                l_1569 = &g_46[2][1][0];
                for (g_105 = 3; (g_105 <= 8); g_105 += 1)
                {
                    unsigned l_1572 = 18446744073709551608UL;
                    int l_1577 = 0xD4BD7AAEL;
                    int l_1582 = 0xE1FCD3EBL;
                    int l_1583 = (-1L);
                    if (((((p_28 == (safe_rshift_func_uint8_t_u_u(l_1572, 0))) ^ ((safe_mod_func_int16_t_s_s((l_1577 = (safe_mul_func_int16_t_s_s(p_28, (**g_747)))), ((&g_862 != (void*)0) , ((safe_add_func_uint16_t_u_u((((safe_rshift_func_int16_t_s_u(1L, 0)) < (*g_855)) == (l_1582 = ((0L == p_30) , p_30))), l_1583)) && (*g_855))))) ^ (*g_748))) | (*g_748)) , (*l_1568)))
                    {
                        int *l_1584 = &l_1577;
                        l_1584 = p_29;
                        g_870 = l_1585;
                        return p_28;
                    }
                    else
                    {
                        l_1568 = l_1569;
                        g_106 = &g_46[0][0][0];
                        (*g_106) = ((void*)0 == l_1586);
                    }
                }
            }
            for (g_496 = 1; (g_496 <= 4); g_496 += 1)
            {
                short *l_1588 = &g_19;
                int i;
                l_1587 = l_1569;
                p_29 = func_48(&g_42, l_1545, func_48((g_240 = &l_1421), l_1545, &l_1418, l_1588, (((safe_sub_func_int16_t_s_s(0x3775L, (safe_rshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((((*l_1587) = g_235[(g_496 + 1)]) , l_1595) != l_1596), 0)), g_235[g_496])))) , g_812[0]) && p_28)), l_1597, (**g_623));
                for (g_43 = 0; (g_43 <= 4); g_43 += 1)
                {
                    (*l_1587) = (*g_106);
                }
            }
            for (l_1427 = 5; (l_1427 >= 0); l_1427 -= 1)
            {
                for (g_43 = 0; (g_43 <= 2); g_43 += 1)
                {
                    unsigned short l_1600 = 0x01EBL;
                    int i;
                    (*l_1587) = (safe_mod_func_uint32_t_u_u((l_1600 & l_1601), (safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((**g_747), 0x42AFL)) , (*l_1568)), (p_28 , (p_28 = (**g_747))))), g_1314))));
                    return (**g_623);
                }
            }
        }
    }
    for (g_496 = 0; (g_496 <= 0); g_496 += 1)
    {
        const int l_1608 = 0x802A073FL;
        return l_1608;
    }
    return p_28;
}







static const unsigned char func_35(int * p_36, int p_37, short * const p_38)
{
    unsigned char l_1087 = 8UL;
    short *l_1089 = &g_94;
    short **l_1088 = &l_1089;
    short **l_1090 = &l_1089;
    int *l_1091 = &g_46[2][5][0];
    unsigned char l_1094 = 0UL;
    unsigned short l_1095 = 6UL;
    unsigned * const l_1124 = &g_496;
    unsigned * const *l_1123 = &l_1124;
    unsigned * const **l_1122 = &l_1123;
    int l_1127 = 0L;
    int l_1128 = 0x757810DCL;
    unsigned l_1143 = 4294967295UL;
    char ***l_1182 = &g_777;
    short l_1206[1];
    short *l_1265 = (void*)0;
    unsigned char l_1273 = 3UL;
    const int *l_1275 = (void*)0;
    const int *l_1382 = &g_235[3];
    const int **l_1381 = &l_1382;
    unsigned char l_1383 = 6UL;
    char *l_1384[1];
    int **l_1385 = &l_1091;
    short l_1398 = 1L;
    int *l_1399 = &g_46[2][1][0];
    int i;
    for (i = 0; i < 1; i++)
        l_1206[i] = 0x140AL;
    for (i = 0; i < 1; i++)
        l_1384[i] = &g_655;
    if (((*l_1091) = (l_1087 , (l_1088 != l_1090))))
    {
        int l_1092[7][3] = {{0xA9A52C81L,0xA9A52C81L,0xA9A52C81L},{0x86C7F8D5L,0x758408C5L,0x86C7F8D5L},{0xA9A52C81L,0xA9A52C81L,0xA9A52C81L},{0x86C7F8D5L,0x758408C5L,0x86C7F8D5L},{0xA9A52C81L,0xA9A52C81L,0xA9A52C81L},{0x86C7F8D5L,0x758408C5L,0x86C7F8D5L},{0xA9A52C81L,0xA9A52C81L,0xA9A52C81L}};
        int **l_1093[10] = {&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091,&l_1091};
        short l_1107 = 0xDEBFL;
        unsigned l_1110 = 4294967290UL;
        unsigned char *l_1119 = &g_92[5][2][0];
        unsigned char ***l_1125 = &g_164;
        unsigned l_1126 = 0xCD9431ABL;
        int i, j;
        l_1091 = (p_36 = func_59(p_37, (*l_1091), (*l_1090), ((p_37 && (*g_748)) , p_37), (*l_1091)));
        l_1095 = (g_366 = (l_1094 = (*p_36)));
        for (l_1095 = (-6); (l_1095 == 50); l_1095 = safe_add_func_uint8_t_u_u(l_1095, 1))
        {
            int l_1104[6][10] = {{0xC4D39947L,(-1L),1L,1L,0x091085DBL,(-1L),1L,0xC75BC221L,0x8159BE40L,0x4F3928DAL},{0x23790FFCL,0L,0x95D7B2BFL,0xC75BC221L,(-4L),(-4L),0xC75BC221L,0x95D7B2BFL,0L,0x23790FFCL},{0x4F3928DAL,0x8159BE40L,0xC75BC221L,1L,(-1L),0x091085DBL,1L,1L,(-1L),0xC4D39947L},{0xCABE0981L,0x091085DBL,0x4F3928DAL,0L,2L,0x3349F634L,0xCABE0981L,1L,0x95D7B2BFL,0xF7378BC8L},{2L,1L,3L,0x4DBBA23CL,0xCABE0981L,0x4DBBA23CL,3L,1L,2L,(-1L)},{(-1L),(-1L),7L,0xC75BC221L,(-1L),(-9L),0x95D7B2BFL,0x3349F634L,1L,0xC4D39947L}};
            unsigned char *l_1105 = &l_1094;
            int l_1106 = 0xAEFB99C1L;
            unsigned char *l_1108 = (void*)0;
            unsigned char *l_1109 = &l_1087;
            int *l_1114[5] = {&l_1106,&l_1106,&l_1106,&l_1106,&l_1106};
            int i, j;
            if (((safe_mod_func_int8_t_s_s(p_37, (*l_1091))) >= (0L || ((safe_mul_func_uint16_t_u_u(((**g_747) = (safe_rshift_func_uint8_t_u_u(((*l_1109) = ((p_37 >= (p_37 , ((*l_1105) = (l_1104[4][6] = ((void*)0 != p_38))))) & ((*l_1091) < (((((p_37 >= l_1106) , (-4L)) & l_1107) , l_1091) != p_36)))), l_1110))), 0x5E6FL)) , 1L))))
            {
                int *l_1113 = &l_1106;
                for (g_269 = 0; (g_269 > (-7)); --g_269)
                {
                    g_240 = &l_1106;
                    g_106 = p_36;
                    if ((*p_36))
                    {
                        if ((*g_106))
                            break;
                        l_1113 = p_36;
                    }
                    else
                    {
                        l_1113 = &g_366;
                        g_106 = p_36;
                        (*g_240) = (*g_106);
                    }
                }
            }
            else
            {
                return p_37;
            }
            if ((*p_36))
                break;
            l_1114[0] = &g_366;
        }
        l_1128 = (l_1127 = (((safe_mul_func_uint8_t_u_u(((*p_38) < 0x18D0L), (p_37 < (p_37 < (0x4CL != ((p_37 , l_1125) != &g_164)))))) != (*g_748)) && l_1126));
    }
    else
    {
        int **l_1129[10][5][5] = {{{(void*)0,(void*)0,(void*)0,&l_1091,&g_106},{&g_240,&g_240,&g_106,(void*)0,&g_106},{&g_240,(void*)0,(void*)0,&g_240,&l_1091},{(void*)0,&g_106,&g_106,&g_106,&l_1091},{(void*)0,&g_106,(void*)0,&g_240,&l_1091}},{{&g_240,&l_1091,&l_1091,&g_240,&g_106},{&l_1091,&g_106,&g_106,&l_1091,(void*)0},{&g_106,&g_106,&g_240,&g_240,(void*)0},{&g_106,&l_1091,&l_1091,&l_1091,&g_240},{&l_1091,&g_240,&g_240,&g_240,&g_106}},{{(void*)0,&l_1091,&g_106,&l_1091,&g_106},{(void*)0,&l_1091,(void*)0,&g_240,&g_106},{&g_106,&g_240,(void*)0,&l_1091,(void*)0},{&g_240,&g_106,&g_240,&g_240,&g_106},{&l_1091,&g_106,(void*)0,(void*)0,(void*)0}},{{&g_106,&l_1091,&g_240,&g_106,&g_106},{&g_240,(void*)0,&l_1091,&g_106,(void*)0},{&g_106,(void*)0,&g_106,&g_106,&l_1091},{(void*)0,&g_106,&g_106,&g_106,&g_106},{&l_1091,(void*)0,&g_106,&l_1091,&g_240}},{{&g_240,&g_240,&g_106,&g_240,&l_1091},{&g_240,&g_240,&g_106,&g_240,&g_240},{&g_240,&g_106,&g_106,&g_106,&g_106},{&l_1091,&l_1091,&g_106,&l_1091,(void*)0},{(void*)0,&g_240,(void*)0,&g_106,(void*)0}},{{&g_106,&g_106,&g_106,(void*)0,&l_1091},{&g_240,&l_1091,&g_240,&l_1091,&l_1091},{&g_106,&l_1091,&g_106,&l_1091,&g_240},{&l_1091,&l_1091,&l_1091,&g_240,&g_240},{&g_240,&g_106,(void*)0,&g_106,&g_106}},{{(void*)0,&g_240,&g_106,(void*)0,(void*)0},{&g_240,&l_1091,&g_240,&g_240,&g_240},{&l_1091,(void*)0,(void*)0,&g_106,&g_240},{&l_1091,&g_240,(void*)0,&l_1091,&g_106},{&g_106,(void*)0,(void*)0,&g_240,&l_1091}},{{&g_240,&l_1091,(void*)0,&l_1091,(void*)0},{&g_106,(void*)0,&l_1091,&g_240,&g_106},{&g_240,&g_106,&g_106,&g_240,&g_240},{&g_240,&g_240,&l_1091,&l_1091,&g_240},{&l_1091,&l_1091,&g_240,&g_106,&l_1091}},{{&g_106,&l_1091,&l_1091,&l_1091,&g_240},{&g_240,(void*)0,&l_1091,&g_240,&g_106},{&g_240,&g_106,&g_106,&g_240,&l_1091},{&g_106,&l_1091,&g_240,&l_1091,&g_106},{&g_240,&g_106,(void*)0,&g_240,&g_106}},{{&g_106,&g_240,&g_106,&l_1091,&g_240},{&l_1091,&g_240,(void*)0,&g_106,&g_106},{&g_240,&l_1091,&g_106,&g_240,&g_106},{&g_106,&g_106,&l_1091,(void*)0,&l_1091},{&l_1091,&g_106,(void*)0,(void*)0,&g_106}}};
        int l_1142 = 0x02E4C859L;
        int *l_1180 = &g_366;
        unsigned l_1193 = 0x0601B86DL;
        int i, j, k;
        l_1091 = p_36;
        for (g_94 = 13; (g_94 == (-13)); --g_94)
        {
            unsigned short l_1138 = 65529UL;
            short *l_1141 = &g_720;
            int *l_1167[2][2] = {{&g_46[1][2][0],&g_46[1][2][0]},{&g_46[1][2][0],&g_46[1][2][0]}};
            int i, j;
            g_46[3][2][0] = (*g_870);
            l_1091 = &g_5;
            g_46[2][1][0] = (safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(0x7E13L, (((**g_623) = (safe_sub_func_uint32_t_u_u((p_37 , (((*l_1122) != (*l_1122)) ^ l_1138)), (g_42 = ((safe_lshift_func_int8_t_s_s(p_37, ((((*l_1141) = ((*g_870) != (p_37 >= (*p_36)))) , l_1142) > l_1143))) >= 0UL))))) , g_46[1][3][0]))), 0L));
            for (g_382 = (-7); (g_382 > 46); g_382 = safe_add_func_uint8_t_u_u(g_382, 5))
            {
                int *l_1146 = (void*)0;
                unsigned l_1159 = 0xBA8B9636L;
                unsigned *l_1166[9][10][2] = {{{&g_496,&g_496},{&g_496,&g_496},{(void*)0,&l_1159},{&g_496,&l_1159},{(void*)0,&g_496},{&g_496,&g_496},{&g_496,&l_1159},{(void*)0,&g_105},{&l_1159,&l_1159},{&l_1159,&l_1159}},{{&g_496,&g_496},{&g_496,&l_1159},{&l_1159,&l_1159},{&l_1159,&g_105},{(void*)0,&l_1159},{&g_496,&g_496},{&g_496,&g_496},{(void*)0,&l_1159},{&g_496,&l_1159},{(void*)0,&g_496}},{{&g_496,&g_496},{&g_496,&l_1159},{(void*)0,&g_105},{&l_1159,&l_1159},{&l_1159,&l_1159},{&g_496,&g_496},{&g_496,&l_1159},{&l_1159,&l_1159},{&l_1159,&g_105},{(void*)0,&l_1159}},{{&g_496,&g_496},{&g_496,&g_496},{(void*)0,&l_1159},{&g_496,&l_1159},{(void*)0,&g_496},{&g_496,&g_496},{&g_496,&l_1159},{(void*)0,&g_105},{&l_1159,&l_1159},{&l_1159,&l_1159}},{{&g_496,&g_496},{&g_496,&l_1159},{&l_1159,&l_1159},{&l_1159,&g_105},{(void*)0,&l_1159},{&g_496,&g_496},{&g_496,&g_496},{(void*)0,&g_105},{&g_105,&g_105},{&g_496,&g_105}},{{&g_105,&g_105},{&g_105,&g_496},{&g_496,&g_496},{&g_496,&g_105},{&g_105,&g_496},{&g_105,&g_105},{&g_105,&g_496},{&g_105,&g_105},{&g_496,&g_496},{&g_496,&g_496}},{{&g_105,&g_105},{&g_105,&g_105},{&g_496,&g_105},{&g_105,&g_105},{&g_496,&g_105},{&g_105,&g_105},{&g_105,&g_496},{&g_496,&g_496},{&g_496,&g_105},{&g_105,&g_496}},{{&g_105,&g_105},{&g_105,&g_496},{&g_105,&g_105},{&g_496,&g_496},{&g_496,&g_496},{&g_105,&g_105},{&g_105,&g_105},{&g_496,&g_105},{&g_105,&g_105},{&g_496,&g_105}},{{&g_105,&g_105},{&g_105,&g_496},{&g_496,&g_496},{&g_496,&g_105},{&g_105,&g_496},{&g_105,&g_105},{&g_105,&g_496},{&g_105,&g_105},{&g_496,&g_496},{&g_496,&g_496}}};
                unsigned **l_1165 = &l_1166[8][9][1];
                int l_1169 = 3L;
                short l_1183 = 0x5459L;
                char l_1184 = 0x77L;
                int i, j, k;
            }
        }
        return p_37;
    }
    if (((void*)0 != &g_341))
    {
        unsigned l_1201 = 4294967295UL;
        char ***l_1252 = &g_777;
        int l_1254 = 0x50004958L;
        unsigned l_1264 = 4294967295UL;
        short *l_1266[2][10] = {{(void*)0,(void*)0,&g_94,&l_1206[0],&g_94,(void*)0,(void*)0,&g_94,&l_1206[0],&g_94},{&l_1206[0],&l_1206[0],&l_1206[0],(void*)0,&l_1206[0],&l_1206[0],&l_1206[0],&l_1206[0],(void*)0,&l_1206[0]}};
        const unsigned short *l_1291 = &g_1292;
        const int l_1301 = (-1L);
        const unsigned char *l_1326 = &g_538[7][5];
        const unsigned char **l_1325 = &l_1326;
        const unsigned char ***l_1324 = &l_1325;
        int i, j;
        for (l_1087 = (-28); (l_1087 < 59); l_1087 = safe_add_func_int8_t_s_s(l_1087, 7))
        {
            int *l_1198[10];
            unsigned char *l_1207 = &l_1094;
            short *l_1219 = &g_19;
            int **l_1251[6] = {&g_624[5],&g_624[5],&g_624[5],&g_624[5],&g_624[5],&g_624[5]};
            char **l_1257 = (void*)0;
            const int **l_1274 = &g_870;
            int i;
            for (i = 0; i < 10; i++)
                l_1198[i] = (void*)0;
            if (((g_366 = (safe_lshift_func_uint16_t_u_s(0xC795L, 13))) <= (((safe_add_func_uint16_t_u_u(((2UL & (((((**g_623) = l_1201) , ((safe_rshift_func_int8_t_s_u((l_1206[0] = (safe_mod_func_uint8_t_u_u(1UL, 0x61L))), ((*l_1207) = p_37))) >= (((*g_748) || (safe_rshift_func_uint8_t_u_u(((((safe_mod_func_int16_t_s_s(((((*l_1091) , (safe_add_func_uint16_t_u_u(p_37, 0UL))) ^ l_1201) & (*p_38)), p_37)) < (*l_1091)) && (*p_36)) , p_37), 7))) , 0xD7L))) , (*l_1091)) , l_1201)) , (**g_747)), (*g_748))) , g_152[7][4]) >= l_1201)))
            {
                short *l_1218 = &g_94;
                int *l_1220 = &l_1127;
                int **l_1221 = &l_1198[9];
                const char l_1232 = 0x62L;
                int l_1237 = 0L;
                int l_1243[1];
                const unsigned char l_1244[5][6][8] = {{{0UL,0x8BL,255UL,0x74L,1UL,0xCCL,1UL,248UL},{0UL,255UL,250UL,0x67L,0x87L,0UL,1UL,0x2DL},{0x24L,0x65L,0xB4L,0x87L,0x8DL,0UL,0UL,0xD8L},{0xF9L,0xEAL,0xCCL,0xD8L,252UL,0x85L,0x85L,252UL},{250UL,252UL,252UL,250UL,251UL,0x01L,0x7AL,0x66L},{0UL,0UL,0UL,0x74L,4UL,0x67L,0UL,255UL}},{{0xB8L,0UL,0UL,0x38L,0x65L,0x01L,1UL,0UL},{0UL,252UL,0x26L,0UL,0x41L,0x85L,0x66L,0x74L},{0x06L,0xEAL,0UL,0xB4L,0xCCL,0UL,0UL,0x7AL},{0UL,0x65L,0x66L,1UL,251UL,0UL,0x65L,0UL},{0xF9L,248UL,0x01L,0UL,0xD8L,0x8DL,0xD8L,0UL},{0xCCL,0x74L,0xCCL,248UL,0xEAL,0x38L,0xD8L,0x65L}},{{0x9BL,0x24L,1UL,0xF9L,1UL,0x9BL,0xEAL,1UL},{0x9BL,0x8BL,0UL,0UL,0xEAL,1UL,0xE1L,0UL},{0xCCL,0UL,0x8DL,0x66L,0xD8L,0x67L,248UL,0UL},{0xF9L,0xD8L,1UL,1UL,0UL,0UL,0x26L,0x01L},{252UL,255UL,0x38L,248UL,0x8DL,0UL,247UL,0UL},{1UL,0xF9L,0x2DL,0xEAL,0x8BL,0x8BL,0xEAL,0x2DL}},{{255UL,255UL,0xF9L,0xB8L,0UL,0UL,0x9BL,248UL},{0x38L,0UL,0x06L,252UL,255UL,0x66L,0UL,248UL},{0UL,1UL,0x01L,0xB8L,0UL,0x41L,1UL,0x2DL},{0UL,248UL,0x65L,0xEAL,0UL,0x38L,0xD8L,0xD8L},{0x87L,0xB8L,255UL,0UL,0x65L,0x66L,1UL,251UL},{0UL,0x67L,0x2DL,0xE1L,250UL,0UL,0x65L,7UL}},{{255UL,0xB8L,0UL,0x26L,0x41L,0x26L,0UL,0xB8L},{1UL,0UL,1UL,0UL,0x85L,0UL,0xEAL,0UL},{247UL,0x85L,0x74L,0x2DL,1UL,0UL,0xEAL,255UL},{0UL,0x2DL,1UL,0UL,0x66L,252UL,0UL,0x9BL},{0x66L,252UL,0UL,0x9BL,0xB8L,0xCCL,0x65L,0UL},{0x74L,7UL,0x2DL,0xD8L,0x06L,0xB4L,1UL,0UL}}};
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_1243[i] = 0xD34C680DL;
                (*l_1221) = l_1220;
                if (l_1201)
                {
                    unsigned char l_1240 = 0UL;
                    g_870 = &g_366;
                    for (g_94 = 0; (g_94 != (-22)); --g_94)
                    {
                        const unsigned char *l_1239 = &l_1087;
                        const unsigned char **l_1238 = &l_1239;
                        l_1243[0] = ((((g_94 >= (g_720 = (safe_add_func_uint32_t_u_u(l_1237, (((((*p_36) || (l_1238 == (l_1240 , (void*)0))) , ((safe_lshift_func_uint8_t_u_s(((((254UL == (*l_1091)) >= (((*g_748) | 1L) >= p_37)) && p_37) ^ 0x99A7EF7BL), (*l_1091))) && (-7L))) , p_37) && l_1240))))) | (*l_1091)) , (*l_1091)) , 1L);
                    }
                    return l_1244[1][1][1];
                }
                else
                {
                    if ((safe_sub_func_int16_t_s_s(((*p_38) || (safe_mod_func_uint16_t_u_u((safe_add_func_int8_t_s_s(p_37, ((**g_747) == ((0xD952L ^ (*g_748)) , ((void*)0 != l_1251[5]))))), ((l_1252 != ((*g_870) , (void*)0)) || p_37)))), 0x1C98L)))
                    {
                        return p_37;
                    }
                    else
                    {
                        const unsigned short l_1253 = 65534UL;
                        return l_1253;
                    }
                }
            }
            else
            {
                int l_1262 = 0x64608DDCL;
                l_1254 = ((*l_1091) != ((*g_748) ^ (*p_38)));
                g_42 = (safe_add_func_int32_t_s_s((((l_1257 == (*l_1182)) == (p_37 ^ ((safe_sub_func_uint32_t_u_u(0xB40D6CE1L, (*g_855))) ^ p_37))) <= l_1264), (*g_855)));
            }
            l_1275 = ((*l_1274) = &l_1127);
        }
        for (g_366 = 0; (g_366 >= 0); g_366 -= 1)
        {
            int *l_1286 = &g_46[2][1][0];
            const unsigned short *l_1289 = (void*)0;
            int l_1353 = 0xC1B5318BL;
            unsigned ***l_1371 = (void*)0;
            char l_1375 = 0x54L;
            int i;
            (*l_1286) = g_812[(g_366 + 4)];
            (*l_1286) = (0x8DDE4E52L & (((p_37 ^ (*g_748)) != p_37) , ((((*l_1286) | (*p_36)) && g_366) == (*p_36))));
            for (g_269 = 8; (g_269 >= 0); g_269 -= 1)
            {
                int l_1316 = (-5L);
                unsigned char ***l_1321[10][1][7] = {{{&g_164,&g_164,&g_164,&g_164,&g_164,(void*)0,&g_164}},{{&g_164,&g_164,&g_164,&g_164,&g_164,&g_164,&g_164}},{{&g_164,&g_164,&g_164,&g_164,(void*)0,(void*)0,&g_164}},{{&g_164,&g_164,&g_164,&g_164,(void*)0,(void*)0,&g_164}},{{&g_164,&g_164,&g_164,&g_164,&g_164,&g_164,&g_164}},{{&g_164,(void*)0,&g_164,&g_164,&g_164,&g_164,&g_164}},{{&g_164,&g_164,&g_164,&g_164,&g_164,&g_164,&g_164}},{{&g_164,(void*)0,&g_164,&g_164,&g_164,(void*)0,&g_164}},{{&g_164,&g_164,&g_164,&g_164,(void*)0,(void*)0,&g_164}},{{&g_164,(void*)0,&g_164,&g_164,&g_164,&g_164,&g_164}}};
                char *l_1356[8] = {&g_269,&g_655,&g_269,&g_269,&g_655,&g_269,&g_269,&g_655};
                char ****l_1364 = &g_974;
                char *****l_1363 = &l_1364;
                int *l_1365 = &g_46[2][3][0];
                int i, j, k;
                if (g_152[g_269][g_269])
                    break;
                for (g_720 = 0; (g_720 <= 1); g_720 += 1)
                {
                    int **l_1287 = (void*)0;
                    int **l_1288 = &l_1091;
                    const unsigned short **l_1290[8] = {&l_1289,&l_1289,&l_1289,&l_1289,&l_1289,&l_1289,&l_1289,&l_1289};
                    unsigned char *l_1296[7] = {&l_1094,&l_1094,&g_538[4][5],&l_1094,&l_1094,&g_538[4][5],&l_1094};
                    short l_1299 = 0L;
                    int i, j, k;
                    if (g_46[(g_720 + 2)][(g_720 + 1)][g_366])
                        break;
                    (*l_1288) = p_36;
                    g_46[(g_720 + 1)][(g_720 + 5)][g_366] = (((l_1291 = l_1289) == ((g_1263[(g_366 + 1)][(g_366 + 8)][(g_366 + 1)] == (*l_1286)) , (*g_747))) && g_496);
                }
                for (l_1127 = 0; (l_1127 <= 1); l_1127 += 1)
                {
                    int **l_1302 = &l_1286;
                    unsigned char l_1309[7] = {0x41L,0x96L,0x96L,0x41L,0x96L,0x96L,0x41L};
                    short *l_1310[9][6] = {{&g_94,(void*)0,&l_1206[0],&g_720,&g_720,&l_1206[0]},{&g_94,&g_94,&g_720,&l_1206[0],&l_1206[0],&l_1206[0]},{(void*)0,&g_94,(void*)0,&l_1206[0],&g_720,&g_720},{&l_1206[0],(void*)0,(void*)0,&l_1206[0],&g_94,&l_1206[0]},{&l_1206[0],&l_1206[0],&l_1206[0],&l_1206[0],(void*)0,&l_1206[0]},{&l_1206[0],(void*)0,&l_1206[0],&l_1206[0],(void*)0,&l_1206[0]},{&l_1206[0],&l_1206[0],&g_720,(void*)0,&g_720,&l_1206[0]},{&g_720,&l_1206[0],&l_1206[0],&l_1206[0],&l_1206[0],&l_1206[0]},{&g_720,&g_720,&l_1206[0],(void*)0,&g_94,(void*)0}};
                    short *l_1311[4];
                    short *l_1312[10] = {&g_720,&g_720,&g_720,&g_720,&g_720,&g_720,&g_720,&g_720,&g_720,&g_720};
                    short *l_1313 = &l_1206[0];
                    unsigned char *l_1315[2];
                    unsigned char ***l_1323 = &g_164;
                    int i, j;
                    for (i = 0; i < 4; i++)
                        l_1311[i] = (void*)0;
                    for (i = 0; i < 2; i++)
                        l_1315[i] = &g_538[6][2];
                    (*l_1302) = p_36;
                    if ((safe_rshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u((l_1316 = ((safe_sub_func_uint8_t_u_u(p_37, (g_1314 , 0x2EL))) == 0x1428L)), 3UL)), 15)))
                    {
                        unsigned char ****l_1322[1];
                        int l_1327 = 0xE7729143L;
                        char l_1344 = 1L;
                        char *l_1351 = &g_1314;
                        char ** const l_1350 = &l_1351;
                        char ** const *l_1349 = &l_1350;
                        char ** const **l_1348 = &l_1349;
                        char ** const ***l_1347 = &l_1348;
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_1322[i] = (void*)0;
                        if ((**l_1302))
                            break;
                        g_46[(g_366 + 3)][(g_366 + 1)][g_366] = (!(p_37 ^ (*l_1091)));
                        g_46[2][1][0] = (safe_add_func_int8_t_s_s(((safe_add_func_int32_t_s_s(0xE5BE6964L, (l_1327 >= (g_90[l_1127][l_1127] = (((***l_1349) = (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((safe_lshift_func_int16_t_s_s((((*l_1347) = ((safe_mul_func_int16_t_s_s((g_720 = ((*g_855) | (*g_855))), (*p_38))) , (void*)0)) != &l_1182), 0)) ^ 65535UL), l_1301)), g_1263[1][2][1]))) , 7UL))))) < (*l_1091)), (**l_1302)));
                    }
                    else
                    {
                        int *l_1352[3][10][8] = {{{&g_46[1][6][0],&l_1254,&g_5,&g_46[0][6][0],&l_1127,&g_46[0][4][0],&g_5,&l_1254},{&l_1128,&l_1128,&l_1254,&l_1316,&l_1316,(void*)0,&l_1127,&l_1128},{&g_42,&l_1316,&g_46[2][1][0],&g_5,&g_46[2][1][0],&g_5,&l_1128,(void*)0},{&g_46[2][1][0],(void*)0,&g_46[3][2][0],&l_1316,&g_42,&l_1316,(void*)0,&l_1316},{&g_5,&l_1316,(void*)0,&g_366,&g_5,&l_1316,&l_1127,&l_1316},{&g_5,&g_5,&g_46[2][1][0],&l_1316,&g_46[2][1][0],&l_1254,&l_1254,(void*)0},{&l_1128,&l_1254,&g_5,&l_1127,&g_42,&g_5,&g_46[2][1][0],(void*)0},{(void*)0,(void*)0,&l_1316,&g_5,&g_42,&g_46[2][2][0],&l_1254,&g_46[2][2][0]},{&l_1254,&l_1316,(void*)0,&g_46[0][5][0],&g_5,&l_1254,&l_1254,&g_42},{&l_1316,&g_46[2][1][0],&l_1127,&l_1128,&l_1316,&l_1128,(void*)0,&g_46[2][1][0]}},{{&g_42,(void*)0,&g_42,&l_1127,&g_42,&g_46[0][4][0],(void*)0,&l_1128},{&l_1316,(void*)0,&g_46[0][5][0],&g_366,&g_46[0][5][0],(void*)0,&l_1316,(void*)0},{&g_46[2][1][0],&g_366,&g_46[2][1][0],(void*)0,&g_46[2][1][0],&l_1127,&g_42,&g_5},{&g_42,&l_1316,&l_1254,&g_366,&g_46[2][1][0],(void*)0,&g_42,&g_366},{&g_46[2][1][0],&g_46[2][2][0],&l_1127,&g_5,&g_46[0][5][0],&g_42,(void*)0,&l_1254},{&l_1316,&g_5,&l_1127,&l_1254,&g_42,(void*)0,&l_1316,&l_1254},{&g_42,&l_1316,&g_46[0][4][0],&l_1316,&l_1316,&l_1128,&g_46[2][1][0],&l_1316},{&l_1316,&l_1128,&l_1128,(void*)0,&g_5,&g_5,&l_1254,&g_5},{&l_1254,&g_46[2][1][0],(void*)0,&g_46[2][1][0],&g_42,&l_1316,&g_5,&l_1254},{&l_1316,&l_1316,&g_46[2][2][0],&g_46[2][1][0],(void*)0,&l_1254,&g_46[1][4][0],&g_366}},{{&l_1127,(void*)0,&l_1128,&l_1316,(void*)0,&g_42,&l_1316,&g_366},{&l_1254,&g_5,&g_5,&l_1128,&l_1316,(void*)0,&g_42,&l_1316},{(void*)0,&g_42,(void*)0,&g_46[1][4][0],&l_1316,&g_46[2][2][0],&l_1316,&l_1128},{&l_1316,&g_46[1][4][0],&g_42,&g_366,&l_1128,&g_46[2][1][0],&l_1254,(void*)0},{&l_1316,(void*)0,&g_5,&l_1254,&g_46[0][5][0],&l_1128,&g_46[2][2][0],&l_1127},{&g_5,(void*)0,(void*)0,&l_1128,&g_5,&g_46[1][4][0],&g_46[1][4][0],&g_5},{(void*)0,&l_1254,&l_1254,(void*)0,&g_42,&g_46[2][1][0],&l_1127,&g_46[0][5][0]},{&g_42,&g_46[2][1][0],&l_1316,&l_1316,&g_46[2][1][0],(void*)0,&l_1316,&l_1128},{&l_1254,&g_46[2][1][0],(void*)0,&g_46[2][1][0],&g_42,&g_46[2][1][0],&g_46[0][4][0],&g_366},{(void*)0,&l_1254,&g_46[2][1][0],&g_46[2][1][0],&g_46[2][2][0],&g_46[1][4][0],&l_1127,&g_42}}};
                        int i, j, k;
                        l_1353 = (*g_870);
                    }
                    (*l_1302) = p_36;
                }
                if (((*l_1365) = (safe_rshift_func_uint16_t_u_u(((g_655 = 0x06L) < (safe_rshift_func_uint8_t_u_s(((*g_870) && p_37), 1))), p_37))))
                {
                    const unsigned short l_1366[6] = {0xADC9L,0xADC9L,65535UL,0xADC9L,0xADC9L,65535UL};
                    int i;
                    return l_1366[1];
                }
                else
                {
                    (*l_1365) = (l_1254 != (-1L));
                    if ((!((g_720 = (g_94 = g_812[5])) ^ 5UL)))
                    {
                        int **l_1367[3][10][4] = {{{(void*)0,(void*)0,&l_1365,&l_1286},{(void*)0,&g_106,&l_1091,(void*)0},{(void*)0,&l_1286,(void*)0,&l_1091},{&g_240,&l_1286,&l_1365,(void*)0},{&l_1286,&g_106,&g_106,&l_1286},{(void*)0,(void*)0,&g_106,&l_1091},{&l_1286,&g_240,&l_1365,&g_240},{&g_240,&g_106,(void*)0,&g_240},{(void*)0,&g_240,&l_1091,&l_1091},{(void*)0,(void*)0,&l_1365,&l_1286}},{{(void*)0,&g_106,&l_1091,(void*)0},{(void*)0,&l_1286,(void*)0,&l_1091},{&g_240,&l_1286,&l_1365,(void*)0},{&l_1286,&g_106,&g_106,&l_1286},{(void*)0,(void*)0,&g_106,&l_1091},{&l_1286,&g_240,&l_1365,&g_240},{&g_240,&g_106,(void*)0,&g_240},{(void*)0,&g_240,&l_1091,&l_1091},{(void*)0,(void*)0,&l_1365,&l_1286},{(void*)0,&g_106,&l_1091,(void*)0}},{{(void*)0,&l_1286,(void*)0,&l_1091},{&g_240,&l_1286,&l_1365,(void*)0},{&l_1286,&g_106,&g_106,&l_1286},{(void*)0,(void*)0,&g_106,&l_1091},{&l_1286,&l_1286,(void*)0,&l_1286},{&l_1286,(void*)0,&l_1091,&l_1286},{&l_1091,&l_1286,&g_106,&g_106},{&g_240,&g_240,(void*)0,(void*)0},{&g_240,(void*)0,&g_106,&g_240},{&l_1091,(void*)0,&l_1091,&g_106}}};
                        int i, j, k;
                        l_1091 = p_36;
                        return (*l_1091);
                    }
                    else
                    {
                        return (*l_1365);
                    }
                }
            }
            (*l_1286) = (*l_1286);
            for (l_1094 = 0; (l_1094 <= 0); l_1094 += 1)
            {
                for (g_496 = 0; (g_496 <= 0); g_496 += 1)
                {
                    int l_1374 = 0x3025ADC5L;
                    for (l_1254 = 0; (l_1254 >= 0); l_1254 -= 1)
                    {
                        unsigned char *l_1368 = &g_92[1][2][0];
                        unsigned ***l_1372 = &g_854;
                        short *l_1373 = &g_720;
                        int i, j, k;
                        l_1286 = &g_46[g_366][l_1094][l_1094];
                        g_46[(l_1094 + 2)][(g_366 + 4)][g_496] = (l_1374 | l_1375);
                    }
                    g_46[2][1][0] = l_1264;
                    if ((*l_1286))
                        continue;
                }
            }
        }
    }
    else
    {
        const unsigned l_1378 = 1UL;
        for (p_37 = 4; (p_37 >= 0); p_37 -= 1)
        {
            int l_1376[8][6][4] = {{{0L,1L,0x687D4260L,0L},{0xD2ABAFA1L,1L,8L,0x9A75E47DL},{0x16F5F877L,1L,0xC2FA5553L,(-1L)},{0x58375FB6L,0x16F5F877L,0x14E9F4BAL,0xE48F0507L},{0xE574C254L,(-9L),1L,0L},{0x2742BCF1L,7L,6L,1L}},{{(-1L),0L,0L,(-1L)},{0x0A63CFA9L,0x14E9F4BAL,(-8L),4L},{6L,(-1L),(-1L),1L},{7L,1L,0x2742BCF1L,1L},{5L,(-1L),1L,4L},{0x687D4260L,0x14E9F4BAL,0x43E62A8DL,(-1L)}},{{0x71E30E05L,0L,0x124DCB96L,1L},{0x8ABC4083L,7L,0L,0L},{0x7FA50D61L,(-9L),0x9539F735L,0xE48F0507L},{0xC2FA5553L,0x16F5F877L,0x0E18D181L,(-1L)},{0x9539F735L,1L,1L,0x9A75E47DL},{(-7L),1L,0x58CE6FD9L,0L}},{{0xEEECA9A0L,0xE48F0507L,1L,6L},{6L,0x43E62A8DL,(-7L),(-8L)},{0x16F5F877L,0xEEECA9A0L,0x14E9F4BAL,0xA6B99E64L},{0x8ABC4083L,1L,0xEEECA9A0L,1L},{0x4932C20EL,5L,0x58375FB6L,6L},{0xE48F0507L,0xE574C254L,0L,(-7L)}},{{7L,0xD7E6B8C1L,1L,0xD6B9D07BL},{7L,0x0E18D181L,0L,7L},{0xE48F0507L,0xD6B9D07BL,0x58375FB6L,0x3D25EE5CL},{0x4932C20EL,0x687D4260L,0xEEECA9A0L,(-2L)},{0x8ABC4083L,1L,0x14E9F4BAL,1L},{0x16F5F877L,0x2742BCF1L,(-7L),0xD7E6B8C1L}},{{6L,0x124DCB96L,1L,0xD2ABAFA1L},{0xEEECA9A0L,(-1L),0x43E62A8DL,0x14E9F4BAL},{0xE574C254L,0x58CE6FD9L,0x71E30E05L,0L},{0L,(-9L),0L,0x43E62A8DL},{5L,(-7L),0L,0xB5CAEFE8L},{0x14E9F4BAL,1L,0x3D25EE5CL,0x687D4260L}},{{0xB5CAEFE8L,0x0091A38FL,0x0E18D181L,0x0E18D181L},{0L,0L,(-8L),(-10L)},{6L,6L,(-1L),(-1L)},{0xD6B9D07BL,0x9A75E47DL,(-1L),(-1L)},{0x124DCB96L,0x9A75E47DL,1L,(-1L)},{0x9A75E47DL,6L,0xCF2B8C58L,0x58375FB6L}},{{0x14E9F4BAL,0x43E62A8DL,(-1L),0xEEECA9A0L},{0xD7E6B8C1L,0xD6B9D07BL,8L,0x14E9F4BAL},{0x687D4260L,4L,0L,(-7L)},{0xA6B99E64L,1L,0L,1L},{(-8L),0x124DCB96L,0x2742BCF1L,0x43E62A8DL},{0xD2ABAFA1L,0xB5CAEFE8L,7L,0x71E30E05L}}};
            int **l_1377[2];
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1377[i] = (void*)0;
            g_106 = (l_1376[6][4][2] , p_36);
            return p_37;
        }
        return l_1378;
    }
    (*l_1385) = func_59(((*g_855) = (65528UL == (((safe_lshift_func_int16_t_s_u(g_122, p_37)) < 0x2E84L) >= 0L))), (**g_623), (*l_1088), p_37, p_37);
    (*l_1399) = (safe_rshift_func_uint16_t_u_u(((((**l_1385) == p_37) <= p_37) <= (*p_36)), (**g_747)));
    return p_37;
}







static int * func_39(const short * p_40)
{
    char l_41[1];
    short *l_44 = &g_19;
    int *l_58 = &g_46[2][1][0];
    unsigned char ** const l_844 = &g_165;
    unsigned *l_853 = &g_90[4][0];
    unsigned **l_852 = &l_853;
    unsigned l_897 = 18446744073709551606UL;
    int *l_910 = &g_42;
    char ***l_972 = (void*)0;
    char l_991 = (-5L);
    unsigned short l_1051 = 1UL;
    unsigned short **l_1065 = (void*)0;
    char l_1081 = 0xE1L;
    int i;
    for (i = 0; i < 1; i++)
        l_41[i] = 0xD1L;
    for (g_42 = 0; (g_42 <= 0); g_42 += 1)
    {
        int *l_47[2][9] = {{&g_42,&g_42,(void*)0,(void*)0,&g_42,(void*)0,(void*)0,&g_42,&g_42},{(void*)0,&g_42,&g_42,(void*)0,&g_42,&g_42,(void*)0,(void*)0,&g_42}};
        short *l_245 = &g_19;
        unsigned char * const *l_842 = (void*)0;
        unsigned char * const **l_843 = &l_842;
        int l_845 = (-1L);
        int i, j;
        if (l_41[g_42])
            break;
    }
    (*l_58) = ((*l_58) ^ (*l_58));
    if (((**g_747) | (*p_40)))
    {
        unsigned l_848[4][5] = {{0x85BD9F4CL,6UL,0xEE6A09FEL,6UL,0x85BD9F4CL},{0x6F586F80L,0xFBBC128DL,0x1EFCB55DL,18446744073709551609UL,0xFBBC128DL},{0x85BD9F4CL,0x1EFCB55DL,0x1EFCB55DL,0x85BD9F4CL,18446744073709551609UL},{6UL,0x85BD9F4CL,0xEE6A09FEL,0xFBBC128DL,0xFBBC128DL}};
        int *l_883 = &g_5;
        const unsigned l_900[5] = {4294967295UL,4294967295UL,4294967295UL,4294967295UL,4294967295UL};
        unsigned char l_922 = 0xCCL;
        unsigned l_948[1][10][6] = {{{18446744073709551612UL,0x251A1A0CL,0xD7849DBEL,18446744073709551612UL,0xD7849DBEL,0x251A1A0CL},{1UL,0x251A1A0CL,18446744073709551615UL,1UL,0xD7849DBEL,0xD7849DBEL},{18446744073709551615UL,0x251A1A0CL,0x251A1A0CL,18446744073709551615UL,0xD7849DBEL,18446744073709551615UL},{18446744073709551612UL,0x251A1A0CL,0xD7849DBEL,18446744073709551612UL,0xD7849DBEL,0x251A1A0CL},{1UL,0x251A1A0CL,18446744073709551615UL,1UL,0UL,0UL},{0xD7849DBEL,0xD898C85BL,0xD898C85BL,0xD7849DBEL,0UL,0UL},{0x251A1A0CL,0xD898C85BL,0UL,0x251A1A0CL,0UL,0xD898C85BL},{18446744073709551615UL,0xD898C85BL,0UL,18446744073709551615UL,0UL,0UL},{0xD7849DBEL,0xD898C85BL,0xD898C85BL,0xD7849DBEL,0UL,0UL},{0x251A1A0CL,0xD898C85BL,0UL,0x251A1A0CL,0UL,0xD898C85BL}}};
        int l_953 = 7L;
        short *l_977 = &g_19;
        unsigned short ***l_982[4][1];
        unsigned char *l_989 = &g_538[7][5];
        char *l_990[5];
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_982[i][j] = &g_747;
        }
        for (i = 0; i < 5; i++)
            l_990[i] = &l_41[0];
        for (g_705 = 0; (g_705 != 6); g_705 = safe_add_func_int16_t_s_s(g_705, 7))
        {
            unsigned *l_850 = &g_122;
            unsigned **l_849 = &l_850;
            unsigned ***l_851[2][2][5] = {{{&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849}},{{&l_849,&l_849,&l_849,&l_849,&l_849},{&l_849,&l_849,&l_849,&l_849,&l_849}}};
            int l_873[4];
            int l_878 = 0xFA0C10C4L;
            short l_917 = 0xBA7FL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_873[i] = (-9L);
            g_854 = (l_852 = (l_848[3][3] , l_849));
            for (g_42 = 2; (g_42 != (-8)); g_42--)
            {
                for (g_43 = 24; (g_43 > 10); g_43 = safe_sub_func_uint32_t_u_u(g_43, 3))
                {
                    for (g_122 = 0; (g_122 == 56); ++g_122)
                    {
                        const unsigned ***l_864 = &g_862;
                        const unsigned **l_866 = (void*)0;
                        const unsigned ***l_865 = &l_866;
                        if ((*g_240))
                            break;
                        (*l_865) = ((*l_864) = g_862);
                        return l_58;
                    }
                }
            }
            for (g_42 = 1; (g_42 >= 0); g_42 -= 1)
            {
                const int *l_868 = &g_46[1][3][0];
                const int **l_869 = (void*)0;
                unsigned **l_879 = &g_855;
                unsigned l_880 = 18446744073709551611UL;
                short *l_881 = &g_94;
                short *l_882 = &g_720;
                int l_899[6][3] = {{1L,0x80C6DEFAL,1L},{0L,0L,0L},{0x40A4C697L,0x80C6DEFAL,0x40A4C697L},{0L,0L,0L},{1L,0x80C6DEFAL,1L},{0L,0L,0L}};
                int i, j;
                for (g_43 = 0; (g_43 <= 3); g_43 += 1)
                {
                    for (g_94 = 0; (g_94 <= 3); g_94 += 1)
                    {
                        return &g_5;
                    }
                    for (g_94 = 3; (g_94 >= 0); g_94 -= 1)
                    {
                        int **l_867 = &g_240;
                        g_106 = ((*l_867) = l_58);
                    }
                }
                if ((*g_106))
                    continue;
                g_870 = l_868;
            }
        }
        if ((*l_58))
        {
            short l_920 = 0x9E01L;
            int l_923[8][2];
            char ****l_924 = &g_776;
            unsigned **l_944 = &l_853;
            char *l_954 = &g_269;
            char *l_955 = &g_655;
            char *l_960 = &l_41[0];
            int i, j;
            for (i = 0; i < 8; i++)
            {
                for (j = 0; j < 2; j++)
                    l_923[i][j] = 0xC8814885L;
            }
            if (((((((*g_748) = ((((((*l_58) , (safe_mod_func_int16_t_s_s(((*l_58) = (func_65(l_920, (l_923[3][0] = ((*l_883) , ((safe_unary_minus_func_int16_t_s(g_92[5][2][0])) , (l_922 = (*l_58))))), l_920, (l_920 >= (((*l_58) , (l_924 == &g_776)) , (*l_883))), (*l_58)) || (-1L))), 1UL))) & (*l_910)) == 1L) ^ l_920) & l_920)) , (*l_910)) <= l_920) ^ 0L) != l_920))
            {
                (*l_910) = (*g_870);
            }
            else
            {
                unsigned char l_938 = 0x48L;
                int l_945 = 0x5CC11B49L;
                int *l_949 = &g_46[2][1][0];
                (*l_910) = (safe_rshift_func_uint16_t_u_s((**g_747), (safe_rshift_func_int16_t_s_u(((+l_923[3][0]) >= ((*l_883) > ((*l_910) && (*l_883)))), 15))));
                for (g_94 = 0; (g_94 >= 10); g_94 = safe_add_func_uint8_t_u_u(g_94, 3))
                {
                    char l_931 = 0xC4L;
                    unsigned **l_943 = &g_855;
                    short *l_946 = (void*)0;
                    int l_947[8][7] = {{0L,(-8L),(-1L),0xCEDA6E31L,0xCEDA6E31L,(-1L),(-8L)},{0L,0xFF2BA59AL,(-2L),0x1D57F798L,0x1D57F798L,(-2L),0xFF2BA59AL},{0L,(-8L),(-1L),0xCEDA6E31L,0xCEDA6E31L,(-1L),(-8L)},{0L,0xFF2BA59AL,(-2L),0x1D57F798L,(-2L),(-4L),1L},{0xCEDA6E31L,0x6AB529DCL,0xE75795D2L,(-1L),(-1L),0xE75795D2L,0x6AB529DCL},{0x1D57F798L,1L,(-4L),(-2L),(-2L),(-4L),1L},{0xCEDA6E31L,0x6AB529DCL,0xE75795D2L,(-1L),(-1L),0xE75795D2L,0x6AB529DCL},{0x1D57F798L,1L,(-4L),(-2L),(-2L),(-4L),1L}};
                    int **l_950 = &l_883;
                    int i, j;
                    (*l_58) = l_931;
                    if (l_931)
                        continue;
                    (*l_58) = ((((l_947[0][4] = ((l_920 ^ ((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s((g_655 = (~l_938)), 2)) && ((safe_mul_func_uint16_t_u_u(((!(safe_mul_func_uint8_t_u_u(((*l_58) , (l_923[3][0] = l_938)), (((l_944 = l_943) == &g_855) >= ((g_46[0][2][0] , 0UL) >= (((*l_883) >= l_938) | l_931)))))) <= 1L), l_945)) >= l_931)), 3)) >= l_945)) , (*p_40))) && l_948[0][5][1]) | g_496) > l_938);
                    (*l_950) = l_949;
                }
            }
            (*l_58) = (((*l_58) || ((*l_955) = ((*l_954) = ((safe_add_func_uint16_t_u_u(((*g_870) == (l_923[1][0] , ((*g_855) = l_953))), (*l_883))) || (*g_855))))) < ((*l_960) = (safe_rshift_func_int16_t_s_u(g_496, (l_920 | ((((((safe_sub_func_uint8_t_u_u((*l_58), l_923[3][0])) != 0x30L) < (*l_883)) , l_923[1][0]) == 2UL) , 0xD465L))))));
        }
        else
        {
            unsigned l_963 = 0x9FB47020L;
            int l_970 = 0L;
            unsigned l_971[6][3] = {{1UL,2UL,1UL},{0xCC5F0B83L,0UL,0UL},{1UL,2UL,1UL},{0xCC5F0B83L,0xCC5F0B83L,0UL},{1UL,2UL,1UL},{0xCC5F0B83L,0UL,0UL}};
            char ****l_973[2][7] = {{&g_776,&g_776,&g_776,&g_776,(void*)0,&g_776,&g_776},{&g_776,&g_776,&g_776,&l_972,&g_776,&g_776,&g_776}};
            short *l_975 = &g_720;
            int * const l_976 = &g_42;
            int i, j;
            (*g_106) = (*l_883);
            (*l_910) = ((safe_mod_func_uint16_t_u_u((*l_883), 7L)) & (*p_40));
            (*l_976) = (((*l_975) = ((g_776 = (l_972 = l_972)) != (g_974 = &g_777))) > (l_976 == ((*g_855) , func_59((*l_976), ((((*l_58) > ((*g_855) = (((**g_747) & ((*l_976) | ((**g_862) , 1UL))) > 0x74L))) < 8L) , 0x8CB94658L), l_977, (*l_976), (*l_883)))));
        }
        g_366 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_s((l_982[3][0] == ((0UL > (~((*l_910) >= (*l_883)))) , l_982[1][0])), 3)) > 0x2EL), (*l_910)));
    }
    else
    {
        int **l_992 = (void*)0;
        int **l_993 = &g_240;
        int l_1005[3];
        short *l_1026 = &g_94;
        int l_1046 = (-1L);
        const unsigned char l_1052 = 0xF1L;
        unsigned l_1073 = 0x3AB3A629L;
        int i;
        for (i = 0; i < 3; i++)
            l_1005[i] = 2L;
        (*l_993) = &g_366;
        (*g_106) = (-1L);
        for (g_496 = 17; (g_496 < 5); g_496 = safe_sub_func_uint32_t_u_u(g_496, 1))
        {
            char l_998 = 0L;
            int *l_1022 = &g_46[2][2][0];
            int l_1060[3];
            unsigned char l_1079 = 251UL;
            short *l_1083 = &g_720;
            int i;
            for (i = 0; i < 3; i++)
                l_1060[i] = 0x6948EBC8L;
        }
    }
    return l_58;
}







static int * func_48(int * p_49, short * p_50, int * p_51, short * p_52, int p_53)
{
    int **l_587 = &g_106;
    int *l_603 = &g_235[3];
    int **l_604 = &l_603;
    const int *l_606 = &g_607;
    const int **l_605 = &l_606;
    char *l_609 = &g_269;
    char **l_608 = &l_609;
    unsigned char *l_610 = &g_538[9][3];
    unsigned *l_611[7][4][5] = {{{&g_105,(void*)0,(void*)0,&g_105,(void*)0},{(void*)0,&g_496,&g_105,&g_105,&g_105},{(void*)0,&g_105,&g_105,&g_105,&g_105},{&g_496,&g_105,&g_105,&g_105,&g_105}},{{&g_105,(void*)0,&g_496,&g_105,(void*)0},{&g_105,&g_496,&g_105,(void*)0,(void*)0},{&g_496,&g_105,&g_105,&g_105,(void*)0},{(void*)0,&g_105,&g_496,&g_105,&g_105}},{{(void*)0,&g_105,(void*)0,(void*)0,&g_105},{(void*)0,&g_105,&g_496,&g_496,(void*)0},{(void*)0,&g_496,&g_105,&g_105,&g_105},{&g_496,&g_105,(void*)0,(void*)0,&g_105}},{{(void*)0,(void*)0,&g_105,&g_105,&g_105},{&g_496,&g_105,&g_496,&g_105,&g_496},{(void*)0,&g_105,&g_496,&g_105,(void*)0},{&g_496,(void*)0,&g_496,&g_496,&g_105}},{{(void*)0,(void*)0,&g_105,&g_105,&g_105},{&g_496,&g_496,&g_496,&g_105,(void*)0},{(void*)0,&g_105,&g_105,(void*)0,(void*)0},{(void*)0,&g_105,&g_105,(void*)0,&g_496}},{{(void*)0,&g_105,(void*)0,&g_105,(void*)0},{(void*)0,&g_105,(void*)0,&g_105,&g_105},{&g_105,&g_496,&g_105,&g_105,&g_105},{(void*)0,(void*)0,(void*)0,&g_496,&g_105}},{{&g_496,(void*)0,&g_496,(void*)0,&g_496},{&g_105,&g_105,&g_496,&g_105,&g_105},{&g_105,&g_105,&g_496,&g_105,(void*)0},{&g_105,&g_496,&g_496,(void*)0,&g_496}}};
    int l_637 = 0x0A5F1A5CL;
    unsigned l_685 = 0x6E195AD1L;
    char l_736 = 0x57L;
    unsigned short **l_754 = &g_748;
    char ***l_764 = &l_608;
    char ****l_763 = &l_764;
    short *l_793 = (void*)0;
    short **l_792[8][1] = {{&l_793},{&l_793},{&l_793},{&l_793},{&l_793},{&l_793},{&l_793},{&l_793}};
    short ***l_791 = &l_792[2][0];
    short l_826 = 0xCE22L;
    int i, j, k;
    p_49 = &g_46[2][1][0];
    (*l_587) = &g_5;
    if ((safe_lshift_func_uint16_t_u_s((((g_105 = p_53) , p_53) , (**l_587)), (**l_587))))
    {
        return &g_46[2][1][0];
    }
    else
    {
        unsigned l_617 = 1UL;
        int **l_635 = &g_106;
        int **l_636 = &g_240;
        int l_735 = (-8L);
        short *l_790[9][8][3] = {{{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0},{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0},{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0},{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0}},{{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0},{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0},{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0},{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0}},{{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0},{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0},{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0},{&g_19,&g_94,&g_19},{(void*)0,(void*)0,(void*)0}},{{&g_19,&g_94,&g_19},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19}},{{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19}},{{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19}},{{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19}},{{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19}},{{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19},{&g_94,&g_19,&g_94},{&g_19,(void*)0,&g_19}}};
        short **l_789 = &l_790[7][3][0];
        short ***l_788[3][2];
        int *l_811 = &g_46[0][3][0];
        char * const l_818 = (void*)0;
        char * const *l_817 = &l_818;
        unsigned short l_819 = 0x38CBL;
        short **l_823[1];
        int l_833 = (-6L);
        unsigned *l_834 = &g_812[2];
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 2; j++)
                l_788[i][j] = &l_789;
        }
        for (i = 0; i < 1; i++)
            l_823[i] = &l_790[7][3][0];
        for (g_94 = 4; (g_94 < 2); g_94--)
        {
            const unsigned short l_622 = 6UL;
            int *l_638 = &g_46[2][1][0];
            char **l_642 = &l_609;
            int *l_663 = (void*)0;
            int *l_664 = &l_637;
            unsigned *l_683 = (void*)0;
            unsigned *l_684[10][5] = {{&g_90[1][0],(void*)0,&g_90[1][0],&g_90[3][0],(void*)0},{&g_122,&g_90[3][1],&g_90[3][1],&g_122,&g_90[3][1]},{(void*)0,(void*)0,&g_90[0][0],(void*)0,(void*)0},{&g_90[3][1],&g_122,&g_90[3][1],&g_90[3][1],&g_122},{(void*)0,&g_90[3][0],&g_90[1][0],(void*)0,&g_90[1][0]},{&g_122,&g_122,&g_90[3][1],&g_122,&g_122},{&g_90[1][0],(void*)0,&g_90[1][0],&g_90[3][0],(void*)0},{&g_122,&g_90[3][1],&g_90[3][1],&g_122,&g_90[3][1]},{(void*)0,(void*)0,&g_90[0][0],(void*)0,(void*)0},{&g_90[3][1],&g_122,&g_90[3][1],&g_90[3][1],&g_90[3][1]}};
            unsigned short *l_688 = &g_152[7][4];
            unsigned short **l_687 = &l_688;
            int l_715 = (-1L);
            unsigned short l_732 = 0UL;
            int i, j;
        }
        (*l_587) = func_59(((*l_834) = ((l_823[0] == (((*g_748) , ((safe_lshift_func_uint8_t_u_s(((l_826 == (**l_587)) >= ((*g_748) <= ((safe_sub_func_int16_t_s_s((*p_52), (p_53 > ((safe_rshift_func_uint8_t_u_u(0x7FL, ((void*)0 == (*l_587)))) >= g_152[7][4])))) , 0xE188L))), 2)) >= (**l_587))) , &g_342)) , l_833)), (**l_587), &g_19, p_53, p_53);
    }
    return (*l_587);
}







static short * func_54(int * p_55, int * p_56, short * p_57)
{
    short l_321 = 0x3F4DL;
    char * const **l_332 = (void*)0;
    int *l_362 = &g_5;
    int l_518 = (-4L);
    int l_525 = 1L;
    unsigned l_551 = 18446744073709551611UL;
    short l_552 = (-1L);
    const unsigned l_553 = 0x6E33EB2FL;
    int **l_554[3][10][8] = {{{&g_240,&l_362,&g_106,&g_240,&g_106,&g_106,&l_362,&g_240},{&g_240,&g_240,&g_106,&l_362,&g_106,&g_240,&g_240,&l_362},{&g_106,&g_240,&g_240,&l_362,(void*)0,&g_106,(void*)0,&l_362},{&g_106,&l_362,&g_240,&l_362,(void*)0,&l_362,(void*)0,&l_362},{&g_106,&l_362,&g_106,&l_362,&g_106,&g_240,&g_106,&l_362},{&g_240,&g_106,(void*)0,&l_362,&g_106,&g_240,(void*)0,&l_362},{&g_240,&g_240,(void*)0,&l_362,&g_106,&l_362,&g_106,&l_362},{&g_106,&l_362,&g_106,&l_362,(void*)0,&l_362,(void*)0,&g_240},{(void*)0,&g_240,&g_240,&g_240,&l_362,&g_240,(void*)0,&l_362},{(void*)0,&g_106,&g_240,&g_240,(void*)0,&g_240,&g_240,&g_106}},{{&g_106,&l_362,&g_106,&g_240,&g_106,&l_362,&l_362,&l_362},{&g_240,&l_362,&g_106,&g_240,&g_106,&g_106,&l_362,&g_240},{(void*)0,&l_362,&l_362,&l_362,&l_362,&l_362,(void*)0,&g_240},{&l_362,&l_362,(void*)0,&g_240,&g_106,&l_362,(void*)0,&g_106},{&g_240,&l_362,&g_240,&l_362,&g_106,&l_362,&g_240,&l_362},{&l_362,&g_106,&g_106,&g_106,&l_362,&l_362,&g_240,&l_362},{(void*)0,&l_362,&g_240,&l_362,&g_106,&g_240,&g_106,&g_106},{&g_240,&l_362,&g_240,&g_240,&g_240,&g_240,&g_240,&g_240},{&g_106,&l_362,&g_106,&l_362,(void*)0,&g_240,&g_240,&g_240},{&g_240,&l_362,&g_240,&l_362,&l_362,&g_240,(void*)0,&l_362}},{{&g_240,&l_362,(void*)0,&l_362,(void*)0,&l_362,(void*)0,&l_362},{&g_106,&g_106,&l_362,&l_362,&g_240,&l_362,(void*)0,&l_362},{&g_240,&l_362,&g_240,&l_362,&g_106,&l_362,(void*)0,&g_240},{(void*)0,&l_362,&l_362,&l_362,&l_362,&l_362,&g_240,&g_106},{(void*)0,&l_362,&g_240,&g_106,&g_106,&l_362,(void*)0,&l_362},{&l_362,&l_362,&g_106,&g_240,&g_106,&l_362,&g_106,&l_362},{(void*)0,&l_362,&l_362,&l_362,(void*)0,&g_240,&l_362,&l_362},{&g_240,&l_362,&g_106,&g_240,&l_362,&l_362,&g_106,&l_362},{&g_106,&g_240,&g_106,&g_106,&l_362,&g_240,&l_362,&g_106},{&l_362,&l_362,&l_362,&l_362,(void*)0,&g_240,&g_106,&l_362}}};
    int l_563 = (-2L);
    unsigned char l_569 = 8UL;
    int *l_575 = &g_235[0];
    char l_584 = 0x77L;
    unsigned *l_585 = &g_43;
    unsigned l_586[9][4] = {{0xAA942626L,7UL,7UL,0xAA942626L},{0xC513C96BL,0xEEDC58E0L,7UL,4294967290UL},{0xAA942626L,0xF9C9B86DL,0x00BB6C09L,0xF9C9B86DL},{0xF9C9B86DL,7UL,0xC513C96BL,0xF9C9B86DL},{0xC513C96BL,0xF9C9B86DL,4294967290UL,4294967290UL},{0xEEDC58E0L,0xEEDC58E0L,0x00BB6C09L,0xAA942626L},{0xEEDC58E0L,7UL,4294967290UL,0xEEDC58E0L},{0xC513C96BL,0xAA942626L,0xC513C96BL,4294967290UL},{0xF9C9B86DL,0xAA942626L,0x00BB6C09L,0xEEDC58E0L}};
    int i, j, k;
    for (g_94 = 0; (g_94 == (-21)); g_94 = safe_sub_func_uint32_t_u_u(g_94, 8))
    {
        int l_316[9][4] = {{0x22254527L,5L,0x6190955EL,0x930764D2L},{0x6190955EL,0x930764D2L,0x6190955EL,5L},{0x22254527L,0x930764D2L,(-9L),0x930764D2L},{0x22254527L,5L,0x6190955EL,0x930764D2L},{0x6190955EL,0x930764D2L,0x6190955EL,5L},{0x22254527L,0x930764D2L,(-9L),0x930764D2L},{0x22254527L,5L,0x6190955EL,0x930764D2L},{0x6190955EL,0x930764D2L,0x6190955EL,5L},{0x22254527L,0x930764D2L,(-9L),0x930764D2L}};
        char * const l_337 = &g_269;
        int *l_364 = (void*)0;
        unsigned char *l_373 = (void*)0;
        int **l_503 = &l_364;
        const short l_513 = (-1L);
        int i, j;
        (*p_55) = (*p_56);
        if (l_316[8][0])
        {
            const char *l_336 = &g_269;
            int l_348 = 0x7E79E6F6L;
            int *l_365 = &g_42;
            unsigned char *l_372[5] = {&g_92[7][0][0],&g_92[7][0][0],&g_92[7][0][0],&g_92[7][0][0],&g_92[7][0][0]};
            int i;
            for (g_43 = 0; (g_43 >= 5); g_43 = safe_add_func_int16_t_s_s(g_43, 1))
            {
                int **l_319 = &g_106;
                int **l_320 = &g_240;
                (*l_319) = &g_42;
                (*l_320) = ((*l_319) = &g_46[0][4][0]);
                (*g_106) = 8L;
            }
            if (l_321)
            {
                char l_331 = 1L;
                int l_338[5][6][1] = {{{0L},{0x27CA51E5L},{0L},{0x637181D8L},{0L},{0x27CA51E5L}},{{0L},{0x637181D8L},{0L},{0x27CA51E5L},{0L},{0x637181D8L}},{{0L},{0x27CA51E5L},{0L},{0x637181D8L},{0L},{0x27CA51E5L}},{{0L},{0x637181D8L},{0L},{0x27CA51E5L},{0L},{0x637181D8L}},{{0L},{0x27CA51E5L},{0L},{0x637181D8L},{0L},{0x27CA51E5L}}};
                unsigned l_339 = 2UL;
                char l_349 = 0x24L;
                int l_355 = 0L;
                int i, j, k;
                for (g_269 = 0; (g_269 == 29); g_269 = safe_add_func_uint32_t_u_u(g_269, 1))
                {
                    const int l_326 = 1L;
                    char * const ***l_333 = (void*)0;
                    char * const ***l_334 = &l_332;
                    short *l_335 = &l_321;
                    int **l_363[1][6][9] = {{{&l_362,&g_240,&g_106,&g_106,&g_240,&l_362,&g_240,&l_362,&g_240},{&g_240,&l_362,&l_362,&g_240,&g_106,&l_362,&g_106,&g_240,&l_362},{(void*)0,(void*)0,&g_240,&g_240,&g_240,&g_240,&g_240,(void*)0,(void*)0},{&l_362,&g_240,&g_106,&l_362,&g_106,&g_240,&l_362,&g_240,&l_362},{&g_240,&g_240,&g_240,&g_240,&g_240,(void*)0,(void*)0,&g_240,&g_240},{&g_240,&g_240,&g_240,&g_106,(void*)0,(void*)0,&g_106,&g_240,&g_240}}};
                    int i, j, k;
                    if ((l_338[1][0][0] = (safe_mul_func_uint16_t_u_u(g_90[3][0], (l_326 == (((+(((safe_lshift_func_uint8_t_u_u(((*p_57) , ((((*l_335) = ((safe_lshift_func_int16_t_s_s(l_331, (((*l_334) = l_332) == (void*)0))) , (*p_57))) , l_336) != l_337)), 5)) > 1L) >= (*p_56))) ^ 1UL) | g_42))))))
                    {
                        return &g_19;
                    }
                    else
                    {
                        int *l_340 = &g_235[0];
                        int **l_350 = &g_106;
                        (*p_55) = ((((g_152[7][4] > ((((*l_340) = ((*p_57) >= ((&g_106 == &g_240) & (l_339 , (*p_57))))) , g_341) == &g_342)) | (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(l_321, l_316[7][3])), 2))) < 252UL) == l_316[8][0]);
                        if ((*p_56))
                            break;
                        (*l_350) = ((l_348 != l_349) , &l_338[1][0][0]);
                        (*l_350) = &g_46[2][1][0];
                    }
                    (*g_106) = ((*p_55) | (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(l_348, 7)), (l_355 < (safe_mod_func_uint8_t_u_u(l_326, ((safe_add_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((((((g_240 = (l_364 = l_362)) != l_365) != 0xC9AEL) < (*l_362)) & (l_316[2][0] = (g_366 = (l_355 <= g_46[2][1][0])))), 4294967295UL)) , (*l_362)), (*l_362))) | (*l_362))))))));
                }
                for (l_349 = 17; (l_349 != 21); ++l_349)
                {
                    unsigned char l_369 = 246UL;
                    int l_370[5];
                    unsigned l_385 = 18446744073709551615UL;
                    int **l_386 = &l_365;
                    int i;
                    for (i = 0; i < 5; i++)
                        l_370[i] = 0x3AF0021FL;
                    l_370[3] = ((*p_55) = l_369);
                    if ((*l_362))
                    {
                        int **l_371 = &g_106;
                        (*l_371) = p_55;
                    }
                    else
                    {
                        short *l_383 = (void*)0;
                        short *l_384[9][3] = {{&l_321,&l_321,(void*)0},{&l_321,&l_321,&l_321},{&g_19,&l_321,&l_321},{&l_321,&l_321,(void*)0},{&g_19,&l_321,&g_19},{&l_321,&l_321,(void*)0},{&l_321,&l_321,&l_321},{&g_19,&l_321,&l_321},{&l_321,&l_321,(void*)0}};
                        int i, j;
                        if ((*l_362))
                            break;
                        if ((*l_362))
                            break;
                        (*p_55) = ((((l_373 = l_372[1]) == ((*l_362) , (((((safe_mul_func_int16_t_s_s(0x0735L, 0x782DL)) != ((*p_57) == 0x1A6EL)) || (l_385 = ((safe_sub_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((*l_362), (1L <= (*p_55)))), g_382)) >= 0L))) != l_370[1]) , l_337))) & 0UL) >= g_46[2][1][0]);
                    }
                    for (l_321 = 0; l_321 < 4; l_321 += 1)
                    {
                        for (g_105 = 0; g_105 < 7; g_105 += 1)
                        {
                            for (g_122 = 0; g_122 < 1; g_122 += 1)
                            {
                                g_46[l_321][g_105][g_122] = 0x59D83285L;
                            }
                        }
                    }
                    (*l_386) = &g_366;
                }
            }
            else
            {
                if ((*p_55))
                    break;
            }
            (*p_55) = (*l_365);
            for (g_382 = (-3); (g_382 < 46); ++g_382)
            {
                unsigned l_411 = 0UL;
                const unsigned l_414 = 0xC8B267BAL;
            }
        }
        else
        {
            volatile short ***l_436 = (void*)0;
            volatile short ***l_437 = &g_341;
            int l_442 = (-1L);
            const char * const **l_451 = (void*)0;
            int l_491 = 1L;
            short *l_502 = &l_321;
            (*l_437) = &g_342;
            for (g_122 = (-1); (g_122 <= 57); g_122 = safe_add_func_uint8_t_u_u(g_122, 2))
            {
                int l_460 = (-10L);
                char *l_472[2];
                char **l_471 = &l_472[0];
                int l_490[10] = {0L,0L,0L,2L,2L,0L,0L,0L,2L,2L};
                int i;
                for (i = 0; i < 2; i++)
                    l_472[i] = &g_269;
                l_442 = (safe_mod_func_int32_t_s_s((*p_55), l_442));
                if ((*p_56))
                {
                    return &g_19;
                }
                else
                {
                    const char * const ***l_452 = &l_451;
                    const char * const **l_454 = (void*)0;
                    const char * const ***l_453[6] = {&l_454,&l_454,&l_454,&l_454,&l_454,&l_454};
                    short *l_463 = &l_321;
                    int i;
                    (*p_55) = (safe_mul_func_int8_t_s_s(g_90[4][1], ((g_197 == ((safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((*l_463) = (safe_rshift_func_uint16_t_u_s((&g_197 != (g_455 = ((*l_452) = l_451))), (g_42 >= ((l_442 != (safe_add_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_460 >= l_460), ((safe_add_func_int16_t_s_s(((l_460 , (*p_57)) || 1UL), l_442)) , (*p_55)))), 1L))) && g_46[1][4][0]))))), g_235[3])), 0x42L)) , (void*)0)) , 4L)));
                    (*p_55) = l_442;
                }
                if ((*p_56))
                    break;
            }
            return &g_94;
        }
        (*l_503) = ((p_55 == &g_235[3]) , l_362);
        if (((g_90[1][1] >= 2L) , g_92[5][2][0]))
        {
            for (g_496 = (-22); (g_496 != 7); g_496++)
            {
                for (g_105 = 0; (g_105 <= 6); g_105 += 1)
                {
                    (*l_503) = p_55;
                }
                (*l_503) = (void*)0;
                return p_57;
            }
        }
        else
        {
            const unsigned short l_521[6] = {0UL,0UL,0UL,0UL,0UL,0UL};
            unsigned l_522 = 2UL;
            int *l_528[4][7] = {{(void*)0,&l_518,&l_518,(void*)0,&l_518,&l_518,(void*)0},{&l_518,(void*)0,&l_518,&l_518,(void*)0,&l_518,&l_518},{(void*)0,(void*)0,&g_46[2][1][0],(void*)0,(void*)0,&g_46[2][1][0],(void*)0},{(void*)0,&l_518,&l_518,(void*)0,&l_518,&l_518,(void*)0}};
            int i, j;
            for (l_321 = 0; (l_321 <= 3); l_321 = safe_add_func_int16_t_s_s(l_321, 8))
            {
                unsigned char l_508 = 0xB9L;
                unsigned *l_523 = &g_90[4][0];
                unsigned short *l_524 = &g_152[2][8];
                (*p_55) = (l_508 , ((safe_mod_func_uint16_t_u_u((g_94 | (safe_mul_func_uint8_t_u_u(l_513, (g_235[5] < (((safe_sub_func_uint32_t_u_u(((safe_add_func_uint8_t_u_u((l_518 = (*l_362)), ((-1L) | (safe_mul_func_int8_t_s_s(((!((*l_524) = ((l_521[3] & ((*l_523) = l_522)) | g_105))) , (*l_364)), l_522))))) , (*l_362)), g_496)) , 0xFEE52BB2L) > (*l_364)))))), 0x1BCCL)) | (*p_57)));
                (*p_55) = l_525;
            }
            for (g_496 = 0; (g_496 > 22); g_496 = safe_add_func_uint32_t_u_u(g_496, 1))
            {
                return p_57;
            }
            l_528[3][6] = &l_518;
            for (g_496 = (-22); (g_496 >= 28); g_496 = safe_add_func_uint8_t_u_u(g_496, 3))
            {
                for (g_269 = 0; (g_269 <= 1); g_269 += 1)
                {
                    const int * const l_531 = (void*)0;
                    for (g_122 = 0; (g_122 <= 1); g_122 += 1)
                    {
                        const int *l_533 = &g_42;
                        const int **l_532 = &l_533;
                        int i, j;
                        (*l_532) = (g_90[g_269][g_122] , l_531);
                        (*l_503) = &g_46[2][1][0];
                    }
                    for (g_382 = 0; (g_382 <= 0); g_382 += 1)
                    {
                        char *l_535 = (void*)0;
                        char **l_534 = &l_535;
                        int l_536[8];
                        unsigned char *l_537 = &g_538[7][5];
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_536[i] = 0x5C5ECB5EL;
                        (*l_503) = l_528[3][1];
                        (*p_55) = ((0x7726L == g_152[(g_382 + 3)][g_269]) , (g_92[(g_269 + 3)][(g_269 + 5)][g_382] > ((((*l_537) = (((*l_534) = &g_269) != (((g_92[(g_382 + 3)][(g_269 + 5)][g_382] == l_536[2]) , 18446744073709551606UL) , l_373))) || g_92[5][2][0]) == 0x0928L)));
                        (*l_503) = (*l_503);
                        (*l_503) = p_55;
                    }
                }
            }
        }
    }
    p_56 = func_59(g_5, (4L == (g_366 && (*l_362))), &g_94, l_553, (*l_362));
    for (g_496 = 9; (g_496 == 60); g_496 = safe_add_func_int8_t_s_s(g_496, 1))
    {
        int l_560 = 0xEC07C795L;
        int *l_570 = &g_366;
        int *l_571 = &g_366;
        int ***l_572 = &l_554[2][5][6];
        for (l_321 = 0; (l_321 >= (-20)); l_321 = safe_sub_func_int16_t_s_s(l_321, 6))
        {
            int l_559 = 0x79FCE088L;
            short *l_568 = &l_552;
            p_56 = &g_46[2][1][0];
            g_366 = ((*p_56) = (g_538[7][5] , l_569));
            g_366 = ((*p_56) = l_560);
        }
        l_571 = (l_560 , l_570);
        (*p_55) = (*l_570);
        (*l_572) = &p_56;
    }
    p_56 = ((&p_56 != (void*)0) , func_59((*l_362), g_366, ((g_43 , g_105) , p_57), g_43, (*l_362)));
    return p_57;
}







static int * func_59(unsigned p_60, int p_61, short * p_62, const unsigned p_63, unsigned p_64)
{
    int *l_253 = &g_5;
    char *l_270 = &g_269;
    int l_271 = 0x4B9C1E0AL;
    int **l_276 = &g_106;
    int l_304 = 9L;
    if (p_64)
    {
        int *l_251 = &g_46[3][6][0];
        for (p_61 = (-5); (p_61 > (-28)); p_61 = safe_sub_func_int16_t_s_s(p_61, 4))
        {
            int **l_248 = (void*)0;
            int **l_249 = (void*)0;
            int **l_250 = (void*)0;
            int **l_252 = &l_251;
            l_251 = &g_46[2][1][0];
            (*l_252) = &g_46[2][5][0];
            for (g_105 = 0; (g_105 <= 1); g_105 += 1)
            {
                int *l_254 = (void*)0;
                int *l_255[9][7] = {{&g_46[2][1][0],&g_5,(void*)0,&g_42,&g_46[3][2][0],&g_46[3][2][0],&g_42},{&g_5,(void*)0,&g_5,&g_42,&g_42,&g_46[2][1][0],&g_5},{&g_5,&g_46[2][1][0],&g_42,&g_5,&g_5,(void*)0,&g_46[2][1][0]},{&g_46[2][1][0],&g_46[2][1][0],&g_46[3][0][0],&g_46[3][0][0],&g_46[2][1][0],&g_46[2][1][0],(void*)0},{&g_46[2][1][0],&g_42,&g_5,&g_46[3][0][0],(void*)0,&g_46[3][2][0],&g_42},{&g_42,&g_46[2][1][0],(void*)0,&g_5,&g_46[2][1][0],&g_5,(void*)0},{&g_42,&g_42,(void*)0,&g_42,&g_46[3][0][0],&g_5,(void*)0},{(void*)0,&g_46[2][1][0],&g_42,&g_42,(void*)0,&g_42,&g_42},{&g_46[3][0][0],&g_46[2][1][0],&g_42,&g_46[2][1][0],&g_46[3][0][0],&g_42,(void*)0}};
                int i, j;
                (*l_252) = l_253;
                g_46[0][0][0] = g_90[(g_105 + 2)][g_105];
                if (g_90[g_105][g_105])
                    break;
                for (g_94 = 0; (g_94 <= 0); g_94 += 1)
                {
                    int i, j, k;
                    g_240 = &g_46[(g_94 + 2)][(g_94 + 6)][g_94];
                }
            }
        }
    }
    else
    {
        short l_259 = 1L;
        char *l_260 = (void*)0;
        char *l_268 = &g_269;
        const short l_272 = 0xFFE6L;
        int *l_273 = &g_46[2][1][0];
        int **l_274 = &g_106;
        (*l_273) = (safe_unary_minus_func_int8_t_s((((((((g_5 , (((safe_sub_func_uint16_t_u_u(((*l_253) ^ l_259), (((l_260 != (((*l_268) = (safe_unary_minus_func_uint32_t_u(((+(safe_rshift_func_uint8_t_u_u(l_259, (+((safe_rshift_func_uint16_t_u_s(((l_259 <= g_92[5][2][0]) || (-1L)), 4)) && 0L))))) || (*l_253))))) , l_270)) & p_61) , 65531UL))) || l_259) & p_63)) || g_105) , (*l_253)) > p_64) | l_259) <= l_271) >= l_272)));
        (*l_274) = &l_271;
        (*l_273) = (**l_274);
        for (p_60 = 0; (p_60 <= 0); p_60 += 1)
        {
            unsigned l_275 = 6UL;
            (*l_273) = l_275;
            for (g_122 = 0; (g_122 <= 0); g_122 += 1)
            {
                unsigned short l_278[1][7] = {{65535UL,0x2497L,65535UL,65535UL,0x2497L,65535UL,65535UL}};
                int i, j;
                for (p_61 = 0; (p_61 <= 0); p_61 += 1)
                {
                    int i, j, k;
                    for (l_275 = 0; (l_275 <= 0); l_275 += 1)
                    {
                        int ***l_277 = &l_274;
                        int i, j, k;
                        (*l_277) = l_276;
                        (*l_276) = &g_46[(p_61 + 3)][(p_61 + 5)][p_60];
                        (*l_276) = (**l_277);
                        if (g_92[p_61][p_60][g_122])
                            continue;
                    }
                    l_278[0][3] = (g_46[(g_122 + 2)][(p_61 + 6)][p_60] = g_92[(p_61 + 5)][(p_61 + 3)][g_122]);
                    for (l_275 = 0; (l_275 <= 0); l_275 += 1)
                    {
                        char **l_280 = &l_270;
                        char ***l_279 = &l_280;
                        int i, j, k;
                        (*l_274) = &g_46[p_60][(g_122 + 6)][g_122];
                        (*l_279) = &l_260;
                        (*l_276) = &g_46[2][5][0];
                    }
                    for (g_43 = 0; (g_43 <= 0); g_43 += 1)
                    {
                        int i, j, k;
                        (*l_276) = (void*)0;
                        (*l_276) = &g_46[(p_60 + 1)][(p_61 + 3)][g_122];
                    }
                }
                return &g_46[3][3][0];
            }
        }
    }
    for (g_122 = 0; (g_122 > 44); g_122++)
    {
        (*l_276) = &g_46[2][1][0];
    }
    for (p_64 = 0; (p_64 <= 0); p_64 += 1)
    {
        unsigned char l_283 = 0x36L;
        int l_284 = 0xD072FE99L;
        unsigned short ** const l_305 = (void*)0;
        l_284 = (l_283 , p_61);
        for (l_271 = 0; (l_271 >= 0); l_271 -= 1)
        {
            const int *l_287 = (void*)0;
            int l_296 = (-8L);
            for (g_105 = 0; (g_105 <= 0); g_105 += 1)
            {
                int *l_286 = &l_271;
                int i, j, k;
                if (g_92[p_64][(p_64 + 3)][l_271])
                {
                    int *l_285 = &g_46[0][0][0];
                    int i, j, k;
                    (*l_285) = g_92[p_64][(p_64 + 4)][g_105];
                }
                else
                {
                    short *l_291 = &g_94;
                    if ((*l_253))
                    {
                        const int **l_288 = &l_287;
                        short *l_290 = &g_19;
                        short **l_289[6][8][3] = {{{(void*)0,&l_290,(void*)0},{&l_290,(void*)0,&l_290},{&l_290,&l_290,(void*)0},{&l_290,(void*)0,&l_290},{(void*)0,&l_290,&l_290},{&l_290,&l_290,&l_290},{&l_290,&l_290,(void*)0},{(void*)0,&l_290,(void*)0}},{{&l_290,&l_290,(void*)0},{&l_290,(void*)0,&l_290},{&l_290,&l_290,(void*)0},{&l_290,(void*)0,(void*)0},{&l_290,&l_290,(void*)0},{&l_290,&l_290,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,(void*)0}},{{&l_290,(void*)0,&l_290},{&l_290,&l_290,(void*)0},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,&l_290},{(void*)0,(void*)0,&l_290},{&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290},{&l_290,(void*)0,&l_290}},{{&l_290,&l_290,(void*)0},{(void*)0,(void*)0,&l_290},{&l_290,&l_290,(void*)0},{&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290},{&l_290,&l_290,(void*)0},{(void*)0,&l_290,(void*)0},{&l_290,&l_290,(void*)0}},{{&l_290,(void*)0,&l_290},{&l_290,&l_290,(void*)0},{&l_290,(void*)0,(void*)0},{&l_290,&l_290,(void*)0},{&l_290,&l_290,&l_290},{&l_290,(void*)0,&l_290},{&l_290,(void*)0,(void*)0},{&l_290,(void*)0,(void*)0}},{{&l_290,&l_290,(void*)0},{&l_290,(void*)0,(void*)0},{(void*)0,&l_290,&l_290},{&l_290,(void*)0,&l_290},{&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290},{&l_290,&l_290,(void*)0},{&l_290,(void*)0,(void*)0}}};
                        int l_292 = 0xB1DE77E4L;
                        int i, j, k;
                        (*l_276) = l_286;
                        if ((*g_106))
                            break;
                        (*l_288) = l_287;
                        l_292 = (p_62 != (l_291 = (void*)0));
                    }
                    else
                    {
                        int *l_295 = &g_46[0][4][0];
                        (*l_295) = (((*l_270) = (safe_lshift_func_int8_t_s_s(l_283, p_64))) > (*l_253));
                        return &g_5;
                    }
                    if ((*l_286))
                        continue;
                    l_296 = ((p_61 , g_197) != (void*)0);
                }
                for (g_94 = 0; (g_94 <= 0); g_94 += 1)
                {
                    char l_303 = (-6L);
                    for (p_60 = 0; (p_60 <= 8); p_60 += 1)
                    {
                        int i, j;
                        l_303 = ((!(safe_mod_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((g_152[(g_105 + 3)][(g_94 + 3)] , g_152[(g_105 + 5)][(p_64 + 3)]) < (g_152[(g_105 + 5)][(l_271 + 5)] , g_235[g_94])), ((safe_rshift_func_int8_t_s_u(2L, 0)) && l_283))), 0xCC3A63B0L))) < g_92[5][2][0]);
                        (*l_276) = &g_5;
                        (*l_276) = &g_42;
                    }
                    l_304 = (*l_286);
                    if (l_303)
                        continue;
                }
            }
            for (l_296 = 0; (l_296 <= 0); l_296 += 1)
            {
                unsigned short *l_308 = (void*)0;
                unsigned short **l_307 = &l_308;
                unsigned short ***l_306 = &l_307;
                (*l_306) = l_305;
            }
        }
        g_46[3][3][0] = p_63;
        g_46[2][1][0] = (-1L);
        for (l_271 = 0; (l_271 >= 0); l_271 -= 1)
        {
            unsigned short l_309 = 6UL;
            int *l_310[9][5][5] = {{{(void*)0,(void*)0,(void*)0,&l_271,(void*)0},{&g_42,(void*)0,&g_46[2][1][0],(void*)0,(void*)0},{(void*)0,&l_284,&g_5,(void*)0,&l_304},{&g_46[2][1][0],&l_284,&g_42,&g_46[2][1][0],&g_46[2][1][0]},{&l_304,&l_284,&g_42,(void*)0,&g_46[2][1][0]}},{{(void*)0,&l_284,&l_304,&l_304,&l_304},{&g_42,(void*)0,&g_46[2][2][0],&l_304,&l_304},{&l_304,(void*)0,&l_304,&l_284,&l_304},{(void*)0,&g_46[0][0][0],(void*)0,(void*)0,&g_46[2][1][0]},{&g_42,&g_46[2][1][0],&l_271,&l_284,(void*)0}},{{&l_284,&l_304,(void*)0,&g_46[2][1][0],&l_304},{(void*)0,&l_304,&l_304,&g_46[2][1][0],(void*)0},{&g_46[2][1][0],&l_304,&g_46[2][2][0],&g_46[2][1][0],(void*)0},{&g_46[2][1][0],&g_46[2][1][0],&l_304,&g_42,&l_271},{&g_42,&g_46[2][1][0],&g_42,(void*)0,&g_46[2][1][0]}},{{(void*)0,&g_5,&g_46[2][1][0],(void*)0,&l_304},{(void*)0,&l_304,&g_42,(void*)0,&g_46[2][1][0]},{&l_284,&g_46[2][1][0],&g_46[1][4][0],&g_46[2][1][0],&l_271},{&l_304,&l_284,&g_46[2][1][0],&l_284,&l_304},{&g_42,&l_284,&l_271,&g_46[1][4][0],&g_5}},{{&g_42,&l_271,&g_46[1][4][0],&l_304,&g_42},{&l_284,&l_304,&g_42,&l_284,&g_5},{&l_271,&l_304,&g_42,&l_271,&l_304},{&g_5,&g_42,&g_42,&l_304,&l_271},{&l_284,&l_304,&l_271,&g_46[2][1][0],&g_46[2][1][0]}},{{&g_42,&g_46[0][0][0],&g_46[2][1][0],&l_304,&l_304},{&g_46[0][0][0],(void*)0,&l_271,&l_284,&g_46[2][1][0]},{&g_46[0][0][0],&l_284,(void*)0,&l_284,(void*)0},{&g_42,&l_304,(void*)0,&g_42,(void*)0},{&l_284,&l_304,&l_284,(void*)0,&l_284}},{{&g_5,&g_5,&g_46[2][1][0],&l_284,&g_46[2][1][0]},{&l_271,&g_42,&g_46[2][1][0],&l_284,(void*)0},{&l_284,&l_284,&l_284,&g_42,&g_46[1][4][0]},{&g_46[2][1][0],&l_304,&g_46[2][1][0],&l_284,&l_304},{&g_46[1][4][0],&g_46[2][1][0],&l_304,(void*)0,(void*)0}},{{&g_46[0][0][0],&g_42,&g_42,&g_46[2][1][0],&l_284},{(void*)0,&g_42,&g_42,&g_5,&l_304},{&l_271,(void*)0,&g_46[2][1][0],&g_42,&g_46[0][0][0]},{(void*)0,&g_46[2][2][0],&g_46[2][1][0],&g_42,&l_284},{&g_46[2][1][0],&g_42,&g_42,&l_304,&l_304}},{{(void*)0,&g_46[0][0][0],&g_42,&g_46[2][2][0],&g_46[2][1][0]},{&l_304,&l_304,&l_304,&l_304,&l_271},{&g_46[2][1][0],&l_304,&g_46[2][1][0],(void*)0,&l_304},{&g_46[2][2][0],&g_46[0][0][0],&l_284,&l_271,&g_5},{&l_284,(void*)0,&g_46[2][1][0],(void*)0,&g_42}}};
            int i, j, k;
            l_304 = l_309;
            for (g_269 = 0; (g_269 >= 0); g_269 -= 1)
            {
                int l_313 = 0x41D32856L;
                int i, j, k;
                g_46[2][1][0] = (-1L);
                (*l_276) = &g_42;
                l_313 = (safe_sub_func_int32_t_s_s(g_92[(l_271 + 4)][(g_269 + 5)][g_269], 0xFF6CA641L));
            }
        }
    }
    return &g_46[2][1][0];
}







static int func_65(unsigned char p_66, unsigned p_67, unsigned char p_68, const short p_69, int p_70)
{
    const int l_78[4] = {0x2BB399D6L,0x2BB399D6L,0x2BB399D6L,0x2BB399D6L};
    int **l_87 = (void*)0;
    char l_170 = (-7L);
    char *l_226 = &l_170;
    char **l_225 = &l_226;
    char ***l_224 = &l_225;
    unsigned short **l_243[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    if (g_19)
    {
        char l_84 = 0x59L;
        unsigned char *l_162 = (void*)0;
        unsigned char **l_161 = &l_162;
        unsigned short *l_171 = (void*)0;
        int l_195 = 1L;
        int *l_196 = &l_195;
        volatile char *l_200 = &g_201;
        volatile char **l_199 = &l_200;
        char ***l_223 = (void*)0;
        g_46[0][4][0] = g_43;
        if (g_19)
        {
            int **l_88 = (void*)0;
            unsigned *l_89 = &g_90[3][0];
            unsigned char *l_91[7][1][8] = {{{&g_92[5][2][0],&g_92[5][2][0],(void*)0,(void*)0,(void*)0,&g_92[5][2][0],&g_92[0][2][0],(void*)0}},{{&g_92[6][3][0],&g_92[5][2][0],(void*)0,&g_92[5][2][0],&g_92[3][1][0],(void*)0,&g_92[5][2][0],(void*)0}},{{&g_92[4][4][0],&g_92[5][2][0],&g_92[5][2][0],&g_92[5][2][0],&g_92[4][4][0],&g_92[5][2][0],&g_92[3][1][0],&g_92[5][2][0]}},{{&g_92[1][1][0],&g_92[4][4][0],&g_92[2][6][0],(void*)0,&g_92[1][1][0],&g_92[5][2][0],&g_92[5][2][0],(void*)0}},{{&g_92[5][2][0],&g_92[5][2][0],&g_92[4][4][0],&g_92[5][2][0],(void*)0,&g_92[2][6][0],&g_92[5][2][0],&g_92[5][2][0]}},{{&g_92[1][1][0],(void*)0,&g_92[5][2][0],&g_92[5][2][0],(void*)0,&g_92[1][1][0],(void*)0,(void*)0}},{{&g_92[2][6][0],(void*)0,&g_92[5][2][0],&g_92[4][4][0],&g_92[5][2][0],&g_92[5][2][0],(void*)0,&g_92[5][2][0]}}};
            char l_108 = 0x11L;
            int *l_130 = (void*)0;
            int i, j, k;
            for (p_70 = 0; (p_70 < 8); p_70 = safe_add_func_int32_t_s_s(p_70, 3))
            {
                int *l_82 = &g_46[2][1][0];
                int **l_81 = &l_82;
                int *l_83 = &g_46[2][1][0];
                for (p_68 = 15; (p_68 > 8); p_68 = safe_sub_func_int8_t_s_s(p_68, 1))
                {
                    int *l_79 = (void*)0;
                    int *l_80 = &g_46[2][1][0];
                    (*l_80) = l_78[0];
                    if (g_19)
                        break;
                }
                (*l_81) = &g_5;
                l_84 = ((*l_83) = p_70);
            }
            if ((safe_mod_func_int32_t_s_s((0x64B00F59L || ((p_66 | ((l_87 == l_88) , l_84)) | (p_68 = (((*l_89) = (p_70 || 0L)) == g_46[2][1][0])))), p_66)))
            {
                short *l_93 = &g_94;
                unsigned char * const l_97 = (void*)0;
                unsigned char **l_98 = &l_91[6][0][7];
                int l_101 = 0L;
                int *l_102 = &g_46[2][1][0];
                g_105 = (((*l_93) = (-1L)) < ((p_66 , ((safe_lshift_func_uint16_t_u_u(((l_97 == ((*l_98) = &g_92[5][4][0])) || ((safe_add_func_uint32_t_u_u(l_101, ((g_92[5][2][0] , p_70) , ((*l_102) = g_90[3][0])))) > (safe_add_func_uint32_t_u_u((g_92[0][3][0] > p_66), p_66)))), l_84)) & g_90[3][0])) || p_70));
            }
            else
            {
                g_106 = &p_70;
            }
            if (((safe_unary_minus_func_int8_t_s(p_70)) , l_108))
            {
                const int *l_114[5][8][1] = {{{&g_46[1][2][0]},{&g_42},{(void*)0},{&g_46[1][2][0]},{&g_5},{&g_46[1][2][0]},{(void*)0},{&g_42}},{{&g_46[1][2][0]},{(void*)0},{&g_46[2][1][0]},{(void*)0},{(void*)0},{&g_46[2][1][0]},{(void*)0},{&g_46[1][2][0]}},{{&g_42},{(void*)0},{&g_46[1][2][0]},{&g_5},{&g_46[1][2][0]},{(void*)0},{&g_42},{&g_46[1][2][0]}},{{(void*)0},{&g_46[2][1][0]},{(void*)0},{(void*)0},{&g_46[2][1][0]},{(void*)0},{&g_46[1][2][0]},{&g_42}},{{(void*)0},{&g_46[1][2][0]},{&g_5},{&g_46[1][2][0]},{(void*)0},{&g_42},{&g_46[1][2][0]},{(void*)0}}};
                int i, j, k;
                if ((safe_rshift_func_int8_t_s_u(0xEDL, 6)))
                {
                    const int * const l_111[8] = {&g_42,&g_5,&g_42,&g_42,&g_5,&g_42,&g_42,&g_5};
                    const int **l_112 = (void*)0;
                    const int **l_113 = (void*)0;
                    unsigned *l_121 = &g_122;
                    int i;
                    l_114[4][2][0] = l_111[6];
                    (*g_106) = ((((g_5 >= (safe_mul_func_int8_t_s_s(((g_90[3][0] == p_67) && 0UL), (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_s(g_43, g_43)), 1))))) <= (g_94 ^ ((((((*l_121) = g_43) < 0UL) || p_68) | p_69) == 0x69C7L))) > 0xE1962FF4L) , (*g_106));
                }
                else
                {
                    int *l_125 = &g_46[0][4][0];
                    int **l_131 = &l_125;
                    for (p_68 = (-24); (p_68 == 36); p_68 = safe_add_func_int32_t_s_s(p_68, 6))
                    {
                        int **l_126 = &l_125;
                        int **l_127 = (void*)0;
                        int **l_128 = (void*)0;
                        int **l_129[5] = {&g_106,&g_106,&g_106,&g_106,&g_106};
                        int i;
                        (*g_106) = (*g_106);
                        l_125 = &g_46[2][1][0];
                        g_106 = ((p_66 <= (p_69 , p_67)) , &p_70);
                        l_130 = ((*l_126) = &g_46[1][6][0]);
                    }
                    (*l_131) = &p_70;
                }
            }
            else
            {
                return p_68;
            }
            for (l_108 = 0; (l_108 < (-4)); l_108 = safe_sub_func_uint16_t_u_u(l_108, 1))
            {
                int **l_134[5][5][8] = {{{&l_130,&g_106,&g_106,&g_106,&l_130,&l_130,&g_106,&g_106},{&l_130,&l_130,&l_130,&l_130,&g_106,&g_106,&g_106,&l_130},{&l_130,&g_106,&g_106,(void*)0,&l_130,&l_130,&l_130,&g_106},{&g_106,&l_130,&g_106,&g_106,&g_106,&l_130,&l_130,&g_106},{&g_106,&g_106,&g_106,&g_106,(void*)0,&g_106,(void*)0,(void*)0}},{{&l_130,&l_130,&g_106,&l_130,&g_106,&l_130,&g_106,(void*)0},{&l_130,&g_106,(void*)0,&g_106,&g_106,&g_106,(void*)0,&g_106},{&g_106,&g_106,&l_130,&g_106,&g_106,&l_130,(void*)0,&g_106},{&g_106,&l_130,&g_106,&g_106,&g_106,&l_130,(void*)0,&g_106},{&g_106,&g_106,&l_130,&l_130,&g_106,&l_130,(void*)0,&g_106}},{{&g_106,&l_130,(void*)0,&g_106,&l_130,&l_130,&g_106,&l_130},{&g_106,(void*)0,&g_106,&g_106,&g_106,&g_106,(void*)0,&g_106},{&g_106,(void*)0,&g_106,&l_130,&g_106,&g_106,&l_130,&l_130},{&l_130,&l_130,&g_106,&l_130,&l_130,&g_106,&l_130,(void*)0},{&g_106,&l_130,&l_130,(void*)0,(void*)0,&g_106,&l_130,&g_106}},{{&g_106,&g_106,&l_130,&l_130,&l_130,&l_130,&l_130,&g_106},{&g_106,(void*)0,&g_106,&g_106,&l_130,&g_106,&l_130,&l_130},{&g_106,&g_106,(void*)0,&g_106,&l_130,(void*)0,&l_130,&g_106},{&g_106,&l_130,&l_130,(void*)0,(void*)0,&l_130,&l_130,&g_106},{(void*)0,&g_106,&g_106,&l_130,&g_106,&l_130,&g_106,(void*)0}},{{&g_106,&l_130,&l_130,&g_106,&l_130,&l_130,&g_106,&g_106},{&l_130,&g_106,&l_130,&g_106,&g_106,&l_130,&l_130,&g_106},{&g_106,&l_130,&g_106,&l_130,&l_130,(void*)0,&g_106,&g_106},{&g_106,&g_106,&g_106,(void*)0,&g_106,&g_106,(void*)0,&g_106},{&g_106,(void*)0,&l_130,&g_106,&g_106,&l_130,&g_106,&l_130}}};
                int i, j, k;
                g_106 = &g_46[3][2][0];
            }
        }
        else
        {
            unsigned char **l_175 = &g_165;
            int **l_184 = &g_106;
            unsigned short l_209 = 0x9B8EL;
            for (g_122 = 5; (g_122 == 5); g_122 = safe_add_func_uint16_t_u_u(g_122, 1))
            {
                unsigned char l_173 = 0UL;
                int *l_176[8][1] = {{&g_5},{&g_5},{&g_5},{&g_5},{&g_5},{&g_5},{&g_5},{&g_5}};
                int i, j;
                for (l_84 = (-15); (l_84 <= (-21)); l_84 = safe_sub_func_int32_t_s_s(l_84, 1))
                {
                    int *l_141 = &g_46[2][1][0];
                    for (p_68 = 20; (p_68 < 30); p_68++)
                    {
                        l_141 = &p_70;
                        (*l_141) = (*g_106);
                        return g_43;
                    }
                    for (p_68 = (-25); (p_68 >= 43); p_68 = safe_add_func_uint16_t_u_u(p_68, 6))
                    {
                        g_106 = &p_70;
                    }
                    for (p_70 = 0; (p_70 <= 0); p_70 += 1)
                    {
                        int **l_144[3][2][5] = {{{(void*)0,&g_106,&g_106,&g_106,&g_106},{&g_106,&g_106,&l_141,&g_106,&g_106}},{{&g_106,(void*)0,(void*)0,&g_106,&g_106},{&g_106,&g_106,&l_141,&l_141,&g_106}},{{&g_106,(void*)0,&l_141,&l_141,&l_141},{(void*)0,&g_106,(void*)0,&l_141,&l_141}}};
                        unsigned char *l_146 = &g_92[5][2][0];
                        unsigned char **l_145 = &l_146;
                        int i, j, k;
                        g_106 = &g_46[(p_70 + 2)][p_70][p_70];
                        (*g_106) = (((*l_145) = (void*)0) != (g_43 , &p_66));
                        (*l_141) = (-1L);
                    }
                }
                for (l_84 = 0; (l_84 <= 1); l_84 += 1)
                {
                    unsigned short *l_151 = &g_152[7][4];
                    unsigned char **l_174 = &l_162;
                    int **l_177 = &g_106;
                    unsigned char ***l_191 = &l_161;
                    char *l_192 = &l_170;
                    short *l_193 = (void*)0;
                    short *l_194[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_194[i] = &g_94;
                    if ((safe_mul_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_70, ((*l_151) = (~(((g_90[(l_84 + 1)][l_84] = ((p_68 > g_122) & p_68)) , (g_90[(l_84 + 1)][l_84] = 0xC32A7D5BL)) , 65528UL))))), g_5)))
                    {
                        return g_42;
                    }
                    else
                    {
                        short *l_157 = &g_94;
                        int l_158 = (-1L);
                        unsigned char ***l_163 = &l_161;
                        unsigned short **l_172 = &l_151;
                        if (p_66)
                            break;
                        (*g_106) = ((safe_sub_func_uint32_t_u_u(((void*)0 != &g_42), (((*l_157) = (safe_mul_func_int8_t_s_s(g_90[3][0], g_42))) == l_158))) == (safe_mod_func_int32_t_s_s((-1L), ((p_66 = (g_90[3][0] , ((g_164 = ((*l_163) = l_161)) != (void*)0))) & g_92[5][2][0]))));
                        (*g_106) = (safe_rshift_func_int8_t_s_u(((((p_70 > (safe_rshift_func_uint8_t_u_u(l_170, 2))) > ((l_171 != ((*l_172) = l_157)) , l_173)) | (p_67 , p_68)) , ((((((l_174 == l_175) > g_19) != (*g_106)) < g_94) == p_67) == g_90[(l_84 + 1)][l_84])), g_90[(l_84 + 1)][l_84]));
                    }
                    (*l_177) = l_176[7][0];
                    (*l_177) = &p_70;
                    l_195 = (((+((((**l_184) = (((g_105 > ((l_84 > ((g_152[0][5] = (safe_add_func_int8_t_s_s((((*g_106) & (g_43 >= (safe_mul_func_uint8_t_u_u(((void*)0 == l_184), (safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((((*l_192) = (&g_165 != ((*l_191) = &g_165))) && (p_68 = (((*g_106) ^ 4294967291UL) < 0x96804C79L))), p_67)), 6)), (**l_177))))))) , l_84), (-1L)))) != 0x0B98L)) != (**l_177))) >= (*g_106)) , (-1L))) & g_92[4][4][0]) & g_19)) || g_5) < g_42);
                    for (l_170 = 0; (l_170 <= 0); l_170 += 1)
                    {
                        volatile char ***l_198[6][7][6] = {{{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,(void*)0,&g_197},{&g_197,&g_197,&g_197,(void*)0,(void*)0,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197}},{{&g_197,&g_197,&g_197,(void*)0,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,(void*)0},{&g_197,&g_197,&g_197,(void*)0,&g_197,&g_197},{&g_197,&g_197,&g_197,(void*)0,&g_197,&g_197}},{{(void*)0,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,(void*)0,&g_197,&g_197,&g_197},{&g_197,&g_197,(void*)0,&g_197,&g_197,&g_197}},{{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197}},{{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,(void*)0,&g_197},{&g_197,(void*)0,&g_197,&g_197,&g_197,(void*)0},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197}},{{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,(void*)0,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,(void*)0,&g_197,&g_197,(void*)0,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,&g_197},{&g_197,&g_197,&g_197,&g_197,&g_197,(void*)0},{&g_197,&g_197,&g_197,(void*)0,&g_197,&g_197}}};
                        int i, j, k;
                        l_196 = &g_46[2][6][0];
                        (*l_177) = &p_70;
                        l_199 = g_197;
                        (*l_184) = &l_195;
                    }
                }
            }
            for (g_105 = 22; (g_105 != 16); g_105 = safe_sub_func_int32_t_s_s(g_105, 5))
            {
                int **l_212 = &g_106;
                for (p_66 = 0; (p_66 <= 39); p_66++)
                {
                    unsigned l_208[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_208[i] = 0xF0FED554L;
                }
                (*l_184) = &p_70;
                for (l_170 = 0; (l_170 >= (-8)); l_170--)
                {
                    char *l_217 = &l_84;
                    int l_218 = 0xEDBDCEA1L;
                    int l_219 = 0x2BF64459L;
                    unsigned char *l_220 = &g_92[5][2][0];
                    (*l_196) = (p_70 = (&g_106 == l_212));
                    (**l_184) = ((g_152[7][4] = g_152[7][4]) | g_42);
                    (*g_106) = (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((l_218 = ((*l_217) = (**l_184))), ((*l_220) = l_219))), p_67));
                }
                (*l_212) = &p_70;
            }
            (*l_184) = &p_70;
        }
        (*l_196) = (((p_67 < 0x2890L) != ((*g_106) > (p_67 < ((**l_225) = ((g_46[2][1][0] , 0x9FL) != (((((((l_223 == l_224) != p_67) , (*l_196)) <= (-10L)) < (*l_196)) == g_152[7][4]) == (*l_196))))))) & (*l_196));
    }
    else
    {
        unsigned l_236 = 0xF2D15554L;
        for (p_70 = (-10); (p_70 > 15); ++p_70)
        {
            unsigned short l_237 = 65535UL;
            int **l_238 = (void*)0;
            int **l_239 = &g_106;
            g_240 = ((*l_239) = (((((safe_mod_func_uint16_t_u_u(0xF0CBL, p_66)) > ((((((((((safe_add_func_uint8_t_u_u(g_235[3], p_67)) , (l_226 == (*g_164))) | p_69) & l_236) < (p_70 == l_237)) , 0xCCL) > 1UL) & p_69) <= p_69) ^ l_237)) != (-1L)) , 0x4288B945L) , (void*)0));
            for (p_68 = 25; (p_68 > 31); ++p_68)
            {
                unsigned short ***l_244 = &l_243[1];
                (*l_244) = l_243[1];
            }
        }
    }
    return g_235[3];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_4[i], "g_4[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_19, "g_19", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_46[i][j][k], "g_46[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_90[i][j], "g_90[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_92[i][j][k], "g_92[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_152[i][j], "g_152[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_201, "g_201", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_235[i], "g_235[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_269, "g_269", print_hash_value);
    transparent_crc(g_343, "g_343", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_496, "g_496", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_538[i][j], "g_538[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_607, "g_607", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_812[i], "g_812[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1263[i][j][k], "g_1263[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1292, "g_1292", print_hash_value);
    transparent_crc(g_1300, "g_1300", print_hash_value);
    transparent_crc(g_1314, "g_1314", print_hash_value);
    transparent_crc(g_1462, "g_1462", print_hash_value);
    transparent_crc(g_1659, "g_1659", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1661[i], "g_1661[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1662, "g_1662", print_hash_value);
    transparent_crc(g_1717, "g_1717", print_hash_value);
    transparent_crc(g_1756, "g_1756", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1846[i][j][k], "g_1846[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_1934[i][j][k], "g_1934[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
