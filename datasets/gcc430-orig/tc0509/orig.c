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


struct S0 {
   unsigned f0 : 19;
   unsigned f1 : 30;
   volatile unsigned f2 : 9;
   signed f3 : 16;
   signed f4 : 1;
   signed f5 : 22;
   volatile unsigned f6 : 29;
   volatile signed f7 : 28;
};

union U1 {
   volatile unsigned char f0;
   unsigned short f1;
   volatile unsigned f2;
   int f3;
   int f4;
};

union U2 {
   signed f0 : 1;
   int f1;
   unsigned short f2;
   int f3;
   short f4;
};


static int g_9 = 1L;
static union U2 g_33 = {7L};
static int g_74 = 0x3B151854L;
static union U1 g_77[1][9] = {{{1UL}, {0xF6L}, {1UL}, {0xF6L}, {1UL}, {0xF6L}, {1UL}, {0xF6L}, {1UL}}};
static struct S0 g_90 = {592,27249,7,130,0,468,14575,1569};
static struct S0 g_92 = {526,24982,12,-16,0,-1704,11947,10321};
static struct S0 g_93[5][5][7] = {{{{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}}, {{{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}}, {{{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}}, {{{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}}, {{{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}, {{418,6881,13,125,0,1632,12664,-4219}, {345,21171,16,98,-0,-425,8209,12227}, {626,25323,12,239,0,1170,4063,6527}, {570,31242,6,-8,0,1914,6761,1677}, {106,8366,8,-154,0,1028,19767,-15252}, {280,27835,3,-129,-0,-895,12711,123}, {128,14974,8,-201,0,1707,20155,5849}}}};
static volatile struct S0 g_94 = {233,20142,5,-85,-0,-645,5126,-5293};
static volatile union U1 g_101 = {254UL};
static union U2 **g_104 = (void*)0;
static int *g_136 = &g_74;
static struct S0 g_141 = {495,13984,7,-226,-0,-1551,19473,6988};
static volatile int g_152[1] = {0x70BDA24AL};
static struct S0 g_157 = {263,17891,6,98,0,-1010,10861,-1071};
static struct S0 g_158 = {317,21224,13,254,0,-724,18187,4093};
static struct S0 *g_174[5] = {&g_90, &g_90, &g_90, &g_90, &g_90};
static union U1 g_183 = {0xC1L};
static volatile union U1 *g_213 = (void*)0;
static volatile union U1 g_233[4] = {{255UL}, {255UL}, {255UL}, {255UL}};
static unsigned short g_236 = 0x50A6L;
static volatile struct S0 g_248 = {117,514,8,-18,-0,1920,9633,6998};
static struct S0 g_265 = {622,21133,2,158,0,254,98,5878};
static volatile struct S0 g_285 = {354,20804,14,-123,-0,1372,23080,318};
static volatile struct S0 g_287[2] = {{300,31876,9,-35,0,-186,12726,13842}, {300,31876,9,-35,0,-186,12726,13842}};
static struct S0 g_290 = {357,25807,15,239,-0,-1033,10917,11052};
static volatile union U1 g_292 = {252UL};
static struct S0 g_293[4][3] = {{{475,8589,15,37,0,390,17532,-8626}, {475,8589,15,37,0,390,17532,-8626}, {475,8589,15,37,0,390,17532,-8626}}, {{475,8589,15,37,0,390,17532,-8626}, {475,8589,15,37,0,390,17532,-8626}, {475,8589,15,37,0,390,17532,-8626}}, {{475,8589,15,37,0,390,17532,-8626}, {475,8589,15,37,0,390,17532,-8626}, {475,8589,15,37,0,390,17532,-8626}}, {{475,8589,15,37,0,390,17532,-8626}, {475,8589,15,37,0,390,17532,-8626}, {475,8589,15,37,0,390,17532,-8626}}};
static struct S0 g_302 = {470,16929,4,-161,0,-334,4886,-1561};
static volatile union U1 g_323 = {1UL};
static struct S0 g_359 = {267,26219,2,-130,0,615,6528,-10013};
static struct S0 g_360[5][6][3] = {{{{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}}, {{{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}}, {{{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}}, {{{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}}, {{{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}, {{720,9918,21,69,0,-785,12914,-5410}, {409,17541,14,-195,-0,-110,2233,-8048}, {217,6577,19,218,-0,1343,7069,-1684}}}};
static struct S0 g_364 = {684,32022,14,161,-0,1093,6225,16351};
static int *g_372 = &g_74;
static volatile struct S0 g_387 = {136,19712,2,69,0,1929,16627,6333};
static volatile struct S0 *g_386 = &g_387;
static volatile struct S0 **g_385 = &g_386;
static volatile struct S0 ***g_384[7][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
static struct S0 g_437 = {103,9514,0,-46,-0,-1155,17992,-1717};



static union U1 func_1(void);
static int * func_2(int * p_3, int * p_4, int p_5, short p_6, unsigned short p_7);
static long long func_10(int p_11, int p_12, int * p_13, int * p_14);
static unsigned char func_18(char p_19, int * p_20, unsigned p_21, unsigned p_22, int * p_23);
static unsigned short func_26(int * p_27, int p_28);
static long long func_29(int * p_30, unsigned p_31);
static struct S0 func_35(union U2 * p_36, char p_37, int p_38, union U2 p_39);
static char func_40(int * p_41);
static int * func_42(union U2 p_43, unsigned p_44);
static struct S0 func_48(unsigned p_49, unsigned char p_50, unsigned char p_51, int * p_52);
static union U1 func_1(void)
{
    int *l_8 = &g_9;
    int *l_17 = &g_9;
    int **l_436 = &g_136;
    (*l_436) = func_2(l_8, &g_9, g_9, (((func_10((((safe_lshift_func_int16_t_s_s((&g_9 == l_17), 12)) && ((~func_18((safe_mod_func_uint16_t_u_u(func_26(&g_9, ((func_29((g_9 , (void*)0), (*l_8)) && (*l_17)) && 0x2E63372585FAFE44LL)), g_265.f0)), &g_9, g_157.f1, (*l_17), l_17)) != g_359.f3)) , g_93[1][0][6].f4), (*l_17), &g_9, &g_9) < 0x47B1E82220950AADLL) < (*l_8)) , 0x5147L), g_290.f5);
    (*g_386) = g_437;
    return g_77[0][2];
}







static int * func_2(int * p_3, int * p_4, int p_5, short p_6, unsigned short p_7)
{
    int **l_399 = &g_372;
    union U2 l_416 = {0xB5857429L};
    struct S0 **l_431[7][3][7] = {{{&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}}, {{&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}}, {{&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}}, {{&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}}, {{&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}}, {{&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}}, {{&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}, {&g_174[3], &g_174[0], &g_174[4], &g_174[3], &g_174[4], (void*)0, &g_174[4]}}};
    struct S0 ***l_430 = &l_431[3][1][6];
    int *l_432 = &g_9;
    int *l_433 = (void*)0;
    long long l_434 = 0xA24B9B603D8F4005LL;
    int *l_435 = &g_9;
    int i, j, k;
    (*l_399) = &p_5;
    (**l_399) = (((safe_rshift_func_uint8_t_u_s(((**l_399) > ((safe_rshift_func_int8_t_s_u((p_7 , (0xE1L && (safe_lshift_func_uint8_t_u_u(g_293[2][1].f1, 7)))), 3)) < (**l_399))), 1)) != (p_7 & ((((**l_399) & g_92.f2) ^ g_92.f1) && 1L))) == 65535UL);
    if (((safe_lshift_func_int16_t_s_s((**l_399), p_7)) , (safe_lshift_func_uint8_t_u_u(p_5, ((**l_399) == g_92.f5)))))
    {
        for (p_7 = 0; (p_7 == 12); p_7 = safe_add_func_int64_t_s_s(p_7, 2))
        {
            for (p_5 = 0; (p_5 == (-21)); p_5 = safe_sub_func_int16_t_s_s(p_5, 8))
            {
                return &g_74;
            }
        }
    }
    else
    {
        unsigned char l_421[5][6] = {{0x1BL, 0x1BL, 0x8AL, 0x13L, 0UL, 0x13L}, {0x1BL, 0x1BL, 0x8AL, 0x13L, 0UL, 0x13L}, {0x1BL, 0x1BL, 0x8AL, 0x13L, 0UL, 0x13L}, {0x1BL, 0x1BL, 0x8AL, 0x13L, 0UL, 0x13L}, {0x1BL, 0x1BL, 0x8AL, 0x13L, 0UL, 0x13L}};
        int i, j;
        for (p_6 = 0; (p_6 == 25); p_6 = safe_add_func_uint64_t_u_u(p_6, 1))
        {
            p_4 = &p_5;
            if ((*p_4))
                break;
        }
        (*l_399) = func_42(l_416, (p_6 > ((safe_add_func_int64_t_s_s((+((((safe_mod_func_uint8_t_u_u(l_421[1][3], (**l_399))) & (**l_399)) < ((g_92.f1 , (g_33 , g_152[0])) > (safe_rshift_func_int16_t_s_u((**l_399), 1)))) == g_9)), p_6)) , p_6)));
        return &g_9;
    }
    (*g_136) = (safe_mod_func_int32_t_s_s((safe_mod_func_int64_t_s_s(((**l_399) && (safe_sub_func_int16_t_s_s(0xEF73L, (0x75C1L == (p_7 == g_248.f7))))), g_93[1][0][6].f4)), p_7));
    return l_435;
}







static long long func_10(int p_11, int p_12, int * p_13, int * p_14)
{
    return g_364.f0;
}







static unsigned char func_18(char p_19, int * p_20, unsigned p_21, unsigned p_22, int * p_23)
{
    unsigned short l_328 = 0UL;
    union U2 l_329 = {0xE712E1E7L};
    int *l_342 = &g_74;
    short l_381[9][1][4] = {{{1L, (-1L), 0x3EC5L, 6L}}, {{1L, (-1L), 0x3EC5L, 6L}}, {{1L, (-1L), 0x3EC5L, 6L}}, {{1L, (-1L), 0x3EC5L, 6L}}, {{1L, (-1L), 0x3EC5L, 6L}}, {{1L, (-1L), 0x3EC5L, 6L}}, {{1L, (-1L), 0x3EC5L, 6L}}, {{1L, (-1L), 0x3EC5L, 6L}}, {{1L, (-1L), 0x3EC5L, 6L}}};
    unsigned l_398[7][8][4] = {{{0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}}, {{0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}}, {{0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}}, {{0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}}, {{0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}}, {{0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}}, {{0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}, {0xC4478B5DL, 0xE0A579E8L, 1UL, 3UL}}};
    int i, j, k;
    if ((*p_23))
    {
        union U2 l_320 = {0x9727D148L};
        int **l_332 = &g_136;
        (*l_332) = func_42(l_320, (safe_lshift_func_int8_t_s_s((((g_323 , (safe_sub_func_uint16_t_u_u((l_320.f0 != ((safe_mod_func_uint8_t_u_u(g_302.f2, (l_328 | (l_329 , (0x6AL >= (p_19 < (((safe_rshift_func_uint16_t_u_u(l_328, p_22)) > l_329.f0) , p_19))))))) , l_320.f0)), 0UL))) <= 1L) && 65535UL), l_329.f0)));
    }
    else
    {
        int *l_337 = &g_74;
        struct S0 *l_345 = &g_293[2][1];
        int *l_347 = &g_33.f1;
        union U2 *l_393 = &l_329;
        if ((1L == ((((((safe_sub_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u(((((func_29(l_337, l_329.f0) || (safe_mod_func_int16_t_s_s((*l_337), ((safe_lshift_func_int16_t_s_u(g_90.f6, func_29(l_342, ((+(*l_342)) || (((safe_lshift_func_int16_t_s_u((l_342 != (void*)0), 0)) > (*l_342)) , p_21))))) , 0xBD67L)))) != (*l_337)) , (*l_337)) ^ g_290.f1), g_157.f3)) >= g_93[1][0][6].f3), (*l_337))) & (*l_337)) && 0xDDL) <= 1L) | 5UL) & 0L)))
        {
            struct S0 **l_346 = &g_174[4];
            int l_358 = 0xFE7EAF6CL;
            (*l_346) = l_345;
            (*l_342) = func_29(l_347, p_21);
            for (g_33.f4 = 0; (g_33.f4 >= 22); g_33.f4++)
            {
                for (p_19 = (-26); (p_19 < 6); p_19++)
                {
                    for (g_74 = (-30); (g_74 >= 18); g_74++)
                    {
                        g_265.f7 = (*g_136);
                    }
                }
                for (g_236 = (-17); (g_236 != 28); g_236 = safe_add_func_uint16_t_u_u(g_236, 8))
                {
                    for (l_329.f4 = 0; (l_329.f4 >= 0); l_329.f4 -= 1)
                    {
                        if ((*p_20))
                            break;
                        l_358 = (g_285.f3 == (p_22 >= (*l_342)));
                        g_360[2][5][2] = g_359;
                    }
                }
                for (g_183.f3 = (-27); (g_183.f3 == 9); g_183.f3++)
                {
                    return g_152[0];
                }
                if ((*g_136))
                    break;
            }
        }
        else
        {
            union U2 l_365 = {0x48084D41L};
            if ((*p_20))
            {
                int *l_363 = &g_9;
                l_342 = l_363;
                (*l_345) = g_364;
                (*l_337) = (*l_363);
                if (func_26(func_42(l_365, (func_29(&g_9, g_302.f1) || ((safe_lshift_func_int8_t_s_s(g_33.f0, ((*l_337) & g_92.f2))) || (*l_363)))), l_365.f0))
                {
                    int **l_368 = (void*)0;
                    int **l_369 = &l_337;
                    (*l_369) = p_20;
                    for (g_33.f3 = 0; (g_33.f3 != (-15)); --g_33.f3)
                    {
                        (*l_369) = p_20;
                        g_372 = l_363;
                        if ((*l_363))
                            continue;
                    }
                }
                else
                {
                    int **l_373 = &g_372;
                    (*l_373) = l_337;
                    (*l_373) = (((safe_rshift_func_int16_t_s_u(func_26(func_42(l_329, p_21), (0xA871L != ((safe_unary_minus_func_uint16_t_u((*l_363))) > (((-1L) <= ((safe_add_func_uint32_t_u_u((g_141.f1 == l_381[7][0][0]), (safe_add_func_int16_t_s_s((((((g_384[4][0] == &g_385) && 0x72EBL) == g_359.f0) ^ g_158.f5) >= p_21), g_302.f0)))) >= (-1L))) > 0x8BL)))), 4)) > g_293[2][1].f0) , (void*)0);
                    return g_302.f0;
                }
            }
            else
            {
                union U2 l_390 = {-1L};
                for (p_22 = 23; (p_22 > 42); ++p_22)
                {
                    int **l_391 = &g_136;
                    union U2 *l_392[4][3] = {{&l_390, &l_329, &l_390}, {&l_390, &l_329, &l_390}, {&l_390, &l_329, &l_390}, {&l_390, &l_329, &l_390}};
                    int i, j;
                    (*l_391) = func_42(l_390, p_22);
                    (*g_372) = (-9L);
                    l_392[0][2] = &l_329;
                }
            }
        }
        (*l_345) = (*g_386);
    }
    return l_398[0][1][1];
}







static unsigned short func_26(int * p_27, int p_28)
{
    union U2 *l_32 = &g_33;
    union U2 **l_34 = &l_32;
    int *l_47 = &g_9;
    union U2 l_262 = {-9L};
    struct S0 *l_315 = &g_141;
    int **l_316 = (void*)0;
    int *l_317 = &g_33.f1;
    int *l_318[6][1];
    int **l_319[3][5][10] = {{{(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}}, {{(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}}, {{(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}, {(void*)0, (void*)0, &l_318[2][0], (void*)0, (void*)0, &l_317, &g_136, &l_318[3][0], &l_47, (void*)0}}};
    int i, j, k;
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 1; j++)
            l_318[i][j] = &g_74;
    }
    (*l_34) = l_32;
    (*l_315) = func_35((*l_34), func_40(func_42(g_33, ((safe_sub_func_int8_t_s_s((-2L), 0x00L)) , func_29(l_47, ((((*l_47) && (((void*)0 != l_47) && 0x4F5FDFDA84ADE726LL)) , 0xC0E8L) , 1UL))))), (*l_47), l_262);
    l_317 = &p_28;
    g_136 = l_318[4][0];
    return g_94.f0;
}







static long long func_29(int * p_30, unsigned p_31)
{
    return p_31;
}







static struct S0 func_35(union U2 * p_36, char p_37, int p_38, union U2 p_39)
{
    int *l_263 = &g_74;
    int **l_264 = &g_136;
    struct S0 *l_303 = &g_302;
    unsigned char l_310[10] = {0UL, 5UL, 7UL, 7UL, 5UL, 0UL, 5UL, 7UL, 7UL, 5UL};
    int i;
    (*l_264) = l_263;
    if (((g_265 , &g_174[2]) == (void*)0))
    {
        union U2 l_268[9] = {{0x78AECB37L}, {0x78AECB37L}, {-5L}, {0x78AECB37L}, {0x78AECB37L}, {-5L}, {0x78AECB37L}, {0x78AECB37L}, {-5L}};
        union U2 *l_278 = &l_268[2];
        int i;
        for (g_33.f3 = 3; (g_33.f3 >= 0); g_33.f3 -= 1)
        {
            int l_275[3][8][6] = {{{(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}}, {{(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}}, {{(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}, {(-1L), 2L, 0x4743E299L, 0L, (-4L), 0x18F28319L}}};
            int i, j, k;
            (*g_136) = (((safe_mod_func_int8_t_s_s((((func_29((*l_264), p_39.f0) , ((l_268[2] , (+g_93[1][0][6].f7)) & ((g_141.f4 <= ((safe_lshift_func_uint16_t_u_u((((+(safe_mod_func_int8_t_s_s(p_39.f0, 250UL))) >= func_29(((safe_lshift_func_uint8_t_u_s((l_268[2].f0 ^ 0x2DL), g_93[1][0][6].f5)) , (*l_264)), g_157.f0)) || 0xC7FB0492L), 4)) && 0L)) >= p_37))) >= 0x39F0215B97896ADELL) != l_268[2].f0), (**l_264))) | 0xB23383EBD59E0C64LL) <= p_37);
            if ((l_275[1][0][4] == 0x40C70856A399DB8FLL))
            {
                if (p_37)
                    break;
            }
            else
            {
                union U2 *l_277 = &l_268[3];
                union U2 **l_276[1][10][3] = {{{&l_277, &l_277, (void*)0}, {&l_277, &l_277, (void*)0}, {&l_277, &l_277, (void*)0}, {&l_277, &l_277, (void*)0}, {&l_277, &l_277, (void*)0}, {&l_277, &l_277, (void*)0}, {&l_277, &l_277, (void*)0}, {&l_277, &l_277, (void*)0}, {&l_277, &l_277, (void*)0}, {&l_277, &l_277, (void*)0}}};
                int i, j, k;
                l_278 = (void*)0;
            }
            for (g_236 = 1; (g_236 <= 4); g_236 += 1)
            {
                int *l_289 = &g_74;
            }
        }
    }
    else
    {
        (*l_264) = (void*)0;
    }
    (*l_303) = g_302;
    (*l_263) = func_29((*l_264), (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_u(1L, (safe_add_func_uint64_t_u_u((l_310[5] >= (!((*l_263) & g_157.f4))), (((((p_37 , &g_33) == (void*)0) , func_29(((safe_mod_func_uint64_t_u_u((safe_sub_func_uint16_t_u_u(func_29((*l_264), p_38), 0xE7E9L)), g_158.f6)) , (*l_264)), p_39.f0)) >= 0x9C199DD6F6C80102LL) >= g_9))))), g_141.f1)));
    return (*l_303);
}







static char func_40(int * p_41)
{
    union U1 *l_249 = &g_183;
    int l_254 = 1L;
    int **l_259 = &g_136;
    struct S0 **l_260 = &g_174[3];
    long long l_261 = 0x209E22738764672DLL;
    for (g_183.f3 = 0; (g_183.f3 <= 3); g_183.f3 += 1)
    {
        if ((*g_136))
            break;
    }
    (**l_259) = ((g_248 , l_249) != ((((((g_9 == ((safe_lshift_func_int8_t_s_s(((safe_lshift_func_int16_t_s_u(((l_254 , g_183.f1) >= (safe_sub_func_int16_t_s_s(((g_157.f5 , (((((g_9 & (safe_mod_func_int16_t_s_s(1L, l_254))) , l_259) != l_259) != 0xFC34L) , (void*)0)) == l_260), l_261))), (**l_259))) || (**l_259)), g_92.f1)) < (**l_259))) <= g_183.f4) | (**l_259)) , g_213) == (void*)0) , (void*)0));
    (**l_259) = 5L;
    (*l_259) = p_41;
    return (**l_259);
}







static int * func_42(union U2 p_43, unsigned p_44)
{
    char l_53 = 0L;
    int *l_54[7] = {&g_9, &g_9, &g_9, &g_9, &g_9, &g_9, &g_9};
    struct S0 *l_96 = &g_92;
    union U2 *l_103 = &g_33;
    union U2 **l_102 = &l_103;
    unsigned short l_109[2];
    int *l_142 = &g_9;
    int l_217 = 0x4EA40F44L;
    int i;
    for (i = 0; i < 2; i++)
        l_109[i] = 0x36A7L;
    (*l_96) = func_48(p_44, func_29(&g_9, p_44), l_53, l_54[3]);
    (*l_96) = (*l_96);
    for (p_43.f2 = 16; (p_43.f2 <= 34); p_43.f2 = safe_add_func_uint32_t_u_u(p_43.f2, 1))
    {
        int *l_99 = &g_74;
        int **l_100 = &l_99;
        (*l_100) = l_99;
    }
    if (((g_101 , g_77[0][1].f0) < func_29(&g_9, (g_33 , (l_102 != g_104)))))
    {
        int *l_105 = &g_33.f1;
        g_90.f5 = p_43.f4;
        return l_105;
    }
    else
    {
        int **l_108[6];
        union U2 **l_110 = &l_103;
        struct S0 *l_197 = &g_157;
        int l_237[7][2] = {{4L, 0x24C6D288L}, {4L, 0x24C6D288L}, {4L, 0x24C6D288L}, {4L, 0x24C6D288L}, {4L, 0x24C6D288L}, {4L, 0x24C6D288L}, {4L, 0x24C6D288L}};
        int i, j;
        for (i = 0; i < 6; i++)
            l_108[i] = &l_54[3];
        (*l_96) = (((p_43.f2 , (safe_add_func_int16_t_s_s((l_108[2] != l_108[2]), (p_43.f4 < (&p_43 != (*l_102)))))) == l_109[0]) , (((void*)0 != l_110) , (*l_96)));
        for (g_33.f3 = 0; (g_33.f3 < (-10)); --g_33.f3)
        {
            int *l_119 = &g_74;
            int l_137 = 0x2ABF0990L;
            struct S0 **l_214 = &g_174[0];
        }
    }
    return &g_9;
}







static struct S0 func_48(unsigned p_49, unsigned char p_50, unsigned char p_51, int * p_52)
{
    int l_72 = 0x3B0D7269L;
    int *l_86 = &g_9;
    volatile struct S0 *l_95 = &g_94;
    for (g_33.f3 = 3; (g_33.f3 >= 11); g_33.f3++)
    {
        unsigned short l_67 = 3UL;
        int *l_73 = &g_74;
        unsigned l_87[9][7][4] = {{{0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}}, {{0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}}, {{0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}}, {{0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}}, {{0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}}, {{0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}}, {{0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}}, {{0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}}, {{0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}, {0x72970974L, 0x57B54C1CL, 0x8FA76005L, 0xF03BE979L}}};
        int i, j, k;
        (*l_73) = (((safe_lshift_func_uint8_t_u_u(((-3L) && (safe_add_func_int32_t_s_s((248UL == ((safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(g_9, (safe_lshift_func_uint8_t_u_s((p_51 ^ (1L ^ (((l_67 && (safe_lshift_func_uint16_t_u_s(0x6F57L, 7))) > func_29((((safe_add_func_uint8_t_u_u((p_50 <= p_51), g_33.f2)) <= l_72) , &g_9), l_67)) ^ p_51))), l_67)))), l_67)) | g_33.f2)), 0xEA99669DL))), 1)) || g_33.f4) != g_33.f2);
        (*l_73) = (safe_add_func_int32_t_s_s(func_29(&g_9, (g_77[0][1] , 0UL)), (((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(p_51, g_74)), (safe_rshift_func_int16_t_s_u((l_72 | (safe_lshift_func_uint8_t_u_s(g_33.f4, 0))), (func_29(l_86, l_87[3][3][0]) > g_9))))) ^ g_33.f0) | 0xCD3BL)));
    }
    for (p_51 = 1; (p_51 < 37); p_51++)
    {
        struct S0 *l_91[4][9] = {{&g_90, (void*)0, &g_90, (void*)0, (void*)0, &g_90, (void*)0, &g_90, &g_90}, {&g_90, (void*)0, &g_90, (void*)0, (void*)0, &g_90, (void*)0, &g_90, &g_90}, {&g_90, (void*)0, &g_90, (void*)0, (void*)0, &g_90, (void*)0, &g_90, &g_90}, {&g_90, (void*)0, &g_90, (void*)0, (void*)0, &g_90, (void*)0, &g_90, &g_90}};
        int i, j;
        g_90 = g_90;
        g_93[1][0][6] = g_92;
    }
    (*l_95) = g_94;
    return (*l_95);
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
    transparent_crc(g_74, "g_74", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_77[i][j].f0, "g_77[i][j].f0", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_90.f0, "g_90.f0", print_hash_value);
    transparent_crc(g_90.f1, "g_90.f1", print_hash_value);
    transparent_crc(g_90.f2, "g_90.f2", print_hash_value);
    transparent_crc(g_90.f3, "g_90.f3", print_hash_value);
    transparent_crc(g_90.f4, "g_90.f4", print_hash_value);
    transparent_crc(g_90.f5, "g_90.f5", print_hash_value);
    transparent_crc(g_90.f6, "g_90.f6", print_hash_value);
    transparent_crc(g_90.f7, "g_90.f7", print_hash_value);
    transparent_crc(g_92.f0, "g_92.f0", print_hash_value);
    transparent_crc(g_92.f1, "g_92.f1", print_hash_value);
    transparent_crc(g_92.f2, "g_92.f2", print_hash_value);
    transparent_crc(g_92.f3, "g_92.f3", print_hash_value);
    transparent_crc(g_92.f4, "g_92.f4", print_hash_value);
    transparent_crc(g_92.f5, "g_92.f5", print_hash_value);
    transparent_crc(g_92.f6, "g_92.f6", print_hash_value);
    transparent_crc(g_92.f7, "g_92.f7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 7; k++)
            {
                transparent_crc(g_93[i][j][k].f0, "g_93[i][j][k].f0", print_hash_value);
                transparent_crc(g_93[i][j][k].f1, "g_93[i][j][k].f1", print_hash_value);
                transparent_crc(g_93[i][j][k].f2, "g_93[i][j][k].f2", print_hash_value);
                transparent_crc(g_93[i][j][k].f3, "g_93[i][j][k].f3", print_hash_value);
                transparent_crc(g_93[i][j][k].f4, "g_93[i][j][k].f4", print_hash_value);
                transparent_crc(g_93[i][j][k].f5, "g_93[i][j][k].f5", print_hash_value);
                transparent_crc(g_93[i][j][k].f6, "g_93[i][j][k].f6", print_hash_value);
                transparent_crc(g_93[i][j][k].f7, "g_93[i][j][k].f7", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_94.f0, "g_94.f0", print_hash_value);
    transparent_crc(g_94.f1, "g_94.f1", print_hash_value);
    transparent_crc(g_94.f2, "g_94.f2", print_hash_value);
    transparent_crc(g_94.f3, "g_94.f3", print_hash_value);
    transparent_crc(g_94.f4, "g_94.f4", print_hash_value);
    transparent_crc(g_94.f5, "g_94.f5", print_hash_value);
    transparent_crc(g_94.f6, "g_94.f6", print_hash_value);
    transparent_crc(g_94.f7, "g_94.f7", print_hash_value);
    transparent_crc(g_101.f0, "g_101.f0", print_hash_value);
    transparent_crc(g_141.f0, "g_141.f0", print_hash_value);
    transparent_crc(g_141.f1, "g_141.f1", print_hash_value);
    transparent_crc(g_141.f2, "g_141.f2", print_hash_value);
    transparent_crc(g_141.f3, "g_141.f3", print_hash_value);
    transparent_crc(g_141.f4, "g_141.f4", print_hash_value);
    transparent_crc(g_141.f5, "g_141.f5", print_hash_value);
    transparent_crc(g_141.f6, "g_141.f6", print_hash_value);
    transparent_crc(g_141.f7, "g_141.f7", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_152[i], "g_152[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_157.f0, "g_157.f0", print_hash_value);
    transparent_crc(g_157.f1, "g_157.f1", print_hash_value);
    transparent_crc(g_157.f2, "g_157.f2", print_hash_value);
    transparent_crc(g_157.f3, "g_157.f3", print_hash_value);
    transparent_crc(g_157.f4, "g_157.f4", print_hash_value);
    transparent_crc(g_157.f5, "g_157.f5", print_hash_value);
    transparent_crc(g_157.f6, "g_157.f6", print_hash_value);
    transparent_crc(g_157.f7, "g_157.f7", print_hash_value);
    transparent_crc(g_158.f0, "g_158.f0", print_hash_value);
    transparent_crc(g_158.f1, "g_158.f1", print_hash_value);
    transparent_crc(g_158.f2, "g_158.f2", print_hash_value);
    transparent_crc(g_158.f3, "g_158.f3", print_hash_value);
    transparent_crc(g_158.f4, "g_158.f4", print_hash_value);
    transparent_crc(g_158.f5, "g_158.f5", print_hash_value);
    transparent_crc(g_158.f6, "g_158.f6", print_hash_value);
    transparent_crc(g_158.f7, "g_158.f7", print_hash_value);
    transparent_crc(g_183.f0, "g_183.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_233[i].f0, "g_233[i].f0", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_248.f0, "g_248.f0", print_hash_value);
    transparent_crc(g_248.f1, "g_248.f1", print_hash_value);
    transparent_crc(g_248.f2, "g_248.f2", print_hash_value);
    transparent_crc(g_248.f3, "g_248.f3", print_hash_value);
    transparent_crc(g_248.f4, "g_248.f4", print_hash_value);
    transparent_crc(g_248.f5, "g_248.f5", print_hash_value);
    transparent_crc(g_248.f6, "g_248.f6", print_hash_value);
    transparent_crc(g_248.f7, "g_248.f7", print_hash_value);
    transparent_crc(g_265.f0, "g_265.f0", print_hash_value);
    transparent_crc(g_265.f1, "g_265.f1", print_hash_value);
    transparent_crc(g_265.f2, "g_265.f2", print_hash_value);
    transparent_crc(g_265.f3, "g_265.f3", print_hash_value);
    transparent_crc(g_265.f4, "g_265.f4", print_hash_value);
    transparent_crc(g_265.f5, "g_265.f5", print_hash_value);
    transparent_crc(g_265.f6, "g_265.f6", print_hash_value);
    transparent_crc(g_265.f7, "g_265.f7", print_hash_value);
    transparent_crc(g_285.f0, "g_285.f0", print_hash_value);
    transparent_crc(g_285.f1, "g_285.f1", print_hash_value);
    transparent_crc(g_285.f2, "g_285.f2", print_hash_value);
    transparent_crc(g_285.f3, "g_285.f3", print_hash_value);
    transparent_crc(g_285.f4, "g_285.f4", print_hash_value);
    transparent_crc(g_285.f5, "g_285.f5", print_hash_value);
    transparent_crc(g_285.f6, "g_285.f6", print_hash_value);
    transparent_crc(g_285.f7, "g_285.f7", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_287[i].f0, "g_287[i].f0", print_hash_value);
        transparent_crc(g_287[i].f1, "g_287[i].f1", print_hash_value);
        transparent_crc(g_287[i].f2, "g_287[i].f2", print_hash_value);
        transparent_crc(g_287[i].f3, "g_287[i].f3", print_hash_value);
        transparent_crc(g_287[i].f4, "g_287[i].f4", print_hash_value);
        transparent_crc(g_287[i].f5, "g_287[i].f5", print_hash_value);
        transparent_crc(g_287[i].f6, "g_287[i].f6", print_hash_value);
        transparent_crc(g_287[i].f7, "g_287[i].f7", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_290.f0, "g_290.f0", print_hash_value);
    transparent_crc(g_290.f1, "g_290.f1", print_hash_value);
    transparent_crc(g_290.f2, "g_290.f2", print_hash_value);
    transparent_crc(g_290.f3, "g_290.f3", print_hash_value);
    transparent_crc(g_290.f4, "g_290.f4", print_hash_value);
    transparent_crc(g_290.f5, "g_290.f5", print_hash_value);
    transparent_crc(g_290.f6, "g_290.f6", print_hash_value);
    transparent_crc(g_290.f7, "g_290.f7", print_hash_value);
    transparent_crc(g_292.f0, "g_292.f0", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            transparent_crc(g_293[i][j].f0, "g_293[i][j].f0", print_hash_value);
            transparent_crc(g_293[i][j].f1, "g_293[i][j].f1", print_hash_value);
            transparent_crc(g_293[i][j].f2, "g_293[i][j].f2", print_hash_value);
            transparent_crc(g_293[i][j].f3, "g_293[i][j].f3", print_hash_value);
            transparent_crc(g_293[i][j].f4, "g_293[i][j].f4", print_hash_value);
            transparent_crc(g_293[i][j].f5, "g_293[i][j].f5", print_hash_value);
            transparent_crc(g_293[i][j].f6, "g_293[i][j].f6", print_hash_value);
            transparent_crc(g_293[i][j].f7, "g_293[i][j].f7", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_302.f0, "g_302.f0", print_hash_value);
    transparent_crc(g_302.f1, "g_302.f1", print_hash_value);
    transparent_crc(g_302.f2, "g_302.f2", print_hash_value);
    transparent_crc(g_302.f3, "g_302.f3", print_hash_value);
    transparent_crc(g_302.f4, "g_302.f4", print_hash_value);
    transparent_crc(g_302.f5, "g_302.f5", print_hash_value);
    transparent_crc(g_302.f6, "g_302.f6", print_hash_value);
    transparent_crc(g_302.f7, "g_302.f7", print_hash_value);
    transparent_crc(g_323.f0, "g_323.f0", print_hash_value);
    transparent_crc(g_359.f0, "g_359.f0", print_hash_value);
    transparent_crc(g_359.f1, "g_359.f1", print_hash_value);
    transparent_crc(g_359.f2, "g_359.f2", print_hash_value);
    transparent_crc(g_359.f3, "g_359.f3", print_hash_value);
    transparent_crc(g_359.f4, "g_359.f4", print_hash_value);
    transparent_crc(g_359.f5, "g_359.f5", print_hash_value);
    transparent_crc(g_359.f6, "g_359.f6", print_hash_value);
    transparent_crc(g_359.f7, "g_359.f7", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 6; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_360[i][j][k].f0, "g_360[i][j][k].f0", print_hash_value);
                transparent_crc(g_360[i][j][k].f1, "g_360[i][j][k].f1", print_hash_value);
                transparent_crc(g_360[i][j][k].f2, "g_360[i][j][k].f2", print_hash_value);
                transparent_crc(g_360[i][j][k].f3, "g_360[i][j][k].f3", print_hash_value);
                transparent_crc(g_360[i][j][k].f4, "g_360[i][j][k].f4", print_hash_value);
                transparent_crc(g_360[i][j][k].f5, "g_360[i][j][k].f5", print_hash_value);
                transparent_crc(g_360[i][j][k].f6, "g_360[i][j][k].f6", print_hash_value);
                transparent_crc(g_360[i][j][k].f7, "g_360[i][j][k].f7", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_364.f0, "g_364.f0", print_hash_value);
    transparent_crc(g_364.f1, "g_364.f1", print_hash_value);
    transparent_crc(g_364.f2, "g_364.f2", print_hash_value);
    transparent_crc(g_364.f3, "g_364.f3", print_hash_value);
    transparent_crc(g_364.f4, "g_364.f4", print_hash_value);
    transparent_crc(g_364.f5, "g_364.f5", print_hash_value);
    transparent_crc(g_364.f6, "g_364.f6", print_hash_value);
    transparent_crc(g_364.f7, "g_364.f7", print_hash_value);
    transparent_crc(g_387.f0, "g_387.f0", print_hash_value);
    transparent_crc(g_387.f1, "g_387.f1", print_hash_value);
    transparent_crc(g_387.f2, "g_387.f2", print_hash_value);
    transparent_crc(g_387.f3, "g_387.f3", print_hash_value);
    transparent_crc(g_387.f4, "g_387.f4", print_hash_value);
    transparent_crc(g_387.f5, "g_387.f5", print_hash_value);
    transparent_crc(g_387.f6, "g_387.f6", print_hash_value);
    transparent_crc(g_387.f7, "g_387.f7", print_hash_value);
    transparent_crc(g_437.f0, "g_437.f0", print_hash_value);
    transparent_crc(g_437.f1, "g_437.f1", print_hash_value);
    transparent_crc(g_437.f2, "g_437.f2", print_hash_value);
    transparent_crc(g_437.f3, "g_437.f3", print_hash_value);
    transparent_crc(g_437.f4, "g_437.f4", print_hash_value);
    transparent_crc(g_437.f5, "g_437.f5", print_hash_value);
    transparent_crc(g_437.f6, "g_437.f6", print_hash_value);
    transparent_crc(g_437.f7, "g_437.f7", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
