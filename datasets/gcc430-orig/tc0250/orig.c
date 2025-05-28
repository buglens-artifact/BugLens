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
   unsigned short f1;
   int f2;
   unsigned f3;
   short f4;
   unsigned long long f5;
   unsigned f6;
   char f7;
   int f8;
   unsigned f9;
};

struct S1 {
   int f0;
   long long f1;
};

struct S2 {
   int f0;
   unsigned char f1;
   unsigned short f2;
   unsigned char f3;
   long long f4;
   unsigned char f5;
   unsigned f6;
   unsigned char f7;
   struct S1 f8;
};


static unsigned long long g_2 = 0xD0374C7AF5AF8B51LL;
static int g_4 = 1L;
static int *g_63 = &g_4;
static int **g_62 = &g_63;
static int g_68 = 0xBFF831C2L;
static short **g_72 = (void*)0;
static int g_87 = 0x5F9E9296L;
static int g_89 = (-1L);
static struct S2 g_91 = {0L,0x26L,0xB4A8L,0x06L,0x70DB99E5BE97C1FBLL,0xA5L,6UL,0xFEL,{-3L,2L}};
static struct S0 g_99 = {0xD72C8AEEL,0xD86AL,0L,0x115B8A5FL,0xBF03L,0x857A524CF1313BA8LL,0x727C9044L,0x33L,-1L,0UL};
static unsigned short g_135 = 1UL;
static long long *g_145 = (void*)0;
static struct S2 g_220 = {0x4302B8FDL,0xD1L,0UL,0UL,0x7B843D4B945211CCLL,0xD5L,3UL,0x6EL,{0x2454A8DDL,-1L}};
static short ***g_252 = &g_72;
static short ****g_251 = &g_252;
static unsigned char *g_298 = &g_220.f5;
static struct S0 g_387 = {0x6C5D4DA6L,0UL,0xBE865AEAL,0x53234001L,2L,18446744073709551607UL,18446744073709551615UL,-7L,1L,0x54095CB5L};
static int g_418 = 0xF9F8EC19L;
static struct S1 **g_419 = (void*)0;
static int *g_449 = &g_387.f2;
static struct S1 *g_469 = &g_91.f8;
static char g_498 = 0x33L;
static int **g_528 = &g_449;
static struct S0 *g_584 = (void*)0;
static int g_591 = 0x14603F24L;
static struct S2 **g_608 = (void*)0;
static char g_648 = 0x61L;



static struct S1 func_1(void);
static int func_5(int * p_6, int * p_7);
static int * func_8(int * p_9, int * p_10, long long p_11);
static unsigned char func_12(short p_13);
static unsigned char func_14(int * p_15, int * p_16, unsigned char p_17, unsigned p_18, unsigned p_19);
static int * func_20(int * p_21, char p_22, int p_23, struct S2 p_24, int * p_25);
static struct S1 func_26(unsigned p_27, unsigned char p_28, struct S1 p_29);
static struct S0 func_35(struct S2 p_36, unsigned p_37, int p_38, int ** p_39);
static struct S2 func_40(int * p_41);
static struct S2 func_42(int ** p_43);
static struct S1 func_1(void)
{
    int *l_3 = &g_4;
    struct S1 l_30 = {0x8951FE51L,0xBD77DFCC86F80366LL};
    short *l_646 = (void*)0;
    short *l_647 = &g_387.f4;
    struct S2 l_649 = {9L,0x76L,0xF423L,0UL,1L,4UL,0x987AFBEBL,255UL,{0xA2CD4DCAL,-1L}};
    (*l_3) = g_2;
    (*l_3) = func_5(func_8(l_3, (func_12(((g_4 ^ (*l_3)) >= func_14(func_20(&g_4, (func_26(g_4, (*l_3), l_30) , (safe_sub_func_int64_t_s_s(((g_99.f8 = (safe_rshift_func_int8_t_s_u((g_91.f7 == 0L), (*l_3)))) , 0x6AE3E30AF529D454LL), g_135))), (*l_3), g_220, l_3), l_3, (*g_298), g_220.f4, g_4))) , (*g_62)), g_220.f8.f0), &g_89);

    ;
    ;
    ;
    (*g_528) = (((*l_3) != g_220.f4) , func_20(func_8(((g_648 ^= ((*l_647) = (*l_3))) , l_3), l_3, (*l_3)), g_220.f6, g_387.f1, l_649, (*g_62)));

    ;
    ;
    return l_649.f8;
}







static int func_5(int * p_6, int * p_7)
{
    struct S0 l_472 = {0x8E2DC144L,0UL,0L,18446744073709551615UL,-1L,0UL,0x70BD70C9L,0x5EL,0L,4294967295UL};
    struct S0 *l_473 = &g_387;
    unsigned short *l_478 = &g_387.f1;
    struct S2 l_481 = {-1L,0x1BL,0x2378L,0xF8L,0xDB031C6835BDD11ELL,0xBCL,0xCA92CB66L,255UL,{-7L,0xD3529140619BAA22LL}};
    unsigned l_489 = 2UL;
    struct S1 *l_497 = &g_220.f8;
    int *l_538 = &g_87;
    long long l_554 = 0x7E1C36E189746B82LL;
    short ***l_589 = &g_72;
    (*l_473) = l_472;
    if (((**g_62) = (l_472.f3 , (safe_sub_func_uint32_t_u_u((safe_add_func_uint16_t_u_u(((void*)0 == l_478), l_472.f0)), (*p_7))))))
    {
        short l_488 = 0x3ED0L;
        long long *l_490 = &g_220.f8.f1;
        unsigned char l_495 = 9UL;
        struct S2 l_501 = {0x62E35314L,0x8FL,65530UL,255UL,0x215C6A1447BB21D2LL,251UL,0x059A844DL,255UL,{0L,3L}};
        int *l_537 = &g_4;
        struct S2 *l_566 = &g_91;
        (*p_7) &= (~(safe_mod_func_uint64_t_u_u((l_472.f8 <= func_12(l_472.f3)), (l_481 , (safe_mul_func_uint8_t_u_u(((0L || ((*g_298) = l_481.f3)) , (safe_mod_func_uint32_t_u_u(g_418, (safe_mod_func_int16_t_s_s(((l_481.f8.f1 ^ g_220.f6) & l_488), l_481.f8.f0))))), l_489))))));
        (*p_7) = (func_14(func_8((l_488 , ((*g_62) = p_7)), p_7, ((*l_490) = l_488)), p_7, l_488, ((l_481.f8.f1 < (safe_add_func_int32_t_s_s((*p_6), l_488))) >= (*p_7)), g_91.f7) ^ 0x9B21AE57L);

        ;
        ;
        if ((safe_add_func_int64_t_s_s((l_488 & (((*l_490) = ((void*)0 == &g_145)) >= g_220.f2)), l_495)))
        {
            int *l_496 = &g_89;
            l_496 = (*g_62);

            ;
            l_497 = l_497;
            (*g_62) = (*g_62);
        }
        else
        {
            unsigned l_517 = 0xC455EE16L;
            struct S1 l_522 = {0x2608EA96L,0L};
            int *l_529 = &g_87;
            char l_530 = (-7L);
            struct S2 *l_533 = &l_501;
            struct S2 **l_532 = &l_533;
            long long **l_567 = &l_490;
            struct S0 *l_583 = &g_99;
            if (g_498)
            {
                (*g_62) = (*g_62);
            }
            else
            {
                char l_516 = 0L;
                struct S2 **l_535 = &l_533;
                int **l_536 = &g_63;
                (*p_7) = l_481.f1;
                if ((((*g_298) >= l_488) , 0x36446BEDL))
                {
                    int *l_499 = (void*)0;
                    struct S2 *l_500 = &g_220;
                    struct S0 *l_504 = &g_99;
                    l_501 = ((*l_500) = func_40(l_499));

                    ;
                    for (l_472.f1 = 26; (l_472.f1 <= 4); l_472.f1 = safe_sub_func_uint32_t_u_u(l_472.f1, 1))
                    {
                        struct S0 **l_505 = &l_473;
                        int l_518 = 0xD05109BAL;
                        char *l_521 = &l_516;
                        if (l_481.f0)
                            break;
                    }
                }
                else
                {
                    unsigned l_527 = 0x9663F59EL;
                    int l_539 = 0x0AE56155L;
                    struct S0 l_548 = {-8L,0xA7B2L,-2L,0x2F6FEFB2L,0x636DL,0xB609B79492FBCB91LL,1UL,0x36L,-1L,1UL};
                    short *l_551 = &g_99.f4;
                    if (((l_472.f1 & l_516) ^ l_516))
                    {
                        unsigned l_531 = 0x948D6704L;
                        struct S2 ***l_534 = &l_532;
                        (*l_536) = func_20(p_7, l_531, (((*l_534) = l_532) == l_535), func_42(l_536), l_537);

                        ;
                        (*l_538) = ((func_14(l_529, l_538, ((*g_298) = (~(65535UL | (l_539 ^= (*l_537))))), l_527, (*l_537)) , (safe_mul_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u((g_387.f7 ^ 0xAC18L), g_220.f1)) != l_527) , l_527), (*l_537)))) >= 1L);

                        ;
                    }
                    else
                    {
                        (*p_6) ^= (**l_536);
                    }

                    ;
                    g_387.f0 = (safe_rshift_func_int16_t_s_s(((*l_538) = ((*l_551) &= (((g_99.f3 ^ 4294967290UL) || 1UL) | (safe_rshift_func_uint8_t_u_s((*l_529), ((l_548 , (safe_lshift_func_uint16_t_u_s(((**l_536) = (0xC8L <= (((*l_538) > g_220.f1) | (*g_63)))), (*l_529)))) || (*l_529))))))), 2));
                }

                ;
                for (g_91.f6 = 0; (g_91.f6 < 32); ++g_91.f6)
                {
                    short l_555 = 0x54DDL;
                    l_555 |= l_554;
                    for (l_501.f8.f0 = 0; (l_501.f8.f0 != (-4)); l_501.f8.f0 = safe_sub_func_uint32_t_u_u(l_501.f8.f0, 7))
                    {
                        char *l_558 = &l_516;
                        unsigned char *l_563 = &l_501.f3;
                        unsigned char *l_570 = &l_501.f5;
                        int l_571 = (-9L);
                        int *l_572 = &g_68;
                        (*p_6) = ((*p_7) = (0xF7857E46L != (((*l_558) = func_12(l_555)) , l_555)));

                        ;
                        (*p_7) ^= (*g_63);
                        (*l_538) |= (-1L);
                        l_572 = ((((*g_298) = (safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((*l_563) |= (*g_298)), ((((safe_sub_func_int8_t_s_s(((((((*l_535) = l_566) == (void*)0) , &g_145) != l_567) >= (-3L)), (safe_lshift_func_uint8_t_u_u(((*l_570) = l_555), (l_571 < l_571))))) ^ l_555) && l_571) && l_571))), (**l_536)))) | g_99.f1) , l_529);

                        ;
                        ;
                    }
                    for (g_91.f8.f0 = 0; (g_91.f8.f0 <= 2); g_91.f8.f0++)
                    {
                        struct S1 l_575 = {4L,0xD71CA3E67121BBA0LL};
                        int l_581 = (-4L);
                        unsigned long long *l_582 = &l_472.f5;
                        long long *l_590 = &g_91.f4;
                        (*l_497) = l_575;
                        (*p_7) |= (safe_mul_func_int8_t_s_s((-1L), (((safe_unary_minus_func_uint64_t_u((((safe_add_func_uint64_t_u_u(0x1AAE2FDCED61F93ELL, ((*l_582) = l_581))) , ((l_583 == (g_584 = &g_99)) , (l_472.f0 = ((*l_590) = ((*l_529) = (safe_mod_func_int32_t_s_s((((((((g_99.f5 < ((*l_537) | ((*l_490) = (safe_lshift_func_uint16_t_u_s(g_387.f2, 14))))) , l_589) == l_589) | (*l_538)) , 0x1C0CL) && l_555) & (*l_538)), (-1L)))))))) | l_517))) && 2UL) , 0x97L)));

                        ;
                        (*l_537) = (l_575.f1 <= (*p_6));
                    }
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            return (*g_63);
        }
    }
    else
    {
        int l_592 = 0x001DF59FL;
        int **l_593 = &g_449;
        short *l_616 = &g_387.f4;
        short **l_615 = &l_616;
        unsigned l_640 = 1UL;
        struct S1 *l_641 = &g_91.f8;
        (*g_62) = (void*)0;

        ;
        if ((*p_7))
        {
            struct S1 l_600 = {0x11D17EFDL,-5L};
            short *l_605 = &g_387.f4;
            unsigned long long *l_609 = &g_99.f5;
            long long *l_610 = (void*)0;
            long long *l_611 = &l_554;
            int *l_619 = &g_87;
            unsigned *l_635 = &g_387.f9;
            unsigned *l_636 = &g_220.f6;
            if ((safe_mod_func_int64_t_s_s((safe_lshift_func_int8_t_s_u((0x9784ECD8L >= ((((safe_sub_func_int16_t_s_s((((l_600 , ((*l_611) = ((((((safe_rshift_func_uint16_t_u_u(((*l_538) && (*p_7)), 8)) || l_600.f1) <= ((+((*l_609) = (((l_600.f1 > (safe_mul_func_uint16_t_u_u(((*l_478) ^= func_12(((*l_605) |= l_600.f1))), (safe_sub_func_int16_t_s_s(((*l_538) , l_600.f0), 65531UL))))) , (void*)0) == g_608))) & l_600.f1)) , (*g_298)) && 0UL) & 0x55L))) >= l_592) , l_600.f1), l_600.f0)) || l_600.f0) == l_600.f1) || (*p_6))), 5)), (*l_538))))
            {
                short **l_614 = &l_605;
                unsigned *l_617 = &g_99.f6;
                int l_618 = 7L;
                unsigned *l_620 = &l_472.f9;
                struct S0 **l_623 = &l_473;
                (*p_7) ^= ((0x4BL <= (((*l_617) = (safe_lshift_func_int16_t_s_s(((g_220.f5 , l_614) == l_615), 11))) , func_12((((l_618 , ((*l_620) = ((*l_473) , (*l_619)))) > (*l_538)) , (*l_538))))) != g_91.f8.f0);
                (*g_528) = (((*l_617) = (((*l_609) &= (safe_sub_func_uint32_t_u_u((*l_538), (((*l_620) = 7UL) <= (18446744073709551611UL && g_91.f1))))) > (!(g_387.f1 , (0x8B67L | ((*l_538) ^ (g_99.f1 , (~g_418)))))))) , (void*)0);

                ;
                (*l_623) = &g_387;
                (*p_6) = 0xA1BECF4CL;
            }
            else
            {
                unsigned l_626 = 0xDC2CC872L;
                (*l_619) = (safe_rshift_func_uint16_t_u_s(l_626, 2));
                (*l_593) = p_6;

                ;
                (**g_528) = ((safe_rshift_func_int8_t_s_s((*l_538), 0)) & func_12((*l_538)));
                (*p_7) |= (*l_619);
            }

            ;
            ;
            (*p_6) = ((safe_rshift_func_int8_t_s_s((-1L), func_14(p_6, p_7, (safe_add_func_int16_t_s_s((*l_538), (*l_619))), (safe_lshift_func_int8_t_s_s((((*l_538) && (((g_99.f9 & (((*l_636) = ((*l_635) ^= g_91.f3)) , (*l_538))) < g_68) < 0xA2827331L)) || (*l_619)), (*l_619))), l_592))) ^ g_387.f3);

            ;
            ;
            (*l_497) = l_600;
        }
        else
        {
            unsigned long long l_639 = 0UL;
            (*p_7) = (safe_rshift_func_int16_t_s_u(l_639, 12));
            (*p_6) ^= l_640;
        }

        ;
        l_497 = l_641;

        ;
    }

    ;
    ;
    ;
    (*l_497) = (*g_469);
    return (*p_7);
}







static int * func_8(int * p_9, int * p_10, long long p_11)
{
    struct S1 **l_470 = (void*)0;
    struct S1 **l_471 = &g_469;
    (*l_471) = g_469;
    return p_10;


}







static unsigned char func_12(short p_13)
{
    int *l_466 = &g_87;
    struct S0 l_467 = {0x37EE47B9L,0UL,0xC0B42C3CL,3UL,0xD819L,0x4477073CF485887ALL,1UL,0xBEL,0xC0499E0AL,9UL};
    struct S0 *l_468 = &g_99;
    (*g_62) = l_466;

    ;
    (*l_468) = l_467;
    return (*l_466);
}







static unsigned char func_14(int * p_15, int * p_16, unsigned char p_17, unsigned p_18, unsigned p_19)
{
    unsigned l_347 = 0x3E0C87FFL;
    int l_369 = 0L;
    short *l_397 = (void*)0;
    short *l_398 = (void*)0;
    unsigned short l_407 = 0x12C1L;
    struct S1 **l_421 = (void*)0;
    struct S0 l_426 = {0x71F00632L,0xCC5FL,2L,1UL,0xCDB5L,0xF411E67CD38FB024LL,18446744073709551615UL,0xA0L,0L,1UL};
    unsigned short l_465 = 65535UL;
    (*g_62) = (*g_62);
    for (g_99.f5 = (-1); (g_99.f5 == 9); g_99.f5 = safe_add_func_uint8_t_u_u(g_99.f5, 2))
    {
        return p_17;
    }
    for (g_99.f9 = 24; (g_99.f9 > 26); g_99.f9 = safe_add_func_int32_t_s_s(g_99.f9, 3))
    {
        short ****l_362 = &g_252;
        int l_364 = 1L;
        int **l_373 = &g_63;
        unsigned l_375 = 1UL;
        struct S1 *l_379 = &g_220.f8;
        struct S1 **l_378 = &l_379;
        int l_383 = 1L;
        struct S0 *l_386 = &g_387;
        unsigned long long *l_394 = (void*)0;
        unsigned long long *l_395 = (void*)0;
        unsigned long long *l_396 = &g_99.f5;
        unsigned short l_408 = 0xBB6CL;
        int *l_409 = &g_99.f2;
        struct S1 ***l_420 = &g_419;
        for (g_99.f0 = 0; (g_99.f0 != 15); g_99.f0 = safe_add_func_int8_t_s_s(g_99.f0, 8))
        {
            int l_368 = 0x3D5889DFL;
            int **l_374 = &g_63;
            for (g_220.f3 = 0; (g_220.f3 == 10); ++g_220.f3)
            {
                int l_349 = (-8L);
                int **l_361 = &g_63;
                for (g_91.f4 = 0; (g_91.f4 <= (-25)); --g_91.f4)
                {
                    struct S0 l_342 = {0x24E26514L,0xB11CL,0xDE215FEDL,0x247DC389L,0x37C2L,0x40834887A738FAB0LL,0x5BCDC44BL,0x57L,1L,4294967288UL};
                    unsigned l_376 = 4294967295UL;
                    if ((l_342 , (safe_mul_func_uint16_t_u_u(((safe_mul_func_uint16_t_u_u(0x0B68L, l_347)) , g_220.f3), p_19))))
                    {
                        int *l_348 = &g_99.f2;
                        (*l_348) ^= 0x85C10DB3L;
                        if (l_349)
                            continue;
                        if ((*p_16))
                            break;
                        if (l_342.f3)
                            break;
                    }
                    else
                    {
                        unsigned *l_352 = &l_342.f9;
                        unsigned long long *l_363 = &g_99.f5;
                        int *l_365 = &l_349;
                        l_342.f2 = (((*l_363) = (safe_mod_func_int32_t_s_s(((-6L) >= ((*l_352) = p_19)), ((g_99.f1 && (((safe_div_func_int8_t_s_s(p_17, (0x51F378BAACBA1AB7LL ^ (safe_lshift_func_int16_t_s_s(l_342.f8, (((~g_68) ^ (safe_div_func_uint8_t_u_u(l_342.f1, (safe_div_func_int32_t_s_s(((void*)0 != l_361), 8UL))))) | 0x373FF6AFL)))))) , &g_252) == l_362)) & p_17)))) != l_364);
                        (*l_361) = (*l_361);
                        (*g_62) = (*g_62);
                        (*l_365) &= l_342.f0;
                    }
                    for (g_91.f0 = 0; (g_91.f0 != 26); ++g_91.f0)
                    {
                        l_369 ^= l_368;
                    }
                    for (g_99.f1 = (-21); (g_99.f1 == 22); g_99.f1++)
                    {
                        int *l_372 = &g_87;
                        (*l_372) = (p_18 <= p_18);
                        l_374 = l_373;
                        (*l_372) = l_375;
                    }
                    if (g_2)
                    {
                        long long l_377 = 0xE6966006FFA6133FLL;
                        struct S1 ***l_380 = &l_378;
                        struct S1 **l_382 = &l_379;
                        struct S1 ***l_381 = &l_382;
                        l_377 = l_376;
                        (*l_381) = ((*l_380) = l_378);
                    }
                    else
                    {
                        if ((*p_15))
                            break;
                        return p_19;
                    }
                }
                l_364 |= l_383;
            }
        }
        for (g_91.f6 = (-3); (g_91.f6 != 38); g_91.f6 = safe_add_func_uint64_t_u_u(g_91.f6, 8))
        {
            l_386 = &g_99;

            ;
            if ((*p_16))
                continue;
        }

        ;
        (*l_409) &= (g_387.f2 = (l_408 = (((safe_div_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((~(((safe_add_func_int8_t_s_s((((*l_396) &= g_91.f0) || ((p_17 | (l_397 != l_398)) ^ l_369)), (*g_298))) != 0x9DL) == (safe_mul_func_uint8_t_u_u((safe_sub_func_int16_t_s_s((safe_div_func_int32_t_s_s((((g_387.f2 > ((safe_sub_func_int64_t_s_s(p_17, p_19)) >= p_17)) >= p_18) , l_369), l_369)), 0xCD1BL)), p_17)))), 0x2FL)), l_347)) > l_407) && g_135)));
        (*l_409) |= (safe_rshift_func_int8_t_s_u((((*l_396) = 0x9F4F3C083DE8FA77LL) == (((*l_420) = ((safe_add_func_int32_t_s_s(((((safe_rshift_func_uint16_t_u_s(g_387.f8, ((safe_sub_func_uint8_t_u_u((g_91.f6 && ((g_387.f5 = 3UL) || 0x55C1383AA9112C5ELL)), p_18)) , l_369))) , (g_418 < (9UL <= (-4L)))) || 0x64L) , l_369), 0L)) , g_419)) == l_421)), l_407));
    }
    for (g_87 = (-12); (g_87 != (-10)); g_87 = safe_add_func_int32_t_s_s(g_87, 4))
    {
        int *l_424 = &g_99.f2;
        struct S2 l_425 = {0xFEBBA805L,255UL,0x6D08L,0x0BL,0x6553E57C57673869LL,0x8DL,0xB1262438L,0x26L,{9L,0L}};
        struct S0 *l_427 = (void*)0;
        struct S0 *l_428 = (void*)0;
        struct S0 *l_429 = &g_99;
        unsigned long long *l_438 = &g_2;
        int l_441 = 0x5607ABB6L;
        (*l_424) &= l_369;
        if ((((*l_429) = (l_426 = g_99)) , (((safe_mod_func_uint32_t_u_u((!(safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(p_19, 3)), (((((*l_438) = p_18) && (*l_424)) == (l_426.f2 = ((safe_sub_func_uint8_t_u_u(l_369, l_426.f8)) >= (*g_298)))) && g_4))), 0xF2L))), l_441)) == 7L) , 0xDE634C92L)))
        {
            unsigned *l_446 = &l_425.f6;
            if ((*p_15))
                break;
            (*l_424) &= (safe_add_func_uint32_t_u_u(((*l_446) = (1L & (l_369 = (safe_div_func_uint64_t_u_u(g_91.f6, ((*l_438) = 1UL)))))), (g_220.f3 != p_17)));
        }
        else
        {
            return p_17;
        }
        for (l_426.f1 = (-26); (l_426.f1 != 42); l_426.f1 = safe_add_func_uint16_t_u_u(l_426.f1, 1))
        {
            unsigned long long l_450 = 18446744073709551615UL;
            int *l_458 = &g_4;
            int l_459 = (-1L);
            g_449 = ((*g_62) = (*g_62));

            ;
            if (l_426.f5)
                break;
            if (l_426.f5)
            {
                int *l_455 = &l_369;
                long long *l_464 = &g_220.f4;
                (*l_455) &= (((((g_387.f4 &= l_450) ^ p_19) == (g_91.f6 ^= ((safe_div_func_int32_t_s_s((*l_424), 4294967295UL)) != g_99.f8))) ^ (p_19 , (safe_add_func_uint8_t_u_u(((*g_298) = p_18), ((g_91.f5 <= (((p_17 <= l_450) < (-9L)) , l_426.f2)) , 0x6DL))))) < 0xA92585072803D801LL);
                g_68 = (safe_div_func_uint8_t_u_u((0xC3194414L <= ((((p_19 != (func_40(l_458) , (l_459 = l_426.f2))) ^ ((safe_div_func_int8_t_s_s(0x53L, (*l_458))) | ((((*l_464) = (((*g_298) ^= ((safe_mul_func_uint8_t_u_u(l_426.f3, g_89)) , 0x50L)) >= 255UL)) , g_387.f9) <= p_19))) != (*l_424)) || 0x8C0B6CF9L)), (-8L)));

                ;
            }
            else
            {
                l_465 = l_426.f6;
            }
        }
    }

    ;
    return l_347;
}







static int * func_20(int * p_21, char p_22, int p_23, struct S2 p_24, int * p_25)
{
    unsigned char **l_222 = (void*)0;
    unsigned char ***l_221 = &l_222;
    int *l_223 = &g_87;
    struct S2 l_226 = {0x7E8B598AL,0xC6L,0x3E3DL,255UL,0L,1UL,0xA6CD7ECCL,1UL,{-8L,0x9161BFE24F2C05DELL}};
    long long *l_229 = &g_91.f4;
    unsigned long long *l_234 = &g_99.f5;
    char *l_235 = &g_99.f7;
    int *l_236 = &g_99.f0;
    long long l_239 = 0xEC25E21C417D1C9BLL;
    struct S1 *l_240 = &g_91.f8;
    unsigned l_245 = 0x7295AD5BL;
    short ***l_249 = &g_72;
    short ****l_248 = &l_249;
    short *****l_250 = (void*)0;
    unsigned short l_279 = 0x8B1CL;
    unsigned short l_309 = 0x7FC7L;
    char l_315 = (-1L);
    (*l_221) = (void*)0;
    (*g_62) = l_223;

    ;
    (*l_236) |= ((((g_91.f7 <= ((*l_235) = (((safe_add_func_int64_t_s_s(((*l_223) > p_24.f6), p_24.f0)) < ((l_226 , p_24.f0) != (safe_rshift_func_int16_t_s_s((p_24.f5 , ((((*l_229) ^= p_24.f4) ^ (g_2 = (((*l_234) = (safe_div_func_int64_t_s_s(((safe_lshift_func_int8_t_s_s((*l_223), 0)) == g_4), 0xA66ECC7CBBD14A7ELL))) == g_220.f6))) != 0L)), (*l_223))))) >= 4294967295UL))) | (*l_223)) >= 0x6AC6L) != (*l_223));
    if ((safe_mod_func_int16_t_s_s(((p_24.f8.f1 > (((l_239 , ((*l_240) = g_220.f8)) , &g_99) == (void*)0)) || (safe_sub_func_int32_t_s_s(((*l_236) ^= ((0xBE6F2985L > (*l_223)) == (safe_rshift_func_int16_t_s_s(l_245, (((safe_div_func_uint32_t_u_u(((l_248 = ((g_91.f1 > 8L) , l_248)) == g_251), g_220.f2)) , p_24.f2) || 4L))))), g_99.f7))), p_24.f5)))
    {
        char l_258 = 0xCDL;
        unsigned char *l_297 = (void*)0;
        unsigned short *l_305 = (void*)0;
        unsigned short *l_306 = &g_91.f2;
        unsigned *l_307 = (void*)0;
        unsigned *l_308 = (void*)0;
        int l_310 = 0x1B2F9461L;
        if ((*g_63))
        {
            unsigned l_255 = 18446744073709551610UL;
            struct S1 l_261 = {-4L,-8L};
            struct S2 l_274 = {0L,0x1CL,3UL,0xBFL,0x8C910E48E3788C7BLL,1UL,4294967293UL,0x49L,{0xBFD42704L,0x462E7488CC12D69FLL}};
            short *l_280 = &g_99.f4;
            int *l_281 = &g_99.f2;
            int *l_282 = &g_68;
            (*l_236) |= ((safe_lshift_func_int8_t_s_s(l_255, g_91.f2)) , (safe_add_func_uint32_t_u_u((p_24.f8 , p_24.f6), 0x663B8F41L)));
            (*l_282) &= ((*l_281) |= ((safe_add_func_uint8_t_u_u(((l_258 && ((((p_24.f1 = ((p_24.f5 != (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s(g_2, g_220.f3)), 0))) <= (((*l_236) &= (l_274 , ((*l_280) = (g_2 > ((g_99.f8 == ((safe_add_func_int32_t_s_s((l_279 == (p_24.f1 , (-2L))), l_258)) == 0x04L)) & 0x8410EFE5L))))) , 9UL))) , g_220.f2) , l_258) <= l_274.f7)) > 0x89L), g_87)) ^ g_220.f3));
            for (g_220.f8.f1 = 0; (g_220.f8.f1 != 8); ++g_220.f8.f1)
            {
                return p_21;


            }
        }
        else
        {
            unsigned *l_289 = &l_226.f6;
            int *l_290 = &g_68;
            (*l_290) ^= (g_220.f8.f1 == (((*l_236) = (((*l_289) = (l_258 & ((((*l_223) & (safe_lshift_func_uint16_t_u_u(1UL, 12))) > (safe_lshift_func_uint8_t_u_s(8UL, 1))) , g_220.f5))) < (-4L))) & ((5L | (p_24.f6 , p_24.f6)) , g_220.f3)));
            (*l_290) = (*g_63);
        }
        l_310 = (safe_div_func_uint32_t_u_u((((*l_223) = (*g_63)) & ((safe_rshift_func_uint8_t_u_s((safe_add_func_uint8_t_u_u(0x27L, 0x2DL)), 0)) < p_24.f7)), ((l_297 != g_298) & (g_91.f0 != ((*l_236) ^= (safe_lshift_func_int16_t_s_u(((l_309 = (~(safe_unary_minus_func_uint64_t_u((safe_unary_minus_func_uint16_t_u((p_24.f2 < ((*l_306) = ((safe_lshift_func_uint8_t_u_u(l_258, l_258)) , l_258))))))))) > 0xD7DCAF84L), l_258)))))));
    }
    else
    {
        struct S0 *l_316 = &g_99;
        int *l_331 = &g_87;
        for (l_245 = 14; (l_245 == 46); l_245 = safe_add_func_uint16_t_u_u(l_245, 5))
        {
            struct S0 *l_314 = (void*)0;
            struct S0 **l_313 = &l_314;
            int *l_326 = (void*)0;
            (*l_313) = &g_99;

            ;
            if (l_315)
            {
                struct S0 *l_317 = &g_99;
                int l_318 = 2L;
                struct S2 *l_330 = &g_220;
                struct S2 **l_329 = &l_330;
                l_317 = l_316;
                if (l_318)
                {
                    struct S1 l_321 = {2L,0xA63CADAEC6269774LL};
                    if ((safe_sub_func_uint16_t_u_u(0xD8DCL, (l_321 , (safe_add_func_int16_t_s_s(0L, (safe_div_func_uint16_t_u_u(g_91.f2, 0x10FDL))))))))
                    {
                        (*g_62) = l_326;

                        ;
                        (*l_223) &= 0L;
                    }
                    else
                    {
                        (*l_223) = (safe_sub_func_int8_t_s_s(1L, 0x18L));
                        return p_25;


                    }

                    ;
                    (**l_313) = (*l_317);
                }
                else
                {
                    (*g_62) = p_21;

                    ;
                }

                ;
                (*l_329) = &g_220;
            }
            else
            {
                (*l_223) = 1L;
            }
        }

        ;
        (*l_223) |= (*p_21);
        (*g_62) = p_21;

        ;
        (*g_62) = l_331;

        ;
    }
    return p_21;


}







static struct S1 func_26(unsigned p_27, unsigned char p_28, struct S1 p_29)
{
    int *l_31 = (void*)0;
    int **l_32 = (void*)0;
    int *l_34 = &g_4;
    int **l_33 = &l_34;
    short ***l_185 = &g_72;
    char l_202 = 2L;
    struct S2 l_206 = {0xE0A869F2L,9UL,0xD826L,250UL,0x453A7CDF416ECE8BLL,0x94L,0x1C2C015DL,0xADL,{0L,0x7E5E51F4D32C972FLL}};
    long long l_211 = 0xA644AE2F335C160BLL;
    if ((l_31 != ((*l_33) = l_31)))
    {
        unsigned l_46 = 18446744073709551607UL;
        struct S0 l_59 = {0x25F3D189L,0xEBB9L,1L,0UL,0x29ACL,1UL,1UL,-3L,0L,0xB45D9541L};
        unsigned l_60 = 18446744073709551615UL;
        short *l_61 = &l_59.f4;
        int l_200 = 1L;
        g_99 = func_35(func_40((func_42(((safe_add_func_uint16_t_u_u((((l_46 <= (safe_add_func_int64_t_s_s(g_4, (safe_sub_func_int8_t_s_s(g_4, ((safe_div_func_int16_t_s_s(((+(safe_add_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((p_29.f0 & (safe_sub_func_int32_t_s_s(g_4, 0xBDC1AABBL))), g_4)), ((*l_61) = (l_59 , (((void*)0 != &l_34) && l_60)))))) , 0x2005L), g_4)) == g_2)))))) , p_29) , 0xDD89L), p_28)) , g_62)) , (*g_62))), l_60, p_27, g_62);

        ;
        for (l_59.f0 = 0; (l_59.f0 == 6); ++l_59.f0)
        {
            short ***l_189 = &g_72;
            short ****l_188 = &l_189;
            int l_197 = 6L;
            unsigned long long l_198 = 0x97572B7770692080LL;
            struct S1 *l_199 = &g_91.f8;
            if ((safe_mul_func_int16_t_s_s((safe_add_func_int64_t_s_s((l_185 != &g_72), (((+(safe_add_func_uint64_t_u_u(g_99.f2, p_29.f0))) == p_28) , (p_29.f0 & (((*l_188) = l_185) == l_185))))), l_59.f7)))
            {
                return p_29;


            }
            else
            {
                int *l_190 = &l_59.f2;
                (*g_62) = l_190;

                ;
            }

            ;
            for (g_99.f9 = 26; (g_99.f9 == 52); g_99.f9++)
            {
                char *l_196 = &g_99.f7;
                l_197 |= (g_91.f8 , ((**g_62) = (((func_42(&g_63) , 6UL) & ((0xE31AL && 0x4901L) , ((safe_unary_minus_func_int8_t_s((safe_lshift_func_uint8_t_u_s(p_29.f1, (p_27 >= ((*l_196) &= ((0UL || 0L) <= 0xD1BC9E080C69CC21LL))))))) , 1L))) > g_91.f4)));
                if (l_198)
                    continue;
            }
            (*l_199) = p_29;
            if (l_198)
                break;
        }

        ;
        (**g_62) &= (l_200 || p_29.f1);
    }
    else
    {
        int *l_201 = &g_99.f0;
        (*l_201) = 0x9FA64D3AL;
        (*g_62) = l_201;

        ;
    }

    ;

    if (l_202)
    {
        int *l_205 = &g_99.f0;
        for (l_202 = 0; (l_202 < (-3)); l_202 = safe_sub_func_int16_t_s_s(l_202, 6))
        {
            (*g_62) = ((*l_33) = &g_87);

            ;
            ;
        }

        ;

        l_205 = (*l_33);

        ;
        (*g_62) = &g_4;

        ;
    }
    else
    {
        struct S2 *l_207 = &g_91;
        long long *l_210 = &l_206.f8.f1;
        unsigned char *l_212 = &g_91.f3;
        short l_213 = (-8L);
        char *l_214 = (void*)0;
        char *l_215 = &g_99.f7;
        (*l_207) = l_206;
        (*g_62) = (((p_27 && 0x327CFB3C6D7EFADBLL) < (+(safe_rshift_func_int8_t_s_u(((*l_215) &= ((((*l_210) = 0x330E0CC0C323BEAALL) , ((+g_68) , l_211)) == (g_99.f4 ^= (((((*l_212) = 255UL) <= ((0xE5L <= p_29.f0) <= p_29.f0)) && l_213) > g_91.f6)))), 6)))) , (void*)0);

        ;
    }

    ;
    ;
    return l_206.f8;
}







static struct S0 func_35(struct S2 p_36, unsigned p_37, int p_38, int ** p_39)
{
    int l_166 = 1L;
    struct S0 l_177 = {3L,0xDD20L,-9L,0x203A4050L,0x8DB5L,0x3B29BC1B99DA1B10LL,0xFE3058E3L,1L,-2L,0x83E401C7L};
    struct S0 l_178 = {0L,6UL,1L,0x94D02D65L,0xDCFFL,0xAFA6B09CDEF65445LL,0x3A4FFD79L,0x6DL,0x4D4028BDL,1UL};
    for (g_91.f8.f0 = 26; (g_91.f8.f0 <= 17); g_91.f8.f0 = safe_sub_func_uint16_t_u_u(g_91.f8.f0, 1))
    {
        unsigned char l_165 = 1UL;
        l_165 = (-1L);
        (*p_39) = (*g_62);
    }
    if (((*g_63) = l_166))
    {
        unsigned short l_167 = 1UL;
        char *l_174 = &g_99.f7;
        unsigned long long *l_175 = &g_2;
        int *l_176 = &g_99.f2;
        (*l_176) &= (((((((((**g_62) = l_167) >= ((safe_lshift_func_uint16_t_u_s((p_36.f8.f0 != (l_167 , ((safe_lshift_func_uint16_t_u_u(g_99.f1, 4)) & ((*l_175) = (l_166 < (p_36.f0 , ((*l_174) &= ((safe_add_func_uint8_t_u_u(l_167, g_91.f6)) , 0xA0L)))))))), 13)) >= 18446744073709551615UL)) || (**p_39)) <= l_166) && l_167) <= (-1L)) <= (-7L)) ^ l_166);
        (*g_63) = 0L;
    }
    else
    {
        return l_177;
    }
    return l_178;
}







static struct S2 func_40(int * p_41)
{
    int *l_161 = &g_68;
    struct S2 l_162 = {0xEA59E92CL,0UL,1UL,250UL,0L,1UL,0x0AB6DAC1L,0UL,{0x226855CDL,0xD44740B6445F9DABLL}};
    (*g_62) = l_161;

    ;
    return l_162;
}







static struct S2 func_42(int ** p_43)
{
    short l_64 = 0x49D5L;
    int *l_67 = &g_68;
    unsigned long long l_84 = 0xC2AB487867195599LL;
    struct S0 *l_98 = &g_99;
    int **l_103 = (void*)0;
    int l_134 = (-8L);
    struct S2 l_160 = {0x536C6510L,1UL,0UL,251UL,-4L,0x73L,0x0D034B6EL,255UL,{-1L,0L}};
    l_64 = (-1L);
    (*l_67) ^= (safe_lshift_func_int8_t_s_u(((void*)0 != p_43), 2));
    for (g_68 = 3; (g_68 <= 4); g_68++)
    {
        int l_71 = 4L;
        short *l_74 = &l_64;
        short **l_73 = &l_74;
        int **l_101 = &l_67;
        long long *l_144 = (void*)0;
        short l_151 = 0x0103L;
        int l_152 = 0L;
        struct S2 l_153 = {0x99C26CA6L,0x16L,0xC9F8L,0xF3L,0xBAB51E1822EBED49LL,0xA5L,0UL,255UL,{0x4DF7A928L,0x098A2B63D32DC010LL}};
        char l_158 = 0L;
    }
    return l_160;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91.f0, "g_91.f0", print_hash_value);
    transparent_crc(g_91.f1, "g_91.f1", print_hash_value);
    transparent_crc(g_91.f2, "g_91.f2", print_hash_value);
    transparent_crc(g_91.f3, "g_91.f3", print_hash_value);
    transparent_crc(g_91.f4, "g_91.f4", print_hash_value);
    transparent_crc(g_91.f5, "g_91.f5", print_hash_value);
    transparent_crc(g_91.f6, "g_91.f6", print_hash_value);
    transparent_crc(g_91.f7, "g_91.f7", print_hash_value);
    transparent_crc(g_91.f8.f0, "g_91.f8.f0", print_hash_value);
    transparent_crc(g_91.f8.f1, "g_91.f8.f1", print_hash_value);
    transparent_crc(g_99.f0, "g_99.f0", print_hash_value);
    transparent_crc(g_99.f1, "g_99.f1", print_hash_value);
    transparent_crc(g_99.f2, "g_99.f2", print_hash_value);
    transparent_crc(g_99.f3, "g_99.f3", print_hash_value);
    transparent_crc(g_99.f4, "g_99.f4", print_hash_value);
    transparent_crc(g_99.f5, "g_99.f5", print_hash_value);
    transparent_crc(g_99.f6, "g_99.f6", print_hash_value);
    transparent_crc(g_99.f7, "g_99.f7", print_hash_value);
    transparent_crc(g_99.f8, "g_99.f8", print_hash_value);
    transparent_crc(g_99.f9, "g_99.f9", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_220.f0, "g_220.f0", print_hash_value);
    transparent_crc(g_220.f1, "g_220.f1", print_hash_value);
    transparent_crc(g_220.f2, "g_220.f2", print_hash_value);
    transparent_crc(g_220.f3, "g_220.f3", print_hash_value);
    transparent_crc(g_220.f4, "g_220.f4", print_hash_value);
    transparent_crc(g_220.f5, "g_220.f5", print_hash_value);
    transparent_crc(g_220.f6, "g_220.f6", print_hash_value);
    transparent_crc(g_220.f7, "g_220.f7", print_hash_value);
    transparent_crc(g_220.f8.f0, "g_220.f8.f0", print_hash_value);
    transparent_crc(g_220.f8.f1, "g_220.f8.f1", print_hash_value);
    transparent_crc(g_387.f0, "g_387.f0", print_hash_value);
    transparent_crc(g_387.f1, "g_387.f1", print_hash_value);
    transparent_crc(g_387.f2, "g_387.f2", print_hash_value);
    transparent_crc(g_387.f3, "g_387.f3", print_hash_value);
    transparent_crc(g_387.f4, "g_387.f4", print_hash_value);
    transparent_crc(g_387.f5, "g_387.f5", print_hash_value);
    transparent_crc(g_387.f6, "g_387.f6", print_hash_value);
    transparent_crc(g_387.f7, "g_387.f7", print_hash_value);
    transparent_crc(g_387.f8, "g_387.f8", print_hash_value);
    transparent_crc(g_387.f9, "g_387.f9", print_hash_value);
    transparent_crc(g_418, "g_418", print_hash_value);
    transparent_crc(g_498, "g_498", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_648, "g_648", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
