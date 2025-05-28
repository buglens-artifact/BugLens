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
   unsigned long long f0;
   unsigned short f1;
   short f2;
   long long f3;
};

struct S1 {
   unsigned f0 : 3;
   signed f1 : 5;
   unsigned f2 : 20;
};


static struct S1 g_8 = {1,2,623};
static int g_14 = 0xE76E5B14L;
static int *g_13 = &g_14;
static unsigned g_69 = 0xA21F9F6DL;
static unsigned long long g_71 = 0xA897151158E58409LL;
static struct S0 g_72 = {0x53370C164D14C5BDLL,0xF9C2L,7L,7L};
static int g_91 = (-1L);
static long long g_96 = 0xE779239A852A6FDDLL;
static int g_100 = 0x021B5A5EL;
static int *g_99 = &g_100;
static int **g_98 = &g_99;
static unsigned g_104 = 5UL;
static short g_134 = (-1L);
static char g_174 = 0x3FL;
static unsigned short g_187 = 0xD48EL;
static unsigned char g_195 = 0x1EL;
static unsigned g_230 = 6UL;
static struct S0 *g_268 = &g_72;
static struct S0 **g_267 = &g_268;
static struct S1 g_282 = {1,1,775};
static int g_284 = 0x715F0C1AL;
static int g_292 = 0x020AE25DL;
static unsigned g_321 = 0xEA328A69L;
static unsigned short **g_330 = (void*)0;
static unsigned g_344 = 8UL;
static unsigned **g_363 = (void*)0;
static char g_407 = 5L;
static struct S0 g_415 = {4UL,0xB6F3L,0x2024L,0xD0F13C408D740E75LL};
static unsigned long long *g_447 = (void*)0;
static unsigned long long **g_446 = &g_447;
static unsigned long long ***g_445 = &g_446;
static unsigned g_448 = 0xE8A9228AL;
static struct S1 *g_451 = &g_8;
static char *g_475 = &g_407;
static char **g_474 = &g_475;
static unsigned long long g_484 = 18446744073709551615UL;
static int g_520 = 0x78B865E8L;
static unsigned char g_585 = 0x57L;
static unsigned g_592 = 3UL;
static unsigned char g_651 = 0x94L;
static unsigned g_731 = 1UL;
static short *g_814 = (void*)0;
static struct S1 g_834 = {0,-4,915};
static int g_836 = (-2L);
static int *g_835 = &g_836;
static unsigned long long g_841 = 4UL;
static unsigned ***g_848 = &g_363;
static int ***g_876 = (void*)0;
static int ****g_875 = &g_876;
static struct S1 **g_879 = &g_451;
static struct S1 ***g_878 = &g_879;
static short g_926 = 0x5CD3L;
static short **g_1008 = &g_814;
static int g_1043 = 0L;
static int *g_1076 = &g_1043;
static int **g_1075 = &g_1076;
static unsigned long long *g_1107 = &g_415.f0;
static char ****g_1121 = (void*)0;
static struct S1 g_1138 = {0,-0,627};
static char g_1170 = (-1L);
static int g_1203 = 1L;
static long long *g_1239 = &g_96;
static long long **g_1238 = &g_1239;
static unsigned *g_1268 = &g_230;
static unsigned **g_1267 = &g_1268;
static unsigned ***g_1266 = &g_1267;



static unsigned long long func_1(void);
static unsigned short func_11(long long p_12);
static struct S1 func_19(struct S1 p_20, struct S0 p_21, int * p_22, int ** p_23, unsigned p_24);
static int func_27(unsigned p_28);
static short func_38(int ** p_39, unsigned long long p_40);
static unsigned short func_44(struct S1 p_45, int * p_46);
static struct S1 func_47(unsigned p_48, unsigned long long p_49);
static unsigned func_50(unsigned char p_51, unsigned p_52, unsigned short p_53, int ** p_54, unsigned p_55);
static int * func_59(unsigned long long p_60, int ** p_61);
static unsigned long long func_62(unsigned p_63, unsigned long long * p_64, struct S0 p_65, int * p_66, unsigned p_67);
static unsigned long long func_1(void)
{
    int l_2 = 0L;
    int *l_3 = &l_2;
    unsigned long long *l_839 = (void*)0;
    unsigned long long *l_840 = &g_841;
    int l_842 = 0x10270979L;
    int *l_843 = &l_2;
    int *l_844 = (void*)0;
    struct S0 l_849 = {18446744073709551615UL,0xCCF0L,0x5C18L,0xE11A8702171C1CFBLL};
    long long l_859 = 1L;
    char **l_860 = &g_475;
    unsigned l_871 = 7UL;
    int l_888 = 1L;
    struct S1 l_889 = {1,1,700};
    unsigned long long ***l_890 = &g_446;
    unsigned short l_939 = 0UL;
    short *l_956 = &g_72.f2;
    unsigned char l_960 = 0x9FL;
    short **l_1009 = (void*)0;
    int l_1039 = (-5L);
    unsigned l_1095 = 3UL;
    char ****l_1120 = (void*)0;
    unsigned l_1137 = 0xD425197DL;
    char l_1176 = (-7L);
    unsigned short l_1183 = 0xE6D9L;
    short l_1190 = 0x6DF6L;
    unsigned short l_1205 = 1UL;
    char l_1278 = 1L;
    unsigned char l_1281 = 0x38L;
    (*l_3) = l_2;
    if ((((((((safe_mul_func_int32_t_s_s((safe_sub_func_int16_t_s_s((g_8 , (safe_div_func_uint16_t_u_u(func_11(g_8.f0), (((*l_840) = ((safe_div_func_int16_t_s_s((((((safe_lshift_func_int8_t_s_u(g_321, func_44(g_834, g_835))) > (safe_div_func_uint64_t_u_u((*l_3), (*l_3)))) & g_415.f1) , (*l_3)) > (*l_3)), 0x7D60L)) || g_836)) ^ g_834.f1)))), 5L)), 0L)) != l_842) != (*l_3)) , l_843) != l_844) , 0x38L) <= g_836))
    {
        struct S0 **l_845 = &g_268;
        int l_856 = (-1L);
        long long *l_857 = &g_72.f3;
        int **l_858 = &l_843;
        char ***l_861 = &l_860;
        (*l_845) = (void*)0;
        (**l_858) = ((*l_3) > (*l_3));
        (*g_835) ^= ((g_174 == (**l_858)) >= (**l_858));
        (*l_861) = l_860;
    }
    else
    {
        char l_870 = 0xFFL;
        struct S0 l_931 = {0xC89D44E58054FD7ALL,1UL,0x0357L,0x5B89C6B3A36E3C1BLL};
        unsigned short l_942 = 1UL;
        unsigned short l_943 = 0UL;
        int l_966 = 1L;
        int **l_971 = &l_844;
        unsigned *l_985 = &g_592;
        struct S1 l_992 = {0,-2,64};
        short *l_1133 = &g_415.f2;
        int l_1156 = 0x342FE20EL;
        unsigned short l_1181 = 0UL;
        unsigned ***l_1269 = &g_1267;
        for (g_592 = 14; (g_592 == 14); g_592++)
        {
            struct S1 l_868 = {0,-2,46};
            unsigned *l_869 = &g_104;
            long long l_874 = 5L;
            short l_891 = 1L;
            struct S0 l_968 = {18446744073709551615UL,0x650BL,0x5FCBL,-1L};
            int **l_972 = (void*)0;
            if (((*l_3) |= (((safe_lshift_func_uint16_t_u_s((((((safe_mul_func_int16_t_s_s(l_870, l_870)) , (**g_474)) != (**g_474)) | 0x25F8L) & (*g_835)), g_344)) <= g_14) == g_284)))
            {
                if (l_868.f1)
                    break;
                return l_871;
            }
            else
            {
                int ****l_877 = (void*)0;
                char *l_902 = &g_407;
                struct S0 l_946 = {18446744073709551612UL,0xD4D4L,-6L,0x3702A588834598B6LL};
                short *l_954 = &l_849.f2;
                (*g_835) = (safe_lshift_func_uint16_t_u_u(l_868.f0, ((((l_874 || (g_104 || ((l_877 = g_875) == &g_876))) && ((g_878 == (void*)0) || (0x65A1L && ((l_889 , (*l_860)) == (*l_860))))) || l_870) , 0xC6F8L)));
                if (((void*)0 == l_890))
                {
                    unsigned short l_905 = 0x3FDFL;
                    char l_910 = 0x0CL;
                    int l_911 = 0x1B52A663L;
                    unsigned short *l_938 = &g_415.f1;
                    unsigned char *l_940 = (void*)0;
                    unsigned char *l_941 = &g_585;
                    int **l_961 = &g_13;
                    (*l_843) ^= l_891;
                    if (l_870)
                    {
                        int l_903 = 0xC324E743L;
                        (*l_843) = (((safe_lshift_func_int8_t_s_s(l_870, (safe_mod_func_uint64_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_div_func_uint32_t_u_u(((l_902 != l_902) > l_903), ((safe_unary_minus_func_int32_t_s((l_905 , (safe_mul_func_uint8_t_u_u(0x7BL, (((**g_474) == l_874) , ((((safe_div_func_int16_t_s_s(l_870, l_868.f0)) , l_868.f0) && g_292) > g_834.f2))))))) , (*g_835)))) > 0x5CL), l_905)), l_903)), l_903)))) & (*l_843)) | g_14);
                        (*g_835) |= l_868.f2;
                    }
                    else
                    {
                        short l_912 = 0L;
                        unsigned char *l_919 = (void*)0;
                        unsigned char *l_920 = &g_195;
                        unsigned char *l_921 = &g_651;
                        unsigned char *l_922 = (void*)0;
                        unsigned char *l_923 = &g_585;
                        (*l_843) = (l_910 != l_891);
                        if ((*l_843))
                            continue;
                        l_911 ^= 0x18A00093L;
                        (*g_835) |= ((l_912 || (((l_849 , (safe_rshift_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(g_69, 1)), 9))) == ((*l_843) ^= 0x8729L)) | (safe_rshift_func_int16_t_s_s(l_912, 7)))) , (((*l_923) &= ((*l_921) = (~((*l_920) = l_870)))) , ((safe_sub_func_int8_t_s_s((-2L), ((*l_920) = (l_912 != (((*g_475) , 0xD8903F8D72FE409BLL) >= 0xC3BD0D7BB555F60ELL))))) ^ g_72.f2)));
                    }
                    if (l_942)
                    {
                        return l_943;
                    }
                    else
                    {
                        struct S0 **l_947 = &g_268;
                        short *l_955 = &l_891;
                        int l_959 = 0xD4A66BDEL;
                        (*l_947) = (((safe_lshift_func_uint8_t_u_s(((*l_941) = l_910), 7)) , ((*g_268) = l_946)) , &l_931);
                        (*l_843) = (safe_mul_func_int16_t_s_s(((0L & 0x3AL) | (safe_sub_func_int64_t_s_s(g_284, ((safe_mul_func_uint8_t_u_u(g_134, ((l_954 != (l_956 = l_955)) & (safe_div_func_uint8_t_u_u(((*l_941) = (l_959 , l_891)), g_72.f1))))) == l_931.f3)))), l_943));
                    }
                }
                else
                {
                    (*l_843) |= l_931.f2;
                }
                (*l_3) &= ((safe_lshift_func_int8_t_s_s(((l_931.f2 != (l_946.f3 , (l_968.f1 && g_134))) < l_931.f0), l_943)) , 1L);
                (*g_98) = (void*)0;
            }
            (*g_835) &= (safe_mul_func_uint8_t_u_u((l_868.f2 & (safe_lshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s(g_834.f1, (safe_lshift_func_int16_t_s_u(((safe_add_func_int8_t_s_s((**g_474), ((void*)0 == &g_446))) || l_968.f3), (*l_843))))) , (void*)0) != (void*)0), g_292))), (*l_843)));
            (*g_268) = (*g_268);
            if (l_931.f2)
                continue;
        }
        (*g_98) = func_59((*l_843), l_971);
        (*g_99) = ((safe_sub_func_int32_t_s_s(((-1L) & (((g_448 | (((**g_474) >= g_71) && (*l_843))) && (*g_99)) >= (*l_3))), (l_849 , ((*l_985) = ((safe_mod_func_uint32_t_u_u(g_415.f0, (*l_843))) < 0x39D7E15882AE87DFLL))))) || (*l_3));
        for (g_926 = 9; (g_926 == (-20)); g_926 = safe_sub_func_uint64_t_u_u(g_926, 4))
        {
            struct S1 *l_993 = &g_834;
            int l_998 = 0L;
            unsigned l_999 = 0x079F8BB0L;
            struct S1 ***l_1002 = &g_879;
            int l_1013 = (-1L);
            int **l_1033 = &g_13;
            unsigned long long l_1073 = 0x1A81C9A42C6B9F1ALL;
            unsigned l_1090 = 0x0E4B1226L;
            int *l_1122 = &l_998;
            int l_1123 = 0xD306974BL;
            struct S1 l_1128 = {1,3,903};
            long long l_1241 = (-1L);
            short *l_1256 = &g_415.f2;
        }
    }
    (*g_835) ^= (safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s((*l_3), (~l_1278))), (safe_mul_func_uint16_t_u_u(0x2D99L, (*l_3)))));
    return l_1281;
}







static unsigned short func_11(long long p_12)
{
    int **l_15 = &g_13;
    int *l_17 = (void*)0;
    int **l_16 = &l_17;
    struct S1 l_25 = {1,3,228};
    short l_302 = 7L;
    struct S1 l_324 = {1,4,949};
    unsigned char *l_350 = &g_195;
    int *l_400 = &g_91;
    unsigned long long **l_409 = (void*)0;
    unsigned long long *l_414 = &g_71;
    struct S0 l_434 = {0x432D181059801792LL,0x89D7L,-4L,-10L};
    char l_568 = 1L;
    int *l_586 = &g_91;
    struct S1 l_600 = {0,4,826};
    struct S1 **l_605 = &g_451;
    short *l_680 = &g_415.f2;
    short **l_679 = &l_680;
    unsigned *l_716 = &g_448;
    unsigned short *l_719 = &g_187;
    unsigned short **l_718 = &l_719;
    struct S0 l_822 = {0x9651049066CDB6CDLL,9UL,0x192FL,0x6314CC8675C2F4D2LL};
    unsigned char **l_826 = &l_350;
    unsigned char *l_828 = (void*)0;
    unsigned char **l_827 = &l_828;
    unsigned char *l_829 = &g_195;
    (*l_16) = ((*l_15) = g_13);
    if ((*l_17))
    {
        int *l_18 = &g_14;
        struct S0 l_26 = {0UL,0xC39CL,3L,0x03132D683A7EF23ELL};
        unsigned *l_293 = &g_69;
        struct S1 l_307 = {0,0,326};
        unsigned short *l_329 = (void*)0;
        unsigned short **l_328 = &l_329;
        struct S1 l_349 = {0,-3,651};
        int l_351 = 0xBA12FF2CL;
        unsigned l_359 = 0xB2344DFEL;
        int **l_461 = (void*)0;
        short *l_464 = &g_72.f2;
        short **l_463 = &l_464;
        int *l_536 = &g_520;
        char l_556 = 7L;
        long long l_567 = (-1L);
        if ((((l_18 != (void*)0) | (func_19(l_25, l_26, l_18, &l_18, ((*l_293) = ((g_8.f0 < p_12) , (func_27(((safe_div_func_int32_t_s_s(p_12, p_12)) < 0x94A219909D073D4CLL)) , g_71)))) , g_282.f1)) , p_12))
        {
            int *l_308 = &g_14;
            short *l_309 = &l_26.f2;
            char *l_332 = &g_174;
            long long l_356 = 0x45B9DD88F5EB5AFFLL;
            unsigned long long *l_360 = &g_72.f0;
            struct S0 *l_381 = &g_72;
            if (((safe_mul_func_uint8_t_u_u(1UL, ((((g_282.f1 == 0x381F3CD5L) | ((*l_309) = ((g_8.f2 == (((((*l_17) | l_302) >= (safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s(((*l_15) == ((*g_98) = (void*)0)), func_44(l_307, l_308))) == (*l_17)), g_230))) != 0L) != 0x4EEF8700L)) < g_230))) , 1UL) , (*l_18)))) == p_12))
            {
                struct S0 l_314 = {0x075EF67230A18AA9LL,0xA07CL,1L,0xA0F28B6A91E52429LL};
                int l_322 = (-1L);
                unsigned long long *l_323 = &l_26.f0;
                struct S1 *l_325 = &g_8;
                unsigned short ***l_331 = &g_330;
                int *l_333 = (void*)0;
                int *l_334 = &l_322;
                for (l_26.f0 = 0; (l_26.f0 < 14); ++l_26.f0)
                {
                    for (g_292 = 0; (g_292 != 10); g_292 = safe_add_func_uint64_t_u_u(g_292, 5))
                    {
                        unsigned l_315 = 0x46207BF8L;
                        struct S1 *l_318 = &l_25;
                        (*g_268) = l_314;
                        l_315 = (g_8.f0 , (0xE0927C5C9C01FD62LL < p_12));
                        (*l_318) = ((safe_rshift_func_uint16_t_u_u((**l_16), 14)) , l_25);
                        l_322 |= (safe_add_func_int32_t_s_s(g_321, (*l_18)));
                    }
                }
                (*l_325) = (p_12 , l_324);
                (*l_334) = ((*l_17) |= ((safe_rshift_func_int16_t_s_s((l_328 != ((*l_331) = g_330)), 12)) >= (((void*)0 != l_332) == p_12)));
            }
            else
            {
                struct S1 *l_341 = &g_8;
                unsigned *l_342 = &g_104;
                unsigned *l_343 = &g_344;
                int l_376 = (-1L);
                unsigned long long *l_396 = &g_71;
                (**g_267) = (**g_267);
                l_351 ^= (l_307.f1 |= (safe_sub_func_uint32_t_u_u(((*l_343) = ((*g_13) == ((*l_342) = (safe_mul_func_uint16_t_u_u(((*l_17) >= (p_12 && ((*l_332) = (*l_18)))), (safe_lshift_func_uint8_t_u_u(func_44(((*l_341) = g_8), (*l_15)), 6))))))), (safe_add_func_int8_t_s_s((((safe_rshift_func_uint16_t_u_u(((l_349 , &g_195) == l_350), 4)) || p_12) , (**l_15)), 0x43L)))));
                if (((**g_267) , (safe_mod_func_int8_t_s_s(g_282.f0, (0x99L && ((*l_332) = ((((*l_18) == (safe_add_func_int32_t_s_s(l_356, (g_72.f1 , 0x680CEB50L)))) , p_12) , ((safe_rshift_func_uint8_t_u_u(func_62(((g_187 &= l_359) , 18446744073709551615UL), l_360, (**g_267), &l_351, g_72.f1), 6)) & 0x25L))))))))
                {
                    (*l_15) = &l_351;
                    (*l_18) = (-1L);
                }
                else
                {
                    unsigned short l_373 = 1UL;
                    struct S1 l_388 = {0,0,931};
                    int *l_389 = &g_91;
                    if ((**l_16))
                    {
                        unsigned ***l_364 = &g_363;
                        int l_371 = 0x0B231EA6L;
                        (*l_308) = 0xE2EB2763L;
                        (**l_16) = p_12;
                        (*l_364) = (((*l_308) || (safe_rshift_func_uint8_t_u_s((~((*l_350) = (((*g_98) != (void*)0) ^ (**l_15)))), 5))) , g_363);
                        l_307.f1 &= (((safe_rshift_func_uint8_t_u_s(254UL, 1)) > (p_12 && ((**l_15) ^= p_12))) | ((((void*)0 != l_309) | p_12) != (safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s(l_371, ((*l_332) = 8L))) <= 255UL), g_8.f2))));
                    }
                    else
                    {
                        long long l_372 = (-1L);
                        (*l_308) = func_27(p_12);
                        l_372 = (**l_16);
                    }
                    (*l_308) = ((((*l_332) = (l_373 = g_230)) && (safe_lshift_func_int8_t_s_s((-10L), 5))) | l_376);
                    (*l_389) ^= (safe_div_func_int16_t_s_s(g_284, (safe_rshift_func_int16_t_s_s(l_376, (+((((((*g_267) = (*g_267)) != l_381) | (((((*l_18) = (safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(g_14, (safe_rshift_func_int8_t_s_s(g_187, g_284)))), ((l_388 , p_12) ^ 0x1227L)))) < l_388.f2) && l_388.f2) >= l_376)) & p_12) > l_376))))));
                }
                if (((safe_sub_func_uint8_t_u_u((*l_308), ((safe_mod_func_int64_t_s_s((safe_sub_func_int64_t_s_s((((g_71 , l_396) != l_396) > (safe_div_func_int8_t_s_s(((((((((void*)0 == l_17) ^ ((**l_16) ^ func_44(l_25, func_59((**l_16), &l_308)))) ^ p_12) != 255UL) , p_12) , 0L) , 1L), (-1L)))), 0xD1BA95E0398F459FLL)), g_321)) | (*l_17)))) >= l_376))
                {
                    struct S1 **l_399 = &l_341;
                    (*l_399) = &g_8;
                    l_308 = l_400;
                    (*l_16) = (*g_98);
                }
                else
                {
                    return p_12;
                }
            }
        }
        else
        {
            char *l_405 = &g_174;
            char *l_406 = &g_407;
            int l_408 = (-1L);
            unsigned long long ***l_410 = &l_409;
            short *l_411 = &l_302;
            unsigned short *l_412 = &g_72.f1;
            int l_413 = 7L;
            int *l_416 = &g_284;
            unsigned short *l_417 = &g_187;
            struct S0 ***l_421 = &g_267;
            unsigned l_425 = 0x72610C51L;
            struct S0 l_430 = {0xEB84C3538599DA61LL,0xB0B1L,0L,0x0BFA77B2181C5315LL};
            int **l_450 = (void*)0;
            struct S1 l_457 = {0,4,522};
            int **l_462 = &g_13;
            unsigned long long l_534 = 0x47BCDDCC1A26BE1ELL;
            int *l_555 = &g_14;
            unsigned long long l_581 = 0x1D2F6DC7A6227AADLL;
            (*g_98) = func_59(((*l_414) = (((*l_417) ^= ((*l_18) = (((safe_div_func_uint8_t_u_u(func_62((safe_sub_func_int16_t_s_s(((*l_411) |= (((-6L) >= (((*l_18) >= (((*l_406) = ((*l_405) ^= p_12)) >= p_12)) | l_408)) && (((*l_410) = l_409) == (void*)0))), ((l_413 = ((**l_15) ^ ((((*l_412) = (*l_18)) , g_104) > g_282.f1))) , 9L))), l_414, g_415, l_416, p_12), g_72.f3)) | 250UL) <= g_96))) || g_195)), &l_17);
            if (((g_72.f3 , (((*l_350) = (*l_416)) , (void*)0)) == (void*)0))
            {
                struct S1 l_418 = {1,-0,877};
                l_418 = g_8;
            }
            else
            {
                int *l_422 = &l_413;
                struct S0 *l_424 = &g_72;
                struct S1 l_459 = {1,-4,617};
                char **l_473 = &l_405;
                if (p_12)
                {
                    struct S1 l_420 = {1,-1,711};
                    struct S1 l_427 = {0,3,923};
                    if (((**l_15) = 0x459BA9D1L))
                    {
                        struct S1 *l_419 = &l_25;
                        (*l_416) &= (*g_13);
                        (*g_98) = (*l_16);
                        (*l_419) = g_8;
                        l_420 = l_307;
                    }
                    else
                    {
                        g_282 = ((*g_268) , g_8);
                        (**l_15) &= (*g_99);
                    }
                    (*l_16) = func_59(l_420.f2, &l_400);
                    if (((void*)0 == l_421))
                    {
                        struct S1 *l_423 = &l_25;
                        struct S0 l_426 = {18446744073709551613UL,0x6843L,0x8887L,0xC0644F6611DB17AALL};
                        (*g_98) = l_422;
                        (*l_423) = ((((*g_268) , func_19(((*l_423) = l_349), l_26, (*g_98), ((*l_18) , &g_99), (l_425 = ((((((void*)0 != l_424) >= p_12) , (void*)0) != &g_96) , p_12)))) , l_426) , g_282);
                        (*g_13) = (*g_99);
                        (*l_423) = l_427;
                    }
                    else
                    {
                        (**l_421) = (*g_267);
                    }
                }
                else
                {
                    short l_431 = 0x3107L;
                    for (l_351 = (-13); (l_351 > 2); l_351 = safe_add_func_uint16_t_u_u(l_351, 5))
                    {
                        l_430 = ((**g_267) = (**g_267));
                    }
                    return l_431;
                }
                if ((g_8.f2 , (&l_359 == ((~g_72.f3) , &g_321))))
                {
                    int ***l_435 = (void*)0;
                    int ***l_436 = (void*)0;
                    int ***l_437 = &l_16;
                    for (l_351 = 0; (l_351 != 4); l_351 = safe_add_func_uint32_t_u_u(l_351, 5))
                    {
                        (*g_268) = l_434;
                        (*l_16) = &l_351;
                    }
                    (*l_437) = &g_99;
                    for (g_72.f0 = 0; (g_72.f0 <= 23); g_72.f0++)
                    {
                        (*l_16) = func_59(g_100, (l_26 , &g_13));
                    }
                }
                else
                {
                    char l_444 = 0xD4L;
                    unsigned long long *l_449 = &l_26.f0;
                    unsigned *l_456 = (void*)0;
                    int **l_458 = &l_400;
                    struct S0 l_460 = {0xFF83F7DA681A5B53LL,2UL,0xD19AL,0x472F15908953D332LL};
                    short **l_465 = &l_464;
                    long long *l_466 = &l_26.f3;
                    (*l_15) = func_59(((*l_449) = ((p_12 & ((((((((*l_414) ^= (0L && ((*l_18) |= (l_26 , g_72.f1)))) , (*l_416)) && (((((((p_12 | g_8.f0) || ((safe_sub_func_uint64_t_u_u(((**l_16) ^ 0x7209384BL), l_444)) , g_71)) , g_445) != &g_446) , (void*)0) != (void*)0) , g_448)) ^ g_96) != p_12) && l_444) < (*l_416))) <= p_12)), l_450);
                    g_451 = &g_8;
                    for (g_230 = 24; (g_230 == 35); g_230++)
                    {
                        (*l_15) = (*g_98);
                        (**l_15) &= p_12;
                        (*l_416) &= ((g_415.f3 , func_59(((**l_16) = ((safe_div_func_int16_t_s_s((((*l_18) != ((void*)0 == l_456)) <= ((*l_405) = (g_448 , ((*l_406) = (func_44(((*g_451) = l_457), func_59((*l_18), ((*l_424) , (void*)0))) , p_12))))), 0xA983L)) != g_187)), l_458)) != (void*)0);
                    }
                    (**g_98) = (((((*l_466) &= (func_44(l_459, ((*l_16) = (void*)0)) || (l_460 , ((func_38((l_461 = &l_416), func_50(func_38(&g_99, func_44((*g_451), (*g_98))), g_72.f1, g_8.f1, l_462, p_12)) , l_463) != l_465)))) <= 0xC8147F1CFA99530DLL) , &g_134) == (*l_463));
                }
                for (l_430.f3 = 17; (l_430.f3 >= 12); l_430.f3--)
                {
                    int **l_469 = &g_99;
                    struct S0 l_470 = {1UL,0UL,0xE761L,0x9B6BC484CA713AE3LL};
                    (*g_98) = func_59(p_12, l_469);
                    (*l_16) = (*g_98);
                    (**g_267) = l_470;
                }
                if ((safe_sub_func_int8_t_s_s((l_473 == g_474), ((g_282.f1 , 0L) , (safe_mod_func_uint8_t_u_u(((p_12 <= p_12) == 0x94CDF6CA31212EB6LL), (((safe_sub_func_int16_t_s_s((p_12 , (((((g_484 = (safe_div_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u(p_12, (**l_462))), p_12))) < p_12) || 2L) < (*g_13)) | p_12)), p_12)) , p_12) && p_12)))))))
                {
                    int l_488 = 0x184F5A22L;
                    unsigned *l_489 = &g_448;
                    (*l_15) = l_422;
                    for (l_413 = 19; (l_413 > 22); l_413 = safe_add_func_int16_t_s_s(l_413, 8))
                    {
                        unsigned char l_487 = 249UL;
                        unsigned **l_490 = &l_489;
                        int l_491 = 0xDD83F40EL;
                        l_488 ^= l_487;
                        (*l_400) = ((((*l_490) = l_489) == &g_104) <= (l_491 && ((void*)0 == (**l_421))));
                        (*l_416) |= ((*l_400) = ((*l_18) = ((18446744073709551615UL <= (*l_400)) , (!(p_12 | (safe_div_func_uint16_t_u_u((*l_400), 65529UL)))))));
                    }
                }
                else
                {
                    struct S1 *l_496 = &l_324;
                    struct S1 **l_497 = &g_451;
                    unsigned *l_519 = &g_448;
                    unsigned **l_518 = &l_519;
                    int l_521 = 0x72F7DF20L;
                    long long *l_522 = (void*)0;
                    long long *l_523 = &g_415.f3;
                    for (g_174 = 6; (g_174 < 4); --g_174)
                    {
                        (*g_98) = (*g_98);
                    }
                    (*l_422) = (*g_99);
                    (*l_497) = l_496;
                    g_282.f1 |= ((*l_416) &= ((safe_div_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((p_12 != (g_195 |= ((248UL >= (g_72.f3 , (safe_mod_func_int16_t_s_s(func_50(p_12, ((*l_293) = (((*l_523) = (((safe_rshift_func_uint8_t_u_u(0x91L, 7)) <= (((g_230 < g_72.f0) , (safe_rshift_func_int16_t_s_s(((((safe_div_func_uint16_t_u_u((((((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((((*l_518) = ((***l_421) , (void*)0)) == (void*)0) == p_12), g_520)), g_415.f0)), 0x5FC9L)), 0x0CL)) && (*l_18)) , p_12) | l_521) < 0x6B220C77411E9B50LL), p_12)) , &g_330) != (void*)0) , p_12), 14))) & p_12)) , 0xFE4C470BCABC32EELL)) != p_12)), l_521, &l_17, (*l_400)), p_12)))) < l_521))), p_12)), p_12)) == g_292));
                }
            }
            (**l_462) = (safe_lshift_func_int8_t_s_s((**g_474), 1));
            for (l_434.f2 = 0; (l_434.f2 == 8); l_434.f2 = safe_add_func_uint64_t_u_u(l_434.f2, 1))
            {
                int *l_528 = &g_284;
                long long l_569 = 0x613DB5351A61F243LL;
                char l_570 = 0x9EL;
                (*l_16) = l_528;
                for (g_91 = 1; (g_91 == 0); g_91 = safe_sub_func_uint8_t_u_u(g_91, 6))
                {
                    struct S1 l_531 = {1,-3,356};
                    struct S0 *l_535 = &l_430;
                    int **l_557 = &l_17;
                    (*g_451) = func_19(l_531, ((*l_535) = ((safe_sub_func_uint16_t_u_u(((*l_412) = p_12), l_534)) , l_434)), l_536, ((safe_sub_func_uint16_t_u_u((~(func_44((*g_451), (*g_98)) ^ (g_104 ^= p_12))), p_12)) , &l_536), g_407);
                    for (g_104 = 0; (g_104 <= 26); ++g_104)
                    {
                        struct S1 **l_541 = (void*)0;
                        int ***l_544 = &l_462;
                        int ****l_545 = (void*)0;
                        int ****l_546 = &l_544;
                        int ***l_548 = &l_16;
                        int ****l_547 = &l_548;
                        unsigned *l_560 = &g_344;
                        (*l_462) = (*l_462);
                        (*l_536) = (((*l_412) = (*l_416)) , (l_541 == ((~func_50(g_8.f1, (safe_div_func_uint64_t_u_u((((*l_547) = ((*l_546) = l_544)) == (void*)0), ((((safe_mul_func_uint8_t_u_u((((func_50(((*l_350) = func_50((safe_sub_func_uint8_t_u_u(((((safe_mod_func_int64_t_s_s((func_44(func_19(func_19(l_457, (**g_267), (*g_98), &l_528, g_8.f1), g_415, l_555, &l_528, (*l_400)), (*l_16)) && (**l_462)), p_12)) == p_12) != 1UL) > p_12), l_556)), g_8.f1, p_12, &l_400, g_104)), g_8.f1, p_12, &l_18, p_12) , p_12) != 1L) ^ (*l_536)), p_12)) >= 1UL) >= p_12) , p_12))), p_12, l_557, p_12)) , (void*)0)));
                        (*l_528) &= (l_568 = ((*l_555) = ((func_50(((*l_350) = (safe_div_func_int16_t_s_s(((void*)0 == l_560), (***l_548)))), ((18446744073709551615UL < ((safe_rshift_func_int16_t_s_s((safe_div_func_uint32_t_u_u(1UL, (~(safe_mul_func_uint8_t_u_u((*l_400), (func_44(l_457, (*l_557)) , p_12)))))), 7)) ^ p_12)) , p_12), p_12, &g_99, l_567) , (*g_475)) , p_12)));
                    }
                    if (((l_569 >= l_570) , ((((((safe_add_func_int32_t_s_s(func_44(l_324, func_59((*l_18), &g_13)), func_44((*g_451), (*l_462)))) <= p_12) <= 0L) , (void*)0) == (void*)0) && (**g_98))))
                    {
                        (*l_18) = (*g_99);
                        (*l_18) ^= (-10L);
                        return g_187;
                    }
                    else
                    {
                        (*l_536) = func_50(g_321, (safe_mul_func_uint8_t_u_u(func_44((func_19(l_531, l_434, ((*l_557) = (*g_98)), &l_18, (safe_rshift_func_int16_t_s_u(g_187, 13))) , (*g_451)), (*l_15)), 0x49L)), g_195, &g_99, p_12);
                        (*g_98) = ((*l_535) , (*l_557));
                        (*l_528) = ((**g_98) , ((*l_536) = (*g_99)));
                        (*l_416) = func_44((*g_451), (p_12 , func_59(p_12, &g_13)));
                    }
                }
                for (l_534 = 28; (l_534 < 37); ++l_534)
                {
                    return p_12;
                }
                for (g_195 = (-15); (g_195 > 7); g_195++)
                {
                    unsigned char *l_584 = &g_585;
                    (*g_13) = (*g_99);
                    if (l_581)
                        break;
                    (*l_400) ^= (((*l_584) = (safe_add_func_uint16_t_u_u(((void*)0 == &p_12), 0x6D03L))) && func_44((*g_451), (*g_98)));
                }
            }
        }
        if ((((func_44((*g_451), l_586) != func_44(l_25, &l_351)) != p_12) , p_12))
        {
            char l_587 = 9L;
            (*g_98) = &g_91;
            (*l_400) = (!l_587);
        }
        else
        {
            int *l_588 = &g_14;
            (*g_98) = l_588;
        }
        (*l_16) = func_59(((*l_18) = 8UL), &g_99);
        return (*l_586);
    }
    else
    {
        int l_591 = (-3L);
        (*l_17) |= ((*l_400) = (**g_98));
        (*l_586) = ((safe_mul_func_uint16_t_u_u(1UL, ((l_591 = (**g_474)) != g_592))) , p_12);
    }
    if ((safe_unary_minus_func_uint32_t_u(((safe_mul_func_uint8_t_u_u(((((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(((((**l_15) &= p_12) && 0xA4L) , func_38(&g_13, (**l_16))), (*g_475))), func_44(l_600, func_59((g_72.f3 < ((func_44(l_600, (*l_15)) | p_12) != (*l_400))), &l_17)))) ^ 0x56L) , (*l_586)) , (**l_15)), (**g_474))) , (*l_586)))))
    {
        struct S1 **l_607 = (void*)0;
        struct S1 ***l_606 = &l_607;
        int l_608 = 0x3667661DL;
        unsigned l_613 = 1UL;
        struct S0 l_631 = {18446744073709551615UL,0xBC7DL,0xFD1DL,8L};
        unsigned *l_634 = &g_69;
        int l_648 = (-9L);
        unsigned l_681 = 1UL;
        int ***l_689 = &l_15;
        int ****l_688 = &l_689;
        short l_697 = 0xA33AL;
        char **l_701 = &g_475;
        unsigned short **l_720 = (void*)0;
        unsigned long long *l_753 = &l_434.f0;
        unsigned char l_764 = 255UL;
        short **l_794 = &l_680;
        struct S0 *l_818 = (void*)0;
        struct S0 *l_819 = (void*)0;
        struct S0 *l_820 = &l_434;
        if (((((((safe_add_func_uint32_t_u_u(p_12, ((l_605 != ((*l_606) = l_605)) && func_44((**l_605), (*l_16))))) & func_62((*l_586), ((*g_446) = (**g_445)), l_434, (*g_98), p_12)) > l_608) & p_12) | l_608) , 1L))
        {
            unsigned char l_614 = 0xAEL;
            int *l_617 = (void*)0;
            int *l_622 = &g_91;
            int l_623 = 0x9C80CA23L;
            struct S0 **l_629 = &g_268;
            struct S1 l_652 = {0,-1,61};
            struct S1 **l_686 = &g_451;
            (*l_17) = p_12;
            (*l_17) = (safe_mod_func_uint64_t_u_u((safe_add_func_uint32_t_u_u((func_27(p_12) & (&g_363 == (void*)0)), l_613)), l_614));
            if (((*l_400) ^= (((*g_98) == ((((!p_12) , (((**l_16) & ((safe_lshift_func_uint16_t_u_u(func_44((**l_607), l_617), (safe_sub_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(g_72.f3, 7)), 4294967295UL)))) , (**l_15))) <= p_12)) ^ g_282.f1) , l_622)) | l_623)))
            {
                struct S0 l_626 = {0xE772429962B05023LL,4UL,1L,0xEA1D78881BB9AA9ELL};
                struct S0 **l_627 = (void*)0;
                struct S0 ***l_628 = &g_267;
                struct S1 l_630 = {1,4,761};
                (**l_16) |= (*l_622);
                (*g_99) &= ((safe_mod_func_uint16_t_u_u((((*l_628) = ((l_626 = (*g_268)) , l_627)) != l_629), g_72.f0)) <= (*g_13));
                (*g_98) = func_59(l_626.f0, &g_13);
                (**l_16) = func_44(l_630, ((*g_451) , (*g_98)));
            }
            else
            {
                int *l_637 = &g_91;
                int ***l_638 = (void*)0;
                struct S1 l_643 = {0,0,468};
                l_622 = func_59((safe_add_func_int64_t_s_s((((**l_15) & (func_44((g_71 , (**l_605)), l_637) ^ ((&g_98 != l_638) ^ (0x5F6F3142L >= p_12)))) || p_12), p_12)), &l_17);
                if ((safe_add_func_uint64_t_u_u((*l_622), 18446744073709551612UL)))
                {
                    int *l_646 = &g_14;
                    for (l_614 = (-22); (l_614 >= 4); l_614 = safe_add_func_uint32_t_u_u(l_614, 1))
                    {
                        (*g_98) = (*g_98);
                        (**l_607) = l_643;
                    }
                    for (g_72.f0 = 0; (g_72.f0 != 59); ++g_72.f0)
                    {
                        int *l_647 = &l_608;
                        l_647 = l_646;
                        l_434 = (**l_629);
                    }
                    (*g_267) = (*g_267);
                    (*l_586) &= l_648;
                }
                else
                {
                    int **l_653 = &g_99;
                    for (g_230 = 0; (g_230 != 48); g_230 = safe_add_func_uint32_t_u_u(g_230, 3))
                    {
                        struct S1 l_654 = {1,-1,440};
                        int *l_655 = &g_100;
                        (*g_451) = (***l_606);
                        g_651 ^= (func_27(p_12) , (!p_12));
                        l_655 = func_59(((l_652 , ((*l_637) < func_44(l_654, l_622))) < 0xA249B33C7CF90CB5LL), l_653);
                    }
                    return (*l_17);
                }
                for (l_434.f1 = 0; (l_434.f1 == 2); l_434.f1 = safe_add_func_int64_t_s_s(l_434.f1, 3))
                {
                    long long l_658 = (-1L);
                    int *l_661 = &g_91;
                    char *l_662 = &g_174;
                    (*g_98) = func_59(l_658, &l_617);
                    for (g_230 = 0; (g_230 >= 58); g_230++)
                    {
                    }
                    (*l_586) = (func_19((*g_451), (**g_267), (((4L ^ ((((*l_662) &= (g_91 , ((**g_474) = p_12))) < ((-6L) == (*l_661))) ^ p_12)) < ((*g_13) = (safe_rshift_func_int8_t_s_s((*l_661), p_12)))) , (*g_98)), &l_661, g_484) , (*g_99));
                }
                (*l_15) = func_59(p_12, &g_99);
            }
            for (g_592 = 0; (g_592 < 19); g_592++)
            {
                char l_667 = 0x1AL;
                struct S0 l_668 = {0xF64745A2DA3AC786LL,1UL,0x15C4L,-1L};
                struct S1 *l_687 = (void*)0;
                unsigned char *l_690 = &g_651;
                l_667 = (p_12 <= ((*l_586) = (l_631.f3 && (g_71 = 0xEB07550F8A0F2973LL))));
                if ((*g_13))
                    break;
                l_681 = (l_667 >= (l_668 , ((0x4902D5BFL || (safe_div_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((*l_350) = (p_12 <= (safe_rshift_func_int16_t_s_u((safe_div_func_int32_t_s_s((safe_mul_func_int16_t_s_s(1L, l_631.f1)), l_668.f0)), (+(l_679 != (void*)0)))))), g_415.f1)), p_12))) == 0x8B0EL)));
                (*g_99) = (safe_div_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((((l_652 , (*l_606)) == l_686) & (((**l_16) = func_50(((*l_690) = ((*l_350) |= (((((l_687 != (p_12 , (*l_605))) , (*g_268)) , l_688) == &l_689) != (*l_586)))), (*l_586), (****l_688), &g_99, p_12)) , 255UL)), p_12)), l_668.f1));
            }
        }
        else
        {
            struct S1 l_695 = {0,1,601};
            int *l_696 = &g_284;
            int ****l_712 = (void*)0;
            unsigned long long ***l_757 = &l_409;
            if (((safe_add_func_int16_t_s_s(((**g_267) , (safe_sub_func_int16_t_s_s(func_44(func_19(l_695, l_434, ((*l_16) = l_696), &g_99, g_585), l_696), (*l_586)))), g_230)) , l_697))
            {
                unsigned long long ***l_698 = &l_409;
                char ***l_702 = &g_474;
                int l_703 = 0x94DBCF38L;
                struct S1 *l_706 = &g_282;
                int l_752 = 0x264537E7L;
                int **l_755 = &l_696;
                (*l_696) = p_12;
                (*l_696) |= (((*l_350) = (l_698 != &g_446)) != (g_415.f3 ^ (p_12 > ((safe_div_func_uint8_t_u_u(((((*l_702) = l_701) != &g_475) , 0xF6L), p_12)) <= (func_44((**l_607), (***l_688)) != l_703)))));
                if ((l_703 = func_27((*l_696))))
                {
                    short l_734 = 0xA0F5L;
                    int l_736 = 0xB6983D99L;
                    for (g_71 = 0; (g_71 > 5); g_71 = safe_add_func_int8_t_s_s(g_71, 5))
                    {
                        (*g_99) = p_12;
                        (*l_607) = l_706;
                    }
                    for (l_568 = 17; (l_568 != 20); l_568 = safe_add_func_int16_t_s_s(l_568, 7))
                    {
                        int *l_709 = &l_703;
                        int *****l_713 = (void*)0;
                        int *****l_714 = &l_688;
                        long long *l_715 = &g_72.f3;
                        struct S1 l_717 = {1,-4,1017};
                        unsigned long long *l_735 = &l_631.f0;
                        long long *l_737 = &g_96;
                        (*l_15) = l_709;
                        (**l_15) |= (safe_mul_func_int16_t_s_s(0L, (~(((*l_714) = l_712) == (((((+((l_716 = (((*l_715) = g_8.f0) , func_59((*l_696), &l_586))) == (l_717 , (void*)0))) , l_718) != l_720) > g_69) , (void*)0)))));
                        (*l_17) |= (safe_lshift_func_int8_t_s_s((((*l_737) &= (l_703 && (((l_736 = func_38(&g_99, ((*l_735) &= ((*l_586) = (safe_lshift_func_uint8_t_u_s(((safe_div_func_int64_t_s_s(func_50((g_292 < (((g_344 , 0xD4L) && ((safe_rshift_func_uint8_t_u_u((g_731 ^ (*g_13)), p_12)) | (safe_sub_func_int64_t_s_s(0L, p_12)))) == 0xA781E5DAL)), g_187, p_12, &g_13, l_734), p_12)) > p_12), p_12)))))) | 1UL) , g_282.f0))) ^ g_651), 6));
                        (***l_689) &= (*g_99);
                    }
                }
                else
                {
                    (*g_451) = l_695;
                }
                if ((*g_99))
                {
                    int l_751 = (-1L);
                    struct S0 l_754 = {0x3B02B9E302810105LL,0UL,-7L,0x6491B2B08DC3795ALL};
                    (*l_586) &= func_50(p_12, ((((*l_719) = ((safe_sub_func_int8_t_s_s(((*l_696) && l_754.f1), p_12)) , p_12)) | g_415.f1) , 1UL), p_12, l_755, (**l_16));
                }
                else
                {
                    int *l_756 = &g_520;
                    (*g_98) = l_756;
                    (*g_13) ^= ((*l_586) = (&g_446 != l_757));
                    (*l_16) = (*g_98);
                }
            }
            else
            {
                for (g_72.f0 = (-22); (g_72.f0 != 59); g_72.f0++)
                {
                    int l_763 = 0x6F9EA546L;
                    for (g_134 = (-23); (g_134 < 10); g_134 = safe_add_func_uint32_t_u_u(g_134, 7))
                    {
                        unsigned char l_762 = 0x35L;
                        (*g_99) = l_762;
                        return l_763;
                    }
                }
                return g_592;
            }
            l_764 = p_12;
            (*l_16) = (*g_98);
        }
        if (p_12)
        {
            struct S0 l_765 = {0x86B536EC91C71FBDLL,65526UL,0xD08DL,0x367ACB162CFF1D72LL};
            int *l_766 = (void*)0;
            g_451 = &g_282;
            if (p_12)
            {
                (**l_689) = (void*)0;
            }
            else
            {
                struct S1 l_770 = {1,-1,134};
                int l_779 = 0x85EB63F6L;
                l_434 = ((*g_268) = l_765);
                (*l_17) |= (safe_sub_func_int32_t_s_s(((g_321 != 0x1FC0A3F5L) , l_779), 0x024DF543L));
                if (p_12)
                {
                    return g_72.f1;
                }
                else
                {
                    (**l_689) = (*g_98);
                }
            }
            (*g_99) |= ((*g_268) , 1L);
            if ((safe_sub_func_uint16_t_u_u(p_12, g_282.f0)))
            {
                for (l_434.f3 = 9; (l_434.f3 < (-7)); l_434.f3 = safe_sub_func_int64_t_s_s(l_434.f3, 9))
                {
                    int **l_786 = &g_99;
                    (*l_16) = func_59(((safe_mod_func_int64_t_s_s(p_12, 0x031B56E0FA4F7EADLL)) || (p_12 < (**l_16))), ((*l_689) = l_786));
                }
            }
            else
            {
                int *l_787 = &g_91;
                (**l_689) = l_787;
            }
        }
        else
        {
            int ***l_788 = &l_15;
            int l_789 = 1L;
            int *l_790 = &l_789;
            struct S1 l_793 = {1,1,712};
            unsigned short **l_795 = &l_719;
            (*l_790) &= (l_631.f1 , ((**l_16) = ((l_788 == l_788) ^ p_12)));
            (*l_16) = &l_789;
            (*l_17) = p_12;
            if (((((safe_sub_func_uint32_t_u_u(p_12, (((*l_790) , (g_330 == ((p_12 || (0x1532BDEFBA0CA98BLL == (p_12 && 0xBB24BF1EA12BEA75LL))) , l_795))) && p_12))) >= p_12) ^ 0xA0L) >= p_12))
            {
                struct S0 l_796 = {0UL,0xEEADL,0L,1L};
                short *l_815 = &g_134;
                (**l_16) ^= ((l_796 , (safe_div_func_int64_t_s_s(p_12, ((*l_400) & ((safe_lshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_u((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s(((safe_unary_minus_func_uint16_t_u((safe_lshift_func_int8_t_s_s((((((*g_451) , g_814) != l_815) > p_12) & l_796.f0), 1)))) , 1L), 0x96L)), 6)) ^ p_12), 7)), 7UL)), 7)), 6)) , 0xD6A00F72FD0B6A0DLL))))) == 1L);
            }
            else
            {
                (**g_98) = ((safe_rshift_func_int16_t_s_u((**l_16), (**l_16))) == ((*l_680) = (*l_400)));
            }
        }
        (*l_820) = (l_631 = ((*g_268) = l_434));
    }
    else
    {
        long long l_821 = 0x3D1B1F54B374DAA1LL;
        (*g_99) &= ((*l_400) = l_821);
        (**g_267) = l_822;
        (*g_99) ^= (*g_13);
    }
    (*l_586) = (safe_sub_func_int64_t_s_s(((safe_unary_minus_func_uint8_t_u((((*l_827) = ((*l_826) = l_350)) != l_829))) >= (g_284 , ((*l_586) >= ((*l_829) = p_12)))), (&l_718 != (((((void*)0 == &l_680) != 0x67L) != p_12) , &g_330))));
    return (*l_400);
}







static struct S1 func_19(struct S1 p_20, struct S0 p_21, int * p_22, int ** p_23, unsigned p_24)
{
    struct S1 l_297 = {0,2,663};
    if ((**g_98))
    {
        (**p_23) = (safe_add_func_uint32_t_u_u(p_21.f1, (**g_98)));
    }
    else
    {
        struct S0 l_296 = {0x0B2767C64D31E842LL,1UL,0x6E6CL,0L};
        l_296 = ((*g_268) = l_296);
    }
    return l_297;
}







static int func_27(unsigned p_28)
{
    unsigned char l_33 = 0xFDL;
    int **l_41 = &g_13;
    unsigned long long *l_58 = (void*)0;
    struct S1 *l_281 = &g_282;
    int *l_283 = &g_284;
    int *l_290 = (void*)0;
    int *l_291 = &g_292;
    (*l_291) ^= (((safe_rshift_func_uint8_t_u_u(l_33, 7)) <= (p_28 > (safe_add_func_int8_t_s_s(g_8.f1, (safe_add_func_uint64_t_u_u((func_38(l_41, (safe_lshift_func_uint16_t_u_u(func_44(((*l_281) = func_47(func_50((((((((&g_13 != l_41) || ((**l_41) = ((**l_41) , (!(((void*)0 == (*l_41)) & g_8.f0))))) ^ p_28) != p_28) < p_28) == p_28) || g_8.f2), p_28, g_8.f0, &g_13, g_8.f1), p_28)), l_283), 10))) , (*l_283)), (*l_283))))))) | g_134);
    return p_28;
}







static short func_38(int ** p_39, unsigned long long p_40)
{
    struct S1 *l_286 = &g_282;
    int l_287 = 1L;
    unsigned l_288 = 18446744073709551615UL;
    unsigned char *l_289 = &g_195;
    (*l_286) = g_282;
    (**p_39) = (*g_99);
    return l_288;
}







static unsigned short func_44(struct S1 p_45, int * p_46)
{
    unsigned long long l_285 = 0x6801FAD3C51E4753LL;
    return l_285;
}







static struct S1 func_47(unsigned p_48, unsigned long long p_49)
{
    unsigned long long *l_93 = &g_72.f0;
    int *l_94 = &g_91;
    long long *l_95 = &g_96;
    struct S0 l_97 = {0x3423D51155E3342DLL,9UL,9L,0x80F2F45F95DF25DBLL};
    long long l_108 = 0xE25F8A0FD8B3473ELL;
    struct S1 l_113 = {0,1,300};
    long long l_175 = (-7L);
    unsigned short l_191 = 0x1665L;
    unsigned long long l_213 = 0xD665B7CE1603C5ACLL;
    (*g_98) = (l_94 = func_59(func_50((p_48 < (func_62(func_62(p_49, l_93, g_72, l_94, (((*l_95) ^= func_50((*l_94), g_8.f1, (*l_94), (g_8 , &l_94), (*l_94))) == g_8.f0)), l_95, l_97, l_94, p_49) > 6L)), p_49, g_72.f2, g_98, p_49), &l_94));
    if ((safe_rshift_func_uint16_t_u_u(((*l_94) == (*l_94)), 5)))
    {
        (*g_98) = func_59((*l_94), &g_99);
        (*g_13) = (**g_98);
    }
    else
    {
        unsigned *l_103 = &g_104;
        unsigned *l_105 = (void*)0;
        unsigned long long *l_116 = &g_72.f0;
        int l_117 = (-1L);
        struct S0 l_118 = {18446744073709551613UL,65532UL,0x8BDFL,0L};
        int **l_149 = &l_94;
        unsigned long long l_150 = 18446744073709551609UL;
        short *l_225 = &g_134;
        int l_247 = 0x43803474L;
        if (((((p_48 == ((g_8.f0 = ((*l_103) = g_69)) >= (((safe_add_func_uint8_t_u_u(g_96, (l_108 > (safe_lshift_func_int8_t_s_u((g_69 , ((safe_mod_func_uint16_t_u_u(((((l_113 , p_49) <= (*l_94)) , (safe_mul_func_uint16_t_u_u(((&g_71 != l_116) ^ 0x80B88CC7L), g_72.f1))) , 0x87C5L), g_100)) > l_117)), 0))))) || 0x7DL) <= 0UL))) ^ p_48) , g_72.f2) | p_48))
        {
            int **l_133 = &g_99;
            int l_176 = 1L;
            char *l_186 = (void*)0;
            g_72 = l_118;
            if ((safe_sub_func_int64_t_s_s((func_50(g_69, (p_48 , (p_48 || ((safe_lshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s(p_48, p_48)), (safe_div_func_uint64_t_u_u(1UL, (safe_mul_func_int16_t_s_s(g_72.f0, (safe_rshift_func_int8_t_s_s(l_117, 7)))))))) ^ (safe_mod_func_int16_t_s_s((l_133 != (void*)0), (**l_133)))))), p_48, &l_94, g_134) <= l_118.f2), 9L)))
            {
                short *l_151 = &l_97.f2;
                (*g_99) = ((**l_133) <= ((*l_103) = (((*l_151) &= (safe_div_func_uint8_t_u_u(0xFEL, func_50(((p_48 , (0x9EL | ((safe_rshift_func_uint8_t_u_u(((((+(safe_div_func_int32_t_s_s((safe_div_func_int64_t_s_s((p_48 & p_48), (*l_94))), ((*l_103) &= (safe_add_func_uint64_t_u_u((**l_133), (func_50((safe_lshift_func_int8_t_s_u((safe_mod_func_int8_t_s_s((!(**l_133)), g_72.f2)), 2)), g_14, g_8.f0, l_149, (*l_94)) , g_72.f2))))))) , 18446744073709551615UL) , (*g_13)) > g_72.f2), 1)) >= 0x4F71L))) , p_49), (**l_149), l_150, &l_94, g_8.f2)))) ^ 0x1A6EL)));
            }
            else
            {
                struct S1 l_154 = {1,4,35};
                short l_160 = 0xE67BL;
                unsigned short l_163 = 65535UL;
                unsigned *l_172 = &g_104;
                unsigned char *l_194 = &g_195;
                int **l_204 = &g_99;
                for (l_97.f2 = (-30); (l_97.f2 < (-23)); l_97.f2 = safe_add_func_uint32_t_u_u(l_97.f2, 3))
                {
                    int **l_170 = &l_94;
                    char *l_190 = &g_174;
                    if ((((((l_154 , ((void*)0 == &g_99)) < (safe_mod_func_int32_t_s_s(((((**g_98) && 0x435984A9L) , (*l_94)) < func_50((((safe_unary_minus_func_uint32_t_u((((**l_133) != (**l_149)) <= (safe_lshift_func_int16_t_s_u(g_69, 6))))) , (**l_149)) , 0UL), (*l_94), p_49, &l_94, l_154.f0)), 0x1C5E8018L))) | p_48) & p_48) < 6L))
                    {
                        (*l_149) = func_59(l_160, &g_99);
                        (**l_149) ^= p_49;
                        (**l_149) |= 1L;
                    }
                    else
                    {
                        int **l_164 = (void*)0;
                        int ***l_165 = (void*)0;
                        unsigned **l_171 = &l_105;
                        char *l_173 = &g_174;
                        l_176 ^= ((safe_sub_func_uint64_t_u_u(0x8D5673C171017166LL, g_72.f0)) < (**l_133));
                        (**l_149) &= 0xBF07671DL;
                    }
                    for (l_118.f1 = 15; (l_118.f1 <= 29); l_118.f1 = safe_add_func_uint64_t_u_u(l_118.f1, 8))
                    {
                        short l_179 = 0x98CDL;
                        char *l_188 = &g_174;
                        char **l_189 = &l_188;
                        (*g_99) = (**l_170);
                    }
                    (*l_170) = l_172;
                }
                g_100 |= (g_91 != (((~g_71) , ((*l_194) ^= (!g_72.f0))) >= func_50(g_91, p_48, (g_187 &= (p_48 & 0x1F0D1286CDD36E1FLL)), l_133, (g_91 , 0UL))));
                (*l_204) = func_59(((safe_div_func_uint8_t_u_u(((*l_94) < (safe_sub_func_int16_t_s_s(p_49, (safe_mod_func_int8_t_s_s((((((**l_149) == ((safe_mul_func_uint16_t_u_u((0x0D00L > func_50((**l_133), p_49, g_8.f2, &g_13, func_50((((*l_194) = g_72.f0) ^ p_49), p_48, (**l_133), &l_94, l_160))), (**l_133))) || g_91)) > p_48) < 9L) ^ p_49), g_100))))), (**l_133))) , (*l_94)), l_204);
            }
        }
        else
        {
            int l_205 = 0L;
            struct S0 l_206 = {1UL,0x9C69L,0x8B32L,0xEE8E1141017C7054LL};
            if (((p_48 < ((**l_149) = g_69)) > l_205))
            {
                struct S0 *l_207 = (void*)0;
                struct S0 *l_208 = &l_97;
                (*l_208) = (l_206 = l_118);
            }
            else
            {
                (**l_149) = 0x7FD2DEE4L;
            }
        }
        for (l_97.f0 = (-20); (l_97.f0 != 2); ++l_97.f0)
        {
            int *l_239 = &g_100;
            struct S0 l_240 = {18446744073709551615UL,0x797CL,6L,1L};
            int **l_241 = &g_13;
            if ((safe_div_func_uint64_t_u_u((l_213 == ((void*)0 != &l_150)), (safe_lshift_func_int8_t_s_s(g_72.f3, 7)))))
            {
                long long l_218 = 0x96642D96FB6D299ELL;
                short *l_227 = &l_118.f2;
                short **l_226 = &l_227;
                unsigned char *l_228 = &g_195;
                unsigned *l_229 = &g_230;
                struct S0 l_231 = {18446744073709551615UL,0x8468L,0xDD60L,8L};
                int **l_232 = &g_99;
                unsigned l_242 = 4294967294UL;
                char *l_243 = (void*)0;
                char *l_244 = &g_174;
                (*l_149) = func_59(((g_100 & 5UL) <= g_96), l_232);
                (*l_94) = p_49;
                (*g_99) = ((safe_div_func_int32_t_s_s((func_50(((safe_add_func_uint32_t_u_u(4294967294UL, (safe_lshift_func_uint16_t_u_u((((*l_244) = (((func_50(g_104, g_72.f2, (**l_149), l_241, (**l_149)) , 1UL) == l_242) == 0x45L)) , 5UL), p_48)))) || (**l_232)), p_48, g_72.f2, l_149, p_49) && (**l_232)), p_49)) >= g_100);
            }
            else
            {
                (*l_149) = (*l_149);
                (**g_98) = ((g_96 , (+(**l_149))) ^ (safe_mod_func_uint16_t_u_u(p_49, l_247)));
            }
        }
        for (l_175 = 0; (l_175 < (-23)); l_175--)
        {
            char *l_250 = &g_174;
            struct S0 l_254 = {1UL,0x89B0L,0x2A8AL,0x70504D8E8CD19E69LL};
            unsigned short *l_260 = &l_191;
            int *l_264 = &g_14;
            struct S1 *l_280 = &l_113;
        }
    }
    return l_113;
}







static unsigned func_50(unsigned char p_51, unsigned p_52, unsigned short p_53, int ** p_54, unsigned p_55)
{
    unsigned *l_68 = &g_69;
    unsigned long long *l_70 = &g_71;
    unsigned long long *l_79 = (void*)0;
    unsigned long long *l_81 = &g_72.f0;
    unsigned long long **l_80 = &l_81;
    int l_82 = 3L;
    int *l_90 = &g_91;
    int **l_89 = &l_90;
    (*l_89) = func_59((func_62(((*l_68) = p_51), l_70, g_72, l_68, ((((safe_sub_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(((l_82 &= (safe_rshift_func_uint8_t_u_s((((l_68 == (*p_54)) <= 1L) | (l_79 != ((*l_80) = &g_71))), g_8.f1))) ^ g_8.f0), 65535UL)), 2UL)) , g_71) == p_53) , l_82)) < 0L), l_89);
    return g_71;
}







static int * func_59(unsigned long long p_60, int ** p_61)
{
    struct S0 l_92 = {18446744073709551615UL,1UL,0x8A1EL,-1L};
    l_92 = g_72;
    return &g_91;
}







static unsigned long long func_62(unsigned p_63, unsigned long long * p_64, struct S0 p_65, int * p_66, unsigned p_67)
{
    for (g_14 = 23; (g_14 == (-9)); g_14 = safe_sub_func_int32_t_s_s(g_14, 2))
    {
        int **l_85 = (void*)0;
        int **l_86 = &g_13;
        struct S0 l_87 = {18446744073709551608UL,0x93E9L,0xBA4AL,0L};
        struct S0 *l_88 = &l_87;
        (*l_86) = p_66;
        (*l_88) = l_87;
        (*l_86) = &g_14;
        (*p_66) = 0xDEF23EAFL;
    }
    (*p_66) &= (*g_13);
    return g_8.f2;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8.f0, "g_8.f0", print_hash_value);
    transparent_crc(g_8.f1, "g_8.f1", print_hash_value);
    transparent_crc(g_8.f2, "g_8.f2", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_69, "g_69", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72.f0, "g_72.f0", print_hash_value);
    transparent_crc(g_72.f1, "g_72.f1", print_hash_value);
    transparent_crc(g_72.f2, "g_72.f2", print_hash_value);
    transparent_crc(g_72.f3, "g_72.f3", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_96, "g_96", print_hash_value);
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_104, "g_104", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_174, "g_174", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_230, "g_230", print_hash_value);
    transparent_crc(g_282.f0, "g_282.f0", print_hash_value);
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    transparent_crc(g_282.f2, "g_282.f2", print_hash_value);
    transparent_crc(g_284, "g_284", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_344, "g_344", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_415.f0, "g_415.f0", print_hash_value);
    transparent_crc(g_415.f1, "g_415.f1", print_hash_value);
    transparent_crc(g_415.f2, "g_415.f2", print_hash_value);
    transparent_crc(g_415.f3, "g_415.f3", print_hash_value);
    transparent_crc(g_448, "g_448", print_hash_value);
    transparent_crc(g_484, "g_484", print_hash_value);
    transparent_crc(g_520, "g_520", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_592, "g_592", print_hash_value);
    transparent_crc(g_651, "g_651", print_hash_value);
    transparent_crc(g_731, "g_731", print_hash_value);
    transparent_crc(g_834.f0, "g_834.f0", print_hash_value);
    transparent_crc(g_834.f1, "g_834.f1", print_hash_value);
    transparent_crc(g_834.f2, "g_834.f2", print_hash_value);
    transparent_crc(g_836, "g_836", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_926, "g_926", print_hash_value);
    transparent_crc(g_1043, "g_1043", print_hash_value);
    transparent_crc(g_1138.f0, "g_1138.f0", print_hash_value);
    transparent_crc(g_1138.f1, "g_1138.f1", print_hash_value);
    transparent_crc(g_1138.f2, "g_1138.f2", print_hash_value);
    transparent_crc(g_1170, "g_1170", print_hash_value);
    transparent_crc(g_1203, "g_1203", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
