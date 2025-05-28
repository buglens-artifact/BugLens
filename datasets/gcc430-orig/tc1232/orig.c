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
   int f0;
   const unsigned char f1;
   char f2;
   short f3;
   short f4;
   const unsigned f5 : 7;
   long long f6;
   unsigned long long f7;
   int f8;
   unsigned f9 : 19;
};


static unsigned long long g_8[7] = {3UL,3UL,3UL,3UL,3UL,3UL,3UL};
static struct S0 g_17 = {-1L,0xC0L,0x07L,7L,1L,0,0xDE9829CBC21B07FBLL,0UL,1L,121};
static long long g_27 = 8L;
static unsigned g_73 = 0xA5A204FEL;
static int g_131 = 0x5B4CBD72L;
static unsigned long long g_135 = 0x40EEEA5956BBA839LL;
static short g_140[5] = {0xCF12L,0xCF12L,0xCF12L,0xCF12L,0xCF12L};
static unsigned long long g_174 = 0xF48CF4D993EA59E9LL;
static unsigned short g_176[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
static unsigned long long g_189 = 1UL;
static struct S0 g_229 = {9L,0x6AL,0x3EL,0x0AF5L,-1L,2,-1L,18446744073709551615UL,0x0E70EACCL,374};
static int g_241 = 0xFEF3AD9CL;
static unsigned g_268[7] = {4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL,4294967288UL};
static char g_313[9][9] = {{6L,6L,0x6FL,6L,6L,0x6FL,6L,6L,0x6FL},{0x42L,0x91L,1L,0x91L,0x42L,0x60L,0x42L,0x91L,1L},{0xE3L,0xE3L,6L,0xE3L,0xE3L,6L,0xE3L,0xE3L,6L},{(-2L),0x3CL,0x42L,0x3CL,(-2L),0x91L,(-2L),0x3CL,0x42L},{0xE3L,0xE3L,6L,0xE3L,0xE3L,6L,0xE3L,0xE3L,6L},{(-2L),0x3CL,0x42L,0x3CL,(-2L),0x91L,(-2L),0x3CL,0x42L},{0xE3L,0xE3L,6L,0xE3L,0xE3L,6L,0xE3L,0xE3L,6L},{(-2L),0x3CL,0x42L,0x3CL,(-2L),0x91L,(-2L),0x3CL,0x42L},{0xE3L,0xE3L,6L,0xE3L,0xE3L,6L,0xE3L,0xE3L,6L}};
static unsigned g_317 = 4UL;
static unsigned char g_337 = 0UL;



static const long long func_1(void);
static int func_2(int p_3, long long p_4, struct S0 p_5, unsigned long long p_6, short p_7);
static char func_14(int p_15, struct S0 p_16);
static long long func_44(unsigned long long p_45);
static int func_50(int p_51, const long long p_52, const unsigned long long p_53);
static unsigned func_74(unsigned p_75, char p_76, char p_77, int p_78, unsigned short p_79);
static unsigned char func_84(unsigned p_85, unsigned short p_86, int p_87);
static const int func_91(unsigned char p_92);
static unsigned long long func_95(const int p_96, long long p_97);
static unsigned func_98(unsigned p_99, unsigned p_100, unsigned char p_101, const int p_102);
static const long long func_1(void)
{
    const unsigned char l_9 = 0x9BL;
    struct S0 l_28 = {2L,0xAAL,0xB7L,0x45DDL,0x3F0FL,5,0x2B025F3D189EEBB9LL,0x2F7BD129AC07F4C7LL,-3L,239};
    struct S0 l_316 = {-1L,3UL,-10L,-8L,-10L,1,0xBBC6955CDB52F411LL,0x67CD38FB024D1D4ALL,0x2A4D33EFL,631};
    l_28.f0 = func_2((((g_8[1] == 0x9EBF495E3B372BA2LL) < (l_9 > (g_8[1] > (safe_add_func_int8_t_s_s((+(safe_mul_func_int8_t_s_s((!func_14(l_9, g_17)), ((safe_sub_func_int16_t_s_s(g_17.f0, ((safe_mul_func_int8_t_s_s(l_9, 0L)) ^ g_8[2]))) | 0x064616E9L)))), g_27))))) , 0xE8C0996BL), g_17.f4, l_28, g_27, g_17.f6);
    if ((l_316.f0 = (safe_add_func_uint8_t_u_u((((l_28.f0 = 0x6A222620L) < ((((-3L) >= func_74(g_229.f2, l_28.f4, (g_17.f2 = (g_229.f9 && (l_28.f8 = ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s(func_2((g_241 = (((safe_mod_func_int64_t_s_s(g_140[2], (((safe_rshift_func_int8_t_s_s(g_268[0], 6)) & (g_313[1][4] = g_229.f1)) , (safe_div_func_uint64_t_u_u(g_229.f2, 1UL))))) || 0x1EL) != g_17.f9)), g_17.f1, l_316, g_8[1], l_316.f1), 1L)) != g_17.f2), 0L)) < 0L)))), l_316.f7, g_317)) != g_17.f5) , l_316.f3)) , 9UL), g_229.f9))))
    {
        const unsigned l_318 = 4294967287UL;
        l_316.f8 = 0xF970DCF1L;
        return l_318;
    }
    else
    {
        unsigned l_324[8][9] = {{0x59661153L,3UL,0xB9FDF000L,9UL,18446744073709551606UL,18446744073709551615UL,18446744073709551615UL,0x48672F2DL,18446744073709551615UL},{18446744073709551615UL,9UL,0xEDD97419L,0xEDD97419L,9UL,18446744073709551615UL,0x7258004DL,0x59661153L,0xB9FDF000L},{0x48672F2DL,1UL,0xEDD97419L,18446744073709551615UL,0x59661153L,18446744073709551610UL,18446744073709551606UL,18446744073709551606UL,18446744073709551610UL},{0xEDD97419L,18446744073709551606UL,0xB9FDF000L,18446744073709551606UL,0xEDD97419L,18446744073709551606UL,9UL,0xB9FDF000L,3UL},{0xEDD97419L,18446744073709551615UL,18446744073709551606UL,3UL,9UL,18446744073709551610UL,0x9730C58BL,18446744073709551610UL,9UL},{9UL,9UL,9UL,9UL,18446744073709551615UL,18446744073709551606UL,0x48672F2DL,0x9730C58BL,1UL},{9UL,0xDC69FB16L,0x59661153L,18446744073709551606UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551606UL},{0xEDD97419L,18446744073709551610UL,0xEDD97419L,0x59661153L,18446744073709551615UL,0x9730C58BL,3UL,18446744073709551615UL,18446744073709551606UL}};
        unsigned l_340 = 0UL;
        const unsigned long long l_343 = 18446744073709551609UL;
        int l_344[7][3] = {{0x0B42C3CDL,(-4L),0x0B42C3CDL},{0L,0L,0L},{0x0B42C3CDL,(-4L),0x0B42C3CDL},{0L,0L,0L},{0x0B42C3CDL,(-4L),0x0B42C3CDL},{0L,0L,0L},{0x0B42C3CDL,(-4L),0x0B42C3CDL}};
        int i, j;
        g_229.f0 = ((safe_mod_func_uint64_t_u_u((func_84(g_229.f0, (0x985BC03FL <= (((safe_div_func_int64_t_s_s((((safe_unary_minus_func_uint64_t_u(((!(l_316 , (((l_324[7][2] >= l_324[7][2]) || l_324[7][2]) && g_17.f4))) != func_14(l_324[7][2], g_229)))) & l_28.f3) != 0x08C8L), 0xB57E2701C66A0CBCLL)) <= g_17.f6) , 1UL)), g_8[1]) != 0x9AL), g_27)) == l_28.f6);
        l_344[3][1] = (safe_add_func_uint16_t_u_u((((safe_div_func_uint16_t_u_u((l_316.f0 = (func_84((safe_div_func_int16_t_s_s(((safe_lshift_func_int8_t_s_u((safe_div_func_int8_t_s_s((g_73 ^ ((l_28.f8 = func_91(g_27)) <= (((((((((safe_mul_func_uint8_t_u_u(func_98((g_337 = 18446744073709551615UL), (safe_rshift_func_int8_t_s_s((l_340 = (-9L)), g_268[0])), (safe_add_func_uint16_t_u_u(g_135, 0UL)), (l_324[7][2] , l_343)), l_343)) >= 0L) , l_316.f9) && 0x8091L) != g_313[4][2]) >= 1UL) > l_28.f4) , 18446744073709551608UL) | g_17.f2))), l_316.f1)), l_324[4][6])) != l_324[7][2]), g_229.f9)), l_343, g_17.f2) > g_135)), 1UL)) >= g_229.f0) ^ g_229.f3), g_229.f8));
    }
    l_316.f8 = func_98(g_229.f9, (safe_add_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0xEEL, (l_316.f0 = func_91((safe_div_func_int16_t_s_s((l_28.f0 = g_17.f8), l_28.f6)))))), (safe_mul_func_int16_t_s_s((-1L), 6L)))), (safe_div_func_uint8_t_u_u(((((safe_div_func_uint64_t_u_u(l_316.f9, 18446744073709551615UL)) < g_229.f1) , g_17.f6) == g_229.f9), g_229.f3)), l_28.f5);
    return l_316.f6;
}







static int func_2(int p_3, long long p_4, struct S0 p_5, unsigned long long p_6, short p_7)
{
    short l_29 = 0L;
    int l_34 = 4L;
    unsigned l_56 = 18446744073709551608UL;
    struct S0 l_278[7][8] = {{{0x562FC40EL,0xD9L,0x62L,0x476AL,0x469AL,4,0x8851B7382147A898LL,0UL,0xC7DC168FL,400},{8L,0x14L,1L,1L,0x657BL,8,7L,0x66C1FB9119F9B688LL,0x5E68DE6CL,436},{1L,6UL,0L,0x1C09L,0x914BL,2,0x2D8DC617FC8DC787LL,0xC4A63CADAEC62697LL,0x4E2E9037L,169},{0xC389D37CL,2UL,0x83L,-1L,0xA738L,1,0xB0D5BCDC44B75739LL,0x4BA25DFF6FBC4005LL,1L,505},{0x9F4C563EL,0UL,0xFFL,9L,0L,2,0x7B79485C10DB3E03LL,0x6FA893C5793FFD58LL,-7L,73},{-1L,0x16L,0x7DL,-1L,0x10A0L,0,0xD0C05B7851025829LL,0xC07342370A5FE254LL,0x32484E74L,493},{0xC99EAA4BL,255UL,0x19L,0x3758L,0L,1,0x6752EA955255962FLL,0xE238FD6C5C70819ALL,-7L,269},{-1L,0x16L,0x7DL,-1L,0x10A0L,0,0xD0C05B7851025829LL,0xC07342370A5FE254LL,0x32484E74L,493}},{{0xC389D37CL,2UL,0x83L,-1L,0xA738L,1,0xB0D5BCDC44B75739LL,0x4BA25DFF6FBC4005LL,1L,505},{-3L,1UL,-1L,0L,0xA7FEL,5,-7L,0xB70DBA36E81D26D1LL,-1L,363},{1L,255UL,1L,0xFFB6L,0x9B11L,7,0x54786F5E0707C7D6LL,2UL,-9L,561},{-3L,1UL,-1L,0L,0xA7FEL,5,-7L,0xB70DBA36E81D26D1LL,-1L,363},{0xC389D37CL,2UL,0x83L,-1L,0xA738L,1,0xB0D5BCDC44B75739LL,0x4BA25DFF6FBC4005LL,1L,505},{-1L,0x16L,0x7DL,-1L,0x10A0L,0,0xD0C05B7851025829LL,0xC07342370A5FE254LL,0x32484E74L,493},{1L,254UL,0xBAL,0xEF9DL,-5L,1,0x17A01B2F946171C3LL,0xD01DD95623D9EDB6LL,-1L,714},{0x9F4C563EL,0UL,0xFFL,9L,0L,2,0x7B79485C10DB3E03LL,0x6FA893C5793FFD58LL,-7L,73}},{{0xAD305D0EL,0xE8L,0xA3L,-8L,-1L,0,-7L,1UL,0L,453},{8L,0x14L,1L,1L,0x657BL,8,7L,0x66C1FB9119F9B688LL,0x5E68DE6CL,436},{-3L,1UL,-1L,0L,0xA7FEL,5,-7L,0xB70DBA36E81D26D1LL,-1L,363},{0x794F23A3L,0x2BL,-10L,1L,0x73FFL,10,0L,18446744073709551615UL,-1L,401},{0xC99EAA4BL,255UL,0x19L,0x3758L,0L,1,0x6752EA955255962FLL,0xE238FD6C5C70819ALL,-7L,269},{0xC99EAA4BL,255UL,0x19L,0x3758L,0L,1,0x6752EA955255962FLL,0xE238FD6C5C70819ALL,-7L,269},{0x794F23A3L,0x2BL,-10L,1L,0x73FFL,10,0L,18446744073709551615UL,-1L,401},{-3L,1UL,-1L,0L,0xA7FEL,5,-7L,0xB70DBA36E81D26D1LL,-1L,363}},{{0x9F4C563EL,0UL,0xFFL,9L,0L,2,0x7B79485C10DB3E03LL,0x6FA893C5793FFD58LL,-7L,73},{0x9F4C563EL,0UL,0xFFL,9L,0L,2,0x7B79485C10DB3E03LL,0x6FA893C5793FFD58LL,-7L,73},{-3L,1UL,-1L,0L,0xA7FEL,5,-7L,0xB70DBA36E81D26D1LL,-1L,363},{0x562FC40EL,0xD9L,0x62L,0x476AL,0x469AL,4,0x8851B7382147A898LL,0UL,0xC7DC168FL,400},{1L,6UL,0L,0x1C09L,0x914BL,2,0x2D8DC617FC8DC787LL,0xC4A63CADAEC62697LL,0x4E2E9037L,169},{0x1BA90629L,0xAEL,8L,6L,1L,10,0x9ED68EBE1E89DBBBLL,0xCF77813186D76BC9LL,1L,299},{1L,254UL,0xBAL,0xEF9DL,-5L,1,0x17A01B2F946171C3LL,0xD01DD95623D9EDB6LL,-1L,714},{0xAD305D0EL,0xE8L,0xA3L,-8L,-1L,0,-7L,1UL,0L,453}},{{0xC99EAA4BL,255UL,0x19L,0x3758L,0L,1,0x6752EA955255962FLL,0xE238FD6C5C70819ALL,-7L,269},{1L,254UL,0xBAL,0xEF9DL,-5L,1,0x17A01B2F946171C3LL,0xD01DD95623D9EDB6LL,-1L,714},{1L,255UL,1L,0xFFB6L,0x9B11L,7,0x54786F5E0707C7D6LL,2UL,-9L,561},{1L,255UL,1L,0xFFB6L,0x9B11L,7,0x54786F5E0707C7D6LL,2UL,-9L,561},{-3L,1UL,-1L,0L,0xA7FEL,5,-7L,0xB70DBA36E81D26D1LL,-1L,363},{0xC389D37CL,2UL,0x83L,-1L,0xA738L,1,0xB0D5BCDC44B75739LL,0x4BA25DFF6FBC4005LL,1L,505},{-1L,0x16L,0x7DL,-1L,0x10A0L,0,0xD0C05B7851025829LL,0xC07342370A5FE254LL,0x32484E74L,493},{1L,254UL,0xBAL,0xEF9DL,-5L,1,0x17A01B2F946171C3LL,0xD01DD95623D9EDB6LL,-1L,714}},{{0xC389D37CL,2UL,0x83L,-1L,0xA738L,1,0xB0D5BCDC44B75739LL,0x4BA25DFF6FBC4005LL,1L,505},{8L,0x14L,1L,1L,0x657BL,8,7L,0x66C1FB9119F9B688LL,0x5E68DE6CL,436},{0x9F4C563EL,0UL,0xFFL,9L,0L,2,0x7B79485C10DB3E03LL,0x6FA893C5793FFD58LL,-7L,73},{0x1BA90629L,0xAEL,8L,6L,1L,10,0x9ED68EBE1E89DBBBLL,0xCF77813186D76BC9LL,1L,299},{0xAD305D0EL,0xE8L,0xA3L,-8L,-1L,0,-7L,1UL,0L,453},{1L,255UL,1L,0xFFB6L,0x9B11L,7,0x54786F5E0707C7D6LL,2UL,-9L,561},{1L,255UL,1L,0xFFB6L,0x9B11L,7,0x54786F5E0707C7D6LL,2UL,-9L,561},{0xAD305D0EL,0xE8L,0xA3L,-8L,-1L,0,-7L,1UL,0L,453}},{{1L,6UL,0L,0x1C09L,0x914BL,2,0x2D8DC617FC8DC787LL,0xC4A63CADAEC62697LL,0x4E2E9037L,169},{-1L,0x16L,0x7DL,-1L,0x10A0L,0,0xD0C05B7851025829LL,0xC07342370A5FE254LL,0x32484E74L,493},{-1L,0x16L,0x7DL,-1L,0x10A0L,0,0xD0C05B7851025829LL,0xC07342370A5FE254LL,0x32484E74L,493},{1L,6UL,0L,0x1C09L,0x914BL,2,0x2D8DC617FC8DC787LL,0xC4A63CADAEC62697LL,0x4E2E9037L,169},{0xAD305D0EL,0xE8L,0xA3L,-8L,-1L,0,-7L,1UL,0L,453},{0xC99EAA4BL,255UL,0x19L,0x3758L,0L,1,0x6752EA955255962FLL,0xE238FD6C5C70819ALL,-7L,269},{1L,254UL,0xBAL,0xEF9DL,-5L,1,0x17A01B2F946171C3LL,0xD01DD95623D9EDB6LL,-1L,714},{1L,255UL,1L,0xFFB6L,0x9B11L,7,0x54786F5E0707C7D6LL,2UL,-9L,561}}};
    unsigned char l_280 = 4UL;
    unsigned l_293 = 1UL;
    int i, j;
    if (l_29)
    {
        short l_279 = (-9L);
        l_280 = ((safe_rshift_func_uint8_t_u_s(((1UL == ((safe_sub_func_int16_t_s_s((g_17.f4 , (((((l_34 = g_17.f9) , (p_7 = ((safe_sub_func_uint16_t_u_u(((((func_14(((safe_lshift_func_uint8_t_u_u((((g_17.f5 < (p_6 < (safe_unary_minus_func_int64_t_s(func_14((safe_rshift_func_int8_t_s_u(((l_34 = (safe_sub_func_int8_t_s_s(((func_44((p_5.f0 == (safe_mod_func_int16_t_s_s((safe_mod_func_int64_t_s_s((g_17.f2 , func_14(func_50(p_5.f7, ((safe_add_func_int32_t_s_s(((l_34 , (-1L)) <= 0xD67DEC96L), l_56)) == g_8[1]), p_5.f5), g_229)), p_5.f9)), p_6)))) != l_34) , p_5.f0), (-1L)))) ^ l_56), p_5.f8)), p_5))))) < 2L) == g_229.f4), 6)) > 0x7AC9D768L), l_278[4][7]) ^ p_5.f7) <= 0x6A5DE530L) & 0xD72CL) == 0x3E94L), 0xB2F5L)) ^ g_229.f6))) == g_229.f9) <= g_17.f5) < l_279)), g_229.f1)) != 7L)) | p_3), g_229.f7)) >= l_278[4][7].f0);
    }
    else
    {
        long long l_281 = 0xFB6A54095CB5B313LL;
        int l_290[4] = {(-1L),(-1L),(-1L),(-1L)};
        struct S0 l_294 = {-1L,0xFEL,0L,0x35FAL,-2L,9,-10L,1UL,0L,43};
        short l_297[9][10] = {{(-8L),(-4L),(-4L),(-8L),(-4L),(-8L),(-4L),(-4L),(-8L),(-4L)},{(-8L),(-4L),(-4L),(-8L),(-4L),(-8L),(-4L),(-4L),(-8L),(-4L)},{(-8L),(-4L),(-4L),(-8L),(-4L),(-8L),(-4L),(-4L),(-8L),(-4L)},{(-8L),(-4L),(-4L),(-8L),(-4L),(-8L),(-4L),(-4L),(-8L),(-4L)},{(-8L),(-4L),(-4L),(-8L),(-4L),(-8L),(-4L),(-4L),(-8L),(-4L)},{(-8L),(-4L),(-4L),(-8L),(-4L),(-8L),(-4L),(-4L),(-8L),(-4L)},{(-8L),(-4L),(-4L),(-8L),(-4L),(-8L),(-4L),(-4L),(-8L),(-4L)},{(-4L),0x4BEEL,0x4BEEL,(-4L),(-4L),(-4L),0x4BEEL,0x4BEEL,(-4L),(-4L)},{(-4L),0x4BEEL,0x4BEEL,(-4L),(-4L),(-4L),0x4BEEL,0x4BEEL,(-4L),(-4L)}};
        int i, j;
        l_281 = (g_17.f0 = g_268[2]);
        p_5.f8 = (p_5.f2 , (safe_rshift_func_uint8_t_u_s(func_14((safe_div_func_int64_t_s_s((((p_4 > p_5.f0) > ((safe_add_func_uint64_t_u_u(((func_14(p_5.f8, l_278[3][1]) & (safe_sub_func_int16_t_s_s((0UL == (l_290[2] = (p_5.f2 = p_6))), (safe_div_func_int16_t_s_s(0x88C7L, l_293))))) == l_278[4][7].f4), 0x754BE041EA4D76D0LL)) ^ g_229.f4)) ^ g_8[2]), l_281)), l_294), 1)));
        for (p_5.f3 = 0; (p_5.f3 != 25); p_5.f3 = safe_add_func_uint16_t_u_u(p_5.f3, 3))
        {
            unsigned char l_298 = 0x11L;
            p_5.f0 = (l_278[4][7].f0 ^ (0xA8L || ((0x3329E79F4F3C083DLL > (l_297[2][0] = p_4)) , (g_229 , g_189))));
            l_298 = p_5.f7;
        }
    }
    p_5.f0 = (safe_sub_func_int64_t_s_s(p_5.f8, g_140[2]));
    g_229.f8 = ((safe_sub_func_uint8_t_u_u(l_278[4][7].f1, g_140[1])) <= (p_5.f9 = (~p_5.f2)));
    return g_131;
}







static char func_14(int p_15, struct S0 p_16)
{
    int l_22[7][5][7] = {{{0x90CB25BBL,0xBCAE26E1L,(-1L),(-1L),(-9L),(-1L),(-1L)},{0x762AFEDDL,6L,0x679405A9L,0xE65DD4D1L,0L,0x54F618E1L,0x762AFEDDL},{0x7E8EE72CL,(-9L),0xF3BC9FC2L,0xF3BC9FC2L,(-9L),0x7E8EE72CL,0xA7FCC65AL},{0xF207E879L,0xE65DD4D1L,0x46C20B13L,0x3D38E20BL,0x80D6736FL,(-1L),0xC5395F87L},{(-9L),0xA7FCC65AL,0x7A429ADBL,(-9L),(-10L),0xF3BC9FC2L,(-1L)}},{{0xAED0F12AL,0xE65DD4D1L,0xAED0F12AL,1L,0x762AFEDDL,6L,0x679405A9L},{(-1L),(-9L),(-1L),(-1L),(-1L),(-8L),0xBCAE26E1L},{0x80D6736FL,6L,0L,0x3D38E20BL,0L,6L,0x80D6736FL},{0x7E8EE72CL,0xBCAE26E1L,0xA7FCC65AL,(-10L),0x90CB25BBL,0xF3BC9FC2L,0xA7FCC65AL},{(-1L),0x3D38E20BL,0xABB416C0L,0xE65DD4D1L,0xFDAF0DB1L,(-1L),0xFDAF0DB1L}},{{(-1L),3L,0xA7FCC65AL,0xD1DC2CBFL,(-10L),(-8L),0xF3BC9FC2L},{0x46C20B13L,0x54F618E1L,(-1L),(-2L),1L,(-1L),0xA3143253L},{0x7E8EE72CL,0xF3BC9FC2L,0xD1DC2CBFL,3L,3L,0xD1DC2CBFL,0xF3BC9FC2L},{0xAED0F12AL,0xAEF1792FL,0xABB416C0L,0x54F618E1L,(-8L),(-2L),0xAED0F12AL},{(-8L),(-10L),(-1L),(-4L),(-10L),0x70D8AC50L,1L}},{{0L,0x54F618E1L,0xC5395F87L,0x54F618E1L,0L,0xE65DD4D1L,(-1L)},{3L,1L,(-4L),3L,1L,1L,0xA7FCC65AL},{0xABB416C0L,6L,0x02A909F0L,(-2L),0x679405A9L,(-2L),0x02A909F0L},{3L,3L,0xD1DC2CBFL,0xF3BC9FC2L,0x7E8EE72CL,(-1L),0x7A429ADBL},{0L,0xAEF1792FL,0xA3143253L,1L,(-1L),(-1L),0L}},{{(-8L),0x7A429ADBL,(-4L),1L,0x7E8EE72CL,(-1L),1L},{0xAED0F12AL,1L,0x762AFEDDL,6L,0x679405A9L,0xE65DD4D1L,0L},{0x7E8EE72CL,0x70D8AC50L,(-1L),0x7A429ADBL,1L,1L,0x7A429ADBL},{0x46C20B13L,1L,0x46C20B13L,(-2L),0L,0xAEF1792FL,0xA3143253L},{(-10L),0x7A429ADBL,0xD1DC2CBFL,(-10L),3L,0xBCAE26E1L,0x7A429ADBL}},{{0xAED0F12AL,(-1L),0x02A909F0L,0x54F618E1L,0x02A909F0L,(-1L),0xAED0F12AL},{1L,0x7E8EE72CL,(-1L),1L,0x7E8EE72CL,0x70D8AC50L,(-1L)},{1L,0x54F618E1L,0x80D6736FL,6L,0L,0x3D38E20BL,0L},{3L,(-1L),(-1L),3L,0x70D8AC50L,(-4L),0xA7FCC65AL},{(-8L),1L,0x02A909F0L,0xAEF1792FL,0L,(-2L),0xABB416C0L}},{{(-10L),3L,0xBCAE26E1L,0x7A429ADBL,0x7E8EE72CL,0x90CB25BBL,0xA7FCC65AL},{0L,(-1L),(-1L),1L,0xA3143253L,0xAEF1792FL,0L},{1L,0xA7FCC65AL,(-4L),0x70D8AC50L,3L,(-1L),(-1L)},{0x679405A9L,1L,(-1L),1L,0x679405A9L,0x3D38E20BL,0xAED0F12AL},{0x7E8EE72CL,(-8L),1L,0x7A429ADBL,0x70D8AC50L,(-8L),0x7A429ADBL}}};
    int i, j, k;
    for (g_17.f3 = 0; (g_17.f3 < 25); g_17.f3 = safe_add_func_uint64_t_u_u(g_17.f3, 1))
    {
        if (p_16.f8)
            break;
        if (p_16.f6)
            break;
    }
    for (p_16.f2 = (-6); (p_16.f2 >= 18); p_16.f2++)
    {
        g_17.f8 = l_22[4][1][4];
        return p_16.f7;
    }
    return p_16.f7;
}







static long long func_44(unsigned long long p_45)
{
    struct S0 l_230 = {0xA93248AEL,0x2AL,0L,-1L,-1L,8,0x7921E530D105BBACLL,18446744073709551615UL,0L,589};
    int l_242[4][7][9] = {{{0xE21C417DL,0x2924E2C5L,0xAED52968L,0x04016B28L,(-5L),0L,0x5AD5B882L,(-1L),(-1L)},{0x979C3472L,0xE6F29853L,0L,0x3AB674E5L,0x2C6D5A98L,0x2C6D5A98L,0x3AB674E5L,0L,0xE6F29853L},{0x2924E2C5L,(-1L),(-9L),0L,(-4L),0x7A96EA25L,(-9L),0xE21C417DL,0xE6548DDAL},{0xDF6918CFL,4L,0x191E37F5L,(-4L),(-1L),7L,0x2D21EF03L,0x979C3472L,(-4L)},{0x2924E2C5L,0x4F726C20L,(-1L),0L,0L,(-1L),0x4F726C20L,0x2924E2C5L,0x26D5CE32L},{0x3AB674E5L,0x191E37F5L,(-1L),(-1L),(-1L),0xE6F29853L,0x2C6D5A98L,0xD7C74E41L,0xA4A929C1L},{0xB0AF91E4L,0x7A96EA25L,0xE6548DDAL,(-1L),(-7L),(-5L),0x26D5CE32L,0xE6548DDAL,0x26D5CE32L}},{{0x979C3472L,0xFE8AC2DBL,8L,8L,0xFE8AC2DBL,0x979C3472L,(-1L),(-1L),(-4L)},{(-5L),(-7L),(-1L),0xE6548DDAL,0x7A96EA25L,0xB0AF91E4L,(-2L),0L,0xE6548DDAL},{0xE6F29853L,(-1L),(-1L),(-1L),0x191E37F5L,0x3AB674E5L,(-1L),0x3AB674E5L,0x191E37F5L},{(-1L),0L,0L,(-1L),0x4F726C20L,0x2924E2C5L,0x26D5CE32L,0x7A96EA25L,0x7FD6D6BBL},{7L,(-1L),(-4L),0x191E37F5L,4L,0xDF6918CFL,0x2C6D5A98L,(-4L),0xD7C74E41L},{0x7A96EA25L,(-4L),0L,0x04016B28L,0x4F726C20L,0x7A96EA25L,0x4F726C20L,0x04016B28L,0L},{0x3AB674E5L,0x3AB674E5L,1L,0xDF6918CFL,8L,(-1L),0xA4A929C1L,(-4L),0xDF6918CFL}},{{(-9L),0L,(-1L),(-1L),0L,0x4F726C20L,0L,(-4L),0xE6548DDAL},{0xFE8AC2DBL,(-1L),1L,(-1L),0x2C6D5A98L,(-1L),1L,(-1L),0xFE8AC2DBL},{0x7FD6D6BBL,0xE6548DDAL,(-5L),0xE21C417DL,0x2924E2C5L,0xAED52968L,0x04016B28L,(-5L),0L},{1L,0xD7C74E41L,7L,4L,(-1L),1L,0x2C6D5A98L,0x2D21EF03L,0x2D21EF03L},{0x7FD6D6BBL,0x2924E2C5L,0x04016B28L,(-2L),0x04016B28L,0x2924E2C5L,0x7FD6D6BBL,(-1L),(-2L)},{0xFE8AC2DBL,0x979C3472L,(-1L),(-1L),(-4L),0L,0x979C3472L,1L,1L},{(-9L),0xE21C417DL,0xE6548DDAL,(-1L),0x7A96EA25L,0xB3BE215FL,(-1L),(-1L),0xB3BE215FL}},{{0x3AB674E5L,0x3CB44727L,0x2D21EF03L,0x3CB44727L,0x3AB674E5L,0xA4A929C1L,8L,0x2D21EF03L,(-1L)},{0L,0x26D5CE32L,(-7L),(-1L),0L,0L,0x7A96EA25L,(-5L),0xB0AF91E4L},{0xE6F29853L,0x3AB674E5L,(-4L),0x22430E65L,(-1L),0x2C6D5A98L,0x2C6D5A98L,0x3AB674E5L,0L},{0xE21C417DL,(-7L),0xE21C417DL,0x5AD5B882L,0x2924E2C5L,0xE6548DDAL,(-7L),0L,(-1L)},{8L,(-1L),0xA4A929C1L,(-4L),0xDF6918CFL,0x3CB44727L,(-1L),0xE6F29853L,(-1L)},{0L,0x7FD6D6BBL,(-1L),0x5AD5B882L,0x7A96EA25L,0x7A96EA25L,0x5AD5B882L,(-1L),0x7FD6D6BBL},{(-1L),0x2D21EF03L,(-1L),0L,0x22430E65L,(-1L),0xDF6918CFL,(-5L),1L}}};
    int l_243 = (-1L);
    unsigned l_272 = 18446744073709551615UL;
    char l_277 = 0x6BL;
    int i, j, k;
    l_243 = (l_230 , ((safe_mul_func_uint8_t_u_u(((l_242[2][0][0] = (g_17.f3 = (((l_230.f9 < g_176[2]) && (((l_230.f0 = (g_140[2] = func_84((g_17.f9 = (p_45 , l_230.f9)), ((g_241 = (safe_mod_func_uint32_t_u_u((p_45 < ((safe_sub_func_int32_t_s_s(l_230.f0, (l_230.f8 = (func_98((p_45 > ((safe_sub_func_int8_t_s_s((func_98(((safe_add_func_int8_t_s_s(p_45, 255UL)) , l_230.f1), g_17.f3, l_230.f5, l_230.f7) >= p_45), 9UL)) ^ g_241)), p_45, p_45, l_230.f6) , g_229.f6)))) < (-10L))), p_45))) , p_45), g_17.f8))) & l_230.f2) == g_17.f1)) <= g_17.f1))) != l_230.f5), g_229.f6)) == 9UL));
    for (g_27 = (-11); (g_27 != 5); g_27 = safe_add_func_uint64_t_u_u(g_27, 5))
    {
        unsigned char l_256 = 0UL;
        unsigned l_260[1][10][7] = {{{0x7488CC12L,0x7488CC12L,7UL,0x3FAE2F85L,0xA0AD21AFL,9UL,4294967286UL},{0x7488CC12L,1UL,3UL,4294967291UL,0x7C9473C9L,9UL,7UL},{4294967293UL,4294967289UL,2UL,4294967291UL,0xA0AD21AFL,0x3237F075L,0x3788C7B8L},{1UL,4294967289UL,3UL,0x3FAE2F85L,0x2704B462L,4294967291UL,0x3788C7B8L},{4294967293UL,1UL,7UL,0x3237F075L,0x2704B462L,0x3237F075L,7UL},{0x7488CC12L,0x7488CC12L,7UL,0x3FAE2F85L,0xA0AD21AFL,9UL,4294967286UL},{0x7488CC12L,1UL,3UL,4294967291UL,0x7C9473C9L,9UL,7UL},{4294967293UL,4294967289UL,2UL,4294967291UL,0xA0AD21AFL,0x3237F075L,0x96D4A4D0L},{3UL,7UL,1UL,0x7C94DDF8L,1UL,0xC69AD0F9L,0x96D4A4D0L},{0x3788C7B8L,3UL,0x021662E3L,0x12209801L,1UL,0x12209801L,0x021662E3L}}};
        int i, j, k;
        for (p_45 = (-24); (p_45 > 48); p_45 = safe_add_func_uint16_t_u_u(p_45, 1))
        {
            unsigned long long l_271 = 18446744073709551614UL;
            l_230.f0 = p_45;
            if (l_230.f8)
                break;
            for (g_17.f0 = 25; (g_17.f0 > (-9)); --g_17.f0)
            {
                g_229.f0 = (-1L);
            }
            if (g_229.f7)
            {
                short l_257[8] = {(-9L),(-6L),(-9L),(-6L),(-9L),(-6L),(-9L),(-6L)};
                int i;
                for (l_230.f3 = 25; (l_230.f3 == (-29)); l_230.f3--)
                {
                    for (g_73 = 0; (g_73 != 25); g_73 = safe_add_func_uint64_t_u_u(g_73, 2))
                    {
                        if (g_229.f0)
                            break;
                    }
                    for (l_230.f7 = 0; (l_230.f7 > 6); l_230.f7 = safe_add_func_int32_t_s_s(l_230.f7, 5))
                    {
                        g_17.f8 = 0L;
                        l_230.f0 = (((l_256 && 0x38L) && 0x506EL) , 0x4898BB38L);
                    }
                    if (p_45)
                        continue;
                    for (l_230.f7 = 0; (l_230.f7 <= 4); l_230.f7 += 1)
                    {
                        int i;
                        l_242[2][0][0] = g_140[l_230.f7];
                        if (g_229.f2)
                            continue;
                        l_242[2][0][0] = (-1L);
                        l_257[2] = p_45;
                    }
                }
                l_242[3][4][1] = func_74(g_17.f6, (l_243 = (safe_add_func_uint32_t_u_u(l_260[0][7][3], (((safe_lshift_func_int16_t_s_s(0L, 4)) , (safe_add_func_int64_t_s_s(((safe_unary_minus_func_int32_t_s((g_229.f0 = (p_45 | (p_45 ^ ((g_268[0] = (safe_rshift_func_int16_t_s_s((p_45 < l_257[0]), 3))) , l_257[2])))))) >= (safe_sub_func_uint8_t_u_u(l_271, g_17.f2))), l_260[0][4][0]))) >= p_45)))), l_271, p_45, p_45);
                if (l_272)
                    continue;
            }
            else
            {
                return p_45;
            }
        }
    }
    l_242[2][0][0] = func_95(l_230.f3, (safe_add_func_int16_t_s_s((((+(g_229.f8 != l_277)) || (g_17.f4 != (g_229.f8 != g_17.f2))) > ((((func_95(g_17.f3, p_45) & 18446744073709551615UL) , l_242[1][0][7]) & 0x70L) != p_45)), l_272)));
    return p_45;
}







static int func_50(int p_51, const long long p_52, const unsigned long long p_53)
{
    long long l_67 = (-1L);
    int l_68[1][1];
    int l_200 = 6L;
    struct S0 l_210 = {7L,255UL,1L,1L,-8L,8,0L,7UL,0xC9E080C6L,97};
    struct S0 l_214 = {0x5C205D04L,0UL,-10L,0x2208L,0L,4,5L,0x7E368E80AF5BE0A8LL,1L,310};
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 1; j++)
            l_68[i][j] = 1L;
    }
    p_51 = ((safe_lshift_func_int8_t_s_s((((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((safe_mod_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((g_17.f6 <= 0UL), g_17.f3)), (l_68[0][0] = l_67))), ((safe_lshift_func_uint16_t_u_s(0xA94CL, (g_140[2] = ((((safe_sub_func_int8_t_s_s(g_27, ((((g_73 = 0x99E5BE97L) , ((l_200 = func_74(g_17.f8, g_17.f3, g_8[1], l_67, g_17.f0)) && p_52)) != p_53) , g_17.f2))) >= 1L) <= 0xB68146D7L) || l_67)))) && g_140[0]))), g_17.f5)) == p_52) <= 0xCD6BL), 4)) , 0xB0E40B48L);
    for (g_27 = 10; (g_27 == 8); g_27 = safe_sub_func_int8_t_s_s(g_27, 3))
    {
        long long l_209 = 1L;
        int l_215[5];
        int l_228 = 0xB88687C0L;
        int i;
        for (i = 0; i < 5; i++)
            l_215[i] = 0x28081904L;
        for (g_17.f0 = 4; (g_17.f0 >= 1); g_17.f0 -= 1)
        {
            int i;
            p_51 = func_98(((func_14(((((((safe_mul_func_uint8_t_u_u(g_140[g_17.f0], ((((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(func_14(l_209, l_210), (((+(((safe_unary_minus_func_int32_t_s((safe_sub_func_uint64_t_u_u(g_176[0], (p_51 && 0x3C2260EA1D606A61LL))))) < (g_140[2] != ((65527UL >= 65535UL) , p_52))) , g_174)) < p_51) <= p_53))), g_140[g_17.f0])) ^ g_131) > p_51) == p_53))) == l_209) || 0UL) , l_67) | g_17.f9) && 1L), l_214) || 0x7A761DC42FFA057DLL) || l_209), p_52, g_8[2], p_53);
            l_215[3] = p_53;
            if (g_174)
                continue;
        }
        l_214.f8 = func_95((l_228 = (l_215[3] = (safe_mul_func_int16_t_s_s(7L, ((safe_rshift_func_uint8_t_u_s(0xEDL, g_140[1])) , ((safe_div_func_int64_t_s_s(func_98((safe_mul_func_int16_t_s_s(func_95((func_95(((((+func_84(p_52, l_209, (safe_mod_func_int64_t_s_s((l_210.f9 > (((safe_sub_func_uint8_t_u_u(g_17.f3, p_51)) && l_214.f4) <= 0UL)), 0xFC1A0B69C9188007LL)))) , 18446744073709551615UL) ^ g_17.f8) > (-8L)), g_17.f7) < 18446744073709551615UL), p_51), l_210.f4)), g_17.f3, l_215[2], l_210.f0), g_73)) || p_53)))))), p_51);
    }
    return l_210.f6;
}







static unsigned func_74(unsigned p_75, char p_76, char p_77, int p_78, unsigned short p_79)
{
    const int l_88 = 0L;
    int l_136 = 0x73536473L;
    long long l_177 = (-1L);
    int l_193 = 0x401C7A7DL;
    l_177 = ((safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(p_75, func_84(((l_136 = (l_88 < (safe_mod_func_uint64_t_u_u(0UL, (g_135 = (func_91((((l_88 | (safe_mod_func_uint64_t_u_u(func_95((((func_98(p_76, (safe_div_func_uint64_t_u_u(18446744073709551606UL, (((safe_lshift_func_int16_t_s_u((((((safe_rshift_func_int16_t_s_u((g_17.f8 < (g_17.f4 = g_17.f9)), 8)) , g_17.f8) , p_77) , (-3L)) == g_17.f0), 10)) , g_17.f7) , 0xD4C7A7D0CF22777CLL))), g_73, p_77) , 1L) ^ g_17.f1) , p_79), g_17.f3), g_17.f3))) == 0x8AFF3DC6D32E1AF3LL) && p_76)) && g_17.f0)))))) >= 8UL), p_75, g_8[1]))), l_88)) & (-1L));
    for (g_135 = 0; (g_135 < 21); g_135 = safe_add_func_int16_t_s_s(g_135, 1))
    {
        const int l_188 = 0x36845AF8L;
        int l_192 = 5L;
        l_193 = (g_17.f8 = (safe_add_func_uint16_t_u_u((p_78 , (safe_add_func_int32_t_s_s(func_84(g_17.f5, ((l_136 = (safe_mod_func_uint32_t_u_u(func_91((safe_mul_func_uint8_t_u_u(g_17.f5, l_188))), (g_189 = p_76)))) >= (l_192 = (0x8AL | ((safe_sub_func_int8_t_s_s(((!l_177) , (l_188 , p_76)), g_27)) != p_75)))), l_188), g_73))), (-1L))));
        g_17.f8 = ((g_17.f3 >= (safe_div_func_uint32_t_u_u(((g_140[2] < (((safe_add_func_int64_t_s_s(p_78, (safe_mod_func_int64_t_s_s((l_136 = g_17.f9), ((p_76 & (l_188 , g_17.f8)) && g_17.f7))))) >= ((0x60L | p_79) < 0xFAD6E792L)) >= g_140[4])) | p_76), l_188))) & g_17.f0);
    }
    return p_75;
}







static unsigned char func_84(unsigned p_85, unsigned short p_86, int p_87)
{
    const unsigned char l_173 = 0x3CL;
    for (p_86 = 0; (p_86 > 52); p_86++)
    {
        int l_139 = 1L;
        int l_141[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
        int i;
        l_139 = (0x94L <= p_85);
        l_141[5] = func_91((g_140[2] = g_135));
        if ((((func_95((safe_rshift_func_int8_t_s_u(((g_140[2] ^ p_86) != p_86), 4)), (safe_div_func_uint64_t_u_u(18446744073709551610UL, (safe_sub_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((g_8[1] = 2UL), (safe_sub_func_uint8_t_u_u((func_95(g_17.f0, g_131) , ((safe_div_func_uint16_t_u_u(((g_140[4] > 0xF1185D18L) > g_17.f3), g_17.f6)) , g_17.f8)), g_131)))), l_141[5]))))) > g_17.f3) | p_87) | 0xDE1BL))
        {
            int l_158 = 0x79C20776L;
            unsigned l_175[10][10] = {{4294967287UL,0x2BD3B2F7L,0xEEFA9EDDL,0xEEFA9EDDL,0x2BD3B2F7L,4294967287UL,0xEBA09290L,4294967287UL,0x2BD3B2F7L,0xEEFA9EDDL},{0x68226855L,0UL,0x68226855L,0xEEFA9EDDL,0xEBA09290L,0xEBA09290L,0xEEFA9EDDL,0x68226855L,0UL,0x68226855L},{0x68226855L,4294967287UL,0UL,0x2BD3B2F7L,0UL,4294967287UL,0x68226855L,0x68226855L,4294967287UL,0UL},{4294967287UL,0x68226855L,0x68226855L,4294967287UL,0UL,0x2BD3B2F7L,0UL,4294967287UL,0x68226855L,0x68226855L},{0UL,0x68226855L,0xEEFA9EDDL,0xEBA09290L,0xEBA09290L,0xEEFA9EDDL,0x68226855L,0UL,0x68226855L,0xEEFA9EDDL},{0x2BD3B2F7L,4294967287UL,0xEBA09290L,4294967287UL,0x2BD3B2F7L,0xEEFA9EDDL,0xEEFA9EDDL,0x2BD3B2F7L,4294967287UL,0xEBA09290L},{0UL,0UL,0xEBA09290L,0x2BD3B2F7L,0x68226855L,0xEBA09290L,0xE160108CL,4294967287UL,4294967287UL,0xE160108CL},{0x2BD3B2F7L,0xEBA09290L,0UL,0UL,0xEBA09290L,0x2BD3B2F7L,0xE160108CL,0x2BD3B2F7L,0xEBA09290L,0UL},{0xEEFA9EDDL,4294967287UL,0xEEFA9EDDL,0UL,0xE160108CL,0xE160108CL,0UL,0xEEFA9EDDL,4294967287UL,0xEEFA9EDDL},{0xEEFA9EDDL,0x2BD3B2F7L,4294967287UL,0xEBA09290L,4294967287UL,0x2BD3B2F7L,0xEEFA9EDDL,0xEEFA9EDDL,0x2BD3B2F7L,4294967287UL}};
            int i, j;
            g_176[4] = func_98(p_85, ((safe_rshift_func_int16_t_s_u((((((l_158 = (safe_rshift_func_int16_t_s_u((-4L), 12))) ^ (safe_rshift_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((g_73 <= (g_174 = (safe_add_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((((safe_rshift_func_uint8_t_u_u((l_141[5] = (safe_rshift_func_uint16_t_u_s(((safe_add_func_uint32_t_u_u((g_17.f9 = 0x9DA6E5C4L), p_85)) <= (0L == p_87)), g_131))), func_95(l_173, l_173))) <= p_86) || p_85) , l_141[6]), g_17.f8)), 4L)))), 1L)), l_175[2][5]))) , 1L) >= 0L) , g_27), 5)) > p_85), g_17.f4, g_131);
        }
        else
        {
            for (g_17.f4 = 6; (g_17.f4 >= 1); g_17.f4 -= 1)
            {
                int i;
                return g_8[g_17.f4];
            }
        }
    }
    return p_86;
}







static const int func_91(unsigned char p_92)
{
    char l_110 = 0L;
    struct S0 l_113 = {0x3456A020L,0x03L,0xA2L,0L,0x8D72L,8,-1L,0x45E95938E44D0B28LL,3L,337};
    int l_132[1][4][2] = {{{0x1B0FF881L,0x1B0FF881L},{1L,0x1B0FF881L},{0x1B0FF881L,1L},{0x1B0FF881L,0x1B0FF881L}}};
    int i, j, k;
    g_17.f0 = func_98(g_17.f8, p_92, (l_110 | (func_98(func_98((p_92 < (p_92 == (safe_sub_func_uint16_t_u_u((g_17.f4 == g_17.f5), 65533UL)))), p_92, p_92, p_92), g_8[0], l_110, g_8[0]) , 65534UL)), l_110);
    l_132[0][0][0] = (((g_131 = (l_113 , ((!l_113.f5) , ((safe_mul_func_int8_t_s_s(func_98((((p_92 = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((((+(l_113.f8 = (safe_div_func_int64_t_s_s((safe_mod_func_uint32_t_u_u(p_92, 0x580C8C66L)), 18446744073709551615UL)))) & func_98((safe_rshift_func_int16_t_s_s(p_92, g_27)), g_17.f4, ((((func_98(((((safe_lshift_func_int8_t_s_s((((l_113.f0 = (safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(0x5095L)) , 0L), l_113.f7))) | g_17.f5) <= l_113.f9), p_92)) , p_92) == g_17.f2) ^ p_92), l_113.f5, g_17.f7, p_92) | g_73) == 18446744073709551614UL) || g_17.f1) > l_113.f2), p_92)) >= l_113.f6), g_8[2])), g_17.f9))) ^ l_113.f4) , p_92), l_113.f5, g_27, l_113.f1), l_113.f3)) , g_8[3])))) > 65535UL) | 0UL);
    for (l_113.f0 = 22; (l_113.f0 > (-12)); l_113.f0 = safe_sub_func_int16_t_s_s(l_113.f0, 6))
    {
        l_132[0][2][0] = (l_113.f2 , func_95(p_92, p_92));
    }
    return g_8[1];
}







static unsigned long long func_95(const int p_96, long long p_97)
{
    g_17.f0 = (g_17.f1 < g_17.f4);
    return g_17.f0;
}







static unsigned func_98(unsigned p_99, unsigned p_100, unsigned char p_101, const int p_102)
{
    int l_109[5][9] = {{0L,0xB265A930L,(-1L),1L,1L,0L,0L,1L,1L},{0x7A0EAAE7L,0x04BC89C4L,0x7A0EAAE7L,(-1L),1L,0x7A0EAAE7L,0x6C8E410DL,(-9L),(-1L)},{0x7A0EAAE7L,1L,(-1L),0x7A0EAAE7L,0x04BC89C4L,0x7A0EAAE7L,(-1L),1L,0x7A0EAAE7L},{0L,1L,1L,(-1L),0xB265A930L,0L,(-1L),0x9AD9C279L,(-1L)},{(-1L),0x04BC89C4L,1L,1L,0x04BC89C4L,(-1L),0x6C8E410DL,0x9AD9C279L,1L}};
    int i, j;
    l_109[4][0] = g_8[1];
    return l_109[0][6];
}





int main (void)
{
    int i, j;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_8[i], "g_8[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_17.f0, "g_17.f0", print_hash_value);
    transparent_crc(g_17.f1, "g_17.f1", print_hash_value);
    transparent_crc(g_17.f2, "g_17.f2", print_hash_value);
    transparent_crc(g_17.f3, "g_17.f3", print_hash_value);
    transparent_crc(g_17.f4, "g_17.f4", print_hash_value);
    transparent_crc(g_17.f5, "g_17.f5", print_hash_value);
    transparent_crc(g_17.f6, "g_17.f6", print_hash_value);
    transparent_crc(g_17.f7, "g_17.f7", print_hash_value);
    transparent_crc(g_17.f8, "g_17.f8", print_hash_value);
    transparent_crc(g_17.f9, "g_17.f9", print_hash_value);
    transparent_crc(g_27, "g_27", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_140[i], "g_140[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_174, "g_174", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_176[i], "g_176[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_229.f0, "g_229.f0", print_hash_value);
    transparent_crc(g_229.f1, "g_229.f1", print_hash_value);
    transparent_crc(g_229.f2, "g_229.f2", print_hash_value);
    transparent_crc(g_229.f3, "g_229.f3", print_hash_value);
    transparent_crc(g_229.f4, "g_229.f4", print_hash_value);
    transparent_crc(g_229.f5, "g_229.f5", print_hash_value);
    transparent_crc(g_229.f6, "g_229.f6", print_hash_value);
    transparent_crc(g_229.f7, "g_229.f7", print_hash_value);
    transparent_crc(g_229.f8, "g_229.f8", print_hash_value);
    transparent_crc(g_229.f9, "g_229.f9", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_268[i], "g_268[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_313[i][j], "g_313[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_317, "g_317", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
