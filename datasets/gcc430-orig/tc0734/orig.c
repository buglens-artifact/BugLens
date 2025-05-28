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



static volatile unsigned char g_5 = 0x73L;
static unsigned short g_6 = 0x07E6L;
static int g_16 = 0xF97812A3L;
static int g_43[9] = {0L,0L,0L,0L,0L,0L,0L,0L,0L};
static int g_59 = 0x25CE5ABAL;
static int *g_70[10][2][5] = {{{&g_59,&g_43[1],&g_59,&g_43[1],&g_59},{(void*)0,(void*)0,&g_43[5],&g_43[5],(void*)0}},{{(void*)0,&g_43[1],(void*)0,&g_43[1],(void*)0},{(void*)0,&g_43[5],&g_43[5],(void*)0,(void*)0}},{{&g_59,&g_43[1],&g_59,&g_43[1],&g_59},{(void*)0,(void*)0,&g_43[5],&g_43[5],(void*)0}},{{(void*)0,&g_43[1],(void*)0,&g_43[1],(void*)0},{(void*)0,&g_43[5],&g_43[5],(void*)0,(void*)0}},{{&g_59,&g_43[1],&g_59,&g_43[1],&g_59},{(void*)0,(void*)0,&g_43[5],&g_43[5],(void*)0}},{{(void*)0,&g_43[1],(void*)0,&g_43[1],(void*)0},{(void*)0,&g_43[5],&g_43[5],(void*)0,(void*)0}},{{&g_59,&g_43[1],&g_59,&g_43[1],&g_59},{(void*)0,(void*)0,&g_43[5],&g_43[5],(void*)0}},{{(void*)0,&g_43[1],(void*)0,&g_43[1],(void*)0},{(void*)0,&g_43[5],&g_43[5],(void*)0,(void*)0}},{{&g_59,&g_43[1],&g_59,&g_43[1],&g_59},{(void*)0,(void*)0,&g_43[5],&g_43[5],(void*)0}},{{(void*)0,&g_43[1],(void*)0,&g_43[1],(void*)0},{(void*)0,&g_43[5],&g_43[5],(void*)0,(void*)0}}};
static unsigned g_72 = 0x59A03C9DL;
static unsigned short g_74 = 0xB0B6L;
static unsigned g_91 = 0x61642E2BL;
static volatile int * volatile * volatile *g_111 = (void*)0;
static volatile int * volatile * volatile **g_110 = &g_111;
static char g_140[6][2] = {{0x6BL,(-5L)},{0x6BL,(-5L)},{0x6BL,(-5L)},{0x6BL,(-5L)},{0x6BL,(-5L)},{0x6BL,(-5L)}};
static char g_164 = 0xE6L;
static int g_170 = 0xE81BF0A7L;
static int *g_169 = &g_170;
static short *g_176 = (void*)0;
static unsigned short g_183[4][10] = {{0UL,65533UL,0x9AD9L,65533UL,0UL,0UL,65533UL,0x9AD9L,65533UL,0UL},{0UL,65533UL,0x9AD9L,65533UL,0UL,0UL,65533UL,0x9AD9L,65533UL,0UL},{0x0070L,0x9AD9L,0UL,0x9AD9L,0x0070L,0x0070L,0x9AD9L,0UL,0x9AD9L,0x0070L},{0x0070L,0x9AD9L,0UL,0x9AD9L,0x0070L,0x0070L,0x9AD9L,0UL,0x9AD9L,0x0070L}};
static unsigned char g_206 = 0xE1L;
static unsigned *g_243 = (void*)0;
static unsigned **g_242 = &g_243;
static unsigned ***g_241 = &g_242;
static int **g_264[6][9][4] = {{{&g_169,&g_70[5][0][3],&g_169,&g_70[1][1][2]},{&g_169,&g_70[1][1][2],&g_169,&g_70[5][0][3]},{&g_169,&g_169,&g_70[6][1][0],&g_169},{&g_70[9][1][4],&g_70[2][0][1],&g_169,&g_169},{&g_70[3][0][4],&g_70[7][0][0],&g_169,(void*)0},{&g_70[9][1][4],&g_70[1][1][2],&g_70[6][1][0],&g_70[7][0][0]},{&g_169,&g_70[0][0][3],&g_169,&g_169},{&g_169,&g_169,&g_169,&g_70[0][0][3]},{&g_169,&g_70[7][0][0],&g_70[6][1][0],&g_70[1][1][2]}},{{&g_70[9][1][4],(void*)0,&g_169,&g_70[7][0][0]},{&g_70[3][0][4],&g_169,&g_169,&g_70[2][0][1]},{&g_70[9][1][4],&g_169,&g_70[6][1][0],&g_169},{&g_169,&g_70[5][0][3],&g_169,&g_70[1][1][2]},{&g_169,&g_70[1][1][2],&g_169,&g_70[5][0][3]},{&g_169,&g_169,&g_70[6][1][0],&g_169},{&g_70[9][1][4],&g_70[2][0][1],&g_169,&g_169},{&g_70[3][0][4],&g_70[7][0][0],&g_169,(void*)0},{&g_70[9][1][4],&g_70[1][1][2],&g_70[6][1][0],&g_70[7][0][0]}},{{&g_169,&g_70[0][0][3],&g_169,&g_169},{&g_70[6][1][0],&g_70[2][0][1],&g_70[6][1][0],&g_70[5][0][3]},{&g_70[3][0][4],&g_70[5][0][3],&g_70[9][1][4],(void*)0},{&g_169,&g_169,&g_70[6][1][0],&g_70[5][0][3]},{&g_70[8][1][0],&g_70[0][0][3],&g_70[6][1][0],&g_70[5][0][3]},{&g_169,&g_70[2][0][1],&g_70[9][1][4],&g_70[0][0][3]},{&g_70[3][0][4],(void*)0,&g_70[6][1][0],(void*)0},{&g_70[6][1][0],(void*)0,&g_70[6][1][0],(void*)0},{&g_70[3][0][4],&g_70[0][0][3],&g_70[9][1][4],&g_70[2][0][1]}},{{&g_169,&g_70[5][0][3],&g_70[6][1][0],&g_70[0][0][3]},{&g_70[8][1][0],&g_70[5][0][3],&g_70[6][1][0],&g_169},{&g_169,(void*)0,&g_70[9][1][4],&g_70[5][0][3]},{&g_70[3][0][4],&g_70[5][0][3],&g_70[6][1][0],&g_70[2][0][1]},{&g_70[6][1][0],&g_70[2][0][1],&g_70[6][1][0],&g_70[5][0][3]},{&g_70[3][0][4],&g_70[5][0][3],&g_70[9][1][4],(void*)0},{&g_169,&g_169,&g_70[6][1][0],&g_70[5][0][3]},{&g_70[8][1][0],&g_70[0][0][3],&g_70[6][1][0],&g_70[5][0][3]},{&g_169,&g_70[2][0][1],&g_70[9][1][4],&g_70[0][0][3]}},{{&g_70[3][0][4],(void*)0,&g_70[6][1][0],(void*)0},{&g_70[6][1][0],(void*)0,&g_70[6][1][0],(void*)0},{&g_70[3][0][4],&g_70[0][0][3],&g_70[9][1][4],&g_70[2][0][1]},{&g_169,&g_70[5][0][3],&g_70[6][1][0],&g_70[0][0][3]},{&g_70[8][1][0],&g_70[5][0][3],&g_70[6][1][0],&g_169},{&g_169,(void*)0,&g_70[9][1][4],&g_70[5][0][3]},{&g_70[3][0][4],&g_70[5][0][3],&g_70[6][1][0],&g_70[2][0][1]},{&g_70[6][1][0],&g_70[2][0][1],&g_70[6][1][0],&g_70[5][0][3]},{&g_70[3][0][4],&g_70[5][0][3],&g_70[9][1][4],(void*)0}},{{&g_169,&g_169,&g_70[6][1][0],&g_70[5][0][3]},{&g_70[8][1][0],&g_70[0][0][3],&g_70[6][1][0],&g_70[5][0][3]},{&g_169,&g_70[2][0][1],&g_70[9][1][4],&g_70[0][0][3]},{&g_70[3][0][4],(void*)0,&g_70[6][1][0],(void*)0},{&g_70[6][1][0],(void*)0,&g_70[6][1][0],(void*)0},{&g_70[3][0][4],&g_70[0][0][3],&g_70[9][1][4],&g_70[2][0][1]},{&g_169,&g_70[5][0][3],&g_70[6][1][0],&g_70[0][0][3]},{&g_70[8][1][0],&g_70[5][0][3],&g_70[6][1][0],&g_169},{&g_169,(void*)0,&g_70[9][1][4],&g_70[5][0][3]}}};
static int ***g_263 = &g_264[5][6][3];
static int ****g_262 = &g_263;
static unsigned g_270 = 0UL;
static unsigned short g_285 = 65529UL;
static int g_387 = 0x5DB7F7D2L;
static char g_423[4] = {0x7BL,0x7BL,0x7BL,0x7BL};
static char g_425 = (-4L);
static short g_466 = 1L;
static int g_471 = 8L;
static char g_502 = 0x64L;
static unsigned char g_504 = 0x21L;
static volatile unsigned short *g_531 = (void*)0;
static volatile unsigned short * volatile *g_530 = &g_531;
static int ** volatile g_603[9] = {&g_169,&g_70[8][0][0],&g_169,&g_169,&g_70[8][0][0],&g_169,&g_169,&g_70[8][0][0],&g_169};
static unsigned short **g_609 = (void*)0;
static unsigned g_628 = 0UL;
static char * volatile g_674[3] = {&g_502,&g_502,&g_502};
static char * volatile * volatile g_673 = &g_674[1];
static char g_694 = 0x42L;
static unsigned short *g_696 = &g_74;
static unsigned short **g_695 = &g_696;
static volatile int g_704 = 1L;
static volatile int * volatile g_703[5][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0},{(void*)0,(void*)0}};
static volatile int * volatile * volatile g_705 = (void*)0;
static volatile int * volatile * volatile g_706 = &g_703[1][1];
static volatile unsigned g_714[3][1][3] = {{{0xC9F20197L,0x092B526DL,0xC9F20197L}},{{0xB792E0F6L,0xB792E0F6L,0xB792E0F6L}},{{0xC9F20197L,0x092B526DL,0xC9F20197L}}};
static int * volatile g_784 = &g_43[5];
static int *g_786 = &g_43[0];
static volatile int * volatile * volatile g_819 = (void*)0;



static unsigned char func_1(void);
static unsigned func_8(unsigned p_9, int p_10, short p_11);
static short func_12(int p_13, unsigned p_14, unsigned p_15);
static char func_21(int p_22, unsigned short p_23, unsigned p_24, unsigned short p_25, int p_26);
static unsigned char func_31(unsigned p_32, unsigned short p_33, unsigned p_34, char p_35);
static unsigned short func_38(int p_39, int p_40);
static short func_49(int * p_50);
static int * func_51(int * p_52, int * p_53, char p_54);
static int * func_55(int * p_56);
static int * func_60(unsigned char p_61);
static unsigned char func_1(void)
{
    char l_2 = (-1L);
    unsigned char l_600[1];
    unsigned short *l_611[6][9][4] = {{{(void*)0,(void*)0,(void*)0,&g_285},{(void*)0,&g_183[2][3],(void*)0,&g_6},{&g_74,(void*)0,&g_183[2][3],&g_183[2][3]},{&g_183[1][6],(void*)0,&g_183[2][3],&g_183[2][3]},{&g_6,&g_74,&g_183[1][1],&g_183[1][1]},{&g_6,&g_6,&g_183[1][6],&g_74},{&g_183[1][6],&g_74,&g_285,&g_285},{&g_285,&g_183[2][4],&g_6,&g_285},{(void*)0,&g_183[2][4],(void*)0,&g_285}},{{&g_183[2][4],&g_74,&g_285,&g_74},{&g_183[2][3],&g_6,&g_74,&g_183[1][1]},{&g_285,&g_74,(void*)0,&g_183[2][3]},{&g_183[1][1],(void*)0,&g_183[2][4],&g_74},{&g_183[1][1],&g_183[1][6],(void*)0,(void*)0},{&g_285,&g_74,&g_74,&g_285},{&g_183[2][3],&g_285,&g_285,&g_6},{&g_183[2][4],(void*)0,(void*)0,&g_6},{(void*)0,&g_183[2][3],&g_6,&g_6}},{{&g_285,(void*)0,&g_285,&g_6},{&g_183[1][6],&g_285,&g_183[1][6],&g_285},{&g_6,&g_74,&g_183[1][1],(void*)0},{&g_6,&g_183[1][6],&g_6,&g_74},{&g_74,(void*)0,&g_6,&g_183[2][3]},{&g_6,&g_74,&g_183[1][1],&g_183[1][1]},{&g_6,&g_6,&g_183[1][6],&g_74},{&g_183[1][6],&g_74,&g_285,&g_285},{&g_285,&g_183[2][4],&g_6,&g_285}},{{(void*)0,&g_183[2][4],(void*)0,(void*)0},{&g_183[1][6],&g_183[2][3],(void*)0,&g_183[2][3]},{&g_6,&g_285,(void*)0,&g_285},{(void*)0,&g_74,&g_74,&g_6},{&g_285,&g_74,&g_183[1][6],(void*)0},{&g_285,&g_6,&g_74,&g_183[1][1]},{(void*)0,(void*)0,(void*)0,(void*)0},{&g_6,(void*)0,(void*)0,(void*)0},{&g_183[1][6],&g_183[1][1],(void*)0,&g_183[2][3]}},{{&g_183[2][4],&g_6,&g_285,&g_183[2][3]},{(void*)0,&g_183[1][1],&g_285,(void*)0},{&g_6,(void*)0,&g_6,(void*)0},{&g_285,(void*)0,&g_285,&g_183[1][1]},{&g_183[2][3],&g_6,(void*)0,(void*)0},{&g_183[2][3],&g_74,(void*)0,&g_6},{&g_183[2][3],&g_74,&g_285,&g_285},{&g_285,&g_285,&g_6,&g_183[2][3]},{&g_6,&g_183[2][3],&g_285,(void*)0}},{{(void*)0,&g_183[1][6],&g_285,&g_285},{&g_183[2][4],&g_183[1][6],(void*)0,(void*)0},{&g_183[1][6],&g_183[2][3],(void*)0,&g_183[2][3]},{&g_6,&g_285,(void*)0,&g_285},{(void*)0,&g_74,&g_74,&g_6},{&g_285,&g_74,&g_183[1][6],(void*)0},{&g_285,&g_6,&g_6,&g_285},{&g_183[1][6],&g_6,&g_6,&g_183[1][6]},{(void*)0,(void*)0,&g_183[1][6],&g_183[1][1]}}};
    unsigned short **l_610 = &l_611[3][0][1];
    int l_613 = 1L;
    unsigned short **l_622[2];
    unsigned l_627 = 0x934E874AL;
    char l_629 = 0x77L;
    int l_669[7][10] = {{(-4L),1L,0x403CE548L,0xE1A3B7ACL,(-3L),(-1L),0xEEB8E14CL,(-1L),0x7B624FFAL,0x387F84CEL},{0x387F84CEL,(-4L),0x7B624FFAL,0x403CE548L,(-1L),0xF822BE27L,6L,(-6L),6L,0xF822BE27L},{0xEEB8E14CL,(-3L),1L,(-3L),0xEEB8E14CL,(-1L),8L,0xF822BE27L,1L,0xE1A3B7ACL},{0L,8L,0x7EE09E97L,0xBC907945L,8L,1L,(-1L),1L,(-4L),0xE1A3B7ACL},{(-1L),0xBC907945L,6L,(-8L),0xEEB8E14CL,0x7ACF1601L,0xF822BE27L,0x7EE09E97L,0x7EE09E97L,0xF822BE27L},{0xBC907945L,(-1L),0xE596BC4FL,0xE596BC4FL,(-1L),0xBC907945L,(-1L),(-1L),1L,0x387F84CEL},{1L,0x9ED7997CL,0L,0x03FFC86FL,(-3L),0x7B624FFAL,1L,0xE1A3B7ACL,0L,0x7ACF1601L}};
    int l_687[6][8][5] = {{{(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L},{(-4L),(-4L),4L,(-4L),(-4L)},{0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L)},{(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L},{(-4L),(-4L),4L,(-4L),(-4L)},{0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L)},{(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L},{(-4L),(-4L),4L,(-4L),(-4L)}},{{0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L)},{(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L},{(-4L),(-4L),4L,(-4L),(-4L)},{0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L)},{(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L},{(-4L),(-4L),4L,(-4L),(-4L)},{0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L)},{(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L}},{{(-4L),(-4L),4L,(-4L),(-4L)},{0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L)},{(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L},{(-4L),(-4L),4L,(-4L),(-4L)},{0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L)},{(-4L),0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L},{(-4L),0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L},{4L,0x4A0F57F2L,4L,4L,0x4A0F57F2L}},{{0x4A0F57F2L,4L,4L,0x4A0F57F2L,4L},{0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L},{4L,0x4A0F57F2L,4L,4L,0x4A0F57F2L},{0x4A0F57F2L,4L,4L,0x4A0F57F2L,4L},{0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L},{4L,0x4A0F57F2L,4L,4L,0x4A0F57F2L},{0x4A0F57F2L,4L,4L,0x4A0F57F2L,4L},{0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L}},{{4L,0x4A0F57F2L,4L,4L,0x4A0F57F2L},{0x4A0F57F2L,4L,4L,0x4A0F57F2L,4L},{0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L},{4L,0x4A0F57F2L,4L,4L,0x4A0F57F2L},{0x4A0F57F2L,4L,4L,0x4A0F57F2L,4L},{0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L},{4L,0x4A0F57F2L,4L,4L,0x4A0F57F2L},{0x4A0F57F2L,4L,4L,0x4A0F57F2L,4L}},{{0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L},{4L,0x4A0F57F2L,4L,4L,0x4A0F57F2L},{0x4A0F57F2L,4L,4L,0x4A0F57F2L,4L},{0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L},{4L,0x4A0F57F2L,4L,4L,0x4A0F57F2L},{0x4A0F57F2L,4L,4L,0x4A0F57F2L,4L},{0x4A0F57F2L,0x4A0F57F2L,(-4L),0x4A0F57F2L,0x4A0F57F2L},{4L,0x4A0F57F2L,4L,4L,0x4A0F57F2L}}};
    int ***l_691 = &g_264[2][4][3];
    int **l_721 = &g_70[1][0][1];
    unsigned short l_733 = 65527UL;
    unsigned l_817 = 0x4E0083F9L;
    int **l_822 = &g_169;
    short l_827[10] = {(-9L),0x0BC7L,0x0BC7L,(-9L),0x0BC7L,0x0BC7L,(-9L),0x0BC7L,0x0BC7L,(-9L)};
    unsigned *l_828 = &g_628;
    short *l_829 = &g_466;
    int l_830 = 2L;
    unsigned char *l_831 = &l_600[0];
    unsigned l_832 = 0x3696C5B9L;
    int *l_833[5][8] = {{&l_613,&g_471,&l_613,&l_669[1][8],&l_669[1][8],&l_613,&g_471,&l_613},{&g_471,&l_669[1][8],&g_43[5],&l_669[1][8],&g_471,&g_471,&l_669[1][8],&g_43[5]},{&g_471,&g_471,&l_669[1][8],&g_43[5],&l_669[1][8],&g_471,&g_471,&l_669[1][8]},{&l_613,&l_669[1][8],&l_669[1][8],&l_613,&g_471,&l_613,&l_669[1][8],&l_669[1][8]},{&l_669[1][8],&g_471,&g_43[5],&g_43[5],&g_471,&l_669[1][8],&g_471,&g_43[5]}};
    unsigned l_834 = 0x1982CCB0L;
    int l_835 = 0x5B6FCCADL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_600[i] = 7UL;
    for (i = 0; i < 2; i++)
        l_622[i] = &l_611[3][0][1];
    if (((l_2 , (safe_mul_func_uint8_t_u_u(((l_2 , ((((g_5 > g_6) > l_2) ^ (safe_unary_minus_func_uint32_t_u(func_8(g_6, (func_12(l_2, g_16, g_16) ^ 65535UL), l_600[0])))) | g_466)) | l_600[0]), l_600[0]))) , l_600[0]))
    {
        int *l_602 = &g_387;
        int **l_604 = &g_70[5][0][3];
        unsigned char *l_612 = &l_600[0];
        char l_670 = 0L;
        int ***l_719 = (void*)0;
        int l_728 = (-1L);
        int *l_737 = &g_59;
        int *l_739 = &g_59;
        unsigned l_752 = 7UL;
        unsigned short ***l_759 = (void*)0;
        unsigned **l_779 = &g_243;
        unsigned short l_782[8] = {0xBDA1L,0xBDA1L,0xBDA1L,0xBDA1L,0xBDA1L,0xBDA1L,0xBDA1L,0xBDA1L};
        unsigned char l_813[7] = {0UL,2UL,0UL,0UL,0UL,0x15L,0x15L};
        unsigned l_816 = 0x9C935FF3L;
        int i;
        (*l_604) = l_602;
        if ((safe_add_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((l_613 = ((*l_612) = ((l_600[0] >= ((g_285 >= (l_600[0] >= l_600[0])) & (((((void*)0 != (*g_241)) <= g_502) || (((l_610 = g_609) == (void*)0) < g_502)) < l_600[0]))) & 0xE1L))), g_466)), l_2)))
        {
            short l_616 = 0L;
            unsigned short **l_623[8] = {&l_611[1][2][1],&l_611[1][2][1],&l_611[3][0][1],&l_611[1][2][1],&l_611[1][2][1],&l_611[3][0][1],&l_611[1][2][1],&l_611[1][2][1]};
            unsigned short ***l_624 = (void*)0;
            unsigned short ***l_625[10][4][6] = {{{(void*)0,&l_622[1],&l_610,&l_622[1],(void*)0,&l_622[0]},{&l_622[0],&l_622[1],&l_623[1],(void*)0,&l_622[1],(void*)0},{(void*)0,&l_622[0],(void*)0,&l_622[1],&l_610,(void*)0},{&l_623[2],&l_622[0],&l_623[1],&l_623[3],&l_623[1],&l_622[0]}},{{&l_610,&l_622[0],&l_610,&l_623[3],&l_622[0],&l_622[1]},{&l_623[2],&l_622[1],&l_623[5],&l_622[1],&l_623[2],&l_622[0]},{(void*)0,&l_622[1],&l_610,(void*)0,&l_622[0],(void*)0},{&l_622[0],&l_622[0],&l_622[0],&l_622[1],&l_623[1],(void*)0}},{{(void*)0,&l_622[0],&l_610,&l_623[3],&l_610,&l_622[0]},{&l_623[1],&l_622[0],&l_623[5],&l_623[3],&l_622[1],&l_622[1]},{(void*)0,&l_622[1],&l_610,&l_622[1],(void*)0,&l_622[0]},{&l_622[0],&l_622[1],&l_623[1],(void*)0,&l_622[1],(void*)0}},{{(void*)0,&l_622[0],(void*)0,&l_622[1],&l_610,(void*)0},{&l_623[2],&l_622[0],&l_623[1],&l_623[3],&l_623[1],&l_622[0]},{&l_610,&l_622[1],(void*)0,&l_622[0],&l_610,&l_623[3]},{&l_622[0],&l_623[3],&l_623[2],&l_623[3],&l_622[0],(void*)0}},{{&l_622[0],&l_623[3],&l_610,&l_622[0],&l_610,&l_622[0]},{&l_622[1],&l_622[1],&l_622[1],&l_623[3],&l_623[5],&l_622[0]},{(void*)0,(void*)0,&l_610,&l_622[0],&l_610,(void*)0},{&l_623[5],&l_622[1],&l_623[2],&l_622[0],&l_623[1],&l_623[3]}},{{(void*)0,&l_623[3],(void*)0,&l_623[3],(void*)0,(void*)0},{&l_622[1],&l_623[3],&l_623[5],&l_622[0],&l_623[1],&l_622[0]},{&l_622[0],&l_622[1],&l_622[0],&l_623[3],&l_610,&l_622[0]},{&l_622[0],(void*)0,&l_623[5],&l_622[0],&l_623[5],(void*)0}},{{&l_610,&l_622[1],(void*)0,&l_622[0],&l_610,&l_623[3]},{&l_622[0],&l_623[3],&l_623[2],&l_623[3],&l_622[0],(void*)0},{&l_622[0],&l_623[3],&l_610,&l_622[0],&l_610,&l_622[0]},{&l_622[1],&l_622[1],&l_622[1],&l_623[3],&l_623[5],&l_622[0]}},{{(void*)0,(void*)0,&l_610,&l_622[0],&l_610,(void*)0},{&l_623[5],&l_622[1],&l_623[2],&l_622[0],&l_623[1],(void*)0},{&l_610,(void*)0,&l_622[0],(void*)0,&l_610,&l_622[1]},{&l_623[5],(void*)0,&l_622[0],&l_623[3],&l_623[2],&l_623[3]}},{{&l_610,&l_622[0],&l_610,(void*)0,(void*)0,&l_623[3]},{&l_623[1],&l_622[1],&l_622[0],&l_622[0],&l_622[0],&l_622[1]},{(void*)0,&l_622[0],&l_622[0],&l_622[0],(void*)0,(void*)0},{&l_623[1],(void*)0,&l_622[1],(void*)0,&l_623[1],&l_622[1]}},{{&l_610,(void*)0,(void*)0,&l_623[3],(void*)0,&l_623[3]},{&l_623[5],&l_622[0],&l_623[5],(void*)0,&l_622[0],&l_623[3]},{&l_610,&l_622[1],(void*)0,&l_622[0],(void*)0,&l_622[1]},{&l_622[0],&l_622[0],&l_622[1],&l_622[0],&l_623[2],(void*)0}}};
            unsigned *l_626 = &g_72;
            int l_630 = (-1L);
            int ***l_671[4];
            unsigned l_735 = 1UL;
            int i, j, k;
            for (i = 0; i < 4; i++)
                l_671[i] = &l_604;
            l_630 = (safe_add_func_uint16_t_u_u((*l_602), l_629));
            for (g_504 = 0; (g_504 > 25); g_504 = safe_add_func_uint8_t_u_u(g_504, 3))
            {
                for (l_616 = 0; (l_616 <= 27); l_616 = safe_add_func_int8_t_s_s(l_616, 4))
                {
                    (*l_602) ^= 0L;
                    for (g_628 = (-14); (g_628 < 27); g_628 = safe_add_func_int8_t_s_s(g_628, 8))
                    {
                        return (*l_602);
                    }
                }
            }
            (*l_602) = l_627;
            for (g_502 = 0; (g_502 > (-18)); g_502--)
            {
                unsigned char l_639[10][5];
                int l_667 = 0x57849975L;
                unsigned l_707 = 8UL;
                char l_712[4] = {0x06L,0x06L,0x06L,0x06L};
                unsigned *l_713 = &l_707;
                unsigned short l_715 = 65527UL;
                char *l_716[2];
                int l_734 = 0L;
                int i, j;
                for (i = 0; i < 10; i++)
                {
                    for (j = 0; j < 5; j++)
                        l_639[i][j] = 0UL;
                }
                for (i = 0; i < 2; i++)
                    l_716[i] = &g_164;
                for (g_16 = 3; (g_16 >= 0); g_16 -= 1)
                {
                    unsigned char l_652 = 7UL;
                    char *l_655 = &g_140[2][0];
                    unsigned *l_656 = &g_270;
                    char *l_665 = &g_425;
                    char *l_666[5][2][10] = {{{&g_164,(void*)0,(void*)0,&l_2,&g_423[0],&l_629,(void*)0,&l_2,&g_423[0],&l_2},{&l_2,&l_629,&l_2,(void*)0,&l_629,&l_2,&g_164,&l_2,&l_2,&g_164}},{{&l_629,(void*)0,&l_2,&l_2,(void*)0,&l_629,&g_502,&g_423[0],&g_423[0],&l_629},{&l_629,&g_423[0],&g_423[0],&g_164,&l_629,&l_2,&g_164,&g_423[0],&g_164,&g_423[0]}},{{&l_2,&g_423[3],&l_629,(void*)0,&g_423[0],&l_2,&g_423[0],&g_423[0],&l_2,&g_423[0]},{&l_2,&g_423[0],&g_423[0],&l_2,&g_423[0],&g_423[3],&l_2,&l_629,&l_2,&g_423[3]}},{{&g_164,&g_164,&l_629,&g_164,&g_164,&l_629,&l_2,&g_423[0],(void*)0,&g_423[1]},{(void*)0,&l_2,&l_629,(void*)0,&g_423[3],&l_629,&g_423[0],&l_2,(void*)0,&g_423[1]}},{{&l_629,(void*)0,&l_2,&g_423[2],&g_164,&l_2,&g_502,(void*)0,&l_2,&g_423[3]},{&l_2,&g_423[0],&l_629,&g_164,&g_423[0],&g_423[0],(void*)0,(void*)0,&g_423[0],&g_423[0]}}};
                    unsigned l_668 = 7UL;
                    int l_683 = (-7L);
                    int l_688 = 0x9054E114L;
                    int ***l_690 = &g_264[3][3][0];
                    int i, j, k;
                    for (l_627 = 0; (l_627 <= 3); l_627 += 1)
                    {
                        return l_639[9][2];
                    }
                    if ((((safe_mul_func_uint16_t_u_u((((safe_sub_func_int32_t_s_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(((!(safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s((((((*l_656) ^= ((l_652 >= 1L) ^ (safe_mul_func_int8_t_s_s((-1L), (l_630 & ((*l_655) = g_164)))))) < ((((safe_sub_func_uint16_t_u_u(l_639[9][2], (g_387 || (l_667 = ((*l_665) = (((safe_rshift_func_uint16_t_u_u(l_630, 6)) < (safe_add_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((*l_602), l_639[9][2])), l_652))) != 0x2B9106C2L)))))) >= l_668) | 0x725F49B1L) , 0x9A7B2DF0L)) | l_669[1][8]) < 1UL), 4)), l_639[0][0]))) ^ 250UL), 0xB61BF8A8L)), g_43[3])) != g_74), l_652)) >= l_670) , l_639[2][3]), l_652)) , l_671[3]) != l_671[3]))
                    {
                        return l_652;
                    }
                    else
                    {
                        unsigned char l_672 = 255UL;
                        char * volatile * volatile l_675[7] = {&l_666[4][0][7],&l_666[4][0][7],&l_666[4][0][7],&l_666[4][0][7],&l_666[4][0][7],&l_666[4][0][7],&l_666[4][0][7]};
                        int i;
                        (*l_602) = l_672;
                        (*l_602) ^= l_672;
                        (*l_602) = ((-7L) == (l_611[0][7][2] == &g_466));
                        l_675[6] = g_673;
                    }
                    for (l_668 = 0; (l_668 <= 3); l_668 += 1)
                    {
                        int l_678[10][1] = {{0xB16DFA06L},{0xB16DFA06L},{(-3L)},{1L},{(-3L)},{0xB16DFA06L},{0xB16DFA06L},{(-3L)},{1L},{(-3L)}};
                        unsigned char *l_684[6][8][5] = {{{&l_652,&g_206,(void*)0,&g_206,&l_639[8][3]},{(void*)0,&g_206,&g_504,(void*)0,&l_639[8][0]},{&l_652,&l_652,&g_504,&g_504,&g_504},{&g_504,&l_652,&l_652,(void*)0,&l_652},{&g_206,(void*)0,&g_504,&l_639[9][2],&l_639[9][2]},{&l_639[9][2],&l_639[0][1],&l_652,&g_206,&l_639[9][2]},{&l_639[3][2],&l_639[9][2],&l_639[9][2],&l_639[9][2],&g_504},{(void*)0,&g_504,&l_639[8][1],&g_206,&l_639[8][4]}},{{&g_504,&l_639[9][2],&l_652,&g_504,&l_639[7][3]},{&l_652,&l_639[9][2],&l_652,&l_639[9][2],(void*)0},{&g_206,&l_639[9][2],&l_639[8][1],&l_639[9][2],&g_504},{&g_504,&l_639[0][4],&l_639[9][2],&l_652,&l_652},{&g_504,&l_639[9][2],&l_652,&g_504,&l_652},{&l_639[9][2],&l_639[8][4],&g_504,&l_652,(void*)0},{&l_639[9][2],(void*)0,&l_652,&l_639[5][2],&l_639[3][0]},{(void*)0,&l_652,&g_504,(void*)0,&l_639[7][3]}},{{&l_652,&g_504,&l_639[9][2],&g_504,&g_504},{&g_504,(void*)0,&l_639[6][0],(void*)0,&l_639[9][3]},{&l_639[8][0],(void*)0,&l_639[9][2],(void*)0,&l_639[8][0]},{&g_206,&l_639[9][2],&l_639[9][2],&g_504,&l_639[3][2]},{&l_652,&l_652,(void*)0,&l_639[9][2],&l_639[9][2]},{&l_652,&l_652,(void*)0,&l_639[0][0],&g_504},{&l_652,&g_504,&l_639[7][3],&g_504,&l_639[6][0]},{&g_504,&l_639[0][4],&l_639[9][2],&l_639[9][2],&g_504}},{{&l_639[0][1],(void*)0,(void*)0,&l_652,&l_639[9][2]},{&l_652,(void*)0,&g_206,&l_652,(void*)0},{&g_206,&l_652,&l_639[5][4],&l_639[6][0],&l_652},{(void*)0,&l_639[9][2],&l_652,&l_639[9][2],&l_652},{&l_652,&g_206,&l_639[5][2],&l_639[9][2],(void*)0},{&l_639[9][2],&g_206,&l_639[7][3],&l_639[8][2],&l_652},{&l_639[9][2],&l_652,&g_504,(void*)0,&g_206},{(void*)0,&g_504,&l_639[1][3],&g_206,&l_639[9][2]}},{{&g_206,&g_206,&g_206,&g_504,(void*)0},{&g_504,&g_206,&g_504,&g_206,&l_639[2][2]},{(void*)0,&g_504,&l_639[9][2],&g_504,&l_652},{&l_639[9][2],&l_652,&l_639[0][1],(void*)0,(void*)0},{&l_639[6][2],&g_206,&l_639[8][0],&g_504,&g_504},{&g_504,&g_206,&g_504,&l_639[9][2],&l_652},{&l_639[0][1],&l_639[9][2],(void*)0,&g_206,&l_639[9][2]},{&g_504,&l_652,&g_206,&g_504,&l_639[6][0]}},{{&g_206,&l_639[8][1],(void*)0,&g_206,&l_639[6][2]},{&l_652,&l_652,&l_639[3][0],&l_639[9][2],&l_639[0][1]},{&g_504,&g_206,&g_206,&g_504,&g_504},{&g_206,&l_639[9][2],&l_652,(void*)0,&g_206},{(void*)0,&l_639[7][3],(void*)0,(void*)0,(void*)0},{&g_504,(void*)0,&l_639[9][2],(void*)0,&l_639[9][2]},{(void*)0,&g_504,(void*)0,&g_504,&l_652},{&l_639[7][3],&l_639[9][2],&l_639[0][0],&l_639[9][2],&l_652}}};
                        char l_689[5][1];
                        unsigned char l_692 = 255UL;
                        short *l_693 = &l_616;
                        unsigned short **l_697 = &l_611[0][1][1];
                        int *l_702 = &l_678[7][0];
                        int i, j, k;
                        for (i = 0; i < 5; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_689[i][j] = 1L;
                        }
                        (*l_602) = 0x3E9A09F8L;
                        l_692 = ((safe_mul_func_uint8_t_u_u(((*l_612) = (l_611[g_16][l_668][g_16] != l_611[(l_668 + 2)][(g_16 + 3)][g_16])), (l_678[1][0] , (l_2 , (g_206 = (((safe_rshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_s(g_206, 0)), 1)) == (l_683 |= ((*l_602) = l_668))) ^ g_504)))))) >= (((func_21(((((((safe_mod_func_int16_t_s_s((g_59 > l_629), 65535UL)) , l_687[3][7][2]) , l_667) | l_678[1][0]) & 3UL) , l_688), l_652, g_43[5], l_668, l_689[3][0]) , (**g_673)) , l_690) == l_691));
                        (*g_706) = g_703[2][1];
                    }
                }
                (*l_602) = l_707;
                if ((safe_mul_func_int32_t_s_s(func_31((l_667 = (safe_sub_func_int32_t_s_s((+l_667), l_712[1]))), (*l_602), ((*l_713) ^= l_669[1][8]), l_639[5][2]), (g_714[2][0][1] != (g_423[1] = (g_425 |= (g_140[3][1] ^= func_21((g_466 , g_423[0]), (*g_696), l_715, (**g_695), l_639[9][2]))))))))
                {
                    short l_717 = 0L;
                    (*l_604) = &l_667;
                    return l_717;
                }
                else
                {
                    l_667 = l_712[1];
                }
                if ((0xE230D424L == ((*l_602) = g_423[0])))
                {
                    unsigned l_718 = 18446744073709551612UL;
                    int l_736 = (-1L);
                    for (l_629 = 0; (l_629 <= 4); l_629 += 1)
                    {
                        int **l_720 = &l_602;
                        int i, j;
                        (*l_602) |= ((((l_639[(l_629 + 4)][l_629] > (+(**g_695))) >= (l_718 != 1L)) , l_719) != (void*)0);
                        l_736 |= (func_21(((((**g_262) = (*l_691)) != (l_721 = l_720)) <= l_707), (safe_rshift_func_uint8_t_u_s((((((safe_mul_func_int8_t_s_s(((0xDD0226E7L | ((g_140[2][0] |= ((((((l_667 = ((safe_mod_func_uint8_t_u_u(func_31(l_728, (**l_720), g_183[0][5], (safe_add_func_int8_t_s_s((((safe_mod_func_int32_t_s_s((((0x85286393L <= l_733) == g_502) < (**g_695)), 0x01A73A45L)) ^ 0x6DB65378L) || l_734), (-5L)))), 0xF9L)) == 1UL)) ^ l_735) , (**g_673)) && 255UL) && 0xFCE692CCL) != (**l_720))) == l_718)) == l_718), 0xB8L)) < l_715) > 0xCA3CL) ^ (*l_602)) , l_718), g_502)), g_387, (**g_695), l_718) , (**l_721));
                        (**l_721) ^= l_639[9][2];
                    }
                    (*l_604) = l_737;
                    (*l_604) = (void*)0;
                }
                else
                {
                    for (l_728 = 0; l_728 < 5; l_728 += 1)
                    {
                        for (l_613 = 0; l_613 < 2; l_613 += 1)
                        {
                            g_703[l_728][l_613] = (void*)0;
                        }
                    }
                    if (((safe_unary_minus_func_uint16_t_u((**g_695))) , l_734))
                    {
                        (*l_604) = l_739;
                    }
                    else
                    {
                        int l_740 = 0x2B68E144L;
                        if (l_740)
                            break;
                    }
                }
            }
        }
        else
        {
            unsigned short l_741 = 65529UL;
            int *l_749 = &g_59;
            short l_760[5][5] = {{1L,1L,(-1L),1L,1L},{0x0F8EL,0xEDD2L,0x0F8EL,2L,(-1L)},{1L,0x6FECL,0x6FECL,1L,0x6FECL},{(-1L),0xEDD2L,0x1CE2L,0xEDD2L,(-1L)},{0x6FECL,1L,0x6FECL,0x6FECL,1L}};
            int l_797 = 0x43497975L;
            short l_812[1][9] = {{0x6D9EL,0x72C1L,0x6D9EL,0x72C1L,0x6D9EL,0x72C1L,0x6D9EL,0x72C1L,0x6D9EL}};
            unsigned l_818 = 0x3201F352L;
            int i, j;
            if ((l_741 != g_140[2][0]))
            {
                int *l_746 = &g_387;
                unsigned **l_780 = &g_243;
                int l_783[2][6] = {{0xEA18E730L,0xEA18E730L,0xEA18E730L,0xEA18E730L,0xEA18E730L,0xEA18E730L},{0xEA18E730L,0xEA18E730L,0xEA18E730L,0xEA18E730L,0xEA18E730L,0xEA18E730L}};
                int i, j;
                for (l_670 = 19; (l_670 >= (-4)); l_670--)
                {
                    (*l_739) &= (*l_602);
                }
                for (g_16 = (-3); (g_16 >= 11); g_16 = safe_add_func_int16_t_s_s(g_16, 3))
                {
                    char l_747 = 0x67L;
                    int **l_748[10] = {&l_602,&l_602,&l_602,&l_602,&l_602,&l_602,&l_602,&l_602,&l_602,&l_602};
                    int l_761 = (-1L);
                    int i;
                    (*l_604) = (l_747 , l_746);
                    l_749 = ((*l_721) = (void*)0);
                    (*l_739) = ((0xD6L >= ((*l_612) = (l_752 | (l_611[5][3][3] != (void*)0)))) || ((safe_sub_func_uint16_t_u_u((func_21(g_16, (*l_746), ((safe_add_func_int16_t_s_s((((safe_mul_func_uint16_t_u_u((*l_746), ((*l_746) , ((~((((*l_602) , l_759) != &g_695) , g_704)) == l_760[1][1])))) <= g_164) , (*l_737)), g_16)) < g_387), (**g_695), l_761) , (*g_696)), 0x6176L)) , 0x419BL));
                }
                for (g_504 = 22; (g_504 < 57); g_504 = safe_add_func_uint16_t_u_u(g_504, 8))
                {
                    unsigned l_772 = 0x965BF114L;
                    short *l_773 = &l_760[1][1];
                    for (g_694 = 0; (g_694 <= 8); g_694 += 1)
                    {
                        int i;
                        return g_43[g_694];
                    }
                    (*l_746) = ((safe_rshift_func_uint8_t_u_u(((safe_mod_func_uint32_t_u_u((safe_sub_func_uint32_t_u_u(((((*l_773) = (((void*)0 != &g_206) == (safe_mod_func_uint16_t_u_u(l_772, (*l_746))))) > 0L) , (((safe_sub_func_int16_t_s_s((0x5F4C59A7L != 0UL), (g_16 , (*g_696)))) & (*l_746)) <= (-4L))), l_772)), 0x8A2D0C5AL)) , l_772), 1)) || 4L);
                    return g_423[3];
                }
                (*g_784) ^= (((g_628 = ((&g_466 != &l_760[4][4]) < (g_183[2][1] |= ((((safe_unary_minus_func_int32_t_s(func_31((*l_746), (((*g_241) = l_779) != l_780), (safe_unary_minus_func_uint16_t_u(l_782[6])), (*l_746)))) >= (**g_695)) > l_783[1][5]) ^ (*l_602))))) , (-2L)) || (-3L));
            }
            else
            {
                int *l_787[3][8][6] = {{{(void*)0,&g_43[5],&g_59,&g_170,&l_613,&g_43[5]},{(void*)0,&l_669[5][1],&l_613,&g_471,&l_613,(void*)0},{&l_669[1][8],&g_43[5],&g_170,&g_471,&g_43[7],&l_669[1][8]},{&l_669[5][1],&l_728,(void*)0,&l_728,&l_669[5][1],&g_170},{&l_669[4][0],&l_613,&l_613,&g_59,&g_387,&g_43[0]},{&g_43[5],&g_471,&g_59,&l_613,&l_669[1][8],&g_43[0]},{(void*)0,&l_669[5][1],&l_613,&g_170,&g_170,&g_170},{&l_669[1][8],&g_387,(void*)0,(void*)0,&g_387,&l_669[1][8]}},{{&g_170,&g_170,&g_170,&l_613,&l_669[5][1],(void*)0},{&g_43[0],&l_669[1][8],&l_613,&g_59,&g_471,&g_43[5]},{&g_43[0],&g_387,&g_59,&l_613,&l_613,&l_669[4][0]},{&g_170,&l_669[5][1],&l_728,(void*)0,&l_728,&l_669[5][1]},{&l_669[1][8],&g_43[7],&g_471,&g_170,&g_43[5],&l_669[1][8]},{(void*)0,&l_613,&g_471,&l_613,&l_669[5][1],(void*)0},{&g_43[5],&l_613,&g_170,&g_59,&g_43[5],(void*)0},{&l_669[4][0],&g_43[7],&g_59,&l_728,(void*)0,&l_613}},{{&g_43[5],&g_43[5],(void*)0,&g_59,&g_170,&g_471},{(void*)0,&g_471,&l_669[4][0],&g_43[0],&g_471,(void*)0},{&g_387,(void*)0,&l_669[4][0],&l_669[5][1],&g_43[5],&g_471},{&g_170,&l_669[5][1],(void*)0,&l_613,&l_669[1][8],&l_613},{&l_613,&l_669[1][8],&l_613,(void*)0,&l_669[5][1],&g_170},{&g_471,&g_43[5],&l_669[5][1],&l_669[4][0],(void*)0,&g_387},{(void*)0,&g_471,&g_43[0],&l_669[4][0],&g_471,(void*)0},{&g_471,&g_170,&g_59,(void*)0,&g_43[5],&g_43[5]}}};
                int i, j, k;
                for (g_164 = 6; (g_164 >= 2); g_164 -= 1)
                {
                    int *l_785[7][3][2] = {{{&g_59,&g_43[5]},{&g_43[5],&l_669[5][6]},{(void*)0,&l_613}},{{&g_59,(void*)0},{&l_613,&l_669[5][6]},{&l_613,(void*)0}},{{&g_59,&l_613},{(void*)0,&l_669[5][6]},{&g_43[5],&g_43[5]}},{{&g_59,&g_43[5]},{&g_43[5],&l_669[5][6]},{(void*)0,&l_613}},{{&g_59,(void*)0},{&l_613,&l_669[5][6]},{&l_613,(void*)0}},{{&g_59,&l_613},{(void*)0,&l_669[5][6]},{&g_43[5],&g_43[5]}},{{&g_59,&g_43[5]},{&g_43[5],&l_669[5][6]},{(void*)0,&l_613}}};
                    int i, j, k;
                    g_786 = l_785[0][2][0];
                    if ((*g_784))
                        break;
                    for (l_741 = 2; (l_741 <= 6); l_741 += 1)
                    {
                        int *l_788 = (void*)0;
                        short *l_814 = (void*)0;
                        short *l_815[10] = {(void*)0,(void*)0,&l_760[1][1],&l_812[0][6],&l_812[0][6],&l_760[1][1],&l_760[1][1],&l_812[0][6],(void*)0,&l_812[0][6]};
                        volatile int * volatile *l_820 = &g_703[1][1];
                        int i, j;
                        (*l_602) = l_669[g_164][(g_164 + 2)];
                        l_788 = l_787[1][5][0];
                        l_785[0][2][0] = &l_669[g_164][(g_164 + 2)];
                        (*l_820) = (*g_706);
                    }
                }
            }
        }
    }
    else
    {
        short l_821 = (-1L);
        return l_821;
    }
    (*l_822) = &l_669[1][8];
    l_835 &= (l_834 &= func_31(((**l_822) | ((safe_sub_func_int16_t_s_s((l_827[0] & (0x8588L >= (((((((*l_828) = g_43[5]) , ((*l_829) = 0xEB81L)) , (l_830 <= (((*l_831) = ((**l_822) >= 1UL)) == ((**l_822) , (-9L))))) , 0x4EA361A7L) < 9UL) < 0L))), (**g_695))) , (**l_822))), (**l_822), l_832, (**l_822)));
    return g_387;
}







static unsigned func_8(unsigned p_9, int p_10, short p_11)
{
    int *l_601 = &g_471;
    (*l_601) = p_11;
    return p_11;
}







static short func_12(int p_13, unsigned p_14, unsigned p_15)
{
    unsigned short l_41 = 0UL;
    int *l_42 = &g_43[5];
    unsigned short *l_557[9][4] = {{&l_41,&l_41,(void*)0,(void*)0},{&g_183[2][3],&l_41,&l_41,&g_74},{&g_285,(void*)0,&g_285,&l_41},{&g_183[3][6],(void*)0,&g_183[3][6],&g_74},{(void*)0,&l_41,&g_74,(void*)0},{(void*)0,&l_41,&g_285,&l_41},{&g_74,&g_285,&g_285,&g_74},{(void*)0,&g_74,&g_74,&g_183[3][6]},{(void*)0,&g_183[2][3],&g_183[3][6],(void*)0}};
    int l_558 = 0x7C945295L;
    unsigned char *l_587 = &g_504;
    int l_588 = 0xD183C116L;
    unsigned short **l_596 = &l_557[2][1];
    unsigned char l_597 = 0x11L;
    int *l_598[2][9][2] = {{{&g_170,&g_170},{&g_59,&g_170},{&g_170,(void*)0},{&l_588,&g_170},{&g_59,&l_588},{&g_170,(void*)0},{&g_170,&l_588},{&g_59,&g_170},{&l_588,(void*)0}},{{&g_170,&g_170},{&g_59,&g_170},{&g_170,(void*)0},{&l_588,&g_170},{&g_59,&l_588},{&g_170,(void*)0},{&g_170,&l_588},{&g_59,&g_170},{&l_588,(void*)0}}};
    unsigned l_599 = 0x93F7225EL;
    int i, j, k;
    (*l_42) = (safe_add_func_int32_t_s_s((((((p_13 || ((safe_sub_func_int8_t_s_s(func_21((p_13 , (safe_mod_func_uint8_t_u_u(((*l_587) = (safe_add_func_int32_t_s_s(g_16, ((func_31(g_16, (((safe_rshift_func_uint16_t_u_s(((*l_42) = func_38((~l_41), ((*l_42) = p_15))), p_15)) ^ l_558) , 0xA76FL), p_14, p_15) > p_15) || 1L)))), p_15))), l_588, p_14, g_387, l_558), p_14)) && (*l_42))) < l_558) >= p_15) < p_15) || (*l_42)), 0L));
    l_599 |= (safe_mul_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_u(((((*l_42) = (p_13 <= (((*l_596) = &l_41) != &l_41))) <= l_597) != 0x60L), 2)), 0x55B5L));
    (*l_42) ^= ((&g_423[2] == l_587) <= (p_15 >= 0x0D05197CL));
    return p_14;
}







static char func_21(int p_22, unsigned short p_23, unsigned p_24, unsigned short p_25, int p_26)
{
    unsigned char l_591 = 0x18L;
    l_591 ^= (safe_mul_func_uint8_t_u_u(3UL, 1UL));
    return l_591;
}







static unsigned char func_31(unsigned p_32, unsigned short p_33, unsigned p_34, char p_35)
{
    short l_561[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int *l_562[2];
    char l_563[1][9] = {{0xBCL,0xA4L,0xA4L,0xBCL,0xA4L,0xA4L,0xBCL,5L,5L}};
    unsigned **l_564 = (void*)0;
    int l_586 = 0x68063D31L;
    int i, j;
    for (i = 0; i < 2; i++)
        l_562[i] = &g_43[8];
    l_563[0][4] = (safe_sub_func_uint16_t_u_u(l_561[9], (!p_34)));
    if (((l_562[0] == (g_243 = (void*)0)) == g_74))
    {
        int l_580 = 1L;
        int *l_581 = &g_59;
        unsigned char *l_582 = (void*)0;
        unsigned char *l_583 = &g_504;
        (*l_581) = (safe_unary_minus_func_int32_t_s((safe_rshift_func_int8_t_s_u((((*l_583) = (((safe_unary_minus_func_uint16_t_u(((void*)0 != l_562[1]))) , (safe_rshift_func_int8_t_s_u(p_32, (((safe_sub_func_uint16_t_u_u(((((((p_33 && p_32) || ((safe_rshift_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(((safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((0x690CL >= (g_16 || l_580)) | p_33), 1)), (*l_581))) && (*l_581)))), 5)) , (*l_581))) >= p_34) || (-1L)) , l_562[0]) == (void*)0), g_72)) | 65529UL) | p_32)))) , 0UL)) >= (*l_581)), g_16))));
        (*l_581) = 0xEE404419L;
    }
    else
    {
        return p_35;
    }
    l_586 &= (safe_lshift_func_uint16_t_u_u(p_35, 12));
    return g_91;
}







static unsigned short func_38(int p_39, int p_40)
{
    unsigned l_48 = 9UL;
    int *l_57 = &g_43[5];
    short *l_175 = (void*)0;
    char l_177 = 0xC7L;
    int **l_391 = &g_169;
    int *l_538 = &g_471;
    int ****l_542 = &g_263;
    (*l_538) &= (safe_mod_func_int16_t_s_s((safe_mul_func_uint16_t_u_u(l_48, func_49(((*l_391) = func_51(func_55(l_57), g_169, (safe_add_func_int8_t_s_s((l_177 = ((safe_add_func_int16_t_s_s((l_48 , ((((g_170 | (l_175 == g_176)) != g_16) , p_39) , p_39)), 0xB979L)) && p_39)), 0xB6L))))))), p_39));
    for (p_40 = 0; (p_40 <= 8); p_40 += 1)
    {
        int ****l_541 = &g_263;
        char l_551 = 0x7EL;
        int i;
        if (g_43[p_40])
            break;
        (*l_391) = &g_43[p_40];
        (*l_538) = func_49(&p_40);
        for (g_502 = 21; (g_502 > 28); ++g_502)
        {
            unsigned short *l_547 = (void*)0;
            unsigned short *l_548[3];
            char *l_554 = (void*)0;
            char *l_555 = &g_164;
            int l_556 = 1L;
            int i;
            for (i = 0; i < 3; i++)
                l_548[i] = &g_183[2][9];
            (*l_57) |= (!((&g_530 != ((g_285 = (safe_sub_func_int8_t_s_s((-2L), g_6))) , &g_530)) && ((*l_538) , ((*l_555) = (safe_add_func_int32_t_s_s(((0xD5L >= l_551) < (safe_lshift_func_int8_t_s_s(g_387, 2))), ((func_49(((*l_391) = &p_40)) != g_91) , 7L)))))));
            l_556 |= 1L;
        }
    }
    (*l_391) = (*l_391);
    return p_39;
}







static short func_49(int * p_50)
{
    int *l_401 = &g_387;
    unsigned **l_445 = (void*)0;
    short *l_467 = &g_466;
    short l_494 = 0x70A2L;
    char *l_518 = &g_502;
    volatile unsigned short * volatile *l_533 = (void*)0;
    (*g_241) = (void*)0;
    for (g_59 = 23; (g_59 <= 23); g_59 = safe_add_func_int16_t_s_s(g_59, 3))
    {
        int **l_394 = &g_169;
        unsigned char *l_399 = &g_206;
        int l_405 = (-3L);
        unsigned short l_417 = 0UL;
        unsigned **l_438 = &g_243;
        unsigned l_470 = 0xF9A9C393L;
        unsigned short l_483 = 4UL;
        int l_505 = 0xB9240E7DL;
        (*g_263) = l_394;
        for (g_164 = 0; (g_164 >= (-1)); g_164--)
        {
            int *l_400 = &g_59;
            char *l_402 = &g_140[5][1];
            unsigned **l_431 = &g_243;
            int l_442 = 0x4BF298BFL;
            short *l_465 = &g_466;
            unsigned char l_488 = 0xE1L;
            unsigned l_513 = 0UL;
        }
        if ((*g_169))
            break;
    }
    return (*l_401);
}







static int * func_51(int * p_52, int * p_53, char p_54)
{
    int *l_180 = (void*)0;
    char *l_186[4];
    short l_192[8][8][4] = {{{(-3L),1L,(-1L),1L},{0x412BL,0xD49BL,(-3L),1L},{(-5L),0xA577L,0x04F4L,0x612EL},{(-5L),0x0899L,0x40BCL,1L},{0x5ABFL,0x94FBL,9L,(-1L)},{0xD902L,1L,0x5FC9L,(-1L)},{(-1L),(-8L),1L,0xA577L},{1L,7L,1L,(-5L)}},{{0L,(-1L),0xFD7CL,(-5L)},{0x3FAEL,0x3672L,0xF759L,(-1L)},{(-1L),8L,0xF759L,3L},{0x3FAEL,0L,0xFD7CL,0x4F73L},{0L,0x83E8L,1L,9L},{1L,9L,1L,1L},{(-1L),0xA745L,0x5FC9L,(-1L)},{0xD902L,0x214DL,9L,(-5L)}},{{0x5ABFL,(-5L),0x40BCL,1L},{(-5L),0x4F73L,0x04F4L,0x81F4L},{(-5L),0x412BL,(-3L),0x94FBL},{0x412BL,(-5L),(-1L),0x83E8L},{(-3L),0xD902L,0x3766L,(-1L)},{0x0717L,(-1L),0L,0L},{0x9E70L,9L,0x7CA8L,0L},{0x81F4L,(-3L),(-1L),9L}},{{0L,0x412BL,(-1L),(-5L)},{(-1L),(-5L),1L,0x5ABFL},{0x0717L,(-5L),6L,0x612EL},{0L,0x5ABFL,0x412BL,0L},{0xF759L,0xD902L,(-8L),(-1L)},{0xDF40L,(-1L),(-9L),(-1L)},{(-1L),1L,1L,(-1L)},{(-8L),0L,0x9E70L,(-3L)}},{{9L,0x3FAEL,0xE03BL,0xA577L},{0x612EL,(-1L),8L,0xA577L},{(-9L),0x3FAEL,0xF759L,(-3L)},{0xD902L,0L,(-1L),(-1L)},{0x81F4L,1L,0x0899L,(-1L)},{0x5ABFL,(-1L),0x7CA8L,(-1L)},{0x1601L,0xD902L,1L,0L},{1L,0x5ABFL,0x214DL,0x612EL}},{{(-5L),(-5L),0xCB44L,0x5ABFL},{1L,(-5L),0x5FC9L,(-5L)},{(-5L),0x412BL,0x214DL,9L},{(-8L),(-3L),0x3672L,(-1L)},{0x1601L,0x0717L,6L,0x4F73L},{7L,0x9E70L,0x0899L,0xD49BL},{0x40BCL,0x81F4L,1L,(-9L)},{0xD902L,(-3L),0x5209L,(-9L)}},{{1L,0L,0x3766L,0x7B79L},{(-2L),0L,0xFD7CL,(-1L)},{0L,(-3L),(-1L),1L},{1L,0xF397L,(-1L),1L},{0x3766L,0xCB44L,(-9L),(-1L)},{0x0899L,(-1L),(-8L),(-1L)},{0x7B79L,7L,(-1L),0L},{0xE03BL,1L,(-1L),0xF454L}},{{(-1L),0x5ABFL,(-5L),0L},{(-1L),(-1L),(-1L),0x214DL},{0xE03BL,0L,(-1L),0L},{0x7B79L,(-1L),(-8L),0xF759L},{0x0899L,(-1L),(-9L),0xCCC2L},{0x3766L,0x0899L,(-1L),0x3766L},{1L,(-9L),(-1L),(-1L)},{0L,6L,0xFD7CL,0x40BCL}}};
    unsigned char l_203 = 246UL;
    unsigned l_221[6][6][4] = {{{0x2CE7851CL,18446744073709551607UL,0xD751FE19L,0xD751FE19L},{0x2CE7851CL,0x2CE7851CL,0UL,0x702D6E2BL},{0UL,0xD751FE19L,0x2CE7851CL,6UL},{18446744073709551607UL,8UL,1UL,0x2CE7851CL},{0xDA783830L,8UL,0xDA783830L,6UL},{8UL,0xD751FE19L,0x9DD2C8B6L,0x702D6E2BL}},{{0x702D6E2BL,0x2CE7851CL,18446744073709551607UL,0xD751FE19L},{0x9DD2C8B6L,3UL,3UL,0x9DD2C8B6L},{0xD751FE19L,18446744073709551607UL,0x2CE7851CL,0x702D6E2BL},{0xDA783830L,18446744073709551608UL,0x702D6E2BL,0UL},{0x702D6E2BL,0UL,0UL,0UL},{3UL,18446744073709551608UL,1UL,0x702D6E2BL}},{{8UL,18446744073709551607UL,0UL,0x9DD2C8B6L},{1UL,3UL,6UL,6UL},{1UL,1UL,0UL,0xD751FE19L},{8UL,6UL,1UL,18446744073709551607UL},{3UL,0xDA783830L,0UL,1UL},{0x702D6E2BL,0xDA783830L,0x702D6E2BL,18446744073709551607UL}},{{0xDA783830L,6UL,0x2CE7851CL,0xD751FE19L},{0xD751FE19L,1UL,3UL,6UL},{0x9DD2C8B6L,3UL,3UL,0x9DD2C8B6L},{0xD751FE19L,18446744073709551607UL,0x2CE7851CL,0x702D6E2BL},{0xDA783830L,18446744073709551608UL,0x702D6E2BL,0UL},{0x702D6E2BL,0UL,0UL,0UL}},{{3UL,18446744073709551608UL,1UL,0x702D6E2BL},{8UL,18446744073709551607UL,0UL,0x9DD2C8B6L},{1UL,3UL,6UL,6UL},{1UL,1UL,0UL,0xD751FE19L},{8UL,6UL,1UL,18446744073709551607UL},{3UL,0xDA783830L,0UL,1UL}},{{0x702D6E2BL,0xDA783830L,0x702D6E2BL,3UL},{0x702D6E2BL,18446744073709551607UL,1UL,6UL},{6UL,0UL,18446744073709551608UL,18446744073709551607UL},{0x2CE7851CL,18446744073709551608UL,18446744073709551608UL,0x2CE7851CL},{6UL,3UL,1UL,0xD751FE19L},{0x702D6E2BL,0x9DD2C8B6L,0xD751FE19L,8UL}}};
    int l_236 = 0xCB917276L;
    unsigned ***l_246 = &g_242;
    short l_291 = 0xB636L;
    char l_292 = (-9L);
    unsigned char l_301 = 252UL;
    unsigned l_388 = 0UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_186[i] = &g_140[2][0];
    for (g_170 = 0; (g_170 > (-17)); --g_170)
    {
        char *l_187 = &g_140[2][0];
        int l_193 = 0x9A57CDCCL;
        unsigned char l_209 = 0UL;
        char l_313 = (-6L);
        unsigned *l_314 = &g_270;
        unsigned short *l_320[3];
        short *l_323[5];
        int *l_330[4];
        int i;
        for (i = 0; i < 3; i++)
            l_320[i] = &g_285;
        for (i = 0; i < 5; i++)
            l_323[i] = &l_192[2][2][0];
        for (i = 0; i < 4; i++)
            l_330[i] = &g_170;
        g_70[5][0][3] = &g_170;
        l_180 = &g_59;
        if ((safe_mul_func_int8_t_s_s(g_183[2][3], ((safe_mul_func_int16_t_s_s((*l_180), (l_186[0] == (l_187 = (void*)0)))) , ((safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u(l_192[6][5][1], ((((l_193 >= (safe_lshift_func_uint16_t_u_u((*l_180), 14))) , (g_183[2][3] & l_193)) || 0xA6810593L) , p_54))), 8)) | p_54)))))
        {
            int *l_196 = (void*)0;
            int **l_197[1];
            int ***l_231 = &l_197[0];
            int ****l_230 = &l_231;
            int i;
            for (i = 0; i < 1; i++)
                l_197[i] = &g_70[3][1][2];
            g_70[5][0][3] = (l_196 = (void*)0);
            for (p_54 = 0; (p_54 <= 1); p_54 += 1)
            {
                unsigned l_198 = 1UL;
                unsigned short *l_207 = (void*)0;
                unsigned short *l_208 = &g_183[2][3];
                l_193 &= (*p_52);
                (*l_180) = ((*l_180) , ((l_198 >= 0UL) == ((*l_208) = ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(g_43[5], 2)) || (&p_53 != (l_203 , &l_180))), (safe_mul_func_uint16_t_u_u(g_206, g_72)))) <= l_193))));
                l_209 |= (*p_52);
                for (g_59 = 0; (g_59 <= 1); g_59 += 1)
                {
                    unsigned l_220 = 4294967289UL;
                    int l_225 = 3L;
                    for (l_193 = 0; (l_193 <= 3); l_193 += 1)
                    {
                        unsigned *l_215 = &l_198;
                        unsigned l_224 = 0x7A5EFBF4L;
                        int i, j, k;
                        l_225 = (safe_rshift_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u(65533UL, ((safe_unary_minus_func_int32_t_s(((g_183[(g_59 + 2)][(l_193 + 4)] , (((*l_215) |= (*l_180)) < (((safe_lshift_func_uint16_t_u_u(g_183[1][9], 1)) >= (0x615AL < (((safe_mod_func_int8_t_s_s(l_220, l_221[3][2][0])) , ((*p_53) , ((((safe_add_func_uint32_t_u_u(g_43[5], g_164)) >= g_183[2][3]) && p_54) , p_54))) | l_220))) != g_183[1][0]))) & 0x086BL))) < l_209))) <= l_224) >= 7L), g_170));
                        l_236 |= (g_140[2][0] == (((safe_mul_func_uint8_t_u_u(((l_198 == (safe_sub_func_int8_t_s_s(g_59, 0x43L))) == ((*l_180) < (l_230 != &g_111))), (+((safe_add_func_uint16_t_u_u(g_6, ((safe_lshift_func_uint16_t_u_u(p_54, 6)) >= 0x72E5L))) & 0x5BFB83DFL)))) & g_206) >= 7UL));
                    }
                }
            }
            (*p_52) = (0L < p_54);
        }
        else
        {
            int l_240 = 1L;
            unsigned short l_245 = 0x9768L;
            int *l_294 = (void*)0;
            for (g_164 = 0; (g_164 != (-22)); g_164 = safe_sub_func_int8_t_s_s(g_164, 4))
            {
                int **l_239[7][3] = {{&g_70[0][1][1],&g_70[2][0][2],&g_70[0][1][1]},{&g_70[4][0][1],&g_70[4][0][1],&g_70[8][1][3]},{&g_70[2][0][1],&g_70[2][0][2],&g_70[2][0][1]},{&g_70[4][0][1],&g_70[8][1][3],&g_70[8][1][3]},{&g_70[0][1][1],&g_70[2][0][2],&g_70[0][1][1]},{&g_70[4][0][1],&g_70[4][0][1],&g_70[8][1][3]},{&g_70[2][0][1],&g_70[2][0][2],&g_70[2][0][1]}};
                unsigned char *l_244[2][9][6] = {{{&l_209,&l_209,&l_203,&g_206,&g_206,&g_206},{&l_203,&l_209,&l_203,&g_206,&l_203,&l_209},{&l_209,&g_206,&g_206,&l_203,&l_209,&l_203},{&l_203,&g_206,&g_206,&l_203,&l_203,&g_206},{&l_209,&l_209,&l_209,&g_206,&g_206,&l_203},{&l_203,&g_206,&l_209,&g_206,&g_206,&l_209},{&l_209,&l_203,&l_209,&l_203,&l_209,&l_203},{&l_209,&l_203,&l_209,(void*)0,&l_209,&g_206},{(void*)0,&l_209,&g_206,&l_209,&l_203,&l_203}},{{&g_206,&g_206,&l_203,&l_203,&g_206,&g_206},{&g_206,&l_209,&g_206,&l_209,&g_206,&l_209},{&l_203,&g_206,&g_206,&l_209,&l_209,&l_203},{&l_203,&l_209,&l_209,&l_209,&l_203,&g_206},{&g_206,&g_206,&l_209,&l_203,&l_203,(void*)0},{&g_206,&l_209,&l_203,&g_206,(void*)0,(void*)0},{&l_203,&l_209,&l_209,&l_203,&l_203,&g_206},{(void*)0,&l_203,&l_209,&l_209,&l_209,&l_203},{&l_209,&g_206,&g_206,&l_209,&l_209,&l_209}}};
                int l_257[7][6] = {{0x82D4856EL,0x82D4856EL,0x859A50F6L,(-2L),0x859A50F6L,0x82D4856EL},{0x859A50F6L,0x6036A4C6L,(-2L),(-2L),0x6036A4C6L,0x859A50F6L},{0x82D4856EL,0x859A50F6L,(-2L),0x859A50F6L,0x82D4856EL,0x82D4856EL},{(-9L),0x859A50F6L,0x859A50F6L,(-9L),0x6036A4C6L,(-9L)},{(-9L),0x6036A4C6L,(-9L),0x859A50F6L,0x859A50F6L,(-9L)},{0x82D4856EL,0x82D4856EL,0x859A50F6L,(-2L),0x859A50F6L,0x82D4856EL},{0x859A50F6L,0x6036A4C6L,(-2L),(-2L),0x6036A4C6L,0x82D4856EL}};
                unsigned l_290 = 18446744073709551608UL;
                int i, j, k;
                g_70[1][1][3] = ((*l_180) , &l_236);
            }
        }
        if ((((*l_314) ^= l_313) , (((safe_add_func_int16_t_s_s(((((g_183[1][3] = (safe_unary_minus_func_uint8_t_u((safe_sub_func_int8_t_s_s((*l_180), p_54))))) < (((g_170 < ((safe_rshift_func_uint8_t_u_s(((*l_180) != 0xA77CL), 2)) & p_54)) || (l_236 |= (0x2BL && (g_140[2][0] |= l_313)))) <= 0x4979L)) ^ 5UL) ^ 1L), 1L)) || g_183[1][1]) >= l_193)))
        {
            (*p_52) = (((*l_314) &= l_313) , 0x203E24DFL);
        }
        else
        {
            unsigned l_336 = 0xD7FBE571L;
            int l_353 = 0x1A03CDB2L;
            int l_354 = 0xE22B802BL;
            int **l_359[1][9];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 9; j++)
                    l_359[i][j] = (void*)0;
            }
            for (l_236 = 4; (l_236 >= 0); l_236 -= 1)
            {
                char l_324 = 0L;
                int l_337 = (-1L);
                int l_338[7];
                unsigned l_352 = 0xC37C4AD0L;
                int i;
                for (i = 0; i < 7; i++)
                    l_338[i] = 0xF5D8F846L;
                if ((*p_52))
                    break;
                for (g_285 = 0; (g_285 <= 3); g_285 += 1)
                {
                    (*p_52) |= l_324;
                }
            }
            p_53 = &l_236;
        }
    }
    for (g_72 = 0; (g_72 == 35); ++g_72)
    {
        unsigned char l_366 = 2UL;
        for (g_74 = 2; (g_74 >= 35); ++g_74)
        {
            unsigned **l_378 = &g_243;
            int l_389 = 0L;
            int *l_390 = &g_170;
            for (g_285 = (-17); (g_285 < 28); ++g_285)
            {
                (*g_169) = (l_366 = (*p_53));
                for (g_270 = 0; (g_270 <= 1); g_270 += 1)
                {
                    unsigned short l_367[6] = {65533UL,0xEBF8L,65533UL,65533UL,0xEBF8L,65533UL};
                    int l_369[1];
                    int i;
                    for (i = 0; i < 1; i++)
                        l_369[i] = (-1L);
                    for (g_59 = 1; (g_59 >= 0); g_59 -= 1)
                    {
                        unsigned *l_368 = &g_91;
                        unsigned l_385 = 0x99D1877FL;
                        int *l_386[1][7][1] = {{{&g_387},{&l_236},{&g_387},{&l_236},{&g_387},{&l_236},{&g_387}}};
                        int i, j, k;
                        (*g_169) ^= (8L < (p_54 , l_367[1]));
                        l_388 &= (((((~((l_369[0] ^= ((*l_368) = l_367[5])) | (safe_mul_func_int16_t_s_s((((-9L) ^ 0x9568C81EL) && (((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((l_378 == ((*l_246) = l_378)), (safe_sub_func_uint32_t_u_u((0xA32AL != ((safe_rshift_func_int8_t_s_s(p_54, 5)) , (safe_mul_func_uint16_t_u_u(g_43[5], 0xA155L)))), 1UL)))), g_183[1][5])), l_366)) | p_54) | (*p_52))), g_183[0][9])))) , p_54) >= l_385) , l_366) ^ (*p_53));
                        (*p_53) = (l_389 |= (*p_53));
                    }
                }
            }
            p_53 = l_390;
        }
    }
    return p_52;
}







static int * func_55(int * p_56)
{
    int *l_58 = &g_59;
    int **l_150[1][10];
    unsigned *l_159 = &g_91;
    unsigned **l_158[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int *l_168 = &g_43[5];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
            l_150[i][j] = &l_58;
    }
    (*l_58) ^= (*p_56);
    p_56 = func_60((*l_58));
    for (g_91 = 0; (g_91 < 39); ++g_91)
    {
        unsigned **l_160 = &l_159;
        int l_165 = 0xBC0FF1A9L;
        if ((g_140[3][0] == g_59))
        {
            for (g_72 = 0; (g_72 < 40); ++g_72)
            {
                for (g_74 = 0; (g_74 <= 8); g_74 += 1)
                {
                    int l_157 = 4L;
                    unsigned ***l_161 = &l_160;
                    int i;
                    l_157 &= (g_43[g_74] != (safe_sub_func_uint32_t_u_u(g_43[g_74], (g_43[g_74] , g_43[2]))));
                    (*l_58) = (l_158[3] != ((*l_161) = l_160));
                }
            }
        }
        else
        {
            unsigned l_162[9][2][9] = {{{4294967292UL,0x8D6ADFE8L,0x8D6ADFE8L,4294967292UL,0xDD9FAC99L,0x3779D110L,0xDD9FAC99L,4294967292UL,0x8D6ADFE8L},{0xDD9FAC99L,0xDD9FAC99L,0xB9AC5833L,0x3779D110L,0UL,0x3779D110L,0xB9AC5833L,0xDD9FAC99L,0xDD9FAC99L}},{{0x8D6ADFE8L,4294967292UL,0xDD9FAC99L,0x3779D110L,0xDD9FAC99L,4294967292UL,0x8D6ADFE8L,0x8D6ADFE8L,4294967292UL},{0x3779D110L,4294967292UL,0xB9AC5833L,4294967292UL,0x3779D110L,4294967295UL,4294967295UL,0x3779D110L,4294967292UL}},{{0x8D6ADFE8L,0xDD9FAC99L,0x8D6ADFE8L,4294967295UL,0xB9AC5833L,0xB9AC5833L,4294967295UL,0x8D6ADFE8L,0xDD9FAC99L},{0xDD9FAC99L,0x8D6ADFE8L,4294967295UL,0xB9AC5833L,0xB9AC5833L,4294967295UL,0x8D6ADFE8L,0xDD9FAC99L,0x8D6ADFE8L}},{{4294967292UL,0x3779D110L,4294967295UL,4294967295UL,0x3779D110L,4294967292UL,0xB9AC5833L,4294967292UL,0x3779D110L},{4294967292UL,0x8D6ADFE8L,0x8D6ADFE8L,4294967292UL,0xDD9FAC99L,0x3779D110L,0xDD9FAC99L,4294967292UL,0x8D6ADFE8L}},{{0xDD9FAC99L,0xB9AC5833L,4294967295UL,0x8D6ADFE8L,0xDD9FAC99L,0x8D6ADFE8L,4294967295UL,0xB9AC5833L,0xB9AC5833L},{4294967292UL,0UL,0xB9AC5833L,0x8D6ADFE8L,0xB9AC5833L,0UL,4294967292UL,4294967292UL,0UL}},{{0x8D6ADFE8L,0UL,4294967295UL,0UL,0x8D6ADFE8L,0x3779D110L,0x3779D110L,0x8D6ADFE8L,0UL},{4294967292UL,0xB9AC5833L,4294967292UL,0x3779D110L,4294967295UL,4294967295UL,0x3779D110L,4294967292UL,0xB9AC5833L}},{{0xB9AC5833L,4294967292UL,0x3779D110L,4294967295UL,4294967295UL,0x3779D110L,4294967292UL,0xB9AC5833L,4294967292UL},{0UL,0x8D6ADFE8L,0x3779D110L,0x3779D110L,0x8D6ADFE8L,0UL,4294967295UL,0UL,0x8D6ADFE8L}},{{0UL,4294967292UL,4294967292UL,0UL,0xB9AC5833L,0x8D6ADFE8L,0xB9AC5833L,0UL,4294967292UL},{0xB9AC5833L,0xB9AC5833L,4294967295UL,0x8D6ADFE8L,0xDD9FAC99L,0x8D6ADFE8L,4294967295UL,0xB9AC5833L,0xB9AC5833L}},{{4294967292UL,0UL,0xB9AC5833L,0x8D6ADFE8L,0xB9AC5833L,0UL,4294967292UL,4294967292UL,0UL},{0x8D6ADFE8L,0UL,4294967295UL,0UL,0x8D6ADFE8L,0x3779D110L,0x3779D110L,0x8D6ADFE8L,0UL}}};
            short *l_163 = (void*)0;
            int i, j, k;
            if ((*l_58))
                break;
            (*l_58) |= ((g_164 = (l_162[8][0][3] , g_6)) != g_140[3][0]);
        }
        g_70[0][0][3] = func_60(l_165);
        for (g_72 = 0; (g_72 <= 16); g_72 = safe_add_func_int32_t_s_s(g_72, 1))
        {
            return &g_59;
        }
    }
    return l_168;
}







static int * func_60(unsigned char p_61)
{
    int *l_71 = &g_43[5];
    int **l_107 = &g_70[3][1][2];
    int ***l_106 = &l_107;
    int *l_116 = &g_43[5];
    int l_149[10];
    int i;
    for (i = 0; i < 10; i++)
        l_149[i] = 0L;
    if (p_61)
    {
        g_43[5] &= (0x8A44L || 0UL);
        g_59 = p_61;
    }
    else
    {
        int *l_67 = (void*)0;
        int l_86 = 1L;
        unsigned short l_105 = 0x111DL;
        for (g_59 = 26; (g_59 <= (-28)); --g_59)
        {
            unsigned l_108 = 0x7D7ACB2EL;
            int l_148 = 0x763B1FBBL;
        }
    }
    l_149[9] = ((*l_116) ^= 0x3F4F8798L);
    return (*l_107);
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_43[i], "g_43[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_74, "g_74", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_140[i][j], "g_140[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_170, "g_170", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_183[i][j], "g_183[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_270, "g_270", print_hash_value);
    transparent_crc(g_285, "g_285", print_hash_value);
    transparent_crc(g_387, "g_387", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_423[i], "g_423[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_425, "g_425", print_hash_value);
    transparent_crc(g_466, "g_466", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_504, "g_504", print_hash_value);
    transparent_crc(g_628, "g_628", print_hash_value);
    transparent_crc(g_694, "g_694", print_hash_value);
    transparent_crc(g_704, "g_704", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_714[i][j][k], "g_714[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
