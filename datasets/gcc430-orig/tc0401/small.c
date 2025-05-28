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



static unsigned short g_20 = 0x4B58L;
static int g_30 = 0x5FFF839EL;
static int *g_29[4][7][6] = {{{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,(void*)0,&g_30,&g_30,(void*)0,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,(void*)0,&g_30,&g_30,(void*)0,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30}},{{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30}},{{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30}},{{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30,&g_30,&g_30}}};
static unsigned char g_67 = 0x19L;
static unsigned short g_76 = 0x1CF5L;
static unsigned short g_83 = 0x4933L;
static unsigned short g_129 = 0x26F7L;
static char g_134 = 1L;
static unsigned short g_148 = 0UL;
static unsigned short g_167 = 7UL;
static unsigned g_187 = 18446744073709551615UL;
static int **g_218 = &g_29[0][3][2];
static int ***g_217[8] = {&g_218,&g_218,&g_218,&g_218,&g_218,&g_218,&g_218,&g_218};
static unsigned g_224 = 0x6C543C7BL;
static int g_236 = 0x34B96E32L;
static unsigned g_261 = 0xC0B11163L;
static unsigned short *g_290 = &g_83;
static unsigned short **g_289[4][7][3] = {{{&g_290,&g_290,&g_290},{(void*)0,&g_290,&g_290},{&g_290,(void*)0,&g_290},{&g_290,&g_290,&g_290},{&g_290,&g_290,&g_290},{&g_290,(void*)0,&g_290},{(void*)0,(void*)0,&g_290}},{{&g_290,&g_290,&g_290},{&g_290,&g_290,&g_290},{&g_290,&g_290,&g_290},{&g_290,&g_290,&g_290},{(void*)0,&g_290,&g_290},{&g_290,&g_290,&g_290},{&g_290,&g_290,(void*)0}},{{(void*)0,&g_290,&g_290},{&g_290,(void*)0,&g_290},{&g_290,(void*)0,&g_290},{&g_290,&g_290,(void*)0},{&g_290,&g_290,&g_290},{&g_290,(void*)0,&g_290},{&g_290,&g_290,&g_290}},{{&g_290,&g_290,&g_290},{&g_290,&g_290,&g_290},{&g_290,&g_290,&g_290},{&g_290,(void*)0,&g_290},{(void*)0,&g_290,&g_290},{&g_290,(void*)0,&g_290},{&g_290,&g_290,&g_290}}};
static unsigned char g_292 = 0UL;
static int *g_295 = &g_30;
static unsigned g_373 = 0UL;
static unsigned char *g_386 = &g_292;
static unsigned char **g_385[10] = {&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386};
static unsigned char ***g_384 = &g_385[7];
static int **g_409 = &g_295;
static unsigned short g_463 = 65534UL;
static short g_478 = 0xDDA4L;
static short g_574 = 0x3666L;
static int *g_575 = &g_30;
static int ****g_607 = (void*)0;
static int *****g_606 = &g_607;
static unsigned *g_713 = &g_224;
static int *g_745 = &g_30;
static int *g_750 = (void*)0;
static char *g_797 = &g_134;
static char **g_796[6][2] = {{(void*)0,&g_797},{&g_797,(void*)0},{&g_797,&g_797},{(void*)0,&g_797},{&g_797,(void*)0},{&g_797,&g_797}};
static short g_862 = (-5L);
static unsigned *g_884[9] = {&g_187,&g_187,&g_187,&g_187,&g_187,&g_187,&g_187,&g_187,&g_187};
static unsigned **g_883[2] = {&g_884[5],&g_884[5]};
static unsigned short g_894 = 0UL;
static int g_897[2][6] = {{0x73BAD78DL,0xC8AB27CCL,0xC8AB27CCL,0x73BAD78DL,0xC8AB27CCL,0xC8AB27CCL},{0x73BAD78DL,0xC8AB27CCL,0xC8AB27CCL,0x73BAD78DL,0xC8AB27CCL,0xC8AB27CCL}};
static unsigned short ****g_914 = (void*)0;
static unsigned short g_967 = 65530UL;
static short *g_1025[10] = {&g_574,&g_862,(void*)0,(void*)0,&g_862,&g_574,&g_862,(void*)0,(void*)0,&g_862};
static short **g_1024[7] = {&g_1025[8],&g_1025[8],&g_1025[8],&g_1025[8],&g_1025[8],&g_1025[8],&g_1025[8]};
static unsigned **g_1159[5][10] = {{&g_713,&g_713,&g_713,&g_713,&g_713,&g_713,&g_713,&g_713,&g_713,&g_713},{&g_713,&g_713,&g_713,(void*)0,(void*)0,&g_713,&g_713,&g_713,&g_713,&g_713},{&g_713,&g_713,(void*)0,&g_713,&g_713,&g_713,&g_713,&g_713,&g_713,(void*)0},{&g_713,&g_713,(void*)0,&g_713,&g_713,&g_713,(void*)0,&g_713,&g_713,(void*)0},{&g_713,&g_713,&g_713,&g_713,&g_713,&g_713,(void*)0,&g_713,&g_713,&g_713}};
static short g_1173 = 0x79CAL;
static unsigned short ***g_1300 = &g_289[1][6][1];
static int *g_1356 = (void*)0;
static char g_1381 = 0xBAL;
static unsigned short g_1390 = 0x4DFFL;
static int g_1476 = 0xBB206237L;
static int g_1563 = 3L;
static int g_1571 = 1L;
static int g_1634 = 0x1B80C9FCL;
static int g_1651 = (-1L);
static unsigned char g_1721 = 2UL;
static char ****g_1791 = (void*)0;
static int g_1824 = 1L;
static short g_1835 = 0x6FE1L;
static int *g_1864 = (void*)0;
static char g_1906 = (-4L);
static char g_1942 = 1L;



static char func_1(void);
static int * func_2(char p_3, int p_4, int * p_5, int * p_6, int * p_7);
static int * func_12(int * p_13, unsigned short p_14);
static int * func_15(unsigned short p_16, int p_17, unsigned p_18, int * p_19);
static int func_25(unsigned p_26, int * p_27);
static unsigned char func_35(char p_36, int p_37);
static unsigned func_38(int * p_39, unsigned short p_40, int ** p_41);
static int ** func_43(short p_44, int * p_45, unsigned short p_46, int * p_47);
static short func_49(unsigned char p_50, int * p_51, int ** p_52);
static unsigned char func_53(int ** p_54, int p_55, unsigned p_56, unsigned short p_57);
static char func_1(void)
{
    char l_28 = (-9L);
    int l_1472[10][4][6] = {{{0xEE82AEF5L,0x6C0D88A5L,1L,1L,0x58A5533DL,(-1L)},{0xEE82AEF5L,0x12F06939L,1L,0xAB800597L,1L,(-1L)},{(-1L),(-1L),0x29A2E8A7L,1L,0x29A2E8A7L,(-1L)},{0x6C0D88A5L,1L,9L,1L,1L,0x6C0D88A5L}},{{0x921657FEL,0xAB800597L,0x85A06AA4L,1L,(-1L),1L},{(-1L),0xAB800597L,0xADDC1634L,1L,1L,0x0973E1FCL},{(-1L),1L,1L,0x29A2E8A7L,0x29A2E8A7L,1L},{(-1L),(-1L),0x6C0D88A5L,9L,1L,(-4L)}},{{0x6C0D88A5L,0x12F06939L,6L,0x85A06AA4L,0x58A5533DL,0x6C0D88A5L},{1L,(-4L),(-1L),(-1L),1L,0x58A5533DL},{0xADDC1634L,(-1L),(-4L),0xAB800597L,6L,0xAB800597L},{0xAB800597L,6L,0xAB800597L,(-4L),(-1L),0xADDC1634L}},{{0x58A5533DL,1L,(-1L),(-1L),(-4L),0x12F06939L},{(-4L),9L,0xEE82AEF5L,(-1L),0x85A06AA4L,(-4L)},{0x58A5533DL,(-1L),1L,(-4L),1L,1L},{0xAB800597L,1L,1L,0xAB800597L,1L,0x6C0D88A5L}},{{0xADDC1634L,1L,0xAB800597L,(-1L),0x921657FEL,0x29A2E8A7L},{0x12F06939L,1L,(-1L),0xEE82AEF5L,0x921657FEL,1L},{(-4L),1L,(-1L),1L,1L,(-4L)},{1L,1L,0x0973E1FCL,1L,1L,0x632BE1A6L}},{{0x6C0D88A5L,(-1L),0x921657FEL,0xAB800597L,0x85A06AA4L,1L},{0x29A2E8A7L,9L,0xAB800597L,(-1L),(-4L),1L},{1L,1L,0x921657FEL,(-1L),(-1L),0x632BE1A6L},{(-4L),6L,0x0973E1FCL,0x0973E1FCL,6L,(-4L)}},{{0x632BE1A6L,(-1L),(-1L),0x921657FEL,1L,1L},{1L,(-1L),0x0973E1FCL,0x85A06AA4L,1L,9L},{1L,0x921657FEL,0x85A06AA4L,0xEE82AEF5L,0x0973E1FCL,1L},{0xADDC1634L,0x6C0D88A5L,1L,0x632BE1A6L,1L,0x6C0D88A5L}},{{(-1L),(-1L),0x12F06939L,0x58A5533DL,(-4L),(-1L)},{1L,0xEE82AEF5L,1L,0x0973E1FCL,0x6C0D88A5L,0xAB800597L},{9L,0xEE82AEF5L,(-1L),0x85A06AA4L,(-4L),6L},{1L,(-1L),0x85A06AA4L,1L,1L,0x85A06AA4L}},{{0x6C0D88A5L,0x6C0D88A5L,(-1L),0x12F06939L,0x0973E1FCL,0x29A2E8A7L},{(-1L),0x921657FEL,1L,1L,1L,(-1L)},{0xAB800597L,(-1L),1L,(-1L),0x6C0D88A5L,0x29A2E8A7L},{6L,(-1L),(-1L),0x85A06AA4L,(-1L),0x85A06AA4L}},{{0x85A06AA4L,(-1L),0x85A06AA4L,(-1L),(-1L),6L},{0x29A2E8A7L,0x6C0D88A5L,(-1L),1L,(-1L),0xAB800597L},{(-1L),1L,1L,1L,0x921657FEL,(-1L)},{0x29A2E8A7L,0x0973E1FCL,0x12F06939L,(-1L),0x6C0D88A5L,0x6C0D88A5L}}};
    unsigned l_1473 = 0UL;
    short l_1474 = 0xA177L;
    int *l_1475 = &g_1476;
    int *l_1947 = &g_1651;
    int i, j, k;
    (*g_409) = func_2(((safe_add_func_uint8_t_u_u((safe_add_func_uint32_t_u_u(((l_1475 = func_12(func_15(((((g_20 , (safe_sub_func_uint32_t_u_u(((*g_713) = (safe_add_func_int8_t_s_s((((func_25(l_28, g_29[3][5][3]) ^ (l_28 || ((safe_sub_func_uint16_t_u_u(((((safe_rshift_func_int16_t_s_s(l_28, ((65529UL <= l_28) <= (l_28 , 253UL)))) ^ 0x94L) | l_28) == l_1472[8][1][5]), l_1472[0][0][0])) , 255UL))) != l_1472[8][1][5]) || l_28), l_28))), l_1473))) != 0x0C20L) , l_1472[5][1][1]) , 65535UL), g_1390, l_1474, l_1475), l_1472[2][0][0])) != l_1947), (*l_1947))), (*l_1947))) >= 0x3708L), (*l_1947), l_1947, l_1947, l_1947);
    return (*l_1947);
}







static int * func_2(char p_3, int p_4, int * p_5, int * p_6, int * p_7)
{
    unsigned char l_1948 = 2UL;
    unsigned short *l_1956 = &g_167;
    unsigned short *l_1957 = (void*)0;
    int *l_1960 = &g_236;
    (*g_575) = ((l_1948 , (safe_sub_func_uint16_t_u_u((safe_mod_func_uint8_t_u_u((***g_384), (safe_lshift_func_int8_t_s_s(l_1948, 5)))), ((safe_unary_minus_func_int16_t_s(l_1948)) > (l_1956 != (l_1957 = l_1956)))))) != ((safe_lshift_func_int8_t_s_u((p_4 , ((*g_797) = (l_1948 == (*g_386)))), (***g_384))) , (*g_797)));
    p_7 = (l_1960 = ((*g_409) = (void*)0));
    return l_1960;
}







static int * func_12(int * p_13, unsigned short p_14)
{
    int *l_1490 = &g_30;
    int **l_1516 = (void*)0;
    short *l_1539 = &g_862;
    unsigned short ****l_1562 = &g_1300;
    char *l_1641 = &g_1381;
    unsigned short l_1643 = 65532UL;
    unsigned l_1666 = 0xE2B6579EL;
    unsigned l_1680[10] = {0x1C21E7C5L,0x6D1830D1L,0x6D1830D1L,0x1C21E7C5L,18446744073709551607UL,0x1C21E7C5L,0x07D5D10EL,0x07D5D10EL,0x6D1830D1L,0x21DE347AL};
    int l_1682[6][7][4] = {{{(-4L),0x07748C9AL,0x990CA8B8L,0x07748C9AL},{0x71F8CB81L,1L,0xE37FB659L,0x990CA8B8L},{0x07748C9AL,1L,1L,0x07748C9AL},{1L,0x07748C9AL,0x71F8CB81L,(-4L)},{1L,0x71F8CB81L,1L,0xE37FB659L},{0x07748C9AL,(-4L),0xE37FB659L,0xE37FB659L},{0x71F8CB81L,0x71F8CB81L,0x990CA8B8L,(-4L)}},{{(-4L),0x07748C9AL,0x990CA8B8L,0x07748C9AL},{0x71F8CB81L,1L,0xE37FB659L,0x990CA8B8L},{0x07748C9AL,1L,1L,0x07748C9AL},{1L,0x07748C9AL,0x71F8CB81L,(-4L)},{1L,0x71F8CB81L,1L,0xE37FB659L},{0x07748C9AL,(-4L),0xE37FB659L,0xE37FB659L},{0x71F8CB81L,0x71F8CB81L,0x990CA8B8L,(-4L)}},{{(-4L),0x07748C9AL,0x990CA8B8L,0x07748C9AL},{0x71F8CB81L,1L,0xE37FB659L,0x990CA8B8L},{0x07748C9AL,1L,1L,0x07748C9AL},{1L,0x07748C9AL,0x71F8CB81L,(-4L)},{1L,0x71F8CB81L,1L,0xE37FB659L},{0x07748C9AL,(-4L),0xE37FB659L,0xE37FB659L},{0x71F8CB81L,0x71F8CB81L,0x990CA8B8L,(-4L)}},{{(-4L),0x07748C9AL,0x990CA8B8L,0x07748C9AL},{0x71F8CB81L,1L,0xE37FB659L,0x990CA8B8L},{0xF5DC6F3BL,0x07748C9AL,0x07748C9AL,0xF5DC6F3BL},{0x07748C9AL,0xF5DC6F3BL,0x990CA8B8L,1L},{0x07748C9AL,0x990CA8B8L,0x07748C9AL,(-4L)},{0xF5DC6F3BL,1L,(-4L),(-4L)},{0x990CA8B8L,0x990CA8B8L,0xE37FB659L,1L}},{{1L,0xF5DC6F3BL,0xE37FB659L,0xF5DC6F3BL},{0x990CA8B8L,0x07748C9AL,(-4L),0xE37FB659L},{0xF5DC6F3BL,0x07748C9AL,0x07748C9AL,0xF5DC6F3BL},{0x07748C9AL,0xF5DC6F3BL,0x990CA8B8L,1L},{0x07748C9AL,0x990CA8B8L,0x07748C9AL,(-4L)},{0xF5DC6F3BL,1L,(-4L),(-4L)},{0x990CA8B8L,0x990CA8B8L,0xE37FB659L,1L}},{{1L,0xF5DC6F3BL,0xE37FB659L,0xF5DC6F3BL},{0x990CA8B8L,0x07748C9AL,(-4L),0xE37FB659L},{0xF5DC6F3BL,0x07748C9AL,0x07748C9AL,0xF5DC6F3BL},{0x07748C9AL,0xF5DC6F3BL,0x990CA8B8L,1L},{0x07748C9AL,0x990CA8B8L,0x07748C9AL,(-4L)},{0xF5DC6F3BL,1L,(-4L),(-4L)},{0x990CA8B8L,0x990CA8B8L,0xE37FB659L,1L}}};
    int l_1744 = (-1L);
    unsigned char ***l_1766 = (void*)0;
    char ****l_1792 = (void*)0;
    unsigned l_1798 = 0x01D40D88L;
    unsigned char l_1836 = 0x7DL;
    unsigned l_1876 = 4294967293UL;
    short l_1893 = (-1L);
    unsigned l_1939[7][6] = {{0xF6D4BBA2L,0UL,0xEF4932F6L,0x66FDACF2L,0UL,0x37861963L},{0UL,0xF6D4BBA2L,0xEF4932F6L,0xF6D4BBA2L,0UL,0x516D542BL},{18446744073709551615UL,0xF6D4BBA2L,0x37861963L,18446744073709551615UL,0UL,0UL},{18446744073709551615UL,0UL,0xF6D4BBA2L,0x9CA63EAFL,0x9CA63EAFL,0xF6D4BBA2L},{0UL,0UL,0UL,3UL,0x9CA63EAFL,0UL},{0x9CA63EAFL,0UL,18446744073709551615UL,3UL,0UL,0UL},{0UL,0x9CA63EAFL,18446744073709551615UL,0x9CA63EAFL,0UL,0UL}};
    int l_1943 = 2L;
    int **l_1944 = &g_1356;
    unsigned short *****l_1946 = (void*)0;
    unsigned short ******l_1945 = &l_1946;
    int i, j, k;
    (*g_218) = l_1490;
    for (g_148 = 0; (g_148 >= 29); g_148++)
    {
        char l_1512 = 0x18L;
        int *l_1513[2];
        int *l_1535 = &g_897[0][1];
        int **l_1534 = &l_1535;
        char **l_1570 = &g_797;
        int *l_1612[9] = {&g_1563,&g_1563,&g_236,&g_1563,&g_1563,&g_236,&g_1563,&g_1563,&g_236};
        unsigned l_1638[6][2];
        int **l_1674[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int **l_1704 = (void*)0;
        short l_1763 = 0L;
        unsigned char ***l_1764 = &g_385[7];
        unsigned char ****l_1765 = (void*)0;
        int *****l_1772 = &g_607;
        int *****l_1774 = &g_607;
        short l_1833[5][8][6] = {{{0xF3C9L,(-1L),0xD8B2L,0x095CL,0L,0x095CL},{(-1L),0L,(-1L),1L,1L,(-1L)},{(-1L),(-1L),1L,0x095CL,(-1L),0xAE65L},{0xF3C9L,0L,0L,0x095CL,(-9L),1L},{(-1L),0xAED8L,0xF3C9L,1L,0L,0xD8B2L},{(-1L),(-1L),0x095CL,0x095CL,(-1L),(-1L)},{0xF3C9L,(-9L),(-1L),0x095CL,(-1L),1L},{(-1L),1L,0xAE65L,1L,0xAED8L,0L}},{{(-1L),0xAC0CL,1L,0x095CL,0xAC0CL,0xF3C9L},{0xF3C9L,(-1L),0xAE65L,(-1L),0xAC0CL,(-1L)},{0x095CL,0L,0x095CL,0xD8B2L,(-1L),0xF3C9L},{0x095CL,0L,0L,(-1L),0L,1L},{1L,0xAC0CL,(-1L),(-1L),(-1L),0xD8B2L},{0x095CL,(-9L),1L,0xD8B2L,0L,0xAE65L},{0x095CL,0xAED8L,(-1L),(-1L),0xAED8L,0x095CL},{1L,(-1L),0xF3C9L,(-1L),(-1L),0L}},{{0x095CL,(-1L),1L,0xD8B2L,(-9L),(-1L)},{0x095CL,1L,0xD8B2L,(-1L),1L,1L},{1L,(-1L),0xAE65L,(-1L),0xAC0CL,(-1L)},{0x095CL,0L,0x095CL,0xD8B2L,(-1L),0xF3C9L},{0x095CL,0L,0L,(-1L),0L,1L},{1L,0xAC0CL,(-1L),(-1L),(-1L),0xD8B2L},{0x095CL,(-9L),1L,0xD8B2L,0L,0xAE65L},{0x095CL,0xAED8L,(-1L),(-1L),0xAED8L,0x095CL}},{{1L,(-1L),0xF3C9L,(-1L),(-1L),0L},{0x095CL,0xD8B2L,0x16F0L,0xB72EL,0L,0x53DAL},{0x8CECL,1L,0xB72EL,0x9AE0L,1L,0xFE72L},{0xFE72L,0xAE65L,(-1L),0x9AE0L,0xF3C9L,0x9AE0L},{0x8CECL,(-1L),0x8CECL,0xB72EL,0xD8B2L,0xDB2AL},{0x8CECL,0x095CL,0xFC87L,0x9AE0L,0x095CL,0x16F0L},{0xFE72L,0xF3C9L,0x53DAL,0x9AE0L,(-1L),0xB72EL},{0x8CECL,0L,0xFE72L,0xB72EL,(-1L),(-1L)}},{{0x8CECL,1L,0x9AE0L,0x9AE0L,1L,0x8CECL},{0xFE72L,(-1L),0xDB2AL,0x9AE0L,0xAE65L,0xFC87L},{0x8CECL,0xD8B2L,0x16F0L,0xB72EL,0L,0x53DAL},{0x8CECL,1L,0xB72EL,0x9AE0L,1L,0xFE72L},{0xFE72L,0xAE65L,(-1L),0x9AE0L,0xF3C9L,0x9AE0L},{0x8CECL,(-1L),0x8CECL,0xB72EL,0xD8B2L,0xDB2AL},{0x8CECL,0x095CL,0xFC87L,0x9AE0L,0x095CL,0x16F0L},{0xFE72L,0xF3C9L,0x53DAL,0x9AE0L,(-1L),0xB72EL}}};
        short l_1879 = 1L;
        short l_1934 = 0xF5EFL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1513[i] = &g_1476;
        for (i = 0; i < 6; i++)
        {
            for (j = 0; j < 2; j++)
                l_1638[i][j] = 2UL;
        }
        for (g_83 = 26; (g_83 >= 18); g_83 = safe_sub_func_int32_t_s_s(g_83, 9))
        {
            int l_1501 = 9L;
            int *l_1508 = &l_1501;
            int ***l_1529 = &g_218;
            char *l_1544 = &g_1381;
            for (g_129 = (-12); (g_129 > 10); g_129 = safe_add_func_uint16_t_u_u(g_129, 5))
            {
                if ((*l_1490))
                    break;
            }
            for (g_167 = 24; (g_167 != 54); g_167++)
            {
                unsigned char l_1511 = 0UL;
                int *l_1532 = &l_1501;
                char *l_1542 = &g_134;
            }
            (*g_409) = (void*)0;
        }
    }
    p_13 = (*g_409);
    return (*g_409);
}







static int * func_15(unsigned short p_16, int p_17, unsigned p_18, int * p_19)
{
    int *l_1479[10][6][4] = {{{(void*)0,(void*)0,&g_1476,&g_1476},{&g_1476,&g_236,&g_1476,&g_236},{&g_30,&g_30,&g_30,&g_236},{&g_1476,&g_236,&g_1476,&g_30},{&g_1476,&g_1476,&g_236,&g_1476},{&g_1476,&g_1476,&g_1476,&g_236}},{{&g_236,&g_1476,&g_30,&g_30},{&g_236,&g_30,&g_1476,&g_1476},{&g_236,&g_1476,&g_236,&g_236},{&g_30,(void*)0,&g_30,&g_30},{&g_1476,&g_1476,&g_1476,(void*)0},{&g_1476,&g_1476,&g_30,&g_30}},{{&g_236,&g_1476,&g_30,&g_1476},{&g_1476,&g_30,(void*)0,&g_236},{&g_30,&g_236,(void*)0,(void*)0},{&g_30,&g_30,&g_30,&g_1476},{&g_1476,&g_1476,&g_30,&g_30},{&g_236,&g_236,&g_30,&g_30}},{{&g_1476,&g_236,&g_30,&g_30},{&g_236,&g_1476,&g_30,&g_1476},{&g_30,&g_30,&g_1476,(void*)0},{(void*)0,&g_236,&g_236,&g_236},{&g_236,&g_30,(void*)0,&g_1476},{&g_1476,&g_1476,&g_30,&g_30}},{{&g_1476,&g_1476,&g_236,(void*)0},{&g_30,&g_1476,&g_236,&g_236},{&g_236,&g_236,&g_30,&g_1476},{&g_30,&g_1476,&g_1476,&g_30},{&g_1476,&g_236,&g_1476,(void*)0},{&g_1476,&g_236,&g_30,&g_236}},{{(void*)0,&g_236,&g_30,&g_30},{&g_30,&g_30,&g_30,&g_30},{&g_1476,&g_1476,&g_30,&g_236},{&g_1476,&g_236,&g_30,&g_1476},{&g_1476,&g_236,&g_30,&g_30},{&g_1476,&g_236,&g_30,&g_236}},{{&g_1476,(void*)0,&g_30,&g_1476},{&g_30,&g_1476,&g_30,&g_30},{(void*)0,&g_236,&g_30,&g_30},{&g_1476,&g_236,&g_1476,&g_30},{&g_1476,(void*)0,&g_1476,&g_236},{&g_30,&g_236,&g_30,(void*)0}},{{&g_236,&g_1476,&g_236,&g_1476},{(void*)0,&g_1476,&g_30,&g_236},{&g_30,&g_30,&g_236,&g_236},{&g_236,(void*)0,&g_30,&g_1476},{&g_236,&g_236,&g_1476,&g_1476},{(void*)0,&g_1476,&g_1476,(void*)0}},{{&g_1476,&g_30,&g_30,&g_30},{&g_1476,&g_1476,&g_1476,&g_1476},{&g_236,&g_236,&g_1476,&g_1476},{(void*)0,&g_1476,(void*)0,&g_1476},{&g_30,&g_30,&g_236,&g_1476},{&g_30,(void*)0,&g_236,&g_236}},{{&g_30,&g_30,&g_1476,(void*)0},{&g_1476,&g_1476,&g_30,(void*)0},{(void*)0,&g_30,&g_30,&g_30},{(void*)0,&g_236,&g_1476,&g_236},{&g_30,&g_236,&g_1476,&g_236},{&g_236,&g_30,&g_1476,&g_236}}};
    unsigned short *l_1486 = (void*)0;
    int *l_1487 = &g_30;
    char l_1488 = (-1L);
    unsigned short *l_1489[5][10][5] = {{{&g_1390,&g_20,&g_463,&g_967,(void*)0},{&g_1390,&g_129,(void*)0,&g_129,&g_463},{&g_76,&g_20,&g_148,&g_20,&g_76},{&g_967,&g_894,(void*)0,&g_463,&g_463},{&g_148,&g_1390,&g_129,(void*)0,&g_463},{&g_1390,&g_76,(void*)0,&g_894,&g_463},{&g_20,(void*)0,&g_20,&g_967,&g_76},{&g_463,(void*)0,(void*)0,&g_463,&g_463},{&g_76,&g_20,&g_967,(void*)0,(void*)0},{&g_967,&g_1390,(void*)0,(void*)0,&g_1390}},{{&g_20,&g_1390,&g_148,(void*)0,&g_167},{&g_463,(void*)0,&g_76,&g_967,&g_463},{&g_967,&g_1390,(void*)0,(void*)0,&g_129},{&g_463,&g_129,&g_1390,(void*)0,(void*)0},{&g_20,&g_967,&g_76,&g_1390,&g_967},{&g_167,(void*)0,(void*)0,(void*)0,&g_463},{&g_129,&g_20,&g_463,&g_1390,&g_463},{&g_129,&g_129,&g_76,(void*)0,&g_967},{&g_148,(void*)0,&g_167,(void*)0,&g_20},{&g_967,&g_1390,(void*)0,&g_967,(void*)0}},{{&g_463,(void*)0,&g_148,(void*)0,&g_463},{&g_167,&g_129,&g_1390,&g_20,&g_129},{&g_463,&g_20,&g_894,&g_967,&g_167},{&g_967,(void*)0,&g_76,&g_129,&g_129},{&g_967,&g_967,&g_967,(void*)0,&g_463},{&g_129,&g_129,&g_20,(void*)0,(void*)0},{&g_967,&g_1390,&g_76,&g_967,&g_20},{&g_167,(void*)0,&g_20,(void*)0,&g_967},{&g_1390,&g_20,&g_967,(void*)0,&g_463},{&g_463,&g_967,&g_894,(void*)0,&g_129}},{{&g_167,(void*)0,&g_148,&g_20,&g_20},{&g_129,(void*)0,(void*)0,&g_129,&g_129},{&g_463,&g_1390,&g_76,(void*)0,&g_1390},{(void*)0,&g_129,&g_20,&g_1390,&g_129},{&g_20,&g_76,&g_894,(void*)0,&g_894},{&g_967,(void*)0,&g_894,&g_129,&g_463},{&g_463,&g_967,(void*)0,&g_20,&g_463},{&g_463,&g_167,&g_20,(void*)0,&g_129},{&g_967,&g_967,(void*)0,&g_967,&g_967},{(void*)0,(void*)0,(void*)0,&g_129,&g_967}},{{&g_129,&g_76,&g_967,&g_1390,(void*)0},{&g_463,&g_129,&g_894,(void*)0,&g_967},{&g_167,&g_1390,&g_167,&g_20,&g_967},{&g_967,(void*)0,&g_1390,&g_967,&g_129},{&g_1390,(void*)0,&g_76,&g_1390,&g_463},{(void*)0,&g_463,&g_1390,&g_1390,&g_463},{&g_463,&g_76,&g_167,&g_967,&g_894},{&g_129,(void*)0,&g_894,&g_463,&g_129},{&g_463,(void*)0,&g_967,&g_20,&g_967},{&g_129,&g_76,&g_76,&g_1390,&g_1390}}};
    int i, j, k;
    (*g_409) = p_19;
    for (g_129 = 0; (g_129 < 41); ++g_129)
    {
        (*g_295) = 0xD9532439L;
        (*g_218) = (void*)0;
    }
    p_19 = l_1479[2][2][3];
    (**g_409) = ((3UL || (safe_lshift_func_uint16_t_u_u(((*l_1487) = ((*g_290) = (((safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s((((void*)0 == l_1486) , p_18), 0)) , p_17), ((((*g_386) | p_16) ^ ((func_38(l_1487, (*l_1487), &l_1479[4][5][2]) & 2UL) , l_1488)) <= (-1L)))) , (*l_1487)) & (*l_1487)))), l_1488))) == 1L);
    return l_1479[2][2][3];
}







static int func_25(unsigned p_26, int * p_27)
{
    char l_48[6] = {0xD0L,0xD0L,0x23L,0xD0L,0xD0L,0x23L};
    int l_994 = 0x33BE5452L;
    int l_995 = 0x5792A564L;
    short *l_996 = &g_478;
    int **l_1000 = &g_745;
    short l_1001[5];
    int **l_1057[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned short l_1060 = 1UL;
    int l_1071[2];
    int l_1095[10][3][1] = {{{0x77FC8A3DL},{0L},{(-4L)}},{{0L},{0xDBB947BEL},{0xDBB947BEL}},{{0L},{(-4L)},{0L}},{{0x77FC8A3DL},{0xDBB947BEL},{0L}},{{0xC89EEF79L},{0L},{0xDBB947BEL}},{{0x77FC8A3DL},{0L},{(-4L)}},{{0L},{0xDBB947BEL},{0xDBB947BEL}},{{0L},{(-4L)},{0L}},{{0x77FC8A3DL},{0xDBB947BEL},{0L}},{{0xC89EEF79L},{0L},{0xDBB947BEL}}};
    int l_1097 = 0xDECCE944L;
    unsigned char l_1101 = 0UL;
    unsigned *l_1168[6][5] = {{&g_187,(void*)0,&g_187,(void*)0,&g_187},{&g_187,&g_187,&g_187,&g_187,(void*)0},{&g_187,(void*)0,&g_187,&g_187,&g_187},{&g_187,(void*)0,&g_187,(void*)0,&g_187},{&g_187,&g_187,&g_187,&g_187,(void*)0},{&g_187,(void*)0,&g_187,&g_187,&g_187}};
    unsigned l_1198 = 0x58392502L;
    unsigned short l_1230[5];
    unsigned l_1254 = 5UL;
    char l_1255 = 0x28L;
    unsigned short l_1256 = 0x9A12L;
    int l_1285[8][8][1] = {{{0L},{1L},{0x2B8590AFL},{7L},{6L},{(-3L)},{2L},{0xF4DF81C6L}},{{(-3L)},{0x544602E1L},{6L},{1L},{(-2L)},{1L},{0x43F87153L},{0xF06FE5A3L}},{{6L},{(-1L)},{0L},{0x377B9B33L},{0x43F87153L},{0x544602E1L},{0xCF8E9927L},{(-3L)}},{{0xA96F9666L},{0x377B9B33L},{6L},{0xA53A0671L},{6L},{0x377B9B33L},{0xA96F9666L},{(-3L)}},{{0xCF8E9927L},{0x544602E1L},{0x43F87153L},{0x377B9B33L},{0L},{(-1L)},{6L},{0xF06FE5A3L}},{{0x43F87153L},{(-3L)},{0L},{(-3L)},{0x43F87153L},{0xF06FE5A3L},{6L},{(-1L)}},{{0L},{0x377B9B33L},{0x43F87153L},{0x544602E1L},{0xCF8E9927L},{(-3L)},{0xA96F9666L},{0x377B9B33L}},{{6L},{0xA53A0671L},{6L},{0x377B9B33L},{0xA96F9666L},{(-3L)},{0xCF8E9927L},{0x544602E1L}}};
    unsigned short ***l_1297 = &g_289[0][4][1];
    unsigned l_1321 = 18446744073709551615UL;
    unsigned l_1339 = 0x8FAEAB8BL;
    int l_1386[5][6][1] = {{{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL}},{{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL}},{{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL}},{{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL}},{{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL},{0xBAB82240L},{0xA81FF8CFL}}};
    unsigned short l_1395[1][2][9] = {{{0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL},{0x5AF8L,0x5AF8L,0x5AF8L,0x5AF8L,0x5AF8L,0x5AF8L,0x5AF8L,0x5AF8L,0x5AF8L}}};
    int l_1400 = 0x2D048053L;
    int *****l_1446[9][6][4] = {{{&g_607,&g_607,(void*)0,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,(void*)0,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607}},{{&g_607,&g_607,(void*)0,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,(void*)0,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607}},{{&g_607,&g_607,(void*)0,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,(void*)0,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607}},{{&g_607,&g_607,(void*)0,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,(void*)0,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607}},{{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607}},{{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607}},{{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607}},{{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,&g_607},{&g_607,&g_607,&g_607,(void*)0}},{{&g_607,&g_607,&g_607,&g_607},{&g_607,(void*)0,(void*)0,&g_607},{&g_607,&g_607,(void*)0,(void*)0},{&g_607,&g_607,&g_607,&g_607},{&g_607,(void*)0,&g_607,&g_607},{&g_607,&g_607,(void*)0,(void*)0}}};
    short l_1464 = 0x6645L;
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_1001[i] = 0L;
    for (i = 0; i < 2; i++)
        l_1071[i] = 0L;
    for (i = 0; i < 5; i++)
        l_1230[i] = 0x142BL;
    for (p_26 = (-6); (p_26 > 22); p_26++)
    {
        int *l_33[10] = {&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30,&g_30};
        int **l_34 = &g_29[3][6][1];
        unsigned l_42 = 4294967294UL;
        int i;
        (*l_34) = l_33[4];
    }
    if ((p_26 > (((((((((*g_713) , (**g_409)) >= 0x83F9AAD1L) <= (g_894 , l_995)) , l_48[0]) ^ ((*l_996) = p_26)) | 0x715DL) < p_26) , p_26)))
    {
        unsigned char **l_999[6][9] = {{&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386},{&g_386,(void*)0,(void*)0,&g_386,(void*)0,(void*)0,&g_386,(void*)0,(void*)0},{&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386},{&g_386,(void*)0,(void*)0,&g_386,(void*)0,(void*)0,&g_386,(void*)0,(void*)0},{&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386,&g_386},{&g_386,(void*)0,(void*)0,&g_386,(void*)0,(void*)0,&g_386,(void*)0,(void*)0}};
        int l_1013 = 0x660C2A7FL;
        unsigned char ****l_1058 = &g_384;
        int l_1079 = 8L;
        unsigned l_1081 = 0xAF21EBAEL;
        int i, j;
        for (g_187 = 0; (g_187 <= 7); g_187 += 1)
        {
            int *l_998 = &l_994;
            int *****l_1036 = &g_607;
            unsigned l_1076[4][4] = {{0x7B2621B2L,18446744073709551614UL,0x7B2621B2L,18446744073709551615UL},{0UL,0x7B2621B2L,18446744073709551615UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551615UL,0x1D4AB25EL,0x7B2621B2L},{0x7B2621B2L,0UL,0x1D4AB25EL,0UL}};
            unsigned l_1082 = 0x305C0972L;
            int i, j;
        }
        (*l_1000) = (*g_218);
    }
    else
    {
        short *l_1083 = &g_862;
        int l_1094 = (-4L);
        char l_1106[10];
        int **l_1116[1];
        unsigned char l_1176 = 0x04L;
        int l_1190 = (-1L);
        int *****l_1229 = &g_607;
        int i;
        for (i = 0; i < 10; i++)
            l_1106[i] = 0xB5L;
        for (i = 0; i < 1; i++)
            l_1116[i] = (void*)0;
        for (g_76 = 0; (g_76 <= 1); g_76 += 1)
        {
            int **l_1096 = &g_29[1][1][4];
            int **l_1113[9][3] = {{&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295},{&g_295,&g_295,&g_295}};
            short l_1141 = 0xF29CL;
            int i, j;
        }
        for (g_148 = (-27); (g_148 <= 30); g_148++)
        {
            int l_1199 = (-5L);
            int *l_1200 = &g_236;
            for (g_30 = (-7); (g_30 <= (-11)); g_30 = safe_sub_func_int32_t_s_s(g_30, 2))
            {
                int **l_1183[4][7] = {{&g_295,&g_745,&g_745,&g_295,&g_295,&g_745,&g_745},{&g_745,&g_29[3][5][3],&g_745,&g_29[3][5][3],&g_745,&g_29[3][5][3],&g_745},{&g_295,&g_295,&g_745,&g_745,&g_295,&g_295,&g_745},{(void*)0,&g_29[3][5][3],(void*)0,&g_29[3][5][3],(void*)0,&g_29[3][5][3],(void*)0}};
                char **l_1197 = (void*)0;
                int i, j;
                l_1199 = (safe_mod_func_int8_t_s_s((p_26 != ((g_897[0][1] = p_26) , (safe_rshift_func_int16_t_s_s(((((*l_1083) = ((safe_mod_func_int8_t_s_s(l_1190, ((safe_rshift_func_int16_t_s_u(1L, p_26)) ^ (safe_lshift_func_int8_t_s_s(((*g_797) = (safe_mod_func_uint32_t_u_u((l_1197 == (void*)0), 0x729C18F6L))), p_26))))) && p_26)) <= 0UL) || l_1198), 15)))), 1L));
                l_1200 = p_27;
                return (**g_409);
            }
            if ((*l_1200))
                break;
            if (((*l_1200) | p_26))
            {
                p_27 = ((*g_218) = p_27);
                if ((*l_1200))
                    continue;
                if ((*l_1200))
                    continue;
            }
            else
            {
                unsigned l_1201 = 0x656518FBL;
                unsigned l_1204 = 0UL;
                l_1201 = ((*g_295) = (**g_409));
                for (g_83 = (-5); (g_83 > 46); g_83++)
                {
                    (*g_575) = p_26;
                }
                (**g_409) = l_1204;
            }
            if ((*l_1200))
                break;
        }
        for (l_1176 = 0; (l_1176 > 44); l_1176 = safe_add_func_int8_t_s_s(l_1176, 7))
        {
            unsigned l_1215 = 4UL;
            int *****l_1216 = &g_607;
            short l_1227 = 0x4780L;
            unsigned char *l_1228 = &l_1101;
            unsigned short l_1237 = 8UL;
            char l_1240 = 0x8BL;
            int **l_1243 = &g_575;
            int l_1250 = 1L;
            unsigned short *l_1253 = &g_20;
            unsigned short ***l_1299 = (void*)0;
            unsigned short ****l_1298[2];
            char l_1303[5] = {0x6FL,0x6FL,0x6FL,0x6FL,0x6FL};
            int i;
            for (i = 0; i < 2; i++)
                l_1298[i] = &l_1299;
        }
    }
    if (p_26)
    {
        unsigned short l_1306 = 0xB369L;
        int l_1307 = (-1L);
        char *l_1311 = &l_48[3];
        int **l_1312 = (void*)0;
        int ***l_1313 = &l_1312;
        char l_1389 = 8L;
        (*g_218) = p_27;
        for (g_236 = 0; (g_236 > (-4)); g_236 = safe_sub_func_uint8_t_u_u(g_236, 5))
        {
            p_27 = (void*)0;
        }
        l_1307 = ((*g_295) = l_1306);
        if ((g_76 , ((((*l_1313) = (l_1057[6] = l_1312)) != (void*)0) && p_26)))
        {
            unsigned l_1318[5];
            int l_1322 = 0x20C8C1FEL;
            int l_1327 = 0x8E3768FFL;
            unsigned short *l_1338[9][6][4] = {{{(void*)0,(void*)0,&l_1060,&g_76},{&g_894,&g_463,&g_129,&l_1230[4]},{(void*)0,&g_76,&g_76,&g_129},{&l_1256,&g_967,(void*)0,&g_76},{&g_894,&l_1230[1],(void*)0,(void*)0},{&l_1060,&g_129,&g_76,&g_167}},{{&g_129,(void*)0,&g_967,&g_463},{(void*)0,(void*)0,&g_129,&g_20},{&g_148,(void*)0,(void*)0,&g_148},{(void*)0,&l_1256,&g_129,&g_76},{(void*)0,&g_967,&l_1230[3],(void*)0},{(void*)0,&g_20,&g_463,(void*)0}},{{&g_83,&g_967,&l_1230[2],&g_76},{(void*)0,&l_1256,&l_1306,&g_148},{&l_1060,(void*)0,&l_1256,&g_20},{&g_894,(void*)0,&g_967,&g_463},{&g_76,(void*)0,(void*)0,&g_167},{&g_76,(void*)0,&g_148,(void*)0}},{{(void*)0,(void*)0,&g_167,&g_83},{&g_20,(void*)0,&g_967,&g_76},{&g_76,&g_83,&g_20,&l_1060},{&l_1256,&g_967,&g_967,&g_129},{(void*)0,&g_20,&l_1230[1],&g_83},{&l_1060,&l_1306,&g_83,&l_1256}},{{(void*)0,(void*)0,&l_1230[2],&l_1306},{&l_1060,(void*)0,&l_1230[1],&g_894},{(void*)0,(void*)0,&g_83,&l_1256},{(void*)0,(void*)0,&g_129,(void*)0},{&g_76,&l_1060,&l_1256,&g_83},{&g_148,&g_967,&g_894,(void*)0}},{{&l_1256,&g_894,&l_1256,(void*)0},{(void*)0,&g_967,(void*)0,&l_1060},{(void*)0,&g_167,(void*)0,&g_967},{&g_967,&g_76,(void*)0,&l_1306},{(void*)0,&g_167,(void*)0,(void*)0},{(void*)0,&g_129,&l_1256,(void*)0}},{{&l_1256,(void*)0,&g_894,&g_76},{&l_1060,&l_1060,&g_83,&l_1060},{&g_967,&g_83,(void*)0,&g_148},{&l_1256,(void*)0,&g_83,&g_129},{(void*)0,&g_20,&g_894,&l_1306},{&g_76,&g_894,(void*)0,&g_148}},{{&l_1306,&g_167,(void*)0,&g_83},{&g_463,&l_1060,&l_1230[3],&g_129},{&g_76,&l_1230[1],&g_967,(void*)0},{&l_1306,&l_1306,&g_129,&g_463},{&l_1060,&g_167,&l_1230[1],&l_1060},{&g_129,&g_148,&g_129,&g_967}},{{&g_76,(void*)0,&g_463,&g_20},{&l_1060,&g_967,&l_1230[4],&g_463},{&l_1256,&l_1230[2],&g_967,(void*)0},{&g_148,(void*)0,&g_83,&g_83},{&g_463,&g_463,&l_1230[1],&g_167},{&l_1060,&g_129,&l_1230[3],&l_1230[2]}}};
            int *l_1347 = &l_1071[1];
            short l_1391 = (-4L);
            unsigned l_1394 = 1UL;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_1318[i] = 8UL;
lbl_1371:
            (*g_575) = (p_26 | (safe_rshift_func_uint16_t_u_u(((((l_1322 = ((*g_290) = ((0x3A399B4DL <= ((safe_add_func_uint8_t_u_u(l_1318[1], (*g_797))) & ((safe_add_func_int32_t_s_s(p_26, (((1UL <= l_1321) | (*g_713)) < l_1318[0]))) || p_26))) <= p_26))) , 0xB8L) > (*g_386)) && l_1318[0]), 3)));
            p_27 = (*l_1000);
            (**g_409) = ((safe_rshift_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(p_26, l_1318[1])), 15)) == (((p_26 , &l_1306) != &l_1306) , 0x17C55A7AL));
            if ((p_26 , (((p_26 , &p_26) != &p_26) , l_1327)))
            {
                short l_1340 = 0xD388L;
                int l_1341 = 0L;
                unsigned short *l_1351 = (void*)0;
                int ****l_1355[4][8] = {{&l_1313,&l_1313,&g_217[7],&l_1313,&l_1313,&g_217[3],&g_217[3],&l_1313},{&l_1313,&g_217[3],&g_217[3],&l_1313,(void*)0,&l_1313,(void*)0,&l_1313},{&g_217[3],(void*)0,&g_217[3],&g_217[3],&g_217[7],&g_217[7],&g_217[3],&g_217[3]},{(void*)0,(void*)0,&g_217[7],&l_1313,&g_217[4],&l_1313,&g_217[7],(void*)0}};
                unsigned l_1365[4] = {0x600CEAD2L,0x600CEAD2L,0x600CEAD2L,0x600CEAD2L};
                int l_1366 = 0x9BE0C675L;
                unsigned short l_1380 = 3UL;
                unsigned char *l_1392 = &g_67;
                unsigned l_1393 = 18446744073709551615UL;
                int i, j;
lbl_1369:
                l_1341 = (((!(!((p_26 <= ((safe_add_func_int8_t_s_s((*g_797), (1UL < ((***g_384) = ((-4L) | p_26))))) & ((safe_lshift_func_int16_t_s_u((safe_sub_func_int8_t_s_s(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_u((p_26 , ((void*)0 != l_1338[1][2][0])), l_1318[1])), l_1339)) || 0x90AAL), l_1340)), p_26)) || 1L))) != 0xF985L))) != 0L) & 0xB7L);
                for (l_1322 = (-30); (l_1322 < 4); l_1322++)
                {
                    short **l_1344[10];
                    short ***l_1345 = &g_1024[0];
                    int *l_1346 = &l_1327;
                    unsigned short *l_1352[10] = {(void*)0,&g_20,(void*)0,&g_20,(void*)0,&g_20,(void*)0,&g_20,(void*)0,&g_20};
                    int i;
                    for (i = 0; i < 10; i++)
                        l_1344[i] = &g_1025[8];
                    if ((l_1344[8] != ((*l_1345) = &g_1025[8])))
                    {
                        int l_1349 = (-1L);
                        int *l_1350[5][1][8] = {{{&l_1097,&g_897[0][4],(void*)0,&g_897[0][4],&l_1097,&g_897[0][4],(void*)0,&g_897[0][4]}},{{&l_1097,&g_897[0][4],(void*)0,&g_897[0][4],&l_1097,&g_897[0][4],(void*)0,&g_897[0][4]}},{{&l_1097,&g_897[0][4],(void*)0,&g_897[0][4],&l_1097,&g_897[0][4],(void*)0,&g_897[0][4]}},{{&l_1097,&g_897[0][4],(void*)0,&g_897[0][4],&l_1097,&g_897[0][4],(void*)0,&g_897[0][4]}},{{&l_1097,&g_897[0][4],(void*)0,&g_897[0][4],&l_1097,&g_897[0][4],(void*)0,&g_897[0][4]}}};
                        unsigned short **l_1353 = (void*)0;
                        unsigned short **l_1354 = &l_1352[8];
                        int i, j, k;
                        l_1347 = l_1346;
                        (*l_1347) = (safe_unary_minus_func_uint8_t_u((func_35(p_26, (l_1349 = l_1349)) ^ (l_1351 != ((*l_1354) = l_1352[8])))));
                    }
                    else
                    {
                        return l_1341;
                    }
                    (*g_295) = (l_1355[1][3] == ((*g_606) = (*g_606)));
                    (*g_218) = g_1356;
                }
                for (l_1060 = (-7); (l_1060 <= 33); l_1060++)
                {
                    unsigned char l_1367 = 0x39L;
                    int l_1368 = 0L;
                    unsigned short **l_1370[9][1];
                    int i, j;
                    for (i = 0; i < 9; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1370[i][j] = (void*)0;
                    }
                    for (g_967 = 0; (g_967 != 30); ++g_967)
                    {
                        (**g_409) = (p_26 < ((p_26 >= p_26) , ((func_35((*g_797), g_83) & (((l_1368 = (safe_lshift_func_uint16_t_u_u((((g_261 , ((p_26 ^ ((safe_add_func_uint16_t_u_u((9L && (-1L)), (*l_1347))) , p_26)) == l_1365[0])) , l_1366) <= l_1367), 11))) <= p_26) , p_26)) , (***g_384))));
                        if (g_76)
                            goto lbl_1369;
                        (*g_1300) = l_1370[4][0];
                        if (l_1339)
                            goto lbl_1371;
                    }
                    for (g_862 = (-10); (g_862 >= 11); g_862++)
                    {
                        (*g_218) = (*g_409);
                    }
                }
                (*l_1347) = func_49((((p_26 = ((~(((safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((func_49((safe_sub_func_int32_t_s_s(l_1380, l_1393)), p_27, &l_1347) && 1L), (*l_1347))), l_1394)) == p_26) != (*l_1347))) <= 0x1D4EL)) , l_1395[0][0][7]) | (*l_1347)), (*g_409), (*l_1313));
            }
            else
            {
                return p_26;
            }
        }
        else
        {
            (*g_295) = (((*g_290) , ((*g_575) > (8L && ((p_26 | (((p_26 & (safe_lshift_func_uint8_t_u_u((p_26 || (1L >= ((safe_sub_func_int32_t_s_s((((p_27 != p_27) > p_26) > 0L), (**g_409))) && p_26))), p_26))) < p_26) != p_26)) >= l_1400)))) , (-1L));
        }
    }
    else
    {
        int l_1412 = 0x8DF5133CL;
        int **l_1413 = (void*)0;
        int **l_1419 = (void*)0;
        unsigned short *****l_1421 = &g_914;
        for (l_1339 = (-9); (l_1339 != 30); ++l_1339)
        {
            int *l_1407 = &g_236;
            for (g_187 = 2; (g_187 == 33); g_187++)
            {
                short l_1408 = 0x281AL;
                unsigned short *****l_1422 = (void*)0;
                short l_1425[3];
                int i;
                for (i = 0; i < 3; i++)
                    l_1425[i] = 0xFDC3L;
                for (l_994 = 0; (l_994 < 25); l_994++)
                {
                    short l_1414 = 0x017DL;
                    p_27 = p_27;
                    (*g_409) = ((*l_1000) = l_1407);
                }
                (*g_295) = (l_1408 & (p_26 >= l_1425[0]));
            }
            if ((*g_295))
                break;
        }
        for (l_995 = 0; (l_995 >= (-21)); --l_995)
        {
            for (g_574 = (-8); (g_574 <= (-22)); g_574 = safe_sub_func_int8_t_s_s(g_574, 1))
            {
                int *l_1430 = (void*)0;
                l_1430 = p_27;
            }
        }
    }
    for (g_261 = (-6); (g_261 > 50); g_261 = safe_add_func_uint8_t_u_u(g_261, 3))
    {
        short **l_1437 = (void*)0;
        short ***l_1438[6];
        int l_1439 = 0x20AB2AB1L;
        int l_1467[5][3];
        int i, j;
        for (i = 0; i < 6; i++)
            l_1438[i] = &g_1024[0];
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 3; j++)
                l_1467[i][j] = (-1L);
        }
        if ((safe_mod_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((&g_1025[8] == (g_1024[0] = l_1437)), (((***g_384) ^ l_1439) , ((p_26 ^ (p_26 == func_49(l_1439, (((safe_add_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(p_26, ((safe_lshift_func_int8_t_s_s(p_26, 4)) , p_26))), l_1439)) & (-1L)) , (void*)0), l_1000))) >= (*g_797))))) >= (***g_384)), 0x1266L)))
        {
            if ((**g_409))
                break;
        }
        else
        {
            short ***l_1462[6][6][7] = {{{(void*)0,&g_1024[0],&g_1024[1],&g_1024[1],&g_1024[1],(void*)0,&g_1024[5]},{(void*)0,&g_1024[0],(void*)0,&g_1024[3],&l_1437,(void*)0,&g_1024[0]},{&l_1437,&l_1437,(void*)0,&l_1437,&l_1437,&l_1437,(void*)0},{&g_1024[0],(void*)0,&l_1437,&l_1437,&l_1437,(void*)0,&l_1437},{&g_1024[3],&l_1437,&l_1437,&g_1024[3],(void*)0,(void*)0,&l_1437},{&g_1024[0],&g_1024[3],&l_1437,&l_1437,&g_1024[1],&g_1024[0],&l_1437}},{{&l_1437,(void*)0,&l_1437,&g_1024[0],&g_1024[0],&g_1024[0],&l_1437},{(void*)0,&g_1024[0],&l_1437,&l_1437,&l_1437,(void*)0,&l_1437},{&g_1024[0],&g_1024[0],&g_1024[3],&l_1437,&g_1024[4],&l_1437,(void*)0},{&l_1437,&g_1024[0],&g_1024[3],&g_1024[0],&g_1024[5],&g_1024[5],&g_1024[0]},{&l_1437,&l_1437,&l_1437,&g_1024[0],&l_1437,&l_1437,&l_1437},{(void*)0,&l_1437,&l_1437,&l_1437,&l_1437,(void*)0,&g_1024[5]}},{{&g_1024[0],&l_1437,&l_1437,&l_1437,&g_1024[5],&l_1437,&l_1437},{&l_1437,&g_1024[0],&l_1437,(void*)0,&l_1437,&g_1024[5],&l_1437},{&l_1437,(void*)0,&l_1437,&g_1024[0],&l_1437,&g_1024[1],&l_1437},{(void*)0,(void*)0,&g_1024[0],&l_1437,&g_1024[0],&l_1437,&g_1024[0]},{&l_1437,&l_1437,&l_1437,&g_1024[0],(void*)0,(void*)0,(void*)0},{&l_1437,&l_1437,&l_1437,&l_1437,&l_1437,&g_1024[1],(void*)0}},{{&l_1437,(void*)0,(void*)0,(void*)0,(void*)0,&l_1437,&g_1024[0]},{&g_1024[0],&g_1024[0],&g_1024[5],&g_1024[1],&g_1024[0],(void*)0,&l_1437},{&l_1437,(void*)0,&l_1437,&g_1024[0],&l_1437,&g_1024[0],&l_1437},{&l_1437,&g_1024[2],(void*)0,&g_1024[0],&g_1024[0],(void*)0,&g_1024[2]},{&g_1024[0],&g_1024[3],&g_1024[1],&l_1437,&l_1437,&l_1437,&g_1024[5]},{&l_1437,&l_1437,&l_1437,(void*)0,&l_1437,&l_1437,&g_1024[0]}},{{&l_1437,&g_1024[0],&l_1437,&l_1437,(void*)0,&g_1024[0],&g_1024[0]},{&l_1437,&g_1024[0],&g_1024[5],&g_1024[0],&l_1437,&g_1024[0],&g_1024[0]},{(void*)0,&g_1024[0],&l_1437,&g_1024[0],&l_1437,&l_1437,&g_1024[0]},{&g_1024[0],&l_1437,&g_1024[0],&g_1024[1],&g_1024[0],&l_1437,&g_1024[0]},{(void*)0,&g_1024[1],&l_1437,&g_1024[0],(void*)0,(void*)0,&g_1024[3]},{(void*)0,&l_1437,(void*)0,&l_1437,(void*)0,&l_1437,&l_1437}},{{&g_1024[1],&g_1024[0],&l_1437,&l_1437,&g_1024[0],&l_1437,&l_1437},{(void*)0,&l_1437,&g_1024[0],&g_1024[1],&l_1437,(void*)0,&l_1437},{&l_1437,&l_1437,&g_1024[0],&l_1437,&l_1437,(void*)0,&g_1024[4]},{&l_1437,&g_1024[2],&l_1437,&l_1437,&g_1024[2],&l_1437,&g_1024[0]},{&g_1024[0],&l_1437,(void*)0,&g_1024[2],&g_1024[5],&l_1437,&l_1437},{&g_1024[3],(void*)0,(void*)0,&g_1024[0],&g_1024[0],(void*)0,&l_1437}}};
            int l_1463 = (-1L);
            int i, j, k;
            for (g_1173 = 4; (g_1173 >= 1); g_1173 -= 1)
            {
                int ******l_1447 = &l_1446[3][3][2];
                int i;
            }
            (*g_218) = p_27;
        }
    }
    return p_26;
}







static unsigned char func_35(char p_36, int p_37)
{
    int **l_991 = &g_295;
    (*g_575) = (safe_rshift_func_int8_t_s_s((((func_49(((safe_mod_func_uint16_t_u_u(p_37, 0x0A76L)) , (***g_384)), (*l_991), l_991) , p_36) , (*g_386)) != p_37), 6));
    return p_36;
}







static unsigned func_38(int * p_39, unsigned short p_40, int ** p_41)
{
    (*p_41) = (*p_41);
    (*g_218) = (*p_41);
    return (*g_713);
}







static int ** func_43(short p_44, int * p_45, unsigned short p_46, int * p_47)
{
    int **l_62 = &g_29[1][4][0];
    unsigned char *l_66 = &g_67;
    unsigned short ***l_911 = (void*)0;
    unsigned short ****l_910 = &l_911;
    unsigned short *****l_909[3][2][1];
    unsigned char l_945 = 251UL;
    int l_984 = 8L;
    int i, j, k;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
                l_909[i][j][k] = &l_910;
        }
    }
    if ((func_49(func_53(&p_45, (g_20 || (safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(g_30, ((void*)0 != l_62))) < ((safe_unary_minus_func_int16_t_s((((*l_62) == (*l_62)) > ((safe_sub_func_uint16_t_u_u((((((*l_66) = g_30) > 0x8DL) < p_46) ^ 2UL), g_30)) || g_20)))) < 7L)), p_46))), p_46, g_30), g_29[2][4][4], l_62) , g_894))
    {
        int *l_895 = (void*)0;
        int *l_896[10][9][1] = {{{&g_897[0][1]},{&g_897[0][0]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][3]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]}},{{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][3]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][0]},{&g_897[0][1]}},{{&g_897[0][1]},{(void*)0},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][0]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][3]}},{{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][3]},{&g_897[0][1]},{&g_897[0][1]}},{{&g_897[0][1]},{&g_897[0][0]},{&g_897[0][1]},{&g_897[0][1]},{(void*)0},{(void*)0},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]}},{{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][3]},{(void*)0},{&g_897[0][4]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][4]},{(void*)0}},{{&g_897[0][3]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{(void*)0},{&g_897[1][4]},{(void*)0}},{{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][3]},{(void*)0},{&g_897[0][4]},{&g_897[0][1]}},{{&g_897[0][1]},{&g_897[0][4]},{(void*)0},{&g_897[0][3]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]}},{{(void*)0},{&g_897[1][4]},{(void*)0},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][1]},{&g_897[0][3]}}};
        int l_898 = (-1L);
        unsigned char ****l_899 = (void*)0;
        unsigned char l_903 = 0x8CL;
        unsigned short ***l_908 = &g_289[0][4][2];
        unsigned short ****l_907 = &l_908;
        unsigned short *****l_906 = &l_907;
        int **l_917[8] = {&g_575,&g_575,&g_575,&g_575,&g_575,&g_575,&g_575,&g_575};
        unsigned char l_960 = 8UL;
        int *l_983 = &g_236;
        short l_985 = 0xB252L;
        int i, j, k;
        (*g_295) = (((l_898 = p_46) , ((func_49(l_898, p_47, l_62) != (!(*g_797))) & (p_46 > (p_44 = l_898)))) , 0L);
        (*g_295) = ((g_384 = &g_385[2]) != (void*)0);
        if (((((((((safe_lshift_func_uint8_t_u_u(p_46, p_44)) ^ 0UL) , (*p_45)) & 0xF5D9F6F0L) , 0x150ADC46L) , l_898) != l_898) <= 0L))
        {
            int **l_915[6] = {&g_745,&g_745,&g_745,&g_745,&g_745,&g_745};
            short l_916 = 0x9DF6L;
            unsigned char l_918 = 0UL;
            int l_931 = 0xE0B015ABL;
            unsigned short **l_964 = &g_290;
            int i;
            if ((func_53(l_915[4], func_53((l_916 , l_917[2]), (**g_409), l_918, func_49((((p_44 , p_46) && 0xAEEBL) & p_44), p_45, l_62)), p_44, p_44) | 0xED47471EL))
            {
                char l_938[1];
                short *l_956 = &g_862;
                int i;
                for (i = 0; i < 1; i++)
                    l_938[i] = 0x6EL;
lbl_944:
                for (g_167 = 0; (g_167 != 23); g_167++)
                {
                    short l_925 = (-1L);
                    unsigned char l_926 = 0UL;
                    if ((((***l_906) != (p_44 , &g_290)) > (safe_rshift_func_uint8_t_u_u(((((p_46 = (((-5L) && ((*g_713) = p_44)) & ((((*l_66) = (safe_lshift_func_uint8_t_u_s((l_925 || p_44), (*g_797)))) != 1L) > (*g_295)))) <= l_926) , p_46) , p_44), p_44))))
                    {
                        (*g_218) = (*g_409);
                        if ((*p_45))
                            break;
                    }
                    else
                    {
                        unsigned char *l_941 = &l_926;
                        int l_942 = 0xB0AE1EAEL;
                        int *l_943 = &g_30;
                        (*l_62) = p_45;
                        (*p_45) = ((safe_rshift_func_int8_t_s_s(0x0EL, p_44)) || (((65535UL >= (((((safe_lshift_func_int16_t_s_s(l_931, (safe_lshift_func_uint16_t_u_u(p_44, func_49(((*g_797) , (l_942 = (safe_lshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_938[0], g_67)), (safe_add_func_uint8_t_u_u(((*l_941) = ((*g_386) = ((((*g_713) , 0xE9L) ^ 1L) || p_46))), l_925)))))), l_943, l_915[4]))))) && (*g_713)) <= (*g_295)) , (*p_45)) | (*g_745))) , l_941) != &l_938[0]));
                    }
                    if (l_925)
                        goto lbl_944;
                }
                (*g_409) = (*g_218);
                (*p_45) = ((~(!(((*l_66) = ((+(*p_45)) && 4294967290UL)) , l_945))) ^ (4294967294UL & (safe_sub_func_int32_t_s_s((safe_add_func_uint8_t_u_u((safe_mod_func_int16_t_s_s(((*l_956) = (safe_sub_func_uint16_t_u_u(func_49((safe_mod_func_int16_t_s_s((-1L), p_46)), (*l_62), l_917[2]), p_44))), p_46)), p_46)), 0x717E6D11L))));
                (*p_45) = (*p_45);
            }
            else
            {
                int **l_959 = &g_745;
                unsigned *l_961[6] = {&g_261,&g_261,&g_261,&g_261,&g_261,&g_261};
                unsigned short **l_965 = &g_290;
                int l_966 = (-2L);
                int i;
                (*g_409) = (void*)0;
                g_967 = ((safe_mod_func_uint16_t_u_u(func_53(l_915[4], ((*g_745) = func_49(p_44, (p_45 = p_45), l_959)), (*g_713), (((g_261 = (g_373 = (l_960 , 4UL))) | (l_966 = (+((safe_add_func_uint8_t_u_u((((p_44 , l_964) != l_965) ^ 0UL), 7UL)) , p_44)))) , 0UL)), p_44)) ^ p_44);
                (*l_959) = (*g_409);
            }
            for (g_76 = 0; (g_76 <= 38); g_76 = safe_add_func_uint32_t_u_u(g_76, 9))
            {
                for (g_167 = 0; (g_167 < 37); ++g_167)
                {
                    char l_974 = 0L;
                    for (g_236 = (-2); (g_236 < (-26)); --g_236)
                    {
                        int **l_975 = &g_750;
                        (*g_575) = (func_49(l_974, p_45, l_975) || g_463);
                        (*g_218) = (*l_975);
                        (*l_975) = p_47;
                    }
                }
                return l_62;
            }
            for (l_918 = 0; (l_918 <= 55); l_918 = safe_add_func_int16_t_s_s(l_918, 5))
            {
                for (g_292 = 4; (g_292 < 17); ++g_292)
                {
                    for (g_373 = 0; (g_373 < 27); g_373 = safe_add_func_int16_t_s_s(g_373, 3))
                    {
                        int **l_982 = &g_750;
                        return l_982;
                    }
                    (*g_409) = l_983;
                    return l_62;
                }
                (*g_409) = (*l_62);
            }
        }
        else
        {
            (*g_745) = (*g_575);
            (*g_295) = l_984;
            (*g_745) = l_985;
        }
    }
    else
    {
        int **l_986[9];
        int i;
        for (i = 0; i < 9; i++)
            l_986[i] = &g_745;
        return l_986[7];
    }
    (*g_409) = ((*g_218) = (*l_62));
    return l_62;
}







static short func_49(unsigned char p_50, int * p_51, int ** p_52)
{
    short l_71 = (-10L);
    unsigned char l_77 = 0xD6L;
    unsigned short *l_84 = &g_20;
    int l_87 = 0x68641A01L;
    unsigned char *l_98 = &l_77;
    short l_99 = 0xE223L;
    int **l_102 = (void*)0;
    short *l_105 = &l_71;
    int l_106[4][6][1] = {{{0xF256DA86L},{0xF256DA86L},{0xF34F691DL},{0xF256DA86L},{0xF256DA86L},{0xF34F691DL}},{{0xF256DA86L},{0xF256DA86L},{0xF34F691DL},{0xF256DA86L},{0xF256DA86L},{0xF34F691DL}},{{0xF256DA86L},{0xF256DA86L},{0xF34F691DL},{0xF256DA86L},{0xF256DA86L},{0xF34F691DL}},{{0xF256DA86L},{0xF256DA86L},{0xF34F691DL},{0xF256DA86L},{0xF256DA86L},{0xF34F691DL}}};
    unsigned short *l_107 = (void*)0;
    unsigned short *l_108 = (void*)0;
    unsigned l_109 = 0UL;
    short l_110 = 6L;
    unsigned char l_111 = 255UL;
    char l_138[7];
    unsigned short l_165 = 65535UL;
    char l_166 = 0x9AL;
    int l_222 = 0x5584143BL;
    unsigned l_231 = 0xAA912AE3L;
    int **l_245 = &g_29[3][5][3];
    int l_304 = 0x53E78FA6L;
    int l_363 = 0x8990C810L;
    unsigned char **l_383 = &l_98;
    unsigned char ***l_382 = &l_383;
    unsigned short **l_390 = &l_108;
    int l_396 = 0x59E872F0L;
    unsigned short l_406 = 0xF471L;
    unsigned short l_462 = 5UL;
    int *l_529 = &g_236;
    unsigned l_558 = 4294967295UL;
    unsigned l_559[1];
    char l_613 = 3L;
    unsigned l_650[5][2][9] = {{{7UL,1UL,0x4A198946L,0x6AF1AD3BL,0xE82AFC8FL,8UL,0x549D6406L,0x69B5D0A0L,1UL},{7UL,0x69B5D0A0L,0x6AF1AD3BL,0x00E3AA4FL,0x4A198946L,0x4A198946L,0x00E3AA4FL,0x6AF1AD3BL,0x69B5D0A0L}},{{1UL,0xE82AFC8FL,0x549D6406L,1UL,0xCEED1E72L,0x4A198946L,2UL,8UL,7UL},{2UL,0x00E3AA4FL,0xE82AFC8FL,1UL,0x6AF1AD3BL,8UL,0x6AF1AD3BL,1UL,0xE82AFC8FL}},{{0xE82AFC8FL,0xE82AFC8FL,0x974040EEL,7UL,4294967291UL,5UL,0x6AF1AD3BL,0x2519A56AL,1UL},{1UL,0x69B5D0A0L,0x83C37044L,0x549D6406L,1UL,2UL,2UL,1UL,0x549D6406L}},{{0x974040EEL,5UL,0x974040EEL,0x4A198946L,8UL,0x69B5D0A0L,0x00E3AA4FL,1UL,4294967291UL},{5UL,0x83C37044L,0xE82AFC8FL,4294967291UL,0x00E3AA4FL,0x2519A56AL,0x549D6406L,0x2519A56AL,0x00E3AA4FL}},{{0x4A198946L,0x549D6406L,0x549D6406L,0x4A198946L,0x83C37044L,0xCEED1E72L,0x2519A56AL,1UL,0x00E3AA4FL},{1UL,0x974040EEL,0x6AF1AD3BL,0x549D6406L,2UL,4294967291UL,8UL,8UL,4294967291UL}}};
    unsigned l_673 = 0x0F789468L;
    int *l_695[5] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    unsigned *l_712 = &l_231;
    unsigned char l_732 = 0x2BL;
    short l_765 = (-1L);
    int **l_774[10][4] = {{&g_29[0][6][2],&l_695[1],&l_695[2],(void*)0},{&g_575,&g_575,&l_695[1],&l_695[2]},{&g_575,&g_29[1][6][5],(void*)0,&g_575},{&g_29[3][5][3],&l_695[2],&g_29[3][5][3],(void*)0},{&g_29[0][6][2],&l_695[2],&l_695[1],&g_575},{&l_695[2],&g_29[1][6][5],&g_29[1][6][5],&l_695[2]},{&g_29[3][5][3],&g_575,&g_29[1][6][5],(void*)0},{&l_695[2],&g_29[0][6][2],&l_695[1],&g_29[0][6][2]},{&g_29[0][6][2],&g_29[1][6][5],&g_29[3][5][3],&g_29[0][6][2]},{&g_29[3][5][3],&g_29[0][6][2],(void*)0,(void*)0}};
    unsigned short ****l_776 = (void*)0;
    unsigned short *****l_775 = &l_776;
    short **l_779[8][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
    unsigned l_799 = 0x0BA106F2L;
    unsigned short l_813 = 1UL;
    unsigned char l_868 = 247UL;
    int *l_893 = (void*)0;
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_138[i] = 0x92L;
    for (i = 0; i < 1; i++)
        l_559[i] = 0x693F9688L;
    return g_224;
}







static unsigned char func_53(int ** p_54, int p_55, unsigned p_56, unsigned short p_57)
{
    int *l_68 = &g_30;
    l_68 = &g_30;
    (*p_54) = (*p_54);
    (**p_54) = 0L;
    return g_20;
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
    transparent_crc(g_30, "g_30", print_hash_value);
    transparent_crc(g_67, "g_67", print_hash_value);
    transparent_crc(g_76, "g_76", print_hash_value);
    transparent_crc(g_83, "g_83", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_148, "g_148", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    transparent_crc(g_224, "g_224", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_261, "g_261", print_hash_value);
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_463, "g_463", print_hash_value);
    transparent_crc(g_478, "g_478", print_hash_value);
    transparent_crc(g_574, "g_574", print_hash_value);
    transparent_crc(g_862, "g_862", print_hash_value);
    transparent_crc(g_894, "g_894", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_897[i][j], "g_897[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_967, "g_967", print_hash_value);
    transparent_crc(g_1173, "g_1173", print_hash_value);
    transparent_crc(g_1381, "g_1381", print_hash_value);
    transparent_crc(g_1390, "g_1390", print_hash_value);
    transparent_crc(g_1476, "g_1476", print_hash_value);
    transparent_crc(g_1563, "g_1563", print_hash_value);
    transparent_crc(g_1571, "g_1571", print_hash_value);
    transparent_crc(g_1634, "g_1634", print_hash_value);
    transparent_crc(g_1651, "g_1651", print_hash_value);
    transparent_crc(g_1721, "g_1721", print_hash_value);
    transparent_crc(g_1824, "g_1824", print_hash_value);
    transparent_crc(g_1835, "g_1835", print_hash_value);
    transparent_crc(g_1906, "g_1906", print_hash_value);
    transparent_crc(g_1942, "g_1942", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
