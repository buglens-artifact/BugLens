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


union U0 {
   const short f0;
};

union U1 {
   int f0;
};


static volatile int g_2[9][10][2] = {{{0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}}, {{0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}}, {{0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}}, {{0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}}, {{0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}}, {{0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}}, {{0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}}, {{0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}}, {{0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}, {0x0752570EL, 1L}}};
static int *g_18 = (void*)0;
static int g_20 = (-8L);
static int *g_19 = &g_20;
static union U0 g_50 = {0x2E65L};
static unsigned short g_61[10] = {0xF2F7L, 0xF2F7L, 0xF2F7L, 0xF2F7L, 0xF2F7L, 0xF2F7L, 0xF2F7L, 0xF2F7L, 0xF2F7L, 0xF2F7L};
static int g_62 = 0xF7CFEB45L;
static int g_68 = 0x622B4615L;
static unsigned g_78 = 4294967288UL;
static int **g_84[2][1] = {{&g_19}, {&g_19}};
static int g_86[4] = {1L, 1L, 1L, 1L};
static const unsigned short *g_91 = &g_61[5];
static const unsigned short **g_90[2][2] = {{&g_91, &g_91}, {&g_91, &g_91}};
static short g_99 = (-9L);
static union U1 g_106 = {1L};
static unsigned short g_108 = 9UL;
static unsigned char g_119 = 253UL;
static int *g_162 = &g_86[3];
static char g_181 = 0x51L;
static unsigned char g_189 = 0x64L;
static char g_223 = (-1L);
static int g_239 = 0L;
static volatile union U0 g_275[3] = {{0x7DA2L}, {0x7DA2L}, {0x7DA2L}};
static volatile union U0 *g_274[5][5] = {{&g_275[1], &g_275[1], &g_275[1], &g_275[1], &g_275[1]}, {&g_275[1], &g_275[1], &g_275[1], &g_275[1], &g_275[1]}, {&g_275[1], &g_275[1], &g_275[1], &g_275[1], &g_275[1]}, {&g_275[1], &g_275[1], &g_275[1], &g_275[1], &g_275[1]}, {&g_275[1], &g_275[1], &g_275[1], &g_275[1], &g_275[1]}};
static volatile union U0 **g_273[7][5] = {{&g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2]}, {&g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2]}, {&g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2]}, {&g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2]}, {&g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2]}, {&g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2]}, {&g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2], &g_274[1][2]}};
static char g_309 = (-4L);
static unsigned g_325 = 18446744073709551610UL;
static short *g_356 = &g_99;
static unsigned short g_501 = 7UL;
static const short *g_516 = (void*)0;
static const short **g_515 = &g_516;
static const short ***g_514 = &g_515;
static short **g_518 = &g_356;
static short ***g_517 = &g_518;
static const int *g_526 = &g_239;
static volatile union U1 g_539 = {9L};
static volatile union U1 g_540 = {0xFAF08D37L};
static volatile union U1 g_541 = {-10L};
static volatile union U1 g_542 = {0x518808A6L};
static volatile union U1 *g_538[1][6][7] = {{{&g_541, &g_540, (void*)0, (void*)0, &g_540, &g_541, &g_540}, {&g_541, &g_540, (void*)0, (void*)0, &g_540, &g_541, &g_540}, {&g_541, &g_540, (void*)0, (void*)0, &g_540, &g_541, &g_540}, {&g_541, &g_540, (void*)0, (void*)0, &g_540, &g_541, &g_540}, {&g_541, &g_540, (void*)0, (void*)0, &g_540, &g_541, &g_540}, {&g_541, &g_540, (void*)0, (void*)0, &g_540, &g_541, &g_540}}};
static volatile union U1 **g_537 = &g_538[0][0][2];
static volatile union U1 ***g_536[2][10] = {{&g_537, &g_537, &g_537, &g_537, &g_537, &g_537, &g_537, &g_537, &g_537, &g_537}, {&g_537, &g_537, &g_537, &g_537, &g_537, &g_537, &g_537, &g_537, &g_537, &g_537}};
static union U1 *g_546 = &g_106;
static short g_580 = (-1L);
static union U0 g_586 = {1L};
static union U0 g_589 = {0x4CC3L};
static int *g_643 = &g_86[2];
static volatile unsigned *** const g_648[4] = {(void*)0, (void*)0, (void*)0, (void*)0};
static union U1 ***g_706 = (void*)0;
static unsigned *g_748 = (void*)0;
static union U0 g_874 = {3L};
static const unsigned char *g_898[9][10] = {{&g_119, &g_119, &g_119, &g_119, &g_189, &g_119, (void*)0, (void*)0, &g_119, &g_189}, {&g_119, &g_119, &g_119, &g_119, &g_189, &g_119, (void*)0, (void*)0, &g_119, &g_189}, {&g_119, &g_119, &g_119, &g_119, &g_189, &g_119, (void*)0, (void*)0, &g_119, &g_189}, {&g_119, &g_119, &g_119, &g_119, &g_189, &g_119, (void*)0, (void*)0, &g_119, &g_189}, {&g_119, &g_119, &g_119, &g_119, &g_189, &g_119, (void*)0, (void*)0, &g_119, &g_189}, {&g_119, &g_119, &g_119, &g_119, &g_189, &g_119, (void*)0, (void*)0, &g_119, &g_189}, {&g_119, &g_119, &g_119, &g_119, &g_189, &g_119, (void*)0, (void*)0, &g_119, &g_189}, {&g_119, &g_119, &g_119, &g_119, &g_189, &g_119, (void*)0, (void*)0, &g_119, &g_189}, {&g_119, &g_119, &g_119, &g_119, &g_189, &g_119, (void*)0, (void*)0, &g_119, &g_189}};
static const unsigned char **g_897[6] = {&g_898[3][3], &g_898[3][3], &g_898[3][3], &g_898[3][3], &g_898[3][3], &g_898[3][3]};
static const unsigned g_946[10][10] = {{0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}, {0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}, {0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}, {0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}, {0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}, {0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}, {0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}, {0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}, {0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}, {0UL, 0UL, 0x4F26F2ABL, 0x1A0E400FL, 0UL, 0x1ACC7F41L, 0x1F38907EL, 0x4DDC0436L, 0x1F38907EL, 0x1ACC7F41L}};
static const unsigned g_948[6] = {0xFBA2C7C6L, 0xFBA2C7C6L, 0xFBA2C7C6L, 0xFBA2C7C6L, 0xFBA2C7C6L, 0xFBA2C7C6L};
static unsigned **g_957 = &g_748;
static unsigned ***g_956[8][4][8] = {{{&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}}, {{&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}}, {{&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}}, {{&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}}, {{&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}}, {{&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}}, {{&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}}, {{&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}, {&g_957, (void*)0, (void*)0, &g_957, (void*)0, &g_957, (void*)0, &g_957}}};
static volatile int g_972[9][10] = {{0x231EB4E6L, (-1L), 1L, (-1L), (-9L), 0x69139B79L, 0xBFF67644L, 0x9B82E442L, (-1L), (-1L)}, {0x231EB4E6L, (-1L), 1L, (-1L), (-9L), 0x69139B79L, 0xBFF67644L, 0x9B82E442L, (-1L), (-1L)}, {0x231EB4E6L, (-1L), 1L, (-1L), (-9L), 0x69139B79L, 0xBFF67644L, 0x9B82E442L, (-1L), (-1L)}, {0x231EB4E6L, (-1L), 1L, (-1L), (-9L), 0x69139B79L, 0xBFF67644L, 0x9B82E442L, (-1L), (-1L)}, {0x231EB4E6L, (-1L), 1L, (-1L), (-9L), 0x69139B79L, 0xBFF67644L, 0x9B82E442L, (-1L), (-1L)}, {0x231EB4E6L, (-1L), 1L, (-1L), (-9L), 0x69139B79L, 0xBFF67644L, 0x9B82E442L, (-1L), (-1L)}, {0x231EB4E6L, (-1L), 1L, (-1L), (-9L), 0x69139B79L, 0xBFF67644L, 0x9B82E442L, (-1L), (-1L)}, {0x231EB4E6L, (-1L), 1L, (-1L), (-9L), 0x69139B79L, 0xBFF67644L, 0x9B82E442L, (-1L), (-1L)}, {0x231EB4E6L, (-1L), 1L, (-1L), (-9L), 0x69139B79L, 0xBFF67644L, 0x9B82E442L, (-1L), (-1L)}};
static volatile int *g_971 = &g_972[7][7];
static unsigned short *g_985 = &g_61[2];
static unsigned short **g_984[9][4][6] = {{{&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}}, {{&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}}, {{&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}}, {{&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}}, {{&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}}, {{&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}}, {{&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}}, {{&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}}, {{&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}, {&g_985, (void*)0, (void*)0, (void*)0, &g_985, (void*)0}}};
static int *g_1134[8] = {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0, (void*)0};
static volatile unsigned *g_1164 = (void*)0;
static volatile unsigned **g_1163 = &g_1164;
static unsigned *g_1211 = &g_325;
static unsigned **g_1210 = &g_1211;
static unsigned g_1276 = 18446744073709551608UL;
static union U0 g_1282[1][4] = {{{0x1EEAL}, {0x1EEAL}, {0x1EEAL}, {0x1EEAL}}};
static unsigned g_1345[2] = {4294967295UL, 4294967295UL};
static int *g_1378 = &g_86[0];
static const volatile union U1 g_1467[9][7] = {{{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}, {{0L}, {0L}, {0L}, {0L}, {0L}, {0L}, {0L}}};
static const volatile union U1 *g_1466 = &g_1467[2][0];
static volatile int g_1470 = 0x84A1F6AFL;
static volatile int *g_1469 = &g_1470;
static volatile int g_1473 = 0xDBEB1001L;
static unsigned g_1513 = 0UL;
static volatile char g_1535[8] = {0x4BL, 6L, 0x4BL, 6L, 0x4BL, 6L, 0x4BL, 6L};
static volatile char * const g_1534 = &g_1535[2];
static volatile char * const *g_1533 = &g_1534;
static short ****g_1589 = &g_517;
static int g_1597 = 0xC2C3AB57L;
static short g_1636 = 0x4CB1L;
static short * const g_1635 = &g_1636;
static short * const *g_1634 = &g_1635;
static short * const **g_1633 = &g_1634;
static short * const ***g_1632 = &g_1633;
static unsigned g_1700 = 18446744073709551612UL;
static const int g_1720[3] = {(-1L), (-1L), (-1L)};
static unsigned g_1722 = 0x7903C9B6L;
static int g_1741 = (-8L);
static const int g_1801 = (-9L);
static const int *g_1800 = &g_1801;
static char g_1857 = 0L;
static unsigned char g_1967[1] = {0UL};



static int func_1(void);
static char func_6(int * p_7, const int * p_8);
static int * func_9(unsigned char p_10, int * p_11, unsigned p_12);
static int * func_13(int * p_14, short p_15, const int p_16, int * p_17);
static unsigned short func_23(unsigned p_24, unsigned p_25, int * p_26);
static int func_27(int p_28, unsigned p_29, int * p_30, unsigned short p_31, unsigned char p_32);
static int func_33(const union U1 p_34);
static const union U1 func_35(int * p_36, unsigned char p_37, int * p_38, const int * p_39, int p_40);
static int func_43(unsigned p_44, int p_45);
static unsigned func_46(union U0 p_47, unsigned char p_48, int * p_49);
static int func_1(void)
{
    volatile int *l_3 = &g_2[4][7][1];
    int *l_41 = &g_20;
    unsigned short l_152[7][7][5] = {{{3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}}, {{3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}}, {{3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}}, {{3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}}, {{3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}}, {{3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}}, {{3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}, {3UL, 65529UL, 1UL, 0UL, 0UL}}};
    short l_1972 = 0xA747L;
    unsigned char *l_1975 = &g_189;
    int i, j, k;
    (*l_3) = g_2[3][3][0];
    if ((safe_mul_func_int8_t_s_s(func_6(func_9((*l_3), func_13(g_18, ((l_3 == g_19) , ((safe_lshift_func_uint16_t_u_u(g_20, 8)) ^ (g_20 , ((g_20 , func_23((func_27(func_33(func_35(l_41, (*l_41), &g_20, &g_20, g_20)), (*l_41), l_41, l_152[4][5][3], g_20) < 0x0E09C38FL), (*l_41), l_41)) ^ (*l_41))))), (*l_41), l_41), l_152[4][5][3]), &g_1801), (-7L))))
    {
        int l_1955 = (-1L);
        unsigned char *l_1963 = &g_119;
        unsigned char **l_1962 = &l_1963;
        unsigned char ***l_1961 = &l_1962;
        char *l_1964 = &g_223;
        unsigned char *l_1965 = &g_189;
        unsigned char *l_1966[7] = {&g_1967[0], &g_1967[0], &g_1967[0], &g_1967[0], &g_1967[0], &g_1967[0], &g_1967[0]};
        int l_1968[5][5] = {{0x4B97489DL, 0x61BBD880L, 0x4B97489DL, 0x61BBD880L, 0x4B97489DL}, {0x4B97489DL, 0x61BBD880L, 0x4B97489DL, 0x61BBD880L, 0x4B97489DL}, {0x4B97489DL, 0x61BBD880L, 0x4B97489DL, 0x61BBD880L, 0x4B97489DL}, {0x4B97489DL, 0x61BBD880L, 0x4B97489DL, 0x61BBD880L, 0x4B97489DL}, {0x4B97489DL, 0x61BBD880L, 0x4B97489DL, 0x61BBD880L, 0x4B97489DL}};
        int i, j;
        (*g_1378) |= (*l_41);
        (*g_1469) = func_43((~(((((g_1967[0] ^= (safe_rshift_func_uint16_t_u_u(((*l_41) , ((**g_1533) != ((*l_1965) ^= ((safe_add_func_uint32_t_u_u((4294967292UL <= l_1955), ((*l_41) = (safe_lshift_func_int16_t_s_s((safe_unary_minus_func_int8_t_s(g_61[0])), 7))))) >= ((*l_1963) = (l_1955 | ((safe_mul_func_int8_t_s_s(((*l_1964) = (g_1857 = (l_1961 != ((func_33(g_106) , l_1955) , &g_897[4])))), l_1955)) && 0xFD11A474L))))))), l_1955))) , (*l_41)) > l_1968[0][2]) < l_1968[0][2]) > l_1968[0][2])), g_181);
        (*g_1469) |= 0x71BF0446L;
        return (*l_3);
    }
    else
    {
        int l_1969 = (-1L);
        (*l_3) = l_1969;
    }
    (*g_1378) ^= ((safe_add_func_int32_t_s_s(l_1972, ((safe_rshift_func_int8_t_s_s((g_181 &= (&g_1211 != (void*)0)), ((*g_1635) || (*l_3)))) , (*g_1469)))) | ((((*l_1975) = (*l_41)) , (g_586 , ((safe_mul_func_int8_t_s_s((+(((-1L) || 1L) & (*l_41))), g_68)) && (*l_41)))) == 0xC6L));
    return g_86[0];
}







static char func_6(int * p_7, const int * p_8)
{
    unsigned short l_1925[2][9] = {{0xB4F5L, 0x37AAL, 2UL, 2UL, 0x37AAL, 0xB4F5L, 0x37AAL, 2UL, 2UL}, {0xB4F5L, 0x37AAL, 2UL, 2UL, 0x37AAL, 0xB4F5L, 0x37AAL, 2UL, 2UL}};
    unsigned char *l_1926 = &g_189;
    int l_1933 = 0L;
    const unsigned short l_1934[3] = {0x0246L, 0x0246L, 0x0246L};
    int *l_1935 = &g_68;
    int *l_1936[6];
    union U0 l_1947 = {-5L};
    unsigned char l_1948 = 252UL;
    const union U1 l_1949 = {0L};
    unsigned char l_1950 = 255UL;
    int i, j;
    for (i = 0; i < 6; i++)
        l_1936[i] = &g_239;
    (*g_1469) = (p_7 == ((***g_517) , func_13(p_7, (*l_1935), g_501, &l_1933)));
    (*l_1935) = (((!((((((*g_91) , (safe_mul_func_int16_t_s_s(((*g_1635) = ((**g_1533) , ((*l_1935) && ((((safe_lshift_func_uint8_t_u_u(((*l_1935) > (*l_1935)), 3)) ^ (**g_518)) , (safe_mod_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_u(func_46(l_1947, (*l_1935), &l_1933), (*l_1935))) , 4294967288UL) || l_1948), 252UL))) != (**g_518))))), (*l_1935)))) >= (*g_1800)) , (void*)0) == &g_1210) == 0x8DL)) ^ 0x80D1L) > (-4L));
    (*g_1469) = func_33(l_1949);
    return l_1950;
}







static int * func_9(unsigned char p_10, int * p_11, unsigned p_12)
{
    unsigned l_1885 = 0x745CF55AL;
    union U1 l_1888 = {0x980D8319L};
    const union U1 l_1891[10] = {{5L}, {5L}, {-1L}, {5L}, {5L}, {-1L}, {5L}, {5L}, {-1L}, {5L}};
    unsigned l_1896[4][1];
    int *l_1903 = &g_86[0];
    short **l_1922 = &g_356;
    unsigned l_1923 = 0x55949BEEL;
    int i, j;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_1896[i][j] = 1UL;
    }
    (*g_1378) = (safe_rshift_func_uint8_t_u_u((safe_add_func_uint8_t_u_u(l_1885, (p_10 ^= 0UL))), 4));
    if ((((safe_rshift_func_int8_t_s_u(((l_1888 , (safe_add_func_int16_t_s_s(p_12, l_1885))) ^ (((0x93L > p_12) || ((**g_1634) = (((((func_33(l_1891[6]) < l_1885) <= (safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(p_10, p_10)), 0xE66EL))) | 65532UL) ^ 0x023DL) || p_10))) <= l_1896[3][0])), 3)) , (*g_91)) , l_1896[3][0]))
    {
        int l_1901 = 0x11A8AA84L;
        union U0 l_1902[10][9] = {{{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}, {{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}, {{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}, {{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}, {{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}, {{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}, {{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}, {{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}, {{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}, {{0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}, {1L}, {0L}}};
        int **l_1908 = (void*)0;
        int **l_1909[10][1] = {{(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}, {(void*)0}};
        union U1 l_1920 = {0x2F108272L};
        const short * const *l_1921 = &g_516;
        int i, j;
        p_11 = ((safe_mod_func_int8_t_s_s(((p_10 , (l_1891[6].f0 && (safe_mod_func_int16_t_s_s((l_1901 | func_46(l_1902[3][2], p_12, l_1903)), (safe_mul_func_int16_t_s_s(((((safe_lshift_func_int16_t_s_u(((***g_1633) &= (!p_10)), p_12)) < (*l_1903)) , p_12) | (*l_1903)), (*l_1903))))))) || 8UL), 0x47L)) , &l_1901);
        l_1923 = ((*l_1903) = (safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(p_10, ((&g_898[3][3] != &g_898[3][3]) , 0x86A3L))), (safe_mul_func_uint16_t_u_u(p_10, (((safe_sub_func_int16_t_s_s((((((l_1891[6] , l_1920) , (l_1921 != l_1922)) && 0x7CF8L) < (*l_1903)) && (*l_1903)), p_12)) , 0x01B2L) >= p_10))))), 5)));
    }
    else
    {
        int **l_1924 = &l_1903;
        (*l_1924) = (void*)0;
    }
    return l_1903;
}







static int * func_13(int * p_14, short p_15, const int p_16, int * p_17)
{
    char *l_1663 = &g_181;
    int l_1664 = 2L;
    unsigned char *l_1665[9];
    unsigned short *l_1666[10] = {&g_61[4], &g_61[4], &g_61[3], &g_61[4], &g_61[4], &g_61[3], &g_61[4], &g_61[4], &g_61[3], &g_61[4]};
    int l_1667 = 0x8B1F1F43L;
    const union U1 l_1686 = {1L};
    union U1 **l_1688[8] = {&g_546, (void*)0, &g_546, (void*)0, &g_546, (void*)0, &g_546, (void*)0};
    unsigned ****l_1699 = &g_956[6][2][7];
    unsigned char **l_1777[10] = {(void*)0, (void*)0, &l_1665[1], (void*)0, (void*)0, &l_1665[1], (void*)0, (void*)0, &l_1665[1], (void*)0};
    unsigned char ***l_1776[8][1][2] = {{{(void*)0, &l_1777[3]}}, {{(void*)0, &l_1777[3]}}, {{(void*)0, &l_1777[3]}}, {{(void*)0, &l_1777[3]}}, {{(void*)0, &l_1777[3]}}, {{(void*)0, &l_1777[3]}}, {{(void*)0, &l_1777[3]}}, {{(void*)0, &l_1777[3]}}};
    int *l_1791 = &l_1664;
    int l_1798 = 0x0168DCADL;
    const int **l_1799[8] = {&g_526, &g_526, &g_526, &g_526, &g_526, &g_526, &g_526, &g_526};
    short l_1816 = 1L;
    union U0 *l_1827 = &g_50;
    int i, j, k;
    for (i = 0; i < 9; i++)
        l_1665[i] = &g_189;
    if (((((*l_1663) = p_15) >= ((+p_15) > ((***g_517) = (l_1667 &= (p_16 || (l_1664 & ((0x4EB0BFACL >= ((p_16 <= (g_119 ^= 0UL)) != ((void*)0 != l_1666[8]))) > p_16))))))) , l_1664))
    {
        int *l_1668[10] = {&g_86[2], &g_239, &g_86[2], &g_239, &g_86[2], &g_239, &g_86[2], &g_239, &g_86[2], &g_239};
        union U0 l_1669 = {1L};
        int **l_1672 = (void*)0;
        int **l_1673 = (void*)0;
        int **l_1674 = (void*)0;
        int **l_1675 = &l_1668[1];
        union U1 *l_1687 = &g_106;
        unsigned char l_1708[4];
        char *l_1735 = &g_309;
        char *l_1736 = &g_309;
        unsigned short *l_1751 = &g_501;
        unsigned short l_1760 = 0x3033L;
        int i;
        for (i = 0; i < 4; i++)
            l_1708[i] = 0x70L;
        for (g_68 = 0; (g_68 <= 0); g_68 += 1)
        {
            return l_1668[1];
        }
        l_1667 &= func_46(l_1669, (((safe_sub_func_int32_t_s_s((*p_17), (*p_17))) & 1UL) && p_16), &l_1664);
        if (((*g_19) = 0L))
        {
            union U1 **l_1690 = &l_1687;
            union U1 ***l_1689 = &l_1690;
            int l_1707 = (-1L);
            int *l_1716 = (void*)0;
            unsigned char l_1717 = 255UL;
            int l_1724[2][2][8] = {{{0x1D078245L, 1L, 1L, 0x826BFD41L, 0x3C60DF38L, 1L, 0x3C60DF38L, 0x826BFD41L}, {0x1D078245L, 1L, 1L, 0x826BFD41L, 0x3C60DF38L, 1L, 0x3C60DF38L, 0x826BFD41L}}, {{0x1D078245L, 1L, 1L, 0x826BFD41L, 0x3C60DF38L, 1L, 0x3C60DF38L, 0x826BFD41L}, {0x1D078245L, 1L, 1L, 0x826BFD41L, 0x3C60DF38L, 1L, 0x3C60DF38L, 0x826BFD41L}}};
            char *l_1733[9][6][3] = {{{(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}}, {{(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}}, {{(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}}, {{(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}}, {{(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}}, {{(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}}, {{(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}}, {{(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}}, {{(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}, {(void*)0, &g_181, (void*)0}}};
            const short l_1752[5][9] = {{(-1L), (-5L), 0xA910L, (-5L), (-1L), 0xF283L, 0xA910L, 0xF283L, (-1L)}, {(-1L), (-5L), 0xA910L, (-5L), (-1L), 0xF283L, 0xA910L, 0xF283L, (-1L)}, {(-1L), (-5L), 0xA910L, (-5L), (-1L), 0xF283L, 0xA910L, 0xF283L, (-1L)}, {(-1L), (-5L), 0xA910L, (-5L), (-1L), 0xF283L, 0xA910L, 0xF283L, (-1L)}, {(-1L), (-5L), 0xA910L, (-5L), (-1L), 0xF283L, 0xA910L, 0xF283L, (-1L)}};
            int i, j, k;
            (*g_1378) |= (l_1688[7] == ((*l_1689) = &l_1687));
            for (g_20 = 0; (g_20 >= 15); g_20 = safe_add_func_int16_t_s_s(g_20, 5))
            {
                unsigned l_1704 = 0x41566227L;
                unsigned short l_1709 = 65532UL;
                unsigned l_1714 = 0x49B81813L;
                int *l_1721 = &g_68;
                int *l_1723 = &l_1707;
                char **l_1734 = (void*)0;
                union U0 l_1739[7][3][6] = {{{{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}}, {{{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}}, {{{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}}, {{{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}}, {{{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}}, {{{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}}, {{{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}, {{0xF682L}, {1L}, {1L}, {0xCA8DL}, {1L}, {6L}}}};
                unsigned ****l_1740 = &g_956[4][2][7];
                unsigned *l_1742 = (void*)0;
                unsigned *l_1743 = &g_1345[1];
                int i, j, k;
                for (g_1597 = 10; (g_1597 != (-10)); --g_1597)
                {
                    unsigned ****l_1698 = &g_956[4][2][7];
                    unsigned *****l_1697 = &l_1698;
                    int l_1701 = 1L;
                    int l_1715 = 0L;
                    for (l_1664 = 1; (l_1664 <= 7); l_1664 += 1)
                    {
                        int i;
                        g_1134[l_1664] = (void*)0;
                    }
                    (**l_1675) = ((**g_518) | ((**g_1634) = (func_43((safe_add_func_uint8_t_u_u((g_1700 |= (((*l_1697) = &g_956[4][2][7]) != l_1699)), (l_1701 <= (safe_mul_func_uint16_t_u_u(l_1686.f0, l_1686.f0))))), (l_1704 || (l_1686.f0 ^ ((l_1667 &= (safe_rshift_func_int8_t_s_s(((*p_17) != p_16), l_1707))) < 3L)))) == l_1708[0])));
                    (*g_1378) = ((((((*l_1663) = (((*g_985) = 0x8BA9L) | (***g_517))) > (g_589.f0 <= g_309)) != l_1704) < (l_1709 || func_46(l_1669, (l_1715 = (l_1701 = (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*p_17), ((**l_1675) = (p_16 <= l_1714)))), 11)))), l_1716))) < 0x2F0DL);
                }
                l_1724[0][1][5] &= ((l_1717 != func_43(p_15, ((*l_1723) = (l_1714 || (((**g_1210) |= (~((l_1664 , g_946[5][5]) , (p_16 , p_15)))) , l_1664))))) <= l_1664);
                if ((safe_sub_func_int8_t_s_s(((*l_1721) < 0x17L), (0xAA5205EEL <= (((*l_1743) = (safe_sub_func_int16_t_s_s(((safe_add_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((((l_1735 = l_1733[2][5][2]) != (l_1736 = l_1665[1])) || (((safe_lshift_func_int8_t_s_s((func_46(l_1669, p_15, l_1721) , p_15), 4)) , l_1739[4][0][3]) , 0x04E2L)) , (void*)0) != l_1740), g_1741)), 0xFB7691B9L)) < (*l_1721)), 0x0EA2L))) && 0x7D7CF1CFL)))))
                {
                    return l_1721;
                }
                else
                {
                    int l_1746 = 0xA28352AAL;
                    (*g_1378) |= ((-10L) & ((!(safe_mul_func_uint8_t_u_u((l_1746 = ((((**g_1634) |= (g_589.f0 , p_16)) < (l_1746 , (safe_add_func_uint16_t_u_u(65533UL, (p_15 >= 0xC1E2FD6EL))))) < ((*l_1736) = (safe_add_func_uint8_t_u_u((*l_1721), p_16))))), 0x6BL))) || 0x5D2366D9L));
                    (**l_1675) = (&l_1665[1] == &g_898[1][4]);
                }
                if (l_1752[3][2])
                    break;
            }
        }
        else
        {
            unsigned *** const l_1755 = &g_1210;
            int l_1758[9];
            int l_1759[7][10];
            int i, j;
            for (i = 0; i < 9; i++)
                l_1758[i] = 7L;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 10; j++)
                    l_1759[i][j] = 0xCAB1C8A9L;
            }
            l_1664 = ((*g_19) = (l_1760 = (g_61[6] > (safe_mod_func_uint8_t_u_u((l_1758[1] != l_1759[3][5]), 0x75L)))));
        }
    }
    else
    {
        union U0 l_1765 = {0xEE5FL};
        int *l_1792 = &l_1667;
        int **l_1794 = (void*)0;
        int **l_1795 = (void*)0;
        for (g_181 = (-14); (g_181 < (-9)); ++g_181)
        {
            short l_1772 = 0L;
            int *l_1773[7][4] = {{(void*)0, (void*)0, &g_86[0], (void*)0}, {(void*)0, (void*)0, &g_86[0], (void*)0}, {(void*)0, (void*)0, &g_86[0], (void*)0}, {(void*)0, (void*)0, &g_86[0], (void*)0}, {(void*)0, (void*)0, &g_86[0], (void*)0}, {(void*)0, (void*)0, &g_86[0], (void*)0}, {(void*)0, (void*)0, &g_86[0], (void*)0}};
            const union U1 l_1783 = {0x1DA78A19L};
            int **l_1793[6] = {&g_1134[1], &g_1134[1], &l_1791, &g_1134[1], &g_1134[1], &l_1791};
            int i, j;
        }
        p_17 = p_17;
    }
    if (((&g_1210 == (void*)0) ^ (safe_mod_func_int8_t_s_s((func_33(g_106) != p_15), p_15))))
    {
        unsigned short **l_1806 = &l_1666[8];
        int l_1807 = (-7L);
        union U0 l_1812[1] = {{0x31D7L}};
        char *l_1813 = (void*)0;
        char *l_1814 = &g_223;
        int l_1815 = 0xF9DB8486L;
        int i;
        l_1815 |= (((safe_lshift_func_uint16_t_u_u((*g_985), (safe_sub_func_int32_t_s_s(((0x25L || p_15) != (l_1806 != (l_1807 , l_1806))), (((safe_mul_func_int8_t_s_s(p_16, ((*l_1814) = ((*l_1663) ^= ((+((safe_sub_func_int32_t_s_s((func_46(l_1812[0], p_15, &l_1798) <= 0x983FACCDL), 0x9E3C980DL)) > (*l_1791))) > p_15))))) | 0x45L) > l_1812[0].f0))))) == 0x4731814BL) | p_16);
        l_1816 = (*g_1378);
        p_17 = p_14;
    }
    else
    {
        short l_1834 = 0x381EL;
        unsigned char l_1835 = 0x57L;
        int *l_1845 = &l_1667;
        union U1 * const l_1862 = &g_106;
        if ((*l_1791))
        {
            (*g_19) = (*p_17);
        }
        else
        {
            const unsigned l_1836 = 1UL;
            union U1 l_1837 = {-7L};
            short l_1842 = (-8L);
            int *l_1854 = &l_1664;
            const union U0 l_1869[5] = {{0L}, {9L}, {0L}, {9L}, {0L}};
            int i;
            (*g_1378) &= (0xBFL || p_16);
            if ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((l_1837 , l_1835) >= 0x48183D10L), 1)), (*l_1791))), 0xA2L)))
            {
                int l_1851[5][3] = {{0xEC9DBCB9L, 8L, 6L}, {0xEC9DBCB9L, 8L, 6L}, {0xEC9DBCB9L, 8L, 6L}, {0xEC9DBCB9L, 8L, 6L}, {0xEC9DBCB9L, 8L, 6L}};
                union U1 **l_1856 = &g_546;
                int l_1872 = 0x3A89C07BL;
                int i, j;
                (*l_1845) ^= (((*l_1791) = func_46(g_1282[0][1], (~(((safe_mod_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((g_1345[1] , func_43(l_1842, (((*g_1378) = (*p_17)) , (((safe_lshift_func_uint8_t_u_u((*l_1791), 0)) , 0xA54EL) & (***g_517))))), ((*g_1533) != (void*)0))), p_16)) == 6L) , 0x7CL)), l_1845)) || 9UL);
                (*l_1791) |= (*p_17);
                for (g_1597 = 24; (g_1597 < 21); g_1597 = safe_sub_func_int8_t_s_s(g_1597, 1))
                {
                    const unsigned char l_1848 = 250UL;
                    union U0 l_1853 = {0x5B27L};
                    union U1 **l_1855 = (void*)0;
                    int *l_1874 = &g_86[0];
                    for (g_580 = 0; (g_580 >= 0); g_580 -= 1)
                    {
                        unsigned char l_1852 = 1UL;
                        union U0 l_1870[8][2][10] = {{{{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}, {{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}}, {{{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}, {{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}}, {{{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}, {{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}}, {{{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}, {{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}}, {{{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}, {{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}}, {{{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}, {{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}}, {{{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}, {{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}}, {{{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}, {{-2L}, {0xADD3L}, {5L}, {0x5019L}, {0L}, {0x68E5L}, {4L}, {-1L}, {-1L}, {0xEEE6L}}}};
                        int l_1871 = 0x5E63F4E8L;
                        int **l_1873[10] = {&g_162, (void*)0, (void*)0, (void*)0, (void*)0, &g_162, (void*)0, (void*)0, (void*)0, (void*)0};
                        int i, j, k;
                        if (l_1848)
                            break;
                        (*g_1378) &= (safe_lshift_func_uint16_t_u_u(((*g_985) = 65535UL), ((((l_1852 &= l_1851[2][2]) > func_46(l_1853, (*l_1845), l_1854)) , l_1855) == l_1856)));
                        (*l_1791) = g_1857;
                        l_1845 = (l_1874 = (((((p_15 , (*g_985)) > ((((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(((l_1872 = ((&l_1837 != l_1862) <= ((l_1848 , (safe_add_func_int32_t_s_s((((*p_17) ^ 4294967289UL) ^ ((l_1871 = func_43((safe_sub_func_int8_t_s_s((((((safe_lshift_func_int8_t_s_u(0x83L, p_15)) , l_1869[2]) , l_1870[1][1][5]) , p_16) && 249UL), 0xA8L)), (*l_1791))) < p_16)), 0x40110829L))) <= p_15))) == 0L), 0xC1E6L)) <= l_1853.f0), 5)) || 0x21F6BFFFL) , l_1851[2][2]) >= p_16) != l_1848) < p_16)) , 0xC719L) ^ (*g_985)) , p_17));
                    }
                    for (g_106.f0 = (-8); (g_106.f0 == (-8)); g_106.f0++)
                    {
                        int *l_1877[6] = {&g_68, (void*)0, &g_68, (void*)0, &g_68, (void*)0};
                        int i;
                        l_1877[1] = (void*)0;
                    }
                }
            }
            else
            {
                return p_17;
            }
            for (g_181 = 0; (g_181 <= 7); g_181 += 1)
            {
                int * const * const l_1878 = &l_1854;
                int * const *l_1880[8] = {&g_162, (void*)0, &g_162, (void*)0, &g_162, (void*)0, &g_162, (void*)0};
                int * const **l_1879 = &l_1880[5];
                int i;
                (*l_1879) = l_1878;
                for (l_1667 = 7; (l_1667 >= 0); l_1667 -= 1)
                {
                    return p_17;
                }
            }
        }
        l_1845 = l_1845;
        return p_14;
    }
    return p_17;
}







static unsigned short func_23(unsigned p_24, unsigned p_25, int * p_26)
{
    short l_1244 = 0x2517L;
    int l_1245 = 0x7FB3D2B4L;
    int l_1246[9][6] = {{1L, 0x5C86A93FL, (-1L), 1L, 0x5C86A93FL, 9L}, {1L, 0x5C86A93FL, (-1L), 1L, 0x5C86A93FL, 9L}, {1L, 0x5C86A93FL, (-1L), 1L, 0x5C86A93FL, 9L}, {1L, 0x5C86A93FL, (-1L), 1L, 0x5C86A93FL, 9L}, {1L, 0x5C86A93FL, (-1L), 1L, 0x5C86A93FL, 9L}, {1L, 0x5C86A93FL, (-1L), 1L, 0x5C86A93FL, 9L}, {1L, 0x5C86A93FL, (-1L), 1L, 0x5C86A93FL, 9L}, {1L, 0x5C86A93FL, (-1L), 1L, 0x5C86A93FL, 9L}, {1L, 0x5C86A93FL, (-1L), 1L, 0x5C86A93FL, 9L}};
    char l_1247 = 1L;
    const unsigned short l_1248 = 0xE3FFL;
    int *l_1249 = &g_239;
    unsigned char *l_1258[8] = {&g_119, &g_119, &g_119, &g_119, &g_119, &g_119, &g_119, &g_119};
    union U1 l_1259 = {0L};
    union U1 *l_1321 = &g_106;
    union U0 l_1328 = {9L};
    int l_1409 = 2L;
    int *l_1426 = &g_239;
    char l_1428 = 1L;
    int *l_1538 = (void*)0;
    unsigned l_1539 = 1UL;
    unsigned ****l_1583 = &g_956[4][1][2];
    unsigned **l_1651 = (void*)0;
    const unsigned short ** const *l_1652 = &g_90[1][1];
    int i, j;
    l_1246[2][1] = (safe_sub_func_uint32_t_u_u(0x4ADB773EL, (l_1244 != (l_1245 = 0x2CD074F6L))));
    l_1246[2][1] = (p_25 < ((*l_1249) = (l_1247 == ((***g_517) <= l_1248))));
    if ((safe_add_func_int32_t_s_s((*p_26), ((safe_add_func_int16_t_s_s((***g_517), (safe_sub_func_uint8_t_u_u(((((0x4B4D2010L || (*p_26)) && (((*l_1249) & ((safe_mul_func_uint8_t_u_u((*l_1249), (g_119 |= (&l_1248 != (void*)0)))) > ((l_1259 , (*l_1249)) ^ (*l_1249)))) > (*l_1249))) == (*l_1249)) == 1L), g_948[4])))) , (*p_26)))))
    {
        union U1 l_1262 = {0x4521F0EAL};
        unsigned **l_1271 = &g_1211;
        int *l_1273 = (void*)0;
        int l_1283[6][2][3] = {{{0xEC8273F4L, 0xA9A3F18EL, (-1L)}, {0xEC8273F4L, 0xA9A3F18EL, (-1L)}}, {{0xEC8273F4L, 0xA9A3F18EL, (-1L)}, {0xEC8273F4L, 0xA9A3F18EL, (-1L)}}, {{0xEC8273F4L, 0xA9A3F18EL, (-1L)}, {0xEC8273F4L, 0xA9A3F18EL, (-1L)}}, {{0xEC8273F4L, 0xA9A3F18EL, (-1L)}, {0xEC8273F4L, 0xA9A3F18EL, (-1L)}}, {{0xEC8273F4L, 0xA9A3F18EL, (-1L)}, {0xEC8273F4L, 0xA9A3F18EL, (-1L)}}, {{0xEC8273F4L, 0xA9A3F18EL, (-1L)}, {0xEC8273F4L, 0xA9A3F18EL, (-1L)}}};
        const int *l_1289 = &g_20;
        int i, j, k;
        for (l_1259.f0 = 7; (l_1259.f0 >= 0); l_1259.f0 -= 1)
        {
            char l_1272 = 3L;
            int l_1281 = 0xC0019B74L;
            unsigned *l_1288 = &g_78;
            const union U1 l_1290 = {-5L};
            union U0 *l_1299 = (void*)0;
            union U0 **l_1298 = &l_1299;
            union U0 ***l_1297[10][8] = {{&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}, {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}, {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}, {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}, {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}, {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}, {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}, {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}, {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}, {&l_1298, &l_1298, (void*)0, &l_1298, &l_1298, (void*)0, &l_1298, &l_1298}};
            union U1 **l_1311[3];
            unsigned char **l_1320[1][7][3] = {{{&l_1258[1], &l_1258[1], &l_1258[1]}, {&l_1258[1], &l_1258[1], &l_1258[1]}, {&l_1258[1], &l_1258[1], &l_1258[1]}, {&l_1258[1], &l_1258[1], &l_1258[1]}, {&l_1258[1], &l_1258[1], &l_1258[1]}, {&l_1258[1], &l_1258[1], &l_1258[1]}, {&l_1258[1], &l_1258[1], &l_1258[1]}}};
            unsigned char ***l_1319 = &l_1320[0][1][0];
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1311[i] = &g_546;
            l_1272 &= (((safe_lshift_func_uint8_t_u_u(3UL, (l_1262 , (safe_lshift_func_int8_t_s_s(l_1262.f0, (((safe_rshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(p_25, (*g_985))), l_1262.f0)) >= 0L) & (l_1271 == (void*)0)), p_24)) < p_25) , g_61[0])))))) , (*l_1249)) > 0x225564CFL);
            for (g_501 = 0; (g_501 <= 7); g_501 += 1)
            {
                unsigned char l_1274[4][8][8] = {{{0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}}, {{0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}}, {{0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}}, {{0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}, {0x62L, 0xE9L, 0xC2L, 1UL, 1UL, 1UL, 1UL, 1UL}}};
                int l_1279 = (-1L);
                int l_1280 = 0xF5C1FD8DL;
                int i, j, k;
                for (g_189 = 3; (g_189 <= 8); g_189 += 1)
                {
                    unsigned char l_1275 = 2UL;
                    for (l_1244 = 8; (l_1244 >= 0); l_1244 -= 1)
                    {
                        char *l_1277 = &l_1247;
                        char *l_1278 = &g_309;
                        int i;
                        l_1273 = (g_1134[l_1259.f0] = g_1134[g_501]);
                        l_1274[3][7][2] ^= g_61[(l_1244 + 1)];
                        l_1280 = (l_1279 = func_43(l_1275, (((*l_1278) = ((*l_1277) = (p_25 ^ (l_1274[2][3][0] , g_1276)))) ^ p_25)));
                    }
                    for (g_119 = 0; (g_119 <= 7); g_119 += 1)
                    {
                        int i;
                        if (l_1281)
                            break;
                    }
                }
            }
            if ((((func_33(l_1290) || 1UL) , 0x64B001B4L) != (*p_26)))
            {
                return (*l_1289);
            }
            else
            {
                int l_1308 = 0xFE73155EL;
                for (p_24 = 1; (p_24 <= 8); p_24 += 1)
                {
                    int **l_1291 = (void*)0;
                    int **l_1292 = &g_1134[1];
                    union U0 l_1305 = {0xECDDL};
                    const char l_1307 = (-1L);
                    (*l_1292) = p_26;
                    for (l_1272 = 8; (l_1272 >= 0); l_1272 -= 1)
                    {
                        union U0 l_1300 = {3L};
                        int *l_1306 = &l_1245;
                        (*l_1306) &= ((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((l_1297[5][5] == (void*)0), (func_46(l_1300, (safe_lshift_func_int16_t_s_s(p_25, p_24)), p_26) <= (*l_1289)))), p_25)) || 0x57480A9AL);
                    }
                    (*l_1292) = p_26;
                }
                if ((*p_26))
                    break;
                if (l_1308)
                    continue;
            }
            if ((func_43(((*p_26) , (safe_rshift_func_int8_t_s_u(((void*)0 != l_1311[2]), (func_43((p_25 | (+((safe_rshift_func_int16_t_s_s(((p_24 < p_24) && p_25), 1)) || (*l_1249)))), p_25) , p_25)))), g_580) < 251UL))
            {
                int l_1331 = 8L;
                l_1321 = &l_1259;
                (*l_1249) = (((safe_add_func_int16_t_s_s(((*l_1249) >= (((-1L) > (safe_rshift_func_int8_t_s_s((((**g_518) & (***g_517)) & (safe_add_func_int16_t_s_s(func_46(l_1328, (*l_1249), &l_1283[5][0][1]), (safe_mul_func_uint16_t_u_u((((void*)0 != (*g_518)) , p_25), 0x1A60L))))), l_1331))) == (*l_1249))), (*l_1249))) , 18446744073709551615UL) , (*p_26));
                if ((*l_1249))
                    continue;
                if ((*p_26))
                    break;
            }
            else
            {
                unsigned l_1332 = 0x198C92D1L;
                l_1332 = ((-2L) <= (*p_26));
                return (*g_985);
            }
            for (g_62 = 8; (g_62 >= 0); g_62 -= 1)
            {
                return (*l_1249);
            }
        }
    }
    else
    {
        union U0 l_1340 = {0x3422L};
        unsigned *l_1343 = &g_78;
        unsigned *l_1344 = &g_1345[1];
        int *l_1346[7][7] = {{&g_86[0], &l_1246[5][3], &g_68, &l_1246[5][3], &g_86[0], &g_68, &l_1246[5][5]}, {&g_86[0], &l_1246[5][3], &g_68, &l_1246[5][3], &g_86[0], &g_68, &l_1246[5][5]}, {&g_86[0], &l_1246[5][3], &g_68, &l_1246[5][3], &g_86[0], &g_68, &l_1246[5][5]}, {&g_86[0], &l_1246[5][3], &g_68, &l_1246[5][3], &g_86[0], &g_68, &l_1246[5][5]}, {&g_86[0], &l_1246[5][3], &g_68, &l_1246[5][3], &g_86[0], &g_68, &l_1246[5][5]}, {&g_86[0], &l_1246[5][3], &g_68, &l_1246[5][3], &g_86[0], &g_68, &l_1246[5][5]}, {&g_86[0], &l_1246[5][3], &g_68, &l_1246[5][3], &g_86[0], &g_68, &l_1246[5][5]}};
        unsigned short *l_1362 = (void*)0;
        short **l_1411[1];
        unsigned *** const l_1421 = &g_957;
        unsigned short l_1425 = 0UL;
        const int **l_1427[10] = {&g_526, (void*)0, &g_526, (void*)0, &g_526, (void*)0, &g_526, (void*)0, &g_526, (void*)0};
        volatile int *l_1472 = &g_1473;
        union U1 l_1487[2][3] = {{{0x98C7E2D7L}, {0x98C7E2D7L}, {0x98C7E2D7L}}, {{0x98C7E2D7L}, {0x98C7E2D7L}, {0x98C7E2D7L}}};
        unsigned short ***l_1492 = &g_984[8][3][4];
        unsigned **l_1498 = &g_1211;
        int i, j;
        for (i = 0; i < 1; i++)
            l_1411[i] = &g_356;
        l_1246[2][1] |= ((((*l_1344) = ((*l_1343) = (g_50 , (0xD5L < (((((*l_1249) &= (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_u((&l_1244 != ((*g_518) = (**g_517))), 6))))) && (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(251UL, (l_1340 , (safe_mod_func_uint16_t_u_u((p_25 <= g_580), 0xBAFFL))))), l_1340.f0))) , 0xCFL) && p_25))))) , 0L) || l_1340.f0);
        for (g_119 = 0; (g_119 <= 42); ++g_119)
        {
            unsigned l_1357 = 0x08079766L;
            int l_1361 = 0xB562592FL;
            unsigned short *l_1363[4];
            int l_1364 = 0x5BE67B76L;
            int l_1365 = 0xEE69E19BL;
            unsigned l_1377 = 4294967295UL;
            int *l_1398[5];
            short l_1403[1];
            union U0 l_1404 = {1L};
            int i;
            for (i = 0; i < 4; i++)
                l_1363[i] = &g_61[3];
            for (i = 0; i < 5; i++)
                l_1398[i] = &g_86[3];
            for (i = 0; i < 1; i++)
                l_1403[i] = 0x1FF5L;
            for (l_1244 = 0; (l_1244 != 4); l_1244 = safe_add_func_uint16_t_u_u(l_1244, 5))
            {
                short *l_1356 = &l_1244;
                int l_1360 = 0L;
                int l_1366 = 0x058D1E9DL;
            }
            (*l_1249) = (*g_19);
            (*g_1378) = 0xC6DE7FA4L;
            if ((*p_26))
            {
                union U1 *l_1399 = &l_1259;
                short l_1405 = 1L;
                int l_1408 = 0x42F2FEA3L;
                for (l_1361 = 0; (l_1361 <= 8); l_1361 += 1)
                {
                    union U1 **l_1400[6];
                    int l_1406[10][4][6] = {{{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}, {{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}, {{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}, {{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}, {{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}, {{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}, {{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}, {{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}, {{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}, {{0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}, {0x4EF9F3A9L, 0x059C1E4BL, (-10L), 0x876D4F36L, 0x429B5B9CL, 0x01A0D55CL}}};
                    char *l_1407 = &g_309;
                    int l_1410 = 0xD62C596EL;
                    int i, j, k;
                    for (i = 0; i < 6; i++)
                        l_1400[i] = &l_1399;
                    l_1398[0] = p_26;
                    l_1399 = l_1399;
                    l_1410 = ((*l_1249) &= ((safe_rshift_func_uint16_t_u_s((l_1403[0] , (((+(func_46(l_1404, p_25, &l_1246[8][0]) | ((l_1408 = ((*l_1407) = (((*l_1344) |= l_1405) , l_1406[0][2][2]))) ^ (l_1406[6][0][0] & l_1409)))) & 0UL) < (*g_91))), 12)) && 1L));
                }
            }
            else
            {
                int l_1412 = (-5L);
                (*l_1249) = (*g_19);
                (*g_517) = l_1411[0];
                if ((*l_1249))
                    continue;
                (*g_1378) = (l_1412 | 0xC815L);
            }
        }
        for (g_223 = 3; (g_223 >= 0); g_223 -= 1)
        {
            const union U1 l_1413 = {0xA4C489E4L};
            char *l_1422 = &g_309;
            (*l_1249) = func_33(l_1413);
            l_1246[2][1] |= (((p_24 < (safe_sub_func_int32_t_s_s(0xC2C17044L, (safe_mod_func_uint16_t_u_u((*l_1249), func_43((*g_1211), (((*l_1344) = (p_24 | 0x09L)) <= ((((*g_985) = (l_1413.f0 | ((***g_517) == (safe_unary_minus_func_int16_t_s((safe_lshift_func_int8_t_s_u(((*l_1422) = (l_1421 == &g_957)), p_25))))))) >= 0UL) >= (*l_1249))))))))) == l_1413.f0) != (*p_26));
            return p_24;
        }
        if ((+(((p_25 , p_24) , (((*l_1249) |= ((safe_mul_func_uint8_t_u_u(p_25, func_33((*l_1321)))) != 0xBBB7L)) > l_1428)) > p_24)))
        {
            unsigned short l_1435 = 0xF71AL;
            int *l_1441 = &g_20;
            char l_1449 = 0L;
            unsigned char l_1453 = 0x10L;
            const int l_1454[8][9][3] = {{{0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}}, {{0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}}, {{0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}}, {{0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}}, {{0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}}, {{0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}}, {{0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}}, {{0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}, {0xCD9174D8L, 0xB8DEDA6DL, 0xCD9174D8L}}};
            union U0 l_1476[8] = {{0x5C3DL}, {3L}, {0x5C3DL}, {3L}, {0x5C3DL}, {3L}, {0x5C3DL}, {3L}};
            unsigned l_1483 = 1UL;
            const int ***l_1484 = &l_1427[3];
            short *l_1523 = &g_99;
            unsigned short l_1544[5] = {5UL, 0xB453L, 5UL, 0xB453L, 5UL};
            unsigned l_1581 = 0xF22F3FC6L;
            short ****l_1588 = (void*)0;
            int *l_1600 = &g_20;
            union U0 l_1602 = {-8L};
            const union U1 l_1606 = {0x299D7C96L};
            int i, j, k;
            for (g_325 = 0; (g_325 <= 1); g_325 += 1)
            {
                const union U1 l_1436 = {0xB6B49A37L};
                union U0 *l_1438 = &g_1282[0][2];
                union U0 l_1461 = {0xB1C9L};
                int ***l_1477 = &g_84[0][0];
                unsigned **l_1499 = &g_1211;
                int *l_1501[4][10] = {{&g_68, &g_68, &g_239, &g_86[0], (void*)0, &g_86[0], &g_239, &g_68, &g_68, &g_239}, {&g_68, &g_68, &g_239, &g_86[0], (void*)0, &g_86[0], &g_239, &g_68, &g_68, &g_239}, {&g_68, &g_68, &g_239, &g_86[0], (void*)0, &g_86[0], &g_239, &g_68, &g_68, &g_239}, {&g_68, &g_68, &g_239, &g_86[0], (void*)0, &g_86[0], &g_239, &g_68, &g_68, &g_239}};
                const union U1 **l_1514 = (void*)0;
                const union U1 *l_1516 = &l_1487[1][2];
                const union U1 **l_1515 = &l_1516;
                union U1 *l_1530 = &l_1259;
                char *l_1537 = &g_181;
                char **l_1536 = &l_1537;
                int i, j;
            }
            if (l_1539)
            {
                short l_1545 = 0x92F6L;
                int l_1546 = (-7L);
                int *l_1551[9][2] = {{&l_1409, &l_1409}, {&l_1409, &l_1409}, {&l_1409, &l_1409}, {&l_1409, &l_1409}, {&l_1409, &l_1409}, {&l_1409, &l_1409}, {&l_1409, &l_1409}, {&l_1409, &l_1409}, {&l_1409, &l_1409}};
                const int l_1566 = 0x7F6E6F7AL;
                unsigned l_1573 = 0xC26B34C0L;
                int i, j;
                (*g_1378) = (safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s((((*g_985) = p_24) | ((((*p_26) == (*p_26)) || ((l_1544[4] ^ (g_78 > l_1545)) || (*l_1426))) <= p_24)), ((l_1546 ^= (((((void*)0 != p_26) , (*l_1249)) , (*l_1426)) & g_874.f0)) <= p_24))), l_1545));
                if ((((p_25 && 0xD025L) >= ((safe_lshift_func_uint8_t_u_u(((*p_26) , p_24), p_24)) < (((l_1546 = ((6UL > p_24) >= (safe_mod_func_uint8_t_u_u((+(l_1545 && func_33(l_1487[1][0]))), p_24)))) , &l_1328) != (void*)0))) ^ p_25))
                {
                    int l_1570 = 0x09DB72F7L;
                    int *l_1572 = &g_20;
                    if (((*l_1426) = (*p_26)))
                    {
                        const unsigned l_1567 = 4UL;
                        (*g_1378) = (((void*)0 != &g_273[1][2]) > (((*g_985) = (~((safe_unary_minus_func_uint8_t_u((safe_rshift_func_uint16_t_u_u(p_24, ((safe_mod_func_uint8_t_u_u(func_46(l_1340, (((((safe_rshift_func_uint8_t_u_u(l_1567, 3)) , p_24) , 0x14L) | p_24) & l_1546), &l_1246[2][1]), l_1567)) <= 6L))))) > 1UL))) && 0xDD1AL));
                    }
                    else
                    {
                        (*g_1378) = ((*l_1426) = (p_24 | (*l_1441)));
                        return (*l_1249);
                    }
                    l_1573 ^= (((((***g_517) , p_25) , ((((safe_mod_func_uint16_t_u_u(l_1570, (l_1566 || (safe_unary_minus_func_uint16_t_u(((-4L) | l_1545)))))) , 0x82B42921L) ^ 0x4B6BFCDEL) , p_25)) , 1L) == p_24);
                }
                else
                {
                    int *l_1575 = &l_1245;
                    (*g_1378) = ((*l_1426) &= (*g_1378));
                    for (g_1513 = 0; (g_1513 <= 5); g_1513 += 1)
                    {
                        int *l_1574 = &l_1546;
                        l_1249 = p_26;
                        l_1441 = (l_1575 = l_1574);
                    }
                }
            }
            else
            {
                unsigned char l_1576 = 0UL;
                for (g_108 = 0; (g_108 <= 0); g_108 += 1)
                {
                    unsigned char l_1582 = 255UL;
                    p_26 = p_26;
                    if (l_1576)
                        break;
                    for (l_1409 = 0; (l_1409 >= 0); l_1409 -= 1)
                    {
                        p_26 = &l_1246[2][1];
                    }
                    (*l_1426) = ((*l_1426) == ((**g_518) = ((safe_sub_func_uint8_t_u_u(p_25, ((((&g_648[0] != (((*g_985) = ((*l_1441) > (((*g_1378) = (func_43(((safe_sub_func_uint8_t_u_u((((*l_1426) > (g_189 = l_1576)) & (((p_24 | p_24) <= ((g_119 ^= (l_1581 && l_1582)) & p_24)) ^ 0x7A4FL)), 1L)) != p_25), g_874.f0) | 4294967295UL)) <= (*p_26)))) , l_1583)) || 0x78F87735L) < 0xC0E7L) == l_1576))) > 0x99L)));
                }
                return p_25;
            }
            for (l_1247 = 2; (l_1247 <= 6); l_1247 += 1)
            {
                short *****l_1590 = &l_1588;
                int l_1601 = 0L;
                (*l_1426) = ((((safe_rshift_func_int16_t_s_u((p_24 <= ((l_1523 != (void*)0) , ((*g_985) = (&g_517 == ((*l_1590) = (g_1589 = l_1588)))))), 1)) , p_25) <= (safe_rshift_func_uint16_t_u_s(p_25, 5))) != (safe_rshift_func_int8_t_s_u(g_946[5][5], 3)));
                if (((safe_sub_func_uint32_t_u_u(((void*)0 != &g_985), (p_24 == ((func_43(g_1597, g_589.f0) || p_25) ^ (safe_sub_func_uint8_t_u_u(func_46(l_1476[0], p_24, l_1600), (*l_1426))))))) | (*p_26)))
                {
                    return (*l_1249);
                }
                else
                {
                    int l_1603[9] = {2L, 0xBA505E3AL, 2L, 0xBA505E3AL, 2L, 0xBA505E3AL, 2L, 0xBA505E3AL, 2L};
                    int i;
                    (*l_1426) = l_1601;
                    (*l_1426) &= (((*l_1344) = (func_46(l_1602, p_25, p_26) || (~(l_1603[8] &= 253UL)))) != (safe_add_func_uint16_t_u_u(1UL, func_33(l_1606))));
                }
                for (g_309 = 6; (g_309 >= 0); g_309 -= 1)
                {
                    return (*g_985);
                }
            }
        }
        else
        {
            short l_1607 = 0x738AL;
            const char *l_1614 = &g_181;
            int l_1618 = 0x69998B29L;
            (*l_1426) = (*p_26);
            l_1607 = ((*g_1378) = ((*l_1249) = func_33((*l_1321))));
            if ((*g_19))
            {
                int *l_1617 = &g_239;
                (*l_1426) &= (l_1618 ^= func_46(g_589, (g_119 = (p_25 | (g_50 , (****g_1589)))), l_1617));
                return p_25;
            }
            else
            {
                char l_1621 = 0L;
                short ****l_1626 = &g_517;
                short *****l_1627 = &g_1589;
                const union U1 l_1628[10][4][3] = {{{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}, {{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}, {{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}, {{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}, {{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}, {{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}, {{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}, {{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}, {{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}, {{{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}, {{0x2A64B1F9L}, {0L}, {-9L}}}};
                short * const *l_1631 = &g_356;
                short * const **l_1630 = &l_1631;
                short * const ***l_1629[1][5] = {{&l_1630, &l_1630, &l_1630, &l_1630, &l_1630}};
                short * const ****l_1637 = &l_1629[0][2];
                int i, j, k;
                (*l_1426) = (safe_sub_func_int8_t_s_s(l_1621, ((safe_mul_func_uint16_t_u_u((p_25 ^ (func_46(g_589, (safe_lshift_func_uint16_t_u_u((((*l_1627) = l_1626) != ((*l_1637) = (func_33(((l_1340 , 0xC7DE2B29L) , l_1628[5][3][2])) , (g_1632 = l_1629[0][2])))), 1)), p_26) > l_1607)), l_1607)) && (-1L))));
            }
        }
    }
    for (g_1276 = 0; (g_1276 <= 5); g_1276 += 1)
    {
        const unsigned short l_1638 = 0x6480L;
        unsigned short ***l_1654 = (void*)0;
        short l_1660 = 0xA975L;
        if (l_1638)
            break;
        (*g_1378) ^= ((*l_1426) = (safe_mod_func_uint32_t_u_u((p_24 || p_25), p_24)));
        for (p_25 = 1; (p_25 <= 4); p_25 += 1)
        {
            const char l_1643 = 0x1AL;
            unsigned short ***l_1658 = &g_984[8][3][4];
            (*g_1378) ^= 8L;
            for (g_106.f0 = 0; (g_106.f0 <= 4); g_106.f0 += 1)
            {
                union U0 l_1650 = {-1L};
                int i;
                (*l_1426) = ((*g_1378) &= (safe_rshift_func_uint8_t_u_u((l_1643 != (safe_mul_func_int16_t_s_s(((((*l_1426) & (*p_26)) ^ (safe_lshift_func_uint16_t_u_u(((*g_985) |= (safe_mod_func_int8_t_s_s(((+(0L >= p_25)) != (*p_26)), g_874.f0))), 12))) != g_62), ((*g_1635) = ((p_24 && p_25) && (*p_26)))))), 6)));
                for (g_309 = 4; (g_309 >= 0); g_309 -= 1)
                {
                    (*l_1426) &= ((*g_1378) = func_46(l_1650, l_1650.f0, p_26));
                    (*g_1378) = l_1638;
                    for (g_580 = 1; (g_580 >= 0); g_580 -= 1)
                    {
                        p_26 = p_26;
                        if ((*p_26))
                            break;
                    }
                    (*g_1378) ^= ((p_24 , l_1651) != (void*)0);
                }
                for (g_189 = 1; (g_189 <= 4); g_189 += 1)
                {
                    unsigned short ***l_1653 = &g_984[8][3][4];
                    unsigned short ****l_1655 = (void*)0;
                    unsigned short ****l_1656 = (void*)0;
                    unsigned short ****l_1657[1][3][1];
                    int l_1659 = 5L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1657[i][j][k] = &l_1653;
                        }
                    }
                    (*g_1378) = (4UL & ((l_1652 != (l_1658 = (l_1654 = l_1653))) != (l_1659 &= 1UL)));
                    return p_25;
                }
            }
            if (l_1660)
                continue;
            (*g_1378) |= (safe_rshift_func_uint8_t_u_u(1UL, p_24));
        }
    }
    return (*l_1426);
}







static int func_27(int p_28, unsigned p_29, int * p_30, unsigned short p_31, unsigned char p_32)
{
    union U0 l_155 = {-1L};
    unsigned short l_163 = 0x0E3EL;
    union U1 *l_164[6][9][4] = {{{&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}}, {{&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}}, {{&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}}, {{&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}}, {{&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}}, {{&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}, {&g_106, &g_106, (void*)0, &g_106}}};
    union U1 l_165 = {0xA6B16CC9L};
    int l_170 = 0xDE1B00A8L;
    int l_187[2][3] = {{0L, 0L, 0x73F91854L}, {0L, 0L, 0x73F91854L}};
    int *l_203 = &g_20;
    int l_225 = (-6L);
    union U0 *l_244 = (void*)0;
    union U1 *l_257 = &l_165;
    char * const l_270 = &g_223;
    short **l_298 = (void*)0;
    short ***l_297 = &l_298;
    short l_341[6][2] = {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}};
    unsigned *l_414 = &g_78;
    unsigned **l_413 = &l_414;
    int *l_453 = (void*)0;
    unsigned char l_547[3][10] = {{0xA8L, 0UL, 0xA8L, 0xB6L, 255UL, 0xA1L, 255UL, 255UL, 0xA1L, 255UL}, {0xA8L, 0UL, 0xA8L, 0xB6L, 255UL, 0xA1L, 255UL, 255UL, 0xA1L, 255UL}, {0xA8L, 0UL, 0xA8L, 0xB6L, 255UL, 0xA1L, 255UL, 255UL, 0xA1L, 255UL}};
    int l_606 = (-1L);
    unsigned l_645 = 0xAC151919L;
    char *l_691 = &g_309;
    unsigned l_744 = 18446744073709551614UL;
    int * const *l_776[6][4][1];
    const int *l_801 = &g_239;
    unsigned short l_815 = 0UL;
    union U1 **l_848[2];
    unsigned l_881 = 1UL;
    char l_904 = 0x30L;
    char l_912 = 0x84L;
    const int *l_959 = &g_86[0];
    union U1 *l_1034[1][7] = {{&g_106, &g_106, &g_106, &g_106, &g_106, &g_106, &g_106}};
    union U0 l_1143 = {0x8387L};
    short l_1216 = 5L;
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 1; k++)
                l_776[i][j][k] = (void*)0;
        }
    }
    for (i = 0; i < 2; i++)
        l_848[i] = &g_546;
    if ((safe_add_func_uint16_t_u_u((l_155 , (safe_lshift_func_int16_t_s_u(g_68, (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((((p_30 != g_162) >= (!(l_163 , ((l_165 = g_106) , ((safe_add_func_int32_t_s_s(((safe_add_func_int32_t_s_s((((l_155.f0 ^ 0x3ACEL) > 7UL) <= 7L), g_108)) < g_119), (*g_162))) & p_32))))) >= l_163) <= 0L), p_29)), p_32))))), p_31)))
    {
        unsigned l_179 = 4294967289UL;
        union U0 l_194 = {0x8064L};
        const union U1 l_202 = {0x545B0B49L};
        int l_208 = 0x26D94D40L;
        union U1 *l_250 = &l_165;
        char l_342[1];
        unsigned short l_362 = 9UL;
        int *l_378 = &g_86[0];
        int **l_424 = (void*)0;
        char l_506[1];
        const short *l_513[3][5] = {{&l_341[3][0], &l_341[3][0], (void*)0, &l_341[3][0], &l_341[3][0]}, {&l_341[3][0], &l_341[3][0], (void*)0, &l_341[3][0], &l_341[3][0]}, {&l_341[3][0], &l_341[3][0], (void*)0, &l_341[3][0], &l_341[3][0]}};
        const short **l_512 = &l_513[0][3];
        const short ***l_511[7][10] = {{&l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}, {&l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, &l_512, (void*)0}};
        union U0 *l_585 = &g_586;
        const unsigned l_642[7][6] = {{0x6589205EL, 8UL, 0UL, 0xEFE203FDL, 0UL, 8UL}, {0x6589205EL, 8UL, 0UL, 0xEFE203FDL, 0UL, 8UL}, {0x6589205EL, 8UL, 0UL, 0xEFE203FDL, 0UL, 8UL}, {0x6589205EL, 8UL, 0UL, 0xEFE203FDL, 0UL, 8UL}, {0x6589205EL, 8UL, 0UL, 0xEFE203FDL, 0UL, 8UL}, {0x6589205EL, 8UL, 0UL, 0xEFE203FDL, 0UL, 8UL}, {0x6589205EL, 8UL, 0UL, 0xEFE203FDL, 0UL, 8UL}};
        unsigned char *l_684 = &l_547[1][4];
        unsigned l_686 = 6UL;
        unsigned l_687[6][8];
        union U1 l_701 = {1L};
        unsigned l_714 = 0UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_342[i] = 0xCDL;
        for (i = 0; i < 1; i++)
            l_506[i] = 0x06L;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 8; j++)
                l_687[i][j] = 1UL;
        }
        if ((*p_30))
        {
            int l_171 = 1L;
            (*g_162) = (l_171 = (l_170 = (*p_30)));
        }
        else
        {
            int *l_172 = &g_86[1];
            char *l_180 = &g_181;
            unsigned char *l_186 = &g_119;
            unsigned char *l_188 = &g_189;
            union U0 l_206[6] = {{0x53C3L}, {0x53C3L}, {1L}, {0x53C3L}, {0x53C3L}, {1L}};
            const int l_224 = (-1L);
            union U1 l_233 = {1L};
            unsigned l_245 = 4294967290UL;
            int l_247 = (-2L);
            const union U1 l_290 = {0x269161BFL};
            short *l_293 = &g_99;
            int l_317 = 0xCBDCE6ECL;
            union U0 **l_338[3][3] = {{(void*)0, &l_244, (void*)0}, {(void*)0, &l_244, (void*)0}, {(void*)0, &l_244, (void*)0}};
            int *l_377[9][7] = {{(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_68, &g_86[0]}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_68, &g_86[0]}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_68, &g_86[0]}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_68, &g_86[0]}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_68, &g_86[0]}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_68, &g_86[0]}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_68, &g_86[0]}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_68, &g_86[0]}, {(void*)0, (void*)0, (void*)0, (void*)0, (void*)0, &g_68, &g_86[0]}};
            char l_381 = 0x22L;
            int i, j;
            l_172 = &l_170;
            (*l_172) = (safe_add_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(0x6FL, p_28)) , 255UL), ((&g_78 == &p_29) , l_179))), (l_179 , (-4L))));
            if (((((*l_180) ^= (*l_172)) != (+((safe_rshift_func_int8_t_s_u(p_31, (safe_mod_func_int8_t_s_s(l_170, l_155.f0)))) > (*p_30)))) <= ((l_179 >= ((*l_188) |= (((l_179 == ((*l_186) = p_31)) ^ l_187[1][1]) < g_61[8]))) && l_179)))
            {
                int l_199 = (-1L);
                int l_240 = 0x8BAA0CC7L;
                union U0 l_265[4] = {{0L}, {0x24C5L}, {0L}, {0x24C5L}};
                int *l_276 = &l_240;
                int i;
                for (l_170 = 0; (l_170 > 4); l_170 = safe_add_func_int32_t_s_s(l_170, 9))
                {
                    if ((*g_162))
                        break;
                }
                if (((safe_mul_func_int8_t_s_s(p_29, func_46((p_31 , l_194), (((*l_172) = (safe_lshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u(l_199, ((*l_188) = (safe_mod_func_uint32_t_u_u((((*l_180) ^= func_46(l_194, ((((*l_172) ^= 0x1907L) ^ g_189) | func_33((g_106 = l_202))), l_203)) ^ g_78), 1L))))), 1))) && (*g_162)), l_203))) < l_199))
                {
                    short l_207 = 0x6544L;
                    (*g_162) = ((!(g_108 < p_31)) < ((func_43(g_61[8], ((p_32 != ((*l_186) = (g_189 < (-5L)))) > (l_199 < func_43(func_43(g_61[8], (*l_203)), p_32)))) || p_31) || (*l_172)));
                    l_208 &= ((((g_61[1] > p_31) != ((safe_mod_func_int32_t_s_s((*l_172), ((*l_203) , (*l_203)))) >= (func_46(l_206[1], (*l_203), p_30) && (*g_162)))) && 0xC47B9E94L) & l_207);
                }
                else
                {
                    unsigned short l_209 = 65532UL;
                    return l_209;
                }
                if ((func_43(p_31, p_28) || ((*l_172) || 0L)))
                {
                    int l_214[7] = {1L, 0x0B68146DL, 1L, 0x0B68146DL, 1L, 0x0B68146DL, 1L};
                    char *l_222 = &g_223;
                    const union U1 l_230 = {0x9D1BC9E0L};
                    union U0 *l_243 = &l_206[4];
                    union U0 **l_242[7] = {&l_243, &l_243, (void*)0, &l_243, &l_243, (void*)0, &l_243};
                    int i;
                    if (((((*l_180) &= ((void*)0 != p_30)) ^ (g_61[8] ^ (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s(l_199, ((*g_91) != ((l_214[2] ^ (safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(((*l_172) = ((safe_mul_func_int8_t_s_s((((*l_222) = func_43((safe_unary_minus_func_uint16_t_u(func_43(p_32, g_78))), l_214[2])) , p_28), 1L)) > (*l_172))), 0)), (-1L)))) < g_50.f0)))), l_224)))) <= l_225))
                    {
                        return (*p_30);
                    }
                    else
                    {
                        unsigned *l_238[7];
                        int **l_241 = &l_172;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_238[i] = (void*)0;
                        (*l_172) = ((l_240 = (g_239 = (p_29 | ((safe_mod_func_int8_t_s_s(5L, (safe_mul_func_int16_t_s_s(func_33(l_230), (safe_sub_func_uint32_t_u_u(g_61[8], ((l_233 , ((safe_rshift_func_int8_t_s_u(g_181, 7)) && 0L)) , (g_181 > g_189)))))))) > p_29)))) , (*p_30));
                        (*l_241) = p_30;
                    }
                    l_244 = &l_155;
                    l_245 = (*p_30);
                    for (g_78 = 3; (g_78 <= 9); g_78 += 1)
                    {
                        const union U1 l_246 = {0x773CD826L};
                        l_247 &= func_33(l_246);
                    }
                }
                else
                {
                    int l_256[6][3] = {{0x7FC44ED0L, 0x7FC44ED0L, 0x5E111E5CL}, {0x7FC44ED0L, 0x7FC44ED0L, 0x5E111E5CL}, {0x7FC44ED0L, 0x7FC44ED0L, 0x5E111E5CL}, {0x7FC44ED0L, 0x7FC44ED0L, 0x5E111E5CL}, {0x7FC44ED0L, 0x7FC44ED0L, 0x5E111E5CL}, {0x7FC44ED0L, 0x7FC44ED0L, 0x5E111E5CL}};
                    int i, j;
                    for (g_62 = 26; (g_62 > (-24)); --g_62)
                    {
                        union U1 **l_251 = &l_164[2][3][3];
                        union U1 **l_252 = &l_250;
                        int l_253 = 0L;
                        unsigned short *l_262 = &l_163;
                        l_253 = (((*l_252) = ((*l_251) = l_250)) == (void*)0);
                        (*l_251) = ((func_33((*l_250)) > (safe_add_func_uint8_t_u_u(l_256[5][0], p_28))) , l_257);
                        (*g_162) = ((safe_mul_func_int16_t_s_s((*l_172), p_28)) ^ (safe_add_func_uint16_t_u_u(((*l_262) ^= 1UL), (l_256[5][0] != l_253))));
                        return (*p_30);
                    }
                }
                (*l_276) &= ((*g_162) = (safe_mod_func_uint32_t_u_u(((((l_265[0] , (safe_sub_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((p_32 || l_202.f0), (*g_19))) > ((((void*)0 == l_270) , ((safe_sub_func_uint8_t_u_u(((void*)0 == g_273[2][3]), (-1L))) & g_106.f0)) >= 0x9910L)), p_31))) && 1UL) ^ 8UL) != 0xFD3DL), p_31)));
            }
            else
            {
                const unsigned char l_285 = 255UL;
                unsigned short *l_291 = &l_163;
                union U1 l_292 = {-1L};
                union U1 *l_296 = (void*)0;
                union U0 l_300 = {-1L};
                int *l_340 = &g_68;
                (*l_172) = (*l_203);
                (*l_172) |= (safe_rshift_func_int8_t_s_s(p_28, 4));
                if ((func_33((*l_250)) <= p_29))
                {
                    short *l_295 = &g_99;
                    short **l_294 = &l_295;
                    int *l_304 = &g_239;
                    union U0 l_314[3] = {{0x0AF9L}, {0x0AF9L}, {0x0AF9L}};
                    int **l_322 = (void*)0;
                    int **l_323[7][4][5] = {{{&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}}, {{&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}}, {{&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}}, {{&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}}, {{&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}}, {{&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}}, {{&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}, {&g_19, &g_19, (void*)0, &g_162, &g_19}}};
                    unsigned *l_324[3];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_324[i] = &g_325;
                    if (((g_78 = p_28) ^ ((l_293 != ((*l_294) = l_293)) == 0L)))
                    {
                        l_296 = &g_106;
                    }
                    else
                    {
                        short ****l_299 = &l_297;
                        int l_303[10] = {1L, 0x9EE3D1DFL, 0xC9BA8D2CL, 0xC9BA8D2CL, 0x9EE3D1DFL, 1L, 0x9EE3D1DFL, 0xC9BA8D2CL, 0xC9BA8D2CL, 0x9EE3D1DFL};
                        int **l_315 = (void*)0;
                        int **l_316 = &l_304;
                        int i;
                        (*l_172) |= (func_43((((*l_299) = l_297) != (void*)0), g_20) & func_46(l_300, ((*l_188) &= (((p_32 > l_194.f0) , p_28) && (safe_mul_func_int8_t_s_s(8L, l_303[0])))), l_304));
                        (*l_172) = (safe_sub_func_uint32_t_u_u((p_32 , ((safe_mul_func_int8_t_s_s(g_61[8], 6UL)) && ((g_309 = (g_99 |= 0x6C02L)) & (*l_172)))), func_43(p_31, ((safe_lshift_func_int8_t_s_s(g_61[8], (func_46(g_50, (safe_mod_func_int32_t_s_s((!func_46(l_314[0], p_29, l_304)), (*l_203))), &l_170) , (*l_203)))) < p_29))));
                        (*l_316) = &l_208;
                    }
                    p_30 = (((((((**l_294) &= g_119) >= (g_181 > ((((((l_317 ^ 0xAFL) ^ 0xECL) < ((*l_188) = (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(p_32, ((*l_291) = ((*l_250) , ((*p_30) < (*p_30)))))), (*l_203))))) , (*p_30)) == (*l_304)) , (*l_172)))) > 4294967295UL) | g_62) >= 0x16L) , p_30);
                    (*l_172) = ((p_28 , func_33(g_106)) , 0x7F0751C6L);
                    for (g_108 = 0; (g_108 >= 5); g_108 = safe_add_func_uint8_t_u_u(g_108, 6))
                    {
                        if (l_194.f0)
                            break;
                        if ((*p_30))
                            break;
                        (*g_162) = (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(255UL, 1)), func_43(((((*l_250) , g_86[0]) || 0xC3L) , (safe_mul_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((*l_172), p_28)) , p_29), p_29))), g_106.f0)));
                        (*g_162) ^= (l_155 , l_208);
                    }
                }
                else
                {
                    union U0 ***l_339[1];
                    int **l_350 = &l_172;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_339[i] = &l_338[2][1];
                    p_30 = &l_208;
                    if ((safe_sub_func_uint32_t_u_u((p_28 > (((g_20 < (((((((*p_30) = (((*l_293) = l_202.f0) != func_46(l_194, ((&g_274[1][2] != (g_223 , (l_338[2][1] = l_338[2][1]))) , (l_194.f0 || ((*l_172) , p_28))), l_340))) & g_61[8]) < (*l_172)) || l_341[3][0]) & 1L) <= l_342[0])) , 0x2A1230C3L) & 5UL)), (*l_340))))
                    {
                        const union U0 *l_347 = &l_300;
                        int l_348 = 0x7FBF086CL;
                        (*p_30) ^= (safe_add_func_uint8_t_u_u((func_43(p_32, g_325) & (safe_mul_func_uint8_t_u_u(func_46(l_194, g_106.f0, &l_170), ((g_309 |= ((void*)0 == l_347)) && l_348)))), 0L));
                    }
                    else
                    {
                        int *l_349[6] = {(void*)0, (void*)0, &l_292.f0, (void*)0, (void*)0, &l_292.f0};
                        int i;
                        (*l_340) = (func_43(g_61[8], (p_28 |= 0x987FC7DBL)) == 1L);
                    }
                    (*g_162) ^= (+(*p_30));
                    (*l_350) = p_30;
                }
            }
            if ((safe_mul_func_int8_t_s_s(((*l_180) = ((*l_270) = g_50.f0)), 0x2CL)))
            {
                unsigned l_353[4] = {18446744073709551615UL, 0xED1856F5L, 18446744073709551615UL, 0xED1856F5L};
                int l_364 = 6L;
                const union U1 l_370 = {0x766CB584L};
                int i;
                if (((*g_162) = l_353[1]))
                {
                    unsigned *l_357 = &l_353[3];
                    union U0 l_361[10][6] = {{{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}, {{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}, {{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}, {{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}, {{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}, {{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}, {{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}, {{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}, {{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}, {{0x730BL}, {0x4287L}, {-1L}, {0x9A42L}, {-1L}, {0x4287L}}};
                    unsigned short *l_363 = &l_163;
                    unsigned *l_365 = &g_325;
                    int i, j;
                    (*g_162) = (!((safe_lshift_func_uint8_t_u_u(((((*l_357) = (&g_99 != (g_356 = l_293))) , (safe_unary_minus_func_int8_t_s(g_86[0]))) & (0x9062L || (safe_rshift_func_int8_t_s_s(((l_361[0][3] , (((*l_365) = (+(l_194 , (((*l_363) = l_362) <= l_364)))) , (((*l_363) = (safe_mod_func_uint8_t_u_u(((((safe_rshift_func_uint16_t_u_s(p_32, 8)) | g_239) , p_29) <= 0x54C3L), (*l_203)))) <= p_29))) > (*l_203)), (*l_203))))), 4)) , (*g_162)));
                    l_364 ^= func_33(l_370);
                    for (g_119 = 0; (g_119 >= 19); g_119 = safe_add_func_int16_t_s_s(g_119, 1))
                    {
                        int *l_373 = (void*)0;
                        int *l_374 = &l_364;
                        (*l_374) ^= (l_208 = (*g_19));
                    }
                }
                else
                {
                    unsigned l_393 = 6UL;
                    int l_396 = (-1L);
                    if ((*l_203))
                    {
                        int *l_375[1][9][5] = {{{&l_364, &l_364, &g_86[0], &l_364, &l_364}, {&l_364, &l_364, &g_86[0], &l_364, &l_364}, {&l_364, &l_364, &g_86[0], &l_364, &l_364}, {&l_364, &l_364, &g_86[0], &l_364, &l_364}, {&l_364, &l_364, &g_86[0], &l_364, &l_364}, {&l_364, &l_364, &g_86[0], &l_364, &l_364}, {&l_364, &l_364, &g_86[0], &l_364, &l_364}, {&l_364, &l_364, &g_86[0], &l_364, &l_364}, {&l_364, &l_364, &g_86[0], &l_364, &l_364}}};
                        int **l_376[10][5][5] = {{{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}, {{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}, {{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}, {{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}, {{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}, {{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}, {{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}, {{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}, {{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}, {{(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}, {(void*)0, &g_162, &g_19, &g_19, &l_375[0][7][1]}}};
                        int i, j, k;
                        l_170 = (*p_30);
                        p_30 = l_375[0][7][1];
                        p_30 = l_377[2][5];
                        l_378 = (p_30 = p_30);
                    }
                    else
                    {
                        const int *l_380 = &l_247;
                        const int **l_379 = &l_380;
                        int l_382 = (-1L);
                        (*l_379) = &l_224;
                        l_382 |= func_43(g_78, l_381);
                        return (*g_162);
                    }
                    for (p_28 = 9; (p_28 >= 3); p_28 -= 1)
                    {
                        union U0 ***l_387 = &l_338[2][1];
                        int i;
                        (*g_162) = (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(((*l_180) = g_61[p_28]), ((p_31 , l_387) == l_387))), func_43(g_50.f0, g_119)));
                        l_396 |= ((func_43((((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((g_61[p_28] , ((safe_mul_func_uint16_t_u_u((*l_203), (*g_356))) & l_393)) <= 0x5EA06B9CL))), ((safe_sub_func_int32_t_s_s((g_61[p_28] , 0x9DD1EA5CL), (-5L))) ^ p_28))) == l_370.f0) <= 0x5097597BL), (*l_203)) || l_370.f0) < 0xB88C76BCL);
                        if ((*g_162))
                            break;
                    }
                }
            }
            else
            {
                const unsigned short l_412 = 65535UL;
                unsigned char l_420 = 0x86L;
                for (l_165.f0 = 0; (l_165.f0 <= 6); l_165.f0 += 1)
                {
                    int i;
                    l_170 = g_61[l_165.f0];
                    for (p_32 = 0; (p_32 <= 0); p_32 += 1)
                    {
                        return (*l_378);
                    }
                }
                l_170 &= (p_28 ^ p_29);
                for (l_208 = 25; (l_208 != (-6)); l_208--)
                {
                    int l_406 = 8L;
                    short *l_423 = &l_341[3][0];
                    for (l_165.f0 = (-16); (l_165.f0 != (-6)); l_165.f0++)
                    {
                        unsigned short *l_405[4];
                        char l_407[7][1] = {{0x00L}, {0x00L}, {0x00L}, {0x00L}, {0x00L}, {0x00L}, {0x00L}};
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_405[i] = &g_61[0];
                        l_407[6][0] = (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((&p_31 != l_405[0]) || 0x23CCDCFFL), 7)), (l_406 ^ (5L == g_309))));
                    }
                    for (l_165.f0 = 0; (l_165.f0 < 25); l_165.f0 = safe_add_func_uint32_t_u_u(l_165.f0, 6))
                    {
                        unsigned ***l_415 = &l_413;
                        (*g_162) |= ((safe_mod_func_uint16_t_u_u(l_412, 0xE228L)) || (-1L));
                        if ((*g_162))
                            continue;
                        (*l_415) = l_413;
                    }
                    (*g_162) = (l_406 | (((((*l_423) = ((((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((l_406 | ((*l_378) || g_309)), ((*l_180) = (l_420 , ((g_106.f0 ^= (safe_mod_func_int16_t_s_s(func_43(p_28, g_239), ((*l_293) |= ((0xD5L == 0xD0L) , 0x8EC5L))))) , l_420))))), g_119)) | (*l_203)) && 0x48L) | (-1L))) ^ l_406) != p_31) , p_31));
                }
            }
        }
        l_203 = &l_170;
        if ((*g_19))
        {
            int l_437 = (-1L);
            union U0 l_452 = {0xE19EL};
            int *l_469[9];
            unsigned short l_502 = 0x435EL;
            short l_530 = 0x75D3L;
            int l_565 = 0x9243DB43L;
            const union U1 l_571 = {0xCB4D9841L};
            int *l_644 = (void*)0;
            int i;
            for (i = 0; i < 9; i++)
                l_469[i] = &g_86[0];
            (*g_162) |= (0x058D70E6L ^ (g_108 && (g_68 | ((**l_413) = 0x2F411E67L))));
            if ((p_29 < g_61[8]))
            {
                int l_438[1][8][7] = {{{0x0C58B350L, 9L, (-10L), 0L, 0x30725800L, 1L, 0x30725800L}, {0x0C58B350L, 9L, (-10L), 0L, 0x30725800L, 1L, 0x30725800L}, {0x0C58B350L, 9L, (-10L), 0L, 0x30725800L, 1L, 0x30725800L}, {0x0C58B350L, 9L, (-10L), 0L, 0x30725800L, 1L, 0x30725800L}, {0x0C58B350L, 9L, (-10L), 0L, 0x30725800L, 1L, 0x30725800L}, {0x0C58B350L, 9L, (-10L), 0L, 0x30725800L, 1L, 0x30725800L}, {0x0C58B350L, 9L, (-10L), 0L, 0x30725800L, 1L, 0x30725800L}, {0x0C58B350L, 9L, (-10L), 0L, 0x30725800L, 1L, 0x30725800L}}};
                union U0 l_445 = {0x65F2L};
                int l_451 = 0xBC906127L;
                unsigned char *l_505[2];
                short ****l_519[10][5] = {{&l_297, &l_297, &l_297, (void*)0, &g_517}, {&l_297, &l_297, &l_297, (void*)0, &g_517}, {&l_297, &l_297, &l_297, (void*)0, &g_517}, {&l_297, &l_297, &l_297, (void*)0, &g_517}, {&l_297, &l_297, &l_297, (void*)0, &g_517}, {&l_297, &l_297, &l_297, (void*)0, &g_517}, {&l_297, &l_297, &l_297, (void*)0, &g_517}, {&l_297, &l_297, &l_297, (void*)0, &g_517}, {&l_297, &l_297, &l_297, (void*)0, &g_517}, {&l_297, &l_297, &l_297, (void*)0, &g_517}};
                char *l_520 = &g_309;
                int l_533 = 0xD99D21AEL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_505[i] = &g_189;
                (*l_203) &= ((safe_lshift_func_uint8_t_u_u(((((*g_356) & ((*g_356) == (*g_91))) , (func_43((((safe_add_func_int16_t_s_s((((2L & (safe_sub_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(p_28, (g_108 , (p_29 | 0x1776L)))), (safe_lshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s(0L, l_437)) | p_31), g_86[3]))))) | 0x42FDL) ^ (*g_19)), p_31)) , p_29) != 0x86BBL), p_32) || 0x42L)) != p_28), 7)) & l_438[0][0][1]);
                for (p_32 = 0; (p_32 <= 0); p_32 += 1)
                {
                    int *l_439 = (void*)0;
                    const union U1 l_447 = {0xCAD8DD98L};
                    int l_482 = 0xB8552DF9L;
                }
                if ((((*l_203) = (safe_sub_func_uint8_t_u_u((g_189 = (((((*l_270) = g_99) ^ l_451) > (+((p_32 = g_61[8]) <= l_506[0]))) == func_43((((*l_520) = ((func_43(((safe_mul_func_int8_t_s_s((+g_325), ((safe_rshift_func_uint8_t_u_u(p_28, p_29)) , ((g_514 = l_511[0][3]) == (g_517 = g_517))))) >= p_29), p_28) & p_28) && g_61[8])) & g_62), p_29))), p_31))) , l_438[0][0][1]))
                {
                    int **l_521 = &l_378;
                    (*l_521) = l_469[6];
                    for (p_32 = 0; (p_32 <= 4); p_32 += 1)
                    {
                        unsigned short l_522 = 4UL;
                        const int *l_523 = &l_208;
                        const int **l_524 = (void*)0;
                        const int **l_525[4][6][2] = {{{&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}}, {{&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}}, {{&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}}, {{&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}, {&l_523, &l_523}}};
                        int i, j, k;
                        l_522 |= (**l_521);
                        (*g_162) = (*g_162);
                        g_526 = l_523;
                    }
                }
                else
                {
                    union U0 l_529[2][6] = {{{-1L}, {0x25CEL}, {-1L}, {0x25CEL}, {-1L}, {0x25CEL}}, {{-1L}, {0x25CEL}, {-1L}, {0x25CEL}, {-1L}, {0x25CEL}}};
                    int l_543 = 0xA4022597L;
                    int i, j;
                    l_469[6] = l_469[1];
                    for (l_362 = 25; (l_362 >= 5); l_362 = safe_sub_func_int16_t_s_s(l_362, 3))
                    {
                        int *l_531 = &g_239;
                        int **l_532 = &l_203;
                        l_453 = (p_30 = ((*l_532) = ((func_46(l_529[1][2], g_20, (l_530 , &l_170)) >= p_31) , (((l_445.f0 > ((void*)0 == l_469[6])) > 0x28C824CFL) , l_531))));
                        l_543 &= ((*l_531) = (l_533 | (g_189 = ((g_50 , (safe_sub_func_int16_t_s_s(0L, ((l_529[1][2].f0 , ((**l_413) |= (p_29 &= func_46(((g_501 || g_86[0]) , l_194), (((l_452 , g_536[0][1]) == &g_537) , (*l_531)), l_469[6])))) >= (*g_19))))) >= p_31))));
                    }
                    if (p_29)
                    {
                        union U1 *l_544 = &l_165;
                        union U1 **l_545[7] = {&l_257, &l_164[3][4][3], &l_257, &l_164[3][4][3], &l_257, &l_164[3][4][3], &l_257};
                        int i;
                        g_546 = l_544;
                        return l_547[2][3];
                    }
                    else
                    {
                        unsigned l_548 = 18446744073709551608UL;
                        return l_548;
                    }
                }
                for (g_223 = 0; (g_223 != (-14)); --g_223)
                {
                    int **l_551[6][9] = {{&g_19, &l_469[3], &l_469[6], &l_469[3], &g_19, (void*)0, &g_19, &l_469[3], &l_469[6]}, {&g_19, &l_469[3], &l_469[6], &l_469[3], &g_19, (void*)0, &g_19, &l_469[3], &l_469[6]}, {&g_19, &l_469[3], &l_469[6], &l_469[3], &g_19, (void*)0, &g_19, &l_469[3], &l_469[6]}, {&g_19, &l_469[3], &l_469[6], &l_469[3], &g_19, (void*)0, &g_19, &l_469[3], &l_469[6]}, {&g_19, &l_469[3], &l_469[6], &l_469[3], &g_19, (void*)0, &g_19, &l_469[3], &l_469[6]}, {&g_19, &l_469[3], &l_469[6], &l_469[3], &g_19, (void*)0, &g_19, &l_469[3], &l_469[6]}};
                    union U1 *l_552 = &l_165;
                    int i, j;
                    p_30 = &l_451;
                    if ((((*g_19) , l_552) != &l_165))
                    {
                        (*l_203) = ((*p_30) = (*p_30));
                    }
                    else
                    {
                        unsigned *l_559 = &g_325;
                        int l_563 = (-10L);
                        unsigned short *l_564 = (void*)0;
                        (*p_30) = ((safe_mul_func_uint8_t_u_u((((~(p_31 = (safe_sub_func_int16_t_s_s((p_31 || func_43(((*l_559) = ((*l_203) == func_43((safe_add_func_uint16_t_u_u(2UL, (*l_378))), g_78))), (safe_add_func_uint16_t_u_u((g_108 = (safe_unary_minus_func_uint8_t_u(func_46(g_50, (l_451 = l_563), p_30)))), (*g_91))))), 0xD832L)))) && p_31) == g_61[8]), g_106.f0)) ^ l_565);
                        if ((*p_30))
                            continue;
                        l_469[6] = p_30;
                    }
                    l_453 = p_30;
                }
            }
            else
            {
                unsigned l_581 = 0xD5A3844CL;
                union U0 *l_588 = &g_589;
                const union U1 l_610 = {0L};
                (*g_162) = ((*l_203) = (*g_19));
                if ((*g_526))
                {
                    const int *l_566 = &l_208;
                    int l_578[1];
                    unsigned *l_579[6];
                    union U0 *l_587 = &l_452;
                    union U1 l_624 = {0L};
                    union U0 **l_626 = &l_587;
                    union U0 ***l_625 = &l_626;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_578[i] = 1L;
                    for (i = 0; i < 6; i++)
                        l_579[i] = &l_179;
                    if ((((*l_257) , (safe_lshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u((l_581 = (g_580 |= ((func_33(l_571) , (safe_rshift_func_int8_t_s_u((l_578[0] &= ((*l_270) |= (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(func_43(p_28, p_31), 65534UL)), p_29)))), 1))) ^ 0x9E771C0CL))), (*g_526))) , p_28), g_61[1]))) && 6UL))
                    {
                        union U0 **l_584[2][2] = {{&l_244, (void*)0}, {&l_244, (void*)0}};
                        union U1 *l_611 = &l_165;
                        int l_612 = 0x2712D6FCL;
                        int i, j;
                        (*g_162) = 0x9703E248L;
                        (*g_162) = (p_28 & (safe_mod_func_int16_t_s_s((p_29 >= (((l_585 = &l_452) == (l_588 = l_587)) , (safe_rshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((*l_203), 2)), ((0x5AL | (+(safe_lshift_func_int8_t_s_u((((func_33(((*l_611) = ((safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s(g_189, (safe_add_func_int32_t_s_s(func_43((safe_sub_func_int32_t_s_s((((safe_mod_func_uint16_t_u_u(l_606, ((**g_518) = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(p_29)), 4294967294UL))))) , (-1L)) , 0x0212BAD9L), g_119)), g_62), 0xA14E39B5L)))), g_108)) , l_610))) && 0x3151L) <= p_32) || g_86[1]), 5)))) < l_612))))), p_32)));
                        (*l_203) = l_612;
                    }
                    else
                    {
                        char *l_619 = &l_342[0];
                        l_588 = l_588;
                        (*l_203) = (g_309 ^ ((safe_lshift_func_uint8_t_u_s((p_28 && (safe_mod_func_uint16_t_u_u(((safe_mul_func_int8_t_s_s((l_571 , l_610.f0), ((*l_270) &= g_189))) > ((*l_619) = (p_31 <= g_580))), (*g_91)))), (func_33(l_571) , 0xB9L))) == p_31));
                        (*g_162) &= (+(-1L));
                        (*l_203) &= (*g_19);
                    }
                    for (l_565 = 0; (l_565 > (-27)); l_565 = safe_sub_func_int16_t_s_s(l_565, 1))
                    {
                        (*g_162) = (-5L);
                        p_30 = &l_565;
                    }
                    (*l_203) = (safe_sub_func_uint32_t_u_u(0xBD9428BBL, ((l_624 , &g_274[1][3]) == ((*l_625) = &l_587))));
                }
                else
                {
                    int l_633[5][1] = {{0x0B03D40FL}, {0x0B03D40FL}, {0x0B03D40FL}, {0x0B03D40FL}, {0x0B03D40FL}};
                    int i, j;
                    (*g_162) = p_32;
                    (*l_203) &= (+(safe_mod_func_uint32_t_u_u((p_29 && (safe_add_func_int16_t_s_s((-4L), (((*g_162) , (p_31 < func_43((p_31 >= (((0xA1BECF4CL > ((func_43((0xC8L ^ 0xB2L), (safe_mod_func_uint16_t_u_u(l_581, (-2L)))) != (*g_356)) ^ l_633[4][0])) < p_31) >= p_31)), p_28))) == (-10L))))), (*g_19))));
                }
            }
            (*g_643) = (safe_sub_func_uint8_t_u_u((6L || func_43(((((safe_rshift_func_uint8_t_u_u(p_31, (&g_189 != (void*)0))) , (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((&l_202 == (void*)0), l_642[1][1])), 6))) , ((((*g_546) = ((*l_250) = (*l_250))) , 0x5714A399L) & g_86[3])) || 0x64L), l_645)), p_31));
            return (*g_162);
        }
        else
        {
            short l_649 = 0xD9EBL;
            int *l_650 = &g_62;
            int l_651 = 0xC8444876L;
            unsigned l_663 = 0xE7DBD312L;
            short l_694[9][8] = {{(-4L), 0x22C8L, 0xD1C6L, 0x22C8L, (-4L), 0xB4F2L, 0xD1C6L, 0xB4F2L}, {(-4L), 0x22C8L, 0xD1C6L, 0x22C8L, (-4L), 0xB4F2L, 0xD1C6L, 0xB4F2L}, {(-4L), 0x22C8L, 0xD1C6L, 0x22C8L, (-4L), 0xB4F2L, 0xD1C6L, 0xB4F2L}, {(-4L), 0x22C8L, 0xD1C6L, 0x22C8L, (-4L), 0xB4F2L, 0xD1C6L, 0xB4F2L}, {(-4L), 0x22C8L, 0xD1C6L, 0x22C8L, (-4L), 0xB4F2L, 0xD1C6L, 0xB4F2L}, {(-4L), 0x22C8L, 0xD1C6L, 0x22C8L, (-4L), 0xB4F2L, 0xD1C6L, 0xB4F2L}, {(-4L), 0x22C8L, 0xD1C6L, 0x22C8L, (-4L), 0xB4F2L, 0xD1C6L, 0xB4F2L}, {(-4L), 0x22C8L, 0xD1C6L, 0x22C8L, (-4L), 0xB4F2L, 0xD1C6L, 0xB4F2L}, {(-4L), 0x22C8L, 0xD1C6L, 0x22C8L, (-4L), 0xB4F2L, 0xD1C6L, 0xB4F2L}};
            const union U1 * const l_697 = (void*)0;
            union U1 ** const l_708 = &l_164[3][4][3];
            union U1 ** const *l_707 = &l_708;
            int i, j;
            (*l_203) = ((safe_add_func_uint16_t_u_u((g_586.f0 | (((void*)0 == g_648[3]) ^ 1UL)), (*g_356))) ^ (func_43(((*l_203) & (l_649 != l_649)), ((*l_650) = (((*l_585) , p_32) > p_32))) & 0xF4L));
            l_651 = p_29;
            for (g_99 = 0; (g_99 <= 2); g_99 += 1)
            {
                unsigned l_652 = 0x83A16C02L;
                short ****l_656[6] = {&g_517, &l_297, &g_517, &l_297, &g_517, &l_297};
                unsigned char *l_680 = &g_119;
                unsigned char *l_681 = &g_189;
                unsigned *l_685[10][4][5] = {{{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}, {{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}, {{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}, {{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}, {{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}, {{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}, {{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}, {{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}, {{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}, {{&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}, {&l_663, &g_325, &l_652, &g_325, &l_663}}};
                union U0 l_700 = {0x6394L};
                int i, j, k;
                if (((g_50 , ((*g_546) , l_652)) | (p_32 = (~g_223))))
                {
                    char l_657 = 3L;
                    if ((safe_lshift_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s((&l_511[0][3] != l_656[5]))), 14)))
                    {
                        return l_657;
                    }
                    else
                    {
                        int *l_658 = &g_68;
                        int **l_659 = &l_378;
                        (*l_659) = l_658;
                        (**l_659) = (p_29 , ((safe_unary_minus_func_uint32_t_u((0x2CL > l_657))) , ((safe_mod_func_int8_t_s_s(p_31, 0x71L)) , ((void*)0 == &g_517))));
                        (*g_162) |= ((-1L) || p_29);
                        l_203 = (p_30 = (*l_659));
                    }
                    for (g_78 = 0; (g_78 <= 0); g_78 += 1)
                    {
                        int l_674 = 9L;
                        int *l_677[1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                            l_677[i] = &g_86[0];
                        (*p_30) = ((((*l_270) = p_32) <= l_663) > ((safe_mul_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((p_28 , (safe_add_func_int32_t_s_s((*p_30), ((safe_rshift_func_int16_t_s_s((**g_518), ((((g_86[0] , 0x9FL) & l_674) , (safe_lshift_func_uint8_t_u_s(((p_31 &= ((l_674 < 0x43FF2185L) >= l_674)) || l_652), g_580))) ^ 0x6BL))) <= (-1L))))), 12)) | 0xAF5BL), p_32)), 0x4CL)) & l_674));
                        l_677[0] = p_30;
                        return (*g_526);
                    }
                }
                else
                {
                    for (g_325 = 0; (g_325 <= 0); g_325 += 1)
                    {
                        (*g_162) = (*g_162);
                    }
                    return l_651;
                }
                for (l_208 = 0; (l_208 >= 0); l_208 -= 1)
                {
                    return (*g_19);
                }
                l_687[2][2] &= ((((l_686 = (safe_mul_func_uint8_t_u_u((p_32 &= ((*l_681) = ((*l_680) = 0x4BL))), ((*p_30) & ((*g_643) = ((***g_517) >= (((*l_203) == (*g_91)) >= (safe_lshift_func_uint16_t_u_u(l_663, ((void*)0 != l_684)))))))))) , 253UL) > l_652) | p_31);
                for (g_78 = 0; (g_78 <= 0); g_78 += 1)
                {
                    int l_688 = 0x0C9C48DBL;
                    char **l_689 = (void*)0;
                    char **l_690 = (void*)0;
                    union U0 l_692 = {0x97A1L};
                    union U1 **l_705 = &g_546;
                    union U1 ***l_704[6] = {&l_705, &l_705, &l_705, &l_705, &l_705, &l_705};
                    union U1 *l_711 = &l_701;
                    union U1 ** const l_710 = &l_711;
                    union U1 ** const *l_709 = &l_710;
                    unsigned char **l_712 = &l_681;
                    unsigned char **l_713 = &l_684;
                    int i;
                    if (((((~l_688) >= ((*l_203) |= ((0UL ^ p_29) <= p_31))) != (((l_691 = &g_309) != (((252UL & (func_46(l_692, l_688, l_685[7][2][2]) >= g_86[1])) , (-10L)) , (void*)0)) < (-8L))) == 0UL))
                    {
                        union U0 l_693 = {0xA79CL};
                        (*l_378) = func_46(l_693, l_694[8][6], p_30);
                        (*p_30) &= l_651;
                        if ((*g_19))
                            continue;
                    }
                    else
                    {
                        (*p_30) = ((void*)0 == p_30);
                    }
                    for (g_580 = 2; (g_580 >= 0); g_580 -= 1)
                    {
                        (*g_643) ^= (safe_mod_func_int16_t_s_s(6L, p_29));
                        if (l_692.f0)
                            break;
                    }
                    l_585 = (((l_697 == &l_202) || (safe_rshift_func_int8_t_s_s(func_46(l_700, p_32, p_30), (l_701 , 0x72L)))) , &l_700);
                    (*g_162) = (safe_add_func_int32_t_s_s((0x7B47903EL <= ((*g_19) != func_46(g_50, (((g_706 = l_704[0]) != (l_709 = l_707)) || (((*l_712) = &p_32) == ((*l_713) = &g_189))), &l_651))), l_688));
                    for (l_170 = 0; (l_170 >= 0); l_170 -= 1)
                    {
                        unsigned short *l_725[4];
                        int l_732[3][5][9] = {{{1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}}, {{1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}}, {{1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}, {1L, 2L, 0xF8CBD84AL, 1L, 0xFAF507DDL, 1L, 2L, 0L, 0xF8CBD84AL}}};
                        int *l_733[2];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_725[i] = &g_108;
                        for (i = 0; i < 2; i++)
                            l_733[i] = &l_651;
                        (*l_378) = (0x4780L || l_714);
                        if (l_652)
                            continue;
                        l_606 |= ((*l_203) = (((safe_lshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((*g_91), (safe_sub_func_int8_t_s_s((g_586.f0 || (safe_lshift_func_uint16_t_u_s((g_108 |= ((***g_706) , 0xB988L)), (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(func_46(l_700, (0x15DBL < ((safe_rshift_func_uint16_t_u_u(l_688, 6)) <= ((*l_684) = g_86[1]))), p_30), (*l_203))) ^ l_732[0][4][1]), p_31))))), 0x47L)))) != 0x9AL), l_700.f0)), p_32)) , 0xF9519604L) , (*p_30)));
                        (*l_203) = 0x64CCB73CL;
                    }
                }
            }
        }
    }
    else
    {
        const union U1 l_749 = {-1L};
        int l_786 = (-1L);
        const int **l_793 = &g_526;
        for (g_181 = 0; (g_181 <= 3); g_181 += 1)
        {
            union U0 l_738 = {0x1F59L};
            int l_740 = 0x9499D97CL;
            int l_741 = 4L;
            unsigned ***l_742 = &l_413;
            unsigned short *l_743 = &g_501;
            for (g_106.f0 = 0; g_106.f0 < 2; g_106.f0 += 1)
            {
                for (g_239 = 0; g_239 < 3; g_239 += 1)
                {
                    l_187[g_106.f0][g_239] = (-1L);
                }
            }
            for (l_163 = 1; (l_163 <= 4); l_163 += 1)
            {
                int **l_739 = &g_162;
                int i, j;
                g_86[g_181] |= 0xDE46D931L;
                g_86[g_181] = ((safe_rshift_func_uint8_t_u_s(((*p_30) > ((l_740 ^= ((safe_add_func_int8_t_s_s(func_43(g_99, p_29), (g_586 , func_46(l_738, p_32, ((*l_739) = (void*)0))))) >= p_29)) | (*g_643))), (*l_203))) > p_32);
            }
            if ((l_741 != (~((*l_743) |= (l_742 != (void*)0)))))
            {
                int *l_745 = &l_170;
                unsigned char *l_750 = &l_547[2][3];
                union U1 l_760 = {0x8ADC8EF0L};
                union U0 **l_787 = &l_244;
                const int **l_788 = &g_526;
                const int *l_790 = &g_239;
                const int **l_789[10][1][3] = {{{&l_790, &l_790, &l_790}}, {{&l_790, &l_790, &l_790}}, {{&l_790, &l_790, &l_790}}, {{&l_790, &l_790, &l_790}}, {{&l_790, &l_790, &l_790}}, {{&l_790, &l_790, &l_790}}, {{&l_790, &l_790, &l_790}}, {{&l_790, &l_790, &l_790}}, {{&l_790, &l_790, &l_790}}, {{&l_790, &l_790, &l_790}}};
                const int *l_791 = (void*)0;
                int i, j, k;
                if (((*g_643) = func_33((l_744 , l_749))))
                {
                    unsigned char l_780 = 0xE8L;
                    for (g_325 = 0; (g_325 <= 4); g_325 += 1)
                    {
                        l_740 = 7L;
                        (*g_643) = ((((*l_745) = l_738.f0) <= (**g_518)) , l_740);
                        (*l_745) &= (*p_30);
                    }
                    (*l_745) ^= func_33((*g_546));
                    for (g_68 = 0; (g_68 <= 4); g_68 += 1)
                    {
                        int l_759 = (-1L);
                        if ((*p_30))
                            break;
                        (*g_643) = (safe_mul_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(l_741, (safe_rshift_func_int16_t_s_s(3L, l_759)))), 7)), (&g_526 != (void*)0)));
                    }
                    if (((((*l_257) = l_760) , (safe_sub_func_int16_t_s_s(((7UL < p_32) >= (safe_sub_func_int16_t_s_s(((((((((safe_add_func_uint8_t_u_u(((safe_mul_func_int16_t_s_s(p_28, (safe_unary_minus_func_uint32_t_u((safe_lshift_func_uint16_t_u_s(p_29, 14)))))) > p_29), func_33((l_740 , (*g_546))))) & p_32) < p_32) < (*p_30)) && 0x6AC2L) | p_32) <= l_738.f0) && p_32), (*l_203)))), (*g_91)))) ^ l_738.f0))
                    {
                        if ((*g_526))
                            break;
                        (*g_643) = ((((~l_740) < (safe_add_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((***l_742) = (&g_19 != l_776[2][1][0])), (((l_749.f0 , ((***g_517) = l_749.f0)) != p_28) , (*p_30)))) & 0x69B1D2CEL), p_28))) ^ g_106.f0) , 0x9D6B36C8L);
                        (*g_643) = (*p_30);
                    }
                    else
                    {
                        int l_777[9][8] = {{0xFFFEA1DAL, 0xD774B20BL, (-1L), 0xD774B20BL, 0xFFFEA1DAL, 0x566F417FL, 0xFFFEA1DAL, 0xD774B20BL}, {0xFFFEA1DAL, 0xD774B20BL, (-1L), 0xD774B20BL, 0xFFFEA1DAL, 0x566F417FL, 0xFFFEA1DAL, 0xD774B20BL}, {0xFFFEA1DAL, 0xD774B20BL, (-1L), 0xD774B20BL, 0xFFFEA1DAL, 0x566F417FL, 0xFFFEA1DAL, 0xD774B20BL}, {0xFFFEA1DAL, 0xD774B20BL, (-1L), 0xD774B20BL, 0xFFFEA1DAL, 0x566F417FL, 0xFFFEA1DAL, 0xD774B20BL}, {0xFFFEA1DAL, 0xD774B20BL, (-1L), 0xD774B20BL, 0xFFFEA1DAL, 0x566F417FL, 0xFFFEA1DAL, 0xD774B20BL}, {0xFFFEA1DAL, 0xD774B20BL, (-1L), 0xD774B20BL, 0xFFFEA1DAL, 0x566F417FL, 0xFFFEA1DAL, 0xD774B20BL}, {0xFFFEA1DAL, 0xD774B20BL, (-1L), 0xD774B20BL, 0xFFFEA1DAL, 0x566F417FL, 0xFFFEA1DAL, 0xD774B20BL}, {0xFFFEA1DAL, 0xD774B20BL, (-1L), 0xD774B20BL, 0xFFFEA1DAL, 0x566F417FL, 0xFFFEA1DAL, 0xD774B20BL}, {0xFFFEA1DAL, 0xD774B20BL, (-1L), 0xD774B20BL, 0xFFFEA1DAL, 0x566F417FL, 0xFFFEA1DAL, 0xD774B20BL}};
                        union U1 **l_785[10][2] = {{(void*)0, &l_164[4][1][0]}, {(void*)0, &l_164[4][1][0]}, {(void*)0, &l_164[4][1][0]}, {(void*)0, &l_164[4][1][0]}, {(void*)0, &l_164[4][1][0]}, {(void*)0, &l_164[4][1][0]}, {(void*)0, &l_164[4][1][0]}, {(void*)0, &l_164[4][1][0]}, {(void*)0, &l_164[4][1][0]}, {(void*)0, &l_164[4][1][0]}};
                        int i, j;
                        l_786 &= (l_777[8][4] <= func_43((func_43(l_780, g_580) != (0xFEL <= p_29)), (safe_lshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(l_777[8][4], ((*l_750) = ((void*)0 != l_785[2][1])))), (*l_745)))));
                    }
                }
                else
                {
                    for (g_223 = 0; (g_223 <= 4); g_223 += 1)
                    {
                        return l_749.f0;
                    }
                }
                (*l_787) = &l_738;
                l_791 = ((*l_788) = p_30);
            }
            else
            {
                int **l_792 = &g_19;
                const int ***l_794 = &l_793;
                (*l_792) = p_30;
                (*l_794) = l_793;
            }
            return l_740;
        }
    }
    for (g_325 = 0; (g_325 <= 3); g_325 += 1)
    {
        unsigned short **l_807 = (void*)0;
        unsigned short ***l_806[8][3][5] = {{{&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}}, {{&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}}, {{&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}}, {{&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}}, {{&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}}, {{&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}}, {{&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}}, {{&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}, {&l_807, &l_807, &l_807, &l_807, &l_807}}};
        unsigned char *l_808 = (void*)0;
        unsigned char *l_809 = &g_119;
        int l_834 = (-1L);
        char l_861 = 0x12L;
        union U0 *l_873 = &g_874;
        char l_875 = (-2L);
        int *l_888 = (void*)0;
        const union U1 l_900 = {0x12765983L};
        const unsigned *l_947 = &g_948[4];
        int l_963 = 1L;
        int *l_996[3];
        int *l_1001 = (void*)0;
        const char l_1029 = 1L;
        union U1 *l_1033 = &l_165;
        union U1 *l_1035 = &l_165;
        const union U1 l_1045[5][6][2] = {{{{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}}, {{{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}}, {{{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}}, {{{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}}, {{{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}, {{1L}, {0x53AA18E2L}}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_996[i] = &l_963;
        if ((0x5DC1F2DDL >= (0x1AL != (((safe_lshift_func_uint8_t_u_s(((*l_809) = ((((safe_mod_func_uint32_t_u_u((g_86[g_325] || (l_801 == &g_86[g_325])), g_86[g_325])) , (safe_sub_func_uint32_t_u_u((((~(safe_rshift_func_int16_t_s_s(g_86[g_325], 15))) > (l_806[6][1][0] != (void*)0)) , p_29), (*g_526)))) < 0x11A3L) | 0UL)), 4)) | (*l_801)) & 0xEE61FFBCL))))
        {
            const unsigned l_810 = 0UL;
            int * const l_828 = &g_68;
            int ***l_860 = &g_84[0][0];
            int l_864 = 0xF4885BA3L;
            int l_865 = 0L;
            const union U1 l_866 = {0x66C74C21L};
            unsigned short *l_869[9][10] = {{&l_815, &l_163, &g_61[8], &g_61[7], &g_61[8], &l_163, &l_815, &l_815, (void*)0, &g_61[5]}, {&l_815, &l_163, &g_61[8], &g_61[7], &g_61[8], &l_163, &l_815, &l_815, (void*)0, &g_61[5]}, {&l_815, &l_163, &g_61[8], &g_61[7], &g_61[8], &l_163, &l_815, &l_815, (void*)0, &g_61[5]}, {&l_815, &l_163, &g_61[8], &g_61[7], &g_61[8], &l_163, &l_815, &l_815, (void*)0, &g_61[5]}, {&l_815, &l_163, &g_61[8], &g_61[7], &g_61[8], &l_163, &l_815, &l_815, (void*)0, &g_61[5]}, {&l_815, &l_163, &g_61[8], &g_61[7], &g_61[8], &l_163, &l_815, &l_815, (void*)0, &g_61[5]}, {&l_815, &l_163, &g_61[8], &g_61[7], &g_61[8], &l_163, &l_815, &l_815, (void*)0, &g_61[5]}, {&l_815, &l_163, &g_61[8], &g_61[7], &g_61[8], &l_163, &l_815, &l_815, (void*)0, &g_61[5]}, {&l_815, &l_163, &g_61[8], &g_61[7], &g_61[8], &l_163, &l_815, &l_815, (void*)0, &g_61[5]}};
            union U0 **l_871 = (void*)0;
            union U0 **l_872[8] = {(void*)0, &l_244, (void*)0, &l_244, (void*)0, &l_244, (void*)0, &l_244};
            int i, j;
            if ((*g_19))
            {
                const short l_819 = 0x58B4L;
                unsigned char l_826 = 0x82L;
                int l_827[7] = {9L, 9L, 0L, 9L, 9L, 0L, 9L};
                int **l_829 = (void*)0;
                int **l_830[5][9] = {{&g_18, &g_18, &g_19, &g_18, &g_18, (void*)0, &g_19, (void*)0, &g_18}, {&g_18, &g_18, &g_19, &g_18, &g_18, (void*)0, &g_19, (void*)0, &g_18}, {&g_18, &g_18, &g_19, &g_18, &g_18, (void*)0, &g_19, (void*)0, &g_18}, {&g_18, &g_18, &g_19, &g_18, &g_18, (void*)0, &g_19, (void*)0, &g_18}, {&g_18, &g_18, &g_19, &g_18, &g_18, (void*)0, &g_19, (void*)0, &g_18}};
                int **l_831 = (void*)0;
                int **l_832 = (void*)0;
                int **l_833 = &l_453;
                const union U1 l_841[9][5] = {{{-5L}, {0x06B6DA30L}, {0x36B4052FL}, {-1L}, {0x36B4052FL}}, {{-5L}, {0x06B6DA30L}, {0x36B4052FL}, {-1L}, {0x36B4052FL}}, {{-5L}, {0x06B6DA30L}, {0x36B4052FL}, {-1L}, {0x36B4052FL}}, {{-5L}, {0x06B6DA30L}, {0x36B4052FL}, {-1L}, {0x36B4052FL}}, {{-5L}, {0x06B6DA30L}, {0x36B4052FL}, {-1L}, {0x36B4052FL}}, {{-5L}, {0x06B6DA30L}, {0x36B4052FL}, {-1L}, {0x36B4052FL}}, {{-5L}, {0x06B6DA30L}, {0x36B4052FL}, {-1L}, {0x36B4052FL}}, {{-5L}, {0x06B6DA30L}, {0x36B4052FL}, {-1L}, {0x36B4052FL}}, {{-5L}, {0x06B6DA30L}, {0x36B4052FL}, {-1L}, {0x36B4052FL}}};
                union U1 **l_849 = (void*)0;
                unsigned char *l_867 = (void*)0;
                unsigned char *l_868 = &l_547[2][3];
                int i, j;
                (*l_833) = (((p_28 , ((((l_810 & ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(0x9BA19536L, l_815)), (safe_lshift_func_uint8_t_u_u(func_43((g_86[g_325] , (((safe_unary_minus_func_int16_t_s(g_86[g_325])) == l_819) == (safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_827[1] &= (safe_add_func_uint32_t_u_u(l_819, (((*g_356) & g_86[g_325]) , l_826)))), (*l_801))), p_31)))), p_28), 4)))) & 0UL)) , l_827[2]) , 1L) < 0x0792L)) >= p_32) , l_828);
                for (p_32 = 0; (p_32 <= 3); p_32 += 1)
                {
                    union U1 *l_835 = (void*)0;
                    int l_840[4];
                    union U1 l_850 = {0xF376B7F6L};
                    int l_862 = (-1L);
                    int i;
                    for (i = 0; i < 4; i++)
                        l_840[i] = 0x3A79CAAEL;
                    for (l_645 = 0; (l_645 <= 3); l_645 += 1)
                    {
                        int i, j, k;
                        l_834 |= g_86[g_325];
                        l_164[(g_325 + 2)][(p_32 + 3)][p_32] = l_835;
                    }
                    for (g_239 = 0; (g_239 <= 0); g_239 += 1)
                    {
                        const char l_842 = 0xBFL;
                        short *l_845[4] = {&l_341[4][0], &g_580, &l_341[4][0], &g_580};
                        union U1 **l_847 = &l_164[2][3][0];
                        union U1 ***l_846[7][5] = {{&l_847, &l_847, &l_847, &l_847, &l_847}, {&l_847, &l_847, &l_847, &l_847, &l_847}, {&l_847, &l_847, &l_847, &l_847, &l_847}, {&l_847, &l_847, &l_847, &l_847, &l_847}, {&l_847, &l_847, &l_847, &l_847, &l_847}, {&l_847, &l_847, &l_847, &l_847, &l_847}, {&l_847, &l_847, &l_847, &l_847, &l_847}};
                        union U0 l_853[8] = {{-1L}, {0x7269L}, {-1L}, {0x7269L}, {-1L}, {0x7269L}, {-1L}, {0x7269L}};
                        unsigned l_863[5] = {0x6607F141L, 0x1B63284DL, 0x6607F141L, 0x1B63284DL, 0x6607F141L};
                        int i, j;
                        (*g_643) = (safe_mod_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(g_189, p_29)) , (l_840[1] < func_33(l_841[2][1]))), (g_309 = ((l_842 <= (safe_mul_func_int16_t_s_s((1UL == p_32), ((*l_453) &= (g_580 = ((void*)0 == &g_91)))))) & l_840[1]))));
                        l_849 = (l_848[0] = &l_164[4][2][1]);
                        if (l_834)
                            break;
                        l_865 &= ((func_46(g_586, (((l_850 , ((*l_691) |= (((safe_sub_func_int16_t_s_s(((**g_518) = ((((*g_19) == 0x752C8404L) , l_834) , 0x1E0DL)), (func_46(l_853[0], (((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((((g_223 = ((l_834 & (safe_mod_func_uint16_t_u_u((l_860 == (void*)0), p_28))) < g_189)) , 0xB786L) & (*g_91)), l_861)), l_862)) >= 65531UL) != (*l_828)), &l_834) || l_862))) != l_863[1]) && p_29))) >= g_325) ^ l_864), (*l_833)) > g_119) < l_861);
                    }
                }
                l_834 ^= (p_31 >= (((*l_868) &= func_33(l_866)) > (((((l_869[1][0] != &p_31) , (*l_828)) < 4294967295UL) , 1UL) > p_28)));
            }
            else
            {
                int *l_870 = &g_86[3];
                (*g_643) = p_31;
                p_30 = l_870;
                if ((*l_828))
                    continue;
            }
            (*g_537) = (void*)0;
            l_834 = ((*g_643) = (1L & l_861));
            l_873 = (g_580 , &l_155);
        }
        else
        {
            unsigned short l_876[5][4][7] = {{{65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}}, {{65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}}, {{65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}}, {{65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}}, {{65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}, {65531UL, 0xFC01L, 1UL, 0xD49DL, 6UL, 65535UL, 0xFC01L}}};
            union U1 l_879 = {9L};
            union U0 *l_884[4][4] = {{&g_586, &g_586, &g_586, &g_586}, {&g_586, &g_586, &g_586, &g_586}, {&g_586, &g_586, &g_586, &g_586}, {&g_586, &g_586, &g_586, &g_586}};
            int *l_891 = &g_106.f0;
            char l_929 = 0x98L;
            int l_953 = 1L;
            int i, j, k;
            if (p_28)
            {
                short l_880[3];
                int **l_887[9][5][5] = {{{&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}}, {{&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}}, {{&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}}, {{&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}}, {{&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}}, {{&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}}, {{&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}}, {{&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}}, {{&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}, {&g_643, &g_18, &g_19, &l_453, (void*)0}}};
                unsigned *l_896 = &l_645;
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_880[i] = (-1L);
                if ((g_86[g_325] = (func_43((((0L <= ((***g_517) = l_875)) >= 0x4478L) && (((g_189 >= ((0L || (l_876[4][3][3] > l_875)) && 0UL)) , (safe_sub_func_int32_t_s_s(((*g_643) &= (l_879 , 1L)), 0xD093351DL))) == 0xC4A4L)), g_181) || l_880[1])))
                {
                    int *l_882 = &l_170;
                    int **l_883[8] = {(void*)0, &l_203, (void*)0, &l_203, (void*)0, &l_203, (void*)0, &l_203};
                    int i;
                    l_881 |= (*g_19);
                    p_30 = l_882;
                }
                else
                {
                    union U0 **l_885 = &l_884[0][3];
                    int **l_886[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_886[i] = &l_203;
                    (*l_885) = l_884[0][3];
                    p_30 = &g_86[g_325];
                }
                l_888 = (void*)0;
                if ((p_29 == ((safe_add_func_int8_t_s_s(((l_891 != (void*)0) == (safe_mod_func_uint8_t_u_u(((*l_809) = func_43(func_46(g_586, (safe_add_func_int8_t_s_s((((*p_30) == (((void*)0 == l_896) == (g_897[2] == &l_809))) <= p_29), 0xB4L)), p_30), p_28)), 0x52L))), 0x5FL)) & (*l_801))))
                {
                    unsigned ***l_909 = &l_413;
                    for (p_32 = 1; (p_32 <= 4); p_32 += 1)
                    {
                        const unsigned l_899 = 1UL;
                        int l_901 = 0xF449876BL;
                        l_901 ^= (func_33(((*g_546) , l_900)) , l_899);
                        return (*g_19);
                    }
                    l_904 = (p_31 , (safe_lshift_func_uint8_t_u_s(((*l_809) = p_31), 2)));
                    for (g_119 = 0; (g_119 <= 0); g_119 += 1)
                    {
                        unsigned *l_913 = &l_881;
                        int l_914 = (-1L);
                        (*p_30) = (func_43((*l_801), func_43(((*l_913) &= (safe_sub_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((g_189 = ((((void*)0 != l_909) == (safe_rshift_func_int16_t_s_u(0x65D2L, 3))) & l_879.f0)), (p_32 = (*l_203)))), l_912))), l_914)) | l_914);
                    }
                    p_30 = p_30;
                }
                else
                {
                    union U0 **l_915 = &l_873;
                    (*l_915) = l_884[0][0];
                }
            }
            else
            {
                int l_918 = 0x7BE4C0CCL;
                if ((safe_mod_func_int32_t_s_s(l_918, p_31)))
                {
                    for (g_106.f0 = 1; (g_106.f0 >= 0); g_106.f0 -= 1)
                    {
                        if ((*g_19))
                            break;
                    }
                }
                else
                {
                    int l_922 = 0xEDA8267BL;
                    for (l_170 = 0; (l_170 <= 0); l_170 += 1)
                    {
                        unsigned l_921 = 18446744073709551613UL;
                        (*g_643) |= (*g_526);
                        (*g_643) = (-2L);
                        (*g_643) = (p_28 || (safe_mul_func_int8_t_s_s(g_61[8], func_46((p_29 , g_589), p_29, &g_86[g_325]))));
                        return l_921;
                    }
                    return l_922;
                }
                if (l_879.f0)
                    break;
                l_918 &= (*g_19);
            }
            for (g_181 = 0; (g_181 <= 0); g_181 += 1)
            {
                union U0 l_935[3][4][2] = {{{{0xE94EL}, {0x417BL}}, {{0xE94EL}, {0x417BL}}, {{0xE94EL}, {0x417BL}}, {{0xE94EL}, {0x417BL}}}, {{{0xE94EL}, {0x417BL}}, {{0xE94EL}, {0x417BL}}, {{0xE94EL}, {0x417BL}}, {{0xE94EL}, {0x417BL}}}, {{{0xE94EL}, {0x417BL}}, {{0xE94EL}, {0x417BL}}, {{0xE94EL}, {0x417BL}}, {{0xE94EL}, {0x417BL}}}};
                int *l_936 = &l_834;
                int l_952 = 0xDD7C71E8L;
                unsigned ***l_955 = &l_413;
                union U1 l_960 = {0x1682F526L};
                int i, j, k;
                l_834 &= (*g_643);
                for (l_875 = 0; (l_875 >= 0); l_875 -= 1)
                {
                    int *l_924[6];
                    unsigned short l_931 = 0x26E2L;
                    const unsigned *l_945 = &g_946[5][5];
                    const unsigned **l_944[2][5] = {{&l_945, &l_945, &l_945, &l_945, &l_945}, {&l_945, &l_945, &l_945, &l_945, &l_945}};
                    int l_951 = 0L;
                    int i, j;
                    for (i = 0; i < 6; i++)
                        l_924[i] = &g_20;
                    if (func_43((*l_203), g_309))
                    {
                        int **l_923[8] = {&g_162, &l_203, &g_162, &l_203, &g_162, &l_203, &g_162, &l_203};
                        int i;
                        p_30 = (void*)0;
                        p_30 = (void*)0;
                        p_30 = l_924[2];
                    }
                    else
                    {
                        unsigned short l_930 = 65535UL;
                        int l_932 = 0x96049F21L;
                        if (l_876[4][3][3])
                            break;
                        (*g_643) = ((void*)0 != &g_90[0][1]);
                        l_931 ^= ((0x74E930C3L <= (safe_add_func_uint16_t_u_u(0x6DFDL, ((+(p_31 <= (safe_add_func_uint16_t_u_u(p_28, (l_929 = p_29))))) , (p_32 || p_32))))) & (((**g_518) , ((void*)0 == &g_84[0][0])) == l_930));
                        l_932 = ((*g_643) = (*g_19));
                    }
                    if (((safe_add_func_int32_t_s_s(func_46(l_935[2][3][1], (*l_203), l_936), (safe_lshift_func_uint16_t_u_u((l_953 |= (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((&g_325 != (l_947 = l_888)) >= (*l_936)) ^ (p_31 == (safe_add_func_uint32_t_u_u((p_29 |= (l_951 ^ l_952)), p_31)))), 5L)), 0))))), p_32)))) & 4L))
                    {
                        return (*g_526);
                    }
                    else
                    {
                        (*g_643) = 0x77300678L;
                        return (*g_526);
                    }
                }
                if (p_28)
                {
                    int *l_954[9] = {&g_68, &g_86[0], &g_68, &g_86[0], &g_68, &g_86[0], &g_68, &g_86[0], &g_68};
                    int i;
                    for (l_953 = 0; (l_953 <= 5); l_953 += 1)
                    {
                        unsigned ****l_958 = &g_956[4][2][7];
                        union U1 l_961 = {0x4930C8D6L};
                        int l_962 = 0xC24199A4L;
                        int i, j;
                        (*l_936) &= l_341[(g_325 + 1)][(g_181 + 1)];
                        l_962 = ((l_876[4][3][3] , func_33(l_961)) , (*g_526));
                        (*g_643) = ((((p_29 | (!((*l_936) = p_31))) && ((((p_32 |= func_33(l_900)) < g_325) < l_962) != 0UL)) ^ ((func_46((*l_873), p_28, &l_953) < p_29) , p_31)) >= 65534UL);
                    }
                    return l_929;
                }
                else
                {
                    return l_963;
                }
            }
        }
        for (l_904 = 0; (l_904 <= 0); l_904 += 1)
        {
            unsigned char l_964 = 0x19L;
            const unsigned short **l_986[6][2][10] = {{{(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}}, {{(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}}, {{(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}}, {{(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}}, {{(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}}, {{(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}, {(void*)0, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91, &g_91}}};
            int l_989 = (-2L);
            int *l_994[8][10] = {{&g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606}, {&g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606}, {&g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606}, {&g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606}, {&g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606}, {&g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606}, {&g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606}, {&g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606, &g_86[g_325], &l_606}};
            unsigned l_1012 = 1UL;
            union U1 l_1017 = {0xB4520206L};
            short *l_1038 = &g_580;
            int i, j, k;
        }
    }
    if ((*g_19))
    {
        unsigned short l_1061 = 0UL;
        int l_1062[5];
        int l_1063 = 0x47641412L;
        char l_1068 = 1L;
        unsigned l_1098 = 0x6A945F70L;
        union U0 * const l_1101 = &g_586;
        const int l_1112 = 0x8FC412DEL;
        union U1 l_1127 = {0x2BCA38A2L};
        unsigned l_1174 = 0xB74F202CL;
        int i;
        for (i = 0; i < 5; i++)
            l_1062[i] = 0x35F7729FL;
        if (((safe_mul_func_int8_t_s_s((p_32 ^ (((safe_mul_func_int8_t_s_s((((l_1063 &= (0x67F4L | ((p_31 > (safe_lshift_func_uint16_t_u_u((&l_413 == (void*)0), (((*l_691) = (l_1061 = ((*l_270) = func_33((p_32 , (*g_546)))))) & l_1062[1])))) > (*l_801)))) & l_1062[1]) ^ p_28), 0L)) || 4UL) || p_32)), 0x5BL)) | 0x50L))
        {
            unsigned char l_1064 = 0x56L;
            int *l_1065 = &g_239;
            int **l_1066[3];
            int i;
            for (i = 0; i < 3; i++)
                l_1066[i] = &l_1065;
            (*g_643) = l_1064;
            p_30 = l_1065;
        }
        else
        {
            int **l_1067 = &g_643;
            int l_1075 = 8L;
            union U0 l_1121 = {0x6E00L};
            unsigned **l_1124[1];
            int l_1131 = (-10L);
            int l_1151 = 0L;
            int i;
            for (i = 0; i < 1; i++)
                l_1124[i] = (void*)0;
            (*l_1067) = &l_1063;
            l_1062[1] = ((**l_1067) = l_1068);
            for (g_78 = 0; (g_78 == 21); g_78++)
            {
                unsigned char *l_1074[10] = {&l_547[2][3], &g_189, &l_547[2][3], &g_189, &l_547[2][3], &g_189, &l_547[2][3], &g_189, &l_547[2][3], &g_189};
                unsigned char **l_1073[10][8] = {{&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}, {&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}, {&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}, {&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}, {&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}, {&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}, {&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}, {&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}, {&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}, {&l_1074[2], (void*)0, &l_1074[2], &l_1074[2], &l_1074[2], (void*)0, &l_1074[2], &l_1074[2]}};
                int l_1076 = 0x5487AFC9L;
                short ***l_1114 = &l_298;
                unsigned **l_1130[9][1];
                union U1 l_1132[4] = {{0xC892A267L}, {0xC892A267L}, {0xC892A267L}, {0xC892A267L}};
                int l_1140 = 2L;
                int **l_1150 = &g_1134[1];
                union U0 l_1189 = {0L};
                short l_1199 = 0L;
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_1130[i][j] = &g_748;
                }
                for (g_99 = 0; (g_99 < (-8)); g_99--)
                {
                    short *l_1090[9];
                    int l_1091 = 0x6D4D2271L;
                    union U0 l_1097 = {1L};
                    int l_1113 = 0x6F4FBA63L;
                    union U1 l_1122 = {0x9DE27860L};
                    unsigned **l_1123 = (void*)0;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_1090[i] = &l_341[3][0];
                }
            }
        }
    }
    else
    {
        unsigned **l_1214 = &g_1211;
        int l_1217 = (-1L);
        int l_1234 = 0x57D32DF1L;
        int l_1235 = 0x0630D84FL;
        int l_1236 = 0x640C1DF7L;
        for (l_815 = 28; (l_815 >= 36); l_815++)
        {
            unsigned ***l_1212 = &g_1210;
            const union U1 l_1213 = {0x879B95BBL};
            unsigned ***l_1215 = &l_1214;
            for (g_309 = 10; (g_309 == 17); g_309++)
            {
                (*g_643) &= (*l_203);
            }
            l_1217 &= (safe_add_func_int32_t_s_s((p_32 , ((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(1L, 8)), 4)) ^ ((((*l_1212) = g_1210) == ((*l_1215) = (func_33(l_1213) , l_1214))) || (~((*g_356) < ((*g_1210) != (void*)0)))))), l_1216));
        }
        l_1236 |= (l_1235 &= (l_1234 &= ((*g_643) = (func_43((*l_959), (((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u(func_43(((**g_1210) ^= (p_32 ^ (safe_lshift_func_uint8_t_u_s((*l_203), 5)))), l_1217), l_1217)) < ((p_32 < (safe_add_func_int16_t_s_s(5L, (safe_rshift_func_uint8_t_u_u(p_28, p_32))))) || 0xC8B6L)), 7)) >= 0xFFD27BCDL) == g_239), 0x1FL)), (*g_91))), (*g_356))) , p_31) >= g_181)) > 0x3AL))));
    }
    for (l_1216 = 0; (l_1216 <= (-30)); --l_1216)
    {
        unsigned l_1239[8] = {0x4BB18ED6L, 0x4BB18ED6L, 9UL, 0x4BB18ED6L, 0x4BB18ED6L, 9UL, 0x4BB18ED6L, 0x4BB18ED6L};
        int l_1240 = (-1L);
        int l_1241 = 0x3C384557L;
        int i;
        l_1240 = l_1239[7];
        if (l_1241)
            continue;
    }
    return (*l_959);
}







static int func_33(const union U1 p_34)
{
    unsigned l_141[6] = {1UL, 1UL, 0xA80ACB10L, 1UL, 1UL, 0xA80ACB10L};
    union U0 l_144 = {1L};
    unsigned char *l_147[4][2] = {{&g_119, (void*)0}, {&g_119, (void*)0}, {&g_119, (void*)0}, {&g_119, (void*)0}};
    int l_148 = (-1L);
    int i, j;
    for (g_106.f0 = (-6); (g_106.f0 >= (-25)); --g_106.f0)
    {
        int *l_149 = &g_86[0];
        short *l_150 = &g_99;
        int **l_151 = &g_19;
        (*l_149) ^= (l_141[1] >= ((*l_150) = (safe_rshift_func_uint16_t_u_s(func_46(l_144, (safe_mul_func_int8_t_s_s((l_148 = (l_147[3][1] == (void*)0)), (g_119 = g_61[0]))), l_149), 1))));
        (*l_151) = l_149;
    }
    return g_106.f0;
}







static const union U1 func_35(int * p_36, unsigned char p_37, int * p_38, const int * p_39, int p_40)
{
    unsigned short l_42[2][10] = {{0x9AD1L, 0x9AD1L, 65527UL, 0x81C4L, 0xF179L, 0x81C4L, 65527UL, 0x9AD1L, 0x9AD1L, 65527UL}, {0x9AD1L, 0x9AD1L, 65527UL, 0x81C4L, 0xF179L, 0x81C4L, 65527UL, 0x9AD1L, 0x9AD1L, 65527UL}};
    int *l_64 = &g_20;
    const unsigned short *l_88 = &g_61[8];
    const unsigned short **l_87 = &l_88;
    const unsigned l_114 = 0UL;
    unsigned char *l_118 = &g_119;
    int l_137 = 7L;
    const union U1 l_138[1][8] = {{{-8L}, {-8L}, {-8L}, {-8L}, {-8L}, {-8L}, {-8L}, {-8L}}};
    int i, j;
    for (p_37 = 0; (p_37 <= 1); p_37 += 1)
    {
        int l_59 = (-5L);
        unsigned short *l_60 = &g_61[8];
        unsigned short *l_63 = &l_42[1][5];
        unsigned l_65 = 0x1F8626BAL;
        int *l_85 = &g_86[0];
        union U0 l_103 = {-6L};
        int **l_111 = &g_19;
        int l_115 = (-1L);
        (*l_85) |= func_43(func_46(g_50, g_50.f0, ((safe_mod_func_int32_t_s_s((safe_lshift_func_uint16_t_u_u((l_59 = ((*l_63) = (((l_42[0][4] >= (safe_sub_func_uint16_t_u_u((((void*)0 == &g_20) , p_40), p_40))) & g_50.f0) ^ ((safe_add_func_uint8_t_u_u((((*l_60) = l_59) > p_37), g_62)) >= 4294967287UL)))), 14)), 0xCA477CAFL)) , l_64)), l_65);
        for (g_62 = 0; (g_62 <= 0); g_62 += 1)
        {
            const unsigned short ***l_89[2];
            short *l_98 = &g_99;
            unsigned l_100 = 0x589394F4L;
            int i, j;
            for (i = 0; i < 2; i++)
                l_89[i] = &l_87;
            g_90[1][1] = l_87;
            (*l_85) |= (safe_rshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((0x6EA311ADL < (safe_mul_func_uint8_t_u_u(((((*l_98) = (-3L)) && g_61[4]) & p_37), ((g_78 | (!(l_100 > l_100))) && ((safe_sub_func_int32_t_s_s(((func_46((l_103 , l_103), (*l_64), p_36) , p_40) <= 0x02EAL), g_50.f0)) == p_37))))), (*l_64))), 2));
            if ((g_62 & g_99))
            {
                unsigned *l_107[5][7][3] = {{{&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}}, {{&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}}, {{&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}}, {{&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}}, {{&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}, {&l_65, &l_65, &l_65}}};
                int i, j, k;
                (*l_85) |= 0xB1A5A204L;
                (*l_85) = (safe_sub_func_int32_t_s_s((*l_85), func_43((g_106 , (g_108 &= ((void*)0 != &g_78))), p_40)));
            }
            else
            {
                int **l_109 = &l_64;
                int ***l_110 = &g_84[0][0];
                (*l_110) = l_109;
            }
        }
        (*l_111) = p_38;
        l_115 |= (safe_lshift_func_int16_t_s_u(l_114, 10));
        for (g_99 = 1; (g_99 >= 0); g_99 -= 1)
        {
            for (g_78 = 0; g_78 < 4; g_78 += 1)
            {
                g_86[g_78] = 0xCA3FDCB7L;
            }
            for (l_115 = 0; (l_115 <= 1); l_115 += 1)
            {
                (*l_111) = p_36;
                for (g_68 = 1; (g_68 >= 0); g_68 -= 1)
                {
                    (*l_85) &= func_46(l_103, g_78, p_38);
                }
            }
        }
    }
    if (func_46(g_50, ((*g_19) & (safe_add_func_uint8_t_u_u(((*l_118) = (*l_64)), (safe_mul_func_uint8_t_u_u(func_43(g_78, p_37), g_61[8]))))), l_64))
    {
        short l_124 = 0xEAAEL;
        int l_125[2][8][10] = {{{0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}}, {{0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}, {0xAA3471AFL, 0x020803FAL, 6L, 1L, 0x37504BC8L, 0xF4C4C940L, (-1L), (-5L), 0L, 5L}}};
        int i, j, k;
        l_125[1][2][0] = (l_124 = (safe_rshift_func_int16_t_s_u((-4L), 14)));
    }
    else
    {
        int *l_134[3][5][5] = {{{&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}}, {{&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}}, {{&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}, {&g_86[2], &g_86[2], &g_20, &g_86[0], &g_20}}};
        const union U1 l_136 = {6L};
        int i, j, k;
        for (g_68 = (-12); (g_68 <= 13); g_68 = safe_add_func_uint16_t_u_u(g_68, 4))
        {
            unsigned l_130 = 18446744073709551615UL;
            int **l_135 = &l_134[0][3][0];
            for (g_119 = 1; (g_119 < 20); g_119 = safe_add_func_int8_t_s_s(g_119, 6))
            {
                short * const *l_132 = (void*)0;
                short * const **l_131 = &l_132;
                int *l_133 = &g_86[2];
                (*l_131) = (l_130 , (void*)0);
                l_133 = (void*)0;
            }
            (*l_135) = l_134[2][2][3];
        }
        return l_136;
    }
    l_137 ^= (*l_64);
    return l_138[0][3];
}







static int func_43(unsigned p_44, int p_45)
{
    int l_66 = 0x43BD3A57L;
    int *l_67 = &g_68;
    unsigned short l_76 = 1UL;
    union U0 l_79 = {0xC99AL};
    int l_82 = 0xE3E38F49L;
    (*l_67) &= l_66;
    for (l_66 = 0; (l_66 > 4); l_66 = safe_add_func_uint32_t_u_u(l_66, 2))
    {
        const union U0 l_75 = {0x83C6L};
        unsigned *l_77 = &g_78;
        int ** const l_83 = &l_67;
        if ((safe_mul_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((l_75 , ((*l_77) = l_76)), 4294967294UL)) <= func_46(l_79, g_61[5], l_77)), (safe_add_func_int8_t_s_s(l_82, p_44)))))
        {
            for (l_82 = 2; (l_82 <= 9); l_82 += 1)
            {
                for (p_45 = 0; (p_45 <= 9); p_45 += 1)
                {
                    int i;
                    (*l_67) ^= 0L;
                    if (g_61[l_82])
                        continue;
                }
                if ((*g_19))
                    continue;
                g_84[0][0] = l_83;
            }
            return p_45;
        }
        else
        {
            (*l_83) = (*l_83);
            return p_45;
        }
    }
    return (*l_67);
}







static unsigned func_46(union U0 p_47, unsigned char p_48, int * p_49)
{
    return p_48;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_50.f0, "g_50.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_86[i], "g_86[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_99, "g_99", print_hash_value);
    transparent_crc(g_106.f0, "g_106.f0", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_181, "g_181", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_275[i].f0, "g_275[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_309, "g_309", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    transparent_crc(g_539.f0, "g_539.f0", print_hash_value);
    transparent_crc(g_540.f0, "g_540.f0", print_hash_value);
    transparent_crc(g_541.f0, "g_541.f0", print_hash_value);
    transparent_crc(g_542.f0, "g_542.f0", print_hash_value);
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_586.f0, "g_586.f0", print_hash_value);
    transparent_crc(g_589.f0, "g_589.f0", print_hash_value);
    transparent_crc(g_874.f0, "g_874.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_946[i][j], "g_946[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_948[i], "g_948[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_972[i][j], "g_972[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1276, "g_1276", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1282[i][j].f0, "g_1282[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1345[i], "g_1345[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1467[i][j].f0, "g_1467[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1470, "g_1470", print_hash_value);
    transparent_crc(g_1473, "g_1473", print_hash_value);
    transparent_crc(g_1513, "g_1513", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1535[i], "g_1535[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1597, "g_1597", print_hash_value);
    transparent_crc(g_1636, "g_1636", print_hash_value);
    transparent_crc(g_1700, "g_1700", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1720[i], "g_1720[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1722, "g_1722", print_hash_value);
    transparent_crc(g_1741, "g_1741", print_hash_value);
    transparent_crc(g_1801, "g_1801", print_hash_value);
    transparent_crc(g_1857, "g_1857", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1967[i], "g_1967[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
