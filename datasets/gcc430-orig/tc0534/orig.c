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
   unsigned f1;
   int f2;
   unsigned f3;
   unsigned char f4;
   unsigned short f5;
};

struct S1 {
   short f0;
   int f1;
   const unsigned f2;
   const unsigned f3;
   const unsigned f4;
   int f5;
   int f6;
};

struct S2 {
   char f0;
   int f1;
   const unsigned f2;
   const int f3;
   int f4;
   unsigned char f5;
   int f6;
   unsigned char f7;
   unsigned char f8;
   const unsigned short f9;
};

union U3 {
   unsigned short f0;
   short f1;
   const short f2;
   unsigned short f3;
};

union U4 {
   unsigned f0;
   struct S1 f1;
   int f2;
   struct S0 f3;
};

union U5 {
   int f0;
};

union U6 {
   char * f0;
   int f1;
   unsigned f2;
   struct S0 f3;
};

union U7 {
   struct S0 f0;
   int f1;
};


static int g_2[1] = {(-1L)};
static int g_3 = 0x69A22DB7L;
static int g_4 = 0x874BE76DL;
static int g_5[4] = {(-1L),(-1L),(-1L),(-1L)};
static struct S1 g_14 = {1L,0x9C5A74D4L,1UL,18446744073709551607UL,4294967295UL,0x328129ECL,0xEA3D8810L};
static struct S0 g_28 = {0x0D0E101EL,0xE883781CL,0xFFA870C3L,4294967286UL,255UL,65531UL};
static char g_34 = (-2L);
static char *g_33 = &g_34;
static short g_66 = 0L;
static int g_68 = 6L;
static unsigned char g_72 = 4UL;
static int *g_74[9][5] = {{&g_14.f5,(void*)0,&g_28.f2,&g_28.f2,&g_28.f2},{(void*)0,(void*)0,&g_5[0],(void*)0,(void*)0},{&g_28.f2,&g_28.f2,&g_28.f2,(void*)0,&g_14.f5},{(void*)0,&g_4,&g_4,(void*)0,&g_4},{&g_14.f5,&g_28.f2,&g_4,&g_28.f2,&g_14.f5},{&g_4,(void*)0,&g_4,&g_4,(void*)0},{&g_14.f5,(void*)0,&g_28.f2,&g_28.f2,&g_28.f2},{(void*)0,(void*)0,&g_5[0],(void*)0,(void*)0},{&g_28.f2,(void*)0,&g_4,&g_28.f2,&g_28.f2}};
static struct S0 g_109 = {0xC2309139L,7UL,0xCAE5D5D6L,4294967289UL,0x01L,0x8602L};
static union U3 g_117 = {1UL};
static char g_119 = 0x03L;
static unsigned char *g_135 = &g_28.f4;
static unsigned char **g_134 = &g_135;
static union U6 g_146 = {0};
static struct S0 *g_152 = &g_146.f3;
static char g_164 = 0x19L;
static int *g_177 = &g_14.f5;
static int **g_176 = &g_177;
static struct S0 *g_180 = &g_109;
static union U6 *g_184 = &g_146;
static const int *g_225 = &g_3;
static const int **g_224 = &g_225;
static union U4 g_227 = {0x741B8BEBL};
static union U4 *g_226 = &g_227;



static union U7 func_1(void);
static const int * func_8(struct S1 p_9, union U7 p_10, unsigned p_11, char * p_12, struct S2 p_13);
static union U7 func_15(union U4 p_16, int * p_17, char p_18, unsigned short p_19, int p_20);
static union U4 func_21(int * p_22, struct S0 p_23, int * p_24, int * const p_25, int ** const p_26);
static int * func_29(int * const p_30);
static int * func_31(char * p_32);
static unsigned func_40(unsigned char p_41);
static char func_46(const int ** p_47);
static struct S0 func_49(char * p_50, int * p_51, union U3 p_52, char * p_53);
static char * func_54(const int ** p_55);
static union U7 func_1(void)
{
    int *l_172 = &g_28.f2;
    int ** const l_171 = &l_172;
    struct S0 l_234 = {9L,2UL,1L,4294967295UL,6UL,0xA575L};
    const char l_235 = 0L;
    union U7 l_236 = {{0xFC8C2E68L,0x97931A31L,-2L,0UL,251UL,3UL}};
    for (g_3 = 0; (g_3 <= 0); g_3 += 1)
    {
        char l_206[7][3][6] = {{{(-1L),0xA3L,(-1L),0L,(-1L),0xA3L},{1L,0xD3L,1L,(-1L),(-5L),1L},{(-8L),(-1L),0x9CL,(-1L),1L,1L}},{{1L,(-1L),(-9L),0x8FL,(-5L),(-1L)},{0x8DL,0xD3L,0xCDL,1L,(-1L),0x2AL},{0xFFL,0xA3L,7L,(-1L),0xA4L,0xDDL}},{{(-1L),1L,0x90L,0xDAL,0L,0x38L},{0x4BL,0x38L,1L,7L,1L,0xDAL},{0x9CL,(-1L),0xD3L,0xFFL,0x2AL,(-1L)}},{{0xD3L,0x29L,0xFEL,1L,(-1L),0xCDL},{0x76L,0x8FL,(-10L),1L,1L,(-10L)},{(-9L),(-9L),0x8DL,(-2L),0x7BL,1L}},{{(-10L),0L,(-1L),(-1L),0xCCL,0x8DL},{0L,(-10L),(-1L),0x80L,(-9L),1L},{0xDAL,0x80L,0x8DL,1L,(-1L),(-10L)}},{{1L,(-1L),(-10L),7L,0L,0xFEL},{0x86L,(-1L),0x8FL,0x90L,2L,0x4BL},{2L,0L,(-8L),1L,0xFEL,0x80L}},{{1L,3L,(-5L),0xD3L,0L,0xA4L},{0xA3L,0L,0L,0xFEL,3L,(-1L)},{0L,0xD3L,0x86L,(-10L),0x7BL,(-10L)}}};
        struct S2 l_223 = {1L,0xAEFA68B3L,0xC11601A9L,0x41C4F514L,0x75F8629FL,3UL,0L,255UL,0x39L,0x8659L};
        int i, j, k;
        for (g_4 = 0; (g_4 <= 0); g_4 += 1)
        {
            int *l_27 = (void*)0;
            for (g_5[0] = 0; (g_5[0] <= 0); g_5[0] += 1)
            {
                int *l_7 = &g_4;
                int **l_6 = &l_7;
                int ***l_173 = (void*)0;
                int **l_175 = (void*)0;
                int ***l_174 = &l_175;
                char *l_222 = &l_206[3][2][0];
                int i;
                (*l_6) = &g_2[g_3];

                ;
            }
            (*g_180) = l_234;
            if (l_235)
                continue;
            (*g_180) = (*g_180);
        }
        if ((*l_172))
            continue;
        (*g_224) = func_31(&g_34);

                ;
    }



    ;
    ;
    return l_236;

    }







static const int * func_8(struct S1 p_9, union U7 p_10, unsigned p_11, char * p_12, struct S2 p_13)
{
    union U4 *l_229 = (void*)0;
    if (func_46(g_224))
    {
        union U4 **l_228 = (void*)0;
        const int **l_230 = &g_225;
        union U3 l_231[10][3] = {{{1UL},{0x2E64L},{7UL}},{{0x0211L},{0x0211L},{1UL}},{{0UL},{0x2E64L},{0x2E64L}},{{1UL},{0x754AL},{0x81D2L}},{{0UL},{0UL},{0UL}},{{0x0211L},{1UL},{0x81D2L}},{{1UL},{1UL},{0x2E64L}},{{0x0907L},{1UL},{1UL}},{{0x2E64L},{0UL},{7UL}},{{0x0907L},{0x754AL},{0x0907L}}};
        struct S0 *l_232 = &g_146.f3;
        int i, j;
        l_229 = g_226;

        ;
        (*l_232) = func_49(func_54(l_230), (*g_176), l_231[6][0], &g_164);
        (*g_176) = (*g_176);
    }
    else
    {
        int *l_233 = &g_3;
        (*g_176) = l_233;


    }


    ;
    return (*g_176);


}







static union U7 func_15(union U4 p_16, int * p_17, char p_18, unsigned short p_19, int p_20)
{
    unsigned l_214 = 0UL;
    char *l_215[3][10][3] = {{{&g_34,&g_119,&g_164},{&g_164,&g_119,(void*)0},{&g_34,&g_164,&g_34},{&g_164,&g_119,(void*)0},{&g_34,&g_119,&g_164},{&g_164,(void*)0,&g_34},{&g_34,&g_164,&g_164},{&g_164,&g_119,&g_34},{&g_164,&g_119,&g_34},{&g_34,&g_164,&g_119}},{{&g_34,&g_119,&g_34},{&g_34,&g_34,&g_34},{&g_34,&g_119,&g_34},{&g_119,&g_119,(void*)0},{&g_34,(void*)0,&g_119},{&g_164,&g_119,(void*)0},{&g_164,&g_164,&g_34},{&g_34,&g_119,&g_34},{&g_34,&g_164,&g_34},{&g_164,(void*)0,&g_34}},{{&g_164,&g_34,&g_119},{&g_34,&g_164,&g_34},{&g_34,&g_34,&g_164},{&g_164,(void*)0,&g_34},{&g_164,&g_164,&g_164},{&g_34,&g_164,&g_119},{&g_34,&g_164,&g_119},{&g_164,&g_119,&g_164},{&g_164,&g_34,&g_34},{&g_34,&g_119,&g_164}}};
    union U3 l_216 = {0xA3C1L};
    const int **l_217 = (void*)0;
    const int ***l_218 = &l_217;
    char **l_219 = &g_33;
    struct S0 *l_220 = &g_146.f3;
    union U7 l_221 = {{0xAFD05312L,3UL,0xF35A23FFL,0x11D84C9EL,0x41L,0x6F24L}};
    int i, j, k;
    if ((*p_17))
    {
        struct S0 *l_207 = &g_28;
        struct S0 **l_208 = (void*)0;
        struct S0 **l_209 = &g_152;
        struct S0 **l_210 = &g_180;
        (*l_210) = ((*l_209) = l_207);

        ;
        ;
    }
    else
    {
        union U3 *l_212[9] = {&g_117,&g_117,&g_117,&g_117,&g_117,&g_117,&g_117,&g_117,&g_117};
        union U3 **l_211 = &l_212[1];
        int l_213 = 1L;
        int i;
        (*l_211) = &g_117;
        (*g_176) = (*g_176);
        l_214 = (l_213 ^ p_18);
    }



    (*l_220) = func_49(l_215[2][2][2], (*g_176), l_216, ((*l_219) = func_54(((*l_218) = l_217))));

    p_17 = (*g_176);

    ;
    return l_221;

    }







static union U4 func_21(int * p_22, struct S0 p_23, int * p_24, int * const p_25, int ** const p_26)
{
    struct S0 **l_178 = (void*)0;
    struct S0 **l_179 = &g_152;
    const int *l_187 = (void*)0;
    const int **l_186 = &l_187;
    const int ***l_188 = (void*)0;
    int l_195[2];
    unsigned l_196[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
    union U4 l_205 = {0UL};
    int i;
    for (i = 0; i < 2; i++)
        l_195[i] = 1L;
    g_180 = ((*l_179) = &p_23);

    ;
    ;
    for (g_117.f0 = 12; (g_117.f0 <= 55); g_117.f0++)
    {
        union U6 *l_183[6] = {&g_146,&g_146,(void*)0,&g_146,&g_146,(void*)0};
        const int l_185 = (-10L);
        int i;
        g_184 = l_183[0];
        if (l_185)
            continue;
    }

        ;
    if (func_46((l_186 = l_186)))
    {
        unsigned short l_193[9][2][9] = {{{65530UL,1UL,65532UL,4UL,65532UL,1UL,65530UL,0x3073L,0x3F83L},{7UL,0x3F83L,65530UL,65535UL,7UL,4UL,0x3F83L,65527UL,1UL}},{{65530UL,4UL,1UL,7UL,0x862FL,65535UL,0x862FL,7UL,1UL},{0x862FL,0x862FL,65530UL,0x1AEAL,65527UL,0x3073L,1UL,0x3073L,65527UL}},{{65530UL,0x862FL,0x862FL,65530UL,0x1AEAL,65527UL,0x3073L,1UL,0x3073L},{1UL,4UL,65530UL,65530UL,4UL,1UL,7UL,0x862FL,65535UL}},{{0x3F83L,65527UL,1UL,0x1AEAL,0x1AEAL,1UL,65527UL,0x3F83L,4UL},{65535UL,65530UL,0x3F83L,7UL,65527UL,65527UL,7UL,0x3F83L,65530UL}},{{0x1AEAL,0x3F83L,65535UL,4UL,0x862FL,0x3073L,0x3073L,0x862FL,4UL},{0x1AEAL,65532UL,0x1AEAL,0x3073L,7UL,65535UL,1UL,1UL,65535UL}},{{65535UL,0x3F83L,0x1AEAL,0x3F83L,65535UL,4UL,0x862FL,0x3073L,0x3073L},{0x3F83L,65530UL,65535UL,0x3073L,65535UL,65530UL,0x3F83L,7UL,65527UL}},{{65527UL,65532UL,0x862FL,1UL,0x3F83L,1UL,0x862FL,65532UL,65527UL},{0x1AEAL,1UL,65527UL,0x3F83L,4UL,7UL,4UL,0x3F83L,65527UL}},{{4UL,4UL,0x1AEAL,65535UL,65532UL,65530UL,65527UL,65530UL,65532UL},{0x1AEAL,4UL,4UL,0x1AEAL,65535UL,65532UL,65530UL,65527UL,65530UL}},{{65527UL,1UL,0x1AEAL,0x1AEAL,1UL,65527UL,0x3F83L,4UL,7UL},{0x862FL,65532UL,65527UL,65535UL,65535UL,65527UL,65532UL,0x862FL,1UL}}};
        short *l_194[9][7] = {{&g_14.f0,&g_14.f0,&g_117.f1,&g_14.f0,&g_14.f0,&g_117.f1,&g_14.f0},{&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1},{&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0},{&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1},{&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0},{&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1},{&g_14.f0,&g_14.f0,&g_117.f1,&g_14.f0,&g_14.f0,&g_117.f1,&g_14.f0},{&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1,&g_117.f1},{&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0,&g_14.f0}};
        int i, j, k;
        (**g_176) = (((((l_196[5] = (l_195[1] = (p_23.f5 < (((safe_mod_func_int16_t_s_s((p_23.f1 >= (-1L)), (func_40((*g_135)) | 0x94L))) != ((p_23.f4 | (p_23.f0 || (safe_mod_func_uint16_t_u_u(((p_23.f4 < l_193[4][1][7]) <= l_193[3][1][6]), 0x08E5L)))) && (*g_33))) >= p_23.f3)))) >= g_28.f0) != (*p_25)) & 7L) & g_4);
    }
    else
    {
        unsigned l_203[4][7][6] = {{{6UL,0x230E5491L,0x90432EA9L,18446744073709551607UL,18446744073709551607UL,0x90432EA9L},{18446744073709551607UL,18446744073709551607UL,0x90432EA9L,0x230E5491L,6UL,6UL},{18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL,0x90432EA9L},{6UL,18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL},{6UL,0x230E5491L,0x90432EA9L,18446744073709551607UL,18446744073709551607UL,0x90432EA9L},{18446744073709551607UL,18446744073709551607UL,0x90432EA9L,0x230E5491L,6UL,6UL},{18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL,0x90432EA9L}},{{6UL,18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL},{6UL,0x230E5491L,0x90432EA9L,18446744073709551607UL,18446744073709551607UL,0x90432EA9L},{18446744073709551607UL,18446744073709551607UL,0x90432EA9L,0x230E5491L,6UL,6UL},{18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL,0x90432EA9L},{6UL,18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL},{6UL,0x230E5491L,0x90432EA9L,18446744073709551607UL,18446744073709551607UL,0x90432EA9L},{18446744073709551607UL,18446744073709551607UL,0x90432EA9L,0x230E5491L,6UL,6UL}},{{18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL,0x90432EA9L},{6UL,18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL},{6UL,0x230E5491L,0x90432EA9L,18446744073709551607UL,18446744073709551607UL,0x90432EA9L},{18446744073709551607UL,18446744073709551607UL,0x90432EA9L,0x230E5491L,6UL,6UL},{18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL,0x90432EA9L},{6UL,18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL},{6UL,0x230E5491L,0x90432EA9L,18446744073709551607UL,18446744073709551607UL,0x90432EA9L}},{{18446744073709551607UL,18446744073709551607UL,0x90432EA9L,0x230E5491L,6UL,6UL},{18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL,0x90432EA9L},{6UL,18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL},{6UL,0x230E5491L,0x90432EA9L,18446744073709551607UL,18446744073709551607UL,0x90432EA9L},{18446744073709551607UL,18446744073709551607UL,0x90432EA9L,0x230E5491L,6UL,6UL},{18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL,0x90432EA9L},{6UL,18446744073709551607UL,0x230E5491L,0x230E5491L,18446744073709551607UL,6UL}}};
        int i, j, k;
        for (g_109.f2 = 1; (g_109.f2 >= 0); g_109.f2 -= 1)
        {
            int i;
            (*p_25) = (l_195[g_109.f2] > (safe_sub_func_int8_t_s_s(0L, (0x4666L <= (safe_add_func_int16_t_s_s((g_109.f5 != (safe_rshift_func_int16_t_s_u((l_203[2][4][0] && ((((void*)0 != &g_109) || l_203[2][0][5]) ^ func_40(func_40(p_23.f1)))), g_28.f1))), l_203[2][3][1]))))));
        }
        (*p_25) = ((safe_unary_minus_func_int8_t_s((*g_33))) >= 0xE899L);
    }

        ;
    return l_205;



    }







static int * func_29(int * const p_30)
{
    const int *l_168[3];
    const int **l_169 = &l_168[2];
    int *l_170 = &g_2[0];
    int i;
    for (i = 0; i < 3; i++)
        l_168[i] = &g_5[0];
    (*l_169) = l_168[1];
    return l_170;


}







static int * func_31(char * p_32)
{
    short l_39 = 1L;
    const int **l_48 = (void*)0;
    char *l_162 = (void*)0;
    char *l_163 = &g_164;
    short l_165 = 6L;
    int l_166 = 0x0027B1E6L;
    int **l_167 = &g_74[4][1];
    l_166 = (safe_mod_func_int16_t_s_s((l_165 = (safe_rshift_func_int8_t_s_s(((l_39 < (l_39 < func_40((safe_rshift_func_int16_t_s_u(g_14.f3, (safe_rshift_func_int8_t_s_u(func_46(l_48), 2))))))) != g_5[0]), (safe_lshift_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(g_14.f6, ((*l_163) = l_39))), l_39))))), l_39));

        (*l_167) = &l_166;


    return &g_2[0];



}







static unsigned func_40(unsigned char p_41)
{
    int *l_157 = &g_68;
    (*l_157) = (-10L);
    return p_41;
}







static char func_46(const int ** p_47)
{
    int *l_116[1];
    char *l_118[5] = {&g_119,&g_119,&g_119,&g_119,&g_119};
    struct S0 *l_123[3];
    unsigned char **l_136 = &g_135;
    int i;
    for (i = 0; i < 1; i++)
        l_116[i] = &g_14.f5;
    for (i = 0; i < 3; i++)
        l_123[i] = &g_109;
    g_109 = func_49(func_54(p_47), l_116[0], g_117, l_118[4]);
    for (g_117.f3 = (-26); (g_117.f3 < 7); ++g_117.f3)
    {
        unsigned char *l_127[1];
        unsigned char **l_126 = &l_127[0];
        unsigned char ***l_128 = &l_126;
        unsigned char **l_133[10][5] = {{(void*)0,&l_127[0],&l_127[0],&l_127[0],&l_127[0]},{&l_127[0],(void*)0,(void*)0,(void*)0,&l_127[0]},{&l_127[0],(void*)0,&l_127[0],(void*)0,&l_127[0]},{(void*)0,(void*)0,(void*)0,&l_127[0],&l_127[0]},{&l_127[0],(void*)0,&l_127[0],&l_127[0],&l_127[0]},{(void*)0,&l_127[0],&l_127[0],(void*)0,&l_127[0]},{(void*)0,&l_127[0],&l_127[0],&l_127[0],&l_127[0]},{&l_127[0],(void*)0,&l_127[0],&l_127[0],&l_127[0]},{&l_127[0],&l_127[0],&l_127[0],(void*)0,&l_127[0]},{&l_127[0],(void*)0,&l_127[0],(void*)0,&l_127[0]}};
        int l_137 = 0L;
        union U5 *l_155 = (void*)0;
        int i, j;
        for (i = 0; i < 1; i++)
            l_127[i] = (void*)0;
        (*l_128) = l_126;
        l_137 = (safe_lshift_func_int16_t_s_s((safe_add_func_int16_t_s_s(g_117.f2, ((g_134 = l_133[8][1]) == l_136))), 11));

        ;
        for (g_109.f1 = 6; (g_109.f1 != 58); ++g_109.f1)
        {
            int *l_140 = (void*)0;
            struct S0 *l_150 = (void*)0;
            g_74[4][1] = l_140;
            for (l_137 = 10; (l_137 >= (-18)); l_137 = safe_sub_func_int32_t_s_s(l_137, 8))
            {
                for (g_119 = (-1); (g_119 == 15); g_119 = safe_add_func_uint32_t_u_u(g_119, 4))
                {
                    union U6 *l_145 = &g_146;
                    union U6 **l_147 = &l_145;
                    (*l_147) = l_145;
                    return (*g_33);


                }
                for (g_66 = 9; (g_66 > 24); g_66 = safe_add_func_uint32_t_u_u(g_66, 4))
                {
                    struct S0 **l_151[5][5] = {{(void*)0,(void*)0,&l_150,(void*)0,&l_123[1]},{(void*)0,(void*)0,&l_123[2],(void*)0,(void*)0},{&l_150,&l_123[2],(void*)0,&l_123[1],&l_123[2]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_123[1]},{(void*)0,(void*)0,&l_123[2],&l_123[2],&l_123[2]}};
                    int i, j;
                    (*l_128) = &g_135;

                    ;
                    g_152 = l_150;

                    ;
                    for (g_68 = (-9); (g_68 > (-16)); g_68--)
                    {
                        union U5 **l_156 = &l_155;
                        (*l_156) = l_155;
                    }
                }
            }
        }

        ;
    }

        return (*g_33);
}







static struct S0 func_49(char * p_50, int * p_51, union U3 p_52, char * p_53)
{
    int *l_120 = &g_109.f2;
    int **l_121 = &g_74[7][4];
    struct S0 l_122[2] = {{-1L,0x564559AEL,0x2F43CA99L,4294967287UL,0xC6L,65535UL},{-1L,0x564559AEL,0x2F43CA99L,4294967287UL,0xC6L,65535UL}};
    int i;
    (*l_121) = l_120;
    return l_122[1];
}







static char * func_54(const int ** p_55)
{
    char l_56 = 0x5CL;
    int l_64 = 1L;
    int *l_73 = &g_5[1];
    int l_112 = 1L;
    int l_115[8][6][2] = {{{(-1L),0xA92F95BFL},{(-1L),0xA92F95BFL},{(-1L),(-9L)},{0xE833F8FBL,(-1L)},{0x4B4543CBL,0x4B4543CBL},{(-9L),(-1L)}},{{0xBDE6C51AL,(-6L)},{0x84C5083FL,0xD279C397L},{0x126C6071L,(-6L)},{0xE833F8FBL,0x4B4543CBL},{0xE833F8FBL,(-6L)},{0x126C6071L,0xD279C397L}},{{(-6L),(-1L)},{(-9L),0xBDE6C51AL},{0xF7002FB2L,(-1L)},{(-1L),(-4L)},{(-1L),0xF7002FB2L},{0x4B4543CBL,1L}},{{0xBDE6C51AL,1L},{0x4B4543CBL,0xF7002FB2L},{(-1L),(-4L)},{(-1L),(-1L)},{0xF7002FB2L,0xBDE6C51AL},{(-9L),(-1L)}},{{(-6L),0xD279C397L},{0x126C6071L,(-6L)},{0xE833F8FBL,0x4B4543CBL},{0xE833F8FBL,(-6L)},{0x126C6071L,0xD279C397L},{(-6L),(-1L)}},{{(-9L),0xBDE6C51AL},{0xF7002FB2L,(-1L)},{(-1L),(-4L)},{(-1L),0xF7002FB2L},{0x4B4543CBL,1L},{0xBDE6C51AL,1L}},{{0x4B4543CBL,0xF7002FB2L},{(-1L),(-4L)},{(-1L),(-1L)},{0xF7002FB2L,0xBDE6C51AL},{(-9L),(-1L)},{(-6L),0xD279C397L}},{{0x126C6071L,(-6L)},{0xE833F8FBL,0x4B4543CBL},{0xE833F8FBL,(-6L)},{0x126C6071L,0xD279C397L},{(-6L),(-1L)},{(-9L),0xBDE6C51AL}}};
    int i, j, k;
    if ((g_14.f1 < l_56))
    {
        unsigned l_61[7] = {0x0517E40DL,0x4E384C83L,0x4E384C83L,0x0517E40DL,0x4E384C83L,0x4E384C83L,0x0517E40DL};
        int *l_69[4];
        int i;
        for (i = 0; i < 4; i++)
            l_69[i] = &g_68;
        for (l_56 = 0; (l_56 <= 0); l_56 += 1)
        {
            short *l_65[4][4] = {{&g_14.f0,&g_66,&g_14.f0,&g_66},{&g_14.f0,&g_66,&g_14.f0,&g_66},{&g_14.f0,&g_66,&g_14.f0,&g_66},{&g_14.f0,&g_66,&g_14.f0,&g_66}};
            int *l_67 = &g_68;
            int i, j;
            g_2[l_56] = g_2[l_56];
            g_2[l_56] = g_2[l_56];
            (*l_67) = (safe_add_func_uint16_t_u_u(((-5L) >= 65535UL), (safe_rshift_func_int16_t_s_s(((1UL == l_61[6]) < (safe_mod_func_int16_t_s_s(l_64, (g_66 = (g_2[l_56] = g_14.f2))))), g_14.f0))));
        }
        g_2[0] = l_61[1];
    }
    else
    {
        unsigned l_75 = 18446744073709551610UL;
        int *l_103 = &g_14.f5;
        struct S0 l_110[8][3][2] = {{{{-1L,4294967295UL,0x2407D1D3L,0xCE05B3D2L,249UL,0x08E3L},{-1L,0x7AF5BD10L,0x81031E14L,1UL,0x10L,1UL}},{{0x424E9327L,0x430796FFL,0x16C32C6DL,7UL,255UL,1UL},{0x938AAB9AL,4294967295UL,-1L,0x97142966L,8UL,0x0D98L}},{{-1L,0xFFD36A2BL,-1L,0x59850BAFL,0x8CL,65527UL},{-9L,4294967295UL,-6L,4294967295UL,1UL,65535UL}}},{{{-1L,0x7AF5BD10L,0x81031E14L,1UL,0x10L,1UL},{-9L,4294967295UL,-6L,4294967295UL,1UL,65535UL}},{{-1L,0xFFD36A2BL,-1L,0x59850BAFL,0x8CL,65527UL},{0x938AAB9AL,4294967295UL,-1L,0x97142966L,8UL,0x0D98L}},{{0x424E9327L,0x430796FFL,0x16C32C6DL,7UL,255UL,1UL},{-1L,0x7AF5BD10L,0x81031E14L,1UL,0x10L,1UL}}},{{{-1L,4294967295UL,0x2407D1D3L,0xCE05B3D2L,249UL,0x08E3L},{1L,0xC16D013FL,1L,0xFF7BA7B7L,2UL,0x2DCCL}},{{0xBD2DA306L,0UL,0x3CA981A8L,0x47936CBAL,0x69L,0x9548L},{3L,0xD89BD0A6L,1L,4294967286UL,0x6BL,0x5C88L}},{{1L,0x2621F7AEL,-1L,4294967290UL,0xC2L,0UL},{-1L,0xFFD36A2BL,-1L,0x59850BAFL,0x8CL,65527UL}}},{{{1L,4294967295UL,0x00CD1DBDL,0xCF972611L,0UL,65527UL},{1L,4294967295UL,0x00CD1DBDL,0xCF972611L,0UL,65527UL}},{{-7L,0x87148A67L,0L,0x492F91EAL,1UL,0UL},{0x424E9327L,0x430796FFL,0x16C32C6DL,7UL,255UL,1UL}},{{-7L,0xF82621F0L,-3L,0x92431699L,0UL,0xE01DL},{0xF6B34804L,0x9BF6F6D5L,-1L,6UL,0x58L,0x72B2L}}},{{{0x8980C300L,0xDDA28263L,0L,0UL,5UL,0x06EEL},{1L,1UL,0x62A55EFAL,0xD4CD4557L,1UL,65535UL}},{{0x1A4DE48EL,0x7F2D8A91L,0xCC145740L,4294967295UL,0x19L,0x01F8L},{0x8980C300L,0xDDA28263L,0L,0UL,5UL,0x06EEL}},{{1L,0xC16D013FL,1L,0xFF7BA7B7L,2UL,0x2DCCL},{1L,2UL,8L,4294967289UL,0x0DL,0x399BL}}},{{{1L,0xC16D013FL,1L,0xFF7BA7B7L,2UL,0x2DCCL},{0x8980C300L,0xDDA28263L,0L,0UL,5UL,0x06EEL}},{{0x1A4DE48EL,0x7F2D8A91L,0xCC145740L,4294967295UL,0x19L,0x01F8L},{1L,1UL,0x62A55EFAL,0xD4CD4557L,1UL,65535UL}},{{0x8980C300L,0xDDA28263L,0L,0UL,5UL,0x06EEL},{0xF6B34804L,0x9BF6F6D5L,-1L,6UL,0x58L,0x72B2L}}},{{{-7L,0xF82621F0L,-3L,0x92431699L,0UL,0xE01DL},{0x424E9327L,0x430796FFL,0x16C32C6DL,7UL,255UL,1UL}},{{-7L,0x87148A67L,0L,0x492F91EAL,1UL,0UL},{1L,4294967295UL,0x00CD1DBDL,0xCF972611L,0UL,65527UL}},{{1L,4294967295UL,0x00CD1DBDL,0xCF972611L,0UL,65527UL},{-1L,0xFFD36A2BL,-1L,0x59850BAFL,0x8CL,65527UL}}},{{{1L,0x2621F7AEL,-1L,4294967290UL,0xC2L,0UL},{3L,0xD89BD0A6L,1L,4294967286UL,0x6BL,0x5C88L}},{{0xBD2DA306L,0UL,0x3CA981A8L,0x47936CBAL,0x69L,0x9548L},{1L,0xC16D013FL,1L,0xFF7BA7B7L,2UL,0x2DCCL}},{{-1L,4294967295UL,0x2407D1D3L,0xCE05B3D2L,249UL,0x08E3L},{-1L,0x7AF5BD10L,0x81031E14L,1UL,0x10L,1UL}}}};
        char *l_111[7][4][6] = {{{&g_34,(void*)0,&g_34,&l_56,&g_34,&l_56},{(void*)0,&g_34,&g_34,&g_34,&g_34,&g_34},{&g_34,&g_34,&l_56,&g_34,&g_34,&l_56},{(void*)0,&l_56,&l_56,&l_56,&l_56,&l_56}},{{&g_34,(void*)0,&l_56,&g_34,&g_34,&l_56},{&g_34,&g_34,&l_56,&l_56,&g_34,&g_34},{&l_56,&g_34,&g_34,(void*)0,&g_34,&g_34},{&g_34,&g_34,&l_56,&g_34,&g_34,&g_34}},{{&g_34,&g_34,&g_34,(void*)0,(void*)0,(void*)0},{&g_34,&g_34,&g_34,&g_34,&l_56,(void*)0},{&g_34,(void*)0,&g_34,&g_34,(void*)0,&g_34},{&l_56,&l_56,&l_56,&l_56,(void*)0,&g_34}},{{&g_34,(void*)0,&g_34,&l_56,&l_56,&g_34},{&g_34,&g_34,&g_34,&l_56,(void*)0,&l_56},{&g_34,&g_34,&g_34,&l_56,&g_34,&g_34},{&l_56,&g_34,&g_34,&g_34,&g_34,&l_56}},{{&g_34,&g_34,&g_34,&g_34,&g_34,&g_34},{&g_34,&g_34,&g_34,(void*)0,&g_34,&g_34},{&g_34,&g_34,&l_56,&g_34,&g_34,&g_34},{&g_34,&g_34,&g_34,(void*)0,(void*)0,(void*)0}},{{&g_34,&g_34,&g_34,&g_34,&l_56,(void*)0},{&g_34,(void*)0,&g_34,&g_34,(void*)0,&g_34},{&l_56,&l_56,&g_34,(void*)0,&g_34,&g_34},{(void*)0,&l_56,&g_34,&g_34,&g_34,&g_34}},{{&l_56,&l_56,&g_34,&g_34,&l_56,(void*)0},{(void*)0,&g_34,&g_34,(void*)0,&g_34,&g_34},{&g_34,(void*)0,&g_34,&l_56,&l_56,(void*)0},{&g_34,&l_56,&g_34,&g_34,&l_56,&g_34}}};
        int *l_113 = (void*)0;
        int *l_114[10] = {&g_109.f2,&g_5[0],&g_109.f2,&g_5[0],&g_109.f2,&g_5[0],&g_109.f2,&g_5[0],&g_109.f2,&g_5[0]};
        int i, j, k;
        if (((safe_rshift_func_uint16_t_u_s((g_28.f1 > ((*g_33) = g_72)), (((&g_4 != (void*)0) < 0x1CL) > ((g_74[4][1] = l_73) != (void*)0)))) || (l_75 <= (*l_73))))
        {
            unsigned l_82 = 0xE3D07904L;
            unsigned l_86 = 0xE6A82D78L;
            int l_96 = 0x78237234L;
            unsigned char *l_101 = &g_28.f4;
            int *l_102 = &g_68;
            if (((*l_73) & ((*l_73) > l_75)))
            {
                struct S0 l_76 = {0x5200CC90L,4UL,-1L,0x9A802726L,252UL,0UL};
                struct S0 *l_77 = &l_76;
                (*l_77) = l_76;
            }
            else
            {
                for (g_68 = 0; (g_68 <= 4); g_68 += 1)
                {
                    int *l_83 = &g_2[0];
                    short *l_84 = (void*)0;
                    short *l_85 = &g_66;
                    unsigned char *l_95 = &g_72;
                    int **l_97 = &l_73;
                    l_96 = (safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s((((0x7A00L <= ((*l_85) = (l_82 | ((*l_83) = 0x26E4AE47L)))) >= (((*l_73) & l_86) <= g_28.f5)) ^ (safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(((l_82 ^ l_75) <= (safe_add_func_uint32_t_u_u((safe_add_func_uint8_t_u_u(((*l_95) = g_4), l_75)), l_75))), 5)), 2))), (-9L))), g_14.f3));
                    (*l_97) = &g_4;

                    ;
                    l_96 = (((*l_85) = ((!(*l_83)) >= l_75)) >= g_28.f3);
                    for (g_66 = 0; (g_66 <= 0); g_66 += 1)
                    {
                        return &g_34;


                    }
                }

                ;
            }

            ;
            for (g_72 = (-11); (g_72 <= 21); g_72++)
            {
                char l_100 = 0L;
                int **l_104 = &l_73;
                l_100 = l_75;
                l_96 = (&g_72 == l_101);
                l_102 = &l_96;

                ;
                (*l_104) = l_103;

                ;
            }

            ;
            ;
        }
        else
        {
            struct S0 *l_108[10] = {&g_28,&g_28,(void*)0,&g_109,(void*)0,&g_28,&g_28,(void*)0,&g_109,(void*)0};
            int i;
            for (l_64 = 19; (l_64 > 8); l_64 = safe_sub_func_int32_t_s_s(l_64, 8))
            {
                int *l_107 = &g_68;
                (*l_107) = 1L;
                if ((*l_73))
                    continue;
            }
            l_110[4][0][1] = g_28;
            return &g_34;


        }

        ;
        l_115[6][3][1] = (l_112 = 0x39BA748EL);
    }

    ;
    return &g_34;


}





int main (int argc, char* argv[])
{
    int i, j;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_5[i], "g_5[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_14.f0, "g_14.f0", print_hash_value);
    transparent_crc(g_14.f1, "g_14.f1", print_hash_value);
    transparent_crc(g_14.f2, "g_14.f2", print_hash_value);
    transparent_crc(g_14.f3, "g_14.f3", print_hash_value);
    transparent_crc(g_14.f4, "g_14.f4", print_hash_value);
    transparent_crc(g_14.f5, "g_14.f5", print_hash_value);
    transparent_crc(g_14.f6, "g_14.f6", print_hash_value);
    transparent_crc(g_28.f0, "g_28.f0", print_hash_value);
    transparent_crc(g_28.f1, "g_28.f1", print_hash_value);
    transparent_crc(g_28.f2, "g_28.f2", print_hash_value);
    transparent_crc(g_28.f3, "g_28.f3", print_hash_value);
    transparent_crc(g_28.f4, "g_28.f4", print_hash_value);
    transparent_crc(g_28.f5, "g_28.f5", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_66, "g_66", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_109.f0, "g_109.f0", print_hash_value);
    transparent_crc(g_109.f1, "g_109.f1", print_hash_value);
    transparent_crc(g_109.f2, "g_109.f2", print_hash_value);
    transparent_crc(g_109.f3, "g_109.f3", print_hash_value);
    transparent_crc(g_109.f4, "g_109.f4", print_hash_value);
    transparent_crc(g_109.f5, "g_109.f5", print_hash_value);
    transparent_crc(g_117.f0, "g_117.f0", print_hash_value);
    transparent_crc(g_117.f1, "g_117.f1", print_hash_value);
    transparent_crc(g_117.f2, "g_117.f2", print_hash_value);
    transparent_crc(g_117.f3, "g_117.f3", print_hash_value);
    transparent_crc(g_119, "g_119", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_227.f0, "g_227.f0", print_hash_value);
    transparent_crc(g_227.f2, "g_227.f2", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
