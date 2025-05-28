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



static int g_2 = 0x9B55BB2CL;
static int g_6 = (-7L);
static int *g_41[10][2][5] = {{{&g_6,(void*)0,&g_6,&g_6,&g_6},{&g_6,&g_6,(void*)0,&g_6,(void*)0}},{{&g_6,(void*)0,&g_2,&g_6,&g_6},{&g_6,&g_2,&g_6,&g_6,&g_6}},{{&g_2,(void*)0,&g_6,&g_2,&g_6},{(void*)0,&g_6,&g_6,(void*)0,&g_6}},{{&g_6,(void*)0,&g_6,&g_6,(void*)0},{&g_6,&g_6,&g_6,&g_6,&g_6}},{{(void*)0,&g_2,&g_2,&g_6,&g_6},{&g_2,&g_2,&g_6,&g_6,&g_2}},{{&g_6,&g_6,&g_6,&g_2,&g_2},{&g_6,&g_6,&g_6,(void*)0,&g_6}},{{&g_2,&g_2,&g_6,&g_6,&g_2},{&g_6,&g_2,(void*)0,&g_6,&g_6}},{{&g_6,&g_6,&g_6,(void*)0,&g_6},{(void*)0,&g_2,&g_6,&g_2,&g_6}},{{&g_6,&g_2,&g_2,&g_6,&g_6},{&g_6,&g_6,&g_6,&g_6,&g_2}},{{&g_6,&g_6,&g_6,&g_6,&g_6},{&g_6,&g_2,(void*)0,&g_6,&g_2}}};
static int **g_71 = (void*)0;
static int ***g_70 = &g_71;
static unsigned g_93[3] = {0xD0EC541CL,0xD0EC541CL,0xD0EC541CL};
static short g_221 = 0L;
static char g_256 = 1L;
static int g_270 = (-10L);
static int *g_269[8] = {&g_270,&g_270,&g_270,&g_270,&g_270,&g_270,&g_270,&g_270};
static unsigned short g_288[1] = {0UL};
static unsigned char g_302 = 0UL;
static const int *g_351 = &g_270;
static unsigned g_394 = 4294967295UL;
static long long g_544 = 8L;
static int *g_551 = &g_6;
static int g_760 = 1L;
static int *g_819 = (void*)0;
static int *g_851 = (void*)0;
static int g_965 = 4L;
static int g_1014 = 0L;
static unsigned char g_1015[2][9] = {{1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL},{0xF4L,0xF4L,0xF4L,0xF4L,0xF4L,0xF4L,0xF4L,0xF4L,0xF4L}};



static unsigned char func_1(void);
static int * func_7(int * p_8, int * p_9, unsigned p_10, int * p_11);
static int * func_12(const short p_13, short p_14, int * p_15, unsigned char p_16);
static short func_18(int * p_19, char p_20, int p_21);
static char func_26(int * p_27, unsigned p_28, const long long p_29, unsigned short p_30);
static int * func_31(char p_32);
static char func_35(unsigned short p_36, unsigned p_37, const int p_38, int * p_39, int * p_40);
static unsigned short func_46(int * p_47, unsigned p_48, const unsigned p_49, const unsigned p_50, const long long p_51);
static int * func_52(unsigned char p_53, unsigned short p_54);
static long long func_55(int p_56, unsigned char p_57, int p_58, const int * p_59);
static unsigned char func_1(void)
{
    long long l_5[10][5][5] = {{{(-1L),1L,(-5L),0xF885EA6EDAD94E8FLL,0xF885EA6EDAD94E8FLL},{(-8L),(-9L),(-8L),(-1L),0xDAC842F88D96753FLL},{0xF885EA6EDAD94E8FLL,0x20B50F6B34C266D8LL,1L,(-1L),1L},{0xFBEBF0A0CD95FF79LL,0x82D564C7B7F609B2LL,2L,0L,0xDAC842F88D96753FLL},{1L,1L,1L,1L,1L}},{{0xDAC842F88D96753FLL,(-9L),0L,(-9L),(-1L)},{0xF885EA6EDAD94E8FLL,1L,0L,1L,0xF885EA6EDAD94E8FLL},{0L,0x82D564C7B7F609B2LL,(-8L),0x21C3A23FE5E81A7ELL,0xFBEBF0A0CD95FF79LL},{0xF885EA6EDAD94E8FLL,0x20B50F6B34C266D8LL,0x20B50F6B34C266D8LL,0xF885EA6EDAD94E8FLL,1L},{0xDAC842F88D96753FLL,0L,2L,0x82D564C7B7F609B2LL,0xFBEBF0A0CD95FF79LL}},{{1L,0xF885EA6EDAD94E8FLL,1L,1L,0xF885EA6EDAD94E8FLL},{0xFBEBF0A0CD95FF79LL,(-9L),(-1L),0x82D564C7B7F609B2LL,(-1L)},{(-1L),(-1L),0L,0xF885EA6EDAD94E8FLL,1L},{0L,(-9L),(-1L),0x21C3A23FE5E81A7ELL,0xDAC842F88D96753FLL},{1L,0x20B50F6B34C266D8LL,1L,1L,1L}},{{0x8358BD4DFBD6C3F0LL,(-9L),2L,(-9L),0x8358BD4DFBD6C3F0LL},{1L,(-1L),0x20B50F6B34C266D8LL,1L,(-1L)},{0x8358BD4DFBD6C3F0LL,(-9L),(-8L),0L,(-1L)},{1L,0xF885EA6EDAD94E8FLL,0L,(-1L),(-1L)},{0L,0L,0L,0x21C3A23FE5E81A7ELL,0x8358BD4DFBD6C3F0LL}},{{(-1L),0x20B50F6B34C266D8LL,1L,(-1L),1L},{0xFBEBF0A0CD95FF79LL,0x82D564C7B7F609B2LL,0x8358BD4DFBD6C3F0LL,0x21C3A23FE5E81A7ELL,0L},{0L,1L,1L,1L,1L},{0L,0x7528ACE4B0AD8EA5LL,2L,(-1L),0x2D0DA0BDBDF7CD95LL},{1L,1L,0xF885EA6EDAD94E8FLL,1L,1L}},{{2L,(-9L),1L,(-1L),(-8L)},{1L,(-5L),(-5L),1L,1L},{0L,0x21C3A23FE5E81A7ELL,0x8358BD4DFBD6C3F0LL,(-9L),(-8L)},{0L,1L,0L,1L,1L},{(-8L),0x7528ACE4B0AD8EA5LL,0x2D0DA0BDBDF7CD95LL,(-9L),0x2D0DA0BDBDF7CD95LL}},{{0x20B50F6B34C266D8LL,0x20B50F6B34C266D8LL,0xF885EA6EDAD94E8FLL,1L,1L},{2L,(-1L),0x2D0DA0BDBDF7CD95LL,(-1L),0L},{1L,(-5L),0L,1L,1L},{(-1L),(-1L),0x8358BD4DFBD6C3F0LL,(-1L),(-1L)},{0L,0x20B50F6B34C266D8LL,(-5L),1L,0x20B50F6B34C266D8LL}},{{(-1L),0x7528ACE4B0AD8EA5LL,1L,0x21C3A23FE5E81A7ELL,0x2D0DA0BDBDF7CD95LL},{1L,1L,0xF885EA6EDAD94E8FLL,0x20B50F6B34C266D8LL,0x20B50F6B34C266D8LL},{2L,0x21C3A23FE5E81A7ELL,2L,(-1L),(-1L)},{0x20B50F6B34C266D8LL,(-5L),1L,0x20B50F6B34C266D8LL,1L},{(-8L),(-9L),0x8358BD4DFBD6C3F0LL,0x21C3A23FE5E81A7ELL,0L}},{{0L,1L,(-5L),(-5L),1L},{(-1L),0L,0x2D0DA0BDBDF7CD95LL,0x21C3A23FE5E81A7ELL,1L},{0x20B50F6B34C266D8LL,1L,(-1L),1L,0x20B50F6B34C266D8LL},{0x2D0DA0BDBDF7CD95LL,(-1L),2L,0x7528ACE4B0AD8EA5LL,0L},{0x20B50F6B34C266D8LL,0L,0L,0x20B50F6B34C266D8LL,(-5L)}},{{(-1L),(-9L),0xFBEBF0A0CD95FF79LL,(-1L),0L},{1L,0x20B50F6B34C266D8LL,1L,(-5L),0x20B50F6B34C266D8LL},{0L,0L,1L,(-1L),1L},{1L,1L,(-1L),0x20B50F6B34C266D8LL,1L},{0x2D0DA0BDBDF7CD95LL,0x21C3A23FE5E81A7ELL,1L,0x7528ACE4B0AD8EA5LL,(-1L)}}};
    int *l_729 = &g_270;
    short l_751 = 2L;
    unsigned l_752 = 18446744073709551613UL;
    unsigned long long l_762 = 1UL;
    long long l_780 = 0x48EF3C954E47222BLL;
    unsigned long long l_783 = 0x379B6C12CCF7F852LL;
    unsigned l_817 = 18446744073709551606UL;
    unsigned char l_881[2];
    unsigned char l_910[10][10];
    const int l_959 = 0xE6CF253EL;
    int *l_994[5][4][6] = {{{(void*)0,(void*)0,&g_2,&g_2,&g_965,(void*)0},{&g_270,&g_270,&g_6,&g_270,&g_270,&g_270},{(void*)0,&g_760,&g_2,&g_760,&g_270,&g_760},{&g_6,&g_2,&g_760,&g_760,(void*)0,&g_760}},{{&g_965,&g_270,&g_2,&g_2,(void*)0,&g_270},{(void*)0,&g_270,&g_6,&g_6,&g_270,(void*)0},{&g_270,(void*)0,&g_2,&g_2,&g_270,&g_965},{&g_760,(void*)0,&g_760,&g_760,&g_2,&g_270}},{{&g_760,&g_760,&g_2,&g_965,&g_270,(void*)0},{&g_270,(void*)0,&g_6,&g_270,&g_6,(void*)0},{&g_270,&g_6,&g_760,&g_6,&g_2,&g_270},{&g_965,&g_965,&g_760,&g_270,(void*)0,&g_270}},{{&g_270,&g_965,&g_270,&g_2,&g_2,(void*)0},{(void*)0,&g_6,&g_2,&g_6,&g_6,&g_2},{(void*)0,(void*)0,&g_270,&g_760,&g_270,&g_2},{&g_270,&g_760,(void*)0,&g_760,&g_2,&g_270}},{{&g_270,&g_270,(void*)0,&g_270,(void*)0,&g_2},{(void*)0,&g_270,&g_270,&g_2,(void*)0,&g_2},{&g_2,(void*)0,&g_2,&g_270,&g_270,(void*)0},{&g_2,(void*)0,&g_270,(void*)0,&g_270,&g_270}}};
    const int **l_1021 = &g_351;
    const int ***l_1020 = &l_1021;
    const int ***l_1023 = &l_1021;
    int l_1034[1][4][1] = {{{0x6DE5AC7BL},{0x9009F542L},{0x6DE5AC7BL},{0x9009F542L}}};
    int l_1035 = 0x85776B3EL;
    long long l_1036 = 0x02015D5133F2A33FLL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_881[i] = 0xA7L;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
            l_910[i][j] = 0x4EL;
    }
    for (g_2 = (-9); (g_2 != (-3)); g_2 = safe_add_func_int8_t_s_s(g_2, 6))
    {
        const char l_17 = 0x44L;
        int *l_25 = &g_6;
        int l_730 = 0xF16AE047L;
        unsigned char l_733[8][9][2] = {{{6UL,255UL},{0x58L,255UL},{0x58L,255UL},{6UL,0xB8L},{255UL,0x07L},{0x54L,0xB2L},{255UL,0xC2L},{0xC2L,0xF2L},{255UL,0xE2L}},{{255UL,2UL},{0x58L,0x07L},{9UL,0x80L},{0xC5L,0xE2L},{0xB8L,0xCAL},{0x80L,0x58L},{0UL,0x11L},{255UL,255UL},{0UL,255UL}},{{4UL,9UL},{0xC2L,6UL},{0UL,255UL},{6UL,0x11L},{255UL,1UL},{0x80L,0xB8L},{0xCAL,0xE2L},{0xB2L,0xF9L},{9UL,2UL}},{{1UL,2UL},{9UL,0xF9L},{0xB2L,0xE2L},{0xCAL,0xB8L},{0x80L,1UL},{255UL,0x11L},{6UL,255UL},{0UL,6UL},{0xC2L,9UL}},{{4UL,255UL},{0UL,255UL},{255UL,0x11L},{0UL,0x58L},{0x80L,0xCAL},{0xB8L,0xE2L},{0xC5L,0x80L},{9UL,0x07L},{0x58L,2UL}},{{0UL,0x80L},{0xB2L,255UL},{0xB8L,0xB8L},{0xF9L,0x58L},{255UL,0xA7L},{255UL,255UL},{252UL,255UL},{0xC2L,0UL},{0xC2L,255UL}},{{252UL,255UL},{255UL,0xA7L},{255UL,0x58L},{0xCBL,1UL},{1UL,0x49L},{0x57L,0xF2L},{0xE2L,255UL},{0UL,0x7CL},{0xCAL,0xF2L}},{{0UL,0xF8L},{1UL,1UL},{0xF2L,0UL},{9UL,0UL},{0xA7L,0x5AL},{8UL,0xA7L},{0xBEL,0xCAL},{0xC5L,0xA7L},{8UL,4UL}}};
        unsigned long long l_776 = 18446744073709551614UL;
        int *l_816 = &g_2;
        int l_832 = 0xEAADA499L;
        unsigned short l_833[3];
        long long l_834 = 1L;
        const int *l_837 = &g_6;
        unsigned short l_863 = 0x3B53L;
        int l_958 = (-1L);
        int l_966[3];
        int l_1013 = 0x3A978AA9L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_833[i] = 0x6ED2L;
        for (i = 0; i < 3; i++)
            l_966[i] = (-1L);
        for (g_6 = 4; (g_6 >= 0); g_6 -= 1)
        {
            int *l_22[5][1][6] = {{{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}},{{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}},{{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}},{{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}},{{&g_6,&g_6,&g_6,&g_6,&g_6,&g_6}}};
            int i, j, k;
        }
    }
    for (g_544 = 4; (g_544 > (-19)); g_544--)
    {
        long long l_1022 = 1L;
        (*l_729) = ((+(g_394 || (safe_add_func_uint16_t_u_u(((l_994[2][0][2] == (void*)0) <= ((*l_729) & (&g_71 == l_1020))), g_1014)))) <= (-2L));
        if (l_1022)
            break;
    }
    (*l_729) = ((l_1023 == &l_1021) | (safe_rshift_func_uint16_t_u_s(0x4721L, (func_46(l_994[2][3][2], g_965, g_965, (safe_add_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((**l_1021), (safe_mul_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u((0x85L || (func_18(func_7(l_994[2][3][2], l_729, l_1034[0][1][0], l_729), l_1035, l_1036) ^ g_93[2])), 0UL)), g_6)))), g_256)), g_288[0]) & g_256))));
    return (***l_1023);
}







static int * func_7(int * p_8, int * p_9, unsigned p_10, int * p_11)
{
    int **l_728 = &g_41[4][0][4];
    (*l_728) = p_11;
    return &g_2;
}







static int * func_12(const short p_13, short p_14, int * p_15, unsigned char p_16)
{
    int *l_727[10] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
    int i;
    for (p_14 = 0; (p_14 <= 2); p_14 += 1)
    {
        for (g_270 = 0; g_270 < 10; g_270 += 1)
        {
            for (g_394 = 0; g_394 < 2; g_394 += 1)
            {
                for (g_302 = 0; g_302 < 5; g_302 += 1)
                {
                    g_41[g_270][g_394][g_302] = &g_6;
                }
            }
        }
        return l_727[6];
    }
    return &g_270;
}







static short func_18(int * p_19, char p_20, int p_21)
{
    const int ***l_725 = (void*)0;
    if ((l_725 == l_725))
    {
        int **l_726[4][4] = {{&g_551,&g_551,&g_551,&g_551},{&g_551,(void*)0,(void*)0,&g_551},{(void*)0,&g_551,(void*)0,(void*)0},{&g_551,&g_551,&g_551,&g_551}};
        int i, j;
        p_19 = p_19;
        return g_270;
    }
    else
    {
        return g_288[0];
    }
}







static char func_26(int * p_27, unsigned p_28, const long long p_29, unsigned short p_30)
{
    const unsigned short l_600 = 0UL;
    int *l_601[2][8] = {{&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2,&g_2},{&g_2,&g_2,&g_270,&g_2,&g_2,&g_270,&g_2,&g_2}};
    long long l_602 = 0L;
    int l_603 = 1L;
    unsigned long long l_604 = 0x8BF2593D2F1A8A1DLL;
    char l_615 = 3L;
    long long l_634[4];
    char l_661 = 0x34L;
    int *l_711[2][1];
    int i, j;
    for (i = 0; i < 4; i++)
        l_634[i] = 0x3A94C0811D01AF37LL;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_711[i][j] = &g_270;
    }
    l_602 = (*g_551);
    l_604 = l_603;
    if (p_30)
    {
        unsigned short l_607 = 1UL;
        int l_608 = 0x46572399L;
        short l_609[8] = {3L,3L,3L,3L,3L,3L,3L,3L};
        int *l_610 = &l_608;
        int **l_674[2][1];
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_674[i][j] = &g_269[7];
        }
        l_608 = ((p_29 || (safe_add_func_uint32_t_u_u(g_221, g_2))) || func_46(&g_2, p_29, (g_302 ^ l_607), ((!((l_607 | l_607) == g_93[2])) >= g_256), p_28));
        l_610 = p_27;
        if (((p_30 == (safe_mod_func_int8_t_s_s((g_221 > g_270), ((safe_mul_func_uint16_t_u_u((p_29 >= p_28), ((p_29 > (func_55(l_609[6], g_270, l_609[4], &l_608) <= p_30)) <= g_221))) | g_394)))) <= l_607))
        {
            g_41[6][0][3] = p_27;
        }
        else
        {
            char l_616 = 0x5DL;
            int l_639 = 0x3BD0E6F7L;
            int ***l_651[1][6] = {{(void*)0,&g_71,&g_71,(void*)0,&g_71,&g_71}};
            int *l_668 = &g_270;
            int i, j;
            if (l_616)
            {
                int l_631 = 0L;
                int l_640[5][4] = {{0x51A70C23L,1L,(-3L),0x51A70C23L},{(-1L),1L,(-1L),(-3L)},{0xA4306EE2L,1L,(-1L),0x51A70C23L},{1L,1L,1L,1L},{(-1L),0x51A70C23L,1L,(-3L)}};
                int *** const l_652 = &g_71;
                unsigned short l_671 = 0x3B40L;
                int i, j;
                if ((((safe_lshift_func_int16_t_s_s(g_221, (p_27 == (void*)0))) != (p_30 == g_270)) > (((safe_mod_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u(l_616, (safe_add_func_int16_t_s_s(p_28, (((safe_mul_func_int8_t_s_s(g_256, (g_288[0] ^ l_631))) > p_29) <= 0xF1L))))), (*g_551))) > p_28), 5)), g_394)) & 0xBDL) | 0x3352L)))
                {
                    int **l_635 = &l_601[0][6];
                    l_634[3] = (safe_rshift_func_int8_t_s_s(((*g_70) == (void*)0), 7));
                    (*l_635) = p_27;
                }
                else
                {
                    return g_302;
                }
                if (l_616)
                {
                    int l_638[5][3] = {{5L,1L,3L},{1L,0x8D30D498L,1L},{1L,5L,0x8D30D498L},{5L,1L,1L},{0x8D30D498L,1L,3L}};
                    int i, j;
                    if ((g_544 || 1L))
                    {
                        char l_636 = 1L;
                        int **l_637 = &g_269[2];
                        (*l_637) = func_31(l_636);
                    }
                    else
                    {
                        (*g_70) = (*g_70);
                        l_638[2][0] = (*g_551);
                    }
                    l_639 = 0xF6392D8AL;
                }
                else
                {
                    for (l_639 = 0; l_639 < 8; l_639 += 1)
                    {
                        g_269[l_639] = &g_6;
                    }
                    for (g_270 = 6; (g_270 >= 2); g_270 -= 1)
                    {
                        int i;
                        (*g_70) = &g_269[(g_270 + 1)];
                        l_640[0][2] = l_631;
                        (*g_71) = p_27;
                    }
                }
                for (p_30 = 18; (p_30 <= 32); p_30 = safe_add_func_int16_t_s_s(p_30, 1))
                {
                    int * const l_645[7] = {&g_270,&g_270,&g_6,&g_270,&g_270,&g_6,&g_270};
                    int *** const l_653 = &g_71;
                    int i;
                    for (l_607 = 0; (l_607 == 12); l_607++)
                    {
                        int **l_646 = &l_601[0][7];
                        (*l_646) = l_645[3];
                        l_608 = (safe_rshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_s((((void*)0 != l_646) || (-2L)), 13)) ^ (l_651[0][4] != (void*)0)), 4));
                        if (l_640[0][2])
                            continue;
                        l_661 = ((l_640[0][2] >= (g_256 != (-1L))) && ((g_2 <= 0xDC28ED8C8D3D7506LL) == g_544));
                    }
                    g_41[4][0][2] = p_27;
                    l_608 = (safe_sub_func_int16_t_s_s(p_30, p_30));
                }
                (*l_668) = (safe_mod_func_uint32_t_u_u(7UL, ((safe_mod_func_uint64_t_u_u(((void*)0 != p_27), ((l_668 != (void*)0) ^ (safe_sub_func_int32_t_s_s((*g_551), l_671))))) | (&p_27 != (void*)0))));
            }
            else
            {
                g_269[2] = p_27;
                (*l_668) = (((0xF015D793L || (safe_rshift_func_uint8_t_u_u((0xE7L != 0UL), 4))) == (*l_668)) > ((-2L) & 1L));
                p_27 = l_601[0][2];
            }
            g_269[3] = l_601[0][6];
            (*l_668) = ((0x4EEA24B4L == g_93[2]) <= g_221);
            (*g_70) = &l_601[0][0];
        }
        g_269[2] = p_27;
    }
    else
    {
        int *l_677 = &g_270;
        unsigned l_697 = 4294967291UL;
        const int l_708[7] = {0x12741C3AL,0x12741C3AL,0x12741C3AL,0x12741C3AL,0x12741C3AL,0x12741C3AL,0x12741C3AL};
        int *l_709 = &g_270;
        int **l_710[8];
        const long long l_724 = (-9L);
        int i;
        for (i = 0; i < 8; i++)
            l_710[i] = &l_601[0][6];
        for (l_603 = 0; (l_603 >= 3); l_603 = safe_add_func_int32_t_s_s(l_603, 5))
        {
            int **l_678 = (void*)0;
            int l_681 = 1L;
            int *l_689 = &g_270;
            g_551 = l_677;
            for (l_602 = 0; (l_602 <= 1); l_602 += 1)
            {
                const int * const l_679 = &g_2;
                int l_683 = (-1L);
            }
        }
        p_27 = l_709;
        p_27 = l_711[1][0];
        (*l_709) = ((safe_rshift_func_int8_t_s_s((safe_mul_func_int16_t_s_s(g_544, ((((safe_sub_func_int64_t_s_s((p_30 | (safe_mod_func_int8_t_s_s(((void*)0 == &l_601[0][7]), p_28))), (safe_sub_func_int64_t_s_s(g_544, g_288[0])))) != 1UL) >= g_93[2]) == p_30))), p_29)) | 0UL);
    }
    return p_28;
}







static int * func_31(char p_32)
{
    int l_397 = 0x4C0364BAL;
    unsigned long long l_402 = 2UL;
    int *l_403 = &g_2;
    int ***l_414 = (void*)0;
    int *l_428 = (void*)0;
    unsigned char l_467 = 0x99L;
    int **l_477[2][5][5] = {{{&g_269[2],&l_403,&g_41[6][0][3],(void*)0,&g_269[2]},{&l_403,(void*)0,&g_41[6][0][3],&l_428,&g_41[6][0][3]},{&l_403,&l_403,&g_41[6][0][3],&g_269[5],&l_403},{&l_403,&g_41[6][0][3],&g_41[6][0][3],&g_41[6][0][3],&l_428},{&g_269[3],&g_41[8][1][4],&l_403,&g_269[2],&l_403}},{{(void*)0,&l_403,&g_41[6][0][3],&l_403,(void*)0},{(void*)0,&g_41[6][0][3],&l_403,&g_41[6][0][3],(void*)0},{(void*)0,&l_403,&g_269[2],(void*)0,&g_41[6][0][3]},{&l_403,&g_41[6][0][3],(void*)0,&g_269[2],&l_403},{&g_269[2],(void*)0,&g_41[6][0][3],&l_403,&g_41[6][0][3]}}};
    long long l_492 = (-1L);
    int *l_522 = &g_270;
    long long l_545 = 0x47A1AA12C0FB51F4LL;
    int *l_597 = (void*)0;
    int i, j, k;
    for (p_32 = 0; (p_32 >= 20); p_32 = safe_add_func_uint32_t_u_u(p_32, 3))
    {
        int l_400 = (-1L);
        int * const l_401 = (void*)0;
        const int **l_448 = &g_351;
        const int ***l_447 = &l_448;
        unsigned l_455 = 0x6712F5CCL;
        int *l_460 = (void*)0;
    }
    g_269[3] = l_428;
    for (l_402 = 18; (l_402 > 33); l_402 = safe_add_func_int8_t_s_s(l_402, 8))
    {
        int **l_491 = &g_269[2];
        unsigned short l_493[9][5][5] = {{{0x8218L,0x6C75L,0x070DL,0xCDD3L,0x12E5L},{65535UL,0xF729L,0x3EF6L,65535UL,0x87B7L},{65535UL,8UL,0xCDD3L,0xDB1FL,1UL},{8UL,0x3EF6L,0x8397L,0xD0DCL,0UL},{8UL,0x3A62L,0xCA9FL,0xFADCL,0x586AL}},{{0x9DCCL,0UL,0xE688L,0UL,0x9DCCL},{0x070DL,2UL,0x4096L,0xC446L,0x2400L},{0xB5D7L,0x1A99L,0x9DCCL,0x7AAAL,0x1CA6L},{0x241DL,0x586AL,2UL,2UL,0x2400L},{0x0190L,0x7AAAL,0x87B7L,0xA0FFL,0x9DCCL}},{{0x2400L,65529UL,8UL,65534UL,0x586AL},{0x87B7L,65527UL,65535UL,2UL,0UL},{65535UL,0x6BA2L,1UL,2UL,1UL},{0x8397L,0x8397L,65527UL,0x1CA6L,0x87B7L},{0x920EL,0x6BA2L,0x241DL,0x4096L,0x8218L}},{{0xB5D7L,0x0190L,2UL,65527UL,65535UL},{0xC446L,0x6BA2L,0x9124L,0x6C75L,65535UL},{0x1CA6L,0xA0F0L,0x3EF6L,1UL,8UL},{0x12E5L,5UL,0x4096L,0x16D1L,8UL},{1UL,0xD0DCL,65535UL,0xE00DL,0x9DCCL}},{{0x920EL,1UL,1UL,0x920EL,0x070DL},{0UL,0x9DCCL,8UL,65535UL,0xB5D7L},{0x6BA2L,0x16D1L,65529UL,0x2400L,0x241DL},{65535UL,0x1A05L,0xAEC5L,65535UL,0x0190L},{65535UL,0x12E5L,0xFADCL,0x920EL,0x2400L}},{{0x9DCCL,65535UL,0x7AAAL,0xE00DL,0x87B7L},{0UL,65535UL,0x56E0L,0x16D1L,65535UL},{65535UL,0x8397L,1UL,1UL,0x8397L},{0x8218L,65534UL,0x3A62L,0x6C75L,0x920EL},{0xE688L,0UL,65535UL,65527UL,0xAEC5L}},{{0x6DF2L,0xCA9FL,0x12E5L,0x4096L,2UL},{0xE688L,65535UL,0x87B7L,0xF729L,65535UL},{0x8218L,0x8643L,1UL,0xC446L,2UL},{65535UL,0x7AAAL,0x1A99L,0xB5D7L,1UL},{65529UL,2UL,0x16D1L,0x920EL,0x920EL}},{{0x2E37L,65528UL,0x2E37L,0x3EF6L,0UL},{0xDB1FL,0x56E0L,0x586AL,0x8218L,0x6BA2L},{0x87B7L,0UL,0xF729L,0x2E37L,65535UL},{5UL,0x466DL,0x586AL,0x6BA2L,65535UL},{65535UL,8UL,0x2E37L,65535UL,0x9DCCL}},{{65535UL,0x586AL,0x16D1L,0x6C75L,0UL},{8UL,0UL,0x1A99L,0x1CA6L,65535UL},{0x8218L,7UL,0xCDD3L,7UL,0x8218L},{0xF729L,0x0376L,0xC2E8L,65528UL,0xE688L},{0x8643L,65529UL,0x8218L,0x12E5L,0x6DF2L}}};
        int l_494[5][9][2] = {{{0xDF2AB933L,5L},{0xBBD9EE1AL,0x3729C1D1L},{0xFFDF4332L,1L},{0xC4F4880AL,0x30E249D0L},{0L,0xC4F4880AL},{0x9E735578L,0x87D2E75FL},{0x4EC6BD21L,0xB8E01A15L},{0L,(-5L)},{0xB8E01A15L,1L}},{{0L,0x3AA1786AL},{0xBBD9EE1AL,0xDF2AB933L},{5L,0L},{0x5A85E445L,0L},{0xDF2AB933L,0xDF2AB933L},{(-8L),0x3729C1D1L},{0L,0x7B006082L},{0xC4F4880AL,(-5L)},{0L,0xC4F4880AL}},{{0x4EC6BD21L,0xFFDF4332L},{0xBBD9EE1AL,0x4EC6BD21L},{0x30E249D0L,0x5A85E445L},{0x4EC6BD21L,0x3AA1786AL},{0xC4F4880AL,0L},{0x7B006082L,0x03981F27L},{0x03981F27L,0x30E249D0L},{(-1L),(-5L)},{7L,0x03981F27L}},{{1L,0L},{0xC4F4880AL,0x3729C1D1L},{0x9E735578L,0x5A85E445L},{(-5L),0x9E735578L},{0xBBD9EE1AL,0L},{(-8L),0x4EC6BD21L},{(-5L),0x17948996L},{0x4EC6BD21L,0x3729C1D1L},{0xB8E01A15L,0L}},{{1L,7L},{0x03981F27L,(-5L)},{1L,(-5L)},{0x03981F27L,7L},{1L,0L},{0xB8E01A15L,0x3729C1D1L},{0x4EC6BD21L,0x17948996L},{(-5L),0x4EC6BD21L},{(-8L),0L}}};
        int *l_552 = &l_494[2][1][0];
        unsigned l_559 = 4294967293UL;
        int i, j, k;
        l_494[2][1][0] = (safe_mod_func_uint16_t_u_u(0x9FCBL, g_288[0]));
    }
    return l_597;
}







static char func_35(unsigned short p_36, unsigned p_37, const int p_38, int * p_39, int * p_40)
{
    int l_60 = 0xD4CCF97AL;
    const int l_314 = 0xBDCE8783L;
    unsigned char l_320 = 0x0FL;
    unsigned l_325 = 0UL;
    const int *l_392[10] = {&l_314,&l_314,&l_314,&l_314,&l_314,&l_314,&l_314,&l_314,&l_314,&l_314};
    unsigned long long l_393 = 0x720E1F1E102065E3LL;
    int i;
    if (((safe_mul_func_int8_t_s_s(((safe_mod_func_uint16_t_u_u(func_46(func_52((((&p_38 == &g_2) <= 0xD4ACL) != func_55(l_60, l_60, l_60, &g_2)), l_60), l_60, l_60, p_36, p_37), 0xEF15L)) > l_60), 0x2EL)) || p_37))
    {
        const int l_313 = (-3L);
        unsigned long long l_322 = 1UL;
        char l_323 = 7L;
        const int *l_324 = &g_270;
        if (((func_55(((void*)0 != &p_38), p_37, l_60, &l_60) < 0xEAE3068350E1AF0FLL) >= (((!(((((g_93[2] > (~func_46(p_39, g_288[0], g_270, l_313, l_314))) && p_38) && 5L) != 18446744073709551610UL) || (*p_39))) >= g_221) & l_313)))
        {
            long long l_315 = (-1L);
            if ((((((l_315 > ((safe_sub_func_uint16_t_u_u(g_270, (safe_mod_func_uint64_t_u_u(func_55(l_320, l_315, l_320, &g_2), l_315)))) != 0x43BC7034L)) >= g_93[2]) | g_288[0]) & (*l_324)) >= 0xA1L))
            {
                const int **l_326 = &l_324;
                (*l_326) = &p_38;
                for (l_315 = 0; (l_315 < (-25)); --l_315)
                {
                    int l_331 = 0xF8AAC8C8L;
                    long long l_335 = 0x8DAE7BCCAAA314B2LL;
                    if ((safe_mul_func_uint16_t_u_u(l_60, (l_331 == (((p_37 != (-4L)) > (4L && (g_93[0] && (safe_add_func_uint64_t_u_u(g_288[0], ((&l_324 == &l_324) >= g_302)))))) && 0L)))))
                    {
                        int l_334[5] = {1L,1L,1L,1L,1L};
                        int i;
                        (*l_326) = &p_38;
                        (*l_326) = &p_38;
                        (*l_326) = &p_38;
                    }
                    else
                    {
                        int *l_336 = &l_60;
                        (*l_336) = l_335;
                    }
                    for (l_60 = (-21); (l_60 < (-7)); ++l_60)
                    {
                        if ((*p_39))
                            break;
                    }
                }
                return g_302;
            }
            else
            {
                return p_36;
            }
        }
        else
        {
            unsigned l_344[7][5][1] = {{{0x6BBF49C7L},{0x269586FAL},{0xE877E8EFL},{18446744073709551615UL},{0xA82E066FL}},{{0x6BBF49C7L},{18446744073709551615UL},{0x581991CEL},{18446744073709551615UL},{0x6BBF49C7L}},{{0xA82E066FL},{18446744073709551615UL},{0xE877E8EFL},{0x269586FAL},{0x6BBF49C7L}},{{0x6BBF49C7L},{0x269586FAL},{0xE877E8EFL},{18446744073709551615UL},{0xA82E066FL}},{{0x6BBF49C7L},{18446744073709551615UL},{0x581991CEL},{18446744073709551615UL},{0x6BBF49C7L}},{{0xA82E066FL},{18446744073709551615UL},{0x269586FAL},{0UL},{0x581991CEL}},{{0x581991CEL},{0UL},{0x269586FAL},{18446744073709551615UL},{0x65DCFFCCL}}};
            int *l_357 = &l_60;
            int *** const l_360 = (void*)0;
            int *l_363 = &l_60;
            int i, j, k;
            l_324 = &l_314;
            for (l_323 = 0; (l_323 <= 7); l_323 += 1)
            {
                int *l_339 = &l_60;
                int **l_345 = &g_41[6][0][3];
                int i;
                (*l_339) = (*p_39);
                for (g_270 = 6; (g_270 >= 0); g_270 -= 1)
                {
                    const int **l_340 = &l_324;
                    (*l_340) = &p_38;
                    return g_288[0];
                }
                if ((*l_324))
                {
                    int **l_341 = &g_269[2];
                    int i;
                    (*l_339) = 0x4263EA80L;
                    (*l_341) = (void*)0;
                    for (l_322 = (-20); (l_322 < 34); l_322 = safe_add_func_int16_t_s_s(l_322, 6))
                    {
                        return p_36;
                    }
                }
                else
                {
                    for (g_256 = 0; (g_256 <= 7); g_256 += 1)
                    {
                        int i;
                        (*l_339) = l_344[0][0][0];
                    }
                    if (l_344[0][0][0])
                        break;
                    (*l_339) = (*p_39);
                }
                (*l_345) = (void*)0;
            }
            p_40 = (void*)0;
            if (l_320)
            {
                short l_346 = (-9L);
                const int **l_347 = &l_324;
                l_346 = ((*g_70) != (void*)0);
                (*l_347) = &p_38;
            }
            else
            {
                const int *l_348 = &g_270;
                int *l_362 = &l_60;
                const int **l_370 = &l_348;
                const int ***l_369 = &l_370;
                l_348 = &l_313;
                if (l_344[6][3][0])
                {
                    const int *l_350[2][3][8] = {{{&l_60,&l_314,&g_2,&l_60,&g_2,&g_6,&g_2,&l_60},{&l_313,&l_313,&l_313,&g_6,(void*)0,&l_60,&l_60,&g_2},{&g_270,&g_2,(void*)0,(void*)0,&l_313,&g_270,(void*)0,&l_314}},{{&g_270,&g_2,&g_270,(void*)0,(void*)0,(void*)0,(void*)0,&g_270},{&l_313,&l_313,(void*)0,&g_270,&g_2,&g_2,&g_6,&g_6},{&l_60,(void*)0,(void*)0,&g_2,&g_6,&l_314,&l_313,&g_6}}};
                    int i, j, k;
                    for (g_302 = 0; (g_302 <= 0); g_302 += 1)
                    {
                        const int **l_349[7] = {&l_348,&l_348,&l_348,&l_348,&l_348,&l_348,&l_348};
                        unsigned l_356 = 4294967287UL;
                        const int *l_361[6] = {&g_2,&g_2,&g_2,&g_2,&g_2,&g_2};
                        int i;
                        l_350[1][2][6] = &p_38;
                        g_351 = l_350[0][1][3];
                        (*l_357) = ((safe_mul_func_uint16_t_u_u(g_288[g_302], (safe_mod_func_uint8_t_u_u((l_356 | p_36), (((l_357 != &p_38) || (safe_lshift_func_uint16_t_u_s(p_36, 3))) && (*l_348)))))) || g_256);
                        g_351 = &p_38;
                    }
                }
                else
                {
                    if ((*l_324))
                    {
                        l_362 = &g_270;
                        l_363 = l_362;
                        return g_93[1];
                    }
                    else
                    {
                        return l_60;
                    }
                }
                if ((!(-1L)))
                {
                    const long long l_366 = 0x94B787659C021C2BLL;
                    int **l_367[6][5][5] = {{{&g_41[6][0][3],(void*)0,(void*)0,&g_41[6][0][3],&g_269[5]},{&g_41[1][1][0],&l_357,&g_269[0],&l_362,&l_363},{&g_269[4],&g_41[6][0][3],(void*)0,&g_41[2][0][0],(void*)0},{&g_269[2],&g_41[1][1][0],&l_362,&l_362,&g_41[1][1][0]},{(void*)0,&l_362,&g_269[2],&g_41[6][0][3],&g_41[6][0][3]}},{{&l_357,&g_41[6][0][3],&g_41[6][0][3],&l_362,&g_41[1][1][0]},{&g_41[2][0][0],&g_269[2],(void*)0,(void*)0,(void*)0},{&l_362,(void*)0,&l_362,&l_357,&l_357},{&g_41[6][0][3],&g_269[5],&g_41[6][0][3],&g_41[2][0][0],&g_269[2]},{&g_41[2][1][1],&l_362,&g_41[6][0][3],&g_41[6][0][3],&g_41[2][1][0]}},{{&l_357,&g_269[2],&g_41[6][0][3],&g_269[2],&l_357},{&l_362,&l_362,&l_362,&g_269[2],&g_41[6][0][3]},{&l_362,&l_357,(void*)0,&l_357,(void*)0},{&l_357,&l_362,&g_41[6][0][3],&l_362,&g_41[6][0][3]},{&l_357,&l_357,&g_269[5],(void*)0,&l_357}},{{&g_41[6][0][3],&g_41[1][1][0],&l_363,&g_41[6][0][3],&g_41[2][1][0]},{&g_41[6][0][3],&l_357,(void*)0,&g_269[2],&g_269[2]},{&g_269[2],&g_41[1][1][0],&g_41[1][1][0],&g_269[2],&l_357},{&l_357,&l_357,&g_41[6][0][3],&l_357,(void*)0},{&l_363,&l_362,&g_269[0],&l_357,&g_41[1][1][0]}},{{&l_357,&l_357,&l_357,&l_357,&l_357},{&g_41[2][1][0],&l_362,(void*)0,&g_269[2],&l_362},{&g_269[4],&g_269[2],&l_357,&g_269[2],&g_41[6][0][3]},{&l_362,&l_362,&l_357,&g_41[6][0][3],&g_41[6][0][3]},{&g_269[4],&g_269[5],&g_269[5],&g_41[6][0][3],&g_269[2]}},{{&l_362,&g_41[2][1][1],&g_269[2],&g_41[2][1][0],&l_357},{&l_357,&g_269[2],&g_269[4],&g_41[2][0][0],&l_357},{&l_357,&l_357,&g_269[2],&l_357,&l_357},{(void*)0,&g_41[6][0][3],&g_269[5],&g_41[6][0][3],&g_41[2][0][0]},{&l_357,&g_269[0],&g_41[1][1][0],&l_362,&l_363}}};
                    int i, j, k;
                    for (g_302 = 0; (g_302 <= 1); g_302 += 1)
                    {
                        unsigned long long l_365 = 0x921A87ACB2256ADFLL;
                        l_324 = &l_314;
                        (*l_363) = ((g_288[0] == func_46(p_40, l_365, l_366, g_302, p_38)) & ((g_221 || (p_38 != p_37)) <= g_2));
                        return p_37;
                    }
                    (*l_363) = (((l_367[5][2][0] == (void*)0) | 246UL) | (0L && g_270));
                }
                else
                {
                    const int **l_368 = &g_351;
                    (*l_368) = &p_38;
                    l_60 = (255UL < (~(**l_368)));
                }
                (*l_369) = &l_348;
            }
        }
    }
    else
    {
        int *l_371 = &l_60;
        (*l_371) = ((void*)0 != (*g_70));
        (*l_371) = (func_55((func_55((g_288[0] ^ ((safe_sub_func_uint8_t_u_u(g_93[2], func_46(p_40, (safe_sub_func_uint32_t_u_u(((-4L) | (((~(((safe_mod_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s((safe_mod_func_uint64_t_u_u((func_55((*l_371), (safe_rshift_func_int8_t_s_s((safe_sub_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(g_270, 1)) || g_288[0]), p_38)), 4)), (*g_351), l_392[6]) >= 1L), g_302)), p_36)) ^ p_37), (-1L))) <= p_37) != l_393)) != p_36) <= g_221)), 0x87591BBEL)), g_93[2], g_2, p_36))) == 0xDE82F21586D9F055LL)), p_37, (*l_371), &g_6) >= 0UL), p_38, g_394, l_371) > 0L);
    }
    return g_93[2];
}







static unsigned short func_46(int * p_47, unsigned p_48, const unsigned p_49, const unsigned p_50, const long long p_51)
{
    int *l_303 = &g_270;
    short l_312[4];
    int i;
    for (i = 0; i < 4; i++)
        l_312[i] = 8L;
    (*l_303) = 4L;
    (*l_303) = (safe_mod_func_int32_t_s_s((g_302 > (*l_303)), (*l_303)));
    return (*l_303);
}







static int * func_52(unsigned char p_53, unsigned short p_54)
{
    unsigned l_96[6][2] = {{0xA7C9710AL,0xA7C9710AL},{0xA7C9710AL,0xA7C9710AL},{0xA7C9710AL,0xA7C9710AL},{0xA7C9710AL,0xA7C9710AL},{0xA7C9710AL,0xA7C9710AL},{0xA7C9710AL,0xA7C9710AL}};
    int l_98 = 0x5B6CEA37L;
    int ***l_154 = &g_71;
    short l_155 = 9L;
    int l_184 = (-1L);
    int *l_187 = (void*)0;
    char l_190 = 1L;
    char l_209 = 1L;
    int i, j;
    for (p_54 = 0; (p_54 <= 6); p_54++)
    {
        int *l_97[5] = {&g_6,&g_6,&g_6,&g_6,&g_6};
        int i;
        if (l_96[1][1])
            break;
        l_98 = l_96[1][1];
    }
    if ((safe_mul_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(0x08204A9F0E05C4B4LL, g_93[2])), (l_96[1][0] == (safe_mod_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u(((safe_sub_func_uint32_t_u_u(func_55(p_54, l_96[1][1], l_98, &l_98), 0x79A822CCL)) != 0xBB19D5435D57718CLL), l_98)), p_53)), p_53))))))
    {
        int *l_113 = &g_2;
        unsigned l_136 = 0xE44A5262L;
        int * const l_137 = &l_98;
        int ***l_150 = &g_71;
        int *l_186 = &g_2;
        if ((safe_mul_func_int16_t_s_s((&l_98 != l_113), (((0x2AC3FE914D0EF1DBLL ^ g_93[2]) < (*l_113)) || ((safe_add_func_int16_t_s_s((*l_113), (safe_mul_func_uint16_t_u_u(((g_93[2] && p_53) <= (safe_lshift_func_int16_t_s_u(((safe_add_func_uint8_t_u_u(((p_54 >= 9L) == (*l_113)), l_96[1][1])) < 0x18AFL), (*l_113)))), 3UL)))) < (-8L))))))
        {
            int ***l_126 = &g_71;
            const int *l_127 = &g_2;
            int l_145 = 0L;
            long long l_153 = 0L;
            if ((g_93[1] < (safe_mul_func_int16_t_s_s((0x917A8246L <= 0xFDCC5544L), (((+(1L > func_55(func_55((!l_96[1][1]), ((safe_lshift_func_uint8_t_u_u((l_126 == (void*)0), 7)) | p_53), p_54, l_127), g_2, l_96[2][0], &g_2))) >= (*l_127)) < (*l_127))))))
            {
                unsigned l_130 = 0xF9374BA5L;
                int *l_139 = &g_2;
                int **l_140 = &g_41[2][0][4];
                for (p_54 = 0; (p_54 >= 26); p_54++)
                {
                    if (l_130)
                        break;
                    for (l_130 = 0; (l_130 == 33); l_130 = safe_add_func_uint8_t_u_u(l_130, 4))
                    {
                        const int **l_133 = &l_127;
                        int *l_134 = (void*)0;
                        int *l_135[7] = {&l_98,&l_98,&l_98,&l_98,&l_98,&l_98,&l_98};
                        int **l_138 = &l_134;
                        int i;
                        (*l_133) = l_127;
                        l_136 = (-9L);
                        (*l_138) = l_137;
                    }
                }
                (*l_140) = l_139;
                l_145 = (((func_55((*l_113), p_54, p_53, &g_2) <= ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int8_t_s_s((*l_139), (~0x13L))), g_2)) != g_93[1])) | g_93[2]) & (*l_137));
            }
            else
            {
                return l_113;
            }
            if (((0xC4L != (safe_rshift_func_uint16_t_u_s((safe_mul_func_uint8_t_u_u((l_150 != &g_71), ((safe_add_func_int16_t_s_s((((0x72C01C9B9BB54825LL && (+g_93[0])) > ((func_55(l_153, ((0xAFL < (l_126 == l_154)) > 0xBFL), l_155, &l_145) && p_54) != p_54)) < g_2), g_6)) > p_53))), (*l_113)))) > (*l_113)))
            {
                int *l_162 = &l_98;
                for (l_98 = 1; (l_98 >= 0); l_98 -= 1)
                {
                    int * const l_156 = &l_145;
                    int **l_158[8][1][2] = {{{&g_41[5][1][1],(void*)0}},{{&g_41[5][1][1],&g_41[5][1][1]}},{{(void*)0,&g_41[5][1][1]}},{{&g_41[5][1][1],(void*)0}},{{&g_41[5][1][1],&g_41[5][1][1]}},{{(void*)0,&g_41[5][1][1]}},{{&g_41[5][1][1],(void*)0}},{{&g_41[5][1][1],&g_41[5][1][1]}}};
                    int **l_159 = (void*)0;
                    int **l_160 = &l_113;
                    int i, j, k;
                    for (p_53 = 0; (p_53 <= 2); p_53 += 1)
                    {
                        int **l_157 = &l_113;
                        (*l_157) = l_156;
                        if (g_6)
                            goto lbl_185;
                    }
                    (*l_160) = l_156;
                    if (p_54)
                        continue;
                    for (p_53 = 0; (p_53 <= 1); p_53 += 1)
                    {
                        int *l_161 = &g_2;
                        (*l_113) = 0xEB60EB05L;
                        return l_161;
                    }
                }
                return &g_2;
            }
            else
            {
                int *l_178 = &g_2;
                if (p_53)
                {
                    const unsigned l_176 = 1UL;
                    for (l_98 = (-28); (l_98 > (-1)); l_98++)
                    {
                        int **l_165 = &g_41[6][0][3];
                        int *l_177 = &l_145;
                        (*l_165) = &l_145;
                        (*l_177) = (safe_sub_func_int8_t_s_s(((+p_53) == (0UL >= (g_93[2] == (safe_sub_func_uint16_t_u_u((((safe_add_func_int8_t_s_s((-1L), (((void*)0 != l_150) != ((&l_165 != &l_165) & (0L > l_176))))) | 0x56C3DFAE1E7B9FCELL) <= (*l_127)), g_6))))), (*l_127)));
                    }
                    l_127 = l_178;
                    for (p_53 = 13; (p_53 >= 1); p_53 = safe_sub_func_uint32_t_u_u(p_53, 9))
                    {
                        (*l_137) = p_54;
                    }
                    (*l_150) = (*g_70);
                }
                else
                {
                    int **l_181[6][6][6] = {{{&g_41[2][0][3],(void*)0,&g_41[7][1][2],&l_113,&g_41[9][0][4],&g_41[8][1][2]},{&l_113,&g_41[9][0][1],&g_41[5][0][1],&l_178,&g_41[6][0][3],&g_41[6][0][3]},{&g_41[6][0][3],&l_113,&l_113,&l_178,(void*)0,&l_178},{&l_113,&g_41[4][0][2],&l_113,&g_41[3][1][2],&g_41[3][0][3],&l_113},{&g_41[7][1][2],&g_41[6][0][3],&g_41[8][0][0],&g_41[6][0][3],&g_41[0][1][1],&l_178},{&l_113,&g_41[4][1][3],&g_41[7][1][2],&g_41[6][0][3],&g_41[6][0][3],&l_178}},{{&l_113,&l_178,&l_178,&l_178,(void*)0,&g_41[7][1][2]},{&g_41[5][0][1],&g_41[9][0][4],&l_178,&l_113,&g_41[4][0][2],&l_113},{&l_178,&l_178,&g_41[7][1][2],&l_113,&l_178,&g_41[7][1][4]},{&g_41[9][0][3],&g_41[9][0][3],&l_178,&g_41[6][0][3],&l_113,&l_113},{&l_178,&g_41[9][0][4],&g_41[6][0][3],&g_41[8][1][2],(void*)0,&g_41[3][1][2]},{&l_178,(void*)0,&g_41[6][0][3],&g_41[6][0][3],&g_41[6][0][3],&g_41[6][0][3]}},{{&g_41[9][0][3],&l_113,&l_113,&l_113,&g_41[9][1][3],&l_113},{&l_178,&g_41[6][0][3],&g_41[8][1][2],&l_113,&g_41[6][0][3],&g_41[3][1][2]},{&g_41[5][0][1],&g_41[9][0][3],&l_113,&l_178,&l_113,&l_178},{&l_113,&l_113,&l_178,&g_41[6][0][3],&g_41[9][1][3],&l_113},{&l_113,&g_41[4][0][2],&l_113,&g_41[6][0][3],&g_41[6][0][3],&l_113},{&l_113,(void*)0,&l_113,&l_178,&l_113,&l_113}},{{&g_41[5][0][1],&l_113,&l_178,&l_113,&l_113,&g_41[7][1][1]},{&l_178,&g_41[2][1][3],&l_113,&l_113,&g_41[2][1][3],&l_178},{&g_41[9][0][3],&l_178,&l_113,&l_113,&l_178,&g_41[1][1][0]},{&g_41[6][1][1],&g_41[9][1][1],&g_41[0][0][1],(void*)0,&g_41[6][0][3],&l_113},{&g_41[6][1][1],&g_41[5][0][1],(void*)0,&l_113,&l_113,&l_178},{&g_41[1][0][1],&l_178,&g_41[6][0][3],&g_41[6][0][3],&l_113,&l_178}},{{&l_113,&l_113,&l_178,&l_113,&g_41[8][1][2],&l_113},{&g_41[0][0][1],&l_113,(void*)0,&g_41[9][0][3],&l_113,&g_41[6][1][1]},{&l_178,&g_41[2][0][3],&l_113,(void*)0,&l_113,&l_113},{&g_41[2][0][0],&l_113,&g_41[1][0][1],(void*)0,&l_113,&l_113},{&l_178,&g_41[5][0][1],&g_41[1][1][0],&g_41[9][0][3],&g_41[8][0][0],&g_41[1][0][1]},{&g_41[0][0][1],&l_113,(void*)0,&l_113,&l_178,&g_41[9][0][3]}},{{&l_113,&g_41[7][1][4],&g_41[1][0][1],&g_41[6][0][3],&g_41[7][1][4],&l_113},{&g_41[1][0][1],&l_178,&l_113,&l_113,&g_41[3][1][2],&g_41[6][1][1]},{&g_41[6][1][1],&l_113,(void*)0,(void*)0,&g_41[6][0][3],&l_113},{&g_41[6][1][1],&g_41[6][0][3],&l_178,&l_113,&l_113,&g_41[1][0][3]},{&g_41[1][0][1],&g_41[3][1][2],&l_178,&g_41[6][0][3],&l_178,&l_178},{&l_113,&g_41[2][0][3],&g_41[4][1][3],&l_113,&g_41[6][0][3],&l_113}}};
                    int i, j, k;
                    l_127 = (void*)0;
                }
                (*l_137) = p_53;
            }
            return &g_2;
        }
        else
        {
lbl_185:
            for (l_98 = 0; (l_98 > (-25)); l_98 = safe_sub_func_uint16_t_u_u(l_98, 5))
            {
                l_184 = 0x97EB8172L;
            }
            l_187 = l_186;
            (*l_137) = 0xF5F9DB7EL;
            (*l_137) = (-1L);
        }
        l_190 = (safe_rshift_func_int16_t_s_s(p_53, 7));
    }
    else
    {
        int *l_191 = &l_184;
        int **l_192 = &g_41[3][0][1];
        long long l_255 = (-2L);
        int l_261 = 0x88F7C297L;
        unsigned short l_287[7] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL};
        int i;
        (*l_192) = l_191;
        if (p_54)
            goto lbl_194;
        (*l_191) = p_53;
lbl_194:
        for (l_190 = 2; (l_190 >= 0); l_190 -= 1)
        {
            int *l_193 = &g_6;
            return l_193;
        }
        for (l_155 = 0; (l_155 <= 1); l_155 += 1)
        {
            short l_195 = (-5L);
            int * const *l_212 = &l_187;
            int * const **l_211 = &l_212;
            int *l_222 = &l_98;
            int *l_223 = (void*)0;
            unsigned short l_262 = 0x196DL;
            unsigned short l_295 = 7UL;
            for (p_53 = 0; (p_53 <= 1); p_53 += 1)
            {
                int *l_200 = &l_184;
                int l_203 = 0L;
                unsigned short l_210 = 0x9287L;
                int i, j;
                if (l_96[(l_155 + 1)][p_53])
                {
                    int * const *l_202 = &l_191;
                    int * const **l_201[9];
                    int i;
                    for (i = 0; i < 9; i++)
                        l_201[i] = &l_202;
                    (*l_191) = l_195;
                    for (l_184 = 0; (l_184 <= 1); l_184 += 1)
                    {
                        unsigned l_196 = 18446744073709551615UL;
                        int *l_199 = &l_98;
                        (*l_199) = ((&g_71 != l_154) ^ (p_53 || (l_196 >= (safe_lshift_func_uint16_t_u_u(0x4DFEL, g_2)))));
                    }
                    l_200 = &g_2;
                    l_203 = (&g_71 == l_201[3]);
                }
                else
                {
                    int *l_204 = &l_203;
                    (*l_204) = ((l_204 != (void*)0) & (l_195 ^ (g_93[1] ^ ((g_93[2] > (*l_204)) | g_93[2]))));
                    if ((((((safe_add_func_uint16_t_u_u((*l_200), l_195)) < l_195) != (p_53 | g_6)) != p_53) > func_55(p_54, (safe_sub_func_uint16_t_u_u(l_209, g_93[0])), l_210, &g_2)))
                    {
                        (*l_204) = (((void*)0 != l_211) <= (((*l_192) != l_204) ^ ((safe_unary_minus_func_uint32_t_u(g_93[2])) < (safe_unary_minus_func_int64_t_s((safe_mul_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u((0x9BL && (safe_sub_func_int16_t_s_s((p_54 || (0xB74F9B407F3023DFLL != g_93[2])), g_221))), 11)) && g_221), (*l_204))))))));
                    }
                    else
                    {
                        return l_223;
                    }
                }
                for (l_209 = 0; (l_209 <= 1); l_209 += 1)
                {
                    int i, j, k;
                    g_41[(l_155 + 5)][l_155][(l_155 + 1)] = (void*)0;
                    if ((*l_222))
                        continue;
                    if (p_53)
                        continue;
                }
            }
            (*l_222) = (0x6A93C2C6411CEE77LL && (safe_unary_minus_func_uint32_t_u((((safe_lshift_func_uint8_t_u_u(g_2, (~((safe_sub_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(0L, 0)), (p_54 != (safe_add_func_int64_t_s_s(func_55(p_54, ((safe_mul_func_int16_t_s_s((*l_222), ((**l_211) == (*l_212)))) && 1UL), (*l_191), &l_184), g_93[2]))))) == 1L)))) == 0UL) < g_6))));
            (*l_192) = (void*)0;
            if ((*l_191))
                break;
            for (p_54 = 0; (p_54 <= 1); p_54 += 1)
            {
                unsigned long long l_247 = 8UL;
                int *l_248 = &g_6;
                int *l_277[8][1][5] = {{{&g_2,&g_2,(void*)0,&l_98,&l_98}},{{&l_98,&g_2,&g_6,&g_270,&g_6}},{{&g_270,&g_270,&l_98,&l_98,(void*)0}},{{&l_98,&g_6,&l_98,&g_270,&l_98}},{{&g_2,&l_98,&g_6,&l_98,&g_2}},{{&l_98,&g_6,(void*)0,&g_2,&g_270}},{{&l_98,&g_270,&l_98,&g_2,&g_2}},{{&g_2,&g_2,&g_2,&g_6,&g_270}}};
                int i, j, k;
                for (p_53 = 0; (p_53 <= 2); p_53 += 1)
                {
                    int i, j;
                    l_247 = (safe_rshift_func_uint8_t_u_s((0UL == l_96[(p_53 + 3)][l_155]), ((safe_rshift_func_int16_t_s_u(g_93[(l_155 + 1)], p_53)) <= (safe_mod_func_int64_t_s_s(((g_6 == 0xFCL) | ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int8_t_s_u(p_53, (safe_mod_func_uint16_t_u_u((g_2 && ((18446744073709551615UL ^ g_93[0]) >= p_53)), p_54)))), g_221)) | g_93[2])), 1L)))));
                    for (l_247 = 0; (l_247 <= 2); l_247 += 1)
                    {
                        return l_248;
                    }
                }
                (*l_222) = (safe_sub_func_uint64_t_u_u(0UL, (func_55((g_2 != ((*l_212) != l_248)), g_6, p_53, l_248) | ((safe_mod_func_uint8_t_u_u(l_255, g_221)) || 0x3FL))));
                if (((((*l_222) && g_256) ^ (p_53 ^ func_55((((void*)0 == (*l_154)) >= (((0xDCA2L > ((safe_mul_func_int16_t_s_s(((((g_2 & (!(((safe_add_func_int32_t_s_s((func_55(p_54, g_93[2], p_54, l_222) | 0xFCA2EE27L), p_53)) && l_261) < p_53))) || p_53) > g_256) == l_262), (*l_248))) > p_53)) || (-2L)) & 0x0EL)), p_54, p_54, l_191))) >= p_54))
                {
                    int *l_263 = (void*)0;
                    for (l_255 = 1; (l_255 >= 0); l_255 -= 1)
                    {
                        int i, j, k;
                        return l_263;
                    }
                    if (((g_221 || 0UL) || (65533UL >= (safe_mul_func_uint8_t_u_u(0x82L, 0x34L)))))
                    {
                        int **l_268 = &g_41[8][1][0];
                        (*g_70) = (*l_154);
                        (*l_222) = p_53;
                        (*l_268) = (**l_211);
                    }
                    else
                    {
                        (*l_222) = p_53;
                        if (p_53)
                            continue;
                        if ((*l_222))
                            break;
                    }
                    l_248 = l_263;
                    g_269[2] = l_263;
                }
                else
                {
                    int *l_271 = &g_270;
                    (*l_222) = (0xFEA91B57L & (&g_270 != (void*)0));
                    for (l_209 = 1; (l_209 >= 0); l_209 -= 1)
                    {
                        int i, j, k;
                        g_41[(l_209 + 1)][p_54][(l_209 + 1)] = (void*)0;
                        g_41[(l_209 + 1)][p_54][(l_209 + 1)] = g_41[(l_209 + 1)][p_54][(l_209 + 1)];
                    }
                    for (l_98 = 1; (l_98 >= 0); l_98 -= 1)
                    {
                        int **l_272 = &g_41[5][1][1];
                        long long l_284 = 0x0AEC93D442FCBC9CLL;
                        l_184 = p_54;
                        l_271 = l_248;
                        (*l_272) = (**l_211);
                        (*l_191) = (((safe_mod_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_u(((p_53 || (((l_277[6][0][0] != (void*)0) != 0xCE52L) < ((safe_mod_func_uint32_t_u_u(((safe_lshift_func_uint8_t_u_s(p_53, 1)) | g_6), (safe_lshift_func_uint8_t_u_s(((l_284 <= g_256) < g_221), 4)))) && g_256))) < p_53), (*l_271))) | p_54), 0xA52BCB22F0480493LL)) == 0L) <= g_93[2]);
                    }
                    (*l_191) = (&l_212 == &l_192);
                }
                (*l_191) = ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((((**l_211) == l_248) <= (p_54 ^ 0x657D5D0518CFB616LL)) | l_295), ((p_54 & (((safe_lshift_func_uint16_t_u_u(0x7C00L, 10)) > 0x62464D55L) != (safe_mod_func_int64_t_s_s(((~(safe_add_func_uint64_t_u_u(p_53, (*l_222)))) && g_288[0]), g_302)))) | p_54))), (*l_191))), g_2)) <= 1L);
            }
        }
    }
    return &g_270;
}







static long long func_55(int p_56, unsigned char p_57, int p_58, const int * p_59)
{
    int **l_62[3][4] = {{&g_41[9][1][1],&g_41[9][1][1],&g_41[9][1][1],&g_41[9][1][1]},{&g_41[9][1][1],&g_41[9][1][1],&g_41[9][1][1],&g_41[9][1][1]},{&g_41[9][1][1],&g_41[9][1][1],&g_41[9][1][1],&g_41[9][1][1]}};
    int ***l_61 = &l_62[2][2];
    int i, j;
    (*l_61) = &g_41[1][1][1];
    p_56 = ((0x20A5L ^ g_2) & 1L);
    for (p_57 = (-6); (p_57 != 45); p_57++)
    {
        long long l_67 = (-5L);
        (**l_61) = &g_2;
        for (p_56 = 0; (p_56 == (-8)); p_56--)
        {
            int ***l_72 = &l_62[2][2];
            for (p_58 = 0; (p_58 <= 2); p_58 += 1)
            {
                int i, j;
                if ((*p_59))
                    break;
            }
            if (((g_2 == l_67) != l_67))
            {
                if ((*p_59))
                    break;
            }
            else
            {
                char l_75 = 0x16L;
                p_59 = &g_2;
                if ((*p_59))
                    break;
                p_58 = ((safe_mul_func_uint8_t_u_u((p_58 | (g_2 | (g_70 == l_72))), (p_58 == ((((-1L) >= (0UL && ((safe_mod_func_int8_t_s_s(1L, p_58)) | 4294967289UL))) == l_75) ^ p_57)))) == 0x51L);
            }
        }
        p_56 = (g_6 >= (+(safe_rshift_func_uint16_t_u_s(((g_6 && ((safe_rshift_func_int8_t_s_s(p_58, 5)) ^ (safe_sub_func_uint8_t_u_u(l_67, (safe_add_func_int64_t_s_s(((g_6 < (safe_sub_func_uint8_t_u_u(p_57, (g_2 || g_2)))) < g_2), g_6)))))) | 1UL), g_2))));
        if ((*p_59))
        {
            return g_6;
        }
        else
        {
            short l_88 = 0L;
            p_56 = (safe_lshift_func_int16_t_s_s(g_2, 0));
            p_58 = ((l_88 & (safe_rshift_func_int8_t_s_u(((safe_mul_func_uint16_t_u_u(((g_2 <= g_2) > g_93[2]), l_67)) ^ l_88), ((((*p_59) <= (*p_59)) < (g_93[0] >= g_2)) < p_57)))) && 0x3468C50A102B4660LL);
        }
    }
    return p_56;
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
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_93[i], "g_93[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_288[i], "g_288[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_394, "g_394", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_760, "g_760", print_hash_value);
    transparent_crc(g_965, "g_965", print_hash_value);
    transparent_crc(g_1014, "g_1014", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1015[i][j], "g_1015[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
