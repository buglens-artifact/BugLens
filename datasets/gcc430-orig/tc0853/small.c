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



static int g_4 = 0x3FA75C19L;
static int *g_28 = &g_4;
static int ** const g_27 = &g_28;
static unsigned g_108 = 1UL;
static unsigned g_110 = 4294967295UL;
static int g_131 = 0L;
static int * const g_130 = &g_131;
static int * const *g_129 = &g_130;
static char g_145 = 0xA3L;
static unsigned short g_152 = 7UL;
static int *g_161 = &g_4;
static unsigned g_180 = 6UL;
static int g_184 = 0L;
static unsigned char g_191 = 251UL;
static const char *g_197 = &g_145;
static const char **g_196 = &g_197;
static unsigned short *g_219 = &g_152;
static unsigned short **g_218 = &g_219;
static unsigned short g_242 = 0xCF36L;
static short g_275 = 0x5EE6L;
static unsigned short ***g_319 = &g_218;
static unsigned short ****g_318[2][9] = {{&g_319,(void*)0,&g_319,(void*)0,(void*)0,&g_319,&g_319,(void*)0,(void*)0},{&g_319,(void*)0,&g_319,(void*)0,(void*)0,&g_319,&g_319,(void*)0,(void*)0}};
static char g_357 = 0xB3L;
static const int *g_406 = &g_184;
static const int **g_405 = &g_406;
static unsigned g_483 = 0x4B79373DL;
static int **g_548[8][3][5] = {{{(void*)0,&g_161,&g_28,(void*)0,&g_161},{&g_28,&g_28,&g_28,&g_161,&g_161},{(void*)0,(void*)0,&g_161,&g_28,&g_161}},{{&g_161,&g_28,&g_28,&g_161,&g_28},{(void*)0,&g_161,&g_161,&g_161,&g_161},{(void*)0,(void*)0,&g_161,&g_161,&g_161}},{{&g_161,(void*)0,&g_161,&g_161,&g_161},{&g_161,&g_28,&g_28,(void*)0,&g_28},{(void*)0,(void*)0,&g_28,&g_161,&g_161}},{{(void*)0,&g_161,(void*)0,&g_28,&g_28},{&g_161,(void*)0,(void*)0,&g_161,&g_28},{&g_28,(void*)0,&g_28,&g_161,&g_28}},{{&g_161,&g_161,&g_28,&g_161,&g_28},{&g_161,&g_161,&g_161,&g_161,&g_28},{&g_161,&g_28,&g_28,(void*)0,(void*)0}},{{&g_28,&g_161,&g_28,(void*)0,(void*)0},{&g_161,&g_161,&g_161,&g_28,&g_28},{&g_28,(void*)0,&g_28,&g_28,&g_161}},{{&g_161,(void*)0,&g_161,&g_28,&g_161},{&g_161,&g_161,(void*)0,&g_28,&g_161},{&g_28,(void*)0,&g_28,(void*)0,&g_28}},{{&g_161,&g_28,&g_28,(void*)0,&g_161},{&g_28,(void*)0,&g_161,&g_161,&g_28},{&g_161,&g_28,&g_28,&g_28,&g_161}}};
static int g_591 = 5L;
static int g_599 = 0x527552E1L;
static unsigned char g_617 = 0xE8L;
static unsigned g_620 = 0UL;
static unsigned short *g_649 = &g_242;
static unsigned g_665 = 5UL;
static unsigned g_706 = 18446744073709551615UL;
static char g_708 = 0xCAL;



static int func_1(void);
static int * func_7(int ** p_8, const unsigned short p_9);
static int ** func_10(int p_11, int ** p_12, unsigned p_13, int p_14, unsigned p_15);
static int func_16(int p_17, unsigned char p_18);
static int * func_19(unsigned short p_20, int ** p_21, short p_22, unsigned p_23);
static unsigned short func_50(unsigned p_51, short p_52, int * p_53, const char p_54, char p_55);
static unsigned short func_68(const unsigned p_69, const int ** p_70, unsigned short p_71, unsigned p_72);
static unsigned char func_78(int ** p_79, int * const * p_80, const unsigned p_81, unsigned short p_82);
static int ** func_83(int * const * p_84, const unsigned p_85, int * p_86, unsigned p_87, int * p_88);
static int * const * func_89(int p_90, unsigned short p_91);
static int func_1(void)
{
    int *l_2 = (void*)0;
    int *l_3[10][1][4] = {{{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,(void*)0,&g_4}},{{&g_4,&g_4,(void*)0,(void*)0}},{{&g_4,&g_4,&g_4,(void*)0}},{{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,&g_4,&g_4}},{{&g_4,&g_4,(void*)0,&g_4}},{{&g_4,&g_4,(void*)0,(void*)0}},{{&g_4,&g_4,&g_4,(void*)0}}};
    int **l_5 = (void*)0;
    int **l_6 = &l_3[1][0][3];
    int *l_590 = &g_591;
    unsigned l_592 = 0x03B1BFA0L;
    unsigned *l_597 = &g_483;
    unsigned l_598 = 0xDB759BDAL;
    const unsigned l_676 = 0UL;
    unsigned char l_714 = 0xFAL;
    unsigned l_715 = 0UL;
    int l_716 = 0x377ED88CL;
    int i, j, k;
    g_4 = 0x7F6AF112L;
    (*l_6) = (void*)0;
    (*g_27) = ((*l_6) = func_7(func_10(((*l_590) = func_16(g_4, g_4)), &l_3[1][0][3], (((l_592 < ((((safe_sub_func_int32_t_s_s(g_275, (safe_lshift_func_int16_t_s_s(g_184, 8)))) && ((0L && ((void*)0 != l_597)) > l_598)) <= (-1L)) == g_275)) > 0xD8L) < g_599), g_483, g_275), l_676));


    ;
    ;

    ;

    (*g_405) = (*g_27);

    ;
    return l_716;
}







static int * func_7(int ** p_8, const unsigned short p_9)
{
    const char *l_690 = &g_357;
    const unsigned l_693[8] = {0x3B17CCC5L,0x3B17CCC5L,0x3B17CCC5L,0x3B17CCC5L,0x3B17CCC5L,0x3B17CCC5L,0x3B17CCC5L,0x3B17CCC5L};
    char l_698[6][3][7] = {{{0L,0x4CL,(-1L),(-1L),0x4CL,0L,0L},{0x4CL,0x80L,(-1L),0x0EL,0x0EL,(-1L),0x80L},{0x4CL,0L,0L,0x4CL,(-1L),(-1L),0x4CL}},{{0L,0x80L,0L,(-1L),0x80L,0L,0L},{0x80L,0x4CL,(-1L),0x4CL,0x80L,(-1L),0x0EL},{0x0EL,0L,(-1L),0x0EL,(-1L),0L,0x0EL}},{{0L,0x0EL,0L,(-1L),0x0EL,(-1L),0L},{0x0EL,0x0EL,0x80L,(-1L),0L,0x80L,0L},{(-1L),(-8L),(-8L),(-1L),(-3L),(-1L),(-1L)}},{{(-1L),0L,(-3L),(-3L),0L,(-1L),(-8L)},{0L,(-1L),0x80L,0L,0L,0x80L,(-1L)},{0L,(-8L),(-1L),0L,(-3L),(-3L),0L}},{{(-1L),(-1L),(-1L),(-3L),(-1L),(-8L),(-8L)},{(-1L),0L,0x80L,0L,(-1L),0x80L,0L},{0L,(-8L),(-3L),0L,(-3L),(-8L),0L}},{{(-1L),0L,(-8L),(-3L),0L,(-3L),(-8L)},{0L,0L,0x80L,(-1L),0L,0x80L,0L},{(-1L),(-8L),(-8L),(-1L),(-3L),(-1L),(-1L)}}};
    int l_705 = 0x5F0955ACL;
    int *l_712 = &g_184;
    int *l_713 = (void*)0;
    int i, j, k;
    for (g_599 = (-2); (g_599 < (-11)); g_599 = safe_sub_func_int8_t_s_s(g_599, 6))
    {
        const int *l_679 = &g_184;
        unsigned *l_701 = (void*)0;
        int l_702 = 0x590A7E8CL;
        char *l_703 = (void*)0;
        char *l_704[9][10][2] = {{{&g_145,&g_357},{&g_145,&l_698[3][0][0]},{&l_698[0][1][1],&g_357},{&l_698[3][0][0],&l_698[0][1][1]},{&g_145,&g_145},{&g_145,&l_698[0][1][1]},{&l_698[3][0][0],&g_357},{&l_698[0][1][1],&l_698[3][0][0]},{&g_145,&g_357},{&g_145,&l_698[0][1][1]}},{{&l_698[0][1][1],&g_145},{&l_698[0][1][1],&l_698[0][1][1]},{&g_145,&g_357},{&g_145,&l_698[3][0][0]},{&l_698[0][1][1],&g_357},{&l_698[3][0][0],&l_698[0][1][1]},{&g_145,&g_145},{&g_145,&l_698[0][1][1]},{&l_698[3][0][0],&g_357},{&l_698[0][1][1],&l_698[3][0][0]}},{{&g_145,&g_357},{&g_145,&l_698[0][1][1]},{&l_698[0][1][1],&g_145},{&l_698[0][1][1],&l_698[0][1][1]},{&g_145,&g_357},{&g_145,&l_698[3][0][0]},{&l_698[0][1][1],&g_357},{&l_698[3][0][0],&l_698[0][1][1]},{&g_145,&g_145},{&g_145,&l_698[0][1][1]}},{{&l_698[3][0][0],&g_357},{&l_698[0][1][1],&l_698[3][0][0]},{&g_145,&g_357},{&g_145,&l_698[0][1][1]},{&l_698[0][1][1],&g_145},{&l_698[0][1][1],&l_698[0][1][1]},{&g_145,&g_357},{&g_145,&l_698[3][0][0]},{&l_698[0][1][1],&g_357},{&l_698[3][0][0],&l_698[0][1][1]}},{{&g_145,&g_145},{&g_145,&l_698[0][1][1]},{&l_698[3][0][0],&g_357},{&l_698[0][1][1],&l_698[3][0][0]},{&g_145,&g_357},{&g_145,&l_698[0][1][1]},{&l_698[0][1][1],&g_145},{&l_698[0][1][1],&l_698[0][1][1]},{&g_145,&g_357},{&g_145,&l_698[3][0][0]}},{{&l_698[0][1][1],&g_357},{&l_698[3][0][0],&l_698[0][1][1]},{&g_145,&g_145},{&g_145,&l_698[0][1][1]},{&l_698[3][0][0],&g_357},{&l_698[0][1][1],&l_698[3][0][0]},{&g_145,&g_357},{&g_145,&l_698[3][0][0]},{&l_698[3][0][0],(void*)0},{&l_698[3][0][0],&l_698[3][0][0]}},{{&l_698[0][1][5],&g_145},{&g_145,(void*)0},{&l_698[3][0][0],&g_145},{(void*)0,&l_698[3][0][0]},{&g_145,(void*)0},{&g_145,&l_698[3][0][0]},{(void*)0,&g_145},{&l_698[3][0][0],(void*)0},{&g_145,&g_145},{&l_698[0][1][5],&l_698[3][0][0]}},{{&l_698[3][0][0],(void*)0},{&l_698[3][0][0],&l_698[3][0][0]},{&l_698[0][1][5],&g_145},{&g_145,(void*)0},{&l_698[3][0][0],&g_145},{(void*)0,&l_698[3][0][0]},{&g_145,(void*)0},{&g_145,&l_698[3][0][0]},{(void*)0,&g_145},{&l_698[3][0][0],(void*)0}},{{&g_145,&g_145},{&l_698[0][1][5],&l_698[3][0][0]},{&l_698[3][0][0],(void*)0},{&l_698[3][0][0],&l_698[3][0][0]},{&l_698[0][1][5],&g_145},{&g_145,(void*)0},{&l_698[3][0][0],&g_145},{(void*)0,&l_698[3][0][0]},{&g_145,(void*)0},{&g_145,&l_698[3][0][0]}}};
        short *l_707 = &g_275;
        int l_709 = 0xDB40FBADL;
        int *l_711[7][1][2] = {{{&l_702,&l_702}},{{&g_131,&g_184}},{{(void*)0,&g_184}},{{&g_131,&l_702}},{{&l_702,&g_131}},{{&g_184,(void*)0}},{{&g_184,&g_131}}};
        int i, j, k;
        (*g_405) = l_679;

        ;
        if ((*g_161))
            continue;
        for (g_180 = 0; (g_180 <= 1); g_180 += 1)
        {
            char ***l_681 = (void*)0;
            for (g_617 = 0; (g_617 <= 1); g_617 += 1)
            {
                int *l_680 = &g_184;
                return l_680;


            }
            g_196 = (void*)0;

            ;
        }
        if (((g_617 ^ g_152) <= (l_709 = (safe_mul_func_int16_t_s_s((g_708 = (safe_lshift_func_int16_t_s_s((((*l_707) = (((safe_mod_func_int8_t_s_s((g_617 <= ((*g_649) = 65530UL)), (l_705 = ((safe_rshift_func_uint8_t_u_u(((void*)0 == l_690), 6)) && (l_702 = (safe_add_func_uint8_t_u_u(l_693[2], (safe_div_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_698[0][1][5], ((safe_div_func_uint32_t_u_u(g_145, p_9)) | g_145))), g_145))))))))) | g_706) < 0xF94FL)) > p_9), 5))), p_9)))))
        {
            if ((*l_679))
                break;
        }
        else
        {
            int *l_710 = &l_702;
            return l_712;


        }
    }



    (*g_27) = &l_705;

    ;
    return l_713;



}







static int ** func_10(int p_11, int ** p_12, unsigned p_13, int p_14, unsigned p_15)
{
    int *l_602 = &g_131;
    unsigned short * const l_627 = &g_152;
    unsigned short *l_628[6] = {&g_242,&g_242,&g_242,&g_242,&g_242,&g_242};
    unsigned short **** const l_631 = &g_319;
    int l_650 = 9L;
    int i;
    if ((&g_180 == &g_483))
    {
        int *l_604 = &g_4;
        unsigned short **l_622 = (void*)0;
        unsigned short ****l_632 = &g_319;
        unsigned *l_635 = (void*)0;
        unsigned *l_636[7] = {&g_483,&g_110,&g_110,&g_483,&g_110,&g_110,&g_483};
        unsigned *l_637 = &g_108;
        int *l_638 = &g_591;
        int *l_662 = (void*)0;
        int i;
        for (g_275 = 1; (g_275 >= 8); ++g_275)
        {
            int * const l_605 = (void*)0;
            (*g_27) = l_602;

            ;
            for (g_184 = 0; (g_184 <= 1); g_184 += 1)
            {
                unsigned l_611 = 0x73B93F00L;
                int *l_621 = &g_4;
                (*g_27) = (void*)0;

                ;
                for (p_14 = 0; (p_14 <= 1); p_14 += 1)
                {
                    char l_619 = 1L;
                    for (g_131 = 0; (g_131 <= 1); g_131 += 1)
                    {
                        unsigned short l_603 = 0UL;
                        int i, j, k;
                        l_603 = 0x926AE2DFL;
                    }
                    (*p_12) = l_604;
                    for (g_145 = 0; (g_145 <= 2); g_145 += 1)
                    {
                        int **l_606 = &g_28;
                        unsigned char *l_614 = &g_191;
                        unsigned char *l_615 = (void*)0;
                        unsigned char *l_616 = &g_617;
                        int l_618 = 5L;
                        int i, j;
                        (*l_606) = l_605;
                        (*l_602) = (safe_div_func_uint8_t_u_u((0x5A16L >= p_13), (g_620 = (safe_mul_func_uint16_t_u_u(l_611, (safe_add_func_uint32_t_u_u(p_14, (((*l_616) = (((*l_614) = 249UL) < (p_13 || 1UL))) && ((g_591 == (((*l_616) = (~(l_618 <= l_619))) && 0x70L)) && g_131)))))))));
                        (*l_602) = (g_357 || (*l_602));
                    }
                }
                for (p_15 = 0; (p_15 <= 1); p_15 += 1)
                {
                    (*g_27) = (l_602 = l_621);

                    ;
                    ;
                }

                ;
            }

            ;
        }

        ;
lbl_654:
        (*g_319) = l_622;

        ;
        (*g_130) = (((0L || g_145) ^ ((void*)0 == &g_196)) < ((void*)0 != l_622));
        if (p_15)
        {
            unsigned short *l_648 = &g_242;
            int l_652 = (-3L);
            int *l_655[5][9][3] = {{{&l_650,&l_652,&g_184},{(void*)0,&l_652,&g_4},{&g_131,(void*)0,&l_650},{(void*)0,(void*)0,&l_650},{&g_131,&g_184,&g_131},{&l_650,&g_184,&l_650},{&l_652,&l_650,&g_131},{&g_4,&g_184,&l_652},{&g_131,&g_131,&l_650}},{{&g_131,&l_650,&g_184},{&g_184,&l_652,&g_4},{&l_652,(void*)0,&g_184},{&g_184,(void*)0,&g_184},{&g_184,&l_652,&g_131},{&g_4,&l_650,&g_4},{&g_131,&g_131,(void*)0},{&g_184,&g_184,&g_4},{&l_650,&l_650,&g_4}},{{&l_650,&g_184,&g_131},{(void*)0,&g_184,(void*)0},{(void*)0,(void*)0,&g_131},{&g_131,(void*)0,(void*)0},{&g_131,&l_652,&g_131},{&g_4,&g_4,&g_4},{&g_4,&l_650,&g_4},{(void*)0,&l_650,(void*)0},{&g_131,&l_650,&g_4}},{{&g_4,&g_4,&g_131},{&g_4,&g_184,&g_184},{(void*)0,&g_131,&g_184},{(void*)0,&l_650,&g_4},{&g_4,&g_4,&g_184},{&g_4,&g_131,&l_650},{&l_652,&g_184,(void*)0},{&g_4,(void*)0,(void*)0},{&g_131,&l_652,&g_184}},{{&l_652,&g_131,&g_131},{&g_131,&g_131,&l_650},{&l_650,&l_652,(void*)0},{&g_131,&g_131,(void*)0},{(void*)0,&g_131,&g_184},{&g_131,&l_652,&l_650},{&g_131,(void*)0,&l_650},{(void*)0,&g_184,&g_4},{(void*)0,&g_131,&g_184}}};
            int i, j, k;
            for (p_14 = 6; (p_14 >= 0); p_14 -= 1)
            {
                short l_651 = 0xE050L;
                unsigned char *l_653[4][9] = {{(void*)0,&g_191,&g_617,&g_191,&g_191,&g_617,&g_191,(void*)0,&g_191},{(void*)0,&g_617,&g_617,&g_617,&g_617,(void*)0,&g_191,(void*)0,&g_617},{(void*)0,&g_191,&g_191,(void*)0,(void*)0,&g_617,(void*)0,(void*)0,&g_191},{(void*)0,(void*)0,&g_191,&g_617,(void*)0,&g_617,&g_191,(void*)0,(void*)0}};
                int i, j;
                (**g_129) = (safe_rshift_func_int8_t_s_u(((void*)0 != &p_12), (g_617 = ((*g_219) <= ((safe_mul_func_int16_t_s_s(g_131, ((*g_197) > (~(safe_mul_func_uint8_t_u_u((p_15 < (*g_649)), l_652)))))) > (*g_649))))));
                for (g_275 = 6; (g_275 >= 0); g_275 -= 1)
                {
                    if (g_357)
                        goto lbl_654;

                    if ((l_652 && p_15))
                    {
                        l_655[1][4][1] = ((*p_12) = (*p_12));
                    }
                    else
                    {
                        unsigned short l_658 = 0UL;
                        (**g_129) = p_14;
                        (*g_405) = &l_652;

                        ;
                    }
                    for (g_242 = 0; (g_242 <= 6); g_242 += 1)
                    {
                        int * const **l_661 = &g_129;
                        (*g_161) = l_651;
                        (*g_130) = p_11;
                    }
                    (*p_12) = (void*)0;
                }
                for (g_275 = 2; (g_275 >= 0); g_275 -= 1)
                {
                    for (g_357 = 2; (g_357 >= 0); g_357 -= 1)
                    {
                        int i, j, k;
                        (*g_161) = (0xE16AL & ((-7L) != ((*l_602) <= (safe_lshift_func_int8_t_s_u(0x7CL, 4)))));
                        if (p_14)
                            break;
                        if (p_11)
                            break;
                    }
                    for (g_191 = 0; (g_191 <= 2); g_191 += 1)
                    {
                        int i, j, k;
                        g_665 = 0xEF6E6517L;
                        (*g_27) = l_655[(g_191 + 1)][(g_191 + 4)][g_191];

                        ;
                        if (l_651)
                            continue;
                        (*g_27) = (*p_12);

                        ;
                    }
                    (*p_12) = (*p_12);
                    if ((*l_604))
                        continue;
                    for (l_652 = 0; (l_652 <= 2); l_652 += 1)
                    {
                        return &g_28;




                    }
                }


                (*g_27) = &l_650;

                ;
            }


            return &g_161;




        }
        else
        {
            const char ***l_666 = (void*)0;
            const char ***l_667 = &g_196;
            (*l_667) = &g_197;

            ;
        }

        ;
    }
    else
    {
        short *l_672[2][7][2];
        int l_673 = 7L;
        int i, j, k;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 7; j++)
            {
                for (k = 0; k < 2; k++)
                    l_672[i][j][k] = (void*)0;
            }
        }
        if ((safe_mod_func_uint16_t_u_u((*l_602), (safe_add_func_int32_t_s_s(p_14, ((l_673 = 1L) || p_11))))))
        {
            int **l_674[4];
            int i;
            for (i = 0; i < 4; i++)
                l_674[i] = (void*)0;
            (*p_12) = (*g_129);


        }
        else
        {
            int **l_675 = (void*)0;
            return l_675;


        }


    }


    ;

    ;
    return p_12;



}







static int func_16(int p_17, unsigned char p_18)
{
    int **l_29 = &g_28;
    unsigned char l_48 = 0UL;
    unsigned l_49 = 0UL;
    unsigned short **l_489[7][5];
    const unsigned short l_493 = 2UL;
    int l_494[6] = {0xCA9DB045L,0x2DD99804L,0xCA9DB045L,0xCA9DB045L,0x2DD99804L,0xCA9DB045L};
    unsigned short **** const *l_499 = (void*)0;
    const char l_521 = 0xFAL;
    const int *l_527 = &g_131;
    char l_555 = 0x1EL;
    unsigned l_558[8][10] = {{0x8879E92FL,18446744073709551615UL,0xAB64A897L,0UL,18446744073709551615UL,0UL,0xAB64A897L,18446744073709551615UL,0x8879E92FL,0x8879E92FL},{0x4B4E4863L,7UL,6UL,18446744073709551615UL,18446744073709551615UL,6UL,7UL,0x4B4E4863L,0x3A8A9098L,7UL},{0x4B4E4863L,0x8879E92FL,0xAB64A897L,0x4B4E4863L,0xAB64A897L,0x8879E92FL,0x4B4E4863L,0UL,0UL,0x4B4E4863L},{0UL,7UL,0xAB64A897L,0xAB64A897L,7UL,0UL,0x8879E92FL,7UL,0x8879E92FL,0UL},{18446744073709551615UL,7UL,0x3A8A9098L,7UL,18446744073709551615UL,0x3A8A9098L,0x4B4E4863L,0x4B4E4863L,0x3A8A9098L,18446744073709551615UL},{18446744073709551615UL,0x8879E92FL,0x8879E92FL,18446744073709551615UL,0xAB64A897L,0UL,18446744073709551615UL,0UL,0xAB64A897L,18446744073709551615UL},{0UL,18446744073709551615UL,0UL,0xAB64A897L,18446744073709551615UL,0x8879E92FL,0x8879E92FL,18446744073709551615UL,0xAB64A897L,0UL},{0x4B4E4863L,0x4B4E4863L,0x3A8A9098L,18446744073709551615UL,7UL,0x3A8A9098L,7UL,18446744073709551615UL,0x3A8A9098L,0x4B4E4863L}};
    int *l_576 = (void*)0;
    short *l_581 = &g_275;
    unsigned short l_589[1];
    int i, j;
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
            l_489[i][j] = &g_219;
    }
    for (i = 0; i < 1; i++)
        l_589[i] = 0x9173L;
    (*g_405) = func_19((safe_div_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u((g_27 != l_29))), (safe_mod_func_uint16_t_u_u(((safe_mod_func_uint8_t_u_u((((safe_lshift_func_int8_t_s_s(p_18, 7)) == (safe_sub_func_uint8_t_u_u(g_4, 0xCEL))) | ((safe_mul_func_int16_t_s_s((safe_div_func_uint16_t_u_u((safe_add_func_int16_t_s_s((((safe_mod_func_int8_t_s_s((9L <= ((safe_lshift_func_int16_t_s_s(g_4, 2)) & ((*l_29) == (*g_27)))), 0x1EL)) >= (**l_29)) <= l_48), g_4)), p_18)), l_49)) || (**g_27))), g_4)) | (**l_29)), (**l_29))))), l_29, (**l_29), g_4);


    ;

    ;
    for (g_145 = 0; (g_145 <= 1); g_145 += 1)
    {
        (*g_405) = (*g_405);
        for (g_191 = 0; (g_191 <= 1); g_191 += 1)
        {
            int l_487 = 1L;
            return l_487;
        }
        for (l_48 = 0; (l_48 <= 1); l_48 += 1)
        {
            unsigned short **l_488 = (void*)0;
            int l_490 = (-1L);
            int i, j;
            l_490 = (l_488 != l_489[2][4]);
        }
    }
    if ((p_18 != (((~(*g_197)) < 0xA5L) || ((*g_161) = ((**g_218) == (l_494[3] = (safe_div_func_uint16_t_u_u(0xF60AL, (l_493 & 1UL)))))))))
    {
        char *l_502 = &g_357;
        char **l_501[1][9] = {{&l_502,&l_502,&l_502,&l_502,&l_502,&l_502,&l_502,&l_502,&l_502}};
        char ***l_500 = &l_501[0][1];
        char ***l_504 = &l_501[0][0];
        char ****l_503 = &l_504;
        unsigned *l_505[5][1][2];
        int l_506 = 0xF1F51B59L;
        const unsigned short **l_515 = (void*)0;
        const unsigned short ***l_514 = &l_515;
        unsigned short *l_520 = &g_242;
        int l_525 = (-10L);
        short *l_538 = &g_275;
        int *l_542 = &g_4;
        int l_559 = 1L;
        int i, j, k;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 1; j++)
            {
                for (k = 0; k < 2; k++)
                    l_505[i][j][k] = &g_483;
            }
        }
lbl_560:
        (*g_161) = (safe_sub_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(((&g_318[0][1] == l_499) && (***g_319)), 0xC0L)), ((l_500 != ((*l_503) = (void*)0)) > (l_506 = p_17))));

        ;
        for (l_49 = 0; (l_49 <= 1); l_49 += 1)
        {
            unsigned short *** const l_516 = &l_489[2][4];
            int l_541 = 0L;
            int i;
            l_494[l_49] = l_494[l_49];
            for (g_357 = 0; (g_357 <= 1); g_357 += 1)
            {
                const unsigned short *l_513 = &g_242;
                const unsigned short **l_512[9][8][3] = {{{&l_513,(void*)0,&l_513},{&l_513,&l_513,(void*)0},{&l_513,&l_513,&l_513},{&l_513,&l_513,(void*)0},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{(void*)0,&l_513,(void*)0},{&l_513,(void*)0,(void*)0}},{{&l_513,&l_513,(void*)0},{&l_513,&l_513,(void*)0},{&l_513,(void*)0,&l_513},{&l_513,(void*)0,&l_513},{&l_513,&l_513,&l_513},{(void*)0,(void*)0,&l_513},{&l_513,(void*)0,&l_513},{&l_513,&l_513,&l_513}},{{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,(void*)0},{&l_513,&l_513,&l_513},{&l_513,&l_513,(void*)0}},{{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,(void*)0,(void*)0},{&l_513,(void*)0,&l_513},{&l_513,&l_513,(void*)0},{&l_513,(void*)0,&l_513},{&l_513,(void*)0,&l_513},{&l_513,&l_513,&l_513}},{{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,(void*)0},{&l_513,&l_513,&l_513}},{{(void*)0,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{(void*)0,&l_513,&l_513},{(void*)0,&l_513,(void*)0},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,(void*)0,&l_513}},{{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,(void*)0,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,(void*)0},{&l_513,&l_513,(void*)0},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513}},{{&l_513,&l_513,&l_513},{&l_513,(void*)0,(void*)0},{&l_513,&l_513,(void*)0},{(void*)0,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,(void*)0,&l_513},{&l_513,&l_513,&l_513}},{{(void*)0,&l_513,&l_513},{(void*)0,&l_513,&l_513},{&l_513,&l_513,(void*)0},{&l_513,(void*)0,&l_513},{&l_513,(void*)0,&l_513},{(void*)0,&l_513,&l_513},{&l_513,&l_513,&l_513},{&l_513,&l_513,(void*)0}}};
                const unsigned short ***l_511 = &l_512[0][3][2];
                unsigned short *l_519 = &g_242;
                short l_522 = 0L;
                int l_523 = 0L;
                short *l_524 = &g_275;
                short l_526 = 0L;
                int i, j, k;
                if ((g_152 == p_17))
                {
                    short **l_539 = &l_538;
                    const int l_540 = 0L;
                    for (g_145 = 0; (g_145 <= 1); g_145 += 1)
                    {
                        l_527 = (*g_405);
                        if ((**g_129))
                            continue;
                    }
                    l_494[l_49] = l_494[l_49];
                    l_494[l_49] = p_18;
                    (*g_405) = &l_506;

                    ;
                }
                else
                {
                    int **l_543 = (void*)0;
                    int *l_557 = &l_523;
                    for (p_17 = 0; (p_17 <= 1); p_17 += 1)
                    {
                        (*g_405) = (*g_405);
                    }
                    if (p_17)
                    {
                        return l_526;


                    }
                    else
                    {
                        int **l_544 = &g_28;
                        int **l_545 = &g_28;
                        int **l_546 = &g_161;
                        int ***l_547[9][6] = {{(void*)0,&l_544,&l_29,&l_544,(void*)0,(void*)0},{(void*)0,&l_544,&l_544,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_544,&l_544,(void*)0},{(void*)0,(void*)0,&l_544,&l_29,&l_544,(void*)0},{&l_544,(void*)0,&l_29,&l_29,(void*)0,&l_544},{(void*)0,&l_544,&l_29,&l_544,(void*)0,(void*)0},{(void*)0,&l_544,&l_544,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&l_544,&l_544,(void*)0},{(void*)0,(void*)0,&l_544,&l_29,&l_544,(void*)0}};
                        unsigned char *l_556 = &g_191;
                        int i, j;
                        (*l_542) = ((l_543 != (g_548[6][0][3] = &g_28)) || l_494[l_49]);
                        if (p_18)
                            break;
                        (*g_161) = (safe_mul_func_uint16_t_u_u((safe_mod_func_int16_t_s_s((((func_50((**l_546), p_18, &l_494[l_49], (**l_546), (((l_494[l_49] != 0x30CF42C2L) || (func_50(func_50((g_110 = (p_17 ^ ((*l_556) = (safe_div_func_uint16_t_u_u(((*g_219) || l_555), 1L))))), g_180, l_557, p_18, p_18), g_145, &l_506, p_18, l_558[3][6]) | g_152)) && (**l_546))) | 0x7DFCD703L) && 0UL) & l_559), p_17)), (**g_218)));
                        if (g_131)
                            goto lbl_560;
                    }
                }
            }
        }
        (*g_130) = (*l_542);
    }
    else
    {
        unsigned short l_567 = 0xBC37L;
        short *l_577 = &g_275;
        char *l_578 = &g_145;
        unsigned char l_579 = 0x72L;
        int *l_580 = (void*)0;
        const int **l_582 = (void*)0;
        int l_583 = (-1L);
        (*g_161) = (-1L);
        (*g_161) = (g_152 < g_145);
        if (p_18)
            goto lbl_588;
lbl_588:
        (*g_161) = (((l_581 != l_581) && ((void*)0 == &l_494[2])) < p_17);
        (*g_130) = l_589[0];
    }



    return p_18;
}







static int * func_19(unsigned short p_20, int ** p_21, short p_22, unsigned p_23)
{
    unsigned short l_62 = 0x752EL;
    int **l_65 = &g_28;
    const int *l_74 = &g_4;
    const int **l_73 = &l_74;
    int l_75 = 0L;
    unsigned short ***l_309 = &g_218;
    unsigned short ****l_308 = &l_309;
    unsigned short * const *l_316 = &g_219;
    unsigned short * const **l_315 = &l_316;
    unsigned short * const ***l_314 = &l_315;
    const char l_334 = (-1L);
    int *l_363 = &g_131;
    unsigned short *l_369 = &l_62;
    int l_404 = 0x75718292L;
    char *l_440 = &g_357;
    char **l_439[9];
    char ***l_438 = &l_439[7];
    const int l_470 = (-1L);
    unsigned l_484 = 4294967295UL;
    const unsigned l_485 = 0UL;
    int *l_486 = &g_4;
    int i;
    for (i = 0; i < 9; i++)
        l_439[i] = &l_440;
    if ((func_50((safe_mul_func_uint8_t_u_u(1UL, (~(safe_lshift_func_int16_t_s_s(1L, 3))))), (safe_sub_func_uint8_t_u_u((l_62 & (((safe_mod_func_int32_t_s_s((p_21 == l_65), ((safe_mod_func_uint16_t_u_u(0xADF5L, func_68(p_22, l_73, (**l_73), l_75))) | 4294967288UL))) >= g_184) || 0xA5L)), 255UL)), &l_75, p_22, g_184) == l_62))
    {
        unsigned short l_253 = 65535UL;
        int *l_259[6];
        const unsigned short *l_283 = &l_253;
        const unsigned short * const *l_282 = &l_283;
        const unsigned short * const **l_281 = &l_282;
        char *l_311 = &g_145;
        unsigned short *****l_355 = (void*)0;
        unsigned *l_364 = &g_108;
        unsigned short *l_370 = &l_253;
        int *l_385[2][10] = {{&g_4,&g_184,&g_4,&g_184,&g_4,&g_184,&g_4,&g_184,&g_4,&g_184},{&g_131,&g_184,&g_131,&g_184,&g_131,&g_184,&g_131,&g_184,&g_131,&g_184}};
        unsigned l_387 = 0UL;
        int * const l_403 = (void*)0;
        int * const *l_402[5][2][4];
        unsigned l_410 = 0x8A339BA4L;
        int **l_479 = &l_259[4];
        const int **l_482[9][7] = {{&g_406,(void*)0,&g_406,&g_406,(void*)0,&g_406,(void*)0},{&g_406,&g_406,&g_406,&g_406,(void*)0,&g_406,&g_406},{&l_74,&l_74,&g_406,&g_406,&g_406,&l_74,&g_406},{&g_406,&g_406,&l_74,&g_406,&g_406,&g_406,&g_406},{(void*)0,&g_406,(void*)0,&g_406,&g_406,(void*)0,&g_406},{&g_406,&g_406,&l_74,&l_74,&g_406,&g_406,&g_406},{(void*)0,&g_406,&g_406,(void*)0,&g_406,(void*)0,&g_406},{&g_406,&g_406,&g_406,&l_74,&g_406,&g_406,&g_406},{&g_406,&g_406,&l_74,&g_406,&g_406,&g_406,&g_406}};
        int i, j, k;
        for (i = 0; i < 6; i++)
            l_259[i] = &l_75;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 2; j++)
            {
                for (k = 0; k < 4; k++)
                    l_402[i][j][k] = &l_403;
            }
        }
        if (((void*)0 != p_21))
        {
            int l_273 = 5L;
            unsigned char l_332 = 0xBEL;
            for (g_131 = 0; (g_131 > (-14)); --g_131)
            {
                int *l_254 = &g_131;
                for (p_20 = 0; (p_20 == 21); p_20 = safe_add_func_uint8_t_u_u(p_20, 2))
                {
                    l_253 = (safe_rshift_func_int8_t_s_u((g_180 != (-1L)), p_23));
                    return &g_131;


                }
                (*l_73) = ((*p_21) = l_254);

                ;
                ;
                for (g_180 = 0; (g_180 < 50); g_180++)
                {
                    char l_260[10][6] = {{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)}};
                    int l_261[9][3] = {{0x7C014DE8L,0x7C014DE8L,6L},{0L,0L,1L},{0x7C014DE8L,0x7C014DE8L,6L},{0L,0L,1L},{0x7C014DE8L,0x7C014DE8L,6L},{0L,0L,1L},{0x7C014DE8L,0x7C014DE8L,6L},{0L,0L,1L},{0x7C014DE8L,0x7C014DE8L,6L}};
                    int i, j;
                    for (g_110 = (-21); (g_110 < 20); ++g_110)
                    {
                        return (*g_27);


                    }
                    l_75 = (l_261[8][0] = l_260[1][4]);
                }
            }

            ;
            (*g_27) = l_259[2];

            ;
            for (g_191 = 0; (g_191 <= 14); g_191 = safe_add_func_uint8_t_u_u(g_191, 1))
            {
                unsigned l_276 = 0xAF6D2A34L;
                unsigned short ***l_297 = (void*)0;
                unsigned short ****l_296 = &l_297;
            }
            for (p_20 = 1; (p_20 <= 5); p_20 += 1)
            {
                unsigned char l_302 = 248UL;
                unsigned *l_303 = &g_180;
                int *l_304 = &g_4;
            }
        }
        else
        {
            const int l_339 = 0x390D8EACL;
            unsigned short l_346 = 0x0769L;
            int *l_358 = &g_4;
            const int **l_408[2][2] = {{(void*)0,(void*)0},{(void*)0,(void*)0}};
            const unsigned short ** const l_422[3] = {&l_283,&l_283,&l_283};
            unsigned short l_454 = 65531UL;
            unsigned l_474[3][7] = {{0x7381C1FDL,0x7381C1FDL,0x7381C1FDL,0x7381C1FDL,0x7381C1FDL,0x7381C1FDL,0x7381C1FDL},{18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL,18446744073709551614UL},{0x7381C1FDL,0x7381C1FDL,0x7381C1FDL,0x7381C1FDL,0x7381C1FDL,0x7381C1FDL,0x7381C1FDL}};
            int i, j;
        }


        ;
        (*l_479) = (*g_129);


        (**l_479) = ((safe_lshift_func_int8_t_s_s(((*l_440) = l_484), l_485)) < 1L);
    }
    else
    {
        (*l_363) = (&l_439[8] == &g_196);
    }


    ;
    ;

    return l_486;



}







static unsigned short func_50(unsigned p_51, short p_52, int * p_53, const char p_54, char p_55)
{
    (*p_53) = (*p_53);
    return (**g_218);
}







static unsigned short func_68(const unsigned p_69, const int ** p_70, unsigned short p_71, unsigned p_72)
{
    int l_96 = 0x506F8A13L;
    unsigned *l_107[4] = {&g_108,&g_108,&g_108,&g_108};
    unsigned *l_109 = &g_110;
    unsigned char l_213 = 0xF3L;
    unsigned short ***l_220 = &g_218;
    int **l_227 = &g_28;
    int i;
    if ((safe_add_func_int8_t_s_s(((func_78(func_83(func_89((safe_div_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_s((0L & g_4), 0)) | l_96), l_96)), l_96), ((*l_109) = (((((((g_108 = (g_4 ^ (*g_28))) >= l_96) <= 0x957BL) | (**p_70)) < l_96) < 0x07L) <= g_4)), &l_96, g_4, (*g_27)), g_129, p_69, p_71) & l_96) || 0x5B3DL), 0x23L)))
    {
        (*g_130) = (&g_152 == &g_152);
    }
    else
    {
        char l_199[5][3][2] = {{{(-1L),0x87L},{0xEAL,0x87L},{(-1L),0x87L}},{{0xEAL,0x87L},{(-1L),0x87L},{0xEAL,0x87L}},{{(-1L),0x87L},{0xEAL,0x87L},{(-1L),0x87L}},{{0xEAL,0x87L},{(-1L),0x87L},{0xEAL,0x87L}},{{(-1L),0x87L},{0xEAL,0x87L},{(-1L),0x87L}}};
        int l_200 = 0x1E146C4CL;
        short l_203[6][2] = {{0xA802L,0xE878L},{0xE878L,0xA802L},{0xE878L,0xE878L},{0xA802L,0xE878L},{0xE878L,0xA802L},{0xE878L,0xE878L}};
        int **l_210 = (void*)0;
        int i, j, k;
        (*g_130) = l_199[0][0][0];
lbl_209:
        l_200 = 9L;
        for (p_71 = 0; (p_71 != 1); p_71 = safe_add_func_uint16_t_u_u(p_71, 1))
        {
            const short l_206 = 1L;
            int * const *l_212 = &g_130;
            (*p_70) = (*p_70);
            if (l_203[0][0])
            {
                int **l_207[9][9][3] = {{{&g_28,&g_161,&g_161},{&g_161,(void*)0,(void*)0},{&g_161,&g_161,&g_28},{&g_28,&g_161,&g_161},{&g_28,&g_161,&g_28},{&g_161,(void*)0,&g_161},{&g_161,&g_161,&g_161},{(void*)0,&g_161,&g_28},{(void*)0,&g_161,&g_161}},{{&g_28,(void*)0,&g_28},{(void*)0,&g_161,&g_28},{&g_28,&g_28,&g_28},{(void*)0,&g_161,&g_28},{&g_161,&g_161,&g_161},{&g_28,(void*)0,(void*)0},{&g_161,(void*)0,(void*)0},{&g_28,&g_161,(void*)0},{&g_28,&g_161,&g_28}},{{&g_28,(void*)0,&g_161},{&g_161,&g_28,&g_28},{&g_28,&g_28,&g_161},{&g_161,&g_28,&g_28},{(void*)0,&g_161,&g_161},{&g_28,&g_161,(void*)0},{(void*)0,(void*)0,&g_28},{&g_28,&g_28,&g_28},{(void*)0,&g_161,(void*)0}},{{(void*)0,&g_161,(void*)0},{(void*)0,&g_161,(void*)0},{&g_28,&g_28,(void*)0},{(void*)0,&g_161,&g_28},{&g_28,(void*)0,&g_28},{&g_161,(void*)0,(void*)0},{&g_28,&g_28,&g_28},{&g_161,&g_161,&g_161},{&g_28,&g_28,&g_161}},{{&g_161,&g_161,&g_161},{&g_161,&g_28,&g_28},{&g_28,&g_161,(void*)0},{&g_161,&g_161,&g_161},{&g_161,(void*)0,&g_28},{&g_161,&g_161,&g_28},{&g_161,&g_161,(void*)0},{&g_28,&g_28,&g_161},{(void*)0,&g_161,&g_28}},{{&g_28,&g_28,&g_28},{(void*)0,&g_161,&g_28},{(void*)0,&g_28,&g_28},{(void*)0,(void*)0,(void*)0},{&g_28,(void*)0,&g_161},{&g_161,&g_161,&g_161},{&g_28,&g_28,&g_28},{(void*)0,&g_161,(void*)0},{&g_28,&g_161,&g_161}},{{&g_161,(void*)0,&g_28},{&g_28,&g_161,&g_28},{(void*)0,(void*)0,&g_161},{(void*)0,&g_28,(void*)0},{(void*)0,&g_28,&g_161},{&g_161,&g_161,&g_161},{(void*)0,(void*)0,&g_28},{&g_161,(void*)0,&g_161},{&g_28,&g_28,&g_161}},{{&g_161,(void*)0,&g_28},{&g_161,&g_28,&g_161},{&g_161,&g_28,&g_161},{&g_28,&g_161,&g_28},{&g_161,&g_28,&g_161},{&g_161,&g_161,&g_28},{&g_28,&g_161,&g_28},{&g_161,&g_161,(void*)0},{&g_161,&g_28,&g_28}},{{(void*)0,(void*)0,(void*)0},{&g_28,(void*)0,&g_28},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_161,&g_161},{&g_161,(void*)0,&g_28},{&g_28,(void*)0,&g_28},{&g_161,(void*)0,&g_161},{&g_161,&g_28,&g_28},{(void*)0,&g_161,&g_28}}};
                int **l_208 = &g_28;
                int i, j, k;
                if ((*g_130))
                    break;
                (*g_130) = (safe_div_func_uint32_t_u_u(g_145, l_206));
                if (l_96)
                    break;
                (*l_208) = (*g_129);

                ;
            }
            else
            {
                int *l_211[10] = {&l_96,&g_4,&l_96,&l_96,&g_4,&l_96,&l_96,&g_4,&l_96,&l_96};
                int i;
                if (l_96)
                    goto lbl_209;
                if (l_199[0][0][0])
                    continue;
                (**l_212) = ((p_71 & 65535UL) > p_69);
            }
            if ((**l_212))
                continue;
            for (g_131 = 1; (g_131 != 20); g_131++)
            {
                (*g_27) = (void*)0;

                ;
                if ((**p_70))
                    break;
            }
        }
        (*g_161) = (safe_mul_func_uint16_t_u_u((((((**p_70) && 6L) > 0xDFDEL) > p_72) & 0x1CA8L), ((**p_70) >= 0x82281F5AL)));
    }


    ;

    (*l_220) = g_218;
    for (p_72 = 8; (p_72 <= 39); p_72++)
    {
        for (g_108 = 0; (g_108 <= 3); g_108 += 1)
        {
            const unsigned char l_233 = 255UL;
            (*g_130) = (**p_70);
            for (g_145 = 0; (g_145 <= 3); g_145 += 1)
            {
                unsigned char *l_225[8] = {&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213,&l_213};
                int l_226 = 0xE0279960L;
                int **l_228 = &g_28;
                int i;
                (*g_130) = ((l_226 = (safe_mod_func_int16_t_s_s(p_71, 0x4115L))) > (l_227 != l_228));
                for (g_110 = 0; (g_110 <= 3); g_110 += 1)
                {
                    const unsigned char l_235 = 0x82L;
                    if ((**g_129))
                    {
                        int l_234[5];
                        int i;
                        for (i = 0; i < 5; i++)
                            l_234[i] = 0x96A62810L;
                        (**g_129) = ((safe_lshift_func_int8_t_s_u((safe_sub_func_int16_t_s_s(l_233, (*g_219))), ((g_242 = ((l_234[4] <= (g_180 = (l_235 < ((*g_161) >= (!(**p_70)))))) >= (safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_s(((0x8E74D01EL <= ((**p_70) >= g_131)) >= g_4), p_71)) <= g_131), l_234[3])) | p_72), (-4L))))) | g_4))) <= 1L);
                    }
                    else
                    {
                        (*g_161) = (safe_add_func_int8_t_s_s((-3L), g_191));
                    }
                }
            }
            (*p_70) = (*p_70);
        }
    }
    for (g_180 = 27; (g_180 >= 52); g_180++)
    {
        (*l_227) = &l_96;

        ;
    }


    return (*g_219);


}







static unsigned char func_78(int ** p_79, int * const * p_80, const unsigned p_81, unsigned short p_82)
{
    int l_141 = 0xF4C769F5L;
    int l_153 = (-1L);
    int l_158[9] = {1L,(-9L),1L,1L,(-9L),1L,1L,(-9L),1L};
    int *l_160[5];
    const char *l_194[1][5][3] = {{{&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145},{&g_145,&g_145,&g_145}}};
    const char **l_193 = &l_194[0][4][0];
    const char ***l_195[2];
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_160[i] = &g_4;
    for (i = 0; i < 2; i++)
        l_195[i] = &l_193;
lbl_198:
    for (g_108 = 0; (g_108 <= 15); g_108 = safe_add_func_int16_t_s_s(g_108, 3))
    {
        unsigned *l_134 = &g_110;
        char *l_144 = &g_145;
        unsigned short *l_151 = &g_152;
        (*g_27) = (*g_27);
        (**g_27) = ((void*)0 == l_134);
        (*g_130) = (safe_mul_func_uint8_t_u_u((p_82 >= (((void*)0 != &g_110) || (safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((**p_80), (+l_141))), (safe_lshift_func_int8_t_s_s(((*l_144) = 0x98L), 0)))))), ((l_153 = ((safe_unary_minus_func_int16_t_s((((*l_151) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(l_141, g_110)), p_82))) != g_110))) >= 9UL)) || p_81)));
        (*g_27) = (*g_27);
    }
    if ((safe_sub_func_int16_t_s_s(0x3C94L, (safe_add_func_int32_t_s_s((**g_27), l_141)))))
    {
        for (g_145 = 0; (g_145 <= 8); g_145 += 1)
        {
            int i;
            (*g_27) = (void*)0;

            ;
            return l_158[g_145];


        }
        if (((*g_129) != ((*g_27) = (*g_27))))
        {
            (**g_129) = (0x145EC307L < p_82);
        }
        else
        {
            unsigned short l_159 = 0x77FAL;
            return l_159;



        }
        l_160[1] = (*g_129);
    }
    else
    {
        unsigned short l_174 = 0x1DBDL;
        char *l_181 = &g_145;
        unsigned *l_185 = &g_110;
        unsigned char *l_189 = (void*)0;
        unsigned char *l_190 = &g_191;
        int **l_192 = &g_161;
        g_161 = ((*g_27) = &l_141);

        ;
        ;
        (*g_161) = (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u((!(safe_mod_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((*l_190) = ((safe_sub_func_int32_t_s_s((*g_161), ((safe_rshift_func_int16_t_s_s(l_174, 12)) ^ (safe_add_func_int16_t_s_s((1UL | p_82), (1L < (safe_add_func_int32_t_s_s(((safe_unary_minus_func_int8_t_s(((*l_181) = g_180))) || (*g_130)), (safe_lshift_func_uint16_t_u_u((((*l_185) = (~g_184)) || (safe_add_func_uint16_t_u_u((safe_unary_minus_func_uint32_t_u((l_174 <= p_81))), (-1L)))), p_81)))))))))) & g_108)) > p_82), p_82)), g_108))), g_184)), l_174));
        (*l_192) = (*g_129);

        ;
    }
    g_196 = l_193;

    ;
    if (g_108)
        goto lbl_198;
    return p_81;



}







static int ** func_83(int * const * p_84, const unsigned p_85, int * p_86, unsigned p_87, int * p_88)
{
    unsigned char l_115 = 0xE1L;
    int *l_123[6] = {&g_4,&g_4,&g_4,&g_4,&g_4,&g_4};
    int **l_128 = (void*)0;
    int i;
    for (g_110 = 0; (g_110 == 41); g_110++)
    {
        int *l_121 = &g_4;
        for (p_87 = (-20); (p_87 > 39); p_87 = safe_add_func_int32_t_s_s(p_87, 5))
        {
            if ((((l_115 == p_85) | (p_87 && p_85)) == 0xA0L))
            {
                int *l_116 = &g_4;
                if ((**g_27))
                    break;
                (*g_27) = l_116;
            }
            else
            {
                int *l_122[7][7] = {{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{&g_4,(void*)0,&g_4,&g_4,(void*)0,&g_4,&g_4},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4},{(void*)0,&g_4,&g_4,(void*)0,&g_4,&g_4,(void*)0},{&g_4,&g_4,&g_4,&g_4,&g_4,&g_4,&g_4}};
                int i, j;
                (*g_28) = (safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(l_115, 1)) != ((l_122[6][2] = l_121) == (void*)0)), ((((0x947F7088L == (*l_121)) < 0x93L) & (p_87 == p_85)) < 0xEE8D80EEL)));
            }
            l_123[1] = (void*)0;
        }
        for (g_108 = 5; (g_108 == 33); ++g_108)
        {
            int **l_126 = (void*)0;
            int **l_127 = &l_123[1];
            (*l_127) = (*p_84);
            (**p_84) = (*g_28);
            l_121 = l_121;
        }
    }
    (**g_27) = ((void*)0 == &l_123[1]);
    return l_128;


}







static int * const * func_89(int p_90, unsigned short p_91)
{
    int l_101 = 0x4B6D8D46L;
    int **l_105[7] = {&g_28,&g_28,&g_28,&g_28,&g_28,&g_28,&g_28};
    int ***l_104 = &l_105[1];
    short l_106[5] = {7L,7L,7L,7L,7L};
    int i;
    l_106[1] = (safe_add_func_int16_t_s_s((safe_div_func_int32_t_s_s((p_90 | ((((((void*)0 == &p_90) < l_101) & p_91) == (*g_28)) ^ (g_4 < p_91))), (safe_add_func_uint32_t_u_u((((*l_104) = (void*)0) == (void*)0), (-6L))))), 0x2669L));
    (*l_104) = (*l_104);
    return &g_28;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_108, "g_108", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_145, "g_145", print_hash_value);
    transparent_crc(g_152, "g_152", print_hash_value);
    transparent_crc(g_180, "g_180", print_hash_value);
    transparent_crc(g_184, "g_184", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    transparent_crc(g_275, "g_275", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_483, "g_483", print_hash_value);
    transparent_crc(g_591, "g_591", print_hash_value);
    transparent_crc(g_599, "g_599", print_hash_value);
    transparent_crc(g_617, "g_617", print_hash_value);
    transparent_crc(g_620, "g_620", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_706, "g_706", print_hash_value);
    transparent_crc(g_708, "g_708", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
