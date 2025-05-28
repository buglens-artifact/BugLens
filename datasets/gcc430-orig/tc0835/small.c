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



static int g_5 = 0x8885C6F1L;
static int g_15 = 0xDDA37BB0L;
static int g_57[10][3][1] = {{{0x7D6E19CCL},{0xF8616691L},{9L}},{{0x7D6E19CCL},{9L},{0xF8616691L}},{{0x7D6E19CCL},{(-1L)},{(-1L)}},{{0x7D6E19CCL},{0xF8616691L},{9L}},{{0x7D6E19CCL},{9L},{0xF8616691L}},{{0x7D6E19CCL},{(-1L)},{(-1L)}},{{0x7D6E19CCL},{0xF8616691L},{9L}},{{0x7D6E19CCL},{9L},{0xF8616691L}},{{0x7D6E19CCL},{(-1L)},{(-1L)}},{{0x7D6E19CCL},{0xF8616691L},{9L}}};
static int g_58 = 0x884BB868L;
static int ***g_66[5][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
static long long g_71 = 1L;
static long long g_72 = 0L;
static unsigned char g_115[4] = {0xF2L,0xF2L,0xF2L,0xF2L};
static short g_136 = (-10L);
static int g_140 = 1L;
static unsigned char *g_149 = (void*)0;
static unsigned char **g_148 = &g_149;
static unsigned g_190[10] = {0x73D85C89L,1UL,0x73D85C89L,0x73D85C89L,1UL,0x73D85C89L,0x73D85C89L,1UL,0x73D85C89L,0x73D85C89L};
static unsigned g_202 = 0UL;
static unsigned long long g_206 = 4UL;
static int g_207 = 0x0B874AABL;
static short g_215 = 0xF68CL;
static char g_216 = (-5L);
static unsigned short g_217 = 0xF437L;
static unsigned short g_244 = 1UL;
static char g_379 = (-10L);
static unsigned long long *g_400 = &g_206;
static unsigned long long **g_399 = &g_400;
static unsigned long long ***g_398 = &g_399;
static unsigned g_406[9][8] = {{0UL,0UL,0x844D4C88L,4294967295UL,0x71082345L,0UL,7UL,0xD7C7014EL},{4294967295UL,0x844D4C88L,0x71082345L,0UL,0UL,3UL,4294967295UL,0xD7C7014EL},{0x844D4C88L,4294967295UL,2UL,4294967295UL,0x0FC30DF4L,0x844D4C88L,0x0FC30DF4L,4294967295UL},{0UL,0x87BA07ABL,0UL,0x844D4C88L,0x846B3E04L,8UL,0x87BA07ABL,4294967295UL},{0xB042FC5BL,0xD7C7014EL,0UL,0x71082345L,0UL,4UL,0x846B3E04L,0UL},{0xB042FC5BL,0UL,0xD7C7014EL,2UL,0x846B3E04L,7UL,7UL,0x846B3E04L},{0UL,4294967295UL,4294967295UL,0UL,0x0FC30DF4L,4294967295UL,0xD7C7014EL,0x844D4C88L},{0x844D4C88L,0UL,0x6F957047L,0UL,0UL,0x844D4C88L,4294967295UL,2UL},{4294967295UL,0UL,0UL,0xD7C7014EL,0x71082345L,4294967295UL,0UL,4294967295UL}};
static long long g_412 = 0x95C2C738930B4BA5LL;
static unsigned g_446 = 0UL;
static unsigned char **g_482[3] = {&g_149,&g_149,&g_149};
static unsigned char **g_486 = &g_149;
static unsigned *g_494 = &g_190[0];
static unsigned **g_493 = &g_494;
static unsigned short g_543 = 0x6FB1L;
static int *g_595 = (void*)0;
static int **g_594 = &g_595;
static unsigned char g_624 = 0xD3L;
static char g_634 = 0x95L;
static long long **g_648 = (void*)0;
static unsigned g_672 = 1UL;
static unsigned g_701 = 0UL;
static unsigned char ***g_801 = &g_486;
static unsigned char ****g_800 = &g_801;
static int *g_804 = &g_57[5][1][0];
static int *g_818 = (void*)0;
static short *g_856 = &g_215;
static short **g_855 = &g_856;
static int **g_926 = &g_804;
static int g_962 = (-1L);
static unsigned g_984 = 0x5C10B482L;
static short g_1000 = 2L;
static unsigned short g_1026 = 0xD33DL;
static int g_1134 = 0x93E31076L;
static unsigned *g_1144 = (void*)0;
static unsigned **g_1143 = &g_1144;
static int **g_1164 = (void*)0;
static short g_1212 = 0x5DB6L;
static unsigned g_1213 = 4294967288UL;
static unsigned char g_1330[1][3] = {{0xF5L,0xF5L,0xF5L}};
static unsigned g_1338 = 18446744073709551615UL;
static unsigned long long ****g_1442 = &g_398;
static unsigned short g_1462[9] = {0x5EB3L,0x5EB3L,0xF98DL,0x5EB3L,0x5EB3L,0xF98DL,0x5EB3L,0x5EB3L,0xF98DL};
static unsigned long long g_1525 = 18446744073709551608UL;
static int **g_1579 = (void*)0;



static long long func_1(void);
static int * func_2(int * p_3);
static int ** func_6(int p_7, int p_8, int p_9);
static unsigned func_11(unsigned short p_12, long long p_13);
static long long func_16(int ** p_17, char p_18, int * p_19, char p_20);
static int ** func_21(int * p_22, int * p_23, int p_24, int * p_25, unsigned long long p_26);
static int * func_27(unsigned char p_28, int * p_29, int ** p_30, int * p_31, int ** p_32);
static unsigned char func_33(int ** p_34, int * p_35, unsigned p_36);
static int * func_37(unsigned long long p_38, int p_39, int * p_40, int * p_41, unsigned long long p_42);
static int * func_45(int * p_46, int * p_47, int * p_48);
static long long func_1(void)
{
    int *l_4 = &g_5;
    unsigned short l_1572 = 0xA9F7L;
    int **l_1576 = &g_818;
    int ***l_1575 = &l_1576;
    int **l_1578 = &g_818;
    int ***l_1577[7][9][4] = {{{&l_1578,&l_1578,(void*)0,&l_1578},{&l_1578,(void*)0,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,(void*)0,(void*)0,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,(void*)0,&l_1578},{&l_1578,(void*)0,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{(void*)0,(void*)0,&l_1578,&l_1578}},{{(void*)0,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,(void*)0,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,(void*)0,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,(void*)0,&l_1578},{&l_1578,(void*)0,&l_1578,&l_1578}},{{(void*)0,&l_1578,&l_1578,&l_1578},{(void*)0,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,(void*)0,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{(void*)0,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578}},{{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{(void*)0,&l_1578,&l_1578,&l_1578}},{{(void*)0,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,(void*)0,&l_1578},{&l_1578,&l_1578,(void*)0,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578}},{{(void*)0,(void*)0,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,(void*)0,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,(void*)0,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,(void*)0}},{{&l_1578,&l_1578,(void*)0,(void*)0},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,&l_1578},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,(void*)0},{&l_1578,(void*)0,(void*)0,&l_1578},{&l_1578,(void*)0,&l_1578,(void*)0},{(void*)0,&l_1578,&l_1578,(void*)0},{&l_1578,&l_1578,&l_1578,&l_1578}}};
    int *l_1580 = &g_207;
    int i, j, k;
    (*g_594) = (l_4 = func_2(l_4));

    ;
    ;
    ;
    ;
    ;
    ;
    for (g_207 = 0; (g_207 >= 19); g_207++)
    {
        unsigned l_1569 = 0x91DCBA93L;
        l_1572 &= ((l_1569 || (safe_rshift_func_int16_t_s_u((**g_855), 7))) ^ (**g_493));
        return l_1569;
    }
    (*l_1580) = (safe_rshift_func_uint16_t_u_s((l_1572 == ((g_1462[5] > (((*l_1575) = &g_818) != (g_1579 = &g_818))) < ((*l_1578) != &g_962))), 5));

    ;
    return (*l_1580);
}







static int * func_2(int * p_3)
{
    int l_10 = (-6L);
    int *l_14[10][1][2] = {{{&g_5,&g_5}},{{(void*)0,&g_5}},{{&g_5,(void*)0}},{{&g_5,&g_5}},{{(void*)0,&g_5}},{{&g_5,(void*)0}},{{&g_5,&g_5}},{{(void*)0,&g_5}},{{&g_5,(void*)0}},{{&g_5,&g_5}}};
    int *l_593 = &g_5;
    int *l_821 = (void*)0;
    int ***l_1221 = &g_926;
    unsigned char *l_1282[6][8][5] = {{{&g_624,&g_624,&g_115[1],&g_115[2],&g_624},{&g_624,&g_115[0],(void*)0,&g_115[0],(void*)0},{&g_624,&g_115[2],&g_624,&g_624,&g_624},{&g_624,&g_624,&g_624,&g_115[0],&g_115[0]},{&g_624,&g_624,(void*)0,&g_624,&g_624},{(void*)0,(void*)0,(void*)0,&g_115[0],&g_115[0]},{&g_624,&g_624,&g_624,&g_115[2],&g_624},{&g_115[0],&g_624,&g_115[0],(void*)0,&g_115[0]}},{{&g_624,&g_115[2],&g_115[1],&g_624,&g_624},{&g_115[0],&g_115[0],&g_115[0],&g_115[0],&g_115[0]},{&g_624,&g_624,&g_624,&g_115[1],&g_624},{&g_115[0],&g_624,(void*)0,&g_115[0],(void*)0},{&g_624,&g_115[1],(void*)0,&g_115[1],&g_624},{&g_115[0],(void*)0,&g_624,&g_115[0],&g_624},{&g_624,&g_115[1],&g_624,&g_624,&g_624},{(void*)0,&g_624,(void*)0,(void*)0,&g_624}},{{&g_624,&g_624,&g_115[1],&g_115[2],&g_624},{&g_624,&g_115[0],(void*)0,&g_115[0],(void*)0},{&g_624,&g_115[2],&g_624,&g_624,&g_624},{&g_624,&g_624,&g_624,&g_115[0],&g_115[0]},{&g_624,&g_624,(void*)0,&g_624,&g_624},{(void*)0,(void*)0,(void*)0,&g_115[0],&g_115[0]},{&g_624,&g_624,&g_624,&g_115[2],&g_624},{&g_115[0],&g_624,&g_115[0],(void*)0,&g_115[0]}},{{&g_624,&g_115[2],&g_115[1],&g_624,&g_624},{&g_115[0],&g_115[0],&g_115[0],&g_115[0],&g_115[0]},{&g_624,&g_624,&g_624,&g_115[1],&g_624},{&g_115[0],&g_624,(void*)0,&g_115[0],(void*)0},{&g_624,&g_115[1],(void*)0,&g_115[1],&g_624},{&g_115[0],(void*)0,&g_624,&g_115[0],&g_624},{&g_624,&g_115[1],&g_624,&g_624,&g_624},{(void*)0,&g_624,(void*)0,(void*)0,&g_624}},{{&g_624,&g_624,&g_115[1],&g_115[2],&g_624},{&g_624,&g_115[0],(void*)0,&g_115[0],(void*)0},{&g_624,&g_115[2],&g_624,&g_624,&g_624},{&g_624,&g_624,&g_624,&g_115[0],&g_115[0]},{&g_624,&g_624,(void*)0,&g_624,&g_624},{(void*)0,(void*)0,(void*)0,&g_115[0],&g_115[0]},{&g_624,&g_624,&g_624,&g_115[2],&g_624},{&g_115[0],&g_624,&g_115[0],(void*)0,&g_115[0]}},{{&g_624,&g_115[2],&g_115[1],&g_624,&g_624},{&g_115[0],&g_115[0],&g_115[0],&g_115[0],&g_115[0]},{&g_624,&g_624,&g_624,&g_115[1],&g_624},{&g_115[0],&g_624,(void*)0,&g_115[0],(void*)0},{&g_624,&g_115[1],(void*)0,&g_115[1],&g_624},{&g_115[0],(void*)0,&g_624,&g_115[0],&g_624},{&g_624,&g_115[1],&g_624,&g_624,&g_624},{(void*)0,&g_624,(void*)0,(void*)0,&g_624}}};
    unsigned char l_1337 = 1UL;
    unsigned long long l_1346 = 0x22C7667389F4650ELL;
    unsigned char l_1415 = 252UL;
    char l_1430 = 3L;
    unsigned long long ****l_1436 = &g_398;
    unsigned ***l_1483[3];
    int **l_1493 = &g_595;
    unsigned char l_1497 = 0UL;
    unsigned l_1502 = 5UL;
    unsigned long long l_1544 = 0UL;
    char l_1553 = 9L;
    int **l_1563 = (void*)0;
    int *l_1566 = &g_5;
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_1483[i] = (void*)0;
    (*l_1221) = func_6(l_10, ((*p_3) != func_11((g_15 = (&g_5 == l_14[0][0][0])), func_16(func_21(func_27(func_33(&l_14[0][0][0], func_37(g_5, (safe_lshift_func_uint16_t_u_s(65531UL, 10)), &g_5, func_45(l_14[0][0][0], p_3, &g_5), g_71), g_71), l_593, &l_14[4][0][1], p_3, g_594), p_3, g_624, l_821, (*l_593)), g_71, l_14[0][0][0], (*l_593)))), g_5);

    ;
    ;
    ;
    ;
    ;
    for (g_58 = (-27); (g_58 == 8); ++g_58)
    {
        unsigned ***l_1224 = &g_1143;
        int l_1238 = 0xCDFE68CDL;
        int **l_1261 = &l_821;
        int l_1299 = 0xB7E6CC96L;
        int l_1306 = 0x6BE52621L;
        short l_1308 = 0x44A3L;
        int l_1316 = (-1L);
        int l_1320 = (-4L);
        int l_1323 = 0x91738AF8L;
        int l_1324[9][6] = {{0xB60AEE8CL,0x4EF2D860L,0L,0x4EF2D860L,0xB60AEE8CL,0x4EF2D860L},{0xFC5A8DF5L,0xF6CA8C15L,0xFC5A8DF5L,0x4EF2D860L,0xFC5A8DF5L,0xF6CA8C15L},{0xB60AEE8CL,0xF6CA8C15L,0L,0xF6CA8C15L,0xB60AEE8CL,0xF6CA8C15L},{0xFC5A8DF5L,0x4EF2D860L,0xFC5A8DF5L,0xF6CA8C15L,0xFC5A8DF5L,0x4EF2D860L},{0xB60AEE8CL,0x4EF2D860L,0L,0x4EF2D860L,0xB60AEE8CL,0x4EF2D860L},{0xFC5A8DF5L,0xF6CA8C15L,0xFC5A8DF5L,0x4EF2D860L,0xFC5A8DF5L,0xF6CA8C15L},{0xB60AEE8CL,0xF6CA8C15L,0L,0xF6CA8C15L,0xB60AEE8CL,0xF6CA8C15L},{0xFC5A8DF5L,0x4EF2D860L,0xFC5A8DF5L,0xF6CA8C15L,0xFC5A8DF5L,0x4EF2D860L},{0xB60AEE8CL,0x4EF2D860L,0L,0x4EF2D860L,0xB60AEE8CL,0x4EF2D860L}};
        int i, j;
        (*l_1224) = &g_1144;
        for (g_962 = 0; (g_962 >= 14); g_962 = safe_add_func_uint32_t_u_u(g_962, 1))
        {
            int *l_1231 = &g_57[9][2][0];
            (*l_593) = (*p_3);
            for (g_217 = 0; (g_217 > 39); g_217 = safe_add_func_int16_t_s_s(g_217, 9))
            {
                return p_3;


            }
            for (g_217 = 0; (g_217 <= 51); g_217 = safe_add_func_uint64_t_u_u(g_217, 1))
            {
                l_1231 = ((*g_594) = p_3);

                ;
                ;
            }

            ;
            (*p_3) = (+((~l_1238) <= 0UL));
        }
        for (g_543 = 0; (g_543 <= 10); g_543++)
        {
            int **l_1247 = &g_595;
            unsigned l_1254 = 0x7170C204L;
            int l_1264 = (-1L);
            int l_1297 = (-9L);
            int l_1298 = 0x361B7B0FL;
            int l_1307 = 0xA48CF898L;
            int l_1309 = (-7L);
            int l_1311 = 0x3EE12BF8L;
            int l_1312 = 1L;
            int l_1314 = (-1L);
            int l_1321 = 0xF81F4455L;
            int l_1322 = 1L;
            (*g_594) = (*g_594);
            if ((*p_3))
            {
                int l_1258 = 0x7CD08E08L;
                for (g_1212 = 0; (g_1212 <= 29); ++g_1212)
                {
                    unsigned short l_1255 = 1UL;
                    short *l_1256 = (void*)0;
                    short *l_1257 = &g_136;
                    int l_1265 = 3L;
                    (*p_3) |= 0x25824AB0L;
                    l_1265 &= ((*g_856) <= l_1258);
                }
                l_1238 ^= (*p_3);
            }
            else
            {
                int *l_1290 = &g_207;
                int l_1295 = (-8L);
                int l_1300 = 0x4F6A8725L;
                int l_1303 = 1L;
                int l_1305 = 0xFB7BE7D8L;
                int l_1315 = 0x6BAAFAF3L;
                int l_1318 = (-1L);
                int l_1326[9][10][2] = {{{0L,1L},{0L,0xDFFFDE1FL},{0xF051BDE3L,(-1L)},{(-1L),0x66DECB71L},{0x90CF8C70L,0x3992EF2EL},{0xBCD6A8EDL,0L},{0L,1L},{0xDFFFDE1FL,0x67CF1E47L},{0x66DECB71L,0x48CB332CL},{1L,0x48CB332CL}},{{0x66DECB71L,0x67CF1E47L},{0xDFFFDE1FL,1L},{0L,0L},{0xBCD6A8EDL,0x3992EF2EL},{0x90CF8C70L,0x66DECB71L},{(-1L),(-1L)},{0xF051BDE3L,0xDFFFDE1FL},{0L,1L},{0L,(-7L)},{0L,0L}},{{0L,0x782DEF7CL},{0L,0L},{0L,(-7L)},{0L,1L},{0L,0xDFFFDE1FL},{0xF051BDE3L,(-1L)},{(-1L),0x66DECB71L},{0x90CF8C70L,0x3992EF2EL},{0xBCD6A8EDL,0L},{0L,1L}},{{0xDFFFDE1FL,0x67CF1E47L},{0x66DECB71L,0x48CB332CL},{1L,0x48CB332CL},{0x66DECB71L,0x67CF1E47L},{0xDFFFDE1FL,1L},{0L,0L},{0xBCD6A8EDL,0x3992EF2EL},{0x90CF8C70L,0x66DECB71L},{(-1L),(-1L)},{0xF051BDE3L,0xDFFFDE1FL}},{{0L,1L},{0L,(-7L)},{0L,0L},{0L,0x782DEF7CL},{0L,0L},{0L,(-7L)},{0x880AC9A5L,(-7L)},{(-1L),8L},{0x265221E8L,0L},{0L,0x67CF1E47L}},{{1L,0L},{0x782DEF7CL,0x66DECB71L},{0xDFFFDE1FL,0L},{8L,0x3992EF2EL},{0x67CF1E47L,0L},{0L,0L},{0x67CF1E47L,0x3992EF2EL},{8L,0L},{0xDFFFDE1FL,0x66DECB71L},{0x782DEF7CL,0L}},{{1L,0x67CF1E47L},{0L,0L},{0x265221E8L,8L},{(-1L),(-7L)},{0x880AC9A5L,0x883CD065L},{0xF051BDE3L,0x880AC9A5L},{0x66DECB71L,0L},{0x66DECB71L,0x880AC9A5L},{0xF051BDE3L,0x883CD065L},{0x880AC9A5L,(-7L)}},{{(-1L),8L},{0x265221E8L,0L},{0L,0x67CF1E47L},{1L,0L},{0x782DEF7CL,0x66DECB71L},{0xDFFFDE1FL,0L},{8L,0x3992EF2EL},{0x67CF1E47L,0L},{0L,0L},{0x67CF1E47L,0x3992EF2EL}},{{8L,0L},{0xDFFFDE1FL,0x66DECB71L},{0x782DEF7CL,0L},{1L,0x67CF1E47L},{0L,0L},{0x265221E8L,8L},{(-1L),(-7L)},{0x880AC9A5L,0x883CD065L},{0xF051BDE3L,0x880AC9A5L},{0x66DECB71L,0L}}};
                unsigned short l_1327[4][9][3] = {{{0x7973L,0x7497L,0xAA0AL},{1UL,0xA000L,0xCB0DL},{5UL,1UL,0xCB0DL},{0x86CBL,1UL,0xCB0DL},{65535UL,0xA000L,0x6F65L},{0x6F65L,9UL,0xDE0EL},{0x7973L,0x0F01L,0x3732L},{0x6F65L,0x7497L,0x9363L},{65535UL,0UL,0UL}},{{0x86CBL,0UL,0x3B0DL},{0xCB0DL,0x7497L,65535UL},{0xB958L,0x0F01L,0xAA0AL},{0x9363L,9UL,65535UL},{65535UL,0xA000L,0x3B0DL},{3UL,1UL,0UL},{3UL,1UL,0x9363L},{65535UL,65535UL,0x3732L},{0x9363L,0x8463L,0xDE0EL}},{{0xB958L,65535UL,0x6F65L},{0xCB0DL,1UL,0xCB0DL},{0x86CBL,1UL,0xCB0DL},{65535UL,0xA000L,0x6F65L},{0x6F65L,9UL,0xDE0EL},{0x7973L,0x0F01L,0x3732L},{0x6F65L,0x7497L,0x9363L},{65535UL,0UL,0UL},{0x86CBL,0UL,0x3B0DL}},{{0xCB0DL,0x7497L,65535UL},{0xB958L,0x0F01L,0xAA0AL},{0x9363L,9UL,65535UL},{65535UL,0xA000L,0x3B0DL},{3UL,1UL,0UL},{3UL,1UL,0x9363L},{65535UL,65535UL,0x3732L},{0x9363L,65535UL,1UL},{65535UL,0xDE0EL,0UL}}};
                int i, j, k;
                (*l_593) = (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(((**g_399) ^ 1L), 7)), g_543));
                (*g_594) = p_3;

                ;
                for (g_216 = 3; (g_216 < (-14)); --g_216)
                {
                    int **l_1289 = &l_14[0][0][0];
                    int l_1291 = 0xF63917D8L;
                    int l_1296 = 0x90544305L;
                    int l_1301 = 9L;
                    int l_1304 = 0L;
                    int l_1310 = 1L;
                    int l_1313 = 6L;
                    int l_1319[2];
                    int l_1325 = 0xC644FC31L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1319[i] = 0xD7341345L;
                    for (g_217 = (-24); (g_217 > 14); ++g_217)
                    {
                        unsigned short l_1292 = 65531UL;
                        (*l_593) |= (((*l_1290) | 0xEBCBL) && l_1238);
                    }
                    for (g_1026 = 15; (g_1026 < 59); ++g_1026)
                    {
                        long long l_1302 = 0x1D1AE9F5328A9B07LL;
                        int l_1317[4] = {(-4L),(-4L),(-4L),(-4L)};
                        int i;
                        l_1327[2][5][1]++;
                        ++g_1330[0][1];
                        (*p_3) = (-6L);
                    }
                }
                (*g_595) = 0x24507A32L;
            }
        }
        if ((*p_3))
            continue;
    }
    for (g_207 = 0; (g_207 <= 21); g_207++)
    {
        int **l_1340 = (void*)0;
        int l_1341 = 4L;
        unsigned long long **l_1353[4][2][6] = {{{&g_400,&g_400,&g_400,&g_400,&g_400,&g_400},{&g_400,&g_400,&g_400,&g_400,(void*)0,&g_400}},{{&g_400,&g_400,&g_400,&g_400,&g_400,&g_400},{(void*)0,&g_400,(void*)0,&g_400,&g_400,&g_400}},{{&g_400,&g_400,&g_400,(void*)0,(void*)0,&g_400},{&g_400,&g_400,&g_400,(void*)0,&g_400,&g_400}},{{&g_400,&g_400,&g_400,&g_400,&g_400,&g_400},{(void*)0,&g_400,&g_400,&g_400,&g_400,&g_400}}};
        unsigned char l_1356 = 1UL;
        int *l_1366[9][7] = {{&g_140,(void*)0,(void*)0,&g_140,(void*)0,&g_140,(void*)0},{&l_10,&l_10,(void*)0,&l_10,(void*)0,&l_10,&l_10},{&l_10,(void*)0,&l_10,(void*)0,&l_10,&l_10,(void*)0},{&g_140,(void*)0,&g_140,(void*)0,(void*)0,&g_140,(void*)0},{(void*)0,(void*)0,&l_10,&l_10,(void*)0,(void*)0,(void*)0},{&g_140,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&l_10},{&g_140,&g_140,&l_10,&l_10,&l_10,&g_140,&g_140},{&g_140,&l_10,&l_10,&l_10,&g_140,&g_140,&l_10},{(void*)0,(void*)0,(void*)0,&l_10,&l_10,(void*)0,(void*)0}};
        int l_1405 = (-2L);
        int l_1410[2][10] = {{(-6L),6L,6L,(-6L),0x175451EDL,(-10L),0x175451EDL,(-6L),6L,6L},{0x175451EDL,6L,0x114324FCL,0L,0L,0x114324FCL,6L,0x175451EDL,6L,0x114324FCL}};
        long long l_1414 = 0x524118B8429415EFLL;
        int **l_1429[4] = {&l_14[5][0][1],&l_14[5][0][1],&l_14[5][0][1],&l_14[5][0][1]};
        int *l_1432 = &g_57[5][0][0];
        unsigned l_1434 = 4UL;
        unsigned short l_1446 = 0xBCB0L;
        unsigned long long l_1470 = 0xD27C180D0E0A6C1DLL;
        int i, j, k;
        for (l_10 = 0; (l_10 >= 9); l_10 = safe_add_func_int16_t_s_s(l_10, 5))
        {
            int **l_1339 = &g_804;
            char *l_1342[8] = {&g_379,&g_379,&g_634,&g_379,&g_379,&g_634,&g_379,&g_379};
            int l_1343 = 2L;
            unsigned short *l_1347 = (void*)0;
            unsigned short *l_1348 = &g_543;
            int i;
            (*l_593) = (l_1337 != (g_1338 <= ((*l_1348) ^= l_1341)));
        }
        if ((safe_lshift_func_int16_t_s_s((~((*g_856) = (l_1341 || 0x43E7FD194B886F3FLL))), (((***g_398) ^ (safe_sub_func_int16_t_s_s(((void*)0 != l_1353[2][1][5]), (((*l_593) <= (*g_494)) != g_1212)))) <= l_1356))))
        {
            short *l_1359[3];
            int l_1360 = (-6L);
            int **l_1399 = (void*)0;
            int l_1407 = (-6L);
            int l_1409 = 0x77920C9CL;
            int l_1411 = (-1L);
            int *l_1435 = &g_1134;
            unsigned long long ****l_1438 = &g_398;
            int l_1459 = 0x72A2F17DL;
            int l_1461 = 0x27E6A66DL;
            short l_1471[4];
            unsigned short *l_1484 = &g_1026;
            int l_1539[1];
            int i;
            for (i = 0; i < 3; i++)
                l_1359[i] = &g_1000;
            for (i = 0; i < 4; i++)
                l_1471[i] = 0L;
            for (i = 0; i < 1; i++)
                l_1539[i] = 0L;
            if ((safe_add_func_uint16_t_u_u(9UL, (l_1360 ^= (*g_856)))))
            {
                unsigned l_1367 = 0x7D0233B8L;
                unsigned long long l_1390 = 0x77AA9B847F242EF5LL;
                int l_1392 = 0x5F7521D6L;
                unsigned **l_1400[1][10] = {{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494}};
                int l_1406 = 0L;
                int l_1408[4][8] = {{(-9L),0xAB77317BL,0xAB77317BL,(-9L),1L,(-9L),0xAB77317BL,0xAB77317BL},{0xAB77317BL,1L,0x2F9E2079L,0x2F9E2079L,1L,0xAB77317BL,1L,0x2F9E2079L},{(-9L),1L,(-9L),0xAB77317BL,0xAB77317BL,(-9L),1L,(-9L)},{0x69F44FE3L,0xAB77317BL,0x2F9E2079L,0xAB77317BL,1L,1L,0x69F44FE3L,(-9L)}};
                unsigned char ****l_1419 = (void*)0;
                int i, j;
                for (g_71 = 0; (g_71 <= 3); ++g_71)
                {
                    int **l_1369 = &g_804;
                    int **l_1372 = &l_821;
                    unsigned l_1398 = 0x01D2EE00L;
                    int l_1404[8] = {0L,0xFA93BA92L,0L,0L,0xFA93BA92L,0L,0L,0xFA93BA92L};
                    unsigned char l_1422 = 0xFAL;
                    char *l_1425[4][2] = {{&g_634,&g_634},{&g_634,&g_634},{&g_634,&g_634},{&g_634,&g_634}};
                    int i, j;
                    for (g_412 = 0; (g_412 >= 4); g_412 = safe_add_func_uint64_t_u_u(g_412, 2))
                    {
                        int *l_1365 = (void*)0;
                        unsigned l_1368 = 0xE6F41527L;
                        unsigned short *l_1373 = &g_1026;
                        int l_1374[10] = {7L,7L,7L,7L,7L,7L,7L,7L,7L,7L};
                        int i;
                        l_1374[8] ^= (*p_3);
                    }
                    if ((*p_3))
                    {
                        char *l_1377 = &g_379;
                        int l_1384 = 0x2A80B2F8L;
                        long long *l_1387 = &g_412;
                        long long *l_1391 = &g_72;
                        l_1392 &= ((*p_3) |= (safe_add_func_int8_t_s_s(((*l_1377) = l_1360), (safe_add_func_int16_t_s_s((((safe_sub_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(l_1384, l_1360)), (safe_mod_func_uint64_t_u_u((((*l_1387) |= 0x9265D6CAFE3646CFLL) == ((*l_1391) ^= ((safe_add_func_int8_t_s_s((((((l_1390 != l_1367) || 0xD110915FL) < 0L) >= (**g_399)) > g_202), (-7L))) != l_1384))), l_1367)))) > l_1367) | l_1367), 0x97A2L)))));
                        if (l_1384)
                            continue;
                        (*l_593) = (*p_3);
                    }
                    else
                    {
                        int *l_1393 = (void*)0;
                        (*l_1372) = l_1393;

                        ;
                    }
                    if ((*p_3))
                    {
                        int l_1401 = 0x0831DCF7L;
                        int l_1412 = 0x10DC5666L;
                        int l_1413[4] = {(-1L),(-1L),(-1L),(-1L)};
                        int i;
                        l_1392 |= (((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u(l_1360, 7)), l_1398)) ^ ((~l_1401) > (safe_add_func_uint8_t_u_u(0x49L, g_1213)))) < 9L);
                        if (l_1390)
                            continue;
                        (*l_1369) = (void*)0;

                        ;
                        ++l_1415;
                    }
                    else
                    {
                        int *l_1418[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        (*l_1372) = ((*g_594) = l_1418[5]);

                        ;
                    }
                    if ((((l_1419 == (void*)0) ^ (~((safe_sub_func_int8_t_s_s(g_624, (g_379 = ((0L < (l_1406 = l_1408[1][3])) < (l_1392 = (l_1422++)))))) <= (((*l_593) & g_57[5][1][0]) >= (0xCEB40077C964D83CLL || ((**g_855) & (*g_856))))))) | l_1360))
                    {
                        unsigned l_1426 = 4294967295UL;
                        l_1426++;
                    }
                    else
                    {
                        char l_1431 = 1L;
                        (*l_593) = (+(l_1430 | l_1431));
                    }
                }

                ;
                ;
                return l_1432;



            }
            else
            {
                int **l_1433 = (void*)0;
                unsigned long long *****l_1437 = &l_1436;
                unsigned long long *****l_1439 = &l_1438;
                unsigned long long ****l_1441 = &g_398;
                unsigned long long *****l_1440 = &l_1441;
                char *l_1443 = &g_216;
                short l_1444 = 0x22D5L;
                int l_1449 = 0x912A5EB0L;
                int l_1453 = 0x90B3AF9EL;
                int l_1454 = 0x0C355C5BL;
                int l_1455[2];
                unsigned *l_1469 = (void*)0;
                int i;
                for (i = 0; i < 2; i++)
                    l_1455[i] = 0L;
                (*p_3) = (*p_3);
                if ((g_379 && (l_1444 > (*l_1432))))
                {
                    short *l_1445 = (void*)0;
                    int l_1448 = 1L;
                    int l_1450 = 1L;
                    int l_1451 = (-7L);
                    int l_1457 = 0xC4072CBCL;
                    int l_1458 = (-3L);
                    int l_1460[7][6] = {{(-4L),0x23D74D06L,(-4L),(-4L),0x23D74D06L,(-4L)},{(-4L),0x23D74D06L,(-4L),(-4L),0x23D74D06L,(-4L)},{(-4L),0x23D74D06L,(-4L),(-4L),0x23D74D06L,(-4L)},{(-4L),0x23D74D06L,(-4L),(-4L),0x23D74D06L,(-4L)},{(-4L),0x23D74D06L,(-4L),(-4L),0x23D74D06L,(-4L)},{(-4L),0x23D74D06L,(-4L),(-4L),0x23D74D06L,(-4L)},{(-4L),0x23D74D06L,(-4L),(-4L),0x23D74D06L,(-4L)}};
                    int i, j;
                    (*l_1435) = ((*p_3) = (l_1359[2] != l_1445));
                    for (g_1213 = 0; (g_1213 <= 3); g_1213 += 1)
                    {
                        return (*g_594);


                    }
                    if (l_1446)
                        break;
                    for (g_1338 = 2; (g_1338 <= 7); g_1338 += 1)
                    {
                        char l_1447[6][2] = {{0xE3L,0x1FL},{0x5DL,0x5DL},{0x5DL,0x1FL},{0xE3L,0x3FL},{0x1FL,0x3FL},{0xE3L,0x1FL}};
                        int l_1452 = 0L;
                        int l_1456[10] = {2L,2L,(-1L),2L,(-1L),0xEF90A5CEL,0xEF90A5CEL,(-1L),2L,(-1L)};
                        int *l_1472 = &l_1341;
                        int i, j;
                        g_1462[5]++;
                        l_1472 = ((*g_594) = (p_3 = func_37((((~((safe_lshift_func_uint8_t_u_u(l_1460[6][4], l_1457)) || 0x8CCCB88AL)) >= (*l_1432)) <= 0x0D75L), l_1451, p_3, &l_1456[5], l_1471[2])));

                        ;
                        ;
                    }
                }
                else
                {
                    long long l_1473 = 3L;
                    int l_1474 = 0xA61A45D5L;
                    (*p_3) &= (((l_1474 ^= l_1473) & (safe_add_func_uint64_t_u_u(18446744073709551608UL, (0x56L | (safe_lshift_func_int16_t_s_u((*l_1435), 15)))))) < l_1473);
                }
            }
            if (((**g_855) != ((*l_1484)--)))
            {
                unsigned long long l_1494[1];
                long long l_1496 = (-9L);
                unsigned l_1511 = 1UL;
                int l_1526 = 0L;
                int i;
                for (i = 0; i < 1; i++)
                    l_1494[i] = 0UL;
                for (g_1338 = 0; (g_1338 <= 9); g_1338 += 1)
                {
                    unsigned long long l_1489 = 18446744073709551610UL;
                    int **l_1492 = &l_1432;
                    char *l_1495[7][5] = {{&g_379,&g_379,&g_216,&g_379,&g_379},{&g_216,&g_379,&g_379,&g_379,&g_379},{&g_379,&g_379,&g_216,&g_379,&g_634},{&g_379,&g_216,&g_216,&g_379,&g_379},{&g_379,&g_379,&g_216,&g_216,&g_379},{&g_379,&g_216,&g_216,&g_216,&g_216},{&g_216,&g_379,&g_216,&g_216,&g_216}};
                    int ***l_1510 = &g_926;
                    int i, j;
                    (*g_594) = func_37(((safe_lshift_func_int16_t_s_s(((****g_1442) | 1L), l_1497)) != 5UL), l_1496, p_3, p_3, (*l_1435));

                    ;
                    for (l_1415 = 0; (l_1415 <= 8); l_1415 += 1)
                    {
                        int *l_1500 = &l_1409;
                        int *l_1501 = (void*)0;
                        int i;
                        (*g_594) = func_37(g_1462[l_1415], (*l_1435), func_37((--(***g_398)), (+(*l_1435)), (l_1500 = p_3), p_3, ((*l_1432) != (*l_593))), l_1501, l_1496);

                        ;
                        l_1502 ^= ((**l_1492) = (*p_3));
                        (**g_594) = l_1494[0];
                        (**l_1493) = (safe_mod_func_uint8_t_u_u((safe_unary_minus_func_uint16_t_u((safe_sub_func_int32_t_s_s((*p_3), (safe_lshift_func_uint8_t_u_s((((0x85L != 4UL) >= ((((255UL & l_1496) && (((g_1026 >= (0UL ^ (*g_595))) ^ (l_1510 == (void*)0)) <= (*l_1500))) != 65535UL) < 0x7471CC8BL)) && 0xCC3297C6114E065BLL), g_1212)))))), g_244));
                    }
                }
                (*p_3) = (*p_3);
                for (g_216 = 0; (g_216 <= 7); g_216 += 1)
                {
                    int *l_1515 = &g_207;
                    l_1511++;
                    for (g_58 = 0; (g_58 <= 7); g_58 += 1)
                    {
                        int *l_1514 = &l_1410[1][7];
                        int i, j;
                        (*g_594) = l_1514;

                        ;
                        (*p_3) = g_406[(g_58 + 1)][g_58];
                        (*g_594) = l_1515;

                        ;
                    }
                }
                for (l_1405 = (-7); (l_1405 > (-7)); ++l_1405)
                {
                    long long l_1522 = (-1L);
                    for (g_15 = 0; (g_15 != 27); g_15 = safe_add_func_uint16_t_u_u(g_15, 6))
                    {
                        unsigned short l_1523 = 0x6329L;
                        int *l_1524[6] = {&l_1411,&l_1411,&l_1411,&l_1411,&l_1411,&l_1411};
                        int i;
                        (*g_594) = p_3;

                        ;
                        (*l_1432) |= (((safe_lshift_func_uint8_t_u_u(((((l_1526 = (l_1511 & ((**g_493) == (*p_3)))) >= (*p_3)) <= (**g_493)) < l_1522), 3)) & (*l_1435)) != g_207);
                    }
                    (*l_1432) ^= (l_1526 ^= (*l_593));
                }
            }
            else
            {
                unsigned short l_1527 = 65526UL;
                int l_1531 = (-9L);
                int l_1533 = 0x473CA6C7L;
                int l_1536 = 2L;
                int l_1540 = 0xE5741311L;
                int l_1543 = 1L;
                (*l_593) = l_1527;
                for (l_1434 = 28; (l_1434 <= 10); l_1434--)
                {
                    long long l_1530[10][2][8] = {{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}},{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}},{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}},{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}},{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}},{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}},{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}},{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}},{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}},{{8L,0L,8L,0L,8L,0L,8L,0L},{8L,0L,8L,0L,8L,0L,8L,0L}}};
                    int l_1532 = 2L;
                    int l_1534 = 0xD7E99C40L;
                    int l_1535 = 0x44EF77AAL;
                    int l_1537 = 0L;
                    int l_1538 = (-1L);
                    int l_1541 = (-6L);
                    int l_1542 = 0L;
                    int i, j, k;
                    ++l_1544;
                }
                (*l_1493) = func_37(l_1543, (*l_1432), p_3, p_3, l_1531);

                ;
                p_3 = (*l_1493);
            }
            if ((*p_3))
                continue;
        }
        else
        {
            for (g_140 = 8; (g_140 >= 0); g_140 -= 1)
            {
                int i;
                if (g_1462[g_140])
                    break;
                for (g_58 = 1; (g_58 >= 0); g_58 -= 1)
                {
                    return p_3;


                }
            }
            for (l_1337 = 0; (l_1337 <= 2); l_1337 += 1)
            {
                return p_3;


            }
        }
        for (g_379 = 10; (g_379 <= (-11)); g_379--)
        {
            long long l_1549 = (-3L);
            int l_1550 = 0L;
            int l_1551 = 0x19116590L;
            int l_1552 = 0L;
            int l_1554 = 0L;
            int l_1555 = 0L;
            int l_1556 = 0x5AC29F8DL;
            int l_1557[9] = {0xA90DD067L,0xA90DD067L,0xA90DD067L,0xA90DD067L,0xA90DD067L,0xA90DD067L,0xA90DD067L,0xA90DD067L,0xA90DD067L};
            unsigned char l_1558 = 0x4DL;
            int i;
            ++l_1558;
            if ((*p_3))
                continue;
            (*p_3) = (~((&l_1353[2][1][5] != (*g_1442)) >= (safe_rshift_func_int8_t_s_u(l_1551, 5))));
            if ((*p_3))
                continue;
        }
    }

    ;
    (*l_1493) = p_3;

    ;
    return p_3;


}







static int ** func_6(int p_7, int p_8, int p_9)
{
    unsigned long long l_1077[2];
    int l_1082[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int *l_1094 = &g_57[5][1][0];
    unsigned **l_1116[2];
    unsigned char ***l_1129[4][9] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_486,(void*)0,&g_148,&g_148,&g_148,(void*)0,&g_486,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_486,(void*)0,&g_148,&g_148,&g_148,(void*)0,&g_486,(void*)0}};
    int ****l_1131 = (void*)0;
    unsigned char l_1136 = 2UL;
    int *l_1140 = (void*)0;
    unsigned char ***l_1156 = &g_482[0];
    int **l_1158 = &g_804;
    int **l_1169 = &l_1094;
    int **l_1218 = &g_595;
    int **l_1219 = &l_1094;
    int **l_1220 = (void*)0;
    int i, j;
    for (i = 0; i < 2; i++)
        l_1077[i] = 18446744073709551615UL;
    for (i = 0; i < 2; i++)
        l_1116[i] = &g_494;
    for (g_244 = 0; (g_244 <= 7); g_244 += 1)
    {
        unsigned l_1075 = 1UL;
        int **l_1080 = &g_804;
        int **l_1090 = &g_595;
        int **l_1093[7][8] = {{&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595},{&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595,&g_595}};
        int *l_1095 = &g_5;
        int *l_1098[2];
        int **l_1099[3][7];
        int l_1100 = 3L;
        char l_1123 = 2L;
        int *l_1139 = (void*)0;
        unsigned **l_1145 = &g_1144;
        int **l_1161 = &l_1139;
        int **l_1170 = (void*)0;
        int **l_1215 = &l_1095;
        int **l_1217[1][3][9] = {{{&l_1139,&l_1139,&g_804,&l_1094,&g_804,&l_1139,&l_1139,&g_804,&l_1094},{&l_1094,&l_1095,&l_1094,&g_804,&g_804,&l_1094,&l_1095,&l_1094,&g_804},{(void*)0,&g_804,&g_804,(void*)0,&g_804,(void*)0,&g_804,&g_804,(void*)0}}};
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_1098[i] = &g_57[6][1][0];
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 7; j++)
                l_1099[i][j] = &l_1098[0];
        }
        for (g_72 = 0; (g_72 <= 7); g_72 += 1)
        {
            int *l_1072 = &g_58;
            char *l_1076[2];
            int ***l_1081 = &l_1080;
            long long l_1083 = (-1L);
            int *l_1084 = (void*)0;
            int *l_1085 = &g_5;
            unsigned char *l_1086 = &g_115[0];
            unsigned char *l_1087[3];
            int ***l_1091 = &l_1090;
            unsigned short *l_1092 = &g_217;
            int *l_1096[5][1][2];
            int **l_1097 = &l_1095;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_1076[i] = &g_634;
            for (i = 0; i < 3; i++)
                l_1087[i] = (void*)0;
            for (i = 0; i < 5; i++)
            {
                for (j = 0; j < 1; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1096[i][j][k] = &g_5;
                }
            }
            p_7 ^= ((*l_1072) = g_406[(g_72 + 1)][g_244]);
            (*l_1085) &= ((((0L & p_7) < ((*g_856) = (p_8 ^ ((l_1077[1] |= ((*l_1072) >= (safe_sub_func_int16_t_s_s((-1L), l_1075)))) <= ((*l_1072) & ((safe_add_func_int8_t_s_s(((+func_16(l_1080, (((g_406[(g_244 + 1)][g_72] = (l_1081 != (void*)0)) & l_1082[5]) != l_1075), (**l_1081), p_8)) != 65529UL), g_672)) && l_1083)))))) & 0x740567C4L) >= (-5L));
            (*l_1090) = (**l_1081);
        }
        l_1100 = 7L;
    }
    return l_1220;


}







static unsigned func_11(unsigned short p_12, long long p_13)
{
    int **l_939 = &g_804;
    unsigned **l_950[7][6][6] = {{{&g_494,&g_494,(void*)0,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,(void*)0,&g_494,&g_494},{(void*)0,&g_494,&g_494,&g_494,&g_494,(void*)0},{&g_494,&g_494,(void*)0,&g_494,(void*)0,&g_494},{(void*)0,&g_494,(void*)0,&g_494,&g_494,&g_494},{&g_494,(void*)0,&g_494,&g_494,&g_494,&g_494}},{{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,(void*)0,&g_494,(void*)0,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{(void*)0,&g_494,&g_494,(void*)0,&g_494,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494}},{{&g_494,&g_494,&g_494,(void*)0,&g_494,&g_494},{(void*)0,&g_494,&g_494,&g_494,(void*)0,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,(void*)0},{&g_494,&g_494,(void*)0,&g_494,&g_494,&g_494},{&g_494,(void*)0,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,(void*)0,&g_494,&g_494}},{{&g_494,(void*)0,&g_494,(void*)0,(void*)0,&g_494},{&g_494,&g_494,(void*)0,&g_494,(void*)0,(void*)0},{(void*)0,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,(void*)0},{(void*)0,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494}},{{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,(void*)0,(void*)0,&g_494},{&g_494,&g_494,(void*)0,(void*)0,&g_494,(void*)0},{&g_494,&g_494,&g_494,&g_494,(void*)0,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,&g_494,(void*)0,&g_494}},{{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,(void*)0,&g_494,(void*)0},{&g_494,&g_494,&g_494,(void*)0,(void*)0,&g_494},{&g_494,&g_494,(void*)0,&g_494,(void*)0,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,(void*)0},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494}},{{(void*)0,&g_494,(void*)0,(void*)0,(void*)0,&g_494},{(void*)0,(void*)0,&g_494,&g_494,&g_494,&g_494},{(void*)0,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,(void*)0,&g_494,&g_494}}};
    int l_994[2];
    short l_998[4][1];
    int *l_999 = &l_994[1];
    int *l_1001[3][9] = {{&l_994[1],&g_57[5][1][0],&l_994[1],&l_994[1],&g_5,&g_5,&l_994[1],&l_994[1],&g_57[5][1][0]},{&l_994[1],&g_57[5][1][0],&l_994[1],&l_994[1],&g_5,&g_5,&l_994[1],&l_994[1],&g_57[5][1][0]},{&l_994[1],&g_57[5][1][0],&l_994[1],&l_994[1],&g_5,&g_5,&l_994[1],&l_994[1],&g_57[5][1][0]}};
    unsigned l_1002 = 4294967291UL;
    unsigned l_1005[10];
    unsigned long long l_1062 = 0xA0A9AD289061BCD9LL;
    int l_1071 = 0x8FA7256EL;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_994[i] = 0x7E05324EL;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_998[i][j] = 0x7C75L;
    }
    for (i = 0; i < 10; i++)
        l_1005[i] = 1UL;
    for (g_543 = 0; (g_543 <= 3); g_543 += 1)
    {
        unsigned l_940 = 1UL;
        int **l_941 = (void*)0;
        int *l_947[1][10][9] = {{{(void*)0,&g_57[1][2][0],&g_57[5][1][0],&g_207,&g_57[5][0][0],&g_207,&g_5,&g_57[5][1][0],&g_5},{&g_207,&g_57[5][1][0],&g_207,&g_207,&g_57[5][1][0],&g_207,&g_57[0][1][0],&g_207,&g_57[8][1][0]},{&g_207,&g_207,(void*)0,&g_58,&g_57[4][1][0],&g_207,(void*)0,&g_5,(void*)0},{(void*)0,(void*)0,(void*)0,&g_57[5][1][0],&g_58,(void*)0,&g_57[0][1][0],&g_57[1][2][0],&g_5},{&g_57[1][2][0],&g_5,(void*)0,&g_57[5][1][0],&g_57[5][1][0],(void*)0,&g_5,&g_58,&g_57[5][1][0]},{&g_57[0][1][0],(void*)0,&g_207,&g_57[5][1][0],&g_58,&g_207,&g_57[5][1][0],(void*)0,&g_58},{&g_58,&g_58,&g_57[4][1][0],&g_5,&g_57[5][1][0],(void*)0,&g_58,&g_58,&g_57[5][1][0]},{&g_57[8][1][0],(void*)0,&g_57[4][1][0],&g_57[0][1][0],&g_58,&g_58,&g_57[0][1][0],&g_57[4][1][0],(void*)0},{&g_57[8][1][0],&g_57[5][1][0],&g_58,&g_58,(void*)0,&g_57[5][1][0],&g_5,&g_57[4][1][0],&g_58},{&g_58,&g_58,(void*)0,&g_57[5][1][0],&g_207,&g_58,&g_57[5][1][0],&g_207,(void*)0}}};
        unsigned **l_949[4][9] = {{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{(void*)0,&g_494,(void*)0,&g_494,(void*)0,&g_494,(void*)0,&g_494,(void*)0},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494},{&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494,&g_494}};
        int i, j, k;
    }
    l_1002--;
    ++l_1005[3];
    for (g_624 = 0; (g_624 > 22); g_624 = safe_add_func_uint8_t_u_u(g_624, 2))
    {
        unsigned short l_1012 = 0x2BC0L;
        unsigned char *l_1013[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int l_1014[5] = {(-3L),(-3L),(-3L),(-3L),(-3L)};
        char *l_1015 = &g_379;
        int l_1016 = 4L;
        unsigned *l_1037 = (void*)0;
        int **l_1045[1][6] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
        int l_1059 = 0x1ECE16EEL;
        unsigned char l_1069 = 0xC4L;
        unsigned long long l_1070 = 6UL;
        int i, j;
        if ((((safe_mod_func_int8_t_s_s(((*l_1015) &= (((l_1014[0] = l_1012) | ((void*)0 == &g_494)) ^ ((~p_12) ^ p_13))), 0x8FL)) == (**g_399)) != func_16(&l_1001[1][5], (l_1016 = l_1012), (*l_939), p_12)))
        {
            (*g_594) = (*g_594);
        }
        else
        {
            int **l_1017 = (void*)0;
            unsigned *l_1035 = &g_984;
            unsigned **l_1036 = &l_1035;
            char l_1046 = (-1L);
            (*l_999) = func_16(l_1017, ((((safe_mod_func_uint16_t_u_u((func_33(&l_1001[0][3], &l_1014[0], p_12) > p_12), p_12)) < p_12) <= p_13) != g_634), (*g_926), g_15);
            (*g_594) = (*l_939);
            l_1046 = (safe_lshift_func_uint8_t_u_s(g_1026, (safe_mod_func_int8_t_s_s(p_12, ((safe_add_func_uint8_t_u_u(((g_57[0][2][0] < g_206) == p_13), (((safe_sub_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u(((((*l_1036) = l_1035) != l_1037) <= p_13), (safe_mod_func_uint32_t_u_u(((**g_493) = (((safe_lshift_func_int8_t_s_s((safe_unary_minus_func_int64_t_s((safe_lshift_func_int8_t_s_u(func_16(l_1045[0][0], g_136, (*g_926), p_13), 7)))), p_13)) < p_13) < (*g_400))), 1UL)))) <= g_543), p_12)) || 0UL) | (*g_856)))) & p_13)))));
        }
        if (((safe_unary_minus_func_uint16_t_u(g_140)) & (*g_856)))
        {
            int *l_1048 = &g_5;
            (*g_926) = (*g_594);
            for (g_136 = 27; (g_136 >= (-7)); g_136 = safe_sub_func_int32_t_s_s(g_136, 8))
            {
                (*l_999) ^= (*l_1048);
            }
        }
        else
        {
            unsigned char l_1051 = 0x29L;
            (*l_999) ^= p_13;
            l_1051 |= (*l_999);
            for (g_216 = 0; (g_216 > (-19)); g_216 = safe_sub_func_int64_t_s_s(g_216, 9))
            {
                long long l_1056[10];
                int i;
                for (i = 0; i < 10; i++)
                    l_1056[i] = 0x1DE11BF325DF0480LL;
                for (g_672 = 17; (g_672 == 13); g_672 = safe_sub_func_uint64_t_u_u(g_672, 7))
                {
                    return l_1056[9];
                }
            }
        }
        l_1071 ^= (safe_lshift_func_int16_t_s_s(((**g_855) = p_13), ((l_1059 &= (*l_999)) >= (p_12 ^ ((safe_mod_func_uint16_t_u_u((l_1062 >= ((safe_add_func_uint64_t_u_u((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((l_1069 = (func_16(&l_1001[0][4], (p_12 == (&l_1013[6] == (*g_801))), (*l_939), g_115[1]) <= p_13)) | p_12) || (*g_494)), p_12)), 12)), p_13)) || l_1070)), (*l_999))) > p_13)))));
    }
    return p_12;
}







static long long func_16(int ** p_17, char p_18, int * p_19, char p_20)
{
    long long l_934 = 0xAF284CE60C2746FALL;
    (*g_926) = p_19;
    return l_934;
}







static int ** func_21(int * p_22, int * p_23, int p_24, int * p_25, unsigned long long p_26)
{
    int **l_824 = &g_595;
    int *l_825 = &g_207;
    unsigned *l_826 = &g_701;
    unsigned *l_827 = &g_446;
    short **l_848[2];
    int l_863 = 1L;
    int l_875[8] = {0L,0L,0L,0L,0L,0L,0L,0L};
    int *l_925 = &g_58;
    short l_932 = (-1L);
    int **l_933 = &g_804;
    int i;
    for (i = 0; i < 2; i++)
        l_848[i] = (void*)0;
    (*g_804) = (safe_lshift_func_int8_t_s_u(0xF4L, func_33(l_824, l_825, ((*l_827) = ((*l_826) &= p_24)))));
    if ((*l_825))
    {
        char l_828[2][10] = {{0xCBL,0xCBL,0xCEL,0x82L,0xCEL,0xCBL,0xCBL,0xCEL,0x82L,0xCEL},{0xCBL,0xCBL,0xCEL,0x82L,0xCEL,0xCBL,0xCBL,0xCEL,0x82L,0xCEL}};
        int i, j;
        (*g_804) = l_828[0][7];
        (*l_825) = l_828[1][6];
    }
    else
    {
        long long l_835[3][7][4] = {{{0xF37AC773D0DB2751LL,1L,(-1L),0x9562B0DF4D76AE98LL},{2L,(-9L),0xB5E4BACD73EB378FLL,1L},{0x778EA01DDDE8E656LL,0xF37AC773D0DB2751LL,0xD539842F23C5DB62LL,0xF37AC773D0DB2751LL},{(-9L),(-1L),(-1L),0x5E1C65E7B9BD34D5LL},{0x385E0694800B6EE6LL,0x0120BB91B8F294D6LL,(-1L),0x385E0694800B6EE6LL},{0x0120BB91B8F294D6LL,0xF37AC773D0DB2751LL,0x9DCDFB6C898642C2LL,0x778EA01DDDE8E656LL},{0x0120BB91B8F294D6LL,2L,(-1L),0x9562B0DF4D76AE98LL}},{{0x385E0694800B6EE6LL,0x778EA01DDDE8E656LL,(-1L),(-1L)},{(-9L),(-9L),0xD539842F23C5DB62LL,0x778EA01DDDE8E656LL},{0x778EA01DDDE8E656LL,0x385E0694800B6EE6LL,0xB5E4BACD73EB378FLL,0xF37AC773D0DB2751LL},{2L,0x0120BB91B8F294D6LL,(-1L),0xB5E4BACD73EB378FLL},{0xF37AC773D0DB2751LL,0x0120BB91B8F294D6LL,0L,0xF37AC773D0DB2751LL},{0x0120BB91B8F294D6LL,0x385E0694800B6EE6LL,2L,0x778EA01DDDE8E656LL},{(-1L),(-9L),(-1L),(-1L)}},{{0xF37AC773D0DB2751LL,0x778EA01DDDE8E656LL,0x5A84F2E1988043A5LL,0x9562B0DF4D76AE98LL},{0x385E0694800B6EE6LL,0x47E0B0822E3AEC0ELL,1L,0xB5E4BACD73EB378FLL},{0xD539842F23C5DB62LL,1L,1L,0xB3F126A04EDE3AB9LL},{0x385E0694800B6EE6LL,(-1L),(-9L),(-1L)},{1L,0x5A84F2E1988043A5LL,0x5A84F2E1988043A5LL,1L},{0x5A84F2E1988043A5LL,1L,0x47E0B0822E3AEC0ELL,0xD539842F23C5DB62LL},{(-1L),0x385E0694800B6EE6LL,0x9562B0DF4D76AE98LL,2L}}};
        long long *l_836[8][9] = {{&g_72,&g_412,&g_412,&g_72,&g_412,&g_412,&g_72,&g_412,&g_412},{&g_72,&g_412,&g_412,&g_72,&g_412,&g_412,&g_72,&g_412,&g_412},{&g_72,&g_412,&g_412,&g_72,&g_412,&g_412,&g_72,&g_412,&g_412},{&g_72,&g_412,&g_412,&g_72,&g_412,&g_412,&g_72,&g_412,&g_412},{&g_72,&g_412,&g_412,&g_72,&g_412,&g_412,&g_72,&g_412,&g_412},{&g_72,&g_412,&g_412,&g_72,&g_412,&g_412,&g_72,&g_412,&g_412},{&g_72,&g_412,&g_412,&g_72,&g_412,&g_412,&g_72,&g_412,&g_412},{&g_72,&g_412,&g_412,&g_72,&g_412,&g_412,&g_72,&g_412,&g_412}};
        int l_837 = (-10L);
        int *l_838 = &g_58;
        long long l_854 = 0x02CC986632ED0452LL;
        short **l_857 = &g_856;
        unsigned long long l_876 = 1UL;
        int l_928 = 1L;
        int i, j, k;
        (*l_838) |= (safe_sub_func_int32_t_s_s((+((p_24 != p_24) != 18446744073709551608UL)), (((safe_sub_func_uint16_t_u_u(((!(l_837 = (1L < ((*l_825) == (250UL && (((*l_825) <= ((*g_804) ^ (safe_sub_func_int16_t_s_s(p_26, l_835[0][0][2])))) & g_57[5][1][0])))))) | 0x89129D66347F1F28LL), g_57[5][1][0])) == 255UL) > g_5)));
        for (g_634 = 0; g_634 < 3; g_634 += 1)
        {
            g_482[g_634] = &g_149;
        }
        for (g_206 = 0; (g_206 <= 2); g_206 += 1)
        {
            int **l_839 = (void*)0;
            int i;
            (*l_838) = g_115[g_206];
            (*l_825) = 0x1DB5A0D5L;
            return l_839;


        }
        for (g_624 = 0; (g_624 <= 0); g_624 += 1)
        {
            int **l_844 = &l_838;
            int l_862[5] = {(-1L),(-1L),(-1L),(-1L),(-1L)};
            int l_886 = 0L;
            int i;
            (*l_825) &= (-1L);
            for (p_24 = 9; (p_24 >= 1); p_24 -= 1)
            {
                int **l_840 = &g_595;
                (*l_824) = p_25;

                ;
                return l_840;


            }
            (*g_594) = p_22;
            for (g_140 = 0; (g_140 <= 0); g_140 += 1)
            {
                int **l_845 = (void*)0;
                unsigned long long l_849 = 0xA28A7F4F74E7331DLL;
                int *l_864 = (void*)0;
                int *l_865 = &l_862[0];
                int *l_866 = &l_862[4];
                int l_867 = 1L;
                int *l_868 = &l_862[1];
                int *l_869 = &l_837;
                int *l_870 = &l_863;
                int *l_871 = &l_867;
                int *l_872 = &l_867;
                int *l_873 = &g_58;
                int *l_874[6][2][9] = {{{&l_837,&g_58,&l_867,&g_207,&g_5,&l_867,&l_862[2],&l_862[1],&l_863},{&g_58,&l_867,&l_837,(void*)0,(void*)0,&l_837,&l_867,&g_58,&g_5}},{{&l_862[1],&l_862[2],&l_867,&g_5,&g_207,&l_867,&g_58,&l_837,&l_863},{(void*)0,&g_57[3][0][0],&l_837,(void*)0,(void*)0,&l_837,&l_862[1],&l_863,&g_5}},{{&g_58,&l_837,&l_867,&g_58,&g_58,&l_867,&l_837,&g_58,&l_863},{&l_863,&l_862[1],&l_837,(void*)0,(void*)0,&l_837,&g_57[3][0][0],(void*)0,&g_5}},{{&l_837,&g_58,&l_867,&g_207,&g_5,&l_867,&l_862[2],&l_862[1],&l_863},{&g_58,&l_867,&l_837,(void*)0,(void*)0,&l_837,&l_867,&g_58,&g_5}},{{&l_862[1],&l_862[2],&l_867,&g_5,&g_207,&l_867,&g_58,&l_837,&l_863},{(void*)0,&g_57[3][0][0],&l_837,(void*)0,(void*)0,&l_837,&l_862[1],&l_863,&g_57[3][0][0]}},{{(void*)0,&g_58,&l_862[2],&l_863,&l_863,&l_862[2],&g_58,(void*)0,&g_58},{&l_863,&g_57[6][2][0],&l_862[1],&l_837,(void*)0,&l_862[1],&l_863,&g_57[1][0][0],&g_57[3][0][0]}}};
                long long l_901 = 0L;
                int **l_927 = &l_868;
                int i, j, k;
                (*g_804) ^= (safe_add_func_int32_t_s_s(((*l_825) |= 0x66FC6CA7L), 9UL));
                if ((*p_23))
                {
                    int **l_843 = &l_838;
                    return l_845;


                }
                else
                {
                    unsigned short *l_858 = (void*)0;
                    unsigned short *l_859 = (void*)0;
                    l_854 |= ((*l_838) && (safe_sub_func_uint16_t_u_u((((*g_494) = 0x9A54C5A4L) < ((**l_844) | ((((l_849 &= ((void*)0 != l_848[1])) ^ (safe_rshift_func_uint16_t_u_s(p_26, (g_136 = ((safe_rshift_func_uint16_t_u_u(((g_215 = g_701) && p_24), (p_24 & g_5))) || p_24))))) >= (-3L)) != 0x13L))), g_5)));
                    (**l_844) = ((*g_400) < ((g_855 == l_857) <= ((((void*)0 != &g_493) < (g_217 &= ((-1L) && p_26))) == (safe_sub_func_uint16_t_u_u(0x337CL, 5UL)))));
                }
                l_876--;
                for (l_849 = 0; (l_849 <= 0); l_849 += 1)
                {
                    int l_885 = (-1L);
                    char *l_899 = &g_216;
                    char *l_900[8][6];
                    unsigned short l_929 = 65535UL;
                    int i, j, k;
                    for (i = 0; i < 8; i++)
                    {
                        for (j = 0; j < 6; j++)
                            l_900[i][j] = &g_379;
                    }
                }
            }
        }
    }
    (**g_926) = ((*l_825) = l_932);
    return l_933;


}







static int * func_27(unsigned char p_28, int * p_29, int ** p_30, int * p_31, int ** p_32)
{
    unsigned **l_596 = &g_494;
    long long **l_607 = (void*)0;
    int *l_610 = &g_57[5][1][0];
    int l_625 = 0x432787C3L;
    int l_626[6] = {0L,0L,0x4B7AB808L,0L,0L,0x4B7AB808L};
    unsigned short *l_651 = &g_244;
    unsigned short **l_650 = &l_651;
    unsigned short l_722 = 0xBCF2L;
    int ***l_727 = &g_594;
    unsigned l_745 = 1UL;
    int *l_771 = &g_207;
    unsigned long long ****l_816 = &g_398;
    int *l_817 = &g_140;
    int *l_820 = &g_140;
    int **l_819 = &l_820;
    int i;
    if ((l_596 != (void*)0))
    {
        unsigned short l_597[10] = {1UL,1UL,2UL,0xF02EL,2UL,1UL,1UL,2UL,0xF02EL,2UL};
        unsigned *l_604 = (void*)0;
        int l_627[3];
        short l_668 = 0x6313L;
        unsigned char ***l_738 = (void*)0;
        long long l_740 = 2L;
        int *l_741[6][8] = {{(void*)0,&g_58,&l_626[0],(void*)0,&l_626[3],&l_626[3],(void*)0,&l_626[0]},{&g_5,&g_5,&g_57[8][0][0],&g_57[8][1][0],(void*)0,&g_57[8][0][0],(void*)0,&g_57[8][1][0]},{&l_626[0],&g_57[8][1][0],&l_626[0],&l_626[3],&g_57[8][1][0],&g_58,&g_58,&g_57[8][1][0]},{&g_57[8][1][0],&g_58,&g_58,&g_57[8][1][0],&l_626[3],&l_626[0],&g_57[8][1][0],&l_626[0]},{&g_57[8][1][0],(void*)0,&g_57[8][0][0],(void*)0,&g_57[8][1][0],&g_57[8][0][0],&g_5,&g_5},{&l_626[0],(void*)0,&l_626[3],&l_626[3],(void*)0,&l_626[0],&g_58,(void*)0}};
        int *l_742 = (void*)0;
        unsigned l_750 = 0x32635803L;
        int *l_806 = (void*)0;
        int i, j;
        for (i = 0; i < 3; i++)
            l_627[i] = (-1L);
        --l_597[7];
        for (g_215 = 0; (g_215 == 15); g_215++)
        {
            int l_608 = (-3L);
            int *l_609 = (void*)0;
            unsigned short l_628[2];
            int l_661 = 0xA3196898L;
            int l_662 = 0L;
            int l_663 = 0xF43F4CA4L;
            int l_665 = (-4L);
            int l_666 = 0x2D0E900BL;
            int l_667[2][2][5];
            int l_671 = 0x933FBE8EL;
            long long *l_732 = &g_72;
            long long *l_734 = (void*)0;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_628[i] = 6UL;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 5; k++)
                        l_667[i][j][k] = 0L;
                }
            }
        }
        if ((*p_29))
        {
            int *l_753 = &l_627[1];
            int l_779[10][4][6] = {{{0x0F76E696L,0xD0C25E3EL,0L,(-9L),0L,0xD0C25E3EL},{0x6BA243ACL,0xD0C25E3EL,1L,(-9L),0L,0xD3B93165L},{0x89AA5E2CL,(-5L),1L,(-9L),0L,0xD3B93165L},{0x6BA243ACL,(-5L),0L,(-9L),0L,(-5L)}},{{0x89AA5E2CL,(-5L),0L,0xFEC207C3L,0L,0xD0C25E3EL},{0x0F76E696L,(-5L),1L,(-9L),0L,0xD3B93165L},{0x6BA243ACL,(-5L),0L,(-9L),0L,(-5L)},{0x89AA5E2CL,(-5L),0L,0xFEC207C3L,0L,0xD0C25E3EL}},{{0x0F76E696L,(-5L),1L,(-9L),0L,0xD3B93165L},{0x6BA243ACL,(-5L),0L,(-9L),0L,(-5L)},{0x89AA5E2CL,(-5L),0L,0xFEC207C3L,0L,0xD0C25E3EL},{0x0F76E696L,(-5L),1L,(-9L),0L,0xD3B93165L}},{{0x6BA243ACL,(-5L),0L,(-9L),0L,(-5L)},{0x89AA5E2CL,(-5L),0L,0xFEC207C3L,0L,0xD0C25E3EL},{0x0F76E696L,(-5L),1L,(-9L),0L,0xD3B93165L},{0x6BA243ACL,(-5L),0L,(-9L),0L,(-5L)}},{{0x89AA5E2CL,(-5L),0L,0xFEC207C3L,0L,0xD0C25E3EL},{0x0F76E696L,(-5L),1L,(-9L),0L,0xD3B93165L},{1L,(-2L),(-1L),(-5L),(-1L),(-2L)},{0L,(-2L),0x02DEAF17L,0xD3B93165L,(-1L),0L}},{{0L,(-2L),0x8EF49CEFL,0xD0C25E3EL,(-1L),1L},{1L,(-2L),(-1L),(-5L),(-1L),(-2L)},{0L,(-2L),0x02DEAF17L,0xD3B93165L,(-1L),0L},{0L,(-2L),0x8EF49CEFL,0xD0C25E3EL,(-1L),1L}},{{1L,(-2L),(-1L),(-5L),(-1L),(-2L)},{0L,(-2L),0x02DEAF17L,0xD3B93165L,(-1L),0L},{0L,(-2L),0x8EF49CEFL,0xD0C25E3EL,(-1L),1L},{1L,(-2L),(-1L),(-5L),(-1L),(-2L)}},{{0L,(-2L),0x02DEAF17L,0xD3B93165L,(-1L),0L},{0L,(-2L),0x8EF49CEFL,0xD0C25E3EL,(-1L),1L},{1L,(-2L),(-1L),(-5L),(-1L),(-2L)},{0L,(-2L),0x02DEAF17L,0xD3B93165L,(-1L),0L}},{{0L,(-2L),0x8EF49CEFL,0xD0C25E3EL,(-1L),1L},{1L,(-2L),(-1L),(-5L),(-1L),(-2L)},{0L,1L,(-1L),0xD0C25E3EL,0x8EF49CEFL,(-2L)},{1L,1L,0x02DEAF17L,(-5L),0x8EF49CEFL,0L}},{{0L,1L,0x8EF49CEFL,0xD3B93165L,0x8EF49CEFL,1L},{0L,1L,(-1L),0xD0C25E3EL,0x8EF49CEFL,(-2L)},{1L,1L,0x02DEAF17L,(-5L),0x8EF49CEFL,0L},{0L,1L,0x8EF49CEFL,0xD3B93165L,0x8EF49CEFL,1L}}};
            unsigned short *l_802[10] = {&g_543,&l_597[7],&l_597[7],&g_543,&l_597[5],&g_543,&l_597[7],&l_597[7],&g_543,&l_597[5]};
            int i, j, k;
            (*l_610) ^= (-1L);
            for (l_722 = 0; (l_722 > 53); ++l_722)
            {
                int **l_754 = &l_753;
                int l_755[4][3] = {{0x751297AFL,0L,0x751297AFL},{0x751297AFL,0L,0x751297AFL},{0x751297AFL,0L,0x751297AFL},{0x751297AFL,0L,0x751297AFL}};
                int *l_785 = (void*)0;
                char l_787 = (-1L);
                int i, j;
                (*l_754) = ((*g_594) = l_753);

                ;
            }


            (**l_727) = (*p_30);

            ;
            (**l_727) = (*p_32);


        }
        else
        {
            (*l_771) = (*p_29);
        }


        for (g_543 = 0; (g_543 <= 3); g_543 += 1)
        {
            int l_813 = 1L;
            for (l_722 = 0; (l_722 <= 3); l_722 += 1)
            {
                int *l_812 = &g_207;
                (**l_727) = l_812;

                ;
                (*g_594) = (void*)0;

                ;
            }
            (*g_804) = l_813;
            (*l_771) = (!(g_379 <= 1UL));
        }
    }
    else
    {
        return (*g_594);


    }


    (*l_771) = (safe_sub_func_int32_t_s_s(((l_816 = l_816) != &g_398), ((g_818 = l_817) == ((*l_819) = &g_140))));

    ;
    return (*p_32);


}







static unsigned char func_33(int ** p_34, int * p_35, unsigned p_36)
{
    int *l_489 = &g_57[3][2][0];
    int l_492 = 1L;
    int *l_501 = &l_492;
    unsigned char ***l_517[4];
    int l_525 = 0x652ED03CL;
    int l_538 = 0x525ABDCFL;
    int l_540 = 0x16A9EE47L;
    int l_541[7] = {0xFB19B19FL,0xFB19B19FL,0xFB19B19FL,0xFB19B19FL,0xFB19B19FL,0xFB19B19FL,0xFB19B19FL};
    int l_542 = 7L;
    unsigned long long l_563 = 0x7F9D838FD93B617CLL;
    int *l_583 = &g_58;
    int *l_584 = (void*)0;
    int *l_585 = &l_538;
    int *l_586[9][3] = {{(void*)0,(void*)0,(void*)0},{&g_58,&g_58,&g_58},{(void*)0,(void*)0,(void*)0},{&g_58,&g_58,&g_58},{(void*)0,(void*)0,(void*)0},{&g_58,&g_58,&g_58},{(void*)0,(void*)0,(void*)0},{&g_58,&g_58,&g_58},{(void*)0,(void*)0,(void*)0}};
    char l_587 = 0x18L;
    long long l_588[1][6][5] = {{{(-1L),0x14F9ADC387572F22LL,0x1C4A3499ACF876A2LL,(-9L),(-9L)},{0L,(-8L),0L,(-1L),(-9L)},{0x63939F0ACAF0C654LL,(-1L),0L,(-9L),(-1L)},{0x63939F0ACAF0C654LL,(-8L),0xC2F03A7BE8C1B016LL,(-9L),(-9L)},{0L,(-8L),0L,(-1L),(-9L)},{0x63939F0ACAF0C654LL,(-1L),0L,(-9L),(-1L)}}};
    long long l_589 = (-1L);
    unsigned short l_590 = 0x8702L;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_517[i] = (void*)0;
    (*l_489) = (*p_35);
    if ((((*g_400) && (safe_mod_func_uint64_t_u_u(((l_492 = ((*l_489) ^= (*p_35))) >= (*p_35)), (*g_400)))) != ((***g_398) >= p_36)))
    {
        unsigned ***l_495[7][2] = {{(void*)0,&g_493},{&g_493,&g_493},{&g_493,&g_493},{&g_493,(void*)0},{&g_493,&g_493},{&g_493,&g_493},{&g_493,&g_493}};
        int l_499 = (-2L);
        unsigned l_500 = 0xB613C336L;
        int i, j;
        g_493 = g_493;
        for (g_215 = (-18); (g_215 >= (-7)); g_215 = safe_add_func_int16_t_s_s(g_215, 2))
        {
            char *l_498 = &g_379;
            (*l_489) ^= (&l_489 == &p_35);
            (*l_489) |= (((*l_498) &= 0xF4L) == p_36);
        }
        (*l_489) = ((l_499 ^ ((**g_493) & (l_500 < p_36))) >= (*l_489));
    }
    else
    {
        int **l_502 = &l_501;
        int l_526[4][8];
        unsigned short l_576[4][9][7];
        int *l_581 = &l_542;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 8; j++)
                l_526[i][j] = 0xE25DE7DFL;
        }
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 9; j++)
            {
                for (k = 0; k < 7; k++)
                    l_576[i][j][k] = 0x95C8L;
            }
        }
        (*l_502) = l_501;
        (*l_502) = (*l_502);
        for (g_446 = 0; (g_446 < 41); g_446 = safe_add_func_int32_t_s_s(g_446, 6))
        {
            unsigned l_505[5] = {18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL,18446744073709551607UL};
            int l_522 = 1L;
            int l_529[8];
            int i;
            for (i = 0; i < 8; i++)
                l_529[i] = 0x3531FBCEL;
            for (g_412 = 0; (g_412 >= 0); g_412 -= 1)
            {
                unsigned char l_512 = 0x90L;
                int ***l_523 = (void*)0;
                int l_527 = 0x4104A701L;
                int l_528 = 0L;
                int l_530 = 0x84378FD0L;
                int l_532 = 1L;
                int l_533 = 0xA1F9E1F1L;
                int l_534 = (-1L);
                int l_536 = 0x38169EABL;
                int l_537 = 0x13207F95L;
                int l_539[9] = {2L,2L,2L,2L,2L,2L,2L,2L,2L};
                int *l_559 = (void*)0;
                int *l_560 = (void*)0;
                int *l_561 = &g_58;
                int *l_562[9][6] = {{&l_529[2],&l_526[2][0],&l_541[6],&l_526[2][0],&l_529[2],&l_540},{(void*)0,&l_540,&l_534,&l_539[3],&l_526[2][0],&l_533},{&l_533,&l_534,&l_540,&l_540,&l_534,&l_533},{&l_539[3],(void*)0,&l_534,&l_529[2],&l_533,&l_540},{&l_534,(void*)0,&l_541[6],&l_533,&l_541[6],(void*)0},{&l_534,&l_540,&l_533,&l_529[2],&l_534,(void*)0},{&l_539[3],&l_533,&l_534,&l_540,(void*)0,&l_540},{&l_541[6],&l_541[6],&l_525,&l_540,&l_533,(void*)0},{&l_529[2],&l_540,&l_539[3],&l_525,&l_526[2][0],&l_525}};
                int i, j;
                l_505[1]--;
                for (g_136 = 0; (g_136 <= 0); g_136 += 1)
                {
                    unsigned char ***l_519 = (void*)0;
                    unsigned char ****l_518 = &l_519;
                    int ****l_524[4][8][4] = {{{&g_66[0][1],&g_66[0][1],&g_66[0][1],&l_523},{&g_66[3][1],&l_523,(void*)0,&l_523},{(void*)0,&l_523,&g_66[3][1],&l_523},{&g_66[0][1],&g_66[0][1],&g_66[0][1],&g_66[0][1]},{&g_66[0][1],(void*)0,&g_66[0][1],&l_523},{&g_66[0][1],&l_523,&g_66[0][1],&g_66[0][0]},{&g_66[0][1],&l_523,&g_66[3][1],&g_66[0][1]},{(void*)0,&g_66[2][2],(void*)0,&g_66[0][1]}},{{&g_66[3][1],&l_523,&g_66[0][1],&g_66[0][0]},{&g_66[0][1],&l_523,&g_66[0][1],&l_523},{&g_66[0][1],(void*)0,&g_66[0][1],&g_66[0][1]},{&g_66[0][1],&g_66[0][1],&g_66[0][1],&l_523},{&g_66[3][1],&l_523,(void*)0,&l_523},{(void*)0,&l_523,&g_66[3][1],&l_523},{&g_66[0][1],&g_66[0][1],&g_66[0][1],&g_66[0][1]},{&g_66[0][1],(void*)0,&g_66[0][1],&l_523}},{{&g_66[0][1],&l_523,&g_66[0][1],&g_66[0][0]},{&g_66[0][1],&l_523,&g_66[3][1],&g_66[0][1]},{(void*)0,&g_66[2][2],(void*)0,&g_66[0][1]},{&g_66[3][1],&l_523,&g_66[0][1],&g_66[0][0]},{&g_66[0][1],&l_523,(void*)0,&g_66[0][1]},{(void*)0,&l_523,(void*)0,&l_523},{&g_66[4][0],&g_66[2][2],&g_66[0][1],&g_66[0][1]},{&l_523,(void*)0,&g_66[3][1],(void*)0}},{{&g_66[3][1],(void*)0,&l_523,&g_66[0][1]},{&g_66[0][1],&g_66[2][2],&g_66[4][0],&l_523},{(void*)0,&l_523,(void*)0,&g_66[0][1]},{(void*)0,&g_66[0][1],&g_66[4][0],&l_523},{&g_66[0][1],&g_66[0][1],&l_523,&l_523},{&g_66[3][1],&g_66[0][1],&g_66[3][1],&l_523},{&l_523,&g_66[0][1],&g_66[0][1],&l_523},{&g_66[4][0],&g_66[0][1],(void*)0,&g_66[0][1]}}};
                    unsigned short *l_558[8][10][3] = {{{&g_217,(void*)0,&g_543},{&g_543,&g_244,&g_217},{&g_217,&g_543,&g_244},{&g_244,&g_244,&g_244},{&g_244,&g_543,&g_217},{(void*)0,&g_244,&g_543},{(void*)0,&g_217,(void*)0},{&g_543,&g_217,&g_217},{&g_217,&g_217,&g_244},{&g_543,&g_217,&g_543}},{{&g_543,&g_217,&g_543},{&g_244,&g_244,&g_543},{(void*)0,(void*)0,&g_543},{&g_543,&g_543,(void*)0},{&g_543,&g_244,&g_217},{&g_244,&g_543,(void*)0},{&g_244,&g_543,&g_217},{(void*)0,&g_244,(void*)0},{&g_543,&g_244,&g_543},{&g_217,&g_217,&g_244}},{{(void*)0,&g_217,&g_217},{&g_217,(void*)0,(void*)0},{&g_217,&g_543,&g_543},{&g_244,&g_244,&g_217},{&g_543,(void*)0,(void*)0},{&g_543,&g_244,&g_244},{&g_244,&g_217,&g_217},{&g_543,&g_543,&g_244},{(void*)0,&g_244,(void*)0},{&g_543,&g_543,&g_543}},{{&g_217,&g_217,&g_217},{&g_244,&g_244,(void*)0},{&g_217,(void*)0,&g_244},{&g_543,&g_244,(void*)0},{&g_217,&g_543,(void*)0},{&g_543,(void*)0,&g_244},{&g_543,&g_217,&g_543},{&g_244,&g_217,(void*)0},{&g_244,&g_244,&g_244},{(void*)0,&g_244,(void*)0}},{{(void*)0,&g_543,&g_244},{&g_543,&g_543,&g_543},{&g_217,&g_217,&g_217},{&g_543,&g_217,&g_543},{(void*)0,&g_244,&g_543},{(void*)0,&g_217,&g_217},{&g_244,&g_543,&g_217},{&g_244,&g_543,&g_217},{&g_217,&g_217,&g_244},{&g_543,&g_217,&g_543}},{{&g_217,&g_217,&g_244},{&g_244,(void*)0,&g_543},{&g_543,&g_543,&g_217},{(void*)0,&g_244,&g_543},{(void*)0,&g_217,&g_244},{&g_543,&g_244,&g_217},{(void*)0,(void*)0,&g_244},{&g_217,&g_543,&g_543},{&g_244,&g_244,&g_217},{&g_244,&g_543,&g_543}},{{&g_217,&g_244,&g_244},{&g_244,(void*)0,&g_543},{&g_543,&g_543,&g_244},{&g_543,(void*)0,&g_543},{(void*)0,&g_543,&g_543},{&g_543,&g_543,&g_543},{&g_244,&g_543,&g_217},{(void*)0,&g_217,(void*)0},{(void*)0,&g_244,&g_217},{&g_543,&g_543,&g_543}},{{&g_543,&g_244,(void*)0},{&g_244,&g_217,&g_217},{&g_244,&g_543,(void*)0},{&g_543,&g_543,(void*)0},{&g_543,&g_543,&g_217},{&g_543,(void*)0,(void*)0},{&g_217,&g_543,&g_244},{&g_543,(void*)0,&g_217},{&g_543,&g_244,&g_244},{&g_543,&g_543,&g_543}}};
                    int i, j, k;
                    if ((*p_35))
                        break;
                }
                l_563++;
                (*l_561) = (((**l_502) != p_36) & (~p_36));
            }
            (*l_502) = (*l_502);
        }
        if ((*p_35))
        {
            int *l_575 = (void*)0;
            char l_579 = 0xBDL;
            if ((g_5 | g_71))
            {
                (*l_489) = ((**l_502) = (safe_add_func_int32_t_s_s(((p_36 ^ (safe_rshift_func_uint8_t_u_s(0x0FL, 1))) != (safe_sub_func_uint8_t_u_u((g_115[1] >= (0xEEL == g_244)), p_36))), 8L)));
            }
            else
            {
                unsigned char ***l_573 = (void*)0;
                unsigned char ****l_572 = &l_573;
                int l_574 = 0x0296E589L;
                l_574 = (l_517[0] != ((*l_572) = (void*)0));
                p_35 = (*p_34);


                (*l_502) = l_575;

                ;
            }


            ;
            (*l_489) = (l_576[3][7][6] <= ((**g_399) | g_406[7][2]));
            for (g_543 = 0; (g_543 == 2); g_543 = safe_add_func_uint32_t_u_u(g_543, 2))
            {
                if ((*l_489))
                    break;
            }
            l_579 ^= (*l_489);
        }
        else
        {
            unsigned char l_580[2];
            int *l_582[5];
            int i;
            for (i = 0; i < 2; i++)
                l_580[i] = 0xDFL;
            for (i = 0; i < 5; i++)
                l_582[i] = &l_492;
            l_583 = func_37((((*l_501) == (&g_149 == &g_149)) & p_36), l_580[0], l_581, func_45(&l_492, &l_542, l_582[1]), p_36);

            ;
            (*l_581) = (*l_581);
        }


        ;
        ;
    }


    ;
    ;
    l_590--;
    return p_36;
}







static int * func_37(unsigned long long p_38, int p_39, int * p_40, int * p_41, unsigned long long p_42)
{
    unsigned long long l_432[5] = {1UL,1UL,1UL,1UL,1UL};
    int l_444 = 0x8C95CE6FL;
    int l_471 = 0xE22A4C5CL;
    int *l_478 = &g_58;
    unsigned char ***l_483 = (void*)0;
    unsigned char ***l_484 = &g_148;
    unsigned char **l_485 = (void*)0;
    int *l_487 = &g_58;
    int *l_488 = &g_5;
    int i;
    for (g_206 = 0; (g_206 <= 7); g_206 += 1)
    {
        int *l_428 = (void*)0;
        int **l_427[5][4][5] = {{{&l_428,&l_428,&l_428,&l_428,&l_428},{&l_428,&l_428,&l_428,&l_428,(void*)0},{&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,&l_428,&l_428,&l_428,(void*)0}},{{(void*)0,&l_428,&l_428,&l_428,&l_428},{&l_428,&l_428,&l_428,&l_428,&l_428},{&l_428,&l_428,&l_428,&l_428,&l_428},{&l_428,&l_428,&l_428,&l_428,&l_428}},{{&l_428,&l_428,&l_428,&l_428,(void*)0},{&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,&l_428,&l_428,&l_428,(void*)0},{(void*)0,&l_428,&l_428,&l_428,&l_428}},{{&l_428,&l_428,&l_428,&l_428,&l_428},{&l_428,&l_428,&l_428,&l_428,&l_428},{&l_428,&l_428,&l_428,&l_428,&l_428},{&l_428,&l_428,&l_428,&l_428,(void*)0}},{{&l_428,&l_428,&l_428,&l_428,&l_428},{(void*)0,&l_428,&l_428,&l_428,(void*)0},{&l_428,&l_428,(void*)0,&l_428,&l_428},{&l_428,&l_428,(void*)0,(void*)0,(void*)0}}};
        int i, j, k;
        p_41 = p_40;


        for (p_38 = 1; (p_38 <= 7); p_38 += 1)
        {
            unsigned short *l_430 = (void*)0;
            unsigned short **l_429 = &l_430;
            int l_431 = 0xF67B3170L;
            unsigned l_439[1];
            int l_473[4][10][5] = {{{1L,5L,0x5571C9B5L,0x86FC7848L,0L},{1L,0x2E6635BAL,(-4L),0xAF1E7FF3L,0xDE0AA0C5L},{0L,(-1L),0x4E5813E3L,0xE9BE778AL,1L},{(-1L),0xDC561DC1L,(-1L),(-1L),1L},{(-1L),0x2E6635BAL,0L,1L,5L},{0x799C4F63L,3L,0x52AFF1D8L,(-1L),0x4E5813E3L},{0xE9BE778AL,1L,0x7F23A8B8L,(-1L),(-6L)},{(-1L),0x86FC7848L,0xDE209735L,0xE06C80DBL,0x22A451C0L},{0xD6C9055AL,0x52AFF1D8L,0x06F94FD0L,0xE9BE778AL,0x1F9D273BL},{0xD6C9055AL,0xEF7B6F0DL,(-6L),0L,(-1L)}},{{(-1L),0xD6C9055AL,0x32013D97L,0L,0xF6093D61L},{0xE9BE778AL,0L,0L,0x2E6635BAL,(-3L)},{0x799C4F63L,0L,(-9L),0xF6093D61L,0x5886F7A7L},{(-1L),(-1L),(-1L),0x52AFF1D8L,0L},{(-1L),0x85DD982DL,0x06F94FD0L,1L,0x06F94FD0L},{0L,0L,0L,(-1L),0x5886F7A7L},{1L,(-1L),1L,(-1L),0xDF51DE63L},{(-1L),(-1L),(-2L),0x5886F7A7L,8L},{1L,(-1L),0x3DABA111L,(-6L),0x5886F7A7L},{0x06F94FD0L,0xD83A5027L,0xAF1E7FF3L,0xE06C80DBL,0xF6093D61L}},{{(-1L),(-1L),0xE06C80DBL,(-1L),(-1L)},{0x86FC7848L,0x5886F7A7L,0x7589B869L,(-6L),1L},{0x4E5813E3L,0xDE0AA0C5L,0xDE209735L,0xBF6E9B2BL,(-1L)},{0x22A451C0L,1L,0x1F9D273BL,0L,0x4E5813E3L},{(-2L),0xDF51DE63L,(-1L),(-1L),(-1L)},{0L,(-1L),(-1L),(-1L),(-6L)},{(-1L),(-2L),(-1L),1L,1L},{0L,0x2E6635BAL,(-1L),1L,0xD83A5027L},{(-2L),(-1L),0x1F9D273BL,0x7E4F4EF3L,0L},{(-1L),0x4E5813E3L,0xDE209735L,0x2E6635BAL,0x87DEB37FL}},{{2L,0xEF7B6F0DL,0x7589B869L,0xD83A5027L,(-1L)},{0x87DEB37FL,0L,0xE06C80DBL,0x02B613F6L,(-6L)},{0x799C4F63L,0xAF1E7FF3L,0xAF1E7FF3L,0x799C4F63L,0x6EFA47D0L},{0xDC561DC1L,0xEF7B6F0DL,0x3DABA111L,2L,(-2L)},{(-1L),(-2L),(-2L),3L,(-1L)},{0xF6093D61L,0L,0x52AFF1D8L,2L,(-2L)},{0L,0x32013D97L,0xDE0AA0C5L,0x06F94FD0L,0L},{0x38761B2BL,0xBF6E9B2BL,6L,(-1L),0x6EFA47D0L},{0x74C05E12L,(-10L),0x38761B2BL,0x02B613F6L,(-6L)},{0x1F9D273BL,0x74C05E12L,(-1L),0x32013D97L,1L}}};
            int *l_477 = &g_58;
            int i, j, k;
            for (i = 0; i < 1; i++)
                l_439[i] = 18446744073709551615UL;
            l_431 = (((*l_429) = &g_217) == &g_217);

            ;
            for (g_217 = 0; (g_217 <= 3); g_217 += 1)
            {
                int l_448 = 0L;
                for (g_136 = 9; (g_136 >= 3); g_136 -= 1)
                {
                    unsigned *l_445 = &g_202;
                    int i, j, k;
                    l_432[0]++;
                    if ((g_406[g_206][g_206] == (g_190[g_136] ^ ((**g_399) | (safe_add_func_int64_t_s_s(((*g_400) & (((*l_445) ^= ((safe_add_func_uint8_t_u_u(((l_439[0] ^ (((safe_mod_func_uint64_t_u_u(18446744073709551615UL, l_432[0])) < (l_431 &= p_38)) && (safe_sub_func_int16_t_s_s((l_444 || l_439[0]), g_207)))) || (*g_400)), l_444)) <= l_439[0])) || g_446)), 0UL))))))
                    {
                        return p_40;


                    }
                    else
                    {
                        unsigned short *l_447 = &g_244;
                        int l_449 = 6L;
                        l_448 |= (g_206 != ((*l_447) &= g_190[8]));
                        if (l_449)
                            continue;
                        l_448 = l_439[0];
                        return p_40;


                    }
                }
            }
            for (g_412 = 0; (g_412 <= 10); ++g_412)
            {
                unsigned char l_458 = 1UL;
                unsigned short ***l_459 = (void*)0;
                unsigned short ***l_460 = &l_429;
                unsigned short **l_461 = (void*)0;
                int l_472 = 0x29C6A404L;
                if (((safe_rshift_func_uint8_t_u_s(l_432[0], p_39)) > ((safe_mod_func_int64_t_s_s(p_38, (0x272F3396B99CAD95LL && l_458))) & ((((*l_460) = &l_430) != (l_461 = &l_430)) >= ((safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((**g_399), g_379)), g_57[5][1][0])) ^ 0L)))))
                {
                    unsigned l_470[4][1];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_470[i][j] = 0x64FDAB0BL;
                    }
                    for (l_431 = 0; (l_431 <= 28); ++l_431)
                    {
                        unsigned char l_474 = 0x61L;
                        l_471 = (g_115[1] < (l_458 <= (safe_mod_func_uint16_t_u_u(l_470[0][0], g_115[3]))));
                        l_474++;
                        if ((*p_41))
                            continue;
                    }
                    l_477 = p_41;


                }
                else
                {
                    return p_40;


                }


                ;
                p_40 = p_40;
            }


        }
        l_478 = p_41;


        for (l_471 = 0; l_471 < 9; l_471 += 1)
        {
            for (p_42 = 0; p_42 < 8; p_42 += 1)
            {
                g_406[l_471][p_42] = 1UL;
            }
        }
        for (g_379 = 1; (g_379 <= 7); g_379 += 1)
        {
            return p_40;


        }
    }



    if ((*l_478))
    {
        return p_40;


    }
    else
    {
        unsigned char l_479 = 0x60L;
        int *l_480 = (void*)0;
        int *l_481 = &l_471;
        (*l_481) = l_479;
    }
    (*l_487) = (((*l_484) = g_482[0]) != (g_486 = l_485));

    ;
    l_471 ^= (*l_478);
    return l_488;


}







static int * func_45(int * p_46, int * p_47, int * p_48)
{
    unsigned l_51 = 0xFE905687L;
    int **l_52 = (void*)0;
    int *l_53 = (void*)0;
    int l_54 = 5L;
    int l_97 = 0x54EFB199L;
    int l_98 = 0x11EA0A7BL;
    int l_99 = 1L;
    int l_101 = 0x23F436BBL;
    int l_102 = 0xAF5969A1L;
    int l_104 = (-1L);
    int l_105[5];
    short *l_135 = &g_136;
    unsigned short l_175 = 65527UL;
    unsigned char **l_259 = &g_149;
    long long l_335[9][8][2] = {{{6L,0x448941D9168A9AB6LL},{(-1L),0x9E24B9680D062E3FLL},{0x0B173ECBC252F9A1LL,(-1L)},{0L,(-1L)},{0x79F88768C0D64797LL,6L},{0x9829B50F9AFD8E8DLL,0x6E45787043C6D9DCLL},{0x6D652B31FE95C398LL,0xE4A1B07B8EB6C835LL},{0x9AFE9C2265672E6CLL,0x9829B50F9AFD8E8DLL}},{{(-2L),0L},{0xA31723C9A92FA40CLL,1L},{1L,(-9L)},{0xBBDDC900614DC574LL,0L},{6L,0xD7A7C54DCF59ACACLL},{0L,0xEB0AF3913260DEB7LL},{(-1L),0xEB0AF3913260DEB7LL},{0L,0xD7A7C54DCF59ACACLL}},{{6L,0L},{0xBBDDC900614DC574LL,(-9L)},{1L,1L},{0xA31723C9A92FA40CLL,0L},{(-2L),0x9829B50F9AFD8E8DLL},{0x9AFE9C2265672E6CLL,0xE4A1B07B8EB6C835LL},{0x6D652B31FE95C398LL,0x6E45787043C6D9DCLL},{0x9829B50F9AFD8E8DLL,6L}},{{0x79F88768C0D64797LL,(-1L)},{0L,(-1L)},{0x0B173ECBC252F9A1LL,0x9E24B9680D062E3FLL},{(-1L),0x448941D9168A9AB6LL},{6L,0x2C28FD2F0EB4EEB7LL},{0x7A04CEC2F5A4CBF8LL,(-2L)},{(-1L),0xA85D743792C8E864LL},{0x7AEF45D9D6F77139LL,0x0B173ECBC252F9A1LL}},{{0xBAB3FE876338F6B5LL,0x97D0C6E3FFF82DB6LL},{5L,0xE1C9996948250D47LL},{0L,0x858963A2B1A47F8BLL},{0xEB0AF3913260DEB7LL,0xE0762A8CECC0A781LL},{(-1L),0xBBDDC900614DC574LL},{0L,(-1L)},{0x9AFE9C2265672E6CLL,0L},{0L,0xE4A1B07B8EB6C835LL}},{{(-1L),0x3A21AEF406DD5FB5LL},{0L,(-1L)},{0xBAB3FE876338F6B5LL,0xBAB3FE876338F6B5LL},{0x97D0C6E3FFF82DB6LL,0L},{0L,(-1L)},{0xE0762A8CECC0A781LL,(-1L)},{0xE4A1B07B8EB6C835LL,0xE0762A8CECC0A781LL},{5L,0L}},{{5L,0xE0762A8CECC0A781LL},{0xE4A1B07B8EB6C835LL,(-1L)},{0xE0762A8CECC0A781LL,(-1L)},{0L,0L},{0x97D0C6E3FFF82DB6LL,0xBAB3FE876338F6B5LL},{0xBAB3FE876338F6B5LL,(-1L)},{0L,0x3A21AEF406DD5FB5LL},{(-1L),0xE4A1B07B8EB6C835LL}},{{0L,0L},{0x9AFE9C2265672E6CLL,0x6D652B31FE95C398LL},{0L,0xC5342BBD34E28977LL},{0x7A04CEC2F5A4CBF8LL,0xD7A7C54DCF59ACACLL},{0x2C28FD2F0EB4EEB7LL,0x032A5ECDE7762656LL},{0x48A583ADDD0F7235LL,5L},{(-1L),(-1L)},{0L,0x51B413F52B6F4586LL}},{{(-6L),(-2L)},{0x6D652B31FE95C398LL,0x448941D9168A9AB6LL},{0x79F88768C0D64797LL,0x858963A2B1A47F8BLL},{6L,0xEE42B8C058CFE0B4LL},{0x6E45787043C6D9DCLL,0x2A5D6B3D91697D37LL},{0x51B413F52B6F4586LL,0x97D0C6E3FFF82DB6LL},{0x9683E8645166269CLL,0x7A04CEC2F5A4CBF8LL},{0x017AC22A4986D508LL,6L}}};
    unsigned short l_342 = 65529UL;
    int *l_360 = &l_102;
    unsigned l_380 = 0xC24CFE45L;
    int *l_383[7] = {&l_105[2],(void*)0,&l_105[2],&l_105[2],(void*)0,&l_105[2],&l_105[2]};
    unsigned l_417 = 0x15129DA4L;
    int *l_425 = &l_104;
    int *l_426 = &l_105[2];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_105[i] = 1L;
    if ((g_5 <= ((safe_rshift_func_int8_t_s_s((((-2L) > ((0x76DF3E2EL ^ l_51) & l_51)) <= (((l_53 = p_47) == p_47) | l_54)), 3)) != (&p_48 == (void*)0))))
    {
        long long l_55[4][9] = {{0xBE618B2576953C53LL,(-4L),0xBE618B2576953C53LL,1L,0xBE618B2576953C53LL,(-4L),0xBE618B2576953C53LL,1L,0xBE618B2576953C53LL},{0L,5L,(-6L),(-6L),5L,0L,1L,1L,0L},{0x76568C0775DAE11CLL,1L,0x5DAAFE497D6A5839LL,1L,0x76568C0775DAE11CLL,1L,0x5DAAFE497D6A5839LL,1L,0x76568C0775DAE11CLL},{5L,(-6L),(-6L),5L,0L,1L,1L,0L,5L}};
        int *l_62 = &g_5;
        unsigned l_84 = 0xF2BE4639L;
        int l_93 = 0x9B7F1410L;
        int l_96[8][6][1] = {{{(-3L)},{0xFD8E0A4DL},{(-3L)},{(-1L)},{0xA7083D25L},{1L}},{{0x125455D9L},{0x5B2AB3A2L},{0L},{0x3683BAF0L},{0x3683BAF0L},{0L}},{{0x5B2AB3A2L},{0x125455D9L},{1L},{0xA7083D25L},{(-1L)},{(-3L)}},{{0xFD8E0A4DL},{(-3L)},{(-1L)},{0xA7083D25L},{1L},{0x125455D9L}},{{0x5B2AB3A2L},{0L},{0x3683BAF0L},{0x3683BAF0L},{0L},{0x5B2AB3A2L}},{{0x125455D9L},{1L},{0xA7083D25L},{(-1L)},{(-3L)},{0xFD8E0A4DL}},{{(-3L)},{(-1L)},{0xA7083D25L},{1L},{0x125455D9L},{0x5B2AB3A2L}},{{0L},{0x3683BAF0L},{0x3683BAF0L},{0L},{0x5B2AB3A2L},{0x125455D9L}}};
        unsigned char l_145[4][7] = {{0x40L,252UL,0x40L,0UL,0xC2L,0x86L,1UL},{0xA3L,1UL,0x86L,0UL,0x86L,1UL,0xA3L},{1UL,248UL,1UL,0xC2L,0xF2L,0x86L,0xF2L},{1UL,0xF2L,0xF2L,1UL,0x40L,5UL,0UL}};
        int ***l_238 = (void*)0;
        unsigned char ***l_257 = &g_148;
        int *l_258 = &l_105[1];
        int i, j, k;
        for (l_51 = 0; (l_51 <= 3); l_51 += 1)
        {
            int *l_69 = &g_57[5][1][0];
            int **l_87[3];
            short l_106[6];
            unsigned char *l_131 = &g_115[1];
            int i;
            for (i = 0; i < 3; i++)
                l_87[i] = &l_69;
            for (i = 0; i < 6; i++)
                l_106[i] = (-1L);
            for (l_54 = 3; (l_54 >= 0); l_54 -= 1)
            {
                int **l_56 = &l_53;
                int **l_63 = &l_62;
                (*l_56) = &g_5;

                ;
                if (l_55[0][5])
                {
                    int **l_60[9][4][6] = {{{&l_53,(void*)0,&l_53,&l_53,&l_53,&l_53},{(void*)0,&l_53,&l_53,(void*)0,(void*)0,&l_53},{(void*)0,(void*)0,&l_53,(void*)0,&l_53,&l_53},{(void*)0,&l_53,&l_53,&l_53,&l_53,&l_53}},{{(void*)0,(void*)0,&l_53,&l_53,(void*)0,&l_53},{(void*)0,&l_53,&l_53,(void*)0,&l_53,&l_53},{(void*)0,&l_53,&l_53,(void*)0,(void*)0,&l_53},{(void*)0,(void*)0,&l_53,(void*)0,&l_53,&l_53}},{{(void*)0,&l_53,&l_53,&l_53,&l_53,&l_53},{(void*)0,(void*)0,&l_53,&l_53,(void*)0,&l_53},{(void*)0,&l_53,&l_53,(void*)0,&l_53,&l_53},{(void*)0,&l_53,&l_53,(void*)0,(void*)0,&l_53}},{{(void*)0,(void*)0,&l_53,(void*)0,&l_53,&l_53},{(void*)0,&l_53,&l_53,&l_53,&l_53,&l_53},{(void*)0,(void*)0,&l_53,&l_53,(void*)0,&l_53},{(void*)0,&l_53,&l_53,(void*)0,&l_53,&l_53}},{{(void*)0,&l_53,&l_53,&l_53,&l_53,&l_53},{&l_53,&l_53,&l_53,&l_53,(void*)0,&l_53},{(void*)0,&l_53,(void*)0,&l_53,(void*)0,&l_53},{&l_53,&l_53,(void*)0,&l_53,&l_53,(void*)0}},{{(void*)0,(void*)0,(void*)0,&l_53,&l_53,&l_53},{&l_53,(void*)0,(void*)0,&l_53,&l_53,&l_53},{&l_53,&l_53,&l_53,&l_53,(void*)0,&l_53},{(void*)0,&l_53,(void*)0,&l_53,(void*)0,&l_53}},{{&l_53,&l_53,(void*)0,&l_53,&l_53,(void*)0},{(void*)0,(void*)0,(void*)0,&l_53,&l_53,&l_53},{&l_53,(void*)0,(void*)0,&l_53,&l_53,&l_53},{&l_53,&l_53,&l_53,&l_53,(void*)0,&l_53}},{{(void*)0,&l_53,(void*)0,&l_53,(void*)0,&l_53},{&l_53,&l_53,(void*)0,&l_53,&l_53,(void*)0},{(void*)0,(void*)0,(void*)0,&l_53,&l_53,&l_53},{&l_53,(void*)0,(void*)0,&l_53,&l_53,&l_53}},{{&l_53,&l_53,&l_53,&l_53,(void*)0,&l_53},{&l_53,&l_53,(void*)0,(void*)0,(void*)0,&l_53},{&l_53,(void*)0,&l_53,(void*)0,(void*)0,(void*)0},{&l_53,(void*)0,&l_53,&l_53,&l_53,&l_53}}};
                    int i, j, k;
                    if (g_5)
                        break;
                    for (g_57[5][1][0] = 0; (g_57[5][1][0] <= 3); g_57[5][1][0] += 1)
                    {
                        return p_48;


                    }
                    for (g_58 = 3; (g_58 >= 0); g_58 -= 1)
                    {
                        int *l_59 = &g_57[7][1][0];
                        (*l_59) |= (-2L);
                    }
                    for (g_58 = 0; (g_58 <= 0); g_58 += 1)
                    {
                        int ***l_61 = &l_56;
                        (*l_61) = l_60[7][3][5];
                    }

                    ;
                }
                else
                {
                    g_57[9][2][0] = (g_58 = g_58);
                    p_48 = &g_57[5][1][0];

                    ;
                    for (g_58 = 3; (g_58 >= 0); g_58 -= 1)
                    {
                        return l_62;


                    }
                }


                ;
                (*l_63) = p_47;


                return p_47;


            }
            for (g_58 = 0; (g_58 <= 3); g_58 += 1)
            {
                int *l_68 = &g_5;
                int l_81[8][2] = {{0xB8E2A662L,0xB20306C0L},{0xB8E2A662L,0xB8E2A662L},{0xB20306C0L,0xB8E2A662L},{0xB8E2A662L,0xB20306C0L},{0xB8E2A662L,0xB8E2A662L},{0xB20306C0L,0xB8E2A662L},{0xB8E2A662L,0xB20306C0L},{0xB8E2A662L,0xB8E2A662L}};
                long long l_144[8] = {0xE375E038BCB9B15BLL,0xE375E038BCB9B15BLL,0xE375E038BCB9B15BLL,0xE375E038BCB9B15BLL,0xE375E038BCB9B15BLL,0xE375E038BCB9B15BLL,0xE375E038BCB9B15BLL,0xE375E038BCB9B15BLL};
                unsigned char ***l_150 = &g_148;
                int i, j;
                g_57[5][0][0] &= (-9L);
            }
        }
        for (l_99 = 4; (l_99 >= 0); l_99 -= 1)
        {
            unsigned l_152 = 0UL;
            unsigned char **l_153 = (void*)0;
            unsigned l_168[4][3][6] = {{{18446744073709551615UL,0xC02D8466L,0x3ACA4A73L,0xA1092476L,18446744073709551608UL,18446744073709551615UL},{0UL,18446744073709551615UL,18446744073709551608UL,0xC02D8466L,18446744073709551615UL,18446744073709551615UL},{18446744073709551607UL,0x3ACA4A73L,0x3ACA4A73L,18446744073709551607UL,3UL,0xC02D8466L}},{{18446744073709551615UL,0x661FE9FDL,5UL,0x4788FA9AL,0x8B50A315L,18446744073709551608UL},{5UL,0UL,0x700E5FE5L,18446744073709551615UL,0x8B50A315L,18446744073709551615UL},{18446744073709551615UL,0x661FE9FDL,18446744073709551615UL,4UL,3UL,0UL}},{{0xC02D8466L,0x3ACA4A73L,0xA1092476L,18446744073709551608UL,18446744073709551615UL,3UL},{0x4788FA9AL,18446744073709551615UL,4UL,18446744073709551608UL,18446744073709551608UL,4UL},{0xC02D8466L,0xC02D8466L,0UL,0x3ACA4A73L,3UL,0x661FE9FDL}},{{0x661FE9FDL,5UL,0x4788FA9AL,0x8B50A315L,18446744073709551608UL,0UL},{18446744073709551607UL,0x661FE9FDL,0x4788FA9AL,18446744073709551615UL,0x4788FA9AL,0x661FE9FDL},{18446744073709551615UL,18446744073709551615UL,0UL,4UL,0x700E5FE5L,0x3ACA4A73L}}};
            int l_172 = (-1L);
            int l_173 = 1L;
            int l_174 = 0xBC22A8BAL;
            int l_185 = 1L;
            int l_186 = 7L;
            int l_187 = 0x9D47E159L;
            int l_189 = 0xFB3BCDCEL;
            unsigned short *l_200 = (void*)0;
            unsigned short *l_201[2][8][3] = {{{&l_175,&l_175,(void*)0},{(void*)0,(void*)0,&l_175},{&l_175,&l_175,&l_175},{&l_175,(void*)0,&l_175},{&l_175,&l_175,(void*)0},{&l_175,&l_175,&l_175},{(void*)0,&l_175,&l_175},{&l_175,&l_175,&l_175}},{{(void*)0,(void*)0,(void*)0},{&l_175,&l_175,&l_175},{&l_175,(void*)0,&l_175},{&l_175,&l_175,(void*)0},{&l_175,&l_175,&l_175},{(void*)0,&l_175,&l_175},{&l_175,&l_175,(void*)0},{(void*)0,(void*)0,&l_175}}};
            unsigned long long *l_205 = &g_206;
            unsigned char *l_210 = &l_145[3][0];
            int l_243 = 1L;
            int i, j, k;
            for (l_104 = 0; (l_104 <= 0); l_104 += 1)
            {
                int *l_151 = &l_102;
                unsigned char **l_154 = &g_149;
                unsigned char ***l_155 = &g_148;
                int i;
                (*l_151) |= l_105[l_99];
                (*l_151) = l_152;
                if ((l_153 != ((*l_155) = l_154)))
                {
                    if ((*l_62))
                        break;
                }
                else
                {
                    short l_165 = (-9L);
                    for (l_54 = 0; (l_54 >= 0); l_54 -= 1)
                    {
                        int **l_156 = (void*)0;
                        int **l_157 = &l_62;
                        unsigned char *l_164[4][4][10] = {{{&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3]},{&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6]},{&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3]},{&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3]}},{{&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6]},{&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3]},{&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3]},{&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6]}},{{&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3]},{&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3]},{&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6]},{&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3],&l_145[3][3],&l_145[3][0],&l_145[3][3]}},{{&l_145[0][6],&l_145[3][0],&l_145[3][0],&l_145[0][6],&l_145[3][0],&l_145[3][0],&l_145[0][6],&l_145[3][0],&l_145[3][0],&l_145[0][6]},{&l_145[3][0],&l_145[0][6],&l_145[3][0],&l_145[3][0],&l_145[0][6],&l_145[3][0],&l_145[3][0],&l_145[0][6],&l_145[3][0],&l_145[3][0]},{&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6],&l_145[0][6],&l_145[3][3],&l_145[0][6]},{&l_145[0][6],&l_145[3][0],&l_145[3][0],&l_145[0][6],&l_145[3][0],&l_145[3][0],&l_145[0][6],&l_145[3][0],&l_145[3][0],&l_145[0][6]}}};
                        int *l_166 = &l_93;
                        int *l_167 = &l_105[l_99];
                        int i, j, k;
                        (*l_157) = &l_96[(l_99 + 2)][(l_54 + 4)][l_104];

                        ;
                        l_151 = p_46;


                        (*l_166) ^= (((g_5 != (**l_157)) == ((safe_lshift_func_int16_t_s_s((safe_add_func_uint8_t_u_u((safe_sub_func_int16_t_s_s(((((l_152 ^ 0x66L) | 0UL) <= l_105[l_99]) || (((l_164[3][0][5] != &l_145[3][3]) ^ g_57[5][1][0]) >= g_136)), 0L)), l_165)), g_136)) == 0UL)) == 0x54C1739F86B6F2C5LL);
                        --l_168[1][0][3];
                    }


                }


            }
            for (l_104 = 0; (l_104 <= 0); l_104 += 1)
            {
                int *l_171[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_171[i] = (void*)0;
                for (l_152 = 0; (l_152 <= 3); l_152 += 1)
                {
                    for (l_97 = 0; l_97 < 4; l_97 += 1)
                    {
                        for (l_93 = 0; l_93 < 9; l_93 += 1)
                        {
                            l_55[l_97][l_93] = 0x9EC0072ACF4FC5EFLL;
                        }
                    }
                }
                l_175--;
                for (l_84 = 1; (l_84 <= 4); l_84 += 1)
                {
                    int l_180 = 0x3453B588L;
                    int l_182 = 1L;
                    int l_184 = (-4L);
                    int l_188 = 0L;
                    int i;
                    if (l_105[l_104])
                    {
                        int l_178 = (-1L);
                        int l_179 = 0L;
                        int l_181[7];
                        long long l_183 = 0x4EF4676D5B9C4E97LL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_181[i] = 0xEB583F5CL;
                        g_190[8]--;
                    }
                    else
                    {
                        long long l_193[6][7] = {{0x2DE70E6D607DAFEBLL,(-1L),7L,0xF045482C233B4783LL,0x79ABDAC233E80B92LL,0x3A4B513DD669FE99LL,0x2DE70E6D607DAFEBLL},{9L,(-1L),(-7L),0x731A3DA37591F8E5LL,0x79ABDAC233E80B92LL,0xFF2AD46AB405F776LL,9L},{9L,0x3A4B513DD669FE99LL,7L,0x731A3DA37591F8E5LL,7L,0x3A4B513DD669FE99LL,9L},{0x2DE70E6D607DAFEBLL,(-1L),7L,0xF045482C233B4783LL,0x79ABDAC233E80B92LL,0x3A4B513DD669FE99LL,0x2DE70E6D607DAFEBLL},{9L,(-1L),(-7L),0x731A3DA37591F8E5LL,0x79ABDAC233E80B92LL,0xFF2AD46AB405F776LL,9L},{9L,0x3A4B513DD669FE99LL,7L,0x731A3DA37591F8E5LL,7L,0x3A4B513DD669FE99LL,9L}};
                        int i, j;
                        l_193[3][2] = (&p_47 == &p_48);
                        l_96[3][5][0] &= 0xFCCB9FAFL;
                        if (l_105[l_84])
                            continue;
                    }
                }
            }
            if ((*p_47))
                break;
            l_93 ^= (safe_rshift_func_int16_t_s_u((safe_mod_func_uint64_t_u_u((safe_sub_func_uint64_t_u_u((((*l_53) <= ((((g_202 = 0x0A3BL) || (safe_mod_func_uint16_t_u_u((g_57[0][1][0] == (g_207 ^= ((*l_205) = ((*l_53) < l_186)))), (safe_rshift_func_uint8_t_u_s(((*l_210) &= 0xACL), g_190[8]))))) || ((*l_135) = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(l_168[1][1][5], (g_217--))), (((((safe_rshift_func_uint16_t_u_s(l_189, 11)) < g_136) != (-8L)) ^ 1L) || (-9L)))))) > g_115[1])) ^ 4294967295UL), l_174)), g_190[8])), (*l_53)));
            for (l_175 = 0; (l_175 <= 0); l_175 += 1)
            {
                int *l_224 = &l_101;
                int *l_240 = &l_96[5][4][0];
                int *l_241 = (void*)0;
                int *l_242[9] = {&g_57[5][1][0],&g_57[7][0][0],&g_57[5][1][0],&g_57[7][0][0],&g_57[5][1][0],&g_57[7][0][0],&g_57[5][1][0],&g_57[7][0][0],&g_57[5][1][0]};
                int i;
                p_46 = p_47;


                if ((+((!((g_217 >= (g_66[0][1] == (void*)0)) != ((!(safe_mod_func_uint16_t_u_u((((*l_224) = (*p_48)) >= (safe_mod_func_int64_t_s_s((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int16_t_s(l_172)), l_174)), (safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u(((g_136 >= ((safe_rshift_func_uint8_t_u_u(0x26L, 3)) | g_202)) ^ 9L), g_206)), (*l_62)))))), (-1L)))) < l_187))) != (*l_62))))
                {
                    (*l_224) = (safe_sub_func_int16_t_s_s((l_238 != &l_52), (-7L)));
                }
                else
                {
                    int **l_239 = &l_62;
                    for (l_98 = 0; (l_98 <= 0); l_98 += 1)
                    {
                        return p_47;


                    }
                    (*l_239) = p_48;


                    (*l_239) = p_47;


                }
                g_244++;
                if ((*p_46))
                    break;
                for (l_93 = 0; (l_93 >= 0); l_93 -= 1)
                {
                    unsigned char l_249 = 255UL;
                    int i, j, k;
                    for (g_216 = 0; (g_216 <= 4); g_216 += 1)
                    {
                        long long l_247 = 0L;
                        int l_248[8][5][4] = {{{0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L},{0xD0427F13L,0xD0427F13L,7L,0xD0427F13L},{0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L},{0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L},{0xD0427F13L,0xD0427F13L,7L,0xD0427F13L}},{{0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L},{0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L},{0xD0427F13L,0xD0427F13L,7L,0xD0427F13L},{0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L},{0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L}},{{0xD0427F13L,0xD0427F13L,7L,0xD0427F13L},{0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L},{0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L},{0xD0427F13L,0xD0427F13L,7L,0xD0427F13L},{0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L}},{{0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L},{0xD0427F13L,0xD0427F13L,7L,0xD0427F13L},{0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L},{0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L},{0xD0427F13L,0xD0427F13L,7L,0xD0427F13L}},{{0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L},{0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L},{0xD0427F13L,0xD0427F13L,7L,0xD0427F13L},{0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L},{0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L,0xE3D7A3D2L}},{{0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L},{0xE3D7A3D2L,7L,7L,0xE3D7A3D2L},{7L,0xE3D7A3D2L,7L,7L},{0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L},{0xE3D7A3D2L,7L,7L,0xE3D7A3D2L}},{{7L,0xE3D7A3D2L,7L,7L},{0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L},{0xE3D7A3D2L,7L,7L,0xE3D7A3D2L},{7L,0xE3D7A3D2L,7L,7L},{0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L}},{{0xE3D7A3D2L,7L,7L,0xE3D7A3D2L},{7L,0xE3D7A3D2L,7L,7L},{0xE3D7A3D2L,0xE3D7A3D2L,0xD0427F13L,0xE3D7A3D2L},{0xE3D7A3D2L,7L,7L,0xE3D7A3D2L},{7L,0xE3D7A3D2L,7L,7L}}};
                        int i, j, k;
                        l_249--;
                        (*l_224) = l_96[(g_216 + 2)][(g_216 + 1)][l_175];
                    }
                    if (l_96[(l_175 + 6)][(l_93 + 3)][l_93])
                        break;
                    for (l_172 = 0; (l_172 == (-27)); l_172 = safe_sub_func_uint8_t_u_u(l_172, 6))
                    {
                        long long l_256 = 0x25873EBDBE55BCE8LL;
                        (*l_240) = (safe_rshift_func_uint16_t_u_s(65531UL, ((*l_135) = l_256)));
                        return p_48;


                    }
                }
            }
        }



        l_101 = ((*l_258) = ((void*)0 == l_257));
        (*l_258) |= ((void*)0 == l_259);
    }
    else
    {
        unsigned l_260 = 8UL;
        int *l_261 = &l_97;
        int l_275 = 0xCF53E3F1L;
        int l_276 = 0x74CD76DDL;
        int l_277 = 0x656C1BF3L;
        int l_278 = 0xB281D131L;
        int l_281 = 0x6F80D47DL;
        int l_283 = 0x76176802L;
        int l_284 = (-2L);
        int l_286 = 0x71510854L;
        int l_287[4];
        unsigned long long l_289 = 0xF1F036E5C56B98C7LL;
        short *l_301 = &g_215;
        int i;
        for (i = 0; i < 4; i++)
            l_287[i] = 0xF9212C95L;
        (*l_261) = l_260;
        if ((((*l_53) & (*l_53)) >= ((*l_135) = (g_216 > g_136))))
        {
            long long l_264 = 5L;
            int *l_273 = &l_105[1];
            int l_285[10][4][5] = {{{(-9L),9L,0x7281002BL,4L,(-1L)},{0x08D0D54CL,9L,(-3L),(-9L),6L},{9L,7L,0x14E295EDL,0x6D841ADFL,0x6D841ADFL},{0x08D0D54CL,1L,0x08D0D54CL,2L,0xC0AF77E9L}},{{(-9L),0x7281002BL,0L,9L,6L},{1L,(-9L),0x9F21BA12L,(-3L),8L},{8L,6L,0L,6L,8L},{2L,0xC8212AA6L,0x769ECBE8L,1L,9L}},{{9L,0x14E295EDL,(-9L),6L,1L},{(-3L),0x769ECBE8L,9L,0xC8212AA6L,9L},{6L,6L,0x27826169L,(-9L),0x6D841ADFL},{9L,0x3E321A14L,0x9F21BA12L,0x5073E437L,0x73879576L}},{{0L,7L,1L,0x7281002BL,0x571DF16EL},{0x6D1ECF1BL,0x3E321A14L,0x3E321A14L,0x6D1ECF1BL,0x08D0D54CL},{0x14E295EDL,6L,(-1L),0x6D841ADFL,(-10L)},{0x9F21BA12L,0x769ECBE8L,6L,(-3L),0x3E321A14L}},{{7L,0x14E295EDL,0x6D841ADFL,0x6D841ADFL,0x14E295EDL},{0x73879576L,0xC8212AA6L,0xC0AF77E9L,0x6D1ECF1BL,2L},{8L,0x571DF16EL,6L,0x7281002BL,(-1L)},{0xC8212AA6L,1L,8L,0x5073E437L,0x5073E437L}},{{8L,0x27826169L,8L,(-9L),0x2D7C4833L},{0x73879576L,0xC0AF77E9L,(-3L),0xC8212AA6L,1L},{7L,0x7281002BL,(-10L),6L,4L},{0x9F21BA12L,1L,(-3L),1L,0x9F21BA12L}},{{0x14E295EDL,0L,8L,0x571DF16EL,6L},{0x6D1ECF1BL,2L,8L,9L,6L},{0L,0x27826169L,0L,4L,0L},{0xC8212AA6L,0xC8212AA6L,(-9L),0x3E321A14L,0x08D0D54CL}},{{0L,(-10L),0x2D7C4833L,8L,0x14E295EDL},{0x6D1ECF1BL,9L,0x9F21BA12L,1L,(-3L)},{(-9L),(-10L),(-10L),(-9L),0x7281002BL},{6L,0xC8212AA6L,0x5073E437L,0x08D0D54CL,0x769ECBE8L}},{{0x2D7C4833L,0x27826169L,0x6D841ADFL,9L,(-10L)},{9L,6L,0x08D0D54CL,0x08D0D54CL,6L},{0x14E295EDL,4L,7L,(-9L),1L},{0xC0AF77E9L,(-3L),0xC8212AA6L,1L,0x5073E437L}},{{4L,0x571DF16EL,(-1L),8L,8L},{0xC0AF77E9L,(-9L),0xC0AF77E9L,0x3E321A14L,1L},{0x14E295EDL,7L,9L,4L,0L},{9L,1L,0x769ECBE8L,0xC8212AA6L,2L}}};
            int i, j, k;
            for (l_99 = 12; (l_99 > (-9)); l_99 = safe_sub_func_int16_t_s_s(l_99, 9))
            {
                unsigned char *l_267 = &g_115[1];
                short *l_270[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                int l_271 = 0x2911801DL;
                int l_279 = 0xB6B8699BL;
                int l_280 = (-1L);
                int l_282 = 0xEA2C5E25L;
                int l_288[3];
                int *l_295 = (void*)0;
                int i;
                for (i = 0; i < 3; i++)
                    l_288[i] = 0L;
            }
        }
        else
        {
            unsigned long long l_296[2][3][4] = {{{0x1E53B7330BCA119FLL,0xA57A7EDD22EC4356LL,0xEC3E5BA27FF7EFD1LL,0xA57A7EDD22EC4356LL},{0xA57A7EDD22EC4356LL,0xDDDB9DCDAB06666ALL,0xEC3E5BA27FF7EFD1LL,0xEC3E5BA27FF7EFD1LL},{0x1E53B7330BCA119FLL,0x1E53B7330BCA119FLL,0xA57A7EDD22EC4356LL,0xEC3E5BA27FF7EFD1LL}},{{18446744073709551615UL,0xDDDB9DCDAB06666ALL,18446744073709551615UL,0xA57A7EDD22EC4356LL},{18446744073709551615UL,0xEC3E5BA27FF7EFD1LL,0xEC3E5BA27FF7EFD1LL,0xDDDB9DCDAB06666ALL},{18446744073709551615UL,0xEC3E5BA27FF7EFD1LL,0x1E53B7330BCA119FLL,0xEC3E5BA27FF7EFD1LL}}};
            char *l_299 = &g_216;
            long long *l_300 = &g_72;
            int l_316 = (-9L);
            int l_317 = 0x0FCC5BC9L;
            int l_318[8] = {0x28DB0124L,(-1L),0x28DB0124L,(-1L),0x28DB0124L,(-1L),0x28DB0124L,(-1L)};
            unsigned char **l_325[3][2][8] = {{{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149},{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149}},{{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149},{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149}},{{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149},{(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149,(void*)0,&g_149}}};
            int i, j, k;
            l_296[1][0][0] = (*l_261);
            (*l_261) = ((*l_53) | (+(((((*l_299) &= ((*l_261) > ((safe_lshift_func_uint8_t_u_s(l_296[1][2][3], l_296[1][0][0])) >= g_71))) <= g_136) < ((*l_261) && 0xA87195B7L)) ^ ((*l_300) = l_296[1][0][0]))));
            for (g_215 = 1; (g_215 <= 4); g_215 += 1)
            {
                short *l_302[9][6] = {{(void*)0,&g_136,&g_136,&g_136,&g_136,&g_136},{&g_215,&g_215,(void*)0,&g_136,&g_136,&g_136},{&g_136,(void*)0,(void*)0,&g_136,&g_215,&g_215},{&g_136,(void*)0,&g_215,&g_215,&g_215,&g_136},{&g_136,&g_136,&g_136,(void*)0,&g_215,&g_136},{&g_136,(void*)0,(void*)0,&g_136,&g_136,&g_136},{&g_215,&g_136,&g_215,&g_136,&g_136,&g_215},{&g_215,&g_136,&g_136,(void*)0,(void*)0,&g_136},{&g_136,&g_136,&g_215,(void*)0,&g_215,&g_136}};
                int l_312 = (-9L);
                int l_315[2][1][8] = {{{0x209FCE16L,0x2ECA3DCBL,0x2ECA3DCBL,0x209FCE16L,0x2ECA3DCBL,0x2ECA3DCBL,0x209FCE16L,0x2ECA3DCBL}},{{0x209FCE16L,0x209FCE16L,(-1L),0x209FCE16L,0x209FCE16L,(-1L),0x209FCE16L,0x209FCE16L}}};
                unsigned short l_320 = 0xCC1EL;
                int i, j, k;
                for (l_98 = 3; (l_98 >= 0); l_98 -= 1)
                {
                    int l_319 = (-1L);
                    int i;
                    for (l_101 = 0; (l_101 <= 3); l_101 += 1)
                    {
                        int i;
                        l_105[g_215] = g_115[l_98];
                        return p_47;


                    }
                    if ((l_287[l_98] = (l_105[g_215] &= (0x4A6BL | (g_136 |= (l_301 == l_302[5][1]))))))
                    {
                        unsigned long long l_303 = 0xB9096B3FBC7D9008LL;
                        l_303 |= ((void*)0 == &g_136);
                    }
                    else
                    {
                        int i;
                        (*l_261) = (safe_rshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0xE3364E70L, (g_115[l_98] | (*l_261)))), 12));
                    }
                    for (g_72 = 3; (g_72 >= 0); g_72 -= 1)
                    {
                        int *l_308 = &l_283;
                        int *l_309 = (void*)0;
                        int *l_310 = &g_58;
                        int *l_311 = &l_99;
                        int *l_313 = &l_105[g_215];
                        int *l_314[7] = {(void*)0,&l_102,(void*)0,(void*)0,&l_102,(void*)0,(void*)0};
                        int i;
                        l_320++;
                        return p_46;


                    }
                    for (l_51 = 0; (l_51 <= 3); l_51 += 1)
                    {
                        int *l_323 = &l_315[0][0][6];
                        int **l_324 = &l_53;
                        unsigned long long l_326 = 0xBC23507839300634LL;
                        (*l_324) = l_323;

                        ;
                        (*l_323) = ((void*)0 != l_325[0][1][5]);
                        (*l_323) &= l_326;
                        (**l_324) ^= l_312;
                    }
                }


                for (g_244 = 0; (g_244 <= 4); g_244 += 1)
                {
                    return p_47;


                }
            }


        }


    }



    if ((((*p_48) != l_175) && l_99))
    {
        for (l_97 = 0; l_97 < 4; l_97 += 1)
        {
            g_115[l_97] = 8UL;
        }
    }
    else
    {
        unsigned long long l_338 = 1UL;
        unsigned long long l_341 = 18446744073709551615UL;
        long long *l_347 = &l_335[5][1][1];
        long long **l_346[4][4] = {{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0}};
        unsigned long long l_352 = 18446744073709551612UL;
        int l_358 = (-4L);
        int *l_359 = &g_58;
        unsigned long long *l_391 = &l_338;
        unsigned long long **l_390 = &l_391;
        unsigned l_405 = 0x1B3B59E5L;
        int i, j;
        for (g_217 = 0; (g_217 <= 29); ++g_217)
        {
            short l_339 = (-9L);
            unsigned *l_340 = &l_51;
            int *l_343 = &l_105[1];
            char *l_350 = (void*)0;
            char *l_351 = &g_216;
            int *l_357[9] = {&l_101,&g_57[5][1][0],&g_57[5][1][0],&l_101,&g_57[5][1][0],&g_57[5][1][0],&l_101,&g_57[5][1][0],&g_57[5][1][0]};
            int i;
            (*l_343) ^= ((safe_rshift_func_uint16_t_u_s(g_57[4][2][0], ((safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s(l_335[5][1][1], (0x8DC33112L | ((*l_340) = (safe_mod_func_uint8_t_u_u(l_338, l_339)))))), (248UL >= l_341))) & g_57[4][2][0]))) | l_342);
            l_358 = ((*l_343) = ((safe_mod_func_uint64_t_u_u((l_346[1][0] != (void*)0), (g_72 && 0x1B8F03B4957AADA6LL))) & (safe_rshift_func_uint16_t_u_s(((((*l_351) &= (*l_343)) < l_352) != (((safe_lshift_func_uint8_t_u_s(((-1L) == 0xAAF4C93FL), ((safe_mod_func_uint16_t_u_u(0x72F4L, g_57[5][1][0])) && g_136))) | 0x0BFD9BEDL) | 0UL)), 8))));
        }
        l_360 = l_359;

        ;
        if ((*l_360))
        {
            int *l_361 = &l_97;
            int *l_362 = &l_105[2];
            int *l_363 = &g_57[5][1][0];
            int *l_364 = &l_358;
            int *l_365 = &l_99;
            int *l_366 = (void*)0;
            int *l_367 = &g_57[5][1][0];
            int *l_368 = (void*)0;
            int l_369 = 0x81170BA5L;
            int *l_370 = (void*)0;
            int *l_371 = &g_207;
            int *l_372 = &l_98;
            int *l_373 = (void*)0;
            int *l_374 = (void*)0;
            int *l_375 = &l_105[1];
            int *l_376 = (void*)0;
            int *l_377 = &g_207;
            int *l_378[3];
            int i;
            for (i = 0; i < 3; i++)
                l_378[i] = &l_369;
            ++l_380;
            l_359 = l_383[4];

            ;
            return p_48;


        }
        else
        {
            int l_389 = 0x93D8F38FL;
            int l_410 = 1L;
            int l_411 = 0x05E73516L;
            int l_413[10][5] = {{0L,0xBDD98A59L,0x8AFDE032L,0x9E81C148L,0xB0157E8DL},{0x976BB867L,0xE65EB7F5L,0x90367997L,0x01F23220L,(-5L)},{0xBDD98A59L,0x01F23220L,0xE2E019F5L,0x3B918032L,0x3B918032L},{0x976BB867L,0x8AFDE032L,0x976BB867L,0xE2E019F5L,0xB687A236L},{0L,0x8AFDE032L,8L,0xBDD98A59L,0xE65EB7F5L},{0x01F23220L,0x8AFDE032L,0x9F3542B9L,0xE65EB7F5L,0x9E81C148L},{0x3B918032L,0x15C14A9FL,0x90367997L,0x15C14A9FL,0x3B918032L},{0xE2E019F5L,8L,0L,0x15C14A9FL,0xE65EB7F5L},{0xBDD98A59L,0xE2E019F5L,0L,0xE65EB7F5L,(-5L)},{0x90367997L,0L,0xE65EB7F5L,8L,0xE65EB7F5L}};
            int i, j;
            for (l_102 = 0; (l_102 >= 12); ++l_102)
            {
                unsigned l_388 = 5UL;
                unsigned long long ***l_392 = &l_390;
                unsigned long long ****l_397 = &l_392;
                unsigned *l_407 = &l_51;
                short l_408 = (-1L);
                int l_415 = 0L;
            }
            (*l_360) = (safe_rshift_func_int16_t_s_u((*l_360), (*l_360)));
        }
        (*l_360) |= 0x1C81B3E8L;
    }

    ;
    return p_48;


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
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_57[i][j][k], "g_57[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_58, "g_58", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_115[i], "g_115[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_190[i], "g_190[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_202, "g_202", print_hash_value);
    transparent_crc(g_206, "g_206", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_215, "g_215", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_217, "g_217", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_379, "g_379", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_406[i][j], "g_406[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_412, "g_412", print_hash_value);
    transparent_crc(g_446, "g_446", print_hash_value);
    transparent_crc(g_543, "g_543", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_634, "g_634", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_962, "g_962", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1026, "g_1026", print_hash_value);
    transparent_crc(g_1134, "g_1134", print_hash_value);
    transparent_crc(g_1212, "g_1212", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_1330[i][j], "g_1330[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1338, "g_1338", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1462[i], "g_1462[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1525, "g_1525", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
