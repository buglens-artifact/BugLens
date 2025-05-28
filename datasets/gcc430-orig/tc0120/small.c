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


struct S0 {
   unsigned f0;
   const unsigned f1;
   unsigned char f2;
   unsigned char f3;
};


static int g_2[10] = {0x158D32FFL, 0x158D32FFL, 0x158D32FFL, 0x158D32FFL, 0x158D32FFL, 0x158D32FFL, 0x158D32FFL, 0x158D32FFL, 0x158D32FFL, 0x158D32FFL};
static int g_5 = 0xA77C8748L;
static unsigned short g_57 = 65535UL;
static unsigned char g_74[9] = {0x00L, 2UL, 0x00L, 2UL, 0x00L, 2UL, 0x00L, 2UL, 0x00L};
static int g_76[2] = {0x08456A9EL, 0x08456A9EL};
static int *g_81 = &g_76[1];
static struct S0 g_99 = {18446744073709551613UL,0x65AED0E3L,255UL,0xB9L};
static char g_102 = 9L;
static unsigned short g_104[5][9] = {{0UL, 0UL, 0xBFD0L, 0x9F9AL, 0x49A5L, 0x9F9AL, 0xBFD0L, 0UL, 0UL}, {0UL, 0UL, 0xBFD0L, 0x9F9AL, 0x49A5L, 0x9F9AL, 0xBFD0L, 0UL, 0UL}, {0UL, 0UL, 0xBFD0L, 0x9F9AL, 0x49A5L, 0x9F9AL, 0xBFD0L, 0UL, 0UL}, {0UL, 0UL, 0xBFD0L, 0x9F9AL, 0x49A5L, 0x9F9AL, 0xBFD0L, 0UL, 0UL}, {0UL, 0UL, 0xBFD0L, 0x9F9AL, 0x49A5L, 0x9F9AL, 0xBFD0L, 0UL, 0UL}};
static unsigned short *g_103 = &g_104[2][6];
static int *g_107 = &g_76[1];
static char g_108 = 6L;
static int **g_120 = &g_81;
static short g_224[9][9] = {{0x523CL, 0x97ADL, 0x75E3L, 0x97ADL, 0x523CL, 0xE70EL, 0xF658L, 0x97ADL, 0x5FDDL}, {0x523CL, 0x97ADL, 0x75E3L, 0x97ADL, 0x523CL, 0xE70EL, 0xF658L, 0x97ADL, 0x5FDDL}, {0x523CL, 0x97ADL, 0x75E3L, 0x97ADL, 0x523CL, 0xE70EL, 0xF658L, 0x97ADL, 0x5FDDL}, {0x523CL, 0x97ADL, 0x75E3L, 0x97ADL, 0x523CL, 0xE70EL, 0xF658L, 0x97ADL, 0x5FDDL}, {0x523CL, 0x97ADL, 0x75E3L, 0x97ADL, 0x523CL, 0xE70EL, 0xF658L, 0x97ADL, 0x5FDDL}, {0x523CL, 0x97ADL, 0x75E3L, 0x97ADL, 0x523CL, 0xE70EL, 0xF658L, 0x97ADL, 0x5FDDL}, {0x523CL, 0x97ADL, 0x75E3L, 0x97ADL, 0x523CL, 0xE70EL, 0xF658L, 0x97ADL, 0x5FDDL}, {0x523CL, 0x97ADL, 0x75E3L, 0x97ADL, 0x523CL, 0xE70EL, 0xF658L, 0x97ADL, 0x5FDDL}, {0x523CL, 0x97ADL, 0x75E3L, 0x97ADL, 0x523CL, 0xE70EL, 0xF658L, 0x97ADL, 0x5FDDL}};
static int g_238 = 1L;
static short g_241[2] = {1L, 1L};
static const int g_246[2] = {0x24FCF406L, 0x24FCF406L};
static unsigned short **g_274 = &g_103;
static char *g_302[2] = {&g_102, &g_102};
static char **g_301[8][5][2] = {{{&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}}, {{&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}}, {{&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}}, {{&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}}, {{&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}}, {{&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}}, {{&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}}, {{&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}, {&g_302[0], &g_302[1]}}};
static unsigned char ** const g_356 = (void*)0;
static unsigned char g_377 = 0UL;
static const unsigned char g_424 = 1UL;
static const unsigned char *g_423[8][9][3] = {{{&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}}, {{&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}}, {{&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}}, {{&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}}, {{&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}}, {{&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}}, {{&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}}, {{&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}, {&g_424, &g_424, &g_424}}};
static int g_447 = (-1L);
static const int *g_448 = &g_76[1];
static const char *g_470 = &g_108;
static const char **g_469 = &g_470;
static struct S0 g_537 = {18446744073709551615UL,1UL,0x12L,0x5AL};
static unsigned short g_540 = 0UL;
static char ****g_597 = (void*)0;
static short g_611 = 0x783AL;
static unsigned g_683 = 0UL;
static int g_730 = 0L;
static struct S0 g_753 = {0xE6708B89L,18446744073709551615UL,1UL,0UL};
static struct S0 g_762[4] = {{6UL,0x3EDFFAE5L,0x63L,0x86L}, {6UL,0x3EDFFAE5L,0x63L,0x86L}, {6UL,0x3EDFFAE5L,0x63L,0x86L}, {6UL,0x3EDFFAE5L,0x63L,0x86L}};
static int g_809 = (-1L);
static unsigned g_837[5] = {4294967292UL, 4294967292UL, 4294967292UL, 4294967292UL, 4294967292UL};
static const unsigned char g_839 = 5UL;
static struct S0 g_855 = {0UL,0xC880161BL,0xECL,255UL};
static struct S0 g_857[10] = {{1UL,0xEFD87581L,0x87L,0xA6L}, {0xA8BED840L,0xFA2BFAD0L,0xDDL,248UL}, {1UL,0xEFD87581L,0x87L,0xA6L}, {0xA8BED840L,0xFA2BFAD0L,0xDDL,248UL}, {1UL,0xEFD87581L,0x87L,0xA6L}, {0xA8BED840L,0xFA2BFAD0L,0xDDL,248UL}, {1UL,0xEFD87581L,0x87L,0xA6L}, {0xA8BED840L,0xFA2BFAD0L,0xDDL,248UL}, {1UL,0xEFD87581L,0x87L,0xA6L}, {0xA8BED840L,0xFA2BFAD0L,0xDDL,248UL}};
static struct S0 ** const g_860 = (void*)0;
static unsigned g_895[3][8] = {{4294967295UL, 0x7439B5AEL, 4294967288UL, 1UL, 4294967290UL, 0xC5C2073CL, 4294967290UL, 1UL}, {4294967295UL, 0x7439B5AEL, 4294967288UL, 1UL, 4294967290UL, 0xC5C2073CL, 4294967290UL, 1UL}, {4294967295UL, 0x7439B5AEL, 4294967288UL, 1UL, 4294967290UL, 0xC5C2073CL, 4294967290UL, 1UL}};
static struct S0 *g_929 = &g_855;
static unsigned char *g_948 = &g_74[2];
static unsigned char **g_947 = &g_948;
static unsigned *g_966[7] = {(void*)0, (void*)0, &g_895[0][7], (void*)0, (void*)0, &g_895[0][7], (void*)0};
static unsigned **g_965[1][10] = {{&g_966[4], &g_966[4], &g_966[4], &g_966[4], &g_966[4], &g_966[4], &g_966[4], &g_966[4], &g_966[4], &g_966[4]}};
static int g_1025 = (-2L);
static char g_1031[4] = {6L, 6L, 6L, 6L};
static unsigned short ***g_1036 = &g_274;
static const struct S0 g_1130[7] = {{18446744073709551608UL,18446744073709551606UL,0xDAL,0x90L}, {0UL,0xB6903A03L,0x43L,0x67L}, {18446744073709551608UL,18446744073709551606UL,0xDAL,0x90L}, {0UL,0xB6903A03L,0x43L,0x67L}, {18446744073709551608UL,18446744073709551606UL,0xDAL,0x90L}, {0UL,0xB6903A03L,0x43L,0x67L}, {18446744073709551608UL,18446744073709551606UL,0xDAL,0x90L}};
static unsigned char **g_1189 = &g_948;
static struct S0 g_1192 = {0x6E372716L,0x3F8D7ED2L,0xBEL,0x41L};
static unsigned *g_1203 = &g_753.f0;
static short *g_1238 = &g_241[0];
static short **g_1237 = &g_1238;



static struct S0 func_1(void);
static short func_10(int p_11, char p_12, const unsigned p_13, struct S0 p_14, int p_15);
static unsigned char func_17(unsigned char p_18, unsigned p_19);
static const unsigned short func_26(const unsigned p_27, const unsigned short p_28);
static char func_32(unsigned char p_33, int p_34, unsigned p_35, const unsigned p_36);
static unsigned char func_37(const struct S0 p_38, short p_39);
static struct S0 func_40(char p_41, unsigned p_42, struct S0 p_43);
static char func_44(unsigned p_45, short p_46);
static unsigned char func_48(unsigned p_49, const int p_50, unsigned short p_51, const unsigned char p_52, unsigned short p_53);
static int func_67(struct S0 p_68, unsigned char p_69);
static struct S0 func_1(void)
{
    unsigned char l_887 = 248UL;
    struct S0 l_889[3] = {{18446744073709551608UL,0UL,0x91L,0x0BL}, {18446744073709551608UL,0UL,0x91L,0x0BL}, {18446744073709551608UL,0UL,0x91L,0x0BL}};
    unsigned short l_1134 = 2UL;
    int l_1141 = 1L;
    unsigned char **l_1188 = (void*)0;
    struct S0 *l_1191 = &g_1192;
    int *l_1215 = &g_76[1];
    unsigned ***l_1232 = &g_965[0][6];
    int i;
    for (g_2[2] = 0; (g_2[2] >= (-8)); --g_2[2])
    {
        short l_16 = 0L;
        struct S0 l_1138 = {0x1B871D4EL,0xBA649C8CL,0xCDL,0x98L};
        int *l_1144 = &g_447;
        int *l_1153 = &g_2[2];
        char l_1164 = 0L;
        unsigned l_1167 = 0x2D06D5CDL;
        const unsigned *l_1180 = &g_895[0][7];
        const unsigned **l_1179 = &l_1180;
        const unsigned ***l_1178 = &l_1179;
        unsigned short l_1183[2][10] = {{0x5EC9L, 65529UL, 0x5EC9L, 65529UL, 0x5EC9L, 65529UL, 0x5EC9L, 65529UL, 0x5EC9L, 65529UL}, {0x5EC9L, 65529UL, 0x5EC9L, 65529UL, 0x5EC9L, 65529UL, 0x5EC9L, 65529UL, 0x5EC9L, 65529UL}};
        unsigned char l_1184 = 255UL;
        int l_1193[4];
        unsigned l_1196[8][1] = {{1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}, {1UL}};
        int * const l_1230[5][10][3] = {{{&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}}, {{&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}}, {{&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}}, {{&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}}, {{&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}, {&g_730, &l_1193[2], &l_1193[2]}}};
        int **l_1231 = &l_1153;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_1193[i] = 0L;
        for (g_5 = 0; (g_5 > 5); g_5 = safe_add_func_uint32_t_u_u(g_5, 7))
        {
            unsigned char l_31 = 0UL;
            int l_885 = 0x965ACB2CL;
            unsigned char *l_886 = &g_857[5].f3;
            const struct S0 l_1137 = {2UL,4UL,254UL,0xBAL};
        }
        for (g_108 = 0; (g_108 <= (-4)); --g_108)
        {
            unsigned *l_1158 = &g_895[1][5];
            int l_1165 = (-1L);
            int *l_1166 = &g_76[1];
            if ((**g_120))
                break;
            for (g_683 = 0; (g_683 <= 1); g_683 += 1)
            {
                short *l_1159 = (void*)0;
                short *l_1160[3];
                struct S0 l_1161[4] = {{2UL,18446744073709551612UL,0x02L,0x44L}, {0x41C81E1FL,0x5AC4BE05L,0x07L,0x79L}, {2UL,18446744073709551612UL,0x02L,0x44L}, {0x41C81E1FL,0x5AC4BE05L,0x07L,0x79L}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_1160[i] = &g_611;
                g_76[g_683] = (!(safe_add_func_uint16_t_u_u((0UL || g_1031[(g_683 + 2)]), (g_76[g_683] == (g_241[0] = (g_224[(g_683 + 6)][(g_683 + 3)] = (l_1158 == (void*)0)))))));
                (*l_1144) = (l_1161[1] , (g_76[g_683] = g_76[g_683]));
            }
        }
        for (l_1141 = 0; (l_1141 == 23); ++l_1141)
        {
            const unsigned ****l_1181 = (void*)0;
            const unsigned ****l_1182 = &l_1178;
            int l_1185 = 0xB3E43BACL;
            unsigned char ***l_1186[6][9][4] = {{{&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}}, {{&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}}, {{&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}}, {{&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}}, {{&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}}, {{&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}, {&g_947, &g_947, &g_947, &g_947}}};
            struct S0 l_1187 = {0xEE751740L,3UL,0x42L,0UL};
            short * const l_1197[3] = {&g_224[4][8], &g_224[4][8], &g_224[4][8]};
            int l_1227[6][1][2] = {{{(-8L), (-8L)}}, {{(-8L), (-8L)}}, {{(-8L), (-8L)}}, {{(-8L), (-8L)}}, {{(-8L), (-8L)}}, {{(-8L), (-8L)}}};
            int i, j, k;
        }
        (*l_1231) = l_1230[2][7][0];
    }
    if ((g_839 || func_44((&g_965[0][1] != (((**g_1189) = (**g_1189)) , l_1232)), g_753.f2)))
    {
        for (g_1192.f3 = 4; (g_1192.f3 <= 45); g_1192.f3 = safe_add_func_uint16_t_u_u(g_1192.f3, 7))
        {
            short **l_1239 = &g_1238;
            (**g_120) = (safe_mul_func_uint8_t_u_u((g_1237 == l_1239), (-2L)));
            (*l_1215) = (*g_448);
        }
    }
    else
    {
        struct S0 **l_1240 = &g_929;
        (*l_1240) = &l_889[1];
    }
    return (*l_1191);
}







static short func_10(int p_11, char p_12, const unsigned p_13, struct S0 p_14, int p_15)
{
    unsigned l_894 = 0x96D1FB7FL;
    int *l_898 = &g_76[1];
    const unsigned char **l_940 = &g_423[3][5][2];
    unsigned l_970[1];
    unsigned l_985 = 0x654B6F6BL;
    const struct S0 l_1010 = {0xECECDC24L,2UL,0UL,0x49L};
    short l_1054 = 0xA8E2L;
    unsigned short l_1055 = 3UL;
    int i;
    for (i = 0; i < 1; i++)
        l_970[i] = 0xB19D6E66L;
    if ((*g_448))
    {
        short *l_896 = &g_241[0];
        int l_897 = 1L;
        int ***l_899 = &g_120;
        (*g_120) = ((safe_rshift_func_uint8_t_u_s(l_897, (**g_469))) , l_898);
        (*l_899) = &g_107;
    }
    else
    {
        unsigned l_903 = 2UL;
        int *l_920 = &g_5;
        struct S0 l_957 = {0x57A34196L,18446744073709551608UL,253UL,246UL};
        unsigned char ***l_981 = (void*)0;
        unsigned char ****l_980 = &l_981;
        int l_991 = (-1L);
        unsigned l_1062[1][3];
        struct S0 *l_1080[3][6][5] = {{{&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}}, {{&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}}, {{&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}, {&g_537, &g_99, &g_537, (void*)0, &g_855}}};
        char l_1118 = 0x20L;
        int l_1132[3][6][6] = {{{1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}}, {{1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}}, {{1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}, {1L, 0x6079DC03L, 0x2F8296C3L, 0x13E1DC72L, (-1L), 0x2F8F3DA8L}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_1062[i][j] = 0x4B6AF7B2L;
        }
        for (p_12 = 10; (p_12 >= (-19)); --p_12)
        {
            int **l_902 = &g_107;
            (*l_902) = ((*g_120) = &g_2[3]);
            return p_11;
        }
    }
    return g_855.f2;
}







static unsigned char func_17(unsigned char p_18, unsigned p_19)
{
    unsigned l_888 = 4294967295UL;
    return l_888;
}







static const unsigned short func_26(const unsigned p_27, const unsigned short p_28)
{
    unsigned l_47 = 4294967288UL;
    unsigned short *l_56 = &g_57;
    struct S0 l_70[6] = {{0x2DA0D3D7L,0xBA349A2DL,1UL,0x43L}, {0x2DA0D3D7L,0xBA349A2DL,1UL,0x43L}, {0xE4674E6AL,0x3B1D319DL,255UL,255UL}, {0x2DA0D3D7L,0xBA349A2DL,1UL,0x43L}, {0x2DA0D3D7L,0xBA349A2DL,1UL,0x43L}, {0xE4674E6AL,0x3B1D319DL,255UL,255UL}};
    unsigned short l_79 = 0x1FB7L;
    int l_883 = 0xBC9F8152L;
    int i;
    if ((func_32(func_37(func_40(func_44(((l_47 && ((-7L) ^ func_48(((((*l_56) = (+(safe_mul_func_uint16_t_u_u(g_2[2], 65535UL)))) , ((safe_unary_minus_func_uint8_t_u((((safe_rshift_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(((*l_56) = (safe_rshift_func_int16_t_s_u(((func_67(l_70[3], g_57) || (l_70[3].f0 | (((1L && p_27) >= l_70[3].f1) , 0xCBEBL))) > g_2[3]), g_2[6]))), 0xF50EL)) , g_2[4]), (-7L))) > l_79), 9)) ^ (-1L)) && l_70[3].f1))) , p_28)) , p_27), p_27, p_27, g_2[1], p_27))) , g_246[1]), g_246[1]), l_70[3].f0, l_70[3]), p_28), l_70[3].f3, p_28, p_28) < 0x15L))
    {
        (*g_120) = (void*)0;
    }
    else
    {
        char l_872 = 0x8EL;
        int l_875 = 0xDFD3102BL;
        for (l_79 = 23; (l_79 != 27); ++l_79)
        {
            char l_866 = 0L;
            struct S0 l_871 = {0xABDCBECFL,5UL,3UL,0x05L};
            unsigned char *l_876 = &g_537.f3;
            unsigned char *l_877 = &g_99.f3;
            int *l_878 = (void*)0;
            int *l_879 = (void*)0;
            int *l_880 = (void*)0;
            int *l_881 = &l_875;
            int *l_882[10] = {&g_809, &g_238, &g_238, &g_238, &g_238, &g_809, &g_238, &g_238, &g_238, &g_238};
            int *l_884 = &g_76[1];
            int i;
            if ((*g_448))
                break;
            (*l_884) = ((l_883 = ((*l_881) = (func_32((l_70[3].f3 ^ l_871.f1), l_871.f0, g_5, g_377) , p_28))) , (**g_120));
            (*g_120) = &l_883;
            (**g_120) = 0x0509E048L;
        }
    }
    return (*g_103);
}







static char func_32(unsigned char p_33, int p_34, unsigned p_35, const unsigned p_36)
{
    short l_449 = 0L;
    unsigned short **l_459[1];
    int **l_460 = &g_107;
    int l_461 = 0xDDBB55D7L;
    struct S0 l_462 = {0xE8618921L,0xC29A6F87L,1UL,251UL};
    int l_477[10] = {0xEC672739L, 0x8CFD3913L, (-1L), (-1L), 0x8CFD3913L, 0xEC672739L, 0x8CFD3913L, (-1L), (-1L), 0x8CFD3913L};
    char *l_584[10] = {(void*)0, &g_108, (void*)0, &g_108, (void*)0, &g_108, (void*)0, &g_108, (void*)0, &g_108};
    unsigned l_594[7] = {0x86681A1BL, 0x6264BC83L, 0x86681A1BL, 0x6264BC83L, 0x86681A1BL, 0x6264BC83L, 0x86681A1BL};
    unsigned char l_629 = 0xA9L;
    short l_654 = 0L;
    int l_657 = 0xE447DB72L;
    unsigned char ***l_666[1];
    unsigned char *l_671[7];
    unsigned char **l_670 = &l_671[0];
    unsigned char ***l_669[6][6] = {{&l_670, &l_670, &l_670, &l_670, &l_670, &l_670}, {&l_670, &l_670, &l_670, &l_670, &l_670, &l_670}, {&l_670, &l_670, &l_670, &l_670, &l_670, &l_670}, {&l_670, &l_670, &l_670, &l_670, &l_670, &l_670}, {&l_670, &l_670, &l_670, &l_670, &l_670, &l_670}, {&l_670, &l_670, &l_670, &l_670, &l_670, &l_670}};
    unsigned short l_720 = 0x64D4L;
    unsigned short l_750[1][7] = {{0x5AEDL, 0xB4FAL, 0x5AEDL, 0xB4FAL, 0x5AEDL, 0xB4FAL, 0x5AEDL}};
    struct S0 *l_752[4][1];
    unsigned *l_763 = (void*)0;
    char l_841 = 6L;
    const struct S0 *l_856 = &g_857[5];
    const int *l_858 = &g_76[1];
    const int **l_859 = &g_448;
    struct S0 **l_862[9][9][3];
    struct S0 ***l_861 = &l_862[2][4][0];
    int *l_863 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_459[i] = &g_103;
    for (i = 0; i < 1; i++)
        l_666[i] = (void*)0;
    for (i = 0; i < 7; i++)
        l_671[i] = (void*)0;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_752[i][j] = &g_753;
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 3; k++)
                l_862[i][j][k] = &l_752[2][0];
        }
    }
    if (l_449)
    {
        unsigned short **l_453 = &g_103;
        int l_456 = (-6L);
        const char **l_464 = (void*)0;
        int l_510 = 0xD3C78070L;
        struct S0 *l_536[10] = {&g_99, &g_537, &g_99, &g_537, &g_99, &g_537, &g_99, &g_537, &g_99, &g_537};
        int l_549 = 0x2DD8730EL;
        int *l_580 = (void*)0;
        char ****l_599 = (void*)0;
        short l_641 = 0xC461L;
        unsigned l_700 = 0x75457559L;
        int i;
        for (l_449 = 0; (l_449 <= (-27)); --l_449)
        {
            unsigned short ***l_452[9][9] = {{&g_274, (void*)0, &g_274, &g_274, &g_274, &g_274, &g_274, (void*)0, &g_274}, {&g_274, (void*)0, &g_274, &g_274, &g_274, &g_274, &g_274, (void*)0, &g_274}, {&g_274, (void*)0, &g_274, &g_274, &g_274, &g_274, &g_274, (void*)0, &g_274}, {&g_274, (void*)0, &g_274, &g_274, &g_274, &g_274, &g_274, (void*)0, &g_274}, {&g_274, (void*)0, &g_274, &g_274, &g_274, &g_274, &g_274, (void*)0, &g_274}, {&g_274, (void*)0, &g_274, &g_274, &g_274, &g_274, &g_274, (void*)0, &g_274}, {&g_274, (void*)0, &g_274, &g_274, &g_274, &g_274, &g_274, (void*)0, &g_274}, {&g_274, (void*)0, &g_274, &g_274, &g_274, &g_274, &g_274, (void*)0, &g_274}, {&g_274, (void*)0, &g_274, &g_274, &g_274, &g_274, &g_274, (void*)0, &g_274}};
            int i, j;
            l_453 = &g_103;
        }
    }
    else
    {
        const struct S0 l_795[8] = {{0UL,0x0E808259L,0x2BL,0xE3L}, {0UL,0x0E808259L,0x2BL,0xE3L}, {0UL,0x0E808259L,0x2BL,0xE3L}, {0UL,0x0E808259L,0x2BL,0xE3L}, {0UL,0x0E808259L,0x2BL,0xE3L}, {0UL,0x0E808259L,0x2BL,0xE3L}, {0UL,0x0E808259L,0x2BL,0xE3L}, {0UL,0x0E808259L,0x2BL,0xE3L}};
        short *l_800[1][7];
        int l_801[9] = {0x31E4DAEEL, 0x4F1491A5L, 0x31E4DAEEL, 0x4F1491A5L, 0x31E4DAEEL, 0x4F1491A5L, 0x31E4DAEEL, 0x4F1491A5L, 0x31E4DAEEL};
        int l_812 = 0x7201B274L;
        unsigned short l_838[7][2] = {{0xE2F3L, 0x764EL}, {0xE2F3L, 0x764EL}, {0xE2F3L, 0x764EL}, {0xE2F3L, 0x764EL}, {0xE2F3L, 0x764EL}, {0xE2F3L, 0x764EL}, {0xE2F3L, 0x764EL}};
        char ***l_845 = &g_301[5][1][0];
        int *l_849 = &g_447;
        struct S0 *l_854 = &g_855;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 7; j++)
                l_800[i][j] = &g_241[0];
        }
        for (l_657 = 0; l_657 < 7; l_657 += 1)
        {
            l_594[l_657] = 18446744073709551615UL;
        }
        if ((((((l_461 = ((p_36 ^ p_33) , ((((safe_div_func_uint8_t_u_u(p_34, ((((safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((l_795[7] , (0x0194L & (7L == ((g_74[7] = p_36) == ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((l_795[7].f3 , 0x2106L) ^ 1L) & 0x8FL), 0x9E6BL)), g_108)) & p_36))))), 13)), p_36)), p_33)) ^ (*g_448)) & 0x3BL) , p_34))) == (-3L)) || 0UL) , l_795[7].f0))) || p_34) > p_34) || l_801[8]) < l_795[7].f0))
        {
            char l_808[8] = {(-1L), 0L, (-1L), 0L, (-1L), 0L, (-1L), 0L};
            short *l_810 = &g_611;
            int *l_811[4] = {&l_477[6], &l_477[9], &l_477[6], &l_477[9]};
            unsigned char **l_813 = &l_671[0];
            int *l_814 = &l_657;
            const int l_831 = 0L;
            unsigned char l_842[6][6][5] = {{{1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}}, {{1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}}, {{1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}}, {{1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}}, {{1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}}, {{1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}, {1UL, 1UL, 0x85L, 1UL, 0x5AL}}};
            char ** const *l_846[4] = {&g_301[5][1][0], &g_301[3][1][0], &g_301[5][1][0], &g_301[3][1][0]};
            int i, j, k;
            (*l_460) = (*g_120);
            (*l_814) = (safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint8_t_u_u(l_801[8], (((*g_448) >= (*g_107)) || (safe_mul_func_uint8_t_u_u((g_809 = l_808[5]), ((l_812 = ((void*)0 != l_810)) , (((l_801[8] >= (-10L)) | p_36) , 0x92L))))))) , l_813) != l_813), 7));
            (*g_120) = (void*)0;
            if ((safe_div_func_int8_t_s_s(p_36, (*l_814))))
            {
                unsigned *l_836 = &g_837[1];
                int l_840[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_840[i] = 7L;
                l_842[2][1][2] = (1L > (safe_sub_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((*l_814) = (l_800[0][4] != (void*)0)) || (safe_add_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((*g_103) = ((((safe_mod_func_uint16_t_u_u(65535UL, (safe_sub_func_uint16_t_u_u(l_795[7].f2, (safe_sub_func_int32_t_s_s(l_831, (7UL || (*g_107)))))))) , (void*)0) != (void*)0) != l_841)), 0L)), p_36))), 4294967292UL)), (*g_470))));
                (*l_814) = func_67(g_762[1], (((*g_107) & ((((safe_rshift_func_int16_t_s_u((g_224[4][8] && ((*l_814) , (**l_460))), 10)) >= 0xCB8D1862L) , l_845) != l_846[0])) , ((*l_814) , 250UL)));
                (*g_120) = (*g_120);
                (*l_460) = l_811[3];
            }
            else
            {
                for (g_537.f3 = 0; (g_537.f3 == 25); ++g_537.f3)
                {
                    l_849 = (*l_460);
                    l_812 = (-2L);
                    if ((**l_460))
                        continue;
                }
                for (l_461 = (-3); (l_461 <= (-17)); l_461 = safe_sub_func_int32_t_s_s(l_461, 8))
                {
                    (*g_120) = (void*)0;
                }
            }
        }
        else
        {
            int *l_852 = &g_76[1];
            struct S0 **l_853 = (void*)0;
            l_852 = ((*l_460) = &l_801[8]);
            l_854 = &g_99;
        }
        l_856 = &l_795[7];
    }
    (*l_859) = l_858;
    (*l_861) = g_860;
    g_447 = (p_35 , (g_102 , func_37(g_753, (**l_859))));
    return p_34;
}







static unsigned char func_37(const struct S0 p_38, short p_39)
{
    int *l_397 = &g_2[5];
    int l_410 = (-9L);
    unsigned short l_411 = 1UL;
    const unsigned char *l_421 = (void*)0;
    char ***l_445 = &g_301[5][1][0];
    char ****l_444 = &l_445;
    (*g_120) = (void*)0;
    (*g_120) = l_397;
    for (g_238 = 1; (g_238 >= 0); g_238 -= 1)
    {
        return p_39;
    }
    for (g_102 = 0; (g_102 <= 1); g_102 += 1)
    {
        int **l_404 = &g_107;
        const int *l_406 = &g_246[1];
        const int **l_405 = &l_406;
        int *l_409[4][5] = {{(void*)0, (void*)0, &g_2[2], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_2[2], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_2[2], (void*)0, (void*)0}, {(void*)0, (void*)0, &g_2[2], (void*)0, (void*)0}};
        unsigned char l_412 = 0x86L;
        int l_413 = 0x19E901CEL;
        unsigned char *** const l_414 = (void*)0;
        char *l_415 = &g_108;
        short *l_416 = &g_224[7][0];
        struct S0 *l_418 = &g_99;
        struct S0 **l_417 = &l_418;
        const unsigned char **l_422[3][9][5] = {{{&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}}, {{&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}}, {{&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}, {&l_421, &l_421, &l_421, (void*)0, &l_421}}};
        const unsigned char *l_425 = &g_99.f3;
        int i, j, k;
        (*l_417) = ((g_238 = (safe_lshift_func_int16_t_s_u((safe_mul_func_uint8_t_u_u((((((*l_397) , ((g_76[1] = func_44(g_5, ((*l_416) = (safe_mod_func_uint16_t_u_u((*l_397), (((*l_415) = ((((*l_404) = ((*g_120) = (*g_120))) != ((*l_405) = l_397)) & (((safe_sub_func_int8_t_s_s(0x00L, ((l_410 = p_38.f3) , (((g_76[1] = (l_412 = ((*l_397) , (((g_99 , (*l_397)) , (*l_397)) >= l_411)))) ^ g_241[0]) && l_413)))) , l_414) == (void*)0))) , (*l_397))))))) <= (-8L))) != p_38.f0) , 0x6206B516L) , 248UL), 0x13L)), 7))) , &g_99);
        l_410 = (safe_add_func_uint16_t_u_u(0UL, ((g_423[5][0][1] = l_421) != &g_74[7])));
        for (l_410 = 0; (l_410 <= 1); l_410 += 1)
        {
            const unsigned l_428 = 18446744073709551614UL;
            unsigned short l_435 = 0UL;
            int l_436 = 0xE92C05F9L;
            char ****l_446 = &l_445;
            (*l_404) = (*l_404);
            for (g_238 = 0; (g_238 <= 1); g_238 += 1)
            {
                int l_429 = 5L;
                int i, j, k;
                if (p_38.f3)
                    break;
                if ((func_67((*l_418), p_38.f1) , (~((&g_74[7] != l_425) && (safe_sub_func_int16_t_s_s((-1L), ((l_428 == l_429) >= (0x89L == p_38.f2))))))))
                {
                    int *l_432 = (void*)0;
                    for (l_411 = 0; (l_411 <= 55); l_411++)
                    {
                        unsigned short l_437 = 65528UL;
                        (*l_404) = &l_410;
                        l_432 = (void*)0;
                        (*l_405) = (*l_405);
                        (*l_405) = (((safe_div_func_uint8_t_u_u(l_435, ((((l_436 = (p_38.f3 ^ (*g_107))) && (l_437 , (safe_add_func_uint16_t_u_u((((safe_sub_func_uint16_t_u_u(((0x8306L ^ 0xD696L) <= (l_444 == l_446)), ((0x71B0L ^ (*l_397)) ^ 0xD51FL))) , g_447) , 0x71EFL), p_38.f3)))) , g_246[0]) , l_429))) , l_437) , (*g_120));
                    }
                    return p_38.f2;
                }
                else
                {
                    g_448 = ((*l_405) = (*g_120));
                    (*l_404) = (void*)0;
                    (*l_404) = (*g_120);
                    return p_38.f2;
                }
            }
        }
    }
    return p_38.f1;
}







static struct S0 func_40(char p_41, unsigned p_42, struct S0 p_43)
{
    int *l_394 = (void*)0;
    int *l_395 = &g_76[1];
    struct S0 l_396 = {1UL,0x6F7B9838L,255UL,0xCDL};
    (*g_120) = l_394;
    (*l_395) = p_42;
    return l_396;
}







static char func_44(unsigned p_45, short p_46)
{
    struct S0 l_392[3][2] = {{{0UL,0UL,0x7FL,0xDDL}, {0UL,0UL,0x7FL,0xDDL}}, {{0UL,0UL,0x7FL,0xDDL}, {0UL,0UL,0x7FL,0xDDL}}, {{0UL,0UL,0x7FL,0xDDL}, {0UL,0UL,0x7FL,0xDDL}}};
    int *l_393 = &g_76[1];
    int i, j;
    l_393 = (func_67(l_392[2][1], p_46) , (*g_120));
    return p_45;
}







static unsigned char func_48(unsigned p_49, const int p_50, unsigned short p_51, const unsigned char p_52, unsigned short p_53)
{
    int *l_80[10] = {&g_76[0], &g_5, &g_2[5], &g_2[5], &g_5, &g_76[0], &g_5, &g_2[5], &g_2[5], &g_5};
    struct S0 l_86 = {0xCDC5007CL,0UL,250UL,7UL};
    unsigned short l_89[3][8][1] = {{{0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}}, {{0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}}, {{0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}, {0xEDFCL}}};
    unsigned short *l_100[5][4][8] = {{{&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}}, {{&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}}, {{&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}}, {{&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}}, {{&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}, {&l_89[2][5][0], (void*)0, &g_57, &l_89[1][3][0], &g_57, &g_57, &l_89[0][2][0], &g_57}}};
    char *l_101[6];
    int **l_122[1][4] = {{&l_80[8], &l_80[8], &l_80[8], &l_80[8]}};
    char l_229 = 0x80L;
    unsigned l_271[1];
    const int *l_391 = (void*)0;
    const int **l_390 = &l_391;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_101[i] = &g_102;
    for (i = 0; i < 1; i++)
        l_271[i] = 0xEF343DA4L;
    g_81 = l_80[8];
    if ((p_50 , ((((safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_s(((((((func_67(l_86, (g_76[1] | p_49)) != p_50) , (safe_mul_func_int16_t_s_s((l_89[2][5][0] , ((safe_rshift_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((p_49 | (safe_unary_minus_func_uint16_t_u((+(safe_mul_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(((g_102 = ((g_57 = (p_53 = func_67(g_99, p_51))) , 0xDCL)) < g_2[2]), 0x28L)), 255UL)))))) > g_5), g_2[6])) >= g_2[3]), g_2[7])) > 1UL)), g_99.f1))) , p_52) != g_2[6]) , &p_53) != g_103), g_104[1][2])), g_104[3][1])) , g_2[6]) , l_80[7]) != &p_50)))
    {
        int **l_105 = &l_80[9];
        (*l_105) = (void*)0;
    }
    else
    {
        int **l_106[6] = {&l_80[8], (void*)0, &l_80[8], (void*)0, &l_80[8], (void*)0};
        unsigned l_117 = 4294967295UL;
        int ***l_121[8][6][5] = {{{&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}}, {{&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}}, {{&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}}, {{&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}}, {{&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}}, {{&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}}, {{&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}}, {{&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}, {&l_106[0], &l_106[4], &g_120, &g_120, &g_120}}};
        unsigned *l_123 = &l_117;
        struct S0 l_128[6][7][4] = {{{{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}}, {{{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}}, {{{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}}, {{{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}}, {{{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}}, {{{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}, {{0x86218FE4L,8UL,1UL,0UL}, {0x93F61EF6L,0x7C72CAAAL,0xE9L,0xD5L}, {0x86218FE4L,8UL,1UL,0UL}, {0x7EE216E9L,0x38868497L,0UL,4UL}}}};
        unsigned l_167 = 0xABB2B166L;
        char *l_183[8][9][3] = {{{&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}}, {{&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}}, {{&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}}, {{&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}}, {{&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}}, {{&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}}, {{&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}}, {{&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}, {&g_102, &g_108, &g_108}}};
        unsigned l_198 = 1UL;
        int *l_215 = &g_76[1];
        int l_234 = 4L;
        short l_296 = 0L;
        int l_313 = (-1L);
        int i, j, k;
        g_107 = (g_81 = l_80[1]);
        g_108 = (((g_99 , p_51) , (p_52 , &g_102)) != (void*)0);
        if ((safe_sub_func_int32_t_s_s((safe_mul_func_int8_t_s_s((((*l_123) = ((safe_rshift_func_uint16_t_u_u(((void*)0 != &l_80[8]), (safe_lshift_func_uint8_t_u_u((l_117 >= (safe_mod_func_int8_t_s_s(0L, g_99.f2))), 7)))) , (p_50 || ((l_122[0][3] = g_120) != &g_107)))) <= (safe_lshift_func_uint16_t_u_s(((safe_mul_func_uint16_t_u_u((func_67(l_128[1][2][0], p_52) ^ g_99.f0), p_52)) , 65535UL), g_104[2][6]))), g_2[2])), g_2[2])))
        {
            unsigned l_142[8] = {18446744073709551615UL, 5UL, 18446744073709551615UL, 5UL, 18446744073709551615UL, 5UL, 18446744073709551615UL, 5UL};
            int l_147 = 0xE46C1132L;
            int *l_168 = &l_147;
            int i;
            for (g_99.f0 = (-8); (g_99.f0 == 56); g_99.f0++)
            {
                struct S0 l_139 = {18446744073709551608UL,0xE3B96202L,0x0DL,3UL};
                l_142[4] = ((g_76[1] = (((*l_123) = (g_104[4][6] , (p_50 > p_53))) || (safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((func_67(((safe_lshift_func_int8_t_s_s((-6L), 7)) , l_139), g_99.f0) > g_2[8]), (safe_add_func_int8_t_s_s(l_139.f1, p_51)))), 9)) ^ 0xDEL) > 0xC8L), p_49)))) , 0x3B8200A1L);
            }
            for (l_86.f0 = (-25); (l_86.f0 > 6); l_86.f0 = safe_add_func_uint16_t_u_u(l_86.f0, 9))
            {
                struct S0 l_152 = {4UL,0xE93CE301L,0xE8L,252UL};
                int **l_153 = (void*)0;
                int l_164 = 0x4476C789L;
                for (p_49 = 0; (p_49 <= 4); p_49 += 1)
                {
                    return p_53;
                }
                for (g_99.f0 = 22; (g_99.f0 > 9); g_99.f0 = safe_sub_func_uint32_t_u_u(g_99.f0, 5))
                {
                    unsigned short *l_161 = &l_89[2][5][0];
                    int l_162 = 0xE7DC0190L;
                    struct S0 l_163[8] = {{0UL,0x1515BE2FL,0UL,1UL}, {0UL,0x1515BE2FL,0UL,1UL}, {0UL,0x1515BE2FL,0UL,1UL}, {0UL,0x1515BE2FL,0UL,1UL}, {0UL,0x1515BE2FL,0UL,1UL}, {0UL,0x1515BE2FL,0UL,1UL}, {0UL,0x1515BE2FL,0UL,1UL}, {0UL,0x1515BE2FL,0UL,1UL}};
                    short l_165 = (-6L);
                    int i;
                    l_147 = p_53;
                    for (g_108 = (-27); (g_108 <= (-22)); g_108 = safe_add_func_uint8_t_u_u(g_108, 5))
                    {
                        short l_154[3][5] = {{0x7165L, 0x7165L, 0x1C3EL, 1L, 0x8618L}, {0x7165L, 0x7165L, 0x1C3EL, 1L, 0x8618L}, {0x7165L, 0x7165L, 0x1C3EL, 1L, 0x8618L}};
                        int i, j;
                        l_147 = (func_67(g_99, g_104[2][6]) <= (safe_add_func_int32_t_s_s(0xC6000169L, (((((l_154[0][0] = (247UL ^ ((l_152 , ((l_153 != &g_107) != p_51)) | p_51))) & g_2[5]) ^ 0x5AL) , p_52) , g_5))));
                        l_164 = ((safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(0xD151L, (&g_120 != &l_122[0][3]))), (((&p_51 != (((safe_lshift_func_uint16_t_u_s(p_49, 9)) > 0x611CL) , l_161)) , l_162) , func_67(l_163[7], p_51)))) > l_142[4]);
                        l_164 = g_76[1];
                    }
                    (*g_120) = (*g_120);
                    l_147 = ((((((p_53 & (func_67(l_163[5], (0x8B215FF5L & 4294967295UL)) , p_51)) < p_52) < l_163[7].f3) < (g_2[6] || p_50)) == p_49) & l_165);
                }
            }
            for (l_86.f2 = 0; (l_86.f2 <= 0); l_86.f2 += 1)
            {
                int l_166 = 0x780F6304L;
                l_167 = l_166;
                return g_99.f0;
            }
            l_168 = (*g_120);
        }
        else
        {
            unsigned l_169[9] = {0x7D68A634L, 18446744073709551610UL, 0x7D68A634L, 18446744073709551610UL, 0x7D68A634L, 18446744073709551610UL, 0x7D68A634L, 18446744073709551610UL, 0x7D68A634L};
            int l_170 = (-1L);
            int *l_216 = &g_76[1];
            short *l_223 = &g_224[4][8];
            unsigned short ** const *l_295 = &g_274;
            char ** const *l_311 = (void*)0;
            struct S0 l_314 = {1UL,0x7D360CBAL,0x65L,248UL};
            int i;
            l_170 = l_169[8];
            if ((safe_lshift_func_uint16_t_u_s((((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_div_func_int8_t_s_s(((g_102 = ((((!((p_50 > p_53) && ((0xCEC3L || ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(0x8254L, 3)), ((void*)0 == l_80[8]))) , func_67(l_128[0][0][0], l_169[8]))) || (-5L)))) || p_52) , l_183[4][6][2]) == (void*)0)) > 0x2FL), g_99.f2)), 246UL)), l_169[3])) <= 3UL) , 0xB234L), 12)))
            {
                return g_76[1];
            }
            else
            {
                int *l_184[4];
                unsigned l_192 = 4294967286UL;
                struct S0 l_197[3][1] = {{{0UL,0x112C0037L,255UL,253UL}}, {{0UL,0x112C0037L,255UL,253UL}}, {{0UL,0x112C0037L,255UL,253UL}}};
                int i, j;
                for (i = 0; i < 4; i++)
                    l_184[i] = &g_76[1];
                g_76[1] = p_52;
                l_184[3] = (void*)0;
                for (p_53 = (-15); (p_53 >= 37); p_53 = safe_add_func_uint16_t_u_u(p_53, 1))
                {
                    int ** const l_212 = (void*)0;
                    (*g_120) = (*g_120);
                    l_198 = (0xC9L >= (safe_unary_minus_func_int8_t_s((((((safe_div_func_uint16_t_u_u(l_170, (0x27L ^ ((((+(safe_mul_func_int8_t_s_s(l_192, ((p_53 != (safe_rshift_func_uint8_t_u_s(p_50, (safe_add_func_int8_t_s_s(0x67L, p_50))))) <= 4294967295UL)))) < l_170) , l_197[0][0]) , 0L)))) | 0x15L) || (*g_103)) < 0x4B2F69E9L) == p_50))));
                    if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((g_76[1] ^ (0x8DL == (5UL == p_49))), p_50)), p_52)), (g_108 ^ ((safe_mul_func_uint8_t_u_u(g_57, ((1L <= p_50) , 0UL))) , p_51)))))
                    {
                        unsigned short l_207 = 0x2470L;
                        l_207 = g_99.f3;
                    }
                    else
                    {
                        g_76[1] = ((void*)0 == &p_49);
                        return g_99.f0;
                    }
                    l_170 = (((l_169[8] , (0xE331L && (safe_rshift_func_int16_t_s_s((safe_sub_func_int16_t_s_s(g_76[1], (l_212 == &l_184[3]))), p_51)))) <= (p_51 || (-10L))) | (safe_div_func_int16_t_s_s(g_104[2][6], p_53)));
                }
            }
            l_216 = l_215;
            if ((safe_mod_func_uint8_t_u_u(((p_51 , ((g_57 = ((*g_103) = (safe_rshift_func_int16_t_s_s(p_52, ((*l_223) = (0x5354L != (g_2[2] | (safe_lshift_func_int8_t_s_s(g_99.f3, 0))))))))) < (g_102 ^ (*l_216)))) & (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(g_108, (0x5AB35124L <= l_229))), p_53))), p_53)))
            {
                unsigned char l_239 = 255UL;
                short *l_240[8][8][4] = {{{&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}}, {{&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}}, {{&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}}, {{&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}}, {{&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}}, {{&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}}, {{&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}}, {{&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}, {&g_241[0], &g_241[0], &g_241[1], &g_241[1]}}};
                unsigned char *l_242 = &l_239;
                int l_243[10] = {1L, (-5L), 1L, (-5L), 1L, (-5L), 1L, (-5L), 1L, (-5L)};
                const int *l_245 = &g_246[1];
                const int **l_244 = &l_245;
                const int **l_247 = (void*)0;
                const int *l_249 = (void*)0;
                const int **l_248 = &l_249;
                struct S0 l_270[4] = {{3UL,0x76B5FFADL,255UL,1UL}, {3UL,0x76B5FFADL,255UL,1UL}, {3UL,0x76B5FFADL,255UL,1UL}, {3UL,0x76B5FFADL,255UL,1UL}};
                int i, j, k;
                (*l_215) = (safe_div_func_int32_t_s_s(((g_76[1] , (safe_rshift_func_uint16_t_u_s(0xC11CL, 12))) == l_234), ((*l_216) && (l_243[2] = ((&l_117 == &p_49) < ((*l_242) = (((safe_unary_minus_func_int32_t_s((-1L))) != (g_241[0] = ((*l_223) = ((g_238 = p_49) > ((*l_123) = l_239))))) ^ (*g_103))))))));
                (*l_248) = ((*l_244) = (*g_120));
                if (((*l_215) = p_50))
                {
                    int l_262[3];
                    unsigned short **l_273[6][9][4] = {{{&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}}, {{&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}}, {{&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}}, {{&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}}, {{&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}}, {{&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}, {&g_103, &l_100[4][2][1], &g_103, &g_103}}};
                    unsigned short ***l_272[9][1][1];
                    int i, j, k;
                    for (i = 0; i < 3; i++)
                        l_262[i] = (-2L);
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_272[i][j][k] = &l_273[2][2][3];
                        }
                    }
                    for (l_234 = 0; (l_234 == (-10)); l_234 = safe_sub_func_int16_t_s_s(l_234, 3))
                    {
                        short l_267[7][10][3] = {{{2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}}, {{2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}}, {{2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}}, {{2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}}, {{2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}}, {{2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}}, {{2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}, {2L, (-1L), 0x5A8EL}}};
                        int i, j, k;
                        (*l_215) = (safe_sub_func_int16_t_s_s(g_99.f3, (g_76[1] , ((safe_rshift_func_int16_t_s_s(((safe_div_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(g_246[1], (l_262[1] , func_67(g_99, (safe_mul_func_uint8_t_u_u(1UL, (l_267[1][6][2] < ((g_99 , (safe_lshift_func_uint16_t_u_s((func_67(l_270[1], l_267[1][6][2]) == p_50), g_241[0]))) >= p_50)))))))), p_49)), 0xBDA3L)) , l_267[2][1][0]), 9)) & 0x9BCAL))));
                        if (l_271[0])
                            continue;
                        (*l_244) = (void*)0;
                    }
                    g_76[0] = (((*l_242) = 0xC0L) , p_53);
                    g_274 = (void*)0;
                    l_262[1] = func_67(l_86, (g_238 < ((*l_242) = (safe_add_func_int8_t_s_s((l_243[2] = (safe_mod_func_uint16_t_u_u(((func_67(g_99, (func_67(g_99, g_246[0]) != ((~((p_49 , (void*)0) == &g_120)) && 0x58L))) , p_52) ^ (*g_103)), g_246[0]))), 0xD4L)))));
                }
                else
                {
                    const char l_286 = 4L;
                    char **l_304 = &l_183[4][6][2];
                    char ***l_303 = &l_304;
                    char ** const **l_312 = &l_311;
                    (*l_216) = 0x4CF8597AL;
                    for (g_108 = 0; (g_108 < 3); g_108 = safe_add_func_int32_t_s_s(g_108, 1))
                    {
                        char **l_282 = &l_183[4][6][2];
                        char ***l_281 = &l_282;
                        int *l_283 = &l_243[8];
                        (*l_281) = (p_49 , &l_183[4][6][2]);
                        l_283 = (*g_120);
                        (*l_215) = ((safe_add_func_int16_t_s_s((l_286 | ((*l_242) = (safe_sub_func_int16_t_s_s(func_67(l_86, ((*l_242) = p_49)), (safe_add_func_int32_t_s_s(p_52, (((*l_223) = p_49) != (((g_238 == ((safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u(((*g_103) = (((g_99 , l_295) == &g_274) && 0x4A642242L)), 0x1070L)) || l_296), 0xE66737B5L)) | 0xF5L)) >= p_49) && p_50)))))))), g_246[1])) <= g_2[8]);
                    }
                    if (((~((*l_123) = ((safe_add_func_int16_t_s_s(((safe_div_func_int16_t_s_s((g_301[5][1][0] == ((*l_303) = &g_302[0])), p_52)) ^ (0x0994L != g_102)), (safe_mul_func_uint16_t_u_u((((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((l_313 = (((*l_312) = l_311) != &g_301[5][2][0])), (func_67(l_314, g_104[0][5]) <= p_53))), g_224[2][6])) , 0UL) || 0x95F7AF6CL), (**g_274))))) && (**g_274)))) <= 0x515F5421L))
                    {
lbl_327:
                        (*g_120) = (*g_120);
                    }
                    else
                    {
                        struct S0 l_317[2] = {{8UL,18446744073709551615UL,9UL,1UL}, {8UL,18446744073709551615UL,9UL,1UL}};
                        int l_326 = 0xB4A5A0E8L;
                        int i;
                        (*l_248) = &p_50;
                        (*l_215) = (p_53 > (safe_sub_func_int8_t_s_s(func_67(l_317[0], g_99.f3), (l_326 = (safe_add_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((l_317[0].f1 > p_53) <= (safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u(p_53, g_238)), 0xD3893CB7L))), p_52)), g_2[0]))))));
                        (*l_244) = &p_50;
                        (*l_215) = func_67(l_128[5][6][2], p_53);
                    }
                    if (g_108)
                        goto lbl_327;
                }
            }
            else
            {
                unsigned l_342 = 18446744073709551615UL;
                unsigned char *l_343 = &l_86.f2;
                int l_344 = 5L;
                unsigned char *l_345 = &g_74[7];
                int *l_353 = &l_313;
                unsigned char l_386 = 3UL;
                (*g_120) = (*g_120);
                if (((safe_unary_minus_func_int8_t_s(((p_53 || func_67(l_128[2][1][3], ((*l_345) = (((safe_unary_minus_func_int32_t_s(0x4DABD73BL)) > ((safe_mul_func_int8_t_s_s((l_344 = (((*l_343) = (safe_mul_func_uint16_t_u_u((+(((*l_223) = (safe_add_func_uint32_t_u_u(((**g_274) , ((*l_123) = (safe_add_func_int8_t_s_s((func_67(g_99, g_246[0]) == (((((((safe_add_func_int16_t_s_s((g_2[2] || ((safe_mod_func_int8_t_s_s((p_50 >= p_51), 247UL)) , 0x7B88BF53L)), p_53)) , p_49) || 0L) | p_50) || l_342) & 0x8732D33CL) && p_50)), p_52)))), g_104[3][4]))) >= p_52)), (*g_103)))) <= g_57)), 2L)) & 0xEEL)) , 1UL)))) , p_52))) , 0x6F2CCC6CL))
                {
                    const short l_348 = 8L;
                    int l_349 = 0x445092B7L;
                    l_349 = (safe_rshift_func_uint8_t_u_s(l_348, 1));
                }
                else
                {
                    int l_361 = 0x70CA0616L;
                    for (l_342 = 1; (l_342 <= 5); l_342 += 1)
                    {
                        struct S0 l_350 = {0x8F76C67BL,0xCAF0863EL,247UL,4UL};
                        (*l_215) = func_67(l_350, l_350.f1);
                        (*g_120) = (l_353 = ((safe_sub_func_uint8_t_u_u(p_51, func_67(g_99, g_104[1][3]))) , (*g_120)));
                    }
                    for (l_344 = (-9); (l_344 > (-22)); --l_344)
                    {
                        unsigned char **l_358[5][4] = {{&l_345, &l_343, &l_345, &l_343}, {&l_345, &l_343, &l_345, &l_343}, {&l_345, &l_343, &l_345, &l_343}, {&l_345, &l_343, &l_345, &l_343}, {&l_345, &l_343, &l_345, &l_343}};
                        unsigned char ***l_357 = &l_358[2][3];
                        struct S0 *l_360 = &l_128[1][2][0];
                        struct S0 **l_359 = &l_360;
                        int i, j;
                        (*l_357) = g_356;
                        (*l_216) = p_53;
                        (*l_359) = &l_314;
                        if (l_361)
                            break;
                    }
                    if (((((*l_123) = ((safe_rshift_func_int8_t_s_s((l_344 = 0x5EL), ((((!(p_50 <= 4294967294UL)) , &g_99) == (void*)0) != (safe_rshift_func_uint8_t_u_u(g_76[1], 3))))) < 4294967295UL)) , (safe_mod_func_int16_t_s_s((((*l_223) = func_67(g_99, g_104[2][0])) >= 0xA2FAL), g_102))) > (**g_274)))
                    {
                        unsigned short ***l_368 = (void*)0;
                        unsigned short ***l_369 = &g_274;
                        const int *l_371 = &g_246[1];
                        const int **l_370 = &l_371;
                        const int **l_372 = (void*)0;
                        const int *l_374 = &l_234;
                        const int **l_373 = &l_374;
                        (*l_369) = (*l_295);
                        g_107 = ((*g_120) = (*g_120));
                        (*l_373) = ((*l_370) = (*g_120));
                    }
                    else
                    {
                        unsigned short l_387 = 8UL;
                        const int *l_389 = &l_234;
                        const int **l_388 = &l_389;
                        (*l_216) = (safe_rshift_func_int16_t_s_u(((g_377 = g_5) , (p_52 && (l_361 , (*l_216)))), 3));
                        (*l_388) = ((((*l_215) = (safe_add_func_uint16_t_u_u((p_49 != (p_50 != (-2L))), g_224[6][7]))) , (safe_mod_func_int32_t_s_s(((((((((safe_mod_func_uint8_t_u_u(246UL, (((safe_rshift_func_uint8_t_u_s((*l_216), 6)) > p_52) & (3L | (*l_216))))) != l_386) == l_361) | (*l_215)) || l_361) || l_342) > p_52) == (-9L)), l_387))) , &p_50);
                    }
                }
                return p_52;
            }
        }
    }
    (*l_390) = &p_50;
    (*l_390) = &p_50;
    return p_51;
}







static int func_67(struct S0 p_68, unsigned char p_69)
{
    unsigned l_73 = 0xDEDC29BFL;
    int *l_77 = &g_2[2];
    int *l_78 = &g_76[1];
    for (p_69 = (-4); (p_69 <= 49); p_69 = safe_add_func_int32_t_s_s(p_69, 1))
    {
        int *l_75 = &g_76[1];
        (*l_75) = (g_74[7] = l_73);
        if (g_76[0])
            continue;
    }
    (*l_78) = (l_77 == (void*)0);
    l_77 = l_77;
    return g_2[6];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_76[i], "g_76[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_99.f2, "g_99.f2", print_hash_value);
    transparent_crc(g_99.f3, "g_99.f3", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_104[i][j], "g_104[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_108, "g_108", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_224[i][j], "g_224[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_238, "g_238", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_241[i], "g_241[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_246[i], "g_246[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_377, "g_377", print_hash_value);
    transparent_crc(g_424, "g_424", print_hash_value);
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_537.f0, "g_537.f0", print_hash_value);
    transparent_crc(g_537.f1, "g_537.f1", print_hash_value);
    transparent_crc(g_537.f2, "g_537.f2", print_hash_value);
    transparent_crc(g_537.f3, "g_537.f3", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_730, "g_730", print_hash_value);
    transparent_crc(g_753.f0, "g_753.f0", print_hash_value);
    transparent_crc(g_753.f1, "g_753.f1", print_hash_value);
    transparent_crc(g_753.f2, "g_753.f2", print_hash_value);
    transparent_crc(g_753.f3, "g_753.f3", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_762[i].f0, "g_762[i].f0", print_hash_value);
        transparent_crc(g_762[i].f1, "g_762[i].f1", print_hash_value);
        transparent_crc(g_762[i].f2, "g_762[i].f2", print_hash_value);
        transparent_crc(g_762[i].f3, "g_762[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_809, "g_809", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_837[i], "g_837[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_839, "g_839", print_hash_value);
    transparent_crc(g_855.f0, "g_855.f0", print_hash_value);
    transparent_crc(g_855.f1, "g_855.f1", print_hash_value);
    transparent_crc(g_855.f2, "g_855.f2", print_hash_value);
    transparent_crc(g_855.f3, "g_855.f3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_857[i].f0, "g_857[i].f0", print_hash_value);
        transparent_crc(g_857[i].f1, "g_857[i].f1", print_hash_value);
        transparent_crc(g_857[i].f2, "g_857[i].f2", print_hash_value);
        transparent_crc(g_857[i].f3, "g_857[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_895[i][j], "g_895[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1025, "g_1025", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_1031[i], "g_1031[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_1130[i].f0, "g_1130[i].f0", print_hash_value);
        transparent_crc(g_1130[i].f1, "g_1130[i].f1", print_hash_value);
        transparent_crc(g_1130[i].f2, "g_1130[i].f2", print_hash_value);
        transparent_crc(g_1130[i].f3, "g_1130[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1192.f0, "g_1192.f0", print_hash_value);
    transparent_crc(g_1192.f1, "g_1192.f1", print_hash_value);
    transparent_crc(g_1192.f2, "g_1192.f2", print_hash_value);
    transparent_crc(g_1192.f3, "g_1192.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
