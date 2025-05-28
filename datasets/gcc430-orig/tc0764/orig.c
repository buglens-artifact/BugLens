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
   unsigned f1;
   unsigned short f2;
   unsigned short f3;
   int f4;
};

struct S1 {
   signed f0 : 16;
   signed f1 : 19;
   signed f2 : 1;
   signed f3 : 12;
   unsigned f4 : 2;
   signed f5 : 7;
   signed f6 : 5;
   unsigned f7 : 11;
   unsigned f8 : 25;
   unsigned f9 : 14;
};

struct S2 {
   unsigned f0 : 25;
   struct S1 f1;
   unsigned f2 : 7;
   signed f3 : 13;
   unsigned f4 : 31;
   unsigned f5 : 4;
};

struct S3 {
   int f0;
   unsigned char f1;
};


static struct S1 g_5 = {36,81,-0,-40,1,5,0,8,4935,14};
static struct S0 g_14 = {0x7497F3C8L,0xFED6C34FL,65535UL,0x082BL,-10L};
static struct S1 *g_33 = &g_5;
static int *g_61 = &g_14.f4;
static struct S2 g_90 = {1133,{20,555,-0,-20,0,5,3,19,4876,48},2,-68,5181,3};
static int *g_96 = &g_14.f4;
static int g_104 = (-6L);
static struct S0 *g_126 = &g_14;
static struct S0 **g_125 = &g_126;
static struct S0 g_150 = {18446744073709551615UL,0UL,0x7EA9L,0x4B99L,1L};
static struct S3 g_173 = {-4L,0xBFL};
static int *g_185 = &g_104;
static char g_187 = (-1L);
static short g_201 = (-1L);
static char g_358 = (-1L);
static struct S3 *g_375 = &g_173;
static struct S2 **g_411 = (void*)0;
static struct S2 *g_412 = &g_90;
static struct S3 ***g_550 = (void*)0;
static int ***g_604 = (void*)0;
static struct S1 **g_640 = (void*)0;
static struct S1 ***g_639 = &g_640;
static struct S1 *g_652 = &g_5;
static short g_666 = 0xE38AL;



static int func_1(void);
static struct S1 * func_2(struct S1 * p_3);
static struct S0 func_11(short p_12, struct S0 p_13);
static int func_24(unsigned short p_25);
static int func_36(short p_37);
static int * func_39(int * p_40, struct S1 * p_41, int * p_42);
static struct S1 * func_44(struct S1 * p_45);
static char func_51(struct S1 p_52, struct S1 * p_53, struct S2 p_54);
static struct S1 func_55(struct S1 * p_56, int * p_57, struct S0 p_58, int * p_59, int * p_60);
static struct S0 func_62(unsigned char p_63, int p_64, int p_65, int p_66, unsigned short p_67);
static int func_1(void)
{
    struct S1 *l_4 = &g_5;
    int l_576 = 0xF15180C7L;
    int ***l_603 = (void*)0;
    int *l_613 = &g_14.f4;
    int *l_614 = &l_576;
    int *l_616 = (void*)0;
    struct S2 l_619 = {2439,{-234,485,0,9,0,9,-4,13,3392,13},3,-62,25598,1};
    struct S2 *l_646 = (void*)0;
    char l_659 = (-1L);
    int l_708 = 0x7BE15F9EL;
    l_4 = func_2(l_4);
    if ((~g_5.f9))
    {
        struct S0 *l_570 = (void*)0;
        struct S0 *l_571 = &g_14;
        int l_577 = 0L;
        struct S1 **l_578 = (void*)0;
        struct S1 **l_579 = &g_33;
        (*l_571) = func_11(g_5.f5, g_14);

        ;
        ;
        ;
        ;
        ;
        g_5.f2 = (g_150.f3 >= (safe_div_func_uint16_t_u_u(((g_150.f3 == ((0L <= ((safe_lshift_func_uint16_t_u_u(65535UL, l_576)) | l_577)) && (~(((void*)0 != &g_90) && l_576)))) | (-5L)), g_5.f1)));
        l_576 = l_577;
        (*l_579) = func_2(&g_5);

        ;
    }
    else
    {
        unsigned l_580 = 1UL;
        struct S3 *l_581 = &g_173;
        unsigned short l_585 = 0UL;
        int l_596 = (-2L);
        struct S1 *l_610 = (void*)0;
        int *l_641 = &g_104;
        struct S0 **l_644 = &g_126;
        short l_672 = 0x0BB8L;
        if (func_24(l_580))
        {
            struct S3 **l_582 = &g_375;
            int l_586 = 0x6291E917L;
            struct S2 *l_597 = (void*)0;
            int *l_611 = &l_586;
            (*l_582) = l_581;
            if ((*g_185))
            {
                for (g_14.f1 = 0; (g_14.f1 > 40); ++g_14.f1)
                {
                    int **l_591 = (void*)0;
                    int ***l_590 = &l_591;
                    if (l_585)
                    {
                        if (l_586)
                            break;
                    }
                    else
                    {
                        struct S2 *l_587 = &g_90;
                        int *l_588 = &l_586;
                        int **l_589 = &l_588;
                        g_412 = l_587;
                        (*g_185) = (!l_576);
                        (*l_589) = l_588;
                    }
                    (*g_185) = 0x09B9BD92L;
                    (*l_590) = &g_96;

                    ;
                }
                (*l_582) = (*l_582);
                for (g_173.f0 = 0; (g_173.f0 != 17); g_173.f0 = safe_add_func_int16_t_s_s(g_173.f0, 4))
                {
                    struct S0 *l_594 = (void*)0;
                    (*g_125) = l_594;

                    ;
                    (*g_185) = l_586;
                }

                ;
            }
            else
            {
                int l_595 = 0xED1A5126L;
                struct S2 *l_598 = &g_90;
                l_596 = l_595;
                (*g_185) = (*g_185);
                l_598 = l_597;

                ;
            }

            ;
            if ((safe_sub_func_uint8_t_u_u((g_90.f1.f8 != (safe_rshift_func_int8_t_s_s(g_5.f2, g_201))), ((l_603 != g_604) < l_580))))
            {
                int *l_607 = &l_576;
                for (g_14.f2 = 0; (g_14.f2 > 51); g_14.f2 = safe_add_func_uint16_t_u_u(g_14.f2, 3))
                {
                    l_607 = func_39(&g_104, l_4, &l_596);

                    ;
                    (*g_412) = (*g_412);
                    (*l_607) = l_586;
                }

                ;
            }
            else
            {
                struct S2 **l_608 = (void*)0;
                struct S2 **l_609 = &l_597;
                int **l_612 = &g_185;
                (*l_609) = l_597;
                (*l_612) = func_39(&g_104, l_610, l_611);
            }
        }
        else
        {
            int *l_615 = (void*)0;
            int **l_631 = &g_96;
            struct S1 **l_638 = &l_610;
            struct S1 ***l_637 = &l_638;
            char l_650 = 0L;
            int *l_655 = &g_14.f4;
            struct S0 ***l_663 = &l_644;
            int l_667 = 0x935C2AB1L;
            struct S3 l_676 = {6L,0xCBL};
            short l_681 = 0xCEF8L;
            struct S3 ***l_686 = (void*)0;
            int *l_697 = &g_14.f4;
            (*l_4) = func_55(&g_5, l_613, (*g_126), func_39(l_614, &g_5, func_39(l_615, l_610, &g_104)), l_616);
            l_596 = (0L >= ((safe_add_func_uint8_t_u_u(4UL, 251UL)) == g_90.f1.f8));
            if ((*g_185))
            {
                int *l_620 = &l_596;
                int **l_621 = &l_620;
                (*l_621) = func_39(l_620, l_610, &g_104);

                ;
                if (l_596)
                {
                    (**l_621) = (safe_mod_func_uint8_t_u_u(g_90.f1.f5, g_5.f4));
                }
                else
                {
                    int l_630 = 6L;
                    int **l_634 = &g_61;
                    struct S2 *l_636 = &g_90;
                    if ((safe_sub_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u(1UL, (safe_lshift_func_uint8_t_u_s((((*l_613) == (l_580 >= (((void*)0 == l_631) >= (*g_185)))) == 5L), 5)))), 0xBDL)))
                    {
                        struct S3 *l_632 = &g_173;
                        struct S3 **l_633 = &g_375;
                        (*g_185) = 3L;
                        (*l_633) = l_632;
                        l_634 = &g_185;

                        ;
                    }
                    else
                    {
                        unsigned short l_635 = 0x4DA3L;
                        l_635 = (**l_621);
                        (*l_631) = &g_104;

                        ;
                        l_636 = l_636;
                        (**l_631) = (((*g_96) || g_5.f0) && (l_637 == g_639));
                    }

                    ;
                    ;
                    l_641 = &g_104;
                }

                ;
            }
            else
            {
                struct S1 *l_642 = &l_619.f1;
                int *l_643 = (void*)0;
                struct S2 *l_647 = &g_90;
                struct S1 *l_657 = (void*)0;
                if ((*l_614))
                {
                    struct S0 ***l_645 = &g_125;
                    (*g_375) = (*g_375);
                    g_185 = func_39(&g_104, l_642, l_643);
                    (*l_645) = l_644;
                    (*l_631) = (void*)0;

                    ;
                }
                else
                {
                    (*l_631) = func_39((*l_631), l_4, l_643);

                    ;
                    l_646 = &g_90;

                    ;
                    (*g_185) = (*g_185);
                    l_647 = &l_619;

                    ;
                }

                ;
                ;
                ;
                if ((((safe_add_func_int32_t_s_s((*g_185), l_650)) | 0x4A9E9963L) ^ (*l_641)))
                {
                    unsigned l_651 = 4294967295UL;
                    struct S1 *l_653 = &g_90.f1;
                    int *l_654 = &g_104;
                    if (((!l_651) && ((*g_185) || (0x53L & g_90.f1.f3))))
                    {
                        g_61 = func_39((*l_631), func_2(func_2(g_652)), &g_104);

                        ;
                        (*l_653) = func_55(l_653, func_39(l_654, func_2(func_2(l_642)), l_654), (*g_126), func_39(l_655, (**l_637), &g_104), &l_596);

                        ;
                    }
                    else
                    {
                        struct S1 *l_656 = &g_5;
                        int *l_658 = &g_14.f4;
                        (*l_631) = func_39(func_39(&l_596, func_2(l_657), l_658), l_4, &g_104);

                        ;
                    }

                    ;
                }
                else
                {
                    if (l_659)
                    {
                        return (*g_185);
                    }
                    else
                    {
                        int *l_660 = &g_14.f4;
                        g_96 = l_660;

                        ;
                        (*l_614) = (*g_185);
                        (*l_631) = &g_104;

                        ;
                        return (*l_660);
                    }
                }

                ;
            }

            ;
            ;
            ;
            if (((safe_lshift_func_int16_t_s_s((&g_125 != l_663), 11)) <= ((safe_add_func_uint8_t_u_u(g_666, l_667)) < (5UL <= ((safe_div_func_int32_t_s_s((*g_185), ((safe_lshift_func_int8_t_s_u((g_14.f3 != (((g_14.f1 || ((l_672 || 0xF7E5L) <= 0xD729L)) ^ g_5.f7) < g_90.f1.f4)), 2)) ^ g_5.f4))) & g_90.f1.f7)))))
            {
                int l_673 = 0xF95694EBL;
                (*l_641) = l_673;
                for (g_358 = 0; (g_358 != 23); g_358++)
                {
                    short l_679 = 0L;
                    int l_680 = 0xEF59D41CL;
                    g_375 = (void*)0;

                    ;
                    (*l_581) = l_676;
                    for (l_676.f0 = 0; (l_676.f0 != 17); l_676.f0++)
                    {
                        (*l_641) = l_679;
                        (*l_631) = &l_673;

                        ;
                        return (*l_641);



                    }
                    l_680 = (-7L);
                }

                ;
            }
            else
            {
                int *l_694 = &g_150.f4;
                if ((*l_655))
                {
                    struct S1 *l_691 = (void*)0;
                    struct S2 l_692 = {2162,{69,150,-0,34,0,0,3,35,3896,62},3,-72,7699,1};
                    struct S0 *l_695 = &g_150;
                    int *l_696 = (void*)0;
                    l_681 = 0x67D28069L;
                    if ((safe_sub_func_uint16_t_u_u(4UL, (safe_sub_func_uint8_t_u_u(((*l_614) > ((*g_185) == (*l_641))), ((l_686 != g_550) < (safe_sub_func_int32_t_s_s((((safe_rshift_func_uint16_t_u_u(((-4L) < (g_150.f1 & g_14.f2)), 9)) | g_14.f4) ^ (*l_613)), (*l_641)))))))))
                    {
                        struct S1 *l_693 = &g_90.f1;
                        (*l_631) = func_39(func_39((*l_631), l_693, l_694), func_2(func_2(&g_5)), &l_596);

                        ;
                        (*g_125) = l_695;

                        ;
                        (*g_412) = (*g_412);
                    }
                    else
                    {
                        struct S3 **l_698 = &g_375;
                        (*l_631) = func_39(func_39(l_696, l_691, l_697), (**l_637), &l_596);

                        ;
                        (*l_698) = &g_173;
                    }

                    ;
                    ;
                }
                else
                {
                    unsigned short l_705 = 6UL;
                    (*l_697) = 0x8C6ED35AL;
                    for (g_14.f2 = 0; (g_14.f2 > 31); g_14.f2 = safe_add_func_uint8_t_u_u(g_14.f2, 2))
                    {
                        struct S3 **l_701 = (void*)0;
                        struct S3 **l_702 = &g_375;
                        (*g_185) = 0x2F843E86L;
                        (*l_631) = &l_596;

                        ;
                        (*l_702) = &g_173;
                        if ((*l_614))
                            continue;
                    }

                    ;
                    for (g_358 = (-10); (g_358 >= 0); ++g_358)
                    {
                        return l_705;



                    }
                    for (l_676.f0 = 15; (l_676.f0 == (-19)); l_676.f0--)
                    {
                        (*l_631) = &g_104;

                        ;
                    }
                }

                ;
                ;
                return (*g_185);



            }

            ;
        }

        ;
        ;
        ;
        ;
        ;
        (*g_412) = l_619;
    }


    ;
    ;
    ;
    ;
    ;
    return l_708;
}







static struct S1 * func_2(struct S1 * p_3)
{
    unsigned l_6 = 0x549EC71CL;
    int l_7 = 0x8E2294BBL;
    l_7 = l_6;
    for (l_6 = 5; (l_6 == 32); l_6++)
    {
        struct S1 *l_10 = &g_5;
        return l_10;


    }
    return p_3;


}







static struct S0 func_11(short p_12, struct S0 p_13)
{
    char l_19 = 0xD4L;
    struct S1 *l_28 = &g_5;
    struct S2 *l_487 = (void*)0;
    unsigned l_500 = 1UL;
    struct S2 ***l_545 = (void*)0;
    unsigned l_555 = 0UL;
    int *l_557 = (void*)0;
    struct S1 *l_560 = &g_5;
    int *l_563 = &g_150.f4;
    struct S0 l_565 = {6UL,0UL,0x41A0L,0x10D4L,4L};
    if ((safe_lshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(((&g_5 != &g_5) | p_13.f2), l_19)), (safe_sub_func_uint8_t_u_u((safe_mod_func_int32_t_s_s(func_24((safe_mod_func_uint32_t_u_u((((void*)0 != l_28) && (safe_rshift_func_uint8_t_u_u((0x0282L > (safe_sub_func_uint8_t_u_u((l_28 == &g_5), p_12))), 5))), 2L))), l_19)), 1UL)))))
    {
        struct S2 *l_486 = (void*)0;
        struct S1 l_504 = {-68,426,0,-59,1,-8,1,0,4482,80};
        struct S1 *l_510 = (void*)0;
        int *l_553 = (void*)0;
        unsigned short l_556 = 0UL;
        struct S1 **l_566 = &l_510;
        if ((!p_13.f0))
        {
            char l_477 = 2L;
            short l_484 = 8L;
            int *l_495 = &g_14.f4;
            if ((safe_lshift_func_int8_t_s_s((g_90.f1.f0 > 3L), 1)))
            {
                unsigned char l_476 = 0xEFL;
                struct S1 *l_478 = &g_90.f1;
                (*g_185) = (p_13.f4 < 0xC094B3C5L);
                return p_13;
            }
            else
            {
                struct S1 *l_481 = &g_90.f1;
                int l_488 = 0x100C9E40L;
                int l_507 = 0xB33173A6L;
                int *l_511 = &l_507;
                for (g_104 = 6; (g_104 <= 21); g_104 = safe_add_func_uint32_t_u_u(g_104, 1))
                {
                    short l_483 = 0x125CL;
                    if (p_13.f0)
                    {
                        struct S1 **l_482 = &g_33;
                        p_13.f4 = 0x95052109L;
                        (*l_482) = l_481;

                        ;
                    }
                    else
                    {
                        int **l_485 = &g_61;
                        if (l_483)
                            break;
                        if (l_484)
                            continue;
                        (*l_485) = &g_104;

                        ;
                    }
                    l_488 = (l_486 != l_487);
                }

                ;
                ;
                for (g_14.f0 = (-17); (g_14.f0 > 21); g_14.f0 = safe_add_func_int8_t_s_s(g_14.f0, 1))
                {
                    struct S1 *l_493 = &g_5;
                    int *l_496 = (void*)0;
                    struct S2 l_497 = {2361,{110,590,-0,-26,0,7,4,9,2084,102},5,-40,22411,0};
                    int **l_501 = &g_185;
                    for (l_488 = 15; (l_488 == (-12)); l_488--)
                    {
                        struct S1 *l_494 = &g_5;
                        if ((*g_185))
                            break;
                        (*l_28) = func_55(l_28, func_39(&g_104, func_2(l_494), &g_104), (**g_125), l_495, l_496);
                        (*l_495) = ((((0x012B9F9CL > ((!(~p_13.f0)) || ((((*l_495) != (((safe_div_func_uint16_t_u_u(l_500, 3L)) | p_12) && l_488)) <= g_90.f1.f9) ^ p_13.f4))) < 0x48L) > g_90.f1.f8) >= 0L);
                        if (p_13.f0)
                            break;
                    }
                    (*l_501) = &g_104;

                    ;
                    if (p_13.f2)
                    {
                        struct S1 **l_506 = &l_481;
                        struct S1 ***l_505 = &l_506;
                        struct S2 **l_508 = &l_487;
                        (*l_495) = (p_13.f1 || (((((safe_add_func_uint8_t_u_u(g_90.f1.f4, ((p_12 && (*l_495)) || ((l_505 != &l_506) || p_12)))) & l_507) < 0xA708L) < g_90.f1.f1) == p_13.f1));
                        (*l_508) = &g_90;

                        ;
                        if (p_13.f2)
                            break;
                    }
                    else
                    {
                        struct S2 **l_509 = &l_487;
                        (*l_509) = &l_497;

                        ;
                        (*l_501) = func_39((*l_501), func_2(l_510), func_39(l_511, &g_5, &g_104));
                        p_13.f4 = (safe_add_func_uint32_t_u_u(4294967291UL, ((safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((0xDD6AL && (safe_add_func_uint32_t_u_u(l_500, p_13.f2))), (safe_mod_func_int32_t_s_s(l_504.f4, 0x60000BFBL)))), p_13.f4)) && g_173.f1)));
                    }

                    ;
                    (*l_501) = l_495;

                    ;
                }

                ;

                (*l_495) = p_13.f4;
            }

            ;
            ;
            ;

        }
        else
        {
            return (*g_126);
        }

        ;
        ;
        ;

        for (g_14.f0 = (-13); (g_14.f0 < 43); g_14.f0++)
        {
            struct S2 *l_524 = &g_90;
            struct S2 **l_525 = &l_524;
            struct S3 l_528 = {1L,0xE9L};
            int *l_529 = &g_104;
            (*l_525) = l_524;
            for (g_150.f2 = 4; (g_150.f2 != 28); g_150.f2 = safe_add_func_int8_t_s_s(g_150.f2, 3))
            {
                int **l_530 = &g_61;
                struct S2 l_531 = {2820,{-124,293,0,-52,1,2,3,23,369,19},10,-51,37978,1};
                struct S1 **l_538 = &l_28;
                (*g_375) = l_528;
                (*l_530) = func_39(l_529, l_28, &g_104);

                ;
                if (((&g_5 == (void*)0) == (l_504.f7 ^ (1L < 0x114663A4L))))
                {
                    struct S0 l_532 = {18446744073709551607UL,0xCE3C15ABL,65535UL,0xB23AL,5L};
                    return l_532;
                }
                else
                {
                    struct S1 *l_542 = &l_531.f1;
                    for (g_173.f1 = 0; (g_173.f1 < 28); ++g_173.f1)
                    {
                        (**l_530) = (**l_530);
                    }
                    for (g_14.f4 = 0; (g_14.f4 == (-3)); --g_14.f4)
                    {
                        struct S1 **l_537 = (void*)0;
                        (*l_530) = &g_104;
                        (*l_530) = func_39(&g_104, &l_504, &g_104);
                        l_538 = l_537;

                        ;
                        (*g_125) = (void*)0;

                        ;
                    }

                    ;
                    for (g_358 = (-1); (g_358 < (-12)); --g_358)
                    {
                        struct S1 l_541 = {-193,521,0,-60,1,9,3,13,1774,81};
                        (**l_530) = (*g_185);
                    }
                }

                ;
            }
        }

        ;
        if (((safe_rshift_func_uint8_t_u_u(l_19, (((void*)0 != l_545) >= ((safe_rshift_func_uint16_t_u_s((0xF6L & (!((safe_add_func_uint32_t_u_u(((void*)0 == g_550), (safe_lshift_func_uint16_t_u_u(g_90.f2, (p_13.f3 < p_13.f3))))) < l_500))), l_19)) < 1UL)))) ^ 0xBEF9L))
        {
            int **l_554 = &g_185;
            int l_559 = 0x01758127L;
            (*l_554) = l_553;

            ;
            l_510 = l_28;

            ;
            l_556 = p_12;
            if (p_13.f3)
            {
                (*l_554) = l_553;
                (*l_510) = (*g_33);
                if ((l_504.f3 ^ p_12))
                {
                    (*l_554) = func_39(l_557, &l_504, l_557);

                    ;
                }
                else
                {
                    struct S0 ***l_558 = &g_125;
                    (*l_558) = &g_126;
                }

                ;
                l_559 = 0xDB01452BL;
            }
            else
            {
                struct S1 *l_561 = (void*)0;
                int *l_562 = &g_104;
                (*l_554) = func_39(func_39(&g_104, l_28, func_39(l_553, l_560, &g_104)), func_2(l_561), l_562);

                ;
            }

            ;
        }
        else
        {
            int **l_564 = &l_557;
            (*l_564) = l_563;

            ;
            (*l_564) = l_553;

            ;
            return l_565;
        }

        ;
        ;
        (*l_566) = &g_5;
    }
    else
    {
        unsigned l_567 = 0xD55F8365L;
        int *l_568 = &g_104;
        int **l_569 = &g_61;
        (*l_563) = l_567;
        (*l_569) = func_39(l_557, l_28, l_568);

        ;
    }

    ;
    ;
    ;
    ;
    ;

    return p_13;
}







static int func_24(unsigned short p_25)
{
    struct S2 l_445 = {2442,{99,-565,-0,59,0,8,3,16,3066,108},2,-3,39101,3};
    int **l_471 = &g_61;
    if (((void*)0 == g_33))
    {
        int l_421 = 0x6879AC1DL;
        struct S0 **l_423 = &g_126;
        struct S3 *l_431 = &g_173;
        struct S1 l_434 = {-187,-697,0,16,1,-7,-2,43,93,95};
        struct S2 l_435 = {1113,{-208,700,0,-11,0,2,-0,14,3437,23},8,-38,10605,0};
        for (g_14.f0 = 0; (g_14.f0 < 13); g_14.f0++)
        {
            char l_428 = (-8L);
            struct S3 **l_438 = &g_375;
            int **l_441 = (void*)0;
            int **l_442 = &g_61;
        }
        (*g_61) = l_435.f1.f4;
        (*g_185) = (safe_add_func_uint8_t_u_u(0UL, ((+(l_435.f2 >= (func_51(l_435.f1, &l_434, l_445) < 0xD8L))) == (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(l_435.f2, 0)), (safe_rshift_func_int8_t_s_s(((void*)0 == &g_173), 5)))))));

        ;
        ;
        (*g_185) = (~(0UL > l_445.f1.f8));
    }
    else
    {
        int l_454 = 0x03708AC8L;
        struct S0 *l_459 = &g_150;
        char l_466 = 0L;
        (**g_125) = (**g_125);
        (*g_185) = (((safe_mod_func_uint8_t_u_u((l_454 | (((safe_sub_func_int16_t_s_s((~((safe_add_func_int8_t_s_s(((((*g_125) != l_459) > p_25) | ((safe_sub_func_int32_t_s_s((safe_div_func_uint16_t_u_u((+(safe_rshift_func_uint16_t_u_u(l_466, (safe_rshift_func_int8_t_s_u(p_25, (safe_mod_func_int8_t_s_s((&g_185 == l_471), (6UL & (*g_61))))))))), g_5.f2)), 0x234898ECL)) | (**l_471))), g_173.f1)) & g_14.f2)), p_25)) < l_466) ^ p_25)), p_25)) && 4294967293UL) > (-9L));
    }

    ;
    ;
    (*g_125) = (*g_125);
    return (*g_185);
}







static int func_36(short p_37)
{
    int l_38 = (-8L);
    struct S1 *l_46 = &g_5;
    struct S3 l_251 = {1L,0UL};
    unsigned char l_258 = 0x2FL;
    struct S0 l_269 = {1UL,18446744073709551615UL,0x07CDL,0x2690L,0x8BE0EB0DL};
    int *l_304 = &g_150.f4;
    struct S2 *l_312 = &g_90;
    struct S2 **l_311 = &l_312;
    unsigned short l_320 = 65535UL;
    char l_327 = 0L;
    unsigned l_328 = 0x51311250L;
    struct S3 *l_330 = &g_173;
    struct S1 l_339 = {213,-493,0,63,0,-4,2,43,5671,34};
    struct S0 **l_402 = &g_126;
    if (l_38)
    {
        int *l_43 = &g_14.f4;
        int **l_240 = &l_43;
        struct S3 l_243 = {-5L,255UL};
        (*l_240) = func_39(l_43, func_44(func_2(l_46)), &l_38);

        ;
        ;
        ;
        for (g_14.f1 = 0; (g_14.f1 != 53); g_14.f1 = safe_add_func_int8_t_s_s(g_14.f1, 1))
        {
            struct S3 l_244 = {-6L,1UL};
            l_244 = l_243;
        }
    }
    else
    {
        char l_247 = 0L;
        struct S1 *l_268 = &g_90.f1;
        struct S2 l_274 = {609,{25,-41,0,-38,0,9,-0,19,582,110},3,60,38691,2};
        int *l_277 = &l_38;
        struct S2 **l_310 = (void*)0;
        struct S3 *l_315 = &l_251;
        unsigned l_349 = 0x0FAB3579L;
        int l_352 = 0x2675DDC7L;
        struct S1 ***l_365 = (void*)0;
        unsigned char l_403 = 250UL;
        if (((safe_mod_func_uint16_t_u_u(l_247, 8UL)) == l_247))
        {
            int **l_248 = &g_96;
            struct S1 *l_273 = &g_90.f1;
            struct S1 *l_286 = (void*)0;
            struct S1 **l_287 = &l_268;
            (*l_248) = &g_104;

            ;
            if ((*g_96))
            {
                struct S3 *l_257 = &l_251;
                struct S3 **l_256 = &l_257;
                for (g_14.f2 = 0; (g_14.f2 >= 4); g_14.f2++)
                {
                    l_251 = g_173;
                    (**l_248) = (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(0x40BFL, (2UL <= (((**l_248) < l_251.f1) >= (l_251.f0 == p_37))))), (~((((*g_185) && (l_256 != &l_257)) < p_37) ^ g_90.f4))));
                }
            }
            else
            {
                struct S0 *l_263 = &g_150;
                (*l_263) = func_62(l_258, (safe_div_func_int16_t_s_s((&g_173 != &g_173), (**l_248))), g_90.f1.f8, (safe_sub_func_uint8_t_u_u(p_37, (p_37 || p_37))), g_150.f4);
                (*g_61) = p_37;
            }
            if (p_37)
            {
                (*l_248) = (void*)0;

                ;
                (*l_248) = (*l_248);
            }
            else
            {
                struct S1 *l_270 = &g_90.f1;
                struct S2 l_271 = {4548,{99,651,-0,-46,0,-3,-0,8,3095,112},4,34,35564,3};
                int *l_278 = &g_14.f4;
                struct S3 l_280 = {4L,0x6CL};
                l_271.f1.f1 = ((safe_lshift_func_uint16_t_u_u((1L && ((safe_div_func_int8_t_s_s((p_37 && func_51(func_55(l_268, &l_38, l_269, func_39(&g_104, l_270, &g_104), &l_38), l_46, l_271)), l_271.f1.f0)) || (-9L))), 8)) || p_37);

                ;
                ;
                if ((safe_unary_minus_func_uint8_t_u(l_274.f1.f5)))
                {
                    struct S1 *l_279 = &g_90.f1;
                    for (l_247 = 0; (l_247 >= 24); ++l_247)
                    {
                        l_269.f4 = ((&g_125 != (void*)0) | (!(g_5.f6 || 1UL)));
                        (*l_248) = l_277;

                        ;
                        (*l_248) = l_278;

                        ;
                    }

                    ;
                    (*g_185) = (-2L);
                    if ((g_90.f1.f8 && g_150.f3))
                    {
                        return p_37;


                    }
                    else
                    {
                        struct S3 *l_281 = &l_280;
                        struct S2 *l_283 = &l_274;
                        struct S2 **l_282 = &l_283;
                        (*l_281) = l_280;
                        (*l_282) = &g_90;

                        ;
                    }
                }
                else
                {
                    struct S1 **l_285 = &l_270;
                    struct S1 ***l_284 = &l_285;
                    (*l_248) = &g_104;

                    ;
                    (*l_284) = &l_46;

                    ;
                }

                ;
                (*g_185) = (*g_185);
                (*l_278) = (-2L);
            }

            ;
            ;
            (*l_287) = l_46;

            ;
        }
        else
        {
            struct S1 l_289 = {188,610,-0,-11,0,-8,3,1,4277,54};
            int *l_302 = &g_104;
            int *l_305 = &g_14.f4;
            if (p_37)
            {
                struct S3 *l_288 = (void*)0;
                struct S0 l_298 = {18446744073709551607UL,18446744073709551609UL,0x1733L,0x03AEL,0x3D496635L};
                int *l_299 = (void*)0;
                if (((p_37 | ((void*)0 != l_288)) <= func_51(l_289, func_2(&l_289), l_274)))
                {
                    struct S1 *l_296 = (void*)0;
                    int *l_297 = &g_150.f4;
                    (*l_277) = (safe_mod_func_int32_t_s_s(((*g_185) || (safe_sub_func_int32_t_s_s((safe_mod_func_uint16_t_u_u((g_90.f1.f5 ^ p_37), p_37)), g_150.f4))), 0xF1309B08L));
                    for (l_247 = 0; (l_247 > (-19)); l_247--)
                    {
                        int **l_303 = &l_277;
                        (*l_303) = func_39(l_277, l_46, l_302);

                        ;
                        (*l_277) = (0xB5E7A8B4L && 0x6835EB3EL);
                        return (**l_303);
                    }
                    l_305 = func_39(l_304, &l_289, l_305);

                    ;
                }
                else
                {
                    struct S0 ***l_306 = &g_125;
                    (*l_306) = &g_126;
                }

                ;
                ;
                ;
            }
            else
            {
                unsigned char l_307 = 1UL;
                return l_307;
            }

            ;
            ;
            ;
            for (g_14.f2 = 0; (g_14.f2 != 51); g_14.f2++)
            {
                (*l_268) = (*g_33);
            }
            l_311 = l_310;

            ;
        }

        ;
        ;
        ;
        ;
        if ((safe_mod_func_uint32_t_u_u((((l_315 != &l_251) > (safe_add_func_int32_t_s_s(1L, (*l_277)))) == ((g_5.f7 == ((*l_277) >= p_37)) <= g_201)), (safe_mod_func_uint16_t_u_u((l_320 > (*l_304)), g_90.f1.f0)))))
        {
            short l_323 = (-6L);
            struct S1 *l_326 = (void*)0;
            (*l_304) = (0x8CL & (safe_sub_func_int16_t_s_s(l_323, (*l_277))));
            for (g_150.f2 = 0; (g_150.f2 >= 24); ++g_150.f2)
            {
                if (p_37)
                    break;
                if ((*l_277))
                    break;
                l_326 = (void*)0;
                if (l_327)
                    break;
            }
            (*l_304) = l_328;
        }
        else
        {
            struct S3 *l_329 = &g_173;
            struct S1 *l_335 = &g_5;
            int *l_336 = (void*)0;
            struct S2 l_340 = {4551,{-98,-426,0,8,0,-5,-0,44,5737,55},9,-51,33908,1};
            l_330 = l_329;
            for (l_258 = (-15); (l_258 <= 8); l_258++)
            {
                struct S1 *l_333 = &g_5;
                int *l_334 = &g_14.f4;
                l_336 = func_39(&g_104, func_2(l_333), func_39(func_39(l_334, func_2(&g_5), func_39(&g_104, l_335, l_336)), &g_5, l_277));

                ;
                (*l_46) = (*l_335);
                for (l_269.f3 = 0; (l_269.f3 > 55); l_269.f3 = safe_add_func_int8_t_s_s(l_269.f3, 3))
                {
                    (*l_46) = l_339;
                }
            }

            ;
            (*l_312) = l_340;
        }
        if ((g_5.f5 || (safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u(0x49L, (safe_mod_func_int32_t_s_s((!(l_349 > l_352)), p_37)))), 0UL)), 0xEAL))))
        {
            struct S1 *l_357 = &l_339;
            int l_371 = 0x39537FE7L;
            struct S0 l_372 = {1UL,0x1B466848L,0xEC21L,65527UL,0xD9F8D933L};
            struct S2 l_378 = {805,{42,-633,0,17,0,-8,-3,29,1748,90},4,57,14309,2};
            (*g_185) = (g_90.f3 & ((safe_add_func_int32_t_s_s(((((-2L) || p_37) >= (p_37 != (*l_304))) || 0xCA3BL), p_37)) ^ g_14.f2));
            g_358 = (*l_304);
            if (((0xCF0DL > ((&l_268 != &l_46) <= (safe_add_func_int16_t_s_s(0xF692L, (g_90.f1.f3 <= 0xFDL))))) < p_37))
            {
                struct S1 *l_368 = &l_274.f1;
                struct S2 l_370 = {1708,{16,284,-0,39,0,10,-4,35,5321,93},0,15,33369,1};
                if ((safe_rshift_func_int8_t_s_s(((void*)0 != l_365), 7)))
                {
                    struct S0 l_369 = {0UL,0x3D677327L,0x36DEL,0x7216L,0x0C6B03F3L};
                    struct S0 *l_373 = &g_150;
                    (*l_304) = 0xC2FB1ECFL;
                    (*l_373) = l_372;
                }
                else
                {
                    struct S3 *l_374 = &l_251;
                    g_375 = l_374;

                    ;
                }

                ;
            }
            else
            {
                int **l_376 = (void*)0;
                int **l_377 = &g_96;
                struct S0 l_386 = {18446744073709551614UL,0x0114D95AL,7UL,1UL,0xD8AD277BL};
                struct S2 **l_388 = &l_312;
                (*l_377) = &l_352;

                ;
                if (l_378.f1.f8)
                {
                    struct S1 *l_379 = &g_5;
                    struct S0 l_380 = {0x928B453AL,18446744073709551615UL,0x0455L,0x87D4L,-1L};
                    struct S2 **l_387 = &l_312;
                    if (((p_37 && g_90.f1.f0) || p_37))
                    {
                        int *l_381 = &l_380.f4;
                        (*l_312) = (*l_312);
                        (*g_185) = (*g_185);
                        (*l_277) = ((((7L <= p_37) < 0x1CL) != ((safe_div_func_uint32_t_u_u(0UL, (*l_381))) <= (0x60B8108AL <= (*l_277)))) >= 1UL);
                        (*g_185) = (*g_96);
                    }
                    else
                    {
                        l_269 = l_386;
                        (*l_277) = (0xF2BFL | (**l_377));
                    }
                    (*l_387) = &g_90;
                }
                else
                {
                    return (*g_185);



                }
                (*g_96) = ((*l_304) ^ p_37);
                (*l_388) = (void*)0;

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            struct S3 l_400 = {0x8F4F2BBCL,246UL};
            struct S1 l_406 = {-229,486,-0,14,0,-6,3,20,2293,114};
            for (l_38 = 0; (l_38 >= (-24)); l_38--)
            {
                int l_393 = 4L;
                struct S2 l_407 = {5145,{67,191,0,-21,0,8,-1,32,1887,83},7,69,37067,1};
                for (g_150.f3 = (-25); (g_150.f3 > 60); g_150.f3 = safe_add_func_int16_t_s_s(g_150.f3, 2))
                {
                    struct S0 **l_401 = &g_126;
                    int *l_408 = &l_393;
                    if (l_393)
                        break;
                    if (((safe_lshift_func_uint16_t_u_s(1UL, 2)) <= (safe_rshift_func_int8_t_s_u((g_90.f0 < (&g_5 == (void*)0)), 1))))
                    {
                        (*l_304) = (+((&g_104 == &l_352) > p_37));
                        l_400 = (*g_375);
                    }
                    else
                    {
                        l_402 = l_401;
                    }
                    if ((l_403 | ((0xC3L < p_37) == (((((l_393 || (((p_37 <= 0xBDD1637CL) && (l_393 < g_5.f7)) ^ (-5L))) | 0L) > p_37) >= l_406.f6) && g_90.f3))))
                    {
                        int **l_409 = &l_277;
                        (*l_409) = l_408;

                        ;
                        if ((**l_409))
                            continue;
                        return p_37;


                    }
                    else
                    {
                        struct S0 *l_410 = &l_269;
                        (*l_410) = (**g_125);
                        (*l_304) = (g_14.f4 != (-1L));
                        (*l_408) = (l_310 != g_411);
                    }
                }


            }


            g_412 = (void*)0;

            ;
            for (g_358 = 0; (g_358 >= (-29)); --g_358)
            {
                struct S2 l_415 = {2387,{-101,-476,-0,40,1,9,-2,22,939,72},1,78,5617,1};
                l_406.f0 = (*l_304);
                for (l_328 = 0; (l_328 <= 12); ++l_328)
                {
                    int *l_418 = (void*)0;
                    int **l_419 = &l_277;
                    struct S3 l_420 = {0L,0x61L};
                    (*l_419) = func_39(&l_38, &l_339, func_39(&l_38, &g_5, func_39(func_39(&g_104, &g_5, &g_104), &g_5, l_418)));

                    ;
                    (*g_375) = l_420;
                }
                g_33 = func_2(&l_339);
            }

            ;

        }

        ;
        ;

        ;
        ;
        ;
    }

    ;
    ;

    ;
    ;
    ;
    ;
    (*g_185) = (0x4EL != (*l_304));
    return (*l_304);




}







static int * func_39(int * p_40, struct S1 * p_41, int * p_42)
{
    int *l_238 = (void*)0;
    int **l_239 = &l_238;
    (*l_239) = l_238;
    return &g_104;


}







static struct S1 * func_44(struct S1 * p_45)
{
    struct S1 *l_47 = &g_5;
    int l_48 = 0x0FF81490L;
    struct S2 l_80 = {2809,{37,382,-0,58,1,-0,-1,43,1844,123},3,38,19551,2};
    int **l_141 = &g_61;
    struct S0 l_167 = {0xD3918D4DL,0x21E918CEL,65535UL,0x1BE7L,0L};
    struct S0 *l_175 = &l_167;
    if (((&g_5 == l_47) || (l_48 < (((safe_mod_func_int8_t_s_s(func_51(func_55(p_45, g_61, func_62((safe_lshift_func_uint8_t_u_s(l_48, 4)), l_48, (l_48 < ((l_48 < 9UL) == g_14.f0)), l_48, l_48), &l_48, g_61), p_45, l_80), 1UL)) || (-5L)) == l_48))))
    {
        for (g_14.f1 = 0; (g_14.f1 < 53); g_14.f1++)
        {
            for (l_48 = 0; (l_48 <= (-30)); l_48 = safe_sub_func_int32_t_s_s(l_48, 1))
            {
                int *l_118 = &l_48;
                int **l_119 = &l_118;
                int *l_120 = (void*)0;
                int *l_121 = &g_104;
                (*l_119) = l_118;
                (*l_121) = (-1L);
            }
        }
    }
    else
    {
        int **l_122 = &g_61;
        struct S0 *l_124 = &g_14;
        struct S0 **l_123 = &l_124;
        struct S1 *l_143 = &g_90.f1;
        struct S2 *l_171 = &l_80;
        struct S2 **l_170 = &l_171;
        struct S3 *l_172 = &g_173;
        (*l_122) = &g_104;

        ;
        if ((l_123 == g_125))
        {
            struct S1 *l_127 = (void*)0;
            struct S2 l_128 = {879,{-61,124,0,-23,1,-5,-2,6,1221,32},0,39,1899,3};
            struct S1 *l_148 = &l_80.f1;
            struct S2 *l_152 = &g_90;
            struct S2 **l_151 = &l_152;
            unsigned char l_166 = 0x10L;
            if ((l_127 == (void*)0))
            {
                short l_129 = 0L;
                int *l_144 = (void*)0;
                struct S2 ***l_153 = &l_151;
                l_128.f1.f1 = (((*g_61) ^ l_129) >= (safe_lshift_func_int8_t_s_u(0xA7L, 5)));
                for (l_129 = (-22); (l_129 != (-18)); l_129 = safe_add_func_uint32_t_u_u(l_129, 5))
                {
                    int l_145 = 0xEAA374F6L;
                    struct S0 **l_146 = (void*)0;
                    struct S0 *l_149 = &g_150;
                }
                (*g_33) = func_55(&g_5, (*l_141), (**g_125), (*l_141), &g_104);
                (*l_153) = l_151;
            }
            else
            {
                l_128.f3 = l_128.f3;
            }
            (**l_122) = (l_128.f1.f3 | (safe_div_func_uint32_t_u_u(g_90.f1.f2, (safe_rshift_func_uint8_t_u_s(l_128.f1.f3, (!(safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(0x02L, 7)), (((**l_122) ^ (**l_141)) | ((**l_122) <= l_128.f1.f6)))) == (safe_lshift_func_uint8_t_u_s((**l_141), 2))), 7))))))));
            (**l_141) = l_166;
            l_167 = l_167;
        }
        else
        {
            struct S0 l_169 = {0xEEF009D0L,2UL,0x5C61L,0xD10CL,0xFC88F8C1L};
            int *l_176 = &g_14.f4;
            if ((**l_122))
            {
                unsigned l_168 = 0x1CB3A65CL;
                l_169 = func_62(l_168, l_168, g_90.f1.f9, (**l_141), l_168);
                (*g_61) = ((void*)0 == l_170);
            }
            else
            {
                struct S3 **l_174 = &l_172;
                (*l_174) = l_172;
                l_175 = (*g_125);

                ;
            }

            ;
            (*l_141) = &g_104;
            l_176 = (*l_141);

            ;
        }

        ;
    }

    ;
    ;
    ;
    if (l_80.f1.f1)
    {
        unsigned short l_177 = 65530UL;
        int *l_178 = &g_104;
        struct S1 *l_181 = &g_90.f1;
        (*l_178) = (l_177 >= l_80.f1.f9);
        for (g_14.f4 = 27; (g_14.f4 >= 27); g_14.f4 = safe_add_func_uint8_t_u_u(g_14.f4, 8))
        {
            return l_181;


        }
    }
    else
    {
        int *l_184 = (void*)0;
        struct S3 l_194 = {1L,254UL};
        int l_219 = 0xA403EEF2L;
        short l_225 = 1L;
        struct S2 l_237 = {4336,{-252,-179,-0,-31,1,-4,-3,34,1618,12},7,-71,26312,2};
        for (l_167.f2 = 19; (l_167.f2 >= 2); --l_167.f2)
        {
            struct S2 l_186 = {1932,{-120,51,0,27,1,7,3,4,2504,57},5,-84,2498,1};
            struct S3 *l_206 = &g_173;
            if (g_187)
            {
                int l_190 = 1L;
                int *l_191 = (void*)0;
                unsigned l_217 = 0x27E9D269L;
                l_190 = (safe_rshift_func_int8_t_s_u(0x88L, g_90.f1.f1));
                if ((*g_185))
                    break;
                if ((*g_185))
                {
                    struct S3 l_192 = {0xEBFAB12DL,0x45L};
                    struct S3 *l_193 = (void*)0;
                    struct S0 ***l_197 = (void*)0;
                    unsigned short l_205 = 0x770FL;
                    struct S1 *l_208 = &l_80.f1;
                    int l_218 = 0x3B51E3D7L;
                    (*l_141) = l_191;

                    ;
                    (*g_185) = (*g_185);
                    l_194 = l_192;
                    if ((safe_sub_func_uint16_t_u_u((g_173.f1 > g_150.f3), (l_197 != (void*)0))))
                    {
                        unsigned l_202 = 7UL;
                        (*g_185) = (((~(safe_unary_minus_func_uint8_t_u((safe_div_func_uint32_t_u_u(g_201, l_202))))) == (safe_rshift_func_int8_t_s_s(l_194.f1, 5))) && l_202);
                        (*g_185) = l_205;
                        if (l_186.f4)
                            continue;
                        (*g_185) = (g_187 < g_90.f1.f5);
                    }
                    else
                    {
                        struct S3 **l_207 = &l_193;
                        (*l_207) = l_206;

                        ;
                        (*g_185) = l_205;
                        l_219 = (0xB2ACL ^ ((0x5E74L || g_5.f0) > (((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(((safe_div_func_uint32_t_u_u((g_150.f1 || (((safe_mod_func_uint8_t_u_u((g_90.f1.f1 & l_205), g_5.f7)) && g_14.f2) ^ 0xDFL)), 0x2D2F218EL)) || l_217), g_104)) > 1L), l_218)) ^ 65530UL) | 8UL)));
                        (*l_141) = &g_104;

                        ;
                    }

                    ;
                    ;
                }
                else
                {
                    int l_222 = 0x37C6B6CEL;
                    struct S3 l_234 = {1L,0UL};
                    (*g_185) = ((+l_186.f1.f1) & ((void*)0 == &l_206));
                    l_186.f1.f6 = ((safe_mod_func_int32_t_s_s(l_194.f1, l_222)) != (safe_rshift_func_uint16_t_u_u(l_225, 1)));
                    for (g_150.f1 = 13; (g_150.f1 != 29); ++g_150.f1)
                    {
                        struct S2 l_228 = {4848,{231,89,0,26,0,2,-0,12,2556,61},6,22,34771,1};
                        struct S2 *l_229 = (void*)0;
                        struct S2 *l_230 = &g_90;
                        struct S2 **l_231 = (void*)0;
                        struct S2 **l_232 = (void*)0;
                        struct S2 **l_233 = &l_229;
                        (*l_230) = l_228;
                        if ((*g_185))
                            continue;
                        (*l_233) = &g_90;

                        ;
                    }
                    (*l_206) = l_234;
                }
            }
            else
            {
                (*g_185) = (safe_lshift_func_int16_t_s_u(g_90.f1.f7, l_80.f1.f5));
                if ((*g_185))
                    break;
            }
        }
    }
    (*g_33) = (*l_47);
    return l_47;


}







static char func_51(struct S1 p_52, struct S1 * p_53, struct S2 p_54)
{
    struct S0 *l_81 = &g_14;
    int l_100 = (-8L);
    int *l_105 = (void*)0;
    int *l_111 = &g_14.f4;
    int **l_112 = (void*)0;
    int **l_113 = &l_105;
    if (p_54.f1.f0)
    {
        struct S0 **l_82 = &l_81;
        struct S2 *l_89 = &g_90;
        int l_93 = 0xAECCFC7CL;
        (*l_82) = l_81;
        if (((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((((safe_mod_func_uint8_t_u_u(((l_89 == (void*)0) | 0L), p_54.f1.f3)) || ((g_14.f0 < ((((safe_rshift_func_uint16_t_u_u(l_93, p_52.f1)) || p_54.f4) <= p_52.f2) | l_93)) >= g_90.f3)) <= 0x33D480ABL), 0)), 1UL)) || g_5.f4))
        {
            for (l_93 = (-19); (l_93 > 20); l_93 = safe_add_func_uint16_t_u_u(l_93, 4))
            {
                int **l_97 = &g_96;
                (*l_97) = g_96;
                if ((*g_61))
                    continue;
                if ((*g_96))
                    break;
            }
            (*g_61) = (*g_96);
        }
        else
        {
            unsigned char l_101 = 0x5FL;
            int **l_106 = (void*)0;
            int **l_107 = (void*)0;
            int **l_108 = (void*)0;
            int **l_109 = &g_96;
            (*g_61) = ((*g_61) & ((safe_lshift_func_int8_t_s_u((l_100 | l_101), (l_101 != (+(safe_add_func_uint32_t_u_u(l_100, (0L >= g_5.f4))))))) == g_104));
            (*l_109) = l_105;

            ;
        }

        ;
    }
    else
    {
        int **l_110 = &g_61;
        (*l_110) = (void*)0;

        ;
    }


    ;
    (*l_111) = (g_90.f1.f6 > g_90.f1.f6);
    (*l_113) = &g_104;

    ;
    return g_14.f4;
}







static struct S1 func_55(struct S1 * p_56, int * p_57, struct S0 p_58, int * p_59, int * p_60)
{
    for (g_14.f2 = (-6); (g_14.f2 == 15); ++g_14.f2)
    {
        int **l_79 = &g_61;
        (*l_79) = p_60;
    }


    return (*g_33);
}







static struct S0 func_62(unsigned char p_63, int p_64, int p_65, int p_66, unsigned short p_67)
{
    struct S2 l_70 = {306,{222,-213,-0,21,1,-5,-1,24,2257,30},10,67,11406,2};
    struct S2 *l_71 = &l_70;
    struct S0 l_76 = {0xA65E11EDL,0xA4D755E4L,1UL,65535UL,0x05789552L};
    (*l_71) = l_70;
    for (p_64 = 0; (p_64 == 22); p_64++)
    {
        int *l_74 = &g_14.f4;
        int **l_75 = &l_74;
        (*l_75) = l_74;
        (*l_75) = &p_64;

        ;
        (*l_75) = (*l_75);
        return l_76;
    }
    (*g_61) = 1L;
    return g_14;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5.f0, "g_5.f0", print_hash_value);
    transparent_crc(g_5.f1, "g_5.f1", print_hash_value);
    transparent_crc(g_5.f2, "g_5.f2", print_hash_value);
    transparent_crc(g_5.f3, "g_5.f3", print_hash_value);
    transparent_crc(g_5.f4, "g_5.f4", print_hash_value);
    transparent_crc(g_5.f5, "g_5.f5", print_hash_value);
    transparent_crc(g_5.f6, "g_5.f6", print_hash_value);
    transparent_crc(g_5.f7, "g_5.f7", print_hash_value);
    transparent_crc(g_5.f8, "g_5.f8", print_hash_value);
    transparent_crc(g_5.f9, "g_5.f9", print_hash_value);
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
    transparent_crc(g_14.f3, "g_14.f3", print_hash_value);
    transparent_crc(g_14.f4, "g_14.f4", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1.f0, "g_90.f1.f0", print_hash_value);
    transparent_crc(g_90.f1.f1, "g_90.f1.f1", print_hash_value);
    transparent_crc(g_90.f1.f2, "g_90.f1.f2", print_hash_value);
    transparent_crc(g_90.f1.f3, "g_90.f1.f3", print_hash_value);
    transparent_crc(g_90.f1.f4, "g_90.f1.f4", print_hash_value);
    transparent_crc(g_90.f1.f5, "g_90.f1.f5", print_hash_value);
    transparent_crc(g_90.f1.f6, "g_90.f1.f6", print_hash_value);
    transparent_crc(g_90.f1.f7, "g_90.f1.f7", print_hash_value);
    transparent_crc(g_90.f1.f8, "g_90.f1.f8", print_hash_value);
    transparent_crc(g_90.f1.f9, "g_90.f1.f9", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_90.f4, "g_90.f4", print_hash_value);
    transparent_crc(g_90.f5, "g_90.f5", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_150.f0, "g_150.f0", print_hash_value);
    transparent_crc(g_150.f1, "g_150.f1", print_hash_value);
    transparent_crc(g_150.f2, "g_150.f2", print_hash_value);
    transparent_crc(g_150.f3, "g_150.f3", print_hash_value);
    transparent_crc(g_150.f4, "g_150.f4", print_hash_value);
    transparent_crc(g_173.f0, "g_173.f0", print_hash_value);
    transparent_crc(g_173.f1, "g_173.f1", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_201, "g_201", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_666, "g_666", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
