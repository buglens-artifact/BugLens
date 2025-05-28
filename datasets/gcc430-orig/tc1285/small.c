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



static int g_5 = 0x37D8E6E8L;
static int g_12 = 0x34678DC2L;
static long long g_20 = (-4L);
static int *g_33[1] = {(void*)0};
static int g_36[7] = {0L,0L,(-5L),0L,0L,(-5L),0L};
static unsigned char g_46[6][7][1] = {{{7UL},{0UL},{248UL},{0x0FL},{0x9DL},{255UL},{0xE5L}},{{255UL},{0x9DL},{0x0FL},{248UL},{0UL},{7UL},{0UL}},{{0UL},{0UL},{0UL},{7UL},{0UL},{248UL},{0x0FL}},{{0x9DL},{255UL},{0xE5L},{255UL},{0x9DL},{0x0FL},{248UL}},{{0UL},{7UL},{0UL},{0UL},{0UL},{0UL},{7UL}},{{0UL},{248UL},{0x0FL},{7UL},{248UL},{0UL},{248UL}}};
static unsigned char g_50 = 0x27L;
static unsigned long long g_62 = 0x36E903ADFE1DB4DBLL;
static unsigned g_79 = 0xD4076B84L;
static short g_139 = 0x9E1EL;
static long long g_177 = 7L;
static long long *g_176 = &g_177;
static unsigned *g_195 = &g_79;
static unsigned **g_194 = &g_195;
static char g_202 = 1L;
static volatile int g_242[9][4] = {{(-2L),(-1L),(-1L),(-2L)},{(-1L),(-2L),(-1L),(-1L)},{(-2L),(-2L),7L,(-2L)},{(-2L),(-1L),(-1L),(-2L)},{(-1L),(-2L),(-1L),(-1L)},{(-2L),(-2L),7L,(-2L)},{(-2L),(-1L),(-1L),(-2L)},{(-1L),(-2L),(-1L),(-1L)},{(-2L),(-2L),7L,(-2L)}};
static unsigned long long g_256 = 18446744073709551606UL;
static volatile unsigned char g_271 = 0x06L;
static volatile unsigned char *g_270 = &g_271;
static volatile unsigned char **g_269 = &g_270;
static int g_305 = 0L;
static int g_308 = 0L;
static long long g_374 = 0x6A2465E807F5716CLL;
static unsigned short g_385 = 65531UL;
static unsigned short *g_384 = &g_385;
static char g_438 = 0xCCL;
static volatile short g_439[5][2][6] = {{{0x5A7DL,0L,0xD297L,0xD297L,0L,0x5A7DL},{(-8L),0xD731L,0xD5F9L,(-6L),2L,0L}},{{0xD731L,(-6L),2L,1L,1L,0x4631L},{0xD731L,0xD29AL,1L,(-6L),1L,0xD29AL}},{{(-8L),2L,0xE40BL,0xD297L,0xD29AL,0xD5F9L},{0x5A7DL,0xEB0CL,(-6L),0xE40BL,4L,1L}},{{0xD297L,0xEB0CL,0xFBE6L,0xD29AL,0xD29AL,0xFBE6L},{2L,2L,0xEB0CL,1L,1L,0xD731L}},{{(-6L),0xD29AL,0x4631L,0x5A7DL,1L,0xEB0CL},{4L,0xEB0CL,4L,1L,1L,1L}}};
static unsigned short g_510 = 0xF605L;
static volatile unsigned long long *g_592[3] = {(void*)0,(void*)0,(void*)0};
static volatile unsigned long long **g_591[9][9][3] = {{{&g_592[2],&g_592[0],&g_592[0]},{&g_592[0],&g_592[1],&g_592[1]},{&g_592[0],&g_592[1],&g_592[1]},{&g_592[2],&g_592[1],&g_592[1]},{&g_592[0],&g_592[0],&g_592[0]},{&g_592[0],&g_592[0],&g_592[0]},{&g_592[2],&g_592[1],&g_592[0]},{&g_592[0],&g_592[2],&g_592[0]},{&g_592[1],&g_592[0],&g_592[1]}},{{&g_592[0],&g_592[0],&g_592[1]},{&g_592[0],&g_592[0],&g_592[1]},{&g_592[1],&g_592[2],&g_592[0]},{&g_592[1],&g_592[1],&g_592[0]},{&g_592[1],&g_592[0],&g_592[0]},{&g_592[1],&g_592[0],&g_592[2]},{&g_592[0],&g_592[1],&g_592[1]},{&g_592[0],&g_592[1],&g_592[2]},{&g_592[1],&g_592[1],&g_592[0]}},{{&g_592[0],&g_592[0],&g_592[0]},{&g_592[2],&g_592[0],&g_592[0]},{&g_592[0],&g_592[1],&g_592[1]},{&g_592[0],&g_592[1],&g_592[1]},{&g_592[2],&g_592[1],&g_592[1]},{&g_592[0],&g_592[0],&g_592[0]},{&g_592[0],&g_592[0],&g_592[0]},{&g_592[2],&g_592[1],&g_592[0]},{&g_592[0],&g_592[2],&g_592[0]}},{{&g_592[1],&g_592[0],&g_592[1]},{&g_592[0],&g_592[0],&g_592[1]},{&g_592[0],&g_592[2],&g_592[0]},{&g_592[2],&g_592[1],&g_592[1]},{&g_592[2],&g_592[2],&g_592[2]},{&g_592[2],&g_592[0],&g_592[0]},{&g_592[2],&g_592[1],&g_592[0]},{&g_592[0],&g_592[0],&g_592[2]},{&g_592[0],&g_592[2],&g_592[0]}},{{&g_592[2],&g_592[1],&g_592[0]},{&g_592[2],&g_592[0],&g_592[2]},{&g_592[0],&g_592[0],&g_592[1]},{&g_592[1],&g_592[1],&g_592[0]},{&g_592[0],&g_592[2],&g_592[2]},{&g_592[1],&g_592[0],&g_592[0]},{&g_592[0],&g_592[1],&g_592[0]},{&g_592[1],&g_592[0],&g_592[0]},{&g_592[0],&g_592[2],&g_592[0]}},{{&g_592[2],&g_592[1],&g_592[0]},{&g_592[2],&g_592[2],&g_592[0]},{&g_592[0],&g_592[1],&g_592[2]},{&g_592[0],&g_592[2],&g_592[0]},{&g_592[2],&g_592[1],&g_592[1]},{&g_592[2],&g_592[2],&g_592[2]},{&g_592[2],&g_592[0],&g_592[0]},{&g_592[2],&g_592[1],&g_592[0]},{&g_592[0],&g_592[0],&g_592[2]}},{{&g_592[0],&g_592[2],&g_592[0]},{&g_592[2],&g_592[1],&g_592[0]},{&g_592[2],&g_592[0],&g_592[2]},{&g_592[0],&g_592[0],&g_592[1]},{&g_592[1],&g_592[1],&g_592[0]},{&g_592[0],&g_592[2],&g_592[2]},{&g_592[1],&g_592[0],&g_592[0]},{&g_592[1],&g_592[0],&g_592[1]},{&g_592[0],&g_592[1],&g_592[1]}},{{&g_592[0],&g_592[0],&g_592[1]},{&g_592[2],&g_592[0],&g_592[1]},{&g_592[1],&g_592[2],&g_592[0]},{&g_592[2],&g_592[2],&g_592[0]},{&g_592[0],&g_592[2],&g_592[1]},{&g_592[2],&g_592[0],&g_592[0]},{&g_592[0],&g_592[0],&g_592[2]},{&g_592[0],&g_592[1],&g_592[0]},{&g_592[2],&g_592[0],&g_592[0]}},{{&g_592[0],&g_592[1],&g_592[2]},{&g_592[2],&g_592[2],&g_592[0]},{&g_592[1],&g_592[0],&g_592[0]},{&g_592[2],&g_592[1],&g_592[2]},{&g_592[0],&g_592[1],&g_592[0]},{&g_592[0],&g_592[0],&g_592[1]},{&g_592[1],&g_592[2],&g_592[0]},{&g_592[0],&g_592[1],&g_592[0]},{&g_592[1],&g_592[0],&g_592[1]}}};
static short g_599 = 0x7060L;
static unsigned char g_700 = 1UL;
static int g_709 = 3L;
static char g_784[6] = {(-8L),(-1L),(-1L),(-8L),(-1L),(-1L)};
static int g_855 = 0xFE0B10C7L;
static long long g_859[1][10] = {{0xFB1F783741F59B82LL,0xFB1F783741F59B82LL,0xFB1F783741F59B82LL,0xFB1F783741F59B82LL,0xFB1F783741F59B82LL,0xFB1F783741F59B82LL,0xFB1F783741F59B82LL,0xFB1F783741F59B82LL,0xFB1F783741F59B82LL,0xFB1F783741F59B82LL}};
static volatile unsigned short g_870 = 1UL;
static volatile unsigned short *g_869 = &g_870;
static volatile short g_919 = 1L;
static volatile short *g_918 = &g_919;
static volatile short **g_917 = &g_918;
static unsigned char g_1035 = 0xFAL;
static int **g_1046[4][8][3] = {{{&g_33[0],&g_33[0],(void*)0},{&g_33[0],(void*)0,(void*)0},{(void*)0,&g_33[0],(void*)0},{(void*)0,&g_33[0],&g_33[0]},{&g_33[0],(void*)0,(void*)0},{&g_33[0],(void*)0,(void*)0},{(void*)0,(void*)0,&g_33[0]},{&g_33[0],&g_33[0],&g_33[0]}},{{(void*)0,(void*)0,&g_33[0]},{(void*)0,&g_33[0],(void*)0},{(void*)0,(void*)0,&g_33[0]},{(void*)0,(void*)0,(void*)0},{&g_33[0],(void*)0,&g_33[0]},{(void*)0,(void*)0,&g_33[0]},{&g_33[0],&g_33[0],&g_33[0]},{(void*)0,(void*)0,&g_33[0]}},{{(void*)0,&g_33[0],(void*)0},{(void*)0,(void*)0,&g_33[0]},{(void*)0,(void*)0,(void*)0},{&g_33[0],(void*)0,&g_33[0]},{(void*)0,(void*)0,&g_33[0]},{&g_33[0],&g_33[0],&g_33[0]},{(void*)0,(void*)0,&g_33[0]},{(void*)0,&g_33[0],(void*)0}},{{(void*)0,(void*)0,&g_33[0]},{(void*)0,(void*)0,(void*)0},{&g_33[0],(void*)0,&g_33[0]},{(void*)0,(void*)0,&g_33[0]},{&g_33[0],&g_33[0],&g_33[0]},{(void*)0,(void*)0,&g_33[0]},{(void*)0,&g_33[0],(void*)0},{(void*)0,(void*)0,&g_33[0]}}};
static char *g_1064 = &g_438;
static char **g_1063 = &g_1064;
static char ***g_1062[1][5][3] = {{{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063}}};
static unsigned ***g_1095 = &g_194;
static int *g_1138 = &g_709;
static int *g_1161 = &g_36[3];
static unsigned char g_1191 = 0x31L;
static unsigned char g_1203 = 0xF2L;
static unsigned char ***g_1251 = (void*)0;
static unsigned *g_1258 = &g_79;
static volatile char g_1337 = 0L;
static short *g_1374 = (void*)0;
static short **g_1373 = &g_1374;
static volatile int *g_1383 = (void*)0;
static volatile int **g_1382 = &g_1383;
static volatile short g_1462 = 0x69C7L;
static char g_1655 = (-4L);
static unsigned char g_1773 = 2UL;
static volatile int g_1852 = 0x1AB70486L;
static volatile unsigned long long g_1858[6] = {0x2BC53350B76A7FFALL,0UL,0x2BC53350B76A7FFALL,0x2BC53350B76A7FFALL,0UL,0x2BC53350B76A7FFALL};
static char ***g_1888 = &g_1063;
static unsigned char g_1936 = 0xD3L;
static volatile long long g_1945 = 1L;
static volatile int *g_1958 = &g_242[6][3];
static volatile int **g_1957 = &g_1958;
static volatile int ***g_1956 = &g_1957;
static volatile int ****g_1955 = &g_1956;
static int g_1984 = 0xF17B4EDFL;
static unsigned g_1985 = 0xCE1A13B9L;
static int ***g_2027 = &g_1046[2][2][0];
static unsigned long long *g_2117 = &g_62;
static unsigned long long **g_2116 = &g_2117;
static volatile long long g_2120 = (-8L);
static volatile char g_2205 = 1L;
static volatile unsigned g_2258 = 0x6D6AE9E3L;
static unsigned g_2326 = 4294967288UL;
static volatile unsigned short g_2386 = 0xAD13L;
static volatile unsigned g_2390[9][1][8] = {{{5UL,0xBF3DC22AL,0xBF3DC22AL,5UL,0xD4F09B74L,0x4669244CL,0xD4F09B74L,5UL}},{{0xBF3DC22AL,0xD4F09B74L,0xBF3DC22AL,4294967293UL,5UL,5UL,4294967293UL,0xBF3DC22AL}},{{0xD4F09B74L,0xD4F09B74L,5UL,0x4669244CL,4294967289UL,0x4669244CL,5UL,0xD4F09B74L}},{{0xD4F09B74L,0xBF3DC22AL,4294967293UL,5UL,5UL,4294967293UL,0xBF3DC22AL,0xD4F09B74L}},{{0xBF3DC22AL,5UL,0xD4F09B74L,0x4669244CL,0xD4F09B74L,5UL,0xBF3DC22AL,0xBF3DC22AL}},{{5UL,0x4669244CL,4294967293UL,4294967293UL,0x4669244CL,5UL,5UL,5UL}},{{0x4669244CL,5UL,5UL,5UL,0x4669244CL,4294967293UL,4294967293UL,0x4669244CL}},{{5UL,0xBF3DC22AL,0xBF3DC22AL,5UL,0xD4F09B74L,0x4669244CL,0xD4F09B74L,5UL}},{{0xBF3DC22AL,0xD4F09B74L,0xBF3DC22AL,4294967293UL,5UL,5UL,4294967293UL,0xBF3DC22AL}}};
static unsigned short g_2417[10][3] = {{65535UL,65535UL,0xD589L},{9UL,0x47CFL,0xD65DL},{0xECA6L,65535UL,0xECA6L},{0xECA6L,9UL,65535UL},{9UL,0xECA6L,0xECA6L},{65535UL,0xECA6L,0xD65DL},{0x47CFL,9UL,0xD589L},{9UL,9UL,0x3F78L},{0x47CFL,0xD589L,65535UL},{0xD65DL,9UL,0xD65DL}};
static unsigned short **g_2494 = &g_384;
static unsigned short ***g_2493 = &g_2494;
static unsigned long long g_2535 = 0x9BB2400DFFC68CA5LL;
static unsigned short g_2552 = 0xEA3DL;
static long long *g_2712[10][2] = {{&g_374,&g_374},{&g_374,&g_374},{&g_374,&g_374},{&g_374,&g_374},{&g_374,&g_374},{&g_374,&g_374},{&g_374,&g_374},{&g_374,&g_374},{&g_374,&g_374},{&g_374,&g_374}};
static int ****g_2732 = (void*)0;
static long long g_2764 = 0x6D338F4C9220868CLL;
static unsigned g_2797 = 0xDCB8569AL;



static long long func_1(void);
static int * func_2(long long p_3, unsigned long long p_4);
static unsigned func_13(long long p_14, char p_15);
static char func_21(long long * p_22, int * p_23, unsigned p_24, int * p_25);
static unsigned long long func_26(long long p_27, int * p_28, int p_29);
static unsigned short func_30(unsigned char p_31, int * p_32);
static int * func_37(unsigned char p_38, long long * p_39, long long * p_40, int p_41, char p_42);
static short func_51(unsigned p_52, int p_53, unsigned p_54);
static unsigned short func_65(int p_66);
static unsigned func_71(short p_72, int * p_73, unsigned p_74, unsigned p_75);
static long long func_1(void)
{
    char l_10 = 0x21L;
    int *l_11 = &g_12;
    int l_18 = (-1L);
    long long *l_19 = &g_20;
    unsigned char *l_1774 = &g_1191;
    unsigned l_1788 = 18446744073709551607UL;
    int *l_2533[6][5] = {{&g_12,&g_12,&g_12,&g_12,&g_308},{&g_709,&g_12,(void*)0,&g_36[6],&g_36[6]},{&g_12,&g_12,&g_12,&g_308,&g_12},{&g_36[6],&g_12,&g_308,&g_36[6],&g_308},{&g_36[6],&g_36[6],(void*)0,&g_12,&g_709},{&g_12,&g_709,&g_308,&g_308,&g_709}};
    unsigned long long *l_2534 = &g_2535;
    int **l_2537 = &l_2533[5][1];
    unsigned short *l_2550 = &g_510;
    unsigned short *l_2551 = &g_2552;
    unsigned *l_2559 = (void*)0;
    unsigned *l_2560 = (void*)0;
    unsigned *l_2561[9][1][3] = {{{&g_2326,(void*)0,&g_2326}},{{&g_79,(void*)0,&g_79}},{{&g_79,&g_2326,&g_2326}},{{&g_79,&g_2326,(void*)0}},{{(void*)0,(void*)0,&g_79}},{{&g_79,(void*)0,(void*)0}},{{(void*)0,&g_2326,&g_2326}},{{&g_79,&g_2326,&g_2326}},{{&g_79,&g_2326,(void*)0}}};
    unsigned short l_2562 = 0x01F6L;
    unsigned char l_2563 = 0x97L;
    int l_2564 = 0xC11A9E5CL;
    unsigned char **l_2565[4][4];
    int l_2576 = (-1L);
    int *l_2611 = &g_855;
    int **l_2610 = &l_2611;
    int l_2612 = 0xA18595CBL;
    char **l_2617 = (void*)0;
    int l_2740 = 0xFC4F42A1L;
    unsigned char l_2752 = 0x04L;
    unsigned char ****l_2761 = &g_1251;
    int ***l_2778[5];
    unsigned long long **l_2789 = (void*)0;
    unsigned long long l_2795 = 0x6E289A5C2EB9A3C3LL;
    unsigned long long l_2796 = 18446744073709551608UL;
    short l_2798 = 0x034CL;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
            l_2565[i][j] = &l_1774;
    }
    for (i = 0; i < 5; i++)
        l_2778[i] = &g_1046[3][0][2];
    (*l_2537) = func_2((g_5 <= (!(-5L))), ((*l_2534) ^= ((*g_2117) = (safe_add_func_int8_t_s_s((((safe_div_func_int32_t_s_s(((*l_11) = l_10), func_13(((*l_19) = ((safe_sub_func_int64_t_s_s((-1L), l_18)) ^ g_5)), func_21(l_19, (func_26(((*g_176) = (((*l_1774) = (0xF630L < ((func_30(g_5, g_33[0]) & g_308) ^ g_1773))) ^ g_859[0][3])), l_11, l_10) , l_11), l_1788, l_11)))) , l_2533[2][3]) != l_2533[2][3]), g_256)))));


    ;


    if (((((safe_mul_func_int16_t_s_s((*l_11), ((*g_195) <= (func_65(((((*g_869) != (*l_11)) && (safe_mod_func_uint64_t_u_u((safe_rshift_func_uint8_t_u_s(((**g_1957) , ((-1L) > ((*l_2551) |= (g_2417[6][0] = ((*l_2550) = (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((*l_11), 4)), (++(***g_2493))))))))), (((safe_sub_func_int32_t_s_s((((*l_1774) = 0x65L) || ((safe_add_func_int32_t_s_s(((*g_1138) = (((safe_add_func_int16_t_s_s(((g_2326 = ((func_65((*l_11)) == (-3L)) , (*g_1258))) ^ (*g_1258)), l_2562)) || (*g_176)) && (*g_176))), l_2563)) ^ 0x66L)), 0xA6DC8ED6L)) ^ (*l_11)) >= 0x9DL))), (**g_2116)))) ^ l_2564)) , 0UL)))) , &l_1774) != l_2565[3][3]) , (**g_1957)))
    {
        int l_2569 = (-8L);
        int l_2574 = 0x6A15A346L;
        int *l_2613 = (void*)0;
        for (g_2552 = 0; (g_2552 <= 2); g_2552 += 1)
        {
            unsigned long long l_2566 = 0x31BC44CD989951A1LL;
            int *l_2573 = &l_2564;
            int **l_2572 = &l_2573;
            int l_2575 = (-2L);
            unsigned long long l_2609 = 7UL;
            --l_2566;
            (***g_1955) = (**g_1956);
            (*g_1138) = (((l_2569 , (safe_lshift_func_int8_t_s_u(l_2569, (*l_11)))) , ((**g_2494) < (l_2572 != (l_2566 , &l_2573)))) , (func_13((((l_2566 , (l_2575 = (func_51((func_51((l_2569 = ((0x9FD953E0L > l_2569) > (**g_2494))), (****g_1955), (*l_11)) <= l_2566), (*l_11), l_2574) ^ 1L))) < l_2566) , 0x0F340885A65EA6BALL), (**g_1063)) != l_2576));
            for (l_2569 = 0; (l_2569 <= 2); l_2569 += 1)
            {
                unsigned long long l_2579 = 0x179D761187F776FFLL;
                long long l_2599[2];
                unsigned l_2600 = 0x013DB163L;
                int i;
                for (i = 0; i < 2; i++)
                    l_2599[i] = 0x9FA0BBECE0B61A9BLL;
                for (g_374 = 0; (g_374 <= 2); g_374 += 1)
                {
                    char l_2584 = 0x1AL;
                    short *l_2591 = &g_139;
                    short *l_2596 = &g_599;
                    int l_2597 = 0xE9EB1BA8L;
                    (*l_2537) = func_2(((*l_19) |= (func_13((safe_rshift_func_uint8_t_u_u((((**g_2116) &= l_2569) , l_2579), (safe_div_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((4294967295UL == (***g_1956)), g_139)) <= (l_2584 | l_2566)), (func_65(l_2566) , 0xC4L))))), (**g_1063)) , 5L)), g_50);
                    (*l_2537) = func_2((safe_unary_minus_func_uint8_t_u((safe_sub_func_uint16_t_u_u((0x719CL || (safe_div_func_uint16_t_u_u(((((*g_176) , ((*g_176) = (safe_unary_minus_func_int16_t_s(((0x6B49L < ((*l_2591) = (l_2584 < ((*g_1382) == ((*l_2572) = (void*)0))))) < (safe_mod_func_uint64_t_u_u((safe_div_func_int16_t_s_s((l_2574 , ((*l_2596) &= l_2569)), (***g_2493))), l_2579))))))) ^ l_2579) || (*g_176)), (*g_918)))), l_2579)))), (*g_2117));
                    (**g_1957) = ((l_2597 = ((*g_1064) = (**g_1063))) > (**g_269));
                    if (l_2599[1])
                    {
                        int i, j, k;
                        --l_2600;
                        if ((***g_1956))
                            continue;
                        l_2575 |= ((****g_1955) >= (safe_div_func_int16_t_s_s(((*g_176) < (+((safe_mod_func_uint8_t_u_u(((*l_1774) ^= l_2574), g_1773)) & (safe_sub_func_int32_t_s_s(l_2609, (&l_2573 != l_2610)))))), (***g_2493))));
                    }
                    else
                    {
                        (*g_1958) = 0L;
                    }
                }

                ;
                return l_2612;
            }
        }
        l_2613 = ((*l_2537) = &l_2574);


        ;
        (*l_2613) &= (*g_1958);
    }
    else
    {
        char **l_2616 = &g_1064;
        int l_2619 = 1L;
        unsigned short l_2622[4] = {0xB2D2L,0xB2D2L,0xB2D2L,0xB2D2L};
        int l_2640 = 0x8E63BEC5L;
        char l_2664 = (-1L);
        int l_2669[2][5] = {{2L,2L,2L,2L,2L},{0x2CA005A3L,0xD94B3305L,0x2CA005A3L,0xD94B3305L,0x2CA005A3L}};
        unsigned char ***l_2689 = &l_2565[1][1];
        int *l_2691 = &l_2619;
        unsigned char ****l_2700 = &g_1251;
        unsigned long long l_2723 = 0UL;
        int *l_2753 = &l_2576;
        unsigned short l_2773 = 0UL;
        int ****l_2779 = &l_2778[4];
        int l_2786 = 1L;
        int i, j;
        for (l_1788 = (-17); (l_1788 > 57); l_1788 = safe_add_func_int64_t_s_s(l_1788, 9))
        {
            unsigned char l_2618 = 255UL;
            unsigned l_2656 = 4294967294UL;
            int *l_2658 = &g_1984;
            int l_2665 = (-1L);
            int l_2667 = 3L;
            int l_2668 = 1L;
            unsigned long long l_2675 = 3UL;
            char l_2688 = (-10L);
            unsigned **l_2698 = &l_2559;
            unsigned l_2754 = 0x8322908EL;
            (*g_1958) = ((l_2617 = l_2616) == l_2616);

            ;
        }

        ;
        (***g_1956) &= ((*l_2753) , (*g_1138));
        (*g_1138) &= ((safe_rshift_func_int8_t_s_s(l_2773, (*l_11))) ^ (((safe_rshift_func_int16_t_s_s((*l_11), 14)) <= l_2786) | (*l_2691)));
    }


    ;
    (*l_2537) = func_2(((*l_11) <= (safe_add_func_uint64_t_u_u((&l_2534 == l_2789), (0L || ((safe_unary_minus_func_uint16_t_u(((safe_mod_func_int16_t_s_s(func_13(((*g_918) >= ((*g_195) | (*g_1138))), (safe_add_func_int64_t_s_s(((!((l_2796 |= ((((((func_65((*g_1138)) > g_1985) == 0L) != 1UL) < (*g_1258)) != l_2795) < 0xDEL)) < g_2797)) ^ 0x80AA3DC9A6576FB2LL), (-1L)))), l_2798)) >= 0x8CE2L))) , (*g_176)))))), (**g_2116));
    return (*g_176);
}







static int * func_2(long long p_3, unsigned long long p_4)
{
    int *l_2536 = &g_308;
    (****g_1955) = 0xC7C7AA26L;
    return l_2536;


}







static unsigned func_13(long long p_14, char p_15)
{
    int l_2511 = (-1L);
    int *l_2512[4];
    char l_2513 = 0x5DL;
    char l_2514 = (-9L);
    short l_2515 = 0L;
    long long l_2516 = 0x8405F11542B67C5DLL;
    char l_2517 = (-9L);
    char l_2518 = 0x1AL;
    unsigned char l_2519 = 0xA9L;
    unsigned *l_2526 = (void*)0;
    unsigned *l_2527 = &g_1985;
    int l_2528[3][6] = {{0xA67816D7L,0L,0x62546BC3L,0L,0xA67816D7L,0x62546BC3L},{0L,0xA67816D7L,0x62546BC3L,0x281CFC75L,0x281CFC75L,0x62546BC3L},{0x281CFC75L,0x281CFC75L,0x62546BC3L,0xA67816D7L,0L,0x62546BC3L}};
    unsigned **l_2529[6][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1258,(void*)0,&g_1258,&g_1258,(void*)0,&g_1258,&g_1258,(void*)0},{(void*)0,&g_1258,&g_1258,(void*)0,&g_1258,&g_1258,(void*)0,&g_1258},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_1258,(void*)0,&g_1258,&g_1258,(void*)0,&g_1258,&g_1258,(void*)0},{(void*)0,&g_1258,&g_1258,(void*)0,&g_1258,&g_1258,(void*)0,&g_1258}};
    int l_2532 = (-8L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_2512[i] = &g_36[1];
    ++l_2519;
    (***g_1956) = (safe_sub_func_int64_t_s_s((safe_lshift_func_int8_t_s_s((p_14 && 0x89B92CFFL), ((**g_1063) = ((*g_1095) == ((((*l_2527) = p_15) , l_2528[0][1]) , l_2529[4][7]))))), (safe_div_func_uint8_t_u_u(l_2532, p_15))));
    return p_14;
}







static char func_21(long long * p_22, int * p_23, unsigned p_24, int * p_25)
{
    short *l_1793 = &g_599;
    int l_1801 = 1L;
    unsigned short l_1825 = 65535UL;
    int l_1849 = 0x9199ED18L;
    int l_1855 = 0x5F89738BL;
    int l_1856[6];
    unsigned l_1861[3];
    unsigned char ****l_1889 = (void*)0;
    unsigned short **l_1897 = &g_384;
    int l_1900 = 3L;
    unsigned ***l_1921 = (void*)0;
    char **l_1922 = &g_1064;
    int *l_1939 = &g_305;
    int l_1992 = 4L;
    int l_2010[1][8][7] = {{{6L,6L,0xA03A67FCL,0xC3C599F4L,(-1L),0xA03A67FCL,(-1L)},{(-4L),0x753BC47FL,0x753BC47FL,(-4L),(-3L),0x2FD38EE5L,(-4L)},{0x00F0D292L,(-1L),0xDD79ECDAL,0xDD79ECDAL,(-1L),0x00F0D292L,(-5L)},{0x980F06EDL,(-4L),(-1L),0xDFDF0037L,0x753BC47FL,(-4L),(-3L)},{0x00F0D292L,(-1L),0xA03A67FCL,0x00F0D292L,0xE048C7DDL,0xE048C7DDL,0x00F0D292L},{(-1L),(-3L),(-1L),0x7B79DAD9L,(-3L),0x2D3D38F9L,0x2D3D38F9L},{0xDD79ECDAL,0x00F0D292L,0xC3C599F4L,0x00F0D292L,0xDD79ECDAL,0xC3C599F4L,(-5L)},{0x753BC47FL,0x2D3D38F9L,0x7B79DAD9L,0x753BC47FL,0x7B79DAD9L,0x2D3D38F9L,0x753BC47FL}}};
    unsigned long long **l_2118[10] = {&g_2117,&g_2117,&g_2117,&g_2117,&g_2117,&g_2117,&g_2117,&g_2117,&g_2117,&g_2117};
    long long **l_2147 = (void*)0;
    long long ***l_2146 = &l_2147;
    long long l_2148 = 0x5E86B153D8A28753LL;
    short l_2178 = (-10L);
    unsigned short l_2206 = 0xB9EEL;
    unsigned l_2238 = 0UL;
    int *l_2263[4][5];
    char *l_2282 = &g_784[0];
    int *l_2285 = &l_1900;
    unsigned char l_2303 = 0x99L;
    unsigned l_2396 = 1UL;
    unsigned l_2506[5][9] = {{6UL,0xFFA57124L,0xFE10D666L,0xFE10D666L,0xFFA57124L,6UL,0xFFA57124L,0xFE10D666L,0xFE10D666L},{2UL,2UL,0x36AF643EL,1UL,0x36AF643EL,2UL,2UL,0x36AF643EL,1UL},{18446744073709551615UL,0xFFA57124L,18446744073709551615UL,6UL,6UL,18446744073709551615UL,0xFFA57124L,18446744073709551615UL,6UL},{18446744073709551615UL,0x36AF643EL,0x36AF643EL,18446744073709551615UL,0xF364B076L,18446744073709551615UL,0x36AF643EL,0x36AF643EL,18446744073709551615UL},{0x0AFC6248L,6UL,0xFE10D666L,6UL,0x0AFC6248L,0x0AFC6248L,6UL,0xFE10D666L,6UL}};
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1856[i] = 0L;
    for (i = 0; i < 3; i++)
        l_1861[i] = 18446744073709551609UL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
            l_2263[i][j] = &l_1855;
    }
    for (p_24 = 0; (p_24 <= 0); p_24 += 1)
    {
        unsigned l_1789 = 4294967295UL;
        int l_1799 = (-9L);
        int l_1853[3];
        unsigned **l_1864 = &g_195;
        char ***l_1886 = &g_1063;
        long long **l_1906 = &g_176;
        unsigned l_1942 = 18446744073709551612UL;
        char l_2009 = 0x0CL;
        unsigned short *l_2086 = &l_1825;
        int l_2090 = 0L;
        int l_2099[6][2] = {{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_1853[i] = 0L;
        if (l_1789)
            break;
        if ((l_1789 , (safe_unary_minus_func_int16_t_s(l_1789))))
        {
            unsigned l_1800 = 0UL;
            int l_1802[9] = {7L,7L,7L,7L,7L,7L,7L,7L,7L};
            int *l_1812 = &g_308;
            unsigned short l_1813 = 1UL;
            unsigned l_1822[8][3][8] = {{{4294967288UL,0x9CDF9C77L,0x184DCC80L,0UL,4294967292UL,4294967288UL,0xC41AC3DCL,0xC41AC3DCL},{0x184DCC80L,4294967288UL,0UL,0UL,4294967288UL,0x184DCC80L,0xC41AC3DCL,0xF0D0714AL},{0xD78F4F82L,0UL,0x184DCC80L,4294967288UL,0UL,4294967293UL,0UL,4294967288UL}},{{0UL,4294967293UL,0UL,4294967288UL,0x184DCC80L,0UL,0xD78F4F82L,0xF0D0714AL},{0xC41AC3DCL,0x184DCC80L,4294967288UL,0UL,0UL,4294967288UL,0x184DCC80L,0xC41AC3DCL},{0xC41AC3DCL,4294967288UL,4294967292UL,0UL,0x184DCC80L,0x9CDF9C77L,4294967288UL,0x9CDF9C77L}},{{0UL,4294967295UL,0xF0D0714AL,4294967295UL,0UL,0x9CDF9C77L,4294967293UL,0x184DCC80L},{0xD78F4F82L,4294967288UL,4294967295UL,0x5BFB66FEL,4294967288UL,4294967288UL,0x5BFB66FEL,4294967295UL},{0x184DCC80L,0x184DCC80L,4294967295UL,0xC41AC3DCL,4294967292UL,0UL,4294967293UL,0xD78F4F82L}},{{4294967288UL,4294967293UL,0xF0D0714AL,0x184DCC80L,0xF0D0714AL,4294967293UL,4294967288UL,0xD78F4F82L},{4294967293UL,0UL,4294967292UL,0xC41AC3DCL,0xD78F4F82L,0xF0D0714AL,0xF0D0714AL,0xD78F4F82L},{4294967292UL,0x9CDF9C77L,0x9CDF9C77L,4294967292UL,0xD78F4F82L,4294967288UL,4294967293UL,0xF0D0714AL}},{{0UL,0x5BFB66FEL,0xC41AC3DCL,0xD78F4F82L,4294967295UL,0xD78F4F82L,0xC41AC3DCL,0x5BFB66FEL},{0x9CDF9C77L,0x5BFB66FEL,0xF0D0714AL,0xC41AC3DCL,0x184DCC80L,4294967288UL,0UL,0UL},{0xF0D0714AL,0x9CDF9C77L,4294967288UL,4294967288UL,0x9CDF9C77L,0xF0D0714AL,0UL,4294967295UL}},{{4294967293UL,4294967288UL,0xF0D0714AL,4294967288UL,0xC41AC3DCL,0UL,0xC41AC3DCL,4294967288UL},{0xC41AC3DCL,0UL,0xC41AC3DCL,4294967288UL,0xF0D0714AL,4294967288UL,4294967293UL,4294967295UL},{0UL,0xF0D0714AL,0x9CDF9C77L,4294967288UL,4294967288UL,0x9CDF9C77L,0xF0D0714AL,0UL}},{{0UL,4294967288UL,0x184DCC80L,0xC41AC3DCL,0xF0D0714AL,0x5BFB66FEL,0x9CDF9C77L,0x5BFB66FEL},{0xC41AC3DCL,0xD78F4F82L,4294967295UL,0xD78F4F82L,0xC41AC3DCL,0x5BFB66FEL,0UL,0xF0D0714AL},{4294967293UL,4294967288UL,0xD78F4F82L,4294967292UL,0x9CDF9C77L,0x9CDF9C77L,4294967292UL,0xD78F4F82L}},{{0xF0D0714AL,0xF0D0714AL,0xD78F4F82L,0UL,0x184DCC80L,4294967288UL,0UL,4294967293UL},{0x9CDF9C77L,0UL,4294967295UL,4294967295UL,0xD78F4F82L,0xC41AC3DCL,0x5BFB66FEL,0UL},{0xC41AC3DCL,4294967288UL,0xF0D0714AL,4294967288UL,4294967293UL,4294967295UL,4294967295UL,4294967293UL}}};
            int i, j, k;
            for (g_374 = 0; (g_374 <= 3); g_374 += 1)
            {
                int l_1798 = 0x8AD896C1L;
                int i, j;
                if (g_242[(p_24 + 8)][g_374])
                    break;
                for (g_1773 = 0; (g_1773 <= 0); g_1773 += 1)
                {
                    volatile int *l_1792 = &g_242[5][3];
                    volatile int **l_1791 = &l_1792;
                    int i, j;
                    (*l_1791) = &g_242[(g_374 + 3)][(p_24 + 3)];
                    for (g_50 = 0; (g_50 <= 0); g_50 += 1)
                    {
                        int i, j, k;
                        g_242[(g_50 + 7)][g_374] &= ((*g_1161) = ((*g_1138) = func_65(g_46[(g_50 + 5)][(g_50 + 3)][p_24])));
                        (**l_1791) ^= ((0UL > g_46[(g_50 + 5)][(g_374 + 1)][p_24]) == ((void*)0 == l_1793));
                    }
                }
                for (g_438 = 3; (g_438 >= 0); g_438 -= 1)
                {
                    int i, j, k;
                    g_242[(p_24 + 5)][(p_24 + 3)] = (safe_mul_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((*l_1793) = 0x7A65L), ((g_46[p_24][g_374][p_24] , (g_242[(g_438 + 4)][g_374] ^ ((l_1799 ^= l_1798) , (((l_1789 | (g_46[p_24][g_374][p_24] != func_26((l_1800 , l_1801), p_25, l_1789))) < (*g_176)) && l_1800)))) , 0x5D33L))), (-1L)));
                    g_242[(p_24 + 2)][p_24] = l_1799;
                }
            }
            for (g_50 = 0; (g_50 <= 0); g_50 += 1)
            {
                int l_1830 = (-7L);
                (*g_1138) &= (safe_rshift_func_int8_t_s_u(l_1830, 3));
                return p_24;
            }
            for (g_374 = 0; (g_374 <= 0); g_374 += 1)
            {
                int l_1845 = (-1L);
                short l_1846 = 0x505DL;
                int l_1851 = (-6L);
                int l_1854 = 0x05AF75FBL;
                int l_1857[5] = {0xE2EE0BD2L,0xE2EE0BD2L,0xE2EE0BD2L,0xE2EE0BD2L,0xE2EE0BD2L};
                int i;
                for (g_50 = 0; (g_50 <= 0); g_50 += 1)
                {
                    long long l_1844 = 1L;
                    int l_1847 = 0x510A7412L;
                    int l_1848 = 0xA8A7E8B7L;
                    int l_1850[8];
                    unsigned **l_1875 = &g_1258;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1850[i] = 1L;
                    (*g_1138) = l_1789;
                    for (g_438 = 0; (g_438 <= 5); g_438 += 1)
                    {
                        int *l_1831 = &l_1801;
                        int *l_1832 = (void*)0;
                        int *l_1833 = &l_1802[1];
                        int *l_1834 = &g_36[2];
                        int *l_1835 = &g_709;
                        int *l_1836 = &g_36[3];
                        int *l_1837 = &g_709;
                        int *l_1838 = &l_1802[4];
                        int *l_1839 = &l_1801;
                        int *l_1840 = &l_1801;
                        int *l_1841 = &g_36[6];
                        int *l_1842 = &l_1801;
                        int *l_1843[10] = {&g_308,&g_308,&g_308,&g_308,&g_308,&g_308,&g_308,&g_308,&g_308,&g_308};
                        int **l_1876 = &l_1843[2];
                        int i;
                        g_1858[5]--;
                        l_1861[1]++;
                        (*l_1842) ^= (l_1864 != ((0x1BL > (((safe_mod_func_int64_t_s_s(func_26(g_784[(p_24 + 3)], p_25, (safe_lshift_func_uint16_t_u_u((((safe_lshift_func_int16_t_s_u(g_784[g_438], 8)) && (safe_div_func_uint64_t_u_u(func_26(g_784[(g_374 + 2)], p_23, (safe_sub_func_uint16_t_u_u(p_24, (l_1853[0] < p_24)))), (*g_176)))) , (*g_869)), 9))), g_50)) , (void*)0) != &g_384)) , l_1875));
                        (*l_1876) = p_25;


                    }
                    (*l_1812) = ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((&g_1383 != (void*)0), 6)), (safe_mod_func_int32_t_s_s(((((*g_869) == (!((safe_sub_func_uint16_t_u_u(((l_1845 == ((*g_1161) &= l_1861[1])) >= l_1845), g_50)) && l_1850[0]))) , &l_1864) == (void*)0), (*g_1138))))) , l_1851);
                    for (g_1203 = 0; (g_1203 <= 0); g_1203 += 1)
                    {
                        unsigned char l_1885 = 8UL;
                        (*g_1161) = l_1885;
                    }
                }
                if (l_1849)
                    continue;
                for (l_1846 = 0; (l_1846 <= 0); l_1846 += 1)
                {
                    char ****l_1887[7] = {&g_1062[0][2][0],&g_1062[0][2][0],&l_1886,&g_1062[0][2][0],&g_1062[0][2][0],&l_1886,&g_1062[0][2][0]};
                    int i;
                    (*g_1138) &= (+(((*g_195) ^= (((g_1062[0][2][0] = l_1886) == (g_1888 = ((*l_1812) , &g_1063))) && 0xA6B8F9AD1E1EA803LL)) , (&g_1251 == l_1889)));
                    (*l_1812) = (*g_1161);
                }
            }
        }
        else
        {
            long long l_1895 = 0xDC658C38B956188CLL;
            unsigned ***l_1920[5] = {&g_194,&g_194,&g_194,&g_194,&g_194};
            int l_1929 = 0xF892F54DL;
            int l_1932 = 0xCDCBAFF7L;
            int l_1933 = 0x805CE073L;
            int l_1934 = 9L;
            int l_1935 = (-1L);
            int i;
            for (g_855 = 0; (g_855 >= 0); g_855 -= 1)
            {
                unsigned short **l_1899 = &g_384;
                unsigned short ***l_1898 = &l_1899;
                unsigned long long *l_1905 = &g_62;
                long long ***l_1907 = (void*)0;
                long long ***l_1908[9] = {&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906,&l_1906};
                int l_1913 = 0xFFD8805FL;
                unsigned ***l_1917 = &l_1864;
                int l_1930 = (-1L);
                int l_1931[9];
                int i;
                for (i = 0; i < 9; i++)
                    l_1931[i] = 0xED721E8AL;
                for (l_1789 = 0; (l_1789 <= 0); l_1789 += 1)
                {
                    (*g_1161) = (safe_sub_func_int64_t_s_s((((safe_mod_func_int32_t_s_s(p_24, p_24)) , ((safe_unary_minus_func_uint8_t_u((*g_270))) == p_24)) || (g_439[2][0][0] , (*g_918))), l_1895));
                }
            }
        }
        for (g_438 = 0; (g_438 <= 0); g_438 += 1)
        {
            int *l_1941[3];
            unsigned l_1952 = 0xFE747541L;
            char ***l_1968 = &g_1063;
            unsigned short *l_1976 = (void*)0;
            int ***l_2025 = &g_1046[1][1][0];
            long long *l_2042[9][5][3] = {{{&g_859[0][3],&g_859[0][3],&g_859[0][4]},{&g_374,&g_859[0][3],&g_859[0][4]},{&g_859[0][3],&g_177,&g_177},{&g_374,&g_177,&g_859[0][1]},{&g_859[0][3],&g_859[0][3],&g_177}},{{&g_859[0][3],&g_859[0][3],&g_859[0][4]},{&g_374,&g_859[0][3],&g_859[0][4]},{&g_859[0][3],&g_177,&g_177},{&g_374,&g_177,&g_859[0][1]},{&g_859[0][3],&g_859[0][3],&g_177}},{{&g_859[0][3],&g_859[0][3],&g_859[0][4]},{&g_374,&g_859[0][3],&g_859[0][4]},{&g_859[0][3],&g_177,&g_177},{&g_374,&g_177,&g_859[0][1]},{&g_859[0][3],&g_859[0][3],&g_177}},{{&g_859[0][3],&g_177,&g_859[0][3]},{(void*)0,&g_859[0][5],&g_859[0][3]},{&g_859[0][5],&g_374,&g_374},{(void*)0,&g_374,&g_859[0][3]},{&g_177,&g_859[0][5],&g_374}},{{&g_177,&g_177,&g_859[0][3]},{(void*)0,&g_859[0][5],&g_859[0][3]},{&g_859[0][5],&g_374,&g_374},{(void*)0,&g_374,&g_859[0][3]},{&g_177,&g_859[0][5],&g_374}},{{&g_177,&g_177,&g_859[0][3]},{(void*)0,&g_859[0][5],&g_859[0][3]},{&g_859[0][5],&g_374,&g_374},{(void*)0,&g_374,&g_859[0][3]},{&g_177,&g_859[0][5],&g_374}},{{&g_177,&g_177,&g_859[0][3]},{(void*)0,&g_859[0][5],&g_859[0][3]},{&g_859[0][5],&g_374,&g_374},{(void*)0,&g_374,&g_859[0][3]},{&g_177,&g_859[0][5],&g_374}},{{&g_177,&g_177,&g_859[0][3]},{(void*)0,&g_859[0][5],&g_859[0][3]},{&g_859[0][5],&g_374,&g_374},{(void*)0,&g_374,&g_859[0][3]},{&g_177,&g_859[0][5],&g_374}},{{&g_177,&g_177,&g_859[0][3]},{(void*)0,&g_859[0][5],&g_859[0][3]},{&g_859[0][5],&g_374,&g_374},{(void*)0,&g_374,&g_859[0][3]},{&g_177,&g_859[0][5],&g_374}}};
            unsigned char l_2043[5] = {1UL,1UL,1UL,1UL,1UL};
            unsigned l_2061 = 0x862143E2L;
            int l_2063 = 0x8EB5C6D1L;
            unsigned l_2067 = 4294967295UL;
            unsigned short l_2080 = 65528UL;
            int i, j, k;
            for (i = 0; i < 3; i++)
                l_1941[i] = &l_1853[2];
            for (g_599 = 0; (g_599 >= 0); g_599 -= 1)
            {
                int **l_1940 = (void*)0;
                short *l_1951 = (void*)0;
                unsigned *l_1981 = &l_1952;
                unsigned l_2020 = 0UL;
                p_23 = &l_1855;

                ;
            }
            for (g_709 = 0; (g_709 >= 0); g_709 -= 1)
            {
                int ****l_2026[3];
                long long *l_2046 = &g_859[0][3];
                unsigned l_2058[2];
                unsigned short *l_2085 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_2026[i] = &l_2025;
                for (i = 0; i < 2; i++)
                    l_2058[i] = 18446744073709551613UL;
            }
        }
    }

    ;
    if (((l_1897 == &g_869) <= func_51((safe_sub_func_uint8_t_u_u(func_71((*l_1939), &l_1855, p_24, p_24), p_24)), (*g_1138), (*l_1939))))
    {
        unsigned l_2138 = 4294967295UL;
        unsigned char l_2175[6] = {0x37L,0x37L,0x37L,0x37L,0x37L,0x37L};
        int l_2179 = 0L;
        int l_2180 = 0xC9DEA173L;
        int l_2181 = (-1L);
        int l_2182 = 0L;
        int l_2183 = (-3L);
        unsigned short ***l_2233 = &l_1897;
        int *l_2242 = (void*)0;
        int **l_2241 = &l_2242;
        int *l_2262 = &l_1856[0];
        int i;
        for (g_50 = 0; (g_50 <= 0); g_50 += 1)
        {
            short l_2145[2][10];
            int l_2160 = 0x1FA4E184L;
            int l_2161 = 3L;
            int l_2174[8][7][4] = {{{0x3C0790F9L,1L,0x03F31F3AL,0x03F31F3AL},{1L,1L,0L,2L},{1L,0x3C0790F9L,0x03F31F3AL,2L},{0x3C0790F9L,1L,0x03F31F3AL,0x03F31F3AL},{1L,1L,0L,2L},{1L,0x3C0790F9L,0x03F31F3AL,2L},{0x3C0790F9L,1L,0x03F31F3AL,0x03F31F3AL}},{{1L,1L,0L,2L},{1L,0x3C0790F9L,0x03F31F3AL,2L},{0x3C0790F9L,1L,0x03F31F3AL,0x03F31F3AL},{1L,1L,0L,2L},{1L,0x3C0790F9L,0x03F31F3AL,2L},{0x3C0790F9L,1L,0x03F31F3AL,0x03F31F3AL},{1L,1L,0L,2L}},{{1L,0x3C0790F9L,0x03F31F3AL,2L},{0x3C0790F9L,1L,0x03F31F3AL,0x03F31F3AL},{1L,1L,0L,2L},{1L,0x3C0790F9L,0x03F31F3AL,2L},{0x3C0790F9L,1L,0x03F31F3AL,0x03F31F3AL},{1L,1L,0L,2L},{1L,0x3C0790F9L,0x03F31F3AL,2L}},{{0x3C0790F9L,1L,0x03F31F3AL,0x03F31F3AL},{1L,1L,0L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L},{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L}},{{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L},{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L},{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL}},{{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L},{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L},{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL}},{{0x3430AFE1L,0x3C0790F9L,0L,0L},{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L},{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L}},{{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L},{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL},{0x3C0790F9L,0x3430AFE1L,0L,0x03F31F3AL},{0x3430AFE1L,0x3C0790F9L,0L,0L},{0x3C0790F9L,0x3C0790F9L,2L,0x03F31F3AL}}};
            long long l_2187[5][4] = {{6L,6L,1L,8L},{8L,0L,1L,0L},{6L,1L,(-3L),1L},{0L,1L,1L,0L},{1L,0L,6L,8L}};
            unsigned short l_2218 = 5UL;
            short l_2226[8] = {6L,6L,(-7L),6L,6L,(-7L),6L,6L};
            int l_2257 = 5L;
            int l_2261 = 0x7947BC61L;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 10; j++)
                    l_2145[i][j] = 0x9FA6L;
            }
            if ((safe_sub_func_uint8_t_u_u((*g_270), ((func_26(l_2138, p_23, (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s((g_510 , (p_24 , ((func_65(((((*g_2117) != (safe_rshift_func_uint8_t_u_s(l_2138, 5))) > func_65((*l_1939))) > l_2138)) != 1UL) | 1UL))), 4)) != l_2145[0][1]), 1UL))) , l_2138) > l_2138))))
            {
                short l_2158 = 0L;
                char ****l_2159 = &g_1062[0][2][0];
                int l_2168 = 0xECAC81F4L;
                int l_2169 = 0xF4F49C8EL;
                int l_2172 = 0x9B8FBCA8L;
                int l_2173 = 0L;
                int l_2184 = 0xB4CBE2E4L;
                int l_2185 = 0x349766CEL;
                if ((*l_1939))
                {
                    (**g_1956) = (**g_1956);
                    (*l_1939) = (l_2148 = (((void*)0 == l_2146) && l_2145[0][4]));
                }
                else
                {
                    return (***g_1888);



                }
                if ((*l_1939))
                {
                    unsigned long long l_2149 = 0xA079E201509AACC8LL;
                    int l_2170 = (-7L);
                    int l_2171[5][6][8] = {{{2L,0xDB3315A4L,0x0F63CC25L,0L,2L,0L,(-10L),0x2AD7E1A4L},{0xDB3315A4L,0x074CCCD6L,1L,0x0F63CC25L,(-3L),0x08AE73E5L,0x9E979D94L,0L},{0x4DF2417EL,0L,1L,0x7BA10509L,(-1L),2L,(-10L),0x7BA10509L},{(-3L),0x6DBDAC93L,0x0F63CC25L,0x2AD7E1A4L,0x4FC96F67L,2L,0x9E979D94L,0x9E979D94L},{0x074CCCD6L,0x08AE73E5L,0x0F63CC25L,0x0F63CC25L,0x08AE73E5L,0x074CCCD6L,0L,0L},{0x074CCCD6L,0x6DBDAC93L,(-10L),1L,0xDB3315A4L,0x08AE73E5L,(-10L),0x7A3299E8L}},{{2L,(-1L),0x7BA10509L,1L,0L,0x4DF2417EL,0x1ED81989L,0L},{(-3L),0L,0L,0x0F63CC25L,2L,0x6DBDAC93L,0x1ED81989L,0x9E979D94L},{(-1L),(-3L),0x7BA10509L,0x1ED81989L,0x4FC96F67L,(-3L),(-10L),0L},{0x4FC96F67L,(-3L),(-10L),0L,0x6DBDAC93L,0x6DBDAC93L,0L,(-10L)},{0L,0L,0x0F63CC25L,(-1L),0x6DBDAC93L,0x4DF2417EL,0x9E979D94L,0x1ED81989L},{0x4FC96F67L,(-1L),(-1L),(-10L),0x4FC96F67L,0x08AE73E5L,0L,0x1ED81989L}},{{(-1L),0x6DBDAC93L,0x9E979D94L,(-1L),2L,0x074CCCD6L,0x7A3299E8L,(-10L)},{(-3L),0x08AE73E5L,0x9E979D94L,0L,0L,0x4FC96F67L,0L,0L},{2L,0L,(-1L),0x1ED81989L,0xDB3315A4L,0x4FC96F67L,0x9E979D94L,0x9E979D94L},{0x074CCCD6L,0x08AE73E5L,0x0F63CC25L,0x0F63CC25L,0x08AE73E5L,(-3L),0x9E979D94L,0x2AD7E1A4L},{(-3L),2L,0x7A3299E8L,0x1ED81989L,0x074CCCD6L,0x4DF2417EL,0x7A3299E8L,(-1L)},{0L,0x6DBDAC93L,1L,0x1ED81989L,0L,0xDB3315A4L,0L,0x2AD7E1A4L}},{{(-1L),0L,0x2AD7E1A4L,(-10L),0L,2L,0L,0x0F63CC25L},{0x6DBDAC93L,(-1L),1L,0L,0x08AE73E5L,(-1L),0x7A3299E8L,0x9E979D94L},{0x08AE73E5L,(-1L),0x7A3299E8L,0x9E979D94L,2L,2L,0x9E979D94L,0x7A3299E8L},{0L,0L,(-10L),0L,2L,0xDB3315A4L,0x0F63CC25L,0L},{0x08AE73E5L,0x6DBDAC93L,0L,0x7A3299E8L,0x08AE73E5L,0x4DF2417EL,0x2AD7E1A4L,0L},{0x6DBDAC93L,2L,0x0F63CC25L,0L,0L,(-3L),(-1L),0x7A3299E8L}},{{(-1L),0x4DF2417EL,0x0F63CC25L,0x9E979D94L,0L,0x08AE73E5L,0x2AD7E1A4L,0x9E979D94L},{0L,0x4FC96F67L,0L,0L,0x074CCCD6L,0x08AE73E5L,0x0F63CC25L,0x0F63CC25L},{(-3L),0x4DF2417EL,(-10L),(-10L),0x4DF2417EL,(-3L),0x9E979D94L,0x2AD7E1A4L},{(-3L),2L,0x7A3299E8L,0x1ED81989L,0x6DBDAC93L,(-3L),0x2AD7E1A4L,0x7BA10509L},{0x08AE73E5L,0L,0x9E979D94L,0x0F63CC25L,0x4DF2417EL,(-1L),(-10L),0x1ED81989L},{0L,0x4DF2417EL,0x1ED81989L,0L,0x08AE73E5L,0x4FC96F67L,(-10L),(-1L)}}};
                    unsigned long long l_2188 = 6UL;
                    int i, j, k;
                    if (((*g_1161) = (l_2149 , (safe_sub_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_24, p_24)), (safe_mul_func_uint16_t_u_u((((*g_384) = 0xACC0L) || (**g_917)), (((safe_mul_func_int16_t_s_s(((&g_1062[0][2][0] != ((*l_1939) , (l_2158 , l_2159))) ^ 0x9E66D17459A9C194LL), g_784[0])) , l_2149) | l_2145[1][3]))))))))
                    {
                        int *l_2162 = &l_1801;
                        int *l_2163 = &l_2161;
                        int *l_2164 = &g_308;
                        int *l_2165 = &g_305;
                        int *l_2166 = (void*)0;
                        int *l_2167[10][7][3] = {{{&l_1856[0],&g_1984,&l_2161},{(void*)0,&l_1900,(void*)0},{&l_2161,&g_1984,&l_1849},{&l_1856[0],&g_1984,&l_1900},{&l_2161,&g_36[2],&g_1984},{(void*)0,&g_709,&g_36[2]},{&l_1856[0],&g_36[2],&l_1856[0]}},{{(void*)0,&g_1984,&l_1856[0]},{(void*)0,&g_1984,&l_1856[0]},{&l_1856[0],&l_1900,&g_36[2]},{&g_36[6],&g_1984,&g_1984},{&l_1856[0],&g_36[1],&l_1900},{(void*)0,&l_2160,&l_1849},{(void*)0,&g_36[1],(void*)0}},{{&l_1856[0],&g_1984,&l_2161},{(void*)0,&l_1900,(void*)0},{&l_2161,&g_1984,&l_1849},{&l_1856[0],&g_1984,&l_1900},{&l_2161,&g_36[2],&g_1984},{(void*)0,&g_709,&g_36[2]},{&l_1856[0],&g_36[2],&l_1856[0]}},{{(void*)0,&g_1984,&l_1856[0]},{(void*)0,&g_1984,&l_1856[0]},{&l_1856[0],&l_1900,&g_36[2]},{&g_36[6],&g_1984,&g_1984},{&l_1856[0],&g_36[6],&g_36[2]},{&l_1900,&g_1984,&g_36[6]},{(void*)0,&g_36[6],(void*)0}},{{(void*)0,&g_36[4],&g_1984},{&l_1801,&g_1984,(void*)0},{&g_1984,&g_1984,&g_36[6]},{(void*)0,&l_2161,&g_36[2]},{&g_1984,&l_1849,&l_1849},{&l_1801,&l_1900,&l_1856[0]},{(void*)0,&l_1849,(void*)0}},{{(void*)0,&l_2161,&l_1900},{&l_1900,&g_1984,(void*)0},{&l_1900,&g_1984,&l_1856[0]},{&l_1856[0],&g_36[4],&l_1849},{&l_1900,&g_36[6],&g_36[2]},{&l_1900,&g_1984,&g_36[6]},{(void*)0,&g_36[6],(void*)0}},{{(void*)0,&g_36[4],&g_1984},{&l_1801,&g_1984,(void*)0},{&g_1984,&g_1984,&g_36[6]},{(void*)0,&l_2161,&g_36[2]},{&g_1984,&l_1849,&l_1849},{&l_1801,&l_1900,&l_1856[0]},{(void*)0,&l_1849,(void*)0}},{{(void*)0,&l_2161,&l_1900},{&l_1900,&g_1984,(void*)0},{&l_1900,&g_1984,&l_1856[0]},{&l_1856[0],&g_36[4],&l_1849},{&l_1900,&g_36[6],&g_36[2]},{&l_1900,&g_1984,&g_36[6]},{(void*)0,&g_36[6],(void*)0}},{{(void*)0,&g_36[4],&g_1984},{&l_1801,&l_1801,(void*)0},{(void*)0,&g_36[6],&l_1855},{&g_305,&l_1856[2],&g_305},{(void*)0,&l_1900,&l_1849},{&l_1801,&l_1849,&l_1849},{&l_1849,&l_1900,&l_1849}},{{(void*)0,&l_1856[2],&g_36[6]},{&l_2160,&g_36[6],&l_1849},{&g_36[6],&l_1801,&l_1849},{&l_2161,&l_1856[0],&l_1849},{&g_36[6],&l_1856[0],&g_305},{&l_2160,&l_1849,&l_1855},{(void*)0,&l_1856[0],(void*)0}}};
                        short l_2186[10][2][10] = {{{1L,(-1L),(-1L),0L,3L,(-1L),1L,0x4587L,1L,1L},{0x4587L,3L,0xDB68L,(-1L),3L,1L,0x2AD1L,0x2AD1L,1L,3L}},{{3L,1L,1L,3L,1L,(-1L),0x2AD1L,1L,0L,(-1L)},{0L,3L,(-1L),1L,0x4587L,1L,1L,0x2AD1L,0L,0L}},{{0x4587L,(-1L),0xE889L,3L,3L,0xE889L,(-1L),0x4587L,1L,(-1L)},{0x4587L,0L,1L,(-1L),0L,1L,0x2AD1L,(-1L),1L,3L}},{{0L,(-1L),1L,0L,0x4587L,(-1L),(-1L),0x4587L,0L,1L},{3L,3L,0xE889L,(-1L),0x4587L,1L,(-1L),0x2AD1L,0x2305L,3L}},{{0x4587L,1L,(-1L),3L,0L,(-1L),(-1L),1L,1L,(-1L)},{1L,3L,1L,1L,3L,1L,(-1L),0x2AD1L,1L,0L}},{{3L,(-1L),0xDB68L,3L,0x4587L,0xE889L,0x2AD1L,0x4587L,0x2305L,(-1L)},{3L,0L,(-1L),(-1L),1L,1L,(-1L),(-1L),0L,3L}},{{1L,(-1L),(-1L),0L,3L,(-1L),1L,0x4587L,1L,1L},{0x4587L,3L,0xDB68L,(-1L),3L,1L,0x2AD1L,0x2AD1L,1L,3L}},{{3L,1L,1L,3L,1L,(-1L),0x2AD1L,1L,0L,(-1L)},{0L,3L,0xE889L,0xDB68L,1L,1L,0xDB68L,(-1L),0x2305L,0x2305L}},{{1L,1L,0x2AD1L,0L,0L,0x2AD1L,1L,1L,0x4587L,1L},{1L,0x2305L,0xDB68L,1L,0x2305L,1L,(-1L),0xE889L,1L,0L}},{{0x2305L,1L,0xDB68L,0x2305L,1L,0xE889L,0xE889L,1L,0x2305L,0xDB68L},{0L,0L,0x2AD1L,1L,1L,0x4587L,1L,(-1L),3L,0L}}};
                        int i, j, k;
                        l_2175[1]--;
                        if ((*l_1939))
                            break;
                        --l_2188;
                    }
                    else
                    {
                        int **l_2191 = &g_33[0];
                        (*l_2191) = &l_2174[7][6][3];


                        return p_24;



                    }
                }
                else
                {
                    for (l_1855 = 0; (l_1855 <= 0); l_1855 += 1)
                    {
                        int i, j;
                        (*g_1957) = (***g_1955);
                        if (g_859[g_50][(l_1855 + 5)])
                            continue;
                    }
                }
            }
            else
            {
                char l_2196 = 1L;
                unsigned l_2203 = 0x0EB62A68L;
                short *l_2204 = &l_2145[0][1];
                int l_2208 = (-6L);
                int l_2215 = 2L;
                int **l_2235 = &g_33[0];
                int *l_2236 = &l_2181;
                int *l_2237[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_2237[i] = &l_1801;
                for (g_1035 = 0; (g_1035 <= 0); g_1035 += 1)
                {
                    int *l_2195 = &l_2010[0][1][2];
                    int **l_2194 = &l_2195;
                    int *l_2225 = (void*)0;
                    unsigned char *l_2234[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_2234[i] = &g_1203;
                }
                (*l_2235) = p_23;
                --l_2238;
                p_25 = &l_1900;

                ;
            }
            (*g_1138) = (0x93L == p_24);
            if (l_2138)
            {
                unsigned l_2249[3][6][10] = {{{0xE837BC3EL,18446744073709551615UL,18446744073709551615UL,0xE837BC3EL,0x88728D32L,18446744073709551615UL,0x0D5EB446L,0xF2229DACL,0x0D5EB446L,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0x88728D32L,18446744073709551615UL,18446744073709551615UL,7UL,18446744073709551615UL,0x0D5EB446L,0x0D5EB446L,18446744073709551615UL},{0xF2229DACL,7UL,0xE837BC3EL,0xE837BC3EL,7UL,0xF2229DACL,0x02F769F2L,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,0xE837BC3EL,18446744073709551615UL,0x0D5EB446L,18446744073709551615UL,0xE837BC3EL,18446744073709551615UL,0x02F769F2L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0xF2229DACL,0x88728D32L,0x88728D32L,0xF2229DACL,18446744073709551615UL,18446744073709551615UL,0x0D5EB446L,0xF2229DACL},{0xE837BC3EL,0x88728D32L,18446744073709551615UL,0x0D5EB446L,0xF2229DACL,0x0D5EB446L,18446744073709551615UL,0x88728D32L,0xE837BC3EL,18446744073709551615UL}},{{7UL,18446744073709551615UL,18446744073709551615UL,0xF2229DACL,0x88728D32L,0x88728D32L,0xF2229DACL,18446744073709551615UL,18446744073709551615UL,7UL},{18446744073709551615UL,0x0D5EB446L,0xE837BC3EL,0xF2229DACL,0UL,7UL,0UL,0xF2229DACL,0xE837BC3EL,0x0D5EB446L},{18446744073709551615UL,18446744073709551615UL,7UL,0x0D5EB446L,0UL,0x02F769F2L,0x02F769F2L,0UL,0x0D5EB446L,7UL},{0UL,0UL,18446744073709551615UL,18446744073709551615UL,0x88728D32L,0x02F769F2L,0xE837BC3EL,0x02F769F2L,0x88728D32L,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0x02F769F2L,0xF2229DACL,7UL,0xE837BC3EL,0xE837BC3EL,7UL,0xF2229DACL},{18446744073709551615UL,0UL,0UL,18446744073709551615UL,18446744073709551615UL,0x88728D32L,0x02F769F2L,0xE837BC3EL,0x02F769F2L,0x88728D32L}},{{7UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,7UL,0x0D5EB446L,0UL,0x02F769F2L,0x02F769F2L,0UL},{0xE837BC3EL,0x0D5EB446L,18446744073709551615UL,18446744073709551615UL,0x0D5EB446L,0xE837BC3EL,0xF2229DACL,0UL,7UL,0UL},{18446744073709551615UL,18446744073709551615UL,0xF2229DACL,18446744073709551615UL,0xF2229DACL,18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL},{0UL,18446744073709551615UL,0x88728D32L,7UL,7UL,0x88728D32L,18446744073709551615UL,0UL,0xE837BC3EL,18446744073709551615UL},{0x88728D32L,18446744073709551615UL,0UL,0xE837BC3EL,18446744073709551615UL,0xE837BC3EL,0UL,18446744073709551615UL,0x88728D32L,7UL},{0xF2229DACL,18446744073709551615UL,0UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,18446744073709551615UL,0UL,18446744073709551615UL,0xF2229DACL}}};
                int i, j, k;
                for (l_2181 = 3; (l_2181 >= 0); l_2181 -= 1)
                {
                    int **l_2243 = &g_33[0];
                    int i;
                    if ((*g_1138))
                        break;
                    for (g_599 = 0; (g_599 <= 3); g_599 += 1)
                    {
                        int i, j;
                        if (l_2174[1][2][3])
                            break;
                        g_33[g_50] = (void*)0;
                        g_242[l_2181][g_599] ^= (l_2241 == &g_1383);
                        g_33[g_50] = p_25;
                    }
                    (*l_2243) = p_23;
                    if (l_2175[1])
                    {
                        (*l_2243) = p_25;
                        (*g_1958) = ((*g_1161) = 0x4467C411L);
                        if ((****g_1955))
                            break;
                    }
                    else
                    {
                        unsigned char l_2246 = 0x8EL;
                        int l_2250 = (-10L);
                        int i, j;
                        (*g_1161) ^= l_2174[1][2][3];
                        (****g_1955) = (((l_2250 = func_26((((-9L) > ((((*g_1258) = (*l_1939)) | ((((**g_269) >= (**g_1063)) ^ (l_2180 < (safe_mod_func_uint32_t_u_u((((l_2246 , ((g_859[g_50][(g_50 + 5)] = (l_2246 && (((((0xA49E31D9B47E1CDALL <= ((**g_2116)--)) | l_2249[1][3][8]) >= 0x93B8L) && l_2246) , (*l_1939)))) || 18446744073709551609UL)) < 0x81740385L) && p_24), (*g_1138))))) && 0xFF020BEFD51FC5D6LL)) || p_24)) , g_859[g_50][(g_50 + 5)]), p_25, (*l_1939))) <= 0x13E3L) >= 9L);
                        if ((*g_1138))
                            continue;
                        (***g_1955) = (**g_1956);
                    }
                }


                return p_24;



            }
            else
            {
                unsigned long long l_2251 = 0x8674DA118CC538DFLL;
                int **l_2252 = &g_1161;
                int *l_2253 = &l_1900;
                int *l_2254 = &l_2174[0][1][2];
                int *l_2255[4];
                char l_2256 = 0x9EL;
                int l_2264 = 1L;
                int i;
                for (i = 0; i < 4; i++)
                    l_2255[i] = (void*)0;
                (*l_2252) = ((l_2251 != func_26((l_2187[1][2] ^ (**g_2116)), p_23, l_2218)) , p_23);

                ;
                (*l_2252) = &l_1856[0];

                ;
                g_2258++;
                if (((*g_1161) = 1L))
                {
                    (*g_1957) = (*g_1957);
                    (****g_1955) ^= l_2261;
                    (*l_2252) = l_2262;
                    for (g_385 = 0; (g_385 <= 0); g_385 += 1)
                    {
                        (*l_2252) = l_2263[1][4];

                        ;
                        if ((*g_1958))
                            break;
                        if ((*l_2262))
                            break;
                        return l_2226[4];



                    }

                    ;
                }
                else
                {
                    unsigned l_2265 = 4294967291UL;
                    ++l_2265;
                }

                ;
            }

            ;
            for (g_1773 = 0; (g_1773 <= 0); g_1773 += 1)
            {
                unsigned l_2268 = 0x01C8D4CAL;
                (*g_1161) ^= l_2268;
            }
        }


        ;
        ;
    }
    else
    {
        int l_2269[8][8] = {{(-10L),4L,0L,1L,0L,0x5A8FD535L,0L,1L},{0xB67D4128L,(-1L),0xB67D4128L,0xFBA72503L,1L,0x5A8FD535L,0L,0L},{0L,4L,(-10L),(-10L),4L,0L,1L,0L},{0L,9L,2L,4L,1L,4L,2L,9L},{0xB67D4128L,2L,0x5A8FD535L,4L,0L,0xFBA72503L,0xFBA72503L,0L},{(-10L),0L,0L,(-10L),0xB67D4128L,9L,0xFBA72503L,0L},{2L,(-10L),0x5A8FD535L,0xFBA72503L,0x5A8FD535L,(-10L),2L,1L},{0x5A8FD535L,(-10L),9L,0L,0xB67D4128L,0xB67D4128L,0L,9L}};
        int l_2270[1];
        int **l_2304 = &g_1161;
        unsigned char l_2333 = 7UL;
        unsigned *l_2388 = &g_79;
        long long *l_2412[5] = {&g_374,&g_374,&g_374,&g_374,&g_374};
        char ***l_2416 = &l_1922;
        short l_2426 = (-7L);
        int *l_2449 = &l_2270[0];
        unsigned long long **l_2486 = &g_2117;
        unsigned l_2503 = 18446744073709551609UL;
        int i, j;
        for (i = 0; i < 1; i++)
            l_2270[i] = 6L;
        if (l_2269[4][6])
        {
            int *l_2274 = &l_2270[0];
            for (g_1984 = 0; (g_1984 >= 0); g_1984 -= 1)
            {
                unsigned char l_2271 = 0xE0L;
                l_2271++;
                for (g_139 = 0; (g_139 >= 0); g_139 -= 1)
                {
                    int **l_2275 = &g_33[0];
                    int i;
                    (*l_2275) = l_2274;


                    return g_784[(g_139 + 2)];


                }
            }
        }
        else
        {
            unsigned l_2290[5] = {0x897FD8CFL,0x897FD8CFL,0x897FD8CFL,0x897FD8CFL,0x897FD8CFL};
            short ***l_2300 = &g_1373;
            int i;
            (**g_1957) ^= (safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((**g_1888) == (l_2282 = (void*)0)), l_2270[0])), (p_24 >= ((1UL ^ 0x8A551E88L) | p_24)))) <= (((safe_mod_func_uint8_t_u_u(p_24, 249UL)) , p_24) >= (-1L))), p_24));

            ;
            (**g_1957) = (*g_1161);
            for (g_709 = 0; (g_709 <= 1); g_709 += 1)
            {
                int **l_2286[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_2286[i] = (void*)0;
                p_23 = l_2285;

                ;
                for (l_1801 = 6; (l_1801 >= 0); l_1801 -= 1)
                {
                    short l_2287 = 0x2F64L;
                    int l_2288 = 0xC5353AFAL;
                    int l_2289[9][1][3] = {{{0x766FFF16L,0xDEB3D21AL,0x5F7B112DL}},{{3L,(-5L),(-1L)}},{{0x766FFF16L,0x766FFF16L,(-1L)}},{{(-5L),3L,0x5F7B112DL}},{{0xDEB3D21AL,0x766FFF16L,0xDEB3D21AL}},{{0xDEB3D21AL,(-5L),0x766FFF16L}},{{(-5L),0xDEB3D21AL,0xDEB3D21AL}},{{0x766FFF16L,0xDEB3D21AL,0x5F7B112DL}},{{3L,(-5L),(-1L)}}};
                    int i, j, k;
                    p_23 = p_25;

                    ;
                    --l_2290[1];
                    if ((*g_1958))
                        continue;
                    for (g_385 = 0; (g_385 <= 1); g_385 += 1)
                    {
                        (*g_1958) ^= (-2L);
                    }
                }

                ;
            }

            ;
            (**g_1957) = (0UL || (safe_unary_minus_func_uint16_t_u((safe_mul_func_int8_t_s_s(((((*l_1793) |= p_24) < l_2270[0]) >= ((p_24 <= (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((l_2300 != (void*)0), (safe_rshift_func_uint16_t_u_s((p_24 > l_2290[1]), l_2303)))), l_2290[1]))) , (*g_918))), l_2290[2])))));
        }

        ;
        ;
        if ((***g_1956))
        {
            unsigned char l_2305 = 1UL;
            int l_2310 = 0x137537EEL;
            int l_2311 = 0xB1BF8A3CL;
            int *l_2370[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
            int l_2387 = 0xEF041911L;
            long long *l_2394 = &g_859[0][3];
            int i;
            if (l_2305)
            {
                unsigned char *l_2307 = &g_1035;
                unsigned char **l_2306[4] = {&l_2307,&l_2307,&l_2307,&l_2307};
                int l_2322 = 0L;
                unsigned *l_2325 = &g_2326;
                long long *l_2331[9][8][3] = {{{&g_859[0][8],&l_2148,&g_374},{&g_859[0][6],&g_859[0][1],&g_859[0][4]},{&g_859[0][3],&g_859[0][3],&g_859[0][4]},{(void*)0,&l_2148,&g_374},{&g_859[0][9],(void*)0,&l_2148},{(void*)0,(void*)0,&l_2148},{&l_2148,&g_374,(void*)0},{&g_374,(void*)0,&g_374}},{{(void*)0,&g_374,&g_374},{&g_859[0][9],&g_859[0][3],&g_859[0][3]},{(void*)0,&g_859[0][9],(void*)0},{&g_859[0][3],&g_859[0][3],&l_2148},{&l_2148,&l_2148,(void*)0},{&l_2148,&l_2148,&g_374},{&l_2148,&l_2148,&g_859[0][3]},{(void*)0,(void*)0,&g_859[0][5]}},{{&g_374,(void*)0,&g_859[0][3]},{&g_859[0][3],&g_859[0][6],(void*)0},{&g_374,&g_859[0][3],&l_2148},{&g_859[0][3],&g_859[0][3],&l_2148},{&g_859[0][4],&g_859[0][3],&g_859[0][3]},{&g_859[0][3],&g_859[0][8],&g_859[0][0]},{&l_2148,&l_2148,(void*)0},{&g_859[0][9],(void*)0,&g_374}},{{&g_859[0][3],&l_2148,&g_859[0][8]},{&g_859[0][3],(void*)0,&l_2148},{&g_859[0][9],&g_859[0][3],&g_859[0][3]},{&l_2148,(void*)0,&l_2148},{&g_859[0][3],&g_859[0][3],&g_374},{&g_859[0][4],&g_374,&g_859[0][3]},{&g_859[0][3],&l_2148,&g_859[0][3]},{&g_374,&l_2148,&g_859[0][3]}},{{&g_859[0][3],&g_859[0][3],&g_859[0][5]},{&g_374,&l_2148,&l_2148},{(void*)0,&g_859[0][9],&g_374},{&l_2148,(void*)0,(void*)0},{&g_859[0][3],(void*)0,&g_374},{&g_374,&g_859[0][1],&l_2148},{&g_859[0][9],&l_2148,&g_859[0][5]},{&g_859[0][3],&g_859[0][3],&g_859[0][3]}},{{(void*)0,&g_374,&g_859[0][3]},{&g_859[0][3],&g_859[0][3],&g_859[0][3]},{&g_859[0][5],&g_859[0][3],&g_374},{(void*)0,&l_2148,&l_2148},{(void*)0,&g_374,&g_859[0][3]},{&g_374,&g_859[0][5],&l_2148},{&l_2148,&g_859[0][3],&l_2148},{&g_374,&l_2148,&g_859[0][3]}},{{&g_859[0][4],&g_374,&g_859[0][3]},{&g_374,(void*)0,(void*)0},{&l_2148,(void*)0,&g_374},{&g_859[0][3],&g_859[0][3],&l_2148},{(void*)0,&g_859[0][3],&g_859[0][3]},{&g_859[0][3],&l_2148,&l_2148},{&g_859[0][1],(void*)0,&g_859[0][1]},{(void*)0,&g_859[0][3],&g_374}},{{&l_2148,(void*)0,&g_859[0][1]},{&g_859[0][3],&g_859[0][8],&l_2148},{&g_859[0][3],&g_859[0][5],&l_2148},{&g_859[0][3],&l_2148,&l_2148},{&l_2148,&l_2148,&g_859[0][3]},{(void*)0,&l_2148,&g_374},{&g_859[0][1],(void*)0,&g_859[0][3]},{&g_859[0][3],&g_859[0][3],&g_374}},{{(void*)0,&g_374,&g_859[0][3]},{&g_859[0][3],&l_2148,&l_2148},{&l_2148,(void*)0,&g_859[0][3]},{&g_374,&g_859[0][9],(void*)0},{&g_859[0][4],&l_2148,&l_2148},{&g_374,&l_2148,&l_2148},{&g_859[0][3],&g_859[0][3],(void*)0},{&g_374,&g_859[0][9],&g_859[0][3]}}};
                int l_2332 = 0x33734FD6L;
                unsigned short l_2359 = 0x7DFDL;
                int i, j, k;
                (*g_1958) = ((**l_2304) = (**l_2304));
                if (((*g_1138) = (l_2306[3] != &l_2307)))
                {
                    unsigned short l_2312 = 65532UL;
                    for (g_50 = (-21); (g_50 != 59); ++g_50)
                    {
                        if ((*l_1939))
                            break;
                    }
                    l_2312++;
                }
                else
                {
                    unsigned char l_2319 = 1UL;
                    (*g_1138) = func_65((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((*g_195) = l_2311) <= l_2311), 6)), (255UL >= p_24))));
                    (*l_2304) = p_25;

                    ;
                }

                ;
                (*g_1138) ^= ((***g_1956) & (l_2270[0] = ((p_24 || l_2332) <= l_2322)));
                if ((+(0xDA1ADD453C3BA185LL == p_24)))
                {
                    unsigned long long l_2356[4][9][5];
                    unsigned long long l_2366 = 18446744073709551612UL;
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 9; j++)
                        {
                            for (k = 0; k < 5; k++)
                                l_2356[i][j][k] = 0UL;
                        }
                    }
                    for (g_374 = (-9); (g_374 > 0); g_374 = safe_add_func_int16_t_s_s(g_374, 9))
                    {
                        unsigned l_2340[2][5] = {{0x47472131L,4294967295UL,0x47472131L,0x47472131L,4294967295UL},{4294967295UL,0x47472131L,0x47472131L,4294967295UL,0x47472131L}};
                        int **l_2345 = &l_2263[1][4];
                        int i, j;
                        (*l_2285) = (safe_sub_func_int64_t_s_s((*g_176), (safe_lshift_func_uint16_t_u_s((--l_2340[0][0]), (((*g_2027) = &p_23) == ((safe_div_func_int16_t_s_s(l_2332, p_24)) , l_2345))))));
                        (*g_1957) = (**g_1956);
                    }


                    (*l_1939) = ((safe_mod_func_uint32_t_u_u((p_24 , (!(((safe_add_func_uint64_t_u_u(func_51(((**g_2116) ^ (safe_rshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((**g_269), (safe_div_func_int16_t_s_s((0x4E2CL != ((((p_24 < (((((p_24 & ((*l_1793) = (-1L))) >= (0x5FCBD731994221AALL | 18446744073709551615UL)) , p_24) || (*g_1258)) == p_24)) || l_2311) > (*g_176)) , l_2322)), p_24)))) | 0x7BL), 7))), l_2311, p_24), 2L)) & l_2356[1][7][2]) && l_2356[2][8][4]))), p_24)) , (-7L));
                    (*l_1939) &= ((safe_sub_func_int64_t_s_s((((*g_176) = p_24) <= ((l_2356[0][1][3] != (p_24 <= (p_24 <= p_24))) , l_2311)), l_2359)) ^ (safe_div_func_uint32_t_u_u(((*l_2325) ^= (((**g_1063) = (safe_sub_func_uint32_t_u_u(((!(safe_add_func_uint64_t_u_u(((**g_2116) = ((void*)0 == &g_176)), l_2366))) >= 0x91L), l_2359))) >= 3UL)), l_2305)));
                    for (g_374 = (-9); (g_374 != (-14)); g_374 = safe_sub_func_int8_t_s_s(g_374, 2))
                    {
                        unsigned short l_2369[4] = {1UL,1UL,1UL,1UL};
                        int i;
                        if (l_2369[1])
                            break;
                        (*l_2304) = (*l_2304);
                        p_23 = l_2370[0];

                        ;
                        (*l_1939) |= (p_24 || (+(**g_269)));
                    }

                    ;
                }
                else
                {
                    int l_2377 = 0x8FFE89FFL;
                    int l_2395[1];
                    int *l_2402[5][7] = {{&l_2310,(void*)0,(void*)0,&l_1801,&g_305,&g_308,&l_1856[4]},{&l_2311,(void*)0,&l_2270[0],&g_305,&l_2270[0],(void*)0,&l_2311},{&l_1801,&g_305,(void*)0,&l_1856[4],&l_2270[0],&l_2332,&l_1801},{&l_2310,&l_2332,&g_305,&l_2270[0],(void*)0,(void*)0,&l_2270[0]},{(void*)0,&l_1855,(void*)0,(void*)0,&g_308,&l_2310,&l_2332}};
                    int i, j;
                    for (i = 0; i < 1; i++)
                        l_2395[i] = 0L;
                    if ((*g_1138))
                    {
                        char l_2371 = 0xB4L;
                        unsigned l_2376[8][7][4] = {{{0UL,0x8AB369CBL,0x16C448E3L,0x38C7DEC6L},{0x8AB369CBL,0xF1CECF47L,1UL,0x16C448E3L},{0UL,0x9459ECCCL,0x38C7DEC6L,0x16C448E3L},{18446744073709551613UL,0xF1CECF47L,0xA6D08C03L,0x38C7DEC6L},{1UL,0x8AB369CBL,0x38C7DEC6L,0x9BAD3A7BL},{0x9459ECCCL,0x8AB369CBL,1UL,0x38C7DEC6L},{0xC5DCE409L,0xF1CECF47L,0x16C448E3L,0x16C448E3L}},{{0x9459ECCCL,0x9459ECCCL,0x46611C04L,0x16C448E3L},{1UL,0xF1CECF47L,0x9BAD3A7BL,0x38C7DEC6L},{18446744073709551613UL,0x8AB369CBL,0x46611C04L,0x9BAD3A7BL},{0UL,0x8AB369CBL,0x16C448E3L,0x38C7DEC6L},{0x8AB369CBL,0xF1CECF47L,1UL,0x16C448E3L},{0UL,0x9459ECCCL,0x38C7DEC6L,0x16C448E3L},{18446744073709551613UL,0xF1CECF47L,0xA6D08C03L,0x38C7DEC6L}},{{1UL,0x8AB369CBL,0x38C7DEC6L,0x9BAD3A7BL},{0x9459ECCCL,0x8AB369CBL,1UL,0x38C7DEC6L},{0xC5DCE409L,0x8AB369CBL,1UL,1UL},{18446744073709551613UL,18446744073709551613UL,1UL,1UL},{0x782757A3L,0x8AB369CBL,0x4B92494BL,0x16C448E3L},{0xF1CECF47L,18446744073709551611UL,1UL,0x4B92494BL},{1UL,18446744073709551611UL,1UL,0x16C448E3L}},{{18446744073709551611UL,0x8AB369CBL,0x1175B058L,1UL},{1UL,18446744073709551613UL,0x16C448E3L,1UL},{0xF1CECF47L,0x8AB369CBL,0x334DDC1EL,0x16C448E3L},{0x782757A3L,18446744073709551611UL,0x16C448E3L,0x4B92494BL},{18446744073709551613UL,18446744073709551611UL,0x1175B058L,0x16C448E3L},{0xEAE732C2L,0x8AB369CBL,1UL,1UL},{18446744073709551613UL,18446744073709551613UL,1UL,1UL}},{{0x782757A3L,0x8AB369CBL,0x4B92494BL,0x16C448E3L},{0xF1CECF47L,18446744073709551611UL,1UL,0x4B92494BL},{1UL,18446744073709551611UL,1UL,0x16C448E3L},{18446744073709551611UL,0x8AB369CBL,0x1175B058L,1UL},{1UL,18446744073709551613UL,0x16C448E3L,1UL},{0xF1CECF47L,0x8AB369CBL,0x334DDC1EL,0x16C448E3L},{0x782757A3L,18446744073709551611UL,0x16C448E3L,0x4B92494BL}},{{18446744073709551613UL,18446744073709551611UL,0x1175B058L,0x16C448E3L},{0xEAE732C2L,0x8AB369CBL,1UL,1UL},{18446744073709551613UL,18446744073709551613UL,1UL,1UL},{0x782757A3L,0x8AB369CBL,0x4B92494BL,0x16C448E3L},{0xF1CECF47L,18446744073709551611UL,1UL,0x4B92494BL},{1UL,18446744073709551613UL,0x4B92494BL,0x9BAD3A7BL},{18446744073709551613UL,0x9459ECCCL,0x334DDC1EL,0x4B92494BL}},{{0xC5DCE409L,0x8AB369CBL,0x9BAD3A7BL,0x4B92494BL},{18446744073709551611UL,0x9459ECCCL,1UL,0x9BAD3A7BL},{0xEAE732C2L,18446744073709551613UL,0x9BAD3A7BL,0x16C448E3L},{0x8AB369CBL,18446744073709551613UL,0x334DDC1EL,0x9BAD3A7BL},{1UL,0x9459ECCCL,0x4B92494BL,0x4B92494BL},{0x8AB369CBL,0x8AB369CBL,0xA6D08C03L,0x4B92494BL},{0xEAE732C2L,0x9459ECCCL,0x16C448E3L,0x9BAD3A7BL}},{{18446744073709551611UL,18446744073709551613UL,0xA6D08C03L,0x16C448E3L},{0xC5DCE409L,18446744073709551613UL,0x4B92494BL,0x9BAD3A7BL},{18446744073709551613UL,0x9459ECCCL,0x334DDC1EL,0x4B92494BL},{0xC5DCE409L,0x8AB369CBL,0x9BAD3A7BL,0x4B92494BL},{18446744073709551611UL,0x9459ECCCL,1UL,0x9BAD3A7BL},{0xEAE732C2L,18446744073709551613UL,0x9BAD3A7BL,0x16C448E3L},{0x8AB369CBL,18446744073709551613UL,0x334DDC1EL,0x9BAD3A7BL}}};
                        unsigned **l_2389 = &g_1258;
                        int i, j, k;
                        (*g_1138) |= l_2332;
                        (*l_2285) |= (l_2371 , ((p_24 == 1L) , g_2390[7][0][6]));
                        (****g_1955) = (***g_1956);
                    }
                    else
                    {
                        long long **l_2393 = &l_2331[3][1][1];
                        int l_2401 = 2L;
                        (*l_2304) = &l_2377;

                        ;
                        (*g_1161) = (safe_rshift_func_int8_t_s_u(l_2332, 6));
                        (****g_1955) = (safe_div_func_int64_t_s_s(((((((((p_24 & ((*g_195) = (0xFC9CL < l_2395[0]))) , &p_22) == ((*l_2146) = &g_176)) != func_26((*g_176), ((*l_2304) = (*l_2304)), (func_65(func_65(((l_2401 = (4L ^ p_24)) || p_24))) || l_2401))) ^ p_24) && 1UL) || l_2377) , 1L), l_2332));

                        ;
                        l_2402[4][5] = p_23;


                    }

                    ;
                    ;

                }



                ;
                ;
            }
            else
            {
                char l_2406 = 0x7CL;
                int *l_2409[7][4] = {{&l_2270[0],&l_2270[0],&l_2270[0],&l_2270[0]},{&l_2270[0],&l_2270[0],&l_2270[0],&l_2270[0]},{&l_2270[0],&l_2270[0],&l_2270[0],&l_2270[0]},{&l_2270[0],&l_2270[0],&l_2270[0],&l_2270[0]},{&l_2270[0],&l_2270[0],&l_2270[0],&l_2270[0]},{&l_2270[0],&l_2270[0],&l_2270[0],&l_2270[0]},{&l_2270[0],&l_2270[0],&l_2270[0],&l_2270[0]}};
                int ****l_2410 = &g_2027;
                int i, j;
                for (g_1191 = 0; (g_1191 == 11); g_1191++)
                {
                    int l_2405[9][2][7] = {{{0x5DFDEDDCL,0x5DFDEDDCL,0xD349C9C0L,0xB0E7B91AL,0xB0E7B91AL,0L,0xB0E7B91AL},{0x5DFDEDDCL,(-6L),(-6L),0x5DFDEDDCL,0x9F6259D8L,(-1L),0x5DFDEDDCL}},{{(-1L),0xB0E7B91AL,0x9F6259D8L,0x9F6259D8L,0xB0E7B91AL,(-1L),(-6L)},{0xB0E7B91AL,0x5DFDEDDCL,0L,0x746FB066L,0x746FB066L,0L,0x5DFDEDDCL}},{{0xB0E7B91AL,(-6L),(-1L),0xB0E7B91AL,0x9F6259D8L,0x9F6259D8L,0xB0E7B91AL},{(-1L),0x5DFDEDDCL,(-1L),0x9F6259D8L,0x5DFDEDDCL,(-6L),(-6L)}},{{0x5DFDEDDCL,0xB0E7B91AL,0L,0xB0E7B91AL,0x5DFDEDDCL,0L,0x746FB066L},{0x746FB066L,(-6L),0x9F6259D8L,0x746FB066L,0x9F6259D8L,(-6L),0x746FB066L}},{{(-1L),0x746FB066L,(-6L),0x9F6259D8L,0x746FB066L,0x9F6259D8L,(-6L)},{0x746FB066L,0x746FB066L,0L,0x5DFDEDDCL,0xB0E7B91AL,0L,0xB0E7B91AL}},{{0x5DFDEDDCL,(-6L),(-6L),0x5DFDEDDCL,0x9F6259D8L,(-1L),0x5DFDEDDCL},{(-1L),0xB0E7B91AL,0x9F6259D8L,0x9F6259D8L,0xB0E7B91AL,(-1L),(-6L)}},{{0xB0E7B91AL,0x5DFDEDDCL,0L,0x746FB066L,0x746FB066L,0L,0x5DFDEDDCL},{0xB0E7B91AL,(-6L),(-1L),0xB0E7B91AL,0x9F6259D8L,0x9F6259D8L,0xB0E7B91AL}},{{(-1L),0x9F6259D8L,0L,0L,0x9F6259D8L,0xD349C9C0L,0xD349C9C0L},{0x9F6259D8L,(-1L),0x5DFDEDDCL,(-1L),0x9F6259D8L,0x5DFDEDDCL,(-6L)}},{{(-6L),0xD349C9C0L,0L,(-6L),0L,0xD349C9C0L,(-6L)},{0L,(-6L),0xD349C9C0L,0L,(-6L),0L,0xD349C9C0L}}};
                    int i, j, k;
                    (*l_1939) = ((*g_1161) |= l_2405[1][1][4]);
                    return l_2406;


                }
                for (l_1849 = 0; (l_1849 != 22); l_1849 = safe_add_func_int32_t_s_s(l_1849, 4))
                {
                    unsigned char *l_2411 = &g_1191;
                    long long *l_2413 = &g_859[0][5];
                    int l_2414 = 0x46A6459BL;
                    int *l_2415 = &l_2270[0];
                    p_23 = l_2409[0][2];

                    ;
                }

                ;
            }



            ;
            ;
            (*g_1958) = ((void*)0 == l_2416);
            (**g_1957) |= 2L;
        }
        else
        {
            long long *l_2418 = &l_2148;
            (*l_2304) = p_25;

            ;
        }



        ;
        ;
        for (g_1035 = 0; (g_1035 <= 2); g_1035 += 1)
        {
            int l_2429 = 0x2F19D1E5L;
            int l_2431 = (-1L);
            int l_2439 = 0xDA2880B1L;
            char **l_2452 = &l_2282;
            unsigned short l_2455 = 1UL;
            unsigned char *l_2460[2][9][2] = {{{(void*)0,&g_50},{(void*)0,&g_50},{&g_700,&g_50},{&g_50,&l_2333},{&g_1035,&g_1203},{&g_1773,(void*)0},{(void*)0,&l_2333},{&g_700,&g_1773},{&g_50,(void*)0}},{{&g_1203,(void*)0},{&g_50,&g_1773},{&g_700,&l_2333},{(void*)0,(void*)0},{&g_1773,&g_1203},{&g_1035,&l_2333},{&g_50,&g_50},{&g_700,&g_50},{(void*)0,&g_50}}};
            int l_2476[4] = {(-6L),(-6L),(-6L),(-6L)};
            int i, j, k;
            if (l_1856[(g_1035 + 2)])
                break;
        }
        (***g_1956) &= (*l_1939);
    }


    ;



    ;
    ;
    ;
    return (**g_1063);




}







static unsigned long long func_26(long long p_27, int * p_28, int p_29)
{
    int l_1779 = 0x6E4E3985L;
    unsigned long long *l_1784 = (void*)0;
    unsigned long long *l_1785 = &g_62;
    int l_1786[1][7] = {{0x0A978C29L,0x2D789AC3L,0x2D789AC3L,0x0A978C29L,0x2D789AC3L,0x2D789AC3L,0x0A978C29L}};
    int *l_1787 = &g_308;
    int i, j;
    (*l_1787) ^= ((*g_1138) &= ((safe_mul_func_int8_t_s_s((*g_1064), (safe_sub_func_uint32_t_u_u(p_29, ((*g_1161) = (0x7A0CL < (l_1779 < ((*l_1785) = func_65((safe_lshift_func_uint8_t_u_u(l_1779, (safe_add_func_int32_t_s_s(p_27, l_1779))))))))))))) ^ ((l_1786[0][0] = l_1786[0][4]) & 2UL)));
    return (*l_1787);
}







static unsigned short func_30(unsigned char p_31, int * p_32)
{
    short l_43[6] = {0x5987L,0x5987L,0x5987L,0x5987L,0x5987L,0x5987L};
    long long *l_576 = (void*)0;
    int l_1439 = 0xB711144AL;
    unsigned long long l_1467 = 18446744073709551612UL;
    int l_1478 = 0xAD3E0DB4L;
    int l_1479 = 1L;
    int l_1480[2];
    unsigned char *l_1491[6];
    long long l_1498 = 0L;
    unsigned ***l_1523 = &g_194;
    int ****l_1532 = (void*)0;
    unsigned long long *l_1548 = &l_1467;
    unsigned long long **l_1547[1][4] = {{(void*)0,(void*)0,(void*)0,(void*)0}};
    char ****l_1562[5][2][6] = {{{(void*)0,&g_1062[0][3][1],&g_1062[0][2][1],&g_1062[0][2][0],(void*)0,&g_1062[0][2][0]},{&g_1062[0][2][0],&g_1062[0][2][0],&g_1062[0][3][0],&g_1062[0][2][0],&g_1062[0][3][1],&g_1062[0][4][2]}},{{&g_1062[0][2][0],&g_1062[0][0][2],&g_1062[0][3][1],&g_1062[0][2][0],&g_1062[0][2][0],&g_1062[0][3][1]},{&g_1062[0][2][1],&g_1062[0][2][1],&g_1062[0][0][0],&g_1062[0][3][2],&g_1062[0][4][2],&g_1062[0][0][2]}},{{&g_1062[0][4][0],&g_1062[0][3][1],&g_1062[0][2][0],(void*)0,&g_1062[0][2][0],&g_1062[0][0][0]},{&g_1062[0][0][0],&g_1062[0][4][0],&g_1062[0][2][0],&g_1062[0][2][0],&g_1062[0][2][1],&g_1062[0][0][2]}},{{&g_1062[0][2][0],&g_1062[0][2][0],&g_1062[0][0][0],&g_1062[0][2][0],&g_1062[0][2][0],&g_1062[0][3][1]},{&g_1062[0][2][0],&g_1062[0][2][0],&g_1062[0][3][1],&g_1062[0][2][0],&g_1062[0][3][1],&g_1062[0][2][0]}},{{&g_1062[0][3][2],(void*)0,(void*)0,&g_1062[0][2][0],&g_1062[0][0][2],&g_1062[0][2][1]},{&g_1062[0][0][2],&g_1062[0][0][0],&g_1062[0][2][0],&g_1062[0][2][2],&g_1062[0][0][0],&g_1062[0][2][0]}}};
    int *l_1566 = &l_1480[1];
    char l_1581 = (-1L);
    unsigned long long l_1704 = 0x91C7CBADC7754453LL;
    short l_1764 = 0x7973L;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1480[i] = (-7L);
    for (i = 0; i < 6; i++)
        l_1491[i] = &g_1191;
    for (p_31 = 11; (p_31 == 50); p_31 = safe_add_func_uint64_t_u_u(p_31, 9))
    {
        int l_44 = (-1L);
        unsigned l_1453 = 0x0ADDA98CL;
        char *l_1454 = (void*)0;
        long long l_1475 = 4L;
        int l_1484 = 5L;
        int l_1515 = (-1L);
        int l_1516[7][7][5] = {{{0x7BA164F3L,0xC3A538ABL,0x7146AFBCL,0xB6F08077L,0x7BA164F3L},{0x0E49A87FL,1L,0x16504AACL,0x9BCD1FBCL,0x07F13485L},{0L,0xB6F08077L,0xB5C15C30L,0xB6F08077L,0L},{0x07F13485L,0x9BCD1FBCL,0x16504AACL,1L,0x0E49A87FL},{0x7BA164F3L,0xB6F08077L,0x7146AFBCL,0xC3A538ABL,0x7BA164F3L},{0x07F13485L,1L,0x3A5977EAL,0x9BCD1FBCL,0x0E49A87FL},{0L,0xC3A538ABL,0xB5C15C30L,0xC3A538ABL,0L}},{{0x0E49A87FL,0x9BCD1FBCL,0x3A5977EAL,1L,0x07F13485L},{0x7BA164F3L,0xC3A538ABL,0x7146AFBCL,0xB6F08077L,0x7BA164F3L},{0x0E49A87FL,1L,0x102EFABAL,0xE9D6D4E2L,(-10L)},{0xB1BB622AL,5L,0x4959BD28L,5L,0xB1BB622AL},{(-10L),0xE9D6D4E2L,0x102EFABAL,0x0E49A87FL,6L},{(-7L),5L,0xC2BFBC66L,3L,(-7L)},{(-10L),0x0E49A87FL,(-1L),0xE9D6D4E2L,6L}},{{0xB1BB622AL,3L,0x4959BD28L,3L,0xB1BB622AL},{6L,0xE9D6D4E2L,(-1L),0x0E49A87FL,(-10L)},{(-7L),3L,0xC2BFBC66L,5L,(-7L)},{6L,0x0E49A87FL,0x102EFABAL,0xE9D6D4E2L,(-10L)},{0xB1BB622AL,5L,0x4959BD28L,5L,0xB1BB622AL},{(-10L),0xE9D6D4E2L,0x102EFABAL,0x0E49A87FL,6L},{(-7L),5L,0xC2BFBC66L,3L,(-7L)}},{{(-10L),0x0E49A87FL,(-1L),0xE9D6D4E2L,6L},{0xB1BB622AL,3L,0x4959BD28L,3L,0xB1BB622AL},{6L,0xE9D6D4E2L,(-1L),0x0E49A87FL,(-10L)},{(-7L),3L,0xC2BFBC66L,5L,(-7L)},{6L,0x0E49A87FL,0x102EFABAL,0xE9D6D4E2L,(-10L)},{0xB1BB622AL,5L,0x4959BD28L,5L,0xB1BB622AL},{(-10L),0xE9D6D4E2L,0x102EFABAL,0x0E49A87FL,6L}},{{(-7L),5L,(-7L),(-1L),0xEBB2F69FL},{0x40FD75B8L,(-5L),(-1L),(-1L),1L},{1L,(-1L),0x9D8F2F9FL,(-1L),1L},{1L,(-1L),(-1L),(-5L),0x40FD75B8L},{0xEBB2F69FL,(-1L),(-7L),0xDF420E7EL,0xEBB2F69FL},{1L,(-5L),0x1DEB62FFL,(-1L),0x40FD75B8L},{1L,0xDF420E7EL,0x9D8F2F9FL,0xDF420E7EL,1L}},{{0x40FD75B8L,(-1L),0x1DEB62FFL,(-5L),1L},{0xEBB2F69FL,0xDF420E7EL,(-7L),(-1L),0xEBB2F69FL},{0x40FD75B8L,(-5L),(-1L),(-1L),1L},{1L,(-1L),0x9D8F2F9FL,(-1L),1L},{1L,(-1L),(-1L),(-5L),0x40FD75B8L},{0xEBB2F69FL,(-1L),(-7L),0xDF420E7EL,0xEBB2F69FL},{1L,(-5L),0x1DEB62FFL,(-1L),0x40FD75B8L}},{{1L,0xDF420E7EL,0x9D8F2F9FL,0xDF420E7EL,1L},{0x40FD75B8L,(-1L),0x1DEB62FFL,(-5L),1L},{0xEBB2F69FL,0xDF420E7EL,(-7L),(-1L),0xEBB2F69FL},{0x40FD75B8L,(-5L),(-1L),(-1L),1L},{1L,(-1L),0x9D8F2F9FL,(-1L),1L},{1L,(-1L),(-1L),1L,0x07F13485L},{0x7BA164F3L,0xC3A538ABL,0x7146AFBCL,0xB6F08077L,0x7BA164F3L}}};
        unsigned char l_1546 = 252UL;
        char ****l_1619[1];
        int *l_1654 = &l_1480[0];
        unsigned char l_1681 = 4UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1619[i] = &g_1062[0][2][0];
        for (g_36[6] = 0; (g_36[6] >= 0); g_36[6] -= 1)
        {
            unsigned char *l_45 = &g_46[1][5][0];
            unsigned char *l_49[6][1][5] = {{{&g_50,(void*)0,&g_50,(void*)0,&g_50}},{{&g_50,(void*)0,&g_50,(void*)0,&g_50}},{{&g_50,(void*)0,&g_50,(void*)0,&g_50}},{{&g_50,(void*)0,&g_50,(void*)0,&g_50}},{{&g_50,(void*)0,&g_50,(void*)0,&g_50}},{{&g_50,(void*)0,&g_50,(void*)0,&g_50}}};
            unsigned long long *l_61 = &g_62;
            int l_307 = 0x7DAA40CDL;
            unsigned l_1423[7][8] = {{1UL,1UL,0x95BE1449L,0x43CBA726L,0xABEF163CL,1UL,0xEA63781FL,0xEA63781FL},{0x95BE1449L,1UL,1UL,1UL,1UL,0x95BE1449L,0xEA63781FL,0x6AB8736EL},{0xF311E108L,1UL,0x95BE1449L,1UL,0x43CBA726L,4294967291UL,0x43CBA726L,1UL},{0x43CBA726L,4294967291UL,0x43CBA726L,1UL,0x95BE1449L,1UL,0xF311E108L,0x6AB8736EL},{0xEA63781FL,0x95BE1449L,1UL,1UL,1UL,1UL,0x95BE1449L,0xEA63781FL},{0xEA63781FL,1UL,0xABEF163CL,0x43CBA726L,0x95BE1449L,1UL,1UL,1UL},{0x43CBA726L,1UL,0x6AB8736EL,1UL,0x43CBA726L,1UL,4294967291UL,0x95BE1449L}};
            int i, j, k;
        }
        for (g_139 = (-21); (g_139 == 17); ++g_139)
        {
            unsigned **l_1438[9][4] = {{&g_195,&g_1258,&g_195,&g_195},{&g_195,&g_195,&g_1258,&g_1258},{&g_195,&g_195,&g_195,(void*)0},{&g_1258,&g_1258,&g_195,&g_1258},{&g_195,&g_195,&g_1258,&g_195},{&g_1258,&g_195,&g_1258,&g_1258},{&g_195,&g_1258,&g_1258,(void*)0},{(void*)0,&g_195,&g_195,&g_1258},{&g_195,&g_195,&g_195,&g_195}};
            char *l_1442 = &g_438;
            int l_1452 = 0xE01567E1L;
            int l_1482 = (-6L);
            int l_1483[7] = {1L,0x1515676EL,0x1515676EL,1L,0x1515676EL,0x1515676EL,1L};
            unsigned l_1485 = 0UL;
            unsigned char **l_1494 = &l_1491[1];
            unsigned long long *l_1509 = &g_62;
            unsigned long long **l_1508 = &l_1509;
            unsigned long long ***l_1507 = &l_1508;
            int *l_1563 = &l_1483[4];
            short *l_1580[9] = {&l_43[0],&l_43[0],&l_43[0],&l_43[0],&l_43[0],&l_43[0],&l_43[0],&l_43[0],&l_43[0]};
            char **l_1604 = (void*)0;
            char ****l_1620 = &g_1062[0][2][0];
            int l_1678 = (-1L);
            int i, j;
            for (g_305 = 0; (g_305 == (-13)); --g_305)
            {
                unsigned char *l_1430 = (void*)0;
                int **l_1432 = &g_33[0];
                for (g_374 = 0; (g_374 < (-29)); g_374 = safe_sub_func_int32_t_s_s(g_374, 2))
                {
                    unsigned char *l_1431 = &g_700;
                    (*g_1161) = (l_1430 != l_1431);
                    return p_31;
                }
                (*l_1432) = p_32;
                (*l_1432) = p_32;
            }
            if ((safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint64_t_u((safe_sub_func_uint32_t_u_u((((p_31 < (l_1438[6][3] != l_1438[0][0])) >= (*g_1064)) >= ((*g_384)--)), ((*g_176) || (!l_44)))))), (0x5766ED71F32E4429LL == p_31))))
            {
                unsigned l_1443 = 0xC72298ECL;
                char l_1458[3];
                int l_1465 = (-7L);
                int l_1476 = 0x68F09C5BL;
                int l_1481 = 0x8A569B47L;
                int ***l_1488 = &g_1046[0][7][0];
                unsigned char **l_1510 = &l_1491[1];
                int l_1513 = (-4L);
                int l_1514 = (-8L);
                int l_1517[7] = {0x1FE6AB4DL,7L,0x1FE6AB4DL,0x1FE6AB4DL,7L,0x1FE6AB4DL,0x1FE6AB4DL};
                int i;
                for (i = 0; i < 3; i++)
                    l_1458[i] = 0x9AL;
                if ((l_1442 != (((l_1443 <= ((safe_div_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(((func_65((((safe_sub_func_int32_t_s_s((func_65(l_44) == p_31), (safe_sub_func_int64_t_s_s(p_31, (l_1452 != 8UL))))) | p_31) == (**g_917))) , l_44) <= l_1453), p_31)), l_1443)) & 0xC727C23D1226478CLL)) >= p_31) , l_1454)))
                {
                    unsigned char l_1463[10];
                    int *l_1466 = &g_308;
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1463[i] = 255UL;
                    if ((safe_sub_func_int32_t_s_s(((*g_1161) = (*g_1138)), l_1453)))
                    {
                        int **l_1457 = &g_33[0];
                        (*l_1457) = p_32;
                    }
                    else
                    {
                        unsigned short l_1464 = 0UL;
                        if (l_1458[0])
                            break;
                        (*g_1138) = (((safe_rshift_func_int8_t_s_s(l_1458[0], 4)) > (p_31 <= (safe_unary_minus_func_uint16_t_u((((l_44 , ((func_65(l_1452) , ((g_1462 >= p_31) > ((((p_31 , (-1L)) > (*g_176)) == g_784[0]) || l_1463[9]))) & p_31)) | 0xFBBFL) < l_1464))))) < (***g_1095));
                        if ((*g_1161))
                            continue;
                    }
                    --l_1467;
                    if (l_1452)
                        continue;
                    (*g_1161) ^= (*g_1138);
                }
                else
                {
                    int *l_1470 = &l_1452;
                    int *l_1471 = &l_1439;
                    int *l_1472 = &l_44;
                    int l_1473 = 0L;
                    int *l_1474[5][7] = {{&g_308,&g_308,&g_709,&g_308,&g_308,&g_709,&g_308},{&g_305,&g_709,&g_709,&g_305,&g_709,&g_709,&g_305},{&g_305,&g_308,&g_305,&g_305,&g_308,&g_305,&g_305},{&g_305,&g_305,&g_305,&g_305,&g_305,&g_305,&g_305},{&g_308,&g_305,&g_305,&g_308,&g_305,&g_305,&g_308}};
                    int l_1477 = 1L;
                    int ****l_1489 = &l_1488;
                    unsigned long long *l_1492 = &l_1467;
                    unsigned short l_1495 = 65535UL;
                    int i, j;
                    --l_1485;
                    if (((((*l_1489) = l_1488) == (((((*g_384) = (((*l_1492) = (safe_unary_minus_func_int64_t_s((((((void*)0 != l_1491[1]) , l_1475) != (*g_1161)) , (p_31 >= (~((**g_917) >= func_65(l_1458[2])))))))) | l_1483[6])) && l_1480[1]) > 0x3DA0120839974568LL) , (void*)0)) , l_1479))
                    {
                        unsigned long long l_1493 = 7UL;
                        l_44 = func_65(((l_1493 , l_1494) == (void*)0));
                        return l_43[4];
                    }
                    else
                    {
                        l_1495 = (*g_1138);
                        return l_1453;
                    }
                }
                for (g_385 = 0; (g_385 >= 53); g_385++)
                {
                    int l_1505[2][5][3] = {{{(-4L),0L,(-4L)},{(-7L),0x8E0AFF1BL,(-7L)},{(-3L),(-4L),(-3L)},{(-7L),0x8E0AFF1BL,(-7L)},{(-3L),(-4L),(-3L)}},{{(-7L),0x8E0AFF1BL,(-7L)},{(-3L),(-4L),(-3L)},{(-7L),0x8E0AFF1BL,(-7L)},{(-3L),(-4L),(-3L)},{(-7L),0x8E0AFF1BL,(-7L)}}};
                    unsigned short *l_1506 = &g_510;
                    int i, j, k;
                    l_1482 = (l_1498 <= (safe_mod_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((*g_1161) = (l_1478 = l_1478)) > ((safe_lshift_func_uint16_t_u_u(((*l_1506) = l_1505[1][4][0]), (l_1483[6] = 65528UL))) != (((l_1507 == &g_591[8][0][1]) && ((~((void*)0 != (*g_1063))) && ((((func_65(func_65((*g_1138))) > (***g_1095)) , l_1510) == &l_1491[1]) > (**g_194)))) < (**g_269)))), 0L)), p_31)));
                    for (g_855 = 0; (g_855 <= 2); g_855 += 1)
                    {
                        int l_1511 = (-8L);
                        int *l_1512[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        unsigned l_1518 = 18446744073709551615UL;
                        int i, j, k;
                        if (l_1511)
                            break;
                        l_1518++;
                    }
                }
                for (l_1513 = 6; (l_1513 >= 0); l_1513 -= 1)
                {
                    short **l_1543 = &g_1374;
                    int l_1553[7][8][4] = {{{0x64FE5321L,0L,1L,(-2L)},{0L,(-2L),0x2283D824L,0x3C3A7D94L},{1L,0x81C378E2L,0x0A2B6B28L,0x03066D71L},{1L,0x8D680B63L,0x6DB5438EL,0x2283D824L},{(-2L),0x9B68D48AL,(-2L),0x81C378E2L},{0x2283D824L,0x91809944L,0x8F2BA7EFL,(-1L)},{(-1L),0x64FE5321L,0x1045922BL,0x91809944L},{0x3692D301L,0x8F2BA7EFL,0x1045922BL,0x0A2B6B28L}},{{(-1L),0x3C3A7D94L,0x8F2BA7EFL,0x40C7509DL},{0x2283D824L,0xBD455C9CL,(-2L),(-1L)},{(-2L),(-1L),0x6DB5438EL,0xB737F3E9L},{1L,0x0A2B6B28L,0x0A2B6B28L,1L},{1L,(-2L),0x2283D824L,0L},{0L,0x6DB5438EL,1L,0xBD455C9CL},{0x64FE5321L,0xEFBE2391L,(-1L),0xBD455C9CL},{(-1L),0x8F2BA7EFL,0L,0xB8A8FB67L}},{{0x81C378E2L,0x91809944L,1L,(-1L)},{0x1045922BL,0x81C378E2L,1L,0L},{(-1L),0x64FE5321L,(-2L),0x64FE5321L},{(-2L),0x3692D301L,0x2283D824L,(-1L)},{0xEFBE2391L,0x40C7509DL,(-1L),0x81C378E2L},{0L,(-1L),0x3692D301L,0x9B68D48AL},{0L,0xBD455C9CL,(-1L),0xEFBE2391L},{0xEFBE2391L,0x9B68D48AL,0x2283D824L,0x1045922BL}},{{(-2L),0x381E4970L,(-2L),0x0A2B6B28L},{(-1L),(-2L),1L,1L},{0x1045922BL,0x1045922BL,1L,0x40C7509DL},{0x81C378E2L,0x7EB7ED1AL,0L,0x91809944L},{1L,0x03066D71L,0x64FE5321L,0L},{0xBD455C9CL,0x03066D71L,(-1L),0x91809944L},{0x03066D71L,0x7EB7ED1AL,0x0A2B6B28L,0x40C7509DL},{0x6DB5438EL,0x1045922BL,0x81C378E2L,1L}},{{(-1L),(-2L),0x8F2BA7EFL,0x0A2B6B28L},{0x7EB7ED1AL,0x381E4970L,0x7EB7ED1AL,0x1045922BL},{0x0A2B6B28L,0x9B68D48AL,(-1L),0xEFBE2391L},{0x64FE5321L,0xBD455C9CL,0xB737F3E9L,0x9B68D48AL},{0x8D680B63L,(-1L),0xB737F3E9L,0x81C378E2L},{0x64FE5321L,0x40C7509DL,(-1L),(-1L)},{0x0A2B6B28L,0x3692D301L,0x7EB7ED1AL,0x64FE5321L},{0x91809944L,0x3692D301L,0xEFBE2391L,0x3C3A7D94L}},{{0x6DB5438EL,0xB737F3E9L,0xB737F3E9L,0x6DB5438EL},{(-1L),0x381E4970L,0x1045922BL,0x40C7509DL},{(-1L),0xEFBE2391L,0x6DB5438EL,(-2L)},{0x8D680B63L,0x81C378E2L,0x3692D301L,(-2L)},{0x8F2BA7EFL,0xEFBE2391L,1L,0x40C7509DL},{0xB737F3E9L,0x381E4970L,0x8F2BA7EFL,0x6DB5438EL},{0L,0xB737F3E9L,1L,0x3C3A7D94L},{0x2283D824L,0x3692D301L,(-2L),0x3692D301L}},{{0x9B68D48AL,(-2L),0x81C378E2L,0xBD455C9CL},{0x0A2B6B28L,0x64FE5321L,0xBD455C9CL,0xB737F3E9L},{0x3C3A7D94L,0x2283D824L,(-2L),0L},{0x3C3A7D94L,0x8D680B63L,0xBD455C9CL,0x0A2B6B28L},{0x0A2B6B28L,0L,0x81C378E2L,0L},{0x9B68D48AL,0x03066D71L,(-2L),0x1045922BL},{0x2283D824L,(-2L),1L,1L},{0L,0L,0x8F2BA7EFL,0x64FE5321L}}};
                    int i, j, k;
                    if ((safe_mul_func_uint16_t_u_u(((g_1095 = l_1523) == (void*)0), l_1517[l_1513])))
                    {
                        return p_31;
                    }
                    else
                    {
                        unsigned char ***l_1524[7];
                        int l_1529 = 0L;
                        short *l_1544 = (void*)0;
                        short *l_1545 = &l_43[1];
                        int **l_1549 = &g_33[0];
                        char *l_1552[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        for (i = 0; i < 7; i++)
                            l_1524[i] = &l_1510;
                        (*g_1161) ^= ((l_1524[5] != (void*)0) , func_65(((safe_lshift_func_uint8_t_u_u((safe_add_func_int64_t_s_s((((*g_384)--) == ((void*)0 == l_1532)), (safe_div_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(((*l_1545) |= (safe_mul_func_int8_t_s_s(((*g_176) >= ((safe_lshift_func_int16_t_s_u(p_31, 3)) | (safe_mod_func_uint16_t_u_u((func_65(l_1485) && (&g_1374 != l_1543)), p_31)))), 4L))), p_31)), l_1546)))), 6)) | p_31)));
                        (*g_1161) = ((void*)0 == l_1547[0][2]);
                        (*l_1549) = p_32;
                        (*g_1161) &= ((*g_1138) = ((safe_add_func_uint16_t_u_u(p_31, (*g_384))) | (l_1517[l_1513] , (l_1553[2][6][3] &= (**g_1063)))));
                    }
                    return (*g_384);
                }
                if ((((***l_1507) = (safe_add_func_int32_t_s_s((*g_1138), (l_1515 ^= (safe_add_func_int64_t_s_s(((func_65((func_65((*g_1138)) <= (safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u((((p_31 == (l_1483[1] && (((***l_1507) = l_1546) != (l_1562[4][1][4] != l_1562[0][1][1])))) , (-10L)) , 0xE11DL), p_31)), (**g_269))))) , 1UL) , (*g_176)), 0L)))))) , l_1517[6]))
                {
                    int *l_1564[9][3] = {{(void*)0,&l_44,(void*)0},{&g_709,&g_709,&l_44},{&l_1515,&l_44,&l_44},{&l_44,&g_36[6],(void*)0},{&l_1515,&l_1517[1],&l_1515},{&g_709,&l_44,(void*)0},{(void*)0,&l_1515,(void*)0},{&g_36[6],(void*)0,(void*)0},{(void*)0,&l_44,(void*)0}};
                    int **l_1565[5][8] = {{(void*)0,(void*)0,(void*)0,&l_1563,&g_33[0],&g_33[0],&l_1563,(void*)0},{(void*)0,(void*)0,&g_33[0],&g_33[0],(void*)0,&g_33[0],&g_33[0],(void*)0},{(void*)0,(void*)0,&l_1563,&g_33[0],&g_33[0],&l_1563,(void*)0,(void*)0},{(void*)0,&g_33[0],(void*)0,&g_33[0],(void*)0,&g_33[0],(void*)0,(void*)0},{&g_33[0],&g_33[0],&l_1563,&l_1563,&g_33[0],&g_33[0],&g_33[0],&g_33[0]}};
                    char ***l_1571 = &g_1063;
                    int i, j;
                    l_1563 = p_32;

                    ;
                    l_1564[0][2] = p_32;
                    l_1566 = p_32;

                    ;
                    (*g_1161) = (func_65(((safe_sub_func_uint64_t_u_u(func_65(p_31), (*g_176))) > ((p_31 , ((*g_384) |= (safe_mod_func_int64_t_s_s((4294967292UL | ((*g_1161) = (l_1571 != (void*)0))), (safe_rshift_func_uint16_t_u_s(8UL, 13)))))) & ((safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_s(((*g_1373) != l_1580[7]), 13)) , 0UL) == (*g_869)), l_1581)), 0x9C52EE66L)) & p_31)))) && 7UL);
                }
                else
                {
                    int l_1584 = (-2L);
                    for (l_1484 = (-24); (l_1484 >= 21); l_1484 = safe_add_func_int64_t_s_s(l_1484, 8))
                    {
                        if (l_1584)
                            break;
                        p_32 = p_32;
                    }
                    (*g_1161) |= (*l_1563);
                    for (l_1485 = 0; (l_1485 < 32); ++l_1485)
                    {
                        p_32 = &l_1584;

                        ;
                        return l_1584;
                    }
                    if ((*g_1138))
                        break;
                }

                ;
            }
            else
            {
                unsigned short l_1597[9][3];
                char **l_1602 = (void*)0;
                int l_1657[8];
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_1597[i][j] = 1UL;
                }
                for (i = 0; i < 8; i++)
                    l_1657[i] = 0x209BB927L;
                for (l_1498 = (-11); (l_1498 >= 26); l_1498 = safe_add_func_uint64_t_u_u(l_1498, 8))
                {
                    int l_1598[4][8];
                    char **l_1603[5];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_1598[i][j] = (-2L);
                    }
                    for (i = 0; i < 5; i++)
                        l_1603[i] = &l_1454;
                    for (l_1485 = 0; (l_1485 <= 57); l_1485++)
                    {
                        (*g_1161) = (safe_sub_func_int8_t_s_s(((*g_1064) & ((l_1598[3][7] = ((safe_rshift_func_int8_t_s_u((-1L), 3)) > (safe_rshift_func_uint16_t_u_u(l_1597[6][2], 10)))) , (p_31 == p_31))), (func_65((*g_1138)) < (-1L))));
                        if ((*l_1563))
                            break;
                    }
                }
            }

            ;
            for (g_855 = 1; (g_855 >= 0); g_855 -= 1)
            {
                int l_1660 = 0L;
                int i;
                if ((l_1660 ^= func_65(l_1480[g_855])))
                {
                    for (g_599 = 0; (g_599 <= 6); ++g_599)
                    {
                        (*g_1138) = (*l_1654);
                    }
                }
                else
                {
                    int *l_1663 = &g_709;
                    int *l_1664[2][6] = {{&l_1480[g_855],&l_1480[g_855],&l_1480[1],&l_1480[g_855],&l_1480[g_855],&l_1480[1]},{&l_1480[g_855],&l_1480[g_855],&l_1480[1],&l_1480[g_855],&l_1480[g_855],&l_1480[1]}};
                    unsigned l_1665 = 4294967293UL;
                    unsigned short *l_1682 = &g_510;
                    int i, j;
                    l_1665++;
                    (*l_1663) |= (safe_rshift_func_int16_t_s_u(((*g_176) , ((safe_lshift_func_uint8_t_u_s((safe_add_func_uint64_t_u_u((safe_lshift_func_int8_t_s_s(((((*l_1654) , ((*l_1682) ^= (safe_lshift_func_uint8_t_u_u((((p_31 & (0xAEL ^ l_1678)) <= 1L) != (((((*g_384) = ((*g_176) && ((((~(safe_add_func_int8_t_s_s(p_31, ((*l_1442) = (*g_1064))))) , p_31) | (*g_176)) <= p_31))) , 0xE75A091DL) && l_1681) >= p_31)), 4)))) | 0x5D5CL) == p_31), 0)), (*l_1654))), p_31)) <= 0x5691L)), 5));
                    for (g_1203 = (-19); (g_1203 < 37); g_1203 = safe_add_func_int8_t_s_s(g_1203, 5))
                    {
                        return (*g_384);
                    }
                    for (g_1203 = 0; (g_1203 <= 0); g_1203 += 1)
                    {
                        return (*g_384);
                    }
                }
            }
        }
    }

    ;
    for (g_709 = 0; (g_709 <= 0); g_709 += 1)
    {
        unsigned l_1687 = 4294967295UL;
        int l_1698 = (-10L);
        int l_1699 = 0x9BB2344FL;
        int l_1700 = 0x4E07336DL;
        unsigned long long l_1701 = 0x1078A2CD87511938LL;
        unsigned ***l_1727[10] = {&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194,&g_194};
        long long *l_1752 = (void*)0;
        int l_1759 = (-1L);
        int l_1760 = 0xAE0EA7F9L;
        int l_1761 = 0x893E8AC0L;
        int l_1762 = (-1L);
        int l_1763[2];
        unsigned l_1765 = 0x1827CD02L;
        char ****l_1772 = &g_1062[0][1][1];
        int i;
        for (i = 0; i < 2; i++)
            l_1763[i] = (-3L);
    }
    p_32 = p_32;
    return (*g_869);
}







static int * func_37(unsigned char p_38, long long * p_39, long long * p_40, int p_41, char p_42)
{
    int **l_579 = (void*)0;
    int **l_580 = &g_33[0];
    unsigned l_581[3][4] = {{0xC53EF186L,7UL,0xC53EF186L,7UL},{0xC53EF186L,7UL,0xC53EF186L,7UL},{0xC53EF186L,7UL,0xC53EF186L,7UL}};
    int l_587 = 0L;
    char l_656 = 0x3AL;
    int l_688 = 0xD141EB83L;
    long long l_696[9][7] = {{7L,0L,0x235FAB1470ED7338LL,(-1L),0xEA2FB830327289E9LL,4L,(-4L)},{0x26AAB49A0FCC4C24LL,0xBF075878D56F8152LL,0x052088A9F671A908LL,(-1L),(-5L),0xF805EEC0F2CDFA40LL,0xDAE74BD9A2010FA2LL},{9L,(-1L),0xF805EEC0F2CDFA40LL,0x7BD106B0B80D885ALL,0xBF075878D56F8152LL,0xBF075878D56F8152LL,0x7BD106B0B80D885ALL},{0x26AAB49A0FCC4C24LL,0x605C7D6294B8C81BLL,0x26AAB49A0FCC4C24LL,(-1L),0xBF075878D56F8152LL,0x235FAB1470ED7338LL,(-4L)},{(-5L),0xEA2FB830327289E9LL,0L,0x605C7D6294B8C81BLL,7L,0x578F2B09D0F8704FLL,0x052088A9F671A908LL},{0x605C7D6294B8C81BLL,0L,0xEA2FB830327289E9LL,(-5L),0L,0x235FAB1470ED7338LL,0x235FAB1470ED7338LL},{(-1L),0x26AAB49A0FCC4C24LL,0x605C7D6294B8C81BLL,0x26AAB49A0FCC4C24LL,(-1L),0xBF075878D56F8152LL,0x235FAB1470ED7338LL},{0x7BD106B0B80D885ALL,0xF805EEC0F2CDFA40LL,(-1L),9L,0x235FAB1470ED7338LL,0xEA2FB830327289E9LL,0x052088A9F671A908LL},{(-1L),0xBF075878D56F8152LL,(-5L),4L,(-1L),(-1L),(-4L)}};
    int l_699 = 7L;
    int l_714 = 0x307E60E0L;
    int l_715 = 0x7BAFA885L;
    int l_717 = 0x0C240991L;
    int l_718 = 0x25821414L;
    char l_726 = 3L;
    int l_729[1];
    int l_730 = 2L;
    long long l_830 = 1L;
    unsigned char l_873 = 0xE1L;
    unsigned short **l_874[9][3][3] = {{{&g_384,&g_384,&g_384},{&g_384,&g_384,&g_384},{&g_384,&g_384,&g_384}},{{&g_384,&g_384,(void*)0},{(void*)0,&g_384,&g_384},{(void*)0,&g_384,&g_384}},{{&g_384,&g_384,&g_384},{&g_384,&g_384,&g_384},{&g_384,&g_384,&g_384}},{{&g_384,&g_384,(void*)0},{(void*)0,&g_384,&g_384},{(void*)0,&g_384,&g_384}},{{&g_384,&g_384,&g_384},{&g_384,&g_384,&g_384},{&g_384,&g_384,&g_384}},{{&g_384,(void*)0,&g_384},{&g_384,&g_384,&g_384},{&g_384,(void*)0,(void*)0}},{{&g_384,&g_384,&g_384},{&g_384,(void*)0,&g_384},{(void*)0,&g_384,&g_384}},{{(void*)0,(void*)0,&g_384},{&g_384,&g_384,&g_384},{&g_384,(void*)0,(void*)0}},{{&g_384,&g_384,&g_384},{&g_384,(void*)0,&g_384},{(void*)0,&g_384,&g_384}}};
    char l_880 = (-1L);
    int *l_922 = &g_709;
    unsigned long long l_927 = 1UL;
    unsigned short l_997 = 0xF2C6L;
    unsigned l_1006 = 0x6BF4D054L;
    unsigned char l_1029 = 255UL;
    unsigned short l_1042 = 0x4DA4L;
    char l_1096[5] = {0xC9L,0xC9L,0xC9L,0xC9L,0xC9L};
    unsigned long long l_1148 = 0UL;
    char ****l_1150 = &g_1062[0][0][2];
    int l_1158 = 1L;
    unsigned short **l_1178 = &g_384;
    long long l_1187 = 0L;
    unsigned **l_1215[9];
    unsigned long long l_1224[1];
    unsigned char **l_1254 = (void*)0;
    unsigned char ***l_1253 = &l_1254;
    long long l_1316 = 1L;
    int l_1317 = 0x78A0875DL;
    unsigned char l_1329[9] = {0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L,0x75L};
    int ***l_1358 = &g_1046[3][0][2];
    volatile int **l_1385 = &g_1383;
    unsigned long long l_1409 = 18446744073709551608UL;
    long long l_1410 = 0L;
    int *l_1420 = &l_729[0];
    int *l_1421[3];
    int *l_1422 = &g_709;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_729[i] = 0x8A6F7E96L;
    for (i = 0; i < 9; i++)
        l_1215[i] = &g_195;
    for (i = 0; i < 1; i++)
        l_1224[i] = 0xBF3936957EDD546DLL;
    for (i = 0; i < 3; i++)
        l_1421[i] = &l_729[0];
    if (((safe_mod_func_int64_t_s_s((p_38 && (((-1L) && (p_42 >= (*g_195))) > (*g_384))), (*g_176))) | p_42))
    {
        unsigned char *l_590[4][2][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0]}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0],&g_46[0][3][0]}}};
        int l_612 = (-1L);
        int l_613 = (-4L);
        int l_614 = 0x1ABA89B5L;
        int l_615[8][4] = {{1L,1L,0L,0L},{(-3L),(-3L),(-3L),0x006C090BL},{1L,0L,1L,(-3L)},{1L,(-3L),(-3L),1L},{1L,(-3L),0x006C090BL,(-3L)},{(-3L),0L,0x006C090BL,0x006C090BL},{1L,1L,(-3L),0x006C090BL},{1L,0L,1L,(-3L)}};
        unsigned l_616 = 0x8BE8E71CL;
        int l_687 = 0L;
        int i, j, k;
        if (((g_46[0][4][0] &= ((safe_rshift_func_int8_t_s_u(g_510, (g_50 = (p_38 = (((*g_384) &= 0x4C98L) , (**g_269)))))) > ((((p_42 > ((((void*)0 != g_591[8][0][1]) , (!(p_42 , (safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((p_41 >= 0L), 4)) , p_41), 12))))) , p_41)) & g_308) < p_42) , g_79))) != g_599))
        {
            int l_605 = 5L;
            int *l_606 = &l_587;
            int *l_607 = &g_305;
            int *l_608 = (void*)0;
            int *l_609 = &g_305;
            int *l_610 = (void*)0;
            int *l_611[4];
            int i;
            for (i = 0; i < 4; i++)
                l_611[i] = &l_587;
            for (g_599 = 0; (g_599 != 13); ++g_599)
            {
                int *l_604 = &g_308;
                (*l_604) = (safe_rshift_func_uint16_t_u_s((*g_384), g_305));
            }
            l_616++;
            for (g_50 = 16; (g_50 != 22); g_50++)
            {
                unsigned long long l_621[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_621[i] = 18446744073709551615UL;
                ++l_621[0];
                p_41 = (0x1FBD383FL == ((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(((void*)0 != &g_242[6][3]), 2)), ((*g_384) |= (safe_mod_func_int64_t_s_s(l_621[0], (*g_176)))))) < g_256));
                (*l_609) ^= p_42;
                if (p_38)
                    break;
            }
            for (g_438 = 0; (g_438 <= 8); g_438++)
            {
                (*l_607) = (*l_609);
            }
        }
        else
        {
            int l_636 = 1L;
            unsigned l_637 = 0UL;
            int *l_689[9] = {&l_613,&l_613,&l_613,&l_613,&l_613,&l_613,&l_613,&l_613,&l_613};
            int i;
            for (g_177 = 0; (g_177 <= (-15)); --g_177)
            {
                int *l_638[2][1][9] = {{{&l_615[4][2],&l_615[4][2],&l_615[4][2],&l_615[4][2],&l_615[4][2],&l_615[4][2],&l_615[4][2],&l_615[4][2],&l_615[4][2]}},{{&g_36[6],&g_36[6],&g_36[6],&g_36[6],&g_36[6],&g_36[6],&g_36[6],&g_36[6],&g_36[6]}}};
                int i, j, k;
                l_636 = (safe_rshift_func_uint16_t_u_u(((*g_384) = (p_38 , func_65(p_42))), 9));
                p_41 |= l_637;
                for (l_616 = 20; (l_616 >= 44); l_616 = safe_add_func_int8_t_s_s(l_616, 6))
                {
                    unsigned short *l_647 = &g_510;
                    int l_661 = 3L;
                    if (p_41)
                    {
                        int *l_657 = &l_614;
                        unsigned long long *l_658 = &g_62;
                        char *l_670 = &g_202;
                        volatile int *l_672 = &g_242[2][2];
                        volatile int **l_671 = &l_672;
                        (*l_657) = (((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int16_t_s_u((safe_mul_func_int8_t_s_s(((p_41 = l_656) , ((p_42 >= (p_38 != (+g_36[6]))) | (p_41 || p_41))), p_38)), 12)) == p_42), 4294967295UL)), 0x48L)) && p_42) , l_615[4][2]);
                        (*l_657) ^= p_42;
                        (*l_671) = &g_242[3][2];
                        p_41 = (!((*l_657) = ((((safe_mod_func_uint32_t_u_u(((*g_195) = (safe_sub_func_uint8_t_u_u((1UL ^ (((--(*l_658)) < p_38) < 0x2954L)), (**g_269)))), l_688)) , p_38) && l_687) | 1UL)));
                    }
                    else
                    {
                        if (p_38)
                            break;
                    }
                }
            }
            p_41 = p_42;
        }
    }
    else
    {
        unsigned short l_690[5][10] = {{2UL,5UL,1UL,0UL,0UL,1UL,5UL,2UL,65535UL,5UL},{0x9179L,65529UL,65532UL,65527UL,0UL,0x5A94L,5UL,0UL,65529UL,0UL},{0xECB2L,2UL,65532UL,0UL,0xD924L,0UL,65532UL,2UL,0xECB2L,65532UL},{65527UL,0x9179L,1UL,5UL,0x9179L,0UL,0UL,65527UL,65529UL,5UL},{5UL,0xECB2L,0xFA39L,0x9179L,0x5A94L,0x5A94L,0x9179L,65529UL,65532UL,65527UL}};
        int *l_691 = &g_308;
        int *l_692[3];
        int l_698 = 0x7E039D2AL;
        int *l_703[7][3] = {{&g_305,&g_305,&l_699},{(void*)0,&l_699,&l_699},{&l_699,&l_699,&l_688},{(void*)0,&l_699,(void*)0},{&g_305,&l_699,&l_688},{&g_305,&g_305,&l_699},{(void*)0,&l_699,&l_699}};
        int *l_704 = &g_305;
        int l_705 = 0x4BBA2AEDL;
        short l_727[10][1][7] = {{{1L,0x46A6L,0L,2L,2L,0L,0x46A6L}},{{(-10L),(-2L),0x0E4FL,0L,(-4L),(-2L),2L}},{{(-2L),0L,6L,(-10L),1L,0L,1L}},{{0x8E4BL,0x0E4FL,0xCD4CL,0L,0L,(-2L),(-4L)}},{{0x8BC9L,1L,0L,2L,0x0E21L,(-2L),0x0E21L}},{{6L,1L,1L,6L,0x7D1FL,0x1053L,1L}},{{0L,0x0E4FL,0x46A6L,0x8E4BL,(-10L),0xF6E9L,0L}},{{0L,0L,0x7D1FL,(-4L),0x8BC9L,(-8L),1L}},{{0xF6E9L,(-2L),(-2L),1L,(-4L),0x0E4FL,0x0E21L}},{{(-4L),0x46A6L,(-4L),0L,(-2L),0x0E4FL,0L}}};
        int l_728 = 0x0324B9C4L;
        unsigned char *l_745 = &g_46[4][5][0];
        unsigned char **l_744 = &l_745;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_692[i] = (void*)0;
        l_587 = ((*l_691) ^= l_690[4][1]);
        for (p_38 = (-21); (p_38 <= 7); ++p_38)
        {
            int l_695 = 0x6CEC52AEL;
            int l_697[8];
            int i;
            for (i = 0; i < 8; i++)
                l_697[i] = 0x574494B8L;
            ++g_700;
        }
        for (p_38 = 0; (p_38 <= 3); p_38 += 1)
        {
            int l_706 = 0x825BEDB8L;
            int l_707 = 1L;
            int l_710 = (-1L);
            int l_711[10];
            unsigned char l_758 = 255UL;
            unsigned long long *l_781 = &g_256;
            unsigned long long **l_780[7] = {&l_781,&l_781,&l_781,&l_781,&l_781,&l_781,&l_781};
            unsigned long long **l_783 = &l_781;
            int i;
            for (i = 0; i < 10; i++)
                l_711[i] = 0x130B7CFFL;
            (*l_691) = (&g_305 != l_703[2][2]);
            (*l_580) = l_704;
            (*l_580) = (void*)0;
            if (l_705)
                continue;
            for (g_256 = 0; (g_256 <= 3); g_256 += 1)
            {
                int l_712 = 0xFA188A09L;
                int l_713 = 0L;
                int l_716[2][3] = {{1L,0x2601B931L,0x2601B931L},{1L,0x2601B931L,0x2601B931L}};
                unsigned l_719 = 0xF746698EL;
                unsigned char *l_743 = &g_50;
                unsigned char **l_742 = &l_743;
                int i, j;
                if ((((*g_384) = g_242[(p_38 + 4)][p_38]) & func_65(p_41)))
                {
                    int l_708[8][8][4] = {{{0xE4409BE0L,0L,0x0291EE1DL,0x723BE169L},{0xFDE29698L,0xABCDF40FL,1L,(-6L)},{0x4E3941AFL,8L,0x354D0907L,0x0089619EL},{(-7L),1L,1L,(-7L)},{8L,0x7F4B94D5L,(-1L),0x587CF778L},{0x6239E216L,0x839C98EAL,0x01EE6FF1L,1L},{0xCC4B09E1L,(-5L),0x01185F3DL,0L},{(-1L),(-6L),0xE0965BC0L,0x63C8F766L}},{{0x0089619EL,(-4L),0x9035DCA8L,0xABCDF40FL},{0xABCDF40FL,0L,8L,0xB0B59BA8L},{(-1L),0xABCDF40FL,0x8A8DFB0EL,(-4L)},{(-7L),0x235475BEL,0x01EE6FF1L,(-5L)},{(-10L),0xC316D441L,1L,0x659A5C6CL},{8L,0L,0x88DE82A3L,1L},{(-4L),(-1L),0x354D0907L,(-7L)},{1L,(-1L),(-5L),0L}},{{0xFDE29698L,1L,(-4L),1L},{0xCC4B09E1L,0x8A5B2DE1L,0xDC9B2A7DL,0xC663A7DFL},{0x8A5B2DE1L,(-1L),8L,0xE4409BE0L},{0x88DE82A3L,(-4L),0x6F58C5FFL,(-5L)},{0x8A5B2DE1L,0x723BE169L,9L,0x4E3941AFL},{(-6L),(-1L),0L,0xB0B59BA8L},{0x6F58C5FFL,(-10L),0x6F58C5FFL,0L},{0L,1L,0xB719CDA4L,(-1L)}},{{0x254653A8L,5L,(-1L),1L},{0x2980CACDL,1L,(-1L),1L},{0x254653A8L,0xCC4B09E1L,0xB719CDA4L,(-5L)},{0L,1L,0x6F58C5FFL,0x7F4B94D5L},{0x6F58C5FFL,0x7F4B94D5L,0L,0x9C32077CL},{(-6L),0xE4409BE0L,9L,(-7L)},{0x8A5B2DE1L,(-5L),0L,0x8A5B2DE1L},{1L,0x3D63E527L,1L,0xE0965BC0L}},{{0x7F4B94D5L,1L,0L,0xB0B59BA8L},{(-7L),0xFDE29698L,0x14295E72L,0x659A5C6CL},{0x587CF778L,0x8A5B2DE1L,1L,0xE0965BC0L},{0x254653A8L,(-5L),0xCF4EB7BDL,0x839C98EAL},{(-7L),(-5L),1L,(-1L)},{1L,0xCC4B09E1L,(-1L),0x9C32077CL},{0xC663A7DFL,(-6L),0x71D4DA25L,(-6L)},{(-4L),1L,0L,0x723BE169L}},{{4L,(-7L),1L,1L},{0x839C98EAL,0x235475BEL,3L,0x8A5B2DE1L},{1L,5L,0x88DE82A3L,0x4E3941AFL},{4L,0x8A5B2DE1L,0x60EF48B1L,(-6L)},{0L,(-6L),8L,1L},{(-1L),0x9035DCA8L,3L,4L},{7L,1L,0xEEDEE59EL,0xEEDEE59EL},{5L,5L,(-7L),0L}},{{0x0291EE1DL,0xDC9B2A7DL,0x6FF36525L,0x88DE82A3L},{1L,0L,0L,0x6FF36525L},{0x587CF778L,0L,0x4E3941AFL,0x88DE82A3L},{0L,0xDC9B2A7DL,0x01EE6FF1L,0L},{0x71D4DA25L,5L,(-2L),0xEEDEE59EL},{1L,1L,(-7L),4L},{0x2980CACDL,0x9035DCA8L,1L,1L},{0L,(-6L),0L,(-6L)}},{{8L,0x14295E72L,0x235475BEL,(-1L)},{0x0291EE1DL,0x354D0907L,0xEEDEE59EL,0x14295E72L},{1L,0x9C32077CL,0x71D4DA25L,0L},{0x63C8F766L,0x01185F3DL,0x235475BEL,0x88DE82A3L},{0xE0965BC0L,0L,6L,0L},{0L,(-5L),0x1D90DAA5L,3L},{0L,0x8A8DFB0EL,(-7L),0x587CF778L},{0x6F58C5FFL,(-2L),1L,0x6F58C5FFL}}};
                    unsigned char l_731[1][1][8];
                    unsigned long long l_734 = 18446744073709551607UL;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 8; k++)
                                l_731[i][j][k] = 0x53L;
                        }
                    }
                    ++l_719;
                    if ((0x5867L != ((*g_384) && ((*g_384) |= p_38))))
                    {
                        char l_722 = 0xECL;
                        int l_723 = 0xFF9F0B48L;
                        int l_724 = 0x436F3EB1L;
                        int l_725[7][10] = {{0L,0xC358E6CCL,8L,(-5L),(-5L),8L,0xC358E6CCL,0L,0L,0xC358E6CCL},{0L,(-5L),0xC358E6CCL,0xC358E6CCL,(-5L),0L,8L,8L,0L,(-5L)},{(-5L),0xC358E6CCL,0xC358E6CCL,(-5L),0L,8L,8L,0L,(-5L),0xC358E6CCL},{(-5L),(-5L),8L,0xC358E6CCL,0L,0L,0xC358E6CCL,8L,(-5L),(-5L)},{0L,0xC358E6CCL,8L,(-5L),(-5L),8L,0xC358E6CCL,0L,0L,0xC358E6CCL},{0L,(-5L),0xC358E6CCL,0xC358E6CCL,(-5L),0L,8L,8L,0L,(-5L)},{(-5L),0xC358E6CCL,0xC358E6CCL,(-5L),0L,8L,8L,0L,(-5L),0xC358E6CCL}};
                        int i, j;
                        l_704 = &p_41;

                        ;
                        ++l_731[0][0][5];
                        l_707 ^= ((*g_176) == 1UL);
                    }
                    else
                    {
                        int l_741[5][1];
                        int i, j;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_741[i][j] = 4L;
                        }
                        (*l_704) = 0xC3C2D35AL;
                        (*l_691) ^= l_713;
                        if (p_38)
                            break;
                    }
                }
                else
                {
                    p_41 = ((l_742 != l_744) >= g_271);
                }
                (*l_691) &= (((safe_rshift_func_int16_t_s_u(l_707, 7)) && 1UL) && (((void*)0 == &l_656) != ((5L ^ (*g_195)) > l_710)));
                if ((safe_mul_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_41, ((*l_691) &= p_42))), 0)), (safe_mul_func_uint8_t_u_u((*g_270), (safe_rshift_func_uint16_t_u_s(l_758, 14)))))))
                {
                    (*l_704) = (-8L);
                    for (g_510 = 3; (g_510 == 23); g_510 = safe_add_func_int64_t_s_s(g_510, 6))
                    {
                        (*l_704) &= 0xD97B98C0L;
                    }
                }
                else
                {
                    unsigned l_763 = 0x262C366CL;
                    int l_769[5];
                    short *l_770 = &l_727[9][0][4];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_769[i] = 0L;
                    for (p_42 = 0; (p_42 == (-11)); p_42 = safe_sub_func_int32_t_s_s(p_42, 9))
                    {
                        l_716[1][0] ^= 6L;
                        (*l_580) = &g_709;
                        --l_763;
                        (*l_704) ^= (l_706 , p_42);
                    }
                    for (p_41 = 11; (p_41 >= (-17)); p_41--)
                    {
                        int *l_768[3][5][10] = {{{&l_587,&l_717,(void*)0,&l_712,&l_712,(void*)0,&l_717,&l_587,&l_698,&l_729[0]},{(void*)0,&l_729[0],&l_729[0],&l_587,&l_729[0],&l_712,&l_717,&l_729[0],&l_717,&l_712},{&g_308,&l_729[0],&l_729[0],&l_729[0],&g_308,&l_729[0],&l_698,&l_587,&l_717,(void*)0},{&l_698,(void*)0,(void*)0,&l_729[0],&l_728,&l_698,&l_698,&l_728,&l_729[0],&g_305},{&l_587,&l_587,&l_717,&g_305,&l_698,&l_729[0],&g_308,&l_698,&l_712,&l_717}},{{&l_698,&l_729[0],&g_308,&l_729[0],&l_729[0],&l_729[0],&g_308,&l_729[0],&l_698,&l_587},{&l_728,&l_587,&l_712,&l_698,&l_717,(void*)0,&l_717,&l_729[0],&l_729[0],&l_717},{&l_729[0],&l_728,&l_698,&l_698,&l_728,&l_729[0],(void*)0,(void*)0,&l_698,&l_729[0]},{&l_729[0],&l_729[0],&l_587,&l_729[0],&l_712,&l_717,&l_729[0],&l_717,&l_712,&l_729[0]},{&l_729[0],&l_717,&l_729[0],&g_305,&l_717,&l_729[0],&l_729[0],&l_717,&l_587,(void*)0}},{{&l_729[0],&l_729[0],&l_717,&l_587,(void*)0,(void*)0,&l_587,&l_717,&l_729[0],&l_729[0]},{&l_728,(void*)0,&l_729[0],&l_729[0],&l_587,&l_729[0],&l_712,&l_717,&l_729[0],&l_717},{&l_698,&l_729[0],&l_587,(void*)0,&l_587,&l_729[0],&l_698,(void*)0,(void*)0,&l_729[0]},{&l_587,&l_712,&l_698,&l_717,(void*)0,&l_729[0],&l_729[0],&l_729[0],&l_729[0],(void*)0},{(void*)0,&l_728,&l_728,(void*)0,&l_729[0],&l_729[0],&l_587,&l_729[0],&l_712,&l_717}}};
                        unsigned *l_771 = &l_719;
                        short *l_775[4][2][6] = {{{(void*)0,(void*)0,&g_139,&l_727[9][0][4],&g_139,(void*)0},{&g_139,(void*)0,&l_727[9][0][4],&l_727[9][0][4],(void*)0,&g_139}},{{(void*)0,&g_139,&l_727[9][0][4],&g_139,(void*)0,(void*)0},{&l_727[4][0][1],&g_139,&g_139,&l_727[4][0][1],(void*)0,&l_727[4][0][1]}},{{&l_727[4][0][1],(void*)0,&l_727[4][0][1],&g_139,&g_139,&l_727[4][0][1]},{(void*)0,(void*)0,&g_139,&l_727[9][0][4],&g_139,(void*)0}},{{&g_139,(void*)0,&l_727[9][0][4],&l_727[9][0][4],(void*)0,&g_139},{(void*)0,&g_139,&l_727[9][0][4],&g_139,(void*)0,(void*)0}}};
                        short **l_774 = &l_775[2][1][5];
                        unsigned long long ***l_782 = &l_780[3];
                        int i, j, k;
                        (*l_580) = l_768[0][1][1];
                        l_769[2] = p_42;
                        g_784[0] &= ((l_770 == ((*l_774) = (((*l_771)--) , l_770))) , ((*l_691) = func_65((l_769[0] == (safe_mul_func_int16_t_s_s(((*l_770) = (safe_div_func_int8_t_s_s((func_51((*g_195), (((((*l_782) = l_780[3]) == (g_709 , l_783)) >= g_36[6]) || (p_38 != l_763)), l_710) , (-1L)), 0x7AL))), 65535UL))))));
                        (*l_691) = (p_41 == p_41);
                    }


                }


            }
        }


        ;
        for (g_374 = 12; (g_374 > 8); g_374 = safe_sub_func_int8_t_s_s(g_374, 3))
        {
            int l_802[8] = {0xB0DDFA12L,0xB0DDFA12L,0xB0DDFA12L,0xB0DDFA12L,0xB0DDFA12L,0xB0DDFA12L,0xB0DDFA12L,0xB0DDFA12L};
            int **l_818 = &l_703[0][0];
            int i;
            for (g_79 = 0; (g_79 != 18); ++g_79)
            {
                char l_791 = 0x75L;
                char *l_794 = (void*)0;
                char *l_795 = (void*)0;
                char *l_796 = (void*)0;
                char *l_797 = &g_784[1];
                int l_798 = (-9L);
                unsigned l_801[5];
                short *l_803 = &g_599;
                unsigned long long l_821 = 1UL;
                int l_824 = 0x94AC4527L;
                int i;
                for (i = 0; i < 5; i++)
                    l_801[i] = 7UL;
                l_798 |= (~(safe_lshift_func_uint16_t_u_u(((l_791 , (func_65(((*l_704) = (-5L))) , (safe_sub_func_int8_t_s_s(g_5, ((*l_797) = g_784[0]))))) < (**g_269)), 10)));
                (*l_691) = ((safe_mul_func_int8_t_s_s(p_41, (((func_65(l_801[1]) , ((~l_802[7]) , l_801[1])) < (0x2A8D7C40L != p_42)) < ((*l_803) &= p_38)))) & (safe_rshift_func_int8_t_s_u((((((*g_384) & p_42) & p_38) == (*g_384)) ^ (*g_384)), 4)));
                if ((safe_sub_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((safe_add_func_int8_t_s_s(g_202, p_38)), 4)) | g_439[2][0][0]), p_42)))
                {
                    (*l_704) |= 3L;
                    (*l_704) = (safe_mod_func_int16_t_s_s((p_42 <= ((safe_sub_func_int16_t_s_s(func_65(((p_38 , l_818) == &g_33[0])), ((void*)0 != (*g_269)))) , (((l_821 > ((func_65(l_798) , &g_591[8][8][0]) == &g_591[8][0][1])) || p_41) < 0L))), g_177));
                }
                else
                {
                    for (g_709 = 17; (g_709 < (-12)); g_709 = safe_sub_func_int64_t_s_s(g_709, 6))
                    {
                        unsigned l_825 = 5UL;
                        ++l_825;
                        (*l_704) ^= (safe_add_func_int16_t_s_s((g_385 == p_42), (*g_384)));
                        return &g_36[6];



                    }
                    p_41 &= p_38;
                }
                if (p_38)
                    continue;
            }
            (*l_818) = &l_728;
        }


    }


    if (l_830)
    {
        long long l_833 = 8L;
        unsigned long long l_837[2];
        int l_863[6][3][9] = {{{(-8L),0x1731EC5CL,0x7C45E777L,(-10L),0x1DEB1D38L,0xC006C2FBL,0xFFBEA7ABL,0xAF22E2DDL,0x0113A5CEL},{0xDCB83143L,4L,0x9ACB9AD8L,1L,0xFFBEA7ABL,0xFFBEA7ABL,1L,0x9ACB9AD8L,4L},{0xDCB83143L,0x0113A5CEL,0xAF22E2DDL,0xFFBEA7ABL,0xC006C2FBL,0x1DEB1D38L,4L,0x363E5284L,0x7C45E777L}},{{0xB3F91D68L,0x8D8124A4L,0x0113A5CEL,0x9ACB9AD8L,5L,0x7C45E777L,1L,0xAF22E2DDL,1L},{0x1DEB1D38L,0x9ACB9AD8L,(-10L),0x0113A5CEL,0x74C7AEEFL,0x74D8E88BL,0x74D8E88BL,0x74C7AEEFL,0x0113A5CEL},{(-10L),0x1731EC5CL,(-10L),(-9L),0x9ACB9AD8L,0L,5L,0x822E3465L,0x74C7AEEFL}},{{0x240C5C79L,0x7C45E777L,0x0113A5CEL,0x822E3465L,(-1L),0x94404DEFL,1L,(-8L),0xC006C2FBL},{1L,1L,0x8D8124A4L,(-9L),0xAF22E2DDL,0xDCB83143L,(-1L),(-1L),0xDCB83143L},{0xAF22E2DDL,0x0113A5CEL,0xDCB83143L,0x0113A5CEL,0xAF22E2DDL,0xFFBEA7ABL,0xC006C2FBL,0x1DEB1D38L,(-10L)}},{{0x7C45E777L,0x74C7AEEFL,0x363E5284L,0x9ACB9AD8L,(-1L),0x240C5C79L,1L,2L,0xB3F91D68L},{0x0113A5CEL,0xC006C2FBL,0xAF22E2DDL,(-8L),0x9ACB9AD8L,0xFFBEA7ABL,0x363E5284L,1L,1L},{0x363E5284L,0xDCB83143L,0x74C7AEEFL,0x1DEB1D38L,0x74C7AEEFL,0xDCB83143L,0x363E5284L,0x240C5C79L,4L}},{{1L,(-10L),0x822E3465L,4L,5L,0x94404DEFL,1L,0x9ACB9AD8L,0xAF22E2DDL},{0x74D8E88BL,0xB3F91D68L,0x0113A5CEL,0x8D8124A4L,0xB3F91D68L,0xDCB83143L,(-8L),(-2L),2L},{2L,(-9L),0x363E5284L,5L,0x0113A5CEL,5L,0x363E5284L,(-9L),2L}},{{0x74C7AEEFL,1L,1L,0xFFBEA7ABL,2L,(-1L),(-9L),0x74D8E88BL,1L},{0xDCB83143L,1L,0x74D8E88BL,(-9L),(-1L),2L,0xFFBEA7ABL,1L,1L},{0x74C7AEEFL,2L,(-9L),0x363E5284L,5L,0x0113A5CEL,5L,0x363E5284L,(-9L)}}};
        unsigned long long l_903 = 0xF8552193B323D546LL;
        int l_965 = 0x3ED3EF0CL;
        unsigned l_1012 = 0x69ACB158L;
        unsigned long long l_1040 = 0x0A3E1DC5BE038D30LL;
        short *l_1041 = &g_599;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_837[i] = 0xDAC578A0F5D06F88LL;
        for (l_830 = 0; (l_830 < 12); ++l_830)
        {
            volatile int *l_836 = (void*)0;
            int l_858 = 0xCDE69136L;
            short l_860 = 1L;
            long long *l_889 = (void*)0;
            int l_901 = 1L;
            int l_902[2][3] = {{(-1L),(-1L),(-1L)},{0x65EBB9E3L,0x65EBB9E3L,0x65EBB9E3L}};
            short **l_915 = (void*)0;
            unsigned long long l_940[1];
            unsigned l_1000 = 0x37472A6DL;
            char **l_1017 = (void*)0;
            char ***l_1018 = &l_1017;
            short *l_1023 = &l_860;
            long long l_1028 = 0L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_940[i] = 0x90F7A298CE04E1EELL;
        }
        (*l_922) = (l_1029 && ((*g_384) = l_837[1]));
        return &g_308;



    }
    else
    {
        short l_1043 = 5L;
        int l_1045 = 0xB469A4E5L;
        char *l_1061 = (void*)0;
        char **l_1060 = &l_1061;
        char ***l_1059 = &l_1060;
        unsigned short *l_1075 = (void*)0;
        unsigned l_1080 = 4294967295UL;
        unsigned short *l_1081 = &g_510;
        short *l_1099 = &g_139;
        short **l_1098[9] = {&l_1099,&l_1099,&l_1099,&l_1099,&l_1099,&l_1099,&l_1099,&l_1099,&l_1099};
        unsigned long long l_1134 = 18446744073709551613UL;
        int l_1189[2][3] = {{0x419EC9C0L,0x419EC9C0L,0x419EC9C0L},{0x4B6D93F9L,0x4B6D93F9L,0x4B6D93F9L}};
        int l_1200 = 0xE6373A52L;
        unsigned long long **l_1206 = (void*)0;
        unsigned char l_1300 = 3UL;
        unsigned l_1313 = 4294967295UL;
        char l_1314 = 0xDDL;
        int l_1328 = 0x2A07ACD0L;
        int **l_1363 = &g_1138;
        short l_1392 = 8L;
        unsigned char **l_1411 = (void*)0;
        int i, j;
        for (g_62 = 0; (g_62 <= 2); g_62 += 1)
        {
            unsigned char l_1065[7];
            unsigned ***l_1094 = &g_194;
            int **l_1103 = &g_33[0];
            int l_1122 = 0xC921C547L;
            short l_1130 = (-1L);
            int l_1131 = 0x08EB3227L;
            int l_1132 = 0x220FF3A3L;
            char ****l_1149[9] = {(void*)0,&g_1062[0][1][1],(void*)0,(void*)0,&g_1062[0][1][1],(void*)0,(void*)0,&g_1062[0][1][1],(void*)0};
            unsigned *l_1151 = &l_581[0][3];
            int i;
            for (i = 0; i < 7; i++)
                l_1065[i] = 0x56L;
            if (p_38)
                break;
            for (l_718 = 2; (l_718 >= 0); l_718 -= 1)
            {
                int *l_1044[6][3][8] = {{{(void*)0,&l_717,&g_36[0],&g_36[6],&g_308,&g_305,&g_305,&g_308},{&l_717,(void*)0,(void*)0,&l_717,(void*)0,(void*)0,&l_729[0],&g_36[6]},{(void*)0,&l_729[0],&l_729[0],&l_718,&l_718,&g_305,(void*)0,&g_305}},{{&g_36[6],&g_36[6],&l_718,&g_305,(void*)0,&g_305,&l_718,&g_36[6]},{&g_36[6],&g_305,(void*)0,&l_717,&l_718,(void*)0,&g_305,&g_36[6]},{&g_305,(void*)0,&l_717,&g_36[0],&g_36[6],&g_308,&g_305,&g_305}},{{&l_714,&g_36[0],(void*)0,(void*)0,&g_36[0],&l_714,&l_718,(void*)0},{&g_36[0],&l_714,&l_718,(void*)0,&g_305,(void*)0,(void*)0,&g_305},{(void*)0,&g_305,&l_718,(void*)0,&g_36[6],&l_718,&g_36[6],(void*)0}},{{&g_305,&g_36[6],&g_305,(void*)0,&l_717,&l_718,(void*)0,&g_305},{&g_36[6],&g_36[6],&l_718,&g_36[0],&l_729[0],&g_305,&l_717,&g_36[6]},{&g_36[6],&g_305,&l_729[0],&l_717,&l_717,&l_729[0],&g_305,&g_36[6]}},{{&g_305,(void*)0,&g_36[6],&g_305,&g_36[6],&l_714,&g_305,&g_305},{(void*)0,&g_305,(void*)0,(void*)0,&g_305,&l_714,&l_717,&l_714},{&g_36[0],(void*)0,&g_36[6],(void*)0,&g_36[0],&l_729[0],&g_36[0],&g_305}},{{&l_729[0],(void*)0,&l_714,&l_729[0],&l_717,&g_305,&l_718,(void*)0},{(void*)0,&l_718,&l_714,&g_36[0],(void*)0,(void*)0,&g_36[0],&l_714},{&l_717,&l_717,&l_729[0],&g_305,&g_36[6],&l_718,(void*)0,&l_717}}};
                long long **l_1055 = (void*)0;
                long long **l_1056 = &g_176;
                unsigned char **l_1068 = (void*)0;
                int *l_1104 = &l_729[0];
                char ***l_1120 = &g_1063;
                int i, j, k;
                p_41 &= ((*l_922) = (l_1043 = (-8L)));
                l_1045 = 0x510AB8A9L;
                if (func_51(((*g_195) = ((g_1046[3][0][2] = &l_1044[4][1][1]) == (((l_696[(l_718 + 6)][(g_62 + 1)] <= l_1043) >= (safe_lshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u((safe_sub_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u((*g_384), (((*l_1056) = &g_177) == (func_65((func_65((safe_add_func_int16_t_s_s(((l_1059 != g_1062[0][2][0]) , l_1045), (*g_918)))) , 0xE6158493L)) , &g_859[0][7])))) , (*g_176)), 8UL)), p_41)), p_42))) , &l_1044[0][0][5]))), l_1065[5], g_859[0][3]))
                {
                    unsigned char **l_1069 = (void*)0;
                    unsigned char *l_1071 = (void*)0;
                    unsigned char **l_1070[8] = {&l_1071,&l_1071,&l_1071,&l_1071,&l_1071,&l_1071,&l_1071,&l_1071};
                    unsigned char ***l_1072 = &l_1070[5];
                    int *l_1085 = &l_1045;
                    int i;
                    if (func_51(p_38, p_42, (((safe_add_func_uint32_t_u_u(((((l_1069 = l_1068) != ((*l_1072) = l_1070[5])) , ((l_1043 < ((p_42 , (l_1075 = ((safe_rshift_func_int8_t_s_s(p_42, 6)) , &g_385))) == ((safe_div_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u((*g_195), l_1065[5])), l_1080)) , l_1081))) >= p_38)) , (*g_195)), p_38)) < l_1080) , p_42)))
                    {
                        int *l_1082 = &g_305;
                        return l_1082;




                    }
                    else
                    {
                        long long l_1097[9][8] = {{(-9L),5L,0x1C5E0BC5371BB85DLL,1L,0x903F3796AE50FD11LL,0xE67BF24FFB5853AFLL,0xE67BF24FFB5853AFLL,0x903F3796AE50FD11LL},{0x7CD20C7A691008CBLL,1L,1L,0x7CD20C7A691008CBLL,0x1C5E0BC5371BB85DLL,0x6289555606EDE9BDLL,9L,0x101BFC82D7FA476CLL},{0x1C5E0BC5371BB85DLL,0x6289555606EDE9BDLL,9L,0x101BFC82D7FA476CLL,0xD2D7F89A83319307LL,(-4L),0x903F3796AE50FD11LL,5L},{0xEA448AFCAF241BCDLL,0x6289555606EDE9BDLL,0x078C0B3B79AE28C6LL,0x10CA7AB4D53EAA54LL,0x078C0B3B79AE28C6LL,0x6289555606EDE9BDLL,0xEA448AFCAF241BCDLL,(-9L)},{0L,1L,(-9L),0x6289555606EDE9BDLL,0x7CD20C7A691008CBLL,0xE67BF24FFB5853AFLL,1L,(-1L)},{(-1L),5L,0x10CA7AB4D53EAA54LL,0xD2D7F89A83319307LL,0x7CD20C7A691008CBLL,0x7CD20C7A691008CBLL,0xD2D7F89A83319307LL,0x10CA7AB4D53EAA54LL},{0L,0L,(-4L),(-1L),0x078C0B3B79AE28C6LL,0xEA448AFCAF241BCDLL,0x10CA7AB4D53EAA54LL,9L},{0xEA448AFCAF241BCDLL,0x1C5E0BC5371BB85DLL,0L,0x078C0B3B79AE28C6LL,0xD2D7F89A83319307LL,(-9L),0xD2D7F89A83319307LL,(-9L)},{1L,1L,0x1C5E0BC5371BB85DLL,1L,1L,0x903F3796AE50FD11LL,(-1L),0x6289555606EDE9BDLL}};
                        short ***l_1100 = &l_1098[3];
                        int i, j;
                        (*l_922) = (safe_rshift_func_uint8_t_u_s((g_50 = p_38), l_1097[2][4]));
                        (*l_1100) = l_1098[7];
                    }

                    ;
                    (*l_1085) = l_1065[5];
                }
                else
                {
                    unsigned long long l_1105 = 18446744073709551610UL;
                    for (g_374 = 2; (g_374 >= 0); g_374 -= 1)
                    {
                        int ***l_1101 = (void*)0;
                        int ***l_1102[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1102[i] = &g_1046[0][2][2];
                        l_1103 = &g_33[0];
                        if (p_42)
                            break;
                        (*l_1103) = l_1104;
                    }
                    for (g_139 = 2; (g_139 >= 0); g_139 -= 1)
                    {
                        unsigned long long *l_1116 = &g_256;
                        unsigned long long *l_1117 = &l_927;
                        int i, j, k;
                        p_41 = ((l_1105 & 0xE3B10E22048350FBLL) ^ (*l_922));
                        p_41 = ((p_41 >= func_65(p_41)) | (safe_sub_func_uint8_t_u_u(((safe_div_func_uint32_t_u_u(0xD6B22AC2L, (safe_rshift_func_int8_t_s_s(((**g_1063) = (p_38 | 0xB1L)), l_1105)))) != (((safe_mod_func_int16_t_s_s((((((safe_mod_func_uint32_t_u_u(((((*l_1117) = ((*l_1116) |= p_42)) , l_1045) && l_1105), p_41)) || (**g_269)) , (*l_1104)) >= 0x9B4AD4D1L) || 0xC86D26A9L), 0xD2B0L)) , 0xE03CF890EF90C2AFLL) ^ (*g_176))), g_202)));
                    }
                    p_41 &= ((*l_1104) = ((!((*g_917) == (void*)0)) & l_1080));
                }


                for (l_873 = 0; (l_873 <= 0); l_873 += 1)
                {
                    long long l_1118 = 5L;
                    for (g_385 = 0; (g_385 <= 6); g_385 += 1)
                    {
                        char ***l_1119[8][9] = {{&g_1063,&g_1063,&g_1063,&l_1060,&l_1060,&g_1063,&g_1063,&l_1060,&l_1060},{&g_1063,&g_1063,&g_1063,&g_1063,&l_1060,&g_1063,(void*)0,(void*)0,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&l_1060,&l_1060,&g_1063,&g_1063},{&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&g_1063,&l_1060,&l_1060},{(void*)0,&l_1060,&g_1063,&l_1060,&l_1060,&l_1060,&g_1063,&l_1060,(void*)0},{&g_1063,&l_1060,(void*)0,&l_1060,&l_1060,&g_1063,&l_1060,&l_1060,(void*)0},{&l_1060,&l_1060,&g_1063,&g_1063,&l_1060,&g_1063,(void*)0,&g_1063,&l_1060},{&g_1063,&l_1060,&l_1060,&g_1063,&g_1063,&l_1060,&g_1063,(void*)0,&g_1063}};
                        char ****l_1121 = &g_1062[0][0][2];
                        int i, j, k;
                        p_41 |= ((l_1118 = ((*l_1081) = (*g_384))) , ((p_42 , l_1119[0][5]) != ((*l_1121) = l_1120)));
                        (*l_1104) = (*l_1104);
                        (*l_580) = (l_1044[l_718][(l_873 + 1)][(g_385 + 1)] = &p_41);
                    }
                    for (g_385 = 0; (g_385 <= 0); g_385 += 1)
                    {
                        int i;
                        if (l_1118)
                            break;
                        (*l_580) = &l_1045;
                    }
                }


            }
            (*g_1095) = (*l_1094);
            for (g_709 = 6; (g_709 >= 0); g_709 -= 1)
            {
                int *l_1123 = &l_699;
                unsigned *l_1124 = &l_1006;
                int l_1133[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
                unsigned long long *l_1145 = &l_1134;
                int i, j;
                if (func_65((l_1045 = ((l_696[(g_62 + 1)][(g_62 + 1)] || p_38) >= (((l_1045 == p_38) , l_1122) != (*l_1123))))))
                {
                    int *l_1125 = &g_305;
                    int *l_1126 = &l_714;
                    int *l_1127 = (void*)0;
                    int *l_1128 = &g_308;
                    int *l_1129[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                    int i;
                    l_1134++;
                    if (l_1045)
                        break;
                    (*l_1103) = &p_41;
                }
                else
                {
                    int *l_1137 = &l_688;
                    for (l_718 = 0; (l_718 >= 0); l_718 -= 1)
                    {
                        int i;
                        return g_1138;



                    }
                }
                p_41 = (func_51(((((((0x37071299L | (-10L)) == (((p_38 > (0x9A6EL <= (safe_div_func_uint64_t_u_u((safe_div_func_int16_t_s_s(((void*)0 != l_1145), (*g_869))), (((safe_mul_func_int8_t_s_s(l_1148, ((((-5L) || p_42) , (*p_40)) != p_41))) < g_599) , g_784[2]))))) , l_1149[5]) != l_1150)) , &l_1080) == l_1151) >= 0x8BDB29D7721156F5LL) , 4294967295UL), p_42, p_42) , 0L);
                for (g_1035 = 0; (g_1035 <= 0); g_1035 += 1)
                {
                    int i;
                    (*l_1103) = &l_1133[5];
                }


                for (g_177 = 2; (g_177 >= 0); g_177 -= 1)
                {
                    (*l_1103) = &p_41;
                }
            }
            for (l_1122 = 2; (l_1122 >= 0); l_1122 -= 1)
            {
                unsigned char l_1154[6] = {255UL,255UL,0UL,255UL,255UL,0UL};
                char ****l_1155 = &g_1062[0][2][0];
                long long l_1159 = (-1L);
                int *l_1162 = &g_36[6];
                int i;
                (*g_1138) = p_42;
                (*g_1138) = (((safe_mul_func_uint16_t_u_u(((-1L) > 0L), (((l_1154[4] ^= p_38) , func_51(((~(((((void*)0 == &l_873) <= (**g_269)) , l_1158) ^ 0x7596CACE327CEE03LL)) & 0UL), (*g_1138), p_38)) , (*g_918)))) , 0UL) , l_1159);
                if (p_38)
                {
                    int *l_1160 = &l_730;
                    l_1160 = &p_41;

                    ;
                }
                else
                {
                    return g_1161;



                }
                (*l_1103) = l_1162;
                for (g_50 = 0; (g_50 <= 2); g_50 += 1)
                {
                    return l_1162;



                }
            }
        }



        ;
        if (l_1134)
        {
            unsigned short **l_1177 = &g_384;
            unsigned *l_1179 = (void*)0;
            unsigned *l_1180[9] = {&l_1006,&l_1006,&l_1006,&l_1006,&l_1006,&l_1006,&l_1006,&l_1006,&l_1006};
            unsigned long long *l_1185 = &l_927;
            int l_1186 = (-1L);
            int *l_1188 = &g_305;
            int *l_1190[3][7] = {{&l_1158,&l_1158,(void*)0,&l_699,(void*)0,&l_699,(void*)0},{&l_1158,&l_1158,(void*)0,&l_699,(void*)0,&l_699,(void*)0},{&l_1158,&l_1158,(void*)0,&l_699,(void*)0,&l_699,(void*)0}};
            unsigned long long **l_1205[2];
            unsigned long long ***l_1204 = &l_1205[1];
            int i, j;
            for (i = 0; i < 2; i++)
                l_1205[i] = &l_1185;
            (*l_922) = l_1186;
            l_1186 = (((*l_1099) |= p_38) <= p_41);
            g_1191++;
            (*l_922) &= (safe_mul_func_int8_t_s_s(((0x225DAB65L ^ ((**g_269) <= (((safe_lshift_func_uint16_t_u_s((*g_384), g_859[0][3])) || func_65((((*l_1204) = ((safe_sub_func_uint32_t_u_u(l_1200, (safe_rshift_func_uint8_t_u_u(((g_1203 &= func_65((((((void*)0 != &l_1080) < ((*l_1081) ^= (*g_384))) == ((*l_1099) = (p_38 | (-2L)))) , (-9L)))) <= p_38), 7)))) , &l_1185)) != l_1206))) & p_38))) != p_41), g_46[1][5][0]));
        }
        else
        {
            unsigned l_1218 = 0xB6C8C279L;
            long long **l_1235 = &g_176;
            int *l_1236 = (void*)0;
            for (g_709 = 0; (g_709 < (-18)); g_709--)
            {
                unsigned long long *l_1216 = (void*)0;
                unsigned long long *l_1217 = &l_1134;
                int *l_1223 = &l_688;
                if ((((*g_176) >= (*g_176)) && ((**g_269) | (((*l_1217) = (safe_lshift_func_int16_t_s_u(g_36[1], (((*g_195) = l_1080) != (safe_mul_func_int16_t_s_s((((p_41 , 18446744073709551613UL) , (*p_40)) == ((void*)0 == l_1215[0])), (*g_384))))))) , 0UL))))
                {
                    for (g_700 = 0; (g_700 <= 2); g_700 += 1)
                    {
                        int i, j;
                        l_1218--;
                        p_41 ^= l_581[g_700][(g_700 + 1)];
                        (*l_580) = &p_41;
                        (*l_580) = (void*)0;
                    }
                    for (l_656 = 3; (l_656 >= 2); l_656 = safe_sub_func_uint8_t_u_u(l_656, 7))
                    {
                        l_1223 = &p_41;

                        ;
                    }

                    ;
                    (*l_1223) |= l_1224[0];
                }
                else
                {
                    unsigned char l_1232 = 0x4EL;
                    for (g_438 = 0; (g_438 != (-8)); g_438--)
                    {
                        int *l_1227 = &l_729[0];
                        int *l_1228 = &l_1189[0][0];
                        int *l_1229 = &l_729[0];
                        int *l_1230 = &l_688;
                        int *l_1231[8] = {&l_718,&l_718,&l_718,&l_718,&l_718,&l_718,&l_718,&l_718};
                        int i;
                        if (p_38)
                            break;
                        --l_1232;
                        (*l_580) = l_1223;
                        (*l_1223) = (&g_176 != l_1235);
                    }


                    return l_1236;



                }

                ;
                if ((*l_1223))
                    break;
            }
            for (l_1080 = 27; (l_1080 >= 49); l_1080 = safe_add_func_uint64_t_u_u(l_1080, 9))
            {
                unsigned *l_1257 = &l_581[1][2];
                for (g_50 = 0; (g_50 == 59); g_50 = safe_add_func_uint32_t_u_u(g_50, 1))
                {
                    long long l_1245 = (-5L);
                    unsigned char *l_1246 = &g_700;
                    unsigned char ****l_1252 = &g_1251;
                    (*g_1138) &= (safe_add_func_int8_t_s_s(((*g_384) <= 0xA709L), (((safe_lshift_func_uint8_t_u_u((((*l_1150) = (*l_1150)) != &g_1063), ((*l_1246) = l_1245))) & 0UL) & (safe_lshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((((*l_1252) = g_1251) == l_1253), l_1245)), 4)))));
                }
                (*g_1138) = (safe_add_func_int16_t_s_s((((g_859[0][3] , (g_195 = (void*)0)) == (g_1258 = l_1257)) < ((((((p_41 >= ((0xB968CC39L && (4294967295UL < p_41)) & p_42)) >= l_1200) , p_41) , p_38) ^ (*p_40)) && (*l_922))), p_41));

                ;
                ;
            }

            ;
            ;
            (*g_1138) = p_41;
        }

        ;
        ;
        for (l_699 = 0; (l_699 < 15); l_699++)
        {
            char l_1276 = (-9L);
            char ***l_1291[2];
            char ****l_1292 = (void*)0;
            char ****l_1293 = &l_1059;
            unsigned char *l_1298 = &g_700;
            int *l_1299 = &l_1045;
            unsigned long long *l_1310[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            unsigned long long **l_1309 = &l_1310[4];
            int l_1318 = 2L;
            int l_1319 = (-8L);
            int l_1320 = 9L;
            int l_1321 = 0x907D0C49L;
            int l_1322 = 0x6B3C0E9AL;
            char l_1323 = (-1L);
            int l_1324 = 0L;
            int l_1325 = 6L;
            int l_1327[6] = {0x2515C4FDL,0x2515C4FDL,0x2515C4FDL,0x2515C4FDL,0x2515C4FDL,0x2515C4FDL};
            int i;
            for (i = 0; i < 2; i++)
                l_1291[i] = &g_1063;
            for (l_656 = (-7); (l_656 < (-12)); l_656--)
            {
                short l_1265 = 0x103DL;
                int *l_1270 = &l_1189[1][1];
                (*l_580) = &p_41;
                (*g_1138) = 0x78BA84B2L;
                if (p_38)
                    continue;
                for (g_177 = 0; (g_177 > (-27)); g_177--)
                {
                    (*g_1138) = ((l_1265 || 0x58E35757L) <= (((*l_922) == (safe_add_func_int16_t_s_s(1L, 0xD9DFL))) == (safe_sub_func_uint32_t_u_u(0xB6FBB1C2L, p_38))));
                    (*g_1138) = ((*g_176) , l_1189[1][2]);
                    (*l_580) = l_1270;
                }
            }
            for (l_656 = 4; (l_656 <= (-30)); l_656 = safe_sub_func_uint16_t_u_u(l_656, 5))
            {
                unsigned l_1275 = 4294967295UL;
                (*l_580) = &p_41;
                l_714 ^= (safe_add_func_int32_t_s_s(l_1275, ((-4L) <= ((l_1080 , l_1276) , (((((0x6B0C113C26727A2ELL || (safe_lshift_func_uint8_t_u_u(0x7DL, ((safe_div_func_int64_t_s_s(((*p_40) = (safe_sub_func_uint64_t_u_u((safe_div_func_int32_t_s_s(p_38, 0x5DB5D60FL)), p_42))), l_1189[0][0])) && l_1189[0][0])))) || (*l_922)) < p_38) & l_1276) | l_1276)))));
            }
            (*l_1299) &= ((safe_lshift_func_int16_t_s_u((((((((safe_rshift_func_uint16_t_u_s(((((*g_176) = ((*p_40) = (((*l_1293) = (l_1291[0] = ((*l_1150) = &g_1063))) != &g_1063))) , (p_38 , (((*l_922) , &p_42) != ((((*g_176) ^ (((*l_1298) = (((((safe_mul_func_uint8_t_u_u(((p_41 | (((safe_add_func_uint8_t_u_u(((*g_176) ^ 0x009F563CE183EC8BLL), p_38)) <= l_1276) && (*l_922))) && l_1276), 4L)) , g_46[4][2][0]) , (*g_1064)) > (*g_270)) , l_1276)) | p_42)) < (-5L)) , &p_42)))) > g_36[1]), p_41)) >= 4UL) , l_1299) != (void*)0) == 0xADC93F56L) , 1UL) & l_1300), 5)) > 9L);

            ;
            if (l_1080)
            {
                int *l_1315[7] = {&l_1189[1][1],&l_1189[1][1],&l_1189[1][1],&l_1189[1][1],&l_1189[1][1],&l_1189[1][1],&l_1189[1][1]};
                short l_1326[5][8] = {{0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L},{0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L},{0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L},{0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L},{0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L,0x6BA8L}};
                int i, j;
                if (p_41)
                    break;
                ++l_1329[2];
            }
            else
            {
                unsigned char l_1334 = 255UL;
                for (g_177 = 0; (g_177 < (-3)); g_177--)
                {
                    if (p_38)
                        break;
                    if (p_38)
                        break;
                    (*g_1138) = l_1334;
                }
            }
        }


        ;
        for (g_177 = 0; (g_177 >= 15); g_177 = safe_add_func_int64_t_s_s(g_177, 1))
        {
            unsigned l_1339 = 0x93473B7FL;
            int *l_1348 = &l_1158;
            int *l_1349 = &l_1045;
            int l_1393[6][6] = {{(-5L),0x919B4FC8L,0x919B4FC8L,(-5L),0x919B4FC8L,0x919B4FC8L},{(-5L),0x919B4FC8L,0x919B4FC8L,(-5L),0x919B4FC8L,0x919B4FC8L},{(-5L),0x919B4FC8L,0x919B4FC8L,(-5L),0x919B4FC8L,0x919B4FC8L},{(-5L),0x919B4FC8L,0x919B4FC8L,(-5L),0x919B4FC8L,0x919B4FC8L},{(-5L),0x919B4FC8L,0x919B4FC8L,(-5L),0x919B4FC8L,0x919B4FC8L},{(-5L),0x919B4FC8L,0x919B4FC8L,(-5L),0x919B4FC8L,0x919B4FC8L}};
            unsigned **l_1408 = &g_1258;
            int i, j;
            for (g_700 = 0; (g_700 <= 5); g_700 += 1)
            {
                int *l_1338[4][9][7] = {{{(void*)0,&l_1045,&g_305,(void*)0,&l_1045,&l_1317,(void*)0},{&l_729[0],&l_1328,&g_36[6],(void*)0,&l_1189[0][0],&l_729[0],&l_718},{&l_699,&l_718,&l_699,&l_714,&l_1189[0][0],&l_1045,&g_305},{(void*)0,&l_1317,&l_717,&l_587,&g_308,&l_717,&g_36[2]},{&g_36[5],&l_1158,&l_1189[0][0],&l_718,&l_1158,&g_308,&l_714},{&l_1189[0][0],&l_729[0],(void*)0,&l_730,(void*)0,&l_1045,&l_730},{(void*)0,&g_709,&g_305,(void*)0,&l_729[0],(void*)0,&l_1189[1][2]},{&g_308,&l_718,&l_718,&l_730,&l_729[0],&g_36[6],(void*)0},{&l_1158,&l_718,(void*)0,&l_730,&l_688,&l_714,&g_305}},{{&l_1045,&l_1189[1][2],&l_1189[0][0],&l_718,&l_688,&g_36[6],&g_36[0]},{&l_688,(void*)0,&l_1317,&l_1045,&l_729[0],&l_1158,(void*)0},{&l_699,&l_730,&l_1045,&l_1045,&l_1045,&l_1189[0][0],(void*)0},{&l_587,&l_688,(void*)0,&g_36[6],&l_730,&l_1189[0][0],&l_688},{&l_714,&l_1328,&g_305,&g_36[0],&l_714,&l_1158,&l_729[0]},{&l_729[0],&g_305,&l_1189[0][0],&l_1317,&l_718,&g_308,&l_1189[0][0]},{&l_714,(void*)0,&g_36[0],&l_729[0],&l_717,&g_308,&g_308},{&g_36[0],&l_1189[0][0],(void*)0,&l_1189[0][0],&g_36[0],&l_587,&l_1189[0][0]},{&l_729[0],&l_714,&l_1317,&l_1317,&l_1317,&l_1045,&l_718}},{{&g_305,(void*)0,(void*)0,(void*)0,(void*)0,&l_1158,&g_36[4]},{&l_729[0],&l_1317,&g_305,&l_718,&l_587,(void*)0,&l_730},{&g_36[0],&l_1045,&l_717,&l_718,&l_1328,&l_718,&l_1189[0][0]},{&g_305,&l_714,&l_729[0],&l_587,&l_718,(void*)0,&g_36[0]},{&l_1189[0][0],(void*)0,(void*)0,&l_699,&l_1045,&l_1158,&l_1317},{&l_688,&l_1045,&l_1328,&l_718,&l_1189[0][0],&l_688,(void*)0},{&l_730,&l_1045,&l_1328,&g_36[0],(void*)0,&l_688,&l_688},{&l_1045,&l_688,&l_587,(void*)0,&l_699,&l_714,&l_1189[0][0]},{(void*)0,&l_587,&l_1045,&l_717,(void*)0,&l_718,&l_1189[0][0]}},{{&g_36[0],&l_1189[0][0],&l_587,&l_717,&l_688,&l_1045,&l_729[0]},{&g_36[5],&l_1317,&l_1158,(void*)0,&g_305,&l_1189[0][0],&l_587},{&l_1189[1][2],&l_1328,&l_1045,&g_36[0],&g_36[0],&l_688,&l_1328},{&l_1189[0][0],&l_714,&l_699,&l_718,&l_699,&l_717,&g_36[4]},{&l_587,(void*)0,&l_1045,&l_699,&l_714,&g_305,&l_699},{&l_730,&g_305,&l_1317,&l_587,&l_1189[0][0],&l_730,&g_36[5]},{&g_36[5],&g_36[3],&g_308,&l_718,(void*)0,&l_688,(void*)0},{&l_1317,&l_1189[0][0],&l_1189[0][0],&l_1317,&g_308,&l_729[0],&l_729[0]},{&l_1189[1][2],&g_305,&l_587,&l_718,&g_308,&l_587,(void*)0}}};
                unsigned char *l_1344 = &g_46[4][2][0];
                int *l_1350 = &g_36[4];
                int i, j, k;
                l_1339++;
                (*g_1138) ^= g_784[g_700];
                p_41 = (safe_mod_func_uint16_t_u_u(((-1L) & g_784[g_700]), (((*l_1344) = func_65((*g_1138))) , ((safe_mul_func_uint16_t_u_u(((*g_384) |= 0xC14AL), (((((****l_1150) = ((safe_unary_minus_func_int32_t_s(0x6678D219L)) , func_65(l_1045))) , &g_1046[3][2][1]) != (void*)0) , p_42))) | p_41))));
                p_41 = p_42;
                for (g_510 = 0; (g_510 <= 1); g_510 += 1)
                {
                    int ***l_1357[10] = {&l_580,&g_1046[3][0][2],&g_1046[3][0][2],&l_580,&g_1046[3][0][2],&g_1046[3][0][2],&l_580,&g_1046[3][0][2],&g_1046[3][0][2],&l_580};
                    unsigned char l_1367 = 249UL;
                    int i, j;
                }
            }
            (*l_580) = ((*l_1363) = (*l_1363));
            for (l_1006 = 1; (l_1006 <= 5); l_1006 += 1)
            {
                short **l_1372 = &l_1099;
                int *l_1376[8][7][4] = {{{&l_1328,&l_729[0],(void*)0,(void*)0},{&l_1328,&g_709,&l_730,&g_308},{&g_709,&l_1189[1][1],&l_729[0],&l_587},{&g_305,(void*)0,&g_709,&l_715},{&l_1158,&l_1328,&l_730,&l_729[0]},{(void*)0,&l_730,&g_308,&l_1189[1][1]},{&l_1045,(void*)0,&l_587,&l_717}},{{&l_699,&l_1328,&l_1328,(void*)0},{&l_1045,&g_709,&l_1328,&l_1158},{(void*)0,&l_1189[0][0],(void*)0,&l_1045},{&l_1328,&l_1158,(void*)0,&l_688},{&l_699,&l_1189[1][1],&l_1328,&l_1158},{(void*)0,&l_587,&l_1328,&l_1328},{&l_699,&l_1045,(void*)0,&l_1317}},{{&l_1328,&l_587,(void*)0,&g_308},{(void*)0,&g_308,&l_1328,&l_699},{&l_1045,&l_715,&l_1328,&l_730},{&l_699,(void*)0,&l_587,&l_1317},{&l_730,&l_587,&l_1328,(void*)0},{&l_715,&l_1328,(void*)0,(void*)0},{&g_308,&l_1189[0][0],&g_308,&l_587}},{{&l_718,&l_729[0],&g_308,&l_1328},{&l_587,&g_308,&g_308,&l_587},{&l_1328,&l_699,&l_1328,&l_587},{&l_587,&g_709,&l_1328,&l_1158},{&l_587,&g_36[3],(void*)0,&l_1158},{&l_730,&g_709,&g_308,&l_587},{&l_1045,&l_699,&l_699,&l_587}},{{&l_1317,&g_308,&l_587,&l_1328},{&g_709,&l_729[0],&l_1317,&l_587},{(void*)0,&l_1189[0][0],&l_1189[1][1],(void*)0},{&l_587,&l_1328,&l_1189[1][1],(void*)0},{&l_1328,&l_587,&g_709,&l_1317},{&l_729[0],(void*)0,&l_1158,&g_308},{&g_308,(void*)0,&l_1328,&l_1158}},{{&g_709,&l_1328,&l_1158,&l_1328},{&l_1045,&l_1045,(void*)0,&l_729[0]},{&l_717,&l_730,&l_729[0],&l_587},{&g_308,&l_587,&l_688,&g_308},{&g_308,(void*)0,&l_729[0],(void*)0},{&l_717,&g_308,(void*)0,&l_688},{&l_1045,&l_717,(void*)0,&l_1328}},{{&l_1328,&l_715,&l_1045,&l_587},{&l_1158,&l_587,&g_308,&l_1045},{&g_36[3],&g_308,&l_1328,&l_699},{&l_587,&l_587,&l_1045,(void*)0},{&g_709,&l_715,&l_587,&g_308},{&g_308,(void*)0,&l_1158,&g_36[3]},{&g_305,&l_699,&l_1317,&l_1317}},{{&l_1158,&l_1158,&l_1189[1][1],(void*)0},{&l_587,&g_709,(void*)0,&l_730},{(void*)0,&l_1189[0][0],&g_308,(void*)0},{&l_1317,&l_1189[0][0],&l_1328,&l_730},{&l_1189[0][0],&g_709,&l_587,(void*)0},{&l_715,&l_1158,&l_1158,&l_1317},{&l_718,&l_699,&g_709,&g_36[3]}}};
                int i, j, k;
                if (p_41)
                {
                    for (l_1328 = 0; (l_1328 <= 5); l_1328 += 1)
                    {
                        short ***l_1375 = &l_1098[7];
                        (*l_1349) |= (safe_rshift_func_int16_t_s_s((l_1372 == ((*l_1375) = g_1373)), 3));
                        l_1376[6][6][1] = &p_41;
                    }


                    (*g_1138) |= ((*l_1348) = p_42);
                }
                else
                {
                    unsigned char **l_1379 = (void*)0;
                    int l_1386[3];
                    unsigned char ***l_1412 = &l_1411;
                    short *l_1418 = &l_1043;
                    unsigned long long *l_1419 = &l_1409;
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1386[i] = (-9L);
                    for (l_1313 = 1; (l_1313 <= 5); l_1313 += 1)
                    {
                        unsigned char ****l_1380 = &g_1251;
                        (*l_1349) |= (safe_lshift_func_uint8_t_u_u((p_38 = (((p_42 == func_65((**l_1363))) , p_41) | (((*g_1258) = (*g_1258)) == ((**l_1363) < ((((p_38 , l_1379) == (((void*)0 == l_1380) , &g_270)) && p_38) && 0x10A7L))))), 3));
                        (*l_1363) = &p_41;

                        ;
                    }
                    for (g_385 = 0; (g_385 <= 3); g_385 += 1)
                    {
                        short l_1381[8][1][7] = {{{0x2E80L,0x47F4L,0xC236L,8L,0x47F4L,0x47F4L,8L}},{{1L,0xCB5BL,1L,0L,0xEC95L,0L,1L}},{{0x2E80L,8L,1L,0x2E80L,0x2E80L,1L,8L}},{{1L,0L,0x22F9L,0xCB5BL,0x22F9L,0L,1L}},{{0x47F4L,0x2E80L,0xC236L,0xC236L,0x2E80L,0x47F4L,0xC236L}},{{0xEC95L,0xCB5BL,(-1L),0L,1L,0xCB5BL,1L}},{{0x47F4L,1L,1L,0x47F4L,1L,1L,0xC236L}},{{0x8E8CL,0L,0x8E8CL,0x5E51L,0x22F9L,0x5E51L,0x8E8CL}}};
                        int i, j, k;
                        g_242[(l_1006 + 3)][g_385] = l_1381[3][0][6];
                    }
                    for (l_1300 = 1; (l_1300 <= 5); l_1300 += 1)
                    {
                        volatile int ***l_1384[5][3][10] = {{{(void*)0,(void*)0,(void*)0,&g_1382,(void*)0,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382},{(void*)0,&g_1382,&g_1382,&g_1382,&g_1382,(void*)0,&g_1382,&g_1382,&g_1382,&g_1382},{(void*)0,&g_1382,(void*)0,&g_1382,&g_1382,&g_1382,(void*)0,&g_1382,(void*)0,(void*)0}},{{(void*)0,&g_1382,&g_1382,&g_1382,&g_1382,(void*)0,(void*)0,&g_1382,&g_1382,&g_1382},{(void*)0,(void*)0,&g_1382,&g_1382,&g_1382,&g_1382,(void*)0,&g_1382,(void*)0,&g_1382},{(void*)0,&g_1382,&g_1382,&g_1382,(void*)0,&g_1382,(void*)0,(void*)0,&g_1382,&g_1382}},{{&g_1382,(void*)0,&g_1382,&g_1382,&g_1382,&g_1382,(void*)0,&g_1382,&g_1382,&g_1382},{&g_1382,&g_1382,(void*)0,&g_1382,(void*)0,(void*)0,(void*)0,&g_1382,&g_1382,&g_1382},{&g_1382,&g_1382,&g_1382,&g_1382,(void*)0,&g_1382,&g_1382,&g_1382,&g_1382,(void*)0}},{{&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,(void*)0,&g_1382,(void*)0,&g_1382},{&g_1382,(void*)0,&g_1382,&g_1382,&g_1382,(void*)0,&g_1382,(void*)0,(void*)0,&g_1382},{(void*)0,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,(void*)0}},{{&g_1382,&g_1382,(void*)0,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382},{&g_1382,(void*)0,&g_1382,&g_1382,&g_1382,&g_1382,(void*)0,&g_1382,&g_1382,(void*)0},{&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382,&g_1382}}};
                        int l_1387 = 0x1EAB9998L;
                        int l_1388 = (-4L);
                        int l_1389 = 0x9756D1EAL;
                        int l_1390 = 0L;
                        int l_1391[10][8] = {{(-4L),(-1L),0x2D9C92DAL,(-1L),(-4L),(-4L),(-1L),0x2D9C92DAL},{(-4L),(-4L),(-1L),0x2D9C92DAL,(-1L),(-4L),(-4L),(-1L)},{0xBF9F6219L,(-1L),(-1L),0xBF9F6219L,1L,0xBF9F6219L,(-4L),(-4L)},{(-4L),0x2D9C92DAL,0xBF9F6219L,0xBF9F6219L,0x2D9C92DAL,(-4L),0x2D9C92DAL,0xBF9F6219L},{(-1L),0x2D9C92DAL,(-1L),(-4L),(-4L),(-1L),0x2D9C92DAL,(-1L)},{1L,(-4L),0xBF9F6219L,(-4L),1L,1L,(-4L),0xBF9F6219L},{1L,1L,(-4L),0xBF9F6219L,(-4L),1L,1L,(-4L)},{(-1L),(-4L),(-4L),(-1L),0x2D9C92DAL,(-1L),(-4L),(-4L)},{(-4L),0x2D9C92DAL,0xBF9F6219L,0xBF9F6219L,0x2D9C92DAL,(-4L),0x2D9C92DAL,0xBF9F6219L},{(-1L),0x2D9C92DAL,(-1L),(-4L),(-4L),(-1L),0x2D9C92DAL,(-1L)}};
                        unsigned l_1394 = 0xDA015F5CL;
                        unsigned char l_1401[8];
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_1401[i] = 254UL;
                        l_1385 = g_1382;
                        l_1394++;
                        (*l_922) = ((*l_1348) >= (l_1390 != (safe_lshift_func_uint16_t_u_s(((l_1391[0][4] = (safe_div_func_uint64_t_u_u(1UL, (((l_1388 = l_1401[5]) > (*g_1064)) | (*g_1258))))) != func_65(((safe_sub_func_int64_t_s_s((safe_div_func_int8_t_s_s(p_42, (((((2UL & (safe_mul_func_int8_t_s_s((g_784[l_1300] |= ((void*)0 == l_1408)), (**g_1063)))) & p_38) || l_1409) ^ 0xEDL) , (**g_1063)))), l_1386[2])) && l_1394))), l_1410))));
                        if (p_38)
                            continue;
                    }
                    (*l_1348) = ((l_1099 != (void*)0) <= (((*l_1419) = ((((*l_1253) = l_1379) == ((*l_1412) = l_1411)) & ((safe_rshift_func_uint8_t_u_s((safe_unary_minus_func_uint16_t_u((safe_sub_func_uint32_t_u_u((l_1386[2] = ((*g_1161) >= (p_42 && (*g_176)))), 1L)))), p_38)) && 0xB570L))) & p_42));
                }


            }
        }


        ;
    }

    ;

    ;
    ;
    return l_1422;





}







static short func_51(unsigned p_52, int p_53, unsigned p_54)
{
    unsigned char *l_309 = &g_46[1][5][0];
    unsigned char **l_310 = (void*)0;
    unsigned char **l_311 = &l_309;
    int l_316 = 0L;
    int l_317 = 0x1A176179L;
    unsigned char l_320[1][4] = {{251UL,251UL,251UL,251UL}};
    int *l_321 = &g_308;
    int l_330 = 0xBD11BAFBL;
    int l_331 = (-1L);
    int l_332 = 0x49A6F7DAL;
    int l_333[1];
    unsigned char l_334 = 1UL;
    unsigned l_346[6];
    unsigned short *l_390[10] = {&g_385,&g_385,&g_385,&g_385,&g_385,&g_385,&g_385,&g_385,&g_385,&g_385};
    long long l_418[8] = {(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L),(-10L)};
    long long l_437 = 0x7E076A8B6A3DEB56LL;
    unsigned char l_444 = 0x82L;
    unsigned l_573 = 0xE87B5E29L;
    int i, j;
    for (i = 0; i < 1; i++)
        l_333[i] = 0xFAC2CC38L;
    for (i = 0; i < 6; i++)
        l_346[i] = 0x3ADCD464L;
    if (((*l_321) = ((g_50 &= func_65((l_317 = ((((*g_176) ^= (((*l_311) = l_309) == (void*)0)) & (safe_lshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(func_65(l_316), 65535UL)), 11))) , ((*l_321) = (l_316 ^= ((l_317 , (0x2AL ^ ((safe_lshift_func_uint16_t_u_u(l_320[0][3], 14)) == g_46[4][5][0]))) ^ p_53))))))) == p_52)))
    {
        unsigned char l_322 = 255UL;
        int l_328 = 0L;
        int l_329[2][8][10] = {{{2L,(-2L),0L,0L,(-2L),2L,0x4B953AF3L,(-1L),9L,0xC06DEEFBL},{(-2L),(-10L),0L,0xC06DEEFBL,2L,(-1L),(-1L),2L,0xC06DEEFBL,0L},{(-2L),(-2L),(-1L),(-10L),9L,2L,0L,0x4B953AF3L,0xC06DEEFBL,0xC06DEEFBL},{2L,0L,0x4B953AF3L,0xC06DEEFBL,0xC06DEEFBL,0x4B953AF3L,0L,2L,9L,(-10L)},{9L,(-2L),(-10L),0L,0xC06DEEFBL,2L,(-1L),(-1L),2L,0xC06DEEFBL},{0xC06DEEFBL,(-10L),(-10L),0xC06DEEFBL,9L,(-1L),0x4B953AF3L,2L,(-2L),0L},{0xC06DEEFBL,(-2L),0x4B953AF3L,(-10L),2L,2L,(-10L),0x4B953AF3L,(-2L),0xC06DEEFBL},{9L,0L,(-1L),0xC06DEEFBL,(-2L),0x4B953AF3L,(-10L),2L,2L,(-10L)}},{{2L,(-2L),0L,0L,(-2L),2L,0x4B953AF3L,(-1L),9L,0xC06DEEFBL},{(-2L),(-10L),0L,0xC06DEEFBL,2L,(-1L),(-1L),2L,0xC06DEEFBL,0L},{(-2L),(-2L),(-1L),(-10L),9L,2L,0L,0x4B953AF3L,0xC06DEEFBL,0xC06DEEFBL},{2L,0L,0x4B953AF3L,0xC06DEEFBL,0xC06DEEFBL,0x4B953AF3L,0L,2L,9L,(-10L)},{9L,(-2L),(-10L),0L,0xC06DEEFBL,2L,(-1L),(-1L),2L,0xC06DEEFBL},{0xC06DEEFBL,(-10L),(-10L),0xC06DEEFBL,9L,(-1L),0x4B953AF3L,2L,(-2L),0L},{0xC06DEEFBL,(-2L),0x4B953AF3L,(-10L),2L,2L,(-10L),0x4B953AF3L,(-2L),0xC06DEEFBL},{9L,0L,(-1L),0xC06DEEFBL,(-2L),0x4B953AF3L,(-10L),2L,2L,(-10L)}}};
        int i, j, k;
        if ((*l_321))
        {
            int *l_323 = &l_317;
            int *l_324 = &l_317;
            int *l_325 = (void*)0;
            int *l_326 = &g_308;
            int *l_327[2];
            int i;
            for (i = 0; i < 2; i++)
                l_327[i] = &l_316;
            (*l_321) = l_322;
            --l_334;
        }
        else
        {
            int *l_337 = &l_329[1][2][9];
            int *l_338 = &l_333[0];
            int *l_339 = &l_330;
            int *l_340 = &g_305;
            int *l_341 = &l_329[1][5][6];
            int *l_342 = (void*)0;
            int *l_343 = &l_317;
            int *l_344 = &g_308;
            int *l_345[3];
            int i;
            for (i = 0; i < 3; i++)
                l_345[i] = &l_333[0];
            (*l_321) &= p_53;
            --l_346[1];
            for (l_316 = (-10); (l_316 > (-19)); l_316 = safe_sub_func_int8_t_s_s(l_316, 8))
            {
                unsigned short l_361[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_361[i] = 0xF1DAL;
                (*l_337) = (*l_321);
                for (g_305 = 0; (g_305 >= 22); g_305 = safe_add_func_int16_t_s_s(g_305, 1))
                {
                    unsigned long long l_364[9][3] = {{1UL,18446744073709551615UL,18446744073709551615UL},{5UL,18446744073709551615UL,18446744073709551615UL},{0x1BB7CF5721435488LL,18446744073709551615UL,18446744073709551607UL},{1UL,18446744073709551615UL,18446744073709551615UL},{5UL,18446744073709551615UL,18446744073709551615UL},{0x1BB7CF5721435488LL,18446744073709551615UL,18446744073709551607UL},{1UL,18446744073709551615UL,18446744073709551615UL},{5UL,18446744073709551615UL,18446744073709551615UL},{0x1BB7CF5721435488LL,18446744073709551615UL,18446744073709551607UL}};
                    int i, j;
                    if ((*l_321))
                    {
                        if (l_322)
                            break;
                        if (p_54)
                            break;
                    }
                    else
                    {
                        int **l_362 = &l_340;
                        unsigned char ***l_363 = &l_311;
                        (*l_338) ^= (safe_div_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, 0xEC31L)), (safe_div_func_int8_t_s_s((((((**l_311)--) == (l_361[0] &= (*l_321))) < (*g_195)) >= 0x0AL), 0xB0L))));
                        (*l_362) = &g_36[6];

                        ;
                        l_364[3][1] = ((*l_321) = ((*l_338) = (l_363 == (((*g_195) == (*g_195)) , (l_328 , l_363)))));
                    }
                }
            }

            ;
        }
        return g_36[2];
    }
    else
    {
        int *l_371 = &l_333[0];
        int *l_372 = (void*)0;
        unsigned long long *l_375 = (void*)0;
        short l_376 = (-7L);
        int l_431 = 0L;
        int l_441[9] = {4L,4L,4L,4L,4L,4L,4L,4L,4L};
        unsigned char ***l_449 = &l_311;
        unsigned char l_450 = 0x20L;
        long long l_453[10] = {4L,4L,1L,0L,1L,4L,4L,1L,0L,1L};
        unsigned l_473[1][2];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_473[i][j] = 0x6DDDA0E5L;
        }
        for (g_50 = 0; (g_50 <= 0); g_50 += 1)
        {
            int **l_369 = &g_33[0];
            int **l_370[6][4] = {{&l_321,&g_33[0],&l_321,&l_321},{&g_33[0],&g_33[0],&l_321,&g_33[0]},{&g_33[0],&l_321,&l_321,&g_33[0]},{&l_321,&g_33[0],&l_321,&l_321},{&g_33[0],&g_33[0],&l_321,&g_33[0]},{&g_33[0],&l_321,&l_321,&g_33[0]}};
            long long *l_373 = &g_374;
            unsigned short *l_389 = &g_385;
            char l_442 = 0L;
            short l_485 = 0x6680L;
            int i, j;
            p_53 &= ((safe_lshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s(((l_371 = &g_36[6]) != (l_372 = &l_333[0])), 0x55E7L)) && (((0x105E2EA9B58B7B8ELL ^ ((*g_176) = p_54)) , (*g_195)) >= ((((*l_373) = (*l_372)) || 0xF06D82980B40B59ALL) >= (((void*)0 != l_375) && p_52)))), l_376)) , p_52);

            ;
            ;
            for (l_332 = 5; (l_332 >= 0); l_332 -= 1)
            {
                unsigned short **l_386 = (void*)0;
                unsigned short **l_387 = (void*)0;
                unsigned short **l_388 = &g_384;
                int l_401 = 0x2CCB5AF7L;
                int l_419 = 0x3104F90FL;
                int l_420 = 1L;
                int l_424 = (-1L);
                int l_425 = (-3L);
                int l_428 = 0x2A6C5E0EL;
                int l_432 = 0x488FE0A5L;
                int l_434 = 0x3A7C282BL;
                int l_435 = 5L;
                int l_436 = 0x2C6BA9A2L;
                int l_443 = 0xB1B88EBCL;
                (*l_321) = p_53;
                (*l_321) = (p_52 || ((safe_lshift_func_uint16_t_u_u(func_65(((*l_372) ^= (((*l_321) , &p_54) == ((*l_321) , &p_52)))), (g_50 && (**g_269)))) >= (safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int64_t_s(((((*l_388) = g_384) == l_389) ^ 0x5C48A3B9E3AC2C1ALL))) || (-4L)), p_53)) || 0x8E0C7D8DL), 8UL))));
                if (((*l_372) = func_65((p_52 && ((&g_385 == l_390[4]) >= (safe_add_func_uint32_t_u_u(((*g_195) ^= (safe_add_func_uint64_t_u_u((((safe_rshift_func_uint8_t_u_u((*l_371), 5)) | ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(p_53, (*l_371))), (**g_269))) || (*l_321))) != (*l_371)), 0x6AD27858E66FB2EELL))), l_401)))))))
                {
                    if ((*l_371))
                        break;
                }
                else
                {
                    long long l_402 = 0x7E8EC34155D1B4A8LL;
                    int l_423 = 0L;
                    int l_426 = 7L;
                    int l_427 = 0L;
                    int l_430[10] = {0xB206D322L,0x03335662L,0xB206D322L,0xB206D322L,0x03335662L,0xB206D322L,0xB206D322L,0x03335662L,0xB206D322L,0xB206D322L};
                    int l_440 = 0x2517B773L;
                    int i;
                    for (g_139 = 5; (g_139 >= 1); g_139 -= 1)
                    {
                        l_401 = (l_402 & (p_54 < p_52));
                        (*l_369) = &p_53;
                        (*l_369) = &p_53;
                        (*l_369) = (void*)0;
                    }
                    if (l_401)
                    {
                        (*l_372) |= ((((safe_add_func_uint64_t_u_u(18446744073709551611UL, 0L)) & (((*g_176) < (((*l_373) &= (((safe_lshift_func_int8_t_s_u((safe_mul_func_int8_t_s_s(2L, p_53)), 5)) , (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(p_54, ((0x9171L && func_65((safe_add_func_int64_t_s_s(p_53, (*g_176))))) , 0x9B7377B9L))), p_54))) ^ 0x3FL)) | (*g_176))) > p_52)) == (*g_176)) , l_401);
                        g_33[0] = &p_53;
                    }
                    else
                    {
                        int l_417 = 0x3D45638AL;
                        int l_421 = 1L;
                        int l_422 = 0x97698F76L;
                        char l_429 = 7L;
                        int l_433[7][9][4] = {{{(-7L),(-8L),0L,0xE7AF5BCBL},{1L,(-8L),0x1D6A9A56L,1L},{(-1L),0xE7AF5BCBL,(-10L),0x534D0B4FL},{7L,0xB8FB605DL,8L,1L},{0L,1L,0x534D0B4FL,5L},{5L,0x227BB044L,5L,0x534D0B4FL},{1L,0xD4D5ADA8L,0x344304EAL,1L},{0x8CA27A64L,(-8L),(-8L),0xD4D5ADA8L},{0x1D6A9A56L,0xB8FB605DL,(-8L),(-10L)}},{{0x8CA27A64L,0x23841933L,0x344304EAL,0xB06277BFL},{1L,(-1L),5L,0xE7AF5BCBL},{5L,0xE7AF5BCBL,0x534D0B4FL,(-8L)},{0L,7L,8L,0xD4D5ADA8L},{7L,(-1L),(-10L),5L},{(-1L),0x8CA27A64L,0x1D6A9A56L,(-10L)},{1L,(-10L),0xD4D5ADA8L,1L},{0x534D0B4FL,(-1L),(-1L),0x534D0B4FL},{4L,1L,7L,0x962D9AF3L}},{{1L,0xFAA19B2AL,(-7L),5L},{0x85C962FDL,0x4849E123L,0x295B324CL,5L},{0x344304EAL,0xFAA19B2AL,0x1FAAD336L,0x962D9AF3L},{(-8L),1L,0x8CA27A64L,0x534D0B4FL},{(-1L),(-1L),1L,1L},{0x295B324CL,(-10L),0L,1L},{0x85C962FDL,0x4ED89C22L,0x8CA27A64L,0L},{0x534D0B4FL,1L,0xDC7E224FL,1L},{0x344304EAL,1L,(-1L),0x1FAAD336L}},{{0x4ED89C22L,(-1L),(-7L),(-1L)},{(-1L),1L,0L,5L},{4L,0x85C962FDL,0x962D9AF3L,1L},{(-8L),(-8L),0xD4D5ADA8L,1L},{(-8L),(-1L),0x962D9AF3L,(-8L)},{4L,1L,0L,0x962D9AF3L},{(-1L),(-10L),(-7L),0L},{0x4ED89C22L,0x4849E123L,(-1L),(-8L)},{0x344304EAL,(-8L),0xDC7E224FL,0x962D9AF3L}},{{0x534D0B4FL,(-1L),0x8CA27A64L,0x1D6A9A56L},{0x85C962FDL,(-1L),0L,(-1L)},{0x295B324CL,0xFAA19B2AL,1L,1L},{(-1L),0x1D6A9A56L,1L,(-1L)},{0xFAA19B2AL,0x295B324CL,1L,5L},{0L,0L,1L,1L},{0x534D0B4FL,0L,0xB8FB605DL,5L},{0L,0x295B324CL,4L,(-1L)},{0x1FAAD336L,0x1D6A9A56L,0L,0x4849E123L}},{{(-8L),1L,5L,(-8L)},{(-10L),0L,1L,(-10L)},{0x1FAAD336L,(-8L),0x4849E123L,7L},{5L,(-1L),0xB8FB605DL,(-1L)},{0x1D6A9A56L,0x344304EAL,7L,0x85C962FDL},{0L,1L,0L,7L},{(-10L),0L,1L,0xFAA19B2AL},{(-8L),0L,4L,0L},{1L,(-1L),4L,0x4849E123L}},{{(-8L),0x534D0B4FL,1L,0x4ED89C22L},{(-10L),0x295B324CL,0L,(-8L)},{0L,(-8L),7L,1L},{0x1D6A9A56L,5L,0xB8FB605DL,0L},{5L,0x295B324CL,0x4849E123L,0x85C962FDL},{0x1FAAD336L,(-8L),1L,0x4849E123L},{(-10L),1L,5L,5L},{(-8L),0L,0L,(-8L)},{0x1FAAD336L,5L,4L,7L}}};
                        int i, j, k;
                        ++l_444;
                        return (*l_321);


                    }
                }
                if (p_54)
                {
                    if ((l_434 = (safe_add_func_uint64_t_u_u(g_439[1][1][1], 1L))))
                    {
                        return g_202;


                    }
                    else
                    {
                        g_33[0] = &p_53;
                        if ((*l_371))
                            break;
                        if (p_53)
                            break;
                    }
                    if (p_53)
                        break;
                }
                else
                {
                    long long l_457 = (-1L);
                    int l_459 = 4L;
                    unsigned l_460 = 1UL;
                    int l_468 = (-2L);
                    int l_469 = 0x7C8FD7A6L;
                    int l_470[3][10] = {{0x8CBB0331L,9L,0xC87E8E79L,0xC87E8E79L,9L,0x8CBB0331L,9L,0xC87E8E79L,0xC87E8E79L,9L},{0x8CBB0331L,9L,0xC87E8E79L,0xC87E8E79L,9L,0x8CBB0331L,9L,0xC87E8E79L,0xC87E8E79L,9L},{0x8CBB0331L,9L,0xC87E8E79L,0xC87E8E79L,9L,0x8CBB0331L,9L,0xC87E8E79L,0xC87E8E79L,9L}};
                    unsigned l_482 = 0x94AF8270L;
                    int i, j;
                    (*l_321) = ((void*)0 != l_449);
                    g_194 = &g_195;

                    ;
                    if (p_54)
                    {
                        unsigned l_454 = 4294967295UL;
                        int l_458 = (-4L);
                        --l_450;
                        ++l_454;
                        --l_460;
                        if (p_54)
                            break;
                    }
                    else
                    {
                        int l_467[2][5] = {{0x3E7CD0ECL,0xAD85CFEDL,5L,5L,0xAD85CFEDL},{0x3E7CD0ECL,0xAD85CFEDL,5L,5L,0xAD85CFEDL}};
                        int l_471 = 0xBC6BA98CL;
                        int l_472[2][1][3];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 3; k++)
                                    l_472[i][j][k] = 0x40B4B0D9L;
                            }
                        }
                        (*l_321) |= ((safe_lshift_func_int16_t_s_s((g_139 = ((void*)0 == &g_270)), 10)) >= ((*l_371) == 0x519E1F5BL));
                        l_473[0][0]++;
                        (*l_372) = ((0L || l_467[0][2]) ^ l_472[0][0][2]);
                        (*l_369) = &p_53;
                    }
                    (*l_372) ^= (((*g_176) >= (safe_rshift_func_uint8_t_u_s(((func_65((l_434 , (((safe_mul_func_uint16_t_u_u(func_65((safe_sub_func_int16_t_s_s(((*l_371) == l_432), l_436))), (((p_54 , l_482) , ((safe_sub_func_int8_t_s_s(0xD4L, 0xDCL)) && (*l_321))) > p_54))) , l_485) && (**g_269)))) > l_460) , p_53), 1))) , l_468);
                }
            }
        }


        ;
        ;
        for (l_317 = 0; (l_317 == 6); l_317 = safe_add_func_int8_t_s_s(l_317, 9))
        {
            unsigned long long l_500 = 0xA9783DC3129B519ALL;
            int *l_509 = (void*)0;
            int l_518 = 1L;
            int l_561 = (-10L);
            unsigned long long l_564 = 0x2647030D683B067FLL;
            unsigned char ***l_574[2];
            int i;
            for (i = 0; i < 2; i++)
                l_574[i] = &l_311;
            (*l_321) |= 0x4FF980ABL;
            for (p_53 = 0; (p_53 <= 9); p_53 += 1)
            {
                int **l_488 = &l_371;
                unsigned *l_534[8][6][5] = {{{&l_473[0][1],&l_346[1],&l_473[0][0],(void*)0,&l_346[3]},{&l_346[2],&l_346[0],(void*)0,&l_346[1],&l_346[1]},{&l_473[0][0],(void*)0,&l_473[0][0],(void*)0,&l_346[4]},{&l_473[0][1],(void*)0,&l_473[0][1],&l_473[0][1],&l_346[5]},{&l_473[0][1],&l_346[1],&l_473[0][0],&l_346[3],&l_346[4]},{(void*)0,&l_346[1],&l_473[0][0],&l_473[0][1],&l_473[0][1]}},{{&l_346[5],&l_473[0][1],&l_473[0][0],&l_473[0][1],&l_346[5]},{&l_346[4],&l_346[5],&l_346[1],&l_346[1],&l_473[0][0]},{&l_346[1],&l_346[1],&l_346[3],&l_346[4],&l_473[0][0]},{&l_346[2],&l_473[0][1],&l_473[0][0],&l_346[5],&l_473[0][0]},{&l_473[0][0],&l_346[4],&l_473[0][0],&l_346[1],&l_346[5]},{(void*)0,&l_473[0][0],&l_473[0][0],&l_346[1],&l_473[0][0]}},{{&l_473[0][0],&l_473[0][0],(void*)0,&l_346[1],&l_346[3]},{&l_473[0][1],(void*)0,&l_473[0][0],&l_473[0][0],&l_473[0][1]},{(void*)0,&l_473[0][0],&l_473[0][0],(void*)0,&l_346[0]},{&l_473[0][0],&l_346[1],&l_346[0],&l_473[0][0],(void*)0},{&l_473[0][0],&l_346[1],(void*)0,&l_346[1],&l_346[1]},{&l_346[1],&l_346[1],&l_346[1],(void*)0,&l_473[0][0]}},{{&l_346[1],(void*)0,&l_346[1],&l_473[0][1],&l_473[0][0]},{&l_473[0][0],&l_346[1],(void*)0,&l_473[0][1],&l_346[1]},{(void*)0,&l_473[0][0],&l_346[1],&l_473[0][0],&l_346[3]},{&l_473[0][1],(void*)0,&l_346[1],&l_473[0][1],(void*)0},{&l_346[1],&l_346[4],(void*)0,&l_473[0][0],&l_473[0][1]},{&l_473[0][0],&l_473[0][1],&l_346[0],&l_346[2],(void*)0}},{{&l_473[0][0],&l_473[0][1],&l_473[0][0],&l_346[4],&l_346[1]},{&l_473[0][1],&l_346[4],&l_473[0][0],&l_346[2],&l_473[0][0]},{&l_473[0][0],(void*)0,(void*)0,(void*)0,&l_346[3]},{&l_346[1],&l_346[1],&l_473[0][0],&l_473[0][0],&l_346[1]},{&l_473[0][0],&l_346[1],&l_346[1],&l_346[1],&l_346[1]},{&l_473[0][1],&l_473[0][1],&l_346[1],&l_346[0],(void*)0}},{{&l_346[1],&l_346[3],&l_473[0][0],&l_473[0][0],&l_346[4]},{&l_346[1],&l_473[0][0],&l_473[0][1],&l_346[1],(void*)0},{&l_473[0][0],&l_473[0][0],&l_346[1],&l_346[5],&l_473[0][0]},{&l_473[0][0],&l_473[0][0],&l_346[5],(void*)0,&l_473[0][0]},{&l_346[1],&l_346[1],&l_473[0][0],&l_346[1],&l_473[0][0]},{&l_473[0][0],&l_346[1],(void*)0,(void*)0,&l_346[2]}},{{&l_346[1],&l_473[0][0],&l_346[4],&l_346[0],&l_346[1]},{&l_473[0][0],&l_473[0][1],&l_473[0][1],&l_346[1],&l_346[1]},{&l_473[0][0],&l_346[4],&l_346[4],&l_473[0][0],&l_473[0][0]},{&l_473[0][1],&l_346[4],&l_346[1],&l_346[1],&l_473[0][0]},{&l_346[1],&l_473[0][0],&l_346[0],(void*)0,&l_473[0][0]},{&l_473[0][0],&l_346[2],&l_473[0][0],&l_346[1],&l_346[2]}},{{&l_346[3],&l_473[0][0],&l_346[1],&l_473[0][0],&l_346[1]},{&l_346[1],(void*)0,&l_473[0][1],&l_346[1],&l_473[0][1]},{&l_346[1],&l_473[0][0],&l_473[0][0],&l_346[0],(void*)0},{&l_473[0][0],&l_473[0][1],&l_346[0],(void*)0,&l_346[2]},{&l_473[0][0],&l_473[0][0],&l_346[3],&l_346[1],&l_473[0][0]},{&l_346[4],&l_346[1],&l_473[0][1],(void*)0,&l_473[0][1]}}};
                int l_559 = 0x84897C67L;
                int i, j, k;
                (*l_321) &= 0x9C874B85L;
                (*l_488) = &l_331;

                ;
                for (l_444 = 0; (l_444 <= 9); l_444 += 1)
                {
                    char *l_495 = &g_202;
                    int *l_496 = (void*)0;
                    int **l_497 = &l_496;
                    unsigned *l_498 = &l_473[0][0];
                    unsigned *l_499 = &l_346[1];
                    short *l_511[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_511[i] = &l_376;
                    l_500 = (safe_mod_func_int32_t_s_s(0x23D6D90CL, ((safe_lshift_func_int16_t_s_u((((!(*l_321)) == 3L) , p_54), (*g_384))) , (*g_195))));
                    if ((((**l_488) , (g_139 = ((0xE6L == (safe_mod_func_uint8_t_u_u((g_50 |= (0x6EL <= ((safe_add_func_uint8_t_u_u((**l_488), (safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(g_510, 0L)), 2UL)))) && g_374))), (**g_269)))) || p_53))) , p_52))
                    {
                        int l_512 = 0x5C0AB9CFL;
                        long long *l_515 = (void*)0;
                        long long *l_516[9];
                        int l_517 = 0x64A19E6DL;
                        int i;
                        for (i = 0; i < 9; i++)
                            l_516[i] = &l_453[l_444];
                        (*l_371) = ((*l_321) = p_54);
                        (**l_488) |= ((p_53 & l_512) > (safe_div_func_uint16_t_u_u((0x4768453B83D33D38LL == (l_517 = (g_374 = ((*g_176) = p_54)))), p_54)));
                        if (l_518)
                            break;
                    }
                    else
                    {
                        unsigned long long **l_523 = &l_375;
                        int l_528 = 1L;
                        unsigned long long *l_530 = &g_256;
                        unsigned long long **l_529 = &l_530;
                        int l_531 = 0x43E1A043L;
                        unsigned *l_535 = &l_346[4];
                        (**l_488) &= (&p_54 != (g_195 = &g_79));
                        (**l_488) = ((((*l_321) = p_52) , ((~p_52) || (((safe_mul_func_int8_t_s_s((((*l_523) = l_375) == ((*l_529) = (((*l_321) , (safe_mod_func_int16_t_s_s(0xB30EL, (g_139 = (safe_lshift_func_int8_t_s_u(l_528, 1)))))) , &g_256))), (((((*g_384) != (--g_510)) , l_534[7][5][1]) != l_535) , (*g_270)))) | p_54) != 0UL))) , 0x9CBA3357L);
                        (*l_321) |= 1L;
                        l_531 = p_52;
                    }
                }
                for (l_331 = 0; (l_331 <= 9); l_331 += 1)
                {
                    int l_560 = 6L;
                    int l_562 = 0x927FA20CL;
                    int l_563 = (-10L);
                    unsigned char ****l_575 = &l_449;
                    int i;
                    if (((safe_rshift_func_int16_t_s_u(0x8ACCL, 0)) , (l_453[p_53] || (*g_176))))
                    {
                        char l_546 = 1L;
                        unsigned short **l_553 = &l_390[9];
                        int *l_556 = &l_316;
                        if (l_453[p_53])
                            break;
                        if (p_54)
                            continue;
                        (*l_556) = (!(safe_sub_func_int64_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((*l_321) = (((p_52 | ((*g_176) &= (((((safe_div_func_int64_t_s_s(((l_546 , (safe_add_func_int64_t_s_s((((safe_mod_func_int32_t_s_s(l_546, p_52)) >= ((safe_add_func_uint32_t_u_u(((void*)0 == l_553), ((((p_53 > (safe_mul_func_uint16_t_u_u(p_52, p_54))) | 255UL) ^ g_46[1][5][0]) || 0UL))) <= p_53)) == 0xFB514DCFL), (-8L)))) | g_271), 6L)) != (*g_384)) , g_385) , (*g_384)) | p_54))) != p_54) <= p_53)), (-7L))), p_52)), p_53)));
                    }
                    else
                    {
                        int *l_557 = &l_333[0];
                        int *l_558[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_558[i] = &g_308;
                        --l_564;
                    }
                    (*l_321) ^= ((safe_div_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(0xCEA3L, (~func_65((safe_rshift_func_int8_t_s_u(0L, ((&l_310 == (l_573 , ((*l_575) = l_574[1]))) & ((void*)0 != &g_242[6][3])))))))), (*g_176))) , 0x425C1C30L);
                }
            }
        }

        ;
    }


    return (*l_321);


}







static unsigned short func_65(int p_66)
{
    int *l_304 = &g_305;
    int *l_306 = &g_305;
    l_304 = &g_36[6];

    ;
    (*l_306) = 0x66C7257FL;
    return p_66;
}







static unsigned func_71(short p_72, int * p_73, unsigned p_74, unsigned p_75)
{
    int l_88 = 0x0850227CL;
    unsigned char *l_89[4];
    int l_92 = 0L;
    int l_102 = 0xA74E9983L;
    int l_103 = 0xEDE1F3C6L;
    int l_104[3][3] = {{0L,0L,0L},{(-1L),(-1L),(-1L)},{0L,0L,0L}};
    unsigned char l_105 = 0xF1L;
    unsigned l_173 = 18446744073709551615UL;
    unsigned **l_193 = (void*)0;
    long long *l_302 = (void*)0;
    int i, j;
    for (i = 0; i < 4; i++)
        l_89[i] = &g_46[1][5][0];
    for (g_50 = 0; (g_50 <= 0); g_50 += 1)
    {
        unsigned *l_78 = &g_79;
        int **l_84 = &g_33[0];
        unsigned char *l_85[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int l_91 = 0L;
        int l_100 = 0xCF5132FCL;
        int l_111 = 0xD081C379L;
        int l_146 = 0L;
        int l_152 = (-1L);
        int l_155 = 0xA40ACC82L;
        int l_161 = 7L;
        int l_163[9] = {0x98C39ED3L,0x98C39ED3L,6L,0x98C39ED3L,0x98C39ED3L,6L,0x98C39ED3L,0x98C39ED3L,6L};
        unsigned short l_168 = 1UL;
        short l_281 = 0x8216L;
        short l_292[8] = {1L,1L,0x4546L,1L,1L,0x4546L,1L,1L};
        int l_303[3][8][1] = {{{(-8L)},{(-1L)},{2L},{0x08D13B49L},{4L},{1L},{1L},{4L}},{{0x08D13B49L},{2L},{(-1L)},{(-8L)},{(-1L)},{2L},{0x08D13B49L},{4L}},{{1L},{1L},{4L},{0x08D13B49L},{2L},{(-1L)},{(-8L)},{(-1L)}}};
        int i, j, k;
        if ((+((safe_add_func_int64_t_s_s(g_46[1][5][0], ((((((*l_78) = p_72) ^ (safe_lshift_func_int16_t_s_u((0xE8E036B6A42DA4CBLL && (safe_rshift_func_int16_t_s_u(0x919EL, (((*l_84) = p_73) != (void*)0)))), (l_85[3] == ((safe_rshift_func_int8_t_s_s(l_88, 3)) , l_89[0]))))) | g_46[1][5][0]) > 1UL) & p_72))) | 1UL)))
        {
            char l_90[2][2] = {{7L,7L},{7L,7L}};
            int l_93 = 1L;
            int l_94 = 7L;
            int *l_95 = &l_94;
            int *l_96 = (void*)0;
            int *l_97 = &l_93;
            int *l_98 = &l_93;
            int *l_99[1];
            int l_101 = 0x0F783377L;
            int i, j;
            for (i = 0; i < 1; i++)
                l_99[i] = &l_94;
            ++l_105;
        }
        else
        {
            int l_108 = 0xC11C9306L;
            int l_144 = 0x5A347877L;
            int l_145 = 0x135E92A0L;
            int l_147[10] = {0xF2F80B5AL,1L,0xF2F80B5AL,1L,0xF2F80B5AL,1L,0xF2F80B5AL,1L,0xF2F80B5AL,1L};
            int *l_171 = (void*)0;
            int i;
            (*l_84) = ((0UL < ((l_108 , g_46[3][4][0]) < g_36[6])) , &g_36[1]);
            if (((l_108 , (*l_84)) == (void*)0))
            {
                char l_110 = 0xBBL;
                int l_149 = (-10L);
                int l_151 = 0xC3DE63DFL;
                int l_154 = 2L;
                int l_156 = 0xE4A882E7L;
                int l_159 = 9L;
                int l_162 = 9L;
                int l_165 = (-3L);
                int l_166[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_166[i] = 0L;
                if (l_108)
                {
                    int *l_109[8] = {&l_103,(void*)0,(void*)0,&l_103,(void*)0,(void*)0,&l_103,(void*)0};
                    int i;
                    (*l_84) = l_109[0];


                    (*l_84) = p_73;
                    return g_79;


                }
                else
                {
                    unsigned short l_116 = 0UL;
                    int l_131 = 8L;
                    int l_148 = 0L;
                    int l_153 = 0x2C52FFF7L;
                    int l_157 = 0x3A16EC97L;
                    int l_158 = 0xD056A74CL;
                    int l_160 = 0x5BD8C451L;
                    int l_164 = 1L;
                    int l_167 = (-7L);
                    unsigned short *l_172[3][10] = {{&l_116,&l_168,&l_116,&l_116,&l_168,&l_116,&l_168,&l_116,&l_116,&l_168},{&l_116,(void*)0,&l_116,&l_168,&l_168,&l_116,&l_116,&l_168,&l_168,&l_116},{&l_168,&l_168,&l_116,&l_116,&l_168,&l_116,(void*)0,&l_116,&l_168,&l_116}};
                    long long **l_178 = &g_176;
                    int *l_185 = &l_160;
                    int *l_186 = &l_166[4];
                    int i, j;
                    if (l_110)
                        break;
                    for (l_100 = 0; (l_100 >= 0); l_100 -= 1)
                    {
                        int *l_112 = &l_104[2][2];
                        int *l_113 = &l_102;
                        int l_114 = 0xA4EABE0FL;
                        int *l_115[6][6][6];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 6; j++)
                            {
                                for (k = 0; k < 6; k++)
                                    l_115[i][j][k] = &l_104[0][1];
                            }
                        }
                        ++l_116;
                        (*l_112) = (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(g_79, (&g_79 == &g_79))), 3)), 3));
                        if (l_108)
                            break;
                    }
                    for (l_100 = 0; (l_100 <= 0); l_100 += 1)
                    {
                        short *l_138 = &g_139;
                        int l_140 = (-7L);
                        int l_141 = (-9L);
                        int *l_142 = (void*)0;
                        int *l_143[10] = {&l_104[2][2],&l_104[2][2],&l_104[2][2],&l_104[2][2],&l_104[1][2],&l_104[2][2],&l_104[2][2],&l_104[2][2],&l_104[2][2],&l_104[1][2]};
                        int l_150 = 0xF6EE4579L;
                        int i;
                        l_141 |= ((safe_mul_func_uint8_t_u_u((65535UL > p_72), (((safe_rshift_func_uint8_t_u_u((l_131 = (safe_div_func_uint32_t_u_u((p_72 & l_108), l_108))), 6)) == (((*l_78) = (safe_sub_func_uint64_t_u_u((l_140 |= (safe_mul_func_uint16_t_u_u(l_108, (0xBA1CL < ((safe_mod_func_int16_t_s_s(((*l_138) = 0L), g_79)) ^ l_105))))), 0x1BBB5DFEAAC53A07LL))) , l_140)) && l_116))) , l_140);
                        l_141 ^= (&g_139 == (void*)0);
                        ++l_168;
                        l_171 = p_73;
                    }


                    (*l_186) ^= ((((((!(l_173 ^= (p_72 != g_36[4]))) > g_46[4][4][0]) & (safe_lshift_func_uint16_t_u_s((l_103 &= l_131), 4))) , ((*l_178) = g_176)) == (((((*l_185) |= ((safe_lshift_func_uint8_t_u_s(g_177, (safe_sub_func_uint32_t_u_u(g_50, ((l_92 = p_72) | (safe_rshift_func_uint8_t_u_s((p_72 , 0UL), 7))))))) | g_46[1][5][0])) , p_75) < l_102) , &g_177)) == g_177);
                }


            }
            else
            {
                int l_187 = 0x5A2E4B3AL;
                int *l_188[2][7] = {{&g_36[6],&l_100,&l_100,&l_100,&g_36[6],&l_104[2][2],&l_104[2][2]},{&g_36[6],&l_100,&l_100,&l_100,&g_36[6],&l_104[2][2],&l_104[2][2]}};
                unsigned l_203 = 0x447B9DC6L;
                int i, j;
                l_145 = l_187;
                for (l_105 = 0; (l_105 <= 2); l_105 += 1)
                {
                    unsigned char **l_196[5][5] = {{&l_89[1],&l_89[1],&l_89[1],&l_89[1],&l_89[1]},{&l_89[0],&l_89[0],&l_89[0],&l_89[0],&l_89[0]},{&l_89[1],&l_89[1],&l_89[1],&l_89[1],&l_89[1]},{&l_89[0],&l_89[0],&l_89[0],&l_89[0],&l_89[0]},{&l_89[1],&l_89[1],&l_89[1],&l_89[1],&l_89[1]}};
                    int i, j;
                    for (g_139 = 0; (g_139 <= 2); g_139 += 1)
                    {
                        int i, j, k;
                        return g_46[(l_105 + 3)][(l_105 + 2)][g_50];
                    }
                    l_104[l_105][l_105] ^= (safe_rshift_func_int16_t_s_s((safe_add_func_uint64_t_u_u(l_147[(l_105 + 1)], 0xD36B89A323961558LL)), 2));
                    for (p_74 = 0; (p_74 <= 0); p_74 += 1)
                    {
                        unsigned char ***l_197 = &l_196[0][0];
                        char *l_201 = &g_202;
                        int i, j, k;
                        g_194 = l_193;

                        ;
                        (*l_197) = l_196[0][0];
                        l_104[l_105][(p_74 + 2)] |= g_46[(p_74 + 2)][(p_74 + 1)][p_74];
                        l_104[(p_74 + 1)][l_105] ^= ((safe_add_func_uint8_t_u_u((l_147[(p_74 + 5)] , 255UL), (safe_unary_minus_func_int8_t_s(((*l_201) |= (0xE971L < g_50)))))) , 0xC4823A73L);
                    }
                    for (l_91 = 2; (l_91 >= 0); l_91 -= 1)
                    {
                        short *l_225[7][4] = {{&g_139,&g_139,&g_139,(void*)0},{&g_139,&g_139,&g_139,&g_139},{&g_139,&g_139,&g_139,&g_139},{&g_139,&g_139,&g_139,&g_139},{&g_139,&g_139,&g_139,&g_139},{&g_139,&g_139,(void*)0,&g_139},{&g_139,&g_139,(void*)0,&g_139}};
                        int i, j;
                        l_104[l_105][(g_50 + 1)] = l_163[(l_105 + 3)];
                        l_203++;
                        l_163[1] ^= (safe_mul_func_int8_t_s_s(l_104[l_91][(g_50 + 2)], (((p_72 = ((safe_sub_func_uint32_t_u_u(((safe_add_func_int16_t_s_s((0x15DAAA1FL || (((!l_104[l_91][(g_50 + 1)]) >= (safe_mod_func_int8_t_s_s((((safe_unary_minus_func_uint64_t_u(((safe_add_func_uint8_t_u_u(l_104[(g_50 + 2)][l_91], (-2L))) == ((safe_lshift_func_uint8_t_u_s((l_88 > (p_75 || (g_46[1][5][0] , (safe_add_func_uint16_t_u_u(((safe_sub_func_int8_t_s_s(((safe_mod_func_uint8_t_u_u(((p_75 , p_72) <= p_75), 1UL)) , 0x9AL), 1UL)) ^ 1UL), p_74))))), g_5)) > 0x3F68L)))) > g_36[2]) <= 0xB659L), p_74))) , 6L)), p_74)) , l_147[3]), l_104[l_105][l_105])) & g_202)) < l_104[1][0]) , 0xCDL)));
                    }
                }

                ;
                for (l_92 = 0; (l_92 <= 0); l_92 += 1)
                {
                    int l_232 = 0xDD1C907DL;
                    int l_260 = 0x12548A50L;
                    unsigned char **l_268 = &l_85[4];
                    unsigned char ***l_267 = &l_268;
                    char *l_276 = &g_202;
                    if (((+(safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((+(-1L)), p_72)), (safe_sub_func_int8_t_s_s(p_72, l_232))))) ^ (safe_sub_func_uint32_t_u_u(0UL, ((2L < (safe_sub_func_uint64_t_u_u(g_139, 18446744073709551611UL))) <= (((safe_mul_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(((safe_lshift_func_uint8_t_u_s(((p_74 ^ 0x98DE55A1L) == l_232), 6)) || g_242[6][3]))), g_5)) ^ 0xD4L) == g_5))))))
                    {
                        unsigned l_243 = 0xA4741F75L;
                        volatile int *l_245 = &g_242[4][0];
                        volatile int **l_244 = &l_245;
                        l_103 ^= l_243;
                        (*l_244) = &g_242[1][0];
                        (*l_245) = 1L;
                    }
                    else
                    {
                        unsigned short l_246 = 1UL;
                        unsigned long long *l_255 = &g_256;
                        short *l_259 = &g_139;
                        ++l_246;
                        l_260 = (l_246 & (g_202 != ((((((*l_259) = (p_74 < ((0x8F09F02BEE1E9C62LL & l_246) ^ (safe_sub_func_uint64_t_u_u((p_75 , ((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_u((g_176 != l_255), ((safe_lshift_func_uint8_t_u_u(l_92, g_50)) , 65535UL))), p_74)) < 0x170EL)), 0xD661240B99DE121ELL))))) > 0xA4F9L) ^ 0x19L) <= 1L) || p_75)));
                        if (p_72)
                            continue;
                        (*l_84) = (void*)0;
                    }
                    for (l_173 = 0; (l_173 <= 0); l_173 += 1)
                    {
                        p_73 = p_73;
                    }
                    if ((safe_sub_func_int32_t_s_s(((safe_add_func_int16_t_s_s((safe_mod_func_uint16_t_u_u(p_72, (~0x6488L))), g_50)) ^ ((*l_276) = (((((*l_267) = &l_85[2]) != g_269) && (safe_mul_func_uint8_t_u_u(p_72, (g_46[5][6][0] |= (0xFEL != ((safe_rshift_func_int8_t_s_s((((((l_260 ^= (**g_269)) > p_74) , p_75) & l_173) >= l_105), 2)) != 0xB567D36AB61836B9LL)))))) == g_256))), 0xC7CBF436L)))
                    {
                        int l_277 = 0x09F1A7C9L;
                        l_277 |= (0xC804L > (0xEFL > ((*l_276) |= g_271)));
                        (*l_84) = (void*)0;
                    }
                    else
                    {
                        unsigned short l_278[4] = {0x6EF1L,0x6EF1L,0x6EF1L,0x6EF1L};
                        int i;
                        (*l_84) = &g_36[6];
                        if (l_278[3])
                            continue;
                    }
                    for (g_79 = 0; (g_79 <= 0); g_79 += 1)
                    {
                        int i, j, k;
                        l_102 = (-6L);
                        if (g_46[(l_92 + 5)][(g_50 + 2)][l_92])
                            break;
                    }
                }
                for (p_75 = 0; (p_75 == 58); p_75 = safe_add_func_int32_t_s_s(p_75, 5))
                {
                    (*l_84) = p_73;
                    l_281 &= 0xB4F0F8ABL;
                }
            }


            ;
            for (l_146 = 2; (l_146 >= 0); l_146 -= 1)
            {
                int l_285 = 0x61F8A72EL;
                int l_286 = (-3L);
                int i, j;
                if ((l_104[g_50][g_50] >= l_163[(l_146 + 6)]))
                {
                    int *l_284[7] = {&l_111,&l_111,&l_102,&l_111,&l_111,&l_102,&l_111};
                    int i, j;
                    l_285 &= (l_104[(g_50 + 1)][(g_50 + 2)] = (l_163[l_146] , ((*g_176) >= ((safe_rshift_func_uint8_t_u_u(p_72, 3)) <= 1UL))));
                    for (l_102 = 5; (l_102 >= 0); l_102 -= 1)
                    {
                        int i;
                        l_286 &= l_163[(g_50 + 6)];
                    }
                }
                else
                {
                    long long l_287 = 0xB0995512F6BACA21LL;
                    int *l_288[4] = {&l_163[1],&l_163[1],&l_163[1],&l_163[1]};
                    int i;
                    l_147[3] = l_287;
                }
                if (p_74)
                    continue;
            }
            return (*g_195);
        }
        for (l_88 = 0; (l_88 == (-27)); l_88 = safe_sub_func_uint64_t_u_u(l_88, 9))
        {
            int *l_291[10] = {&l_146,&g_36[0],&l_146,&g_36[0],&l_146,&g_36[0],&l_146,&g_36[0],&l_146,&g_36[0]};
            unsigned l_293[8][9] = {{0x4EFC4C12L,0x4EFC4C12L,1UL,6UL,0xF1051A69L,0x3A0DC721L,0x4EFC4C12L,0xF1051A69L,0x7BEB819CL},{5UL,1UL,4294967295UL,0xF1051A69L,0xF1051A69L,4294967295UL,1UL,5UL,1UL},{5UL,0xF1051A69L,1UL,5UL,1UL,4294967295UL,0xF1051A69L,0xF1051A69L,4294967295UL},{0x4EFC4C12L,0xF1051A69L,0x7BEB819CL,0xF1051A69L,0x4EFC4C12L,0x3A0DC721L,0xF1051A69L,6UL,1UL},{0xF1051A69L,1UL,0x7BEB819CL,6UL,1UL,1UL,1UL,6UL,0x7BEB819CL},{0x4EFC4C12L,0x4EFC4C12L,1UL,6UL,0xF1051A69L,0x3A0DC721L,0x4EFC4C12L,0xF1051A69L,0x7BEB819CL},{5UL,1UL,4294967295UL,0xF1051A69L,0xF1051A69L,4294967295UL,1UL,5UL,1UL},{5UL,0xF1051A69L,1UL,5UL,1UL,4294967295UL,0xF1051A69L,0xF1051A69L,4294967295UL}};
            int i, j;
            --l_293[7][6];
            (*l_84) = &g_36[6];
        }
        l_303[1][5][0] = ((((p_74 != ((safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(((void*)0 == &g_269), ((safe_rshift_func_int16_t_s_s(0xBA9AL, ((l_104[2][2] , l_302) != (void*)0))) ^ p_75))) || (((p_74 & (**g_194)) , (**g_269)) , (**g_194))), 2)) , 0x63B8E672L)) , l_85[3]) != &l_105) && 0xFD95L);
    }


    return l_104[1][1];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_20, "g_20", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_36[i], "g_36[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
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
    transparent_crc(g_50, "g_50", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_177, "g_177", print_hash_value);
    transparent_crc(g_202, "g_202", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_242[i][j], "g_242[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_308, "g_308", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_438, "g_438", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_439[i][j][k], "g_439[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_510, "g_510", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_700, "g_700", print_hash_value);
    transparent_crc(g_709, "g_709", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_784[i], "g_784[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_855, "g_855", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_859[i][j], "g_859[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_870, "g_870", print_hash_value);
    transparent_crc(g_919, "g_919", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1191, "g_1191", print_hash_value);
    transparent_crc(g_1203, "g_1203", print_hash_value);
    transparent_crc(g_1337, "g_1337", print_hash_value);
    transparent_crc(g_1462, "g_1462", print_hash_value);
    transparent_crc(g_1655, "g_1655", print_hash_value);
    transparent_crc(g_1773, "g_1773", print_hash_value);
    transparent_crc(g_1852, "g_1852", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_1858[i], "g_1858[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1936, "g_1936", print_hash_value);
    transparent_crc(g_1945, "g_1945", print_hash_value);
    transparent_crc(g_1984, "g_1984", print_hash_value);
    transparent_crc(g_1985, "g_1985", print_hash_value);
    transparent_crc(g_2120, "g_2120", print_hash_value);
    transparent_crc(g_2205, "g_2205", print_hash_value);
    transparent_crc(g_2258, "g_2258", print_hash_value);
    transparent_crc(g_2326, "g_2326", print_hash_value);
    transparent_crc(g_2386, "g_2386", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_2390[i][j][k], "g_2390[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_2417[i][j], "g_2417[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_2535, "g_2535", print_hash_value);
    transparent_crc(g_2552, "g_2552", print_hash_value);
    transparent_crc(g_2764, "g_2764", print_hash_value);
    transparent_crc(g_2797, "g_2797", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
