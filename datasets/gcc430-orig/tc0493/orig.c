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
   unsigned f0;
   volatile unsigned f1 : 29;
};

union U1 {
   volatile unsigned long long f0;
   unsigned long long f1;
   short f2;
};


static volatile short g_2 = (-6L);
static int g_12 = (-9L);
static unsigned char g_22 = 0x43L;
static long long g_35 = 0x95C380A3888AD88CLL;
static int *g_63 = (void*)0;
static long long *g_68 = &g_35;
static int g_70 = 0x551464E9L;
static short g_93 = 0x0D4FL;
static int g_98 = 0x58F739C8L;
static char g_101 = 0xC0L;
static int *g_113 = &g_70;
static unsigned g_117 = 6UL;
static long long g_186[2] = {0x9B5BAACCC2DF66EBLL,0x9B5BAACCC2DF66EBLL};
static volatile unsigned g_221 = 0x872034A5L;
static volatile unsigned *g_220 = &g_221;
static volatile unsigned **g_219 = &g_220;
static union U0 g_229 = {0UL};
static union U0 *g_228 = &g_229;
static union U0 g_232[7] = {{0x3C9241BAL},{0x3C9241BAL},{0x3C9241BAL},{0x3C9241BAL},{0x3C9241BAL},{0x3C9241BAL},{0x3C9241BAL}};
static union U0 g_234 = {0x613328CDL};
static unsigned long long g_266 = 0x4F32EFBFD07A97A7LL;
static unsigned char g_332 = 5UL;
static volatile union U0 g_364 = {0x37CFC890L};
static volatile union U0 *g_363 = &g_364;
static volatile union U0 **g_362 = &g_363;
static volatile union U0 ***g_361 = &g_362;
static union U0 **g_386[7][8][4] = {{{(void*)0,&g_228,&g_228,&g_228},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_228},{&g_228,&g_228,(void*)0,&g_228},{&g_228,&g_228,&g_228,&g_228},{&g_228,&g_228,(void*)0,&g_228},{&g_228,&g_228,(void*)0,&g_228},{(void*)0,&g_228,(void*)0,&g_228}},{{(void*)0,&g_228,&g_228,&g_228},{(void*)0,(void*)0,(void*)0,&g_228},{&g_228,&g_228,(void*)0,(void*)0},{&g_228,&g_228,&g_228,(void*)0},{&g_228,&g_228,(void*)0,&g_228},{(void*)0,&g_228,&g_228,(void*)0},{&g_228,&g_228,&g_228,(void*)0},{(void*)0,&g_228,&g_228,&g_228}},{{(void*)0,(void*)0,&g_228,(void*)0},{&g_228,&g_228,&g_228,&g_228},{(void*)0,&g_228,(void*)0,&g_228},{&g_228,&g_228,&g_228,(void*)0},{&g_228,(void*)0,(void*)0,&g_228},{&g_228,&g_228,(void*)0,(void*)0},{&g_228,&g_228,&g_228,(void*)0},{&g_228,&g_228,(void*)0,&g_228}},{{(void*)0,&g_228,&g_228,(void*)0},{&g_228,&g_228,&g_228,(void*)0},{(void*)0,&g_228,&g_228,&g_228},{(void*)0,(void*)0,&g_228,(void*)0},{&g_228,&g_228,&g_228,&g_228},{(void*)0,&g_228,(void*)0,&g_228},{&g_228,&g_228,&g_228,(void*)0},{&g_228,(void*)0,(void*)0,&g_228}},{{&g_228,&g_228,(void*)0,(void*)0},{(void*)0,(void*)0,&g_228,&g_228},{(void*)0,&g_228,&g_228,&g_228},{&g_228,&g_228,(void*)0,&g_228},{&g_228,(void*)0,(void*)0,&g_228},{&g_228,&g_228,&g_228,&g_228},{&g_228,&g_228,(void*)0,&g_228},{&g_228,&g_228,(void*)0,(void*)0}},{{&g_228,&g_228,&g_228,(void*)0},{(void*)0,&g_228,&g_228,&g_228},{(void*)0,&g_228,&g_228,&g_228},{&g_228,&g_228,&g_228,&g_228},{(void*)0,(void*)0,&g_228,&g_228},{(void*)0,&g_228,&g_228,&g_228},{&g_228,&g_228,(void*)0,&g_228},{&g_228,(void*)0,(void*)0,&g_228}},{{&g_228,&g_228,&g_228,&g_228},{&g_228,&g_228,(void*)0,&g_228},{&g_228,&g_228,(void*)0,(void*)0},{&g_228,&g_228,&g_228,(void*)0},{(void*)0,&g_228,&g_228,&g_228},{(void*)0,&g_228,&g_228,&g_228},{&g_228,&g_228,&g_228,&g_228},{(void*)0,(void*)0,&g_228,&g_228}}};
static union U0 ***g_385 = &g_386[5][7][0];
static union U0 ***g_389 = &g_386[5][7][0];
static union U1 g_396 = {0x7A79D8C0BA9FB4FFLL};
static union U1 g_397[2][8][9] = {{{{8UL},{8UL},{8UL},{0x48A2287F0B478A65LL},{6UL},{0x22684B9D64D7FBE5LL},{0x4BDC53EDA2D9B171LL},{1UL},{0x94D536609B1DBF76LL}},{{0UL},{0xEEF8EB7CCE6E3AD1LL},{0x94D536609B1DBF76LL},{0x22684B9D64D7FBE5LL},{18446744073709551615UL},{0x48A2287F0B478A65LL},{18446744073709551610UL},{18446744073709551610UL},{0x48A2287F0B478A65LL}},{{2UL},{0xEEF8EB7CCE6E3AD1LL},{0xDB953C488983DB02LL},{0xEEF8EB7CCE6E3AD1LL},{2UL},{8UL},{18446744073709551608UL},{8UL},{0xEEF8EB7CCE6E3AD1LL}},{{18446744073709551610UL},{18446744073709551615UL},{1UL},{8UL},{0x4BDC53EDA2D9B171LL},{18446744073709551611UL},{1UL},{1UL},{0x0396F0AF87F9D4EFLL}},{{18446744073709551615UL},{0xF398517051BB06EDLL},{18446744073709551608UL},{0xDB953C488983DB02LL},{18446744073709551611UL},{8UL},{0xF398517051BB06EDLL},{0x94D536609B1DBF76LL},{1UL}},{{0x48A2287F0B478A65LL},{0xB4C593CEE0C0C64ALL},{18446744073709551607UL},{18446744073709551608UL},{18446744073709551609UL},{0x48A2287F0B478A65LL},{0x4BDC53EDA2D9B171LL},{0x48A2287F0B478A65LL},{18446744073709551609UL}},{{0x48A2287F0B478A65LL},{18446744073709551610UL},{18446744073709551610UL},{0x48A2287F0B478A65LL},{18446744073709551615UL},{0x22684B9D64D7FBE5LL},{0x94D536609B1DBF76LL},{0xEEF8EB7CCE6E3AD1LL},{0UL}},{{18446744073709551615UL},{0x94D536609B1DBF76LL},{0xDB953C488983DB02LL},{18446744073709551609UL},{0x7923E73961F8F04ALL},{2UL},{18446744073709551611UL},{0x0396F0AF87F9D4EFLL},{0x94D536609B1DBF76LL}}},{{{18446744073709551610UL},{18446744073709551615UL},{0x0396F0AF87F9D4EFLL},{8UL},{18446744073709551615UL},{0xEEF8EB7CCE6E3AD1LL},{18446744073709551608UL},{1UL},{0xABBDACC74AFD26DELL}},{{2UL},{0x91A633002C48C575LL},{18446744073709551611UL},{0xABBDACC74AFD26DELL},{18446744073709551609UL},{8UL},{8UL},{18446744073709551609UL},{0xABBDACC74AFD26DELL}},{{0UL},{18446744073709551615UL},{0UL},{18446744073709551608UL},{18446744073709551611UL},{0x78F5D8F846B0A714LL},{1UL},{0UL},{0x94D536609B1DBF76LL}},{{0x4BDC53EDA2D9B171LL},{0xABBDACC74AFD26DELL},{8UL},{1UL},{18446744073709551608UL},{0xB4C593CEE0C0C64ALL},{0xABBDACC74AFD26DELL},{0xDB953C488983DB02LL},{18446744073709551615UL}},{{0xAD85AA962BC0D029LL},{1UL},{2UL},{8UL},{0UL},{0xAD85AA962BC0D029LL},{8UL},{0x7923E73961F8F04ALL},{1UL}},{{1UL},{0xEEF8EB7CCE6E3AD1LL},{0x91A633002C48C575LL},{0x7923E73961F8F04ALL},{18446744073709551611UL},{1UL},{18446744073709551611UL},{0x7923E73961F8F04ALL},{0x91A633002C48C575LL}},{{0x78F5D8F846B0A714LL},{0x78F5D8F846B0A714LL},{8UL},{0xF398517051BB06EDLL},{0x0396F0AF87F9D4EFLL},{0UL},{18446744073709551607UL},{0xDB953C488983DB02LL},{1UL}},{{18446744073709551615UL},{6UL},{0x4BDC53EDA2D9B171LL},{1UL},{0xDB953C488983DB02LL},{0xA9B06D648C2876D2LL},{0xEEF8EB7CCE6E3AD1LL},{18446744073709551615UL},{1UL}}}};
static char g_424[6][10] = {{0x76L,(-10L),0x96L,(-10L),0x76L,1L,1L,0x76L,(-10L),0x96L},{0xFCL,0xFCL,0x96L,0x76L,5L,0x76L,0x96L,0xFCL,0xFCL,0x96L},{(-10L),0x76L,1L,1L,0x76L,(-10L),0x96L,(-10L),0x76L,1L},{2L,0xFCL,2L,1L,0x96L,0x96L,1L,2L,0xFCL,2L},{2L,(-10L),0xFCL,0x76L,0xFCL,(-10L),2L,2L,(-10L),0xFCL},{0x76L,1L,1L,0x76L,(-10L),0x96L,(-10L),0x76L,1L,1L}};
static int g_447 = (-8L);
static union U0 g_449 = {4294967294UL};
static volatile union U1 g_482 = {0x080B7CCEC6ADBEB1LL};
static volatile union U1 *g_481 = &g_482;
static unsigned long long *g_486 = (void*)0;
static union U1 g_489 = {0x56AC35E2D46AF7CBLL};
static unsigned short g_492 = 0x7CF7L;
static union U1 g_506 = {0x9CB84A7B263EEB2BLL};
static union U0 g_513 = {0xDD35F910L};
static int g_526 = 1L;
static volatile union U1 g_529 = {18446744073709551615UL};
static int g_570 = 0x27C69CE4L;
static volatile unsigned char g_598 = 255UL;
static volatile unsigned char *g_597 = &g_598;
static volatile unsigned char **g_596[8] = {&g_597,&g_597,&g_597,&g_597,&g_597,&g_597,&g_597,&g_597};
static short *g_619 = &g_506.f2;
static short **g_618 = &g_619;
static union U0 g_644 = {0xF1C5E208L};
static union U0 g_645 = {4294967292UL};
static union U0 g_646 = {1UL};
static union U0 g_699 = {0xC634F9D2L};
static union U0 g_702 = {0xD7C15FA1L};
static short g_738 = 0x0EA4L;
static union U1 g_774 = {18446744073709551615UL};
static union U1 g_777 = {0x5E2E642EFE1D7FAALL};
static volatile int g_803 = 0x68A75F77L;
static volatile int *g_802 = &g_803;
static volatile int **g_801[2] = {&g_802,&g_802};
static volatile int ***g_800 = &g_801[1];
static long long g_818 = (-9L);
static long long g_841 = 0x9217314CB2B4CB16LL;
static volatile union U0 g_916 = {0UL};
static char g_918 = (-1L);
static union U0 g_920 = {0xF81E8261L};



static union U0 func_1(void);
static short func_6(int p_7);
static int func_14(char p_15, unsigned p_16, unsigned long long p_17);
static unsigned func_18(long long p_19);
static char func_41(int p_42);
static unsigned char func_50(int * p_51, unsigned char p_52, int * p_53);
static int * func_54(short p_55, int * p_56, unsigned p_57, long long * p_58, long long * p_59);
static long long * func_61(int * p_62);
static long long * func_72(char p_73, short p_74);
static char func_76(int * p_77, short p_78, long long ** p_79, long long ** p_80, int * p_81);
static union U0 func_1(void)
{
    volatile int l_3 = 0x5BF25CBDL;
    int l_13 = 0xA4DF6F97L;
    long long *l_34 = &g_35;
    unsigned long long l_36 = 9UL;
    int *l_913 = &g_570;
    char *l_917 = &g_918;
    int **l_919 = &g_113;
    l_3 = g_2;
    (*l_913) &= (safe_mod_func_int16_t_s_s(((**g_618) = func_6(((*g_113) = ((((safe_mod_func_uint8_t_u_u(g_2, ((safe_mod_func_int16_t_s_s((g_12 , ((*g_619) = (l_13 || func_14(((0x4E1C2E93L || func_18(l_13)) , (safe_div_func_uint8_t_u_u((safe_sub_func_uint32_t_u_u(((!(l_13 && (safe_rshift_func_int16_t_s_u((g_12 , ((safe_add_func_int8_t_s_s(((func_18(((*l_34) = (safe_lshift_func_uint8_t_u_s(l_13, 5)))) > l_36) ^ l_13), g_22)) || l_36)), g_12)))) != g_22), l_36)), l_13))), g_12, g_12)))), l_36)) | 0x0E8EL))) | 0x96CC6031L) & g_818) || 0x9BC14385FE7C445DLL)))), l_36));
    (*l_919) = func_54((**g_618), &g_447, (*l_913), l_34, &g_818);
    return g_920;
}







static short func_6(int p_7)
{
    short l_894 = 0xE885L;
    unsigned short *l_901 = (void*)0;
    int l_902 = (-2L);
    unsigned short *l_903 = (void*)0;
    unsigned short *l_904[4] = {&g_492,&g_492,&g_492,&g_492};
    int l_905 = 0x6FF52A7DL;
    unsigned short l_906 = 0x774AL;
    int **l_907 = &g_63;
    int i;
    (*l_907) = func_54((**g_618), &g_526, (((safe_rshift_func_uint16_t_u_s(l_894, 6)) & l_894) , (((((safe_unary_minus_func_int16_t_s(((g_2 < g_738) >= (safe_rshift_func_int16_t_s_s((safe_div_func_uint16_t_u_u((p_7 >= (safe_unary_minus_func_int64_t_s(p_7))), ((l_905 = (l_902 = 0xA5B9L)) , l_905))), (**g_618)))))) & l_906) | 0xEBE2L) > 6UL) >= 255UL)), &g_186[1], &g_186[1]);
    for (g_70 = 0; (g_70 >= 22); g_70 = safe_add_func_int64_t_s_s(g_70, 3))
    {
        unsigned short l_912 = 0xAA14L;
        l_912 &= (l_905 = (safe_rshift_func_uint8_t_u_u((*g_597), g_396.f2)));
    }
    return (**g_618);
}







static int func_14(char p_15, unsigned p_16, unsigned long long p_17)
{
    short l_43 = 1L;
    int l_45[7][5] = {{0L,5L,0xB11B1996L,5L,0L},{0x1FE01AF0L,0L,0L,0xAC29BA1FL,0xAC29BA1FL},{(-1L),5L,(-1L),0x2AA787D3L,(-1L)},{0x1FE01AF0L,0xAC29BA1FL,0L,0L,0xAC29BA1FL},{0L,0x2AA787D3L,0xB11B1996L,0x2AA787D3L,0L},{0xAC29BA1FL,0L,0L,0xAC29BA1FL,0x1FE01AF0L},{(-1L),0x2AA787D3L,(-1L),5L,(-1L)}};
    volatile union U1 *l_528 = &g_529;
    long long *l_573 = (void*)0;
    unsigned *l_615 = (void*)0;
    unsigned **l_614 = &l_615;
    unsigned long long l_638 = 0xD216B520135E2C99LL;
    union U0 *l_642[1];
    int *l_692[4][7] = {{&g_12,(void*)0,&g_12,(void*)0,&g_12,&g_12,&g_12},{(void*)0,&g_12,(void*)0,&g_12,&g_12,&g_12,(void*)0},{&g_12,&g_12,&g_12,&g_12,&g_12,&g_12,(void*)0},{(void*)0,&g_12,&g_12,&g_12,&g_12,(void*)0,&g_12}};
    short **l_742[7][9][4] = {{{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,(void*)0,&g_619},{&g_619,(void*)0,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{(void*)0,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,(void*)0},{&g_619,&g_619,&g_619,&g_619}},{{&g_619,(void*)0,&g_619,&g_619},{&g_619,&g_619,(void*)0,&g_619},{&g_619,(void*)0,(void*)0,&g_619},{&g_619,&g_619,&g_619,&g_619},{(void*)0,(void*)0,&g_619,(void*)0},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{(void*)0,&g_619,&g_619,&g_619},{(void*)0,(void*)0,&g_619,&g_619}},{{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,(void*)0},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,(void*)0},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619}},{{&g_619,&g_619,&g_619,&g_619},{(void*)0,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{(void*)0,&g_619,(void*)0,(void*)0},{&g_619,&g_619,(void*)0,&g_619}},{{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,(void*)0,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,(void*)0},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,(void*)0}},{{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{(void*)0,&g_619,&g_619,&g_619},{&g_619,&g_619,(void*)0,&g_619},{(void*)0,&g_619,&g_619,&g_619},{(void*)0,(void*)0,&g_619,(void*)0},{&g_619,&g_619,(void*)0,(void*)0},{(void*)0,(void*)0,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619}},{{(void*)0,&g_619,&g_619,&g_619},{&g_619,(void*)0,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{&g_619,&g_619,&g_619,&g_619},{(void*)0,&g_619,(void*)0,&g_619},{&g_619,&g_619,&g_619,(void*)0}}};
    unsigned l_745 = 0UL;
    unsigned l_754 = 0UL;
    union U0 ***l_757 = (void*)0;
    char *l_779 = &g_101;
    int l_798 = 0x094A6A2DL;
    int *l_844 = &g_70;
    long long l_850 = 5L;
    unsigned long long l_881[1];
    unsigned short l_884[2];
    unsigned long long **l_889 = &g_486;
    unsigned long long ***l_890 = &l_889;
    int **l_891 = &g_63;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_642[i] = (void*)0;
    for (i = 0; i < 1; i++)
        l_881[i] = 3UL;
    for (i = 0; i < 2; i++)
        l_884[i] = 1UL;
    if ((func_18(p_15) < (safe_add_func_int8_t_s_s((-1L), (safe_div_func_int8_t_s_s((l_45[1][1] = func_41(func_18(l_43))), p_15))))))
    {
        short l_60 = 0L;
        unsigned char *l_75 = &g_22;
        int **l_445 = &g_113;
        int *l_446 = &g_447;
        int *l_525 = &g_526;
        int l_530 = 1L;
        long long *l_572 = &g_186[0];
        union U0 *l_643[10] = {&g_646,&g_646,&g_644,&g_646,&g_646,&g_644,&g_646,&g_646,&g_644,&g_646};
        unsigned short *l_739 = (void*)0;
        union U1 *l_773 = &g_774;
        union U1 *l_776 = &g_777;
        int i;
    }
    else
    {
        short l_845 = 0x6D38L;
        char *l_853 = (void*)0;
        char *l_854[9] = {&g_424[5][4],&g_424[5][4],&g_424[5][4],&g_424[5][4],&g_424[5][4],&g_424[5][4],&g_424[5][4],&g_424[5][4],&g_424[5][4]};
        unsigned short *l_857 = &g_492;
        long long **l_858[3][3][5] = {{{&g_68,&g_68,&g_68,&g_68,&l_573},{&g_68,(void*)0,&l_573,&g_68,(void*)0},{(void*)0,&g_68,(void*)0,&g_68,&g_68}},{{&g_68,(void*)0,(void*)0,&g_68,&l_573},{&l_573,&g_68,(void*)0,&l_573,(void*)0},{&l_573,&g_68,&l_573,&g_68,&g_68}},{{&g_68,(void*)0,&l_573,&l_573,(void*)0},{&l_573,(void*)0,&g_68,&g_68,(void*)0},{&g_68,(void*)0,&l_573,&g_68,&g_68}}};
        int l_866 = 0xA82211C5L;
        int i, j, k;
        l_844 = l_844;
        if ((func_18(l_845) == (((safe_lshift_func_uint8_t_u_u(0x77L, (safe_sub_func_uint64_t_u_u(l_850, (safe_div_func_int8_t_s_s((g_424[1][2] |= ((*l_779) = p_15)), ((((l_845 <= (safe_add_func_uint16_t_u_u(((*l_857) |= g_234.f0), (l_858[1][2][0] != &l_573)))) < p_15) <= (*l_844)) ^ (*l_844)))))))) , (**g_361)) == (**g_361))))
        {
            long long *l_867 = (void*)0;
            int *l_868 = &l_45[1][1];
            unsigned char *l_876 = &g_22;
            unsigned char **l_875[5] = {&l_876,&l_876,&l_876,&l_876,&l_876};
            int i;
            (**g_800) = (**g_800);
            for (g_396.f2 = 0; (g_396.f2 >= 0); g_396.f2 -= 1)
            {
                if (((*g_113) |= p_17))
                {
                    unsigned long long *l_871 = &g_506.f1;
                    unsigned long long *l_872 = &g_266;
                    (*l_868) |= (func_18((*g_68)) ^ func_18(((func_18(((*l_844) |= (safe_sub_func_int32_t_s_s(p_15, 0x2913EAA3L)))) >= (-5L)) | (((*l_872) = ((*l_871) &= (func_18(func_18((p_15 , p_17))) , 2UL))) , p_16))));
                }
                else
                {
                    for (l_850 = 0; (l_850 >= 0); l_850 -= 1)
                    {
                        int i, j;
                        return g_424[(g_396.f2 + 1)][(g_396.f2 + 1)];
                    }
                }
            }
            (*g_113) = ((safe_mod_func_uint16_t_u_u((((!(((((void*)0 != l_875[1]) > ((((safe_lshift_func_int8_t_s_s(0xC8L, 7)) , &g_619) != (void*)0) ^ (safe_rshift_func_uint8_t_u_u(((*l_876) = l_881[0]), 4)))) <= (((safe_add_func_uint8_t_u_u((l_867 == l_867), (*l_844))) , (*l_868)) & (-5L))) != p_15)) <= l_845) , l_884[1]), 65534UL)) || (*l_844));
        }
        else
        {
            int *l_885[2];
            int i;
            for (i = 0; i < 2; i++)
                l_885[i] = &l_45[3][0];
            (*l_844) &= (p_15 ^ ((0xA877FD66L | p_17) && (safe_sub_func_int16_t_s_s((**g_618), (l_866 ^= (p_16 == (safe_unary_minus_func_uint8_t_u(g_777.f2))))))));
        }
    }
    (*l_891) = func_54(((p_15 > 3L) ^ p_17), &l_45[1][1], g_35, &l_850, &l_850);
    (**l_891) = (-7L);
    return (*l_844);
}







static unsigned func_18(long long p_19)
{
    int *l_20 = (void*)0;
    int l_21 = 0L;
    int *l_23 = (void*)0;
    l_21 |= (-7L);
    l_21 = (g_22 >= 250UL);
    return p_19;
}







static char func_41(int p_42)
{
    unsigned long long l_44 = 0xBE495EE35D5D909CLL;
    return l_44;
}







static unsigned char func_50(int * p_51, unsigned char p_52, int * p_53)
{
    union U0 *l_448 = &g_449;
    int l_463[3];
    short *l_465 = &g_396.f2;
    char *l_522 = &g_424[4][4];
    long long *l_523 = &g_186[1];
    int **l_524[10][6][3] = {{{&g_113,&g_113,&g_63},{&g_113,&g_63,&g_63},{(void*)0,&g_113,&g_113},{&g_113,&g_113,(void*)0},{&g_63,&g_113,&g_113},{&g_63,&g_113,&g_63}},{{&g_63,&g_113,&g_63},{&g_63,&g_63,&g_113},{&g_63,&g_63,&g_63},{&g_113,&g_63,&g_113},{(void*)0,&g_113,&g_63},{&g_113,&g_113,&g_113}},{{&g_113,&g_113,&g_63},{&g_63,&g_113,&g_113},{&g_113,&g_113,&g_63},{&g_113,&g_63,&g_63},{(void*)0,&g_113,&g_113},{&g_113,&g_113,(void*)0}},{{&g_63,&g_113,&g_113},{&g_63,&g_113,&g_63},{&g_63,&g_113,&g_63},{&g_63,&g_63,&g_113},{&g_63,&g_63,&g_63},{&g_113,(void*)0,&g_113}},{{&g_63,&g_63,&g_63},{(void*)0,&g_113,&g_113},{&g_113,&g_113,&g_63},{&g_113,(void*)0,&g_63},{&g_113,&g_63,&g_63},{(void*)0,&g_113,&g_63}},{{&g_63,&g_63,&g_63},{&g_113,(void*)0,&g_113},{(void*)0,&g_113,&g_63},{(void*)0,&g_113,&g_63},{(void*)0,&g_63,&g_63},{(void*)0,(void*)0,&g_63}},{{(void*)0,&g_113,&g_63},{&g_113,(void*)0,&g_113},{&g_63,&g_63,&g_63},{(void*)0,&g_113,&g_113},{&g_113,&g_113,&g_63},{&g_113,(void*)0,&g_63}},{{&g_113,&g_63,&g_63},{(void*)0,&g_113,&g_63},{&g_63,&g_63,&g_63},{&g_113,(void*)0,&g_113},{(void*)0,&g_113,&g_63},{(void*)0,&g_113,&g_63}},{{(void*)0,&g_63,&g_63},{(void*)0,(void*)0,&g_63},{(void*)0,&g_113,&g_63},{&g_113,(void*)0,&g_113},{&g_63,&g_63,&g_63},{(void*)0,&g_113,&g_113}},{{&g_113,&g_113,&g_63},{&g_113,(void*)0,&g_63},{&g_113,&g_63,&g_113},{(void*)0,&g_113,(void*)0},{&g_113,&g_63,&g_63},{(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_463[i] = 0x3BD396D2L;
    l_448 = l_448;
lbl_503:
    (*p_53) ^= (*g_63);
    for (g_101 = (-26); (g_101 < (-12)); g_101++)
    {
        short *l_467 = &g_396.f2;
        int l_472 = 0x58A9230CL;
        union U1 *l_488 = &g_489;
        long long l_493 = 0xF8CCFB3AB085AE07LL;
        int *l_502 = &g_98;
        union U0 *l_512 = &g_513;
        for (g_266 = 0; (g_266 == 20); g_266++)
        {
            int **l_454[7][3] = {{&g_113,&g_113,&g_113},{&g_63,&g_63,&g_63},{&g_113,&g_113,&g_113},{&g_63,&g_63,&g_63},{&g_113,&g_113,&g_113},{&g_63,&g_63,&g_63},{&g_113,&g_113,&g_113}};
            short *l_464 = &g_93;
            int i, j;
            g_113 = &g_70;
            if ((0x09325D2A539C9D7DLL <= 0UL))
            {
                short *l_466 = (void*)0;
                unsigned long long *l_485 = &g_266;
                int l_487 = 0xD78E0F12L;
                int l_490[4][10][2] = {{{0x6609E194L,0xF6A6855DL},{0xC29DB642L,8L},{1L,0x776FB466L},{0x6609E194L,2L},{0x776FB466L,(-2L)},{0x35A9A108L,0x2F6E0149L},{2L,0x29CCDEE3L},{4L,0x29CCDEE3L},{2L,0x2F6E0149L},{0x35A9A108L,(-2L)}},{{0x776FB466L,2L},{0x6609E194L,0x776FB466L},{1L,8L},{0xC29DB642L,0xF6A6855DL},{0x6609E194L,0xE0E2D475L},{0xF6A6855DL,(-2L)},{0x4A9273BBL,0x74B2E43AL},{2L,4L},{0x29CCDEE3L,0x29CCDEE3L},{0xE0E2D475L,0x74B2E43AL}},{{0x35A9A108L,(-1L)},{0xF6A6855DL,2L},{0x5FF2771DL,0xF6A6855DL},{1L,0x3ED4B7B3L},{1L,0xF6A6855DL},{0x5FF2771DL,2L},{0xF6A6855DL,(-1L)},{0x35A9A108L,0x74B2E43AL},{0xE0E2D475L,0x29CCDEE3L},{0x29CCDEE3L,0x3ED4B7B3L}},{{0xF6A6855DL,(-9L)},{0xE0E2D475L,1L},{(-2L),0x776FB466L},{0x74B2E43AL,(-2L)},{4L,0x6609E194L},{0x29CCDEE3L,(-1L)},{0x74B2E43AL,0xF6A6855DL},{(-1L),1L},{2L,0L},{0xF6A6855DL,8L}}};
                int l_494 = 0x0F34BE59L;
                unsigned char l_501 = 0x0BL;
                int i, j, k;
                for (g_35 = 0; (g_35 != (-15)); --g_35)
                {
                    short l_457[1][2][6];
                    char *l_462[1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 6; k++)
                                l_457[i][j][k] = (-8L);
                        }
                    }
                    for (i = 0; i < 1; i++)
                        l_462[i] = &g_424[1][2];
                    if (((func_41(l_457[0][0][3]) || (safe_sub_func_int64_t_s_s((safe_mod_func_int8_t_s_s((g_424[3][3] = g_12), (l_463[2] || (((l_463[2] == p_52) & ((l_465 = l_464) != l_466)) , (p_53 != (void*)0))))), 0x12BC01D2B0A3EE7DLL))) != p_52))
                    {
                        int l_468 = 0L;
                        unsigned short *l_491 = &g_492;
                        l_494 |= (((g_70 , l_467) != (((g_447 == l_468) , func_41((((safe_add_func_int64_t_s_s((safe_unary_minus_func_uint8_t_u((l_472 | (safe_sub_func_uint16_t_u_u(func_41((safe_rshift_func_uint16_t_u_s(((*l_491) = (safe_add_func_int32_t_s_s((safe_add_func_int64_t_s_s((g_481 != ((safe_sub_func_int8_t_s_s((l_487 = (l_485 != (g_486 = func_61(p_51)))), g_70)) , l_488)), l_472)), l_490[3][7][1]))), 11))), l_493))))), g_117)) , 18446744073709551612UL) , (*p_53)))) , l_465)) , l_468);
                    }
                    else
                    {
                        (*g_113) |= (((*l_465) = 1L) & 6UL);
                        if ((*g_63))
                            break;
                        (*g_113) |= (safe_rshift_func_int16_t_s_s((-1L), (safe_div_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(65535UL, 0x37EEL)), 0x80L))));
                    }
                    if (func_41(((*p_51) = (*g_63))))
                    {
                        return p_52;
                    }
                    else
                    {
                        return l_501;
                    }
                }
                return l_493;
            }
            else
            {
                (*g_113) &= (*p_53);
            }
            for (g_447 = 5; (g_447 >= 0); g_447 -= 1)
            {
                l_463[2] = ((*g_63) = (*g_113));
                l_502 = (void*)0;
            }
            if ((+(*g_113)))
            {
                return g_397[0][2][1].f1;
            }
            else
            {
                unsigned long long *l_504 = &g_397[0][2][1].f1;
                union U1 *l_505 = &g_506;
                int l_507 = 0L;
                if (g_12)
                    goto lbl_503;
                if ((*g_113))
                    break;
                if ((g_117 != (g_396.f1 = ((*l_504) = g_266))))
                {
                    unsigned long long l_510 = 0x1B290422DB0F3172LL;
                    (*p_53) = ((void*)0 != l_505);
                    (*p_51) &= (l_507 > (((safe_add_func_int16_t_s_s(g_22, ((void*)0 == &g_12))) >= g_35) <= p_52));
                    l_510 = (*p_53);
                }
                else
                {
                    if ((*g_113))
                    {
                        return l_463[2];
                    }
                    else
                    {
                        int *l_511 = &l_463[0];
                        union U0 **l_514 = &l_512;
                        l_511 = &g_70;
                        if (l_507)
                            continue;
                        (*l_514) = l_512;
                    }
                    return g_35;
                }
                for (g_234.f0 = 0; (g_234.f0 == 60); ++g_234.f0)
                {
                    if (l_507)
                    {
                        p_53 = &g_447;
                        return g_506.f1;
                    }
                    else
                    {
                        return p_52;
                    }
                }
            }
        }
        for (g_447 = 0; (g_447 <= (-15)); g_447 = safe_sub_func_int32_t_s_s(g_447, 9))
        {
            if ((*g_63))
                break;
        }
    }
    g_113 = &g_98;
    return g_397[0][2][1].f1;
}







static int * func_54(short p_55, int * p_56, unsigned p_57, long long * p_58, long long * p_59)
{
    int **l_102 = &g_63;
    long long **l_103 = &g_68;
    int l_170 = 1L;
    union U0 *l_231 = &g_232[0];
    union U0 *l_233 = &g_234;
    unsigned *l_263 = &g_232[0].f0;
    long long l_285 = 3L;
    char l_293 = 0x4CL;
    unsigned short l_303 = 0xD629L;
    unsigned long long *l_412 = &g_396.f1;
    unsigned long long **l_411 = &l_412;
    unsigned short *l_415[3];
    char l_437 = 0xCDL;
    long long l_444[10][7] = {{0xA8DB656A6627CF19LL,0x866D5966140496E6LL,0x933FA155B454AF4DLL,(-1L),(-1L),0x933FA155B454AF4DLL,0x866D5966140496E6LL},{0L,0L,0x7199D1877FEE7BA1LL,0xA53D07293A6EBDB7LL,0xA53D07293A6EBDB7LL,0x7199D1877FEE7BA1LL,0L},{0xA8DB656A6627CF19LL,0x866D5966140496E6LL,0x933FA155B454AF4DLL,(-1L),(-1L),0x933FA155B454AF4DLL,0x866D5966140496E6LL},{0L,0L,0x7199D1877FEE7BA1LL,0xA53D07293A6EBDB7LL,0xA53D07293A6EBDB7LL,0x7199D1877FEE7BA1LL,0L},{0xA8DB656A6627CF19LL,0x866D5966140496E6LL,0x933FA155B454AF4DLL,(-1L),(-1L),0x933FA155B454AF4DLL,0x866D5966140496E6LL},{0L,0L,0x7199D1877FEE7BA1LL,0xA53D07293A6EBDB7LL,0xA53D07293A6EBDB7LL,0x7199D1877FEE7BA1LL,0L},{0xA8DB656A6627CF19LL,0x866D5966140496E6LL,0x933FA155B454AF4DLL,(-1L),(-1L),0x933FA155B454AF4DLL,0x866D5966140496E6LL},{0L,0L,0x7199D1877FEE7BA1LL,0xA53D07293A6EBDB7LL,0xA53D07293A6EBDB7LL,0x7199D1877FEE7BA1LL,0L},{0xA8DB656A6627CF19LL,0x866D5966140496E6LL,0x933FA155B454AF4DLL,(-1L),(-1L),0x933FA155B454AF4DLL,0x866D5966140496E6LL},{0L,0L,0x7199D1877FEE7BA1LL,0xA53D07293A6EBDB7LL,0xA53D07293A6EBDB7LL,0x7199D1877FEE7BA1LL,0L}};
    int i, j;
    for (i = 0; i < 3; i++)
        l_415[i] = &l_303;
lbl_241:
    (*l_102) = &g_70;
    if ((p_57 , func_76((*l_102), p_57, l_103, l_103, &g_98)))
    {
        unsigned char l_104[3][7][8] = {{{0xEDL,253UL,0xA6L,0x4AL,0x79L,0xEDL,0x7AL,248UL},{0x54L,0x7AL,0xD4L,0xDAL,0x17L,5UL,5UL,0x17L},{0xFFL,255UL,255UL,0xFFL,0x54L,248UL,0UL,0x26L},{0x7AL,0xFFL,0xB9L,0UL,0xB8L,255UL,0x7AL,0x79L},{0xD4L,0xFFL,1UL,0xA6L,248UL,248UL,0xA6L,0x7AL},{0x17L,255UL,0x73L,0UL,248UL,5UL,0xA2L,5UL},{0xB8L,0x7AL,255UL,0x7AL,0xB8L,0xEDL,0x17L,0UL}},{{1UL,248UL,0x26L,0x54L,0UL,0x26L,248UL,0x7AL},{0xFFL,0xDAL,0x26L,0x79L,255UL,0xD4L,0x17L,0xA6L},{0UL,0x17L,255UL,0UL,0x79L,0xB9L,0xA2L,0xA2L},{0x26L,9UL,0x73L,0x73L,9UL,0x26L,0xA6L,0x17L},{0xA2L,248UL,1UL,9UL,0xA6L,0xDAL,0x7AL,248UL},{0UL,0x7AL,0xB9L,9UL,0x17L,0x67L,0x79L,0x17L},{1UL,0x17L,0x0DL,1UL,0x17L,0x54L,0xA6L,0xFFL}},{{248UL,1UL,0xDAL,0x79L,0xDAL,1UL,248UL,0x26L},{9UL,0x7AL,0UL,0xA2L,0UL,255UL,0xA2L,248UL},{0x0DL,0x17L,1UL,255UL,0UL,0xA6L,0x73L,0x79L},{9UL,248UL,255UL,248UL,0xDAL,5UL,0x17L,0xA6L},{248UL,0UL,255UL,0x17L,0x17L,255UL,0UL,248UL},{1UL,0UL,0x73L,0x26L,0x17L,0xDAL,0x0DL,0xA2L},{0x17L,0xD4L,255UL,0x79L,0x26L,0xDAL,0xFFL,0x73L}}};
        long long **l_120 = &g_68;
        int l_121 = 1L;
        char l_200[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_200[i] = 0x9BL;
        for (g_35 = 2; (g_35 >= 0); g_35 -= 1)
        {
            long long l_126 = 8L;
            int l_199 = 5L;
            for (g_101 = 0; (g_101 <= 2); g_101 += 1)
            {
                short *l_114 = &g_93;
                unsigned *l_115 = (void*)0;
                unsigned *l_116 = &g_117;
                unsigned char *l_118 = (void*)0;
                unsigned char *l_119 = &l_104[1][5][7];
                int l_122 = 0L;
                int l_123 = 0xBB47CE4AL;
                (*p_56) |= (safe_add_func_int8_t_s_s(((l_122 ^= ((safe_div_func_uint32_t_u_u((g_101 == (p_55 | g_35)), (safe_div_func_uint16_t_u_u(65535UL, func_18((((func_18((((safe_sub_func_uint8_t_u_u((func_76(g_113, (((*l_119) = ((l_114 != (void*)0) <= (p_57 |= ((*l_116) = 0x854D8CADL)))) | 0x5AL), l_120, &g_68, l_115) || p_57), 0xB2L)) == l_121) || p_57)) && p_57) , 0L) , (-1L))))))) , g_12)) || g_12), l_123));
                for (g_93 = 2; (g_93 >= 0); g_93 -= 1)
                {
                    int i, j, k;
                    if (l_104[g_93][g_101][(g_35 + 3)])
                    {
                        (*g_63) |= (*p_56);
                    }
                    else
                    {
                        (**l_102) = (safe_mod_func_uint16_t_u_u(65533UL, func_18(l_126)));
                    }
                }
            }
            for (g_98 = 0; (g_98 <= 2); g_98 += 1)
            {
                unsigned short l_142[9] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                unsigned short l_173 = 65532UL;
                int l_224 = (-8L);
                int i;
            }
            (*p_56) ^= (*g_63);
            return &g_70;
        }
    }
    else
    {
        unsigned char *l_244 = (void*)0;
        unsigned char *l_245[3][1][1];
        int l_246 = (-1L);
        int i, j, k;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 1; k++)
                    l_245[i][j][k] = (void*)0;
            }
        }
        for (g_70 = 27; (g_70 == (-2)); g_70 = safe_sub_func_uint16_t_u_u(g_70, 4))
        {
            unsigned char *l_227 = &g_22;
            union U0 **l_230[9][1] = {{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228},{&g_228}};
            int i, j;
            l_233 = ((((*l_227) &= (**l_102)) & func_41(func_41((*g_113)))) , (l_231 = g_228));
            for (g_234.f0 = 15; (g_234.f0 < 22); g_234.f0 = safe_add_func_uint64_t_u_u(g_234.f0, 9))
            {
                if (((*p_56) = (*g_113)))
                {
                    for (g_101 = (-21); (g_101 <= (-7)); g_101 = safe_add_func_int64_t_s_s(g_101, 7))
                    {
                        return (*l_102);
                    }
                }
                else
                {
                    (*l_102) = &g_98;
                    for (g_98 = 0; (g_98 >= (-4)); --g_98)
                    {
                        return p_56;
                    }
                }
            }
            (*p_56) = (*g_63);
        }
        if (g_70)
            goto lbl_241;
        (*p_56) = func_18((safe_mul_func_uint8_t_u_u(((**l_102) = 0x82L), ((func_18(l_246) , ((safe_rshift_func_int16_t_s_u(l_246, 6)) , p_57)) <= (safe_lshift_func_int16_t_s_u(l_246, 15))))));
        (**l_102) ^= (*p_56);
    }
lbl_441:
    for (g_229.f0 = 0; (g_229.f0 != 28); g_229.f0 = safe_add_func_uint16_t_u_u(g_229.f0, 2))
    {
        unsigned char l_272 = 0x62L;
        union U0 **l_291 = &l_233;
        int *l_292 = &l_170;
        unsigned **l_312 = &l_263;
        unsigned char l_356 = 0x4DL;
    }
    if ((safe_mod_func_uint16_t_u_u((0xA2L == (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(65534UL, (safe_add_func_uint64_t_u_u(func_18((**l_102)), (g_93 == ((l_170 = func_18((safe_add_func_int8_t_s_s(((((*l_411) = p_59) == &g_266) , ((**l_102) ^ ((((safe_rshift_func_int16_t_s_s((-1L), 10)) & 0UL) , (-7L)) | (**l_102)))), g_101)))) == p_57)))))), g_186[1]))), 0x38D0L)))
    {
        int *l_423 = &l_170;
        unsigned l_435 = 0xABF76927L;
        for (l_303 = 0; (l_303 > 16); l_303 = safe_add_func_int8_t_s_s(l_303, 5))
        {
            long long **l_422 = &g_68;
            unsigned long long *l_436[3];
            int l_438 = (-3L);
            int i;
            for (i = 0; i < 3; i++)
                l_436[i] = (void*)0;
            (*l_423) &= ((safe_sub_func_uint64_t_u_u((l_437 &= ((g_424[1][2] = (safe_rshift_func_int8_t_s_u((-1L), func_76(p_56, g_93, l_103, l_422, l_423)))) && (((p_57 >= (safe_mod_func_uint64_t_u_u(((**l_102) = (safe_sub_func_uint64_t_u_u(((**l_411) = (((safe_mod_func_int64_t_s_s((safe_sub_func_int32_t_s_s((safe_add_func_uint64_t_u_u(g_424[1][2], g_396.f2)), l_435)), (*p_59))) , p_57) != 18446744073709551615UL)), p_55))), (-1L)))) > g_12) , g_93))), g_397[0][2][1].f2)) < 0xE3BE1083L);
            if (l_438)
                continue;
            (**l_102) = (*l_423);
            for (g_234.f0 = 0; (g_234.f0 == 29); g_234.f0 = safe_add_func_uint8_t_u_u(g_234.f0, 8))
            {
                if (l_435)
                    goto lbl_441;
                if ((*p_56))
                    break;
            }
        }
        return p_56;
    }
    else
    {
        for (g_101 = 0; (g_101 < (-28)); g_101--)
        {
            (**l_102) &= l_444[0][2];
        }
    }
    return &g_98;
}







static long long * func_61(int * p_62)
{
    long long **l_64 = (void*)0;
    long long **l_65 = (void*)0;
    long long *l_67 = (void*)0;
    long long **l_66[9] = {&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,&l_67,&l_67};
    int *l_69[1][5][2] = {{{&g_70,&g_70},{&g_70,&g_70},{&g_70,&g_70},{&g_70,&g_70},{&g_70,&g_70}}};
    unsigned short l_71 = 65530UL;
    int i, j, k;
    l_71 = ((g_68 = (void*)0) != (void*)0);
    return &g_35;
}







static long long * func_72(char p_73, short p_74)
{
    int *l_82 = &g_70;
    long long **l_83[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    g_101 &= ((func_76(l_82, g_12, l_83[5], l_83[2], &g_70) && 1L) ^ ((g_35 , ((safe_lshift_func_uint8_t_u_s((p_74 && 18446744073709551615UL), 1)) < 1UL)) < 0x2EB5L));
    (*l_82) ^= 0L;
    return &g_35;
}







static char func_76(int * p_77, short p_78, long long ** p_79, long long ** p_80, int * p_81)
{
    int l_84[9] = {0xD5B90669L,0xD5B90669L,0xD5B90669L,0xD5B90669L,0xD5B90669L,0xD5B90669L,0xD5B90669L,0xD5B90669L,0xD5B90669L};
    unsigned char l_94 = 4UL;
    int i;
    for (g_70 = 7; (g_70 >= 0); g_70 -= 1)
    {
        short *l_91 = (void*)0;
        short *l_92 = &g_93;
        unsigned long long *l_95 = (void*)0;
        int l_96 = 0x28AD0AF0L;
        int *l_97 = &g_98;
        int i;
        for (g_22 = 0; (g_22 <= 8); g_22 += 1)
        {
            int i;
            for (g_12 = 0; (g_12 <= 8); g_12 += 1)
            {
                int i;
                l_84[g_22] = l_84[g_70];
            }
            l_84[g_70] ^= 1L;
        }
        (*l_97) ^= (l_84[(g_70 + 1)] != ((l_96 = ((safe_div_func_int8_t_s_s(((((6UL <= func_18((safe_div_func_uint64_t_u_u(l_84[g_70], g_22)))) ^ ((g_35 , (((*l_92) &= p_78) == (((0x64004C0DL < (*p_77)) , l_84[3]) && 0x0EL))) <= p_78)) ^ l_84[g_70]) > l_94), g_22)) > g_12)) , p_78));
    }
    return g_22;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_12, "g_12", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_35, "g_35", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    transparent_crc(g_98, "g_98", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_117, "g_117", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_186[i], "g_186[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_229.f0, "g_229.f0", print_hash_value);
    transparent_crc(g_229.f1, "g_229.f1", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_232[i].f0, "g_232[i].f0", print_hash_value);
        transparent_crc(g_232[i].f1, "g_232[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_234.f0, "g_234.f0", print_hash_value);
    transparent_crc(g_234.f1, "g_234.f1", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_364.f1, "g_364.f1", print_hash_value);
    transparent_crc(g_396.f2, "g_396.f2", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_397[i][j][k].f0, "g_397[i][j][k].f0", print_hash_value);
                transparent_crc(g_397[i][j][k].f1, "g_397[i][j][k].f1", print_hash_value);
                transparent_crc(g_397[i][j][k].f2, "g_397[i][j][k].f2", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_424[i][j], "g_424[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_447, "g_447", print_hash_value);
    transparent_crc(g_449.f0, "g_449.f0", print_hash_value);
    transparent_crc(g_449.f1, "g_449.f1", print_hash_value);
    transparent_crc(g_482.f0, "g_482.f0", print_hash_value);
    transparent_crc(g_482.f1, "g_482.f1", print_hash_value);
    transparent_crc(g_482.f2, "g_482.f2", print_hash_value);
    transparent_crc(g_489.f0, "g_489.f0", print_hash_value);
    transparent_crc(g_489.f1, "g_489.f1", print_hash_value);
    transparent_crc(g_489.f2, "g_489.f2", print_hash_value);
    transparent_crc(g_492, "g_492", print_hash_value);
    transparent_crc(g_506.f2, "g_506.f2", print_hash_value);
    transparent_crc(g_513.f0, "g_513.f0", print_hash_value);
    transparent_crc(g_513.f1, "g_513.f1", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_529.f0, "g_529.f0", print_hash_value);
    transparent_crc(g_529.f1, "g_529.f1", print_hash_value);
    transparent_crc(g_529.f2, "g_529.f2", print_hash_value);
    transparent_crc(g_570, "g_570", print_hash_value);
    transparent_crc(g_598, "g_598", print_hash_value);
    transparent_crc(g_644.f0, "g_644.f0", print_hash_value);
    transparent_crc(g_644.f1, "g_644.f1", print_hash_value);
    transparent_crc(g_645.f0, "g_645.f0", print_hash_value);
    transparent_crc(g_645.f1, "g_645.f1", print_hash_value);
    transparent_crc(g_646.f0, "g_646.f0", print_hash_value);
    transparent_crc(g_646.f1, "g_646.f1", print_hash_value);
    transparent_crc(g_699.f0, "g_699.f0", print_hash_value);
    transparent_crc(g_699.f1, "g_699.f1", print_hash_value);
    transparent_crc(g_702.f0, "g_702.f0", print_hash_value);
    transparent_crc(g_702.f1, "g_702.f1", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_774.f0, "g_774.f0", print_hash_value);
    transparent_crc(g_774.f1, "g_774.f1", print_hash_value);
    transparent_crc(g_774.f2, "g_774.f2", print_hash_value);
    transparent_crc(g_777.f0, "g_777.f0", print_hash_value);
    transparent_crc(g_777.f1, "g_777.f1", print_hash_value);
    transparent_crc(g_777.f2, "g_777.f2", print_hash_value);
    transparent_crc(g_803, "g_803", print_hash_value);
    transparent_crc(g_818, "g_818", print_hash_value);
    transparent_crc(g_841, "g_841", print_hash_value);
    transparent_crc(g_916.f0, "g_916.f0", print_hash_value);
    transparent_crc(g_916.f1, "g_916.f1", print_hash_value);
    transparent_crc(g_918, "g_918", print_hash_value);
    transparent_crc(g_920.f0, "g_920.f0", print_hash_value);
    transparent_crc(g_920.f1, "g_920.f1", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
