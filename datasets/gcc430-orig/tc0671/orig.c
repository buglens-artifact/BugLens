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
   int f0;
   signed f1 : 2;
   volatile unsigned f2 : 16;
   signed f3 : 20;
   unsigned f4 : 11;
   volatile unsigned f5 : 13;
   unsigned f6 : 28;
   unsigned f7 : 6;
};

union U1 {
   int f0;
   unsigned long long f1;
};

union U2 {
   char * f0;
   unsigned long long f1;
};


static union U1 g_13 = {1L};
static char g_17 = 0xC1L;
static unsigned long long g_42 = 18446744073709551610UL;
static int g_102 = 1L;
static char **g_150 = (void*)0;
static volatile unsigned g_173 = 0x0FF0A8A3L;
static unsigned char g_174 = 0x3CL;
static char g_179 = 6L;
static char *g_178[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
static volatile struct S0 g_201 = {-3L,-0,13,420,36,50,11380,7};
static unsigned char g_232 = 0xC5L;
static volatile struct S0 g_234 = {-1L,0,111,-820,40,49,8322,3};
static struct S0 g_240 = {0x5594B541L,1,48,-89,2,82,536,4};
static struct S0 g_279 = {0x71A6DB7CL,0,201,-329,39,33,351,1};
static int *g_286 = &g_102;
static union U1 g_297 = {0xE4AAB763L};
static volatile struct S0 g_309 = {-1L,-0,51,-512,2,69,3234,1};
static struct S0 *g_339 = (void*)0;
static struct S0 **g_338 = &g_339;
static struct S0 g_346[1] = {{1L,1,188,871,24,84,13352,0}};
static struct S0 g_384[7] = {{0xF5507126L,-1,227,-578,32,32,15624,3},{-1L,1,4,-804,19,40,1261,5},{-1L,1,4,-804,19,40,1261,5},{0xF5507126L,-1,227,-578,32,32,15624,3},{-1L,1,4,-804,19,40,1261,5},{-1L,1,4,-804,19,40,1261,5},{0xF5507126L,-1,227,-578,32,32,15624,3}};
static union U2 g_413 = {0};
static union U2 *g_412 = &g_413;
static char *g_423 = &g_179;
static struct S0 g_424 = {4L,1,120,351,41,12,1694,4};
static struct S0 g_425 = {-1L,-0,233,-971,2,56,15496,3};
static char g_476 = 0x24L;
static struct S0 g_479 = {0x788E6973L,-0,20,-743,35,81,66,5};
static int g_492 = 0x4B416169L;
static struct S0 g_504 = {0x6C894482L,-1,109,344,23,82,13094,6};
static struct S0 *g_503 = &g_504;
static struct S0 g_506 = {-1L,-1,239,382,33,48,2886,4};
static volatile union U2 g_554 = {0};
static volatile union U2 *g_553 = &g_554;
static volatile union U2 **g_552[3] = {&g_553,&g_553,&g_553};
static volatile union U2 ***g_551 = &g_552[2];
static union U1 *g_641[3][6] = {{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13},{&g_13,&g_13,&g_13,&g_13,&g_13,&g_13}};
static volatile char g_647[2][9][1] = {{{0x15L},{0L},{0x15L},{0L},{0x15L},{0L},{0x15L},{0L},{0x15L}},{{0L},{0x15L},{0L},{0x15L},{0L},{0x15L},{0L},{0x15L},{0L}}};



static unsigned short func_1(void);
static unsigned long long func_4(unsigned p_5, union U2 p_6, unsigned p_7, char * p_8);
static unsigned func_9(unsigned p_10, union U1 p_11);
static struct S0 func_14(char * p_15);
static unsigned char func_20(int p_21, char * p_22, long long p_23, union U1 p_24, char * p_25);
static unsigned func_28(char * p_29, union U1 p_30);
static char * func_31(unsigned char p_32, char * p_33, unsigned p_34, unsigned p_35);
static unsigned short func_49(int p_50, char * p_51, char * p_52, char * p_53, char * p_54);
static long long func_55(unsigned char p_56);
static unsigned short func_63(short p_64, unsigned long long p_65, int p_66);
static unsigned short func_1(void)
{
    unsigned long long l_12 = 18446744073709551615UL;
    char *l_475 = &g_476;
    int *l_491[5][2][1] = {{{&g_492},{(void*)0}},{{(void*)0},{&g_492}},{{(void*)0},{&g_492}},{{(void*)0},{(void*)0}},{{&g_492},{(void*)0}}};
    struct S0 *l_505 = &g_506;
    long long l_530[3][7][6] = {{{(-5L),9L,7L,9L,(-5L),9L},{(-1L),9L,0xF9536990EE0F5FFELL,0xB2C5614742BC59E4LL,0xB3396902930E9538LL,0xB2C5614742BC59E4LL},{1L,(-9L),1L,9L,0xAD7B8581B984EC37LL,0xB2C5614742BC59E4LL},{0x37BDC370AB0D36DFLL,9L,0xF9536990EE0F5FFELL,0x0A7B3CB56F7A7FC5LL,0xF9536990EE0F5FFELL,9L},{0xAD7B8581B984EC37LL,(-9L),7L,0x0A7B3CB56F7A7FC5LL,0xCBBBB62A2823697FLL,9L},{0x37BDC370AB0D36DFLL,9L,(-1L),9L,0x37BDC370AB0D36DFLL,9L},{1L,9L,0xAD7B8581B984EC37LL,0xB2C5614742BC59E4LL,0xCBBBB62A2823697FLL,0xB2C5614742BC59E4LL}},{{(-1L),(-9L),(-1L),9L,0xF9536990EE0F5FFELL,0xB2C5614742BC59E4LL},{(-5L),9L,0xAD7B8581B984EC37LL,0x0A7B3CB56F7A7FC5LL,0xAD7B8581B984EC37LL,9L},{0xF9536990EE0F5FFELL,(-9L),(-1L),0x0A7B3CB56F7A7FC5LL,0xB3396902930E9538LL,9L},{(-5L),9L,7L,9L,(-5L),9L},{(-1L),9L,0xF9536990EE0F5FFELL,0xB2C5614742BC59E4LL,0xB3396902930E9538LL,0xB2C5614742BC59E4LL},{1L,(-9L),1L,9L,0xAD7B8581B984EC37LL,0xB2C5614742BC59E4LL},{0x37BDC370AB0D36DFLL,9L,(-1L),9L,(-1L),0xB2C5614742BC59E4LL}},{{7L,9L,(-5L),9L,0xAD7B8581B984EC37LL,0x0A7B3CB56F7A7FC5LL},{(-1L),0x0A7B3CB56F7A7FC5LL,0x37BDC370AB0D36DFLL,0x0A7B3CB56F7A7FC5LL,(-1L),0xB2C5614742BC59E4LL},{0xCBBBB62A2823697FLL,0x0A7B3CB56F7A7FC5LL,7L,(-9L),0xAD7B8581B984EC37LL,(-9L)},{0xB3396902930E9538LL,9L,0xB3396902930E9538LL,0x0A7B3CB56F7A7FC5LL,(-1L),(-9L)},{1L,0xB2C5614742BC59E4LL,7L,9L,7L,0xB2C5614742BC59E4LL},{(-1L),9L,0x37BDC370AB0D36DFLL,9L,0xF9536990EE0F5FFELL,0x0A7B3CB56F7A7FC5LL},{1L,0x0A7B3CB56F7A7FC5LL,(-5L),0x0A7B3CB56F7A7FC5LL,1L,0xB2C5614742BC59E4LL}}};
    unsigned l_532 = 0UL;
    unsigned short l_533 = 0xB63FL;
    char l_541 = (-2L);
    unsigned short l_545 = 0x225EL;
    union U2 *l_547[8][4] = {{&g_413,(void*)0,&g_413,(void*)0},{&g_413,(void*)0,&g_413,(void*)0},{&g_413,(void*)0,&g_413,(void*)0},{&g_413,(void*)0,&g_413,(void*)0},{&g_413,(void*)0,&g_413,(void*)0},{&g_413,(void*)0,&g_413,(void*)0},{&g_413,(void*)0,&g_413,(void*)0},{&g_413,(void*)0,&g_413,(void*)0}};
    unsigned l_578[2];
    long long l_637 = 8L;
    unsigned long long l_662 = 0UL;
    union U2 **l_669 = &g_412;
    union U2 ***l_668 = &l_669;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_578[i] = 3UL;
    g_492 |= ((safe_add_func_int16_t_s_s((func_4(func_9(l_12, g_13), g_413, g_384[5].f6, l_475) ^ l_12), ((void*)0 != &l_475))) <= l_12);
    for (g_13.f1 = (-21); (g_13.f1 > 23); g_13.f1 = safe_add_func_int64_t_s_s(g_13.f1, 9))
    {
        struct S0 ***l_495 = (void*)0;
        struct S0 ***l_496 = (void*)0;
        struct S0 ***l_497 = (void*)0;
        struct S0 **l_498 = &g_339;
        int l_509 = (-1L);
        l_498 = (void*)0;
        g_240.f1 ^= (safe_sub_func_uint16_t_u_u(g_279.f7, (safe_add_func_uint16_t_u_u((((g_201.f0 < (&g_286 != &g_286)) < (g_503 == l_505)) == g_506.f4), (0x0599CDF7L == (g_279.f4 >= 1L))))));
        for (g_240.f0 = (-10); (g_240.f0 <= 21); g_240.f0 = safe_add_func_int64_t_s_s(g_240.f0, 3))
        {
            unsigned short l_510 = 1UL;
            l_510 |= l_509;
            return l_510;
        }
    }
    for (g_174 = 0; (g_174 > 59); g_174 = safe_add_func_uint8_t_u_u(g_174, 6))
    {
        int *l_513 = &g_102;
        char *l_514 = &g_179;
        int **l_515[3];
        char *l_516[9][2][5] = {{{(void*)0,&g_17,&g_179,&g_476,&g_17},{&g_179,&g_179,&g_17,&g_179,(void*)0}},{{&g_179,&g_17,&g_17,&g_179,(void*)0},{(void*)0,&g_17,&g_179,(void*)0,&g_179}},{{&g_179,&g_179,(void*)0,&g_17,(void*)0},{&g_17,&g_179,&g_179,&g_179,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_179,&g_179,&g_179,&g_17,&g_179}},{{(void*)0,&g_179,(void*)0,&g_179,&g_179},{(void*)0,&g_17,&g_179,&g_476,&g_17}},{{(void*)0,&g_17,&g_17,&g_17,&g_17},{(void*)0,(void*)0,(void*)0,&g_179,&g_179}},{{(void*)0,&g_179,(void*)0,&g_17,&g_179},{&g_179,&g_179,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,&g_17,(void*)0},{&g_179,&g_179,(void*)0,(void*)0,(void*)0}},{{(void*)0,&g_17,(void*)0,&g_17,&g_179},{&g_179,&g_476,(void*)0,(void*)0,&g_179}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_515[i] = &l_513;
        (*l_513) &= (l_513 == l_491[4][1][0]);
        if (func_49(g_279.f3, func_31(g_479.f4, func_31((*l_513), l_514, (l_515[0] != (void*)0), g_309.f2), (*l_513), (*l_513)), l_475, l_514, l_516[2][1][3]))
        {
            int *l_521 = &g_492;
            g_286 = &g_492;
            for (g_232 = 0; (g_232 < 26); ++g_232)
            {
                char ***l_522 = &g_150;
                for (g_297.f0 = 0; (g_297.f0 >= 13); g_297.f0 = safe_add_func_uint64_t_u_u(g_297.f0, 2))
                {
                    l_521 = &g_492;
                }
                g_286 = l_491[4][1][0];
                (*l_513) &= (((l_522 == &g_150) ^ g_234.f6) & ((safe_lshift_func_uint16_t_u_u((*l_521), g_346[0].f3)) > 18446744073709551615UL));
            }
        }
        else
        {
            int *l_527 = &g_102;
            for (g_279.f0 = 0; (g_279.f0 <= (-29)); --g_279.f0)
            {
                l_527 = &g_492;
            }
        }
    }
    for (g_297.f1 = (-3); (g_297.f1 == 43); g_297.f1 = safe_add_func_uint16_t_u_u(g_297.f1, 6))
    {
        unsigned long long l_531 = 1UL;
        int l_546 = 0xDE5444A5L;
        char *l_550[1][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        struct S0 ***l_648 = &g_338;
        char *l_661 = &g_476;
        int i, j;
        if ((l_530[1][6][0] & l_531))
        {
            for (g_42 = 0; (g_42 <= 0); g_42 += 1)
            {
                int *l_537 = &g_102;
                if ((l_532 >= l_531))
                {
                    if (l_533)
                        break;
                }
                else
                {
                    int i;
                    g_346[g_42] = g_346[g_42];
                }
                for (g_479.f0 = 0; (g_479.f0 != (-16)); --g_479.f0)
                {
                    int l_536 = 0x67A7A1EFL;
                    for (g_174 = 0; (g_174 <= 3); g_174 += 1)
                    {
                        int **l_538 = (void*)0;
                        int **l_539 = (void*)0;
                        int **l_540 = &g_286;
                        l_536 &= 0xCEA9ACEBL;
                        (*l_540) = l_537;
                    }
                }
            }
        }
        else
        {
            char *l_544 = &g_179;
            g_201.f3 &= l_541;
            (*g_503) = (*l_505);
            g_102 &= ((safe_add_func_uint32_t_u_u(0xE69142EFL, ((void*)0 != l_544))) <= g_240.f3);
            l_546 |= (l_545 != (-1L));
        }
        if ((l_547[0][3] == &g_413))
        {
            unsigned short l_555[3][8] = {{7UL,1UL,0xEA8BL,7UL,65535UL,65535UL,7UL,0xEA8BL},{0x1B77L,0x1B77L,1UL,0x52C9L,7UL,1UL,7UL,0x1B77L},{65535UL,0x1B77L,65535UL,1UL,0x1B77L,0xEA8BL,0xEA8BL,0x1B77L}};
            int i, j;
            if ((safe_sub_func_int64_t_s_s(func_49(l_531, &g_179, l_550[0][5], func_31((g_551 == &g_552[2]), &l_541, (g_346[0].f2 < l_555[1][5]), l_555[1][5]), &l_541), l_555[1][5])))
            {
                for (g_279.f0 = 19; (g_279.f0 < (-15)); --g_279.f0)
                {
                    return g_506.f6;
                }
                for (g_479.f0 = 12; (g_479.f0 == 9); g_479.f0 = safe_sub_func_uint32_t_u_u(g_479.f0, 9))
                {
                    int **l_560 = &g_286;
                    (*l_560) = &g_102;
                    if (l_531)
                        continue;
                }
                (*l_505) = (*g_503);
                for (l_545 = 0; (l_545 <= 21); ++l_545)
                {
                    g_150 = &g_423;
                }
            }
            else
            {
                char **l_565 = &g_178[3];
                g_286 = &g_492;
                for (g_174 = 0; (g_174 != 44); ++g_174)
                {
                    (*g_286) = (g_424.f2 || ((l_565 == &g_178[3]) > g_346[0].f7));
                }
            }
            if (g_279.f4)
            {
                short l_566 = 0L;
                g_424.f3 = l_566;
            }
            else
            {
                int **l_567 = (void*)0;
                int **l_568 = &l_491[2][1][0];
                (*l_568) = (void*)0;
            }
        }
        else
        {
            unsigned long long l_577 = 0UL;
            char *l_606[9][6][4] = {{{&g_476,&g_476,&l_541,&g_476},{&g_476,&l_541,&l_541,&l_541},{&g_476,&g_476,(void*)0,(void*)0},{&g_179,&g_476,&g_17,&g_476},{&g_17,&g_476,&g_476,&g_17},{&g_476,&g_476,&g_17,&g_476}},{{&g_476,&g_476,&l_541,(void*)0},{(void*)0,&g_476,&g_476,&l_541},{&g_179,&l_541,&g_476,&g_476},{&g_179,&g_476,&g_476,&g_179},{(void*)0,&g_476,&l_541,&g_476},{&g_476,&l_541,&g_17,(void*)0}},{{&g_476,(void*)0,&g_476,(void*)0},{&g_17,&l_541,&g_17,&g_476},{&g_179,&g_476,(void*)0,&g_179},{&g_476,&g_476,&l_541,&g_476},{&g_476,&l_541,&l_541,&l_541},{&g_476,&g_476,(void*)0,(void*)0}},{{&g_179,&g_476,&g_17,&g_476},{&g_17,&g_476,&g_476,&g_17},{&g_476,&g_476,&g_17,&g_476},{&g_476,&g_476,&g_476,&g_17},{&l_541,&g_476,&g_179,&g_476},{&g_476,&l_541,&g_476,(void*)0}},{{&g_476,&g_179,&g_179,&g_476},{&l_541,(void*)0,&g_476,&g_179},{(void*)0,&l_541,&g_179,&g_17},{&g_476,&l_541,&g_179,&g_17},{(void*)0,&l_541,(void*)0,&g_179},{&g_476,(void*)0,&g_476,&g_476}},{{&g_476,&g_179,&g_476,(void*)0},{&g_179,&l_541,&g_476,&g_476},{&g_476,&g_476,&g_476,&g_17},{&g_476,&g_17,(void*)0,(void*)0},{(void*)0,(void*)0,&g_179,(void*)0},{&g_476,(void*)0,&g_179,(void*)0}},{{(void*)0,&g_17,&g_476,&g_17},{&l_541,&g_476,&g_179,&g_476},{&g_476,&l_541,&g_476,(void*)0},{&g_476,&g_179,&g_179,&g_476},{&l_541,(void*)0,&g_476,&g_179},{(void*)0,&l_541,&g_179,&g_17}},{{&g_476,&l_541,&g_179,&g_17},{(void*)0,&l_541,(void*)0,&g_179},{&g_476,(void*)0,&g_476,&g_476},{&g_476,&g_179,&l_541,&g_17},{&g_476,(void*)0,&l_541,&l_541},{&g_476,&g_476,&g_179,&g_476}},{{&l_541,&g_179,&g_17,&g_17},{&g_17,&g_17,&g_476,&g_17},{&g_476,&g_17,&l_541,&g_17},{&g_17,&g_179,&l_541,&g_476},{(void*)0,&g_476,&g_476,&l_541},{&l_541,(void*)0,(void*)0,&g_17}}};
            union U2 **l_621 = &l_547[7][1];
            int l_622 = (-6L);
            int i, j, k;
            if ((0xFA5EL | ((((void*)0 != &g_552[2]) < (safe_add_func_uint8_t_u_u(((safe_mod_func_uint16_t_u_u((&l_541 != (void*)0), 65535UL)) && ((safe_sub_func_uint64_t_u_u(g_279.f6, (g_424.f2 & (safe_mod_func_int8_t_s_s((g_42 > l_577), l_531))))) | 0x4890L)), l_531))) == l_578[1])))
            {
                unsigned l_579 = 0xE7C880DAL;
                return l_579;
            }
            else
            {
                int l_590 = 0x6C57527AL;
                char *l_627 = &l_541;
                union U1 l_628[3] = {{0x0259914EL},{0x0259914EL},{0x0259914EL}};
                union U2 l_644 = {0};
                struct S0 *l_649 = &g_425;
                int i;
                l_590 &= ((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s((-6L), g_234.f0)), (safe_lshift_func_int8_t_s_u(l_546, (0xA87B8284L <= l_546))))) <= g_479.f3);
                if ((3L < (safe_rshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint64_t_u_u((g_240.f0 && g_201.f5), (safe_add_func_int8_t_s_s((*g_423), ((void*)0 != &g_492))))) && (0UL <= 4294967295UL)), ((safe_rshift_func_int16_t_s_s(((+(~7UL)) != g_425.f3), g_279.f6)) <= l_531))), g_279.f3)), l_546)), l_577))))
                {
                    char *l_607 = &l_541;
                    char l_610[7][5] = {{(-8L),0x8EL,0x8EL,(-8L),0xB0L},{(-8L),5L,0x95L,0x95L,5L},{0xB0L,0x8EL,0x95L,0x05L,0x05L},{0x8EL,0xB0L,0x8EL,0x95L,0x05L},{5L,(-8L),0x05L,(-8L),5L},{0x8EL,(-8L),0xB0L,5L,0xB0L},{0xB0L,0xB0L,0x05L,5L,0x0DL}};
                    unsigned long long l_613 = 0xE3494E13DA5C2253LL;
                    int i, j;
                    g_240.f1 |= (((g_479.f1 | g_346[0].f2) && ((void*)0 != &g_552[2])) < l_577);
                    (*g_503) = (*g_503);
                    g_201.f3 &= (-3L);
                    if ((&g_102 != &g_492))
                    {
                        long long l_605[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_605[i] = 0L;
                        l_546 = (4UL ^ ((void*)0 != (*g_338)));
                        g_492 = func_49(l_605[1], l_606[2][2][1], &g_17, l_607, func_31(g_13.f0, &g_17, (l_605[1] == ((g_506.f3 <= ((safe_rshift_func_int8_t_s_u(func_63(l_531, g_506.f5, g_506.f0), g_346[0].f0)) & l_610[6][4])) != g_506.f1)), g_346[0].f0));
                    }
                    else
                    {
                        unsigned char l_611 = 252UL;
                        int **l_612 = &l_491[1][1][0];
                        l_611 ^= 0L;
                        (*l_612) = &g_492;
                        return l_613;
                    }
                }
                else
                {
                    unsigned l_620 = 4294967292UL;
                    union U1 **l_642 = &g_641[0][3];
                    if ((safe_rshift_func_int8_t_s_s((7UL < (((!(((safe_add_func_uint32_t_u_u((safe_mod_func_int64_t_s_s((l_590 >= l_546), l_620)), (&g_150 == (void*)0))) < (l_546 ^ ((void*)0 != l_621))) & l_620)) <= 0x87E5L) || l_590)), 3)))
                    {
                        return g_506.f0;
                    }
                    else
                    {
                        int l_638 = (-4L);
                        union U1 *l_639 = (void*)0;
                        union U1 **l_640[7][6][6] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}}};
                        int i, j, k;
                        l_622 = l_577;
                        g_504.f3 &= (((7L == (safe_rshift_func_uint8_t_u_u((func_63((safe_lshift_func_uint16_t_u_s(l_590, (safe_rshift_func_uint8_t_u_u(((safe_lshift_func_uint16_t_u_u(((((safe_rshift_func_uint8_t_u_u(l_622, (g_346[0].f2 < 0xD621L))) < func_63((safe_sub_func_int16_t_s_s(l_577, (0x0287L != g_279.f3))), g_240.f1, l_620)) ^ g_506.f7) < g_425.f4), 4)) < 0UL), g_279.f0)))), g_346[0].f0, l_637) <= 0xC3BA4CE7L), g_506.f1))) & l_638) & l_628[1].f0);
                        g_641[1][1] = l_639;
                        g_479.f3 = (l_642 == l_642);
                    }
                    if (l_577)
                    {
                        int **l_643[6] = {&g_286,&g_286,&g_286,&g_286,&g_286,&g_286};
                        int i;
                        g_286 = &g_492;
                        (*g_286) = func_4(l_620, l_644, g_279.f4, func_31(g_346[0].f4, func_31(((safe_rshift_func_int8_t_s_s((65528UL > (((*g_423) <= l_531) > l_531)), l_590)) <= (*g_286)), l_606[6][4][3], l_628[1].f0, g_234.f6), g_506.f0, l_620));
                    }
                    else
                    {
                        l_546 |= 5L;
                        if (g_647[1][2][0])
                            break;
                        g_425.f3 = ((void*)0 != l_648);
                    }
                }
                (*g_338) = l_649;
            }
            g_479.f1 ^= l_577;
            for (g_506.f0 = 0; (g_506.f0 != 27); g_506.f0++)
            {
                int **l_652 = &l_491[4][1][0];
                int l_657 = 0L;
                unsigned l_658[10] = {0x3571ED39L,0x3571ED39L,0xD365ABA1L,0x3571ED39L,0x3571ED39L,0xD365ABA1L,0x3571ED39L,0x3571ED39L,0xD365ABA1L,0x3571ED39L};
                union U1 l_660 = {-1L};
                union U2 ***l_667 = &l_621;
                int i;
                (*l_652) = &g_102;
                for (l_545 = 0; (l_545 != 46); l_545 = safe_add_func_uint32_t_u_u(l_545, 2))
                {
                    for (g_13.f1 = 11; (g_13.f1 <= 53); g_13.f1 = safe_add_func_uint64_t_u_u(g_13.f1, 5))
                    {
                        char *l_659 = &g_179;
                        if (l_657)
                            break;
                        l_622 = g_309.f6;
                        if (g_201.f7)
                            break;
                    }
                    l_662 ^= g_504.f0;
                    for (g_174 = 0; (g_174 >= 44); ++g_174)
                    {
                        (***l_648) = (*g_503);
                    }
                    if (g_232)
                    {
                        (*l_652) = l_491[4][1][0];
                        l_622 = (safe_mod_func_uint16_t_u_u((l_667 == l_668), 0xFB28L));
                    }
                    else
                    {
                        unsigned char l_670[9] = {0xD9L,1UL,0xD9L,1UL,0xD9L,1UL,0xD9L,1UL,0xD9L};
                        int i;
                        l_670[6] |= (+(-3L));
                        l_657 ^= (g_424.f0 && (*g_423));
                    }
                }
            }
            (*g_338) = (*g_338);
        }
        for (g_232 = (-15); (g_232 >= 6); g_232++)
        {
            return l_531;
        }
    }
    return g_201.f4;
}







static unsigned long long func_4(unsigned p_5, union U2 p_6, unsigned p_7, char * p_8)
{
    char *l_477 = &g_476;
    int l_478 = 0x98714F2DL;
    struct S0 *l_480 = &g_240;
    int *l_481 = &l_478;
    union U1 l_490 = {0L};
    (*l_480) = g_479;
    (*l_481) &= p_5;
    (*l_481) = p_7;
    (*l_480) = (*l_480);
    return g_234.f0;
}







static unsigned func_9(unsigned p_10, union U1 p_11)
{
    char *l_16 = &g_17;
    int l_441[3][1];
    unsigned long long l_443[1][5][7] = {{{0UL,0x5609271F0FB64260LL,0x5609271F0FB64260LL,0UL,0x5609271F0FB64260LL,0x5609271F0FB64260LL,0UL},{18446744073709551612UL,0x7B77027A783D3C20LL,18446744073709551612UL,18446744073709551612UL,0x7B77027A783D3C20LL,18446744073709551612UL,18446744073709551612UL},{0UL,0UL,0xDACDAEB9554B7366LL,0UL,0UL,0xDACDAEB9554B7366LL,0UL},{0x7B77027A783D3C20LL,18446744073709551612UL,18446744073709551612UL,0x7B77027A783D3C20LL,18446744073709551612UL,18446744073709551612UL,0x7B77027A783D3C20LL},{0x5609271F0FB64260LL,0UL,0x5609271F0FB64260LL,0x5609271F0FB64260LL,0UL,0x5609271F0FB64260LL,0x5609271F0FB64260LL}}};
    int *l_449 = &g_102;
    int **l_454 = (void*)0;
    int **l_455 = (void*)0;
    unsigned l_462 = 8UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
            l_441[i][j] = 8L;
    }
    g_425 = func_14(l_16);
    for (p_11.f1 = 0; (p_11.f1 == 2); p_11.f1 = safe_add_func_int64_t_s_s(p_11.f1, 6))
    {
        unsigned short l_446[2][2][3] = {{{65529UL,1UL,65529UL},{0xA23DL,0xA23DL,0xA23DL}},{{65529UL,1UL,65529UL},{0xA23DL,0xA23DL,0xA23DL}}};
        int i, j, k;
        for (g_425.f0 = (-26); (g_425.f0 <= (-18)); ++g_425.f0)
        {
            char *l_439 = (void*)0;
            int *l_445 = (void*)0;
            if (g_424.f2)
            {
                long long l_436 = 0x3D812651C3F98D56LL;
                char *l_440 = &g_179;
                unsigned short l_442 = 0x74B1L;
                int *l_444 = &l_441[0][0];
                (*l_444) = l_443[0][4][2];
                l_445 = &l_441[1][0];
            }
            else
            {
                return l_443[0][4][2];
            }
        }
        if (l_446[0][1][1])
            break;
        for (g_240.f0 = (-7); (g_240.f0 > 5); ++g_240.f0)
        {
            int **l_450 = &g_286;
            int *l_451 = &l_441[0][0];
            (*l_450) = l_449;
            (*l_451) ^= (*g_286);
        }
        for (g_279.f0 = 0; (g_279.f0 >= 0); g_279.f0 -= 1)
        {
            union U2 **l_452[1][3];
            union U2 ***l_453 = &l_452[0][2];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_452[i][j] = &g_412;
            }
            (*l_453) = l_452[0][2];
            return l_441[(g_279.f0 + 2)][g_279.f0];
        }
    }
    g_286 = (void*)0;
    if ((((((safe_mod_func_uint64_t_u_u(g_279.f4, func_63((safe_rshift_func_int8_t_s_u(p_10, g_240.f5)), (((func_63((0UL & ((void*)0 == &l_441[0][0])), ((safe_lshift_func_uint8_t_u_u(g_279.f6, 3)) ^ p_11.f0), (*l_449)) ^ 4294967293UL) && (*l_449)) >= p_11.f1), l_462))) > 0x16ADL) <= (-1L)) <= 0x6DL) || 0x13625011BEFE2CFELL))
    {
        char l_463 = 7L;
        short l_468[1][5];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 5; j++)
                l_468[i][j] = 1L;
        }
        l_463 |= (*l_449);
        (*l_449) &= func_63(g_424.f1, l_463, (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((p_11.f0 <= (l_468[0][0] || ((void*)0 == &l_449))), (safe_mul_func_uint8_t_u_u(247UL, (1UL | 0xF697L))))), 8)));
    }
    else
    {
        int *l_473 = &g_102;
        for (g_279.f0 = 0; (g_279.f0 <= 0); g_279.f0 += 1)
        {
            int *l_474 = &g_102;
            for (l_462 = 0; (l_462 <= 3); l_462 += 1)
            {
                int *l_471[2];
                int **l_472[10][6][4] = {{{&g_286,&l_471[0],&l_471[0],&l_449},{(void*)0,&l_449,&l_449,&l_449},{&l_449,&l_449,&l_471[0],&l_471[0]},{&l_471[1],&l_471[0],&l_471[0],&l_449},{&l_471[1],(void*)0,&l_471[0],&l_471[0]},{&l_471[0],&g_286,&g_286,&l_471[0]}},{{&l_471[0],&g_286,&l_471[0],(void*)0},{&l_449,&l_449,&l_471[1],&l_471[0]},{&g_286,(void*)0,&l_471[0],&l_471[0]},{&g_286,&l_449,&l_449,(void*)0},{&l_449,&g_286,&l_449,&l_471[0]},{&g_286,&g_286,&l_471[0],&l_471[0]}},{{&l_471[0],(void*)0,&l_449,&l_449},{&l_449,&l_471[0],&g_286,&l_471[0]},{&l_471[1],&l_449,(void*)0,&l_449},{(void*)0,&l_449,(void*)0,&l_449},{&l_471[0],&l_471[0],&l_449,&l_471[0]},{&l_471[0],(void*)0,&g_286,&l_449}},{{(void*)0,&l_471[1],&l_471[0],&l_471[0]},{(void*)0,&l_449,&l_471[0],&l_471[0]},{&g_286,&g_286,&l_471[1],&l_471[0]},{&l_471[0],&l_471[0],&l_471[1],&l_449},{&g_286,&l_471[0],(void*)0,&l_471[0]},{(void*)0,&l_471[1],(void*)0,(void*)0}},{{&g_286,(void*)0,&l_471[1],(void*)0},{&l_471[0],(void*)0,&l_471[1],&l_471[0]},{&l_471[1],&l_471[0],&l_449,(void*)0},{&l_471[0],(void*)0,&l_471[0],&l_471[0]},{(void*)0,(void*)0,&l_471[1],&l_449},{&l_471[0],&l_471[1],&l_449,&g_286}},{{&l_471[0],&l_471[0],(void*)0,&l_471[0]},{&l_471[1],(void*)0,&l_471[0],&g_286},{&l_471[0],&l_471[1],&l_471[0],&l_471[1]},{&l_449,&l_471[0],&l_449,&l_471[0]},{(void*)0,&l_449,&l_471[0],&l_471[0]},{&l_471[0],&l_471[0],&l_449,(void*)0}},{{(void*)0,&l_471[0],(void*)0,&l_471[1]},{(void*)0,&g_286,&l_471[0],(void*)0},{&l_471[0],&g_286,&l_449,&l_471[1]},{&g_286,&l_471[0],&l_449,(void*)0},{&l_471[1],&l_471[0],(void*)0,&l_471[0]},{&g_286,&l_449,&l_471[1],&l_471[0]}},{{&l_449,&l_471[0],&g_286,&l_471[1]},{(void*)0,&l_471[1],&l_471[0],&g_286},{&l_449,&g_286,&l_471[0],&l_449},{&g_286,&l_471[0],&l_449,&l_449},{&l_449,&l_471[1],&l_449,&l_449},{(void*)0,&l_471[1],&l_449,&l_449}},{{&l_449,&g_286,&g_286,&l_449},{&g_286,(void*)0,(void*)0,(void*)0},{&l_449,&l_471[0],&l_471[1],&l_471[0]},{&l_471[0],&l_449,&g_286,&g_286},{&l_449,(void*)0,&l_471[1],(void*)0},{&l_449,&l_449,&g_286,&l_449}},{{&l_471[0],(void*)0,&l_471[1],(void*)0},{&l_449,&l_471[0],(void*)0,&l_449},{&g_286,(void*)0,&g_286,&l_449},{&l_449,&l_471[0],&l_449,(void*)0},{(void*)0,&g_286,&l_449,&l_471[1]},{&l_449,(void*)0,&l_449,&l_471[0]}}};
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_471[i] = &l_441[2][0];
                l_473 = l_471[0];
            }
            for (g_240.f0 = 0; (g_240.f0 <= 0); g_240.f0 += 1)
            {
                l_473 = l_474;
                return g_201.f4;
            }
        }
    }
    return p_11.f0;
}







static struct S0 func_14(char * p_15)
{
    unsigned l_36 = 18446744073709551612UL;
    char *l_37 = &g_17;
    int l_40[3];
    unsigned char l_330 = 0xF8L;
    int **l_359 = &g_286;
    struct S0 ***l_369 = (void*)0;
    int i;
    for (i = 0; i < 3; i++)
        l_40[i] = 8L;
    if ((safe_mul_func_uint16_t_u_u((((((func_20((safe_mul_func_int16_t_s_s((func_28(func_31(l_36, l_37, g_17, (safe_add_func_int16_t_s_s(l_40[2], g_13.f0))), g_13) & ((safe_add_func_int16_t_s_s(l_40[0], g_232)) ^ l_40[2])), 0x4947L)), l_37, l_40[2], g_297, l_37) || g_201.f5) < l_36) && l_36) == l_40[0]) || l_40[2]), l_40[1])))
    {
        int *l_335[9] = {&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102,&g_102};
        struct S0 *l_343 = (void*)0;
        int l_344 = 0L;
        int i;
        for (g_17 = 0; (g_17 != 21); ++g_17)
        {
            return g_240;
        }
        for (g_17 = (-30); (g_17 == (-18)); g_17++)
        {
            unsigned l_329 = 4294967292UL;
            int **l_331 = &g_286;
            int l_345 = 0x47767B34L;
            if ((l_329 > l_330))
            {
                int **l_332 = (void*)0;
                if ((l_331 != l_332))
                {
                    if ((*g_286))
                        break;
                }
                else
                {
                    int *l_336[9][4] = {{&g_102,&g_102,&l_40[2],&g_102},{&g_102,&l_40[2],&l_40[2],&g_102},{&l_40[2],&g_102,&l_40[2],&l_40[2]},{&g_102,&g_102,&l_40[2],&g_102},{&g_102,&l_40[2],&l_40[2],&g_102},{&l_40[2],&g_102,&l_40[2],&l_40[2]},{&l_40[2],&l_40[2],&g_102,&l_40[2]},{&l_40[2],&l_40[2],&l_40[2],&l_40[2]},{&l_40[2],&l_40[2],&l_40[2],&l_40[2]}};
                    struct S0 ***l_340 = &g_338;
                    int i, j;
                    for (g_297.f0 = 0; (g_297.f0 == 11); ++g_297.f0)
                    {
                        int *l_337[9][6][4] = {{{(void*)0,&g_102,(void*)0,&l_40[1]},{&g_102,(void*)0,&l_40[0],(void*)0},{&g_102,(void*)0,(void*)0,&g_102},{(void*)0,(void*)0,&g_102,(void*)0},{(void*)0,(void*)0,&g_102,&l_40[1]},{(void*)0,&g_102,(void*)0,&l_40[1]}},{{&g_102,(void*)0,&l_40[0],(void*)0},{&g_102,(void*)0,(void*)0,&g_102},{(void*)0,(void*)0,&g_102,(void*)0},{(void*)0,(void*)0,&g_102,&l_40[1]},{(void*)0,&g_102,(void*)0,&l_40[1]},{&g_102,(void*)0,&l_40[0],(void*)0}},{{&g_102,(void*)0,(void*)0,&g_102},{(void*)0,(void*)0,&g_102,(void*)0},{(void*)0,(void*)0,&g_102,&l_40[1]},{(void*)0,&g_102,(void*)0,&l_40[1]},{&g_102,(void*)0,&l_40[0],(void*)0},{&g_102,(void*)0,(void*)0,&g_102}},{{(void*)0,(void*)0,&g_102,(void*)0},{(void*)0,(void*)0,&g_102,&l_40[1]},{(void*)0,&g_102,&g_102,(void*)0},{&l_40[0],(void*)0,(void*)0,&l_40[1]},{&l_40[0],&g_102,&g_102,&l_40[0]},{&g_102,&g_102,&g_102,&l_40[1]}},{{&l_40[1],(void*)0,&g_102,(void*)0},{&g_102,&l_40[0],&g_102,(void*)0},{&l_40[0],(void*)0,(void*)0,&l_40[1]},{&l_40[0],&g_102,&g_102,&l_40[0]},{&g_102,&g_102,&g_102,&l_40[1]},{&l_40[1],(void*)0,&g_102,(void*)0}},{{&g_102,&l_40[0],&g_102,(void*)0},{&l_40[0],(void*)0,(void*)0,&l_40[1]},{&l_40[0],&g_102,&g_102,&l_40[0]},{&g_102,&g_102,&g_102,&l_40[1]},{&l_40[1],(void*)0,&g_102,(void*)0},{&g_102,&l_40[0],&g_102,(void*)0}},{{&l_40[0],(void*)0,(void*)0,&l_40[1]},{&l_40[0],&g_102,&g_102,&l_40[0]},{&g_102,&g_102,&g_102,&l_40[1]},{&l_40[1],(void*)0,&g_102,(void*)0},{&g_102,&l_40[0],&g_102,(void*)0},{&l_40[0],(void*)0,(void*)0,&l_40[1]}},{{&l_40[0],&g_102,&g_102,&l_40[0]},{&g_102,&g_102,&g_102,&l_40[1]},{&l_40[1],&g_102,(void*)0,&l_40[0]},{(void*)0,(void*)0,&l_40[0],&l_40[0]},{&l_40[1],&g_102,&g_102,&g_102},{&l_40[1],&l_40[0],&l_40[0],&l_40[1]}},{{(void*)0,&l_40[0],(void*)0,&g_102},{&g_102,&g_102,(void*)0,&l_40[0]},{(void*)0,(void*)0,&l_40[0],&l_40[0]},{&l_40[1],&g_102,&g_102,&g_102},{&l_40[1],&l_40[0],&l_40[0],&l_40[1]},{(void*)0,&l_40[0],(void*)0,&g_102}}};
                        int i, j, k;
                        (*l_331) = l_335[0];
                    }
                    (*l_340) = g_338;
                }
                l_344 &= (safe_mul_func_int8_t_s_s((l_343 != (*g_338)), (**l_331)));
            }
            else
            {
                l_345 ^= (**l_331);
            }
        }
        return g_346[0];
    }
    else
    {
        unsigned char l_347 = 0x34L;
        unsigned char l_348 = 255UL;
        char **l_387 = &g_178[3];
        int l_392 = 0x73057089L;
        char *l_411 = &g_179;
        if (l_347)
        {
            unsigned l_351 = 0x88CD3155L;
            int l_356 = (-4L);
            int **l_357 = &g_286;
            (*g_286) = (l_348 | (safe_mul_func_uint8_t_u_u(l_351, ((safe_add_func_int32_t_s_s(l_351, ((*p_15) || ((((((-1L) > (l_347 == ((safe_lshift_func_uint8_t_u_s((l_36 > (l_356 && l_347)), 6)) && g_17))) | (-1L)) != l_348) <= g_240.f1) >= g_309.f2)))) || 0xD3D2653FL))));
            for (g_179 = 3; (g_179 >= 0); g_179 -= 1)
            {
                int ***l_358[3][6][7];
                int i, j, k;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 6; j++)
                    {
                        for (k = 0; k < 7; k++)
                            l_358[i][j][k] = &l_357;
                    }
                }
                (*g_286) &= 2L;
                l_359 = l_357;
                (*l_357) = &g_102;
            }
            for (g_42 = 0; (g_42 <= 0); g_42 += 1)
            {
                int i;
                return g_346[g_42];
            }
        }
        else
        {
            char *l_380[5] = {&g_17,&g_17,&g_17,&g_17,&g_17};
            long long l_383 = 0L;
            int *l_393 = (void*)0;
            int l_394 = 1L;
            int i;
            for (g_232 = 0; (g_232 >= 38); g_232 = safe_add_func_int64_t_s_s(g_232, 7))
            {
                for (g_297.f0 = 0; (g_297.f0 <= 3); g_297.f0 = safe_add_func_uint16_t_u_u(g_297.f0, 1))
                {
                    unsigned l_364 = 0xA5B50741L;
                    char *l_379 = &g_179;
                    if (((0x1611275BL | l_364) | l_348))
                    {
                        short l_378 = 7L;
                        int l_381 = (-1L);
                        int *l_382[3][5][9] = {{{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]}},{{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]}},{{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]},{&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0],&l_40[0],&l_40[2],&l_40[0]}}};
                        int i, j, k;
                        l_383 |= ((safe_rshift_func_uint8_t_u_s(func_49((safe_rshift_func_int16_t_s_u(((l_369 != &g_338) || ((l_348 || (safe_sub_func_int16_t_s_s(g_13.f0, ((~((((((*g_286) & (safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(0x2F25L, (((g_234.f3 ^ l_364) ^ (safe_lshift_func_int8_t_s_s(0x85L, l_378))) | 0UL))), 3))) >= g_240.f1) && 0x20L) > 0L) ^ (**l_359))) & l_364)))) | (*p_15))), l_348)), p_15, p_15, l_379, l_380[4]), 4)) == l_381);
                        return g_384[5];
                    }
                    else
                    {
                        char ***l_385 = (void*)0;
                        char ***l_386[7] = {&g_150,&g_150,&g_150,&g_150,&g_150,&g_150,&g_150};
                        int i;
                        l_387 = &g_178[1];
                    }
                }
            }
            l_392 = ((g_240.f4 <= (0xC46F6058557AE5AELL == (safe_mod_func_uint32_t_u_u((l_348 <= (3UL || (safe_sub_func_uint16_t_u_u(l_348, 6UL)))), (*g_286))))) == l_383);
            l_394 &= (*g_286);
        }
        (*g_286) ^= l_348;
        (**l_359) |= 0x9142D2C3L;
        (*g_286) = (((1UL && (**l_359)) && ((safe_rshift_func_uint8_t_u_u((**l_359), 0)) > g_346[0].f6)) && (((safe_add_func_int16_t_s_s((safe_add_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((**l_359) <= (((safe_rshift_func_int16_t_s_s(1L, ((safe_mod_func_int64_t_s_s(((*p_15) <= (((safe_rshift_func_int16_t_s_s(g_346[0].f7, 1)) != (safe_lshift_func_uint8_t_u_s(((void*)0 != l_411), l_347))) || 9L)), l_347)) != l_347))) ^ g_17) <= g_240.f1)), l_348)) >= l_348), g_232)), (**l_359))) >= l_392) >= (-7L)));
    }
    for (g_174 = 0; (g_174 <= 6); g_174 += 1)
    {
        union U2 **l_414 = &g_412;
        unsigned long long l_417[2];
        char l_422 = 0x85L;
        int i;
        for (i = 0; i < 2; i++)
            l_417[i] = 0x6153479567EB1FFELL;
        (*l_414) = g_412;
        (**l_359) = (safe_mod_func_int8_t_s_s(l_417[0], func_49(l_417[0], func_31((safe_mod_func_int16_t_s_s((**l_359), ((safe_rshift_func_int16_t_s_u((**l_359), (((**l_359) == func_63(l_422, (**l_359), (**l_359))) || l_422))) & g_346[0].f7))), g_423, l_422, l_417[1]), p_15, &l_422, p_15)));
        return g_384[g_174];
    }
    return g_424;
}







static unsigned char func_20(int p_21, char * p_22, long long p_23, union U1 p_24, char * p_25)
{
    int *l_298 = &g_102;
    unsigned short l_304 = 0x2BABL;
    short l_323 = (-9L);
    char l_324 = 1L;
    l_298 = l_298;
    for (g_179 = 0; (g_179 == 4); g_179 = safe_add_func_uint16_t_u_u(g_179, 6))
    {
        unsigned char l_301 = 1UL;
        volatile struct S0 *l_310 = &g_201;
        if ((*g_286))
            break;
        l_301 &= (*g_286);
        (*l_298) = (0x3604912DL && ((safe_mod_func_uint16_t_u_u(g_234.f1, func_63(l_304, ((p_21 != 0x0E6EL) != (safe_rshift_func_uint16_t_u_s(g_102, (safe_rshift_func_int8_t_s_u((*l_298), g_279.f3))))), p_21))) != p_23));
        (*l_310) = g_309;
    }
    l_324 |= ((safe_mod_func_uint32_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_int64_t_s_s((*l_298), func_63(((safe_add_func_uint32_t_u_u((((((safe_lshift_func_uint16_t_u_s(((-1L) && p_23), 2)) < ((safe_add_func_int32_t_s_s((((p_21 < 0UL) < p_24.f0) != (*l_298)), ((((g_279.f2 & 0xCEL) >= 0xFFB33DBDL) ^ 0xB6D9E19FL) == g_240.f4))) != (*l_298))) != (*l_298)) | 0x92L) > (*p_22)), 0x8ED6D052L)) == (*l_298)), l_323, g_240.f6))), g_240.f7)), 0x3B6A064BL)) >= (*l_298));
    return p_23;
}







static unsigned func_28(char * p_29, union U1 p_30)
{
    int l_48 = 0x49F2B782L;
    char *l_177 = (void*)0;
    int *l_276 = &g_102;
    struct S0 *l_280 = &g_279;
    int l_283 = 0x97742400L;
    long long l_284 = 0xCB8241A096EA88E2LL;
    (*l_276) = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(l_48, 0L)), func_49(((func_55(p_30.f0) >= 0x11769B01DD78287FLL) > (safe_unary_minus_func_uint64_t_u(((safe_sub_func_int64_t_s_s((g_173 != (0x635FBB508EA8A6ABLL ^ g_174)), (safe_lshift_func_uint16_t_u_s(p_30.f0, g_174)))) <= p_30.f0)))), l_177, p_29, g_178[3], l_177)));
    (*l_276) = (safe_lshift_func_int8_t_s_u((*l_276), 5));
    (*l_280) = g_279;
    if (((-5L) | (g_279.f0 < func_63((p_30.f0 | (safe_rshift_func_uint8_t_u_u((l_283 & ((*l_276) == (*l_276))), 1))), l_284, g_240.f7))))
    {
        int **l_285[5];
        char *l_288 = (void*)0;
        unsigned short l_292 = 0x2F5BL;
        int i;
        for (i = 0; i < 5; i++)
            l_285[i] = &l_276;
        g_286 = &l_48;
        g_286 = &g_102;
        g_286 = &g_102;
        for (g_174 = 0; (g_174 <= 4); g_174 += 1)
        {
            char *l_289 = &g_179;
            int l_293 = 0L;
            int i;
            (*g_286) = (safe_unary_minus_func_uint32_t_u((g_174 ^ func_49((p_30.f0 < (~(*l_276))), l_288, l_289, p_29, func_31(((g_279.f6 != (safe_sub_func_int16_t_s_s(p_30.f0, (((p_30.f0 <= p_30.f0) | (*g_286)) == l_292)))) ^ p_30.f0), p_29, l_293, p_30.f0)))));
        }
    }
    else
    {
        char l_294 = 1L;
        (*l_276) ^= ((l_294 == l_294) < (&p_29 == &g_178[3]));
        if ((&g_150 != (void*)0))
        {
            (*l_276) = p_30.f0;
            (*g_286) |= p_30.f0;
        }
        else
        {
            (*l_276) = (*g_286);
        }
    }
    return g_201.f7;
}







static char * func_31(unsigned char p_32, char * p_33, unsigned p_34, unsigned p_35)
{
    unsigned short l_41 = 1UL;
    char *l_43 = (void*)0;
    l_41 &= 0x55F1BB13L;
    g_42 |= 4L;
    return l_43;
}







static unsigned short func_49(int p_50, char * p_51, char * p_52, char * p_53, char * p_54)
{
    unsigned l_182 = 0UL;
    struct S0 *l_239 = &g_240;
    struct S0 **l_238 = &l_239;
    int l_266 = 0x707066A4L;
    if ((safe_mul_func_uint16_t_u_u(l_182, func_63(l_182, p_50, l_182))))
    {
        unsigned l_185 = 8UL;
        int l_189 = (-7L);
        char *l_196 = &g_179;
        for (g_13.f1 = (-2); (g_13.f1 != 13); g_13.f1 = safe_add_func_uint32_t_u_u(g_13.f1, 5))
        {
            char l_229 = 0x20L;
            int l_233 = 0xC2EB08BFL;
            int *l_235 = &g_102;
            if (l_185)
            {
                unsigned l_186[2][2][1];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 2; j++)
                    {
                        for (k = 0; k < 1; k++)
                            l_186[i][j][k] = 1UL;
                    }
                }
                l_186[0][0][0] = 0L;
            }
            else
            {
                char *l_197 = &g_17;
                unsigned long long l_199 = 18446744073709551611UL;
                volatile struct S0 *l_202 = &g_201;
                for (p_50 = (-28); (p_50 == 8); ++p_50)
                {
                    l_189 = g_179;
                    if ((p_50 == (safe_lshift_func_uint8_t_u_s(g_173, 6))))
                    {
                        return g_17;
                    }
                    else
                    {
                        int l_198 = 0x4DA1E438L;
                        int *l_200 = &l_198;
                        (*l_200) = ((((safe_mul_func_int16_t_s_s(func_63(p_50, (safe_mod_func_int64_t_s_s((-5L), 0x62F218DAE918E3CBLL)), (l_196 == l_197)), p_50)) & (l_198 && (p_50 ^ 2L))) > g_179) || l_199);
                    }
                }
                (*l_202) = g_201;
                for (l_189 = 3; (l_189 >= 0); l_189 -= 1)
                {
                    int l_205 = (-1L);
                    int i;
                    if ((safe_lshift_func_int8_t_s_u(l_205, 6)))
                    {
                        int *l_206[7];
                        char *l_221[6][8] = {{&g_17,(void*)0,(void*)0,&g_17,&g_179,(void*)0,&g_17,&g_17},{&g_17,&g_179,&g_17,&g_17,&g_179,&g_17,&g_179,&g_17},{(void*)0,&g_179,(void*)0,&g_17,&g_17,(void*)0,&g_179,(void*)0},{&g_179,&g_17,&g_17,&g_17,&g_179,&g_179,&g_17,&g_17},{&g_179,&g_179,&g_17,&g_17,&g_17,&g_179,&g_179,&g_17},{(void*)0,&g_17,&g_17,(void*)0,&g_179,(void*)0,&g_17,&g_17}};
                        int i, j;
                        for (i = 0; i < 7; i++)
                            l_206[i] = &g_102;
                        p_50 = g_102;
                        l_233 |= (((p_50 != (((((safe_rshift_func_int8_t_s_s(((func_63(((safe_add_func_int32_t_s_s((4294967295UL & (+((func_63(((safe_lshift_func_int16_t_s_u(((+(safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_int8_t_s_s((((((safe_mul_func_int16_t_s_s((((l_185 == ((g_13.f1 & 6L) && (((void*)0 != l_221[3][4]) || (safe_unary_minus_func_uint16_t_u(((safe_lshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_int64_t_s_s((l_229 || ((safe_sub_func_uint16_t_u_u(func_63((((l_205 == 0x474EL) == p_50) & 0x3436L), g_179, l_185), p_50)) || g_232)), p_50)) && l_182), g_201.f7)), 4)) | 2L)))))) || g_102) ^ p_50), p_50)) || p_50) ^ g_174) < 0x9EL) <= l_199), g_174)), l_229)), l_229))) && g_201.f2), l_205)) || (-1L)), g_102, g_232) > 0L) > l_182))), p_50)) != p_50), l_199, g_179) | l_199) && 0L), 1)) < g_42) ^ 0x728450BEL) == 1UL) <= 0x23AF13D7B9707EC0LL)) == l_199) & l_182);
                        (*l_202) = g_234;
                    }
                    else
                    {
                        return l_185;
                    }
                }
            }
            if (p_50)
                continue;
            (*l_235) ^= g_201.f6;
        }
        return l_182;
    }
    else
    {
        char **l_264 = &g_178[0];
        int l_269[6][5] = {{0xECB08BCFL,7L,(-5L),(-5L),7L},{0x400BED7BL,0x9870D56FL,(-5L),(-1L),(-1L)},{0x9870D56FL,0x400BED7BL,0x9870D56FL,(-5L),(-1L)},{7L,0xECB08BCFL,(-1L),0xECB08BCFL,7L},{0x9870D56FL,0xECB08BCFL,0x400BED7BL,7L,0x400BED7BL},{0x400BED7BL,0x400BED7BL,(-1L),7L,0L}};
        int l_272[5][1][9] = {{{2L,0xBD07F21CL,0xBD07F21CL,2L,3L,0xB8BE3C6FL,3L,2L,0xBD07F21CL}},{{3L,3L,(-1L),0xB8BE3C6FL,6L,0xB8BE3C6FL,(-1L),3L,3L}},{{0xBD07F21CL,2L,3L,0xB8BE3C6FL,(-1L),6L,2L,2L,6L}},{{0xBD07F21CL,6L,0x46429664L,6L,0xBD07F21CL,0xB8BE3C6FL,0xB8BE3C6FL,0xBD07F21CL,6L}},{{2L,(-1L),2L,0xB8BE3C6FL,0x46429664L,0x46429664L,0xB8BE3C6FL,2L,(-1L)}}};
        int i, j, k;
        for (g_13.f0 = 0; (g_13.f0 <= (-7)); g_13.f0 = safe_sub_func_uint16_t_u_u(g_13.f0, 6))
        {
            struct S0 ***l_241 = &l_238;
            int *l_265[2][4][5] = {{{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,(void*)0,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,(void*)0,&g_102,&g_102}},{{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,(void*)0,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,&g_102,&g_102},{&g_102,&g_102,&g_102,(void*)0,&g_102}}};
            int i, j, k;
            (*l_241) = l_238;
            g_234.f3 = (safe_mod_func_uint64_t_u_u((safe_lshift_func_int16_t_s_u(((g_234.f2 & (safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(g_240.f6, (safe_mul_func_int16_t_s_s(0x5E6DL, p_50)))), (-9L)))) | ((safe_rshift_func_uint8_t_u_s(248UL, 7)) == l_182)), g_179)), (safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(l_182, (-7L))), 4294967295UL))));
            l_266 = func_63((safe_mod_func_uint16_t_u_u(0x5E4FL, p_50)), (safe_add_func_uint16_t_u_u(func_63(((func_63((((safe_rshift_func_uint8_t_u_u(((void*)0 == l_264), 5)) <= p_50) | (+l_182)), p_50, l_182) | g_42) > g_201.f2), g_240.f4, g_240.f1), g_179)), p_50);
        }
        for (g_240.f0 = 0; (g_240.f0 == 23); g_240.f0 = safe_add_func_uint32_t_u_u(g_240.f0, 1))
        {
            if (l_269[1][3])
                break;
        }
        for (g_102 = 0; (g_102 < (-29)); g_102--)
        {
            int *l_273 = &l_266;
            (*l_273) ^= l_272[2][0][6];
        }
    }
    (**l_238) = g_240;
    g_240.f1 &= (g_234.f4 <= func_63(l_182, (g_42 || g_179), (safe_mod_func_int32_t_s_s(l_182, l_182))));
    return g_240.f6;
}







static long long func_55(unsigned char p_56)
{
    unsigned long long l_76 = 1UL;
    if (p_56)
    {
        int l_86 = 1L;
        int l_105 = 0x14567548L;
        char *l_113[3];
        char **l_112[9] = {&l_113[0],&l_113[0],&l_113[0],&l_113[0],&l_113[0],&l_113[0],&l_113[0],&l_113[0],&l_113[0]};
        char ***l_111 = &l_112[8];
        unsigned char l_114[10][7][1] = {{{0xF5L},{3UL},{0xEDL},{0x9DL},{0xCFL},{0UL},{255UL}},{{1UL},{255UL},{1UL},{255UL},{1UL},{255UL},{0UL}},{{0xCFL},{0x9DL},{0xEDL},{3UL},{0xF5L},{255UL},{0xFBL}},{{0UL},{0UL},{249UL},{0xFBL},{0UL},{0xEDL},{0UL}},{{0xFBL},{249UL},{1UL},{0UL},{255UL},{3UL},{0x2CL}},{{255UL},{0xF5L},{1UL},{0x3DL},{0UL},{0x7DL},{0x9DL}},{{0UL},{255UL},{0UL},{0x9DL},{0x7DL},{0UL},{0x3DL}},{{1UL},{0xF5L},{255UL},{0x2CL},{3UL},{255UL},{0UL}},{{1UL},{249UL},{0xFBL},{0UL},{0xEDL},{0UL},{0xFBL}},{{249UL},{1UL},{0UL},{255UL},{3UL},{0x2CL},{255UL}}};
        long long l_127 = 0x310FB7A05A861DE5LL;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_113[i] = (void*)0;
        for (g_42 = 9; (g_42 >= 13); g_42 = safe_add_func_int8_t_s_s(g_42, 1))
        {
            char ***l_59 = (void*)0;
            char *l_62 = &g_17;
            char **l_61[1][1];
            char ***l_60 = &l_61[0][0];
            int l_67 = 4L;
            int *l_104 = (void*)0;
            unsigned l_106 = 0UL;
            unsigned short l_120 = 0UL;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 1; j++)
                    l_61[i][j] = &l_62;
            }
            (*l_60) = (void*)0;
            l_105 |= ((func_63(l_67, (safe_add_func_int64_t_s_s((safe_rshift_func_int8_t_s_u((-9L), (safe_mul_func_uint8_t_u_u(0UL, (safe_sub_func_uint8_t_u_u((p_56 != (l_76 ^ (safe_add_func_uint64_t_u_u(g_13.f0, (safe_unary_minus_func_uint32_t_u((safe_lshift_func_int16_t_s_s((((p_56 || (((safe_mod_func_int64_t_s_s((safe_rshift_func_int16_t_s_u(((g_42 >= 0x639B6AF4L) ^ g_13.f0), l_86)), g_13.f0)) || l_76) & 0x5EFF85A0455D89F8LL)) != l_86) <= p_56), 13)))))))), l_86)))))), 7L)), g_17) > p_56) ^ 0L);
            g_102 = ((((l_106 != (-3L)) && (safe_mod_func_uint64_t_u_u((func_63(func_63(l_76, g_13.f0, (safe_lshift_func_int16_t_s_s(p_56, g_42))), g_13.f0, (l_86 >= p_56)) == l_105), p_56))) == g_102) == 0UL);
            if ((((~((void*)0 == l_111)) & ((((l_114[7][3][0] ^ (safe_unary_minus_func_int8_t_s(func_63(func_63((0xEC191E6A7F8EC64ALL < l_76), p_56, (safe_lshift_func_uint16_t_u_u((((((&l_61[0][0] != &l_112[8]) <= (safe_mul_func_uint16_t_u_u(((void*)0 != &l_61[0][0]), g_42))) == p_56) && 9UL) >= (-9L)), g_102))), p_56, g_42)))) != l_76) | g_13.f0) <= l_120)) > g_102))
            {
                int l_131 = 0L;
                int *l_132 = &l_67;
                for (l_120 = 0; (l_120 <= 8); l_120 += 1)
                {
                    int *l_130[10] = {&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105,&l_105};
                    int i;
                    g_102 |= (p_56 || (+(safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(0x5088L, 6)), ((safe_sub_func_int8_t_s_s(l_76, (l_86 >= l_127))) > 0x510901DBL)))));
                    l_131 = (safe_rshift_func_int16_t_s_u(p_56, 12));
                    for (g_13.f0 = 0; (g_13.f0 >= 0); g_13.f0 -= 1)
                    {
                        int i, j, k;
                        g_102 ^= l_114[(l_120 + 1)][(g_13.f0 + 6)][g_13.f0];
                    }
                }
                (*l_132) &= p_56;
            }
            else
            {
                unsigned l_133 = 0x8910D5BEL;
                int l_138 = (-6L);
                for (p_56 = 0; (p_56 <= 8); p_56 += 1)
                {
                    int *l_134 = (void*)0;
                    int *l_135 = &l_86;
                    (*l_135) |= func_63(g_102, p_56, l_133);
                }
                for (l_76 = 0; (l_76 < 37); l_76++)
                {
                    for (g_13.f1 = 0; (g_13.f1 <= 8); g_13.f1 += 1)
                    {
                        if (g_102)
                            break;
                    }
                }
                l_138 = 0x11BA0C28L;
            }
        }
        g_102 ^= (+(+(-3L)));
    }
    else
    {
        unsigned l_141[6][5] = {{4294967295UL,4294967295UL,4294967295UL,0x87175307L,0x87175307L},{3UL,4294967295UL,3UL,0x2090DF5CL,4294967295UL},{0x25E376B2L,0x87175307L,4294967295UL,0x2090DF5CL,3UL},{4294967295UL,4294967295UL,0x87175307L,0x87175307L,4294967295UL},{4294967295UL,4294967295UL,4294967295UL,3UL,0x33710A17L},{4294967295UL,4294967295UL,3UL,0x62D90DD5L,0xC0CCAC75L}};
        int i, j;
        for (g_17 = (-16); (g_17 == 17); g_17 = safe_add_func_int16_t_s_s(g_17, 5))
        {
            unsigned long long l_147 = 0x25D3E5EC2F7F9317LL;
            char *l_149 = &g_17;
            char **l_148 = &l_149;
            int *l_169 = &g_102;
            l_141[5][2] |= l_76;
            for (g_13.f1 = 0; (g_13.f1 <= 4); g_13.f1 += 1)
            {
                int *l_142 = (void*)0;
                int i, j;
                g_102 &= (0x9086L ^ l_141[(g_13.f1 + 1)][g_13.f1]);
                if (((safe_add_func_uint16_t_u_u(l_76, (safe_rshift_func_uint8_t_u_s(l_76, (l_147 | 1UL))))) | g_17))
                {
                    return l_76;
                }
                else
                {
                    int l_167 = 0xCEA6A748L;
                    char *l_168 = (void*)0;
                    if ((g_17 != (g_13.f0 | p_56)))
                    {
                        int *l_151 = &g_102;
                        g_150 = l_148;
                        (*l_151) = l_76;
                    }
                    else
                    {
                        int *l_152 = &g_102;
                        (*l_152) = (4UL != ((&g_150 != (void*)0) ^ l_141[1][2]));
                        (*l_152) = (safe_sub_func_uint64_t_u_u((safe_mod_func_int8_t_s_s((*l_152), (safe_mul_func_int8_t_s_s((((0x9CL == (+p_56)) == (safe_sub_func_uint16_t_u_u(p_56, (-9L)))) ^ g_17), l_76)))), ((safe_add_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((p_56 > (((safe_mul_func_uint8_t_u_u(p_56, p_56)) >= l_76) > l_147)) & l_167), g_13.f1)), (*l_152))) == l_76)));
                        (*l_152) = ((-1L) ^ ((((void*)0 != l_168) != l_147) < (&l_149 == g_150)));
                    }
                    return p_56;
                }
            }
            (*l_169) = g_13.f1;
        }
    }
    return p_56;
}







static unsigned short func_63(short p_64, unsigned long long p_65, int p_66)
{
    unsigned l_93[1];
    unsigned l_94 = 0xE8BA66F8L;
    char *l_98 = &g_17;
    char **l_97 = &l_98;
    char ***l_96 = &l_97;
    int l_103 = 0x5B36276AL;
    int i;
    for (i = 0; i < 1; i++)
        l_93[i] = 0x6AFE108DL;
    for (g_17 = (-6); (g_17 < (-10)); g_17 = safe_sub_func_int64_t_s_s(g_17, 2))
    {
        unsigned char l_89[8] = {0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L,0x14L};
        int l_90[10];
        int i;
        for (i = 0; i < 10; i++)
            l_90[i] = 0x140B3566L;
        for (p_64 = 7; (p_64 >= 0); p_64 -= 1)
        {
            int *l_95 = &l_90[0];
            int i;
            l_90[0] &= (!l_89[p_64]);
            (*l_95) |= (((p_65 > (safe_lshift_func_uint16_t_u_u(((2UL ^ 3L) <= p_65), 12))) >= (g_17 > (((l_93[0] < (l_94 < 0x9D77L)) > g_42) >= g_13.f0))) == 4L);
            (*l_95) = (((void*)0 == l_96) ^ ((*l_95) > (safe_mod_func_int8_t_s_s(g_13.f0, p_65))));
        }
    }
    for (p_66 = 0; (p_66 >= 0); p_66 -= 1)
    {
        int *l_101[8];
        int i;
        for (i = 0; i < 8; i++)
            l_101[i] = &g_102;
        l_103 ^= l_93[p_66];
    }
    return g_17;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13.f0, "g_13.f0", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_42, "g_42", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_173, "g_173", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_179, "g_179", print_hash_value);
    transparent_crc(g_201.f0, "g_201.f0", print_hash_value);
    transparent_crc(g_201.f1, "g_201.f1", print_hash_value);
    transparent_crc(g_201.f2, "g_201.f2", print_hash_value);
    transparent_crc(g_201.f3, "g_201.f3", print_hash_value);
    transparent_crc(g_201.f4, "g_201.f4", print_hash_value);
    transparent_crc(g_201.f5, "g_201.f5", print_hash_value);
    transparent_crc(g_201.f6, "g_201.f6", print_hash_value);
    transparent_crc(g_201.f7, "g_201.f7", print_hash_value);
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_234.f0, "g_234.f0", print_hash_value);
    transparent_crc(g_234.f1, "g_234.f1", print_hash_value);
    transparent_crc(g_234.f2, "g_234.f2", print_hash_value);
    transparent_crc(g_234.f3, "g_234.f3", print_hash_value);
    transparent_crc(g_234.f4, "g_234.f4", print_hash_value);
    transparent_crc(g_234.f5, "g_234.f5", print_hash_value);
    transparent_crc(g_234.f6, "g_234.f6", print_hash_value);
    transparent_crc(g_234.f7, "g_234.f7", print_hash_value);
    transparent_crc(g_240.f0, "g_240.f0", print_hash_value);
    transparent_crc(g_240.f1, "g_240.f1", print_hash_value);
    transparent_crc(g_240.f2, "g_240.f2", print_hash_value);
    transparent_crc(g_240.f3, "g_240.f3", print_hash_value);
    transparent_crc(g_240.f4, "g_240.f4", print_hash_value);
    transparent_crc(g_240.f5, "g_240.f5", print_hash_value);
    transparent_crc(g_240.f6, "g_240.f6", print_hash_value);
    transparent_crc(g_240.f7, "g_240.f7", print_hash_value);
    transparent_crc(g_279.f0, "g_279.f0", print_hash_value);
    transparent_crc(g_279.f1, "g_279.f1", print_hash_value);
    transparent_crc(g_279.f2, "g_279.f2", print_hash_value);
    transparent_crc(g_279.f3, "g_279.f3", print_hash_value);
    transparent_crc(g_279.f4, "g_279.f4", print_hash_value);
    transparent_crc(g_279.f5, "g_279.f5", print_hash_value);
    transparent_crc(g_279.f6, "g_279.f6", print_hash_value);
    transparent_crc(g_279.f7, "g_279.f7", print_hash_value);
    transparent_crc(g_297.f0, "g_297.f0", print_hash_value);
    transparent_crc(g_309.f0, "g_309.f0", print_hash_value);
    transparent_crc(g_309.f1, "g_309.f1", print_hash_value);
    transparent_crc(g_309.f2, "g_309.f2", print_hash_value);
    transparent_crc(g_309.f3, "g_309.f3", print_hash_value);
    transparent_crc(g_309.f4, "g_309.f4", print_hash_value);
    transparent_crc(g_309.f5, "g_309.f5", print_hash_value);
    transparent_crc(g_309.f6, "g_309.f6", print_hash_value);
    transparent_crc(g_309.f7, "g_309.f7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_346[i].f0, "g_346[i].f0", print_hash_value);
        transparent_crc(g_346[i].f1, "g_346[i].f1", print_hash_value);
        transparent_crc(g_346[i].f2, "g_346[i].f2", print_hash_value);
        transparent_crc(g_346[i].f3, "g_346[i].f3", print_hash_value);
        transparent_crc(g_346[i].f4, "g_346[i].f4", print_hash_value);
        transparent_crc(g_346[i].f5, "g_346[i].f5", print_hash_value);
        transparent_crc(g_346[i].f6, "g_346[i].f6", print_hash_value);
        transparent_crc(g_346[i].f7, "g_346[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_384[i].f0, "g_384[i].f0", print_hash_value);
        transparent_crc(g_384[i].f1, "g_384[i].f1", print_hash_value);
        transparent_crc(g_384[i].f2, "g_384[i].f2", print_hash_value);
        transparent_crc(g_384[i].f3, "g_384[i].f3", print_hash_value);
        transparent_crc(g_384[i].f4, "g_384[i].f4", print_hash_value);
        transparent_crc(g_384[i].f5, "g_384[i].f5", print_hash_value);
        transparent_crc(g_384[i].f6, "g_384[i].f6", print_hash_value);
        transparent_crc(g_384[i].f7, "g_384[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_424.f0, "g_424.f0", print_hash_value);
    transparent_crc(g_424.f1, "g_424.f1", print_hash_value);
    transparent_crc(g_424.f2, "g_424.f2", print_hash_value);
    transparent_crc(g_424.f3, "g_424.f3", print_hash_value);
    transparent_crc(g_424.f4, "g_424.f4", print_hash_value);
    transparent_crc(g_424.f5, "g_424.f5", print_hash_value);
    transparent_crc(g_424.f6, "g_424.f6", print_hash_value);
    transparent_crc(g_424.f7, "g_424.f7", print_hash_value);
    transparent_crc(g_425.f0, "g_425.f0", print_hash_value);
    transparent_crc(g_425.f1, "g_425.f1", print_hash_value);
    transparent_crc(g_425.f2, "g_425.f2", print_hash_value);
    transparent_crc(g_425.f3, "g_425.f3", print_hash_value);
    transparent_crc(g_425.f4, "g_425.f4", print_hash_value);
    transparent_crc(g_425.f5, "g_425.f5", print_hash_value);
    transparent_crc(g_425.f6, "g_425.f6", print_hash_value);
    transparent_crc(g_425.f7, "g_425.f7", print_hash_value);
    transparent_crc(g_476, "g_476", print_hash_value);
    transparent_crc(g_479.f0, "g_479.f0", print_hash_value);
    transparent_crc(g_479.f1, "g_479.f1", print_hash_value);
    transparent_crc(g_479.f2, "g_479.f2", print_hash_value);
    transparent_crc(g_479.f3, "g_479.f3", print_hash_value);
    transparent_crc(g_479.f4, "g_479.f4", print_hash_value);
    transparent_crc(g_479.f5, "g_479.f5", print_hash_value);
    transparent_crc(g_479.f6, "g_479.f6", print_hash_value);
    transparent_crc(g_479.f7, "g_479.f7", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_504.f0, "g_504.f0", print_hash_value);
    transparent_crc(g_504.f1, "g_504.f1", print_hash_value);
    transparent_crc(g_504.f2, "g_504.f2", print_hash_value);
    transparent_crc(g_504.f3, "g_504.f3", print_hash_value);
    transparent_crc(g_504.f4, "g_504.f4", print_hash_value);
    transparent_crc(g_504.f5, "g_504.f5", print_hash_value);
    transparent_crc(g_504.f6, "g_504.f6", print_hash_value);
    transparent_crc(g_504.f7, "g_504.f7", print_hash_value);
    transparent_crc(g_506.f0, "g_506.f0", print_hash_value);
    transparent_crc(g_506.f1, "g_506.f1", print_hash_value);
    transparent_crc(g_506.f2, "g_506.f2", print_hash_value);
    transparent_crc(g_506.f3, "g_506.f3", print_hash_value);
    transparent_crc(g_506.f4, "g_506.f4", print_hash_value);
    transparent_crc(g_506.f5, "g_506.f5", print_hash_value);
    transparent_crc(g_506.f6, "g_506.f6", print_hash_value);
    transparent_crc(g_506.f7, "g_506.f7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_647[i][j][k], "g_647[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
