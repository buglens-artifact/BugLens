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



static int g_2 = 5L;
static int g_10[5] = {0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L,0x23D1BCA9L};
static int g_15 = 0x868BB4AAL;
static const int *g_61 = &g_2;
static const int **g_60 = &g_61;
static unsigned char g_73 = 0xC0L;
static unsigned g_75 = 0x1CD4EE3BL;
static int g_78[2][10][6] = {{{(-1L),(-1L),6L,0L,0x746B3257L,8L},{0x85E09B70L,6L,1L,8L,1L,6L},{0L,0x85E09B70L,1L,(-2L),(-1L),8L},{1L,(-2L),6L,6L,(-2L),1L},{6L,(-2L),1L,0L,(-1L),1L},{1L,0x85E09B70L,0L,0x85E09B70L,1L,(-2L)},{1L,6L,0x85E09B70L,0L,0x746B3257L,0x430F0C86L},{0L,(-2L),(-2L),0L,1L,0x430F0C86L},{0x746B3257L,0x430F0C86L,(-1L),1L,0x85E09B70L,1L},{1L,8L,1L,6L,0x85E09B70L,0L}},{{(-1L),0x430F0C86L,0x746B3257L,1L,1L,0x746B3257L},{(-2L),(-2L),0L,1L,0x430F0C86L,6L},{(-1L),0L,0L,6L,0L,0L},{1L,(-1L),0L,1L,(-2L),6L},{0x746B3257L,1L,0L,0L,1L,0x746B3257L},{0L,1L,0x746B3257L,0x85E09B70L,(-2L),0L},{0L,(-1L),1L,(-1L),0L,1L},{0L,0L,(-1L),0x85E09B70L,0x430F0C86L,0x430F0C86L},{0L,(-2L),(-2L),0L,1L,0x430F0C86L},{0x746B3257L,0x430F0C86L,(-1L),1L,0x85E09B70L,1L}}};
static int g_81 = 4L;
static long long g_104 = 1L;
static unsigned *g_108[1][10] = {{(void*)0,&g_75,&g_75,(void*)0,&g_75,&g_75,(void*)0,&g_75,&g_75,(void*)0}};
static unsigned **g_107 = &g_108[0][8];
static int g_110 = 0x874B34BCL;
static int *g_114 = &g_110;
static const unsigned g_150 = 0xA9BCAD3CL;
static unsigned long long g_159[4][8] = {{0xB3A25EAEA3312545LL,0xD931822BFEBDF65DLL,0xB3A25EAEA3312545LL,0xB3A25EAEA3312545LL,0xD931822BFEBDF65DLL,0xB3A25EAEA3312545LL,0xB3A25EAEA3312545LL,0xD931822BFEBDF65DLL},{0xD931822BFEBDF65DLL,0xB3A25EAEA3312545LL,0xB3A25EAEA3312545LL,0xD931822BFEBDF65DLL,0xB3A25EAEA3312545LL,0xB3A25EAEA3312545LL,0xD931822BFEBDF65DLL,0xB3A25EAEA3312545LL},{0xD931822BFEBDF65DLL,0xD931822BFEBDF65DLL,0UL,0xD931822BFEBDF65DLL,0xD931822BFEBDF65DLL,0UL,0xD931822BFEBDF65DLL,0xD931822BFEBDF65DLL},{0xB3A25EAEA3312545LL,0xD931822BFEBDF65DLL,0xB3A25EAEA3312545LL,0xB3A25EAEA3312545LL,0xD931822BFEBDF65DLL,0xB3A25EAEA3312545LL,0xB3A25EAEA3312545LL,0xD931822BFEBDF65DLL}};
static const char g_169[9] = {0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL,0xEEL};
static unsigned long long g_188 = 0x41F7FF8115B1135BLL;
static unsigned short g_236 = 0x12BAL;
static long long g_238 = 0xEA0DCDEADA25E56ELL;
static char g_254 = 0xFDL;
static int g_297[7][7] = {{1L,0x5D26275CL,0x7FDA55CEL,3L,(-1L),0x94B1C128L,(-1L)},{(-10L),1L,1L,(-10L),0xAEE22B1FL,0x89DD1D02L,(-1L)},{(-10L),0x94B1C128L,(-10L),0x5D26275CL,(-1L),0x7139CEE8L,1L},{1L,0xAEE22B1FL,(-1L),6L,0x7FDA55CEL,6L,(-1L)},{0x7FDA55CEL,0x7FDA55CEL,0xA7E32EA3L,(-1L),0x7139CEE8L,6L,(-1L)},{3L,0xA7E32EA3L,(-1L),1L,1L,0x7139CEE8L,0x94B1C128L},{6L,0x89DD1D02L,0x7139CEE8L,(-1L),0x7139CEE8L,0x89DD1D02L,6L}};
static short *g_322 = (void*)0;
static short g_368 = (-8L);
static char g_383 = (-6L);
static short g_407 = (-3L);
static unsigned g_465 = 4294967291UL;
static int *g_481 = (void*)0;
static int **g_480 = &g_481;
static int *g_529[7][2][10] = {{{&g_15,(void*)0,&g_15,&g_78[0][0][5],&g_78[0][1][5],&g_10[1],&g_78[0][0][5],&g_15,(void*)0,&g_15},{&g_15,&g_2,&g_2,&g_10[1],&g_2,&g_10[0],&g_78[0][0][5],&g_78[0][0][5],&g_10[0],&g_2}},{{(void*)0,&g_10[4],&g_10[4],(void*)0,&g_2,&g_110,&g_2,&g_10[3],&g_10[4],&g_78[0][0][5]},{&g_2,&g_78[0][0][5],&g_10[1],&g_10[1],&g_10[0],&g_10[1],&g_10[4],&g_2,&g_10[4],&g_10[1]}},{{&g_10[1],(void*)0,(void*)0,(void*)0,&g_10[1],(void*)0,(void*)0,&g_10[1],&g_10[0],&g_10[0]},{&g_2,&g_2,&g_10[1],&g_10[1],&g_2,&g_110,&g_10[0],&g_2,&g_2,&g_10[0]}},{{&g_10[3],&g_10[1],&g_10[1],&g_10[1],&g_10[1],&g_10[3],&g_10[1],(void*)0,&g_110,&g_10[1]},{&g_78[0][0][5],&g_2,&g_78[1][2][2],(void*)0,&g_10[0],(void*)0,(void*)0,&g_78[0][0][5],&g_2,&g_78[0][0][5]}},{{&g_78[0][0][5],&g_10[3],&g_2,&g_10[1],&g_2,&g_10[3],&g_78[0][0][5],&g_10[4],&g_10[3],&g_2},{&g_10[3],&g_78[0][0][5],&g_10[4],&g_10[3],&g_2,&g_110,&g_2,(void*)0,&g_10[4],&g_10[4]}},{{&g_2,&g_78[0][0][5],(void*)0,&g_10[0],&g_10[0],(void*)0,&g_78[0][0][5],&g_10[0],&g_10[0],&g_10[1]},{&g_78[0][0][5],&g_2,&g_10[1],&g_15,&g_10[4],&g_110,&g_10[1],&g_10[4],&g_2,(void*)0}},{{&g_10[1],&g_10[0],&g_10[1],&g_10[4],&g_2,&g_10[4],&g_10[1],&g_10[0],&g_10[1],&g_10[1]},{&g_15,&g_78[0][0][5],&g_78[0][1][5],&g_10[1],&g_78[0][0][5],&g_15,(void*)0,&g_15,&g_78[1][2][2],&g_10[1]}}};
static int **g_528[10][8][3] = {{{&g_529[6][0][0],(void*)0,&g_529[6][0][0]},{&g_481,&g_529[0][0][6],&g_481},{&g_481,&g_529[6][0][0],&g_529[6][0][0]},{&g_481,&g_481,(void*)0},{&g_529[6][1][5],&g_529[2][1][3],&g_529[6][0][0]},{&g_529[1][0][8],&g_481,(void*)0},{&g_481,&g_529[6][0][0],&g_529[6][0][0]},{&g_481,&g_481,&g_481}},{{&g_481,&g_529[2][1][3],&g_529[5][0][4]},{&g_529[6][1][8],&g_481,&g_529[2][1][9]},{&g_481,&g_529[6][0][0],(void*)0},{&g_529[6][0][0],&g_529[0][0][6],&g_481},{&g_529[5][0][4],(void*)0,(void*)0},{&g_529[2][1][3],&g_529[4][1][2],&g_529[6][0][0]},{&g_529[6][0][0],&g_529[6][0][0],&g_529[6][0][0]},{&g_481,&g_529[6][1][8],&g_481}},{{&g_529[2][1][3],&g_529[6][0][0],&g_481},{&g_481,&g_529[6][0][0],&g_529[6][0][0]},{&g_529[6][1][5],&g_529[5][1][2],&g_529[6][0][4]},{&g_529[6][0][0],&g_529[6][0][0],&g_529[6][0][0]},{&g_529[5][1][9],&g_529[6][0][0],&g_481},{&g_529[6][0][7],&g_529[6][0][0],&g_529[6][0][0]},{&g_529[6][0][0],(void*)0,&g_529[6][0][0]},{&g_481,&g_529[6][0][7],&g_529[6][0][0]}},{{&g_529[2][1][3],(void*)0,&g_481},{(void*)0,(void*)0,&g_529[6][0][0]},{&g_529[5][1][2],&g_529[6][0][0],&g_529[5][1][5]},{&g_529[6][0][0],&g_529[6][0][0],&g_529[1][0][8]},{&g_529[6][0][1],&g_529[2][1][3],(void*)0},{(void*)0,&g_529[4][1][2],&g_481},{&g_481,&g_529[6][0][1],&g_481},{&g_529[6][0][0],&g_529[3][1][5],&g_481}},{{&g_529[6][0][4],&g_529[6][0][0],&g_529[3][0][3]},{&g_529[5][1][2],&g_529[2][1][3],&g_481},{&g_529[6][0][0],(void*)0,&g_529[6][0][0]},{&g_529[6][0][0],&g_481,&g_529[6][0][0]},{&g_481,&g_529[6][0][0],&g_529[6][0][0]},{(void*)0,&g_529[6][0][0],&g_529[3][1][5]},{&g_481,(void*)0,&g_529[6][0][1]},{(void*)0,&g_529[6][0][0],&g_529[1][0][0]}},{{&g_481,(void*)0,&g_529[6][0][0]},{(void*)0,&g_529[6][0][0],&g_481},{&g_481,&g_529[5][1][9],&g_529[4][0][1]},{&g_529[6][0][0],&g_529[6][0][0],&g_481},{&g_529[6][0][0],&g_481,(void*)0},{&g_529[5][1][2],&g_529[6][0][0],&g_481},{&g_529[6][0][4],(void*)0,&g_481},{&g_529[6][0][0],&g_529[0][0][6],&g_529[3][1][2]}},{{&g_481,(void*)0,&g_529[5][0][4]},{(void*)0,(void*)0,&g_529[6][0][0]},{&g_529[6][0][1],&g_481,&g_529[6][0][0]},{&g_529[6][0][0],(void*)0,(void*)0},{&g_529[5][1][2],&g_529[6][0][0],&g_529[6][0][0]},{(void*)0,&g_529[6][0][0],&g_481},{&g_481,(void*)0,&g_529[6][0][0]},{&g_481,&g_529[6][0][0],&g_481}},{{(void*)0,(void*)0,&g_529[6][0][0]},{&g_529[6][0][0],&g_529[6][0][0],&g_529[6][0][0]},{&g_481,(void*)0,(void*)0},{(void*)0,(void*)0,&g_529[6][0][0]},{&g_529[4][0][1],&g_529[2][0][7],&g_529[0][1][5]},{&g_529[6][0][0],&g_481,&g_529[6][0][0]},{&g_529[6][0][0],(void*)0,&g_481},{&g_529[6][0][0],&g_529[6][0][0],&g_481}},{{&g_529[6][1][5],&g_481,&g_529[3][0][3]},{&g_529[6][0][0],&g_529[6][0][0],&g_529[6][0][0]},{&g_529[3][0][3],&g_481,&g_529[6][0][0]},{(void*)0,&g_481,&g_481},{&g_529[5][1][5],&g_529[5][1][5],&g_529[6][0][1]},{(void*)0,&g_529[6][0][0],(void*)0},{&g_481,&g_481,(void*)0},{&g_529[6][0][0],&g_529[6][0][0],&g_529[6][0][0]}},{{&g_529[2][0][7],&g_481,(void*)0},{&g_529[3][1][2],(void*)0,(void*)0},{&g_529[4][0][1],&g_529[6][0][0],&g_529[6][0][1]},{&g_481,&g_529[6][0][0],&g_481},{&g_529[6][0][0],(void*)0,&g_529[6][0][0]},{&g_529[4][1][2],&g_529[3][1][2],&g_529[6][0][0]},{&g_529[6][0][0],&g_529[6][0][0],&g_529[3][0][3]},{&g_481,&g_529[4][1][2],&g_481}}};
static const int g_570 = 0xB1C3DA5CL;
static short g_641[7] = {0x0F93L,0x0F93L,0x0F93L,0x0F93L,0x0F93L,0x0F93L,0x0F93L};
static unsigned g_651 = 1UL;
static unsigned long long *g_653 = (void*)0;
static unsigned long long **g_652 = &g_653;
static short g_663[6] = {1L,1L,1L,1L,1L,1L};
static unsigned *g_673 = &g_651;
static unsigned **g_672 = &g_673;
static unsigned ***g_671[4] = {&g_672,&g_672,&g_672,&g_672};
static unsigned char g_740 = 255UL;
static unsigned short g_772 = 6UL;
static unsigned g_847[1][8] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL}};
static int ***g_856 = &g_528[2][1][2];
static int ****g_855 = &g_856;
static unsigned short g_886 = 0xCF92L;
static const unsigned long long g_891 = 5UL;



static const char func_1(void);
static long long func_7(const char p_8);
static const int * func_18(int * p_19, unsigned short p_20, long long p_21, unsigned p_22);
static int * func_23(unsigned char p_24, int * p_25, unsigned p_26, const long long p_27, int ** p_28);
static int * func_29(const long long p_30, unsigned char p_31, unsigned p_32, int p_33, int ** p_34);
static const unsigned func_36(long long p_37, int * p_38, int ** p_39);
static const char func_40(int p_41, short p_42, int ** p_43);
static int func_44(int p_45, const int ** const p_46, int ** p_47);
static const int ** const func_48(short p_49, short p_50, int * p_51, const int ** p_52);
static int * func_55(const int ** p_56, unsigned long long p_57);
static const char func_1(void)
{
    const long long l_676 = 5L;
    int l_689 = (-8L);
    int l_697[6][10] = {{0x6F7A1EC9L,0x84BA4D5AL,0x6F7A1EC9L,3L,0x84BA4D5AL,1L,1L,0x84BA4D5AL,3L,0x6F7A1EC9L},{0xCD4F23D3L,0xCD4F23D3L,0x606F1327L,0x84BA4D5AL,0L,0x606F1327L,0L,0x84BA4D5AL,0x606F1327L,0xCD4F23D3L},{0L,1L,0x6F7A1EC9L,0L,3L,3L,0L,0x6F7A1EC9L,1L,0L},{0x6F7A1EC9L,0xCD4F23D3L,1L,3L,0xCD4F23D3L,3L,1L,0xCD4F23D3L,0x6F7A1EC9L,0x6F7A1EC9L},{0L,0x84BA4D5AL,0x606F1327L,0xCD4F23D3L,0xCD4F23D3L,0x606F1327L,0x84BA4D5AL,0L,0x606F1327L,0L},{0xCD4F23D3L,1L,3L,0xCD4F23D3L,3L,1L,0xCD4F23D3L,0x6F7A1EC9L,0x6F7A1EC9L,0xCD4F23D3L}};
    int l_770 = 0xB6A0C75BL;
    int ***l_792 = &g_528[2][1][2];
    unsigned char *l_828 = &g_740;
    short l_832 = 0x88CDL;
    short l_880 = 0x037CL;
    int *****l_892 = &g_855;
    int i, j;
    for (g_2 = (-19); (g_2 >= 9); g_2 = safe_add_func_int8_t_s_s(g_2, 1))
    {
        const unsigned short l_9 = 8UL;
        int l_677[5];
        char *l_759 = &g_383;
        char l_773 = 0x85L;
        unsigned long long l_801 = 18446744073709551611UL;
        int **l_816[1];
        unsigned char *l_830 = (void*)0;
        short l_848 = 1L;
        int ** const * const l_858 = (void*)0;
        int ** const * const *l_857 = &l_858;
        int i;
        for (i = 0; i < 5; i++)
            l_677[i] = 0xAADA6EE0L;
        for (i = 0; i < 1; i++)
            l_816[i] = &g_481;
    }
    (*g_114) = ((((*l_892) = &g_856) != &g_856) | g_383);
    return g_641[3];
}







static long long func_7(const char p_8)
{
    int *l_470[5][10] = {{&g_2,&g_10[1],&g_10[4],&g_10[4],&g_10[1],&g_2,&g_2,&g_10[1],&g_2,&g_2},{&g_2,&g_10[1],&g_10[1],&g_10[1],&g_2,&g_10[1],(void*)0,(void*)0,&g_10[1],&g_2},{&g_2,&g_2,&g_2,&g_2,&g_2,&g_10[4],(void*)0,&g_10[4],&g_2,(void*)0},{&g_10[4],(void*)0,&g_10[4],&g_2,(void*)0,&g_2,&g_2,(void*)0,&g_2,&g_10[4]},{&g_10[1],&g_10[1],&g_2,(void*)0,&g_2,&g_2,&g_2,(void*)0,&g_2,&g_10[1]}};
    int **l_469 = &l_470[0][6];
    short *l_645 = (void*)0;
    unsigned *l_658 = &g_651;
    unsigned * const *l_657 = &l_658;
    int i, j;
    for (g_10[1] = 0; (g_10[1] >= (-14)); g_10[1] = safe_sub_func_uint8_t_u_u(g_10[1], 2))
    {
        int *l_13[9] = {&g_10[0],&g_10[0],&g_10[0],&g_10[0],&g_10[0],&g_10[0],&g_10[0],&g_10[0],&g_10[0]};
        int **l_14 = &l_13[5];
        int **l_338[5] = {&l_13[1],&l_13[1],&l_13[1],&l_13[1],&l_13[1]};
        unsigned short l_613 = 0UL;
        short l_649 = (-3L);
        int i;
        (*l_14) = l_13[5];
        for (g_15 = 0; (g_15 <= 15); ++g_15)
        {
            long long l_35 = (-9L);
            const int *l_59 = (void*)0;
            const int **l_58 = &l_59;
            int *l_473 = (void*)0;
            unsigned char *l_580[1][1];
            int l_581 = 0x2AB0E2C5L;
            const int **l_627 = (void*)0;
            const int **l_628 = (void*)0;
            const int **l_629 = &g_61;
            unsigned *l_638 = (void*)0;
            unsigned *l_639 = (void*)0;
            unsigned *l_640 = (void*)0;
            short *l_644[4] = {&g_368,&g_368,&g_368,&g_368};
            long long *l_646 = (void*)0;
            long long *l_647 = &g_238;
            long long *l_648[3];
            char *l_650[4];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_580[i][j] = &g_73;
            }
            for (i = 0; i < 3; i++)
                l_648[i] = &g_104;
            for (i = 0; i < 4; i++)
                l_650[i] = &g_254;
        }
        for (g_236 = 0; (g_236 <= 1); g_236 += 1)
        {
            unsigned * const *l_655 = (void*)0;
            int l_659 = (-7L);
        }
    }
    (*g_60) = (*l_469);
    return g_104;
}







static const int * func_18(int * p_19, unsigned short p_20, long long p_21, unsigned p_22)
{
    const long long l_614 = 9L;
    unsigned long long l_617 = 0xBAD80058DEB099D3LL;
    short *l_618 = &g_407;
    int *l_625 = &g_110;
    short *l_626 = &g_368;
    (*g_480) = p_19;
    for (g_465 = 0; (g_465 <= 6); g_465 += 1)
    {
        return (*g_480);
    }
    return (*g_480);
}







static int * func_23(unsigned char p_24, int * p_25, unsigned p_26, const long long p_27, int ** p_28)
{
    unsigned short l_586 = 0x6EE6L;
    unsigned char l_591 = 0xB2L;
    int l_597 = 0xAB12887DL;
    const int **l_600 = &g_61;
    if ((((safe_add_func_uint8_t_u_u(((l_586 = (safe_div_func_int64_t_s_s((p_27 <= g_407), p_26))) < ((safe_rshift_func_uint8_t_u_s(p_27, 4)) > (safe_mul_func_uint8_t_u_u(0x0FL, g_465)))), 0L)) != 1UL) < l_591))
    {
        unsigned short l_598 = 2UL;
        int **l_599 = &g_481;
        unsigned short l_601 = 0x1446L;
        int l_602 = 0x81A9E4E9L;
        l_602 = ((safe_sub_func_uint32_t_u_u((safe_unary_minus_func_uint32_t_u(2UL)), p_26)) ^ ((func_36(l_597, func_29((l_598 & func_36(func_40(l_597, l_586, l_599), (*p_28), &g_529[6][0][0])), l_601, p_26, p_27, &g_529[6][1][9]), l_599) >= l_601) < 0L));
        for (p_24 = 6; (p_24 < 21); p_24 = safe_add_func_int8_t_s_s(p_24, 1))
        {
            for (l_602 = (-9); (l_602 == (-30)); l_602 = safe_sub_func_uint8_t_u_u(l_602, 1))
            {
                unsigned short *l_609 = &l_601;
                unsigned short *l_610 = &g_236;
                int *l_611 = &g_78[0][2][4];
                (*l_611) = (safe_mod_func_uint16_t_u_u(0xF416L, (((*l_610) = ((*l_609) = 0xBF35L)) ^ 9L)));
            }
        }
        (*g_480) = (*p_28);
        return (*p_28);
    }
    else
    {
        int *l_612 = &g_110;
        (*l_612) = 0x375D7170L;
        (*g_480) = &l_597;
    }
    (*g_480) = (*g_480);
    for (g_368 = 0; g_368 < 2; g_368 += 1)
    {
        for (g_254 = 0; g_254 < 10; g_254 += 1)
        {
            for (g_407 = 0; g_407 < 6; g_407 += 1)
            {
                g_78[g_368][g_254][g_407] = 0L;
            }
        }
    }
    return (*p_28);
}







static int * func_29(const long long p_30, unsigned char p_31, unsigned p_32, int p_33, int ** p_34)
{
    int *l_482 = &g_110;
    int l_493 = 0x7DBF7A08L;
    int **l_494 = (void*)0;
    int **l_495 = &g_114;
    int l_513 = 0L;
    short l_522[7][3] = {{0L,0L,0xA4BCL},{0x43BAL,(-7L),0x43BAL},{0L,0xA4BCL,0xA4BCL},{6L,(-7L),6L},{0L,0L,0xA4BCL},{0x43BAL,(-7L),0x43BAL},{0L,0xA4BCL,0xA4BCL}};
    const int *l_569[5][8] = {{&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0},{&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0},{&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0},{&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0},{&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0,&g_570,(void*)0}};
    int i, j;
    for (p_32 = 0; (p_32 <= 1); p_32 += 1)
    {
        return l_482;
    }
    (*l_495) = ((*p_34) = (*g_480));
    for (g_81 = (-5); (g_81 <= 6); ++g_81)
    {
        unsigned l_498[2];
        int *l_499 = &g_10[1];
        short l_509 = 5L;
        int **l_567 = &g_481;
        int i;
        for (i = 0; i < 2; i++)
            l_498[i] = 0xC7880C1FL;
        if (l_498[1])
        {
            return (*g_480);
        }
        else
        {
            if (p_32)
                break;
            (*l_495) = l_499;
        }
        if ((**l_495))
        {
            int l_507 = (-2L);
            if ((*g_114))
            {
                int l_500 = 0L;
                int l_501[5] = {0xA6213D03L,0xA6213D03L,0xA6213D03L,0xA6213D03L,0xA6213D03L};
                int i;
                (*g_480) = (*p_34);
                l_501[1] = l_500;
            }
            else
            {
                long long l_523 = 0L;
                short l_561 = 0xFB67L;
                int l_562 = (-8L);
                for (g_238 = 0; (g_238 >= (-2)); g_238 = safe_sub_func_int8_t_s_s(g_238, 5))
                {
                    short l_508 = 0x5E5CL;
                    if (((*l_482) = (g_104 == (safe_unary_minus_func_int32_t_s((safe_rshift_func_uint16_t_u_u(l_507, 15)))))))
                    {
                        return (*g_480);
                    }
                    else
                    {
                        g_78[0][0][5] = ((*l_482) = l_508);
                    }
                    if (l_509)
                        break;
                    for (g_104 = (-11); (g_104 <= (-25)); g_104--)
                    {
                        int *l_512 = (void*)0;
                        (*g_480) = l_512;
                    }
                }
                (*l_495) = (*p_34);
                if (l_513)
                {
                    int l_514 = (-1L);
                    if ((l_507 >= ((*l_482) = (l_514 | (((safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((func_40(p_32, p_30, &g_114) == ((((safe_unary_minus_func_uint32_t_u(((safe_sub_func_int32_t_s_s((l_522[0][0] && func_36((18446744073709551615UL | (l_523 = (&g_322 != (void*)0))), (*g_480), p_34)), 4294967295UL)) < p_31))) <= g_383) >= (*l_499)) || 0x61AC9980L)) > g_383), p_30)), 0)) ^ l_514) & 0x70L)))))
                    {
                        (*l_495) = (*p_34);
                    }
                    else
                    {
                        unsigned l_524 = 0xE75D0AC6L;
                        int ***l_525 = (void*)0;
                        int ***l_526 = &l_494;
                        int ***l_527[7] = {&l_495,&l_495,&l_495,&l_495,&l_495,&l_495,&l_495};
                        short *l_532 = &l_522[0][0];
                        int i;
                        (*g_480) = (*p_34);
                        (*g_480) = (void*)0;
                        (*l_482) = func_36(func_40(l_524, g_254, &g_114), (*g_480), (g_528[2][1][2] = ((*l_526) = (void*)0)));
                        (*l_482) = ((p_31 & 0x0E88FAD1L) >= ((safe_rshift_func_int16_t_s_s(((*l_532) = g_297[6][3]), 0)) == g_254));
                    }
                    if ((*l_499))
                    {
                        (*p_34) = (*l_495);
                    }
                    else
                    {
                        return (*g_480);
                    }
                }
                else
                {
                    (*g_480) = (void*)0;
                }
                for (p_32 = 0; (p_32 == 14); p_32 = safe_add_func_uint8_t_u_u(p_32, 2))
                {
                    unsigned l_535[8];
                    unsigned *l_558 = &l_535[0];
                    const int l_559 = 0x7FF7EFD1L;
                    int l_560 = 0L;
                    unsigned l_572 = 0UL;
                    int *l_575[7];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_535[i] = 0UL;
                    for (i = 0; i < 7; i++)
                        l_575[i] = &l_493;
                    if (l_535[0])
                        break;
                    if ((safe_div_func_uint16_t_u_u(g_383, (((l_507 = (g_10[1] || (((0x0518AA6FL && (*l_499)) >= (7L < (safe_sub_func_uint8_t_u_u((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s(p_31, (l_562 = (safe_mul_func_int8_t_s_s(((safe_add_func_uint64_t_u_u((safe_sub_func_int64_t_s_s(p_33, (+((l_560 = (safe_div_func_uint32_t_u_u(((*l_558) = (safe_sub_func_uint8_t_u_u((safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_s((0x6AF8L ^ ((p_31 > (*l_499)) >= 1L)), p_31)), 9L)), 8UL))), l_559))) == l_507)))), p_33)) ^ l_561), (-1L)))))), g_150)), 1L)))) == g_169[0]))) == (-10L)) || g_159[2][6]))))
                    {
                        unsigned l_565 = 0x3FB56D08L;
                        long long *l_566 = &g_104;
                        int ***l_568 = &l_567;
                        const int **l_571 = &g_61;
                        (*l_495) = &l_560;
                        (**l_495) = (safe_div_func_uint32_t_u_u(l_565, func_36(((*l_566) = (*l_499)), &l_560, ((*l_568) = l_567))));
                        (**l_568) = &l_562;
                        (*l_571) = (l_569[3][5] = (*p_34));
                    }
                    else
                    {
                        (*p_34) = (void*)0;
                    }
                    if (l_572)
                        break;
                    l_562 = (((l_493 = ((*l_482) = (~(0xD41EL > ((l_507 = (safe_lshift_func_uint16_t_u_u(func_40(l_572, g_297[5][3], &g_529[6][0][0]), 14))) & func_36(g_159[1][6], &l_562, &g_481)))))) ^ p_32) < 0xC5L);
                }
            }
            (*l_482) = (safe_add_func_int64_t_s_s(g_2, g_110));
            for (g_236 = 0; (g_236 != 18); g_236++)
            {
                (*p_34) = ((*l_495) = l_499);
            }
            (*g_480) = &l_507;
        }
        else
        {
            (*l_495) = (*p_34);
        }
        return l_499;
    }
    return (*l_495);
}







static const unsigned func_36(long long p_37, int * p_38, int ** p_39)
{
    const unsigned char *l_474 = &g_73;
    unsigned long long *l_476 = &g_159[1][6];
    unsigned long long **l_475 = &l_476;
    unsigned long long **l_477 = &l_476;
    int l_478 = 0xE3097564L;
    int *l_479[10][2][3] = {{{&l_478,&g_110,(void*)0},{(void*)0,&g_10[1],&l_478}},{{&g_78[1][9][3],&g_110,&l_478},{&l_478,&g_78[1][1][5],&g_2}},{{&g_78[1][9][3],&g_2,&g_78[1][9][3]},{(void*)0,&g_78[0][0][5],&g_2}},{{&l_478,&g_2,&l_478},{&g_78[0][0][5],&g_78[0][0][5],&l_478}},{{&l_478,&g_2,(void*)0},{&g_78[0][0][5],&g_78[1][1][5],&g_78[0][0][5]}},{{&l_478,&g_110,(void*)0},{(void*)0,&g_10[1],&l_478}},{{&g_78[1][9][3],&g_110,&l_478},{&l_478,&g_78[1][1][5],&g_2}},{{&g_78[1][9][3],&g_2,&g_78[1][9][3]},{(void*)0,&g_78[0][0][5],&g_2}},{{&l_478,&g_2,&l_478},{&g_78[0][0][5],&g_78[0][0][5],&l_478}},{{&l_478,&g_2,(void*)0},{&g_78[0][0][5],&g_78[1][1][5],&g_78[0][0][5]}}};
    int i, j, k;
    g_78[0][0][5] = ((l_474 == (void*)0) ^ 5UL);
    l_477 = l_475;
    g_78[0][0][5] = l_478;
    return p_37;
}







static const char func_40(int p_41, short p_42, int ** p_43)
{
    int *l_471 = (void*)0;
    const int l_472 = 1L;
    (*p_43) = l_471;
    return l_472;
}







static int func_44(int p_45, const int ** const p_46, int ** p_47)
{
    int *l_339 = &g_2;
    int **l_340 = &l_339;
    short *l_367 = &g_368;
    int l_452 = 0x268EC31DL;
    (*l_340) = l_339;
    if ((*l_339))
    {
        short l_351 = 0L;
        unsigned l_354 = 0x8C8E8658L;
        int *l_359[3][10] = {{&g_2,&g_15,&g_2,&g_15,&g_2,&g_15,&g_2,&g_15,&g_2,&g_15},{&g_10[1],&g_15,&g_10[1],&g_15,&g_10[1],&g_15,&g_10[1],&g_15,&g_10[1],&g_15},{&g_2,&g_15,&g_2,&g_15,&g_2,&g_15,&g_2,&g_15,&g_2,&g_15}};
        int i, j;
        for (g_75 = 0; (g_75 < 46); ++g_75)
        {
            int *l_343 = (void*)0;
            int l_344 = 0x43119678L;
            unsigned long long l_350 = 0x3E90BE3177D20EFBLL;
            l_344 = p_45;
            for (g_254 = 0; (g_254 < 14); g_254 = safe_add_func_uint8_t_u_u(g_254, 1))
            {
                int *l_347 = &g_78[0][5][3];
                l_347 = (void*)0;
            }
            for (g_254 = (-18); (g_254 != (-17)); g_254 = safe_add_func_int32_t_s_s(g_254, 6))
            {
                const unsigned long long l_360 = 0xAFBC0433EE482B48LL;
                int l_361 = (-2L);
                l_351 = l_350;
            }
            l_344 = p_45;
        }
    }
    else
    {
        int l_401 = (-1L);
        unsigned char l_416 = 255UL;
        unsigned char *l_432 = &g_73;
        const int **l_435 = (void*)0;
        int l_458 = 0xB144C403L;
        if (g_159[1][6])
        {
            int *l_384 = &g_78[0][0][5];
            unsigned short *l_389[9] = {&g_236,&g_236,&g_236,&g_236,&g_236,&g_236,&g_236,&g_236,&g_236};
            unsigned long long *l_431 = &g_159[1][6];
            int i;
            for (g_81 = (-26); (g_81 < (-28)); --g_81)
            {
                unsigned char l_400 = 0xD6L;
                unsigned long long l_410 = 0x14172D5EB5192EF7LL;
                for (g_75 = 0; (g_75 >= 48); g_75 = safe_add_func_int8_t_s_s(g_75, 3))
                {
                    short **l_369 = (void*)0;
                    short **l_370 = &g_322;
                    const int l_373 = 0x272B44A5L;
                    unsigned char *l_380 = &g_73;
                    int *l_381 = (void*)0;
                    int *l_382 = &g_78[1][0][5];
                    if (((*l_382) = (g_78[0][3][1] != (0x43L < ((((*l_370) = l_367) != (void*)0) != (safe_rshift_func_uint8_t_u_u((l_373 != (safe_sub_func_uint64_t_u_u(l_373, (safe_sub_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(((*l_380) = l_373), (**l_340))), g_78[0][3][0]))))), 2)))))))
                    {
                        return g_383;
                    }
                    else
                    {
                        return p_45;
                    }
                }
                (*l_340) = l_384;
                for (g_383 = 0; g_383 < 7; g_383 += 1)
                {
                    for (p_45 = 0; p_45 < 7; p_45 += 1)
                    {
                        g_297[g_383][p_45] = 0L;
                    }
                }
                for (g_368 = 6; (g_368 >= 0); g_368 -= 1)
                {
                    int l_393 = 0xF6273D85L;
                    int i, j;
                    if (g_297[g_368][g_368])
                    {
                        int *l_390 = &g_110;
                        int i, j;
                        (*l_390) = (safe_lshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((*l_384) = g_297[g_368][g_368]), (~((void*)0 != l_389[8])))), 5));
                        l_390 = l_390;
                        l_393 = (~(safe_rshift_func_uint8_t_u_u(g_297[g_368][g_368], 3)));
                    }
                    else
                    {
                        int i, j;
                        return g_297[g_368][g_368];
                    }
                }
            }
            (*l_340) = (*l_340);
            (*l_340) = &g_110;
        }
        else
        {
            g_114 = (*l_340);
            return (*l_339);
        }
        if ((g_297[6][3] > ((((*l_432) = ((!p_45) > g_407)) < p_45) || p_45)))
        {
            short *l_434[5][10] = {{&g_407,&g_407,&g_407,&g_407,&g_407,&g_368,&g_368,&g_407,&g_407,&g_407},{&g_368,&g_368,&g_407,&g_407,&g_368,&g_407,&g_407,&g_368,&g_368,&g_407},{&g_407,&g_407,&g_368,&g_368,&g_407,&g_407,&g_407,&g_407,&g_407,&g_368},{&g_407,&g_368,&g_407,&g_368,&g_407,&g_407,&g_368,&g_407,&g_368,&g_407},{&g_407,&g_407,&g_368,&g_407,&g_368,&g_407,&g_407,&g_407,&g_407,&g_368}};
            const int l_455 = 0x5F67D07CL;
            int i, j;
            (*l_340) = (*l_340);
            for (l_401 = 0; l_401 < 1; l_401 += 1)
            {
                for (g_81 = 0; g_81 < 10; g_81 += 1)
                {
                    g_108[l_401][g_81] = &g_75;
                }
            }
            (*l_340) = (*p_47);
            for (g_407 = 6; (g_407 >= 0); g_407 -= 1)
            {
                const short *l_433 = &g_368;
                int l_448[6];
                unsigned **l_461 = &g_108[0][8];
                int i;
                for (i = 0; i < 6; i++)
                    l_448[i] = (-5L);
                if ((l_433 != l_434[2][6]))
                {
                    unsigned short l_446 = 5UL;
                    int l_449 = 0xD5040360L;
                    for (g_188 = 0; (g_188 <= 6); g_188 += 1)
                    {
                        int l_447 = 0x1EB9AEA7L;
                        int i, j;
                        if (g_297[g_188][g_407])
                            break;
                        (*l_340) = &g_15;
                    }
                }
                else
                {
                    long long l_451 = 0x08AB537D99011A97LL;
                    for (g_73 = 0; (g_73 <= 0); g_73 += 1)
                    {
                        l_451 = (safe_unary_minus_func_uint8_t_u(g_188));
                        l_452 = 0xE85249B6L;
                    }
                    if ((((safe_mul_func_uint8_t_u_u(((+p_45) && 0xEAFA43AA53892412LL), l_455)) != p_45) ^ (safe_rshift_func_uint16_t_u_s(g_78[0][0][5], 1))))
                    {
                        int *l_459 = &l_448[5];
                        (*l_340) = (*p_47);
                        if (l_458)
                            break;
                        (*l_459) = 4L;
                    }
                    else
                    {
                        int *l_460[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_460[i] = &l_452;
                        l_448[5] = p_45;
                        return p_45;
                    }
                    return g_238;
                }
                for (g_254 = 0; (g_254 <= 0); g_254 += 1)
                {
                    unsigned ***l_462 = &g_107;
                    unsigned ***l_463 = &l_461;
                    int *l_464[5][3] = {{(void*)0,&l_448[5],&l_448[5]},{&g_110,&l_458,&l_458},{(void*)0,&l_448[5],&l_448[5]},{&g_110,&l_458,&l_458},{(void*)0,&l_448[5],&l_448[5]}};
                    int i, j;
                    (*l_463) = ((*l_462) = l_461);
                    g_110 = (l_452 = l_458);
                    l_452 = p_45;
                    (*l_340) = (void*)0;
                }
            }
        }
        else
        {
            int *l_466 = &g_110;
            (**l_340) = p_45;
            l_466 = &g_2;
            for (l_401 = 0; (l_401 <= (-15)); l_401 = safe_sub_func_int16_t_s_s(l_401, 1))
            {
                return (**l_340);
            }
        }
    }
    return p_45;
}







static const int ** const func_48(short p_49, short p_50, int * p_51, const int ** p_52)
{
    char l_123 = 0xBBL;
    int *l_124 = &g_110;
    unsigned ** const l_133 = &g_108[0][0];
    short l_136[1][2][2] = {{{0xFBEBL,0xFBEBL},{0xFBEBL,0xFBEBL}}};
    unsigned long long *l_223[2];
    int l_226 = 0L;
    long long *l_237 = &g_238;
    long long *l_241 = &g_238;
    int l_242 = (-1L);
    const int **l_244 = &g_61;
    char l_251 = (-1L);
    unsigned **l_336 = &g_108[0][8];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_223[i] = (void*)0;
    (*l_124) = l_123;
    for (g_75 = 0; (g_75 > 5); g_75 = safe_add_func_uint32_t_u_u(g_75, 9))
    {
        (*p_52) = &g_15;
    }
    if ((safe_rshift_func_int8_t_s_s((l_136[0][0][1] = ((((safe_mul_func_int64_t_s_s(g_2, ((safe_lshift_func_uint16_t_u_s((l_133 == (void*)0), 14)) > g_10[1]))) & ((safe_div_func_uint16_t_u_u((*l_124), (*l_124))) | g_78[0][0][5])) > (g_10[1] < ((+((&g_108[0][8] == l_133) != 65533UL)) | (*l_124)))) > p_49)), (*l_124))))
    {
        const int ** const l_137[2][6][7] = {{{(void*)0,(void*)0,&g_61,&g_61,&g_61,(void*)0,(void*)0},{(void*)0,(void*)0,&g_61,(void*)0,(void*)0,&g_61,&g_61},{&g_61,&g_61,(void*)0,(void*)0,&g_61,&g_61,&g_61},{&g_61,&g_61,(void*)0,&g_61,&g_61,(void*)0,&g_61},{&g_61,(void*)0,(void*)0,&g_61,(void*)0,&g_61,&g_61},{(void*)0,&g_61,&g_61,&g_61,&g_61,(void*)0,&g_61}},{{&g_61,&g_61,&g_61,(void*)0,&g_61,&g_61,&g_61},{&g_61,(void*)0,(void*)0,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_61,&g_61,&g_61,&g_61,&g_61,&g_61},{&g_61,&g_61,(void*)0,&g_61,&g_61,&g_61,&g_61},{&g_61,(void*)0,&g_61,&g_61,(void*)0,&g_61,(void*)0},{&g_61,(void*)0,&g_61,&g_61,&g_61,&g_61,&g_61}}};
        int i, j, k;
        return l_137[0][2][1];
    }
    else
    {
        unsigned l_156 = 4UL;
        int l_160 = 0x52EF7354L;
        const int *l_215 = &g_110;
        (*l_124) = (*l_124);
        if ((safe_rshift_func_int16_t_s_s(0L, 4)))
        {
            const unsigned *l_149 = &g_150;
            const unsigned **l_148 = &l_149;
            int l_153 = (-5L);
            char *l_157 = &l_123;
            (*l_124) = (*l_124);
            (*l_124) = (((safe_lshift_func_uint8_t_u_s((*l_124), (g_73 < 0UL))) | ((~(*l_124)) == (((safe_lshift_func_uint8_t_u_u((((*l_148) = p_51) == (void*)0), 5)) > (safe_sub_func_uint8_t_u_u(l_153, (safe_mul_func_int8_t_s_s(((*l_157) = l_156), (((~((((*l_124) <= p_49) || p_50) == (*l_124))) && g_78[0][0][5]) ^ (*l_124))))))) >= g_110))) || p_49);
        }
        else
        {
            unsigned long long *l_158[3];
            int l_189 = 0x9149AC58L;
            unsigned l_206[4][1] = {{0UL},{0x0F980C73L},{0UL},{0x0F980C73L}};
            int i, j;
            for (i = 0; i < 3; i++)
                l_158[i] = &g_159[1][6];
            if (((l_160 = ((*l_124) = g_150)) && g_150))
            {
                int *l_168[1];
                int l_207[4][7][1] = {{{0L},{1L},{0x213DDA54L},{1L},{0L},{0xB5C60B79L},{0L}},{{1L},{0x213DDA54L},{1L},{0L},{0xB5C60B79L},{0L},{1L}},{{0x213DDA54L},{1L},{0L},{0xB5C60B79L},{0L},{1L},{0x213DDA54L}},{{1L},{0L},{0xB5C60B79L},{0L},{1L},{0x213DDA54L},{1L}}};
                const int ** const l_225 = &g_61;
                int i, j, k;
                for (i = 0; i < 1; i++)
                    l_168[i] = &g_78[0][0][5];
                for (l_156 = 8; (l_156 == 8); l_156 = safe_add_func_int64_t_s_s(l_156, 3))
                {
                    int *l_170 = &g_78[1][4][3];
                    for (g_110 = 1; (g_110 >= 28); ++g_110)
                    {
                        int *l_165 = &g_78[0][0][5];
                        (*p_52) = &g_2;
                        (*l_165) = 0x59807BFFL;
                    }
                    for (l_160 = (-22); (l_160 <= 15); l_160 = safe_add_func_uint8_t_u_u(l_160, 7))
                    {
                        return &g_61;
                    }
                    (*p_52) = l_168[0];
                    if (g_169[0])
                    {
                        int **l_171 = &l_170;
                        (*g_60) = ((*l_171) = l_170);
                        (*l_170) = (((*l_124) = (safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(0x8483835EL, (**g_60))) && ((safe_mod_func_uint64_t_u_u(18446744073709551615UL, (*l_170))) & (18446744073709551615UL | (safe_add_func_int8_t_s_s((g_188 = (safe_mul_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(p_49, ((safe_div_func_uint64_t_u_u(p_50, (safe_mul_func_uint16_t_u_u((&g_169[6] != &l_123), g_78[1][5][5])))) < 0x9D0E818DDB15D3C3LL))) && p_49), p_50))), (**l_171)))))), p_49))) != (*l_170));
                        (*l_170) = (l_189 < (p_49 <= (*g_61)));
                    }
                    else
                    {
                        unsigned char l_198 = 246UL;
                        char *l_201 = &l_123;
                        (*l_170) = (safe_lshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(0xD58A6F27L, (g_110 >= (65531UL & (safe_div_func_int8_t_s_s(((*l_201) = (safe_sub_func_int32_t_s_s(((g_73 < 0xC8L) | l_198), (((safe_add_func_int64_t_s_s((-9L), p_50)) == p_49) != 0L)))), g_10[2])))))), 10));
                    }
                }
                for (p_50 = 0; (p_50 <= 0); p_50 += 1)
                {
                    int *l_214 = &g_2;
                    const unsigned long long *l_224 = (void*)0;
                    for (l_123 = 0; (l_123 <= 0); l_123 += 1)
                    {
                        unsigned l_208[5] = {0x35F78ABDL,0x35F78ABDL,0x35F78ABDL,0x35F78ABDL,0x35F78ABDL};
                        int i;
                        g_78[0][0][5] = (safe_mod_func_uint32_t_u_u(0x52F85193L, (safe_mod_func_uint8_t_u_u(l_206[1][0], l_160))));
                        if (l_207[1][1][0])
                            continue;
                        (*l_124) = (g_169[0] > l_208[3]);
                    }
                    for (l_189 = 0; (l_189 <= 0); l_189 += 1)
                    {
                        char l_213[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_213[i] = 8L;
                        l_213[3] = (safe_mul_func_uint16_t_u_u(2UL, (safe_add_func_uint64_t_u_u(18446744073709551612UL, ((*l_124) = g_10[2])))));
                        (*p_52) = l_214;
                        l_215 = (*p_52);
                        (*p_52) = func_55(p_52, (((*g_60) != (*p_52)) && (*l_124)));
                    }
                    for (g_81 = 0; (g_81 <= 0); g_81 += 1)
                    {
                        char l_218 = 0x65L;
                        unsigned *l_219[3];
                        short *l_222 = &l_136[0][0][1];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_219[i] = &l_156;
                        (*p_52) = (g_114 = l_124);
                        (*l_124) = ((safe_mod_func_uint32_t_u_u((~(l_189 = l_218)), p_49)) != ((((((*l_222) = (l_218 >= p_49)) == 3L) & g_150) && (l_223[0] == l_224)) < 0UL));
                        return l_225;
                    }
                }
            }
            else
            {
                (*l_124) = l_206[1][0];
            }
        }
    }
    for (g_104 = 0; (g_104 <= 1); g_104 += 1)
    {
        unsigned *l_233 = &g_75;
        int l_234[5] = {0x99DF9805L,0x99DF9805L,0x99DF9805L,0x99DF9805L,0x99DF9805L};
        unsigned short *l_235 = &g_236;
        long long *l_240 = &g_104;
        long long **l_239[6] = {&l_240,&l_240,&l_240,&l_240,&l_240,&l_240};
        const int **l_272 = &g_61;
        unsigned l_273 = 0x3AF82275L;
        int l_278 = 3L;
        int i;
        l_226 = (*l_124);
        (*l_124) = (*l_124);
        if ((l_242 = (0x25L ^ ((safe_div_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_104, ((*l_124) = g_81))), (g_159[0][7] || (safe_lshift_func_int8_t_s_s(((*l_133) != l_233), (((*l_235) = l_234[0]) || (((l_241 = (l_237 = l_223[g_104])) != l_223[0]) >= 4L))))))) && g_159[1][6]))))
        {
            int *l_243[8][10] = {{&g_78[0][0][5],&g_2,&g_78[1][9][0],(void*)0,&g_15,&g_10[1],&g_78[0][0][5],&l_234[4],&l_242,&g_10[1]},{&l_234[4],&l_234[3],&l_234[0],&g_15,&l_242,&g_78[0][0][5],&g_15,(void*)0,(void*)0,&l_234[4]},{&g_78[0][0][5],&g_78[0][0][5],&l_242,(void*)0,(void*)0,&g_10[1],&l_242,&g_10[1],(void*)0,(void*)0},{(void*)0,&g_2,(void*)0,&g_78[0][0][5],&l_234[0],&g_110,(void*)0,&g_15,&g_78[1][9][0],(void*)0},{&l_234[0],&l_242,&g_10[4],(void*)0,&l_242,(void*)0,&g_78[0][0][5],&g_15,&l_234[0],&g_10[1]},{&g_2,&g_10[1],(void*)0,(void*)0,&g_78[1][9][0],(void*)0,(void*)0,&g_10[1],&g_10[1],&g_78[1][9][0]},{(void*)0,&g_78[0][0][5],(void*)0,&g_10[4],(void*)0,&g_78[0][7][2],&g_78[0][7][2],(void*)0,&g_10[4],(void*)0},{&g_78[1][9][0],&g_78[1][9][0],&l_234[4],&g_110,(void*)0,&l_234[3],(void*)0,&g_10[1],(void*)0,&g_78[0][0][5]}};
            int **l_252 = &g_114;
            int **l_253 = &l_124;
            int i, j;
            (*g_60) = l_243[6][3];
            (*g_60) = ((*l_253) = ((*l_252) = p_51));
        }
        else
        {
            int *l_265 = &g_2;
            int l_289 = 0x810F05B0L;
            char l_333[2][5];
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 5; j++)
                    l_333[i][j] = 3L;
            }
            if (l_234[0])
            {
                for (l_226 = 1; (l_226 >= 0); l_226 -= 1)
                {
                    (*l_124) = g_254;
                    for (g_238 = 0; (g_238 <= 1); g_238 += 1)
                    {
                        const int **l_261 = &g_61;
                        int i, j, k;
                        g_78[g_238][(g_104 + 3)][(g_104 + 2)] = (safe_lshift_func_int16_t_s_s(((safe_div_func_int16_t_s_s((-7L), (1L | g_78[g_238][(l_226 + 5)][(g_238 + 4)]))) && p_50), (safe_lshift_func_int16_t_s_s(0L, 10))));
                        (*p_52) = p_51;
                    }
                }
            }
            else
            {
                (*l_244) = &g_78[0][0][5];
                if ((*p_51))
                    break;
            }
            if ((*l_124))
            {
                unsigned l_264 = 18446744073709551613UL;
                char *l_270 = (void*)0;
                char *l_271[8][7][4] = {{{(void*)0,&g_254,&l_123,&l_123},{&l_251,&g_254,(void*)0,&l_251},{&g_254,&l_251,(void*)0,&l_251},{&l_251,&l_123,&g_254,&l_251},{(void*)0,&l_123,&l_251,&l_123},{(void*)0,(void*)0,&l_251,&l_251},{&l_251,&l_251,&l_251,&l_251}},{{&l_123,&l_251,&l_251,&l_123},{&l_251,&g_254,&l_123,&l_251},{&l_251,(void*)0,&g_254,&l_251},{(void*)0,&g_254,&l_251,&l_123},{&l_251,&l_251,&l_123,&l_251},{(void*)0,&l_251,&l_251,&l_251},{&g_254,(void*)0,(void*)0,&l_123}},{{&l_251,&l_123,&g_254,&l_251},{(void*)0,&l_123,&g_254,&l_251},{(void*)0,&l_251,&l_123,&l_251},{&l_123,&g_254,&l_123,&l_123},{&l_123,&g_254,&l_251,&l_251},{&g_254,&l_251,&l_123,(void*)0},{(void*)0,&g_254,&g_254,&l_123}},{{&g_254,&g_254,&l_251,(void*)0},{&g_254,&l_123,&l_251,&l_251},{&l_123,&g_254,&l_123,&l_251},{&g_254,(void*)0,&l_251,&l_123},{&l_251,&g_254,&l_251,(void*)0},{(void*)0,&l_123,&l_251,&l_123},{&l_251,&g_254,&l_251,&l_251}},{{&g_254,&g_254,&l_123,&l_251},{&l_123,&l_251,&l_251,(void*)0},{&g_254,(void*)0,&l_251,&l_251},{&g_254,(void*)0,&g_254,&l_251},{(void*)0,&l_251,&l_123,&g_254},{&g_254,&l_123,&l_251,&l_123},{&l_123,&l_251,&g_254,(void*)0}},{{(void*)0,&l_123,&g_254,&l_251},{&g_254,&l_123,&l_251,(void*)0},{(void*)0,&l_123,&l_251,(void*)0},{(void*)0,&l_123,&g_254,&l_251},{(void*)0,&l_251,&l_251,&l_251},{&l_123,&l_123,&l_123,&l_251},{&l_251,&l_251,&l_123,(void*)0}},{{&g_254,&l_123,&l_251,(void*)0},{&l_251,(void*)0,&l_251,&l_251},{(void*)0,&g_254,(void*)0,&g_254},{&l_251,(void*)0,(void*)0,&l_123},{&l_251,&g_254,&l_251,&g_254},{&l_123,&g_254,&g_254,&g_254},{&l_251,&l_251,&g_254,(void*)0}},{{&l_123,&l_123,&l_251,&g_254},{&g_254,&l_251,&g_254,&l_123},{&g_254,&l_123,&g_254,(void*)0},{&l_123,&l_251,&l_123,&g_254},{&g_254,&l_123,&g_254,(void*)0},{&l_251,&l_123,(void*)0,(void*)0},{&l_123,(void*)0,&g_254,(void*)0}}};
                short *l_324 = &l_136[0][0][1];
                int *l_328 = &g_2;
                int l_331 = 0L;
                int i, j, k;
                (*g_60) = l_265;
                if ((safe_sub_func_int8_t_s_s((*l_124), (safe_lshift_func_int8_t_s_s(g_78[0][9][1], (g_254 = g_15))))))
                {
                    short l_279 = 0x2245L;
                    int l_298 = 5L;
                    int l_309 = 0x389586FDL;
                    for (l_251 = 0; (l_251 <= 0); l_251 += 1)
                    {
                        (*g_60) = func_55(l_272, l_273);
                    }
                    if (((safe_add_func_uint64_t_u_u(18446744073709551615UL, g_254)) && ((*l_124) <= ((g_236 < (l_279 = (safe_mod_func_uint8_t_u_u(p_49, l_278)))) & (-1L)))))
                    {
                        int l_288 = 8L;
                        g_78[1][6][1] = ((*l_124) = ((*l_124) < ((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u(0x1CL, 1)) && p_49) >= p_50) <= ((*l_124) != (((safe_div_func_uint32_t_u_u(l_288, l_289)) != (safe_mul_func_uint16_t_u_u(l_264, ((p_50 > 0UL) ^ p_50)))) >= 0xB9B15BCEL))), g_159[3][0])) > 3L)));
                    }
                    else
                    {
                        const int **l_292 = (void*)0;
                        (*l_244) = (*p_52);
                        (*l_124) = (safe_add_func_uint32_t_u_u((*l_124), ((safe_mod_func_uint64_t_u_u((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u((g_188 = g_2), (g_236 < 65535UL))), 65535UL)) | (0xC329L <= (safe_mul_func_int8_t_s_s((g_110 || l_309), (safe_rshift_func_uint8_t_u_u(((**p_52) ^ (**p_52)), (**l_272))))))) && (**l_272)), p_50)) ^ 7UL)));
                        (*l_124) = (*p_51);
                        (*p_52) = (*g_60);
                    }
                }
                else
                {
                    short **l_323[4];
                    int l_327 = 0x3221E71CL;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_323[i] = &g_322;
                    if ((safe_sub_func_int32_t_s_s((*g_61), ((safe_lshift_func_uint8_t_u_s(((safe_mul_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_297[5][5], (*l_265))), (&g_159[2][7] == l_241))) <= (safe_add_func_int64_t_s_s(((l_324 = g_322) != &p_50), 0x9AC8311569A964CFLL))), ((safe_rshift_func_uint8_t_u_s(p_49, p_50)) == l_327))) >= p_50))))
                    {
                        (*l_244) = l_328;
                    }
                    else
                    {
                        (*l_124) = (*l_328);
                        (*l_124) = (p_50 > (-9L));
                        (*l_244) = (void*)0;
                        (*l_124) = (safe_mul_func_int8_t_s_s(g_2, g_159[1][6]));
                    }
                    l_331 = ((void*)0 != l_323[2]);
                    return p_52;
                }
                return l_244;
            }
            else
            {
                unsigned char l_332 = 255UL;
                l_332 = (*l_265);
                for (g_236 = 0; (g_236 <= 1); g_236 += 1)
                {
                    int *l_337 = &g_10[1];
                    (*l_124) = (*p_51);
                    if (l_333[0][0])
                    {
                        unsigned **l_334 = &l_233;
                        unsigned ***l_335[8][1] = {{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107},{&g_107}};
                        int i, j;
                        l_336 = l_334;
                        if (l_332)
                            break;
                    }
                    else
                    {
                        (*l_244) = l_337;
                    }
                    for (l_242 = 0; (l_242 >= 0); l_242 -= 1)
                    {
                        (*p_52) = &l_289;
                    }
                }
            }
        }
        return &g_61;
    }
    return l_244;
}







static int * func_55(const int ** p_56, unsigned long long p_57)
{
    long long * const l_103 = &g_104;
    int l_105 = 0xDC7DAD05L;
    const int *l_122 = &g_110;
    if ((p_56 == p_56))
    {
        long long *l_72 = (void*)0;
        unsigned *l_74 = &g_75;
        int *l_76 = (void*)0;
        int *l_77 = &g_78[0][0][5];
        (*l_77) = (((void*)0 == (*p_56)) == ((*l_74) = (safe_sub_func_int8_t_s_s(0xE0L, (((safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s(g_15, g_10[1])), p_57)) >= (safe_mul_func_uint16_t_u_u(g_15, 65529UL))) || ((g_73 = (safe_sub_func_uint16_t_u_u(0UL, g_2))) != p_57))))));
        if ((safe_rshift_func_int8_t_s_s((0x9320L && (g_81 = g_75)), 1)))
        {
            long long l_100 = 0xC0EB74473CA56B74LL;
            unsigned **l_109[5];
            int i;
            for (i = 0; i < 5; i++)
                l_109[i] = (void*)0;
            for (g_75 = 0; (g_75 <= 54); ++g_75)
            {
                unsigned l_106 = 1UL;
                unsigned **l_111 = &g_108[0][8];
                g_78[1][5][2] = ((safe_rshift_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_int16_t_s_s(0x1916L, ((p_57 && 0L) < ((safe_add_func_int16_t_s_s((l_100 == ((((+((*g_61) <= 0UL)) < (safe_mod_func_int8_t_s_s(((void*)0 != l_103), l_105))) || l_106) < 0x5FL)), g_15)) >= 18446744073709551611UL)))), g_73)), (**g_60))), g_78[1][0][0])) || p_57) & p_57), p_57)), p_57)) > p_57) < p_57), p_57)) | 2L);
                (*g_60) = &l_105;
                for (g_73 = 0; (g_73 <= 1); g_73 += 1)
                {
                    l_109[3] = g_107;
                    if (g_110)
                        continue;
                    (*g_60) = (*g_60);
                    if ((**g_60))
                        continue;
                    for (g_81 = 0; (g_81 <= 1); g_81 += 1)
                    {
                        int i, j, k;
                        g_78[g_81][(g_81 + 2)][g_81] = (l_111 != &g_108[0][6]);
                    }
                }
                (*p_56) = (*p_56);
            }
        }
        else
        {
            int **l_112 = (void*)0;
            int **l_113[5];
            int i;
            for (i = 0; i < 5; i++)
                l_113[i] = &l_77;
            (*p_56) = (g_114 = &l_105);
            (*l_77) = (**p_56);
            for (g_110 = 0; (g_110 < (-21)); g_110 = safe_sub_func_int32_t_s_s(g_110, 9))
            {
                unsigned l_117 = 0xE3A94630L;
                (*p_56) = (*g_60);
                if (l_105)
                {
                    short l_118 = 0x7499L;
                    int *l_119 = &g_78[0][0][5];
                    (*g_114) = ((l_117 ^ (-6L)) && p_57);
                    for (g_75 = 0; (g_75 <= 1); g_75 += 1)
                    {
                        int i;
                        (*g_114) = l_118;
                        (*g_60) = l_119;
                        return &g_110;
                    }
                    (*p_56) = (*p_56);
                }
                else
                {
                    (*l_77) = (safe_add_func_int8_t_s_s(g_78[0][0][5], ((void*)0 == l_103)));
                    (*g_60) = (*p_56);
                }
            }
            (*g_114) = (**g_60);
        }
    }
    else
    {
        l_122 = ((*p_56) = (*g_60));
    }
    return &g_2;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_10[i], "g_10[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_75, "g_75", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_78[i][j][k], "g_78[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_159[i][j], "g_159[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_169[i], "g_169[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_188, "g_188", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_238, "g_238", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_297[i][j], "g_297[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_368, "g_368", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_641[i], "g_641[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_651, "g_651", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_663[i], "g_663[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_740, "g_740", print_hash_value);
    transparent_crc(g_772, "g_772", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_847[i][j], "g_847[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_886, "g_886", print_hash_value);
    transparent_crc(g_891, "g_891", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
