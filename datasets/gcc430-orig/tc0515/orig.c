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
   const unsigned long long f2;
   int f3;
   long long f4;
   short f5;
   int f6;
   const unsigned char f7;
   int f8;
};

struct S1 {
   unsigned f0;
   unsigned f1;
   long long f2;
   int f3;
};

struct S2 {
   signed f0 : 24;
   struct S1 f1;
   unsigned f2 : 5;
   unsigned f3 : 24;
   unsigned f4 : 6;
   signed f5 : 31;
};

union U3 {
   unsigned short f0;
};

union U4 {
   struct S0 f0;
   unsigned f1;
};

union U5 {
   const unsigned char f0;
};

union U6 {
   unsigned char f0;
   unsigned short f1;
};


static short g_2 = 1L;
static union U6 g_44 = {0x03L};
static int g_66 = 0x45D18A93L;
static struct S1 *g_68 = (void*)0;
static unsigned char g_69 = 0x36L;
static struct S2 g_70 = {-2822,{0UL,18446744073709551615UL,9L,0x02B8877EL},4,1543,5,-28929};
static union U6 g_108 = {254UL};
static union U5 g_122 = {0x2DL};
static union U6 *g_169 = (void*)0;
static union U6 **g_168 = &g_169;
static union U3 g_192 = {0UL};
static int *g_202 = &g_70.f1.f3;
static int * const *g_201 = &g_202;
static unsigned long long g_211 = 18446744073709551615UL;
static union U4 g_217 = {{18446744073709551610UL,0x7894F720L,0xBD958CC197FE0C69LL,0x38AFDB3CL,-1L,0x2A04L,0x263A6ABDL,0xA1L,0x156C5B6AL}};
static const struct S0 *g_246 = &g_217.f0;
static struct S2 g_256 = {-3331,{1UL,1UL,0xC0D81AC1702F4191LL,0x83F4B73FL},4,3453,5,-7682};
static const struct S1 g_258 = {4294967292UL,0x6AB12BAFL,-2L,0x7FC2B63EL};
static union U3 *g_291 = &g_192;
static union U6 g_324 = {0x8CL};
static int *g_339 = &g_66;
static union U5 **g_386 = (void*)0;
static char g_387 = 0L;
static union U5 *g_426 = (void*)0;
static struct S1 **g_575 = (void*)0;
static struct S2 *g_585 = &g_70;
static struct S2 **g_584 = &g_585;
static long long g_616 = (-1L);
static unsigned short g_641 = 65529UL;
static union U4 g_652 = {{0x1D17FD69L,0x01F3374CL,18446744073709551615UL,0x76A806F8L,0x1E1B2A03B033E1DFLL,1L,0xEA4E7BFCL,0xC2L,0x525A1324L}};
static unsigned long long g_698 = 0x15E579A47957FF9CLL;
static union U4 *g_715 = &g_652;
static union U4 **g_714 = &g_715;
static int g_737 = 0x92CC6564L;
static short g_780 = (-7L);
static unsigned g_821 = 0xD6521400L;
static union U5 g_854 = {255UL};



static unsigned func_1(void);
static unsigned char func_10(int p_11, long long p_12, unsigned p_13, union U5 p_14);
static unsigned short func_17(unsigned p_18, union U5 p_19);
static long long func_24(struct S1 p_25, const unsigned p_26);
static long long func_34(struct S1 p_35, const struct S1 p_36, const short p_37);
static struct S1 func_38(unsigned short p_39, union U6 p_40);
static union U6 func_41(union U6 p_42, union U6 p_43);
static union U6 func_45(struct S0 p_46, unsigned p_47);
static const unsigned short func_50(unsigned char p_51, unsigned char p_52, unsigned char p_53, unsigned char p_54, struct S2 p_55);
static char func_58(unsigned long long p_59, long long p_60, union U5 p_61, short p_62);
static unsigned func_1(void)
{
    char l_9 = (-5L);
    struct S1 l_27 = {0xD7D04549L,0x4B05EF13L,0x50E352601C8D535DLL,-5L};
    struct S0 l_48 = {0UL,4294967295UL,1UL,-10L,-1L,1L,0xA6825D82L,0x4AL,0x988ED9E8L};
    union U5 l_63 = {9UL};
    unsigned char l_416 = 0x48L;
    int l_679 = 0x332D7BC5L;
    int **l_683 = (void*)0;
    struct S1 l_692 = {1UL,18446744073709551612UL,0x1C490572055626E7LL,-8L};
    struct S0 *l_704 = (void*)0;
    struct S0 **l_703 = &l_704;
    struct S2 l_705 = {2971,{0xF3FAC9D1L,1UL,0xF269C366E215FC6ELL,-4L},3,3682,4,44051};
    union U3 **l_771 = &g_291;
    unsigned short l_777 = 0xBFF2L;
    union U5 **l_778 = (void*)0;
    union U6 l_779 = {1UL};
    union U5 l_787 = {0x74L};
    unsigned long long l_812 = 0x113EAF8B6FC5BFA8LL;
    unsigned l_837 = 0xAA9F0A7AL;
    const unsigned char l_855 = 0x56L;
    int *l_886 = &l_27.f3;
    if ((g_2 & ((safe_rshift_func_int8_t_s_u((((((((((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_s(l_9, (func_10((((safe_lshift_func_uint16_t_u_u(func_17(((safe_add_func_uint64_t_u_u(g_2, (((safe_add_func_int16_t_s_s((func_24(l_27, ((((safe_lshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(l_27.f3, (safe_rshift_func_int16_t_s_s((func_34(func_38(l_27.f0, func_41(g_44, func_45(l_48, ((safe_unary_minus_func_uint16_t_u(func_50((safe_mul_func_int16_t_s_s(((func_58(l_27.f2, g_2, l_63, g_2) && l_27.f1) | l_48.f2), l_48.f0)), l_27.f3, g_69, l_48.f1, g_70))) >= 18446744073709551612UL)))), g_258, g_192.f0) != g_192.f0), 14)))), 5)) || l_416) <= l_9) ^ l_48.f3)) == l_27.f1), g_211)) != l_27.f1) != 0L))) <= 0x86BAE5D8CDCA859BLL), l_63), g_258.f0)) != g_258.f3) != 1L), l_48.f0, l_48.f7, l_63) == g_258.f1))), 0xD7L)) && g_256.f1.f2) & g_652.f0.f4) < 0x609BA7A7C2C2D8BCLL) == l_679) == l_63.f0) == l_48.f5) , 1L) > 0x782119C3L), 6)) != g_258.f0)))
    {
        int l_684 = (-1L);
        union U6 l_691 = {6UL};
        struct S1 l_694 = {0x3826415CL,18446744073709551607UL,7L,1L};
        struct S1 *l_695 = (void*)0;
        for (g_217.f0.f5 = 16; (g_217.f0.f5 > 12); g_217.f0.f5--)
        {
            char l_682 = 0L;
            struct S1 *l_693 = (void*)0;
            l_694 = l_692;
            l_695 = &l_692;
            l_705.f1.f3 = (((1UL & l_682) , (func_50(g_217.f0.f2, (0L > l_694.f2), (safe_mul_func_int8_t_s_s(l_682, g_698)), (l_682 >= (safe_rshift_func_uint16_t_u_s(((((((((safe_mul_func_uint16_t_u_u(0x5ED2L, 0x09C6L)) , l_682) || l_48.f7) & g_652.f0.f4) , l_703) == &g_246) || g_217.f0.f2) & 0x5DABFF320E4D9DE7LL), 10))), l_705) && g_70.f1.f3)) < 0xB7805BE1DE8375E3LL);
        }
    }
    else
    {
        short l_706 = 0x562BL;
        int *l_707 = &g_217.f0.f8;
        int **l_708 = &g_202;
        union U6 *l_713 = &g_44;
        union U5 l_743 = {0x38L};
        union U6 ***l_744 = &g_168;
        struct S2 l_745 = {993,{4294967295UL,0UL,0x72480F4AC22469E6LL,0x45D01E6AL},0,3569,6,45962};
        (*l_707) = l_706;
        (*l_708) = l_707;
        (*l_707) = (safe_mod_func_uint8_t_u_u(g_652.f0.f2, (((*l_707) > g_44.f0) ^ 1UL)));
        if ((*l_707))
        {
            union U5 *l_711 = &g_122;
            union U5 **l_712 = &g_426;
            (*g_168) = &g_44;
            (*l_712) = l_711;
        }
        else
        {
            union U4 ***l_716 = &g_714;
            union U3 *l_719 = (void*)0;
            int **l_725 = &l_707;
            union U6 *l_747 = &g_324;
            struct S1 l_748 = {1UL,0UL,2L,0xD3363C11L};
            unsigned l_754 = 8UL;
            int l_764 = 3L;
            (*g_168) = l_713;
            (*l_716) = g_714;
            for (l_48.f3 = (-15); (l_48.f3 <= (-22)); --l_48.f3)
            {
                union U3 **l_720 = (void*)0;
                const int l_732 = 0xEA0D424DL;
                struct S2 l_739 = {315,{3UL,0x78CB8B3DL,0xB2564EF7D896982CLL,8L},1,2699,4,3442};
                union U3 *l_742 = &g_192;
                struct S2 l_755 = {3399,{5UL,6UL,1L,0L},0,3106,7,33869};
                g_291 = l_719;
                for (g_70.f1.f1 = 0; (g_70.f1.f1 <= 2); ++g_70.f1.f1)
                {
                    unsigned l_738 = 1UL;
                    union U6 *l_746 = &g_324;
                    union U4 l_752 = {{5UL,0xBC876727L,0xDD677BA23CF17912LL,5L,0xE293242C430ABA83LL,0x773AL,-1L,0xF1L,0xA9F3E912L}};
                    struct S2 l_773 = {1588,{7UL,18446744073709551607UL,0L,0xBBDEF2B3L},3,994,5,-33483};
                }
            }
            (*g_585) = (*g_585);
        }
    }
    if ((safe_lshift_func_int8_t_s_u(((((l_777 , &g_426) != l_778) != g_652.f0.f2) | (g_780 != g_256.f3)), 4)))
    {
        unsigned l_783 = 4294967290UL;
        unsigned l_786 = 0xF5365435L;
        struct S0 *l_796 = &g_652.f0;
        struct S2 l_797 = {2237,{1UL,4UL,1L,0x1B26C835L},3,2574,3,-42833};
        int *l_816 = &g_217.f0.f8;
        union U5 l_831 = {247UL};
        const struct S2 **l_877 = (void*)0;
        if (func_24(l_27, g_70.f1.f3))
        {
            struct S0 *l_798 = &g_217.f0;
            int l_799 = 1L;
            short l_836 = 0x8598L;
            struct S2 l_839 = {3243,{5UL,1UL,5L,0x848CB5ADL},3,1091,1,35035};
            for (l_705.f1.f1 = 0; (l_705.f1.f1 <= 11); l_705.f1.f1 = safe_add_func_uint32_t_u_u(l_705.f1.f1, 1))
            {
                short l_790 = 0L;
                unsigned l_793 = 0x5FC312F9L;
                struct S1 *l_806 = &l_27;
                int *l_817 = &g_652.f0.f8;
                struct S2 l_838 = {-1142,{0xE683EF88L,1UL,0x0010A794DB4D6AE3LL,9L},2,1230,2,-40126};
                if (((l_790 != (safe_mod_func_int64_t_s_s(6L, g_70.f2))) ^ l_793))
                {
                    struct S1 l_800 = {4294967291UL,0UL,-8L,0xB0515539L};
                    struct S1 *l_811 = &l_705.f1;
                    union U5 l_813 = {0x97L};
                    char l_814 = 0xC6L;
                    if (((safe_lshift_func_uint16_t_u_s((((g_256.f2 ^ ((l_796 != ((l_797 , g_256.f1) , l_798)) && l_799)) < func_24(l_800, g_217.f0.f0)) , l_800.f0), 4)) ^ 1UL))
                    {
                        if ((*g_339))
                            break;
                    }
                    else
                    {
                        union U5 **l_801 = &g_426;
                        (*l_801) = (void*)0;
                        (*l_806) = (*l_806);
                    }
                }
                else
                {
                    int **l_815 = &g_339;
                    union U3 *l_818 = &g_192;
                    (*l_815) = &g_737;
                    (*l_806) = g_256.f1;
                    l_817 = l_816;
                    (*l_771) = l_818;
                }
                for (l_790 = 9; (l_790 <= 7); l_790 = safe_sub_func_int32_t_s_s(l_790, 5))
                {
                    int **l_822 = &l_816;
                    const struct S1 *l_824 = &l_797.f1;
                    const struct S1 **l_823 = &l_824;
                    (*g_339) = (g_821 && g_256.f5);
                    (*l_822) = &g_737;
                    (*l_823) = &g_258;
                    return g_108.f0;
                }
                (*l_816) = ((safe_sub_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mul_func_int8_t_s_s(0L, func_17(g_256.f3, l_831))), l_799)), ((func_50(g_258.f3, ((*l_796) , (safe_sub_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(g_2, l_836)), l_837))), l_836, g_70.f4, l_838) == 1UL) , g_652.f0.f1))) && 0UL);
                l_839 = l_797;
            }
            (*l_771) = &g_192;
            (*g_585) = l_705;
        }
        else
        {
            int l_840 = 0x4E0B710BL;
            union U5 l_843 = {0xE0L};
            union U6 l_856 = {255UL};
            struct S1 *l_857 = &l_692;
            int *l_858 = &g_737;
            union U3 ** const *l_863 = &l_771;
            (*l_857) = l_797.f1;
            (*l_858) = (*l_816);
            for (l_705.f1.f3 = 0; (l_705.f1.f3 == (-1)); l_705.f1.f3--)
            {
                struct S0 l_870 = {18446744073709551610UL,2UL,0xEB3E768A9D975504LL,-1L,0xCE8A35E01B47ED29LL,0x60ACL,0x5D1E132BL,247UL,0x83211EB3L};
                union U4 l_871 = {{18446744073709551612UL,4294967295UL,1UL,5L,0x0C336CF835F7E694LL,1L,0x96FF5025L,8UL,0L}};
                unsigned long long l_872 = 0x10EE46BD29FA814DLL;
                union U6 l_876 = {0UL};
                int **l_879 = &g_339;
                if ((safe_sub_func_int8_t_s_s((+0x4EL), g_217.f0.f3)))
                {
                    (*l_857) = l_797.f1;
                }
                else
                {
                    union U3 * const *l_865 = &g_291;
                    union U3 * const ** const l_864 = &l_865;
                    int **l_875 = &l_816;
                    if (((g_387 > (l_863 != l_864)) & (safe_mod_func_uint16_t_u_u((g_256.f5 || (safe_rshift_func_uint8_t_u_s(g_217.f0.f0, 0))), (0xA3L & (((l_870 , l_871) , l_870.f0) || (-1L)))))))
                    {
                        union U5 **l_873 = (void*)0;
                        (*l_858) = l_872;
                        g_426 = &g_854;
                    }
                    else
                    {
                        struct S0 l_874 = {0xB1A73A97L,4294967287UL,18446744073709551615UL,1L,0x697A329D988731D3LL,-7L,-6L,0x4DL,0x6B54AE6CL};
                        (*l_858) = l_870.f7;
                        (*l_858) = (l_874 , l_874.f4);
                        g_202 = l_816;
                    }
                    (*l_875) = l_858;
                    (**l_875) = (*l_816);
                    if ((*g_339))
                    {
                        (*l_857) = g_70.f1;
                        return g_256.f5;
                    }
                    else
                    {
                        const struct S2 ***l_878 = &l_877;
                        (*l_878) = l_877;
                        if ((*g_339))
                            continue;
                    }
                }
                (*l_703) = (void*)0;
                (*g_168) = &g_324;
                (*l_879) = &g_66;
            }
            (*g_585) = (**g_584);
        }
    }
    else
    {
        unsigned l_885 = 4294967291UL;
        for (l_837 = 0; (l_837 > 28); l_837 = safe_add_func_int8_t_s_s(l_837, 8))
        {
            for (g_217.f0.f0 = 28; (g_217.f0.f0 >= 25); g_217.f0.f0--)
            {
                short l_884 = 0xC2BCL;
                l_885 = (l_884 , g_641);
            }
        }
        l_886 = &g_66;
        return g_324.f0;
    }
    return g_652.f0.f6;
}







static unsigned char func_10(int p_11, long long p_12, unsigned p_13, union U5 p_14)
{
    union U5 **l_425 = (void*)0;
    int **l_429 = &g_202;
    union U6 l_432 = {255UL};
    unsigned short l_437 = 0xAC8DL;
    union U5 l_438 = {2UL};
    short l_448 = (-1L);
    struct S2 l_451 = {1343,{1UL,0x0E5B1A13L,-1L,0x57200246L},4,4089,2,-25830};
    unsigned short l_496 = 0xDA0BL;
    struct S0 l_542 = {0x782C03D9L,4294967289UL,18446744073709551611UL,0xE2F1F044L,1L,4L,0x1EF845D3L,9UL,0xB77EC762L};
    union U4 l_610 = {{18446744073709551612UL,0UL,0x1297D01C48E6A949LL,0xF706E86DL,-1L,-1L,-4L,0x0AL,0x1E2ACB71L}};
    struct S1 ** const l_646 = &g_68;
    g_426 = &p_14;
    (**g_201) = ((safe_rshift_func_uint16_t_u_s(g_70.f2, 11)) , ((g_44.f0 <= (((*g_426) , &g_202) == l_429)) >= ((func_58((**l_429), (safe_mul_func_int8_t_s_s(0xC0L, ((*g_202) >= (l_432 , g_217.f0.f5)))), p_14, p_11) > (-1L)) < p_13)));
    if ((safe_sub_func_uint8_t_u_u((0x15L || (safe_mul_func_uint8_t_u_u(((func_17(l_437, l_438) , (safe_unary_minus_func_int32_t_s(((safe_lshift_func_uint8_t_u_s((&g_258 == &g_258), 7)) == 9UL)))) , (((safe_rshift_func_uint16_t_u_u(0xE1B7L, 4)) || (g_70.f3 > 0x8CL)) < 0x9FF9L)), 7L))), 255UL)))
    {
        union U4 l_445 = {{0x2D7A865FL,1UL,18446744073709551615UL,1L,0xD96D27C4B87A6C44LL,0xCC03L,0x92EB2810L,0xB2L,0x758C79FCL}};
        (*l_429) = &p_11;
        (*g_168) = &l_432;
        (**g_201) = (safe_unary_minus_func_uint32_t_u(g_217.f0.f1));
        if ((((((void*)0 == (*g_168)) >= g_192.f0) != (l_445 , p_11)) , ((safe_mul_func_int16_t_s_s(l_448, (-1L))) == (g_256.f0 , ((((!0xCCL) >= p_12) ^ g_217.f0.f1) == g_217.f0.f2)))))
        {
            (*l_429) = (*l_429);
        }
        else
        {
            for (g_44.f0 = 0; (g_44.f0 > 29); g_44.f0 = safe_add_func_uint64_t_u_u(g_44.f0, 1))
            {
                g_256 = l_451;
            }
        }
    }
    else
    {
        union U4 l_454 = {{18446744073709551615UL,0xAC66BF4AL,0xD43BFEEABC623973LL,0x44CB75A3L,0x8FA77A25A86136CELL,0x266EL,0x760F33F8L,0x73L,0x7C08E446L}};
        struct S2 l_457 = {2823,{9UL,3UL,0x42F48DA1B2EFBE02LL,0xD569C187L},2,3696,1,-15730};
        union U5 l_460 = {0UL};
        const union U3 l_507 = {65535UL};
        int l_526 = 0x932CC709L;
        union U6 l_533 = {0xA8L};
        int l_564 = 0x0C1E4A8EL;
        const int l_607 = 0xEE358DFEL;
        unsigned char l_615 = 0x40L;
        struct S1 *l_638 = &g_70.f1;
        struct S1 *l_648 = (void*)0;
        struct S1 ***l_678 = &g_575;
        for (p_12 = 0; (p_12 >= (-16)); p_12 = safe_sub_func_uint16_t_u_u(p_12, 7))
        {
            short l_477 = 0xC439L;
            union U6 l_485 = {0x22L};
            struct S1 *l_489 = &g_256.f1;
            int l_506 = 0xCF04D7CDL;
            unsigned l_534 = 0x776FC09FL;
            int *l_541 = &l_451.f1.f3;
            (**g_201) = (*g_339);
            if ((18446744073709551611UL > 9UL))
            {
                union U5 l_471 = {0x48L};
                const struct S0 *l_480 = (void*)0;
                union U6 l_484 = {0xD1L};
                (*l_429) = (l_454 , &p_11);
                (*g_339) = p_14.f0;
                if ((p_11 < ((((0x734C3B89E9367079LL > func_50(l_454.f0.f8, ((safe_add_func_int64_t_s_s(((((~((void*)0 == &g_192)) && g_256.f1.f1) < 0L) > (g_108 , (*g_339))), g_256.f1.f2)) != 0x85524D1772249342LL), (**l_429), g_387, l_457)) <= (-1L)) < (-2L)) != (**l_429))))
                {
                    union U3 l_476 = {1UL};
                    const struct S0 *l_478 = (void*)0;
                    (**g_201) = func_58(g_217.f0.f1, (safe_lshift_func_uint8_t_u_u((func_58(p_14.f0, l_457.f3, l_460, (p_13 != ((((safe_mod_func_uint8_t_u_u((p_11 > g_70.f5), g_256.f2)) && g_217.f0.f6) > 0x13AE37CCL) ^ g_256.f1.f0))) , (**l_429)), g_258.f0)), p_14, p_14.f0);
                    if (l_457.f1.f1)
                    {
                        const struct S0 **l_479 = (void*)0;
                        (*g_202) = (safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((0x99ABL | g_258.f2), (safe_rshift_func_uint8_t_u_u((safe_sub_func_int64_t_s_s(func_17((l_471 , (((safe_add_func_uint32_t_u_u((g_256.f3 < (((safe_add_func_int64_t_s_s((-1L), (**l_429))) , ((p_12 , (l_476 , ((**l_429) >= l_477))) < g_108.f0)) & 255UL)), 1L)) , l_477) , l_477)), (*g_426)), g_2)), 2)))), 10));
                        l_480 = l_478;
                    }
                    else
                    {
                        union U4 *l_482 = &l_454;
                        union U4 **l_481 = &l_482;
                        (*l_481) = &g_217;
                        (*l_481) = &g_217;
                    }
                }
                else
                {
                    struct S2 *l_483 = &l_457;
                    struct S1 *l_488 = (void*)0;
                    const int l_495 = 0x8EBE7B18L;
                    int l_497 = (-1L);
                    union U3 **l_499 = &g_291;
                    (*l_483) = g_256;
                    if ((**g_201))
                    {
                        struct S1 *l_486 = (void*)0;
                        struct S1 *l_487 = &g_256.f1;
                        (*l_487) = func_38(g_324.f0, func_41(l_484, func_41(l_484, l_485)));
                        l_489 = l_488;
                        (*l_487) = (p_12 , l_457.f1);
                        return g_70.f5;
                    }
                    else
                    {
                        const union U5 *l_491 = &l_471;
                        const union U5 **l_490 = &l_491;
                        (*l_490) = (void*)0;
                        if (p_12)
                            continue;
                    }
                    if ((safe_mul_func_uint8_t_u_u(g_324.f0, (safe_unary_minus_func_int32_t_s(l_495)))))
                    {
                        (*g_339) = l_496;
                        l_497 = (**l_429);
                        (*l_489) = (*l_489);
                    }
                    else
                    {
                        union U3 **l_498 = &g_291;
                        (*g_339) = 0xA542B23AL;
                        l_499 = l_498;
                    }
                }
                g_256 = l_451;
            }
            else
            {
                struct S2 l_500 = {2664,{4294967293UL,1UL,-3L,-1L},2,3279,1,20242};
                l_500 = g_70;
                if (((safe_mod_func_uint32_t_u_u(0xA858F69AL, p_12)) > (safe_mul_func_uint16_t_u_u((p_12 , p_14.f0), g_2))))
                {
                    (*g_339) = 0xD1874AA7L;
                }
                else
                {
                    int **l_505 = &g_339;
                    (*l_505) = (*g_201);
                    (**l_505) = l_506;
                    if (p_11)
                        break;
                }
            }
            if ((l_507 , (*g_202)))
            {
                int **l_508 = &g_202;
                struct S1 l_509 = {0xAFA22766L,0x41D7D2CBL,0x06A14611E9D9F510LL,0xA31140BBL};
                struct S1 *l_512 = (void*)0;
                (*l_508) = (g_256 , (*g_201));
                if ((**g_201))
                    continue;
                l_457.f5 = l_477;
                if (func_24(l_509, g_217.f0.f3))
                {
                    (*l_429) = (*l_429);
                    for (g_108.f1 = (-15); (g_108.f1 > 4); g_108.f1 = safe_add_func_int16_t_s_s(g_108.f1, 7))
                    {
                        l_512 = (void*)0;
                    }
                }
                else
                {
                    if ((*g_339))
                        break;
                }
            }
            else
            {
                struct S1 l_513 = {0x8167B324L,0xC5392C9BL,8L,1L};
                struct S2 l_535 = {355,{0x0E65FA4FL,0x2AA8EDD0L,1L,0xF2E29E07L},3,3920,6,11830};
                struct S2 *l_536 = &g_70;
                if (func_24(l_513, p_11))
                {
                    l_457 = g_70;
                }
                else
                {
                    short l_527 = (-9L);
                    struct S2 *l_530 = &g_70;
                    if ((((safe_mul_func_uint8_t_u_u((254UL != (safe_sub_func_int32_t_s_s(((safe_sub_func_int32_t_s_s((((p_12 < (safe_mod_func_int16_t_s_s(func_34(l_457.f1, (*l_489), g_256.f3), l_457.f4))) != p_12) >= ((((safe_sub_func_int64_t_s_s(((safe_sub_func_int8_t_s_s(l_454.f0.f2, l_457.f1.f3)) || 0x38L), p_13)) != l_526) , 0x5AB7DD21L) == p_12)), g_211)) <= (-5L)), p_12))), p_12)) != g_387) , p_13))
                    {
                        (*g_202) = l_527;
                    }
                    else
                    {
                        int *l_528 = (void*)0;
                        struct S2 *l_529 = &g_70;
                        (*l_429) = l_528;
                        (*l_529) = l_457;
                    }
                    if (p_12)
                    {
                        struct S2 **l_531 = &l_530;
                        int *l_532 = &l_513.f3;
                        (*l_531) = l_530;
                        (*l_429) = &p_11;
                        (*l_429) = l_532;
                    }
                    else
                    {
                        return l_485.f0;
                    }
                }
                (*l_536) = (func_38((**l_429), l_533) , (((+p_11) ^ (l_513.f2 <= l_534)) , l_535));
            }
            if (p_11)
            {
                union U3 **l_538 = &g_291;
                union U3 ***l_537 = &l_538;
                (*l_537) = &g_291;
                for (g_217.f0.f0 = 0; (g_217.f0.f0 < 55); g_217.f0.f0 = safe_add_func_uint64_t_u_u(g_217.f0.f0, 1))
                {
                    if (p_12)
                        break;
                    (*l_429) = &p_11;
                }
                (*l_429) = &p_11;
            }
            else
            {
                (*l_429) = l_541;
                if (p_12)
                    continue;
            }
        }
        if ((*g_202))
        {
            union U5 l_547 = {0UL};
            union U6 l_563 = {0x42L};
            struct S2 l_565 = {-1759,{0x53093049L,0x0F706219L,0xD4FBA3FA40E25A2CLL,0x3E8ECB23L},2,2129,4,30285};
            const int *l_567 = (void*)0;
            struct S1 **l_572 = (void*)0;
            union U3 l_588 = {0x1DE5L};
            (*l_429) = (l_542 , &p_11);
            if ((func_58((safe_mul_func_uint16_t_u_u(((p_13 , 1L) >= (g_217.f0.f3 != (**l_429))), (safe_rshift_func_uint8_t_u_s(p_12, 6)))), l_457.f1.f3, l_547, (safe_add_func_int8_t_s_s(((*g_202) & (safe_add_func_int64_t_s_s(l_454.f0.f8, g_70.f5))), (-4L)))) ^ 0x29C2775E9498EA03LL))
            {
                char l_558 = 0x0CL;
                for (g_387 = 0; (g_387 == 28); g_387 = safe_add_func_int16_t_s_s(g_387, 8))
                {
                    union U3 **l_568 = &g_291;
                    for (g_256.f1.f0 = 0; (g_256.f1.f0 > 50); g_256.f1.f0++)
                    {
                        (*l_429) = &p_11;
                    }
                    if ((func_50(g_70.f1.f2, (+(l_547 , (p_11 >= (safe_mul_func_uint16_t_u_u((l_558 != (0x02L > (**l_429))), 65533UL))))), ((safe_add_func_int8_t_s_s(p_14.f0, (safe_lshift_func_int8_t_s_u(((func_58((l_563 , g_70.f1.f1), l_454.f0.f1, (*g_426), p_13) > g_258.f1) <= g_217.f0.f7), l_547.f0)))) ^ g_69), l_564, l_565) < 1UL))
                    {
                        const int *l_566 = &g_256.f1.f3;
                        if (p_12)
                            break;
                        l_567 = l_566;
                        (*g_339) = ((l_457.f1 , l_568) == (void*)0);
                        if ((**l_429))
                            continue;
                    }
                    else
                    {
                        return p_13;
                    }
                }
            }
            else
            {
                return p_14.f0;
            }
            for (g_217.f0.f4 = (-26); (g_217.f0.f4 < 18); ++g_217.f0.f4)
            {
                union U3 l_586 = {0x27D7L};
                struct S2 l_587 = {1450,{0x314E77A4L,18446744073709551615UL,1L,5L},2,2746,3,-32512};
                union U5 l_602 = {0xF6L};
                union U4 *l_620 = &g_217;
                union U4 ** const l_619 = &l_620;
                if ((l_454.f0.f2 | (l_533 , (l_451.f1 , (0x7D09F388L >= ((func_45((*g_246), p_14.f0) , (&p_11 == l_567)) , p_13))))))
                {
                    const int l_576 = 0x042CEE7FL;
                    struct S1 *l_577 = (void*)0;
                    struct S1 *l_578 = (void*)0;
                    struct S1 *l_579 = &l_457.f1;
                    if ((*g_339))
                    {
                        int **l_571 = &g_339;
                        (*l_571) = (*g_201);
                        (*l_429) = &p_11;
                    }
                    else
                    {
                        (**l_429) = p_11;
                    }
                    if (p_14.f0)
                    {
                        struct S1 ***l_573 = (void*)0;
                        struct S1 ***l_574 = (void*)0;
                        g_575 = l_572;
                    }
                    else
                    {
                        if (l_576)
                            break;
                        g_339 = &p_11;
                    }
                    (*l_579) = func_38(g_108.f0, l_533);
                    if ((l_576 != func_50(l_564, (safe_rshift_func_uint8_t_u_u((((safe_mod_func_int32_t_s_s((0x5F26CE7FAF82C61DLL == func_50(p_12, g_70.f2, g_217.f0.f8, (g_584 != (l_586 , &g_585)), (**g_584))), l_576)) ^ (**g_201)) <= g_217.f0.f3), g_70.f4)), g_217.f0.f7, l_460.f0, l_587)))
                    {
                        if ((**l_429))
                            break;
                    }
                    else
                    {
                        unsigned short l_589 = 9UL;
                        (*g_202) = (l_588 , ((p_11 , (p_11 != ((((l_587.f4 == l_589) | (safe_lshift_func_int16_t_s_s(g_324.f0, 1))) <= ((~(((safe_mod_func_uint16_t_u_u(g_217.f0.f2, (safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((g_256.f1.f2 != func_24(l_587.f1, l_589)), p_11)), 9)))) > g_258.f0) && (-1L))) <= (**g_201))) >= l_576))) | p_12));
                        return p_11;
                    }
                }
                else
                {
                    const short l_598 = (-5L);
                    struct S1 l_599 = {0UL,3UL,0x65954E45C702DA04LL,-1L};
                    l_587.f5 = (l_598 && l_598);
                    l_599.f3 = ((l_599 , p_11) && (safe_mod_func_int32_t_s_s((((**l_429) & ((l_602 , (safe_mul_func_uint16_t_u_u((!0x2AFAL), ((safe_rshift_func_int8_t_s_u((((((l_607 , l_533.f0) | func_50((safe_sub_func_int64_t_s_s((l_610 , (safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(g_192.f0, 0x18L)), g_256.f3))), g_387)), p_13, l_615, g_70.f0, (**g_584))) && g_616) == (**g_201)) & (-1L)), 6)) , 65535UL)))) > (*g_339))) && 0x2CA9L), l_598)));
                }
                for (g_108.f0 = 4; (g_108.f0 > 8); g_108.f0++)
                {
                    union U4 **l_622 = &l_620;
                    union U4 ***l_621 = &l_622;
                    int **l_623 = (void*)0;
                    int **l_624 = &g_202;
                    (*l_621) = l_619;
                    (*l_624) = (*g_201);
                }
                if (p_13)
                {
                    struct S2 l_625 = {187,{3UL,0x19B48E57L,1L,0x0222A775L},1,788,3,36419};
                    (*g_585) = l_625;
                }
                else
                {
                    return g_324.f0;
                }
            }
        }
        else
        {
            unsigned l_655 = 0x133D2EA7L;
            int * const l_674 = (void*)0;
            if ((func_50(p_14.f0, ((*g_291) , (((1L >= (safe_mul_func_int8_t_s_s(((void*)0 == &g_291), ((safe_add_func_int8_t_s_s(((l_454.f0.f4 != (**l_429)) || (safe_sub_func_uint16_t_u_u((func_17((((p_13 , ((safe_mod_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(p_14.f0, 7L)) | p_12), p_11)) != 2L)) || 0L) , 1UL), (*g_426)) > g_70.f5), 1L))), g_256.f1.f2)) , 0x64L)))) < (-5L)) > p_14.f0)), l_457.f4, g_192.f0, l_457) <= l_454.f0.f5))
            {
                int **l_636 = (void*)0;
                int **l_637 = &g_202;
                struct S1 **l_639 = &g_68;
                int **l_640 = &g_202;
                (*l_637) = ((*g_426) , (*g_201));
                (*l_639) = (g_70.f3 , l_638);
                (*l_637) = &p_11;
                (*l_640) = (*g_201);
            }
            else
            {
                const struct S1 *l_642 = (void*)0;
                int l_645 = 0L;
                if (g_641)
                {
                    unsigned long long l_647 = 1UL;
                    if ((((l_460 , l_642) != ((safe_sub_func_int8_t_s_s(l_645, ((l_646 != (void*)0) || (0xDBFB2517L != ((((l_647 < (**l_429)) & (g_256.f3 && 4UL)) || g_192.f0) || l_645))))) , l_648)) | g_256.f3))
                    {
                        struct S0 *l_649 = (void*)0;
                        struct S0 **l_650 = &l_649;
                        union U4 *l_651 = &g_652;
                        (*l_650) = l_649;
                        l_651 = &g_217;
                        (**g_584) = (*g_585);
                        return l_647;
                    }
                    else
                    {
                        const unsigned l_662 = 0xFAF2E136L;
                        int *l_663 = &l_454.f0.f3;
                        (**l_429) = (safe_mul_func_uint16_t_u_u((func_17(((!p_13) && l_655), ((*g_246) , p_14)) > (safe_mul_func_int16_t_s_s((safe_mod_func_int16_t_s_s(l_655, p_14.f0)), (safe_rshift_func_uint16_t_u_u(l_645, ((0x4B1BCD15L == l_662) ^ 0x960DL)))))), l_655));
                        l_663 = &l_645;
                    }
                }
                else
                {
                    unsigned long long l_664 = 0x1EFF5A6BA5B4D4C8LL;
                    int *l_665 = &g_217.f0.f8;
                    struct S1 l_666 = {0x37BF76D0L,4UL,0x432AE54056596CF2LL,0x69A21F12L};
                    (**g_201) = 0x3C5FEE60L;
                    if (l_664)
                    {
                        union U4 *l_667 = &g_652;
                        union U4 **l_668 = &l_667;
                        (*l_429) = l_665;
                        (*l_638) = l_666;
                        (*l_668) = l_667;
                    }
                    else
                    {
                        (*g_339) = ((safe_sub_func_uint32_t_u_u(0x45F79284L, g_387)) || (safe_mod_func_uint8_t_u_u(p_14.f0, g_70.f0)));
                        return p_14.f0;
                    }
                    if ((**g_201))
                    {
                        (*l_646) = &l_666;
                    }
                    else
                    {
                        int **l_673 = &g_202;
                        int **l_675 = &g_202;
                        (*l_673) = (*g_201);
                        (**l_673) = (g_652.f0.f5 < p_11);
                        (*l_675) = l_674;
                    }
                }
                return g_652.f0.f5;
            }
            (*g_202) = (safe_sub_func_uint8_t_u_u(l_454.f0.f6, (-9L)));
        }
        (*l_678) = &g_68;
        (*g_339) = p_14.f0;
    }
    return g_217.f0.f7;
}







static unsigned short func_17(unsigned p_18, union U5 p_19)
{
    char l_421 = 8L;
    struct S2 * const l_422 = &g_256;
    int *l_423 = (void*)0;
    int **l_424 = &l_423;
    (*g_339) = (safe_sub_func_uint8_t_u_u(l_421, (&g_256 == l_422)));
    (*l_424) = l_423;
    return p_18;
}







static long long func_24(struct S1 p_25, const unsigned p_26)
{
    int *l_417 = &g_217.f0.f3;
    int **l_418 = &g_339;
    (*l_418) = l_417;
    return g_192.f0;
}







static long long func_34(struct S1 p_35, const struct S1 p_36, const short p_37)
{
    struct S0 *l_259 = (void*)0;
    struct S0 **l_260 = &l_259;
    int *l_272 = (void*)0;
    struct S2 l_275 = {-3894,{0x01DDEBC7L,0UL,0x07FCD342D46C6D65LL,0x5946B526L},3,2244,0,31538};
    struct S2 **l_277 = (void*)0;
    union U5 l_302 = {0xB0L};
    union U5 *l_377 = (void*)0;
    union U5 **l_376 = &l_377;
    char l_400 = 0L;
    (*l_260) = l_259;
    for (g_44.f0 = 0; (g_44.f0 != 50); ++g_44.f0)
    {
        struct S1 **l_268 = &g_68;
        int *l_273 = &g_66;
        short l_286 = (-10L);
        struct S2 *l_287 = (void*)0;
        union U3 *l_313 = (void*)0;
        union U5 l_315 = {0xB6L};
        union U6 l_327 = {0x6FL};
        struct S2 l_331 = {3003,{4294967291UL,2UL,0x9F56B134243399B6LL,0x084324CCL},3,1047,0,18973};
        union U6 **l_383 = (void*)0;
        int **l_388 = (void*)0;
        int **l_389 = &l_273;
        for (g_69 = 0; (g_69 > 56); g_69 = safe_add_func_int64_t_s_s(g_69, 9))
        {
            union U3 l_269 = {65532UL};
            for (g_217.f0.f0 = (-18); (g_217.f0.f0 <= 12); g_217.f0.f0 = safe_add_func_int32_t_s_s(g_217.f0.f0, 7))
            {
                struct S1 *l_267 = &g_256.f1;
                (*l_267) = p_36;
                if ((*g_202))
                    break;
                if ((l_268 == (g_258 , l_268)))
                {
                    const struct S2 l_270 = {-2268,{4294967292UL,0UL,0x3B305B964CB03ED4LL,0L},4,873,5,10236};
                    struct S2 *l_271 = &g_70;
                    struct S2 **l_274 = &l_271;
                    (*l_271) = (l_269 , l_270);
                    l_273 = l_272;
                    (*l_274) = &g_256;
                }
                else
                {
                    struct S2 *l_276 = &g_256;
                    (*l_276) = l_275;
                }
                (*g_168) = (*g_168);
            }
        }
        if ((g_122.f0 == g_2))
        {
            unsigned char l_295 = 0UL;
            union U5 l_329 = {0x18L};
            int *l_350 = &g_256.f1.f3;
            struct S2 l_351 = {928,{0xB993E773L,0xFFB65458L,1L,0x399761EEL},4,3418,5,-34095};
            if ((l_277 == l_277))
            {
                int l_284 = 0x161EE038L;
                char l_319 = (-7L);
                struct S1 l_334 = {0x43FBC657L,18446744073709551615UL,3L,-1L};
                if ((!p_35.f1))
                {
                    unsigned l_285 = 5UL;
                    unsigned long long l_316 = 1UL;
                    int l_330 = (-5L);
                    if ((safe_add_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s(0x48L, ((safe_add_func_int16_t_s_s((((l_284 , &g_256) == &g_256) | p_35.f1), p_35.f0)) <= l_285))) == ((l_286 == g_258.f1) , 0x2CAF75AB8D4A8BD8LL)), p_36.f0)))
                    {
                        struct S2 **l_288 = (void*)0;
                        struct S2 **l_289 = &l_287;
                        union U3 *l_290 = &g_192;
                        int l_292 = 0x48BA4317L;
                        (*l_289) = l_287;
                        g_291 = l_290;
                        p_35.f3 = ((!l_292) & (+(0x2F8AL >= (g_70.f5 == (p_35.f2 || (safe_mul_func_uint8_t_u_u((l_295 & (safe_lshift_func_int8_t_s_u(g_70.f2, (safe_add_func_int64_t_s_s((safe_rshift_func_int16_t_s_s(p_37, 1)), (p_35.f3 | func_58(p_35.f0, p_35.f1, l_302, l_285))))))), 7L)))))));
                    }
                    else
                    {
                        unsigned l_314 = 0xAE9904F2L;
                        (**g_201) = (safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s(l_295, g_256.f1.f2)), (safe_lshift_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(func_58(l_285, ((safe_lshift_func_int8_t_s_u(((void*)0 != l_313), (l_314 < (!(g_217 , (65532UL != (g_217 , g_256.f2))))))) > g_258.f1), l_315, g_70.f1.f1), g_70.f1.f1)) < l_316), 5))));
                        (**g_201) = (-1L);
                        (**g_201) = (0x1A02L >= (safe_sub_func_int16_t_s_s(func_50(g_217.f0.f3, (((((p_35.f1 && l_319) < (l_295 == (safe_add_func_int32_t_s_s(func_58((+(safe_lshift_func_uint8_t_u_u((!(g_324 , g_217.f0.f4)), 4))), g_256.f1.f2, l_315, p_37), p_35.f1)))) || g_256.f3) > (-4L)) , 0UL), l_314, g_258.f2, g_256), g_2)));
                    }
                    for (p_35.f3 = 27; (p_35.f3 >= 22); p_35.f3 = safe_sub_func_uint16_t_u_u(p_35.f3, 7))
                    {
                        int l_328 = (-9L);
                        (*g_202) = (l_327 , func_58(p_36.f0, l_328, l_329, ((void*)0 == &g_256)));
                        l_330 = p_35.f2;
                        l_331 = g_256;
                    }
                    if ((**g_201))
                        continue;
                    (*g_202) = p_36.f3;
                }
                else
                {
                    struct S1 *l_335 = &l_331.f1;
                    (*g_202) = 0x666AEDDCL;
                    for (g_217.f0.f8 = 17; (g_217.f0.f8 >= (-9)); g_217.f0.f8 = safe_sub_func_int64_t_s_s(g_217.f0.f8, 6))
                    {
                        return p_35.f0;
                    }
                    (*l_335) = l_334;
                    if (p_36.f1)
                        break;
                }
            }
            else
            {
                int **l_336 = &g_202;
                if (p_36.f1)
                    break;
                (*l_336) = (*g_201);
                if (p_36.f3)
                    break;
            }
            for (g_70.f1.f2 = 0; (g_70.f1.f2 != (-11)); --g_70.f1.f2)
            {
                int **l_340 = (void*)0;
                int **l_341 = &g_339;
                (*l_341) = (p_37 , g_339);
                (**g_201) = (l_295 , (safe_sub_func_uint32_t_u_u(func_58(g_70.f4, g_217.f0.f8, l_315, p_36.f3), ((void*)0 != &g_168))));
            }
            for (l_327.f0 = 26; (l_327.f0 <= 5); l_327.f0 = safe_sub_func_int64_t_s_s(l_327.f0, 1))
            {
                short l_371 = 0xFB16L;
                if (((*g_291) , p_36.f0))
                {
                    short l_348 = 0xB1E4L;
                    union U5 *l_354 = (void*)0;
                    union U5 **l_353 = &l_354;
                    for (g_217.f0.f3 = 0; (g_217.f0.f3 <= (-23)); g_217.f0.f3--)
                    {
                        struct S0 l_349 = {0x64AADFF8L,0xFAA6907DL,18446744073709551615UL,0xCBC2341EL,0x51419D0CF3FB13B5LL,0xE8F3L,0x9F1200FAL,0xECL,0x111F079EL};
                        unsigned short l_352 = 0x2DFCL;
                        l_348 = ((&g_258 != (void*)0) | (g_217.f0.f7 , (!(!1L))));
                        (*g_202) = (func_50(g_70.f0, p_36.f3, ((l_349 , g_258.f1) ^ p_36.f2), ((*g_201) != l_350), l_351) , l_352);
                    }
                    (**g_201) = 3L;
                    (*l_353) = &l_329;
                    return l_348;
                }
                else
                {
                    char l_372 = 0xE1L;
                    struct S1 *l_373 = (void*)0;
                    (*l_350) = (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_s((safe_add_func_uint64_t_u_u((p_35.f3 != (safe_add_func_int64_t_s_s(p_35.f1, 0xE6DA102ED6E51601LL))), 1L)), (safe_sub_func_int64_t_s_s((safe_rshift_func_uint8_t_u_u(((!((g_256.f3 >= (safe_add_func_int32_t_s_s(0x697DE586L, (safe_mod_func_uint16_t_u_u((func_58(g_217.f0.f6, p_36.f2, l_302, p_35.f2) | 0x23L), 1UL))))) & (-1L))) == g_217.f0.f6), l_371)), (-1L))))) >= p_35.f0), p_36.f1)) ^ l_372) | l_371);
                    l_351 = ((l_373 != (*l_268)) , g_70);
                    return g_2;
                }
            }
            g_70 = g_256;
        }
        else
        {
            char l_378 = (-4L);
            (*g_202) = ((safe_lshift_func_int16_t_s_s(((l_376 != (((l_378 , (safe_mod_func_int32_t_s_s(((*g_291) , 0xB00DE351L), ((safe_lshift_func_int16_t_s_s(((void*)0 != l_383), (safe_mul_func_int8_t_s_s(0x00L, ((*g_168) != (p_35 , (*g_168))))))) || p_36.f2)))) & l_378) , g_386)) || g_387), p_35.f0)) ^ g_258.f2);
            (*g_202) = (-1L);
        }
        (*l_389) = l_273;
    }
    for (g_256.f1.f0 = (-9); (g_256.f1.f0 <= 49); g_256.f1.f0 = safe_add_func_uint8_t_u_u(g_256.f1.f0, 5))
    {
        (*g_202) = (3UL == g_122.f0);
    }
    if (func_50((safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(func_50(((safe_lshift_func_int8_t_s_u(p_35.f2, 2)) | g_66), g_70.f1.f3, p_36.f0, ((safe_mod_func_int32_t_s_s(p_35.f2, (**g_201))) & 0x0A5FL), l_275), 7)), p_37)), g_258.f0, l_400, p_35.f2, g_70))
    {
        int * const l_401 = &g_66;
        int **l_402 = &g_339;
        (**g_201) = 0L;
        (*l_402) = l_401;
    }
    else
    {
        int *l_403 = &g_217.f0.f3;
        int **l_404 = (void*)0;
        union U5 l_409 = {1UL};
        l_272 = l_403;
        (*l_272) = func_58(g_217.f0.f0, (safe_lshift_func_int16_t_s_u(func_50((*l_272), func_58((safe_mod_func_int32_t_s_s((*g_202), (l_409 , p_35.f2))), g_258.f1, l_409, (*l_272)), (*l_272), g_217.f0.f8, l_275), g_108.f0)), l_409, p_36.f1);
        for (g_217.f0.f6 = (-21); (g_217.f0.f6 < 28); g_217.f0.f6 = safe_add_func_int64_t_s_s(g_217.f0.f6, 1))
        {
            short l_415 = 1L;
            for (p_35.f1 = 0; (p_35.f1 < 60); p_35.f1 = safe_add_func_uint64_t_u_u(p_35.f1, 3))
            {
                int **l_414 = &g_339;
                (*l_414) = (*g_201);
                if (p_35.f1)
                    break;
            }
            if (l_415)
                continue;
        }
    }
    return p_35.f0;
}







static struct S1 func_38(unsigned short p_39, union U6 p_40)
{
    int **l_247 = &g_202;
    union U6 **l_250 = &g_169;
    struct S1 l_257 = {9UL,18446744073709551615UL,-3L,0x38967EEFL};
    (*l_247) = (*g_201);
    for (g_44.f1 = 0; (g_44.f1 != 56); ++g_44.f1)
    {
        union U6 ***l_251 = &g_168;
        int *l_252 = &g_66;
        (*l_251) = l_250;
        (*l_247) = l_252;
    }
    for (g_70.f1.f3 = 0; (g_70.f1.f3 > 25); g_70.f1.f3++)
    {
        struct S2 l_255 = {2410,{0xA26B199AL,0xBFF3A325L,0xBE1FAAB5558DF00FLL,0L},0,3983,5,-18268};
        g_256 = l_255;
    }
    (*l_247) = (*l_247);
    return l_257;
}







static union U6 func_41(union U6 p_42, union U6 p_43)
{
    int *l_109 = (void*)0;
    int **l_110 = &l_109;
    int l_112 = 0x7C917CCAL;
    const union U6 *l_121 = &g_108;
    int *l_123 = &g_70.f1.f3;
    struct S2 l_129 = {992,{0xB5F2842BL,0UL,0x7D7A1B735CC4819DLL,0x4962EC18L},4,1166,7,-36746};
    union U3 l_224 = {1UL};
    (*l_110) = l_109;
    if (g_70.f1.f3)
    {
        unsigned short l_111 = 0x8AF5L;
        l_112 = (l_111 & g_70.f5);
    }
    else
    {
        (*l_110) = (*l_110);
    }
    (*l_123) = func_58(p_42.f0, ((((safe_mod_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(((-10L) < g_70.f1.f1), (safe_mod_func_int16_t_s_s(1L, p_42.f0)))) , p_43.f0), (0x6CAEA256L == ((+0x36L) | (p_43.f0 > 1UL))))), p_42.f0)) , l_121) == l_121) , 0xF8B2FE2E92E3B7FELL), g_122, p_43.f0);
    for (g_66 = 0; (g_66 == 13); g_66 = safe_add_func_int64_t_s_s(g_66, 6))
    {
        char l_128 = 8L;
        struct S2 l_143 = {1187,{9UL,0xA9CDD84AL,0x6036CB78A07D3DD6LL,0L},4,850,4,-23237};
        unsigned long long l_144 = 1UL;
        int *l_147 = &l_112;
        char l_148 = 0L;
        union U6 l_156 = {0x73L};
        struct S0 l_158 = {0xA9D7EB52L,0x07CD24EAL,0xA6299ED92AE5AED9LL,0x93722E02L,0x4CAB560D96E28CD3LL,0x6D91L,0x2AD39FB3L,0UL,0x3A29AB7EL};
        union U5 l_160 = {1UL};
        struct S1 *l_163 = &l_129.f1;
        union U6 *l_167 = (void*)0;
        union U6 **l_166 = &l_167;
        unsigned l_190 = 0x2FA70736L;
        char l_215 = 0L;
        if (((safe_lshift_func_int8_t_s_s(l_128, 1)) || (g_70.f5 ^ func_50(l_128, g_44.f0, (func_50(((g_70.f4 , func_50(g_70.f1.f2, l_128, l_128, p_42.f0, g_70)) > 0xA0CBL), l_128, p_43.f0, l_128, l_129) , 3UL), p_42.f0, l_129))))
        {
            struct S1 *l_130 = &g_70.f1;
            int *l_131 = &g_66;
            if (p_42.f0)
                break;
            if (p_42.f0)
                continue;
            g_68 = l_130;
            (*l_110) = l_131;
        }
        else
        {
            struct S2 l_132 = {3798,{4294967288UL,8UL,0x6173B2678477E6E7LL,0xB6903EB4L},4,1344,6,16835};
            int *l_157 = (void*)0;
            struct S1 **l_172 = &l_163;
            (*l_123) = ((l_132 , g_70.f2) && (safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((p_43.f0 & (safe_add_func_int16_t_s_s(0x3BDDL, func_50((safe_rshift_func_int16_t_s_s(func_50(p_42.f0, p_43.f0, p_43.f0, (g_122 , 0x6DL), l_129), 1)), g_66, g_70.f3, g_66, l_143)))), g_122.f0)), l_144)), g_44.f0)));
            for (l_143.f1.f2 = 26; (l_143.f1.f2 > (-18)); l_143.f1.f2--)
            {
                int l_149 = 6L;
                (*l_110) = l_147;
                l_149 = l_148;
                for (p_43.f0 = 0; (p_43.f0 != 10); p_43.f0 = safe_add_func_uint64_t_u_u(p_43.f0, 7))
                {
                    unsigned l_159 = 0xF9817D95L;
                    for (l_112 = 0; (l_112 >= (-9)); l_112 = safe_sub_func_uint32_t_u_u(l_112, 3))
                    {
                        (*l_110) = &g_66;
                        (*l_123) = 0x1B4A0318L;
                    }
                    if ((safe_sub_func_uint16_t_u_u(p_42.f0, 0x53E1L)))
                    {
                        if (g_70.f1.f3)
                            break;
                        (*l_110) = &g_66;
                        return l_156;
                    }
                    else
                    {
                        (*l_110) = l_157;
                        g_70.f5 = (l_158 , (0UL & l_159));
                        (*l_123) = g_70.f1.f0;
                    }
                    return l_156;
                }
                l_132 = l_129;
            }
            (*l_147) = ((l_160 , (safe_mod_func_uint8_t_u_u((l_163 != g_68), (safe_mod_func_uint16_t_u_u((l_166 != g_168), (((p_43.f0 >= ((((void*)0 != (*g_168)) != (((safe_sub_func_uint8_t_u_u((*l_147), g_70.f1.f0)) || p_43.f0) != p_43.f0)) != g_70.f5)) < p_42.f0) , p_42.f0)))))) >= p_42.f0);
            (*l_172) = g_68;
        }
        if (((safe_mod_func_int32_t_s_s((g_70.f1.f1 <= p_42.f0), 0xE4592D3BL)) ^ (g_70.f1.f3 == 1UL)))
        {
            int l_191 = (-2L);
            unsigned l_197 = 1UL;
            union U4 *l_216 = &g_217;
            struct S0 *l_218 = &l_158;
            if (((-1L) & (&g_66 == &g_66)))
            {
                union U6 *l_181 = &g_108;
                const int l_204 = 0xBA9A8C75L;
                for (p_42.f1 = (-19); (p_42.f1 == 31); p_42.f1 = safe_add_func_int64_t_s_s(p_42.f1, 6))
                {
                    const union U6 l_200 = {0x92L};
                    (*l_110) = (void*)0;
                    (*l_110) = &g_66;
                    for (g_108.f0 = 16; (g_108.f0 <= 35); g_108.f0 = safe_add_func_uint16_t_u_u(g_108.f0, 8))
                    {
                        union U6 l_203 = {250UL};
                        int *l_205 = &g_66;
                        l_191 = ((l_181 != (((safe_lshift_func_uint16_t_u_s((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u((p_43.f0 ^ ((0x5EE90912L != ((0xF6L ^ p_42.f1) >= p_43.f0)) < p_43.f0)), (safe_lshift_func_int8_t_s_u((l_190 & g_70.f4), p_43.f0)))), 0x02ADL)), l_191)) , g_192) , l_181)) && 1L);
                        (*l_147) = ((safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(l_197, ((safe_mod_func_uint32_t_u_u(((((l_200 , g_201) == (l_203 , &g_202)) == (*l_123)) < 255UL), p_42.f0)) , l_204))), 4294967295UL)) & p_42.f1);
                        (*l_110) = l_205;
                    }
                }
            }
            else
            {
                unsigned l_210 = 0x08311E2FL;
                union U6 **l_212 = &l_167;
                for (l_143.f1.f2 = 0; (l_143.f1.f2 >= (-18)); l_143.f1.f2 = safe_sub_func_uint8_t_u_u(l_143.f1.f2, 9))
                {
                    if ((**g_201))
                        break;
                }
                (*l_110) = l_147;
                (*l_109) = ((safe_rshift_func_uint16_t_u_u(l_210, 3)) , (l_210 <= ((g_211 , (p_43.f0 , (g_70.f2 < (&l_121 != l_212)))) <= func_50((safe_rshift_func_uint8_t_u_s((&g_169 == &g_169), g_70.f1.f2)), l_215, g_70.f2, (**l_110), g_70))));
            }
            l_216 = (g_192 , l_216);
            l_218 = l_218;
        }
        else
        {
            struct S0 l_223 = {1UL,1UL,0xD1B8BF9470F0F86BLL,0x09877FA4L,0x5BA57C2BB77FB0FCLL,0xA900L,-1L,0x52L,0x8F979C1DL};
            struct S2 l_245 = {-1259,{0xE72D1E09L,18446744073709551607UL,6L,8L},2,467,1,-9928};
            (*g_202) = (((((**g_201) > (safe_sub_func_int16_t_s_s((safe_add_func_uint8_t_u_u((g_217.f0.f8 && ((func_45(l_223, ((l_223.f7 < (l_224 , (**g_201))) > (safe_mul_func_int8_t_s_s(p_43.f0, ((void*)0 == &l_147))))) , g_2) && 0x8F84L)), g_217.f0.f2)), (*l_147)))) ^ 0L) == p_43.f0) ^ g_69);
            (*l_147) = ((p_42.f0 == ((((((g_70.f0 && ((safe_rshift_func_int16_t_s_s((0x28838847L >= (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(g_122.f0, ((((g_70 , 1L) , (safe_mul_func_int16_t_s_s(func_50((((g_70.f1 , (safe_sub_func_int32_t_s_s(((safe_lshift_func_int16_t_s_s(1L, 12)) & (((func_50(((!(((safe_rshift_func_uint8_t_u_s((safe_rshift_func_int16_t_s_s(p_42.f0, 4)), (*l_147))) <= g_70.f1.f0) , p_43.f0)) & (*l_123)), g_217.f0.f3, g_217.f0.f6, (*l_147), l_245) , g_246) == g_246) > g_217.f0.f6)), 0x710F9EE0L))) > (*l_147)) ^ p_42.f0), g_70.f3, g_69, p_43.f0, l_143), (*l_147)))) | p_43.f0) & 0x9AL))), p_42.f0))), g_70.f3)) == (*l_147))) || (*l_147)) ^ 0x82L) >= (*l_147)) ^ p_42.f0) <= p_43.f0)) != p_42.f0);
            return (*l_121);
        }
    }
    return p_42;
}







static union U6 func_45(struct S0 p_46, unsigned p_47)
{
    struct S2 l_76 = {-2707,{0xD543CBDAL,0x2577EDFDL,0L,-6L},1,1145,1,-12812};
    union U3 l_82 = {0UL};
    const int *l_89 = (void*)0;
    for (g_70.f1.f2 = (-10); (g_70.f1.f2 <= 20); g_70.f1.f2++)
    {
        unsigned short l_81 = 65535UL;
        int *l_85 = (void*)0;
        struct S2 l_86 = {626,{0x1DF8105AL,0x8A5C6425L,0x0F443C0C33ADB549LL,0xED5CAB5BL},2,1411,3,-31926};
        const long long l_87 = 4L;
        int *l_88 = &l_76.f1.f3;
        const int **l_90 = &l_89;
        union U6 *l_104 = &g_44;
        struct S1 l_106 = {4294967289UL,6UL,0xD4A5CD318D08C10FLL,1L};
        (*l_88) = ((l_76 , ((246UL == (safe_mod_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_44.f0, (l_81 >= (func_50(l_81, g_66, (l_82 , ((safe_lshift_func_int8_t_s_u((((~6L) , l_85) == l_85), l_76.f3)) < p_46.f3)), l_76.f2, l_86) & p_46.f0)))), g_70.f4))) ^ l_87)) , 0x3AB88218L);
        (*l_90) = l_89;
        if (((p_46.f5 <= (l_89 == (void*)0)) ^ (((((safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((l_76.f1.f1 == (((safe_unary_minus_func_uint16_t_u((func_50((((g_70.f4 > 0L) ^ (p_46.f4 ^ (safe_rshift_func_int8_t_s_s(g_70.f3, (*l_88))))) , l_76.f2), p_46.f8, p_46.f6, g_69, g_70) <= g_2))) && 0x02FFL) > (*l_88))), p_46.f8)), g_70.f4)), g_70.f1.f3)), 4)) & 4UL) == g_70.f1.f0) || g_70.f5) && p_46.f8)))
        {
            union U6 **l_105 = &l_104;
            int l_107 = 0x5085CE8AL;
            (*l_105) = l_104;
            (*l_88) = (0x1B5B2358A988067FLL & ((!func_50((p_46.f7 , (*l_88)), (0L || ((l_105 == &l_104) >= func_50(p_46.f6, (p_46.f1 > (((l_106 , p_46.f5) != 0L) != 248UL)), g_44.f0, l_107, l_86))), p_46.f1, p_46.f0, g_70)) , p_46.f2));
        }
        else
        {
            return (*l_104);
        }
    }
    return g_108;
}







static const unsigned short func_50(unsigned char p_51, unsigned char p_52, unsigned char p_53, unsigned char p_54, struct S2 p_55)
{
    const short l_73 = 0x95E7L;
    for (p_53 = 0; (p_53 < 8); p_53++)
    {
        if (p_55.f2)
            break;
    }
    return l_73;
}







static char func_58(unsigned long long p_59, long long p_60, union U5 p_61, short p_62)
{
    int *l_65 = &g_66;
    int **l_64 = &l_65;
    int *l_67 = &g_66;
    (*l_64) = (void*)0;
    (*l_67) = p_61.f0;
    g_68 = g_68;
    return p_62;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_44.f0, "g_44.f0", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_70.f0, "g_70.f0", print_hash_value);
    transparent_crc(g_70.f1.f0, "g_70.f1.f0", print_hash_value);
    transparent_crc(g_70.f1.f1, "g_70.f1.f1", print_hash_value);
    transparent_crc(g_70.f1.f2, "g_70.f1.f2", print_hash_value);
    transparent_crc(g_70.f1.f3, "g_70.f1.f3", print_hash_value);
    transparent_crc(g_70.f2, "g_70.f2", print_hash_value);
    transparent_crc(g_70.f3, "g_70.f3", print_hash_value);
    transparent_crc(g_70.f4, "g_70.f4", print_hash_value);
    transparent_crc(g_70.f5, "g_70.f5", print_hash_value);
    transparent_crc(g_108.f0, "g_108.f0", print_hash_value);
    transparent_crc(g_122.f0, "g_122.f0", print_hash_value);
    transparent_crc(g_192.f0, "g_192.f0", print_hash_value);
    transparent_crc(g_211, "g_211", print_hash_value);
    transparent_crc(g_217.f0.f0, "g_217.f0.f0", print_hash_value);
    transparent_crc(g_217.f0.f1, "g_217.f0.f1", print_hash_value);
    transparent_crc(g_217.f0.f2, "g_217.f0.f2", print_hash_value);
    transparent_crc(g_217.f0.f3, "g_217.f0.f3", print_hash_value);
    transparent_crc(g_217.f0.f4, "g_217.f0.f4", print_hash_value);
    transparent_crc(g_217.f0.f5, "g_217.f0.f5", print_hash_value);
    transparent_crc(g_217.f0.f6, "g_217.f0.f6", print_hash_value);
    transparent_crc(g_217.f0.f7, "g_217.f0.f7", print_hash_value);
    transparent_crc(g_217.f0.f8, "g_217.f0.f8", print_hash_value);
    transparent_crc(g_256.f0, "g_256.f0", print_hash_value);
    transparent_crc(g_256.f1.f0, "g_256.f1.f0", print_hash_value);
    transparent_crc(g_256.f1.f1, "g_256.f1.f1", print_hash_value);
    transparent_crc(g_256.f1.f2, "g_256.f1.f2", print_hash_value);
    transparent_crc(g_256.f1.f3, "g_256.f1.f3", print_hash_value);
    transparent_crc(g_256.f2, "g_256.f2", print_hash_value);
    transparent_crc(g_256.f3, "g_256.f3", print_hash_value);
    transparent_crc(g_256.f4, "g_256.f4", print_hash_value);
    transparent_crc(g_256.f5, "g_256.f5", print_hash_value);
    transparent_crc(g_258.f0, "g_258.f0", print_hash_value);
    transparent_crc(g_258.f1, "g_258.f1", print_hash_value);
    transparent_crc(g_258.f2, "g_258.f2", print_hash_value);
    transparent_crc(g_258.f3, "g_258.f3", print_hash_value);
    transparent_crc(g_324.f0, "g_324.f0", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_616, "g_616", print_hash_value);
    transparent_crc(g_641, "g_641", print_hash_value);
    transparent_crc(g_652.f0.f0, "g_652.f0.f0", print_hash_value);
    transparent_crc(g_652.f0.f1, "g_652.f0.f1", print_hash_value);
    transparent_crc(g_652.f0.f2, "g_652.f0.f2", print_hash_value);
    transparent_crc(g_652.f0.f3, "g_652.f0.f3", print_hash_value);
    transparent_crc(g_652.f0.f4, "g_652.f0.f4", print_hash_value);
    transparent_crc(g_652.f0.f5, "g_652.f0.f5", print_hash_value);
    transparent_crc(g_652.f0.f6, "g_652.f0.f6", print_hash_value);
    transparent_crc(g_652.f0.f7, "g_652.f0.f7", print_hash_value);
    transparent_crc(g_652.f0.f8, "g_652.f0.f8", print_hash_value);
    transparent_crc(g_698, "g_698", print_hash_value);
    transparent_crc(g_737, "g_737", print_hash_value);
    transparent_crc(g_780, "g_780", print_hash_value);
    transparent_crc(g_821, "g_821", print_hash_value);
    transparent_crc(g_854.f0, "g_854.f0", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
