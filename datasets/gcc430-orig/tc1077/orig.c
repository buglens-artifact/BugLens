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
   unsigned short f0;
   int f1;
   unsigned f2;
   unsigned f3;
};

union U1 {
   int f0;
};


static int g_15 = 1L;
static union U0 g_22[6] = {{0x6B6CL},{0x6B6CL},{0x6B6CL},{0x6B6CL},{0x6B6CL},{0x6B6CL}};
static int *g_50[10][5][5] = {{{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15,&g_15,(void*)0}},{{&g_15,&g_15,&g_15,&g_15,(void*)0},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,(void*)0,&g_15},{(void*)0,&g_15,&g_15,&g_15,(void*)0},{&g_15,&g_15,&g_15,&g_15,&g_15}},{{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,(void*)0,(void*)0,&g_15,&g_15},{&g_15,&g_15,(void*)0,&g_15,(void*)0},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15,&g_15,&g_15}},{{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15,&g_15,(void*)0},{(void*)0,(void*)0,&g_15,(void*)0,(void*)0}},{{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,(void*)0,&g_15,&g_15},{(void*)0,&g_15,(void*)0,&g_15,(void*)0},{&g_15,&g_15,&g_15,&g_15,(void*)0}},{{(void*)0,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15,&g_15,&g_15}},{{&g_15,(void*)0,&g_15,(void*)0,&g_15},{(void*)0,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{(void*)0,&g_15,&g_15,&g_15,&g_15}},{{&g_15,&g_15,(void*)0,&g_15,&g_15},{(void*)0,&g_15,&g_15,&g_15,&g_15},{&g_15,(void*)0,&g_15,&g_15,&g_15},{&g_15,&g_15,(void*)0,&g_15,&g_15},{(void*)0,&g_15,&g_15,(void*)0,&g_15}},{{&g_15,&g_15,(void*)0,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,(void*)0,(void*)0,&g_15},{&g_15,(void*)0,&g_15,&g_15,&g_15}},{{&g_15,(void*)0,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,(void*)0},{&g_15,(void*)0,&g_15,&g_15,&g_15},{&g_15,&g_15,&g_15,&g_15,(void*)0},{&g_15,(void*)0,&g_15,&g_15,&g_15}}};
static int **g_49 = &g_50[2][1][2];
static unsigned long long g_52 = 0x017290B1C5ADF851LL;
static unsigned char g_62 = 0xAEL;
static unsigned char g_68[6] = {0xF2L,0xF2L,0x30L,0xF2L,0xF2L,0x30L};
static unsigned g_81 = 9UL;
static unsigned long long *g_94[5][3] = {{&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52},{&g_52,&g_52,&g_52}};
static unsigned long long **g_93 = &g_94[0][0];
static unsigned long long **g_97 = &g_94[4][0];
static unsigned long long g_105 = 0x40C264F731603581LL;
static short g_132 = 0x8A34L;
static union U1 g_140 = {0x5F86E748L};
static short g_149 = (-1L);
static unsigned *g_158 = &g_81;
static unsigned **g_157 = &g_158;
static unsigned g_160 = 18446744073709551615UL;
static short g_164 = 0x3320L;
static int g_175 = 6L;
static char g_207 = 0x1BL;
static int *g_212 = &g_175;
static long long g_220 = 0x931A32E478D3F0A8LL;
static union U1 *g_277 = (void*)0;
static union U1 *g_278[2] = {(void*)0,(void*)0};
static union U0 *g_346[3][6] = {{&g_22[5],(void*)0,&g_22[5],&g_22[5],(void*)0,&g_22[5]},{&g_22[5],(void*)0,&g_22[5],&g_22[5],(void*)0,&g_22[5]},{&g_22[5],(void*)0,&g_22[5],&g_22[5],(void*)0,&g_22[5]}};
static union U0 g_398 = {65532UL};
static int g_422 = 0L;
static short g_467 = 0L;
static union U0 **g_469 = &g_346[2][1];
static union U0 ***g_468 = &g_469;
static unsigned ***g_497 = (void*)0;
static int g_510 = (-4L);
static int g_565[3] = {0xFE706369L,0xFE706369L,0xFE706369L};
static union U1 **g_597 = &g_277;
static union U1 ***g_596[4] = {&g_597,&g_597,&g_597,&g_597};
static unsigned g_622 = 0x544918D0L;
static short **g_668 = (void*)0;



static unsigned char func_1(void);
static int * func_2(unsigned long long p_3, unsigned long long p_4);
static unsigned char func_8(int * p_9, int p_10, short p_11, int * p_12, unsigned p_13);
static short func_17(union U0 p_18, unsigned long long p_19, unsigned long long p_20, unsigned char p_21);
static int * func_25(int * p_26, int * p_27, int ** p_28, int ** p_29);
static int * func_30(int * p_31, int p_32, long long p_33, union U0 p_34);
static int * func_35(union U0 p_36);
static union U0 func_37(int * p_38, int ** p_39, unsigned short p_40);
static int * func_41(long long p_42);
static unsigned long long func_46(unsigned p_47, int ** p_48);
static unsigned char func_1(void)
{
    short l_5 = 0x36CCL;
    int *l_14[3][10] = {{&g_15,&g_15,&g_15,(void*)0,(void*)0,&g_15,&g_15,&g_15,&g_15,&g_15},{&g_15,&g_15,(void*)0,&g_15,&g_15,&g_15,&g_15,&g_15,&g_15,(void*)0},{&g_15,&g_15,(void*)0,&g_15,&g_15,&g_15,(void*)0,&g_15,(void*)0,&g_15}};
    int **l_16 = &l_14[2][2];
    short *l_591 = &g_132;
    unsigned char *l_626[8][6] = {{&g_68[3],&g_68[3],&g_68[1],&g_62,&g_68[1],&g_68[3]},{&g_68[1],&g_68[3],&g_62,&g_62,&g_68[3],&g_68[1]},{&g_68[3],&g_68[1],&g_62,&g_68[1],&g_68[3],&g_68[3]},{&g_68[2],&g_68[1],&g_68[1],&g_68[2],&g_68[3],&g_68[2]},{&g_68[2],&g_68[3],&g_68[2],&g_68[1],&g_68[1],&g_68[2]},{&g_68[3],&g_68[3],&g_68[1],&g_62,&g_68[1],&g_68[3]},{&g_68[1],&g_68[3],&g_62,&g_62,&g_68[3],&g_68[1]},{&g_68[3],&g_68[1],&g_62,&g_68[1],&g_68[3],&g_68[3]}};
    unsigned *l_740 = &g_622;
    union U0 l_745 = {0x0598L};
    unsigned l_746 = 1UL;
    union U0 l_749 = {1UL};
    unsigned l_750 = 8UL;
    int i, j;
    (*l_16) = func_2(l_5, (safe_rshift_func_uint8_t_u_s((!(g_68[5] = func_8(((*l_16) = l_14[1][3]), g_15, l_5, &g_15, (((**g_93) &= (((*l_591) = ((func_17(g_22[5], g_22[5].f0, g_15, g_15) | 65534UL) && g_510)) & 9L)) == 0x7199019C6CB38CDALL)))), 3)));



    ;

    (*g_49) = (*l_16);
    (*g_212) = ((*g_158) < (((*l_740) = (**g_157)) != (safe_sub_func_int16_t_s_s(((g_207 = 0xB2L) || ((g_467 <= 1UL) < 0x377CL)), l_750))));
    return g_15;
}







static int * func_2(unsigned long long p_3, unsigned long long p_4)
{
    char l_627 = 0x22L;
    int *l_633[9] = {(void*)0,(void*)0,&g_175,(void*)0,(void*)0,&g_175,(void*)0,(void*)0,&g_175};
    unsigned long long ***l_637[4][9] = {{&g_93,&g_93,&g_97,&g_93,&g_93,&g_97,&g_93,&g_93,&g_97},{(void*)0,(void*)0,&g_97,(void*)0,(void*)0,&g_97,(void*)0,(void*)0,&g_97},{&g_93,&g_93,&g_97,&g_93,&g_93,&g_97,&g_93,&g_93,&g_97},{(void*)0,(void*)0,&g_97,(void*)0,(void*)0,&g_97,(void*)0,(void*)0,&g_97}};
    unsigned **l_644 = &g_158;
    int l_702 = 0x40A3F117L;
    int *l_710[1];
    int **l_730 = (void*)0;
    int *l_731 = &g_510;
    int i, j;
    for (i = 0; i < 1; i++)
        l_710[i] = &l_702;
    (*g_212) = l_627;
    if (((*g_212) = (*g_212)))
    {
        int *l_628 = &g_15;
        return l_628;


    }
    else
    {
        short l_634 = 0xDF62L;
        int l_646 = (-9L);
        int **l_651 = &g_50[7][2][0];
        union U1 **l_684[7][6] = {{&g_277,(void*)0,(void*)0,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,(void*)0,(void*)0,&g_277},{&g_278[0],&g_278[0],(void*)0,&g_278[0],(void*)0,&g_278[0]},{(void*)0,&g_277,&g_278[0],&g_278[0],&g_277,(void*)0},{&g_278[0],(void*)0,&g_278[0],(void*)0,&g_278[0],&g_278[0]},{&g_277,(void*)0,(void*)0,&g_277,&g_277,&g_277},{&g_277,&g_277,&g_277,(void*)0,(void*)0,&g_277}};
        unsigned long long ***l_705 = &g_93;
        int l_713 = 0xA2161018L;
        int *l_718 = (void*)0;
        int i, j;
        for (g_81 = 0; (g_81 != 48); g_81++)
        {
            for (g_62 = 0; (g_62 != 28); g_62++)
            {
                return l_633[1];


            }
        }
        if ((l_634 >= (safe_div_func_uint8_t_u_u((&g_93 != (l_637[2][5] = &g_93)), (safe_add_func_int32_t_s_s((l_646 = (safe_add_func_int32_t_s_s((p_4 || (safe_mod_func_int32_t_s_s(p_4, (((l_634 > ((void*)0 != l_644)) != (safe_unary_minus_func_uint16_t_u(g_81))) | g_467)))), l_634))), p_4))))))
        {
            long long l_650 = 0x1978C31135548D30LL;
            int *l_659 = &g_510;
            union U0 l_663 = {0x52CFL};
            if ((*g_212))
            {
                union U0 l_649 = {0x57A6L};
                int l_652 = 0L;
                for (g_207 = (-3); (g_207 != (-7)); g_207 = safe_sub_func_uint64_t_u_u(g_207, 1))
                {
                    l_652 = (((p_4 ^ ((g_62 &= (g_565[1] & g_422)) < p_3)) & (*g_212)) || (*g_158));
                }
                for (p_4 = 28; (p_4 > 6); p_4 = safe_sub_func_uint16_t_u_u(p_4, 8))
                {
                    unsigned short l_657[3][2] = {{0xAC07L,0xAC07L},{65535UL,0xAC07L},{0xAC07L,65535UL}};
                    int *l_658 = &l_652;
                    int i, j;
                    for (g_175 = (-19); (g_175 < 25); g_175 = safe_add_func_uint32_t_u_u(g_175, 7))
                    {
                        if (p_4)
                            break;
                    }
                    if (l_657[1][1])
                        break;
                    return l_659;


                }
            }
            else
            {
                unsigned *l_662 = &g_622;
                int l_665 = 0xB534EB98L;
                short ***l_669 = &g_668;
                short *l_672 = &g_132;
                short **l_671 = &l_672;
                short ***l_670 = &l_671;
                for (g_81 = 0; (g_81 <= 4); g_81 += 1)
                {
                    char l_664 = 0x56L;
                    for (g_398.f1 = 4; (g_398.f1 >= 0); g_398.f1 -= 1)
                    {
                        int i;
                        (*g_212) &= (safe_rshift_func_uint8_t_u_s(((void*)0 != l_662), ((1UL != g_15) >= (**g_97))));
                        if ((*g_212))
                            continue;
                        (*g_49) = &l_665;
                    }

                    for (l_663.f2 = 0; (l_663.f2 <= 2); l_663.f2 += 1)
                    {
                        long long *l_666 = &g_220;
                        union U0 l_667 = {0x91E8L};
                        int i;
                        (*l_651) = l_659;
                        (*l_659) ^= g_565[l_663.f2];
                        (*g_212) |= (-1L);
                        (*l_651) = func_30(l_633[1], p_4, ((*l_666) = (p_4 & g_132)), l_667);
                    }

                                    }


                (*l_670) = ((*l_669) = g_668);

                ;
                (*g_212) = (-8L);
                (*g_469) = &l_663;


            }


            (*l_659) ^= (*g_212);
        }
        else
        {
            union U1 **l_685 = &g_277;
            int *l_688 = &g_175;
            unsigned long long ***l_706 = &g_97;
            int *l_714 = &l_713;
            union U0 l_715 = {0x419EL};
            for (g_81 = 0; (g_81 <= 5); g_81 += 1)
            {
                union U1 *l_673 = &g_140;
                union U0 l_677 = {0xF9B0L};
                unsigned char *l_695[5][4] = {{&g_68[3],&g_68[3],&g_68[3],&g_68[3]},{&g_68[3],&g_68[3],&g_68[3],&g_68[3]},{&g_68[3],&g_68[3],&g_68[3],&g_68[3]},{&g_68[3],&g_68[3],&g_68[3],&g_68[3]},{&g_68[3],&g_68[3],&g_68[3],&g_68[3]}};
                int i, j;
                (*g_597) = l_673;

                ;
                for (g_398.f2 = 0; (g_398.f2 <= 5); g_398.f2 += 1)
                {
                    unsigned *l_676 = &g_81;
                    int l_686 = 0x85648B64L;
                    int i;
                    for (g_207 = 5; (g_207 >= 1); g_207 -= 1)
                    {
                        return l_633[1];


                    }
                    (*g_212) = g_68[g_398.f2];
                    if (((safe_add_func_int8_t_s_s(g_68[g_81], 0xE2L)) & (((*g_157) = l_676) == (void*)0)))
                    {
                        long long *l_687 = &g_220;
                        int i;
                        (*l_651) = &g_175;
                        (*g_212) ^= (((((*l_687) = (l_686 = g_22[5].f0)) && 0UL) <= 0x0D235F69L) != g_68[3]);
                        return l_688;


                    }
                    else
                    {
                        union U0 l_689 = {0xDF2AL};
                        int l_694 = 0L;
                        (*l_651) = func_30(l_633[6], p_4, (g_220 ^= p_3), l_689);
                        l_694 = (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_164, 9)), p_3));
                    }
                }

                if (((g_62 = 0x32L) >= (1L <= (safe_lshift_func_uint8_t_u_s(g_160, 6)))))
                {
                    for (g_398.f2 = 29; (g_398.f2 >= 16); g_398.f2 = safe_sub_func_int8_t_s_s(g_398.f2, 3))
                    {
                        (*l_688) = p_3;
                    }
                    for (p_4 = 0; (p_4 <= 5); p_4 += 1)
                    {
                        (*g_212) = (*g_212);
                    }
                }
                else
                {
                    int *l_703 = &g_510;
                    if ((+((*l_688) |= (safe_rshift_func_uint16_t_u_u(1UL, l_702)))))
                    {
                        unsigned char l_704 = 0x27L;
                        (*g_49) = l_703;
                        (*l_688) = 0xFE96AE41L;
                        (*l_703) ^= 9L;
                        (*l_703) = (p_3 ^ l_704);
                    }
                    else
                    {
                        unsigned long long ****l_707 = &l_637[2][5];
                        (*l_703) = (((*l_707) = (l_706 = l_705)) != &g_93);

                        ;
                    }

                    ;
                    (*g_212) = (p_3 ^ (safe_add_func_int64_t_s_s((*l_688), 0x2FB528D72A514633LL)));
                    return &g_510;


                }
            }

            ;
            for (g_15 = 7; (g_15 == (-1)); --g_15)
            {
                return l_688;


            }
            l_713 = p_3;
            if (((p_4 > ((void*)0 == l_714)) ^ p_4))
            {
                unsigned **l_720 = &g_158;
                for (g_398.f0 = (-14); (g_398.f0 < 5); g_398.f0 = safe_add_func_uint8_t_u_u(g_398.f0, 6))
                {
                    int *l_719 = (void*)0;
                    unsigned **l_721 = (void*)0;
                    l_719 = l_718;
                    (*g_212) ^= (l_720 == l_721);
                }
            }
            else
            {
                int *l_722 = &g_422;
                unsigned l_728 = 0xCD3CABE3L;
                union U0 l_729[8] = {{0x33DCL},{65535UL},{0x33DCL},{0x33DCL},{65535UL},{0x33DCL},{0x33DCL},{65535UL}};
                int i;
                (*l_651) = func_30(((*l_651) = l_722), p_3, ((p_4 >= (!p_4)) & ((g_81 < (safe_mod_func_int64_t_s_s((safe_add_func_uint64_t_u_u((safe_unary_minus_func_uint64_t_u(p_3)), ((l_728 = p_4) > (p_3 == (p_3 >= p_4))))), (**g_93)))) > p_4)), l_729[1]);


                (*l_651) = func_25(l_714, func_25(&g_422, func_35(l_715), &l_722, &l_718), &g_212, &l_633[1]);
            }


        }


        ;

    }


    ;

    (*g_212) = (p_4 && g_220);
    l_633[1] = ((*g_49) = &l_702);



    return l_731;



}







static unsigned char func_8(int * p_9, int p_10, short p_11, int * p_12, unsigned p_13)
{
    union U1 ***l_598 = &g_597;
    int *l_599 = &g_510;
    unsigned long long ***l_604 = (void*)0;
    unsigned long long ****l_605 = &l_604;
    int ***l_608 = &g_49;
    unsigned short *l_609 = &g_398.f0;
    union U0 l_610 = {0x914FL};
    unsigned *l_621[9][5] = {{&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622},{&g_622,&g_622,&g_622,&g_622,&g_622}};
    int l_623 = 0x6A5772A8L;
    unsigned short *l_624[1][4][6] = {{{&g_22[5].f0,&l_610.f0,&l_610.f0,&g_22[5].f0,&l_610.f0,&l_610.f0},{&g_22[5].f0,&l_610.f0,&l_610.f0,&g_22[5].f0,&l_610.f0,&l_610.f0},{&g_22[5].f0,&l_610.f0,&l_610.f0,&g_22[5].f0,&l_610.f0,&l_610.f0},{&g_22[5].f0,&l_610.f0,&l_610.f0,&g_22[5].f0,&l_610.f0,&l_610.f0}}};
    short *l_625 = &g_467;
    int i, j, k;
    (*p_12) &= (-6L);
    (*p_12) ^= (safe_add_func_int64_t_s_s(p_10, (safe_add_func_int32_t_s_s(0x37722A83L, (g_596[3] != l_598)))));
    p_9 = func_30(l_599, (safe_add_func_uint64_t_u_u((*l_599), ((*l_599) & (g_62 = (65535UL == (((*l_609) = (safe_rshift_func_uint16_t_u_s((((((*l_605) = l_604) == &g_93) != ((safe_div_func_uint16_t_u_u(65528UL, g_422)) < (-1L))) > (-6L)), g_149))) > g_68[3])))))), p_11, l_610);

    ;
    (*g_49) = func_30(func_35(func_37(l_599, (*l_608), (*l_599))), (safe_rshift_func_int8_t_s_s((safe_sub_func_uint64_t_u_u(p_11, ((safe_div_func_int16_t_s_s(((*l_625) &= (safe_div_func_uint16_t_u_u((g_22[5].f0 = (safe_mod_func_int16_t_s_s(((l_623 &= (p_13 = p_11)) < (*l_599)), (*l_599)))), g_68[4]))), p_11)) && g_622))), 4)), p_10, l_610);


    return (*l_599);
}







static short func_17(union U0 p_18, unsigned long long p_19, unsigned long long p_20, unsigned char p_21)
{
    long long l_432[10];
    int **l_463 = (void*)0;
    unsigned ***l_498 = &g_157;
    unsigned short l_557[6][9] = {{0x9831L,65530UL,65530UL,0x9831L,65530UL,65530UL,0x9831L,65530UL,65530UL},{1UL,0x542CL,65526UL,0x3446L,65526UL,0x542CL,1UL,0x542CL,65526UL},{0x9831L,65530UL,65530UL,0x9831L,65530UL,65530UL,0x9831L,65530UL,65530UL},{1UL,0x542CL,65526UL,0x3446L,65526UL,0x542CL,1UL,0x542CL,65526UL},{0x9831L,65530UL,65530UL,0x9831L,65530UL,65530UL,0x9831L,65530UL,65530UL},{1UL,0x271EL,0UL,0x542CL,0UL,0x271EL,65526UL,0x271EL,0UL}};
    char l_564 = 0L;
    long long l_590 = 2L;
    int i, j;
    for (i = 0; i < 10; i++)
        l_432[i] = (-3L);
    for (p_21 = (-19); (p_21 == 17); p_21++)
    {
        int **l_309 = (void*)0;
        union U0 l_435[10] = {{0xC12DL},{65528UL},{0x53A5L},{65528UL},{0xC12DL},{0xC12DL},{65528UL},{0x53A5L},{65528UL},{0xC12DL}};
        int *l_450 = &g_15;
        int l_542 = 0xCEE6F239L;
        union U0 **l_545 = &g_346[1][5];
        unsigned long long l_566 = 0x1C2F0A139A13855ALL;
        int i;
        for (p_19 = 0; (p_19 <= 5); p_19 += 1)
        {
            long long l_43 = 1L;
            int **l_308 = &g_212;
            short *l_464 = (void*)0;
            unsigned long long *l_511 = (void*)0;
            union U0 **l_531 = &g_346[1][5];
            int l_552 = (-10L);
            int i;
        }
    }
    (*g_212) &= (-1L);
    for (p_21 = 0; (p_21 <= 15); p_21++)
    {
        unsigned long long l_587 = 9UL;
        for (g_140.f0 = 2; (g_140.f0 >= 0); g_140.f0 -= 1)
        {
            int i;
            (*g_212) = l_432[(g_140.f0 + 1)];
            (*g_212) = (safe_rshift_func_int8_t_s_u(g_220, 2));
        }
        for (g_149 = 0; (g_149 <= 2); g_149 += 1)
        {
            unsigned short *l_585 = &l_557[4][4];
            int l_586 = (-10L);
            int l_588[5];
            int i;
            for (i = 0; i < 5; i++)
                l_588[i] = 0x9BD081EEL;
            l_588[2] |= ((p_19 < (safe_div_func_uint8_t_u_u(((safe_add_func_int32_t_s_s(0x7C0C202DL, ((((safe_add_func_int16_t_s_s((p_18.f0 & g_398.f0), ((*l_585) = g_22[5].f0))) != (l_586 == g_398.f0)) <= l_586) & (g_62 == l_587)))) && l_586), l_586))) >= 1UL);
            for (l_564 = 0; (l_564 <= 2); l_564 += 1)
            {
                int *l_589 = &g_510;
                (*g_212) = l_587;
                if (p_19)
                    continue;
                (*g_49) = &l_586;
                l_589 = ((*g_49) = (*g_49));

                ;
            }


            return p_19;


        }
        return g_81;
    }
    return l_590;
}







static int * func_25(int * p_26, int * p_27, int ** p_28, int ** p_29)
{
    unsigned long long l_451 = 9UL;
    int l_452[5] = {0xABE5443DL,0xABE5443DL,0xABE5443DL,0xABE5443DL,0xABE5443DL};
    int *l_453 = &g_422;
    int *l_454 = &g_422;
    int i;
    (*l_453) &= (l_452[2] |= l_451);
    return l_454;


}







static int * func_30(int * p_31, int p_32, long long p_33, union U0 p_34)
{
    int **l_436[4][4][1] = {{{&g_50[2][1][2]},{&g_50[2][1][2]},{&g_50[2][1][2]},{&g_50[6][4][0]}},{{&g_50[2][1][2]},{&g_50[6][4][0]},{&g_50[2][1][2]},{&g_50[2][1][2]}},{{&g_50[2][1][2]},{&g_50[6][4][0]},{&g_50[2][1][2]},{&g_50[6][4][0]}},{{&g_50[2][1][2]},{&g_50[2][1][2]},{&g_50[2][1][2]},{&g_50[6][4][0]}}};
    unsigned long long ***l_437 = (void*)0;
    short *l_440[6];
    unsigned *l_441 = (void*)0;
    unsigned *l_442 = (void*)0;
    unsigned *l_443 = (void*)0;
    unsigned *l_444 = &g_398.f3;
    unsigned short l_445[6];
    int i, j, k;
    for (i = 0; i < 6; i++)
        l_440[i] = &g_164;
    for (i = 0; i < 6; i++)
        l_445[i] = 0xC6A9L;
    l_436[3][1][0] = l_436[3][1][0];
    p_32 ^= (l_437 == (void*)0);
    if (l_445[1])
    {
        unsigned l_446 = 0UL;
        int l_447 = (-1L);
        p_32 = (p_31 == l_442);
        p_32 = l_446;
        l_447 ^= (g_68[0] && (g_15 >= g_398.f0));
    }
    else
    {
        unsigned char *l_449 = &g_68[1];
        unsigned char **l_448 = &l_449;
        p_32 &= (((*l_448) = &g_68[3]) == &g_62);
    }
    return &g_15;


}







static int * func_35(union U0 p_36)
{
    unsigned ***l_426 = &g_157;
    unsigned ****l_425 = &l_426;
    union U1 **l_427 = &g_278[0];
    int l_428 = 0L;
    int *l_429 = (void*)0;
    l_428 = ((((*l_425) = &g_157) == (void*)0) == ((void*)0 != l_427));
    return l_429;


}







static union U0 func_37(int * p_38, int ** p_39, unsigned short p_40)
{
    int l_312 = 0x17A759BEL;
    long long *l_320 = &g_220;
    int *l_323 = &g_175;
    unsigned char l_324 = 0x48L;
    long long l_325 = 0xA9577ACFE27E4D43LL;
    union U0 l_327 = {0x4397L};
    int *l_328 = &g_15;
    unsigned l_360 = 0x6A5C97E8L;
    short *l_408 = &g_132;
    short *l_409 = &g_149;
    union U0 **l_414 = &g_346[0][1];
    unsigned char *l_423 = &g_62;
    short l_424[5] = {1L,1L,1L,1L,1L};
    int i;
    if ((safe_mod_func_uint8_t_u_u(l_312, (safe_rshift_func_uint16_t_u_s(((safe_mod_func_uint64_t_u_u(p_40, (p_40 & (safe_unary_minus_func_int32_t_s((((**g_97) = ((safe_mod_func_int64_t_s_s((l_312 >= (((*l_320) = g_105) || ((*l_320) = g_175))), 0xD8ED3679061F1601LL)) || (safe_add_func_uint32_t_u_u(p_40, (((*l_323) ^= (p_40 ^ g_68[0])) | l_324))))) ^ p_40)))))) < 0UL), l_325)))))
    {
        unsigned l_326[3][6];
        int i, j;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 6; j++)
                l_326[i][j] = 0x4C2A5EDBL;
        }
        if (l_326[0][3])
        {
            (*g_49) = &g_15;
        }
        else
        {
            return l_327;

                    }
    }
    else
    {
        short l_343 = (-6L);
        (*g_49) = l_328;
        for (l_325 = 0; (l_325 == 14); ++l_325)
        {
            int l_341 = 0xCC565EBFL;
            int *l_375 = &g_175;
            int *l_386 = &l_341;
            union U1 *l_399[3][2];
            union U1 **l_400[9][2][1] = {{{&g_277},{&g_277}},{{&g_277},{&g_277}},{{&g_277},{&g_277}},{{&g_277},{&g_277}},{{&g_277},{&g_277}},{{&g_277},{&g_277}},{{&g_277},{&g_277}},{{&g_277},{&g_277}},{{&g_277},{&g_277}}};
            int i, j, k;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 2; j++)
                    l_399[i][j] = (void*)0;
            }
            for (g_164 = 0; (g_164 == 4); g_164 = safe_add_func_uint64_t_u_u(g_164, 5))
            {
                union U0 *l_334 = (void*)0;
                union U0 **l_333 = &l_334;
                l_328 = p_38;

                ;
                (*l_333) = &g_22[2];

                ;
                (*g_49) = p_38;
                (*g_49) = (void*)0;
            }
            for (g_81 = 18; (g_81 >= 7); g_81--)
            {
                short l_337 = 0xEA22L;
                int l_359 = 0xA894B278L;
                unsigned short l_361 = 5UL;
                unsigned long long **l_371 = &g_94[0][0];
                union U0 *l_395 = &g_22[1];
                if (((*l_323) = l_337))
                {
                    unsigned char l_340 = 0x6FL;
                    for (g_175 = 0; (g_175 <= (-1)); g_175 = safe_sub_func_uint8_t_u_u(g_175, 9))
                    {
                        int *l_342 = &l_341;
                        l_340 = 0L;
                        (*l_342) = l_341;
                    }
                    (*l_323) = 0x4E828C60L;
                }
                else
                {
                    long long l_348 = 0x0556659094DFB8B3LL;
                    if (l_343)
                        break;
                    if (p_40)
                    {
                        union U0 *l_345 = (void*)0;
                        union U0 **l_344[7] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        g_346[1][5] = &g_22[3];
                        l_341 = (-10L);
                    }
                    else
                    {
                        int *l_347[8] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
                        int i;
                        l_348 = ((*l_323) = l_343);
                    }
                    for (g_160 = 0; (g_160 <= 1); g_160 += 1)
                    {
                        unsigned short *l_353 = &l_327.f0;
                        int *l_358[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_358[i] = &l_341;
                        (*l_323) = (-6L);
                        l_341 &= (safe_sub_func_int16_t_s_s((safe_mod_func_int32_t_s_s(p_40, ((p_40 >= 0x77217803L) || 0xACFDD263AD6D1220LL))), g_164));
                        l_359 ^= ((0x8EB7L && ((*l_353) = 0x2D2FL)) && ((*l_323) = (safe_add_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(g_105, p_40)), g_68[3]))));
                        if (l_359)
                            break;
                    }
                    if (l_360)
                        break;
                }
                if (l_361)
                {
                    for (g_164 = (-26); (g_164 < (-19)); g_164 = safe_add_func_uint32_t_u_u(g_164, 4))
                    {
                        (*l_323) ^= l_341;
                    }
                    for (g_140.f0 = (-19); (g_140.f0 >= 9); g_140.f0 = safe_add_func_uint8_t_u_u(g_140.f0, 1))
                    {
                        int *l_366 = (void*)0;
                        int l_369[7][3][4] = {{{0x14EEBAE7L,(-2L),4L,0xC82EA3C6L},{0L,0xD26E86E7L,0xA900BB5DL,4L},{0xD1AAE636L,0x096BB92BL,0x520D2669L,0x14EEBAE7L}},{{0xD1AAE636L,0xA900BB5DL,0xA900BB5DL,0xD1AAE636L},{0L,0x14EEBAE7L,4L,4L},{0xC82EA3C6L,0x14EEBAE7L,0x2A9D3D1FL,0xD26E86E7L}},{{0xD1AAE636L,0x79D2087AL,4L,0xD26E86E7L},{(-2L),0x14EEBAE7L,(-2L),4L},{0x096BB92BL,0xC82EA3C6L,0x438B2605L,0x096BB92BL}},{{0xD1AAE636L,4L,0L,0xC82EA3C6L},{4L,0x14EEBAE7L,0L,0L},{0xD1AAE636L,0xD1AAE636L,0x438B2605L,0xD26E86E7L}},{{0x096BB92BL,0xA900BB5DL,(-2L),0xC82EA3C6L},{(-2L),0xC82EA3C6L,4L,(-2L)},{0xD1AAE636L,0xC82EA3C6L,0x2A9D3D1FL,0xC82EA3C6L}},{{0xC82EA3C6L,0xA900BB5DL,0L,0xD26E86E7L},{0x79D2087AL,0xD1AAE636L,4L,0L},{0x096BB92BL,0x14EEBAE7L,0x3B4A1280L,0xC82EA3C6L}},{{0x096BB92BL,4L,4L,0x096BB92BL},{0x79D2087AL,0xC82EA3C6L,0L,4L},{0xC82EA3C6L,0x14EEBAE7L,0x2A9D3D1FL,0xD26E86E7L}}};
                        unsigned long long ***l_370[4];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_370[i] = &g_93;
                        (*g_49) = l_366;
                        (*l_323) = (safe_lshift_func_uint16_t_u_s(p_40, (l_369[5][1][2] == ((g_97 = &g_94[0][0]) != l_371))));
                        if (l_343)
                            break;
                        (*g_49) = &g_15;
                    }
                    for (l_343 = (-23); (l_343 != 17); ++l_343)
                    {
                        char l_374 = 1L;
                        if (l_374)
                            break;
                    }
                }
                else
                {
                    short *l_380 = &g_149;
                    int *l_385[10][3] = {{&g_15,&g_15,&l_359},{&g_15,&l_341,(void*)0},{&g_175,(void*)0,&g_175},{(void*)0,&l_341,&g_15},{&l_359,&g_15,&g_15},{&l_359,&l_359,&g_175},{&l_341,&l_341,(void*)0},{&l_359,(void*)0,&l_359},{&l_359,(void*)0,&l_359},{(void*)0,&l_341,&l_341}};
                    int i, j;
                    for (g_140.f0 = 4; (g_140.f0 >= 1); g_140.f0 -= 1)
                    {
                        unsigned char *l_384 = &g_62;
                        int i;
                        p_38 = l_375;

                        ;
                        (*l_375) = (((safe_div_func_uint64_t_u_u((g_68[g_140.f0] == ((*l_384) = (safe_sub_func_int64_t_s_s((p_40 != (l_380 == &l_337)), (safe_unary_minus_func_uint8_t_u(((l_343 ^ (safe_rshift_func_uint16_t_u_u(((&g_15 != l_323) < (*l_375)), (g_68[g_140.f0] < (*l_375))))) != (-8L)))))))), 0x0196E379D1E072D8LL)) == g_132) | p_40);
                        (*l_323) &= (&g_140 == (void*)0);
                        l_386 = l_385[3][2];

                        ;
                    }


                    (*l_323) = (safe_sub_func_uint64_t_u_u((l_343 != (safe_lshift_func_int16_t_s_s(p_40, (&g_278[0] != (void*)0)))), 0x7C96607F19A99B7ALL));
                }


                for (g_149 = 0; (g_149 <= 19); ++g_149)
                {
                    for (l_327.f1 = 14; (l_327.f1 > 29); ++l_327.f1)
                    {
                        union U0 **l_396 = &g_346[2][3];
                        union U0 **l_397 = &l_395;
                        (*g_49) = &g_15;
                        (*g_49) = (void*)0;
                        (*l_375) |= l_359;
                        (*l_397) = ((*l_396) = l_395);
                    }

                                        return g_398;

                                    }
            }


            g_277 = l_399[2][0];
        }


        ;
    }


    ;
    if ((*l_323))
    {
        char l_404 = (-6L);
        int l_417 = 0x158E4022L;
        union U0 l_418 = {0x19A4L};
        (*g_49) = l_323;
        for (l_312 = 1; (l_312 >= 0); l_312 -= 1)
        {
            char *l_403 = &g_207;
            union U0 l_405 = {0xCBC5L};
            short *l_407 = &g_132;
            short **l_406[4];
            union U0 **l_412 = &g_346[1][5];
            union U0 ***l_413[7][10] = {{(void*)0,(void*)0,(void*)0,(void*)0,&l_412,(void*)0,&l_412,&l_412,&l_412,&l_412},{(void*)0,&l_412,&l_412,&l_412,&l_412,&l_412,(void*)0,&l_412,&l_412,&l_412},{&l_412,(void*)0,&l_412,(void*)0,(void*)0,(void*)0,(void*)0,&l_412,(void*)0,&l_412},{(void*)0,(void*)0,&l_412,(void*)0,&l_412,&l_412,(void*)0,&l_412,&l_412,(void*)0},{(void*)0,&l_412,(void*)0,(void*)0,&l_412,&l_412,&l_412,&l_412,&l_412,&l_412},{&l_412,(void*)0,&l_412,&l_412,(void*)0,&l_412,(void*)0,&l_412,(void*)0,&l_412},{&l_412,&l_412,(void*)0,&l_412,&l_412,&l_412,(void*)0,&l_412,&l_412,&l_412}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_406[i] = &l_407;
            l_404 = ((p_40 | (g_175 == g_164)) <= ((*l_403) = (-1L)));
            for (g_398.f2 = 0; (g_398.f2 <= 2); g_398.f2 += 1)
            {
                return l_405;

                            }

                        l_417 |= ((((((&g_220 != (void*)0) ^ ((**g_93) = ((l_408 = &g_164) == l_409))) && (safe_mod_func_int8_t_s_s(((l_414 = l_412) == (void*)0), p_40))) > ((*g_158) = (safe_rshift_func_uint16_t_u_u(g_132, 2)))) <= l_404) >= l_404);

            ;
            return l_418;

                    }
        l_417 = (safe_add_func_int64_t_s_s(g_149, (-7L)));
        (*l_323) |= l_404;
    }
    else
    {
        int *l_421 = &g_422;
        (*l_421) &= (*l_323);
    }
    l_424[3] = ((g_207 | 3L) && ((*l_423) = g_149));
    return l_327;

    }







static int * func_41(long long p_42)
{
    short *l_163[7][6] = {{&g_164,&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,&g_164,&g_164,&g_164,&g_164},{&g_164,&g_164,(void*)0,&g_164,(void*)0,&g_164},{&g_164,&g_164,(void*)0,&g_164,&g_164,&g_164},{&g_164,(void*)0,&g_164,&g_164,&g_164,&g_164},{(void*)0,(void*)0,&g_164,&g_164,&g_164,&g_164}};
    int l_167 = 0L;
    int l_208[3];
    int l_210[7] = {0x60A6F78AL,0L,0x60A6F78AL,0x60A6F78AL,0L,0x60A6F78AL,0x60A6F78AL};
    char *l_291 = &g_207;
    unsigned long long *l_299 = (void*)0;
    int **l_304 = &g_50[2][1][2];
    int *l_306 = &l_167;
    int *l_307 = (void*)0;
    int i, j;
    for (i = 0; i < 3; i++)
        l_208[i] = (-6L);
    if ((((((safe_sub_func_int64_t_s_s(g_15, func_46(g_15, g_49))) >= (safe_lshift_func_uint16_t_u_s((l_163[1][2] == (void*)0), (9L >= (l_167 = (safe_div_func_int8_t_s_s(g_15, 3UL))))))) & p_42) & 1L) > 0x701912ACL))
    {
        int ***l_168 = &g_49;
        int *l_169 = &l_167;
        int *l_174 = &g_175;
        unsigned l_176 = 4294967295UL;
        long long l_185 = 0xDB683C2DD4508A83LL;
        long long l_189[3];
        union U1 *l_280 = &g_140;
        int *l_295 = &g_175;
        int i;
        for (i = 0; i < 3; i++)
            l_189[i] = 0x75960B8A5674ED49LL;
        (*l_169) &= (~((g_52 != g_164) > p_42));
        l_167 = p_42;
        if ((safe_sub_func_int64_t_s_s((+((p_42 >= (~(p_42 < ((safe_sub_func_int16_t_s_s(0x4EF5L, g_81)) == 0x4697L)))) == (((**g_93) = l_167) || ((!p_42) & ((*l_174) = ((*l_169) &= (-1L))))))), ((l_176 >= (*g_158)) > g_68[3]))))
        {
            unsigned long long *l_179 = &g_52;
            int l_180 = (-7L);
            for (g_175 = 0; (g_175 <= 5); g_175 += 1)
            {
                int *l_188 = &l_167;
                int l_209 = 0xDE46226DL;
                if ((g_105 != (g_15 < l_167)))
                {
                    for (g_105 = 1; (g_105 <= 5); g_105 += 1)
                    {
                        unsigned l_184[2];
                        union U0 *l_187 = &g_22[1];
                        union U0 **l_186 = &l_187;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_184[i] = 0xC6001B99L;
                        l_185 ^= (((*g_158) = (p_42 ^ ((((*g_97) = (*g_93)) == l_179) || l_180))) & (p_42 || ((*l_169) = (safe_rshift_func_int16_t_s_u((p_42 >= ((~(l_167 < (safe_unary_minus_func_int8_t_s(l_184[0])))) & l_184[1])), 11)))));
                        if ((*l_169))
                            break;
                        (*l_186) = &g_22[5];
                        if (l_184[0])
                            continue;
                    }
                }
                else
                {
                    (*l_169) |= (g_105 < (*l_174));
                }
                if ((&g_22[5] != &g_22[5]))
                {
                    int *l_190 = &l_167;
                    if (l_167)
                    {
                        return &g_175;



                    }
                    else
                    {
                        (*g_49) = l_188;
                        if (l_189[0])
                            continue;
                        l_190 = &g_15;

                        ;
                    }

                    ;
                }
                else
                {
                    int l_201 = 0xE7814DC6L;
                    long long *l_202[2];
                    int l_203 = 0x034B83A5L;
                    unsigned ***l_205 = &g_157;
                    char *l_206 = &g_207;
                    int *l_211 = &l_210[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_202[i] = &l_185;
                    for (p_42 = 1; (p_42 <= 5); p_42 += 1)
                    {
                        (**l_168) = &g_15;
                    }
                    (*l_211) = (safe_div_func_uint32_t_u_u(((l_167 = ((*g_158) = (*g_158))) | (safe_sub_func_int64_t_s_s((safe_lshift_func_uint16_t_u_u(p_42, ((l_209 = (l_208[1] = ((l_203 = (safe_rshift_func_int8_t_s_u((*l_174), (safe_mod_func_uint32_t_u_u((18446744073709551615UL > p_42), (l_201 = 0xA98EA977L)))))) > (safe_unary_minus_func_int8_t_s(((*l_206) = ((void*)0 != l_205))))))) ^ (g_149 && l_210[2])))), p_42))), 4294967290UL));
                }
                return g_212;



            }


        }
        else
        {
            short l_213 = 0L;
            union U0 *l_234 = (void*)0;
            int *l_240 = &g_175;
            unsigned long long l_244 = 0x24061E384F033530LL;
            unsigned long long ***l_260 = &g_97;
            union U1 *l_275 = (void*)0;
            (*g_212) = (l_213 && g_81);
            for (l_213 = 2; (l_213 >= 0); l_213 -= 1)
            {
                unsigned short *l_219 = &g_22[5].f0;
                int l_227 = 3L;
                int l_228 = 0x5CB5E7A7L;
                long long *l_229 = (void*)0;
                long long *l_230 = &l_189[0];
                long long *l_231 = &l_185;
                union U0 *l_233 = &g_22[4];
                union U0 **l_232[6][4][5];
                int i, j, k;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 4; j++)
                    {
                        for (k = 0; k < 5; k++)
                            l_232[i][j][k] = &l_233;
                    }
                }
                (*l_169) = (((*l_231) = ((*l_230) = (l_210[4] & ((((safe_mod_func_int32_t_s_s(((safe_unary_minus_func_uint32_t_u((0xEBC9F0E1L != 0xE7324F27L))) >= (((~(g_220 &= ((*l_219) = 0xC6AFL))) || (safe_div_func_int64_t_s_s((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint16_t_u_u(g_22[5].f0, (p_42 || 0x35052A225A8C6FE1LL))), 5)), p_42))) ^ (((l_228 |= l_227) <= l_213) != (*l_174)))), p_42)) >= l_208[1]) ^ (*l_174)) && l_213)))) != l_213);
                l_234 = &g_22[5];

                ;
                if (l_167)
                    continue;
                for (g_164 = 2; (g_164 >= 0); g_164 -= 1)
                {
                    if (l_213)
                        break;
                }
            }

            ;
            for (g_105 = (-8); (g_105 < 42); g_105 = safe_add_func_int16_t_s_s(g_105, 6))
            {
                unsigned l_241 = 18446744073709551609UL;
                if (((p_42 <= (((((((*g_158) = (*l_169)) == (((**g_97) != p_42) != (*l_174))) != 0x027D05EB35AFFD8DLL) != p_42) | g_68[3]) < 1L)) || 4294967295UL))
                {
                    int *l_239 = &l_167;
                    for (g_140.f0 = 19; (g_140.f0 > (-20)); g_140.f0--)
                    {
                        (**l_168) = &l_210[0];
                        (*g_49) = l_239;
                        (**l_168) = l_240;
                        if (l_241)
                            break;
                    }
                }
                else
                {
                    unsigned l_253 = 0UL;
                    char *l_254 = (void*)0;
                    char *l_255 = &g_207;
                    unsigned short *l_256 = &g_22[5].f0;
                    int *l_261 = (void*)0;
                    if (((safe_sub_func_int16_t_s_s(l_244, ((*l_256) = (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0xC0L, ((((0xD9L || (safe_mod_func_uint64_t_u_u((p_42 == ((*l_255) = (safe_div_func_uint32_t_u_u((*g_158), (p_42 || (l_253 & ((g_15 > (g_68[5] == p_42)) & 0xEAL))))))), l_210[2]))) < l_253) || 18446744073709551607UL) > 0xE6C6DA60L))), (*g_158)))))) & p_42))
                    {
                        (*l_169) = (g_149 >= (((*l_174) |= p_42) <= p_42));
                    }
                    else
                    {
                        (*l_240) = (((safe_unary_minus_func_int32_t_s((&g_49 == (void*)0))) == ((void*)0 == l_260)) || ((*l_256) = l_253));
                    }
                    (*g_49) = l_261;
                }
                for (g_62 = 0; (g_62 == 33); g_62++)
                {
                    int *l_266 = &l_210[6];
                    for (g_52 = 0; (g_52 >= 40); ++g_52)
                    {
                        (*g_49) = l_266;
                        (*l_266) = (*g_212);
                        (*l_169) |= p_42;
                    }
                }
            }


            for (g_207 = 2; (g_207 <= (-26)); g_207--)
            {
                union U1 *l_279 = (void*)0;
                int **l_285 = &g_50[6][1][1];
                for (g_175 = 0; (g_175 != 21); g_175++)
                {
                    union U1 **l_276[6][9][4] = {{{&l_275,&l_275,&l_275,&l_275},{&l_275,(void*)0,&l_275,&l_275},{&l_275,&l_275,(void*)0,&l_275},{&l_275,&l_275,&l_275,&l_275},{&l_275,(void*)0,&l_275,&l_275},{(void*)0,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,(void*)0},{&l_275,(void*)0,(void*)0,&l_275},{&l_275,&l_275,&l_275,&l_275}},{{&l_275,&l_275,(void*)0,&l_275},{&l_275,(void*)0,&l_275,&l_275},{&l_275,&l_275,(void*)0,&l_275},{&l_275,(void*)0,(void*)0,&l_275},{&l_275,(void*)0,(void*)0,&l_275},{&l_275,&l_275,(void*)0,&l_275},{(void*)0,&l_275,&l_275,&l_275},{(void*)0,&l_275,(void*)0,&l_275},{(void*)0,&l_275,&l_275,&l_275}},{{&l_275,&l_275,&l_275,&l_275},{(void*)0,(void*)0,&l_275,&l_275},{&l_275,&l_275,(void*)0,&l_275},{(void*)0,&l_275,&l_275,&l_275},{&l_275,&l_275,(void*)0,&l_275},{&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,(void*)0},{(void*)0,&l_275,&l_275,&l_275},{&l_275,(void*)0,&l_275,(void*)0}},{{&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275},{(void*)0,&l_275,(void*)0,&l_275},{&l_275,&l_275,&l_275,(void*)0},{&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275},{&l_275,(void*)0,&l_275,&l_275},{&l_275,(void*)0,(void*)0,&l_275},{(void*)0,&l_275,&l_275,&l_275}},{{&l_275,(void*)0,&l_275,&l_275},{&l_275,&l_275,&l_275,(void*)0},{&l_275,&l_275,&l_275,&l_275},{(void*)0,&l_275,&l_275,&l_275},{&l_275,(void*)0,&l_275,&l_275},{&l_275,&l_275,(void*)0,&l_275},{&l_275,&l_275,(void*)0,&l_275},{&l_275,&l_275,&l_275,&l_275},{(void*)0,&l_275,&l_275,&l_275}},{{&l_275,&l_275,&l_275,&l_275},{(void*)0,&l_275,&l_275,&l_275},{(void*)0,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275},{(void*)0,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275},{&l_275,&l_275,&l_275,&l_275}}};
                    int l_286 = 0xC986ED9DL;
                    unsigned short *l_292 = &g_22[5].f0;
                    int i, j, k;
                    if (p_42)
                    {
                        (*l_169) &= (*g_212);
                    }
                    else
                    {
                        if (l_286)
                            break;
                    }
                    (*l_169) ^= (safe_mod_func_int16_t_s_s(l_208[1], (*l_174)));
                    if ((safe_rshift_func_uint16_t_u_s(((*l_292) |= (l_291 != &g_207)), 4)))
                    {
                        union U1 **l_293 = &g_278[0];
                        int l_294 = 0x96986D46L;
                        l_294 = ((void*)0 != l_293);
                        if (p_42)
                            continue;
                        (*l_293) = &g_140;
                        l_286 = (l_294 = (0x2E88A8F0L != 4294967286UL));
                    }
                    else
                    {
                        return l_295;



                    }
                }
                (*g_49) = &l_167;
                (*l_174) = l_210[2];
            }


        }



    }
    else
    {
        unsigned short *l_298[1][1][7] = {{{&g_22[5].f0,&g_22[5].f0,&g_22[5].f0,&g_22[5].f0,&g_22[5].f0,&g_22[5].f0,&g_22[5].f0}}};
        unsigned long long *l_300 = &g_105;
        int l_303 = 0x8CD42C0BL;
        unsigned char l_305[7] = {255UL,255UL,255UL,255UL,255UL,255UL,255UL};
        int i, j, k;
        l_305[0] = (safe_sub_func_uint8_t_u_u(((void*)0 == l_298[0][0][6]), (((l_299 != l_300) > (safe_mod_func_int16_t_s_s(g_149, p_42))) >= l_303)));
    }




    return l_307;



}







static unsigned long long func_46(unsigned p_47, int ** p_48)
{
    unsigned long long *l_51 = &g_52;
    int l_53[4][4][3];
    int l_106 = 0L;
    int *l_108 = &l_53[3][0][2];
    char l_122 = 1L;
    unsigned l_159[4][1];
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 3; k++)
                l_53[i][j][k] = 9L;
        }
    }
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
            l_159[i][j] = 5UL;
    }
    if (((p_47 ^ ((*l_51) |= p_47)) != l_53[1][1][0]))
    {
        long long l_60 = 0x069A3E2BE8CA4045LL;
        unsigned char *l_61 = &g_62;
        int l_63 = 0x2069719EL;
        l_63 ^= ((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(p_47, 9)), g_15)) && (((*l_61) = l_60) || ((l_60 || g_52) >= p_47)));
    }
    else
    {
        int l_82 = 0x8DD93F87L;
        int l_83 = (-1L);
        int l_84 = (-1L);
        unsigned long long **l_86 = &l_51;
        int *l_107 = &l_53[2][1][0];
        for (g_62 = 0; (g_62 <= 2); g_62 += 1)
        {
            int *l_64 = (void*)0;
            int *l_65 = &l_53[3][1][0];
            int l_99[3][10];
            int i, j;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 10; j++)
                    l_99[i][j] = 0x06703C07L;
            }
            (*l_65) |= p_47;
            for (g_52 = 0; (g_52 <= 2); g_52 += 1)
            {
                unsigned char *l_67 = &g_68[3];
                int l_71 = 0xCCE3044BL;
                unsigned l_74 = 4294967295UL;
                unsigned *l_79 = (void*)0;
                unsigned *l_80[4] = {&g_81,&g_81,&g_81,&g_81};
                int i;
                l_84 ^= (safe_unary_minus_func_int32_t_s(((((*l_67) ^= (0xB7283D345464CD02LL | p_47)) <= ((safe_lshift_func_int8_t_s_u(g_15, 6)) != (0xD79CL && (p_47 | l_71)))) ^ (l_74 ^ ((l_82 = (safe_div_func_int16_t_s_s(((l_53[3][3][2] ^ ((safe_mod_func_uint32_t_u_u(g_15, p_47)) || p_47)) || g_15), 1UL))) <= l_83)))));
                for (l_74 = 0; (l_74 <= 2); l_74 += 1)
                {
                    unsigned long long **l_85 = &l_51;
                    int i, j, k;
                    l_86 = l_85;
                    if (((*l_65) = (&l_53[g_62][g_52][g_62] == ((*p_48) = (*g_49)))))
                    {
                        int *l_89[3];
                        int i;
                        for (i = 0; i < 3; i++)
                            l_89[i] = &l_83;
                        l_71 ^= (g_81 != (safe_lshift_func_int8_t_s_s(l_53[1][1][0], (!8L))));
                        return l_71;
                    }
                    else
                    {
                        unsigned long long l_90[10][2][8] = {{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}},{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}},{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}},{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}},{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}},{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}},{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}},{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}},{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}},{{18446744073709551615UL,2UL,1UL,1UL,0x962FAD3287B7884FLL,0xBB1B77089988BF30LL,0xCF0F4353CEB4B622LL,0xCF0F4353CEB4B622LL},{0xBB1B77089988BF30LL,2UL,1UL,1UL,2UL,0xBB1B77089988BF30LL,1UL,0xCF0F4353CEB4B622LL}}};
                        unsigned long long **l_95 = &g_94[0][0];
                        unsigned long long ***l_96[8][5] = {{&l_86,&g_93,&g_93,&l_86,&l_95},{&g_93,&l_86,&l_85,&g_93,&g_93},{&g_93,&l_86,&g_93,&l_95,&l_86},{&g_93,&g_93,&l_95,&g_93,&l_95},{&g_93,&g_93,&l_85,&l_86,&g_93},{&g_93,&g_93,&l_95,&l_95,&g_93},{&g_93,&g_93,&g_93,&g_93,&l_95},{&l_86,&g_93,&l_85,&g_93,&l_86}};
                        int *l_98 = &l_83;
                        int i, j, k;
                        (*p_48) = (*p_48);
                        (*l_98) ^= ((*l_65) = (l_90[9][1][7] <= (g_15 && ((g_93 != (l_85 = (g_97 = l_95))) != p_47))));

                        ;
                    }

                    ;
                    (*l_65) &= l_82;
                }
                (*l_65) = (((l_71 == l_99[0][0]) && (safe_mod_func_uint16_t_u_u(l_71, 1L))) != p_47);
            }
        }
        for (g_52 = 0; (g_52 <= 34); ++g_52)
        {
            unsigned long long *l_104 = &g_105;
            l_106 ^= (((*l_104) |= l_53[1][3][2]) == p_47);
        }
        (*l_107) = p_47;
        (*p_48) = l_108;


    }


    for (p_47 = 0; (p_47 > 31); p_47 = safe_add_func_uint16_t_u_u(p_47, 2))
    {
        unsigned short l_115 = 65532UL;
        short *l_131 = &g_132;
        unsigned long long l_133 = 0UL;
        unsigned *l_154 = &g_81;
        unsigned **l_153 = &l_154;
        if (p_47)
        {
            long long l_111 = 0xAFFD86C0845370BFLL;
            (*l_108) = l_111;
        }
        else
        {
            int *l_112 = (void*)0;
            if (p_47)
            {
                (*g_49) = l_112;
            }
            else
            {
                for (g_52 = 0; (g_52 != 21); ++g_52)
                {
                    (*l_108) &= p_47;
                }
                if (p_47)
                    continue;
            }
            return p_47;


        }
        l_133 |= ((l_115 && (((*l_131) = (safe_add_func_int32_t_s_s((g_22[5].f0 | ((((safe_rshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_u(l_122, p_47)) && (safe_div_func_uint32_t_u_u(((safe_lshift_func_int16_t_s_u(((*l_108) & (safe_div_func_int32_t_s_s(0L, (*l_108)))), 10)) || 0x263C58A5L), (safe_sub_func_uint64_t_u_u((~(p_47 == 0x9A00L)), 2UL))))), 6)) ^ (*l_108)) && g_15) > 0x4CL)), g_68[1]))) <= g_62)) ^ l_115);
        (*p_48) = (*g_49);
        for (l_133 = 0; (l_133 <= 2); l_133 += 1)
        {
            unsigned long long l_136 = 18446744073709551615UL;
            char l_152 = (-1L);
            (*p_48) = &l_53[2][1][2];
            for (g_52 = 0; (g_52 <= 2); g_52 += 1)
            {
                unsigned char l_137 = 0x4DL;
                union U1 *l_139 = &g_140;
                short *l_148 = &g_149;
                int *l_150 = &l_106;
                for (g_132 = 2; (g_132 >= 0); g_132 -= 1)
                {
                    int l_138 = 0x23F08B23L;
                    int i, j;
                    (*l_108) |= (safe_add_func_int16_t_s_s(0xF3DCL, ((l_136 != p_47) | 0x24C86C8505D4F871LL)));
                    if (l_136)
                    {
                        (*l_108) |= l_137;
                        return l_138;



                    }
                    else
                    {
                        union U1 **l_141 = &l_139;
                        (*l_141) = l_139;
                        (*l_108) = (1UL <= ((safe_rshift_func_uint16_t_u_u((+65535UL), g_15)) <= l_138));
                    }
                }
                for (g_81 = 0; (g_81 <= 2); g_81 += 1)
                {
                    for (l_136 = 0; (l_136 <= 2); l_136 += 1)
                    {
                        (*p_48) = (*p_48);
                        (*g_49) = (*p_48);
                        (*l_108) = (&g_132 == &g_132);
                    }
                    for (l_106 = 0; (l_106 <= 2); l_106 += 1)
                    {
                        unsigned l_144 = 0UL;
                        if (l_115)
                            break;
                        return l_144;



                    }
                }
                (*l_108) ^= l_136;
                (*l_150) = (safe_lshift_func_int16_t_s_s(((g_81 == g_81) | ((*l_108) = (((safe_unary_minus_func_int32_t_s(p_47)) < l_133) > g_132))), ((*l_148) &= (-8L))));
            }
            for (g_149 = 0; (g_149 <= 2); g_149 += 1)
            {
                char l_151 = 0x6CL;
                unsigned ***l_155 = &l_153;
                unsigned ***l_156[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_156[i] = (void*)0;
                for (g_52 = 0; (g_52 <= 2); g_52 += 1)
                {
                    for (g_140.f0 = 2; (g_140.f0 >= 0); g_140.f0 -= 1)
                    {
                        l_151 = 0x0249FC32L;
                    }
                }
                if (l_151)
                {
                    return p_47;



                }
                else
                {
                    for (l_122 = 2; (l_122 >= 0); l_122 -= 1)
                    {
                        if (l_133)
                            break;
                    }
                    (*l_108) |= ((l_152 == 18446744073709551610UL) || g_68[2]);
                }
                g_157 = ((*l_155) = l_153);

                ;
            }
        }


    }
    (*l_108) = 0x83EC2E7EL;
    (*l_108) = l_159[3][0];
    return g_160;


}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_15, "g_15", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_22[i].f0, "g_22[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_68[i], "g_68[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_105, "g_105", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_140.f0, "g_140.f0", print_hash_value);
    transparent_crc(g_149, "g_149", print_hash_value);
    transparent_crc(g_160, "g_160", print_hash_value);
    transparent_crc(g_164, "g_164", print_hash_value);
    transparent_crc(g_175, "g_175", print_hash_value);
    transparent_crc(g_207, "g_207", print_hash_value);
    transparent_crc(g_220, "g_220", print_hash_value);
    transparent_crc(g_398.f0, "g_398.f0", print_hash_value);
    transparent_crc(g_422, "g_422", print_hash_value);
    transparent_crc(g_467, "g_467", print_hash_value);
    transparent_crc(g_510, "g_510", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_565[i], "g_565[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_622, "g_622", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
