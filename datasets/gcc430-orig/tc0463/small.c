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



static int g_20 = 0xDB785B64L;
static short g_22 = 1L;
static short g_24 = 0xA4D3L;
static short g_72 = (-9L);
static short *g_71[10][3] = {{&g_72,&g_72,&g_72},{&g_24,&g_24,&g_24},{&g_72,&g_72,&g_72},{&g_24,&g_24,&g_24},{&g_72,&g_72,&g_72},{&g_24,&g_24,&g_24},{&g_72,&g_72,&g_72},{&g_24,&g_24,&g_24},{&g_72,&g_72,&g_72},{&g_24,&g_24,&g_24}};
static unsigned char g_110 = 0xB4L;
static short g_113[1] = {0x9747L};
static unsigned g_116 = 0x3094EEE5L;
static unsigned g_119[10] = {0xE16947F7L,0x88E2D1E9L,9UL,0x88E2D1E9L,0xE16947F7L,0xE16947F7L,0x88E2D1E9L,9UL,0x88E2D1E9L,0xE16947F7L};
static int *g_144 = (void*)0;
static char g_173 = 0xB8L;
static unsigned short g_202[10] = {0xFDE9L,65533UL,0xFDE9L,65533UL,0xFDE9L,65533UL,0xFDE9L,65533UL,0xFDE9L,65533UL};
static unsigned short g_215 = 65535UL;
static const int g_219 = 0x798251A3L;
static const int g_221 = 0xA769E6F5L;
static const int *g_220 = &g_221;
static unsigned char g_226 = 4UL;
static const int **g_238 = &g_220;
static int g_333[3] = {0x21942E4CL,0x21942E4CL,0x21942E4CL};
static unsigned char g_346 = 248UL;
static unsigned short g_364 = 65535UL;
static const short g_399 = 0xECADL;
static int *g_414 = &g_20;
static unsigned char * const g_460[8][5][6] = {{{&g_226,&g_110,&g_226,&g_226,&g_226,(void*)0},{&g_226,&g_226,&g_346,(void*)0,&g_346,&g_110},{&g_110,&g_226,&g_226,&g_110,&g_226,&g_110},{&g_226,(void*)0,&g_346,&g_226,&g_226,(void*)0},{&g_226,&g_226,&g_110,&g_226,&g_226,&g_110}},{{&g_110,&g_346,&g_226,&g_226,&g_226,&g_346},{(void*)0,&g_346,&g_110,&g_226,&g_110,(void*)0},{&g_226,&g_346,&g_110,(void*)0,(void*)0,&g_226},{&g_226,&g_226,&g_110,(void*)0,&g_110,&g_226},{&g_226,&g_346,(void*)0,&g_346,&g_110,&g_346}},{{&g_110,&g_110,&g_110,&g_110,&g_346,&g_110},{&g_226,&g_346,&g_346,&g_110,&g_110,&g_226},{(void*)0,&g_110,&g_346,&g_346,&g_110,&g_226},{&g_110,&g_110,&g_226,&g_346,(void*)0,(void*)0},{(void*)0,&g_346,&g_110,&g_110,&g_226,&g_110}},{{&g_226,&g_226,&g_110,(void*)0,&g_110,&g_346},{(void*)0,&g_110,&g_110,&g_110,&g_110,&g_110},{&g_226,&g_226,(void*)0,&g_110,&g_110,&g_226},{&g_226,&g_226,&g_226,&g_346,(void*)0,(void*)0},{&g_346,&g_226,&g_226,(void*)0,&g_226,&g_226}},{{&g_226,(void*)0,(void*)0,&g_346,&g_110,&g_110},{&g_346,&g_110,&g_110,(void*)0,&g_346,&g_346},{&g_346,&g_346,&g_110,&g_110,&g_110,&g_110},{&g_110,(void*)0,&g_226,&g_110,&g_110,&g_346},{&g_110,&g_346,(void*)0,&g_346,&g_226,(void*)0}},{{&g_226,&g_226,&g_226,&g_346,&g_346,&g_110},{&g_346,&g_226,&g_110,&g_346,&g_226,&g_226},{(void*)0,(void*)0,&g_110,&g_346,&g_226,&g_226},{&g_346,&g_346,(void*)0,&g_346,&g_226,&g_346},{&g_346,&g_110,&g_226,&g_346,&g_226,(void*)0}},{{&g_226,&g_346,(void*)0,&g_110,&g_346,&g_226},{&g_110,&g_110,&g_346,(void*)0,&g_110,&g_110},{&g_110,(void*)0,&g_346,&g_346,&g_346,(void*)0},{&g_226,&g_346,(void*)0,&g_226,&g_110,(void*)0},{(void*)0,&g_346,&g_110,&g_346,&g_110,&g_110}},{{(void*)0,&g_226,(void*)0,&g_226,&g_110,(void*)0},{&g_346,(void*)0,(void*)0,&g_110,(void*)0,(void*)0},{&g_346,&g_226,&g_226,&g_226,&g_346,(void*)0},{&g_346,(void*)0,&g_226,(void*)0,&g_226,&g_226},{(void*)0,(void*)0,&g_346,&g_110,&g_346,&g_110}}};
static unsigned char * const *g_459 = &g_460[6][1][0];
static const unsigned char g_466[2] = {252UL,252UL};
static unsigned char g_474 = 0x35L;
static int *g_515 = &g_333[0];
static unsigned short **g_528 = (void*)0;
static unsigned short **g_548[1] = {(void*)0};
static short *g_627[9][7][4] = {{{&g_113[0],(void*)0,&g_22,&g_24},{&g_113[0],&g_113[0],&g_22,&g_72},{&g_24,&g_22,&g_22,(void*)0},{&g_72,&g_24,&g_72,(void*)0},{(void*)0,&g_113[0],(void*)0,&g_113[0]},{&g_22,&g_22,&g_113[0],&g_113[0]},{&g_22,&g_22,&g_113[0],&g_113[0]}},{{&g_22,&g_22,(void*)0,&g_24},{(void*)0,&g_22,&g_72,&g_113[0]},{&g_113[0],&g_113[0],(void*)0,&g_24},{(void*)0,&g_113[0],(void*)0,&g_113[0]},{&g_113[0],&g_22,&g_22,(void*)0},{&g_113[0],&g_22,&g_113[0],&g_113[0]},{&g_22,&g_113[0],&g_113[0],&g_24}},{{&g_22,&g_113[0],(void*)0,&g_113[0]},{&g_22,(void*)0,&g_113[0],(void*)0},{(void*)0,(void*)0,&g_22,&g_113[0]},{(void*)0,&g_22,&g_72,&g_113[0]},{(void*)0,&g_113[0],&g_22,&g_22},{(void*)0,&g_113[0],&g_113[0],&g_22},{&g_22,(void*)0,(void*)0,&g_22}},{{&g_22,&g_113[0],&g_113[0],(void*)0},{&g_22,&g_22,&g_113[0],(void*)0},{&g_113[0],&g_72,&g_22,(void*)0},{&g_113[0],&g_22,(void*)0,(void*)0},{(void*)0,&g_113[0],(void*)0,&g_22},{&g_113[0],(void*)0,&g_113[0],&g_22},{&g_24,&g_113[0],&g_113[0],&g_22}},{{&g_113[0],&g_113[0],&g_22,&g_113[0]},{(void*)0,&g_22,&g_22,&g_113[0]},{&g_113[0],(void*)0,&g_113[0],(void*)0},{&g_24,(void*)0,&g_113[0],&g_113[0]},{&g_113[0],&g_113[0],(void*)0,&g_72},{&g_113[0],&g_22,(void*)0,&g_24},{&g_22,&g_72,&g_22,(void*)0}},{{(void*)0,&g_72,(void*)0,&g_24},{&g_72,&g_22,(void*)0,&g_72},{&g_22,&g_113[0],&g_113[0],&g_113[0]},{&g_113[0],(void*)0,&g_24,&g_113[0]},{&g_113[0],(void*)0,&g_113[0],&g_22},{&g_113[0],&g_22,&g_113[0],(void*)0},{&g_113[0],(void*)0,&g_113[0],&g_72}},{{&g_113[0],(void*)0,&g_24,&g_22},{&g_113[0],&g_113[0],&g_113[0],&g_113[0]},{&g_22,&g_24,(void*)0,&g_113[0]},{&g_72,&g_113[0],(void*)0,&g_113[0]},{(void*)0,&g_113[0],&g_22,&g_113[0]},{&g_22,&g_113[0],(void*)0,&g_113[0]},{&g_113[0],&g_24,(void*)0,&g_113[0]}},{{&g_113[0],&g_113[0],&g_113[0],&g_22},{&g_72,(void*)0,&g_22,&g_72},{&g_24,(void*)0,&g_72,(void*)0},{(void*)0,&g_22,&g_72,&g_22},{&g_24,(void*)0,&g_22,&g_113[0]},{&g_72,(void*)0,&g_113[0],&g_113[0]},{&g_113[0],&g_113[0],(void*)0,&g_72}},{{&g_113[0],&g_22,&g_113[0],(void*)0},{&g_72,(void*)0,(void*)0,&g_113[0]},{&g_22,(void*)0,&g_24,(void*)0},{(void*)0,&g_22,&g_22,&g_113[0]},{(void*)0,&g_113[0],&g_22,&g_113[0]},{&g_24,&g_72,(void*)0,&g_22},{&g_113[0],&g_113[0],&g_22,&g_72}}};
static unsigned short *g_737 = &g_215;
static short g_779 = 0x6762L;
static unsigned short g_781 = 3UL;
static unsigned char *g_794 = &g_474;
static unsigned char **g_793 = &g_794;
static unsigned char ***g_792 = &g_793;
static unsigned *g_850 = &g_119[4];
static unsigned *g_854 = &g_119[7];
static unsigned **g_853 = &g_854;
static int **g_895 = &g_515;
static int ***g_894 = &g_895;
static int g_937 = 9L;
static unsigned char g_943 = 0UL;
static unsigned g_1010 = 0xF6FEEEFAL;
static unsigned g_1024 = 6UL;
static char *g_1085[6] = {&g_173,&g_173,&g_173,&g_173,&g_173,&g_173};
static char ** const g_1084 = &g_1085[4];
static int *g_1133 = (void*)0;
static const unsigned char **g_1149 = (void*)0;
static char **g_1235[10][6][4] = {{{(void*)0,(void*)0,&g_1085[0],&g_1085[5]},{&g_1085[5],&g_1085[4],&g_1085[0],&g_1085[4]},{(void*)0,&g_1085[3],&g_1085[4],&g_1085[0]},{&g_1085[4],&g_1085[3],&g_1085[3],&g_1085[4]},{&g_1085[3],&g_1085[4],(void*)0,&g_1085[5]},{&g_1085[3],(void*)0,&g_1085[3],&g_1085[4]}},{{&g_1085[4],&g_1085[5],&g_1085[4],&g_1085[4]},{(void*)0,(void*)0,&g_1085[0],&g_1085[5]},{&g_1085[5],&g_1085[4],&g_1085[0],&g_1085[4]},{(void*)0,&g_1085[3],&g_1085[4],&g_1085[0]},{&g_1085[4],&g_1085[3],&g_1085[3],&g_1085[4]},{&g_1085[3],&g_1085[4],(void*)0,&g_1085[5]}},{{&g_1085[3],(void*)0,&g_1085[3],&g_1085[4]},{&g_1085[4],&g_1085[5],&g_1085[4],&g_1085[4]},{(void*)0,(void*)0,&g_1085[0],&g_1085[5]},{&g_1085[5],&g_1085[4],&g_1085[0],&g_1085[5]},{&g_1085[4],&g_1085[4],(void*)0,&g_1085[5]},{&g_1085[5],&g_1085[4],&g_1085[4],&g_1085[5]}},{{&g_1085[4],&g_1085[5],&g_1085[4],&g_1085[0]},{&g_1085[4],&g_1085[4],&g_1085[4],(void*)0},{&g_1085[5],&g_1085[0],(void*)0,(void*)0},{&g_1085[4],&g_1085[4],&g_1085[5],&g_1085[0]},{&g_1085[0],&g_1085[5],&g_1085[5],&g_1085[5]},{&g_1085[4],&g_1085[4],(void*)0,&g_1085[5]}},{{&g_1085[5],&g_1085[4],&g_1085[4],&g_1085[5]},{&g_1085[4],&g_1085[5],&g_1085[4],&g_1085[0]},{&g_1085[4],&g_1085[4],&g_1085[4],(void*)0},{&g_1085[5],&g_1085[0],(void*)0,(void*)0},{&g_1085[4],&g_1085[4],&g_1085[5],&g_1085[0]},{&g_1085[0],&g_1085[5],&g_1085[5],&g_1085[5]}},{{&g_1085[4],&g_1085[4],(void*)0,&g_1085[5]},{&g_1085[5],&g_1085[4],&g_1085[4],&g_1085[5]},{&g_1085[4],&g_1085[5],&g_1085[4],&g_1085[0]},{&g_1085[4],&g_1085[4],&g_1085[4],(void*)0},{&g_1085[5],&g_1085[0],(void*)0,(void*)0},{&g_1085[4],&g_1085[4],&g_1085[5],&g_1085[0]}},{{&g_1085[0],&g_1085[5],&g_1085[5],&g_1085[5]},{&g_1085[4],&g_1085[4],(void*)0,&g_1085[5]},{&g_1085[5],&g_1085[4],&g_1085[4],&g_1085[5]},{&g_1085[4],&g_1085[5],&g_1085[4],&g_1085[4]},{&g_1085[5],&g_1085[5],&g_1085[5],&g_1085[0]},{&g_1085[3],&g_1085[4],&g_1085[0],&g_1085[0]}},{{&g_1085[5],&g_1085[5],(void*)0,&g_1085[4]},{&g_1085[4],&g_1085[3],(void*)0,&g_1085[3]},{&g_1085[5],&g_1085[5],&g_1085[0],(void*)0},{&g_1085[3],&g_1085[5],&g_1085[5],&g_1085[3]},{&g_1085[5],&g_1085[3],&g_1085[5],&g_1085[4]},{&g_1085[5],&g_1085[5],&g_1085[5],&g_1085[0]}},{{&g_1085[3],&g_1085[4],&g_1085[0],&g_1085[0]},{&g_1085[5],&g_1085[5],(void*)0,&g_1085[4]},{&g_1085[4],&g_1085[3],(void*)0,&g_1085[3]},{&g_1085[5],&g_1085[5],&g_1085[0],(void*)0},{&g_1085[3],&g_1085[5],&g_1085[5],&g_1085[3]},{&g_1085[5],&g_1085[3],&g_1085[5],&g_1085[4]}},{{&g_1085[5],&g_1085[5],&g_1085[5],&g_1085[0]},{&g_1085[3],&g_1085[4],&g_1085[0],&g_1085[0]},{&g_1085[5],&g_1085[5],(void*)0,&g_1085[4]},{&g_1085[4],&g_1085[3],(void*)0,&g_1085[3]},{&g_1085[5],&g_1085[5],&g_1085[0],(void*)0},{&g_1085[3],&g_1085[5],&g_1085[5],&g_1085[3]}}};
static char ***g_1234 = &g_1235[3][1][0];
static unsigned g_1259 = 0x90E49827L;
static short g_1262 = 0x0921L;
static short g_1263 = 0x5480L;
static char ****g_1276 = &g_1234;
static int *g_1288 = &g_937;
static int **g_1287 = &g_1288;



static const unsigned short func_1(void);
static short func_2(int p_3, char p_4, unsigned short p_5, unsigned p_6, unsigned char p_7);
static const unsigned func_15(int p_16, char p_17);
static int func_30(short * p_31, short * p_32, unsigned char p_33, unsigned p_34, short * p_35);
static short * func_36(const short * p_37, short p_38, unsigned char p_39, char p_40, unsigned p_41);
static short func_42(short * p_43, int p_44);
static short * func_45(const short * const p_46, const short p_47, unsigned char p_48, short p_49, short * p_50);
static short * const func_51(short * p_52, short * p_53, short * p_54, short * p_55, const short * p_56);
static short * func_58(unsigned p_59, int p_60, const short * p_61, unsigned char p_62);
static int func_63(short * p_64, short * p_65, unsigned p_66, unsigned p_67, int p_68);
static const unsigned short func_1(void)
{
    int l_14 = 0xF82D83D7L;
    short *l_21 = &g_22;
    short *l_23 = &g_24;
    unsigned short l_1172 = 0x28BDL;
    int **l_1297 = &g_1288;
    int ***l_1298 = &g_1287;
    int l_1301 = 0L;
    (*g_414) = (((func_2(((safe_add_func_int32_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(4UL, ((l_14 >= 0x9892L) > (~l_14)))), l_14)), func_15(l_14, (((safe_rshift_func_uint16_t_u_s((g_20 <= l_14), 8)) >= ((*l_23) = (+((*l_21) = g_20)))) > 0xC2542929L)))) && l_14), l_14, l_14, (**g_853), l_1172) < l_1172) ^ l_1172) & l_1172);

    ;

    (*g_414) = ((l_1172 && (safe_mod_func_int32_t_s_s((l_14 = ((*g_854) <= (&g_1288 == ((*l_1298) = l_1297)))), (**g_853)))) < (func_15(l_1172, (!l_1172)) && (l_1301 = (safe_mul_func_uint16_t_u_u(l_1172, l_1172)))));
    return l_1301;
}







static short func_2(int p_3, char p_4, unsigned short p_5, unsigned p_6, unsigned char p_7)
{
    short l_1181 = (-10L);
    unsigned l_1190 = 0xA51DCB27L;
    char l_1191[2];
    int *l_1217 = &g_333[2];
    int l_1229 = 0x4BAA690EL;
    int l_1266 = 0x1A5A9EC2L;
    unsigned short **l_1289[9] = {(void*)0,&g_737,(void*)0,(void*)0,&g_737,(void*)0,(void*)0,&g_737,(void*)0};
    unsigned char *l_1293 = &g_346;
    int i;
    for (i = 0; i < 2; i++)
        l_1191[i] = (-1L);
    if ((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_add_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(l_1181, 3)) == ((*g_737) && (p_4 != (*g_515)))) < (safe_add_func_int32_t_s_s(p_7, ((((*g_854) = (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s(0xB50EL, (l_1181 ^ 65526UL))), l_1190))) >= l_1191[0]) <= l_1191[0])))), l_1191[0])), p_3)) && 0xEFL), l_1191[0])))
    {
        int l_1197 = 0x31EEE12DL;
        const unsigned short *l_1202 = &g_781;
        const unsigned short **l_1201 = &l_1202;
        unsigned short l_1280 = 1UL;
        int *l_1281 = &l_1229;
        for (p_5 = 0; (p_5 == 52); ++p_5)
        {
            unsigned ***l_1194[7] = {&g_853,&g_853,&g_853,&g_853,&g_853,&g_853,&g_853};
            unsigned short **l_1200 = &g_737;
            int *l_1205 = &l_1197;
            int **l_1206 = &l_1205;
            const short *l_1208 = &g_399;
            const short **l_1207 = &l_1208;
            const unsigned l_1218 = 0xA8603730L;
            int l_1258 = 0x158D6470L;
            int l_1261 = 3L;
            char l_1278 = 0xA7L;
            int i;
            (*g_515) = ((void*)0 == l_1194[6]);
        }
        (**g_894) = &l_1266;

        ;
        (*l_1281) = (&p_7 != l_1293);
        (*g_895) = &p_3;

        ;
    }
    else
    {
        unsigned short l_1294 = 0x84CFL;
        (*g_515) = func_42(&g_113[0], l_1294);

        ;
        for (g_22 = 0; (g_22 <= 0); g_22 += 1)
        {
            int i;
            (*g_238) = (*g_238);
            if (g_113[g_22])
                break;
            (**g_894) = &p_3;

            ;
            g_333[(g_22 + 2)] = p_5;
        }

        ;
    }

    ;
    ;
    return (*l_1217);


}







static const unsigned func_15(int p_16, char p_17)
{
    const short *l_29 = &g_22;
    short *l_57[1][10] = {{(void*)0,&g_22,(void*)0,&g_22,(void*)0,&g_22,(void*)0,&g_22,(void*)0,&g_22}};
    short *l_70 = &g_22;
    short **l_69[6] = {&l_70,&l_70,&l_70,&l_70,&l_70,&l_70};
    int l_167 = (-9L);
    int l_566 = 0x07DCFA46L;
    int l_567 = 0x9B08E72CL;
    short *l_730[5][5][10] = {{{&g_113[0],&g_22,(void*)0,&g_72,&g_24,&g_113[0],&g_113[0],&g_113[0],(void*)0,&g_22},{&g_22,(void*)0,(void*)0,(void*)0,&g_113[0],&g_113[0],&g_22,(void*)0,&g_113[0],(void*)0},{(void*)0,&g_72,&g_113[0],&g_22,&g_24,&g_22,&g_72,(void*)0,(void*)0,&g_22},{&g_72,&g_72,&g_72,&g_113[0],(void*)0,&g_113[0],&g_22,&g_113[0],&g_22,&g_113[0]},{&g_22,&g_24,&g_113[0],&g_24,&g_22,&g_113[0],&g_22,&g_113[0],&g_24,(void*)0}},{{&g_72,&g_113[0],(void*)0,&g_72,&g_113[0],&g_113[0],&g_24,(void*)0,&g_113[0],(void*)0},{&g_24,&g_72,&g_24,&g_72,&g_22,(void*)0,(void*)0,&g_113[0],&g_72,&g_113[0]},{&g_113[0],&g_22,(void*)0,&g_113[0],(void*)0,&g_72,&g_113[0],&g_24,&g_113[0],&g_24},{&g_113[0],&g_113[0],&g_22,&g_24,(void*)0,(void*)0,(void*)0,&g_22,(void*)0,(void*)0},{&g_22,&g_113[0],&g_22,(void*)0,(void*)0,&g_72,&g_113[0],(void*)0,&g_24,&g_113[0]}},{{&g_113[0],&g_22,&g_72,&g_24,&g_22,&g_113[0],&g_24,&g_24,&g_113[0],(void*)0},{&g_113[0],&g_22,(void*)0,&g_113[0],&g_22,&g_72,(void*)0,(void*)0,&g_113[0],&g_22},{&g_72,&g_113[0],&g_113[0],&g_24,&g_72,(void*)0,&g_24,(void*)0,&g_113[0],&g_113[0]},{&g_22,&g_113[0],&g_22,&g_22,&g_24,&g_24,&g_22,&g_22,&g_72,&g_113[0]},{&g_24,&g_113[0],&g_24,&g_22,&g_24,(void*)0,&g_72,&g_113[0],&g_113[0],&g_24}},{{&g_24,&g_113[0],&g_113[0],(void*)0,&g_113[0],(void*)0,&g_22,&g_22,(void*)0,&g_113[0]},{(void*)0,&g_113[0],&g_113[0],(void*)0,(void*)0,&g_24,&g_113[0],&g_22,&g_22,&g_113[0]},{&g_113[0],&g_113[0],&g_72,(void*)0,(void*)0,&g_113[0],(void*)0,(void*)0,&g_72,&g_24},{&g_72,(void*)0,&g_72,&g_22,&g_113[0],&g_22,&g_113[0],&g_113[0],&g_72,(void*)0},{(void*)0,(void*)0,&g_113[0],(void*)0,&g_113[0],&g_22,&g_22,(void*)0,&g_113[0],(void*)0}},{{&g_113[0],&g_113[0],&g_113[0],&g_113[0],&g_113[0],&g_113[0],(void*)0,&g_113[0],&g_24,&g_113[0]},{&g_113[0],(void*)0,&g_113[0],&g_113[0],&g_22,(void*)0,&g_113[0],(void*)0,(void*)0,&g_24},{(void*)0,&g_113[0],&g_113[0],&g_72,(void*)0,&g_72,(void*)0,&g_72,&g_113[0],&g_113[0]},{&g_113[0],&g_22,&g_72,&g_113[0],(void*)0,&g_113[0],(void*)0,(void*)0,(void*)0,&g_22},{(void*)0,&g_72,&g_113[0],&g_22,&g_113[0],&g_113[0],&g_72,&g_113[0],&g_113[0],&g_113[0]}}};
    unsigned short l_731 = 0x7DF4L;
    int *l_784 = &l_566;
    char *l_785[1][6];
    unsigned char l_786 = 0x8AL;
    unsigned char ***l_791 = (void*)0;
    char l_811 = 0x8AL;
    short ***l_901 = &l_69[1];
    short l_959 = 0xF8C4L;
    short l_997[4][8] = {{2L,1L,1L,2L,5L,2L,1L,1L},{1L,5L,0x0186L,0x0186L,5L,1L,5L,0x0186L},{2L,5L,5L,0x0186L,0x0186L,5L,1L,5L},{2L,0x0186L,6L,0x0186L,2L,2L,0x0186L,6L}};
    short l_1048 = 0L;
    unsigned char *l_1052 = (void*)0;
    unsigned short **l_1090 = &g_737;
    unsigned **l_1098 = (void*)0;
    int *** const l_1107 = &g_895;
    int l_1150 = 0xC9FDAEB6L;
    short *l_1151 = &l_997[0][4];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_785[i][j] = &g_173;
    }
    return (**g_853);
}







static int func_30(short * p_31, short * p_32, unsigned char p_33, unsigned p_34, short * p_35)
{
    short l_739 = (-1L);
    int l_765 = 0x8512DFE6L;
    for (g_110 = 0; (g_110 <= 2); g_110 += 1)
    {
        unsigned short l_738[2];
        const short *l_756 = &g_24;
        unsigned l_763[7][1][5] = {{{0xE73483F6L,0UL,0x33DC0662L,0xC0E97B1FL,0xC0E97B1FL}},{{0UL,0xE73483F6L,0UL,0x33DC0662L,0xC0E97B1FL}},{{0xC529AEE8L,0xC53DD501L,0xC0E97B1FL,0xC53DD501L,0xC529AEE8L}},{{0UL,0xC53DD501L,0xE73483F6L,0xC529AEE8L,0xE73483F6L}},{{0xE73483F6L,0xE73483F6L,0xC0E97B1FL,0xC529AEE8L,1UL}},{{0xC53DD501L,0UL,0UL,0xC53DD501L,0xE73483F6L}},{{0xC53DD501L,0xC529AEE8L,0x33DC0662L,0x33DC0662L,0xC529AEE8L}}};
        int *l_774 = &g_333[0];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_738[i] = 0xF380L;
        for (g_215 = 0; (g_215 <= 2); g_215 += 1)
        {
            unsigned short * const l_736[3][4][5] = {{{&g_215,&g_215,&g_364,(void*)0,&g_202[3]},{&g_202[9],&g_364,&g_364,&g_202[3],&g_202[5]},{&g_364,&g_202[6],&g_364,&g_202[3],&g_202[3]},{&g_364,&g_364,&g_215,&g_202[0],&g_202[6]}},{{(void*)0,&g_215,&g_202[6],&g_364,&g_202[6]},{(void*)0,(void*)0,&g_364,&g_215,&g_202[3]},{&g_364,&g_215,&g_215,&g_215,&g_202[5]},{(void*)0,&g_202[7],&g_202[0],&g_364,&g_202[3]}},{{&g_202[0],&g_215,&g_364,&g_215,&g_364},{&g_215,&g_202[9],&g_202[2],&g_364,&g_202[9]},{&g_202[7],&g_202[5],&g_364,&g_364,&g_202[5]},{&g_202[3],&g_215,&g_215,(void*)0,&g_364}}};
            unsigned short l_742[7][10] = {{0UL,0x6A69L,0x6E21L,0x2B1AL,0x20FEL,0x4BCBL,0x4BCBL,0x20FEL,0x2B1AL,0x6E21L},{0x6A69L,0x6A69L,0x2BDDL,65535UL,65534UL,0xCE7DL,0x4BCBL,0x6E21L,65535UL,65534UL},{0UL,0x6A69L,65534UL,0x23ABL,0x6E21L,0UL,0x4BCBL,0x2BDDL,0x23ABL,0x2BDDL},{0x4BCBL,0x6A69L,65534UL,0xFAF3L,65534UL,0x6A69L,0x4BCBL,65534UL,0xFAF3L,0x20FEL},{0xCE7DL,0x6A69L,0x20FEL,0UL,0x2BDDL,0UL,0x4BCBL,65534UL,0UL,65534UL},{0UL,0x6A69L,0x6E21L,0x2B1AL,0x20FEL,0x4BCBL,0x4BCBL,0x20FEL,0x2B1AL,0x6E21L},{0x6A69L,0x6A69L,0x2BDDL,65535UL,65534UL,0xCE7DL,0x4BCBL,0x6E21L,65535UL,65534UL}};
            short *l_747 = &g_113[0];
            int i, j, k;
            (*g_515) = (g_333[g_215] & ((g_333[g_215] && (((0xB72AL | (safe_sub_func_int32_t_s_s((1L || (0x1BL && (safe_lshift_func_uint8_t_u_s((l_736[1][3][3] == g_737), 4)))), (func_42(p_32, p_33) >= l_738[0])))) < l_739) && l_739)) | 0xEAL));
            (*g_414) = (func_42((g_71[g_215][g_110] = p_35), (safe_sub_func_int16_t_s_s(l_742[1][7], ((&p_34 != &g_119[7]) > ((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((*l_747) = 0x8B41L), (safe_lshift_func_int16_t_s_u(0x3361L, (g_333[g_215] = l_738[0]))))), func_42(p_31, l_738[0]))) || 1L))))) > 7UL);

            ;
            (*g_515) = (safe_lshift_func_uint16_t_u_u((l_739 | 0x54D4107DL), 3));
            for (g_20 = 27; (g_20 <= 28); g_20++)
            {
                unsigned short *l_764 = &g_202[0];
                if (((l_764 = func_58((safe_add_func_int16_t_s_s(0x8808L, (0x5A55L || l_742[2][1]))), p_34, l_756, (safe_sub_func_int32_t_s_s((g_333[g_215] | ((safe_add_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u(l_763[5][0][1], (l_739 != l_763[5][0][1]))) == 0L), 0x23C7L)) <= (*g_515))), p_34)))) != p_31))
                {
                    (*g_515) = ((*g_737) == l_763[4][0][1]);
                }
                else
                {
                    return p_34;
                }

                ;
                l_765 = p_34;
                (*g_515) = ((l_763[5][0][1] < func_42(p_32, p_34)) & (safe_mul_func_uint8_t_u_u((((l_739 && (*g_737)) > ((!p_33) & ((g_346 >= (safe_rshift_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(1L, p_33)), p_33))) <= g_20))) | (-7L)), 0L)));
            }
        }
        for (g_346 = 0; (g_346 <= 0); g_346 += 1)
        {
            int *l_783[10] = {&g_333[1],&g_333[0],&g_333[0],&g_333[1],&g_333[0],&g_333[0],&g_333[1],&g_333[0],&g_333[0],&g_333[1]};
            int i;
            if (((*g_515) = g_113[g_346]))
            {
                int i;
                if (g_119[(g_110 + 5)])
                    break;
                (*g_238) = l_774;

                ;
            }
            else
            {
                int *l_782 = &g_333[2];
                for (g_364 = 0; (g_364 <= 3); g_364 += 1)
                {
                    short **l_776 = &g_627[0][6][2];
                    short ***l_775 = &l_776;
                    char *l_780[2];
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_780[i] = (void*)0;
                    (*g_238) = (void*)0;

                    ;
                    (*g_238) = (*g_238);
                    (*l_775) = (void*)0;

                    ;
                    (*g_515) = ((g_202[(g_346 + 8)] & (func_42(g_627[(g_364 + 2)][(g_364 + 2)][(g_346 + 1)], (func_42(&g_22, (g_781 = ((g_173 = (p_33 != (safe_add_func_int8_t_s_s(g_72, (l_765 = func_42(&l_739, (g_779 = p_34))))))) >= ((*p_35) && (*p_35))))) | g_221)) <= 255UL)) > g_113[g_346]);
                }
                (*g_238) = l_782;

                ;
                for (g_226 = 0; (g_226 <= 1); g_226 += 1)
                {
                    (*g_238) = l_782;
                }
            }

            ;
            (*g_238) = l_783[8];

            ;
            if (p_33)
                break;
            (*g_238) = l_774;

            ;
        }
    }
    return l_765;
}







static short * func_36(const short * p_37, short p_38, unsigned char p_39, char p_40, unsigned p_41)
{
    unsigned l_572 = 18446744073709551610UL;
    unsigned char *l_579 = &g_110;
    char l_593[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    unsigned l_594 = 0xA46B1A80L;
    int *l_595 = &g_333[1];
    unsigned short *l_617 = (void*)0;
    unsigned short **l_616[3];
    unsigned l_663 = 0x0A93DA3BL;
    short *l_687 = (void*)0;
    unsigned l_711 = 0x74A95140L;
    int l_723 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_616[i] = &l_617;
lbl_600:
    for (g_215 = 0; (g_215 >= 44); g_215++)
    {
        if ((*g_414))
            break;
    }
    if ((safe_add_func_int32_t_s_s(p_39, (l_572 && (+((p_38 = ((safe_add_func_int8_t_s_s((g_173 = l_572), l_572)) == (((*l_579) = (safe_add_func_int8_t_s_s((safe_rshift_func_int16_t_s_s(0x6814L, 11)), 0x02L))) | func_42(&g_113[0], g_466[1])))) <= (*p_37)))))))
    {
        short *l_603 = &g_113[0];
        int *l_618 = &g_20;
        unsigned char *l_671 = &g_110;
        short **l_707 = (void*)0;
        short ***l_706 = &l_707;
        short **l_710[4][9] = {{(void*)0,&g_71[1][1],&g_71[1][1],(void*)0,&g_71[1][1],&g_71[1][1],(void*)0,&g_71[1][1],&g_71[1][1]},{&l_603,&l_687,&l_687,&l_603,&l_687,&l_687,&l_603,&l_687,&l_687},{(void*)0,&g_71[1][1],&g_71[1][1],(void*)0,&g_71[1][1],&g_71[1][1],(void*)0,&g_71[1][1],&g_71[1][1]},{&l_603,&l_687,&l_687,&l_603,&l_687,&l_687,&l_603,&l_687,&l_687}};
        short l_720[3];
        int l_721 = 1L;
        char *l_722 = &l_593[2];
        int i, j;
        for (i = 0; i < 3; i++)
            l_720[i] = 0x321DL;
lbl_699:
        for (g_20 = 0; (g_20 == (-26)); g_20 = safe_sub_func_int8_t_s_s(g_20, 5))
        {
            short l_585 = 6L;
            int l_644 = (-1L);
            unsigned * const l_681[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
            int i;
            if (p_40)
            {
                const int l_588 = (-1L);
                short *l_592 = &g_113[0];
                for (g_173 = 9; (g_173 >= 0); g_173 -= 1)
                {
                    int * const l_582[7] = {&g_333[0],&g_333[0],&g_333[0],&g_333[0],&g_333[0],&g_333[0],&g_333[0]};
                    int **l_583 = &g_414;
                    int i;
                    (*g_238) = (*g_238);
                    (*l_583) = l_582[5];

                    ;
                    for (g_116 = 1; (g_116 <= 9); g_116 += 1)
                    {
                        int l_584 = 0x70637105L;
                        int i;
                        (*g_238) = ((*l_583) = &g_333[0]);

                        ;
                        (*g_515) = (((((l_584 = ((void*)0 != (*g_459))) != g_119[g_173]) == l_585) && (((safe_add_func_uint32_t_u_u(((l_588 & ((((~(~(l_588 != (safe_unary_minus_func_uint32_t_u((p_41 != ((safe_sub_func_int16_t_s_s(func_42(&g_24, func_42(l_592, g_466[1])), l_588)) ^ 1L))))))) < 0x0C5FCF6FL) >= l_593[6]) != p_39)) && g_226), l_594)) || p_40) & l_585)) >= 0x6A7561D4L);

                        ;
                    }
                    (*l_583) = l_595;

                    ;
                }
                for (g_474 = 8; (g_474 <= 19); g_474++)
                {
                    unsigned char l_609 = 1UL;
                    for (p_38 = 0; (p_38 <= 15); p_38 = safe_add_func_uint16_t_u_u(p_38, 3))
                    {
                        if (g_22)
                            goto lbl_600;
                    }
                    if (g_173)
                        goto lbl_600;
                    for (p_41 = 27; (p_41 > 45); p_41++)
                    {
                        unsigned short l_604 = 1UL;
                        char *l_614 = (void*)0;
                        unsigned short ***l_615[10][9] = {{&g_548[0],&g_548[0],&g_548[0],&g_528,&g_548[0],&g_548[0],&g_528,&g_548[0],&g_528},{&g_528,&g_528,&g_528,&g_528,&g_528,&g_528,&g_548[0],&g_528,&g_528},{&g_548[0],&g_548[0],&g_528,&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0]},{&g_548[0],&g_528,&g_548[0],&g_528,&g_528,&g_548[0],&g_548[0],&g_548[0],&g_528},{&g_548[0],&g_548[0],&g_528,&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0]},{&g_528,&g_548[0],&g_548[0],(void*)0,&g_548[0],&g_528,(void*)0,&g_548[0],(void*)0},{&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0]},{&g_528,&g_548[0],(void*)0,&g_548[0],&g_548[0],&g_528,&g_528,&g_548[0],&g_548[0]},{&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_548[0],&g_528,&g_548[0]},{&g_528,&g_548[0],(void*)0,&g_528,&g_528,&g_528,(void*)0,&g_548[0],&g_528}};
                        int i, j;
                        (*g_515) = func_42(l_603, (l_604 < (p_40 = (safe_mod_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((p_40 < l_609) != 0xBAL), (safe_mul_func_int16_t_s_s((safe_rshift_func_uint8_t_u_s(p_39, p_41)), p_41)))), p_39)))));

                        ;
                        l_616[0] = (void*)0;
                        (*g_238) = l_618;

                        ;
                        if (p_41)
                            continue;
                    }
                }
            }
            else
            {
                int *l_619 = (void*)0;
                int **l_620 = &l_619;
                for (p_38 = 0; (p_38 <= 9); p_38 += 1)
                {
                    (*g_238) = l_595;

                    ;
                    (*g_238) = l_619;

                    ;
                }
                l_595 = ((*l_620) = l_618);

                ;
                ;
            }
            if (((*g_515) = p_39))
            {
                unsigned l_626 = 4294967287UL;
                int **l_642 = &g_515;
                short *l_647 = &g_113[0];
                for (l_585 = 0; (l_585 <= 2); l_585 += 1)
                {
                    int **l_621 = &g_144;
                    (*g_238) = ((*l_621) = (l_595 = l_595));

                    ;
                    ;
                    for (g_215 = 0; (g_215 <= 2); g_215 += 1)
                    {
                        int i;
                        (*g_238) = &g_333[g_215];

                        ;
                    }
                }
                for (l_594 = 0; (l_594 <= 24); ++l_594)
                {
                    int l_636[6][5][3] = {{{0x01E6DAA1L,(-6L),0x27552E12L},{0xA1AD5BF7L,0L,0xA1AD5BF7L},{(-4L),1L,0L},{(-1L),1L,0x50AA486CL},{(-6L),0L,(-2L)}},{{0xEE915780L,(-6L),(-6L)},{(-6L),0L,0x01E6DAA1L},{(-1L),0x27552E12L,0x01E6DAA1L},{(-4L),0x01E6DAA1L,(-6L)},{0xA1AD5BF7L,0x50AA486CL,(-2L)}},{{0x01E6DAA1L,0x01E6DAA1L,0x50AA486CL},{0L,0x27552E12L,0L},{0L,0L,0xA1AD5BF7L},{0x01E6DAA1L,(-6L),0x27552E12L},{0xA1AD5BF7L,0L,0xA1AD5BF7L}},{{0x27552E12L,(-6L),0x01E6DAA1L},{0L,(-6L),(-1L)},{0L,0xA1AD5BF7L,0x50AA486CL},{0L,0L,0L},{0L,0xEE915780L,(-2L)}},{{0L,1L,(-2L)},{0x27552E12L,(-2L),0L},{(-4L),(-1L),0x50AA486CL},{(-2L),(-2L),(-1L)},{0xA1AD5BF7L,1L,0x01E6DAA1L}},{{0xA1AD5BF7L,0xEE915780L,(-4L)},{(-2L),0L,1L},{(-4L),0xA1AD5BF7L,(-4L)},{0x27552E12L,(-6L),0x01E6DAA1L},{0L,(-6L),(-1L)}}};
                    int ***l_643 = &l_642;
                    const short *l_646 = &g_399;
                    const short **l_645 = &l_646;
                    int l_650 = 1L;
                    char *l_662 = &l_593[6];
                    int i, j, k;
                }
                if (l_585)
                    continue;
            }
            else
            {
                short **l_664 = &g_71[4][0];
                unsigned char **l_672 = &l_579;
                unsigned char l_677 = 0UL;
                unsigned short *l_678 = &g_202[3];
                char *l_679 = &g_173;
                char *l_680 = &l_593[6];
                unsigned *l_682 = &g_119[7];
                int *l_697 = (void*)0;
                if (l_585)
                    break;
                (*g_515) = (+(func_42(((*l_664) = &g_24), ((((safe_mul_func_int16_t_s_s(((safe_mod_func_int32_t_s_s(((safe_add_func_int8_t_s_s((((*l_672) = l_671) != (*g_459)), p_38)) && ((l_644 == func_42(&p_38, (safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(l_677, ((*l_680) = ((*l_679) = (p_37 != (l_678 = l_678)))))), p_39)))) > l_677)), 4294967295UL)) || l_585), p_38)) ^ (*l_618)) == (*l_618)) > l_644)) || g_221));

                ;
                if ((l_585 != (0x90L | (l_681[5] != l_682))))
                {
                    for (g_173 = 2; (g_173 != (-19)); g_173 = safe_sub_func_uint32_t_u_u(g_173, 8))
                    {
                        (*g_238) = (*g_238);
                    }
                    if (g_215)
                        goto lbl_600;
                    if (g_22)
                        goto lbl_699;
                }
                else
                {
                    short l_690 = 0x1D20L;
                    unsigned short l_695[6] = {1UL,65533UL,1UL,1UL,65533UL,1UL};
                    int i;
                    for (p_39 = 24; (p_39 > 48); p_39 = safe_add_func_uint16_t_u_u(p_39, 7))
                    {
                        return l_687;


                    }
                    if (p_39)
                        continue;
                    if ((l_644 = ((safe_add_func_int8_t_s_s(((func_42(&g_24, l_690) | p_40) <= (*l_618)), (+((*l_679) = (safe_rshift_func_int16_t_s_u((*p_37), (p_38 ^ ((*l_603) = (safe_lshift_func_uint16_t_u_s(((-1L) && l_695[4]), 4)))))))))) ^ 0xFFL)))
                    {
                        int **l_696 = &l_618;
                        (*g_238) = ((*l_696) = l_682);

                        ;
                        ;
                        if (p_38)
                            break;
                    }
                    else
                    {
                        (*g_238) = l_697;
                        (*g_515) = (0UL <= ((0x3F34L || 0xA336L) | ((*p_37) < (*l_618))));
                        if (p_39)
                            continue;
                        if (p_41)
                            continue;
                    }

                    ;
                    if ((g_466[1] != (-10L)))
                    {
                        (*g_238) = (void*)0;

                        ;
                        if (l_677)
                            goto lbl_600;
                    }
                    else
                    {
                        short *l_698[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_698[i] = (void*)0;
                        (*g_515) = (1L & 9UL);
                        if (l_594)
                            goto lbl_699;
                        return l_698[1];


                    }

                    ;
                }
                (*g_515) = 1L;
            }
            return l_603;


        }
        l_723 = ((safe_mul_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((*l_618), ((safe_rshift_func_uint8_t_u_s(((*l_618) & (&p_37 == ((*l_706) = &l_687))), ((safe_mul_func_int8_t_s_s((func_42((l_687 = &g_113[0]), l_711) != p_39), ((*l_722) = ((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s(((*g_515) = (safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((*p_37), 0xA504L)), p_41))), l_720[1])), l_721)) & p_39)))) | 4294967294UL))) > (*l_618)))), p_38)) && (*l_618));

        ;
        ;
        ;
        (*g_238) = l_618;

        ;
    }
    else
    {
        unsigned l_724 = 0UL;
        short *l_729 = &g_113[0];
        if ((l_724 & 0xAAL))
        {
            unsigned l_727 = 0x6815ADC1L;
            for (g_116 = 22; (g_116 > 9); g_116 = safe_sub_func_uint8_t_u_u(g_116, 1))
            {
                short *l_728 = &g_113[0];
                (*g_515) = l_727;
                return l_728;


            }
            return &g_113[0];


        }
        else
        {
            return l_729;


        }
    }

    ;
    ;
    if (g_22)
        goto lbl_600;
    return l_617;


}







static short func_42(short * p_43, int p_44)
{
    int *l_564 = (void*)0;
    int l_565 = 0xBB091EE7L;
    (*g_238) = l_564;

    ;
    return l_565;
}







static short * func_45(const short * const p_46, const short p_47, unsigned char p_48, short p_49, short * p_50)
{
    int **l_550 = &g_515;
    int ***l_549 = &l_550;
    short *l_563 = &g_113[0];
    (*l_549) = &g_515;
    for (g_116 = 6; (g_116 >= 36); g_116 = safe_add_func_int32_t_s_s(g_116, 5))
    {
        int *l_555 = &g_333[0];
        short l_557 = (-1L);
        for (g_20 = (-26); (g_20 > (-10)); ++g_20)
        {
            unsigned short *l_556 = &g_202[6];
            unsigned char *l_558 = (void*)0;
            unsigned char *l_559 = &g_110;
            unsigned short *l_560 = &g_364;
            (**l_549) = l_555;

            ;
            (*g_515) = (p_49 | ((*l_560) = ((**l_550) & ((((*l_556) = 0xDEBFL) > 0x1502L) & ((*l_559) = l_557)))));
            if ((*l_555))
                break;
        }
    }
    (*g_238) = (*l_550);


    (*g_515) = (safe_mod_func_int16_t_s_s(((*l_563) = 1L), (***l_549)));
    return l_563;


}







static short * const func_51(short * p_52, short * p_53, short * p_54, short * p_55, const short * p_56)
{
    unsigned short l_307 = 0UL;
    int *l_313[4];
    unsigned l_314 = 0xF23D3C10L;
    char l_327 = 0L;
    unsigned l_328[1][6];
    unsigned *l_329 = &l_328[0][2];
    unsigned l_330 = 0xA1FA74C0L;
    char *l_331 = (void*)0;
    char *l_332[8];
    short * const l_415 = &g_22;
    unsigned char * const l_463[10][6] = {{(void*)0,&g_346,(void*)0,&g_226,&g_346,&g_346},{&g_110,(void*)0,(void*)0,&g_110,&g_346,&g_226},{&g_226,&g_110,&g_346,&g_110,&g_226,&g_226},{&g_110,&g_226,&g_226,&g_226,&g_226,&g_110},{(void*)0,&g_110,&g_346,&g_226,&g_346,&g_110},{&g_346,(void*)0,&g_226,&g_346,&g_346,&g_226},{&g_346,&g_346,&g_346,&g_226,(void*)0,&g_226},{(void*)0,&g_346,(void*)0,&g_346,(void*)0,(void*)0},{&g_226,&g_226,&g_226,&g_226,&g_110,&g_346},{&g_346,&g_226,(void*)0,&g_226,&g_346,&g_346}};
    unsigned char * const *l_462 = &l_463[0][1];
    short l_512 = (-1L);
    unsigned short ***l_544 = &g_528;
    unsigned short *l_547 = &g_215;
    unsigned short **l_546 = &l_547;
    unsigned short ***l_545[8][3][7] = {{{&l_546,&l_546,(void*)0,&l_546,(void*)0,&l_546,&l_546},{(void*)0,&l_546,(void*)0,&l_546,&l_546,&l_546,(void*)0},{&l_546,&l_546,(void*)0,&l_546,(void*)0,&l_546,&l_546}},{{&l_546,(void*)0,&l_546,&l_546,(void*)0,(void*)0,&l_546},{&l_546,&l_546,(void*)0,&l_546,(void*)0,(void*)0,&l_546},{&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,&l_546}},{{&l_546,&l_546,&l_546,&l_546,(void*)0,(void*)0,(void*)0},{&l_546,&l_546,&l_546,&l_546,&l_546,(void*)0,&l_546},{&l_546,&l_546,(void*)0,(void*)0,&l_546,&l_546,&l_546}},{{&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,&l_546},{&l_546,(void*)0,&l_546,&l_546,(void*)0,&l_546,(void*)0},{&l_546,&l_546,&l_546,&l_546,(void*)0,(void*)0,&l_546}},{{(void*)0,&l_546,&l_546,&l_546,&l_546,(void*)0,&l_546},{&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,(void*)0},{&l_546,&l_546,(void*)0,(void*)0,&l_546,&l_546,&l_546}},{{&l_546,&l_546,&l_546,&l_546,&l_546,(void*)0,(void*)0},{&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,(void*)0},{&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,&l_546}},{{(void*)0,&l_546,&l_546,&l_546,&l_546,(void*)0,&l_546},{&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,&l_546},{&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,&l_546}},{{&l_546,&l_546,(void*)0,&l_546,&l_546,&l_546,&l_546},{&l_546,&l_546,&l_546,&l_546,&l_546,&l_546,&l_546},{&l_546,&l_546,&l_546,&l_546,(void*)0,(void*)0,(void*)0}}};
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_313[i] = &g_20;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 6; j++)
            l_328[i][j] = 4294967295UL;
    }
    for (i = 0; i < 8; i++)
        l_332[i] = &l_327;
    if ((l_307 != (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((l_307 || (l_314 = (safe_unary_minus_func_int32_t_s((g_20 = l_307))))), 6)) <= (safe_add_func_uint16_t_u_u(g_113[0], (safe_rshift_func_int8_t_s_s((!(g_333[0] = (g_173 = (safe_sub_func_uint32_t_u_u(6UL, (safe_sub_func_int16_t_s_s((~(safe_lshift_func_int16_t_s_s(((*p_53) = (*p_54)), 3))), ((((safe_add_func_uint32_t_u_u((l_330 = ((*l_329) = (l_327 ^ l_328[0][2]))), g_113[0])) || 2UL) == g_202[5]) > (*p_54))))))))), 6))))), g_202[4]))))
    {
        unsigned short *l_342 = &g_202[8];
        int l_344 = 0x16C9F1E6L;
        short l_363 = 0x8398L;
        short * const l_369 = (void*)0;
        char l_383 = 0xABL;
        int l_403 = 0x69095E57L;
        int *l_427 = &l_403;
        for (g_110 = (-29); (g_110 > 36); ++g_110)
        {
            unsigned short **l_343 = &l_342;
            unsigned char *l_345 = &g_226;
            int l_347[7] = {0x2ED9C82AL,0x2ED9C82AL,0x2ED9C82AL,0x2ED9C82AL,0x2ED9C82AL,0x2ED9C82AL,0x2ED9C82AL};
            int *l_372 = (void*)0;
            int **l_495 = (void*)0;
            int **l_496 = &g_144;
            int **l_497 = (void*)0;
            int **l_498 = &l_372;
            int i;
        }
    }
    else
    {
        char l_501 = (-7L);
        int *l_516 = &g_20;
        for (g_20 = 1; (g_20 == (-21)); --g_20)
        {
            const unsigned l_509 = 1UL;
            if (l_501)
                break;
            for (g_346 = 0; (g_346 == 46); g_346 = safe_add_func_int16_t_s_s(g_346, 8))
            {
                int *l_504 = (void*)0;
                (*g_238) = l_504;

                ;
                for (g_72 = 0; (g_72 <= 2); g_72 += 1)
                {
                    int i;
                    g_333[g_72] = ((safe_lshift_func_int16_t_s_u(((*p_54) = (safe_mod_func_uint16_t_u_u(g_333[g_72], g_333[g_72]))), l_509)) < (safe_lshift_func_uint8_t_u_s(0x19L, 3)));
                    g_333[g_72] = l_512;
                }
                for (l_330 = (-18); (l_330 > 27); l_330 = safe_add_func_int16_t_s_s(l_330, 3))
                {
                    (*g_238) = g_515;

                    ;
                    (*g_238) = l_516;

                    ;
                }

                ;
            }
        }

        ;
        (*g_238) = l_516;

        ;
        (*l_516) = (*l_516);
    }

    ;
    if ((safe_sub_func_uint32_t_u_u(0x7A805AE6L, g_221)))
    {
        int *l_519 = (void*)0;
        for (g_24 = 0; (g_24 <= 2); g_24 += 1)
        {
            l_519 = l_519;
            for (l_330 = 0; (l_330 <= 2); l_330 += 1)
            {
                unsigned char *l_521 = &g_474;
                unsigned char ** const l_520 = &l_521;
                unsigned char **l_523 = &l_521;
                unsigned char ***l_522 = &l_523;
                (*l_522) = l_520;
            }
        }
        (*g_238) = l_519;

        ;
        for (g_72 = (-7); (g_72 != (-20)); g_72--)
        {
            unsigned short **l_526 = (void*)0;
            unsigned short ***l_527[5][2] = {{&l_526,&l_526},{&l_526,&l_526},{&l_526,&l_526},{&l_526,&l_526},{&l_526,&l_526}};
            int l_531 = 0xCBDB1773L;
            int i, j;
            g_528 = l_526;
            for (g_364 = (-15); (g_364 == 12); g_364++)
            {
                (*g_515) = (*g_414);
                if (l_531)
                    continue;
            }
        }
    }
    else
    {
        char l_532 = 0L;
        const short *l_533 = &g_399;
        const short **l_534 = &l_533;
        unsigned l_535 = 0x80FBD601L;
        unsigned l_538 = 18446744073709551609UL;
        short **l_542 = &g_71[4][0];
        int *l_543 = &g_333[0];
        (*g_238) = (*g_238);
        if (l_327)
            goto lbl_539;
lbl_539:
        (*g_515) = func_63(func_58(g_333[0], l_532, ((*l_534) = l_533), l_535), &l_512, (6UL ^ (safe_lshift_func_uint16_t_u_s(1UL, ((*p_55) = (*p_56))))), l_532, l_538);
        (*g_515) = ((safe_sub_func_uint8_t_u_u((g_333[0] & l_532), l_535)) ^ l_535);
        for (l_535 = 2; (l_535 <= 9); l_535 += 1)
        {
            (*g_414) = ((*g_515) = 0x66DBA6EDL);
            (*g_238) = (void*)0;

            ;
            (*g_238) = l_543;

            ;
            for (g_116 = 1; (g_116 <= 9); g_116 += 1)
            {
                return &g_113[0];


            }
        }

        ;
    }

    ;
    g_548[0] = ((*l_544) = g_528);
    return &g_113[0];


}







static short * func_58(unsigned p_59, int p_60, const short * p_61, unsigned char p_62)
{
    unsigned char *l_168[6][10][4] = {{{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,(void*)0,&g_110},{(void*)0,&g_110,(void*)0,&g_110},{&g_110,&g_110,&g_110,&g_110}},{{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,(void*)0,&g_110,(void*)0}},{{&g_110,(void*)0,&g_110,&g_110},{&g_110,&g_110,&g_110,(void*)0},{&g_110,&g_110,(void*)0,&g_110},{&g_110,(void*)0,&g_110,(void*)0},{&g_110,&g_110,&g_110,(void*)0},{&g_110,&g_110,&g_110,&g_110},{(void*)0,&g_110,&g_110,&g_110},{(void*)0,&g_110,(void*)0,&g_110},{&g_110,(void*)0,&g_110,&g_110},{(void*)0,&g_110,&g_110,&g_110}},{{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,(void*)0},{&g_110,&g_110,&g_110,(void*)0},{&g_110,(void*)0,(void*)0,&g_110},{&g_110,&g_110,(void*)0,(void*)0},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{(void*)0,(void*)0,&g_110,&g_110}},{{&g_110,(void*)0,(void*)0,&g_110},{(void*)0,&g_110,&g_110,&g_110},{(void*)0,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,(void*)0},{&g_110,(void*)0,&g_110,&g_110},{(void*)0,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,(void*)0,(void*)0,&g_110},{&g_110,&g_110,&g_110,&g_110}},{{&g_110,&g_110,&g_110,(void*)0},{&g_110,&g_110,(void*)0,(void*)0},{(void*)0,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{(void*)0,(void*)0,(void*)0,&g_110},{(void*)0,&g_110,&g_110,&g_110},{&g_110,&g_110,&g_110,&g_110},{&g_110,(void*)0,&g_110,(void*)0},{&g_110,&g_110,&g_110,&g_110},{(void*)0,&g_110,(void*)0,(void*)0}}};
    int l_171 = (-1L);
    char *l_172 = &g_173;
    unsigned *l_190 = (void*)0;
    unsigned **l_189 = &l_190;
    short *l_248 = &g_113[0];
    short *l_251 = &g_22;
    int * const l_303 = &l_171;
    int i, j, k;
    if (((p_62 = p_62) > ((*l_172) = (safe_add_func_int16_t_s_s(l_171, (*p_61))))))
    {
        unsigned short l_182 = 9UL;
        unsigned char *l_183 = &g_110;
        unsigned char **l_184 = &l_168[5][1][3];
        unsigned short *l_185 = &l_182;
        int *l_186 = (void*)0;
        int *l_187 = &l_171;
        (*l_187) = (safe_add_func_uint32_t_u_u((((*l_185) = ((safe_lshift_func_int16_t_s_s(((safe_lshift_func_int16_t_s_u((*p_61), (safe_sub_func_uint8_t_u_u(((&g_20 != (void*)0) ^ (-1L)), (l_182 <= p_59))))) != (((*l_184) = l_183) == l_172)), (*p_61))) != l_182)) != 0L), l_171));
    }
    else
    {
        short *l_205 = &g_24;
        int l_208 = 1L;
        const int *l_222[1];
        int l_261 = (-2L);
        const unsigned char *l_295 = &g_226;
        int i;
        for (i = 0; i < 1; i++)
            l_222[i] = &l_208;
        for (g_173 = 0; (g_173 <= 2); g_173 += 1)
        {
            short *l_188 = &g_24;
            short l_194 = (-4L);
            int *l_198 = &g_20;
            for (p_60 = 0; (p_60 <= 2); p_60 += 1)
            {
                if (p_60)
                    break;
                return l_188;


            }
        }
        for (g_24 = 0; (g_24 <= (-5)); g_24 = safe_sub_func_uint8_t_u_u(g_24, 1))
        {
            short *l_296 = &g_24;
            int l_297 = 0xDB3185A6L;
            int *l_298 = &l_208;
            int **l_304 = (void*)0;
            int **l_305 = &l_298;
            const int *l_306 = &l_208;
        }
    }
    (*g_238) = (void*)0;

    ;
    return &g_24;


}







static int func_63(short * p_64, short * p_65, unsigned p_66, unsigned p_67, int p_68)
{
    unsigned char l_73 = 0xFFL;
    unsigned l_96 = 18446744073709551613UL;
    int l_120 = 0L;
    int *l_150 = &l_120;
    unsigned *l_153 = &g_119[9];
    if ((l_73 = 0x4C6E12CDL))
    {
        return p_66;
    }
    else
    {
        int l_75 = (-1L);
        int **l_149 = &g_144;
        if (g_24)
        {
            unsigned char l_99 = 0x8DL;
            int l_114 = 0x8DC0916DL;
            if ((!0xA40A7B48L))
            {
                int *l_74 = &g_20;
lbl_80:
                (*l_74) = p_68;
                if (((*l_74) = l_75))
                {
                    (*l_74) = (-8L);
                }
                else
                {
                    int **l_76 = (void*)0;
                    int **l_77 = &l_74;
                    (*l_77) = &p_68;

                    ;
                }
                for (p_66 = 14; (p_66 != 12); --p_66)
                {
                    return p_66;
                }
                if (g_24)
                    goto lbl_80;
            }
            else
            {
                int l_95 = 1L;
                unsigned short l_108 = 0xD38BL;
                int *l_135 = (void*)0;
                for (l_73 = (-7); (l_73 != 48); l_73 = safe_add_func_int32_t_s_s(l_73, 7))
                {
                    int l_89 = (-7L);
                    int l_91[4][5] = {{0x80E44E38L,0xBFE1A273L,0xBFE1A273L,0x80E44E38L,0xBFE1A273L},{0x80E44E38L,0x80E44E38L,0xC83B0F60L,0x80E44E38L,0x80E44E38L},{0xBFE1A273L,0x80E44E38L,0xBFE1A273L,0xBFE1A273L,0x80E44E38L},{0x80E44E38L,0xBFE1A273L,0xBFE1A273L,0x80E44E38L,0xBFE1A273L}};
                    int *l_111 = &l_95;
                    short *l_129 = &g_72;
                    int *l_134 = &g_20;
                    int i, j;
                    for (g_20 = 0; (g_20 <= (-2)); g_20 = safe_sub_func_uint16_t_u_u(g_20, 4))
                    {
                        short *l_90[6][7] = {{&g_22,&g_22,(void*)0,(void*)0,&g_24,&g_24,(void*)0},{&g_22,(void*)0,&g_24,(void*)0,&g_72,&g_22,(void*)0},{(void*)0,&g_22,&g_24,(void*)0,&g_22,(void*)0,&g_24},{(void*)0,(void*)0,(void*)0,&g_24,&g_22,&g_22,&g_72},{(void*)0,&g_24,&g_24,&g_24,(void*)0,(void*)0,&g_72},{&g_24,(void*)0,&g_24,(void*)0,&g_22,(void*)0,&g_24}};
                        int l_94 = (-5L);
                        int *l_97 = (void*)0;
                        int *l_98 = &l_95;
                        int i, j;
                        (*l_98) = ((g_24 ^ (safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((l_91[1][0] = ((0xA002L > (l_89 || p_68)) & g_22)), (p_67 && (safe_mul_func_uint16_t_u_u(((p_66 | (l_94 > ((&g_20 == &l_94) <= l_75))) >= l_75), (*p_65)))))), l_95))) > l_96);
                        if (l_99)
                            break;
                        l_75 = (l_99 != l_75);
                        if (p_66)
                            continue;
                    }
                    for (g_20 = 0; (g_20 != 8); g_20 = safe_add_func_uint8_t_u_u(g_20, 6))
                    {
                        int *l_102 = &l_91[2][4];
                        int l_103 = 0x1E2C279AL;
                        short *l_112[2][6][4] = {{{&g_113[0],&g_113[0],&g_113[0],&g_113[0]},{(void*)0,(void*)0,(void*)0,&g_113[0]},{(void*)0,&g_113[0],&g_113[0],(void*)0},{&g_113[0],&g_113[0],&g_113[0],&g_113[0]},{&g_113[0],(void*)0,&g_113[0],&g_113[0]},{&g_113[0],&g_113[0],&g_113[0],&g_113[0]}},{{(void*)0,(void*)0,(void*)0,&g_113[0]},{(void*)0,&g_113[0],&g_113[0],(void*)0},{&g_113[0],&g_113[0],&g_113[0],&g_113[0]},{&g_113[0],(void*)0,&g_113[0],&g_113[0]},{&g_113[0],&g_113[0],&g_113[0],&g_113[0]},{(void*)0,(void*)0,(void*)0,&g_113[0]}}};
                        unsigned *l_115 = &g_116;
                        unsigned *l_117 = (void*)0;
                        unsigned *l_118[8][1] = {{&g_119[7]},{&g_119[7]},{(void*)0},{&g_119[7]},{&g_119[7]},{(void*)0},{&g_119[7]},{&g_119[7]}};
                        int i, j, k;
                        l_103 = (g_20 ^ ((*l_102) = (p_68 = (l_73 & p_66))));
                        (*l_111) = ((((((l_120 = ((*l_115) = ((safe_rshift_func_uint16_t_u_s((l_95 == (((*l_102) = ((safe_rshift_func_uint16_t_u_s(g_72, ((+l_108) <= (g_110 = (safe_unary_minus_func_uint32_t_u(g_20)))))) && p_67)) | 3L)), 13)) != (l_114 = ((void*)0 == l_111))))) > g_119[8]) || l_75) & l_99) & l_99) ^ l_99);
                        (*l_102) = (l_108 == p_68);
                    }
                    if (((safe_rshift_func_int16_t_s_u(((*l_111) || (l_75 = (safe_lshift_func_uint8_t_u_u(0x60L, (safe_rshift_func_uint8_t_u_s((1UL != (65535UL || g_119[7])), 4)))))), 10)) <= (safe_rshift_func_int8_t_s_u((((*l_129) = l_73) || (safe_add_func_int16_t_s_s((((*l_134) = (5L ^ (safe_add_func_int32_t_s_s(g_110, p_67)))) < 4294967295UL), 0L))), 6))))
                    {
                        l_135 = &g_20;

                        ;
                    }
                    else
                    {
                        return p_66;
                    }

                    ;
                    p_68 = 0xF55D16F9L;
                }

                ;
                for (g_110 = 27; (g_110 > 58); g_110 = safe_add_func_int32_t_s_s(g_110, 4))
                {
                    for (l_95 = 0; (l_95 == 24); l_95++)
                    {
                        int **l_140 = (void*)0;
                        int **l_141 = &l_135;
                        int *l_142 = &l_120;
                        (*l_141) = (void*)0;

                        ;
                        (*l_142) = l_120;
                        (*l_141) = &g_20;

                        ;
                    }
                    for (l_75 = 0; (l_75 <= 2); l_75 += 1)
                    {
                        int l_143 = (-10L);
                        return l_143;
                    }
                    l_135 = (g_144 = (void*)0);

                    ;
                    ;
                }
            }
        }
        else
        {
            int **l_148 = &g_144;
            for (g_116 = 22; (g_116 > 30); ++g_116)
            {
                unsigned l_147 = 18446744073709551611UL;
                return l_147;
            }
            (*l_148) = &g_20;

            ;
        }
        l_150 = ((*l_149) = &g_20);

        ;
        ;
        l_150 = &g_20;
    }

    ;
    ;
    if ((safe_lshift_func_int8_t_s_u((((*l_153) = p_66) <= g_116), 5)))
    {
        char l_160 = 0x56L;
        int *l_163 = &g_20;
        g_144 = &l_120;

        ;
        l_150 = &l_120;

        ;
        (*l_150) = (((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((*g_144), p_67)), ((safe_mul_func_uint8_t_u_u((g_110 = 1UL), l_160)) == (safe_mod_func_uint16_t_u_u(((void*)0 == l_163), (*l_150)))))) & p_68) ^ 0UL);
    }
    else
    {
        unsigned short l_164 = 65535UL;
        return l_164;
    }

    ;
    ;
    (*l_150) = (safe_lshift_func_int16_t_s_s((*l_150), (*l_150)));
    return p_67;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_20, "g_20", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_113[i], "g_113[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_116, "g_116", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_119[i], "g_119[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_173, "g_173", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_202[i], "g_202[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_219, "g_219", print_hash_value);
    transparent_crc(g_221, "g_221", print_hash_value);
    transparent_crc(g_226, "g_226", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_333[i], "g_333[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_364, "g_364", print_hash_value);
    transparent_crc(g_399, "g_399", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_466[i], "g_466[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_474, "g_474", print_hash_value);
    transparent_crc(g_779, "g_779", print_hash_value);
    transparent_crc(g_781, "g_781", print_hash_value);
    transparent_crc(g_937, "g_937", print_hash_value);
    transparent_crc(g_943, "g_943", print_hash_value);
    transparent_crc(g_1010, "g_1010", print_hash_value);
    transparent_crc(g_1024, "g_1024", print_hash_value);
    transparent_crc(g_1259, "g_1259", print_hash_value);
    transparent_crc(g_1262, "g_1262", print_hash_value);
    transparent_crc(g_1263, "g_1263", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
