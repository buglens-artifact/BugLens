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
   char * const f0;
};


static char g_9 = 0x9FL;
static char *g_22[7][1] = {{&g_9},{&g_9},{&g_9},{&g_9},{&g_9},{&g_9},{&g_9}};
static int g_53 = (-5L);
static int g_60 = 0xF63547A0L;
static int g_64 = (-1L);
static unsigned g_65 = 0xB1ECBC59L;
static int *g_68[4] = {&g_60,&g_60,&g_60,&g_60};
static union U0 *g_93 = (void*)0;
static unsigned g_96 = 6UL;
static union U0 g_129 = {0};
static unsigned g_183 = 4294967286UL;
static int g_233[7] = {0L,0L,0L,0L,0L,0L,0L};
static int g_261 = 0x755FA33FL;
static const int *g_475 = &g_261;
static int * const **g_498 = (void*)0;
static int g_499 = 1L;
static char g_603 = 7L;
static int g_624 = 1L;
static int **g_644 = (void*)0;
static int g_723 = 1L;
static unsigned char g_764[5] = {0x6BL,0x6BL,0x6BL,0x6BL,0x6BL};
static unsigned short g_794 = 0xF421L;
static int *g_890[7][1][7] = {{{&g_233[5],&g_60,&g_233[5],&g_233[5],&g_60,&g_233[5],&g_60}},{{&g_60,&g_233[5],&g_233[3],&g_60,&g_499,&g_499,&g_60}},{{&g_233[5],&g_53,&g_233[5],(void*)0,&g_60,&g_60,&g_233[5]}},{{&g_233[3],&g_233[5],&g_60,&g_233[5],&g_60,&g_233[5],&g_233[3]}},{{&g_233[5],&g_233[5],&g_499,&g_233[3],&g_60,&g_60,&g_60}},{{&g_233[5],&g_60,&g_60,&g_233[5],&g_60,&g_53,&g_233[5]}},{{&g_233[3],&g_53,&g_499,&g_60,&g_60,&g_499,&g_53}}};
static union U0 ** const g_918 = &g_93;
static union U0 ** const *g_917 = &g_918;
static unsigned short g_960 = 0x1425L;
static unsigned g_1069 = 0x4E78743CL;
static unsigned short g_1095[8] = {0xAE34L,0xAE34L,0xAE34L,0xAE34L,0xAE34L,0xAE34L,0xAE34L,0xAE34L};



static int func_1(void);
static const int func_2(const short p_3, int p_4);
static unsigned func_5(char p_6, char * p_7, char * p_8);
static char * func_10(unsigned p_11, char * p_12, unsigned char p_13);
static unsigned func_17(char * p_18, char p_19, char p_20, union U0 p_21);
static char func_27(unsigned p_28, char * p_29, char * p_30, char * p_31);
static char * func_32(unsigned p_33, char * p_34);
static short func_35(unsigned char p_36, int p_37);
static int func_42(unsigned p_43, char * p_44, char * p_45);
static char func_47(char p_48, unsigned p_49, char p_50);
static int func_1(void)
{
    unsigned char l_16 = 0x6AL;
    union U0 l_25[10][10] = {{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0},{0},{0}}};
    char *l_664 = &g_9;
    int *l_722 = &g_723;
    int l_726 = 0x2113A7FCL;
    int ** const *l_759[9];
    unsigned short l_807 = 0UL;
    char l_854 = 0L;
    const union U0 *l_868[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int l_926 = 4L;
    unsigned char l_1024 = 0x72L;
    char l_1054[3][9] = {{(-4L),0xDAL,0xDAL,(-4L),(-4L),0xDAL,0xDAL,(-4L),(-4L)},{0L,0L,0L,0L,0L,0L,0L,0L,0L},{(-4L),(-4L),0xDAL,0xDAL,(-4L),(-4L),0xDAL,0xDAL,(-4L)}};
    unsigned short l_1065 = 65527UL;
    short l_1070[2][5] = {{(-2L),0x7767L,(-3L),(-3L),0x7767L},{(-2L),0x7767L,(-3L),(-3L),0x7767L}};
    int l_1081 = 0x34531685L;
    short l_1087 = 0x78A9L;
    int l_1106[6];
    int i, j;
    for (i = 0; i < 9; i++)
        l_759[i] = &g_644;
    for (i = 0; i < 6; i++)
        l_1106[i] = 7L;
    (*l_722) ^= func_2((func_5(g_9, func_10(((safe_rshift_func_uint8_t_u_u((((l_16 < func_17(g_22[5][0], l_16, (((void*)0 != &g_9) ^ (safe_lshift_func_int16_t_s_s((((void*)0 != &g_9) | 1L), 6))), l_25[1][8])) || g_60) ^ l_16), g_624)) | g_603), &g_603, g_603), l_664) < g_624), g_499);
    if (((!((safe_mod_func_int32_t_s_s(l_726, (*l_722))) & (*l_722))) < ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(((*l_722) | ((0x6E241B4AL || 1UL) <= (safe_lshift_func_uint16_t_u_u(((func_42((((&l_25[6][0] != &g_129) < (*l_722)) & (*l_722)), &g_9, &g_9) == g_233[1]) <= (*l_722)), 11)))), g_261)), (*l_722))), 0xB1L)), (*l_722))) & (*l_722))))
    {
        unsigned l_742 = 0x24E610F5L;
        int l_747 = (-1L);
        union U0 **l_771 = &g_93;
        union U0 **l_774 = &g_93;
        int l_777[9][1][9] = {{{0x70A45381L,0x9F77E4BEL,0x70A45381L,1L,0x4B778C0BL,0x4B778C0BL,1L,0x70A45381L,0x9F77E4BEL}},{{(-1L),3L,0x13B3F323L,0x1F4E1E73L,0x1F4E1E73L,(-1L),0x13B3F323L,0L,0x13B3F323L}},{{5L,0x4B778C0BL,0x9F77E4BEL,0x9F77E4BEL,0x4B778C0BL,5L,0x30291109L,5L,0x4B778C0BL}},{{(-1L),0x13B3F323L,0x13B3F323L,(-1L),0L,0x37F43BCBL,0L,(-1L),0x13B3F323L}},{{1L,1L,0x30291109L,0x4B778C0BL,0x70A45381L,0x4B778C0BL,0x30291109L,1L,1L}},{{0x13B3F323L,(-1L),0L,0x37F43BCBL,0L,(-1L),0x13B3F323L,0x13B3F323L,(-1L)}},{{0x4B778C0BL,5L,0x30291109L,5L,0x4B778C0BL,0x9F77E4BEL,0x9F77E4BEL,0x4B778C0BL,5L}},{{0x13B3F323L,0L,0x13B3F323L,(-1L),0x1F4E1E73L,0x1F4E1E73L,(-1L),0x13B3F323L,0L}},{{1L,1L,0x9F77E4BEL,0x30291109L,0x30291109L,0x9F77E4BEL,1L,1L,1L}}};
        short l_803 = (-8L);
        char *l_808 = &g_9;
        unsigned l_835[4][5] = {{0x57189796L,0UL,0x57189796L,2UL,0UL},{0x88F9FC3FL,0xCCD7A59EL,2UL,0x88F9FC3FL,2UL},{0x88F9FC3FL,0x88F9FC3FL,0x226E5197L,0UL,0x9122A456L},{0x57189796L,0x9122A456L,2UL,2UL,0x9122A456L}};
        int *l_891 = (void*)0;
        char *l_928 = &g_603;
        int l_929[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int l_946 = 0xB6B517F6L;
        short l_956 = (-1L);
        union U0 l_957[6][4][8] = {{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}},{{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}},{{0},{0},{0},{0},{0},{0},{0},{0}}}};
        int i, j, k;
        if ((*l_722))
        {
            int *l_737 = &g_53;
            int *l_738 = &g_233[5];
            int *l_739 = (void*)0;
            int *l_740 = &g_499;
            int *l_741[5];
            int i;
            for (i = 0; i < 5; i++)
                l_741[i] = (void*)0;
            ++l_742;
            for (g_64 = (-4); (g_64 < (-11)); g_64--)
            {
                l_747 = func_5((*l_740), l_664, &g_9);
            }
            for (g_9 = 0; (g_9 > (-23)); g_9--)
            {
                int **l_750 = &g_68[3];
                (*l_750) = &l_747;
            }
            for (l_747 = (-4); (l_747 > 0); ++l_747)
            {
                return (*l_722);
            }
        }
        else
        {
            short l_772 = 6L;
            int l_781 = 1L;
            for (g_96 = 0; (g_96 <= 3); g_96 += 1)
            {
                short l_769 = (-8L);
                int l_776 = 0L;
                int l_778 = 1L;
                int l_779 = (-1L);
                int l_783[8];
                unsigned char l_786 = 1UL;
                int l_789 = (-1L);
                int i;
                for (i = 0; i < 8; i++)
                    l_783[i] = 0xAA4FFB24L;
                if ((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(func_5((l_759[6] != &g_644), &g_9, l_664), g_723)), (((((safe_mod_func_int8_t_s_s((g_624 < (safe_lshift_func_uint8_t_u_u((*l_722), 2))), (g_261 || 0UL))) <= g_499) < g_261) >= 4294967287UL) & g_233[6]))), g_261)))
                {
                    return g_624;
                }
                else
                {
                    char *l_770[6];
                    int l_780[2];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_770[i] = &g_603;
                    for (i = 0; i < 2; i++)
                        l_780[i] = 0xF5FACA8FL;
                    l_772 = ((g_764[4] >= (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((func_5(l_769, l_770[2], l_664) < (g_624 > ((void*)0 != &g_644))), (&g_93 != l_771))), l_747))) | g_764[4]);
                    (*l_722) &= (g_9 || g_603);
                    for (l_769 = 3; (l_769 >= 0); l_769 -= 1)
                    {
                        int *l_773 = &g_723;
                        int i;
                        g_68[g_96] = l_773;
                        (*l_722) = func_5((&g_93 == l_774), l_770[3], func_32(g_624, &g_603));
                    }
                    for (l_742 = 0; (l_742 <= 3); l_742 += 1)
                    {
                        int l_775 = 0L;
                        int l_782 = 0x90DD4792L;
                        int l_784 = 0x6ED6F4E6L;
                        int l_785 = (-1L);
                        int i;
                        l_786--;
                    }
                }
                (*l_722) = (g_233[0] != 252UL);
                if (l_776)
                    break;
                l_781 = l_789;
            }
        }
        (*l_722) = 1L;
        if (l_777[6][0][3])
        {
            (*l_722) = l_742;
        }
        else
        {
            char *l_795 = &g_603;
            int l_796[6][1][2] = {{{0x7851203CL,0L}},{{0x7851203CL,0x7851203CL}},{{0L,0x7851203CL}},{{0x7851203CL,0L}},{{0x7851203CL,0x7851203CL}},{{0L,0x7851203CL}}};
            unsigned char l_799 = 0x2FL;
            const union U0 *l_802 = &l_25[8][5];
            union U0 l_804 = {0};
            int i, j, k;
            (*l_722) = l_796[1][0][1];
        }
        if (((safe_mod_func_int8_t_s_s(func_5(func_2(g_233[4], l_807), l_808, l_808), (*l_722))) & l_747))
        {
            unsigned l_821 = 1UL;
            char *l_850 = &g_9;
            int l_864 = 0x4AF1AEC4L;
            for (l_742 = 6; (l_742 > 53); l_742 = safe_add_func_uint16_t_u_u(l_742, 1))
            {
                const char *l_815 = &g_9;
                union U0 ***l_820[2];
                int l_824 = 0L;
                int i;
                for (i = 0; i < 2; i++)
                    l_820[i] = &l_774;
                for (g_96 = 4; (g_96 < 17); g_96 = safe_add_func_int16_t_s_s(g_96, 4))
                {
                    unsigned short l_832 = 0UL;
                    for (g_499 = 6; (g_499 >= 0); g_499 -= 1)
                    {
                        char *l_827[10] = {&g_603,&g_603,&g_603,&g_603,&g_603,&g_603,&g_603,&g_603,&g_603,&g_603};
                        int **l_836 = &l_722;
                        int i;
                        (*l_722) ^= (safe_mod_func_int16_t_s_s((l_815 == &g_9), (safe_rshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((void*)0 == l_820[0]), g_233[g_499])), l_821))));
                        g_68[1] = &g_53;
                        (*l_722) |= (safe_add_func_uint8_t_u_u(((func_5(l_824, func_10(g_603, &g_9, (safe_rshift_func_uint8_t_u_u(0UL, 4))), l_827[8]) != (safe_rshift_func_int16_t_s_s(((safe_add_func_int8_t_s_s(l_832, (g_794 != g_183))) != l_742), 6))) < l_777[7][0][2]), 0x46L));
                        (**l_836) &= (safe_add_func_uint8_t_u_u(((1UL == g_603) > l_835[1][3]), (&g_475 != l_836)));
                    }
                    if (l_824)
                        continue;
                }
            }
            if ((*l_722))
            {
                int l_845 = 3L;
                for (g_183 = (-10); (g_183 == 36); g_183 = safe_add_func_int16_t_s_s(g_183, 4))
                {
                    unsigned l_840 = 0x1FE1397FL;
                    for (g_499 = 8; (g_499 >= 0); g_499 -= 1)
                    {
                        int l_839 = 7L;
                        int i;
                        (*l_722) = l_839;
                        --l_840;
                    }
                    (*l_722) = ((safe_lshift_func_uint8_t_u_s(l_845, l_747)) ^ 0xA419L);
                    (*l_722) = ((l_777[7][0][2] >= (((func_5((safe_mod_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(g_233[4], 10)) < (&g_644 != (void*)0)), l_845)), l_850, &g_603) && l_845) | 0xB3D8L) && 65531UL)) != g_64);
                    (*l_722) ^= l_840;
                }
                for (l_16 = 0; (l_16 <= 3); l_16 += 1)
                {
                    int l_851 = 0L;
                    for (g_603 = 0; (g_603 >= 0); g_603 -= 1)
                    {
                        l_851 &= l_747;
                    }
                    for (g_603 = 6; (g_603 >= 0); g_603 -= 1)
                    {
                        l_864 |= (safe_rshift_func_uint16_t_u_s(((l_854 ^ (&g_68[3] == (void*)0)) ^ (safe_mul_func_uint8_t_u_u(0x89L, (safe_lshift_func_uint8_t_u_u(func_42(g_764[4], &g_603, &g_603), (safe_rshift_func_int16_t_s_s((safe_unary_minus_func_int16_t_s((safe_mul_func_uint8_t_u_u((g_624 ^ 0x6E4FL), g_233[4])))), g_794))))))), g_764[4]));
                    }
                }
            }
            else
            {
                for (g_64 = 0; (g_64 > (-25)); --g_64)
                {
                    unsigned l_867[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_867[i] = 0x7B406133L;
                    if (l_867[5])
                        break;
                    if (((&g_129 == l_868[0]) || 1L))
                    {
                        (*l_722) = l_821;
                        return l_864;
                    }
                    else
                    {
                        return l_867[0];
                    }
                }
            }
        }
        else
        {
            const int **l_869[4][5][5];
            int l_894 = 0x18FBDDE7L;
            int l_916 = 0xB7C6E091L;
            char *l_925[4] = {&l_854,&l_854,&l_854,&l_854};
            unsigned short l_958[3][1];
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 5; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_869[i][j][k] = &g_475;
                }
            }
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_958[i][j] = 65533UL;
            }
            if (((void*)0 != l_869[1][1][1]))
            {
                unsigned char l_877 = 246UL;
                for (g_60 = 4; (g_60 == 13); ++g_60)
                {
                    int l_874 = 0xFA2EA8A2L;
                    l_877 = ((safe_mul_func_int16_t_s_s(3L, (func_2(g_624, g_183) > (l_874 || (safe_mod_func_int8_t_s_s(((void*)0 == &g_93), (*l_722))))))) <= 0x45L);
                    return l_877;
                }
                for (l_803 = 0; (l_803 > 23); l_803 = safe_add_func_int16_t_s_s(l_803, 8))
                {
                    for (g_723 = 0; (g_723 <= 3); g_723 += 1)
                    {
                        unsigned l_880 = 0xA978F7E6L;
                        return l_880;
                    }
                }
            }
            else
            {
                char l_889 = 0x43L;
                (*l_722) = ((safe_mul_func_uint8_t_u_u(g_96, (l_869[1][1][1] == (void*)0))) && ((g_183 <= ((safe_add_func_uint16_t_u_u((g_9 && (safe_lshift_func_uint8_t_u_u(g_624, 3))), (0L || l_742))) <= (safe_sub_func_int8_t_s_s(1L, 0x1BL)))) | l_889));
            }
            l_891 = g_890[4][0][6];
            for (g_60 = (-15); (g_60 != (-7)); g_60 = safe_add_func_int16_t_s_s(g_60, 8))
            {
                int l_912 = 0xD9D4525DL;
                char *l_927 = &l_854;
                int *l_940[7][2] = {{(void*)0,(void*)0},{&g_60,(void*)0},{(void*)0,&g_60},{(void*)0,(void*)0},{&g_60,(void*)0},{(void*)0,&g_60},{(void*)0,(void*)0}};
                unsigned short l_943 = 0x40C9L;
                int i, j;
                for (g_9 = 3; (g_9 >= 0); g_9 -= 1)
                {
                    unsigned l_915 = 4294967287UL;
                    (*l_722) = 1L;
                    for (g_624 = 3; (g_624 >= 0); g_624 -= 1)
                    {
                        unsigned l_895[9][4][7] = {{{1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL},{0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL},{0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L},{0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL}},{{1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL},{0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL},{0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L},{0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL}},{{1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL},{0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL},{0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L},{0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL}},{{1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL},{0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL},{0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L},{0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL}},{{1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL},{0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL},{0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L},{0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL}},{{1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL},{0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL},{0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L},{0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL}},{{1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL},{0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL},{0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L},{0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL}},{{1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL},{0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL},{0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L},{0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL}},{{1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL,0x2696BFEBL,1UL},{0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL},{0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L,0x2696BFEBL,0x9A5E9AD6L},{0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL,0xCAFDA1C0L,0xCAFDA1C0L,0xA23AB83CL,0xA23AB83CL}}};
                        short l_904 = 0xC82AL;
                        unsigned char l_909 = 0xCDL;
                        int i, j, k;
                        --l_895[7][0][5];
                        l_912 &= ((safe_mod_func_int8_t_s_s((-1L), (g_261 && (safe_mod_func_int16_t_s_s(0x4B97L, (safe_mul_func_int8_t_s_s(1L, l_904))))))) > (safe_mod_func_int32_t_s_s(((-4L) != ((safe_sub_func_int32_t_s_s(l_909, (((((255UL != (safe_mod_func_uint16_t_u_u((0xABACL <= g_64), g_764[4]))) && 5UL) <= l_895[7][0][5]) >= g_603) > g_233[3]))) == (*l_722))), g_233[3])));
                        (*l_722) = ((safe_rshift_func_int8_t_s_u((g_603 && (l_915 || l_916)), 3)) == ((void*)0 != g_917));
                    }
                }
                if (((void*)0 != (*g_918)))
                {
                    short l_921 = 0x3DF6L;
                    for (g_499 = (-26); (g_499 != 0); ++g_499)
                    {
                        l_894 ^= (0xE8CEL & (-7L));
                    }
                    if (l_921)
                    {
                        unsigned char l_924 = 0xC1L;
                        (*l_722) = ((safe_rshift_func_uint16_t_u_s((g_60 == (l_924 | func_27((((((func_27(g_64, func_32(l_912, l_925[3]), &g_603, func_10(l_924, &g_603, g_65)) > l_921) || g_261) <= g_96) || l_926) < g_764[4]), l_927, l_808, l_928))), 12)) >= 0x7FEE5BE8L);
                    }
                    else
                    {
                        const char l_936 = 0xEBL;
                        short l_937 = 0xDB53L;
                        (**g_917) = (*g_918);
                        (*l_722) = (*l_722);
                        l_937 = (l_929[6] == (func_27((l_912 < (safe_mul_func_uint16_t_u_u((0xCCFC6F95L >= func_2(func_2(g_624, (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int16_t_s_u(l_921, 10)), 4))), (1UL && 65530UL))), g_9))), &g_603, l_925[3], l_927) > l_936));
                        (*l_722) |= (-7L);
                    }
                    return g_624;
                }
                else
                {
                    char l_938 = 0L;
                    int *l_939 = &l_726;
                    int l_942 = 1L;
                    if (l_938)
                    {
                        int l_941 = (-8L);
                        l_940[3][0] = l_939;
                        ++l_943;
                        l_940[4][1] = &l_942;
                        l_894 |= (*l_939);
                    }
                    else
                    {
                        l_891 = (void*)0;
                        if ((*l_939))
                            break;
                    }
                    for (l_742 = 0; (l_742 <= 6); l_742 += 1)
                    {
                        int i;
                        l_939 = &g_233[l_742];
                        g_233[l_742] = l_835[2][3];
                    }
                }
                l_894 = l_946;
            }
            for (l_16 = 0; (l_16 <= 3); l_16 += 1)
            {
                int l_949 = 0L;
                int l_959 = 0xD362F757L;
                l_959 |= (func_27((safe_add_func_int32_t_s_s(l_949, ((safe_mul_func_int8_t_s_s(0x3EL, (((0UL ^ (*l_722)) > (safe_lshift_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s(0x29L, 4)) > l_956), 2))) & l_949))) & l_949))), func_10((((g_64 < 8L) | 1UL) <= g_499), &g_603, g_603), &l_854, &g_603) && l_958[0][0]);
                for (g_64 = 3; (g_64 >= 0); g_64 -= 1)
                {
                    unsigned char l_961 = 0x7BL;
                    g_960 = (*l_722);
                    (*l_722) |= l_961;
                }
            }
        }
    }
    else
    {
        union U0 **l_968 = &g_93;
        int l_969[2][6] = {{0x43E6CDFEL,0x43E6CDFEL,0x43E6CDFEL,0x43E6CDFEL,0x43E6CDFEL,0x43E6CDFEL},{0x43E6CDFEL,0x43E6CDFEL,0x43E6CDFEL,0x43E6CDFEL,0x43E6CDFEL,0x43E6CDFEL}};
        union U0 l_970 = {0};
        unsigned short l_975 = 0xEC2EL;
        char l_1003 = 0xA1L;
        unsigned l_1032 = 0x8CEFFCFCL;
        unsigned char l_1039 = 255UL;
        unsigned short l_1105 = 0UL;
        int i, j;
        if ((safe_lshift_func_uint16_t_u_s((((void*)0 != &l_868[0]) == (safe_rshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((*g_917) != l_968) != (l_969[0][1] || 1L)), 0x6F00904EL)), g_233[3]))), 9)))
        {
            const int *l_971[2][7] = {{&g_499,&g_60,&l_969[0][1],&l_969[0][1],&g_60,&g_499,(void*)0},{&g_499,&g_60,&l_969[0][1],&l_969[0][1],&g_60,&g_499,(void*)0}};
            const int **l_972 = &l_971[0][3];
            int l_1045 = 0L;
            char l_1059 = 0xAEL;
            int i, j;
            (*l_972) = l_971[1][2];
            (*l_972) = (*l_972);
            if ((safe_lshift_func_int16_t_s_u(g_183, l_975)))
            {
                int l_976 = 8L;
                unsigned l_1004 = 18446744073709551608UL;
                unsigned l_1005 = 0x412CFD0FL;
                (*l_722) = (l_976 | l_976);
                if (l_976)
                {
                    unsigned char l_979 = 255UL;
                    (*l_722) = ((safe_mul_func_uint16_t_u_u(g_764[4], (g_261 != l_979))) > (*l_722));
                }
                else
                {
                    for (g_96 = 0; (g_96 > 45); ++g_96)
                    {
                        unsigned short l_992[3][6][5] = {{{1UL,5UL,0xB551L,0x0CBFL,0x1E44L},{0x2ABBL,0x1FB5L,0xCDBDL,0x5155L,0xDDBEL},{0x4E11L,0x1FB5L,6UL,65535UL,0x1FB5L},{65535UL,5UL,65535UL,0x5155L,0x1E44L},{65535UL,0xDDBEL,0xCDBDL,0x0CBFL,6UL},{0x4E11L,6UL,65535UL,65535UL,6UL}},{{0x2ABBL,5UL,6UL,0xB8BCL,0x1E44L},{1UL,6UL,0xCDBDL,0xB8BCL,0x1FB5L},{0x4E11L,0xDDBEL,0xB551L,65535UL,0xDDBEL},{1UL,5UL,0xB551L,0x0CBFL,0x1E44L},{0x2ABBL,0x1FB5L,0xCDBDL,0x5155L,0xDDBEL},{0x4E11L,0x1FB5L,6UL,65535UL,65535UL}},{{0xB8BCL,0x4E11L,0x7185L,65533UL,0xA865L},{0xB8BCL,0x2ABBL,0UL,1UL,1UL},{65535UL,1UL,0x7185L,0x7185L,1UL},{0x0CBFL,0x4E11L,65535UL,0x58EEL,0xA865L},{0x5155L,1UL,0UL,0x58EEL,65535UL},{65535UL,0x2ABBL,0x7C6CL,0x7185L,0x2ABBL}}};
                        int i, j, k;
                        (*l_722) = (safe_sub_func_int32_t_s_s(((safe_rshift_func_int16_t_s_u(((safe_mul_func_uint16_t_u_u((~(g_794 & (safe_rshift_func_uint16_t_u_s((safe_mul_func_int8_t_s_s((l_992[0][5][3] < l_976), (~(func_2((safe_mod_func_uint32_t_u_u(g_723, ((safe_rshift_func_uint8_t_u_s(((safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_u(l_992[0][5][3], g_183)), ((safe_rshift_func_int16_t_s_s(g_64, 6)) || l_1003))) < (-1L)), 2)) & 0x1253L))), l_1004) == g_764[1])))), g_60)))), g_794)) && l_1003), 9)) && (*l_722)), l_992[1][1][0]));
                        (*l_972) = &g_233[3];
                        l_1005++;
                        (*l_972) = (*l_972);
                    }
                    (*l_722) &= (safe_lshift_func_int8_t_s_s(l_975, ((void*)0 == &l_976)));
                }
            }
            else
            {
                unsigned short l_1018[3];
                int *l_1029 = &l_969[0][1];
                unsigned l_1064 = 0x59EF9A39L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1018[i] = 6UL;
                if (l_1003)
                {
                    int l_1017 = 0x8978128CL;
                    int l_1019 = 7L;
                    int l_1033[5][9][1];
                    int i, j, k;
                    for (i = 0; i < 5; i++)
                    {
                        for (j = 0; j < 9; j++)
                        {
                            for (k = 0; k < 1; k++)
                                l_1033[i][j][k] = 0xFA10C726L;
                        }
                    }
                    (*l_722) = 0x0B5C759BL;
                    for (g_60 = 5; (g_60 >= 0); g_60 -= 1)
                    {
                        if ((*l_722))
                            break;
                        l_1019 = ((safe_mul_func_uint16_t_u_u(((void*)0 != &l_868[3]), (((safe_unary_minus_func_uint32_t_u(4294967289UL)) && 0x29F7A0F1L) | (safe_rshift_func_int8_t_s_s(func_2((safe_add_func_uint32_t_u_u(l_1017, ((254UL != (0xDBF4L < (-1L))) && g_261))), g_499), l_1018[0]))))) || g_764[4]);
                    }
                    (*l_722) ^= (safe_rshift_func_int16_t_s_s((((func_2((func_2((l_1019 == 0x1E2BB2F9L), g_64) ^ l_969[1][1]), g_960) > 0x3BB15CAEL) <= g_183) ^ l_1032), 15));
                    if (((*l_1029) ^ l_1033[3][5][0]))
                    {
                        unsigned l_1034 = 0x306BFEBFL;
                        --l_1034;
                        (*l_722) = ((l_759[6] == (void*)0) > (((0x72851704L <= (safe_mod_func_int16_t_s_s(g_183, l_1039))) > 0x16DFL) && l_1003));
                    }
                    else
                    {
                        return g_764[0];
                    }
                }
                else
                {
                    unsigned short l_1040 = 0UL;
                    int l_1044 = 0L;
                    int l_1048 = 0x3F1E04BAL;
                    int l_1049 = (-1L);
                    int l_1050[10][6] = {{0xA482211BL,1L,1L,0xA482211BL,0x0EB2E8A2L,0xAE70DB2DL},{0xE36DC38EL,1L,0x0EB2E8A2L,0x861A4FF6L,0x0E9ABCCAL,8L},{(-1L),8L,0x00D45C30L,0x269B42AFL,0x0E9ABCCAL,(-1L)},{(-4L),1L,0x6BAF78E9L,(-4L),0x0EB2E8A2L,0x1DE22C48L},{4L,1L,0x0E9ABCCAL,0xE36DC38EL,0x0E9ABCCAL,1L},{0x269B42AFL,8L,0xAE70DB2DL,(-9L),0x0E9ABCCAL,0x0EB2E8A2L},{1L,1L,8L,1L,0x0EB2E8A2L,0x00D45C30L},{0x861A4FF6L,1L,(-1L),4L,0x0E9ABCCAL,0x6BAF78E9L},{(-9L),8L,0x1DE22C48L,(-1L),0x0E9ABCCAL,0x0E9ABCCAL},{0xA482211BL,1L,1L,0xA482211BL,0x0EB2E8A2L,0xAE70DB2DL}};
                    unsigned short l_1051[5];
                    short l_1068 = 0L;
                    int i, j;
                    for (i = 0; i < 5; i++)
                        l_1051[i] = 0x2D66L;
                    if (l_975)
                    {
                        int l_1043 = (-8L);
                        int l_1046[9][6] = {{(-1L),0xED4AF862L,0x27B580C4L,(-6L),(-1L),(-6L)},{(-1L),(-6L),(-1L),0xED4AF862L,0x35D866B8L,0L},{0xED4AF862L,0x35D866B8L,0L,(-7L),0x18842B47L,(-1L)},{1L,0L,(-1L),(-7L),0xED4AF862L,0xED4AF862L},{0xED4AF862L,(-1L),(-1L),0xED4AF862L,1L,(-1L)},{(-1L),1L,(-1L),(-6L),(-1L),0x3D9E4686L},{(-6L),(-7L),0x27B580C4L,(-6L),(-1L),0x35D866B8L},{1L,1L,0xED4AF862L,1L,1L,(-6L)},{0x27B580C4L,(-1L),1L,(-1L),0xED4AF862L,(-6L)}};
                        char l_1047 = (-5L);
                        int i, j;
                        l_1040++;
                        --l_1051[0];
                        (**g_917) = (*l_968);
                    }
                    else
                    {
                        l_1065 = ((((0xC544L | l_1054[2][1]) && (*l_1029)) ^ g_96) ^ (func_2((safe_mul_func_int16_t_s_s(g_499, (safe_mul_func_int8_t_s_s(((0x4802L >= l_1059) && (safe_rshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((g_60 == 8UL) < l_1064), 1L)), l_1051[0]))), 0L)))), g_96) && l_1003));
                    }
                    for (g_624 = 0; (g_624 > 23); g_624 = safe_add_func_uint32_t_u_u(g_624, 2))
                    {
                        (*l_1029) = l_1068;
                        if (l_1049)
                            continue;
                        return g_60;
                    }
                    (*l_722) = (~(g_1069 || 0x0B1248BBL));
                }
            }
            (*l_722) = l_1070[0][1];
        }
        else
        {
            char l_1071 = (-6L);
            int l_1072 = 0x279454C3L;
            int l_1073 = 3L;
            int l_1074 = 0x69D2CD10L;
            int l_1075 = 1L;
            int l_1076 = 0L;
            int l_1077 = 4L;
            int l_1078 = 0x2578E587L;
            int l_1079 = 0xA0DA1E03L;
            int l_1080 = (-1L);
            unsigned short l_1082[3][9] = {{0x7D4EL,0xAED5L,0x7D4EL,0xAED5L,0x7D4EL,0xAED5L,0x7D4EL,0xAED5L,0x7D4EL},{65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL,65533UL},{0x7D4EL,0xAED5L,0x7D4EL,0xAED5L,0x7D4EL,0xAED5L,0x7D4EL,0xAED5L,0x7D4EL}};
            int i, j;
            l_1082[2][2]++;
            g_68[2] = &l_969[0][1];
            for (g_261 = 0; (g_261 <= 2); g_261 += 1)
            {
                union U0 **l_1085 = &g_93;
                int l_1086 = 5L;
                for (g_603 = 0; (g_603 <= 2); g_603 += 1)
                {
                    union U0 ** const *l_1088[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                    int l_1094[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_1094[i] = 9L;
                    (*l_722) = (((l_1085 != (void*)0) != 65531UL) == (g_603 | (-1L)));
                    g_1095[1] = l_975;
                }
                g_475 = &l_1086;
                if (l_1075)
                    break;
                g_890[5][0][3] = &l_1086;
                for (l_1075 = 0; (l_1075 <= 2); l_1075 += 1)
                {
                    unsigned l_1096[8][7] = {{0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL},{0xFD0564BBL,0UL,0xFD0564BBL,0UL,0xFD0564BBL,0UL,0xFD0564BBL},{0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL},{0xFD0564BBL,0UL,0xFD0564BBL,0UL,0xFD0564BBL,0UL,0xFD0564BBL},{0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL},{0xFD0564BBL,0UL,0xFD0564BBL,0UL,0xFD0564BBL,0UL,0xFD0564BBL},{0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL,0x28B7545CL},{0xFD0564BBL,0UL,0xFD0564BBL,0UL,0xFD0564BBL,0UL,0xFD0564BBL}};
                    int i, j;
                    --l_1096[1][6];
                }
            }
        }
        (*l_722) = ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((&g_9 != (void*)0), ((1L & (safe_lshift_func_uint8_t_u_u(((void*)0 != (*l_968)), 0))) >= (func_5((*l_722), &l_1054[2][1], &g_9) != 1L)))), l_1105)) <= g_960);
    }
    return l_1106[0];
}







static const int func_2(const short p_3, int p_4)
{
    short l_693 = (-1L);
    char *l_695 = &g_9;
    char *l_696 = (void*)0;
    int l_708 = 1L;
    int l_709 = (-10L);
    int l_710 = 0x9FD6B237L;
    int l_711 = 0L;
    int *l_717 = &g_233[1];
    union U0 **l_718 = &g_93;
    if ((l_693 && ((safe_unary_minus_func_uint32_t_u(func_27(g_233[2], l_695, l_696, &g_9))) >= ((p_3 ^ g_499) < (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(g_9, l_693)), 7)), 65535UL))))))
    {
        int *l_707[6][1];
        unsigned l_712 = 0UL;
        int l_715 = 0L;
        int **l_716[7][10] = {{&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0]},{&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0]},{&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0]},{&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0]},{&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0]},{&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0]},{&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0],&l_707[1][0]}};
        int i, j;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 1; j++)
                l_707[i][j] = &g_499;
        }
        l_708 = (safe_lshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s((l_707[2][0] != (void*)0), 12)), 5));
        ++l_712;
        l_708 = ((l_695 == (void*)0) != l_715);
        l_717 = &l_708;
    }
    else
    {
        union U0 **l_719 = &g_93;
        l_719 = l_718;
        (*l_717) |= p_4;
    }
    for (g_65 = 23; (g_65 <= 10); --g_65)
    {
        return p_3;
    }
    return p_3;
}







static unsigned func_5(char p_6, char * p_7, char * p_8)
{
    int ***l_671 = &g_644;
    int *l_678 = &g_53;
    const union U0 **l_681 = (void*)0;
    (*l_678) &= p_6;
    for (g_65 = (-11); (g_65 > 31); g_65 = safe_add_func_uint8_t_u_u(g_65, 6))
    {
        const union U0 ***l_682 = &l_681;
        union U0 *l_683 = &g_129;
        int *l_684 = &g_53;
        if ((*l_678))
            break;
        (*l_682) = l_681;
        if ((l_683 == (void*)0))
        {
            int **l_685 = &g_68[0];
            (*l_685) = l_684;
            (*l_678) &= p_6;
        }
        else
        {
            for (g_60 = 0; (g_60 != 22); g_60++)
            {
                for (g_9 = 0; (g_9 == 16); ++g_9)
                {
                    return (*l_678);
                }
            }
        }
        for (g_603 = (-12); (g_603 > (-7)); ++g_603)
        {
            int l_692 = 0x7CF0BDD0L;
            if (l_692)
                break;
        }
    }
    return (*l_678);
}







static char * func_10(unsigned p_11, char * p_12, unsigned char p_13)
{
    unsigned char l_660[2];
    int l_661 = (-4L);
    int **l_662 = (void*)0;
    int **l_663 = &g_68[1];
    int i;
    for (i = 0; i < 2; i++)
        l_660[i] = 0xC9L;
    l_661 ^= l_660[0];
    l_661 = (-4L);
    (*l_663) = &l_661;
    return &g_9;
}







static unsigned func_17(char * p_18, char p_19, char p_20, union U0 p_21)
{
    char *l_501 = &g_9;
    unsigned char l_535[10] = {0xA0L,0xA0L,0xA0L,0xA0L,0xA0L,0xA0L,0xA0L,0xA0L,0xA0L,0xA0L};
    int *l_544 = (void*)0;
    char *l_582 = (void*)0;
    int l_601[4] = {9L,9L,9L,9L};
    const int *l_637 = (void*)0;
    int **l_639 = &g_68[3];
    unsigned l_648 = 0x2B286FB8L;
    union U0 *l_659 = &g_129;
    int i;
    for (p_20 = 0; (p_20 <= 0); p_20 += 1)
    {
        unsigned l_46 = 0xAA9D707DL;
        int *l_569 = &g_261;
        char *l_583[5];
        const int **l_587[9];
        int l_594[8][9][3] = {{{(-7L),0x4616F34FL,(-8L)},{0xCA3F681BL,0xF090FFBDL,0x3BCD0BABL},{0xBCDE727CL,(-7L),0xBCDE727CL},{1L,0xBE88C4A8L,0L},{(-4L),1L,1L},{0xFE8C2DF3L,0xF4AA7C86L,0L},{5L,1L,(-1L)},{0xFE8C2DF3L,0x4616F34FL,0x8856F305L},{(-4L),0xB61EF480L,(-1L)}},{{1L,0xCB0CA113L,0x253A435DL},{0xBCDE727CL,3L,0x65A80ACCL},{0xCA3F681BL,0xC7280DC4L,1L},{(-7L),0x352AD078L,0x20927DFEL},{0x1614E89CL,0xF02787D1L,(-8L)},{0xCB0CA113L,0xFE8C2DF3L,0xC1A645D7L},{0x1CBFD7E8L,0x1614E89CL,(-8L)},{1L,0x44557EA7L,(-4L)},{0x90EDE27EL,0xBE88C4A8L,0x2FC78E41L}},{{1L,0xF4AA7C86L,0x74579683L},{0L,0x253A435DL,(-6L)},{0xF090FFBDL,0xF02787D1L,0x8856F305L},{(-7L),0x0198EB45L,0x8856F305L},{0xFF4F370BL,0x74579683L,(-1L)},{0x17B50232L,0x9C8DDC3BL,3L},{0x945F81CEL,(-1L),0x9C8DDC3BL},{0xDE0BD5AAL,0xBE88C4A8L,0xCA3F681BL},{(-8L),(-1L),(-1L)}},{{0x74579683L,0xA1CE969DL,(-1L)},{0x21382F73L,(-8L),0x0DF3B6D8L},{0xFF4F370BL,0x253A435DL,1L},{1L,(-1L),(-4L)},{0xF02787D1L,0xDE0BD5AAL,0xDC75D9EDL},{0xEB865DDAL,0xF02787D1L,0xF02787D1L},{0xFF2E9391L,(-1L),1L},{0xF4AA7C86L,(-1L),0L},{0xC1A645D7L,(-1L),7L}},{{1L,0x90EDE27EL,0xEA5881B4L},{0x945F81CEL,(-1L),(-4L)},{0x1CBFD7E8L,(-1L),0x8856F305L},{0xDE0BD5AAL,(-1L),0x17B50232L},{(-1L),0xF02787D1L,(-5L)},{1L,0xDE0BD5AAL,0x0DF3B6D8L},{0xC1A645D7L,(-1L),(-1L)},{1L,0x253A435DL,0xB88C5F52L},{0xF02787D1L,(-8L),3L}},{{0x309FA369L,0xA1CE969DL,0xFF2E9391L},{0xA1CE969DL,(-1L),0x945F81CEL},{1L,0xBE88C4A8L,1L},{0x352AD078L,(-1L),7L},{0x21382F73L,0x9C8DDC3BL,0x671D334FL},{(-1L),0x74579683L,0xB88C5F52L},{0x1CBFD7E8L,4L,0xCA3F681BL},{0x1CBFD7E8L,0xB7080122L,0x21382F73L},{(-1L),0xF02787D1L,0xF090FFBDL}},{{0xFF4F370BL,(-1L),0xC1A645D7L},{(-1L),6L,0x65A80ACCL},{0xDE0BD5AAL,0xA1CE969DL,(-7L)},{0x051E06CEL,0x0DF3B6D8L,0x9C8DDC3BL},{1L,0xB7080122L,5L},{5L,(-4L),(-10L)},{0xBCDE727CL,0xF090FFBDL,0xEA5881B4L},{(-1L),0xEA5881B4L,0L},{0x3BCD0BABL,0xF4AA7C86L,(-7L)}},{{(-10L),(-10L),(-7L)},{1L,(-6L),(-1L)},{(-1L),0xEB865DDAL,0xB61EF480L},{0xEA5881B4L,0x051E06CEL,(-1L)},{0x352AD078L,(-1L),0xB61EF480L},{(-1L),(-1L),(-1L)},{(-8L),6L,(-7L)},{0xB7080122L,1L,(-7L)},{0xC7280DC4L,(-1L),0L}}};
        unsigned l_606 = 0x6D9B6A7CL;
        char * const l_616 = &g_9;
        char l_625 = 1L;
        int **l_643 = &l_544;
        int i, j, k;
        for (i = 0; i < 5; i++)
            l_583[i] = (void*)0;
        for (i = 0; i < 9; i++)
            l_587[i] = (void*)0;
        if (g_9)
        {
            int l_26 = 0xC0223DECL;
            char *l_509 = &g_9;
            int l_556 = 0xA32D47FFL;
            int l_567 = 0xD63FA6F7L;
            for (p_19 = 0; (p_19 <= 0); p_19 += 1)
            {
                char l_51 = (-1L);
                const int *l_546 = &g_499;
                unsigned char l_550 = 0x04L;
                int **l_568[1][9][5] = {{{&l_544,&g_68[3],&g_68[2],&g_68[0],&g_68[3]},{(void*)0,&g_68[3],&g_68[0],(void*)0,&g_68[2]},{&g_68[3],&l_544,&l_544,&g_68[3],(void*)0},{(void*)0,&g_68[2],&g_68[3],&g_68[2],(void*)0},{&l_544,(void*)0,&g_68[2],&g_68[2],&g_68[2]},{&g_68[2],&g_68[2],(void*)0,&g_68[2],&g_68[3]},{&g_68[2],&l_544,(void*)0,&g_68[3],&l_544},{&g_68[0],(void*)0,&g_68[2],(void*)0,&g_68[0]},{&g_68[2],&l_544,&g_68[2],&g_68[2],&g_68[2]}}};
                int i, j, k;
            }
        }
        else
        {
            unsigned char l_584 = 0x61L;
            unsigned l_588 = 0xCA2ABF08L;
            int l_595 = 0xDBA52002L;
            int l_597 = 1L;
            int l_605[6] = {0x948DB769L,0x948DB769L,0x948DB769L,0x948DB769L,0x948DB769L,0x948DB769L};
            int *l_609[7][10][3] = {{{&l_601[3],&l_605[0],&l_605[4]},{(void*)0,&g_499,&l_605[5]},{(void*)0,&l_594[3][3][0],&g_499},{&g_261,&l_605[5],(void*)0},{&l_601[3],&l_594[3][3][0],&g_233[2]},{&l_601[2],&g_499,&l_597},{&g_233[6],&l_605[0],&g_499},{&l_601[2],&g_261,&g_261},{&l_601[3],&l_601[3],&l_605[4]},{&g_261,&g_499,&g_261}},{{(void*)0,(void*)0,&g_499},{(void*)0,&l_605[5],&l_597},{&l_601[3],(void*)0,&g_233[2]},{(void*)0,&g_499,(void*)0},{&g_233[6],&l_601[3],&g_499},{(void*)0,&g_261,&l_605[5]},{&l_601[3],&l_605[0],&l_605[4]},{(void*)0,&g_499,&l_605[5]},{(void*)0,&l_594[3][3][0],&g_499},{&g_261,&l_605[5],(void*)0}},{{&l_601[3],&l_594[3][3][0],&g_233[2]},{&l_601[2],&g_499,&l_597},{&g_233[6],&l_605[0],&g_499},{&l_601[2],&g_261,&g_261},{&l_601[3],&l_601[3],&l_605[4]},{&g_261,&g_499,&g_261},{(void*)0,(void*)0,&g_499},{(void*)0,&l_605[5],&l_597},{&l_601[3],&l_601[1],&l_605[3]},{&g_499,&g_60,&l_597}},{{(void*)0,&l_594[3][4][1],&g_60},{&g_499,&l_601[3],&g_53},{&l_597,&g_60,&l_595},{&l_597,&g_60,&g_53},{&g_499,&l_594[4][6][2],&g_60},{&l_594[3][8][0],&g_53,&l_597},{&l_597,&l_594[4][6][2],&l_605[3]},{(void*)0,&g_60,(void*)0},{(void*)0,&g_60,&g_60},{(void*)0,&l_601[3],&l_601[3]}},{{&l_597,&l_594[3][4][1],&l_595},{&l_594[3][8][0],&g_60,&l_601[3]},{&g_499,&l_601[1],&g_60},{&l_597,&g_53,(void*)0},{&l_597,&l_601[1],&l_605[3]},{&g_499,&g_60,&l_597},{(void*)0,&l_594[3][4][1],&g_60},{&g_499,&l_601[3],&g_53},{&l_597,&g_60,&l_595},{&l_597,&g_60,&g_53}},{{&g_499,&l_594[4][6][2],&g_60},{&l_594[3][8][0],&g_53,&l_597},{&l_597,&l_594[4][6][2],&l_605[3]},{(void*)0,&g_60,(void*)0},{(void*)0,&g_60,&g_60},{(void*)0,&l_601[3],&l_601[3]},{&l_597,&l_594[3][4][1],&l_595},{&l_594[3][8][0],&g_60,&l_601[3]},{&g_499,&l_601[1],&g_60},{&l_597,&g_53,(void*)0}},{{&l_597,&l_601[1],&l_605[3]},{&g_499,&g_60,&l_597},{(void*)0,&l_594[3][4][1],&g_60},{&g_499,&l_601[3],&g_53},{&l_597,&g_60,&l_595},{&l_597,&g_60,&g_53},{&g_499,&l_594[4][6][2],&g_60},{&l_594[3][8][0],&g_53,&l_597},{&l_597,&l_594[4][6][2],&l_605[3]},{(void*)0,&g_60,(void*)0}}};
            int i, j, k;
            for (g_96 = 0; (g_96 <= 0); g_96 += 1)
            {
                unsigned l_570 = 1UL;
                if ((*g_475))
                    break;
                (*l_569) = l_570;
            }
            for (g_53 = 0; (g_53 >= 0); g_53 -= 1)
            {
                int l_590 = (-9L);
                int l_599 = 2L;
                int l_600 = 1L;
                unsigned short l_619 = 3UL;
                int l_627 = 0xB08A0B70L;
                int l_630 = 0L;
                int l_632 = 3L;
                int l_633[7][9] = {{(-1L),0L,0L,(-1L),0L,0L,(-1L),0L,0L},{8L,0L,0L,8L,0L,0L,8L,0L,0L},{(-1L),0L,0L,(-1L),0L,0L,(-1L),0L,0L},{8L,0L,0L,8L,0L,0L,8L,0L,0L},{(-1L),0L,0L,(-1L),0L,0L,(-1L),0L,0L},{8L,0L,0L,8L,0L,0L,8L,0L,0L},{(-1L),0L,0L,(-1L),0L,0L,(-1L),0L,0L}};
                int i, j;
                for (g_96 = 0; (g_96 <= 9); g_96 += 1)
                {
                    char *l_581[7][10] = {{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,(void*)0,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,(void*)0,&g_9,&g_9,&g_9,&g_9},{(void*)0,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,(void*)0},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,(void*)0,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,(void*)0},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,(void*)0,&g_9,&g_9}};
                    const int **l_586 = &g_475;
                    const int ***l_585[5][1] = {{&l_586},{&l_586},{&l_586},{&l_586},{&l_586}};
                    int l_596 = (-2L);
                    int l_598 = 0x8AC527A8L;
                    int l_602 = 0x112F9550L;
                    int l_604 = 0L;
                    int i, j;
                    l_584 |= (safe_mul_func_int16_t_s_s(((l_535[g_96] != p_20) && func_27((((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((func_27(p_20, l_581[2][4], l_582, &g_9) != (g_499 & p_20)), 5)), g_53)), g_499)), 4)) > 0xB96AL) ^ 0xC5253DAAL), l_583[4], &g_9, &g_9)), g_60));
                    l_587[0] = &g_475;
                    if (l_588)
                    {
                        union U0 **l_589 = &g_93;
                        int *l_591 = (void*)0;
                        int *l_592 = &g_233[6];
                        int *l_593[1][1];
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_593[i][j] = (void*)0;
                        }
                        (*l_589) = &g_129;
                        --l_606;
                        (*l_586) = l_609[5][4][1];
                    }
                    else
                    {
                        (*l_569) = p_19;
                        if (p_19)
                            continue;
                        return l_600;
                    }
                    return l_590;
                }
                for (p_19 = 3; (p_19 <= 9); p_19 += 1)
                {
                    (*l_569) = (safe_mul_func_int16_t_s_s(g_233[3], (safe_lshift_func_int8_t_s_u((safe_sub_func_uint16_t_u_u(0UL, ((void*)0 == l_616))), 4))));
                    for (g_261 = 9; (g_261 >= 0); g_261 -= 1)
                    {
                        l_599 = (p_20 && ((&g_499 != (void*)0) & (0xCD2D6E8BL && (&g_68[3] != (void*)0))));
                    }
                    if (p_20)
                        continue;
                }
                for (l_595 = 0; (l_595 <= 0); l_595 += 1)
                {
                    unsigned char l_622 = 255UL;
                    int l_623 = 0x97C754C8L;
                    int l_626 = 0x9A19097EL;
                    int l_628 = 0x35947256L;
                    int l_629 = (-1L);
                    const int *l_638 = &l_597;
                    for (g_96 = 0; (g_96 <= 0); g_96 += 1)
                    {
                        int l_631 = 2L;
                        unsigned short l_634[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_634[i] = 9UL;
                        l_605[(g_96 + 3)] = ((func_27(l_594[(g_96 + 3)][(g_53 + 7)][l_595], l_583[3], &p_19, &g_9) < (((safe_mul_func_uint8_t_u_u(l_601[(p_20 + 2)], l_619)) | p_19) <= (safe_sub_func_uint8_t_u_u((((g_9 & p_20) & l_622) > l_594[(g_96 + 3)][(g_53 + 7)][l_595]), l_623)))) || 250UL);
                        l_634[0]--;
                        l_638 = l_637;
                    }
                }
                return p_20;
            }
            l_544 = &l_605[0];
            if (p_19)
                break;
        }
    }
    if ((!func_47((*p_18), (safe_add_func_int8_t_s_s(l_648, 1L)), (((safe_lshift_func_int16_t_s_s(g_499, func_42(p_19, &g_603, &g_9))) && ((void*)0 == &g_129)) >= (*p_18)))))
    {
        for (g_261 = (-28); (g_261 == (-24)); g_261 = safe_add_func_int32_t_s_s(g_261, 6))
        {
            int *l_653 = &g_53;
            (*l_653) &= (-1L);
        }
        for (g_183 = 0; (g_183 <= 25); ++g_183)
        {
            char l_656 = 0xE1L;
            return l_656;
        }
    }
    else
    {
        unsigned l_657 = 1UL;
        int *l_658 = &l_601[3];
        (*l_658) = (l_657 != p_20);
    }
    l_601[2] ^= ((void*)0 == l_659);
    return g_233[3];
}







static char func_27(unsigned p_28, char * p_29, char * p_30, char * p_31)
{
    const unsigned char l_512 = 255UL;
    int **l_518 = &g_68[3];
    int ***l_517 = &l_518;
    int *l_519 = &g_233[0];
    (*l_519) |= (safe_mul_func_int16_t_s_s(g_60, (l_512 <= (safe_mul_func_int8_t_s_s((l_512 >= (safe_lshift_func_uint16_t_u_u(g_499, 15))), (((l_517 == &l_518) <= 0x2D23L) > (l_512 && (1L >= 0x2605L))))))));
    for (g_261 = 0; (g_261 >= (-14)); g_261--)
    {
        unsigned char l_522 = 249UL;
        return l_522;
    }
    for (g_64 = 0; (g_64 <= 6); g_64 += 1)
    {
        int i;
        g_233[g_64] = (&l_518 == (void*)0);
    }
    return (*p_31);
}







static char * func_32(unsigned p_33, char * p_34)
{
    unsigned l_506 = 0xB5FCBFB2L;
    int *l_507 = &g_499;
    char *l_508[10][6][2] = {{{&g_9,&g_9},{&g_9,&g_9},{&g_9,(void*)0},{(void*)0,&g_9},{(void*)0,&g_9},{&g_9,&g_9}},{{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{(void*)0,&g_9},{(void*)0,(void*)0}},{{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,(void*)0},{&g_9,&g_9}},{{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,(void*)0},{(void*)0,&g_9},{&g_9,&g_9}},{{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9}},{{(void*)0,(void*)0},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,(void*)0}},{{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,(void*)0},{(void*)0,&g_9}},{{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9}},{{&g_9,&g_9},{(void*)0,(void*)0},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9}},{{&g_9,(void*)0},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,&g_9},{&g_9,(void*)0}}};
    int i, j, k;
    (*l_507) = (safe_rshift_func_uint8_t_u_u((!((((void*)0 == g_498) >= (((-6L) >= (0xAF1EL < p_33)) ^ g_261)) >= p_33)), g_96));
    return l_508[4][2][0];
}







static short func_35(unsigned char p_36, int p_37)
{
    int **l_240 = &g_68[3];
    int *l_241 = &g_53;
    int *l_242 = &g_233[1];
    int *l_243 = &g_233[6];
    int *l_244 = (void*)0;
    int *l_245 = (void*)0;
    int *l_246 = &g_233[4];
    int *l_247[4];
    int l_248[8][2][10] = {{{(-1L),0x987CA8C5L,0x8C40FE08L,0xC45B127DL,0xD63C0136L,0x18DBAE1EL,(-1L),0x3DFD6F59L,0L,0xC45B127DL},{0x8C40FE08L,(-7L),0L,0x18DBAE1EL,0xBCC292E9L,0x18DBAE1EL,0L,(-7L),0x8C40FE08L,0x3DFD6F59L}},{{(-1L),(-4L),0L,(-7L),0xBCC292E9L,(-4L),7L,0xC45B127DL,0L,0xC45B127DL},{0xBCC292E9L,0x987CA8C5L,0xD63C0136L,(-7L),0xD63C0136L,0x987CA8C5L,0xBCC292E9L,0x3DFD6F59L,0x8C40FE08L,(-7L)}},{{0x8C40FE08L,0xC45B127DL,0xD63C0136L,0x18DBAE1EL,(-1L),0x3DFD6F59L,0L,0xC45B127DL,0L,0x3DFD6F59L},{7L,0xC45B127DL,0L,0xC45B127DL,7L,(-4L),0xBCC292E9L,(-7L),0L,(-4L)}},{{7L,0x987CA8C5L,0L,(-4L),0xD63C0136L,0x3DFD6F59L,7L,0x3DFD6F59L,0xD63C0136L,(-4L)},{0x8C40FE08L,(-4L),0x8C40FE08L,0x18DBAE1EL,7L,0x987CA8C5L,0L,(-4L),0xD63C0136L,0x3DFD6F59L}},{{0xBCC292E9L,(-7L),0L,(-4L),(-1L),(-4L),(-1L),(-4L),0L,(-7L)},{(-1L),0x987CA8C5L,0x8C40FE08L,(-4L),0L,0x987CA8C5L,7L,0x18DBAE1EL,0x8C40FE08L,(-4L)}},{{0xD63C0136L,0xC45B127DL,0x8C40FE08L,0x987CA8C5L,(-1L),0x987CA8C5L,0x8C40FE08L,0xC45B127DL,0xD63C0136L,0x18DBAE1EL},{7L,(-7L),0x85E9CE2AL,0xC45B127DL,(-1L),0x9D4712D9L,0xBCC292E9L,(-4L),0x85E9CE2AL,(-4L)}},{{(-1L),0x3DFD6F59L,0L,0xC45B127DL,0L,0x3DFD6F59L,(-1L),0x18DBAE1EL,0xD63C0136L,0xC45B127DL},{0xD63C0136L,(-4L),0L,0x987CA8C5L,7L,0x18DBAE1EL,0x8C40FE08L,(-4L),0x8C40FE08L,0x18DBAE1EL}},{{0xBCC292E9L,(-4L),0x85E9CE2AL,(-4L),0xBCC292E9L,0x9D4712D9L,(-1L),0xC45B127DL,0x85E9CE2AL,(-7L)},{0xBCC292E9L,0x3DFD6F59L,0x8C40FE08L,(-7L),0L,0x18DBAE1EL,0xBCC292E9L,0x18DBAE1EL,0L,(-7L)}}};
    unsigned l_249 = 0x007DCDA6L;
    union U0 *l_259 = &g_129;
    unsigned short l_332 = 65529UL;
    unsigned l_362 = 0x28A4E22AL;
    unsigned char l_385 = 1UL;
    int l_486 = 4L;
    unsigned l_488 = 0x003EC2B2L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_247[i] = &g_233[1];
    (*l_240) = &p_37;
    l_249--;
    if ((*l_242))
    {
        const int l_254 = 1L;
        union U0 *l_260 = &g_129;
        int l_289 = (-9L);
        int l_291 = 1L;
        int l_292 = 0x4CCF6A44L;
        short l_324 = 0xCB38L;
        int **l_327 = (void*)0;
        int *l_335[10][10] = {{(void*)0,&l_291,(void*)0,&g_233[2],(void*)0,&g_261,&g_261,&l_292,&g_261,&g_233[3]},{(void*)0,&l_291,(void*)0,&l_291,&g_53,&g_53,(void*)0,&g_261,&g_233[3],(void*)0},{(void*)0,&g_53,&g_60,&g_53,&l_289,&l_289,&g_53,&g_60,&g_53,&g_233[3]},{&g_261,&l_291,&g_261,&g_261,&l_289,&g_233[2],&l_291,&g_233[3],&l_289,&l_291},{(void*)0,(void*)0,&l_291,&l_291,&l_289,&g_233[0],&g_233[5],&l_292,&g_60,&g_233[3]},{&l_289,&l_291,(void*)0,(void*)0,(void*)0,&g_233[3],&l_289,&g_60,&g_261,(void*)0},{&l_292,&g_53,(void*)0,&g_261,&g_233[4],&g_60,(void*)0,&g_53,&g_233[3],&g_53},{&g_261,&g_261,&g_233[3],(void*)0,&g_233[3],&g_261,&g_261,&g_53,&l_291,&g_60},{&l_292,&g_261,&g_261,&g_233[3],&l_291,&g_233[3],(void*)0,&g_60,(void*)0,&g_53},{&g_233[4],&g_261,&g_53,&l_291,(void*)0,&l_292,&g_261,&g_60,(void*)0,&g_53}};
        unsigned l_348 = 0xB543D730L;
        const unsigned l_351 = 1UL;
        int l_373 = 1L;
        unsigned short l_376 = 65530UL;
        int i, j;
        g_68[3] = &p_37;
        for (g_64 = 14; (g_64 <= (-19)); g_64--)
        {
            int l_262[4] = {0x2BA6EB3FL,0x2BA6EB3FL,0x2BA6EB3FL,0x2BA6EB3FL};
            int i;
            (*l_246) |= l_254;
            (*l_242) = ((&p_37 == (void*)0) ^ 0L);
            (*l_243) = (g_64 <= ((safe_mod_func_int32_t_s_s((((g_64 != (((safe_rshift_func_int16_t_s_s(p_36, 5)) >= ((*l_246) >= (l_254 != p_37))) && ((*l_241) && (l_259 != l_260)))) <= l_254) >= (-7L)), (*l_246))) && g_261));
            l_262[3] ^= (&l_260 == &g_93);
        }
        for (g_96 = 0; (g_96 >= 26); g_96 = safe_add_func_uint16_t_u_u(g_96, 5))
        {
            int **l_269 = (void*)0;
            int * const l_298 = &g_60;
            for (p_36 = 0; (p_36 < 44); p_36 = safe_add_func_int32_t_s_s(p_36, 3))
            {
                unsigned short l_274 = 65535UL;
                (*l_241) |= (((safe_add_func_int32_t_s_s((((&l_246 == l_269) < l_254) < (safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(g_233[1], (0x487D3886L > (l_274 > (*l_242))))), (0xCEA9L >= ((safe_rshift_func_uint16_t_u_u((((safe_add_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((((safe_mul_func_int16_t_s_s(p_36, p_37)) >= 1UL) <= (-4L)), p_37)), 0xAEFDL)) > p_36) == 1UL), (*l_243))) != g_183))))), l_254)) ^ l_254) && p_37);
                return g_53;
            }
            if ((safe_add_func_int8_t_s_s((g_65 != g_60), l_254)))
            {
                unsigned short l_293 = 65529UL;
                (*l_242) = p_36;
                (*l_243) = 0xFA6749FEL;
                for (g_65 = 11; (g_65 >= 9); g_65 = safe_sub_func_int8_t_s_s(g_65, 1))
                {
                    int l_290[6];
                    int ** const l_296 = &l_247[2];
                    int ***l_297 = &l_240;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_290[i] = 1L;
                    for (g_183 = 0; (g_183 < 57); g_183++)
                    {
                        (*l_240) = &g_261;
                        (*l_240) = &g_261;
                    }
                    l_293++;
                    (*l_297) = l_296;
                }
                (*l_240) = &p_37;
            }
            else
            {
                int **l_299 = &g_68[3];
                (*l_299) = l_298;
            }
        }
        for (p_37 = 0; (p_37 <= 26); p_37 = safe_add_func_uint8_t_u_u(p_37, 9))
        {
            unsigned l_317 = 0x9B8753A3L;
            int l_331 = 1L;
            short l_354 = 0L;
            int l_370[3][10][8] = {{{0x1DCDE16BL,0xB14E0B0FL,0x1330A7F2L,0x7C547BACL,0L,0x19BA58ECL,0L,1L},{0x652DF583L,1L,0x8ABC3AD1L,0x0C96C7BEL,(-6L),(-1L),0L,0L},{0x3BDE2CD4L,0xBB030C00L,0xD5B746D0L,1L,0x393F36CBL,1L,0L,0xD5B746D0L},{0x3EF94E31L,(-1L),0x5AE30386L,0x6BDEAA82L,0xB21BCFB3L,(-10L),0xB14E0B0FL,(-4L)},{5L,0xECC79834L,0x3EF94E31L,8L,0L,1L,0x622D0028L,6L},{0L,0x96BA6F48L,0x74B48B60L,0x43BF57C5L,0x652DF583L,1L,(-4L),0x7CA7E5A9L},{(-8L),0x622D0028L,0x19BA58ECL,0L,0xAE86E736L,0L,0x3BDE2CD4L,0L},{0x43BF57C5L,0x55B17CB2L,0L,(-4L),0x622D0028L,(-1L),0x5872CF65L,0x74B48B60L},{0xEEA663EBL,7L,0xBB030C00L,0x4EA23438L,0xA7ADC6A9L,0x1DCDE16BL,0x8ABC3AD1L,0x9B72CFECL},{0L,(-6L),0xEDF9B02AL,0x6FAFF094L,6L,(-1L),7L,1L}},{{0xCEE050E7L,0L,1L,0x506FB521L,0xEEA663EBL,0xEEA663EBL,0x506FB521L,1L},{0x1DCDE16BL,0x1DCDE16BL,1L,0xB8A4E314L,7L,(-1L),0x7CA7E5A9L,(-4L)},{0x393F36CBL,0x3C3DFB06L,0xAE86E736L,0x9B72CFECL,8L,0x74B48B60L,0xB21BCFB3L,(-4L)},{0x3C3DFB06L,0x7C547BACL,0x8ABC3AD1L,0xB8A4E314L,0x0671AC47L,0x1330A7F2L,0L,1L},{0x5872CF65L,0xEDF9B02AL,0xB8FD4B3FL,0x1DCDE16BL,0x7CA7E5A9L,(-6L),(-4L),1L},{0xED4A7A37L,4L,0L,(-10L),0x0741B08AL,7L,0xBB030C00L,0L},{0x19BA58ECL,1L,0x8A1056ECL,(-1L),0x3D215E4AL,6L,7L,0x58EE1654L},{0x622D0028L,(-4L),3L,1L,0xEDF9B02AL,1L,6L,0L},{0x72D3FEC5L,1L,(-1L),0xCEE050E7L,8L,(-1L),(-4L),0x55B17CB2L},{0L,0xBC9D4306L,0xA7ADC6A9L,0x46871D43L,0x55B17CB2L,0x1DCDE16BL,0xB8FD4B3FL,5L}},{{1L,0xAE86E736L,0x6FAFF094L,0L,0xAC4FB278L,0L,0x3BDE2CD4L,0xD5B746D0L},{0x3D8928E7L,(-1L),0xCEE050E7L,0x3D215E4AL,1L,1L,0xA7ADC6A9L,0x32B0800DL},{4L,0x3C3DFB06L,(-4L),0L,1L,0L,0x5B8F5E76L,0x622D0028L},{(-1L),0L,0x0671AC47L,0x58EE1654L,0x74B48B60L,0x32B0800DL,8L,(-4L)},{0xECC79834L,0x0741B08AL,0L,0x43BF57C5L,0x622D0028L,8L,0x622D0028L,0x43BF57C5L},{(-10L),0L,(-10L),0x59095C9FL,0x9B72CFECL,0xECC79834L,(-1L),0x8A1056ECL},{0x58EE1654L,0xB21BCFB3L,0x652DF583L,0x0C96C7BEL,0x6FAFF094L,0L,0xC89DAF2EL,0x9B72CFECL},{0L,0L,0x0671AC47L,(-10L),0xC89DAF2EL,0x3D215E4AL,1L,0x7CA7E5A9L},{(-1L),0x5B8F5E76L,0x32B0800DL,0xB21BCFB3L,0L,0x59095C9FL,1L,5L},{0xAE86E736L,1L,6L,(-1L),0L,0x5872CF65L,0x3C3DFB06L,0x32B0800DL}}};
            int i, j, k;
            (*l_242) ^= (-1L);
            (*l_240) = (void*)0;
            for (g_65 = (-26); (g_65 != 18); g_65 = safe_add_func_int32_t_s_s(g_65, 2))
            {
                unsigned l_308 = 0x7D50B3FAL;
                int l_330 = 0xFAAFD4B3L;
                int l_367 = 0x5F0E4343L;
                int l_368 = 1L;
                int l_369 = (-7L);
                int l_371 = 1L;
                int l_372 = 0x154FA8E3L;
                int l_374[4] = {(-1L),(-1L),(-1L),(-1L)};
                char l_375 = 0L;
                int i;
                if (((safe_rshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s(0xF768L, 3)) & (((void*)0 != &l_240) >= l_308)), (safe_lshift_func_uint8_t_u_s((0L || p_37), (safe_rshift_func_uint16_t_u_u(0xCF15L, (safe_mod_func_int16_t_s_s(((g_96 || ((safe_rshift_func_int16_t_s_s(p_36, 10)) & l_308)) < l_308), 0x89F4L)))))))) < 0xAEL))
                {
                    int *l_336 = &g_261;
                    l_317++;
                    if ((*l_246))
                    {
                        int **l_328 = &l_246;
                        int l_329 = 0L;
                        (*l_246) = ((g_233[3] | (((safe_add_func_uint32_t_u_u((((void*)0 != &g_9) > 4294967295UL), p_36)) & (safe_lshift_func_uint8_t_u_s(0x71L, 5))) < (l_324 ^ ((0x844BE889L || g_64) && 0x8DA12F7EL)))) <= p_36);
                        (*l_246) = (g_9 != (safe_add_func_uint8_t_u_u((*l_242), l_308)));
                        (*l_241) &= ((l_327 != l_328) ^ p_37);
                        ++l_332;
                    }
                    else
                    {
                        (*l_240) = &l_331;
                        (*l_240) = &g_60;
                        l_336 = l_335[2][6];
                        (*l_242) = p_36;
                    }
                    (*l_241) = p_36;
                }
                else
                {
                    unsigned l_337 = 0xF1629423L;
                    --l_337;
                }
                if ((*l_246))
                {
                    (*l_240) = &p_37;
                    for (g_183 = 0; (g_183 <= 6); g_183 += 1)
                    {
                        int i;
                        (*l_241) = (1L || (0x291AL != g_233[g_183]));
                        if (g_233[g_183])
                            break;
                    }
                }
                else
                {
                    unsigned l_355[7][4] = {{0x3278CB8FL,5UL,0x8FBCA930L,0x8FBCA930L},{0xE07C89B1L,0xE07C89B1L,2UL,0xEDE6BDD7L},{0xE07C89B1L,18446744073709551606UL,0x8FBCA930L,0xE07C89B1L},{0x3278CB8FL,0xEDE6BDD7L,0x3278CB8FL,0x8FBCA930L},{5UL,0xEDE6BDD7L,2UL,0xE07C89B1L},{0xEDE6BDD7L,18446744073709551606UL,18446744073709551606UL,0xEDE6BDD7L},{0x3278CB8FL,0xE07C89B1L,18446744073709551606UL,0x8FBCA930L}};
                    int i, j;
                    for (g_183 = 0; (g_183 < 44); g_183++)
                    {
                        union U0 *l_342 = (void*)0;
                        union U0 **l_343 = &l_259;
                        (*l_343) = l_342;
                        (*l_246) &= (safe_rshift_func_int8_t_s_s((-3L), 4));
                    }
                    for (l_292 = 0; (l_292 < (-10)); l_292 = safe_sub_func_uint32_t_u_u(l_292, 8))
                    {
                        l_348--;
                        (*l_243) = (l_351 != (safe_add_func_uint16_t_u_u((p_36 || (p_36 & p_37)), l_354)));
                        if (l_355[5][3])
                            continue;
                        (*l_246) = 0x593FC4E6L;
                    }
                    (*l_242) &= (g_64 || ((safe_add_func_uint16_t_u_u(0xF358L, (safe_lshift_func_uint8_t_u_s(3UL, 2)))) | ((((safe_mod_func_uint8_t_u_u((l_355[5][3] ^ l_362), p_37)) <= ((l_330 & (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(p_37, l_354)), p_36))) == p_37)) || p_37) & 0x8F74L)));
                }
                l_376--;
                (*l_241) ^= ((p_37 == (safe_sub_func_uint8_t_u_u(p_36, (safe_lshift_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(g_233[3], (g_261 == l_308))), 9))))) || p_37);
            }
            l_385++;
        }
    }
    else
    {
        char *l_397 = &g_9;
        int l_399[3];
        char l_417 = (-5L);
        short l_437 = (-1L);
        int i;
        for (i = 0; i < 3; i++)
            l_399[i] = 0x5E66E7FBL;
        for (p_37 = 0; (p_37 != 5); p_37 = safe_add_func_int32_t_s_s(p_37, 1))
        {
            union U0 **l_394 = (void*)0;
            int l_398 = 4L;
            int l_400[6][1] = {{0x1CA0DDABL},{(-5L)},{0x1CA0DDABL},{(-5L)},{0x1CA0DDABL},{(-5L)}};
            unsigned l_454 = 0UL;
            int i, j;
            if ((&p_37 != (void*)0))
            {
                unsigned char l_402 = 253UL;
                unsigned char l_424 = 255UL;
                int l_431 = 0xC9D207CDL;
                int l_434 = (-4L);
                int l_439 = 0x2AC95281L;
                int l_447 = 0x9D32ADF7L;
                int l_450[7][10] = {{0xF57DFE00L,(-1L),0x0A543357L,0x0A543357L,(-1L),0xF57DFE00L,1L,0xF57DFE00L,(-1L),0x0A543357L},{0x5785A7A8L,0x1D4FB597L,0x5785A7A8L,0x0A543357L,1L,1L,0x0A543357L,0x5785A7A8L,0x1D4FB597L,0x5785A7A8L},{0x5785A7A8L,0xF57DFE00L,0x1D4FB597L,(-1L),0x1D4FB597L,0xF57DFE00L,0x5785A7A8L,0x5785A7A8L,(-1L),0xF57DFE00L},{(-1L),0x0A543357L,0x0A543357L,(-1L),0xF57DFE00L,1L,0xF57DFE00L,(-1L),0x0A543357L,0x0A543357L},{0xF57DFE00L,0x0A543357L,0x1D4FB597L,(-7L),(-7L),0x1D4FB597L,0x0A543357L,0xF57DFE00L,0x0A543357L,0x1D4FB597L},{1L,(-1L),(-7L),(-1L),1L,0x1D4FB597L,0x1D4FB597L,1L,(-1L),(-7L)},{0xF57DFE00L,0xF57DFE00L,(-7L),1L,0x5785A7A8L,1L,(-7L),0xF57DFE00L,0xF57DFE00L,(-7L)}};
                unsigned l_457 = 1UL;
                int i, j;
                if ((safe_mul_func_int16_t_s_s(p_36, ((safe_sub_func_uint8_t_u_u((l_394 != &g_93), (((safe_mod_func_uint16_t_u_u((0xB4L >= func_42(g_60, l_397, &g_9)), p_37)) != g_233[3]) == g_261))) <= l_398))))
                {
                    return g_183;
                }
                else
                {
                    short l_401[3][1];
                    int l_430 = 0xFF1CD204L;
                    int l_433 = 0x3BAF9AB5L;
                    int l_435 = 0xE20D18ADL;
                    int l_440 = 3L;
                    int l_442 = 0x0EED0963L;
                    int l_444 = 0x8C2E7B24L;
                    int i, j;
                    for (i = 0; i < 3; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_401[i][j] = 0x1FC4L;
                    }
                    l_402++;
                    (*l_241) |= (safe_lshift_func_uint16_t_u_u(l_399[2], (safe_rshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u(((-8L) >= 1UL), 3)), (safe_mul_func_int16_t_s_s(l_399[1], g_183)))) ^ 0xECBFB78CL), (-3L))), 0))));
                    for (l_398 = 0; (l_398 < (-18)); l_398--)
                    {
                        unsigned short l_429 = 0x44E5L;
                        int l_432 = 7L;
                        int l_436 = 0xFCB5AB9EL;
                        int l_438 = 0xE36C061CL;
                        int l_441 = 0L;
                        int l_443 = 0x58AC51A7L;
                        int l_445 = 0x13A2B9D8L;
                        int l_446 = 0L;
                        int l_448 = 0x52E298E8L;
                        int l_449 = 0xBFFEE04DL;
                        int l_451 = 0L;
                        int l_452 = (-8L);
                        int l_453 = 0x4DF2AF68L;
                        (*l_241) = (((safe_sub_func_int8_t_s_s(l_402, 0x69L)) & (-1L)) ^ 1L);
                        --l_454;
                    }
                    --l_457;
                }
                if (p_36)
                    continue;
                return g_233[3];
            }
            else
            {
                return g_65;
            }
        }
    }
    if ((safe_sub_func_int8_t_s_s((safe_add_func_uint16_t_u_u(g_53, p_36)), (g_233[3] | (l_259 == l_259)))))
    {
        unsigned short l_470 = 1UL;
        const int *l_473 = &g_233[3];
        for (g_53 = 8; (g_53 < (-14)); g_53 = safe_sub_func_uint32_t_u_u(g_53, 9))
        {
            unsigned short l_466 = 65535UL;
            int l_468 = 4L;
            int l_483 = 3L;
            for (l_362 = 0; (l_362 <= 3); l_362 += 1)
            {
                int l_467 = 0x5A14F755L;
                for (g_96 = 0; (g_96 <= 3); g_96 += 1)
                {
                    union U0 **l_478 = &l_259;
                    int i;
                    if (g_233[g_96])
                    {
                        if (l_466)
                            break;
                        return g_233[1];
                    }
                    else
                    {
                        int l_469 = (-4L);
                        const int **l_474[9] = {&l_473,&l_473,&l_473,&l_473,&l_473,&l_473,&l_473,&l_473,&l_473};
                        int i;
                        l_470--;
                        if (p_37)
                            continue;
                        g_475 = l_473;
                    }
                    l_483 |= (((((-1L) || 0x0195L) >= ((safe_rshift_func_uint16_t_u_u(g_9, ((void*)0 == l_478))) ^ p_37)) ^ l_468) < (safe_mul_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_u((*l_242), 4)) < (p_37 != p_37)) > g_96), g_9)));
                    p_37 &= l_483;
                }
                p_37 |= (*g_475);
                (*l_242) ^= l_468;
            }
            return l_483;
        }
    }
    else
    {
        int l_484[6] = {0x02CA7B9FL,1L,1L,0x02CA7B9FL,1L,1L};
        int l_485[3][5][9] = {{{9L,1L,0x444D520FL,0x40D78311L,0x444D520FL,1L,9L,(-1L),0x4EDDC672L},{0x970501C0L,0x1CB189EDL,(-6L),(-8L),(-1L),0L,0xAB6AA0FCL,0x1E7A49E2L,0x7CD014F9L},{0x26C4F837L,0xC35102C4L,(-1L),1L,(-1L),0L,0L,(-1L),1L},{0x03AD21F9L,1L,0x03AD21F9L,(-1L),0xFFB0C2AEL,(-1L),0x96476096L,(-1L),0x2C30C919L},{(-2L),1L,0x803319EBL,0x40D78311L,0L,0x803319EBL,0x4EDDC672L,0xB686E468L,0x26C4F837L}},{{8L,0L,0xC7CDA797L,0xCD94298EL,0xCD94298EL,0xC7CDA797L,0L,8L,0L},{9L,(-2L),0xB8740C67L,0x444D520FL,(-6L),0x26C4F837L,0xC35102C4L,(-1L),1L},{0L,0x2C30C919L,1L,0xC7CDA797L,0L,0x96476096L,0x03AD21F9L,0x96476096L,0L},{1L,0x4EDDC672L,0x4EDDC672L,1L,0x3F65F5ACL,0L,0xB686E468L,9L,0x26C4F837L},{0xC7CDA797L,1L,0x2C30C919L,0L,(-1L),0xAB6AA0FCL,(-1L),0xFFB0C2AEL,0x7CD014F9L}},{{0x444D520FL,0xB8740C67L,(-2L),9L,0x3F65F5ACL,9L,(-2L),0xB8740C67L,0x444D520FL},{0xCD94298EL,0xC7CDA797L,0L,8L,0L,0x1CB189EDL,(-1L),8L,0x970501C0L},{0x40D78311L,0xC35102C4L,0x444D520FL,(-1L),(-6L),(-2L),1L,1L,(-2L)},{0xCD94298EL,0L,(-1L),0L,0xCD94298EL,(-1L),8L,(-8L),1L},{0x444D520FL,0x803319EBL,0L,0x4EDDC672L,0L,0x7CE8210CL,0x26C4F837L,(-1L),(-1L)}}};
        int l_487 = 0x5CEC921EL;
        int l_500[6][1][8] = {{{4L,8L,(-1L),0x31959F33L,0x68D6A918L,0x68D6A918L,0x31959F33L,(-1L)}},{{0x0E247D40L,0x0E247D40L,1L,0xF5FFA0E7L,0xBD2AD1DDL,0x9BB8E25EL,0x417E6F91L,0x0E247D40L}},{{8L,4L,(-1L),0x68D6A918L,0x417E6F91L,(-1L),(-1L),0x0E247D40L}},{{4L,(-9L),8L,0xF5FFA0E7L,8L,(-9L),4L,(-1L)}},{{(-1L),0xF5FFA0E7L,0x2374CEFAL,0x31959F33L,0xF5FFA0E7L,(-3L),0x417E6F91L,(-1L)}},{{0x3AAF70F9L,(-1L),0x68D6A918L,(-9L),0xF5FFA0E7L,(-1L),(-1L),0xF5FFA0E7L}}};
        int i, j, k;
        (*l_246) = p_37;
        l_488++;
        for (g_60 = 0; (g_60 <= 1); g_60 += 1)
        {
            for (g_183 = 0; (g_183 <= 1); g_183 += 1)
            {
                int i;
                g_68[(g_183 + 1)] = &g_60;
                for (l_362 = 0; (l_362 <= 3); l_362 += 1)
                {
                    int i, j, k;
                    g_68[g_183] = &l_485[(g_183 + 1)][(g_183 + 2)][(g_183 + 4)];
                }
            }
            for (l_332 = 0; (l_332 <= 1); l_332 += 1)
            {
                return p_36;
            }
        }
        p_37 |= (safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u((safe_unary_minus_func_uint32_t_u(0x0970926AL)), 4)), (((-6L) <= (((void*)0 != g_498) >= (((*l_246) >= l_487) != 0x12L))) > 0x5792FAC9L))) != g_64) > 0xB19664ACL), 4));
    }
    return p_36;
}







static int func_42(unsigned p_43, char * p_44, char * p_45)
{
    int *l_131 = &g_53;
    int *l_132 = (void*)0;
    int *l_133 = &g_60;
    int *l_134 = (void*)0;
    int l_135 = 0L;
    int *l_136 = &g_60;
    int *l_137 = &l_135;
    int *l_138 = (void*)0;
    int l_139[3];
    int *l_140 = &g_60;
    int *l_141 = &l_139[1];
    int *l_142 = &l_139[1];
    int *l_143 = (void*)0;
    int *l_144 = &g_60;
    int *l_145 = &l_139[1];
    int *l_146 = &g_53;
    int *l_147 = &g_60;
    int *l_148[1][2][4];
    unsigned char l_149 = 0UL;
    int l_156 = 0x9470CC65L;
    unsigned l_222 = 4294967286UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_139[i] = 0xDCA30394L;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
                l_148[i][j][k] = &l_139[1];
        }
    }
    l_149++;
    (*l_141) = (*l_142);
    (*l_137) = ((safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((*p_45), ((((g_64 < (0xBC161824L > (-1L))) <= (((*l_146) != p_43) >= (p_44 == &g_9))) || p_43) & p_43))), 0x5EAFL)) || l_156);
    for (g_65 = (-7); (g_65 != 26); g_65++)
    {
        unsigned short l_174[2];
        int l_175 = 0x4BD51CD5L;
        int l_181 = 1L;
        int l_229 = 6L;
        int l_232 = 0x2DAACF49L;
        int l_234[3];
        int i;
        for (i = 0; i < 2; i++)
            l_174[i] = 65528UL;
        for (i = 0; i < 3; i++)
            l_234[i] = 0L;
        (*l_137) = p_43;
        for (g_64 = 0; (g_64 == (-18)); g_64--)
        {
            int *l_172 = &g_53;
            int l_176[8];
            int i;
            for (i = 0; i < 8; i++)
                l_176[i] = 0L;
            (*l_131) |= (&g_9 != (void*)0);
            for (l_149 = 0; (l_149 <= 3); l_149 += 1)
            {
                int l_165 = (-1L);
                int l_178 = (-2L);
                int l_182[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_182[i] = 0x62F05AABL;
                for (l_156 = 3; (l_156 >= 0); l_156 -= 1)
                {
                    unsigned l_173 = 18446744073709551611UL;
                    int l_179 = 0x039A174FL;
                    int l_180[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
                    int i;
                    (*l_141) |= (safe_mul_func_uint8_t_u_u(((&g_9 != (void*)0) >= (g_64 <= (safe_add_func_uint8_t_u_u((g_9 | l_165), p_43)))), (g_65 < ((safe_sub_func_uint8_t_u_u((((~(((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((l_172 != &g_60) != l_173), (*l_172))), 7)) > l_174[0]) && 0UL)) > (*l_172)) <= 0x6EL), 254UL)) == 4294967289UL))));
                    (*l_136) = (g_9 || (*l_172));
                    for (l_135 = 3; (l_135 >= 0); l_135 -= 1)
                    {
                        int l_177 = 0xC300E812L;
                        int i;
                        l_175 = (l_165 ^ p_43);
                        g_183++;
                    }
                }
            }
        }
        for (l_149 = 0; (l_149 <= 0); l_149 += 1)
        {
            unsigned char l_186 = 0xDCL;
            int *l_189[4];
            unsigned short l_236[10] = {8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL,8UL};
            int i;
            for (i = 0; i < 4; i++)
                l_189[i] = (void*)0;
            --l_186;
            l_189[1] = &l_139[1];
            for (l_175 = 0; (l_175 <= 0); l_175 += 1)
            {
                char *l_194 = &g_9;
                int l_198[8];
                int **l_201 = &l_137;
                int i, j, k;
                for (i = 0; i < 8; i++)
                    l_198[i] = (-1L);
                for (p_43 = 0; (p_43 <= 0); p_43 += 1)
                {
                    short l_195 = 0L;
                    int l_230 = 0x648218CDL;
                    int l_235 = 1L;
                    int i, j, k;
                }
                (*l_137) ^= p_43;
                for (g_96 = 0; (g_96 <= 2); g_96 += 1)
                {
                    int *l_239 = &l_139[1];
                    l_239 = &l_135;
                }
                (*l_145) = (((*l_147) | 1UL) == g_233[3]);
            }
        }
        (*l_133) |= (g_9 > p_43);
    }
    return p_43;
}







static char func_47(char p_48, unsigned p_49, char p_50)
{
    int *l_52 = &g_53;
    int **l_54 = &l_52;
    int l_62[3];
    int l_81 = 0xCD67D5F2L;
    char l_108 = 0x9AL;
    union U0 **l_113 = (void*)0;
    unsigned l_116 = 1UL;
    unsigned l_120 = 0xB3DB31ABL;
    int i;
    for (i = 0; i < 3; i++)
        l_62[i] = 8L;
    (*l_54) = l_52;
    for (p_49 = 0; (p_49 >= 44); ++p_49)
    {
        return p_48;
    }
    for (g_53 = 0; (g_53 == 17); ++g_53)
    {
        int *l_59 = &g_60;
        int *l_61[3];
        short l_63[5][10][5] = {{{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L}},{{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L}},{{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L}},{{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L}},{{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L},{1L,1L,0x32BAL,0x32BAL,1L},{1L,6L,1L,6L,1L},{1L,0x32BAL,0x32BAL,1L,1L},{0xBF62L,6L,0xBF62L,6L,0xBF62L}}};
        char l_80 = 0xA1L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_61[i] = &g_60;
        g_65++;
        for (g_65 = 1; (g_65 <= 4); g_65 += 1)
        {
            int l_69 = 0x41F9F804L;
            short l_70 = 0xBA6FL;
            int l_71 = 0xD7B9758AL;
            int l_74 = 0x7083D4BAL;
            int l_75[4] = {(-1L),(-1L),(-1L),(-1L)};
            union U0 **l_92[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            g_68[3] = (*l_54);
            for (p_48 = 2; (p_48 >= 0); p_48 -= 1)
            {
                unsigned short l_76 = 65535UL;
                int l_79 = 0x7409415FL;
                unsigned short l_82 = 1UL;
                unsigned l_89 = 0xFB2C377CL;
                int i;
                for (g_64 = 0; (g_64 <= 2); g_64 += 1)
                {
                    int l_72 = 0L;
                    int l_73[9][3][8] = {{{0xFC64312FL,0L,0x1E9E5145L,(-1L),(-6L),(-1L),0x1E9E5145L,0L},{0x12B152D5L,0x2ABA01C9L,2L,0x66C0C082L,(-6L),0L,1L,0x1E9E5145L},{0L,(-1L),(-3L),1L,0x12B152D5L,0x12B152D5L,1L,(-3L)}},{{1L,1L,2L,0L,0xAE0D08F1L,0xDB298F97L,0x1E9E5145L,0xFC64312FL},{0xAE0D08F1L,0xDB298F97L,0x1E9E5145L,0xFC64312FL,(-8L),(-3L),(-8L),0xFC64312FL},{0xDB298F97L,2L,0xDB298F97L,0L,0x33A03155L,0L,(-1L),(-3L)}},{{0x66C0C082L,(-6L),0L,1L,0x1E9E5145L,0x33A03155L,0x33A03155L,0x1E9E5145L},{0x66C0C082L,(-8L),(-3L),0L,(-1L),0x2ABA01C9L,0x66C0C082L,1L},{2L,0xFC64312FL,0x2ABA01C9L,(-6L),(-3L),0L,1L,0L}},{{0x33A03155L,0xFC64312FL,0x66C0C082L,0xFC64312FL,0x33A03155L,0x2ABA01C9L,0L,0x12B152D5L},{0x2ABA01C9L,(-3L),0x33A03155L,0xDB298F97L,(-6L),(-1L),0xFC64312FL,0xFC64312FL},{1L,0x1E9E5145L,0x33A03155L,0x33A03155L,0x1E9E5145L,1L,0L,(-6L)}},{{(-6L),0L,0x66C0C082L,0x12B152D5L,0xFC64312FL,0xDB298F97L,1L,0x2ABA01C9L},{0x66C0C082L,2L,0x2ABA01C9L,0x12B152D5L,0x2ABA01C9L,2L,0x66C0C082L,(-6L)},{0x1E9E5145L,0x2ABA01C9L,(-3L),0x33A03155L,0xDB298F97L,(-6L),(-1L),0xFC64312FL}},{{0x12B152D5L,(-6L),(-8L),0xDB298F97L,0xDB298F97L,(-8L),(-6L),0x12B152D5L},{0x1E9E5145L,0x12B152D5L,2L,0xFC64312FL,0x2ABA01C9L,(-6L),(-3L),0L},{0x66C0C082L,1L,0xAE0D08F1L,(-6L),0xFC64312FL,(-6L),0xAE0D08F1L,1L}},{{(-6L),0x12B152D5L,0L,0L,0x1E9E5145L,(-8L),0x2ABA01C9L,0xAE0D08F1L},{1L,(-6L),0xAE0D08F1L,0xFC64312FL,0L,0L,0xFC64312FL,0xAE0D08F1L},{0xFC64312FL,0xFC64312FL,(-1L),(-6L),0xDB298F97L,0x33A03155L,(-3L),0x2ABA01C9L}},{{0xDB298F97L,0x33A03155L,(-3L),0x2ABA01C9L,0x1E9E5145L,0xAE0D08F1L,0x1E9E5145L,0x2ABA01C9L},{0x33A03155L,(-1L),0x33A03155L,(-6L),2L,(-6L),0L,0xAE0D08F1L},{0x12B152D5L,(-8L),(-6L),0xFC64312FL,(-3L),2L,2L,(-3L)}},{{0x12B152D5L,0x1E9E5145L,0x1E9E5145L,0x12B152D5L,2L,0xFC64312FL,0x2ABA01C9L,(-6L)},{0x33A03155L,1L,0xFC64312FL,0L,0x1E9E5145L,(-1L),(-6L),(-1L)},{0xDB298F97L,1L,0x2ABA01C9L,1L,0xDB298F97L,0xFC64312FL,0x12B152D5L,0x66C0C082L}}};
                    int l_88 = 0xEB286D7AL;
                    int i, j, k;
                    l_76++;
                    l_82--;
                    for (l_76 = 0; (l_76 <= 2); l_76 += 1)
                    {
                        int l_85[4][6][6] = {{{(-2L),0x5974949FL,(-1L),0x54FF34EAL,0xC4DD9E31L,0x550B438EL},{0x1B3DFEA1L,0xFB5D179AL,0L,(-1L),0x0275E99CL,(-1L)},{0L,0x135D840CL,0L,0xA15A7CFDL,0x5974949FL,0x550B438EL},{(-9L),0xF58447B4L,(-1L),0xF805AAA4L,3L,(-1L)},{0xF805AAA4L,3L,(-1L),0xF805AAA4L,(-1L),0xA15A7CFDL},{(-9L),0xBAD4E8C8L,(-2L),0x63D230C2L,0x54FF34EAL,0x3BC337E5L}},{{0x83892296L,(-9L),0xA09347D9L,(-2L),0x54FF34EAL,0x9647BF50L},{0x3BC337E5L,0xA15A7CFDL,0L,4L,(-9L),(-2L)},{(-2L),0xCB199FC8L,0L,0L,0xCB199FC8L,(-2L)},{4L,(-1L),0L,0x83892296L,0x27851ED0L,0x9647BF50L},{1L,0L,0xA09347D9L,(-2L),(-1L),0x3BC337E5L},{1L,0xF805AAA4L,(-2L),0x83892296L,(-2L),0x63D230C2L}},{{4L,0x27851ED0L,1L,0L,0xA15A7CFDL,1L},{(-2L),0x27851ED0L,(-2L),4L,(-2L),0L},{0x3BC337E5L,0xF805AAA4L,0x83892296L,(-2L),(-1L),(-2L)},{0x83892296L,0L,0x83892296L,0x63D230C2L,0x27851ED0L,0L},{0x4A87E634L,(-1L),(-2L),0x0677A089L,0xCB199FC8L,1L},{0x0677A089L,0xCB199FC8L,1L,0x0677A089L,(-9L),0x63D230C2L}},{{0x4A87E634L,0xA15A7CFDL,(-2L),0x63D230C2L,0x54FF34EAL,0x3BC337E5L},{0x83892296L,(-9L),0xA09347D9L,(-2L),0x54FF34EAL,0x9647BF50L},{0x3BC337E5L,0xA15A7CFDL,0L,4L,(-9L),(-2L)},{(-2L),0xCB199FC8L,0x63D230C2L,0x63D230C2L,0xF805AAA4L,0xA09347D9L},{0L,0xCB199FC8L,(-2L),4L,(-1L),0x0677A089L},{0x9647BF50L,0x54FF34EAL,(-2L),0xA09347D9L,(-9L),0x83892296L}}};
                        int l_86 = 0x385723E8L;
                        short l_87 = 0x1465L;
                        int i, j, k;
                        --l_89;
                    }
                }
                l_62[p_48] = 0x8A9104C8L;
                l_61[p_48] = (void*)0;
            }
            g_93 = (void*)0;
            for (l_81 = 2; (l_81 >= 0); l_81 -= 1)
            {
                int i;
                l_62[l_81] = (l_62[l_81] != l_62[l_81]);
                for (g_64 = 2; (g_64 >= 0); g_64 -= 1)
                {
                    int l_94 = 0L;
                    int l_95 = 0x38864000L;
                    int i, j, k;
                    (*l_59) = l_63[g_65][(g_64 + 4)][g_65];
                    g_96++;
                    if (p_48)
                        continue;
                    return p_49;
                }
                (*l_59) = (l_62[l_81] != 1L);
            }
        }
        for (l_81 = 3; (l_81 >= 0); l_81 -= 1)
        {
            int *l_112 = &l_62[1];
            int i;
            (*l_54) = g_68[l_81];
            for (p_48 = 1; (p_48 <= 4); p_48 += 1)
            {
                int **l_107[10] = {&l_59,&l_59,&l_59,&l_59,&l_59,&l_59,&l_59,&l_59,&l_59,&l_59};
                int i;
                for (g_96 = 1; (g_96 <= 4); g_96 += 1)
                {
                    int i, j, k;
                    (*l_59) |= (safe_mod_func_int32_t_s_s(((safe_mul_func_int8_t_s_s(l_63[g_96][(l_81 + 1)][p_48], l_63[p_48][(g_96 + 5)][p_48])) <= (g_65 < l_63[g_96][(l_81 + 1)][p_48])), p_50));
                    for (p_49 = 0; (p_49 <= 4); p_49 += 1)
                    {
                        return p_48;
                    }
                }
                (*l_59) = (safe_lshift_func_uint16_t_u_s(((**l_54) > (p_49 >= ((((l_107[7] != &l_59) < g_65) < ((void*)0 == l_61[0])) == g_60))), ((p_49 != l_108) == p_50)));
                if (p_49)
                {
                    unsigned l_109 = 0x730FBAA5L;
                    ++l_109;
                    g_68[2] = l_112;
                }
                else
                {
                    int l_117[10][2] = {{(-5L),(-5L)},{(-5L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)},{(-5L),(-5L)},{(-5L),(-1L)},{1L,(-1L)},{(-1L),(-1L)},{1L,(-1L)}};
                    int i, j;
                    (*l_112) = (((((1UL & ((+((~1L) <= p_49)) >= (l_113 == &g_93))) >= (p_49 ^ (safe_mod_func_int8_t_s_s((-1L), (0x26L ^ l_116))))) | 0L) < (-5L)) < l_117[0][1]);
                }
                for (g_65 = 0; (g_65 <= 4); g_65 += 1)
                {
                    unsigned char l_118 = 6UL;
                    return l_118;
                }
            }
        }
    }
    if (p_48)
    {
        int *l_119[1][7] = {{&g_53,&g_53,&g_53,&g_53,&g_53,&g_53,&g_53}};
        unsigned l_123 = 0xD863CB28L;
        int i, j;
        l_120++;
        ++l_123;
        if ((g_64 < (**l_54)))
        {
            unsigned l_126 = 4294967295UL;
            return l_126;
        }
        else
        {
            unsigned char l_127 = 0UL;
            (*l_52) ^= 0xF9BFE5C0L;
            (*l_54) = &g_53;
            return l_127;
        }
    }
    else
    {
        union U0 * const l_128 = &g_129;
        unsigned l_130 = 0xE58FD312L;
        (*l_52) &= (l_128 != &g_129);
        (*l_52) = (0x0BBCL & (l_130 <= (**l_54)));
        (*l_54) = (void*)0;
    }
    return p_50;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_53, "g_53", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_64, "g_64", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_183, "g_183", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_233[i], "g_233[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_499, "g_499", print_hash_value);
    transparent_crc(g_603, "g_603", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_723, "g_723", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_764[i], "g_764[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_794, "g_794", print_hash_value);
    transparent_crc(g_960, "g_960", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1095[i], "g_1095[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
