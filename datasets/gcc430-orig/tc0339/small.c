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
   unsigned char f1;
   unsigned long long f2;
   long long f3;
};

struct S1 {
   int f0;
   unsigned char f1;
   struct S0 f2;
   int f3;
   int f4;
   unsigned short f5;
   unsigned f6;
   unsigned long long f7;
};


static unsigned g_5 = 0x0D658EDFL;
static long long g_7 = 0x2C87A7525D2D9150LL;
static long long g_32 = 0x42C3B03C3FA3C9E4LL;
static long long *g_31 = &g_32;
static int g_60 = 0xD1882859L;
static unsigned short g_63 = 9UL;
static unsigned long long g_95 = 0x14D69EA850200630LL;
static unsigned long long g_97 = 0x0B9BD427A37A7FFALL;
static unsigned short *g_98 = (void*)0;
static char g_109 = 0xEEL;
static unsigned g_110 = 1UL;
static unsigned g_112 = 0xB0E7A368L;
static struct S0 g_136 = {0xFDDFC4C5L,0x22L,1UL,8L};
static struct S0 *g_135 = &g_136;
static char **g_138 = (void*)0;
static struct S1 *g_224 = (void*)0;
static struct S1 g_246 = {0x6AB49656L,255UL,{0xE52D5821L,0xC1L,0xDF51878783DA1C23LL,0x7E4DA9278B1CBCA9LL},0xBBE3BBB7L,0x8705FF08L,0UL,4294967290UL,18446744073709551612UL};
static long long *g_248 = (void*)0;
static long long **g_247 = &g_248;
static char g_262 = 1L;
static char *g_261 = &g_262;
static short g_280 = 0x2BEFL;
static struct S0 *g_382 = &g_246.f2;
static short g_455 = 1L;
static int *g_632 = (void*)0;
static int **g_631 = &g_632;
static int ***g_630 = &g_631;
static short *g_641 = &g_280;
static short **g_640 = &g_641;
static short g_655 = 1L;
static char g_666 = 0x11L;
static struct S1 **g_694 = &g_224;
static struct S1 ***g_693 = &g_694;
static unsigned short **g_706 = &g_98;
static unsigned short ***g_705 = &g_706;
static unsigned short ***g_709 = &g_706;



static unsigned long long func_1(void);
static char func_8(unsigned short p_9, int p_10);
static char func_22(long long * p_23, short p_24);
static unsigned short func_26(long long * p_27, short p_28);
static long long * func_29(short p_30);
static struct S1 func_37(long long ** p_38, struct S0 p_39);
static long long ** func_40(long long ** p_41, struct S1 p_42, long long * p_43, int p_44, long long ** p_45);
static long long ** func_46(unsigned short p_47);
static struct S1 func_48(int p_49, unsigned char p_50);
static int * func_53(unsigned p_54, short p_55, long long * p_56);
static unsigned long long func_1(void)
{
    long long l_4 = 0x371247ADF1ADB2BCLL;
    int *l_537 = &g_246.f3;
    unsigned long long **l_577 = (void*)0;
    unsigned long long ***l_576 = &l_577;
    unsigned short l_599 = 65528UL;
    struct S1 **l_625 = &g_224;
    struct S1 ***l_624 = &l_625;
    struct S0 l_674 = {0xFDA4AFFDL,0xB1L,0x751F4F8730F27EBFLL,-4L};
    int l_678 = 1L;
    int l_685 = 3L;
    char l_688 = 0x46L;
    if ((0x59609C3FBB4EBB0CLL && 18446744073709551612UL))
    {
        int *l_535 = &g_246.f3;
        unsigned l_574 = 4294967295UL;
        long long *l_598 = &g_7;
        long long *l_612 = &g_136.f3;
        long long *l_613 = &g_246.f2.f3;
        int l_621 = (-2L);
        short *l_639 = &g_280;
        short **l_638 = &l_639;
        char l_735 = 0xC1L;
        long long *l_743 = &l_674.f3;
        unsigned long long ****l_745 = &l_576;
        unsigned short l_746 = 65535UL;
        if ((~1L))
        {
            long long *l_6 = &g_7;
            int l_13 = 0x01874DA8L;
            char l_547 = 0xD8L;
            unsigned *l_578 = (void*)0;
            unsigned *l_579 = (void*)0;
            short *l_618 = &g_455;
            short **l_617 = &l_618;
            struct S0 l_629 = {-6L,0xBCL,18446744073709551615UL,0x7364B51ABF02F0CALL};
            unsigned l_650 = 0x9B34E22BL;
            unsigned long long l_665 = 0x347D94C0175571C7LL;
            if (((safe_mod_func_int64_t_s_s(l_4, ((*l_6) = g_5))) > func_8(g_5, (((l_13 |= (safe_add_func_uint32_t_u_u(l_4, l_4))) > (((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((1L > 0UL), (l_6 == (void*)0))), g_5)), g_5)), g_5)) ^ g_5) <= g_5)) & 0x09L))))
            {
                int **l_536 = &l_535;
                unsigned long long l_544 = 0xB7BA886B4C2A5C60LL;
                int *l_545 = (void*)0;
                int *l_546 = &g_246.f0;
                (*l_546) |= (((0xF4E1L >= (g_63 = (((!((&g_60 != (l_537 = ((*l_536) = l_535))) && (((safe_lshift_func_uint16_t_u_s((safe_mod_func_int64_t_s_s((0x52D2AC3BA0ABFA0ELL > (safe_lshift_func_int16_t_s_u(l_13, 5))), g_262)), g_246.f7)) | 0x25D5L) >= 0UL))) & l_544) == l_544))) >= l_13) >= 6UL);
                l_547 |= g_246.f3;
                for (g_246.f2.f0 = (-10); (g_246.f2.f0 == (-28)); g_246.f2.f0--)
                {
                    char *l_558 = (void*)0;
                    char *l_559 = &g_109;
                    short *l_560 = &g_455;
                    int l_566 = (-10L);
                    short l_575 = 0x5185L;
                    (*l_546) = ((safe_add_func_int64_t_s_s(0xF14233DAA163FD91LL, ((void*)0 != g_261))) == (*g_31));
                    if (((safe_rshift_func_uint16_t_u_s(0x09E9L, 0)) | (func_26((*g_247), (safe_mod_func_int8_t_s_s((*g_261), func_26(&l_4, ((*l_560) = (safe_mod_func_int8_t_s_s((!((*l_559) |= (**l_536))), (*g_261)))))))) ^ g_60)))
                    {
                        if (l_13)
                            break;
                        (*l_537) |= ((*l_546) &= (l_547 != g_95));
                    }
                    else
                    {
                        short l_565 = (-9L);
                        int l_573 = 0x356F701CL;
                        (*l_537) = (((safe_lshift_func_int16_t_s_s((**l_536), ((safe_add_func_int64_t_s_s((l_573 |= ((l_565 | (((*g_261) = l_566) > (g_246.f7 >= (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(((*l_560) = (+(255UL <= ((l_565 < (l_566 > g_95)) | (g_280 | 0xCAF1L))))), 0x6F63L)), 14)), 0))))) > 0x798927D9L)), g_246.f2.f3)) != g_246.f0))) || l_574) | 0x5C00L);
                        (*l_546) |= func_26((*g_247), l_575);
                    }
                    (*l_546) = (g_246.f7 && 0x7BE9L);
                    (*l_536) = &g_60;
                }
            }
            else
            {
                (*l_535) &= g_7;
            }
            if ((((*l_537) |= ((void*)0 == l_576)) && ((safe_mod_func_uint16_t_u_u(((*g_261) && (safe_sub_func_int64_t_s_s((safe_mul_func_int8_t_s_s(((0x99L <= (-1L)) ^ 0xEE40L), g_246.f0)), 1UL))), ((safe_sub_func_int16_t_s_s((g_136.f1 & 1L), 0x3F2DL)) & g_109))) < l_547)))
            {
                unsigned char l_592 = 251UL;
                unsigned char *l_597 = &g_246.f1;
                struct S1 l_603 = {0x2395F173L,3UL,{-1L,0x48L,18446744073709551615UL,0x319C4D5233801A11LL},0x9BFE476BL,0xB15B4352L,8UL,0x654EE130L,0x3EF0E739DBB08F21LL};
                struct S0 *l_627 = &l_603.f2;
                long long *l_633 = &g_246.f2.f3;
                if (((*l_535) = ((safe_lshift_func_uint16_t_u_u(g_246.f6, 13)) < (safe_add_func_int16_t_s_s(((*l_535) >= l_592), (safe_add_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u((*l_537), ((*l_597) = 0x5EL))) || ((func_26(l_598, (l_599 == (safe_lshift_func_int8_t_s_u((*l_535), 7)))) == g_246.f4) <= (*l_535))), l_592)))))))
                {
                    int l_602 = 0x7B3311D2L;
                    if (l_592)
                    {
                        struct S1 *l_604 = &g_246;
                        int l_607 = 0x29303491L;
                        (*l_604) = l_603;
                        (*l_537) = (safe_mod_func_uint64_t_u_u(g_246.f3, l_607));
                        return (*l_535);
                    }
                    else
                    {
                        short *l_610 = &g_455;
                        int **l_611 = &l_535;
                        (*l_535) = l_603.f2.f1;
                        (*l_611) = &l_602;
                        g_246.f0 ^= (**l_611);
                        (**l_611) = (255UL >= (*l_537));
                    }
                    if (g_246.f2.f2)
                    {
                        short l_614 = 0xB8B2L;
                        int l_626 = 0x82CCF61EL;
                        struct S0 **l_628 = &g_382;
                        l_626 &= ((l_614 | (safe_add_func_int16_t_s_s(((**l_617) = ((void*)0 == l_617)), (l_602 & ((*l_613) = (safe_rshift_func_int8_t_s_u(l_621, 4))))))) <= (safe_add_func_int8_t_s_s((l_13 | ((0x4716C15AL && ((void*)0 != l_624)) & (*g_261))), g_109)));
                        (*l_628) = l_627;
                        (*l_535) = (l_603.f2.f2 > (g_95 != (*l_537)));
                        (*g_382) = l_629;
                    }
                    else
                    {
                        short ***l_642 = &l_617;
                        (**g_630) = func_53(l_602, (+((void*)0 == g_630)), ((*g_247) = l_633));
                        (*g_632) &= (safe_lshift_func_uint16_t_u_u(l_602, (safe_sub_func_uint8_t_u_u(g_5, ((g_95 < g_246.f2.f2) == (l_638 != ((*l_642) = g_640)))))));
                    }
                    for (g_136.f2 = 0; (g_136.f2 > 57); g_136.f2 = safe_add_func_int8_t_s_s(g_136.f2, 4))
                    {
                        int **l_645 = &l_535;
                        (*l_645) = ((**g_630) = &l_13);
                        (*g_632) &= (safe_unary_minus_func_int64_t_s(func_26((*g_247), (safe_rshift_func_uint16_t_u_u(g_32, 15)))));
                    }
                    return g_246.f6;
                }
                else
                {
                    int **l_649 = &l_535;
                    (*l_649) = ((**g_630) = (**g_630));
                }
            }
            else
            {
                unsigned l_653 = 0x346C8994L;
                unsigned short *l_654 = &g_63;
                long long *l_660 = &g_136.f3;
                int *l_669 = &l_13;
                (*l_535) = l_650;
                if ((l_547 & (safe_sub_func_int16_t_s_s(((g_655 == ((*l_535) >= 0x090625CD1017FB5CLL)) <= 0xF973F48CCA81666CLL), 65535UL))))
                {
                    (*g_631) = func_53(g_246.f6, (safe_add_func_int16_t_s_s((safe_add_func_uint64_t_u_u(func_26(l_660, (*l_535)), ((**g_640) >= l_13))), ((*g_641) != ((safe_mod_func_uint16_t_u_u(((l_13 <= (&l_537 != (void*)0)) || (*g_641)), 0xE2FAL)) ^ g_655)))), (*g_247));
                }
                else
                {
                    for (g_246.f2.f3 = 0; (g_246.f2.f3 >= (-20)); g_246.f2.f3 = safe_sub_func_uint64_t_u_u(g_246.f2.f3, 1))
                    {
                        (*l_537) &= 0x0027B496L;
                        (*l_535) = l_665;
                        (*l_535) = g_666;
                    }
                }
                (*l_669) ^= (safe_sub_func_int64_t_s_s(((*l_537) != 0xDE46B37FL), l_653));
            }
        }
        else
        {
            struct S1 l_670 = {0x77ABA84BL,255UL,{0x9E2B5231L,0UL,18446744073709551615UL,9L},1L,0x43A5B179L,0xACC9L,4294967290UL,1UL};
            unsigned short *l_673 = &l_599;
            unsigned l_695 = 0xD9D3F4BCL;
            long long *l_700 = &g_32;
            int *l_744 = (void*)0;
            l_670 = l_670;
            if ((safe_add_func_int8_t_s_s(0xD8L, (0xBB1CL != ((*l_673) ^= ((**g_640) <= (*l_537)))))))
            {
                long long *l_677 = &l_674.f3;
                (*g_382) = l_674;
                l_678 = (safe_mod_func_int16_t_s_s(((*l_639) = (g_97 || ((*g_31) | (*g_31)))), ((*l_537) &= ((((*g_247) = (*g_247)) != &g_7) == (func_26(l_677, (l_670.f3 = (&g_98 != (void*)0))) && g_136.f0)))));
                (*l_537) ^= (-8L);
            }
            else
            {
                struct S0 **l_680 = &g_135;
                struct S0 ***l_679 = &l_680;
                short l_692 = 1L;
                char l_711 = (-1L);
                short **l_727 = &g_641;
                int l_736 = 0x39BA61CDL;
                if (((void*)0 == l_679))
                {
                    unsigned char *l_691 = &g_136.f1;
                    unsigned *l_696 = &l_670.f6;
                    int l_697 = 1L;
                    int *l_698 = (void*)0;
                    int *l_699 = &l_678;
                    (*l_699) ^= (safe_sub_func_uint16_t_u_u(l_670.f0, (safe_lshift_func_int16_t_s_u(l_685, (((((*l_696) = ((safe_rshift_func_uint16_t_u_s((l_688 > (safe_rshift_func_int8_t_s_s((g_261 != l_691), 7))), (func_8(l_692, ((*l_535) = (+(g_693 == (void*)0)))) <= g_7))) == l_695)) != 4294967295UL) != g_5) <= l_697)))));
                    if (g_280)
                    {
                        unsigned short ****l_707 = (void*)0;
                        unsigned short ****l_708 = &g_705;
                        unsigned long long l_710 = 18446744073709551615UL;
                        (*l_699) = l_695;
                        (*g_631) = func_53(g_246.f0, ((func_26(l_700, (safe_sub_func_int8_t_s_s((*l_535), (((safe_rshift_func_uint16_t_u_u(0UL, (((*l_708) = g_705) != (g_709 = (void*)0)))) == 0x5363L) | (func_26((*g_247), l_710) || 18446744073709551615UL))))) ^ (*l_535)) || l_711), (*g_247));
                        (**g_631) = (safe_unary_minus_func_int16_t_s(((l_710 == (*l_535)) | l_710)));
                    }
                    else
                    {
                        return l_711;
                    }
                }
                else
                {
                    char l_724 = 6L;
                    int l_734 = 0x6651280DL;
                    for (l_621 = 7; (l_621 != 12); l_621 = safe_add_func_uint64_t_u_u(l_621, 5))
                    {
                        int **l_719 = &g_632;
                    }
                    if (((*l_535) |= (safe_rshift_func_uint16_t_u_s((safe_lshift_func_int16_t_s_u(((*g_641) = (7UL == (l_692 & 0x0FL))), 3)), l_670.f4))))
                    {
                        (*l_535) |= (safe_mul_func_uint16_t_u_u(8UL, func_26(l_743, (((*l_743) = l_736) == ((void*)0 != l_744)))));
                        (***l_679) = (*g_135);
                    }
                    else
                    {
                        (*l_535) ^= func_26((*g_247), l_724);
                    }
                }
            }
        }
        (*l_537) = ((void*)0 != l_745);
        return l_746;
    }
    else
    {
        int l_747 = 0xC3FA9B88L;
        unsigned short *l_772 = &g_246.f5;
        (*l_537) &= l_747;
        if ((((void*)0 != &l_577) > g_280))
        {
            long long *l_759 = &l_4;
            unsigned short *l_771 = (void*)0;
            for (g_246.f7 = 17; (g_246.f7 < 31); g_246.f7 = safe_add_func_uint8_t_u_u(g_246.f7, 6))
            {
                struct S0 l_775 = {0x502BA5FDL,249UL,0xB67EA167F2A1ACE5LL,0xA4010B8CFD9F78D5LL};
                for (g_455 = 12; (g_455 > (-6)); g_455 = safe_sub_func_int32_t_s_s(g_455, 4))
                {
                    short l_752 = (-10L);
                    unsigned l_760 = 4UL;
                    unsigned char l_761 = 0x88L;
                    unsigned char *l_762 = (void*)0;
                    unsigned char *l_763 = &l_674.f1;
                    unsigned long long *l_764 = &g_136.f2;
                    (*l_537) = (l_752 == (safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u((0x5EFBEAD01E0DE219LL != (g_110 | ((*l_764) = ((g_136.f0 ^ func_26(l_759, l_760)) > (((*l_763) = func_26(l_759, l_761)) || (*g_261)))))), 1UL)), 2)), g_280)));
                    for (g_246.f6 = (-5); (g_246.f6 >= 53); g_246.f6 = safe_add_func_uint64_t_u_u(g_246.f6, 6))
                    {
                        struct S1 ****l_773 = &g_693;
                        int *l_774 = &g_60;
                        (*l_774) &= ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(func_26((*g_247), (((**g_705) = l_771) != (l_772 = (void*)0))), ((*g_641) = (**g_640)))), ((0xC3A4338FL >= ((((*l_773) = (void*)0) != (l_624 = (void*)0)) <= 2UL)) >= (*l_537)))) || (*g_641));
                    }
                    l_775 = ((*g_382) = l_674);
                }
                (*g_694) = (*g_694);
            }
            return l_747;
        }
        else
        {
            (**g_630) = (**g_630);
        }
        g_246 = g_246;
    }
    l_537 = ((**g_630) = (void*)0);
    for (g_655 = 0; (g_655 != (-21)); --g_655)
    {
        unsigned long long l_778 = 0x949F41671B50CAB1LL;
        return l_778;
    }
    (*g_135) = l_674;
    return l_674.f1;
}







static char func_8(unsigned short p_9, int p_10)
{
    long long *l_25 = (void*)0;
    long long *l_34 = &g_32;
    long long **l_33 = &l_34;
    int l_513 = 2L;
    if ((func_22(l_25, (func_26(func_29((g_31 == ((*l_33) = (void*)0))), l_513) | l_513)) || l_513))
    {
        int *l_523 = &g_246.f0;
        (*l_523) = g_136.f0;
        (*l_523) = (safe_mul_func_uint16_t_u_u(p_10, (safe_add_func_int16_t_s_s(func_26((*l_33), (p_9 && func_26((*g_247), g_112))), ((l_513 || (g_246.f7 && 249UL)) > (*l_523))))));
        for (g_60 = 0; (g_60 < 22); g_60++)
        {
            return (*g_261);
        }
    }
    else
    {
        l_513 = (safe_lshift_func_uint16_t_u_u(0x5EA8L, 4));
    }
    for (l_513 = (-16); (l_513 < (-14)); l_513 = safe_add_func_uint8_t_u_u(l_513, 9))
    {
        char l_534 = (-6L);
        g_60 &= l_513;
        l_534 = ((0UL > ((*g_31) ^= 9L)) & ((*g_261) < g_246.f3));
    }
    return p_9;
}







static char func_22(long long * p_23, short p_24)
{
    int **l_517 = (void*)0;
    int *l_519 = &g_246.f3;
    int **l_518 = &l_519;
    unsigned char *l_520 = &g_246.f1;
    struct S0 l_521 = {-2L,0xC8L,6UL,0x65A85A11AED37A76LL};
    struct S1 *l_522 = &g_246;
    (*l_518) = &g_60;
    (*l_522) = func_37(func_46((((*l_520) = 0xB8L) && (g_136.f0 != g_246.f3))), l_521);
    return (*g_261);
}







static unsigned short func_26(long long * p_27, short p_28)
{
    int *l_515 = &g_60;
    int **l_514 = &l_515;
    short **l_516 = (void*)0;
    (*l_514) = &g_60;
    l_516 = l_516;
    return p_28;
}







static long long * func_29(short p_30)
{
    int l_403 = 0x9AD659D5L;
    unsigned short *l_404 = &g_63;
    char *l_413 = (void*)0;
    int l_414 = 0L;
    unsigned long long **l_437 = (void*)0;
    unsigned long long ***l_436 = &l_437;
    long long *l_456 = &g_136.f3;
    int *l_472 = &l_403;
    struct S0 **l_505 = &g_382;
    struct S0 ***l_504 = &l_505;
    int *l_512 = &l_414;
    for (g_32 = 0; (g_32 == (-20)); g_32 = safe_sub_func_int8_t_s_s(g_32, 1))
    {
        unsigned short **l_392 = &g_98;
        unsigned short ***l_391 = &l_392;
        char ***l_399 = &g_138;
    }
    l_403 |= (~g_95);
    if (((((*l_404) = 65532UL) == (4UL == (safe_sub_func_int16_t_s_s(l_403, g_136.f2)))) || (g_112 = (safe_mod_func_int16_t_s_s(((l_403 = ((safe_add_func_uint16_t_u_u((g_136.f0 && (l_403 <= (safe_add_func_int8_t_s_s((*g_261), (p_30 & ((g_109 = (!l_403)) != l_403)))))), g_246.f5)) >= 0UL)) > p_30), l_414)))))
    {
        unsigned long long *l_427 = &g_97;
        int l_428 = 0x98EA8F6FL;
        int *l_429 = &g_246.f3;
        int *l_430 = (void*)0;
        int *l_431 = &l_403;
        unsigned long long **l_435 = &l_427;
        unsigned long long ***l_434 = &l_435;
        char *l_446 = &g_109;
        unsigned char *l_447 = &g_246.f2.f1;
        unsigned short l_448 = 0UL;
        short *l_453 = &g_280;
        short *l_454 = &g_455;
        (*l_429) = (((p_30 & ((safe_mul_func_uint8_t_u_u((l_403 = 1UL), (p_30 != ((safe_rshift_func_uint8_t_u_u((g_136.f0 && (safe_rshift_func_uint16_t_u_s(p_30, 7))), (safe_add_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u(((safe_sub_func_int8_t_s_s(((0xBC8077E6L && p_30) == (((((*l_427) &= g_136.f3) || ((p_30 > p_30) ^ g_246.f7)) ^ (-1L)) > l_414)), g_136.f1)) && g_136.f2), 3)), l_414)))) && 0xFAL)))) & 1L)) > g_136.f2) >= l_428);
        (*l_431) &= (((*l_429) <= p_30) != (~l_414));
lbl_457:
        (*l_431) = (safe_sub_func_uint32_t_u_u((l_434 != (l_436 = &l_435)), ((safe_rshift_func_uint16_t_u_u(7UL, 2)) || p_30)));
        if ((safe_mul_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u(((*l_447) = ((safe_mod_func_int8_t_s_s(((*l_446) ^= (*g_261)), l_414)) >= p_30)), (((*l_431) <= l_448) <= (safe_rshift_func_uint16_t_u_u(p_30, (((*l_454) = ((((*l_453) = (safe_rshift_func_int8_t_s_u(((*l_429) >= g_246.f2.f0), (*l_431)))) != (-1L)) < g_246.f5)) & 0xE4B5L)))))) > p_30), 0x5BL)))
        {
            return l_456;
        }
        else
        {
            if (g_246.f5)
                goto lbl_457;
        }
    }
    else
    {
        unsigned short **l_458 = &l_404;
        unsigned short **l_460 = &g_98;
        unsigned short ***l_459 = &l_460;
        unsigned short **l_462 = &g_98;
        unsigned short ***l_461 = &l_462;
        int *l_486 = &l_414;
        if ((l_403 != (l_458 != ((*l_461) = ((*l_459) = l_458)))))
        {
            unsigned long long ****l_463 = (void*)0;
            unsigned long long ****l_464 = &l_436;
            int *l_465 = &l_414;
            (*l_465) |= (((*l_464) = &l_437) != (void*)0);
            (*l_465) = l_414;
        }
        else
        {
            long long *l_471 = (void*)0;
            int l_484 = 0xF3CA0FBAL;
            int **l_492 = (void*)0;
            int ***l_493 = &l_492;
            unsigned l_496 = 0x851BF9D6L;
            char l_497 = 0xEFL;
            if (l_403)
            {
                unsigned char l_470 = 7UL;
                l_472 = func_53((safe_lshift_func_uint16_t_u_s((((*g_261) ^= l_403) && (safe_mod_func_uint8_t_u_u(g_5, p_30))), 15)), l_470, l_471);
lbl_488:
                (*l_472) = 0L;
                for (g_246.f2.f3 = 0; (g_246.f2.f3 > 28); ++g_246.f2.f3)
                {
                    (*l_472) = g_109;
                    for (g_246.f4 = 16; (g_246.f4 > 9); g_246.f4--)
                    {
                        unsigned short *l_477 = &g_63;
                        unsigned short **l_478 = &g_98;
                        int l_479 = 0x70BC05A1L;
                        short *l_480 = (void*)0;
                        short *l_481 = (void*)0;
                        short *l_482 = &g_280;
                        (*l_472) = (((((***l_459) = ((l_477 = (**l_461)) != ((*l_478) = &g_63))) && ((*l_482) = l_479)) || p_30) < (safe_unary_minus_func_int64_t_s(6L)));
                        (*l_472) ^= 0L;
                        if (l_484)
                            break;
                        if (p_30)
                            continue;
                    }
                    if (l_470)
                    {
                        long long *l_485 = &g_32;
                        return l_485;
                    }
                    else
                    {
                        int **l_487 = &l_486;
                        (*g_135) = (*g_135);
                        l_486 = &g_60;
                        (*l_487) = &l_484;
                        if (g_136.f1)
                            goto lbl_488;
                    }
                    l_414 ^= ((*l_472) ^= p_30);
                }
                (*l_486) |= p_30;
            }
            else
            {
                return (*g_247);
            }
            for (g_246.f4 = (-20); (g_246.f4 > 19); ++g_246.f4)
            {
                int *l_491 = &l_403;
                (*l_486) &= (-1L);
                l_491 = &g_60;
            }
            (*l_493) = l_492;
            for (g_136.f0 = 17; (g_136.f0 == 17); g_136.f0 = safe_add_func_int64_t_s_s(g_136.f0, 6))
            {
                unsigned long long l_498 = 2UL;
                (*l_486) = 0xE79E50D2L;
                l_498 = ((1UL >= (l_496 ^= (*l_486))) || l_497);
            }
        }
        if (((*l_472) = (safe_rshift_func_int16_t_s_u(p_30, 11))))
        {
            (*l_472) = g_95;
        }
        else
        {
            char l_501 = 7L;
            (*l_472) = (l_501 == (!l_501));
        }
    }
    (*l_512) ^= (((((safe_mul_func_int16_t_s_s(((l_504 != (void*)0) | g_97), p_30)) < (safe_mod_func_int64_t_s_s((safe_sub_func_uint64_t_u_u(0xE9E42C7A6F0FA86CLL, (safe_add_func_int16_t_s_s(((*l_472) = (g_112 > ((*l_472) ^ ((*g_31) < p_30)))), g_262)))), p_30))) == 0L) ^ p_30) ^ p_30);
    return l_456;
}







static struct S1 func_37(long long ** p_38, struct S0 p_39)
{
    unsigned char l_384 = 252UL;
    int *l_385 = &g_246.f0;
    int **l_386 = &l_385;
    struct S1 l_387 = {0x5F5C8104L,0x04L,{0x2118AF61L,0xF0L,0x0E1289C799DE5952LL,0x53991F643FE2EC41LL},-1L,-1L,0UL,1UL,5UL};
    (*l_385) = l_384;
    (*l_386) = l_385;
    (*l_385) |= ((void*)0 == &l_384);
    return l_387;
}







static long long ** func_40(long long ** p_41, struct S1 p_42, long long * p_43, int p_44, long long ** p_45)
{
    char *l_257 = &g_109;
    char *l_258 = (void*)0;
    int l_276 = (-7L);
    unsigned *l_281 = &g_246.f6;
    struct S1 **l_283 = &g_224;
    long long **l_286 = &g_248;
    unsigned long long **l_298 = (void*)0;
    unsigned long long ***l_297 = &l_298;
    unsigned l_316 = 4294967294UL;
    struct S0 **l_322 = &g_135;
    for (p_44 = 0; (p_44 != 29); p_44 = safe_add_func_int8_t_s_s(p_44, 9))
    {
        struct S0 l_252 = {1L,1UL,1UL,0x5AE9B15D6436AE91LL};
        int *l_264 = &g_60;
        unsigned l_343 = 0xAD130623L;
        struct S1 l_346 = {0L,0xDFL,{0xAC2458ECL,0x6CL,7UL,-10L},0xD1C9BFA9L,-5L,65530UL,4294967295UL,0xC689B7A3A9C7EA6ELL};
        char *l_353 = &g_262;
        long long *l_372 = &g_246.f2.f3;
    }
    g_382 = ((*l_322) = (void*)0);
    return l_286;
}







static long long ** func_46(unsigned short p_47)
{
    struct S1 l_122 = {8L,9UL,{0x9B13E438L,0xB9L,0x827B285FCF45A8FDLL,0xDDE4B234A561BD86LL},0L,0xBDBF62E6L,65535UL,4UL,0x6FBF5F8E9B1403B7LL};
    int l_123 = 0xB8E86F5FL;
    unsigned long long *l_203 = &g_97;
    long long **l_245 = &g_31;
lbl_219:
    l_122 = func_48(p_47, g_5);
    if (((l_122.f3 == (((l_122.f7 & l_123) || g_109) | p_47)) | p_47))
    {
        struct S0 l_159 = {0x22598743L,0xCCL,0x7F025D12158B1AF3LL,0x7C00CB0D776FE5E6LL};
        int *l_189 = &g_60;
        for (g_109 = 0; (g_109 == (-28)); --g_109)
        {
            long long l_162 = 0xF3E0A3195B5E54ACLL;
            struct S0 l_176 = {-6L,251UL,0xB02917F3F7D6CEE1LL,0xA350FA80559AC6BCLL};
            long long **l_186 = &g_31;
            if (p_47)
            {
                int l_130 = 1L;
                int *l_134 = &l_122.f0;
                long long **l_194 = &g_31;
                for (l_122.f1 = 0; (l_122.f1 > 59); ++l_122.f1)
                {
                    int **l_140 = &l_134;
                    for (l_122.f5 = (-10); (l_122.f5 <= 33); ++l_122.f5)
                    {
                        long long *l_131 = &g_32;
                        int *l_133 = &l_122.f0;
                        int **l_132 = &l_133;
                        struct S0 **l_137 = &g_135;
                        char ***l_139 = &g_138;
                        l_134 = ((*l_132) = func_53(l_130, g_109, l_131));
                        (*l_137) = g_135;
                        (*l_139) = g_138;
                    }
                    (*l_140) = &g_60;
                    for (l_122.f2.f3 = 0; (l_122.f2.f3 >= (-9)); l_122.f2.f3--)
                    {
                        int *l_157 = (void*)0;
                        int *l_158 = &l_130;
                        (*l_158) = (safe_mod_func_uint64_t_u_u(g_136.f3, ((((safe_add_func_uint16_t_u_u(4UL, (safe_mod_func_uint32_t_u_u((g_112 = (safe_mod_func_uint32_t_u_u(g_136.f0, 0x56E00778L))), 0xDA225054L)))) == (l_122.f0 | 0x3AL)) == (((((*g_31) && ((safe_add_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(((safe_sub_func_int8_t_s_s((((**l_140) = 0x2DL) | 8L), g_5)) || (*l_134)), p_47)), g_136.f1)) & 0UL)) >= (-10L)) != (-10L)) & 1L)) & 3UL)));
                        l_157 = l_157;
                    }
                    (*g_135) = l_159;
                }
                if (((safe_lshift_func_int16_t_s_s(l_162, 15)) == g_63))
                {
                    char **l_171 = (void*)0;
                    char *l_173 = (void*)0;
                    char **l_172 = &l_173;
                    int *l_174 = &l_130;
                    unsigned *l_175 = &l_122.f6;
                    g_60 = ((safe_rshift_func_int16_t_s_u(((safe_add_func_uint64_t_u_u(((-1L) & p_47), (g_136.f3 && (p_47 && ((*l_134) <= ((*l_175) ^= (~(9L != (safe_rshift_func_uint8_t_u_s((((*l_174) = ((safe_sub_func_int16_t_s_s((p_47 ^ g_136.f3), (((*l_172) = &g_109) == (void*)0))) || p_47)) <= l_122.f1), p_47)))))))))) >= 65535UL), 8)) ^ l_159.f3);
                    (*g_135) = l_176;
                    (*l_134) ^= g_5;
                    if (g_109)
                        break;
                }
                else
                {
                    unsigned *l_183 = &l_122.f6;
                    long long **l_185 = (void*)0;
                    long long ***l_184 = &l_185;
                    int l_187 = (-1L);
                    int l_188 = (-3L);
                    if ((safe_add_func_uint16_t_u_u(g_32, (l_188 |= (safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u(l_159.f0, ((0xFC644E58L < ((*l_183) |= (!0x1C7F3114L))) & (((*l_184) = (void*)0) != (l_186 = &g_31))))) >= l_176.f3), l_187))))))
                    {
                        int **l_190 = (void*)0;
                        int **l_191 = &l_189;
                        (*l_191) = l_189;
                    }
                    else
                    {
                        int **l_192 = &l_189;
                        struct S0 **l_193 = &g_135;
                        (*g_135) = (*g_135);
                        (*l_192) = &g_60;
                        (*l_193) = &g_136;
                    }
                }
                return l_194;
            }
            else
            {
                return &g_31;
            }
        }
    }
    else
    {
        unsigned long long *l_204 = (void*)0;
        unsigned long long **l_205 = &l_204;
        int l_218 = 4L;
        long long **l_244 = &g_31;
        if ((((~(safe_rshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(((0x5C2F4BCE8A264C33LL && (p_47 ^ 0xE41DE62AL)) <= ((safe_rshift_func_int16_t_s_u(((safe_sub_func_int32_t_s_s(p_47, ((l_203 = (void*)0) == ((*l_205) = l_204)))) & (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(g_109, (safe_sub_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(l_218, 0L)) && l_122.f2.f0), 0x326BL)), 65534UL)), 0x432FL)))), p_47))), p_47)) | p_47)), p_47)), 3))) ^ p_47) >= p_47))
        {
            int *l_222 = (void*)0;
            int **l_223 = &l_222;
            if ((p_47 | g_136.f2))
            {
                if (g_136.f1)
                    goto lbl_219;
            }
            else
            {
                int *l_221 = &l_218;
                int **l_220 = &l_221;
                (*l_220) = &g_60;
            }
            (*l_223) = l_222;
            (*l_223) = func_53(p_47, (!p_47), &g_32);
        }
        else
        {
            struct S1 *l_225 = &l_122;
            struct S1 **l_226 = &g_224;
            int *l_227 = &l_122.f0;
            (*l_226) = (l_225 = g_224);
lbl_232:
            (*l_227) &= (-1L);
            for (l_122.f1 = 0; (l_122.f1 > 35); l_122.f1++)
            {
                struct S0 *l_230 = &l_122.f2;
                struct S0 **l_231 = (void*)0;
                g_135 = l_230;
                if (l_122.f2.f3)
                    goto lbl_232;
            }
            for (l_122.f7 = (-12); (l_122.f7 >= 19); l_122.f7++)
            {
                int **l_235 = (void*)0;
                int **l_236 = &l_227;
                struct S1 *l_243 = &l_122;
                (*l_236) = &g_60;
                for (l_122.f6 = 0; (l_122.f6 == 26); l_122.f6++)
                {
                    int *l_239 = &l_218;
                    (*l_239) ^= g_60;
                    for (l_122.f4 = 0; (l_122.f4 == 10); l_122.f4++)
                    {
                        unsigned long long ***l_242 = &l_205;
                        g_60 &= (-3L);
                        (*l_242) = &l_204;
                        (*l_236) = (*l_236);
                    }
                }
                (*l_226) = l_243;
            }
        }
        return l_244;
    }
    return l_245;
}







static struct S1 func_48(int p_49, unsigned char p_50)
{
    long long *l_58 = &g_32;
    unsigned short *l_99 = &g_63;
    long long **l_105 = (void*)0;
    long long ***l_104 = &l_105;
    char *l_108 = &g_109;
    int l_111 = (-3L);
    int l_113 = 0xC5ABB530L;
    int l_114 = 0x3C15F2FBL;
    struct S1 l_121 = {1L,0xAFL,{0x00D476A2L,255UL,0x220C4E49CAF053B5LL,0xBCEF862069947A4BLL},0xF6EB6F9EL,0x93F4BB62L,0x1260L,0UL,0x05BB6F065A9757D9LL};
    for (p_50 = 0; (p_50 == 25); p_50 = safe_add_func_uint16_t_u_u(p_50, 5))
    {
        unsigned short l_57 = 0xAF20L;
        int *l_87 = &g_60;
        int **l_86 = &l_87;
        unsigned long long *l_94 = &g_95;
        unsigned long long *l_96 = &g_97;
        (*l_86) = func_53(l_57, g_5, l_58);
        (**l_86) &= (safe_add_func_uint16_t_u_u((65535UL == ((0UL & ((safe_add_func_int8_t_s_s(p_50, p_50)) >= (((*l_96) |= ((*l_94) = p_49)) ^ p_49))) | p_50)), ((g_98 = (void*)0) == l_99)));
    }
    l_113 &= (((((void*)0 == &g_31) > (p_50 <= (+p_50))) != (l_111 = (safe_add_func_uint32_t_u_u((l_104 != (void*)0), (((safe_mul_func_uint8_t_u_u(p_49, ((*l_108) ^= g_5))) && (g_110 = p_50)) > p_50))))) & g_112);
    if ((l_113 ^ l_114))
    {
        unsigned short **l_116 = &l_99;
        unsigned short ***l_115 = &l_116;
        (*l_115) = &l_99;
    }
    else
    {
        int *l_117 = &l_113;
        int **l_118 = &l_117;
        int *l_119 = (void*)0;
        int *l_120 = &l_113;
        (*l_117) = g_97;
        (*l_117) = p_49;
        (*l_120) &= (((*l_118) = &g_60) != &g_60);
        (*l_120) = g_63;
    }
    return l_121;
}







static int * func_53(unsigned p_54, short p_55, long long * p_56)
{
    int *l_59 = &g_60;
    long long **l_78 = &g_31;
    long long ***l_85 = &l_78;
    (*l_59) = g_32;
    (*l_59) = g_60;
    if (p_55)
    {
        long long **l_61 = &g_31;
        unsigned short *l_62 = &g_63;
        (*l_59) &= (p_54 >= (+((*l_62) |= (((*l_61) = &g_32) != &g_32))));
    }
    else
    {
        unsigned short *l_64 = (void*)0;
        int l_71 = 0x31AC0EF1L;
        if ((((((void*)0 == l_64) == (g_5 && (*g_31))) ^ g_32) ^ ((((safe_mul_func_uint16_t_u_u((18446744073709551615UL <= (safe_rshift_func_int8_t_s_u(((safe_mul_func_int8_t_s_s(p_54, g_5)) || ((*g_31) | l_71)), p_55))), (*l_59))) == (*g_31)) != p_55) || l_71)))
        {
            int l_83 = 0L;
            int **l_84 = &l_59;
            l_71 |= p_54;
            for (g_63 = 0; (g_63 == 16); ++g_63)
            {
                (*l_59) |= g_63;
            }
            (*l_59) = (((p_54 > ((g_32 & (safe_mod_func_int8_t_s_s((safe_add_func_uint8_t_u_u(0xDEL, (l_78 != (void*)0))), (safe_lshift_func_int16_t_s_u(p_55, (safe_add_func_uint64_t_u_u(l_83, (((g_5 == l_71) >= 0xE9B690C2L) > 0xA1A718AFL)))))))) != 0x6233L)) > (*l_59)) || l_83);
            (*l_84) = &g_60;
        }
        else
        {
            return &g_60;
        }
    }
    (*l_85) = &g_31;
    return l_59;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_63, "g_63", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_97, "g_97", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_112, "g_112", print_hash_value);
    transparent_crc(g_136.f0, "g_136.f0", print_hash_value);
    transparent_crc(g_136.f1, "g_136.f1", print_hash_value);
    transparent_crc(g_136.f2, "g_136.f2", print_hash_value);
    transparent_crc(g_136.f3, "g_136.f3", print_hash_value);
    transparent_crc(g_246.f0, "g_246.f0", print_hash_value);
    transparent_crc(g_246.f1, "g_246.f1", print_hash_value);
    transparent_crc(g_246.f2.f0, "g_246.f2.f0", print_hash_value);
    transparent_crc(g_246.f2.f1, "g_246.f2.f1", print_hash_value);
    transparent_crc(g_246.f2.f2, "g_246.f2.f2", print_hash_value);
    transparent_crc(g_246.f2.f3, "g_246.f2.f3", print_hash_value);
    transparent_crc(g_246.f3, "g_246.f3", print_hash_value);
    transparent_crc(g_246.f4, "g_246.f4", print_hash_value);
    transparent_crc(g_246.f5, "g_246.f5", print_hash_value);
    transparent_crc(g_246.f6, "g_246.f6", print_hash_value);
    transparent_crc(g_246.f7, "g_246.f7", print_hash_value);
    transparent_crc(g_262, "g_262", print_hash_value);
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_455, "g_455", print_hash_value);
    transparent_crc(g_655, "g_655", print_hash_value);
    transparent_crc(g_666, "g_666", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
