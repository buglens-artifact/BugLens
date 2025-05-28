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
   const int f0;
   unsigned f1;
   short f2;
   const unsigned f3 : 18;
   short f4;
   unsigned short f5;
   unsigned char f6;
   char f7;
   const char f8;
   int f9;
};

struct S1 {
   signed f0 : 20;
   const unsigned f1 : 31;
   signed f2 : 12;
   unsigned f3 : 6;
   signed f4 : 25;
   signed f5 : 26;
   const signed f6 : 31;
   int f7;
   unsigned f8 : 3;
   unsigned f9 : 23;
};

struct S2 {
   signed f0 : 25;
   signed f1 : 29;
   signed f2 : 7;
   signed f3 : 13;
   const unsigned f4 : 28;
   char f5;
   signed f6 : 30;
   unsigned f7 : 30;
};


static int g_3 = 0x27289FFFL;
static struct S1 g_74 = {-304,32325,-23,2,-5462,2643,-18399,-2L,0,2221};
static int g_83 = (-1L);
static struct S2 g_90 = {-4631,19840,-10,-88,7474,1L,6488,30821};
static int *g_114 = &g_83;
static int **g_113 = &g_114;
static struct S0 g_155 = {-1L,0xB0BAC48DL,0xFEB0L,12,-8L,0x9A1AL,255UL,0L,1L,-1L};
static struct S0 *g_154 = &g_155;
static struct S2 ** const g_169 = (void*)0;
static struct S2 **g_170 = (void*)0;
static unsigned char g_180 = 0x52L;
static int g_214 = 0xFAAC2A5FL;
static struct S1 *g_223 = &g_74;
static struct S1 **g_222 = &g_223;
static char g_233 = 0L;
static unsigned g_331 = 0xE88E0490L;
static const int *g_350 = &g_83;
static unsigned short g_358 = 0x8CB3L;
static short g_391 = 0x5456L;
static unsigned g_430 = 0UL;
static short g_439 = 1L;
static struct S2 g_509 = {1312,-145,3,-63,11887,0xB8L,7089,29709};
static const int g_520 = (-9L);
static int *g_562 = &g_3;
static int * const *g_561 = &g_562;
static char g_586 = 0xA2L;
static struct S0 g_643 = {0x4A0D5348L,0xDDF11049L,0xC3BEL,371,0xE45CL,0xED3BL,252UL,-5L,0L,1L};



static struct S0 func_1(void);
static struct S1 func_7(struct S0 p_8, short p_9, int ** p_10, int * p_11);
static struct S0 func_12(unsigned char p_13, struct S0 p_14, unsigned p_15, int p_16);
static int func_22(int * p_23, int * p_24, int * const * p_25);
static int * func_26(unsigned short p_27, unsigned p_28, unsigned p_29);
static unsigned short func_33(struct S1 p_34, unsigned p_35);
static int func_39(int p_40, int ** p_41);
static unsigned short func_44(unsigned p_45);
static struct S2 func_48(const unsigned p_49, int ** p_50, int p_51);
static int func_59(int * p_60, int ** p_61, int ** p_62, unsigned p_63);
static struct S0 func_1(void)
{
    int *l_2 = &g_3;
    int **l_4 = (void*)0;
    struct S0 l_18 = {5L,0xCD3E5C7DL,0x169BL,292,0xDBC4L,0xD767L,0x8FL,0x1BL,-9L,0xE40C8830L};
    unsigned l_593 = 0x891EC579L;
    struct S1 ***l_634 = (void*)0;
    unsigned l_639 = 4294967295UL;
    l_2 = (void*)0;
    l_2 = l_2;
    for (g_3 = (-24); (g_3 < (-18)); g_3 = safe_add_func_int16_t_s_s(g_3, 9))
    {
        int l_17 = (-1L);
        short l_30 = 1L;
        struct S1 l_36 = {238,22427,-62,7,-5401,-3520,39012,0x89CE376AL,1,2325};
        int *l_595 = (void*)0;
        struct S0 *l_642 = &g_643;
        const struct S2 *l_660 = (void*)0;
        const struct S2 **l_659 = &l_660;
        struct S0 **l_667 = (void*)0;
        struct S0 **l_668 = &g_154;
        g_74.f4 = ((func_7(func_12(l_17, l_18, (g_3 , ((safe_unary_minus_func_uint32_t_u((safe_mul_func_int8_t_s_s((0xF0BDE8AFL & func_22(&g_3, func_26((l_30 == (safe_mod_func_uint16_t_u_u(func_33(l_36, g_3), l_36.f0))), l_36.f7, l_18.f4), g_561)), (-5L))))) == g_509.f5)), l_593), g_439, &l_2, l_595) , g_331) , (*g_562));
        (*g_113) = (((((((!((safe_rshift_func_int16_t_s_u((safe_mod_func_uint16_t_u_u(((((void*)0 != l_634) < g_90.f2) | 65526UL), g_155.f2)), (safe_add_func_uint8_t_u_u(g_3, l_18.f0)))) | g_509.f2)) > g_430) , (void*)0) == &g_154) , g_509.f1) <= g_391) , (*g_113));
        for (g_391 = (-10); (g_391 <= (-21)); g_391 = safe_sub_func_int32_t_s_s(g_391, 2))
        {
            char l_654 = (-1L);
            int **l_655 = &l_2;
            struct S1 *l_662 = (void*)0;
            l_642 = (void*)0;
            (*g_113) = (*g_113);
            if ((((g_391 < ((((safe_add_func_int32_t_s_s(((&g_561 != &g_561) , func_33(func_7(((safe_lshift_func_uint16_t_u_u((0x97L <= (((void*)0 == &g_155) && ((g_509.f5 | ((safe_add_func_int32_t_s_s(0x1E8BBB80L, (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((((8UL & g_90.f7) , l_654) == (-9L)) && g_509.f7), 2)), l_36.f7)))) , 0x9610EA2DL)) , g_155.f3))), g_233)) , l_18), g_643.f9, l_655, (*g_113)), g_643.f2)), (**g_561))) != g_509.f1) == g_90.f6) | g_586)) < g_74.f3) > 0x3EL))
            {
                int l_656 = (-6L);
                struct S2 l_661 = {437,-1821,5,58,14306,0xC6L,-7364,711};
                (*l_655) = func_26(l_656, (safe_sub_func_uint32_t_u_u((l_659 != (void*)0), (*g_350))), ((((+(((((*g_562) >= (**g_561)) , (void*)0) != (l_661 , l_662)) != l_661.f4)) & 0x7CABL) || g_643.f7) <= 0x25L));
                return l_18;
            }
            else
            {
                int ***l_666 = &g_113;
                (**l_666) = func_26((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((0xA16BL && g_643.f5))), 2)), (0xFCL == ((&g_561 == l_666) != g_155.f1)), g_643.f5);
            }
        }
        (*l_668) = &g_155;
    }
    return l_18;
}







static struct S1 func_7(struct S0 p_8, short p_9, int ** p_10, int * p_11)
{
    short l_596 = (-3L);
    int **l_601 = (void*)0;
    struct S1 **l_609 = &g_223;
    const struct S2 *l_626 = (void*)0;
    int l_627 = 0x41FB4A0DL;
    int *l_628 = (void*)0;
    int *l_629 = &g_214;
    (*g_113) = ((0UL || 1L) , func_26((l_596 <= (((safe_lshift_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(g_509.f7, g_155.f5)) || p_8.f6) , g_509.f7), g_90.f5)) || p_8.f1) > g_74.f7)), g_90.f1, g_509.f7));
    for (p_9 = 0; (p_9 >= 15); p_9 = safe_add_func_int32_t_s_s(p_9, 9))
    {
        struct S1 ***l_610 = &g_222;
        struct S2 *l_616 = &g_509;
        struct S2 **l_615 = &l_616;
        int l_623 = 0L;
        for (g_74.f7 = 22; (g_74.f7 >= 24); g_74.f7 = safe_add_func_uint8_t_u_u(g_74.f7, 7))
        {
            struct S0 **l_607 = &g_154;
            struct S0 ***l_606 = &l_607;
            int *l_608 = &g_83;
            (*l_608) = ((void*)0 == l_606);
            (*l_608) = (**g_561);
            (*g_113) = (*p_10);
        }
        (*l_610) = l_609;
        for (g_155.f1 = 0; (g_155.f1 > 44); g_155.f1++)
        {
            return (**g_222);
        }
        l_623 = (safe_add_func_uint32_t_u_u((l_615 != ((*l_616) , (void*)0)), 0L));
    }
    (*l_629) = l_627;
    (*g_113) = func_26(p_8.f6, g_3, g_509.f6);
    return (**l_609);
}







static struct S0 func_12(unsigned char p_13, struct S0 p_14, unsigned p_15, int p_16)
{
    struct S0 l_594 = {-8L,0xDCC56AF2L,0x51ECL,426,-3L,0xD806L,0xEDL,0xF8L,0x05L,0x39268E7AL};
    return l_594;
}







static int func_22(int * p_23, int * p_24, int * const * p_25)
{
    short l_565 = 0L;
    int l_568 = 0L;
    struct S0 **l_576 = &g_154;
    struct S0 l_578 = {0x8071C9BAL,0xC2F25FC6L,-4L,458,0x6F35L,65527UL,0UL,0xF2L,0x6DL,1L};
    struct S1 **l_579 = (void*)0;
    int l_581 = 1L;
    struct S0 ***l_592 = &l_576;
    l_565 = (safe_lshift_func_int16_t_s_u(((void*)0 != &g_222), 9));
    if ((g_74.f2 , (l_565 & l_565)))
    {
        struct S0 * const *l_574 = &g_154;
        int l_575 = (-1L);
        for (g_233 = (-1); (g_233 != 4); ++g_233)
        {
            struct S0 ***l_569 = (void*)0;
            struct S0 **l_571 = &g_154;
            struct S0 ***l_570 = &l_571;
            l_568 = (**g_561);
            (*g_113) = (*g_561);
            (*l_570) = &g_154;
        }
        for (l_568 = 7; (l_568 == (-6)); l_568--)
        {
            int *l_577 = &g_214;
            struct S1 **l_580 = &g_223;
            (*l_577) = func_44((l_574 == ((l_575 , g_155.f8) , l_576)));
            if (l_575)
                break;
            l_581 = (l_578 , (((g_509.f0 >= (l_579 == (void*)0)) ^ (l_580 == l_579)) < ((-7L) ^ (g_233 , l_578.f7))));
        }
        l_581 = (+(**p_25));
    }
    else
    {
        struct S1 l_582 = {-500,27324,11,2,-3460,-6685,-38974,0xC9C0E178L,0,2409};
        struct S2 *l_583 = (void*)0;
        struct S2 *l_591 = &g_90;
        (*g_113) = func_26(((l_582 , ((void*)0 == l_583)) , g_74.f0), (safe_rshift_func_int16_t_s_u(l_582.f1, ((((((0xE76DL <= g_586) <= (safe_mod_func_uint8_t_u_u(l_582.f7, (safe_mul_func_uint8_t_u_u(((l_591 != (void*)0) & 255UL), l_578.f2))))) >= 1L) , l_582.f6) , 0xE0E2E31AL) , 0UL))), l_582.f1);
        return (*p_23);
    }
    (*l_592) = &g_154;
    return (*g_562);
}







static int * func_26(unsigned short p_27, unsigned p_28, unsigned p_29)
{
    unsigned l_419 = 0x0898A8FAL;
    struct S0 l_420 = {0xAEED804EL,0UL,0x6FCEL,40,0xCBD1L,0x8015L,0xBBL,-1L,0x5AL,0L};
    short l_429 = 0x3791L;
    struct S0 ** const l_450 = &g_154;
    short l_451 = 0x1B50L;
    int **l_452 = (void*)0;
    struct S1 l_532 = {62,33126,-31,7,-1854,-1812,28793,-1L,1,1719};
    l_419 = 1L;
    if ((l_420 , (safe_add_func_int8_t_s_s((l_420.f3 == (safe_add_func_int16_t_s_s(p_27, p_29))), l_419))))
    {
        struct S1 l_425 = {-114,15001,9,4,539,6440,-34277,-3L,1,2478};
        struct S2 l_428 = {2578,-10947,-7,34,1319,0x0FL,16553,30055};
        int l_440 = 1L;
        int *l_441 = &g_83;
        g_430 = (func_33(l_425, (safe_mod_func_uint32_t_u_u(g_90.f3, (func_33((**g_222), (l_419 | (((*g_222) == (((l_428 , (g_90.f2 <= 4294967287UL)) ^ (l_429 >= g_83)) , &l_425)) != p_29))) && 0x5209EA72L)))) , p_27);
        (*l_441) = ((((((((p_27 <= p_29) , (safe_add_func_uint16_t_u_u((0x9BL >= p_29), ((0x6968DE9EL | p_28) < g_155.f7)))) == (safe_add_func_int8_t_s_s(((~(safe_lshift_func_uint8_t_u_u(l_425.f9, 4))) | (((safe_add_func_int16_t_s_s((l_428.f3 != g_439), l_440)) , 0x66F39B91L) , g_74.f2)), g_90.f5))) == 0L) & p_29) > 8L) == l_428.f4) > 0x423AL);
        (*l_441) = (*g_350);
    }
    else
    {
        int l_465 = 4L;
        int *l_470 = &g_83;
        unsigned char l_475 = 0UL;
        for (l_420.f5 = 18; (l_420.f5 <= 5); l_420.f5 = safe_sub_func_uint16_t_u_u(l_420.f5, 1))
        {
            int *l_455 = &g_214;
            struct S1 l_460 = {653,39201,-54,5,-5129,-1371,-44709,1L,0,1451};
            struct S2 *l_477 = &g_90;
            (*g_113) = l_455;
            if (p_27)
            {
                (**g_113) = (safe_mul_func_uint16_t_u_u((p_27 == (0x990CAACBL < ((p_28 == (safe_mul_func_int8_t_s_s(0xD3L, 1UL))) && (-4L)))), 0x0F5AL));
                return (*g_113);
            }
            else
            {
                int l_468 = (-6L);
                const int *l_479 = &g_214;
                struct S1 l_496 = {-662,14052,25,0,3391,-4002,26233,1L,0,1336};
                if ((0x2B54L != 0x9F8FL))
                {
                    const int l_469 = 0xEB45384EL;
                    struct S1 ***l_473 = &g_222;
                    int **l_474 = &l_455;
                    if ((l_460 , (p_27 && (((7UL ^ (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(g_391, 8)) | (l_465 < g_430)), ((-8L) >= (safe_mul_func_uint8_t_u_u(l_468, l_469)))))) >= g_155.f6) , l_465))))
                    {
                        (*l_455) = 1L;
                        (*g_114) = ((~((g_155.f9 || ((**g_222) , g_90.f0)) && ((g_155.f4 > (0x31090EADL && p_27)) == p_28))) <= 0x6E45L);
                        if ((*l_470))
                            continue;
                    }
                    else
                    {
                        unsigned short l_476 = 0x4FE9L;
                        l_476 = (safe_mul_func_int16_t_s_s(((l_473 != (void*)0) && (*l_470)), (func_39(func_44((*l_455)), l_474) <= l_475)));
                        l_477 = l_477;
                        (*g_113) = (*l_474);
                        (*l_470) = p_27;
                    }
                }
                else
                {
                    int ***l_478 = &l_452;
                    int **l_499 = &g_114;
                    (*l_478) = &g_114;
                    l_479 = (void*)0;
                    if (p_28)
                    {
                        (**l_452) = (safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(p_28, (safe_lshift_func_uint8_t_u_u((((***l_478) | func_59((*g_113), &l_470, &g_114, g_430)) <= p_28), 6)))), (((p_29 || 0x93L) < 0xF1L) ^ (**l_452))));
                    }
                    else
                    {
                        (**l_478) = l_470;
                        (*l_450) = &g_155;
                        if ((*g_114))
                            break;
                    }
                    for (l_420.f1 = 0; (l_420.f1 < 31); l_420.f1 = safe_add_func_uint32_t_u_u(l_420.f1, 1))
                    {
                        const char l_500 = 0x89L;
                    }
                }
                if ((*l_470))
                    break;
                return (*g_113);
            }
        }
    }
    for (g_155.f7 = 0; (g_155.f7 < 29); g_155.f7++)
    {
        unsigned char l_519 = 1UL;
        int l_531 = 0L;
        struct S1 l_552 = {964,35927,-24,4,-5457,-6860,-46027,0x498909DCL,1,2528};
        unsigned char l_555 = 0UL;
        int **l_557 = &g_114;
        for (g_214 = 0; (g_214 <= (-19)); --g_214)
        {
            unsigned char l_530 = 0xA9L;
            struct S2 *l_540 = &g_90;
            int l_549 = (-10L);
            int *l_556 = &l_531;
            int ***l_558 = &l_452;
            if (p_27)
            {
                const int l_512 = 0xA73C26EFL;
                int l_516 = 0xD6F5DC7EL;
                struct S1 *l_529 = &g_74;
                int *l_553 = &g_83;
                for (p_28 = 0; (p_28 < 14); p_28 = safe_add_func_int16_t_s_s(p_28, 3))
                {
                    int *l_537 = &l_516;
                    for (l_451 = (-2); (l_451 <= (-6)); --l_451)
                    {
                        const struct S1 * const l_514 = &g_74;
                        const struct S1 * const *l_513 = &l_514;
                        int l_515 = 0xD3777B2AL;
                        l_516 = (p_27 > ((((&g_155 != (g_509 , &g_155)) & (g_155.f3 < (p_27 | (safe_add_func_uint32_t_u_u(g_509.f5, l_512))))) != (((l_513 != &l_514) , g_509.f3) == l_515)) == g_430));
                        l_531 = (g_155.f4 || g_90.f0);
                    }
                    (*l_537) = (l_532 , (safe_mod_func_uint8_t_u_u((g_509.f7 < p_28), (g_90.f2 ^ (p_29 , (((-1L) >= (g_90.f3 , l_420.f7)) <= (*l_537)))))));
                    l_549 = (((safe_mul_func_uint8_t_u_u(l_530, g_74.f7)) < ((((**g_222) , l_540) != ((p_28 | ((safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(((((p_27 & ((~(safe_mul_func_uint16_t_u_u(((l_530 && (safe_lshift_func_uint8_t_u_s(l_516, 4))) , 0x1553L), 4UL))) , p_29)) , 4294967295UL) >= p_29) > p_28), 10)), p_27)) | (-5L))) , (void*)0)) , p_27)) & (*l_537));
                    (*l_537) = (safe_lshift_func_uint16_t_u_u(g_520, 9));
                }
                (*l_553) = ((void*)0 != &l_516);
                (*l_553) = ((*l_553) ^ p_27);
            }
            else
            {
                int *l_554 = &l_531;
                (*l_554) = (*g_350);
            }
            (*l_556) = (((p_29 , p_28) >= l_555) <= p_27);
            (*l_558) = l_557;
            (*l_556) = (safe_rshift_func_uint8_t_u_u(p_27, l_429));
        }
    }
    return (*g_113);
}







static unsigned short func_33(struct S1 p_34, unsigned p_35)
{
    short l_344 = 0L;
    int *l_345 = (void*)0;
    struct S0 l_395 = {-10L,4294967292UL,0x06F3L,153,-1L,1UL,8UL,0x3CL,-4L,-3L};
    struct S2 *l_407 = (void*)0;
    struct S2 l_414 = {-5169,-18152,7,85,13045,0x3FL,29226,19762};
    int *l_417 = (void*)0;
    unsigned l_418 = 0x67FE72FFL;
    for (p_35 = (-4); (p_35 == 44); p_35 = safe_add_func_int8_t_s_s(p_35, 2))
    {
        int *l_53 = &g_3;
        int **l_52 = &l_53;
        struct S2 *l_364 = &g_90;
        int l_409 = 0xD0CF6ABFL;
    }
    (*g_113) = ((safe_mod_func_uint8_t_u_u(255UL, (((((((l_395.f4 & func_39(g_180, &l_345)) > ((!g_90.f1) == ((((l_414 , (((safe_lshift_func_uint8_t_u_u((g_155.f9 , ((g_74.f5 , (-1L)) , 0x90L)), 7)) & l_395.f3) > 0x86E735E7L)) && 0xACC17FFCL) > l_395.f7) & g_74.f2))) , l_345) == l_417) | g_90.f4) , l_418) && 0xEDL))) , l_345);
    return g_74.f6;
}







static int func_39(int p_40, int ** p_41)
{
    short l_332 = 0x05DEL;
    struct S2 *l_334 = (void*)0;
    int l_337 = 0L;
    struct S0 **l_338 = &g_154;
    (*g_222) = (*g_222);
    if (func_44(l_332))
    {
        int *l_333 = (void*)0;
        (*p_41) = l_333;
    }
    else
    {
        struct S2 **l_335 = &l_334;
        int l_336 = 0x02643BFFL;
        (*l_335) = l_334;
        l_337 = l_336;
    }
    (*l_338) = &g_155;
    g_90.f0 = (safe_lshift_func_int8_t_s_u(func_44(p_40), (safe_mod_func_int16_t_s_s(p_40, (safe_unary_minus_func_uint8_t_u(0x2DL))))));
    return l_337;
}







static unsigned short func_44(unsigned p_45)
{
    struct S2 *l_229 = &g_90;
    int **l_230 = &g_114;
    int l_253 = 0x9B615680L;
    int **l_261 = &g_114;
    char l_290 = 3L;
    unsigned short l_299 = 65535UL;
    char l_328 = 0x06L;
    for (g_180 = (-15); (g_180 >= 43); g_180++)
    {
        struct S1 **l_224 = &g_223;
        int l_231 = 1L;
        char l_232 = (-1L);
        char l_298 = 0x4BL;
        struct S2 l_310 = {4442,-17646,-2,86,10305,0x91L,-7491,14978};
        if (((((safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((((((g_222 != l_224) ^ ((safe_add_func_uint16_t_u_u(p_45, (safe_mod_func_int32_t_s_s(p_45, g_155.f6)))) , g_74.f8)) ^ (l_229 != ((g_74.f5 && l_231) , (void*)0))) <= (-9L)) | 0xF9L), p_45)), l_232)) > p_45) ^ p_45) & p_45))
        {
            int l_234 = 0x9142F975L;
            struct S0 *l_239 = &g_155;
            const struct S2 l_240 = {-4439,-4544,3,17,7635,0xA8L,-5060,27216};
            int *l_241 = &g_214;
            l_234 = g_233;
            (*l_241) = (safe_add_func_uint8_t_u_u((p_45 | (p_45 , (g_74.f0 , (l_232 >= p_45)))), (safe_mul_func_int16_t_s_s((g_74.f1 > (l_239 != (void*)0)), (l_240 , 0xEF5AL)))));
            l_224 = &g_223;
        }
        else
        {
            int * const l_244 = &l_231;
            struct S1 l_247 = {847,38851,-40,0,4435,-1882,-20418,7L,0,2376};
            struct S2 *l_249 = (void*)0;
            int l_266 = (-5L);
            for (g_155.f4 = 0; (g_155.f4 != (-13)); g_155.f4--)
            {
                int **l_257 = &g_114;
                if (p_45)
                {
                    const struct S2 *l_248 = (void*)0;
                    int l_275 = 0x07944348L;
                    struct S0 **l_276 = &g_154;
                    if (((p_45 , l_244) == (*g_113)))
                    {
                        int **l_252 = &g_114;
                        if (p_45)
                            break;
                        (*l_244) = ((safe_mul_func_uint8_t_u_u(((l_247 , l_248) == l_249), p_45)) , (((safe_add_func_uint16_t_u_u(p_45, p_45)) == p_45) == 4294967286UL));
                    }
                    else
                    {
                        int **l_256 = &g_114;
                        l_253 = p_45;
                        (*l_244) = (safe_mul_func_int16_t_s_s((p_45 != p_45), g_155.f6));
                        if (p_45)
                            break;
                        (*l_244) = (*l_244);
                    }
                    for (p_45 = (-4); (p_45 > 40); p_45 = safe_add_func_uint16_t_u_u(p_45, 3))
                    {
                        int **l_260 = &g_114;
                        l_275 = ((p_45 > 1L) < (((l_275 , p_45) ^ p_45) > g_155.f3));
                    }
                    (*l_261) = (*g_113);
                    (*l_276) = (void*)0;
                }
                else
                {
                    return g_74.f2;
                }
            }
        }
        l_231 = ((+g_155.f5) <= (!(!p_45)));
        if (p_45)
        {
            if (p_45)
                break;
        }
        else
        {
            struct S2 l_297 = {-2702,-2606,3,3,4755,0x99L,-6284,28230};
            const int *l_300 = &l_231;
            int *l_323 = &g_83;
            for (g_233 = 18; (g_233 < (-25)); g_233--)
            {
                unsigned l_281 = 0xB9736B5CL;
                int l_313 = (-1L);
                short l_322 = (-3L);
                if (((safe_mul_func_int8_t_s_s((p_45 ^ l_281), (safe_add_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s((((safe_add_func_uint32_t_u_u(l_290, ((((safe_sub_func_int16_t_s_s(((void*)0 != (*l_230)), (safe_add_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((l_297 , ((**l_224) , l_298)), p_45)), 4UL)))) , 0xEC67L) | p_45) , 0xF852C065L))) < l_281) <= l_299), p_45)), p_45)) | g_90.f4), p_45)))) | 2UL))
                {
                    const int **l_301 = &l_300;
                    (*l_301) = l_300;
                    (*l_301) = (*g_113);
                }
                else
                {
                    for (l_232 = (-8); (l_232 <= (-28)); l_232--)
                    {
                        int *l_304 = (void*)0;
                        int *l_305 = &l_231;
                        (*l_305) = p_45;
                        (*l_230) = (*l_230);
                        l_313 = (((*l_305) || (252UL > (g_180 != (safe_sub_func_int32_t_s_s((p_45 >= (safe_sub_func_uint16_t_u_u((((1L && ((*l_229) , (l_310 , (safe_mod_func_uint32_t_u_u(p_45, 1UL))))) , (*l_305)) || 65535UL), p_45))), p_45))))) < p_45);
                        (*g_113) = (*g_113);
                    }
                }
                l_328 = ((safe_mod_func_uint16_t_u_u(((p_45 & (safe_sub_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((safe_add_func_uint8_t_u_u(g_90.f3, (!l_322))) >= (func_59(l_323, &l_323, &l_323, l_310.f6) , ((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((p_45 == g_155.f8), g_74.f1)), 0xC18BA1A4L)) , 0x6D691EECL))), p_45)), p_45))) >= p_45), 1L)) == g_74.f1);
            }
        }
    }
    g_331 = (safe_mul_func_int8_t_s_s((0xEAFBAC7EL | (g_155.f6 | p_45)), g_74.f8));
    (*l_261) = (*l_230);
    return g_155.f5;
}







static struct S2 func_48(const unsigned p_49, int ** p_50, int p_51)
{
    unsigned l_58 = 0UL;
    int *l_64 = &g_3;
    int *l_82 = &g_83;
    char l_110 = 0x06L;
    struct S2 * const *l_134 = (void*)0;
    struct S1 *l_152 = &g_74;
    short l_212 = 0x6FD6L;
    unsigned l_213 = 4294967293UL;
    struct S2 l_215 = {5035,-502,-1,-30,14186,0x0DL,-1090,4026};
    (*l_82) = (g_3 , (((safe_add_func_int32_t_s_s((**p_50), ((safe_lshift_func_int16_t_s_s((((l_58 , 0x53L) > (func_59((p_49 , l_64), p_50, p_50, g_3) , p_51)) == g_74.f8), p_49)) , g_74.f4))) | 1UL) < (*l_64)));
    if (g_74.f5)
    {
        const unsigned short l_92 = 0UL;
        int l_93 = (-1L);
        for (l_58 = 22; (l_58 > 49); l_58 = safe_add_func_uint32_t_u_u(l_58, 1))
        {
            int * const l_86 = &g_83;
            (*l_82) = 9L;
            (*p_50) = l_86;
        }
        for (g_83 = 19; (g_83 != (-10)); g_83 = safe_sub_func_int8_t_s_s(g_83, 4))
        {
            struct S2 *l_89 = &g_90;
            struct S2 **l_91 = &l_89;
            (*l_91) = l_89;
        }
        (*p_50) = (void*)0;
        l_93 = l_92;
    }
    else
    {
        struct S2 *l_95 = (void*)0;
        struct S2 **l_94 = &l_95;
        int l_100 = 0xC43C23CFL;
        struct S0 l_149 = {1L,0xD8E9D5C4L,-1L,114,0x95AFL,1UL,0x4AL,0x72L,0x43L,0xA7DDC295L};
        int l_168 = 3L;
        unsigned l_182 = 0UL;
        int ** const l_201 = &g_114;
        if (((l_94 != &l_95) == ((g_74.f1 == g_90.f6) > (p_51 && (safe_add_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u((~l_100), ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s((248UL < (l_100 < (((p_51 == 65526UL) , g_90.f4) | g_90.f1))), g_3)), 9)) || 0xEE93D3DDL))) != p_49) , (-1L)), g_90.f3))))))
        {
            const short l_105 = 8L;
            int **l_115 = &l_64;
            const struct S2 *l_137 = &g_90;
            if (l_105)
            {
                int l_116 = 0x2502BEA8L;
                int l_117 = 0x41C8C056L;
                unsigned l_118 = 18446744073709551609UL;
                struct S2 ** const l_133 = (void*)0;
                int *l_144 = &g_83;
                (*p_50) = (void*)0;
                for (l_58 = (-13); (l_58 == 60); l_58 = safe_add_func_int16_t_s_s(l_58, 3))
                {
                    const struct S2 *l_119 = &g_90;
                    int l_120 = 1L;
                    if (((((*l_64) | (safe_mul_func_uint16_t_u_u((((p_51 && ((~l_110) && (safe_mod_func_uint32_t_u_u(func_59((*p_50), g_113, l_115, l_116), 0x250C50EEL)))) , 0xB219L) || (-9L)), l_117))) || (-2L)) < 0xFE3DBA41L))
                    {
                        l_118 = (*l_64);
                        (*g_114) = ((((void*)0 == l_119) == (l_120 & g_90.f7)) <= l_100);
                    }
                    else
                    {
                        if ((*g_114))
                            break;
                        if ((**l_115))
                            continue;
                    }
                    for (g_90.f5 = 0; (g_90.f5 >= 0); ++g_90.f5)
                    {
                        unsigned l_131 = 7UL;
                        unsigned char l_132 = 6UL;
                        l_132 = (safe_mod_func_uint32_t_u_u((safe_mul_func_int8_t_s_s((((((((((*p_50) == ((((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((((((-1L) ^ func_59((*g_113), &l_82, &g_114, g_90.f4)) , g_90.f3) ^ ((**g_113) == 5L)) & p_49), p_49)), l_131)) | 0x32L) > p_51) , (void*)0)) > 0x19L) && (*g_114)) , 0xAAE2L) , (void*)0) == (*p_50)) > 5L) , g_90.f0), p_51)), l_120));
                        (*p_50) = (*g_113);
                        (*l_82) = (**p_50);
                        (**g_113) = (**g_113);
                    }
                }
                if ((((l_133 == l_134) ^ l_118) <= (((*p_50) == (void*)0) , g_90.f2)))
                {
                    struct S2 *l_138 = &g_90;
                    int l_139 = (-8L);
                    for (l_116 = 0; (l_116 == 18); l_116 = safe_add_func_int16_t_s_s(l_116, 1))
                    {
                        (*g_113) = (*p_50);
                    }
                    (*l_82) = (((void*)0 == l_137) , (((l_137 == l_138) == ((**l_115) | (((!(l_139 || (&l_138 != (void*)0))) , 0x6AL) , (-1L)))) > l_100));
                    (*l_82) = (safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s(p_49, (&g_114 != p_50))), 0xBA64L));
                }
                else
                {
                    (*g_113) = l_144;
                    return g_90;
                }
            }
            else
            {
                for (p_51 = (-17); (p_51 < (-18)); p_51 = safe_sub_func_int8_t_s_s(p_51, 5))
                {
                    (*g_114) = (safe_mul_func_uint8_t_u_u((l_149 , (safe_add_func_uint8_t_u_u(p_49, (-4L)))), (~p_49)));
                    (*g_113) = l_82;
                }
                return g_90;
            }
        }
        else
        {
            struct S1 **l_153 = &l_152;
            struct S0 **l_156 = &g_154;
            int *l_171 = &g_83;
            (*l_153) = l_152;
            (*l_156) = g_154;
            if ((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((p_51 == l_149.f4) >= (safe_lshift_func_int16_t_s_s(g_74.f5, 12))), (safe_unary_minus_func_uint8_t_u(g_155.f9)))), (safe_lshift_func_int8_t_s_u(p_51, (0xFC4BL | (0L < ((~((l_168 , p_49) >= 6UL)) && (-1L)))))))))
            {
                short l_174 = (-4L);
                struct S2 l_175 = {1238,16104,-1,-20,14423,5L,-3775,30566};
                g_170 = g_169;
                (*g_113) = l_171;
                (*p_50) = (*g_113);
                if ((g_90.f0 >= (safe_add_func_int32_t_s_s(func_59((g_74 , (g_74 , l_82)), p_50, &g_114, (+(((0x6591L | (*l_171)) <= ((g_74 , g_74.f8) , g_74.f8)) ^ l_149.f4))), l_174))))
                {
                    (*p_50) = (*p_50);
                    (*l_82) = (*l_82);
                }
                else
                {
                    (**p_50) = (*g_114);
                    return l_175;
                }
            }
            else
            {
                const unsigned l_181 = 5UL;
                const struct S2 l_183 = {-3195,-8046,-6,-49,15658,0x74L,-3905,17962};
                unsigned char l_192 = 0x58L;
                (*l_82) = func_59((*g_113), (((((**p_50) , (*l_82)) != (((*g_114) > (~(~(((~((((safe_sub_func_uint32_t_u_u((safe_sub_func_int16_t_s_s(g_180, l_181)), (g_74.f1 != l_181))) <= func_59((*g_113), &l_82, &g_114, g_74.f3)) <= (*l_171)) == l_182)) > g_74.f9) , p_51)))) != (**g_113))) , 4294967289UL) , &l_64), &g_114, g_90.f2);
                (*g_114) = (((l_183 , p_49) , (safe_sub_func_uint8_t_u_u((safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(((safe_lshift_func_int16_t_s_s(((l_192 || l_183.f2) , l_149.f9), g_90.f0)) <= 0x0985F9BDL), 15)), ((void*)0 == &g_154))), 0x34L))) == p_51);
                (*l_82) = ((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s((((g_155.f1 & (*l_64)) || (safe_mul_func_uint16_t_u_u((*l_171), (*l_64)))) , g_90.f2), (g_90.f6 < 0xBD06L))), (safe_mod_func_int16_t_s_s(((l_201 != (((safe_mul_func_uint8_t_u_u(0UL, g_155.f8)) , 0x6A3FBE80L) , &l_82)) , 0xAC25L), (*l_171))))) , 0L);
            }
            (*l_82) = (*g_114);
        }
    }
    (*l_82) = (((safe_lshift_func_int16_t_s_s((g_214 | 8UL), 0)) , (*l_82)) != p_51);
    return l_215;
}







static int func_59(int * p_60, int ** p_61, int ** p_62, unsigned p_63)
{
    int l_69 = 0x7EBEE99BL;
    int l_75 = 9L;
    l_75 = (safe_add_func_uint32_t_u_u((g_3 < (l_69 , ((safe_lshift_func_int8_t_s_s(p_63, 4)) <= (l_69 || (~((((g_3 != (0UL <= ((((**p_62) != (safe_mod_func_int16_t_s_s(p_63, (g_74 , l_69)))) & (**p_62)) == p_63))) < l_69) <= l_69) , l_69)))))), l_75));
    g_74.f0 = (safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s(((g_74.f3 & 0xDBL) || g_74.f3), 8)) >= (safe_add_func_uint32_t_u_u(l_69, 0x9B8BCB0FL))), g_74.f9));
    return (**p_62);
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_74.f0, "g_74.f0", print_hash_value);
    transparent_crc(g_74.f1, "g_74.f1", print_hash_value);
    transparent_crc(g_74.f2, "g_74.f2", print_hash_value);
    transparent_crc(g_74.f3, "g_74.f3", print_hash_value);
    transparent_crc(g_74.f4, "g_74.f4", print_hash_value);
    transparent_crc(g_74.f5, "g_74.f5", print_hash_value);
    transparent_crc(g_74.f6, "g_74.f6", print_hash_value);
    transparent_crc(g_74.f7, "g_74.f7", print_hash_value);
    transparent_crc(g_74.f8, "g_74.f8", print_hash_value);
    transparent_crc(g_74.f9, "g_74.f9", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_90.f4, "g_90.f4", print_hash_value);
    transparent_crc(g_90.f5, "g_90.f5", print_hash_value);
    transparent_crc(g_90.f6, "g_90.f6", print_hash_value);
    transparent_crc(g_90.f7, "g_90.f7", print_hash_value);
    transparent_crc(g_155.f0, "g_155.f0", print_hash_value);
    transparent_crc(g_155.f1, "g_155.f1", print_hash_value);
    transparent_crc(g_155.f2, "g_155.f2", print_hash_value);
    transparent_crc(g_155.f3, "g_155.f3", print_hash_value);
    transparent_crc(g_155.f4, "g_155.f4", print_hash_value);
    transparent_crc(g_155.f5, "g_155.f5", print_hash_value);
    transparent_crc(g_155.f6, "g_155.f6", print_hash_value);
    transparent_crc(g_155.f7, "g_155.f7", print_hash_value);
    transparent_crc(g_155.f8, "g_155.f8", print_hash_value);
    transparent_crc(g_155.f9, "g_155.f9", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_358, "g_358", print_hash_value);
    transparent_crc(g_391, "g_391", print_hash_value);
    transparent_crc(g_430, "g_430", print_hash_value);
    transparent_crc(g_439, "g_439", print_hash_value);
    transparent_crc(g_509.f0, "g_509.f0", print_hash_value);
    transparent_crc(g_509.f1, "g_509.f1", print_hash_value);
    transparent_crc(g_509.f2, "g_509.f2", print_hash_value);
    transparent_crc(g_509.f3, "g_509.f3", print_hash_value);
    transparent_crc(g_509.f4, "g_509.f4", print_hash_value);
    transparent_crc(g_509.f5, "g_509.f5", print_hash_value);
    transparent_crc(g_509.f6, "g_509.f6", print_hash_value);
    transparent_crc(g_509.f7, "g_509.f7", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_586, "g_586", print_hash_value);
    transparent_crc(g_643.f0, "g_643.f0", print_hash_value);
    transparent_crc(g_643.f1, "g_643.f1", print_hash_value);
    transparent_crc(g_643.f2, "g_643.f2", print_hash_value);
    transparent_crc(g_643.f3, "g_643.f3", print_hash_value);
    transparent_crc(g_643.f4, "g_643.f4", print_hash_value);
    transparent_crc(g_643.f5, "g_643.f5", print_hash_value);
    transparent_crc(g_643.f6, "g_643.f6", print_hash_value);
    transparent_crc(g_643.f7, "g_643.f7", print_hash_value);
    transparent_crc(g_643.f8, "g_643.f8", print_hash_value);
    transparent_crc(g_643.f9, "g_643.f9", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
