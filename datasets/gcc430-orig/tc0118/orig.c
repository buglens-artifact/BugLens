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



static long long g_4 = (-1L);
static volatile int g_33 = 0x4868FDADL;
static volatile int *g_32[5][5][1] = {{{&g_33},{&g_33},{(void*)0},{&g_33},{&g_33}},{{&g_33},{&g_33},{&g_33},{(void*)0},{&g_33}},{{&g_33},{&g_33},{(void*)0},{&g_33},{&g_33}},{{&g_33},{&g_33},{&g_33},{(void*)0},{&g_33}},{{&g_33},{&g_33},{(void*)0},{&g_33},{&g_33}}};
static int g_40 = 0xDABAC8EFL;
static int *g_39 = &g_40;
static unsigned long long g_49 = 18446744073709551615UL;
static unsigned char g_59 = 0UL;
static char g_62 = (-1L);
static short g_86 = 0x3254L;
static unsigned char g_87 = 0xA5L;
static char g_111 = 0x27L;
static int *g_120[1] = {&g_40};
static int ** volatile g_119 = &g_120[0];
static int ** volatile g_122 = (void*)0;
static char g_126 = 0xC3L;
static int ** volatile g_135[9][7][4] = {{{(void*)0,&g_120[0],&g_120[0],(void*)0},{&g_120[0],(void*)0,(void*)0,(void*)0},{&g_120[0],&g_120[0],&g_39,(void*)0},{&g_120[0],&g_120[0],&g_39,(void*)0},{&g_39,&g_120[0],&g_120[0],(void*)0},{(void*)0,&g_39,&g_120[0],(void*)0},{&g_120[0],(void*)0,(void*)0,&g_120[0]}},{{&g_120[0],&g_39,&g_39,&g_120[0]},{&g_120[0],&g_120[0],(void*)0,(void*)0},{&g_39,&g_120[0],&g_120[0],&g_39},{(void*)0,&g_120[0],&g_39,&g_120[0]},{(void*)0,&g_120[0],(void*)0,&g_39},{&g_39,(void*)0,&g_39,(void*)0},{&g_120[0],&g_120[0],&g_120[0],&g_39}},{{&g_120[0],&g_120[0],(void*)0,&g_120[0]},{&g_39,&g_120[0],(void*)0,&g_120[0]},{&g_120[0],&g_120[0],&g_120[0],(void*)0},{&g_120[0],(void*)0,&g_39,(void*)0},{&g_39,(void*)0,(void*)0,&g_39},{(void*)0,(void*)0,&g_39,&g_39},{(void*)0,&g_39,&g_120[0],&g_39}},{{&g_39,&g_120[0],(void*)0,&g_120[0]},{&g_120[0],&g_120[0],&g_39,&g_39},{&g_120[0],&g_120[0],(void*)0,(void*)0},{&g_120[0],&g_120[0],&g_120[0],&g_39},{(void*)0,&g_120[0],&g_120[0],&g_39},{(void*)0,(void*)0,&g_120[0],&g_120[0]},{(void*)0,(void*)0,&g_120[0],&g_39}},{{(void*)0,&g_120[0],&g_120[0],&g_39},{&g_120[0],&g_120[0],&g_120[0],(void*)0},{&g_120[0],&g_120[0],&g_120[0],&g_120[0]},{&g_120[0],&g_120[0],&g_120[0],(void*)0},{(void*)0,&g_39,&g_39,&g_120[0]},{&g_120[0],&g_39,(void*)0,&g_120[0]},{&g_120[0],&g_120[0],(void*)0,(void*)0}},{{&g_120[0],(void*)0,&g_39,(void*)0},{(void*)0,&g_120[0],&g_120[0],&g_120[0]},{&g_39,(void*)0,&g_120[0],&g_39},{&g_39,(void*)0,&g_39,(void*)0},{&g_39,&g_120[0],&g_120[0],&g_39},{&g_39,(void*)0,&g_120[0],&g_39},{(void*)0,&g_39,&g_39,&g_120[0]}},{{&g_120[0],&g_39,(void*)0,&g_120[0]},{&g_120[0],(void*)0,(void*)0,&g_39},{&g_120[0],(void*)0,&g_39,&g_39},{(void*)0,(void*)0,&g_120[0],&g_120[0]},{&g_120[0],&g_120[0],&g_120[0],&g_120[0]},{&g_120[0],&g_120[0],&g_120[0],&g_120[0]},{&g_120[0],&g_120[0],(void*)0,&g_39}},{{(void*)0,&g_39,(void*)0,&g_120[0]},{&g_39,(void*)0,(void*)0,&g_120[0]},{&g_39,&g_39,(void*)0,&g_39},{(void*)0,&g_120[0],&g_39,&g_120[0]},{&g_120[0],&g_120[0],&g_120[0],&g_120[0]},{&g_39,&g_39,(void*)0,&g_120[0]},{&g_120[0],&g_39,&g_120[0],&g_120[0]}},{{&g_120[0],&g_39,&g_120[0],&g_120[0]},{&g_120[0],&g_120[0],(void*)0,&g_39},{(void*)0,&g_120[0],&g_120[0],(void*)0},{(void*)0,&g_120[0],(void*)0,&g_39},{&g_120[0],(void*)0,&g_39,(void*)0},{(void*)0,&g_120[0],&g_120[0],(void*)0},{(void*)0,&g_120[0],&g_120[0],(void*)0}}};
static int ** volatile g_136 = &g_120[0];
static unsigned short g_161 = 0x0C63L;
static unsigned char *g_171 = (void*)0;
static unsigned char **g_170 = &g_171;
static unsigned char *** volatile g_169 = &g_170;
static int ** volatile g_175 = &g_120[0];
static char *g_177 = &g_126;
static char * volatile * volatile g_176[8][3][1] = {{{&g_177},{&g_177},{&g_177}},{{&g_177},{&g_177},{&g_177}},{{&g_177},{&g_177},{&g_177}},{{&g_177},{&g_177},{&g_177}},{{&g_177},{&g_177},{&g_177}},{{&g_177},{&g_177},{&g_177}},{{&g_177},{&g_177},{&g_177}},{{&g_177},{&g_177},{&g_177}}};
static int ** volatile g_190 = &g_120[0];
static long long g_196 = 0x4B6DA4907F26B115LL;
static long long *g_195 = &g_196;
static unsigned char g_243 = 0x74L;
static int *** volatile g_247 = (void*)0;
static int *** volatile g_248 = (void*)0;
static unsigned short g_321 = 0x4749L;
static int ** const volatile g_323 = (void*)0;
static int ** volatile g_324 = &g_120[0];
static volatile unsigned long long g_333 = 0x568D55643CAA1118LL;
static int ** volatile g_346 = &g_39;
static const char g_365 = 0x1DL;
static int g_366[4] = {0x8C200B22L,0x8C200B22L,0x8C200B22L,0x8C200B22L};
static unsigned char *** volatile g_390 = &g_170;
static int ** volatile g_437 = &g_39;
static volatile long long * volatile * volatile *g_460 = (void*)0;
static unsigned short *g_461[10] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static volatile unsigned g_480[10] = {0xEC1205B0L,0xEC1205B0L,0xEC1205B0L,0xEC1205B0L,0xEC1205B0L,0xEC1205B0L,0xEC1205B0L,0xEC1205B0L,0xEC1205B0L,0xEC1205B0L};
static unsigned short **g_513 = &g_461[9];
static unsigned short *** volatile g_512 = &g_513;
static unsigned char g_552 = 0xE3L;
static const unsigned char g_562 = 0x21L;
static short g_577 = 0x11CBL;
static int ** volatile g_579 = &g_120[0];
static int ** volatile g_581 = &g_120[0];
static short *g_586 = &g_86;
static short **g_585 = &g_586;
static short *** volatile g_584 = &g_585;
static const char * const g_623[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static const char * const *g_622 = &g_623[2];
static const char * const ** volatile g_621 = &g_622;
static unsigned g_631[1] = {0x30724D32L};
static int **g_697 = &g_120[0];
static int *** volatile g_696[2][2] = {{&g_697,&g_697},{&g_697,&g_697}};
static int *** volatile g_698[7] = {&g_697,(void*)0,(void*)0,&g_697,(void*)0,(void*)0,&g_697};
static int *** volatile g_699 = &g_697;
static const char * const ** volatile g_703 = (void*)0;
static unsigned g_705 = 0x3CCF641EL;
static short g_711 = 0L;
static int g_764 = 3L;
static unsigned char g_823 = 0x5EL;
static unsigned char g_824 = 1UL;
static volatile int ** volatile * volatile *g_853 = (void*)0;
static long long g_855 = 0L;
static int g_905 = 0L;
static int * volatile g_924 = &g_366[2];
static volatile short g_931[6][6][4] = {{{0xDF44L,0x99ECL,0xDF44L,0xA54DL},{0x25F9L,1L,0xE35BL,0x77EFL},{2L,5L,1L,1L},{0L,0L,1L,0xDF44L},{2L,0xB1C2L,0xE35BL,5L},{0x25F9L,0xE35BL,0xDF44L,0xE35BL}},{{0xDF44L,0xE35BL,0x25F9L,5L},{0xE35BL,0xB1C2L,2L,0xDF44L},{1L,0L,0L,1L},{1L,5L,2L,0x77EFL},{0xE35BL,1L,0x25F9L,0xA54DL},{0xDF44L,0x99ECL,0xDF44L,0xA54DL}},{{0x25F9L,1L,0xE35BL,0x77EFL},{2L,5L,1L,1L},{0L,0L,1L,0xDF44L},{2L,0xB1C2L,0xE35BL,5L},{0x25F9L,0xE35BL,0xDF44L,0xE35BL},{0xDF44L,0xE35BL,0x25F9L,5L}},{{0xE35BL,0xB1C2L,2L,0xDF44L},{1L,0L,0L,1L},{1L,5L,0xB1C2L,0xE35BL},{0L,0xDF44L,0x77EFL,1L},{0x25F9L,0xA54DL,0x25F9L,1L},{0x77EFL,0xDF44L,0L,0xE35BL}},{{0xB1C2L,2L,0xDF44L,0xDF44L},{5L,5L,0xDF44L,0x25F9L},{0xB1C2L,0x99ECL,0L,2L},{0x77EFL,0L,0x25F9L,0L},{0x25F9L,0L,0x77EFL,2L},{0L,0x99ECL,0xB1C2L,0x25F9L}},{{0xDF44L,5L,5L,0xDF44L},{0xDF44L,2L,0xB1C2L,0xE35BL},{0L,0xDF44L,0x77EFL,1L},{0x25F9L,0xA54DL,0x25F9L,1L},{0x77EFL,0xDF44L,0L,0xE35BL},{0xB1C2L,2L,0xDF44L,0xDF44L}}};
static int * volatile g_937 = &g_366[0];
static int ** volatile g_940 = &g_39;
static volatile int g_1015 = 7L;
static char **g_1023 = &g_177;
static char ***g_1022 = &g_1023;
static int ** volatile g_1045[2] = {&g_120[0],&g_120[0]};
static int ** volatile g_1052[7][7][5] = {{{&g_120[0],&g_120[0],(void*)0,&g_39,&g_39},{(void*)0,&g_120[0],&g_120[0],(void*)0,&g_120[0]},{&g_39,&g_39,&g_120[0],&g_120[0],&g_120[0]},{&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_120[0]},{(void*)0,(void*)0,&g_120[0],&g_39,&g_120[0]},{&g_120[0],(void*)0,&g_39,&g_39,(void*)0},{&g_120[0],&g_120[0],&g_120[0],&g_39,&g_39}},{{(void*)0,&g_120[0],&g_39,&g_120[0],(void*)0},{(void*)0,&g_39,&g_39,&g_39,&g_120[0]},{&g_39,&g_120[0],&g_120[0],(void*)0,&g_120[0]},{&g_39,&g_39,&g_39,&g_120[0],&g_120[0]},{&g_120[0],(void*)0,&g_120[0],&g_39,&g_39},{&g_120[0],&g_39,&g_120[0],&g_120[0],&g_120[0]},{&g_120[0],(void*)0,(void*)0,(void*)0,&g_39}},{{&g_120[0],&g_39,&g_120[0],&g_39,(void*)0},{&g_120[0],&g_120[0],&g_39,&g_39,&g_120[0]},{(void*)0,&g_39,&g_120[0],(void*)0,&g_39},{&g_39,&g_120[0],&g_39,&g_120[0],(void*)0},{&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_120[0]},{&g_120[0],(void*)0,(void*)0,(void*)0,&g_120[0]},{&g_39,(void*)0,&g_39,&g_39,(void*)0}},{{(void*)0,&g_120[0],&g_120[0],&g_120[0],&g_39},{&g_120[0],&g_120[0],&g_39,&g_120[0],&g_120[0]},{&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_39},{&g_120[0],&g_120[0],&g_39,&g_120[0],&g_120[0]},{&g_120[0],&g_120[0],(void*)0,&g_39,&g_120[0]},{&g_120[0],&g_39,&g_120[0],(void*)0,&g_39},{&g_120[0],&g_120[0],(void*)0,&g_39,&g_39}},{{&g_120[0],&g_120[0],(void*)0,&g_120[0],&g_120[0]},{&g_39,(void*)0,&g_39,&g_120[0],&g_39},{&g_120[0],&g_120[0],(void*)0,&g_39,&g_120[0]},{&g_39,&g_120[0],(void*)0,&g_39,&g_120[0]},{&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_120[0]},{&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_120[0]},{&g_120[0],&g_39,&g_120[0],&g_39,&g_39}},{{(void*)0,&g_39,(void*)0,(void*)0,&g_120[0]},{&g_39,&g_120[0],&g_39,&g_39,&g_120[0]},{&g_120[0],&g_39,&g_39,&g_39,&g_120[0]},{(void*)0,&g_120[0],&g_39,&g_120[0],&g_120[0]},{(void*)0,&g_120[0],(void*)0,(void*)0,&g_120[0]},{&g_120[0],&g_39,&g_120[0],&g_39,&g_39},{(void*)0,&g_120[0],&g_120[0],&g_39,&g_39}},{{&g_39,&g_39,&g_120[0],&g_120[0],&g_39},{&g_39,&g_120[0],(void*)0,&g_39,&g_39},{(void*)0,&g_120[0],(void*)0,&g_120[0],&g_39},{&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_39},{&g_120[0],(void*)0,(void*)0,&g_120[0],&g_120[0]},{&g_120[0],&g_39,&g_120[0],&g_120[0],&g_39},{&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_120[0]}}};
static int ** volatile g_1069 = &g_120[0];
static unsigned g_1074[6][6] = {{0x5412DE69L,1UL,0x5412DE69L,0x816316E8L,0x35EA3839L,0x35EA3839L},{0x0570CA10L,0x5412DE69L,0x5412DE69L,0x0570CA10L,1UL,0xC9C9A64DL},{0xC9C9A64DL,0x0570CA10L,0x35EA3839L,0x0570CA10L,0xC9C9A64DL,0x816316E8L},{0x0570CA10L,0xC9C9A64DL,0x816316E8L,0x816316E8L,0xC9C9A64DL,0x0570CA10L},{0x5412DE69L,0x0570CA10L,1UL,0xC9C9A64DL,1UL,0x0570CA10L},{1UL,0x5412DE69L,0x816316E8L,0x35EA3839L,0x35EA3839L,0x816316E8L}};
static const int g_1083[5][7][4] = {{{0L,0xF66A1047L,6L,0xB5A54313L},{(-1L),(-5L),0x19DD7341L,(-1L)},{6L,0x3BF4DEBEL,0x9EB03FD5L,0L},{0L,6L,(-1L),6L},{0x434E1B74L,6L,0xAF7C06F7L,0xCB6558BEL},{0L,(-4L),(-1L),0x9EB03FD5L},{0x9EB03FD5L,0xB0AD882EL,0xCB6558BEL,(-1L)}},{{0x9EB03FD5L,(-1L),(-1L),1L},{0L,(-1L),0xAF7C06F7L,0xD486C159L},{0x434E1B74L,(-4L),(-5L),0x1072A8FDL},{0x434E1B74L,0xD486C159L,1L,(-1L)},{0xB5A54313L,0L,0L,0xCB6558BEL},{(-5L),0L,0xB5A54313L,0xB5A54313L},{(-3L),(-3L),0x50D52CB3L,0x19DD7341L}},{{0L,0L,0L,0x434E1B74L},{2L,(-1L),(-1L),0L},{0x4E157C05L,(-1L),0x1072A8FDL,0x434E1B74L},{(-1L),0L,0xAF7C06F7L,0x19DD7341L},{0xB0AD882EL,(-3L),0x483F955CL,0xB5A54313L},{0L,0L,(-3L),0xCB6558BEL},{0xF69A1717L,0L,1L,(-1L)}},{{0x8FC80892L,0xD486C159L,(-1L),0x1072A8FDL},{0L,(-4L),0L,0xF66A1047L},{6L,0L,0x2E34A1D3L,0L},{0x1072A8FDL,0xF69A1717L,0x434E1B74L,0L},{0L,0x19DD7341L,0x434E1B74L,1L},{0x1072A8FDL,2L,0x2E34A1D3L,0xB0AD882EL},{6L,0xB5A54313L,0L,1L}},{{0L,1L,(-1L),1L},{0x8FC80892L,0x50D52CB3L,1L,0x75E2CD9EL},{0xF69A1717L,(-1L),(-3L),0x2E34A1D3L},{0L,0x483F955CL,0x483F955CL,0L},{0xB0AD882EL,0x434E1B74L,0xAF7C06F7L,(-4L)},{(-5L),(-1L),(-4L),0x50D52CB3L},{0x1072A8FDL,0x3BF4DEBEL,0x75E2CD9EL,0x50D52CB3L}}};
static int ***g_1090 = (void*)0;
static int ****g_1089 = &g_1090;
static volatile unsigned short g_1117 = 0x8718L;
static volatile unsigned short * volatile g_1116 = &g_1117;
static unsigned short ***g_1298 = &g_513;
static unsigned char g_1301[5] = {0xA2L,0xA2L,0xA2L,0xA2L,0xA2L};



static unsigned func_1(void);
static char func_5(int p_6, int p_7);
static int func_8(const unsigned p_9, int p_10, long long * p_11, unsigned short p_12);
static unsigned func_13(int p_14, long long * p_15, unsigned p_16, long long * const p_17);
static long long * func_18(unsigned p_19);
static int * func_21(unsigned p_22, long long p_23, unsigned p_24);
static const unsigned func_27(unsigned p_28, unsigned p_29, unsigned long long p_30);
static int * func_36(int * p_37, long long * p_38);
static long long * func_41(unsigned long long p_42);
static int * func_43(long long * p_44, unsigned long long p_45, unsigned p_46, long long * p_47);
static unsigned func_1(void)
{
    unsigned l_2 = 0x1DBA3399L;
    long long *l_3 = &g_4;
    int l_20 = 1L;
    unsigned short ***l_820[9] = {&g_513,&g_513,&g_513,&g_513,&g_513,&g_513,&g_513,&g_513,&g_513};
    unsigned short ****l_819[9] = {&l_820[2],&l_820[2],&l_820[2],&l_820[2],&l_820[2],&l_820[2],&l_820[2],&l_820[2],&l_820[2]};
    int l_821 = (-1L);
    unsigned char *l_822 = &g_823;
    unsigned l_932 = 18446744073709551609UL;
    int * const ***l_979 = (void*)0;
    long long *l_985 = (void*)0;
    int l_988 = 1L;
    unsigned long long l_996 = 0UL;
    int l_1007 = (-1L);
    int *l_1028 = &l_20;
    int l_1059 = 0x408B79E1L;
    const int *l_1085 = &g_1083[3][5][1];
    const int **l_1084 = &l_1085;
    const int l_1113 = 0xF5FE2B06L;
    int *l_1115 = &g_366[1];
    unsigned l_1118 = 0x342B02A5L;
    unsigned char l_1142[2][1];
    short l_1147 = 0L;
    short l_1176 = 0L;
    int *l_1236 = &g_366[2];
    long long *l_1287 = &g_855;
    unsigned short ** const *l_1297 = &g_513;
    unsigned *l_1300 = (void*)0;
    unsigned **l_1299 = &l_1300;
    int *l_1302 = &l_1059;
    int i, j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 1; j++)
            l_1142[i][j] = 0UL;
    }
    l_20 = ((((l_2 | ((*l_3) = l_2)) && func_5(func_8(func_13(g_4, func_18(l_20), (safe_add_func_uint64_t_u_u(l_2, (g_824 = ((safe_add_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(g_365, (((*l_822) = (7UL != (l_821 = ((void*)0 != l_819[1])))) , g_365))), l_2)) == g_365)))), l_3), g_562, &g_4, l_2), g_365)) > l_20) || l_821);

    ;


    ;
    ;



    if (l_2)
    {
        int l_915 = 0x649149FCL;
        unsigned short ****l_916[4];
        int l_917 = 1L;
        int *l_939 = &g_366[2];
        long long **l_986[2][1][8] = {{{&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3}},{{&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3,&l_3}}};
        unsigned long long *l_987 = (void*)0;
        long long *l_989 = &g_4;
        unsigned l_1000 = 0xCA5B3F2FL;
        char l_1011 = 1L;
        int *l_1066 = &l_988;
        char *l_1067 = &g_62;
        unsigned long long l_1068 = 0x1D8C0C8249BEEA79LL;
        int i, j, k;
        for (i = 0; i < 4; i++)
            l_916[i] = &l_820[2];
        if ((((*l_822) = (safe_unary_minus_func_uint64_t_u((((((((*g_177) = l_915) || (0x4F97L && ((*g_586) = (l_2 > (l_916[2] == l_916[2]))))) >= l_915) != (&g_585 == (void*)0)) == (l_917 = l_915)) ^ 0x925EL)))) , 0x3AAFF596L))
        {
            unsigned l_920 = 1UL;
            for (g_126 = 0; (g_126 <= 7); g_126 = safe_add_func_uint32_t_u_u(g_126, 3))
            {
                unsigned long long l_923 = 18446744073709551613UL;
                (*g_924) = (((l_920 , g_711) , 4L) >= ((safe_rshift_func_uint16_t_u_s(l_920, (((l_920 <= func_5(l_923, g_480[1])) > l_920) || l_923))) || l_917));
            }
        }
        else
        {
            const char l_933 = 1L;
            char * const *l_935 = &g_177;
            char * const **l_934 = &l_935;
            short *l_960 = &g_577;
            int * const ****l_980 = &l_979;
            for (g_905 = 2; (g_905 <= 9); g_905 += 1)
            {
                int l_930 = (-7L);
                int *l_938[3];
                unsigned long long l_943[9][5] = {{0xE249EDCAF75FC4D8LL,2UL,18446744073709551615UL,2UL,0xE249EDCAF75FC4D8LL},{0x0233926E10986199LL,5UL,0xF923AF69AE384FFDLL,0xE249EDCAF75FC4D8LL,0x4A690CC6BE5E60C4LL},{0x0233926E10986199LL,0x4A690CC6BE5E60C4LL,0xB7A9371D991CDEAALL,18446744073709551612UL,18446744073709551612UL},{0xE249EDCAF75FC4D8LL,0x8D533CAD6EA138D1LL,0xE249EDCAF75FC4D8LL,5UL,0x4A690CC6BE5E60C4LL},{0x3AFAC78EC4128596LL,18446744073709551612UL,0x4A690CC6BE5E60C4LL,5UL,0xE249EDCAF75FC4D8LL},{0x4A690CC6BE5E60C4LL,0xB7A9371D991CDEAALL,18446744073709551612UL,18446744073709551612UL,0xB7A9371D991CDEAALL},{0xB7A9371D991CDEAALL,18446744073709551607UL,0x4A690CC6BE5E60C4LL,0xE249EDCAF75FC4D8LL,0xF923AF69AE384FFDLL},{0x8D533CAD6EA138D1LL,18446744073709551607UL,0xE249EDCAF75FC4D8LL,2UL,18446744073709551615UL},{1UL,0xB7A9371D991CDEAALL,0xB7A9371D991CDEAALL,1UL,2UL}};
                int i, j;
                for (i = 0; i < 3; i++)
                    l_938[i] = &l_917;
                for (g_243 = 0; (g_243 <= 8); g_243 += 1)
                {
                    return g_62;
                }
                if ((safe_mod_func_uint8_t_u_u(((*l_822) = ((safe_unary_minus_func_uint16_t_u((func_27(l_917, (safe_add_func_int32_t_s_s(l_20, (((l_2 & ((((l_930 < l_930) && 18446744073709551615UL) != (0x0B7BAC41L && ((g_931[2][5][1] < ((l_932 = l_917) > 0x63C6E7D8L)) <= 0x9BBEL))) && l_933)) , l_934) != (void*)0))), g_711) | l_917))) ^ l_933)), 0x04L)))
                {
                    for (g_40 = 0; (g_40 <= 9); g_40 += 1)
                    {
                        int l_936[6][1];
                        int i, j;
                        for (i = 0; i < 6; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_936[i][j] = 1L;
                        }
                        l_936[4][0] = 1L;
                        (*g_937) = ((-1L) >= (-4L));
                    }
                }
                else
                {
                    short *l_956 = &g_711;
                    int l_957 = 0x5977776FL;
                    long long l_958 = (-4L);
                    unsigned short l_959 = 65535UL;
                    short l_961 = 0x10B5L;
                    int **l_962 = &l_938[1];
                    (*g_940) = l_939;

                    ;
                    (*l_962) = (func_27(((safe_rshift_func_uint8_t_u_s((0x4C2F9139L & l_943[5][0]), (safe_mul_func_uint8_t_u_u(((safe_sub_func_int64_t_s_s(g_243, (((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_s((safe_add_func_int16_t_s_s(((*l_956) = ((*g_586) = l_933)), (*l_939))), (func_27((l_957 = 0xFECF77C5L), l_958, (((((l_2 , ((0x9FL == l_959) , (void*)0)) != (void*)0) & (*l_939)) , l_960) != &g_931[2][2][0])) < l_933))) <= l_961), 65530UL)), 253UL)) | 0x4AL) , g_366[3]))) <= g_577), 0x6AL)))) & (*g_177)), g_40, l_961) , &l_821);


                }


            }
            (*l_939) = (((((safe_mul_func_uint8_t_u_u((((*l_980) = ((func_13((safe_lshift_func_int16_t_s_u(l_2, (safe_mul_func_int8_t_s_s((*g_177), (safe_lshift_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((&g_586 != &g_586), (safe_mul_func_int8_t_s_s(l_932, (safe_rshift_func_uint8_t_u_s(l_20, 5)))))), (*l_939))), 5)))))), &g_855, l_933, l_3) , 1UL) , l_979)) != &g_696[1][0]), (*l_939))) & (*l_939)) , 0x2C60L) , (void*)0) != &g_622);
        }
        if ((func_8((*l_939), (((safe_add_func_int16_t_s_s((((l_20 = ((((*l_822) = 246UL) < (safe_rshift_func_uint8_t_u_u(((void*)0 != &g_480[1]), (l_985 != (g_195 = func_41(g_86)))))) , 0x500D17DDD0415F82LL)) , func_13(l_20, &g_196, g_631[0], &g_855)) ^ (-1L)), 1L)) , l_988) , 0x87063017L), l_989, (*l_939)) >= g_552))
        {
            int *l_990 = (void*)0;
            int **l_991 = &g_120[0];
            (*l_991) = l_990;
        }
        else
        {
            long long *l_997 = (void*)0;
            int *l_999 = &l_917;
            unsigned short * const *l_1004 = &g_461[6];
            unsigned short * const **l_1003 = &l_1004;
            unsigned short * const ***l_1002 = &l_1003;
            char * const *l_1026 = &g_177;
            char * const **l_1025 = &l_1026;
            for (g_4 = 0; (g_4 >= (-27)); --g_4)
            {
                int *l_998 = (void*)0;
                int l_1001 = 0x7673BC92L;
                int *l_1009 = &g_366[2];
                l_999 = l_998;

                ;
            }

            ;
        }
        l_1028 = &l_915;

        ;
        if (g_577)
            goto lbl_1293;

        (*g_1069) = func_21((safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u((((*l_1067) = func_5(((*l_1066) = (safe_mod_func_int32_t_s_s(l_1059, ((safe_lshift_func_int16_t_s_s(((~(*l_939)) <= (*l_939)), 14)) && ((*l_939) < (func_27(g_365, (safe_lshift_func_uint8_t_u_s((g_196 && (l_917 = (safe_mod_func_int64_t_s_s(g_59, g_764)))), 7)), ((((5L || (*l_939)) , 4L) || (-1L)) , 18446744073709551615UL)) != 0UL)))))), g_366[0])) <= (*l_1028)), 0xC5L)) >= g_705), l_1068)), g_321, l_1068);
    }
    else
    {
        short l_1070 = 0x972EL;
        unsigned l_1086 = 1UL;
        unsigned l_1094 = 0x351D6C23L;
        long long l_1102 = 1L;
        int *l_1104 = &l_1059;
        l_1070 = ((void*)0 == &g_853);
        for (l_996 = 0; (l_996 >= 8); l_996++)
        {
            long long *l_1075 = &g_196;
            int l_1078 = 1L;
        }
        return g_1083[3][5][1];
    }


lbl_1293:
    if (((**l_1084) , (*l_1085)))
    {
        unsigned short l_1152 = 1UL;
        long long *l_1164 = (void*)0;
        int l_1180[7] = {0xC9FC5378L,0xC9FC5378L,0xC9FC5378L,0xC9FC5378L,0xC9FC5378L,0xC9FC5378L,0xC9FC5378L};
        short ***l_1230 = &g_585;
        unsigned char *l_1234 = &g_59;
        int i;
        for (g_49 = (-26); (g_49 >= 10); g_49++)
        {
            unsigned long long l_1155 = 0x44E77930C343F831LL;
            long long *l_1165 = (void*)0;
            short * const l_1171 = &l_1147;
            int l_1175[6];
            int i;
            for (i = 0; i < 6; i++)
                l_1175[i] = 0xC37C3C3BL;
            (*l_1115) = (l_1147 && func_8((+g_905), l_1152, &g_855, l_1152));
            for (g_824 = 0; (g_824 <= 0); g_824 += 1)
            {
                const unsigned long long l_1166 = 1UL;
                int *l_1174 = &g_764;
                const short l_1178 = 0x5DBDL;
                unsigned l_1182 = 1UL;
                int l_1189 = 0x030FBA8EL;
                unsigned l_1194 = 1UL;
                short l_1207 = 0x5F51L;
                unsigned long long *l_1221 = &l_996;
            }
        }
        if ((*g_937))
        {
            unsigned short l_1226 = 0x48BCL;
            unsigned char *l_1227 = &g_823;
            short ***l_1228 = &g_585;
            short ****l_1229[7][6][4] = {{{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,(void*)0,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,(void*)0,&l_1228}},{{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,(void*)0,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,(void*)0,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228}},{{&l_1228,(void*)0,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,(void*)0,&l_1228,&l_1228},{&l_1228,(void*)0,&l_1228,&l_1228}},{{(void*)0,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,(void*)0,&l_1228},{&l_1228,(void*)0,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,(void*)0,&l_1228,&l_1228}},{{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,(void*)0,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,(void*)0,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228}},{{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228}},{{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,(void*)0,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228},{(void*)0,&l_1228,&l_1228,&l_1228},{&l_1228,&l_1228,&l_1228,&l_1228}}};
            short l_1233 = 3L;
            int *l_1235 = (void*)0;
            int i, j, k;
            (*l_1084) = ((safe_sub_func_uint16_t_u_u((l_1180[1] > 0x2EL), 0xCDA9L)) , l_1235);

            ;
            l_1180[5] = ((*g_937) = l_1180[2]);
            (*l_1084) = ((*g_437) = &l_1180[1]);

            ;
            ;
        }
        else
        {
            int *l_1237[7][3] = {{&l_1180[0],&l_1180[0],&l_1180[5]},{&l_1180[0],&l_1180[0],&l_1180[5]},{&l_1180[0],&l_1180[0],&l_1180[5]},{&l_1180[0],&l_1180[0],&l_1180[5]},{&l_1180[0],&l_1180[0],&l_1180[5]},{&l_1180[0],&l_1180[0],&l_1180[5]},{&l_1180[0],&l_1059,&l_1180[0]}};
            int i, j;
            (*l_1084) = l_1237[5][0];

            ;
        }

        ;
        ;
    }
    else
    {
        long long l_1240 = (-10L);
        int l_1241 = 0x9B818297L;
        short ***l_1259 = &g_585;
        int l_1277 = 4L;
        unsigned long long *l_1285 = &g_49;
        unsigned short ***l_1289 = &g_513;
        for (g_126 = 3; (g_126 >= 0); g_126 -= 1)
        {
            char l_1250 = 0x2CL;
            unsigned l_1274 = 0UL;
            unsigned l_1281 = 0xDCF04E55L;
            long long * const l_1286 = (void*)0;
            unsigned l_1288[4];
            int i;
            for (i = 0; i < 4; i++)
                l_1288[i] = 0x22D7197DL;
        }
        (*l_1084) = (void*)0;

        ;
    }



    (*l_1302) = ((&l_1236 != (void*)0) | ((((+(safe_add_func_uint8_t_u_u(((*l_1236) = (safe_unary_minus_func_uint32_t_u((l_1297 == (g_1298 = &g_513))))), 255UL))) <= l_1147) < func_13(((((((*l_1299) = &g_631[0]) == (void*)0) , (*g_177)) , g_1301[4]) < 0x9DL), l_1287, g_631[0], l_3)) , g_126));

    ;
    return g_86;
}







static char func_5(int p_6, int p_7)
{
    int *l_884 = (void*)0;
    int *l_885 = &g_40;
    char *l_890[9];
    unsigned short ***l_898 = &g_513;
    unsigned short ****l_897 = &l_898;
    unsigned char ***l_912 = &g_170;
    int l_913 = (-1L);
    int i;
    for (i = 0; i < 9; i++)
        l_890[i] = &g_126;
    (*l_885) = (-2L);
    for (g_196 = 0; (g_196 > 18); g_196++)
    {
        int *l_888[1];
        int **l_889 = &g_39;
        char **l_891 = &g_177;
        int i;
        for (i = 0; i < 1; i++)
            l_888[i] = &g_366[2];
        (*l_889) = l_888[0];

        ;
        (**l_889) = (((*l_891) = l_890[2]) != (void*)0);

        ;
        (*l_885) = 0x378FB79DL;
        for (g_243 = 19; (g_243 < 20); ++g_243)
        {
            int l_896 = (-2L);
            (*g_39) = (safe_mul_func_uint8_t_u_u(l_896, ((l_896 != (p_7 , p_7)) == (((l_897 == (void*)0) ^ ((6L || p_7) | g_705)) < p_7))));
        }
    }
    (*l_885) = ((((safe_lshift_func_uint16_t_u_s(p_7, 7)) , ((safe_rshift_func_int16_t_s_s(0x8D8CL, 7)) > (safe_lshift_func_int8_t_s_s(g_905, (*l_885))))) , ((safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_s(5UL, 7)), ((*l_885) && ((p_7 ^ (safe_add_func_uint16_t_u_u(p_6, (l_912 == l_912)))) | 0xA102B3FBE4B47CE2LL)))) , (void*)0)) == (*g_621));
    l_884 = l_885;

    ;
    return l_913;
}







static int func_8(const unsigned p_9, int p_10, long long * p_11, unsigned short p_12)
{
    short l_829 = (-4L);
    int *l_830[8][9] = {{&g_40,(void*)0,&g_40,&g_40,&g_40,&g_366[2],&g_40,&g_366[2],&g_40},{&g_40,&g_366[0],&g_366[2],&g_40,&g_366[3],&g_40,&g_366[3],&g_40,&g_366[2]},{&g_40,&g_40,(void*)0,&g_40,&g_366[2],&g_40,&g_366[2],&g_366[0],&g_40},{&g_366[2],&g_366[1],&g_40,&g_40,&g_366[2],&g_366[2],&g_40,&g_40,&g_366[1]},{(void*)0,&g_366[2],(void*)0,&g_366[1],&g_366[2],&g_40,&g_40,&g_366[2],&g_40},{&g_40,&g_366[2],&g_366[2],&g_366[1],&g_366[0],&g_366[1],&g_366[2],&g_366[2],&g_40},{&g_366[2],&g_366[2],&g_40,&g_366[2],&g_40,&g_40,&g_40,(void*)0,&g_366[2]},{&g_366[3],&g_366[1],(void*)0,&g_40,&g_40,(void*)0,&g_366[1],&g_366[3],(void*)0}};
    unsigned l_831 = 0x5C314BC3L;
    unsigned l_832[1];
    char l_841 = 0x0FL;
    int l_875 = 0L;
    unsigned short l_877 = 0xDEC8L;
    unsigned char **l_879 = &g_171;
    int i, j;
    for (i = 0; i < 1; i++)
        l_832[i] = 0x12F5D49FL;
    l_832[0] = (l_831 = l_829);
    for (g_86 = 0; (g_86 >= (-30)); g_86 = safe_sub_func_int64_t_s_s(g_86, 1))
    {
        int *l_836 = &g_366[2];
        short l_850[10][7][3] = {{{(-7L),0x612CL,0L},{(-1L),(-1L),2L},{0x478AL,0x478AL,0x6990L},{(-1L),3L,(-1L)},{(-7L),0x6990L,0L},{3L,0x303DL,0x303DL},{9L,(-7L),0L}},{{(-4L),2L,7L},{0x6990L,0xA630L,(-7L)},{0x303DL,(-1L),0x303DL},{(-7L),0xA630L,0x6990L},{7L,2L,3L},{0L,0x612CL,0x478AL},{1L,1L,(-1L)}},{{0L,(-7L),0x612CL},{7L,(-1L),0L},{(-7L),(-5L),(-5L)},{0x303DL,7L,0L},{0x6990L,9L,0x612CL},{3L,1L,(-1L)},{0x478AL,0L,0x478AL}},{{(-1L),1L,3L},{0x612CL,9L,0x6990L},{0L,7L,0x303DL},{(-5L),(-5L),(-7L)},{0L,(-1L),7L},{0x612CL,(-7L),0L},{(-1L),1L,1L}},{{0x478AL,0x612CL,0L},{3L,2L,7L},{0x6990L,0xA630L,(-7L)},{0x303DL,(-1L),0x303DL},{(-7L),0xA630L,0x6990L},{7L,2L,3L},{0L,0x612CL,0x478AL}},{{1L,1L,(-1L)},{0L,(-7L),0x612CL},{7L,(-1L),0L},{(-7L),(-5L),(-5L)},{0L,1L,(-4L)},{9L,0L,(-5L)},{2L,3L,0x303DL}},{{0L,0xDD95L,0L},{0x303DL,3L,2L},{(-5L),0L,9L},{(-4L),1L,0L},{0xA630L,0xA630L,0x478AL},{(-4L),0x303DL,1L},{(-5L),0x478AL,0L}},{{0x303DL,1L,1L},{0L,(-5L),0L},{2L,(-1L),1L},{9L,0x6990L,0x478AL},{0L,0x0FB4L,0L},{0x478AL,0x6990L,9L},{1L,(-1L),2L}},{{0L,(-5L),0L},{1L,1L,0x303DL},{0L,0x478AL,(-5L)},{1L,0x303DL,(-4L)},{0x478AL,0xA630L,0xA630L},{0L,1L,(-4L)},{9L,0L,(-5L)}},{{2L,3L,0x303DL},{0L,0xDD95L,0L},{0x303DL,3L,2L},{(-5L),0L,9L},{(-4L),1L,0L},{0xA630L,0xA630L,0x478AL},{(-4L),0x303DL,1L}}};
        const unsigned short l_851 = 0xB1D5L;
        int ****l_852 = (void*)0;
        unsigned long long l_870 = 0xFB77E1145BC8E649LL;
        long long *l_876[8] = {&g_196,&g_196,&g_196,&g_196,&g_196,&g_196,&g_196,&g_196};
        int l_878 = (-5L);
        unsigned char *l_880 = (void*)0;
        unsigned char *l_881 = &g_243;
        int i, j, k;
        for (g_126 = 0; (g_126 >= 0); g_126 -= 1)
        {
            int *l_835 = &g_40;
            for (l_829 = 0; (l_829 <= 0); l_829 += 1)
            {
                int i, j;
                l_830[(g_126 + 4)][(g_126 + 8)] = l_835;
                if (g_631[l_829])
                    break;
                l_830[3][7] = l_836;
                l_830[6][3] = (*g_437);
            }
        }
        for (g_87 = 0; (g_87 != 15); g_87 = safe_add_func_int8_t_s_s(g_87, 1))
        {
            const int *l_839[4][3] = {{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0}};
            const int **l_840 = &l_839[3][1];
            short *l_854[10] = {&l_850[2][2][2],&l_829,&l_850[2][2][2],&l_850[2][2][2],&l_829,&l_850[2][2][2],&l_850[2][2][2],&l_829,&l_850[2][2][2],&l_850[2][2][2]};
            unsigned l_856 = 0x7AC2129DL;
            int i, j;
            (*l_840) = l_839[3][1];
            l_856 = ((g_855 = (l_841 > ((-5L) != ((safe_sub_func_int16_t_s_s((!p_9), (p_12 = (!(((safe_mod_func_int8_t_s_s(((*g_177) = (l_836 == &g_631[0])), ((safe_lshift_func_uint16_t_u_u((p_9 , (safe_sub_func_uint64_t_u_u(((func_27(g_321, (*l_836), l_850[2][2][2]) , (*l_836)) != 0x1FE5L), g_196))), l_851)) , 0x79L))) , l_852) == g_853))))) >= 9UL)))) & (*g_586));
        }
        l_830[3][7] = func_21(p_10, (*p_11), (((safe_lshift_func_uint8_t_u_s(((*l_881) = (((2UL < (((safe_add_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(p_12, 1)), ((safe_sub_func_int64_t_s_s((((safe_unary_minus_func_int16_t_s((safe_add_func_int32_t_s_s(8L, (l_878 = ((l_870 , ((((*l_836) = (safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_s((func_27(g_480[1], p_9, l_875) != 1UL), 2)) || p_9), p_9))) == p_10) | l_877)) || g_711)))))) , (*l_836)) > p_9), (*p_11))) || 0xF2L))), p_9)) , l_879) != &g_171)) , g_243) <= (*p_11))), 7)) , p_9) == 0x59L));
        for (g_764 = 16; (g_764 != 2); g_764--)
        {
            l_830[3][1] = l_830[1][8];
            return (*l_836);
        }
    }
    for (g_196 = 0; g_196 < 10; g_196 += 1)
    {
        g_461[g_196] = &g_321;
    }
    return g_4;
}







static unsigned func_13(int p_14, long long * p_15, unsigned p_16, long long * const p_17)
{
    short l_828 = 0xC6E5L;
    for (g_86 = (-6); (g_86 >= 9); g_86 = safe_add_func_uint16_t_u_u(g_86, 6))
    {
        unsigned l_827 = 0x72D270AAL;
        if (l_827)
            break;
        if (p_14)
            continue;
    }
    return l_828;
}







static long long * func_18(unsigned p_19)
{
    unsigned l_31 = 0UL;
    unsigned long long *l_48 = &g_49;
    int **l_255 = &g_120[0];
    int **l_256[5][5] = {{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{&g_39,&g_120[0],&g_39,&g_120[0],&g_39},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,&g_120[0],(void*)0,&g_120[0],(void*)0},{(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}};
    int *l_257[3][6][7] = {{{(void*)0,&g_40,&g_40,&g_40,&g_40,&g_40,(void*)0},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,(void*)0,&g_40,&g_40},{&g_40,&g_40,(void*)0,&g_40,&g_40,(void*)0,&g_40}},{{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{(void*)0,&g_40,(void*)0,(void*)0,&g_40,(void*)0,(void*)0},{&g_40,&g_40,(void*)0,&g_40,&g_40,&g_40,&g_40},{&g_40,(void*)0,(void*)0,&g_40,(void*)0,(void*)0,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40}},{{&g_40,&g_40,(void*)0,&g_40,(void*)0,&g_40,&g_40},{(void*)0,&g_40,(void*)0,(void*)0,&g_40,(void*)0,(void*)0},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40},{&g_40,(void*)0,(void*)0,&g_40,(void*)0,(void*)0,&g_40},{(void*)0,&g_40,(void*)0,&g_40,&g_40,&g_40,(void*)0},{&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40}}};
    int *l_258 = &g_40;
    long long **l_326 = &g_195;
    unsigned long long l_701 = 18446744073709551615UL;
    int l_712[7];
    int l_715[9][8] = {{0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L},{0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L},{0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L},{0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L},{0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L},{0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L},{0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L},{0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L},{0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L,0xBAAE0F81L,6L}};
    char *l_724[2][3] = {{&g_62,&g_62,&g_62},{&g_62,&g_62,&g_62}};
    unsigned short **l_774 = &g_461[6];
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_712[i] = 1L;
    (*l_255) = func_21(p_19, ((((((safe_rshift_func_uint8_t_u_u(((0xB2F14481L | func_27(((l_31 ^ (g_32[2][2][0] != (void*)0)) >= l_31), (((safe_mod_func_uint16_t_u_u((((((*g_346) = func_36(g_39, ((*l_326) = func_41(((((l_258 = (l_257[1][0][2] = func_43(&g_4, ((*l_48) = (0xE1552B9CBADBEFC7LL >= g_4)), p_19, l_48))) != (void*)0) , p_19) , g_87))))) != g_32[2][2][0]) != p_19) || 0x6DD5L), p_19)) != g_631[0]) != g_631[0]), l_701)) ^ 0x9F4FB16BL), p_19)) ^ 0x419A60A01B95AB15LL) ^ p_19) && 0x3BFFL) != g_705) != 5L), g_562);

    ;


    ;
    ;



    l_715[1][7] = (l_712[0] >= (safe_rshift_func_int8_t_s_s(0x80L, p_19)));
    for (g_62 = 5; (g_62 < (-19)); g_62 = safe_sub_func_uint8_t_u_u(g_62, 4))
    {
        long long l_718 = 0x05DBC2CACE181971LL;
        int l_719 = 0x7EBD2494L;
        unsigned char *l_733 = &g_87;
        long long **l_741 = &g_195;
        unsigned l_767[10];
        short *l_804 = &g_711;
        int i;
        for (i = 0; i < 10; i++)
            l_767[i] = 0x2545B62BL;
        if (l_718)
            break;
        if ((l_719 = 0x08AF426EL))
        {
            (*l_255) = (void*)0;
        }
        else
        {
            unsigned short l_731 = 1UL;
            unsigned long long l_734 = 7UL;
            int l_765 = 0x18146642L;
            unsigned short **l_775 = &g_461[6];
            unsigned char l_807 = 246UL;
            for (g_161 = 0; (g_161 >= 39); ++g_161)
            {
                char **l_725 = &g_177;
                int l_726 = (-1L);
                unsigned char **l_732[6][1][1] = {{{&g_171}},{{&g_171}},{{&g_171}},{{&g_171}},{{&g_171}},{{&g_171}}};
                int l_766 = 0xE8319280L;
                unsigned *l_803[10];
                unsigned *l_805 = (void*)0;
                unsigned *l_806[2];
                int i, j, k;
                for (i = 0; i < 10; i++)
                    l_803[i] = &g_705;
                for (i = 0; i < 2; i++)
                    l_806[i] = &g_631[0];
                l_726 = (0xDAF7L >= func_27((p_19 & (safe_lshift_func_uint16_t_u_u((+(~((p_19 , 4294967289UL) == (((*l_725) = l_724[0][0]) != (void*)0)))), (l_718 , (((*g_586) != (*g_586)) & p_19))))), p_19, p_19));

                ;
                if (((safe_lshift_func_int16_t_s_u(func_27(p_19, (safe_lshift_func_uint16_t_u_u((4294967286UL || (((l_731 || p_19) ^ (l_734 = (p_19 ^ func_27(p_19, (((*g_586) = 1L) , ((l_724[0][1] != (l_733 = l_724[0][0])) == p_19)), p_19)))) > l_731)), 7)), g_4), p_19)) ^ 0UL))
                {
                    (*l_255) = &l_726;


                    if (p_19)
                        continue;

                }
                else
                {
                    long long ***l_742 = &l_326;
                    unsigned short *l_747 = &g_321;
                    int ***l_759 = &l_255;
                    int ****l_758 = &l_759;
                    int ****l_760 = (void*)0;
                    int ***l_762 = &l_256[1][4];
                    int ****l_761 = &l_762;
                    unsigned long long *l_763 = (void*)0;
                    unsigned l_789[1][3];
                    unsigned l_790 = 0xA1B04F0EL;
                    int l_792 = 0L;
                    int i, j;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 3; j++)
                            l_789[i][j] = 0xF8EE795BL;
                    }
                    if ((l_719 = (safe_rshift_func_uint8_t_u_s(p_19, (((safe_sub_func_int32_t_s_s((!((((safe_rshift_func_uint16_t_u_u((l_741 != (l_726 , ((*l_742) = l_326))), 8)) ^ (((l_767[6] = (safe_rshift_func_int8_t_s_u(((((*l_747) = (safe_sub_func_int32_t_s_s(l_719, p_19))) , (safe_mod_func_int64_t_s_s(((safe_lshift_func_uint8_t_u_u(func_27((((4294967295UL <= p_19) , (safe_mod_func_uint64_t_u_u(((safe_mul_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(((l_765 = (g_764 = (g_49 = (((*l_761) = ((*l_758) = &l_256[3][2])) == &g_323)))) | p_19), 0xF2A4BCB8DF374961LL)), l_766)) == p_19), p_19))) != l_734), g_552, g_333), 4)) || (*g_586)), p_19))) , l_719), 0))) | l_726) >= p_19)) <= 0x41DCD71EL) , p_19)), p_19)) & p_19) < g_87)))))
                    {
                        (*l_255) = &l_765;
                    }
                    else
                    {
                        unsigned short ***l_776 = &l_775;
                        unsigned short *l_777 = (void*)0;
                        unsigned short *l_778 = (void*)0;
                        unsigned short *l_779[2];
                        int l_780 = 3L;
                        int *l_791[9] = {(void*)0,&l_715[2][1],&l_715[2][1],(void*)0,&l_715[2][1],&l_715[2][1],(void*)0,&l_715[2][1],&l_715[2][1]};
                        int i;
                        for (i = 0; i < 2; i++)
                            l_779[i] = &l_731;
                        l_790 = (safe_mul_func_int8_t_s_s((((*g_586) = ((((func_27(p_19, ((safe_rshift_func_uint8_t_u_s(func_27((safe_sub_func_int16_t_s_s(p_19, (l_780 = ((*l_747) = (l_774 == ((*l_776) = l_775)))))), (((safe_lshift_func_int8_t_s_s((safe_add_func_uint8_t_u_u(((l_719 = (((safe_sub_func_int16_t_s_s((l_767[0] > l_767[6]), 0xCAEEL)) | (-1L)) , (safe_rshift_func_uint8_t_u_u((l_718 ^ p_19), p_19)))) >= l_789[0][0]), 3L)), (*g_177))) && p_19) , g_366[2]), p_19), 2)) , l_731), g_711) < l_767[2]) <= p_19) > p_19) <= (-9L))) > p_19), 0UL));
                        l_792 = ((l_765 = p_19) , 0x444F0154L);
                        if (p_19)
                            break;
                    }

                    ;
                }


                l_807 = (func_27(l_767[9], (safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s(((*l_804) = ((((l_765 = (((void*)0 == &g_333) ^ (g_631[0] = (safe_add_func_int16_t_s_s(p_19, (safe_mul_func_int16_t_s_s(func_27(p_19, g_62, (safe_add_func_int32_t_s_s(func_27((g_705 = (l_726 = g_49)), (func_27(g_49, ((g_631[0] = (l_804 == (void*)0)) > 0x28947C13L), g_480[7]) , 4294967292UL), g_62), 1L))), (*g_586)))))))) & p_19) , 0x9A10L) | 65535UL)), l_734)), (*g_586))), g_4) <= 0L);
            }


            ;
        }

        ;
        (*l_255) = &l_719;


        l_719 = ((safe_mul_func_int8_t_s_s((safe_mod_func_uint64_t_u_u((safe_unary_minus_func_int64_t_s(((*g_586) & p_19))), p_19)), (&g_711 != (void*)0))) > 0x50D87000B54F64BDLL);
    }

    ;
    return (*l_326);


}







static int * func_21(unsigned p_22, long long p_23, unsigned p_24)
{
    const unsigned short ***l_706 = (void*)0;
    const unsigned short ****l_707 = &l_706;
    unsigned short ***l_708[6][10];
    unsigned short ****l_709 = &l_708[2][7];
    int *l_710[9] = {&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40,&g_40};
    int i, j;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 10; j++)
            l_708[i][j] = &g_513;
    }
    g_711 = (((*l_707) = l_706) == ((*l_709) = l_708[2][7]));
    return (*g_437);


}







static const unsigned func_27(unsigned p_28, unsigned p_29, unsigned long long p_30)
{
    const char * const **l_702 = (void*)0;
    const char * const **l_704[5] = {&g_622,&g_622,&g_622,&g_622,&g_622};
    int i;
    (*g_621) = (*g_621);
    return g_631[0];
}







static int * func_36(int * p_37, long long * p_38)
{
    const unsigned long long l_327 = 18446744073709551615UL;
    int l_335[7][1][6] = {{{(-1L),0xAD4274B0L,0L,(-1L),7L,1L}},{{(-1L),7L,1L,0xAD4274B0L,0xAD4274B0L,1L}},{{0x789F8EDFL,0x789F8EDFL,0L,(-3L),0xAD4274B0L,0xE29E2CB7L}},{{0xAD4274B0L,7L,(-1L),(-3L),7L,0L}},{{0x789F8EDFL,0xAD4274B0L,(-1L),0xAD4274B0L,0x789F8EDFL,0xE29E2CB7L}},{{(-1L),0xAD4274B0L,0L,(-1L),7L,1L}},{{(-1L),7L,1L,0xAD4274B0L,0xAD4274B0L,1L}}};
    short l_415 = 0L;
    unsigned long long l_440 = 18446744073709551615UL;
    unsigned short *l_449 = (void*)0;
    unsigned short **l_448 = &l_449;
    int *l_482 = &l_335[3][0][5];
    int *l_483 = (void*)0;
    int l_490 = 0x115A926DL;
    long long *l_554 = (void*)0;
    long long *l_569 = (void*)0;
    int *l_590 = &l_490;
    unsigned l_594 = 0xEB929547L;
    int *l_595 = &l_335[3][0][4];
    const long long *l_597[9][2][3] = {{{&g_196,&g_4,&g_196},{&g_4,&g_4,&g_4}},{{&g_196,&g_196,&g_4},{&g_4,&g_4,&g_4}},{{&g_4,&g_196,&g_196},{&g_4,&g_4,&g_196}},{{&g_4,&g_4,&g_4},{&g_4,&g_4,&g_4}},{{&g_196,&g_4,&g_196},{&g_4,&g_4,&g_4}},{{&g_196,&g_196,&g_196},{&g_4,&g_4,&g_4}},{{&g_4,&g_196,&g_4},{&g_4,&g_4,&g_196}},{{&g_196,&g_4,&g_196},{&g_4,&g_4,&g_4}},{{&g_196,&g_196,&g_4},{&g_4,&g_4,&g_4}}};
    const long long **l_596[8] = {&l_597[1][1][2],&l_597[1][1][2],&l_597[1][1][2],&l_597[1][1][2],&l_597[1][1][2],&l_597[1][1][2],&l_597[1][1][2],&l_597[1][1][2]};
    const long long ***l_598 = &l_596[0];
    unsigned char l_601 = 0x15L;
    unsigned long long l_602 = 18446744073709551615UL;
    unsigned long long *l_604[1];
    char l_605[3][10][5] = {{{0L,1L,0xD8L,(-1L),(-3L)},{(-1L),0x1CL,(-2L),0x7AL,0x4BL},{0x21L,1L,1L,0xD2L,0L},{(-1L),0x21L,0xF4L,0xF4L,0x21L},{0x1FL,0L,0L,0L,1L},{0xC6L,7L,0xD2L,0x99L,0xD2L},{0x22L,0x0BL,0x1CL,0x6FL,0L},{0xC6L,0L,1L,(-1L),0xC7L},{0x1FL,(-1L),(-1L),0xC7L,0x1CL},{(-1L),0x32L,2L,(-1L),0xF4L}},{{0x21L,0xD8L,(-3L),0x4BL,0L},{(-1L),0x50L,0L,0x32L,0x0BL},{0L,(-4L),8L,0x32L,1L},{(-1L),0xD2L,1L,0x4BL,8L},{1L,0xC7L,0x1FL,(-1L),0x35L},{0x99L,1L,0L,0xC7L,0L},{0x32L,0x32L,0xACL,(-1L),0x60L},{0xD2L,0L,2L,0L,(-1L)},{0xF4L,0x4AL,0x0BL,0L,0x99L},{0xE7L,1L,0x1CL,0xC6L,(-4L)}},{{0x4BL,2L,(-1L),0x73L,0x4AL},{(-1L),8L,(-2L),0x9AL,0x0BL},{(-2L),0x60L,0x50L,0x32L,0x9FL},{0xD6L,0x7AL,0x6FL,0x21L,0xC7L},{1L,0xD8L,(-8L),(-2L),0xC7L},{0x50L,0xC7L,(-1L),0xACL,0x9FL},{0xC6L,0xACL,0L,1L,0x0BL},{0x0BL,0L,1L,0x4AL,0x4AL},{0L,0x4BL,0L,0L,(-4L)},{0x6FL,0xC6L,7L,0xD2L,0x99L}}};
    int *l_607 = &l_335[6][0][5];
    int *l_608 = &g_366[2];
    int *l_700 = &l_490;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_604[i] = (void*)0;
    if ((((l_327 > l_327) == (safe_lshift_func_int8_t_s_u(((l_327 | g_49) <= 255UL), 1))) == ((0xD3L != l_327) , l_327)))
    {
        unsigned short l_330 = 0xC0C6L;
        int l_336 = 0xE002D6E0L;
        char *l_337[8] = {&g_62,&g_126,&g_62,&g_62,&g_126,&g_62,&g_62,&g_126};
        unsigned l_371 = 4294967295UL;
        int *l_387[3];
        unsigned l_405[10][9][2] = {{{0xD83EEDDBL,0UL},{0x14F4EB47L,0x14C85030L},{4294967292UL,6UL},{0xA9DDC4F7L,0x4D03BD8BL},{0xAA2F9C37L,4294967291UL},{0x5479D56BL,4294967295UL},{1UL,4294967291UL},{6UL,4294967295UL},{0xD088C571L,0x3EBDB8DEL}},{{0x1EE99DB3L,0xC62BDA8AL},{4294967290UL,4294967295UL},{0xB45704F4L,0xFC9181AFL},{2UL,1UL},{0xEBB4FB39L,0xF233E413L},{0x334E1DD4L,0x1966ADCCL},{4294967295UL,4294967295UL},{0x6C84A840L,0UL},{4294967290UL,0x45F09B39L}},{{0xA9DDC4F7L,0xB2C81C13L},{0x2810D348L,0xB2C81C13L},{0xA9DDC4F7L,0x45F09B39L},{4294967290UL,0UL},{0x6C84A840L,4294967295UL},{4294967295UL,0x1966ADCCL},{0x334E1DD4L,0xF233E413L},{0xEBB4FB39L,1UL},{2UL,0xD83EEDDBL}},{{4UL,0x24D6171FL},{0xF78665C7L,0UL},{0xDFEFB0E1L,1UL},{4294967295UL,4294967290UL},{4294967295UL,4294967295UL},{0xF233E413L,0xD5020AAAL},{5UL,0x4FAE32E8L},{4294967289UL,0x1EE99DB3L},{0x0D65EF18L,4294967295UL}},{{4294967287UL,0x2810D348L},{0x264A9727L,0xEBB4FB39L},{4294967291UL,0x56EBC41AL},{0xD088C571L,0x334E1DD4L},{4294967294UL,6UL},{1UL,4294967287UL},{4294967289UL,0x71BC52FFL},{0x5F232603L,0UL},{0xEACB07AEL,1UL}},{{0x2BED963FL,4294967291UL},{0xD83EEDDBL,4294967291UL},{0x315237DCL,0UL},{4294967291UL,0x5479D56BL},{0x8A2C5BB6L,0xA9DDC4F7L},{1UL,0xC62BDA8AL},{4294967295UL,0x84F4C1FBL},{2UL,0xFFE8702FL},{0xABF22F9AL,0x3EBDB8DEL}},{{0x71BC52FFL,4UL},{0xB2C81C13L,4294967289UL},{4294967292UL,4294967295UL},{3UL,0x7C996EF4L},{3UL,3UL},{4294967294UL,0xABF22F9AL},{0x38AC595CL,0xFFE8702FL},{0x3A61B880L,0x8A2C5BB6L},{1UL,0x3A61B880L}},{{0xA9DDC4F7L,0xEC926091L},{0xA9DDC4F7L,0x3A61B880L},{1UL,0x8A2C5BB6L},{0x3A61B880L,0xFFE8702FL},{0x38AC595CL,4294967287UL},{2UL,1UL},{1UL,0x5F232603L},{0x05F86E6DL,4294967295UL},{0x264A9727L,0x1966ADCCL}},{{1UL,4294967294UL},{0xEACB07AEL,0xD83EEDDBL},{4294967287UL,0x84F4C1FBL},{0xD088C571L,0UL},{0x71BC52FFL,0x77A76648L},{4294967291UL,4294967287UL},{0x24D6171FL,0x2BED963FL},{0xC62BDA8AL,4294967289UL},{0xEC926091L,4294967295UL}},{{4294967291UL,0xC62BDA8AL},{0xB45704F4L,0xDFEFB0E1L},{0x334E1DD4L,0xB2C81C13L},{0x0E33ADBBL,0xEACB07AEL},{5UL,4294967295UL},{4294967295UL,0xA9DDC4F7L},{0x7C996EF4L,0UL},{6UL,3UL},{4294967295UL,0xAA2F9C37L}}};
        long long *l_427 = (void*)0;
        const unsigned l_499 = 0x3B943227L;
        unsigned l_506 = 0x789FEDBDL;
        unsigned char l_518 = 0x61L;
        unsigned short **l_549[2][1][8] = {{{&g_461[6],(void*)0,(void*)0,(void*)0,&g_461[6],&l_449,&l_449,&g_461[6]}},{{(void*)0,&l_449,&l_449,(void*)0,&g_461[6],&g_461[6],&g_461[6],(void*)0}}};
        long long **l_553[4] = {&l_427,&l_427,&l_427,&l_427};
        unsigned char l_556 = 0x93L;
        unsigned long long *l_557 = &g_49;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_387[i] = &g_40;
        if ((*p_37))
        {
            unsigned long long l_332 = 0x155E84021A93FC22LL;
            short *l_334 = (void*)0;
            int l_345[1][5] = {{(-10L),(-10L),(-10L),(-10L),(-10L)}};
            long long l_381 = 0xB69DC55CD05DC4E1LL;
            int l_419 = 0L;
            const int *l_421 = &l_335[6][0][5];
            int *l_429 = &g_366[1];
            int i, j;
            (*g_39) = (l_330 > l_327);
        }
        else
        {
            int * const l_434 = (void*)0;
            int **l_435 = (void*)0;
            int **l_436[3];
            const short l_452 = 0x4331L;
            unsigned short l_514 = 1UL;
            int i;
            for (i = 0; i < 3; i++)
                l_436[i] = &g_120[0];
            (*g_437) = l_434;

            ;
            if ((*p_37))
            {
                short l_441 = (-1L);
                int l_459 = 0x5292C6BEL;
                unsigned long long l_509 = 18446744073709551613UL;
                unsigned short **l_511 = &g_461[6];
                if (((g_333 , (safe_lshift_func_uint8_t_u_s((l_440 != g_87), l_441))) < ((((safe_add_func_uint64_t_u_u((safe_mul_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((*p_37), ((l_448 == &l_449) != (safe_add_func_uint16_t_u_u((g_87 & (l_335[4][0][0] ^ l_441)), 0xEE0CL))))), 0xE58CL)), 0xB1471599C4984761LL)) | 0x2B55L) <= 65535UL) > l_452)))
                {
                    return p_37;


                }
                else
                {
                    unsigned short *l_462 = &l_330;
                    int l_479[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_479[i] = (-1L);
                    for (g_126 = 0; (g_126 != 27); g_126 = safe_add_func_uint8_t_u_u(g_126, 6))
                    {
                        unsigned long long l_463 = 0xD5D988E7C59EC68BLL;
                        short *l_473 = &g_86;
                        short **l_472 = &l_473;
                        short *l_476 = &l_441;
                        unsigned short l_481 = 0x9433L;
                        l_463 = (safe_rshift_func_int8_t_s_u((safe_add_func_int32_t_s_s(((l_459 = 0x0BCBD6955B33C5C1LL) && (((void*)0 != g_460) , (0L & g_40))), (l_441 >= (((l_462 = (g_461[6] = &g_161)) == ((*l_448) = &l_330)) < g_62)))), 4));

                        ;
                        ;
                        l_479[6] = (safe_rshift_func_uint8_t_u_s(((safe_add_func_int8_t_s_s(((safe_rshift_func_uint8_t_u_s((l_441 , (l_463 && ((((safe_lshift_func_uint8_t_u_u((~(&l_415 != ((*l_472) = &g_86))), (safe_mul_func_uint8_t_u_u(((l_415 >= 3UL) == ((*l_476) = 0x46E2L)), (safe_lshift_func_uint16_t_u_s(l_479[4], l_463)))))) , g_480[1]) == l_335[1][0][4]) , g_86))), 1)) == l_463), l_479[4])) >= l_335[6][0][5]), l_479[4]));
                        if (l_481)
                            continue;
                        (*g_175) = (l_482 = p_37);

                        ;
                    }

                    ;

                    ;
                    ;
                    (*l_482) = 0L;
                    if ((((g_86 || g_4) , (*l_482)) , 0x9A43D97AL))
                    {
                        unsigned short ***l_484 = &l_448;
                        p_37 = l_483;

                        ;
                        (*l_484) = &l_449;
                    }
                    else
                    {
                        unsigned l_487 = 0x2DF971F1L;
                        long long *l_491[2];
                        int ** const *l_494 = &l_435;
                        unsigned *l_502 = &l_371;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_491[i] = &g_4;
                        l_387[1] = p_37;
                        p_37 = &l_336;

                        ;
                        p_37 = p_37;
                    }

                    ;
                    if ((*l_482))
                    {
                        long long l_503 = 4L;
                        l_459 = (l_459 >= (l_479[4] ^ (*l_482)));
                        (*l_482) = l_503;
                        p_37 = &l_336;

                        ;
                    }
                    else
                    {
                        int *l_507 = &l_336;
                        l_482 = l_507;

                        ;
                    }

                    ;
                }

                ;
                ;

                ;
                for (g_243 = 3; (g_243 <= 9); g_243 += 1)
                {
                    unsigned l_508[7] = {0xBEC1ACB5L,4294967295UL,0xBEC1ACB5L,0xBEC1ACB5L,4294967295UL,0xBEC1ACB5L,0xBEC1ACB5L};
                    int i;
                }
                for (g_49 = 1; (g_49 <= 7); g_49 += 1)
                {
                    int *l_515 = &g_366[2];
                    return l_515;


                }
                for (g_243 = 0; (g_243 <= 2); g_243 += 1)
                {
                    int i;
                    l_387[g_243] = p_37;
                    for (g_40 = 0; (g_40 >= 0); g_40 -= 1)
                    {
                        p_37 = p_37;
                    }
                }


            }
            else
            {
                const char l_520 = 0x85L;
                if ((~1L))
                {
                    long long l_519 = 0L;
                    unsigned char *l_523 = &g_59;
                    unsigned long long *l_524 = (void*)0;
                    unsigned long long *l_525 = &l_440;
                    short *l_546 = &g_86;
                    for (g_87 = 0; (g_87 == 46); ++g_87)
                    {
                        (*g_119) = p_37;
                    }
                    (*l_482) = (l_518 = (*p_37));
                    (*p_37) = (((1UL >= (l_519 ^ l_520)) , ((l_520 & ((*l_525) = (safe_mod_func_int32_t_s_s(((((*l_523) = ((((g_321 >= g_59) < g_33) , l_520) <= (*g_177))) && l_519) > 4L), 0x7C1CEF7CL)))) != 0x44L)) & (*l_482));
                    (*l_482) = (safe_lshift_func_uint16_t_u_s((safe_add_func_uint32_t_u_u((safe_sub_func_int32_t_s_s((safe_sub_func_int64_t_s_s(l_519, (safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((l_525 != &g_333) == (safe_rshift_func_uint16_t_u_u(0UL, 0))), l_520)), ((safe_mod_func_uint8_t_u_u(((safe_mod_func_int64_t_s_s(((safe_rshift_func_uint8_t_u_s(((((*l_546) = l_520) <= ((safe_add_func_uint32_t_u_u((l_549[0][0][3] != (void*)0), (safe_mul_func_uint16_t_u_u(l_520, g_552)))) >= (*p_37))) <= l_519), l_519)) || 0xFD0EA1D8L), l_519)) | l_519), l_520)) < 0L))))), (*l_482))), l_519)), l_520));
                }
                else
                {
                    p_37 = p_37;
                }
            }

            ;

            ;

            ;
        }

        ;
        ;

        ;

        ;
        (*g_119) = &l_335[4][0][1];


    }
    else
    {
        int *l_578[10] = {&g_366[3],&g_366[3],&g_366[3],&g_366[3],&g_366[3],&g_366[3],&g_366[3],&g_366[3],&g_366[3],&g_366[3]};
        unsigned char * const **l_588 = (void*)0;
        int i;
        for (g_62 = 0; (g_62 > (-4)); g_62 = safe_sub_func_uint32_t_u_u(g_62, 2))
        {
            unsigned short l_576 = 0x5AF4L;
            short *l_583 = &g_86;
            short **l_582 = &l_583;
            int *l_589 = &l_335[6][0][5];
            for (g_59 = 1; (g_59 <= 9); g_59 += 1)
            {
                int i;
                (*g_39) = g_480[g_59];
                if ((**g_437))
                {
                    int l_573 = (-1L);
                    int *l_580 = &g_40;
                    for (g_321 = 0; (g_321 <= 9); g_321 += 1)
                    {
                        int **l_572 = &g_120[0];
                        (*l_572) = (*g_437);
                        (*p_37) = (*p_37);
                        (*g_39) = l_573;
                    }
                    if ((+(safe_lshift_func_int8_t_s_s(l_576, 7))))
                    {
                        (*p_37) = 0xF6480427L;
                        (*l_482) = ((g_577 = 0xA86BB1A65B3D7F62LL) <= 5UL);
                    }
                    else
                    {
                        (*g_579) = l_578[9];
                        (*p_37) = (*p_37);
                        (*g_581) = l_580;
                        if ((*l_580))
                            break;
                    }
                    (*p_37) = ((*l_482) = l_576);
                }
                else
                {
                    unsigned char ***l_587 = &g_170;
                    (*g_584) = l_582;

                    ;
                    for (l_415 = 0; (l_415 <= 0); l_415 += 1)
                    {
                        int i;
                        g_366[(l_415 + 3)] = (l_587 != l_588);
                        return p_37;




                    }
                    if ((*p_37))
                        continue;
                }
            }


            for (g_59 = 12; (g_59 <= 1); g_59--)
            {
                unsigned short l_593 = 0x816FL;
                if (l_593)
                    break;
            }
            (*l_482) = (**g_437);
        }



    }

    ;






    (*l_590) = ((l_594 , 65533UL) , ((((*l_590) >= ((((*l_595) = (*l_590)) , ((*l_598) = l_596[5])) != ((((safe_sub_func_int16_t_s_s(l_601, ((*g_177) && ((l_602 || ((((safe_unary_minus_func_int16_t_s(((*g_586) = (l_604[0] == (void*)0)))) != (*g_177)) && 3UL) != 0x73489620L)) , 0x2EL)))) < (*l_590)) == l_605[2][1][0]) , (void*)0))) | g_333) && (*l_590)));
    if ((*l_590))
    {
        int *l_606[8][6][3] = {{{&g_366[2],&l_335[4][0][1],&l_335[6][0][5]},{&g_40,&l_335[6][0][0],&g_366[2]},{&g_366[2],&l_335[6][0][5],&g_366[1]},{&g_366[0],&l_335[6][0][0],&g_40},{&g_366[1],&l_335[4][0][1],(void*)0},{&g_366[2],&g_366[0],&g_40}},{{&g_40,&g_366[2],(void*)0},{(void*)0,(void*)0,(void*)0},{&l_335[4][0][1],&l_490,&l_335[4][0][1]},{&g_366[3],&g_366[2],&g_366[2]},{(void*)0,&g_366[2],(void*)0},{&l_335[6][0][5],&g_366[2],&g_40}},{{&l_335[5][0][5],&g_40,&g_366[2]},{&l_335[6][0][5],&l_335[6][0][5],(void*)0},{(void*)0,&g_40,&l_335[6][0][5]},{&g_366[3],&g_366[0],&g_40},{&l_335[4][0][1],&g_366[1],(void*)0},{(void*)0,&g_40,(void*)0}},{{&g_40,&g_40,&l_490},{&g_366[2],&l_335[6][0][1],(void*)0},{&g_366[1],(void*)0,&g_366[2]},{&g_366[0],(void*)0,&g_366[0]},{&g_366[2],&g_366[1],&g_366[2]},{&g_40,&g_366[2],(void*)0}},{{&g_366[2],&g_366[2],&l_490},{&g_366[1],&l_335[6][0][4],(void*)0},{&g_366[2],&g_366[2],(void*)0},{&g_40,&g_40,&g_40},{(void*)0,&g_366[1],&l_335[6][0][5]},{&g_40,&g_366[2],(void*)0}},{{&g_366[1],&l_335[5][0][5],&g_40},{&l_335[2][0][4],&g_40,&g_366[0]},{(void*)0,&l_335[5][0][5],&g_366[2]},{&g_40,&g_366[2],&g_366[0]},{&g_40,&g_366[2],&g_366[2]},{&g_366[0],&g_366[2],&l_335[6][0][5]}},{{&l_335[6][0][5],(void*)0,&l_490},{&g_366[2],&g_366[2],&g_366[2]},{&g_40,&l_490,&g_40},{&g_366[2],&g_40,&l_335[6][0][0]},{(void*)0,&g_366[2],&g_366[1]},{&g_40,&l_335[6][0][5],&g_40}},{{(void*)0,(void*)0,(void*)0},{&g_366[2],(void*)0,&g_40},{&g_40,&g_40,&g_366[2]},{&g_366[2],&g_366[0],&l_335[1][0][3]},{&l_335[6][0][5],&g_366[1],(void*)0},{&g_366[0],&g_366[0],&l_335[6][0][5]}}};
        int i, j, k;
        return (*g_346);



    }
    else
    {
        int **l_609 = &l_483;
        unsigned short *l_644 = &g_161;
        unsigned short *l_647 = &g_321;
        unsigned char **l_649 = &g_171;
        int l_650 = 0xE4456736L;
        char **l_693 = &g_177;
lbl_639:
        (*l_609) = l_608;

        ;
        for (g_62 = 0; (g_62 != 3); ++g_62)
        {
            int *l_616[5];
            const char *l_620 = &l_605[2][1][0];
            const char * const *l_619[8][5][1] = {{{&l_620},{&l_620},{(void*)0},{&l_620},{&l_620}},{{&l_620},{&l_620},{&l_620},{&l_620},{&l_620}},{{&l_620},{&l_620},{(void*)0},{&l_620},{&l_620}},{{&l_620},{&l_620},{&l_620},{&l_620},{&l_620}},{{(void*)0},{&l_620},{&l_620},{&l_620},{&l_620}},{{&l_620},{&l_620},{&l_620},{&l_620},{&l_620}},{{(void*)0},{&l_620},{&l_620},{&l_620},{&l_620}},{{&l_620},{&l_620},{&l_620},{(void*)0},{&l_620}}};
            short **l_633 = &g_586;
            int i, j, k;
            for (i = 0; i < 5; i++)
                l_616[i] = &g_366[2];
            for (l_601 = 0; (l_601 >= 31); l_601 = safe_add_func_int64_t_s_s(l_601, 2))
            {
                unsigned short l_614 = 0x3BB8L;
                int *l_615[4] = {&g_40,&g_40,&g_40,&g_40};
                int i;
            }
        }
        (*l_609) = ((18446744073709551613UL < (g_196 & (safe_sub_func_uint32_t_u_u((((((**l_609) == (((**l_609) > ((*l_483) , 0xF4F3CF18L)) < (((*l_590) = ((((*l_647) = (safe_sub_func_int32_t_s_s((((((((*l_644) = (**l_609)) <= (((safe_add_func_int16_t_s_s((*l_608), (**l_609))) , (*g_513)) == (void*)0)) || 0x8D50L) ^ g_62) , (*l_590)) , (*l_608)), (**l_609)))) > 1L) && (**l_609))) <= 0xC658987DDA4E1561LL))) < (-1L)) <= 0xDAL) <= 0xBFC7L), (*l_607))))) , (void*)0);

        ;
        for (g_196 = 0; (g_196 <= 2); g_196 += 1)
        {
            unsigned char **l_648 = &g_171;
            int l_652 = 8L;
            char * const *l_688 = &g_177;
            l_649 = l_648;
            if (l_650)
            {
                short l_651 = 0x48D7L;
                long long *l_662[4];
                int *l_680 = &g_40;
                int i;
                for (i = 0; i < 4; i++)
                    l_662[i] = &g_4;
                (*l_609) = (void*)0;

                ;
                if (l_651)
                {
                    (*g_346) = (void*)0;

                    ;
                    (*l_609) = (void*)0;
                    p_37 = ((*l_609) = ((!l_652) , (void*)0));

                    ;
                }
                else
                {
                    unsigned short l_653 = 0xB8DBL;
                    int *l_663 = (void*)0;
                    if (l_653)
                    {
                        long long *l_654 = &g_4;
                        int l_661[9] = {2L,2L,2L,2L,2L,2L,2L,2L,2L};
                        int i;
                        (*l_609) = &l_335[6][0][5];

                        ;
                    }
                    else
                    {
                        int i;
                        g_366[(g_196 + 1)] = 0xAEE330D2L;
                        if (g_4)
                            goto lbl_639;
                        (*l_609) = (void*)0;
                    }

                    ;
                    (*l_609) = l_663;

                    ;
                    (*l_609) = (*g_346);

                    ;
                }

                ;
                if ((safe_add_func_int32_t_s_s(l_651, ((((safe_add_func_uint8_t_u_u(l_651, l_652)) >= g_40) , p_38) == &g_4))))
                {
                    int l_679 = 0x806EE171L;
                    for (g_161 = 0; (g_161 <= 3); g_161 += 1)
                    {
                        int l_670 = (-1L);
                        l_679 = ((((*g_586) = (l_670 , l_651)) , (*l_608)) >= (l_652 = (safe_mul_func_int32_t_s_s((safe_rshift_func_uint16_t_u_s(l_651, l_670)), ((*l_607) = (g_480[5] , ((l_652 , l_651) == (g_49 = ((((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_670, 8)), l_652)) == (*l_607)) , l_652) , 1UL)))))))));
                        return l_680;




                    }
                }
                else
                {
                    unsigned long long l_681 = 9UL;
                    (*l_590) = (((*l_680) = (*l_590)) || (l_681 > (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((*l_644) = (*l_680)), (l_688 == ((safe_rshift_func_int16_t_s_u(((*l_680) || 0xE84C1C06434A88B1LL), ((((*l_595) = (safe_mul_func_uint16_t_u_u((*l_680), (~l_681)))) , l_652) >= 0xF1EFL))) , l_693)))), 11)) , (*g_586)), l_681))));
                    if (l_681)
                        continue;
                }
            }
            else
            {
                (*l_590) = l_652;
            }
            for (g_577 = 0; (g_577 <= 9); g_577 += 1)
            {
                (*l_609) = (*g_346);

                ;
                for (g_126 = 2; (g_126 <= 9); g_126 += 1)
                {
                    unsigned l_695 = 0xCD926CCBL;
                    for (g_321 = 0; (g_321 <= 2); g_321 += 1)
                    {
                        int *l_694 = &g_366[2];
                        int i, j, k;
                        (*l_609) = l_694;

                        ;
                        if (l_605[g_196][g_577][g_321])
                            break;
                        if ((**l_609))
                            continue;
                        if (l_695)
                            continue;
                    }

                    ;
                    (*g_699) = &l_595;

                    ;
                    (*l_609) = &l_335[0][0][3];

                    ;
                    if (l_695)
                        continue;
                }

                ;
            }
        }

        ;
    }

    ;
    ;
    return (*g_346);




}







static long long * func_41(unsigned long long p_42)
{
    unsigned l_269 = 18446744073709551614UL;
    const char *l_281 = &g_126;
    const char **l_280 = &l_281;
    const char ***l_279 = &l_280;
    int *l_293 = &g_40;
    long long *l_325[6] = {&g_196,&g_196,&g_196,&g_196,&g_196,&g_196};
    int i;
    for (g_111 = 0; (g_111 <= 2); ++g_111)
    {
        int l_266[4];
        int *l_267 = &l_266[1];
        int *l_296 = &g_40;
        unsigned short *l_300 = &g_161;
        int i;
        for (i = 0; i < 4; i++)
            l_266[i] = 6L;
        for (g_59 = 0; (g_59 <= 10); g_59++)
        {
            int *l_265 = &g_40;
            int **l_268 = &l_265;
            for (g_40 = 14; (g_40 <= (-30)); g_40--)
            {
                l_265 = l_265;
            }
            (*l_265) = p_42;
            l_266[1] = p_42;
            l_267 = ((*l_268) = l_267);

            ;
        }
    }
    return l_325[5];


}







static int * func_43(long long * p_44, unsigned long long p_45, unsigned p_46, long long * p_47)
{
    int l_54[5] = {4L,4L,4L,4L,4L};
    unsigned long long *l_55 = &g_49;
    unsigned char *l_58[1];
    char *l_60 = (void*)0;
    char *l_61[5] = {&g_62,&g_62,&g_62,&g_62,&g_62};
    short *l_145 = &g_86;
    int l_148 = (-1L);
    int l_164 = 1L;
    int *l_174 = &l_54[4];
    int *l_182 = (void*)0;
    int *l_189 = &l_54[3];
    unsigned long long l_207 = 0xC1A7E2D6D25A9A46LL;
    int *l_209[9][2][7] = {{{&l_148,&l_148,&l_148,(void*)0,&l_148,&l_148,&l_148},{&l_54[3],&l_54[3],(void*)0,(void*)0,&l_54[3],&l_54[3],(void*)0}},{{(void*)0,(void*)0,&g_40,(void*)0,(void*)0,(void*)0,(void*)0},{&l_54[3],(void*)0,(void*)0,&l_54[3],&l_54[3],(void*)0,&l_164}},{{&l_148,(void*)0,&l_148,&l_148,&l_148,&l_148,&l_148},{&l_54[3],&l_54[3],&l_148,&l_164,&l_54[3],(void*)0,&l_164}},{{(void*)0,&l_148,&l_54[3],(void*)0,&l_54[3],&l_148,(void*)0},{&l_54[3],&l_164,(void*)0,&l_54[3],&l_54[3],(void*)0,(void*)0}},{{&l_148,(void*)0,&g_40,(void*)0,&l_148,(void*)0,&l_148},{&l_54[3],&l_54[3],(void*)0,(void*)0,(void*)0,(void*)0,(void*)0}},{{&g_40,&l_148,&g_40,(void*)0,&l_54[3],(void*)0,&g_40},{&l_54[3],(void*)0,&l_164,&l_54[3],&l_54[3],&l_164,(void*)0}},{{&l_148,(void*)0,&g_40,&l_148,&g_40,(void*)0,&l_148},{(void*)0,&l_54[3],&l_148,&l_148,&l_54[3],(void*)0,&l_148}},{{&l_54[3],&l_148,(void*)0,&l_148,&l_54[3],(void*)0,&l_54[3]},{&l_54[3],&l_148,&l_148,&l_54[3],(void*)0,&l_148,(void*)0}},{{&g_40,&l_148,&g_40,(void*)0,&l_148,(void*)0,&g_40},{&l_54[3],&l_54[3],&l_164,(void*)0,&l_54[3],&l_54[3],(void*)0}}};
    int *l_210 = (void*)0;
    int *l_253 = &l_54[3];
    int *l_254 = (void*)0;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_58[i] = &g_59;
    if (((((safe_sub_func_int8_t_s_s((g_62 = (((0UL != (((*l_55) = (safe_add_func_uint8_t_u_u(255UL, l_54[3]))) , (g_40 ^ p_46))) | g_33) , (safe_mul_func_uint8_t_u_u(0x39L, (g_59 = p_46))))), (safe_mod_func_uint64_t_u_u(g_40, g_4)))) ^ 0x84L) > p_46) != l_54[3]))
    {
        char **l_65 = &l_60;
        char ***l_66 = &l_65;
        int l_67[10][2] = {{1L,(-1L)},{0L,1L},{0x72679F1AL,0x72679F1AL},{0x72679F1AL,1L},{0L,(-1L)},{1L,(-1L)},{0L,1L},{0x72679F1AL,0x72679F1AL},{0x72679F1AL,1L},{0L,(-1L)}};
        unsigned short l_80 = 0xB7F4L;
        int i, j;
        (*l_66) = l_65;
lbl_134:
        l_67[8][0] = (-9L);
        for (g_62 = 0; (g_62 <= (-13)); g_62 = safe_sub_func_int16_t_s_s(g_62, 7))
        {
            unsigned char *l_74[4][3][4] = {{{&g_59,&g_59,&g_59,&g_59},{(void*)0,&g_59,&g_59,&g_59},{&g_59,&g_59,&g_59,&g_59}},{{&g_59,(void*)0,&g_59,(void*)0},{&g_59,(void*)0,&g_59,&g_59},{&g_59,(void*)0,(void*)0,&g_59}},{{(void*)0,&g_59,&g_59,&g_59},{(void*)0,&g_59,(void*)0,&g_59},{&g_59,&g_59,&g_59,&g_59}},{{&g_59,&g_59,&g_59,&g_59},{&g_59,&g_59,&g_59,&g_59},{&g_59,(void*)0,&g_59,&g_59}}};
            int l_79 = 0x787D1A38L;
            short *l_85 = &g_86;
            int **l_139 = &g_120[0];
            unsigned long long l_142 = 0x2A266805FA10622CLL;
            int i, j, k;
            if ((p_46 , ((~((((safe_add_func_int8_t_s_s((g_87 = (safe_sub_func_uint16_t_u_u((l_58[0] == l_74[0][2][0]), (((safe_rshift_func_uint16_t_u_s((safe_add_func_int64_t_s_s(((l_79 <= (l_80 = (0x17A7F359L || (-1L)))) > (safe_lshift_func_int16_t_s_s((((~g_40) && (!(safe_mod_func_int16_t_s_s((((*l_85) = 0x5BB9L) , (0xB3L || 0x2CL)), 1L)))) || l_67[7][0]), 3))), 18446744073709551608UL)), g_4)) || p_45) > l_67[4][1])))), l_79)) <= g_62) , 0x11L) , 65535UL)) , p_46)))
            {
                int *l_89 = &l_67[6][0];
                int **l_88 = &l_89;
                (*l_88) = (void*)0;

                ;
            }
            else
            {
                int l_124 = 0x378B10DFL;
                int *l_133 = &g_40;
                if ((safe_lshift_func_uint16_t_u_u(0x70B9L, ((((safe_mul_func_int16_t_s_s(((g_59 , g_49) <= (((safe_unary_minus_func_int8_t_s((safe_rshift_func_int16_t_s_u(g_86, 5)))) & l_54[1]) & (g_59 , (-5L)))), g_86)) , (safe_lshift_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(p_46, p_46)) > 0xA44EL), g_87))) , (void*)0) == (void*)0))))
                {
                    unsigned long long l_105[7][9] = {{0x75F205D52AEB3C20LL,0xEF91DD11AFF0E9B2LL,18446744073709551612UL,0xEF91DD11AFF0E9B2LL,0x75F205D52AEB3C20LL,0x21C45DBD19AA3B2ALL,0x75F205D52AEB3C20LL,0xEF91DD11AFF0E9B2LL,18446744073709551612UL},{1UL,1UL,4UL,1UL,1UL,0x8E5F853116D361F4LL,1UL,1UL,0x8E5F853116D361F4LL},{0UL,0xEF91DD11AFF0E9B2LL,0xA8C76C9F35CD65FALL,0xEF91DD11AFF0E9B2LL,0UL,0x21C45DBD19AA3B2ALL,0UL,0xEF91DD11AFF0E9B2LL,0xA8C76C9F35CD65FALL},{1UL,1UL,4UL,1UL,1UL,4UL,1UL,1UL,0x8E5F853116D361F4LL},{0x75F205D52AEB3C20LL,0xEF91DD11AFF0E9B2LL,18446744073709551612UL,0xEF91DD11AFF0E9B2LL,0x75F205D52AEB3C20LL,0x21C45DBD19AA3B2ALL,0x75F205D52AEB3C20LL,0xEF91DD11AFF0E9B2LL,18446744073709551612UL},{1UL,1UL,4UL,1UL,1UL,0x8E5F853116D361F4LL,1UL,1UL,0x8E5F853116D361F4LL},{0UL,0xEF91DD11AFF0E9B2LL,0xA8C76C9F35CD65FALL,0xEF91DD11AFF0E9B2LL,0UL,0x21C45DBD19AA3B2ALL,0UL,0xEF91DD11AFF0E9B2LL,0xA8C76C9F35CD65FALL}};
                    int **l_116 = (void*)0;
                    unsigned char **l_130 = &l_74[3][2][2];
                    int *l_132[8] = {&l_67[8][1],&l_67[8][1],&l_54[3],&l_67[8][1],&l_67[8][1],&l_54[3],&l_67[8][1],&l_67[8][1]};
                    int i, j;
                    for (g_59 = 0; (g_59 != 15); g_59 = safe_add_func_uint64_t_u_u(g_59, 8))
                    {
                        unsigned long long *l_108 = &l_105[1][0];
                        unsigned short *l_109 = (void*)0;
                        unsigned short *l_110 = &l_80;
                        int **l_115 = &g_39;
                        int ***l_114[10] = {(void*)0,(void*)0,&l_115,&l_115,&l_115,(void*)0,(void*)0,&l_115,&l_115,&l_115};
                        int i;
                        l_79 = (safe_sub_func_int8_t_s_s(l_105[2][6], (safe_add_func_int64_t_s_s((((l_79 , l_108) != &p_45) , (((*l_110) = (l_54[1] = p_45)) , (g_87 | (g_111 = 1L)))), (safe_mul_func_uint16_t_u_u(((void*)0 != (**l_66)), p_45))))));
                        l_116 = (void*)0;
                    }
                    for (g_86 = 0; (g_86 <= (-8)); --g_86)
                    {
                        int *l_121 = &l_67[8][0];
                        int **l_123 = &g_120[0];
                        (*g_119) = &g_40;
                        (*l_123) = l_121;
                    }
                    l_54[0] = ((*g_39) = p_45);
                    if (p_45)
                    {
                        l_54[0] = l_124;
                    }
                    else
                    {
                        unsigned l_125 = 0xF418CC4BL;
                        const unsigned char *l_129 = &g_87;
                        const unsigned char **l_128 = &l_129;
                        const unsigned char ***l_127[4];
                        int *l_131 = &l_54[2];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_127[i] = &l_128;
                        (*g_39) = l_125;
                        (*g_39) = g_126;
                        l_130 = (void*)0;

                        ;
                        return l_133;



                    }
                }
                else
                {
                    if (g_126)
                        goto lbl_134;
                    (*g_136) = &l_67[4][1];
                    return l_133;



                }
                if (p_46)
                {
                    (*l_133) = (p_46 , 1L);
                }
                else
                {
                    for (l_79 = 0; (l_79 <= 15); l_79++)
                    {
                        if (l_79)
                            break;
                    }
                }
                (*l_133) = l_80;
            }
            (*l_139) = &l_67[8][0];
            for (g_40 = 22; (g_40 < (-29)); g_40--)
            {
                (*l_139) = (*l_139);
            }
            for (l_80 = 0; (l_80 <= 1); l_80 += 1)
            {
                int i, j;
                l_67[(l_80 + 2)][l_80] = l_142;
            }
        }
    }
    else
    {
        short **l_146 = &l_145;
        int l_147 = 7L;
        unsigned short *l_160[2];
        int *l_162 = (void*)0;
        int *l_163 = &l_148;
        long long *l_199 = &g_4;
        unsigned char ***l_202 = (void*)0;
        int i;
        for (i = 0; i < 2; i++)
            l_160[i] = &g_161;
        l_148 = (safe_rshift_func_int8_t_s_s(((p_45 , &g_86) == ((*l_146) = l_145)), (l_147 = (l_54[3] = g_126))));
        if ((l_147 <= ((l_54[3] , ((9L <= (safe_mod_func_int32_t_s_s((**g_119), (l_164 = (+((*l_163) = (safe_mul_func_int16_t_s_s(0xBBF8L, (safe_unary_minus_func_uint64_t_u((p_45 = (safe_mod_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((l_148 , (((safe_sub_func_uint32_t_u_u(p_45, ((((l_54[3] = g_111) , (((((l_147 | 0x76BBL) != g_62) < 0L) , p_45) && 5UL)) <= l_148) >= 0x3DL))) != 0L) , 0x7A3C17D6L)) <= 4294967295UL) && 0x2ED989C8F552920ALL), g_40)), p_46))))))))))))) <= 0x58L)) , p_46)))
        {
            if (p_46)
            {
                int *l_165 = &l_148;
                int **l_173 = &g_120[0];
                l_165 = &l_147;

                ;
                for (g_161 = 0; (g_161 <= 3); g_161 += 1)
                {
                    unsigned l_172 = 4294967295UL;
                    for (l_148 = 3; (l_148 >= 0); l_148 -= 1)
                    {
                        long long *l_168 = &g_4;
                        long long **l_167 = &l_168;
                        long long ***l_166 = &l_167;
                        int i;
                        (*l_166) = ((l_54[(g_161 + 1)] == 0L) , &p_44);

                        ;
                    }
                    for (l_147 = 3; (l_147 >= 0); l_147 -= 1)
                    {
                        (*g_169) = &l_58[0];

                        ;
                        l_172 = ((*l_163) = 1L);
                        l_54[4] = p_46;
                    }
                }

                ;
                l_174 = ((*l_173) = (void*)0);


                ;
                (*l_173) = &l_54[1];


            }
            else
            {
                char * volatile * volatile *l_178 = &g_176[6][2][0];
                int *l_186 = (void*)0;
                (*g_175) = &l_148;


                (*l_178) = g_176[6][2][0];
                for (l_148 = 0; (l_148 <= 0); l_148 = safe_add_func_int16_t_s_s(l_148, 4))
                {
                    int **l_181[10][4][5] = {{{&l_163,&l_163,&g_120[0],&l_174,&g_120[0]},{&g_120[0],(void*)0,(void*)0,&g_39,&l_162},{&l_163,(void*)0,(void*)0,&l_163,&l_162},{&l_163,&l_163,&g_120[0],&l_163,&l_162}},{{&g_120[0],&l_163,&g_120[0],&g_39,&g_120[0]},{(void*)0,(void*)0,&l_162,&l_163,&l_162},{(void*)0,(void*)0,&g_120[0],&l_163,&g_120[0]},{&g_120[0],&l_163,&l_162,&g_39,&g_120[0]}},{{&l_163,(void*)0,&g_120[0],&l_174,&l_162},{&l_163,&l_163,&g_120[0],&l_174,&g_120[0]},{&g_120[0],(void*)0,(void*)0,&g_39,&l_162},{&l_163,(void*)0,(void*)0,&l_163,&l_162}},{{&l_163,&l_163,&g_120[0],&l_163,&l_162},{&g_120[0],&l_163,&g_120[0],&g_39,&g_120[0]},{(void*)0,(void*)0,&l_162,&l_163,&l_162},{(void*)0,(void*)0,&g_120[0],(void*)0,&l_163}},{{&l_162,(void*)0,&l_174,(void*)0,&l_163},{(void*)0,(void*)0,&g_39,&l_163,&l_174},{(void*)0,(void*)0,&g_120[0],&l_163,&l_163},{&l_162,&g_120[0],&g_120[0],(void*)0,&l_174}},{{(void*)0,(void*)0,&g_120[0],(void*)0,&l_174},{(void*)0,(void*)0,&g_120[0],&l_163,&l_174},{&l_162,(void*)0,&g_39,(void*)0,&l_163},{&g_120[0],(void*)0,&l_174,&l_163,&l_174}},{{&g_120[0],&g_120[0],&g_120[0],(void*)0,&l_163},{&l_162,(void*)0,&l_174,(void*)0,&l_163},{(void*)0,(void*)0,&g_39,&l_163,&l_174},{(void*)0,(void*)0,&g_120[0],&l_163,&l_163}},{{&l_162,&g_120[0],&g_120[0],(void*)0,&l_174},{(void*)0,(void*)0,&g_120[0],(void*)0,&l_174},{(void*)0,(void*)0,&g_120[0],&l_163,&l_174},{&l_162,(void*)0,&g_39,(void*)0,&l_163}},{{&g_120[0],(void*)0,&l_174,&l_163,&l_174},{&g_120[0],&g_120[0],&g_120[0],(void*)0,&l_163},{&l_162,(void*)0,&l_174,&l_174,&l_162},{&l_162,&g_120[0],&l_162,&l_163,&l_174}},{{(void*)0,&l_162,(void*)0,&l_163,&g_120[0]},{&g_120[0],&g_120[0],(void*)0,&l_174,(void*)0},{(void*)0,&g_120[0],(void*)0,&l_174,&l_174},{&l_162,(void*)0,(void*)0,(void*)0,(void*)0}}};
                    int i, j, k;
                    l_182 = &l_148;

                    ;
                }

                ;
            }


            ;
            ;
            ;
            (*g_190) = l_189;
            for (g_62 = 6; (g_62 == 26); g_62++)
            {
                long long **l_200 = (void*)0;
                const int l_201 = 4L;
                int **l_203 = (void*)0;
                int **l_204 = &l_174;
                if (p_46)
                    break;
                (*l_163) = (p_45 & (safe_mul_func_int8_t_s_s(((*g_177) = (p_44 == (g_195 = &g_4))), ((*g_169) == ((safe_sub_func_int16_t_s_s(((p_44 != (p_47 = l_199)) , ((*l_145) = (~(((((0xD9L <= (3UL < l_201)) | p_45) & 255UL) , (void*)0) != l_202)))), 0x99ADL)) , &g_171)))));

                ;
                ;
                (*l_204) = &l_147;

                ;
            }

            ;
            ;
            ;
        }
        else
        {
            return (*g_136);


        }

        ;

        ;
        ;
        ;
        ;
    }

    ;

    ;

    ;
    ;
    if (((safe_mod_func_int64_t_s_s(l_207, p_46)) != 0x9A83L))
    {
        int *l_208 = &l_54[1];
        (*g_39) = (*l_189);
        return l_210;




    }
    else
    {
        int *l_211[10][8];
        int **l_212 = &g_120[0];
        int i, j;
        for (i = 0; i < 10; i++)
        {
            for (j = 0; j < 8; j++)
                l_211[i][j] = (void*)0;
        }
lbl_252:
        (*l_212) = l_211[3][1];
        for (p_46 = 0; (p_46 != 14); p_46 = safe_add_func_uint32_t_u_u(p_46, 4))
        {
            unsigned char **l_220 = (void*)0;
            int *l_229 = &g_40;
            int **l_249[8] = {&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_120[0],&g_120[0]};
            int i;
            if (p_45)
            {
                int l_226 = 6L;
                int **l_227 = &l_210;
                for (g_87 = 0; (g_87 < 57); g_87 = safe_add_func_uint64_t_u_u(g_87, 3))
                {
                    unsigned long long l_217 = 0UL;
                    int l_225 = 0xF6B8001EL;
                    int l_228 = 3L;
                    if (((((((l_228 = (0L | ((((((l_217 | (safe_rshift_func_int16_t_s_u((g_87 <= ((l_220 != (void*)0) > (~((*g_177) = p_46)))), (safe_lshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(p_45, 3)) , (l_225 = l_217)), 7))))) , 3L) , 0x7A7CL) , l_226) , &l_211[3][1]) == l_227))) && p_46) != p_46) || 4294967295UL) | g_86) && 0xE9172EC5L))
                    {
                        int *l_230 = &l_164;
                        unsigned short *l_246[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_246[i] = &g_161;
                        if (p_46)
                            break;
                        l_230 = l_229;

                        ;
                        l_226 = (((safe_rshift_func_int8_t_s_s((((*l_189) = ((p_46 , (safe_rshift_func_int8_t_s_u(((g_161 = ((safe_rshift_func_uint8_t_u_s((g_59 = (0UL > ((safe_mod_func_uint8_t_u_u((safe_mod_func_uint64_t_u_u(g_161, ((+(safe_mul_func_uint8_t_u_u((g_243 = (p_46 || g_49)), p_45))) || p_46))), p_46)) < (safe_lshift_func_uint8_t_u_u(0x59L, 6))))), 1)) , p_46)) <= 3L), 3))) > 0xF4L)) <= p_46), 1)) , l_228) , 0x692D5F5AL);
                        (*g_39) = (*g_39);
                    }
                    else
                    {
                        (*l_189) = ((*l_229) | p_46);
                    }
                    for (l_228 = 0; (l_228 <= 4); l_228 += 1)
                    {
                        int i;
                        (*l_212) = &l_54[l_228];
                        if (p_46)
                            continue;
                        l_249[7] = &l_182;
                        (*l_227) = l_211[7][0];
                    }
                    (*l_227) = (p_45 , (*l_227));
                    l_226 = p_46;
                }


            }
            else
            {
                for (g_59 = 0; (g_59 == 6); g_59 = safe_add_func_uint32_t_u_u(g_59, 4))
                {
                    if (g_87)
                        goto lbl_252;
                }
            }


        }
    }
    return l_254;




}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    transparent_crc(g_49, "g_49", print_hash_value);
    transparent_crc(g_59, "g_59", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_126, "g_126", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_196, "g_196", print_hash_value);
    transparent_crc(g_243, "g_243", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_366[i], "g_366[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_480[i], "g_480[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_552, "g_552", print_hash_value);
    transparent_crc(g_562, "g_562", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_631[i], "g_631[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_705, "g_705", print_hash_value);
    transparent_crc(g_711, "g_711", print_hash_value);
    transparent_crc(g_764, "g_764", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_824, "g_824", print_hash_value);
    transparent_crc(g_855, "g_855", print_hash_value);
    transparent_crc(g_905, "g_905", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_931[i][j][k], "g_931[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1015, "g_1015", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 6; j++)
        {
            transparent_crc(g_1074[i][j], "g_1074[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_1083[i][j][k], "g_1083[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1117, "g_1117", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_1301[i], "g_1301[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
