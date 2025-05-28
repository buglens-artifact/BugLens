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



static unsigned g_9 = 8UL;
static int g_15 = 0x149CEC79L;
static int g_16 = 9L;
static volatile unsigned g_17 = 0x13ED423CL;
static unsigned short g_25[5][3] = {{0xF162L,0xF162L,0xF162L},{0xF162L,0xF162L,0xF162L},{0xF162L,0xF162L,0xF162L},{0xF162L,0xF162L,0xF162L},{0xF162L,0xF162L,0xF162L}};
static unsigned g_36 = 0UL;
static volatile int g_38 = 5L;
static unsigned g_40 = 0xAFC49993L;
static const int *g_51[2][3][3] = {{{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15}},{{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15}}};
static const int ** volatile g_50 = &g_51[1][1][1];
static int g_68 = 0L;
static unsigned char g_79 = 255UL;
static volatile int g_110 = (-10L);
static int g_111 = 0x06C62CF0L;
static int g_115 = 9L;
static int *g_119 = (void*)0;
static int ** volatile g_118[10][8][3] = {{{&g_119,&g_119,(void*)0},{&g_119,(void*)0,&g_119},{&g_119,&g_119,&g_119},{(void*)0,&g_119,&g_119},{&g_119,(void*)0,(void*)0},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119}},{{&g_119,&g_119,(void*)0},{&g_119,&g_119,(void*)0},{&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119},{&g_119,(void*)0,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,(void*)0,&g_119}},{{&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119},{(void*)0,&g_119,&g_119},{&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119},{(void*)0,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119}},{{(void*)0,&g_119,&g_119},{&g_119,&g_119,(void*)0},{&g_119,&g_119,(void*)0},{&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{(void*)0,&g_119,(void*)0}},{{(void*)0,&g_119,&g_119},{(void*)0,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,(void*)0,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119}},{{&g_119,(void*)0,&g_119},{&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119},{(void*)0,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119}},{{&g_119,(void*)0,&g_119},{&g_119,&g_119,(void*)0},{&g_119,&g_119,&g_119},{&g_119,(void*)0,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{(void*)0,&g_119,&g_119},{&g_119,&g_119,(void*)0}},{{(void*)0,&g_119,&g_119},{&g_119,&g_119,(void*)0},{&g_119,(void*)0,&g_119},{(void*)0,&g_119,&g_119},{&g_119,&g_119,&g_119},{(void*)0,(void*)0,&g_119},{&g_119,&g_119,(void*)0},{(void*)0,&g_119,&g_119}},{{&g_119,&g_119,&g_119},{(void*)0,&g_119,&g_119},{&g_119,&g_119,&g_119},{(void*)0,&g_119,&g_119},{(void*)0,&g_119,&g_119},{&g_119,(void*)0,&g_119},{(void*)0,&g_119,&g_119},{&g_119,&g_119,(void*)0}},{{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,(void*)0},{(void*)0,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119},{&g_119,&g_119,(void*)0}}};
static unsigned g_126 = 4UL;
static unsigned char g_136 = 249UL;
static unsigned g_216 = 0xC47EE0E8L;
static int * volatile g_234 = &g_111;
static volatile int g_269 = 1L;
static volatile int g_270[4] = {(-6L),(-6L),(-6L),(-6L)};
static int g_271 = (-4L);
static short g_272 = 8L;
static unsigned char *g_300 = &g_79;
static unsigned char **g_299[3] = {&g_300,&g_300,&g_300};
static unsigned char *** volatile g_298[1][6][10] = {{{&g_299[1],(void*)0,&g_299[0],(void*)0,&g_299[0],&g_299[2],&g_299[0],&g_299[0],&g_299[2],&g_299[0]},{&g_299[2],(void*)0,(void*)0,&g_299[2],&g_299[2],&g_299[1],&g_299[2],&g_299[2],&g_299[2],(void*)0},{&g_299[0],&g_299[2],&g_299[2],&g_299[2],(void*)0,(void*)0,(void*)0,&g_299[2],&g_299[2],&g_299[2]},{&g_299[0],&g_299[2],&g_299[0],&g_299[2],&g_299[1],&g_299[0],&g_299[1],&g_299[2],&g_299[2],&g_299[2]},{&g_299[2],(void*)0,&g_299[0],(void*)0,(void*)0,&g_299[0],(void*)0,&g_299[2],&g_299[2],&g_299[1]},{&g_299[0],&g_299[0],&g_299[1],&g_299[2],&g_299[2],&g_299[2],(void*)0,&g_299[0],(void*)0,&g_299[2]}}};
static unsigned char *** const volatile g_301[9] = {&g_299[1],&g_299[1],&g_299[1],&g_299[1],&g_299[1],&g_299[1],&g_299[1],&g_299[1],&g_299[1]};
static volatile short g_337 = 0x0AB6L;
static short g_389 = 0x94F2L;
static volatile char g_401 = 7L;
static int **g_404 = (void*)0;
static volatile int g_495 = 1L;
static int ** volatile g_506 = &g_119;
static char g_528 = 0L;
static unsigned char g_571 = 0x0DL;
static int ** volatile g_605[6] = {&g_119,&g_119,&g_119,&g_119,&g_119,&g_119};
static int ** volatile g_627 = &g_119;
static char g_642 = 5L;
static short g_647[7][1] = {{1L},{1L},{1L},{1L},{1L},{1L},{1L}};
static unsigned short g_680 = 9UL;
static int g_693[10] = {0L,0xF4A28895L,0xF4A28895L,0L,0x838F9B2FL,0L,0xF4A28895L,0xF4A28895L,0L,0x838F9B2FL};
static short g_735 = 0x46E8L;
static int ** volatile g_773 = &g_119;
static short *g_834 = &g_735;
static volatile char g_952 = 0xA9L;
static int *g_956 = (void*)0;
static int **g_955[1] = {&g_956};
static unsigned short *g_973 = (void*)0;
static unsigned short **g_972 = &g_973;
static volatile short g_996 = 0x2397L;
static const unsigned short g_1006 = 1UL;
static char g_1101 = (-9L);
static int * const volatile g_1119 = &g_111;
static volatile int g_1141[5] = {0xB27CB126L,0xB27CB126L,0xB27CB126L,0xB27CB126L,0xB27CB126L};
static int ***g_1187[8] = {&g_955[0],&g_955[0],&g_955[0],&g_955[0],&g_955[0],&g_955[0],&g_955[0],&g_955[0]};
static unsigned g_1223 = 4294967288UL;
static volatile unsigned char g_1247[9] = {0x95L,0x95L,0x95L,0x95L,0x95L,0x95L,0x95L,0x95L,0x95L};
static int ** volatile g_1252 = &g_119;



static int func_1(void);
static int * func_2(unsigned short p_3);
static unsigned short func_4(char p_5, unsigned p_6, const int * p_7, unsigned short p_8);
static char func_12(unsigned p_13);
static int * const func_43(int * p_44);
static unsigned char func_52(int * p_53);
static int * func_54(const unsigned short p_55, unsigned p_56, int * const * p_57, int p_58, unsigned short p_59);
static unsigned func_88(char p_89, char p_90, int * p_91);
static int func_94(unsigned char p_95, const unsigned char p_96);
static const unsigned char func_97(unsigned char p_98, int ** p_99, const int ** const p_100, char p_101, const int p_102);
static int func_1(void)
{
    char l_678 = 1L;
    unsigned short *l_679 = &g_680;
    (*g_1252) = func_2(func_4(g_9, (g_9 , (safe_lshift_func_int8_t_s_u(func_12(g_9), 2))), &g_115, ((*l_679) ^= (g_216 > l_678))));
    return l_678;
}







static int * func_2(unsigned short p_3)
{
    unsigned short l_865 = 65528UL;
    short ** const l_866[4] = {&g_834,&g_834,&g_834,&g_834};
    int *l_870 = (void*)0;
    int **l_877 = &l_870;
    int l_881[1];
    unsigned short *l_883 = (void*)0;
    unsigned short **l_882 = &l_883;
    unsigned l_886 = 0x697FD5E9L;
    short l_915[4][9];
    unsigned char l_977 = 0x6BL;
    unsigned l_1015 = 4294967295UL;
    const int *l_1028[3];
    char *l_1037 = &g_528;
    unsigned short l_1063 = 0x856BL;
    unsigned char ***l_1080[8] = {&g_299[2],(void*)0,&g_299[2],&g_299[2],(void*)0,&g_299[2],&g_299[2],(void*)0};
    short l_1081 = 0x4195L;
    int l_1084 = 0L;
    unsigned short l_1085[9][3][3] = {{{0xBDFEL,0xC271L,0x1D2BL},{0UL,0xC271L,9UL},{0xB908L,1UL,0UL}},{{0x127BL,0xEE50L,0x127BL},{0x4D5BL,0UL,0xB7B9L},{0xAA59L,0x767CL,7UL}},{{0x767CL,0x58D9L,7UL},{0xC1A0L,65529UL,1UL},{0xAF27L,0xC1A0L,0x3D8FL}},{{0xC271L,0UL,65531UL},{0xB43BL,0x58D9L,1UL},{0UL,65531UL,0x127BL}},{{0xD50FL,0x127BL,0xC1A0L},{0x9C3BL,1UL,0xC1A0L},{65531UL,65533UL,0x127BL}},{{0xAA59L,1UL,1UL},{9UL,0x9C3BL,65531UL},{1UL,0x1D2BL,0x3D8FL}},{{0xEE50L,1UL,1UL},{0UL,0xAA59L,7UL},{0xB7B9L,1UL,0x4A6DL}},{{0xB908L,0x1D2BL,0xBDFEL},{0x75FFL,0x9C3BL,0UL},{0x58D9L,1UL,0x9C3BL}},{{1UL,65533UL,0xB7B9L},{1UL,1UL,1UL},{1UL,0x127BL,0x58D9L}}};
    const int *l_1106 = &g_693[4];
    const int **l_1105 = &l_1106;
    unsigned l_1113[2];
    unsigned short **l_1114 = &g_973;
    short l_1135 = 0xC817L;
    short l_1142 = 0x83BCL;
    char l_1198[6][10][4] = {{{0xD3L,0x15L,0x62L,0x8CL},{0L,0xECL,7L,0x62L},{0L,0x59L,0x10L,0xECL},{0x8CL,0xE3L,0L,0x78L},{(-1L),0xFDL,7L,0xD8L},{0x5EL,(-1L),3L,(-8L)},{0xD3L,(-4L),(-4L),0xD3L},{0xA0L,5L,0xD8L,7L},{0x8CL,0L,0x56L,0L},{0xD3L,0L,0x50L,0L}},{{(-10L),0x59L,0xADL,0L},{0x49L,0x78L,5L,0L},{0x5EL,0xD0L,0xA0L,0xF3L},{0xD8L,0xECL,0xBFL,2L},{0x65L,0x5EL,0x56L,0xFDL},{0x8EL,(-4L),0xADL,0x95L},{0xE3L,(-1L),(-1L),0xADL},{0x65L,0x95L,(-7L),4L},{4L,0L,0xA0L,1L},{0L,0x5EL,0xD8L,0xBFL}},{{0x49L,0x8CL,0x5AL,0x78L},{(-1L),0xD8L,0x50L,0L},{0x62L,4L,0L,(-1L)},{4L,0x8CL,0L,1L},{0x0EL,0L,0xD0L,1L},{0xADL,5L,0xADL,0xD8L},{0x1DL,0x95L,0x10L,0L},{0xEBL,0L,(-1L),0x95L},{0xD8L,(-8L),(-1L),0L},{0xEBL,0x5EL,0x10L,0L}},{{0x1DL,0L,0xADL,0xF3L},{0xADL,0xF3L,0xD0L,0xADL},{0x0EL,0x78L,0x8EL,0xF3L},{6L,0x55L,0xCEL,(-10L)},{(-8L),0xE9L,(-9L),0L},{0x50L,(-1L),(-1L),0xF3L},{(-1L),0L,(-1L),0L},{(-1L),0x62L,(-9L),3L},{6L,0xA0L,0L,0xE3L},{(-4L),(-1L),0L,(-2L)}},{{0x42L,0xBFL,0x10L,(-9L)},{0xD0L,0xF3L,0x5EL,0L},{(-4L),(-9L),0x5AL,6L},{(-1L),0L,(-9L),(-9L)},{0xE9L,0xE9L,0x65L,0xADL},{(-1L),0L,0x10L,0L},{0L,6L,(-9L),0x10L},{7L,6L,0x1DL,0L},{6L,0L,0x4FL,0xADL},{(-8L),0xE9L,3L,(-9L)}},{{0L,0L,(-1L),6L},{0xD8L,(-9L),2L,0L},{(-1L),0xF3L,0L,(-9L)},{6L,0xBFL,(-1L),(-2L)},{0L,(-1L),2L,0xE3L},{5L,0xA0L,0x10L,3L},{0L,0x62L,0L,(-1L)},{(-1L),0xCEL,0L,(-10L)},{0x4FL,0xF3L,(-1L),(-1L)},{0L,0xD8L,0x49L,0L}}};
    int *l_1226 = &g_115;
    int *l_1227 = &l_881[0];
    int *l_1228 = &l_881[0];
    int *l_1229 = &g_68;
    int *l_1230 = &l_881[0];
    int *l_1231 = &g_68;
    int *l_1232 = &g_68;
    int *l_1233 = &l_881[0];
    int *l_1234 = &g_115;
    int *l_1235 = &g_115;
    int *l_1236 = &g_111;
    int *l_1237 = &g_115;
    int *l_1238 = &g_115;
    int *l_1239 = &l_881[0];
    int *l_1240 = &l_881[0];
    int *l_1241 = &l_881[0];
    int *l_1242 = (void*)0;
    int *l_1243[4][10] = {{&g_68,&l_881[0],&l_881[0],&g_68,&g_15,&l_881[0],&g_68,&l_881[0],&g_15,&g_68},{&l_881[0],&g_68,&l_881[0],&g_15,&g_68,&l_881[0],&l_881[0],&g_68,&g_15,&l_881[0]},{(void*)0,(void*)0,(void*)0,&g_68,&g_111,(void*)0,&g_111,&g_68,(void*)0,(void*)0},{&g_111,&l_881[0],&l_881[0],&g_111,&g_15,&g_15,&g_111,&l_881[0],&l_881[0],&g_111}};
    char l_1244 = 0xF7L;
    int l_1245 = 0x50AB21B9L;
    int l_1246 = (-5L);
    int *l_1250 = &l_881[0];
    int *l_1251 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_881[i] = 0x344EB3E7L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 9; j++)
            l_915[i][j] = (-8L);
    }
    for (i = 0; i < 3; i++)
        l_1028[i] = &g_115;
    for (i = 0; i < 2; i++)
        l_1113[i] = 18446744073709551614UL;
    for (g_272 = 1; (g_272 > 26); g_272 = safe_add_func_int16_t_s_s(g_272, 1))
    {
        unsigned char l_869 = 0x3EL;
        const int ** const l_878 = (void*)0;
        char l_880 = 0x23L;
        int *l_911 = &l_881[0];
        int l_929 = 0x5B8E456FL;
        unsigned short *l_975 = &g_25[2][1];
        int l_982 = 0x72609F35L;
        int l_986 = (-1L);
        int l_1008 = 0L;
        unsigned l_1009 = 0x826F1375L;
        int l_1012 = 0xA86CA988L;
        int l_1014[4][6];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 6; j++)
                l_1014[i][j] = 0xC11865B4L;
        }
    }
    if (((l_881[0] |= (g_647[1][0] ^= ((safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int16_t_s((&g_299[2] == l_1080[6]))), l_1081)) != ((l_1085[3][1][0] ^= (safe_sub_func_uint8_t_u_u(((g_642 = (&g_834 != (void*)0)) || l_1084), p_3))) || p_3)))) ^ (safe_unary_minus_func_int8_t_s((p_3 > 0xA15D1A37L)))))
    {
        char l_1095 = 0x8FL;
        int l_1108 = 7L;
        for (g_15 = (-20); (g_15 < 22); g_15++)
        {
            int l_1096 = 0x3F001E22L;
            unsigned *l_1097[9][3][4] = {{{&g_216,&g_216,&g_216,(void*)0},{&g_216,(void*)0,&g_216,&g_216},{&g_216,(void*)0,&g_216,(void*)0}},{{&g_216,&g_216,&g_216,&g_216},{&g_216,(void*)0,&g_216,(void*)0},{&g_216,(void*)0,&g_216,&g_216}},{{&g_216,&g_216,&g_216,&g_216},{(void*)0,&g_216,&g_216,&g_216},{&g_216,&g_216,&g_216,&g_216}},{{&g_216,(void*)0,&g_216,&g_216},{&g_216,&g_216,&g_216,&g_216},{&g_216,&g_216,&g_216,&g_216}},{{&g_216,&g_216,&g_216,&g_216},{&g_216,(void*)0,(void*)0,&g_216},{&g_216,&g_216,&g_216,&g_216}},{{&g_216,(void*)0,&g_216,&g_216},{(void*)0,&g_216,&g_216,&g_216},{&g_216,&g_216,&g_216,&g_216}},{{&g_216,&g_216,&g_216,&g_216},{&g_216,&g_216,&g_216,&g_216},{&g_216,&g_216,&g_216,&g_216}},{{&g_216,&g_216,&g_216,(void*)0},{(void*)0,(void*)0,&g_216,(void*)0},{(void*)0,&g_216,&g_216,&g_216}},{{(void*)0,(void*)0,&g_216,&g_216},{&g_216,&g_216,(void*)0,&g_216},{(void*)0,&g_216,&g_216,&g_216}}};
            unsigned *l_1100[9][1] = {{&l_1015},{&g_40},{&g_40},{&l_1015},{&g_40},{&g_40},{&l_1015},{&g_40},{&g_40}};
            int **l_1104 = &g_956;
            int l_1107 = 0x29AE6A98L;
            int i, j, k;
            l_1108 = ((safe_mod_func_uint16_t_u_u(((func_94(p_3, (((g_110 || p_3) || (safe_sub_func_uint32_t_u_u((g_1101 = (safe_sub_func_int32_t_s_s((l_1095 , (l_1096 |= l_1095)), (((g_216--) , &g_299[2]) != (void*)0)))), 1L))) || (((safe_add_func_uint16_t_u_u((~(((l_1104 == l_1105) & p_3) < l_1107)), (-3L))) > p_3) ^ 4294967295UL))) != 0x38L) & p_3), 1UL)) && l_1096);
        }
        for (g_389 = 0; (g_389 != 19); g_389 = safe_add_func_uint32_t_u_u(g_389, 9))
        {
            unsigned short * const *l_1112 = &g_973;
            unsigned short * const **l_1111 = &l_1112;
            unsigned short ***l_1115 = &l_1114;
            int *l_1118 = &l_881[0];
            (*g_1119) &= ((((l_1111 == ((l_1095 || (l_1113[0] , ((((*l_1115) = l_1114) != &l_883) >= g_25[4][1]))) , (((safe_sub_func_int16_t_s_s((l_1108 = (p_3 < (func_88(p_3, g_9, l_1118) , g_9))), 0xF7DBL)) >= 255UL) , &l_1112))) , (*l_1118)) , (*l_877)) != (*l_877));
        }
    }
    else
    {
        int l_1136 = 0xE10EA514L;
        const int ** const l_1181 = &l_1028[2];
        int l_1215 = (-1L);
        int l_1220 = 0x4041FD5FL;
        int l_1221 = 0x9E506506L;
        int l_1222[2][9] = {{8L,8L,8L,8L,8L,8L,8L,8L,8L},{0x986CE986L,0x986CE986L,0x986CE986L,0x986CE986L,0x986CE986L,0x986CE986L,0x986CE986L,0x986CE986L,0x986CE986L}};
        int i, j;
        if (p_3)
        {
            char l_1122 = 0x58L;
            unsigned *l_1123 = (void*)0;
            unsigned *l_1124 = &l_1015;
            char l_1137 = 5L;
            int l_1138 = 1L;
            l_1138 &= ((safe_add_func_int16_t_s_s(l_1122, (((*l_1124) = 0x461C2CB2L) || g_25[3][1]))) <= (safe_add_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u(((*l_1037) = g_647[2][0]), func_94((p_3 ^ (((((5L < (l_1123 == &g_216)) , (safe_add_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s((l_1135 , l_1136), 1)), l_1137))) ^ 65535UL) , 0L) && l_1136)), p_3))), p_3)), (-1L))));
            (*g_119) &= p_3;
        }
        else
        {
            short l_1149 = 1L;
            int l_1160 = (-3L);
            int * const *l_1183 = &g_119;
            unsigned *l_1184 = (void*)0;
            const int ***l_1188 = &l_1105;
            int *l_1193 = &g_111;
            int *l_1194 = &g_68;
            int *l_1195 = &l_1136;
            int *l_1196 = &g_115;
            int *l_1197 = &g_68;
            int *l_1199 = (void*)0;
            int *l_1200 = &l_1136;
            int *l_1201 = &l_1160;
            int *l_1202 = &l_1136;
            int *l_1203 = (void*)0;
            int *l_1204 = &l_881[0];
            int *l_1205 = &l_1136;
            int l_1206[7] = {0L,0L,0L,0L,0L,0L,0L};
            int *l_1207 = &g_111;
            int *l_1208 = &g_68;
            int *l_1209 = (void*)0;
            int *l_1210 = &l_1206[1];
            int *l_1211 = &l_881[0];
            int *l_1212 = &l_1206[4];
            int *l_1213 = (void*)0;
            int *l_1214 = &l_1160;
            int *l_1216 = &l_1206[6];
            int *l_1217 = &g_15;
            int *l_1218 = &l_881[0];
            int *l_1219[1];
            int i;
            for (i = 0; i < 1; i++)
                l_1219[i] = &l_881[0];
            for (l_977 = (-3); (l_977 <= 35); l_977 = safe_add_func_int16_t_s_s(l_977, 6))
            {
                unsigned char l_1163 = 249UL;
                int *l_1168[10][2][1] = {{{&g_115},{&l_1136}},{{(void*)0},{&l_1136}},{{&g_115},{(void*)0}},{{(void*)0},{(void*)0}},{{(void*)0},{&g_115}},{{&l_1136},{(void*)0}},{{&l_1136},{&g_115}},{{(void*)0},{(void*)0}},{{(void*)0},{(void*)0}},{{&g_115},{&l_1136}}};
                int *l_1189 = &g_115;
                int i, j, k;
                for (g_15 = 0; (g_15 <= 0); g_15 += 1)
                {
                    l_1142 ^= g_1141[2];
                }
                for (g_79 = 0; (g_79 != 53); ++g_79)
                {
                    int *l_1150 = &g_68;
                    unsigned *l_1157[8] = {&l_1113[0],&l_1113[0],&l_1113[0],&l_1113[0],&l_1113[0],&l_1113[0],&l_1113[0],&l_1113[0]};
                    int * const *l_1162 = (void*)0;
                    int * const **l_1161 = &l_1162;
                    unsigned *l_1164 = &g_40;
                    int *l_1165 = &l_881[0];
                    short *l_1166[10][2][5] = {{{&g_389,&g_647[1][0],&g_735,&l_915[3][1],&g_389},{&g_389,&g_272,&g_647[6][0],&l_1142,&g_272}},{{&l_915[0][1],&g_647[1][0],&g_647[6][0],&g_647[1][0],&g_647[1][0]},{&g_735,&g_647[1][0],&g_735,&l_1142,&g_647[1][0]}},{{(void*)0,&g_647[1][0],&g_735,&l_915[3][1],&g_272},{&g_735,&g_647[1][0],&l_915[0][1],&g_272,&g_389}},{{&l_915[0][1],&g_647[1][0],&g_735,&g_272,&l_1142},{&g_389,&g_647[1][0],&g_735,&l_915[3][1],&g_389}},{{&g_389,&g_272,&g_647[6][0],&l_1142,&g_272},{&l_915[0][1],&g_647[1][0],&g_647[6][0],&g_647[1][0],&g_647[1][0]}},{{&g_735,&g_647[1][0],&g_735,&l_1142,&g_647[1][0]},{(void*)0,&g_647[1][0],&g_735,&l_915[3][1],&g_272}},{{&g_735,&g_647[1][0],&l_915[3][1],&l_1149,(void*)0},{&l_915[3][1],(void*)0,&l_1142,&l_1149,&l_1149}},{{&g_272,&l_1135,&l_1142,(void*)0,(void*)0},{&g_272,(void*)0,&g_389,&g_272,&l_1149}},{{&l_915[3][1],&l_1135,&g_389,&g_389,&g_389},{&l_1142,(void*)0,&l_1142,&g_272,&g_389}},{{&g_647[1][0],(void*)0,&l_1142,(void*)0,&l_1149},{&l_1142,(void*)0,&l_915[3][1],&l_1149,(void*)0}}};
                    unsigned short l_1182 = 0x6EEFL;
                    int i, j, k;
                    (*l_1165) = ((safe_lshift_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(((((*l_1164) = ((p_3 & ((l_1136 = p_3) , ((((*l_1150) = l_1149) , (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int16_t_s_s(func_88(p_3, g_126, func_54(l_1149, (l_1160 = (g_216--)), ((*l_1161) = &g_119), (p_3 | (((*l_1150) = (0x585FL ^ l_1163)) , 0xB3L)), l_1163)), p_3)) > 0x59L) <= 0x7F71L), l_1136)) | l_1149), 6))) && (*l_1150)))) > p_3)) && l_1136) || p_3), 3)), 4)) || l_1149);
                    for (l_1063 = 1; (l_1063 <= 4); l_1063 += 1)
                    {
                        int *l_1167 = &g_68;
                        unsigned short *l_1180[6][7] = {{&l_1085[4][2][1],&l_1085[2][0][0],&l_1085[4][2][1],&l_1085[4][2][1],&l_1085[2][0][0],&l_1085[4][2][1],&l_1085[4][2][1]},{&l_1085[2][0][0],&l_1085[2][0][0],(void*)0,&l_1085[2][0][0],&l_1085[2][0][0],(void*)0,&l_1085[2][0][0]},{&l_1085[2][0][0],&l_1085[4][2][1],&l_1085[4][2][1],&l_1085[2][0][0],&l_1085[4][2][1],&l_1085[4][2][1],&l_1085[2][0][0]},{&l_1085[4][2][1],&l_1085[2][0][0],&l_1085[4][2][1],&l_1085[4][2][1],&l_1085[2][0][0],&l_1085[4][2][1],&l_1085[4][2][1]},{&l_1085[2][0][0],&l_1085[2][0][0],(void*)0,&l_1085[2][0][0],&l_1085[2][0][0],(void*)0,&l_1085[2][0][0]},{&l_1085[2][0][0],&l_1085[4][2][1],&l_1085[4][2][1],&l_1085[2][0][0],&l_1085[4][2][1],&l_1085[4][2][1],&l_1085[2][0][0]}};
                        int ***l_1186 = (void*)0;
                        int ****l_1185[7] = {&l_1186,&l_1186,&l_1186,&l_1186,&l_1186,&l_1186,&l_1186};
                        int i, j;
                        g_1141[l_1063] &= func_88(((void*)0 == l_1166[5][0][2]), p_3, l_1167);
                        (*l_877) = l_1168[8][0][0];
                        g_111 &= (safe_sub_func_int16_t_s_s((safe_add_func_uint32_t_u_u((((g_1187[3] = ((safe_unary_minus_func_int8_t_s((((((((((safe_lshift_func_int8_t_s_u(0x38L, func_88(g_270[3], p_3, ((*l_877) = func_54(l_1149, func_97(((*l_1167) , (l_1136 , (l_1149 > ((*l_1167) |= ((safe_mod_func_int32_t_s_s((((g_272 = (safe_lshift_func_uint16_t_u_u(((p_3 > g_693[4]) >= 0UL), p_3))) , 0x7B27L) , (-1L)), p_3)) < 0x5DL))))), &g_119, l_1181, l_1182, p_3), l_1183, p_3, p_3))))) == g_25[4][2]) , (void*)0) != l_1184) < 4294967288UL) != (*l_1165)) | g_115) , (*l_870)) <= g_36))) , &g_955[0])) != l_1188) & p_3), 0x0A843038L)), 0x048CL));
                        return l_1189;
                    }
                }
                for (g_111 = 0; (g_111 <= (-20)); g_111--)
                {
                    int *l_1192 = &l_881[0];
                    return l_1189;
                }
            }
            --g_1223;
        }
    }
    --g_1247[3];
    return l_1251;
}







static unsigned short func_4(char p_5, unsigned p_6, const int * p_7, unsigned short p_8)
{
    char l_681 = 0x38L;
    int l_682 = (-7L);
    int *l_683 = (void*)0;
    int *l_684[4][1];
    short l_685 = 0x2FB0L;
    char l_686 = (-10L);
    unsigned char l_687 = 0xB6L;
    int l_690 = (-1L);
    short l_691[6][2][4] = {{{0x735FL,(-1L),(-3L),(-1L)},{(-1L),(-1L),0xBE45L,(-1L)}},{{0x76B6L,0x735FL,(-1L),(-1L)},{(-1L),(-1L),0xDB96L,(-4L)}},{{(-1L),0xBE45L,(-1L),(-1L)},{0x76B6L,(-4L),0x76B6L,(-1L)}},{{0x735FL,(-4L),0xDB96L,(-1L)},{(-4L),0xBE45L,0xBE45L,(-4L)}},{{0x76B6L,(-1L),0xBE45L,(-1L)},{(-4L),0x735FL,0xDB96L,0x735FL}},{{0x735FL,0xBE45L,0x76B6L,0x735FL},{0x76B6L,0x735FL,(-1L),(-1L)}}};
    int l_692[2][4] = {{0x49A4AFB3L,0x49A4AFB3L,0L,0x49A4AFB3L},{0x49A4AFB3L,(-1L),(-1L),0x49A4AFB3L}};
    unsigned char l_694 = 0x12L;
    int l_700[3];
    const char l_703 = 0x74L;
    int * const *l_709 = &l_684[0][0];
    int l_731 = 0L;
    char l_760 = (-1L);
    int * const l_772 = &g_271;
    int * const *l_771[1];
    char l_796[9] = {0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL,0x1EL};
    unsigned short l_802[5] = {0UL,0UL,0UL,0UL,0UL};
    int **l_822 = &l_684[3][0];
    char l_852 = 5L;
    int *l_862 = &l_690;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_684[i][j] = &g_111;
    }
    for (i = 0; i < 3; i++)
        l_700[i] = 0x1BF153F8L;
    for (i = 0; i < 1; i++)
        l_771[i] = &l_772;
    l_687--;
    l_694++;
    if ((safe_sub_func_int32_t_s_s((((safe_unary_minus_func_int16_t_s((func_94((l_700[1] , func_97((*g_300), &l_684[2][0], (((0x8E8EL < (-1L)) , g_693[4]) , &g_51[1][1][1]), g_647[1][0], (((safe_sub_func_int16_t_s_s(p_6, 0xB261L)) < g_25[4][2]) , g_79))), l_703) , p_6))) , p_5) , (*g_234)), p_6)))
    {
        unsigned l_704 = 4294967295UL;
        int l_707 = 0xF736BA4FL;
        unsigned l_708 = 0UL;
        l_704++;
        l_707 ^= (*p_7);
        (*g_119) = (func_88(l_708, p_6, func_54(p_8, g_269, l_709, (*p_7), l_708)) == l_707);
    }
    else
    {
        short l_714 = 0x4C27L;
        int l_717 = 0x00CE6BF4L;
        int l_740 = 5L;
        int l_741 = 0x5458356FL;
        int l_742 = 1L;
        int l_745 = 0x38A72328L;
        int l_746[9][7][3] = {{{(-9L),0x30BA0C5DL,0xE4DF4401L},{0xE4DF4401L,0L,0x2D232FBBL},{(-1L),0x331DD1C2L,0xF3B21078L},{0x30BA0C5DL,0L,0xF7597E21L},{1L,0x30BA0C5DL,0x393068D9L},{1L,(-9L),1L},{0xAD5C7228L,0x56C580A3L,(-1L)}},{{0L,1L,9L},{0L,0x14A1901AL,1L},{0x3028DEE8L,1L,0xAA113775L},{0xF3FFA678L,1L,0x891DBDACL},{0L,(-7L),0L},{1L,0x054105C9L,0x2D232FBBL},{1L,0x1EDB7AB7L,(-1L)}},{{0xF059FFDAL,0xD80828EAL,1L},{0L,1L,0xAA113775L},{9L,0x891DBDACL,9L},{1L,0x3028DEE8L,0L},{0x891DBDACL,1L,0x30BA0C5DL},{0x56C580A3L,1L,0xD80828EAL},{0x378923D1L,0x3613BCF6L,0xF3B21078L}},{{0x56C580A3L,1L,(-1L)},{0x891DBDACL,1L,0xF3FFA678L},{1L,0L,0xF059FFDAL},{9L,(-1L),1L},{0L,0L,0L},{0xF059FFDAL,(-1L),0x054105C9L},{1L,1L,0x393068D9L}},{{1L,0xF7597E21L,(-1L)},{0L,0xF7597E21L,1L},{(-9L),1L,(-7L)},{1L,(-1L),0x1EDB7AB7L},{0x331DD1C2L,0L,(-1L)},{1L,(-1L),1L},{0L,0L,0xE4DF4401L}},{{(-1L),1L,0L},{1L,1L,0x378923D1L},{(-1L),0x3613BCF6L,0L},{0xAA113775L,1L,0x378923D1L},{(-1L),1L,0L},{(-1L),0x3028DEE8L,0xE4DF4401L},{0xAB04A07AL,0x891DBDACL,1L}},{{0xF7597E21L,1L,(-1L)},{1L,0xF059FFDAL,(-1L)},{(-1L),(-1L),0x3613BCF6L},{1L,(-1L),0x2D232FBBL},{0x162177B0L,0x3613BCF6L,0xD80828EAL},{0x162177B0L,1L,(-1L)},{1L,(-9L),(-1L)}},{{(-1L),1L,1L},{1L,0xF3B21078L,3L},{0x331DD1C2L,0x054105C9L,0x054105C9L},{(-7L),0xF7597E21L,(-1L)},{0xF7597E21L,0xAD5C7228L,0x14A1901AL},{0x14A1901AL,0L,0x56C580A3L},{0L,1L,0xF059FFDAL}},{{0xAD5C7228L,0L,1L},{8L,0xAD5C7228L,0xAA113775L},{1L,0xF7597E21L,(-9L)},{1L,0x054105C9L,0L},{0x2D232FBBL,0xF3B21078L,(-1L)},{9L,1L,0xF3B21078L},{0x393068D9L,(-9L),0L}}};
        int *l_769 = (void*)0;
        int **l_768 = &l_769;
        int **l_845 = (void*)0;
        int **l_846[2];
        unsigned short *l_847 = &l_802[4];
        unsigned l_857 = 0x779038AFL;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_846[i] = &g_119;
        for (l_690 = 0; (l_690 > 11); ++l_690)
        {
            char l_722 = 0L;
            int l_730 = 0x5D4465CFL;
            int l_733 = 0x29FB87C4L;
            int l_734 = (-1L);
            int l_737[9] = {0x64EA4249L,(-1L),(-1L),0x64EA4249L,(-1L),(-1L),0x64EA4249L,(-1L),(-1L)};
            int l_759 = (-1L);
            int * const *l_819 = (void*)0;
            int **l_820 = (void*)0;
            const int **l_830 = &g_51[1][1][1];
            short **l_833 = (void*)0;
            unsigned char *l_835 = &l_694;
            unsigned *l_836 = &g_9;
            int i;
            for (g_9 = 3; (g_9 <= 60); g_9 = safe_add_func_int8_t_s_s(g_9, 3))
            {
                short l_721 = 0x152DL;
                int l_728 = (-2L);
                int l_739[10] = {(-2L),5L,0x81B63966L,0x81B63966L,5L,(-2L),5L,0x81B63966L,0x81B63966L,5L};
                unsigned char *l_767 = &l_694;
                int ***l_770 = &l_768;
                int ***l_821[6] = {&l_820,&l_820,&l_820,&l_820,&l_820,&l_820};
                unsigned *l_825 = &g_40;
                int i;
                if (l_714)
                    break;
                for (p_5 = 0; (p_5 == 6); p_5 = safe_add_func_uint32_t_u_u(p_5, 3))
                {
                    unsigned l_718[10][2] = {{0xB5F1849DL,0xB5F1849DL},{0xB5F1849DL,0xB5F1849DL},{0xB5F1849DL,0xB5F1849DL},{0xB5F1849DL,0xB5F1849DL},{0xB5F1849DL,0xB5F1849DL},{0xB5F1849DL,0xB5F1849DL},{0xB5F1849DL,0xB5F1849DL},{0xB5F1849DL,0xB5F1849DL},{0xB5F1849DL,0xB5F1849DL},{0xB5F1849DL,0xB5F1849DL}};
                    int l_724 = (-1L);
                    int l_729[2][3];
                    unsigned l_747 = 0x49887656L;
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_729[i][j] = 0x6944EFADL;
                    }
                }
                if ((func_94(l_760, ((safe_lshift_func_uint8_t_u_u((--(*g_300)), p_5)) , (func_94((--(*g_300)), ((*l_767) = l_734)) > (p_5 != l_721)))) <= (((*l_770) = l_768) == l_771[0])))
                {
                    const unsigned char *l_778[5];
                    const unsigned char **l_777 = &l_778[4];
                    int l_797 = 0x3E7DEE1FL;
                    int **l_806 = &l_684[3][0];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_778[i] = &g_79;
                    (*g_773) = (*l_709);
                    for (l_733 = 1; (l_733 >= 0); l_733 -= 1)
                    {
                        const unsigned char **l_776 = (void*)0;
                        unsigned short *l_779 = &g_25[4][2];
                        unsigned *l_782 = &g_126;
                        unsigned short *l_783 = &g_680;
                        int i, j, k;
                        if ((*p_7))
                            break;
                        (*g_119) = (((*l_779) &= ((*g_300) & (l_776 == l_777))) || (0x2F44L != ((l_739[8] | ((*l_782) = (safe_sub_func_int16_t_s_s(g_647[5][0], ((void*)0 != &g_642))))) == ((*l_783) = (g_68 , 6UL)))));
                    }
                    for (g_40 = 0; (g_40 <= 4); g_40 += 1)
                    {
                        unsigned *l_790 = (void*)0;
                        unsigned *l_791 = (void*)0;
                        unsigned *l_792 = (void*)0;
                        unsigned *l_793 = &g_36;
                        (**l_709) = (((safe_rshift_func_uint8_t_u_u((0x6448C27AL && (safe_rshift_func_uint8_t_u_s((func_94(p_6, ((safe_rshift_func_uint8_t_u_s(func_94((func_88(g_693[4], (((*l_793) = 0xB7E1C744L) != 0xC332F221L), l_791) == (+((safe_rshift_func_int8_t_s_s(0x0EL, 5)) > p_5))), l_741), l_714)) , p_8)) > 0L), 5))), 1)) < 0x2BL) > p_8);
                        if ((**g_773))
                            break;
                        l_737[5] |= 0xA489FC0CL;
                    }
                    if ((*p_7))
                    {
                        (**l_709) = func_94(((*g_300) = (l_797 = (l_728 >= l_796[7]))), l_742);
                        (**l_709) = (*p_7);
                        (**l_709) |= (g_36 , (-1L));
                        (*g_119) = (*p_7);
                    }
                    else
                    {
                        short l_805 = 1L;
                        const int ** const l_807 = &g_51[1][0][0];
                        unsigned short *l_808 = &g_680;
                        short *l_809 = (void*)0;
                        short *l_810 = (void*)0;
                        short *l_811[8][3][2] = {{{&l_805,&l_685},{&l_805,&l_805},{&l_685,&l_805}},{{&l_805,&l_685},{&l_805,&l_805},{&l_685,&l_805}},{{&l_805,&l_685},{&l_805,&l_805},{&l_685,&l_805}},{{&l_805,&l_685},{&l_805,&l_805},{&l_685,&l_805}},{{&l_805,&l_685},{&l_805,&l_805},{&l_685,&l_805}},{{&l_805,&l_685},{&l_805,&l_805},{&l_685,&l_805}},{{&l_805,&l_685},{&l_805,&l_805},{&l_685,&l_805}},{{&l_805,&l_685},{&l_805,&l_805},{&l_685,&l_805}}};
                        char *l_812[10][8][3] = {{{&l_722,(void*)0,(void*)0},{&l_686,&l_681,&l_681},{&g_528,&l_796[3],&l_722},{&l_686,&l_681,(void*)0},{&l_722,(void*)0,&l_722},{&l_722,&l_681,&l_681},{(void*)0,(void*)0,(void*)0},{&g_642,&l_681,&l_681}},{{(void*)0,&l_796[3],&l_686},{&l_722,&l_681,&l_681},{&l_722,(void*)0,(void*)0},{&l_686,&l_681,&l_681},{&g_528,(void*)0,(void*)0},{&l_722,&l_681,&l_681},{(void*)0,&l_722,(void*)0},{&l_686,(void*)0,&l_681}},{{(void*)0,&l_722,&l_722},{(void*)0,&l_681,&l_681},{(void*)0,(void*)0,&l_796[3]},{&l_686,&l_681,&l_681},{(void*)0,&l_686,&l_722},{&l_722,&l_681,&l_681},{&l_722,(void*)0,(void*)0},{&l_722,&l_681,&l_681}},{{(void*)0,&l_722,(void*)0},{&l_686,(void*)0,&l_681},{(void*)0,&l_722,&l_722},{(void*)0,&l_681,&l_681},{(void*)0,(void*)0,&l_796[3]},{&l_686,&l_681,&l_681},{(void*)0,&l_686,&l_722},{&l_722,&l_681,&l_681}},{{&l_722,(void*)0,(void*)0},{&l_722,&l_681,&l_681},{(void*)0,&l_722,(void*)0},{&l_686,(void*)0,&l_681},{(void*)0,&l_722,&l_722},{(void*)0,&l_681,&l_681},{(void*)0,(void*)0,&l_796[3]},{&l_686,&l_681,&l_681}},{{(void*)0,&l_686,&l_722},{&l_722,&l_681,&l_681},{&l_722,(void*)0,(void*)0},{&l_722,&l_681,&l_681},{(void*)0,&l_686,&l_722},{&l_681,&l_686,(void*)0},{&l_722,&l_686,&l_686},{(void*)0,&l_796[7],(void*)0}},{{&l_722,&g_528,(void*)0},{&l_681,(void*)0,(void*)0},{(void*)0,&l_796[3],&l_686},{&l_681,(void*)0,(void*)0},{&l_686,&g_528,&l_722},{&l_681,&l_796[7],(void*)0},{(void*)0,&l_686,&l_722},{&l_681,&l_686,(void*)0}},{{&l_722,&l_686,&l_686},{(void*)0,&l_796[7],(void*)0},{&l_722,&g_528,(void*)0},{&l_681,(void*)0,(void*)0},{(void*)0,&l_796[3],&l_686},{&l_681,(void*)0,(void*)0},{&l_686,&g_528,&l_722},{&l_681,&l_796[7],(void*)0}},{{(void*)0,&l_686,&l_722},{&l_681,&l_686,(void*)0},{&l_722,&l_686,&l_686},{(void*)0,&l_796[7],(void*)0},{&l_722,&g_528,(void*)0},{&l_681,(void*)0,(void*)0},{(void*)0,&l_796[3],&l_686},{&l_681,(void*)0,(void*)0}},{{&l_686,&g_528,&l_722},{&l_681,&l_796[7],(void*)0},{(void*)0,&l_686,&l_722},{&l_681,&l_686,(void*)0},{(void*)0,&l_722,&l_722},{&l_681,(void*)0,&l_686},{(void*)0,&l_686,&g_528},{&l_681,(void*)0,&l_686}}};
                        int i, j, k;
                        (*l_807) = ((((l_741 || p_5) | ((safe_add_func_uint8_t_u_u(l_737[2], (g_528 = ((safe_rshift_func_uint8_t_u_u(((l_739[4] = (l_802[0] <= (((((*l_808) = ((-2L) == (((safe_mod_func_int32_t_s_s((**g_773), (((func_97(l_805, l_806, l_807, g_693[7], g_115) >= l_728) >= (-8L)) & g_680))) , l_742) == (*p_7)))) , (void*)0) != &p_8) > 255UL))) , 4UL), 1)) | 0xACL)))) & l_737[1])) == (**l_806)) , (*g_50));
                    }
                }
                else
                {
                    unsigned l_816 = 0x1B3E9945L;
                    for (l_717 = (-3); (l_717 >= 7); l_717 = safe_add_func_int8_t_s_s(l_717, 6))
                    {
                        int l_815 = (-7L);
                        if (l_815)
                            break;
                        if (l_816)
                            break;
                    }
                }
                (*g_234) = ((((safe_lshift_func_int16_t_s_s(p_5, p_5)) , l_819) == (l_822 = l_820)) != (safe_sub_func_uint8_t_u_u(((l_742 = ((*l_825)--)) ^ (**g_506)), ((g_389 = p_8) , (safe_sub_func_uint8_t_u_u(p_6, p_6))))));
            }
            (*l_830) = p_7;
            (**l_709) &= (*p_7);
            l_741 |= func_12((((safe_rshift_func_uint16_t_u_u(g_647[4][0], 15)) && ((*l_835) = ((*g_300) = (p_5 != ((0x3AL != ((g_834 = &l_691[1][1][3]) != (void*)0)) || ((void*)0 != &l_681)))))) , (((((((*g_300) = (((*l_836) = 4294967295UL) == (safe_add_func_uint32_t_u_u((((g_25[4][2] ^ 0xAD94L) && 7L) > g_111), (*p_7))))) , p_5) , 0x4AL) <= p_6) == (*p_7)) <= 0x775CBFB7L)));
        }
        p_7 = ((safe_sub_func_int16_t_s_s((*g_834), ((*l_847) &= (safe_rshift_func_uint16_t_u_s((safe_add_func_int32_t_s_s(((**l_709) ^= (*p_7)), (l_745 = l_714))), (func_88(p_5, g_136, (l_683 = &l_717)) ^ 0x00L)))))) , ((*g_506) = &l_700[1]));
        for (g_271 = 0; (g_271 <= 2); g_271 += 1)
        {
            unsigned l_854 = 0x52764FE0L;
            for (g_642 = 0; (g_642 <= 2); g_642 += 1)
            {
                int l_848[9];
                int l_849 = (-8L);
                int l_850 = 0x303586C1L;
                int l_851 = 0L;
                int l_853[3][9][3] = {{{0x6936A145L,7L,0x10B2FE10L},{0L,0x2E3BCE3EL,0xD8DBFDC1L},{0x8B103233L,(-7L),(-5L)},{0L,0x758E1FACL,0L},{0x6936A145L,0x2A832544L,7L},{0x49024957L,0x49024957L,0xD8DBFDC1L},{0x0DDC68FFL,0x2A832544L,0x8B103233L},{0x2E3BCE3EL,0x758E1FACL,(-3L)},{0x4563A2F8L,(-7L),0x4563A2F8L}},{{0x49024957L,0x2E3BCE3EL,(-3L)},{0x5B29D3DDL,7L,0x8B103233L},{0L,0xD8DBFDC1L,0xD8DBFDC1L},{0x10B2FE10L,(-7L),7L},{0L,1L,0L},{0x5B29D3DDL,0x2A832544L,(-5L)},{0x49024957L,0L,0xD8DBFDC1L},{0x4563A2F8L,0x2A832544L,0x10B2FE10L},{0x2E3BCE3EL,1L,(-3L)}},{{0x0DDC68FFL,(-7L),0x0DDC68FFL},{0x49024957L,0xD8DBFDC1L,(-3L)},{0x6936A145L,7L,0x10B2FE10L},{0L,0x2E3BCE3EL,0xD8DBFDC1L},{0x8B103233L,(-7L),(-5L)},{0L,0x758E1FACL,0L},{0x6936A145L,0x2A832544L,7L},{0x49024957L,0x49024957L,0xD8DBFDC1L},{0x0DDC68FFL,0x2A832544L,0x8B103233L}}};
                int i, j, k;
                for (i = 0; i < 9; i++)
                    l_848[i] = 0xFD3A2434L;
                --l_854;
                l_857++;
                l_851 |= ((((g_25[g_642][g_642] &= 0x02A3L) < p_8) <= g_495) != (((safe_lshift_func_uint16_t_u_u((((*g_300) || (**l_709)) , (**l_709)), 3)) == g_40) == p_6));
                p_7 = l_862;
            }
        }
    }
    return g_25[4][2];
}







static char func_12(unsigned p_13)
{
    int *l_14[3][4][7] = {{{&g_15,(void*)0,&g_15,&g_15,&g_15,(void*)0,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,(void*)0},{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15}},{{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,(void*)0,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15,&g_15,(void*)0,&g_15,&g_15}},{{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15,(void*)0,&g_15}}};
    char l_641 = 0x24L;
    const int ** const l_665 = &g_51[0][0][2];
    short *l_674[8][10][3] = {{{&g_647[1][0],&g_647[1][0],(void*)0},{&g_272,&g_389,(void*)0},{&g_647[1][0],&g_647[1][0],(void*)0},{&g_647[1][0],&g_389,&g_389},{&g_647[5][0],&g_647[1][0],(void*)0},{(void*)0,&g_647[1][0],(void*)0},{&g_647[5][0],&g_647[4][0],(void*)0},{&g_389,&g_389,&g_647[1][0]},{(void*)0,&g_389,(void*)0},{&g_647[6][0],(void*)0,(void*)0}},{{&g_272,(void*)0,(void*)0},{&g_647[1][0],(void*)0,&g_647[1][0]},{&g_389,&g_389,&g_647[6][0]},{(void*)0,&g_647[2][0],&g_389},{&g_647[5][0],&g_647[4][0],&g_272},{(void*)0,&g_272,&g_389},{&g_647[5][0],(void*)0,(void*)0},{(void*)0,&g_647[1][0],&g_647[1][0]},{&g_389,&g_647[5][0],(void*)0},{&g_647[1][0],&g_647[1][0],&g_389}},{{&g_272,(void*)0,(void*)0},{&g_647[6][0],&g_647[2][0],&g_647[1][0]},{(void*)0,&g_647[5][0],&g_389},{&g_389,(void*)0,&g_389},{&g_647[5][0],&g_647[1][0],(void*)0},{(void*)0,(void*)0,&g_389},{&g_389,&g_647[5][0],(void*)0},{&g_647[1][0],&g_647[2][0],&g_647[1][0]},{&g_647[6][0],(void*)0,&g_272},{&g_647[1][0],&g_647[1][0],(void*)0}},{{&g_647[5][0],&g_647[5][0],&g_389},{&g_647[1][0],&g_647[1][0],&g_647[1][0]},{&g_647[4][0],(void*)0,(void*)0},{(void*)0,&g_272,(void*)0},{&g_272,&g_647[4][0],(void*)0},{&g_389,&g_647[2][0],&g_647[1][0]},{&g_647[5][0],&g_647[1][0],&g_647[4][0]},{(void*)0,&g_647[1][0],&g_647[3][0]},{(void*)0,&g_389,&g_647[6][0]},{&g_647[1][0],&g_272,&g_647[1][0]}},{{&g_389,&g_647[1][0],&g_389},{&g_647[1][0],&g_272,&g_647[1][0]},{&g_272,&g_389,(void*)0},{&g_389,&g_647[1][0],&g_647[2][0]},{&g_272,&g_389,&g_647[4][0]},{&g_647[1][0],&g_272,(void*)0},{&g_389,&g_647[5][0],&g_272},{&g_647[1][0],&g_647[1][0],&g_647[1][0]},{(void*)0,(void*)0,(void*)0},{(void*)0,&g_272,(void*)0}},{{&g_389,(void*)0,&g_647[1][0]},{&g_647[1][0],&g_647[1][0],&g_647[2][0]},{&g_647[5][0],(void*)0,&g_647[6][0]},{&g_272,&g_647[1][0],&g_647[1][0]},{&g_389,(void*)0,&g_389},{(void*)0,&g_272,&g_647[1][0]},{&g_647[5][0],(void*)0,(void*)0},{&g_647[1][0],&g_647[1][0],&g_647[3][0]},{&g_272,&g_647[5][0],&g_647[1][0]},{(void*)0,&g_272,&g_389}},{{&g_389,&g_389,&g_272},{&g_272,&g_647[1][0],&g_272},{(void*)0,&g_389,&g_272},{&g_647[1][0],&g_272,&g_389},{&g_389,&g_647[1][0],&g_647[1][0]},{(void*)0,&g_272,&g_647[3][0]},{&g_647[5][0],&g_389,(void*)0},{&g_647[1][0],&g_647[1][0],&g_647[1][0]},{&g_647[5][0],(void*)0,&g_647[4][0]},{(void*)0,&g_647[1][0],&g_389}},{{&g_647[1][0],(void*)0,&g_389},{&g_647[1][0],&g_389,&g_389},{&g_647[1][0],&g_647[1][0],(void*)0},{(void*)0,&g_272,(void*)0},{&g_647[5][0],&g_647[1][0],&g_647[1][0]},{(void*)0,&g_647[2][0],&g_647[2][0]},{&g_389,&g_647[1][0],&g_647[6][0]},{(void*)0,&g_647[1][0],(void*)0},{&g_389,&g_647[4][0],&g_647[6][0]},{&g_647[2][0],&g_272,&g_389}}};
    int i, j, k;
    --g_17;
    for (g_15 = 0; (g_15 < 1); g_15 = safe_add_func_uint16_t_u_u(g_15, 5))
    {
        int l_22 = 0xFA3C9E4AL;
        int l_23 = (-1L);
        int l_24 = 0x1131E34FL;
        int **l_643 = (void*)0;
        unsigned short l_661 = 65528UL;
        const int ** const l_676 = &g_51[1][0][0];
        g_25[4][2]++;
        for (g_16 = 0; (g_16 >= 10); g_16++)
        {
            char l_37 = 0x51L;
            unsigned char *l_621 = &g_79;
            int l_657 = 5L;
            int **l_675 = &l_14[2][1][2];
            const int ** const l_677[2] = {&g_51[0][1][2],&g_51[0][1][2]};
            int i;
            for (p_13 = (-16); (p_13 != 13); p_13 = safe_add_func_int32_t_s_s(p_13, 4))
            {
                short l_39 = 0x9D3BL;
                int **l_606[6];
                int **l_607 = &l_14[1][2][5];
                int i;
                for (i = 0; i < 6; i++)
                    l_606[i] = &l_14[1][2][5];
                for (l_22 = 0; (l_22 > 2); l_22 = safe_add_func_int32_t_s_s(l_22, 2))
                {
                    for (l_23 = 2; (l_23 >= 0); l_23 -= 1)
                    {
                        int i, j;
                        g_36 &= (safe_sub_func_uint32_t_u_u(g_25[(l_23 + 2)][l_23], g_25[(l_23 + 2)][l_23]));
                        return l_24;
                    }
                    return p_13;
                }
                g_40++;
            }
            for (g_111 = 27; (g_111 == (-1)); --g_111)
            {
                unsigned short l_617 = 65526UL;
                int ***l_624 = (void*)0;
                unsigned char l_625 = 255UL;
                int l_636 = 5L;
                const unsigned short l_645[10][4] = {{0xCAC9L,0xCAC9L,5UL,0x447EL},{0x0FABL,0xCAC9L,0x447EL,0x447EL},{0xCAC9L,0xCAC9L,5UL,0x447EL},{0x0FABL,0xCAC9L,0x447EL,0x447EL},{0xCAC9L,0xCAC9L,5UL,0x447EL},{0x0FABL,0xCAC9L,0x447EL,0x447EL},{0xCAC9L,0xCAC9L,5UL,0x447EL},{0x0FABL,0xCAC9L,0x447EL,0x447EL},{0xCAC9L,0xCAC9L,5UL,0x447EL},{0x0FABL,0xCAC9L,0x447EL,0x447EL}};
                int i, j;
                for (g_528 = 0; (g_528 != 18); ++g_528)
                {
                    unsigned char l_612 = 9UL;
                    const int ** const l_644 = &g_51[1][1][1];
                    char *l_646[2];
                    int *l_666 = (void*)0;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_646[i] = &g_642;
                    l_612++;
                    for (l_612 = (-11); (l_612 == 45); ++l_612)
                    {
                        unsigned char *l_620 = &g_79;
                        int l_626[4][1][4] = {{{0xEE725EA0L,(-2L),0xC6D9B2D6L,(-2L)}},{{(-2L),0x8F520B1EL,0xC6D9B2D6L,0xC6D9B2D6L}},{{0xEE725EA0L,0xEE725EA0L,(-2L),0xC6D9B2D6L}},{{0x2A137289L,0x8F520B1EL,0x2A137289L,(-2L)}}};
                        int i, j, k;
                        l_626[0][0][2] &= ((p_13 , ((*l_621) &= (((+(func_88(l_617, (((g_337 <= ((4294967290UL & 7UL) , (safe_lshift_func_uint8_t_u_s(p_13, 0)))) > (l_620 != l_621)) <= (safe_sub_func_uint32_t_u_u(((void*)0 == l_624), 1L))), l_14[1][1][6]) , l_37)) > 0x269C6A5AL) > 0x06L))) == l_625);
                        (*g_627) = &l_23;
                    }
                    if ((safe_mod_func_int32_t_s_s(l_612, (safe_lshift_func_int8_t_s_u((safe_add_func_int16_t_s_s((!(l_24 , g_36)), (safe_mod_func_int32_t_s_s((l_636 = l_24), (l_612 ^ (g_647[1][0] = (func_97((safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(p_13, g_337)), (g_642 = ((!((l_617 <= (((l_37 <= p_13) && l_641) == 0x9BL)) >= p_13)) , l_24)))), l_643, l_644, p_13, l_645[2][2]) , 0xE6L))))))), p_13)))))
                    {
                        unsigned short l_658 = 0x72E5L;
                        unsigned *l_662 = &g_36;
                        unsigned *l_663 = &g_126;
                        int **l_664 = &l_14[1][2][0];
                        l_636 = (p_13 != p_13);
                        (*l_644) = func_54(((safe_unary_minus_func_int8_t_s(p_13)) >= p_13), p_13, l_643, (((((safe_sub_func_uint16_t_u_u(p_13, (((safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s(((safe_add_func_int16_t_s_s(((0xE8B7C5F6L < ((l_657 = p_13) != 0xD25EL)) < 1UL), 0UL)) | 0x3A871B08L), p_13)) , g_642), p_13)) < p_13) & p_13))) , 0x83L) & p_13) == p_13) >= p_13), g_337);
                        l_24 = ((*g_300) , func_88((g_9 , 0xAEL), (l_658 | (((((safe_lshift_func_int8_t_s_s(l_661, 3)) >= ((*l_663) |= ((*l_662) |= g_495))) , p_13) < ((0xD5F8L == ((func_97((l_657 = (*g_300)), l_664, l_665, g_647[1][0], p_13) , l_657) | p_13)) == (*g_300))) , l_612)), l_666));
                    }
                    else
                    {
                        if (p_13)
                            break;
                    }
                    if (((void*)0 != &l_636))
                    {
                        unsigned l_669 = 8UL;
                        l_24 |= ((safe_sub_func_uint16_t_u_u(((void*)0 == &g_16), (0xD1B6L && l_669))) || (safe_rshift_func_uint8_t_u_u(((*g_300) = 1UL), 1)));
                        l_657 = p_13;
                    }
                    else
                    {
                        int *l_672 = (void*)0;
                        short *l_673 = &g_389;
                        l_657 = ((((l_672 != (void*)0) , func_97(func_97((l_673 == l_674[6][7][1]), l_675, l_676, p_13, g_647[1][0]), &g_119, l_677[1], g_40, p_13)) >= 0x09L) , 0L);
                    }
                }
                for (g_389 = 0; (g_389 <= 0); g_389 += 1)
                {
                    int i, j;
                    l_636 ^= g_647[(g_389 + 1)][g_389];
                    if (g_647[(g_389 + 3)][g_389])
                        break;
                }
                l_657 |= 0xF4884E69L;
                l_657 = 0x298546CEL;
            }
        }
    }
    return g_216;
}







static int * const func_43(int * p_44)
{
    int l_61 = 1L;
    int l_507 = 0xE093E520L;
    const int l_523 = 0x678FB2FAL;
    unsigned short l_524[5][3][2] = {{{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL}},{{1UL,1UL},{1UL,1UL},{1UL,1UL}}};
    const char *l_527 = &g_528;
    short *l_529 = &g_272;
    const int ** const l_532 = &g_51[0][1][0];
    unsigned l_572 = 0x1C9789CCL;
    int l_574 = (-8L);
    int l_577[10][1][7] = {{{1L,0x538EF002L,0xD0743148L,2L,0x5BD73C67L,2L,0xD0743148L}},{{0xBECD2BACL,0xBECD2BACL,0xD0743148L,0L,1L,0x16FC0F6AL,6L}},{{0xBECD2BACL,0x538EF002L,0x1DD158B9L,0x1AB88145L,7L,0x16FC0F6AL,0xD0743148L}},{{1L,0x8496234FL,0xFBF65D9BL,0x1AB88145L,1L,2L,1L}},{{0x538EF002L,0x8496234FL,0x1DD158B9L,0L,0x5BD73C67L,0x1AB88145L,1L}},{{1L,0x538EF002L,0xD0743148L,2L,0x5BD73C67L,2L,0xD0743148L}},{{0xBECD2BACL,0xBECD2BACL,0xD0743148L,0L,1L,0x16FC0F6AL,6L}},{{0xBECD2BACL,0x538EF002L,0x1DD158B9L,0x1AB88145L,7L,0x16FC0F6AL,0xD0743148L}},{{1L,0x8496234FL,0xFBF65D9BL,0x1AB88145L,1L,2L,1L}},{{0x538EF002L,0x8496234FL,0x1DD158B9L,0L,0x538EF002L,0L,0xDF977572L}}};
    unsigned char * const **l_585 = (void*)0;
    unsigned l_595 = 1UL;
    unsigned l_601 = 0x94983964L;
    int i, j, k;
    for (g_36 = 0; (g_36 != 53); ++g_36)
    {
        const unsigned char l_60 = 250UL;
        int * const l_63[8] = {&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15};
        int * const *l_62[2][6] = {{&l_63[6],(void*)0,&l_63[6],&l_63[6],(void*)0,&l_63[6]},{&l_63[6],(void*)0,&l_63[6],&l_63[6],(void*)0,&l_63[6]}};
        const int ** const l_514 = &g_51[0][0][0];
        int i, j;
        for (g_40 = (-26); (g_40 != 21); g_40 = safe_add_func_uint16_t_u_u(g_40, 6))
        {
            const int *l_49 = &g_15;
            (*g_50) = l_49;
            (*g_506) = ((((*g_300) = func_52((g_25[0][2] , func_54(l_60, l_61, l_62[0][1], (*p_44), g_15)))) >= (safe_unary_minus_func_int8_t_s((&g_40 != &g_40)))) , &l_61);
            l_507 ^= (*g_119);
            return p_44;
        }
        (*g_234) = (g_68 <= (safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(((((((safe_sub_func_int32_t_s_s((func_97(l_507, &p_44, l_514, (safe_add_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s((!(((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(func_97(l_507, &g_119, &g_51[1][1][2], (g_389 , func_94(l_61, l_523)), g_68), 0x7771L)), 0x01L)) , 0xB0AC0B6FL) , 9UL)), g_270[0])), 0x0021FA4DL)), g_25[4][2]) & l_524[4][1][0]), g_271)) < g_9) <= g_271) > g_25[1][0]) & l_523) || l_507), l_523)), 14)));
        if ((*p_44))
            continue;
    }
    if ((((l_523 || l_507) > (safe_mod_func_int16_t_s_s(((*l_529) = (l_507 >= (&g_401 == l_527))), g_110))) & l_523))
    {
        short *l_533 = &g_389;
        unsigned *l_534 = (void*)0;
        unsigned *l_535 = &g_40;
        int l_538 = (-8L);
        short l_541 = 0xE8B4L;
        const int ** const l_565 = &g_51[1][1][1];
        int l_570[6] = {0x24A7E84CL,7L,0x24A7E84CL,0x24A7E84CL,7L,0x24A7E84CL};
        unsigned l_578 = 18446744073709551611UL;
        int * const *l_589 = &g_119;
        int *l_593 = (void*)0;
        int i;
        l_538 = ((safe_mod_func_uint8_t_u_u(func_97(l_523, &g_119, l_532, (((l_533 != &g_337) && (--(*l_535))) > l_538), l_538), (safe_sub_func_uint8_t_u_u(0x65L, l_538)))) , (*p_44));
        l_541 |= (((*l_535) = g_495) == (*p_44));
        for (g_389 = 1; (g_389 < 5); ++g_389)
        {
            int * const *l_547[6][10][4] = {{{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}},{{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119},{&g_119,&g_119,&g_119,&g_119}}};
            unsigned *l_588 = &g_36;
            int **l_590 = (void*)0;
            int *l_592 = &g_16;
            int **l_591[2];
            int **l_594 = &g_119;
            int i, j, k;
            for (i = 0; i < 2; i++)
                l_591[i] = &l_592;
            for (l_61 = 0; (l_61 <= (-2)); l_61 = safe_sub_func_int8_t_s_s(l_61, 5))
            {
                unsigned short l_546 = 0xB59AL;
                unsigned short *l_552[2][4] = {{&l_524[4][1][0],&l_524[4][1][0],&l_524[4][1][0],&l_524[4][1][0]},{&l_524[4][1][0],&l_524[4][1][0],&l_524[4][1][0],&l_524[4][1][0]}};
                unsigned l_562 = 0x65B81D05L;
                char *l_566 = (void*)0;
                char *l_567 = (void*)0;
                char *l_568 = (void*)0;
                char *l_569 = &g_528;
                int l_573 = 1L;
                int l_575 = 0x2ECF21C8L;
                int l_576[3];
                int i, j;
                for (i = 0; i < 3; i++)
                    l_576[i] = (-1L);
                (*l_532) = func_54(g_68, l_541, (((*p_44) , l_546) , l_547[5][1][0]), (*p_44), (l_507 = (l_546 <= (((0x7F5BCC66L <= (func_94(((*g_300)--), l_538) >= l_541)) & 0x3DEBL) >= g_495))));
                l_572 &= (g_571 &= (l_507 |= ((l_570[1] ^= (((!(g_389 < (((*g_300) = (safe_unary_minus_func_uint8_t_u(0x92L))) <= l_546))) , (((safe_rshift_func_int8_t_s_u(((*l_569) = (safe_sub_func_int16_t_s_s(func_88(l_546, g_40, (p_44 = func_54((func_97((((func_97(((*p_44) && (l_538 >= ((safe_lshift_func_uint8_t_u_s(func_94(l_562, ((safe_rshift_func_uint8_t_u_s(2UL, 3)) < 0UL)), 6)) > 65535UL))), g_404, l_565, g_110, g_216) | l_562) < g_25[4][2]) == 65534UL), g_404, l_565, l_562, l_546) > l_541), g_36, g_404, (*p_44), g_126))), l_562))), l_562)) & 0x2B5BA94AL) , l_546)) , g_270[3])) , 0L)));
                (*g_234) ^= (*p_44);
                --l_578;
            }
            (*l_532) = (*l_565);
            l_570[1] = (func_97(l_524[4][1][0], (((l_593 = func_54(((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u((0x98L == ((((g_401 , (*p_44)) , l_585) == l_585) , (g_111 , (((*l_588) = ((*l_535) = (safe_add_func_uint16_t_u_u(0x4F09L, 0x4B70L)))) == (*p_44))))), g_16)), g_25[1][0])) , 0x098CL), g_272, l_589, (*p_44), g_25[4][2])) != (void*)0) , l_594), &g_51[1][1][1], g_115, g_9) || l_523);
            if ((*g_234))
                continue;
        }
    }
    else
    {
        int * const l_597 = &l_507;
        if (((*p_44) <= l_595))
        {
            short l_600 = 6L;
            for (g_115 = 2; (g_115 >= 0); g_115 -= 1)
            {
                int *l_596 = &g_68;
                (*l_596) ^= 0L;
                return (*g_506);
            }
            l_601 &= (g_25[4][2] , (safe_sub_func_uint8_t_u_u(l_600, 0x74L)));
        }
        else
        {
            for (l_61 = (-10); (l_61 != 8); l_61++)
            {
                int **l_604 = &g_119;
                (*l_604) = l_597;
            }
        }
    }
    return p_44;
}







static unsigned char func_52(int * p_53)
{
    int l_77[10] = {0x37137C2AL,(-1L),(-1L),0x37137C2AL,(-1L),(-1L),0x37137C2AL,(-1L),(-1L),(-1L)};
    int l_78 = 0L;
    char l_128 = 0x0BL;
    int l_134 = 0x199855EAL;
    int l_135 = 0xEB25118CL;
    unsigned *l_149 = &g_126;
    char l_190 = 0x3EL;
    unsigned l_197 = 4294967295UL;
    unsigned short l_232 = 65535UL;
    int **l_251 = &g_119;
    int ***l_252 = &l_251;
    const int ** const l_253 = &g_51[0][0][1];
    unsigned char *l_254 = &g_136;
    int *l_255 = &l_77[8];
    int l_266 = (-1L);
    int l_267 = 0xBEBA78A4L;
    int l_268[10] = {0x9C444118L,0xEC9C2DA4L,8L,0xEC9C2DA4L,0x9C444118L,0x9C444118L,0xEC9C2DA4L,8L,0xEC9C2DA4L,0x9C444118L};
    short l_273 = 3L;
    unsigned char l_276 = 0x30L;
    int *l_281 = &g_15;
    char l_294 = (-1L);
    int l_365 = 0x1F5C0A1AL;
    unsigned char ***l_377 = (void*)0;
    unsigned short l_380 = 0x6256L;
    const unsigned short l_391 = 0UL;
    short l_504[2];
    int i;
    for (i = 0; i < 2; i++)
        l_504[i] = (-8L);
    for (g_68 = 0; (g_68 <= 16); ++g_68)
    {
        int l_71 = 1L;
        int l_72 = 0xCBC17640L;
        int *l_73 = &l_72;
        int *l_74 = &l_72;
        int *l_75 = &l_72;
        int *l_76[2][8] = {{&l_72,&l_72,&l_72,&l_72,&l_72,&l_72,&l_72,&l_72},{&l_72,&l_72,&l_72,&l_72,&l_72,&l_72,&l_72,&l_72}};
        int *l_92[2];
        unsigned char l_121 = 0xC4L;
        short l_127 = 0x403BL;
        int l_233 = 0x23C689B7L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_92[i] = &l_78;
        if (l_71)
            break;
        g_79++;
        if (((*l_74) = (*l_73)))
        {
            int l_93 = 1L;
            const int ** const l_105 = &g_51[1][1][1];
            int *l_122[8] = {&l_72,&g_15,&g_15,&l_72,&g_15,&g_15,&l_72,&g_15};
            unsigned *l_125[6][6][7] = {{{&g_40,&g_36,&g_40,&g_36,&g_126,(void*)0,&g_36},{&g_40,&g_9,&g_9,&g_9,&g_9,&g_9,&g_40},{&g_36,&g_36,&g_9,(void*)0,&g_36,&g_40,&g_40},{&g_126,(void*)0,&g_40,&g_9,&g_36,(void*)0,(void*)0},{&g_9,&g_9,(void*)0,&g_36,&g_9,&g_40,(void*)0},{&g_36,&g_126,&g_9,(void*)0,&g_126,&g_9,&g_40}},{{&g_9,&g_126,&g_40,&g_126,(void*)0,(void*)0,&g_40},{&g_126,&g_9,&g_9,&g_126,&g_9,&g_36,&g_36},{&g_36,(void*)0,(void*)0,(void*)0,(void*)0,&g_36,&g_9},{(void*)0,(void*)0,(void*)0,(void*)0,&g_9,(void*)0,&g_36},{(void*)0,&g_36,&g_9,&g_36,(void*)0,&g_36,&g_126},{&g_36,(void*)0,&g_9,&g_9,(void*)0,&g_9,&g_9}},{{&g_126,&g_126,(void*)0,&g_36,(void*)0,(void*)0,&g_9},{&g_9,&g_36,&g_9,(void*)0,(void*)0,&g_9,&g_9},{&g_36,&g_9,&g_126,&g_9,&g_9,&g_36,&g_9},{&g_9,&g_9,(void*)0,&g_126,&g_126,(void*)0,&g_126},{&g_126,&g_36,&g_126,&g_126,(void*)0,&g_36,&g_36},{&g_36,&g_126,&g_9,&g_9,&g_126,&g_36,&g_9}},{{(void*)0,(void*)0,(void*)0,(void*)0,&g_9,(void*)0,&g_36},{(void*)0,&g_36,&g_9,&g_36,(void*)0,&g_36,&g_126},{&g_36,(void*)0,&g_9,&g_9,(void*)0,&g_9,&g_9},{&g_126,&g_126,(void*)0,&g_36,(void*)0,(void*)0,&g_9},{&g_9,&g_36,&g_9,(void*)0,(void*)0,&g_9,&g_36},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_126}},{{&g_36,&g_9,(void*)0,&g_40,(void*)0,(void*)0,(void*)0},{(void*)0,&g_40,&g_9,&g_40,(void*)0,&g_9,&g_126},{&g_9,(void*)0,&g_9,&g_9,(void*)0,&g_9,&g_126},{&g_126,&g_9,(void*)0,(void*)0,&g_9,(void*)0,&g_126},{&g_126,&g_40,&g_9,&g_36,(void*)0,&g_9,(void*)0},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_126}},{{(void*)0,(void*)0,(void*)0,&g_36,&g_9,(void*)0,&g_36},{&g_36,&g_40,&g_9,(void*)0,(void*)0,&g_9,&g_36},{&g_9,&g_9,&g_9,&g_9,&g_9,&g_9,&g_126},{&g_36,&g_9,(void*)0,&g_40,(void*)0,(void*)0,(void*)0},{(void*)0,&g_40,&g_9,&g_40,(void*)0,&g_9,&g_126},{&g_9,(void*)0,&g_9,&g_9,(void*)0,&g_9,&g_9}}};
            const unsigned l_133 = 0xAC8DB39BL;
            int i, j, k;
            (*l_74) = 0x2EBD359DL;
            if ((((((g_126 ^= (((safe_rshift_func_int8_t_s_s((((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_uint16_t_u_u(65535UL, 12)) , (func_88(((l_92[0] == &l_78) | (1UL | ((l_93 , 8L) , (func_94(g_17, func_97((safe_sub_func_int8_t_s_s(((*l_73) , g_25[1][0]), g_16)), &l_76[1][0], l_105, g_9, l_78)) || l_121)))), (*l_73), l_122[7]) < (*p_53))) <= 0x4BL), 15)) != g_68) | 0xB62BL), l_78)) || l_78) && 0L)) > l_78) == l_127) || g_110) | l_128))
            {
                (*l_74) |= ((g_126 = l_77[8]) && (*p_53));
            }
            else
            {
                int *l_132 = (void*)0;
                if ((g_115 < g_38))
                {
                    unsigned char l_129 = 0UL;
                    --l_129;
                    (*l_105) = l_132;
                }
                else
                {
                    for (g_111 = 0; (g_111 <= 1); g_111 += 1)
                    {
                        int i;
                        l_92[g_111] = l_122[g_111];
                        if ((*p_53))
                            break;
                    }
                }
                for (g_79 = 0; (g_79 <= 1); g_79 += 1)
                {
                    int i, j;
                    (*g_119) = l_78;
                }
            }
            if ((*g_119))
            {
                if ((*p_53))
                    break;
            }
            else
            {
                if ((*p_53))
                    break;
                if (l_133)
                    continue;
            }
            g_136++;
        }
        else
        {
            return g_9;
        }
        for (g_111 = (-17); (g_111 <= (-7)); g_111 = safe_add_func_uint16_t_u_u(g_111, 4))
        {
            int l_155 = 0xE69E21D6L;
            const int ** const l_159[10] = {&g_51[1][1][1],&g_51[1][0][0],&g_51[1][0][0],&g_51[1][1][1],&g_51[1][1][1],&g_51[1][1][1],&g_51[1][0][0],&g_51[1][0][0],&g_51[1][1][1],&g_51[1][1][1]};
            unsigned char *l_167 = &g_79;
            int l_170 = 0x2128A055L;
            int l_171 = 1L;
            int l_172 = 1L;
            int l_173[3];
            unsigned char l_177 = 0x05L;
            unsigned short l_187 = 2UL;
            short l_191 = 0x1DAEL;
            unsigned char l_194 = 0x62L;
            int i;
            for (i = 0; i < 3; i++)
                l_173[i] = 0L;
            for (l_78 = 0; (l_78 <= (-27)); l_78--)
            {
                char l_152[7] = {0x67L,0x67L,0x67L,0x67L,0x67L,0x67L,0x67L};
                unsigned char *l_156 = (void*)0;
                unsigned char *l_157 = &g_79;
                unsigned *l_158 = &g_126;
                int i;
                (*g_119) |= (safe_sub_func_int16_t_s_s((g_9 < (*l_73)), func_97((((((*l_158) = (safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(7UL, ((((p_53 != (l_149 = p_53)) , ((safe_lshift_func_uint16_t_u_s((l_152[2] < ((0x98743DCCL & (safe_add_func_uint16_t_u_u(65530UL, (((*l_157) &= l_155) | g_126)))) ^ (*p_53))), l_128)) && l_152[2])) >= 0xAE83L) && 0x8E7FB409L))), 1))) > 0x0A3195B5L) != l_77[4]) || l_155), &g_119, l_159[1], l_152[2], g_111)));
                (*g_119) = (!0xCAB1FC94L);
                if ((*l_75))
                    break;
            }
            for (l_128 = 1; (l_128 >= 0); l_128 -= 1)
            {
                unsigned l_160[3][1];
                unsigned char *l_166 = (void*)0;
                unsigned char **l_165[5] = {&l_166,&l_166,&l_166,&l_166,&l_166};
                short l_169 = 0xD22DL;
                int l_174 = 1L;
                int l_176[2];
                char l_185[5] = {(-9L),(-9L),(-9L),(-9L),(-9L)};
                int i, j;
                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_160[i][j] = 0x9366B1B6L;
                }
                for (i = 0; i < 2; i++)
                    l_176[i] = 0x04017246L;
                if ((l_135 = ((((l_78 = (l_160[0][0] >= (safe_rshift_func_int8_t_s_u(((safe_sub_func_uint8_t_u_u(l_77[8], (!((((((l_167 = &g_79) != &g_79) & (((g_15 || 4L) , func_88(g_25[4][2], l_128, l_92[l_128])) && 1UL)) != l_135) <= (*p_53)) != g_16)))) && l_135), 7)))) , l_77[8]) || g_15) < (*l_75))))
                {
                    short l_175 = 2L;
                    int l_186 = 0xAFCB3562L;
                    int l_192 = (-1L);
                    int l_193[2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                        l_193[i] = (-1L);
                    for (l_72 = 0; (l_72 <= 1); l_72 += 1)
                    {
                        int l_168[3];
                        int **l_184 = &l_92[0];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_168[i] = 0xF3CD2035L;
                        --l_177;
                        l_176[1] = (0UL != (((4294967295UL >= ((safe_add_func_uint32_t_u_u(l_77[(l_72 + 8)], l_128)) , ((*g_119) = (safe_mod_func_int32_t_s_s(func_88(g_126, l_175, ((*l_184) = p_53)), l_185[4]))))) || (*p_53)) , 0x4F404DFAL));
                        ++l_187;
                        (*l_184) = p_53;
                    }
                    --l_194;
                    --l_197;
                }
                else
                {
                    for (g_79 = 0; (g_79 < 41); g_79 = safe_add_func_uint32_t_u_u(g_79, 6))
                    {
                        return g_38;
                    }
                    (*l_73) |= (+0x8BEC59F2L);
                }
            }
            for (l_121 = 0; (l_121 > 49); l_121 = safe_add_func_int16_t_s_s(l_121, 7))
            {
                short *l_206[4] = {&l_127,&l_127,&l_127,&l_127};
                unsigned short *l_209 = &g_25[1][2];
                unsigned short *l_212 = &l_187;
                int l_213[1];
                unsigned *l_214 = (void*)0;
                unsigned *l_215 = &l_197;
                int l_217 = (-1L);
                const int ** const l_227 = &g_51[1][1][1];
                int **l_231[7][1];
                int ***l_230 = &l_231[0][0];
                int i, j;
                for (i = 0; i < 1; i++)
                    l_213[i] = 0L;
                for (i = 0; i < 7; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_231[i][j] = &l_92[1];
                }
                l_171 |= (safe_rshift_func_int8_t_s_s(func_88((((*l_73) = ((l_217 |= (g_216 |= func_88((((*l_75) ^= ((((l_173[1] = 2L) == func_88((safe_add_func_uint16_t_u_u(((*l_209)--), ((*l_212) |= g_40))), l_78, p_53)) < (((*l_215) = l_213[0]) && g_115)) ^ ((&g_17 == (l_149 = l_92[0])) , g_79))) & l_190), g_16, p_53))) || g_79)) , g_79), l_135, p_53), l_135));
                (*l_74) = (((safe_lshift_func_int16_t_s_u(0L, 15)) , l_213[0]) && ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_u((g_126 & (((safe_lshift_func_uint16_t_u_s(((*l_209) = (((((func_97(((*l_167) ^= (safe_unary_minus_func_uint32_t_u(g_16))), &l_76[0][5], l_227, g_38, (safe_lshift_func_uint8_t_u_u((l_190 != (((((*l_230) = ((g_16 , l_77[2]) , &p_53)) != &l_73) || (*l_74)) > l_232)), 3))) , l_233) && 0xE195L) | 0xF32EL) ^ 0x27B6L) , g_38)), g_16)) , 0L) ^ 0xBE48L)), g_126)), 6)) , l_190));
            }
        }
    }
    (*g_234) = ((0x0127E57FL == ((*p_53) = ((l_77[1] , (+(g_9 >= l_77[1]))) && (*p_53)))) & l_78);
    if ((~((*p_53) <= (safe_add_func_uint32_t_u_u(g_68, ((((safe_sub_func_int8_t_s_s(g_216, (g_79 |= 5UL))) < ((l_77[8] || (safe_add_func_int8_t_s_s((func_88((safe_sub_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(65535UL, g_126)), (((*l_255) = (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u(((func_88((safe_mod_func_int16_t_s_s(func_97(((+((*l_254) = (func_97(l_135, ((*l_252) = l_251), l_253, g_136, g_115) && g_25[0][0]))) , 0x1CL), &g_119, l_253, g_126, g_110), g_25[0][0])), g_9, &g_15) , g_25[4][2]) ^ (*p_53)), g_115)), g_25[0][1]))) , (*p_53)))), g_25[4][2], &g_111) , 0L), 0xEAL))) , 0xCA86L)) >= g_111) < g_111))))))
    {
        char l_256[4] = {4L,4L,4L,4L};
        int *l_257 = (void*)0;
        int *l_258 = &l_134;
        int *l_259 = (void*)0;
        int *l_260 = &l_78;
        int *l_261 = &l_134;
        int *l_262 = &g_115;
        int *l_263 = &l_78;
        int *l_264 = &l_78;
        int *l_265[9] = {&l_78,&l_78,&l_78,&l_78,&l_78,&l_78,&l_78,&l_78,&l_78};
        int l_274 = (-1L);
        int l_275 = 4L;
        char l_282 = (-2L);
        const int ** const l_289 = &g_51[1][1][1];
        short l_367 = 3L;
        unsigned *l_390 = &g_36;
        unsigned char ***l_421 = &g_299[2];
        unsigned char *l_447 = &g_79;
        unsigned char l_496 = 0xAFL;
        int i;
        --l_276;
        for (l_266 = 0; (l_266 <= 29); l_266 = safe_add_func_int32_t_s_s(l_266, 1))
        {
            char l_288 = 4L;
            const int l_291[3] = {(-2L),(-2L),(-2L)};
            int * const l_295 = &g_115;
            int **l_306 = &l_259;
            unsigned l_324 = 0xD07F3888L;
            int l_329 = 1L;
            int l_330 = 0L;
            int l_333 = 0x1EE181A4L;
            int l_335 = 0x7F553C27L;
            int l_339 = (-5L);
            int l_347 = 2L;
            int l_349 = 0x1B557159L;
            int l_353 = (-3L);
            int l_354[7] = {0x5350170BL,0xCB7F95D0L,0x5350170BL,0x5350170BL,0xCB7F95D0L,0x5350170BL,0x5350170BL};
            short l_375[2][2][5] = {{{(-1L),(-1L),0x2363L,0x2363L,(-1L)},{1L,0x56C2L,1L,0x56C2L,1L}},{{(-1L),0x2363L,0x2363L,(-1L),(-1L)},{(-1L),0x56C2L,(-1L),0x56C2L,(-1L)}}};
            unsigned short l_387 = 0xF980L;
            int *l_405 = &g_68;
            unsigned char **l_468[7][2] = {{&g_300,&g_300},{&g_300,&g_300},{&g_300,&g_300},{&g_300,&g_300},{&g_300,&g_300},{&g_300,&g_300},{&g_300,&g_300}};
            int l_474 = 0L;
            int i, j, k;
            if ((*g_234))
            {
                unsigned char l_290 = 0UL;
                int **l_305 = &l_265[8];
                const int ** const l_307 = &g_51[1][1][1];
                unsigned l_319 = 18446744073709551608UL;
                int l_327 = 0x1463A620L;
                int l_328 = 0x1264E648L;
                int l_334 = 8L;
                int l_336 = 0xBDF4553EL;
                int l_338 = 9L;
                int l_341 = (-7L);
                int l_343 = 1L;
                int l_350 = 1L;
                int l_351 = 2L;
                int l_356 = 0xB003ED05L;
                int l_357[7][3] = {{0xD707F3B9L,(-6L),(-6L)},{0x51DFA32DL,(-8L),0x51DFA32DL},{0xD707F3B9L,0xD707F3B9L,(-6L)},{0xDA2F0AE5L,(-8L),0xDA2F0AE5L},{0xD707F3B9L,(-6L),(-6L)},{0x51DFA32DL,(-8L),0x51DFA32DL},{0xD707F3B9L,0xD707F3B9L,(-6L)}};
                unsigned l_374[2];
                unsigned char ***l_376[4] = {&g_299[2],&g_299[2],&g_299[2],&g_299[2]};
                int i, j;
                for (i = 0; i < 2; i++)
                    l_374[i] = 0UL;
                (*l_253) = l_281;
                if (l_282)
                {
                    char l_287 = (-6L);
                    int l_293[5][10][5] = {{{0xA5BF17FAL,0x0B7DB714L,0L,(-7L),0xAD7364B5L},{(-1L),0x560EA6CCL,0L,(-2L),0L},{(-3L),(-8L),1L,0xFAF11329L,0x0B7DB714L},{0xCE8534AAL,0x0D3573ABL,(-2L),(-2L),0x0D3573ABL},{(-1L),(-8L),(-1L),(-7L),0x0D3573ABL},{6L,9L,1L,0x1AD0CBC1L,0x0B7DB714L},{(-7L),0xC9FB2CE2L,2L,(-1L),0L},{6L,(-8L),0x19B1546DL,2L,0xAD7364B5L},{(-1L),(-8L),0xFAF11329L,0xF6DCBA77L,9L},{0xCE8534AAL,0xC9FB2CE2L,(-1L),1L,0x8ACE0949L}},{{(-3L),9L,0xFAF11329L,0xA8D9B2F9L,0x2D2998B6L},{(-1L),(-8L),0x19B1546DL,0xA8D9B2F9L,0x560EA6CCL},{0xA5BF17FAL,0x0D3573ABL,2L,1L,8L},{0x5E5B8AEFL,(-8L),1L,0xF6DCBA77L,0x560EA6CCL},{0x58DC6AC7L,0x560EA6CCL,(-1L),2L,0x2D2998B6L},{0x58DC6AC7L,0x0B7DB714L,6L,0L,0xA5BF17FAL},{1L,(-1L),1L,0xABED0819L,0xCE8534AAL},{0xF6DCBA77L,(-1L),(-7L),0xCAD8E44AL,6L},{2L,5L,(-7L),6L,0L},{(-1L),(-3L),1L,0x4D2A69F2L,(-1L)}},{{0x1AD0CBC1L,0xE7D34ABBL,6L,6L,0xE7D34ABBL},{(-7L),0x5E5B8AEFL,1L,0xCAD8E44AL,0xE7D34ABBL},{(-2L),0xCE8534AAL,0x69DA3442L,0xABED0819L,(-1L)},{0xFAF11329L,5L,0x70D9BA3AL,0L,0L},{(-2L),(-8L),(-1L),0x70D9BA3AL,6L},{(-7L),(-8L),0x4D2A69F2L,0xE570BA01L,0xCE8534AAL},{0x1AD0CBC1L,5L,0L,0x69DA3442L,0xA5BF17FAL},{(-1L),0xCE8534AAL,0x4D2A69F2L,0x6548F604L,(-3L)},{2L,0x5E5B8AEFL,(-1L),0x6548F604L,5L},{0xF6DCBA77L,0xE7D34ABBL,0x70D9BA3AL,0x69DA3442L,(-4L)}},{{1L,(-3L),0x69DA3442L,0xE570BA01L,5L},{0xA8D9B2F9L,5L,1L,0x70D9BA3AL,(-3L)},{0xA8D9B2F9L,(-1L),6L,0L,0xA5BF17FAL},{1L,(-1L),1L,0xABED0819L,0xCE8534AAL},{0xF6DCBA77L,(-1L),8L,0x8ACE0949L,0xABED0819L},{0x64AF95A7L,0xE570BA01L,8L,(-8L),(-1L)},{0xBA8775C5L,1L,0L,(-8L),0L},{1L,1L,(-8L),(-8L),1L},{0x15A44C41L,0xD2D4502EL,0xC9FB2CE2L,0x8ACE0949L,1L},{0x23D507DCL,0x4D2A69F2L,0x76865ED9L,0x487C410FL,0L}},{{(-1L),0x6548F604L,0x0D3573ABL,0x2D2998B6L,(-1L)},{0x23D507DCL,0x70947880L,0xAD7364B5L,0x0D3573ABL,0xABED0819L},{0x15A44C41L,0x70947880L,(-8L),9L,0x4D2A69F2L},{1L,0x6548F604L,0x2D2998B6L,0x76865ED9L,(-1L)},{0xBA8775C5L,0x4D2A69F2L,(-8L),0x560EA6CCL,2L},{0x64AF95A7L,0xD2D4502EL,0xAD7364B5L,0x560EA6CCL,0xE570BA01L},{1L,1L,0x0D3573ABL,0x76865ED9L,6L},{0x4BBAE1B1L,1L,0x76865ED9L,9L,0xE570BA01L},{0xE34C7AB5L,0xE570BA01L,0xC9FB2CE2L,0x0D3573ABL,2L},{0xE34C7AB5L,0L,(-8L),0x2D2998B6L,(-1L)}}};
                    const int **l_309[10][1] = {{&g_51[1][1][1]},{&g_51[1][2][2]},{&g_51[1][1][1]},{&g_51[1][2][2]},{&g_51[1][1][1]},{&g_51[1][2][2]},{&g_51[1][1][1]},{&g_51[1][2][2]},{&g_51[1][1][1]},{&g_51[1][2][2]}};
                    const int ***l_308 = &l_309[6][0];
                    unsigned l_310 = 18446744073709551606UL;
                    unsigned *l_311 = &g_126;
                    char l_368 = 0x20L;
                    unsigned l_378[8] = {1UL,18446744073709551615UL,1UL,18446744073709551615UL,1UL,18446744073709551615UL,1UL,18446744073709551615UL};
                    unsigned short *l_379 = &l_232;
                    int i, j, k;
                    for (g_126 = 0; (g_126 <= 3); g_126 += 1)
                    {
                        unsigned *l_292[7] = {&g_126,&g_126,&g_126,&g_126,&g_126,&g_126,&g_126};
                        int **l_296[7][6][1] = {{{&l_265[2]},{(void*)0},{&l_265[2]},{&l_262},{(void*)0},{&l_281}},{{&l_281},{&l_257},{&l_257},{&l_281},{&l_281},{(void*)0}},{{&l_262},{&l_265[2]},{(void*)0},{&l_265[2]},{&l_262},{(void*)0}},{{&l_281},{&l_281},{&l_257},{&l_257},{&l_281},{&l_281}},{{(void*)0},{&l_262},{&l_265[2]},{(void*)0},{&l_265[2]},{&l_262}},{{(void*)0},{&l_281},{&l_281},{&l_257},{&l_257},{&l_281}},{{&l_281},{(void*)0},{&l_262},{&l_265[2]},{(void*)0},{&l_265[2]}}};
                        int **l_297 = &l_265[8];
                        unsigned char ***l_302 = &g_299[2];
                        int i, j, k;
                        (*l_263) = (func_88(l_256[g_126], (safe_mod_func_uint32_t_u_u((l_293[2][7][1] &= (((((func_97((((safe_rshift_func_int16_t_s_u((~func_97(g_36, &g_119, l_253, l_287, ((l_288 , ((*l_260) = (*p_53))) <= g_270[3]))), 6)) & (*l_258)) >= 65535UL), &g_119, l_289, l_290, l_291[1]) && 0L) && 1L) | g_15) | 0x69401957L) , 0x95AB134BL)), l_294)), &g_68) && (*l_261));
                        (*l_297) = (l_293[2][3][3] , l_295);
                        (*l_302) = &l_254;
                    }
                    if ((func_88(((((*l_311) ^= ((safe_lshift_func_uint16_t_u_u(0x1017L, (((*l_254) = 1UL) | ((((void*)0 == l_305) <= ((l_293[2][7][1] >= (func_97((*l_261), l_306, ((*l_308) = l_307), (*l_281), l_287) , l_310)) , g_272)) <= 1L)))) > (*l_295))) || g_126) , g_270[1]), g_272, &g_115) != (*l_281)))
                    {
                        char *l_318[10] = {&l_128,&l_287,&l_287,&l_128,&l_256[1],&l_128,&l_287,&l_287,&l_128,&l_256[1]};
                        int l_322 = (-7L);
                        const unsigned char **l_323 = (void*)0;
                        int l_331 = 0x098ACB85L;
                        int l_332 = 0xECE2BC2FL;
                        int l_340 = 0xE91E370DL;
                        int l_342 = 0L;
                        int l_344 = (-3L);
                        int l_345 = 0xDCD775D5L;
                        int l_346 = 0x55A9BF05L;
                        int l_348 = 1L;
                        int l_352 = 0L;
                        int l_355 = 5L;
                        int l_358 = 0x549356B9L;
                        int l_359 = 3L;
                        int l_360[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                        unsigned char l_361 = 0xC7L;
                        int i;
                        if ((*g_234))
                            break;
                        (*l_261) = ((safe_lshift_func_uint8_t_u_u(((*g_300) , (((((safe_rshift_func_int8_t_s_s(((*l_262) = (safe_sub_func_uint8_t_u_u(247UL, (*l_281)))), 4)) , ((7UL >= l_319) || ((((((safe_lshift_func_uint16_t_u_s((*l_258), g_270[1])) > func_88(l_322, (0xFCL > 0x2BL), &l_274)) && l_322) , l_323) != (void*)0) >= (*p_53)))) , g_40) , g_68) ^ (*l_261))), l_322)) > 255UL);
                        --l_324;
                        l_361--;
                    }
                    else
                    {
                        int l_364 = 0x6A15C72AL;
                        int l_366[3];
                        unsigned short l_369 = 1UL;
                        int i;
                        for (i = 0; i < 3; i++)
                            l_366[i] = 1L;
                        (*l_263) = (*p_53);
                        l_369++;
                        (*l_261) = (!(*l_281));
                        return l_364;
                    }
                    (*l_306) = func_54(((*l_379) = ((((g_272 >= (g_115 , (l_378[6] ^= (safe_lshift_func_uint16_t_u_s((l_374[0] & (((l_375[0][0][3] ^ (l_376[2] == ((*l_295) , l_377))) >= func_97(((*p_53) & ((*l_311) &= (*l_260))), &g_119, l_289, g_271, g_79)) != g_270[3])), 7))))) & g_136) & l_328) ^ 0UL)), (*l_263), (*l_252), (*p_53), l_380);
                }
                else
                {
                    int l_381 = 0x179FD6AFL;
                    int l_384 = 0L;
                    l_384 ^= (l_381 , (safe_lshift_func_int8_t_s_u((*l_263), 7)));
                    if ((*l_281))
                        break;
                    (*l_251) = func_54(g_136, (*l_281), &g_119, (*l_263), g_9);
                }
            }
            else
            {
                char *l_388[1];
                int l_398[7][5] = {{0L,0L,(-8L),0L,(-1L)},{0xC5127C8FL,(-10L),0x767A013FL,(-10L),0xC5127C8FL},{(-1L),0L,(-8L),0L,0L},{0L,(-10L),0L,0x2187A63CL,0L},{(-1L),0L,0L,0L,0L},{0xC5127C8FL,0x2187A63CL,0x767A013FL,0x2187A63CL,0xC5127C8FL},{0L,0L,0L,0L,(-1L)}};
                unsigned char *l_402 = &l_276;
                unsigned char *l_403 = &g_79;
                int l_414 = 0x316027EDL;
                int l_415 = (-1L);
                unsigned char ***l_420 = &g_299[0];
                char l_441 = 0xFCL;
                int i, j;
                for (i = 0; i < 1; i++)
                    l_388[i] = (void*)0;
                (*l_253) = ((**l_252) = (l_405 = ((((safe_add_func_int32_t_s_s(((*l_263) , (((l_387 , (g_389 = g_9)) | (func_94((l_390 != (void*)0), l_391) , (func_97(((func_94(func_94((--(*l_254)), ((*l_403) = ((*l_402) = (safe_rshift_func_uint8_t_u_u(((safe_add_func_int16_t_s_s((((func_88(l_398[6][0], ((safe_sub_func_int16_t_s_s((l_398[1][0] && (*g_300)), (***l_252))) && g_401), p_53) && (*l_295)) , 9UL) != (*l_281)), (*l_258))) && 0xF301L), 4))))), (*l_261)) , g_40) >= g_271), g_404, &g_51[1][1][1], g_271, (*l_263)) == 0xAC73L))) , 1L)), (*p_53))) <= l_398[5][1]) < g_40) , (void*)0)));
                for (g_79 = 15; (g_79 != 30); g_79++)
                {
                    unsigned short l_408 = 0x7705L;
                    unsigned *l_409 = &l_197;
                    (*p_53) = ((0xC1490A22L | (l_408 || ((*l_409)++))) , ((((((*p_53) | ((*l_260) = ((l_415 &= (((g_272 , (*l_306)) == ((*l_251) = p_53)) >= (((*l_262) = g_269) <= (l_414 &= l_398[6][0])))) & ((((*l_409) = (func_97((*g_300), &l_258, &g_51[0][0][2], g_25[4][2], l_408) && 0xB752CB08L)) < (*p_53)) != (*l_264))))) < l_398[6][0]) >= l_398[4][2]) | g_9) , (-1L)));
                    for (g_272 = 0; (g_272 < 15); g_272 = safe_add_func_int32_t_s_s(g_272, 8))
                    {
                        unsigned short l_423 = 65530UL;
                        unsigned char **l_426 = &l_403;
                        int *l_427[3][6] = {{&l_268[8],&g_115,&l_268[8],&l_268[8],&g_115,&l_268[8]},{&l_268[8],&g_115,&l_268[8],&l_268[8],&g_115,&l_268[8]},{&l_268[8],&g_115,&l_268[8],&l_268[8],&g_115,&l_268[8]}};
                        char l_430 = 1L;
                        int i, j;
                        (*l_264) = ((***l_252) = (safe_lshift_func_int16_t_s_u(((((((((l_421 = l_420) == (void*)0) > ((safe_unary_minus_func_int8_t_s(((((*p_53) == (+l_423)) , &g_118[9][0][1]) == &g_404))) > func_88((((safe_rshift_func_int8_t_s_u(((*l_295) = (*l_281)), 6)) | g_9) >= (g_401 >= g_15)), l_414, &l_414))) , 1L) , 0xD033L) ^ g_40) , (void*)0) != l_426), 11)));
                        l_427[2][5] = (func_88(l_414, ((void*)0 != &l_306), l_427[2][5]) , func_54(func_97(((l_398[3][2] > (safe_add_func_uint8_t_u_u(l_414, (&g_389 == (g_40 , &g_272))))) & (*p_53)), &g_119, &g_51[1][1][1], (*l_281), g_272), g_272, &g_119, l_430, (**l_251)));
                        (*p_53) &= 0x136A5297L;
                    }
                }
                for (g_271 = 0; (g_271 >= 5); g_271++)
                {
                    short l_438 = 0xADE0L;
                    for (g_115 = 11; (g_115 >= (-4)); g_115 = safe_sub_func_uint8_t_u_u(g_115, 6))
                    {
                        unsigned char l_437 = 0x52L;
                        (*l_261) &= (safe_rshift_func_uint16_t_u_u((l_437 || ((((((*l_281) != 3UL) != ((l_438 ^= (l_437 ^ (*p_53))) ^ ((l_398[6][0] >= ((void*)0 == p_53)) <= ((*l_263) = (*p_53))))) == 0x039EE07EL) < 0x9BC9L) > l_415)), l_415));
                        (*l_261) ^= ((safe_sub_func_uint16_t_u_u(g_401, l_438)) , ((*p_53) & l_414));
                        return l_441;
                    }
                    (*l_258) = ((safe_mod_func_uint8_t_u_u(((*l_402) ^= (safe_unary_minus_func_uint32_t_u(((&g_17 != (void*)0) || (safe_add_func_int8_t_s_s((l_447 == (**l_420)), (safe_lshift_func_int16_t_s_u(func_94((safe_unary_minus_func_uint32_t_u(0xCE58BE42L)), (safe_mod_func_uint32_t_u_u(l_414, (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(g_9, l_398[6][4])), func_88(g_126, l_441, (**l_252)))), g_401))))), 7)))))))), 0xC8L)) | 0x172DL);
                }
                (*p_53) = ((*l_295) || l_415);
            }
            for (l_135 = 0; (l_135 < (-13)); l_135 = safe_sub_func_int32_t_s_s(l_135, 1))
            {
                int **l_469[2][2][7] = {{{&l_257,(void*)0,&l_263,&l_261,&l_263,(void*)0,&l_257},{&l_264,(void*)0,&l_405,&l_265[8],&l_261,&l_258,&l_257}},{{&l_261,&l_257,(void*)0,(void*)0,&l_257,&l_261,&l_264},{(void*)0,(void*)0,&l_405,&l_264,&g_119,&l_261,&l_261}}};
                int * const *l_472 = &l_281;
                int i, j, k;
                for (g_79 = (-18); (g_79 == 42); g_79 = safe_add_func_int8_t_s_s(g_79, 4))
                {
                    unsigned short l_465 = 0x43E0L;
                    unsigned char l_485 = 0x40L;
                    const int ** const l_486 = &g_51[1][1][1];
                    (*p_53) = (*p_53);
                    for (l_232 = 0; (l_232 >= 37); l_232++)
                    {
                        unsigned char l_470 = 0xD5L;
                        unsigned l_471[5][7][5] = {{{4294967295UL,4294967295UL,0xF8298B00L,4294967295UL,4294967295UL},{4294967295UL,0x00ECFACBL,0x10E326CFL,4294967295UL,1UL},{4294967290UL,0UL,0xDA948478L,0UL,0xD801C514L},{4294967295UL,0xAF12B6CEL,4294967295UL,0x00ECFACBL,1UL},{0x19BF99EFL,0UL,0x43A48D94L,1UL,4294967295UL},{1UL,1UL,4294967287UL,4294967287UL,1UL},{0xDA948478L,0UL,0x43A48D94L,0x7D2B27FBL,4294967291UL}},{{0xAF12B6CEL,0x63C3E7F4L,4294967295UL,7UL,8UL},{4294967291UL,0UL,4294967286UL,4UL,0x19BF99EFL},{4294967295UL,0x00ECFACBL,1UL,4294967287UL,4294967295UL},{4294967286UL,0x7D2B27FBL,4294967294UL,4294967292UL,4294967294UL},{8UL,8UL,4294967295UL,4294967287UL,1UL},{0xCB380322L,1UL,0x19BF99EFL,4UL,4294967286UL},{4294967295UL,4294967295UL,7UL,4294967295UL,4294967295UL}},{{0xD801C514L,1UL,0x43A48D94L,0xDA1E110EL,0xF8298B00L},{4294967287UL,8UL,0x63C3E7F4L,0x00ECFACBL,0x00ECFACBL},{4294967290UL,0x7D2B27FBL,4294967290UL,1UL,0xF8298B00L},{0xAF12B6CEL,0x00ECFACBL,8UL,1UL,4294967295UL},{0xF8298B00L,0UL,0x4D8A2DF3L,1UL,4294967286UL},{0x63C3E7F4L,0UL,8UL,4294967295UL,1UL},{4294967295UL,0x6A42E785L,4294967290UL,4294967290UL,4294967294UL}},{{0x10E326CFL,0x63C3E7F4L,0x63C3E7F4L,0x10E326CFL,4294967295UL},{4294967295UL,1UL,0x43A48D94L,0UL,0x19BF99EFL},{0x63C3E7F4L,4294967295UL,7UL,8UL,7UL},{0xF8298B00L,4294967292UL,0x19BF99EFL,0UL,0x43A48D94L},{0xAF12B6CEL,1UL,4294967295UL,0x10E326CFL,0x63C3E7F4L},{4294967290UL,4294967290UL,4294967294UL,4294967290UL,4294967290UL},{4294967287UL,0x63C3E7F4L,8UL,4294967287UL,7UL}},{{0x4D8A2DF3L,4294967295UL,0x4B132D29L,1UL,0xDA948478L},{4294967287UL,4294967295UL,4294967287UL,0x63C3E7F4L,7UL},{4294967295UL,1UL,4294967294UL,0UL,0xD801C514L},{7UL,0UL,1UL,1UL,0UL},{0x4B132D29L,4UL,4294967294UL,0UL,0xF8298B00L},{4294967295UL,0x10E326CFL,4294967287UL,0xAF12B6CEL,4294967295UL},{0x43A48D94L,0x6A42E785L,0x4B132D29L,0UL,0xCB380322L}}};
                        int *l_473 = &l_268[8];
                        int i, j, k;
                        ++l_465;
                        l_473 = func_54(func_97(((void*)0 != l_468[6][1]), l_469[0][0][4], l_289, (*l_295), g_136), (((l_470 >= ((l_470 & l_470) == l_471[3][0][0])) < 0L) == l_471[3][0][0]), l_472, (*g_234), g_272);
                        (*l_261) |= (l_474 = (*l_264));
                        (*l_306) = (void*)0;
                    }
                    if (((*l_260) , 1L))
                    {
                        unsigned char l_481 = 2UL;
                        (*l_264) |= (safe_lshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(5UL, (safe_add_func_int8_t_s_s(0x5BL, ((((l_481 , &g_119) != (void*)0) | l_465) , 250UL))))), ((((((((safe_unary_minus_func_int16_t_s((safe_add_func_int8_t_s_s(l_465, ((*l_281) < 0L))))) != g_79) && (**l_472)) <= (**l_472)) | g_115) ^ (**l_472)) == 1UL) != (*p_53))));
                        (*l_306) = p_53;
                        return l_485;
                    }
                    else
                    {
                        const unsigned l_489 = 0x177EF38BL;
                        (*p_53) |= ((func_97((*l_262), l_469[0][0][4], l_486, g_271, (safe_lshift_func_uint16_t_u_u((g_16 >= (*l_295)), l_489))) > (g_126 = ((*l_264) , 0xA9DDDC05L))) >= l_489);
                        (*l_486) = (*l_289);
                    }
                }
                for (g_79 = 0; (g_79 == 23); g_79++)
                {
                    char l_492 = (-1L);
                    int l_493 = 0x8AA0021BL;
                    int l_494[6] = {0x40B82930L,1L,1L,0x40B82930L,1L,1L};
                    int i;
                    l_496++;
                    for (g_136 = 7; (g_136 <= 36); g_136++)
                    {
                        short l_501[2][6][9] = {{{1L,0xDAF3L,0xFC08L,1L,1L,0xFC08L,0xDAF3L,1L,0x707FL},{0L,0x89CDL,(-3L),0x54B1L,0xA1CAL,0xD22FL,(-1L),(-1L),(-1L)},{0xDAF3L,0x3A6AL,0xE5B3L,0xFC08L,0x707FL,0L,(-5L),0L,0x707FL},{(-1L),0x88B7L,0x88B7L,(-1L),0xF467L,6L,0x0756L,0L,0xD22FL},{0xFC08L,0xE5B3L,0x3A6AL,0xDAF3L,0L,0x05B2L,(-3L),(-4L),0x7C35L},{0x54B1L,(-3L),0x89CDL,0L,0xF467L,(-1L),0L,0xD22FL,0xA7C3L}},{{0xE7E7L,0xDAF3L,0L,(-5L),(-4L),0x05B2L,1L,(-1L),1L},{(-1L),(-1L),0xA7C3L,(-1L),6L,0xA1CAL,0xF467L,0xF467L,0xA1CAL},{0xE7E7L,(-4L),1L,(-4L),0xE7E7L,0xE5B3L,(-5L),0xFC08L,0x7A03L},{0xA7C3L,(-1L),0xBF6AL,5L,(-4L),0L,0x88B7L,(-1L),(-3L)},{0xDAF3L,8L,0xCB8EL,0x05B2L,0xE5B3L,0xE5B3L,0x05B2L,0xCB8EL,8L},{0xF467L,0L,0x89CDL,(-3L),0x54B1L,0xA1CAL,0xD22FL,(-1L),(-1L)}}};
                        int i, j, k;
                        if (l_501[0][1][6])
                            break;
                        if (l_501[1][4][6])
                            break;
                        if ((*p_53))
                            break;
                    }
                }
            }
        }
        (*l_261) ^= (p_53 != (void*)0);
    }
    else
    {
        int *l_502 = (void*)0;
        int *l_503 = &l_135;
        (*l_503) &= ((*p_53) = (*p_53));
        (*l_251) = p_53;
    }
    (*p_53) = (~(*p_53));
    return l_504[1];
}







static int * func_54(const unsigned short p_55, unsigned p_56, int * const * p_57, int p_58, unsigned short p_59)
{
    unsigned short l_64 = 0x4251L;
    int *l_67 = &g_68;
    --l_64;
    (*l_67) = l_64;
    return l_67;
}







static unsigned func_88(char p_89, char p_90, int * p_91)
{
    int **l_123 = (void*)0;
    int *l_124 = &g_111;
    l_124 = (void*)0;
    return g_15;
}







static int func_94(unsigned char p_95, const unsigned char p_96)
{
    int *l_117 = &g_115;
    int **l_120 = &g_119;
    for (g_79 = (-5); (g_79 != 12); ++g_79)
    {
        int l_116 = 0xF0014B0EL;
        for (p_95 = (-13); (p_95 < 46); p_95++)
        {
            for (g_111 = (-20); (g_111 != (-25)); g_111 = safe_sub_func_uint32_t_u_u(g_111, 8))
            {
                int *l_114 = &g_115;
                (*l_114) |= 5L;
                if (l_116)
                    continue;
            }
        }
    }
    (*l_120) = l_117;
    return p_96;
}







static const unsigned char func_97(unsigned char p_98, int ** p_99, const int ** const p_100, char p_101, const int p_102)
{
    return p_98;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_25[i][j], "g_25[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_36, "g_36", print_hash_value);
    transparent_crc(g_38, "g_38", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_79, "g_79", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_136, "g_136", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_269, "g_269", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_270[i], "g_270[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_271, "g_271", print_hash_value);
    transparent_crc(g_272, "g_272", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_401, "g_401", print_hash_value);
    transparent_crc(g_495, "g_495", print_hash_value);
    transparent_crc(g_528, "g_528", print_hash_value);
    transparent_crc(g_571, "g_571", print_hash_value);
    transparent_crc(g_642, "g_642", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_647[i][j], "g_647[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_680, "g_680", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_693[i], "g_693[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_735, "g_735", print_hash_value);
    transparent_crc(g_952, "g_952", print_hash_value);
    transparent_crc(g_996, "g_996", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1101, "g_1101", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1141[i], "g_1141[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1223, "g_1223", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_1247[i], "g_1247[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
