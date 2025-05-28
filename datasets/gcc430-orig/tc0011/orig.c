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
   int f0;
   signed f1 : 7;
   int f2;
   short f3;
   volatile unsigned f4;
};

union U1 {
   volatile unsigned f0 : 6;
   unsigned short f1;
   char f2;
};

union U2 {
   volatile unsigned short f0;
   char f1;
   volatile char f2;
   volatile unsigned f3;
};

union U3 {
   unsigned short f0;
   volatile unsigned f1;
   volatile unsigned char f2;
   int f3;
   unsigned f4;
};

union U4 {
   volatile short f0;
   volatile int f1;
};

union U5 {
   int f0;
   int f1;
   volatile signed f2 : 1;
   signed f3 : 1;
};


static char g_25 = (-4L);
static int g_33 = 0x5A2E712CL;
static int *g_32[4][10][6] = {{{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,(void*)0,&g_33,(void*)0},{&g_33,&g_33,&g_33,&g_33,&g_33,(void*)0},{&g_33,&g_33,(void*)0,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,(void*)0,&g_33,(void*)0},{&g_33,&g_33,&g_33,&g_33,&g_33,(void*)0},{(void*)0,&g_33,&g_33,&g_33,&g_33,&g_33}},{{(void*)0,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,(void*)0,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,(void*)0,&g_33,&g_33,&g_33,(void*)0},{&g_33,(void*)0,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{(void*)0,&g_33,&g_33,&g_33,(void*)0,&g_33},{(void*)0,&g_33,&g_33,&g_33,&g_33,(void*)0}},{{&g_33,&g_33,&g_33,&g_33,(void*)0,&g_33},{&g_33,&g_33,(void*)0,&g_33,&g_33,&g_33},{&g_33,&g_33,(void*)0,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,(void*)0,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,(void*)0,&g_33,&g_33,(void*)0},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33}},{{&g_33,(void*)0,&g_33,&g_33,(void*)0,&g_33},{&g_33,&g_33,&g_33,&g_33,(void*)0,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,(void*)0,&g_33},{&g_33,(void*)0,&g_33,&g_33,(void*)0,&g_33},{&g_33,&g_33,(void*)0,&g_33,&g_33,&g_33},{&g_33,(void*)0,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,(void*)0},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33},{&g_33,&g_33,&g_33,&g_33,&g_33,&g_33}}};
static int g_82 = 0x7F042724L;
static union U1 g_84 = {0xAE11E546L};
static union U1 *g_86 = &g_84;
static union U4 g_104 = {0L};
static union U4 *g_103 = &g_104;
static int *g_117 = &g_82;
static union U3 g_190 = {0UL};
static union U3 *g_189 = &g_190;
static volatile union U4 *g_221 = (void*)0;
static volatile union U4 **g_220 = &g_221;
static volatile union U4 ***g_219 = &g_220;
static volatile int g_277[8] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
static union U2 g_282 = {0UL};
static union U4 **g_300[7][10][1] = {{{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103}},{{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0}},{{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103}},{{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103}},{{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0}},{{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103}},{{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103},{(void*)0},{&g_103},{&g_103}}};
static volatile union U2 g_322 = {0x0E67L};
static volatile union U2 *g_321 = &g_322;
static volatile union U2 **g_320 = &g_321;
static volatile unsigned short g_331 = 0x07F0L;
static union U1 g_333 = {1UL};
static int g_351 = 0x89E95D23L;
static union U1 g_369 = {6UL};
static union U0 g_375[6][9] = {{{5L},{-1L},{0xCF0C5FE4L},{0x8A494BD6L},{0x9DD6A417L},{1L},{7L},{7L},{1L}},{{0x8A494BD6L},{-5L},{0x435C7917L},{-5L},{0x8A494BD6L},{1L},{0x8A494BD6L},{0x435C7917L},{0x9DD6A417L}},{{0x8A494BD6L},{1L},{7L},{3L},{-5L},{3L},{7L},{1L},{0x8A494BD6L}},{{-8L},{5L},{0xCF0C5FE4L},{7L},{0x435C7917L},{1L},{-1L},{1L},{0x435C7917L}},{{0x9DD6A417L},{-1L},{-1L},{0x9DD6A417L},{3L},{5L},{0x67363E01L},{0x435C7917L},{0xCF0C5FE4L}},{{-8L},{0x435C7917L},{-1L},{1L},{1L},{-1L},{0x435C7917L},{-8L},{-5L}}};
static volatile int *g_454 = (void*)0;
static volatile int **g_453 = &g_454;
static volatile int ***g_452[7][5] = {{&g_453,(void*)0,(void*)0,(void*)0,(void*)0},{(void*)0,(void*)0,(void*)0,&g_453,&g_453},{(void*)0,&g_453,&g_453,&g_453,(void*)0},{&g_453,&g_453,&g_453,&g_453,&g_453},{(void*)0,&g_453,&g_453,(void*)0,(void*)0},{&g_453,(void*)0,&g_453,&g_453,&g_453},{&g_453,(void*)0,&g_453,&g_453,&g_453}};
static union U3 g_566[6] = {{0xD4D6L},{0xD4D6L},{0xD4D6L},{0xD4D6L},{0xD4D6L},{0xD4D6L}};
static union U0 g_596 = {1L};
static union U0 g_597 = {0xE718F576L};
static union U0 g_598[2][4][2] = {{{{-1L},{0xAAEEE257L}},{{0x2A5FCED1L},{0x2A5FCED1L}},{{0xAAEEE257L},{-1L}},{{1L},{-1L}}},{{{0xAAEEE257L},{0x2A5FCED1L}},{{0x2A5FCED1L},{0xAAEEE257L}},{{-1L},{1L}},{{1L},{-1L}}}};
static union U0 g_599[10][10] = {{{0x3F6A3BCBL},{0x3F6A3BCBL},{0x5D9E9D7CL},{1L},{0xBFCEBCBAL},{1L},{0x5D9E9D7CL},{0x3F6A3BCBL},{0x3F6A3BCBL},{0x5D9E9D7CL}},{{0L},{1L},{-5L},{-5L},{1L},{0L},{0x5D9E9D7CL},{0L},{1L},{-5L}},{{2L},{0x3F6A3BCBL},{2L},{-5L},{0x5D9E9D7CL},{0x5D9E9D7CL},{-5L},{2L},{0x3F6A3BCBL},{2L}},{{2L},{0L},{0x3F6A3BCBL},{1L},{0x3F6A3BCBL},{0L},{2L},{2L},{0L},{0x3F6A3BCBL}},{{0L},{2L},{2L},{0L},{0x3F6A3BCBL},{1L},{0x3F6A3BCBL},{0L},{2L},{2L}},{{0x3F6A3BCBL},{2L},{-5L},{0x5D9E9D7CL},{0x5D9E9D7CL},{-5L},{2L},{0x3F6A3BCBL},{2L},{-5L}},{{1L},{0L},{0x5D9E9D7CL},{0L},{1L},{-5L},{-5L},{1L},{0L},{0x5D9E9D7CL}},{{0x3F6A3BCBL},{0x3F6A3BCBL},{0x5D9E9D7CL},{1L},{0xBFCEBCBAL},{1L},{0x5D9E9D7CL},{0x3F6A3BCBL},{0x3F6A3BCBL},{0x5D9E9D7CL}},{{0L},{1L},{-5L},{-5L},{1L},{0L},{0x5D9E9D7CL},{0L},{1L},{-5L}},{{2L},{0x3F6A3BCBL},{2L},{-5L},{-5L},{-5L},{1L},{0L},{0x5D9E9D7CL},{0L}}};
static union U0 g_600[6] = {{0x5EFEF09CL},{0x5EFEF09CL},{0x5EFEF09CL},{0x5EFEF09CL},{0x5EFEF09CL},{0x5EFEF09CL}};
static union U0 g_601 = {9L};
static union U0 g_602 = {0xEBD1BB3FL};
static union U0 g_603 = {0L};
static union U0 g_604 = {6L};
static union U0 g_605 = {0xA2BCC67DL};
static union U0 g_606 = {-1L};
static union U0 g_607[10] = {{0x2EB51F1CL},{0x2EB51F1CL},{0x2EB51F1CL},{0x2EB51F1CL},{0x2EB51F1CL},{0x2EB51F1CL},{0x2EB51F1CL},{0x2EB51F1CL},{0x2EB51F1CL},{0x2EB51F1CL}};
static volatile union U0 *g_700[2] = {(void*)0,(void*)0};
static volatile union U0 **g_699 = &g_700[1];
static union U5 *g_768 = (void*)0;
static union U2 g_817[2][4] = {{{65533UL},{65533UL},{65533UL},{65533UL}},{{65533UL},{65533UL},{65533UL},{65533UL}}};
static union U0 g_872[8] = {{-5L},{2L},{-5L},{2L},{-5L},{2L},{-5L},{2L}};
static union U0 g_878 = {0x2637CC1BL};



static union U0 func_1(void);
static short func_13(char p_14);
static int * func_16(int * p_17, unsigned p_18, unsigned p_19);
static int * func_20(int p_21, int p_22, int * p_23, int * p_24);
static char func_26(int * p_27, short p_28, int * p_29, unsigned p_30, int * p_31);
static short func_51(int * p_52);
static int func_60(int * p_61);
static int * func_62(unsigned char p_63, int * p_64);
static int ** func_65(unsigned char p_66, int * p_67, int ** p_68, char p_69, unsigned short p_70);
static unsigned char func_73(int * p_74, int * p_75, char p_76, int p_77, int * p_78);
static union U0 func_1(void)
{
    char l_15 = (-5L);
    int l_864 = 0L;
    unsigned char l_871 = 0UL;
    int *l_875 = &g_33;
    int **l_876 = (void*)0;
    int **l_877 = &g_32[1][1][2];
    if (((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int16_t_s(func_13(l_15))), (((safe_mod_func_int32_t_s_s((l_864 & ((safe_sub_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_add_func_int32_t_s_s((((l_864 || (l_864 != g_605.f2)) & (g_603.f0 | (g_600[5].f1 == ((g_603.f1 <= 0x05CAL) != g_600[5].f3)))) == 0xCCD4L), 0x2CBCA682L)), (-9L))) >= l_864), l_864)) ^ g_600[5].f0)), l_15)) > l_864) < 0UL))), 2)), g_603.f0)), l_15)), l_871)) || (*g_117)))
    {
        return g_872[3];

            }
    else
    {
        int *l_873 = (void*)0;
        int *l_874 = &g_600[5].f2;
        (*l_874) &= (*g_117);
    }


    ;
    (*l_877) = l_875;
    return g_878;

    }







static short func_13(char p_14)
{
    short l_38 = 0x4818L;
    int *l_53 = (void*)0;
    int l_156 = 0L;
    unsigned char l_157 = 255UL;
    int *l_854 = &g_603.f2;
    union U1 *l_857 = (void*)0;
    l_854 = func_16(func_20(g_25, (0x3FL <= func_26(g_32[1][1][2], (safe_rshift_func_uint8_t_u_u((!(safe_mod_func_int16_t_s_s(l_38, l_38))), ((safe_mod_func_int16_t_s_s((((safe_add_func_int32_t_s_s(l_38, ((safe_lshift_func_uint8_t_u_s(((l_38 || l_38) && ((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_u(func_51(l_53), 8)), g_25)) >= g_25)), l_156)) >= (-1L)))) && (-1L)) <= l_156), p_14)) > l_157))), g_32[3][0][1], g_84.f0, g_117)), &l_156, &l_156), p_14, l_38);


    ;
    ;
    (*l_854) = (*l_854);
    (*l_854) = (((safe_add_func_uint8_t_u_u(((((void*)0 == l_857) != g_282.f2) > func_60(&g_82)), p_14)) != ((safe_rshift_func_uint16_t_u_u(65534UL, 6)) | (safe_mul_func_uint8_t_u_u(g_605.f2, g_606.f3)))) & (-1L));
    return g_597.f4;
}







static int * func_16(int * p_17, unsigned p_18, unsigned p_19)
{
    (*g_117) = (safe_lshift_func_uint8_t_u_s(0x3BL, 0));
    return &g_33;


}







static int * func_20(int p_21, int p_22, int * p_23, int * p_24)
{
    unsigned short l_518[6][8] = {{0xAAAEL,65526UL,0xAAAEL,0x3DDCL,0x72C8L,0x866CL,0UL,0x866CL},{0x663AL,0x3DDCL,0x3CD1L,0x3DDCL,0x663AL,65526UL,0x72C8L,65535UL},{0x663AL,65526UL,0x72C8L,65535UL,0x72C8L,65526UL,0x663AL,0x3DDCL},{0xAAAEL,0x3DDCL,0x72C8L,0x866CL,0UL,0x866CL,0x72C8L,0x3DDCL},{0x72C8L,65526UL,0x3CD1L,65535UL,0UL,0x3DDCL,0UL,65535UL},{0xAAAEL,65526UL,0xAAAEL,0x3DDCL,0x72C8L,0x866CL,0UL,0x866CL}};
    union U3 *l_565 = &g_566[2];
    union U0 *l_595[1][10][9] = {{{&g_600[5],&g_600[5],&g_607[5],&g_597,&g_606,&g_597,&g_607[5],&g_599[8][1],&g_599[8][1]},{&g_596,&g_603,&g_605,&g_601,&g_605,&g_603,&g_596,&g_596,&g_603},{&g_607[5],&g_597,&g_606,&g_597,&g_607[5],&g_600[5],&g_600[5],&g_607[5],&g_597},{&g_596,&g_605,&g_596,(void*)0,(void*)0,(void*)0,(void*)0,&g_596,&g_605},{&g_599[8][1],&g_602,&g_600[5],&g_606,&g_606,&g_600[5],&g_602,&g_599[8][1],&g_602},{&g_603,&g_601,(void*)0,(void*)0,&g_601,&g_603,(void*)0,&g_603,&g_601},{&g_597,&g_602,&g_602,&g_597,&g_599[8][1],&g_607[5],&g_599[8][1],&g_597,&g_602},{&g_605,&g_605,(void*)0,&g_601,&g_598[1][2][0],&g_601,(void*)0,&g_605,&g_605},{&g_602,&g_597,&g_599[8][1],&g_607[5],&g_599[8][1],&g_597,&g_602,&g_602,&g_597},{&g_601,&g_603,(void*)0,&g_603,&g_601,(void*)0,(void*)0,&g_601,&g_603}}};
    int *l_623 = &g_596.f2;
    unsigned l_660 = 0x55C8C7D0L;
    union U1 *l_802[2];
    int *l_843 = &g_597.f2;
    unsigned short l_850 = 65534UL;
    int *l_851 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_802[i] = (void*)0;
    if ((safe_lshift_func_uint16_t_u_u(g_375[2][3].f3, ((safe_lshift_func_int16_t_s_s(l_518[1][3], (g_322.f2 < 1L))) | (safe_lshift_func_int8_t_s_s(p_22, 4))))))
    {
        unsigned short l_529 = 1UL;
        union U4 *l_530 = &g_104;
        union U2 *l_557[10] = {&g_282,&g_282,&g_282,&g_282,&g_282,&g_282,&g_282,&g_282,&g_282,&g_282};
        int *l_560 = &g_82;
        int *l_575 = &g_33;
        int *l_624 = (void*)0;
        union U1 *l_678 = &g_369;
        unsigned short l_707 = 65535UL;
        int *l_715[5] = {&g_601.f2,&g_601.f2,&g_601.f2,&g_601.f2,&g_601.f2};
        int l_731 = 0L;
        unsigned l_763 = 1UL;
        int l_771[5][7] = {{1L,0xE58F8B51L,0xE58F8B51L,1L,0xE58F8B51L,0xE58F8B51L,1L},{1L,1L,1L,0L,4L,0L,1L},{1L,1L,(-5L),1L,1L,(-5L),1L},{4L,0L,1L,1L,1L,0L,4L},{0xE58F8B51L,1L,0xE58F8B51L,0xE58F8B51L,1L,0xE58F8B51L,0xE58F8B51L}};
        int l_797 = 1L;
        int i, j;
    }
    else
    {
        int *l_799 = &g_599[8][1].f2;
        union U1 **l_803 = (void*)0;
        union U1 **l_804 = &l_802[1];
        int *l_813[6][1][7] = {{{&g_597.f2,&g_607[5].f2,(void*)0,&g_607[5].f2,&g_597.f2,&g_607[5].f2,(void*)0}},{{&g_605.f2,&g_605.f2,(void*)0,&g_606.f2,&g_607[5].f2,&g_607[5].f2,&g_606.f2}},{{&g_33,&g_597.f2,&g_33,&g_607[5].f2,&g_33,&g_597.f2,&g_33}},{{&g_605.f2,&g_606.f2,&g_606.f2,&g_605.f2,&g_607[5].f2,(void*)0,(void*)0}},{{&g_597.f2,&g_597.f2,(void*)0,&g_597.f2,&g_597.f2,&g_597.f2,(void*)0}},{{&g_607[5].f2,&g_605.f2,&g_606.f2,&g_606.f2,&g_605.f2,&g_607[5].f2,(void*)0}}};
        unsigned short l_841 = 0x57BEL;
        unsigned short l_842 = 65526UL;
        int i, j, k;
        (*l_623) |= ((((func_60(l_799) > ((((&g_86 == (void*)0) != ((g_603.f3 > ((p_22 >= (safe_mul_func_int8_t_s_s(p_22, 0x94L))) != g_606.f2)) != (*l_799))) || 0x87F0D0FEL) <= g_600[5].f2)) <= (-2L)) <= g_104.f0) && (*p_24));

        (*l_804) = l_802[0];
        for (g_282.f1 = 2; (g_282.f1 < 7); g_282.f1 = safe_add_func_uint8_t_u_u(g_282.f1, 9))
        {
            union U2 *l_816 = &g_817[1][2];
            union U2 **l_815 = &l_816;
            int l_840 = 0x4F045915L;
            for (l_660 = 0; (l_660 <= 19); l_660 = safe_add_func_uint16_t_u_u(l_660, 1))
            {
                int *l_811 = &g_596.f2;
                unsigned char l_839 = 0UL;
                if ((*p_24))
                {
                    int l_814 = 0L;
                    for (g_606.f0 = 5; (g_606.f0 >= 0); g_606.f0 -= 1)
                    {
                        short l_812[10][5] = {{0L,(-1L),1L,1L,0L},{1L,0x6E9DL,0L,0L,0x6E9DL},{0x8362L,0x8CDCL,4L,0L,0x6E9DL},{(-1L),1L,0x8CDCL,0x18B9L,(-6L)},{0x8362L,0x18B9L,0L,(-1L),(-1L)},{4L,1L,4L,0L,0x588DL},{0x6E9DL,1L,0L,0x8362L,1L},{(-7L),0x18B9L,(-1L),0x8CDCL,0x6E9DL},{0L,1L,0L,1L,0L},{1L,0x8362L,4L,1L,0x8CDCL}};
                        union U2 **l_818 = &l_816;
                        int i, j;
                        (*l_811) = (safe_mod_func_uint16_t_u_u(l_814, 1UL));
                        (*l_623) = 0xF257852AL;
                        if ((*l_811))
                            break;
                    }
                    for (g_602.f3 = 0; (g_602.f3 == 1); g_602.f3 = safe_add_func_int16_t_s_s(g_602.f3, 1))
                    {
                        (*l_804) = &g_369;
                    }
                }
                else
                {
                    unsigned l_821 = 4294967295UL;
                    l_821 ^= (0x97170ADCL != 0L);
                }
                for (g_597.f0 = 0; (g_597.f0 >= 0); g_597.f0 -= 1)
                {
                    int *l_822 = &g_607[5].f2;
                    int **l_827 = &l_822;
                    union U2 **l_836 = (void*)0;
                    int i, j, k;
                    for (g_190.f3 = 1; (g_190.f3 >= 0); g_190.f3 -= 1)
                    {
                        int i, j, k;
                        (*l_799) = 0x2542881FL;
                        (*p_23) ^= ((l_518[(g_597.f0 + 4)][(g_597.f0 + 6)] != func_60(l_822)) >= (safe_mod_func_int16_t_s_s((safe_mul_func_int16_t_s_s((*l_811), p_22)), g_600[5].f4)));
                        (*l_799) = 0x47A0ED39L;
                    }

                    (*l_827) = l_813[(g_597.f0 + 4)][g_597.f0][(g_597.f0 + 1)];

                    ;
                    for (g_606.f0 = 0; (g_606.f0 >= 0); g_606.f0 -= 1)
                    {
                        int i, j, k;
                        (*p_24) = (safe_mul_func_int8_t_s_s(((((safe_unary_minus_func_int16_t_s((safe_unary_minus_func_int32_t_s((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int16_t_s_u(((void*)0 != l_836), (((((((safe_mod_func_uint16_t_u_u((0UL > (l_839 | l_840)), p_22)) && (*l_811)) <= (!(((*p_24) || 1L) != (*l_799)))) | 1UL) >= g_600[5].f0) < (*p_23)) & 0x6D73E3F4L))) > l_841), 7)))))) > g_282.f1) != (-8L)) != 0UL), (*l_811)));
                    }
                }
            }
            (*g_699) = (*g_699);
            (*l_799) = ((0xBEL != ((l_842 & l_840) | p_22)) | p_21);
            (*l_799) = (safe_mul_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(p_21, (safe_mul_func_int16_t_s_s((((*p_24) || l_850) == 0xDE728A92L), 0L)))), (-1L)));
        }


    }


    return l_851;


}







static char func_26(int * p_27, short p_28, int * p_29, unsigned p_30, int * p_31)
{
    unsigned l_166 = 0xC83248D3L;
    char l_175 = 9L;
    unsigned l_176 = 0UL;
    union U4 *l_207 = &g_104;
    union U4 **l_218[9] = {&g_103,&l_207,&g_103,&l_207,&g_103,&l_207,&g_103,&l_207,&g_103};
    union U4 ***l_217 = &l_218[3];
    int *l_248[9][2][4] = {{{&g_33,&g_82,&g_82,&g_82},{&g_82,&g_82,(void*)0,&g_82}},{{&g_82,&g_33,(void*)0,&g_33},{&g_82,(void*)0,&g_82,(void*)0}},{{&g_33,(void*)0,(void*)0,&g_33},{(void*)0,&g_33,&g_82,&g_82}},{{(void*)0,&g_82,(void*)0,&g_82},{&g_33,&g_82,&g_82,&g_82}},{{&g_82,&g_82,(void*)0,&g_82},{&g_82,&g_33,(void*)0,&g_33}},{{&g_82,(void*)0,&g_82,(void*)0},{&g_33,(void*)0,(void*)0,&g_33}},{{(void*)0,&g_33,&g_82,&g_82},{&g_33,(void*)0,&g_33,&g_82}},{{&g_82,(void*)0,&g_82,&g_82},{(void*)0,(void*)0,&g_82,(void*)0}},{{(void*)0,&g_82,&g_82,&g_82},{(void*)0,&g_33,&g_82,&g_82}}};
    union U3 *l_262[3][3][7] = {{{&g_190,(void*)0,&g_190,&g_190,&g_190,(void*)0,&g_190},{(void*)0,&g_190,&g_190,&g_190,&g_190,&g_190,&g_190},{&g_190,(void*)0,&g_190,&g_190,&g_190,&g_190,(void*)0}},{{&g_190,&g_190,&g_190,&g_190,(void*)0,&g_190,&g_190},{&g_190,&g_190,(void*)0,&g_190,(void*)0,&g_190,&g_190},{&g_190,&g_190,(void*)0,&g_190,&g_190,&g_190,(void*)0}},{{&g_190,&g_190,&g_190,&g_190,&g_190,&g_190,&g_190},{&g_190,(void*)0,&g_190,(void*)0,&g_190,(void*)0,(void*)0},{&g_190,&g_190,&g_190,&g_190,&g_190,(void*)0,&g_190}}};
    int l_295 = (-7L);
    unsigned l_296 = 0x1C5529E1L;
    union U1 *l_368 = &g_369;
    short l_372 = (-3L);
    union U0 *l_374 = &g_375[2][3];
    union U1 **l_443[4][3] = {{(void*)0,(void*)0,(void*)0},{&g_86,&g_86,&g_86},{(void*)0,(void*)0,(void*)0},{&g_86,&g_86,&g_86}};
    int **l_477[6] = {&g_117,&g_117,&g_117,&g_117,&g_117,&g_117};
    int i, j, k;
    for (g_82 = 0; (g_82 > (-28)); g_82 = safe_sub_func_uint32_t_u_u(g_82, 3))
    {
        union U4 **l_160 = &g_103;
        int l_167 = 0x97E5F227L;
        union U1 **l_174 = &g_86;
        int l_205 = (-1L);
        int l_234 = 0x66AC21E7L;
        unsigned short l_242 = 0xACADL;
        unsigned short l_276 = 0x953BL;
        union U4 ***l_395 = &l_160;
    }
    for (g_84.f1 = (-30); (g_84.f1 > 10); g_84.f1 = safe_add_func_uint16_t_u_u(g_84.f1, 1))
    {
        int l_427 = 1L;
        unsigned short l_430 = 1UL;
        union U2 *l_437 = &g_282;
        union U1 **l_444 = &l_368;
        union U4 **l_470[4];
        int i;
        for (i = 0; i < 4; i++)
            l_470[i] = &l_207;
        for (g_333.f1 = 2; (g_333.f1 < 39); g_333.f1 = safe_add_func_int8_t_s_s(g_333.f1, 8))
        {
            union U4 *l_439 = &g_104;
            l_430 |= (safe_sub_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(l_427, ((p_30 ^ (safe_sub_func_int8_t_s_s((p_30 | func_60(func_62(g_104.f0, &g_33))), (((*g_320) == (*g_320)) <= p_28)))) ^ g_84.f1))), p_30));
            for (l_430 = 0; (l_430 < 25); l_430 = safe_add_func_uint16_t_u_u(l_430, 5))
            {
                union U4 *l_440 = &g_104;
                (*p_31) &= ((g_333.f2 ^ 0L) | p_30);
                for (l_176 = 0; (l_176 <= 44); l_176++)
                {
                    union U2 **l_438 = &l_437;
                    (*l_438) = l_437;
                }
                l_440 = l_439;
                for (g_190.f0 = 0; (g_190.f0 <= 2); g_190.f0 += 1)
                {
                    int i, j, k;
                    g_32[(g_190.f0 + 1)][(g_190.f0 + 1)][g_190.f0] = g_32[g_190.f0][(g_190.f0 + 3)][g_190.f0];
                    if ((*g_117))
                        break;
                }
            }
            for (l_166 = 29; (l_166 != 6); l_166 = safe_sub_func_int32_t_s_s(l_166, 1))
            {
                (*p_31) = (*p_31);
                return p_30;
            }
        }

        if ((l_443[3][1] == l_444))
        {
            short l_447 = 0x01D0L;
            (*p_31) ^= ((void*)0 == &g_321);
            for (g_190.f3 = 0; (g_190.f3 < (-22)); g_190.f3 = safe_sub_func_uint16_t_u_u(g_190.f3, 3))
            {
                int *l_456 = &l_427;
                l_447 &= (*g_117);
                if ((*g_117))
                {
                    if ((*p_31))
                        break;
                }
                else
                {
                    int l_455 = 8L;
                    (*g_117) = (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0x7FL, 2)), p_30));
                    l_455 = ((void*)0 != g_452[1][1]);
                }
                if (func_60(func_62(l_430, l_456)))
                {
                    int **l_457 = &g_32[1][1][2];
                    (*l_457) = func_62(g_190.f3, l_456);


                }
                else
                {
                    return p_28;
                }


                return p_28;


            }

        }
        else
        {
            unsigned l_481 = 0x7E69F22CL;
            short l_490 = 0xD867L;
            for (g_333.f1 = 0; (g_333.f1 != 30); ++g_333.f1)
            {
                int l_469 = 8L;
                int *l_478 = &g_82;
                union U4 *l_497 = (void*)0;
            }
        }
    }

    return p_30;
}







static short func_51(int * p_52)
{
    int *l_54 = (void*)0;
    int *l_55 = &g_33;
    union U4 **l_154 = &g_103;
    union U4 ***l_153 = &l_154;
    int l_155 = 0L;
    (*l_55) = 1L;
    for (g_33 = 0; (g_33 > 28); g_33++)
    {
        unsigned short l_150 = 65535UL;
        l_155 &= ((((safe_mod_func_uint8_t_u_u(((~func_60(func_62(g_25, &g_33))) == l_150), ((safe_rshift_func_int8_t_s_u(l_150, (((void*)0 == l_153) >= l_150))) | 0x21F5EDDBL))) > l_150) || l_150) & l_150);
        (*g_117) = l_150;
        (*g_117) &= (-1L);
    }
    (*l_154) = &g_104;
    return (*l_55);
}







static int func_60(int * p_61)
{
    union U1 *l_147[9] = {&g_84,(void*)0,&g_84,&g_84,(void*)0,&g_84,&g_84,(void*)0,&g_84};
    int **l_149[5];
    int i;
    for (i = 0; i < 5; i++)
        l_149[i] = (void*)0;
    (*g_117) = (*p_61);
    (*g_117) = (safe_mul_func_uint16_t_u_u((&g_84 == l_147[0]), (safe_unary_minus_func_int32_t_s(((&p_61 == l_149[1]) < (0x2160L | (&l_149[0] != (void*)0)))))));
    return (*p_61);
}







static int * func_62(unsigned char p_63, int * p_64)
{
    unsigned l_71 = 0UL;
    int *l_72 = (void*)0;
    int **l_143 = &g_117;
    int ***l_142[3][10][8] = {{{&l_143,(void*)0,(void*)0,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,(void*)0,&l_143,&l_143,(void*)0},{&l_143,&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143,(void*)0},{&l_143,&l_143,&l_143,&l_143,(void*)0,&l_143,(void*)0,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143,&l_143,(void*)0},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{(void*)0,&l_143,&l_143,&l_143,&l_143,(void*)0,&l_143,(void*)0},{&l_143,(void*)0,(void*)0,&l_143,&l_143,(void*)0,&l_143,&l_143},{(void*)0,(void*)0,&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143}},{{&l_143,&l_143,&l_143,&l_143,(void*)0,&l_143,&l_143,&l_143},{(void*)0,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{(void*)0,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,(void*)0,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,(void*)0,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,(void*)0},{&l_143,&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,(void*)0,(void*)0,&l_143,&l_143,&l_143,(void*)0}},{{&l_143,&l_143,&l_143,(void*)0,&l_143,&l_143,(void*)0,&l_143},{(void*)0,&l_143,&l_143,&l_143,(void*)0,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,(void*)0,(void*)0,&l_143,&l_143,&l_143},{(void*)0,&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143,(void*)0},{&l_143,(void*)0,&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,(void*)0,&l_143,&l_143,&l_143,(void*)0,&l_143},{&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143,&l_143,&l_143},{&l_143,&l_143,&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143},{&l_143,(void*)0,&l_143,&l_143,&l_143,&l_143,&l_143,(void*)0}}};
    int **l_144[8][6][2] = {{{&g_32[3][4][0],&l_72},{&l_72,&g_32[3][4][0]},{&g_117,(void*)0},{&g_117,&g_32[3][4][0]},{&l_72,&l_72},{&g_32[3][4][0],&g_117}},{{(void*)0,&g_117},{&g_32[3][4][0],&l_72},{&l_72,&g_32[3][4][0]},{&g_117,(void*)0},{&g_117,&g_32[3][4][0]},{&l_72,&l_72}},{{&g_32[3][4][0],&g_117},{(void*)0,&g_117},{&g_32[3][4][0],&l_72},{&l_72,&g_32[3][4][0]},{(void*)0,&g_32[3][4][0]},{(void*)0,&g_117}},{{&g_117,&g_117},{&g_117,(void*)0},{&g_32[3][4][0],(void*)0},{&g_117,&g_117},{&g_117,&g_117},{(void*)0,&g_32[3][4][0]}},{{(void*)0,&g_117},{&g_117,&g_117},{&g_117,(void*)0},{&g_32[3][4][0],(void*)0},{&g_117,&g_117},{&g_117,&g_117}},{{(void*)0,&g_32[3][4][0]},{(void*)0,&g_117},{&g_117,&g_117},{&g_117,(void*)0},{&g_32[3][4][0],(void*)0},{&g_117,&g_117}},{{&g_117,&g_117},{(void*)0,&g_32[3][4][0]},{(void*)0,&g_117},{&g_117,&g_117},{&g_117,(void*)0},{&g_32[3][4][0],(void*)0}},{{&g_117,&g_117},{&g_117,&g_117},{(void*)0,&g_32[3][4][0]},{(void*)0,&g_117},{&g_117,&g_117},{&g_117,(void*)0}}};
    int i, j, k;
    l_144[7][2][1] = func_65(l_71, l_72, &g_32[1][1][2], g_25, ((l_71 == func_73(p_64, &g_33, (&g_33 == &g_33), l_71, l_72)) != 4294967294UL));
    return p_64;


}







static int ** func_65(unsigned char p_66, int * p_67, int ** p_68, char p_69, unsigned short p_70)
{
    union U1 *l_83[2][6] = {{(void*)0,&g_84,(void*)0,(void*)0,&g_84,(void*)0},{(void*)0,&g_84,(void*)0,(void*)0,&g_84,(void*)0}};
    union U1 **l_85[7][7] = {{(void*)0,&l_83[1][4],&l_83[1][0],&l_83[0][5],&l_83[1][4],&l_83[0][5],&l_83[1][0]},{&l_83[1][4],&l_83[1][4],&l_83[0][3],&l_83[1][0],&l_83[1][0],&l_83[0][3],&l_83[1][0]},{&l_83[1][0],&l_83[1][0],&l_83[1][0],&l_83[1][0],&l_83[0][5],&l_83[0][3],&l_83[0][5]},{&l_83[0][3],(void*)0,(void*)0,(void*)0,(void*)0,&l_83[0][3],&l_83[1][0]},{(void*)0,&l_83[0][5],&l_83[1][0],&l_83[1][0],&l_83[1][0],&l_83[1][0],&l_83[0][5]},{(void*)0,&l_83[1][0],&l_83[0][3],(void*)0,(void*)0,(void*)0,(void*)0},{&l_83[0][3],&l_83[0][5],&l_83[0][3],(void*)0,&l_83[0][5],&l_83[1][0],&l_83[1][0]}};
    int *l_89 = &g_82;
    int l_94[4];
    unsigned l_95 = 0x5C63B6D6L;
    unsigned l_107[2][5][7];
    union U4 *l_128 = &g_104;
    unsigned char l_135 = 249UL;
    int i, j, k;
    for (i = 0; i < 4; i++)
        l_94[i] = 1L;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
                l_107[i][j][k] = 4294967293UL;
        }
    }
    g_86 = l_83[1][0];
    (*l_89) = (g_33 && ((&g_33 == (void*)0) ^ ((safe_lshift_func_uint16_t_u_u(func_73(&g_33, (*p_68), func_73(&g_33, l_89, ((safe_mod_func_int8_t_s_s(((((((safe_add_func_int8_t_s_s((~0x50L), ((+0xB8L) == g_33))) >= 0xA7L) > (*l_89)) ^ g_33) | l_94[1]) >= p_66), 1L)) >= 0L), (*l_89), (*p_68)), l_95, &g_33), g_33)) < g_25)));
    l_94[3] &= (*l_89);
    return &g_117;


}







static unsigned char func_73(int * p_74, int * p_75, char p_76, int p_77, int * p_78)
{
    unsigned short l_79[9];
    int *l_80 = (void*)0;
    int *l_81 = &g_82;
    int i;
    for (i = 0; i < 9; i++)
        l_79[i] = 0x1BECL;
    (*l_81) = l_79[3];
    return g_33;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_33, "g_33", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84.f1, "g_84.f1", print_hash_value);
    transparent_crc(g_84.f2, "g_84.f2", print_hash_value);
    transparent_crc(g_104.f0, "g_104.f0", print_hash_value);
    transparent_crc(g_190.f0, "g_190.f0", print_hash_value);
    transparent_crc(g_190.f2, "g_190.f2", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_277[i], "g_277[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_282.f1, "g_282.f1", print_hash_value);
    transparent_crc(g_282.f2, "g_282.f2", print_hash_value);
    transparent_crc(g_322.f0, "g_322.f0", print_hash_value);
    transparent_crc(g_322.f1, "g_322.f1", print_hash_value);
    transparent_crc(g_322.f2, "g_322.f2", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_351, "g_351", print_hash_value);
    transparent_crc(g_369.f0, "g_369.f0", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_375[i][j].f0, "g_375[i][j].f0", print_hash_value);
            transparent_crc(g_375[i][j].f1, "g_375[i][j].f1", print_hash_value);
            transparent_crc(g_375[i][j].f2, "g_375[i][j].f2", print_hash_value);
            transparent_crc(g_375[i][j].f3, "g_375[i][j].f3", print_hash_value);
            transparent_crc(g_375[i][j].f4, "g_375[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_566[i].f0, "g_566[i].f0", print_hash_value);
        transparent_crc(g_566[i].f2, "g_566[i].f2", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_596.f0, "g_596.f0", print_hash_value);
    transparent_crc(g_596.f1, "g_596.f1", print_hash_value);
    transparent_crc(g_596.f2, "g_596.f2", print_hash_value);
    transparent_crc(g_596.f3, "g_596.f3", print_hash_value);
    transparent_crc(g_596.f4, "g_596.f4", print_hash_value);
    transparent_crc(g_597.f0, "g_597.f0", print_hash_value);
    transparent_crc(g_597.f1, "g_597.f1", print_hash_value);
    transparent_crc(g_597.f2, "g_597.f2", print_hash_value);
    transparent_crc(g_597.f3, "g_597.f3", print_hash_value);
    transparent_crc(g_597.f4, "g_597.f4", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_598[i][j][k].f0, "g_598[i][j][k].f0", print_hash_value);
                transparent_crc(g_598[i][j][k].f1, "g_598[i][j][k].f1", print_hash_value);
                transparent_crc(g_598[i][j][k].f2, "g_598[i][j][k].f2", print_hash_value);
                transparent_crc(g_598[i][j][k].f3, "g_598[i][j][k].f3", print_hash_value);
                transparent_crc(g_598[i][j][k].f4, "g_598[i][j][k].f4", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_599[i][j].f0, "g_599[i][j].f0", print_hash_value);
            transparent_crc(g_599[i][j].f1, "g_599[i][j].f1", print_hash_value);
            transparent_crc(g_599[i][j].f2, "g_599[i][j].f2", print_hash_value);
            transparent_crc(g_599[i][j].f3, "g_599[i][j].f3", print_hash_value);
            transparent_crc(g_599[i][j].f4, "g_599[i][j].f4", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_600[i].f0, "g_600[i].f0", print_hash_value);
        transparent_crc(g_600[i].f1, "g_600[i].f1", print_hash_value);
        transparent_crc(g_600[i].f2, "g_600[i].f2", print_hash_value);
        transparent_crc(g_600[i].f3, "g_600[i].f3", print_hash_value);
        transparent_crc(g_600[i].f4, "g_600[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_601.f0, "g_601.f0", print_hash_value);
    transparent_crc(g_601.f1, "g_601.f1", print_hash_value);
    transparent_crc(g_601.f2, "g_601.f2", print_hash_value);
    transparent_crc(g_601.f3, "g_601.f3", print_hash_value);
    transparent_crc(g_601.f4, "g_601.f4", print_hash_value);
    transparent_crc(g_602.f3, "g_602.f3", print_hash_value);
    transparent_crc(g_603.f0, "g_603.f0", print_hash_value);
    transparent_crc(g_603.f1, "g_603.f1", print_hash_value);
    transparent_crc(g_603.f2, "g_603.f2", print_hash_value);
    transparent_crc(g_603.f3, "g_603.f3", print_hash_value);
    transparent_crc(g_603.f4, "g_603.f4", print_hash_value);
    transparent_crc(g_604.f0, "g_604.f0", print_hash_value);
    transparent_crc(g_604.f1, "g_604.f1", print_hash_value);
    transparent_crc(g_604.f2, "g_604.f2", print_hash_value);
    transparent_crc(g_604.f3, "g_604.f3", print_hash_value);
    transparent_crc(g_604.f4, "g_604.f4", print_hash_value);
    transparent_crc(g_605.f0, "g_605.f0", print_hash_value);
    transparent_crc(g_605.f1, "g_605.f1", print_hash_value);
    transparent_crc(g_605.f2, "g_605.f2", print_hash_value);
    transparent_crc(g_605.f3, "g_605.f3", print_hash_value);
    transparent_crc(g_605.f4, "g_605.f4", print_hash_value);
    transparent_crc(g_606.f0, "g_606.f0", print_hash_value);
    transparent_crc(g_606.f1, "g_606.f1", print_hash_value);
    transparent_crc(g_606.f2, "g_606.f2", print_hash_value);
    transparent_crc(g_606.f3, "g_606.f3", print_hash_value);
    transparent_crc(g_606.f4, "g_606.f4", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_607[i].f0, "g_607[i].f0", print_hash_value);
        transparent_crc(g_607[i].f1, "g_607[i].f1", print_hash_value);
        transparent_crc(g_607[i].f2, "g_607[i].f2", print_hash_value);
        transparent_crc(g_607[i].f3, "g_607[i].f3", print_hash_value);
        transparent_crc(g_607[i].f4, "g_607[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 4; j++)
        {
            transparent_crc(g_817[i][j].f0, "g_817[i][j].f0", print_hash_value);
            transparent_crc(g_817[i][j].f1, "g_817[i][j].f1", print_hash_value);
            transparent_crc(g_817[i][j].f2, "g_817[i][j].f2", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_872[i].f0, "g_872[i].f0", print_hash_value);
        transparent_crc(g_872[i].f1, "g_872[i].f1", print_hash_value);
        transparent_crc(g_872[i].f2, "g_872[i].f2", print_hash_value);
        transparent_crc(g_872[i].f3, "g_872[i].f3", print_hash_value);
        transparent_crc(g_872[i].f4, "g_872[i].f4", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_878.f0, "g_878.f0", print_hash_value);
    transparent_crc(g_878.f1, "g_878.f1", print_hash_value);
    transparent_crc(g_878.f2, "g_878.f2", print_hash_value);
    transparent_crc(g_878.f3, "g_878.f3", print_hash_value);
    transparent_crc(g_878.f4, "g_878.f4", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
