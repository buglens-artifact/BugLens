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
   volatile unsigned char f0;
   int f1;
   int f2;
   volatile unsigned f3;
};

struct S1 {
   short f0;
   unsigned f1;
   unsigned short f2;
};


static volatile int g_2 = 0L;
static volatile int g_3 = 0L;
static int g_4 = (-1L);
static volatile int g_8 = (-4L);
static int g_9 = 7L;
static int g_53[3] = {0xA47B6C41L,0xA47B6C41L,0xA47B6C41L};
static short g_54 = 0x8A25L;
static int g_57 = (-3L);
static int g_81 = (-1L);
static unsigned g_87 = 4294967292UL;
static short g_94[10] = {0xF04DL,0x79C0L,0xF04DL,0xEBC4L,0xEBC4L,0xF04DL,0x79C0L,0xF04DL,0xEBC4L,0xEBC4L};
static struct S1 g_99[6] = {{0L,1UL,3UL},{0L,1UL,3UL},{0L,1UL,3UL},{0L,1UL,3UL},{0L,1UL,3UL},{0L,1UL,3UL}};
static unsigned g_100 = 0UL;
static struct S1 *g_113 = &g_99[0];
static char g_136 = 0x47L;
static unsigned g_137 = 18446744073709551615UL;
static int g_146 = 0L;
static unsigned char g_147 = 255UL;
static int *g_156 = &g_81;
static int **g_167[10] = {&g_156,&g_156,(void*)0,(void*)0,(void*)0,&g_156,&g_156,(void*)0,(void*)0,(void*)0};
static unsigned g_172 = 0UL;
static struct S0 g_218 = {9UL,0xAC019A06L,0x1BFD6407L,0xE13FBB33L};
static unsigned char * volatile g_233 = (void*)0;
static unsigned char * volatile *g_232 = &g_233;
static unsigned char g_241 = 255UL;
static int *g_250 = (void*)0;
static int * volatile g_254 = &g_53[0];
static int * volatile g_265 = &g_53[2];
static int ** volatile g_267 = &g_250;
static short g_301 = 0x90ADL;
static unsigned char g_322 = 0xBEL;
static unsigned *g_340 = &g_87;
static unsigned **g_339 = &g_340;
static unsigned **g_341 = &g_340;
static unsigned *g_353 = (void*)0;
static char g_357 = 0x95L;



static short func_1(void);
static int * func_10(int * p_11, short p_12, int * p_13, unsigned short p_14);
static int func_15(unsigned char p_16, char p_17, int * p_18, int * p_19, unsigned short p_20);
static int * func_24(int * p_25, int * p_26, unsigned short p_27, int * p_28);
static short func_33(char p_34, char p_35);
static char func_41(unsigned p_42);
static unsigned char func_43(unsigned p_44, char p_45);
static unsigned func_46(int * p_47, unsigned char p_48, int * p_49);
static struct S1 func_63(int * p_64);
static int * func_65(short p_66, int p_67);
static short func_1(void)
{
    int l_7[2];
    int *l_29 = &g_4;
    int l_271 = 0x3C670B72L;
    int l_272 = 0x4B218ACDL;
    int *l_280 = &g_81;
    int *l_329[1][10][6] = {{{(void*)0,&g_9,(void*)0,&g_53[2],(void*)0,(void*)0},{&g_53[2],(void*)0,(void*)0,&g_53[2],&g_9,&g_9},{&g_9,&g_53[2],(void*)0,&g_53[2],&g_9,&g_9},{&g_9,(void*)0,&g_9,&g_9,(void*)0,&g_9},{&g_53[2],&g_9,&g_53[2],(void*)0,&g_53[2],&g_9},{&g_53[2],&g_53[2],&g_9,&g_218.f1,&g_218.f1,&g_9},{&g_53[2],&g_53[2],&g_218.f1,(void*)0,(void*)0,(void*)0},{&g_53[2],&g_53[2],&g_53[2],&g_9,&g_218.f1,&g_218.f1},{&g_9,&g_53[2],&g_53[2],&g_9,&g_53[2],(void*)0},{(void*)0,&g_9,&g_218.f1,&g_9,(void*)0,&g_9}}};
    unsigned *l_338[7][5][4];
    unsigned **l_337[1][5][10] = {{{&l_338[6][0][1],&l_338[6][4][2],&l_338[6][2][0],&l_338[6][2][0],&l_338[6][4][2],&l_338[6][0][1],&l_338[6][4][2],&l_338[6][0][1],&l_338[6][4][2],&l_338[6][2][0]},{&l_338[6][4][2],&l_338[4][4][1],&l_338[6][4][2],&l_338[6][2][0],&l_338[6][4][2],&l_338[6][4][2],&l_338[6][2][0],&l_338[6][4][2],&l_338[4][4][1],&l_338[6][4][2]},{&l_338[6][4][2],&l_338[6][0][1],&l_338[4][4][1],&l_338[6][4][2],&l_338[4][4][1],&l_338[6][0][1],&l_338[6][4][2],&l_338[6][4][2],&l_338[6][0][1],&l_338[4][4][1]},{&l_338[6][0][1],&l_338[6][4][2],&l_338[6][4][2],&l_338[6][0][1],&l_338[4][4][1],&l_338[6][4][2],&l_338[4][4][1],&l_338[6][0][1],&l_338[6][4][2],&l_338[6][4][2]},{&l_338[4][4][1],&l_338[6][4][2],&l_338[6][2][0],&l_338[6][4][2],&l_338[6][4][2],&l_338[6][2][0],&l_338[6][4][2],&l_338[4][4][1],&l_338[6][4][2],&l_338[6][2][0]}}};
    struct S0 *l_342 = &g_218;
    unsigned l_346 = 0x9C11E12DL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_7[i] = 0x843046B6L;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 4; k++)
                l_338[i][j][k] = &g_87;
        }
    }
    for (g_4 = 17; (g_4 <= 28); g_4 = safe_add_func_int8_t_s_s(g_4, 9))
    {
        unsigned short l_23 = 0UL;
        int *l_256 = &g_4;
        unsigned short l_302 = 0UL;
        int l_323 = 0x6022ABFBL;
        int **l_327 = &l_280;
        int **l_328[5] = {&l_256,&l_256,&l_256,&l_256,&l_256};
        unsigned *l_336[1][1][2];
        unsigned **l_335 = &l_336[0][0][0];
        unsigned ***l_334[6];
        struct S0 *l_343[9] = {&g_218,&g_218,&g_218,&g_218,&g_218,&g_218,&g_218,&g_218,&g_218};
        unsigned l_344 = 0UL;
        short *l_345[1][6][5] = {{{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_99[0].f0,&g_99[0].f0,&g_99[0].f0,&g_99[0].f0,&g_99[0].f0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_99[0].f0,&g_99[0].f0,&g_99[0].f0,&g_99[0].f0,&g_99[0].f0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_99[0].f0,&g_99[0].f0,&g_99[0].f0,&g_99[0].f0,&g_99[0].f0}}};
        char *l_356[9] = {&g_357,(void*)0,&g_357,(void*)0,&g_357,(void*)0,&g_357,(void*)0,&g_357};
        unsigned short l_358 = 0UL;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_336[i][j][k] = &g_99[0].f1;
            }
        }
        for (i = 0; i < 6; i++)
            l_334[i] = &l_335;
        for (g_9 = 1; (g_9 >= 0); g_9 -= 1)
        {
            int *l_30 = (void*)0;
            int *l_255 = &g_81;
            int *l_270 = &g_81;
            unsigned char **l_286 = (void*)0;
            struct S1 l_287 = {0x5780L,0x13362549L,65528UL};
            unsigned *l_295 = &g_99[0].f1;
            int i;
            (*g_267) = func_10(&g_9, ((l_7[g_9] || (l_7[g_9] , ((*l_255) = func_15(((safe_mod_func_int8_t_s_s(g_3, l_7[g_9])) , 0x5CL), l_23, func_24(&g_9, l_29, l_7[g_9], l_30), g_250, g_146)))) | 0xD3L), l_256, g_4);

            ;
            (*g_113) = (*g_113);
            for (g_87 = 0; (g_87 <= 1); g_87 += 1)
            {
                int **l_268 = (void*)0;
                int **l_269[7] = {&l_29,&l_29,&l_29,&l_29,&l_29,&l_29,&l_29};
                unsigned char l_273 = 0xFDL;
                unsigned short l_278 = 0x80ECL;
                unsigned *l_293 = &l_287.f1;
                int *l_298[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_298[i] = &g_57;
                for (g_241 = 0; (g_241 <= 1); g_241 += 1)
                {
                    l_255 = ((*g_267) = l_29);

                    ;
                }
                l_270 = (*g_267);

                ;
                for (g_218.f1 = 1; (g_218.f1 >= 0); g_218.f1 -= 1)
                {
                    unsigned short *l_279 = &l_23;
                    struct S1 l_281 = {0xCDE8L,3UL,0UL};
                    int *l_282 = &g_53[0];
                    int l_300 = 0xFE9FF898L;
                    unsigned l_317[1];
                    int l_318 = 0xB4F67FC8L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_317[i] = 1UL;
                    l_272 = (l_271 |= (l_7[g_9] & (*l_256)));
                }
                for (l_272 = 0; (l_272 <= 1); l_272 += 1)
                {
                    unsigned short l_324 = 7UL;
                    l_324 = (*g_156);
                }
            }

            ;
            ;
        }

        ;
        ;
        l_346 &= (safe_mul_func_int16_t_s_s(0xB71BL, (func_63((l_29 = (l_329[0][8][0] = ((*l_327) = &l_271)))) , (0UL <= (g_301 = (safe_lshift_func_uint16_t_u_s(((!(safe_rshift_func_uint16_t_u_u((((g_339 = (l_337[0][4][1] = (void*)0)) == (g_341 = &g_340)) , (*l_280)), 11))) < ((l_342 == l_343[5]) >= (*g_340))), l_344)))))));

        ;
        ;


        ;
        (*l_327) = ((safe_sub_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((safe_add_func_uint16_t_u_u(((((((*l_335) != (g_353 = ((*g_341) = (*g_341)))) , (*g_340)) < ((((*l_280) ^ (*l_256)) >= (safe_mul_func_int16_t_s_s((g_172 || (g_357 = (g_136 = g_100))), g_2))) , (*l_280))) >= g_53[2]) | 0xD3L), (*l_256))) , g_53[0]), g_322)) , l_358) >= (*l_256)), g_99[0].f2)) , &l_272);

        ;
        ;
        return g_81;
    }
    return (*l_29);
}







static int * func_10(int * p_11, short p_12, int * p_13, unsigned short p_14)
{
    int *l_257 = &g_81;
    int **l_258 = &l_257;
    unsigned char *l_259[4] = {&g_147,&g_147,&g_147,&g_147};
    short *l_260[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    struct S0 *l_264 = &g_218;
    struct S0 **l_263 = &l_264;
    struct S1 l_266 = {-1L,1UL,0xB4F2L};
    int i;
    (*l_258) = l_257;
    (**l_258) = ((*g_113) , func_41((*l_257)));
    (*g_265) = ((**l_258) = (((void*)0 != l_259[0]) && (((func_41((*l_257)) , ((p_12 = 0x1A40L) && (safe_add_func_int8_t_s_s((l_259[0] == &g_136), p_14)))) == (((*p_13) , l_263) == (void*)0)) > g_9)));
    (*g_113) = l_266;
    return p_13;


}







static int func_15(unsigned char p_16, char p_17, int * p_18, int * p_19, unsigned short p_20)
{
    unsigned l_251 = 0UL;
    ++l_251;
    (*g_254) = (*p_18);
    return (*g_156);
}







static int * func_24(int * p_25, int * p_26, unsigned short p_27, int * p_28)
{
    unsigned short l_38 = 0x3624L;
    int *l_39 = (void*)0;
    unsigned l_40 = 0xCDF2AB2BL;
    unsigned *l_171 = &g_172;
    int l_208 = (-1L);
    int l_249 = 1L;
    l_249 |= ((g_4 , (safe_add_func_int8_t_s_s(((func_33(((safe_add_func_uint8_t_u_u(p_27, (((((l_40 = (((p_27 , 9L) >= l_38) != (p_26 == l_39))) , (-1L)) & (func_41((func_43(((*l_171) &= func_46(l_39, l_38, l_39)), g_146) | l_208)) & 0x2FL)) | g_146) || 0xAC0D8A3BL))) , g_53[1]), p_27) > 0xEAB3L) , l_40), g_218.f1))) ^ g_9);
    return p_26;


}







static short func_33(char p_34, char p_35)
{
    int *l_220 = &g_53[0];
    int *l_221 = &g_53[0];
    int *l_222 = &g_57;
    int *l_223 = (void*)0;
    int *l_224 = (void*)0;
    int *l_225 = &g_57;
    int *l_226[4][9][7] = {{{&g_81,&g_53[2],&g_57,&g_81,&g_81,&g_57,&g_53[2]},{&g_4,&g_53[2],&g_9,(void*)0,&g_218.f1,(void*)0,&g_53[2]},{&g_81,&g_9,(void*)0,(void*)0,&g_218.f1,&g_57,&g_9},{&g_53[1],(void*)0,(void*)0,&g_9,&g_81,(void*)0,&g_4},{&g_81,&g_4,&g_81,&g_81,&g_81,(void*)0,&g_4},{&g_9,&g_9,&g_4,&g_81,&g_81,&g_4,&g_9},{(void*)0,&g_9,&g_81,&g_9,(void*)0,&g_53[1],&g_9},{&g_9,&g_4,&g_53[1],&g_81,(void*)0,&g_4,&g_4},{&g_81,&g_4,&g_53[1],&g_9,&g_81,(void*)0,&g_4}},{{&g_81,&g_4,&g_81,&g_81,&g_81,(void*)0,&g_4},{&g_9,&g_9,&g_4,&g_81,&g_81,&g_4,&g_9},{(void*)0,&g_9,&g_81,&g_9,(void*)0,&g_53[1],&g_9},{&g_9,&g_4,&g_53[1],&g_81,(void*)0,&g_4,&g_4},{&g_81,&g_4,&g_53[1],&g_9,&g_81,(void*)0,&g_4},{&g_81,&g_4,&g_81,&g_81,&g_81,(void*)0,&g_4},{&g_9,&g_9,&g_4,&g_81,&g_81,&g_4,&g_9},{(void*)0,&g_9,&g_81,&g_9,(void*)0,&g_53[1],&g_9},{(void*)0,&g_218.f1,(void*)0,&g_57,&g_53[1],(void*)0,&g_218.f1}},{{&g_81,&g_218.f1,(void*)0,(void*)0,&g_81,&g_81,&g_218.f1},{&g_81,&g_218.f1,&g_218.f1,&g_81,&g_4,&g_81,&g_218.f1},{(void*)0,&g_9,(void*)0,&g_81,&g_81,(void*)0,&g_9},{&g_9,&g_9,&g_218.f1,(void*)0,&g_53[1],(void*)0,&g_9},{(void*)0,&g_218.f1,(void*)0,&g_57,&g_53[1],(void*)0,&g_218.f1},{&g_81,&g_218.f1,(void*)0,(void*)0,&g_81,&g_81,&g_218.f1},{&g_81,&g_218.f1,&g_218.f1,&g_81,&g_4,&g_81,&g_218.f1},{(void*)0,&g_9,(void*)0,&g_81,&g_81,(void*)0,&g_9},{&g_9,&g_9,&g_218.f1,(void*)0,&g_53[1],(void*)0,&g_9}},{{(void*)0,&g_218.f1,(void*)0,&g_57,&g_53[1],(void*)0,&g_218.f1},{&g_81,&g_218.f1,(void*)0,(void*)0,&g_81,&g_81,&g_218.f1},{&g_81,&g_218.f1,&g_218.f1,&g_81,&g_4,&g_81,&g_218.f1},{(void*)0,&g_9,(void*)0,&g_81,&g_9,&g_9,&g_218.f1},{&g_9,&g_218.f1,(void*)0,&g_9,&g_81,&g_81,&g_218.f1},{&g_53[2],&g_81,&g_81,(void*)0,&g_81,&g_9,&g_81},{(void*)0,&g_218.f1,&g_81,&g_9,&g_9,&g_81,&g_218.f1},{(void*)0,&g_81,(void*)0,&g_9,(void*)0,&g_81,&g_81},{&g_53[2],&g_218.f1,&g_9,&g_9,&g_9,&g_9,&g_218.f1}}};
    unsigned l_227 = 4294967295UL;
    int l_239 = (-3L);
    int **l_244 = (void*)0;
    int **l_245 = (void*)0;
    int **l_246 = (void*)0;
    int **l_247[4][9] = {{(void*)0,(void*)0,&l_220,&l_223,(void*)0,(void*)0,&l_223,&l_220,(void*)0},{(void*)0,&l_224,&l_222,(void*)0,&l_222,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&l_220,&l_220,&l_220,(void*)0,&l_224,&l_226[2][1][4],&l_222,&l_223},{&l_226[2][1][4],&l_224,(void*)0,&l_220,&l_220,&l_220,(void*)0,&l_224,&l_226[2][1][4]}};
    int *l_248 = (void*)0;
    int i, j, k;
    --l_227;
    for (p_34 = 0; (p_34 > 11); p_34 = safe_add_func_int32_t_s_s(p_34, 3))
    {
        unsigned char * volatile **l_234 = &g_232;
        int l_235 = 0x79A04312L;
        int l_236 = (-1L);
        int l_237 = 0xF646CCEAL;
        int l_238[2][4] = {{0x0539DDE8L,0x0539DDE8L,0x0539DDE8L,0x0539DDE8L},{0x0539DDE8L,0x0539DDE8L,0x0539DDE8L,0x0539DDE8L}};
        char l_240 = 1L;
        int i, j;
        (*l_234) = ((0L != 0x9741L) , g_232);
        if (l_235)
            continue;
        (*l_222) &= p_34;
        ++g_241;
    }
    l_248 = func_65(((*l_222) , ((*l_225) != (*l_225))), (!p_34));

    ;
    return p_34;
}







static char func_41(unsigned p_42)
{
    int *l_209 = &g_57;
    struct S1 *l_210 = &g_99[1];
    unsigned char *l_211 = &g_147;
    short *l_214 = &g_94[6];
    unsigned short l_215 = 0x6287L;
    int l_216 = 0x4149EF3DL;
    struct S0 *l_217 = &g_218;
    struct S0 **l_219 = &l_217;
    l_209 = (void*)0;

    ;
    l_216 = func_46(((l_210 == l_210) , l_209), ((*l_211)++), func_65(((*l_214) = p_42), l_215));
    (*l_219) = ((((void*)0 != &l_215) || (&l_216 == &l_216)) , l_217);
    return g_172;
}







static unsigned char func_43(unsigned p_44, char p_45)
{
    unsigned *l_173 = &g_172;
    int l_175 = 0L;
    int l_176 = 7L;
    short *l_182[3];
    int l_185 = 0xF8A5A028L;
    char *l_186 = &g_136;
    int *l_187 = &g_53[2];
    int *l_188 = (void*)0;
    int *l_189 = &l_176;
    int *l_190 = &g_57;
    int *l_191 = &g_81;
    int *l_192 = &g_57;
    int *l_193 = &l_175;
    int *l_194 = &l_175;
    int *l_195 = &g_53[2];
    int l_196 = 8L;
    int *l_197 = &g_57;
    int l_198 = 0xA3D05821L;
    int *l_199 = &l_198;
    int l_200[3][10][8] = {{{0x6EAA2CC3L,0xAB912675L,0L,0xAB912675L,0x6EAA2CC3L,(-1L),2L,0x29542E10L},{0L,0L,0xAB912675L,0xA170B35BL,6L,6L,(-1L),0L},{0L,0L,0L,0xD1D17AEBL,0x29542E10L,0L,0x6EAA2CC3L,2L},{(-1L),0x6EAA2CC3L,0xAB912675L,0L,0xAB912675L,0x6EAA2CC3L,(-1L),2L},{0x6EAA2CC3L,0L,0x29542E10L,0xD1D17AEBL,0L,0L,0L,0L},{(-1L),(-1L),(-1L),(-1L),0L,6L,2L,0L},{0x6EAA2CC3L,0xA170B35BL,0L,0L,0xAB912675L,0L,0L,0xA170B35BL},{(-1L),0xA170B35BL,0L,0L,0x29542E10L,6L,0xD1D17AEBL,0xD1D17AEBL},{0L,(-1L),0L,0L,(-1L),0L,0xD1D17AEBL,0xAB912675L},{2L,0L,0L,6L,0L,0x6EAA2CC3L,0L,6L}},{{0L,0x6EAA2CC3L,0L,6L,0L,0L,2L,0xAB912675L},{0xD1D17AEBL,0L,(-1L),0L,0L,(-1L),0L,0xD1D17AEBL},{0xD1D17AEBL,6L,0x29542E10L,0L,0L,0xA170B35BL,(-1L),0xA170B35BL},{0L,0L,0xAB912675L,0L,0L,(-1L),0L,0xAB912675L},{0x6EAA2CC3L,(-1L),2L,0x29542E10L,0xA170B35BL,0xA170B35BL,0x29542E10L,2L},{0xAB912675L,0xAB912675L,2L,0L,0L,6L,0L,0x6EAA2CC3L},{0xA170B35BL,0L,0L,0xAB912675L,0L,0L,0xA170B35BL,0x6EAA2CC3L},{0L,6L,0L,0L,2L,0xAB912675L,0xAB912675L,2L},{0x29542E10L,0xA170B35BL,0xA170B35BL,0x29542E10L,2L,(-1L),0x6EAA2CC3L,0xAB912675L},{0L,(-1L),0xD1D17AEBL,2L,0L,2L,0xD1D17AEBL,(-1L)}},{{0xA170B35BL,(-1L),0xAB912675L,0xD1D17AEBL,0L,(-1L),0L,0L},{0xAB912675L,0xA170B35BL,6L,6L,0xA170B35BL,0xAB912675L,0L,0L},{0x6EAA2CC3L,6L,0xAB912675L,(-1L),0xD1D17AEBL,0L,0xD1D17AEBL,(-1L)},{0xD1D17AEBL,0L,0xD1D17AEBL,(-1L),0xAB912675L,6L,0x6EAA2CC3L,0L},{0L,0xAB912675L,0xA170B35BL,6L,6L,0xA170B35BL,0xAB912675L,0L},{0L,(-1L),0L,0xD1D17AEBL,0xAB912675L,0x29542E10L,(-1L),0x29542E10L},{0L,0x6EAA2CC3L,2L,0x6EAA2CC3L,0L,0x29542E10L,0xD1D17AEBL,0L},{0L,0xA170B35BL,0x6EAA2CC3L,0L,(-1L),(-1L),0L,0x6EAA2CC3L},{0L,0L,0x6EAA2CC3L,6L,0xAB912675L,(-1L),0xD1D17AEBL,0L},{(-1L),0xD1D17AEBL,2L,0L,2L,0xD1D17AEBL,(-1L),0L}}};
    int *l_201 = &l_175;
    int *l_202 = &g_57;
    int *l_203 = &l_200[0][1][2];
    int *l_204[3][3] = {{&l_176,&g_81,&g_81},{&l_176,&g_81,&g_81},{&l_176,&g_81,&g_81}};
    unsigned l_205 = 1UL;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_182[i] = (void*)0;
    for (g_147 = 1; (g_147 <= 5); g_147 += 1)
    {
        int *l_174[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        unsigned l_177 = 1UL;
        int i;
        l_175 |= ((void*)0 != l_173);
        l_177++;
        if ((*g_156))
            break;
    }
    l_176 = ((safe_mul_func_int8_t_s_s(((void*)0 != l_182[2]), ((+((func_63(&l_176) , (func_46(&l_175, ((p_45 | ((safe_rshift_func_int8_t_s_s((&p_45 != &g_136), ((*l_186) = l_185))) ^ p_45)) < 1L), &l_175) , p_44)) < 65534UL)) , g_137))) != g_4);
    l_205++;
    return p_45;
}







static unsigned func_46(int * p_47, unsigned char p_48, int * p_49)
{
    char l_101[10] = {0x13L,0x13L,0x13L,0x13L,0x13L,0x13L,0x13L,0x13L,0x13L,0x13L};
    unsigned char l_134 = 0xA6L;
    int l_141 = 0x766FE7F9L;
    struct S1 *l_162[5][5];
    int *l_168 = &g_53[2];
    int **l_169 = (void*)0;
    int **l_170 = &l_168;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            l_162[i][j] = &g_99[4];
    }
    for (p_48 = 0; (p_48 > 11); p_48 = safe_add_func_int32_t_s_s(p_48, 6))
    {
        int l_52[1];
        char l_79[2][7] = {{0L,0x6BL,0x6BL,0L,0x6BL,0x6BL,0L},{0L,0x7AL,0L,0L,0x7AL,0L,0L}};
        int l_135 = 0x139B6CB0L;
        int i, j;
        for (i = 0; i < 1; i++)
            l_52[i] = 0L;
        for (g_53[2] = 0; (g_53[2] <= 0); g_53[2] += 1)
        {
            struct S1 l_159 = {7L,0x277E2D95L,65535UL};
            int i;
            g_54 ^= l_52[g_53[2]];
            for (g_54 = 21; (g_54 != 12); g_54--)
            {
                int *l_62[2][7][3] = {{{&g_57,&g_53[2],(void*)0},{&g_9,&g_53[2],&g_9},{&l_52[0],&g_57,(void*)0},{&l_52[0],&l_52[0],&g_57},{&g_9,&g_57,&g_57},{&g_57,&g_53[2],(void*)0},{&g_9,(void*)0,&g_57}},{{&g_53[2],&l_52[0],&g_9},{&g_53[2],&g_53[2],&l_52[0]},{&g_57,&l_52[0],&l_52[0]},{&l_52[0],(void*)0,&g_9},{&g_57,(void*)0,&g_57},{&g_53[2],&l_52[0],&g_9},{&g_53[2],&g_53[2],&l_52[0]}}};
                struct S1 l_68 = {7L,0xAEAB6696L,0xE96CL};
                short *l_110 = &l_68.f0;
                unsigned short l_152 = 0xF34AL;
                int i, j, k;
                for (g_57 = 0; (g_57 <= 28); g_57 = safe_add_func_uint32_t_u_u(g_57, 8))
                {
                    unsigned short *l_71 = (void*)0;
                    unsigned short *l_72 = &l_68.f2;
                    struct S1 *l_97 = &l_68;
                    struct S1 *l_98 = &g_99[0];
                    g_100 ^= (safe_sub_func_int16_t_s_s(((l_62[0][4][1] != l_62[0][4][1]) > (p_48 , (((((*l_98) = ((*l_97) = func_63(func_65(((l_68 , g_53[2]) , (safe_add_func_uint32_t_u_u(((--(*l_72)) , 4294967290UL), (((safe_sub_func_uint16_t_u_u((g_57 == g_9), ((safe_mul_func_int8_t_s_s(l_79[0][0], g_9)) & g_9))) < l_52[g_53[2]]) >= 0x7BL)))), g_54)))) , p_48) & p_48) && g_54))), g_54));
                }
                if (l_101[0])
                {
                    char *l_102 = (void*)0;
                    char *l_103 = &l_79[1][0];
                    struct S1 *l_109 = &g_99[0];
                    int l_120 = 9L;
                    unsigned *l_133 = &g_99[0].f1;
                    if (((g_100 != ((*l_103) ^= g_54)) || (safe_add_func_uint32_t_u_u(g_57, g_54))))
                    {
                        int **l_106 = &l_62[0][4][1];
                        int *l_111 = &g_57;
                        (*l_106) = p_47;


                        (*l_106) = func_65(((g_54 >= g_53[2]) , (safe_lshift_func_uint16_t_u_s(65535UL, ((void*)0 == l_109)))), (g_81 = ((*l_111) |= (((l_110 != (void*)0) >= g_94[1]) ^ ((l_52[g_53[2]] = (((*l_106) = &g_57) != (void*)0)) , 0x7E4CDB19L)))));


                        (*l_106) = (void*)0;
                        return g_87;
                    }
                    else
                    {
                        struct S1 *l_112 = &g_99[2];
                        g_113 = l_112;
                    }
                    g_81 = (((&l_68 != (void*)0) || (((p_48 , (g_53[0] <= 0x8EEC8966L)) , (*l_109)) , g_87)) < ((g_57 ^= (safe_lshift_func_uint8_t_u_s((safe_add_func_uint32_t_u_u(((!((safe_sub_func_int8_t_s_s((!(l_52[0] &= p_48)), p_48)) , 0x8A02C35BL)) , p_48), l_120)), 2))) <= 0x6B6A2D83L));
                    l_135 &= (g_54 , (safe_mod_func_int8_t_s_s(((safe_sub_func_int16_t_s_s(p_48, (safe_add_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((safe_rshift_func_int8_t_s_u(((((~l_101[0]) , (g_94[7] , p_48)) >= ((*l_133) = (safe_rshift_func_int8_t_s_s((g_100 >= ((g_99[0].f2 <= g_99[0].f0) ^ 1L)), 1)))) || 0L), 6)) , g_53[2]), l_79[1][6])), l_52[0])))) < l_134), l_101[0])));
                    --g_137;
                }
                else
                {
                    char l_140 = 0x37L;
                    int l_142 = 1L;
                    int l_143 = (-1L);
                    int l_144 = 4L;
                    int l_145[1][3];
                    int **l_157 = (void*)0;
                    int **l_158 = &l_62[1][1][2];
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_145[i][j] = (-1L);
                    }
                    g_147--;
                    if (g_57)
                        continue;
                    for (g_147 = 19; (g_147 >= 58); g_147 = safe_add_func_uint16_t_u_u(g_147, 3))
                    {
                        int **l_155[2][1];
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_155[i][j] = (void*)0;
                        }
                        --l_152;
                        g_156 = func_65(g_100, l_52[g_53[2]]);

                        ;
                    }
                    (*l_158) = &l_52[0];
                }
            }
            (*g_113) = l_159;
        }
        g_53[1] = (*g_156);
    }
    for (g_87 = 0; (g_87 <= 9); g_87 += 1)
    {
        unsigned char *l_163 = &g_147;
        short *l_164 = &g_54;
        int l_165 = 0x1BEE393EL;
        int *l_166 = &g_53[2];
        int i;
        if (g_94[g_87])
            break;
        (*l_166) = ((safe_lshift_func_int16_t_s_s(((g_94[g_87] |= (l_162[4][1] != ((g_53[2] | ((*l_163) = p_48)) , l_162[0][1]))) & 6L), ((*l_164) = p_48))) && ((l_165 = g_94[g_87]) & g_99[0].f2));
    }
    g_167[6] = (g_99[0].f1 , &g_156);
    (*l_170) = l_168;
    return p_48;
}







static struct S1 func_63(int * p_64)
{
    unsigned char l_92 = 0xD7L;
    short *l_93[2][1];
    int *l_95 = &g_81;
    struct S1 l_96 = {-1L,4294967289UL,65527UL};
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_93[i][j] = &g_94[7];
    }
    (*l_95) = (+(safe_rshift_func_int16_t_s_s(l_92, (g_94[4] ^= l_92))));
    return l_96;
}







static int * func_65(short p_66, int p_67)
{
    int *l_80 = &g_81;
    int *l_83 = &g_4;
    int **l_82 = &l_83;
    int *l_84 = &g_81;
    int *l_85 = &g_81;
    int *l_86[10][3][8] = {{{&g_4,&g_53[2],&g_57,&g_53[2],&g_4,(void*)0,&g_53[1],&g_53[2]},{&g_53[2],&g_57,(void*)0,&g_57,&g_4,&g_53[1],&g_53[1],&g_4},{(void*)0,&g_57,&g_57,(void*)0,(void*)0,&g_4,&g_53[2],&g_81}},{{(void*)0,&g_4,&g_53[2],&g_81,&g_4,&g_4,&g_4,&g_57},{&g_4,&g_4,&g_81,(void*)0,&g_81,&g_4,&g_4,&g_53[2]},{&g_53[2],&g_57,&g_53[2],&g_4,(void*)0,&g_53[1],&g_53[2],&g_4}},{{&g_4,&g_57,(void*)0,&g_4,(void*)0,(void*)0,&g_4,(void*)0},{&g_53[2],&g_53[2],&g_4,&g_4,&g_81,&g_4,(void*)0,&g_53[2]},{&g_4,(void*)0,&g_53[2],&g_81,&g_4,&g_53[2],&g_57,&g_53[2]}},{{&g_4,&g_4,&g_57,&g_4,&g_4,&g_4,&g_81,&g_53[2]},{&g_57,&g_57,&g_53[2],&g_53[2],(void*)0,(void*)0,&g_4,&g_4},{&g_4,&g_81,&g_53[2],&g_53[2],&g_53[2],&g_53[2],&g_81,&g_4}},{{(void*)0,&g_9,&g_57,&g_53[2],&g_81,&g_57,&g_4,&g_53[2]},{(void*)0,&g_53[2],&g_81,&g_4,&g_53[2],&g_57,&g_53[2],&g_4},{&g_81,&g_9,&g_81,&g_57,&g_57,&g_53[2],&g_53[2],(void*)0}},{{&g_4,&g_81,&g_53[2],&g_4,(void*)0,(void*)0,&g_57,&g_57},{&g_4,&g_57,&g_4,&g_4,&g_57,&g_4,&g_9,&g_4},{&g_81,&g_4,(void*)0,&g_9,&g_53[2],&g_53[1],(void*)0,&g_53[2]}},{{(void*)0,&g_4,&g_53[1],&g_9,&g_81,&g_9,&g_53[1],&g_4},{(void*)0,&g_81,&g_4,&g_4,&g_53[2],&g_57,(void*)0,&g_57},{&g_4,&g_53[2],&g_4,&g_4,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_4,&g_53[2],&g_53[2],&g_4,&g_4,&g_81,&g_4,(void*)0},{&g_4,&g_81,&g_4,(void*)0,&g_53[2],&g_4,&g_4,&g_81},{&g_57,&g_81,(void*)0,&g_53[2],(void*)0,&g_81,&g_57,(void*)0}},{{&g_53[1],&g_53[2],(void*)0,&g_81,&g_4,&g_9,&g_4,&g_57},{&g_57,&g_81,&g_53[2],&g_53[2],&g_4,&g_4,&g_53[2],&g_53[2]},{&g_53[1],&g_53[1],&g_4,&g_57,(void*)0,&g_57,&g_53[2],&g_4}},{{&g_57,&g_4,&g_53[1],(void*)0,&g_53[2],&g_4,&g_53[2],&g_4},{&g_4,&g_57,&g_4,&g_57,&g_4,(void*)0,&g_4,&g_53[2]},{&g_4,&g_4,&g_81,&g_53[2],&g_4,(void*)0,(void*)0,&g_57}}};
    int i, j, k;
    (*l_82) = (l_80 = &g_53[0]);

    ;
    ;
    --g_87;
    (*l_82) = &p_67;

    ;
    return &g_4;


}





int main (void)
{
    int i;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_53[i], "g_53[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_54, "g_54", print_hash_value);
    transparent_crc(g_57, "g_57", print_hash_value);
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_94[i], "g_94[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_99[i].f0, "g_99[i].f0", print_hash_value);
        transparent_crc(g_99[i].f1, "g_99[i].f1", print_hash_value);
        transparent_crc(g_99[i].f2, "g_99[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_100, "g_100", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_137, "g_137", print_hash_value);
    transparent_crc(g_146, "g_146", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_172, "g_172", print_hash_value);
    transparent_crc(g_218.f0, "g_218.f0", print_hash_value);
    transparent_crc(g_218.f1, "g_218.f1", print_hash_value);
    transparent_crc(g_218.f2, "g_218.f2", print_hash_value);
    transparent_crc(g_218.f3, "g_218.f3", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_322, "g_322", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
