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
   unsigned char f1;
   unsigned long long f2;
   short f3;
   long long f4;
};


static int g_11 = 1L;
static int g_18[6][2] = {{0x2835357FL,0x2835357FL},{0x2835357FL,0x2835357FL},{0x2835357FL,0x2835357FL},{0x2835357FL,0x2835357FL},{0x2835357FL,0x2835357FL},{0x2835357FL,0x2835357FL}};
static char g_73 = (-1L);
static int g_78 = 0xECF93A29L;
static int g_80 = 0x6F4C35C2L;
static int g_82 = (-8L);
static long long g_88[2] = {0x9FE2185AEBC5F7C0LL,0x9FE2185AEBC5F7C0LL};
static short g_98 = (-5L);
static volatile union U0 g_111 = {0x1ADDL};
static char g_113 = 0x29L;
static volatile char g_119 = (-8L);
static volatile char *g_118 = &g_119;
static volatile char **g_117[4] = {&g_118,&g_118,&g_118,&g_118};
static short g_127[3][10] = {{0x68D4L,1L,0x68D4L,0xC217L,0xC217L,0x68D4L,1L,0x68D4L,0xC217L,0xC217L},{0x68D4L,1L,0x68D4L,0xC217L,0xC217L,0x68D4L,1L,0x68D4L,0xC217L,0xC217L},{0x68D4L,1L,0x68D4L,0xC217L,0xC217L,0x68D4L,1L,0x68D4L,0x180AL,0x180AL}};
static char g_141 = 0x40L;
static const union U0 g_148[6] = {{-9L},{-9L},{-9L},{-9L},{-9L},{-9L}};
static union U0 g_151 = {0x8255L};
static const union U0 *g_150 = &g_151;
static int g_160 = 0xBBECA4C4L;
static unsigned short g_170 = 7UL;
static volatile int g_176 = (-8L);
static const volatile int *g_175 = &g_176;
static union U0 *g_185 = (void*)0;
static union U0 **g_184 = &g_185;
static unsigned g_205 = 0x6F7F6FCCL;
static volatile union U0 *g_226 = &g_111;
static volatile union U0 **g_225[4][3] = {{(void*)0,(void*)0,(void*)0},{&g_226,&g_226,&g_226},{(void*)0,(void*)0,(void*)0},{&g_226,&g_226,&g_226}};
static volatile union U0 ***g_224 = &g_225[3][0];
static volatile union U0 ****g_223 = &g_224;
static unsigned g_323 = 3UL;
static unsigned short g_330 = 0x8C1BL;
static int *g_347 = &g_78;
static union U0 ****g_433 = (void*)0;
static unsigned char *g_439 = &g_151.f1;
static unsigned char **g_438 = &g_439;
static volatile unsigned long long *g_461 = (void*)0;
static const unsigned char *g_530 = &g_148[0].f1;
static const unsigned char **g_529[7][5][7] = {{{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530}},{{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530}},{{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530}},{{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530}},{{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530}},{{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530}},{{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530},{&g_530,&g_530,&g_530,&g_530,&g_530,&g_530,&g_530}}};
static unsigned *g_565 = &g_323;
static unsigned *g_572 = &g_323;
static const volatile int **g_583 = (void*)0;
static const int *g_607 = (void*)0;
static const int g_627 = (-10L);
static const int *g_636[1] = {(void*)0};
static short *g_641 = &g_127[1][0];
static short **g_640 = &g_641;
static unsigned **g_652 = (void*)0;
static volatile unsigned short g_689 = 1UL;
static volatile unsigned short *g_688 = &g_689;
static volatile unsigned short ** const g_687 = &g_688;
static union U0 g_702 = {0x6D9FL};
static volatile int ***g_917[7][1] = {{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0},{(void*)0}};
static volatile int ****g_916[6][2][2] = {{{&g_917[6][0],&g_917[6][0]},{&g_917[6][0],&g_917[6][0]}},{{&g_917[6][0],&g_917[6][0]},{&g_917[6][0],&g_917[6][0]}},{{&g_917[6][0],&g_917[6][0]},{&g_917[6][0],&g_917[6][0]}},{{&g_917[6][0],&g_917[6][0]},{&g_917[6][0],&g_917[6][0]}},{{&g_917[6][0],&g_917[6][0]},{&g_917[6][0],&g_917[6][0]}},{{&g_917[6][0],&g_917[6][0]},{&g_917[6][0],&g_917[6][0]}}};
static unsigned long long g_928 = 2UL;
static long long *g_960 = &g_88[0];
static long long **g_959 = &g_960;
static unsigned char g_1003 = 6UL;
static unsigned g_1116 = 5UL;
static volatile unsigned g_1136 = 0x167BA5FBL;
static short g_1174 = 0xBCB8L;
static unsigned **g_1207 = &g_572;
static int **g_1349 = &g_347;
static const unsigned char ***g_1482 = &g_529[0][2][3];
static const unsigned char ****g_1481 = &g_1482;
static int *g_1497[2][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_78,&g_78,&g_160,&g_78,&g_78,&g_160,&g_78,&g_78,&g_160}};
static int g_1577 = (-1L);
static unsigned g_1587 = 4294967295UL;
static volatile union U0 *****g_1595 = &g_223;
static volatile union U0 ******g_1594 = &g_1595;
static const int *g_1766 = &g_1577;
static const int **g_1765 = &g_1766;
static long long g_1842 = 0x1EB7006396363A16LL;
static int g_1847 = 0x5C7FD261L;
static const unsigned short g_1857[2] = {0x1F2DL,0x1F2DL};
static const unsigned short *g_1856 = &g_1857[1];
static const unsigned short g_1859 = 9UL;



static unsigned func_1(void);
static int func_2(unsigned p_3, long long p_4, int p_5, union U0 p_6, union U0 p_7);
static unsigned func_8(int p_9, char p_10);
static unsigned func_21(int * p_22, int * p_23, const int * const p_24);
static int * func_25(long long p_26);
static unsigned short func_31(unsigned p_32);
static char func_38(const int * p_39, unsigned p_40, int * p_41, int * p_42, int * p_43);
static int * func_44(char p_45, int * p_46, unsigned p_47, char p_48, int * p_49);
static char func_50(long long p_51, unsigned long long p_52, int * p_53, union U0 p_54);
static unsigned func_61(int * p_62, short p_63, unsigned p_64, long long p_65, const unsigned short p_66);
static unsigned func_1(void)
{
    unsigned l_1839 = 0xE84CC8F0L;
    long long *l_1840 = (void*)0;
    long long *l_1841 = &g_1842;
    unsigned long long *l_1845 = &g_928;
    short *l_1846 = (void*)0;
    union U0 l_1848 = {-1L};
    int *l_1867 = &g_78;
    (*l_1867) = func_2(func_8(g_11, (~0xE4L)), (safe_sub_func_int64_t_s_s((((*l_1841) = (l_1839 , ((~0x12L) , g_627))) >= ((safe_add_func_uint32_t_u_u(((g_1847 = (((*l_1845) = g_148[0].f3) ^ g_1003)) < g_148[0].f3), 4294967295UL)) == l_1839)), g_1003)), (*g_1766), l_1848, g_148[0]);
    return (*l_1867);
}







static int func_2(unsigned p_3, long long p_4, int p_5, union U0 p_6, union U0 p_7)
{
    int *l_1849[4] = {&g_160,&g_160,&g_160,&g_160};
    const unsigned short *l_1854 = &g_330;
    const unsigned short **l_1855[3];
    const unsigned short *l_1858 = &g_1859;
    unsigned short *l_1860 = &g_170;
    const int l_1863 = (-1L);
    const int * const l_1864 = &g_78;
    unsigned short *l_1865 = &g_170;
    short l_1866[7][1][9] = {{{0L,0L,(-5L),0L,0L,(-5L),0L,0L,(-5L)}},{{0x50D0L,0x50D0L,0xA571L,0x50D0L,0x50D0L,0xA571L,0x50D0L,0x50D0L,0xA571L}},{{0L,0L,(-5L),0L,0L,(-5L),0L,0L,(-5L)}},{{0x50D0L,0x50D0L,0xA571L,0x50D0L,0x50D0L,0xA571L,0x50D0L,0x50D0L,0xA571L}},{{0L,0L,(-5L),0L,0L,(-5L),0L,0L,(-5L)}},{{0x50D0L,0x50D0L,0xA571L,0x50D0L,0x50D0L,0xA571L,0x50D0L,0x50D0L,0xA571L}},{{0L,0L,(-5L),0L,0L,(-5L),4L,4L,0L}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1855[i] = &l_1854;
    (*g_1349) = (l_1849[0] = l_1849[0]);
    l_1866[5][0][5] = (p_7.f0 & ((safe_rshift_func_int16_t_s_u(0x72ECL, (**g_687))) || (safe_rshift_func_int8_t_s_s((p_7.f0 <= ((l_1858 = (g_1856 = l_1854)) == (l_1860 = l_1860))), (safe_add_func_int8_t_s_s((((*l_1865) = (l_1863 > ((*g_960) || g_1174))) < (**g_687)), p_6.f0))))));
    return p_4;
}







static unsigned func_8(int p_9, char p_10)
{
    unsigned char l_14 = 0xACL;
    int *l_15 = (void*)0;
    int *l_16 = (void*)0;
    int *l_17 = &g_18[3][1];
    union U0 l_56 = {0x2C9DL};
    unsigned l_1578 = 7UL;
    int *l_1604 = (void*)0;
    unsigned long long l_1656 = 6UL;
    unsigned l_1707 = 0xB50D474EL;
    unsigned char ***l_1724 = &g_438;
    unsigned char **** const l_1723 = &l_1724;
    unsigned *l_1798 = &l_1707;
    unsigned **l_1797 = &l_1798;
    unsigned long long **l_1832 = (void*)0;
    unsigned long long ***l_1831 = &l_1832;
    (*l_17) = (safe_rshift_func_uint16_t_u_s(l_14, 11));
    for (p_9 = 20; (p_9 < (-3)); p_9 = safe_sub_func_uint16_t_u_u(p_9, 7))
    {
        int l_34[9][2] = {{8L,8L},{(-1L),8L},{8L,(-1L)},{8L,8L},{(-1L),8L},{8L,(-1L)},{8L,8L},{(-1L),8L},{8L,(-1L)}};
        int l_35 = 0x53BF844BL;
        int *l_55 = &g_18[3][1];
        union U0 *****l_1593 = (void*)0;
        union U0 ******l_1592 = &l_1593;
        short l_1596[2][1][7] = {{{0xF9B3L,0xF9B3L,0xF9B3L,0xF9B3L,0xF9B3L,0xF9B3L,0xF9B3L}},{{0x72F9L,0x72F9L,0x72F9L,0x72F9L,0x72F9L,0x72F9L,0x72F9L}}};
        long long **l_1616 = &g_960;
        int *l_1638[2][4][4] = {{{&g_160,(void*)0,&g_82,(void*)0},{&g_78,(void*)0,&g_78,(void*)0},{&g_82,(void*)0,&g_160,&l_35},{&g_82,&g_80,(void*)0,(void*)0}},{{&g_18[3][1],&g_18[3][1],(void*)0,&g_78},{&g_82,&g_78,&g_160,&g_80},{&g_82,&g_160,&g_78,&g_160},{&g_78,&g_160,&g_82,&g_80}}};
        unsigned char ***l_1663[7] = {&g_438,&g_438,&g_438,&g_438,&g_438,&g_438,&g_438};
        long long l_1683 = 9L;
        int i, j, k;
    }
    if ((**g_1349))
    {
        unsigned l_1691 = 18446744073709551609UL;
        int l_1692 = 0xF124C1EBL;
        for (g_78 = 1; (g_78 >= 0); g_78 -= 1)
        {
            unsigned short *l_1695[8];
            unsigned short **l_1694[7] = {&l_1695[2],&l_1695[7],&l_1695[2],&l_1695[2],&l_1695[7],&l_1695[2],&l_1695[2]};
            unsigned short *** const l_1693 = &l_1694[2];
            int i;
            for (i = 0; i < 8; i++)
                l_1695[i] = &g_330;
            if ((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((*g_530), (safe_sub_func_int64_t_s_s(0xA21A2A85530895B5LL, p_10)))), (*g_118))))
            {
                int *l_1690[7];
                int i;
                for (i = 0; i < 7; i++)
                    l_1690[i] = (void*)0;
                (*g_1349) = (void*)0;
                l_1690[4] = ((*g_1349) = &p_9);
                (*g_1349) = (void*)0;
                (*l_17) = p_10;
            }
            else
            {
                (*l_17) = (l_1691 = p_9);
                (*g_1349) = &p_9;
            }
            (*l_17) = ((**g_687) > (l_1692 <= (l_1693 == &l_1694[1])));
            for (g_141 = 1; (g_141 >= 0); g_141 -= 1)
            {
                unsigned l_1697 = 1UL;
                for (g_1174 = 0; (g_1174 <= 2); g_1174 += 1)
                {
                    int i, j;
                    if (p_10)
                        break;
                    for (g_151.f4 = 2; (g_151.f4 >= 0); g_151.f4 -= 1)
                    {
                        char l_1696[1][5] = {{0x16L,0x16L,0x16L,0x16L,0x16L}};
                        int i, j;
                        return l_1696[0][2];
                    }
                    if (l_1697)
                        break;
                    if (l_1691)
                        break;
                }
            }
        }
    }
    else
    {
        unsigned l_1705 = 0UL;
        union U0 l_1706 = {0x11D9L};
        unsigned char ***l_1722 = (void*)0;
        unsigned char ****l_1721 = &l_1722;
        int *l_1725[10] = {&g_18[2][1],&g_18[2][1],&g_18[2][1],&g_18[2][1],&g_18[2][1],&g_18[2][1],&g_18[2][1],&g_18[2][1],&g_18[2][1],&g_18[2][1]};
        int ** const l_1764 = (void*)0;
        char l_1784 = (-1L);
        unsigned l_1810 = 0x7E26C823L;
        int i;
        if (((safe_unary_minus_func_uint16_t_u((safe_div_func_int8_t_s_s((safe_add_func_uint8_t_u_u((safe_add_func_int8_t_s_s(func_50((*l_17), l_1705, (*g_1349), l_1706), (l_1707 , ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((l_1604 == ((((*l_17) > l_1706.f3) == p_9) , l_17)), g_627)), (-1L))) , p_9)))), 0x96L)), (-1L))))) , 1L))
        {
            int *l_1712 = &g_82;
            (*g_1349) = (void*)0;
            l_1712 = (void*)0;
        }
        else
        {
            int l_1713 = 1L;
            return l_1713;
        }
        l_1725[3] = ((*g_1349) = (*g_1349));
        for (g_160 = 0; (g_160 <= 2); g_160 += 1)
        {
            long long l_1728 = 0L;
            int l_1745 = 1L;
            union U0 *****l_1762[1];
            unsigned short l_1779 = 0x31C3L;
            unsigned *l_1796 = &g_205;
            unsigned **l_1795 = &l_1796;
            int l_1802 = 7L;
            int *l_1803 = &l_1745;
            int i;
            for (i = 0; i < 1; i++)
                l_1762[i] = &g_433;
            (*l_17) = (safe_mul_func_int16_t_s_s(l_1728, l_1728));
        }
        for (l_1705 = (-2); (l_1705 == 19); l_1705 = safe_add_func_int64_t_s_s(l_1705, 8))
        {
            unsigned char l_1811[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1811[i] = 255UL;
            (*g_1349) = (void*)0;
            (*g_1349) = (*g_1349);
            (*g_1349) = (void*)0;
            (*g_1349) = (((safe_rshift_func_uint8_t_u_s(0xDCL, 0)) | (safe_rshift_func_uint16_t_u_u((**g_687), 5))) , func_44(p_9, &p_9, p_9, p_10, l_17));
        }
    }
    if ((((*l_1724) = (*l_1724)) != (p_10 , (void*)0)))
    {
        return (*l_17);
    }
    else
    {
        int **l_1816 = (void*)0;
        int **l_1817 = &l_16;
        long long ***l_1830 = (void*)0;
        (*l_1817) = ((*g_1349) = (void*)0);
        for (g_78 = (-22); (g_78 >= 2); g_78 = safe_add_func_uint64_t_u_u(g_78, 5))
        {
            l_15 = ((*g_1349) = &p_9);
        }
        (*g_1349) = ((*l_1817) = (*l_1817));
        for (g_323 = 0; (g_323 != 6); g_323++)
        {
            unsigned long long l_1826 = 0x3F0FE2208E587115LL;
            const char l_1829 = 1L;
            unsigned long long ***l_1833 = &l_1832;
            (*l_17) = (*l_17);
            for (g_160 = 10; (g_160 == (-16)); g_160 = safe_sub_func_uint16_t_u_u(g_160, 9))
            {
                unsigned char l_1834[3][9][1] = {{{0xEEL},{253UL},{255UL},{253UL},{0xEEL},{255UL},{0xB7L},{0xB7L},{255UL}},{{0xEEL},{253UL},{255UL},{253UL},{0xEEL},{255UL},{0xB7L},{0xB7L},{255UL}},{{0xEEL},{253UL},{255UL},{253UL},{0xEEL},{255UL},{0xB7L},{0xB7L},{255UL}}};
                int i, j, k;
                (*l_1817) = l_16;
                (***g_1595) = (****g_1594);
                for (p_10 = 19; (p_10 <= (-10)); p_10 = safe_sub_func_int16_t_s_s(p_10, 7))
                {
                    int *l_1827 = (void*)0;
                    int *l_1828 = &g_78;
                    (*l_1828) = ((*l_17) = l_1826);
                    (*l_1817) = (void*)0;
                }
                (*l_17) = (p_10 <= ((&g_959 != (l_1829 , l_1830)) & ((~(l_1831 == l_1833)) == l_1834[1][4][0])));
            }
        }
    }
    return (*g_565);
}







static unsigned func_21(int * p_22, int * p_23, const int * const p_24)
{
    union U0 l_1356 = {0xAA60L};
    int l_1359 = 0x29B60183L;
    int *l_1363 = (void*)0;
    short ***l_1401 = &g_640;
    unsigned long long *l_1416 = &g_928;
    const int *l_1441[9][8][3] = {{{(void*)0,&g_80,&g_82},{&l_1359,&g_78,&g_78},{&g_82,(void*)0,&g_80},{&l_1359,&g_80,(void*)0},{(void*)0,&g_82,(void*)0},{&g_18[2][0],&g_80,&g_80},{(void*)0,&g_82,&g_78},{(void*)0,&g_18[2][0],&g_82}},{{&g_18[2][0],(void*)0,&g_78},{&g_82,(void*)0,&g_80},{&g_80,&g_18[2][0],(void*)0},{&g_82,(void*)0,(void*)0},{&g_80,&l_1359,&g_80},{(void*)0,&g_82,&g_78},{&g_78,&l_1359,&g_82},{&g_80,(void*)0,&g_78}},{{(void*)0,&g_78,&g_80},{(void*)0,&l_1359,(void*)0},{&g_82,&g_82,(void*)0},{&l_1359,(void*)0,&g_80},{&g_78,(void*)0,&g_78},{(void*)0,&g_80,&g_82},{&l_1359,&g_78,&g_82},{&l_1359,&g_18[2][0],&g_82}},{{&g_18[2][1],&g_160,&l_1359},{&g_82,&l_1359,&l_1359},{&g_160,&g_18[4][0],&g_82},{(void*)0,&g_80,&g_82},{&g_18[2][0],&g_160,&g_18[2][0]},{&g_160,&g_18[2][0],&g_82},{&g_80,(void*)0,&g_82},{&g_18[4][0],&g_160,&l_1359}},{{&l_1359,&g_82,&l_1359},{&g_160,&g_18[2][1],&g_82},{&g_18[2][0],&l_1359,&g_82},{(void*)0,(void*)0,&g_18[2][0]},{&g_160,(void*)0,&g_82},{&g_82,(void*)0,&g_82},{&g_18[3][1],(void*)0,&l_1359},{&g_80,&g_80,&l_1359}},{{(void*)0,&g_18[3][1],&g_82},{(void*)0,&g_82,&g_82},{(void*)0,&g_160,&g_18[2][0]},{(void*)0,(void*)0,&g_82},{&l_1359,&g_18[2][0],&g_82},{&g_18[2][1],&g_160,&l_1359},{&g_82,&l_1359,&l_1359},{&g_160,&g_18[4][0],&g_82}},{{(void*)0,&g_80,&g_82},{&g_18[2][0],&g_160,&g_18[2][0]},{&g_160,&g_18[2][0],&g_82},{&g_80,(void*)0,&g_82},{&g_18[4][0],&g_160,&l_1359},{&l_1359,&g_82,&l_1359},{&g_160,&g_18[2][1],&g_80},{&g_160,&g_82,&l_1359}},{{&g_160,&g_18[4][0],&g_82},{&g_78,(void*)0,&l_1359},{(void*)0,&g_160,&g_80},{(void*)0,&g_18[4][0],&g_82},{(void*)0,(void*)0,&g_82},{&g_18[4][0],(void*)0,&g_80},{&g_160,(void*)0,&l_1359},{(void*)0,&g_78,&g_82}},{{&g_18[4][0],&g_160,&l_1359},{&g_82,&g_160,&g_80},{&g_18[2][0],&g_78,&g_82},{(void*)0,&g_82,&g_82},{&g_18[3][0],(void*)0,&g_80},{(void*)0,(void*)0,&l_1359},{&g_160,&g_18[3][0],&g_82},{&g_18[3][0],&g_160,&l_1359}}};
    short l_1506 = 1L;
    union U0 ***l_1576 = &g_184;
    union U0 ****l_1575 = &l_1576;
    int i, j, k;
    for (g_151.f0 = 8; (g_151.f0 < (-2)); g_151.f0 = safe_sub_func_int16_t_s_s(g_151.f0, 7))
    {
        unsigned short l_1345 = 0UL;
        int ***l_1346 = (void*)0;
        int **l_1348 = (void*)0;
        int ***l_1347[10];
        unsigned long long l_1360[6][10] = {{0x576962023292D1B9LL,0x576962023292D1B9LL,1UL,0xFBC1052F75F80BDFLL,18446744073709551615UL,18446744073709551615UL,0xFBC1052F75F80BDFLL,1UL,0x576962023292D1B9LL,0x576962023292D1B9LL},{18446744073709551615UL,0xFBC1052F75F80BDFLL,1UL,0x576962023292D1B9LL,0x576962023292D1B9LL,1UL,0xFBC1052F75F80BDFLL,18446744073709551615UL,18446744073709551615UL,0xFBC1052F75F80BDFLL},{18446744073709551615UL,0x576962023292D1B9LL,0xFBC1052F75F80BDFLL,0xFBC1052F75F80BDFLL,0x576962023292D1B9LL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x576962023292D1B9LL},{0x576962023292D1B9LL,0xFBC1052F75F80BDFLL,0xFBC1052F75F80BDFLL,0x576962023292D1B9LL,18446744073709551615UL,1UL,1UL,18446744073709551615UL,0x576962023292D1B9LL,0xFBC1052F75F80BDFLL},{0x576962023292D1B9LL,0x576962023292D1B9LL,1UL,0xFBC1052F75F80BDFLL,18446744073709551615UL,18446744073709551615UL,0xFBC1052F75F80BDFLL,1UL,0x576962023292D1B9LL,0x576962023292D1B9LL},{18446744073709551615UL,0xFBC1052F75F80BDFLL,1UL,0x576962023292D1B9LL,0x576962023292D1B9LL,1UL,0xFBC1052F75F80BDFLL,18446744073709551615UL,18446744073709551615UL,0xFBC1052F75F80BDFLL}};
        int i, j;
        for (i = 0; i < 10; i++)
            l_1347[i] = &l_1348;
        l_1359 = ((l_1345 , (((g_1349 = &p_22) != (((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((**g_687), 1)), ((**g_959) ^ (*g_960)))) && (l_1356 , (!(*p_23)))) , &p_23)) <= (safe_lshift_func_uint8_t_u_s((*g_439), 0)))) < l_1356.f0);
        if (l_1360[0][0])
            break;
        return g_151.f3;
    }
    for (g_160 = (-27); (g_160 < (-19)); g_160 = safe_add_func_int64_t_s_s(g_160, 3))
    {
        if (l_1356.f1)
            break;
        l_1363 = (void*)0;
    }
    for (g_98 = (-22); (g_98 < (-3)); g_98++)
    {
        long long *l_1366[2][8][3] = {{{&g_702.f4,&g_702.f4,&g_702.f4},{&g_88[1],&g_702.f4,&g_88[1]},{&g_702.f4,&g_702.f4,&g_702.f4},{(void*)0,&g_702.f4,(void*)0},{&g_702.f4,&g_702.f4,&g_702.f4},{&g_88[1],&g_702.f4,&g_88[1]},{&g_702.f4,&g_702.f4,&g_702.f4},{(void*)0,&g_702.f4,(void*)0}},{{&g_702.f4,&g_702.f4,&g_702.f4},{&g_88[1],&g_702.f4,&g_88[1]},{&g_702.f4,&g_702.f4,&g_702.f4},{(void*)0,&g_702.f4,(void*)0},{&g_702.f4,&g_702.f4,&g_702.f4},{&g_88[1],&g_702.f4,&g_88[1]},{&g_702.f4,&g_702.f4,&g_702.f4},{(void*)0,&g_702.f4,(void*)0}}};
        int l_1374[9][3][9] = {{{(-6L),1L,1L,0xE71693D6L,0L,(-1L),0x8B8BE6ACL,0x8B8BE6ACL,(-1L)},{0L,(-1L),0xF92F8CE5L,(-1L),0L,(-1L),(-9L),0L,(-1L)},{1L,0xCC43FF3EL,(-8L),0L,(-7L),0x8F210134L,0x8B8BE6ACL,(-7L),(-8L)}},{{1L,0L,(-6L),0x589E6A0FL,(-1L),(-1L),(-1L),0x589E6A0FL,(-6L)},{0L,1L,0x8AC8C5E2L,0xCC43FF3EL,(-7L),(-1L),0xCC43FF3EL,0L,0x45D0C321L},{0L,0xBF06C2F9L,5L,0x589E6A0FL,0L,1L,0xC37FD872L,0xBF06C2F9L,(-1L)}},{{(-7L),0xE71693D6L,0x8AC8C5E2L,0L,0L,0x8AC8C5E2L,0xE71693D6L,(-7L),0xDF7D1C8EL},{(-1L),0xBF06C2F9L,(-6L),(-1L),1L,(-1L),(-1L),(-1L),1L},{(-7L),1L,(-8L),0xE71693D6L,1L,(-1L),0L,0x8B8BE6ACL,0xDF7D1C8EL}},{{0L,0L,0xF92F8CE5L,0L,0L,0xDF998645L,(-9L),(-1L),(-1L)},{0L,0xCC43FF3EL,1L,0L,(-6L),0x8F210134L,0L,(-7L),0x45D0C321L},{1L,(-1L),(-6L),0xBF06C2F9L,(-1L),0xDF998645L,(-1L),0xBF06C2F9L,(-6L)}},{{1L,1L,0x8F210134L,0xCC43FF3EL,(-6L),(-1L),0xE71693D6L,0L,(-8L)},{0L,0x589E6A0FL,5L,0xBF06C2F9L,0L,(-1L),0xC37FD872L,0x589E6A0FL,(-1L)},{(-1L),(-2L),0x8B8BE6ACL,(-4L),(-4L),0L,0x3CBE9CB9L,(-1L),(-7L)}},{{0x5E141D99L,0x7803A0FBL,1L,0L,8L,0x589E6A0FL,0x5E141D99L,0L,(-1L)},{(-1L),(-4L),0xCC43FF3EL,(-2L),(-4L),(-7L),0L,0L,(-7L)},{1L,0x1B0E020AL,(-9L),0x1B0E020AL,1L,0L,0xAD0EC0BEL,0L,0L}},{{(-4L),0x3CBE9CB9L,0xE71693D6L,(-4L),(-1L),0x8B8BE6ACL,0L,(-1L),0L},{8L,0L,1L,0x7803A0FBL,0x5E141D99L,0L,0x5E141D99L,0x7803A0FBL,1L},{(-4L),(-4L),0L,0x3CBE9CB9L,(-1L),(-7L),0x3CBE9CB9L,0xDAFEE0DBL,1L}},{{1L,(-1L),0xC37FD872L,0x7803A0FBL,1L,0x589E6A0FL,0xCCCEAB9DL,(-1L),0L},{(-1L),(-2L),0L,(-4L),(-4L),0L,(-2L),(-1L),(-6L)},{0x5E141D99L,(-1L),1L,0x1B0E020AL,8L,0xBF06C2F9L,0x5E141D99L,0x1B0E020AL,(-1L)}},{{(-1L),(-4L),0xE71693D6L,(-2L),(-4L),(-7L),0xDAFEE0DBL,0L,(-6L)},{1L,0L,(-9L),0L,1L,(-1L),0xAD0EC0BEL,0x1B0E020AL,0L},{(-4L),0x3CBE9CB9L,0xCC43FF3EL,(-4L),(-1L),0x8B8BE6ACL,0xDAFEE0DBL,(-1L),1L}}};
        int i, j, k;
        for (g_702.f2 = 0; (g_702.f2 <= 0); g_702.f2 += 1)
        {
            unsigned char ***l_1371 = &g_438;
            int l_1377 = 0x168ECFF1L;
            for (g_1174 = 0; (g_1174 <= 3); g_1174 += 1)
            {
                unsigned char ***l_1373 = &g_438;
                unsigned char ****l_1372 = &l_1373;
                char *l_1378 = (void*)0;
                unsigned char l_1379 = 0x97L;
                int i, j;
                if ((*p_22))
                    break;
                (*g_1349) = &l_1359;
                (*p_23) = (l_1366[0][1][2] == (void*)0);
                (*p_23) = (safe_sub_func_int32_t_s_s((*p_23), (g_11 || ((safe_rshift_func_int8_t_s_u((g_141 = ((l_1359 ^ ((l_1371 = &g_438) == ((*l_1372) = &g_438))) , ((l_1374[6][1][8] && (((safe_div_func_int8_t_s_s(l_1377, (l_1377 && (l_1377 | (**g_687))))) && (*g_118)) != 0x2C75L)) & l_1377))), (*g_530))) > l_1379))));
            }
        }
        for (g_82 = 2; (g_82 >= 0); g_82 -= 1)
        {
            int *l_1380 = &g_18[3][1];
            (*g_1349) = l_1380;
            return l_1374[6][1][8];
        }
        if (l_1374[6][1][8])
            break;
    }
    for (g_170 = 0; (g_170 == 2); g_170 = safe_add_func_int32_t_s_s(g_170, 4))
    {
        unsigned char l_1385 = 0xA3L;
        short ***l_1400[8] = {(void*)0,&g_640,(void*)0,&g_640,(void*)0,&g_640,(void*)0,&g_640};
        unsigned *l_1404 = &g_205;
        unsigned char l_1405 = 255UL;
        union U0 l_1413 = {0x095BL};
        int l_1464 = (-1L);
        int *l_1498 = &g_160;
        long long **l_1532 = &g_960;
        unsigned l_1548[10][6][4] = {{{0x277DB26CL,6UL,0x46EA416CL,4294967294UL},{0x36F57865L,1UL,0x277DB26CL,9UL},{0UL,0x36F57865L,4294967295UL,7UL},{1UL,0xA22E5474L,4294967295UL,0xA22E5474L},{0UL,0x21EE3267L,0x67825EF5L,4294967295UL},{1UL,0UL,4294967295UL,0x36F57865L}},{{7UL,1UL,0x21EE3267L,0x395E3C89L},{7UL,8UL,4294967295UL,1UL},{1UL,0x395E3C89L,0x67825EF5L,0UL},{0UL,0xF6619204L,4294967295UL,0x200951C6L},{1UL,4294967295UL,4294967295UL,4294967295UL},{0UL,0UL,0x277DB26CL,0UL}},{{0x36F57865L,0x5E78FC99L,0x46EA416CL,1UL},{0x277DB26CL,0UL,0xA22E5474L,0x46EA416CL},{8UL,0UL,9UL,1UL},{0UL,0x5E78FC99L,0x200951C6L,0UL},{0x32D1D938L,7UL,4294967295UL,0x277DB26CL},{0x32D1D938L,0UL,1UL,0UL}},{{1UL,0UL,1UL,7UL},{0UL,0x46EA416CL,0x67825EF5L,0x200951C6L},{0x21EE3267L,4294967295UL,4294967294UL,0x46EA416CL},{0x5E78FC99L,0x67825EF5L,4294967294UL,4294967295UL},{0x21EE3267L,0xA22E5474L,0x67825EF5L,8UL},{0UL,4294967295UL,1UL,0x21EE3267L}},{{1UL,0x21EE3267L,1UL,1UL},{0x32D1D938L,4294967295UL,4294967295UL,0x32D1D938L},{1UL,0xF6619204L,0UL,0UL},{9UL,1UL,0x32D1D938L,4294967295UL},{4294967295UL,0x36F57865L,0x21EE3267L,4294967295UL},{6UL,1UL,4294967295UL,0UL}},{{4294967295UL,0xF6619204L,6UL,0x32D1D938L},{7UL,4294967295UL,0x277DB26CL,1UL},{0x67825EF5L,0x21EE3267L,0UL,0x21EE3267L},{0x395E3C89L,4294967295UL,0x36F57865L,8UL},{0x200951C6L,0xA22E5474L,8UL,4294967295UL},{1UL,0x67825EF5L,4294967295UL,0x46EA416CL}},{{1UL,4294967295UL,8UL,0x200951C6L},{0x200951C6L,0x46EA416CL,0x36F57865L,7UL},{0x395E3C89L,0UL,0UL,0UL},{0x67825EF5L,0UL,0x277DB26CL,0x277DB26CL},{7UL,4294967294UL,1UL,8UL},{7UL,0x395E3C89L,9UL,0x46EA416CL}},{{1UL,0x277DB26CL,4294967295UL,9UL},{4294967295UL,0x277DB26CL,6UL,0x46EA416CL},{0x277DB26CL,0x395E3C89L,4294967295UL,8UL},{1UL,4294967294UL,7UL,0x32D1D938L},{6UL,1UL,0x67825EF5L,4294967295UL},{0x395E3C89L,4294967295UL,0x395E3C89L,4294967294UL}},{{4294967295UL,0UL,0x200951C6L,0x36F57865L},{4294967295UL,4294967295UL,1UL,0UL},{0UL,0x200951C6L,1UL,7UL},{4294967295UL,8UL,0x200951C6L,0x21EE3267L},{4294967295UL,0x5E78FC99L,0x395E3C89L,4294967295UL},{0x395E3C89L,4294967295UL,0x67825EF5L,0UL}},{{6UL,7UL,7UL,6UL},{1UL,0x46EA416CL,4294967295UL,4294967295UL},{0x277DB26CL,0x67825EF5L,6UL,0x5E78FC99L},{4294967295UL,0UL,4294967295UL,0x5E78FC99L},{1UL,0x67825EF5L,9UL,4294967295UL},{7UL,0x46EA416CL,1UL,6UL}}};
        int i, j, k;
    }
    return g_1136;
}







static int * func_25(long long p_26)
{
    int *l_1085 = (void*)0;
    unsigned l_1145[1];
    long long **l_1161 = &g_960;
    unsigned l_1168[10][4][6] = {{{0xB619D246L,0x6F60805DL,0xD416C4BBL,0xD416C4BBL,0x6F60805DL,0xB619D246L},{0xD416C4BBL,0x6F60805DL,0xB619D246L,0x8412470DL,18446744073709551615UL,0x41A1EDB6L},{0x41A1EDB6L,0UL,0x0B8DD848L,18446744073709551607UL,0x8412470DL,18446744073709551615UL},{0x419A2C90L,0x0B8DD848L,3UL,0x5926089FL,18446744073709551615UL,0x00388A91L}},{{18446744073709551612UL,0x300E1C81L,3UL,18446744073709551612UL,0x41A1EDB6L,0x00388A91L},{0xE80AB604L,18446744073709551615UL,3UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL},{0xD6C01C4DL,18446744073709551615UL,0xD6C01C4DL,0xE77A6A66L,18446744073709551607UL,0x419A2C90L},{3UL,18446744073709551615UL,0xE80AB604L,0xD6C01C4DL,0x41A1EDB6L,0xE80AB604L}},{{3UL,0x300E1C81L,18446744073709551612UL,0xD6C01C4DL,18446744073709551615UL,0xE77A6A66L},{3UL,0x0B8DD848L,0x419A2C90L,0xE77A6A66L,0x8412470DL,18446744073709551612UL},{0xD6C01C4DL,0x7862FEBCL,0x419A2C90L,18446744073709551615UL,0x300E1C81L,0xE77A6A66L},{0xE80AB604L,0xB619D246L,18446744073709551612UL,18446744073709551612UL,0xB619D246L,0xE80AB604L}},{{18446744073709551612UL,0xB619D246L,0xE80AB604L,0x5926089FL,0x300E1C81L,0x419A2C90L},{0x419A2C90L,0x7862FEBCL,0xD6C01C4DL,3UL,0x8412470DL,18446744073709551615UL},{0x419A2C90L,0x0B8DD848L,3UL,0x5926089FL,18446744073709551615UL,0x00388A91L},{18446744073709551612UL,0x300E1C81L,3UL,18446744073709551612UL,0x41A1EDB6L,0x00388A91L}},{{0xE80AB604L,18446744073709551615UL,3UL,18446744073709551615UL,18446744073709551607UL,18446744073709551615UL},{0xD6C01C4DL,18446744073709551615UL,0xD6C01C4DL,0xE77A6A66L,18446744073709551607UL,0x419A2C90L},{3UL,18446744073709551615UL,0xE80AB604L,3UL,0x300E1C81L,18446744073709551612UL},{18446744073709551612UL,18446744073709551615UL,3UL,3UL,0x41A1EDB6L,0x5926089FL}},{{0x00388A91L,0x7862FEBCL,18446744073709551615UL,0x5926089FL,0xB619D246L,3UL},{3UL,18446744073709551615UL,18446744073709551615UL,0xE77A6A66L,18446744073709551615UL,0x5926089FL},{18446744073709551612UL,0xD416C4BBL,3UL,3UL,0xD416C4BBL,18446744073709551612UL},{3UL,0xD416C4BBL,18446744073709551612UL,0xE80AB604L,18446744073709551615UL,18446744073709551615UL}},{{18446744073709551615UL,18446744073709551615UL,3UL,0x00388A91L,0xB619D246L,0xE77A6A66L},{18446744073709551615UL,0x7862FEBCL,0x00388A91L,0xE80AB604L,0x41A1EDB6L,0xD6C01C4DL},{3UL,18446744073709551615UL,18446744073709551612UL,3UL,0x300E1C81L,0xD6C01C4DL},{18446744073709551612UL,0x41A1EDB6L,0x00388A91L,0xE77A6A66L,18446744073709551607UL,0xE77A6A66L}},{{3UL,0x8412470DL,3UL,0x5926089FL,18446744073709551607UL,18446744073709551615UL},{0x00388A91L,0x41A1EDB6L,18446744073709551612UL,3UL,0x300E1C81L,18446744073709551612UL},{18446744073709551612UL,18446744073709551615UL,3UL,3UL,0x41A1EDB6L,0x5926089FL},{0x00388A91L,0x7862FEBCL,18446744073709551615UL,0x5926089FL,0xB619D246L,3UL}},{{3UL,18446744073709551615UL,18446744073709551615UL,0xE77A6A66L,18446744073709551615UL,0x5926089FL},{18446744073709551612UL,0xD416C4BBL,3UL,3UL,0xD416C4BBL,18446744073709551612UL},{3UL,0xD416C4BBL,18446744073709551612UL,0x98FD446BL,0xE77A6A66L,0x228D7431L},{0x228D7431L,18446744073709551612UL,8UL,0xD2220F19L,0xE80AB604L,0x14C62803L}},{{0x228D7431L,3UL,0xD2220F19L,0x98FD446BL,0x419A2C90L,0x0DC91FD4L},{0x6F60805DL,0xE77A6A66L,1UL,0x6F60805DL,18446744073709551615UL,0x0DC91FD4L},{0UL,0x419A2C90L,0xD2220F19L,0x14C62803L,0x00388A91L,0x14C62803L},{8UL,0x5926089FL,8UL,18446744073709551615UL,0x00388A91L,0x228D7431L}}};
    union U0 *l_1180 = &g_151;
    short l_1198 = 0x4F10L;
    unsigned **l_1206 = (void*)0;
    int l_1229 = 4L;
    unsigned *l_1234 = &g_205;
    int l_1239 = 0xCE1A01F2L;
    unsigned long long *l_1258 = (void*)0;
    int l_1294 = 8L;
    int l_1338[4];
    int *l_1339 = &g_18[2][0];
    unsigned short l_1341 = 65535UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_1145[i] = 0UL;
    for (i = 0; i < 4; i++)
        l_1338[i] = 0xD30D7CF0L;
    for (g_11 = 0; (g_11 >= (-7)); g_11--)
    {
        unsigned long long l_1068[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
        int l_1093 = 1L;
        char l_1114 = 0x2CL;
        unsigned *l_1159 = &g_205;
        unsigned **l_1158[3];
        unsigned ***l_1160 = &g_652;
        int *l_1162 = &g_18[3][1];
        union U0 *l_1175 = &g_702;
        int i;
        for (i = 0; i < 3; i++)
            l_1158[i] = &l_1159;
    }
    if (((!((safe_mod_func_uint64_t_u_u(p_26, (((*l_1234) = ((g_330 = ((*g_641) & ((safe_mod_func_uint8_t_u_u((l_1229 || 0x535FL), l_1168[3][0][2])) > (safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(((func_38(&l_1229, ((*g_565) = p_26), &l_1229, &l_1229, &l_1229) | g_98) , 1L), p_26)), p_26))))) , g_205)) , l_1168[2][1][0]))) <= 0xE0ECC565L)) || p_26))
    {
        unsigned long long l_1240 = 0x744E673B9967E936LL;
        union U0 l_1247 = {0xCB9CL};
        long long * const l_1248 = (void*)0;
        unsigned long long *l_1249[8][9] = {{&g_928,&g_928,(void*)0,&l_1240,&g_928,(void*)0,&g_702.f2,&g_928,(void*)0},{&l_1240,&g_702.f2,(void*)0,&l_1240,&g_928,&g_702.f2,&l_1240,&l_1240,&g_702.f2},{&l_1240,&g_702.f2,(void*)0,&g_702.f2,&l_1240,&g_928,(void*)0,&l_1240,&g_702.f2},{&l_1240,&g_928,&g_928,(void*)0,&g_702.f2,(void*)0,(void*)0,&l_1240,(void*)0},{&g_928,&l_1240,&g_928,&g_702.f2,&g_702.f2,&g_928,&l_1240,&g_928,&g_928},{&g_702.f2,&l_1240,&g_928,(void*)0,&l_1240,&g_702.f2,&g_702.f2,&g_702.f2,(void*)0},{&g_702.f2,&g_702.f2,&g_702.f2,&g_928,&g_702.f2,&g_928,&g_702.f2,&g_928,&g_702.f2},{&g_702.f2,&g_702.f2,&g_928,&l_1240,&g_928,&g_928,(void*)0,&g_702.f2,(void*)0}};
        int l_1250 = 0x5CDAEFBEL;
        int **l_1251 = &l_1085;
        union U0 ***l_1278 = &g_184;
        const unsigned char * const l_1286[10][1] = {{&l_1247.f1},{&g_702.f1},{&l_1247.f1},{&g_702.f1},{&l_1247.f1},{&g_702.f1},{&l_1247.f1},{&g_702.f1},{&l_1247.f1},{&g_702.f1}};
        int *l_1289 = (void*)0;
        int *l_1327 = &g_82;
        int *l_1328 = &g_18[5][0];
        int i, j;
        (*l_1251) = func_44((safe_sub_func_uint16_t_u_u(((p_26 & (safe_mul_func_int16_t_s_s(((*g_641) = p_26), l_1239))) , (**g_687)), (l_1240 == (l_1250 = (safe_sub_func_uint64_t_u_u(g_73, (((*g_439) == (safe_mod_func_uint8_t_u_u(((safe_mod_func_uint64_t_u_u(((l_1247 , l_1248) == (*g_959)), (*g_960))) <= 0UL), 0x18L))) , l_1145[0]))))))), &g_78, p_26, p_26, &g_82);
        for (g_170 = 0; (g_170 != 42); ++g_170)
        {
            unsigned l_1263 = 0x8010B194L;
            int *l_1264 = &g_82;
            long long *l_1265 = &g_151.f4;
            unsigned ** const l_1271 = &g_572;
            int ***l_1308[6] = {&l_1251,&l_1251,&l_1251,&l_1251,&l_1251,&l_1251};
            int i;
            (**l_1251) = (safe_mod_func_int64_t_s_s(((*l_1265) = (safe_sub_func_uint64_t_u_u(((&g_928 != l_1258) == ((*g_960) = (safe_div_func_uint32_t_u_u(((*l_1234) = func_31((((*g_641) = (safe_lshift_func_int16_t_s_u(((1L | func_38((*l_1251), l_1263, l_1264, &l_1239, &g_160)) || (*l_1264)), 2))) != (*l_1264)))), 0x18EC2764L)))), 0UL))), g_18[3][1]));
            for (g_323 = 0; (g_323 <= 1); g_323 += 1)
            {
                unsigned ***l_1270 = &g_1207;
                union U0 ***l_1279 = &g_184;
                int l_1284[8] = {0x9150494DL,0x9150494DL,0x9150494DL,0x9150494DL,0x9150494DL,0x9150494DL,0x9150494DL,0x9150494DL};
                int * const *l_1310 = &l_1085;
                int * const **l_1309 = &l_1310;
                int i, j;
                if (((((safe_mul_func_int8_t_s_s((((((*g_960) = (((safe_rshift_func_int8_t_s_u(((g_18[(g_323 + 2)][g_323] & (g_82 = (((*l_1270) = &g_572) != l_1271))) > (p_26 != p_26)), 2)) > (safe_mul_func_uint16_t_u_u((safe_sub_func_int64_t_s_s((**g_959), (safe_add_func_int64_t_s_s(((l_1278 == (p_26 , l_1279)) < 18446744073709551615UL), p_26)))), (*g_641)))) , p_26)) , p_26) <= 2UL) | 0xED926D8EC9A7A44CLL), p_26)) , p_26) <= 5UL) , (**l_1251)))
                {
                    unsigned long long l_1280[10][1][8] = {{{0x8DCE1A7298296E33LL,0xAEFF10BDA14FEA5ALL,0UL,18446744073709551613UL,0xC418253AE16C3483LL,0xDFCE629A2B514420LL,0xD6B129D892FCE076LL,0xFECC017176C0F01FLL}},{{0xFECC017176C0F01FLL,0xBBE700BB50D068E1LL,18446744073709551615UL,1UL,0xC418253AE16C3483LL,0xC418253AE16C3483LL,1UL,18446744073709551615UL}},{{0x8DCE1A7298296E33LL,0x8DCE1A7298296E33LL,18446744073709551615UL,0xFECC017176C0F01FLL,1UL,0x0E78C54BDD4F4E5FLL,18446744073709551615UL,0UL}},{{0x0E78C54BDD4F4E5FLL,18446744073709551606UL,0x8DCE1A7298296E33LL,1UL,1UL,0UL,0xAEFF10BDA14FEA5ALL,0UL}},{{18446744073709551606UL,0xFECC017176C0F01FLL,0xC418253AE16C3483LL,0xFECC017176C0F01FLL,18446744073709551606UL,0UL,18446744073709551615UL,18446744073709551615UL}},{{0xC418253AE16C3483LL,0xD6B129D892FCE076LL,0xBBE700BB50D068E1LL,1UL,0xD2438920F015E6DFLL,1UL,0UL,0xFECC017176C0F01FLL}},{{0UL,18446744073709551615UL,0xBBE700BB50D068E1LL,18446744073709551613UL,18446744073709551613UL,0xBBE700BB50D068E1LL,0xFECC017176C0F01FLL,1UL}},{{0xAEFF10BDA14FEA5ALL,0xC418253AE16C3483LL,18446744073709551606UL,18446744073709551613UL,0UL,0UL,1UL,18446744073709551615UL}},{{0x0E78C54BDD4F4E5FLL,18446744073709551615UL,0UL,0xD2438920F015E6DFLL,18446744073709551613UL,0UL,18446744073709551613UL,0xD2438920F015E6DFLL}},{{0xFECC017176C0F01FLL,0xC418253AE16C3483LL,0xFECC017176C0F01FLL,18446744073709551606UL,0UL,18446744073709551615UL,18446744073709551615UL,0xAEFF10BDA14FEA5ALL}}};
                    const int *l_1283 = &l_1239;
                    unsigned char *l_1285 = &l_1247.f1;
                    int i, j, k;
                    if (l_1280[7][0][7])
                        break;
                    if (((safe_add_func_int32_t_s_s(((**l_1251) = (0xE2EFL & p_26)), (((((*l_1283) || ((l_1284[1] = (((*l_1283) ^ p_26) || 0x7AL)) ^ (*g_960))) , l_1285) != l_1286[9][0]) | (*l_1283)))) && 0UL))
                    {
                        g_636[0] = &l_1229;
                    }
                    else
                    {
                        const int **l_1288[9][3] = {{&g_607,&g_607,&g_607},{&g_636[0],&g_636[0],&g_636[0]},{&l_1283,&l_1283,&g_636[0]},{&g_636[0],&g_636[0],&g_636[0]},{&g_636[0],&g_607,&g_636[0]},{&g_636[0],&g_607,&g_636[0]},{&l_1283,&g_636[0],&g_636[0]},{&g_636[0],&g_636[0],&g_636[0]},{&g_607,&g_636[0],&g_636[0]}};
                        const int ***l_1287 = &l_1288[0][1];
                        int i, j;
                        (*l_1287) = &l_1283;
                        (**l_1287) = l_1264;
                        l_1283 = l_1283;
                    }
                    l_1289 = &g_18[(g_323 + 2)][g_323];
                }
                else
                {
                    unsigned long long **l_1291[3];
                    unsigned long long ***l_1290 = &l_1291[2];
                    int l_1292 = (-1L);
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1291[i] = &l_1258;
                    (*l_1290) = &l_1249[1][7];
                    for (g_151.f1 = 0; (g_151.f1 <= 0); g_151.f1 += 1)
                    {
                        unsigned ***l_1293 = &g_652;
                        (*l_1085) = ((l_1292 , 0x8FL) , ((void*)0 != l_1293));
                    }
                }
                l_1294 = ((*l_1085) = (0xD0DDFBE6L == ((**l_1251) , g_127[1][6])));
                for (g_1116 = 0; (g_1116 <= 0); g_1116 += 1)
                {
                    unsigned short l_1299[10][7][3] = {{{65530UL,0x59EBL,0xFFC2L},{0xEA66L,1UL,0x6E11L},{0x1FD2L,0x59EBL,0x1FD2L},{1UL,65534UL,0x0F7FL},{0x2510L,65529UL,0x4F98L},{8UL,1UL,0x6E11L},{0xA565L,0xBC4BL,0x0EA8L}},{{8UL,0x0F7FL,0xD1C7L},{0x2510L,65535UL,0x77DBL},{1UL,8UL,0UL},{0x1FD2L,0xBC4BL,65526UL},{0xEA66L,0UL,0UL},{65530UL,65529UL,0x77DBL},{1UL,0xEA66L,0xD1C7L}},{{65526UL,65527UL,65534UL},{9UL,0UL,65532UL},{0x2510L,65527UL,0x2510L},{0xEA66L,9UL,0xD1C7L},{0xC905L,0xBC4BL,1UL},{0UL,65534UL,65532UL},{0x4F98L,0xE447L,0x77DBL}},{{0UL,0UL,0x6E11L},{0xC905L,65529UL,0xA565L},{0xEA66L,0xD1C7L,65534UL},{0x2510L,0xE447L,0xFFC2L},{9UL,0xEA66L,65534UL},{0x0EA8L,0xBC4BL,0xA565L},{1UL,65527UL,0x6E11L}},{{0xFFC2L,65527UL,0x77DBL},{9UL,1UL,65532UL},{1UL,65527UL,1UL},{0xEA66L,65527UL,0xD1C7L},{0x8439L,0xBC4BL,0x2510L},{0UL,0xEA66L,65532UL},{0x1FD2L,0xE447L,65534UL}},{{0UL,0xD1C7L,0x6E11L},{0x8439L,65529UL,0x843CL},{0xEA66L,0UL,65534UL},{1UL,0xE447L,0x0EA8L},{9UL,65534UL,65534UL},{0xFFC2L,0xBC4BL,0x843CL},{1UL,9UL,0x6E11L}},{{0x0EA8L,65527UL,65534UL},{9UL,0UL,65532UL},{0x2510L,65527UL,0x2510L},{0xEA66L,9UL,0xD1C7L},{0x1FD2L,65535UL,0xA565L},{9UL,65532UL,0xD1C7L},{0x77DBL,65529UL,65530UL}},{{9UL,9UL,0x0F7FL},{0x1FD2L,0UL,0x0EA8L},{1UL,65527UL,65532UL},{0x843CL,65529UL,0x8439L},{1UL,1UL,65532UL},{0xC905L,65535UL,0x0EA8L},{0x914BL,0UL,0x0F7FL}},{{0x8439L,0xE447L,65530UL},{1UL,0x914BL,0xD1C7L},{0xA565L,0xE447L,0xA565L},{1UL,0UL,65527UL},{0x4F98L,65535UL,0x843CL},{9UL,1UL,0xD1C7L},{65534UL,65529UL,65526UL}},{{9UL,65527UL,0x0F7FL},{0x4F98L,0UL,0xFFC2L},{1UL,9UL,65532UL},{0xA565L,65529UL,0xC905L},{1UL,65532UL,65532UL},{0x8439L,65535UL,0xFFC2L},{0x914BL,1UL,0x0F7FL}}};
                    unsigned short *l_1319[9][6] = {{&l_1299[9][5][1],&l_1299[9][5][1],&g_330,&l_1299[9][4][2],&g_170,&l_1299[9][4][2]},{&g_330,&l_1299[9][5][1],&g_330,&g_330,&g_170,&g_330},{&g_170,&l_1299[9][5][1],&g_330,&g_170,&l_1299[9][5][1],&l_1299[9][4][2]},{&l_1299[9][4][2],(void*)0,&g_330,&g_170,&l_1299[9][5][1],&l_1299[9][4][2]},{&l_1299[9][5][1],&l_1299[9][5][1],&l_1299[9][4][2],&l_1299[9][4][2],&l_1299[9][5][1],&l_1299[9][5][1]},{&g_170,&g_170,&g_330,&g_330,&g_170,&l_1299[9][5][1]},{&g_330,(void*)0,&l_1299[9][4][2],&g_330,&g_170,&l_1299[9][4][2]},{&g_330,&g_170,&g_330,&g_330,&l_1299[9][5][1],&g_330},{&g_170,&g_170,&g_170,&l_1299[9][4][2],&g_170,&g_330}};
                    int i, j, k;
                    g_18[(g_323 + 2)][g_323] = ((safe_mod_func_uint64_t_u_u((safe_mod_func_uint16_t_u_u(((p_26 >= (((l_1299[9][5][1] ^ (safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(((g_330 = (safe_add_func_uint32_t_u_u(((*l_1264) = ((*l_1234) = (((*l_1085) && (l_1308[5] == l_1309)) & ((safe_mul_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint64_t_u_u((p_26 , 18446744073709551612UL), (g_928 = 1UL))), 0)), ((safe_sub_func_uint64_t_u_u(18446744073709551614UL, (*g_960))) < (*g_960)))) ^ p_26)))), p_26))) , (*g_688)), 4)), p_26))) && p_26) != (*g_641))) && 0xB8124D9703A18BC1LL), g_18[4][0])), (**g_959))) && 1UL);
                    for (g_151.f1 = 0; (g_151.f1 <= 0); g_151.f1 += 1)
                    {
                        int *l_1320 = &l_1250;
                        g_636[0] = (*l_1251);
                        l_1320 = &l_1229;
                        return &g_78;
                    }
                    return &g_18[3][1];
                }
            }
        }
        if ((p_26 , (~0x273557CDL)))
        {
            short l_1323 = 0xB98BL;
            int *l_1326 = &l_1239;
            union U0 l_1329[4] = {{0x69E0L},{0x69E0L},{0x69E0L},{0x69E0L}};
            int i;
            (**l_1251) = p_26;
            (**l_1251) = p_26;
            (*l_1327) = p_26;
        }
        else
        {
            unsigned long long *l_1336[5];
            int l_1337[8][7] = {{(-8L),1L,(-10L),0L,0xE18817DCL,0x63CFC00BL,6L},{6L,0L,0xD2768BCCL,(-10L),0x021DC837L,0xEDD98152L,0L},{0x00AC4340L,0L,(-10L),0x24F3EA5EL,1L,0x24F3EA5EL,(-10L)},{0xE18817DCL,0xE18817DCL,(-9L),0x24F3EA5EL,0x7F551E56L,1L,0L},{1L,0x7F551E56L,0x00AC4340L,(-10L),6L,0L,0L},{5L,0x0DFFE3B6L,1L,0L,0x7F551E56L,1L,0x7F551E56L},{0x021DC837L,6L,6L,0x021DC837L,1L,1L,0xD2768BCCL},{0L,1L,0x0DFFE3B6L,5L,0x021DC837L,0L,0x24F3EA5EL}};
            int i, j;
            for (i = 0; i < 5; i++)
                l_1336[i] = &g_928;
            (*l_1251) = &l_1229;
            (*l_1251) = func_44((safe_lshift_func_int16_t_s_u((safe_add_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(2UL, (l_1258 == l_1336[4]))), ((*l_1085) = l_1337[6][0]))), (g_170 = ((*g_960) , (**g_687))))), l_1339, p_26, g_148[0].f0, &l_1294);
            if ((*l_1085))
            {
                (*l_1251) = &l_1337[6][0];
            }
            else
            {
                int *l_1340[8][8] = {{&l_1337[6][0],&l_1337[6][0],&l_1229,&l_1229,(void*)0,(void*)0,&l_1337[6][0],(void*)0},{&l_1337[6][0],(void*)0,&l_1229,(void*)0,&l_1337[6][0],&l_1337[6][0],&l_1229,&l_1338[3]},{&l_1229,(void*)0,(void*)0,&g_18[3][0],&l_1338[3],&l_1229,(void*)0,(void*)0},{&l_1229,&g_160,(void*)0,&g_82,&l_1337[6][0],&l_1229,&l_1229,&l_1337[6][0]},{&l_1338[3],&l_1229,&l_1229,&l_1338[3],&g_18[3][1],&g_18[3][1],&l_1337[6][0],(void*)0},{&g_82,(void*)0,&g_160,&l_1229,&g_18[3][1],(void*)0,&l_1338[2],&g_18[3][0]},{&g_18[3][0],(void*)0,(void*)0,&l_1229,&g_160,&g_18[3][1],&g_160,&l_1229},{(void*)0,&l_1229,(void*)0,&l_1337[6][0],&l_1337[6][0],&l_1229,&l_1338[3],&g_160}};
                int i, j;
                return &g_78;
            }
            (*l_1251) = (void*)0;
        }
    }
    else
    {
        int *l_1342 = &l_1338[3];
        (*l_1339) = ((**g_687) != l_1341);
        (*l_1342) = ((*l_1339) = func_31(g_689));
    }
    return &g_78;
}







static unsigned short func_31(unsigned p_32)
{
    union U0 *l_907 = &g_702;
    int **l_914[2];
    int ***l_913 = &l_914[1];
    unsigned * const l_920 = &g_323;
    char *l_969 = &g_141;
    char *l_972 = &g_73;
    unsigned short *l_973[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    short l_974 = 0xE8FBL;
    union U0 ***l_992 = &g_184;
    int *l_1046 = &g_78;
    unsigned long long l_1047 = 0x09E25A14B53EB1AELL;
    int i;
    for (i = 0; i < 2; i++)
        l_914[i] = &g_347;
    for (g_151.f3 = 3; (g_151.f3 >= 0); g_151.f3 -= 1)
    {
        const unsigned short l_908 = 1UL;
        int ****l_915 = &l_913;
        long long l_921 = 0x0123F4C71A94523FLL;
        l_907 = l_907;
        if (l_908)
            continue;
        l_921 = (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(p_32, ((((*l_915) = l_913) != (void*)0) , (p_32 && (g_916[2][1][0] == &g_917[6][0]))))), (((*g_530) ^ ((safe_lshift_func_uint8_t_u_u(p_32, 1)) < ((((p_32 >= 0x65A6L) || 0L) , l_920) != l_920))) < (-1L))));
        for (g_702.f1 = 0; (g_702.f1 <= 3); g_702.f1 += 1)
        {
            const char l_932 = (-1L);
            union U0 l_945 = {1L};
            int l_946 = 0L;
            short l_965 = 0xEDD8L;
            int **l_966 = (void*)0;
            union U0 *l_967 = &g_702;
            union U0 **l_968 = &l_907;
        }
    }
    g_636[0] = func_44(((*l_969) = (!p_32)), &g_18[4][0], p_32, ((((safe_sub_func_int32_t_s_s(p_32, 5UL)) ^ ((*l_972) = p_32)) , (void*)0) != (p_32 , l_973[2])), &g_78);
    if (l_974)
    {
        int l_999 = 2L;
        union U0 *l_1012 = &g_151;
        const int **l_1026 = &g_636[0];
        const int ***l_1025 = &l_1026;
        for (g_151.f3 = 0; (g_151.f3 >= (-15)); g_151.f3 = safe_sub_func_uint8_t_u_u(g_151.f3, 7))
        {
            unsigned char l_981 = 0x5FL;
            int l_993 = 0x14343637L;
            unsigned short l_998 = 65529UL;
            union U0 l_1008 = {8L};
            short l_1039 = 0x199BL;
            int *l_1045 = &g_160;
            l_981 = (safe_rshift_func_uint16_t_u_s((safe_div_func_uint64_t_u_u((0x48701E60L & p_32), 18446744073709551607UL)), 13));
            for (g_702.f0 = 0; (g_702.f0 != 27); g_702.f0 = safe_add_func_uint8_t_u_u(g_702.f0, 9))
            {
                unsigned char *l_988 = (void*)0;
                unsigned char *l_989 = &l_981;
                int *l_990 = &g_80;
                long long l_1022[9][8] = {{0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL},{0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL},{0xEA0E2DF613731C82LL,0xEA0E2DF613731C82LL,0xD3725D039656BC93LL,0xEA0E2DF613731C82LL,0xEA0E2DF613731C82LL,0xD3725D039656BC93LL,0xEA0E2DF613731C82LL,0xEA0E2DF613731C82LL},{0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL},{0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL},{0xEA0E2DF613731C82LL,0xEA0E2DF613731C82LL,0xD3725D039656BC93LL,0xEA0E2DF613731C82LL,0xEA0E2DF613731C82LL,0xD3725D039656BC93LL,0xEA0E2DF613731C82LL,0xEA0E2DF613731C82LL},{0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL},{0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL,0xD79F51CB1586DD13LL,0xEA0E2DF613731C82LL,0xD79F51CB1586DD13LL},{0xEA0E2DF613731C82LL,0xEA0E2DF613731C82LL,0xD3725D039656BC93LL,0xEA0E2DF613731C82LL,0xEA0E2DF613731C82LL,0xD3725D039656BC93LL,0xEA0E2DF613731C82LL,0xEA0E2DF613731C82LL}};
                int i, j;
                if ((safe_div_func_uint8_t_u_u((*g_530), ((safe_lshift_func_uint8_t_u_s(p_32, p_32)) | ((*l_989) = (~p_32))))))
                {
                    int *l_995[6][6] = {{(void*)0,&g_18[3][1],&g_160,&g_160,&g_18[3][1],(void*)0},{&g_78,&g_80,&g_160,(void*)0,&g_18[3][0],&g_78},{&l_993,&g_80,(void*)0,&l_993,&g_18[3][1],&l_993},{&l_993,&g_18[3][1],&l_993,(void*)0,&g_80,&l_993},{&g_78,&g_18[3][0],(void*)0,&g_160,&g_80,&g_78},{(void*)0,&g_18[3][1],&g_160,&g_160,&g_18[3][1],(void*)0}};
                    unsigned long long l_1000 = 18446744073709551615UL;
                    unsigned long long *l_1010[10] = {&g_928,&g_928,&g_928,&g_928,&g_928,&g_928,&g_928,&g_928,&g_928,&g_928};
                    unsigned long long **l_1009 = &l_1010[5];
                    int i, j;
                    if (p_32)
                    {
                        unsigned long long *l_994 = &g_928;
                        (**l_913) = l_990;
                        (**l_913) = ((safe_unary_minus_func_uint64_t_u(((*l_994) = ((p_32 | ((l_993 = ((((void*)0 == l_992) && l_981) , ((**g_687) , (**g_687)))) | 1L)) , p_32)))) , l_995[1][1]);
                        g_607 = (**l_913);
                    }
                    else
                    {
                        int l_1011[9][2] = {{0x2057407BL,0x2057407BL},{0x2057407BL,0L},{0x2057407BL,0x2057407BL},{0x2057407BL,0L},{0x2057407BL,0x2057407BL},{0x2057407BL,0L},{0x2057407BL,0x2057407BL},{0x2057407BL,0L},{0x2057407BL,0x2057407BL}};
                        int i, j;
                        (*l_990) = (safe_mul_func_uint8_t_u_u((l_999 = l_998), ((0xE9EFA1D5L <= (l_1000 || p_32)) != (safe_div_func_int32_t_s_s(0xAC9A45C2L, ((**g_438) ^ ((*l_969) = g_1003)))))));
                        if (p_32)
                            continue;
                        l_1011[3][0] = (safe_rshift_func_int16_t_s_s(((p_32 != (safe_div_func_int8_t_s_s(((l_1008 , l_1009) != &g_461), (*l_990)))) , (l_995[1][0] != &l_999)), 8));
                        l_1012 = l_1012;
                    }
                    (*l_990) = p_32;
                }
                else
                {
                    const int *l_1013 = &l_993;
                    const int **l_1014 = &l_1013;
                    const int **l_1015 = &g_636[0];
                    for (g_323 = 0; (g_323 <= 0); g_323 += 1)
                    {
                        return (*g_688);
                    }
                    (**l_913) = l_990;
                    (*l_1015) = ((*l_1014) = l_1013);
                    (***l_913) = (g_73 <= ((safe_sub_func_int8_t_s_s((p_32 || ((*l_989) = ((safe_div_func_int64_t_s_s(p_32, (safe_div_func_uint8_t_u_u(255UL, ((*l_969) = l_1022[6][7]))))) || (-3L)))), 0xC1L)) | (safe_rshift_func_uint16_t_u_u(5UL, ((void*)0 == l_1025)))));
                }
                (*l_990) = 0x5FBA1E70L;
            }
        }
        return (**g_687);
    }
    else
    {
        int *l_1057[7][4] = {{&g_78,&g_82,&g_80,&g_82},{&g_80,(void*)0,&g_18[4][0],&g_80},{&g_82,(void*)0,(void*)0,&g_82},{(void*)0,&g_82,&g_80,&g_78},{(void*)0,&g_80,(void*)0,&g_18[4][0]},{&g_82,&g_78,&g_18[4][0],&g_18[4][0]},{&g_80,&g_80,&g_80,&g_78}};
        int i, j;
        for (g_151.f3 = 0; (g_151.f3 >= (-19)); --g_151.f3)
        {
            for (g_80 = 10; (g_80 == 13); g_80 = safe_add_func_int32_t_s_s(g_80, 5))
            {
                int *l_1055 = (void*)0;
                int *l_1056[8] = {&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11,&g_11};
                int *l_1058 = &g_160;
                int i;
                l_1058 = ((((*l_1046) = p_32) , (safe_add_func_uint16_t_u_u(p_32, p_32))) , ((**l_913) = ((g_11 = (p_32 && (**g_687))) , l_1057[2][3])));
                (**l_913) = (void*)0;
            }
            (*l_1046) = 1L;
        }
        return (**g_687);
    }
}







static char func_38(const int * p_39, unsigned p_40, int * p_41, int * p_42, int * p_43)
{
    unsigned l_798[6] = {0x8E7D104EL,0x8E7D104EL,0x8E7D104EL,0x8E7D104EL,0x8E7D104EL,0x8E7D104EL};
    long long *l_799 = &g_88[1];
    int **l_802 = &g_347;
    int *l_804[7];
    int **l_803[7][3] = {{&l_804[6],&l_804[6],&l_804[0]},{&l_804[0],&l_804[6],&l_804[0]},{&l_804[6],&l_804[0],&l_804[0]},{&l_804[0],&l_804[6],&l_804[0]},{&l_804[6],&l_804[6],&l_804[0]},{&l_804[0],&l_804[6],&l_804[0]},{&l_804[6],&l_804[0],&l_804[0]}};
    int ***l_805 = &l_803[1][2];
    int l_806 = 7L;
    unsigned char *l_809[1][8] = {{&g_151.f1,&g_151.f1,&g_151.f1,&g_151.f1,&g_151.f1,&g_151.f1,&g_151.f1,&g_151.f1}};
    int l_863 = 0xFC51E860L;
    const int *l_886 = &g_82;
    long long l_906 = (-4L);
    int i, j;
    for (i = 0; i < 7; i++)
        l_804[i] = (void*)0;
    g_176 = (((*l_799) = l_798[2]) , (safe_add_func_int16_t_s_s((*g_641), (*g_641))));
    for (g_702.f4 = (-22); (g_702.f4 < 15); g_702.f4 = safe_add_func_uint16_t_u_u(g_702.f4, 4))
    {
        short l_824 = 0xDB0DL;
        unsigned **l_847[2][7][5] = {{{&g_565,&g_565,&g_565,&g_572,&g_572},{&g_565,&g_565,&g_565,&g_572,&g_565},{&g_565,&g_565,&g_572,&g_565,&g_565},{&g_572,&g_565,&g_565,&g_572,(void*)0},{&g_572,&g_565,(void*)0,(void*)0,&g_565},{&g_572,(void*)0,&g_572,&g_565,&g_565},{&g_572,&g_572,&g_565,&g_572,&g_565}},{{&g_572,&g_565,&g_572,&g_565,&g_572},{&g_572,&g_565,&g_565,&g_572,(void*)0},{&g_572,&g_565,(void*)0,(void*)0,&g_565},{&g_572,(void*)0,&g_572,&g_565,&g_565},{&g_572,&g_572,&g_565,&g_572,&g_565},{&g_572,&g_565,&g_572,&g_565,&g_572},{&g_572,&g_565,&g_565,&g_572,(void*)0}}};
        unsigned ***l_846 = &l_847[0][0][0];
        union U0 l_862 = {0x269AL};
        int l_864 = 0x825AAB4FL;
        int l_865 = 0xBC9AE906L;
        unsigned long long *l_882 = (void*)0;
        unsigned long long **l_881[9][10][2] = {{{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,(void*)0},{&l_882,(void*)0},{&l_882,&l_882},{(void*)0,&l_882},{&l_882,&l_882},{&l_882,&l_882}},{{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{(void*)0,&l_882},{&l_882,(void*)0},{&l_882,(void*)0},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882}},{{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,(void*)0},{&l_882,&l_882},{&l_882,&l_882},{(void*)0,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882}},{{&l_882,(void*)0},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{(void*)0,&l_882},{&l_882,&l_882},{&l_882,(void*)0},{&l_882,&l_882},{&l_882,&l_882}},{{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{(void*)0,&l_882},{&l_882,&l_882},{(void*)0,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,(void*)0}},{{&l_882,&l_882},{&l_882,&l_882},{&l_882,(void*)0},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{(void*)0,&l_882},{&l_882,&l_882},{(void*)0,&l_882}},{{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,(void*)0},{&l_882,&l_882},{&l_882,&l_882},{(void*)0,&l_882},{&l_882,(void*)0},{&l_882,&l_882}},{{&l_882,&l_882},{&l_882,(void*)0},{&l_882,&l_882},{&l_882,&l_882},{&l_882,(void*)0},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882}},{{(void*)0,&l_882},{&l_882,(void*)0},{&l_882,&l_882},{&l_882,&l_882},{&l_882,&l_882},{(void*)0,&l_882},{(void*)0,&l_882},{&l_882,&l_882},{&l_882,(void*)0},{(void*)0,&l_882}}};
        int i, j, k;
        if ((l_809[0][7] != (*g_438)))
        {
            unsigned l_812 = 0x8609F81AL;
            int *l_839 = &g_82;
            unsigned **l_845 = &g_572;
            unsigned ***l_844 = &l_845;
            g_80 = (safe_mul_func_uint8_t_u_u(((l_812 , 7L) > (l_812 ^ (safe_unary_minus_func_int32_t_s((safe_div_func_uint64_t_u_u(p_40, l_812)))))), p_40));
            for (g_205 = 0; (g_205 < 14); g_205++)
            {
                char l_827[7][3][10] = {{{1L,0xD6L,1L,1L,1L,0xD6L,1L,1L,1L,0xD6L},{0x76L,1L,(-1L),1L,0x76L,1L,(-1L),1L,0x76L,1L},{1L,1L,1L,0xD6L,1L,1L,1L,0xD6L,1L,1L}},{{0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L},{1L,0xD6L,1L,1L,1L,0xD6L,1L,1L,1L,0xD6L},{0x76L,1L,(-1L),1L,0x76L,1L,(-1L),1L,0x76L,1L}},{{1L,1L,1L,0xD6L,1L,1L,1L,0xD6L,1L,1L},{0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L},{1L,0xD6L,1L,1L,1L,0xD6L,1L,1L,1L,0xD6L}},{{0x76L,1L,(-1L),1L,0x76L,1L,(-1L),1L,0x76L,1L},{1L,1L,1L,0xD6L,1L,1L,1L,0xD6L,1L,1L},{0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L}},{{1L,0xD6L,1L,1L,1L,0xD6L,1L,1L,1L,0xD6L},{0x76L,1L,(-1L),1L,0x76L,1L,(-1L),1L,0x76L,1L},{1L,1L,1L,0xD6L,1L,1L,1L,0xD6L,1L,1L}},{{0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L},{1L,0xD6L,1L,1L,1L,0xD6L,1L,1L,1L,0xD6L},{0x76L,1L,(-1L),1L,0x76L,1L,(-1L),1L,0x76L,1L}},{{1L,1L,1L,0xD6L,1L,1L,1L,0xD6L,1L,1L},{0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L,(-1L),0xD6L,0x76L,0xD6L},{1L,0xD6L,1L,1L,1L,0xD6L,1L,1L,1L,0xD6L}}};
                int l_831 = 0x00DC3AE1L;
                int i, j, k;
                if ((*p_39))
                    break;
                (**l_805) = &g_160;
                g_160 = (-1L);
                for (g_80 = 0; (g_80 != 27); ++g_80)
                {
                    char *l_825 = &g_73;
                    int l_826 = (-1L);
                    char *l_828 = &l_827[4][2][3];
                    if ((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((((*l_825) = l_824) ^ (((*l_828) = (l_826 ^ ((*g_565) , (l_827[4][2][3] > g_18[3][0])))) >= (65528UL & (((safe_add_func_uint64_t_u_u((g_151.f2 = (p_40 , l_831)), (p_40 | 6L))) & g_127[1][6]) , (-10L))))) > (-3L)), (*g_530))), p_40)))
                    {
                        unsigned ***l_832 = (void*)0;
                        unsigned ***l_833 = (void*)0;
                        unsigned ***l_834 = &g_652;
                        (*l_834) = g_652;
                        (*l_802) = p_42;
                        (*l_802) = &g_82;
                    }
                    else
                    {
                        unsigned short l_835 = 0x93C7L;
                        g_160 = ((l_835 && (!p_40)) && g_111.f1);
                    }
                    for (g_151.f0 = (-29); (g_151.f0 > (-22)); g_151.f0 = safe_add_func_uint64_t_u_u(g_151.f0, 3))
                    {
                        int l_838 = 0x78BBDA18L;
                        l_838 = 0x025F1D5FL;
                        g_607 = &l_826;
                        l_839 = ((*l_802) = (p_40 , p_41));
                    }
                    l_831 = (((((((safe_sub_func_int32_t_s_s((g_151.f1 & (g_78 = ((safe_lshift_func_int16_t_s_s(0xE105L, 3)) ^ p_40))), 0x2B5A0BADL)) > (*g_118)) , l_844) == ((l_827[4][2][3] , ((l_827[6][1][4] == (g_702.f4 < 1UL)) & 0x7037L)) , l_846)) <= p_40) < (*p_43)) && 65535UL);
                }
            }
        }
        else
        {
            unsigned l_848 = 18446744073709551608UL;
            union U0 *l_849[6];
            int l_850 = (-9L);
            int i;
            for (i = 0; i < 6; i++)
                l_849[i] = &g_702;
            if (l_848)
            {
                unsigned l_851 = 4294967295UL;
                int *l_852 = (void*)0;
                union U0 l_853 = {-1L};
                unsigned long long *l_861[7][7] = {{&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2},{&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2},{&g_702.f2,&g_702.f2,&g_702.f2,(void*)0,&g_702.f2,(void*)0,&g_702.f2},{&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2},{&g_702.f2,(void*)0,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2},{&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2,&g_702.f2},{&g_702.f2,(void*)0,&g_702.f2,(void*)0,&g_702.f2,&g_702.f2,&g_702.f2}};
                int i, j;
                (*g_184) = l_849[5];
                if (l_848)
                    break;
                if (l_824)
                {
                    unsigned char l_854[9][9] = {{246UL,4UL,8UL,0UL,0x1AL,0x83L,0UL,2UL,255UL},{0x83L,1UL,255UL,246UL,246UL,246UL,255UL,1UL,0x83L},{1UL,246UL,0x1AL,0x6FL,246UL,0UL,4UL,7UL,255UL},{2UL,7UL,0x6FL,0x39L,0x1AL,0x1AL,0x39L,0x6FL,7UL},{1UL,246UL,4UL,8UL,0UL,0x1AL,0x83L,0UL,2UL},{0x83L,0x39L,246UL,255UL,0x6FL,0UL,0x6FL,255UL,246UL},{246UL,246UL,0x5FL,2UL,255UL,246UL,0x6FL,255UL,1UL},{8UL,7UL,1UL,4UL,1UL,0x83L,0x83L,1UL,4UL},{0x5FL,246UL,0x5FL,0x1AL,0UL,7UL,246UL,0x6FL,0x1AL}};
                    int i, j;
                    if (l_824)
                    {
                        g_636[0] = ((*l_802) = ((**l_805) = &g_160));
                        if ((*g_347))
                            continue;
                        (*g_347) = (&g_640 != (void*)0);
                    }
                    else
                    {
                        return (*g_118);
                    }
                    l_854[1][7] = 1L;
                }
                else
                {
                    unsigned short l_857 = 0UL;
                    char *l_860 = &g_113;
                    union U0 *l_866 = &l_853;
                    union U0 *l_867[8] = {&l_853,&l_853,&l_853,&l_853,&l_853,&l_853,&l_853,&l_853};
                    unsigned long long ** const l_883 = &l_861[5][0];
                    int i;
                    if (l_850)
                        break;
                    if ((l_865 = (safe_mod_func_uint8_t_u_u(((**g_438) = (l_864 = l_863)), p_40))))
                    {
                        int l_868 = 1L;
                        unsigned l_884 = 8UL;
                        g_160 = ((l_866 != l_867[3]) | ((l_868 && (p_40 && p_40)) , ((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(p_40, l_857)), (**g_438))), (**g_687))) <= p_40)));
                    }
                    else
                    {
                        union U0 *l_885 = &g_702;
                        const int **l_887[5][7] = {{&g_636[0],&l_886,&g_636[0],&l_886,&g_636[0],&l_886,&g_636[0]},{&l_886,&l_886,&l_886,&l_886,&l_886,&l_886,&l_886},{&g_607,&l_886,&g_607,&l_886,&g_607,&l_886,&g_607},{&l_886,&l_886,&l_886,&l_886,&l_886,&l_886,&l_886},{&g_636[0],&l_886,&g_636[0],&l_886,&g_636[0],&l_886,&g_636[0]}};
                        int i, j;
                        (*g_184) = l_885;
                        (*l_802) = p_41;
                        g_607 = l_886;
                        (*l_802) = (void*)0;
                    }
                    if ((*p_43))
                        break;
                }
            }
            else
            {
                g_607 = &g_80;
            }
        }
        g_160 = (((*l_799) = (safe_add_func_uint64_t_u_u(((((safe_add_func_uint32_t_u_u((0x69L || (safe_lshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s(l_862.f3, p_40)), 11))), 0x2AC3C8AFL)) , g_73) & g_148[0].f1) | 0UL), p_40))) && l_864);
        return (*g_118);
    }
    return l_906;
}







static int * func_44(char p_45, int * p_46, unsigned p_47, char p_48, int * p_49)
{
    const unsigned long long l_610 = 0x656D7FFD3F621446LL;
    union U0 * const *l_616[8] = {&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185,&g_185};
    union U0 * const **l_615 = &l_616[3];
    union U0 * const ***l_614[9];
    int l_633 = 0xC30B06ACL;
    unsigned short l_646 = 0xAFA8L;
    int *l_670 = (void*)0;
    union U0 l_683 = {3L};
    char l_698 = 0xCBL;
    int *l_795 = (void*)0;
    int i;
    for (i = 0; i < 9; i++)
        l_614[i] = &l_615;
    if (l_610)
    {
        int *l_611 = &g_80;
        unsigned short *l_651 = &g_330;
        unsigned short **l_650 = &l_651;
        union U0 l_685 = {0x9943L};
        union U0 l_693 = {0xFFE5L};
        int *l_742[8][5][5] = {{{&g_82,&g_160,&g_160,&g_82,&g_160},{&g_82,&g_82,&g_78,&g_82,&g_82},{&g_160,&g_82,&g_160,&g_160,&g_82},{&g_82,&g_160,&g_160,&g_82,&g_160},{&g_82,&g_82,&g_78,&g_82,&g_82}},{{&g_160,&g_82,&g_160,&g_160,&g_82},{&g_82,&g_160,&g_160,&g_82,&g_160},{&g_82,&g_82,&g_78,&g_82,&g_82},{&g_160,&g_160,&g_78,&g_78,&g_160},{&g_160,&g_78,&g_78,&g_160,&g_78}},{{&g_160,&g_160,&g_82,&g_160,&g_160},{&g_78,&g_160,&g_78,&g_78,&g_160},{&g_160,&g_78,&g_78,&g_160,&g_78},{&g_160,&g_160,&g_82,&g_160,&g_160},{&g_78,&g_160,&g_78,&g_78,&g_160}},{{&g_160,&g_78,&g_78,&g_160,&g_78},{&g_160,&g_160,&g_82,&g_160,&g_160},{&g_78,&g_160,&g_78,&g_78,&g_160},{&g_160,&g_78,&g_78,&g_160,&g_78},{&g_160,&g_160,&g_82,&g_160,&g_160}},{{&g_78,&g_160,&g_78,&g_78,&g_160},{&g_160,&g_78,&g_78,&g_160,&g_78},{&g_160,&g_160,&g_82,&g_160,&g_160},{&g_78,&g_160,&g_78,&g_78,&g_160},{&g_160,&g_78,&g_78,&g_160,&g_78}},{{&g_160,&g_160,&g_82,&g_160,&g_160},{&g_78,&g_160,&g_78,&g_78,&g_160},{&g_160,&g_78,&g_78,&g_160,&g_78},{&g_160,&g_160,&g_82,&g_160,&g_160},{&g_78,&g_160,&g_78,&g_78,&g_160}},{{&g_160,&g_78,&g_78,&g_160,&g_78},{&g_160,&g_160,&g_82,&g_160,&g_160},{&g_78,&g_160,&g_78,&g_78,&g_160},{&g_160,&g_78,&g_78,&g_160,&g_78},{&g_160,&g_160,&g_82,&g_160,&g_160}},{{&g_78,&g_160,&g_78,&g_78,&g_160},{&g_160,&g_78,&g_78,&g_160,&g_78},{&g_160,&g_160,&g_82,&g_160,&g_160},{&g_78,&g_160,&g_78,&g_78,&g_160},{&g_160,&g_78,&g_78,&g_160,&g_78}}};
        int l_775[10][6] = {{(-6L),0xD315CB3BL,(-6L),0x2CA0F879L,(-1L),(-1L)},{4L,(-6L),(-6L),4L,0xD315CB3BL,0L},{0L,4L,(-1L),4L,0L,0x2CA0F879L},{4L,0L,0x2CA0F879L,0x2CA0F879L,0L,4L},{(-6L),4L,0xD315CB3BL,0L,0xD315CB3BL,4L},{0xD315CB3BL,(-6L),0xD315CB3BL,0x7426B4B0L,0x7426B4B0L,0xD315CB3BL},{4L,4L,0x7426B4B0L,(-1L),(-6L),(-1L)},{0x2CA0F879L,4L,0x2CA0F879L,0xD315CB3BL,0x7426B4B0L,0x7426B4B0L},{0L,0x2CA0F879L,0x2CA0F879L,0L,4L,(-1L)},{(-1L),0L,0x7426B4B0L,0L,(-1L),0xD315CB3BL}};
        int i, j, k;
        (*l_611) = 0xF22A72F8L;
        (*l_611) = (*p_46);
        for (p_48 = 0; (p_48 <= 2); p_48 += 1)
        {
            union U0 ***l_613 = &g_184;
            union U0 ****l_612 = &l_613;
            char *l_617 = &g_141;
            unsigned long long **l_658[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int l_675 = (-1L);
            int i;
            for (g_160 = 3; (g_160 >= 0); g_160 -= 1)
            {
                return l_611;
            }
            for (g_151.f4 = 2; (g_151.f4 >= 0); g_151.f4 -= 1)
            {
                unsigned long long l_628 = 7UL;
                unsigned *l_648[1];
                unsigned **l_647 = &l_648[0];
                unsigned ***l_649 = &l_647;
                unsigned ***l_653 = &g_652;
                unsigned ***l_654 = (void*)0;
                unsigned **l_656 = &l_648[0];
                unsigned ***l_655[7][6] = {{&l_656,&l_656,&l_656,&l_656,&l_656,&l_656},{&l_656,&l_656,&l_656,&l_656,&l_656,&l_656},{&l_656,&l_656,&l_656,&l_656,&l_656,&l_656},{&l_656,&l_656,&l_656,&l_656,&l_656,&l_656},{&l_656,&l_656,&l_656,&l_656,&l_656,&l_656},{&l_656,&l_656,&l_656,&l_656,&l_656,&l_656},{&l_656,&l_656,&l_656,&l_656,&l_656,&l_656}};
                unsigned **l_657 = &l_648[0];
                int l_667 = 0xF8A610BEL;
                int *l_672[2];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_648[i] = &g_205;
                for (i = 0; i < 2; i++)
                    l_672[i] = &g_80;
                (*l_611) = (l_612 == l_614[7]);
                for (g_323 = 0; (g_323 <= 2); g_323 += 1)
                {
                    char **l_618 = &l_617;
                    unsigned l_626[7][8] = {{5UL,2UL,5UL,2UL,5UL,2UL,5UL,2UL},{5UL,2UL,5UL,2UL,5UL,2UL,5UL,2UL},{5UL,2UL,5UL,2UL,5UL,2UL,5UL,2UL},{5UL,2UL,5UL,2UL,5UL,2UL,5UL,2UL},{5UL,2UL,5UL,2UL,5UL,2UL,5UL,2UL},{5UL,2UL,5UL,2UL,5UL,2UL,5UL,2UL},{5UL,2UL,5UL,2UL,5UL,2UL,5UL,2UL}};
                    int l_629 = 0x391FA2DFL;
                    short *l_638 = &g_127[1][6];
                    short **l_637 = &l_638;
                    short ***l_639[4][5] = {{&l_637,&l_637,&l_637,&l_637,&l_637},{&l_637,&l_637,&l_637,&l_637,&l_637},{&l_637,&l_637,&l_637,&l_637,&l_637},{&l_637,&l_637,&l_637,&l_637,&l_637}};
                    int i, j;
                    if (((g_127[g_151.f4][(g_323 + 7)] , &p_48) == ((*l_618) = l_617)))
                    {
                        int i, j;
                        (*l_611) = (safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u((safe_mul_func_uint64_t_u_u(g_127[g_323][g_151.f4], (g_127[g_323][g_151.f4] != p_47))))) , (safe_mul_func_uint16_t_u_u(l_626[2][2], (g_627 >= 0x1115E590L)))), (l_629 = (l_628 = p_45))));
                        if ((*p_49))
                            continue;
                    }
                    else
                    {
                        int **l_630[10] = {&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611,&l_611};
                        int i;
                        l_611 = (g_347 = (void*)0);
                        return p_49;
                    }
                    for (g_113 = 1; (g_113 <= 7); g_113 += 1)
                    {
                        const int **l_634 = (void*)0;
                        const int **l_635[7];
                        int i;
                        for (i = 0; i < 7; i++)
                            l_635[i] = (void*)0;
                        l_633 = (safe_lshift_func_int8_t_s_s(p_45, p_45));
                        g_636[0] = (g_607 = p_49);
                    }
                    g_640 = l_637;
                }
                if (((!(g_127[g_151.f4][(p_48 + 1)] || (safe_mul_func_int16_t_s_s(g_127[g_151.f4][(p_48 + 7)], ((p_47 != (safe_div_func_uint64_t_u_u(l_646, ((((((*l_649) = l_647) == (l_657 = ((*l_653) = (((void*)0 != l_650) , g_652)))) | 0xD6L) <= (*g_118)) , 0x6BF330A4B4D0BC99LL)))) , (-2L)))))) != p_45))
                {
                    int *l_663 = &g_82;
                    for (g_205 = 0; (g_205 <= 2); g_205 += 1)
                    {
                        return l_611;
                    }
                    if ((((void*)0 == l_658[4]) , (-3L)))
                    {
                        int **l_659 = (void*)0;
                        int **l_660 = &g_347;
                        unsigned **l_662 = &g_572;
                        unsigned ***l_661 = &l_662;
                        (*l_660) = p_49;
                        (*l_661) = (void*)0;
                        p_49 = l_611;
                    }
                    else
                    {
                        long long *l_664[3][5][7] = {{{&g_151.f4,&g_151.f4,&g_88[1],&g_88[1],&g_88[1],&g_151.f4,&g_151.f4},{&g_151.f4,&g_151.f4,(void*)0,&g_151.f4,&g_88[1],(void*)0,&g_151.f4},{&g_151.f4,(void*)0,(void*)0,&g_88[1],&g_88[0],&g_88[0],&g_88[1]},{(void*)0,&g_88[0],(void*)0,&g_88[1],&g_151.f4,&g_88[1],(void*)0},{&g_151.f4,&g_151.f4,&g_88[1],&g_151.f4,(void*)0,&g_151.f4,&g_88[1]}},{{&g_88[1],(void*)0,&g_151.f4,&g_151.f4,(void*)0,&g_88[1],&g_88[1]},{&g_151.f4,&g_88[1],(void*)0,(void*)0,&g_151.f4,&g_151.f4,(void*)0},{&g_88[1],&g_88[1],&g_151.f4,&g_151.f4,&g_88[1],&g_151.f4,&g_151.f4},{&g_88[1],&g_88[1],&g_151.f4,(void*)0,(void*)0,&g_88[1],&g_151.f4},{&g_88[1],(void*)0,&g_151.f4,&g_151.f4,&g_151.f4,(void*)0,(void*)0}},{{(void*)0,&g_151.f4,&g_88[1],&g_151.f4,(void*)0,&g_88[1],&g_88[0]},{&g_151.f4,&g_88[1],&g_88[1],&g_151.f4,&g_88[1],(void*)0,&g_88[1]},{&g_88[0],&g_151.f4,(void*)0,&g_151.f4,&g_151.f4,(void*)0,&g_151.f4},{&g_151.f4,&g_151.f4,&g_88[1],&g_88[1],(void*)0,&g_151.f4,&g_151.f4},{(void*)0,&g_88[1],&g_151.f4,&g_88[1],(void*)0,&g_151.f4,(void*)0}}};
                        long long *l_666 = (void*)0;
                        long long **l_665 = &l_666;
                        int i, j, k;
                        l_663 = p_46;
                        l_667 = ((l_633 , ((g_127[1][9] == l_633) , l_664[1][0][3])) == ((*l_665) = (void*)0));
                        (*l_611) = (safe_rshift_func_uint16_t_u_s(p_48, 6));
                    }
                    l_670 = p_46;
                }
                else
                {
                    int **l_671[8][1][10] = {{{&l_670,&g_347,&g_347,&g_347,&g_347,&g_347,&l_670,&g_347,&g_347,&g_347}},{{&l_670,&l_611,&l_670,&g_347,&l_670,&l_611,&g_347,&g_347,&l_670,&l_670}},{{&l_670,&l_611,&l_611,&g_347,&l_670,&l_611,&l_670,&l_670,&l_611,&l_670}},{{&l_611,&g_347,&g_347,&l_611,&l_611,&l_670,&l_670,&g_347,&g_347,&l_670}},{{&l_611,&l_670,&g_347,&g_347,&g_347,&g_347,&g_347,&l_670,&g_347,&g_347}},{{&g_347,&l_611,(void*)0,&l_611,&g_347,&l_670,&l_670,&g_347,&l_611,&g_347}},{{&l_670,&l_611,&g_347,&g_347,&l_670,&l_670,&g_347,&l_611,&l_611,&g_347}},{{&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&g_347,&l_611,&l_670,&g_347}}};
                    int i, j, k;
                    g_636[0] = l_611;
                    for (g_141 = 0; (g_141 <= 2); g_141 += 1)
                    {
                        return &g_80;
                    }
                }
                for (g_78 = 0; (g_78 <= 2); g_78 += 1)
                {
                    for (g_160 = 0; (g_160 <= 2); g_160 += 1)
                    {
                        int **l_680 = &l_672[0];
                        l_672[0] = p_46;
                        l_633 = ((0xA14959A4027757CBLL != 0xDA71911B4F213077LL) != ((safe_div_func_int8_t_s_s(((g_78 && (*g_641)) ^ l_675), (safe_sub_func_int8_t_s_s((*g_118), (safe_add_func_int32_t_s_s((p_47 != ((*l_651) = 0UL)), (p_47 >= p_48))))))) < 4294967295UL));
                        (*l_680) = &g_160;
                        g_176 = (**l_680);
                    }
                    if ((*p_46))
                        continue;
                    for (g_323 = 0; (g_323 <= 2); g_323 += 1)
                    {
                        return &g_160;
                    }
                }
            }
        }
        if ((p_49 == &l_633))
        {
            return &g_160;
        }
        else
        {
            union U0 l_684 = {0L};
            unsigned short ***l_686 = &l_650;
            char *l_690 = (void*)0;
            char *l_691[1][7];
            int *l_692 = &g_82;
            const union U0 *****l_728 = (void*)0;
            union U0 *l_757 = &l_693;
            union U0 *l_760 = &l_684;
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 7; j++)
                    l_691[i][j] = (void*)0;
            }
            if (((*l_692) = (g_80 = (*p_49))))
            {
                union U0 l_699 = {0x4684L};
                (*l_611) = (((*p_46) & (*p_46)) <= l_699.f0);
                for (l_699.f1 = 0; (l_699.f1 <= 26); l_699.f1 = safe_add_func_int64_t_s_s(l_699.f1, 1))
                {
                    int l_703[8][5] = {{0x3E653679L,0xACAC6C27L,(-3L),(-3L),0xACAC6C27L},{0L,0xF8155A5EL,0L,0xF8155A5EL,0L},{0xACAC6C27L,(-3L),(-3L),0xACAC6C27L,0x3E653679L},{0x41D092D1L,0xF8155A5EL,0x41D092D1L,1L,0x41D092D1L},{0xACAC6C27L,0xACAC6C27L,0L,(-3L),0x3E653679L},{0L,1L,0L,1L,0L},{0x3E653679L,(-3L),0L,0xACAC6C27L,0xACAC6C27L},{0x41D092D1L,1L,0x41D092D1L,0xF8155A5EL,0x41D092D1L}};
                    unsigned long long *l_704 = (void*)0;
                    unsigned long long *l_705 = &g_702.f2;
                    unsigned *l_708 = (void*)0;
                    unsigned *l_709 = &g_205;
                    int i, j;
                    (*l_611) = (g_702 , ((0x32D19A8EL < ((*l_709) = ((p_45 , (((safe_mul_func_uint16_t_u_u(p_47, (*l_692))) && p_45) >= 4294967287UL)) | 0x6C16L))) ^ 4294967290UL));
                    if ((*p_46))
                        continue;
                }
            }
            else
            {
                unsigned long long l_733 = 1UL;
                unsigned l_734[10][8] = {{4294967293UL,5UL,0x48C5FBA8L,8UL,0x48C5FBA8L,5UL,4294967293UL,0xE5B274CAL},{0x48C5FBA8L,5UL,4294967293UL,0xE5B274CAL,0x0BD621EAL,0x0BD621EAL,0xE5B274CAL,4294967293UL},{0xF72970E9L,0xF72970E9L,5UL,0x9DFEAC5BL,0x0BD621EAL,8UL,0xAE7DD257L,8UL},{0x48C5FBA8L,4294967293UL,0x9DFEAC5BL,4294967293UL,0x48C5FBA8L,0x1A8EF8E6L,0xF72970E9L,8UL},{4294967293UL,0x0BD621EAL,0xAE7DD257L,0x9DFEAC5BL,0x9DFEAC5BL,0xAE7DD257L,0x0BD621EAL,4294967293UL},{5UL,0x1A8EF8E6L,0xAE7DD257L,0xE5B274CAL,0xF72970E9L,0x48C5FBA8L,0xF72970E9L,0xE5B274CAL},{0x9DFEAC5BL,1UL,0x9DFEAC5BL,8UL,0xE5B274CAL,0x48C5FBA8L,0xAE7DD257L,0xAE7DD257L},{0xAE7DD257L,0x1A8EF8E6L,5UL,5UL,0x1A8EF8E6L,0xAE7DD257L,0xE5B274CAL,0xF72970E9L},{0xAE7DD257L,0x0BD621EAL,4294967293UL,0x1A8EF8E6L,0xE5B274CAL,0x1A8EF8E6L,4294967293UL,0x0BD621EAL},{0x9DFEAC5BL,4294967293UL,0x48C5FBA8L,0x1A8EF8E6L,0xF72970E9L,8UL,8UL,0xF72970E9L}};
                int *l_736 = &g_18[3][1];
                union U0 *l_759 = &g_702;
                union U0 *l_765 = &l_683;
                int i, j;
                for (l_683.f2 = 0; (l_683.f2 <= 2); l_683.f2 += 1)
                {
                    unsigned l_712 = 4294967295UL;
                    int *l_735[5] = {&g_18[3][1],&g_18[3][1],&g_18[3][1],&g_18[3][1],&g_18[3][1]};
                    int i;
                    for (l_693.f3 = 0; (l_693.f3 <= 0); l_693.f3 += 1)
                    {
                        short *l_725[1];
                        unsigned *l_726 = &g_205;
                        const union U0 ******l_729 = &l_728;
                        unsigned l_730[9][1][6];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                            l_725[i] = &g_151.f3;
                        for (i = 0; i < 9; i++)
                        {
                            for (j = 0; j < 1; j++)
                            {
                                for (k = 0; k < 6; k++)
                                    l_730[i][j][k] = 0xEC314A41L;
                            }
                        }
                        (*l_692) = l_712;
                        (*l_611) = (safe_unary_minus_func_uint8_t_u((*g_439)));
                    }
                    for (l_693.f2 = 2; (l_693.f2 <= 8); l_693.f2 += 1)
                    {
                        return l_736;
                    }
                    for (g_141 = 2; (g_141 >= 0); g_141 -= 1)
                    {
                        return p_49;
                    }
                    for (g_151.f3 = 0; (g_151.f3 <= 2); g_151.f3 += 1)
                    {
                        return l_611;
                    }
                }
                for (g_73 = 12; (g_73 > (-29)); g_73--)
                {
                    long long *l_751 = &l_685.f4;
                    int l_752[9] = {(-4L),0xD67428BAL,(-4L),(-4L),0xD67428BAL,(-4L),(-4L),0xD67428BAL,(-4L)};
                    union U0 **l_758 = &g_185;
                    union U0 **l_761 = (void*)0;
                    union U0 **l_762 = &g_185;
                    union U0 **l_763 = &g_185;
                    union U0 **l_764[6];
                    const short l_774 = 9L;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_764[i] = &g_185;
                    for (g_160 = 0; (g_160 != 4); g_160 = safe_add_func_uint64_t_u_u(g_160, 4))
                    {
                        int **l_741[5][4] = {{&l_736,&l_692,&l_736,&l_736},{&l_692,&l_692,&g_347,&l_692},{&l_692,&l_736,&l_736,&l_692},{&l_736,&l_692,&l_736,&l_736},{&l_692,&l_692,&g_347,&l_692}};
                        int i, j;
                        (*l_611) = 0xCE3A2B28L;
                        l_742[2][2][0] = &g_80;
                        if ((*p_49))
                            continue;
                    }
                    (*l_692) = (safe_mul_func_int16_t_s_s((*g_641), ((*p_46) ^ ((safe_mod_func_uint8_t_u_u((l_752[5] = ((((g_702.f4 = g_170) , (safe_sub_func_uint16_t_u_u(0xE827L, (safe_mul_func_int8_t_s_s(p_48, 0x8CL))))) , ((((*l_751) = (p_47 , (((*l_611) = (((*l_686) = (*l_686)) != (void*)0)) ^ p_45))) ^ (*l_736)) , l_752[8])) <= (*l_692))), 0x44L)) ^ (*l_692)))));
                    l_752[8] = ((safe_lshift_func_uint8_t_u_s(((*g_439) = (0x29L != ((l_759 = l_757) != (l_765 = l_760)))), 3)) || ((*l_692) != (((*l_611) < ((safe_mod_func_uint32_t_u_u((((*g_641) = p_45) , (*l_736)), (safe_mul_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((l_774 >= l_775[4][5]) , (*g_688)), (*l_736))), (-1L))))) < 4UL)) > 3UL)));
                }
            }
        }
    }
    else
    {
        int l_796[8][5];
        int i, j;
        for (i = 0; i < 8; i++)
        {
            for (j = 0; j < 5; j++)
                l_796[i][j] = 7L;
        }
        g_160 = (-7L);
        for (g_11 = 0; (g_11 != 8); ++g_11)
        {
            unsigned long long l_786 = 0x4829F576480FDBA7LL;
            union U0 *l_791 = (void*)0;
            long long *l_794[1];
            int **l_797 = &l_670;
            int i;
            for (i = 0; i < 1; i++)
                l_794[i] = &g_702.f4;
            for (g_702.f0 = 0; (g_702.f0 >= (-16)); --g_702.f0)
            {
                int **l_782 = (void*)0;
                int **l_783 = (void*)0;
                for (g_323 = 21; (g_323 <= 28); g_323++)
                {
                    return p_49;
                }
                g_607 = &g_80;
            }
            if ((safe_mod_func_int16_t_s_s(l_786, (safe_sub_func_int8_t_s_s((((*g_565) , (safe_mul_func_uint16_t_u_u(((((p_47 < ((void*)0 == l_791)) ^ (safe_sub_func_int64_t_s_s(p_47, g_148[0].f0))) < (*p_46)) > (g_702.f4 = (4294967288UL || (-1L)))), (*g_641)))) , (*g_118)), (*g_530))))))
            {
                l_795 = p_49;
                g_160 = l_786;
            }
            else
            {
                l_796[2][3] = (*p_49);
            }
            (*l_797) = &g_18[3][1];
        }
    }
    l_633 = 0xDE76EB28L;
    return &g_78;
}







static char func_50(long long p_51, unsigned long long p_52, int * p_53, union U0 p_54)
{
    char l_210 = 0L;
    int l_215 = 0xBF318454L;
    unsigned l_219 = 0x64CA61C2L;
    unsigned char l_237 = 0x5CL;
    unsigned long long l_244 = 0x9A37B767117C768ALL;
    unsigned short *l_259 = &g_170;
    unsigned short **l_260 = &l_259;
    int *l_263 = &g_160;
    long long *l_282 = &g_88[1];
    unsigned char **l_440 = &g_439;
    union U0 ***l_480 = &g_184;
    union U0 ****l_479 = &l_480;
    long long l_486 = (-4L);
    union U0 l_503 = {0x7F02L};
    union U0 ** const *l_526 = &g_184;
    union U0 ** const **l_525 = &l_526;
    const unsigned char **l_532 = &g_530;
    unsigned *l_570 = &g_323;
    const int *l_605 = &g_78;
    for (p_54.f1 = 2; (p_54.f1 != 54); ++p_54.f1)
    {
        int *l_67[4][8] = {{&g_18[3][1],&g_18[3][1],&g_18[3][1],&g_18[5][1],&g_18[3][1],&g_18[3][1],&g_18[5][1],&g_18[3][1]},{&g_18[3][1],&g_18[3][1],&g_18[3][1],&g_18[1][1],&g_18[3][1],&g_18[1][1],&g_18[3][1],&g_18[3][1]},{&g_18[3][1],&g_18[3][1],&g_18[5][1],&g_18[3][1],&g_18[3][1],&g_18[5][1],&g_18[3][1],&g_18[3][1]},{&g_18[3][1],&g_18[3][1],&g_18[3][1],&g_18[1][1],&g_18[3][1],&g_18[3][1],&g_18[3][1],&g_18[3][1]}};
        int **l_68 = &l_67[3][5];
        char *l_71 = (void*)0;
        char *l_72 = &g_73;
        union U0 ***l_222 = (void*)0;
        union U0 ****l_221 = &l_222;
        int i, j;
        if (g_11)
            break;
    }
    (*l_263) = ((safe_div_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u(p_51, (safe_div_func_int32_t_s_s(((l_244 & ((safe_lshift_func_int8_t_s_u(0xFEL, 0)) != (g_151.f3 || (safe_lshift_func_uint8_t_u_s((l_237 >= (((*l_260) = l_259) == &g_170)), 3))))) | (safe_add_func_uint32_t_u_u(((void*)0 != &g_170), l_244))), p_54.f1)))) , g_141), l_244)) > 0xCE23L);
    for (g_151.f3 = 3; (g_151.f3 >= 0); g_151.f3 -= 1)
    {
        int **l_264 = &l_263;
        (*l_264) = p_53;
        (*l_264) = &g_78;
        for (p_51 = 2; (p_51 >= 0); p_51 -= 1)
        {
            unsigned short l_266[2][8] = {{0x1C16L,0UL,0UL,0x1C16L,0x1C16L,0UL,0UL,0x1C16L},{0x1C16L,0UL,0UL,0x1C16L,0x1C16L,0UL,0UL,0x1C16L}};
            int i, j;
            for (l_219 = 0; (l_219 <= 3); l_219 += 1)
            {
                char l_265 = 9L;
                return l_265;
            }
            return l_266[1][3];
        }
    }
    if ((0xEFL > 0x48L))
    {
        int l_269 = 0x02A7A2EFL;
        unsigned long long l_273[3][1];
        long long l_297[6][1][8] = {{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}},{{0L,0L,0L,0L,0L,0L,0L,0L}}};
        int l_299 = 0xC94B4595L;
        int *l_304 = &g_82;
        int l_378 = 0xBB02EE81L;
        union U0 l_398 = {0x3E7CL};
        short *l_399 = &g_98;
        char *l_402 = &g_73;
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
                l_273[i][j] = 0x64C0F7E9A62ABBECLL;
        }
        for (g_160 = 0; (g_160 >= 1); ++g_160)
        {
            int *l_270[9][8] = {{&l_215,&l_215,&g_82,&g_160,&g_82,&l_215,&l_215,&g_82},{(void*)0,&g_82,&g_82,(void*)0,&g_160,(void*)0,&g_82,&g_82},{&g_82,&g_160,&g_160,&g_160,&g_160,&g_82,&g_160,&g_160},{(void*)0,&g_160,(void*)0,&g_82,&g_82,(void*)0,&g_160,(void*)0},{&l_215,&g_82,&g_160,&g_82,&l_215,&l_215,&g_82,&g_160},{&l_215,&l_215,&g_82,&g_160,&g_82,&l_215,&l_215,&g_82},{(void*)0,&g_82,&g_82,(void*)0,&g_160,(void*)0,&g_82,&g_82},{&g_82,&g_160,&g_160,&g_160,&g_160,&g_82,&g_160,&g_160},{(void*)0,&g_160,(void*)0,&g_82,&g_82,(void*)0,&g_160,&g_160}};
            short *l_280[7][6][6] = {{{&g_151.f3,&g_151.f3,&g_151.f3,(void*)0,&g_151.f3,&g_151.f0},{&g_98,(void*)0,&g_98,&g_151.f3,&g_127[2][7],&g_127[2][7]},{&g_151.f3,&g_127[2][7],&g_127[2][7],&g_151.f3,&g_98,(void*)0},{&g_98,&g_151.f0,&g_151.f3,(void*)0,&g_151.f3,&g_151.f3},{&g_151.f3,&g_98,&g_151.f0,&g_98,&g_151.f3,(void*)0},{&g_151.f3,&g_151.f0,(void*)0,(void*)0,&g_98,&g_151.f3}},{{&g_151.f3,&g_127[2][7],&g_151.f0,&g_151.f0,&g_127[2][7],&g_151.f3},{(void*)0,(void*)0,(void*)0,&g_151.f3,&g_151.f3,(void*)0},{&g_127[2][7],&g_151.f3,&g_151.f0,&g_151.f3,&g_151.f0,&g_151.f3},{&g_127[2][7],(void*)0,&g_151.f3,&g_151.f3,(void*)0,(void*)0},{(void*)0,&g_151.f3,&g_127[2][7],&g_151.f0,&g_151.f0,&g_127[2][7]},{&g_151.f3,&g_151.f3,&g_98,(void*)0,(void*)0,&g_151.f0}},{{&g_151.f3,(void*)0,&g_151.f3,&g_98,&g_151.f0,&g_98},{&g_151.f3,&g_151.f3,&g_151.f3,(void*)0,&g_151.f3,&g_151.f0},{&g_98,(void*)0,&g_98,&g_151.f3,&g_127[2][7],&g_127[2][7]},{&g_151.f3,&g_127[2][7],&g_127[2][7],&g_151.f3,&g_98,&g_127[2][7]},{&g_151.f3,(void*)0,&g_151.f0,&g_127[2][7],(void*)0,&g_151.f3},{(void*)0,&g_98,&g_98,&g_98,(void*)0,&g_151.f3}},{{&g_151.f3,(void*)0,&g_151.f3,&g_151.f0,&g_98,&g_151.f0},{&g_151.f0,(void*)0,(void*)0,(void*)0,(void*)0,&g_151.f0},{&g_151.f0,&g_127[2][7],&g_151.f3,(void*)0,&g_151.f0,&g_151.f3},{(void*)0,&g_151.f3,&g_98,&g_151.f0,&g_98,&g_151.f3},{(void*)0,&g_151.f3,&g_151.f0,(void*)0,&g_151.f3,&g_127[2][7]},{&g_151.f0,&g_151.f0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_151.f0,&g_151.f0,&g_98,&g_151.f0,&g_151.f3,(void*)0},{&g_151.f3,&g_151.f3,(void*)0,&g_98,&g_98,&g_98},{(void*)0,&g_151.f3,(void*)0,&g_127[2][7],&g_151.f0,(void*)0},{&g_151.f3,&g_127[2][7],&g_98,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,&g_98,&g_127[2][7]},{&g_151.f3,(void*)0,&g_151.f0,&g_127[2][7],(void*)0,&g_151.f3}},{{(void*)0,&g_98,&g_98,&g_98,(void*)0,&g_151.f3},{&g_151.f3,(void*)0,&g_151.f3,&g_151.f0,&g_151.f3,&g_98},{&g_98,&g_151.f3,&g_127[2][7],&g_127[2][7],&g_151.f3,&g_98},{(void*)0,(void*)0,&g_151.f0,&g_151.f0,&g_98,(void*)0},{&g_151.f3,(void*)0,&g_98,&g_98,&g_98,(void*)0},{&g_151.f3,(void*)0,&g_98,&g_151.f0,&g_151.f0,(void*)0}},{{(void*)0,&g_98,&g_151.f3,&g_127[2][7],&g_127[2][7],&g_151.f3},{&g_98,&g_98,&g_151.f3,(void*)0,&g_151.f0,&g_127[2][7]},{(void*)0,(void*)0,&g_151.f0,&g_151.f3,&g_98,&g_151.f3},{&g_151.f0,(void*)0,&g_151.f0,(void*)0,&g_98,&g_127[2][7]},{&g_151.f3,(void*)0,&g_151.f3,&g_151.f3,&g_151.f3,&g_151.f3},{&g_151.f3,&g_151.f3,&g_151.f3,&g_151.f3,&g_151.f3,(void*)0}}};
            volatile unsigned long long l_281[2][4] = {{1UL,0UL,0UL,1UL},{0UL,1UL,0UL,0UL}};
            const long long *l_283 = (void*)0;
            int l_296 = 0x5EC44A5CL;
            int l_301 = (-1L);
            unsigned short **l_391 = &l_259;
            int i, j, k;
            g_82 = (g_80 = l_269);
        }
        (*l_263) = func_61(&g_82, ((p_54.f3 = (1L != (safe_sub_func_int16_t_s_s(((safe_add_func_int16_t_s_s(g_119, 4UL)) | ((*l_402) = ((safe_mod_func_int16_t_s_s((l_398 , (*l_304)), ((*l_399) = g_151.f3))) || (safe_sub_func_int32_t_s_s(1L, ((*l_263) = (*p_53))))))), 0L)))) , 0xB01CL), (*l_304), p_52, p_52);
    }
    else
    {
        short l_405 = 0xB749L;
        int *l_410 = (void*)0;
        unsigned *l_413 = &g_323;
        unsigned short **l_454 = &l_259;
        union U0 * const *l_478 = &g_185;
        union U0 * const **l_477 = &l_478;
        union U0 * const ***l_476 = &l_477;
        union U0 *****l_481 = (void*)0;
        union U0 *****l_482 = &l_479;
        unsigned char l_487 = 1UL;
        unsigned long long **l_497 = (void*)0;
        unsigned char l_506 = 0UL;
        union U0 l_507 = {1L};
        int *l_524 = &g_78;
        unsigned short l_598 = 3UL;
        const int **l_606 = (void*)0;
        if ((func_61(p_53, ((safe_lshift_func_uint8_t_u_u(((l_405 <= ((((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(g_205, 14)), g_127[1][2])) , p_54.f1) & (*l_263)) | (*l_263))) != (*g_175)), g_113)) < g_88[1]), g_170, g_160, p_51) , 5L))
        {
            union U0 ***l_436 = &g_184;
            union U0 ****l_435[10] = {&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436,&l_436};
            int l_452 = (-1L);
            unsigned short **l_453 = (void*)0;
            int **l_472 = &l_410;
            int i;
            for (g_82 = (-26); (g_82 > 17); g_82 = safe_add_func_uint32_t_u_u(g_82, 3))
            {
                int **l_416 = &g_347;
                const unsigned short *l_423 = &g_330;
                union U0 *****l_434[7] = {&g_433,&g_433,&g_433,&g_433,&g_433,&g_433,&g_433};
                char *l_437 = &l_210;
                int i;
                (*l_416) = p_53;
                (*l_263) = ((g_151.f0 == 7L) , (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_add_func_int8_t_s_s(((void*)0 == l_423), (*l_263))) >= p_51), (safe_add_func_int16_t_s_s((safe_div_func_uint8_t_u_u(g_141, (safe_unary_minus_func_int64_t_s(((safe_rshift_func_int8_t_s_u((~(((~((*l_437) = (((*p_53) > ((l_435[0] = g_433) != (void*)0)) == p_52))) , g_438) == l_440)), p_54.f1)) != 18446744073709551607UL))))), (*l_263))))), 0L)));
            }
            for (g_151.f2 = 17; (g_151.f2 < 19); g_151.f2++)
            {
                char l_467 = 0xB5L;
                for (g_141 = 5; (g_141 <= 5); g_141 = safe_add_func_uint64_t_u_u(g_141, 1))
                {
                    if ((*p_53))
                        break;
                }
                for (p_54.f3 = 26; (p_54.f3 <= (-20)); p_54.f3--)
                {
                    long long l_449 = 0xD09516DBD0911946LL;
                }
            }
            (*l_263) = (*p_53);
            (*l_472) = l_413;
        }
        else
        {
            unsigned long long l_473 = 0xAAF66FEFA4915FEBLL;
            return l_473;
        }
        if ((((safe_div_func_int8_t_s_s((*l_263), (*l_410))) , l_476) == ((*l_482) = l_479)))
        {
            short l_498 = (-7L);
            int l_533[5][5] = {{0x0D3A69BAL,0L,4L,0x78F36DCFL,0x5B9392D8L},{1L,1L,1L,0L,4L},{0x5B9392D8L,0L,1L,4L,(-1L)},{0x5B9392D8L,1L,4L,1L,0x5B9392D8L},{0L,0x0D3A69BAL,0L,4L,0x78F36DCFL}};
            int i, j;
            for (l_219 = (-8); (l_219 < 39); l_219 = safe_add_func_uint16_t_u_u(l_219, 3))
            {
                short *l_490 = &g_127[1][6];
                short *l_491 = &g_98;
                unsigned char l_492[9][6] = {{0x5EL,4UL,0xBDL,0xBDL,4UL,0x5EL},{0x5EL,0xBDL,1UL,4UL,4UL,1UL},{4UL,4UL,1UL,0xBDL,0x5EL,0x5EL},{4UL,0xBDL,0xBDL,4UL,0x5EL,1UL},{0x5EL,4UL,0xBDL,0xBDL,4UL,0x5EL},{0x5EL,0xBDL,1UL,4UL,4UL,1UL},{4UL,4UL,1UL,0xBDL,0x5EL,0x5EL},{4UL,0xBDL,0xBDL,4UL,0x5EL,1UL},{0x5EL,4UL,0xBDL,0xBDL,4UL,0x5EL}};
                int i, j;
                if ((*p_53))
                    break;
                for (g_11 = 1; (g_11 >= 0); g_11 -= 1)
                {
                    for (p_52 = 0; (p_52 <= 3); p_52 += 1)
                    {
                        int **l_485[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_485[i] = &g_347;
                        if ((*p_53))
                            break;
                        (*l_263) = (&g_88[1] == &g_88[1]);
                        p_53 = &g_18[5][1];
                        return l_486;
                    }
                    if ((*l_263))
                        continue;
                    (*l_410) = 8L;
                    if (l_487)
                        continue;
                }
                g_117[2] = ((safe_mul_func_int16_t_s_s(((*l_491) = (g_151.f3 = ((*l_490) = p_52))), (l_492[2][0] | p_54.f1))) , &g_118);
                if ((*g_347))
                    break;
            }
            for (p_52 = 0; (p_52 <= 2); p_52 += 1)
            {
                unsigned l_505[4];
                const int *l_517 = &l_215;
                int i;
                for (i = 0; i < 4; i++)
                    l_505[i] = 0xD96D0012L;
            }
            for (p_54.f1 = 0; (p_54.f1 == 8); p_54.f1 = safe_add_func_int8_t_s_s(p_54.f1, 7))
            {
                int **l_536 = &l_263;
                (*l_536) = l_413;
                for (g_330 = 0; (g_330 <= 1); g_330 += 1)
                {
                    for (l_219 = 0; (l_219 <= 1); l_219 += 1)
                    {
                        if ((*p_53))
                            break;
                    }
                }
            }
        }
        else
        {
            char *l_541 = &l_210;
            union U0 l_544 = {-3L};
            unsigned l_545 = 18446744073709551610UL;
            const union U0 ***l_546 = (void*)0;
            int *l_551[4] = {&g_18[3][1],&g_18[3][1],&g_18[3][1],&g_18[3][1]};
            int i;
            (*l_410) = (((((safe_sub_func_int64_t_s_s(((*l_282) = (safe_lshift_func_int8_t_s_s(1L, ((((*l_541) = 1L) || (safe_div_func_int8_t_s_s((((*l_524) , l_544) , (g_148[0].f3 <= 0x407710C2L)), l_544.f3))) | l_545)))), g_82)) >= (*l_263)) > p_52) != 0UL) > (*g_439));
            (*l_524) = ((g_151.f2 = ((((g_88[0] | g_11) , l_546) != (*g_223)) , (safe_mod_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0xD4L, (**g_438))) >= 0x1FL), 7UL)))) && (*l_263));
            for (l_210 = 0; (l_210 < (-29)); l_210 = safe_sub_func_int8_t_s_s(l_210, 1))
            {
                (*g_184) = &p_54;
            }
            for (l_503.f2 = 0; (l_503.f2 > 26); l_503.f2 = safe_add_func_int16_t_s_s(l_503.f2, 5))
            {
                unsigned char **l_556 = &g_439;
                unsigned *l_571[7] = {&g_323,(void*)0,(void*)0,&g_323,(void*)0,(void*)0,&g_323};
                const int l_600 = (-1L);
                int *l_601 = &l_215;
                long long l_603 = 0x81740129722DC941LL;
                int **l_604 = &l_601;
                int i;
                if (((void*)0 != l_556))
                {
                    unsigned *l_560 = &g_205;
                    unsigned **l_559 = &l_560;
                    unsigned ***l_561 = &l_559;
                    for (l_405 = 0; (l_405 > 4); l_405++)
                    {
                        return p_51;
                    }
                    p_53 = (l_263 = l_551[2]);
                    (*l_561) = (((*l_282) = g_80) , l_559);
                }
                else
                {
                    char l_562 = 0xECL;
                    return l_562;
                }
                (*l_524) = (0xEDC5L && ((safe_sub_func_uint8_t_u_u(((**l_556) = (p_53 == g_565)), (((safe_rshift_func_uint8_t_u_s(p_52, ((safe_mul_func_int8_t_s_s((*g_118), ((((*l_524) , (l_570 = l_524)) == (g_572 = l_571[5])) | g_18[3][1]))) & 0x44L))) | 0x4B00A795L) > 0xF8778C23L))) | 0xE441C06CDF6D76AELL));
                if ((*l_263))
                {
                    int l_580 = (-4L);
                    unsigned long long l_599 = 1UL;
                    for (p_54.f0 = 0; (p_54.f0 > 29); p_54.f0 = safe_add_func_uint64_t_u_u(p_54.f0, 2))
                    {
                        int **l_575 = &l_410;
                        (*l_575) = (void*)0;
                        (*l_524) = (safe_sub_func_int64_t_s_s(p_51, 1UL));
                    }
                    for (g_11 = 0; (g_11 == 14); g_11 = safe_add_func_int8_t_s_s(g_11, 9))
                    {
                        (*l_524) = l_580;
                    }
                    for (l_219 = 14; (l_219 != 40); ++l_219)
                    {
                        g_583 = &g_175;
                        g_160 = (safe_div_func_int8_t_s_s(((((*p_53) == l_600) ^ p_52) && 0x74392644L), (-1L)));
                        if ((*p_53))
                            continue;
                    }
                }
                else
                {
                    int **l_602 = &l_263;
                    (*l_602) = l_601;
                    return l_603;
                }
                (*l_604) = &l_215;
            }
        }
        g_607 = l_605;
        for (g_73 = 0; (g_73 == (-15)); --g_73)
        {
            return p_52;
        }
    }
    return (*g_118);
}







static unsigned func_61(int * p_62, short p_63, unsigned p_64, long long p_65, const unsigned short p_66)
{
    unsigned l_85 = 0xA0DE8ED5L;
    int *l_89 = &g_78;
    short l_105 = 0x403CL;
    volatile int l_132 = 0L;
    union U0 l_174 = {0L};
    union U0 ***l_198 = &g_184;
    const union U0 ** const l_200 = &g_150;
    const union U0 ** const *l_199 = &l_200;
    for (p_65 = (-24); (p_65 != 28); p_65 = safe_add_func_uint32_t_u_u(p_65, 6))
    {
        int *l_76 = (void*)0;
        int *l_77 = &g_78;
        int *l_79 = &g_80;
        int *l_81 = &g_82;
        if (g_11)
            break;
        (*l_81) = ((*l_79) = ((*l_77) = g_18[3][1]));
    }
    if (((*p_62) <= (safe_lshift_func_uint8_t_u_s(l_85, 7))))
    {
        int *l_87 = &g_78;
        int **l_86 = &l_87;
        (*l_86) = p_62;
        for (p_64 = 0; (p_64 <= 1); p_64 += 1)
        {
            (*l_86) = p_62;
        }
    }
    else
    {
        int **l_90 = &l_89;
        char *l_94[6][7][1] = {{{&g_73},{(void*)0},{&g_73},{&g_73},{&g_73},{&g_73},{&g_73}},{{&g_73},{(void*)0},{&g_73},{(void*)0},{&g_73},{&g_73},{&g_73}},{{&g_73},{(void*)0},{(void*)0},{&g_73},{(void*)0},{&g_73},{(void*)0}},{{(void*)0},{&g_73},{&g_73},{(void*)0},{(void*)0},{&g_73},{(void*)0}},{{&g_73},{(void*)0},{(void*)0},{&g_73},{&g_73},{(void*)0},{(void*)0}},{{&g_73},{(void*)0},{&g_73},{(void*)0},{(void*)0},{&g_73},{&g_73}}};
        char *l_109 = (void*)0;
        unsigned char l_128 = 9UL;
        int i, j, k;
        (*l_90) = l_89;
        if (g_73)
        {
            unsigned short l_93 = 0xA4C9L;
            short *l_97 = &g_98;
            int *l_114 = &g_18[3][1];
            unsigned l_126 = 1UL;
            int l_145[8] = {0x034421CFL,0x034421CFL,0x034421CFL,0x034421CFL,0x034421CFL,0x034421CFL,0x034421CFL,0x034421CFL};
            int l_146 = 0x21C59027L;
            union U0 *l_161[4][8][8] = {{{&g_151,&g_151,&g_151,&g_151,&g_151,(void*)0,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,(void*)0,&g_151,(void*)0,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,(void*)0,&g_151,&g_151,&g_151,&g_151,&g_151}},{{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151,&g_151},{&g_151,(void*)0,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151}},{{(void*)0,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151,(void*)0,&g_151},{(void*)0,(void*)0,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151}},{{&g_151,(void*)0,&g_151,(void*)0,&g_151,&g_151,&g_151,(void*)0},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,(void*)0,&g_151},{(void*)0,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{(void*)0,&g_151,&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151,&g_151},{&g_151,&g_151,&g_151,(void*)0,&g_151,&g_151,&g_151,&g_151}}};
            int i, j, k;
            if ((((1L || (g_18[3][1] ^ p_66)) | ((l_93 || ((*l_89) <= g_82)) != ((*l_97) = (l_94[4][3][0] == ((g_18[4][1] > (safe_sub_func_int64_t_s_s(p_64, (-8L)))) , (void*)0))))) ^ g_88[0]))
            {
                char **l_108 = &l_94[0][1][0];
                unsigned short *l_110[8] = {&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93,&l_93};
                int l_124 = 0x83F91D89L;
                int l_142 = (-1L);
                int i;
                if (((safe_mul_func_uint16_t_u_u((((*l_89) = (g_80 <= ((((g_98 , 0x5DC5L) > p_65) < ((p_64 < (safe_mul_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(l_105, (safe_lshift_func_int16_t_s_s((p_64 >= p_65), (((((((*l_108) = &g_73) != l_109) <= g_73) < 0xE9L) >= g_18[3][1]) ^ g_18[3][1]))))) >= 0x31A0D171E9D64477LL), (**l_90)))) < p_64)) != g_78))) , p_64), g_11)) || (-1L)))
                {
                    int *l_112[7] = {&g_82,&g_18[4][0],&g_18[4][0],&g_82,&g_18[4][0],&g_18[4][0],&g_82};
                    unsigned char *l_143 = (void*)0;
                    unsigned char *l_144 = &l_128;
                    int i;
                    if ((**l_90))
                    {
                        p_62 = (g_111 , l_112[5]);
                        (*l_89) = ((+g_98) , g_111.f0);
                        (**l_90) = (g_18[0][0] != (g_113 = 0x26FBE56FL));
                        return p_63;
                    }
                    else
                    {
                        short l_125 = 5L;
                        volatile union U0 **l_129 = (void*)0;
                        volatile union U0 *l_131 = &g_111;
                        volatile union U0 **l_130 = &l_131;
                        (*l_90) = l_114;
                        l_128 = (((g_80 && (safe_div_func_int8_t_s_s((g_117[2] == &g_118), 0x8AL))) && (g_127[1][6] = (((!p_66) > (safe_sub_func_int8_t_s_s(((((p_64 != (p_64 || (l_124 = ((p_65 , ((safe_add_func_uint32_t_u_u((l_124 > p_66), (*p_62))) <= l_125)) == l_126)))) || 0x893BA86AL) < g_119) != (*l_114)), (*l_114)))) != 1L))) < p_64);
                        (*l_130) = &g_111;
                    }
                    l_132 = (g_82 , g_119);
                    l_146 = (0xB8388ADFL >= (l_145[7] = (p_64 < ((((*l_144) = ((g_80 = (l_124 != ((safe_lshift_func_uint16_t_u_u(g_111.f1, 0)) ^ (safe_mod_func_int64_t_s_s(p_65, (g_88[0] = (-8L))))))) != (l_142 = (safe_div_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(p_64, (g_141 = 255UL))), ((**l_90) | 6UL)))))) || 0x5EL) && g_18[4][0]))));
                }
                else
                {
                    const union U0 *l_147 = &g_148[0];
                    const union U0 **l_149[9];
                    unsigned char *l_172 = &g_151.f1;
                    unsigned char **l_171 = &l_172;
                    long long *l_173 = &g_151.f4;
                    int i;
                    for (i = 0; i < 9; i++)
                        l_149[i] = &l_147;
                    g_150 = l_147;
                    for (g_11 = 0; (g_11 > 27); g_11 = safe_add_func_int64_t_s_s(g_11, 3))
                    {
                        char l_156 = 0x00L;
                        int l_157 = 0x0571A61BL;
                        (**l_90) = (255UL <= (**l_90));
                        (**l_90) = ((0x646AL < ((0xE09DBB3B7CC63A23LL ^ (((g_78 , p_62) != &g_18[3][1]) < ((g_127[0][1] , (*l_89)) , (((((safe_sub_func_uint16_t_u_u((l_157 = ((p_64 | l_156) <= 0xD3L)), 4L)) , (void*)0) != (void*)0) == 0xA1L) && g_111.f0)))) , g_98)) == g_98);
                        (*l_89) = (p_65 <= (g_160 = (safe_lshift_func_int16_t_s_s(g_82, p_65))));
                    }
                    g_150 = l_161[3][3][3];
                    if (((*l_89) == (((safe_add_func_int8_t_s_s((safe_mul_func_int8_t_s_s(0xD7L, ((safe_mod_func_int64_t_s_s((((safe_div_func_uint64_t_u_u(0xDCB88E3999123B75LL, 0x5FD3911739D61DCCLL)) , 1L) >= (((((*l_173) = ((p_65 , g_118) != ((*l_147) , ((*l_171) = (((g_170 = (*l_114)) < 0xBA0EL) , (void*)0))))) , p_65) , l_174) , (-8L))), g_18[3][1])) >= p_66))), (**l_90))) , g_148[0].f3) == 0x6CA9L)))
                    {
                        g_175 = (void*)0;
                    }
                    else
                    {
                        g_176 = (safe_mul_func_uint16_t_u_u((l_142 = ((**l_90) = (*l_89))), g_11));
                    }
                }
            }
            else
            {
                (*l_90) = (void*)0;
            }
        }
        else
        {
            for (g_98 = 24; (g_98 >= (-22)); --g_98)
            {
                long long l_183 = 0xD47DF34B8501F8A6LL;
                union U0 ***l_186 = &g_184;
                if ((*g_175))
                    break;
                for (g_151.f0 = (-27); (g_151.f0 >= (-30)); g_151.f0--)
                {
                    if ((*l_89))
                        break;
                }
                (**l_90) = (((l_183 , (&g_150 == ((*l_186) = g_184))) > (*p_62)) != (safe_lshift_func_int16_t_s_u(g_11, 11)));
            }
            (*l_90) = (*l_90);
        }
        for (g_98 = 0; (g_98 >= 0); g_98 -= 1)
        {
            int l_189 = (-8L);
            (*l_90) = &g_78;
            l_189 = 1L;
            return g_176;
        }
    }
    for (g_151.f3 = 17; (g_151.f3 <= 7); g_151.f3 = safe_sub_func_uint8_t_u_u(g_151.f3, 1))
    {
        char l_194 = 0x09L;
        int *l_195 = &g_18[3][0];
        int **l_196 = &l_89;
        unsigned short *l_197[4][8][3] = {{{(void*)0,&g_170,&g_170},{(void*)0,&g_170,&g_170},{&g_170,(void*)0,(void*)0},{(void*)0,&g_170,(void*)0},{&g_170,(void*)0,&g_170},{&g_170,&g_170,(void*)0},{&g_170,&g_170,&g_170},{&g_170,(void*)0,(void*)0}},{{&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170},{&g_170,(void*)0,&g_170},{&g_170,(void*)0,(void*)0},{&g_170,&g_170,&g_170},{(void*)0,(void*)0,&g_170},{&g_170,&g_170,&g_170},{(void*)0,(void*)0,&g_170}},{{(void*)0,&g_170,&g_170},{&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170},{&g_170,(void*)0,(void*)0},{&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170},{(void*)0,&g_170,(void*)0}},{{(void*)0,&g_170,&g_170},{&g_170,(void*)0,&g_170},{&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170},{(void*)0,(void*)0,(void*)0},{&g_170,&g_170,(void*)0},{&g_170,&g_170,&g_170},{&g_170,&g_170,&g_170}}};
        const union U0 ** const **l_201 = &l_199;
        unsigned char *l_202 = &g_151.f1;
        unsigned *l_203 = &l_85;
        unsigned *l_204 = &g_205;
        int *l_206 = &g_160;
        int i, j, k;
        l_132 = ((((safe_add_func_int8_t_s_s(0xA3L, 0x95L)) >= (l_174 , g_18[3][1])) | l_194) || 0xDA5D48A301CD7A3ELL);
        (*l_196) = l_195;
        (*l_206) = ((((*l_204) = (((g_170 = p_63) | (((g_82 , l_198) != ((*l_201) = l_199)) >= (g_18[3][0] == (((*l_203) = (l_202 != g_118)) || (&g_127[1][6] == (void*)0))))) | 0xDAC5B96D19C86EBFLL)) , 0xAAA84F034BF247FFLL) & (**l_196));
    }
    return p_63;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_11, "g_11", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_18[i][j], "g_18[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_88[i], "g_88[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_111.f0, "g_111.f0", print_hash_value);
    transparent_crc(g_111.f1, "g_111.f1", print_hash_value);
    transparent_crc(g_111.f3, "g_111.f3", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_127[i][j], "g_127[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_148[i].f0, "g_148[i].f0", print_hash_value);
        transparent_crc(g_148[i].f1, "g_148[i].f1", print_hash_value);
        transparent_crc(g_148[i].f3, "g_148[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_151.f1, "g_151.f1", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_323, "g_323", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_627, "g_627", print_hash_value);
    transparent_crc(g_689, "g_689", print_hash_value);
    transparent_crc(g_702.f0, "g_702.f0", print_hash_value);
    transparent_crc(g_702.f1, "g_702.f1", print_hash_value);
    transparent_crc(g_702.f3, "g_702.f3", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_1003, "g_1003", print_hash_value);
    transparent_crc(g_1116, "g_1116", print_hash_value);
    transparent_crc(g_1136, "g_1136", print_hash_value);
    transparent_crc(g_1174, "g_1174", print_hash_value);
    transparent_crc(g_1577, "g_1577", print_hash_value);
    transparent_crc(g_1587, "g_1587", print_hash_value);
    transparent_crc(g_1842, "g_1842", print_hash_value);
    transparent_crc(g_1847, "g_1847", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_1857[i], "g_1857[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1859, "g_1859", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
