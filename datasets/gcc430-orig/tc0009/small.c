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
   unsigned char f0;
   char f1;
   int f2;
   long long f3;
};


static int g_3 = 0x0194DDBCL;
static long long g_11 = 0x35EDADE0980DB959LL;
static long long g_45 = 0x51FD9AB8A87EA82BLL;
static long long *g_44 = &g_45;
static int g_51 = (-2L);
static unsigned char g_55 = 0x07L;
static unsigned char *g_54 = &g_55;
static char g_67 = (-5L);
static union U0 g_87 = {255UL};
static int g_113 = 9L;
static unsigned long long g_138 = 0UL;
static unsigned short g_153 = 65535UL;
static unsigned char *g_156 = &g_87.f0;
static unsigned char **g_155 = &g_156;
static int g_167 = 0x61D20EA3L;
static unsigned short *g_199 = &g_153;
static unsigned short *g_200 = &g_153;
static int g_209 = 0x3C61942FL;
static unsigned long long g_230[4] = {0xC90199EC3F422AACLL,0xC90199EC3F422AACLL,0xC90199EC3F422AACLL,0xC90199EC3F422AACLL};
static unsigned long long g_232 = 0x67B04F094863BCAALL;
static int *g_277 = &g_167;
static int *g_278[2][5][6] = {{{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2},{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2},{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2},{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2},{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2}},{{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2},{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2},{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2},{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2},{&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2,&g_87.f2}}};
static unsigned char g_286 = 0x6CL;
static unsigned char *g_285 = &g_286;
static int g_309[4][6] = {{0x91F7841CL,(-1L),(-1L),0x91F7841CL,0x91F7841CL,(-1L)},{0x91F7841CL,0x91F7841CL,(-1L),(-1L),0x91F7841CL,0x91F7841CL},{0x91F7841CL,(-1L),(-1L),0x91F7841CL,0x91F7841CL,(-1L)},{0x91F7841CL,0x91F7841CL,(-1L),(-1L),0x91F7841CL,0x91F7841CL}};
static unsigned long long **g_335 = (void*)0;
static int **g_361[2][6] = {{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,&g_277,&g_277,&g_277}};
static int ***g_360[10] = {&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0]};
static unsigned short g_387 = 0x9A18L;
static int g_431 = (-1L);
static char **g_439 = (void*)0;
static char g_506 = 0xCBL;
static union U0 *g_510 = &g_87;
static int ***g_535[4][8] = {{&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0]},{&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0]},{&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0]},{&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0],&g_361[1][0]}};
static unsigned short g_542 = 0x2FFFL;
static long long g_573[6][3] = {{(-1L),(-1L),(-1L)},{0x0AFF6D79ECB4C70FLL,0x0AFF6D79ECB4C70FLL,0x0AFF6D79ECB4C70FLL},{(-1L),(-1L),(-1L)},{0x0AFF6D79ECB4C70FLL,0x0AFF6D79ECB4C70FLL,0x0AFF6D79ECB4C70FLL},{(-1L),(-1L),(-1L)},{0x0AFF6D79ECB4C70FLL,0x0AFF6D79ECB4C70FLL,0x0AFF6D79ECB4C70FLL}};
static unsigned g_578[4][6] = {{0x354602BBL,0xD1FAFE0AL,18446744073709551615UL,2UL,18446744073709551608UL,0xF278325FL},{0xED9496CBL,2UL,0x3D07C3D5L,0x3D07C3D5L,2UL,0xED9496CBL},{0x3D07C3D5L,2UL,0xED9496CBL,18446744073709551615UL,18446744073709551608UL,18446744073709551615UL},{18446744073709551615UL,0xD1FAFE0AL,0x354602BBL,0xD1FAFE0AL,18446744073709551615UL,2UL}};
static int g_580 = 0x5C554E68L;
static unsigned g_589[5][4][8] = {{{0x62C6F374L,0UL,0xDB3FA153L,18446744073709551615UL,0xDB3FA153L,0UL,0x62C6F374L,0xB6763A35L},{18446744073709551610UL,0xB6763A35L,0x579D2ACEL,5UL,0x9BB5A62FL,0x4B89DFB4L,0x4A8DAD29L,0xDB3FA153L},{18446744073709551610UL,18446744073709551612UL,0UL,0xA625DD46L,0x9BB5A62FL,18446744073709551610UL,0x55DF478BL,18446744073709551615UL},{18446744073709551610UL,0xB6957D0FL,5UL,0xDB3FA153L,0xDB3FA153L,5UL,0xB6957D0FL,18446744073709551610UL}},{{0x62C6F374L,0x4A8DAD29L,0x29852D6BL,0x579D2ACEL,0UL,1UL,0xDB3FA153L,0x29852D6BL},{0UL,0UL,0xB6763A35L,0UL,0x579D2ACEL,1UL,0x62C6F374L,18446744073709551610UL},{0UL,0x4A8DAD29L,18446744073709551610UL,5UL,0x55DF478BL,0x579D2ACEL,0xCCE90831L,0UL},{0xCCE90831L,18446744073709551615UL,5UL,18446744073709551615UL,0x29852D6BL,0xCCE90831L,0xE9667ECBL,0x4B89DFB4L}},{{0xDB3FA153L,0xE9667ECBL,0x579D2ACEL,0x62C6F374L,0xCCE90831L,0xB6763A35L,0xE9667ECBL,18446744073709551610UL},{18446744073709551612UL,0x62C6F374L,5UL,0xCCE90831L,0x28C99705L,0x28C99705L,0xCCE90831L,5UL},{0x28C99705L,0x28C99705L,0xCCE90831L,5UL,0x62C6F374L,18446744073709551612UL,0x55DF478BL,1UL},{0xB6763A35L,0xCCE90831L,0x62C6F374L,0x579D2ACEL,0xE9667ECBL,0xDB3FA153L,0UL,1UL}},{{0xCCE90831L,0x29852D6BL,18446744073709551615UL,5UL,18446744073709551615UL,0xCCE90831L,18446744073709551615UL,5UL},{0x579D2ACEL,0xA625DD46L,0x579D2ACEL,0xCCE90831L,0UL,0x4A8DAD29L,0xA625DD46L,18446744073709551610UL},{0xB6957D0FL,1UL,0x4B89DFB4L,0x62C6F374L,0x28C99705L,0x9BB5A62FL,0UL,0x4B89DFB4L},{0xB6957D0FL,0x28C99705L,1UL,18446744073709551615UL,0UL,0x55DF478BL,0x55DF478BL,0UL}},{{0x579D2ACEL,0UL,0UL,0x579D2ACEL,18446744073709551615UL,18446744073709551610UL,1UL,0xCCE90831L},{0xCCE90831L,0UL,18446744073709551610UL,0x4B89DFB4L,0xE9667ECBL,0xCCE90831L,0x29852D6BL,18446744073709551615UL},{0xB6763A35L,0UL,0x579D2ACEL,1UL,0UL,0x29852D6BL,1UL,0x29852D6BL},{18446744073709551610UL,5UL,0x55DF478BL,5UL,18446744073709551610UL,0x4A8DAD29L,0UL,0x55DF478BL}}};
static unsigned short g_591 = 65526UL;
static short g_611 = (-4L);
static short *g_613[10][5][5] = {{{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,(void*)0,&g_611,&g_611,(void*)0},{&g_611,(void*)0,&g_611,&g_611,&g_611},{(void*)0,&g_611,&g_611,&g_611,&g_611}},{{&g_611,&g_611,&g_611,&g_611,&g_611},{(void*)0,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611}},{{&g_611,(void*)0,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,(void*)0,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,(void*)0,&g_611,&g_611,&g_611}},{{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,(void*)0,(void*)0,&g_611,&g_611}},{{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,(void*)0,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611}},{{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,(void*)0,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{(void*)0,(void*)0,&g_611,&g_611,&g_611}},{{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,(void*)0,(void*)0},{&g_611,&g_611,&g_611,&g_611,&g_611}},{{&g_611,(void*)0,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,(void*)0,&g_611,&g_611,&g_611}},{{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,(void*)0,(void*)0,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611}},{{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,&g_611,&g_611},{&g_611,&g_611,&g_611,(void*)0,&g_611}}};
static short **g_617[7][9][4] = {{{&g_613[3][4][1],&g_613[4][4][2],&g_613[1][1][2],&g_613[0][3][1]},{&g_613[1][1][0],&g_613[4][0][1],&g_613[8][4][3],&g_613[8][4][3]},{&g_613[1][1][0],&g_613[1][1][2],&g_613[1][1][2],&g_613[1][1][0]},{&g_613[3][4][1],&g_613[8][4][3],&g_613[0][3][1],&g_613[1][1][2]},{&g_613[8][4][3],&g_613[4][0][1],&g_613[1][1][2],&g_613[8][4][3]},{&g_613[4][4][2],&g_613[3][4][1],&g_613[1][1][2],&g_613[8][4][3]},{&g_613[2][4][2],&g_613[0][3][1],&g_613[2][4][2],&g_613[8][4][3]},{&g_613[1][1][2],&g_613[3][4][1],&g_613[4][4][2],&g_613[1][1][2]},{&g_613[8][0][1],&g_613[8][4][3],&g_613[8][4][3],&g_613[3][4][1]}},{{&g_613[8][4][3],&g_613[0][3][1],&g_613[8][4][3],&g_613[8][4][3]},{&g_613[8][0][1],&g_613[8][0][1],&g_613[4][4][2],(void*)0},{&g_613[1][1][2],&g_613[1][1][2],&g_613[2][4][2],&g_613[3][4][1]},{&g_613[2][4][2],&g_613[3][4][1],&g_613[8][4][3],&g_613[2][4][2]},{&g_613[8][0][1],&g_613[3][4][1],&g_613[1][1][0],&g_613[3][4][1]},{&g_613[3][4][1],&g_613[1][1][2],&g_613[8][4][3],(void*)0},{&g_613[2][3][0],&g_613[8][0][1],&g_613[8][4][3],&g_613[8][4][3]},{&g_613[1][1][2],&g_613[0][3][1],&g_613[8][4][3],&g_613[3][4][1]},{&g_613[1][1][2],&g_613[8][4][3],&g_613[8][4][3],&g_613[1][1][2]}},{{&g_613[2][3][0],&g_613[3][4][1],&g_613[8][4][3],&g_613[8][4][3]},{&g_613[3][4][1],&g_613[0][3][1],&g_613[1][1][0],(void*)0},{&g_613[8][0][1],&g_613[2][3][0],&g_613[8][4][3],(void*)0},{&g_613[2][4][2],&g_613[0][3][1],&g_613[2][4][2],&g_613[8][4][3]},{&g_613[1][1][2],&g_613[3][4][1],&g_613[4][4][2],&g_613[1][1][2]},{&g_613[8][0][1],&g_613[8][4][3],&g_613[8][4][3],&g_613[3][4][1]},{&g_613[8][4][3],&g_613[0][3][1],&g_613[8][4][3],&g_613[8][4][3]},{&g_613[8][0][1],&g_613[8][0][1],&g_613[4][4][2],(void*)0},{&g_613[1][1][2],&g_613[1][1][2],&g_613[2][4][2],&g_613[3][4][1]}},{{&g_613[2][4][2],&g_613[3][4][1],&g_613[8][4][3],&g_613[2][4][2]},{&g_613[8][0][1],&g_613[3][4][1],&g_613[1][1][0],&g_613[3][4][1]},{&g_613[3][4][1],&g_613[1][1][2],&g_613[8][4][3],(void*)0},{&g_613[2][4][2],&g_613[1][1][2],&g_613[8][4][3],&g_613[2][3][0]},{&g_613[0][3][1],&g_613[3][4][1],&g_613[8][4][3],(void*)0},{&g_613[0][3][1],&g_613[8][4][3],&g_613[8][4][3],&g_613[0][3][1]},{&g_613[2][4][2],(void*)0,&g_613[2][3][0],&g_613[8][4][3]},{(void*)0,&g_613[3][4][1],&g_613[4][0][1],&g_613[8][0][1]},{&g_613[1][1][2],&g_613[2][4][2],&g_613[8][4][3],&g_613[8][0][1]}},{{&g_613[1][1][2],&g_613[3][4][1],&g_613[1][1][2],&g_613[8][4][3]},{&g_613[0][3][1],(void*)0,&g_613[1][1][0],&g_613[0][3][1]},{&g_613[1][1][2],&g_613[8][4][3],&g_613[2][3][0],(void*)0},{&g_613[8][4][3],&g_613[3][4][1],&g_613[2][3][0],&g_613[2][3][0]},{&g_613[1][1][2],&g_613[1][1][2],&g_613[1][1][0],&g_613[8][0][1]},{&g_613[0][3][1],&g_613[8][4][3],&g_613[1][1][2],(void*)0},{&g_613[1][1][2],(void*)0,&g_613[8][4][3],&g_613[1][1][2]},{&g_613[1][1][2],(void*)0,&g_613[4][0][1],(void*)0},{(void*)0,&g_613[8][4][3],&g_613[2][3][0],&g_613[8][0][1]}},{{&g_613[2][4][2],&g_613[1][1][2],&g_613[8][4][3],&g_613[2][3][0]},{&g_613[0][3][1],&g_613[3][4][1],&g_613[8][4][3],(void*)0},{&g_613[0][3][1],&g_613[8][4][3],&g_613[8][4][3],&g_613[0][3][1]},{&g_613[2][4][2],(void*)0,&g_613[2][3][0],&g_613[8][4][3]},{(void*)0,&g_613[3][4][1],&g_613[4][0][1],&g_613[8][0][1]},{&g_613[1][1][2],&g_613[2][4][2],&g_613[8][4][3],&g_613[8][0][1]},{&g_613[1][1][2],&g_613[3][4][1],&g_613[1][1][2],&g_613[8][4][3]},{&g_613[0][3][1],(void*)0,&g_613[1][1][0],&g_613[0][3][1]},{&g_613[1][1][2],&g_613[8][4][3],&g_613[2][3][0],&g_613[2][4][2]}},{{&g_613[8][4][3],&g_613[2][3][0],&g_613[8][4][3],&g_613[8][4][3]},{&g_613[8][4][3],&g_613[8][4][3],&g_613[1][1][2],&g_613[1][1][2]},{&g_613[8][4][3],&g_613[4][0][1],&g_613[1][1][0],&g_613[2][4][2]},{&g_613[1][1][0],&g_613[2][4][2],&g_613[8][4][3],&g_613[1][1][0]},{&g_613[8][4][3],&g_613[2][4][2],&g_613[0][3][1],&g_613[2][4][2]},{&g_613[2][4][2],&g_613[4][0][1],&g_613[8][4][3],&g_613[1][1][2]},{&g_613[4][4][2],&g_613[8][4][3],&g_613[8][4][3],&g_613[8][4][3]},{&g_613[8][4][3],&g_613[2][3][0],(void*)0,&g_613[2][4][2]},{&g_613[8][4][3],&g_613[8][4][3],&g_613[8][4][3],&g_613[8][4][3]}}};
static short ***g_616 = &g_617[6][2][2];
static short g_661 = (-7L);
static int g_662 = 0L;
static unsigned long long ***g_696[6][6] = {{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335},{&g_335,&g_335,&g_335,&g_335,&g_335,&g_335}};
static unsigned g_713[9] = {0UL,6UL,0UL,0UL,6UL,0UL,0UL,6UL,0UL};
static int g_765[9] = {9L,(-10L),9L,(-10L),9L,(-10L),9L,(-10L),9L};
static short g_770 = 0x6F82L;
static unsigned short g_821[4][8][1] = {{{65528UL},{0x1E77L},{5UL},{0xE470L},{5UL},{0x1E77L},{65528UL},{0x1E77L}},{{5UL},{0xE470L},{5UL},{0x1E77L},{65528UL},{0x1E77L},{5UL},{0xE470L}},{{5UL},{0x1E77L},{65528UL},{0x1E77L},{5UL},{0xE470L},{5UL},{0x1E77L}},{{65528UL},{0x1E77L},{5UL},{0xE470L},{5UL},{0x1E77L},{65528UL},{0x1E77L}}};
static char g_882 = 0x21L;
static unsigned *g_884[10] = {&g_578[0][2],&g_578[0][2],&g_578[0][2],&g_578[0][2],&g_578[0][2],&g_578[0][2],&g_578[0][2],&g_578[0][2],&g_578[0][2],&g_578[0][2]};
static int ****g_932 = (void*)0;
static int *g_960 = (void*)0;
static int g_1066 = (-1L);
static char g_1069 = 9L;
static short g_1072 = (-5L);
static unsigned g_1083 = 5UL;
static long long g_1097 = 7L;
static union U0 **g_1145[6] = {&g_510,&g_510,&g_510,&g_510,&g_510,&g_510};
static union U0 ***g_1144 = &g_1145[3];
static unsigned short **g_1150 = &g_200;
static long long g_1189 = 0x423D95258252CEF9LL;
static unsigned short g_1190 = 65534UL;
static long long **g_1206 = (void*)0;
static long long g_1277 = (-6L);
static short ***g_1288[8] = {&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2]};
static unsigned g_1305 = 0x2996DA45L;
static int g_1357 = 4L;
static unsigned g_1363 = 0xBF1E8BEBL;
static int g_1379[1] = {0x721DBB14L};
static long long g_1441 = 1L;
static unsigned g_1455 = 0x4A1C674DL;
static unsigned char ***g_1480 = (void*)0;
static unsigned short g_1576 = 0x42B8L;
static unsigned **g_1605 = (void*)0;
static unsigned **g_1607 = (void*)0;



static union U0 func_1(void);
static short func_15(long long * p_16, unsigned char p_17);
static long long * func_18(long long * p_19, long long * p_20, long long * p_21, unsigned p_22);
static long long * func_23(char p_24, int p_25, short p_26, long long * p_27, long long * p_28);
static short func_33(unsigned long long p_34);
static unsigned short func_39(long long p_40);
static unsigned char * func_56(unsigned char * p_57, long long * p_58, unsigned char * p_59, int p_60, unsigned short p_61);
static unsigned char * func_62(unsigned char * p_63);
static unsigned short func_68(long long * p_69, unsigned char * p_70, unsigned char p_71, unsigned p_72);
static long long * func_73(int p_74);
static union U0 func_1(void)
{
    short l_2[7][10][2] = {{{0L,0xD214L},{0L,0x5052L},{(-1L),(-1L)},{0x5052L,0L},{0xD214L,0L},{0x5052L,(-1L)},{(-1L),0x5052L},{0L,0xD214L},{0L,0x5052L},{(-1L),(-1L)}},{{0x5052L,0L},{0xD214L,0L},{0x5052L,(-1L)},{(-1L),0x5052L},{0L,0xD214L},{0L,0x5052L},{(-1L),(-1L)},{0x5052L,0L},{0xD214L,0L},{0x5052L,(-1L)}},{{(-1L),0x5052L},{0L,0x58BAL},{0xD214L,0x04EEL},{0L,0L},{0x04EEL,0xD214L},{0x58BAL,0xD214L},{0x04EEL,0L},{0L,0x04EEL},{0xD214L,0x58BAL},{0xD214L,0x04EEL}},{{0L,0L},{0x04EEL,0xD214L},{0x58BAL,0xD214L},{0x04EEL,0L},{0L,0x04EEL},{0xD214L,0x58BAL},{0xD214L,0x04EEL},{0L,0L},{0x04EEL,0xD214L},{0x58BAL,0xD214L}},{{0x04EEL,0L},{0L,0x04EEL},{0xD214L,0x58BAL},{0xD214L,0x04EEL},{0L,0L},{0x04EEL,0xD214L},{0x58BAL,0xD214L},{0x04EEL,0L},{0L,0x04EEL},{0xD214L,0x58BAL}},{{0xD214L,0x04EEL},{0L,0L},{0x04EEL,0xD214L},{0x58BAL,0xD214L},{0x04EEL,0L},{0L,0x04EEL},{0xD214L,0x58BAL},{0xD214L,0x04EEL},{0L,0L},{0x04EEL,0xD214L}},{{0x58BAL,0xD214L},{0x04EEL,0L},{0L,0x04EEL},{0xD214L,0x58BAL},{0xD214L,0x04EEL},{0L,0L},{0x04EEL,0xD214L},{0x58BAL,0xD214L},{0x04EEL,0L},{(-1L),0xD214L}}};
    long long *l_614 = &g_45;
    unsigned *l_764[1];
    short l_771 = 0x1DA7L;
    int *l_772 = &g_662;
    unsigned long long *l_773 = &g_230[3];
    union U0 **l_804[8] = {&g_510,&g_510,&g_510,&g_510,&g_510,&g_510,&g_510,&g_510};
    unsigned char *l_806 = &g_55;
    int l_887 = 6L;
    int l_954 = 3L;
    unsigned l_996 = 0xF41AE797L;
    unsigned long long l_1116 = 18446744073709551615UL;
    int *l_1117 = (void*)0;
    int ****l_1208 = &g_360[3];
    unsigned l_1243 = 4294967294UL;
    int l_1263 = 0x92DC4BF1L;
    int l_1307 = 1L;
    short *l_1320 = &g_661;
    int l_1395 = 0L;
    long long l_1437 = 0xF362FBE1F2DF6C89LL;
    long long *l_1440 = &g_1189;
    union U0 *l_1493 = &g_87;
    unsigned long long l_1557 = 4UL;
    union U0 l_1568 = {0x00L};
    long long *l_1575 = (void*)0;
    int *l_1585[4][9] = {{&g_765[3],&g_765[3],&g_113,&g_765[3],&g_765[3],(void*)0,(void*)0,&g_765[3],&g_765[3]},{(void*)0,&l_954,(void*)0,&g_3,&g_1357,&g_1357,&g_3,(void*)0,&l_954},{(void*)0,&g_1357,(void*)0,&g_113,&g_113,(void*)0,&g_1357,(void*)0,&g_1357},{&g_1357,&g_1379[0],&g_3,&g_3,&g_1379[0],&g_1357,&g_1357,&g_1357,&g_1379[0]}};
    int l_1602 = 0x82B3B48FL;
    unsigned short l_1646[10] = {0x5AAEL,0x5AAEL,0x5AAEL,0x5AAEL,0x5AAEL,0x5AAEL,0x5AAEL,0x5AAEL,0x5AAEL,0x5AAEL};
    int l_1676 = 8L;
    long long l_1754 = 0x8C8E536C14C72891LL;
    char l_1797[8][4] = {{0x42L,(-3L),0x44L,(-6L)},{0x44L,(-6L),0x44L,(-3L)},{0x42L,(-6L),(-1L),(-6L)},{0x42L,(-3L),0x44L,(-6L)},{0x44L,(-6L),0x44L,(-3L)},{0x42L,(-6L),(-1L),(-6L)},{0x42L,(-3L),0x44L,(-6L)},{0x44L,(-6L),0x44L,(-3L)}};
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_764[i] = &g_578[0][2];
    for (g_3 = 0; (g_3 <= 1); g_3 += 1)
    {
        unsigned char l_8 = 0UL;
        long long *l_9 = (void*)0;
        long long *l_10[9][4] = {{&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11},{&g_11,&g_11,&g_11,&g_11}};
        int l_12 = 1L;
        short l_41[1];
        unsigned short *l_590 = &g_591;
        int *l_759 = &g_662;
        int *l_760 = (void*)0;
        int *l_761 = &g_167;
        int i, j;
        for (i = 0; i < 1; i++)
            l_41[i] = 0xF419L;
        (*l_761) = ((*l_759) = ((l_2[4][5][1] , (safe_rshift_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((1L <= (l_12 |= l_8)) ^ (safe_add_func_int64_t_s_s(((func_15(func_18(func_23((safe_mod_func_uint32_t_u_u(g_11, (safe_rshift_func_int16_t_s_u((((((g_3 , g_11) & func_33((safe_lshift_func_uint8_t_u_u((((safe_mod_func_uint16_t_u_u(((*l_590) &= func_39((l_41[0] , (safe_sub_func_int16_t_s_s(((((g_44 = (void*)0) == &g_11) , g_11) == 0x1EFAE07DL), g_45))))), g_3)) & l_8) & l_41[0]), (*g_54))))) , (-7L)) , 0x9E3832B3L) <= (-1L)), l_2[3][1][0])))), l_8, g_589[1][1][6], l_9, l_614), &g_11, l_614, g_713[7]), g_713[1]) & l_8) <= l_2[4][4][0]), l_41[0]))), 0x0E596D2AL)) || l_2[4][2][0]), l_41[0]))) == g_578[3][4]));

        ;

        ;
        ;
        ;


        return (*g_510);

            }
    if ((safe_sub_func_int64_t_s_s((*g_44), ((*l_773) ^= ((((void*)0 != l_764[0]) | g_765[3]) < (safe_add_func_uint32_t_u_u((safe_add_func_int32_t_s_s(g_770, l_2[2][1][1])), (((*l_772) = ((*g_277) ^= ((l_2[4][8][1] & l_2[1][3][0]) || l_771))) < l_2[3][4][0]))))))))
    {
        unsigned l_779 = 0x9837B660L;
        int l_798[8] = {0x47F49DD7L,0x47F49DD7L,1L,0x47F49DD7L,0x47F49DD7L,1L,0x47F49DD7L,0x47F49DD7L};
        int *l_801 = &g_662;
        unsigned char *l_807 = &g_55;
        union U0 l_818 = {0x1AL};
        int i;
        for (l_771 = 0; (l_771 < 26); l_771 = safe_add_func_int16_t_s_s(l_771, 1))
        {
            int l_778[2];
            int i;
            for (i = 0; i < 2; i++)
                l_778[i] = 0L;
            for (g_51 = (-11); (g_51 >= (-24)); --g_51)
            {
                (*l_772) ^= l_778[0];
                (*l_772) = (l_779 < (*g_199));
            }
            (*l_772) ^= (&g_713[0] == (void*)0);
        }
        for (g_232 = 0; (g_232 <= 2); g_232 += 1)
        {
            int *l_799 = &g_765[5];
            int **l_800 = &g_278[0][4][0];
            int i;
            (*l_772) &= 7L;
            (*l_799) &= ((g_230[(g_232 + 1)] | 0xA012L) < ((*g_277) = ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s(func_15(l_614, l_779), ((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint8_t_u_u(((**g_155) ^= (safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((g_230[(g_232 + 1)] == (*l_772)), 0)), (l_798[2] = (&g_87 != ((safe_sub_func_int8_t_s_s(g_230[(g_232 + 1)], 0x22L)) , (void*)0)))))), 2)), g_230[(g_232 + 1)])), 3)) > (*l_772)))), 3)) <= 0xBDL), 2)) == (*l_772))));
            (*l_800) = l_764[0];
            for (g_542 = 0; (g_542 <= 1); g_542 += 1)
            {
                int l_805 = 0L;
                unsigned l_808[9];
                unsigned short *l_811[1];
                int i, j;
                for (i = 0; i < 9; i++)
                    l_808[i] = 0xC7759513L;
                for (i = 0; i < 1; i++)
                    l_811[i] = &g_387;
                l_801 = l_801;
            }
        }


        (*l_772) = (*l_801);
        return l_818;

            }
    else
    {
        unsigned long long l_822[9][8][3] = {{{0xBB01EEF3EA9F7B3BLL,0x2D1D7D2A58DD90BFLL,0x2D1D7D2A58DD90BFLL},{0x60E055EAD92FB62BLL,0x526FE903BB93F4A3LL,4UL},{1UL,1UL,1UL},{0x4070C09348ADC13CLL,0UL,18446744073709551615UL},{0x04ACECCA413222EELL,0x58689C63166236D7LL,0xDA687B4C5BF9C758LL},{1UL,0UL,0xF2C0D28614630769LL},{0x09866CE35A17209CLL,1UL,1UL},{0xA4A95CBD3D4D87A6LL,0x526FE903BB93F4A3LL,0xC243542271EA2221LL}},{{18446744073709551615UL,0x2D1D7D2A58DD90BFLL,1UL},{0xE73A1A53E5C9A614LL,0x60E055EAD92FB62BLL,0UL},{0xF0894D3C2205079ALL,18446744073709551615UL,0xEC80958AD5F4BC84LL},{4UL,3UL,0xFC975D8316C36F95LL},{0xEB433E1602DB5EC3LL,18446744073709551614UL,1UL},{0x2D1D7D2A58DD90BFLL,1UL,0x09866CE35A17209CLL},{1UL,0xDA687B4C5BF9C758LL,0x9597229EDA4DD5BELL},{0xAC07843254E82A3CLL,0xFE3DC26E4F981326LL,1UL}},{{1UL,0x063AC679B03854BDLL,0x90DEBC33992ACA52LL},{1UL,0x976029DAF60B7E27LL,1UL},{0xAC07843254E82A3CLL,0x36A96CD9FF0A99C3LL,18446744073709551609UL},{1UL,0xAC07843254E82A3CLL,18446744073709551615UL},{0UL,1UL,0xAC0F9D7AEF437EBDLL},{0x36A96CD9FF0A99C3LL,0x976029DAF60B7E27LL,0x4E73A1647D115E81LL},{0xE73A1A53E5C9A614LL,1UL,0xEB433E1602DB5EC3LL},{1UL,0x8C9997155EF275BBLL,0xF40A6779C68D00C3LL}},{{0xF40A6779C68D00C3LL,18446744073709551615UL,1UL},{18446744073709551611UL,18446744073709551611UL,1UL},{0x944B254F00776DD9LL,1UL,0x8A829DC1E5EB656CLL},{0xEC80958AD5F4BC84LL,0x5DAB15E58F570A60LL,18446744073709551609UL},{0x2D1D7D2A58DD90BFLL,18446744073709551614UL,18446744073709551615UL},{0x4070C09348ADC13CLL,0xEC80958AD5F4BC84LL,18446744073709551609UL},{0xC18213CA404A3F98LL,1UL,0x8A829DC1E5EB656CLL},{0xA4A95CBD3D4D87A6LL,0x60E055EAD92FB62BLL,1UL}},{{0xE434897442BD4477LL,3UL,1UL},{1UL,18446744073709551614UL,0xF40A6779C68D00C3LL},{0x5DAB15E58F570A60LL,0x36A96CD9FF0A99C3LL,0xEB433E1602DB5EC3LL},{3UL,0xC243542271EA2221LL,0x4E73A1647D115E81LL},{1UL,18446744073709551609UL,0xAC0F9D7AEF437EBDLL},{0x9597229EDA4DD5BELL,0xCC368CEC4FC1488ALL,18446744073709551615UL},{1UL,0x04ACECCA413222EELL,9UL},{0x60E055EAD92FB62BLL,1UL,18446744073709551615UL}},{{0x063AC679B03854BDLL,1UL,0xA94D52F42E1F2BA1LL},{0xF0894D3C2205079ALL,1UL,0x52A44F04B39DE032LL},{0x976029DAF60B7E27LL,1UL,0xC243542271EA2221LL},{0xC16E3EFA76C6B86ELL,0x04ACECCA413222EELL,0xEC80958AD5F4BC84LL},{0xBD35512A96B1D8D1LL,0xCC368CEC4FC1488ALL,0x60E055EAD92FB62BLL},{0UL,18446744073709551609UL,1UL},{0xEB433E1602DB5EC3LL,0xC243542271EA2221LL,0xCC368CEC4FC1488ALL},{0x52A44F04B39DE032LL,0x36A96CD9FF0A99C3LL,0xBB01EEF3EA9F7B3BLL}},{{0x58689C63166236D7LL,18446744073709551614UL,0x976029DAF60B7E27LL},{18446744073709551614UL,3UL,18446744073709551614UL},{0xBB01EEF3EA9F7B3BLL,0x60E055EAD92FB62BLL,4UL},{0xAC0F9D7AEF437EBDLL,0xBD35512A96B1D8D1LL,0x100FB95B26FC5C7CLL},{0xE73A1A53E5C9A614LL,0xF7861562FDBB05EALL,18446744073709551614UL},{0xA94D52F42E1F2BA1LL,18446744073709551611UL,0x4070C09348ADC13CLL},{0xE73A1A53E5C9A614LL,1UL,18446744073709551614UL},{1UL,1UL,0x063AC679B03854BDLL}},{{1UL,0x4070C09348ADC13CLL,0xF2C0D28614630769LL},{0xC16E3EFA76C6B86ELL,1UL,0x4E73A1647D115E81LL},{0x52A44F04B39DE032LL,0x90DEBC33992ACA52LL,0x976029DAF60B7E27LL},{0x8C9997155EF275BBLL,18446744073709551615UL,0x52A44F04B39DE032LL},{1UL,4UL,0UL},{0x36A96CD9FF0A99C3LL,0UL,0xC18213CA404A3F98LL},{0xEC80958AD5F4BC84LL,0x2594C0E4C21CAD2DLL,0xE73A1A53E5C9A614LL},{0xF40A6779C68D00C3LL,0x04ACECCA413222EELL,0xBD35512A96B1D8D1LL}},{{4UL,0xE73A1A53E5C9A614LL,1UL},{0xBB01EEF3EA9F7B3BLL,1UL,1UL},{0x526FE903BB93F4A3LL,0x9597229EDA4DD5BELL,0xBD35512A96B1D8D1LL},{18446744073709551615UL,18446744073709551614UL,0xE73A1A53E5C9A614LL},{0x8A829DC1E5EB656CLL,1UL,0xC18213CA404A3F98LL},{0x976029DAF60B7E27LL,18446744073709551609UL,0UL},{0xBD35512A96B1D8D1LL,0xF40A6779C68D00C3LL,0x52A44F04B39DE032LL},{18446744073709551614UL,0x58689C63166236D7LL,0x976029DAF60B7E27LL}}};
        int l_823 = 0x00D62B6EL;
        int i, j, k;
        (*g_277) = (((l_773 != (void*)0) < (!g_542)) , (safe_rshift_func_int16_t_s_u((l_823 |= (l_822[7][6][2] |= ((*l_772) ^= g_821[1][1][0]))), 7)));
    }
    if ((*l_772))
    {
        unsigned l_824 = 0UL;
        union U0 l_854 = {5UL};
        short l_866 = (-1L);
        int *l_876 = &g_209;
        unsigned l_908 = 0xF08C9396L;
        int l_953[3][5] = {{1L,9L,1L,1L,0x5096BAC4L},{0x5A625435L,(-10L),0x5096BAC4L,(-10L),0x5A625435L},{1L,(-10L),9L,0x5A625435L,9L}};
        unsigned char *l_955 = (void*)0;
        long long **l_992 = &g_44;
        unsigned char l_1073 = 0xF0L;
        short **l_1074 = &g_613[8][4][3];
        int *l_1085 = &l_953[1][1];
        unsigned char l_1088 = 0x29L;
        unsigned char l_1113 = 5UL;
        int *l_1114 = &l_953[1][1];
        unsigned long long l_1130 = 18446744073709551608UL;
        int l_1194[4] = {1L,1L,1L,1L};
        char l_1207 = 0L;
        union U0 ***l_1214[6][2] = {{&g_1145[3],&g_1145[3]},{&l_804[4],&g_1145[3]},{&g_1145[3],&l_804[4]},{&g_1145[3],&g_1145[3]},{&l_804[4],&g_1145[3]},{&g_1145[3],&l_804[4]}};
        unsigned long long l_1217 = 18446744073709551615UL;
        char l_1239 = 0L;
        short *l_1240 = &l_771;
        short *l_1241 = (void*)0;
        short *l_1242[4];
        unsigned *l_1244 = &g_1083;
        int **l_1245 = &l_1117;
        int i, j;
        for (i = 0; i < 4; i++)
            l_1242[i] = &l_2[6][4][0];
        (*l_772) ^= l_824;
        if (((*g_277) = (*l_772)))
        {
            short ***l_847[2][10];
            int l_852 = 1L;
            unsigned char l_880[1];
            char *l_910 = &l_854.f1;
            char *l_911[7][3] = {{(void*)0,(void*)0,&g_87.f1},{&l_854.f1,&g_506,&g_506},{&g_87.f1,&g_882,(void*)0},{&l_854.f1,(void*)0,&l_854.f1},{&g_506,&g_87.f1,(void*)0},{&g_506,&g_506,&g_506},{&g_87.f1,&g_87.f1,&g_87.f1}};
            int i, j;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 10; j++)
                    l_847[i][j] = (void*)0;
            }
            for (i = 0; i < 1; i++)
                l_880[i] = 1UL;
            for (g_87.f1 = 0; (g_87.f1 <= 1); g_87.f1 += 1)
            {
                char *l_829[5];
                short *l_832 = &l_771;
                short **l_833 = &g_613[4][0][0];
                int l_836 = 0x088E3948L;
                unsigned char **l_839 = (void*)0;
                unsigned long long l_842 = 0x9A3E3812792E1773LL;
                int *l_857 = &g_765[3];
                unsigned short **l_858 = &g_200;
                char l_875[4];
                unsigned char l_879[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
                char l_886 = (-1L);
                union U0 l_888 = {0UL};
                char l_897 = (-3L);
                long long *l_909 = &g_45;
                int ****l_933 = &g_360[9];
                unsigned long long l_949 = 1UL;
                long long l_952 = 2L;
                int i;
                for (i = 0; i < 5; i++)
                    l_829[i] = &g_67;
                for (i = 0; i < 4; i++)
                    l_875[i] = 0xAEL;
                (*g_277) |= l_824;
            }

                        g_960 = (void*)0;
        }
        else
        {
            unsigned char l_979 = 0UL;
            char l_980[6] = {7L,0x14L,7L,7L,0x14L,7L};
            int l_1000 = 0x484A295BL;
            union U0 l_1012 = {5UL};
            char l_1019 = 0x15L;
            unsigned long long l_1029 = 0x038763E652BAA0D5LL;
            unsigned long long ****l_1099 = &g_696[2][3];
            int *l_1115 = &l_854.f2;
            unsigned char l_1136 = 247UL;
            union U0 l_1163 = {255UL};
            long long *l_1168[7][6][6] = {{{&g_45,(void*)0,&g_573[4][0],&g_1097,&g_1097,&g_45},{&g_573[4][0],&g_1097,&g_1097,&g_1097,&g_1097,&g_573[4][0]},{&g_45,&g_1097,&g_1097,&g_573[4][0],(void*)0,&g_45},{&g_573[0][1],&g_1097,&g_573[4][0],&g_573[0][1],&g_1097,&g_573[0][1]},{&g_573[0][1],&g_1097,&g_573[0][1],&g_573[4][0],&g_1097,&g_573[0][1]},{&g_45,(void*)0,&g_573[4][0],&g_1097,&g_1097,&g_45}},{{&g_573[4][0],&g_1097,&g_1097,&g_1097,&g_1097,&g_573[4][0]},{&g_45,&g_1097,&g_1097,&g_573[4][0],(void*)0,&g_45},{&g_573[0][1],&g_1097,&g_573[4][0],&g_573[0][1],&g_1097,&g_573[0][1]},{&g_573[0][1],&g_1097,&g_573[0][1],&g_573[4][0],&g_1097,&g_573[0][1]},{&g_45,(void*)0,&g_573[4][0],&g_11,&g_45,&g_1097},{&g_573[2][0],&g_1097,&g_11,&g_11,&g_1097,&g_573[2][0]}},{{&g_1097,&g_45,&g_11,&g_573[2][0],&g_1097,&g_1097},{&g_11,&g_45,&g_573[2][0],&g_11,&g_1097,&g_11},{&g_11,&g_1097,&g_11,&g_573[2][0],&g_45,&g_11},{&g_1097,&g_1097,&g_573[2][0],&g_11,&g_45,&g_1097},{&g_573[2][0],&g_1097,&g_11,&g_11,&g_1097,&g_573[2][0]},{&g_1097,&g_45,&g_11,&g_573[2][0],&g_1097,&g_1097}},{{&g_11,&g_45,&g_573[2][0],&g_11,&g_1097,&g_11},{&g_11,&g_1097,&g_11,&g_573[2][0],&g_45,&g_11},{&g_1097,&g_1097,&g_573[2][0],&g_11,&g_45,&g_1097},{&g_573[2][0],&g_1097,&g_11,&g_11,&g_1097,&g_573[2][0]},{&g_1097,&g_45,&g_11,&g_573[2][0],&g_1097,&g_1097},{&g_11,&g_45,&g_573[2][0],&g_11,&g_1097,&g_11}},{{&g_11,&g_1097,&g_11,&g_573[2][0],&g_45,&g_11},{&g_1097,&g_1097,&g_573[2][0],&g_11,&g_45,&g_1097},{&g_573[2][0],&g_1097,&g_1097,&g_1097,&g_45,&g_11},{&g_11,&g_573[0][1],&g_1097,&g_11,&g_573[4][0],&g_11},{&g_45,&g_573[0][1],&g_11,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_11,&g_573[0][1],&g_45}},{{&g_11,&g_573[4][0],&g_11,&g_1097,&g_573[0][1],&g_11},{&g_11,&g_45,&g_1097,&g_1097,&g_45,&g_11},{&g_11,&g_573[0][1],&g_1097,&g_11,&g_573[4][0],&g_11},{&g_45,&g_573[0][1],&g_11,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_11,&g_573[0][1],&g_45},{&g_11,&g_573[4][0],&g_11,&g_1097,&g_573[0][1],&g_11}},{{&g_11,&g_45,&g_1097,&g_1097,&g_45,&g_11},{&g_11,&g_573[0][1],&g_1097,&g_11,&g_573[4][0],&g_11},{&g_45,&g_573[0][1],&g_11,&g_45,&g_45,&g_45},{&g_45,&g_45,&g_45,&g_11,&g_573[0][1],&g_45},{&g_11,&g_573[4][0],&g_11,&g_1097,&g_573[0][1],&g_11},{&g_11,&g_45,&g_1097,&g_1097,&g_45,&g_11}}};
            unsigned l_1188 = 0xE70C065EL;
            int ****l_1209 = (void*)0;
            unsigned char l_1211[10][1] = {{0xABL},{0x1FL},{0xABL},{0x1FL},{0xABL},{0x1FL},{0xABL},{0x1FL},{0xABL},{0x1FL}};
            short l_1220 = 0xAB68L;
            unsigned short l_1231[10] = {65535UL,65529UL,0x8A87L,65529UL,65535UL,65535UL,65529UL,0x8A87L,65529UL,65535UL};
            int i, j, k;
            for (g_3 = 1; (g_3 < 16); g_3 = safe_add_func_int32_t_s_s(g_3, 5))
            {
                unsigned l_965 = 0x82E8D6F9L;
                int *l_966[7][10][2] = {{{(void*)0,(void*)0},{&g_765[3],&g_765[3]},{&g_113,&g_209},{&l_953[1][1],&l_887},{(void*)0,(void*)0},{&g_167,(void*)0},{&g_167,(void*)0},{&g_113,&l_954},{&g_113,&g_113},{&g_167,(void*)0}},{{&g_167,&g_113},{&g_113,&l_954},{&g_113,(void*)0},{&g_167,(void*)0},{&g_167,(void*)0},{(void*)0,&l_887},{&l_953[1][1],&g_209},{&g_113,&g_765[3]},{&g_765[3],(void*)0},{(void*)0,(void*)0}},{{&l_953[1][1],&g_113},{(void*)0,&g_209},{&g_113,&g_209},{(void*)0,&g_113},{&l_953[1][1],(void*)0},{(void*)0,(void*)0},{&g_765[3],&g_765[3]},{&g_113,&g_209},{&l_953[1][1],&l_887},{(void*)0,(void*)0}},{{&g_167,(void*)0},{&g_167,(void*)0},{&g_113,&l_954},{&g_113,&g_113},{&g_167,(void*)0},{&g_167,&g_113},{&g_113,&l_954},{&g_113,(void*)0},{&g_167,&g_3},{&g_167,&g_765[3]}},{{&g_765[3],&g_113},{&l_954,(void*)0},{(void*)0,(void*)0},{(void*)0,&l_953[1][2]},{(void*)0,&g_765[3]},{&g_113,&l_953[2][2]},{&g_209,&l_887},{(void*)0,&l_887},{&g_209,&l_953[2][2]},{&g_113,&g_765[3]}},{{(void*)0,&l_953[1][2]},{(void*)0,(void*)0},{(void*)0,(void*)0},{&l_954,&g_113},{&g_765[3],&g_765[3]},{&g_167,&g_3},{&g_209,&g_113},{(void*)0,&g_113},{&g_765[3],(void*)0},{&l_953[1][1],&g_765[3]}},{{&l_953[1][1],(void*)0},{&g_765[3],&g_113},{(void*)0,&g_113},{&g_209,&g_3},{&g_167,&g_765[3]},{&g_765[3],&g_113},{&l_954,(void*)0},{(void*)0,(void*)0},{(void*)0,&l_953[1][2]},{(void*)0,&g_765[3]}}};
                int i, j, k;
                (*l_772) = (-5L);
                l_966[4][6][0] = ((safe_add_func_int8_t_s_s(l_965, (0x4FB3988FFF28A65DLL <= 0xB3E7D161684C4D14LL))) , &l_954);
            }
            if ((func_33(((*l_773) = ((*l_772) || 0x6198L))) | (*l_772)))
            {
                (*g_277) &= (*l_772);
            }
            else
            {
                short *l_973 = &l_2[5][9][0];
                int l_974 = 0xCD7B43D0L;
                (*g_277) ^= ((!((*l_614) = (+(safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((*l_876), ((safe_add_func_int16_t_s_s(((*l_973) ^= (g_662 >= (*l_876))), l_974)) && ((*l_876) == (0L && (*l_876)))))), 15))))) < (((safe_sub_func_uint64_t_u_u(((void*)0 != &l_771), (*l_876))) ^ (*g_285)) | (*l_876)));
                return l_854;

                            }


            for (l_854.f1 = (-28); (l_854.f1 != (-10)); l_854.f1 = safe_add_func_uint64_t_u_u(l_854.f1, 7))
            {
                union U0 l_987 = {247UL};
                unsigned char l_993 = 0xE4L;
                unsigned char **l_999 = &l_806;
                int *l_1023 = &g_113;
                if (l_979)
                {
                    unsigned short l_981 = 0x181BL;
                    short ***l_997[6][5][8] = {{{&g_617[2][2][1],(void*)0,&g_617[6][2][2],&g_617[2][6][1],&g_617[2][6][1],&g_617[6][2][2],(void*)0,&g_617[2][2][1]},{&g_617[6][2][2],&g_617[6][2][2],(void*)0,&g_617[4][2][0],&g_617[6][1][3],&g_617[6][2][2],(void*)0,&g_617[6][2][2]},{&g_617[6][6][3],&g_617[6][2][2],&g_617[6][2][2],&g_617[1][6][2],&g_617[4][2][0],&g_617[6][2][2],&g_617[6][7][1],&g_617[6][6][3]},{&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[1][6][2],&g_617[3][7][3]},{&g_617[3][7][0],&g_617[4][8][1],&g_617[6][2][2],(void*)0,&g_617[6][2][2],&g_617[1][0][1],&g_617[6][2][2],&g_617[4][2][0]}},{{&g_617[4][8][1],&g_617[6][2][2],(void*)0,&g_617[1][4][0],&g_617[4][5][2],&g_617[6][2][2],&g_617[1][4][0],&g_617[6][2][2]},{&g_617[6][2][2],&g_617[6][6][3],&g_617[2][5][3],&g_617[6][2][2],(void*)0,&g_617[6][2][2],(void*)0,&g_617[6][2][2]},{(void*)0,&g_617[6][2][2],&g_617[6][2][2],&g_617[4][5][2],&g_617[0][6][2],&g_617[4][6][1],(void*)0,&g_617[6][6][3]},{(void*)0,&g_617[6][2][2],(void*)0,&g_617[6][2][2],(void*)0,&g_617[6][2][2],(void*)0,&g_617[6][2][2]},{&g_617[6][2][2],&g_617[6][2][2],&g_617[6][6][2],(void*)0,&g_617[6][2][2],&g_617[3][7][3],&g_617[6][2][2],&g_617[6][2][2]}},{{&g_617[6][2][2],&g_617[6][2][2],&g_617[6][7][0],(void*)0,&g_617[6][2][2],&g_617[6][2][2],&g_617[4][3][2],&g_617[6][2][2]},{&g_617[6][2][2],(void*)0,&g_617[6][2][2],&g_617[6][2][2],(void*)0,&g_617[6][2][2],&g_617[6][6][3],&g_617[3][7][0]},{(void*)0,&g_617[6][2][2],&g_617[2][3][1],&g_617[1][4][0],&g_617[0][6][2],&g_617[2][5][3],&g_617[0][2][2],&g_617[4][8][1]},{(void*)0,&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],(void*)0,&g_617[1][0][1],&g_617[6][7][0],&g_617[6][2][2]},{&g_617[6][2][2],(void*)0,&g_617[4][3][2],&g_617[6][2][2],&g_617[4][5][2],&g_617[4][6][1],&g_617[4][8][1],(void*)0}},{{&g_617[4][8][1],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[3][7][3],(void*)0,&g_617[6][2][2]},{&g_617[6][2][2],&g_617[4][8][1],&g_617[1][0][1],&g_617[1][0][1],&g_617[4][8][1],&g_617[6][2][2],&g_617[4][6][1],(void*)0},{&g_617[6][2][2],(void*)0,&g_617[4][3][2],&g_617[6][2][2],(void*)0,&g_617[6][2][2],&g_617[6][2][2],&g_617[5][5][1]},{(void*)0,&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[0][6][2],&g_617[1][8][3],(void*)0,(void*)0},{(void*)0,&g_617[0][6][2],&g_617[3][7][0],&g_617[1][0][1],&g_617[0][2][2],&g_617[4][3][2],&g_617[6][2][2],&g_617[6][2][2]}},{{&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[4][8][1],&g_617[6][2][2],(void*)0,&g_617[1][4][0],&g_617[4][5][2]},{&g_617[0][6][2],&g_617[6][2][2],&g_617[2][6][1],(void*)0,&g_617[1][4][0],&g_617[2][6][1],&g_617[4][2][0],(void*)0},{(void*)0,(void*)0,&g_617[4][5][2],(void*)0,(void*)0,(void*)0,&g_617[3][7][0],&g_617[6][2][2]},{(void*)0,&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],(void*)0,&g_617[6][2][2],(void*)0,&g_617[6][2][2]},{(void*)0,(void*)0,&g_617[6][1][3],(void*)0,(void*)0,&g_617[2][6][1],&g_617[6][2][2],&g_617[6][2][2]}},{{&g_617[6][2][2],&g_617[4][2][0],&g_617[6][2][2],(void*)0,&g_617[6][2][2],&g_617[5][5][1],&g_617[6][2][2],(void*)0},{&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[6][2][2],&g_617[4][3][2],&g_617[4][6][1],&g_617[6][2][2],(void*)0},{&g_617[6][2][2],(void*)0,&g_617[6][1][3],&g_617[6][2][2],&g_617[6][6][3],&g_617[1][8][3],(void*)0,&g_617[6][2][2]},{&g_617[6][2][2],&g_617[6][2][2],&g_617[2][5][3],&g_617[6][6][3],(void*)0,&g_617[6][2][2],&g_617[6][2][2],(void*)0},{&g_617[6][2][2],&g_617[2][3][1],&g_617[6][2][2],&g_617[6][2][2],&g_617[0][1][0],&g_617[1][6][2],&g_617[6][2][2],&g_617[2][6][1]}}};
                    char l_1030 = (-1L);
                    int i, j, k;
                    for (g_87.f2 = 0; (g_87.f2 <= 3); g_87.f2 += 1)
                    {
                        char *l_982 = &g_882;
                        (*l_876) = (l_980[4] & (((*l_982) = l_981) < ((safe_lshift_func_uint8_t_u_s(0xF1L, 2)) != (safe_sub_func_int64_t_s_s((*l_772), ((*g_44) ^= (*l_876)))))));
                        return l_987;

                                            }

                                        if (func_15(&g_573[0][1], (*g_285)))
                    {
                        unsigned long long l_998 = 0x152D4185D3125074LL;
                        union U0 ***l_1001 = &l_804[4];
                        union U0 **l_1003[4];
                        union U0 ***l_1002 = &l_1003[2];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1003[i] = (void*)0;
                        if (l_981)
                            break;
                        l_1000 = (safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((((l_993 = ((**l_992) ^= (&g_44 != l_992))) <= ((safe_lshift_func_uint8_t_u_s((l_996 ^ ((l_997[2][1][0] != &g_617[3][2][1]) > (func_33(l_998) || (l_999 != (((!(*l_772)) <= (*l_876)) , l_999))))), 6)) || l_979)) || (*l_772)), (*g_54))), 14));
                        (*l_1002) = ((*l_1001) = &g_510);


                        (*l_772) = (l_1000 = 0x3F9FC5A7L);
                    }
                    else
                    {
                        short l_1020 = 0x99C5L;
                        unsigned l_1021 = 0xC943E11EL;
                        int **l_1022[5][2][1] = {{{&l_772},{(void*)0}},{{(void*)0},{&l_772}},{{&g_960},{&l_772}},{{(void*)0},{(void*)0}},{{&l_772},{&g_960}}};
                        int i, j, k;
                        (*g_277) = (l_1000 & ((((safe_add_func_uint8_t_u_u((l_987.f2 = ((((safe_rshift_func_int8_t_s_u(1L, 7)) , ((safe_add_func_int64_t_s_s(0x8243F50D69155D7ELL, ((safe_add_func_uint8_t_u_u(((l_1012 , func_33((*l_876))) < (safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u(g_589[3][2][4], ((((*l_772) = ((*l_772) > (*g_200))) & l_981) >= (*l_876)))), 8)), 3))), 0xF4L)) & l_1019))) | l_987.f1)) != l_981) || l_1020)), l_1021)) , 0UL) > l_1019) || (*l_876)));

                                                l_1023 = &l_1000;

                        ;
                        (*l_1023) = (*l_876);
                    }

                    ;
                    if (l_1030)
                        break;
                }
                else
                {
                    for (l_996 = 0; (l_996 <= 7); l_996 += 1)
                    {
                        int *l_1031 = &g_209;
                        int **l_1032 = &g_277;
                        (*l_1032) = l_1031;

                        ;
                    }

                    ;
                    (*l_772) = ((void*)0 != &g_510);
                    for (g_611 = 0; (g_611 <= 3); g_611 += 1)
                    {
                        unsigned long long l_1033[2];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_1033[i] = 1UL;
                        l_1033[0] ^= (*l_1023);
                        (*l_1023) = (4294967295UL < (g_589[4][3][6] <= (safe_sub_func_int16_t_s_s((0x81C9CADEL == ((*g_277) = ((-5L) & func_33((*l_1023))))), (safe_rshift_func_uint16_t_u_s(0x667DL, ((((g_45 <= ((safe_add_func_uint64_t_u_u(((safe_rshift_func_int16_t_s_s((g_589[1][0][4] & (*l_1023)), 0)) , l_980[4]), (*l_772))) , g_51)) < (*g_156)) || l_1029) , 7L)))))));
                    }
                }

                ;
                ;
                for (l_979 = 21; (l_979 != 10); --l_979)
                {
                    int *l_1044 = (void*)0;
                    unsigned *l_1055 = &g_713[1];
                    l_1044 = &l_953[1][1];

                    ;
                    if (((~(safe_mod_func_uint32_t_u_u(l_1012.f1, (*l_1044)))) > ((*l_1023) >= (-1L))))
                    {
                        int **l_1056 = (void*)0;
                        int *l_1057 = &l_887;
                        short l_1060 = 0x57D4L;
                        l_1057 = l_1023;

                        ;
                        (*l_1057) &= ((*l_772) &= (safe_mod_func_uint16_t_u_u((*g_199), (*l_876))));
                    }
                    else
                    {
                        int **l_1061 = &g_278[0][2][2];
                        (*l_1061) = &l_1000;
                        (*l_1023) = ((0L | (((safe_rshift_func_uint8_t_u_u((*g_54), 2)) | (*g_44)) ^ ((((*l_772) &= (safe_lshift_func_int16_t_s_u(func_15(func_18(func_18((*l_992), (((*g_200) = (*g_199)) , (void*)0), &g_45, (*l_1023)), &g_45, &g_573[0][0], l_1029), (*g_54)), g_1066))) && l_1019) , 0xD154L))) , 0x12AF5B54L);
                        (*l_1061) = &l_887;
                    }
                }


                return l_1012;


                            }

                        for (l_979 = 0; (l_979 <= 5); l_979 += 1)
            {
                unsigned short l_1092 = 0xFFD2L;
                unsigned long long ****l_1100 = (void*)0;
                int l_1135 = 0x80FFA87EL;
                unsigned short **l_1148 = &g_199;
                unsigned char l_1159 = 0xDEL;
                int *l_1192 = &l_887;
                union U0 *l_1195 = (void*)0;
                union U0 *l_1196 = &g_87;
                int i;
            }
        }


        (*g_277) = (((*l_1085) ^ l_1239) || ((*l_1114) <= (((*l_1244) = (((*l_1240) = (*l_772)) < func_15(func_18(&g_573[5][2], func_23(g_591, (((l_887 = ((*l_1085) , ((((*l_1114) | (((*g_54) | g_55) >= (*l_1085))) < (*l_772)) , (*l_772)))) != 0x603BL) == (*l_1085)), (*l_1085), (*l_992), l_614), &g_573[0][1], l_1243), (*l_1085)))) | g_770)));
        (*l_1245) = &l_954;

        ;
    }
    else
    {
        unsigned *l_1248 = &g_713[6];
        unsigned *l_1249 = &l_1243;
        long long *l_1250 = &g_1097;
        int l_1254 = 6L;
        int l_1259 = 0x26A8ECE3L;
        unsigned short *l_1260 = (void*)0;
        unsigned short *l_1261 = &g_1190;
        short *l_1262[2][10][7] = {{{&l_771,&g_611,&g_1072,(void*)0,&l_771,&l_771,(void*)0},{&g_611,(void*)0,&g_611,&l_771,&l_2[2][6][1],&g_611,&g_770},{(void*)0,&g_770,&g_770,(void*)0,&g_770,&g_770,&g_770},{(void*)0,&l_771,&l_771,(void*)0,&g_770,&g_611,&l_2[2][6][1]},{&l_771,&l_771,&g_611,&g_1072,(void*)0,&l_771,&l_771},{&g_611,&l_2[2][6][1],&g_1072,&l_2[2][6][1],&g_611,&l_771,&l_2[2][6][1]},{&g_770,&g_1072,&g_611,(void*)0,&g_611,&g_611,&g_770},{&l_771,(void*)0,(void*)0,(void*)0,(void*)0,&l_771,&g_770},{&g_770,(void*)0,&g_770,&g_770,&g_770,(void*)0,(void*)0},{&g_611,&g_1072,&l_771,&l_771,&l_771,&g_611,(void*)0}},{{&g_611,(void*)0,&l_771,&g_1072,&g_770,&g_611,&g_1072},{(void*)0,&l_2[2][6][1],&g_770,&l_771,&l_771,&g_770,&l_2[2][6][1]},{(void*)0,&g_611,&l_771,&l_771,&g_611,&g_1072,(void*)0},{&g_770,&l_771,(void*)0,&g_770,&l_2[2][6][1],&g_770,(void*)0},{&g_770,&g_770,&g_770,&l_771,(void*)0,(void*)0,&g_770},{(void*)0,(void*)0,&g_1072,&l_771,&g_611,&g_611,&l_771},{&g_1072,(void*)0,&g_1072,&g_1072,(void*)0,&g_1072,&g_611},{&l_771,&l_2[2][6][1],&l_771,&g_611,&l_2[2][6][1],&g_1072,&l_2[2][6][1]},{&g_770,&g_1072,&g_1072,&g_770,&g_611,&g_1072,(void*)0},{&g_611,(void*)0,(void*)0,&g_1072,&l_771,&g_611,&g_611}}};
        unsigned char *l_1264 = (void*)0;
        short l_1269 = 0x86A9L;
        int l_1272[4] = {3L,3L,3L,3L};
        char *l_1276 = &g_67;
        union U0 l_1284 = {1UL};
        union U0 *l_1292 = &g_87;
        unsigned char *l_1367 = &g_87.f0;
        int l_1375 = 1L;
        unsigned char *l_1391 = (void*)0;
        unsigned short l_1394[4] = {0x0547L,0x0547L,0x0547L,0x0547L};
        int *l_1407[10][2] = {{&l_1259,&g_1357},{&g_662,&g_1357},{&l_1259,&g_1357},{&g_662,&g_1357},{&l_1259,&g_1357},{&g_662,&g_1357},{&l_1259,&g_1357},{&g_662,&g_1357},{&l_1259,&g_1357},{&g_662,&g_1357}};
        int l_1442[1];
        unsigned l_1454[8][1] = {{18446744073709551606UL},{0UL},{18446744073709551606UL},{0UL},{18446744073709551606UL},{0UL},{18446744073709551606UL},{0UL}};
        int l_1466 = 0x3F138DF4L;
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_1442[i] = 0xEAE85E89L;
        if ((safe_lshift_func_int8_t_s_s((((*l_1249) = ((*l_1248) = 0x30DF9217L)) && (*l_772)), (func_68(l_1250, l_806, (*g_285), l_1254) >= 0x1273599E524AE752LL))))
        {
            unsigned char *l_1275[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1275[i] = &g_55;
            (*l_772) = (((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u(l_1269, 3)), (l_1269 | ((((safe_rshift_func_uint8_t_u_u(l_1272[3], (l_1272[3] <= (safe_rshift_func_int8_t_s_u(((void*)0 == &l_1272[3]), 0))))) , l_1264) != l_1276) > 1UL)))) == g_1277) || g_55);
        }
        else
        {
            unsigned l_1278 = 7UL;
            int l_1281 = (-7L);
            long long *l_1294 = &g_45;
            short *l_1321 = &l_2[0][2][1];
            int l_1338[6][10][4] = {{{0L,0xCD273241L,6L,(-1L)},{0L,0x90FCD9CDL,(-1L),0xE7727675L},{(-1L),0xE7727675L,0x1623BBD1L,0xE7727675L},{1L,0x90FCD9CDL,5L,(-1L)},{0x4CDB8E4FL,0xCD273241L,0xE7727675L,0x17AF1713L},{5L,1L,0xA9D8FFBAL,0xA9D8FFBAL},{5L,5L,0xE7727675L,0L},{0x4CDB8E4FL,0xA9D8FFBAL,5L,0xCD273241L},{1L,0L,0x1623BBD1L,5L},{(-1L),0L,(-1L),0xCD273241L}},{{0L,0xA9D8FFBAL,6L,0L},{0L,5L,1L,0xA9D8FFBAL},{0x17AF1713L,1L,1L,0x17AF1713L},{0L,0xCD273241L,6L,(-1L)},{0L,0x90FCD9CDL,(-1L),0xE7727675L},{(-1L),0xE7727675L,0x1623BBD1L,0xE7727675L},{1L,0x90FCD9CDL,5L,(-1L)},{0x4CDB8E4FL,0xCD273241L,0xE7727675L,0x17AF1713L},{5L,1L,0xA9D8FFBAL,0xA9D8FFBAL},{5L,5L,0xE7727675L,0L}},{{0x4CDB8E4FL,0xA9D8FFBAL,5L,1L},{0x90FCD9CDL,(-1L),0xE7727675L,0x1623BBD1L},{0L,(-1L),0L,1L},{(-1L),0xCD273241L,5L,0xA9D8FFBAL},{0xA9D8FFBAL,0x1623BBD1L,0x90FCD9CDL,0xCD273241L},{6L,0x90FCD9CDL,0x90FCD9CDL,6L},{0xA9D8FFBAL,1L,5L,0L},{(-1L),0x17AF1713L,0L,0x4CDB8E4FL},{0L,0x4CDB8E4FL,0xE7727675L,0x4CDB8E4FL},{0x90FCD9CDL,0x17AF1713L,0x1623BBD1L,0L}},{{0L,1L,0x4CDB8E4FL,6L},{0x1623BBD1L,0x90FCD9CDL,0xCD273241L,0xCD273241L},{0x1623BBD1L,0x1623BBD1L,0x4CDB8E4FL,0xA9D8FFBAL},{0L,0xCD273241L,0x1623BBD1L,1L},{0x90FCD9CDL,(-1L),0xE7727675L,0x1623BBD1L},{0L,(-1L),0L,1L},{(-1L),0xCD273241L,5L,0xA9D8FFBAL},{0xA9D8FFBAL,0x1623BBD1L,0x90FCD9CDL,0xCD273241L},{6L,0x90FCD9CDL,0x90FCD9CDL,6L},{0xA9D8FFBAL,1L,5L,0L}},{{(-1L),0x17AF1713L,0L,0x4CDB8E4FL},{0L,0x4CDB8E4FL,0xE7727675L,0x4CDB8E4FL},{0x90FCD9CDL,0x17AF1713L,0x1623BBD1L,0L},{0L,1L,0x4CDB8E4FL,6L},{0x1623BBD1L,0x90FCD9CDL,1L,1L},{0xE7727675L,0xE7727675L,0L,0xCD273241L},{(-1L),1L,0xE7727675L,0x90FCD9CDL},{0x17AF1713L,0L,0x4CDB8E4FL,0xE7727675L},{0xA9D8FFBAL,0L,0xA9D8FFBAL,0x90FCD9CDL},{0L,1L,0x1623BBD1L,0xCD273241L}},{{0xCD273241L,0xE7727675L,0x17AF1713L,1L},{5L,0x17AF1713L,0x17AF1713L,5L},{0xCD273241L,0x90FCD9CDL,0x1623BBD1L,0xA9D8FFBAL},{0L,6L,0xA9D8FFBAL,0L},{0xA9D8FFBAL,0L,0x4CDB8E4FL,0L},{0x17AF1713L,6L,0xE7727675L,0xA9D8FFBAL},{(-1L),0x90FCD9CDL,0L,5L},{0xE7727675L,0x17AF1713L,1L,1L},{0xE7727675L,0xE7727675L,0L,0xCD273241L},{(-1L),1L,0xE7727675L,0x90FCD9CDL}}};
            int *l_1350 = (void*)0;
            short l_1351 = (-7L);
            union U0 *l_1368 = (void*)0;
            unsigned char l_1378 = 0x2BL;
            int i, j, k;
            if (l_1278)
            {
                return (*g_510);

                            }
            else
            {
                long long *l_1279 = &g_573[1][1];
                int l_1280 = (-3L);
                int *l_1285 = &l_954;
                union U0 *l_1293 = &g_87;
                long long l_1306 = (-3L);
                long long *l_1317 = &l_1306;
                l_1281 = ((((**g_1150) ^ l_1278) & func_15(l_1279, (*g_156))) , (func_33(l_1278) , l_1280));
                for (l_1269 = 11; (l_1269 < (-28)); l_1269 = safe_sub_func_int32_t_s_s(l_1269, 7))
                {
                    l_1285 = (((*g_510) = l_1284) , &l_1259);

                    ;
                    if (((255UL ^ (safe_lshift_func_int16_t_s_s(((void*)0 == g_1288[1]), (((*g_44) && ((safe_rshift_func_int8_t_s_s(l_1272[0], 7)) <= (*g_200))) , (safe_unary_minus_func_int64_t_s((0x9C2FL && (((*l_1276) = g_1072) & (g_1069 | g_309[0][5]))))))))) >= 0x9A5B0ECF19422747LL))
                    {
                        l_1292 = &l_1284;

                        ;
                        l_1293 = l_1293;
                    }
                    else
                    {
                        short l_1295[3][4][2] = {{{0L,0xEE48L},{0x195FL,0xEE48L},{0L,0xD61EL},{0xD61EL,0L}},{{0xEE48L,0x195FL},{0xEE48L,0L},{0xD61EL,0xD61EL},{0L,0xEE48L}},{{0x195FL,0xEE48L},{0L,0xD61EL},{0xD61EL,0L},{0xEE48L,0x195FL}}};
                        int **l_1296[7][2][9] = {{{&g_278[0][1][4],&l_1285,(void*)0,&g_277,&g_960,&g_278[1][0][5],(void*)0,(void*)0,&g_278[1][0][5]},{&g_278[0][2][2],&g_960,&l_772,&g_960,&l_1117,&l_1117,&l_1285,&g_960,&g_278[0][2][2]}},{{&g_960,&l_1285,&l_1285,&g_960,&l_1117,&l_1285,&g_960,(void*)0,(void*)0},{&l_1285,&g_278[0][1][4],(void*)0,&g_277,(void*)0,&l_1117,&g_960,&g_278[0][1][4],&l_1117}},{{&l_1285,&g_277,&l_1117,(void*)0,&l_1285,&l_1285,&l_1285,(void*)0,&l_1117},{&l_1285,&l_1285,&l_1285,&g_278[0][4][5],&g_278[0][1][4],&g_278[0][2][2],&l_1285,&g_960,(void*)0}},{{&l_1285,&l_1285,&l_772,&l_1285,&g_278[0][4][5],(void*)0,&g_960,&l_1285,&g_278[0][2][2]},{&l_1285,&g_277,&l_1285,&l_1285,&g_277,&l_1117,(void*)0,&l_1285,&l_1285}},{{&g_960,&g_278[0][1][4],&l_1117,&g_278[0][4][5],&g_278[0][4][5],&l_1117,&g_278[0][1][4],&g_960,&l_1117},{&l_1117,&l_1285,(void*)0,(void*)0,&g_278[0][1][4],(void*)0,(void*)0,&g_960,&l_1285}},{{&g_278[0][4][5],&g_960,&l_1285,&g_277,&l_1285,&g_278[0][2][2],&g_960,&l_1285,&l_1117},{&g_278[0][4][5],&g_278[0][2][2],&l_772,&g_960,(void*)0,&l_1285,&g_960,&g_960,(void*)0}},{{&l_1285,&g_278[0][2][2],&l_1117,&g_278[0][2][2],&l_1285,&l_1285,(void*)0,&l_1117,&l_1285},{&g_278[0][2][2],&l_1117,(void*)0,&l_1117,&l_1285,&g_278[0][4][5],&g_278[0][2][2],&g_277,&g_278[0][2][2]}}};
                        int i, j, k;
                        (*l_1285) ^= (0x7E84965FL && (l_1295[2][2][0] ^= func_15(l_1294, (*g_54))));
                        if (l_1295[2][2][0])
                            continue;
                        l_772 = &l_1281;

                        ;
                    }
                    for (g_11 = 0; (g_11 < 21); g_11 = safe_add_func_uint32_t_u_u(g_11, 2))
                    {
                        int **l_1299 = &l_1285;
                        union U0 *l_1304 = &g_87;
                        (*l_1299) = &l_1272[2];

                        ;
                        (*g_277) = (((*l_1293) , (safe_add_func_uint32_t_u_u(0xD766F6CAL, g_1277))) , ((g_1305 = ((safe_add_func_int8_t_s_s(l_1278, ((&l_1284 != (l_1304 = &l_1284)) && l_1281))) < ((*l_772) | ((void*)0 == &g_696[2][3])))) != l_1281));

                        ;
                    }

                    ;
                }

                ;
                ;
                ;
                (*l_1285) = 0x810933E2L;
                if (((g_431 , l_1259) ^ (l_1280 = ((func_15(func_18(l_1279, func_18(l_1279, func_23(l_1278, ((*l_772) = ((l_1278 , ((((*l_1248) |= l_1281) & (*l_772)) > 0L)) || l_1272[3])), l_1306, &l_1306, l_1294), &g_1189, l_1278), &g_11, l_1307), (*l_1285)) > 65528UL) > 0x30L))))
                {
                    int l_1308[7][9];
                    int i, j;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 9; j++)
                            l_1308[i][j] = 0x9FCC9BC7L;
                    }
                    (*l_1285) = (*g_277);
                    (*l_772) = l_1308[3][7];
                }
                else
                {
                    long long l_1311 = 0xB4C5F923D761E2D3LL;
                    for (g_3 = 0; (g_3 >= 16); ++g_3)
                    {
                        unsigned char l_1316[4][6] = {{0xD5L,0x18L,255UL,0x18L,0xD5L,1UL},{0xD5L,0x18L,255UL,0x18L,0xD5L,1UL},{0xD5L,0x18L,255UL,0x18L,0xD5L,1UL},{0xD5L,0x18L,255UL,0x18L,0xD5L,1UL}};
                        short *l_1318 = &g_770;
                        short **l_1319[4];
                        int **l_1322 = &l_1117;
                        int i, j;
                        for (i = 0; i < 4; i++)
                            l_1319[i] = &g_613[8][4][3];
                        if ((*l_1285))
                            break;
                        (*l_1322) = ((l_1311 < ((*l_1317) = ((safe_sub_func_uint8_t_u_u(((*g_54) ^= (safe_add_func_uint16_t_u_u(l_1316[0][5], (*l_1285)))), (((*g_156) , l_1318) == (l_1321 = (l_1320 = (void*)0))))) , (*g_44)))) , &l_1281);

                        ;
                        ;
                        ;
                    }

                    ;
                    ;
                    ;
                }

                ;
                ;
                ;
            }

            ;
            ;
            ;
            ;
            ;
            if (((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(l_1281, (((*l_1249) &= ((-3L) & (l_1254 ^= func_15(func_73((((*l_1248) = (((0x33D8L == l_1272[2]) == l_1281) >= (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s((l_1278 ^ (*l_772)), 4)) , l_1284.f0), (((((safe_rshift_func_int16_t_s_s((-9L), l_1278)) , l_1278) || 5UL) <= (*l_772)) && 0x8BL))))) >= l_1272[1])), (*l_772))))) <= l_1284.f1))), l_1281)) && 0xD216B78B4C6FB361LL))
            {
                short **l_1337 = (void*)0;
                unsigned long long l_1343 = 1UL;
                int l_1355 = 1L;
                long long *l_1360 = &g_87.f3;
                (*l_772) ^= l_1278;
                if ((((*g_277) >= (safe_mod_func_int8_t_s_s(0xDAL, (l_1281 || (*g_44))))) > ((((l_1338[4][7][3] &= ((*g_277) == ((safe_sub_func_uint32_t_u_u((((((*g_200) = ((*l_1292) , ((*l_772) ^ (-1L)))) , &l_1321) == l_1337) , g_1097), 4294967288UL)) == (*g_54)))) != g_1305) , l_1272[3]) && (*g_200))))
                {
                    l_1254 = l_1284.f1;
                }
                else
                {
                    char l_1346 = (-8L);
                    long long *l_1358 = &g_573[0][2];
                    (*l_772) = (&g_1145[1] == &g_1145[1]);
                    for (g_55 = 0; (g_55 < 19); ++g_55)
                    {
                        int *l_1349 = &g_765[3];
                        (*l_772) ^= (safe_sub_func_uint8_t_u_u((l_1343 > (*g_54)), ((safe_sub_func_int8_t_s_s(func_33(l_1346), (safe_lshift_func_uint8_t_u_s(0xBDL, l_1343)))) != l_1343)));
                        l_1350 = l_1349;

                        ;
                    }

                    ;
                    for (g_387 = 0; (g_387 <= 1); g_387 += 1)
                    {
                        unsigned short l_1354 = 0xF0AAL;
                        int i;
                        l_1355 |= (l_1272[(g_387 + 1)] = (((*l_1276) = (l_1343 | ((l_1351 <= (+2UL)) , ((**g_1150) ^ (**g_1150))))) || (safe_sub_func_int64_t_s_s((((*g_200) = l_1272[1]) , (func_33((*l_772)) < ((*g_54) ^ l_1354))), 0x743FC8E147D0E103LL))));
                    }
                    if ((*g_277))
                    {
                        union U0 l_1356 = {0x1CL};
                        return l_1356;

                                            }
                    else
                    {
                        long long **l_1359 = &l_614;
                        int l_1366 = 0L;
                        g_1357 = ((*l_772) = func_33(((*g_54) & func_33(l_1343))));
                        l_1355 ^= ((l_1259 != (*g_54)) >= ((((((l_1360 = ((*l_1359) = l_1358)) == (void*)0) ^ (safe_lshift_func_uint16_t_u_u((g_1363 , (**g_1150)), ((((*g_156) == (safe_mod_func_uint8_t_u_u((*g_54), 0xB7L))) || g_591) <= l_1366)))) & l_1366) , l_1367) == (void*)0));

                        ;
                        ;
                    }

                    ;
                    ;
                }

                ;
                ;
                ;
            }
            else
            {
                l_1368 = (void*)0;
            }

            ;
            ;
            (*g_277) = (func_33((*l_772)) | ((~g_765[3]) , ((safe_sub_func_uint64_t_u_u(l_1338[4][7][3], l_1272[3])) & (safe_add_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u(0xDFCEL, l_1375)), ((safe_rshift_func_uint8_t_u_u(((-7L) == ((l_1378 , (*g_54)) >= g_230[2])), g_1379[0])) <= (*l_772)))))));
            for (g_45 = 17; (g_45 >= (-11)); g_45 = safe_sub_func_uint32_t_u_u(g_45, 8))
            {
                unsigned long long l_1382 = 0xABDEADD0335238C3LL;
                int **l_1383 = &g_960;
                if (l_1382)
                    break;
                (*l_1383) = &l_954;

                ;
            }

            ;
        }

        ;
        ;
        ;


        ;

        ;

        ;
        ;
        (*g_277) ^= 0x69A22730L;
        if (((*g_277) = 0L))
        {
            int l_1388 = 0x6A63909FL;
            long long *l_1389 = &g_11;
            long long **l_1390 = &g_44;
            l_1259 |= (((*g_156) , (((*l_1249) = (((!((safe_sub_func_int64_t_s_s(((*l_1250) = ((safe_sub_func_uint8_t_u_u((&g_1150 != (void*)0), ((*l_1367) = (l_1388 != (l_1388 && l_1388))))) > 0x4EL)), 0x866BE5DEFE92625ELL)) == l_1388)) <= l_1395) ^ 1UL)) , 0x2208L)) > (**g_1150));
        }
        else
        {
            long long l_1396 = 0x7F7100DCAF8226FCLL;
            int *l_1401 = &g_1379[0];
            int l_1421 = (-3L);
            int l_1436 = 0L;
            (*g_277) ^= l_1396;
            (*g_277) = l_1394[3];
            for (g_1069 = 0; (g_1069 < 25); g_1069++)
            {
                unsigned char l_1399 = 0x26L;
                int *l_1400 = &g_580;
                int **l_1403 = &g_277;
                union U0 l_1409[4][10][6] = {{{{253UL},{247UL},{1UL},{0x48L},{255UL},{1UL}},{{255UL},{6UL},{0UL},{255UL},{0x3EL},{0x85L}},{{0x02L},{253UL},{1UL},{0xE0L},{1UL},{0xFFL}},{{0xD2L},{0x48L},{0UL},{0x3AL},{1UL},{0x4FL}},{{0x3EL},{253UL},{1UL},{253UL},{0x3EL},{247UL}},{{0x78L},{6UL},{1UL},{0x79L},{255UL},{0x89L}},{{1UL},{247UL},{0xD9L},{6UL},{6UL},{0x89L}},{{0x3AL},{0x34L},{1UL},{1UL},{0x34L},{247UL}},{{6UL},{0xE0L},{0x6DL},{2UL},{0xDAL},{0UL}},{{0UL},{0x02L},{1UL},{255UL},{0x78L},{0x89L}}},{{{0UL},{1UL},{1UL},{2UL},{255UL},{1UL}},{{1UL},{0xDAL},{0x85L},{0xE0L},{1UL},{0x6DL}},{{0x48L},{0x3AL},{0xFFL},{0x79L},{0x3EL},{1UL}},{{0xE0L},{0x3AL},{0x4FL},{1UL},{1UL},{0x4FL}},{{0xDAL},{0xDAL},{247UL},{6UL},{255UL},{0xE4L}},{{0x02L},{1UL},{0x89L},{0x48L},{0x78L},{247UL}},{{0x3EL},{0x02L},{0x89L},{0UL},{0xDAL},{0xE4L}},{{0x3AL},{0UL},{247UL},{247UL},{6UL},{0x4FL}},{{247UL},{6UL},{0x4FL},{0x78L},{1UL},{1UL}},{{6UL},{0x34L},{0xFFL},{0x78L},{247UL},{0x6DL}}},{{{247UL},{0x79L},{0x85L},{247UL},{0x02L},{1UL}},{{0x3AL},{6UL},{1UL},{0UL},{2UL},{0x89L}},{{0x3EL},{0x78L},{1UL},{0x48L},{2UL},{0UL}},{{0x02L},{6UL},{0x6DL},{6UL},{0x02L},{0xA3L}},{{0xDAL},{0x79L},{255UL},{4UL},{0x4AL},{0UL}},{{1UL},{247UL},{253UL},{0xE9L},{0xA0L},{0UL}},{{0xDFL},{0x12L},{255UL},{1UL},{0x12L},{1UL}},{{0xA0L},{0UL},{0x02L},{0xE6L},{0xE7L},{0x48L}},{{0UL},{8UL},{0xD2L},{250UL},{0x19L},{0xE0L}},{{0UL},{4UL},{0x3EL},{0xE6L},{250UL},{0xDAL}}},{{{0xA0L},{0xE7L},{0x78L},{1UL},{4UL},{0x02L}},{{0xDFL},{0x79L},{1UL},{0xE9L},{0x40L},{0x3EL}},{{1UL},{0x79L},{0x3AL},{4UL},{4UL},{0x3AL}},{{0xE7L},{0xE7L},{6UL},{0xA9L},{250UL},{247UL}},{{8UL},{4UL},{0xE0L},{0xDFL},{0x19L},{6UL}},{{0x40L},{8UL},{0xE0L},{0UL},{0xE7L},{247UL}},{{0x79L},{0UL},{6UL},{0x4AL},{0x12L},{0x3AL}},{{0x4AL},{0x12L},{0x3AL},{0x19L},{0xA0L},{0x3EL}},{{0xA9L},{247UL},{1UL},{0x19L},{0x4AL},{0x02L}},{{0x4AL},{0xE9L},{0x78L},{0x4AL},{8UL},{0xDAL}}}};
                char l_1415 = (-1L);
                int i, j, k;
                if (l_1399)
                    break;
                for (g_87.f2 = 0; (g_87.f2 >= 0); g_87.f2 -= 1)
                {
                    union U0 l_1402 = {1UL};
                    int i;
                    if (g_1379[g_87.f2])
                    {
                        l_1401 = l_1400;

                        ;
                        (*g_277) = g_1379[g_87.f2];
                        g_1379[g_87.f2] &= ((*l_1401) = ((*l_1401) , ((*g_277) = l_1394[3])));
                    }
                    else
                    {
                        if (g_1379[g_87.f2])
                            break;
                        return l_1402;



                                            }

                    ;
                }

                                (*l_1403) = &l_1259;

                ;
                for (g_87.f0 = 0; (g_87.f0 < 39); g_87.f0++)
                {
                    int *l_1406 = &g_765[4];
                    short l_1408 = 8L;
                    union U0 l_1412 = {0UL};
                    unsigned char l_1416 = 246UL;
                    union U0 ***l_1431[7] = {&g_1145[3],&g_1145[3],&g_1145[3],&g_1145[3],&g_1145[3],&g_1145[3],&g_1145[3]};
                    int i;
                    if ((*l_1401))
                    {
                        l_1407[1][0] = l_1406;
                        (*g_277) ^= (((*l_1401) &= (-3L)) != g_765[7]);
                        if ((*l_1400))
                            continue;
                    }
                    else
                    {
                        (*g_277) = l_1408;
                        return l_1409[2][1][1];



                                            }
                    if ((*l_1401))
                        continue;
                    if ((func_15(((l_1421 ^= ((safe_rshift_func_int16_t_s_u((*l_1401), (*l_1406))) , (&g_156 == (l_1412 , (((((*l_1261) = (**g_1150)) < ((safe_add_func_uint8_t_u_u((**l_1403), ((l_1416 = (l_1415 = (+(*l_1406)))) && (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((l_1409[3][8][0] , (**l_1403)), (*l_1406))), (*l_1400)))))) < (*l_1400))) && 0x361EL) , &g_285))))) , (void*)0), (*g_54)) <= (*l_1406)))
                    {
                        long long l_1430[6] = {1L,0xFDE64EF91D0C18B9LL,0xFDE64EF91D0C18B9LL,1L,0xFDE64EF91D0C18B9LL,0xFDE64EF91D0C18B9LL};
                        int *l_1435 = &l_1263;
                        int i;
                        (*g_277) = (safe_add_func_uint32_t_u_u(((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s((func_15(func_73(((*l_1435) = (((((safe_rshift_func_int8_t_s_u(g_770, 5)) , &g_1145[3]) != l_1431[4]) && (*g_277)) & ((*g_44) <= ((safe_rshift_func_int16_t_s_s(l_1430[0], (*l_1400))) && (*l_1400)))))), (*l_1400)) , (*g_200)), (*l_1406))), (*l_1406))) & l_1436), (*l_1401)));
                        (**l_1403) &= l_1430[4];
                    }
                    else
                    {
                        if (l_1437)
                            break;
                    }
                    (*l_1400) = 0L;
                }

                            }

            ;
            ;

            (*l_1401) = 0xDC0D395AL;
        }

        ;

        for (g_580 = 3; (g_580 >= 0); g_580 -= 1)
        {
            long long *l_1438 = &g_573[5][0];
            int l_1439 = 0xCA752112L;
            int l_1453 = (-5L);
            (*g_277) |= ((l_1439 != (**g_1150)) != l_1442[0]);
            for (g_1072 = 7; (g_1072 >= 2); g_1072 -= 1)
            {
                int l_1448 = 0xAC5E6CABL;
                int l_1456 = 0x9324DD99L;
                g_1455 = (8UL || (0x44L || (((safe_mod_func_int64_t_s_s((-1L), (safe_add_func_uint64_t_u_u(((safe_unary_minus_func_uint32_t_u(l_1448)) <= ((*g_200) ^ l_1448)), (l_1439 != l_1448))))) , ((*l_1261) |= func_33((safe_add_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((l_1439 = 0x953BL), l_1453)), l_1454[4][0]))))) || (**g_1150))));
                if ((*g_277))
                    break;
                for (l_887 = 0; (l_887 <= 3); l_887 += 1)
                {
                    long long *l_1457 = (void*)0;
                    long long *l_1463 = &l_1437;
                    int l_1464[4];
                    int l_1465 = 0xD35B5256L;
                    int i;
                    for (i = 0; i < 4; i++)
                        l_1464[i] = (-1L);
                    (*g_277) = 0x11220730L;
                    for (g_611 = 6; (g_611 >= 0); g_611 -= 1)
                    {
                        unsigned char *l_1458 = &l_1284.f0;
                        unsigned char **l_1459 = &l_1264;
                        union U0 l_1460 = {0x77L};
                        int i, j, k;
                        l_1456 = 0x85746BF1L;
                        (*g_277) = (((**g_1150) = l_1448) >= l_1465);
                    }
                }
            }
        }
    }

        ;
    ;



    ;

    ;

    ;
    for (g_153 = 0; (g_153 <= 1); g_153 += 1)
    {
        unsigned *l_1468 = &g_713[1];
        unsigned **l_1467 = &l_1468;
        int l_1489 = 0x65CDE03DL;
        int l_1490 = 0xF5834095L;
        unsigned **l_1515 = (void*)0;
        union U0 l_1523 = {9UL};
        long long ***l_1524 = &g_1206;
        long long l_1549 = 0x894A4CCF016AF4AALL;
        char l_1611[3][10][1] = {{{0x4EL},{0L},{0x23L},{0x68L},{0L},{0x68L},{0x23L},{0L},{0x4EL},{0x4EL}},{{0L},{0x23L},{0x68L},{0L},{0x68L},{0x23L},{0L},{0x4EL},{0x4EL},{0L}},{{0x23L},{0x68L},{0L},{0x68L},{0x23L},{0L},{0x4EL},{0x4EL},{0L},{0x23L}}};
        long long *l_1688[9] = {&g_45,&g_45,&g_45,&g_45,&g_45,&g_45,&g_45,&g_45,&g_45};
        char l_1774 = 1L;
        int l_1789 = 0x5905E552L;
        unsigned l_1798 = 0x54FF72EFL;
        char l_1799 = 0x09L;
        int i, j, k;
    }
    return (*l_1493);


    }







static short func_15(long long * p_16, unsigned char p_17)
{
    int *l_757 = &g_113;
    int **l_758 = &g_278[0][2][2];
    (*l_758) = l_757;
    (*g_277) &= p_17;
    return (*l_757);
}







static long long * func_18(long long * p_19, long long * p_20, long long * p_21, unsigned p_22)
{
    for (g_209 = 9; (g_209 <= 27); g_209 = safe_add_func_int16_t_s_s(g_209, 8))
    {
        int *l_755 = &g_580;
        int **l_756 = &l_755;
        (*l_756) = l_755;
    }
    return &g_573[4][0];


}







static long long * func_23(char p_24, int p_25, short p_26, long long * p_27, long long * p_28)
{
    int l_615 = 0x265EF0DFL;
    union U0 **l_632 = &g_510;
    short *l_652 = &g_611;
    int *l_681 = &g_209;
    union U0 *l_705[7];
    union U0 *l_706[6] = {&g_87,(void*)0,(void*)0,&g_87,(void*)0,(void*)0};
    int l_735 = (-3L);
    int i;
    for (i = 0; i < 7; i++)
        l_705[i] = &g_87;
    if (((l_615 , (g_616 != &g_617[6][2][2])) || (l_615 == p_24)))
    {
        unsigned l_620 = 0x711446FFL;
        int **l_621 = &g_278[0][3][5];
        p_25 &= (((*g_200) = (0x9EADL || (l_615 , ((safe_lshift_func_int16_t_s_u(p_26, 8)) || l_620)))) , p_24);
        (*g_277) &= p_24;
        (*l_621) = &p_25;


    }
    else
    {
        return p_28;


    }


    if ((l_615 & (*g_200)))
    {
        unsigned char l_634 = 253UL;
        long long *l_641 = (void*)0;
        (*g_277) &= p_25;
        for (g_51 = 0; (g_51 <= (-17)); g_51--)
        {
            short *l_635 = &g_611;
            int l_636[2];
            unsigned l_646[5][8][3] = {{{0x4A87A932L,4294967295UL,0x652F2E84L},{0x82135F2DL,1UL,1UL},{0xCB20290CL,0x35A1F8AEL,1UL},{0x82135F2DL,5UL,0x1871DF65L},{0x4A87A932L,0x84631524L,1UL},{0x416364FFL,0xCAC5F3F4L,1UL},{4294967294UL,0x84631524L,0x652F2E84L},{8UL,5UL,1UL}},{{4294967294UL,0x35A1F8AEL,9UL},{0x416364FFL,1UL,1UL},{0x4A87A932L,4294967295UL,0x652F2E84L},{0x82135F2DL,1UL,1UL},{0xCB20290CL,0x35A1F8AEL,0x80D6F6A0L},{1UL,0x0B95BC09L,0x0202EE6CL},{0xF13C1D91L,1UL,0x80D6F6A0L},{5UL,0xE6B24340L,0xC2C2EFE5L}},{{0x652F2E84L,1UL,0x81DA1B2DL},{0xCAC5F3F4L,0x0B95BC09L,0UL},{0x652F2E84L,0x247131E0L,4294967286UL},{5UL,0xC2C2EFE5L,0UL},{0xF13C1D91L,0x9C9EBDF4L,0x81DA1B2DL},{1UL,0xC2C2EFE5L,0xC2C2EFE5L},{0x3DF7AA1CL,0x247131E0L,0x80D6F6A0L},{1UL,0x0B95BC09L,0x0202EE6CL}},{{0xF13C1D91L,1UL,0x80D6F6A0L},{5UL,0xE6B24340L,0xC2C2EFE5L},{0x652F2E84L,1UL,0x81DA1B2DL},{0xCAC5F3F4L,0x0B95BC09L,0UL},{0x652F2E84L,0x247131E0L,4294967286UL},{5UL,0xC2C2EFE5L,0UL},{0xF13C1D91L,0x9C9EBDF4L,0x81DA1B2DL},{1UL,0xC2C2EFE5L,0xC2C2EFE5L}},{{0x3DF7AA1CL,0x247131E0L,0x80D6F6A0L},{1UL,0x0B95BC09L,0x0202EE6CL},{0xF13C1D91L,1UL,0x80D6F6A0L},{5UL,0xE6B24340L,0xC2C2EFE5L},{0x652F2E84L,1UL,0x81DA1B2DL},{0xCAC5F3F4L,0x0B95BC09L,0UL},{0x652F2E84L,0x247131E0L,4294967286UL},{5UL,0xC2C2EFE5L,0UL}}};
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_636[i] = 0x2415948FL;
            p_25 &= (safe_sub_func_int64_t_s_s((safe_add_func_int64_t_s_s((safe_sub_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_s((*g_200), 5)) ^ (l_632 != &g_510)), ((((safe_unary_minus_func_int8_t_s((p_26 , (((*l_635) = l_634) , 1L)))) || l_634) , l_636[0]) | (func_33((safe_sub_func_uint32_t_u_u(g_286, p_24))) , g_431)))), p_24)), 0x475DFE97045E641DLL));
            (*g_277) = (safe_sub_func_uint32_t_u_u(func_33((((l_615 , p_26) > l_634) != p_25)), l_636[0]));
            for (p_26 = 23; (p_26 != 3); p_26 = safe_sub_func_uint64_t_u_u(p_26, 5))
            {
                return &g_11;



            }
        }
    }
    else
    {
        unsigned l_651 = 0x2CEB302DL;
        unsigned char ***l_658 = &g_155;
        unsigned char ****l_657 = &l_658;
        int l_659 = 0x18C2F98EL;
        short *l_660 = &g_661;
        union U0 *l_670 = &g_87;
        int l_674[8] = {0xE3D6EEDCL,0x73658DC2L,0x73658DC2L,0xE3D6EEDCL,0x73658DC2L,0x73658DC2L,0xE3D6EEDCL,0x73658DC2L};
        char *l_721 = (void*)0;
        char *l_722 = &g_67;
        char *l_725 = (void*)0;
        char *l_726 = &g_506;
        long long **l_731 = &g_44;
        long long *l_733 = &g_573[3][2];
        long long **l_732 = &l_733;
        unsigned char *l_734 = &g_55;
        unsigned long long *l_736 = &g_230[2];
        int i;
        if (((safe_add_func_uint32_t_u_u((+0x6ED1A44EL), func_33((1L >= p_26)))) > ((l_651 , (~((void*)0 != l_652))) || (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((*l_660) ^= ((*l_652) = (((l_657 == &l_658) == p_24) , l_659))), p_25)), g_662)))))
        {
            union U0 *l_669 = &g_87;
            union U0 *l_671[5] = {&g_87,&g_87,&g_87,&g_87,&g_87};
            short l_675 = (-1L);
            unsigned char *l_697 = &g_55;
            long long l_701 = 1L;
            int i;
            for (g_232 = (-21); (g_232 != 52); g_232 = safe_add_func_int8_t_s_s(g_232, 9))
            {
                int *l_667 = &g_87.f2;
                int l_668 = 0x857F9605L;
                (*g_277) &= (safe_mod_func_uint16_t_u_u(p_24, p_24));
                l_667 = (void*)0;

                ;
            }
        }
        else
        {
            unsigned l_716[7] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL};
            int *l_717 = &g_87.f2;
            int *l_718 = &l_674[1];
            int i;
            l_674[1] = (safe_lshift_func_int8_t_s_u(p_25, 7));
            l_716[2] ^= p_25;
            (*l_718) ^= (*l_681);
        }
        (*l_681) = (((safe_lshift_func_uint8_t_u_s(0xFDL, ((*l_722) |= ((void*)0 == &g_156)))) | ((p_26 >= (5UL > p_25)) != (safe_sub_func_int8_t_s_s(((*l_726) = (-1L)), (safe_lshift_func_uint16_t_u_s(((*l_670) , (((*l_736) = (safe_rshift_func_uint16_t_u_s(l_735, 3))) <= l_659)), p_25)))))) , p_24);
        l_615 ^= ((*g_510) , (l_674[6] = (((0x923AL == (safe_lshift_func_uint8_t_u_u(1UL, l_674[1]))) || p_26) | (*l_681))));
    }
    for (g_87.f2 = (-16); (g_87.f2 == (-27)); g_87.f2--)
    {
        int **l_741 = &l_681;
        unsigned char l_752 = 255UL;
        (*l_741) = &l_615;

        ;
        (*g_277) = ((**l_741) = (l_752 ^= (safe_mod_func_int64_t_s_s(((*p_28) = (**l_741)), ((((*g_54) = ((((safe_lshift_func_uint16_t_u_u((safe_add_func_int64_t_s_s((*l_681), (**l_741))), 7)) == (((safe_mod_func_int16_t_s_s(p_25, 0x4590L)) < g_506) , 18446744073709551614UL)) , (safe_mod_func_int16_t_s_s(p_26, (p_24 , (**l_741))))) < (**l_741))) != 3UL) | p_24)))));
        (*l_741) = (*l_741);
    }

        ;
    return p_27;



}







static short func_33(unsigned long long p_34)
{
    int l_594 = 1L;
    long long *l_603[8][1] = {{&g_573[0][1]},{&g_573[0][1]},{&g_11},{&g_573[0][1]},{&g_573[0][1]},{&g_11},{&g_573[0][1]},{&g_573[0][1]}};
    unsigned char *l_604 = &g_87.f0;
    unsigned long long *l_607 = &g_232;
    unsigned long long l_608 = 18446744073709551615UL;
    int **l_609 = &g_278[0][1][0];
    short *l_610 = &g_611;
    short **l_612[3][1][3] = {{{&l_610,&l_610,&l_610}},{{&l_610,&l_610,&l_610}},{{&l_610,&l_610,&l_610}}};
    int i, j, k;
    (*g_277) &= (safe_mod_func_uint8_t_u_u((l_594 <= (p_34 > (safe_rshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(((((*l_607) = (((p_34 > (safe_mod_func_uint32_t_u_u(((0xFF14L != 0x4F03L) || (*g_54)), 0x99631E40L))) < 65535UL) && p_34)) <= 0xA87B7348889BF8CCLL) , p_34), (*g_200))), l_608)) , (-5L)), 9)))), 0x69L));
    (*l_609) = &l_594;


    (*g_277) ^= ((g_613[8][4][3] = l_610) != &g_611);
    return p_34;


}







static unsigned short func_39(long long p_40)
{
    unsigned char l_48 = 255UL;
    unsigned char *l_49 = (void*)0;
    unsigned char *l_50 = (void*)0;
    long long *l_574 = &g_11;
    int *l_579 = &g_580;
    int **l_581 = (void*)0;
    int *l_582 = &g_209;
    unsigned char **l_586[5][1];
    int *l_587 = (void*)0;
    int l_588[5];
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
            l_586[i][j] = (void*)0;
    }
    for (i = 0; i < 5; i++)
        l_588[i] = (-8L);
    (*l_579) ^= (18446744073709551607UL >= (((safe_lshift_func_uint8_t_u_s((g_45 >= l_48), (~g_45))) != (g_51 &= p_40)) | (safe_mod_func_uint64_t_u_u((g_54 != (l_49 = func_56(func_62(&g_55), l_574, &l_48, l_48, p_40))), (-1L)))));

    ;
    ;
    ;
    ;


    l_582 = l_579;

    ;
    l_588[3] |= ((g_156 = func_56(&l_48, func_73((0xAD6900D0L < p_40)), (((g_45 && (*l_579)) , ((safe_unary_minus_func_int8_t_s((g_573[0][1] <= (safe_lshift_func_uint16_t_u_u((*g_200), 10))))) || (p_40 > (*l_582)))) , (void*)0), (*l_582), p_40)) != &g_55);

    ;
    return g_589[1][1][6];


}







static unsigned char * func_56(unsigned char * p_57, long long * p_58, unsigned char * p_59, int p_60, unsigned short p_61)
{
    unsigned *l_577 = &g_578[0][2];
    for (g_542 = 0; (g_542 == 8); g_542 = safe_add_func_int8_t_s_s(g_542, 1))
    {
        (*g_277) = ((void*)0 == l_577);
        if (p_61)
            continue;
        if (p_61)
            continue;
    }
    return p_57;


}







static unsigned char * func_62(unsigned char * p_63)
{
    char *l_66 = &g_67;
    int l_75 = 0x16035E94L;
    int l_572 = (-1L);
    l_572 = (l_75 = ((((safe_rshift_func_int8_t_s_s(((*l_66) = (-1L)), g_55)) == func_68(func_73(l_75), p_63, ((safe_lshift_func_int8_t_s_u(g_45, (((safe_rshift_func_int16_t_s_s((-2L), l_75)) , l_75) >= l_75))) || l_75), l_75)) , l_75) || l_75));

    ;
    ;
    ;


    l_75 &= ((-1L) & (g_573[0][1] = g_138));
    return l_66;


}







static unsigned short func_68(long long * p_69, unsigned char * p_70, unsigned char p_71, unsigned p_72)
{
    short l_82 = (-2L);
    int *l_148 = (void*)0;
    unsigned char **l_179 = &g_54;
    unsigned short *l_193 = &g_153;
    int l_241 = (-1L);
    unsigned l_276 = 0xC8B1AC3CL;
    unsigned char l_323 = 0x37L;
    unsigned long long *l_333 = &g_230[0];
    unsigned long long **l_332 = &l_333;
    unsigned long long l_339 = 6UL;
    long long l_397 = 0x66BD37AEF03B199ELL;
    int ***l_416 = &g_361[1][0];
    union U0 l_433 = {0x03L};
    unsigned l_469 = 0x11230DB8L;
    int *l_470 = &g_167;
    long long l_505 = (-4L);
    short *l_540 = &l_82;
    unsigned long long l_541 = 18446744073709551606UL;
    unsigned long long **l_562[4][6][7] = {{{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,(void*)0},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{(void*)0,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,(void*)0},{&l_333,(void*)0,&l_333,&l_333,&l_333,&l_333,&l_333}},{{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,(void*)0,&l_333},{&l_333,(void*)0,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,(void*)0,(void*)0,(void*)0}},{{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,(void*)0}},{{&l_333,&l_333,(void*)0,(void*)0,&l_333,&l_333,&l_333},{&l_333,&l_333,(void*)0,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,(void*)0,&l_333,&l_333},{&l_333,&l_333,&l_333,&l_333,&l_333,&l_333,&l_333}}};
    char *l_570 = &l_433.f1;
    unsigned l_571 = 0UL;
    int i, j, k;
    if (((((l_82 , (g_54 == (void*)0)) & p_72) ^ (0x041FL && (g_45 ^ g_45))) >= g_3))
    {
        unsigned l_98 = 8UL;
        char *l_106 = (void*)0;
        int l_109 = 1L;
        int *l_116 = &g_3;
        int **l_115 = &l_116;
        int l_162 = 0L;
        for (p_72 = 0; (p_72 < 20); ++p_72)
        {
            unsigned l_94[9][5] = {{8UL,8UL,8UL,8UL,8UL},{0UL,0xEBD5D228L,0xEBD5D228L,0UL,0xEBD5D228L},{8UL,8UL,0x4B5300FFL,8UL,8UL},{0xEBD5D228L,0UL,0xEBD5D228L,0xEBD5D228L,0UL},{8UL,8UL,8UL,8UL,8UL},{0UL,0UL,0x5683D526L,0UL,0UL},{8UL,8UL,8UL,8UL,8UL},{0UL,0xEBD5D228L,0xEBD5D228L,0UL,0xEBD5D228L},{8UL,8UL,0x4B5300FFL,8UL,8UL}};
            union U0 l_103 = {0x07L};
            int *l_104 = (void*)0;
            int *l_105 = &l_103.f2;
            long long l_107 = (-4L);
            int *l_108 = &g_87.f2;
            int *l_110 = (void*)0;
            int *l_111 = (void*)0;
            int *l_112 = &g_113;
            unsigned short *l_152 = &g_153;
            unsigned *l_161 = (void*)0;
            int i, j;
            if (((*l_112) = (l_109 |= ((*l_108) = ((l_82 >= (((safe_lshift_func_int8_t_s_s((g_87 , ((void*)0 != p_69)), ((safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u((((((safe_lshift_func_int16_t_s_s((l_94[0][2] == ((((((*l_105) = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int64_t_s((l_98 || 0xAC6B9930L))), ((safe_sub_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(((l_103 , (*p_70)) & (*p_70)), 1UL)), 0x89L)) , l_94[0][2])))) > 0x16490A06L) < (-1L)) , p_70) == l_106)), l_107)) || g_55) | g_87.f1) , l_82) , 65534UL), p_71)), l_98)) , p_71))) > g_3) <= 0x6D7B3CACL)) | l_98)))))
            {
                int **l_114 = &l_111;
                int ***l_117 = &l_114;
                (*l_114) = &l_109;

                ;
                (*l_117) = l_115;

                ;
                for (l_103.f2 = 0; (l_103.f2 == 17); l_103.f2 = safe_add_func_uint8_t_u_u(l_103.f2, 5))
                {
                    unsigned char *l_125 = &g_55;
                    unsigned char **l_124[2][6] = {{&l_125,&g_54,&l_125,&l_125,&g_54,&l_125},{&l_125,&g_54,&l_125,&l_125,&g_54,&l_125}};
                    unsigned long long *l_136 = (void*)0;
                    unsigned long long *l_137 = &g_138;
                    unsigned l_139 = 0x6F689573L;
                    int i, j;
                    for (l_98 = 23; (l_98 >= 17); --l_98)
                    {
                        if (p_71)
                            break;
                    }
                    if ((((safe_sub_func_int8_t_s_s(((p_70 = &p_71) != &g_55), (safe_rshift_func_uint16_t_u_s((safe_sub_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((g_113 && (p_72 & ((0x8ACF152CL == p_72) < (-2L)))), ((((*l_137) = (safe_mod_func_int16_t_s_s(((g_87.f2 , p_71) || p_72), g_87.f1))) != g_45) && p_71))), p_72)), (***l_117))))) && g_3) < l_139))
                    {
                        (*l_114) = &g_3;
                        (*l_111) = ((void*)0 == p_69);
                    }
                    else
                    {
                        unsigned *l_140 = &l_94[0][2];
                        int l_145 = 1L;
                        (*l_111) = g_3;
                        (*l_114) = (((*l_140) |= 18446744073709551615UL) , (**l_117));
                        (*l_111) |= (((*g_54) != (((safe_mod_func_int16_t_s_s(p_71, 8L)) , (void*)0) == &g_113)) | ((((safe_lshift_func_uint8_t_u_s(0x2FL, p_72)) , ((((+(*p_70)) && (p_72 | 1UL)) , (*g_54)) && l_145)) && g_87.f0) == 18446744073709551615UL));
                        (*l_111) = ((*l_112) |= ((safe_add_func_uint8_t_u_u(0x7DL, 0x73L)) & 0xC8F413EFL));
                    }

                    ;
                }

                ;
            }
            else
            {
                int **l_149[10][4][3] = {{{(void*)0,(void*)0,&l_104},{&l_105,&l_112,(void*)0},{(void*)0,&l_104,&l_105},{&l_110,&l_105,&l_148}},{{(void*)0,&l_148,&l_108},{(void*)0,&l_105,&l_105},{&l_104,&l_105,&l_104},{&l_105,&l_105,&l_110}},{{&l_105,&l_112,&l_108},{&l_104,&l_112,&l_148},{&l_111,&l_105,&l_104},{&l_104,&l_108,&l_110}},{{&l_105,(void*)0,&l_148},{(void*)0,&l_105,(void*)0},{&l_112,&l_105,&l_105},{&l_108,&l_105,&l_148}},{{&l_111,&l_111,&l_110},{&l_104,&l_110,&l_108},{&l_110,&l_105,&l_111},{(void*)0,&l_108,&l_105}},{{&l_111,&l_110,&l_111},{&l_105,&l_148,&l_108},{&l_104,&l_105,&l_110},{&l_148,&l_112,&l_148}},{{&l_111,&l_148,&l_105},{&l_105,(void*)0,(void*)0},{(void*)0,&l_105,&l_148},{(void*)0,&l_105,&l_105}},{{&l_105,&l_111,&l_110},{&l_112,&l_112,&l_105},{&l_104,&l_111,(void*)0},{&l_110,&l_105,&l_104}},{{(void*)0,&l_105,&l_112},{&l_105,(void*)0,&l_104},{(void*)0,&l_148,(void*)0},{&l_105,&l_112,&l_105}},{{&l_105,&l_105,(void*)0},{&l_110,&l_148,&l_112},{&l_110,&l_110,&l_105},{&l_148,&l_108,&l_110}}};
                int i, j, k;
                (*l_105) = p_72;
                l_148 = ((*l_115) = l_148);

                ;
                (*l_105) = (g_87 , (p_71 ^ (p_72 != (safe_mod_func_int16_t_s_s((((*p_69) , ((*l_115) = &g_3)) == ((*p_70) , l_148)), p_72)))));

                ;
            }

            ;
                                    ;
            (*l_108) &= (p_72 , ((p_72 | ((*l_152) = 0x17ACL)) <= 0x4420CCC24DD98C9ELL));
            (*l_108) ^= (+(((p_71 | p_71) == ((safe_unary_minus_func_uint64_t_u((&g_54 == (g_155 = &g_54)))) <= (safe_sub_func_uint8_t_u_u(1UL, (safe_add_func_uint32_t_u_u(((*l_112) = 0UL), ((*p_69) < l_162))))))) > (((0x6B3F764AL && p_71) >= (-1L)) <= g_138)));

            ;
            return g_153;
        }
    }
    else
    {
        unsigned l_163 = 0xFB177962L;
        short *l_173 = (void*)0;
        int l_198 = 0xA201F268L;
        unsigned short *l_201 = &g_153;
        int l_233 = 6L;
        int *l_242[10] = {&l_233,(void*)0,&l_233,(void*)0,&l_233,&l_233,(void*)0,&l_233,(void*)0,&l_233};
        unsigned char **l_260[10] = {(void*)0,&g_156,(void*)0,&g_156,(void*)0,&g_156,(void*)0,&g_156,(void*)0,&g_156};
        char *l_294[4][10][2] = {{{&g_87.f1,(void*)0},{&g_87.f1,(void*)0},{&g_87.f1,&g_87.f1},{(void*)0,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{(void*)0,&g_87.f1},{&g_87.f1,&g_87.f1}},{{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{(void*)0,&g_87.f1},{&g_87.f1,(void*)0},{&g_87.f1,(void*)0},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,(void*)0}},{{&g_87.f1,(void*)0},{&g_87.f1,&g_87.f1},{(void*)0,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{(void*)0,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1}},{{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{(void*)0,&g_87.f1},{&g_87.f1,(void*)0},{&g_87.f1,(void*)0},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,&g_87.f1},{&g_87.f1,(void*)0},{&g_87.f1,(void*)0}}};
        int *l_314[8][9][3] = {{{&g_209,&g_167,&l_241},{&g_167,&l_233,(void*)0},{&l_241,&g_209,(void*)0},{&g_113,(void*)0,&g_209},{&l_233,&g_3,&g_3},{&l_241,&g_209,&l_241},{&g_209,&l_241,(void*)0},{&l_198,&l_241,&l_233},{(void*)0,&g_167,&g_3}},{{(void*)0,&l_241,(void*)0},{(void*)0,&l_241,(void*)0},{&l_241,&g_209,(void*)0},{&l_198,&g_3,(void*)0},{(void*)0,(void*)0,&l_241},{&g_167,&l_233,&l_241},{(void*)0,&l_198,&g_113},{&l_198,&l_198,&l_241},{&l_241,&g_209,&g_209}},{{(void*)0,&g_209,&l_198},{(void*)0,&l_233,&g_167},{(void*)0,(void*)0,&l_198},{&l_198,&g_209,&g_209},{&g_209,&g_167,&l_241},{&l_241,&l_241,&g_113},{&l_233,(void*)0,&l_241},{&g_113,(void*)0,&l_241},{&g_167,(void*)0,(void*)0}},{{(void*)0,&l_241,(void*)0},{(void*)0,&g_167,(void*)0},{&g_209,&g_209,(void*)0},{(void*)0,(void*)0,&g_3},{&g_209,&l_233,&l_233},{(void*)0,&g_209,(void*)0},{&g_209,&g_209,&l_241},{(void*)0,&l_198,(void*)0},{(void*)0,(void*)0,&l_198}},{{&l_233,&l_241,&g_3},{&g_209,(void*)0,&l_198},{&g_167,(void*)0,(void*)0},{&l_198,&g_113,&g_113},{&l_233,&g_209,&l_198},{&g_209,&l_233,&l_241},{&l_198,&l_233,&g_3},{&l_233,&l_233,&g_167},{(void*)0,&g_209,(void*)0}},{{&l_233,&g_113,(void*)0},{&g_209,(void*)0,(void*)0},{&g_167,(void*)0,&g_209},{(void*)0,&l_241,&g_209},{&g_167,(void*)0,&g_209},{&g_209,&g_209,&g_209},{&l_233,&l_198,&l_241},{(void*)0,&g_167,&g_209},{&l_233,&l_241,&l_241}},{{&l_198,(void*)0,&g_209},{&g_209,&l_241,&l_241},{&l_233,(void*)0,&g_209},{&l_198,&g_113,&g_209},{&g_167,&l_241,&g_209},{&g_209,&l_233,&g_209},{&l_233,&l_241,(void*)0},{(void*)0,&g_113,(void*)0},{&l_241,(void*)0,(void*)0}},{{&l_198,&l_241,&g_167},{(void*)0,(void*)0,&g_3},{&g_113,&l_241,&l_241},{(void*)0,&l_198,&g_167},{&g_113,&g_113,&l_233},{&g_3,(void*)0,&g_3},{&g_113,&g_209,&g_113},{&g_209,&g_167,(void*)0},{&g_209,&g_113,&g_113}}};
        int l_437 = 8L;
        long long l_443[3];
        union U0 *l_471[4][1][2] = {{{&l_433,&l_433}},{{&l_433,&l_433}},{{&l_433,&l_433}},{{&l_433,&l_433}}};
        int l_550[2][3][1] = {{{0x97F49ABFL},{(-1L)},{(-1L)}},{{0x97F49ABFL},{(-1L)},{(-1L)}}};
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_443[i] = 1L;
        if (l_163)
        {
            char *l_171 = &g_87.f1;
            int l_172 = 8L;
            int *l_174 = (void*)0;
            int *l_175 = &l_172;
            union U0 l_188 = {0x61L};
            short *l_243[7];
            unsigned l_255 = 0UL;
            unsigned l_264 = 0xBC731BA7L;
            int i;
            for (i = 0; i < 7; i++)
                l_243[i] = &l_82;
            for (p_71 = 0; (p_71 < 7); ++p_71)
            {
                short *l_166 = (void*)0;
                unsigned long long *l_169[1];
                unsigned long long **l_168 = &l_169[0];
                int *l_170 = (void*)0;
                int i;
                for (i = 0; i < 1; i++)
                    l_169[i] = &g_138;
                g_87.f2 = ((g_167 = p_71) != ((((*l_168) = (void*)0) == (void*)0) || g_55));


            }
            l_172 = ((((*l_171) = g_167) | p_72) < 6UL);

                        if ((g_87.f2 = ((*l_175) = ((l_173 == l_173) , g_113))))
            {
                unsigned char **l_178 = (void*)0;
                unsigned char ***l_180 = &l_179;
                int *l_181 = &g_87.f2;
                int **l_182 = &l_181;
                unsigned l_185 = 0UL;
                (*l_180) = ((safe_add_func_uint64_t_u_u((p_72 != 0x22D0340AL), ((g_155 = l_178) != l_179))) , &p_70);

                ;
                ;
                (*l_182) = l_181;
                (*l_175) = g_11;
                g_113 ^= (safe_lshift_func_int8_t_s_s((*l_181), l_185));
            }
            else
            {
                unsigned short *l_192 = &g_153;
                unsigned short **l_191[2];
                int l_202 = 0xDEDA0BE5L;
                int *l_212 = &l_198;
                int l_213 = 0x46BC9B9DL;
                int i;
                for (i = 0; i < 2; i++)
                    l_191[i] = &l_192;
                if (((safe_add_func_uint16_t_u_u((0x20L & (l_188 , ((p_72 < (p_71 || g_167)) & (((*p_69) >= ((safe_lshift_func_int8_t_s_u(p_72, ((((l_193 = l_173) == (l_201 = ((safe_sub_func_int64_t_s_s(((g_199 = (((l_198 ^= ((**g_155) = (safe_lshift_func_uint8_t_u_u((!(0x08F3222122A3D401LL && 1L)), 2)))) | p_72) , l_173)) != g_200), (*p_69))) , (void*)0))) , g_153) > l_202))) , (-2L))) || 0xDB93L)))), p_72)) & 0x46L))
                {
                    for (g_153 = 0; (g_153 != 50); g_153 = safe_add_func_uint8_t_u_u(g_153, 3))
                    {
                        return (*g_200);
                    }
                    return p_71;
                }
                else
                {
                    char l_210 = 0xF3L;
                    int *l_211 = &l_202;
                    int **l_236 = (void*)0;
                    int **l_237 = &l_175;
                    if ((p_71 , (((*l_171) = p_72) , 0x153381E5L)))
                    {
                        l_210 |= ((*l_175) > (g_55 || (g_209 = ((((safe_add_func_uint8_t_u_u((safe_add_func_int32_t_s_s(p_72, (((((((*g_155) = (*g_155)) == (p_70 = (*l_179))) , p_71) , 0L) >= p_72) , (((0xDC8C82E536011996LL & (*p_69)) && 0L) || (*p_69))))), 0xBDL)) < 0UL) && p_71) || 0x8B660035L))));
                    }
                    else
                    {
                        unsigned long long l_214 = 7UL;
                        l_212 = l_211;

                        ;
                        l_214 |= l_213;
                    }

                                        ;
                    l_198 = 0xE0A6E090L;
                    for (l_198 = 23; (l_198 == (-21)); --l_198)
                    {
                        unsigned long long *l_227 = (void*)0;
                        unsigned long long *l_228 = (void*)0;
                        unsigned long long *l_229 = &g_230[0];
                        unsigned long long *l_231[7] = {&g_232,&g_232,&g_232,&g_232,&g_232,&g_232,&g_232};
                        int i;
                        (*l_175) = ((1L < (((((safe_rshift_func_int8_t_s_u((5UL > ((g_138 = 0x73122300B1250D9DLL) & (l_233 = ((*l_229) &= (safe_lshift_func_uint16_t_u_u(((safe_add_func_int64_t_s_s((0x3EEEL > ((p_71 = ((**g_155) |= (safe_sub_func_int8_t_s_s((safe_lshift_func_int8_t_s_s(l_198, 6)), ((*l_211) , g_3))))) , 65530UL)), (g_209 || l_163))) > g_153), p_72)))))), (*l_211))) ^ l_82) != g_153) | p_72) && p_72)) , (*l_212));

                                                (*l_211) &= (!1L);
                        if (p_71)
                            break;
                        (*l_211) = ((*p_69) < (safe_add_func_uint8_t_u_u((**g_155), g_167)));
                    }
                    (*l_237) = l_211;

                    ;
                }

                                ;
                ;
                ;
                ;
                ;
                for (g_113 = 3; (g_113 >= 0); g_113 -= 1)
                {
                    int **l_238 = (void*)0;
                    int **l_239 = (void*)0;
                    int **l_240[7][2][3] = {{{&l_175,&l_148,&l_175},{&l_174,&l_148,(void*)0}},{{(void*)0,(void*)0,(void*)0},{&l_212,&l_148,&l_148}},{{(void*)0,&l_148,&l_212},{&l_212,&l_148,&l_212}},{{(void*)0,(void*)0,&l_212},{&l_174,&l_174,&l_148}},{{&l_175,(void*)0,(void*)0},{&l_148,&l_148,(void*)0}},{{&l_175,&l_148,&l_175},{&l_174,&l_148,(void*)0}},{{(void*)0,(void*)0,(void*)0},{&l_212,&l_148,&l_148}}};
                    short **l_244 = &l_173;
                    short **l_254 = &l_243[2];
                    short ***l_253 = &l_254;
                    unsigned *l_256 = (void*)0;
                    unsigned *l_257 = (void*)0;
                    unsigned *l_258 = (void*)0;
                    unsigned *l_259 = &l_163;
                    int *l_261 = (void*)0;
                    int i, j, k;
                    l_174 = (void*)0;
                    l_241 = ((+g_230[g_113]) <= p_72);
                    for (l_198 = 0; (l_198 <= 3); l_198 += 1)
                    {
                        l_242[6] = &g_209;
                    }
                    if ((((*l_244) = l_243[2]) != ((safe_mod_func_int8_t_s_s(g_87.f1, ((((safe_add_func_int16_t_s_s((((*l_175) = g_230[0]) == ((*l_259) = ((l_255 |= (safe_sub_func_uint32_t_u_u((p_72 > g_11), ((*p_69) | (safe_add_func_int8_t_s_s(((*p_69) && ((7UL >= (((*l_253) = (void*)0) == (void*)0)) , p_72)), 255UL)))))) & (*g_200)))), g_55)) , l_260[7]) != (void*)0) ^ g_138))) , l_192)))
                    {
                        g_209 ^= (*l_175);
                        g_87.f2 = g_11;

                                                l_261 = &l_241;

                        ;
                        if (g_45)
                            break;
                    }
                    else
                    {
                        unsigned char ****l_273 = (void*)0;
                        unsigned char ***l_275 = &g_155;
                        unsigned char ****l_274 = &l_275;
                        if (g_87.f0)
                            break;
                        (*l_175) ^= g_153;
                        g_278[0][2][2] = (g_277 = (((safe_lshift_func_int8_t_s_u((g_55 && l_264), ((safe_rshift_func_uint8_t_u_u((*g_54), (*g_156))) > p_72))) <= (safe_mod_func_uint32_t_u_u(g_11, (safe_sub_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s(((&g_155 != ((*l_274) = &g_155)) == (*l_175)), l_276)), p_72))))) , &g_209));

                        ;
                    }

                    ;
                    ;
                    ;
                }

                ;
                ;
            }

            ;
            ;

            ;
            ;
            ;
            ;
            ;
        }
        else
        {
            int l_297 = (-10L);
            unsigned long long l_308 = 0x7CDE0DAF6430CB2ALL;
            g_278[0][2][2] = &g_167;
            for (g_87.f0 = (-17); (g_87.f0 < 54); g_87.f0++)
            {
                int *l_298 = &l_241;
                for (p_71 = 0; (p_71 <= 38); p_71++)
                {
                    unsigned l_291 = 18446744073709551612UL;
                    char *l_293 = &g_87.f1;
                    char **l_292 = &l_293;
                    (*g_277) = (safe_add_func_uint64_t_u_u((((*g_155) = (*g_155)) == (g_285 = &p_71)), ((safe_mod_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((l_291 > ((((*l_292) = g_54) == l_294[2][6][0]) == (!((safe_mod_func_int64_t_s_s(l_291, (l_297 = (-1L)))) , (((*g_199) = ((&l_297 == l_298) , l_291)) == 0x192BL))))) < p_71), 0xB9CFL)), (*p_70))) | g_230[0])));

                    ;
                    ;
                    if (p_72)
                        break;
                    for (l_198 = 21; (l_198 <= 11); l_198 = safe_sub_func_uint64_t_u_u(l_198, 1))
                    {
                        long long l_301 = 0x3DD9F28A0E0DAC7CLL;
                        return l_301;


                    }
                    if ((*l_298))
                    {
                        (*l_298) = (p_71 > (*p_69));
                    }
                    else
                    {
                        unsigned *l_312 = &l_276;
                        (*g_277) = (g_113 , (safe_mod_func_int64_t_s_s((g_309[0][5] = (safe_rshift_func_int8_t_s_u(((safe_sub_func_int64_t_s_s((*p_69), (-1L))) & l_308), 0))), ((((safe_add_func_int32_t_s_s(((*l_298) ^= (p_72 && 0x75L)), (p_72 | g_230[2]))) && (((*l_312) |= g_286) | p_71)) & 1L) & g_113))));
                        (*l_298) = ((safe_unary_minus_func_uint16_t_u(1UL)) , (-9L));
                    }
                }
            }

            ;
        }

                ;
        ;
        ;
        ;
        ;
        ;
        ;
        ;
        if (p_71)
        {
            unsigned short l_324 = 65526UL;
            union U0 l_331 = {249UL};
            unsigned short l_346 = 4UL;
            short *l_377 = (void*)0;
            short l_408 = 1L;
            union U0 **l_472 = &l_471[1][0][1];
            int *l_486 = (void*)0;
            if ((((((*p_69) ^ ((&g_113 != l_314[7][0][2]) < (safe_rshift_func_uint16_t_u_u(65526UL, (g_138 ^ (((safe_lshift_func_uint8_t_u_u(((void*)0 != &p_72), 7)) != (safe_lshift_func_int8_t_s_u((l_323 &= (safe_sub_func_uint32_t_u_u(4294967295UL, p_72))), l_324))) && p_72)))))) & (-4L)) >= p_72) & (-1L)))
            {
                int **l_325 = &l_314[6][3][2];
                long long l_344 = 0x8DD007751AF70A99LL;
                (*l_325) = (void*)0;
                for (l_324 = 0; (l_324 <= 9); l_324 += 1)
                {
                    unsigned char l_342 = 6UL;
                    long long *l_353 = (void*)0;
                    long long *l_354 = (void*)0;
                    long long *l_355 = &g_87.f3;
                    int ***l_368 = &g_361[1][5];
                    short *l_369 = &l_82;
                    int i;
                    l_242[l_324] = l_242[l_324];
                    if (p_72)
                    {
                        unsigned long long l_326 = 18446744073709551615UL;
                        unsigned long long ***l_334 = &l_332;
                        unsigned *l_336 = &l_163;
                        short *l_343 = &l_82;
                        int l_345 = 0xD4F5B5C5L;
                        l_326 = p_72;
                        l_345 |= ((p_71 && (safe_lshift_func_int8_t_s_u((safe_add_func_uint64_t_u_u((l_331 , (l_344 = (((*l_343) = (((*l_336) = (l_326 , ((p_72 , ((*l_334) = l_332)) != g_335))) , ((*p_70) , (((safe_rshift_func_uint8_t_u_u(l_339, 2)) < (((safe_sub_func_uint32_t_u_u((((g_55 >= g_87.f0) & (-1L)) || l_342), 0x1DA39915L)) || g_232) ^ p_72)) || 0x968BL)))) <= p_71))), p_72)), (*p_70)))) , p_71);
                        (*l_325) = &g_209;
                    }
                    else
                    {
                        l_346 = p_72;
                    }
                    if (((safe_rshift_func_int16_t_s_s(g_232, (safe_sub_func_int32_t_s_s(p_72, g_87.f0)))) || ((g_87.f0 && ((safe_mod_func_int32_t_s_s((((*l_355) = (*p_69)) || (((*l_369) = (safe_sub_func_uint64_t_u_u(((((safe_sub_func_uint8_t_u_u((*g_54), (g_360[9] != (((safe_rshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u(((p_71 == (((((((p_72 >= g_45) <= p_72) < p_71) , l_339) , 0x7628F6B5L) < p_71) > l_331.f1)) < g_113), l_346)), g_87.f3)) & g_232) , l_368)))) , p_72) < p_71) || 1UL), l_344))) , (-1L))), 0x3953933EL)) < p_71)) || (*p_69))))
                    {
                        return p_72;


                    }
                    else
                    {
                        return (*g_200);


                    }
                }
            }
            else
            {
                int *l_374 = &l_198;
                int ***l_415 = &g_361[0][5];
                for (l_346 = 0; (l_346 <= 1); l_346 += 1)
                {
                    unsigned l_370 = 1UL;
                    int *l_371[4] = {&l_233,&l_233,&l_233,&l_233};
                    int **l_372 = (void*)0;
                    int **l_373 = &g_278[1][2][1];
                    int l_376 = 1L;
                    int i;
                    l_370 ^= (*g_277);
                    (*l_373) = l_371[2];
                    for (g_286 = 0; (g_286 <= 1); g_286 += 1)
                    {
                        unsigned long long ***l_375 = &l_332;
                        (*l_373) = l_374;


                        (*l_375) = g_335;

                        ;
                        return (*g_200);



                    }
                    for (g_87.f3 = 0; (g_87.f3 <= 1); g_87.f3 += 1)
                    {
                        (*l_374) ^= ((l_376 <= ((void*)0 != l_377)) && 1UL);
                        (*l_373) = &l_241;
                    }

                                    }


                if (((g_167 >= ((g_232 && (*p_69)) , (l_331.f2 = ((*p_69) & l_331.f0)))) || (*p_69)))
                {
                    char l_390 = 3L;
                    int **l_402 = &l_314[7][0][2];
                    short **l_407 = &l_377;
                    for (g_87.f2 = 0; (g_87.f2 <= (-26)); g_87.f2 = safe_sub_func_uint32_t_u_u(g_87.f2, 2))
                    {
                        long long *l_386[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        unsigned *l_400 = &l_163;
                        char l_401 = 0x41L;
                        int i;
                        l_331.f2 &= (+(safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_add_func_int64_t_s_s((g_387 = (*p_69)), (safe_sub_func_uint8_t_u_u((((l_390 | (((((*g_200) = (safe_mod_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((g_309[0][5] , 4L), (l_324 | l_397))), ((1L || ((p_71 < ((safe_mod_func_uint16_t_u_u(((~((((*l_400) = p_71) , &l_201) != &l_193)) || l_401), p_72)) , 0x95090B88506F5892LL)) || l_390)) & p_71))), 1L))) & p_71) , (void*)0) == (void*)0)) ^ p_71) == (*l_374)), l_401)))), g_138)), g_167)));
                        return p_72;



                    }

                                        (*l_402) = l_374;
                    (*l_374) &= (((g_87.f3 = ((p_72 >= (safe_sub_func_int16_t_s_s(p_71, (p_71 != g_387)))) | (p_71 <= g_45))) != ((**l_332) = (safe_lshift_func_int16_t_s_u((((l_407 == (p_72 , (void*)0)) & (*g_200)) & l_408), 14)))) <= p_72);

                                    }
                else
                {
                    if ((safe_add_func_uint16_t_u_u(0x7BD7L, ((safe_sub_func_int64_t_s_s((-1L), p_72)) <= ((safe_rshift_func_int16_t_s_u(g_87.f0, 3)) < (l_415 == l_416))))))
                    {
                        int **l_417 = &g_278[0][2][2];
                        (*g_277) = 0x8908CF12L;
                        (*l_417) = (l_314[4][1][1] = (l_242[0] = &l_241));


                        (*g_277) = p_72;
                    }
                    else
                    {
                        int *l_418 = (void*)0;
                        int **l_419 = &l_314[3][4][0];
                        (*l_419) = l_418;
                        return p_72;



                    }


                }


                                if (p_71)
                {
                    unsigned short l_420 = 4UL;
                    int l_432 = (-1L);
                    char l_442 = 0x9BL;
                    unsigned long long ***l_446 = (void*)0;
                    unsigned long long ***l_447 = &l_332;
                    if (l_408)
                    {
                        unsigned *l_434 = &l_163;
                        int l_438[9][7][4] = {{{(-2L),0L,0L,1L},{4L,0xBB3DB7B4L,(-7L),(-7L)},{(-5L),0L,0xDF9B1FE8L,0L},{0xBB3DB7B4L,(-7L),0xD40E8E46L,0x61D66600L},{3L,(-2L),0xFDD80B24L,(-1L)},{0L,0xBA56D875L,5L,1L},{0L,0L,0xFDD80B24L,0xB2E0975FL}},{{3L,1L,0xD40E8E46L,0x2B66B907L},{0xBB3DB7B4L,0x83D03F56L,0xDF9B1FE8L,1L},{(-5L),3L,(-7L),0xCFA0B701L},{4L,0x52DBB7D8L,0L,(-7L)},{1L,0xFD518D7FL,(-5L),1L},{(-2L),0x3F3CAA95L,(-6L),1L},{0xFDD80B24L,0x83D03F56L,0x20D13A84L,0xD40E8E46L}},{{4L,(-5L),0L,0x85B00E19L},{(-2L),0x025BAF71L,0x19FC1093L,1L},{(-7L),0L,(-7L),0xAE44EC54L},{0x4FE45244L,0xFD518D7FL,0xF1AD4237L,(-1L)},{0L,(-7L),0x20D13A84L,0xCFA0B701L},{0xD63475BDL,4L,0L,(-3L)},{0L,0x83D03F56L,0x08C83F35L,1L}},{{1L,0x1EAA6C85L,0x2B66B907L,0xB2E0975FL},{(-8L),0xBB3DB7B4L,(-1L),0x1EAA6C85L},{1L,0xBA56D875L,0xDF9B1FE8L,0xCFA0B701L},{0x4FE45244L,0xD63475BDL,0L,(-1L)},{0x517711EDL,0xD40E8E46L,0L,(-5L)},{0x2B66B907L,0L,4L,(-7L)},{(-6L),0x51A2A051L,1L,(-8L)}},{{(-5L),(-1L),5L,5L},{0xBF5B44C7L,0xBF5B44C7L,1L,0x19FC1093L},{(-7L),(-10L),(-10L),0L},{0L,0xF42F70D1L,0L,(-10L)},{0x1DE97663L,0xF42F70D1L,0xB2E0975FL,0L},{0xF42F70D1L,(-10L),3L,0x19FC1093L},{1L,0xBF5B44C7L,0x10EE9FE0L,5L}},{{0x1EAA6C85L,(-1L),0xBB3DB7B4L,(-8L)},{0x3F3CAA95L,0x51A2A051L,(-9L),(-7L)},{0xBE40C4DFL,0L,2L,(-5L)},{3L,0xD40E8E46L,(-2L),(-1L)},{0x1DE97663L,1L,0x10EE9FE0L,(-7L)},{0L,(-3L),0L,(-4L)},{0x2B66B907L,3L,0L,0L}},{{0x1DE97663L,(-4L),5L,(-8L)},{0x51A2A051L,(-1L),2L,0x7857034AL},{(-1L),0x1DE97663L,1L,(-7L)},{0x3F3CAA95L,0xF1AD4237L,0L,1L},{0x517711EDL,0xF42F70D1L,0x10EE9FE0L,0x517711EDL},{(-6L),0L,1L,0x25D4755CL},{0xF42F70D1L,(-9L),0L,(-1L)}},{{(-5L),0x2B66B907L,0x7857034AL,0xBE40C4DFL},{0xF2E33E00L,1L,0xBA2F5ED9L,0L},{0xD40E8E46L,0x08C83F35L,5L,0x20D13A84L},{(-10L),(-7L),0xBE40C4DFL,5L},{0L,0L,1L,(-7L)},{0x1EAA6C85L,(-5L),2L,(-6L)},{(-10L),1L,(-10L),0x7857034AL}},{{0x20D13A84L,0L,(-9L),(-1L)},{0x5BF27620L,2L,0xEB52A002L,0L},{1L,0xD63475BDL,0xEB52A002L,0xD51BEF54L},{0x5BF27620L,0x1EAA6C85L,(-9L),0x025BAF71L},{0x20D13A84L,(-5L),(-10L),0L},{(-10L),0L,2L,0xF1AD4237L},{0x1EAA6C85L,(-1L),1L,0x19FC1093L}}};
                        int i, j, k;
                        (*l_374) &= (((*g_54) == l_420) || g_209);
                        l_432 = (((((*g_54) >= ((g_87.f0 || 0UL) != (safe_sub_func_int8_t_s_s(((*p_69) < (safe_lshift_func_int16_t_s_u(p_72, 6))), (safe_lshift_func_int16_t_s_u((g_286 , (safe_rshift_func_int8_t_s_u(0xF1L, 2))), 15)))))) > ((((g_431 = (p_72 , (l_331.f2 = 1L))) , 65535UL) < 5L) < g_153)) > (*l_374)) > l_408);
                        l_438[3][6][1] &= (((g_87.f1 = (((*l_434) = (g_230[0] >= (l_433 , 0xA9A7245E74854B9DLL))) == (((*l_374) &= p_72) < ((*g_277) = l_331.f0)))) && (p_71 = (((((-8L) == (safe_mod_func_uint32_t_u_u(((g_87 , ((((p_72 , ((((g_55 , 0x30L) || 0xB7L) != 0x2A5EL) || p_71)) < (*l_374)) , (*l_374)) <= 65535UL)) <= l_420), g_232))) | l_437) <= (-7L)) & (*p_69)))) > 8UL);
                    }
                    else
                    {
                        (*l_374) &= ((g_87 , ((((((*p_70) , g_439) != (((0xC3F74C842035C2B3LL == p_71) || (g_138 , (*p_69))) , (((((**l_332) ^= p_72) ^ (safe_sub_func_int64_t_s_s(((g_167 && 0x4E5E8EE7L) == (*g_285)), l_442))) || 0x929B7091DFA88ACELL) , (void*)0))) != (*g_285)) , p_71) | 0UL)) < l_443[2]);
                    }
                    (*l_374) &= (safe_sub_func_uint16_t_u_u(((*g_200) |= 0xA2E9L), (((*l_447) = ((*p_69) , (void*)0)) != (void*)0)));

                    ;
                    for (g_138 = 21; (g_138 == 37); ++g_138)
                    {
                        int *l_450 = &l_198;
                        int **l_451[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_451[i] = (void*)0;
                        l_148 = l_450;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned short l_457 = 0x3D91L;
                    for (l_82 = (-22); (l_82 > (-12)); l_82++)
                    {
                        long long *l_456[8] = {&l_443[1],&l_443[1],&l_443[1],&l_443[1],&l_443[1],&l_443[1],&l_443[1],&l_443[1]};
                        unsigned short *l_460 = &g_387;
                        int l_461 = 0x189AE751L;
                        unsigned long long *l_462[8] = {(void*)0,(void*)0,&l_339,(void*)0,(void*)0,&l_339,(void*)0,(void*)0};
                        int i;
                        (*g_277) = (safe_mod_func_uint64_t_u_u((0x8F61FBEE41F4C952LL & ((*l_374) = ((l_457 = g_55) ^ (((((*g_200) ^= 65531UL) ^ ((*l_460) = (safe_lshift_func_uint8_t_u_s((g_55 != ((**l_332) &= g_209)), 7)))) > (l_461 || p_72)) > p_71)))), p_71));
                        l_469 |= (safe_add_func_int8_t_s_s((safe_add_func_uint32_t_u_u((((void*)0 != g_278[0][0][3]) | (((*l_333) = p_72) <= (0x0E5574AF8F418D5CLL != (g_209 || ((((*p_69) & (l_433 , (safe_lshift_func_uint16_t_u_u((l_457 , (0x6BF4L || p_72)), 2)))) || g_113) | p_72))))), 0x9D450612L)), g_45));
                        (*l_374) = (l_470 != &l_198);
                    }
                }

                ;
                ;
            }

            ;


            ;
            (*l_472) = l_471[1][0][1];
            for (l_433.f0 = 6; (l_433.f0 < 24); l_433.f0 = safe_add_func_uint32_t_u_u(l_433.f0, 6))
            {
                short *l_477 = &l_408;
                char **l_478 = (void*)0;
                char **l_479 = &l_294[2][3][0];
                char *l_481[6][1] = {{(void*)0},{&l_331.f1},{&l_331.f1},{(void*)0},{&l_331.f1},{&l_331.f1}};
                char **l_480 = &l_481[5][0];
                short *l_482 = &l_82;
                int l_483[4][1][1] = {{{0xC30D7C46L}},{{(-1L)}},{{0xC30D7C46L}},{{(-1L)}}};
                long long *l_484 = (void*)0;
                long long *l_485 = &l_443[2];
                int *l_487 = &l_241;
                int i, j, k;
                l_487 = (((*l_333) = ((((((*l_482) |= (8UL != (safe_mod_func_int16_t_s_s(((*l_477) = 1L), ((*p_70) | ((18446744073709551609UL > (((*l_479) = p_70) == ((*l_480) = p_70))) == p_71)))))) < ((l_483[2][0][0] = g_11) & ((((*l_485) = (1UL != 0xD2101117D387E9ACLL)) >= 3L) < p_71))) && l_324) , l_408) != (*g_156))) , l_486);


                ;
            }


        }
        else
        {
            unsigned l_491 = 0x1A063307L;
            int l_504[10];
            unsigned char l_546 = 255UL;
            unsigned long long **l_560[9][7] = {{(void*)0,(void*)0,&l_333,&l_333,(void*)0,&l_333,(void*)0},{&l_333,&l_333,&l_333,(void*)0,(void*)0,&l_333,(void*)0},{&l_333,&l_333,(void*)0,(void*)0,&l_333,&l_333,(void*)0},{(void*)0,(void*)0,&l_333,&l_333,&l_333,&l_333,(void*)0},{&l_333,(void*)0,&l_333,&l_333,(void*)0,(void*)0,&l_333},{&l_333,(void*)0,&l_333,(void*)0,(void*)0,&l_333,&l_333},{(void*)0,&l_333,&l_333,&l_333,(void*)0,&l_333,&l_333},{&l_333,&l_333,(void*)0,&l_333,(void*)0,&l_333,&l_333},{&l_333,&l_333,(void*)0,(void*)0,&l_333,(void*)0,(void*)0}};
            int i, j;
            for (i = 0; i < 10; i++)
                l_504[i] = 0L;
            for (g_286 = 3; (g_286 > 40); g_286++)
            {
                unsigned l_492 = 0xC96B6824L;
                short *l_495 = &l_82;
                union U0 l_500 = {253UL};
                unsigned l_501 = 4UL;
                int *l_512 = &l_504[7];
                int *l_523 = &l_233;
                int ****l_533 = &g_360[9];
                int ****l_534[9][5] = {{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,(void*)0,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,(void*)0},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416},{&l_416,&l_416,&l_416,&l_416,&l_416}};
                unsigned *l_543 = &l_469;
                long long l_547 = 0L;
                int i, j;
            }
        }

        ;



        ;
    }


    ;
    ;
    ;
    ;
    ;

    ;
    ;
    (*l_470) = (*l_470);
    l_571 = (p_72 && ((*l_570) |= ((*g_277) ^ ((safe_rshift_func_int16_t_s_s(0xA6FAL, 8)) | p_72))));

        return p_71;



}







static long long * func_73(int p_74)
{
    int l_76 = (-1L);
    long long *l_77 = &g_45;
    l_76 &= g_45;
    return l_77;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_11, "g_11", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_51, "g_51", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_87.f0, "g_87.f0", print_hash_value);
    transparent_crc(g_87.f1, "g_87.f1", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_138, "g_138", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_209, "g_209", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_230[i], "g_230[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_232, "g_232", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_309[i][j], "g_309[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_387, "g_387", print_hash_value);
    transparent_crc(g_431, "g_431", print_hash_value);
    transparent_crc(g_506, "g_506", print_hash_value);
    transparent_crc(g_542, "g_542", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_573[i][j], "g_573[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_578[i][j], "g_578[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_580, "g_580", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_589[i][j][k], "g_589[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_661, "g_661", print_hash_value);
    transparent_crc(g_662, "g_662", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_713[i], "g_713[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_765[i], "g_765[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_770, "g_770", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_821[i][j][k], "g_821[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_882, "g_882", print_hash_value);
    transparent_crc(g_1066, "g_1066", print_hash_value);
    transparent_crc(g_1069, "g_1069", print_hash_value);
    transparent_crc(g_1072, "g_1072", print_hash_value);
    transparent_crc(g_1083, "g_1083", print_hash_value);
    transparent_crc(g_1097, "g_1097", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1190, "g_1190", print_hash_value);
    transparent_crc(g_1277, "g_1277", print_hash_value);
    transparent_crc(g_1305, "g_1305", print_hash_value);
    transparent_crc(g_1357, "g_1357", print_hash_value);
    transparent_crc(g_1363, "g_1363", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1379[i], "g_1379[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1441, "g_1441", print_hash_value);
    transparent_crc(g_1455, "g_1455", print_hash_value);
    transparent_crc(g_1576, "g_1576", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
