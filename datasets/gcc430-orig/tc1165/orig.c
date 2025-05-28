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
   volatile short f0;
   unsigned short f1;
};

union U1 {
   volatile int f0;
   unsigned f1;
};


static unsigned short g_10 = 0xCA9DL;
static unsigned g_32[9] = {0xC0233FD5L, 0xC0233FD5L, 0xC0233FD5L, 0xC0233FD5L, 0xC0233FD5L, 0xC0233FD5L, 0xC0233FD5L, 0xC0233FD5L, 0xC0233FD5L};
static volatile unsigned char g_44[6][5] = {{0x7CL, 0xE1L, 1UL, 254UL, 0xE1L}, {0x7CL, 0xE1L, 1UL, 254UL, 0xE1L}, {0x7CL, 0xE1L, 1UL, 254UL, 0xE1L}, {0x7CL, 0xE1L, 1UL, 254UL, 0xE1L}, {0x7CL, 0xE1L, 1UL, 254UL, 0xE1L}, {0x7CL, 0xE1L, 1UL, 254UL, 0xE1L}};
static unsigned g_90[8] = {8UL, 8UL, 4294967293UL, 8UL, 8UL, 4294967293UL, 8UL, 8UL};
static unsigned char g_91 = 0x31L;
static unsigned short g_95 = 0x33ABL;
static unsigned short g_116 = 0xB8E2L;
static unsigned char g_131[7] = {1UL, 1UL, 0x1CL, 1UL, 1UL, 0x1CL, 1UL};
static short g_145 = 0x1FBEL;
static short g_170[2][10][9] = {{{3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}}, {{3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}, {3L, 6L, 3L, 6L, 3L, 6L, 3L, 6L, 3L}}};
static char g_171 = (-1L);
static int g_179 = 0L;
static int g_180[6] = {0xD215D55BL, 0xD215D55BL, 0xD215D55BL, 0xD215D55BL, 0xD215D55BL, 0xD215D55BL};
static unsigned char g_195 = 0x49L;
static unsigned g_197 = 0x85D562BBL;
static unsigned g_201 = 18446744073709551606UL;
static char g_220 = 0x1FL;
static unsigned g_223 = 18446744073709551615UL;
static char g_239 = 0L;
static char g_251[8] = {0L, 0L, 0L, 0L, 0L, 0L, 0L, 0L};
static unsigned short g_257 = 7UL;
static int g_263[8][2] = {{0x889E0017L, 0x889E0017L}, {0x889E0017L, 0x889E0017L}, {0x889E0017L, 0x889E0017L}, {0x889E0017L, 0x889E0017L}, {0x889E0017L, 0x889E0017L}, {0x889E0017L, 0x889E0017L}, {0x889E0017L, 0x889E0017L}, {0x889E0017L, 0x889E0017L}};
static volatile union U0 g_272 = {0xED94L};
static union U0 g_279[4][10] = {{{0xD6ADL}, {0x440EL}, {9L}, {0x440EL}, {0xD6ADL}, {0x5B9DL}, {9L}, {0x5B9DL}, {0xD6ADL}, {0x440EL}}, {{0xD6ADL}, {0x440EL}, {9L}, {0x440EL}, {0xD6ADL}, {0x5B9DL}, {9L}, {0x5B9DL}, {0xD6ADL}, {0x440EL}}, {{0xD6ADL}, {0x440EL}, {9L}, {0x440EL}, {0xD6ADL}, {0x5B9DL}, {9L}, {0x5B9DL}, {0xD6ADL}, {0x440EL}}, {{0xD6ADL}, {0x440EL}, {9L}, {0x440EL}, {0xD6ADL}, {0x5B9DL}, {9L}, {0x5B9DL}, {0xD6ADL}, {0x440EL}}};
static volatile union U0 g_282 = {1L};
static const union U1 g_290 = {0x39F86B6FL};
static union U1 g_312 = {0x20F516C4L};
static union U1 g_339 = {1L};
static volatile union U0 g_353 = {-6L};
static unsigned short g_374 = 2UL;
static union U1 g_382 = {0xF35E505DL};
static unsigned g_397 = 2UL;
static volatile union U1 g_424 = {0xE0FBE80FL};
static int g_441 = (-6L);
static unsigned g_446 = 0xCD473E2EL;
static volatile union U1 g_447 = {-6L};
static const int g_462 = (-5L);
static unsigned short g_499 = 0xC300L;
static short g_500 = (-1L);
static char g_617 = (-7L);
static volatile unsigned g_693 = 0x76F13F27L;
static const union U0 g_755 = {0x9CC3L};
static int g_791 = 9L;
static volatile union U0 g_837 = {0x35AEL};
static volatile union U0 g_865 = {-5L};
static volatile union U1 g_941[6] = {{0x7EA2F192L}, {0x7EA2F192L}, {0x7EA2F192L}, {0x7EA2F192L}, {0x7EA2F192L}, {0x7EA2F192L}};
static volatile union U1 g_947[1] = {{0x9E0B14C4L}};
static char g_962[5] = {(-3L), 0L, (-3L), 0L, (-3L)};
static volatile union U1 g_1050 = {0xA2D6A714L};
static const union U1 g_1094[5] = {{0L}, {0L}, {0L}, {0L}, {0L}};
static volatile union U0 g_1107 = {0x23B1L};
static volatile union U0 g_1121[10][4] = {{{0x32EBL}, {-2L}, {-1L}, {1L}}, {{0x32EBL}, {-2L}, {-1L}, {1L}}, {{0x32EBL}, {-2L}, {-1L}, {1L}}, {{0x32EBL}, {-2L}, {-1L}, {1L}}, {{0x32EBL}, {-2L}, {-1L}, {1L}}, {{0x32EBL}, {-2L}, {-1L}, {1L}}, {{0x32EBL}, {-2L}, {-1L}, {1L}}, {{0x32EBL}, {-2L}, {-1L}, {1L}}, {{0x32EBL}, {-2L}, {-1L}, {1L}}, {{0x32EBL}, {-2L}, {-1L}, {1L}}};
static volatile union U1 g_1133 = {0L};
static union U0 g_1230 = {-1L};
static unsigned g_1278[5] = {0x1D01D7D6L, 0UL, 0x1D01D7D6L, 0UL, 0x1D01D7D6L};
static unsigned char g_1321 = 255UL;
static const union U1 g_1332[10][8] = {{{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}, {{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}, {{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}, {{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}, {{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}, {{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}, {{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}, {{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}, {{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}, {{0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}, {0x1692B55DL}}};
static union U0 g_1397 = {0x37C9L};
static union U0 g_1400 = {1L};
static int g_1458 = 3L;
static union U0 g_1467[3] = {{0x99A4L}, {0x99A4L}, {0x99A4L}};
static union U0 g_1574 = {0x5C89L};
static const union U0 g_1615 = {4L};
static unsigned short g_1648 = 0UL;
static union U0 g_1665 = {-1L};
static union U0 g_1670 = {7L};
static const unsigned short g_1678 = 0xA433L;
static union U1 g_1706 = {0x8214470FL};
static union U0 g_1723 = {-3L};
static char g_1727 = 0xAAL;
static volatile union U1 g_1728 = {0x34707A9AL};
static char g_1742 = 0x7FL;
static union U1 g_1800 = {4L};
static union U1 g_1844[10] = {{0x9A8B27E0L}, {0x9A8B27E0L}, {0x9A8B27E0L}, {0x9A8B27E0L}, {0x9A8B27E0L}, {0x9A8B27E0L}, {0x9A8B27E0L}, {0x9A8B27E0L}, {0x9A8B27E0L}, {0x9A8B27E0L}};
static volatile union U0 g_1903 = {-1L};
static union U0 g_1936 = {0x990EL};
static union U1 g_1942[10] = {{0x2F319A2DL}, {-6L}, {0x2F319A2DL}, {-6L}, {0x2F319A2DL}, {-6L}, {0x2F319A2DL}, {-6L}, {0x2F319A2DL}, {-6L}};
static const volatile union U0 g_1994 = {0x1818L};
static union U1 g_2013 = {0xEE4C1152L};



static union U1 func_1(void);
static int func_2(unsigned p_3);
static char func_5(unsigned p_6, short p_7, unsigned char p_8);
static union U0 func_13(const unsigned p_14, unsigned char p_15, int p_16, unsigned short p_17, unsigned p_18);
static unsigned char func_24(unsigned short p_25, unsigned char p_26, int p_27, unsigned char p_28, unsigned short p_29);
static unsigned char func_35(unsigned char p_36, short p_37, const unsigned p_38, int p_39);
static char func_42(int p_43);
static int func_47(unsigned p_48, unsigned short p_49, unsigned p_50);
static short func_59(unsigned short p_60, unsigned short p_61);
static int func_66(char p_67, unsigned short p_68);
static union U1 func_1(void)
{
    unsigned short l_4 = 65535UL;
    int l_1982 = 0x3BE70A6FL;
    int l_1991 = 0xCDD8E9B5L;
    unsigned short l_2012 = 0xCF32L;
    l_1982 = func_2(l_4);
    if ((safe_lshift_func_uint8_t_u_s(g_44[3][4], 7)))
    {
        unsigned l_1985 = 2UL;
        unsigned short l_1992 = 1UL;
        g_1800.f0 = (g_791 = l_1985);
        l_1991 = func_24((g_116 = 0xC9F5L), (((((safe_sub_func_uint16_t_u_u(l_4, (safe_add_func_uint32_t_u_u(0x6655FBC4L, 1UL)))) || ((((g_1728.f0 & ((safe_unary_minus_func_uint16_t_u(l_4)) > l_1985)) ^ 6L) & (1L && l_1982)) <= l_1991)) < l_1985) <= 0x3D1CL) , 0x23L), g_1665.f1, l_1992, l_4);
    }
    else
    {
        short l_1993[3][3] = {{(-1L), (-1L), 0x3B70L}, {(-1L), (-1L), 0x3B70L}, {(-1L), (-1L), 0x3B70L}};
        unsigned l_1999[5] = {0xDA796BA9L, 0xCCE230BFL, 0xDA796BA9L, 0xCCE230BFL, 0xDA796BA9L};
        int l_2000 = 8L;
        int i, j;
        l_1982 = l_1993[0][0];
        l_2000 = (g_1994 , func_66(g_446, (l_1999[3] = ((g_170[0][0][1] = ((safe_mod_func_uint32_t_u_u(g_257, (safe_lshift_func_int16_t_s_s((0x1A3764D9L != l_1993[1][1]), g_171)))) , ((((((l_1993[1][2] >= l_4) || (g_1994.f0 || l_1993[0][0])) && g_1942[3].f1) >= g_1397.f1) >= 0x17EAL) && l_1993[2][1]))) , l_1993[0][2]))));
        g_1844[8].f0 = (g_791 = ((safe_mod_func_uint32_t_u_u(l_1993[1][0], ((((safe_unary_minus_func_int16_t_s((g_170[0][3][1] = ((safe_sub_func_int8_t_s_s(g_1728.f1, func_66((safe_mod_func_int8_t_s_s(1L, (safe_sub_func_int8_t_s_s((((safe_rshift_func_int8_t_s_u(l_1999[1], 2)) | 248UL) > g_374), g_180[5])))), ((g_145 = ((((g_32[7] = (l_1999[3] > ((l_1991 = (g_1230.f1 || l_1999[2])) == g_791))) != 8L) || g_397) || l_2012)) , l_4)))) , l_1991)))) >= 4294967295UL) & 0x33L) , g_1742))) && l_2000));
    }
    return g_2013;
}







static int func_2(unsigned p_3)
{
    unsigned l_9[3];
    const int l_1767 = 0x908AF905L;
    const unsigned l_1768 = 4294967288UL;
    int l_1769 = (-1L);
    unsigned short l_1787 = 0x815EL;
    int l_1856[8] = {0xA0133947L, 0xA0133947L, 0xBAC0F87CL, 0xA0133947L, 0xA0133947L, 0xBAC0F87CL, 0xA0133947L, 0xA0133947L};
    char l_1941 = 0xD9L;
    int l_1965 = (-1L);
    int l_1973 = 0L;
    char l_1974 = 9L;
    int i;
    for (i = 0; i < 3; i++)
        l_9[i] = 18446744073709551615UL;
    l_1769 = (func_5(p_3, l_9[1], g_10) , (safe_add_func_int8_t_s_s((l_1767 != (l_9[1] , (4L && l_1768))), p_3)));
    if (l_1767)
    {
        unsigned short l_1782 = 0x9136L;
        int l_1803 = (-3L);
        int l_1808 = 1L;
        unsigned l_1822 = 5UL;
        unsigned l_1909 = 0xE59FD628L;
        char l_1929 = (-1L);
        int l_1957 = (-1L);
        if ((((g_263[6][0] = l_1767) || (safe_add_func_int8_t_s_s((safe_div_func_uint32_t_u_u(g_1678, (safe_div_func_int8_t_s_s(p_3, g_91)))), ((safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((0x5084B9C6L && (safe_lshift_func_uint8_t_u_u(l_1782, (safe_lshift_func_uint16_t_u_u(func_59((p_3 || (((safe_mod_func_int8_t_s_s((l_1787 < (safe_add_func_int16_t_s_s(g_263[5][1], g_239))), 3L)) , p_3) && 0x70L)), l_1782), l_1782))))), l_1782)), p_3)) != 0x4EL)))) > p_3))
        {
            unsigned l_1798 = 0xA1865AC2L;
            unsigned short l_1799 = 1UL;
            unsigned l_1819[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1819[i] = 0x945C3955L;
            g_1050.f0 = ((((((+p_3) != ((safe_rshift_func_int16_t_s_s(g_279[1][4].f0, (safe_mod_func_uint32_t_u_u(6UL, (((safe_lshift_func_uint8_t_u_s(((l_1769 = l_9[1]) < ((safe_rshift_func_int8_t_s_s(((((5L & ((g_339.f1 , g_1615.f1) | g_180[5])) > 0x90B64037L) && 8L) < l_1798), l_9[1])) , g_1727)), p_3)) ^ l_9[1]) , g_1727))))) && p_3)) || 1UL) < l_1799) == 0x9C81L) || p_3);
            l_1769 = (l_1803 = func_42((p_3 != (p_3 , (g_1800 , (safe_rshift_func_int16_t_s_s(0xB7DEL, 5)))))));
            g_1706.f0 = ((0x642BL && (((g_263[1][1] , (func_42(((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_s((g_282.f1 , (l_1808 = (l_1803 = l_1803))), 2)) , ((g_1574.f1 == (func_35((safe_sub_func_int32_t_s_s(func_5((g_446 = (safe_add_func_uint16_t_u_u((func_47((g_1800.f1 = (p_3 = (((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(8UL, (safe_div_func_int16_t_s_s((g_1230.f0 , (l_1769 = 0xFF2BL)), 0x5267L)))) != 0x98283D57L), g_462)) != g_223) < 0x8CL))), l_1799, g_170[0][0][1]) , 9UL), 0L))), l_1798, l_1799), l_1799)), l_1782, l_1787, l_1799) >= l_1782)) == l_1767)), 4)) < 1UL)) == l_1819[3])) <= 0L) ^ 2UL)) , g_382.f0);
        }
        else
        {
            const short l_1842 = (-1L);
            int l_1861[7];
            int l_1890 = 3L;
            int i;
            for (i = 0; i < 7; i++)
                l_1861[i] = 1L;
            for (g_500 = (-24); (g_500 < 1); ++g_500)
            {
                unsigned char l_1843 = 0xF9L;
                l_1769 = p_3;
                l_1769 = l_1822;
                for (l_1769 = 7; (l_1769 >= 0); l_1769 -= 1)
                {
                    int l_1859 = 5L;
                    unsigned l_1860 = 0xA06F57E5L;
                    int i;
                    l_1803 = (g_251[l_1769] ^ (0x1A5DF11DL & g_251[l_1769]));
                    for (g_257 = 0; (g_257 <= 2); g_257 += 1)
                    {
                        int l_1829 = 0x4BD7C295L;
                        int i;
                        g_1728.f0 = (l_1843 = ((safe_sub_func_int16_t_s_s(g_251[g_257], (safe_rshift_func_int8_t_s_u((((g_263[7][0] = (g_441 = ((l_1829 = g_131[(g_257 + 3)]) <= (g_1615.f0 <= g_1678)))) || (safe_add_func_uint8_t_u_u((((safe_mod_func_uint32_t_u_u(((safe_div_func_int8_t_s_s((l_1829 = (safe_lshift_func_uint16_t_u_u(((g_382.f1 , g_1467[1].f0) >= ((p_3 < (safe_mod_func_uint8_t_u_u(0xE0L, (safe_add_func_uint16_t_u_u((l_1842 , p_3), 65533UL))))) >= l_1842)), g_1321))), 0x0BL)) , l_1767), 4294967295UL)) , g_1400.f0) | g_131[(g_257 + 3)]), g_251[l_1769]))) ^ 0x1209733AL), p_3)))) < 0xD5AE34B1L));
                        l_1861[1] = (l_1860 = (l_1856[5] = (p_3 <= (((~(g_1844[8] , ((safe_mod_func_int8_t_s_s(l_1843, func_59(g_353.f1, ((p_3 < (safe_rshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint8_t_u_u((0UL == (safe_unary_minus_func_uint8_t_u(((((l_1856[7] = g_1742) & (g_1574.f1 = ((safe_add_func_uint16_t_u_u(l_1843, (l_1769 || l_1842))) , l_1843))) <= 1L) && g_1844[8].f1)))), 247UL)) , l_1859), 3)), (-1L))), p_3))) ^ p_3)))) >= 1UL))) , p_3) | g_1648))));
                        l_1861[1] = ((g_1723.f0 != ((safe_div_func_int16_t_s_s((g_170[0][9][8] = ((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u((((((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(((safe_sub_func_int32_t_s_s((~l_1782), l_1843)) > p_3), ((((safe_div_func_int32_t_s_s((g_197 ^ (safe_add_func_uint32_t_u_u(0x65EA2D96L, (func_59(g_374, ((p_3 , (safe_div_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u(g_397, p_3)), g_312.f1)), l_1803))) , 0UL)) != g_220)))), g_1278[0])) || p_3) , p_3) & 0x3AA56912L))), 0)) , l_1822) > g_239) >= 0x15EAAD7EL) < g_251[l_1769]), p_3)), l_1861[1])) ^ g_1678)), g_180[1])) >= 0x07L)) , g_282.f1);
                    }
                }
            }
            for (g_397 = 0; (g_397 <= 3); g_397 += 1)
            {
                return p_3;
            }
            for (g_1706.f1 = 0; g_1706.f1 < 5; g_1706.f1 += 1)
            {
                g_1278[g_1706.f1] = 0x2CF35AD0L;
            }
            l_1808 = ((l_1890 = ((p_3 , ((safe_lshift_func_int16_t_s_u((0x6CL ^ g_941[5].f0), (l_1861[3] = (+((safe_lshift_func_int8_t_s_u(g_263[2][1], (l_1856[7] = 0x14L))) , g_1400.f1))))) == l_1767)) , (0L < (safe_mod_func_uint8_t_u_u((l_1767 && p_3), g_91))))) > l_1842);
        }
        l_1808 = p_3;
        for (g_179 = 0; (g_179 == 0); g_179++)
        {
            int l_1904 = 0xCA3C50B1L;
            int l_1905 = 0xCE1A3A55L;
            g_339.f0 = (!((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(p_3, 4)), 0)) > ((safe_rshift_func_uint8_t_u_u(p_3, ((((0xCC88L ^ (g_1648 = p_3)) <= (((((l_1904 = (safe_lshift_func_uint16_t_u_u((func_59((safe_lshift_func_int8_t_s_u(0xDEL, (g_1903 , 0x04L))), p_3) || g_837.f0), l_1782))) < 0L) < l_1905) || l_1905) ^ g_1332[8][6].f1)) || p_3) >= p_3))) || p_3)));
            for (l_1803 = 4; (l_1803 >= 0); l_1803 -= 1)
            {
                for (l_1822 = 1; (l_1822 <= 5); l_1822 += 1)
                {
                    int i;
                    if (g_131[l_1803])
                        break;
                    if (g_1574.f1)
                        break;
                    l_1909 = (g_941[l_1822] , (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u(p_3)), g_1844[8].f1)));
                }
                for (g_339.f1 = 0; (g_339.f1 <= 6); g_339.f1 += 1)
                {
                    int l_1916 = 0xEC9EBDA2L;
                    int i, j;
                    for (g_91 = 0; (g_91 <= 6); g_91 += 1)
                    {
                        int i, j;
                        if (g_44[l_1803][l_1803])
                            break;
                        if (g_1278[l_1803])
                            continue;
                    }
                    l_1905 = (((g_44[l_1803][l_1803] , g_1728.f1) < (safe_sub_func_uint32_t_u_u((p_3 <= (l_1856[7] = (((safe_mod_func_uint32_t_u_u((p_3 && (func_59(p_3, ((g_116 > (safe_add_func_uint32_t_u_u(g_170[0][9][3], (p_3 == 0UL)))) , 0xC33DL)) , g_90[2])), 4294967295UL)) , g_1678) , l_1916))), p_3))) ^ 0xA656A13DL);
                    for (g_374 = 0; (g_374 <= 6); g_374 += 1)
                    {
                        return l_1782;
                    }
                    if (g_223)
                        break;
                }
            }
        }
        if ((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s((l_1769 = (safe_rshift_func_uint8_t_u_u((l_1803 = ((safe_div_func_int16_t_s_s(g_145, (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((l_1929 == p_3) >= l_1767), (((0x09L >= (l_1808 = ((safe_div_func_int8_t_s_s(((safe_mod_func_int8_t_s_s((p_3 == func_59(g_10, (g_180[1] != (safe_rshift_func_int16_t_s_s(0L, 7))))), p_3)) > 0x9EA5L), 255UL)) , p_3))) , g_1936) , p_3))), g_462)))) ^ l_1856[7])), g_251[7]))), g_382.f1)), 3)))
        {
            unsigned l_1947[9];
            int i;
            for (i = 0; i < 9; i++)
                l_1947[i] = 1UL;
            l_1856[7] = ((g_1467[1].f1 = ((((safe_mod_func_uint8_t_u_u(l_1941, p_3)) == 0L) ^ (g_1942[3] , (g_499 == (!(g_791 = ((0x90E4A045L <= ((((((safe_add_func_uint16_t_u_u((l_1803 = (((0UL || (p_3 , (safe_sub_func_int8_t_s_s(g_441, 4L)))) && 0xDFL) > g_353.f1)), l_1947[2])) < p_3) < l_1929) , p_3) , l_1947[2]) == l_1947[2])) ^ g_1942[3].f1)))))) >= g_223)) && 1L);
        }
        else
        {
            l_1769 = (safe_div_func_int32_t_s_s(((safe_rshift_func_uint16_t_u_u((0x4AL ^ (safe_unary_minus_func_uint8_t_u((safe_div_func_int16_t_s_s(((func_66((p_3 ^ (safe_mul_func_int8_t_s_s(func_47(l_1909, p_3, g_441), ((l_1803 = ((p_3 != l_1803) != (g_1800.f1 == 0x9C50L))) != l_1787)))), g_374) & 0x5FF9070FL) , l_1957), l_1957))))), p_3)) || p_3), p_3));
            l_1808 = p_3;
        }
    }
    else
    {
        char l_1962[1];
        int l_1975 = 0x9E9D360FL;
        int l_1976 = (-1L);
        int i;
        for (i = 0; i < 1; i++)
            l_1962[i] = 1L;
        g_1050.f0 = (safe_sub_func_uint16_t_u_u((p_3 , l_9[2]), (safe_lshift_func_uint16_t_u_u((~p_3), l_1962[0]))));
        g_947[0].f0 = ((safe_lshift_func_uint8_t_u_s(p_3, (l_1965 && (l_1767 & (l_1976 = ((g_1332[8][6].f0 && ((safe_add_func_uint16_t_u_u(p_3, p_3)) >= (l_1973 = (l_1975 = ((safe_lshift_func_uint16_t_u_s(((safe_unary_minus_func_uint32_t_u(func_5((((l_1856[7] = func_5((((safe_add_func_uint32_t_u_u(l_1767, func_66(l_1941, (l_1769 && 0xF7L)))) ^ p_3) && l_1973), p_3, l_1962[0])) && g_131[2]) < l_1974), p_3, p_3))) , 65529UL), 7)) & p_3))))) > 0x02AED250L)))))) & (-1L));
        l_1965 = l_9[1];
        g_1133.f0 = (-3L);
    }
    for (g_499 = 0; (g_499 > 55); g_499 = safe_add_func_int16_t_s_s(g_499, 4))
    {
        int l_1981 = 0xFB404191L;
        for (g_1936.f1 = 7; (g_1936.f1 < 12); ++g_1936.f1)
        {
            if (g_1728.f1)
                break;
        }
        if (l_1981)
            break;
    }
    return p_3;
}







static char func_5(unsigned p_6, short p_7, unsigned char p_8)
{
    int l_33 = 0x41A80D1CL;
    int l_1743 = 3L;
    const short l_1746 = 5L;
    unsigned l_1763 = 0x04F21666L;
    int l_1764[10][3][7] = {{{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}, {{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}, {{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}, {{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}, {{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}, {{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}, {{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}, {{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}, {{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}, {{0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}, {0x94A8B982L, 5L, 0xA26816DFL, 0xB521BEE2L, 0x08508066L, 0xCDB1FD29L, 0x4BAB8A94L}}};
    int i, j, k;
    l_1743 = ((p_6 & (safe_div_func_uint32_t_u_u(g_10, (func_13(((safe_lshift_func_uint8_t_u_u(0UL, (safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint8_t_u((g_10 != (func_24(g_10, g_10, ((safe_sub_func_int16_t_s_s((p_7 = p_6), (l_33 = (g_32[2] = g_10)))) > p_6), g_10, g_10) ^ g_1321)))), 3)))) > 0xAB5DL), p_6, p_8, g_462, g_10) , l_33)))) <= p_8);
    l_1743 = ((safe_sub_func_uint32_t_u_u(l_1746, (safe_add_func_int8_t_s_s(p_7, func_35(func_59(p_6, p_8), (((((g_290.f1 & ((func_42(g_1458) >= (((safe_rshift_func_int8_t_s_s(((0x86L != p_7) != 0x96L), 0)) , g_290.f1) > l_33)) < (-1L))) >= l_1743) , g_1723.f1) , 0x349F6854L) == g_1648), p_8, g_1278[3]))))) || 0UL);
    g_1133.f0 = (safe_add_func_int32_t_s_s(l_33, (safe_div_func_uint8_t_u_u(((g_1727 != (safe_add_func_int16_t_s_s((func_42((((l_1743 = ((safe_mod_func_uint8_t_u_u(l_1743, (((g_1467[1].f1 >= (safe_lshift_func_int8_t_s_s(l_1743, 5))) , (l_1764[4][2][0] = l_1763)) , g_1728.f1))) <= l_1743)) != 0xCAL) <= 0L)) == g_1648), 0xA09DL))) <= p_8), l_1746))));
    return g_44[3][4];
}







static union U0 func_13(const unsigned p_14, unsigned char p_15, int p_16, unsigned short p_17, unsigned p_18)
{
    unsigned char l_1337 = 0x78L;
    int l_1338 = 0x7D679033L;
    short l_1339 = 0xBD5EL;
    int l_1353[10][10] = {{(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}, {(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}, {(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}, {(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}, {(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}, {(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}, {(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}, {(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}, {(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}, {(-1L), 0xA4A4289BL, 0L, (-1L), 0L, 0x66E77BFAL, 1L, 0x7524EF74L, 0L, (-2L)}};
    unsigned short l_1401[5];
    unsigned short l_1437[6] = {65535UL, 0x55F4L, 65535UL, 0x55F4L, 65535UL, 0x55F4L};
    short l_1443 = (-1L);
    int l_1554 = 0x2D6414D7L;
    short l_1721 = 0x668DL;
    int i, j;
    for (i = 0; i < 5; i++)
        l_1401[i] = 65530UL;
    g_947[0].f0 = ((safe_div_func_int32_t_s_s((g_1332[8][6] , 0x309EB823L), p_16)) | ((safe_div_func_uint16_t_u_u(0x4A28L, ((0xAB3E633CL == ((l_1338 = (((p_16 <= (safe_div_func_int8_t_s_s((0x4BL >= (p_14 | g_441)), p_17))) ^ l_1337) == g_339.f1)) <= g_180[1])) , g_397))) ^ l_1339));
    for (g_1230.f1 = (-8); (g_1230.f1 == 20); ++g_1230.f1)
    {
        char l_1344 = 0x0FL;
        int l_1381 = 0x5D68EDA8L;
        int l_1410 = 2L;
        unsigned char l_1416 = 0xE6L;
        unsigned l_1543 = 18446744073709551611UL;
        const unsigned short l_1571 = 0xC8FFL;
        short l_1583[8][7][1] = {{{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}, {{1L}, {1L}, {1L}, {1L}, {1L}, {1L}, {1L}}};
        int l_1590 = (-1L);
        unsigned short l_1600 = 0UL;
        int i, j, k;
        for (g_197 = 0; (g_197 <= 5); g_197 += 1)
        {
            int l_1367 = (-1L);
            int l_1411 = 0L;
            int i;
            if (g_180[g_197])
                break;
            if ((safe_sub_func_uint8_t_u_u((g_1321 = (g_180[g_197] > (func_59((((l_1344 & ((l_1339 > 1L) != ((safe_div_func_uint16_t_u_u(g_1133.f1, (safe_div_func_int32_t_s_s(((p_18 , 18446744073709551611UL) , (((safe_sub_func_uint8_t_u_u((((-1L) >= ((safe_lshift_func_int16_t_s_s((p_14 && l_1344), p_14)) , g_180[2])) < p_15), p_17)) > g_441) , 0xF2B9860CL)), l_1344)))) , 4UL))) , g_462) != 0x7CL), p_18) ^ g_441))), l_1353[8][3])))
            {
                unsigned l_1356 = 0x1CFA1706L;
                int l_1368 = 0xEA433B0DL;
                char l_1378 = (-1L);
                unsigned char l_1396 = 248UL;
                int i;
                l_1356 = (safe_add_func_int32_t_s_s((p_16 = l_1337), (g_180[g_197] == g_131[2])));
                if (((safe_lshift_func_int16_t_s_s(((g_220 | (func_59(func_59(g_424.f0, (p_17 = func_59((safe_add_func_int16_t_s_s(((((((safe_lshift_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u((((-10L) != (safe_lshift_func_int8_t_s_s((g_500 < l_1337), g_263[6][0]))) | (((g_180[g_197] = ((0xDF7E4A3DL == p_16) , g_180[g_197])) , p_18) && p_14)), g_312.f1)) , 0x24B2C1AFL) , p_15) > p_17), p_14)) <= 0x6DL) & 65535UL) == 1L) & l_1338) && g_180[0]), 0x9747L)), g_10))), l_1367) && g_312.f1)) ^ 0L), 1)) < 0x3DL))
                {
                    unsigned short l_1392 = 0x30DFL;
                    if (l_1368)
                    {
                        int l_1369 = 1L;
                        l_1369 = p_17;
                    }
                    else
                    {
                        const unsigned short l_1393 = 0x3842L;
                        g_441 = (func_59((safe_mod_func_int16_t_s_s((((safe_div_func_int32_t_s_s((-1L), ((safe_sub_func_int8_t_s_s(p_16, (((safe_div_func_int8_t_s_s(l_1378, (safe_div_func_int32_t_s_s(((l_1381 = p_16) > (safe_sub_func_uint8_t_u_u(((!(g_962[4] | (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s((g_1321 = g_397), (+(((!(safe_rshift_func_int8_t_s_u((p_18 , p_14), func_59((safe_mod_func_int8_t_s_s(((l_1344 == g_962[2]) <= p_17), 0xCAL)), p_17)))) ^ g_257) , g_32[2])))), g_180[g_197])))) ^ 1UL), l_1338))), g_312.f0)))) < 0L) && l_1368))) || g_1230.f1))) && g_180[g_197]) & g_374), l_1356)), l_1392) > p_17);
                        if (l_1393)
                            break;
                        p_16 = (p_18 < (safe_add_func_uint8_t_u_u(l_1396, (p_15 = 1UL))));
                        if (p_17)
                            break;
                    }
                }
                else
                {
                    l_1368 = ((g_145 = (g_947[0].f0 || l_1368)) || p_16);
                    p_16 = func_59((p_17 = l_1353[8][3]), g_837.f1);
                    if (g_197)
                        continue;
                }
                return g_1397;
            }
            else
            {
                unsigned char l_1412 = 0xB4L;
                int l_1413 = (-8L);
                char l_1436[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_1436[i] = 1L;
                l_1412 = (func_59(l_1367, (p_14 > l_1381)) > ((l_1411 = ((((g_1400 , g_353) , l_1401[4]) && ((((safe_div_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((l_1410 = (safe_mod_func_uint8_t_u_u(g_263[2][1], 1UL))), 65532UL)), g_10)) ^ 251UL), 0x663D7BDDL)) , p_14) ^ g_382.f0) , p_14)) , 0xE2L)) > 0xAEL));
                p_16 = ((l_1413 = l_1401[4]) >= (safe_sub_func_uint8_t_u_u(p_17, l_1416)));
                if (g_462)
                {
                    unsigned l_1438 = 0UL;
                    if ((safe_lshift_func_int16_t_s_s(((p_16 & 0xDA226FE9L) == 0xE077L), 12)))
                    {
                        p_16 = g_441;
                        if (g_962[0])
                            break;
                        g_941[5].f0 = (l_1381 = func_59((((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(p_18, 4)), (g_1397.f1 == (l_1413 = (g_145 = (((p_17 = (safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((g_32[8] = (((-1L) != (func_59(func_59(p_17, ((+func_59(g_441, (safe_lshift_func_int8_t_s_s(((((p_18 >= (safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_u((((((((g_251[6] = (safe_unary_minus_func_int16_t_s(((safe_lshift_func_uint16_t_u_s(p_15, 1)) , l_1410)))) == 0x95L) >= p_15) == 0xCEL) == g_312.f1) < l_1436[7]) != 0UL), 0)) <= g_282.f0) < (-1L)), l_1437[2]))) ^ (-4L)) || p_16) >= g_462), 4)))) == 0x44E7L)), l_1367) && 0xA3990AF6L)) <= 3L)), 0xE75731D8L)), l_1438))) != 0x38BBL) != p_16)))))) || l_1337) && g_1332[8][6].f0), g_1278[0]));
                    }
                    else
                    {
                        p_16 = (safe_rshift_func_uint8_t_u_s(p_14, 0));
                        return g_282;
                    }
                }
                else
                {
                    unsigned char l_1463 = 0x16L;
                    int l_1464 = 3L;
                    p_16 = (p_16 == p_14);
                    if (g_1278[0])
                    {
                        l_1413 = g_382.f0;
                        g_1050.f0 = (safe_mod_func_uint32_t_u_u(p_16, (l_1443 = 0x0DD3A385L)));
                    }
                    else
                    {
                        int l_1450 = 0x6B1E2BA3L;
                        char l_1455[9];
                        int i;
                        for (i = 0; i < 9; i++)
                            l_1455[i] = (-1L);
                        l_1413 = func_59(g_131[2], (p_17 = p_14));
                        p_16 = (l_1455[5] = ((g_791 = ((safe_lshift_func_uint8_t_u_s(l_1344, 6)) <= ((safe_mod_func_uint16_t_u_u(((g_95 = (((safe_add_func_int16_t_s_s(p_14, l_1450)) != (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((((-1L) != g_1133.f1) , (p_17 = (l_1367 = (p_17 & p_18)))) == g_180[3]), g_91)), 5))) <= 4294967286UL)) & p_16), g_290.f1)) && l_1367))) ^ l_1436[2]));
                        p_16 = ((g_791 = ((safe_add_func_uint8_t_u_u(((g_1458 ^ p_18) , p_18), 1UL)) && (((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(l_1436[4], 4)), func_59(l_1463, ((g_693 <= 6UL) && g_180[g_197])))) , 0L) == g_131[2]))) ^ g_32[7]);
                    }
                    l_1464 = l_1437[2];
                }
            }
        }
        for (g_312.f1 = 28; (g_312.f1 < 38); g_312.f1 = safe_add_func_int32_t_s_s(g_312.f1, 2))
        {
            return g_1467[1];
        }
        for (g_791 = 1; (g_791 >= 0); g_791 -= 1)
        {
            unsigned char l_1481[2][6] = {{0UL, 0x39L, 0x43L, 0x43L, 0x39L, 0UL}, {0UL, 0x39L, 0x43L, 0x43L, 0x39L, 0UL}};
            int l_1502 = (-6L);
            int l_1520 = 2L;
            short l_1540 = 0x5EFAL;
            unsigned l_1565 = 0xB0822E3AL;
            unsigned short l_1577 = 0x3576L;
            const unsigned char l_1658 = 0x4BL;
            char l_1679 = 0x9DL;
            int l_1693 = 0x82C63EDEL;
            int l_1712 = (-1L);
            unsigned char l_1724[8][9][3] = {{{253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}}, {{253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}}, {{253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}}, {{253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}}, {{253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}}, {{253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}}, {{253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}}, {{253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}, {253UL, 0xDCL, 0x7FL}}};
            char l_1734 = 0x8CL;
            int i, j, k;
            g_1050.f0 = ((p_14 ^ ((safe_rshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(func_59(((l_1410 = (((9UL == (((safe_div_func_uint8_t_u_u(((((l_1338 = (p_18 , func_59(p_14, ((((!p_15) && (((g_339.f0 != func_66(p_17, (safe_add_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(g_239)), (safe_div_func_uint32_t_u_u(((g_1321 , (-1L)) || l_1410), 1UL)))))) ^ 0x0942BC14L) != p_15)) == g_441) <= l_1381)))) , l_1381) == 0x2DEAL) | 0x05FBL), 255UL)) || 1L) != g_1397.f1)) & l_1481[0][4]) <= p_16)) & 0UL), l_1401[4]), l_1481[0][4])), 5)) == 0xF834L)) | p_15);
            for (l_1338 = 0; (l_1338 <= 5); l_1338 += 1)
            {
                unsigned short l_1501 = 0x4018L;
                int l_1503 = 2L;
                int l_1566 = 0x0D9CF407L;
                int l_1567 = 6L;
                for (g_201 = 0; (g_201 <= 7); g_201 += 1)
                {
                    int l_1500 = 1L;
                    int i;
                    if ((l_1503 = (((((-3L) != ((l_1502 = (0x5461B713L & (safe_div_func_uint8_t_u_u((func_59(((g_441 = g_90[(g_791 + 1)]) || (safe_lshift_func_int16_t_s_u(((((l_1501 = func_59((safe_mod_func_uint16_t_u_u(l_1437[(g_791 + 4)], (func_59(((safe_mod_func_uint8_t_u_u((((safe_div_func_uint16_t_u_u((g_1332[8][6].f0 && p_17), (((safe_lshift_func_uint8_t_u_u(((l_1410 < (safe_mod_func_uint16_t_u_u(func_59(((l_1500 = (safe_rshift_func_int8_t_s_u((g_239 = (g_251[2] = (p_17 , p_17))), 5))) && 0L), p_16), g_32[5]))) || l_1500), 3)) && g_10) && 255UL))) == p_17) & p_17), p_14)) , l_1339), g_962[0]) , 0x841EL))), p_15)) & 1L) , l_1501) & 4294967289UL), g_180[5]))), l_1481[0][4]) >= p_15), g_617)))) == l_1437[(g_791 + 4)])) && 0x14L) == g_962[1]) >= 1L)))
                    {
                        int i, j, k;
                        p_16 = p_18;
                        if (g_32[8])
                            break;
                        p_16 = ((l_1481[g_791][l_1338] = (safe_rshift_func_uint16_t_u_s((func_59((g_279[1][4] , (safe_add_func_uint32_t_u_u((g_90[5] = func_59(l_1502, g_441)), (l_1381 = ((safe_div_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((safe_add_func_int32_t_s_s(g_617, ((safe_mod_func_uint32_t_u_u((~(l_1500 = (g_1467[1] , 0xB0C3208FL))), g_180[5])) , (safe_add_func_uint16_t_u_u((l_1437[l_1338] = ((~(safe_rshift_func_int16_t_s_s((((l_1520 = g_755.f1) > l_1500) , p_18), g_1133.f1))) >= l_1503)), g_116))))), l_1481[1][5])) & l_1381), g_91)) != p_18))))), l_1338) , p_15), g_1332[8][6].f1))) , p_16);
                        l_1520 = (safe_rshift_func_uint8_t_u_s(((safe_div_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(g_145, 0)), (safe_mod_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u(g_941[5].f0, p_14)), g_170[1][7][8])))) & ((safe_sub_func_int32_t_s_s((p_14 | (safe_unary_minus_func_int8_t_s(0xD8L))), ((((safe_div_func_int16_t_s_s((l_1503 = (0x7329L && g_755.f1)), (safe_div_func_uint32_t_u_u(p_16, g_1278[0])))) <= g_1230.f1) <= g_441) || g_279[1][4].f1))) && p_14)), p_14));
                    }
                    else
                    {
                        g_1050.f0 = p_17;
                        g_382.f0 = ((((255UL == 0UL) == g_1230.f0) , ((p_16 , (+(safe_lshift_func_int16_t_s_s(l_1540, (safe_add_func_int32_t_s_s(g_131[6], p_18)))))) & (l_1381 || 0x833A520AL))) , l_1410);
                    }
                    l_1381 = l_1543;
                }
                p_16 = p_17;
                for (l_1443 = 0; (l_1443 <= 16); l_1443 = safe_add_func_int32_t_s_s(l_1443, 6))
                {
                    unsigned l_1570 = 0xF9330D53L;
                    g_382.f0 = (g_339.f0 == (6L | ((g_441 | ((((safe_lshift_func_uint8_t_u_u((safe_add_func_uint16_t_u_u((0xF66BL != l_1410), (g_170[0][0][1] , (l_1554 = (l_1381 = ((safe_sub_func_uint16_t_u_u(g_223, (safe_lshift_func_uint8_t_u_s((g_131[2] = func_59(p_14, g_962[0])), 7)))) || 0xA8L)))))), 5)) > (-1L)) , g_382.f1) || g_197)) ^ g_201)));
                    l_1566 = (((safe_add_func_int8_t_s_s((l_1503 = (0xDEL ^ (((l_1481[0][4] > (g_131[0] || g_170[0][0][1])) || (p_17 = l_1481[0][4])) < 0xCEC77049L))), func_59(g_865.f1, (((((safe_rshift_func_int8_t_s_u((safe_add_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((~l_1501) & ((safe_mod_func_uint32_t_u_u(func_59(p_15, l_1543), p_14)) == p_15)), 9UL)), p_18)), 2)) > p_16) ^ 1L) < l_1565) , p_14)))) & l_1543) != (-1L));
                    for (g_1397.f1 = 0; (g_1397.f1 <= 6); g_1397.f1 += 1)
                    {
                        int i;
                        l_1567 = (g_441 = g_131[l_1338]);
                        p_16 = (safe_mod_func_int8_t_s_s((l_1520 = (l_1502 = ((l_1540 > (l_1381 != (p_15 , g_170[0][0][1]))) && ((((~g_837.f0) && (func_47(p_14, p_17, (func_35(l_1570, (l_1381 = p_17), g_1278[0], p_16) | p_16)) >= l_1571)) < 1L) > p_17)))), l_1443));
                        p_16 = func_66((safe_mod_func_int32_t_s_s(p_17, (l_1502 = 0xDFB6C898L))), p_14);
                        p_16 = ((g_1574 , g_145) & func_59((safe_sub_func_uint32_t_u_u(g_131[l_1338], l_1577)), g_180[5]));
                    }
                }
            }
            for (l_1565 = 0; (l_1565 <= 1); l_1565 += 1)
            {
                int l_1582 = 1L;
                l_1381 = ((safe_mod_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(((!(func_59(p_16, (g_499 = 0x6D38L)) , (l_1337 ^ l_1543))) & (p_18 = (((l_1582 != (p_15 | (l_1583[2][3][0] > ((safe_add_func_int16_t_s_s(func_66((safe_mod_func_uint16_t_u_u(((g_91 = 249UL) > g_962[1]), (-1L))), l_1565), 0x37A3L)) <= p_18)))) == g_441) , 0xB6BC8083L))), l_1543)) || 0UL) <= 0xB9L), 0x92D9L)) , p_14);
                if (g_947[0].f1)
                    break;
                return g_1467[2];
            }
            if ((g_263[2][1] = g_1332[8][6].f0))
            {
                unsigned l_1594 = 0x2CC98663L;
                int l_1649 = 0L;
                for (l_1565 = 0; (l_1565 <= 1); l_1565 += 1)
                {
                    for (g_197 = 0; (g_197 <= 1); g_197 += 1)
                    {
                        g_441 = (g_1467[1].f0 > p_17);
                    }
                }
                if ((safe_lshift_func_int8_t_s_s((((((l_1590 = (((2UL | (0x79DDL != func_66(p_18, g_145))) | g_1397.f0) , (!g_263[2][1]))) < ((p_15 , g_1400.f1) >= g_1458)) & 252UL) , 0x6A28A7F4L) , l_1577), 3)))
                {
                    int l_1593 = 0x50490D1EL;
                    int l_1599[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1599[i] = 0x1D37345EL;
                    for (g_116 = 0; (g_116 <= 1); g_116 += 1)
                    {
                        return g_353;
                    }
                    if (((safe_mod_func_uint32_t_u_u((((l_1593 = ((g_263[4][1] = g_791) < (-6L))) <= (l_1381 = ((g_353.f1 > (((g_500 | (l_1594 , (safe_add_func_int8_t_s_s(((((safe_mod_func_uint32_t_u_u(func_66(l_1594, (g_239 | ((g_382.f1 = ((p_18 = 4294967292UL) & l_1599[0])) , 0x55L))), g_1574.f1)) | 65530UL) && p_16) , 2L), l_1437[2])))) , p_18) != p_17)) | 1L))) > 0xB7D1L), (-10L))) > l_1600))
                    {
                        p_16 = (-1L);
                    }
                    else
                    {
                        int l_1612 = 0L;
                        p_16 = 1L;
                        p_16 = (safe_add_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s((safe_add_func_int8_t_s_s((p_16 >= g_1094[3].f1), (p_15 = 0xF8L))))) > l_1437[2]), g_424.f1)), 4)), (((safe_lshift_func_uint16_t_u_u(l_1437[4], 13)) > 0x5293212FL) & (l_1381 = func_59((g_220 != l_1612), g_10)))));
                        if (p_16)
                            continue;
                    }
                }
                else
                {
                    int l_1616 = 0x2D4543FEL;
                    if ((safe_lshift_func_int16_t_s_u(func_35((g_131[1] = (p_15 , ((l_1616 = (g_223 != (g_91 > (g_1615 , (g_441 = p_17))))) >= p_18))), (l_1520 = g_446), (safe_lshift_func_int8_t_s_s((((safe_div_func_int16_t_s_s(p_16, l_1594)) , p_18) > g_170[0][0][1]), 4)), g_1397.f1), 0)))
                    {
                        char l_1633 = (-7L);
                        int l_1634 = 0x3F7E4E1EL;
                        g_441 = (((safe_mod_func_int8_t_s_s(((safe_sub_func_int8_t_s_s(((2UL != (safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s((l_1443 < (safe_lshift_func_int16_t_s_s((p_14 >= ((-1L) < (l_1554 = (g_791 < g_941[5].f1)))), 10))), l_1616)), (safe_mod_func_uint16_t_u_u((p_14 & l_1571), 4UL))))) != l_1616), l_1633)) , 1L), l_1616)) , l_1594) && p_18);
                        l_1634 = g_239;
                        if (p_14)
                            break;
                    }
                    else
                    {
                        char l_1635 = 6L;
                        l_1635 = l_1583[4][5][0];
                        p_16 = func_59(func_66((g_282.f1 , g_499), (+(safe_sub_func_int16_t_s_s(l_1437[5], 0x88E5L)))), p_14);
                        p_16 = (0x819F46C6L == 0x9D071487L);
                    }
                    l_1649 = ((func_59((g_1648 = (((~func_66((((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u(((func_35((l_1565 , func_35(g_339.f1, (safe_rshift_func_int16_t_s_s((-4L), 0)), g_1107.f1, ((p_18 || (g_116 , g_500)) , (!((safe_lshift_func_int8_t_s_u(l_1616, 1)) || (safe_mod_func_uint16_t_u_u(g_95, l_1616))))))), p_17, g_1467[1].f1, p_18) || (-2L)) == g_1648), l_1565)), l_1616)) < l_1540) && 0x7628L), p_16)) | l_1565) , g_1278[0])), g_755.f1) < g_1458) >= (-10L));
                    if (((safe_mod_func_uint8_t_u_u(func_35(((safe_mod_func_uint32_t_u_u((g_90[7] = ((safe_mod_func_uint32_t_u_u((l_1616 & (safe_sub_func_int8_t_s_s(l_1649, ((l_1658 >= g_263[2][1]) & (((((g_1321 <= ((((((-8L) ^ ((p_17 >= ((((safe_mod_func_int16_t_s_s(g_837.f0, l_1649)) != l_1616) >= 1UL) || p_15)) < g_1615.f1)) || 3L) && g_1321) == p_15) != 4294967295UL)) >= p_17) & p_18) | 0L) != g_1094[3].f1))))), g_179)) | g_962[4])), 0x1AD55E74L)) == 0xC9BFL), p_17, p_17, p_18), 0xD8L)) <= p_16))
                    {
                        p_16 = (-7L);
                        if (l_1594)
                            continue;
                        p_16 = (g_1094[3].f0 < g_251[4]);
                    }
                    else
                    {
                        l_1520 = ((safe_rshift_func_int16_t_s_u((((func_35(((safe_mod_func_uint8_t_u_u(p_14, g_239)) & 0xA0L), ((g_1665 , (((safe_rshift_func_int16_t_s_u((g_32[2] & (safe_div_func_uint32_t_u_u(l_1437[0], 0x64DDB741L))), g_171)) != (0xAAL | l_1481[1][4])) >= g_1397.f1)) <= g_279[1][4].f1), l_1616, g_10) | 1L) & g_617) != g_500), 5)) && l_1554);
                    }
                }
            }
            else
            {
                short l_1675 = 0x99DFL;
                int l_1680 = 0x1E5B525AL;
                for (g_257 = 0; (g_257 <= 1); g_257 += 1)
                {
                    return g_1670;
                }
                l_1680 = func_35(((l_1437[2] || ((safe_div_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_446, func_59(g_10, l_1675))), g_397)) == l_1481[0][1])) , (p_15 = ((p_16 != (((safe_add_func_int16_t_s_s(2L, p_17)) , p_15) , g_95)) == g_1678))), l_1679, p_14, p_14);
                g_339.f0 = (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u((func_66((safe_lshift_func_int8_t_s_u((((g_251[6] <= p_18) < p_17) <= (p_16 == p_16)), 7)), p_14) >= (p_14 , p_16)), 4)), g_1321)), g_290.f1));
                if (l_1416)
                    continue;
            }
            for (l_1416 = 0; (l_1416 <= 1); l_1416 += 1)
            {
                unsigned short l_1705 = 0UL;
                int i, j, k;
                g_263[2][1] = g_441;
                if (l_1590)
                    break;
                for (p_16 = 1; (p_16 >= 0); p_16 -= 1)
                {
                    int l_1696 = 0L;
                    short l_1710 = 0x3F8AL;
                    g_941[5].f0 = func_66(g_1107.f1, p_16);
                    if (((((safe_add_func_uint32_t_u_u(0x843AD2C2L, p_15)) && ((l_1693 <= 65535UL) > ((((l_1696 > (func_59(((((p_17 , 0L) , (safe_rshift_func_uint16_t_u_s(l_1554, (g_1400.f0 , (-10L))))) ^ p_15) > (-1L)), l_1583[7][2][0]) >= 0L)) , g_462) , 4294967295UL) <= 0x4D6D5958L))) && 4L) , (-1L)))
                    {
                        unsigned l_1709 = 4UL;
                        int l_1722 = 5L;
                        l_1381 = (safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((l_1705 , g_1706) , (safe_rshift_func_uint16_t_u_u(g_499, (l_1709 , l_1710)))), (safe_unary_minus_func_uint32_t_u((((g_263[2][1] = p_16) | (l_1696 ^ (p_17 != ((p_18 >= 0x9B894E91L) , p_16)))) > l_1712))))), 4)), l_1709));
                        l_1381 = func_35((g_1321 = (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_u(p_16, 9)), (p_15 = (g_131[4] = (safe_add_func_uint8_t_u_u(l_1709, ((l_1502 = (safe_sub_func_uint16_t_u_u(((p_16 | g_180[4]) & (((-9L) && g_1133.f0) != ((-1L) ^ l_1705))), p_14))) & l_1481[1][3])))))))), l_1696, g_116, l_1721);
                        l_1722 = 0x054B54D3L;
                        if (l_1696)
                            break;
                    }
                    else
                    {
                        return g_1723;
                    }
                }
                g_1133.f0 = (l_1724[1][7][0] == ((safe_rshift_func_uint8_t_u_u(g_1727, 2)) , func_35((g_1728 , ((p_15 || (!(g_1665.f1 = ((g_424.f1 ^ ((g_170[l_1416][(g_791 + 5)][l_1416] = (safe_add_func_int8_t_s_s((l_1520 = p_15), ((safe_sub_func_int8_t_s_s(func_66(((l_1338 = (safe_unary_minus_func_int32_t_s((((p_17 = 0x9DA2L) != (func_59(p_15, ((l_1437[2] > l_1712) , 0xA060L)) & 7L)) , l_1734)))) | l_1658), g_1278[1]), g_962[0])) | (-1L))))) , p_15)) && 0UL)))) != l_1565)), p_14, g_279[1][4].f1, l_1437[3])));
            }
        }
    }
    g_1742 = (g_1121[4][2].f1 >= ((p_18 != (safe_unary_minus_func_int32_t_s(0xCE60C274L))) <= ((safe_lshift_func_uint16_t_u_u((g_1648 ^ (safe_sub_func_int16_t_s_s((-4L), 0x2A49L))), p_14)) | (-1L))));
    p_16 = p_18;
    return g_837;
}







static unsigned char func_24(unsigned short p_25, unsigned char p_26, int p_27, unsigned char p_28, unsigned short p_29)
{
    unsigned l_34 = 0x5A2F617AL;
    int l_1304 = 0x3442D160L;
    l_34 = 0L;
    g_263[3][0] = ((l_1304 = func_35(((((p_26 || ((safe_div_func_int8_t_s_s((func_42(p_26) , (g_500 > ((p_26 , (l_34 < ((((4L >= 0xFDFD42E5L) , (((0UL != g_865.f1) ^ l_34) , (-1L))) ^ 0x1FL) ^ 65535UL))) , g_447.f1))), l_34)) & g_462)) & g_755.f1) >= 4294967295UL) , p_26), l_34, p_25, p_26)) > p_25);
    g_1050.f0 = func_35((safe_add_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s((safe_mul_func_int32_t_s_s(g_374, ((safe_mod_func_uint32_t_u_u(((p_28 = ((safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((-1L) > (safe_rshift_func_int8_t_s_u(((((((!(safe_rshift_func_int8_t_s_s(g_1321, 1))) > g_170[0][5][5]) ^ 3L) != (safe_div_func_int32_t_s_s(g_382.f0, ((l_1304 , ((safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(((g_446 = (((((l_1304 = ((0xCFCEL && (safe_div_func_uint16_t_u_u(p_25, l_34))) >= p_28)) != 0L) , l_1304) , p_27) , l_1304)) < 0UL), g_339.f1)) , 0x9EC6L), l_34)) > 0xA6E1L)) , l_1304)))) | g_1230.f1) & g_197), g_382.f1))), p_27)), 1)) || p_25)) != g_374), 0x16BDA5EAL)) == g_223))), g_201)) , 2UL), l_34)), l_34, p_25, p_25);
    g_447.f0 = (-1L);
    return p_27;
}







static unsigned char func_35(unsigned char p_36, short p_37, const unsigned p_38, int p_39)
{
    int l_1255 = 2L;
    int l_1287 = (-1L);
    int l_1288[4][7] = {{(-1L), 0xB8F48C46L, (-1L), 0xB8F48C46L, (-1L), 0xB8F48C46L, (-1L)}, {(-1L), 0xB8F48C46L, (-1L), 0xB8F48C46L, (-1L), 0xB8F48C46L, (-1L)}, {(-1L), 0xB8F48C46L, (-1L), 0xB8F48C46L, (-1L), 0xB8F48C46L, (-1L)}, {(-1L), 0xB8F48C46L, (-1L), 0xB8F48C46L, (-1L), 0xB8F48C46L, (-1L)}};
    unsigned char l_1303[9][8] = {{0UL, 0UL, 3UL, 0xE6L, 0x65L, 0x5FL, 0xF3L, 0x84L}, {0UL, 0UL, 3UL, 0xE6L, 0x65L, 0x5FL, 0xF3L, 0x84L}, {0UL, 0UL, 3UL, 0xE6L, 0x65L, 0x5FL, 0xF3L, 0x84L}, {0UL, 0UL, 3UL, 0xE6L, 0x65L, 0x5FL, 0xF3L, 0x84L}, {0UL, 0UL, 3UL, 0xE6L, 0x65L, 0x5FL, 0xF3L, 0x84L}, {0UL, 0UL, 3UL, 0xE6L, 0x65L, 0x5FL, 0xF3L, 0x84L}, {0UL, 0UL, 3UL, 0xE6L, 0x65L, 0x5FL, 0xF3L, 0x84L}, {0UL, 0UL, 3UL, 0xE6L, 0x65L, 0x5FL, 0xF3L, 0x84L}, {0UL, 0UL, 3UL, 0xE6L, 0x65L, 0x5FL, 0xF3L, 0x84L}};
    int i, j;
    p_39 = ((((g_353 , (~func_47(func_66(p_39, p_36), (g_282 , (p_38 != ((((p_37 | p_39) & ((safe_div_func_int8_t_s_s((l_1255 > p_37), (-1L))) == p_37)) ^ g_272.f0) <= p_36))), p_39))) == l_1255) && 0x51899B2DL) ^ p_38);
    for (p_36 = 0; (p_36 < 42); p_36 = safe_add_func_int16_t_s_s(p_36, 2))
    {
        unsigned l_1258 = 0x2F2319FBL;
        int l_1277 = 1L;
        g_263[2][1] = 0L;
        l_1255 = (p_39 = l_1258);
        p_39 = ((safe_div_func_int8_t_s_s((l_1255 = (!((l_1258 | (safe_mod_func_uint32_t_u_u((p_39 >= (safe_div_func_int32_t_s_s((g_1278[0] = (safe_add_func_uint32_t_u_u(func_47(l_1255, (p_38 <= (((p_38 | (safe_add_func_uint8_t_u_u(l_1255, 0x09L))) | (((g_131[2] = (safe_add_func_uint32_t_u_u((+func_66((safe_rshift_func_uint8_t_u_u((((l_1277 = (((safe_sub_func_uint8_t_u_u(0xEAL, (((safe_lshift_func_int16_t_s_s((l_1258 , p_36), 10)) < g_339.f1) < 1L))) == g_91) == g_353.f0)) ^ g_462) < 0x3CF03D1FL), 4)), l_1255)), 1UL))) != p_39) == 247UL)) != l_1258)), p_39), 1L))), l_1258))), g_462))) & l_1255))), l_1258)) , l_1255);
    }
    p_39 = ((g_90[2] = (safe_mod_func_int8_t_s_s(func_47((safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(g_1094[3].f0, (func_59(g_171, l_1255) , ((safe_mod_func_int16_t_s_s(((g_170[0][0][1] = ((l_1255 = 18446744073709551611UL) , 0x1E36L)) & g_374), ((((l_1287 = g_791) ^ (func_59(p_39, l_1288[0][0]) == (-1L))) & g_441) , 0x36D6L))) , 0xC7L)))), p_38)), g_263[4][1], g_755.f1), p_37))) == l_1288[0][0]);
    l_1255 = ((g_272.f1 != ((safe_rshift_func_uint16_t_u_s(p_39, ((~(safe_div_func_uint32_t_u_u(p_37, p_36))) | g_201))) <= (safe_sub_func_uint8_t_u_u((p_38 , ((((safe_add_func_int8_t_s_s((g_251[7] != (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(func_59((255UL ^ ((func_59((safe_mod_func_uint16_t_u_u(((l_1255 , 0xC7L) != l_1288[1][2]), l_1288[0][0])), g_95) , l_1303[2][0]) , g_90[2])), g_197), p_39)), p_38))), l_1303[5][6])) && l_1288[0][5]) & 0xABBDL) && 0x4070E1C7L)), l_1288[0][0])))) == g_263[2][1]);
    return l_1303[1][7];
}







static char func_42(int p_43)
{
    unsigned char l_45 = 0UL;
    int l_46[2];
    int l_258 = 0xA022452FL;
    short l_262 = 3L;
    char l_556 = (-1L);
    const short l_565 = 0x8966L;
    int l_600 = 0xB6F45864L;
    unsigned l_663 = 0x48F4814CL;
    char l_706 = (-7L);
    unsigned short l_766 = 0xDAB0L;
    int l_855 = 0x14273E09L;
    unsigned l_856 = 0xEEB3754BL;
    int l_868 = 0x84378FD0L;
    unsigned l_938[3];
    char l_1129 = 0xA5L;
    unsigned l_1130 = 8UL;
    int i;
    for (i = 0; i < 2; i++)
        l_46[i] = 0x788AFB1CL;
    for (i = 0; i < 3; i++)
        l_938[i] = 1UL;
    g_44[3][4] = 1L;
    l_46[1] = l_45;
    if (func_47(g_44[3][4], l_46[1], (((safe_add_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_59(p_43, (safe_div_func_uint32_t_u_u((g_32[8] = (l_258 = (safe_sub_func_uint16_t_u_u((func_66(l_46[1], l_46[0]) >= g_10), g_10)))), l_45))), l_262)), l_262)), 65535UL)), g_263[2][1])) && g_195) , 0x418F5461L)))
    {
        char l_568[5] = {5L, (-6L), 5L, (-6L), 5L};
        int l_569 = 0x39300634L;
        int l_599 = 0x8250D476L;
        unsigned char l_618[9][7] = {{0xAAL, 0xBCL, 0xBCL, 0xAAL, 0x1AL, 255UL, 8UL}, {0xAAL, 0xBCL, 0xBCL, 0xAAL, 0x1AL, 255UL, 8UL}, {0xAAL, 0xBCL, 0xBCL, 0xAAL, 0x1AL, 255UL, 8UL}, {0xAAL, 0xBCL, 0xBCL, 0xAAL, 0x1AL, 255UL, 8UL}, {0xAAL, 0xBCL, 0xBCL, 0xAAL, 0x1AL, 255UL, 8UL}, {0xAAL, 0xBCL, 0xBCL, 0xAAL, 0x1AL, 255UL, 8UL}, {0xAAL, 0xBCL, 0xBCL, 0xAAL, 0x1AL, 255UL, 8UL}, {0xAAL, 0xBCL, 0xBCL, 0xAAL, 0x1AL, 255UL, 8UL}, {0xAAL, 0xBCL, 0xBCL, 0xAAL, 0x1AL, 255UL, 8UL}};
        int i, j;
        for (g_374 = 0; (g_374 != 53); ++g_374)
        {
            unsigned l_566 = 5UL;
            int l_567[4][5][10] = {{{(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}}, {{(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}}, {{(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}}, {{(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}, {(-1L), 1L, (-10L), 0xE1EDD02AL, (-1L), 0xE1EDD02AL, (-10L), 1L, (-1L), 0L}}};
            int i, j, k;
            p_43 = (l_569 = func_59((g_353.f0 <= ((func_66(l_556, ((((l_567[0][3][6] = (safe_sub_func_int8_t_s_s((((g_290.f1 < (safe_lshift_func_int16_t_s_s(((g_131[5] = (l_262 , func_59((safe_rshift_func_uint8_t_u_s(255UL, 3)), p_43))) ^ ((safe_add_func_int32_t_s_s((l_565 != (g_32[2] && g_500)), g_95)) <= l_566)), p_43))) <= l_566) , p_43), p_43))) && p_43) , p_43) <= 9L)) , 1UL) <= l_568[4])), g_312.f1));
            g_312.f0 = g_257;
            for (g_339.f1 = (-28); (g_339.f1 <= 43); g_339.f1 = safe_add_func_uint16_t_u_u(g_339.f1, 7))
            {
                unsigned l_572 = 2UL;
                l_572 = p_43;
            }
            if (g_282.f1)
            {
                unsigned l_579[4][6] = {{4294967293UL, 0x1A879F88L, 4294967293UL, 0x608DCEB0L, 0xF3913260L, 4294967286UL}, {4294967293UL, 0x1A879F88L, 4294967293UL, 0x608DCEB0L, 0xF3913260L, 4294967286UL}, {4294967293UL, 0x1A879F88L, 4294967293UL, 0x608DCEB0L, 0xF3913260L, 4294967286UL}, {4294967293UL, 0x1A879F88L, 4294967293UL, 0x608DCEB0L, 0xF3913260L, 4294967286UL}};
                int l_594 = (-6L);
                int i, j;
                g_263[2][1] = (func_59((g_44[2][1] > g_131[2]), l_567[1][4][3]) > (g_195 = func_59((safe_add_func_uint32_t_u_u((g_90[7] = 0x8A807CEEL), ((safe_lshift_func_uint8_t_u_s((p_43 , 0UL), 1)) | ((((safe_lshift_func_uint16_t_u_s(l_579[3][0], 7)) , func_59(l_569, g_462)) >= l_568[2]) || l_579[3][0])))), g_263[2][1])));
                for (g_446 = 0; (g_446 <= 4); g_446 += 1)
                {
                    int i;
                    g_339.f0 = func_59((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(0x2B1A47F8L, ((safe_mod_func_int8_t_s_s(5L, l_258)) >= ((((safe_lshift_func_int8_t_s_u((0x35L > func_66(g_353.f1, g_170[0][3][7])), (((l_594 = (~((safe_rshift_func_int16_t_s_u(((g_397 , (safe_add_func_int8_t_s_s((0x8E8D8E78L || 0L), l_565))) >= 0x41L), g_279[1][4].f1)) , l_594))) , l_568[4]) < 0L))) , p_43) , g_424.f0) ^ g_339.f1)))) , 1UL), p_43)), p_43);
                    g_424.f0 = (safe_lshift_func_int8_t_s_u(func_59(p_43, p_43), func_59(p_43, (g_382.f1 != (0x3FL && (g_500 , (g_251[7] = (((((l_568[g_446] = l_565) <= 0xB3L) , 0xBFCAD32FL) , g_339.f0) , g_374))))))));
                    for (g_95 = 0; (g_95 <= 3); g_95 += 1)
                    {
                        int i;
                        l_569 = (g_90[(g_446 + 1)] >= g_32[2]);
                        if (p_43)
                            break;
                    }
                    return l_566;
                }
                if (g_197)
                    continue;
                l_567[0][3][6] = (l_46[1] <= (l_600 = func_47((g_95 , 0x59BBDDC9L), g_171, (l_599 = (safe_sub_func_int8_t_s_s((p_43 >= 0x5FL), (l_569 = g_353.f1)))))));
            }
            else
            {
                p_43 = 0x6F771398L;
            }
        }
        if ((g_500 & p_43))
        {
            unsigned l_609[2];
            int i;
            for (i = 0; i < 2; i++)
                l_609[i] = 4294967295UL;
            for (g_95 = 0; (g_95 <= 3); g_95 += 1)
            {
                unsigned char l_605 = 4UL;
                const char l_616 = (-1L);
                unsigned l_619 = 0x480CBC2FL;
                if (g_116)
                    break;
                for (g_91 = 0; (g_91 <= 3); g_91 += 1)
                {
                    unsigned char l_608 = 3UL;
                    int l_620 = 0x1C57B8EEL;
                    l_620 = (l_569 = ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u((l_605 < func_59(((func_59((safe_mod_func_int8_t_s_s((((l_608 = (g_44[5][2] != (~g_10))) && l_609[0]) <= ((safe_div_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s(0x1AC2L, ((safe_mod_func_int32_t_s_s(l_616, (func_59(((g_382.f1 | l_568[1]) , g_171), p_43) | 0UL))) <= 252UL))), g_617)) , g_90[4])), l_618[4][1])), p_43) & l_609[0]) & g_339.f1), l_568[2])), l_619)), g_91)) || (-2L)));
                }
            }
        }
        else
        {
            unsigned short l_627 = 0x5666L;
            int l_636 = 6L;
            int l_676 = 0x6C3490E3L;
            char l_710[10] = {0x3BL, 0x7FL, 0xCAL, 0xCAL, 0x7FL, 0x3BL, 0x7FL, 0xCAL, 0xCAL, 0x7FL};
            short l_713 = 0x5F29L;
            int l_772[7][3] = {{0x783EBBF4L, 0x61CBA2E7L, 0x13786C2AL}, {0x783EBBF4L, 0x61CBA2E7L, 0x13786C2AL}, {0x783EBBF4L, 0x61CBA2E7L, 0x13786C2AL}, {0x783EBBF4L, 0x61CBA2E7L, 0x13786C2AL}, {0x783EBBF4L, 0x61CBA2E7L, 0x13786C2AL}, {0x783EBBF4L, 0x61CBA2E7L, 0x13786C2AL}, {0x783EBBF4L, 0x61CBA2E7L, 0x13786C2AL}};
            unsigned short l_782 = 0x6E9BL;
            int i, j;
            if (((safe_rshift_func_int8_t_s_u(func_66((safe_sub_func_uint16_t_u_u(g_179, ((((p_43 <= l_569) & ((p_43 || g_145) <= (safe_rshift_func_uint8_t_u_s(g_223, (g_353 , l_627))))) ^ ((g_462 <= g_90[2]) != p_43)) , g_424.f0))), g_374), 6)) , 0L))
            {
                unsigned l_637[7][2] = {{0xD782C507L, 0x367F3466L}, {0xD782C507L, 0x367F3466L}, {0xD782C507L, 0x367F3466L}, {0xD782C507L, 0x367F3466L}, {0xD782C507L, 0x367F3466L}, {0xD782C507L, 0x367F3466L}, {0xD782C507L, 0x367F3466L}};
                int l_638[7] = {0x597843D2L, 0x597843D2L, 1L, 0x597843D2L, 0x597843D2L, 1L, 0x597843D2L};
                int l_647 = 0L;
                int i, j;
                g_263[2][1] = 0x81B9D34EL;
                p_43 = (safe_rshift_func_int8_t_s_s(func_47(l_627, ((((safe_lshift_func_uint16_t_u_s((g_91 , ((p_43 <= (((safe_mod_func_int8_t_s_s(((safe_sub_func_uint16_t_u_u(((0x7E91L | (l_258 = l_618[4][1])) > ((((0x8451L < 0xF781L) < (l_636 = (-5L))) ^ (l_637[2][1] = g_441)) , 0xEFA5L)), l_45)) , (-1L)), p_43)) == 0xB4L) , 5UL)) || g_131[2])), g_32[2])) == l_627) < l_638[3]) != l_627), p_43), l_618[3][0]));
                l_647 = (g_312 , (((safe_mod_func_int8_t_s_s(func_59(p_43, p_43), g_499)) < ((l_638[5] = g_397) >= func_66(((l_569 = (safe_div_func_int8_t_s_s((((safe_div_func_int8_t_s_s((safe_mod_func_int16_t_s_s(1L, (l_46[0] | func_66((g_447.f1 > 65535UL), l_569)))), 0x2EL)) < 0xC2L) && p_43), p_43))) , (-1L)), l_45))) > p_43));
                return p_43;
            }
            else
            {
                char l_649[5][10][5] = {{{0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}}, {{0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}}, {{0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}}, {{0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}}, {{0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}, {0xFEL, 0xEBL, (-7L), 0x73L, 8L}}};
                int l_656 = 0x315C14A9L;
                unsigned short l_687[6][1] = {{65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}, {65535UL}};
                int i, j, k;
                l_636 = ((safe_unary_minus_func_uint32_t_u(l_46[0])) , (func_59(p_43, l_618[7][3]) ^ l_649[2][6][3]));
                g_382.f0 = (((((((l_569 = (1L > (0UL <= (safe_sub_func_int32_t_s_s((g_90[2] | (safe_sub_func_int32_t_s_s(((g_424.f0 || (safe_mod_func_int8_t_s_s(1L, func_59(l_568[2], l_656)))) >= func_59((safe_sub_func_uint16_t_u_u(g_32[2], 0UL)), g_251[4])), l_627))), g_397))))) | p_43) != l_46[1]) < g_195) ^ g_339.f1) | l_627) > l_627);
                if ((p_43 != ((p_43 , ((safe_sub_func_uint16_t_u_u((l_569 = ((l_618[4][1] , ((safe_rshift_func_int16_t_s_s(g_290.f0, 4)) | l_663)) , g_353.f0)), (safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((safe_sub_func_int16_t_s_s((l_599 = g_500), (safe_add_func_int32_t_s_s((((func_59(((g_95 = 0xA275L) , func_59(g_131[6], l_649[1][5][2])), p_43) & 1L) & 0x52BD2353L) , l_627), p_43)))), l_676)), 8)), 0xF0F7L)), g_257)))) ^ l_636)) || g_282.f0)))
                {
                    unsigned l_690 = 18446744073709551615UL;
                    g_424.f0 = (0x230BEB46L != p_43);
                    l_46[0] = ((safe_rshift_func_int8_t_s_u((safe_sub_func_uint8_t_u_u(func_47((safe_sub_func_int32_t_s_s(g_145, (((safe_mod_func_uint8_t_u_u((((g_279[1][4] , (func_59((g_95 = ((g_272 , (safe_sub_func_uint16_t_u_u(l_687[0][0], (l_599 <= (g_312.f0 != (p_43 != (safe_mod_func_int32_t_s_s(func_59(g_251[7], (g_279[1][4].f1 = (1UL ^ g_251[7]))), 0x8BC5A0E9L)))))))) , g_263[2][1])), l_690) , l_636)) > l_618[5][4]) & p_43), l_568[4])) <= g_32[0]) , 0UL))), l_690, p_43), g_374)), l_599)) == g_446);
                }
                else
                {
                    int l_697 = 0L;
                    g_382.f0 = p_43;
                    if ((l_687[0][0] || (safe_rshift_func_uint16_t_u_u(g_693, p_43))))
                    {
                        char l_694 = 0xDFL;
                        l_600 = func_59(p_43, p_43);
                        p_43 = l_694;
                        l_656 = (((g_263[2][1] = g_339.f0) <= (p_43 = (p_43 >= ((0x7AL >= (safe_rshift_func_int16_t_s_u(l_697, 6))) , p_43)))) || g_251[5]);
                    }
                    else
                    {
                        unsigned short l_707[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_707[i] = 7UL;
                        g_441 = ((p_43 < p_43) , ((((safe_div_func_int16_t_s_s((safe_unary_minus_func_int32_t_s((p_43 & l_627))), (safe_add_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u(0x30973FE3L)) , (p_43 != (func_66((9L > ((p_43 , 0xAA8DL) > p_43)), p_43) != g_499))), 0x5AC7C5B1L)))) & g_272.f1) , 0L) < 0x35L));
                        g_382.f0 = ((l_706 <= p_43) == func_59((l_676 = g_272.f1), l_707[0]));
                    }
                    for (g_441 = (-19); (g_441 <= (-18)); g_441++)
                    {
                        l_710[2] = (-1L);
                        p_43 = (safe_rshift_func_uint8_t_u_u(l_713, (func_59(g_131[2], g_171) <= (g_251[7] = 0xBAL))));
                        return g_171;
                    }
                }
            }
            for (l_556 = 10; (l_556 == (-2)); l_556 = safe_sub_func_uint16_t_u_u(l_556, 2))
            {
                return g_272.f0;
            }
            l_676 = (p_43 == (g_397 = g_447.f1));
            for (g_446 = 0; (g_446 <= 9); g_446 += 1)
            {
                short l_718[7] = {0x0979L, 0x0979L, 0x0C01L, 0x0979L, 0x0979L, 0x0C01L, 0x0979L};
                int l_731 = 0L;
                int l_745[5] = {(-8L), 8L, (-8L), 8L, (-8L)};
                int l_758 = 0xBE20D5C4L;
                int l_781 = 0L;
                int i;
                if ((p_43 = (safe_rshift_func_int8_t_s_u(l_718[0], (g_170[1][0][4] & ((safe_add_func_uint16_t_u_u((+(g_145 <= (1L > (safe_rshift_func_uint16_t_u_u(l_618[4][1], 1))))), (func_59((l_600 = (safe_mod_func_uint16_t_u_u(g_201, (p_43 , (safe_lshift_func_uint8_t_u_s(4UL, 6)))))), ((safe_div_func_uint16_t_u_u((g_95 = (p_43 < g_44[0][2])), l_599)) , 0xEA0AL)) <= l_731))) > p_43))))))
                {
                    l_599 = (safe_div_func_int8_t_s_s(0x71L, l_600));
                }
                else
                {
                    char l_736 = 0xAEL;
                    int l_759 = 0x37507D48L;
                    if ((((safe_rshift_func_uint8_t_u_s(l_736, 7)) , (p_43 != g_382.f0)) ^ ((g_617 ^ (safe_rshift_func_int8_t_s_s(((+(safe_div_func_int32_t_s_s((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((l_710[2] , (((g_251[2] | 2UL) | 3L) , func_59(((((g_170[0][4][3] = (p_43 , 1L)) || p_43) ^ 0xFE336F4EL) ^ l_676), g_499))) & g_116) > p_43), 7L)), l_745[1])), 0xC4A3D904L))) || p_43), g_446))) == p_43)))
                    {
                        unsigned l_752 = 0x16745E3CL;
                        g_339.f0 = g_441;
                        g_382.f0 = (safe_rshift_func_uint16_t_u_s((g_447 , 0xB679L), 14));
                        g_339.f0 = (safe_add_func_int32_t_s_s(g_201, (l_752 = (safe_mod_func_uint32_t_u_u((g_197 = ((+l_718[0]) >= p_43)), l_745[1])))));
                    }
                    else
                    {
                        int l_767 = 0x805788CDL;
                        int l_777[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_777[i] = 0x0DBEF609L;
                        p_43 = (l_676 = (safe_sub_func_int16_t_s_s((p_43 | ((g_755 , ((func_47((g_220 & (g_257 | (safe_mod_func_uint16_t_u_u(((l_759 = l_758) , ((safe_rshift_func_uint8_t_u_s(g_116, (safe_mod_func_uint16_t_u_u(0xA2AEL, p_43)))) | ((safe_lshift_func_int16_t_s_u(l_618[4][1], 6)) && g_500))), l_766)))), p_43, g_32[2]) > 0xE591L) < l_767)) > l_736)), l_767)));
                        l_258 = (func_47((safe_add_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(g_170[0][0][1], (l_731 = 5UL))) ^ l_772[4][0]), func_59((safe_add_func_uint8_t_u_u((func_59(((g_170[0][7][6] > g_90[2]) || g_10), ((safe_rshift_func_uint16_t_u_u((((g_180[5] != g_447.f1) || l_745[1]) <= 0x8CA3L), l_718[3])) <= l_777[1])) < 0x87L), 1L)), g_131[2]))), l_759, g_201) != l_600);
                        if (g_91)
                            break;
                        g_382.f0 = func_66(p_43, p_43);
                    }
                    return p_43;
                }
                if (((((func_66(func_47(l_599, (safe_lshift_func_int8_t_s_s(0xDEL, 2)), (l_731 = (safe_unary_minus_func_uint32_t_u((((g_263[2][1] ^ 0xF622L) | (l_782 = l_781)) , 1UL))))), g_10) & p_43) != p_43) || 0x486FL) | 0x84L))
                {
                    int l_785 = 0x931487DEL;
                    const int l_790 = 0xFF1D8C3CL;
                    unsigned char l_792 = 246UL;
                    l_792 = ((safe_div_func_int32_t_s_s(((!(func_66(g_44[4][1], (l_785 , func_66(g_201, ((g_374 = (9L != ((safe_rshift_func_int16_t_s_s(func_59(func_59(g_397, (l_785 = ((g_32[6] = 9UL) > 1L))), l_45), l_790)) >= l_556))) >= 0xF223L)))) != g_791)) , 0x21C5AC1EL), 0x81938925L)) | p_43);
                }
                else
                {
                    int l_813 = 0xB9E01802L;
                    if ((g_693 , (safe_div_func_int16_t_s_s(0x9852L, p_43))))
                    {
                        short l_801[8] = {0x9F05L, 0x19BBL, 0x9F05L, 0x19BBL, 0x9F05L, 0x19BBL, 0x9F05L, 0x19BBL};
                        int l_802[7][3];
                        int i, j;
                        for (i = 0; i < 7; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_802[i][j] = 0xC7BE35ABL;
                        }
                        p_43 = (((g_95 = p_43) && (((((safe_rshift_func_uint16_t_u_s(g_374, (func_47((l_258 = 0x52C352FBL), (p_43 || p_43), l_758) ^ (l_802[0][1] = ((((((safe_div_func_uint16_t_u_u((l_599 = 0x0CC8L), (safe_rshift_func_int8_t_s_u((func_59(((l_772[0][1] = g_617) & p_43), g_10) | l_801[2]), 6)))) , 255UL) <= 0x53L) < 0L) != g_617) <= l_568[0]))))) > 0L) & (-9L)) >= 253UL) || g_499)) , l_802[0][2]);
                        if (l_46[1])
                            break;
                    }
                    else
                    {
                        g_441 = p_43;
                    }
                    l_813 = (g_201 > ((safe_lshift_func_uint16_t_u_u(p_43, 8)) <= ((l_766 > 0x3FL) | ((safe_sub_func_int8_t_s_s(p_43, func_59((safe_lshift_func_int16_t_s_s(p_43, (g_693 < (safe_mod_func_int16_t_s_s(p_43, (((safe_rshift_func_int16_t_s_s((((((6UL && p_43) >= p_43) , 1UL) ^ p_43) , l_618[8][5]), l_565)) , g_201) ^ g_312.f1)))))), g_339.f1))) >= p_43))));
                }
            }
        }
        for (g_441 = 0; (g_441 <= 8); g_441 += 1)
        {
            int i;
            return g_32[g_441];
        }
    }
    else
    {
        int l_818 = (-3L);
        int l_819 = 8L;
        int l_826 = 0x691411C6L;
        short l_848 = 0xC117L;
        char l_900 = 0x0FL;
        int l_920 = 0xB5EB6DAFL;
        unsigned char l_976 = 0x41L;
        unsigned short l_992 = 0x781DL;
        unsigned l_1053 = 0xECF8ECE1L;
        unsigned l_1086[6][3] = {{4294967290UL, 1UL, 4294967290UL}, {4294967290UL, 1UL, 4294967290UL}, {4294967290UL, 1UL, 4294967290UL}, {4294967290UL, 1UL, 4294967290UL}, {4294967290UL, 1UL, 4294967290UL}, {4294967290UL, 1UL, 4294967290UL}};
        unsigned char l_1106[3];
        char l_1195 = 1L;
        int i, j;
        for (i = 0; i < 3; i++)
            l_1106[i] = 0x87L;
        g_263[2][1] = (safe_mod_func_int32_t_s_s((p_43 = 0L), (safe_add_func_int8_t_s_s(((l_819 = l_818) == ((g_91 = (safe_add_func_uint8_t_u_u(g_257, l_818))) || (safe_add_func_int32_t_s_s(l_600, (safe_lshift_func_int8_t_s_u(g_382.f0, ((l_826 = l_556) <= l_262))))))), l_46[1]))));
        l_600 = (((safe_sub_func_int32_t_s_s((l_600 > (((safe_lshift_func_int8_t_s_u(((((safe_div_func_int8_t_s_s(g_10, ((safe_add_func_uint8_t_u_u(func_59(l_818, (((l_826 = p_43) ^ (l_46[1] = l_706)) == p_43)), ((safe_div_func_uint32_t_u_u(((g_837 , func_66((l_819 = (safe_add_func_uint8_t_u_u(p_43, 1L))), g_131[2])) && p_43), g_290.f1)) | 0x38L))) && l_556))) != g_290.f1) & 0xBE4DL) <= 0xE8E3A580L), g_263[2][1])) , g_180[1]) != l_766)), l_706)) < p_43) <= g_312.f1);
        if ((safe_lshift_func_int8_t_s_s(func_47((((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0xB9L, func_66((g_617 = (+5L)), (safe_rshift_func_uint8_t_u_s(func_59(p_43, ((g_791 = (l_848 > (((func_59(p_43, ((safe_div_func_uint16_t_u_u(((g_32[2] == ((safe_add_func_int8_t_s_s(g_791, (((-8L) <= (l_826 = ((((p_43 >= g_279[1][4].f1) , l_600) , 0xBD21CD01L) & 0x9F160D27L))) || 4L))) != l_819)) & l_706), p_43)) && 1UL)) <= l_855) ^ l_856) & 0xFF0665A1L))) && p_43)), g_180[5]))))), l_45)) , 0x94L) , 18446744073709551615UL), l_819, p_43), l_848)))
        {
            int l_859 = 0L;
            int l_885 = (-1L);
            for (p_43 = 0; (p_43 != 26); ++p_43)
            {
                l_859 = (+(1L | p_43));
            }
            g_441 = ((((safe_div_func_uint8_t_u_u((safe_unary_minus_func_uint32_t_u(((255UL ^ ((g_91 = (safe_mod_func_int16_t_s_s((g_865 , (safe_rshift_func_int8_t_s_u(0xBAL, 2))), p_43))) != (l_859 && ((l_556 == ((l_868 ^ (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((0x0021L & (safe_mod_func_int8_t_s_s((p_43 || l_819), 0x74L))) >= l_859) != l_859), p_43)), 3))) == l_848)) | 6UL)))) , 0xFBF9BBC2L))), g_500)) , 0xD2L) <= g_179) , g_131[2]);
            l_819 = (l_885 = (p_43 = ((func_66(g_145, (g_290 , (l_855 = (g_279[1][4].f1 = (safe_rshift_func_int16_t_s_u((func_59((safe_rshift_func_int16_t_s_s((l_859 = func_59(l_826, (safe_div_func_uint16_t_u_u(l_859, (safe_add_func_uint16_t_u_u((((~g_279[1][4].f1) > (p_43 > l_848)) < ((!(g_220 = g_131[4])) | ((func_59(l_856, p_43) , g_251[7]) && p_43))), p_43)))))), 3)), g_447.f1) == 1L), l_856)))))) >= g_397) && g_223)));
        }
        else
        {
            int l_915 = 0L;
            unsigned short l_937 = 0UL;
            int l_951[1];
            unsigned l_1019[3];
            unsigned short l_1124[10] = {0UL, 1UL, 0xB277L, 0xB277L, 1UL, 0UL, 1UL, 0xB277L, 0xB277L, 1UL};
            unsigned short l_1214 = 0x2D9AL;
            int i;
            for (i = 0; i < 1; i++)
                l_951[i] = 0x8B5862D5L;
            for (i = 0; i < 3; i++)
                l_1019[i] = 0xF6CA969DL;
            if ((p_43 , (p_43 = (safe_div_func_int32_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u(4294967295UL, (g_290.f0 && ((safe_mod_func_int32_t_s_s((p_43 == ((0x65EE501AL | (safe_sub_func_uint8_t_u_u(l_900, g_755.f1))) <= ((0x9D80L & ((g_170[0][3][7] = ((0x8E67L == l_868) == l_848)) | g_32[2])) ^ l_818))), g_257)) == 1L)))), 1)) ^ g_251[5]), 65528UL)), p_43)), l_46[1])))))
            {
                unsigned short l_906 = 65535UL;
                int l_923[4] = {0xBA8FF414L, 9L, 0xBA8FF414L, 9L};
                unsigned char l_942 = 0xD4L;
                int i;
                for (l_45 = 0; (l_45 > 17); l_45 = safe_add_func_uint32_t_u_u(l_45, 4))
                {
                    unsigned short l_905 = 65535UL;
                    int l_930 = 0x8990D7B5L;
                    for (g_339.f1 = 29; (g_339.f1 <= 35); g_339.f1 = safe_add_func_int32_t_s_s(g_339.f1, 5))
                    {
                        l_906 = l_905;
                        l_819 = (safe_lshift_func_int8_t_s_u(((safe_add_func_uint8_t_u_u(l_905, g_251[7])) ^ (g_220 = (((g_312.f0 >= (((safe_div_func_uint16_t_u_u(l_915, func_59(((p_43 | (safe_lshift_func_uint8_t_u_u(p_43, (g_91 = l_905)))) , (((safe_rshift_func_uint8_t_u_u(l_906, l_905)) | l_826) & 1L)), g_397))) , l_915) , l_920)) | g_171) >= l_906))), 6));
                        l_923[0] = ((~0x7CL) >= (0xBB10L == p_43));
                    }
                    for (g_441 = 0; (g_441 <= 8); ++g_441)
                    {
                        unsigned short l_927 = 0UL;
                        p_43 = (safe_unary_minus_func_uint16_t_u(func_66(l_927, g_462)));
                        l_938[2] = (safe_div_func_uint16_t_u_u((0x07FEE638L >= ((((l_930 = l_927) >= (safe_unary_minus_func_uint16_t_u((safe_lshift_func_uint16_t_u_s((((((p_43 == (safe_unary_minus_func_int8_t_s((((l_927 , ((((((-1L) & (l_937 = ((l_915 = (p_43 , (safe_mod_func_uint32_t_u_u(g_195, (((((func_59(((l_923[0] = g_290.f0) == l_848), p_43) , p_43) | (-1L)) == l_258) , p_43) || p_43))))) , g_447.f0))) <= 0xF2F1L) || p_43) >= 0x2BL) && p_43)) , p_43) <= g_197)))) ^ g_397) , (-6L)) != l_46[1]) || l_927), g_263[3][0]))))) & (-1L)) & g_197)), l_927));
                    }
                    l_46[1] = ((safe_unary_minus_func_uint32_t_u(func_59(p_43, p_43))) != g_462);
                    p_43 = func_66(l_915, (((((!g_353.f1) || (safe_unary_minus_func_uint16_t_u(((g_941[5] , (((l_937 , (g_462 > (func_47(((p_43 ^ g_179) > l_848), l_915, g_180[5]) < l_905))) , l_855) != l_942)) && l_937)))) != g_397) , g_755.f1) ^ l_937));
                }
                for (l_937 = 19; (l_937 != 17); l_937--)
                {
                    unsigned char l_950 = 249UL;
                    for (l_856 = (-4); (l_856 != 9); l_856++)
                    {
                        return p_43;
                    }
                    g_947[0].f0 = ((l_951[0] = ((l_826 || (g_947[0] , (+(!(l_855 = (safe_lshift_func_int8_t_s_u(g_446, 0))))))) , ((l_915 = l_950) | g_947[0].f1))) && ((((safe_mod_func_int32_t_s_s((((((+l_950) , (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_915 = (safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s((func_59(p_43, (g_116 = ((g_500 < g_170[0][8][8]) | 0x3FF680B7L))) && (-10L)), p_43)) , l_951[0]) == l_600), g_90[2]))), g_180[5])), g_446))) , g_424) , 1L) > l_663), 0xEBB45417L)) == g_962[0]) || p_43) && l_856));
                    for (g_374 = 0; (g_374 == 13); ++g_374)
                    {
                        p_43 = 0x8BAA95BFL;
                    }
                }
                for (g_382.f1 = 0; (g_382.f1 != 39); g_382.f1++)
                {
                    unsigned l_967[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_967[i] = 1UL;
                    for (g_397 = 0; (g_397 <= 4); g_397 += 1)
                    {
                        int i, j;
                        g_424.f0 = g_251[(g_397 + 2)];
                        if (g_44[g_397][g_397])
                            continue;
                        l_967[0] = (0x4FL <= p_43);
                        g_947[0].f0 = (g_145 & ((p_43 && ((((g_617 = (l_915 = (safe_div_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((((safe_div_func_uint32_t_u_u((g_32[2] = (((((((g_251[(g_397 + 2)] = func_59(g_397, g_32[7])) != 0x85L) & (l_46[1] = (safe_mod_func_int16_t_s_s(((l_920 = (((g_90[2] = l_976) ^ 4294967294UL) >= (l_923[0] , l_906))) && 4L), l_45)))) == g_180[5]) , p_43) , g_32[4]) , 1UL)), g_947[0].f0)) ^ l_923[1]) <= l_967[0]) < l_819), 5)), p_43)))) | 0x78L) , l_937) , 0x7E70L)) || 0x223ED48CL));
                    }
                    for (g_201 = 0; (g_201 != 5); g_201++)
                    {
                        return g_180[4];
                    }
                }
            }
            else
            {
                int l_987 = 0L;
                l_987 = (l_976 != (safe_lshift_func_int16_t_s_u(((g_263[0][1] < (g_32[2] = (((safe_div_func_uint8_t_u_u(0x06L, (safe_mod_func_int16_t_s_s(p_43, g_462)))) > g_263[1][0]) <= l_920))) == (func_59(p_43, g_500) && p_43)), 9)));
                g_263[2][1] = l_951[0];
                g_947[0].f0 = (g_279[1][4].f1 <= 0x54A1C7AFL);
            }
            if (func_47((safe_lshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s(p_43, p_43)) | g_180[4]) < (l_992 | (safe_lshift_func_uint16_t_u_s((l_600 < (safe_add_func_int8_t_s_s((0x7973L | (((((+0xAF3ACA58L) , 0x94L) | (!(l_855 = (safe_rshift_func_uint8_t_u_s((((+65532UL) >= p_43) , 2UL), 7))))) ^ p_43) && 0x667FL)), 1L))), g_617)))), 4)), l_951[0], g_95))
            {
                unsigned l_1005 = 0x575F0FE1L;
                int l_1006 = (-1L);
                unsigned l_1052 = 1UL;
                unsigned l_1105 = 0xE10F07BFL;
                int l_1174 = (-5L);
                l_46[1] = 0L;
                g_263[2][1] = ((l_915 = (safe_add_func_uint32_t_u_u(l_915, (l_951[0] = (g_290.f1 , l_46[1]))))) < (safe_div_func_int8_t_s_s((l_1006 = (0xA193L >= (func_59(p_43, func_66(l_1005, (g_91 != (8L >= func_59(p_43, l_766))))) & p_43))), g_312.f1)));
                if (p_43)
                {
                    unsigned char l_1028 = 0x2FL;
                    int l_1051 = 6L;
                    p_43 = l_1005;
                    for (l_915 = 18; (l_915 == 13); l_915 = safe_sub_func_uint32_t_u_u(l_915, 5))
                    {
                        const unsigned l_1014 = 0x9F31C14BL;
                        unsigned short l_1035 = 0x1FEAL;
                        if (p_43)
                            break;
                        if (g_947[0].f0)
                            break;
                        l_951[0] = ((safe_sub_func_uint16_t_u_u(0UL, (safe_unary_minus_func_uint32_t_u((safe_sub_func_int32_t_s_s(0L, l_1014)))))) && (l_819 = p_43));
                        p_43 = (g_791 = (func_66(p_43, (((safe_rshift_func_int16_t_s_s((9UL >= (safe_lshift_func_int8_t_s_s(l_258, 2))), (((p_43 && l_1019[1]) , ((safe_div_func_int32_t_s_s((~((safe_rshift_func_int16_t_s_s(((safe_div_func_uint8_t_u_u(((safe_div_func_int8_t_s_s(((l_1028 = p_43) && ((safe_mod_func_uint8_t_u_u(l_951[0], (g_251[6] = (func_47((safe_mod_func_int32_t_s_s((safe_add_func_uint32_t_u_u(g_290.f0, 0xC9726C2FL)), 0xBCEC1237L)), p_43, l_1028) , 0x10L)))) , 0x4FL)), l_1035)) , g_223), l_1019[1])) , 0x83A7L), 7)) , l_868)), p_43)) | l_556)) && p_43))) , g_131[2]) > 0x67F7L)) , g_90[2]));
                    }
                    g_312.f0 = (((l_46[1] | (safe_rshift_func_int16_t_s_u(((g_116 >= (g_170[0][0][1] = (safe_lshift_func_uint16_t_u_s(((safe_mod_func_uint16_t_u_u((0x7915BA16L >= l_951[0]), func_59(g_279[1][4].f0, l_1005))) && (g_91 = (+(safe_sub_func_int16_t_s_s((p_43 && (l_1052 = (l_1051 = (safe_sub_func_int16_t_s_s((safe_add_func_int8_t_s_s(((safe_add_func_uint8_t_u_u((g_1050 , 246UL), 1L)) < g_279[1][4].f1), 0x39L)), g_10))))), 0x82C5L))))), 9)))) , g_257), l_951[0]))) != l_1053) >= g_10);
                    for (l_900 = 0; (l_900 > (-28)); l_900 = safe_sub_func_int32_t_s_s(l_900, 3))
                    {
                        int l_1074[5][9] = {{0x8A983C4CL, 0x8C078203L, 0x08E27E5BL, 0x95DE6E79L, 0x08E27E5BL, 0x8C078203L, 0x8A983C4CL, 0xDEC2C9A1L, 0L}, {0x8A983C4CL, 0x8C078203L, 0x08E27E5BL, 0x95DE6E79L, 0x08E27E5BL, 0x8C078203L, 0x8A983C4CL, 0xDEC2C9A1L, 0L}, {0x8A983C4CL, 0x8C078203L, 0x08E27E5BL, 0x95DE6E79L, 0x08E27E5BL, 0x8C078203L, 0x8A983C4CL, 0xDEC2C9A1L, 0L}, {0x8A983C4CL, 0x8C078203L, 0x08E27E5BL, 0x95DE6E79L, 0x08E27E5BL, 0x8C078203L, 0x8A983C4CL, 0xDEC2C9A1L, 0L}, {0x8A983C4CL, 0x8C078203L, 0x08E27E5BL, 0x95DE6E79L, 0x08E27E5BL, 0x8C078203L, 0x8A983C4CL, 0xDEC2C9A1L, 0L}};
                        int l_1085[4];
                        short l_1087 = (-8L);
                        int l_1088 = 1L;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_1085[i] = 0L;
                        l_920 = 1L;
                        l_951[0] = ((safe_mod_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_int8_t_s_s(func_47((safe_lshift_func_int16_t_s_s((l_1088 = ((((safe_div_func_uint16_t_u_u((p_43 == g_32[2]), (safe_sub_func_uint8_t_u_u((0L & (safe_lshift_func_int8_t_s_s((l_1074[0][0] = (safe_lshift_func_int16_t_s_s((l_1051 = (safe_rshift_func_uint16_t_u_u(g_947[0].f1, 14))), 6))), 1))), (safe_div_func_int8_t_s_s((safe_div_func_uint32_t_u_u((l_1085[2] = (safe_add_func_int8_t_s_s((((l_855 = l_951[0]) || p_43) || (safe_add_func_uint16_t_u_u(l_1052, ((g_91 = (0L | ((~((safe_add_func_int8_t_s_s((g_755.f1 , 5L), p_43)) <= p_43)) , l_951[0]))) & 0x38L)))), 0x1FL))), 0x9915114FL)), p_43)))))) ^ l_1086[4][2]) > l_1087) || (-1L))), l_1006)), g_116, g_171), p_43)), (-8L))), l_1052)) < p_43);
                        g_263[2][1] = 0x990EC943L;
                    }
                }
                else
                {
                    int l_1093 = 0x0954C056L;
                    if ((g_179 >= ((safe_rshift_func_int8_t_s_u(((l_1093 = (((l_915 = (l_818 & (func_59(g_837.f0, (safe_div_func_uint8_t_u_u((+l_1093), p_43))) ^ p_43))) , g_1094[3]) , p_43)) , p_43), l_1086[4][2])) , 6L)))
                    {
                        g_947[0].f0 = ((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((0xE8558171L > (((safe_lshift_func_uint16_t_u_s(l_45, ((safe_div_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(func_59((g_499 = l_1105), l_915), l_920)) && p_43), (l_1106[1] = 0xA2D44B80L))) && ((g_1107 , 0UL) >= l_1093)))) < l_951[0]) >= p_43)), 3)), p_43)) | 1UL);
                        return p_43;
                    }
                    else
                    {
                        unsigned short l_1118[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_1118[i] = 65526UL;
                        g_263[2][1] = g_755.f0;
                        p_43 = ((safe_div_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((~l_1005), 1)) >= (((safe_mod_func_int16_t_s_s((1UL > p_43), (func_59(((safe_sub_func_uint32_t_u_u((((l_951[0] = ((((g_170[0][0][1] = (g_251[7] >= p_43)) == ((0x828BL < g_447.f0) == g_251[7])) < (((-9L) >= l_951[0]) && 0L)) || g_447.f0)) , l_915) == g_171), 1UL)) , 65526UL), l_1118[2]) && g_131[4]))) , p_43) , (-1L))), p_43)), p_43)) >= l_1118[2]);
                    }
                    g_441 = l_900;
                }
                if ((safe_div_func_int8_t_s_s(func_66((((g_1121[4][2] , ((0x91L || (g_353.f1 > (l_1124[6] = func_59((l_848 <= 0UL), p_43)))) , ((safe_div_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_145, ((((+(l_1052 < l_855)) & p_43) > l_565) || l_1129))), l_1130)) , p_43))) >= l_1106[0]) , 4L), g_10), g_279[1][4].f1)))
                {
                    unsigned l_1140 = 0xE0884DCEL;
                    g_941[5].f0 = (safe_sub_func_uint8_t_u_u(func_47((g_1133 , (l_819 = (g_1107.f1 == (p_43 >= p_43)))), ((l_46[1] = (((l_915 = ((safe_rshift_func_uint16_t_u_s(((~(safe_div_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(g_446, func_66(((func_59((((p_43 < g_131[2]) ^ g_180[2]) & 65535UL), g_446) , (-1L)) <= l_1124[8]), l_1105))), p_43))) > p_43), 8)) & g_382.f1)) < g_441) >= p_43)) || l_1140), g_500), 255UL));
                }
                else
                {
                    unsigned char l_1160 = 0UL;
                    int l_1175 = (-1L);
                    for (g_382.f1 = 0; (g_382.f1 == 48); g_382.f1++)
                    {
                        unsigned short l_1143 = 65533UL;
                        int l_1161 = 0xBD66FD1FL;
                        l_1006 = ((l_1143 , (((func_59((l_1161 = (func_59((0xBDDD6236L ^ (((((safe_rshift_func_int8_t_s_u(((safe_rshift_func_int8_t_s_s(((p_43 , (safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(249UL, (p_43 <= ((safe_lshift_func_uint8_t_u_s(p_43, 2)) <= ((safe_add_func_uint32_t_u_u(l_951[0], ((safe_add_func_int8_t_s_s(((l_1160 & (0UL | 0x467C64F4L)) != g_947[0].f0), p_43)) < p_43))) ^ g_339.f1))))), 7UL))) | 0x43E44A2AL), 2)) == 4294967295UL), l_848)) ^ g_382.f1) != 5UL) ^ g_32[0]) | 0x40L)), l_1143) , p_43)), g_179) ^ g_180[5]) && 0xBEE4L) , g_755.f0)) & l_1143);
                    }
                    g_947[0].f0 = p_43;
                    if ((l_1006 = func_66((safe_div_func_uint8_t_u_u((l_1006 | (safe_div_func_uint16_t_u_u(func_66((p_43 | func_47((g_837 , (l_920 = (((g_263[4][0] == ((g_617 = 0x0AL) , g_180[2])) | (((l_1175 = ((((+(safe_sub_func_int8_t_s_s(((g_239 = g_374) , ((safe_sub_func_int16_t_s_s(p_43, (l_1174 = (safe_div_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u(((p_43 < 0xC1F5395FL) <= g_397), p_43)) , l_1106[0]), g_312.f0))))) <= g_223)), l_1130))) || g_837.f1) < 0xA3L) , 1L)) != g_90[5]) > l_1160)) , 0xC250FFD1L))), p_43, p_43)), g_1094[3].f1), 1L))), 0x1DL)), p_43)))
                    {
                        l_920 = (l_1175 != (p_43 <= (safe_add_func_uint8_t_u_u((((func_47(p_43, p_43, (safe_mod_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u(g_441, 11)) , ((0x5128L || g_447.f0) < (g_374 = (func_66(g_462, (safe_sub_func_uint32_t_u_u((0x1B8B67C9L > (-1L)), 4294967287UL))) != g_263[5][0])))), 0xB54BL)) < p_43), l_663))) > l_1052) & 0x88L) != 1UL), 0UL))));
                        return p_43;
                    }
                    else
                    {
                        unsigned l_1193 = 4UL;
                        int l_1194 = 0x55729AE5L;
                        int l_1221 = (-10L);
                        p_43 = (g_263[1][1] = (safe_sub_func_int16_t_s_s((safe_div_func_uint32_t_u_u(g_170[0][0][1], func_59((g_272.f0 < (safe_unary_minus_func_uint16_t_u(((((safe_lshift_func_int8_t_s_u(((l_1194 = func_59(g_397, l_1193)) | l_1052), (func_59(l_1195, (safe_rshift_func_int8_t_s_u(2L, 1))) , g_131[2]))) & p_43) , p_43) >= l_1086[0][2])))), g_170[0][0][1]))), g_263[2][1])));
                        g_447.f0 = ((safe_rshift_func_uint16_t_u_s(g_947[0].f1, (safe_add_func_uint8_t_u_u(l_1193, ((g_263[2][1] = ((0x4EL != (g_91 = g_257)) , (safe_rshift_func_uint8_t_u_s((+(l_920 = g_374)), 4)))) && (safe_sub_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((((p_43 > ((l_855 = (safe_mod_func_int16_t_s_s(((safe_add_func_int32_t_s_s((-1L), ((0x5230AD07L ^ g_791) ^ l_1214))) > p_43), p_43))) == g_755.f1)) , g_32[3]) , g_500), 8L)), 15)), 0UL))))))) >= 65532UL);
                        l_1221 = (func_59(g_462, (safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(p_43, l_1221)), (func_47((0L > (safe_lshift_func_int16_t_s_s((65535UL ^ l_1086[4][2]), 5))), g_1050.f1, (func_59(func_66(l_1160, (p_43 == g_145)), g_499) , 8UL)) <= g_500))) != 1L), l_45))) < l_1086[4][2]);
                    }
                }
            }
            else
            {
                unsigned char l_1235 = 255UL;
                int l_1251 = 1L;
                char l_1252 = 1L;
                for (l_937 = 0; (l_937 >= 16); l_937++)
                {
                    int l_1227 = (-1L);
                    if (l_951[0])
                    {
                        unsigned short l_1226 = 0x338FL;
                        l_1226 = g_251[7];
                        if (g_279[1][4].f0)
                            continue;
                        g_339.f0 = l_1227;
                        if (l_915)
                            break;
                    }
                    else
                    {
                        unsigned l_1236 = 0x858BF144L;
                        p_43 = (g_263[2][1] = (safe_div_func_uint8_t_u_u(((l_819 = ((l_915 = l_938[2]) , l_258)) | (!p_43)), (g_1230 , (safe_add_func_uint8_t_u_u((func_47((l_1019[2] != (safe_div_func_int16_t_s_s(((func_66(((p_43 , ((p_43 > (p_43 || (l_1235 , p_43))) != l_1086[3][2])) , 0x02L), l_258) == g_272.f1) <= l_937), p_43))), l_1236, p_43) , l_565), 0x2FL))))));
                        return p_43;
                    }
                    p_43 = (((safe_lshift_func_uint8_t_u_s(g_32[3], func_59((l_46[1] = (l_1227 ^ (safe_lshift_func_int8_t_s_s((-1L), 6)))), (safe_sub_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((safe_add_func_int16_t_s_s(((!g_941[5].f0) >= (((safe_sub_func_int32_t_s_s((l_1251 = l_951[0]), p_43)) , (l_1252 = p_43)) >= (p_43 < l_258))), 65530UL)) | l_1086[4][2]) >= 4294967288UL), p_43)), 0x1886L))))) & g_91) | 3UL);
                    l_1227 = (-1L);
                }
                return l_900;
            }
        }
        p_43 = l_46[1];
    }
    for (g_617 = 0; g_617 < 4; g_617 += 1)
    {
        for (g_1107.f1 = 0; g_1107.f1 < 10; g_1107.f1 += 1)
        {
            union U0 tmp = {6L};
            g_279[g_617][g_1107.f1] = tmp;
        }
    }
    return g_201;
}







static int func_47(unsigned p_48, unsigned short p_49, unsigned p_50)
{
    unsigned short l_270 = 0UL;
    int l_271 = 0x2EA3695CL;
    const int l_283 = 0x91D69343L;
    int l_297 = 0L;
    unsigned short l_298 = 0x776AL;
    int l_319 = 0x20EFBC22L;
    int l_340[8][8] = {{0xDDA54045L, 9L, 0L, 0x702FA658L, 0x5B86DF31L, 0x3C787023L, 0x3C787023L, 0x5B86DF31L}, {0xDDA54045L, 9L, 0L, 0x702FA658L, 0x5B86DF31L, 0x3C787023L, 0x3C787023L, 0x5B86DF31L}, {0xDDA54045L, 9L, 0L, 0x702FA658L, 0x5B86DF31L, 0x3C787023L, 0x3C787023L, 0x5B86DF31L}, {0xDDA54045L, 9L, 0L, 0x702FA658L, 0x5B86DF31L, 0x3C787023L, 0x3C787023L, 0x5B86DF31L}, {0xDDA54045L, 9L, 0L, 0x702FA658L, 0x5B86DF31L, 0x3C787023L, 0x3C787023L, 0x5B86DF31L}, {0xDDA54045L, 9L, 0L, 0x702FA658L, 0x5B86DF31L, 0x3C787023L, 0x3C787023L, 0x5B86DF31L}, {0xDDA54045L, 9L, 0L, 0x702FA658L, 0x5B86DF31L, 0x3C787023L, 0x3C787023L, 0x5B86DF31L}, {0xDDA54045L, 9L, 0L, 0x702FA658L, 0x5B86DF31L, 0x3C787023L, 0x3C787023L, 0x5B86DF31L}};
    const unsigned l_343 = 0x28D29272L;
    char l_414 = (-8L);
    unsigned char l_420 = 0xC4L;
    unsigned l_487 = 4UL;
    short l_501 = 0xDB9DL;
    int i, j;
    for (g_239 = 0; (g_239 <= (-24)); g_239 = safe_sub_func_uint16_t_u_u(g_239, 5))
    {
        unsigned short l_268 = 0x76F6L;
        int l_269 = 0L;
        l_271 = ((((p_50 > p_50) < g_131[2]) & ((safe_rshift_func_int16_t_s_s(func_59((((g_195 = func_59((4294967287UL >= p_48), p_50)) ^ (l_268 , (((l_269 = (l_268 == g_170[0][0][1])) ^ g_116) < l_270))) , 0xB1FFL), p_49), 10)) ^ g_179)) , 0x97FDA55CL);
        g_263[2][1] = (func_59((l_269 = func_59((((l_270 < ((g_272 , (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(p_49, (safe_mod_func_uint16_t_u_u((g_279[1][4] , ((((safe_add_func_uint16_t_u_u((g_282 , g_131[1]), (l_269 , g_220))) , l_283) , p_50) & 1UL)), g_263[2][1])))), 9UL))) == g_131[2])) | g_220) < 0L), l_283)), p_49) | 0L);
        l_271 = (l_283 == l_271);
        l_271 = (safe_add_func_uint16_t_u_u(p_48, p_49));
    }
    l_298 = (safe_rshift_func_int8_t_s_u((((l_283 || l_283) & g_95) == (safe_div_func_uint32_t_u_u((g_290 , l_283), (safe_add_func_uint16_t_u_u(func_59((g_90[6] ^ (p_49 && ((safe_div_func_int32_t_s_s((safe_sub_func_int32_t_s_s((l_271 = g_279[1][4].f1), ((((l_297 = (0x38B50A31L && p_49)) <= 0x62L) > l_270) > 0UL))), 1L)) == p_48))), l_283), p_48))))), l_283));
    if ((safe_div_func_int16_t_s_s((((l_271 = (safe_add_func_int16_t_s_s(g_90[6], (func_59(((safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(p_48, (p_48 && ((((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(g_179, l_283)), (safe_unary_minus_func_int32_t_s(0xC5C427A4L)))) >= (g_312 , ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((((safe_add_func_int32_t_s_s(p_49, (((g_90[6] <= l_270) <= l_270) ^ 0xEE13L))) & p_48) , g_131[3]), 8)), g_272.f0)) > p_50))) > p_48) ^ p_49)))), 1)) <= l_271), p_50) < l_270)))) , l_298) || l_319), l_319)))
    {
        unsigned l_327 = 0x112E7AF4L;
        const unsigned l_344 = 0x57894A56L;
        int l_345[9] = {(-2L), (-4L), (-2L), (-4L), (-2L), (-4L), (-2L), (-4L), (-2L)};
        int l_407 = 0x7C138775L;
        int i;
        for (p_50 = (-12); (p_50 <= 15); p_50 = safe_add_func_uint32_t_u_u(p_50, 1))
        {
            int l_322 = 0L;
            int l_350 = 1L;
            if (l_322)
            {
                short l_349 = 0xCE5CL;
                for (g_179 = 26; (g_179 < 24); g_179--)
                {
                    int l_346 = (-9L);
                    l_297 = func_59((safe_lshift_func_int8_t_s_s(l_283, 7)), p_48);
                    l_327 = l_319;
                    for (g_145 = 1; (g_145 >= 0); g_145 -= 1)
                    {
                        int i, j, k;
                        g_312.f0 = (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(g_170[g_145][(g_145 + 4)][(g_145 + 6)], ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u((g_170[g_145][(g_145 + 5)][(g_145 + 4)] , ((safe_mod_func_int32_t_s_s((l_271 = (!((safe_unary_minus_func_uint16_t_u(65532UL)) != l_327))), (g_339 , p_50))) != (l_340[2][2] | (((safe_add_func_int8_t_s_s(0x70L, l_343)) , g_312.f1) <= l_344)))), 0)), p_49)) && 0x81L))), 0xD9L));
                        l_345[6] = (g_263[3][0] = 0L);
                        g_263[2][1] = l_322;
                        g_263[2][1] = ((l_346 == (+g_171)) >= (g_282 , (((safe_rshift_func_uint16_t_u_u((g_116 = l_349), 14)) == (l_350 = (p_49 >= (-1L)))) ^ p_50)));
                    }
                }
            }
            else
            {
                char l_352 = 0L;
                int l_365[8][4] = {{6L, (-5L), 6L, 1L}, {6L, (-5L), 6L, 1L}, {6L, (-5L), 6L, 1L}, {6L, (-5L), 6L, 1L}, {6L, (-5L), 6L, 1L}, {6L, (-5L), 6L, 1L}, {6L, (-5L), 6L, 1L}, {6L, (-5L), 6L, 1L}};
                int l_400 = 1L;
                int i, j;
                if (p_48)
                {
                    unsigned char l_351 = 255UL;
                    int l_362 = 0xE4BC5515L;
                    l_351 = 0x924F58DCL;
                    l_345[7] = (l_322 , func_66((l_345[1] = ((l_352 ^ (g_353 , (safe_add_func_uint16_t_u_u(0x6822L, p_49)))) , (-1L))), l_352));
                    for (g_239 = 0; (g_239 >= 11); ++g_239)
                    {
                        l_362 = (l_345[4] = (safe_sub_func_uint16_t_u_u((func_59(p_50, l_350) && (safe_sub_func_int16_t_s_s(l_297, g_251[7]))), func_59(g_312.f1, (l_340[6][3] <= l_322)))));
                        g_263[6][1] = (l_322 , func_59(((+((safe_add_func_uint8_t_u_u((0x9AL < (p_49 || ((l_365[7][2] , 0xB1798D92L) ^ (l_345[6] = (g_171 & (safe_lshift_func_uint16_t_u_s(func_59(l_350, p_49), p_48))))))), 0L)) ^ (-1L))) , p_49), g_251[7]));
                    }
                }
                else
                {
                    char l_368 = 0x89L;
                    int l_376 = 0x45DC0C9EL;
                    g_339.f0 = ((!0xF70D7745L) <= ((l_368 < ((p_49 = (safe_rshift_func_int16_t_s_u(4L, (g_180[3] , ((g_263[2][1] = (func_59(p_49, ((l_270 | (g_44[3][4] || (l_365[6][3] = p_49))) >= (l_297 = ((p_48 | g_171) , 0UL)))) && l_365[0][1])) > 2L))))) , 4294967295UL)) != l_344));
                    if (p_50)
                    {
                        int l_375 = 2L;
                        g_263[2][1] = (safe_add_func_int16_t_s_s(l_368, (safe_unary_minus_func_int16_t_s(((func_66(p_49, ((p_48 & (!g_170[1][1][8])) <= g_170[0][0][1])) && p_50) , func_66(g_374, l_368))))));
                        g_263[2][1] = 0x4DE94EE4L;
                        l_345[6] = (l_376 = ((l_375 = (g_179 = l_352)) , g_374));
                        g_263[1][0] = (((4294967295UL & (safe_add_func_int32_t_s_s(((func_59((((~((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(g_339.f1)), (g_382 , ((p_49 < 247UL) < ((safe_div_func_int16_t_s_s(g_382.f1, (safe_lshift_func_uint8_t_u_u(l_345[6], 1)))) == (((p_48 & (1L & g_290.f0)) <= g_201) | 0L)))))) < g_32[2])) & 0x66C7L) <= g_145), l_375) < g_180[5]) >= g_220), 0xD1D08208L))) <= 0L) && g_44[4][4]);
                    }
                    else
                    {
                        l_365[7][2] = (safe_sub_func_int16_t_s_s((((safe_add_func_int16_t_s_s(0x2953L, (safe_mod_func_int32_t_s_s(l_376, l_368)))) != (p_49 = (safe_add_func_uint32_t_u_u(0x5A7075D5L, ((-10L) < (safe_sub_func_int32_t_s_s((l_343 | ((l_270 || g_397) || 4294967295UL)), (-9L)))))))) | g_171), 65527UL));
                        l_365[6][0] = g_223;
                    }
                }
                l_345[8] = ((safe_lshift_func_int8_t_s_s((l_400 != (l_350 = (l_271 = (safe_add_func_int32_t_s_s((((safe_mod_func_uint32_t_u_u(func_59((l_340[2][4] , (p_48 == l_327)), func_66(((0xC5D7L || (safe_mod_func_int8_t_s_s(((l_407 = p_48) < (safe_rshift_func_int8_t_s_u(0x48L, (safe_add_func_uint32_t_u_u((safe_div_func_uint8_t_u_u(l_365[3][3], g_131[4])), p_50))))), 255UL))) , p_48), l_400)), g_44[4][1])) && 0x75723CCAL) <= p_48), g_279[1][4].f1))))), 0)) != p_49);
                g_339.f0 = l_350;
            }
            g_312.f0 = p_50;
        }
        return l_414;
    }
    else
    {
        short l_421 = 0xC986L;
        int l_423 = 0x61FEC4C3L;
        unsigned char l_504 = 0xDCL;
        for (g_220 = 1; (g_220 >= 0); g_220 -= 1)
        {
            unsigned l_417 = 0UL;
            int l_422 = 0L;
            int l_530 = 0xAF2ECA3DL;
            l_423 = (((((l_422 = ((p_49 , p_48) < (((((0UL & (((safe_add_func_uint8_t_u_u(l_417, (safe_sub_func_int8_t_s_s((-2L), (-4L))))) > ((p_50 = (func_59(l_420, p_50) | 0x2C0E8F6DL)) | l_421)) , 0x60C7L)) , g_353.f1) == (-1L)) != g_382.f1) == (-1L)))) <= 0UL) || 0x3EL) | g_251[7]) & l_421);
            for (l_422 = 4; (l_422 >= 0); l_422 -= 1)
            {
                int l_429 = 1L;
                int l_430 = 1L;
                int i, j;
                g_263[6][0] = (l_271 = (g_424 , (~(((safe_div_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(func_59(((!((g_282 , g_44[(g_220 + 2)][l_422]) & (0x0427F134L ^ p_48))) < (l_429 = p_48)), l_430), (p_49 = (safe_sub_func_uint8_t_u_u(g_90[2], g_179))))), l_297)) != l_423) < 0xE8L))));
                return l_319;
            }
            for (l_297 = 1; (l_297 <= 4); l_297 += 1)
            {
                int l_433 = 0xF0BCF0CCL;
                int l_438 = 0xD7FB8D96L;
                int l_473 = 0xF21BA12EL;
                int i, j;
                l_423 = g_44[(g_220 + 1)][l_297];
                if (g_44[(l_297 + 1)][g_220])
                {
                    int l_470 = 6L;
                    char l_471[4][2][3] = {{{8L, 9L, 8L}, {8L, 9L, 8L}}, {{8L, 9L, 8L}, {8L, 9L, 8L}}, {{8L, 9L, 8L}, {8L, 9L, 8L}}, {{8L, 9L, 8L}, {8L, 9L, 8L}}};
                    int i, j, k;
                    if (func_59((((((l_433 = g_44[(g_220 + 4)][l_297]) < (((~((g_10 , 0x2285L) | ((safe_rshift_func_int16_t_s_s((0xE6D08E9AL != ((g_197 = 0xE10ED28EL) < 0x9C322D2EL)), (!(safe_rshift_func_uint8_t_u_s(l_438, ((g_441 > ((safe_div_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(3L, g_32[2])), 0xF7A0L)) != g_257)) || 0x3E2EB000L)))))) >= g_220))) | g_257) < 0x735C133BL)) ^ 1L) , 0x01D4L) , g_446), l_417))
                    {
                        int l_452 = 0xD12AEA4FL;
                        l_422 = ((g_447 , (func_59(l_417, (func_59(g_220, (g_116 >= ((safe_div_func_uint8_t_u_u(((p_50 , func_59(l_271, (l_438 = (safe_sub_func_int16_t_s_s((((g_91 = g_44[(g_220 + 4)][l_297]) && (l_422 | (~(p_50 | l_423)))) , g_44[(g_220 + 4)][l_297]), p_50))))) != g_180[5]), p_50)) , p_50))) , l_452)) , 0xE5C3L)) && g_220);
                        return l_423;
                    }
                    else
                    {
                        char l_453 = 9L;
                        if (p_50)
                            break;
                        l_453 = 2L;
                        g_447.f0 = (g_441 = l_422);
                    }
                    l_438 = (l_422 = ((g_279[1][4].f1 = (func_59(g_32[4], g_374) != ((l_433 = (safe_lshift_func_uint16_t_u_s(p_49, 5))) , func_59((func_59(((g_91 & (safe_rshift_func_uint8_t_u_s(func_59((g_279[1][4].f1 = (l_417 , 9UL)), (p_49 == (safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u(246UL, 248UL)), 0x699BL)))), 0))) && 9L), g_44[(g_220 + 1)][l_297]) || (-1L)), p_50)))) & g_170[1][1][3]));
                    if (g_44[(g_220 + 4)][l_297])
                    {
                        unsigned char l_465[10][4][6] = {{{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}, {{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}, {{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}, {{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}, {{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}, {{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}, {{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}, {{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}, {{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}, {{0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}, {0x2BL, 248UL, 251UL, 247UL, 253UL, 4UL}}};
                        int l_472 = 0xE1E992D7L;
                        int i, j, k;
                        if (p_50)
                            break;
                        l_271 = g_462;
                        g_382.f0 = (((((!(safe_sub_func_int16_t_s_s(0x8659L, l_465[1][3][1]))) && (l_473 = (l_472 = ((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(g_44[(g_220 + 4)][l_297], 0)), g_10)) & (func_59(l_470, l_438) == l_471[2][1][2]))))) <= (((g_374 , l_438) & p_50) , p_48)) == l_433) != 0UL);
                    }
                    else
                    {
                        unsigned char l_474 = 1UL;
                        l_474 = p_50;
                        l_433 = ((0xD8L ^ (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((((l_421 , (g_220 | (g_90[4] <= (g_170[0][0][1] = (p_49 & (p_48 , (safe_div_func_int32_t_s_s(((g_32[2] = ((safe_lshift_func_uint8_t_u_s(func_59(g_282.f1, (((0L != 0xCD116746L) , l_487) , l_473)), 7)) < 0UL)) | p_50), 5UL)))))))) , g_170[0][0][3]) >= g_116), l_433)), g_180[1])), g_91))) || g_424.f1);
                    }
                }
                else
                {
                    unsigned char l_498 = 252UL;
                    for (g_145 = 0; (g_145 <= 1); g_145 += 1)
                    {
                        int i, j, k;
                        g_499 = (safe_rshift_func_int8_t_s_u(func_59((safe_sub_func_int16_t_s_s(g_170[g_220][(g_220 + 5)][l_297], g_170[g_145][l_297][(g_220 + 3)])), (safe_sub_func_uint8_t_u_u(((g_90[5] = (g_44[0][3] <= (l_473 >= (g_195 = g_180[1])))) > ((l_433 > ((g_220 <= g_251[7]) >= (safe_rshift_func_int8_t_s_u(p_50, l_498)))) & 0xFEL)), 0xE7L))), g_263[2][1]));
                        l_473 = g_44[4][2];
                        g_263[2][1] = (g_424 , l_423);
                        if (p_49)
                            continue;
                    }
                    return g_500;
                }
                for (p_48 = 0; (p_48 <= 4); p_48 += 1)
                {
                    int l_512 = 0x4FDE5374L;
                    int i, j, k;
                    if (((+g_170[g_220][l_297][(p_48 + 2)]) == p_48))
                    {
                        short l_513 = (-4L);
                        l_422 = (p_48 > l_501);
                        if (g_170[g_220][l_297][(p_48 + 2)])
                            break;
                        g_447.f0 = ((!((((+p_50) <= ((0L != (g_251[7] = (((safe_lshift_func_int16_t_s_s((l_473 = p_48), (0L > l_504))) == ((((safe_unary_minus_func_int16_t_s(0xB6B1L)) < ((((+(func_59(p_48, (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((l_504 , (safe_rshift_func_int8_t_s_s(((((l_422 = (l_438 = (((l_512 = g_282.f1) , l_513) , 65535UL))) == l_433) != p_49) > 0x153D4A6BL), 1))), p_49)), g_239))) ^ p_49)) || 0x3796L) || g_170[g_220][l_297][(p_48 + 2)]) ^ 0x63F4B3FEL)) & p_49) <= p_48)) , 0xE8L))) > g_170[g_220][l_297][(p_48 + 2)])) != g_180[3]) , l_504)) > g_95);
                        l_422 = (-6L);
                    }
                    else
                    {
                        g_382.f0 = l_512;
                        l_530 = (safe_rshift_func_uint8_t_u_s(((safe_div_func_uint8_t_u_u(l_504, (((0x2EL != (func_59(p_50, (l_423 = p_48)) == (l_422 = g_500))) <= (safe_mod_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_u(((((safe_lshift_func_uint8_t_u_s(l_512, 0)) && (safe_rshift_func_int16_t_s_u(((((safe_add_func_uint8_t_u_u((g_170[g_220][l_297][(p_48 + 2)] && ((+g_179) > p_48)), 0x61L)) & (-1L)) , p_48) && p_50), 2))) | l_417) || p_50), 10)) | 0xA21E68D7L), 0xE2L))) , g_180[5]))) >= l_298), 2));
                        g_424.f0 = ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u((g_32[3] & (((g_500 , (0xB45BL != g_263[2][0])) & (l_271 = (((safe_rshift_func_uint8_t_u_s((l_414 ^ ((safe_div_func_int16_t_s_s(p_50, l_417)) != ((safe_rshift_func_uint16_t_u_u(65535UL, (g_170[0][6][6] != l_423))) != 0xEEL))), g_447.f0)) <= g_170[g_220][l_297][(p_48 + 2)]) , l_340[0][2]))) > l_283)))), p_50)) != l_487);
                        g_312.f0 = (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(p_49)), (safe_sub_func_int16_t_s_s(p_49, g_131[6]))));
                    }
                }
            }
        }
    }
    for (g_312.f1 = 2; (g_312.f1 <= 7); g_312.f1 += 1)
    {
        int l_547[9][5] = {{0L, (-1L), (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L), (-1L)}, {0L, (-1L), (-1L), (-1L), (-1L)}};
        int i, j;
        l_271 = ((g_90[g_312.f1] && (l_297 = ((((0xF5A7EDC5L || (g_90[g_312.f1] , 4294967286UL)) & func_59((l_547[1][2] = g_90[g_312.f1]), ((g_382 , ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((g_424 , (l_319 >= 1UL)), p_49)), l_283)) > 0xF8L)) > 255UL))) || l_343) & (-1L)))) > 0x1559L);
    }
    return p_49;
}







static short func_59(unsigned short p_60, unsigned short p_61)
{
    char l_259 = 1L;
    int l_260 = 1L;
    unsigned l_261[8] = {0UL, 1UL, 0UL, 1UL, 0UL, 1UL, 0UL, 1UL};
    int i;
    l_260 = l_259;
    return l_261[7];
}







static int func_66(char p_67, unsigned short p_68)
{
    unsigned char l_71 = 0x85L;
    int l_85 = 4L;
    int l_144 = 1L;
    unsigned short l_172 = 0xB103L;
    int l_189[6][10];
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
            l_189[i][j] = (-1L);
    }
    for (p_67 = 4; (p_67 <= 5); p_67 = safe_add_func_int32_t_s_s(p_67, 3))
    {
        unsigned char l_72 = 0UL;
        short l_73 = 0x6F86L;
        int l_74 = 0xE0C2DF10L;
        l_74 = (l_73 = (g_10 > ((l_71 != l_72) & 0x46L)));
        return l_71;
    }
    for (l_71 = 0; (l_71 <= 8); l_71 += 1)
    {
        const unsigned l_123 = 0x2901D39AL;
        const unsigned l_148 = 3UL;
        int l_150[7][9] = {{0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L}, {0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L}, {0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L}, {0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L}, {0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L}, {0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L}, {0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L, 0x9F078925L, 0L}};
        char l_221 = (-4L);
        const unsigned short l_248 = 65528UL;
        int l_254[8][7][4] = {{{0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}}, {{0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}}, {{0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}}, {{0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}}, {{0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}}, {{0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}}, {{0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}}, {{0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}, {0L, 0xF1E348D7L, 0x5925C35DL, 0x0F492525L}}};
        int i, j, k;
        if (((g_32[l_71] , ((((safe_add_func_uint8_t_u_u(((+((safe_rshift_func_int8_t_s_u(((p_67 || (0x8BE3E2CAL >= ((safe_mod_func_int32_t_s_s((g_91 = (l_71 & (g_90[2] = (safe_mod_func_int16_t_s_s((!(l_85 = (safe_lshift_func_int8_t_s_s((0x3DF555A6L && g_32[2]), (l_71 | p_67))))), (safe_mod_func_int8_t_s_s((safe_mod_func_int16_t_s_s((g_32[2] , (-6L)), p_68)), g_32[4]))))))), g_32[2])) && g_32[l_71]))) >= p_67), p_67)) != g_32[l_71])) < (-10L)), p_68)) <= g_10) , 0xCACF6402L) > p_68)) >= l_71))
        {
            int l_94 = 0xD9BA7415L;
            int l_115[4][10] = {{0L, 0x0E302F92L, 0xB0794679L, (-8L), (-10L), 0x3023C078L, (-10L), (-8L), 0xB0794679L, 0x0E302F92L}, {0L, 0x0E302F92L, 0xB0794679L, (-8L), (-10L), 0x3023C078L, (-10L), (-8L), 0xB0794679L, 0x0E302F92L}, {0L, 0x0E302F92L, 0xB0794679L, (-8L), (-10L), 0x3023C078L, (-10L), (-8L), 0xB0794679L, 0x0E302F92L}, {0L, 0x0E302F92L, 0xB0794679L, (-8L), (-10L), 0x3023C078L, (-10L), (-8L), 0xB0794679L, 0x0E302F92L}};
            int i, j;
            for (p_67 = 0; (p_67 == 0); ++p_67)
            {
                return g_32[4];
            }
            g_95 = l_94;
            for (g_95 = 0; (g_95 != 54); g_95 = safe_add_func_uint32_t_u_u(g_95, 2))
            {
                unsigned l_103 = 0x0BBFFD32L;
                int l_130 = 0x53B37858L;
                unsigned short l_143 = 0UL;
                for (p_67 = 0; (p_67 == 16); p_67 = safe_add_func_int16_t_s_s(p_67, 8))
                {
                    int l_112 = 0xB9876582L;
                    g_116 = ((safe_add_func_uint8_t_u_u((0x69AAE9A1L && (0x4BL && (safe_unary_minus_func_int32_t_s(l_103)))), (safe_add_func_int32_t_s_s(((((safe_div_func_int8_t_s_s((safe_mod_func_uint16_t_u_u((g_10 , (p_68 = g_32[6])), (safe_mod_func_int32_t_s_s(l_112, (g_32[6] && (safe_div_func_int32_t_s_s((~p_67), l_71))))))), l_71)) && 0x1121L) , p_67) < l_115[3][6]), p_67)))) , g_91);
                    if ((l_71 & ((safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u((safe_add_func_int16_t_s_s(l_123, g_90[2])), (safe_add_func_int8_t_s_s(0L, ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(p_68, 12)), (((g_131[2] = (l_130 = g_116)) || l_130) ^ 0x9BE492C6L))) | g_116))))) & p_68), 1)) >= 0L)))
                    {
                        int l_132 = 6L;
                        l_112 = ((l_132 > (safe_rshift_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(l_123, g_90[3])) , l_132), 14))) , (safe_div_func_int32_t_s_s(((l_144 = (g_116 == (((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_143 = 0x57L), (0x09L == p_67))), 255UL)) , 0x5EADL) && (-6L)))) , 0xF60329ECL), 0x02B94DD0L)));
                        if (l_115[3][6])
                            break;
                        return p_67;
                    }
                    else
                    {
                        g_145 = (-1L);
                    }
                    if (l_112)
                        continue;
                    if (l_115[3][6])
                        break;
                }
                if ((g_90[2] || ((g_131[5] = (l_130 < l_85)) , (safe_lshift_func_int8_t_s_s(l_148, 0)))))
                {
                    unsigned short l_149 = 3UL;
                    l_149 = (+g_131[1]);
                    l_150[3][7] = (l_149 && 0xECL);
                    l_94 = ((0x84L < (safe_lshift_func_int8_t_s_s(0x75L, (g_95 == (l_115[1][3] = l_150[3][5]))))) & ((((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((g_116 = g_90[5]) < ((safe_rshift_func_uint16_t_u_s(((safe_unary_minus_func_uint8_t_u(p_67)) | 0x33L), 9)) <= (l_144 = 0xCBD1596FL))), (safe_mod_func_uint32_t_u_u((p_67 < p_68), 0x083D25ECL)))), 0x2DL)), 6)) | p_68) || p_67) , l_94));
                }
                else
                {
                    unsigned l_178 = 0xE638A31BL;
                    for (l_130 = 0; (l_130 > 4); ++l_130)
                    {
                        g_171 = ((!(g_170[0][0][1] = (l_71 , p_68))) & (p_68 >= 0xA0A7BF82L));
                    }
                    if (p_68)
                        break;
                    if (l_172)
                    {
                        int l_175 = 0xBD8D7B0DL;
                        l_175 = (safe_rshift_func_uint16_t_u_s(65535UL, 0));
                    }
                    else
                    {
                        unsigned short l_176 = 0x9DE4L;
                        int l_177 = 0xF527E66CL;
                        l_177 = (l_176 = p_67);
                        l_144 = l_178;
                        if (p_68)
                            break;
                    }
                }
                g_179 = 0x78CF1776L;
            }
            l_115[3][1] = (((g_116 = 0UL) | l_115[3][6]) ^ 0xC7CDL);
        }
        else
        {
            unsigned l_198 = 7UL;
            int l_207 = 0x71CC7438L;
            for (g_95 = 3; (g_95 <= 8); g_95 += 1)
            {
                char l_204 = 0x73L;
                int l_222[1][5][2];
                int i, j, k;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 5; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_222[i][j][k] = (-1L);
                    }
                }
                for (p_67 = 0; (p_67 <= 8); p_67 += 1)
                {
                    int l_196[9] = {0x6CBB3E61L, (-7L), 0x6CBB3E61L, (-7L), 0x6CBB3E61L, (-7L), 0x6CBB3E61L, (-7L), 0x6CBB3E61L};
                    int i;
                    g_180[5] = g_32[p_67];
                    if ((g_197 = (safe_add_func_uint8_t_u_u(255UL, (((safe_rshift_func_uint16_t_u_u((safe_div_func_int32_t_s_s(((((g_32[p_67] & (g_171 = 0xAFL)) , (+(0x1CE9L <= (safe_div_func_int16_t_s_s(l_189[5][6], 1L))))) >= ((l_196[2] = ((safe_lshift_func_int16_t_s_s(0xFD1FL, 12)) == ((g_10 >= ((g_195 = (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_s(g_10, 5))))) <= l_189[2][5])) || 3UL))) , g_170[0][0][1])) <= p_68), 0x896EA0D3L)), p_67)) && 1UL) <= p_67)))))
                    {
                        char l_199 = 0x2AL;
                        int l_200 = 1L;
                        l_144 = g_145;
                        l_198 = p_68;
                        l_200 = (((0xB8E8L | l_199) , 0x0BL) , 0x12F185F0L);
                        g_201 = (l_200 = l_196[7]);
                    }
                    else
                    {
                        int i;
                        if (g_90[2])
                            break;
                        if (p_68)
                            break;
                        g_223 = (0x5D52F851L == ((safe_div_func_uint32_t_u_u((g_32[l_71] = (+l_204)), (l_222[0][1][1] = (safe_div_func_uint32_t_u_u((l_207 = l_150[5][7]), ((safe_div_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(l_189[4][2], p_68)) | (safe_sub_func_int8_t_s_s((p_67 & (safe_div_func_int32_t_s_s((g_220 = (safe_rshift_func_uint16_t_u_u((g_145 || p_68), (((safe_add_func_uint8_t_u_u((0x9AL >= p_67), 2L)) == g_95) | l_198)))), l_221))), l_204))), g_201)) , l_204)))))) ^ g_91));
                    }
                    l_222[0][1][1] = g_180[5];
                }
                return g_32[g_95];
            }
            g_239 = (((((l_85 , l_150[3][7]) , ((p_67 != ((((safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(((g_197 < (g_223 == p_67)) > (safe_mod_func_int8_t_s_s((safe_sub_func_int8_t_s_s((g_171 = (safe_div_func_int32_t_s_s(l_172, ((+(safe_add_func_uint16_t_u_u(g_90[2], (((((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(p_67, 0x32131220L)), 1UL)) || p_67) , (-1L)) && l_221) & l_189[5][6])))) | l_172)))), 0xE4L)), g_95))))), l_198)) & 0xDCD2A6C3L) , p_68) > (-1L))) < 0UL)) >= p_68) | g_170[1][5][8]) > g_131[2]);
            l_254[5][5][2] = ((safe_add_func_int8_t_s_s((safe_add_func_uint8_t_u_u(l_123, (p_67 >= (((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_uint16_t_u_u((g_220 || ((l_207 = ((((g_180[5] ^ 0x6281L) , (l_248 , (((l_150[4][3] = (g_251[7] = (safe_lshift_func_int16_t_s_s(g_90[2], p_68)))) == (safe_add_func_uint8_t_u_u((p_68 > 0x74L), 0x4CL))) && g_116))) , 1UL) < 1L)) , p_67)), l_189[5][6])) > p_67) || l_123) <= g_32[l_71]), g_201)) ^ g_171) || p_68)))), l_85)) > 0UL);
            l_207 = 0x93AF8227L;
        }
    }
    g_257 = ((safe_div_func_uint32_t_u_u(0xC9478151L, g_116)) <= ((l_172 == 0x4EL) >= p_67));
    return g_116;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_10, "g_10", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_32[i], "g_32[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_44[i][j], "g_44[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_90[i], "g_90[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_131[i], "g_131[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_145, "g_145", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_170[i][j][k], "g_170[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_180[i], "g_180[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_197, "g_197", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_223, "g_223", print_hash_value);
    transparent_crc(g_239, "g_239", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_251[i], "g_251[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_257, "g_257", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_263[i][j], "g_263[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_272.f0, "g_272.f0", print_hash_value);
    transparent_crc(g_272.f1, "g_272.f1", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_279[i][j].f0, "g_279[i][j].f0", print_hash_value);
            transparent_crc(g_279[i][j].f1, "g_279[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_282.f0, "g_282.f0", print_hash_value);
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_290.f1, "g_290.f1", print_hash_value);
    transparent_crc(g_312.f0, "g_312.f0", print_hash_value);
    transparent_crc(g_312.f1, "g_312.f1", print_hash_value);
    transparent_crc(g_339.f0, "g_339.f0", print_hash_value);
    transparent_crc(g_339.f1, "g_339.f1", print_hash_value);
    transparent_crc(g_353.f0, "g_353.f0", print_hash_value);
    transparent_crc(g_353.f1, "g_353.f1", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_382.f0, "g_382.f0", print_hash_value);
    transparent_crc(g_382.f1, "g_382.f1", print_hash_value);
    transparent_crc(g_397, "g_397", print_hash_value);
    transparent_crc(g_424.f0, "g_424.f0", print_hash_value);
    transparent_crc(g_424.f1, "g_424.f1", print_hash_value);
    transparent_crc(g_441, "g_441", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_447.f0, "g_447.f0", print_hash_value);
    transparent_crc(g_447.f1, "g_447.f1", print_hash_value);
    transparent_crc(g_462, "g_462", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_500, "g_500", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_755.f0, "g_755.f0", print_hash_value);
    transparent_crc(g_755.f1, "g_755.f1", print_hash_value);
    transparent_crc(g_791, "g_791", print_hash_value);
    transparent_crc(g_837.f0, "g_837.f0", print_hash_value);
    transparent_crc(g_837.f1, "g_837.f1", print_hash_value);
    transparent_crc(g_865.f0, "g_865.f0", print_hash_value);
    transparent_crc(g_865.f1, "g_865.f1", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_941[i].f0, "g_941[i].f0", print_hash_value);
        transparent_crc(g_941[i].f1, "g_941[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_947[i].f0, "g_947[i].f0", print_hash_value);
        transparent_crc(g_947[i].f1, "g_947[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_962[i], "g_962[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1050.f0, "g_1050.f0", print_hash_value);
    transparent_crc(g_1050.f1, "g_1050.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1094[i].f0, "g_1094[i].f0", print_hash_value);
        transparent_crc(g_1094[i].f1, "g_1094[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1107.f0, "g_1107.f0", print_hash_value);
    transparent_crc(g_1107.f1, "g_1107.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1121[i][j].f0, "g_1121[i][j].f0", print_hash_value);
            transparent_crc(g_1121[i][j].f1, "g_1121[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1133.f0, "g_1133.f0", print_hash_value);
    transparent_crc(g_1133.f1, "g_1133.f1", print_hash_value);
    transparent_crc(g_1230.f0, "g_1230.f0", print_hash_value);
    transparent_crc(g_1230.f1, "g_1230.f1", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1278[i], "g_1278[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1321, "g_1321", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1332[i][j].f0, "g_1332[i][j].f0", print_hash_value);
            transparent_crc(g_1332[i][j].f1, "g_1332[i][j].f1", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1397.f0, "g_1397.f0", print_hash_value);
    transparent_crc(g_1397.f1, "g_1397.f1", print_hash_value);
    transparent_crc(g_1400.f0, "g_1400.f0", print_hash_value);
    transparent_crc(g_1400.f1, "g_1400.f1", print_hash_value);
    transparent_crc(g_1458, "g_1458", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1467[i].f0, "g_1467[i].f0", print_hash_value);
        transparent_crc(g_1467[i].f1, "g_1467[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1574.f0, "g_1574.f0", print_hash_value);
    transparent_crc(g_1574.f1, "g_1574.f1", print_hash_value);
    transparent_crc(g_1615.f0, "g_1615.f0", print_hash_value);
    transparent_crc(g_1615.f1, "g_1615.f1", print_hash_value);
    transparent_crc(g_1648, "g_1648", print_hash_value);
    transparent_crc(g_1665.f0, "g_1665.f0", print_hash_value);
    transparent_crc(g_1665.f1, "g_1665.f1", print_hash_value);
    transparent_crc(g_1670.f0, "g_1670.f0", print_hash_value);
    transparent_crc(g_1670.f1, "g_1670.f1", print_hash_value);
    transparent_crc(g_1678, "g_1678", print_hash_value);
    transparent_crc(g_1706.f0, "g_1706.f0", print_hash_value);
    transparent_crc(g_1706.f1, "g_1706.f1", print_hash_value);
    transparent_crc(g_1723.f0, "g_1723.f0", print_hash_value);
    transparent_crc(g_1723.f1, "g_1723.f1", print_hash_value);
    transparent_crc(g_1727, "g_1727", print_hash_value);
    transparent_crc(g_1728.f0, "g_1728.f0", print_hash_value);
    transparent_crc(g_1728.f1, "g_1728.f1", print_hash_value);
    transparent_crc(g_1742, "g_1742", print_hash_value);
    transparent_crc(g_1800.f0, "g_1800.f0", print_hash_value);
    transparent_crc(g_1800.f1, "g_1800.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1844[i].f0, "g_1844[i].f0", print_hash_value);
        transparent_crc(g_1844[i].f1, "g_1844[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1903.f0, "g_1903.f0", print_hash_value);
    transparent_crc(g_1903.f1, "g_1903.f1", print_hash_value);
    transparent_crc(g_1936.f0, "g_1936.f0", print_hash_value);
    transparent_crc(g_1936.f1, "g_1936.f1", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1942[i].f0, "g_1942[i].f0", print_hash_value);
        transparent_crc(g_1942[i].f1, "g_1942[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1994.f0, "g_1994.f0", print_hash_value);
    transparent_crc(g_1994.f1, "g_1994.f1", print_hash_value);
    transparent_crc(g_2013.f0, "g_2013.f0", print_hash_value);
    transparent_crc(g_2013.f1, "g_2013.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
