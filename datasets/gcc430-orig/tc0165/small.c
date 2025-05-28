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
   unsigned char f2;
   unsigned f3;
};

union U1 {
   char * f0;
   short f1;
};


static char g_13 = 0x30L;
static char *g_12 = &g_13;
static char **g_11 = &g_12;
static char ***g_10 = &g_11;
static int g_16 = 0L;
static unsigned short g_76 = 7UL;
static unsigned short g_78 = 0UL;
static union U1 g_89 = {0};
static struct S0 g_96 = {-1L,0xA4L,0x54L,0x5D8D6691L};
static int g_121 = 0xF0B8C27AL;
static struct S0 *g_127 = &g_96;
static struct S0 **g_126 = &g_127;
static int g_161 = 0xB6AC9542L;
static int *g_187 = (void*)0;
static union U1 *g_209 = &g_89;
static union U1 **g_208 = &g_209;
static struct S0 g_252 = {0xACE08CD4L,0xB8L,8UL,1UL};
static int g_279 = 7L;
static unsigned short *g_292 = &g_78;
static unsigned short **g_291 = &g_292;
static unsigned long long g_305 = 1UL;
static long long g_361 = 0x2CB2800C3B0A8462LL;
static unsigned short g_374 = 65535UL;
static short g_404 = 0L;
static unsigned long long g_466 = 0x0D78081E67CEA313LL;
static int **g_555 = &g_187;
static int ***g_554 = &g_555;
static char g_558 = 2L;
static unsigned g_687 = 0x09C69C08L;
static long long g_739 = 0L;
static unsigned g_798 = 0xC297156CL;
static unsigned *g_835 = (void*)0;
static unsigned **g_834 = &g_835;
static unsigned ***g_833 = &g_834;
static unsigned ***g_840 = &g_834;
static unsigned ***g_842 = &g_834;
static char **g_902 = &g_12;



static short func_1(void);
static unsigned long long func_21(short p_22, char *** p_23, unsigned long long p_24, char ** p_25, unsigned p_26);
static short func_27(char *** p_28);
static union U1 * func_29(int p_30, struct S0 p_31);
static struct S0 func_33(unsigned long long p_34);
static int func_35(char * p_36, struct S0 p_37);
static long long func_42(int * p_43);
static int * func_44(unsigned p_45, char *** p_46, union U1 p_47, int p_48, char ** p_49);
static long long func_52(char *** p_53, int p_54, union U1 * p_55, long long p_56, union U1 * p_57);
static union U1 * func_59(char p_60, char * p_61);
static short func_1(void)
{
    char **l_2 = (void*)0;
    char ***l_3 = &l_2;
    int l_6 = 0xF90A3CFCL;
    unsigned char l_7 = 5UL;
    int *l_14 = &l_6;
    int *l_15 = &g_16;
    short *l_402 = (void*)0;
    short *l_403 = &g_404;
    unsigned short ***l_405 = &g_291;
    unsigned short ***l_407 = &g_291;
    unsigned short ****l_406 = &l_407;
    union U1 *l_645 = &g_89;
    unsigned short l_656 = 0x402BL;
    struct S0 l_676 = {-1L,248UL,0UL,0x98B602BCL};
    union U1 l_727 = {0};
    unsigned **l_832 = (void*)0;
    unsigned ***l_831 = &l_832;
    unsigned ***l_841 = (void*)0;
    unsigned char l_848 = 247UL;
    (*l_3) = l_2;
    (*l_15) = ((*l_14) = (safe_lshift_func_uint8_t_u_s(((l_7 = ((0x8E1B8814L < 0xDEAD9BACL) >= (65529UL == ((-8L) > l_6)))) ^ (safe_sub_func_int8_t_s_s(((&l_2 == g_10) != ((void*)0 != (*l_3))), (**g_11)))), (**g_11))));
    if ((safe_rshift_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(func_21(((*l_403) = (g_89.f1 = func_27(&l_2))), g_10, (l_405 == ((*l_406) = &g_291)), (*l_3), ((!(((g_121 < (((safe_add_func_uint16_t_u_u((*l_14), g_121)) & (*l_14)) & 0xF971L)) >= 0xD4A3L) ^ (*l_14))) >= g_121)), g_121)), g_121)))
    {
        unsigned long long l_623 = 0x7093241F1A4CECB1LL;
        int **l_624 = &l_14;
        int *l_625 = &g_279;
        struct S0 l_675 = {-1L,0UL,0xDBL,0x56D7C9D4L};
        struct S0 *l_679 = (void*)0;
        unsigned long long l_691 = 0x34669E692470B015LL;
        struct S0 l_740 = {0xB14C194DL,4UL,5UL,0x630CDF4DL};
        char ***l_767 = &g_11;
        char **l_770 = &g_12;
        union U1 l_773 = {0};
        char ***l_801 = &l_2;
        int l_807 = (-1L);
        if (((*l_15) = (((*l_624) = func_44((safe_sub_func_int64_t_s_s(l_623, g_374)), &g_11, (**g_208), l_623, (*l_3))) == (l_625 = &g_279))))
        {
            unsigned l_629 = 0x2741C40EL;
            struct S0 l_634 = {0x97D33F3FL,0xF5L,255UL,0x9C08F455L};
            char ***l_639 = &l_2;
            int *l_692 = (void*)0;
            struct S0 l_724 = {0xA38E7296L,0x86L,0x1BL,0UL};
            union U1 *l_758 = &g_89;
            int l_762 = 0x5030865EL;
            if (((void*)0 != &g_10))
            {
                char l_628 = 1L;
                union U1 l_648 = {0};
                int *l_653 = &g_161;
                int *l_655 = &g_279;
                char **l_670 = &g_12;
                unsigned *l_686 = &g_687;
                unsigned **l_685 = &l_686;
                (*l_625) = (safe_lshift_func_uint8_t_u_s(g_13, 3));
                if ((((((****l_406) = l_628) || l_629) < (safe_mul_func_int8_t_s_s(l_629, ((*l_15) = func_52(&g_11, l_628, func_29(((safe_add_func_int16_t_s_s(0x0AB0L, (*l_15))) > l_628), l_634), g_252.f0, (*g_208)))))) || (*l_15)))
                {
                    char ***l_644 = &l_2;
                    int l_649 = (-4L);
                    for (g_96.f0 = 0; (g_96.f0 != (-7)); g_96.f0 = safe_sub_func_uint32_t_u_u(g_96.f0, 6))
                    {
                        union U1 *l_640 = &g_89;
                        long long l_641 = 0x58E6A85570AE5913LL;
                        unsigned char *l_646 = (void*)0;
                        unsigned char *l_647 = &g_96.f2;
                        (*l_15) = ((safe_mod_func_int64_t_s_s(((*g_208) != (*g_208)), func_52(l_639, (*l_625), l_640, l_641, (*g_208)))) & ((*l_647) = ((((safe_rshift_func_uint16_t_u_s(func_52(l_644, l_628, l_645, l_634.f1, l_645), g_78)) ^ 0L) && 0x431FF263L) != 0x250E1EBB0A229762LL)));
                        return g_558;
                    }
                    (*g_555) = func_44(g_96.f3, &g_11, l_648, l_649, &g_12);
                    (*l_624) = (*l_624);
                }
                else
                {
                    char **l_652 = (void*)0;
                    int l_654 = 0L;
                    union U1 l_669 = {0};
                    for (g_13 = 0; (g_13 != (-11)); g_13 = safe_sub_func_uint64_t_u_u(g_13, 9))
                    {
                        (*g_555) = func_44(l_634.f1, &g_11, (**g_208), (*l_15), l_652);
                        (*l_624) = l_653;
                        return l_654;
                    }
                    if ((*l_15))
                    {
                        return l_656;
                    }
                    else
                    {
                        unsigned long long *l_667 = (void*)0;
                        unsigned long long *l_668 = &g_305;
                        union U1 *l_671 = &l_669;
                        (*l_653) = ((g_305 = (+(safe_rshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s((*g_12), (safe_add_func_uint64_t_u_u(((void*)0 != &g_404), g_558)))), 8)))) && (safe_lshift_func_uint16_t_u_s((l_654 = (**g_291)), g_466)));
                        l_671 = (*g_208);
                    }
                    (*l_15) = l_634.f1;
                }
                if ((*l_625))
                {
                    unsigned char l_674 = 1UL;
                    long long *l_690 = &g_361;
                    int l_701 = (-10L);
                    char ***l_704 = &l_670;
                    struct S0 *l_705 = &l_676;
                    l_676 = l_675;
                    if ((((-9L) >= (((*l_690) = ((((safe_sub_func_int8_t_s_s((&l_676 == l_679), (*l_653))) && (safe_lshift_func_int16_t_s_s((g_89.f1 = (g_121 < (safe_add_func_int8_t_s_s((safe_unary_minus_func_int8_t_s((*l_625))), ((void*)0 != l_685))))), 7))) & (safe_rshift_func_uint16_t_u_s(l_634.f1, 0))) & g_76)) >= (*l_655))) < g_96.f3))
                    {
                        return l_691;
                    }
                    else
                    {
                        l_676 = l_675;
                        (**g_554) = l_692;
                    }
                    for (g_96.f1 = 5; (g_96.f1 != 45); g_96.f1 = safe_add_func_uint32_t_u_u(g_96.f1, 5))
                    {
                        unsigned l_702 = 0UL;
                        union U1 *l_703 = &g_89;
                        int *l_706 = &g_279;
                        (*l_624) = func_44((safe_sub_func_int16_t_s_s(((safe_add_func_uint64_t_u_u((((*g_292) = (safe_mul_func_uint16_t_u_u(((((*g_12) <= (g_96.f2 = (g_252.f1 = (l_701 = ((*g_12) ^ g_252.f2))))) < (*l_653)) == ((*l_653) == g_96.f0)), (((**l_685) = (((**g_291) || g_16) < (func_52(&l_2, l_702, (*g_208), g_76, l_703) < g_89.f1))) >= 0x81F0FD2CL)))) < (*l_15)), g_279)) > 7UL), (*l_653))), l_704, (*g_209), g_374, l_670);
                        (*g_126) = l_705;
                        (*g_555) = l_706;
                    }
                    (*g_555) = (void*)0;
                }
                else
                {
                    struct S0 l_707 = {0xC58127B5L,0xDCL,0x2DL,0xBB66756AL};
                    struct S0 *l_708 = (void*)0;
                    struct S0 *l_709 = &g_252;
                    int *l_713 = &l_634.f0;
                    int **l_712 = &l_713;
                    (*l_709) = l_707;
                    l_724 = ((*l_709) = g_96);
                }
            }
            else
            {
                char **l_728 = (void*)0;
                int l_731 = 0x2B981B59L;
                long long *l_732 = &g_361;
                unsigned *l_733 = (void*)0;
                unsigned *l_734 = &g_687;
                struct S0 *l_741 = &l_675;
                short l_751 = 0xC6B2L;
                char l_760 = 1L;
                (*g_555) = func_44((safe_add_func_int8_t_s_s((*g_12), 0xC5L)), &l_2, l_727, g_252.f1, l_728);
                (*l_741) = l_740;
                for (g_96.f0 = 0; (g_96.f0 > (-5)); g_96.f0 = safe_sub_func_int8_t_s_s(g_96.f0, 2))
                {
                    unsigned long long *l_750 = &l_691;
                    char ***l_752 = &l_728;
                    int l_753 = (-5L);
                    unsigned long long *l_759 = &l_623;
                    int *l_761 = &g_161;
                    (*l_15) = (safe_rshift_func_uint8_t_u_u(g_252.f1, 1));
                    (*l_15) = (safe_add_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((((*l_750) = 0x298B7EFC13F6D11ALL) <= ((*l_732) = (*l_15))), (l_762 = ((*l_761) = ((*l_625) = (l_751 || (((*l_3) == ((*l_752) = (void*)0)) && ((func_52(&g_11, (l_753 == (safe_mul_func_int16_t_s_s((((*l_759) = (safe_sub_func_uint16_t_u_u((func_52(&g_11, g_89.f1, l_758, g_739, (*g_208)) || 0x904B6054L), l_751))) | 0x845F37CF793F75FBLL), (**g_291)))), l_758, l_760, (*g_208)) <= 65535UL) > l_753)))))))), l_740.f3));
                }
            }
        }
        else
        {
            unsigned l_769 = 0UL;
            char ***l_772 = &l_2;
            int ***l_783 = &l_624;
            char ****l_802 = (void*)0;
            char ****l_803 = (void*)0;
            union U1 *l_806 = &l_773;
            for (g_96.f0 = 0; (g_96.f0 <= 12); ++g_96.f0)
            {
                union U1 l_768 = {0};
                int l_780 = 0x36D55F53L;
                char ***l_787 = &l_770;
                for (l_675.f1 = (-4); (l_675.f1 != 28); l_675.f1 = safe_add_func_int64_t_s_s(l_675.f1, 5))
                {
                    int *l_771 = &g_279;
                    int ***l_785 = &l_624;
                    union U1 l_786 = {0};
                    (*g_555) = func_44(g_361, (l_767 = &g_11), l_768, l_769, l_770);
                    if ((*l_15))
                        continue;
                    if ((+((void*)0 != &g_291)))
                    {
                        (*g_555) = (**g_554);
                        (*l_624) = ((**g_554) = (*g_555));
                        (*l_624) = l_771;
                        (*l_625) = l_769;
                    }
                    else
                    {
                        (*l_625) = l_769;
                    }
                }
                (*l_15) = (l_780 != (248UL || (func_52(l_772, (*l_15), (*g_208), (safe_mod_func_uint64_t_u_u(((safe_mod_func_uint64_t_u_u((safe_mul_func_uint8_t_u_u(l_780, (*g_12))), (safe_mul_func_uint16_t_u_u((((*l_403) = g_121) != l_780), (*g_292))))) != 0UL), 0x3745483441E56187LL)), &l_768) || g_96.f2)));
                (*l_15) = g_558;
            }
            (*l_15) = (safe_mul_func_int16_t_s_s(0xB721L, (g_798 == (safe_add_func_int8_t_s_s(func_52((g_10 = l_801), (*l_15), (*g_208), (*l_625), (*g_208)), 0xC3L)))));
            (*l_15) = ((*l_625) == (safe_rshift_func_int16_t_s_s((g_305 >= g_121), 2)));
            (*g_208) = l_806;
        }
        (*l_625) = (*l_15);
        (*l_625) = l_807;
    }
    else
    {
        int l_847 = 7L;
        char ***l_850 = (void*)0;
        char ****l_867 = &l_850;
        char *****l_866 = &l_867;
        unsigned l_911 = 0xC8F4B1FEL;
        int *l_912 = &l_6;
        if (((*l_15) = (*l_15)))
        {
            unsigned l_808 = 6UL;
            int *l_813 = &g_16;
            int ***l_829 = &g_555;
            int ****l_830 = (void*)0;
            unsigned ***l_836 = &g_834;
            unsigned ****l_837 = &g_833;
            long long *l_849 = &g_739;
            unsigned char l_883 = 0x25L;
            union U1 *l_884 = &l_727;
            struct S0 **l_898 = &g_127;
            union U1 *l_900 = &l_727;
            char ***l_909 = (void*)0;
            (*l_14) = ((l_808 ^ ((safe_div_func_int64_t_s_s(0x8B1486807B4227DDLL, g_361)) > (+((safe_add_func_int32_t_s_s((*l_14), 4294967290UL)) <= ((*l_403) = (safe_mod_func_int64_t_s_s(g_252.f0, 0x495B26D6A9EB4576LL))))))) > ((*l_15) < 4294967295UL));
            for (g_558 = (-27); (g_558 == 19); ++g_558)
            {
                long long l_818 = 0x67F9B9FBF0726FF2LL;
                return l_818;
            }
            for (g_161 = 14; (g_161 > (-9)); g_161--)
            {
                int l_821 = 1L;
                if (l_821)
                    break;
                (*l_813) = ((*l_406) != &g_291);
                (*g_555) = &l_6;
            }
            if ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*g_12), ((safe_unary_minus_func_uint32_t_u((((g_554 = l_829) == &g_555) | (g_252.f1 && (l_831 == ((*l_837) = (l_836 = g_833))))))) && ((safe_add_func_int64_t_s_s(((g_840 = (g_833 = &g_834)) == (g_842 = l_841)), ((*l_849) = ((safe_rshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s((7L & l_847), 8UL)), l_848)) != 65535UL)))) || 0xB3L)))), g_96.f0)) || 0x955BL), g_96.f1)))
            {
                char ****l_851 = &l_850;
                (*l_14) = (*l_813);
            }
            else
            {
                unsigned l_862 = 0x78317F8EL;
                unsigned long long *l_863 = &g_466;
                int *l_892 = (void*)0;
                struct S0 l_895 = {1L,0x57L,0x22L,0UL};
                if ((((safe_rshift_func_int8_t_s_u(((*g_12) = (-9L)), (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((safe_div_func_uint64_t_u_u(((*l_863) = (safe_sub_func_int16_t_s_s((-1L), ((g_16 ^ 0xEDCE5DA97EC9F4CALL) ^ l_862)))), ((*l_15) ^ ((safe_mul_func_int8_t_s_s((g_96.f1 >= g_96.f0), ((void*)0 != l_866))) <= 0x4581L)))), 4)), 0)))) < 9UL) >= 0x79CE2B25A617B992LL))
                {
                    unsigned short l_890 = 8UL;
                    char **l_891 = &g_12;
                    for (g_252.f3 = 14; (g_252.f3 > 38); g_252.f3 = safe_add_func_uint16_t_u_u(g_252.f3, 4))
                    {
                        unsigned char l_876 = 0UL;
                        char ****l_882 = &g_10;
                        char *****l_881 = &l_882;
                        unsigned char *l_885 = (void*)0;
                        unsigned char *l_886 = (void*)0;
                        unsigned char *l_887 = &g_96.f2;
                        union U1 **l_893 = (void*)0;
                        union U1 **l_894 = &l_884;
                        (*g_555) = func_44((0x2659L ^ (*l_813)), &g_11, (**g_208), (safe_div_func_uint8_t_u_u(((*l_887) = (safe_lshift_func_int16_t_s_s(func_52(&g_11, (safe_rshift_func_uint16_t_u_s((l_876 > (safe_rshift_func_uint16_t_u_s(((****l_406) = (safe_div_func_int64_t_s_s((((*l_866) = &g_10) != ((*l_881) = &g_10)), g_558))), l_883))), l_847)), (*g_208), l_876, l_884), 1))), (*l_14))), (*l_3));
                        (**l_829) = func_44((safe_rshift_func_uint16_t_u_s(l_876, g_96.f2)), &g_11, (*l_884), l_890, l_891);
                        l_892 = &l_847;
                        (*l_894) = ((*g_208) = (*g_208));
                    }
                    (*l_15) = (*l_813);
                    if (l_890)
                    {
                        char l_896 = 0xA5L;
                        char **l_897 = &g_12;
                        struct S0 ***l_899 = &g_126;
                        (**l_829) = func_44(l_896, &l_2, (*g_209), g_558, ((*g_10) = l_897));
                        (*l_899) = l_898;
                    }
                    else
                    {
                        int *l_901 = &g_252.f0;
                        int l_903 = 4L;
                        char *l_904 = &g_558;
                        (*g_555) = func_44((*l_15), &g_11, (*g_209), ((*l_901) = ((*g_208) != l_900)), g_902);
                        (*l_813) = l_903;
                        (*g_555) = &l_6;
                        (*g_208) = (*g_208);
                    }
                    for (l_676.f0 = 17; (l_676.f0 < (-27)); l_676.f0 = safe_sub_func_int8_t_s_s(l_676.f0, 7))
                    {
                        unsigned char *l_907 = (void*)0;
                        unsigned char *l_908 = &l_895.f1;
                        int **l_910 = &l_892;
                        (*l_910) = ((**g_554) = func_44((~(((*l_908) = g_305) || (g_687 > 2L))), l_909, (**g_208), (g_252.f3 < g_89.f1), ((*g_10) = &g_12)));
                    }
                }
                else
                {
                    return g_96.f1;
                }
            }
        }
        else
        {
            (*l_14) = l_911;
            return l_911;
        }
        (**g_554) = func_44(((*l_15) != l_847), &g_11, (*g_209), g_374, &g_12);
        (**g_554) = l_912;
        (**g_554) = (void*)0;
    }
    (*l_15) = (*l_15);
    return g_252.f2;
}







static unsigned long long func_21(short p_22, char *** p_23, unsigned long long p_24, char ** p_25, unsigned p_26)
{
    int l_410 = 0x1B2535BEL;
    int l_424 = 1L;
    int **l_428 = &g_187;
    int l_441 = (-4L);
    char *l_475 = &g_13;
    struct S0 l_482 = {0L,255UL,0xE3L,4UL};
    char *l_551 = (void*)0;
    char ***l_577 = (void*)0;
    long long *l_593 = &g_361;
    long long **l_592 = &l_593;
    struct S0 l_597 = {-10L,0xAEL,255UL,0xA0DD6895L};
    union U1 *l_610 = &g_89;
    if (l_410)
    {
        unsigned l_411 = 0xB2137453L;
        union U1 l_440 = {0};
        short *l_444 = &g_404;
        short **l_443 = &l_444;
        char *l_481 = &g_13;
        int l_509 = 0xF3309E01L;
        struct S0 *l_510 = &l_482;
        int l_519 = 0L;
        char ***l_571 = &g_11;
        int *l_580 = (void*)0;
        if ((l_411 >= (l_424 = (g_121 | (safe_sub_func_int64_t_s_s(1L, ((safe_add_func_uint16_t_u_u(5UL, (safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((safe_mod_func_uint32_t_u_u((p_22 <= l_410), (safe_div_func_uint16_t_u_u((*g_292), p_22)))) ^ p_26) < l_410), 0xDD2467AC9B6341C7LL)), l_411)))) == l_410)))))))
        {
            char **l_425 = &g_12;
            short *l_429 = &g_404;
            int *l_430 = &g_16;
            int l_458 = 0L;
            (*g_10) = l_425;
            (*l_430) = (safe_add_func_int64_t_s_s(((void*)0 != l_428), (((((*l_429) = (-1L)) | p_24) ^ (**g_11)) == 0x0DL)));
            if (((safe_sub_func_int64_t_s_s(p_26, p_22)) || l_410))
            {
                short **l_434 = &l_429;
                short ***l_433 = &l_434;
                short **l_436 = &l_429;
                short ***l_435 = &l_436;
                char ****l_439 = &g_10;
                union U1 *l_442 = &l_440;
                int l_449 = (-3L);
                (*l_435) = ((*l_433) = &l_429);
                g_187 = func_44((safe_mod_func_int16_t_s_s(g_89.f1, (+0xD418L))), ((*l_439) = &g_11), l_440, l_441, (*p_23));
                (*g_127) = func_33(((func_52(&g_11, p_22, (*g_208), p_24, l_442) <= ((*l_435) == ((*l_433) = l_443))) & (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(p_22, (**g_291))), (***g_10)))));
                l_449 = 0L;
            }
            else
            {
                unsigned l_452 = 4294967295UL;
                struct S0 l_455 = {0x749505C1L,0x46L,1UL,18446744073709551615UL};
                (**g_126) = func_33((+9UL));
                if ((safe_rshift_func_uint16_t_u_s(l_452, 14)))
                {
                    unsigned long long l_462 = 0x2C643EAFBB84C374LL;
                    for (g_252.f0 = 12; (g_252.f0 != (-17)); g_252.f0--)
                    {
                        (*g_127) = l_455;
                        (*l_428) = &g_161;
                        if (p_26)
                            continue;
                    }
                    if (g_96.f2)
                    {
                        unsigned long long *l_461 = &g_305;
                        unsigned long long *l_463 = (void*)0;
                        unsigned long long *l_464 = &l_462;
                        unsigned long long *l_465 = &g_466;
                        int ***l_467 = &l_428;
                        char ***l_470 = &l_425;
                        union U1 *l_476 = (void*)0;
                        (*l_430) = p_24;
                        g_279 = ((*l_430) = (0x0330E289F59E0E92LL > ((*l_465) = (((g_252.f2 <= p_24) ^ (((*g_292) = (((safe_rshift_func_int16_t_s_u((g_404 = g_76), (((*l_464) = (((l_458 || (safe_rshift_func_uint16_t_u_s(0UL, 3))) > ((*l_461) = g_252.f2)) <= l_462)) ^ (0xB47F5A99L || p_22)))) >= g_96.f1) < p_26)) <= p_24)) < (-4L)))));
                        (*l_467) = &g_187;
                        (*l_430) = ((safe_mul_func_uint8_t_u_u(((((void*)0 != g_12) || g_121) | func_52(l_470, p_26, func_59((safe_rshift_func_int16_t_s_u((safe_mul_func_uint16_t_u_u((*g_292), 1L)), ((void*)0 != l_475))), (**p_23)), p_24, l_476)), (-8L))) && 0UL);
                    }
                    else
                    {
                        (*l_428) = (void*)0;
                    }
                }
                else
                {
                    int *l_480 = &l_458;
                    for (g_252.f1 = 0; (g_252.f1 >= 45); g_252.f1 = safe_add_func_uint32_t_u_u(g_252.f1, 2))
                    {
                        int *l_479 = (void*)0;
                        (*l_428) = l_479;
                        (*l_428) = l_480;
                        return (*l_430);
                    }
                    (*l_428) = &g_279;
                    return g_96.f0;
                }
                (*l_430) = func_35(l_481, func_33(p_26));
            }
        }
        else
        {
            union U1 ***l_492 = &g_208;
            int l_506 = 0L;
            int *l_527 = (void*)0;
            char ***l_562 = &g_11;
            int l_576 = 0xE710A436L;
            (*g_127) = l_482;
            for (g_161 = (-1); (g_161 == 14); g_161 = safe_add_func_int16_t_s_s(g_161, 9))
            {
                char ***l_487 = &g_11;
                union U1 *l_508 = &g_89;
                int l_518 = 1L;
                (*l_428) = &g_161;
                if (p_22)
                {
                    (*l_428) = (void*)0;
                }
                else
                {
                    union U1 ****l_493 = &l_492;
                    union U1 ***l_495 = &g_208;
                    union U1 ****l_494 = &l_495;
                    unsigned *l_507 = &l_411;
                    for (g_78 = 0; (g_78 >= 22); g_78 = safe_add_func_int16_t_s_s(g_78, 6))
                    {
                        return p_22;
                    }
                    if ((func_52(l_487, p_26, &l_440, (safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u((((*l_493) = l_492) != ((*l_494) = &g_208)), (~(!(safe_div_func_uint8_t_u_u(p_26, (*g_12))))))) & (safe_div_func_uint32_t_u_u(((safe_mod_func_int64_t_s_s(((p_26 == ((*l_507) = (safe_mod_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(l_506, (**g_291))) || 0x425E713FEC8D1C3FLL), 0x1394L)))) | (*g_292)), 0x198808A8C2A39CCFLL)) | 1UL), g_279))), l_506)), l_508) > l_509))
                    {
                        struct S0 **l_511 = &l_510;
                        (*l_511) = ((*g_126) = l_510);
                    }
                    else
                    {
                        union U1 **l_516 = &g_209;
                        int *l_517 = (void*)0;
                        l_518 = (((((*g_10) == (void*)0) && 0x7DB204A9892182E4LL) & (safe_sub_func_uint8_t_u_u(1UL, 0x82L))) > (safe_mul_func_int8_t_s_s((***p_23), ((l_516 == (void*)0) != ((*g_292) = p_26)))));
                        g_16 = p_26;
                    }
                }
            }
            if (l_519)
            {
                int *l_520 = &g_16;
                unsigned *l_532 = (void*)0;
                unsigned **l_531 = &l_532;
                if (((*l_520) = 0x44AB2093L))
                {
                    int l_528 = 0x78E88200L;
                    union U1 *l_529 = &l_440;
                    int l_530 = 0x8334F029L;
                    l_530 = ((safe_rshift_func_uint16_t_u_u((g_16 || (1L > func_52(&p_25, ((l_509 ^ g_252.f2) && (safe_add_func_int32_t_s_s((l_424 = ((void*)0 != l_527)), p_26))), func_29(l_528, l_482), g_252.f1, l_529))), (**g_291))) | p_26);
                    return g_252.f1;
                }
                else
                {
                    unsigned ***l_533 = &l_531;
                    unsigned **l_535 = (void*)0;
                    unsigned ***l_534 = &l_535;
                    (*l_534) = ((*l_533) = l_531);
                    (*l_428) = (void*)0;
                    return p_22;
                }
            }
            else
            {
                int *l_536 = (void*)0;
                unsigned *l_540 = &l_411;
                unsigned **l_539 = &l_540;
                union U1 *l_572 = &g_89;
                int *l_573 = &l_424;
                long long *l_574 = &g_361;
                unsigned long long *l_575 = &g_466;
                (*l_428) = l_536;
                if ((safe_sub_func_uint16_t_u_u((*g_292), ((void*)0 != l_539))))
                {
                    (*l_428) = (*l_428);
                }
                else
                {
                    char ***l_546 = &g_11;
                    int *l_556 = (void*)0;
                    int *l_557 = &l_509;
                    unsigned l_559 = 0xD4AADC0CL;
                    unsigned char l_563 = 7UL;
                    char **l_564 = &l_551;
                    for (g_279 = 0; (g_279 != 9); g_279++)
                    {
                        char ***l_543 = (void*)0;
                        union U1 l_544 = {0};
                        int **l_545 = &l_536;
                        (*l_545) = (g_187 = func_44(g_78, l_543, l_544, g_161, (*g_10)));
                        if (l_506)
                            continue;
                    }
                    (*l_428) = func_44(l_506, l_546, (**g_208), (((*l_540) = (g_558 = ((safe_sub_func_int64_t_s_s(((safe_add_func_int32_t_s_s((-1L), (((((4294967295UL < (l_551 != (**p_23))) || ((*l_557) = ((safe_add_func_int8_t_s_s(((g_554 != (void*)0) & 0xB008D230L), g_252.f3)) != 0x5B27L))) != 0x59AD62FCB4E69716LL) & (**g_291)) == g_361))) & 18446744073709551615UL), 0UL)) == 1UL))) ^ l_559), (*g_10));
                    for (g_96.f1 = 0; (g_96.f1 > 28); g_96.f1 = safe_add_func_int16_t_s_s(g_96.f1, 3))
                    {
                        (**g_554) = (void*)0;
                        (*g_555) = func_44(p_22, l_562, (*g_209), l_563, ((*l_546) = l_564));
                        (*l_557) = l_506;
                    }
                }
                (*l_428) = func_44((func_52(&g_11, (safe_sub_func_uint16_t_u_u((g_252.f3 != ((*l_575) = (l_506 = (safe_rshift_func_int16_t_s_u((!((*l_444) = (safe_mod_func_uint16_t_u_u(func_52(l_571, l_506, l_572, ((*l_574) = ((0xE34A36F6L | (g_558 >= ((**l_443) = g_404))) && 0xBD9B7857L)), l_572), 0x0968L)))), l_411))))), (*l_573))), l_572, l_576, (*g_208)) > p_24), l_577, (*l_572), l_576, (*p_23));
                l_576 = l_482.f3;
            }
            (**g_126) = (*l_510);
        }
        l_509 = p_24;
        (**g_554) = (**g_554);
        for (l_519 = 6; (l_519 < (-1)); l_519 = safe_sub_func_uint32_t_u_u(l_519, 7))
        {
            int *l_583 = &l_509;
            (*l_583) = p_22;
        }
    }
    else
    {
        union U1 l_584 = {0};
        char **l_585 = (void*)0;
        int *l_587 = &g_16;
        int **l_586 = &l_587;
        struct S0 l_591 = {-2L,246UL,0xFAL,2UL};
        (*l_586) = ((**g_554) = func_44(p_22, &g_11, l_584, g_96.f3, l_585));
        (*l_428) = (**g_554);
        for (l_424 = 27; (l_424 != (-7)); l_424 = safe_sub_func_int64_t_s_s(l_424, 2))
        {
            int *l_590 = &g_161;
            (*l_590) = p_22;
            return g_96.f0;
        }
        (**g_126) = l_591;
    }
    if ((((*l_592) = &g_361) == &g_361))
    {
        int *l_596 = &l_424;
        union U1 *l_598 = &g_89;
        union U1 *l_599 = &g_89;
        struct S0 l_602 = {0x68C9231BL,0x9AL,0x26L,0x3A10A6D1L};
        if ((safe_mod_func_int32_t_s_s((18446744073709551614UL < ((!(func_52(&g_11, g_96.f1, ((*g_208) = func_29(func_52(&g_11, (*l_596), func_29(g_252.f2, l_597), g_252.f1, l_598), (**g_126))), g_96.f2, l_599) <= 7UL)) >= (*l_596))), 7UL)))
        {
            char *l_600 = &g_13;
            char *l_601 = &g_558;
            (*l_596) = (p_26 > p_24);
            (*l_428) = (*l_428);
        }
        else
        {
            (*g_127) = l_597;
        }
        (**g_554) = (*l_428);
    }
    else
    {
        unsigned char l_607 = 0x50L;
        (*l_428) = func_44(((safe_mul_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_607, (**g_291))), (safe_mul_func_int16_t_s_s((((*g_208) = func_29(g_89.f1, l_597)) != l_610), p_26)))) | ((safe_sub_func_int16_t_s_s(l_607, ((safe_div_func_int64_t_s_s((safe_div_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_div_func_int16_t_s_s(((g_466 < 0xCFCCL) && l_607), p_24)), 0)), l_482.f2)), 0x66CC3914C09D5D71LL)) <= l_607))) || p_24)), l_577, (*l_610), g_96.f1, (*p_23));
    }
    return g_252.f2;
}







static short func_27(char *** p_28)
{
    unsigned short l_32 = 4UL;
    (*g_208) = func_29(l_32, func_33(g_13));
    return g_121;
}







static union U1 * func_29(int p_30, struct S0 p_31)
{
    return (*g_208);
}







static struct S0 func_33(unsigned long long p_34)
{
    char *l_38 = &g_13;
    struct S0 l_39 = {0x642E5F0EL,0x7DL,0x19L,0xE86A6760L};
    int *l_284 = &g_279;
    long long l_286 = 4L;
    char ***l_312 = &g_11;
    int l_318 = 0x6A8D8B00L;
    char **l_329 = &l_38;
    unsigned long long l_362 = 0xE159C8D91A4C2D8ELL;
    union U1 *l_387 = &g_89;
    long long *l_396 = &g_361;
    unsigned **l_397 = (void*)0;
    unsigned *l_399 = (void*)0;
    unsigned **l_398 = &l_399;
    long long *l_400 = &l_286;
    unsigned long long l_401 = 18446744073709551610UL;
    if (func_35(l_38, l_39))
    {
        long long *l_278 = (void*)0;
        int *l_280 = &g_16;
        struct S0 *l_281 = &g_252;
        int **l_285 = &l_280;
        g_161 = ((*l_280) = (0xE2F776C4A1A27E34LL < (g_279 = p_34)));
        (*l_281) = ((**g_126) = l_39);
        (*l_284) = ((safe_mul_func_uint16_t_u_u(p_34, ((((((*l_285) = l_284) != &g_161) >= l_286) >= (safe_div_func_uint8_t_u_u((safe_div_func_int32_t_s_s(0xBB7CF6DDL, p_34)), func_35(l_38, l_39)))) >= (*l_284)))) ^ g_279);
    }
    else
    {
        unsigned short **l_293 = &g_292;
        int l_296 = (-1L);
        long long *l_297 = (void*)0;
        unsigned long long *l_304 = &g_305;
        union U1 *l_313 = &g_89;
        unsigned char *l_314 = (void*)0;
        unsigned char *l_315 = &g_252.f2;
        unsigned l_316 = 0x5586E655L;
        int *l_317 = &g_161;
        l_293 = g_291;
        (*l_317) = ((safe_add_func_int64_t_s_s((((18446744073709551607UL == ((*l_284) = l_296)) ^ (safe_rshift_func_uint16_t_u_u((((safe_mod_func_uint64_t_u_u((!g_96.f0), (+(((*l_304) = ((safe_sub_func_int16_t_s_s(p_34, 0L)) >= (p_34 && (**g_11)))) <= (safe_rshift_func_uint8_t_u_s(g_252.f0, 5)))))) & (safe_rshift_func_uint8_t_u_s((safe_div_func_uint64_t_u_u((((*l_315) = func_52(l_312, l_39.f3, (*g_208), p_34, l_313)) >= 0x0FL), g_252.f0)), (*g_12)))) & p_34), l_316))) || 0x60L), p_34)) == (-1L));
    }
    if ((g_279 >= (!(p_34 > (0x08L || (((*l_284) || (*l_284)) || ((l_318 = p_34) | (*l_284))))))))
    {
        char ***l_325 = &g_11;
        int l_350 = (-1L);
        char ****l_379 = (void*)0;
        char ****l_380 = &l_325;
        char ****l_381 = &l_312;
        int *l_386 = &g_161;
        unsigned char *l_388 = &g_96.f1;
        for (l_286 = (-17); (l_286 <= (-10)); l_286 = safe_add_func_int16_t_s_s(l_286, 3))
        {
            unsigned long long l_326 = 0xABC46375581D7D2FLL;
            int *l_352 = &g_279;
            unsigned char l_358 = 1UL;
            if (func_42(&g_16))
            {
                int l_348 = (-10L);
                union U1 *l_351 = (void*)0;
                int **l_353 = &l_284;
                union U1 ***l_356 = &g_208;
                char ***l_357 = &l_329;
                for (g_76 = 0; (g_76 > 23); g_76 = safe_add_func_int8_t_s_s(g_76, 1))
                {
                    char ***l_323 = &g_11;
                    char ****l_324 = (void*)0;
                    union U1 *l_327 = &g_89;
                    int *l_328 = &l_39.f0;
                    int **l_330 = &l_284;
                }
                (*l_353) = &g_279;
                for (g_96.f2 = 0; (g_96.f2 != 39); ++g_96.f2)
                {
                    union U1 *l_359 = &g_89;
                    long long *l_360 = &g_361;
                    int *l_363 = (void*)0;
                }
            }
            else
            {
                for (g_252.f0 = 27; (g_252.f0 <= (-16)); --g_252.f0)
                {
                    union U1 l_368 = {0};
                    for (l_39.f3 = (-1); (l_39.f3 != 32); l_39.f3 = safe_add_func_uint32_t_u_u(l_39.f3, 2))
                    {
                        char l_371 = 0xE1L;
                        int **l_372 = &l_352;
                        struct S0 l_373 = {0xF8B4A4EDL,0UL,1UL,18446744073709551615UL};
                        (*l_372) = func_44(g_121, &g_11, l_368, (l_371 | (&p_34 == (void*)0)), (*g_10));
                        (*l_372) = (*l_372);
                        return l_373;
                    }
                    return (*g_127);
                }
                g_374 = 0xA09282D3L;
            }
        }
        (*l_386) = ((~(safe_rshift_func_uint16_t_u_s(((*l_284) <= (p_34 < ((*g_292) = ((*g_12) || ((*l_388) = ((!((((safe_mul_func_uint16_t_u_u((*l_284), func_52(((*l_381) = ((*l_380) = (void*)0)), ((*l_386) = (safe_add_func_int8_t_s_s((func_42(&l_350) < (p_34 || (safe_rshift_func_int16_t_s_s((*l_284), 5)))), 0xC8L))), (*g_208), (*l_284), l_387))) > 65529UL) || 0xE803D2FDL) != (*l_284))) > (*l_284))))))), g_13))) < g_13);
        (*l_386) = (*l_386);
    }
    else
    {
        struct S0 l_389 = {0x7F866CF3L,255UL,0x53L,0UL};
        return l_389;
    }
    (*l_284) = (safe_add_func_int8_t_s_s((*g_12), (((safe_sub_func_uint64_t_u_u((g_161 >= ((((*l_396) = func_52(&l_329, (*l_284), l_387, (*l_284), (*g_208))) || ((*l_400) = (((*l_398) = l_284) == (void*)0))) < 0x068E37E6L)), l_401)) != 0x73A6DB6308C6F954LL) || 0UL)));
    return l_39;
}







static int func_35(char * p_36, struct S0 p_37)
{
    int *l_195 = &g_16;
    char ***l_210 = &g_11;
    union U1 *l_219 = (void*)0;
    long long l_220 = (-6L);
    struct S0 l_253 = {0xB35F69D6L,255UL,1UL,0xC77A5DD5L};
    (*l_195) = (safe_mod_func_uint64_t_u_u(18446744073709551614UL, func_42(&g_16)));
    (*l_195) = (safe_sub_func_int64_t_s_s(g_76, (safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(0xF22FL, p_37.f2)), (safe_mod_func_int64_t_s_s((-1L), (safe_div_func_int64_t_s_s(g_13, (*l_195)))))))));
    if ((((safe_lshift_func_int16_t_s_s((65535UL || (g_208 != &g_209)), 1)) < (*l_195)) & 0x791890F00B84BF07LL))
    {
        unsigned short *l_225 = &g_78;
        int l_232 = 3L;
        (*l_195) = (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(((void*)0 != &l_219), (((*l_225) = 0x1156L) || (!(~(safe_add_func_uint64_t_u_u((g_78 > p_37.f0), ((safe_div_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u(func_52(l_210, (0x2132D04EE4DB16BELL < 6UL), l_219, l_232, l_219), 11)), p_37.f2)) ^ (*l_195))))))))), (*l_195)));
        return g_96.f2;
    }
    else
    {
        char ***l_235 = &g_11;
        char ****l_236 = &l_235;
        int l_245 = 0x91755C12L;
        int l_246 = (-1L);
        union U1 *l_268 = (void*)0;
        unsigned short **l_272 = (void*)0;
        unsigned short ***l_273 = &l_272;
        if ((((*p_36) = ((l_245 = ((safe_div_func_int8_t_s_s((*p_36), (p_37.f1 || func_52(((*l_236) = l_235), g_161, l_219, ((safe_div_func_uint64_t_u_u((((((safe_div_func_uint16_t_u_u(p_37.f0, (safe_sub_func_uint64_t_u_u((g_96.f2 <= ((((***g_10) ^ g_161) == p_37.f3) < 0x0CB55262L)), g_13)))) | l_245) | p_37.f0) > 4UL) & g_78), p_37.f2)) & l_246), l_219)))) || g_161)) || p_37.f0)) >= p_37.f2))
        {
            int *l_270 = &g_161;
            for (g_96.f3 = (-3); (g_96.f3 <= 27); g_96.f3++)
            {
                unsigned l_250 = 0x97F15FC2L;
                if (((*l_195) = 0x4A5FEA72L))
                {
                    int *l_249 = &g_16;
                    char ****l_254 = &l_210;
                    union U1 *l_267 = &g_89;
                    unsigned short *l_269 = &g_76;
                    l_249 = l_195;
                    if ((g_96.f1 < l_250))
                    {
                        struct S0 *l_251 = &g_252;
                        char *****l_255 = (void*)0;
                        char *****l_256 = &l_254;
                        int **l_257 = (void*)0;
                        int **l_258 = &l_249;
                        (*l_251) = (**g_126);
                        (*l_251) = l_253;
                        (*l_249) = ((&g_10 != ((*l_256) = l_254)) > g_78);
                        (*l_258) = (void*)0;
                    }
                    else
                    {
                        struct S0 *l_259 = &g_252;
                        int l_260 = 6L;
                        (*l_259) = (**g_126);
                        return l_260;
                    }
                    g_16 = ((safe_rshift_func_uint16_t_u_u(((((safe_mod_func_uint8_t_u_u((((safe_mul_func_int8_t_s_s((func_52(&g_11, p_37.f1, (*g_208), (*l_195), (l_268 = l_267)) | ((void*)0 == l_269)), func_52(((*l_236) = (*l_236)), p_37.f0, l_219, g_252.f0, (*g_208)))) == g_252.f0) || (*g_12)), g_16)) > 0x17L) ^ g_96.f3) != 0xE6538CD09A4D5CBFLL), 12)) ^ 0x46D1L);
                }
                else
                {
                    int **l_271 = &g_187;
                    if (p_37.f2)
                        break;
                    (*l_271) = l_270;
                }
            }
        }
        else
        {
            return p_37.f3;
        }
        (*l_195) = ((((void*)0 != l_268) && 0x6A6714CD73731C8DLL) > (*l_195));
        (*l_273) = l_272;
    }
    for (l_253.f2 = 13; (l_253.f2 == 57); l_253.f2 = safe_add_func_uint16_t_u_u(l_253.f2, 4))
    {
        int *l_276 = &g_161;
        int **l_277 = (void*)0;
        g_187 = l_276;
    }
    return (*l_195);
}







static long long func_42(int * p_43)
{
    unsigned l_50 = 0xB643C8F4L;
    char ***l_58 = &g_11;
    int l_62 = 0xF3177355L;
    unsigned *l_182 = &l_50;
    int l_183 = 0L;
    char **l_184 = &g_12;
    union U1 *l_192 = (void*)0;
    union U1 **l_193 = &l_192;
    short l_194 = (-1L);
    g_187 = func_44(((*l_182) = ((+l_50) <= (3L && (safe_unary_minus_func_uint32_t_u(((0x31EAA473ECFB861ALL >= func_52(l_58, g_13, func_59((0x8F497C31L >= ((*p_43) == (l_62 = l_50))), (**l_58)), g_76, &g_89)) >= 8UL)))))), l_58, g_89, l_183, l_184);
    for (g_96.f2 = 0; (g_96.f2 == 6); g_96.f2 = safe_add_func_int16_t_s_s(g_96.f2, 7))
    {
        union U1 *l_190 = (void*)0;
        union U1 **l_191 = &l_190;
        (*l_191) = l_190;
    }
    (*l_193) = l_192;
    return l_194;
}







static int * func_44(unsigned p_45, char *** p_46, union U1 p_47, int p_48, char ** p_49)
{
    int *l_185 = (void*)0;
    int *l_186 = &g_161;
    (*l_186) = p_45;
    return l_185;
}







static long long func_52(char *** p_53, int p_54, union U1 * p_55, long long p_56, union U1 * p_57)
{
    int **l_179 = (void*)0;
    int *l_181 = (void*)0;
    int **l_180 = &l_181;
    (*l_180) = &g_161;
    return g_161;
}







static union U1 * func_59(char p_60, char * p_61)
{
    int *l_65 = &g_16;
    char *l_67 = (void*)0;
    unsigned l_72 = 0UL;
    unsigned l_83 = 4294967295UL;
    int *l_140 = &g_16;
    unsigned l_145 = 0x579C62F1L;
    unsigned char *l_152 = &g_96.f1;
    struct S0 l_178 = {0L,0x08L,0x01L,0x3F68E754L};
    for (p_60 = 9; (p_60 > (-14)); p_60 = safe_sub_func_int8_t_s_s(p_60, 8))
    {
        int *l_66 = &g_16;
        unsigned short *l_75 = &g_76;
        unsigned short *l_77 = &g_78;
        struct S0 l_84 = {0x316A37A5L,1UL,250UL,0xEB41E225L};
        union U1 *l_133 = &g_89;
        int **l_139 = &l_65;
        l_66 = l_65;
        (*l_66) = (p_60 && g_13);
    }
    (*l_65) = (*l_65);
    if ((0x19L > ((((0xCDL > (l_140 != l_65)) ^ ((*l_140) != 7UL)) <= ((safe_add_func_uint32_t_u_u((safe_mod_func_int8_t_s_s(l_145, ((*l_152) = (safe_lshift_func_int8_t_s_s((*g_12), (!(safe_mod_func_uint16_t_u_u(((safe_div_func_uint8_t_u_u((*l_65), p_60)) <= (*l_140)), (*l_140))))))))), 0xA8FC39F9L)) && (***g_10))) ^ (-1L))))
    {
        int **l_153 = &l_140;
        (*l_153) = l_140;
        for (l_145 = (-27); (l_145 > 46); ++l_145)
        {
            int *l_160 = &g_161;
            long long l_166 = 8L;
            for (g_96.f2 = 4; (g_96.f2 == 1); g_96.f2 = safe_sub_func_uint16_t_u_u(g_96.f2, 7))
            {
                struct S0 l_162 = {1L,4UL,254UL,5UL};
                struct S0 *l_163 = &l_162;
                for (g_16 = 23; (g_16 > (-12)); g_16 = safe_sub_func_int32_t_s_s(g_16, 5))
                {
                    l_160 = &g_16;
                }
                (*l_163) = l_162;
            }
            for (g_78 = (-7); (g_78 >= 6); ++g_78)
            {
                l_140 = &g_161;
                g_16 = l_166;
            }
            (*l_153) = &g_16;
            return &g_89;
        }
    }
    else
    {
        int l_167 = 0x761BCA9BL;
        int *l_168 = &g_161;
        union U1 *l_176 = &g_89;
        (*l_168) = ((*l_140) = (l_167 | g_96.f2));
        if (p_60)
        {
            long long l_171 = (-2L);
            g_161 = (safe_lshift_func_uint16_t_u_u(g_96.f2, 12));
            (*l_140) = l_171;
        }
        else
        {
            int *l_172 = &g_161;
            int **l_173 = &l_172;
            (*g_10) = (*g_10);
            (*l_168) = g_96.f1;
            (*l_173) = l_172;
            for (g_96.f1 = 0; (g_96.f1 < 5); g_96.f1 = safe_add_func_uint64_t_u_u(g_96.f1, 2))
            {
                union U1 **l_177 = &l_176;
                (*l_177) = l_176;
            }
        }
    }
    (**g_126) = l_178;
    return &g_89;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_78, "g_78", print_hash_value);
    transparent_crc(g_89.f1, "g_89.f1", print_hash_value);
    transparent_crc(g_96.f0, "g_96.f0", print_hash_value);
    transparent_crc(g_96.f1, "g_96.f1", print_hash_value);
    transparent_crc(g_96.f2, "g_96.f2", print_hash_value);
    transparent_crc(g_96.f3, "g_96.f3", print_hash_value);
    transparent_crc(g_121, "g_121", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_252.f0, "g_252.f0", print_hash_value);
    transparent_crc(g_252.f1, "g_252.f1", print_hash_value);
    transparent_crc(g_252.f2, "g_252.f2", print_hash_value);
    transparent_crc(g_252.f3, "g_252.f3", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    transparent_crc(g_305, "g_305", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_374, "g_374", print_hash_value);
    transparent_crc(g_404, "g_404", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_558, "g_558", print_hash_value);
    transparent_crc(g_687, "g_687", print_hash_value);
    transparent_crc(g_739, "g_739", print_hash_value);
    transparent_crc(g_798, "g_798", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
