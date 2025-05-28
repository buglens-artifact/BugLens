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
   volatile unsigned f1;
   int f2;
};

union U1 {
   short f0;
   unsigned short f1;
   int f2;
   volatile unsigned f3;
   unsigned f4;
};


static unsigned char g_20 = 251UL;
static union U0 g_24 = {0x136DL};
static union U0 *g_23 = &g_24;
static union U0 g_52 = {0L};
static union U0 g_54 = {1L};
static int g_57 = 0xA1448AFEL;
static unsigned short g_61 = 1UL;
static volatile union U0 g_67 = {0L};
static unsigned short *g_68 = (void*)0;
static volatile union U1 g_98 = {0x92BFL};
static volatile union U1 *g_97 = &g_98;
static unsigned char g_108 = 0x48L;
static char g_110 = 0xBEL;
static volatile union U0 g_118 = {0x95AFL};
static unsigned char *g_126 = (void*)0;
static unsigned char **g_125 = &g_126;
static union U1 g_127 = {0x2B9DL};
static volatile union U0 g_141 = {1L};
static short g_149 = 0x05B2L;
static int *g_150 = (void*)0;
static char *g_164 = &g_110;
static char **g_163 = &g_164;
static unsigned short **g_189 = (void*)0;
static unsigned short ***g_188 = &g_189;
static unsigned short ****g_187 = &g_188;
static unsigned short *****g_186 = &g_187;
static union U1 g_214 = {0xD25BL};
static volatile unsigned g_231 = 0xD140F5BEL;
static volatile unsigned *g_285 = (void*)0;
static volatile unsigned **g_284 = &g_285;
static union U1 **g_320 = (void*)0;
static int g_321 = 4L;
static volatile union U1 g_356 = {0xE45BL};
static char g_385 = (-5L);
static unsigned g_390 = 4294967295UL;
static union U1 g_409 = {0xE9F6L};
static union U1 g_417 = {0x1960L};
static volatile union U1 g_433 = {0L};
static union U0 g_437 = {0x9B48L};
static union U0 g_440 = {1L};
static union U1 ***g_481 = &g_320;
static union U0 g_506 = {0x0F85L};
static volatile union U0 g_534 = {0x161AL};
static unsigned short g_550 = 65535UL;
static int g_578 = (-1L);
static union U1 g_593 = {1L};
static volatile union U0 g_594 = {-3L};
static volatile union U1 g_639 = {0x1252L};
static union U0 g_640 = {0xCCCEL};
static union U1 g_641 = {0xF35BL};
static volatile union U1 g_659 = {2L};
static union U1 g_720 = {0x5C76L};
static volatile union U1 g_721 = {0x8E34L};
static volatile short g_750 = 0x1250L;
static unsigned g_772 = 1UL;
static union U0 g_777 = {0xF3EFL};
static volatile union U0 g_784 = {0x81FEL};
static short **g_809 = (void*)0;



static char func_1(void);
static union U0 * func_2(union U0 * p_3, unsigned p_4, union U0 * p_5);
static union U0 * func_6(char p_7, union U0 * p_8, union U0 * p_9, short p_10);
static union U0 * func_12(unsigned char p_13, unsigned char p_14, unsigned short p_15, int p_16, union U0 * p_17);
static int func_21(int p_22);
static short func_25(unsigned p_26, int p_27);
static char func_28(union U0 * p_29);
static union U0 * func_30(union U0 * p_31, unsigned p_32);
static union U0 * func_33(union U0 * p_34, union U0 * p_35, unsigned p_36, unsigned char p_37, union U0 * p_38);
static union U0 * func_39(unsigned char p_40, union U0 * p_41, unsigned p_42, unsigned p_43, unsigned short p_44);
static char func_1(void)
{
    int l_11 = 1L;
    union U0 *l_46 = &g_24;
    union U0 **l_45 = &l_46;
    union U0 *l_51 = &g_52;
    int l_422 = 2L;
    unsigned *l_771 = &g_772;
    int l_773 = 0xFA38EB52L;
    int l_774 = 0x38F75F5FL;
    unsigned short l_775 = 65535UL;
    union U0 *l_776 = &g_777;
    char *l_794 = &g_385;
    char l_810 = 0xB8L;
    unsigned **l_820 = &l_771;
    (*l_45) = func_2(func_6(l_11, func_12((((l_11 < (((l_774 = (l_773 = (((*l_771) ^= (g_20 && (func_21(((g_23 == (((func_25(g_24.f0, (((func_28(func_30(func_33(&g_24, func_39((((*l_45) = &g_24) != (((l_11 , (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(g_24.f0, 3)), 2))) , (*g_23)) , &g_24)), l_51, g_20, l_11, g_20), g_321, l_11, l_51), g_52.f0)) , 0UL) ^ l_422) , l_422)) , 0x56DBL) || 0UL) , (*l_45))) ^ l_422)) <= (-9L)))) <= 0xC2DD4F81L))) != 0xD0L) , g_321)) < g_640.f0) | l_775), l_11, l_11, g_409.f1, l_776), g_23, l_775), l_11, l_51);
    for (g_52.f0 = (-2); (g_52.f0 < (-8)); g_52.f0--)
    {
        int l_793 = 0x6BED6FDAL;
        int *l_800 = &l_773;
        unsigned **l_817 = (void*)0;
        unsigned ***l_818 = (void*)0;
        unsigned ***l_819 = &l_817;
        if ((*g_150))
        {
            l_793 &= func_28(&g_24);
            if (l_793)
                continue;
            return l_793;
        }
        else
        {
            int *l_795 = &g_417.f2;
            int *l_796 = &l_11;
            int *l_811 = &g_720.f2;
            int *l_812 = &g_417.f2;
            int *l_813 = &g_127.f2;
            int *l_814 = &g_417.f2;
            int *l_815 = &g_214.f2;
            int l_816 = 0xC4B65666L;
            (*l_796) ^= ((l_794 == ((*g_163) = (*g_163))) , (*g_150));
            if (((*l_796) <= g_214.f1))
            {
                int **l_797 = &l_795;
                (*l_797) = &g_57;
                (*l_796) &= (*g_150);
                (*l_797) = &l_773;
            }
            else
            {
                for (g_641.f4 = (-24); (g_641.f4 != 36); ++g_641.f4)
                {
                    g_150 = l_800;
                    (*l_800) = 0x9C21F0B5L;
                }
            }
            l_816 &= ((0xF05EL >= ((g_593.f0 ^ (safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((*g_23) , (*g_150)), (0x2C73L <= (((*l_771) = (safe_mod_func_uint8_t_u_u(g_52.f0, (safe_add_func_uint16_t_u_u((((l_775 > 0x2B9AL) >= ((void*)0 == g_809)) , (*l_796)), l_810))))) > 0x3B918032L)))), 1))) != 0x019FL)) , (*g_150));
        }
        (*g_150) = (((l_820 = ((*l_819) = l_817)) == &g_285) <= 0L);
        return (*g_164);
    }
    return (*g_164);
}







static union U0 * func_2(union U0 * p_3, unsigned p_4, union U0 * p_5)
{
    g_150 = &g_57;
    return &g_777;
}







static union U0 * func_6(char p_7, union U0 * p_8, union U0 * p_9, short p_10)
{
    int **l_781 = &g_150;
    (*g_150) = 0L;
    (*l_781) = &g_57;
    for (g_417.f0 = 17; (g_417.f0 < 18); g_417.f0 = safe_add_func_uint8_t_u_u(g_417.f0, 4))
    {
        unsigned l_785 = 0xF9AFD831L;
        int l_786 = (-5L);
        int *l_787 = &g_214.f2;
        int *l_788 = &g_127.f2;
        int *l_789 = &g_720.f2;
        int l_790 = 7L;
        l_790 |= ((g_784 , (*g_150)) , (l_786 = l_785));
        (**l_781) = ((*l_789) = (func_28(p_9) || func_28(&g_440)));
    }
    return p_8;
}







static union U0 * func_12(unsigned char p_13, unsigned char p_14, unsigned short p_15, int p_16, union U0 * p_17)
{
    int **l_778 = (void*)0;
    int **l_779 = &g_150;
    union U0 *l_780 = &g_54;
    (*l_779) = &g_57;
    return l_780;
}







static int func_21(int p_22)
{
    char l_736 = 0x78L;
    int l_739 = 0x1AF4D58FL;
    int *l_740 = (void*)0;
    int *l_741 = &g_720.f2;
    union U0 *l_742 = &g_640;
    unsigned char *l_743 = &g_108;
    unsigned l_744 = 4294967291UL;
    int *l_745 = &l_739;
    int **l_746 = (void*)0;
    char *l_747 = &g_385;
    unsigned short l_756 = 65535UL;
    unsigned *l_757 = &g_417.f4;
    unsigned *l_758 = &l_744;
    int *l_759 = &g_214.f2;
    int *l_760 = &g_641.f2;
    int *l_761 = &g_641.f2;
    int *l_762 = (void*)0;
    int *l_763 = (void*)0;
    int *l_764 = &g_214.f2;
    int *l_765 = &g_641.f2;
    int *l_766 = (void*)0;
    int *l_767 = (void*)0;
    int *l_768 = &g_641.f2;
    int *l_769 = &g_214.f2;
    int *l_770 = &g_127.f2;
    l_739 ^= (safe_mod_func_int16_t_s_s((((0x9655BC42L < 4294967291UL) < (p_22 , (safe_mod_func_uint8_t_u_u(((*l_743) = (safe_rshift_func_uint8_t_u_u(func_28(l_742), p_22))), 0x98L)))) && p_22), p_22));
    (*l_745) &= l_744;
    l_741 = &p_22;
    (*l_770) &= ((((*l_747) ^= ((**g_163) = (-3L))) <= p_22) || ((*l_741) = ((*l_745) = (safe_mod_func_int32_t_s_s((((g_750 | (safe_mod_func_uint16_t_u_u(p_22, 1L))) && p_22) < 0xCED8L), ((*l_757) = ((*l_758) ^= ((((~(safe_unary_minus_func_int32_t_s(g_409.f1))) <= (!(+((((safe_sub_func_int8_t_s_s((l_756 && g_593.f0), (*l_745))) | (*l_745)) < g_52.f0) == p_22)))) , p_22) < 0UL))))))));
    return p_22;
}







static short func_25(unsigned p_26, int p_27)
{
    short l_425 = 0xACE9L;
    unsigned l_445 = 0xC31DB27BL;
    union U1 **l_447 = (void*)0;
    union U0 *l_451 = (void*)0;
    int l_454 = (-4L);
    unsigned short l_503 = 65531UL;
    unsigned short l_526 = 0x1172L;
    unsigned *l_629 = &g_127.f4;
    unsigned **l_628 = &l_629;
    union U0 **l_662 = &l_451;
    char ***l_682 = &g_163;
    char ****l_681 = &l_682;
    for (p_27 = 0; (p_27 <= 24); p_27 = safe_add_func_uint16_t_u_u(p_27, 7))
    {
        int *l_426 = &g_417.f2;
        int *l_427 = &g_214.f2;
        int *l_428 = &g_409.f2;
        int *l_429 = (void*)0;
        int *l_430 = &g_417.f2;
        int *l_431 = &g_127.f2;
        int **l_432 = &l_429;
        union U0 *l_434 = &g_52;
        union U0 **l_435 = &l_434;
        union U0 *l_436 = &g_437;
        int l_438 = 0x13F29533L;
        union U0 *l_439 = &g_440;
        union U1 *l_450 = (void*)0;
        union U1 **l_449 = &l_450;
        int l_502 = 0xB80DC45CL;
        union U0 *l_515 = &g_437;
        int l_567 = 0x2EA18019L;
        (*l_431) &= l_425;
        (*l_432) = l_430;
        if ((g_433 , func_28(func_33(((*l_435) = ((((g_409.f0 <= p_27) < (func_28(&g_24) <= (0x8208L == 0xD0BFL))) >= (*g_164)) , (*l_435))), l_436, g_61, l_438, l_439))))
        {
            (*l_435) = (void*)0;
            if (p_27)
                continue;
        }
        else
        {
            int *l_443 = &g_127.f2;
            short l_524 = (-1L);
            int l_525 = (-9L);
            union U1 **l_532 = (void*)0;
            union U1 **l_535 = (void*)0;
            union U0 *l_573 = &g_437;
            for (g_127.f4 = 0; (g_127.f4 >= 16); g_127.f4 = safe_add_func_uint8_t_u_u(g_127.f4, 9))
            {
                unsigned short l_444 = 0x9A92L;
                int *l_461 = &g_214.f2;
                unsigned short l_475 = 0x9D04L;
                unsigned l_477 = 0UL;
                union U1 ***l_480 = &g_320;
                (*l_432) = l_443;
            }
            for (g_52.f0 = 0; (g_52.f0 != 29); g_52.f0 = safe_add_func_uint16_t_u_u(g_52.f0, 2))
            {
                unsigned short l_492 = 0xB813L;
                union U0 *l_507 = &g_440;
                int l_529 = 0xFFEE533DL;
                int l_559 = 0x09DEF26BL;
                union U1 **l_577 = (void*)0;
            }
        }
        (*l_432) = &l_454;
    }
    if (l_503)
    {
        unsigned l_581 = 0xA27FF7EFL;
        return l_581;
    }
    else
    {
        unsigned short l_590 = 0x4D68L;
        short *l_616 = &g_214.f0;
        int *l_623 = &l_454;
        short *l_626 = &g_506.f0;
        int l_634 = 1L;
        char l_637 = 5L;
        union U0 *l_658 = &g_54;
        for (g_214.f1 = 0; (g_214.f1 > 11); ++g_214.f1)
        {
            short l_585 = 7L;
            unsigned char l_597 = 0x37L;
            union U0 ***l_607 = (void*)0;
            union U0 **l_609 = (void*)0;
            union U0 ***l_608 = &l_609;
            if (((safe_unary_minus_func_int16_t_s(l_585)) < (l_585 , (safe_mod_func_uint16_t_u_u(((l_585 & (safe_rshift_func_int16_t_s_s((~g_321), (l_590 | (((safe_rshift_func_uint16_t_u_u(((-1L) & ((g_593 , g_594) , (safe_lshift_func_int16_t_s_u(l_445, 9)))), l_445)) >= l_454) && 0xA5C74136L))))) > l_597), 0x82DEL)))))
            {
                int **l_598 = &g_150;
                (*l_598) = &g_57;
                (*g_150) = (*g_150);
                if ((p_26 , (*g_150)))
                {
                    int *l_599 = (void*)0;
                    int *l_600 = &g_593.f2;
                    int *l_601 = &g_417.f2;
                    int *l_602 = &l_454;
                    (*l_598) = &g_57;
                    (*l_602) |= (*g_150);
                }
                else
                {
                    for (g_593.f4 = 0; (g_593.f4 > 60); ++g_593.f4)
                    {
                        (**l_598) = (-1L);
                        (*l_598) = &g_57;
                        (*l_598) = (*l_598);
                        (*l_598) = &g_57;
                    }
                    (*g_150) = (-1L);
                }
            }
            else
            {
                return g_108;
            }
            if (l_597)
                break;
            (*g_150) = (safe_sub_func_int8_t_s_s((l_445 || g_127.f3), (65535UL > (((*l_608) = &g_23) == (void*)0))));
        }
        if ((safe_sub_func_int8_t_s_s(((((safe_sub_func_uint32_t_u_u(p_27, (l_590 < (safe_rshift_func_uint16_t_u_s(p_27, 8))))) || ((p_26 | ((*l_616) = g_98.f0)) != (safe_rshift_func_uint8_t_u_u(((p_26 && (((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u((((*l_623) ^= p_26) , 0UL), (((safe_add_func_int16_t_s_s(((*l_626) = ((l_503 , p_26) , 0L)), 0x5E21L)) <= p_27) , g_385))), 6)) ^ l_503) >= p_26)) || 0x40L), 6)))) & g_550) , p_26), 0x71L)))
        {
            int **l_627 = &l_623;
            unsigned ***l_630 = (void*)0;
            unsigned ***l_631 = &l_628;
            int l_638 = 0x63DE0114L;
            unsigned *l_642 = &g_641.f4;
            (*l_627) = &p_27;
            (**l_627) ^= p_26;
            (*l_631) = l_628;
            if ((safe_lshift_func_uint16_t_u_s(((**l_627) & (l_634 , ((*l_642) = ((+(+(((((p_27 , (((safe_mod_func_uint32_t_u_u((65530UL || (p_26 <= ((*l_629) &= ((l_638 = l_637) < (((g_639 , (g_640 , ((~(**l_627)) | 0xFEA6L))) & (*l_623)) != (**l_627)))))), g_385)) == (*l_623)) , 0xCFL)) , (**l_627)) > p_26) , g_641) , (*l_623)))) ^ 0xCEL)))), 5)))
            {
                int *l_647 = (void*)0;
                int *l_648 = &g_214.f2;
                union U1 *l_649 = &g_409;
                union U1 **l_650 = &l_649;
                for (g_149 = (-27); (g_149 < (-18)); g_149++)
                {
                    (*l_627) = &p_27;
                }
                p_27 |= g_127.f4;
                (*l_650) = (l_526 , ((safe_sub_func_uint32_t_u_u(((*l_623) < (g_639.f1 , ((**g_163) & p_27))), ((*l_648) = (p_26 >= 0x7697L)))) , l_649));
            }
            else
            {
                return g_385;
            }
        }
        else
        {
            char l_651 = 5L;
            int **l_652 = (void*)0;
            union U0 **l_654 = &l_451;
            union U0 ***l_653 = &l_654;
            int l_680 = (-5L);
            int *l_695 = &g_593.f2;
            int l_716 = 0xF458647AL;
            (*l_623) &= ((func_28(&g_52) , p_26) >= l_651);
            g_150 = &g_57;
            if ((((*l_653) = (void*)0) != &g_23))
            {
                volatile unsigned ***l_655 = &g_284;
                g_127.f2 |= (*g_150);
                (*l_655) = &g_285;
            }
            else
            {
                int **l_656 = (void*)0;
                int **l_657 = &l_623;
                (*l_657) = &p_27;
                (*l_623) = ((*g_150) = func_28(l_658));
                p_27 = (*l_623);
            }
            if (((g_659 , (safe_rshift_func_int16_t_s_s(((-10L) < (&l_658 != ((*l_653) = (l_662 = &l_658)))), 13))) != g_57))
            {
                union U0 *l_663 = &g_54;
                int l_664 = 0x61473327L;
                (*g_150) = (65529UL | g_67.f0);
                l_664 |= (0x70850AE4L & func_28(l_663));
                for (g_437.f0 = 19; (g_437.f0 >= (-29)); g_437.f0--)
                {
                    int **l_667 = &l_623;
                    char ***l_670 = &g_163;
                    char ***l_672 = (void*)0;
                    char ****l_671 = &l_672;
                    int *l_677 = &g_593.f2;
                    (*l_667) = &p_27;
                    (*g_150) = ((((**g_163) >= func_28(l_663)) , (func_28(((((safe_rshift_func_int8_t_s_u((((p_26 , l_670) != ((*l_671) = l_670)) > (*l_623)), 2)) ^ p_26) && ((safe_lshift_func_uint16_t_u_s(65527UL, l_664)) > 246UL)) , &g_440)) && p_27)) >= 1UL);
                    for (l_664 = 0; (l_664 != (-10)); l_664 = safe_sub_func_int8_t_s_s(l_664, 1))
                    {
                        (*l_667) = &g_57;
                    }
                    (*l_677) = ((*l_623) = (**l_667));
                }
                if ((p_26 , ((safe_rshift_func_int16_t_s_s(l_680, (g_641.f1 < (l_681 == &l_682)))) , ((safe_add_func_uint8_t_u_u((~func_28(&g_24)), (safe_add_func_uint32_t_u_u(l_425, p_26)))) , l_664))))
                {
                    int **l_687 = &l_623;
                    int **l_688 = &g_150;
                    unsigned *l_690 = &l_445;
                    unsigned **l_689 = &l_690;
                    (*l_688) = ((*l_687) = &g_57);
                    p_27 ^= ((((*l_689) = &l_445) != &p_26) & ((safe_mod_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(255UL, 7)), 249UL)) < (**l_687)));
                }
                else
                {
                    int **l_696 = &l_623;
                    l_454 ^= p_27;
                    (*l_623) = (!0x50F9AFD8L);
                    (*l_696) = (l_695 = &g_57);
                    (**l_696) = (((*g_150) < p_26) ^ l_526);
                }
            }
            else
            {
                unsigned char l_703 = 9UL;
                unsigned short *l_704 = &g_214.f1;
                int *l_709 = &g_593.f2;
                int *l_710 = &g_641.f2;
                int *l_711 = &g_641.f2;
                int *l_712 = &g_641.f2;
                int *l_713 = &g_593.f2;
                int *l_714 = (void*)0;
                int *l_715 = &g_641.f2;
                l_716 &= ((+(safe_mod_func_int16_t_s_s(((((*l_623) = ((p_26 != func_28(&g_506)) & (*l_623))) ^ l_703) || p_26), p_26))) == l_703);
            }
        }
    }
    for (g_110 = 0; (g_110 >= 15); ++g_110)
    {
        int *l_719 = &g_641.f2;
        unsigned short l_726 = 65535UL;
        int *l_727 = &g_593.f2;
        int *l_728 = (void*)0;
        unsigned short l_729 = 1UL;
        (*l_719) = (p_26 >= p_27);
        p_27 &= (((l_454 , ((*g_23) , ((g_720 , 0L) , ((*l_719) = (l_454 &= (((g_721 , (((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(g_54.f0, 1UL)), 3)) != (func_28(&g_24) >= 0UL)) | 0x8FL)) <= l_726) , p_26)))))) >= l_526) , l_445);
        l_454 ^= p_26;
        return l_729;
    }
    return l_445;
}







static char func_28(union U0 * p_29)
{
    int *l_355 = &g_57;
    int l_377 = 0x4FC3DBBBL;
    union U0 *l_401 = (void*)0;
    if (((*l_355) |= (p_29 == &g_24)))
    {
        unsigned char l_357 = 0x40L;
        (*l_355) ^= (g_356 , l_357);
        l_355 = &g_57;
    }
    else
    {
        short *l_362 = (void*)0;
        int l_363 = 9L;
        int l_364 = 0L;
        unsigned *l_365 = &g_127.f4;
        unsigned char *l_366 = &g_108;
        unsigned l_367 = 0x662F1453L;
        short l_372 = 0x725BL;
        int *l_395 = &l_363;
        int *l_396 = &g_127.f2;
        l_364 = ((((*l_355) == 0x02FAL) < (-7L)) & ((((((safe_add_func_uint8_t_u_u(((l_363 ^= (safe_mod_func_int16_t_s_s((*l_355), g_52.f0))) != 65531UL), ((0x97L <= (((*l_366) = (l_364 >= ((*l_365) = (*l_355)))) , (*l_355))) , l_364))) == 0xA369B165L) == 0xC6E5BA76L) <= (*l_355)) | l_367) == 65533UL));
        if ((l_363 || (((safe_add_func_uint32_t_u_u((*l_355), 0x24F58DC4L)) | 5UL) | ((*l_355) >= ((((l_372 & (((safe_lshift_func_uint16_t_u_u((l_372 && (safe_add_func_uint16_t_u_u(l_377, l_367))), 13)) | 0UL) || 1L)) || l_372) || 0xE7L) > 0x07DAFEBAL)))))
        {
            short l_378 = 1L;
            return l_378;
        }
        else
        {
            (*l_355) = (*l_355);
        }
        if (((*l_355) = l_367))
        {
            unsigned short l_379 = 0x80B9L;
            char *l_384 = &g_385;
            int *l_391 = &g_127.f2;
            (*l_391) ^= ((**g_163) ^ ((((*l_355) , l_379) || (safe_rshift_func_uint8_t_u_u((((*l_384) = ((l_379 > (safe_rshift_func_int16_t_s_u((*l_355), l_372))) >= 8L)) > (g_390 = (((safe_mod_func_uint32_t_u_u((l_363 = ((*g_164) > ((+(+(safe_add_func_int8_t_s_s((*l_355), 8L)))) < l_379))), (*l_355))) > (*l_355)) == l_372))), l_379))) <= (*g_164)));
        }
        else
        {
            for (l_364 = 0; (l_364 <= (-21)); l_364--)
            {
                int **l_394 = &l_355;
                (*l_394) = (void*)0;
            }
        }
        (*l_396) = ((*l_395) &= l_364);
    }
    for (g_214.f0 = (-17); (g_214.f0 == 27); ++g_214.f0)
    {
        unsigned short l_399 = 1UL;
        int *l_400 = &l_377;
        union U0 *l_403 = &g_24;
        union U0 **l_402 = &l_403;
        (*l_400) &= l_399;
        (*l_400) = (l_401 != ((*l_402) = &g_24));
        for (g_127.f2 = 0; (g_127.f2 >= 1); ++g_127.f2)
        {
            unsigned char *l_408 = &g_108;
            int l_412 = 0x02F6A40CL;
            unsigned *l_420 = &g_390;
            int *l_421 = &g_57;
            (*l_421) |= (safe_add_func_uint8_t_u_u(((*l_408) = 0x40L), (g_409 , ((safe_lshift_func_uint16_t_u_s((l_412 == 0L), 6)) || (safe_add_func_uint32_t_u_u(l_377, (safe_mod_func_uint32_t_u_u((g_417 , ((*l_420) |= ((safe_add_func_uint8_t_u_u((*l_400), ((l_412 <= 1UL) , 0xC4L))) || g_356.f0))), 0xBD6C52F7L))))))));
            return (**g_163);
        }
    }
    return l_377;
}







static union U0 * func_30(union U0 * p_31, unsigned p_32)
{
    unsigned l_352 = 0x9544736CL;
    union U1 *l_353 = &g_214;
    for (g_54.f0 = 1; (g_54.f0 != 24); ++g_54.f0)
    {
        int *l_342 = &g_214.f2;
        int **l_343 = (void*)0;
        int **l_344 = (void*)0;
        int **l_345 = (void*)0;
        int **l_346 = &l_342;
        int *l_347 = (void*)0;
        int *l_348 = (void*)0;
        int l_349 = 0xC30DC223L;
        (*l_346) = l_342;
        l_349 ^= (*l_342);
        return p_31;
    }
    for (g_214.f0 = 0; (g_214.f0 > 9); g_214.f0 = safe_add_func_int8_t_s_s(g_214.f0, 4))
    {
        union U1 **l_354 = &l_353;
        if (l_352)
            break;
        (*l_354) = l_353;
    }
    return p_31;
}







static union U0 * func_33(union U0 * p_34, union U0 * p_35, unsigned p_36, unsigned char p_37, union U0 * p_38)
{
    short *l_326 = (void*)0;
    int l_327 = (-1L);
    short **l_328 = (void*)0;
    short **l_329 = &l_326;
    short *l_330 = &g_149;
    int *l_331 = (void*)0;
    int *l_332 = (void*)0;
    int *l_333 = &g_214.f2;
    int *l_334 = &g_127.f2;
    char **l_335 = (void*)0;
    int l_336 = 0L;
    unsigned short ***l_339 = &g_189;
    for (g_54.f0 = 0; (g_54.f0 < (-29)); --g_54.f0)
    {
        int *l_324 = &g_57;
        int **l_325 = &l_324;
        (*l_325) = l_324;
    }
    (*l_334) = ((*l_333) = ((p_36 , (*p_38)) , (((p_37 >= (l_327 ^= (g_149 = p_36))) || (l_327 >= ((((l_330 = ((*l_329) = &g_149)) == &g_149) > (0xA83DEF5BL ^ l_327)) > 0xD2L))) || p_36)));
    (*l_333) = (((*l_334) = (((*g_164) &= (*l_333)) , (l_335 != l_335))) || (l_336 , (((*l_330) = (safe_add_func_int16_t_s_s((l_339 != ((*g_164) , (void*)0)), (p_37 > p_36)))) , (*l_334))));
    return p_38;
}







static union U0 * func_39(unsigned char p_40, union U0 * p_41, unsigned p_42, unsigned p_43, unsigned short p_44)
{
    union U0 *l_53 = &g_54;
    union U0 **l_55 = &l_53;
    int *l_56 = &g_57;
    unsigned l_74 = 0UL;
    unsigned short **l_77 = &g_68;
    unsigned char *l_123 = &g_108;
    unsigned char **l_122 = &l_123;
    short l_197 = (-10L);
    int l_213 = 1L;
    int l_273 = (-6L);
    if (((*l_56) = ((p_44 , ((*p_41) , p_41)) == ((*l_55) = l_53))))
    {
        unsigned short *l_60 = &g_61;
        int l_62 = 0x89E7675DL;
        if ((safe_add_func_uint16_t_u_u(((*l_60) = 65535UL), (l_62 <= (((((*l_56) = (((g_68 = (((((254UL ^ ((g_20 ^ (safe_rshift_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u((g_57 & (g_24.f0 , ((g_67 , &g_57) == &l_62))), g_57)) | 0xD29D3EAFL), p_42))) , (*l_56))) & g_57) > g_52.f0) > (*l_56)) , (void*)0)) != &p_44) , l_62)) & (-1L)) == g_52.f0) < 0xDA6AL)))))
        {
            (*l_56) = (*l_56);
            for (l_62 = 20; (l_62 >= (-2)); l_62 = safe_sub_func_uint8_t_u_u(l_62, 9))
            {
                return &g_54;
            }
        }
        else
        {
            return &g_24;
        }
    }
    else
    {
        unsigned l_71 = 18446744073709551615UL;
        int l_75 = (-2L);
        int l_76 = 1L;
        unsigned short ***l_86 = (void*)0;
        unsigned char *l_107 = &g_108;
        char *l_109 = &g_110;
        char l_111 = 1L;
        unsigned short l_173 = 4UL;
        unsigned *l_202 = &l_74;
        int l_257 = 0x7937E0F4L;
        union U1 *l_287 = &g_214;
        char l_292 = (-1L);
        union U1 **l_319 = &l_287;
        if ((l_71 , (g_61 >= (((safe_mod_func_uint16_t_u_u(((l_71 , &g_57) != (((((l_71 || (p_44 > (((((*l_55) != (l_74 , p_41)) & 6UL) < g_57) < l_71))) , p_42) == g_20) || l_75) , l_56)), 0xAA0CL)) || l_76) && 0x9947D9BAL))))
        {
            unsigned short ***l_78 = &l_77;
            unsigned short *l_79 = &g_61;
            unsigned short ****l_87 = &l_78;
            unsigned short *****l_90 = (void*)0;
            unsigned short ****l_92 = &l_86;
            unsigned short *****l_91 = &l_92;
            (*l_78) = l_77;
            (*l_56) &= ((0x39B4770DL || p_42) <= ((*l_79) |= (l_71 & g_24.f0)));
            (*l_56) = (((*l_56) >= (safe_sub_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((l_86 != ((*l_87) = l_86)), (safe_add_func_uint8_t_u_u((*l_56), g_67.f0)))), l_76)), (((*l_91) = &l_86) == (void*)0)))) || l_71);
            (*l_55) = &g_54;
        }
        else
        {
            for (p_43 = 12; (p_43 == 12); p_43++)
            {
                (*l_56) |= 9L;
                if (p_44)
                    continue;
            }
            for (p_44 = 0; (p_44 != 23); ++p_44)
            {
                int *l_99 = &l_75;
                int **l_100 = &l_99;
                g_97 = g_97;
                l_56 = l_99;
                (*l_100) = &g_57;
                (*l_99) = g_98.f1;
            }
            (*l_56) = 1L;
            (*l_56) = (safe_mod_func_uint32_t_u_u(g_67.f0, ((p_43 > g_20) | (*l_56))));
        }
        if ((((!((*l_109) = (safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((g_20 | (*l_56)), ((l_76 != l_71) >= (*l_56)))) != l_76), ((*l_107) = g_20))))) , (p_44 ^= ((*l_56) & l_71))) <= p_42))
        {
            unsigned short *l_112 = &g_61;
            int l_121 = (-10L);
            unsigned char l_134 = 0UL;
            char **l_162 = &l_109;
            unsigned l_212 = 0x3FA78A77L;
            union U0 *l_283 = &g_54;
            unsigned **l_290 = &l_202;
            unsigned ***l_291 = &l_290;
            if ((0x8DC0L & l_111))
            {
                int l_113 = (-1L);
                int l_144 = 0x77F70597L;
                int l_198 = (-1L);
                unsigned short *l_215 = (void*)0;
                if ((((&g_61 != l_112) >= (((l_113 , ((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((p_40 |= (g_52.f0 , (g_118 , p_44))), (g_20 < 246UL))), (safe_rshift_func_uint16_t_u_s((l_75 &= ((*l_112) &= (p_43 != 1L))), p_43)))) && 4294967290UL)) < 0x7C4E94C4L) ^ 1L)) & l_121))
                {
                    unsigned char ***l_124 = &l_122;
                    int l_142 = (-1L);
                    int *l_143 = &l_121;
                    short *l_145 = (void*)0;
                    short *l_146 = &g_54.f0;
                    short *l_147 = (void*)0;
                    short *l_148 = &g_149;
                    g_125 = ((*l_124) = l_122);
                    if (((g_127 , (g_127.f1 != (p_44 == ((*l_148) &= ((*l_146) = (safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s(g_61, (l_144 = (((*l_143) = ((*l_56) = (safe_sub_func_int16_t_s_s((l_134 < ((*l_56) , (safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u(((((g_110 = (safe_lshift_func_uint8_t_u_s(l_134, 2))) >= g_52.f0) , g_141) , 65527UL), l_134)) , l_113), l_142)))), g_127.f1)))) && (-1L))))) , (*l_56)), 4UL))))))) || 0x3A25EAEAL))
                    {
                        char **l_151 = &l_109;
                        char ***l_152 = (void*)0;
                        char ***l_153 = &l_151;
                        int l_171 = (-8L);
                        unsigned *l_172 = &l_74;
                        g_150 = &l_75;
                        (*l_153) = l_151;
                        (*g_150) |= l_113;
                        (*l_143) = (p_40 <= (((l_76 >= p_40) , (safe_rshift_func_int8_t_s_u(((*l_109) = (safe_sub_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s((((*l_153) = l_162) == g_163), ((0L > p_43) || (((safe_rshift_func_int8_t_s_s(((safe_sub_func_int8_t_s_s((0x8C7CDC26L < ((*l_172) = (safe_lshift_func_uint8_t_u_s(l_171, 2)))), 1UL)) | l_173), 2)) , l_171) > p_42)))), g_141.f0)), (**g_163)))), l_134))) != 0xF2L));
                    }
                    else
                    {
                        g_150 = &g_57;
                    }
                    for (l_75 = 0; (l_75 != 15); l_75 = safe_add_func_int16_t_s_s(l_75, 1))
                    {
                        int l_176 = 0L;
                        int *l_181 = &l_142;
                        unsigned short ******l_190 = &g_186;
                        unsigned short *****l_192 = (void*)0;
                        unsigned short ******l_191 = &l_192;
                        unsigned *l_199 = &l_74;
                        (*l_181) &= ((*l_143) |= (((l_173 , (p_44 <= g_24.f0)) <= (**g_163)) == ((l_176 = g_20) && ((safe_sub_func_int32_t_s_s(p_42, (safe_add_func_int16_t_s_s(0x135BL, l_176)))) || (((8L & g_67.f0) == 0UL) | l_111)))));
                        (*l_181) |= (l_173 & (((*l_199) |= (safe_add_func_uint32_t_u_u((((p_44 = ((safe_add_func_uint32_t_u_u(l_144, (+(((*l_191) = ((*l_190) = g_186)) == (void*)0)))) ^ g_127.f1)) | (safe_mod_func_uint16_t_u_u(l_121, ((p_40 >= (l_198 = ((safe_rshift_func_uint16_t_u_s((l_197 , 0x25D5L), 15)) == l_144))) || 0x718A764DL)))) , l_121), p_40))) , 1UL));
                    }
                }
                else
                {
                    unsigned short **l_211 = &l_112;
                    int l_216 = 1L;
                    (*l_56) = ((((safe_lshift_func_uint8_t_u_s((((void*)0 == l_202) , ((*l_55) != (((safe_rshift_func_int16_t_s_s((((*p_41) , (0x68L ^ (safe_lshift_func_uint16_t_u_s(((*g_97) , (g_54.f0 , ((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(g_118.f0, ((((((g_20 , g_108) && (-1L)) || 3L) , l_211) == l_211) , 0x99BEL))), (*l_56))) & p_44))), (*l_56))))) ^ 255UL), p_42)) , (*g_164)) , (void*)0))), 2)) ^ 0UL) && l_212) < l_213);
                    l_216 |= ((g_214 , &p_44) == (l_215 = l_215));
                    (*l_55) = p_41;
                }
                (*l_56) &= l_212;
            }
            else
            {
                int **l_217 = &g_150;
                char **l_222 = &g_164;
                union U0 *l_228 = &g_24;
                unsigned char l_234 = 0UL;
                (*l_217) = &l_75;
                for (g_54.f2 = 0; (g_54.f2 <= 26); g_54.f2 = safe_add_func_uint16_t_u_u(g_54.f2, 4))
                {
                    if (l_134)
                        break;
                    (**l_217) &= (g_24.f0 , l_173);
                    for (l_76 = (-30); (l_76 >= (-19)); l_76++)
                    {
                        char ***l_223 = &g_163;
                        (*g_150) = (*g_150);
                        if ((*g_150))
                            continue;
                        (*l_223) = l_222;
                        if (p_40)
                            break;
                    }
                    (**l_217) = l_212;
                }
                if ((safe_lshift_func_uint8_t_u_s(((p_42 = (safe_add_func_int32_t_s_s(p_44, ((**l_217) = l_75)))) || (**l_217)), (l_212 | (0x5B8F2B9AL ^ (65532UL && 0x1DC5L))))))
                {
                    (*l_56) = p_44;
                    (*l_55) = l_228;
                }
                else
                {
                    char ***l_237 = &l_162;
                    if (((**l_217) = (!((safe_lshift_func_uint16_t_u_u(g_231, 0)) || ((**g_163) |= p_42)))))
                    {
                        unsigned l_238 = 0x124419D7L;
                        (*g_150) = (safe_add_func_int8_t_s_s((-3L), ((((l_234 != ((((((*l_55) = p_41) != p_41) == (safe_add_func_uint32_t_u_u(((0L || (l_237 != (void*)0)) ^ ((((*g_186) != (*g_186)) ^ p_42) & (-3L))), 2UL))) && 0L) <= l_238)) <= 0x9DA225ADL) < p_42) > (**g_163))));
                    }
                    else
                    {
                        unsigned short l_255 = 0xD35BL;
                        short l_256 = (-6L);
                        l_75 = ((l_76 && (((((&g_125 == &g_125) == ((~p_43) , (p_40 & ((((((*l_109) = (safe_lshift_func_uint8_t_u_u(p_43, (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u(p_44, (((-1L) ^ ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_s((safe_add_func_uint8_t_u_u(l_173, (**l_217))), p_40)), p_44)), (**g_163))) || p_42)) , (-6L)))), g_98.f1)), 8))))) || l_255) > 0x6479L) >= 0x29L) < l_212)))) != 0x19E5L) , (*l_56)) >= l_256)) == l_256);
                        (*l_217) = &l_75;
                    }
                    l_257 = (l_75 = p_43);
                    (*g_150) = (**l_217);
                }
            }
            for (l_75 = 23; (l_75 >= (-28)); l_75 = safe_sub_func_int16_t_s_s(l_75, 1))
            {
                unsigned l_262 = 0UL;
                int l_263 = 0L;
                unsigned short ***l_271 = &l_77;
                unsigned short ****l_272 = &l_86;
                l_257 &= (g_108 & (**g_163));
                for (l_71 = (-27); (l_71 < 37); l_71 = safe_add_func_uint8_t_u_u(l_71, 1))
                {
                    int *l_266 = &g_214.f2;
                    (*l_266) = ((l_263 = ((*l_112) = l_262)) != (safe_rshift_func_uint8_t_u_s(p_44, 6)));
                    if (p_43)
                        break;
                }
            }
            (*l_56) = (p_42 > (safe_lshift_func_uint16_t_u_u(((*l_112) = ((((((*l_56) , (+1UL)) && ((**l_162) = ((p_40 || ((g_214.f0 , ((*l_291) = (g_20 , l_290))) == &g_285)) != ((*l_202) &= 0UL)))) || p_44) , l_111) , l_292)), l_212)));
        }
        else
        {
            unsigned char **l_293 = &g_126;
            unsigned char ***l_294 = &l_122;
            unsigned char l_299 = 0x6DL;
            unsigned l_302 = 6UL;
            short *l_303 = &l_197;
            short *l_306 = (void*)0;
            short *l_307 = &g_54.f0;
            int *l_308 = &g_127.f2;
            int *l_309 = &l_257;
            (*l_56) ^= ((((l_293 != ((*l_294) = (void*)0)) < (6UL > (+((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((((*g_164) &= ((l_71 <= 0x57851B50L) | l_299)) > l_257), 0x2582L)), l_76)) == 0x6EL)))) && 0x62L) == (-1L));
            (*l_309) ^= (65530UL >= ((safe_lshift_func_int16_t_s_u(((*l_303) &= (l_302 = l_299)), (6L > ((*l_307) = (l_173 >= ((&p_43 == (void*)0) != (safe_mod_func_uint32_t_u_u(p_40, ((*l_56) = p_43))))))))) > ((void*)0 != &p_42)));
        }
        for (p_43 = 0; (p_43 == 26); p_43++)
        {
            int *l_312 = &l_257;
            int **l_313 = &g_150;
            (*l_313) = l_312;
            if ((safe_sub_func_int32_t_s_s((*g_150), (~(*g_150)))))
            {
                if (((p_41 != &g_24) < g_118.f0))
                {
                    int *l_316 = (void*)0;
                    (*l_313) = l_316;
                    if (g_20)
                        break;
                }
                else
                {
                    (*l_56) &= (safe_add_func_int8_t_s_s(0xACL, p_42));
                    (*g_150) = (*g_150);
                }
                g_320 = l_319;
                if (p_40)
                    break;
            }
            else
            {
                (*g_150) = (&l_287 == &g_97);
            }
        }
    }
    return &g_52;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_24.f0, "g_24.f0", print_hash_value);
    transparent_crc(g_52.f0, "g_52.f0", print_hash_value);
    transparent_crc(g_54.f0, "g_54.f0", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_61, "g_61", print_hash_value);
    transparent_crc(g_67.f0, "g_67.f0", print_hash_value);
    transparent_crc(g_98.f0, "g_98.f0", print_hash_value);
    transparent_crc(g_98.f1, "g_98.f1", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_118.f0, "g_118.f0", print_hash_value);
    transparent_crc(g_127.f0, "g_127.f0", print_hash_value);
    transparent_crc(g_127.f1, "g_127.f1", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_214.f0, "g_214.f0", print_hash_value);
    transparent_crc(g_214.f1, "g_214.f1", print_hash_value);
    transparent_crc(g_231, "g_231", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_356.f0, "g_356.f0", print_hash_value);
    transparent_crc(g_356.f1, "g_356.f1", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_390, "g_390", print_hash_value);
    transparent_crc(g_409.f0, "g_409.f0", print_hash_value);
    transparent_crc(g_409.f1, "g_409.f1", print_hash_value);
    transparent_crc(g_417.f0, "g_417.f0", print_hash_value);
    transparent_crc(g_417.f1, "g_417.f1", print_hash_value);
    transparent_crc(g_433.f0, "g_433.f0", print_hash_value);
    transparent_crc(g_433.f1, "g_433.f1", print_hash_value);
    transparent_crc(g_437.f0, "g_437.f0", print_hash_value);
    transparent_crc(g_440.f0, "g_440.f0", print_hash_value);
    transparent_crc(g_506.f0, "g_506.f0", print_hash_value);
    transparent_crc(g_534.f0, "g_534.f0", print_hash_value);
    transparent_crc(g_550, "g_550", print_hash_value);
    transparent_crc(g_578, "g_578", print_hash_value);
    transparent_crc(g_593.f0, "g_593.f0", print_hash_value);
    transparent_crc(g_593.f1, "g_593.f1", print_hash_value);
    transparent_crc(g_594.f0, "g_594.f0", print_hash_value);
    transparent_crc(g_639.f0, "g_639.f0", print_hash_value);
    transparent_crc(g_639.f1, "g_639.f1", print_hash_value);
    transparent_crc(g_640.f0, "g_640.f0", print_hash_value);
    transparent_crc(g_641.f0, "g_641.f0", print_hash_value);
    transparent_crc(g_641.f1, "g_641.f1", print_hash_value);
    transparent_crc(g_659.f0, "g_659.f0", print_hash_value);
    transparent_crc(g_659.f1, "g_659.f1", print_hash_value);
    transparent_crc(g_720.f0, "g_720.f0", print_hash_value);
    transparent_crc(g_720.f1, "g_720.f1", print_hash_value);
    transparent_crc(g_721.f0, "g_721.f0", print_hash_value);
    transparent_crc(g_721.f1, "g_721.f1", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_772, "g_772", print_hash_value);
    transparent_crc(g_777.f0, "g_777.f0", print_hash_value);
    transparent_crc(g_784.f0, "g_784.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
