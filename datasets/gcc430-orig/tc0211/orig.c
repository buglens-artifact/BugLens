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
   short f1;
};

union U1 {
   int f0;
   unsigned long long f1;
   unsigned char f2;
   char f3;
   unsigned long long f4;
};

union U2 {
   long long f0;
   short f1;
   int f2;
   int f3;
   int f4;
};

union U3 {
   unsigned f0;
};

union U4 {
   unsigned short f0;
   int f1;
};


static unsigned char g_20 = 0x70L;
static int g_22 = 0x8CAFA32FL;
static union U2 g_41 = {7L};
static union U1 g_54 = {0x23B26D5DL};
static short g_65 = (-1L);
static long long g_86 = 7L;
static unsigned long long g_90 = 18446744073709551607UL;
static long long g_92 = 0L;
static unsigned g_93 = 1UL;
static short g_96 = 0x9A1AL;
static unsigned g_97 = 0UL;
static short g_117 = (-8L);
static unsigned long long g_138 = 18446744073709551615UL;
static unsigned char g_151 = 0xD0L;
static int g_169 = 0x9048C16DL;
static long long g_170[10][4][2] = {{{(-7L),1L},{0xD5E1251B008363A2LL,0xCAA1097536633CC6LL},{0xF6F6D5B12924758FLL,0L},{1L,0x449837FEA80240E7LL}},{{0x449837FEA80240E7LL,(-1L)},{0x148A6797DE492F91LL,1L},{0xB8437FCE87808701LL,0x8DE757AF5BD10381LL},{0L,0x8DE757AF5BD10381LL}},{{0xB8437FCE87808701LL,1L},{0x148A6797DE492F91LL,(-1L)},{0x449837FEA80240E7LL,0x449837FEA80240E7LL},{1L,0L}},{{0xF6F6D5B12924758FLL,0xCAA1097536633CC6LL},{0xD5E1251B008363A2LL,1L},{(-7L),0xD5E1251B008363A2LL},{2L,0xB8437FCE87808701LL}},{{2L,0xD5E1251B008363A2LL},{(-7L),1L},{0xD5E1251B008363A2LL,0xCAA1097536633CC6LL},{0xF6F6D5B12924758FLL,0L}},{{1L,0x449837FEA80240E7LL},{0x449837FEA80240E7LL,(-1L)},{0x148A6797DE492F91LL,1L},{0x449837FEA80240E7LL,1L}},{{0xF6F6D5B12924758FLL,1L},{0x449837FEA80240E7LL,2L},{0xFF7BA7B7964C2DCCLL,0xD7F4DA6B924B8A10LL},{0L,0L}},{{2L,0xF6F6D5B12924758FLL},{1L,0xB8437FCE87808701LL},{0xCAA1097536633CC6LL,2L},{0x31E146C4C103C77FLL,0xCAA1097536633CC6LL}},{{0x148A6797DE492F91LL,0x449837FEA80240E7LL},{0x148A6797DE492F91LL,0xCAA1097536633CC6LL},{0x31E146C4C103C77FLL,2L},{0xCAA1097536633CC6LL,0xB8437FCE87808701LL}},{{1L,0xF6F6D5B12924758FLL},{2L,0L},{0L,0xD7F4DA6B924B8A10LL},{0xFF7BA7B7964C2DCCLL,2L}}};
static char g_176 = 0x0CL;
static unsigned short g_177[3][2][3] = {{{65533UL,65535UL,9UL},{65535UL,0x279CL,0UL}},{{65533UL,65533UL,0UL},{0x279CL,65535UL,9UL}},{{65535UL,65533UL,65535UL},{65535UL,0x279CL,65533UL}}};
static short g_180[9][1][4] = {{{0x61F0L,0x94B4L,0x94B4L,0x61F0L}},{{(-1L),0xDE6CL,0x94B4L,1L}},{{0x61F0L,0x083FL,(-10L),0x083FL}},{{0x083FL,0x94B4L,(-1L),0x083FL}},{{(-1L),0x083FL,1L,1L}},{{0xDE6CL,0xDE6CL,(-10L),0x61F0L}},{{0xDE6CL,0x94B4L,1L,0xDE6CL}},{{(-1L),0x61F0L,(-1L),1L}},{{0x083FL,0x61F0L,(-10L),0xDE6CL}}};
static unsigned long long g_205 = 0UL;
static union U0 g_215 = {-10L};
static char g_228 = (-3L);
static int g_245 = 1L;
static short g_269[3][10] = {{0x1763L,0x32C0L,(-7L),0xB244L,(-7L),0x32C0L,0x1763L,0x41D8L,0x32C0L,0xB244L},{(-8L),7L,0x41D8L,0x32C0L,0xB244L,(-8L),(-8L),0xB244L,0x32C0L,0x41D8L},{7L,7L,0L,0x1763L,0xB244L,0xEA65L,7L,0xB244L,1L,0xB244L}};
static short g_276 = 4L;
static short g_277 = 0x9878L;
static unsigned char g_281[8] = {0xF2L,0xF2L,0xF2L,0xF2L,0xF2L,0xF2L,0xF2L,0xF2L};
static union U4 g_286 = {65529UL};
static unsigned g_304[4] = {0x79F272DAL,0x79F272DAL,0x79F272DAL,0x79F272DAL};
static union U0 g_318 = {-5L};
static unsigned char g_374[7] = {0xADL,0xADL,0xADL,0xADL,0xADL,0xADL,0xADL};
static char g_375[6][10] = {{0x2FL,0L,0x22L,(-1L),1L,(-1L),0x22L,0L,0x2FL,(-9L)},{0x6CL,(-9L),0L,0x7AL,0L,0x83L,(-7L),1L,1L,(-7L)},{0L,0x6CL,0x7AL,0x7AL,0x6CL,0L,1L,0x83L,0x2FL,0L},{0L,1L,(-9L),(-1L),0L,(-9L),0L,(-9L),0L,(-1L)},{0L,(-9L),0L,(-3L),(-7L),0L,(-1L),0L,(-9L),0x83L},{0L,(-1L),0L,(-9L),0x6CL,0x6CL,0x28L,0L,1L,(-9L)}};
static unsigned char g_379 = 0x52L;
static int g_426 = 0xCDED3C53L;
static unsigned short g_428 = 0xA15CL;
static unsigned short g_470 = 1UL;
static unsigned char g_505 = 0x50L;
static short g_594 = (-1L);
static unsigned char g_596 = 0x94L;
static union U3 g_630[7] = {{0UL},{0UL},{0UL},{0UL},{0UL},{0UL},{0UL}};
static unsigned long long g_672[2] = {0xC0DB6F2181AFE16ALL,0xC0DB6F2181AFE16ALL};
static union U2 g_689[4][8] = {{{-1L},{-1L},{-1L},{0x788785C76CE861F5LL},{-1L},{-1L},{-1L},{-1L}},{{-1L},{-1L},{-1L},{-1L},{0x788785C76CE861F5LL},{-1L},{-1L},{-1L}},{{-1L},{0x844E430FA72A12BDLL},{0x377AA4BC75B3C2FCLL},{0x844E430FA72A12BDLL},{-1L},{0x377AA4BC75B3C2FCLL},{4L},{4L}},{{-1L},{0x844E430FA72A12BDLL},{0x788785C76CE861F5LL},{0x788785C76CE861F5LL},{0x844E430FA72A12BDLL},{-1L},{-1L},{0x844E430FA72A12BDLL}}};
static unsigned short g_719 = 0x2DFEL;
static long long g_761 = (-1L);
static char g_762 = (-7L);
static unsigned g_763 = 0xD3FE7018L;
static char g_793 = 0xBAL;
static short g_797 = 3L;
static char g_798[1][3][2] = {{{(-1L),(-1L)},{(-1L),(-1L)},{(-1L),(-1L)}}};
static unsigned short g_799 = 0x8FF0L;
static unsigned g_803 = 0x38C9D636L;
static unsigned short g_805 = 0x65C0L;
static unsigned long long g_810 = 1UL;
static unsigned g_817 = 4294967289UL;
static union U2 g_857 = {1L};
static char g_892 = 0x46L;
static long long g_903 = 0xE41842DB02175C21LL;
static unsigned short g_915 = 0x24ADL;
static unsigned g_929[1] = {0x4D96170EL};
static unsigned g_1056 = 4294967293UL;
static char g_1082 = 8L;
static unsigned g_1084[5] = {0x8C9FD334L,0x8C9FD334L,0x8C9FD334L,0x8C9FD334L,0x8C9FD334L};
static union U4 g_1173 = {0xDBBFL};
static int g_1404[3][4] = {{0x327B5F0AL,0x327B5F0AL,0x327B5F0AL,0x327B5F0AL},{0x327B5F0AL,0x327B5F0AL,0x327B5F0AL,0x327B5F0AL},{0x327B5F0AL,0x327B5F0AL,0x327B5F0AL,0x327B5F0AL}};
static unsigned char g_1405 = 255UL;
static union U1 g_1408 = {0x1A54580FL};
static unsigned long long g_1448 = 18446744073709551612UL;
static short g_1484 = (-6L);
static short g_1486 = 0L;
static unsigned g_1487 = 0x73DB5D32L;
static long long g_1494[1][5][6] = {{{(-1L),0xAE0217CCB6D921B4LL,4L,0xA887F64C5D90E2E3LL,0xAF0EDC8316F3DF76LL,0xA6E09B9CC37A6483LL},{0xAF0EDC8316F3DF76LL,0L,(-1L),0L,0xAF0EDC8316F3DF76LL,0L},{0xA6E09B9CC37A6483LL,0xAE0217CCB6D921B4LL,0x43229605157E621ALL,0L,0L,4L},{4L,0L,0xAE0217CCB6D921B4LL,0xAE0217CCB6D921B4LL,0L,4L},{0xAE0217CCB6D921B4LL,0L,4L,0L,(-1L),0xA3C82317A4B5A4B2LL}}};
static unsigned long long g_1495 = 0x97BD3009FE6A6016LL;
static unsigned char g_1559 = 247UL;
static short g_1592 = (-10L);
static unsigned long long g_1617[8] = {0x64C2DA6F2E87DA70LL,0x64C2DA6F2E87DA70LL,0x64C2DA6F2E87DA70LL,0x64C2DA6F2E87DA70LL,0x64C2DA6F2E87DA70LL,0x64C2DA6F2E87DA70LL,0x64C2DA6F2E87DA70LL,0x64C2DA6F2E87DA70LL};
static unsigned g_1750 = 0x379D34C9L;
static short g_1755 = 0xF16EL;
static short g_1757 = 0x7FD4L;
static union U3 g_1807 = {0UL};
static unsigned char g_1821 = 255UL;



static int func_1(void);
static int func_2(union U3 p_3, union U3 p_4, char p_5, unsigned short p_6);
static union U3 func_7(union U2 p_8, int p_9, union U1 p_10, long long p_11, int p_12);
static union U2 func_13(unsigned p_14, int p_15, unsigned short p_16);
static unsigned func_17(unsigned p_18, unsigned long long p_19);
static unsigned func_25(char p_26, union U4 p_27);
static unsigned func_29(union U1 p_30, unsigned p_31, union U2 p_32, int p_33);
static union U1 func_34(unsigned long long p_35, unsigned long long p_36, unsigned p_37, union U2 p_38, short p_39);
static int func_48(union U1 p_49, unsigned char p_50, unsigned long long p_51, short p_52, union U4 p_53);
static char func_68(unsigned char p_69, unsigned short p_70);
static int func_1(void)
{
    unsigned l_21 = 0xD3833037L;
    union U4 l_1378 = {0x33D1L};
    unsigned l_1379[8] = {0xEBCF21B9L,0xEBCF21B9L,0xEBCF21B9L,0xEBCF21B9L,0xEBCF21B9L,0xEBCF21B9L,0xEBCF21B9L,0xEBCF21B9L};
    int l_1380 = 0x1497C4E9L;
    union U3 l_1424 = {1UL};
    int l_1425[6] = {8L,8L,8L,8L,8L,8L};
    int l_1485 = 0x0A78DA15L;
    int l_1490 = 0xD58524A3L;
    int l_1491 = 0xC43C87C9L;
    int l_1492 = 0L;
    int l_1493 = 2L;
    char l_1501 = 4L;
    unsigned short l_1506 = 0xADA1L;
    char l_1520[5][8] = {{0x56L,1L,0x56L,0x56L,1L,0x56L,0x56L,1L},{1L,0x56L,0x56L,1L,0x56L,0x56L,1L,0x56L},{1L,1L,(-8L),1L,1L,(-8L),1L,1L},{0x56L,1L,0x56L,0x56L,1L,0x56L,0x56L,1L},{1L,0x56L,0x56L,1L,0x56L,0x56L,1L,0x56L}};
    int l_1521 = 0xA35BEB1DL;
    int l_1538 = 0x8FF6AD1BL;
    unsigned char l_1539 = 0x72L;
    unsigned long long l_1547 = 0UL;
    unsigned l_1554[6];
    union U3 l_1556 = {0UL};
    union U4 l_1582 = {0xA614L};
    unsigned char l_1583 = 0x7BL;
    unsigned long long l_1584 = 18446744073709551615UL;
    short l_1590 = 0x37B2L;
    long long l_1613 = 0xE1EE9AAECEA9AD05LL;
    char l_1614 = 8L;
    int l_1615 = (-1L);
    short l_1616 = 0L;
    union U3 l_1621 = {0UL};
    union U1 l_1622 = {-6L};
    union U0 l_1623 = {-1L};
    unsigned short l_1629 = 65526UL;
    unsigned char l_1631 = 3UL;
    short l_1641 = 0x6603L;
    unsigned long long l_1644 = 0x706413C55822CBB1LL;
    unsigned long long l_1646 = 0x5BEAA0F48170268CLL;
    char l_1648[8];
    unsigned long long l_1651 = 0UL;
    unsigned long long l_1666 = 0xEEABC117838487CCLL;
    short l_1675 = 5L;
    unsigned char l_1702 = 0xF3L;
    int l_1703 = 1L;
    short l_1710 = (-1L);
    char l_1711 = 0x14L;
    union U2 l_1716[4][1][2] = {{{{0xA90CDA57C48F03D9LL},{0xA90CDA57C48F03D9LL}}},{{{1L},{0xA90CDA57C48F03D9LL}}},{{{0xA90CDA57C48F03D9LL},{1L}}},{{{0xA90CDA57C48F03D9LL},{0xA90CDA57C48F03D9LL}}}};
    int l_1717 = 1L;
    unsigned long long l_1718 = 0xD31599AA685F0304LL;
    char l_1740 = (-1L);
    unsigned l_1743 = 5UL;
    union U3 l_1778[2] = {{0x5B888699L},{0x5B888699L}};
    unsigned short l_1804 = 1UL;
    unsigned l_1841 = 6UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_1554[i] = 1UL;
    for (i = 0; i < 8; i++)
        l_1648[i] = 0L;
    if ((func_2(func_7(func_13(func_17(g_20, l_21), (safe_mod_func_int32_t_s_s(g_92, (safe_mod_func_int32_t_s_s((l_1380 = ((l_1378.f1 = ((g_54.f0 = (g_1173.f1 = func_25(((safe_sub_func_int64_t_s_s(((safe_sub_func_uint16_t_u_u(g_903, ((safe_add_func_uint64_t_u_u(l_21, (safe_mod_func_int64_t_s_s(((func_25((g_1082 = ((0x182CL | (l_21 || l_21)) < l_21)), l_1378) == l_1379[4]) | 0x4C248A0AL), 18446744073709551615UL)))) <= l_1379[5]))) && l_21), 18446744073709551615UL)) , l_1379[4]), g_1173))) < l_1379[4])) < l_1379[4])), (-8L))))), l_1379[4]), g_810, g_1408, g_689[2][3].f4, g_90), l_1424, l_1425[0], g_281[3]) ^ g_797))
    {
        int l_1471 = 0xCC6620A3L;
        union U4 l_1472[8] = {{0x67AFL},{0x2168L},{0x2168L},{0x67AFL},{0x2168L},{0x2168L},{0x67AFL},{0x2168L}};
        int l_1481[1];
        unsigned short l_1482 = 65535UL;
        unsigned l_1483[1][10][4] = {{{0x1218DBACL,0UL,0x7CB7B687L,0xB27815EAL},{0x1218DBACL,0x29BEADB4L,0x29BEADB4L,0x1218DBACL},{0UL,0UL,0x7CB7B687L,0x90851AF3L},{0UL,18446744073709551608UL,0x1218DBACL,0xAD2F26DAL},{0x2A04AA28L,0xA0BAE456L,0x90851AF3L,0xAD2F26DAL},{0xC8FF1096L,18446744073709551608UL,0xC8FF1096L,0x90851AF3L},{0x29BEADB4L,0UL,0UL,0x29BEADB4L},{0x2A04AA28L,0x90851AF3L,0x7CB7B687L,0UL},{0x90851AF3L,18446744073709551608UL,0x7CB7B687L,0x7CB7B687L},{0x2A04AA28L,0x2A04AA28L,0UL,0xAD2F26DAL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1481[i] = (-1L);
        g_426 |= (+(((safe_sub_func_int16_t_s_s((safe_unary_minus_func_int64_t_s((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(((l_1379[0] != l_1471) > func_25((0UL != g_799), l_1472[1])), (((func_68((safe_mod_func_uint32_t_u_u((safe_sub_func_uint64_t_u_u(((safe_sub_func_int64_t_s_s(g_630[5].f0, (l_1378.f1 = (((func_17((l_1481[0] = ((safe_lshift_func_uint16_t_u_u((l_1472[1].f0 , ((g_1408.f0 > g_97) || 0xB9L)), 14)) == l_1471)), l_1482) > l_1380) ^ 0x2471E4FA65B2035BLL) & 0UL)))) > l_1472[1].f0), g_810)), 0xD6ABB640L)), l_1483[0][9][1]) | l_1425[2]) | g_689[2][3].f3) & g_1408.f2))), (-1L))))), (-1L))) > g_176) && 8UL));
        if (g_65)
            goto lbl_1500;
        --g_1487;
        --g_1495;
    }
    else
    {
lbl_1500:
        g_1173.f1 &= (safe_rshift_func_uint8_t_u_s(l_1485, 5));
        if (func_17((func_13((func_68(g_117, l_1501) <= ((+(safe_mod_func_uint8_t_u_u(0xF4L, (g_505 = g_92)))) > g_1173.f1)), (func_25((safe_add_func_uint8_t_u_u((l_1506 = l_1485), (g_1408.f3 ^= g_1173.f0))), g_1173) || 0UL), g_41.f2) , 0UL), g_470))
        {
            int l_1515 = 0x9C8EC41EL;
            union U3 l_1555 = {0x36DF9453L};
            unsigned short l_1557[4][1];
            unsigned l_1575 = 18446744073709551615UL;
            int l_1591[4];
            unsigned l_1594[8] = {0xA2082BECL,0xA2082BECL,0xA2082BECL,0xA2082BECL,0xA2082BECL,0xA2082BECL,0xA2082BECL,0xA2082BECL};
            union U1 l_1603[4][6][3] = {{{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}}},{{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}}},{{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}}},{{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}},{{0x85612936L},{0x85612936L},{0x85612936L}}}};
            short l_1612[8][1] = {{(-3L)},{(-3L)},{7L},{(-3L)},{(-3L)},{7L},{(-3L)},{(-3L)}};
            unsigned char l_1645 = 0x20L;
            int i, j, k;
            for (i = 0; i < 4; i++)
            {
                for (j = 0; j < 1; j++)
                    l_1557[i][j] = 0xBC85L;
            }
            for (i = 0; i < 4; i++)
                l_1591[i] = 0x4E20BC4AL;
            for (g_1486 = 0; (g_1486 != (-14)); --g_1486)
            {
                unsigned l_1509 = 0x00A1A6EEL;
                union U4 l_1513[1] = {{0UL}};
                union U1 l_1552 = {-1L};
                union U2 l_1553 = {0xC03AA4B2FC361236LL};
                int l_1593 = 0x75ED2FF6L;
                union U3 l_1620 = {0x4DD9E1B2L};
                int i;
            }
            g_54.f0 = g_97;
            l_1646 = (((safe_add_func_uint16_t_u_u(g_689[2][3].f4, l_1539)) > l_1515) <= g_763);
            l_1591[2] ^= (((safe_unary_minus_func_uint8_t_u(2UL)) != (-5L)) & (((0x1FFB29520D4C1BB0LL ^ l_1485) > (g_374[5] |= (((l_1378 , (l_1648[5] || l_1612[7][0])) > 3UL) != g_375[5][6]))) ^ 3L));
        }
        else
        {
            unsigned l_1656 = 0xA6876169L;
            for (l_1629 = (-4); (l_1629 != 33); ++l_1629)
            {
                long long l_1682 = (-2L);
                if (((g_54.f2 = (g_689[2][3].f0 < l_1651)) , l_1539))
                {
                    if (g_763)
                    {
                        unsigned long long l_1652 = 18446744073709551615UL;
                        --l_1652;
                    }
                    else
                    {
                        unsigned l_1655 = 0x0C398F2BL;
                        if (l_1655)
                            break;
                        g_1408.f0 = l_1656;
                    }
                }
                else
                {
                    g_1408.f0 = (g_810 ^ (g_798[0][1][1] > 0UL));
                }
                g_54.f0 = (safe_sub_func_uint16_t_u_u(65533UL, ((safe_mod_func_int16_t_s_s((~(-10L)), (safe_unary_minus_func_int8_t_s((safe_rshift_func_int8_t_s_u((!((l_1666 && ((safe_mod_func_int16_t_s_s(0L, l_1656)) == (((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s(l_1656, 0xBE96B26DB2787279LL)), (safe_add_func_uint64_t_u_u(0x33D8DBC9E1A522C5LL, g_245)))) & l_1675) >= 0x88L))) , g_41.f4)), 2)))))) ^ l_1656)));
                g_54.f0 = (g_1408.f0 = ((safe_rshift_func_int16_t_s_u(g_304[3], ((safe_rshift_func_int16_t_s_s((g_215 , (g_41.f0 , ((safe_add_func_uint32_t_u_u((!0UL), l_1682)) & (safe_lshift_func_int8_t_s_u(0xE6L, 6))))), 11)) , ((g_799 & (safe_rshift_func_uint16_t_u_u(0UL, ((g_630[5] , g_286.f0) < g_672[1])))) , 2UL)))) >= g_1084[2]));
            }
            for (l_1491 = 0; (l_1491 < (-7)); --l_1491)
            {
                long long l_1701 = 7L;
                l_1703 = (l_1656 | ((g_929[0] ^ ((g_205++) > ((0x9023L <= func_17(g_374[4], ((g_215.f0 == (safe_rshift_func_uint16_t_u_s((safe_add_func_uint64_t_u_u(((safe_rshift_func_int8_t_s_u(((l_1520[4][6] != ((safe_mod_func_int64_t_s_s(l_1520[4][3], l_1701)) || l_1491)) >= 9UL), 0)) | l_1701), g_170[8][0][1])), 13))) , g_1487))) | 0xA85C8CADL))) != l_1702));
            }
        }
        l_1490 = (l_1491 = ((safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((+(safe_rshift_func_int8_t_s_s(g_761, l_1710))), g_929[0])) , 0x811EAB9BL), ((g_594 >= (g_65 , (l_1711 >= ((safe_add_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u(g_1056, l_1711)), g_1173.f1)) > g_65)))) | (-3L)))) == l_1506));
        --l_1718;
    }
    for (l_1711 = 4; (l_1711 >= 0); l_1711 -= 1)
    {
        union U3 l_1723 = {0xC574817CL};
        union U4 l_1737[10][2] = {{{65531UL},{65531UL}},{{0x5B6AL},{65531UL}},{{65531UL},{0x5B6AL}},{{65531UL},{65531UL}},{{0x5B6AL},{65531UL}},{{65531UL},{0x5B6AL}},{{65531UL},{65531UL}},{{0x5B6AL},{65531UL}},{{65531UL},{0x5B6AL}},{{65531UL},{65531UL}}};
        unsigned l_1780 = 18446744073709551613UL;
        unsigned l_1787 = 0UL;
        int l_1801 = (-8L);
        int l_1803[4][1][2] = {{{0xAEF3D963L,0x2AA273ECL}},{{0x2AA273ECL,0xAEF3D963L}},{{0x2AA273ECL,0x2AA273ECL}},{{0xAEF3D963L,0x2AA273ECL}}};
        union U1 l_1816 = {1L};
        int l_1818 = 0x35D37CE7L;
        union U2 l_1819 = {5L};
        union U4 l_1830 = {0x1153L};
        union U3 l_1857 = {4294967288UL};
        int i, j, k;
        for (g_1173.f1 = 0; (g_1173.f1 <= 1); g_1173.f1 += 1)
        {
            unsigned char l_1728 = 250UL;
            int l_1739[1][2][4] = {{{0xF438105AL,3L,0xF438105AL,3L},{0xF438105AL,3L,0xF438105AL,3L}}};
            int l_1741 = 0xFEBFBC4DL;
            int i, j, k;
            if (g_318.f1)
            {
                int l_1738[4][1] = {{1L},{0x48A7A480L},{1L},{0x48A7A480L}};
                int i, j;
                l_1739[0][1][3] &= (0x1BB17EC67879E403LL <= (safe_add_func_int32_t_s_s(((g_97 < 0xADL) || ((l_1737[5][0].f0 || 0UL) >= l_1738[2][0])), l_1728)));
            }
            else
            {
                g_54.f0 = (g_41.f3 >= (0L ^ l_1740));
                return g_805;
            }
            for (g_594 = 0; (g_594 <= 5); g_594 += 1)
            {
                char l_1742[8][6] = {{0xF6L,0x5AL,0x5AL,0xF6L,0xA4L,0xF6L},{0xF6L,0xA4L,0xF6L,0x5AL,0x5AL,0xF6L},{1L,1L,0x5AL,(-4L),0x5AL,1L},{0x5AL,0xA4L,(-4L),(-4L),0xA4L,0x5AL},{1L,0x5AL,(-4L),0x5AL,1L,1L},{0xF6L,1L,1L,0x5AL,(-4L),0x5AL},{0x5AL,(-4L),0x5AL,1L,1L,0x5AL},{0xA4L,0xA4L,1L,0xF6L,1L,0xA4L}};
                int l_1749[8];
                int i, j;
                for (i = 0; i < 8; i++)
                    l_1749[i] = (-1L);
                for (l_1740 = 0; (l_1740 <= 5); l_1740 += 1)
                {
                    int l_1748[8][1];
                    int i, j;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1748[i][j] = 0x1265C878L;
                    }
                    l_1741 ^= l_1379[l_1740];
                    g_54.f0 = ((l_1737[5][0].f0 == func_17((g_1487 = l_1742[5][0]), (g_1404[1][0] & (l_1743 = l_1737[5][0].f0)))) | (0xB48AFED825EF5CA7LL < (safe_sub_func_int32_t_s_s((g_857.f1 && (l_1742[5][0] , ((safe_rshift_func_int16_t_s_s(((l_1379[l_1740] | g_719) > 0xD9L), 0)) <= (-1L)))), l_1675))));
                    --g_1750;
                }
            }
        }
        for (l_1582.f0 = 0; (l_1582.f0 <= 5); l_1582.f0 += 1)
        {
            long long l_1753 = 0x47FEAF933C0B9082LL;
            int l_1754 = (-1L);
            int l_1756 = (-4L);
            unsigned char l_1758 = 0x89L;
            union U2 l_1761[6][6][4] = {{{{8L},{0L},{0x0A373CC174548DCDLL},{-1L}},{{0L},{0x43207D1541E02084LL},{0xEFC351E8524B116DLL},{-1L}},{{0x5D95C460CE47B833LL},{0L},{0xA3BB714FD47A1976LL},{1L}},{{0x311A072B77B12A6CLL},{0x53F3D494B77A2BDDLL},{-5L},{0x84B96B2AB6C5D27ELL}},{{0xBD20BD63E147449ALL},{1L},{-3L},{0x1B66845F95B9734ALL}},{{-2L},{0x4EA459891861374FLL},{-1L},{0x1266D126AFC31D2ALL}}},{{{0x5E9349FBB09F9969LL},{1L},{-2L},{5L}},{{0x5D95C460CE47B833LL},{0x0CAE5F8B20B6740CLL},{0L},{-2L}},{{0xFFD3FDA8613829AALL},{8L},{1L},{0x4FA490A201F10DA3LL}},{{0xD089EBB2D9BE22A7LL},{0x1B66845F95B9734ALL},{0x7084725747D204F9LL},{0x917BC2FAD8947C64LL}},{{0x917BC2FAD8947C64LL},{0x4EA459891861374FLL},{0L},{-3L}},{{0L},{0x23E0116BC7455D39LL},{1L},{0L}}},{{{0xA25DE9BD3A379887LL},{-1L},{-6L},{1L}},{{0x8BFDFB5909110812LL},{0xB29C2E4EC7591068LL},{1L},{1L}},{{0L},{-5L},{0x443B79BDCD9D352BLL},{-5L}},{{1L},{0L},{0xBD2D7063F6A20FC3LL},{0x0A373CC174548DCDLL}},{{0x5E9349FBB09F9969LL},{-1L},{-5L},{0L}},{{0xA3BB714FD47A1976LL},{0x082B39B2CAD2034FLL},{-8L},{0x1B66845F95B9734ALL}}},{{{0xA3BB714FD47A1976LL},{-2L},{-5L},{0xA25DE9BD3A379887LL}},{{0x5E9349FBB09F9969LL},{0x1B66845F95B9734ALL},{0xBD2D7063F6A20FC3LL},{0L}},{{-1L},{1L},{0x43207D1541E02084LL},{7L}},{{0xA25DE9BD3A379887LL},{0xFFD3FDA8613829AALL},{0x1266D126AFC31D2ALL},{0x23E0116BC7455D39LL}},{{0x97D98370D4DE93F5LL},{0x53F3D494B77A2BDDLL},{0x4EA459891861374FLL},{-3L}},{{0x753816AD40756C6DLL},{0x443B79BDCD9D352BLL},{-1L},{-1L}}},{{{-6L},{-1L},{0xAB8CA459CEAFFE96LL},{0x7084725747D204F9LL}},{{-3L},{1L},{0xBD20BD63E147449ALL},{0xCF7D6F238A23ED55LL}},{{0xFFD3FDA8613829AALL},{0x84B96B2AB6C5D27ELL},{0x1266D126AFC31D2ALL},{0x5E9349FBB09F9969LL}},{{0x0410D0881D32F085LL},{0x47B3F9055B0948E1LL},{9L},{-7L}},{{0L},{0L},{0x443B79BDCD9D352BLL},{0x0410D0881D32F085LL}},{{0x8BFDFB5909110812LL},{0L},{0x5E9349FBB09F9969LL},{0x7084725747D204F9LL}}},{{{0x443B79BDCD9D352BLL},{0xB29C2E4EC7591068LL},{-1L},{-1L}},{{0L},{0L},{-7L},{1L}},{{0x0CAE5F8B20B6740CLL},{0x53F3D494B77A2BDDLL},{0xB6A4107B0C74F0CALL},{0L}},{{0L},{0x0A373CC174548DCDLL},{-1L},{0xB6A4107B0C74F0CALL}},{{0xA25DE9BD3A379887LL},{0x0A373CC174548DCDLL},{0xCF7D6F238A23ED55LL},{0L}},{{0x0A373CC174548DCDLL},{0x53F3D494B77A2BDDLL},{0xBD20BD63E147449ALL},{1L}}}};
            union U1 l_1764 = {-10L};
            union U3 l_1812 = {0xF675E0EFL};
            char l_1829 = 0x3EL;
            union U4 l_1843 = {0xDAD6L};
            short l_1858 = 0x9C77L;
            int i, j, k;
            l_1758++;
            g_1173.f1 |= (l_1756 &= (g_1757 , l_1737[5][0].f0));
            for (g_470 = 0; (g_470 <= 4); g_470 += 1)
            {
                long long l_1783 = 0xCA73B854B9FF7075LL;
                char l_1815[7][6] = {{(-1L),0xF6L,0x26L,0L,0x26L,0xF6L},{0x26L,(-1L),0x70L,0L,(-7L),0x47L},{(-1L),0x47L,0x70L,0x47L,(-1L),0xF6L},{0xE1L,0x47L,0x26L,0xE0L,(-7L),0xE0L},{0xE1L,(-1L),0xE1L,0x47L,0x26L,0xE0L},{(-7L),(-1L),(-1L),0xE0L,(-1L),(-1L)},{(-1L),0L,0xE1L,0xE0L,0x70L,0xF6L}};
                unsigned l_1817 = 5UL;
                unsigned short l_1824 = 65535UL;
                int l_1828 = 0x0C51C997L;
                int l_1846 = 0x38316C40L;
                int i, j;
                if ((g_54.f0 = (safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((l_1648[(l_1582.f0 + 1)] , l_1425[(l_1711 + 1)]) , (0xD2L > (65526UL != (((safe_add_func_uint16_t_u_u(l_1425[(g_470 + 1)], (safe_rshift_func_int8_t_s_u(((safe_unary_minus_func_int8_t_s((((safe_add_func_int16_t_s_s((((l_1425[(g_470 + 1)] , l_1425[l_1582.f0]) < (safe_lshift_func_uint16_t_u_u(((l_1778[1] , ((l_1378.f1 < l_1425[(g_470 + 1)]) || g_817)) , g_857.f1), 2))) > g_177[2][0][2]), 0xDAE6L)) || g_92) , 0x62L))) || g_817), 6)))) == l_1648[(l_1582.f0 + 1)]) ^ l_1737[5][0].f0)))), l_1425[(l_1711 + 1)])), l_1425[(l_1711 + 1)]))))
                {
                    char l_1779 = 0xCEL;
                    char l_1790 = 0xC9L;
                    unsigned l_1820 = 4294967289UL;
                    int i, j;
                    g_54.f0 = g_41.f2;
                    for (l_1622.f0 = 1; (l_1622.f0 >= 0); l_1622.f0 -= 1)
                    {
                        unsigned l_1784 = 0xAD511564L;
                        --l_1780;
                        l_1784--;
                        ++l_1787;
                    }
                    for (l_1424.f0 = 0; (l_1424.f0 <= 1); l_1424.f0 += 1)
                    {
                        int l_1802[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_1802[i] = 0xC6B61B1EL;
                        l_1803[3][0][1] &= (l_1802[1] = (((l_1780 && l_1790) < (l_1801 &= (safe_sub_func_int64_t_s_s((~5L), ((l_1737[5][0] , (l_1787 <= ((-1L) < (g_54.f4 = (g_1755 ^ (((safe_add_func_uint64_t_u_u((g_138++), ((safe_lshift_func_uint8_t_u_u(((l_1622.f0 ^= (func_25(g_286.f0, l_1378) , l_1783)) == g_93), g_929[0])) , 0x9D33614662F7BD29LL))) ^ g_672[1]) >= 0L)))))) == 5UL))))) || 0x3D30L));
                        l_1804--;
                        if (l_1425[l_1582.f0])
                            continue;
                    }
                    g_1173.f1 = (0x12195C87L > func_2(g_630[5], g_1807, (safe_add_func_int64_t_s_s((l_1425[l_1582.f0] != g_1755), l_1648[(l_1582.f0 + 1)])), l_1820));
                }
                else
                {
                    g_1821--;
                    for (g_803 = 1; (g_803 <= 5); g_803 += 1)
                    {
                        l_1764.f0 ^= ((g_1821 = (g_596 = (l_1761[5][2][2].f3 | 0x77D6L))) , g_96);
                    }
                }
                if (((l_1824 <= 3L) > (0xCA6AB93855D184DFLL >= (g_54.f4 = func_68(g_1404[2][1], ((((l_1758 | (g_1494[0][4][0] != ((l_1554[0] & ((l_1754 > (l_1828 ^= (safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int32_t_s((g_286.f1 = (g_1807 , g_228)))), 7)))) > g_929[0])) != g_177[0][0][2]))) > l_1829) | 0xBD7FF805L) >= g_892))))))
                {
                    char l_1831[6][1];
                    int l_1836 = 9L;
                    int i, j;
                    for (i = 0; i < 6; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1831[i][j] = 1L;
                    }
                    l_1615 |= (l_1830 , l_1623.f1);
                    l_1485 = (g_286.f1 = 0x5BA1B5D4L);
                    if ((l_1836 &= (l_1831[0][0] | (g_672[1] < g_277))))
                    {
                        unsigned l_1842 = 0x06A060E6L;
                        g_426 ^= (((l_1801 = (((safe_rshift_func_int8_t_s_s((g_54.f3 = (l_1622 , ((((safe_sub_func_uint16_t_u_u(l_1754, (l_1831[0][0] != (((l_1841 , g_689[2][3]) , 0x0AD26447FD842D70LL) <= (l_1836 = g_1084[0]))))) >= func_25(l_1842, (g_215 , l_1843))) | g_97) <= l_1842))), g_1408.f3)) && l_1754) >= 0x985BC242313161D2LL)) , 4UL) == l_1425[(g_470 + 1)]);
                        g_1173.f1 = g_426;
                        return l_1819.f0;
                    }
                    else
                    {
                        l_1764.f0 = l_1830.f0;
                        l_1846 = (safe_add_func_int8_t_s_s((l_1828 = l_1831[1][0]), g_763));
                        g_1173.f1 = g_286.f1;
                    }
                }
                else
                {
                    if (g_1404[2][2])
                        break;
                    if (g_277)
                        break;
                }
                return g_915;
            }
            l_1485 = g_1494[0][4][0];
            for (g_761 = 0; (g_761 <= 4); g_761 += 1)
            {
                unsigned short l_1847[7][5][3] = {{{0UL,0xAC8AL,0UL},{0UL,0x75D3L,0xAC8AL},{0x3511L,0xAC8AL,0xAC8AL},{0x71B8L,1UL,0UL},{0x3511L,1UL,0xD169L}},{{0UL,0xAC8AL,0UL},{0UL,0x75D3L,0xAC8AL},{0x3511L,0xAC8AL,0xAC8AL},{0x71B8L,1UL,0UL},{0x3511L,1UL,0xD169L}},{{0UL,0xAC8AL,0UL},{0UL,0x75D3L,0xAC8AL},{0x3511L,0xAC8AL,0xAC8AL},{0x71B8L,1UL,0UL},{0x3511L,1UL,0xD169L}},{{0UL,0xAC8AL,0UL},{0UL,0x75D3L,0xAC8AL},{0x3511L,0xAC8AL,0xAC8AL},{0x71B8L,1UL,0UL},{0x3511L,1UL,0xD169L}},{{0UL,0xAC8AL,0UL},{0UL,0x75D3L,0xAC8AL},{0x3511L,0xAC8AL,0xAC8AL},{0x71B8L,1UL,0UL},{0x3511L,1UL,0xD169L}},{{0UL,0xAC8AL,0UL},{0UL,0x75D3L,0xAC8AL},{0x3511L,0xAC8AL,0UL},{0xA682L,0xAC8AL,0x75D3L},{4UL,0xAC8AL,1UL}},{{0x3511L,0UL,0x75D3L},{0x3511L,0xD169L,0UL},{4UL,0UL,0UL},{0xA682L,0xAC8AL,0x75D3L},{4UL,0xAC8AL,1UL}}};
                int i, j, k;
                g_1408.f0 = l_1847[2][3][0];
                l_1756 = ((safe_lshift_func_int16_t_s_s((g_180[8][0][0] = ((g_286 , l_1723.f0) | (g_54.f0 = 1L))), 15)) & (safe_mod_func_int16_t_s_s((+g_505), (safe_unary_minus_func_int64_t_s((0x52FA64D23EBF870DLL <= (((safe_sub_func_uint32_t_u_u(((0xE3D5ADCDL < ((safe_sub_func_int16_t_s_s(((g_630[5] = l_1857) , (l_1615 = func_17(g_1495, (l_1801 >= 4294967293UL)))), l_1858)) ^ 0x7E9CCE2FE87F92A4LL)) <= l_1847[5][0][1]), l_1816.f3)) >= g_1173.f0) ^ g_428)))))));
                for (l_1703 = 1; (l_1703 <= 5); l_1703 += 1)
                {
                    l_1521 = g_375[3][7];
                    g_426 = g_276;
                }
                g_286.f1 = (safe_lshift_func_uint8_t_u_s(l_1623.f1, 6));
            }
        }
    }
    return g_1173.f0;
}







static int func_2(union U3 p_3, union U3 p_4, char p_5, unsigned short p_6)
{
    int l_1426 = 1L;
    int l_1427 = 1L;
    short l_1428 = (-2L);
    int l_1429 = (-8L);
    int l_1430 = 2L;
    int l_1431 = 1L;
    int l_1432 = 0x248E54FCL;
    int l_1433 = 0x73FF2CF2L;
    unsigned long long l_1438 = 18446744073709551613UL;
    union U2 l_1439[7] = {{0x96959F18FA26C1EALL},{0L},{0L},{0x96959F18FA26C1EALL},{0L},{0L},{0x96959F18FA26C1EALL}};
    union U4 l_1445 = {0xEFF5L};
    union U1 l_1453 = {0xE907CA1CL};
    union U2 l_1462 = {0x3E534D9DCC4C1714LL};
    unsigned l_1463[2][7][7] = {{{1UL,0xBB9F257BL,1UL,1UL,0xBB9F257BL,1UL,1UL},{0xBB9F257BL,0xBB9F257BL,5UL,0xBB9F257BL,0xBB9F257BL,5UL,0xBB9F257BL},{0xBB9F257BL,1UL,1UL,0xBB9F257BL,1UL,1UL,0xBB9F257BL},{1UL,0xBB9F257BL,1UL,1UL,0xBB9F257BL,1UL,1UL},{0xBB9F257BL,0xBB9F257BL,5UL,0xBB9F257BL,0xBB9F257BL,5UL,0xBB9F257BL},{0xBB9F257BL,1UL,1UL,0xBB9F257BL,1UL,1UL,0xBB9F257BL},{1UL,0xBB9F257BL,1UL,1UL,0xBB9F257BL,1UL,1UL}},{{0xBB9F257BL,0xBB9F257BL,5UL,0xBB9F257BL,0xBB9F257BL,5UL,0xBB9F257BL},{0xBB9F257BL,1UL,1UL,0xBB9F257BL,1UL,1UL,0xBB9F257BL},{1UL,0xBB9F257BL,1UL,1UL,1UL,5UL,5UL},{1UL,1UL,0xBB9F257BL,1UL,1UL,0xBB9F257BL,1UL},{1UL,5UL,5UL,1UL,5UL,5UL,1UL},{5UL,1UL,5UL,5UL,1UL,5UL,5UL},{1UL,1UL,0xBB9F257BL,1UL,1UL,0xBB9F257BL,1UL}}};
    int i, j, k;
    l_1427 = func_17((((p_5 > (g_672[1]++)) <= (0xDAF79C99L >= (((safe_lshift_func_uint8_t_u_s(((l_1430 = l_1438) <= (~(((l_1439[3] , g_689[2][3].f3) == (safe_unary_minus_func_int32_t_s(p_5))) < (-9L)))), (1UL | (safe_sub_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(g_54.f0, p_5)), l_1427))))) != 0L) || l_1439[3].f3))) ^ 0x6534L), g_817);
    g_426 |= (func_25((p_4.f0 != l_1438), (l_1439[3].f3 , l_1445)) ^ g_379);
    g_54.f0 = ((~(safe_rshift_func_uint16_t_u_s(((((l_1463[1][2][0] = (safe_lshift_func_int16_t_s_s((0xC2BEL || (((((l_1445 , l_1453) , g_630[5].f0) , ((safe_rshift_func_uint16_t_u_s((func_68((g_1404[0][0] >= (-10L)), p_4.f0) & (-1L)), p_4.f0)) | 1L)) | p_5) , g_915)), 4))) > p_4.f0) <= l_1462.f2) == g_689[2][3].f3), 9))) || p_4.f0);
    return g_793;
}







static union U3 func_7(union U2 p_8, int p_9, union U1 p_10, long long p_11, int p_12)
{
    union U4 l_1414[1] = {{0xFDA7L}};
    int l_1419[10] = {0x58BD8CB5L,0x58BD8CB5L,0x58BD8CB5L,0x58BD8CB5L,0x58BD8CB5L,0x58BD8CB5L,0x58BD8CB5L,0x58BD8CB5L,0x58BD8CB5L,0x58BD8CB5L};
    union U3 l_1423 = {4294967295UL};
    int i;
    for (g_719 = 27; (g_719 == 45); ++g_719)
    {
        unsigned l_1412 = 0x353965C7L;
        int l_1413 = 3L;
        union U1 l_1420 = {1L};
        union U2 l_1421 = {0x1916B6935919DD75LL};
        int l_1422 = 0xBE50544AL;
        p_10.f0 = (l_1422 |= (l_1420.f0 ^= ((((p_10 , (((func_13((safe_unary_minus_func_int16_t_s((+l_1412))), (((l_1413 , p_10.f0) , g_689[1][0]) , g_177[0][0][2]), g_1405) , g_1173.f0) < p_8.f4) ^ 4294967295UL)) == p_8.f2) <= g_1084[4]) , g_470)));
        return g_630[4];
    }
    p_10.f0 = (+l_1419[3]);
    return l_1423;
}







static union U2 func_13(unsigned p_14, int p_15, unsigned short p_16)
{
    union U2 l_1382 = {-1L};
    int l_1383[2][7][1];
    unsigned l_1401 = 8UL;
    int i, j, k;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 1; k++)
                l_1383[i][j][k] = 1L;
        }
    }
    for (g_505 = 0; (g_505 <= 6); g_505 += 1)
    {
        union U2 l_1381 = {0x9A42A2DDB2B8BD29LL};
        int l_1391 = 1L;
        int l_1392 = 0x9638FBFAL;
        int l_1393 = 1L;
        int i;
        for (g_857.f2 = 5; (g_857.f2 >= 0); g_857.f2 -= 1)
        {
            return l_1381;
        }
        g_1173.f1 |= func_29(g_54, g_374[g_505], l_1382, g_374[g_505]);
        for (l_1382.f3 = 6; (l_1382.f3 >= 0); l_1382.f3 -= 1)
        {
            unsigned long long l_1384 = 0x97E2CCF884AF2F63LL;
            union U3 l_1387 = {0xD487AA97L};
            union U4 l_1388[3] = {{0x434BL},{0x434BL},{0x434BL}};
            int l_1394 = 0x222AD956L;
            unsigned l_1395 = 4294967295UL;
            int i;
            l_1384--;
            g_286.f1 = (g_689[3][4] , (+(l_1387 , ((g_54 , 0x5B003254DEFA4436LL) == l_1388[1].f0))));
            --l_1395;
        }
        g_1173.f1 = p_16;
        for (g_857.f1 = 5; (g_857.f1 >= 0); g_857.f1 -= 1)
        {
            union U2 l_1398 = {0xDB427A04CCBFB650LL};
            int l_1402 = 0L;
            int l_1403[7];
            int i, j;
            for (i = 0; i < 7; i++)
                l_1403[i] = 0xB52AE7B8L;
            g_1173.f1 |= (((func_17((g_375[g_857.f1][(g_505 + 1)] >= l_1381.f4), (l_1398 , ((safe_rshift_func_uint16_t_u_s((~9UL), g_138)) >= (l_1393 = ((((l_1383[0][5][0] = 7UL) < ((g_176 & (l_1382.f4 & ((g_41 = l_1398) , g_594))) == p_15)) & g_22) > l_1401))))) , g_1056) | g_817) ^ 0UL);
            --g_1405;
        }
    }
    for (g_1082 = 0; g_1082 < 3; g_1082 += 1)
    {
        for (g_857.f4 = 0; g_857.f4 < 4; g_857.f4 += 1)
        {
            g_1404[g_1082][g_857.f4] = (-8L);
        }
    }
    return l_1382;
}







static unsigned func_17(unsigned p_18, unsigned long long p_19)
{
    char l_40 = 0xFCL;
    short l_55 = (-5L);
    union U4 l_56[2] = {{0xA74DL},{0xA74DL}};
    union U1 l_856 = {6L};
    int l_1010 = (-1L);
    union U2 l_1171 = {0xA608246995673A09LL};
    unsigned char l_1243[4] = {1UL,1UL,1UL,1UL};
    unsigned long long l_1286 = 1UL;
    unsigned l_1298 = 4294967289UL;
    int l_1320 = 0x2FAC93C0L;
    int i;
    g_22 ^= p_19;
    return p_18;
}







static unsigned func_25(char p_26, union U4 p_27)
{
    union U1 l_1016 = {7L};
    union U2 l_1017 = {7L};
    unsigned long long l_1029 = 0x1ED1B4909E07CBA3LL;
    int l_1063 = 0x1270297FL;
    int l_1074 = 0x1DC33718L;
    short l_1109 = (-1L);
    for (g_803 = 0; (g_803 <= 3); g_803 += 1)
    {
        union U4 l_1018 = {1UL};
        int l_1023 = (-3L);
        union U1 l_1045 = {0x76D7B29AL};
        union U2 l_1047 = {0L};
        unsigned long long l_1059 = 0xCA0EC2AE6C0C6D2FLL;
        unsigned l_1111 = 18446744073709551612UL;
        unsigned long long l_1132 = 0xA6FD50AE1628A492LL;
        long long l_1152 = 1L;
    }
    l_1016.f0 = ((safe_lshift_func_uint8_t_u_u(p_26, 0)) && (-1L));
    return g_41.f3;
}







static unsigned func_29(union U1 p_30, unsigned p_31, union U2 p_32, int p_33)
{
    long long l_862 = (-10L);
    int l_873 = 0x5BEEEA9BL;
    int l_914 = 7L;
    int l_921 = 3L;
    int l_928 = 0xF9ABFD4BL;
    union U3 l_1008 = {0x6BE0C8F5L};
    for (g_799 = 20; (g_799 == 17); g_799 = safe_sub_func_int64_t_s_s(g_799, 9))
    {
        char l_870 = 0x7EL;
        for (g_215.f0 = 21; (g_215.f0 <= (-28)); g_215.f0 = safe_sub_func_uint64_t_u_u(g_215.f0, 3))
        {
            unsigned short l_864[2][9][6] = {{{65535UL,0x8710L,65532UL,65535UL,0UL,0x7F78L},{65529UL,65535UL,65532UL,0x1312L,0UL,65532UL},{0x9D00L,0x1312L,0x7F78L,1UL,65529UL,65532UL},{1UL,65529UL,65532UL,65529UL,1UL,0x7F78L},{0x8710L,0UL,65532UL,0UL,0x1312L,65532UL},{0x1312L,0x9D00L,0x7F78L,0UL,65535UL,65532UL},{0UL,65535UL,65532UL,0x8710L,65535UL,0x7F78L},{65535UL,1UL,0xD8BEL,0x8710L,0x8710L,0xD8BEL},{65529UL,65529UL,0x69D1L,0UL,65535UL,0xD8BEL}},{{0UL,65535UL,0xD8BEL,1UL,0x1312L,0x69D1L},{0UL,0UL,0xD8BEL,65535UL,65529UL,0xD8BEL},{0x8710L,65535UL,0x69D1L,0x9D00L,0UL,0xD8BEL},{0x9D00L,0UL,0xD8BEL,0UL,0x9D00L,0x69D1L},{65535UL,0x1312L,0xD8BEL,65529UL,65535UL,0xD8BEL},{65535UL,0x8710L,0x69D1L,0x1312L,1UL,0xD8BEL},{0x1312L,1UL,0xD8BEL,65535UL,0UL,0x69D1L},{1UL,0x9D00L,0xD8BEL,0x8710L,0x8710L,0xD8BEL},{65529UL,65529UL,0x69D1L,0UL,65535UL,0xD8BEL}}};
            int l_865 = 0x6AC8443DL;
            int i, j, k;
            if ((l_862 <= g_857.f2))
            {
                unsigned l_863 = 2UL;
                l_863 = 0x05A6A650L;
                p_30.f0 = (g_817 != l_864[0][7][3]);
            }
            else
            {
                l_865 = p_31;
            }
            l_873 = (((safe_rshift_func_uint16_t_u_s(((g_805 &= 0x3E17L) <= 65526UL), 2)) > 0xD47C7E697CD85C0BLL) , (safe_add_func_uint64_t_u_u(l_870, ((~(l_870 < ((g_798[0][2][0] = p_30.f0) || ((g_672[1]--) , g_857.f2)))) , ((g_41.f2 || g_596) != 0x0294L)))));
        }
    }
    for (g_205 = 0; (g_205 >= 11); g_205++)
    {
        g_426 |= (l_873 = ((safe_sub_func_uint64_t_u_u(18446744073709551606UL, l_873)) | 0x53496015DBC57BA9LL));
    }
    for (p_30.f4 = (-30); (p_30.f4 > 25); p_30.f4 = safe_add_func_int16_t_s_s(p_30.f4, 7))
    {
        unsigned long long l_897 = 0xABFA8DBBB31F5064LL;
        union U4 l_906 = {0x5CEFL};
        int l_910 = 0x4E60942CL;
        short l_920 = 0L;
        int l_927 = 0x20B0BD74L;
        char l_951[3][5] = {{0xD8L,0xD8L,0L,0xD8L,0xD8L},{0L,0xD8L,0L,0L,0xD8L},{0xD8L,0L,0L,0xD8L,0L}};
        unsigned l_966 = 9UL;
        int i, j;
        for (g_176 = 0; (g_176 == 3); g_176 = safe_add_func_int16_t_s_s(g_176, 7))
        {
            union U0 l_888 = {-4L};
            union U4 l_894 = {1UL};
            for (p_32.f0 = 0; (p_32.f0 >= 24); p_32.f0 = safe_add_func_int8_t_s_s(p_32.f0, 2))
            {
                int l_891 = 0x4EF2521CL;
                g_286.f1 = p_30.f4;
                for (g_857.f1 = 1; (g_857.f1 >= 0); g_857.f1 -= 1)
                {
                    unsigned l_893[7];
                    int i, j, k;
                    for (i = 0; i < 7; i++)
                        l_893[i] = 0xCBBFEC5FL;
                    for (g_793 = 0; (g_793 <= 5); g_793 += 1)
                    {
                        int i, j, k;
                        g_426 = g_170[(g_857.f1 + 2)][g_857.f1][g_857.f1];
                    }
                    if (l_862)
                    {
                        char l_898[7][8] = {{0xF5L,0x0DL,0L,0x29L,0x29L,0L,0x0DL,0xF5L},{1L,0x29L,(-4L),(-6L),0x29L,(-6L),(-4L),0x29L},{1L,0x01L,0L,1L,(-1L),(-1L),1L,0L},{(-4L),(-4L),0x0DL,(-6L),1L,0x0DL,1L,(-6L)},{0L,(-6L),0L,(-1L),(-6L),0x01L,0x01L,(-6L)},{(-6L),0x01L,0x01L,(-6L),(-1L),0L,(-6L),0L},{(-6L),1L,0x0DL,1L,(-6L),0x0DL,(-4L),(-4L)}};
                        int i, j;
                        l_873 |= (2UL || (((g_281[0] == (g_138 != (safe_sub_func_uint64_t_u_u(p_30.f4, (p_30.f0 && g_54.f3))))) < g_689[2][3].f1) , (((-1L) ^ l_897) , l_898[6][4])));
                    }
                    else
                    {
                        int l_907 = 0x0F4A1F2AL;
                        g_426 |= (((l_907 = g_22) && p_30.f1) && 0x5E44L);
                        if (p_32.f4)
                            break;
                    }
                }
            }
            if (l_873)
                continue;
        }
        l_906.f1 = (l_873 = l_873);
    }
    return g_304[1];
}







static union U1 func_34(unsigned long long p_35, unsigned long long p_36, unsigned p_37, union U2 p_38, short p_39)
{
    int l_829[6][9][4] = {{{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L},{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L},{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L}},{{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L},{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L},{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L}},{{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L},{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L},{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L}},{{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L},{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L},{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,0x1162A220L},{0x1162A220L,(-1L),(-1L),0x1162A220L}},{{(-1L),0x1162A220L,(-1L),(-1L)},{0x1162A220L,0x1162A220L,1L,(-1L)},{(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L},{(-1L),(-1L),0x1162A220L,(-1L)},{(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L},{(-1L),(-1L),0x1162A220L,(-1L)},{(-1L),1L,1L,(-1L)}},{{1L,(-1L),1L,1L},{(-1L),(-1L),0x1162A220L,(-1L)},{(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L},{(-1L),(-1L),0x1162A220L,(-1L)},{(-1L),1L,1L,(-1L)},{1L,(-1L),1L,1L},{(-1L),(-1L),0x1162A220L,(-1L)},{(-1L),1L,1L,(-1L)}}};
    int l_830 = (-1L);
    char l_854 = (-1L);
    union U1 l_855 = {-1L};
    int i, j, k;
    for (g_318.f0 = 0; (g_318.f0 <= (-21)); --g_318.f0)
    {
        short l_824[9][10][1] = {{{0L},{0x9083L},{0x823AL},{0xCE5DL},{0x0D50L},{0x107DL},{0xFEAFL},{0xFEAFL},{0x107DL},{0x0D50L}},{{0xCE5DL},{0x823AL},{0x9083L},{0L},{6L},{0x509FL},{0x8837L},{0x8A0EL},{0x3565L},{0x4C78L}},{{0x72FEL},{6L},{0L},{6L},{0x72FEL},{0x4C78L},{0x3565L},{0x8A0EL},{0x8837L},{0x509FL}},{{0x4408L},{0x01FCL},{0xBA60L},{0x9083L},{0L},{0x0DFFL},{0xCE5DL},{0x509FL},{0x509FL},{0xCE5DL}},{{0x0DFFL},{0L},{0x9083L},{0xBA60L},{0x01FCL},{0x4408L},{0x823AL},{1L},{0x72FEL},{(-2L)}},{{0L},{0x0D50L},{(-1L)},{0x107DL},{(-1L)},{0x0D50L},{0L},{(-2L)},{0x72FEL},{1L}},{{0x823AL},{0x4408L},{0x01FCL},{0xBA60L},{0x9083L},{0L},{0x0DFFL},{0xCE5DL},{0x509FL},{0x509FL}},{{0xCE5DL},{0x0DFFL},{0L},{0x9083L},{0xBA60L},{0x01FCL},{0x4408L},{0x823AL},{1L},{0x72FEL}},{{(-2L)},{0L},{0x0D50L},{(-1L)},{0x107DL},{(-1L)},{0x0D50L},{0L},{(-2L)},{0x72FEL}}};
        int l_845[10][7] = {{0x4BF87546L,0x81540891L,0x01F5B619L,0x01F5B619L,0x81540891L,0x4BF87546L,0xFA187B74L},{0x547672C2L,0x1896F860L,0x6056DA11L,5L,5L,0x6056DA11L,0x1896F860L},{0x81540891L,0xFA187B74L,0x4BF87546L,0x81540891L,0x01F5B619L,0x01F5B619L,0x81540891L},{0xBBEC89F6L,0x1896F860L,0xBBEC89F6L,0x2D307DB1L,0x1896F860L,3L,3L},{(-10L),0x81540891L,(-5L),0x81540891L,(-10L),(-5L),3L},{5L,8L,0x77F51D26L,3L,0x77F51D26L,8L,3L},{(-5L),0xFA187B74L,(-7L),0x59C6F439L,0xFA187B74L,0x59C6F439L,(-7L)},{3L,3L,0x1896F860L,0x2D307DB1L,0xBBEC89F6L,0x1896F860L,0xBBEC89F6L},{0x01F5B619L,(-7L),(-7L),0x01F5B619L,0x59C6F439L,(-5L),0x01F5B619L},{0x6056DA11L,0xBBEC89F6L,0x77F51D26L,0x77F51D26L,0xBBEC89F6L,0x6056DA11L,8L}};
        int i, j, k;
        g_286.f1 = (g_54.f0 = (g_426 &= ((safe_add_func_int16_t_s_s(l_824[6][0][0], ((p_38.f4 == g_630[5].f0) >= (p_35 | p_35)))) && (((p_36 == ((safe_lshift_func_int8_t_s_s(((safe_mod_func_uint64_t_u_u(l_824[1][0][0], g_805)) < ((l_830 ^= l_829[1][4][1]) != g_215.f1)), l_829[1][4][1])) != l_824[6][0][0])) || g_54.f2) || g_805))));
        g_426 = (g_286.f1 = (((1UL || p_35) && 1L) != (safe_rshift_func_uint16_t_u_s(l_830, 4))));
        for (g_286.f1 = 0; (g_286.f1 == (-22)); g_286.f1 = safe_sub_func_uint16_t_u_u(g_286.f1, 3))
        {
            int l_846 = 0x4BB794DFL;
            int l_847 = 0x3E10233BL;
            l_847 = (((((l_824[2][3][0] , (g_41.f3 &= (safe_mod_func_uint32_t_u_u(l_824[3][9][0], (safe_sub_func_uint64_t_u_u(((l_846 &= (g_215.f0 && (safe_lshift_func_uint16_t_u_u(((0L >= ((-1L) >= (l_845[7][5] |= ((safe_rshift_func_uint16_t_u_s((g_428 ^= g_374[0]), p_39)) > ((safe_rshift_func_uint16_t_u_u(p_38.f1, p_38.f1)) ^ 0x091AL))))) , l_845[0][1]), p_35)))) >= 0x6E97L), g_596)))))) , p_37) , p_38.f3) <= l_847) & g_117);
            l_847 = p_37;
            l_830 = (safe_rshift_func_int16_t_s_u((safe_mod_func_int8_t_s_s(p_38.f0, g_304[0])), 11));
        }
    }
    g_54.f0 ^= (safe_lshift_func_uint16_t_u_s(p_39, 7));
    l_854 = g_428;
    return l_855;
}







static int func_48(union U1 p_49, unsigned char p_50, unsigned long long p_51, short p_52, union U4 p_53)
{
    long long l_71[6];
    int l_427 = 0x675F5DE7L;
    union U2 l_456 = {0x0B9FA8126CA8B886LL};
    int l_464 = 0xAC194C9DL;
    int l_466 = 0xEA3720DDL;
    int l_467 = 0xF0BF72ACL;
    int l_468 = 1L;
    union U4 l_493[10] = {{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL},{65535UL}};
    unsigned short l_506[1];
    int l_525 = 1L;
    long long l_599 = 3L;
    short l_601[1][5][3] = {{{(-1L),0x43C0L,0x43C0L},{(-1L),0x43C0L,0x43C0L},{(-1L),0x43C0L,0x43C0L},{(-1L),0x43C0L,0x43C0L},{(-1L),0x43C0L,0x43C0L}}};
    unsigned l_621 = 0xC1C5B0A9L;
    union U0 l_654 = {0xF2ACL};
    unsigned short l_766 = 65535UL;
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_71[i] = (-6L);
    for (i = 0; i < 1; i++)
        l_506[i] = 9UL;
    for (p_49.f4 = (-27); (p_49.f4 < 18); p_49.f4++)
    {
        union U0 l_74 = {1L};
        union U2 l_77 = {0L};
        int l_425 = (-1L);
        union U4 l_497 = {65535UL};
        int l_658[5];
        unsigned short l_733 = 0x7CF0L;
        unsigned char l_759 = 0x72L;
        int i;
        for (i = 0; i < 5; i++)
            l_658[i] = 0xE8D6D43DL;
        for (g_54.f0 = (-29); (g_54.f0 != (-2)); ++g_54.f0)
        {
            unsigned l_64[3][7][6] = {{{0x890BA5FCL,0x7F9F41ADL,0x7F9F41ADL,0x890BA5FCL,0xD9918C6AL,18446744073709551611UL},{18446744073709551611UL,0x890BA5FCL,0x663C10B4L,0x890BA5FCL,18446744073709551611UL,4UL},{0x890BA5FCL,18446744073709551611UL,4UL,4UL,18446744073709551611UL,0x890BA5FCL},{0x7F9F41ADL,0x890BA5FCL,0xD9918C6AL,18446744073709551611UL,0xD9918C6AL,0x890BA5FCL},{0xD9918C6AL,0x7F9F41ADL,4UL,0x663C10B4L,0x663C10B4L,4UL},{0xD9918C6AL,0xD9918C6AL,0x663C10B4L,18446744073709551611UL,18446744073709551615UL,18446744073709551611UL},{0x890BA5FCL,0x663C10B4L,0x890BA5FCL,18446744073709551611UL,4UL,4UL}},{{18446744073709551615UL,0x890BA5FCL,0x890BA5FCL,18446744073709551615UL,0x663C10B4L,0x7F9F41ADL},{0x7F9F41ADL,18446744073709551615UL,4UL,18446744073709551615UL,0x7F9F41ADL,18446744073709551611UL},{18446744073709551615UL,0x7F9F41ADL,18446744073709551611UL,18446744073709551611UL,0x7F9F41ADL,18446744073709551615UL},{0x890BA5FCL,18446744073709551615UL,0x663C10B4L,0x7F9F41ADL,0x663C10B4L,18446744073709551615UL},{0x663C10B4L,0x890BA5FCL,18446744073709551611UL,4UL,4UL,18446744073709551611UL},{0x663C10B4L,0x663C10B4L,4UL,0x7F9F41ADL,0xD9918C6AL,0x7F9F41ADL},{0x890BA5FCL,0x663C10B4L,0x890BA5FCL,18446744073709551611UL,4UL,4UL}},{{18446744073709551615UL,0x890BA5FCL,0x890BA5FCL,18446744073709551615UL,0x663C10B4L,0x7F9F41ADL},{0x7F9F41ADL,18446744073709551615UL,4UL,18446744073709551615UL,0x7F9F41ADL,18446744073709551611UL},{18446744073709551615UL,0x7F9F41ADL,18446744073709551611UL,18446744073709551611UL,0x7F9F41ADL,18446744073709551615UL},{0x890BA5FCL,18446744073709551615UL,0x663C10B4L,0x7F9F41ADL,0x663C10B4L,18446744073709551615UL},{0x663C10B4L,0x890BA5FCL,18446744073709551611UL,4UL,4UL,18446744073709551611UL},{0x663C10B4L,0x663C10B4L,4UL,0x7F9F41ADL,0xD9918C6AL,0x7F9F41ADL},{0x890BA5FCL,0x663C10B4L,0x890BA5FCL,18446744073709551611UL,4UL,4UL}}};
            int l_446 = 0xD72819B0L;
            union U4 l_487 = {0xE1DFL};
            unsigned long long l_496 = 0x28690C78C4545611LL;
            int i, j, k;
            for (p_53.f1 = (-21); (p_53.f1 >= 16); ++p_53.f1)
            {
                unsigned l_63 = 2UL;
                l_64[1][4][0] = l_63;
                if (g_65)
                    break;
                l_425 = (((safe_add_func_int8_t_s_s((0xCDFFA870C387C7A5LL || ((func_68(p_53.f1, ((l_71[4] = (g_54 , 4294967295UL)) | ((safe_lshift_func_int8_t_s_u(l_63, 7)) | ((((l_74 , p_49.f1) , l_63) == ((safe_rshift_func_uint16_t_u_s((l_77 , l_63), 1)) ^ 0xF115CD63CCF75BAELL)) && p_53.f1)))) && g_54.f2) , g_170[8][0][1])), p_53.f1)) >= (-1L)) >= 0x35670C95L);
            }
            --g_428;
            for (g_428 = 16; (g_428 > 14); g_428 = safe_sub_func_uint64_t_u_u(g_428, 2))
            {
                int l_465 = 0L;
                for (l_77.f0 = 0; (l_77.f0 < (-14)); l_77.f0 = safe_sub_func_int8_t_s_s(l_77.f0, 4))
                {
                    unsigned char l_449 = 248UL;
                    int l_461 = 9L;
                    int l_469[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_469[i] = 0x2AEC99B4L;
                    l_427 = func_68((p_53.f0 | (((((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((func_68((safe_lshift_func_uint8_t_u_u((g_379 &= g_215.f0), 0)), (g_177[0][1][2] = (g_426 >= (((((((!0x0EEFF1D3D2D05298LL) & p_49.f0) && l_77.f3) != (safe_sub_func_int64_t_s_s(g_41.f1, (p_49.f2 , (g_92 >= p_51))))) > 0x00A9L) <= l_77.f3) <= p_51)))) != g_277), 0x57C0BBB8L)), p_49.f2)) | g_41.f1) == 1UL) != p_50) & 0x20L)), l_427);
                    if ((func_68((l_461 |= ((safe_mod_func_int8_t_s_s((l_425 &= (p_49.f4 || (((l_449 |= (safe_unary_minus_func_int8_t_s(((--p_50) , (g_228 = (+p_49.f0)))))) && func_68(p_49.f4, (safe_rshift_func_uint8_t_u_s(g_54.f2, g_375[5][6])))) & 0xEE4CL))), (safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s((l_456 , ((safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((((g_375[4][5] >= 0x9F746088L) , p_51) , 2UL), 15)) , g_277), p_52)) != g_41.f4)), p_49.f4)), 4)))) && l_74.f0)), g_54.f3) || g_286.f0))
                    {
                        int l_462 = 0L;
                        int l_463 = 0x15E6F563L;
                        --g_470;
                    }
                    else
                    {
                        long long l_475[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_475[i] = 0x416812D7E7853708LL;
                        p_53.f1 = (l_77.f4 >= ((safe_add_func_uint64_t_u_u(g_169, l_475[0])) == (g_304[3] = ((safe_lshift_func_uint16_t_u_u(g_177[0][1][1], (safe_mod_func_int32_t_s_s(g_304[2], 4294967289UL)))) && ((g_90 = ((g_41.f2 || 6UL) < (safe_lshift_func_uint8_t_u_u((safe_unary_minus_func_int8_t_s(g_177[0][0][2])), 7)))) >= p_51)))));
                        if (p_53.f1)
                            break;
                        return l_475[0];
                    }
                    p_53.f1 = (-2L);
                }
                l_487.f1 = func_68(g_177[0][0][2], (p_53.f1 & (safe_rshift_func_int8_t_s_u((l_487 , l_77.f0), (safe_mod_func_uint32_t_u_u((safe_mod_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(g_170[8][0][1])), ((((g_286 = l_493[9]) , (l_487 , ((safe_rshift_func_int8_t_s_s((0UL != (g_379 & 1L)), g_215.f1)) ^ l_446))) , g_54) , l_496))), 0xFA2C3473L))))));
                p_53.f1 ^= func_68(g_138, l_77.f0);
            }
        }
        if ((((l_497 , (func_68((safe_lshift_func_uint16_t_u_u(((((safe_unary_minus_func_uint8_t_u(l_456.f4)) | ((((g_177[0][0][2] = (safe_add_func_uint16_t_u_u(((((safe_add_func_int16_t_s_s(((-4L) || (g_41.f3 < func_68(g_169, g_505))), l_77.f2)) , func_68((g_375[4][7] != l_456.f0), l_506[0])) | p_49.f0) , l_77.f2), l_74.f1))) && l_456.f4) , 1UL) == 65531UL)) != g_375[4][7]) , g_276), 6)), g_375[2][6]) >= p_49.f3)) < p_51) <= l_506[0]))
        {
            return g_22;
        }
        else
        {
            unsigned l_507[2];
            int i;
            for (i = 0; i < 2; i++)
                l_507[i] = 0UL;
            g_54.f0 &= g_177[2][0][1];
            --l_507[0];
        }
        if ((0x2570L <= (safe_lshift_func_int8_t_s_s(((safe_rshift_func_int16_t_s_s(((0xC306L ^ (safe_sub_func_uint32_t_u_u(g_117, ((safe_mul_func_uint16_t_u_u((!65533UL), (l_456 , ((l_425 = (((l_74.f0 != l_71[4]) | ((g_215 , ((g_41 , g_269[0][5]) ^ g_92)) != g_180[6][0][0])) != g_379)) <= 1L)))) == 0x459D92BC3175C948LL)))) | 0x89E0974147664F26LL), 15)) == l_456.f0), 7))))
        {
            int l_518 = (-10L);
            int l_556 = 1L;
            int l_671 = 0x743AD983L;
            if (((g_269[0][5] = func_68(func_68(((+((l_518 >= ((g_228 & 0x7D100E82L) == (p_50 &= g_304[2]))) <= (safe_sub_func_uint64_t_u_u((!(safe_add_func_uint32_t_u_u(p_53.f0, (l_518 > p_49.f0)))), (l_497.f0 == (safe_add_func_int8_t_s_s(l_456.f1, l_464))))))) < 1UL), l_525), p_53.f0)) != g_41.f1))
            {
                unsigned l_526 = 4294967293UL;
                unsigned long long l_537 = 18446744073709551615UL;
                int l_555 = (-9L);
                long long l_577 = 0L;
                char l_600 = 1L;
                if (l_526)
                {
                    return l_464;
                }
                else
                {
                    unsigned l_527 = 0xBE8C5343L;
                    short l_534 = 0x6EE9L;
                    if (l_456.f2)
                    {
                        l_527--;
                        g_426 = g_304[2];
                    }
                    else
                    {
                        int l_538[6];
                        int i;
                        for (i = 0; i < 6; i++)
                            l_538[i] = (-1L);
                        l_538[2] |= ((safe_add_func_uint64_t_u_u(((((g_426 = p_49.f3) && p_49.f4) > (safe_rshift_func_uint16_t_u_u(((p_51 ^= (g_41.f2 && l_527)) && (l_534 ^= l_456.f2)), ((g_177[2][1][1] ^= (l_497.f1 = ((l_527 >= (safe_mod_func_int16_t_s_s(((-8L) <= l_526), 1L))) | 7L))) >= g_176)))) , p_49.f0), l_537)) , g_97);
                        l_538[2] = (g_374[3] > 0x9B90L);
                        l_468 = (safe_sub_func_int32_t_s_s(p_49.f2, (+(safe_sub_func_uint32_t_u_u(g_97, (g_269[0][7] < l_527))))));
                    }
                    l_464 = p_53.f0;
                    p_53.f1 = (safe_mod_func_uint32_t_u_u((l_527 < (safe_rshift_func_int16_t_s_u(p_50, (((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u((((safe_mod_func_int16_t_s_s(g_20, ((l_518 = 65532UL) ^ l_526))) > 9L) , (safe_rshift_func_int16_t_s_s(0xB2D1L, (l_71[0] <= (l_555 = (p_49.f1 && l_525)))))), l_556)), 5)) < p_49.f1) & p_49.f0)))), g_117));
                    g_426 = l_468;
                }
                for (g_54.f0 = 0; (g_54.f0 <= 28); ++g_54.f0)
                {
                    for (l_466 = 0; (l_466 == (-15)); l_466--)
                    {
                        unsigned char l_561 = 0x3FL;
                        ++l_561;
                    }
                    return g_20;
                }
                if ((((l_425 && (safe_unary_minus_func_int32_t_s(g_92))) == ((l_466 = (g_375[4][8] = (p_49.f4 >= (l_555 = (safe_sub_func_int8_t_s_s((l_74 , (l_497.f1 = ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(0UL, ((safe_add_func_int16_t_s_s(l_464, 1L)) , (safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((func_68(p_50, func_68(p_51, l_518)) != p_49.f2), p_49.f0)) && p_53.f1), g_375[5][6]))))), g_41.f3)) > l_537))), p_53.f1)))))) & l_577)) && 0x7BCA7401381705B8LL))
                {
                    l_464 = (p_53.f1 = (((safe_add_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((4294967294UL ^ (-8L)))), (~((func_68((safe_mod_func_uint8_t_u_u(4UL, l_518)), (((((g_151 != ((safe_sub_func_int32_t_s_s(((g_41 , 0x15DFL) && (safe_rshift_func_int16_t_s_s(g_245, 5))), p_49.f0)) && 0x7DD3L)) | g_374[3]) == l_526) & g_228) != 0x300E29BBL)) , 0xD96E66771D121B44LL) < g_470)))) & g_92) < p_50));
                    g_426 = ((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(l_456.f0, (l_425 > 0x69L))), 2)) , p_53.f1);
                    l_497.f1 |= l_518;
                }
                else
                {
                    char l_604 = 0x27L;
                    g_54.f0 = 0x3B93F00FL;
                    l_493[9].f1 = (~0x6EFB920FL);
                    for (g_277 = 14; (g_277 >= (-25)); --g_277)
                    {
                        short l_593[1][5];
                        int l_595 = 0x0B08F5D7L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_593[i][j] = (-1L);
                        }
                        ++g_596;
                        if (l_599)
                            break;
                        l_601[0][0][0] = l_600;
                    }
                    for (g_151 = (-23); (g_151 != 48); g_151 = safe_add_func_int64_t_s_s(g_151, 3))
                    {
                        short l_631 = 0L;
                        l_518 = l_604;
                        l_466 = ((safe_add_func_int8_t_s_s((l_74.f1 < (l_604 && (safe_lshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_s(g_93, 0)), 2)))), (((safe_rshift_func_uint16_t_u_s(((safe_mod_func_int8_t_s_s(((p_53 = g_286) , ((0x65ACCD9506A2E526LL > (safe_mod_func_uint32_t_u_u((safe_add_func_int64_t_s_s((safe_lshift_func_uint8_t_u_s((l_604 , (p_49.f0 >= (1UL <= g_92))), p_49.f3)), l_621)), l_604))) && p_49.f1)), g_170[9][3][1])) != 0x17533D08L), g_375[5][6])) , l_600) , p_49.f2))) ^ g_41.f2);
                        p_53.f1 = (((safe_lshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u((p_50 = ((safe_lshift_func_int8_t_s_u(0x94L, 3)) < ((~g_286.f0) == ((g_630[5] , (l_631 ^ l_518)) & l_77.f0)))), 4)) == ((g_90 = p_49.f0) < (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((+(safe_add_func_uint32_t_u_u(g_304[3], (safe_unary_minus_func_uint8_t_u(p_49.f0))))), 0L)) | 0L), l_555)))), p_51)) || 5L) > l_518);
                    }
                }
                p_53.f1 = ((l_556 > p_50) , (safe_sub_func_uint64_t_u_u(p_53.f0, (p_51++))));
            }
            else
            {
                unsigned char l_657 = 0x8DL;
                g_286.f1 = (l_456.f4 != (p_49 , g_276));
                for (l_599 = 0; (l_599 <= 22); ++l_599)
                {
                    unsigned l_649 = 0x1EAFC7EBL;
                    l_427 ^= (safe_lshift_func_uint8_t_u_s((p_53.f0 , ((!func_68((p_50 &= (((-5L) | l_425) , (0xDFB2788FL < func_68(p_49.f2, (g_177[0][0][2] = 0x9006L))))), g_54.f0)) , l_77.f1)), 0));
                    if ((g_286 , g_41.f3))
                    {
                        p_53.f1 = ((g_180[6][0][0] > p_49.f3) >= (g_304[3] = (safe_mod_func_uint64_t_u_u((((l_556 | (l_518 = l_649)) ^ l_456.f1) != p_49.f0), (safe_add_func_uint64_t_u_u((p_53 , (((safe_mod_func_int32_t_s_s((l_654 , (safe_lshift_func_uint16_t_u_s(l_657, l_77.f3))), l_657)) ^ 0x2BC24AE6L) || 0x08L)), l_556))))));
                        p_53.f1 = func_68(p_49.f0, g_428);
                    }
                    else
                    {
                        g_426 = l_658[2];
                        g_426 &= ((l_427 = (g_304[1] = func_68(g_41.f1, g_41.f3))) , ((safe_sub_func_int16_t_s_s((((safe_mod_func_int64_t_s_s((p_52 < ((safe_sub_func_int64_t_s_s((l_556 |= (safe_lshift_func_uint8_t_u_s((g_41.f2 , g_245), g_375[5][6]))), (p_49.f3 || (((g_630[5].f0 &= g_428) != l_456.f4) & g_245)))) > 1L)), p_49.f4)) | 0x4040F7D7L) != 1UL), g_505)) != g_375[2][7]));
                        p_53.f1 = g_54.f3;
                        if (p_53.f0)
                            break;
                    }
                }
            }
            for (g_54.f1 = (-12); (g_54.f1 > 8); g_54.f1 = safe_add_func_uint64_t_u_u(g_54.f1, 8))
            {
                --g_672[1];
            }
            for (g_54.f2 = 0; (g_54.f2 <= 3); g_54.f2 += 1)
            {
                int i, j;
                g_426 |= g_375[(g_54.f2 + 2)][(g_54.f2 + 5)];
            }
        }
        else
        {
            int l_681 = 3L;
            int l_682 = 0x3E21C75AL;
            if ((safe_mod_func_int64_t_s_s(p_49.f3, (func_68((safe_lshift_func_uint16_t_u_s((l_682 |= func_68((++p_50), l_681)), (l_427 &= (((((l_497.f1 = (g_672[1] = g_375[3][3])) <= (safe_lshift_func_int8_t_s_s(l_77.f4, 7))) && (safe_mod_func_int32_t_s_s((l_654 , ((safe_sub_func_uint32_t_u_u(l_497.f1, (g_630[5].f0 = ((g_689[2][3] = l_77) , (l_525 && p_49.f3))))) , g_54.f3)), l_681))) <= g_276) ^ g_22)))), p_49.f3) , (-3L)))))
            {
                unsigned short l_692 = 3UL;
                if ((safe_sub_func_int32_t_s_s(l_74.f0, (((((g_176 , ((((func_68(p_49.f4, p_52) || (g_281[0] , ((l_497.f1 &= g_41.f4) , 0x2F1B417F2FDAFC57LL))) > ((g_176 == 0x15L) & p_52)) && (-2L)) >= p_49.f1)) , l_456.f2) == 0xFDL) > l_77.f0) ^ l_692))))
                {
                    union U3 l_695[4][7][3] = {{{{4294967294UL},{0xAC56B664L},{1UL}},{{0xDB7788D9L},{0x7E693CB3L},{1UL}},{{1UL},{4294967295UL},{1UL}},{{0x7E693CB3L},{1UL},{1UL}},{{1UL},{7UL},{0x0B081C30L}},{{0xDB7788D9L},{1UL},{1UL}},{{0x0B081C30L},{4294967295UL},{4294967294UL}}},{{{0xDB7788D9L},{0x0035F318L},{0xDB7788D9L}},{{1UL},{4294967286UL},{4294967294UL}},{{0x7E693CB3L},{0x7E693CB3L},{1UL}},{{1UL},{4294967286UL},{0x0B081C30L}},{{1UL},{0x0035F318L},{1UL}},{{1UL},{4294967295UL},{1UL}},{{0x7E693CB3L},{1UL},{1UL}}},{{{1UL},{7UL},{0x0B081C30L}},{{0xDB7788D9L},{1UL},{1UL}},{{0x0B081C30L},{4294967295UL},{4294967294UL}},{{0xDB7788D9L},{0x0035F318L},{0xDB7788D9L}},{{1UL},{4294967286UL},{4294967294UL}},{{0x7E693CB3L},{0x7E693CB3L},{1UL}},{{1UL},{4294967286UL},{0x0B081C30L}}},{{{1UL},{0x0035F318L},{1UL}},{{1UL},{4294967295UL},{1UL}},{{0x7E693CB3L},{1UL},{1UL}},{{1UL},{7UL},{0x0B081C30L}},{{0xDB7788D9L},{1UL},{1UL}},{{0x0B081C30L},{4294967295UL},{4294967294UL}},{{0xDB7788D9L},{0x0035F318L},{0xDB7788D9L}}}};
                    unsigned l_708[4][6] = {{4UL,4294967286UL,4UL,0xF0EEF940L,4294967295UL,6UL},{5UL,1UL,0x97D01DB4L,4UL,4UL,0x97D01DB4L},{1UL,1UL,0x058417FBL,4UL,1UL,4294967295UL},{1UL,5UL,7UL,4294967295UL,7UL,5UL}};
                    int i, j, k;
                    p_53.f1 = l_497.f1;
                    if ((safe_sub_func_uint8_t_u_u((g_281[0] != ((l_695[2][0][2] , g_170[8][0][1]) && 1L)), ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint32_t_u_u((l_425 = p_49.f0), (g_630[5].f0 = l_692))), (1UL ^ 0L))) | (safe_sub_func_uint32_t_u_u((g_304[2] |= 0x8D09664CL), 4294967295UL))))))
                    {
                        if (l_695[2][0][2].f0)
                            break;
                    }
                    else
                    {
                        long long l_706 = 0xB320FE013C732B1ALL;
                        p_53.f1 = (((g_54 , func_68(p_53.f1, p_49.f2)) , (safe_mod_func_uint32_t_u_u(0x7F76A697L, (func_68(l_464, l_695[2][0][2].f0) & (((safe_mod_func_uint32_t_u_u(l_692, l_706)) == 0x56E21AB770FFAF3FLL) & p_53.f0))))) && g_41.f0);
                    }
                    for (l_682 = 2; (l_682 <= 6); l_682 += 1)
                    {
                        int l_707 = 0xB4125F09L;
                        int i;
                        l_425 = 0x169D5336L;
                        l_707 = g_374[l_682];
                        p_53.f1 = (65529UL < 1UL);
                        l_467 = (g_54.f0 != (l_708[3][3] &= g_281[5]));
                    }
                }
                else
                {
                    l_425 &= (p_49.f4 < 65529UL);
                }
                for (g_428 = 0; (g_428 <= 3); g_428 += 1)
                {
                    int i;
                    g_54.f0 |= (safe_lshift_func_uint16_t_u_u(g_304[g_428], g_304[g_428]));
                    for (g_93 = 0; (g_93 <= 0); g_93 += 1)
                    {
                        int l_711 = 0x80FD5307L;
                        l_711 |= (((!g_86) != 8UL) || l_77.f1);
                        return l_74.f0;
                    }
                }
            }
            else
            {
                unsigned short l_732[2];
                unsigned long long l_746 = 0UL;
                int i;
                for (i = 0; i < 2; i++)
                    l_732[i] = 0x3CC5L;
                g_426 |= (func_68(((~((((((safe_rshift_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(func_68((safe_sub_func_int32_t_s_s((safe_unary_minus_func_int8_t_s(func_68(g_689[2][3].f4, p_52))), (+((l_682 ^ (2UL && g_41.f2)) | (p_50 | (p_49.f1 && g_276)))))), g_719), l_456.f3)), g_719)) >= g_470) | 0xA9BEFB84L) , g_96) & p_52) == l_456.f4)) > p_51), g_689[2][3].f3) ^ 0x589684FFL);
                for (g_138 = 0; (g_138 > 45); g_138++)
                {
                    unsigned l_734 = 0xC9CEAE14L;
                    int l_741 = 0xE25FE522L;
                    unsigned l_760 = 0x1331C671L;
                    for (l_427 = 0; (l_427 != 28); l_427 = safe_add_func_uint16_t_u_u(l_427, 5))
                    {
                        l_733 ^= (g_170[8][0][1] == (safe_add_func_int8_t_s_s(l_682, (((safe_rshift_func_int8_t_s_s((((safe_add_func_int8_t_s_s((0xEC3DL || g_505), ((0xDFCC79172F5625C6LL ^ (g_374[3] && (safe_rshift_func_uint16_t_u_u((g_689[2][3].f2 && p_50), g_215.f0)))) >= p_50))) , l_732[1]) == g_719), g_169)) , p_49.f0) != l_74.f0))));
                        if (g_318.f0)
                            break;
                        ++l_734;
                    }
                    for (p_53.f1 = 0; (p_53.f1 > (-1)); p_53.f1--)
                    {
                        l_682 |= (safe_rshift_func_int8_t_s_u((l_741 |= (g_375[5][6] = l_658[2])), 0));
                        l_760 |= (p_53.f1 , ((((safe_rshift_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(l_732[1], l_746)) && (safe_add_func_uint8_t_u_u(p_49.f2, (safe_add_func_int8_t_s_s(l_734, (!p_49.f1)))))), 2)) , l_746) == (g_54.f3 > (safe_rshift_func_int8_t_s_s(((safe_sub_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s(l_759, l_77.f0)), 0xEDB9E6B486619CC5LL)) , p_51), g_594)) & 0xBA2F5CC6BCA18768LL), 5)))) ^ p_49.f0));
                        if (g_41.f4)
                            continue;
                    }
                    ++g_763;
                }
            }
        }
    }
    l_766 = l_468;
    for (g_54.f4 = 1; (g_54.f4 <= 6); g_54.f4 += 1)
    {
        union U4 l_771 = {0x40B7L};
        short l_792 = 0xBD1FL;
        int l_808[8] = {0x72D260B0L,0xC001F345L,0x72D260B0L,0xC001F345L,0x72D260B0L,0xC001F345L,0x72D260B0L,0xC001F345L};
        int i;
        for (l_621 = 0; (l_621 <= 1); l_621 += 1)
        {
            int l_776 = 1L;
            int l_787[2];
            unsigned l_794 = 1UL;
            char l_809 = 8L;
            int i;
            for (i = 0; i < 2; i++)
                l_787[i] = 0L;
            if ((((p_49.f3 = 0xFFL) ^ g_672[l_621]) , (1UL > ((safe_lshift_func_int8_t_s_u(p_50, (safe_add_func_uint16_t_u_u((g_286.f0 |= 6UL), (l_771 , l_771.f0))))) < g_318.f1))))
            {
                union U4 l_779 = {0x1775L};
                union U2 l_780 = {1L};
                int l_788 = 0x5D1AEEAEL;
                int l_804 = 0x36745112L;
                p_49.f0 = (g_426 = func_68(g_276, g_92));
                if ((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(0x40L, (l_776 = p_49.f2))) < (safe_sub_func_uint16_t_u_u(0x1A8DL, g_689[2][3].f3))), (l_787[0] |= (((l_779 = p_53) , l_780) , (g_96 ^= (((l_466 = g_97) , ((safe_lshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(4L, (g_505 | l_468))), 3)), p_52)) > g_54.f2)) || l_525)))))))
                {
                    unsigned long long l_789 = 18446744073709551613UL;
                    g_426 |= l_525;
                    l_789--;
                    --l_794;
                }
                else
                {
                    g_799--;
                    if (p_49.f0)
                        continue;
                    p_53.f1 = ((0L > (l_780.f3 >= (((safe_unary_minus_func_uint16_t_u(l_771.f0)) || g_96) | (l_780.f4 == p_52)))) && 6L);
                    for (p_49.f1 = 0; (p_49.f1 <= 6); p_49.f1 += 1)
                    {
                        return g_803;
                    }
                }
                for (l_794 = 0; (l_794 <= 6); l_794 += 1)
                {
                    g_805++;
                    g_810++;
                    p_53.f1 = g_761;
                }
                l_808[6] = g_54.f1;
            }
            else
            {
                int l_815 = 0L;
                int l_816 = 0xAB04EB01L;
                l_816 |= (1L != ((++g_90) >= ((g_205 = (g_672[1] = (g_269[0][5] , l_771.f0))) > l_815)));
                l_787[0] ^= p_49.f3;
                for (g_594 = 0; (g_594 <= 6); g_594 += 1)
                {
                    return l_794;
                }
            }
            g_817++;
            g_426 ^= (l_808[5] != 3L);
        }
    }
    return g_505;
}







static char func_68(unsigned char p_69, unsigned short p_70)
{
    char l_78[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
    int l_79 = (-3L);
    unsigned long long l_87 = 0UL;
    union U3 l_103 = {4294967295UL};
    char l_105 = 0x4DL;
    int l_106 = 0L;
    int l_108 = 1L;
    unsigned char l_120 = 1UL;
    int l_132 = 0x2B5946A6L;
    int l_135 = 0x4EC59EA2L;
    unsigned long long l_150 = 0x8B47936CBA869395LL;
    union U4 l_223 = {0xB55CL};
    short l_226[3];
    char l_275 = 0x5AL;
    unsigned l_321 = 7UL;
    char l_364 = (-1L);
    short l_376 = 3L;
    int i;
    for (i = 0; i < 3; i++)
        l_226[i] = (-1L);
lbl_385:
    for (p_70 = 0; (p_70 <= 4); p_70 += 1)
    {
        unsigned char l_84 = 6UL;
        int l_91 = 0xCC5DB095L;
        unsigned char l_113 = 249UL;
        unsigned l_147[8];
        unsigned char l_190 = 0xC4L;
        union U0 l_211 = {0xE02AL};
        union U4 l_224 = {0xF4C5L};
        unsigned l_225 = 0x99A1C6C0L;
        short l_227 = 6L;
        int i;
        for (i = 0; i < 8; i++)
            l_147[i] = 6UL;
        if (l_78[p_70])
        {
            long long l_102 = (-1L);
            int l_118 = 4L;
            l_79 = (!l_78[p_70]);
            if ((((safe_sub_func_int32_t_s_s((g_41 , (0xE821L & (safe_mod_func_uint16_t_u_u(g_41.f4, g_54.f3)))), l_84)) | ((((((p_70 >= (g_41.f4 <= (((l_79 & 0x46D8DA56L) <= l_78[p_70]) == g_22))) != p_70) >= 0x82C65315L) == p_69) > p_70) & 0xC08F52837B75AE7BLL)) , p_69))
            {
                short l_107 = 1L;
                union U3 l_116 = {9UL};
                int l_119 = 9L;
                for (g_20 = 0; (g_20 <= 4); g_20 += 1)
                {
                    int l_85[10] = {(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L),(-6L)};
                    int i;
                    l_85[5] ^= l_78[g_20];
                    for (g_65 = 0; (g_65 <= 4); g_65 += 1)
                    {
                        --l_87;
                        g_90 = (p_69 , g_41.f2);
                        g_93++;
                        g_96 = g_22;
                    }
                    g_97 = g_41.f1;
                }
                l_108 = (((p_70 <= 0x9319L) ^ (l_106 ^= (safe_rshift_func_uint8_t_u_u(((((+(l_91 < ((safe_rshift_func_int8_t_s_u((4L > (~l_102)), 6)) < g_54.f0))) >= (l_103 , ((safe_unary_minus_func_uint64_t_u((l_105 = (l_79 &= g_90)))) < 0xE1L))) >= (-1L)) | g_86), 7)))) & l_107);
                g_117 = (l_78[2] >= ((l_107 , (safe_add_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s(l_102, (p_69 > ((((p_70 <= 1L) || 7UL) != ((((l_91 = l_113) , ((safe_rshift_func_int16_t_s_u((g_96 = (((l_116 , g_86) & 0x9E9ABE1F69F93285LL) , g_54.f0)), l_79)) , 6UL)) & g_54.f3) , 0xF69DBBC9484ABCDCLL)) || p_69)))) | 1UL), p_70))) ^ p_70));
                l_120--;
            }
            else
            {
                char l_156 = (-1L);
                unsigned l_210 = 1UL;
                for (g_90 = 0; (g_90 <= 4); g_90 += 1)
                {
                    union U4 l_131 = {1UL};
                    for (g_117 = 0; (g_117 <= 4); g_117 += 1)
                    {
                        int i;
                        l_132 = ((safe_add_func_int8_t_s_s(l_78[p_70], (safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_u(g_54.f3, l_78[3])), (safe_rshift_func_int16_t_s_s((1L & (l_131 , ((g_54.f0 | l_78[1]) >= g_41.f1))), 5)))))) , 0x9AB7399AL);
                        l_118 &= (safe_rshift_func_uint16_t_u_s(((l_135 = 0xAA4DE5681571CF3CLL) & (safe_add_func_int32_t_s_s((g_117 && l_131.f0), (l_91 &= ((g_138 &= p_69) || p_70))))), 4));
                    }
                }
                for (l_108 = 0; (l_108 <= 4); l_108 += 1)
                {
                    unsigned char l_160 = 0x50L;
                    int l_175[10] = {0x25155AEEL,0x25155AEEL,0x25155AEEL,0x25155AEEL,0x25155AEEL,0x25155AEEL,0x25155AEEL,0x25155AEEL,0x25155AEEL,0x25155AEEL};
                    int i;
                    if ((safe_rshift_func_uint16_t_u_u(l_102, p_69)))
                    {
                        int l_159 = (-10L);
                        int i;
                        l_159 = (l_160 = ((safe_sub_func_uint16_t_u_u((g_22 && 0x21F7AE5966A8FC2ELL), ((safe_sub_func_uint8_t_u_u((g_90 <= (safe_lshift_func_int16_t_s_s(((l_78[l_108] ^= 0L) && ((l_147[6] <= (safe_mod_func_uint32_t_u_u(l_150, (++g_151)))) , (l_79 && (safe_add_func_uint16_t_u_u(((l_156 < (((safe_sub_func_int64_t_s_s(l_118, 1UL)) < p_70) & p_69)) , 0xEDF4L), g_54.f2))))), g_41.f4))), 0xD1L)) & l_159))) == (-6L)));
                    }
                    else
                    {
                        unsigned char l_163 = 0xC2L;
                        int l_168 = 0x2CE05B3DL;
                        int l_174 = (-9L);
                        long long l_189 = (-5L);
                        l_175[7] = (safe_mod_func_int8_t_s_s(0x90L, (((0x4F5D4AB6L == (g_41.f1 & p_69)) & ((((--l_163) && (g_138 != (g_170[8][0][1] = ((g_169 = (safe_rshift_func_int8_t_s_u((l_168 = l_106), p_70))) > l_163)))) > (safe_mod_func_uint8_t_u_u(((safe_unary_minus_func_uint8_t_u(g_41.f1)) && l_147[6]), p_70))) ^ l_174)) , l_102)));
                        ++g_177[0][0][2];
                        g_180[6][0][0] = 0xF6126C60L;
                        l_190 = (((((p_70 ^ p_70) && ((g_170[8][3][1] == ((safe_sub_func_int8_t_s_s((safe_sub_func_uint8_t_u_u((l_174 = (p_69 = (1L || (safe_lshift_func_uint16_t_u_s((l_106 |= (g_93 || g_41.f3)), g_169))))), g_86)), (safe_sub_func_uint64_t_u_u(l_113, 0x4229225C9EAE24F2LL)))) , l_174)) & l_156)) != 0x8C62504A518F3EDALL) & l_189) < l_78[0]);
                    }
                }
                for (l_118 = (-4); (l_118 > 6); l_118 = safe_add_func_uint64_t_u_u(l_118, 2))
                {
                    int l_201 = 0L;
                    if (g_151)
                    {
                        long long l_204 = 0x43EC4722C89E7ADDLL;
                        g_205 = ((safe_add_func_uint8_t_u_u(g_22, (~(g_151++)))) || ((safe_rshift_func_uint16_t_u_s(((l_156 ^ ((5UL & ((((g_41.f4 && (0x140F996AL <= (l_108 = l_201))) > ((safe_lshift_func_int16_t_s_u(p_70, 5)) > 0xED6AE4A7L)) < (!((l_204 |= g_169) != p_69))) != 4L)) == l_201)) ^ l_78[1]), l_201)) , l_91));
                        l_91 = (p_70 >= (0xA3779968936E2BBFLL == (safe_add_func_int64_t_s_s(g_138, l_210))));
                    }
                    else
                    {
                        l_201 ^= g_176;
                        if (p_70)
                            continue;
                        if (p_69)
                            continue;
                    }
                }
                if (g_169)
                    continue;
            }
        }
        else
        {
            int l_212 = (-5L);
            int l_222[6];
            int i;
            for (i = 0; i < 6; i++)
                l_222[i] = 0x0E86BA87L;
            l_106 |= (g_41.f1 != ((l_212 = (l_211 , l_212)) | ((safe_mod_func_uint32_t_u_u((g_215 , (((safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u(((g_54 , (safe_mod_func_int8_t_s_s((l_91 = p_70), (((l_224 = ((!l_222[1]) , l_223)) , ((l_225 < l_226[0]) <= l_227)) || g_54.f2)))) != p_69), 0x1C22BA50A0FA0944LL)), 0x32B8073F35227E04LL)) > l_103.f0) , 1UL)), g_180[6][0][0])) & 0x53969774L)));
        }
    }
    g_228 ^= p_70;
    for (g_215.f0 = 0; (g_215.f0 <= 1); g_215.f0 += 1)
    {
        char l_242 = (-5L);
        union U0 l_246 = {9L};
        union U3 l_284[3] = {{0UL},{0UL},{0UL}};
        int l_303[6][8] = {{0L,0x4FBF5521L,0xBF9248F3L,0L,0xB50818E7L,0xB50818E7L,0L,0xBF9248F3L},{6L,6L,1L,(-1L),0L,1L,0L,(-1L)},{0xBF9248F3L,(-1L),0xBF9248F3L,0xB50818E7L,(-1L),0x4FBF5521L,0x4FBF5521L,(-1L)},{(-1L),0x4FBF5521L,0x4FBF5521L,(-1L),0xB50818E7L,0xBF9248F3L,(-1L),0xBF9248F3L},{(-1L),0L,1L,0L,(-1L),1L,6L,6L},{0xBF9248F3L,0L,0xB50818E7L,0xB50818E7L,0L,0xBF9248F3L,0x4FBF5521L,0L}};
        unsigned char l_307[7][3] = {{255UL,0xB5L,0xB5L},{0UL,0xC5L,0xC5L},{0xB5L,0xEAL,0xEAL},{247UL,0xC5L,0xC5L},{0xB5L,0xEAL,0xEAL},{247UL,0xC5L,0xC5L},{0xB5L,0xEAL,0xEAL}};
        unsigned l_373 = 0xE6605E10L;
        int l_424 = 0L;
        int i, j;
        for (g_169 = 4; (g_169 >= 1); g_169 -= 1)
        {
            int l_229 = 0x1B7B750CL;
            unsigned char l_271 = 0xDFL;
            int l_306 = 0x4C34E1C5L;
            int l_314 = (-9L);
            union U0 l_317[4][9][4] = {{{{-4L},{1L},{0L},{0x41E3L}},{{0x8CA3L},{-10L},{0L},{0xB812L}},{{-4L},{0x38B1L},{2L},{-1L}},{{0x19BAL},{0x0159L},{0xB812L},{0x7DBFL}},{{0xB812L},{0x7DBFL},{6L},{1L}},{{0x7DBFL},{0x38B1L},{0xEF6FL},{6L}},{{0x41E3L},{0x8CA3L},{0x8CA3L},{0x41E3L}},{{0L},{-1L},{0xD26EL},{0x85D1L}},{{0x7DBFL},{0x41E3L},{5L},{0x66BFL}}},{{{6L},{0x989AL},{0xB812L},{0x66BFL}},{{6L},{0x41E3L},{0x0159L},{0x85D1L}},{{-4L},{-1L},{0xEF7CL},{0x41E3L}},{{-10L},{0x8CA3L},{0L},{6L}},{{0xD26EL},{0x38B1L},{0x0159L},{1L}},{{0x19BAL},{0x7DBFL},{-1L},{0x7DBFL}},{{6L},{0x0159L},{6L},{-1L}},{{0x0159L},{0x38B1L},{0xD26EL},{0xB812L}},{{0x41E3L},{-10L},{-9L},{0x41E3L}}},{{{0x41E3L},{1L},{0xD26EL},{1L}},{{0x0159L},{0x41E3L},{1L},{0x85D1L}},{{-10L},{0x19BAL},{-9L},{1L}},{{-1L},{0x0159L},{5L},{-4L}},{{0L},{0x66BFL},{0x0159L},{0x0159L}},{{2L},{2L},{2L},{-10L}},{{0x41E3L},{0xB812L},{5L},{0x66BFL}},{{1L},{0x38B1L},{0x8CA3L},{5L}},{{-10L},{0x38B1L},{-1L},{0x66BFL}}},{{{0x38B1L},{0xB812L},{0L},{-10L}},{{0x0159L},{2L},{0x989AL},{0x0159L}},{{0x7DBFL},{0x66BFL},{0xEF7CL},{-4L}},{{0x38B1L},{0x0159L},{1L},{1L}},{{0x8CA3L},{0x19BAL},{0x8CA3L},{0x85D1L}},{{-1L},{0x7DBFL},{0xBB1FL},{-4L}},{{0x41E3L},{0x7541L},{0x0159L},{0x7DBFL}},{{0x989AL},{2L},{0x0159L},{0x8CA3L}},{{0x41E3L},{6L},{0xBB1FL},{0x66BFL}}}};
            unsigned long long l_338 = 0xD0E202D36866BDBALL;
            int l_361 = 0x3FC32BA8L;
            int i, j, k;
            l_229 = l_78[g_169];
            if ((((l_78[g_215.f0] = 0x99L) <= (g_22 == (safe_rshift_func_uint8_t_u_u(((0x839FAA199BFBAFD8LL && (safe_sub_func_int64_t_s_s(p_69, ((((safe_rshift_func_uint16_t_u_s(65535UL, 5)) , (l_229 >= (((safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(((safe_add_func_int16_t_s_s((l_242 | (g_245 = ((0xB30807B0L != (safe_mod_func_int16_t_s_s(g_90, p_70))) || 0x239A94666CFFB03ALL))), g_215.f1)) <= l_242), g_228)), (-5L))) < 0xD3E571FBC6ABA3EDLL) , p_69))) ^ (-7L)) || 0L)))) == p_70), l_229)))) <= l_242))
            {
                l_132 = p_70;
            }
            else
            {
                short l_253 = 2L;
                union U2 l_254[9][7][4] = {{{{0xA945547A387112B9LL},{0x29673AEC1CF444A0LL},{-1L},{0xE54941C1BC39E940LL}},{{0xDAD00C468759E3B7LL},{0L},{0xC5DCDB8084EC3894LL},{-2L}},{{0xDAD00C468759E3B7LL},{0xFC4C534E026D30E9LL},{-1L},{0x248A85C4E4F83ABELL}},{{0xA945547A387112B9LL},{-2L},{1L},{-4L}},{{0xFC4C534E026D30E9LL},{0x74196F249C78A0E7LL},{-1L},{3L}},{{0xE0F0FC9D27DC5E76LL},{0xA945547A387112B9LL},{0x20A0211C2E64F090LL},{0xE54941C1BC39E940LL}},{{0xC5DCDB8084EC3894LL},{0x698C18C883BD3BF9LL},{0x248A85C4E4F83ABELL},{0x20A0211C2E64F090LL}}},{{{0xA17F35A23FF211D8LL},{-1L},{8L},{-2L}},{{-3L},{0xE0F0FC9D27DC5E76LL},{0xA17F35A23FF211D8LL},{0x8D64B5F3555BB47FLL}},{{8L},{0xE54941C1BC39E940LL},{0x248A85C4E4F83ABELL},{0xC5DCDB8084EC3894LL}},{{0L},{-4L},{0xC52B6956E6A6F3D0LL},{0xC5DCDB8084EC3894LL}},{{-10L},{0xE54941C1BC39E940LL},{-1L},{0x8D64B5F3555BB47FLL}},{{0x20A0211C2E64F090LL},{0xE0F0FC9D27DC5E76LL},{0xF8629F82947E0455LL},{-2L}},{{0L},{8L},{0xC5DCDB8084EC3894LL},{0xF8629F82947E0455LL}}},{{{0xE0F0FC9D27DC5E76LL},{1L},{0x248A85C4E4F83ABELL},{-8L}},{{-3L},{0L},{0xA945547A387112B9LL},{1L}},{{-4L},{0xE54941C1BC39E940LL},{-4L},{0xC52B6956E6A6F3D0LL}},{{-2L},{0x8D64B5F3555BB47FLL},{0xC52B6956E6A6F3D0LL},{0xFC4C534E026D30E9LL}},{{0L},{0xA945547A387112B9LL},{2L},{0x8D64B5F3555BB47FLL}},{{0x8D64B5F3555BB47FLL},{3L},{2L},{-8L}},{{0L},{-3L},{0xC52B6956E6A6F3D0LL},{2L}}},{{{-2L},{1L},{-4L},{0xE0F0FC9D27DC5E76LL}},{{-4L},{0xE0F0FC9D27DC5E76LL},{0xA945547A387112B9LL},{0x20A0211C2E64F090LL}},{{-3L},{0xA945547A387112B9LL},{0x248A85C4E4F83ABELL},{0xC52B6956E6A6F3D0LL}},{{0xE0F0FC9D27DC5E76LL},{-1L},{0xC5DCDB8084EC3894LL},{0xC5DCDB8084EC3894LL}},{{0L},{0L},{0xF8629F82947E0455LL},{1L}},{{0x20A0211C2E64F090LL},{3L},{-1L},{0xE0F0FC9D27DC5E76LL}},{{-10L},{8L},{0xC52B6956E6A6F3D0LL},{-1L}}},{{{0L},{8L},{0x248A85C4E4F83ABELL},{0xE0F0FC9D27DC5E76LL}},{{8L},{3L},{0xA17F35A23FF211D8LL},{1L}},{{-3L},{0L},{8L},{0xC5DCDB8084EC3894LL}},{{-2L},{8L},{-1L},{1L}},{{0xA9956A48319FEF01LL},{2L},{0xC5DCDB8084EC3894LL},{1L}},{{-4L},{0xDAD00C468759E3B7LL},{0x74196F249C78A0E7LL},{0xDAD00C468759E3B7LL}},{{2L},{0xE0F0FC9D27DC5E76LL},{-4L},{0x74196F249C78A0E7LL}}},{{{-1L},{-2L},{-8L},{0x698C18C883BD3BF9LL}},{{3L},{0x29673AEC1CF444A0LL},{0xA9956A48319FEF01LL},{0x248A85C4E4F83ABELL}},{{3L},{2L},{-8L},{-1L}},{{-1L},{0x248A85C4E4F83ABELL},{-4L},{1L}},{{2L},{0xF8629F82947E0455LL},{0x74196F249C78A0E7LL},{-3L}},{{-4L},{-1L},{0xC5DCDB8084EC3894LL},{0x698C18C883BD3BF9LL}},{{0xA9956A48319FEF01LL},{0xE0F0FC9D27DC5E76LL},{-1L},{0xC5DCDB8084EC3894LL}}},{{{0L},{-8L},{-8L},{0L}},{{-2L},{0xDAD00C468759E3B7LL},{1L},{0x248A85C4E4F83ABELL}},{{-8L},{0xF8629F82947E0455LL},{0L},{-4L}},{{-1L},{-4L},{1L},{-4L}},{{0xA9956A48319FEF01LL},{0xF8629F82947E0455LL},{0L},{0x248A85C4E4F83ABELL}},{{1L},{0xDAD00C468759E3B7LL},{0xC5DCDB8084EC3894LL},{0L}},{{-1L},{-8L},{-4L},{0xC5DCDB8084EC3894LL}}},{{{0xDAD00C468759E3B7LL},{0xE0F0FC9D27DC5E76LL},{0L},{0x698C18C883BD3BF9LL}},{{-2L},{-1L},{2L},{-3L}},{{3L},{0xF8629F82947E0455LL},{3L},{1L}},{{0L},{0x248A85C4E4F83ABELL},{1L},{-1L}},{{-1L},{2L},{0x74196F249C78A0E7LL},{0x248A85C4E4F83ABELL}},{{0x248A85C4E4F83ABELL},{0x29673AEC1CF444A0LL},{0x74196F249C78A0E7LL},{0x698C18C883BD3BF9LL}},{{0x29673AEC1CF444A0LL},{0x8D64B5F3555BB47FLL},{-1L},{0xE54941C1BC39E940LL}}},{{{0x248A85C4E4F83ABELL},{-4L},{1L},{-4L}},{{1L},{-4L},{-1L},{0xC5DCDB8084EC3894LL}},{{0x8D64B5F3555BB47FLL},{-1L},{-1L},{-1L}},{{-4L},{0x74196F249C78A0E7LL},{0xA9956A48319FEF01LL},{0xA9956A48319FEF01LL}},{{0x29673AEC1CF444A0LL},{0x29673AEC1CF444A0LL},{-10L},{0L}},{{0xC5DCDB8084EC3894LL},{-3L},{0xA17F35A23FF211D8LL},{-4L}},{{0xDAD00C468759E3B7LL},{0x20A0211C2E64F090LL},{-1L},{0xA17F35A23FF211D8LL}}}};
                union U4 l_285 = {6UL};
                int l_305 = 7L;
                union U3 l_336 = {0x829D7283L};
                long long l_357[2][4] = {{(-4L),(-4L),(-4L),(-4L)},{(-4L),(-4L),(-4L),(-4L)}};
                int l_377 = 0x9826A327L;
                int l_378 = 0x1D88EF64L;
                int i, j, k;
                if (((0xA1068222L != (g_228 >= (l_246 , ((safe_rshift_func_uint16_t_u_u(l_246.f0, (l_79 = (safe_lshift_func_int8_t_s_u(((safe_add_func_uint32_t_u_u(l_253, ((~4294967295UL) >= l_79))) , (l_254[0][6][3] , ((safe_mod_func_int16_t_s_s((0xD493A947L || p_70), p_69)) != g_54.f2))), 6))))) ^ g_170[8][0][1])))) < p_69))
                {
                    short l_270 = 0xC302L;
                    int l_274 = 0x2FD6FEC2L;
                    l_271 &= ((+(l_229 = (g_215.f1 >= (safe_sub_func_uint16_t_u_u(p_69, (p_70 = (p_70 != (((p_69 & ((l_270 |= ((((g_269[0][5] = (safe_mod_func_uint8_t_u_u((g_97 || (((safe_rshift_func_int16_t_s_u(((g_92 > ((safe_lshift_func_int16_t_s_s(((g_215.f0 != (p_69 && ((p_70 >= g_177[0][0][1]) , l_150))) || g_117), g_22)) || 0L)) && 0xA876L), 3)) , l_78[g_215.f0]) > 4294967295UL)), 255UL))) != 0x1362EE10L) == p_69) <= p_70)) ^ g_22)) , l_78[g_169]) != 65535UL)))))))) , 0x895C612BL);
                    l_274 ^= ((g_54 , ((++g_177[1][1][1]) , g_269[1][7])) > g_215.f0);
                }
                else
                {
                    short l_278 = 0L;
                    int l_279 = (-1L);
                    int l_280[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_280[i] = 1L;
                    g_281[0]++;
                    g_304[3] &= (l_303[3][6] = (0L < (((l_284[2] , ((((l_285 , g_286) , (safe_lshift_func_uint16_t_u_u(p_70, 8))) && (safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u((p_69 | (safe_lshift_func_uint16_t_u_s(((((safe_add_func_int64_t_s_s(g_286.f0, l_229)) > (safe_sub_func_int32_t_s_s(g_22, g_54.f2))) != g_97) <= 0xEAL), l_246.f1))), 2)) <= 0x0128B7AF958F17F7LL), 14)), l_226[2])), l_254[0][6][3].f3))) , (-5L))) != 18446744073709551606UL) == 0xB691785BB1C78F11LL)));
                }
                l_307[3][1]--;
                if ((((safe_rshift_func_int16_t_s_s(0xAC80L, 9)) | (safe_add_func_uint32_t_u_u((((g_215 , l_314) < ((safe_rshift_func_uint8_t_u_s(p_69, 5)) ^ (g_215.f0 >= ((l_317[3][1][3] = (g_318 = l_317[3][1][3])) , ((l_150 | (safe_rshift_func_int8_t_s_s((p_69 > (0x3828E415L <= p_70)), l_223.f0))) , p_70))))) || g_65), l_285.f0))) != p_70))
                {
                    short l_337[1][1][6];
                    int l_339 = 4L;
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 1; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_337[i][j][k] = 0x700EL;
                        }
                    }
                    --l_321;
                    if (l_78[g_215.f0])
                        continue;
                    l_303[5][5] = (safe_lshift_func_uint16_t_u_s(p_70, (safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0x1FL, (g_215 , ((((p_69 = ((((g_304[3] ^= (l_253 , (safe_add_func_int32_t_s_s((0x2B8D94905E8A5A11LL > (safe_lshift_func_int16_t_s_u((l_223.f1 = 0xA2D0L), (p_69 || ((safe_mod_func_uint32_t_u_u(((g_228 &= p_70) || (l_337[0][0][5] = ((((l_336 , 0L) < l_78[g_215.f0]) & g_269[0][5]) < l_226[1]))), l_338)) != p_69))))), 0x60DCFBD6L)))) | l_307[6][2]) || g_176) , 251UL)) >= g_269[0][5]) < p_70) < l_253)))) && p_69), l_339))));
                    for (g_96 = 0; (g_96 <= 0); g_96 += 1)
                    {
                        union U3 l_352 = {0xA64BDD19L};
                        int i, j, k;
                        l_339 &= (g_286.f1 = g_177[g_96][g_96][(g_96 + 2)]);
                        l_108 = (safe_lshift_func_uint8_t_u_u((g_177[(g_96 + 2)][g_215.f0][g_215.f0] <= (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(g_180[(g_215.f0 + 4)][g_96][(g_215.f0 + 2)], (safe_mod_func_int8_t_s_s(((++g_205) < (g_269[0][5] || l_223.f0)), ((g_41.f3 ^ (safe_lshift_func_int8_t_s_u((4294967294UL ^ ((g_170[3][1][0] < (l_352 , l_242)) != g_215.f1)), p_69))) & p_70))))), 9))), p_69));
                    }
                }
                else
                {
                    unsigned short l_360[5] = {0xDB14L,0xDB14L,0xDB14L,0xDB14L,0xDB14L};
                    int i;
                    for (l_305 = 0; (l_305 >= 0); l_305 -= 1)
                    {
                        int i, j, k;
                        l_132 &= (l_303[(g_169 + 1)][(l_305 + 6)] = ((((safe_lshift_func_uint16_t_u_u((g_177[g_215.f0][(l_305 + 1)][l_305] ^ g_180[(g_169 + 1)][l_305][(l_305 + 1)]), 15)) , (l_284[(l_305 + 1)] , (safe_add_func_uint16_t_u_u((g_54.f0 && p_70), l_357[0][1])))) == ((((0xD9L == ((l_360[4] = (!(l_246.f0 ^ (safe_lshift_func_uint8_t_u_s(0xF8L, 0))))) || l_226[1])) ^ p_70) , 0xCEDAFA9926A0A948LL) != 0xE7F163C79D939C06LL)) == g_54.f0));
                        g_374[3] = ((l_361 = (p_70 = (g_286.f0 = p_69))) || (safe_add_func_int32_t_s_s(((p_70 == (l_364 |= g_276)) && p_69), (safe_sub_func_int64_t_s_s((g_245 >= l_284[(l_305 + 1)].f0), (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_s(g_277, l_317[3][1][3].f0)), (((safe_lshift_func_uint16_t_u_s(((l_373 < g_97) , g_177[g_215.f0][(l_305 + 1)][l_305]), l_253)) < g_180[(g_169 + 1)][l_305][(l_305 + 1)]) | (-9L)))))))));
                    }
                    for (l_105 = 0; (l_105 <= 0); l_105 += 1)
                    {
                        int i, j, k;
                        return g_177[(g_215.f0 + 1)][g_215.f0][g_215.f0];
                    }
                }
                g_379++;
            }
            g_286.f1 = (g_170[4][2][1] != l_376);
            for (l_373 = 0; (l_373 <= 0); l_373 += 1)
            {
                unsigned l_382 = 4UL;
                int l_394 = (-2L);
                l_382--;
                if (l_246.f0)
                    goto lbl_385;
                for (l_223.f0 = 0; (l_223.f0 <= 0); l_223.f0 += 1)
                {
                    int i, j, k;
                    for (g_65 = 0; (g_65 >= 0); g_65 -= 1)
                    {
                        union U2 l_395 = {0L};
                        int i, j, k;
                        l_303[1][0] = (safe_add_func_int64_t_s_s(g_180[g_169][l_223.f0][(l_223.f0 + 3)], (g_170[9][2][0] = (safe_rshift_func_uint8_t_u_u(g_180[(l_223.f0 + 1)][l_373][l_373], ((((251UL != ((((g_180[(g_169 + 2)][l_223.f0][(l_223.f0 + 1)] ^ (((g_269[(g_65 + 1)][g_169] == ((g_177[0][0][2] = (g_286 , ((((safe_sub_func_int64_t_s_s(((0x9C8DCF0265EE0E5ALL | g_269[l_223.f0][(l_373 + 2)]) <= (l_394 = (safe_sub_func_uint64_t_u_u((8UL >= g_180[(g_169 + 2)][l_223.f0][(l_223.f0 + 1)]), 0x42D3008151DF120BLL)))), g_269[l_223.f0][(l_373 + 2)])) && 0UL) == p_69) ^ g_276))) >= g_65)) == g_41.f1) <= g_281[0])) , g_281[4]) & g_245) ^ l_382)) , l_395) , p_70) , 255UL))))));
                        g_286.f1 &= (l_223 , g_170[4][1][1]);
                        if (g_22)
                            continue;
                    }
                    if (((safe_sub_func_uint16_t_u_u(g_180[(l_373 + 6)][l_223.f0][(l_373 + 1)], (((l_229 = (safe_add_func_uint16_t_u_u(0x6500L, (g_269[0][5] &= (l_120 != ((((~(safe_lshift_func_int16_t_s_u(p_69, (safe_rshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s(((p_69 , l_321) & (l_79 = (l_394 && (((((((safe_rshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_u(((l_303[2][2] && ((((8L || p_70) >= 1L) != 0xCBE3L) | 0L)) | p_70), 3)) || 0x76L), p_70)) ^ 0x43176BF1DFBC9BA6LL) != p_69) >= l_394) || g_41.f1) && g_318.f0) > 0x2C46D36BF6BB9B51LL)))), g_374[3])), g_41.f2))))) != 1UL) > p_70) == (-9L))))))) , p_70) , l_317[3][1][3].f1))) & g_41.f1))
                    {
                        unsigned short l_410 = 0x244CL;
                        l_410 |= p_69;
                        l_394 = g_117;
                    }
                    else
                    {
                        unsigned long long l_411 = 7UL;
                        g_286.f1 = l_411;
                        if (g_228)
                            continue;
                    }
                    return l_382;
                }
            }
        }
        l_303[3][6] ^= (((((safe_lshift_func_uint16_t_u_s(((l_135 = (safe_add_func_int8_t_s_s((0x706FL <= (g_177[0][0][2] ^= ((p_70 == (safe_mod_func_int64_t_s_s((((((p_70 & p_69) , (l_132 = (safe_sub_func_int64_t_s_s(((((--g_304[2]) , p_70) != 0xC0L) != l_103.f0), 0x3160A0A59EF8E0F0LL)))) >= (safe_add_func_uint64_t_u_u(0UL, p_70))) > 0x0AL) ^ p_69), g_41.f2))) || l_108))), l_376))) >= l_321), p_69)) != 18446744073709551609UL) <= g_54.f2) & g_180[3][0][0]) != 18446744073709551615UL);
        if (l_373)
            break;
        l_424 = (g_170[8][0][1] || (l_303[2][4] = g_269[2][5]));
    }
    return l_275;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_41.f0, "g_41.f0", print_hash_value);
    transparent_crc(g_41.f1, "g_41.f1", print_hash_value);
    transparent_crc(g_41.f2, "g_41.f2", print_hash_value);
    transparent_crc(g_41.f3, "g_41.f3", print_hash_value);
    transparent_crc(g_41.f4, "g_41.f4", print_hash_value);
    transparent_crc(g_54.f2, "g_54.f2", print_hash_value);
    transparent_crc(g_54.f3, "g_54.f3", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_90, "g_90", print_hash_value);
    transparent_crc(g_92, "g_92", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    transparent_crc(g_169, "g_169", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_170[i][j][k], "g_170[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_176, "g_176", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_177[i][j][k], "g_177[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_180[i][j][k], "g_180[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_215.f0, "g_215.f0", print_hash_value);
    transparent_crc(g_215.f1, "g_215.f1", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_245, "g_245", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_269[i][j], "g_269[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_276, "g_276", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_281[i], "g_281[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_286.f0, "g_286.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_304[i], "g_304[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_318.f0, "g_318.f0", print_hash_value);
    transparent_crc(g_318.f1, "g_318.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_374[i], "g_374[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_375[i][j], "g_375[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_379, "g_379", print_hash_value);
    transparent_crc(g_426, "g_426", print_hash_value);
    transparent_crc(g_428, "g_428", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    transparent_crc(g_594, "g_594", print_hash_value);
    transparent_crc(g_596, "g_596", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_630[i].f0, "g_630[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_672[i], "g_672[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_689[i][j].f0, "g_689[i][j].f0", print_hash_value);
            transparent_crc(g_689[i][j].f1, "g_689[i][j].f1", print_hash_value);
            transparent_crc(g_689[i][j].f2, "g_689[i][j].f2", print_hash_value);
            transparent_crc(g_689[i][j].f3, "g_689[i][j].f3", print_hash_value);
            transparent_crc(g_689[i][j].f4, "g_689[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_719, "g_719", print_hash_value);
    transparent_crc(g_761, "g_761", print_hash_value);
    transparent_crc(g_762, "g_762", print_hash_value);
    transparent_crc(g_763, "g_763", print_hash_value);
    transparent_crc(g_793, "g_793", print_hash_value);
    transparent_crc(g_797, "g_797", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_798[i][j][k], "g_798[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_799, "g_799", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_810, "g_810", print_hash_value);
    transparent_crc(g_817, "g_817", print_hash_value);
    transparent_crc(g_857.f1, "g_857.f1", print_hash_value);
    transparent_crc(g_892, "g_892", print_hash_value);
    transparent_crc(g_903, "g_903", print_hash_value);
    transparent_crc(g_915, "g_915", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_929[i], "g_929[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1056, "g_1056", print_hash_value);
    transparent_crc(g_1082, "g_1082", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1084[i], "g_1084[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1173.f0, "g_1173.f0", print_hash_value);
    transparent_crc(g_1173.f1, "g_1173.f1", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_1404[i][j], "g_1404[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1405, "g_1405", print_hash_value);
    transparent_crc(g_1408.f2, "g_1408.f2", print_hash_value);
    transparent_crc(g_1408.f3, "g_1408.f3", print_hash_value);
    transparent_crc(g_1448, "g_1448", print_hash_value);
    transparent_crc(g_1484, "g_1484", print_hash_value);
    transparent_crc(g_1486, "g_1486", print_hash_value);
    transparent_crc(g_1487, "g_1487", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1494[i][j][k], "g_1494[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1495, "g_1495", print_hash_value);
    transparent_crc(g_1559, "g_1559", print_hash_value);
    transparent_crc(g_1592, "g_1592", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1617[i], "g_1617[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1750, "g_1750", print_hash_value);
    transparent_crc(g_1755, "g_1755", print_hash_value);
    transparent_crc(g_1757, "g_1757", print_hash_value);
    transparent_crc(g_1807.f0, "g_1807.f0", print_hash_value);
    transparent_crc(g_1821, "g_1821", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
