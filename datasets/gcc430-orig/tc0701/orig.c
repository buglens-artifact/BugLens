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
   signed f0 : 10;
   unsigned char f1;
   signed f2 : 9;
   signed f3 : 9;
   unsigned f4 : 12;
};

struct S1 {
   signed f0 : 8;
   unsigned short f1;
   signed f2 : 6;
   unsigned f3 : 16;
   signed f4 : 29;
   unsigned f5 : 5;
};

union U2 {
   char * f0;
   int f1;
   char f2;
   unsigned short f3;
   short f4;
};

union U3 {
   char f0;
   short f1;
   unsigned f2;
   char f3;
   unsigned f4 : 9;
};


static int g_23 = (-5L);
static int *g_22 = &g_23;
static char g_37 = 0x43L;
static char *g_36 = &g_37;
static struct S1 g_38 = {-7,0x8DA9L,1,245,-15097,3};
static int g_60 = 0x61B3E233L;
static int g_87 = 0L;
static union U2 g_104[6] = {{0},{0},{0},{0},{0},{0}};
static struct S0 g_118 = {14,253UL,1,-5,22};
static struct S0 *g_117 = &g_118;
static union U2 *g_128 = &g_104[3];
static union U2 **g_127 = &g_128;
static struct S1 *g_202 = (void*)0;
static unsigned char g_224 = 0x24L;
static int g_272 = (-10L);
static union U3 g_289 = {0xDEL};
static int g_329 = 0xD5040360L;
static int g_376 = (-1L);
static union U3 *g_401 = &g_289;
static union U3 **g_400 = &g_401;
static union U3 ***g_399[3] = {&g_400,&g_400,&g_400};



static unsigned func_1(void);
static int * func_2(int p_3, char * p_4);
static char * func_6(struct S1 p_7, int * p_8);
static int * func_10(char * p_11);
static char * func_12(union U2 p_13, union U2 p_14, union U3 p_15, union U2 p_16);
static union U2 func_17(int * p_18, short p_19, int * p_20, int * p_21);
static int * func_24(struct S0 p_25);
static struct S0 func_26(char * p_27, unsigned p_28, unsigned p_29, int * p_30, unsigned p_31);
static char * func_32(char p_33);
static char func_34(char * p_35);
static unsigned func_1(void)
{
    char l_5[8][8][2] = {{{0L,(-1L)},{0x8CL,0L},{0xC9L,0x7EL},{(-1L),0xBDL},{0xABL,0L},{0x65L,0x65L},{0L,0x47L},{0L,0x7CL}},{{(-1L),0xBDL},{0x7AL,(-1L)},{0x8CL,0xE8L},{0x8CL,(-1L)},{0x7AL,0xBDL},{(-1L),0x7CL},{0L,0x47L},{0L,0x65L}},{{0x65L,0L},{0xABL,0xBDL},{(-1L),0L},{(-1L),0x8EL},{(-6L),0xE3L},{0x5BL,0L},{8L,3L},{0xE8L,4L}},{{1L,0xE8L},{0x7CL,1L},{0xE3L,0L},{1L,0L},{0L,3L},{(-1L),9L},{0x5BL,(-6L)},{0xE3L,0x8EL}},{{0L,4L},{(-9L),4L},{0L,0x8EL},{0xE3L,(-6L)},{0x5BL,9L},{(-1L),3L},{0L,0L},{1L,0L}},{{0xE3L,1L},{0x7CL,0xE8L},{1L,4L},{0xE8L,3L},{8L,0L},{0x5BL,0xE3L},{(-6L),0x8EL},{(-1L),0L}},{{(-9L),0xBDL},{8L,0x8EL},{0x7CL,0x7CL},{0x5BL,0xE8L},{0L,3L},{9L,0xBDL},{1L,9L},{(-6L),1L}},{{(-6L),9L},{1L,0xBDL},{9L,3L},{0L,0xE8L},{0x5BL,0x7CL},{0x7CL,0x8EL},{8L,0xBDL},{(-9L),0L}}};
    struct S1 l_9 = {9,0UL,-1,50,-12,4};
    int *l_230 = (void*)0;
    union U2 l_307 = {0};
    union U3 l_308[7] = {{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L},{0xC1L}};
    int **l_462 = &g_22;
    int *l_463 = &g_272;
    int i, j, k;
    (*l_462) = func_2(l_5[4][2][0], func_6(l_9, func_10(func_12(func_17(g_22, g_23, &g_23, func_24(func_26((g_23 , func_32(func_34(g_36))), g_224, l_5[5][0][0], l_230, l_5[2][3][1]))), l_307, l_308[3], l_307))));
    (*l_463) ^= func_34(&g_37);
    return g_224;
}







static int * func_2(int p_3, char * p_4)
{
    struct S0 **l_460 = &g_117;
    int *l_461 = &g_329;
    for (g_118.f1 = 0; (g_118.f1 <= 4); g_118.f1 = safe_add_func_int16_t_s_s(g_118.f1, 1))
    {
        struct S0 **l_458 = &g_117;
        struct S0 ***l_459[10][10] = {{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458},{&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458,&l_458}};
        int i, j;
        l_460 = l_458;
    }
    return l_461;
}







static char * func_6(struct S1 p_7, int * p_8)
{
    int **l_387 = &g_22;
    int l_453 = 9L;
    char *l_454 = (void*)0;
    int *l_455 = &g_60;
    (*l_387) = (void*)0;
    for (g_224 = (-24); (g_224 != 58); ++g_224)
    {
        short l_390 = 0x3D03L;
        char l_413[2];
        struct S0 *l_426 = &g_118;
        int **l_429[3];
        struct S1 *l_434 = &g_38;
        int i;
        for (i = 0; i < 2; i++)
            l_413[i] = 0L;
        for (i = 0; i < 3; i++)
            l_429[i] = &g_22;
        if ((l_390 >= p_7.f3))
        {
            union U3 l_391 = {0x3FL};
            struct S0 l_422 = {-4,8UL,-19,-9,29};
            if ((((l_391 , 0xE323B69CL) <= (((void*)0 != &g_37) || g_38.f4)) ^ 0xA108L))
            {
                unsigned char l_411 = 1UL;
                struct S0 **l_417 = &g_117;
                if (l_390)
                    break;
                for (l_391.f3 = 20; (l_391.f3 != 6); --l_391.f3)
                {
                    int *l_404 = &g_329;
                    for (g_38.f1 = (-8); (g_38.f1 <= 37); ++g_38.f1)
                    {
                        union U3 *l_398 = &l_391;
                        union U3 **l_397 = &l_398;
                        union U3 ***l_396 = &l_397;
                        int *l_402 = (void*)0;
                        int *l_403 = &g_329;
                        (*l_403) &= ((g_38 , l_396) == g_399[0]);
                        (*l_403) = ((((*g_401) , &g_128) == (void*)0) , g_38.f0);
                        return &g_37;
                    }
                    (*l_404) ^= l_391.f0;
                    (*l_387) = (*l_387);
                    for (g_37 = 0; (g_37 >= (-5)); g_37 = safe_sub_func_int32_t_s_s(g_37, 7))
                    {
                        struct S1 *l_412[2][6] = {{&g_38,&g_38,&g_38,&g_38,&g_38,&g_38},{&g_38,&g_38,&g_38,&g_38,&g_38,&g_38}};
                        int l_416 = 0x9B5D5DB5L;
                        int i, j;
                        l_413[1] &= (l_391.f0 || ((safe_mod_func_uint8_t_u_u((0UL > (l_411 >= (l_412[1][2] != &p_7))), (*l_404))) == p_7.f2));
                        (*l_404) = ((safe_div_func_int32_t_s_s(8L, l_416)) <= p_7.f3);
                    }
                }
                (*l_417) = &g_118;
                (*l_387) = ((*g_401) , &g_272);
            }
            else
            {
                return &g_37;
            }
            (*g_117) = l_422;
            (**l_387) = (*g_22);
        }
        else
        {
            for (g_60 = (-8); (g_60 <= (-29)); g_60 = safe_sub_func_uint32_t_u_u(g_60, 5))
            {
                union U3 *l_425 = &g_289;
                (*g_400) = l_425;
                (*g_127) = (*g_127);
            }
        }
        (*l_387) = &g_329;
        (*g_22) = (&g_118 == l_426);
        for (g_38.f1 = 0; (g_38.f1 != 59); g_38.f1 = safe_add_func_uint32_t_u_u(g_38.f1, 4))
        {
            unsigned char l_450 = 255UL;
            p_7.f4 = ((void*)0 == l_429[0]);
            for (g_376 = 0; (g_376 != 25); ++g_376)
            {
                struct S0 l_435 = {30,8UL,-21,-16,43};
                for (g_23 = 0; (g_23 == 2); g_23++)
                {
                    unsigned l_436 = 0x0A4CB2ACL;
                    union U2 l_445[2] = {{0},{0}};
                    int i;
                    if ((l_434 != (l_435 , &g_38)))
                    {
                        (*g_22) = (g_38.f2 >= p_7.f0);
                        (**l_387) = (*g_22);
                    }
                    else
                    {
                        if (l_436)
                            break;
                    }
                    g_118.f0 ^= (0x65L != (safe_add_func_uint16_t_u_u((1L & (g_289.f3 | ((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_7.f5, p_7.f3)), (safe_mod_func_uint8_t_u_u(g_38.f0, (**l_387))))) | (l_445[0] , 0x547E5A8AL)) ^ p_7.f0) > 0L))), g_272)));
                }
            }
            for (g_289.f2 = 22; (g_289.f2 >= 25); g_289.f2++)
            {
                l_450 &= (safe_lshift_func_uint16_t_u_s((p_7.f1 , g_376), 3));
            }
        }
    }
    (*l_387) = (*l_387);
    (*l_455) |= (((l_453 , l_453) | ((g_38 , 3UL) < (g_329 >= ((void*)0 == &g_202)))) <= p_7.f1);
    return &g_37;
}







static int * func_10(char * p_11)
{
    unsigned char l_380 = 255UL;
    struct S1 **l_385 = &g_202;
    int *l_386[8] = {&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60,&g_60};
    int i;
    (*g_22) = (((&g_36 == &p_11) & ((~((safe_unary_minus_func_int8_t_s((*g_36))) & (l_380 < (safe_add_func_uint16_t_u_u(g_38.f0, ((safe_rshift_func_int16_t_s_s(l_380, l_380)) && (*g_22))))))) > (l_385 == l_385))) <= (-6L));
    return l_386[0];
}







static char * func_12(union U2 p_13, union U2 p_14, union U3 p_15, union U2 p_16)
{
    struct S0 l_309 = {6,1UL,-20,15,51};
    char *l_310 = (void*)0;
    int *l_351 = &g_87;
    g_117 = &g_118;
    (*g_117) = l_309;
    (*g_22) = (*g_22);
    for (g_118.f1 = 0; (g_118.f1 >= 56); g_118.f1 = safe_add_func_uint32_t_u_u(g_118.f1, 7))
    {
        union U3 **l_317[7];
        int l_327 = 1L;
        int i;
        for (i = 0; i < 7; i++)
            l_317[i] = (void*)0;
    }
    return l_310;
}







static union U2 func_17(int * p_18, short p_19, int * p_20, int * p_21)
{
    int l_285[8];
    union U3 *l_288 = &g_289;
    char **l_290 = &g_36;
    struct S1 *l_301 = &g_38;
    int *l_305 = &g_23;
    union U2 l_306[5][4] = {{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}},{{0},{0},{0},{0}}};
    int i, j;
    for (i = 0; i < 8; i++)
        l_285[i] = 0x0252E6F0L;
    (*g_22) &= ((safe_add_func_uint8_t_u_u(l_285[0], (safe_sub_func_uint8_t_u_u(((((l_285[2] , (((void*)0 != l_288) < (0xDF2E6AC6L != ((!(!(g_289.f3 | p_19))) , 4294967295UL)))) & p_19) <= 5L) > 4294967292UL), p_19)))) ^ 0x31L);
    l_290 = &g_36;
    for (g_87 = 7; (g_87 >= 0); g_87 -= 1)
    {
        struct S1 *l_302 = &g_38;
        unsigned l_303 = 0xB6692F46L;
        int **l_304[5];
        int i;
        for (i = 0; i < 5; i++)
            l_304[i] = (void*)0;
        g_22 = func_24((*g_117));
        (*g_22) = ((*l_302) , (*p_18));
        l_305 = l_305;
        return l_306[4][0];
    }
    return l_306[4][0];
}







static int * func_24(struct S0 p_25)
{
    int l_280[7] = {(-1L),(-1L),0x3DBBB637L,(-1L),(-1L),0x3DBBB637L,(-1L)};
    int *l_281 = &g_272;
    char *l_282 = &g_37;
    int i;
    (*l_281) = l_280[0];
    (*l_281) = (func_34(l_282) && p_25.f4);
    return &g_60;
}







static struct S0 func_26(char * p_27, unsigned p_28, unsigned p_29, int * p_30, unsigned p_31)
{
    int l_231[4] = {(-1L),(-1L),(-1L),(-1L)};
    union U2 **l_242[7][8] = {{(void*)0,(void*)0,(void*)0,(void*)0,&g_128,&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128,&g_128,&g_128,&g_128,(void*)0,&g_128},{&g_128,&g_128,&g_128,(void*)0,&g_128,&g_128,&g_128,&g_128},{&g_128,(void*)0,&g_128,&g_128,(void*)0,(void*)0,(void*)0,&g_128},{&g_128,&g_128,(void*)0,&g_128,&g_128,&g_128,&g_128,&g_128},{&g_128,&g_128,&g_128,(void*)0,(void*)0,(void*)0,&g_128,(void*)0},{(void*)0,&g_128,&g_128,(void*)0,&g_128,(void*)0,&g_128,(void*)0}};
    struct S1 l_243 = {3,0x37AFL,7,183,-8409,1};
    unsigned l_277 = 0x1466FC8FL;
    int *l_278 = &g_272;
    struct S0 l_279 = {30,248UL,-21,-14,12};
    int i, j;
    if ((((((0x9578L > l_231[3]) == (safe_div_func_uint32_t_u_u(0x737431E9L, p_29))) == (&p_30 == (void*)0)) , (safe_mod_func_uint16_t_u_u(l_231[0], 0xBD06L))) > l_231[0]))
    {
        int l_236[1][9][9] = {{{0xCBDDDD63L,0x3CF29838L,0xCBDDDD63L,(-3L),0L,0x0661FE9FL,0x22663ACAL,0x0661FE9FL,0L},{0x9A109247L,2L,0x2D84668BL,0L,(-2L),0x9A109247L,0x2D84668BL,0x2D84668BL,0x9A109247L},{0x88FA9ADCL,(-3L),9L,(-3L),0x88FA9ADCL,(-5L),1L,0xC561DE8AL,1L},{2L,0xAB288331L,1L,4L,(-2L),0x2D84668BL,0xAB288331L,4L,4L},{9L,(-5L),0L,0xC561DE8AL,0L,(-5L),9L,(-3L),3L},{0x9A109247L,(-2L),0L,0x2D84668BL,2L,0x9A109247L,0xAB288331L,0L,2L},{(-1L),(-3L),1L,0x0661FE9FL,0x2C3249E6L,0x0661FE9FL,1L,(-3L),(-1L)},{0xA73BDA03L,0x2D84668BL,1L,2L,0xA73BDA03L,(-2L),0x2D84668BL,4L,2L},{0L,0x3CF29838L,0xCBDDDD63L,0x0661FE9FL,3L,(-5L),3L,0x0661FE9FL,0xCBDDDD63L}}};
        char *l_237[2];
        struct S1 *l_244 = (void*)0;
        struct S1 *l_245 = (void*)0;
        struct S1 *l_246 = (void*)0;
        struct S1 *l_247 = &l_243;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_237[i] = &g_37;
        l_236[0][6][7] = func_34(&g_37);
        (*l_247) = (((*g_22) | func_34(l_237[1])) , ((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_28, (((*g_128) , l_242[5][6]) != l_242[5][6]))), 0x52L)) , l_243));
    }
    else
    {
        unsigned short l_250 = 65534UL;
        struct S1 *l_251 = &l_243;
        int *l_260[8][6][1] = {{{&g_87},{&g_23},{&g_87},{&g_60},{(void*)0},{&g_60}},{{&g_87},{&l_231[1]},{&g_87},{&g_60},{(void*)0},{&g_60}},{{&g_87},{&g_23},{&g_87},{&g_60},{(void*)0},{&g_60}},{{&g_87},{&l_231[1]},{&g_87},{&g_60},{(void*)0},{&g_60}},{{&g_87},{&g_23},{&g_87},{&g_60},{(void*)0},{&g_60}},{{&g_87},{&l_231[1]},{&g_87},{&g_60},{(void*)0},{&g_60}},{{&g_87},{&g_23},{&g_87},{&g_60},{(void*)0},{&g_60}},{{&g_87},{&l_231[1]},{&g_87},{&g_60},{(void*)0},{&g_60}}};
        int **l_259 = &l_260[5][3][0];
        int i, j, k;
        for (p_28 = 11; (p_28 >= 13); p_28++)
        {
            struct S1 l_257 = {-4,0x67A0L,-1,129,13269,4};
            if (l_250)
            {
                (*g_127) = (void*)0;
            }
            else
            {
                union U3 l_256[4][2] = {{{1L},{0x55L}},{{1L},{1L}},{{0x55L},{1L}},{{1L},{0x55L}}};
                int *l_258 = &l_231[3];
                int i, j;
                (*l_258) &= ((l_251 != (g_38 , l_251)) | (safe_add_func_int32_t_s_s((*g_22), (((!((*g_22) > (((safe_rshift_func_uint8_t_u_s(((*g_36) >= l_250), 7)) && (l_256[3][1] , ((p_31 , l_257) , l_250))) <= l_257.f3))) | (*g_22)) == 0x354BL))));
            }
        }
        (*l_259) = &g_60;
    }
    for (l_243.f1 = 23; (l_243.f1 >= 28); l_243.f1 = safe_add_func_int32_t_s_s(l_243.f1, 3))
    {
        g_38 = l_243;
    }
    if ((0xDCL > (safe_add_func_uint32_t_u_u(p_28, ((65533UL && l_243.f3) > (*g_36))))))
    {
        struct S0 l_269 = {18,254UL,-15,-0,11};
        return l_269;
    }
    else
    {
        int *l_270 = &l_231[0];
        int *l_271 = &g_272;
        int *l_276[1][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int i, j;
        (*l_270) |= (*g_22);
        (*l_271) ^= (func_34(&g_37) < (l_231[0] , (g_224 < (l_243 , p_31))));
        (*l_270) ^= ((safe_unary_minus_func_int32_t_s(8L)) != p_28);
        l_277 &= (((*l_271) && ((1UL ^ (safe_lshift_func_uint16_t_u_u(g_118.f3, g_38.f4))) < (((~(((*l_271) ^ (l_243.f4 ^ (*l_270))) != (*l_271))) | (*l_270)) || p_28))) , 0x708858D8L);
    }
    (*l_278) |= ((p_29 ^ ((*g_22) > func_34(&g_37))) >= (*g_22));
    return l_279;
}







static char * func_32(char p_33)
{
    int l_226[9][10] = {{3L,(-4L),0xC1286713L,8L,(-10L),0x1609D93AL,5L,0x75D76A2BL,0x1609D93AL,(-6L)},{0x95775BB5L,3L,0x1B91DD58L,0x95775BB5L,1L,0x1609D93AL,0xFCB7D223L,(-10L),(-10L),0xC1286713L},{3L,0xCEE8C25CL,0xB45B9D29L,1L,1L,0xD949C42CL,0xD97F3C72L,0xCEE8C25CL,0xFED6AD9DL,1L},{0xCEE8C25CL,0x1B91DD58L,0xFCB7D223L,(-6L),(-4L),(-4L),(-6L),0xFCB7D223L,0x1B91DD58L,0xCEE8C25CL},{(-1L),3L,0xC1286713L,0x75D76A2BL,1L,0x95775BB5L,(-4L),1L,0x3695C09DL,0x75D76A2BL},{5L,8L,0L,3L,1L,0x4F0108C1L,0xCEE8C25CL,1L,0x40E12390L,0xCEE8C25CL},{1L,(-4L),0x1609D93AL,0x9BA1BEA9L,(-4L),0x3695C09DL,0L,(-9L),(-10L),1L},{(-1L),1L,0x75D76A2BL,0xFCB7D223L,1L,0xFCB7D223L,0x75D76A2BL,1L,(-1L),0x3695C09DL},{8L,0x9BA1BEA9L,0xFED6AD9DL,0L,(-1L),0xB45B9D29L,1L,(-1L),(-1L),(-10L)}};
    int *l_227 = &g_60;
    int **l_228 = &l_227;
    char *l_229 = (void*)0;
    int i, j;
    (*l_228) = (l_226[0][0] , l_227);
    (*l_228) = &g_60;
    (*l_228) = (void*)0;
    return l_229;
}







static char func_34(char * p_35)
{
    struct S1 *l_39 = &g_38;
    int l_42 = 0x3B919D6BL;
    unsigned l_46 = 0xF746B325L;
    union U2 l_58 = {0};
    int **l_64[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned char l_105[7][6] = {{8UL,0x3DL,252UL,252UL,0x3DL,8UL},{254UL,252UL,6UL,0xFBL,8UL,254UL},{0x3DL,0x24L,0UL,8UL,0UL,0x24L},{0x3DL,0UL,0UL,254UL,8UL,0x3DL},{252UL,0UL,254UL,252UL,252UL,254UL},{0UL,0UL,0x98L,252UL,8UL,252UL},{0xFBL,0UL,254UL,0x98L,251UL,0x98L}};
    struct S0 l_144 = {-25,0x08L,-6,-14,18};
    int i, j;
    (*l_39) = g_38;
    for (g_38.f1 = (-29); (g_38.f1 != 36); g_38.f1++)
    {
        unsigned l_45 = 0x0D94485EL;
        int *l_122 = &g_60;
        struct S1 *l_124 = (void*)0;
        unsigned char l_163[9][1] = {{9UL},{255UL},{9UL},{255UL},{9UL},{255UL},{9UL},{255UL},{9UL}};
        struct S0 *l_173 = &l_144;
        struct S1 **l_225 = &l_39;
        int i, j;
        if ((l_42 > (safe_lshift_func_int8_t_s_s((*g_36), l_45))))
        {
            return l_46;
        }
        else
        {
            unsigned short l_47 = 0x2DF1L;
            int l_65 = 0xD621DD8CL;
            union U3 l_70 = {0xE9L};
            union U2 *l_74 = &l_58;
            unsigned l_82 = 0x06C0CD1CL;
            struct S1 **l_147[4][10] = {{&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39},{&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39},{&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39},{&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39,&l_39}};
            int *l_180 = &l_42;
            int i, j;
            l_47 = 1L;
            for (l_42 = 0; (l_42 <= (-22)); --l_42)
            {
                int *l_62 = (void*)0;
                struct S1 *l_71 = &g_38;
                int l_72[6][10] = {{(-4L),2L,(-4L),(-4L),2L,(-4L),(-4L),2L,(-4L),(-4L)},{2L,2L,0xF4B2487FL,2L,2L,0xF4B2487FL,2L,2L,0xF4B2487FL,2L},{2L,(-4L),(-4L),2L,(-4L),(-4L),2L,(-4L),(-4L),2L},{(-4L),2L,(-4L),(-4L),2L,(-4L),(-4L),2L,(-4L),(-4L)},{2L,2L,0xF4B2487FL,2L,2L,0xF4B2487FL,2L,2L,0xF4B2487FL,2L},{2L,(-4L),(-4L),2L,(-4L),(-4L),2L,(-4L),(-4L),2L}};
                int l_95 = 0xB9DF8DAFL;
                struct S1 l_114 = {-8,0xBFEBL,-5,198,3845,0};
                int i, j;
                if (((safe_mod_func_uint32_t_u_u((+g_38.f0), (safe_add_func_int32_t_s_s((*g_22), (safe_add_func_int16_t_s_s((~((g_38.f5 > (l_42 , (safe_lshift_func_int8_t_s_u((+(*g_36)), g_38.f2)))) || (((l_47 & (l_58 , l_47)) | l_45) && 4294967291UL))), 0x4912L)))))) < 248UL))
                {
                    if (l_45)
                    {
                        int *l_59 = &g_60;
                        struct S0 l_61 = {19,0x56L,19,4,24};
                        (*l_59) ^= (*g_22);
                        (*l_59) ^= ((l_61 , &g_60) == &l_42);
                        if ((*g_22))
                            continue;
                    }
                    else
                    {
                        int **l_63 = &l_62;
                        (*l_63) = l_62;
                        l_65 = ((void*)0 == l_64[4]);
                    }
                    l_65 = (safe_rshift_func_int8_t_s_s((l_65 , (g_37 < 250UL)), ((safe_lshift_func_int8_t_s_s((g_38 , ((!0xA9L) == (*g_36))), 6)) == ((g_38.f2 ^ ((l_70 , &g_38) == l_71)) | l_72[0][1]))));
                }
                else
                {
                    unsigned l_73 = 4UL;
                    int l_88 = 0L;
                    if (l_73)
                        break;
                    if ((*g_22))
                    {
                        union U2 **l_75 = &l_74;
                        l_65 = (l_65 && g_38.f2);
                        if (l_73)
                            continue;
                        if (l_72[0][1])
                            continue;
                        (*l_75) = l_74;
                    }
                    else
                    {
                        l_65 = (l_47 & (l_45 == (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(((*g_22) && (safe_sub_func_int16_t_s_s((l_82 <= l_73), (safe_sub_func_uint8_t_u_u(1UL, (g_37 | (safe_mod_func_int32_t_s_s(g_87, (*g_22))))))))), 4)), (*g_22)))));
                    }
                    l_88 = 6L;
                    for (l_65 = 0; (l_65 <= (-7)); l_65 = safe_sub_func_int32_t_s_s(l_65, 6))
                    {
                        l_95 = (((safe_rshift_func_int16_t_s_s(g_87, ((safe_div_func_int8_t_s_s((*g_36), l_47)) && l_45))) == ((void*)0 != &l_65)) > ((l_45 , &g_60) == (void*)0));
                    }
                }
                if ((0x972EL ^ l_45))
                {
                    unsigned l_106 = 5UL;
                    int *l_107 = &g_60;
                    if (((safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((((safe_add_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u(g_38.f4, ((((l_70.f0 || g_60) >= 7L) != 1UL) == (g_104[5] , (g_38.f3 & ((*g_36) , 0x7068L)))))), l_105[0][1])) && g_87) , 0L), l_106)), g_23)) < l_45))
                    {
                        int *l_108[4][5];
                        int i, j;
                        for (i = 0; i < 4; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_108[i][j] = &l_65;
                        }
                        l_108[2][1] = l_107;
                        return l_45;
                    }
                    else
                    {
                        int *l_109 = &g_87;
                        struct S0 **l_119 = &g_117;
                        (*l_107) = 0xCD0F842DL;
                        l_109 = ((*l_107) , &l_65);
                        g_38.f0 = (*g_22);
                        (*l_119) = ((g_38 , (l_45 > (safe_div_func_int8_t_s_s((*p_35), ((*l_109) && (((safe_lshift_func_int16_t_s_u(l_65, (l_114 , (l_70.f0 | l_45)))) != ((safe_mod_func_uint32_t_u_u((g_38.f2 ^ (*l_109)), l_45)) & 0xA7L)) , l_70.f3)))))) , g_117);
                    }
                    for (l_82 = 10; (l_82 != 44); l_82 = safe_add_func_uint16_t_u_u(l_82, 5))
                    {
                        if (l_45)
                            break;
                        if ((*g_22))
                            continue;
                        l_122 = &g_60;
                    }
                }
                else
                {
                    int *l_123 = &g_60;
                    struct S1 **l_125 = (void*)0;
                    struct S1 **l_126 = &l_71;
                    l_123 = (g_38.f0 , &l_95);
                    (*l_126) = (l_65 , l_124);
                    if (l_70.f0)
                    {
                        unsigned l_131[8] = {1UL,0x7FF8115BL,1UL,1UL,0x7FF8115BL,1UL,1UL,0x7FF8115BL};
                        int i;
                        (*l_122) &= (((((void*)0 != g_127) , (((*l_74) , ((*g_22) >= (l_47 ^ (safe_div_func_uint32_t_u_u((((l_131[1] <= (g_38 , l_95)) || (safe_div_func_uint8_t_u_u(((((g_38.f0 && g_38.f5) > 1UL) >= (*l_123)) || g_38.f3), (*g_36)))) , 8UL), l_131[1]))))) > (*g_36))) < 0UL) == 0x3504CD9EL);
                        (*l_123) ^= (((void*)0 == &g_117) , (*g_22));
                    }
                    else
                    {
                        unsigned l_134 = 0xD52F8519L;
                        struct S0 l_143[8] = {{9,0x49L,14,-8,1},{9,0x49L,14,-8,1},{9,0x49L,14,-8,1},{9,0x49L,14,-8,1},{9,0x49L,14,-8,1},{9,0x49L,14,-8,1},{9,0x49L,14,-8,1},{9,0x49L,14,-8,1}};
                        int i;
                        (*g_117) = ((((((((&l_123 == ((*l_123) , &g_22)) , l_39) == &g_38) < (+l_134)) & (((safe_mod_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(((safe_div_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((0xB9L <= 1UL), 7)), l_65)) , (*p_35)), (-5L))) , (-1L)), (*p_35))) >= (*l_123)) <= (*p_35))) ^ 255UL) & l_47) , l_143[3]);
                        return (*p_35);
                    }
                    for (g_37 = 1; (g_37 <= 8); g_37 += 1)
                    {
                        struct S0 **l_145 = &g_117;
                        int i;
                        l_123 = &g_87;
                        if ((*l_122))
                            break;
                        (*g_117) = l_144;
                        (*l_145) = &g_118;
                    }
                }
            }
            if ((*g_22))
            {
                int l_146 = 1L;
                struct S1 **l_148[10] = {&l_39,&l_39,(void*)0,&l_39,&l_39,&l_39,&l_39,(void*)0,&l_39,&l_39};
                union U3 l_152 = {-10L};
                int *l_176 = &l_65;
                unsigned char l_179[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_179[i] = 0xE8L;
                if ((l_70.f0 , (4294967295UL == (~l_146))))
                {
                    short l_149 = 0x5B57L;
                    g_118.f3 |= ((((g_38.f4 , l_147[0][4]) != l_148[4]) ^ ((l_149 && l_70.f0) < ((l_149 == l_70.f3) , (((safe_div_func_uint32_t_u_u(g_38.f0, (l_152 , l_152.f0))) , g_38.f3) && g_37)))) & l_152.f3);
                    return (*g_36);
                }
                else
                {
                    struct S1 **l_167 = &l_39;
                    char l_170[8][9] = {{0x6FL,0x05L,0x05L,0x6FL,1L,0x05L,0x13L,1L,1L},{(-2L),(-1L),1L,0x4DL,1L,(-1L),(-2L),(-1L),1L},{0x6FL,1L,0x05L,0x13L,1L,1L,0x13L,0x05L,1L},{1L,(-1L),0x0FL,0x4DL,0x0FL,(-1L),0x0FL,1L,5L},{1L,(-10L),(-10L),1L,0xE9L,(-10L),0x05L,0xE9L,0xE9L},{1L,1L,(-5L),(-1L),(-5L),1L,1L,1L,(-5L)},{1L,0xE9L,(-10L),0x05L,0xE9L,0xE9L,0x05L,(-10L),0xE9L},{0x0FL,1L,5L,(-1L),5L,1L,0x0FL,1L,5L}};
                    int l_171[9] = {0x7583C812L,0x7583C812L,0x7583C812L,0x7583C812L,0x7583C812L,0x7583C812L,0x7583C812L,0x7583C812L,0x7583C812L};
                    int i, j;
                    for (g_60 = 0; (g_60 > 9); ++g_60)
                    {
                        int l_166 = 0x12BAB1E9L;
                        struct S0 **l_172[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_172[i] = &g_117;
                        l_171[3] ^= (safe_sub_func_int32_t_s_s(0xF51808E2L, ((*g_22) > (safe_mod_func_int32_t_s_s((((((safe_rshift_func_uint8_t_u_s(l_163[5][0], (safe_div_func_uint8_t_u_u(8UL, (g_37 && l_166))))) <= (l_167 == &l_39)) >= (safe_rshift_func_int16_t_s_u(l_170[0][7], l_170[0][5]))) < g_38.f4) >= l_65), g_118.f2)))));
                        l_173 = &g_118;
                    }
                }
                for (l_152.f0 = 0; (l_152.f0 <= 0); l_152.f0 += 1)
                {
                    int i, j;
                }
            }
            else
            {
                union U3 *l_181 = &l_70;
                union U3 **l_182 = &l_181;
                (*l_182) = l_181;
            }
            for (l_70.f3 = (-23); (l_70.f3 == 7); ++l_70.f3)
            {
                char l_187 = (-1L);
                char l_192[9][1];
                int l_195 = 0x25A78384L;
                short l_200 = 0xE7B4L;
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_192[i][j] = 0xDCL;
                }
                if ((g_37 , (safe_div_func_uint32_t_u_u(l_187, (*l_122)))))
                {
                    unsigned char l_201 = 0xC1L;
                    l_195 = (g_118.f2 , (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u(l_192[2][0], g_23)) , (*l_122)) != (safe_div_func_uint8_t_u_u(g_38.f1, (*p_35)))), (((g_38.f1 , g_60) , g_23) == 0x8DDFL))));
                    (*l_180) = (*l_180);
                    g_118.f2 = (g_118.f2 & (((safe_lshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(((*p_35) >= l_200), l_201)), 5)) && (g_87 || l_187)) | 0UL));
                    g_202 = l_39;
                }
                else
                {
                    short l_223[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_223[i] = 0x9C90L;
                    (*l_122) &= ((((safe_lshift_func_int8_t_s_u((*p_35), 4)) == l_192[0][0]) > 0x57FDL) , (-4L));
                    (*l_180) = (safe_div_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((((((*g_22) < ((safe_add_func_uint8_t_u_u((safe_div_func_int8_t_s_s(0L, (*g_36))), (safe_mod_func_int16_t_s_s(0xD70AL, (safe_add_func_uint16_t_u_u((+((0xB577L > (g_38.f0 & ((safe_add_func_uint16_t_u_u((*l_180), ((l_192[4][0] & g_23) && l_223[2]))) > l_223[1]))) && (*g_22))), g_37)))))) || 5L)) && g_224) | g_118.f4) && 1L), (*g_22))), (*l_122))), 4)), (*l_180)));
                    (*l_180) ^= (*g_22);
                }
                if ((*g_22))
                    continue;
            }
        }
        (*l_225) = l_39;
    }
    return (*p_35);
}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_38.f2, "g_38.f2", print_hash_value);
    transparent_crc(g_38.f3, "g_38.f3", print_hash_value);
    transparent_crc(g_38.f4, "g_38.f4", print_hash_value);
    transparent_crc(g_38.f5, "g_38.f5", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_118.f1, "g_118.f1", print_hash_value);
    transparent_crc(g_118.f2, "g_118.f2", print_hash_value);
    transparent_crc(g_118.f3, "g_118.f3", print_hash_value);
    transparent_crc(g_118.f4, "g_118.f4", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_289.f0, "g_289.f0", print_hash_value);
    transparent_crc(g_289.f3, "g_289.f3", print_hash_value);
    transparent_crc(g_329, "g_329", print_hash_value);
    transparent_crc(g_376, "g_376", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
