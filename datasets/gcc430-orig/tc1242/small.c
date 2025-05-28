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
   volatile long long f1;
   char f2;
};

union U2 {
   volatile unsigned f0;
   unsigned char f1;
   unsigned long long f2;
};

union U3 {
   short f0;
   char * f1;
};

union U4 {
   long long f0;
   char f1;
};


static char g_3 = 0L;
static volatile char g_5 = 0xFEL;
static volatile char *g_4[1] = {&g_5};
static int g_8 = 0x78555145L;
static int g_9 = (-1L);
static int g_10 = 0x00D5493EL;
static unsigned g_17 = 0xAA12AFD7L;
static unsigned *g_54[9][7][4] = {{{&g_17,&g_17,(void*)0,(void*)0},{&g_17,(void*)0,&g_17,&g_17},{&g_17,(void*)0,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17},{&g_17,(void*)0,&g_17,&g_17},{&g_17,(void*)0,&g_17,(void*)0}},{{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0},{&g_17,(void*)0,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,(void*)0,&g_17}},{{&g_17,(void*)0,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17},{(void*)0,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0},{(void*)0,(void*)0,(void*)0,&g_17},{&g_17,&g_17,(void*)0,&g_17}},{{(void*)0,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17},{(void*)0,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,(void*)0,&g_17},{&g_17,(void*)0,&g_17,(void*)0}},{{&g_17,&g_17,&g_17,&g_17},{(void*)0,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0},{(void*)0,(void*)0,(void*)0,&g_17},{&g_17,&g_17,(void*)0,&g_17},{(void*)0,&g_17,&g_17,&g_17}},{{&g_17,&g_17,(void*)0,&g_17},{(void*)0,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17},{&g_17,(void*)0,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17}},{{&g_17,&g_17,&g_17,(void*)0},{(void*)0,&g_17,(void*)0,&g_17},{&g_17,&g_17,&g_17,&g_17},{(void*)0,(void*)0,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0},{(void*)0,&g_17,&g_17,(void*)0},{&g_17,&g_17,(void*)0,&g_17}},{{(void*)0,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17},{&g_17,(void*)0,&g_17,&g_17},{&g_17,&g_17,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0}},{{(void*)0,&g_17,(void*)0,&g_17},{&g_17,&g_17,&g_17,&g_17},{(void*)0,(void*)0,&g_17,&g_17},{&g_17,&g_17,&g_17,(void*)0},{&g_17,&g_17,&g_17,&g_17},{(void*)0,(void*)0,(void*)0,&g_17},{(void*)0,&g_17,&g_17,&g_17}}};
static unsigned **g_53[10] = {&g_54[6][3][1],&g_54[6][3][1],&g_54[6][3][1],&g_54[6][3][1],&g_54[6][3][1],&g_54[6][3][1],&g_54[6][3][1],&g_54[6][3][1],&g_54[6][3][1],&g_54[6][3][1]};
static int g_62 = 0x0DA8F9E1L;
static unsigned short g_77 = 0xB28CL;
static int g_93[4][7] = {{0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL},{0L,0L,0L,0L,0L,0L,0L},{0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL,0xDE0F7F7AL},{0L,0L,0L,0L,0L,0L,0L}};
static char g_109 = 0L;
static char *g_108[5] = {&g_3,&g_3,&g_3,&g_3,&g_3};
static union U3 g_112[2][8][3] = {{{{0L},{-1L},{0x045BL}},{{0L},{0L},{-1L}},{{-3L},{-1L},{-1L}},{{-1L},{1L},{0x045BL}},{{-3L},{1L},{-3L}},{{0L},{-1L},{0x045BL}},{{0L},{0L},{-1L}},{{-3L},{-1L},{-1L}}},{{{-1L},{1L},{0x045BL}},{{-3L},{1L},{-3L}},{{0L},{-1L},{0x045BL}},{{0L},{0L},{-1L}},{{1L},{0x045BL},{0x045BL}},{{0x045BL},{-1L},{0L}},{{1L},{-1L},{1L}},{{-3L},{0x045BL},{0L}}}};
static unsigned char g_133 = 0xC2L;
static unsigned *g_141 = (void*)0;
static volatile int **g_146 = (void*)0;
static unsigned g_153[1][7] = {{0UL,0UL,0UL,0UL,0UL,0UL,0UL}};
static unsigned long long g_157 = 0x7A882262B2D5520BLL;
static volatile union U2 g_177 = {4294967292UL};
static volatile union U2 *g_176 = &g_177;
static int *g_188 = (void*)0;
static int *g_189 = &g_62;
static union U3 *g_206[6] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
static union U3 **g_205 = &g_206[5];
static union U4 g_207 = {0xB666E97522EFC536LL};
static unsigned g_212 = 4294967291UL;
static unsigned g_242 = 0UL;
static unsigned long long *g_273 = (void*)0;
static union U4 g_335[2][5][6] = {{{{0xFAFBCD1A0883FFE7LL},{0L},{0xFAFBCD1A0883FFE7LL},{0x4BC26CEEF8D5CA3DLL},{0xFAFBCD1A0883FFE7LL},{0L}},{{-5L},{0L},{0xB8A1AF33EE64F9EDLL},{0L},{-5L},{0L}},{{0xFAFBCD1A0883FFE7LL},{0x4BC26CEEF8D5CA3DLL},{0xFAFBCD1A0883FFE7LL},{0L},{0xFAFBCD1A0883FFE7LL},{0x4BC26CEEF8D5CA3DLL}},{{-5L},{0x4BC26CEEF8D5CA3DLL},{0xB8A1AF33EE64F9EDLL},{0x4BC26CEEF8D5CA3DLL},{-5L},{0x4BC26CEEF8D5CA3DLL}},{{0xFAFBCD1A0883FFE7LL},{0L},{0xFAFBCD1A0883FFE7LL},{0x4BC26CEEF8D5CA3DLL},{0xFAFBCD1A0883FFE7LL},{0L}}},{{{-5L},{0L},{0xB8A1AF33EE64F9EDLL},{0L},{-5L},{0L}},{{0xFAFBCD1A0883FFE7LL},{0x4BC26CEEF8D5CA3DLL},{0xFAFBCD1A0883FFE7LL},{0L},{0xFAFBCD1A0883FFE7LL},{0x4BC26CEEF8D5CA3DLL}},{{-5L},{0x4BC26CEEF8D5CA3DLL},{0xB8A1AF33EE64F9EDLL},{0x4BC26CEEF8D5CA3DLL},{-5L},{0x4BC26CEEF8D5CA3DLL}},{{0xFAFBCD1A0883FFE7LL},{0L},{0xFAFBCD1A0883FFE7LL},{0x4BC26CEEF8D5CA3DLL},{0xFAFBCD1A0883FFE7LL},{0L}},{{-5L},{0L},{0xB8A1AF33EE64F9EDLL},{0L},{-5L},{0L}}}};
static union U4 *g_334[1][4][8] = {{{&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5]},{&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5]},{&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5]},{&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5],&g_335[0][0][1],&g_335[1][0][5]}}};
static union U3 **g_359[4] = {&g_206[5],&g_206[5],&g_206[5],&g_206[5]};
static short *g_364 = &g_112[1][4][1].f0;
static short **g_363 = &g_364;
static char g_376 = 0x0DL;
static volatile unsigned char **g_389 = (void*)0;
static volatile unsigned char ***g_388 = &g_389;
static union U4 **g_505[9][3] = {{&g_334[0][0][2],&g_334[0][0][1],&g_334[0][0][2]},{&g_334[0][0][2],&g_334[0][0][1],&g_334[0][0][2]},{&g_334[0][0][2],&g_334[0][0][1],&g_334[0][0][2]},{&g_334[0][0][2],&g_334[0][0][1],&g_334[0][0][2]},{&g_334[0][0][2],&g_334[0][0][1],&g_334[0][0][2]},{&g_334[0][0][2],&g_334[0][0][1],&g_334[0][0][2]},{&g_334[0][0][2],&g_334[0][0][1],&g_334[0][0][2]},{&g_334[0][0][2],&g_334[0][0][1],&g_334[0][0][2]},{&g_334[0][0][2],&g_334[0][0][1],&g_334[0][0][2]}};
static short g_544 = 0x09DFL;
static volatile long long g_577 = 8L;
static union U0 g_585 = {0UL};
static union U0 *g_584 = &g_585;
static int **g_663[9] = {&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189,&g_189};
static union U2 g_676[1] = {{1UL}};
static union U2 *g_678[9][6] = {{&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0]},{&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0]},{&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0]},{&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0]},{&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0]},{&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0]},{&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0],&g_676[0]},{(void*)0,&g_676[0],&g_676[0],(void*)0,&g_676[0],&g_676[0]},{&g_676[0],(void*)0,&g_676[0],(void*)0,&g_676[0],&g_676[0]}};
static volatile short g_683 = 0L;
static union U2 g_691 = {3UL};
static long long g_759 = (-1L);
static short g_769 = (-1L);
static int g_820 = (-2L);
static volatile short g_832[3] = {1L,1L,1L};
static char **g_862 = &g_108[4];
static char **g_864 = (void*)0;
static int g_886 = (-9L);



static int func_1(void);
static char ** func_11(unsigned p_12, char * p_13, int * p_14);
static int * func_19(union U4 p_20, unsigned long long p_21, unsigned * p_22);
static unsigned long long func_31(unsigned p_32, int p_33, unsigned ** p_34);
static unsigned ** func_35(union U4 p_36, unsigned long long p_37, unsigned long long p_38, int p_39, long long p_40);
static union U4 func_41(char p_42, char * p_43, int p_44, unsigned * p_45, union U3 p_46);
static char * func_48(unsigned ** p_49, unsigned p_50, unsigned * p_51, unsigned p_52);
static unsigned short func_71(short p_72, unsigned short p_73);
static char func_89(unsigned p_90);
static int func_94(unsigned long long p_95, union U4 p_96, char p_97, int p_98, unsigned * p_99);
static int func_1(void)
{
    char *l_2 = &g_3;
    int *l_6 = (void*)0;
    int *l_7 = &g_8;
    unsigned char l_840 = 0x0DL;
    int l_850 = 5L;
    int l_853 = 8L;
    short l_894 = 0xDD73L;
    union U3 l_897 = {0L};
    int **l_899 = &g_189;
    (*l_7) = ((l_2 != l_2) || (g_4[0] != l_2));
    for (g_8 = 0; (g_8 >= 0); g_8 -= 1)
    {
        unsigned l_842 = 0xBB325285L;
        int l_846 = 0xC2114F75L;
        int l_890 = (-1L);
        char *l_895 = &g_207.f1;
        unsigned *l_896[7];
        int **l_898 = &g_188;
        int i;
        for (i = 0; i < 7; i++)
            l_896[i] = &g_153[0][1];
        for (g_3 = 0; (g_3 >= 0); g_3 -= 1)
        {
            int *l_844 = (void*)0;
            int l_852 = (-9L);
            int l_885[9][8][3] = {{{0xA1B5D42CL,(-6L),0xA1B5D42CL},{0x439256F3L,1L,0x209FE9D5L},{(-3L),(-10L),0x73CCCE19L},{0x5DF4BA37L,0x165D3C13L,0L},{0xD77D70FEL,0xC60D96F8L,0x518980BBL},{0x5DF4BA37L,0x5DF4BA37L,0x0331A780L},{(-3L),0xB3EFED7FL,0x2F40E9DBL},{0x439256F3L,0x209FE9D5L,0x165D3C13L}},{{0xA1B5D42CL,0xC60D96F8L,(-1L)},{1L,0x439256F3L,0x165D3C13L},{0L,(-10L),0x2F40E9DBL},{0x73B998EAL,1L,0x0331A780L},{(-1L),(-6L),0x518980BBL},{1L,0x73B998EAL,0L},{0x73CCCE19L,(-6L),0x73CCCE19L},{0x439256F3L,1L,0x209FE9D5L}},{{0x2ADB106EL,(-10L),0xA1B5D42CL},{0x5DF4BA37L,0x439256F3L,0L},{(-2L),0xC60D96F8L,0xB0F96CD3L},{0x5DF4BA37L,0x209FE9D5L,0x0331A780L},{0x2ADB106EL,0xB3EFED7FL,7L},{0x439256F3L,0x5DF4BA37L,0x165D3C13L},{0x73CCCE19L,0xC60D96F8L,0L},{1L,0x165D3C13L,0L}},{{0x2ADB106EL,(-10L),(-1L)},{(-1L),0x73B998EAL,7L},{(-3L),0xC60D96F8L,1L},{0x73B998EAL,0x0331A780L,0x209FE9D5L},{7L,0xC60D96F8L,7L},{(-1L),0x73B998EAL,1L},{(-2L),(-10L),0x2F40E9DBL},{1L,0L,0x209FE9D5L}},{{0x518980BBL,0xB3EFED7FL,0x74126E97L},{1L,1L,7L},{(-2L),0L,0L},{(-1L),1L,0L},{7L,0xB3EFED7FL,0x2ADB106EL},{0x73B998EAL,(-1L),0L},{(-3L),(-10L),0L},{(-1L),0x035980FFL,7L}},{{0x2ADB106EL,0xC60D96F8L,0x74126E97L},{0x73B998EAL,(-1L),0x209FE9D5L},{0x2F40E9DBL,0xC60D96F8L,0x2F40E9DBL},{(-1L),0x035980FFL,1L},{0xD77D70FEL,(-10L),7L},{1L,(-1L),0x209FE9D5L},{0xB0F96CD3L,0xB3EFED7FL,1L},{1L,1L,7L}},{{0xD77D70FEL,0L,(-1L)},{(-1L),1L,0L},{0x2F40E9DBL,0xB3EFED7FL,(-3L)},{0x73B998EAL,0L,0L},{0x2ADB106EL,(-10L),(-1L)},{(-1L),0x73B998EAL,7L},{(-3L),0xC60D96F8L,1L},{0x73B998EAL,0x0331A780L,0x0331A780L}},{{0xD77D70FEL,1L,0xD77D70FEL},{0x73B998EAL,0x439256F3L,7L},{0x73CCCE19L,0xB3EFED7FL,(-2L)},{0x5E02015BL,0x035980FFL,0x0331A780L},{7L,(-10L),(-1L)},{0x5E02015BL,0x5E02015BL,0x209FE9D5L},{0x73CCCE19L,(-10L),0xB0F96CD3L},{0x73B998EAL,7L,0x035980FFL}},{{0xD77D70FEL,(-10L),0x74126E97L},{0x439256F3L,0x73B998EAL,0x035980FFL},{1L,0xB3EFED7FL,0xB0F96CD3L},{(-1L),0x165D3C13L,0x209FE9D5L},{0x74126E97L,1L,(-1L)},{0x439256F3L,(-1L),0x0331A780L},{(-2L),1L,(-2L)},{0x73B998EAL,0x165D3C13L,7L}}};
            int **l_891 = (void*)0;
            int **l_892 = &g_188;
            int **l_893[8] = {&l_7,&l_7,&l_844,&l_7,&l_7,&l_844,&l_7,&l_7};
            int i, j, k;
            for (g_9 = 0; (g_9 <= 0); g_9 += 1)
            {
                char *l_18 = (void*)0;
                union U4 l_23 = {1L};
                for (g_10 = 0; (g_10 <= 0); g_10 += 1)
                {
                    unsigned *l_15 = (void*)0;
                    unsigned *l_16 = &g_17;
                    unsigned **l_24 = &l_15;
                    char **l_837 = &g_108[1];
                    char ***l_836 = &l_837;
                    int l_843 = 0x167B4D11L;
                    (*l_836) = func_11(((*l_16) = g_10), l_18, func_19(l_23, g_8, ((*l_24) = l_16)));

                    ;
                    ;
                    ;
                    for (l_23.f0 = 0; (l_23.f0 <= 0); l_23.f0 += 1)
                    {
                        int l_838 = 0x0AE6FD60L;
                        int *l_839 = &g_93[3][0];
                        int *l_841[1][7][2] = {{{&g_9,(void*)0},{(void*)0,&g_9},{&g_10,&l_838},{&g_10,&g_9},{(void*)0,(void*)0},{&g_9,&g_10},{&l_838,&g_10}}};
                        int **l_845 = &l_6;
                        int i, j, k;
                        l_843 ^= (l_842 = (l_840 = ((*l_839) = ((*g_189) = ((*g_273) >= ((g_207.f0 && ((l_838 > l_838) || 0x2D705C34L)) < g_8))))));
                        (*l_845) = l_844;

                        ;
                    }
                    if (l_846)
                        continue;
                }
            }
            for (g_77 = 0; (g_77 <= 0); g_77 += 1)
            {
                int *l_849 = &g_93[3][4];
                int l_854 = 0x531692A7L;
                int l_855 = 0x131F45A0L;
                unsigned l_856 = 4294967294UL;
                char **l_863 = &g_108[3];
                unsigned *l_887[1][1];
                unsigned char l_888[5][3] = {{0x9BL,255UL,0x9BL},{0x9BL,0x32L,255UL},{0x32L,0x9BL,0x9BL},{255UL,0x9BL,0xD8L},{255UL,0x32L,254UL}};
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_887[i][j] = &g_17;
                }
                for (l_840 = 0; (l_840 <= 5); l_840 += 1)
                {
                    short l_851 = 0x5135L;
                    union U4 l_874 = {1L};
                    for (g_207.f0 = 0; (g_207.f0 >= 0); g_207.f0 -= 1)
                    {
                        int *l_847 = &g_93[2][3];
                        int **l_848[7][6] = {{&g_188,&l_844,&l_844,&g_188,&l_6,&g_189},{&l_847,&l_844,&l_6,&l_844,(void*)0,&l_847},{&g_189,&l_847,&l_7,&g_189,(void*)0,(void*)0},{&l_6,&l_847,&l_847,&l_6,(void*)0,&l_7},{&l_844,&l_847,(void*)0,&l_844,(void*)0,&l_847},{&g_189,&l_847,&l_7,&g_189,(void*)0,(void*)0},{&l_6,&l_847,&l_847,&l_6,(void*)0,&l_7}};
                        char **l_861 = &g_108[3];
                        char ***l_860[4][7] = {{&l_861,&l_861,(void*)0,&l_861,(void*)0,&l_861,&l_861},{&l_861,&l_861,&l_861,(void*)0,&l_861,(void*)0,&l_861},{&l_861,&l_861,(void*)0,&l_861,&l_861,(void*)0,&l_861},{&l_861,&l_861,&l_861,&l_861,(void*)0,&l_861,&l_861}};
                        unsigned long long *l_871 = (void*)0;
                        unsigned long long *l_872 = &g_691.f2;
                        unsigned long long *l_873 = &g_157;
                        long long *l_884 = (void*)0;
                        long long **l_883 = &l_884;
                        short *l_889 = &g_544;
                        int i, j;
                        l_849 = l_847;
                        l_856--;
                        (*g_189) = (safe_unary_minus_func_uint64_t_u(((g_862 = &g_108[0]) != (g_864 = (l_863 = &g_108[4])))));

                        ;
                        l_890 |= (!(safe_lshift_func_int16_t_s_s(((*l_889) = ((**g_363) = ((*l_847) > (l_846 || ((safe_mul_func_int8_t_s_s((**g_864), func_94(((*l_873) = ((*l_872) = (safe_sub_func_uint8_t_u_u(255UL, l_842)))), l_874, (safe_mul_func_uint8_t_u_u(func_94((safe_lshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_u((safe_sub_func_uint64_t_u_u((&g_577 == ((*l_883) = &g_759)), l_885[0][3][0])), l_846)), g_207.f0)), l_874, g_886, (*g_189), l_887[0][0]), (**g_862))), l_888[2][2], l_844))) > 0x0EB739A4L))))), g_335[1][3][5].f0)));

                        ;
                    }
                    (*g_189) ^= (*l_849);
                }
            }
            l_6 = ((*l_892) = &l_890);

            ;
            ;
            l_846 ^= (*g_189);
        }


        ;
        (*l_898) = func_19(func_41(l_894, ((*g_862) = l_895), g_93[3][3], l_896[3], l_897), (*l_7), l_896[4]);

        ;
    }



    ;

    ;

    ;
    (*l_899) = &l_850;

    ;
    return g_886;


}







static char ** func_11(unsigned p_12, char * p_13, int * p_14)
{
    short l_55 = 1L;
    int l_481 = (-4L);
    int l_491 = 0x5B281F42L;
    int l_492 = 0xF3A7596DL;
    int l_496 = 0L;
    int l_497 = 0x0BABB13FL;
    union U4 **l_502[4] = {&g_334[0][3][6],&g_334[0][3][6],&g_334[0][3][6],&g_334[0][3][6]};
    unsigned char *l_535 = (void*)0;
    unsigned char **l_534[4][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,&l_535,&l_535,&l_535,(void*)0,&l_535,(void*)0},{(void*)0,(void*)0,&l_535,(void*)0,&l_535,(void*)0,(void*)0,&l_535,&l_535,&l_535},{&l_535,&l_535,&l_535,(void*)0,(void*)0,(void*)0,(void*)0,&l_535,&l_535,&l_535},{&l_535,(void*)0,(void*)0,&l_535,&l_535,(void*)0,&l_535,(void*)0,&l_535,&l_535}};
    unsigned char l_543 = 255UL;
    int *l_549 = &l_496;
    short l_554 = 8L;
    unsigned l_563[1][8][6] = {{{0x5A0C59CAL,1UL,0UL,0UL,1UL,0UL},{0xE86583D0L,0xBC95CBEFL,0xE86583D0L,4294967293UL,0x5BF48CDCL,1UL},{0x194C0837L,4294967295UL,0xBE9C0459L,0xD651589EL,0x6D26C2A5L,0x5BF48CDCL},{0xC19C0B7BL,0UL,4294967293UL,0xD651589EL,0xD651589EL,4294967293UL},{0x194C0837L,0x194C0837L,0xBC95CBEFL,4294967293UL,0xBE9C0459L,0xE86583D0L},{0xE86583D0L,1UL,0x194C0837L,0UL,4294967295UL,0xBC95CBEFL},{0x5A0C59CAL,0xE86583D0L,0x194C0837L,0xC19C0B7BL,0x194C0837L,0xE86583D0L},{0x6D26C2A5L,0xC19C0B7BL,0xBC95CBEFL,0UL,4294967295UL,4294967293UL}}};
    int l_629[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    short l_696 = 1L;
    int *l_716 = &l_629[2];
    unsigned short *l_734 = &g_77;
    long long l_758 = 0x6794A45FCA1F6341LL;
    int *l_793 = &l_481;
    int *l_794 = &l_481;
    int *l_795 = &l_496;
    int *l_796[9] = {&l_629[6],&g_93[3][4],&l_629[6],&l_629[6],&g_93[3][4],&l_629[6],&l_629[6],&g_93[3][4],&l_629[6]};
    unsigned short l_797 = 0UL;
    unsigned l_807 = 4294967295UL;
    unsigned long long **l_810[8][3] = {{&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273},{&g_273,&g_273,&g_273}};
    int *l_819[1][10][2] = {{{&g_820,&g_820},{&g_820,&g_820},{&g_820,&g_820},{&g_820,&g_820},{&g_820,&g_820},{&g_820,&g_820},{&g_820,&g_820},{&g_820,&g_820},{&g_820,&g_820},{&g_820,&g_820}}};
    char **l_826 = &g_108[2];
    unsigned char l_833 = 0x34L;
    int i, j, k;
    for (p_12 = 0; (p_12 > 28); p_12++)
    {
        unsigned *l_30 = (void*)0;
        unsigned **l_29[2][9][10] = {{{&l_30,&l_30,(void*)0,(void*)0,&l_30,(void*)0,&l_30,(void*)0,(void*)0,&l_30},{&l_30,&l_30,(void*)0,(void*)0,&l_30,(void*)0,&l_30,(void*)0,(void*)0,&l_30},{&l_30,&l_30,(void*)0,(void*)0,&l_30,(void*)0,&l_30,(void*)0,(void*)0,&l_30},{&l_30,&l_30,(void*)0,(void*)0,&l_30,(void*)0,&l_30,(void*)0,(void*)0,&l_30},{&l_30,&l_30,(void*)0,(void*)0,&l_30,(void*)0,&l_30,(void*)0,(void*)0,&l_30},{&l_30,&l_30,(void*)0,(void*)0,&l_30,(void*)0,&l_30,(void*)0,(void*)0,&l_30},{&l_30,&l_30,(void*)0,(void*)0,&l_30,(void*)0,&l_30,(void*)0,(void*)0,&l_30},{(void*)0,(void*)0,&l_30,&l_30,&l_30,(void*)0,&l_30,&l_30,&l_30,(void*)0},{(void*)0,(void*)0,&l_30,&l_30,&l_30,(void*)0,&l_30,&l_30,&l_30,(void*)0}},{{(void*)0,(void*)0,&l_30,&l_30,&l_30,(void*)0,&l_30,&l_30,&l_30,(void*)0},{(void*)0,(void*)0,&l_30,&l_30,&l_30,(void*)0,&l_30,&l_30,&l_30,(void*)0},{(void*)0,(void*)0,&l_30,&l_30,&l_30,(void*)0,&l_30,&l_30,&l_30,(void*)0},{(void*)0,(void*)0,&l_30,&l_30,&l_30,(void*)0,&l_30,&l_30,&l_30,(void*)0},{(void*)0,(void*)0,&l_30,&l_30,&l_30,(void*)0,&l_30,&l_30,&l_30,(void*)0},{(void*)0,(void*)0,&l_30,&l_30,&l_30,(void*)0,&l_30,&l_30,&l_30,(void*)0},{(void*)0,(void*)0,&l_30,&l_30,&l_30,(void*)0,&l_30,&l_30,&l_30,(void*)0},{(void*)0,(void*)0,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30},{&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30,&l_30}}};
        unsigned long long l_47 = 18446744073709551611UL;
        union U3 l_245[10][9][2] = {{{{-8L},{-7L}},{{0xF1D8L},{0x3737L}},{{0x6326L},{0x3737L}},{{0xF1D8L},{-7L}},{{-8L},{-5L}},{{0x8B45L},{0x3737L}},{{-8L},{1L}},{{0xF1D8L},{-5L}},{{0x6326L},{-5L}}},{{{0xF1D8L},{1L}},{{-8L},{0x3737L}},{{0x8B45L},{-5L}},{{-8L},{-7L}},{{0xF1D8L},{0x3737L}},{{0x6326L},{0x3737L}},{{0xF1D8L},{-7L}},{{-8L},{-5L}},{{0x8B45L},{0x3737L}}},{{{-8L},{1L}},{{0xF1D8L},{-5L}},{{0x6326L},{-5L}},{{0xF1D8L},{1L}},{{-8L},{0x3737L}},{{0x8B45L},{-5L}},{{-8L},{-7L}},{{0xF1D8L},{0x3737L}},{{0x6326L},{0x3737L}}},{{{0xF1D8L},{-7L}},{{-8L},{-5L}},{{0x8B45L},{0x3737L}},{{-8L},{1L}},{{0xF1D8L},{-5L}},{{0x6326L},{-5L}},{{0xF1D8L},{1L}},{{-8L},{0x3737L}},{{0x8B45L},{-5L}}},{{{-8L},{-7L}},{{0xF1D8L},{0x3737L}},{{0x6326L},{0x3737L}},{{0xF1D8L},{-7L}},{{-8L},{-5L}},{{0x8B45L},{0x3737L}},{{-8L},{1L}},{{0xF1D8L},{-5L}},{{0x6326L},{-5L}}},{{{0xF1D8L},{1L}},{{-8L},{0x3737L}},{{0x8B45L},{-5L}},{{-8L},{-7L}},{{0xF1D8L},{0x3737L}},{{0x6326L},{0x3737L}},{{0xF1D8L},{-7L}},{{-8L},{-5L}},{{0x8B45L},{0x3737L}}},{{{-8L},{1L}},{{0xF1D8L},{-5L}},{{0x6326L},{-5L}},{{0xF1D8L},{1L}},{{-8L},{0x3737L}},{{0x8B45L},{-5L}},{{-8L},{-7L}},{{0xF1D8L},{0x3737L}},{{0x6326L},{0x3737L}}},{{{0xF1D8L},{-7L}},{{-8L},{-5L}},{{0x8B45L},{0x3737L}},{{-8L},{1L}},{{0xF1D8L},{-5L}},{{0x6326L},{-5L}},{{0xF1D8L},{1L}},{{-8L},{0x3737L}},{{0x8B45L},{-5L}}},{{{-8L},{-7L}},{{0xF1D8L},{0x3737L}},{{0x6326L},{0x3737L}},{{0xF1D8L},{-7L}},{{-8L},{-5L}},{{0x8B45L},{0x3737L}},{{-8L},{1L}},{{0xF1D8L},{-5L}},{{0x6326L},{-5L}}},{{{0xF1D8L},{1L}},{{-8L},{0x3737L}},{{0x8B45L},{-5L}},{{-8L},{-7L}},{{0xF1D8L},{0x3737L}},{{0x6326L},{0x3737L}},{{0xF1D8L},{-7L}},{{0x6326L},{-7L}},{{1L},{1L}}}};
        unsigned l_252 = 0x8A9DCF0FL;
        int l_490 = 1L;
        int l_493 = 0xA773992FL;
        int l_494 = (-2L);
        int l_495[3][7][5] = {{{0x1D167B9DL,0xB0842862L,0x50435415L,0x81FEE164L,9L},{0xEFF1DA59L,0xE7EFE565L,(-8L),0xFD990C76L,8L},{0xFC7A92FFL,0xB0842862L,0xB0842862L,0xFC7A92FFL,1L},{1L,0x1D167B9DL,0xB0842862L,0x50435415L,0x81FEE164L},{0x50435415L,1L,(-8L),0xEFF1DA59L,0xB0842862L},{0xE7EFE565L,1L,0x50435415L,0x50435415L,1L},{9L,0xBA168ACDL,(-4L),0xFC7A92FFL,1L}},{{1L,8L,0x1D167B9DL,0xFD990C76L,0xB0842862L},{0xBA168ACDL,0xFD990C76L,9L,0x81FEE164L,0x81FEE164L},{1L,(-4L),1L,9L,1L},{9L,(-4L),0xEFF1DA59L,0xBA168ACDL,8L},{0xE7EFE565L,0xFD990C76L,0x81FEE164L,0x1D167B9DL,9L},{0x50435415L,8L,0xEFF1DA59L,8L,0x50435415L},{1L,0xBA168ACDL,1L,8L,0x1D167B9DL}},{{0xFC7A92FFL,1L,9L,0x1D167B9DL,(-8L)},{0xEFF1DA59L,1L,0x1D167B9DL,0xBA168ACDL,0x1D167B9DL},{0x1D167B9DL,0x1D167B9DL,(-4L),9L,0x50435415L},{0x1D167B9DL,0xB0842862L,0x50435415L,0x81FEE164L,9L},{0xEFF1DA59L,0xFD990C76L,0xB0842862L,(-4L),0xE7EFE565L},{0xBA168ACDL,1L,1L,0xBA168ACDL,1L},{9L,8L,1L,0x81FEE164L,(-8L)}}};
        union U4 **l_503 = &g_334[0][3][6];
        union U4 ***l_504[6] = {&l_503,&l_503,&l_503,&l_503,&l_503,&l_503};
        short ***l_511 = &g_363;
        unsigned char **l_533 = (void*)0;
        unsigned long long l_578 = 18446744073709551615UL;
        union U0 *l_583 = (void*)0;
        long long l_594 = (-5L);
        unsigned char l_659 = 1UL;
        unsigned long long l_680 = 0xD1928D406CD302D5LL;
        unsigned long long *l_727[1][1];
        unsigned short l_728 = 0xAFF5L;
        int i, j, k;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 1; j++)
                l_727[i][j] = &l_680;
        }
    }
    ++l_797;
    if ((safe_unary_minus_func_int32_t_s(((safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((-9L), (p_12 = (((*l_795) = p_12) || p_12)))), 4)) < ((safe_add_func_int8_t_s_s(l_807, ((safe_mod_func_uint64_t_u_u(((g_273 = &g_157) == &g_157), (+((*l_793) || ((void*)0 == &g_676[0]))))) >= (*l_794)))) & (*l_716))))))
    {
        char **l_811 = (void*)0;
        return l_811;


    }
    else
    {
        union U0 **l_812 = &g_584;
        short *l_815 = &g_112[1][4][1].f0;
        int **l_816 = &l_794;
        unsigned short l_817[2][1];
        union U4 l_818 = {-3L};
        char l_821 = 0xC3L;
        int l_830[5] = {(-7L),(-7L),(-7L),(-7L),(-7L)};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_817[i][j] = 1UL;
        }
        (*l_812) = &g_585;
        (*g_189) = ((0xEE3CF89A6863FE4ALL != (*l_549)) ^ ((((*l_793) = (safe_lshift_func_uint16_t_u_u(((l_815 == &l_554) || 0xC4L), 4))) && (((l_816 != (void*)0) > l_817[0][0]) || ((l_819[0][2][0] = func_19(l_818, p_12, &l_563[0][5][4])) == l_795))) < l_821));


        for (l_797 = (-20); (l_797 <= 11); ++l_797)
        {
            int **l_824 = (void*)0;
            int ***l_825[6][2] = {{(void*)0,&l_816},{(void*)0,&l_816},{(void*)0,&l_816},{(void*)0,&l_816},{(void*)0,&l_816},{(void*)0,&l_816}};
            int i, j;
            g_663[1] = l_824;
            if ((*p_14))
                continue;
            (*p_14) = 0x3729C6FDL;
        }
        if ((**l_816))
        {
            return l_826;


        }
        else
        {
            union U3 *l_827 = &g_112[1][4][1];
            int l_828 = (-1L);
            int l_829 = 0xBB69C45EL;
            int l_831[7][3][1] = {{{0x17BCFCB1L},{0xFD039AF0L},{0x0763F6C4L}},{{0xFD039AF0L},{0x17BCFCB1L},{0x80648BDFL}},{{0x17BCFCB1L},{0xFD039AF0L},{0x0763F6C4L}},{{0xFD039AF0L},{0x17BCFCB1L},{0x80648BDFL}},{{0x17BCFCB1L},{0xFD039AF0L},{0x0763F6C4L}},{{0xFD039AF0L},{0x17BCFCB1L},{0x80648BDFL}},{{0x17BCFCB1L},{0xFD039AF0L},{0x0763F6C4L}}};
            int i, j, k;
            (*g_205) = l_827;
            ++l_833;
        }
    }

    ;

    return l_826;


}







static int * func_19(union U4 p_20, unsigned long long p_21, unsigned * p_22)
{
    for (p_20.f1 = 0; (p_20.f1 >= 0); p_20.f1 -= 1)
    {
        if (g_5)
            break;
        return p_22;


    }
    return p_22;


}







static unsigned long long func_31(unsigned p_32, int p_33, unsigned ** p_34)
{
    unsigned long long l_455 = 18446744073709551615UL;
    union U4 l_460 = {-7L};
    unsigned *l_463 = &g_153[0][4];
    union U3 l_464 = {0x479CL};
    int l_465 = 1L;
    int *l_466 = &l_465;
    int *l_467 = &l_465;
    int *l_468 = (void*)0;
    int *l_469 = &g_93[3][4];
    int *l_470 = &g_93[3][4];
    int *l_471[6];
    unsigned char l_472 = 251UL;
    int i;
    for (i = 0; i < 6; i++)
        l_471[i] = &g_93[0][4];
    l_465 = (safe_mul_func_int8_t_s_s(((g_153[0][4] || l_455) != (safe_lshift_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u(func_94(p_33, l_460, func_94((func_94(p_33, func_41((func_94(p_32, l_460, (safe_add_func_int32_t_s_s(l_460.f1, (((*g_364) = (func_94(l_455, l_460, p_33, p_33, l_463) ^ l_460.f0)) || 0x8D51L))), p_33, l_463) <= l_455), &g_376, p_32, l_463, l_464), l_460.f1, l_455, l_463) != 1L), l_460, p_32, p_33, l_463), l_465, l_463), l_465)), p_32))), p_32));
    ++l_472;
    for (g_242 = 0; (g_242 > 16); g_242++)
    {
        if (g_3)
            break;
    }
    return (*l_470);
}







static unsigned ** func_35(union U4 p_36, unsigned long long p_37, unsigned long long p_38, int p_39, long long p_40)
{
    unsigned short l_257 = 65529UL;
    unsigned long long *l_270 = (void*)0;
    unsigned long long *l_271[4][9][1] = {{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}},{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}},{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}},{{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157},{&g_157}}};
    unsigned long long **l_272[8] = {&l_271[2][4][0],&l_271[2][4][0],&l_271[2][4][0],&l_271[2][4][0],&l_271[2][4][0],&l_271[2][4][0],&l_271[2][4][0],&l_271[2][4][0]};
    union U4 l_290 = {0x634F65733EB8F7BDLL};
    char *l_293[7];
    unsigned **l_306[3];
    int l_322 = 1L;
    int l_338 = 0x5A8813FAL;
    unsigned long long l_386 = 1UL;
    int l_415 = 0x89F867AFL;
    int l_416 = 0L;
    int l_418 = (-1L);
    int l_419[9] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
    int i, j, k;
    for (i = 0; i < 7; i++)
        l_293[i] = (void*)0;
    for (i = 0; i < 3; i++)
        l_306[i] = &g_141;
    for (p_40 = (-16); (p_40 != (-20)); p_40 = safe_sub_func_int32_t_s_s(p_40, 3))
    {
        union U3 *l_255 = &g_112[0][1][0];
        int *l_258[4] = {&g_93[3][4],&g_93[3][4],&g_93[3][4],&g_93[3][4]};
        unsigned long long *l_265 = &g_157;
        int i;
        if ((l_255 != (*g_205)))
        {
            unsigned long long l_256 = 0UL;
            int l_259 = 4L;
            if (l_256)
            {
                if (l_257)
                    break;
                return &g_54[0][3][0];


            }
            else
            {
                l_258[1] = l_258[1];
            }
            if (p_36.f0)
            {
                l_259 = p_36.f1;
            }
            else
            {
                unsigned char l_266[8] = {0x9AL,0x9AL,0xD4L,0x9AL,0x9AL,0xD4L,0x9AL,0x9AL};
                int i;
                p_39 = 0x9D69E251L;
                for (l_257 = 0; (l_257 < 52); l_257 = safe_add_func_uint64_t_u_u(l_257, 3))
                {
                    short l_264[1][4] = {{0x601EL,0x601EL,0x601EL,0x601EL}};
                    int i, j;
                    p_39 = (l_264[0][1] ^ (&g_157 != l_265));
                }
                if (l_257)
                    continue;
                ++l_266[4];
            }
        }
        else
        {
            unsigned **l_269 = (void*)0;
            return l_269;


        }
        if (l_257)
            continue;
    }
    if ((g_207.f0 | (p_37 & ((l_270 = &p_37) == (g_273 = l_271[0][1][0])))))
    {
        unsigned char *l_282[8] = {&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133,&g_133};
        unsigned **l_284 = (void*)0;
        int i;
        for (l_257 = 16; (l_257 >= 18); ++l_257)
        {
            char l_276 = (-1L);
            int *l_277 = &g_62;
            short *l_283 = (void*)0;
            (*l_277) = func_71(l_276, (+65526UL));
            (*l_277) = p_38;
            (*l_277) = (safe_add_func_int64_t_s_s(g_93[0][4], (p_38 != (g_112[1][4][1].f0 = ((0xC34BL && p_36.f1) < (safe_mod_func_uint16_t_u_u((l_282[1] != &g_133), p_37)))))));
            return l_284;


        }
    }
    else
    {
        int l_285[8];
        unsigned short *l_286[3];
        int l_287 = (-9L);
        char *l_291 = (void*)0;
        char *l_292 = &g_207.f1;
        unsigned *l_294 = &g_17;
        union U3 l_295 = {0L};
        unsigned long long l_296 = 0x1F1B8AAB57AD4680LL;
        char l_325 = 6L;
        union U4 *l_331[10] = {&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290};
        union U3 **l_358[3];
        char l_371 = 0xC5L;
        int l_408 = 4L;
        int l_409 = 1L;
        int l_410 = 0xEFE801D9L;
        int l_411 = (-1L);
        int l_412 = 0x982AC149L;
        int l_413 = 0L;
        int l_414[3];
        union U4 l_432 = {-5L};
        unsigned l_450 = 1UL;
        int i;
        for (i = 0; i < 8; i++)
            l_285[i] = 0xC5556554L;
        for (i = 0; i < 3; i++)
            l_286[i] = &l_257;
        for (i = 0; i < 3; i++)
            l_358[i] = &g_206[5];
        for (i = 0; i < 3; i++)
            l_414[i] = 1L;
        if (((l_285[1] || (l_287 = p_40)) < ((safe_lshift_func_int8_t_s_u((g_133 == p_39), 7)) <= g_207.f0)))
        {
            unsigned char l_299 = 0x6DL;
            int *l_308 = &g_93[3][4];
            int *l_309 = &g_93[0][3];
            unsigned l_310 = 0xCB9B7B12L;
            union U4 l_318 = {6L};
            union U4 *l_319 = &g_207;
            for (l_257 = (-19); (l_257 != 46); ++l_257)
            {
                int **l_307 = &g_188;
                l_299++;
                for (p_36.f0 = (-30); (p_36.f0 != (-1)); ++p_36.f0)
                {
                    for (g_77 = 0; (g_77 <= 3); g_77 += 1)
                    {
                        int **l_304 = (void*)0;
                        int **l_305 = &g_188;
                        int i, j;
                        (*l_305) = &g_93[g_77][(g_77 + 1)];

                        ;
                        return l_306[2];


                    }
                }
                (*l_307) = &l_287;

                ;
            }


            --l_310;
            l_322 &= ((safe_sub_func_int32_t_s_s((safe_add_func_uint16_t_u_u((func_94((safe_unary_minus_func_int32_t_s(((*l_309) = 0x49FB4C95L))), ((*l_319) = l_318), (safe_mod_func_uint32_t_u_u(p_36.f0, l_257)), p_37, l_294) != p_39), 65527UL)), l_285[7])) == 8L);
        }
        else
        {
            long long *l_326 = &g_207.f0;
            union U4 *l_333[7][3][7] = {{{&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290,&l_290},{(void*)0,&l_290,&l_290,(void*)0,&l_290,(void*)0,&l_290}},{{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,(void*)0},{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290,&l_290,(void*)0,&l_290}},{{&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290,&l_290,(void*)0,&l_290}},{{&l_290,(void*)0,(void*)0,&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290,&l_290},{(void*)0,&l_290,&l_290,&l_290,(void*)0,&l_290,&l_290}},{{&l_290,(void*)0,&l_290,&l_290,&l_290,(void*)0,&l_290},{&l_290,&l_290,&l_290,&l_290,&l_290,(void*)0,&l_290},{(void*)0,&l_290,&l_290,&l_290,(void*)0,(void*)0,&l_290}},{{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,&l_290,&l_290,(void*)0,&l_290}},{{&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290,&l_290},{&l_290,&l_290,&l_290,(void*)0,&l_290,&l_290,&l_290},{&l_290,(void*)0,&l_290,&l_290,&l_290,&l_290,&l_290}}};
            union U4 **l_332[9][9] = {{(void*)0,&l_331[6],&l_333[3][2][2],&l_331[9],&l_333[1][1][5],&l_333[1][1][5],&l_333[1][1][6],&l_331[4],&l_333[1][1][6]},{&l_331[9],&l_333[1][1][5],&l_333[1][1][5],&l_333[1][1][5],&l_333[1][1][5],&l_331[9],&l_333[2][1][0],(void*)0,&l_331[7]},{&l_333[1][1][5],&l_333[1][1][5],&l_331[4],&l_333[1][1][5],&l_333[1][1][6],&l_333[5][0][6],&l_333[1][1][5],&l_331[4],&l_331[4]},{&l_333[2][1][0],&l_331[6],&l_333[5][0][6],(void*)0,&l_333[5][0][6],&l_331[6],&l_333[2][1][0],&l_333[1][1][5],&l_331[4]},{&l_333[1][1][5],&l_331[4],&l_333[5][0][6],&l_333[2][1][0],(void*)0,&l_333[3][2][2],&l_333[1][1][6],&l_331[6],&l_331[9]},{&l_333[1][1][5],&l_333[1][1][5],&l_331[4],&l_331[6],&l_331[6],&l_331[4],&l_333[1][1][5],&l_333[1][1][5],&l_333[1][1][5]},{&l_331[7],&l_331[4],&l_333[1][1][5],&l_331[6],&l_333[1][1][5],&l_333[1][1][5],&l_333[1][1][5],&l_331[4],&l_333[3][2][2]},{&l_333[1][1][5],(void*)0,&l_333[3][2][2],&l_333[2][1][0],&l_331[7],&l_333[2][1][0],&l_333[3][2][2],(void*)0,&l_333[1][1][5]},{&l_333[1][1][6],&l_333[2][1][0],&l_333[1][1][5],(void*)0,&l_331[7],&l_333[1][1][5],&l_331[4],&l_331[4],&l_331[9]}};
            int *l_336 = &l_322;
            int l_337 = (-1L);
            union U3 *l_357 = (void*)0;
            short ***l_365[9];
            unsigned **l_366 = &g_141;
            int i, j, k;
            for (i = 0; i < 9; i++)
                l_365[i] = (void*)0;
            if ((safe_mod_func_uint32_t_u_u((0x65CFL == func_94((p_40 < (((~(&g_176 != &g_176)) || ((p_39 = ((((*l_326) = (p_36.f1 | (g_212 ^ l_325))) != (safe_sub_func_uint64_t_u_u((safe_mod_func_int32_t_s_s(((*l_336) ^= (l_331[4] != (g_334[0][3][6] = &p_36))), p_36.f1)), l_337))) > 4294967295UL)) < p_38)) & p_38)), p_36, p_40, l_338, l_294)), l_296)))
            {
                unsigned *l_350[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_350[i] = (void*)0;
                for (p_36.f1 = 0; (p_36.f1 == 12); p_36.f1 = safe_add_func_uint32_t_u_u(p_36.f1, 4))
                {
                    unsigned long long **l_343 = &l_271[0][1][0];
                    unsigned *l_351 = (void*)0;
                    if ((safe_add_func_uint8_t_u_u((((void*)0 == l_343) || ((*g_273) < (safe_add_func_int64_t_s_s((safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_10, 2)), 2)), p_36.f1)))), (!0xEDL))))
                    {
                        return l_306[2];



                    }
                    else
                    {
                        (*l_336) |= (l_350[0] != l_351);
                    }
                    for (p_40 = (-22); (p_40 > (-14)); p_40 = safe_add_func_int8_t_s_s(p_40, 7))
                    {
                        unsigned **l_354 = &l_294;
                        return &g_54[6][3][1];



                    }
                }

                            }
            else
            {
                int *l_362 = &g_62;
                (*l_336) = (((safe_sub_func_int16_t_s_s(((*g_205) == l_357), g_335[1][3][5].f1)) | (((((&l_357 == (g_359[3] = l_358[1])) != (+((safe_rshift_func_int8_t_s_s(0x6BL, func_94((*l_336), p_36, l_290.f0, l_290.f1, l_294))) && g_153[0][3]))) & 0x0237C54FL) | g_3) < p_36.f0)) >= l_285[1]);
                (*l_362) ^= (*l_336);
            }


            g_363 = g_363;
            return l_366;



        }


        for (g_77 = 0; (g_77 != 18); g_77 = safe_add_func_uint32_t_u_u(g_77, 2))
        {
            int *l_369 = &g_93[2][4];
            int **l_370 = &g_189;
            unsigned **l_400 = (void*)0;
            int l_417 = 0x9F53F0A1L;
            int l_420 = 0xFB9E7157L;
            int *l_448 = (void*)0;
            int *l_449[4][10][6] = {{{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0},{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411},{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0},{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411},{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0}},{{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411},{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0},{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411},{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0},{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411}},{{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0},{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411},{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0},{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411},{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0}},{{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411},{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0},{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411},{&l_418,(void*)0,&l_418,&l_411,&l_418,(void*)0},{&l_408,(void*)0,&l_410,(void*)0,&l_408,(void*)0},{&l_418,&l_411,&l_418,(void*)0,&l_418,&l_411},{&l_408,&l_411,&l_410,&l_411,&l_408,&l_411}}};
            int i, j, k;
            (*l_370) = l_369;

            ;
            if (l_371)
            {
                return l_306[2];



            }
            else
            {
                unsigned *l_382 = &g_17;
                union U4 l_383 = {-1L};
                union U3 l_385 = {0xC5ECL};
                int l_395[10][9][2] = {{{(-1L),0x712442D7L},{(-1L),1L},{0xF1C61AB7L,(-9L)},{0xE7CAB860L,1L},{0xE7CAB860L,(-9L)},{0xF1C61AB7L,1L},{(-1L),0x712442D7L},{(-1L),1L},{0x862C4EE1L,0x69960FC7L}},{{0x4E543782L,0L},{0x1D661E4EL,0x234CD3DFL},{0xEA38C271L,3L},{1L,0xE767E4E2L},{6L,0xE767E4E2L},{1L,3L},{0xEA38C271L,0x234CD3DFL},{0x1D661E4EL,0L},{0x4E543782L,0x69960FC7L}},{{0x862C4EE1L,1L},{(-1L),0x712442D7L},{(-1L),1L},{0xF1C61AB7L,(-9L)},{0xE7CAB860L,1L},{0xE7CAB860L,(-9L)},{0xF1C61AB7L,1L},{(-1L),0x712442D7L},{(-1L),1L}},{{0x862C4EE1L,0L},{(-1L),1L},{(-1L),1L},{0x862C4EE1L,0x712442D7L},{0x7C5A7301L,3L},{0x1EECF563L,3L},{0x7C5A7301L,0x712442D7L},{0x862C4EE1L,1L},{(-1L),1L}},{{(-1L),0L},{0xCC50F365L,0x75DA4818L},{6L,0x234CD3DFL},{0x9415053BL,0x69960FC7L},{0x1D661E4EL,0L},{0xF1C61AB7L,0xABFF7526L},{0xF1C61AB7L,0L},{0x1D661E4EL,0x69960FC7L},{0x9415053BL,0x234CD3DFL}},{{6L,0x75DA4818L},{0xCC50F365L,0L},{(-1L),1L},{(-1L),1L},{0x862C4EE1L,0x712442D7L},{0x7C5A7301L,3L},{0x1EECF563L,3L},{0x7C5A7301L,0x712442D7L},{0x862C4EE1L,1L}},{{(-1L),1L},{(-1L),0L},{0xCC50F365L,0x75DA4818L},{6L,0x234CD3DFL},{0x9415053BL,0x69960FC7L},{0x1D661E4EL,0L},{0xF1C61AB7L,0xABFF7526L},{0xF1C61AB7L,0L},{0x1D661E4EL,0x69960FC7L}},{{0x9415053BL,0x234CD3DFL},{6L,0x75DA4818L},{0xCC50F365L,0L},{(-1L),1L},{(-1L),1L},{0x862C4EE1L,0x712442D7L},{0x7C5A7301L,3L},{0x1EECF563L,3L},{0x7C5A7301L,0x712442D7L}},{{0x862C4EE1L,1L},{(-1L),1L},{(-1L),0L},{(-9L),0xE767E4E2L},{0x862C4EE1L,0L},{6L,0L},{0L,0x712442D7L},{0x9415053BL,0L},{0x9415053BL,0x712442D7L}},{{0L,0L},{6L,0L},{0x862C4EE1L,0xE767E4E2L},{(-9L),0x80699FC6L},{0xE7CAB860L,0x69960FC7L},{(-1L),1L},{0x34E07893L,(-8L)},{0x1D661E4EL,1L},{0xCC50F365L,1L}}};
                int l_398[2][10][8] = {{{(-1L),0xAD084C41L,(-4L),(-1L),0x1736159AL,0x203B8898L,0x6D194BAFL,0L},{0x663EAFB2L,0x8509FC98L,0x90ACEAA2L,4L,0x1736159AL,4L,(-1L),0L},{(-1L),(-1L),6L,0L,0x203B8898L,1L,0x8B746A1DL,(-4L)},{4L,(-1L),2L,0x1736159AL,(-1L),(-2L),8L,1L},{(-1L),0x57C31FC3L,0L,0x4F8746B4L,0xBF1391E5L,0x47B92962L,(-1L),0xFAA47A7DL},{0xAD084C41L,2L,0x8B746A1DL,0x8509FC98L,1L,0x57C31FC3L,0x57C31FC3L,1L},{0x57C31FC3L,0x1736159AL,0x1736159AL,0x57C31FC3L,0xE5BDA302L,(-1L),(-1L),(-4L)},{4L,0xFAA47A7DL,0x663EAFB2L,0x7FBB5ADAL,4L,(-1L),0xD2C828B5L,0x8B746A1DL},{1L,0x8B746A1DL,(-4L),(-1L),(-2L),(-4L),0x8509FC98L,0x9012AFFEL},{0x47B92962L,0x4F8746B4L,0xD2C828B5L,2L,0x663EAFB2L,0x1DC9EF1BL,0xE5BDA302L,(-1L)}},{{1L,0x864C54A3L,0L,0x7FBB5ADAL,0x5B8FFA1AL,1L,(-2L),1L},{0xFAA47A7DL,0x1DC9EF1BL,0x8B746A1DL,0x47B92962L,0x864C54A3L,(-1L),0x6B15FF7BL,0xAD084C41L},{0x4F8746B4L,0xC3090F8DL,0xBF1391E5L,0L,(-1L),0L,0xBF1391E5L,0xC3090F8DL},{4L,(-1L),0x6BF2392DL,1L,0x6B15FF7BL,(-1L),0x57C31FC3L,(-2L)},{0x6D194BAFL,(-1L),(-1L),1L,4L,4L,0x57C31FC3L,0x6BF2392DL},{(-1L),1L,0x6BF2392DL,(-1L),0x8B746A1DL,0L,0xBF1391E5L,0xFAA47A7DL},{0x8B746A1DL,0L,0xBF1391E5L,0xFAA47A7DL,(-1L),0x1736159AL,0x6B15FF7BL,4L},{8L,0xAD084C41L,0x8B746A1DL,3L,(-4L),0x4F8746B4L,(-2L),0x7FBB5ADAL},{(-1L),4L,0L,0xC3090F8DL,(-1L),0x8509FC98L,0xE5BDA302L,0xE5BDA302L},{0x57C31FC3L,3L,0xD2C828B5L,0xD2C828B5L,3L,0x57C31FC3L,0x8509FC98L,6L}}};
                int l_399[7][10] = {{0xB0EC4349L,(-7L),0x655D204FL,0xAA88D431L,0x0DCDA81AL,0xDCBCCEF7L,0L,0xB0EC4349L,0xC32A62E9L,0x429751DDL},{0L,6L,0xB9AFEC4DL,0xB0EC4349L,0L,0xC32A62E9L,0xC32A62E9L,0L,0xB0EC4349L,0xB9AFEC4DL},{0xB3D59830L,0xB3D59830L,0x429751DDL,0xC32A62E9L,0xB0EC4349L,0L,0xDCBCCEF7L,0x0DCDA81AL,0xAA88D431L,0x655D204FL},{0x429751DDL,0xB0EC4349L,1L,0L,(-1L),0x655D204FL,0xDCBCCEF7L,0xC45D0065L,(-1L),8L},{0x0DCDA81AL,0xB3D59830L,0x71055CA7L,0x8A9ADBD2L,0x655D204FL,0L,0xC32A62E9L,0L,0x655D204FL,0x8A9ADBD2L},{(-8L),6L,(-8L),0xDCBCCEF7L,0xB7CFDB0AL,0x0DCDA81AL,0L,0xB3D59830L,0x8796EB5DL,(-7L)},{0xCBB00034L,(-7L),0L,0xC45D0065L,0L,0x71055CA7L,0x655D204FL,0xB3D59830L,(-1L),0x099B290DL}};
                int i, j, k;
                for (g_62 = 2; (g_62 >= 0); g_62 -= 1)
                {
                    char **l_374 = &l_293[1];
                    unsigned ***l_375 = &g_53[1];
                    short *l_380 = &l_295.f0;
                    short **l_379 = &l_380;
                    union U4 l_381 = {-1L};
                    int *l_384 = &l_285[1];
                    (**l_370) = ((safe_rshift_func_uint16_t_u_s((**l_370), 13)) & (func_94((*g_273), func_41((!p_37), ((*l_374) = &l_371), ((*l_384) |= ((g_376 = (l_306[0] != ((*l_375) = &g_54[3][0][0]))) && func_94((safe_mod_func_int8_t_s_s((((func_94((!(((*l_379) = ((*g_363) = (*g_363))) == (void*)0)), l_381, p_40, p_37, l_382) == 0x7A34L) ^ 0xE054L) < (**l_370)), p_36.f0)), l_383, p_40, p_38, l_294))), &g_153[0][4], l_385), p_36.f1, l_386, l_382) || 0x30E4L));

                    ;
                    if (p_39)
                        continue;
                    for (l_338 = 0; (l_338 <= 3); l_338 += 1)
                    {
                        union U3 *l_387 = &g_112[1][2][2];
                        int i;
                        if (p_36.f1)
                            break;
                        (*g_205) = l_387;


                        return &g_54[6][3][1];



                    }
                }
                if ((*g_189))
                {
                    unsigned char *l_392 = &g_133;
                    unsigned char **l_391 = &l_392;
                    unsigned char ***l_390[10] = {&l_391,&l_391,&l_391,&l_391,&l_391,&l_391,&l_391,&l_391,&l_391,&l_391};
                    int *l_401 = &g_93[3][0];
                    int *l_402 = (void*)0;
                    int *l_403 = &l_399[4][1];
                    int *l_404 = (void*)0;
                    int *l_405 = &l_287;
                    int *l_406 = &l_322;
                    int *l_407[1][7][1] = {{{&g_93[1][4]},{&l_395[7][7][0]},{&g_93[1][4]},{&l_395[7][7][0]},{&g_93[1][4]},{&l_395[7][7][0]},{&g_93[1][4]}}};
                    unsigned short l_421 = 65535UL;
                    int i, j, k;
                    if ((p_39 |= ((l_270 == &p_40) < (-4L))))
                    {
                        unsigned char ****l_393 = (void*)0;
                        unsigned char ****l_394 = &l_390[1];
                        (*l_369) |= (g_388 == ((*l_394) = l_390[4]));
                        if (p_38)
                            break;
                    }
                    else
                    {
                        l_399[3][2] |= (g_10 > (((**l_370) = (0x9493L & ((p_39 & (p_36.f0 | 0xAF4CL)) <= (l_395[7][7][0] &= p_38)))) >= (l_398[0][4][2] = (safe_lshift_func_int8_t_s_s(0x55L, 4)))));
                        return l_400;



                    }
                    ++l_421;
                    for (l_338 = 0; (l_338 < (-14)); l_338 = safe_sub_func_uint16_t_u_u(l_338, 6))
                    {
                        (**l_370) = l_418;
                    }
                }
                else
                {
                    unsigned *l_433 = &g_153[0][5];
                    short *l_434[3][2] = {{&l_385.f0,&l_385.f0},{&l_385.f0,&l_385.f0},{&l_385.f0,&l_385.f0}};
                    int l_435 = 1L;
                    int l_440 = 0xE50BF7C3L;
                    int i, j;
                    p_39 = p_39;
                    if ((((l_408 > ((*g_364) = l_399[4][7])) > 0xDBL) ^ (l_435 &= (safe_lshift_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(func_94((0x6634L > (+(safe_mul_func_uint8_t_u_u(l_410, func_94((p_36.f0 || (**l_370)), l_432, (!(((void*)0 != &g_188) != 1UL)), p_36.f0, l_433))))), p_36, l_383.f1, l_383.f1, l_433), p_38)), l_409)))))
                    {
                        unsigned *l_441 = &g_212;
                        int *l_442 = &l_419[5];
                        unsigned short *l_443 = &l_257;
                        (*l_442) &= (safe_rshift_func_uint16_t_u_u(func_94((((((p_39 || (g_133 > p_39)) | (l_440 |= ((func_94((*g_273), p_36, l_435, (*g_189), l_294) < l_257) & 0xFBF5L))) <= (*g_364)) != l_435) == 0xF137C8E9L), p_36, l_435, p_37, l_441), 3));
                        (*g_189) = (&g_77 == (l_443 = l_434[2][1]));

                        ;
                        (*g_189) |= (safe_unary_minus_func_uint32_t_u(((*l_441) |= l_322)));
                    }
                    else
                    {
                        unsigned l_447 = 18446744073709551612UL;
                        (*l_369) &= (safe_mul_func_uint8_t_u_u(g_157, l_447));
                        p_39 = (-9L);
                    }
                }
            }
            l_450++;
        }



    }


    ;
    ;

    return &g_141;


}







static union U4 func_41(char p_42, char * p_43, int p_44, unsigned * p_45, union U3 p_46)
{
    unsigned short l_250 = 0xBD5CL;
    for (g_212 = (-19); (g_212 <= 44); g_212 = safe_add_func_int64_t_s_s(g_212, 5))
    {
        int l_248[3][4][8] = {{{0x1FA15D6AL,0xF17E24A9L,0x1DBB0624L,9L,1L,1L,9L,0x4B0BD9E3L},{0x0C291914L,0x0C291914L,0x46AF94CBL,1L,0xB063C2FDL,0L,0x1DBB0624L,1L},{0x4B0BD9E3L,1L,0x01AB7429L,0xCFD0BB54L,1L,0xF7FBE5D9L,0xE1F3F5BCL,1L},{1L,0xE1F3F5BCL,(-1L),1L,0xCFD0BB54L,0x4B0BD9E3L,0L,0x4B0BD9E3L}},{{0L,9L,0L,9L,0L,0x46AF94CBL,0xF17E24A9L,0x15A90446L},{0x4B0BD9E3L,0x1DBB0624L,0L,1L,0x1DBB0624L,0x01AB7429L,0xF7FBE5D9L,9L},{0xF17E24A9L,0xE1F3F5BCL,0L,0x0C291914L,1L,(-1L),0xF17E24A9L,0xF2AB96FBL},{0x1DBB0624L,0L,0L,0x15A90446L,0x15A90446L,0L,0L,0x1DBB0624L}},{{0xF2AB96FBL,0xF17E24A9L,(-1L),1L,0x0C291914L,0L,0xE1F3F5BCL,0xF17E24A9L},{9L,0xF7FBE5D9L,0x01AB7429L,0x1DBB0624L,1L,0L,0x1DBB0624L,0x4B0BD9E3L},{0x15A90446L,0xF17E24A9L,0x46AF94CBL,0L,9L,0L,9L,0L},{0x4B0BD9E3L,0L,0x4B0BD9E3L,0xCFD0BB54L,1L,(-1L),0xE1F3F5BCL,1L}}};
        int *l_249[10][2][8] = {{{&g_9,&l_248[1][1][0],&l_248[1][1][0],(void*)0,&l_248[1][1][0],&g_93[3][4],(void*)0,&g_93[3][4]},{(void*)0,&g_9,&g_62,&g_9,(void*)0,&g_62,&g_8,&g_8}},{{&g_93[3][4],&g_9,&l_248[1][1][0],&l_248[1][1][0],&g_9,&g_93[3][4],&l_248[0][0][1],&g_9},{&g_8,&l_248[0][0][1],&l_248[1][1][0],&g_8,&l_248[1][1][0],&l_248[0][0][1],&g_8,&g_93[3][4]}},{{&g_9,(void*)0,&g_62,&g_8,&g_8,&g_62,(void*)0,&g_9},{&g_93[3][4],&g_8,&l_248[0][0][1],&l_248[1][1][0],&g_8,&l_248[1][1][0],&l_248[0][0][1],&g_8}},{{&g_9,&l_248[0][0][1],&g_93[3][4],&g_9,&l_248[1][1][0],&l_248[1][1][0],&g_9,&g_93[3][4]},{&g_8,&g_8,&g_62,(void*)0,&g_9,&g_62,&g_9,(void*)0}},{{&g_93[3][4],(void*)0,&g_93[3][4],&l_248[1][1][0],(void*)0,&l_248[0][0][1],&l_248[0][0][1],(void*)0},{(void*)0,&l_248[0][0][1],&l_248[0][0][1],(void*)0,&l_248[1][1][0],&g_93[3][4],(void*)0,&g_93[3][4]}},{{(void*)0,&g_9,&g_62,&g_9,(void*)0,&g_62,&g_8,&g_8},{&g_93[3][4],&g_9,&l_248[1][1][0],&l_248[1][1][0],&g_9,&g_93[3][4],&l_248[0][0][1],&g_9}},{{&g_8,&l_248[0][0][1],&g_62,&l_248[0][0][1],&g_62,(void*)0,&l_248[0][0][1],&g_62},{&g_93[3][4],&l_248[1][1][0],(void*)0,&l_248[0][0][1],&l_248[0][0][1],(void*)0,&l_248[1][1][0],&g_93[3][4]}},{{&g_62,&l_248[0][0][1],(void*)0,&g_62,&l_248[0][0][1],&g_62,(void*)0,&l_248[0][0][1]},{&g_93[3][4],(void*)0,&g_62,&g_93[3][4],&g_62,&g_62,&g_93[3][4],&g_62}},{{&l_248[0][0][1],&l_248[0][0][1],(void*)0,&l_248[1][1][0],&g_93[3][4],(void*)0,&g_93[3][4],&l_248[1][1][0]},{&g_62,&l_248[1][1][0],&g_62,&g_62,&l_248[1][1][0],(void*)0,(void*)0,&l_248[1][1][0]}},{{&l_248[1][1][0],(void*)0,(void*)0,&l_248[1][1][0],&g_62,&g_62,&l_248[1][1][0],&g_62},{&l_248[1][1][0],&g_93[3][4],(void*)0,&g_93[3][4],&l_248[1][1][0],(void*)0,&l_248[0][0][1],&l_248[0][0][1]}}};
        int i, j, k;
        l_250 = l_248[1][1][0];
    }
    return g_207;

    }







static char * func_48(unsigned ** p_49, unsigned p_50, unsigned * p_51, unsigned p_52)
{
    short l_60 = 1L;
    int *l_61 = &g_62;
    unsigned short *l_74 = (void*)0;
    unsigned short *l_75 = (void*)0;
    unsigned short *l_76 = &g_77;
    unsigned *l_211[9][7];
    union U4 l_217 = {0x3B8242C987BE1634LL};
    long long *l_220 = &g_207.f0;
    unsigned char *l_223 = &g_133;
    unsigned char **l_222 = &l_223;
    int l_230 = 7L;
    long long l_231 = (-6L);
    int l_232 = (-1L);
    int l_233 = 0x80AD2BC0L;
    int l_234 = 0xC53E9B73L;
    int l_235 = 0L;
    int l_236 = 0x1AED713EL;
    int l_237 = 0x41119426L;
    int l_238 = 0x736A8BFFL;
    unsigned l_239 = 0x6DA9B72BL;
    int i, j;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 7; j++)
            l_211[i][j] = &g_212;
    }
    (*l_61) |= l_60;
    (*l_61) = (safe_sub_func_uint64_t_u_u(p_52, (p_52 < (safe_mod_func_int64_t_s_s((safe_mod_func_uint32_t_u_u((*p_51), (((safe_mul_func_int16_t_s_s(g_10, func_71((*l_61), ((*l_76)--)))) | ((!(--p_50)) > (p_52 < p_52))) && (safe_rshift_func_int16_t_s_u(g_62, p_50))))), 0x1090EADE4656F078LL)))));



    if ((((*p_51) = func_94(p_50, l_217, p_52, p_52, l_211[3][3])) ^ (((((*l_61) && (((*l_220) = (((safe_mul_func_uint16_t_u_u(p_50, 0xEC5BL)) == (*l_61)) || 0x6CL)) && (*l_61))) | p_52) == 0x63EDL) >= 0xAD79L)))
    {
        char *l_221 = &g_3;
        return l_221;


    }
    else
    {
        (*l_61) = (-10L);
    }
    if (((void*)0 == l_211[3][3]))
    {
        unsigned char ***l_224 = &l_222;
        (*l_224) = l_222;
    }
    else
    {
        short l_227[8][3][9] = {{{(-1L),0x553DL,0x4B8AL,0x1932L,1L,1L,1L,(-8L),1L},{1L,0x3484L,0xBB5CL,0xBB5CL,0x3484L,1L,0x27F4L,0x5EC5L,0x4B8AL},{5L,0L,0xBB5CL,1L,0x5EC5L,0xD536L,0x5AFDL,1L,0xD536L}},{{0xBB5CL,1L,0x4B8AL,0x5AFDL,0L,5L,0x1932L,0x1368L,(-1L)},{0xBB5CL,4L,0x5AFDL,(-1L),0x3484L,0xD536L,0x5098L,4L,0x5F61L},{0x1932L,0x3484L,0x5F61L,0x1932L,0L,0x5AFDL,5L,1L,0x6268L}},{{0x1932L,(-1L),(-1L),0x5AFDL,0L,0xAD75L,0xAD75L,0L,0x5AFDL},{0xBB5CL,4L,0xBB5CL,(-1L),0L,0x5098L,(-1L),(-1L),0x5AFDL},{1L,0L,0x6268L,5L,0x3484L,0x3DD4L,0x5F61L,(-8L),0x6268L}},{{0x5AFDL,1L,0xD536L,(-1L),0x73B0L,0xBB5CL,0x6268L,(-8L),0x5F61L},{0x5098L,0x553DL,0x3DD4L,0x5AFDL,0xD086L,0x27F4L,0x5AFDL,(-1L),(-1L)},{0x27F4L,0x1368L,0xD536L,0x1932L,(-1L),(-1L),0x5AFDL,0L,0xAD75L}},{{5L,1L,0x6268L,(-1L),4L,(-1L),0x6268L,1L,5L},{0x6C34L,0x1368L,0xBB5CL,1L,1L,(-1L),0x5F61L,4L,0x5098L},{0x4B8AL,0x553DL,(-1L),1L,0xBB5CL,0xA7A9L,0x1D80L,0x27F4L,0x3BDAL}},{{0L,0x4B8AL,0xCCDAL,(-1L),0xBB5CL,0L,0L,5L,0xB338L},{1L,0xD536L,(-7L),3L,0x4B8AL,0L,1L,0x6C34L,0x3BDAL},{0L,0x5098L,1L,3L,5L,1L,(-1L),0x4B8AL,(-1L)}},{{(-1L),0x6268L,(-1L),(-1L),0x6268L,(-1L),0x3BDAL,0x6C34L,1L},{(-7L),0x3DD4L,(-1L),1L,0x6C34L,0L,0xB338L,5L,0L},{(-1L),5L,1L,0xB338L,0xAD75L,(-7L),0x3BDAL,0x27F4L,0x1D80L}},{{0L,5L,(-7L),0x1D80L,0x3DD4L,0x7A2EL,(-1L),0x5098L,0xCCDAL},{0x3BDAL,0x3DD4L,0xCCDAL,0x3BDAL,(-1L),(-7L),1L,0x5AFDL,0xC5C9L},{0x3BDAL,0x6268L,0xA7A9L,(-7L),1L,0L,0L,1L,(-7L)}}};
        int *l_228 = &g_62;
        int *l_229[2];
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_229[i] = &g_93[1][4];
        for (g_157 = 0; (g_157 != 39); g_157++)
        {
            if ((*l_61))
                break;
        }
        l_239--;
        (*l_228) = 0L;
        --g_242;
    }
    return l_223;


}







static unsigned short func_71(short p_72, unsigned short p_73)
{
    unsigned l_86 = 7UL;
    short l_208 = 0x33FEL;
    unsigned *l_209 = &g_17;
    int l_210 = (-10L);
    l_210 = ((safe_add_func_int16_t_s_s((safe_mod_func_int8_t_s_s((safe_mod_func_uint64_t_u_u(l_86, (safe_lshift_func_int8_t_s_u(func_89(p_73), g_10)))), 0x50L)), l_86)) != (+(3UL | func_94(((g_205 != &g_206[4]) | p_72), g_207, l_86, l_208, l_209))));
    return g_207.f0;
}







static char func_89(unsigned p_90)
{
    int *l_91 = (void*)0;
    int *l_92[8][10] = {{&g_10,(void*)0,&g_9,(void*)0,&g_10,&g_62,&g_10,&g_9,&g_10,&g_10},{&g_62,&g_62,&g_10,&g_10,&g_10,&g_9,(void*)0,(void*)0,&g_9,&g_10},{&g_10,&g_10,&g_10,&g_10,&g_10,&g_62,(void*)0,&g_62,&g_10,&g_62},{&g_9,&g_10,&g_10,&g_9,&g_10,(void*)0,&g_10,(void*)0,&g_10,&g_9},{&g_62,&g_9,&g_62,&g_10,(void*)0,&g_9,&g_10,&g_9,&g_9,&g_9},{&g_9,&g_9,&g_10,&g_10,&g_9,&g_10,&g_10,&g_9,&g_10,&g_10},{&g_10,&g_10,&g_62,&g_62,&g_9,&g_9,&g_10,(void*)0,&g_9,&g_62},{&g_10,&g_10,&g_10,&g_62,&g_10,(void*)0,&g_10,&g_62,&g_10,&g_10}};
    char l_102 = (-3L);
    union U4 l_103 = {0x0C683D18CDA47519LL};
    union U3 *l_111 = &g_112[1][4][1];
    short l_117 = 1L;
    long long l_118 = 1L;
    long long l_120 = 0x0C0B734962E967B3LL;
    long long l_121[8] = {0x706FF82CCD755499LL,0x706FF82CCD755499LL,0x706FF82CCD755499LL,0x706FF82CCD755499LL,0x706FF82CCD755499LL,0x706FF82CCD755499LL,0x706FF82CCD755499LL,0x706FF82CCD755499LL};
    char l_122 = (-6L);
    short l_123 = (-1L);
    char l_124 = 0xE2L;
    unsigned *l_147 = &g_17;
    unsigned short l_161[1][8];
    unsigned long long l_173 = 0UL;
    char **l_187 = &g_108[0];
    unsigned char l_202[1];
    int i, j;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
            l_161[i][j] = 0x1236L;
    }
    for (i = 0; i < 1; i++)
        l_202[i] = 0x88L;
    g_93[3][4] = (g_62 |= 0x056FF37EL);
    if (func_94((safe_lshift_func_uint16_t_u_u(p_90, l_102)), l_103, (safe_add_func_uint32_t_u_u(p_90, 0xC53ECDF3L)), g_62, l_91))
    {
        char **l_107 = (void*)0;
        int l_110[3][3] = {{0xB2BF7FA1L,0xB2BF7FA1L,0xB2BF7FA1L},{0xE68EBBCFL,0xE68EBBCFL,0xE68EBBCFL},{0xB2BF7FA1L,0xB2BF7FA1L,0xB2BF7FA1L}};
        union U3 *l_113 = &g_112[0][7][0];
        int i, j;
        l_110[1][1] = ((g_108[0] = &g_3) != (void*)0);
        l_113 = l_111;
    }
    else
    {
        long long l_114 = 0xA7D7D4B927459160LL;
        char l_115 = 0x63L;
        int l_116[7][2][10] = {{{0L,(-1L),0x1EDCFEE1L,(-4L),0x1EDCFEE1L,(-1L),(-7L),0x142722C0L,0L,(-1L)},{(-1L),0x142722C0L,0xF146A408L,(-4L),0xC9426B2CL,0L,0xC9426B2CL,(-4L),0xF146A408L,0x142722C0L}},{{0x47B4319BL,0x142722C0L,0x1EDCFEE1L,8L,1L,0xF3906C13L,(-7L),(-1L),(-7L),0xF3906C13L},{0x3836DABDL,(-4L),0L,(-4L),0x3836DABDL,0xF3906C13L,0x61366E2CL,0L,(-1L),8L}},{{0x47B4319BL,(-1L),1L,0L,0L,0L,1L,(-1L),0x47B4319BL,8L},{(-1L),0L,0x61366E2CL,0xF3906C13L,0x3836DABDL,(-4L),0L,(-4L),0x3836DABDL,0xF3906C13L}},{{(-7L),(-1L),(-7L),0xF3906C13L,1L,8L,0x1EDCFEE1L,0x142722C0L,0x47B4319BL,0x142722C0L},{0xF146A408L,(-4L),0xC9426B2CL,0L,0xC9426B2CL,(-4L),0xF146A408L,0x142722C0L,(-1L),(-1L)}},{{0L,0x142722C0L,(-7L),(-4L),0x47B4319BL,0L,0x47B4319BL,(-4L),(-7L),0x142722C0L},{0xC9426B2CL,0x142722C0L,0x61366E2CL,8L,0L,0xF3906C13L,0xF146A408L,(-1L),0xF146A408L,0xF3906C13L}},{{0x5BE992D1L,(-4L),0x1EDCFEE1L,0xD54ED7DDL,(-7L),0L,0x5BE992D1L,0x142722C0L,0L,0xF3906C13L},{0L,8L,0x61366E2CL,0x142722C0L,0xC9426B2CL,0x142722C0L,0x61366E2CL,8L,0L,0xF3906C13L}},{{0L,0x142722C0L,0x5BE992D1L,0L,(-7L),0xD54ED7DDL,0x1EDCFEE1L,0xD54ED7DDL,(-7L),0L},{(-1L),8L,(-1L),0L,0x61366E2CL,0xF3906C13L,0x3836DABDL,(-4L),0L,(-4L)}}};
        int l_119 = 5L;
        unsigned l_125 = 9UL;
        int **l_128 = (void*)0;
        int **l_129 = &l_92[0][2];
        union U3 *l_193 = &g_112[0][2][2];
        int i, j, k;
        --l_125;
        (*l_129) = (void*)0;
        for (l_103.f1 = 0; (l_103.f1 == (-11)); l_103.f1 = safe_sub_func_uint64_t_u_u(l_103.f1, 8))
        {
            unsigned char *l_132[1][10][6] = {{{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133},{&g_133,&g_133,&g_133,&g_133,&g_133,&g_133}}};
            int **l_136[10] = {&l_91,&l_91,&l_91,&l_91,&l_91,&l_91,&l_91,&l_91,&l_91,&l_91};
            union U4 l_145[2][7] = {{{0xDD84B799F4994B00LL},{0xDD84B799F4994B00LL},{0xDD84B799F4994B00LL},{0xDD84B799F4994B00LL},{0xDD84B799F4994B00LL},{0xDD84B799F4994B00LL},{0xDD84B799F4994B00LL}},{{0xBB0E50E9C8FF4382LL},{0xBB0E50E9C8FF4382LL},{0xBB0E50E9C8FF4382LL},{0xBB0E50E9C8FF4382LL},{0xBB0E50E9C8FF4382LL},{0xBB0E50E9C8FF4382LL},{0xBB0E50E9C8FF4382LL}}};
            unsigned l_183 = 0x4836F794L;
            int i, j, k;
            if (((p_90 != p_90) == ((g_133++) | (l_136[0] != (void*)0))))
            {
                long long l_137[5];
                union U4 l_138 = {-7L};
                unsigned **l_144 = &g_54[6][3][1];
                int l_163 = 0L;
                int l_164 = (-8L);
                int l_169[8][8][4] = {{{0L,0xB747F85BL,0xAB5BA0F1L,1L},{0x3A4FACB9L,0x4A26B304L,(-10L),0xE36DE2C5L},{0xAB5BA0F1L,0x86362343L,0x9A8BBA51L,1L},{(-3L),0x86362343L,(-1L),0xE36DE2C5L},{1L,0x4A26B304L,0x4D2650AEL,1L},{0x19E4CFCBL,0xB747F85BL,0x3A4FACB9L,0L},{(-1L),1L,0L,0x40B19E0CL},{(-1L),1L,(-1L),0xB747F85BL}},{{0x4D2650AEL,(-7L),0x31365AFAL,0x4279E704L},{0x9A8BBA51L,0xF6929DEEL,0xA77BDA6FL,(-7L)},{1L,0x53DEAB57L,0xA77BDA6FL,0x28FBAF89L},{0x9A8BBA51L,1L,0x31365AFAL,5L},{0x4D2650AEL,0L,(-1L),4L},{(-1L),4L,0L,0xCE109F48L},{(-1L),0x28FBAF89L,0x3A4FACB9L,0xB0B635D1L},{0x19E4CFCBL,0xE36DE2C5L,0x4D2650AEL,0L}},{{1L,5L,(-1L),0L},{(-6L),0x40B19E0CL,(-3L),0xF1F6C9AEL},{0x19E4CFCBL,0x53DEAB57L,1L,6L},{0L,(-7L),0x19E4CFCBL,(-1L)},{0xA77BDA6FL,0xB747F85BL,(-1L),0L},{1L,0xF6929DEEL,(-1L),0xF6929DEEL},{1L,0xF1F6C9AEL,0x4D2650AEL,4L},{(-1L),5L,0x9A8BBA51L,0xB747F85BL}},{{1L,0x4279E704L,1L,1L},{1L,0L,0x9A8BBA51L,0x02B7D5DAL},{(-1L),1L,0x4D2650AEL,0x35DC99D9L},{1L,1L,(-1L),0x28FBAF89L},{1L,0x4A26B304L,(-1L),0xB0B635D1L},{0xA77BDA6FL,0x35DC99D9L,0x19E4CFCBL,5L},{0L,(-5L),1L,(-7L)},{0x19E4CFCBL,0L,(-3L),0x86362343L}},{{(-6L),0L,0xAB5BA0F1L,(-7L)},{(-7L),(-5L),0x3A4FACB9L,5L},{0L,0x35DC99D9L,0L,0xB0B635D1L},{0xAB5BA0F1L,0x4A26B304L,0x31365AFAL,0x28FBAF89L},{(-1L),1L,(-1L),0x35DC99D9L},{0x3A4FACB9L,1L,1L,0x02B7D5DAL},{(-3L),0L,0L,1L},{8L,0x4279E704L,0L,0xB747F85BL}},{{(-3L),5L,1L,4L},{0xA77BDA6FL,0x4A26B304L,0x9101B299L,0xF1F6C9AEL},{0x9101B299L,0xF1F6C9AEL,(-1L),1L},{0L,0xCE109F48L,0L,5L},{1L,1L,0xA77BDA6FL,5L},{0xAB5BA0F1L,0x02B7D5DAL,0L,0x4A26B304L},{8L,0xB747F85BL,1L,0x4A26B304L},{0x31365AFAL,0x02B7D5DAL,(-1L),5L}},{{0L,1L,0x31365AFAL,5L},{1L,0xCE109F48L,0x19E4CFCBL,1L},{0x4D2650AEL,0xF1F6C9AEL,1L,0xF1F6C9AEL},{0L,0x4A26B304L,0L,0L},{0x3A4FACB9L,0xF6929DEEL,(-6L),0xCE109F48L},{(-1L),0x40B19E0CL,(-1L),0x86362343L},{(-1L),1L,(-6L),0x28FBAF89L},{0x3A4FACB9L,0x86362343L,0L,0L}},{{0L,0L,1L,0x35DC99D9L},{0x4D2650AEL,0xE36DE2C5L,0x19E4CFCBL,(-1L)},{1L,0L,0x31365AFAL,0xF6929DEEL},{0L,(-7L),(-1L),1L},{0x31365AFAL,(-1L),1L,0xB0B635D1L},{8L,(-1L),0L,1L},{0xAB5BA0F1L,(-7L),0xA77BDA6FL,0xF6929DEEL},{1L,0L,0L,(-1L)}}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                    l_137[i] = 0x5C2FCE0FFC3AD434LL;
                if ((func_94(l_137[4], l_138, ((safe_lshift_func_int8_t_s_u((g_62 != p_90), 0)) | ((void*)0 != &g_109)), p_90, g_141) >= g_62))
                {
                    int l_162 = (-1L);
                    int l_165 = 0x9DFE08E6L;
                    int l_166 = (-1L);
                    int l_167 = 0L;
                    int l_168 = 0xB1585358L;
                    int l_170 = (-1L);
                    int l_172[3][10][4] = {{{0xAC3E94A3L,0x4463F7B0L,0L,0x71AC5D8DL},{0L,0x4463F7B0L,0xAC3E94A3L,(-8L)},{0xBC64B8D9L,0x821A7CDEL,0L,(-8L)},{1L,0x4463F7B0L,1L,0x71AC5D8DL},{1L,0x71AC5D8DL,0L,1L},{0xBC64B8D9L,0x71AC5D8DL,0xAC3E94A3L,0x71AC5D8DL},{0L,0x4463F7B0L,0xAC3E94A3L,(-8L)},{0xBC64B8D9L,0x821A7CDEL,0L,(-8L)},{1L,0x4463F7B0L,1L,0x71AC5D8DL},{1L,0x71AC5D8DL,0L,1L}},{{0xBC64B8D9L,0x71AC5D8DL,0xAC3E94A3L,0x71AC5D8DL},{0L,0x4463F7B0L,0xAC3E94A3L,(-8L)},{0xBC64B8D9L,0x821A7CDEL,0L,(-8L)},{1L,0x4463F7B0L,1L,0x71AC5D8DL},{1L,0x71AC5D8DL,0L,1L},{0xBC64B8D9L,0x71AC5D8DL,0xAC3E94A3L,0x71AC5D8DL},{0L,0x4463F7B0L,0xAC3E94A3L,(-8L)},{0xBC64B8D9L,0x821A7CDEL,0L,(-8L)},{1L,0x4463F7B0L,1L,0x71AC5D8DL},{1L,0x71AC5D8DL,0L,1L}},{{0xBC64B8D9L,0x71AC5D8DL,0xAC3E94A3L,0x71AC5D8DL},{0L,0x4463F7B0L,0xAC3E94A3L,(-8L)},{0xBC64B8D9L,0x821A7CDEL,0L,(-8L)},{1L,0x4463F7B0L,1L,0x71AC5D8DL},{1L,0x71AC5D8DL,0xBC64B8D9L,0x71AC5D8DL},{0x8BA87FB0L,0x821A7CDEL,1L,0x821A7CDEL},{0xBC64B8D9L,(-8L),1L,1L},{0x8BA87FB0L,0x4463F7B0L,0xBC64B8D9L,1L},{0L,(-8L),0L,0x821A7CDEL},{0L,0x821A7CDEL,0xBC64B8D9L,0x71AC5D8DL}}};
                    int i, j, k;
                    if (((safe_mod_func_int64_t_s_s((&g_133 != l_132[0][6][0]), g_3)) <= func_94(((l_144 == l_144) >= 0x8FL), l_145[0][2], (l_128 != g_146), g_62, l_147)))
                    {
                        unsigned *l_152 = &g_153[0][4];
                        unsigned long long *l_156 = &g_157;
                        int **l_158 = &l_91;
                        char *l_159 = (void*)0;
                        char *l_160 = &g_109;
                        g_93[3][4] = ((p_90 < (((*l_160) = ((safe_mod_func_int16_t_s_s(((g_133 = (((safe_sub_func_int32_t_s_s(g_9, (++(*l_152)))) <= 249UL) == g_9)) == func_94(((*l_156) |= 18446744073709551607UL), l_103, ((*l_160) = (((void*)0 != l_158) == g_112[1][4][1].f0)), g_9, (*l_144))), g_77)) <= p_90)) < l_161[0][1])) | p_90);
                        return l_138.f0;
                    }
                    else
                    {
                        char l_171 = 0x71L;
                        volatile union U2 **l_178 = &g_176;
                        l_173++;
                        if (g_17)
                            break;
                        (*l_178) = g_176;
                    }
                    for (g_133 = 0; (g_133 <= 50); ++g_133)
                    {
                        long long l_181 = (-1L);
                        int l_182[8];
                        char **l_186 = &g_108[0];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_182[i] = 0xF1E2145BL;
                        (*l_129) = l_92[4][0];
                        --l_183;
                        g_93[3][4] ^= (l_186 != l_187);
                        g_189 = (g_188 = &l_166);

                        ;
                        ;
                    }



                }
                else
                {
                    for (l_183 = 0; (l_183 <= 4); l_183 += 1)
                    {
                        unsigned l_190[2][6][4] = {{{0x4908EAF5L,0UL,0x17285DC7L,0x36C449B6L},{0UL,0x1B814450L,1UL,0x4908EAF5L},{0x13135EF4L,18446744073709551615UL,18446744073709551615UL,0x13135EF4L},{0x13135EF4L,0x36C449B6L,1UL,0x8A94D586L},{0UL,0x13135EF4L,0x17285DC7L,0xB0592546L},{0x4908EAF5L,0x88D66BC7L,0x4908EAF5L,0xB0592546L}},{{0x17285DC7L,0x13135EF4L,0UL,0x8A94D586L},{1UL,0x36C449B6L,0x13135EF4L,0x13135EF4L},{18446744073709551615UL,18446744073709551615UL,0x13135EF4L,0x4908EAF5L},{1UL,0x1B814450L,0UL,0x36C449B6L},{0x17285DC7L,0UL,0x4908EAF5L,0UL},{0x4908EAF5L,0UL,0x17285DC7L,0x36C449B6L}}};
                        int i, j, k;
                        if (l_190[0][1][2])
                            break;
                    }
                }
                l_164 ^= p_90;
            }
            else
            {
                unsigned l_195 = 2UL;
                int l_201 = 0x5990CAACL;
                for (l_123 = 0; (l_123 != (-12)); l_123 = safe_sub_func_uint16_t_u_u(l_123, 3))
                {
                    long long l_198 = 0xD6A88F2D55BC0CF6LL;
                    for (g_133 = 0; (g_133 <= 3); g_133 += 1)
                    {
                        union U3 **l_194 = &l_111;
                        int i, j;
                        (*l_194) = l_193;
                        l_195--;
                    }
                    l_198 &= 0xD47DF9C9L;
                    for (g_77 = (-17); (g_77 >= 55); ++g_77)
                    {
                        if (p_90)
                            break;
                    }
                }
                l_201 = (p_90 <= p_90);
            }
        }

                return p_90;
    }
    ++l_202[0];
    return p_90;
}







static int func_94(unsigned long long p_95, union U4 p_96, char p_97, int p_98, unsigned * p_99)
{
    unsigned char l_106 = 255UL;
    return l_106;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_9, "g_9", print_hash_value);
    transparent_crc(g_10, "g_10", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_77, "g_77", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_93[i][j], "g_93[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_109, "g_109", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_112[i][j][k].f0, "g_112[i][j][k].f0", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_153[i][j], "g_153[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_157, "g_157", print_hash_value);
    transparent_crc(g_177.f0, "g_177.f0", print_hash_value);
    transparent_crc(g_177.f1, "g_177.f1", print_hash_value);
    transparent_crc(g_207.f0, "g_207.f0", print_hash_value);
    transparent_crc(g_207.f1, "g_207.f1", print_hash_value);
    transparent_crc(g_212, "g_212", print_hash_value);
    transparent_crc(g_242, "g_242", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_335[i][j][k].f0, "g_335[i][j][k].f0", print_hash_value);
                transparent_crc(g_335[i][j][k].f1, "g_335[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_376, "g_376", print_hash_value);
    transparent_crc(g_544, "g_544", print_hash_value);
    transparent_crc(g_577, "g_577", print_hash_value);
    transparent_crc(g_585.f0, "g_585.f0", print_hash_value);
    transparent_crc(g_585.f2, "g_585.f2", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_676[i].f0, "g_676[i].f0", print_hash_value);
        transparent_crc(g_676[i].f1, "g_676[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_683, "g_683", print_hash_value);
    transparent_crc(g_691.f0, "g_691.f0", print_hash_value);
    transparent_crc(g_691.f1, "g_691.f1", print_hash_value);
    transparent_crc(g_759, "g_759", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    transparent_crc(g_820, "g_820", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_832[i], "g_832[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_886, "g_886", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
