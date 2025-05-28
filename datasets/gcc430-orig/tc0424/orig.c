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
   const int f0;
   const unsigned f1;
};

union U1 {
   unsigned f0 : 23;
   unsigned long long f1;
   char f2;
   unsigned char f3;
   char * f4;
};

union U2 {
   unsigned f0;
};

union U3 {
   const unsigned char f0;
   const short f1;
};


static char g_7 = 0x50L;
static union U3 g_40 = {1UL};
static int g_44[9][2][9] = {{{0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL},{2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L}},{{0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL},{2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L}},{{0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL},{2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L}},{{0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL},{2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L}},{{0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL},{2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L}},{{0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL},{2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L}},{{0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL},{2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L}},{{0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL},{2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L}},{{0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL,0x2585FAFEL},{2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L,0xDA37B187L,2L}}};
static union U1 g_78[10] = {{4294967288UL},{4294967293UL},{4294967288UL},{4294967288UL},{4294967293UL},{4294967288UL},{4294967288UL},{4294967293UL},{4294967288UL},{4294967288UL}};
static unsigned g_81 = 5UL;
static unsigned short g_93 = 65530UL;
static short g_146[3][2] = {{0xF76FL,0xF76FL},{7L,0xF76FL},{0xF76FL,7L}};
static short *g_145 = &g_146[0][0];
static int g_150 = (-3L);
static short g_151 = (-4L);
static union U0 g_180[7] = {{0xB7EF6DE3L},{0xB7EF6DE3L},{0x033148EFL},{0xB7EF6DE3L},{0xB7EF6DE3L},{0x033148EFL},{0xB7EF6DE3L}};
static union U2 g_191 = {0x5BA20C68L};
static unsigned short g_194 = 65535UL;
static unsigned short g_195 = 0UL;
static unsigned long long g_233 = 5UL;
static union U2 *g_253 = &g_191;
static unsigned short g_256 = 0x7F86L;
static int g_260 = (-1L);
static int *g_259 = &g_260;
static unsigned short *g_276 = &g_93;
static unsigned short ** const g_275 = &g_276;
static short g_365 = 0xD05FL;
static const int g_438[4] = {1L,1L,1L,1L};
static long long g_443 = 0x02DDDC7B271EB0C7LL;
static int g_454[8] = {0x591AF510L,1L,0x591AF510L,0x591AF510L,1L,0x591AF510L,0x591AF510L,1L};
static const unsigned short *g_461[2][3][1] = {{{&g_256},{&g_256},{&g_256}},{{&g_256},{&g_256},{&g_256}}};
static short g_480 = 5L;
static unsigned char g_505 = 1UL;
static unsigned short g_540[6][2] = {{65534UL,0x08E6L},{65534UL,0x08E6L},{65534UL,0x08E6L},{65534UL,0x08E6L},{65534UL,0x08E6L},{65534UL,0x08E6L}};
static const int *g_568 = &g_44[6][0][0];
static int g_666 = 0xF456F13EL;
static short *g_707 = &g_480;
static unsigned *g_753 = &g_191.f0;
static short g_785 = 0x3957L;
static int *g_792 = (void*)0;
static unsigned char g_882[1][10][10] = {{{1UL,0UL,1UL,0xC8L,0UL,0xD1L,0xF7L,1UL,1UL,0xF7L},{0xD1L,0xF7L,1UL,1UL,0xF7L,0xD1L,0UL,0xC8L,1UL,0UL},{1UL,0xF7L,0x3DL,0xD1L,1UL,0x12L,1UL,0xD1L,0x3DL,1UL},{0xC1L,0xF1L,0x97L,0xD1L,0xF1L,0x17L,1UL,0x97L,0x97L,1UL},{0x17L,1UL,0x97L,0x97L,1UL,0x17L,0xF1L,0xD1L,0x97L,0xF1L},{0xC1L,1UL,0x3DL,0xD1L,1UL,0x12L,1UL,0xD1L,0x3DL,1UL},{0xC1L,0xF1L,0x97L,0xD1L,0xF1L,0x17L,1UL,0x97L,0x97L,1UL},{0x17L,1UL,0x97L,0x97L,1UL,0x17L,0xF1L,0xD1L,0x97L,0xF1L},{0xC1L,1UL,0x3DL,0xD1L,1UL,0x12L,1UL,0xD1L,0x3DL,1UL},{0xC1L,0xF1L,0x97L,0xD1L,0xF1L,0x17L,1UL,0x97L,0x97L,1UL}}};
static union U3 g_894[7][3] = {{{0x10L},{0x43L},{0x7AL}},{{0UL},{0UL},{0UL}},{{0x9DL},{0x10L},{0x7AL}},{{251UL},{251UL},{0xA7L}},{{0x72L},{0x10L},{0x10L}},{{0xA7L},{0UL},{251UL}},{{0x43L},{0x10L},{0x43L}}};
static int g_931 = 0x671EED78L;
static const union U1 **g_992 = (void*)0;
static int **g_1003 = &g_259;
static int ***g_1002 = &g_1003;
static union U0 *g_1164 = &g_180[5];
static union U0 **g_1163 = &g_1164;
static union U3 g_1170 = {252UL};
static union U3 *g_1169 = &g_1170;
static union U3 g_1172 = {0x41L};
static unsigned short g_1176 = 3UL;
static int g_1207[4][10][6] = {{{(-1L),(-6L),0L,9L,0xB92D3E61L,0x2AD5FD3AL},{0xFCDE83A7L,0x2AD5FD3AL,1L,0L,0x90FAB732L,0x55146905L},{(-1L),0xD57A837BL,5L,9L,0x14E85C75L,0xEB1EA01EL},{0xAD0B81FAL,9L,0x9E70F94BL,0x9E70F94BL,9L,0xAD0B81FAL},{1L,0xEC57B08AL,0xFCDE83A7L,0x0E6B8B9CL,9L,0xD7FC0E71L},{0L,0L,0x371D78E7L,0x588CCB79L,0xE85AC8FBL,0x166A9F34L},{0L,9L,0x588CCB79L,0x0E6B8B9CL,0L,7L},{1L,9L,0x98297B6DL,0x9E70F94BL,2L,0x456DE8E2L},{0xAD0B81FAL,1L,9L,9L,1L,2L},{(-1L),1L,(-1L),0L,0xEC57B08AL,0x98297B6DL}},{{0xFCDE83A7L,0xEB1EA01EL,9L,9L,0xD57A837BL,0xB92D3E61L},{(-1L),0x1D16F331L,0xD57A837BL,0xFCDE83A7L,5L,0xEC57B08AL},{9L,0L,(-1L),0L,9L,0xC162E1E9L},{0x1D16F331L,(-1L),0xACA1DD9AL,7L,0x98297B6DL,1L},{7L,9L,0xE85AC8FBL,(-1L),0xC162E1E9L,1L},{0x588CCB79L,(-1L),0L,0L,0L,0xE85AC8FBL},{0xE85AC8FBL,1L,0x55146905L,0x166A9F34L,0L,(-1L)},{7L,0x90FAB732L,0xC162E1E9L,0x456DE8E2L,0x588CCB79L,1L},{7L,(-1L),5L,0xB090D1A1L,0xACA1DD9AL,0x456DE8E2L},{0L,0x1D16F331L,0xFCDE83A7L,0x729A2186L,7L,0x371D78E7L}},{{0xFCDE83A7L,0L,1L,7L,2L,2L},{0x26FB46B8L,0x456DE8E2L,0x456DE8E2L,0x26FB46B8L,9L,0xACA1DD9AL},{0x0929574CL,0x9E70F94BL,0xAD0B81FAL,(-1L),(-10L),0x729A2186L},{0L,0x211A8B04L,0x90FAB732L,(-1L),(-10L),0xEC57B08AL},{9L,0x9E70F94BL,9L,0L,9L,0xEB1EA01EL},{1L,0x456DE8E2L,0L,0xD57A837BL,2L,0x26FB46B8L},{0x555CA5D0L,0L,0L,0x90FAB732L,7L,0x166A9F34L},{(-10L),0x1D16F331L,7L,2L,0xACA1DD9AL,9L},{(-1L),(-1L),2L,7L,0x588CCB79L,0x98297B6DL},{0x456DE8E2L,0x90FAB732L,0xEC57B08AL,0x55146905L,0L,0x55146905L}},{{0xD7FC0E71L,1L,0xD7FC0E71L,7L,0L,1L},{1L,7L,0x211A8B04L,0xB92D3E61L,9L,0L},{0x1D16F331L,1L,0x98297B6DL,0xB92D3E61L,(-1L),0xB090D1A1L},{0xC162E1E9L,1L,0xAD0B81FAL,0xB090D1A1L,2L,0x371D78E7L},{(-10L),0x90FAB732L,0L,0xFCDE83A7L,0x371D78E7L,0x9E70F94BL},{(-1L),9L,0L,0xE85AC8FBL,0x2AD5FD3AL,(-1L)},{7L,0x555CA5D0L,0x90FAB732L,0x14E85C75L,(-1L),0x166A9F34L},{0xEB1EA01EL,0L,1L,0x456DE8E2L,0xE85AC8FBL,0xB92D3E61L},{0xD7FC0E71L,0x166A9F34L,9L,0x1D16F331L,0x1D16F331L,9L},{0x55146905L,0x55146905L,7L,(-6L),0xD57A837BL,0xAD0B81FAL}}};
static int *g_1206 = &g_1207[0][6][5];
static unsigned char g_1224 = 0x05L;
static int g_1270 = (-6L);
static unsigned g_1335 = 1UL;
static unsigned char **g_1368 = (void*)0;
static union U3 g_1376 = {0UL};
static unsigned char g_1424 = 0x5AL;
static union U1 g_1509 = {0x14F6D9A1L};
static unsigned g_1605 = 4UL;
static unsigned long long g_1609 = 0x5FDAE82F0075E318LL;
static int *g_1620[8][1] = {{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150},{&g_150}};
static int **g_1619[9][10] = {{(void*)0,(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0,(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0]},{(void*)0,(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0,(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0]},{(void*)0,(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0,(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0]},{(void*)0,(void*)0,&g_1620[7][0],(void*)0,(void*)0,&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0},{&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0},{&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0},{&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0},{&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0},{&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0,&g_1620[7][0],&g_1620[7][0],(void*)0,&g_1620[7][0],(void*)0}};
static int * const *g_1689 = &g_1206;
static int * const **g_1688[6][2][3] = {{{&g_1689,&g_1689,&g_1689},{&g_1689,&g_1689,&g_1689}},{{&g_1689,&g_1689,&g_1689},{&g_1689,&g_1689,&g_1689}},{{&g_1689,&g_1689,&g_1689},{&g_1689,&g_1689,&g_1689}},{{&g_1689,&g_1689,&g_1689},{&g_1689,&g_1689,&g_1689}},{{&g_1689,&g_1689,&g_1689},{&g_1689,&g_1689,&g_1689}},{{&g_1689,&g_1689,&g_1689},{&g_1689,&g_1689,&g_1689}}};
static int * const ***g_1687 = &g_1688[1][1][1];
static unsigned long long g_1706 = 0UL;
static unsigned g_1757 = 7UL;
static short g_1763 = 0x20EBL;
static long long g_1773 = (-1L);
static long long *g_1780 = &g_1773;
static long long **g_1779[10][4][6] = {{{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0},{&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780},{&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780}},{{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{(void*)0,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0},{&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780}},{{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,&g_1780},{(void*)0,&g_1780,(void*)0,&g_1780,&g_1780,(void*)0},{&g_1780,(void*)0,(void*)0,&g_1780,&g_1780,&g_1780}},{{&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,(void*)0,(void*)0,&g_1780},{(void*)0,&g_1780,&g_1780,(void*)0,&g_1780,(void*)0}},{{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{(void*)0,&g_1780,&g_1780,(void*)0,&g_1780,(void*)0},{&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780}},{{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{(void*)0,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780},{&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,&g_1780}},{{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,(void*)0,&g_1780,&g_1780,(void*)0,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780}},{{&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,(void*)0},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780}},{{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{(void*)0,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780}},{{(void*)0,&g_1780,&g_1780,&g_1780,(void*)0,&g_1780},{(void*)0,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0},{&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,(void*)0}}};
static unsigned long long g_1801[2][3][3] = {{{0UL,0xEEC896690B97FFB8LL,1UL},{18446744073709551609UL,0xEEC896690B97FFB8LL,18446744073709551609UL},{0xB73A7AD93CD92788LL,0UL,1UL}},{{0xB73A7AD93CD92788LL,0xB73A7AD93CD92788LL,0UL},{18446744073709551609UL,0UL,0UL},{0UL,0xEEC896690B97FFB8LL,1UL}}};
static unsigned **g_1810 = &g_753;
static unsigned ** const *g_1809 = &g_1810;
static int *g_1819 = &g_454[1];
static char *g_1843 = (void*)0;
static int g_1844 = 0L;
static unsigned short **g_1846 = (void*)0;



static unsigned func_1(void);
static int * func_2(int p_3, unsigned p_4, long long p_5);
static union U1 func_8(char * p_9, int * p_10);
static char * func_11(unsigned char p_12, unsigned short p_13, int * p_14, unsigned char p_15);
static unsigned long long func_18(char * p_19, char * p_20, char * p_21, int * p_22, char p_23);
static char * func_24(char * p_25, unsigned short p_26);
static short func_34(const unsigned short p_35, char * p_36, union U3 p_37, int p_38, int p_39);
static int * const func_60(int * p_61, short p_62, unsigned char p_63);
static const unsigned char func_67(char * p_68, union U3 p_69, long long p_70, union U1 p_71);
static char * func_72(char * p_73, int * p_74, int * p_75, union U1 p_76);
static unsigned func_1(void)
{
    int l_6[7] = {0x87D0FA51L,0x87D0FA51L,0x87D0FA51L,0x87D0FA51L,0x87D0FA51L,0x87D0FA51L,0x87D0FA51L};
    char *l_27 = &g_7;
    short *l_1209 = (void*)0;
    short *l_1210 = &g_151;
    int *l_1883 = &g_1207[0][6][5];
    union U0 l_1890 = {0xBDEAF15AL};
    union U3 l_1891[5][10] = {{{0x05L},{0UL},{1UL},{0x20L},{253UL},{250UL},{253UL},{0x20L},{1UL},{0UL}},{{0x05L},{0UL},{1UL},{0x20L},{253UL},{250UL},{253UL},{0x20L},{1UL},{0UL}},{{0x05L},{0UL},{1UL},{0x20L},{253UL},{0x4CL},{1UL},{247UL},{255UL},{0x20L}},{{3UL},{0x20L},{255UL},{247UL},{1UL},{0x4CL},{1UL},{247UL},{255UL},{0x20L}},{{3UL},{0x20L},{255UL},{247UL},{1UL},{0x4CL},{1UL},{247UL},{255UL},{0x20L}}};
    int *l_1892 = &g_150;
    union U1 l_1952[6][7] = {{{8UL},{0x1DD0851DL},{0x1DD0851DL},{8UL},{0x1DD0851DL},{0x1DD0851DL},{8UL}},{{0x1DD0851DL},{8UL},{0x1DD0851DL},{0x1DD0851DL},{8UL},{0x1DD0851DL},{0x1DD0851DL}},{{8UL},{8UL},{0xA97D9155L},{8UL},{8UL},{0xA97D9155L},{8UL}},{{8UL},{0x1DD0851DL},{0x1DD0851DL},{8UL},{0x1DD0851DL},{0x1DD0851DL},{8UL}},{{0x1DD0851DL},{8UL},{0x1DD0851DL},{0x1DD0851DL},{8UL},{0x1DD0851DL},{0x1DD0851DL}},{{8UL},{8UL},{0xA97D9155L},{8UL},{8UL},{0xA97D9155L},{8UL}}};
    char *l_1953[6][8] = {{&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,(void*)0},{&g_7,&g_7,&g_7,(void*)0,&g_7,&g_7,(void*)0,&g_7},{(void*)0,(void*)0,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,(void*)0},{&g_7,&g_7,&g_7,(void*)0,(void*)0,&g_7,&g_7,&g_7},{&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7}};
    unsigned l_1961 = 0xC5EB14CCL;
    int i, j;
    l_1883 = func_2(l_6[6], g_7, (((*l_1210) = (l_6[1] < (((func_8(func_11(g_7, ((safe_div_func_uint64_t_u_u(func_18(&g_7, func_24(l_27, (safe_mod_func_int64_t_s_s((safe_add_func_int16_t_s_s((safe_div_func_int16_t_s_s(l_6[6], func_34(g_7, l_27, g_40, g_7, l_6[6]))), (-1L))), 2L))), &g_7, &l_6[6], g_180[5].f1), g_7)) , 0UL), g_259, l_6[6]), g_1206) , g_146[0][0]) < 1UL) & 18446744073709551606UL))) && l_6[4]));


        ;

    ;
    ;
    ;


    ;
    if ((((*l_1892) = (safe_add_func_uint16_t_u_u(l_6[6], (safe_add_func_uint16_t_u_u(((*g_276) = (safe_rshift_func_int8_t_s_s(((*l_27) = 0x81L), g_194))), (((l_1890 , (l_6[6] | (l_1891[2][3] , g_195))) <= l_1890.f1) >= (l_1209 == l_1210))))))) , l_6[4]))
    {
        return g_44[6][0][0];
    }
    else
    {
        int *l_1898 = &g_260;
        int l_1926 = 0L;
        int l_1927 = (-1L);
        int l_1928 = 0x1A94851BL;
        int l_1929 = 1L;
        int l_1930 = 0xE2EC00A1L;
        int l_1931 = 0xC1720F16L;
        int l_1932[2];
        unsigned l_1933 = 0x97170A34L;
        long long l_1937 = (-8L);
        char *l_1941 = &g_7;
        char *l_1942 = (void*)0;
        unsigned *l_1945 = &g_1605;
        unsigned l_1954 = 0UL;
        unsigned l_1957 = 0x363515B0L;
        int i;
        for (i = 0; i < 2; i++)
            l_1932[i] = 0x848DC6E2L;
        if ((safe_sub_func_uint64_t_u_u(g_93, g_1801[0][0][2])))
        {
            unsigned l_1895[4];
            union U0 **l_1905 = &g_1164;
            unsigned l_1906 = 0xEC452CB2L;
            union U1 *l_1907[10] = {&g_78[7],&g_1509,&g_78[7],&g_1509,&g_78[7],&g_1509,&g_78[7],&g_1509,&g_78[7],&g_1509};
            union U1 **l_1908 = &l_1907[9];
            union U1 *l_1910 = &g_78[9];
            union U1 **l_1909 = &l_1910;
            int i;
            for (i = 0; i < 4; i++)
                l_1895[i] = 0UL;
            (*l_1909) = ((*l_1908) = ((l_1895[0] || ((*l_1898) = (safe_rshift_func_int16_t_s_s(func_18(&g_7, &g_7, &g_7, l_1898, (((((((*l_1898) , g_44[0][0][3]) | (safe_sub_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s(((void*)0 != l_1905), 3L)), 11)), 0xD3L))) , l_1906) < 0xD261L) | 0UL) < (*l_1898))), (*g_707))))) , l_1907[1]));

            ;
        }
        else
        {
            char l_1911 = 1L;
            int l_1912 = 0x393FF6A6L;
            int *l_1913 = &g_454[1];
            int *l_1914 = &l_1912;
            int *l_1915 = &l_6[6];
            int *l_1916 = (void*)0;
            int *l_1917 = &g_1844;
            int *l_1918 = &g_260;
            int *l_1919 = &l_6[6];
            int *l_1920 = (void*)0;
            int *l_1921 = &g_44[8][1][5];
            int *l_1922 = &l_6[6];
            int *l_1923 = &l_6[3];
            int *l_1924[10][4] = {{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]},{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]},{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]},{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]},{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]},{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]},{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]},{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]},{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]},{&g_44[8][0][3],&g_1207[1][4][1],&g_44[8][0][3],&g_1207[1][4][1]}};
            short l_1925 = 4L;
            unsigned l_1938 = 1UL;
            int i, j;
lbl_1936:
            l_1911 = ((void*)0 != (***g_1687));
            --l_1933;
            if (g_7)
                goto lbl_1936;
            l_1938--;
        }
        (*g_1206) = func_18(&g_7, l_1941, l_1942, func_2((safe_div_func_int16_t_s_s((((*l_1945) |= 0UL) >= (((l_1891[2][2] , (((safe_lshift_func_int16_t_s_s((((*l_1898) = ((safe_add_func_int64_t_s_s((*g_1780), (safe_lshift_func_uint16_t_u_s(func_18(l_1942, l_1953[5][2], &g_7, &l_1932[1], l_1954), (*g_707))))) || 65526UL)) || (****g_1687)), (*g_707))) < l_1929) , (*g_1809))) == &l_1945) > 0xADL)), (*g_707))), g_454[1], l_1930), l_1891[2][3].f0);

        ;
        for (g_505 = 1; (g_505 <= 7); g_505 += 1)
        {
            int *l_1955 = &g_454[1];
            int *l_1956[10][5] = {{&g_44[6][0][0],&g_1207[0][6][5],(void*)0,(void*)0,&g_1207[0][6][5]},{&l_1930,&g_454[1],(void*)0,(void*)0,&g_454[1]},{&g_44[6][0][0],&g_1207[0][6][5],(void*)0,(void*)0,&g_1207[0][6][5]},{&l_1930,&g_454[1],(void*)0,(void*)0,&g_454[1]},{&g_44[6][0][0],&g_1207[0][6][5],(void*)0,(void*)0,&g_1207[0][6][5]},{&l_6[0],(void*)0,&l_6[0],&l_6[0],(void*)0},{&l_1929,(void*)0,&g_1844,&g_1844,(void*)0},{&l_6[0],(void*)0,&l_6[0],&l_6[0],(void*)0},{&l_1929,(void*)0,&g_1844,&g_1844,(void*)0},{&l_6[0],(void*)0,&l_6[0],&l_6[0],(void*)0}};
            union U2 **l_1960 = &g_253;
            int i, j;
            for (l_1931 = 0; (l_1931 <= 1); l_1931 += 1)
            {
                int i;
                return g_454[g_505];
            }
            ++l_1957;
            (*l_1960) = &g_191;
        }
    }

    ;
    (****g_1687) ^= l_1961;
    (*g_1206) = func_18(&g_7, &g_7, &g_7, func_2(((*g_707) == (l_1891[2][1] , (g_146[0][0] & 0x82E34CCA1ABCA9E5LL))), (safe_rshift_func_uint8_t_u_s(255UL, 5)), (*g_1780)), g_785);
    return l_1952[3][6].f0;
}







static int * func_2(int p_3, unsigned p_4, long long p_5)
{
    short l_1211 = 0x671FL;
    int l_1228[2];
    union U0 **l_1241 = &g_1164;
    int *l_1261 = (void*)0;
    unsigned l_1292 = 4294967292UL;
    union U1 l_1294 = {0xA2029C91L};
    union U1 *l_1296 = &g_78[9];
    union U1 **l_1295 = &l_1296;
    char *l_1336 = &g_7;
    union U3 *l_1375[3];
    int l_1450 = (-3L);
    union U2 l_1492[6][9][4] = {{{{1UL},{0xC7B996BEL},{4294967294UL},{1UL}},{{4294967295UL},{0x550A9EC4L},{0x8C9B2046L},{0xDBD1055FL}},{{4294967290UL},{0x58B853CFL},{0x1B689CBAL},{1UL}},{{0x3AF32A11L},{0xEAA12507L},{0x6F06EF74L},{0x1B689CBAL}},{{4294967295UL},{1UL},{4UL},{9UL}},{{9UL},{4294967287UL},{2UL},{4294967295UL}},{{0x083FCB13L},{0x550A9EC4L},{1UL},{4294967294UL}},{{0x78B5B50DL},{0x0A4C8839L},{4294967295UL},{4294967295UL}},{{0xE9C83BF4L},{1UL},{0xDDB8A69AL},{1UL}}},{{{0x48FC7798L},{9UL},{4294967295UL},{0x6F06EF74L}},{{9UL},{0x0A4C8839L},{1UL},{0UL}},{{0xB4109220L},{0x083FCB13L},{0x11EC6271L},{4294967295UL}},{{0x1B689CBAL},{0xDCA137F1L},{0x1B689CBAL},{1UL}},{{0UL},{1UL},{0xBCD0283CL},{1UL}},{{1UL},{0x4CFED4BEL},{4294967291UL},{1UL}},{{1UL},{0x9E817702L},{4294967291UL},{4294967295UL}},{{1UL},{0x550A9EC4L},{0xBCD0283CL},{0x09EF2AF5L}},{{0UL},{2UL},{0x1B689CBAL},{0UL}}},{{{0UL},{0UL},{4294967294UL},{0UL}},{{0x78B5B50DL},{0xDBD1055FL},{9UL},{0xDF11555FL}},{{0x09EF2AF5L},{0x4CFED4BEL},{0x083FCB13L},{1UL}},{{0x1B689CBAL},{0UL},{2UL},{0xD91E704FL}},{{0xC7B996BEL},{0xEAA12507L},{0x93B167A0L},{0xDF11555FL}},{{0xDCA137F1L},{4294967295UL},{1UL},{0x5CF03F4EL}},{{4UL},{0UL},{0UL},{4294967294UL}},{{0x09EF2AF5L},{1UL},{1UL},{4294967295UL}},{{4294967290UL},{4UL},{4294967295UL},{0x550A9EC4L}}},{{{0x58B853CFL},{0x4169DBEAL},{0UL},{2UL}},{{0x9E817702L},{0xDF11555FL},{1UL},{0x5CF03F4EL}},{{4294967290UL},{2UL},{0x48FC7798L},{0x09EF2AF5L}},{{1UL},{4294967295UL},{0UL},{0UL}},{{0UL},{0UL},{1UL},{4UL}},{{0xDCA137F1L},{1UL},{0UL},{0xDBD1055FL}},{{2UL},{0x09EF2AF5L},{2UL},{0UL}},{{1UL},{0x09EF2AF5L},{4294967295UL},{0xDBD1055FL}},{{0x09EF2AF5L},{1UL},{0x08884ECBL},{4UL}}},{{{0x604F6524L},{0UL},{4294967294UL},{0UL}},{{0x5CF03F4EL},{4294967295UL},{0x93B167A0L},{0x09EF2AF5L}},{{0x0A4C8839L},{2UL},{4294967291UL},{0x5CF03F4EL}},{{0x8382BF15L},{0xDF11555FL},{0xD91E704FL},{2UL}},{{0x09EF2AF5L},{0x4169DBEAL},{5UL},{0x550A9EC4L}},{{0xE9C83BF4L},{4UL},{0x71D54642L},{0x58B853CFL}},{{1UL},{0UL},{4294967290UL},{4294967295UL}},{{4294967291UL},{0x1B689CBAL},{1UL},{4294967291UL}},{{0x6F06EF74L},{0x528C7317L},{0xEA93D44CL},{0x8382BF15L}}},{{{0x08271EFFL},{0xD91E704FL},{0x15F1F621L},{0UL}},{{0x4CFED4BEL},{1UL},{0x78B5B50DL},{2UL}},{{2UL},{5UL},{4294967290UL},{0x8382BF15L}},{{1UL},{4UL},{0x08271EFFL},{4294967290UL}},{{1UL},{0x1B689CBAL},{0xDCA137F1L},{0x1B689CBAL}},{{0x3AF32A11L},{0x9687EF72L},{0x93B167A0L},{0x58B853CFL}},{{1UL},{1UL},{0x528C7317L},{0x15F1F621L}},{{4294967294UL},{0x48FC7798L},{0xDF11555FL},{0x604F6524L}},{{4294967294UL},{0x71D54642L},{0x528C7317L},{4294967291UL}}}};
    union U2 **l_1499 = &g_253;
    unsigned char *l_1506 = &g_1424;
    unsigned char **l_1505[5][3][1] = {{{&l_1506},{&l_1506},{&l_1506}},{{&l_1506},{(void*)0},{&l_1506}},{{&l_1506},{&l_1506},{&l_1506}},{{(void*)0},{&l_1506},{&l_1506}},{{&l_1506},{&l_1506},{(void*)0}}};
    long long l_1552 = 0x94FF519AAFD15999LL;
    int l_1593 = 0x1A3BE546L;
    short l_1594 = (-9L);
    long long l_1600 = 0L;
    char l_1604 = (-3L);
    int ****l_1691 = &g_1002;
    int l_1746 = 0x1CA4B38BL;
    char l_1759 = 0x0DL;
    long long l_1770[9] = {0x2CAA0E685266ADDALL,1L,0x2CAA0E685266ADDALL,0x2CAA0E685266ADDALL,1L,0x2CAA0E685266ADDALL,0x2CAA0E685266ADDALL,1L,0x2CAA0E685266ADDALL};
    long long **l_1781[3][5][10] = {{{&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{(void*)0,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780},{(void*)0,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0},{&g_1780,&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780}},{{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,(void*)0,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780}},{{&g_1780,&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,(void*)0,&g_1780,(void*)0},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0,(void*)0,&g_1780},{&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0,&g_1780},{&g_1780,&g_1780,&g_1780,&g_1780,&g_1780,(void*)0,&g_1780,&g_1780,&g_1780,&g_1780}}};
    int *l_1790 = &g_454[2];
    unsigned short **l_1847 = &g_276;
    int l_1871[1];
    int *l_1882 = (void*)0;
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1228[i] = 0L;
    for (i = 0; i < 3; i++)
        l_1375[i] = &g_1376;
    for (i = 0; i < 1; i++)
        l_1871[i] = 0x6B0A0D92L;
    return l_1882;


}







static union U1 func_8(char * p_9, int * p_10)
{
    union U1 l_1208[9] = {{0xE5710A5BL},{0xE5710A5BL},{0xE5710A5BL},{0xE5710A5BL},{0xE5710A5BL},{0xE5710A5BL},{0xE5710A5BL},{0xE5710A5BL},{0xE5710A5BL}};
    int i;
    return l_1208[0];


    }







static char * func_11(unsigned char p_12, unsigned short p_13, int * p_14, unsigned char p_15)
{
    const int l_261[10] = {0x6B281870L,0x6B281870L,0x6B281870L,0x6B281870L,0x6B281870L,0x6B281870L,0x6B281870L,0x6B281870L,0x6B281870L,0x6B281870L};
    union U3 l_263 = {0x08L};
    const union U1 *l_274[3][10] = {{&g_78[9],&g_78[9],&g_78[2],&g_78[8],(void*)0,(void*)0,&g_78[9],(void*)0,&g_78[4],(void*)0},{&g_78[9],&g_78[9],&g_78[9],&g_78[8],&g_78[9],&g_78[9],&g_78[9],&g_78[9],&g_78[7],(void*)0},{&g_78[9],&g_78[9],&g_78[9],&g_78[7],(void*)0,&g_78[9],&g_78[9],(void*)0,&g_78[7],&g_78[9]}};
    const union U1 **l_273 = &l_274[0][7];
    unsigned l_296 = 9UL;
    int l_310 = 0L;
    int l_322 = 3L;
    int l_323 = 0x3B8E0487L;
    int l_359 = 0xB7F66990L;
    char *l_363 = &g_7;
    unsigned long long l_371 = 18446744073709551614UL;
    int l_395 = 0xD275F433L;
    int l_396 = 1L;
    int l_397 = (-1L);
    int l_401 = 0x117F9502L;
    int l_402 = 0x41C7C1C8L;
    int l_403 = 0x63D1E85AL;
    int l_405 = 0x951E8CFBL;
    int l_409 = 2L;
    int l_411[7] = {0xEBAE3768L,0xEBAE3768L,0x780B8A79L,0xEBAE3768L,0xEBAE3768L,0x780B8A79L,0xEBAE3768L};
    int l_417 = 0x5CA4459CL;
    const int *l_432 = &g_44[6][0][0];
    const int * const *l_431 = &l_432;
    union U2 *l_464 = &g_191;
    const union U0 *l_624 = &g_180[5];
    short *l_702 = &g_151;
    long long l_720 = 9L;
    union U0 *l_902 = &g_180[0];
    short l_927 = 0x334FL;
    int l_936[1];
    union U1 l_960 = {0x68A89D36L};
    int *l_961 = &l_397;
    long long l_978 = (-1L);
    unsigned l_1046 = 0xF86604C7L;
    union U3 *l_1171 = &g_1172;
    int i, j;
    for (i = 0; i < 1; i++)
        l_936[i] = 0xCC9A9178L;
    if ((*g_259))
    {
        char *l_262 = &g_7;
        const unsigned l_272 = 0xA2062732L;
        char *l_277 = &g_78[9].f2;
        unsigned l_280[7][9][4] = {{{0x3B8C4658L,0x3C8CE0E9L,0xC3AE3C2AL,0x69817C04L},{9UL,18446744073709551615UL,7UL,0UL},{18446744073709551606UL,0x3B8C4658L,0x6ADE0BD5L,1UL},{18446744073709551608UL,18446744073709551615UL,18446744073709551615UL,0x3B8C4658L},{0UL,18446744073709551615UL,18446744073709551615UL,7UL},{18446744073709551608UL,1UL,0x6ADE0BD5L,0x69817C04L},{18446744073709551606UL,18446744073709551609UL,7UL,18446744073709551615UL},{7UL,18446744073709551615UL,18446744073709551613UL,18446744073709551615UL},{18446744073709551615UL,1UL,0x4E3F1821L,0x049284DAL}},{{0x3B8C4658L,0UL,0UL,0x3B8C4658L},{18446744073709551615UL,0x69817C04L,0x3C8CE0E9L,0xD8269C45L},{18446744073709551615UL,0x3B8C4658L,0x20332D9FL,8UL},{0x049284DAL,0xC3AE3C2AL,7UL,8UL},{18446744073709551613UL,0x3B8C4658L,18446744073709551609UL,0xD8269C45L},{18446744073709551608UL,0x69817C04L,0xEAB5239CL,0x3B8C4658L},{18446744073709551615UL,0UL,18446744073709551615UL,0x049284DAL},{0x3C8CE0E9L,1UL,18446744073709551609UL,18446744073709551615UL},{18446744073709551606UL,18446744073709551615UL,0x8C443C5AL,18446744073709551615UL}},{{0x049284DAL,18446744073709551609UL,18446744073709551613UL,0x69817C04L},{18446744073709551609UL,1UL,0x3C8CE0E9L,7UL},{0x3B8C4658L,18446744073709551615UL,18446744073709551614UL,0x3B8C4658L},{0x3B8C4658L,18446744073709551615UL,0x3C8CE0E9L,1UL},{18446744073709551609UL,0x3B8C4658L,18446744073709551613UL,0UL},{0x049284DAL,18446744073709551615UL,0x8C443C5AL,8UL},{18446744073709551606UL,18446744073709551615UL,18446744073709551609UL,1UL},{0x3C8CE0E9L,0x3C8CE0E9L,0x8C443C5AL,0x8C443C5AL},{18446744073709551615UL,18446744073709551615UL,0x049284DAL,18446744073709551613UL}},{{9UL,0x3CB39F02L,18446744073709551614UL,0x3C8CE0E9L},{2UL,0UL,0x20332D9FL,18446744073709551614UL},{18446744073709551613UL,0UL,1UL,0x3C8CE0E9L},{0UL,0x3CB39F02L,18446744073709551609UL,18446744073709551613UL},{0x8C443C5AL,18446744073709551615UL,2UL,0x8C443C5AL},{7UL,0x3C8CE0E9L,1UL,18446744073709551609UL},{0UL,0x8C443C5AL,2UL,18446744073709551615UL},{0x20332D9FL,0UL,0x20332D9FL,0xEAB5239CL},{0xD8269C45L,7UL,18446744073709551615UL,18446744073709551609UL}},{{9UL,0x4E3F1821L,0x8C443C5AL,7UL},{2UL,18446744073709551615UL,0x8C443C5AL,0x20332D9FL},{9UL,0xC3AE3C2AL,18446744073709551615UL,0x3C8CE0E9L},{0xD8269C45L,18446744073709551614UL,0x20332D9FL,0UL},{0x20332D9FL,0UL,2UL,0x4E3F1821L},{0UL,0xC3AE3C2AL,1UL,18446744073709551613UL},{7UL,2UL,2UL,7UL},{0x8C443C5AL,0x3C8CE0E9L,18446744073709551609UL,0x6ADE0BD5L},{0UL,7UL,1UL,18446744073709551615UL}},{{18446744073709551613UL,0x0A4DB7B8L,0x20332D9FL,18446744073709551615UL},{2UL,7UL,18446744073709551614UL,0x6ADE0BD5L},{9UL,0x3C8CE0E9L,0x049284DAL,7UL},{18446744073709551615UL,2UL,0x8C443C5AL,18446744073709551613UL},{18446744073709551609UL,18446744073709551613UL,0x3CB39F02L,0xEAB5239CL},{0x3C8CE0E9L,0xC3AE3C2AL,0x69817C04L,0xC3AE3C2AL},{18446744073709551615UL,0x3CB39F02L,0x4E3F1821L,18446744073709551615UL},{0x3CB39F02L,18446744073709551613UL,0x8C443C5AL,2UL},{0UL,0UL,8UL,0UL}},{{0UL,0xEAB5239CL,0x8C443C5AL,9UL},{0x3CB39F02L,0UL,0x4E3F1821L,0x6ADE0BD5L},{18446744073709551615UL,0xD8269C45L,0x69817C04L,18446744073709551609UL},{0x3C8CE0E9L,18446744073709551614UL,0x3CB39F02L,9UL},{0x8C443C5AL,18446744073709551615UL,18446744073709551614UL,18446744073709551614UL},{0UL,0UL,18446744073709551615UL,18446744073709551615UL},{7UL,0x20332D9FL,0x3CB39F02L,18446744073709551615UL},{0x4E3F1821L,0xC3AE3C2AL,2UL,0x3CB39F02L},{18446744073709551615UL,0xC3AE3C2AL,18446744073709551608UL,18446744073709551615UL}}};
        unsigned l_285 = 0x57B8F58DL;
        int *l_297 = &g_44[6][0][0];
        int l_318[10][4] = {{(-1L),0xA2CA2B3FL,(-1L),4L},{(-1L),4L,4L,(-1L)},{0x015EE2A7L,4L,1L,4L},{4L,0xA2CA2B3FL,1L,1L},{0x015EE2A7L,0x015EE2A7L,4L,1L},{(-1L),0xA2CA2B3FL,(-1L),4L},{(-1L),4L,4L,(-1L)},{0x015EE2A7L,4L,1L,4L},{4L,0xA2CA2B3FL,1L,1L},{0x015EE2A7L,0x015EE2A7L,4L,1L}};
        char l_319 = 0x96L;
        unsigned short l_360 = 65534UL;
        const int * const l_437 = &g_438[0];
        const int * const *l_436 = &l_437;
        char l_452[6] = {0x4EL,0xF2L,0x4EL,0x4EL,0xF2L,0x4EL};
        union U3 l_521 = {0UL};
        unsigned l_583 = 0x5D274B31L;
        int i, j, k;
        if (func_34(l_261[7], l_262, l_263, ((((safe_mod_func_int8_t_s_s(((*l_277) = (((g_44[5][0][0] = ((*g_259) = (safe_add_func_uint8_t_u_u((l_272 | (l_273 == (void*)0)), (((g_180[5].f0 , g_275) == &g_276) < p_12))))) | 0L) & l_272)), 9L)) != p_12) <= p_13) , g_195), l_272))
        {
            unsigned char l_283 = 0x9AL;
            union U2 l_284 = {0UL};
            int **l_298[10][3][8] = {{{&l_297,&g_259,(void*)0,(void*)0,(void*)0,&l_297,&g_259,&l_297},{&l_297,(void*)0,(void*)0,(void*)0,&l_297,(void*)0,(void*)0,&g_259},{(void*)0,&g_259,&l_297,&g_259,(void*)0,&l_297,&l_297,(void*)0}},{{&g_259,&g_259,&l_297,&l_297,&g_259,&g_259,(void*)0,&l_297},{(void*)0,&l_297,(void*)0,&g_259,(void*)0,&g_259,&g_259,(void*)0},{&g_259,&l_297,(void*)0,&g_259,&l_297,(void*)0,&l_297,&l_297}},{{&l_297,&l_297,&l_297,&g_259,&g_259,&l_297,&l_297,&l_297},{&l_297,(void*)0,&g_259,&l_297,&g_259,&l_297,(void*)0,&l_297},{&l_297,&l_297,&g_259,&g_259,&l_297,&l_297,(void*)0,(void*)0}},{{&g_259,(void*)0,&l_297,&l_297,&g_259,&l_297,&l_297,&g_259},{(void*)0,&l_297,&g_259,&g_259,&l_297,(void*)0,&l_297,&g_259},{&l_297,&l_297,&l_297,&g_259,&l_297,(void*)0,&l_297,&g_259}},{{&l_297,&g_259,&l_297,(void*)0,&l_297,&l_297,&l_297,&g_259},{(void*)0,&g_259,&g_259,&g_259,&g_259,(void*)0,&l_297,&l_297},{(void*)0,&l_297,&g_259,&g_259,&l_297,&l_297,(void*)0,&g_259}},{{&l_297,&l_297,(void*)0,(void*)0,&l_297,&g_259,(void*)0,&l_297},{&g_259,&g_259,(void*)0,&g_259,&g_259,&l_297,&l_297,&l_297},{&g_259,&l_297,(void*)0,(void*)0,&l_297,&g_259,&l_297,&l_297}},{{(void*)0,&g_259,&l_297,&g_259,&l_297,(void*)0,&l_297,(void*)0},{&g_259,(void*)0,&g_259,&g_259,&g_259,&g_259,&l_297,&l_297},{&l_297,&g_259,(void*)0,(void*)0,(void*)0,&l_297,&g_259,&l_297}},{{&l_297,&g_259,&l_297,&g_259,(void*)0,(void*)0,(void*)0,&l_297},{(void*)0,&g_259,&g_259,(void*)0,&l_297,(void*)0,&g_259,&g_259},{&g_259,(void*)0,&g_259,(void*)0,&g_259,(void*)0,&l_297,(void*)0}},{{&l_297,&g_259,&g_259,&l_297,&g_259,&g_259,&l_297,&l_297},{&g_259,&l_297,&g_259,(void*)0,&l_297,&l_297,&l_297,&g_259},{&l_297,&l_297,&l_297,&g_259,&l_297,&l_297,&l_297,&l_297}},{{&l_297,(void*)0,&g_259,(void*)0,&g_259,&l_297,&l_297,&g_259},{&l_297,&g_259,&g_259,&l_297,&g_259,&l_297,&l_297,&g_259},{(void*)0,&l_297,&g_259,(void*)0,&l_297,&g_259,&l_297,(void*)0}}};
            int **l_299 = &l_297;
            int i, j, k;
            (*g_259) = ((safe_mod_func_int8_t_s_s(1L, g_150)) , l_280[4][1][2]);
            (*g_259) = (safe_lshift_func_int8_t_s_u((((p_13 >= ((l_283 >= ((l_284 , (l_285 == (safe_rshift_func_uint8_t_u_s(p_15, 1)))) ^ (safe_mod_func_int32_t_s_s((((!(~18446744073709551614UL)) , (safe_lshift_func_int8_t_s_u((safe_sub_func_uint32_t_u_u(((safe_lshift_func_uint16_t_u_s(65535UL, 7)) , 0x3116A7E1L), g_81)), 6))) , l_296), p_12)))) , l_285)) >= l_285) | 0xB1L), 1));
            (*l_299) = func_60(l_297, p_15, p_12);

            ;
        }
        else
        {
            short *l_307 = &g_146[2][0];
            int l_308 = 0L;
            int l_309 = 0xCA40FAEAL;
            int **l_311 = &g_259;
            char *l_348 = &l_319;
            int l_357 = 0xC49B4292L;
            int l_358 = 0x675D09DCL;
            int l_369 = 0x9CAA57AAL;
            int l_370 = (-1L);
            (*p_14) ^= (safe_unary_minus_func_int8_t_s((safe_div_func_uint8_t_u_u((safe_mod_func_uint16_t_u_u((safe_div_func_uint16_t_u_u(((((p_12 & ((*l_307) = p_13)) <= l_308) > (p_12 , (l_310 |= (l_309 |= g_180[5].f1)))) | ((void*)0 != &g_145)), p_12)), (p_15 , (*l_297)))), 253UL))));
            (*l_311) = p_14;
            (*l_311) = (void*)0;

            ;
            for (g_150 = 0; (g_150 <= 23); g_150 = safe_add_func_int64_t_s_s(g_150, 6))
            {
                short l_320 = 0xDE01L;
                int l_321 = (-1L);
                union U3 l_341 = {0x38L};
                unsigned char l_345 = 0xFCL;
                int l_352 = 0x04761E1FL;
                int l_353[6][1];
                int i, j;
                for (i = 0; i < 6; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_353[i][j] = 0L;
                }
                for (p_12 = 0; (p_12 <= 8); ++p_12)
                {
                    int *l_316 = &g_260;
                    int *l_317[6] = {&l_310,&l_309,&l_310,&l_310,&l_309,&l_310};
                    unsigned l_324[9][7] = {{0x2B21888EL,4294967293UL,0x2B21888EL,0x2B21888EL,4294967293UL,0x2B21888EL,0x2B21888EL},{0x051B7049L,0x051B7049L,0xD1524B61L,0x051B7049L,0x051B7049L,0xD1524B61L,0x051B7049L},{4294967293UL,0x2B21888EL,0x2B21888EL,4294967293UL,0x2B21888EL,0x2B21888EL,4294967293UL},{0xCA60B45DL,0x051B7049L,0xCA60B45DL,0xCA60B45DL,0x051B7049L,0xCA60B45DL,0xCA60B45DL},{4294967293UL,4294967293UL,0x7B18CDE9L,4294967293UL,4294967293UL,0x7B18CDE9L,4294967293UL},{0x051B7049L,0xCA60B45DL,0xCA60B45DL,0x051B7049L,0xCA60B45DL,0xCA60B45DL,0x051B7049L},{0x2B21888EL,4294967293UL,0x2B21888EL,0x2B21888EL,4294967293UL,0x2B21888EL,0x2B21888EL},{0x051B7049L,0x051B7049L,0xD1524B61L,0x051B7049L,0x051B7049L,0xD1524B61L,0x051B7049L},{4294967293UL,0x2B21888EL,0x2B21888EL,4294967293UL,0x2B21888EL,0x2B21888EL,4294967293UL}};
                    union U1 *l_335 = &g_78[9];
                    union U1 **l_334 = &l_335;
                    long long l_340 = 7L;
                    long long l_354[9][6] = {{0L,0x9489F1CA32476EAFLL,0x8C815E9DAD21F84CLL,0x1312063382B0C17BLL,9L,0x1312063382B0C17BLL},{0x089DC33B451D2EC5LL,0x1312063382B0C17BLL,0x089DC33B451D2EC5LL,(-9L),1L,4L},{(-9L),1L,4L,(-1L),0x662E818515DE8505LL,1L},{0xDEC8C4C7AEAD1E69LL,4L,0xADA883CFAC8844C4LL,(-1L),(-9L),(-9L)},{(-9L),0xA9D1C434035D0679LL,0xA9D1C434035D0679LL,(-9L),0x9489F1CA32476EAFLL,0x9BCF163C2819EE93LL},{0x089DC33B451D2EC5LL,0xDEC8C4C7AEAD1E69LL,1L,0x1312063382B0C17BLL,0xADA883CFAC8844C4LL,0x8C815E9DAD21F84CLL},{0L,(-1L),9L,(-9L),0xADA883CFAC8844C4LL,1L},{0x9489F1CA32476EAFLL,0xDEC8C4C7AEAD1E69LL,(-9L),0xDEC8C4C7AEAD1E69LL,0x9489F1CA32476EAFLL,(-9L)},{9L,0xA9D1C434035D0679LL,0xF64F763DADC4BB3CLL,0x9BCF163C2819EE93LL,(-9L),0L}};
                    int i, j;
                    --l_324[6][1];
                    for (g_256 = 0; (g_256 <= 1); g_256 += 1)
                    {
                        int **l_331 = &l_316;
                        union U1 *l_344 = &g_78[9];
                        unsigned short *l_346[6] = {(void*)0,&g_93,(void*)0,(void*)0,&g_93,(void*)0};
                        unsigned short *l_347 = &g_93;
                        unsigned *l_349 = &l_324[6][1];
                        int **l_350 = &l_316;
                        int l_351[7] = {0xCBEEDD78L,(-6L),0xCBEEDD78L,0xCBEEDD78L,(-6L),0xCBEEDD78L,0L};
                        int l_355 = 0x7A5905D4L;
                        int l_356 = 0L;
                        char **l_364 = &l_363;
                        char l_366 = 0x17L;
                        int i, j;
                        (*l_331) = func_60(&g_44[1][0][1], (g_146[(g_256 + 1)][g_256] |= (safe_mod_func_uint32_t_u_u(g_150, l_320))), (safe_lshift_func_int16_t_s_s(g_191.f0, l_321)));

                        ;
                        (*l_350) = func_60(&g_260, ((safe_lshift_func_int16_t_s_s((l_334 == (void*)0), 6)) | (+((*l_349) = (p_12 , (safe_mod_func_int32_t_s_s(((safe_div_func_int32_t_s_s((*p_14), l_340)) > (g_146[g_256][g_256] = (l_341 , func_34(((*l_347) |= (safe_mod_func_int32_t_s_s((l_344 == (l_345 , &g_78[9])), g_7))), l_348, l_341, g_194, (*p_14))))), l_308)))))), p_15);
                        --l_360;
                        l_366 ^= (*l_297);
                    }

                    ;
                    for (g_191.f0 = 4; (g_191.f0 != 59); g_191.f0 = safe_add_func_uint32_t_u_u(g_191.f0, 5))
                    {
                        return &g_7;


                    }
                    --l_371;
                }
                return &g_7;


            }
        }

                ;
        ;
        for (l_319 = 0; (l_319 >= 5); l_319 = safe_add_func_uint8_t_u_u(l_319, 7))
        {
            int l_378 = (-1L);
            int l_385[5];
            char l_416[4] = {0x15L,0x15L,0x15L,0x15L};
            union U2 *l_446 = &g_191;
            union U2 **l_463 = &g_253;
            unsigned l_481[2];
            int i;
            for (i = 0; i < 5; i++)
                l_385[i] = 0x062EB30AL;
            for (i = 0; i < 2; i++)
                l_481[i] = 0x0E89E83BL;
            if ((~0xE1526C65L))
            {
                int l_384 = 0x1EAFA294L;
                int l_394 = 1L;
                int l_398 = (-6L);
                int l_399 = 1L;
                int l_400 = (-3L);
                int l_404 = 0x5D6E18F9L;
                int l_406 = 1L;
                int l_407 = 1L;
                int l_408 = 0L;
                int l_410 = 0x207F79F7L;
                int l_412 = 1L;
                int l_413 = (-1L);
                int l_414 = 0xAC4478B5L;
                int l_415[10][7] = {{6L,(-1L),0x055ABEB1L,0x6C4E535DL,0xF2C9137DL,0xD5853C68L,0L},{1L,0x8FB30ABBL,0xD5853C68L,0x055ABEB1L,0xD5853C68L,0x8FB30ABBL,1L},{0xAAB46DF3L,1L,4L,0x055ABEB1L,0x0E094F55L,0L,0x6C4E535DL},{0x80597304L,0xA1A84A19L,(-5L),0x6C4E535DL,0xAAB46DF3L,0xF2C9137DL,0xF2C9137DL},{(-5L),(-1L),4L,(-1L),(-5L),6L,(-1L)},{(-1L),(-1L),0xD5853C68L,1L,0x055ABEB1L,0L,0xAAB46DF3L},{(-1L),0xA1A84A19L,0x055ABEB1L,0x8E051129L,4L,4L,0x8E051129L},{(-1L),1L,(-1L),4L,0L,0xA1A84A19L,0x8E051129L},{(-5L),0x8FB30ABBL,0L,6L,0x8E051129L,(-1L),0xAAB46DF3L},{0x80597304L,(-1L),0xA1A84A19L,0x8FB30ABBL,0x8FB30ABBL,0xA1A84A19L,(-1L)}};
                short *l_424 = &g_146[1][0];
                char *l_425 = &l_416[2];
                int l_426[10] = {0L,0L,0L,0L,0L,0L,0L,0L,0L,0L};
                int *l_427 = (void*)0;
                int *l_428 = &g_44[1][1][7];
                int i, j;
                for (g_233 = 0; (g_233 != 30); ++g_233)
                {
                    int *l_379 = &l_323;
                    int *l_380 = &l_323;
                    int *l_381 = (void*)0;
                    int *l_382 = (void*)0;
                    int *l_383 = (void*)0;
                    int *l_386 = &l_359;
                    int *l_387 = &l_385[3];
                    int *l_388 = &l_318[4][2];
                    int *l_389 = &l_385[0];
                    int *l_390 = &l_384;
                    int *l_391 = &l_385[1];
                    int *l_392 = &l_385[3];
                    int *l_393[2];
                    short l_418[7][2][9];
                    unsigned l_419 = 0x7EF735F4L;
                    int i, j, k;
                    for (i = 0; i < 2; i++)
                        l_393[i] = &l_322;
                    for (i = 0; i < 7; i++)
                    {
                        for (j = 0; j < 2; j++)
                        {
                            for (k = 0; k < 9; k++)
                                l_418[i][j][k] = 0x9480L;
                        }
                    }
                    l_419--;
                }
                (*l_428) &= ((*p_14) = (((safe_div_func_int64_t_s_s(0L, (((255UL == ((l_297 != (func_18(&g_7, &l_319, l_425, &g_44[3][1][2], p_13) , p_14)) , 0UL)) <= (*g_276)) , l_426[4]))) , 65535UL) <= p_13));
            }
            else
            {
                int * const *l_429 = &l_297;
                int *l_430[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
                const int * const **l_433 = &l_431;
                const int * const *l_435 = (void*)0;
                const int * const **l_434[2][10] = {{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435,&l_435,&l_435,&l_435,&l_435},{&l_435,&l_435,&l_435,&l_435,&l_435,&l_435,&l_435,&l_435,&l_435,&l_435}};
                long long *l_441 = (void*)0;
                long long *l_442 = &g_443;
                union U2 **l_447 = &g_253;
                int l_451[3][3][10] = {{{0x0A0F7C01L,0x6EC7165CL,0x28C27544L,0xAE466705L,(-1L),0x64DF14C5L,0x64DF14C5L,(-1L),0xAE466705L,0x28C27544L},{0x2A371FB9L,0x2A371FB9L,(-5L),2L,1L,0x7DC0F35EL,(-3L),0x3109FEC3L,0x302927BBL,(-8L)},{0x86A6B922L,0L,0x9F8074F6L,0x4E35D1DCL,(-3L),0xD2942C8BL,(-3L),0x6A009D41L,0x0CE3131AL,0x7DC0F35EL}},{{(-2L),0x2A371FB9L,0x86A6B922L,7L,(-8L),0x8C12A873L,0x64DF14C5L,8L,0L,0x6EC7165CL},{(-8L),0x6EC7165CL,0x8C12A873L,0x6A009D41L,2L,0x9F8074F6L,(-5L),0x9F8074F6L,2L,0x6A009D41L},{0L,(-8L),0L,0x0CE3131AL,0xA76D0672L,2L,0x302927BBL,0x23D38508L,8L,0xAE466705L}},{{0x9F8074F6L,1L,0xA5FCB93AL,(-1L),0xD2942C8BL,0x6EC7165CL,7L,0x23D38508L,0xBE811E0EL,(-3L)},{(-3L),0x6A009D41L,0L,(-1L),8L,0x42B5DD45L,0xAE466705L,0x9F8074F6L,(-1L),(-3L)},{0xA76D0672L,(-6L),(-8L),0xA5FCB93AL,0x4E35D1DCL,0xAE466705L,0x6A009D41L,0x6A009D41L,0xAE466705L,0x4E35D1DCL}}};
                unsigned char l_455 = 9UL;
                int i, j, k;
                (*p_14) = ((((((l_396 = p_13) < (l_429 == ((g_150 = (~p_13)) , (l_436 = ((*l_433) = l_431))))) , (*l_273)) != (void*)0) && (p_13 , ((safe_sub_func_int64_t_s_s(((*l_442) = 0x9F001A16461D7AFALL), ((safe_sub_func_int64_t_s_s((((*l_447) = l_446) == (void*)0), (-1L))) , g_438[0]))) , g_40.f0))) < (-2L));

                ;
                for (g_191.f0 = 8; (g_191.f0 != 48); g_191.f0 = safe_add_func_int8_t_s_s(g_191.f0, 3))
                {
                    int *l_450[2][3][5] = {{{&g_44[6][0][0],&g_44[6][0][0],&l_405,&g_44[6][0][0],&g_44[6][0][0]},{&l_318[2][2],&g_44[6][0][0],&l_318[2][2],&l_318[2][2],&g_44[6][0][0]},{&g_44[6][0][0],&l_318[2][2],&l_318[2][2],&g_44[6][0][0],&l_318[2][2]}},{{&g_44[6][0][0],&g_44[6][0][0],&l_405,&g_44[6][0][0],&g_44[6][0][0]},{&l_318[2][2],&g_44[6][0][0],&l_318[2][2],&l_318[2][2],&g_44[6][0][0]},{&g_44[6][0][0],&l_318[2][2],&l_318[2][2],&g_44[6][0][0],&l_318[2][2]}}};
                    char l_453[4][3] = {{0x6FL,0x6FL,0xBCL},{0x80L,0x80L,0xE8L},{0x6FL,0x6FL,0xBCL},{0x80L,0x80L,0xE8L}};
                    unsigned short *l_460 = &l_360;
                    int i, j, k;
                    ++l_455;
                    for (g_151 = 0; (g_151 <= (-25)); g_151--)
                    {
                        int **l_462 = &l_297;
                        (*p_14) |= (l_460 == g_461[0][1][0]);
                        l_385[3] |= (*p_14);
                        (*l_462) = &g_44[8][0][4];

                        ;
                    }
                    if ((*p_14))
                        break;
                }
            }
            (*l_463) = (void*)0;

            ;
            (*l_463) = l_464;

            ;
            for (l_360 = 0; (l_360 <= 7); l_360 += 1)
            {
                int **l_468 = &g_259;
                unsigned short *l_469 = &g_256;
                char *l_470 = &g_7;
                union U3 l_471 = {0UL};
                unsigned long long l_472 = 0x5430EA4C669A9B68LL;
                unsigned short l_511[6][1] = {{65527UL},{65527UL},{65535UL},{65527UL},{65527UL},{65535UL}};
                short l_554 = 0x8CE8L;
                int *l_569 = &l_403;
                int *l_570 = &l_385[3];
                int *l_571 = (void*)0;
                int *l_572 = &g_454[7];
                int *l_573 = &l_322;
                int *l_574 = &l_385[3];
                int *l_575 = &l_310;
                int *l_576 = &g_454[1];
                int *l_577 = &l_385[3];
                int *l_578 = (void*)0;
                int *l_579 = &l_411[2];
                int *l_580 = &l_318[4][2];
                int *l_581 = &l_417;
                int *l_582[5] = {&l_318[4][2],&l_318[4][2],&l_318[4][2],&l_318[4][2],&l_318[4][2]};
                int i, j;
                if ((((g_454[l_360] > p_13) & func_34(((*l_469) = (((safe_rshift_func_int8_t_s_s((p_12 == func_18(&l_452[0], &g_7, l_363, ((*l_468) = &g_454[6]), g_44[6][0][0])), 0)) > p_12) | l_378)), l_470, l_471, (*l_432), l_472)) <= p_13))
                {
                    int *l_473[8] = {&g_44[6][0][0],&l_417,&g_44[6][0][0],&g_44[6][0][0],&l_417,&g_44[6][0][0],&g_44[6][0][0],&l_417};
                    int i;
                    (*l_468) = l_473[6];

                    ;
                    return l_363;



                }
                else
                {
                    long long l_478 = 0x4ACDAF3B30EE13ABLL;
                    int l_479 = (-1L);
                    const long long l_490 = (-2L);
                    unsigned short *l_520 = &g_93;
                    unsigned long long *l_547[6][10] = {{&g_233,&g_233,&l_472,&l_371,&l_371,&l_472,&l_371,&l_472,&g_78[9].f1,&g_233},{&g_233,&l_371,&g_78[9].f1,&l_371,&g_233,&l_371,&g_78[9].f1,&l_371,&g_233,&l_472},{&g_233,&l_472,&l_371,&l_371,&g_233,&l_371,(void*)0,&l_472,(void*)0,&g_233},{&l_371,&l_472,&g_233,&g_233,&l_472,&g_233,&l_371,(void*)0,(void*)0,&l_371},{&l_371,&l_472,&l_472,&l_472,&l_472,&l_371,&l_472,(void*)0,&l_472,(void*)0},{&l_371,(void*)0,&g_233,&g_233,&g_233,&l_371,&g_233,&l_371,&l_371,&g_233}};
                    short *l_563 = &g_146[0][0];
                    int i, j;
                    if ((*p_14))
                    {
                        int *l_474 = &l_411[2];
                        int *l_475 = &l_401;
                        int *l_476 = &l_417;
                        int *l_477[3];
                        unsigned char *l_497 = &g_78[9].f3;
                        unsigned char *l_498 = &g_78[9].f3;
                        unsigned char *l_499 = &g_78[9].f3;
                        unsigned char *l_500 = &g_78[9].f3;
                        unsigned char *l_501 = &g_78[9].f3;
                        unsigned char *l_502 = &g_78[9].f3;
                        unsigned char *l_503 = &g_78[9].f3;
                        unsigned char *l_504[5][2][4] = {{{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3},{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3}},{{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3},{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3}},{{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3},{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3}},{{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3},{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3}},{{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3},{&g_78[9].f3,&g_78[9].f3,&g_78[9].f3,&g_78[9].f3}}};
                        unsigned short *l_510 = &g_194;
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_477[i] = &l_323;
                        --l_481[1];
                        (*l_476) = (((safe_sub_func_int16_t_s_s((l_479 ^ (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint16_t_u_s(l_490, 7)) && (**g_275)), ((**l_431) , (safe_div_func_int8_t_s_s((safe_sub_func_uint32_t_u_u(g_93, ((safe_add_func_int64_t_s_s(((++p_12) ^ (safe_div_func_int8_t_s_s(g_454[7], p_15))), func_34(((*l_510) = l_481[0]), &l_452[1], g_40, p_13, l_511[5][0]))) && 65535UL))), g_191.f0)))))), p_13)) > (**l_436)) > p_13);
                    }
                    else
                    {
                        return l_470;


                    }
                    if ((safe_div_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(((((safe_mul_func_uint16_t_u_u(1UL, l_385[1])) && (*p_14)) > p_12) | func_34(((*l_520) = ((**l_436) , (l_478 | ((safe_mul_func_int8_t_s_s((-1L), 0xE2L)) | ((void*)0 == &g_505))))), &g_7, l_521, (**l_468), l_385[4])), p_15)) && 252UL), g_505)))
                    {
                        (*l_468) = &g_44[6][0][0];

                        ;
                        (*p_14) |= 1L;
                    }
                    else
                    {
                        return &g_7;


                    }

                    ;
                    for (l_401 = (-5); (l_401 != 27); l_401 = safe_add_func_int8_t_s_s(l_401, 1))
                    {
                        int *l_524 = (void*)0;
                        int *l_525 = &l_323;
                        int *l_526 = &g_44[8][1][4];
                        int *l_527 = &l_396;
                        int l_528 = 0xB6F26B66L;
                        int *l_529 = &l_395;
                        int *l_530 = &l_395;
                        int *l_531 = (void*)0;
                        int *l_532 = &l_323;
                        int *l_533 = &l_322;
                        int *l_534 = &g_260;
                        int *l_535 = (void*)0;
                        int *l_536 = &l_411[2];
                        int *l_537 = (void*)0;
                        int *l_538 = (void*)0;
                        int *l_539[7][8][4] = {{{&l_409,&g_454[l_360],&g_44[6][0][0],(void*)0},{&l_310,&g_44[8][1][6],&l_411[2],&l_411[5]},{&l_402,&l_318[4][2],&l_409,&l_310},{&l_318[3][2],&l_323,&l_318[0][0],&l_411[2]},{&l_403,&l_411[2],&l_359,&l_318[4][2]},{&l_405,&g_44[6][0][0],&l_417,&l_323},{&l_322,&l_318[4][2],&g_454[l_360],&l_359},{&l_310,&l_402,&l_411[2],(void*)0}},{{&l_385[3],&l_411[5],&g_260,&l_385[3]},{&l_417,&l_318[3][2],&l_411[2],&l_417},{&g_260,&l_411[2],&l_409,&l_479},{&l_385[3],&l_310,&l_385[3],&g_454[l_360]},{&g_44[6][0][0],(void*)0,&l_411[2],&l_395},{&l_318[3][2],&l_411[2],&l_322,(void*)0},{&l_403,&l_385[3],&l_322,(void*)0},{&l_318[3][2],&l_403,&l_411[2],&l_409}},{{&g_44[6][0][0],&l_417,&l_385[3],&l_323},{&l_385[3],&l_323,&l_409,&g_454[1]},{&g_260,&l_318[4][2],&l_411[2],&g_44[6][0][0]},{&l_417,(void*)0,&g_260,&l_411[2]},{&l_385[3],&l_323,&l_411[2],&l_318[4][2]},{&l_310,&g_454[1],&g_454[l_360],&l_385[3]},{&l_322,&g_260,&l_417,&l_411[2]},{&l_401,&l_322,(void*)0,&l_409}},{{&l_411[2],&l_479,&g_260,&l_385[3]},{&l_528,&l_395,(void*)0,&g_44[6][0][0]},{&l_405,(void*)0,(void*)0,&l_405},{&l_310,(void*)0,&g_44[6][0][0],&l_385[2]},{(void*)0,&l_359,&l_417,&g_260},{&l_411[5],&l_409,&l_310,&l_322},{&l_528,&g_260,&l_385[2],&l_411[2]},{(void*)0,&l_323,&g_260,&l_385[3]}},{{(void*)0,&l_402,&l_318[4][2],&l_409},{(void*)0,&g_454[1],&g_44[6][0][0],&l_411[2]},{&g_44[8][1][6],&l_411[2],&l_395,&g_260},{&l_318[3][2],(void*)0,&l_417,&l_411[2]},{&l_395,&l_322,&l_318[4][2],&g_454[l_360]},{&g_44[6][0][0],&l_385[2],&l_318[0][0],&l_417},{&l_417,&l_323,&l_403,(void*)0},{&g_44[6][0][0],&l_318[0][0],&l_417,&g_260}},{{&l_479,&l_417,&g_44[8][1][6],(void*)0},{&l_411[2],(void*)0,&l_417,(void*)0},{&l_411[2],&l_318[3][2],&l_385[3],&g_44[6][0][0]},{&l_323,&g_44[6][0][0],(void*)0,&l_417},{&g_260,&g_44[6][0][0],&l_411[2],&l_528},{&g_260,&l_318[4][2],(void*)0,&g_454[1]},{&l_323,&l_528,&l_385[3],&g_44[6][0][0]},{&l_411[2],&l_359,&l_417,&l_411[2]}},{{&l_411[2],&l_396,&g_44[8][1][6],&g_454[l_360]},{&l_479,&l_310,&l_417,&g_44[6][0][0]},{&g_44[6][0][0],&l_359,&l_403,&l_397},{&l_417,&l_385[3],&l_318[0][0],&g_44[8][1][6]},{&g_44[6][0][0],&l_411[0],&l_318[4][2],(void*)0},{&l_395,&l_411[2],&l_411[2],&g_260},{&l_528,&g_44[6][0][0],&l_411[5],&l_403},{&l_323,&l_385[2],&g_44[6][0][0],(void*)0}}};
                        int i, j, k;
                        g_540[2][1]++;
                    }
                    (*g_259) = (safe_sub_func_uint16_t_u_u(((safe_rshift_func_int16_t_s_u((((&p_13 == ((++g_233) , &p_13)) , (+g_44[6][0][0])) == (((safe_sub_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(g_260, (l_554 | (*g_276)))), (**l_436))) , (safe_lshift_func_int8_t_s_s(((safe_mul_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_s((**l_468), 0)), ((*l_563) = (func_34(p_15, l_470, g_40, g_7, (*p_14)) < 255UL)))), (**l_468))) , g_480), g_40.f0))) >= 0xC561AA9EL)), 13)) != (*l_437)), p_15));
                }

                ;
                for (l_402 = 3; (l_402 >= 0); l_402 -= 1)
                {
                    char *l_564[10][6] = {{(void*)0,&l_319,(void*)0,(void*)0,(void*)0,(void*)0},{&l_452[1],&l_452[1],(void*)0,(void*)0,(void*)0,&l_452[1]},{(void*)0,&l_319,(void*)0,(void*)0,&l_319,(void*)0},{&l_452[1],(void*)0,(void*)0,(void*)0,&l_452[1],&l_452[1]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_319,(void*)0},{(void*)0,&l_319,(void*)0,(void*)0,(void*)0,(void*)0},{&l_452[1],&l_452[1],(void*)0,(void*)0,(void*)0,&l_452[1]},{(void*)0,&l_319,(void*)0,(void*)0,&l_319,(void*)0},{&l_452[1],(void*)0,(void*)0,(void*)0,&l_452[1],&l_452[1]},{(void*)0,(void*)0,(void*)0,(void*)0,&l_319,(void*)0}};
                    union U3 l_565 = {0x0EL};
                    const int **l_567 = (void*)0;
                    int i, j;
                    for (g_480 = 3; (g_480 >= 0); g_480 -= 1)
                    {
                        union U1 *l_566 = &g_78[9];
                        int i;
                        if (l_416[l_402])
                            break;
                        (*p_14) |= l_565.f0;
                    }
                    g_568 = (*l_431);
                }
                --l_583;
            }
        }

        ;
        ;
lbl_593:
        for (g_81 = 0; (g_81 <= 2); g_81 += 1)
        {
            char *l_586 = &g_7;
            g_44[6][0][0] &= (*p_14);
            return l_586;


        }
        for (l_583 = 0; (l_583 >= 1); l_583 = safe_add_func_uint8_t_u_u(l_583, 6))
        {
            int **l_589 = (void*)0;
            (*p_14) = (*p_14);
            g_259 = p_14;

            ;
            for (l_409 = 28; (l_409 < 23); l_409 = safe_sub_func_int16_t_s_s(l_409, 6))
            {
                long long l_592 = 0xAF7E3F90A3018F65LL;
                (*g_259) = l_592;
            }
            if (l_319)
                goto lbl_593;
        }
    }
    else
    {
        union U3 l_612 = {255UL};
        int *l_615[7][4] = {{&l_322,&l_322,&l_322,&l_322},{&l_322,&l_322,&l_322,&l_322},{&l_322,&l_322,&l_322,&l_322},{&l_322,&l_322,&l_322,&l_322},{&l_322,&l_322,&l_322,&l_322},{&l_322,&l_322,&l_322,&l_322},{&l_322,&l_322,&l_322,&l_322}};
        char *l_616 = &g_7;
        const int *l_682 = &l_409;
        unsigned long long l_717 = 9UL;
        union U0 *l_721 = (void*)0;
        union U1 l_740 = {0x41A56434L};
        union U2 *l_835 = (void*)0;
        short l_924 = 0x6CE0L;
        short ** const l_947 = &l_702;
        unsigned short l_956 = 0x8208L;
        int i, j;
        for (l_359 = 0; (l_359 <= (-21)); --l_359)
        {
            union U3 l_597 = {0x66L};
            unsigned short l_621 = 0x3705L;
            char *l_626 = &g_7;
            int l_638 = (-1L);
            int l_639[10][4][4] = {{{0xBD351871L,0x086EFD46L,(-7L),0L},{(-10L),0x56B6C8DCL,0x31E1530DL,0x747E8567L},{0x56B6C8DCL,0L,0L,0x56B6C8DCL},{(-7L),1L,1L,8L}},{{0L,0x9A131927L,0x31E1530DL,(-10L)},{0xD374DB75L,0x0E199DF3L,0x064F5519L,(-10L)},{0xBD351871L,0x9A131927L,0L,8L},{0x747E8567L,1L,1L,0x56B6C8DCL}},{{0x99C6EEB2L,0L,8L,0x747E8567L},{0xBD351871L,0x56B6C8DCL,0xBD351871L,0L},{0x9A131927L,0x086EFD46L,0x31E1530DL,0x99C6EEB2L},{0x086EFD46L,0L,0x0E199DF3L,0x086EFD46L}},{{(-7L),0x747E8567L,0x0E199DF3L,8L},{0x086EFD46L,(-10L),0x31E1530DL,0x9A131927L},{0x9A131927L,0x0E199DF3L,0xBD351871L,0xD374DB75L},{0xBD351871L,0xD374DB75L,8L,8L}},{{0x99C6EEB2L,0x99C6EEB2L,1L,0L},{0x747E8567L,0L,0L,1L},{0xBD351871L,0L,0x064F5519L,0L},{0xD374DB75L,0L,0x31E1530DL,1L}},{{0L,0L,1L,0L},{(-7L),0x99C6EEB2L,0L,8L},{0x56B6C8DCL,0xD374DB75L,0x31E1530DL,0x064F5519L},{0xBD351871L,(-10L),1L,(-7L)}},{{0x31E1530DL,0xBD351871L,2L,0xFE8546CAL},{0x0E199DF3L,1L,0x56B6C8DCL,0xE33C0242L},{0x0E199DF3L,0xE3829D37L,2L,0L},{0x31E1530DL,0xE33C0242L,1L,0x71AC9A27L}},{{0xBD351871L,8L,0x086EFD46L,1L},{8L,0xE3829D37L,0xE3829D37L,8L},{1L,0x0E199DF3L,(-9L),0xFE8546CAL},{0L,(-7L),0x086EFD46L,0xBD351871L}},{{0x064F5519L,(-10L),0x86F8E898L,0xBD351871L},{0x31E1530DL,(-7L),0x71AC9A27L,0xFE8546CAL},{1L,0x0E199DF3L,0x56B6C8DCL,8L},{0L,0xE3829D37L,0xFE8546CAL,1L}},{{0x31E1530DL,8L,0x31E1530DL,0x71AC9A27L},{(-7L),0xE33C0242L,0x086EFD46L,0L},{0xE33C0242L,0xE3829D37L,(-10L),0xE33C0242L},{1L,1L,(-10L),0xFE8546CAL}}};
            long long l_640 = 0x39B70340AA41E400LL;
            unsigned short l_641 = 8UL;
            union U0 l_673 = {-4L};
            short *l_691 = &g_151;
            int i, j, k;
            if ((*l_432))
            {
                char *l_596 = &g_7;
                union U1 l_598 = {9UL};
                int *l_599 = &l_411[4];
                union U3 l_609 = {0x59L};
                (*l_599) ^= ((*g_259) = func_67(l_596, l_597, p_13, l_598));
                for (g_151 = 21; (g_151 > 0); g_151--)
                {
                    unsigned char *l_604 = &g_505;
                    int *l_614 = &l_396;
                    union U3 l_622 = {0UL};
                    unsigned long long l_623 = 0x7D49B6D2312B999ELL;
                    if ((safe_mod_func_int32_t_s_s(((*p_14) |= (((*l_604)--) >= ((**l_431) ^ (safe_div_func_uint32_t_u_u(((((l_609 , (((((((p_12 = (safe_mul_func_uint16_t_u_u(func_34((**g_275), l_363, (((&g_78[9] != (void*)0) & (*l_599)) , l_612), g_480, l_597.f0), (*l_432)))) || 3UL) && 0xA173F1A7L) || p_12) , (void*)0) != &p_13) && (*l_599))) ^ g_540[5][1]) >= p_15) & 1UL), 4294967289UL))))), 4L)))
                    {
                        int **l_613[7] = {&g_259,&g_259,&g_259,&g_259,&g_259,&g_259,&g_259};
                        const union U0 **l_625 = &l_624;
                        int i;
                        l_614 = &g_44[6][0][0];

                        ;
                        p_14 = (g_505 , l_615[0][3]);

                        ;
                        (*l_625) = (((func_18(l_616, l_616, ((safe_mul_func_int16_t_s_s(p_15, ((safe_sub_func_uint16_t_u_u((*l_432), (((!l_621) , ((*l_599) = ((func_34(p_13, l_363, l_622, (p_12 <= p_12), (*g_568)) || (*l_599)) && (*p_14)))) == 0x140E31F2L))) , 0x9D59L))) , l_363), &g_454[1], l_623) == p_15) , (*l_464)) , l_624);
                    }
                    else
                    {
                        return l_626;


                    }

                    ;
                    ;
                    for (l_405 = 1; (l_405 >= 0); l_405 -= 1)
                    {
                        char *l_627[2][10][2] = {{{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7}},{{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7},{&g_7,&g_7}}};
                        int i, j, k;
                        return l_627[1][9][1];


                    }
                }
                (*g_259) = (*g_568);
            }
            else
            {
                long long l_630 = 0xA36765892C42FA2CLL;
                int l_637[8] = {0L,(-8L),0L,(-8L),0L,(-8L),0L,(-8L)};
                char *l_652 = (void*)0;
                union U3 l_694 = {0UL};
                union U3 l_701 = {0x5CL};
                short *l_704 = &g_151;
                int i;
                for (g_260 = (-29); (g_260 <= 22); ++g_260)
                {
                    unsigned long long l_631 = 0x4DEBAC6C5CCBCAB8LL;
                    union U3 l_634 = {1UL};
                    int *l_635 = &l_417;
                    --l_631;
                    for (l_621 = 0; (l_621 <= 1); l_621 += 1)
                    {
                        char *l_636 = &g_7;
                        int i, j, k;
                        l_411[(l_621 + 5)] = (!func_34(((void*)0 != &p_12), l_363, l_634, (255UL >= (func_18(&g_7, l_636, l_363, &g_454[2], g_44[(l_621 + 7)][l_621][(l_621 + 4)]) , p_12)), (*g_568)));
                    }
                }
                ++l_641;
                for (l_638 = 0; (l_638 >= 23); ++l_638)
                {
                    long long l_653 = 0x7F9A89FBEC304323LL;
                    int l_654 = 0x6E1A3F61L;
                    int l_657 = 9L;
                    int l_658 = 8L;
                    unsigned char l_659 = 0xA0L;
                    union U1 l_680 = {0x3DCC8C22L};
                    for (l_405 = 0; (l_405 != 12); l_405++)
                    {
                        (*g_259) |= (safe_mod_func_uint64_t_u_u(0xF0CA6CB78B72FBEELL, p_15));
                        (*p_14) = (-3L);
                    }
                    if (((safe_sub_func_int32_t_s_s((0x3546L && (g_151 |= (g_146[0][0] < p_12))), ((&p_13 == ((*g_275) = (*g_275))) >= (l_405 = (((*p_14) = (func_18(l_652, l_616, &g_7, &l_637[6], p_13) <= p_13)) , (*p_14)))))) >= l_640))
                    {
                        long long l_655[10][8][3] = {{{0xEC6C9E77FF4954FDLL,1L,0x73D14D795C7A3274LL},{0x6B43AD73F1267530LL,0L,0L},{0x9FD1942009CF3931LL,0L,0x2087A84F5C772A1ALL},{0x9A0C54E594B796A1LL,0L,0x32782046385932B2LL},{1L,1L,0xBFEB7587DF0AF323LL},{0x385661F4588F4875LL,0x73D14D795C7A3274LL,0x2087A84F5C772A1ALL},{0xBCED67A86741D3DELL,1L,0xE4A67CE89B1A6284LL},{0x8FFA720780CFD180LL,0xE4A67CE89B1A6284LL,0x386AA04AE61AC596LL}},{{0x439F2FDFDBF73C8DLL,0xE4A67CE89B1A6284LL,0L},{0x9A0C54E594B796A1LL,1L,1L},{0xC83EB25E42E8FB08LL,0x73D14D795C7A3274LL,0x80274BC88DB6D688LL},{1L,1L,2L},{0xEC6C9E77FF4954FDLL,0L,0xE4A67CE89B1A6284LL},{0xC83EB25E42E8FB08LL,0L,1L},{5L,0L,(-7L)},{0L,1L,0x32782046385932B2LL}},{{0x8FFA720780CFD180LL,0x73D14D795C7A3274LL,1L},{(-10L),1L,0x07E77412BC41E7BELL},{0x2F8ABD48F36162F9LL,0xE4A67CE89B1A6284LL,0x73D14D795C7A3274LL},{1L,0xE4A67CE89B1A6284LL,0x80274BC88DB6D688LL},{5L,1L,1L},{7L,0x73D14D795C7A3274LL,0xE860BC0C1C11E6C1LL},{0x6B43AD73F1267530LL,0x2AA3AE94354D21CCLL,0xAF364D4CDC8989CDLL},{1L,0x03BF86AFA8B6A163LL,0x5F7BBBC88F27A12ALL}},{{0L,0L,0x923635062B2BDA7FLL},{1L,0x03BF86AFA8B6A163LL,0x9A4249FA54B275F3LL},{1L,0x2AA3AE94354D21CCLL,(-1L)},{(-1L),2L,0x923635062B2BDA7FLL},{1L,(-1L),0x361EB59189AAFC3BLL},{0xB2B97220C5DEEA1ELL,0x1D3440E055826742LL,0L},{1L,0x1D3440E055826742LL,0L},{1L,(-1L),0x5E0B97D978A23E01LL}},{{0xE860BC0C1C11E6C1LL,2L,(-10L)},{6L,0x2AA3AE94354D21CCLL,2L},{0L,0x03BF86AFA8B6A163LL,0x361EB59189AAFC3BLL},{0xE860BC0C1C11E6C1LL,0L,0xC369535A12B9A10FLL},{0x2087A84F5C772A1ALL,0x03BF86AFA8B6A163LL,(-8L)},{0L,0x2AA3AE94354D21CCLL,0x9A4249FA54B275F3LL},{0xB2B97220C5DEEA1ELL,2L,0xC369535A12B9A10FLL},{5L,(-1L),0x1D3440E055826742LL}},{{(-1L),0x1D3440E055826742LL,0xAF364D4CDC8989CDLL},{1L,0x1D3440E055826742LL,(-10L)},{0x2087A84F5C772A1ALL,(-1L),(-1L)},{0x80274BC88DB6D688LL,2L,0x357A7235D7BF5685LL},{1L,0x2AA3AE94354D21CCLL,0L},{6L,0x03BF86AFA8B6A163LL,0x1D3440E055826742LL},{0x80274BC88DB6D688LL,0L,0x68E1CC66BA965B5CLL},{0xA211AA30BBB937AFLL,0x03BF86AFA8B6A163LL,(-1L)}},{{1L,0x2AA3AE94354D21CCLL,(-8L)},{(-1L),2L,0x68E1CC66BA965B5CLL},{0L,(-1L),0x5F7BBBC88F27A12ALL},{(-1L),0x1D3440E055826742LL,2L},{0L,0x1D3440E055826742LL,0x357A7235D7BF5685LL},{0xA211AA30BBB937AFLL,(-1L),0L},{0L,0x579C0B72C79646C6LL,(-1L)},{0x2087A84F5C772A1ALL,0x68E1CC66BA965B5CLL,(-1L)}},{{1L,(-7L),2L},{0L,0x357A7235D7BF5685LL,0x5E0B97D978A23E01LL},{1L,(-7L),0x5F7BBBC88F27A12ALL},{0x5FF7EE0EDF8EFFA2LL,0x68E1CC66BA965B5CLL,0x1D3440E055826742LL},{0x32782046385932B2LL,0x579C0B72C79646C6LL,0x5E0B97D978A23E01LL},{0x6C66B73C99A490DCLL,(-1L),0L},{0xBFEB7587DF0AF323LL,0xAF364D4CDC8989CDLL,0x2AA3AE94354D21CCLL},{0L,0xAF364D4CDC8989CDLL,(-1L)}},{{1L,(-1L),0L},{1L,0x579C0B72C79646C6LL,0x03BF86AFA8B6A163LL},{0xA211AA30BBB937AFLL,0x68E1CC66BA965B5CLL,0x579C0B72C79646C6LL},{0x2087A84F5C772A1ALL,(-7L),0L},{1L,0x357A7235D7BF5685LL,(-1L)},{1L,(-7L),0x361EB59189AAFC3BLL},{0xC57F2F451F0F8366LL,0x68E1CC66BA965B5CLL,0x5F7BBBC88F27A12ALL},{0xBFEB7587DF0AF323LL,0x579C0B72C79646C6LL,(-1L)}},{{(-1L),(-1L),0xAF364D4CDC8989CDLL},{(-7L),0xAF364D4CDC8989CDLL,(-1L)},{0x5FF7EE0EDF8EFFA2LL,0xAF364D4CDC8989CDLL,0x03BF86AFA8B6A163LL},{1L,(-1L),(-1L)},{5L,0x579C0B72C79646C6LL,0x1E1FBDC73E68846DLL},{1L,0x68E1CC66BA965B5CLL,0x2AA3AE94354D21CCLL},{0xA211AA30BBB937AFLL,(-7L),0xAF364D4CDC8989CDLL},{5L,0x357A7235D7BF5685LL,0L}}};
                        int l_656 = 0xF7929FE7L;
                        int i, j, k;
                        ++l_659;
                        g_666 &= (safe_mul_func_int8_t_s_s(((l_652 = &g_7) == l_626), (safe_mod_func_uint32_t_u_u(g_256, ((func_34(l_637[3], (g_454[1] , &g_7), g_40, p_13, (*g_259)) , 0L) , l_640)))));

                        ;
                        return &g_7;


                    }
                    else
                    {
                        short *l_681 = &g_480;
                        (*p_14) ^= (safe_rshift_func_uint16_t_u_u(((**g_275) ^= 0x2C84L), ((safe_mul_func_uint16_t_u_u(p_15, (safe_rshift_func_int8_t_s_u(g_150, l_637[7])))) | ((l_673 , ((safe_lshift_func_int16_t_s_s((safe_sub_func_uint64_t_u_u(0xA73C05CB0897A596LL, (g_78[6] , g_438[2]))), ((*l_681) = (safe_sub_func_int16_t_s_s((func_67(&g_7, l_597, p_15, l_680) != l_640), (-4L)))))) || p_13)) | l_637[6]))));
                        l_682 = &g_438[3];

                        ;
                        return &g_7;


                    }
                }
                if ((*g_259))
                {
                    short *l_692 = &g_146[0][0];
                    char *l_693 = &g_78[9].f2;
                    int l_695[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_695[i] = 0xCC3CE112L;
                    g_454[1] ^= (((&g_461[0][0][0] != ((safe_mul_func_uint16_t_u_u((p_15 && g_195), (!l_641))) , (void*)0)) | (((safe_lshift_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_438[0], func_34((((l_637[6] , (!((*l_693) = (((safe_add_func_int32_t_s_s((l_691 != l_692), (*g_259))) ^ 0x1EB9L) && 0L)))) | 0xF8L) , 0x57EEL), &g_7, l_694, g_180[5].f1, (*l_432)))), (*l_682))) < l_695[1]) | (*l_432))) <= (*l_432));

                                        return l_363;


                }
                else
                {
                    unsigned char l_700 = 246UL;
                    short **l_703 = &l_691;
                    short **l_705 = (void*)0;
                    short **l_706[8][6] = {{&g_145,(void*)0,&g_145,(void*)0,&g_145,(void*)0},{&g_145,(void*)0,&g_145,(void*)0,&g_145,(void*)0},{&g_145,(void*)0,&g_145,(void*)0,&g_145,(void*)0},{&g_145,(void*)0,&g_145,(void*)0,&g_145,(void*)0},{&g_145,(void*)0,&g_145,(void*)0,&g_145,(void*)0},{&g_145,(void*)0,&g_145,(void*)0,&g_145,(void*)0},{&g_145,(void*)0,&g_145,(void*)0,&g_145,(void*)0},{&g_145,(void*)0,&g_145,(void*)0,&g_145,(void*)0}};
                    unsigned long long *l_708 = &l_371;
                    int i, j;
                    for (g_365 = 0; g_365 < 6; g_365 += 1)
                    {
                        for (g_150 = 0; g_150 < 2; g_150 += 1)
                        {
                            g_540[g_365][g_150] = 0x90AEL;
                        }
                    }
                    (*p_14) |= (safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s((l_700 , (l_701 , (((((*l_703) = l_702) == (g_707 = l_704)) > ((*l_708)++)) > ((((g_180[5].f1 , p_13) , (safe_mod_func_uint16_t_u_u(((!p_12) && func_34(p_12, &g_7, l_694, p_12, l_639[0][3][2])), (**l_431)))) , l_263) , p_15)))), (*l_432))), 0x246167EFB5B29890LL));

                    ;
                    (*p_14) = 0x83BA8B01L;
                }

                ;
            }
        }

        ;
        ;
        if (func_34((*g_276), l_616, l_612, ((safe_mod_func_int8_t_s_s((p_15 , (-10L)), ((safe_div_func_int32_t_s_s(l_717, p_15)) & p_13))) & (safe_mul_func_uint16_t_u_u((*l_682), (**g_275)))), l_720))
        {
            union U0 **l_722 = &l_721;
            char *l_758 = &g_7;
            int l_764 = 0xF3FA2BD2L;
            union U3 l_808 = {1UL};
            union U3 l_812 = {0xC4L};
            int l_813 = 0xB329A864L;
            int l_814 = 0x58DF6867L;
            int l_816 = (-1L);
            int l_925 = 7L;
            int l_926 = 0x28E94E3BL;
            int l_928 = 5L;
            int l_929 = (-9L);
            int l_930[2];
            unsigned char l_932[8][10] = {{0x14L,252UL,0x7DL,0xAEL,0xCBL,0x71L,0x5FL,0x70L,0UL,3UL},{0x14L,0x8AL,9UL,0UL,0x7DL,252UL,3UL,6UL,255UL,6UL},{252UL,3UL,6UL,255UL,6UL,3UL,252UL,0x7DL,0UL,9UL},{255UL,7UL,3UL,0UL,0x70L,0x5FL,0x71L,0xCBL,0xAEL,0x7DL},{0UL,7UL,1UL,0x14L,255UL,7UL,252UL,9UL,255UL,255UL},{0x83L,3UL,255UL,0xBDL,0xBDL,255UL,3UL,0x83L,0x8AL,7UL},{1UL,0x8AL,0x70L,6UL,5UL,7UL,5UL,3UL,1UL,255UL},{1UL,0UL,0xBDL,0x7DL,9UL,3UL,0xCDL,7UL,0x37L,5UL}};
            int i, j;
            for (i = 0; i < 2; i++)
                l_930[i] = 0x97C76F96L;
lbl_848:
            (*l_722) = l_721;
            if (((*g_259) = (*p_14)))
            {
                unsigned l_725 = 1UL;
                union U3 l_736 = {0x87L};
                unsigned *l_737 = &g_81;
                unsigned short l_738 = 3UL;
                const long long *l_739 = &l_720;
                unsigned long long *l_754 = &l_717;
                unsigned long long *l_757 = &g_78[9].f1;
                union U2 l_763 = {0xB6516404L};
                unsigned char *l_765 = &l_740.f3;
                char **l_770[1][8][1] = {{{&l_758},{&l_758},{&l_758},{&l_758},{&l_758},{&l_758},{&l_758},{&l_758}}};
                int l_795 = 0L;
                int l_796 = 0x6701C0E3L;
                unsigned long long l_797 = 0xDE965D29AA21A80ELL;
                int l_817 = 0L;
                int l_825 = (-1L);
                int l_826 = 0xF34D8B16L;
                int l_827 = 5L;
                int l_828 = 0xDE983C7CL;
                unsigned l_829[5][3][2];
                int **l_839[6][7] = {{&g_259,(void*)0,&g_259,&g_792,&g_259,(void*)0,&g_259},{&l_615[0][3],(void*)0,(void*)0,&l_615[0][3],(void*)0,&g_259,&g_259},{&l_615[0][3],(void*)0,&l_615[3][1],(void*)0,&l_615[0][3],(void*)0,&l_615[3][1]},{(void*)0,&l_615[0][3],(void*)0,(void*)0,&l_615[0][3],(void*)0,&g_259},{&g_259,&g_792,&g_259,(void*)0,&g_259,&g_792,&g_259},{(void*)0,(void*)0,&g_259,&l_615[0][3],&l_615[0][3],&g_259,(void*)0}};
                int i, j, k;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 3; j++)
                    {
                        for (k = 0; k < 2; k++)
                            l_829[i][j][k] = 1UL;
                    }
                }
                (*p_14) = (safe_lshift_func_uint16_t_u_s((p_12 == (l_725 & p_15)), (l_738 = (safe_lshift_func_int16_t_s_s(p_13, ((((*l_737) = (safe_mod_func_int16_t_s_s(func_34((safe_rshift_func_uint8_t_u_u((safe_mod_func_int64_t_s_s(((safe_sub_func_int64_t_s_s(g_146[0][0], ((+p_12) ^ func_34(p_13, &g_7, l_612, g_260, (*g_568))))) | g_454[0]), l_725)), 6)), l_616, l_736, l_725, l_725), 0x49B5L))) >= 0x5A501BB6L) <= 65534UL))))));
                if (((l_739 != (l_740 , l_739)) , (((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((g_505 = ((*l_765) = (((safe_div_func_int64_t_s_s(g_454[6], ((*l_754) = (safe_div_func_uint8_t_u_u((safe_div_func_uint32_t_u_u((((safe_rshift_func_uint8_t_u_s((p_14 != (g_753 = &g_81)), 3)) || (func_67((((*l_757) = ((*l_754)--)) , l_758), l_612, (safe_rshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_u(((l_763 , l_764) == g_256), 6)) >= (**l_431)), 14)), l_740) || 1L)) , (*g_753)), g_666)), 6L))))) >= p_15) | g_151))), p_12)), p_15)) || 1L) | g_81)))
                {
                    unsigned long long l_786 = 0x8D5D1FF195A14CD4LL;
                    short *l_787 = &g_146[0][0];
                    char *l_790 = &g_7;
                    int *l_791 = &g_454[5];
                    if ((g_540[5][0] < ((*g_753) > (safe_add_func_int16_t_s_s(p_13, (~(((*l_787) |= (((void*)0 == l_770[0][3][0]) & (((safe_sub_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((**g_275), (((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_add_func_uint16_t_u_u((((*g_707) = (safe_mul_func_int8_t_s_s((safe_add_func_int8_t_s_s((g_785 ^= (253UL > g_505)), l_786)), (*l_682)))) ^ p_15), (-8L))), 65531UL)), 3L)) >= l_764) , l_763.f0))), p_13)) > (*p_14)) , (*g_753)))) , (*g_707))))))))
                    {
                        char *l_793 = &g_7;
                        int **l_794 = (void*)0;
                        p_14 = ((safe_mod_func_uint16_t_u_u(((**g_275) = func_18(l_790, l_793, (g_40 , l_363), p_14, g_78[9].f0)), 0x8E87L)) , (void*)0);

                        ;
                        p_14 = &l_764;

                        ;
                        (*l_273) = (*l_273);
                        return l_758;


                    }
                    else
                    {
                        ++l_797;
                    }
                }
                else
                {
                    (*p_14) &= 0x4E9440F5L;
                    for (g_191.f0 = 0; (g_191.f0 <= 2); g_191.f0 = safe_add_func_int8_t_s_s(g_191.f0, 8))
                    {
                        int **l_802 = &g_792;
                        (*l_802) = &l_764;

                        ;
                        (**l_802) = func_34(((p_13 != (safe_lshift_func_int16_t_s_u((*l_682), 4))) == (*g_707)), &g_7, g_40, p_13, (*g_568));
                    }

                    ;
                    for (l_720 = 0; l_720 < 10; l_720 += 1)
                    {
                        union U1 tmp = {0x43C4C48AL};
                        g_78[l_720] = tmp;
                    }
                }

                                ;
                ;
                for (l_402 = 1; (l_402 >= 0); l_402 -= 1)
                {
                    char *l_807 = &g_7;
                    int l_819 = 4L;
                    long long l_820 = 1L;
                    int l_821 = (-1L);
                    unsigned l_822 = 4294967295UL;
                    int i;
                    if ((safe_sub_func_uint16_t_u_u((func_67(l_616, l_736, func_67(l_807, l_808, (safe_sub_func_uint16_t_u_u((safe_unary_minus_func_int32_t_s(g_454[(l_402 + 3)])), (-1L))), g_78[1]), g_78[9]) | l_736.f0), 1UL)))
                    {
                        int l_815 = 6L;
                        int l_818[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_818[i] = 0xAE40CB3BL;
                        (*g_259) = (g_454[(l_402 + 6)] = func_34(p_13, ((*p_14) , &g_7), l_812, g_93, (*g_259)));
                        l_822--;
                        l_829[3][0][1]++;
                        (*g_259) = l_819;
                    }
                    else
                    {
                        long long l_832 = 0x55105CE7D3D5A898LL;
                        (*p_14) &= l_832;
                    }
                    for (g_93 = 0; (g_93 <= 1); g_93 += 1)
                    {
                        int i, j;
                        (*p_14) = g_146[l_402][g_93];
                        return l_616;



                    }
                    for (p_15 = 0; (p_15 <= 1); p_15 += 1)
                    {
                        const int **l_833 = &g_568;
                        (*l_833) = &g_438[0];

                        ;
                    }
                    for (g_194 = 0; (g_194 <= 1); g_194 += 1)
                    {
                        union U2 **l_834[3][3];
                        unsigned char l_836[4][8][7] = {{{0x2FL,0xB2L,254UL,0xB2L,0x2FL,8UL,0x4FL},{255UL,255UL,2UL,255UL,255UL,0xC8L,0xC8L},{0x2FL,0xB2L,254UL,0xB2L,0x2FL,8UL,0x4FL},{255UL,255UL,2UL,255UL,255UL,0xC8L,0xC8L},{0x2FL,0xB2L,6UL,0x5FL,254UL,0x36L,7UL},{2UL,255UL,0UL,255UL,2UL,0UL,0UL},{254UL,0x5FL,6UL,0x5FL,254UL,0x36L,7UL},{2UL,255UL,0UL,255UL,2UL,0UL,0UL}},{{254UL,0x5FL,6UL,0x5FL,254UL,0x36L,7UL},{2UL,255UL,0UL,255UL,2UL,0UL,0UL},{254UL,0x5FL,6UL,0x5FL,254UL,0x36L,7UL},{2UL,255UL,0UL,255UL,2UL,0UL,0UL},{254UL,0x5FL,6UL,0x5FL,254UL,0x36L,7UL},{2UL,255UL,0UL,255UL,2UL,0UL,0UL},{254UL,0x5FL,6UL,0x5FL,254UL,0x36L,7UL},{2UL,255UL,0UL,255UL,2UL,0UL,0UL}},{{254UL,0x5FL,6UL,0x5FL,254UL,0x36L,7UL},{2UL,255UL,0UL,255UL,2UL,0UL,0UL},{0x4FL,0x3EL,7UL,0x3EL,0x4FL,0xFBL,254UL},{0xC8L,0xA7L,0UL,0xA7L,0xC8L,2UL,2UL},{0x4FL,0x3EL,7UL,0x3EL,0x4FL,0xFBL,254UL},{0xC8L,0xA7L,0UL,0xA7L,0xC8L,2UL,2UL},{0x4FL,0x3EL,7UL,0x3EL,0x4FL,0xFBL,254UL},{0xC8L,0xA7L,0UL,0xA7L,0xC8L,2UL,2UL}},{{0x4FL,0x3EL,7UL,0x3EL,0x4FL,0xFBL,254UL},{0xC8L,0xA7L,0UL,0xA7L,0xC8L,2UL,2UL},{0x4FL,0x3EL,7UL,0x3EL,0x4FL,0xFBL,254UL},{0xC8L,0xA7L,0UL,0xA7L,0xC8L,2UL,2UL},{0x4FL,0x3EL,7UL,0x3EL,0x4FL,0xFBL,254UL},{0xC8L,0xA7L,0UL,0xA7L,0xC8L,2UL,2UL},{0x4FL,0x3EL,7UL,0x3EL,0x4FL,0xFBL,254UL},{0xC8L,0xA7L,0UL,0xA7L,0UL,0UL,0UL}}};
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                                l_834[i][j] = &g_253;
                        }
                        l_835 = &g_191;

                        ;
                        l_836[2][4][3]++;
                    }
                }

                ;
                ;
                p_14 = &g_454[0];

                ;
            }
            else
            {
                union U3 l_842 = {247UL};
                union U0 l_843 = {0x5BA7286CL};
                unsigned long long *l_844 = (void*)0;
                unsigned long long *l_845 = &g_78[9].f1;
                unsigned long long *l_846 = (void*)0;
                unsigned long long *l_847 = &g_233;
                int *l_853 = &g_666;
                int l_856 = (-8L);
                unsigned l_859 = 0xBB5150D8L;
                l_816 |= ((p_12 > g_666) | (safe_mul_func_uint16_t_u_u(((func_34((*g_276), &g_7, l_842, (+(*l_432)), (*p_14)) != (l_402 = ((*l_847) = ((*l_845) = ((l_843 , l_835) == (void*)0))))) && (-6L)), l_842.f0)));
                if (g_233)
                    goto lbl_848;
                l_814 = ((g_365 ^ (((*p_14) = ((safe_rshift_func_uint8_t_u_s((((*l_847) &= (safe_sub_func_int16_t_s_s((&g_180[5] == (((*l_853) ^= (func_34((**g_275), l_616, l_812, g_195, (*p_14)) >= 0UL)) , (*l_722))), (*g_707)))) | g_505), 1)) && 0L)) , 18446744073709551609UL)) ^ 0x51L);
                for (g_81 = (-22); (g_81 >= 31); g_81++)
                {
                    char l_857 = 0x67L;
                    int l_858[9][4][2] = {{{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L},{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L}},{{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L},{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L}},{{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L},{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L}},{{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L},{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L}},{{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L},{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L}},{{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L},{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L}},{{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L},{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L}},{{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L},{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L}},{{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L},{0x9D0067D9L,0x9A1F3F31L},{1L,0x9A1F3F31L}}};
                    int i, j, k;
                    l_859--;
                    (*p_14) = (*p_14);
                    if (l_857)
                        break;
                    (*p_14) = l_859;
                }
            }

            ;
                        ;
            ;
            ;
            for (p_15 = 20; (p_15 < 26); p_15++)
            {
                unsigned char l_878 = 0x6BL;
                unsigned char l_879 = 0xE6L;
                union U2 *l_881 = &g_191;
                unsigned l_886 = 4294967295UL;
                int l_907 = 0xBB7FB7F9L;
                if ((*g_259))
                    break;
                if ((((safe_add_func_int64_t_s_s(((safe_lshift_func_int16_t_s_s(((g_180[3] , (*g_753)) <= ((safe_sub_func_uint32_t_u_u((safe_rshift_func_int8_t_s_u((safe_rshift_func_int16_t_s_s((0UL != (p_15 , (safe_rshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s((6L > (p_13 < ((**g_275) = func_67(l_363, g_40, (((*g_253) , p_13) > 0x57FEL), g_78[9])))), l_814)), 9)))), (*g_707))), g_540[2][1])), (*p_14))) ^ g_195)), (*g_707))) , g_195), l_878)) || (-1L)) & l_879))
                {
                    union U2 **l_880[6][4][6] = {{{&l_464,&g_253,&l_464,(void*)0,&l_464,(void*)0},{&l_835,&l_835,&l_835,&g_253,&l_464,&l_835},{&l_464,&l_835,&l_835,&l_835,&l_464,&g_253},{&l_464,&g_253,&l_835,&l_835,&l_835,&g_253}},{{&l_464,(void*)0,&l_464,&g_253,&l_464,&g_253},{&l_835,&g_253,&l_835,(void*)0,&l_464,&g_253},{&l_464,&g_253,&l_835,&g_253,&l_464,&l_835},{&l_464,(void*)0,&l_835,&g_253,&l_835,(void*)0}},{{&l_464,&g_253,&l_464,(void*)0,&l_464,(void*)0},{&l_835,&l_835,&l_835,&g_253,&l_464,&l_835},{&l_464,&l_835,&l_835,&l_835,&l_464,&g_253},{&l_464,&g_253,&l_835,&l_835,&l_835,&g_253}},{{&l_464,(void*)0,&l_464,&g_253,&l_464,&g_253},{&l_835,&g_253,&l_835,(void*)0,&l_464,&g_253},{&l_464,&g_253,&l_835,&g_253,&l_464,&l_835},{&l_464,(void*)0,&l_835,&g_253,&l_835,(void*)0}},{{&l_464,&g_253,&l_464,(void*)0,&l_464,(void*)0},{&l_835,&l_835,&l_835,&g_253,&l_464,&l_835},{&l_464,&l_835,&l_835,&l_835,&l_464,&g_253},{&l_464,&g_253,&l_835,&l_835,&l_835,&g_253}},{{&l_464,(void*)0,&l_464,&g_253,&l_464,&g_253},{&l_835,&g_253,&l_835,(void*)0,&l_464,&g_253},{&l_464,&g_253,&l_835,&g_253,&l_464,&l_835},{&l_464,(void*)0,&l_835,&g_253,&l_835,(void*)0}}};
                    int i, j, k;
                    l_881 = &g_191;
                }
                else
                {
                    int l_883 = 0x566C521CL;
                    int l_884 = (-1L);
                    int l_885[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_885[i] = (-1L);
                    l_359 ^= ((*p_14) = (g_882[0][5][3] |= (*p_14)));
                    --l_886;
                    l_885[2] &= ((*g_259) = (-8L));
                }
                for (l_395 = 9; (l_395 >= 0); l_395 -= 1)
                {
                    for (l_816 = 7; (l_816 >= 0); l_816 -= 1)
                    {
                        int **l_889 = &l_615[0][3];
                        char *l_890 = &g_7;
                        if ((*g_568))
                            break;
                        (*l_889) = (void*)0;


                        return l_890;



                    }
                    for (l_764 = 0; (l_764 <= 9); l_764 += 1)
                    {
                        unsigned l_891[2][9] = {{0UL,0UL,0x4863EF96L,0x02487E5EL,0x4863EF96L,0UL,0UL,0x4863EF96L,0x02487E5EL},{0x65F119CBL,1UL,0x65F119CBL,0x4863EF96L,0x4863EF96L,0x65F119CBL,1UL,0x65F119CBL,0x4863EF96L}};
                        long long *l_897 = &l_720;
                        int i, j;
                        l_891[1][1]--;
                        l_907 = func_67(l_616, g_894[3][0], ((g_78[l_764] , ((*g_276) = (safe_add_func_uint32_t_u_u((((*l_897) = g_78[l_764].f0) >= (safe_mul_func_int8_t_s_s((safe_div_func_uint64_t_u_u((((*l_722) = l_902) != &g_180[4]), (safe_mul_func_int16_t_s_s(p_12, (safe_sub_func_int8_t_s_s(1L, 247UL)))))), p_13))), (-1L))))) || (*g_707)), g_78[l_395]);

                        ;
                    }
                }
                (*g_259) = (safe_mod_func_uint64_t_u_u(g_195, (p_13 | (safe_div_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u((g_480 &= ((*l_702) = ((safe_mod_func_int32_t_s_s((safe_div_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(l_878, p_15)), p_12)), ((safe_sub_func_uint16_t_u_u(p_12, (*l_682))) && (safe_add_func_uint16_t_u_u(p_13, p_15))))) <= 0xCB2EL))), 8)) > p_15), 252UL)))));
            }

            ;
            l_932[1][6]++;
        }
        else
        {
            union U2 **l_935 = &g_253;
            int l_948 = 0xF259B1CBL;
            union U3 *l_957 = &g_894[0][2];
            (*l_935) = l_835;

            ;
            for (g_480 = 0; (g_480 <= 3); g_480 += 1)
            {
                char *l_949 = &g_7;
                int l_950 = 1L;
                union U2 *l_954 = &g_191;
                (*g_259) &= l_936[0];
                if ((((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((((safe_mul_func_uint16_t_u_u(p_12, 1L)) || (safe_add_func_int32_t_s_s((g_454[1] && ((safe_rshift_func_uint8_t_u_s((l_947 != &l_702), func_18(l_363, ((((*p_14) , l_948) ^ g_180[5].f0) , (void*)0), l_949, &g_454[1], p_12))) , g_93)), (*g_568)))) ^ 8UL), p_12)), p_13)) && 0xCAFCL) | 65535UL))
                {
                    if ((*p_14))
                    {
                        unsigned l_951 = 0x2239C39EL;
                        union U2 *l_955 = (void*)0;
                        l_951--;
                        l_955 = ((*l_935) = l_954);

                        ;
                        ;
                        l_948 = l_956;
                    }
                    else
                    {
                        (*p_14) = (*g_568);
                    }
                }
                else
                {
                    if ((*p_14))
                        break;
                    (*g_259) = 0xFF1B8A33L;
                }

                ;
                return &g_7;


            }

            ;
            l_957 = l_957;
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
    ;
    ;

    (*l_961) &= (safe_mod_func_uint8_t_u_u((&g_145 == (g_78[5] , &g_707)), (g_480 || (l_323 &= ((((*p_14) , (*g_275)) != (void*)0) , (**l_431))))));
    if (((*l_432) <= 4294967286UL))
    {
        union U3 l_964 = {0x49L};
        int **l_969 = &g_792;
        int ***l_968 = &l_969;
        char *l_974[3];
        int l_979 = 1L;
        union U2 *l_987 = &g_191;
        int l_1042 = (-1L);
        int l_1043[10];
        short l_1107 = 0x3302L;
        const union U1 l_1143 = {0xFA9A33D2L};
        union U0 *l_1155 = &g_180[5];
        short **l_1159 = &g_145;
        long long *l_1182[6][10] = {{&l_978,(void*)0,&l_978,&l_978,&l_720,&l_720,&l_978,&g_443,(void*)0,&l_720},{&g_443,&l_720,&l_720,&g_443,&l_720,&l_978,&l_978,&g_443,&l_978,&g_443},{&g_443,&l_720,&l_978,(void*)0,(void*)0,&g_443,&g_443,(void*)0,(void*)0,&l_978},{&l_978,&l_978,&l_720,&l_720,&l_720,(void*)0,&l_720,&l_720,&g_443,&g_443},{&g_443,(void*)0,(void*)0,&l_720,&l_978,&l_978,&l_720,&l_720,&g_443,&g_443},{(void*)0,&l_720,&l_978,&l_978,&l_978,(void*)0,&l_978,&l_978,&l_978,&l_720}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_974[i] = &g_7;
        for (i = 0; i < 10; i++)
            l_1043[i] = 0L;
        if (((*p_14) = (safe_lshift_func_int16_t_s_s(((((l_964 , 1UL) , p_15) < (*l_961)) <= p_15), (p_12 && ((*g_707) = (g_78[9] , p_13)))))))
        {
            int **l_965 = &g_792;
            (*l_965) = p_14;

            ;
        }
        else
        {
            short *l_972 = &g_146[2][1];
            union U2 *l_973 = &g_191;
            char **l_975 = &l_974[0];
            unsigned short *l_976[2];
            unsigned short *l_977 = (void*)0;
            int l_982 = 6L;
            union U0 l_983[10] = {{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L},{0L}};
            unsigned long long *l_989[4];
            char *l_1039 = &l_960.f2;
            int l_1044 = 0x01EA9B8DL;
            int l_1045 = 0xE586EEDFL;
            int l_1055[9] = {1L,(-10L),1L,(-10L),1L,(-10L),1L,(-10L),1L};
            unsigned l_1056 = 0x042CBD6AL;
            char *l_1106 = &g_7;
            union U3 l_1138 = {0x85L};
            unsigned l_1189[7];
            int *l_1190[9][9] = {{&l_396,(void*)0,&l_1042,&l_417,(void*)0,&l_417,(void*)0,&l_417,&l_1042},{&l_1044,&l_1044,&l_1043[2],&l_401,&l_1044,&l_1044,(void*)0,&l_1044,&l_1044},{&l_396,(void*)0,(void*)0,&l_396,(void*)0,&l_396,&l_411[0],&l_1042,&l_411[0]},{(void*)0,&l_403,&l_1043[2],&l_1043[2],&l_403,(void*)0,&l_395,&l_1044,&l_936[0]},{&l_409,&l_396,&l_1042,(void*)0,(void*)0,&l_1042,&l_396,&l_409,(void*)0},{&l_936[0],&l_1043[2],&l_982,&l_395,&l_1044,&l_1044,&l_395,&l_982,&l_1043[2]},{(void*)0,&l_409,&l_417,(void*)0,(void*)0,&l_411[0],&l_411[0],(void*)0,(void*)0},{&l_401,&g_454[2],&l_936[0],&l_1043[2],&l_982,&l_395,&l_1044,&l_1044,&l_395},{&l_417,(void*)0,&l_417,(void*)0,&l_417,&l_1042,(void*)0,&l_396,&l_396}};
            unsigned long long l_1194[5][6] = {{1UL,7UL,7UL,1UL,0xEA79DE6E99E52343LL,1UL},{1UL,0xEA79DE6E99E52343LL,1UL,7UL,7UL,1UL},{18446744073709551614UL,18446744073709551614UL,7UL,0UL,7UL,18446744073709551614UL},{7UL,0xEA79DE6E99E52343LL,0UL,0UL,0xEA79DE6E99E52343LL,7UL},{18446744073709551614UL,7UL,0UL,7UL,18446744073709551614UL,18446744073709551614UL}};
            unsigned l_1199 = 4294967290UL;
            char *l_1204 = &g_7;
            int i, j;
            for (i = 0; i < 2; i++)
                l_976[i] = &g_195;
            for (i = 0; i < 4; i++)
                l_989[i] = &g_78[9].f1;
            for (i = 0; i < 7; i++)
                l_1189[i] = 0UL;
            if ((((safe_div_func_int32_t_s_s((l_968 != &l_431), (*l_961))) , func_34((l_978 = func_34((safe_sub_func_int32_t_s_s((l_972 != (void*)0), ((g_78[9] , l_464) == l_973))), ((*l_975) = &g_7), l_263, p_15, (**l_431))), &g_7, l_263, g_260, l_979)) != (*g_276)))
            {
                unsigned short l_993 = 65535UL;
                char *l_1030 = &g_7;
                (*p_14) = ((*l_961) |= (safe_sub_func_uint64_t_u_u((p_15 , 18446744073709551615UL), l_982)));
                if (((l_983[7] , (void*)0) == (p_12 , (void*)0)))
                {
                    union U1 **l_991 = (void*)0;
                    int l_999 = 0xF976A0C3L;
                    int ***l_1000 = &l_969;
                    if (((*l_961) = (!(*p_14))))
                    {
                        short l_986 = 6L;
                        (*l_961) = (safe_sub_func_uint8_t_u_u(p_15, (*l_961)));
                        (*l_961) |= (((l_986 >= ((l_987 == &g_191) || ((*g_568) >= (*p_14)))) >= (*p_14)) != 0x01L);
                    }
                    else
                    {
                        unsigned long long *l_988 = &l_371;
                        unsigned long long **l_990 = &l_988;
                        char *l_996 = &g_7;
                        int ****l_1001 = (void*)0;
                        union U1 *l_1021 = &g_78[5];
                        int l_1022 = 0L;
                        (*p_14) = ((((((*l_990) = (l_989[3] = l_988)) == (void*)0) > (l_624 != &g_180[5])) & ((l_991 != g_992) & (((l_993 & (safe_add_func_uint64_t_u_u(((((*l_961) = func_34((*l_432), l_996, g_894[1][2], g_195, (*g_568))) ^ 0x56L) >= (*p_14)), p_15))) ^ 1UL) >= 0x9853E4E9L))) <= g_454[1]);


                        l_1022 ^= ((safe_add_func_int32_t_s_s(l_999, (&l_431 == (g_1002 = (l_968 = l_1000))))) != (((((safe_mul_func_int8_t_s_s(((--(*g_753)) < (safe_div_func_uint64_t_u_u(p_12, g_40.f0))), (&g_180[5] != &g_180[2]))) != (safe_sub_func_uint64_t_u_u(((p_15--) >= ((*l_961) = (safe_sub_func_uint64_t_u_u((safe_div_func_uint64_t_u_u(p_12, (safe_rshift_func_uint16_t_u_u((((safe_unary_minus_func_uint64_t_u(g_785)) != p_13) != l_993), p_13)))), p_13)))), p_12))) != g_44[4][1][0]) , (void*)0) != l_1021));

                                                ;
                        l_982 = (*p_14);
                    }


                    ;
                    for (g_150 = 0; (g_150 == 16); ++g_150)
                    {
                        unsigned short l_1025 = 65535UL;
                        (*p_14) &= ((l_1025 <= p_12) & l_982);
                    }
                    (*l_961) ^= (*p_14);
                }
                else
                {
                    unsigned l_1035 = 0x1BED2B1BL;
                    char *l_1038[9] = {&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7,&g_7};
                    int *l_1041[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_1041[i] = &g_44[6][0][0];
                    for (l_395 = 0; (l_395 >= (-10)); --l_395)
                    {
                        unsigned l_1036 = 0x89C449E6L;
                        long long *l_1037 = &g_443;
                        int **l_1040 = &l_961;
                        (*l_1040) = func_60((**g_1002), p_12, ((safe_rshift_func_uint16_t_u_u(func_18((*l_975), l_1030, (l_1039 = l_1038[5]), (**g_1002), g_150), 8)) , 0xCEL));

                        ;
                        ;
                        ;
                    }

                    ;
                    ;
                    l_1046++;
                }

                                ;

                ;
                ;
                (*p_14) = (0L && (safe_mod_func_uint64_t_u_u(p_15, 0xBC7D9A8A608E2415LL)));
            }
            else
            {
                int *l_1051 = &l_397;
                int *l_1052 = &l_1045;
                int *l_1053[10][2][1] = {{{&l_982},{(void*)0}},{{&l_982},{&l_322}},{{&l_982},{(void*)0}},{{&l_982},{&l_322}},{{&l_982},{(void*)0}},{{&l_982},{&l_322}},{{&l_982},{(void*)0}},{{&l_982},{&l_322}},{{&l_982},{(void*)0}},{{&l_982},{&l_322}}};
                char l_1054 = 0xA6L;
                int i, j, k;
                ++l_1056;
            }

                        ;

            ;
            ;
            for (l_296 = 1; (l_296 == 60); l_296 = safe_add_func_int8_t_s_s(l_296, 7))
            {
                unsigned l_1070 = 0xFE148BB9L;
                char *l_1080 = &g_7;
                union U1 *l_1095 = &l_960;
                int ***l_1098[1][10] = {{&l_969,&l_969,&g_1003,&l_969,&l_969,&l_969,&l_969,&g_1003,&l_969,&l_969}};
                unsigned char l_1108 = 0x41L;
                int i, j;
                for (g_81 = (-21); (g_81 >= 52); g_81 = safe_add_func_uint64_t_u_u(g_81, 4))
                {
                    int *l_1063 = (void*)0;
                    int *l_1064 = (void*)0;
                    int *l_1065 = &l_1043[2];
                    int *l_1066 = &l_322;
                    int *l_1067 = &l_396;
                    int *l_1068 = (void*)0;
                    int *l_1069[8][7][3] = {{{&l_1055[6],(void*)0,&l_401},{&l_1055[2],&l_401,&l_359},{&l_396,&l_403,&l_982},{(void*)0,&l_323,(void*)0},{&l_982,(void*)0,&l_1043[2]},{&l_417,&l_1044,&l_417},{&l_1055[6],&l_1055[6],&l_982}},{{(void*)0,&g_260,&l_323},{&l_359,&l_1055[6],&l_1043[2]},{&l_323,&l_403,&l_359},{&l_359,&l_982,&l_409},{(void*)0,&l_401,&l_402},{&l_1055[6],&l_359,&l_403},{&l_417,&l_403,&l_322}},{{&l_982,&l_403,&l_403},{&l_310,&g_260,&l_402},{(void*)0,&l_982,&l_409},{&l_322,&l_1044,&l_359},{&l_982,&l_401,&l_1043[2]},{&l_323,&l_1044,&l_323},{&l_1055[6],&l_982,&l_982}},{{&l_936[0],&g_260,&l_417},{&l_359,&l_403,&l_1043[2]},{&l_1043[3],&l_403,(void*)0},{&l_359,&l_359,&l_409},{&l_936[0],&l_401,&l_359},{&l_1055[6],&l_982,&l_403},{&l_323,&l_403,&l_310}},{{&l_982,&l_1055[6],&l_403},{&l_322,&g_260,&l_359},{(void*)0,&l_1055[6],&l_409},{&l_310,&l_1044,(void*)0},{&l_982,(void*)0,&l_1043[2]},{&l_417,&l_1044,&l_417},{&l_1055[6],&l_1055[6],&l_982}},{{(void*)0,&g_44[6][0][0],&l_402},{&l_982,&l_396,&l_982},{&l_359,&l_401,&l_1055[2]},{&l_982,&l_1055[6],&l_982},{&l_1043[3],&l_323,&l_310},{&l_396,&l_982,&l_1043[2]},{&l_359,&l_401,&l_936[0]}},{{(void*)0,&l_1043[2],&l_1043[2]},{(void*)0,&g_44[6][0][0],&l_310},{&l_409,(void*)0,&l_982},{&l_936[0],&l_403,&l_1055[2]},{(void*)0,&l_409,&l_982},{&l_402,&l_403,&l_402},{&l_396,(void*)0,&l_1055[6]}},{{&l_323,&g_44[6][0][0],&l_359},{&l_982,&l_1043[2],&l_982},{(void*)0,&l_401,(void*)0},{&l_982,&l_982,&l_982},{&l_323,&l_323,&l_322},{&l_396,&l_1055[6],&l_1043[2]},{&l_402,&l_401,(void*)0}}};
                    char *l_1079 = &g_7;
                    int i, j, k;
                    ++l_1070;
                    (*l_1065) ^= (*p_14);
                    if (((safe_mul_func_uint8_t_u_u((l_1070 ^ ((+((safe_lshift_func_int16_t_s_s(func_18(((safe_add_func_int32_t_s_s((*p_14), p_13)) , &g_7), l_1079, (l_1080 = l_1080), p_14, p_12), 15)) ^ p_15)) || (-1L))), p_15)) != (*l_432)))
                    {
                        char **l_1081 = &l_363;
                        int l_1086[6][4] = {{0x28F97698L,0L,0L,0x28F97698L},{0L,0x28F97698L,0xA67087E0L,(-3L)},{0L,0xA67087E0L,0L,0x1C03B420L},{0x28F97698L,(-3L),0x1C03B420L,0x1C03B420L},{0xA67087E0L,0xA67087E0L,6L,(-3L)},{(-3L),0x28F97698L,6L,0x28F97698L}};
                        int ****l_1099[10] = {&l_1098[0][5],&l_1098[0][5],&l_1098[0][5],&l_1098[0][5],&l_1098[0][5],&l_1098[0][5],&l_1098[0][5],&l_1098[0][5],&l_1098[0][5],&l_1098[0][5]};
                        int i, j;
                        (*p_14) = func_18(l_974[1], l_1080, ((*l_1081) = &g_7), &l_1044, ((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(l_1086[4][3], (safe_div_func_uint64_t_u_u((g_233 |= (safe_mod_func_uint16_t_u_u((4294967286UL > ((safe_sub_func_uint8_t_u_u(g_195, (0xE1A9959EL < (safe_div_func_uint32_t_u_u(g_40.f0, (*p_14)))))) ^ p_15)), 0x7405L))), (-1L))))), p_13)) >= p_13));
                        (*l_273) = l_1095;


                        (*l_1067) |= (safe_sub_func_uint8_t_u_u((*l_432), (&g_1003 == (l_1098[0][5] = l_1098[0][5]))));
                        return l_974[2];



                    }
                    else
                    {
                        const int l_1100[5] = {0xA40CD3ECL,0xA40CD3ECL,0xA40CD3ECL,0xA40CD3ECL,0xA40CD3ECL};
                        int i;
                        (*l_1067) |= (~((0xA6L != (p_12 >= 7L)) < (((!(l_1100[1] || g_894[3][0].f0)) != (((safe_unary_minus_func_int8_t_s((l_1044 &= (l_1055[2] == (safe_add_func_uint8_t_u_u((g_505 = (+255UL)), (safe_rshift_func_uint16_t_u_u(((*g_276) = func_18((*l_975), l_1106, &g_7, (*g_1003), l_1100[2])), p_13)))))))) , g_44[6][0][0]) | l_1107)) != p_12)));
                        return l_1079;



                    }
                }
                l_1108--;
            }
            for (l_1056 = (-17); (l_1056 != 56); l_1056 = safe_add_func_int16_t_s_s(l_1056, 4))
            {
                char l_1117 = 0x4CL;
                int l_1144 = (-4L);
                short *l_1173 = &g_365;
                short l_1205 = 0L;
            }
            (**l_968) = p_14;

            ;
        }

                ;
        ;
        ;
    }
    else
    {
        (*p_14) = 0xD23133B6L;
    }


    ;

    return l_363;



}







static unsigned long long func_18(char * p_19, char * p_20, char * p_21, int * p_22, char p_23)
{
    union U2 **l_251 = (void*)0;
    union U2 **l_252 = (void*)0;
    int *l_254 = &g_44[6][0][0];
    int *l_255[6] = {&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0]};
    int i;
    g_253 = &g_191;

    ;
    g_256++;
    return g_194;
}







static char * func_24(char * p_25, unsigned short p_26)
{
    int *l_64[10][5][5] = {{{&g_44[6][0][0],&g_44[6][0][0],&g_44[0][1][4],&g_44[6][0][0],&g_44[6][0][0]},{(void*)0,&g_44[8][0][1],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0]},{&g_44[2][0][6],(void*)0,&g_44[6][0][0],&g_44[8][1][7],&g_44[6][0][0]},{(void*)0,&g_44[6][0][0],&g_44[0][1][2],&g_44[6][0][0],(void*)0},{&g_44[6][0][0],&g_44[7][0][1],&g_44[6][0][0],&g_44[2][0][6],&g_44[2][0][7]}},{{&g_44[8][0][7],&g_44[6][0][0],&g_44[3][0][3],&g_44[6][0][0],(void*)0},{&g_44[6][1][7],&g_44[6][0][0],&g_44[5][1][8],&g_44[7][0][1],&g_44[2][0][7]},{&g_44[8][1][8],&g_44[6][0][0],(void*)0,&g_44[6][0][0],(void*)0},{&g_44[2][0][7],&g_44[6][0][0],&g_44[3][0][3],&g_44[6][0][0],&g_44[6][0][0]},{&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0]}},{{&g_44[3][1][4],&g_44[6][0][0],&g_44[2][0][6],&g_44[6][0][0],&g_44[6][0][0]},{&g_44[6][0][0],&g_44[8][1][6],&g_44[6][0][0],&g_44[5][0][0],&g_44[6][0][0]},{&g_44[6][0][0],(void*)0,(void*)0,&g_44[6][0][0],&g_44[6][0][0]},{&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[1][0][1],&g_44[6][0][0]},{&g_44[3][1][4],(void*)0,(void*)0,&g_44[6][0][0],&g_44[6][0][0]}},{{&g_44[6][0][0],(void*)0,&g_44[8][0][1],&g_44[6][0][0],&g_44[8][0][1]},{&g_44[2][0][7],&g_44[0][1][4],&g_44[6][1][7],&g_44[6][0][0],&g_44[3][1][4]},{&g_44[6][0][0],&g_44[6][0][0],(void*)0,&g_44[0][1][2],&g_44[6][0][0]},{&g_44[6][0][0],&g_44[5][1][3],&g_44[6][0][0],&g_44[0][1][4],&g_44[0][1][4]},{&g_44[0][1][2],&g_44[6][0][0],&g_44[6][0][0],&g_44[5][0][0],&g_44[6][0][0]}},{{&g_44[2][0][7],&g_44[6][0][5],&g_44[3][0][3],(void*)0,&g_44[0][0][2]},{&g_44[6][0][0],(void*)0,&g_44[4][0][2],(void*)0,(void*)0},{&g_44[6][1][4],(void*)0,&g_44[6][1][4],&g_44[2][0][6],&g_44[5][1][8]},{&g_44[6][0][0],(void*)0,&g_44[6][0][0],&g_44[1][0][1],(void*)0},{&g_44[5][0][5],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0]}},{{&g_44[6][0][0],&g_44[8][0][1],&g_44[6][0][0],(void*)0,&g_44[4][0][2]},{&g_44[6][0][0],&g_44[6][0][0],&g_44[6][1][4],&g_44[6][0][0],&g_44[6][0][0]},{&g_44[6][0][0],&g_44[3][0][3],&g_44[4][0][2],&g_44[6][0][0],&g_44[6][0][0]},{&g_44[6][0][0],&g_44[7][1][1],&g_44[3][0][3],(void*)0,&g_44[6][0][0]},{&g_44[4][1][6],&g_44[6][0][0],&g_44[6][0][0],(void*)0,&g_44[8][1][8]}},{{&g_44[6][0][0],&g_44[2][0][1],&g_44[6][0][0],&g_44[2][1][7],&g_44[5][0][5]},{&g_44[6][0][0],&g_44[8][0][7],(void*)0,(void*)0,&g_44[6][0][0]},{&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],(void*)0,(void*)0},{&g_44[8][1][6],&g_44[6][0][0],&g_44[1][0][1],&g_44[6][0][0],(void*)0},{&g_44[3][0][3],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[3][0][3]}},{{&g_44[8][1][8],&g_44[1][0][1],&g_44[3][0][3],(void*)0,&g_44[6][0][0]},{&g_44[4][0][3],&g_44[6][0][0],&g_44[6][0][0],(void*)0,&g_44[6][0][0]},{(void*)0,&g_44[6][0][0],(void*)0,&g_44[4][1][6],&g_44[6][0][0]},{&g_44[6][1][7],(void*)0,&g_44[6][0][0],(void*)0,&g_44[6][1][4]},{&g_44[6][0][0],&g_44[8][1][6],&g_44[8][0][1],&g_44[4][1][7],&g_44[4][0][2]}},{{&g_44[6][0][0],&g_44[7][1][1],&g_44[6][0][0],&g_44[7][0][1],&g_44[3][0][3]},{(void*)0,&g_44[8][1][8],&g_44[5][0][0],&g_44[6][0][0],&g_44[6][0][0]},{&g_44[5][0][5],&g_44[2][0][0],&g_44[6][0][0],&g_44[5][1][3],&g_44[6][0][0]},{&g_44[6][0][0],(void*)0,&g_44[4][1][7],(void*)0,(void*)0},{&g_44[5][0][5],(void*)0,&g_44[3][0][3],&g_44[1][1][0],&g_44[6][0][0]}},{{(void*)0,&g_44[6][0][0],(void*)0,&g_44[3][0][3],&g_44[1][0][1]},{&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0]},{&g_44[6][0][0],&g_44[6][0][0],(void*)0,&g_44[8][1][8],&g_44[3][0][3]},{&g_44[6][1][7],&g_44[2][0][1],&g_44[6][0][0],&g_44[2][0][6],&g_44[0][0][2]},{(void*)0,&g_44[3][0][3],(void*)0,&g_44[4][0][2],&g_44[6][0][0]}}};
    char *l_77 = &g_7;
    union U3 l_216 = {0x7BL};
    int i, j, k;
    l_64[2][3][2] = func_60(l_64[2][3][2], g_7, (safe_lshift_func_uint8_t_u_s(func_67(func_72(l_77, l_64[2][3][2], &g_44[2][1][5], g_78[9]), l_216, (p_26 , p_26), g_78[9]), g_146[1][0])));


    return &g_7;


}







static short func_34(const unsigned short p_35, char * p_36, union U3 p_37, int p_38, int p_39)
{
    int *l_41 = (void*)0;
    int *l_42 = (void*)0;
    int *l_43 = &g_44[6][0][0];
    int *l_45 = (void*)0;
    int *l_46 = &g_44[5][0][8];
    int *l_47 = &g_44[3][1][2];
    int *l_48 = &g_44[6][0][0];
    int *l_49 = &g_44[7][0][2];
    int *l_50 = &g_44[6][0][0];
    int l_51 = 0x927EED05L;
    int *l_52 = &l_51;
    int *l_53 = &g_44[6][0][0];
    int *l_54 = &g_44[2][0][1];
    int *l_55 = (void*)0;
    int *l_56[7][1][10] = {{{&g_44[5][0][2],&g_44[6][0][0],&g_44[7][0][3],(void*)0,&l_51,&g_44[0][1][8],&l_51,(void*)0,&g_44[7][0][3],&g_44[6][0][0]}},{{&g_44[6][0][0],&l_51,&g_44[6][0][0],&g_44[6][0][0],&g_44[2][1][7],&g_44[6][0][0],&g_44[6][0][0],&l_51,&g_44[6][0][0],&g_44[6][0][0]}},{{&g_44[6][0][0],&g_44[5][0][2],&l_51,&g_44[2][1][7],&l_51,(void*)0,&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0],&g_44[6][0][0]}},{{&l_51,&g_44[2][1][7],&g_44[7][1][5],&g_44[6][0][0],&g_44[6][0][0],&g_44[7][1][5],&g_44[2][1][7],&l_51,&g_44[4][0][1],&g_44[2][1][8]}},{{&g_44[6][0][0],&g_44[6][0][0],(void*)0,&l_51,&g_44[2][0][6],&g_44[7][0][3],&g_44[6][0][0],&g_44[7][0][3],&g_44[0][1][8],&g_44[6][0][0]}},{{&g_44[0][1][8],&g_44[6][0][0],(void*)0,&g_44[2][0][6],&g_44[6][0][0],&g_44[7][0][3],&g_44[7][0][3],&l_51,&g_44[7][0][3],&g_44[7][0][3]}},{{&g_44[2][1][7],&g_44[2][1][8],&g_44[7][1][5],&g_44[2][1][8],&g_44[2][1][7],(void*)0,&l_51,&g_44[6][0][0],(void*)0,&g_44[6][1][2]}}};
    unsigned l_57 = 1UL;
    int i, j, k;
    l_57--;
    return (*l_48);
}







static int * const func_60(int * p_61, short p_62, unsigned char p_63)
{
    int *l_249[9] = {(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0,(void*)0};
    int **l_248 = &l_249[3];
    int * const l_250[4] = {(void*)0,(void*)0,(void*)0,(void*)0};
    int i;
    (*l_248) = &g_44[6][0][0];
    (*l_248) = &g_44[6][0][0];
    return l_250[0];


}







static const unsigned char func_67(char * p_68, union U3 p_69, long long p_70, union U1 p_71)
{
    const int l_217 = 1L;
    char *l_218 = &g_7;
    union U3 l_219 = {255UL};
    union U1 **l_230 = (void*)0;
    int *l_231 = (void*)0;
    int *l_232 = &g_44[6][0][0];
    unsigned short *l_238 = &g_194;
    int **l_247 = &l_232;
    g_233 &= func_34(l_217, l_218, l_219, (safe_add_func_uint64_t_u_u(0x81DC7B62B502ABD1LL, g_78[9].f0)), ((safe_lshift_func_int8_t_s_s((l_219.f0 != (safe_div_func_int64_t_s_s((safe_div_func_int64_t_s_s((0xA88E1792L <= (((safe_div_func_int32_t_s_s(((*l_232) = (p_70 , (l_230 != l_230))), g_40.f0)) , 6L) || 0xD288L)), 2UL)), g_40.f0))), (*p_68))) || 0xCBC68467L));
    (*l_232) = ((p_69 , (func_34((*l_232), p_68, g_40, g_81, g_195) , (*l_232))) == (g_194 , (*l_232)));
    (*l_232) = (safe_div_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_s(((void*)0 == l_238), 4)) ^ (g_233 , (safe_sub_func_uint8_t_u_u((~g_180[5].f1), ((g_180[5].f1 || ((void*)0 != &g_145)) , ((safe_lshift_func_uint8_t_u_u(p_71.f0, func_34(((((safe_lshift_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u(0x20L, 0x71L)) >= 0xA405C949L) , g_180[5].f0), g_44[6][0][0])) != 0UL) ^ 0L) <= g_195), l_218, l_219, (*l_232), p_71.f0))) < p_69.f0)))))), g_44[3][1][1]));
    (*l_247) = (g_78[4] , l_231);

    ;
    return g_7;
}







static char * func_72(char * p_73, int * p_74, int * p_75, union U1 p_76)
{
    union U3 l_79 = {0xD7L};
    unsigned *l_80 = &g_81;
    short l_84[10];
    unsigned char l_89 = 0x6EL;
    union U1 l_90 = {0x353696E0L};
    int l_91[3];
    unsigned short *l_92 = &g_93;
    union U2 l_112 = {0xE5F14FE5L};
    long long l_121 = 1L;
    unsigned *l_165 = &l_112.f0;
    char *l_183 = &g_7;
    unsigned short l_204 = 2UL;
    int l_215 = (-3L);
    int i;
    for (i = 0; i < 10; i++)
        l_84[i] = 0x1337L;
    for (i = 0; i < 3; i++)
        l_91[i] = (-1L);
    if (((((*p_75) = (((*l_80) = ((l_79 , p_73) == (void*)0)) > (safe_rshift_func_uint8_t_u_u(l_84[6], 1)))) < (safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u(l_89, 14)), ((*l_92) = ((l_90 , (((p_76.f0 & (((0xBDA4L >= ((g_7 , p_76.f0) ^ l_91[1])) < 0x8DDEC24A879AF5B3LL) > l_89)) && g_78[9].f0) , (*p_73))) == (*p_73)))))) || g_78[9].f0))
    {
        long long l_95 = 0x0D066B32335DC65FLL;
        union U1 *l_97 = &l_90;
        union U1 **l_96 = &l_97;
        for (g_81 = 3; (g_81 <= 9); g_81 += 1)
        {
            int *l_94[1][9][9] = {{{&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2]},{(void*)0,&l_91[0],(void*)0,&l_91[1],(void*)0,&l_91[1],(void*)0,&l_91[0],(void*)0},{&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2]},{(void*)0,&l_91[0],(void*)0,&l_91[1],(void*)0,&l_91[1],(void*)0,&l_91[0],(void*)0},{&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2]},{(void*)0,&l_91[0],(void*)0,&l_91[1],(void*)0,&l_91[1],(void*)0,&l_91[0],(void*)0},{&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2]},{(void*)0,&l_91[0],(void*)0,&l_91[1],(void*)0,&l_91[1],(void*)0,&l_91[0],(void*)0},{&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2],&l_91[2],(void*)0,&l_91[2]}}};
            int i, j, k;
            l_95 = (l_91[1] = ((*p_75) ^= g_93));
            if ((*p_75))
                break;
        }
        (*l_96) = (void*)0;

        ;
    }
    else
    {
        unsigned long long l_98 = 0xA4CB4AB4704B5258LL;
        int l_103 = 0L;
        int l_104 = 0x074BD288L;
        int l_105[10] = {0x048DEE87L,(-1L),0x048DEE87L,0x048DEE87L,(-1L),0x048DEE87L,0x048DEE87L,(-1L),0x048DEE87L,0x048DEE87L};
        short l_106 = (-2L);
        unsigned char l_107[6][9][4] = {{{246UL,255UL,246UL,0x94L},{246UL,0x94L,0xA2L,0x00L},{8UL,0x94L,0UL,0x94L},{0xA2L,255UL,0UL,0UL},{8UL,255UL,0xA2L,0UL},{246UL,255UL,246UL,0x94L},{246UL,0x94L,0xA2L,0x00L},{8UL,0x94L,0UL,0x94L},{0xA2L,255UL,0UL,0UL}},{{8UL,255UL,0xA2L,0UL},{246UL,0UL,0xA2L,255UL},{0xA2L,255UL,8UL,0x94L},{0x57L,255UL,246UL,255UL},{8UL,0UL,246UL,0x00L},{0x57L,255UL,8UL,0x00L},{0xA2L,0UL,0xA2L,255UL},{0xA2L,255UL,8UL,0x94L},{0x57L,255UL,246UL,255UL}},{{8UL,0UL,246UL,0x00L},{0x57L,255UL,8UL,0x00L},{0xA2L,0UL,0xA2L,255UL},{0xA2L,255UL,8UL,0x94L},{0x57L,255UL,246UL,255UL},{8UL,0UL,246UL,0x00L},{0x57L,255UL,8UL,0x00L},{0xA2L,0UL,0xA2L,255UL},{0xA2L,255UL,8UL,0x94L}},{{0x57L,255UL,246UL,255UL},{8UL,0UL,246UL,0x00L},{0x57L,255UL,8UL,0x00L},{0xA2L,0UL,0xA2L,255UL},{0xA2L,255UL,8UL,0x94L},{0x57L,255UL,246UL,255UL},{8UL,0UL,246UL,0x00L},{0xA2L,0x94L,246UL,255UL},{0UL,255UL,0UL,0x00L}},{{0UL,0x00L,246UL,0UL},{0xA2L,0x00L,0x57L,0x00L},{246UL,255UL,0x57L,255UL},{0xA2L,0x94L,246UL,255UL},{0UL,255UL,0UL,0x00L},{0UL,0x00L,246UL,0UL},{0xA2L,0x00L,0x57L,0x00L},{246UL,255UL,0x57L,255UL},{0xA2L,0x94L,246UL,255UL}},{{0UL,255UL,0UL,0x00L},{0UL,0x00L,246UL,0UL},{0xA2L,0x00L,0x57L,0x00L},{246UL,255UL,0x57L,255UL},{0xA2L,0x94L,246UL,255UL},{0UL,255UL,0UL,0x00L},{0UL,0x00L,246UL,0UL},{0xA2L,0x00L,0x57L,0x00L},{246UL,255UL,0x57L,255UL}}};
        char *l_122 = &g_7;
        char l_127 = 0x54L;
        unsigned l_128 = 4294967295UL;
        unsigned l_131 = 0xA8259F37L;
        unsigned short *l_149 = &g_93;
        union U1 l_171[1][4][10] = {{{{5UL},{0xADEA8892L},{0xC1CD0E78L},{0x15A1ACACL},{0x15A1ACACL},{0xC1CD0E78L},{0xADEA8892L},{5UL},{0xC1CD0E78L},{5UL}},{{0x15A1ACACL},{0x4C6D96F2L},{0x6FEF85CDL},{0x15A1ACACL},{0x6FEF85CDL},{1UL},{0x4C6D96F2L},{0xC1CD0E78L},{0xC1CD0E78L},{0x4C6D96F2L}},{{0xC1CD0E78L},{0x63D16F92L},{0xBCCB6193L},{0xBCCB6193L},{0x63D16F92L},{0xC1CD0E78L},{1UL},{0x63D16F92L},{1UL},{0xC1CD0E78L}},{{0x6FEF85CDL},{0x63D16F92L},{0xADEA8892L},{0x63D16F92L},{0x6FEF85CDL},{0xADEA8892L},{0x4C6D96F2L},{0x4C6D96F2L},{0xADEA8892L},{0x6FEF85CDL}}}};
        int i, j, k;
        (*p_75) = (l_91[1] |= (~(l_98 = l_84[6])));
        for (l_89 = 0; (l_89 <= 9); l_89 += 1)
        {
            int *l_99 = &g_44[6][0][0];
            int l_100 = 1L;
            int *l_101 = &g_44[3][1][7];
            int *l_102[2][2][1];
            short *l_123 = &l_106;
            int i, j, k;
            for (i = 0; i < 2; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 1; k++)
                        l_102[i][j][k] = &l_100;
                }
            }
            ++l_107[1][6][2];
            l_91[1] ^= func_34(((~(l_84[l_89] , p_76.f0)) || ((((safe_lshift_func_int16_t_s_s(((l_112 , (safe_mul_func_int16_t_s_s((p_76.f0 , ((*l_123) |= (((safe_lshift_func_uint16_t_u_s(l_84[6], 11)) < (safe_mod_func_uint8_t_u_u((((safe_div_func_uint8_t_u_u(((g_44[0][1][8] > func_34(func_34(g_81, p_73, l_79, g_44[0][0][1], l_121), l_122, l_79, p_76.f0, (*l_99))) != l_90.f0), (*p_73))) | g_7) != g_81), g_44[5][1][5]))) ^ (*p_75)))), 0x180EL))) ^ g_44[6][0][0]), p_76.f0)) , 4294967292UL) & l_105[9]) , 0x7D1AE754895CB3ECLL)), &g_7, l_79, g_81, g_44[2][1][6]);
        }
        for (l_106 = 0; (l_106 == 21); ++l_106)
        {
            int *l_126[9][8][3] = {{{&g_44[1][0][8],(void*)0,(void*)0},{&l_105[9],&g_44[1][1][0],&g_44[1][1][0]},{(void*)0,&l_105[9],(void*)0},{&l_105[9],&l_103,&l_103},{&g_44[1][0][8],(void*)0,(void*)0},{&l_91[1],&l_104,&g_44[1][1][0]},{&l_104,(void*)0,(void*)0},{(void*)0,&l_103,(void*)0}},{{&l_104,&l_105[9],&l_105[9]},{&l_91[1],&g_44[1][1][0],(void*)0},{&g_44[1][0][8],(void*)0,(void*)0},{&l_105[9],&g_44[1][1][0],&g_44[1][1][0]},{(void*)0,&l_105[9],(void*)0},{&l_105[9],&l_103,&l_103},{&g_44[1][0][8],(void*)0,(void*)0},{&l_91[1],&l_104,&g_44[1][1][0]}},{{&l_104,(void*)0,(void*)0},{(void*)0,&l_103,(void*)0},{&l_104,&l_105[9],&l_105[9]},{&l_91[1],&g_44[1][1][0],(void*)0},{&g_44[1][0][8],(void*)0,(void*)0},{&l_105[9],&g_44[1][1][0],&g_44[1][1][0]},{(void*)0,&l_105[9],(void*)0},{&l_105[9],&l_103,&l_103}},{{&l_104,(void*)0,(void*)0},{&l_105[9],&l_103,(void*)0},{&g_44[0][1][0],(void*)0,(void*)0},{&l_105[9],&g_44[1][1][0],&l_104},{&g_44[0][1][0],(void*)0,&l_105[9]},{&l_105[9],(void*)0,&l_104},{&l_104,&l_105[9],(void*)0},{&l_91[1],(void*)0,(void*)0}},{{&l_104,(void*)0,(void*)0},{&l_91[1],&g_44[1][1][0],&l_103},{&l_104,(void*)0,(void*)0},{&l_105[9],&l_103,(void*)0},{&g_44[0][1][0],(void*)0,(void*)0},{&l_105[9],&g_44[1][1][0],&l_104},{&g_44[0][1][0],(void*)0,&l_105[9]},{&l_105[9],(void*)0,&l_104}},{{&l_104,&l_105[9],(void*)0},{&l_91[1],(void*)0,(void*)0},{&l_104,(void*)0,(void*)0},{&l_91[1],&g_44[1][1][0],&l_103},{&l_104,(void*)0,(void*)0},{&l_105[9],&l_103,(void*)0},{&g_44[0][1][0],(void*)0,(void*)0},{&l_105[9],&g_44[1][1][0],&l_104}},{{&g_44[0][1][0],(void*)0,&l_105[9]},{&l_105[9],(void*)0,&l_104},{&l_104,&l_105[9],(void*)0},{&l_91[1],(void*)0,(void*)0},{&l_104,(void*)0,(void*)0},{&l_91[1],&g_44[1][1][0],&l_103},{&l_104,(void*)0,(void*)0},{&l_105[9],(void*)0,&l_105[9]}},{{(void*)0,&g_44[5][0][6],&g_44[5][0][6]},{&l_103,&g_44[2][1][5],&l_91[1]},{(void*)0,(void*)0,(void*)0},{&g_44[1][1][0],&l_105[9],&l_91[1]},{(void*)0,&l_103,&g_44[5][0][6]},{(void*)0,&l_105[9],&l_105[9]},{&l_105[9],(void*)0,&l_103},{(void*)0,&g_44[2][1][5],&l_103}},{{(void*)0,&g_44[5][0][6],&l_103},{&g_44[1][1][0],(void*)0,&l_105[9]},{(void*)0,&g_44[5][0][6],&g_44[5][0][6]},{&l_103,&g_44[2][1][5],&l_91[1]},{(void*)0,(void*)0,(void*)0},{&g_44[1][1][0],&l_105[9],&l_91[1]},{(void*)0,&l_103,&g_44[5][0][6]},{(void*)0,&l_105[9],&l_105[9]}}};
            const union U1 l_132 = {1UL};
            unsigned short *l_147[7][4] = {{&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93},{&g_93,&g_93,&g_93,&g_93}};
            union U3 l_159 = {0xA5L};
            int i, j, k;
            l_128--;
            if (l_131)
            {
                short *l_135[8][3][9] = {{{&l_106,&l_84[6],&l_84[4],(void*)0,(void*)0,&l_84[4],&l_84[6],&l_106,(void*)0},{&l_84[6],&l_106,(void*)0,&l_84[4],&l_106,&l_84[6],(void*)0,&l_106,&l_84[6]},{&l_84[6],&l_84[6],&l_84[1],&l_84[6],&l_84[8],&l_106,&l_84[6],&l_106,&l_84[6]}},{{&l_84[6],(void*)0,&l_84[6],&l_106,(void*)0,&l_106,(void*)0,&l_84[4],&l_84[4]},{&l_84[6],&l_84[6],&l_84[6],&l_106,&l_84[6],&l_84[6],&l_84[6],&l_84[6],&l_106},{&l_84[6],&l_84[6],&l_106,&l_84[6],&l_106,&l_106,&l_106,&l_84[6],&l_84[6]}},{{&l_106,&l_84[6],&l_84[6],&l_106,(void*)0,&l_106,&l_106,&l_84[6],&l_106},{&l_84[8],&l_84[6],(void*)0,(void*)0,&l_84[4],(void*)0,&l_84[6],&l_84[4],&l_84[6]},{&l_84[6],(void*)0,(void*)0,(void*)0,(void*)0,&l_84[6],(void*)0,&l_106,&l_106}},{{&l_84[6],&l_84[6],&l_84[6],&l_106,&l_84[6],&l_106,&l_84[8],&l_84[6],&l_84[1]},{&l_106,(void*)0,&l_106,&l_106,(void*)0,&l_84[6],(void*)0,&l_106,&l_84[6]},{&l_106,&l_84[6],&l_84[6],&l_84[6],(void*)0,&l_84[6],&l_84[6],&l_84[6],&l_84[6]}},{{&l_106,&l_84[6],&l_84[6],&l_84[6],&l_106,(void*)0,&l_84[8],&l_106,&l_106},{(void*)0,&l_106,&l_106,&l_106,&l_84[8],&l_106,&l_84[4],&l_106,&l_84[6]},{&l_84[6],&l_106,&l_84[8],&l_84[8],&l_106,(void*)0,&l_106,&l_84[6],&l_106}},{{&l_106,&l_84[6],&l_84[6],&l_84[8],&l_84[4],&l_106,&l_84[8],&l_106,&l_84[4]},{&l_106,(void*)0,(void*)0,&l_106,&l_106,(void*)0,&l_84[6],&l_106,&l_106},{&l_84[6],&l_84[6],&l_84[8],&l_84[4],&l_106,(void*)0,&l_106,&l_84[6],&l_84[6]}},{{(void*)0,&l_106,&l_84[6],&l_106,&l_106,&l_106,(void*)0,&l_106,&l_84[6]},{(void*)0,(void*)0,&l_106,&l_84[6],&l_84[4],(void*)0,(void*)0,&l_84[4],&l_84[6]},{&l_106,&l_106,&l_106,&l_84[8],&l_106,(void*)0,&l_84[4],&l_106,&l_84[6]}},{{&l_84[6],(void*)0,&l_84[8],(void*)0,&l_84[8],&l_84[6],(void*)0,&l_84[6],&l_106},{(void*)0,&l_84[4],&l_106,&l_84[8],(void*)0,(void*)0,&l_106,&l_84[6],&l_84[4]},{&l_106,&l_106,(void*)0,&l_106,&l_106,&l_106,&l_106,&l_106,(void*)0}}};
                short **l_136 = &l_135[5][0][1];
                unsigned short **l_148[1][10] = {{&l_92,&l_92,&l_92,&l_92,&l_92,&l_92,&l_92,&l_92,&l_92,&l_92}};
                int *l_154 = &g_150;
                char *l_164 = &l_90.f2;
                int i, j, k;
                g_151 ^= ((g_150 &= ((*l_92) = (g_78[4] , (l_132 , ((safe_div_func_int64_t_s_s(9L, (((l_149 = ((p_76.f0 > ((((*l_136) = l_135[5][0][5]) != &l_84[3]) == (safe_div_func_int32_t_s_s(((*p_75) = (safe_rshift_func_int16_t_s_s((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(l_84[7], 9)), (g_145 != ((p_75 == p_75) , (void*)0)))), 9))), g_78[9].f0)))) , l_147[2][2])) != l_92) | (*p_73)))) , p_76.f0))))) < (*g_145));
                l_91[0] |= ((((((*l_154) = (safe_lshift_func_int16_t_s_s(p_76.f0, 14))) , ((*l_164) = (safe_mod_func_int16_t_s_s((func_34(l_107[1][6][2], (p_73 = p_73), l_159, l_105[7], (*p_75)) <= ((safe_div_func_int64_t_s_s((g_78[9].f0 > ((safe_div_func_uint32_t_u_u(g_150, 0x2F573554L)) > 0xB3F4353AD90D2FA8LL)), p_76.f0)) <= g_150)), l_105[9])))) <= g_44[5][1][7]) ^ g_40.f0) , g_7);

                            }
            else
            {
                l_105[9] |= (g_44[6][0][0] = ((p_74 != l_165) != 0UL));
            }
        }

                for (l_103 = (-23); (l_103 == 8); l_103 = safe_add_func_int32_t_s_s(l_103, 1))
        {
            const int l_170 = 4L;
            union U2 l_178 = {1UL};
            int *l_211 = (void*)0;
            for (g_93 = 0; (g_93 <= 9); g_93 += 1)
            {
                union U1 l_179[9] = {{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL},{4294967295UL}};
                union U3 l_192 = {0x4FL};
                int l_203[2];
                int *l_214[7] = {&l_105[4],&l_105[4],&g_44[1][0][7],&l_105[4],&l_105[4],&g_44[1][0][7],&l_105[4]};
                int i;
                for (i = 0; i < 2; i++)
                    l_203[i] = 0x0E0531CCL;
                l_105[g_93] |= ((safe_mod_func_uint32_t_u_u((65526UL > func_34(l_170, &g_7, (l_171[0][0][1] , l_79), p_76.f0, (safe_rshift_func_uint8_t_u_u((((*l_165) = (~g_7)) > ((((g_40 , (func_34(g_146[1][0], &g_7, g_40, p_76.f0, (*p_75)) != g_81)) , p_76.f0) , 0xD6L) , l_170)), 1)))), l_170)) | 2L);
                if ((l_170 < ((l_105[g_93] &= (safe_add_func_int16_t_s_s((l_178 , (*g_145)), func_34(((((p_76.f0 , l_179[8]) , ((g_180[5] , (((*g_145) , p_76.f0) , (safe_div_func_int32_t_s_s(l_98, l_178.f0)))) <= 1UL)) < 0x9996L) && 0x9258A53ACA8FFA4ALL), l_183, l_79, p_76.f0, (*p_75))))) && 0L)))
                {
                    unsigned l_186 = 9UL;
                    char *l_187[6];
                    int l_188 = 6L;
                    short **l_189 = &g_145;
                    int i;
                    for (i = 0; i < 6; i++)
                        l_187[i] = &g_78[9].f2;
                    if ((0x772E67D2L < (g_44[6][0][0] < (g_151 >= (safe_sub_func_uint8_t_u_u(((4294967287UL & ((l_188 ^= (l_186 , g_81)) > (l_91[1] , (&l_84[6] != ((*l_189) = &l_106))))) & g_7), g_150))))))
                    {
                        int *l_190 = &l_104;
                        unsigned short *l_193 = &g_194;
                        (*p_75) = l_105[g_93];
                        l_105[1] |= func_34(g_44[6][0][0], p_73, l_79, g_81, ((*l_190) = g_151));
                        g_195 ^= func_34((g_191 , 65535UL), l_187[5], l_192, l_104, func_34(((*l_193) = p_76.f0), p_73, g_40, l_186, l_186));
                        if ((*p_75))
                            continue;
                    }
                    else
                    {
                        int *l_196 = (void*)0;
                        int *l_197 = (void*)0;
                        int *l_198 = &l_91[1];
                        int *l_199 = (void*)0;
                        int *l_200 = &l_188;
                        int *l_201 = &l_188;
                        int *l_202[4][5] = {{&l_91[1],&l_105[9],&l_105[9],&l_91[1],(void*)0},{&l_91[1],&l_105[9],&l_105[9],&l_105[9],&l_105[9]},{(void*)0,&l_105[9],&l_105[9],&l_91[1],&l_91[1]},{&l_105[9],(void*)0,&l_105[9],&l_105[9],&l_91[1]}};
                        int i, j;
                        ++l_204;
                    }

                    ;
                    (*p_75) = (-6L);
                }
                else
                {
                    g_44[0][0][7] = (g_78[1] , ((safe_add_func_uint16_t_u_u(((0L > (safe_rshift_func_uint8_t_u_u(((void*)0 == l_211), (g_146[2][1] == ((1UL & p_76.f0) & 247UL))))) != (safe_mod_func_int64_t_s_s(((((void*)0 == &g_150) == g_7) != l_127), g_191.f0))), l_84[6])) > g_151));
                }
                for (g_194 = 0; (g_194 <= 2); g_194 += 1)
                {
                    for (l_131 = 0; (l_131 <= 1); l_131 += 1)
                    {
                        int i;
                        l_214[0] = &l_91[l_131];
                    }
                }


                if (l_215)
                    break;
            }
        }

        ;
    }


    return l_183;


}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_40.f0, "g_40.f0", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 9; k++)
            {
                transparent_crc(g_44[i][j][k], "g_44[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_81, "g_81", print_hash_value);
    transparent_crc(g_93, "g_93", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_146[i][j], "g_146[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_151, "g_151", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_180[i].f0, "g_180[i].f0", print_hash_value);
        transparent_crc(g_180[i].f1, "g_180[i].f1", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_194, "g_194", print_hash_value);
    transparent_crc(g_195, "g_195", print_hash_value);
    transparent_crc(g_233, "g_233", print_hash_value);
    transparent_crc(g_256, "g_256", print_hash_value);
    transparent_crc(g_260, "g_260", print_hash_value);
    transparent_crc(g_365, "g_365", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_438[i], "g_438[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_443, "g_443", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_454[i], "g_454[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_480, "g_480", print_hash_value);
    transparent_crc(g_505, "g_505", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 2; j++)
        {
            transparent_crc(g_540[i][j], "g_540[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_666, "g_666", print_hash_value);
    transparent_crc(g_785, "g_785", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_882[i][j][k], "g_882[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_894[i][j].f0, "g_894[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_931, "g_931", print_hash_value);
    transparent_crc(g_1170.f0, "g_1170.f0", print_hash_value);
    transparent_crc(g_1172.f0, "g_1172.f0", print_hash_value);
    transparent_crc(g_1176, "g_1176", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 6; k++)
            {
                transparent_crc(g_1207[i][j][k], "g_1207[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1224, "g_1224", print_hash_value);
    transparent_crc(g_1270, "g_1270", print_hash_value);
    transparent_crc(g_1335, "g_1335", print_hash_value);
    transparent_crc(g_1376.f0, "g_1376.f0", print_hash_value);
    transparent_crc(g_1424, "g_1424", print_hash_value);
    transparent_crc(g_1509.f0, "g_1509.f0", print_hash_value);
    transparent_crc(g_1605, "g_1605", print_hash_value);
    transparent_crc(g_1609, "g_1609", print_hash_value);
    transparent_crc(g_1706, "g_1706", print_hash_value);
    transparent_crc(g_1757, "g_1757", print_hash_value);
    transparent_crc(g_1763, "g_1763", print_hash_value);
    transparent_crc(g_1773, "g_1773", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_1801[i][j][k], "g_1801[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1844, "g_1844", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
