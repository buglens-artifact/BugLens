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
   int f1;
   unsigned char f2;
   const long long f3;
   unsigned f4;
};

union U1 {
   int f0;
   char * f1;
   long long f2;
};

union U2 {
   signed f0 : 24;
   const char * f1;
   const unsigned long long f2;
   const short f3;
   unsigned char f4;
};


static char g_3 = 0L;
static int g_18 = (-9L);
static union U0 g_33 = {-1L};
static union U1 g_49 = {0x3D4965DAL};
static int *g_63[9] = {&g_33.f1,&g_33.f1,&g_33.f1,&g_33.f1,&g_33.f1,&g_33.f1,&g_33.f1,&g_33.f1,&g_33.f1};
static union U2 g_81 = {-6L};
static union U1 *g_116 = &g_49;
static union U1 **g_115 = &g_116;
static const int *g_261[5][8] = {{&g_33.f1,&g_33.f1,(void*)0,&g_18,&g_18,&g_18,(void*)0,&g_33.f1},{&g_33.f1,&g_18,&g_33.f1,(void*)0,(void*)0,&g_33.f1,&g_18,&g_33.f1},{&g_18,&g_33.f1,&g_33.f1,&g_18,&g_33.f1,&g_33.f1,&g_18,&g_18},{&g_33.f1,&g_18,&g_33.f1,&g_33.f1,&g_18,&g_33.f1,(void*)0,&g_33.f1},{&g_18,&g_33.f1,(void*)0,&g_33.f1,&g_18,&g_33.f1,&g_33.f1,(void*)0}};
static int g_344 = 0xF619E694L;
static int *g_355 = (void*)0;
static union U2 *g_456 = &g_81;
static union U2 ** const g_455 = &g_456;
static union U0 g_496 = {1L};
static const union U0 *g_555 = &g_496;
static const union U0 **g_554 = &g_555;
static union U2 **g_681 = &g_456;
static unsigned short g_719 = 65527UL;
static int g_776 = 4L;
static int g_864 = 0L;



static unsigned func_1(void);
static unsigned short func_5(char * const p_6, unsigned char p_7);
static int func_10(char * p_11);
static union U2 func_14(int p_15);
static int * const func_19(int p_20, union U1 p_21, int * p_22, int * p_23);
static union U1 func_24(unsigned p_25, char * p_26);
static union U1 func_29(int * p_30, char p_31, int p_32);
static unsigned short func_36(int p_37, int * p_38);
static int func_39(int p_40, unsigned p_41, char * p_42);
static unsigned func_43(int p_44, union U1 p_45, union U1 p_46, unsigned p_47, union U2 p_48);
static unsigned func_1(void)
{
    char *l_2 = &g_3;
    int l_4 = 0xB807CFAFL;
    union U1 *l_643[8];
    union U2 l_678 = {0xF31C3904L};
    unsigned long long l_726 = 0x8A2FB0BA6B051479LL;
    union U0 *l_784 = &g_33;
    union U0 **l_783 = &l_784;
    unsigned char l_798 = 0xFBL;
    unsigned l_830 = 18446744073709551615UL;
    unsigned long long l_862[8][3][5] = {{{0x119387A372F5C056LL,18446744073709551610UL,18446744073709551615UL,18446744073709551615UL,0x9B86B761FFA498D6LL},{0xD8FF16CC0AACAC34LL,0UL,18446744073709551610UL,0x41E02F28B0061557LL,0x6D5F372FCE52A145LL},{5UL,0x32EB33D34F8C9134LL,0xD8FF16CC0AACAC34LL,18446744073709551610UL,0x9B86B761FFA498D6LL}},{{1UL,0x41E02F28B0061557LL,5UL,18446744073709551610UL,18446744073709551610UL},{0x9B86B761FFA498D6LL,0x9D131BCBAD54CDE0LL,1UL,0x4CC36403C3F9D176LL,0x32EB33D34F8C9134LL},{5UL,18446744073709551615UL,18446744073709551615UL,0x0365471FC4876459LL,0x763CE2568879DD51LL}},{{5UL,5UL,0x81235223F8DE79ACLL,0xD8FF16CC0AACAC34LL,0x81235223F8DE79ACLL},{0x9B86B761FFA498D6LL,0x9B86B761FFA498D6LL,18446744073709551615UL,0x6D5F372FCE52A145LL,5UL},{1UL,18446744073709551609UL,0x0365471FC4876459LL,0x963B6951848FCDAFLL,18446744073709551615UL}},{{5UL,0x223BFC475BE99166LL,18446744073709551607UL,1UL,18446744073709551615UL},{0xD8FF16CC0AACAC34LL,18446744073709551609UL,0x4CC36403C3F9D176LL,0x119387A372F5C056LL,18446744073709551609UL},{0x119387A372F5C056LL,0x9B86B761FFA498D6LL,0x9D131BCBAD54CDE0LL,1UL,0x4CC36403C3F9D176LL}},{{18446744073709551610UL,5UL,0x963B6951848FCDAFLL,0x32EB33D34F8C9134LL,0xC784D423089A48AALL},{1UL,18446744073709551615UL,0x963B6951848FCDAFLL,18446744073709551615UL,0x41E02F28B0061557LL},{0x223BFC475BE99166LL,0x9D131BCBAD54CDE0LL,0x9D131BCBAD54CDE0LL,0x223BFC475BE99166LL,0xA9E88B6AB84FCB65LL}},{{1UL,0x41E02F28B0061557LL,0x4CC36403C3F9D176LL,18446744073709551615UL,5UL},{18446744073709551609UL,0x32EB33D34F8C9134LL,18446744073709551607UL,18446744073709551612UL,0x0365471FC4876459LL},{0x963B6951848FCDAFLL,0UL,0x0365471FC4876459LL,18446744073709551615UL,0x223BFC475BE99166LL}},{{18446744073709551609UL,18446744073709551610UL,0xA9E88B6AB84FCB65LL,1UL,0x9B86B761FFA498D6LL},{18446744073709551610UL,18446744073709551615UL,0x41E02F28B0061557LL,0xC784D423089A48AALL,5UL},{18446744073709551607UL,1UL,0xC784D423089A48AALL,0UL,5UL}},{{0x81235223F8DE79ACLL,0x9B86B761FFA498D6LL,0x4CC36403C3F9D176LL,0x4CC36403C3F9D176LL,0x9B86B761FFA498D6LL},{0x963B6951848FCDAFLL,0x4CC36403C3F9D176LL,18446744073709551609UL,0x6D5F372FCE52A145LL,1UL},{0UL,0x763CE2568879DD51LL,18446744073709551615UL,18446744073709551615UL,5UL}}};
    int i, j, k;
    for (i = 0; i < 8; i++)
        l_643[i] = &g_49;
    if ((((l_2 == &g_3) | l_4) >= func_5(l_2, g_3)))
    {
        unsigned long long l_623 = 18446744073709551606UL;
        union U1 l_646 = {0x3775C8CDL};
        char *l_658 = &g_3;
        unsigned char l_659 = 1UL;
        unsigned l_667 = 4294967295UL;
        union U2 l_685 = {0x74346A2EL};
        short l_687 = (-3L);
        union U1 l_697[6][4][2] = {{{{0xB72809A1L},{0x36B36BF6L}},{{0L},{0xB72809A1L}},{{0xD1F541E4L},{0x8AD4E2CFL}},{{0xD1F541E4L},{0xB72809A1L}}},{{{0L},{0x36B36BF6L}},{{0xB72809A1L},{0x13F1E8F1L}},{{0x91C896FAL},{0xD1F541E4L}},{{1L},{0x36B36BF6L}}},{{{0x36B36BF6L},{1L}},{{0xD1F541E4L},{0x91C896FAL}},{{0x13F1E8F1L},{0xB72809A1L}},{{0x36B36BF6L},{0L}}},{{{0xB72809A1L},{0xD1F541E4L}},{{0x8AD4E2CFL},{0xD1F541E4L}},{{0xB72809A1L},{0L}},{{0x36B36BF6L},{0xB72809A1L}}},{{{0x13F1E8F1L},{0x91C896FAL}},{{0xD1F541E4L},{1L}},{{0x36B36BF6L},{0x36B36BF6L}},{{1L},{0xD1F541E4L}}},{{{0x91C896FAL},{0x13F1E8F1L}},{{0xB72809A1L},{0x36B36BF6L}},{{0L},{0xB72809A1L}},{{0xD1F541E4L},{0x8AD4E2CFL}}}};
        union U0 **l_703 = (void*)0;
        const long long l_744[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
        int i, j, k;
        if ((l_623 ^ (safe_add_func_int8_t_s_s(g_33.f2, (((safe_mul_func_int16_t_s_s((l_623 >= ((&l_4 == &l_4) && (g_33.f2 | l_623))), (safe_add_func_uint32_t_u_u(9UL, ((l_4 | (-7L)) != 0xE779B304L))))) != g_33.f0) & l_4)))))
        {
            int *l_630 = (void*)0;
            int *l_631 = &l_4;
            union U1 l_647[4] = {{0x535A52DEL},{0x535A52DEL},{0x535A52DEL},{0x535A52DEL}};
            union U1 l_679 = {-2L};
            union U2 **l_680[9] = {&g_456,&g_456,&g_456,&g_456,&g_456,&g_456,&g_456,&g_456,&g_456};
            int i;
            (*l_631) = l_623;
            for (g_344 = 14; (g_344 < (-7)); g_344 = safe_sub_func_uint8_t_u_u(g_344, 9))
            {
                unsigned char l_634[9][7] = {{0x0AL,1UL,8UL,1UL,255UL,1UL,8UL},{255UL,255UL,0x12L,0x59L,0x0AL,1UL,0x12L},{251UL,0x12L,0x12L,0UL,255UL,0x0AL,0x66L},{1UL,1UL,0x0AL,0x12L,0x0AL,1UL,1UL},{0x9EL,1UL,1UL,0x12L,255UL,0x66L,0UL},{0xBBL,0UL,255UL,0UL,0x9EL,255UL,255UL},{255UL,0x59L,1UL,0x59L,255UL,251UL,0x12L},{0x12L,0x59L,0x0AL,1UL,0x12L,8UL,0x9EL},{0x59L,0UL,0x12L,1UL,1UL,1UL,1UL}};
                int i, j;
                (*l_631) = (l_634[2][2] != (4294967292UL == l_634[2][2]));
            }
            if (((safe_mod_func_uint64_t_u_u(l_4, 1L)) & (l_623 , ((*g_554) != (void*)0))))
            {
                int l_644[10][7] = {{0xDC94BD76L,0x794A0F0AL,0xDC94BD76L,0x3B0F7603L,0x0EDF8F5AL,7L,(-1L)},{(-9L),0x1BE54031L,0xC43EF2E2L,(-3L),(-1L),0xDC94BD76L,1L},{0L,0xDC94BD76L,7L,0x1BE54031L,0x1BE54031L,7L,0xDC94BD76L},{1L,0xC742EC0BL,0x68673F95L,0L,0x1BE54031L,0x3B0F7603L,4L},{0x794A0F0AL,(-9L),0xC742EC0BL,0xB7CCC308L,(-1L),0xC43EF2E2L,0x1BE54031L},{(-1L),0x68673F95L,0x794A0F0AL,0x794A0F0AL,0x68673F95L,(-1L),0xF9BC4E99L},{0xB7CCC308L,0x1BE54031L,0x794A0F0AL,0L,7L,(-9L),0x68673F95L},{(-9L),0xC742EC0BL,0xB7CCC308L,(-1L),0xC43EF2E2L,0x68673F95L,0xC43EF2E2L},{7L,0x1BE54031L,0x1BE54031L,7L,0xDC94BD76L,0L,4L},{7L,0x68673F95L,0x0EDF8F5AL,0xC742EC0BL,1L,0x3B0F7603L,0x794A0F0AL}};
                union U1 l_648[10][3][2] = {{{{0xBF060A89L},{0xD6B3E640L}},{{0xA4A6C638L},{-1L}},{{0xD6B3E640L},{0x1D3C3CB3L}}},{{{9L},{0x7D419050L}},{{7L},{1L}},{{1L},{0xA4A6C638L}}},{{{0xB7B3BD6BL},{0xA4A6C638L}},{{1L},{1L}},{{7L},{0x7D419050L}}},{{{9L},{0x1D3C3CB3L}},{{0xD6B3E640L},{-1L}},{{0xA4A6C638L},{0xD6B3E640L}}},{{{0xBF060A89L},{0L}},{{0xBF060A89L},{0xD6B3E640L}},{{0xA4A6C638L},{-1L}}},{{{0xD6B3E640L},{0x1D3C3CB3L}},{{9L},{0x7D419050L}},{{7L},{1L}}},{{{1L},{0xA4A6C638L}},{{0xB7B3BD6BL},{0xA4A6C638L}},{{1L},{1L}}},{{{7L},{0x7D419050L}},{{9L},{0x1D3C3CB3L}},{{0xD6B3E640L},{-1L}}},{{{0xA4A6C638L},{0xD6B3E640L}},{{0xBF060A89L},{0L}},{{0xBF060A89L},{0xD6B3E640L}}},{{{0xA4A6C638L},{-1L}},{{0xD6B3E640L},{0x1D3C3CB3L}},{{9L},{0xA4A6C638L}}}};
                int **l_649[6] = {&g_355,&g_355,&g_355,&g_355,&g_355,&g_355};
                int **l_650 = &g_63[0];
                union U2 l_657 = {0L};
                char * const l_677 = &g_3;
                unsigned l_683 = 0xD876EA3EL;
                const union U0 *l_688 = (void*)0;
                int i, j, k;
                for (g_18 = 0; (g_18 <= (-21)); g_18--)
                {
                    if ((safe_mul_func_uint8_t_u_u(((*g_115) != ((safe_rshift_func_uint8_t_u_s(l_4, 1)) , l_643[2])), g_33.f2)))
                    {
                        (*l_631) = func_43((l_623 == g_49.f0), (**g_115), (**g_115), (g_3 >= ((g_18 ^ ((g_33.f2 < (*l_631)) , (l_644[3][2] | l_623))) , l_623)), (*g_456));
                    }
                    else
                    {
                        unsigned l_645 = 18446744073709551615UL;
                        (*l_631) = func_43(l_645, l_646, l_647[1], l_644[3][2], (**g_455));
                    }
                }
                (*l_650) = func_19(l_623, l_648[8][2][1], &l_4, &g_18);
                if (((safe_mul_func_uint8_t_u_u((((safe_add_func_int32_t_s_s(((func_43((*l_631), (((safe_lshift_func_int8_t_s_s(g_33.f0, 2)) || func_5(&g_3, g_496.f2)) , func_24((l_657 , g_496.f0), l_658)), l_646, l_4, (**g_455)) > l_659) < g_81.f0), g_49.f0)) ^ l_659) || l_4), l_4)) ^ l_623))
                {
                    unsigned long long l_669 = 0xC8C15A8C0C845C0CLL;
                    const int *l_686[7][9][4] = {{{(void*)0,&l_4,&g_496.f1,&g_18},{(void*)0,&l_4,(void*)0,(void*)0},{&g_18,&g_496.f1,&l_4,(void*)0},{&g_496.f1,&g_18,(void*)0,&g_18},{&g_496.f1,&g_18,&l_4,&g_496.f1},{&g_18,(void*)0,&g_18,&l_4},{(void*)0,&l_4,&g_496.f1,&g_496.f1},{&l_4,&g_496.f1,&l_4,&l_4},{&g_496.f1,&g_496.f1,(void*)0,&g_496.f1}},{{&l_4,&g_496.f1,&l_4,&l_4},{&g_18,&g_18,&l_4,&g_496.f1},{&l_4,&g_496.f1,&l_4,(void*)0},{&l_4,&g_18,&l_4,&g_496.f1},{&g_18,(void*)0,&l_4,&l_4},{&l_4,&l_4,(void*)0,&l_4},{&g_496.f1,&g_18,&l_4,&l_4},{&l_4,&g_18,&g_496.f1,&g_18},{(void*)0,&g_496.f1,&g_18,&g_18}},{{&g_18,&l_4,&l_4,&g_496.f1},{&g_496.f1,&g_18,(void*)0,&g_18},{&g_496.f1,(void*)0,&l_4,&g_496.f1},{&g_18,&l_4,(void*)0,(void*)0},{(void*)0,&g_18,&g_18,(void*)0},{&g_18,&l_4,&l_4,&g_18},{&l_4,&g_496.f1,(void*)0,&g_18},{&l_4,&g_496.f1,&g_18,&l_4},{&g_18,(void*)0,&g_496.f1,&l_4}},{{&g_18,&g_496.f1,&g_18,&g_18},{&g_18,&g_496.f1,&g_496.f1,&g_18},{(void*)0,&l_4,&g_496.f1,(void*)0},{&g_496.f1,&g_18,&g_496.f1,&g_18},{&g_496.f1,&l_4,&l_4,&l_4},{&g_496.f1,&g_496.f1,(void*)0,&g_496.f1},{(void*)0,&g_496.f1,&g_18,&l_4},{(void*)0,&g_496.f1,&g_18,&g_496.f1},{&g_496.f1,(void*)0,&g_496.f1,&g_496.f1}},{{&g_18,&l_4,&l_4,&l_4},{(void*)0,&g_18,&l_4,&g_18},{&g_496.f1,&l_4,&g_496.f1,(void*)0},{&l_4,&g_496.f1,(void*)0,(void*)0},{(void*)0,(void*)0,&g_496.f1,&g_496.f1},{&g_18,&l_4,&g_496.f1,(void*)0},{(void*)0,&g_18,(void*)0,&g_18},{&l_4,&g_18,&g_496.f1,&l_4},{&g_496.f1,&l_4,&l_4,&g_496.f1}},{{(void*)0,(void*)0,&l_4,(void*)0},{&l_4,(void*)0,&l_4,&g_18},{(void*)0,&l_4,&g_18,(void*)0},{&g_496.f1,&l_4,&l_4,&g_496.f1},{&l_4,(void*)0,&g_18,&l_4},{(void*)0,&l_4,(void*)0,&l_4},{&g_496.f1,&l_4,&g_18,&g_18},{(void*)0,&g_18,&l_4,&l_4},{(void*)0,(void*)0,&g_496.f1,&g_18}},{{(void*)0,(void*)0,&g_18,&g_496.f1},{&g_496.f1,&g_496.f1,(void*)0,&g_18},{(void*)0,&g_496.f1,&l_4,&g_496.f1},{&g_496.f1,(void*)0,&l_4,&g_18},{&g_18,(void*)0,(void*)0,&l_4},{&l_4,&g_18,&l_4,&g_18},{&l_4,&l_4,&l_4,&l_4},{&g_18,&l_4,&l_4,&l_4},{&g_496.f1,(void*)0,&g_496.f1,&g_496.f1}}};
                    int i, j, k;
                    for (g_496.f1 = (-1); (g_496.f1 != 2); g_496.f1 = safe_add_func_int8_t_s_s(g_496.f1, 7))
                    {
                        unsigned l_674 = 0x586951B3L;
                        char l_684 = 0x75L;
                        (*l_631) = ((func_43(((safe_unary_minus_func_uint64_t_u(((func_43(((~((safe_rshift_func_int8_t_s_s((g_33.f2 <= l_667), (safe_unary_minus_func_uint32_t_u(l_669)))) > (-1L))) < (safe_add_func_int16_t_s_s(((+(g_344 , l_4)) >= ((((safe_sub_func_int64_t_s_s(l_674, ((*g_456) , (safe_mul_func_int8_t_s_s(func_5(l_677, g_496.f1), l_4))))) | g_3) == g_3) && l_4)), l_646.f0))), g_49, l_647[1], g_49.f0, l_678) , g_18) < 0L))) || 0xB40BL), l_648[8][2][1], l_679, g_33.f2, (**g_455)) || 0xA27EDC83L) | g_18);
                        g_681 = l_680[8];
                        g_261[2][2] = l_686[4][2][1];
                    }
                    return g_496.f2;
                }
                else
                {
                    l_685.f0 = l_687;
                    (*g_554) = l_688;
                    for (g_496.f0 = 0; (g_496.f0 >= 18); g_496.f0 = safe_add_func_uint16_t_u_u(g_496.f0, 4))
                    {
                        (*l_650) = (g_18 , (void*)0);
                    }
                }
            }
            else
            {
                return g_49.f0;
            }
            return g_81.f0;
        }
        else
        {
            unsigned short l_691 = 0x80B2L;
            union U1 l_695 = {0L};
            union U1 l_696 = {0xD948F821L};
            int *l_698[3];
            int **l_699[9][3] = {{&g_63[7],&g_63[1],&g_63[1]},{&g_63[3],&g_63[6],&l_698[0]},{&g_63[7],&g_63[1],&g_63[1]},{&g_63[3],&g_63[6],&l_698[0]},{&g_63[7],&g_63[1],&g_63[1]},{&g_63[3],&g_63[6],&l_698[0]},{&g_63[7],&g_63[1],&g_63[1]},{&g_63[3],&g_63[6],&l_698[0]},{&g_63[7],&g_63[1],&g_63[1]}};
            int **l_700 = &g_355;
            int i, j;
            for (i = 0; i < 3; i++)
                l_698[i] = &l_4;
            (*l_700) = func_19((g_496.f2 != (l_691 < (&g_555 == ((safe_unary_minus_func_uint8_t_u((safe_mul_func_uint16_t_u_u((l_646 , ((**g_455) , g_496.f2)), g_81.f0)))) , (void*)0)))), l_697[5][3][0], l_698[0], &g_18);
            (**l_700) = (l_678.f0 & (*g_355));
        }
        (*g_355) = (safe_rshift_func_uint16_t_u_s(g_344, (((l_687 , &g_555) == l_703) <= l_697[5][3][0].f0)));
        if (func_5(&g_3, ((l_623 != func_39((((safe_mul_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((func_36(func_36(((l_659 == ((void*)0 == &g_3)) >= (safe_lshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u(l_4, ((((((**g_115) , ((**g_681) , (l_678.f0 ^ l_623))) ^ l_678.f0) <= 0x9A08E68EL) , l_667) ^ g_33.f2))), 6))), &l_4), &g_18) | g_49.f0), l_685.f0)), g_81.f0)) , g_496.f2) , g_18), g_344, l_658)) || 18446744073709551611UL)))
        {
            int **l_712 = &g_355;
            (*l_712) = &g_18;
        }
        else
        {
            int l_715 = 0xBD404C2AL;
            int *l_717[10][8] = {{&g_33.f1,&g_33.f1,&l_4,&l_4,&g_33.f1,&l_4,&l_4,&g_33.f1},{(void*)0,&l_4,&g_33.f1,&l_4,&l_4,&g_33.f1,&g_33.f1,&l_4},{(void*)0,&l_4,&l_4,(void*)0,(void*)0,&g_33.f1,&g_33.f1,&l_4},{&l_4,(void*)0,&g_33.f1,&g_33.f1,&g_33.f1,(void*)0,&l_4,&g_33.f1},{&g_33.f1,(void*)0,&l_4,&g_33.f1,&g_33.f1,&g_33.f1,&g_33.f1,&l_4},{&l_4,&l_4,(void*)0,(void*)0,&g_33.f1,&g_33.f1,&l_4,&g_33.f1},{&g_33.f1,&l_4,(void*)0,&l_4,&g_33.f1,&l_4,&l_4,&g_33.f1},{&l_4,&g_33.f1,&l_4,(void*)0,(void*)0,&l_4,&g_33.f1,&l_4},{(void*)0,&l_4,&l_4,&g_33.f1,&l_4,&g_33.f1,&l_4,&g_33.f1},{(void*)0,&l_4,(void*)0,&g_33.f1,&g_33.f1,&g_33.f1,&l_4,&l_4}};
            int i, j;
            (*g_554) = (*g_554);
            (*g_355) = (safe_mul_func_int8_t_s_s((-9L), (l_685.f0 != l_4)));
            (*g_355) = (*g_355);
            for (g_344 = 5; (g_344 >= 0); g_344 -= 1)
            {
                int *l_716 = &l_4;
                int **l_718 = &g_355;
                (*l_718) = &l_4;
                if ((**l_718))
                    break;
                for (g_496.f0 = 0; (g_496.f0 <= 7); g_496.f0 += 1)
                {
                    return g_344;
                }
                (*l_718) = &g_18;
                for (g_33.f0 = 0; (g_33.f0 <= 1); g_33.f0 += 1)
                {
                    (**l_718) = l_4;
                    (*g_554) = (*g_554);
                    for (g_3 = 6; (g_3 >= 2); g_3 -= 1)
                    {
                        int i, j, k;
                        l_643[(g_344 + 1)] = &l_697[(g_33.f0 + 3)][(g_33.f0 + 2)][g_33.f0];
                    }
                }
            }
        }
        if (func_5(l_658, (func_39(g_18, g_719, &g_3) || (safe_lshift_func_uint16_t_u_s(l_659, 0)))))
        {
            (*g_355) = 0x225F3F47L;
        }
        else
        {
            int *l_724 = &g_18;
            int l_743 = 0xEAF45566L;
            union U0 l_747[6][7] = {{{1L},{1L},{1L},{9L},{1L},{9L},{1L}},{{1L},{1L},{1L},{9L},{1L},{9L},{1L}},{{1L},{1L},{1L},{1L},{0x759FL},{1L},{1L}},{{-5L},{-5L},{1L},{1L},{0x759FL},{1L},{1L}},{{-5L},{-5L},{1L},{1L},{0x759FL},{1L},{1L}},{{-5L},{-5L},{1L},{1L},{0x759FL},{1L},{1L}}};
            int i, j;
            for (g_344 = 0; (g_344 != 14); g_344++)
            {
                int **l_725 = &l_724;
                (*l_725) = func_19(l_678.f0, (**g_115), l_724, &l_4);
                return l_726;
            }
            if (((safe_sub_func_uint64_t_u_u(g_33.f4, (safe_sub_func_uint64_t_u_u((0xFF1BL || (safe_add_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s((-1L), (safe_sub_func_uint64_t_u_u((safe_mod_func_uint8_t_u_u(0xFDL, (safe_mod_func_uint32_t_u_u(((((**g_554) , func_43((((safe_sub_func_uint16_t_u_u((func_43(l_743, l_697[5][3][0], func_29(&g_18, l_667, (*l_724)), g_33.f4, (**g_681)) && l_623), g_496.f2)) || g_3) ^ 0x68L), (*g_116), (*g_116), l_678.f0, (**g_681))) <= (-5L)) , 0x7B898DD3L), l_659)))), g_49.f0)))) & 0x9C8AL), l_744[1]))), g_496.f2)))) == 0x8E78L))
            {
                int l_748[8] = {9L,9L,0xF3C3E7DDL,9L,9L,0xF3C3E7DDL,9L,9L};
                int i;
                for (l_659 = 0; (l_659 > 17); l_659 = safe_add_func_int16_t_s_s(l_659, 6))
                {
                    int **l_749 = &l_724;
                    (*l_724) = (l_747[2][4] , (g_18 | (l_726 != l_748[1])));
                    (*l_749) = &g_18;
                }
            }
            else
            {
                long long l_752 = 0x3AA7F31075EBBC22LL;
                union U1 l_763 = {-1L};
                for (g_3 = (-21); (g_3 < (-24)); g_3 = safe_sub_func_int8_t_s_s(g_3, 1))
                {
                    unsigned l_755 = 0xA6418122L;
                    int **l_756 = &g_63[5];
                    (*g_355) = l_752;
                    (*l_756) = ((g_33.f0 , func_36((safe_add_func_int32_t_s_s(l_667, (((((l_697[2][1][1] , (g_33.f1 , ((l_726 ^ g_496.f2) || l_697[5][3][0].f0))) | 1UL) || g_49.f0) || l_755) > g_33.f0))), &g_18)) , &g_18);
                }
                (*g_115) = (void*)0;
                (*l_724) = (g_496.f0 > (((safe_add_func_int8_t_s_s(l_744[1], (((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_49.f0, func_43((*g_355), l_697[5][3][0], l_763, g_33.f4, l_678))), 0xB7B5L)) > 2UL) <= g_33.f4))) & l_744[4]) > g_18));
                return l_4;
            }
            for (g_33.f2 = 0; (g_33.f2 < 3); ++g_33.f2)
            {
                l_678.f0 = (*l_724);
                (*g_355) = l_678.f0;
            }
        }
    }
    else
    {
        char * const l_768[10][9][2] = {{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}},{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}},{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}},{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}},{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}},{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}},{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}},{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}},{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}},{{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0},{&g_3,(void*)0}}};
        int * const *l_775[3][6][6] = {{{(void*)0,(void*)0,&g_63[8],&g_63[0],(void*)0,&g_63[0]},{&g_355,&g_63[0],&g_355,(void*)0,(void*)0,&g_63[0]},{(void*)0,&g_63[0],&g_63[0],&g_63[0],(void*)0,&g_355},{(void*)0,(void*)0,&g_355,&g_63[0],&g_355,(void*)0},{(void*)0,&g_63[0],&g_63[8],(void*)0,(void*)0,(void*)0},{&g_355,&g_355,&g_355,&g_63[0],(void*)0,&g_355}},{{(void*)0,&g_355,&g_63[0],&g_355,(void*)0,&g_63[0]},{(void*)0,&g_63[0],&g_355,&g_355,&g_355,&g_63[0]},{(void*)0,(void*)0,&g_63[8],&g_63[0],(void*)0,&g_63[0]},{&g_355,&g_63[0],&g_355,(void*)0,(void*)0,&g_63[0]},{(void*)0,&g_63[0],&g_63[0],&g_63[0],(void*)0,&g_355},{(void*)0,(void*)0,&g_355,&g_63[0],&g_355,(void*)0}},{{(void*)0,&g_63[0],&g_63[8],(void*)0,(void*)0,(void*)0},{&g_355,&g_355,&g_355,&g_63[0],(void*)0,&g_355},{(void*)0,&g_355,&g_63[0],&g_355,(void*)0,&g_63[0]},{(void*)0,&g_63[0],&g_355,&g_355,&g_355,&g_63[0]},{(void*)0,(void*)0,&g_63[8],&g_63[0],(void*)0,&g_63[0]},{&g_355,&g_63[0],&g_355,(void*)0,(void*)0,&g_63[0]}}};
        unsigned long long l_777[10] = {0x31793E270C69F21FLL,0x31793E270C69F21FLL,0x31793E270C69F21FLL,0x31793E270C69F21FLL,0x31793E270C69F21FLL,0x31793E270C69F21FLL,0x31793E270C69F21FLL,0x31793E270C69F21FLL,0x31793E270C69F21FLL,0x31793E270C69F21FLL};
        int *l_791 = &g_776;
        union U1 l_805[10] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
        char *l_817 = (void*)0;
        unsigned short l_831 = 0x208FL;
        union U2 l_869 = {0xD40FD8DDL};
        short l_882[9] = {1L,1L,1L,1L,1L,1L,1L,1L,1L};
        int **l_885 = &g_63[0];
        int **l_888 = &g_63[7];
        int i, j, k;
        if (((safe_mul_func_int16_t_s_s(((((func_5(l_768[2][6][0], ((((((&g_555 == (void*)0) && (g_33.f2 & ((safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u((-1L), (safe_rshift_func_uint8_t_u_u(((g_49.f0 , l_775[2][4][1]) != (void*)0), g_49.f0)))), 0x25L)) == g_18))) <= l_678.f0) == l_678.f0) == (-1L)) > g_776)) | 0xA018FFE6E21AA1CDLL) != l_4) , (*g_115)) == l_643[2]), 0UL)) || 0xC6L))
        {
            unsigned long long l_782 = 18446744073709551609UL;
            int l_827 = 0x9BC2E4F9L;
            unsigned char l_879[5][4] = {{0x2FL,253UL,253UL,0x2FL},{253UL,0x2FL,253UL,253UL},{0x2FL,0x2FL,0x19L,0x2FL},{0x2FL,253UL,253UL,0x2FL},{253UL,0x2FL,253UL,253UL}};
            int i, j;
            if ((l_777[4] <= (0xAB70507AL < (g_496.f0 > ((safe_mul_func_int16_t_s_s(g_81.f0, (((&l_4 != (void*)0) > 0L) ^ (g_81.f0 || 0xE365L)))) == l_782)))))
            {
                unsigned l_790 = 18446744073709551607UL;
                union U1 *l_809 = &l_805[8];
                unsigned short l_816 = 0x0D01L;
                if (((&g_555 != l_783) || 0xCFB14865L))
                {
                    unsigned long long l_787 = 18446744073709551615UL;
                    for (g_3 = 8; (g_3 < (-20)); g_3 = safe_sub_func_uint32_t_u_u(g_3, 5))
                    {
                        l_787 = (-10L);
                        (*l_791) = (safe_lshift_func_int8_t_s_s(func_36(l_790, l_791), 2));
                    }
                    return (*l_791);
                }
                else
                {
                    const int l_806[6][3][4] = {{{1L,4L,0x595C2486L,0L},{0xDA5F010EL,0x67CE0CF1L,0xFB0338B0L,(-1L)},{0xC9AD6B9BL,0xBB58B720L,4L,(-7L)}},{{1L,0xDA5F010EL,(-1L),4L},{1L,(-1L),1L,0xDA5F010EL},{(-7L),0L,1L,0L}},{{1L,4L,(-1L),8L},{1L,(-1L),4L,(-1L)},{4L,(-1L),(-1L),4L}},{{0xBB58B720L,0x67CE0CF1L,8L,(-1L)},{(-7L),(-4L),0L,1L},{0x084F49D6L,4L,0xDA5F010EL,1L}},{{(-1L),(-4L),4L,(-1L)},{5L,0x67CE0CF1L,(-7L),4L},{4L,(-1L),0x02157740L,(-1L)}},{{(-7L),(-1L),0xC9AD6B9BL,8L},{0x108993B6L,4L,0x67CE0CF1L,0L},{0xFB0338B0L,0L,4L,0xDA5F010EL}}};
                    int i, j, k;
                    l_678.f0 = (g_496.f0 < (+((func_43((safe_lshift_func_int16_t_s_s((l_790 == ((l_790 <= l_790) <= (((*g_456) , ((safe_sub_func_uint32_t_u_u(((l_782 != ((safe_rshift_func_uint16_t_u_u(l_798, 1)) , ((safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u(((safe_add_func_uint16_t_u_u(func_5(&g_3, g_81.f0), g_496.f2)) & (-1L)), 9)) & g_49.f0), 2L)) > g_776))) >= 0xF9L), l_782)) & l_790)) < g_3))), 10)), l_805[8], (**g_115), g_719, l_678) >= l_806[5][2][1]) == 1UL)));
                }
                for (g_3 = 0; (g_3 != 24); g_3 = safe_add_func_int8_t_s_s(g_3, 3))
                {
                    for (g_496.f1 = 0; g_496.f1 < 8; g_496.f1 += 1)
                    {
                        l_643[g_496.f1] = &g_49;
                    }
                    if (l_790)
                        continue;
                }
                for (l_798 = 0; (l_798 <= 9); l_798 += 1)
                {
                    int i;
                    (*g_115) = l_809;
                    (*l_791) = (((safe_mod_func_int32_t_s_s(((((l_678 , &g_116) != (void*)0) , (func_39(l_726, ((safe_mul_func_uint16_t_u_u((0xB8B5L == ((safe_sub_func_int16_t_s_s(l_782, 0x4FE2L)) ^ (0x26E1224BL >= 0UL))), l_790)) , l_816), l_817) & (-1L))) | g_496.f2), l_798)) ^ l_782) < (*l_791));
                }
            }
            else
            {
                char l_826[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_826[i] = 0x37L;
                (*l_791) = (0x6DE43DDA5289A643LL == ((func_5(((safe_rshift_func_uint16_t_u_u((((((65532UL ^ ((safe_sub_func_uint16_t_u_u(((g_496.f2 , &g_555) != &l_784), (safe_rshift_func_int16_t_s_u(l_782, 11)))) <= (g_719 , (safe_mod_func_int16_t_s_s((&l_805[3] == (void*)0), g_33.f0))))) <= 0x5EA604074B2349FBLL) >= g_776) & l_826[0]) != l_782), 6)) , &g_3), l_826[0]) , &g_555) != &g_555));
                l_827 = func_10(&g_3);
            }
            for (l_726 = 2; (l_726 <= 9); l_726 += 1)
            {
                long long l_841 = 0xBB13A8575FF15CB0LL;
                char *l_842 = (void*)0;
                int l_855 = (-10L);
                union U1 l_872 = {6L};
                if ((safe_rshift_func_int16_t_s_s(0x14A7L, 6)))
                {
                    return l_830;
                }
                else
                {
                    int l_834 = (-6L);
                    int *l_871 = (void*)0;
                    int i;
                    if (l_831)
                        break;
                    (*l_791) = (0x06A45FD7L >= l_830);
                    for (l_831 = 0; (l_831 <= 9); l_831 += 1)
                    {
                        (*l_791) = (*l_791);
                        (*l_791) = 0x457D7595L;
                        (*l_791) = (((safe_lshift_func_int16_t_s_s((&g_3 != (((l_834 & (safe_lshift_func_uint16_t_u_u(func_5(&g_3, ((safe_mul_func_uint8_t_u_u(((((l_834 || ((((safe_rshift_func_uint8_t_u_s(0x3DL, 3)) | func_5(&g_3, l_827)) ^ 0x6BDF6F89L) , g_496.f0)) , 0x06L) || l_834) >= g_49.f0), 0xDEL)) > l_827)), g_49.f0))) , g_496.f0) , (void*)0)), 0)) , l_841) && l_841);
                    }
                    if ((!((g_496.f2 > g_344) | ((safe_add_func_uint32_t_u_u(g_496.f0, (safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((l_830 > (-9L)) <= (-10L)), 4)), g_49.f0)))) != (-1L)))))
                    {
                        long long l_863[2][2];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 2; j++)
                                l_863[i][j] = (-1L);
                        }
                        l_863[0][0] = (safe_sub_func_int64_t_s_s((l_834 , (safe_rshift_func_int16_t_s_u((0xECF33B594F4B95F7LL != l_4), 1))), (((safe_rshift_func_uint8_t_u_s(l_862[6][1][3], 3)) < g_49.f0) , g_496.f0)));
                        return g_864;
                    }
                    else
                    {
                        int l_867 = (-7L);
                        union U1 l_868 = {0x266E0CB7L};
                        union U2 l_870 = {0x01BC8975L};
                        int *l_873[1][3][4];
                        int **l_874 = &l_873[0][2][2];
                        int i, j, k;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                for (k = 0; k < 4; k++)
                                    l_873[i][j][k] = &l_4;
                            }
                        }
                        (*l_874) = func_19((l_782 , l_4), l_872, &g_776, l_873[0][2][3]);
                    }
                }
                for (l_831 = 0; (l_831 <= 9); l_831 += 1)
                {
                    unsigned short l_883 = 0xC19AL;
                    l_879[1][2] = (((g_49.f0 , (safe_mod_func_uint32_t_u_u((l_782 , (safe_add_func_int64_t_s_s(g_3, 0x60BE0221A68CD448LL))), (((&g_115 != &g_115) != ((g_496.f0 <= l_827) < g_776)) && g_33.f2)))) , (void*)0) == &g_555);
                    (*l_791) = ((((safe_rshift_func_uint16_t_u_u(l_872.f0, 6)) >= g_864) | l_882[6]) ^ l_883);
                }
            }
            return g_864;
        }
        else
        {
            int **l_884 = &g_63[3];
            (*l_884) = &l_4;
            (*g_115) = (*g_115);
            g_554 = &g_555;
        }
        (*l_885) = (l_805[8] , &g_18);
        (*l_888) = func_19((((safe_lshift_func_uint8_t_u_u(g_81.f0, g_776)) , (*g_455)) != ((*l_784) , (void*)0)), (**g_115), &g_776, &g_18);
        for (l_798 = 0; (l_798 <= 8); l_798 += 1)
        {
            short l_889 = (-1L);
            for (l_831 = 0; (l_831 <= 8); l_831 += 1)
            {
                int i;
                (*l_791) = l_889;
                for (g_776 = 0; (g_776 <= 8); g_776 += 1)
                {
                    int i;
                    return l_777[l_831];
                }
            }
            return g_719;
        }
    }
    return l_678.f0;
}







static unsigned short func_5(char * const p_6, unsigned char p_7)
{
    char *l_12 = &g_3;
    int l_622 = (-6L);
    for (p_7 = 0; (p_7 > 22); ++p_7)
    {
    }
    return p_7;
}







static int func_10(char * p_11)
{
    union U0 l_13 = {0L};
    if ((l_13 , l_13.f0))
    {
        return l_13.f0;
    }
    else
    {
        int l_617[9];
        int *l_620 = (void*)0;
        int *l_621 = &g_496.f1;
        int i;
        for (i = 0; i < 9; i++)
            l_617[i] = 7L;
        (*l_621) = ((((((((func_14(l_13.f2) , (((safe_mod_func_int8_t_s_s(0xF7L, ((l_617[3] < ((*p_11) & (*p_11))) & g_81.f0))) != l_617[7]) && (-8L))) <= 6UL) >= l_617[3]) | l_13.f0) >= l_13.f0) ^ 0xBC13L) && 0x13A6L) , (-3L));
        return l_13.f0;
    }
}







static union U2 func_14(int p_15)
{
    long long l_16 = (-8L);
    int *l_17 = &g_18;
    char *l_27 = &g_3;
    const union U1 *l_398[3];
    const union U1 **l_397 = &l_398[1];
    const union U1 ***l_396 = &l_397;
    int **l_424[6][3] = {{(void*)0,(void*)0,&g_63[0]},{&g_63[2],&g_355,&g_63[0]},{&g_355,&g_63[2],&g_63[0]},{(void*)0,(void*)0,&g_63[0]},{&g_63[2],&g_355,&g_63[0]},{&g_355,&g_63[2],&g_63[0]}};
    int **l_425 = &l_17;
    int l_426 = 9L;
    const union U0 *l_445 = &g_33;
    const union U0 **l_444 = &l_445;
    union U2 *l_452 = &g_81;
    int *l_486 = &g_18;
    unsigned short l_489 = 0x1B0DL;
    union U2 l_533 = {0L};
    union U2 l_553[8] = {{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L},{-1L}};
    const long long l_571 = 0xC736CB545915340FLL;
    int i, j;
    for (i = 0; i < 3; i++)
        l_398[i] = &g_49;
    (*l_17) = l_16;
    (*l_17) = p_15;
    (*l_425) = func_19(p_15, func_24((((~(l_27 != &g_3)) , (*l_17)) || (&g_3 == l_27)), &g_3), ((!((void*)0 != l_396)) , g_355), l_17);
    if ((**l_425))
    {
        int l_439 = 0x29C4E886L;
        (**l_425) = (safe_add_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(func_43(l_439, (***l_396), (***l_396), g_49.f0, g_81), (safe_sub_func_int8_t_s_s(l_439, ((l_439 & (0x98D41B8583B7D8F9LL <= l_439)) & 3L))))), g_18));
        (**l_425) = (p_15 & g_33.f2);
    }
    else
    {
        union U2 **l_454 = (void*)0;
        int l_457 = 0x7876F877L;
        int * const * const l_488[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned short l_504[9] = {0xC9B2L,0x28C6L,0xC9B2L,0xC9B2L,0x28C6L,0xC9B2L,0xC9B2L,0x28C6L,0xC9B2L};
        union U1 l_514[8][3][2] = {{{{-6L},{0x1B30C6F6L}},{{7L},{1L}},{{7L},{0x1B30C6F6L}}},{{{-6L},{7L}},{{0x1B30C6F6L},{1L}},{{-2L},{-2L}}},{{{-6L},{-2L}},{{-2L},{1L}},{{0x1B30C6F6L},{7L}}},{{{-6L},{0x1B30C6F6L}},{{7L},{1L}},{{7L},{0x1B30C6F6L}}},{{{-6L},{7L}},{{0x1B30C6F6L},{1L}},{{-2L},{-2L}}},{{{-6L},{-2L}},{{-2L},{1L}},{{0x1B30C6F6L},{7L}}},{{{-6L},{0x1B30C6F6L}},{{7L},{1L}},{{7L},{0x1B30C6F6L}}},{{{-6L},{7L}},{{0x1B30C6F6L},{1L}},{{-2L},{-2L}}}};
        const union U0 l_573 = {0x0CDAL};
        unsigned l_581 = 4UL;
        int i, j, k;
        (*l_425) = &g_18;
        for (p_15 = (-20); (p_15 <= 1); ++p_15)
        {
            union U2 *l_453 = &g_81;
            int l_465 = (-7L);
            char *l_481 = &g_3;
            union U0 *l_495 = &g_496;
            union U1 l_512 = {0xE6959DB3L};
            int l_528 = (-3L);
            unsigned short l_546 = 0xF4B2L;
            const union U0 **l_556 = &g_555;
            unsigned short l_563 = 0UL;
            unsigned long long l_564[1][10][7] = {{{18446744073709551609UL,0x41DE1C84E2AC11F3LL,9UL,0x049CA3CFD552334DLL,0xF7EBCF9EC1755586LL,0xBEF9F9378A53FB92LL,0xCC382CDE5788755FLL},{18446744073709551609UL,9UL,0xE03700777BBA0388LL,0UL,0xCC382CDE5788755FLL,0xBEF9F9378A53FB92LL,0xF7EBCF9EC1755586LL},{18446744073709551615UL,0UL,18446744073709551610UL,0UL,0xF7EBCF9EC1755586LL,0x44D759F0AFEDC053LL,18446744073709551615UL},{0UL,0UL,0xE03700777BBA0388LL,0x049CA3CFD552334DLL,18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551615UL,9UL,9UL,18446744073709551615UL,18446744073709551615UL,0x44D759F0AFEDC053LL,0xF7EBCF9EC1755586LL},{18446744073709551609UL,0x41DE1C84E2AC11F3LL,0x3DDED81374AA977ALL,0x44D759F0AFEDC053LL,18446744073709551609UL,18446744073709551606UL,5UL},{0x1AB9464B78BF84F8LL,0x3DDED81374AA977ALL,18446744073709551615UL,0xBEF9F9378A53FB92LL,5UL,18446744073709551606UL,18446744073709551609UL},{1UL,18446744073709551615UL,0UL,0xBEF9F9378A53FB92LL,18446744073709551609UL,18446744073709551614UL,0x049CA3CFD552334DLL},{0xBEF9F9378A53FB92LL,18446744073709551615UL,18446744073709551615UL,0x44D759F0AFEDC053LL,0x049CA3CFD552334DLL,0UL,0x049CA3CFD552334DLL},{1UL,0x3DDED81374AA977ALL,0x3DDED81374AA977ALL,1UL,0x049CA3CFD552334DLL,18446744073709551614UL,18446744073709551609UL}}};
            unsigned short l_585[1];
            unsigned long long l_587 = 0x4541B8A28164A330LL;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_585[i] = 0UL;
            if ((((void*)0 != l_444) < (safe_lshift_func_int8_t_s_u(l_457, g_3))))
            {
                unsigned short l_464 = 0UL;
                union U1 l_482 = {7L};
                int *l_501 = (void*)0;
                union U2 l_505 = {0xEA27C2E3L};
                int l_511 = (-4L);
                short l_515 = 0xB3B7L;
                union U0 *l_517 = &g_496;
                if (((safe_add_func_int32_t_s_s((((void*)0 != (*l_444)) <= ((*l_17) > (safe_add_func_int16_t_s_s(l_465, (l_453 == (*g_455)))))), g_18)) != g_49.f0))
                {
                    unsigned l_476 = 0UL;
                    char *l_483 = &g_3;
                    union U1 l_484 = {0L};
                    int *l_485 = (void*)0;
                    int **l_487 = &g_63[5];
                    g_261[2][0] = &l_457;
                    (*l_487) = func_19((p_15 && ((p_15 > (-10L)) , p_15)), l_484, l_485, l_486);
                }
                else
                {
                    union U1 l_490[3][7] = {{{-1L},{-1L},{0xEEF7012FL},{0xA75BBC31L},{0x7BF17432L},{0xEEF7012FL},{0x7BF17432L}},{{0xA75BBC31L},{9L},{9L},{0xA75BBC31L},{3L},{8L},{0xA75BBC31L}},{{8L},{0x7BF17432L},{3L},{3L},{0x7BF17432L},{8L},{9L}}};
                    union U0 *l_494 = &g_33;
                    int i, j;
                    (*l_17) = 0x77D13B6FL;
                    if ((&g_355 == l_488[3]))
                    {
                        int *l_491 = &l_457;
                        int **l_492 = (void*)0;
                        int **l_493 = &g_63[8];
                        (*l_493) = func_19(l_489, l_490[0][4], &l_465, l_491);
                    }
                    else
                    {
                        l_495 = l_494;
                    }
                    for (g_3 = 0; (g_3 == 17); g_3 = safe_add_func_uint64_t_u_u(g_3, 6))
                    {
                        int **l_502 = &g_63[0];
                        union U0 **l_503 = &l_494;
                        (*l_502) = ((safe_add_func_int16_t_s_s(p_15, 65533UL)) , func_19((*l_486), l_490[2][4], l_501, &g_18));
                        l_503 = (void*)0;
                    }
                }
                (*l_486) = func_43(l_465, l_482, (***l_396), (((p_15 || g_33.f2) <= (p_15 < l_504[2])) <= (255UL < (-8L))), l_505);
                for (g_33.f4 = 0; (g_33.f4 <= 16); ++g_33.f4)
                {
                    int *l_510 = &g_18;
                    union U2 l_516 = {0xC235ECB5L};
                    union U1 l_524 = {0L};
                }
            }
            else
            {
                unsigned l_543 = 0x39C82AFBL;
                int *l_547[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_547[i] = &l_528;
                for (l_457 = (-9); (l_457 < (-27)); l_457 = safe_sub_func_int32_t_s_s(l_457, 9))
                {
                    for (g_33.f2 = (-18); (g_33.f2 != 59); g_33.f2 = safe_add_func_int8_t_s_s(g_33.f2, 9))
                    {
                        (*l_425) = &g_18;
                        return l_533;
                    }
                }
                for (g_33.f4 = (-18); (g_33.f4 <= 29); g_33.f4 = safe_add_func_uint16_t_u_u(g_33.f4, 9))
                {
                    union U2 l_552[9] = {{0x04614F69L},{0x04614F69L},{0x9CB3EF15L},{0x04614F69L},{0x04614F69L},{0x9CB3EF15L},{0x04614F69L},{0x04614F69L},{0x9CB3EF15L}};
                    int i;
                    for (l_489 = 4; (l_489 != 4); l_489++)
                    {
                        short l_538 = 0x7284L;
                        (**l_425) = (l_538 || g_3);
                        (*l_444) = ((((safe_mod_func_int8_t_s_s((safe_sub_func_int32_t_s_s((l_543 > ((safe_sub_func_uint64_t_u_u(((p_15 < func_43(l_546, l_512, func_29(l_547[1], (safe_mul_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((0L != ((*g_115) != (l_552[0] , (void*)0))), g_33.f2)) == p_15), p_15)), (**l_425)), l_546, l_553[0])) != 0x0321D70DFB1E72B0LL), p_15)) == l_538)), 0UL)), l_538)) ^ p_15) != 0xA0L) , &g_33);
                    }
                    if (p_15)
                        break;
                    l_556 = g_554;
                }
            }
            if ((safe_add_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u(((((((0UL != (l_465 >= ((safe_sub_func_uint32_t_u_u(p_15, (*l_486))) || g_496.f2))) & g_33.f4) , (void*)0) == &l_486) > p_15) < 1L), 12)) >= l_564[0][5][4]) >= p_15), p_15)))
            {
                int *l_567 = &g_18;
                int **l_568 = &g_63[0];
                union U2 l_572 = {-5L};
                union U1 **l_586 = &g_116;
                const unsigned char l_594 = 1UL;
                (*l_568) = func_19((safe_rshift_func_int16_t_s_s((((**l_425) >= g_496.f0) > (-1L)), 2)), l_514[3][0][0], (*l_425), l_567);
                if (((safe_sub_func_int64_t_s_s((((func_43((((0L < 0xBAEEL) , (~1L)) == func_43((((*l_567) , 0xDE70L) && (!((g_81.f0 , p_15) > l_571))), l_512, l_514[4][0][1], p_15, l_572)), l_514[7][2][1], l_512, p_15, (**g_455)) , p_15) , l_573) , 0xF3120405CDC25D8ELL), 0x4D4733C200DEFB6FLL)) , 0x1E5F94BFL))
                {
                    unsigned char l_574 = 0x23L;
                    (*l_17) = l_574;
                }
                else
                {
                    union U0 l_584[1] = {{0x3CD0L}};
                    const short l_589 = (-6L);
                    int i;
                    if ((safe_add_func_uint8_t_u_u(((((((((l_27 != ((g_33.f1 < ((&g_555 != (((safe_add_func_int8_t_s_s(p_15, 0x04L)) <= (safe_add_func_uint64_t_u_u((l_581 & (((((((safe_sub_func_uint8_t_u_u(((((p_15 || (l_584[0] , (p_15 , l_585[0]))) == 0UL) , l_586) != (void*)0), 250UL)) > p_15) & 0x7B2BL) & 65535UL) || 18446744073709551615UL) < l_584[0].f0) > g_496.f0)), (*l_17)))) , &g_555)) == (*l_567))) , (void*)0)) <= 1UL) & 0x6676L) == l_587) > p_15) != g_18) , l_514[3][0][0]) , g_33.f0), 0xEDL)))
                    {
                        union U2 l_588 = {-1L};
                        return l_588;
                    }
                    else
                    {
                        (*l_567) = ((*g_554) == (*l_556));
                        if (l_589)
                            continue;
                    }
                    for (l_546 = 9; (l_546 >= 13); ++l_546)
                    {
                        (*l_486) = ((((safe_lshift_func_uint8_t_u_s(l_584[0].f0, l_594)) , (void*)0) != (void*)0) <= (&g_115 == (void*)0));
                    }
                }
            }
            else
            {
                union U1 l_606 = {1L};
                int *l_614 = (void*)0;
                for (g_33.f1 = 0; (g_33.f1 <= (-16)); --g_33.f1)
                {
                    int l_601 = (-1L);
                    union U0 l_611 = {0x9775L};
                    union U2 l_612[1] = {{0x3F42430FL}};
                    int i;
                    for (l_457 = 28; (l_457 != (-27)); l_457 = safe_sub_func_uint8_t_u_u(l_457, 6))
                    {
                        return (*g_456);
                    }
                    if (((g_496.f0 >= (safe_sub_func_int8_t_s_s(l_601, (safe_sub_func_uint8_t_u_u(func_43(p_15, l_514[4][1][1], g_49, (g_344 | 0xFD0374A0FDC9EE48LL), ((l_601 , (**g_554)) , (*l_453))), g_33.f2))))) && g_33.f2))
                    {
                        (**l_425) = (((-1L) < l_601) || (func_43((safe_mul_func_uint16_t_u_u(g_18, g_496.f0)), l_606, l_514[3][0][0], ((safe_sub_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((l_611 , (g_3 != (p_15 != p_15))), 0)) == p_15), 0x601E79EF1F4DBA6DLL)) <= g_49.f0), l_612[0]) < 0UL));
                    }
                    else
                    {
                        union U2 *l_613 = (void*)0;
                        (*g_455) = l_613;
                        return (*l_452);
                    }
                    l_614 = &l_465;
                }
                (*l_486) = p_15;
            }
        }
    }
    return (*l_452);
}







static int * const func_19(int p_20, union U1 p_21, int * p_22, int * p_23)
{
    char l_401 = 0xBBL;
    union U1 l_402 = {7L};
    int l_421 = 0x8B1E5175L;
    union U2 l_422 = {0x21DB79C6L};
    int * const l_423 = &g_18;
    (*p_23) = (safe_add_func_int32_t_s_s(l_401, (func_43((*p_23), l_402, p_21, ((p_20 ^ g_18) & p_21.f0), l_422) == 0x96A5L)));
    return l_423;
}







static union U1 func_24(unsigned p_25, char * p_26)
{
    int *l_28 = &g_18;
    union U1 l_50 = {0xF45A3231L};
    union U2 l_51 = {0x14F5C6F0L};
    char *l_64 = (void*)0;
    int **l_231 = (void*)0;
    int **l_232 = (void*)0;
    int **l_256 = &g_63[4];
    unsigned char l_299[2][1][3];
    union U1 **l_382 = &g_116;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
                l_299[i][j][k] = 0UL;
        }
    }
    (*l_28) = p_25;
    l_28 = (func_29(&g_18, (*l_28), (g_18 , (g_33 , (safe_lshift_func_int16_t_s_u(1L, func_36(((l_28 != l_28) <= (func_39((*l_28), func_43(p_25, g_49, l_50, g_49.f0, l_51), l_64) , g_18)), &g_18)))))) , &g_18);
    for (g_33.f0 = 0; (g_33.f0 > 7); g_33.f0 = safe_add_func_int8_t_s_s(g_33.f0, 1))
    {
        (*l_28) = (g_81.f0 & p_25);
        if (p_25)
            continue;
    }
    if ((safe_sub_func_uint32_t_u_u(0x3D84FE96L, 1L)))
    {
        unsigned char l_241[8];
        const union U1 l_253 = {0xDFA0F36BL};
        const int *l_255 = &g_18;
        const int **l_254[9][1] = {{&l_255},{&l_255},{&l_255},{&l_255},{&l_255},{&l_255},{&l_255},{&l_255},{&l_255}};
        union U2 l_283[6][4][10] = {{{{3L},{0x01FAB7F7L},{0x40F5E0B1L},{1L},{-1L},{1L},{-1L},{0x975F7530L},{0x46C53810L},{0x94592299L}},{{1L},{-1L},{0x975F7530L},{0x46C53810L},{0x94592299L},{-9L},{1L},{0xA4C75E79L},{1L},{0x94592299L}},{{0xDE8078A0L},{0x7034F85FL},{0x9E7B2FF7L},{1L},{-10L},{-5L},{0x0277C8FFL},{0x65CAB69BL},{0x9B3AB6A4L},{1L}},{{0x257D210CL},{-10L},{0x3109D701L},{0L},{0x1C25903AL},{0L},{0x7034F85FL},{0x0C82F176L},{0x9B3AB6A4L},{0xDE8078A0L}}},{{{-1L},{0x71DF9922L},{4L},{1L},{0xD6F96F31L},{0xA4C75E79L},{0x1C25903AL},{4L},{0L},{0xD3AD5E93L}},{{0xC9A20B88L},{0x18929EA8L},{0L},{0x9E7B2FF7L},{0L},{8L},{3L},{4L},{0x9E7B2FF7L},{-10L}},{{1L},{-9L},{4L},{1L},{0xDE8078A0L},{0x257D210CL},{0L},{0x0C82F176L},{4L},{0x7C4BBB49L}},{{8L},{0x1C25903AL},{0x3109D701L},{0x65CAB69BL},{0L},{0x46C53810L},{0L},{0x65CAB69BL},{0x3109D701L},{0x1C25903AL}}},{{{0x975F7530L},{-9L},{0x9E7B2FF7L},{0x706784F3L},{0x7C4BBB49L},{0x50B50B8FL},{3L},{0x76FA04EDL},{1L},{0x0277C8FFL}},{{6L},{0x18929EA8L},{-1L},{0x9B3AB6A4L},{0L},{0x50B50B8FL},{0x1C25903AL},{-1L},{-9L},{0x278714E5L}},{{0x975F7530L},{0x71DF9922L},{1L},{-1L},{-9L},{0x46C53810L},{0x7034F85FL},{-9L},{0x65CAB69BL},{0xB3324741L}},{{8L},{-10L},{0x0C82F176L},{1L},{-9L},{0x257D210CL},{0x0277C8FFL},{0x01FAB7F7L},{0x2AB2D02EL},{0x76FA04EDL}}},{{{0xF9F70BE9L},{0x9B3AB6A4L},{0L},{0L},{0L},{0x0D022B84L},{0x65CAB69BL},{9L},{0x292C396BL},{0x706784F3L}},{{9L},{1L},{1L},{0L},{0x3109D701L},{1L},{1L},{0L},{0x2AB2D02EL},{-1L}},{{-6L},{0x76FA04EDL},{-1L},{0xE3F94184L},{2L},{1L},{0x9E7B2FF7L},{0L},{0x2BC0104EL},{0x3109D701L}},{{0L},{0x3109D701L},{-1L},{6L},{0L},{0x3616943CL},{1L},{0L},{1L},{0L}}},{{{0x15CF45E5L},{0x65CAB69BL},{1L},{0xAFE0E653L},{0x9E7B2FF7L},{0x8056B522L},{0L},{9L},{9L},{0L}},{{-4L},{0x65CAB69BL},{0L},{0L},{0x65CAB69BL},{-4L},{1L},{0x01FAB7F7L},{0x94592299L},{0L}},{{0L},{0x3109D701L},{0x292C396BL},{0x2BC0104EL},{-1L},{-6L},{0x9E7B2FF7L},{1L},{0x448582A1L},{1L}},{{0L},{0x76FA04EDL},{-1L},{9L},{0L},{-4L},{1L},{6L},{5L},{1L}}},{{{-4L},{1L},{6L},{5L},{1L},{0x8056B522L},{0x65CAB69BL},{0L},{-1L},{1L}},{{0x15CF45E5L},{0x9B3AB6A4L},{-9L},{1L},{-6L},{0L},{0x0D022B84L},{0L},{0x0277C8FFL},{-4L}},{{1L},{-6L},{3L},{-10L},{0xF9F70BE9L},{0x2AB2D02EL},{0x3616943CL},{0x71DF9922L},{0x0277C8FFL},{0x15CF45E5L}},{{0x2BC0104EL},{0L},{0L},{1L},{0L},{0L},{0xF9F70BE9L},{0x7C4BBB49L},{-10L},{0L}}}};
        unsigned l_305 = 0xC755D381L;
        int i, j, k;
        for (i = 0; i < 8; i++)
            l_241[i] = 0x32L;
        for (p_25 = 15; (p_25 < 27); ++p_25)
        {
            const char l_252 = 0x0BL;
            short l_257[10] = {(-1L),(-7L),(-1L),(-7L),(-1L),(-7L),(-1L),(-7L),(-1L),(-7L)};
            union U1 *l_258 = (void*)0;
            int i;
            for (g_33.f0 = 0; (g_33.f0 <= (-26)); g_33.f0 = safe_sub_func_uint64_t_u_u(g_33.f0, 5))
            {
                union U1 l_250 = {0xCA27DE4AL};
                int *l_251[5][4] = {{&g_18,(void*)0,&g_18,&g_18},{&g_18,&g_18,&g_18,&g_18},{&g_18,(void*)0,&g_18,&g_18},{&g_18,&g_18,&g_18,&g_18},{&g_18,&g_18,&g_18,&g_18}};
                int i, j;
                (*l_28) = l_241[4];
                (*l_28) = (~((safe_add_func_int32_t_s_s(((((((((safe_sub_func_int16_t_s_s(l_252, g_49.f0)) , l_254[3][0]) == l_256) >= p_25) , 0xFA71L) != p_25) , g_18) <= l_257[5]), 0xDDCD77AEL)) , p_25));
                (*l_28) = p_25;
                (*g_115) = l_258;
            }
        }
        for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
        {
            unsigned l_259 = 0xE7372DDEL;
            const int *l_260 = (void*)0;
            union U1 **l_262 = &g_116;
            union U2 *l_290 = &l_283[4][2][9];
            union U2 **l_289 = &l_290;
            (*l_28) = l_259;
            for (g_33.f1 = 0; (g_33.f1 <= 0); g_33.f1 += 1)
            {
                union U2 **l_280 = (void*)0;
                union U1 l_294 = {-2L};
                int i, j;
                if (p_25)
                {
                    unsigned l_275 = 6UL;
                    union U1 l_282 = {1L};
                    g_261[2][2] = l_260;
                    if (((1L != ((l_262 != (void*)0) ^ g_18)) | (safe_sub_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u((((safe_lshift_func_int8_t_s_u(0x3CL, (safe_mod_func_uint8_t_u_u((+(safe_rshift_func_uint8_t_u_u(0x7FL, ((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_uint16_t_u(l_275)), (((safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int8_t_s_s(((void*)0 != l_280), 0x01L)) && (*l_28)) >= 0L) , g_81.f0), 10)) != 0x3EL) ^ g_33.f2))) && 0x70F0L)))), p_25)))) != 6L) , p_25))), g_49.f0))))
                    {
                        union U1 l_281 = {0x71EE6F18L};
                        return l_281;
                    }
                    else
                    {
                        (*l_256) = &g_18;
                    }
                    if ((func_43(p_25, l_253, l_282, l_282.f0, l_283[4][2][9]) < (p_25 != (safe_rshift_func_int16_t_s_s(g_3, (safe_rshift_func_int8_t_s_u(((p_25 > g_49.f0) && g_49.f0), 0)))))))
                    {
                        (*g_115) = (*g_115);
                    }
                    else
                    {
                        return l_50;
                    }
                    return l_253;
                }
                else
                {
                    const union U1 l_288 = {-1L};
                    union U2 **l_293 = &l_290;
                    unsigned char l_304 = 247UL;
                    int *l_307 = &g_18;
                    for (l_259 = 0; (l_259 <= 0); l_259 += 1)
                    {
                        g_63[0] = &g_18;
                        if (p_25)
                            break;
                    }
                    (*l_28) = (((l_288 , p_25) < ((0xA5L > ((l_289 != ((safe_sub_func_uint32_t_u_u(((((+(l_51 , g_18)) == p_25) | func_43(((((*l_255) , (void*)0) == l_293) , p_25), l_50, l_294, p_25, (**l_293))) > g_49.f0), g_3)) , &l_290)) != p_25)) <= 0xB6L)) && p_25);
                    if ((l_294.f0 <= 0x1EE84019L))
                    {
                        l_305 = (((((void*)0 != (*g_115)) || (safe_lshift_func_int16_t_s_u((safe_lshift_func_int8_t_s_u(g_18, l_299[0][0][1])), (p_25 <= ((g_18 || (l_253 , ((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0xE4EF68A5L, p_25)), l_304)) >= g_33.f1))) < g_18))))) && (-1L)) ^ p_25);
                    }
                    else
                    {
                        int l_306[6][1][10] = {{{0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL}},{{0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL}},{{0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL}},{{0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL}},{{0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL}},{{0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL,0xBB6ED1CEL}}};
                        int i, j, k;
                        if (l_306[4][0][0])
                            break;
                        if (p_25)
                            break;
                        g_63[0] = l_307;
                    }
                }
                g_261[2][2] = l_260;
            }
        }
    }
    else
    {
        unsigned char l_308 = 0x18L;
        int l_322 = 0xF17D5CF2L;
        int l_354[7][10][3] = {{{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L}},{{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L}},{{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L}},{{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L}},{{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L}},{{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xF65BBFF3L,0xBB3D6549L,0xF65BBFF3L},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL}},{{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL},{0xD3AD992BL,0xF65BBFF3L,0xD3AD992BL}}};
        int *l_375[9] = {&l_322,&l_354[3][3][2],&l_322,&l_322,&l_354[3][3][2],&l_322,&l_322,&l_354[3][3][2],&l_322};
        union U0 *l_376[4][5] = {{&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33}};
        union U1 l_393 = {-5L};
        char l_394 = 0x3EL;
        union U2 l_395 = {0xE7CC49C9L};
        int i, j, k;
        if (l_308)
        {
            union U1 l_317 = {0x814597CFL};
            char *l_332 = &g_3;
            for (g_18 = (-21); (g_18 < (-13)); g_18 = safe_add_func_int16_t_s_s(g_18, 3))
            {
                char l_321 = 0L;
                int l_323 = (-1L);
                l_323 = ((safe_add_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((+(((func_43(l_308, (*g_116), l_317, ((((((((g_3 , (((g_33.f2 == g_3) , ((l_308 , ((safe_unary_minus_func_int64_t_s((safe_add_func_uint8_t_u_u((g_49.f0 <= ((*g_116) , p_25)), 255UL)))) , (**g_115))) , l_308)) & l_308)) <= g_33.f0) & p_25) != 0x30CB4F071ECBC2EALL) , 0x3038DF4331F7D008LL) || l_321) , p_25) < l_321), g_81) | l_308) ^ 0UL) , 0x8802L)), l_322)), l_321)) & l_317.f0);
                for (g_33.f4 = 0; (g_33.f4 > 26); g_33.f4 = safe_add_func_int8_t_s_s(g_33.f4, 5))
                {
                    const union U1 *l_327 = &l_317;
                    const union U1 ** const l_326 = &l_327;
                    const union U1 **l_329 = (void*)0;
                    const union U1 ***l_328 = &l_329;
                    (*l_256) = &l_322;
                    (*l_328) = l_326;
                }
            }
            l_322 = (safe_mod_func_uint8_t_u_u(l_308, (safe_mod_func_int8_t_s_s(g_33.f2, (+l_317.f0)))));
            (*l_28) = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((g_49.f0 >= g_18) != (0x8D91F2BCL <= 4294967292UL)), l_317.f0)), 4)) && (p_25 != p_25));
            for (g_33.f2 = 0; (g_33.f2 < 6); ++g_33.f2)
            {
                (*l_28) = (g_49.f0 >= p_25);
            }
        }
        else
        {
            int *l_341[9] = {&g_18,&l_322,&l_322,&g_18,&l_322,&l_322,&g_18,&l_322,&l_322};
            union U1 l_345 = {0L};
            union U2 l_346 = {-9L};
            unsigned l_368 = 0x9865CD3CL;
            unsigned long long l_389[2];
            int i;
            for (i = 0; i < 2; i++)
                l_389[i] = 0xEFC77A986C0544E7LL;
            (*l_28) = (func_29(&g_18, (p_25 , (g_3 & 0xE8L)), ((((l_341[8] != &g_18) != (safe_lshift_func_uint8_t_u_s((g_344 | ((func_43(p_25, l_50, l_345, g_33.f2, l_346) && p_25) < l_322)), (*p_26)))) , 1L) , (*l_28))) , 0xBDF0A969L);
            for (l_308 = 1; (l_308 <= 8); l_308 += 1)
            {
                union U1 l_347 = {0x7D283652L};
                union U2 l_353 = {0xEA7D278EL};
                for (g_18 = 0; (g_18 <= 0); g_18 += 1)
                {
                    union U2 l_350 = {0x17B4EAEFL};
                    union U1 **l_351 = (void*)0;
                    int i;
                    l_341[l_308] = l_341[(g_18 + 6)];
                    (*l_256) = ((((l_341[(g_18 + 6)] != (l_51 , l_341[l_308])) >= (p_25 , func_43(l_322, (*g_116), l_347, ((safe_mul_func_int16_t_s_s(0L, ((&g_18 != (void*)0) <= g_33.f2))) <= 0x0E351EE4L), l_350))) != l_347.f0) , (void*)0);
                    l_51.f0 = func_36(l_308, &g_18);
                    for (l_322 = 0; (l_322 >= 0); l_322 -= 1)
                    {
                        union U1 l_352 = {0xE5DD4CD9L};
                        int i, j, k;
                        l_354[0][0][0] = (l_299[(g_18 + 1)][g_18][(g_18 + 1)] && (l_299[(g_18 + 1)][g_18][(g_18 + 1)] >= ((func_43((p_25 , ((g_33.f4 || g_18) ^ (l_351 == (void*)0))), (**g_115), l_352, g_344, l_353) , g_33.f0) <= (*l_28))));
                        if (l_347.f0)
                            continue;
                        if (p_25)
                            break;
                        (*l_256) = g_355;
                    }
                }
                (*l_28) = (safe_mod_func_uint8_t_u_u(g_49.f0, ((p_25 < p_25) || 1L)));
                if (p_25)
                    break;
                for (g_344 = 0; (g_344 <= 0); g_344 += 1)
                {
                    return l_345;
                }
            }
            for (l_322 = 8; (l_322 >= 0); l_322 -= 1)
            {
                unsigned char l_373 = 0xB8L;
                for (g_33.f1 = 8; (g_33.f1 >= 0); g_33.f1 -= 1)
                {
                    int i;
                    if (l_368)
                    {
                        int i;
                        g_63[l_322] = ((((safe_rshift_func_int16_t_s_u(p_25, 7)) >= (safe_sub_func_int64_t_s_s(p_25, l_373))) , 0x983ECCF8L) , l_341[2]);
                        g_63[l_322] = &g_18;
                    }
                    else
                    {
                        union U1 l_374 = {0x8F86669DL};
                        return l_374;
                    }
                    for (l_373 = 0; (l_373 <= 8); l_373 += 1)
                    {
                        union U0 **l_377 = &l_376[3][4];
                        int i;
                        if (p_25)
                            break;
                        if (p_25)
                            break;
                        g_63[l_373] = l_375[7];
                        (*l_377) = l_376[3][4];
                    }
                    if (p_25)
                        break;
                }
            }
            for (g_33.f2 = 24; (g_33.f2 < 16); --g_33.f2)
            {
                long long l_392[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_392[i] = 0xE2643B97613D9BD2LL;
                (*l_28) = ((*l_28) < (safe_add_func_uint32_t_u_u(((void*)0 == l_382), ((g_33.f2 , func_43(((safe_rshift_func_uint16_t_u_s(((safe_lshift_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((l_389[1] != 0x5F1730C2L), ((safe_add_func_int64_t_s_s((p_25 , (((((l_392[1] >= 18446744073709551609UL) > g_33.f2) > (-4L)) > p_25) <= p_25)), 0xDE66226C7B5BE34ELL)) , g_344))) && p_25), 7)) == 0xF8L), 15)) ^ p_25), (*g_116), l_393, l_394, l_395)) >= (*l_28)))));
            }
        }
        (*l_28) = 0x3267C153L;
        (*l_256) = &l_354[5][1][2];
    }
    return g_49;
}







static union U1 func_29(int * p_30, char p_31, int p_32)
{
    union U0 l_228[9] = {{0xDF58L},{-9L},{-9L},{0xDF58L},{-9L},{-9L},{0xDF58L},{-9L},{-9L}};
    int **l_229 = &g_63[6];
    union U1 l_230[2][7][9] = {{{{0xE3F9F1B8L},{-1L},{3L},{0L},{0x931CDDB0L},{5L},{0xB30FA0B9L},{7L},{0x77A379C2L}},{{-8L},{0xB30FA0B9L},{0xA4A3F30FL},{0x81AEEA3CL},{0xFA449448L},{0L},{1L},{1L},{0L}},{{1L},{-3L},{-1L},{0xA4A3F30FL},{0xBF38DE2DL},{0L},{0x19326E76L},{0xD4BA9269L},{1L}},{{0xE3F9F1B8L},{1L},{1L},{0xA4A3F30FL},{-1L},{0xE3F9F1B8L},{-1L},{0xB30FA0B9L},{0xA6261B05L}},{{0xBEB8739EL},{0xDBA2F451L},{0x77A379C2L},{0x81AEEA3CL},{0x81AEEA3CL},{0x77A379C2L},{0xDBA2F451L},{0xBEB8739EL},{-1L}},{{-4L},{1L},{0x8175E35AL},{-1L},{0xDBA2F451L},{0xB0444179L},{7L},{0x8175E35AL},{0x46F2252DL}},{{0x53BF83E0L},{0x8175E35AL},{0xA6261B05L},{-1L},{-8L},{0L},{-1L},{-1L},{-1L}}},{{{0x81AEEA3CL},{7L},{0x62998B48L},{1L},{3L},{0x76D7A650L},{-1L},{0xD4BA9269L},{0xA6261B05L}},{{0x2C595F62L},{-1L},{0x81AEEA3CL},{0L},{0x76D7A650L},{1L},{-8L},{-1L},{1L}},{{0xBEB8739EL},{0x3C5B25C9L},{-4L},{-1L},{0x76D7A650L},{0x46F2252DL},{1L},{-1L},{0L}},{{0x77A379C2L},{0L},{0x8175E35AL},{0x7F957770L},{3L},{0x7F957770L},{0x8175E35AL},{0L},{0x77A379C2L}},{{1L},{-1L},{0xD4BA9269L},{-1L},{-1L},{3L},{1L},{0xBEB8739EL},{0xFA449448L}},{{1L},{0xF94E82CDL},{0x931CDDB0L},{-4L},{0x4D75D991L},{1L},{0xCADEF5C6L},{0x46F2252DL},{0x2B62957EL}},{{0xBF38DE2DL},{-1L},{1L},{0x931CDDB0L},{0x2C595F62L},{7L},{0x3C5B25C9L},{0xFA449448L},{0x46F2252DL}}}};
    int i, j, k;
    (*l_229) = (l_228[7] , &p_32);
    (*p_30) = (*p_30);
    (*p_30) = (!(*p_30));
    return l_230[1][4][5];
}







static unsigned short func_36(int p_37, int * p_38)
{
    unsigned char l_218 = 1UL;
    union U1 l_219[3] = {{0x29015B96L},{0x29015B96L},{0x29015B96L}};
    int **l_221 = &g_63[0];
    union U1 l_222 = {0xD043E5B9L};
    char *l_223[1][10][10] = {{{&g_3,&g_3,(void*)0,(void*)0,(void*)0,&g_3,&g_3,(void*)0,&g_3,&g_3},{(void*)0,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,&g_3,(void*)0},{&g_3,&g_3,&g_3,&g_3,(void*)0,&g_3,&g_3,&g_3,(void*)0,&g_3},{&g_3,&g_3,&g_3,&g_3,(void*)0,&g_3,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_3,&g_3,&g_3,&g_3,(void*)0,&g_3,(void*)0,&g_3,&g_3},{&g_3,&g_3,&g_3,&g_3,(void*)0,&g_3,&g_3,&g_3,&g_3,(void*)0},{&g_3,&g_3,&g_3,&g_3,&g_3,(void*)0,(void*)0,&g_3,&g_3,(void*)0},{(void*)0,(void*)0,(void*)0,&g_3,(void*)0,&g_3,&g_3,&g_3,&g_3,&g_3},{&g_3,(void*)0,&g_3,(void*)0,&g_3,&g_3,&g_3,(void*)0,&g_3,&g_3},{&g_3,(void*)0,&g_3,&g_3,&g_3,&g_3,(void*)0,&g_3,&g_3,&g_3}}};
    unsigned char l_224 = 0x57L;
    union U2 l_225 = {-1L};
    int **l_226 = (void*)0;
    int *l_227 = &g_33.f1;
    int i, j, k;
    for (g_33.f0 = 5; (g_33.f0 >= 1); g_33.f0 -= 1)
    {
        int l_209 = 1L;
        union U2 **l_210 = (void*)0;
        union U2 *l_212 = &g_81;
        union U2 **l_211 = &l_212;
        int i;
        l_209 = (safe_add_func_int16_t_s_s(g_81.f0, (g_49.f0 && p_37)));
        if (l_209)
            continue;
        (*l_211) = ((!0xBD7E3A37L) , &g_81);
        for (p_37 = 0; (p_37 <= 8); p_37 += 1)
        {
            unsigned char l_215 = 2UL;
            unsigned short l_220 = 8UL;
            int i;
            l_220 = (func_43((safe_mod_func_int64_t_s_s(((l_215 != l_215) ^ g_49.f0), (safe_sub_func_uint16_t_u_u((7UL | p_37), 0x836CL)))), (**g_115), (l_218 , l_219[1]), p_37, g_81) != l_219[1].f0);
        }
    }
    (*l_221) = &g_18;
    (*l_227) = ((((l_218 || (p_37 && ((&g_63[7] != (((func_43(l_218, l_222, l_219[1], func_43(l_224, l_219[1], l_219[2], g_49.f0, l_225), g_81) | 0xACB4F6E9D70C3564LL) , p_37) , l_226)) ^ g_3))) | l_219[1].f0) < g_81.f0) , (*p_38));
    return g_49.f0;
}







static int func_39(int p_40, unsigned p_41, char * p_42)
{
    union U1 l_84[10][10] = {{{0L},{2L},{-1L},{0L},{0L},{1L},{0x94A57C39L},{0xFCEF8C34L},{-1L},{0x102817ACL}},{{0x94A57C39L},{0L},{-1L},{0L},{-1L},{0xFCEF8C34L},{-8L},{0xBE66BFFEL},{0L},{0x5370A27EL}},{{1L},{-1L},{0L},{1L},{-8L},{0x2E340D7EL},{1L},{-1L},{1L},{0x2E340D7EL}},{{0L},{0x2E340D7EL},{-1L},{0x2E340D7EL},{0L},{1L},{0x5370A27EL},{0x26432604L},{0xAB02DA2EL},{0xE9126721L}},{{0x26432604L},{0xBE66BFFEL},{0L},{0L},{1L},{-8L},{0L},{6L},{1L},{0xE9126721L}},{{1L},{0L},{-1L},{0x715E5E7DL},{0L},{7L},{0xFCEF8C34L},{-7L},{6L},{0x2E340D7EL}},{{-1L},{-4L},{0x5370A27EL},{0xAB02DA2EL},{0xBE66BFFEL},{2L},{2L},{0xBE66BFFEL},{0xAB02DA2EL},{6L}},{{-7L},{-7L},{1L},{0L},{0L},{0x35B3423BL},{0L},{0x5370A27EL},{2L},{1L}},{{0x26432604L},{1L},{-5L},{-4L},{0x94A57C39L},{0L},{0L},{1L},{1L},{0xCEB5E7B3L}},{{1L},{-7L},{-1L},{0x102817ACL},{1L},{-1L},{2L},{0x26432604L},{0L},{0L}}};
    int l_95 = 1L;
    const char *l_99[4];
    int l_101[5];
    union U2 l_130 = {-7L};
    unsigned l_175 = 0xFCDE767DL;
    const unsigned short l_181[2] = {0x37C6L,0x37C6L};
    long long l_187 = (-5L);
    int i, j;
    for (i = 0; i < 4; i++)
        l_99[i] = &g_3;
    for (i = 0; i < 5; i++)
        l_101[i] = 1L;
    for (g_33.f4 = (-6); (g_33.f4 == 21); g_33.f4 = safe_add_func_int16_t_s_s(g_33.f4, 4))
    {
        const int *l_67 = &g_18;
        const int **l_68 = &l_67;
        unsigned char l_80 = 8UL;
        union U1 l_82 = {-5L};
        union U2 l_83[6] = {{-8L},{-8L},{-8L},{-8L},{-8L},{-8L}};
        char l_145 = 0xC7L;
        unsigned short l_203 = 8UL;
        int *l_206 = &l_101[3];
        int i;
        (*l_68) = l_67;
        if (((p_41 && (safe_sub_func_uint8_t_u_u(g_33.f2, g_3))) , ((safe_rshift_func_int16_t_s_s((func_43(func_43((safe_mod_func_int16_t_s_s(((*l_67) && ((safe_sub_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u((func_43((g_49 , (g_49.f0 && (safe_mul_func_uint16_t_u_u(p_40, (0x07F0789CDEE7B07ELL != (**l_68)))))), g_49, g_49, l_80, g_81) & 1UL))), 0L)) | 0x236CL)), 0x2AC6L)), g_49, l_82, p_40, l_83[3]), l_84[5][6], l_84[3][7], g_33.f4, l_83[4]) , g_81.f0), 6)) > (*l_67))))
        {
            int l_87 = 0x79244252L;
            int *l_88 = &l_87;
            char *l_98 = &g_3;
            union U1 l_100 = {0xC345E11DL};
            union U1 *l_103[9][4][4];
            union U1 **l_102 = &l_103[1][1][3];
            int i, j, k;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 4; j++)
                {
                    for (k = 0; k < 4; k++)
                        l_103[i][j][k] = &l_84[5][6];
                }
            }
            (*l_88) = ((safe_mod_func_uint16_t_u_u((1UL | 1L), (*l_67))) <= (((g_81.f0 , (l_84[5][6].f0 > ((g_18 != (p_40 , (**l_68))) && 0UL))) || l_84[5][6].f0) & l_87));
            (*l_88) = ((safe_rshift_func_int16_t_s_s(((+(safe_lshift_func_int16_t_s_u(g_33.f0, (~(((&l_87 != (((*l_88) ^ (safe_lshift_func_uint16_t_u_s(((func_43((l_95 && (safe_mul_func_int8_t_s_s((((-1L) < ((*l_67) & l_95)) & ((l_98 != ((+((((((*l_67) , p_40) > 18446744073709551606UL) , p_40) && 0x7EL) >= (*l_88))) , l_99[0])) ^ (*l_88))), l_95))), l_100, g_49, g_3, g_81) , p_41) < g_18), p_41))) , &g_18)) != 9UL) | l_84[5][6].f0))))) ^ l_101[3]), p_41)) && l_101[3]);
            (*l_102) = &l_100;
            for (l_87 = 0; (l_87 < (-23)); l_87 = safe_sub_func_uint32_t_u_u(l_87, 4))
            {
                int *l_109[6][10][4] = {{{&l_101[3],&l_101[3],&g_33.f1,&l_101[0]},{(void*)0,&l_95,(void*)0,&l_95},{(void*)0,&l_101[0],&g_33.f1,&l_101[3]},{&l_101[3],&l_95,&g_33.f1,&g_33.f1},{(void*)0,&l_101[3],(void*)0,&l_101[3]},{(void*)0,&g_33.f1,&g_33.f1,&l_95},{&l_101[3],&l_101[3],&g_33.f1,&l_101[0]},{(void*)0,&l_95,(void*)0,&l_95},{(void*)0,&l_101[0],&g_33.f1,&l_101[3]},{&l_101[3],&l_95,&g_33.f1,&g_33.f1}},{{(void*)0,&l_101[3],(void*)0,&l_101[3]},{(void*)0,&g_33.f1,&g_33.f1,&l_95},{&l_101[3],&l_101[3],&g_33.f1,&l_101[0]},{(void*)0,&l_95,(void*)0,&l_95},{(void*)0,&l_101[0],&g_33.f1,&l_101[3]},{&l_101[3],&l_95,&g_33.f1,&g_33.f1},{(void*)0,&l_101[3],(void*)0,&l_101[3]},{(void*)0,&g_33.f1,&g_33.f1,&l_95},{&l_101[3],&l_101[3],&g_33.f1,&l_101[0]},{(void*)0,&l_95,(void*)0,&l_95}},{{(void*)0,&l_101[0],&g_33.f1,&l_101[3]},{&l_101[3],&l_95,&g_33.f1,&g_33.f1},{(void*)0,&l_101[3],(void*)0,&l_101[3]},{(void*)0,&g_33.f1,&g_33.f1,&l_95},{&l_101[3],&l_101[3],&g_33.f1,&l_101[0]},{(void*)0,&l_95,(void*)0,&l_95},{(void*)0,&l_101[0],&g_33.f1,&l_101[3]},{&l_101[3],&l_95,&g_33.f1,&g_33.f1},{(void*)0,&l_101[3],(void*)0,&l_101[3]},{(void*)0,&g_33.f1,&g_33.f1,&l_95}},{{&l_101[3],&l_101[3],&g_33.f1,&l_101[0]},{(void*)0,&l_95,(void*)0,&l_95},{(void*)0,&l_101[0],&g_33.f1,&l_101[3]},{&l_101[3],&l_95,&g_33.f1,&g_33.f1},{(void*)0,&l_101[3],(void*)0,&l_101[3]},{(void*)0,&g_33.f1,&g_33.f1,&l_95},{&l_101[3],&l_101[3],(void*)0,&l_87},{&l_101[3],&g_33.f1,&l_87,&g_33.f1},{&l_101[3],&l_87,(void*)0,&l_101[0]},{&l_87,&g_33.f1,(void*)0,&g_18}},{{&l_101[3],&l_101[0],&l_87,&l_101[0]},{&l_101[3],&g_18,(void*)0,&g_33.f1},{&l_87,&l_101[0],(void*)0,&l_87},{&l_101[3],&g_33.f1,&l_87,&g_33.f1},{&l_101[3],&l_87,(void*)0,&l_101[0]},{&l_87,&g_33.f1,(void*)0,&g_18},{&l_101[3],&l_101[0],&l_87,&l_101[0]},{&l_101[3],&g_18,(void*)0,&g_33.f1},{&l_87,&l_101[0],(void*)0,&l_87},{&l_101[3],&g_33.f1,&l_87,&g_33.f1}},{{&l_101[3],&l_87,(void*)0,&l_101[0]},{&l_87,&g_33.f1,(void*)0,&g_18},{&l_101[3],&l_101[0],&l_87,&l_101[0]},{&l_101[3],&g_18,(void*)0,&g_33.f1},{&l_87,&l_101[0],(void*)0,&l_87},{&l_101[3],&g_33.f1,&l_87,&g_33.f1},{&l_101[3],&l_87,(void*)0,&l_101[0]},{&l_87,&g_33.f1,(void*)0,&g_18},{&l_101[3],&l_101[0],&l_87,&l_101[0]},{&l_101[3],&g_18,(void*)0,&g_33.f1}}};
                int i, j, k;
                for (p_41 = (-11); (p_41 <= 56); p_41 = safe_add_func_int32_t_s_s(p_41, 6))
                {
                    int *l_108 = &l_101[0];
                    (*l_108) = (*l_88);
                    (*l_68) = l_109[3][2][2];
                }
                l_101[4] = (safe_mul_func_uint16_t_u_u((safe_sub_func_uint64_t_u_u(((safe_unary_minus_func_uint16_t_u(g_33.f0)) >= (0xD41463B2L || 4294967295UL)), (((*l_88) | p_41) >= g_33.f2))), (g_115 != (void*)0)));
                for (l_95 = 0; (l_95 > (-18)); l_95 = safe_sub_func_int32_t_s_s(l_95, 3))
                {
                    unsigned l_119 = 2UL;
                    l_119 = ((&l_109[3][1][3] != &l_109[3][2][2]) , p_41);
                    if (p_40)
                        continue;
                    for (p_40 = 1; (p_40 > (-14)); --p_40)
                    {
                        (*l_68) = &g_18;
                    }
                    return g_33.f4;
                }
                l_101[2] = p_41;
            }
        }
        else
        {
            int *l_131 = &g_18;
            union U2 l_153 = {0L};
            unsigned l_176[1];
            const union U1 l_179 = {0xACD49A5DL};
            int *l_188 = &l_101[2];
            int i;
            for (i = 0; i < 1; i++)
                l_176[i] = 0xAFED2E4DL;
            if ((((((((3L || ((safe_add_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(0x8BL, (**l_68))) , (safe_rshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((**l_68) < l_95), p_41)), 1))), (func_43((*l_67), l_82, (*g_116), p_41, l_130) , 0UL))) > (-3L))) || p_41) , 4294967295UL) , (*l_68)) == l_131) & p_40) & 0x6814D94109EAC814LL))
            {
                for (g_3 = 8; (g_3 >= 0); g_3 -= 1)
                {
                    int i;
                    l_131 = g_63[g_3];
                }
                (*l_68) = l_131;
            }
            else
            {
                union U0 l_140 = {1L};
                int l_170 = 0L;
                union U2 l_180 = {0xDC5B5BA2L};
                if (((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s((((void*)0 != &g_18) , (safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(((l_140 , (safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_s(0x1F77L, 10)), p_41))) <= l_145), ((safe_add_func_int8_t_s_s(5L, g_33.f0)) , ((safe_add_func_int64_t_s_s(((((void*)0 != &g_63[0]) , l_140.f0) > 255UL), (*l_131))) , 18446744073709551614UL)))), (*l_67)))), 1L)), l_95)) | 0xACC5E6FEL))
                {
                    union U1 l_168 = {0x3C4D6EFBL};
                    unsigned l_171[8][1][3] = {{{1UL,0x1A39021DL,1UL}},{{18446744073709551613UL,0x8D0EE85EL,18446744073709551613UL}},{{1UL,0x1A39021DL,1UL}},{{18446744073709551613UL,0x8D0EE85EL,18446744073709551613UL}},{{1UL,0x1A39021DL,1UL}},{{18446744073709551613UL,0x8D0EE85EL,18446744073709551613UL}},{{1UL,0x1A39021DL,1UL}},{{18446744073709551613UL,0x8D0EE85EL,18446744073709551613UL}}};
                    int i, j, k;
                    l_83[3].f0 = (((safe_mod_func_int16_t_s_s((l_140.f0 , p_41), p_40)) , g_33) , (safe_unary_minus_func_uint32_t_u((*l_67))));
                    for (l_140.f2 = 0; (l_140.f2 <= 8); l_140.f2 += 1)
                    {
                        unsigned long long l_163 = 0xA22EE4FF998B9776LL;
                        union U2 l_169 = {-1L};
                        int i;
                    }
                }
                else
                {
                    int *l_172[2][3][3] = {{{&l_101[2],(void*)0,&l_101[2]},{&l_101[3],&g_33.f1,&l_101[3]},{&l_101[3],&l_101[3],&g_33.f1}},{{&l_101[2],&g_33.f1,&g_33.f1},{&g_33.f1,(void*)0,&l_101[3]},{&l_101[2],(void*)0,&l_101[2]}}};
                    int i, j, k;
                    l_83[3].f0 = (g_33.f2 && (**l_68));
                }
                if ((p_40 , (((((*l_131) ^ ((((safe_lshift_func_int8_t_s_s(l_175, (((65528UL || (func_43(l_176[0], (**g_115), ((safe_rshift_func_int8_t_s_s(((l_179 , ((&l_170 != (void*)0) != p_41)) && (**l_68)), 5)) , l_82), l_101[3], l_180) & l_181[0])) >= p_40) > g_33.f0))) == 0UL) , &l_101[3]) == &g_18)) && 0L) || g_3) ^ p_40)))
                {
                    int *l_184 = &l_101[3];
                    (*l_68) = (void*)0;
                    for (g_3 = (-21); (g_3 < 27); g_3 = safe_add_func_int32_t_s_s(g_3, 6))
                    {
                        (*l_68) = &g_18;
                    }
                    (*l_68) = l_184;
                    if (p_40)
                        continue;
                }
                else
                {
                    for (l_175 = 0; (l_175 <= 0); l_175 += 1)
                    {
                        int i;
                        return l_176[l_175];
                    }
                }
                if (l_101[3])
                    continue;
                if (p_40)
                    continue;
            }
            (*g_115) = (*g_115);
            (*l_188) = ((safe_lshift_func_int16_t_s_u((l_101[3] < g_81.f0), 0)) , l_187);
        }
        if (((*g_115) == &l_84[5][6]))
        {
            union U1 l_189 = {1L};
            union U2 l_192 = {-7L};
            int *l_193 = &l_101[3];
            (*l_193) = func_43(p_41, l_189, (**g_115), (safe_rshift_func_int16_t_s_u(l_189.f0, g_33.f1)), l_192);
        }
        else
        {
            unsigned l_196 = 1UL;
            union U2 l_204 = {-5L};
            union U1 l_205 = {0x050764EFL};
            (*l_68) = (func_43(p_40, (**g_115), l_82, ((safe_lshift_func_uint8_t_u_u(l_196, 0)) > func_43((safe_mod_func_int64_t_s_s(l_95, (~func_43((safe_mul_func_int16_t_s_s(func_43(p_41, l_84[5][6], l_84[5][6], ((safe_rshift_func_uint16_t_u_u(l_203, g_3)) >= p_41), l_204), g_18)), l_205, l_205, p_41, g_81)))), (*g_116), l_84[5][7], p_41, l_83[4])), g_81) , &g_18);
        }
        (*l_206) = (-3L);
    }
    return g_3;
}







static unsigned func_43(int p_44, union U1 p_45, union U1 p_46, unsigned p_47, union U2 p_48)
{
    short l_54 = 0xAAF7L;
    int *l_55[10][2];
    int **l_62[3][3];
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_55[i][j] = (void*)0;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            l_62[i][j] = (void*)0;
    }
    p_44 = (g_33.f2 != ((safe_add_func_uint64_t_u_u(((l_54 <= g_33.f2) , (g_49.f0 & ((0UL > (+p_46.f0)) == g_49.f0))), g_49.f0)) >= 18446744073709551615UL));
    g_63[0] = (((-1L) == (safe_add_func_int32_t_s_s((((g_33 , ((safe_mul_func_int16_t_s_s(g_3, ((p_48.f0 >= 0xB1AB372CL) != ((+((&g_18 != &p_44) & (safe_sub_func_int16_t_s_s(((void*)0 == &g_18), g_18)))) & 0xBCA918CAL)))) ^ g_49.f0)) < p_46.f0) != 0x0C4096A604C9466BLL), g_3))) , (void*)0);
    return p_46.f0;
}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_33.f2, "g_33.f2", print_hash_value);
    transparent_crc(g_49.f0, "g_49.f0", print_hash_value);
    transparent_crc(g_81.f0, "g_81.f0", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_496.f0, "g_496.f0", print_hash_value);
    transparent_crc(g_496.f2, "g_496.f2", print_hash_value);
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_864, "g_864", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
