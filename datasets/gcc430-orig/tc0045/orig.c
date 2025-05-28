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
   short f0;
   unsigned f1;
   const int f2;
   short f3;
   unsigned char f4;
   int f5;
   const short f6;
   char f7;
   char f8;
   int f9;
};


static int g_2 = 9L;
static int g_6 = 1L;
static int g_8[7][6] = {{0L,0x5E1F6F08L,0x13245616L,0x13245616L,0x5E1F6F08L,0L},{0x1D594D03L,0L,0x13245616L,0L,0x1D594D03L,0x1D594D03L},{6L,0L,0L,6L,0x5E1F6F08L,6L},{6L,0x5E1F6F08L,6L,0L,0L,6L},{0x1D594D03L,0x1D594D03L,0L,0x13245616L,0L,0x1D594D03L},{0L,0x5E1F6F08L,0x13245616L,0x13245616L,0x5E1F6F08L,0L},{0x1D594D03L,0L,0x13245616L,0L,0x1D594D03L,0x1D594D03L}};
static struct S0 g_53 = {0x525AL,0x285B5F73L,0L,-8L,255UL,0x0CB933DFL,0L,1L,0xF6L,0x987F9BD8L};
static int *g_71 = &g_6;
static int **g_70 = &g_71;
static struct S0 g_195 = {0L,0xC6BE4137L,0x6EA03D3EL,1L,8UL,0xE29DA980L,0x741CL,-1L,0xBBL,0xFAC3A7E1L};
static struct S0 g_207[1][3][2] = {{{{-2L,0xFD6B91F2L,-9L,0xF041L,1UL,0L,0xFAADL,1L,0x8FL,0x28CAA444L},{-2L,0xFD6B91F2L,-9L,0xF041L,1UL,0L,0xFAADL,1L,0x8FL,0x28CAA444L}},{{-2L,0xFD6B91F2L,-9L,0xF041L,1UL,0L,0xFAADL,1L,0x8FL,0x28CAA444L},{-2L,0xFD6B91F2L,-9L,0xF041L,1UL,0L,0xFAADL,1L,0x8FL,0x28CAA444L}},{{-2L,0xFD6B91F2L,-9L,0xF041L,1UL,0L,0xFAADL,1L,0x8FL,0x28CAA444L},{-2L,0xFD6B91F2L,-9L,0xF041L,1UL,0L,0xFAADL,1L,0x8FL,0x28CAA444L}}}};
static struct S0 *g_211 = (void*)0;
static struct S0 ** const g_210 = &g_211;
static struct S0 g_277 = {1L,18446744073709551609UL,0x172D43E7L,-9L,0UL,0x18167219L,0xDC2EL,0x3AL,0x4BL,-1L};
static struct S0 * const *g_298 = &g_211;
static int *g_325 = (void*)0;
static struct S0 g_333 = {-1L,0x3C2D2860L,0xEA343ECAL,0x0C95L,0x17L,0x55DD9337L,0L,-1L,5L,-2L};
static int g_345[3] = {0xAF30037DL,0xAF30037DL,0xAF30037DL};
static int *g_344 = &g_345[0];
static int *g_356 = (void*)0;



static char func_1(void);
static int * func_10(int * p_11, int * p_12, int * p_13);
static int * func_14(unsigned p_15, short p_16, int * p_17, int * p_18);
static unsigned char func_19(int * const p_20, int * p_21, int * p_22, int * p_23);
static int * func_24(char p_25, int * p_26, int * p_27, unsigned char p_28);
static unsigned func_29(int * p_30, int * p_31, struct S0 p_32, int * p_33);
static int * func_34(const int * p_35);
static int * func_36(int * p_37, int * p_38, unsigned p_39);
static int * func_40(const int * p_41);
static int * func_42(int p_43, int * p_44, struct S0 p_45, const int * p_46, int * p_47);
static char func_1(void)
{
    int *l_9 = &g_2;
    struct S0 l_163 = {1L,18446744073709551615UL,-4L,0x007FL,2UL,0x69FFD4D6L,0x5E02L,2L,0x13L,0L};
    unsigned l_343 = 0UL;
    int **l_422 = &g_325;
    for (g_2 = (-20); (g_2 > (-27)); g_2 = safe_sub_func_int32_t_s_s(g_2, 5))
    {
        int l_5[8][3] = {{0x2759951EL,(-8L),0x2759951EL},{0x2759951EL,(-8L),0x2759951EL},{0x2759951EL,(-8L),0x2759951EL},{0x2759951EL,(-8L),0x2759951EL},{0x2759951EL,(-8L),0x2759951EL},{0x2759951EL,(-8L),0x2759951EL},{0x2759951EL,(-8L),0x2759951EL},{0x2759951EL,(-8L),0x2759951EL}};
        int i, j;
        for (g_6 = 2; (g_6 >= 0); g_6 -= 1)
        {
            int *l_7 = &g_8[5][1];
            int i, j;
            (*l_7) = l_5[(g_6 + 1)][g_6];
        }
    }
    (*l_422) = ((&g_8[1][0] == l_9) , func_10(func_14((0xA9L >= (((func_19(&g_8[5][1], func_24(g_2, (func_29(((*l_9) , (void*)0), func_34(&g_6), l_163, &g_2) , l_9), &g_2, g_207[0][2][0].f8), g_325, g_325) <= g_333.f2) >= 0xA3L) || g_2)), l_343, g_344, l_9), &g_345[1], l_9));

    ;

    ;
    ;
    ;
    return (**l_422);
}







static int * func_10(int * p_11, int * p_12, int * p_13)
{
    const int * const l_353 = &g_8[3][1];
    const int *l_355 = (void*)0;
    const int **l_354 = &l_355;
    struct S0 l_357 = {-9L,18446744073709551615UL,-1L,0x441DL,0x3CL,-10L,-1L,0xDDL,0L,2L};
    int *l_358[5];
    const unsigned short l_366 = 0xB7AAL;
    const struct S0 *l_381 = &g_277;
    const struct S0 **l_380 = &l_381;
    const struct S0 ***l_379 = &l_380;
    unsigned char l_419 = 246UL;
    int i;
    for (i = 0; i < 5; i++)
        l_358[i] = &g_6;
    for (g_333.f7 = 27; (g_333.f7 != 17); g_333.f7--)
    {
        unsigned l_349 = 0xEC08D5C7L;
        const struct S0 *l_352 = (void*)0;
        const struct S0 **l_351 = &l_352;
        const struct S0 ** const *l_350 = &l_351;
        (*p_11) = (~((l_349 , &g_210) != l_350));
    }
    (*l_354) = l_353;

    ;
    if ((((*l_353) <= 0x57L) , ((g_207[0][2][0].f9 || g_333.f8) == 0x80EBL)))
    {
        g_356 = p_12;

        ;
        for (g_195.f1 = 0; (g_195.f1 <= 4); g_195.f1 += 1)
        {
            int l_359 = 0xF12315FBL;
            int i;
            l_358[g_195.f1] = ((l_359 ^ l_359) , l_358[g_195.f1]);
            (*p_12) = (*p_11);
        }
        (*l_354) = p_13;

        ;
    }
    else
    {
        int l_362 = 0x97E67303L;
        struct S0 l_365 = {6L,18446744073709551608UL,0x4D2D64CAL,0xB751L,0UL,0x8768DE7AL,0xE879L,0x98L,0x9AL,1L};
        const int **l_382 = &l_355;
        struct S0 l_392[5][8] = {{{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL}},{{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL}},{{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL}},{{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL}},{{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL},{0x4D92L,0x8F8F0049L,0xF0234207L,0x6117L,0x80L,-1L,1L,0xC7L,0xADL,0x22B2B47FL}}};
        struct S0 **l_408 = &g_211;
        int i, j;
        (*p_13) = (0xD8L | (safe_mod_func_int16_t_s_s(l_362, (((safe_lshift_func_uint16_t_u_u(l_366, 5)) == g_195.f8) , l_365.f8))));
        for (g_277.f4 = 0; (g_277.f4 == 24); g_277.f4 = safe_add_func_uint16_t_u_u(g_277.f4, 4))
        {
            unsigned char l_369 = 0x23L;
            int l_389 = 0x9ED79E98L;
            unsigned short l_393 = 0x6B57L;
            int ***l_420 = &g_70;
            l_369 = (**l_354);
            if ((safe_sub_func_int32_t_s_s((*g_344), ((safe_rshift_func_int8_t_s_u(((((&p_11 == &g_71) >= ((*p_13) == (**l_354))) , (safe_lshift_func_uint8_t_u_s(l_365.f1, (*l_355)))) < g_207[0][2][0].f6), g_277.f2)) <= 255UL))))
            {
                unsigned l_376 = 0UL;
                struct S0 **l_378 = &g_211;
                struct S0 ***l_377 = &l_378;
                if ((((l_365 , l_376) , (((((*l_353) , l_376) , l_377) != l_379) , (((((3L == ((l_365.f8 , (void*)0) != l_382)) , l_376) <= g_277.f9) ^ l_376) , (-3L)))) && 0UL))
                {
                    int * const l_394 = &g_345[1];
                    unsigned l_396[6] = {2UL,2UL,0x6075BA36L,2UL,2UL,0x6075BA36L};
                    int i;
                    (*p_12) = (safe_mod_func_uint8_t_u_u((*l_355), (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(((l_389 < g_207[0][2][0].f6) != (safe_rshift_func_int16_t_s_s((l_392[4][7] , g_333.f6), 12))), l_389)), 15))));
                    (*p_13) = l_393;
                    (*p_11) = ((0L | g_195.f7) , func_19(l_394, (((safe_unary_minus_func_uint32_t_u(l_393)) != (((**l_382) < l_393) != (l_396[2] ^ (**l_382)))) , &l_362), p_12, &g_8[5][1]));
                }
                else
                {
                    unsigned short l_406 = 0x0EE6L;
                    unsigned l_407 = 7UL;
                    int *l_411 = &g_345[0];
                    (*p_11) = ((((safe_mod_func_uint16_t_u_u(g_333.f1, (**l_382))) >= l_376) && (((((*l_378) != (l_393 , (*g_210))) , &g_211) != ((safe_sub_func_uint32_t_u_u(0x713CD0B5L, (safe_add_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u(((((safe_sub_func_int32_t_s_s((&l_354 != &g_70), (*p_12))) , l_406) && (**l_382)) , g_207[0][2][0].f0))) >= 0x69600C2DL), l_407)))) , l_408)) , (*p_12))) > l_407);
                    for (g_277.f9 = 28; (g_277.f9 < 9); g_277.f9 = safe_sub_func_int32_t_s_s(g_277.f9, 1))
                    {
                        (*p_13) = ((void*)0 == &g_298);
                    }
                    for (g_277.f7 = 0; (g_277.f7 <= 4); g_277.f7 += 1)
                    {
                        int i;
                        l_358[g_277.f7] = l_358[g_277.f7];
                        (*p_12) = (g_333.f8 && (-6L));
                        (*l_354) = l_411;

                        ;
                        if ((*p_11))
                            break;
                    }
                }
                (*p_13) = l_369;
            }
            else
            {
                int l_414 = 0x24D8DD0EL;
                int l_415[2][3][10];
                int i, j, k;
                for (i = 0; i < 2; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 10; k++)
                            l_415[i][j][k] = 0x993456D0L;
                    }
                }
                l_415[1][0][8] = ((***l_379) , (safe_add_func_int32_t_s_s(((l_414 >= (func_19(func_42(l_389, l_358[0], l_392[4][5], p_12, p_12), l_358[3], p_12, p_12) < g_53.f7)) <= (*g_344)), 0xC5D950EFL)));
                if ((((safe_unary_minus_func_int16_t_s(g_333.f1)) != ((**l_382) > 0xF346340EL)) , (**l_382)))
                {
                    return p_12;



                }
                else
                {
                    (*g_344) = ((((-10L) <= (g_53.f0 == (0x73B4L == func_19(&l_362, &l_389, &l_362, p_11)))) == l_415[1][0][5]) & 0xEA00L);


                    if (l_419)
                        break;

                    (*p_13) = (*p_12);
                }


            }


            (*p_12) = ((**l_382) , ((void*)0 != l_420));
            for (g_195.f7 = 0; (g_195.f7 <= 4); g_195.f7 += 1)
            {
                int i;
                for (g_53.f7 = 2; (g_53.f7 >= 0); g_53.f7 -= 1)
                {
                    struct S0 ***l_421 = &l_408;
                    (*l_421) = &g_211;
                    for (l_365.f3 = 0; (l_365.f3 <= 2); l_365.f3 += 1)
                    {
                        int i;
                        return l_358[g_195.f7];



                    }
                }
                return l_358[g_195.f7];



            }
        }

        ;

        ;
        (*p_11) = (**l_382);
        return &g_345[0];



    }

    ;
    ;
    return p_11;


}







static int * func_14(unsigned p_15, short p_16, int * p_17, int * p_18)
{
    int *l_346 = &g_8[5][1];
    return l_346;


}







static unsigned char func_19(int * const p_20, int * p_21, int * p_22, int * p_23)
{
    int l_328 = (-10L);
    struct S0 *l_331 = &g_207[0][2][0];
    int *l_339 = &g_8[5][1];
    int **l_342 = &g_325;
    for (g_6 = (-5); (g_6 != (-21)); --g_6)
    {
        struct S0 *l_332 = &g_333;
        int l_338 = 1L;
        if (l_328)
            break;
        for (g_2 = 0; (g_2 > 23); g_2 = safe_add_func_uint16_t_u_u(g_2, 4))
        {
            char l_337 = 1L;
            for (g_53.f4 = 0; (g_53.f4 <= 5); g_53.f4 += 1)
            {
                int i, j;
                return g_8[(g_53.f4 + 1)][g_53.f4];
            }
            l_332 = l_331;

            ;
            for (g_195.f1 = 0; (g_195.f1 < 4); g_195.f1 = safe_add_func_int8_t_s_s(g_195.f1, 8))
            {
                for (g_333.f9 = 5; (g_333.f9 >= 0); g_333.f9 -= 1)
                {
                    int i, j;
                    for (g_277.f9 = 1; (g_277.f9 <= 5); g_277.f9 += 1)
                    {
                        int **l_336 = &g_71;
                        int i, j;
                        (*l_336) = (void*)0;

                        ;
                        g_8[g_333.f9][g_277.f9] = 1L;
                        l_337 = g_8[g_333.f9][g_333.f9];
                    }
                    (*g_210) = l_332;

                    ;
                    g_8[g_333.f9][g_333.f9] = (*p_20);
                }
                if (l_337)
                    break;
            }
            if (l_338)
                break;
        }

        ;
    }
    g_71 = p_23;

    ;
    (*l_342) = p_21;


    return (**l_342);
}







static int * func_24(char p_25, int * p_26, int * p_27, unsigned char p_28)
{
    int l_235 = 0xCE06D041L;
    const struct S0 *l_255 = &g_195;
    const struct S0 * const *l_254 = &l_255;
    const struct S0 * const **l_253 = &l_254;
    unsigned char l_271 = 0xEDL;
    int *l_309 = &g_8[5][1];
    for (g_6 = (-15); (g_6 == (-6)); g_6 = safe_add_func_int32_t_s_s(g_6, 3))
    {
        const char l_229[1] = {0xDEL};
        unsigned l_248 = 4UL;
        unsigned char l_272 = 0xB6L;
        int *l_273 = &g_6;
        struct S0 * const *l_296 = &g_211;
        int **l_311 = (void*)0;
        int **l_312 = (void*)0;
        int **l_313 = &l_273;
        int i;
        if (((safe_mod_func_int8_t_s_s((safe_add_func_uint32_t_u_u(l_229[0], (safe_sub_func_uint32_t_u_u((g_53.f0 , (g_53.f4 <= ((safe_mod_func_uint16_t_u_u(((safe_unary_minus_func_int8_t_s(3L)) >= (7L | ((l_235 > 0x2665165BL) ^ (safe_add_func_uint32_t_u_u(((((safe_lshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u((p_25 == (safe_rshift_func_int16_t_s_s((safe_mod_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u(g_195.f8, g_207[0][2][0].f0)), l_235)), 2))), l_235)) == g_207[0][2][0].f9), g_8[4][2])) , l_248) >= l_235) || p_28), 0x84C7EC10L))))), 0x8780L)) < g_207[0][2][0].f7))), (*p_26))))), l_229[0])) ^ l_235))
        {
            unsigned short l_256 = 65529UL;
            int *l_257 = (void*)0;
            struct S0 *l_276[7][2][2] = {{{(void*)0,&g_195},{&g_277,&g_277}},{{&g_277,&g_195},{(void*)0,(void*)0}},{{&g_195,(void*)0},{(void*)0,&g_195}},{{&g_277,&g_277},{&g_277,&g_195}},{{(void*)0,(void*)0},{&g_195,&g_195}},{{(void*)0,(void*)0},{(void*)0,(void*)0}},{{(void*)0,(void*)0},{(void*)0,&g_195}}};
            int i, j, k;
            for (g_195.f0 = 16; (g_195.f0 == (-18)); g_195.f0--)
            {
                struct S0 l_258 = {-1L,1UL,0x1B363DE1L,-9L,0x91L,1L,0x76C7L,1L,-7L,0x3D772521L};
                unsigned char l_265 = 0x16L;
                int l_266 = (-1L);
                if ((g_195.f4 || (l_253 == (void*)0)))
                {
                    int **l_274 = &g_71;
                    p_26 = p_27;
                    (*p_26) = (safe_sub_func_int16_t_s_s(((((&g_210 != &g_210) >= g_53.f6) & (l_258.f3 , (g_6 != (l_229[0] , 0x800EL)))) | ((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint16_t_u_u(((+0x840EL) , p_28), (-1L))) , l_258.f5) > 0xA647L), 6)) <= l_235)), l_265));
                    (*l_274) = ((((((l_266 < (safe_mod_func_uint16_t_u_u(p_28, (safe_rshift_func_int8_t_s_s(l_271, p_25))))) , 7L) <= g_195.f5) & (((l_229[0] != (g_207[0][2][0].f2 , l_272)) ^ (*p_27)) > 1L)) || l_258.f2) , l_273);

                    ;
                }
                else
                {
                    int *l_275 = &g_6;
                    return l_275;


                }

                ;
                l_276[3][1][1] = &l_258;


                (*p_26) = (*g_71);
            }


            if (g_207[0][2][0].f9)
            {
                (*g_210) = (*g_210);
            }
            else
            {
                const struct S0 **l_278 = &l_255;
                (*l_278) = (*l_254);
                for (g_53.f9 = (-12); (g_53.f9 != (-7)); ++g_53.f9)
                {
                    short l_283 = 0x0472L;
                    if ((safe_mod_func_int8_t_s_s((g_277.f6 != ((*g_210) == (l_283 , (*l_278)))), g_277.f0)))
                    {
                        return p_26;


                    }
                    else
                    {
                        unsigned short l_293 = 1UL;
                        (*p_26) = (*p_26);
                        p_27 = &l_235;

                        ;
                        (*p_27) = ((p_25 < (((safe_unary_minus_func_uint16_t_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(((safe_rshift_func_uint8_t_u_s((p_25 <= ((g_207[0][2][0].f1 && ((safe_rshift_func_uint8_t_u_u(l_293, 2)) >= ((((-8L) ^ 3L) ^ (safe_sub_func_int8_t_s_s(l_293, (!(p_28 != 1UL))))) | (*p_26)))) || g_195.f9)), p_25)) < (-9L)), 10)), g_207[0][2][0].f8)))) < p_28) != 0xB2D6L)) , 0xC6CB840CL);
                        if ((*p_27))
                            break;
                    }

                    ;
                }

                ;
                (*p_27) = (p_25 , (*p_27));
            }

            ;
        }
        else
        {
            struct S0 * const **l_297[7][8][1] = {{{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296}},{{&l_296},{&l_296},{(void*)0},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296}},{{&l_296},{(void*)0},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296}},{{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{(void*)0}},{{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{(void*)0},{&l_296}},{{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296},{&l_296}},{{&l_296},{&l_296},{&l_296},{&l_296},{(void*)0},{&l_296},{&l_296},{&l_296}}};
            int i, j, k;
            g_298 = l_296;
            return l_273;


        }

        ;
        if (((((*l_253) == (((safe_mod_func_int32_t_s_s((*p_26), ((((((l_235 > (safe_sub_func_int8_t_s_s((p_28 > (safe_lshift_func_int8_t_s_s((p_28 & g_277.f7), 2))), g_207[0][2][0].f1))) || g_277.f3) | (safe_rshift_func_uint16_t_u_u((((safe_add_func_uint8_t_u_u(g_277.f4, g_195.f8)) , &l_254) != &g_210), g_53.f4))) | g_277.f6) | 1UL) && 0x1E29L))) , (*l_273)) , (*l_253))) , g_53.f6) > g_195.f6))
        {
            (*p_27) = (p_25 , (~l_271));
            (*p_26) = (*l_273);
            for (g_277.f7 = 0; g_277.f7 < 7; g_277.f7 += 1)
            {
                for (g_195.f7 = 0; g_195.f7 < 6; g_195.f7 += 1)
                {
                    g_8[g_277.f7][g_195.f7] = 0xD17607EDL;
                }
            }
        }
        else
        {
            int **l_310 = &l_309;
            (*l_310) = l_309;
        }
        (*l_313) = &g_2;

        ;
        return p_26;


    }
    for (g_53.f7 = 0; (g_53.f7 <= (-2)); g_53.f7 = safe_sub_func_int32_t_s_s(g_53.f7, 1))
    {
        for (g_53.f8 = (-1); (g_53.f8 != (-18)); g_53.f8 = safe_sub_func_uint16_t_u_u(g_53.f8, 7))
        {
            unsigned short l_320 = 0x9A17L;
            for (g_53.f4 = 0; (g_53.f4 > 18); g_53.f4 = safe_add_func_uint16_t_u_u(g_53.f4, 1))
            {
                l_320 = (*p_27);
            }
        }
        for (g_195.f5 = 0; (g_195.f5 <= 5); g_195.f5 += 1)
        {
            int i, j;
            (*l_309) = (safe_add_func_uint32_t_u_u(g_8[g_195.f5][g_195.f5], (safe_lshift_func_int8_t_s_s((p_28 , ((+p_28) | (g_53.f1 || (*p_27)))), 6))));
        }
        if ((*l_309))
            continue;
    }
    (*p_26) = 0xE89D2B46L;
    return p_27;


}







static unsigned func_29(int * p_30, int * p_31, struct S0 p_32, int * p_33)
{
    short l_174 = 1L;
    int l_179 = 0x9E0C7EA7L;
    int **l_180 = &g_71;
    int *l_181 = &g_8[0][0];
    struct S0 **l_212 = &g_211;
    struct S0 l_215 = {0xF3DBL,0xFB7C8001L,0x7DB5B27BL,0x6E87L,0UL,-1L,0L,0xA0L,0x75L,0xC4D77185L};
    unsigned char l_221 = 2UL;
    (*l_181) = ((((safe_add_func_int16_t_s_s((1L < 8UL), p_32.f0)) > ((safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(p_32.f7, (~((safe_add_func_uint8_t_u_u(g_53.f2, g_53.f1)) , (l_174 != (p_32.f6 < (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(l_174, 8)), l_179)))))))), l_179)) >= 0xAAL)) , l_180) == &p_31);
    if ((*p_33))
    {
        int l_185 = 0x9746C3F0L;
        char l_194 = 0xD4L;
        int ***l_196 = &g_70;
        unsigned l_200 = 1UL;
        int *l_204[8][10][3] = {{{&g_6,&g_6,&g_6},{&l_185,(void*)0,&g_8[5][1]},{&g_8[3][2],&l_179,&g_8[5][1]},{&l_185,&g_6,&g_6},{&g_8[5][1],&g_6,&l_179},{&l_179,&l_179,&g_8[5][1]},{&l_179,(void*)0,&g_6},{&g_6,&l_179,&l_185},{(void*)0,(void*)0,&l_179},{&g_6,&l_179,&g_6}},{{&g_2,&l_179,&l_185},{&l_185,&g_8[5][1],&l_185},{&g_8[5][1],&l_179,&g_8[5][1]},{&g_8[5][1],&l_179,&g_6},{&l_185,&l_185,&l_179},{&g_6,&g_6,(void*)0},{&g_8[1][5],&g_8[5][1],&g_8[3][2]},{&l_179,&g_8[3][2],(void*)0},{&l_179,&g_8[1][5],&g_8[3][2]},{&g_2,&g_6,(void*)0}},{{(void*)0,&g_6,&l_179},{&g_6,(void*)0,&g_6},{&g_6,&g_6,&g_8[5][1]},{&g_6,&g_6,&l_185},{&l_185,(void*)0,&l_185},{&g_8[5][1],&g_6,&g_6},{&l_185,&g_6,&l_179},{&l_179,&g_8[1][5],&g_6},{&g_6,&g_8[3][2],(void*)0},{&l_179,&g_8[5][1],&g_6}},{{&l_185,&g_6,&g_6},{&g_8[5][1],&l_185,&g_8[5][1]},{&l_185,&l_179,&g_6},{&g_6,&l_179,&g_6},{&g_6,&g_8[5][1],&g_8[5][1]},{&g_6,&l_179,&g_6},{(void*)0,&l_179,&g_6},{&g_2,&l_179,(void*)0},{&l_179,&g_8[5][1],&g_6},{&l_179,&l_179,&l_179}},{{&g_8[1][5],&l_179,&g_6},{&g_6,&l_179,&l_185},{&g_6,&l_185,&g_8[5][1]},{&l_185,&g_6,&g_6},{&l_185,&g_6,&l_179},{&g_6,&g_6,&g_6},{&l_179,(void*)0,&l_185},{&l_179,&g_2,&l_179},{&g_6,&l_179,&g_6},{&g_6,&l_179,&l_179}},{{&l_179,&g_8[1][5],&l_185},{&l_185,&g_6,&g_6},{(void*)0,&l_185,&l_179},{&g_6,&g_8[5][1],&g_6},{(void*)0,&g_8[5][1],&g_8[5][1]},{&l_179,&l_185,&l_179},{&l_179,&g_6,&g_8[5][1]},{&g_6,&g_8[1][5],&g_6},{&g_8[5][1],&l_179,&g_6},{&g_8[5][1],&l_179,&l_185}},{{&g_8[5][1],&g_2,(void*)0},{&g_6,(void*)0,&g_8[1][5]},{&l_179,&g_6,&l_185},{&l_179,&g_6,&g_6},{(void*)0,&g_6,&g_6},{&g_6,&l_185,&l_185},{(void*)0,&g_8[5][1],&g_8[1][5]},{&l_185,&l_185,(void*)0},{&l_179,&l_179,&l_185},{&g_6,&g_6,&g_6}},{{&g_6,&l_179,&g_6},{&l_179,&l_185,&g_8[5][1]},{&l_179,&g_8[5][1],&l_179},{&g_6,&l_185,&g_6},{&g_8[5][1],&g_8[1][5],(void*)0},{&g_8[5][1],&g_6,&l_179},{&g_6,&g_6,&l_185},{&l_179,&l_179,&g_6},{&g_8[5][1],&g_6,(void*)0},{&g_6,(void*)0,&l_179}}};
        int i, j, k;
        for (p_32.f8 = 17; (p_32.f8 == (-20)); --p_32.f8)
        {
            unsigned l_184[6][6] = {{9UL,1UL,9UL,0xD60E4599L,18446744073709551615UL,18446744073709551615UL},{0x3A530DF6L,0xD60E4599L,18446744073709551612UL,0x04E9992FL,0x6AAFCD27L,0x6AAFCD27L},{0x04E9992FL,0x6AAFCD27L,0x6AAFCD27L,0x04E9992FL,18446744073709551612UL,0xD60E4599L},{0x3A530DF6L,18446744073709551615UL,18446744073709551615UL,0xD60E4599L,9UL,1UL},{9UL,18446744073709551612UL,0xD93009D5L,18446744073709551612UL,9UL,0UL},{1UL,18446744073709551615UL,9UL,0UL,18446744073709551612UL,18446744073709551615UL}};
            int i, j;
            (*l_181) = l_184[1][4];
            if (l_185)
                break;
        }
        if ((p_32.f2 >= (p_32.f9 & (safe_lshift_func_int16_t_s_s((-1L), ((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint16_t_u_u((*l_181), ((*l_180) != (void*)0))) != g_2), (~(g_53.f2 , g_53.f8)))) <= 7UL))))))
        {
            unsigned short l_199 = 7UL;
            const unsigned l_201 = 0x8316402EL;
            int l_202[2][10][7] = {{{0L,0L,0xFB2EB3C9L,0x704C2F6CL,(-10L),7L,1L},{(-10L),(-6L),(-2L),(-10L),0x4E223B17L,7L,0x93942DFEL},{0L,0x322B6666L,0x08163BCBL,0L,0L,(-1L),7L},{0x704C2F6CL,4L,6L,(-1L),6L,4L,0x704C2F6CL},{0x0A4E550DL,0x704C2F6CL,0x5E998426L,0x93942DFEL,(-6L),6L,(-1L)},{(-4L),0x420A4B63L,4L,0L,(-10L),1L,0x718F66F7L},{0x322B6666L,0x0A4E550DL,0x1312F68CL,(-10L),(-2L),0x53D3C6F0L,0L},{0xB2242C10L,(-10L),0x5E998426L,(-1L),1L,0x5C3BC544L,0x93942DFEL},{(-10L),7L,(-10L),(-6L),0x420A4B63L,5L,(-6L)},{0L,(-1L),0xB2242C10L,0x420A4B63L,(-1L),6L,(-6L)}},{{(-2L),(-4L),0x5C3BC544L,0x53D3C6F0L,(-6L),0xB2242C10L,0x93942DFEL},{0x704C2F6CL,0L,0L,(-4L),(-4L),0L,0L},{(-1L),6L,4L,0x704C2F6CL,0x21604C85L,0x1312F68CL,0x718F66F7L},{(-1L),0x322B6666L,6L,0x5E998426L,(-6L),0x5C3BC544L,4L},{0xBFFE8253L,0L,0x475C1F3DL,0x704C2F6CL,0L,(-1L),(-1L)},{0x4E223B17L,4L,7L,(-4L),0x1312F68CL,0L,0L},{0L,(-6L),6L,0x53D3C6F0L,1L,(-1L),0xFB2EB3C9L},{0x420A4B63L,9L,0xA5749F3DL,0x420A4B63L,0x322B6666L,4L,0L},{0x420A4B63L,(-1L),6L,(-6L),0x93942DFEL,0x5E998426L,0x704C2F6CL},{0L,0x322B6666L,0x5C3BC544L,5L,0x5C3BC544L,5L,0x475C1F3DL}}};
            int *l_203 = (void*)0;
            int i, j, k;
            (*g_70) = (*l_180);
            if ((safe_lshift_func_uint8_t_u_s((((((l_194 > p_32.f8) < (p_30 == p_30)) > (g_195 , (l_196 == &l_180))) != ((safe_mod_func_uint8_t_u_u(((l_199 | (((~((0xE364L > 65533UL) & l_200)) , p_32.f2) == l_201)) > (*l_181)), g_195.f3)) , 8L)) || l_199), 7)))
            {
                l_202[0][0][6] = l_201;
                l_203 = p_30;
                (**l_196) = l_204[3][5][0];

                ;
                (*l_180) = func_40(&l_202[1][7][3]);

                ;
            }
            else
            {
                return p_32.f5;
            }
        }
        else
        {
            struct S0 *l_206 = &g_207[0][2][0];
            int * const l_216 = (void*)0;
            (**l_196) = (*g_70);
            (*l_181) = (*p_33);
            for (g_195.f0 = 5; (g_195.f0 >= 0); g_195.f0 -= 1)
            {
                char l_214 = 0L;
                (*l_181) = (&g_71 == (g_195.f6 , &g_71));
                for (g_195.f9 = 5; (g_195.f9 >= 0); g_195.f9 -= 1)
                {
                    int i, j;
                    for (g_53.f5 = 0; (g_53.f5 <= 2); g_53.f5 += 1)
                    {
                        struct S0 **l_205[3];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_205[i] = (void*)0;
                        (*l_196) = &l_204[g_195.f9][(g_195.f0 + 4)][g_53.f5];

                        ;
                        l_206 = &p_32;

                        ;
                    }
                    g_8[g_195.f9][g_195.f0] = (safe_add_func_uint16_t_u_u(8UL, ((g_8[(g_195.f0 + 1)][g_195.f0] , g_210) == l_212)));
                    for (l_194 = 0; (l_194 <= 2); l_194 += 1)
                    {
                        int l_213 = 1L;
                        int **l_217 = &l_204[0][6][0];
                        int i, j, k;
                        l_213 = (*p_33);
                        (*l_217) = l_216;
                    }
                }
                for (g_195.f7 = 5; (g_195.f7 >= 0); g_195.f7 -= 1)
                {
                    for (g_195.f9 = 5; (g_195.f9 >= 1); g_195.f9 -= 1)
                    {
                        int i, j;
                        return g_8[(g_195.f0 + 1)][g_195.f7];


                    }
                    if ((*l_181))
                        break;
                    for (g_53.f1 = 0; (g_53.f1 <= 5); g_53.f1 += 1)
                    {
                        int i, j;
                        g_8[(g_53.f1 + 1)][g_195.f7] = (g_8[(g_53.f1 + 1)][g_195.f0] & (safe_rshift_func_uint16_t_u_u(g_8[(g_195.f0 + 1)][g_53.f1], 0)));
                    }
                    for (l_194 = 5; (l_194 >= 0); l_194 -= 1)
                    {
                        int l_220 = 0xB68615E9L;
                        int i, j;
                        g_8[l_194][l_194] = l_220;
                    }
                }
            }

            ;
            ;
        }

        ;
        (*l_181) = (g_53.f7 < 0L);
    }
    else
    {
        if ((p_32.f5 > ((g_207[0][2][0].f6 , p_32.f1) <= l_221)))
        {
            struct S0 ***l_222 = &l_212;
            (*l_222) = &g_211;
        }
        else
        {
            (*g_70) = (void*)0;

            ;
        }
    }


    return p_32.f2;
}







static int * func_34(const int * p_35)
{
    int *l_48 = &g_8[5][1];
    int **l_161 = (void*)0;
    int **l_162 = &g_71;
    (*l_162) = func_36(func_40(func_42(g_6, l_48, ((1L == (((((&g_8[0][3] == l_48) & (safe_add_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(((((g_2 , g_6) == 0x1EL) != (*l_48)) , g_6), (*l_48))) & 0xC6E20B39L), (*l_48)))) >= (*l_48)) , (*l_48)) | (*l_48))) , g_53), l_48, l_48)), l_48, g_53.f2);

    ;
    return (*g_70);


}







static int * func_36(int * p_37, int * p_38, unsigned p_39)
{
    int l_91 = 0x3CB4EFB5L;
    int *l_111 = &g_8[4][4];
    int l_125 = 0xA1BBDA26L;
    int l_139 = 1L;
    struct S0 l_160 = {0x1E6FL,0xC3A904A0L,0x4EB9CEF9L,-8L,0xC9L,0x6F7589B6L,-6L,1L,0x4EL,1L};
    for (g_6 = 0; (g_6 <= 5); g_6 += 1)
    {
        unsigned char l_69 = 0x3BL;
        int ***l_72 = &g_70;
        struct S0 l_84 = {0x4647L,0UL,0xC79EC616L,1L,255UL,0x07D3A089L,0xD506L,0xC7L,0x91L,0xF2E2092BL};
        int *l_133 = (void*)0;
        (*l_72) = (l_69 , g_70);
        for (g_53.f1 = 0; (g_53.f1 <= 5); g_53.f1 += 1)
        {
            unsigned l_83[1][2];
            int *l_94 = &g_8[5][1];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_83[i][j] = 4294967290UL;
            }
            for (l_69 = 1; (l_69 <= 5); l_69 += 1)
            {
                struct S0 l_134 = {8L,0x0EF530D8L,1L,0L,247UL,0x1D9937ACL,0x0A1DL,-1L,-10L,0x3274840AL};
                int i, j;
                if (g_8[g_6][g_53.f1])
                {
                    (*g_70) = ((p_39 & (p_39 ^ g_8[g_6][g_53.f1])) , p_38);

                    ;
                    (*g_70) = func_42((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_s(((((safe_rshift_func_uint16_t_u_s(0xEE64L, p_39)) , g_8[g_6][g_53.f1]) != (9L && (safe_add_func_uint32_t_u_u(0x4368EC64L, 0x67A1E796L)))) | ((g_8[g_6][g_53.f1] == g_8[5][1]) || ((safe_rshift_func_int8_t_s_u(0x81L, l_83[0][1])) , (-2L)))), 11)), 7)), (*g_70), l_84, (*g_70), (*g_70));

                    ;
                }
                else
                {
                    unsigned l_93[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_93[i] = 0xA4418BAEL;
                    for (g_53.f0 = 5; (g_53.f0 >= 0); g_53.f0 -= 1)
                    {
                        int l_92 = (-6L);
                        int i, j;
                        g_8[g_53.f1][l_69] = (safe_lshift_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u(((safe_mod_func_uint16_t_u_u(p_39, (p_39 && (5L & ((~((p_37 != (*g_70)) | (((p_39 != 0xB7A404EFL) >= (l_83[0][1] != ((l_91 , l_92) , p_39))) <= p_39))) | g_53.f8))))) <= (-1L)), 3)) , l_93[1]) < 4UL), g_8[g_6][g_53.f1]));
                    }
                    (**l_72) = l_94;

                    ;
                }
                (*g_70) = (*g_70);
                if ((*l_94))
                {
                    struct S0 l_95 = {-10L,0xC2C3437DL,0xDC864E9EL,1L,0x7BL,0x1623CC27L,0x6081L,-8L,-10L,7L};
                    for (l_84.f8 = 0; (l_84.f8 <= 5); l_84.f8 += 1)
                    {
                        return (*g_70);


                    }
                    if ((*p_38))
                    {
                        unsigned short l_98 = 1UL;
                        (**l_72) = p_37;

                        ;
                        (**l_72) = p_38;

                        ;
                        (**l_72) = (**l_72);
                        l_111 = func_42((safe_rshift_func_uint16_t_u_u(((*l_94) , p_39), (g_53 , (g_53.f8 || ((safe_rshift_func_uint16_t_u_s(((**g_70) >= ((safe_rshift_func_int8_t_s_s(p_39, 3)) > ((safe_rshift_func_int16_t_s_u((l_111 != (p_39 , (*g_70))), 6)) && g_8[g_6][g_53.f1]))), 2)) & 0UL))))), (*g_70), l_84, l_111, (*g_70));
                    }
                    else
                    {
                        int i, j;
                        g_8[(g_53.f1 + 1)][g_53.f1] = ((g_53.f0 , &p_38) == &g_71);
                    }
                    (*l_94) = (***l_72);
                }
                else
                {
                    int * const l_120 = &g_2;
                    int *l_126 = &g_8[g_6][g_53.f1];
                    for (l_84.f7 = 0; (l_84.f7 >= (-26)); l_84.f7--)
                    {
                        (*p_38) = ((((safe_mod_func_uint16_t_u_u(7UL, (safe_add_func_int16_t_s_s((l_84 , p_39), (((g_53.f4 >= ((((safe_sub_func_int16_t_s_s((l_120 != (void*)0), (((safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u(p_39, g_8[5][1])), 3)) && (g_8[g_6][g_53.f1] & l_125)) , 0x2837L))) > p_39) <= (*p_38)) && (**g_70))) || 0xD61E283FL) , 8UL))))) < 0x6BL) == 0xFA97D655L) > 0x88L);
                    }
                    g_8[5][1] = (*g_71);
                    (**l_72) = func_42(g_6, l_94, g_53, (*g_70), l_126);
                    (**l_72) = l_111;
                }
            }

            ;
            ;
            g_8[g_53.f1][g_53.f1] = (safe_mod_func_uint8_t_u_u((((((safe_add_func_uint16_t_u_u(((g_8[(g_6 + 1)][g_6] & g_8[(g_53.f1 + 1)][g_6]) & g_8[(g_6 + 1)][g_6]), ((((*l_111) , (***l_72)) >= (*l_111)) < 0xF46D5B37L))) == (g_53 , (**g_70))) || g_53.f6) , g_53.f7) >= 0xAFL), l_139));
            return p_37;


        }
    }
    for (g_6 = (-19); (g_6 == (-28)); g_6 = safe_sub_func_int32_t_s_s(g_6, 4))
    {
        int l_148[6][6][6] = {{{8L,0L,8L,0xF17199E9L,0x8512A6EBL,0xF79A6BD1L},{0L,0x6A7B6726L,(-10L),(-6L),0x52239B40L,1L},{(-1L),0x728FA397L,0L,(-6L),1L,0xF17199E9L},{0L,1L,0L,0xF17199E9L,0xC09CC95DL,0xA527C6C9L},{8L,0x308C9016L,(-2L),(-9L),0xA527C6C9L,2L},{1L,0L,1L,1L,1L,0x68249875L}},{{0x6A7B6726L,0x77550297L,0x308C9016L,0x77EC2AD8L,0x90638F02L,0L},{0L,(-2L),0xC1661776L,1L,1L,(-6L)},{0xFF4D6F54L,0L,5L,(-1L),(-1L),5L},{0xF79A6BD1L,0xF79A6BD1L,(-3L),0x7C51289CL,(-2L),0L},{(-6L),0xC09CC95DL,(-1L),1L,0xF17199E9L,(-3L)},{0x8512A6EBL,(-6L),(-1L),0x90638F02L,0xF79A6BD1L,0L}},{{2L,0x90638F02L,(-3L),0x77550297L,0xC394845BL,5L},{0x77550297L,0xC394845BL,5L,(-10L),(-2L),(-6L)},{2L,1L,0xC1661776L,(-9L),0x62A66E88L,0L},{0x62A66E88L,0xC1661776L,1L,(-3L),1L,0x90638F02L},{0x8889E10CL,0L,0xA527C6C9L,1L,0x77550297L,5L},{0xC394845BL,0L,0x62A66E88L,(-6L),0x62A66E88L,0L}},{{0xC1661776L,0x77550297L,(-8L),(-1L),(-6L),0xC394845BL},{0xE499BA86L,0xF17199E9L,0x686D0EF2L,0x308C9016L,5L,0xA527C6C9L},{0x68249875L,0xF17199E9L,0x8889E10CL,0L,(-6L),(-9L)},{(-6L),0x77550297L,0L,1L,0x62A66E88L,2L},{6L,0L,2L,0x8512A6EBL,0x77550297L,(-9L)},{2L,0L,0L,(-9L),1L,0x728FA397L}},{{0x8512A6EBL,0x728FA397L,0x52239B40L,(-9L),0x77EC2AD8L,(-6L)},{0x308C9016L,0L,0L,0L,(-2L),0xFF4D6F54L},{0x7C51289CL,(-3L),0xF79A6BD1L,0xF79A6BD1L,(-3L),0x7C51289CL},{0x62A66E88L,0x6A7B6726L,0x8512A6EBL,1L,(-9L),2L},{(-9L),(-2L),1L,0xE499BA86L,0xC394845BL,0xC09CC95DL},{(-9L),6L,0xE499BA86L,1L,(-1L),0xF17199E9L}},{{0x62A66E88L,(-9L),1L,0xF79A6BD1L,(-2L),1L},{0x7C51289CL,(-9L),(-1L),1L,0xF17199E9L,1L},{(-2L),(-2L),0x8512A6EBL,1L,2L,1L},{6L,0x8889E10CL,0L,(-1L),0xC1661776L,0x52239B40L},{(-6L),0x728FA397L,0xC1661776L,6L,1L,2L},{0L,0x62A66E88L,(-6L),0x62A66E88L,0L,0xC394845BL}}};
        struct S0 l_159 = {-2L,0x49334CCFL,0x4F011666L,-1L,0x70L,-7L,0x7EE6L,0xA8L,0x8AL,0x00DFFD0FL};
        int i, j, k;
        (*g_70) = func_42((((safe_add_func_int32_t_s_s(((((((((safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(((((*l_111) , (l_148[3][4][0] , ((((g_53.f8 < l_148[3][4][0]) | (safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((+(safe_rshift_func_int16_t_s_s(g_53.f3, 1))) > (((safe_lshift_func_int16_t_s_s(g_53.f3, 5)) & (safe_rshift_func_uint16_t_u_s(g_53.f9, 11))) < ((l_159 , &l_139) == (void*)0))), (*p_38))) & g_53.f7), p_39))) ^ (*l_111)) ^ 0x0DL))) < p_39) > p_39), g_8[1][4])), (*g_71))) != 0x1AL) <= g_53.f0) , l_159) , 5L) >= (*l_111)) != p_39) == l_159.f4), g_53.f9)) <= l_159.f8) <= l_159.f1), p_38, l_160, (*g_70), p_37);
    }

    ;
    (*l_111) = (*l_111);
    return p_37;


}







static int * func_40(const int * p_41)
{
    unsigned short l_59 = 0x75FCL;
    int *l_68[4][10] = {{&g_8[5][1],&g_8[5][1],&g_8[4][1],&g_8[5][1],(void*)0,(void*)0,(void*)0,&g_6,(void*)0,&g_6},{&g_6,&g_8[4][1],(void*)0,&g_8[5][1],(void*)0,&g_8[4][1],&g_6,&g_8[5][1],&g_2,(void*)0},{(void*)0,(void*)0,(void*)0,&g_8[3][4],&g_8[5][1],&g_6,&g_8[5][1],&g_8[5][1],&g_6,&g_8[5][1]},{&g_2,(void*)0,(void*)0,&g_2,&g_6,(void*)0,&g_6,(void*)0,&g_2,(void*)0}};
    int i, j;
    for (g_6 = 22; (g_6 <= 14); g_6 = safe_sub_func_uint32_t_u_u(g_6, 8))
    {
        int *l_60 = (void*)0;
        int *l_61[7];
        int i;
        for (i = 0; i < 7; i++)
            l_61[i] = &g_8[3][0];
        g_8[2][1] = l_59;
        return l_61[5];


    }
    g_8[5][1] = (safe_sub_func_int32_t_s_s(l_59, (l_59 | (safe_sub_func_int32_t_s_s((l_59 || (l_59 | (safe_sub_func_uint16_t_u_u((g_8[1][3] , l_59), l_59)))), 0xB6CA454DL)))));
    return l_68[0][1];


}







static int * func_42(int p_43, int * p_44, struct S0 p_45, const int * p_46, int * p_47)
{
    unsigned short l_54 = 0x7279L;
    struct S0 l_55[3] = {{0x1F1BL,0x03BA2937L,0xBCEC63F7L,-8L,0xACL,4L,1L,0xF0L,0xD1L,0xBCE866CAL},{0x1F1BL,0x03BA2937L,0xBCEC63F7L,-8L,0xACL,4L,1L,0xF0L,0xD1L,0xBCE866CAL},{0x1F1BL,0x03BA2937L,0xBCEC63F7L,-8L,0xACL,4L,1L,0xF0L,0xD1L,0xBCE866CAL}};
    int *l_56 = &g_6;
    int i;
    for (p_45.f7 = 5; (p_45.f7 >= 1); p_45.f7 -= 1)
    {
        return p_44;


    }
    (*p_44) = (l_54 | ((l_55[2] , g_8[5][1]) != l_55[2].f1));
    return l_56;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_8[i][j], "g_8[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_53.f1, "g_53.f1", print_hash_value);
    transparent_crc(g_53.f2, "g_53.f2", print_hash_value);
    transparent_crc(g_53.f3, "g_53.f3", print_hash_value);
    transparent_crc(g_53.f4, "g_53.f4", print_hash_value);
    transparent_crc(g_53.f5, "g_53.f5", print_hash_value);
    transparent_crc(g_53.f6, "g_53.f6", print_hash_value);
    transparent_crc(g_53.f7, "g_53.f7", print_hash_value);
    transparent_crc(g_53.f8, "g_53.f8", print_hash_value);
    transparent_crc(g_53.f9, "g_53.f9", print_hash_value);
    transparent_crc(g_195.f0, "g_195.f0", print_hash_value);
    transparent_crc(g_195.f1, "g_195.f1", print_hash_value);
    transparent_crc(g_195.f2, "g_195.f2", print_hash_value);
    transparent_crc(g_195.f3, "g_195.f3", print_hash_value);
    transparent_crc(g_195.f4, "g_195.f4", print_hash_value);
    transparent_crc(g_195.f5, "g_195.f5", print_hash_value);
    transparent_crc(g_195.f6, "g_195.f6", print_hash_value);
    transparent_crc(g_195.f7, "g_195.f7", print_hash_value);
    transparent_crc(g_195.f8, "g_195.f8", print_hash_value);
    transparent_crc(g_195.f9, "g_195.f9", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_207[i][j][k].f0, "g_207[i][j][k].f0", print_hash_value);
                transparent_crc(g_207[i][j][k].f1, "g_207[i][j][k].f1", print_hash_value);
                transparent_crc(g_207[i][j][k].f2, "g_207[i][j][k].f2", print_hash_value);
                transparent_crc(g_207[i][j][k].f3, "g_207[i][j][k].f3", print_hash_value);
                transparent_crc(g_207[i][j][k].f4, "g_207[i][j][k].f4", print_hash_value);
                transparent_crc(g_207[i][j][k].f5, "g_207[i][j][k].f5", print_hash_value);
                transparent_crc(g_207[i][j][k].f6, "g_207[i][j][k].f6", print_hash_value);
                transparent_crc(g_207[i][j][k].f7, "g_207[i][j][k].f7", print_hash_value);
                transparent_crc(g_207[i][j][k].f8, "g_207[i][j][k].f8", print_hash_value);
                transparent_crc(g_207[i][j][k].f9, "g_207[i][j][k].f9", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_277.f0, "g_277.f0", print_hash_value);
    transparent_crc(g_277.f1, "g_277.f1", print_hash_value);
    transparent_crc(g_277.f2, "g_277.f2", print_hash_value);
    transparent_crc(g_277.f3, "g_277.f3", print_hash_value);
    transparent_crc(g_277.f4, "g_277.f4", print_hash_value);
    transparent_crc(g_277.f5, "g_277.f5", print_hash_value);
    transparent_crc(g_277.f6, "g_277.f6", print_hash_value);
    transparent_crc(g_277.f7, "g_277.f7", print_hash_value);
    transparent_crc(g_277.f8, "g_277.f8", print_hash_value);
    transparent_crc(g_277.f9, "g_277.f9", print_hash_value);
    transparent_crc(g_333.f0, "g_333.f0", print_hash_value);
    transparent_crc(g_333.f1, "g_333.f1", print_hash_value);
    transparent_crc(g_333.f2, "g_333.f2", print_hash_value);
    transparent_crc(g_333.f3, "g_333.f3", print_hash_value);
    transparent_crc(g_333.f4, "g_333.f4", print_hash_value);
    transparent_crc(g_333.f5, "g_333.f5", print_hash_value);
    transparent_crc(g_333.f6, "g_333.f6", print_hash_value);
    transparent_crc(g_333.f7, "g_333.f7", print_hash_value);
    transparent_crc(g_333.f8, "g_333.f8", print_hash_value);
    transparent_crc(g_333.f9, "g_333.f9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_345[i], "g_345[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
