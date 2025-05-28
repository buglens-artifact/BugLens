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



static int g_14 = 1L;
static int g_23 = 0x29EDCA8FL;
static int *g_22[9] = {&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23,&g_23};
static unsigned char g_25 = 0UL;
static char g_32 = (-7L);
static unsigned char g_40 = 1UL;
static const unsigned char *g_39[8][4][8] = {{{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,(void*)0,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40}},{{&g_40,(void*)0,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40}},{{&g_40,&g_40,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40}},{{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40}},{{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40}},{{&g_40,(void*)0,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40}},{{&g_40,&g_40,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40},{&g_40,(void*)0,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40}},{{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,(void*)0,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,(void*)0,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40}}};
static char g_77 = (-9L);
static int g_80 = 0L;
static char *g_83 = &g_77;
static char **g_82[3] = {&g_83,&g_83,&g_83};
static const int *g_86 = (void*)0;
static const int **g_85 = &g_86;
static char g_101[10] = {6L,6L,6L,6L,6L,6L,6L,6L,6L,6L};
static int *g_108 = (void*)0;
static int **g_107 = &g_108;
static unsigned char g_129 = 0UL;
static int g_132 = 0x13F5BBDAL;
static int g_149 = (-1L);
static long long g_161 = 0xDBC5227D837D6E89LL;
static unsigned short g_167 = 0xE5C0L;
static unsigned g_187 = 0xD2073866L;
static unsigned g_189[10][1][3] = {{{0x9CF0CBDDL,0x9CF0CBDDL,0x8FC330AEL}},{{0xB16F6D41L,0xBF4834D8L,0xB16F6D41L}},{{0x9CF0CBDDL,0x8FC330AEL,0x8FC330AEL}},{{0xAAA760A9L,0xBF4834D8L,0xAAA760A9L}},{{0x9CF0CBDDL,0x9CF0CBDDL,0x8FC330AEL}},{{0xB16F6D41L,0xBF4834D8L,0xB16F6D41L}},{{0x9CF0CBDDL,0x8FC330AEL,0x8FC330AEL}},{{0xAAA760A9L,0xBF4834D8L,0xAAA760A9L}},{{0x9CF0CBDDL,0x9CF0CBDDL,0x8FC330AEL}},{{0xB16F6D41L,0xBF4834D8L,0xB16F6D41L}}};
static const unsigned char *g_193 = &g_129;
static const unsigned char **g_192 = &g_193;
static const char *g_253 = &g_77;
static const char **g_252 = &g_253;
static const char ***g_251[5] = {&g_252,&g_252,&g_252,&g_252,&g_252};
static const char ****g_250 = &g_251[0];
static long long *g_258 = &g_161;
static long long **g_257[1][10][3] = {{{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258},{&g_258,&g_258,&g_258}}};
static unsigned char *g_263 = &g_40;
static short g_287 = (-1L);
static short *g_286 = &g_287;
static short * const *g_285 = &g_286;
static unsigned **g_289 = (void*)0;
static short g_330 = 0x0A4CL;
static short **g_343 = (void*)0;
static int g_345 = (-1L);
static int g_346 = 0L;
static unsigned short *g_353 = (void*)0;
static unsigned short **g_352[5] = {&g_353,&g_353,&g_353,&g_353,&g_353};
static short g_361 = 4L;
static unsigned long long g_366 = 0x65BDECCB6DA8DDDDLL;
static unsigned char g_381[10] = {0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL,0xFDL};
static int g_382[2][5] = {{2L,2L,2L,2L,2L},{2L,2L,2L,2L,2L}};
static const unsigned short *g_408[4][3] = {{&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167}};
static const unsigned short **g_407 = &g_408[3][1];
static const unsigned short ***g_406 = &g_407;
static unsigned g_420 = 0xAA0E664FL;
static int g_425[9][7][4] = {{{(-3L),(-1L),(-7L),0xFFB1C195L},{1L,0x8947E936L,0xA1CB9BC5L,0x195F2398L},{(-8L),(-5L),0xE2E95BB5L,(-10L)},{(-8L),0x7CA6CB46L,0xA1CB9BC5L,1L},{1L,(-10L),(-7L),0xF14CE7F4L},{(-3L),0x34903E4FL,0x195F2398L,0xB559AE18L},{(-1L),0x36277244L,(-1L),(-10L)}},{{0xBC9B478EL,1L,(-8L),(-10L)},{0xE2E95BB5L,0x15A30E4CL,(-10L),8L},{0xD675422DL,0x88EA05A7L,0x359E2882L,0x7CA6CB46L},{0x7AF16294L,(-1L),0x195F2398L,0x359E2882L},{(-2L),1L,0x7AF16294L,0xBC9B478EL},{0x15A30E4CL,0xED1B3257L,0x88EA05A7L,(-1L)},{(-3L),0x35B88F1BL,0x35B88F1BL,(-3L)}},{{0L,0xD675422DL,0xFE63921DL,1L},{0xE7D17F0DL,0x195F2398L,1L,(-8L)},{(-1L),0x82EA51AAL,(-1L),(-8L)},{0xE822A531L,0x195F2398L,0x15A30E4CL,1L},{0x88EA05A7L,0xD675422DL,(-2L),(-3L)},{1L,0x35B88F1BL,8L,(-1L)},{0x8947E936L,0xED1B3257L,0xE2E95BB5L,0xBC9B478EL}},{{0x64157EC8L,(-5L),(-1L),0xE2E95BB5L},{0x7AF16294L,0xB9280CF3L,0xE822A531L,0xD675422DL},{0x15A30E4CL,(-1L),0x8947E936L,0x7AF16294L},{0L,0x35B88F1BL,(-8L),(-2L)},{(-2L),(-3L),0xFE63921DL,0x4739A51EL},{(-5L),0L,0xDEC1A106L,(-8L)},{0x7AF16294L,0xB559AE18L,0x7AF16294L,0x36277244L}},{{0xE822A531L,(-2L),0xE7D17F0DL,(-1L)},{0L,0xD675422DL,8L,(-2L)},{0x35B88F1BL,0xFFB1C195L,8L,0x054D78C9L},{0L,0x34903E4FL,0xE7D17F0DL,0xBC9B478EL},{0xE822A531L,0xB9280CF3L,0x7AF16294L,0xE7D17F0DL},{0x7AF16294L,0xE7D17F0DL,0xDEC1A106L,0xA1CB9BC5L},{(-5L),(-1L),0xFE63921DL,(-1L)}},{{(-2L),0xFFB1C195L,(-8L),(-5L)},{0x15A30E4CL,(-10L),8L,0L},{0xED1B3257L,0xE7D17F0DL,(-3L),0x4739A51EL},{0xFFB1C195L,1L,(-8L),0x359E2882L},{0xA1CB9BC5L,0xE2E95BB5L,0x34903E4FL,0xFE63921DL},{8L,0x36277244L,(-5L),(-5L)},{0xF14CE7F4L,0xF14CE7F4L,0xE2E95BB5L,1L}},{{0x195F2398L,(-1L),0xED1B3257L,(-8L)},{(-3L),(-9L),(-8L),0xED1B3257L},{0x7CA6CB46L,(-9L),0L,(-8L)},{(-9L),(-1L),0L,1L},{0x15A30E4CL,0xF14CE7F4L,0xB990EC42L,(-5L)},{0xB9280CF3L,0x36277244L,0x195F2398L,0xFE63921DL},{0xED1B3257L,0xE2E95BB5L,0xBC9B478EL,0x359E2882L}},{{0x7CA6CB46L,1L,1L,0x4739A51EL},{0xBC9B478EL,0xE7D17F0DL,0x34903E4FL,0L},{(-3L),(-10L),0xE2E95BB5L,(-5L)},{0xB559AE18L,(-5L),0xB9280CF3L,(-8L)},{0x195F2398L,0x054D78C9L,(-9L),0x1867BA51L},{0xA1CB9BC5L,(-9L),1L,(-9L)},{(-8L),(-1L),0L,(-1L)}},{{0x00588CF0L,0x7AF16294L,8L,1L},{0xB9280CF3L,(-5L),0xB559AE18L,0xE2E95BB5L},{0xB9280CF3L,(-8L),8L,0xD99DD450L},{0x00588CF0L,0xE2E95BB5L,0xD99DD450L,0x15A30E4CL},{0xA1CB9BC5L,(-1L),(-3L),0xB9280CF3L},{0x8947E936L,0x35B88F1BL,0xF14CE7F4L,0xED1B3257L},{0x054D78C9L,0L,(-8L),0x7CA6CB46L}}};
static int *g_427 = &g_345;
static unsigned g_428[10][1][8] = {{{0x4D513ECCL,0xCA17D6DFL,0xCA17D6DFL,0x4D513ECCL,4UL,18446744073709551612UL,5UL,0xCA17D6DFL}},{{5UL,1UL,0UL,18446744073709551615UL,1UL,18446744073709551612UL,1UL,18446744073709551615UL}},{{18446744073709551612UL,1UL,18446744073709551612UL,0xCA17D6DFL,5UL,18446744073709551612UL,4UL,0x4D513ECCL}},{{0x47B80988L,0xCA17D6DFL,0x30E178A0L,5UL,0xB4C6E2BDL,0xB4C6E2BDL,5UL,0x30E178A0L}},{{0x47B80988L,0x47B80988L,18446744073709551612UL,18446744073709551615UL,5UL,18446744073709551615UL,0x47B80988L,5UL}},{{18446744073709551612UL,5UL,0xCA17D6DFL,18446744073709551612UL,1UL,18446744073709551612UL,0xCA17D6DFL,5UL}},{{5UL,4UL,0x30E178A0L,18446744073709551615UL,4UL,0xCA17D6DFL,1UL,0x30E178A0L}},{{0x4D513ECCL,1UL,0xEF8292C2L,5UL,5UL,0xEF8292C2L,1UL,0x4D513ECCL}},{{0xB4C6E2BDL,5UL,0x30E178A0L,0xCA17D6DFL,0x47B80988L,0xB4C6E2BDL,0xCA17D6DFL,18446744073709551615UL}},{{0x47B80988L,0xB4C6E2BDL,0xCA17D6DFL,18446744073709551615UL,0xCA17D6DFL,0xB4C6E2BDL,0x47B80988L,0xCA17D6DFL}}};
static unsigned short *g_433[6][6] = {{&g_167,&g_167,&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167,&g_167,(void*)0},{&g_167,&g_167,(void*)0,&g_167,&g_167,&g_167},{&g_167,&g_167,(void*)0,(void*)0,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167,&g_167,(void*)0},{(void*)0,&g_167,&g_167,(void*)0,&g_167,(void*)0}};
static long long ****g_558 = (void*)0;



static short func_1(void);
static int * func_2(int * p_3, int * const p_4, int * p_5, int * p_6, const int * const p_7);
static int * func_8(short p_9);
static char func_10(int p_11, int p_12);
static int * func_35(const unsigned char * p_36, int * p_37, long long p_38);
static int * func_41(unsigned p_42, int p_43);
static unsigned func_44(unsigned char * p_45, char p_46, int * p_47, unsigned p_48, unsigned long long p_49);
static unsigned char * func_50(short p_51, long long p_52, unsigned short p_53);
static int func_56(int * p_57, int * p_58);
static int * func_59(unsigned char p_60, int p_61, int p_62, unsigned long long p_63);
static short func_1(void)
{
    int *l_13 = &g_14;
    int l_21 = (-1L);
    unsigned char *l_24 = &g_25;
    unsigned char *l_262 = &g_129;
    unsigned char **l_261[2];
    unsigned *l_319 = &g_189[3][0][1];
    int **l_426[1];
    const int l_429[6][4][8] = {{{0xF0E43438L,0x6A90F7BAL,(-1L),(-1L),(-1L),0xDEB0F3B1L,(-1L),(-10L)},{0x6E50C411L,0x8A4E22AAL,0x09D33EE0L,0x2CF86053L,0xDEB0F3B1L,(-1L),0L,0xE7F9EF6BL},{0x09D33EE0L,0xA53490F2L,0x8BECFD67L,0x9D9BE230L,0x60568237L,0x16FB4B63L,(-10L),(-5L)},{0x346EB7A1L,0xA2ED9F7EL,1L,0L,0x8BECFD67L,(-1L),0x0EB0496DL,0x40781749L}},{{0L,0x346EB7A1L,0x6E50C411L,0xFDADD2ADL,9L,0xFDADD2ADL,0x6E50C411L,0x346EB7A1L},{4L,1L,6L,0L,1L,0xE1538F55L,0xFDADD2ADL,0xDEB0F3B1L},{0x2CF86053L,(-1L),(-2L),0xEAB7ACE2L,4L,0xA53490F2L,0xFDADD2ADL,0x8BECFD67L},{0xA2ED9F7EL,0xEAB7ACE2L,6L,0xE1538F55L,0xE62DC694L,0x8BECFD67L,0x843F08F7L,(-1L)}},{{1L,0x8BECFD67L,0x843F08F7L,(-1L),(-1L),0xDFC19357L,0xA2ED9F7EL,0L},{(-10L),(-1L),4L,7L,(-2L),1L,0x9D9BE230L,(-1L)},{0xC3A53F22L,0xB06D716DL,0xF0E43438L,0xE1538F55L,0L,1L,(-1L),0x40781749L},{0xEAB7ACE2L,1L,0x5A5F23C3L,1L,1L,0x16FB4B63L,6L,6L}},{{1L,0xFA38C4A0L,1L,1L,0xFA38C4A0L,1L,(-1L),0xBC60A1E1L},{(-1L),(-10L),1L,0x6E1642DFL,0xA53490F2L,0xA2ED9F7EL,(-5L),0xB06D716DL},{(-1L),0x9D9BE230L,(-1L),0x6E1642DFL,0xE1538F55L,0x0EB0496DL,0x16FB4B63L,0xBC60A1E1L},{0L,0xE1538F55L,0xE7F9EF6BL,1L,0xFDADD2ADL,0x6782EF53L,(-2L),6L}},{{0xE62DC694L,(-2L),0x0EB0496DL,1L,(-1L),0xE1538F55L,0x6A90F7BAL,0x40781749L},{(-2L),0x8A4E22AAL,0xEAB7ACE2L,0xE1538F55L,0x16FB4B63L,(-1L),9L,(-1L)},{0x60568237L,6L,(-1L),7L,(-1L),0xA53490F2L,1L,0L},{0xFA38C4A0L,0x6782EF53L,0x8BECFD67L,(-1L),0x16FB4B63L,0L,0x16FB4B63L,0L}},{{0x5A5F23C3L,0x843F08F7L,0x5A5F23C3L,1L,1L,0x6E50C411L,0xE62DC694L,0xB06D716DL},{0x60568237L,0xBFC92646L,7L,0xE62DC694L,4L,(-2L),1L,0L},{0x60568237L,0xFDADD2ADL,(-5L),0L,1L,0xDFC19357L,(-1L),0xEAB7ACE2L},{0x5A5F23C3L,0xE7F9EF6BL,0L,0x9D9BE230L,0x16FB4B63L,7L,0L,0x346EB7A1L}}};
    int l_430[6][4][5] = {{{1L,1L,6L,3L,5L},{(-7L),3L,0L,3L,3L},{3L,0x28DF6AF3L,3L,0xB8E3C385L,0x8DE90066L},{0L,3L,(-7L),0x881C86CEL,(-9L)}},{{6L,1L,1L,6L,3L},{1L,7L,(-7L),(-9L),3L},{0x7586316DL,0x39614339L,3L,0x39614339L,0x7586316DL},{7L,0x881C86CEL,0L,(-9L),1L}},{{0x23A54D17L,0x61E1EB6AL,6L,6L,0x61E1EB6AL},{3L,(-7L),1L,0x881C86CEL,1L},{0x39614339L,6L,0x7586316DL,0xB8E3C385L,0x7586316DL},{1L,1L,7L,3L,3L}},{{1L,0x28DF6AF3L,5L,0x7586316DL,0x7586316DL},{1L,8L,1L,7L,(-7L)},{5L,0x28DF6AF3L,1L,0x23A54D17L,0x39614339L},{3L,0x881C86CEL,0x881C86CEL,3L,1L}},{{0x8DE90066L,3L,1L,0x39614339L,0x28DF6AF3L},{(-9L),1L,1L,1L,(-9L)},{3L,0x23A54D17L,5L,0x39614339L,0x61E1EB6AL},{3L,0L,3L,3L,0L}},{{0x7586316DL,1L,0x8DE90066L,0x23A54D17L,0x61E1EB6AL},{1L,3L,(-9L),7L,(-9L)},{0x61E1EB6AL,0x61E1EB6AL,3L,0x7586316DL,0x28DF6AF3L},{1L,1L,3L,1L,1L}}};
    unsigned l_437 = 0x8AA40158L;
    int *l_580 = &g_80;
    int l_581[9][6][4] = {{{0x13A6D809L,4L,0x6FC7E840L,0x6128634EL},{0x2E42B0E4L,(-1L),0x861BEFA6L,0xFD90FBA4L},{0x6D9D3B92L,(-5L),0L,8L},{0x6128634EL,0x036AAA67L,1L,0x779E86BAL},{0x2E42B0E4L,8L,8L,0x2E42B0E4L},{0x7A61B208L,1L,(-9L),0L}},{{0x6DFE086DL,0x779E86BAL,1L,(-3L)},{3L,0xB8E8EC1EL,0L,(-3L)},{0x6CF7CFFAL,0x779E86BAL,0xE5D746EFL,0x1D37EA19L},{(-3L),0x4D82B0ABL,0x66510CD3L,(-5L)},{9L,0xA3A6EFA5L,0x6CF7CFFAL,0x6128634EL},{0xB8E8EC1EL,(-3L),0x1D37EA19L,0xA3A6EFA5L}},{{0x13A6D809L,0L,1L,4L},{0xFD90FBA4L,8L,0x6CF7CFFAL,1L},{0xE5D746EFL,9L,0x53264C2BL,0x7A61B208L},{(-3L),0x13A6D809L,0L,0x4D82B0ABL},{0x4D82B0ABL,0x743EF446L,0xE5D746EFL,0x2E42B0E4L},{0L,0x036AAA67L,4L,0L}},{{0x036AAA67L,0x13A6D809L,1L,0x13A6D809L},{0x8B9F3A0EL,0xE5D746EFL,0xA3A6EFA5L,1L},{0x861BEFA6L,0x9B1438A6L,(-1L),0L},{1L,0L,0x0E2F97B7L,0x779E86BAL},{1L,0x53264C2BL,(-1L),0x6128634EL},{0x861BEFA6L,0x779E86BAL,0xA3A6EFA5L,0x861BEFA6L}},{{0x8B9F3A0EL,0x4D82B0ABL,1L,5L},{0x036AAA67L,0x6D9D3B92L,4L,0xFD90FBA4L},{0L,4L,0xE5D746EFL,0xB8E8EC1EL},{0x4D82B0ABL,0x6128634EL,0L,5L},{(-3L),0L,0x53264C2BL,(-5L)},{0xE5D746EFL,0x779E86BAL,0x6CF7CFFAL,0x6D9D3B92L}},{{0xFD90FBA4L,(-3L),1L,0x779E86BAL},{0x13A6D809L,(-1L),0x1D37EA19L,4L},{0xB8E8EC1EL,0x9B1438A6L,0L,0L},{4L,4L,0x13A6D809L,8L},{0x7A61B208L,0x6FC7E840L,0x18423168L,0x861BEFA6L},{1L,(-8L),0x3BF54EFDL,0x18423168L}},{{0L,(-8L),1L,0x861BEFA6L},{(-8L),0x6FC7E840L,0x0E2F97B7L,8L},{0x28351B1CL,4L,0xA60FBD32L,0L},{0x743EF446L,0xB8E8EC1EL,(-3L),0x1D37EA19L},{(-9L),0x66510CD3L,2L,0L},{0L,0x7A61B208L,0x66510CD3L,0xBFF308EDL}},{{0x743EF446L,0L,4L,0x743EF446L},{0xA3A6EFA5L,1L,0x0E2F97B7L,0x6D9D3B92L},{2L,0xE5D746EFL,(-9L),0x961AFAE6L},{0L,0x1D37EA19L,3L,0L},{0x861BEFA6L,0xBFF308EDL,0x18423168L,0x6D9D3B92L},{1L,0x861BEFA6L,1L,0x0E2F97B7L}},{{4L,0L,0x2E42B0E4L,0xE5D746EFL},{0L,1L,0x1E1B94CBL,0L},{0x6FC7E840L,0x53264C2BL,0x1E1B94CBL,1L},{0L,0xB8E8EC1EL,0x2E42B0E4L,(-9L)},{4L,0x3BF54EFDL,1L,8L},{1L,8L,0x18423168L,1L}}};
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_261[i] = &l_262;
    for (i = 0; i < 1; i++)
        l_426[i] = &g_108;
    l_580 = func_2(func_8((func_10(((*l_13) = 0xC662A2B3L), ((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u((l_21 ^ ((*l_24) = ((void*)0 != g_22[6]))), (safe_sub_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(l_21, (safe_rshift_func_int16_t_s_u(0x6F93L, (g_32 = l_21))))) & ((safe_mul_func_int8_t_s_s((((g_427 = func_35(g_39[0][1][2], func_41(((*l_319) = func_44((g_263 = func_50((((&l_21 != g_22[6]) ^ 8L) & l_21), l_21, l_21)), l_21, g_22[6], g_187, g_189[9][0][0])), l_21), l_21)) == &g_345) || (**g_407)), g_428[4][0][3])) & g_381[3])), l_429[5][1][2])))), (***g_406))), 9)) | l_430[3][3][4])) < l_437)), &g_345, &g_345, &g_345, &g_345);
    return l_581[8][1][3];
}







static int * func_2(int * p_3, int * const p_4, int * p_5, int * p_6, const int * const p_7)
{
    int *l_578 = &g_345;
    int **l_579[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    g_427 = l_578;
    g_108 = p_5;
    return &g_345;
}







static int * func_8(short p_9)
{
    unsigned l_438 = 5UL;
    const unsigned char *l_448[6] = {&g_25,&g_25,&g_25,&g_25,&g_25,&g_25};
    int *l_452 = &g_80;
    char l_455 = 0xB2L;
    short * const **l_523 = &g_285;
    int ** const l_544 = &g_22[6];
    int i;
    for (g_346 = 8; (g_346 >= 0); g_346 -= 1)
    {
        int l_441 = 0xE4DC9AE8L;
        int *l_449 = &g_80;
        unsigned long long l_450 = 1UL;
        const int *l_486 = &g_345;
        unsigned l_487[9][9] = {{0x21DBCC12L,18446744073709551608UL,9UL,18446744073709551608UL,0x21DBCC12L,0x21DBCC12L,18446744073709551608UL,9UL,18446744073709551608UL},{18446744073709551615UL,18446744073709551613UL,1UL,1UL,18446744073709551613UL,18446744073709551615UL,18446744073709551613UL,1UL,1UL},{0x21DBCC12L,0x21DBCC12L,18446744073709551608UL,9UL,18446744073709551608UL,0x21DBCC12L,0x21DBCC12L,18446744073709551608UL,9UL},{1UL,18446744073709551613UL,1UL,18446744073709551615UL,18446744073709551615UL,1UL,18446744073709551613UL,1UL,18446744073709551615UL},{0xA0B733C3L,18446744073709551608UL,18446744073709551608UL,0xA0B733C3L,0x8F8F5DE3L,0xA0B733C3L,18446744073709551608UL,18446744073709551608UL,0xA0B733C3L},{9UL,18446744073709551615UL,1UL,18446744073709551615UL,9UL,9UL,18446744073709551615UL,1UL,18446744073709551615UL},{18446744073709551608UL,0x8F8F5DE3L,9UL,9UL,0x8F8F5DE3L,18446744073709551608UL,0x8F8F5DE3L,9UL,9UL},{9UL,9UL,18446744073709551615UL,1UL,18446744073709551615UL,9UL,9UL,18446744073709551615UL,1UL},{0xA0B733C3L,0x8F8F5DE3L,0xA0B733C3L,18446744073709551608UL,18446744073709551608UL,0xA0B733C3L,0x8F8F5DE3L,0xA0B733C3L,18446744073709551608UL}};
        int i, j;
    }
    return l_452;
}







static char func_10(int p_11, int p_12)
{
    unsigned short *l_431 = (void*)0;
    unsigned short **l_432[1];
    unsigned short *l_434 = &g_167;
    unsigned short *l_435[2][7][2] = {{{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167}},{{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167},{&g_167,&g_167}}};
    int *l_436 = &g_80;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_432[i] = &l_431;
    (*g_427) = (((g_433[1][3] = l_431) != (l_435[1][2][1] = l_434)) > (0xE74484EAL | (~(-4L))));
    l_436 = l_436;
    return (**g_252);
}







static int * func_35(const unsigned char * p_36, int * p_37, long long p_38)
{
    int *l_333 = &g_80;
    unsigned * const l_337 = &g_189[4][0][2];
    unsigned * const *l_336 = &l_337;
    short **l_340 = &g_286;
    short ***l_341 = (void*)0;
    short ***l_342[5][4][7] = {{{&l_340,(void*)0,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340}},{{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{(void*)0,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340}},{{(void*)0,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0},{&l_340,&l_340,&l_340,&l_340,(void*)0,&l_340,&l_340},{(void*)0,&l_340,&l_340,&l_340,&l_340,&l_340,(void*)0},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340}},{{&l_340,&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340},{&l_340,&l_340,(void*)0,&l_340,&l_340,(void*)0,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340}},{{&l_340,&l_340,&l_340,&l_340,(void*)0,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,(void*)0,&l_340},{&l_340,&l_340,&l_340,(void*)0,(void*)0,&l_340,&l_340},{&l_340,&l_340,&l_340,&l_340,&l_340,&l_340,&l_340}}};
    int *l_344 = &g_345;
    int i, j, k;
    l_333 = l_333;
    return p_37;
}







static int * func_41(unsigned p_42, int p_43)
{
    int *l_326[9][9] = {{&g_80,(void*)0,(void*)0,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80},{(void*)0,&g_80,&g_80,&g_80,&g_80,&g_80,(void*)0,(void*)0,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,(void*)0,&g_80,&g_80,&g_80,(void*)0,(void*)0,(void*)0},{&g_80,(void*)0,(void*)0,&g_80,&g_80,(void*)0,(void*)0,&g_80,(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,&g_80,&g_80,&g_80},{&g_80,&g_80,(void*)0,&g_80,&g_80,&g_80,&g_80,(void*)0,&g_80},{&g_80,&g_80,&g_80,&g_80,(void*)0,&g_80,&g_80,&g_80,&g_80},{(void*)0,(void*)0,&g_80,&g_80,&g_80,&g_80,(void*)0,(void*)0,&g_80}};
    int **l_327 = &l_326[0][7];
    int *l_328[8][4] = {{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80}};
    short *l_329 = &g_330;
    int l_331[4][1][8] = {{{0x9CF198F1L,0xB85FABE8L,0xB85FABE8L,0x9CF198F1L,0x9CF198F1L,0xB85FABE8L,0xB85FABE8L,0x9CF198F1L}},{{0x9CF198F1L,0xB85FABE8L,0xB85FABE8L,0x9CF198F1L,0x9CF198F1L,0xB85FABE8L,0xB85FABE8L,0x9CF198F1L}},{{0x9CF198F1L,0xB85FABE8L,0xB85FABE8L,0x9CF198F1L,0x9CF198F1L,0xB85FABE8L,0xB85FABE8L,0x9CF198F1L}},{{0x9CF198F1L,0xB85FABE8L,0xB85FABE8L,0x9CF198F1L,0x9CF198F1L,0xB85FABE8L,0xB85FABE8L,0x9CF198F1L}}};
    unsigned long long l_332 = 0xE722CEAE8B50833BLL;
    int i, j, k;
    g_80 = ((((safe_add_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((*g_286) = (0x82EAEAA3F01E3291LL && 0xBA6C3AF949218AC6LL)), ((g_167 > ((*l_329) = (safe_lshift_func_uint8_t_u_u((**g_192), p_42)))) == (*g_258)))) != ((l_331[1][0][7] || (-6L)) & p_43)) ^ l_332), 0x2888L)) != 0x0BF49BC35313655ELL) != p_42) == p_43);
    return &g_23;
}







static unsigned func_44(unsigned char * p_45, char p_46, int * p_47, unsigned p_48, unsigned long long p_49)
{
    int *l_273 = &g_80;
    long long **l_302[1][2][5] = {{{&g_258,&g_258,(void*)0,(void*)0,&g_258},{&g_258,&g_258,(void*)0,(void*)0,&g_258}}};
    int i, j, k;
    for (p_49 = 17; (p_49 >= 38); p_49 = safe_add_func_uint8_t_u_u(p_49, 7))
    {
        int **l_266 = &g_108;
        (*l_266) = p_47;
        for (g_161 = 0; (g_161 >= 0); g_161 -= 1)
        {
            char l_280 = 0xAEL;
            char l_281 = 0L;
            int l_298 = 0x7829FDDAL;
            (**l_266) = (g_80 || (safe_lshift_func_uint16_t_u_u(((((*g_263) = (safe_mul_func_uint8_t_u_u((((~(*g_193)) || (safe_rshift_func_int8_t_s_s(p_48, (func_56(p_47, l_273) & (p_46 <= (safe_add_func_int64_t_s_s((safe_div_func_int8_t_s_s(p_46, (safe_mul_func_int8_t_s_s(0x2FL, l_280)))), l_281))))))) <= 8UL), (****g_250)))) <= l_281) < g_149), 5)));
            if (p_49)
            {
                short l_284 = 0x87CFL;
                for (g_132 = 0; (g_132 >= 0); g_132 -= 1)
                {
                    unsigned ***l_290 = &g_289;
                    int i, j, k;
                    if ((safe_lshift_func_uint16_t_u_u(g_189[(g_161 + 6)][g_161][(g_132 + 1)], (g_189[(g_161 + 6)][g_161][(g_132 + 1)] >= p_46))))
                    {
                        short * const **l_288 = &g_285;
                        (*l_266) = p_47;
                        (*l_266) = func_59((*p_45), (**l_266), ((*l_273) = (g_189[(g_161 + 6)][g_161][(g_132 + 1)] < (*g_108))), l_284);
                        (*l_288) = g_285;
                        if (l_280)
                            continue;
                    }
                    else
                    {
                        (*l_266) = p_47;
                        (*l_273) = l_280;
                        (*g_108) = (3UL < l_284);
                        (*l_266) = p_47;
                    }
                    (*l_290) = g_289;
                }
                if (l_280)
                    break;
            }
            else
            {
                unsigned short *l_297[7][8][4] = {{{&g_167,&g_167,(void*)0,&g_167},{&g_167,&g_167,&g_167,(void*)0},{&g_167,&g_167,&g_167,&g_167},{(void*)0,&g_167,(void*)0,&g_167},{&g_167,&g_167,(void*)0,&g_167},{&g_167,&g_167,(void*)0,&g_167},{&g_167,&g_167,(void*)0,(void*)0},{(void*)0,&g_167,&g_167,(void*)0}},{{&g_167,(void*)0,&g_167,&g_167},{&g_167,&g_167,(void*)0,&g_167},{&g_167,&g_167,(void*)0,(void*)0},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,(void*)0,&g_167},{&g_167,(void*)0,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,(void*)0,(void*)0}},{{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,(void*)0},{&g_167,&g_167,&g_167,&g_167},{&g_167,(void*)0,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167}},{{&g_167,&g_167,(void*)0,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,(void*)0,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,(void*)0,&g_167},{&g_167,(void*)0,&g_167,&g_167},{&g_167,&g_167,&g_167,(void*)0}},{{&g_167,(void*)0,&g_167,&g_167},{&g_167,&g_167,&g_167,(void*)0},{&g_167,&g_167,&g_167,&g_167},{&g_167,(void*)0,(void*)0,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,(void*)0,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167}},{{&g_167,(void*)0,(void*)0,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{(void*)0,&g_167,&g_167,(void*)0},{&g_167,&g_167,&g_167,&g_167},{(void*)0,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{(void*)0,&g_167,&g_167,&g_167}},{{&g_167,&g_167,&g_167,(void*)0},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167},{&g_167,(void*)0,&g_167,&g_167},{(void*)0,&g_167,(void*)0,&g_167},{&g_167,(void*)0,&g_167,(void*)0},{&g_167,&g_167,&g_167,&g_167},{&g_167,&g_167,&g_167,&g_167}}};
                long long ***l_303 = &l_302[0][0][1];
                int i, j, k;
                (*l_273) = ((safe_mod_func_int16_t_s_s((safe_add_func_uint64_t_u_u(18446744073709551610UL, p_48)), (l_298 = (safe_lshift_func_int16_t_s_u(p_46, p_49))))) != (safe_div_func_int64_t_s_s(p_48, g_132)));
                (*g_108) = (safe_unary_minus_func_int8_t_s(p_49));
                (*l_303) = l_302[0][0][1];
                if (p_49)
                    break;
            }
            for (g_132 = 0; (g_132 <= 0); g_132 += 1)
            {
                for (g_287 = 0; (g_287 <= 0); g_287 += 1)
                {
                    unsigned long long l_318 = 0xC6C6E6C73E762944LL;
                    (**l_266) = (safe_lshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s((**l_266), (0xBCL & ((safe_lshift_func_uint8_t_u_u((*g_263), (safe_sub_func_uint16_t_u_u((p_46 ^ (safe_sub_func_int8_t_s_s((safe_sub_func_int16_t_s_s(p_48, ((safe_add_func_int16_t_s_s((p_46 == (*g_108)), (((((void*)0 == &g_39[4][3][0]) < 0x60L) ^ 9UL) >= (-3L)))) > p_46))), 0x41L))), g_167)))) != l_318)))), p_46));
                }
            }
        }
    }
    return (*l_273);
}







static unsigned char * func_50(short p_51, long long p_52, unsigned short p_53)
{
    char l_64[5][6][1] = {{{0x26L},{0x7AL},{1L},{0L},{0x9EL},{1L}},{{1L},{1L},{0x9EL},{0L},{1L},{0x7AL}},{{0x26L},{0x9EL},{0x9EL},{0x26L},{0x7AL},{1L}},{{0L},{0x9EL},{1L},{1L},{1L},{0x9EL}},{{0L},{1L},{0x7AL},{0x26L},{0x9EL},{0x9EL}}};
    int *l_79[2][9][10] = {{{&g_80,&g_80,&g_80,(void*)0,(void*)0,(void*)0,(void*)0,&g_80,&g_80,&g_80},{(void*)0,(void*)0,&g_80,&g_80,(void*)0,&g_80,(void*)0,&g_80,&g_80,&g_80},{(void*)0,&g_80,&g_80,(void*)0,(void*)0,(void*)0,&g_80,&g_80,(void*)0,&g_80},{(void*)0,(void*)0,&g_80,&g_80,&g_80,(void*)0,&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,(void*)0,&g_80},{&g_80,&g_80,&g_80,(void*)0,&g_80,&g_80,(void*)0,&g_80,&g_80,&g_80},{(void*)0,&g_80,&g_80,&g_80,&g_80,&g_80,(void*)0,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80,(void*)0,&g_80,&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,(void*)0,&g_80,(void*)0,&g_80}},{{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,(void*)0,&g_80,(void*)0,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,(void*)0,(void*)0,&g_80,&g_80},{&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,(void*)0,&g_80,(void*)0,&g_80},{&g_80,&g_80,&g_80,&g_80,(void*)0,(void*)0,&g_80,(void*)0,(void*)0,&g_80},{&g_80,&g_80,&g_80,&g_80,(void*)0,&g_80,(void*)0,&g_80,&g_80,(void*)0},{(void*)0,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80,&g_80},{&g_80,&g_80,&g_80,(void*)0,&g_80,&g_80,&g_80,(void*)0,&g_80,&g_80},{&g_80,(void*)0,&g_80,&g_80,&g_80,(void*)0,&g_80,&g_80,&g_80,(void*)0}}};
    int **l_141 = &l_79[0][2][9];
    unsigned long long l_147 = 0xF287346C39F9920BLL;
    int *l_175 = &g_80;
    char **l_178 = (void*)0;
    char **l_179 = &g_83;
    short l_229 = (-1L);
    char ***l_236 = (void*)0;
    unsigned char *l_260 = &g_129;
    int i, j, k;
    if ((safe_sub_func_int32_t_s_s(func_56(func_59(p_51, l_64[3][4][0], l_64[3][4][0], l_64[3][4][0]), l_79[1][4][6]), g_80)))
    {
        unsigned char *l_89 = &g_40;
        int *l_94[1];
        int i;
        for (i = 0; i < 1; i++)
            l_94[i] = &g_80;
        for (p_53 = 0; (p_53 <= 1); p_53 += 1)
        {
            return l_89;
        }
        if ((safe_mul_func_uint16_t_u_u(func_56(func_59((func_56(l_94[0], &g_80) >= (g_40 != g_40)), p_51, ((safe_add_func_uint8_t_u_u((g_23 & ((safe_rshift_func_int8_t_s_u((*g_83), 3)) > (g_101[0] = (safe_rshift_func_int16_t_s_s((p_52 ^ 4294967295UL), p_53))))), (*g_83))) < p_53), p_52), g_22[6]), g_40)))
        {
            int l_102 = 0x83651A33L;
            int l_103 = 4L;
            unsigned char *l_104 = &g_40;
            l_103 = l_102;
            return l_104;
        }
        else
        {
            char l_105 = 1L;
            l_105 = 0xBF70E0EEL;
        }
        l_79[1][6][6] = l_79[1][4][6];
    }
    else
    {
        short l_109 = 9L;
        int *l_110 = &g_80;
        int l_131 = 5L;
        short l_142 = (-1L);
        unsigned char ** const l_194[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
        int *l_199 = &g_149;
        unsigned char l_211 = 0xBCL;
        int i;
lbl_148:
        for (p_51 = 2; (p_51 >= 0); p_51 -= 1)
        {
            int **l_106 = (void*)0;
            int **l_111 = (void*)0;
            int **l_112 = &l_79[1][4][6];
            g_107 = l_106;
            l_110 = ((*l_112) = func_59(p_51, p_52, l_109, func_56(l_110, func_59(p_51, p_52, p_52, (*l_110)))));
            return &g_40;
        }
        for (g_80 = 0; (g_80 <= 1); g_80 += 1)
        {
            unsigned l_113[8][8][4] = {{{18446744073709551614UL,3UL,0x881B6A48L,1UL},{0x4949FC4AL,18446744073709551612UL,0xD840C936L,0x17EF1465L},{0x7E6343A1L,7UL,18446744073709551615UL,0UL},{0x5199CEA1L,0xBAD4E8C8L,18446744073709551615UL,0xD840C936L},{18446744073709551607UL,0x5827A635L,0xDFEA10F5L,18446744073709551608UL},{0x881B6A48L,18446744073709551612UL,1UL,0x8F7CEBB1L},{0x5199CEA1L,18446744073709551608UL,0xBAD4E8C8L,0UL},{18446744073709551606UL,0x17EF1465L,0x6744ED4CL,0x5002FA5DL}},{{0x447B4B06L,18446744073709551615UL,0x7E6343A1L,0x74EAE512L},{3UL,1UL,1UL,3UL},{0xC2C54013L,0xC385723EL,9UL,0x3B8D9BCAL},{0x43182763L,2UL,18446744073709551615UL,0UL},{0x8F7CEBB1L,0x5002FA5DL,18446744073709551608UL,0UL},{0xB438E4B9L,2UL,18446744073709551606UL,0x3B8D9BCAL},{0x17EF1465L,0xC385723EL,0xCED91AC4L,3UL},{0xEAFFB5D1L,1UL,3UL,0x74EAE512L}},{{18446744073709551608UL,18446744073709551615UL,0x83892296L,0x5002FA5DL},{5UL,0x17EF1465L,18446744073709551614UL,0UL},{18446744073709551615UL,18446744073709551608UL,9UL,0x8F7CEBB1L},{18446744073709551613UL,18446744073709551612UL,18446744073709551614UL,18446744073709551608UL},{0xF1CD1821L,0x5827A635L,0x99FC8002L,0xD840C936L},{0xD840C936L,0xBAD4E8C8L,9UL,0x43182763L},{0x6744ED4CL,18446744073709551607UL,9UL,18446744073709551607UL},{5UL,0x881B6A48L,7UL,0xFDFC4DD9L}},{{0xF35E5FA5L,9UL,3UL,0xD9F78EB2L},{18446744073709551614UL,0xEAFFB5D1L,0xAA0F805AL,0xB438E4B9L},{0x17EF1465L,0UL,0UL,18446744073709551615UL},{18446744073709551615UL,18446744073709551607UL,0xBDF17F54L,0x74EAE512L},{1UL,0x881B6A48L,0xAA0F805AL,0x6744ED4CL},{0x881B6A48L,0x5199CEA1L,0x377FB2C3L,18446744073709551615UL},{18446744073709551615UL,18446744073709551606UL,9UL,2UL},{0xBDF17F54L,0x447B4B06L,9UL,0x35E4DCDAL}},{{5UL,3UL,0x31D74955L,3UL},{0x74EAE512L,0xC2C54013L,0x35E4DCDAL,0x881B6A48L},{0xBAD4E8C8L,0x43182763L,18446744073709551608UL,18446744073709551615UL},{3UL,0x8F7CEBB1L,7UL,0x17EF1465L},{3UL,0xB438E4B9L,18446744073709551608UL,0UL},{0xBAD4E8C8L,0x17EF1465L,0x35E4DCDAL,18446744073709551613UL},{0x74EAE512L,0xEAFFB5D1L,0x31D74955L,0xF1CD1821L},{5UL,18446744073709551608UL,9UL,0xD9F78EB2L}},{{0xBDF17F54L,5UL,9UL,0xBDF17F54L},{18446744073709551615UL,18446744073709551615UL,0x377FB2C3L,0x5827A635L},{0x881B6A48L,18446744073709551613UL,0xAA0F805AL,0xA3ACD9B7L},{1UL,0xF1CD1821L,0xBDF17F54L,0x5002FA5DL},{18446744073709551615UL,0xD840C936L,0x99FC8002L,0x5827A635L},{0xEAFFB5D1L,0x6744ED4CL,1UL,0x4949FC4AL},{18446744073709551606UL,5UL,0UL,3UL},{0x17EF1465L,0xF35E5FA5L,0x4CD19B67L,0xF1CD1821L}},{{18446744073709551612UL,18446744073709551614UL,3UL,0x5199CEA1L},{0x3B8D9BCAL,0x17EF1465L,18446744073709551614UL,1UL},{0UL,18446744073709551607UL,0xDF186003L,18446744073709551607UL},{3UL,18446744073709551612UL,18446744073709551613UL,0x3B8D9BCAL},{0x31D74955L,1UL,18446744073709551609UL,0x7E6343A1L},{18446744073709551615UL,18446744073709551613UL,0xD840C936L,9UL},{18446744073709551613UL,18446744073709551615UL,0xB857EB28L,1UL},{2UL,3UL,7UL,7UL}},{{0xBDF17F54L,0xBDF17F54L,0xEAFFB5D1L,18446744073709551613UL},{18446744073709551608UL,18446744073709551615UL,0x347D9254L,0xC2C54013L},{0x26F2DC12L,0x5002FA5DL,0x377FB2C3L,0x347D9254L},{18446744073709551614UL,0x5002FA5DL,0x17EF1465L,0xC2C54013L},{0x5002FA5DL,18446744073709551615UL,1UL,18446744073709551613UL},{0UL,0xBDF17F54L,18446744073709551615UL,7UL},{1UL,3UL,0x74EAE512L,1UL},{0UL,18446744073709551615UL,1UL,9UL}}};
            int l_133[5] = {9L,9L,9L,9L,9L};
            long long l_169 = 0x538AD10CE58A1196LL;
            int i, j, k;
            l_113[4][4][2] = 0xBCB00F8CL;
            for (p_53 = 0; (p_53 <= 1); p_53 += 1)
            {
                int l_126 = 0x58F93B69L;
                int l_130 = (-1L);
                if ((safe_lshift_func_uint8_t_u_s(((~(+(p_52 == (safe_sub_func_uint8_t_u_u(l_113[4][4][2], (safe_div_func_uint32_t_u_u(p_51, (safe_sub_func_int32_t_s_s(((safe_add_func_int64_t_s_s((g_23 <= ((safe_mod_func_int8_t_s_s((*g_83), (p_51 ^ l_126))) || (safe_mul_func_int16_t_s_s(g_40, g_80)))), l_113[4][4][2])) == p_52), (*l_110)))))))))) || 1L), 3)))
                {
                    if (g_129)
                        break;
                    if (p_53)
                    {
                        l_130 = p_52;
                        l_131 = p_53;
                    }
                    else
                    {
                        g_132 = p_53;
                    }
                    for (g_40 = 0; (g_40 <= 0); g_40 += 1)
                    {
                        int i, j, k;
                        l_133[1] = l_64[(p_53 + 1)][(p_53 + 3)][g_40];
                        if (p_53)
                            break;
                        if (p_52)
                            continue;
                        if (l_133[1])
                            break;
                    }
                }
                else
                {
                    int l_138 = 0x33917899L;
                    int l_156[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                    int i;
                    if ((safe_lshift_func_int8_t_s_u((p_52 == (safe_add_func_uint8_t_u_u((((p_53 && (p_52 <= l_138)) >= p_51) || (p_51 & (g_40 < (safe_add_func_int16_t_s_s(((l_141 = (void*)0) == (void*)0), 1L))))), p_53))), 4)))
                    {
                        l_133[1] = l_142;
                    }
                    else
                    {
                        unsigned long long l_145 = 18446744073709551615UL;
                        int l_146 = (-8L);
                        l_130 = (l_146 = (p_51 == (safe_add_func_int32_t_s_s(p_51, ((l_145 = (l_138 && l_138)) != 0x2B228E05L)))));
                        (*g_107) = func_59(p_52, l_147, ((*l_110) && (l_146 != (((void*)0 != &g_132) & g_132))), p_51);
                        (*g_107) = (*g_107);
                        if (l_138)
                            goto lbl_148;
                    }
                    for (g_40 = 0; (g_40 <= 1); g_40 += 1)
                    {
                        int i, j, k;
                        g_149 = (-9L);
                    }
                    (*g_107) = (*g_107);
                    if (p_52)
                    {
                        char l_150 = 0L;
                        int *l_151 = (void*)0;
                        if (p_51)
                            break;
                        l_150 = (((*l_110) == 0xC51EL) != (*l_110));
                        (*g_107) = l_151;
                    }
                    else
                    {
                        l_156[2] = (safe_mod_func_uint64_t_u_u((*l_110), (safe_mod_func_int32_t_s_s((l_131 = 0x9E0A6E62L), l_138))));
                        (*g_107) = &l_131;
                    }
                }
                if (p_51)
                    continue;
                for (g_23 = 0; (g_23 <= 0); g_23 += 1)
                {
                    long long *l_160 = &g_161;
                    unsigned short *l_166[3];
                    int l_168[7];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_166[i] = &g_167;
                    for (i = 0; i < 7; i++)
                        l_168[i] = 0L;
                    for (l_109 = 1; (l_109 >= 0); l_109 -= 1)
                    {
                        char l_157 = 0xEFL;
                        int i, j, k;
                        l_157 = p_52;
                        l_79[g_80][(l_109 + 5)][(p_53 + 1)] = (*g_107);
                    }
                    l_169 = (safe_div_func_uint8_t_u_u((((*l_160) = 0x44792A7B370A5D86LL) && (safe_sub_func_uint64_t_u_u((safe_div_func_uint16_t_u_u((l_168[6] = (*l_110)), p_51)), p_53))), p_52));
                }
            }
        }
        (*g_107) = (void*)0;
        for (l_131 = 0; (l_131 >= (-19)); l_131 = safe_sub_func_uint16_t_u_u(l_131, 7))
        {
            int *l_174 = &g_80;
            int l_181 = 0x36AD9C87L;
            char ***l_237 = &g_82[2];
            for (p_52 = 0; (p_52 < 23); p_52 = safe_add_func_int32_t_s_s(p_52, 7))
            {
                if (p_53)
                    break;
            }
            for (p_51 = 0; (p_51 <= 0); p_51 += 1)
            {
                int i;
                if (g_101[(p_51 + 7)])
                    break;
                (*g_107) = l_174;
                return &g_40;
            }
            for (p_53 = 0; (p_53 <= 0); p_53 += 1)
            {
                char **l_180 = &g_83;
                unsigned *l_186 = &g_187;
                unsigned *l_188 = &g_189[3][0][1];
                int l_216 = 5L;
            }
        }
    }
    return l_260;
}







static int func_56(int * p_57, int * p_58)
{
    unsigned l_81 = 18446744073709551610UL;
    char ***l_84[7][4][8] = {{{&g_82[1],&g_82[1],(void*)0,&g_82[2],&g_82[2],&g_82[2],(void*)0,&g_82[1]},{&g_82[1],&g_82[2],&g_82[2],(void*)0,(void*)0,&g_82[2],&g_82[2],&g_82[1]},{&g_82[2],(void*)0,&g_82[1],&g_82[2],&g_82[1],(void*)0,&g_82[2],&g_82[2]},{(void*)0,&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2]}},{{&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2]},{&g_82[2],(void*)0,(void*)0,&g_82[2],(void*)0,&g_82[2],(void*)0,&g_82[2]},{(void*)0,(void*)0,(void*)0,&g_82[2],&g_82[2],&g_82[2],&g_82[2],(void*)0},{(void*)0,(void*)0,&g_82[2],&g_82[2],&g_82[1],&g_82[2],&g_82[2],(void*)0}},{{(void*)0,(void*)0,&g_82[2],&g_82[2],&g_82[2],&g_82[2],(void*)0,(void*)0},{(void*)0,&g_82[2],(void*)0,&g_82[2],(void*)0,&g_82[2],(void*)0,(void*)0},{&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2]},{&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2]}},{{&g_82[2],(void*)0,(void*)0,&g_82[2],(void*)0,&g_82[2],(void*)0,&g_82[2]},{(void*)0,(void*)0,(void*)0,&g_82[2],&g_82[2],&g_82[2],&g_82[2],(void*)0},{(void*)0,(void*)0,&g_82[2],&g_82[2],&g_82[1],&g_82[2],&g_82[2],(void*)0},{(void*)0,(void*)0,(void*)0,&g_82[1],&g_82[1],(void*)0,&g_82[2],&g_82[2]}},{{&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2]},{&g_82[2],&g_82[2],(void*)0,(void*)0,&g_82[2],&g_82[2],&g_82[1],&g_82[2]},{&g_82[2],&g_82[2],&g_82[1],&g_82[2],&g_82[2],(void*)0,(void*)0,&g_82[2]},{&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2]}},{{&g_82[2],&g_82[2],&g_82[2],(void*)0,&g_82[1],&g_82[1],(void*)0,&g_82[2]},{&g_82[2],&g_82[2],&g_82[1],&g_82[2],(void*)0,&g_82[2],&g_82[1],&g_82[2]},{&g_82[2],&g_82[2],(void*)0,&g_82[1],&g_82[1],(void*)0,&g_82[2],&g_82[2]},{&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2]}},{{&g_82[2],&g_82[2],(void*)0,(void*)0,&g_82[2],&g_82[2],&g_82[1],&g_82[2]},{&g_82[2],&g_82[2],&g_82[1],&g_82[2],&g_82[2],(void*)0,(void*)0,&g_82[2]},{&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2],&g_82[2]},{&g_82[2],&g_82[2],&g_82[2],&g_82[2],(void*)0,(void*)0,&g_82[2],&g_82[2]}}};
    int *l_88 = &g_80;
    int **l_87 = &l_88;
    int i, j, k;
    (*p_57) = (g_23 == l_81);
    g_82[2] = g_82[2];
    g_85 = (void*)0;
    (*l_87) = (void*)0;
    return (*p_57);
}







static int * func_59(unsigned char p_60, int p_61, int p_62, unsigned long long p_63)
{
    unsigned char *l_74 = (void*)0;
    unsigned char **l_73 = &l_74;
    int l_75 = 0x20E5E2E4L;
    char *l_76 = &g_77;
    int *l_78 = &l_75;
    (*l_78) = (safe_add_func_uint64_t_u_u((((safe_lshift_func_uint8_t_u_s(p_63, (g_40 & (p_60 >= (0xE702B68169B2B293LL < ((void*)0 != &p_61)))))) && (safe_rshift_func_int16_t_s_s(p_62, 0))) > (((*l_76) = (safe_add_func_uint32_t_u_u((&g_40 != ((*l_73) = &g_40)), l_75))) | p_61)), g_40));
    return g_22[3];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_23, "g_23", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_32, "g_32", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    transparent_crc(g_80, "g_80", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_101[i], "g_101[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_187, "g_187", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_189[i][j][k], "g_189[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_287, "g_287", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_345, "g_345", print_hash_value);
    transparent_crc(g_346, "g_346", print_hash_value);
    transparent_crc(g_361, "g_361", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_381[i], "g_381[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_382[i][j], "g_382[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_420, "g_420", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_425[i][j][k], "g_425[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_428[i][j][k], "g_428[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
