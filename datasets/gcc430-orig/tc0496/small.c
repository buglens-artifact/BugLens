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
   char f0;
   short f1;
   const unsigned f2;
   unsigned long long f3;
   unsigned f4;
};


static const unsigned char g_17[9][8] = {{0x31L,0x68L,0x19L,4UL,0x19L,0x68L,0x31L,0xECL},{0x19L,0x68L,0x31L,0xECL,254UL,254UL,0xECL,0x31L},{0xB2L,0xB2L,0x68L,255UL,254UL,4UL,0xBDL,4UL},{0x19L,0x31L,255UL,0x31L,0x19L,0UL,0xB2L,4UL},{0x31L,254UL,0xBDL,255UL,255UL,0xBDL,254UL,0x31L},{0x68L,0UL,0xBDL,0xECL,0xB2L,0x19L,0UL,0x31L},{0x19L,4UL,0x19L,0x68L,0x31L,0xECL,254UL,254UL},{254UL,0xBDL,255UL,255UL,0xBDL,254UL,0x31L,0UL},{254UL,249UL,0xB2L,0xBDL,0x31L,0xBDL,0xB2L,249UL}};
static int g_21 = 1L;
static int *g_20 = &g_21;
static int g_45 = 0xA7967268L;
static int g_83[3][1][6] = {{{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}},{{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}},{{(-9L),(-9L),(-9L),(-9L),(-9L),(-9L)}}};
static int g_87 = 0L;
static struct S0 g_97 = {0x57L,0xAD64L,0x6C7F1499L,1UL,0x91B20769L};
static int **g_127 = &g_20;
static int ***g_126 = &g_127;
static long long g_259 = 0L;
static int g_276 = 0x6253B305L;
static const int g_351 = 0x19D0CF3FL;
static int **g_374 = &g_20;
static struct S0 *g_390 = &g_97;
static struct S0 g_427[2] = {{0xEDL,-1L,2UL,0xB87A6C449CC03492LL,0xB28102B2L},{0xEDL,-1L,2UL,0xB87A6C449CC03492LL,0xB28102B2L}};
static struct S0 *g_426 = &g_427[1];



static unsigned func_1(void);
static int * func_2(int * p_3, unsigned p_4);
static int * func_5(int * p_6, int p_7, int p_8);
static int * func_9(int * p_10);
static int * func_11(long long p_12, int * p_13, struct S0 p_14);
static long long func_18(int * p_19);
static int * func_24(const unsigned p_25, unsigned p_26, int * p_27, unsigned long long p_28);
static int * func_31(int * p_32);
static int * func_33(int * p_34);
static int * func_35(unsigned p_36, int * p_37, const long long p_38, unsigned char p_39, int * const p_40);
static unsigned func_1(void)
{
    struct S0 l_263 = {0x32L,0x1460L,1UL,0x8584AD03F4879D23LL,4294967287UL};
    struct S0 **l_470 = &g_426;
    int l_479[10][7] = {{0xFC392BA3L,0xF46E2FC3L,0x82754025L,(-1L),0x2839A542L,0xA72FD7F1L,1L},{(-1L),1L,0x0713F4A7L,0xA72FD7F1L,0xA72FD7F1L,0x0713F4A7L,1L},{0xFC392BA3L,(-1L),0xF46E2FC3L,(-7L),5L,0x0713F4A7L,0x65F03F7DL},{(-1L),0x8F73722EL,0x747D737AL,0x82754025L,0x60187B03L,0xA72FD7F1L,0x60187B03L},{(-7L),0x60187B03L,0x60187B03L,(-7L),4L,0x65F03F7DL,0x82754025L},{0x65F03F7DL,0x60187B03L,(-1L),0xA72FD7F1L,0xFC392BA3L,4L,0x2839A542L},{0x82754025L,0x8F73722EL,0x65F03F7DL,(-1L),0x65F03F7DL,0x8F73722EL,0x82754025L},{0x0713F4A7L,0x82754025L,(-1L),1L,0x2839A542L,0xF46E2FC3L,5L},{1L,0xF46E2FC3L,0x747D737AL,0x2839A542L,(-7L),(-7L),0x2839A542L},{(-1L),4L,(-1L),0xFC392BA3L,0x8F73722EL,1L,0xF46E2FC3L}};
    int i, j;
    (*g_374) = func_2(func_5(func_9(func_11(((safe_lshift_func_uint16_t_u_u(g_17[7][5], 10)) , func_18(g_20)), (*g_127), l_263)), l_263.f1, (safe_add_func_int64_t_s_s(l_263.f0, g_276))), l_263.f2);

    ;
    ;
    if ((((*g_390) , (((void*)0 != l_470) == (safe_lshift_func_uint8_t_u_s(l_263.f0, l_263.f1)))) , (g_17[7][5] < ((g_97.f4 == 0x999F5B0F6124192DLL) , g_427[1].f1))))
    {
        int *l_477 = &g_21;
        int l_478 = (-8L);
        l_479[7][0] = ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(func_18(l_477), l_263.f2)), l_478)) || g_97.f1);
        return (*l_477);
    }
    else
    {
        unsigned long long l_480 = 0xCFA4AB0EB29ED40ELL;
        return l_480;
    }
}







static int * func_2(int * p_3, unsigned p_4)
{
    int *l_467 = &g_83[1][0][2];
    struct S0 l_468 = {0x6CL,0x2288L,0x4994870DL,1UL,0x320B5101L};
    int * const l_469 = &g_83[2][0][1];
    (**g_126) = l_467;

    ;
    return l_467;


}







static int * func_5(int * p_6, int p_7, int p_8)
{
    short l_384[5];
    int **l_397[8] = {(void*)0,&g_20,(void*)0,(void*)0,&g_20,(void*)0,(void*)0,&g_20};
    struct S0 *l_423 = (void*)0;
    struct S0 *l_439 = &g_427[1];
    int *l_466 = (void*)0;
    int i;
    for (i = 0; i < 5; i++)
        l_384[i] = (-1L);
    if ((65529UL ^ ((safe_rshift_func_uint16_t_u_s(((safe_mul_func_int16_t_s_s((g_17[7][3] >= p_8), l_384[4])) != p_8), (((0L == p_8) , &p_6) == &p_6))) , l_384[4])))
    {
        const unsigned long long l_389 = 0xCB194F73EE0B1472LL;
        const int l_392[8] = {0xEE461B69L,0xB0EF2923L,0xB0EF2923L,0xEE461B69L,0xB0EF2923L,0xB0EF2923L,0xEE461B69L,0xB0EF2923L};
        unsigned short l_399 = 0x2792L;
        int *l_410 = (void*)0;
        const struct S0 *l_424 = &g_97;
        int i;
        for (g_97.f0 = 0; (g_97.f0 == (-18)); g_97.f0 = safe_sub_func_uint32_t_u_u(g_97.f0, 1))
        {
            struct S0 **l_391 = &g_390;
            unsigned l_398[4][5][5] = {{{0xE42AA835L,0x24528D80L,4294967295UL,0x17B7643BL,0xBBC1B437L},{0xE678D4E7L,0xAE9A8F56L,4294967290UL,0xB0DE0DC3L,4294967295UL},{0x5295905FL,0x24528D80L,0x24528D80L,0x5295905FL,0UL},{4294967293UL,0xE42AA835L,0x24528D80L,4294967295UL,0x17B7643BL},{4294967295UL,0x8B1CD878L,4294967290UL,0xE678D4E7L,0x24528D80L}},{{0xAE9A8F56L,4294967293UL,4294967295UL,4294967295UL,4294967293UL},{0xBBC1B437L,0x25A57E23L,7UL,0x5295905FL,4294967293UL},{0x8B1CD878L,4294967295UL,0xE42AA835L,0xB0DE0DC3L,0x24528D80L},{0x25A57E23L,0xB0DE0DC3L,1UL,0x17B7643BL,0x17B7643BL},{0x8B1CD878L,7UL,0x8B1CD878L,1UL,0UL}},{{0xBBC1B437L,7UL,0xE678D4E7L,0x25A57E23L,4294967295UL},{0xAE9A8F56L,0xB0DE0DC3L,0x17B7643BL,0xE42AA835L,4294967293UL},{0UL,0xE678D4E7L,0x5295905FL,0xE678D4E7L,0UL},{4294967290UL,0xBBC1B437L,7UL,0xE678D4E7L,0x25A57E23L},{1UL,4294967290UL,0x24528D80L,0x25A57E23L,4294967295UL}},{{0x5295905FL,7UL,0x25A57E23L,0xBBC1B437L,0x25A57E23L},{0x25A57E23L,0x25A57E23L,0xAE9A8F56L,0x24528D80L,0UL},{0x25A57E23L,0x17B7643BL,0UL,0x8B1CD878L,4294967293UL},{0x5295905FL,0xE42AA835L,4294967295UL,4294967295UL,0xE678D4E7L},{1UL,0x17B7643BL,0x17B7643BL,1UL,0xB0DE0DC3L}}};
            int i, j, k;
            (*g_127) = ((safe_div_func_int32_t_s_s((g_17[7][5] >= (l_389 | (2UL || g_276))), (g_97 , func_18((*g_374))))) , &p_7);

            ;
            (*l_391) = g_390;
            if ((l_392[2] < ((p_8 <= ((l_392[2] || (((((safe_sub_func_int64_t_s_s(func_18((*g_374)), l_384[1])) , l_397[5]) == (*g_126)) || ((0x96L | l_398[2][2][0]) | 0x7C94B5F1L)) , g_276)) == 0x2E2E6C88F2CCD2FDLL)) & 0x3B2C34FCC02263DALL)))
            {
                const unsigned l_408 = 18446744073709551615UL;
                (*p_6) = ((((l_398[1][1][2] , func_18((*g_374))) <= g_97.f2) ^ l_399) , ((safe_mod_func_uint16_t_u_u(p_7, p_8)) >= ((safe_mul_func_uint8_t_u_u((((safe_add_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(l_392[7], p_8)), l_399)) ^ p_7) , g_83[0][0][1]), g_17[3][2])) < l_408)));
                (*p_6) = (*g_20);
                (*g_20) = l_398[2][2][0];
            }
            else
            {
                for (g_97.f4 = 0; (g_97.f4 <= 3); g_97.f4 += 1)
                {
                    int *l_409 = &g_45;
                    for (g_97.f1 = 0; (g_97.f1 <= 3); g_97.f1 += 1)
                    {
                        int i;
                        (*g_20) = (+func_18((*g_374)));
                        (*g_374) = (**g_126);
                        (*g_127) = l_409;

                        ;
                        (*g_374) = &p_7;

                        ;
                    }
                    for (g_87 = 3; (g_87 >= 0); g_87 -= 1)
                    {
                        int i, j, k;
                        if (l_398[g_97.f4][g_87][(g_87 + 1)])
                            break;
                    }
                }
                if ((*p_6))
                    break;
                return l_410;



            }
            (**g_126) = (**g_126);
        }

        ;
        if ((safe_div_func_int8_t_s_s((+((safe_rshift_func_int16_t_s_s((func_18((*g_374)) >= (safe_add_func_uint16_t_u_u(g_97.f1, (p_8 , (safe_add_func_uint16_t_u_u(g_17[7][5], (safe_mul_func_int8_t_s_s(p_8, g_97.f3)))))))), 2)) > (0x57A8L > ((((safe_lshift_func_uint16_t_u_u((g_97.f1 , p_8), 5)) && p_8) , l_423) != l_423)))), p_8)))
        {
            const struct S0 *l_425 = (void*)0;
            l_425 = l_424;

            ;
        }
        else
        {
            g_426 = l_423;

            ;
            (*p_6) = (*p_6);
            for (p_8 = 0; (p_8 < (-2)); --p_8)
            {
                if ((***g_126))
                {
                    unsigned l_434 = 18446744073709551613UL;
                    (*p_6) = ((safe_rshift_func_uint16_t_u_s((safe_mod_func_int16_t_s_s(l_434, func_18((p_8 , func_9(func_31(func_35(p_8, (*g_127), g_17[0][4], g_427[1].f2, (*g_127)))))))), g_97.f2)) , 0L);
                    (*p_6) = (*p_6);
                }
                else
                {
                    (***g_126) = (*g_20);
                    (**g_374) = (((*p_6) ^ (*p_6)) && g_351);
                }
                for (g_97.f4 = 0; (g_97.f4 <= 4); g_97.f4 += 1)
                {
                    for (l_399 = 0; (l_399 <= 4); l_399 += 1)
                    {
                        int i;
                        (*g_20) = l_384[g_97.f4];
                        (**g_126) = (*g_374);
                    }
                }
            }
        }

        ;
        (*p_6) = (safe_sub_func_int64_t_s_s(((safe_lshift_func_int8_t_s_u(func_18(&p_7), g_427[1].f1)) , (l_439 != &g_427[1])), (((((*l_424) , p_8) < p_8) ^ p_8) < 0x78D436807E97366CLL)));
    }
    else
    {
        int *l_448 = &g_276;
        int ***l_462[5][7] = {{&g_374,&l_397[1],&l_397[5],&l_397[7],&l_397[3],&l_397[5],&g_127},{&l_397[3],&g_127,&g_127,&g_127,&g_127,&l_397[3],&l_397[1]},{&g_374,&l_397[7],&l_397[5],&g_374,&g_127,(void*)0,&l_397[7]},{&l_397[1],&l_397[5],&l_397[3],(void*)0,&l_397[3],&l_397[5],&l_397[1]},{&l_397[5],&l_397[7],&g_127,&l_397[3],&l_397[1],&l_397[5],&l_397[3]}};
        struct S0 *l_464[8] = {&g_427[1],&g_427[1],&g_427[1],&g_427[1],&g_427[1],&g_427[1],&g_427[1],&g_427[1]};
        int i, j;
        for (p_8 = (-16); (p_8 != 22); ++p_8)
        {
            unsigned long long l_449 = 1UL;
            int *l_463 = &g_45;
            for (g_97.f1 = 0; (g_97.f1 == (-30)); g_97.f1 = safe_sub_func_int64_t_s_s(g_97.f1, 3))
            {
                const unsigned l_450 = 0UL;
                if (((((!p_8) != ((((g_427[1].f4 >= ((p_7 , (safe_sub_func_int32_t_s_s(0x46A29408L, ((safe_sub_func_int8_t_s_s(g_427[1].f4, ((((&p_7 != (void*)0) != (*l_448)) , (void*)0) != (void*)0))) && 0x16482F5D25ACF440LL)))) ^ l_449)) == g_97.f0) || l_450) | l_450)) | l_450) , (*p_6)))
                {
                    int l_461 = 0xA75A1E8BL;
                    for (p_7 = 0; (p_7 >= 0); p_7 -= 1)
                    {
                        struct S0 **l_465 = &l_439;
                        int i, j, k;
                        (*g_127) = &g_83[(p_7 + 1)][p_7][(p_7 + 4)];

                        ;
                        g_83[(p_7 + 1)][p_7][(p_7 + 4)] = (safe_mod_func_int32_t_s_s((safe_div_func_int16_t_s_s((safe_div_func_uint8_t_u_u(p_8, ((0x815BAD930829D97DLL & p_8) & (safe_div_func_uint32_t_u_u(((safe_sub_func_uint8_t_u_u(((l_461 , ((void*)0 != l_462[1][0])) != p_7), (l_450 > func_18(l_463)))) == 0x05482821L), p_7))))), g_276)), (*g_20)));
                        if ((*p_6))
                            continue;
                        (*l_465) = l_464[3];
                    }
                }
                else
                {
                    return l_463;


                }
            }
        }
    }

    ;
    ;
    return l_466;



}







static int * func_9(int * p_10)
{
    int * const l_275[4] = {&g_276,&g_276,&g_276,&g_276};
    int *l_286 = &g_276;
    int ***l_305 = (void*)0;
    int *l_373 = &g_21;
    int i;
    for (g_97.f0 = 0; (g_97.f0 <= (-3)); g_97.f0 = safe_sub_func_int32_t_s_s(g_97.f0, 1))
    {
        (**g_127) = 0xF6F7A06AL;
        return (*g_127);


    }
    for (g_97.f3 = 10; (g_97.f3 != 38); ++g_97.f3)
    {
        int *l_273 = &g_21;
        int l_274 = (-1L);
        for (g_21 = (-8); (g_21 <= (-20)); --g_21)
        {
            return (*g_127);


        }
        (*g_127) = func_24(((func_18(func_31(l_273)) , &g_127) != &g_127), g_97.f1, func_35((l_274 | ((((((((!0x3F752003L) && g_17[7][5]) , (void*)0) == (void*)0) , l_275[0]) != (void*)0) | l_274) != g_259)), p_10, g_97.f1, g_97.f1, p_10), g_97.f1);

        ;
        for (g_87 = 0; g_87 < 3; g_87 += 1)
        {
            for (g_97.f1 = 0; g_97.f1 < 1; g_97.f1 += 1)
            {
                for (g_45 = 0; g_45 < 6; g_45 += 1)
                {
                    g_83[g_87][g_97.f1][g_45] = 0x855E6FC1L;
                }
            }
        }
        if ((*p_10))
            break;
    }
    for (g_259 = 0; (g_259 < 17); ++g_259)
    {
        unsigned long long l_285 = 8UL;
        int *l_309[2][8] = {{&g_276,&g_21,&g_45,&g_45,&g_21,&g_276,&g_21,&g_276},{&g_21,&g_276,&g_21,&g_45,&g_45,&g_21,&g_276,&g_21}};
        const unsigned short l_342 = 65534UL;
        unsigned l_350[10][4];
        struct S0 l_361[4] = {{0x1BL,0x6CFFL,0UL,18446744073709551613UL,0x91E1A1A6L},{0x1BL,0x6CFFL,0UL,18446744073709551613UL,0x91E1A1A6L},{0x1BL,0x6CFFL,0UL,18446744073709551613UL,0x91E1A1A6L},{0x1BL,0x6CFFL,0UL,18446744073709551613UL,0x91E1A1A6L}};
        int **l_375[9] = {&l_309[1][1],&l_373,&l_309[1][1],&l_373,&l_309[1][1],&l_373,&l_309[1][1],&l_373,&l_309[1][1]};
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 4; j++)
                l_350[i][j] = 0x0834627BL;
        }
    }
    return (*g_127);


}







static int * func_11(long long p_12, int * p_13, struct S0 p_14)
{
    char l_264 = 0x05L;
    struct S0 l_265 = {-3L,0x853FL,0x4DE006D2L,0UL,4294967291UL};
    int *l_266 = &g_83[0][0][4];
    (**g_126) = func_31((g_97 , func_31(func_35(l_264, (**g_126), g_97.f2, g_83[1][0][5], p_13))));

    ;
    (*g_127) = func_33((l_265 , l_266));

    ;
    return (*g_127);


}







static long long func_18(int * p_19)
{
    char l_41 = 0L;
    int * const l_44[4][6] = {{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21},{&g_21,&g_21,&g_21,&g_21,&g_21,&g_21}};
    char l_96 = 0x7EL;
    struct S0 l_119 = {1L,0x1D27L,0x1B8D994FL,0UL,0x8FDDE4D7L};
    int ***l_179[3];
    const long long l_223 = 0xA971ECD175016619LL;
    unsigned short l_235 = 0xD603L;
    int l_260[9][1][7] = {{{0xEB5314A3L,0xEB5314A3L,0x537F39B1L,0x537F39B1L,0xEB5314A3L,0xEB5314A3L,0x537F39B1L}},{{1L,(-8L),1L,(-8L),1L,(-8L),1L}},{{0xEB5314A3L,0x537F39B1L,0x537F39B1L,0xEB5314A3L,0xEB5314A3L,0x537F39B1L,0x537F39B1L}},{{0x8AC1276BL,(-8L),0x8AC1276BL,(-8L),0x8AC1276BL,(-8L),0x8AC1276BL}},{{0xEB5314A3L,0xEB5314A3L,0x537F39B1L,0x537F39B1L,0xEB5314A3L,0xEB5314A3L,0x537F39B1L}},{{1L,(-8L),1L,(-8L),1L,(-8L),1L}},{{0xEB5314A3L,0x537F39B1L,0x537F39B1L,0xEB5314A3L,0xEB5314A3L,0x537F39B1L,0x537F39B1L}},{{0x8AC1276BL,(-8L),0x8AC1276BL,(-8L),0x8AC1276BL,(-8L),0x8AC1276BL}},{{0xEB5314A3L,0xEB5314A3L,0x537F39B1L,0x537F39B1L,0xEB5314A3L,0xEB5314A3L,0x537F39B1L}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_179[i] = &g_127;
    for (g_21 = 0; (g_21 == 26); g_21++)
    {
        const short l_29 = 0x14ABL;
        int l_30[1][10] = {{0x3BA6AED1L,0x25BB0866L,0xB551FA4CL,0x25BB0866L,0x3BA6AED1L,0x3BA6AED1L,0x25BB0866L,0xB551FA4CL,0x25BB0866L,0x3BA6AED1L}};
        int **l_102 = &g_20;
        int l_129[9][3] = {{(-1L),0xE681B697L,0x85608B99L},{0xA5CD318DL,0x85608B99L,0xC57EA6FFL},{0x6804023DL,1L,1L},{0x85608B99L,0x85608B99L,1L},{0xADCAF14AL,0xE681B697L,0x8692F7ABL},{0xADCAF14AL,0xFD05F774L,0x6804023DL},{0x85608B99L,0xC57EA6FFL,0xE681B697L},{0x6804023DL,0xADCAF14AL,0x6804023DL},{0xA5CD318DL,0L,0x8692F7ABL}};
        unsigned char l_140 = 0xA0L;
        unsigned char l_141 = 2UL;
        int i, j;
    }
    for (l_119.f1 = 0; (l_119.f1 >= 0); l_119.f1 -= 1)
    {
        const unsigned short l_156 = 65533UL;
        int * const l_159 = &g_83[0][0][5];
        unsigned l_182 = 0x9DBB096DL;
        int *l_195 = (void*)0;
        int * const *l_222 = &l_195;
        int * const **l_221 = &l_222;
        unsigned l_238 = 4294967287UL;
        unsigned l_239 = 0xAB537B2DL;
    }
    (*p_19) = ((g_17[8][1] && (safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(g_97.f0, (((void*)0 != &g_127) <= ((safe_div_func_int64_t_s_s((g_259 <= (l_260[8][0][2] && (safe_rshift_func_int16_t_s_s(g_87, g_45)))), g_87)) && g_97.f4)))) , g_97.f2), g_259)), g_87))) , (-1L));
    return g_45;
}







static int * func_24(const unsigned p_25, unsigned p_26, int * p_27, unsigned long long p_28)
{
    char l_100 = 0x97L;
    int **l_101[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    (*p_27) = (*g_20);
    g_20 = (g_97 , func_33(func_31(func_31(func_35(p_26, ((p_28 , p_25) , p_27), (safe_mod_func_int8_t_s_s(l_100, g_17[7][5])), p_25, p_27)))));

    ;
    return &g_21;


}







static int * func_31(int * p_32)
{
    unsigned short l_77 = 7UL;
    unsigned char l_90 = 0x86L;
    int **l_95[3];
    int i;
    for (i = 0; i < 3; i++)
        l_95[i] = &g_20;
    l_77 = (*p_32);
    for (g_45 = 7; (g_45 <= (-22)); g_45--)
    {
        int **l_86 = &g_20;
        for (l_77 = 0; (l_77 < 18); l_77 = safe_add_func_uint64_t_u_u(l_77, 3))
        {
            int *l_82 = &g_83[1][0][2];
            int **l_85 = (void*)0;
            int ***l_84[5][2] = {{&l_85,(void*)0},{&l_85,(void*)0},{&l_85,(void*)0},{&l_85,(void*)0},{&l_85,(void*)0}};
            int i, j;
            (*l_82) = (*g_20);
            l_86 = &g_20;
            for (g_87 = 19; (g_87 >= 2); g_87 = safe_sub_func_uint32_t_u_u(g_87, 4))
            {
                (*l_82) = l_90;
            }
            p_32 = func_35((((l_90 , 0xACL) ^ 0x00L) , g_21), p_32, (((safe_sub_func_uint64_t_u_u(g_87, (-1L))) || l_90) >= ((**l_86) == 65535UL)), (*l_82), p_32);
        }
    }
    p_32 = func_33(&g_87);

    ;
    return &g_87;


}







static int * func_33(int * p_34)
{
    unsigned short l_53 = 0x40BFL;
    int l_63 = (-5L);
    for (g_45 = 0; (g_45 != 3); ++g_45)
    {
        char l_50[2];
        int l_54 = 0x0C1731D4L;
        int i;
        for (i = 0; i < 2; i++)
            l_50[i] = 0L;
        l_54 = (safe_add_func_uint64_t_u_u(l_50[0], (safe_sub_func_uint32_t_u_u(0xCB06A9BEL, l_53))));
        l_63 = ((l_53 != l_54) <= (((-1L) || l_53) ^ ((safe_lshift_func_uint8_t_u_u(((((safe_rshift_func_uint8_t_u_s(l_54, (safe_lshift_func_int8_t_s_u((l_50[1] , 0xF6L), 7)))) ^ (safe_sub_func_uint64_t_u_u(g_17[6][6], g_21))) , (-1L)) > 0x89AFFF74L), 7)) , g_45)));
    }
    for (l_63 = 0; (l_63 < 12); l_63 = safe_add_func_int32_t_s_s(l_63, 2))
    {
        unsigned l_75 = 0x75F97E6EL;
        for (g_45 = 20; (g_45 >= 11); g_45--)
        {
            unsigned short l_74 = 0UL;
            int **l_76[3][10] = {{&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20,&g_20},{&g_20,&g_20,&g_20,&g_20,(void*)0,&g_20,&g_20,&g_20,(void*)0,&g_20},{&g_20,&g_20,&g_20,(void*)0,&g_20,&g_20,&g_20,&g_20,(void*)0,(void*)0}};
            int i, j;
            p_34 = func_35(l_63, &g_45, ((0x0F09DEA6CBABA27FLL == (safe_div_func_uint32_t_u_u(g_21, (safe_sub_func_uint32_t_u_u((g_17[7][5] >= ((safe_sub_func_uint64_t_u_u(((l_53 == l_74) , ((l_75 & g_17[7][5]) , g_17[7][5])), 18446744073709551607UL)) && 0x3FL)), l_75))))) | 0x8712L), l_63, &l_63);

            ;
        }
    }

    ;
    return p_34;


}







static int * func_35(unsigned p_36, int * p_37, const long long p_38, unsigned char p_39, int * const p_40)
{
    return p_37;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_17[i][j], "g_17[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_83[i][j][k], "g_83[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_97.f0, "g_97.f0", print_hash_value);
    transparent_crc(g_97.f1, "g_97.f1", print_hash_value);
    transparent_crc(g_97.f2, "g_97.f2", print_hash_value);
    transparent_crc(g_97.f3, "g_97.f3", print_hash_value);
    transparent_crc(g_97.f4, "g_97.f4", print_hash_value);
    transparent_crc(g_259, "g_259", print_hash_value);
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_427[i].f0, "g_427[i].f0", print_hash_value);
        transparent_crc(g_427[i].f1, "g_427[i].f1", print_hash_value);
        transparent_crc(g_427[i].f2, "g_427[i].f2", print_hash_value);
        transparent_crc(g_427[i].f3, "g_427[i].f3", print_hash_value);
        transparent_crc(g_427[i].f4, "g_427[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
