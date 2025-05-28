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
   short f0;
   unsigned f1;
   volatile unsigned f2;
   int f3;
};

union U1 {
   volatile unsigned long long f0;
   unsigned f1;
   unsigned char f2;
   unsigned short f3;
};


static unsigned short g_10 = 0x7E5CL;
static unsigned short g_72[4][5][2] = {{{65535UL,65532UL},{0x9242L,65535UL},{0x662BL,0x662BL},{0x03F5L,0x9CDEL},{0x9242L,65535UL}},{{0x9CDEL,65532UL},{0xC1B2L,0x9CDEL},{0x662BL,0x03F5L},{0x662BL,0x9CDEL},{0xC1B2L,65532UL}},{{0x9CDEL,65535UL},{0x9242L,0x9CDEL},{0x03F5L,0x662BL},{0x662BL,65535UL},{0x9242L,65532UL}},{{65535UL,65532UL},{0x9242L,65535UL},{0x662BL,0x662BL},{0x03F5L,0x9CDEL},{0x9242L,65535UL}}};
static int g_81 = 1L;
static int g_86 = 0x27BC4A6BL;
static int *g_85 = &g_86;
static int g_87[10] = {0x3D1739C3L,(-7L),0xF29A3A76L,0xF29A3A76L,(-7L),0x3D1739C3L,0xF29A3A76L,8L,8L,0xF29A3A76L};
static int ** volatile g_149 = &g_85;
static volatile unsigned short g_176 = 65531UL;
static int * volatile g_178 = &g_86;
static int * volatile g_189 = (void*)0;
static union U0 g_201[2][10] = {{{8L},{-9L},{0x60D6L},{0x60D6L},{-9L},{8L},{-9L},{0x60D6L},{0x60D6L},{-9L}},{{8L},{-9L},{0x60D6L},{0x60D6L},{-9L},{8L},{-9L},{0x60D6L},{0x60D6L},{-9L}}};
static union U0 * volatile g_203[3][4] = {{&g_201[0][5],&g_201[0][5],&g_201[0][5],&g_201[0][5]},{&g_201[0][5],&g_201[0][5],&g_201[0][5],&g_201[0][5]},{&g_201[0][5],&g_201[0][5],&g_201[0][5],&g_201[0][5]}};
static union U0 * volatile * volatile g_202[10][1][2] = {{{&g_203[2][3],&g_203[1][1]}},{{&g_203[1][1],&g_203[1][1]}},{{&g_203[1][1],&g_203[1][1]}},{{&g_203[2][3],(void*)0}},{{&g_203[1][1],(void*)0}},{{&g_203[2][3],&g_203[1][1]}},{{&g_203[1][1],&g_203[1][1]}},{{&g_203[1][1],&g_203[1][1]}},{{&g_203[2][3],(void*)0}},{{&g_203[1][1],(void*)0}}};
static union U0 *g_223 = (void*)0;
static union U0 ** volatile g_222 = &g_223;
static volatile union U1 g_224 = {0xC4547A68E1F302E5LL};
static int * volatile g_227 = &g_86;
static union U0 g_240 = {8L};
static int g_246 = 1L;
static volatile int g_254 = (-1L);
static volatile int *g_253 = &g_254;
static volatile int * volatile *g_252 = &g_253;
static volatile int * volatile **g_251 = &g_252;
static volatile union U1 *g_270 = &g_224;
static volatile union U1 ** volatile g_269 = &g_270;
static union U0 g_277[8] = {{-4L},{-4L},{-4L},{-4L},{-4L},{-4L},{-4L},{-4L}};
static union U1 g_286[1] = {{0xB44413F615BDB47CLL}};
static union U0 **g_302 = (void*)0;
static union U0 ***g_301 = &g_302;
static volatile union U1 g_310 = {0UL};
static volatile union U0 g_321 = {-1L};
static union U1 g_323 = {0x812B45DF68B0571DLL};
static volatile union U0 g_326[7][2][7] = {{{{0x92DCL},{-1L},{9L},{0x0FD7L},{0xAFBFL},{0x48E5L},{0x3495L}},{{0x81CEL},{0x0FD7L},{-4L},{0L},{9L},{9L},{0L}}},{{{-10L},{0x3495L},{-10L},{0xFF97L},{9L},{-1L},{-1L}},{{-1L},{0x48E5L},{0x494CL},{0x3495L},{0xAFBFL},{0x7FD3L},{0xC328L}}},{{{0x3495L},{0x494CL},{9L},{0x7FD3L},{-1L},{0xF148L},{0xF148L}},{{0x278FL},{0x48E5L},{0xFF97L},{0x48E5L},{0x278FL},{0x494CL},{0xF148L}}},{{{-4L},{0xC328L},{-1L},{-4L},{0xF148L},{9L},{0x3495L}},{{-1L},{0x494CL},{0x7FD3L},{0x1366L},{0xAFBFL},{0x278FL},{0x81CEL}}},{{{-4L},{-4L},{0xD08AL},{0x81CEL},{0xD08AL},{-4L},{-4L}},{{0x278FL},{-4L},{0x92DCL},{0xF148L},{0x48E5L},{-4L},{0xFF97L}}},{{{0xFF97L},{0x494CL},{-10L},{0x92DCL},{0x81CEL},{0x3495L},{0xC328L}},{{0x7FD3L},{0xC328L},{0x92DCL},{0L},{-4L},{0L},{0x92DCL}}},{{{0x48E5L},{0x48E5L},{0xD08AL},{0L},{0x95FAL},{-1L},{0xAFBFL}},{{-4L},{0x95FAL},{0x7FD3L},{0x92DCL},{0xFF97L},{0xC328L},{0x494CL}}}};
static union U0 g_369[10][5][2] = {{{{0x1EFCL},{-9L}},{{1L},{0x61A8L}},{{4L},{8L}},{{0x4138L},{0xE0FEL}},{{0x3FCAL},{1L}}},{{{8L},{-1L}},{{8L},{0x5168L}},{{0x1EFCL},{0x4138L}},{{0xE293L},{-5L}},{{0x9605L},{0xFE5FL}}},{{{-9L},{0xE0FEL}},{{1L},{0xE293L}},{{-1L},{8L}},{{0xFE5FL},{-1L}},{{0L},{1L}}},{{{0xE9D9L},{-1L}},{{0x3FCAL},{0x09B6L}},{{0xE635L},{0xECD7L}},{{-4L},{0xE9D9L}},{{0x4138L},{1L}}},{{{0x09B6L},{-1L}},{{0L},{-3L}},{{-8L},{0x3FCAL}},{{-1L},{-1L}},{{0x1EFCL},{0xECD7L}}},{{{-1L},{-8L}},{{0x27F8L},{0x5168L}},{{-1L},{-4L}},{{0L},{0xE0FEL}},{{0L},{0x4138L}}},{{{1L},{0x51B6L}},{{0xE0FEL},{0xECD7L}},{{1L},{0L}},{{-9L},{-9L}},{{0x51B6L},{0xE635L}}},{{{0L},{0x1EFCL}},{{0L},{0x27F8L}},{{0x5168L},{0L}},{{-3L},{0xECD7L}},{{-3L},{0L}}},{{{0x5168L},{0x27F8L}},{{0L},{0x1EFCL}},{{0L},{0xE635L}},{{0x51B6L},{-9L}},{{-9L},{0L}}},{{{1L},{0xECD7L}},{{0xE0FEL},{0x51B6L}},{{1L},{0x4138L}},{{0L},{0xE0FEL}},{{0L},{-4L}}}};
static union U0 g_370 = {0x4BFFL};
static int ** volatile g_371[8] = {&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85,&g_85};
static union U0 g_390 = {0x7A17L};
static volatile union U0 g_395[10] = {{0x0EE2L},{-1L},{-1L},{0x0EE2L},{0L},{0x0EE2L},{-1L},{-1L},{0x0EE2L},{0L}};
static volatile union U1 g_428 = {5UL};
static volatile union U1 g_429[1] = {{0xFB914C635E429296LL}};
static volatile union U0 g_430 = {0x1A44L};
static int ** volatile g_473 = &g_85;
static int ** volatile g_483 = &g_85;
static int ** volatile g_484[3][2][1] = {{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}}};
static int ** volatile g_485 = &g_85;
static unsigned short g_518 = 0xB217L;
static union U1 g_538 = {18446744073709551615UL};
static int g_561[2][3] = {{(-1L),(-1L),(-10L)},{(-1L),(-1L),(-10L)}};
static union U1 g_574 = {1UL};
static int ** volatile g_617 = (void*)0;
static int ** volatile g_618 = &g_85;
static volatile union U0 g_640 = {0x8C16L};
static short g_642 = 0x4CCDL;
static int ** volatile g_659 = &g_85;
static volatile union U0 g_663 = {0x7FE1L};
static union U1 g_672 = {0x0497AA76A489089ELL};
static union U1 g_686[6][10][4] = {{{{18446744073709551608UL},{0x4CFFF9FEE7779E0ELL},{0x92E5A557454F8E09LL},{1UL}},{{18446744073709551615UL},{18446744073709551615UL},{0x5A929ED631047F62LL},{2UL}},{{18446744073709551609UL},{1UL},{0x04276C6795960C5ELL},{18446744073709551610UL}},{{0xF1CF34E9B5B0A51ALL},{0x5A929ED631047F62LL},{0xCA6F14AD0485FB3ELL},{0UL}},{{0UL},{0xDA1487E6D129D8FALL},{0UL},{18446744073709551614UL}},{{18446744073709551612UL},{0xC422C8C1E474585FLL},{18446744073709551615UL},{18446744073709551614UL}},{{0x05069143B298837DLL},{0xDE16D7C2224D77F8LL},{0xDA1487E6D129D8FALL},{0xC422C8C1E474585FLL}},{{18446744073709551614UL},{1UL},{0xDA1487E6D129D8FALL},{18446744073709551615UL}},{{0x05069143B298837DLL},{0xA41F874DA2EB5741LL},{18446744073709551615UL},{18446744073709551609UL}},{{18446744073709551612UL},{4UL},{0UL},{0x070732FAD8BB3EF5LL}}},{{{0UL},{0x070732FAD8BB3EF5LL},{0xCA6F14AD0485FB3ELL},{18446744073709551615UL}},{{0xF1CF34E9B5B0A51ALL},{0x83ACE688556036D6LL},{0x04276C6795960C5ELL},{0x7E297A11BA649B20LL}},{{18446744073709551609UL},{0x04276C6795960C5ELL},{0x5A929ED631047F62LL},{7UL}},{{18446744073709551615UL},{2UL},{0x92E5A557454F8E09LL},{0xA41F874DA2EB5741LL}},{{18446744073709551608UL},{0x05069143B298837DLL},{18446744073709551607UL},{0x649C622964EC4E83LL}},{{0UL},{18446744073709551610UL},{0x72E207D6B1D30102LL},{0x72E207D6B1D30102LL}},{{18446744073709551615UL},{18446744073709551615UL},{18446744073709551615UL},{0x04276C6795960C5ELL}},{{0x070732FAD8BB3EF5LL},{0x2BE0A0AC91A798A2LL},{1UL},{18446744073709551615UL}},{{18446744073709551614UL},{0x72E207D6B1D30102LL},{0x4CFFF9FEE7779E0ELL},{1UL}},{{0xDA1487E6D129D8FALL},{0x72E207D6B1D30102LL},{1UL},{18446744073709551615UL}}},{{{0x72E207D6B1D30102LL},{0x2BE0A0AC91A798A2LL},{0xA41F874DA2EB5741LL},{0x04276C6795960C5ELL}},{{7UL},{18446744073709551615UL},{18446744073709551609UL},{18446744073709551615UL}},{{0xDE16D7C2224D77F8LL},{18446744073709551615UL},{1UL},{0x4CFFF9FEE7779E0ELL}},{{18446744073709551614UL},{0xD789472DC9A835BFLL},{18446744073709551615UL},{0xDA1487E6D129D8FALL}},{{0x011AAF874413669ALL},{0UL},{0x5A929ED631047F62LL},{1UL}},{{0x05069143B298837DLL},{0x780AEAC9B2374A32LL},{0xC422C8C1E474585FLL},{18446744073709551614UL}},{{0x9DA3D19DAEE33F77LL},{0xDE16D7C2224D77F8LL},{0x011AAF874413669ALL},{0xBCD0DF008F65D1B8LL}},{{0x2BE0A0AC91A798A2LL},{18446744073709551607UL},{0x070732FAD8BB3EF5LL},{18446744073709551607UL}},{{4UL},{0x2BE0A0AC91A798A2LL},{0x05069143B298837DLL},{0x0E9CAAC2DDF5B386LL}},{{18446744073709551615UL},{0xDA1487E6D129D8FALL},{0x92E5A557454F8E09LL},{18446744073709551615UL}}},{{{1UL},{18446744073709551609UL},{0xA41F874DA2EB5741LL},{0x72E207D6B1D30102LL}},{{1UL},{18446744073709551608UL},{0x92E5A557454F8E09LL},{0x070732FAD8BB3EF5LL}},{{18446744073709551615UL},{0x72E207D6B1D30102LL},{0x05069143B298837DLL},{0x5A929ED631047F62LL}},{{4UL},{0UL},{0x070732FAD8BB3EF5LL},{0xCA6F14AD0485FB3ELL}},{{0x2BE0A0AC91A798A2LL},{18446744073709551614UL},{0x011AAF874413669ALL},{18446744073709551615UL}},{{0x9DA3D19DAEE33F77LL},{4UL},{0xC422C8C1E474585FLL},{18446744073709551615UL}},{{0x05069143B298837DLL},{2UL},{0x5A929ED631047F62LL},{18446744073709551615UL}},{{0x011AAF874413669ALL},{18446744073709551614UL},{18446744073709551615UL},{0x790E813C8223D664LL}},{{18446744073709551614UL},{0x9DA3D19DAEE33F77LL},{1UL},{18446744073709551608UL}},{{0xDE16D7C2224D77F8LL},{0x0E9CAAC2DDF5B386LL},{0x0E9CAAC2DDF5B386LL},{0xDE16D7C2224D77F8LL}}},{{{1UL},{2UL},{0xDA1487E6D129D8FALL},{18446744073709551614UL}},{{18446744073709551615UL},{0x04276C6795960C5ELL},{4UL},{0x83ACE688556036D6LL}},{{0UL},{0xC422C8C1E474585FLL},{18446744073709551614UL},{0x83ACE688556036D6LL}},{{0x5A929ED631047F62LL},{0x04276C6795960C5ELL},{18446744073709551609UL},{18446744073709551614UL}},{{18446744073709551607UL},{2UL},{18446744073709551615UL},{0xDE16D7C2224D77F8LL}},{{18446744073709551610UL},{0x0E9CAAC2DDF5B386LL},{18446744073709551615UL},{2UL}},{{18446744073709551615UL},{18446744073709551614UL},{18446744073709551614UL},{1UL}},{{0UL},{0UL},{0x011AAF874413669ALL},{0x780AEAC9B2374A32LL}},{{18446744073709551612UL},{18446744073709551615UL},{0x05069143B298837DLL},{0x4CFFF9FEE7779E0ELL}},{{18446744073709551610UL},{0x5A929ED631047F62LL},{0x9DA3D19DAEE33F77LL},{7UL}}},{{{0x0E9CAAC2DDF5B386LL},{0x05069143B298837DLL},{0x2BE0A0AC91A798A2LL},{4UL}},{{4UL},{1UL},{4UL},{0xBCD0DF008F65D1B8LL}},{{1UL},{0x83ACE688556036D6LL},{18446744073709551615UL},{0xCA6F14AD0485FB3ELL}},{{0xF1CF34E9B5B0A51ALL},{2UL},{1UL},{0x83ACE688556036D6LL}},{{0xCA6F14AD0485FB3ELL},{18446744073709551615UL},{1UL},{1UL}},{{0xF1CF34E9B5B0A51ALL},{18446744073709551607UL},{18446744073709551615UL},{18446744073709551610UL}},{{1UL},{18446744073709551614UL},{4UL},{0x7E297A11BA649B20LL}},{{4UL},{0x7E297A11BA649B20LL},{0x2BE0A0AC91A798A2LL},{18446744073709551612UL}},{{0x0E9CAAC2DDF5B386LL},{18446744073709551615UL},{0x9DA3D19DAEE33F77LL},{18446744073709551615UL}},{{18446744073709551610UL},{0x9DA3D19DAEE33F77LL},{0x05069143B298837DLL},{0x04276C6795960C5ELL}}}};
static union U0 g_728[8][6][5] = {{{{0xE0A5L},{-1L},{0x36A3L},{0x7B8AL},{0xE0A5L}},{{5L},{0xA18EL},{-1L},{1L},{-1L}},{{2L},{2L},{0x36A3L},{0L},{0xDB51L}},{{0x4312L},{0x6FA0L},{0x651BL},{0xA18EL},{0x9123L}},{{0x7B8AL},{0L},{0xE524L},{-6L},{0xE0A5L}},{{-1L},{0x6FA0L},{0x2939L},{8L},{0xECA4L}}},{{{-1L},{2L},{4L},{0xE524L},{0L}},{{0x7E81L},{0xA18EL},{-10L},{1L},{-10L}},{{-6L},{0L},{-1L},{0L},{0x7B8AL}},{{0x1BF3L},{0xA18EL},{0L},{8L},{5L}},{{0xE0A5L},{-6L},{0xE524L},{0L},{0x7B8AL}},{{0x7E81L},{8L},{0x9123L},{1L},{-10L}}},{{{0x7B8AL},{0xE524L},{-1L},{0xDB51L},{0xDB51L}},{{0x2939L},{0xA18EL},{0x2939L},{1L},{0L}},{{0L},{0xE0A5L},{0x020AL},{0L},{0L}},{{0xE724L},{1L},{0x4312L},{8L},{0x4312L}},{{0x7B8AL},{-1L},{0x020AL},{0L},{-1L}},{{0x3967L},{0xB8C3L},{0x2939L},{1L},{0x1BF3L}}},{{{0xE0A5L},{0L},{-1L},{-1L},{0L}},{{0x4312L},{0xB8C3L},{0x9123L},{0L},{0xB919L}},{{-6L},{-1L},{0xE524L},{2L},{0xDB51L}},{{0xECA4L},{1L},{0L},{1L},{0xECA4L}},{{-6L},{0xE0A5L},{-1L},{0x36A3L},{0x7B8AL}},{{0x4312L},{0xA18EL},{0xB919L},{8L},{0x651BL}}},{{{0xE0A5L},{0xE524L},{0xE524L},{0xE0A5L},{0x7B8AL}},{{0x3967L},{8L},{-1L},{1L},{0xECA4L}},{{0x7B8AL},{-6L},{-1L},{0x020AL},{2L}},{{0x7E81L},{0L},{0x7E81L},{8L},{0x9123L}},{{-6L},{4L},{-1L},{-1L},{-6L}},{{0x3967L},{0x6FA0L},{0L},{0xB8C3L},{0L}}},{{{0xDB51L},{0xDB51L},{-1L},{0xE524L},{0x7B8AL}},{{0x651BL},{1L},{0x7E81L},{0x6FA0L},{0xB919L}},{{-1L},{0xE524L},{0x36A3L},{0L},{-6L}},{{0L},{1L},{0xECA4L},{1L},{-1L}},{{0xE0A5L},{0xDB51L},{0L},{0x36A3L},{2L}},{{0xE724L},{0x6FA0L},{0x9123L},{0x6FA0L},{0xE724L}}},{{{0xE0A5L},{4L},{0x020AL},{-6L},{0xDB51L}},{{0L},{0L},{-1L},{0xB8C3L},{0x1BF3L}},{{-1L},{0xE0A5L},{0L},{4L},{0xDB51L}},{{0x651BL},{0xB8C3L},{-10L},{8L},{0xE724L}},{{0xDB51L},{0L},{0x36A3L},{2L},{2L}},{{0x3967L},{0L},{0x3967L},{8L},{-1L}}},{{{-6L},{-1L},{-1L},{4L},{-6L}},{{0x7E81L},{0x6FA0L},{0xB919L},{0xB8C3L},{0xB919L}},{{0xDB51L},{0x020AL},{-1L},{-6L},{0x7B8AL}},{{5L},{1L},{0x3967L},{0x6FA0L},{5L}},{{-6L},{2L},{0x020AL},{0x020AL},{2L}},{{0x651BL},{8L},{0xB919L},{0xA18EL},{0x4312L}}}};
static union U0 g_733 = {7L};
static union U0 g_791[10] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
static union U0 g_799 = {0xBAD4L};
static union U0 g_800 = {4L};
static union U0 g_818 = {-4L};
static int * volatile g_824 = (void*)0;
static int ** volatile g_827 = &g_85;
static volatile union U1 g_833 = {0x46BC5772E1A3ECE3LL};
static unsigned g_835 = 1UL;
static int ** volatile g_838 = (void*)0;
static int *g_839 = &g_87[8];
static int ** volatile g_884[8][5] = {{&g_85,(void*)0,(void*)0,&g_85,(void*)0},{&g_85,&g_85,&g_85,&g_85,&g_85},{(void*)0,&g_85,(void*)0,(void*)0,&g_85},{&g_85,(void*)0,(void*)0,&g_85,(void*)0},{&g_85,&g_85,&g_85,&g_85,&g_85},{(void*)0,&g_85,(void*)0,(void*)0,&g_85},{&g_85,(void*)0,(void*)0,&g_85,(void*)0},{&g_85,&g_85,&g_85,&g_85,&g_85}};
static int ** volatile g_885 = &g_839;
static unsigned long long g_925 = 1UL;



static unsigned func_1(void);
static int func_3(char p_4, unsigned char p_5, long long p_6, char p_7, unsigned long long p_8);
static char func_22(short p_23, int p_24);
static union U0 func_26(int p_27, int p_28, long long p_29, char p_30, unsigned p_31);
static unsigned long long func_32(int p_33, unsigned char p_34, unsigned p_35, long long p_36, short p_37);
static union U1 func_42(short p_43, char p_44, unsigned p_45, unsigned short p_46);
static union U0 func_47(unsigned char p_48, unsigned long long p_49, unsigned long long p_50, short p_51, int p_52);
static long long func_53(long long p_54, unsigned short p_55);
static long long func_61(int p_62, int p_63);
static unsigned char func_70(long long p_71);
static unsigned func_1(void)
{
    int l_2 = (-1L);
    unsigned l_9 = 18446744073709551615UL;
    long long l_875 = 0xB14CB8F467FFD8FCLL;
    int *l_892 = &g_800.f3;
    unsigned l_908 = 2UL;
    int l_931[7] = {(-3L),0x40CEB108L,(-3L),(-3L),0x40CEB108L,(-3L),(-3L)};
    int i;
    if ((0L <= l_2))
    {
        unsigned l_830[8] = {0x8599C030L,0x8599C030L,0x8599C030L,0x8599C030L,0x8599C030L,0x8599C030L,0x8599C030L,0x8599C030L};
        int *l_834 = &l_2;
        int i;
        (**g_252) = func_3(l_9, g_10, g_10, (safe_mod_func_int64_t_s_s(l_9, (~l_9))), g_10);
        (**g_252) = ((safe_rshift_func_uint8_t_u_u(l_2, 6)) ^ l_830[1]);
        (**g_252) = (func_53(l_2, (safe_div_func_uint64_t_u_u((((g_833 , &l_2) != l_834) , g_538.f0), (*l_834)))) | (*l_834));
    }
    else
    {
        short l_840 = (-1L);
        union U1 *l_848 = &g_323;
        unsigned short l_880 = 0x5DB0L;
        int *l_883 = (void*)0;
        if (g_835)
        {
            unsigned long long l_853[6] = {0x5BCEDD52B081D04BLL,0UL,0x5BCEDD52B081D04BLL,0x5BCEDD52B081D04BLL,0UL,0x5BCEDD52B081D04BLL};
            int i;
            for (g_642 = 0; (g_642 < (-5)); g_642--)
            {
                unsigned l_851 = 6UL;
                int *l_857 = &g_370.f3;
                for (g_538.f2 = 0; (g_538.f2 <= 9); g_538.f2 += 1)
                {
                    (**g_252) = 0x21135C19L;
                    for (g_818.f1 = 1; (g_818.f1 <= 9); g_818.f1 += 1)
                    {
                        unsigned long long l_841 = 0UL;
                        g_839 = (*g_149);
                        if ((**g_252))
                            break;
                        if (l_840)
                            continue;
                        (***g_251) = l_841;
                    }
                }
                if (l_840)
                    break;
                if (l_840)
                {
                    long long l_852[4][5] = {{0x061FB3F023F0522BLL,0x696790DF6400E13ALL,0x1AE5C7E024456CE0LL,0x696790DF6400E13ALL,0x061FB3F023F0522BLL},{0x061FB3F023F0522BLL,0x696790DF6400E13ALL,0x1AE5C7E024456CE0LL,0x696790DF6400E13ALL,0x061FB3F023F0522BLL},{0x061FB3F023F0522BLL,0x696790DF6400E13ALL,0x1AE5C7E024456CE0LL,0x1AE5C7E024456CE0LL,8L},{8L,0x1AE5C7E024456CE0LL,0x061FB3F023F0522BLL,0x1AE5C7E024456CE0LL,8L}};
                    union U0 *l_870 = &g_791[7];
                    int i, j;
                    (*g_839) = (**g_252);
                    (***g_251) = (&g_371[1] == (void*)0);
                    for (g_672.f1 = (-4); (g_672.f1 > 6); g_672.f1 = safe_add_func_int16_t_s_s(g_672.f1, 4))
                    {
                        short l_854 = 0x2ECDL;
                        int *l_855 = &g_86;
                        int **l_856[9][1] = {{&l_855},{&g_85},{&l_855},{&l_855},{&g_85},{&l_855},{&l_855},{&g_85},{&l_855}};
                        union U0 **l_871 = &g_223;
                        int i, j;
                        l_857 = ((((safe_rshift_func_int16_t_s_s((l_848 == (*g_269)), 13)) != ((*g_839) <= (*g_85))) || ((((safe_add_func_uint64_t_u_u(((l_9 ^ (l_851 && 0xC0B1L)) | g_277[7].f0), func_3(l_852[0][0], l_853[5], g_672.f1, l_852[3][3], l_854))) == g_561[1][2]) > l_853[3]) || 0x8ED23581E248193ELL)) , l_855);
                        (*g_483) = &l_2;
                        (*l_857) = (g_321.f0 <= ((safe_sub_func_uint8_t_u_u(g_728[5][0][4].f0, 0x38L)) , ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((safe_mod_func_int64_t_s_s(0xF5F09DE650A60669LL, (safe_mod_func_int8_t_s_s(((((safe_sub_func_int16_t_s_s(g_561[1][1], g_733.f0)) != g_800.f0) != g_728[5][0][4].f0) ^ 0x4E093DA5L), l_852[0][0])))), g_672.f3)), l_840)) || 0x48295667L)));
                        (*l_871) = l_870;
                    }
                }
                else
                {
                    (**g_483) = (**g_473);
                    if ((**g_659))
                        break;
                }
            }
            for (g_733.f3 = 1; (g_733.f3 >= 0); g_733.f3 -= 1)
            {
                union U1 **l_872 = &l_848;
                int l_881[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_881[i] = (-1L);
                (***g_251) = ((void*)0 == l_872);
                l_2 = ((((((safe_rshift_func_uint16_t_u_u(func_53(l_853[5], l_875), 3)) >= (+(~(safe_lshift_func_uint16_t_u_u(l_853[5], (&g_246 == (void*)0)))))) ^ g_323.f2) ^ ((1L | (safe_sub_func_int16_t_s_s(((((18446744073709551615UL != l_840) > l_880) > g_574.f2) < l_2), l_881[2]))) > g_323.f2)) ^ l_840) < g_286[0].f3);
                for (g_323.f1 = 0; (g_323.f1 <= 1); g_323.f1 += 1)
                {
                    unsigned long long l_882 = 9UL;
                    (**g_252) = l_882;
                    (*g_839) = 1L;
                    for (g_818.f3 = 1; (g_818.f3 >= 0); g_818.f3 -= 1)
                    {
                        char l_886 = 0x3BL;
                        (*g_885) = (l_853[3] , l_883);
                        return l_886;
                    }
                }
            }
        }
        else
        {
            unsigned l_889 = 4294967295UL;
            for (g_240.f1 = 0; g_240.f1 < 10; g_240.f1 += 1)
            {
                union U0 tmp = {0L};
                g_395[g_240.f1] = tmp;
            }
            (*g_85) = (g_538.f3 == (safe_mod_func_int64_t_s_s(0xEDB889D762EC0B55LL, (g_428.f2 , (0UL || ((g_686[3][8][2].f2 < ((!l_9) && l_889)) , (((safe_mod_func_int16_t_s_s((7UL && (g_642 , g_818.f0)), l_9)) != (-1L)) || (**g_618))))))));
            l_892 = (*g_827);
        }
        for (g_390.f0 = 0; (g_390.f0 == (-26)); --g_390.f0)
        {
            return g_224.f1;
        }
    }
    (*l_892) = func_61((*g_839), (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((l_875 && (((safe_lshift_func_int16_t_s_u(0xEEE7L, (safe_unary_minus_func_int16_t_s((safe_sub_func_uint16_t_u_u(l_875, (safe_lshift_func_int8_t_s_u((&g_473 != &g_885), 0)))))))) | 0xD4816EABDB071B00LL) != g_791[6].f0)), g_686[3][8][2].f0)), 4)));
    for (g_240.f3 = 0; (g_240.f3 <= (-26)); g_240.f3 = safe_sub_func_uint64_t_u_u(g_240.f3, 2))
    {
        long long l_915 = 0xAA8EB49E4BB38A69LL;
        (*g_839) = (l_908 || (safe_sub_func_int32_t_s_s((*g_253), ((g_370.f0 & ((g_390.f0 , ((g_390.f0 < g_672.f1) < (-1L))) > ((safe_add_func_uint8_t_u_u((g_87[8] <= l_915), l_915)) && 0x7EL))) , (*g_839)))));
        for (l_2 = (-5); (l_2 < (-29)); l_2--)
        {
            int l_924[3][10] = {{(-5L),1L,0xA1706987L,0L,1L,0xB719D5C1L,0xFCC95507L,0xA1706987L,0xA1706987L,0xFCC95507L},{0xB719D5C1L,0xFCC95507L,0xA1706987L,0xA1706987L,0xFCC95507L,0xB719D5C1L,1L,0L,0xA1706987L,1L},{(-5L),0xFCC95507L,0x7FAA25F1L,0L,0xFCC95507L,0x095DAD95L,0xFCC95507L,0L,0x7FAA25F1L,0xFCC95507L}};
            int **l_930 = &l_892;
            int i, j;
            (*g_253) = (((void*)0 != (*g_222)) >= (l_915 ^ ((safe_sub_func_int8_t_s_s((safe_div_func_int8_t_s_s((g_86 , g_72[1][3][0]), ((safe_add_func_int64_t_s_s((l_924[1][2] | (g_277[7].f0 < g_925)), ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_s(l_924[1][2], 13)), 15)) , g_286[0].f3))) ^ 0x22F646E131B35BC0LL))), l_915)) , g_733.f0)));
            (***g_251) = ((*g_618) == (void*)0);
            (*l_930) = (*g_485);
        }
        if (l_915)
            continue;
    }
    return l_931[6];
}







static int func_3(char p_4, unsigned char p_5, long long p_6, char p_7, unsigned long long p_8)
{
    int l_696 = (-5L);
    int *l_826 = &g_201[0][5].f3;
    for (p_4 = 0; (p_4 == (-17)); p_4 = safe_sub_func_int8_t_s_s(p_4, 5))
    {
        int l_25 = (-1L);
        unsigned char l_230 = 0x81L;
        int *l_825 = &g_246;
    }
    l_826 = &l_696;
    (*g_827) = (*g_485);
    return (**g_483);
}







static char func_22(short p_23, int p_24)
{
    for (g_818.f3 = (-29); (g_818.f3 > 6); ++g_818.f3)
    {
        unsigned short l_821 = 0UL;
        for (g_672.f3 = 1; (g_672.f3 <= 4); g_672.f3 += 1)
        {
            int i;
            return g_87[(g_672.f3 + 2)];
        }
        if (l_821)
            break;
        for (g_81 = 0; (g_81 < (-19)); --g_81)
        {
            return g_224.f0;
        }
    }
    return p_23;
}







static union U0 func_26(int p_27, int p_28, long long p_29, char p_30, unsigned p_31)
{
    unsigned l_701 = 0x2D553DEEL;
    int **l_708 = &g_85;
    unsigned l_711 = 0x7A8BE28AL;
    int *l_712 = &g_86;
    union U1 *l_738 = &g_574;
    int l_745 = (-1L);
    union U0 ***l_757 = (void*)0;
    (***g_251) = ((safe_div_func_int64_t_s_s((safe_mod_func_int8_t_s_s((g_10 >= (g_286[0].f2 && (l_701 != ((safe_lshift_func_int16_t_s_u(((p_27 == (p_29 <= (((0L == (safe_add_func_int32_t_s_s(((l_708 == (void*)0) < (((safe_rshift_func_uint16_t_u_s(((((func_70(g_395[6].f0) | 0xB637L) != g_686[3][8][2].f2) , g_672.f3) < l_711), l_701)) & p_30) <= 0x2E0F6F2976FC3DEELL)), g_286[0].f3))) != 255UL) , 0xB361L))) ^ 0L), 13)) ^ 0xC916L)))), 0x54L)), p_29)) | p_28);
    (*l_708) = l_712;
    for (g_672.f2 = 0; (g_672.f2 > 16); g_672.f2++)
    {
        union U1 *l_720 = &g_672;
        int l_722 = 0xA24427EEL;
        volatile int * volatile l_732 = &g_395[6].f3;
        int *l_790 = &g_246;
        (*l_708) = &p_28;
        if ((g_87[8] | 0xCEL))
        {
            int *l_715 = &g_246;
            (*l_708) = l_715;
            if ((safe_add_func_uint64_t_u_u(p_29, (p_28 > 0x86D2L))))
            {
                union U1 *l_721 = (void*)0;
                int l_727 = 0x594F143BL;
                (*l_715) = ((safe_add_func_uint16_t_u_u(g_10, (((l_720 != l_721) > 0L) < (l_722 , (safe_lshift_func_uint8_t_u_s((~(!(((safe_rshift_func_int8_t_s_u(l_727, 0)) , ((((l_715 != (*g_485)) ^ (*l_712)) != g_201[0][5].f0) == p_30)) || p_30))), 6)))))) & 0UL);
            }
            else
            {
                return g_728[5][0][4];
            }
            if ((*l_715))
                continue;
            for (g_390.f1 = 22; (g_390.f1 >= 16); g_390.f1 = safe_sub_func_uint32_t_u_u(g_390.f1, 5))
            {
                int *l_731 = (void*)0;
                l_731 = (*l_708);
                (*g_301) = (void*)0;
                for (g_538.f2 = 1; (g_538.f2 <= 4); g_538.f2 += 1)
                {
                    (*l_708) = (*g_473);
                    l_732 = (*g_252);
                }
                if ((*g_253))
                    continue;
            }
        }
        else
        {
            (*l_708) = &p_28;
            return g_733;
        }
        if ((p_30 | (safe_rshift_func_uint8_t_u_u(((l_738 != (g_733.f0 , (void*)0)) <= ((safe_mod_func_uint32_t_u_u((((g_224.f1 , (func_32((**l_708), (((void*)0 != (*g_301)) && (safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((-1L), 0xABL)), 13))), p_28, (**l_708), p_27) == 0xED125E91L)) , 0x6A7AD035L) || 1UL), l_722)) != l_722)), l_745))))
        {
            long long l_752 = 0xEC1DE90472F524A2LL;
            for (g_390.f1 = (-13); (g_390.f1 != 31); g_390.f1++)
            {
                int *l_761 = &g_370.f3;
                for (g_323.f1 = 0; (g_323.f1 > 23); g_323.f1 = safe_add_func_int64_t_s_s(g_323.f1, 7))
                {
                    if (p_31)
                        break;
                }
                for (g_538.f3 = 0; (g_538.f3 <= 12); g_538.f3 = safe_add_func_uint64_t_u_u(g_538.f3, 1))
                {
                    unsigned char l_760 = 0x2AL;
                    if (l_752)
                        break;
                    l_760 = func_70((!(0x6EL < func_61(((g_323.f3 , (safe_mod_func_int8_t_s_s(((((void*)0 == l_757) < ((~(p_29 , g_429[0].f3)) == 0xA3L)) , (0x5755L || (safe_div_func_uint64_t_u_u(0x3BCD8AC970C8CF41LL, p_31)))), g_728[5][0][4].f0))) >= l_752), p_31))));
                }
                l_761 = &p_28;
                (*l_708) = &p_28;
            }
            (***g_251) = (-1L);
        }
        else
        {
            union U0 *l_771[6] = {&g_201[0][5],&g_201[0][5],&g_201[0][5],&g_201[0][5],&g_201[0][5],&g_201[0][5]};
            union U0 ***l_776 = &g_302;
            int l_784 = 0L;
            int i;
            for (g_538.f1 = 5; (g_538.f1 <= 36); g_538.f1 = safe_add_func_int8_t_s_s(g_538.f1, 1))
            {
                unsigned l_769 = 0xB66C7044L;
                for (g_390.f0 = 0; (g_390.f0 == 18); g_390.f0 = safe_add_func_uint32_t_u_u(g_390.f0, 8))
                {
                    unsigned char l_766 = 1UL;
                    int ***l_787 = &l_708;
                    if (l_766)
                    {
                        union U0 *l_770 = &g_733;
                        int l_777 = 0x9AC992B0L;
                        l_771[3] = ((((g_323.f2 == g_728[5][0][4].f0) < (((void*)0 == &g_252) , func_53((p_31 , (safe_sub_func_uint32_t_u_u(func_61((**g_252), (*l_712)), (6UL != l_769)))), l_722))) & g_574.f2) , l_770);
                        (**g_252) = (+((0xADFA4ADC50E4EC68LL ^ (safe_mod_func_int8_t_s_s(((((p_28 , (p_31 < ((g_176 , (g_310.f1 , ((void*)0 == (*g_301)))) <= ((void*)0 != l_776)))) || g_310.f1) , 1L) == p_30), 1L))) , l_777));
                        p_28 = (((func_61((safe_add_func_int8_t_s_s((-1L), (safe_sub_func_int8_t_s_s((~((safe_div_func_uint16_t_u_u(func_70(l_784), p_30)) && ((safe_sub_func_uint32_t_u_u((l_784 | p_27), 0UL)) == l_769))), (g_286[0].f1 < g_370.f0))))), p_30) != g_538.f2) , (void*)0) == l_787);
                    }
                    else
                    {
                        (**l_787) = &p_28;
                        (**l_787) = &p_28;
                        (**l_787) = (**l_787);
                    }
                    for (l_701 = (-22); (l_701 <= 26); l_701++)
                    {
                        (***g_251) = 1L;
                        (**l_787) = (p_31 , l_790);
                        (**l_787) = &p_28;
                    }
                }
                l_732 = (*g_252);
                return g_791[6];
            }
            for (g_518 = (-5); (g_518 >= 27); g_518 = safe_add_func_uint32_t_u_u(g_518, 9))
            {
                unsigned long long l_798 = 1UL;
                for (p_30 = 20; (p_30 > 14); p_30--)
                {
                    for (g_733.f1 = (-26); (g_733.f1 < 1); g_733.f1 = safe_add_func_int64_t_s_s(g_733.f1, 6))
                    {
                        (*l_712) = (func_61(l_798, g_561[1][0]) < p_28);
                        (*l_708) = &p_28;
                        return g_799;
                    }
                    return g_800;
                }
                (*g_301) = (*g_301);
            }
        }
        (**g_252) = (p_30 , (safe_sub_func_int16_t_s_s(p_30, g_246)));
    }
    for (g_799.f0 = 0; (g_799.f0 >= 23); g_799.f0 = safe_add_func_int8_t_s_s(g_799.f0, 6))
    {
        union U0 ***l_817 = (void*)0;
        (**g_252) = (func_53((((safe_add_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(func_70(((void*)0 == (*g_301))), (safe_add_func_int16_t_s_s(p_27, ((((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_div_func_int64_t_s_s(g_561[0][1], p_31)), 7)) != g_246), 13)) , l_817) == l_757) ^ g_799.f0))))) > p_28), 0xB58546CB26FC622ELL)) != p_31) >= p_28), g_791[6].f0) | g_323.f2);
        (*g_473) = &p_28;
    }
    return g_818;
}







static unsigned long long func_32(int p_33, unsigned char p_34, unsigned p_35, long long p_36, short p_37)
{
    char l_476 = 0x02L;
    int *l_507 = &g_81;
    unsigned long long l_655 = 0xDDEEFBF4323FA874LL;
    unsigned char l_690 = 253UL;
    unsigned short l_691 = 65531UL;
    for (g_86 = 0; (g_86 > 2); g_86 = safe_add_func_uint16_t_u_u(g_86, 3))
    {
        int *l_472 = &g_81;
        int **l_493 = &g_85;
        int ***l_492[3];
        union U0 **l_504 = &g_223;
        int i;
        for (i = 0; i < 3; i++)
            l_492[i] = &l_493;
        for (g_323.f3 = 18; (g_323.f3 == 48); g_323.f3 = safe_add_func_uint8_t_u_u(g_323.f3, 9))
        {
            (*g_473) = l_472;
        }
        if (((*l_472) && ((!((safe_sub_func_int64_t_s_s(l_476, (((+1UL) , p_35) != (safe_rshift_func_int8_t_s_s(p_36, 2))))) == (((*l_472) ^ ((*g_227) , (safe_sub_func_int16_t_s_s(0xE567L, 0L)))) != p_34))) && p_34)))
        {
            int *l_486 = &g_87[8];
            int **l_487 = &l_486;
            (*l_472) = (g_429[0].f0 , (safe_rshift_func_int16_t_s_s(p_34, 12)));
            (*g_483) = (*g_473);
            (*g_485) = (*g_473);
            (*l_487) = l_486;
        }
        else
        {
            return g_428.f2;
        }
        (*l_472) = ((safe_div_func_int64_t_s_s(1L, ((func_42(p_34, l_476, (safe_add_func_int64_t_s_s(g_428.f1, p_36)), l_476) , (p_37 ^ (((void*)0 == l_492[1]) & 0xBF2DL))) , p_34))) & (-5L));
        for (g_390.f3 = 0; (g_390.f3 == 8); g_390.f3 = safe_add_func_int32_t_s_s(g_390.f3, 9))
        {
            int l_514 = 7L;
            int **l_535 = &l_472;
            for (l_476 = 0; (l_476 != 15); l_476++)
            {
                int l_517 = 0x8CF6E253L;
                union U1 *l_537 = &g_538;
                union U1 **l_536 = &l_537;
                if (((g_369[9][3][1].f0 >= ((((*g_251) == (*g_251)) , (void*)0) != (void*)0)) != (safe_lshift_func_uint8_t_u_s((p_34 < (safe_rshift_func_int8_t_s_s((g_310.f0 != ((void*)0 != l_504)), p_35))), 2))))
                {
                    (**g_252) = p_37;
                    (***g_251) = p_34;
                    for (g_240.f0 = 0; (g_240.f0 <= 9); g_240.f0++)
                    {
                        (*l_504) = (*l_504);
                    }
                }
                else
                {
                    (*l_493) = l_507;
                }
                for (g_323.f2 = 0; (g_323.f2 >= 26); g_323.f2 = safe_add_func_int64_t_s_s(g_323.f2, 7))
                {
                    unsigned l_519[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_519[i][j] = 0x30D455A4L;
                    }
                    (*l_472) = (safe_add_func_uint32_t_u_u((((p_34 , (*g_227)) < (((((safe_rshift_func_uint16_t_u_u((*l_507), 5)) > 250UL) != l_514) || (g_87[7] , (safe_sub_func_uint64_t_u_u(l_517, (((p_37 | 0xFC7DEDEDL) == g_390.f0) , 0x7F86459A5AE108F3LL))))) | g_286[0].f1)) != g_518), 0xB27E8873L));
                    if (l_519[1][0])
                        break;
                }
                for (p_35 = 5; (p_35 < 16); p_35 = safe_add_func_uint16_t_u_u(p_35, 4))
                {
                    long long l_524 = 0xAE775A79E5910690LL;
                    int l_539 = 0xD85A6FBFL;
                    for (g_323.f2 = 0; (g_323.f2 >= 53); g_323.f2 = safe_add_func_int8_t_s_s(g_323.f2, 1))
                    {
                        (*g_253) = p_35;
                        l_524 = p_34;
                        if (l_524)
                            break;
                    }
                    for (g_10 = 0; (g_10 > 2); g_10++)
                    {
                        (*l_507) = (p_35 != ((((*l_493) == (*g_149)) , &g_270) != ((safe_div_func_uint64_t_u_u(l_524, ((((safe_add_func_int8_t_s_s(g_390.f0, ((p_34 != ((((l_535 == (*g_251)) == g_370.f1) , 4294967295UL) < (*l_472))) == p_34))) , l_517) <= 0x2BL) ^ 0x581D77A8L))) , l_536)));
                        l_539 = (*l_507);
                    }
                    (*l_536) = (void*)0;
                    for (g_538.f3 = 0; (g_538.f3 <= 2); g_538.f3 += 1)
                    {
                        return p_37;
                    }
                }
            }
            (**l_535) = (*g_227);
            if (p_34)
                continue;
            (*l_472) = p_33;
        }
    }
    for (g_240.f3 = (-29); (g_240.f3 <= 9); g_240.f3 = safe_add_func_int16_t_s_s(g_240.f3, 2))
    {
        unsigned char l_562[10][1][5] = {{{0UL,255UL,0UL,0x12L,0x12L}},{{0x12L,1UL,0x12L,255UL,0xBBL}},{{0UL,255UL,0UL,0xD4L,0xBBL}},{{255UL,255UL,255UL,255UL,0x12L}},{{0x2AL,255UL,0UL,0xBBL,255UL}},{{0x2AL,0UL,0x12L,0UL,0x2AL}},{{255UL,0xD4L,0UL,0xBBL,255UL}},{{0UL,0xD4L,255UL,255UL,0xD4L}},{{0x12L,0UL,0x2AL,0xD4L,0xD4L}},{{255UL,0x12L,0xBBL,255UL,0xBBL}}};
        int i, j, k;
        for (g_390.f0 = 0; (g_390.f0 != 15); g_390.f0 = safe_add_func_uint8_t_u_u(g_390.f0, 4))
        {
            union U0 **l_546 = &g_223;
            int l_563 = 2L;
            union U0 *l_566 = (void*)0;
            for (p_35 = 0; (p_35 < 11); p_35 = safe_add_func_uint64_t_u_u(p_35, 9))
            {
                int l_581 = 0xE1C27A58L;
                (*g_253) = ((-2L) <= ((void*)0 != l_546));
                if (p_33)
                    break;
                for (g_370.f0 = 0; (g_370.f0 <= (-6)); g_370.f0 = safe_sub_func_int32_t_s_s(g_370.f0, 3))
                {
                    unsigned short l_564 = 0x7F6BL;
                    union U1 *l_573[2];
                    short l_578 = 0xA259L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_573[i] = &g_574;
                    if (((p_37 < g_240.f1) & (0xA8E54D1BL <= (safe_mod_func_uint32_t_u_u((p_35 < (safe_div_func_int64_t_s_s((p_36 > ((safe_lshift_func_int8_t_s_s((-1L), (4L != (((safe_mod_func_int8_t_s_s(((safe_sub_func_uint64_t_u_u(func_61((safe_rshift_func_uint16_t_u_u((g_538.f2 >= (((g_561[1][1] == 0L) && l_562[6][0][3]) & p_33)), 3)), (*l_507)), p_36)) , g_390.f0), g_518)) ^ g_561[0][0]) != l_563)))) | p_34)), 18446744073709551610UL))), l_564)))))
                    {
                        int **l_565 = &g_85;
                        (*l_565) = &l_563;
                        (*l_546) = l_566;
                        (*g_253) = (l_562[6][0][3] , ((safe_rshift_func_int8_t_s_s(func_53(((-1L) <= p_33), l_563), (((((safe_lshift_func_int8_t_s_u(9L, g_561[1][1])) >= ((((safe_rshift_func_uint16_t_u_s(4UL, 4)) , (g_240.f3 <= g_286[0].f1)) || 4L) && l_564)) && (-7L)) , l_573[1]) != (void*)0))) & 5UL));
                    }
                    else
                    {
                        int l_586 = (-8L);
                        l_586 = (safe_unary_minus_func_uint8_t_u(((((safe_rshift_func_uint8_t_u_s(8UL, 3)) && l_578) ^ ((safe_sub_func_int64_t_s_s(g_323.f2, (l_581 < ((safe_lshift_func_int16_t_s_s(0x9AD9L, 2)) < (safe_lshift_func_int16_t_s_s((g_286[0].f1 && (func_61(func_61(p_34, (l_573[1] == (void*)0)), g_277[7].f0) , g_201[0][5].f0)), p_37)))))) <= g_286[0].f2)) == g_87[1])));
                    }
                    for (g_86 = (-25); (g_86 > (-16)); ++g_86)
                    {
                        int **l_589 = &g_85;
                        l_563 = p_37;
                        (*l_589) = &l_581;
                        if ((**g_485))
                            continue;
                    }
                    for (g_574.f2 = 0; (g_574.f2 <= 0); g_574.f2 += 1)
                    {
                        int i;
                        (**g_252) = (*l_507);
                        (**g_252) = (g_429[g_574.f2] , (*l_507));
                        (*l_507) = l_578;
                        (*l_507) = (l_581 && 4294967295UL);
                    }
                    (*g_253) = 1L;
                }
                for (g_86 = (-20); (g_86 > (-18)); g_86 = safe_add_func_int16_t_s_s(g_86, 6))
                {
                    (***g_251) = (((safe_div_func_uint8_t_u_u(((*l_507) >= l_581), p_36)) , (*g_301)) != (void*)0);
                }
            }
        }
    }
    for (g_240.f0 = 0; (g_240.f0 >= 0); g_240.f0 -= 1)
    {
        long long l_596 = 0xB985DC857C6D8648LL;
        unsigned short l_612 = 0x629DL;
        union U0 ***l_619 = (void*)0;
        union U1 **l_637 = (void*)0;
        int *l_656 = &g_86;
        for (g_370.f3 = 0; (g_370.f3 <= 0); g_370.f3 += 1)
        {
            (**g_251) = (*g_252);
        }
        l_596 = func_53((safe_lshift_func_int16_t_s_u(2L, 6)), p_34);
    }
    for (g_240.f3 = 0; (g_240.f3 >= 0); ++g_240.f3)
    {
        unsigned l_687 = 0xB9593960L;
        union U1 *l_693 = &g_574;
        union U1 **l_692 = &l_693;
        int *l_694[8][1][7] = {{{&g_240.f3,(void*)0,&g_86,(void*)0,&g_240.f3,&g_86,&g_86}},{{&g_86,&g_86,&g_87[1],&g_86,&g_87[1],&g_86,&g_86}},{{(void*)0,&g_86,&g_86,&g_246,&g_86,&g_246,&g_86}},{{&g_86,&g_86,&g_81,(void*)0,(void*)0,&g_81,(void*)0}},{{&g_240.f3,&g_86,&g_86,&g_240.f3,&g_246,(void*)0,&g_240.f3}},{{&g_81,(void*)0,&g_87[1],&g_87[1],(void*)0,&g_81,&g_86}},{{(void*)0,&g_240.f3,&g_86,&g_86,&g_86,&g_86,&g_240.f3}},{{(void*)0,&g_86,&g_81,(void*)0,&g_87[1],&g_87[1],(void*)0}}};
        int **l_695 = &l_507;
        int i, j, k;
        (*g_253) = (g_686[3][8][2] , l_687);
        (*l_692) = (((safe_sub_func_int16_t_s_s(func_53(func_70(l_687), l_690), (((((p_34 , (l_687 | l_687)) <= g_201[0][5].f0) | l_691) , (-1L)) , 0x4C75L))) || 1L) , (void*)0);
        (*l_695) = l_694[1][0][2];
    }
    return g_370.f0;
}







static union U1 func_42(short p_43, char p_44, unsigned p_45, unsigned short p_46)
{
    unsigned long long l_373 = 0xD9D8BA12700EA1A5LL;
    int l_374 = 0x832B1C84L;
    union U0 *l_399[7][10][3] = {{{(void*)0,(void*)0,&g_369[9][3][1]},{&g_390,(void*)0,(void*)0},{&g_201[0][5],&g_240,&g_201[0][5]},{&g_277[5],&g_201[1][6],&g_277[5]},{&g_201[0][5],&g_240,&g_201[0][5]},{(void*)0,(void*)0,&g_390},{&g_369[9][3][1],(void*)0,(void*)0},{&g_369[9][3][1],&g_369[9][3][1],&g_201[1][3]},{&g_369[9][3][1],&g_201[0][5],(void*)0},{(void*)0,&g_201[1][3],&g_201[0][5]}},{{&g_201[0][5],&g_370,&g_370},{&g_369[9][3][1],(void*)0,&g_201[1][2]},{&g_201[0][5],(void*)0,&g_370},{&g_201[1][3],&g_369[9][4][0],(void*)0},{&g_370,&g_369[9][3][1],&g_370},{(void*)0,&g_369[9][4][0],&g_201[1][3]},{&g_370,(void*)0,&g_201[0][5]},{&g_201[1][2],(void*)0,&g_369[9][3][1]},{&g_369[9][3][1],&g_369[9][3][1],(void*)0},{&g_201[1][2],(void*)0,(void*)0}},{{&g_370,(void*)0,&g_240},{(void*)0,&g_201[1][6],&g_201[1][6]},{&g_370,&g_370,&g_240},{&g_201[1][3],&g_277[5],(void*)0},{&g_201[0][5],&g_201[1][4],(void*)0},{&g_369[9][3][1],&g_201[0][5],&g_369[9][3][1]},{(void*)0,&g_201[1][4],&g_201[0][5]},{(void*)0,&g_277[5],&g_201[1][3]},{&g_240,&g_370,&g_370},{&g_201[1][6],&g_201[1][6],(void*)0}},{{&g_240,(void*)0,&g_370},{(void*)0,(void*)0,&g_201[1][2]},{(void*)0,&g_369[9][3][1],&g_369[9][3][1]},{&g_369[9][3][1],(void*)0,&g_201[1][2]},{&g_201[0][5],(void*)0,&g_370},{&g_201[1][3],&g_369[9][4][0],(void*)0},{&g_370,&g_369[9][3][1],&g_370},{(void*)0,&g_369[9][4][0],&g_201[1][3]},{&g_370,(void*)0,&g_201[0][5]},{&g_201[1][2],(void*)0,&g_369[9][3][1]}},{{&g_369[9][3][1],&g_369[9][3][1],(void*)0},{&g_201[1][2],(void*)0,(void*)0},{&g_370,(void*)0,&g_201[0][5]},{&g_369[9][3][1],&g_369[9][4][0],&g_369[9][4][0]},{&g_240,&g_369[9][3][1],&g_201[0][5]},{&g_277[5],&g_201[0][5],&g_201[1][6]},{(void*)0,&g_201[0][5],&g_370},{&g_201[1][2],(void*)0,&g_201[1][2]},{&g_370,&g_201[0][5],(void*)0},{&g_201[1][6],&g_201[0][5],&g_277[5]}},{{&g_201[0][5],&g_369[9][3][1],&g_240},{&g_369[9][4][0],&g_369[9][4][0],&g_369[9][3][1]},{&g_201[0][5],&g_370,&g_369[9][3][1]},{&g_201[1][6],&g_369[9][3][1],&g_390},{&g_370,&g_201[1][4],&g_201[1][4]},{&g_201[1][2],&g_201[1][6],&g_390},{(void*)0,&g_369[9][3][1],&g_369[9][3][1]},{&g_277[5],&g_201[1][3],&g_369[9][3][1]},{&g_240,&g_370,&g_240},{&g_369[9][3][1],&g_201[1][3],&g_277[5]}},{{&g_369[9][3][1],&g_369[9][3][1],(void*)0},{&g_390,&g_201[1][6],&g_201[1][2]},{&g_201[1][4],&g_201[1][4],&g_370},{&g_390,&g_369[9][3][1],&g_201[1][6]},{&g_369[9][3][1],&g_370,&g_201[0][5]},{&g_369[9][3][1],&g_369[9][4][0],&g_369[9][4][0]},{&g_240,&g_369[9][3][1],&g_201[0][5]},{&g_277[5],&g_201[0][5],&g_201[1][6]},{(void*)0,&g_201[0][5],&g_370},{&g_201[1][2],(void*)0,&g_201[1][2]}}};
    int **l_459 = &g_85;
    int *l_467 = &g_87[8];
    int i, j, k;
    for (g_240.f0 = 9; (g_240.f0 >= 0); g_240.f0 -= 1)
    {
        int **l_372 = &g_85;
        union U0 *l_400 = (void*)0;
        unsigned char l_417 = 0x79L;
        union U1 *l_427[5][3];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 3; j++)
                l_427[i][j] = &g_323;
        }
        (*l_372) = &g_87[g_240.f0];
        g_87[g_240.f0] = 0L;
        for (g_323.f3 = 0; (g_323.f3 <= 2); g_323.f3 += 1)
        {
            unsigned long long l_380 = 7UL;
            int l_405 = 0xC2EA10CCL;
            union U0 *l_426[9] = {&g_201[1][0],&g_201[1][0],&g_201[1][0],&g_201[1][0],&g_201[1][0],&g_201[1][0],&g_201[1][0],&g_201[1][0],&g_201[1][0]};
            union U0 *l_431 = &g_201[0][2];
            int i;
        }
    }
    (*l_459) = (*l_459);
    for (g_370.f1 = 0; (g_370.f1 >= 8); g_370.f1 = safe_add_func_uint16_t_u_u(g_370.f1, 6))
    {
        for (g_390.f0 = 13; (g_390.f0 > 3); g_390.f0--)
        {
            (*l_459) = l_467;
        }
        (*l_467) = 1L;
    }
    (*l_467) = p_45;
    return (**g_269);
}







static union U0 func_47(unsigned char p_48, unsigned long long p_49, unsigned long long p_50, short p_51, int p_52)
{
    unsigned l_233 = 1UL;
    int *l_245 = &g_246;
    int **l_244 = &l_245;
    int ***l_243[10][5] = {{&l_244,&l_244,&l_244,(void*)0,&l_244},{&l_244,(void*)0,&l_244,&l_244,&l_244},{&l_244,&l_244,&l_244,(void*)0,&l_244},{&l_244,(void*)0,&l_244,&l_244,&l_244},{&l_244,&l_244,&l_244,&l_244,&l_244},{&l_244,(void*)0,&l_244,&l_244,(void*)0},{(void*)0,&l_244,&l_244,&l_244,(void*)0},{(void*)0,&l_244,&l_244,&l_244,&l_244},{&l_244,&l_244,&l_244,&l_244,&l_244},{&l_244,&l_244,&l_244,&l_244,&l_244}};
    union U0 ***l_303 = &g_302;
    int i, j;
    for (p_52 = 1; (p_52 >= 0); p_52 -= 1)
    {
        union U0 **l_232 = &g_223;
        union U0 ***l_231 = &l_232;
        int l_250 = 0L;
        short l_259 = 0L;
        unsigned long long l_266 = 18446744073709551615UL;
        char l_276 = 0x7AL;
        long long l_324 = 0x37BC0B29BC3DCDBFLL;
        int *l_368[1];
        int i;
        for (i = 0; i < 1; i++)
            l_368[i] = &g_87[8];
        (*l_231) = &g_223;
        if (func_53(l_233, g_201[0][5].f0))
        {
            int *l_247 = (void*)0;
            union U0 **l_262 = &g_223;
            unsigned l_273 = 1UL;
            if ((safe_sub_func_int8_t_s_s(((g_87[8] , (1UL <= ((safe_div_func_int64_t_s_s((safe_lshift_func_int16_t_s_u(func_70((g_240 , 1L)), 3)), (((!((safe_add_func_int64_t_s_s((l_243[6][4] == (((((((&g_246 == l_247) || (safe_sub_func_uint8_t_u_u((g_10 | p_50), 7UL))) >= 255UL) != l_250) > g_72[3][3][0]) || 4294967295UL) , g_251)), 0x4BA2F377F44A9B1BLL)) == l_250)) , p_49) , (-1L)))) | g_201[0][5].f0))) , p_48), l_250)))
            {
                unsigned l_263 = 1UL;
                (**g_252) = ((safe_rshift_func_uint8_t_u_s(((((((safe_mod_func_int32_t_s_s(l_259, (safe_rshift_func_uint8_t_u_s((l_262 != (void*)0), 7)))) ^ ((*g_149) == &l_250)) && func_70(l_263)) < p_49) != ((((safe_mod_func_int16_t_s_s((g_10 && g_240.f0), p_48)) || p_49) < 0xAB1B66BCL) != 0x31ABC1FEL)) ^ p_49), 6)) ^ l_266);
                if ((**g_252))
                    continue;
                for (g_240.f0 = 9; (g_240.f0 >= 1); g_240.f0 -= 1)
                {
                    int i;
                    if (g_87[g_240.f0])
                    {
                        if ((*g_227))
                            break;
                    }
                    else
                    {
                        int **l_267[7][4] = {{&g_85,&l_247,&g_85,&l_245},{&l_247,&l_245,&l_245,&l_245},{&l_247,&l_247,&l_247,&l_245},{&l_245,&l_247,&l_247,&l_247},{&l_247,&g_85,&l_245,&l_247},{&l_247,&g_85,&g_85,&l_247},{&g_85,&l_247,&l_247,&l_245}};
                        int i, j;
                        (*g_178) = (l_267[4][2] != (*g_251));
                    }
                    for (p_49 = 0; (p_49 <= 1); p_49 += 1)
                    {
                        int i, j;
                        return g_201[p_52][(p_52 + 6)];
                    }
                }
                (*g_227) = (***g_251);
            }
            else
            {
                for (p_49 = 0; (p_49 <= 1); p_49 += 1)
                {
                    for (l_266 = 0; (l_266 <= 1); l_266 += 1)
                    {
                        int *l_268 = &g_201[0][5].f3;
                        int i, j, k;
                        l_268 = (void*)0;
                        (*l_245) = g_72[l_266][(p_52 + 2)][l_266];
                        (*g_269) = &g_224;
                    }
                    for (g_240.f0 = 0; (g_240.f0 <= 1); g_240.f0 += 1)
                    {
                        (*l_244) = &p_52;
                        (*g_253) = (((((((safe_rshift_func_int16_t_s_u((p_51 == 0x57F3L), l_273)) >= (~func_61((**g_252), g_10))) == p_50) >= l_250) , ((safe_div_func_int64_t_s_s(g_10, p_51)) || g_224.f0)) > 3UL) != l_276);
                        (***g_251) = p_49;
                        return g_277[7];
                    }
                }
                for (l_273 = 0; (l_273 <= 1); l_273 += 1)
                {
                    int l_287[6][5][6] = {{{0x7FB561B1L,0x532AE1FDL,0x8403408BL,0xD1ED1595L,1L,(-1L)},{0x8403408BL,0x93F10096L,1L,0x93F10096L,0x8403408BL,0xCA84DB45L},{0L,0x1DA38108L,0x1627D106L,1L,0x1E8048C2L,0xF4F9BA95L},{(-6L),0x358AB34EL,0xBD6ACCC0L,0x1DA38108L,0xF4F9BA95L,0xDB948781L},{0x921904DDL,0x1627D106L,0x0FC249A5L,0x627ABC63L,0x358AB34EL,0L}},{{0xF4F9BA95L,(-6L),0x921904DDL,0xD1ED1595L,0L,0x2C1E3334L},{0x4FA59629L,0L,0xC4B6020AL,0xCA84DB45L,0xD1ED1595L,0xA408D92DL},{0L,0L,0x86E2DF88L,0x2C1E3334L,0x4FA59629L,0x0FC249A5L},{0xBD6ACCC0L,0x3A66112EL,0x4FA59629L,0x4FA59629L,0x3A66112EL,0xBD6ACCC0L},{4L,(-8L),0xA408D92DL,1L,0x1E8048C2L,(-2L)}},{{0L,1L,0x3A66112EL,(-1L),0L,0xCA84DB45L},{0L,0x0FC249A5L,(-1L),1L,0x921904DDL,1L},{4L,0x1E8048C2L,0x1DA38108L,0x4FA59629L,0xA408D92DL,8L},{0xBD6ACCC0L,1L,0x627ABC63L,0x2C1E3334L,0x93F10096L,0L},{0L,0x627ABC63L,0xF4F9BA95L,0xCA84DB45L,0x8403408BL,0x93F10096L}},{{0x4FA59629L,0x358AB34EL,1L,0xD1ED1595L,1L,0x358AB34EL},{0xF4F9BA95L,0x921904DDL,0x7FB561B1L,0x627ABC63L,0x1627D106L,(-8L)},{0x921904DDL,0L,0xDB948781L,0x93F10096L,0xBD6ACCC0L,(-1L)},{0x532AE1FDL,0L,1L,1L,0x1627D106L,0x3A66112EL},{(-8L),0x921904DDL,(-1L),0L,0x86E2DF88L,(-1L)}},{{1L,0xC4B6020AL,0x1E8048C2L,0xA408D92DL,(-1L),0x2C1E3334L},{0x2C1E3334L,1L,0xDB948781L,0x627ABC63L,8L,(-2L)},{0xC4B6020AL,(-2L),0x532AE1FDL,0xCA84DB45L,0xCA84DB45L,0x532AE1FDL},{0L,0L,0x627ABC63L,(-1L),0L,1L},{0x86E2DF88L,0L,0x1627D106L,0xD1ED1595L,0x532AE1FDL,0x627ABC63L}},{{0x0FC249A5L,0x86E2DF88L,0x1627D106L,0x1E8048C2L,0L,1L},{(-8L),0x1E8048C2L,0x627ABC63L,0x8403408BL,4L,0x532AE1FDL},{0x8403408BL,4L,0x532AE1FDL,1L,0L,(-2L)},{0xBD6ACCC0L,0x93F10096L,0xDB948781L,0L,0x921904DDL,0x2C1E3334L},{0x921904DDL,0x3A66112EL,0x1E8048C2L,(-1L),0x93F10096L,(-1L)}}};
                    int i, j, k;
                    if (p_52)
                        break;
                    l_247 = l_247;
                }
            }
            for (l_259 = 0; (l_259 <= 1); l_259 += 1)
            {
                int l_294 = 1L;
                char l_322 = 0xF4L;
                int *l_325 = (void*)0;
                (**g_252) = ((safe_sub_func_uint32_t_u_u((g_224.f2 , (safe_div_func_uint64_t_u_u(g_254, p_48))), (l_294 & ((safe_mod_func_int32_t_s_s((safe_add_func_uint8_t_u_u(g_87[0], g_240.f0)), (+(safe_rshift_func_int16_t_s_u(g_240.f0, (g_301 == l_303)))))) , 255UL)))) && 0xEBF453BBL);
                for (l_233 = 0; (l_233 <= 1); l_233 += 1)
                {
                    char l_359[4][5][10] = {{{(-1L),8L,0x1DL,(-1L),1L,(-5L),0x47L,0x1BL,0L,1L},{0x1AL,0xDEL,0x52L,0x74L,(-1L),0x2EL,0L,4L,0x43L,(-2L)},{(-1L),(-1L),0x2FL,(-5L),(-3L),(-1L),0x95L,(-1L),0xB8L,0xD9L},{0xD5L,0x0EL,0L,0xDAL,0x03L,(-1L),(-1L),0x2FL,1L,0x5CL},{0xF6L,0xB1L,1L,0xF2L,8L,0x35L,(-5L),(-5L),0x35L,8L}},{{1L,0xF6L,0xF6L,1L,0x6FL,6L,0L,0xB8L,0x2DL,(-4L)},{0L,0x25L,0xDEL,4L,0L,0x1AL,0xF6L,0L,0x2DL,0x43L},{0L,0x35L,0L,1L,0L,(-1L),(-3L),0L,0x35L,9L},{0x63L,(-1L),0x2EL,0xF2L,0x3CL,(-2L),(-4L),0x5CL,1L,0x03L},{9L,0x9EL,(-1L),0xDAL,0x52L,0x6CL,9L,0x74L,0x1DL,(-1L)}},{{(-4L),0L,0x5CL,(-1L),(-4L),4L,0x0EL,1L,1L,0xD9L},{0x25L,0xB1L,(-1L),0L,0L,0x1BL,0xA3L,0xD9L,0x1EL,1L},{0x1EL,0x5CL,0x2DL,(-3L),0x6FL,0x52L,1L,0x1BL,0x6CL,0xB8L},{0L,0x74L,0L,(-1L),(-1L),6L,9L,(-1L),9L,6L},{(-5L),0L,0xDDL,0L,(-5L),0xA0L,0xF2L,1L,0L,4L}},{{0xD0L,0L,0x43L,0x2FL,(-1L),0xD9L,0xDEL,0xD0L,0L,4L},{0x72L,0x2FL,0x1DL,0L,(-5L),9L,0x0EL,0xB0L,1L,6L},{0xB1L,0x49L,0x74L,1L,(-1L),(-1L),0x6CL,0x6CL,(-4L),0xB8L},{(-1L),0L,0L,0x2DL,9L,0xB0L,0x1EL,0x74L,0x3CL,0L},{0L,9L,0x1BL,0xB0L,0L,0xA3L,0L,0x72L,0xB8L,1L}}};
                    int i, j, k;
                }
            }
        }
        else
        {
            (**g_252) = (func_61(p_51, (safe_div_func_int64_t_s_s((p_50 , func_53(p_49, ((*g_178) < g_286[0].f3))), g_323.f3))) , (~(p_51 , (-5L))));
        }
        for (l_324 = 0; (l_324 <= 1); l_324 += 1)
        {
            l_368[0] = (*g_149);
            for (g_240.f0 = 0; (g_240.f0 <= 1); g_240.f0 += 1)
            {
                if ((*g_178))
                    break;
                for (p_50 = 0; (p_50 <= 1); p_50 += 1)
                {
                    for (p_49 = 0; (p_49 <= 1); p_49 += 1)
                    {
                        int i, j;
                        g_203[(g_240.f0 + 1)][p_50] = (void*)0;
                        return g_369[9][3][1];
                    }
                    (*g_253) = p_51;
                }
            }
        }
    }
    (**g_251) = (**g_251);
    return g_370;
}







static long long func_53(long long p_54, unsigned short p_55)
{
    unsigned l_56 = 0xD73C12D4L;
    unsigned short l_153 = 0UL;
    int l_229 = (-1L);
    l_229 = (g_10 ^ ((0L || (l_56 > (safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s(func_61((safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((((((safe_add_func_int16_t_s_s(g_10, p_55)) == (((func_70(p_55) && (l_56 ^ (safe_rshift_func_uint16_t_u_s(func_70(g_10), l_153)))) < p_55) && p_54)) || l_56) | 1L) , 1UL), p_54)), 0x0CBEL)), l_56), p_55)), g_201[0][5].f0)))) , g_81));
    return g_224.f3;
}







static long long func_61(int p_62, int p_63)
{
    long long l_177[4][4] = {{(-1L),0L,(-1L),0L},{(-1L),0L,(-1L),0L},{(-1L),0L,(-1L),0L},{(-1L),0L,(-1L),0L}};
    int l_186 = 9L;
    union U0 *l_205 = &g_201[1][5];
    int l_216 = 1L;
    int l_228 = 0L;
    int i, j;
    for (p_63 = (-30); (p_63 > (-24)); ++p_63)
    {
        unsigned l_158[3];
        unsigned short l_167[5];
        int l_211 = (-4L);
        int i;
        for (i = 0; i < 3; i++)
            l_158[i] = 0x78658A41L;
        for (i = 0; i < 5; i++)
            l_167[i] = 65531UL;
    }
    (*g_227) = p_63;
    return l_228;
}







static unsigned char func_70(long long p_71)
{
    int *l_84 = &g_81;
    unsigned l_107[1][10] = {{0x56D7CB4FL,0UL,0x56D7CB4FL,0x56D7CB4FL,0UL,0x56D7CB4FL,0x56D7CB4FL,0x56D7CB4FL,9UL,9UL}};
    int *l_117 = &g_86;
    int i, j;
    for (p_71 = 1; (p_71 >= 0); p_71 -= 1)
    {
        short l_79[2];
        int *l_80 = &g_81;
        int l_150 = 0xC1E51B7AL;
        int i;
        for (i = 0; i < 2; i++)
            l_79[i] = (-1L);
        (*l_80) = (safe_mod_func_uint32_t_u_u((p_71 & (safe_lshift_func_int8_t_s_s(g_72[3][1][0], 2))), ((safe_sub_func_uint8_t_u_u(g_10, (g_10 , p_71))) | l_79[0])));
        if (p_71)
            continue;
        (*l_80) = (safe_lshift_func_int16_t_s_u((g_72[0][1][0] > (&g_81 == ((*l_80) , l_84))), ((((*l_84) ^ g_10) ^ g_10) || ((*l_84) < p_71))));
        if (g_72[3][0][0])
            break;
        for (g_81 = 1; (g_81 >= 0); g_81 -= 1)
        {
            int l_88[5] = {(-8L),(-8L),(-8L),(-8L),(-8L)};
            unsigned l_108 = 6UL;
            int *l_110[5];
            unsigned long long l_135 = 0x35839F227602C2F6LL;
            union U0 *l_146 = (void*)0;
            int i;
            for (i = 0; i < 5; i++)
                l_110[i] = &g_81;
            g_85 = &g_81;
            for (g_86 = 0; (g_86 <= 1); g_86 += 1)
            {
                int l_100 = 0x372BB134L;
                int *l_109[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_109[i] = &g_87[2];
                for (g_87[8] = 1; (g_87[8] >= 0); g_87[8] -= 1)
                {
                    int i, j, k;
                    if ((g_72[g_81][g_86][p_71] , l_88[2]))
                    {
                        int l_89 = 0x05E7732CL;
                        l_89 = ((*l_84) ^ g_72[g_81][g_86][p_71]);
                        return (*l_84);
                    }
                    else
                    {
                        return g_81;
                    }
                }
                g_87[8] = (g_87[8] , ((&g_87[8] == l_80) && ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u(1L, l_100)) ^ ((safe_rshift_func_uint8_t_u_u((((safe_add_func_uint32_t_u_u(0xE3FE27FCL, (-1L))) | (((0x04E64A2B5195E1C3LL || ((g_81 && g_87[2]) < l_107[0][1])) < g_72[3][4][1]) != l_108)) & g_81), g_86)) , g_87[8])), p_71)) & (*l_84)), 6)), 12)), 2)) || g_10)));
            }
            if (((((*l_80) && (((((g_81 | p_71) , g_86) ^ (((void*)0 == l_110[0]) <= ((*l_80) & (safe_sub_func_int64_t_s_s((safe_div_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u(((l_84 != l_84) <= g_10), p_71)) , (*l_84)) , g_87[5]), 252UL)), 18446744073709551615UL))))) , l_117) == l_80)) , 0L) > g_81))
            {
                unsigned l_118 = 0xCE71E83BL;
                long long l_127 = 0xAB26F9336AE2794CLL;
                int l_136 = 0xCDB5522DL;
                if ((0xE5L ^ l_118))
                {
                    int l_134[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_134[i] = (-3L);
                    for (l_108 = 0; (l_108 <= 1); l_108 += 1)
                    {
                        int *l_119 = &g_87[8];
                        int **l_120 = &l_119;
                        (*l_120) = l_119;
                        (**l_120) = (((void*)0 != &g_85) && (safe_div_func_int64_t_s_s(((*l_80) >= g_81), (~(g_87[8] < (((((safe_rshift_func_uint8_t_u_u(((*l_80) , (safe_lshift_func_int8_t_s_s(l_127, ((-2L) == ((p_71 == (*l_84)) <= p_71))))), 5)) == 1UL) != g_87[8]) & p_71) != (**l_120)))))));
                    }
                    for (l_108 = 0; (l_108 <= 1); l_108 += 1)
                    {
                        unsigned short l_128 = 5UL;
                        (*l_117) = (*g_85);
                        l_128 = (p_71 | ((p_71 , g_86) ^ p_71));
                    }
                    g_87[8] = p_71;
                    for (g_86 = 4; (g_86 >= 1); g_86 -= 1)
                    {
                        int **l_129 = &l_80;
                        int i, j, k;
                        g_87[8] = 0x68E88EEDL;
                        (*l_129) = l_110[(p_71 + 1)];
                        g_87[6] = (safe_rshift_func_int16_t_s_s((g_72[g_81][(g_81 + 1)][g_81] , ((g_72[(p_71 + 2)][p_71][p_71] , ((g_72[3][0][0] > (safe_rshift_func_uint8_t_u_u(0x5EL, (((((p_71 , ((p_71 ^ p_71) , ((g_87[8] || p_71) ^ g_81))) & g_81) , &g_85) != (void*)0) == 248UL)))) == g_81)) , l_134[1])), p_71));
                    }
                }
                else
                {
                    l_136 = l_135;
                }
                return g_81;
            }
            else
            {
                int *l_143 = &g_87[8];
                union U0 **l_147[5] = {&l_146,&l_146,&l_146,&l_146,&l_146};
                int i;
                if ((*l_80))
                    break;
                (*l_117) = (safe_rshift_func_int16_t_s_s((0x35A1EF97L && (safe_sub_func_int16_t_s_s(((((safe_div_func_int64_t_s_s((l_143 != &g_87[8]), 0x0A51E9D581DC2E7BLL)) != (safe_rshift_func_int16_t_s_s((+p_71), 15))) >= ((void*)0 == &g_85)) >= g_87[8]), (0x5D13469999ABEDA8LL & 0x186C8CC70086F9DFLL)))), 1));
                l_146 = l_146;
                for (l_135 = 0; (l_135 <= 0); l_135 += 1)
                {
                    int *l_148 = (void*)0;
                    (*g_149) = l_148;
                }
            }
            for (g_86 = 1; (g_86 >= 0); g_86 -= 1)
            {
                l_150 = p_71;
            }
        }
    }
    return p_71;
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
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_72[i][j][k], "g_72[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_87[i], "g_87[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_201[i][j].f0, "g_201[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_224.f0, "g_224.f0", print_hash_value);
    transparent_crc(g_224.f1, "g_224.f1", print_hash_value);
    transparent_crc(g_224.f2, "g_224.f2", print_hash_value);
    transparent_crc(g_224.f3, "g_224.f3", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_254, "g_254", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_277[i].f0, "g_277[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_286[i].f0, "g_286[i].f0", print_hash_value);
        transparent_crc(g_286[i].f1, "g_286[i].f1", print_hash_value);
        transparent_crc(g_286[i].f2, "g_286[i].f2", print_hash_value);
        transparent_crc(g_286[i].f3, "g_286[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_310.f0, "g_310.f0", print_hash_value);
    transparent_crc(g_310.f1, "g_310.f1", print_hash_value);
    transparent_crc(g_310.f2, "g_310.f2", print_hash_value);
    transparent_crc(g_310.f3, "g_310.f3", print_hash_value);
    transparent_crc(g_321.f0, "g_321.f0", print_hash_value);
    transparent_crc(g_323.f1, "g_323.f1", print_hash_value);
    transparent_crc(g_323.f2, "g_323.f2", print_hash_value);
    transparent_crc(g_323.f3, "g_323.f3", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_326[i][j][k].f0, "g_326[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_369[i][j][k].f0, "g_369[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_370.f0, "g_370.f0", print_hash_value);
    transparent_crc(g_390.f0, "g_390.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_395[i].f0, "g_395[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_428.f0, "g_428.f0", print_hash_value);
    transparent_crc(g_428.f1, "g_428.f1", print_hash_value);
    transparent_crc(g_428.f2, "g_428.f2", print_hash_value);
    transparent_crc(g_428.f3, "g_428.f3", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_429[i].f0, "g_429[i].f0", print_hash_value);
        transparent_crc(g_429[i].f1, "g_429[i].f1", print_hash_value);
        transparent_crc(g_429[i].f2, "g_429[i].f2", print_hash_value);
        transparent_crc(g_429[i].f3, "g_429[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_430.f0, "g_430.f0", print_hash_value);
    transparent_crc(g_518, "g_518", print_hash_value);
    transparent_crc(g_538.f2, "g_538.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_561[i][j], "g_561[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_574.f0, "g_574.f0", print_hash_value);
    transparent_crc(g_574.f1, "g_574.f1", print_hash_value);
    transparent_crc(g_574.f2, "g_574.f2", print_hash_value);
    transparent_crc(g_574.f3, "g_574.f3", print_hash_value);
    transparent_crc(g_640.f0, "g_640.f0", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    transparent_crc(g_663.f0, "g_663.f0", print_hash_value);
    transparent_crc(g_672.f1, "g_672.f1", print_hash_value);
    transparent_crc(g_672.f2, "g_672.f2", print_hash_value);
    transparent_crc(g_672.f3, "g_672.f3", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_686[i][j][k].f0, "g_686[i][j][k].f0", print_hash_value);
                transparent_crc(g_686[i][j][k].f1, "g_686[i][j][k].f1", print_hash_value);
                transparent_crc(g_686[i][j][k].f2, "g_686[i][j][k].f2", print_hash_value);
                transparent_crc(g_686[i][j][k].f3, "g_686[i][j][k].f3", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_728[i][j][k].f0, "g_728[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_733.f0, "g_733.f0", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_791[i].f0, "g_791[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_799.f0, "g_799.f0", print_hash_value);
    transparent_crc(g_818.f0, "g_818.f0", print_hash_value);
    transparent_crc(g_833.f0, "g_833.f0", print_hash_value);
    transparent_crc(g_833.f1, "g_833.f1", print_hash_value);
    transparent_crc(g_833.f2, "g_833.f2", print_hash_value);
    transparent_crc(g_833.f3, "g_833.f3", print_hash_value);
    transparent_crc(g_835, "g_835", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
