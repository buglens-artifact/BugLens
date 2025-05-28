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
   long long f0;
   char * f1;
   char f2;
   short f3;
};

union U1 {
   int f0;
   short f1;
   unsigned f2;
};

union U2 {
   unsigned f0;
   char * f1;
};

union U3 {
   unsigned short f0;
   unsigned f1;
   int f2;
   short f3;
   unsigned long long f4;
};


static char g_8 = 0x0AL;
static short g_34 = 0x5917L;
static short g_52 = 0L;
static short *g_51 = &g_52;
static union U2 g_53 = {4294967295UL};
static long long g_55 = (-2L);
static int g_62 = 0x8A8CE9B8L;
static int *g_61 = &g_62;
static unsigned short g_65 = 1UL;
static unsigned long long g_89 = 1UL;
static unsigned short g_91 = 0xAB60L;
static short g_116 = 1L;
static int g_120 = 0x5292FD4AL;
static char g_122 = 0x81L;
static unsigned short g_140 = 1UL;
static union U3 g_154 = {65534UL};
static long long g_171 = 0x7E153341C0C23454LL;
static unsigned short *g_183 = &g_91;
static unsigned short **g_182 = &g_183;
static unsigned char g_186 = 0xD1L;
static unsigned char *g_185 = &g_186;
static unsigned long long g_189 = 0x2C56DE09DF947B41LL;
static union U1 g_204 = {1L};
static union U0 g_209 = {0xE4320E1B1DC04404LL};
static short g_246 = 0L;
static int g_255 = 5L;
static unsigned g_257 = 0x1991DECDL;
static char *g_277 = &g_122;
static unsigned char g_301 = 0UL;
static union U0 *g_332 = &g_209;
static unsigned g_392 = 0x97B3EB1FL;
static char g_470 = 0L;
static int g_482 = 0x514E5AA3L;
static char g_540 = (-1L);
static long long g_541 = 0x6255CB79CFFCAE45LL;
static char g_556 = 0x35L;
static unsigned g_575 = 4294967295UL;
static unsigned short g_644 = 65535UL;
static unsigned short g_665 = 0x65F0L;
static char g_697 = 0x2EL;
static long long g_701 = (-1L);
static unsigned short g_720 = 0xA179L;
static char g_726 = 0xC4L;
static char g_736 = (-1L);
static unsigned short g_750 = 2UL;
static int **g_763 = &g_61;
static int ***g_762 = &g_763;
static char g_769 = 0x60L;
static short g_772 = 0x21DDL;
static short g_773 = 0x2118L;
static short g_774 = 0x288FL;
static unsigned char g_805 = 0xC1L;
static unsigned long long g_858 = 0xCF3491E4A1E357CELL;
static char **g_875 = &g_277;
static long long g_921 = 3L;
static int g_925 = 0xCAE8350BL;
static char g_932 = 0x62L;
static int g_949 = 1L;
static int g_1035 = 0xCC909A49L;
static unsigned long long ***g_1133 = (void*)0;
static int g_1221 = (-7L);
static unsigned g_1233 = 0x3CDF57E5L;
static short g_1417 = 0x212DL;
static long long g_1422 = 0L;
static short g_1431 = 1L;
static unsigned g_1441 = 1UL;
static char *g_1539 = (void*)0;
static union U0 g_1540 = {0x8BBD5CA3B428E15ALL};
static char g_1669 = 1L;
static unsigned short g_1671 = 0UL;
static unsigned short g_1694 = 0x6322L;
static unsigned long long g_1703 = 0xEEFB86CF9EDC43EALL;
static unsigned long long g_1832 = 18446744073709551615UL;
static unsigned long long g_1873 = 1UL;
static unsigned short ***g_1880 = &g_182;
static unsigned short ****g_1879 = &g_1880;
static unsigned *g_1907 = &g_257;
static unsigned g_1945 = 18446744073709551611UL;
static unsigned long long g_1978 = 0x4E4D8DEE343FB70FLL;
static char g_1994 = 1L;
static unsigned g_2249 = 0xB93EACE9L;
static long long g_2254 = (-1L);
static unsigned g_2328 = 0x497ADEC3L;
static unsigned long long *g_2358 = &g_89;
static unsigned long long **g_2357 = &g_2358;
static char *g_2428 = &g_769;
static short g_2661 = 0x1F5BL;
static unsigned long long g_2664 = 1UL;
static unsigned **g_2669 = &g_1907;
static unsigned ***g_2668 = &g_2669;
static union U3 **g_2672 = (void*)0;



static unsigned char func_1(void);
static int * func_2(unsigned p_3, char * p_4, int * p_5, unsigned p_6, int * p_7);
static char * func_9(char * p_10);
static char * func_11(unsigned long long p_12, unsigned long long p_13);
static union U2 * func_14(union U0 p_15);
static union U0 func_16(unsigned short p_17, char * p_18, unsigned p_19, unsigned long long p_20, short p_21);
static short func_28(short p_29, char * p_30, union U2 * p_31, char * p_32);
static char * func_35(char * p_36);
static int func_38(char * p_39, union U0 p_40, unsigned short p_41);
static long long func_46(unsigned long long p_47, short * p_48, unsigned p_49, unsigned p_50);
static unsigned char func_1(void)
{
    int *l_2689 = (void*)0;
    int l_2706 = 1L;
    unsigned long long l_2707 = 0xAD2AD89E8E881267LL;
    short *l_2708 = &g_1431;
    unsigned char l_2709 = 0x1AL;
    unsigned short l_2710 = 65535UL;
    unsigned l_2711 = 0x1015DA79L;
    int **l_2722 = &l_2689;
    (*l_2722) = func_2(g_8, func_9(func_11(g_8, g_8)), l_2689, (safe_lshift_func_uint8_t_u_s((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint64_t_u_u(((+(((g_540 , ((((((((*l_2708) = (safe_mod_func_int64_t_s_s(((0xEB75L <= (safe_rshift_func_uint8_t_u_u((l_2706 = (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s(0L, (*g_2428))), l_2706)), l_2707)) < (-1L)) && l_2707)), 0))) == 0L), g_116))) , (void*)0) == (void*)0) <= l_2709) , l_2710) , (void*)0) != (void*)0)) , l_2707) & 0x1C3318E8L)) , 18446744073709551615UL), l_2711)) <= g_2661), l_2709)), 5)), l_2689);


        ;
    ;
        return l_2709;
}







static int * func_2(unsigned p_3, char * p_4, int * p_5, unsigned p_6, int * p_7)
{
    union U0 *l_2712 = (void*)0;
    union U0 **l_2713 = &l_2712;
    int l_2714 = (-6L);
    int l_2715 = (-3L);
    unsigned long long *l_2720 = &g_1703;
    int *l_2721 = &l_2715;
    (*l_2713) = l_2712;
    l_2715 = l_2714;
    (*l_2721) = (l_2714 = (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s((*g_185), (~l_2714))), ((void*)0 != l_2720))));
    return p_7;


}







static char * func_9(char * p_10)
{
    int *l_2680 = &g_482;
    int *l_2681 = &g_482;
    int *l_2682 = (void*)0;
    int *l_2683 = &g_255;
    int *l_2684 = (void*)0;
    unsigned l_2685 = 0x7E6A93C0L;
    char *l_2688 = &g_122;
    ++l_2685;
    return l_2688;


}







static char * func_11(unsigned long long p_12, unsigned long long p_13)
{
    short *l_33 = &g_34;
    char *l_37 = &g_8;
    union U2 *l_1007 = (void*)0;
    unsigned *l_1674 = (void*)0;
    unsigned *l_1675 = &g_1441;
    int l_1676 = 0x766EA9B1L;
    int l_1677 = 0x3E253826L;
    union U0 *l_1680 = (void*)0;
    union U0 *l_1681 = &g_1540;
    union U2 **l_2678 = (void*)0;
    union U2 **l_2679 = &l_1007;
    (*l_2679) = func_14(((*l_1681) = ((*g_332) = func_16(((((safe_lshift_func_int8_t_s_u((l_1677 |= ((safe_rshift_func_int8_t_s_s((g_8 , (safe_rshift_func_int8_t_s_u((((func_28(((*l_33) |= 6L), func_35(l_37), l_1007, l_37) <= (((*l_1675) = 4294967289UL) | (~0L))) , 0x086EL) <= p_12), 4))), p_12)) , l_1676)), p_13)) != 0xEAL) <= g_736) , l_1676), l_37, p_12, l_1676, g_701))));


        ;
    ;
    ;
        l_1677 = l_1677;
    return l_37;


}







static union U2 * func_14(union U0 p_15)
{
    union U1 l_1690 = {0xB7AA81F0L};
    char *l_1691 = &g_209.f2;
    int l_1692 = 0xA1887BA6L;
    short *l_1693 = &g_34;
    int *l_1695 = (void*)0;
    int *l_1696 = &g_1221;
    unsigned short **l_1711 = (void*)0;
    unsigned short l_1713 = 1UL;
    union U2 *l_1883 = &g_53;
    union U2 **l_1882 = &l_1883;
    union U2 ***l_1881 = &l_1882;
    union U3 l_1912 = {0x430DL};
    unsigned **l_1918 = &g_1907;
    unsigned ***l_1917 = &l_1918;
    union U0 l_1937 = {8L};
    unsigned char **l_1987 = &g_185;
    char l_1997 = (-3L);
    int l_2108 = 0L;
    long long l_2157 = (-1L);
    int l_2280 = 9L;
    short l_2281 = 0x0730L;
    unsigned short l_2441 = 0x4261L;
    int l_2445 = 0x49D4C67EL;
    unsigned char l_2470 = 0x6EL;
    union U2 *l_2677 = &g_53;
    (*l_1696) = (p_15.f2 || (((p_15.f3 & (((*l_1693) |= (safe_add_func_int64_t_s_s((safe_add_func_int32_t_s_s((g_556 ^ (safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_s((l_1690 , (*g_183)), (*g_51))), ((((((func_16(l_1690.f0, ((*g_875) = (void*)0), func_38(l_1691, (*g_332), l_1690.f0), l_1690.f1, (*g_51)) , g_1422) & 0x6E6471516732634ELL) & 0UL) | 0x0DE5F1D2BFEF529FLL) , 1L) && (-7L))))), l_1692)), p_15.f2))) | p_15.f0)) && g_1694) , l_1690.f2));

    ;
    if ((*l_1696))
    {
        short l_1699 = (-10L);
        unsigned *l_1700 = &g_53.f0;
        unsigned short *l_1706 = &g_665;
        unsigned char l_1712 = 0xC7L;
        char *l_1717 = &g_1669;
        int l_1745 = 0L;
        int l_1754 = 0xA0FFCD88L;
        unsigned short l_1757 = 0xED99L;
        int l_1804 = 0x638F0163L;
        long long l_1818 = 0x3A30115ADE6FDF1FLL;
        union U2 *l_1878 = &g_53;
        union U2 **l_1877 = &l_1878;
        union U2 ***l_1876 = &l_1877;
        unsigned l_1899 = 1UL;
        int l_1951 = 0xD9E53DFCL;
        int l_1958 = 1L;
        union U0 l_1963 = {0xB160A2829B48EBF5LL};
        int *l_1990 = &l_1690.f0;
        if ((safe_add_func_uint32_t_u_u(((*l_1700) = ((l_1699 , (p_15.f0 , p_15.f0)) & 0x6C80B6A807AAF067LL)), ((*l_1696) ^= l_1699))))
        {
            union U2 *l_1715 = &g_53;
            union U2 **l_1714 = &l_1715;
            int l_1716 = 0x5AA5A384L;
            char *l_1718 = &g_1669;
            unsigned char l_1724 = 0x87L;
            unsigned char *l_1725 = &g_301;
            long long l_1726 = 0xA3A2154D8CE0AF58LL;
            int l_1727 = 0x1E5AC13FL;
            (*l_1714) = (p_15.f3 , &g_53);
            (*l_1696) ^= func_28(l_1716, ((*g_875) = l_1717), &g_53, (l_1718 = l_1691));

            ;
            ;
            (*l_1696) = (l_1716 >= ((safe_add_func_uint32_t_u_u((safe_unary_minus_func_int32_t_s(((*g_185) | ((&p_15 != &g_1540) == (safe_mod_func_int8_t_s_s(0x2EL, p_15.f0)))))), ((((*l_1725) |= l_1724) , ((*l_1725) = (l_1699 >= (l_1727 = (((((**g_182) ^= p_15.f2) >= 6UL) | l_1726) , p_15.f3))))) || (*g_185)))) , p_15.f3));
        }
        else
        {
            short *l_1728 = &g_116;
            int l_1737 = 1L;
            unsigned long long *l_1738 = &g_89;
            int **l_1752 = &l_1696;
            union U3 l_1753 = {65527UL};
            unsigned char l_1755 = 3UL;
            int l_1814 = 0x6AD1B08BL;
            int l_1858 = (-2L);
            int l_1865 = 0x8F4306A2L;
            char *l_1913 = &g_1540.f2;
            unsigned short ****l_1920 = (void*)0;
            union U2 *l_1953 = &g_53;
            if (p_15.f2)
            {
                unsigned char **l_1751 = &g_185;
                int l_1756 = 0L;
                int l_1766 = 0L;
                int l_1789 = 0x641A88C3L;
                int l_1824 = 0x4612D621L;
                char *l_1891 = (void*)0;
                if ((safe_add_func_int8_t_s_s((l_1757 = p_15.f0), (-1L))))
                {
                    int *l_1758 = &l_1745;
                    int *l_1759 = &g_62;
                    int *l_1760 = &l_1690.f0;
                    int *l_1761 = &g_255;
                    int *l_1762 = (void*)0;
                    int *l_1763 = &g_255;
                    int *l_1764 = &l_1690.f0;
                    int *l_1765 = &l_1756;
                    int *l_1767 = &l_1754;
                    int *l_1768 = &l_1766;
                    int *l_1769 = &l_1756;
                    int *l_1770 = &g_482;
                    int *l_1771 = &g_482;
                    int *l_1772 = &g_949;
                    int *l_1773 = &g_949;
                    int *l_1774 = &g_255;
                    int *l_1775 = &g_62;
                    int *l_1776 = &l_1766;
                    int *l_1777 = &g_255;
                    int *l_1778 = &g_949;
                    int *l_1779 = &g_482;
                    int *l_1780 = &l_1754;
                    int *l_1781 = &l_1745;
                    int *l_1782 = (void*)0;
                    int *l_1783 = &g_204.f0;
                    int *l_1784 = &l_1756;
                    int *l_1785 = &g_255;
                    int *l_1786 = &l_1754;
                    int *l_1787 = &l_1754;
                    int *l_1788 = &g_482;
                    int *l_1790 = &l_1766;
                    int *l_1791 = &g_62;
                    int *l_1792 = &l_1754;
                    int *l_1793 = &g_949;
                    int *l_1794 = &g_62;
                    int *l_1795 = &g_1221;
                    int *l_1796 = &g_1221;
                    int *l_1797 = &l_1692;
                    int *l_1798 = &l_1692;
                    int *l_1799 = &l_1756;
                    int *l_1800 = (void*)0;
                    int *l_1801 = &g_204.f0;
                    int *l_1802 = &l_1756;
                    int *l_1803 = &l_1745;
                    int *l_1805 = &l_1692;
                    int *l_1806 = &l_1745;
                    int *l_1807 = &g_949;
                    int *l_1808 = &l_1804;
                    int *l_1809 = &g_62;
                    int *l_1810 = &l_1754;
                    int *l_1811 = &g_62;
                    int *l_1812 = &l_1766;
                    int *l_1813 = &l_1690.f0;
                    int *l_1815 = (void*)0;
                    int *l_1816 = &g_949;
                    int *l_1817 = &g_949;
                    int *l_1819 = &g_255;
                    int *l_1820 = (void*)0;
                    int *l_1821 = &l_1756;
                    int *l_1822 = (void*)0;
                    int *l_1823 = &g_482;
                    int *l_1825 = &g_62;
                    int *l_1826 = &l_1824;
                    int *l_1827 = &l_1766;
                    int *l_1828 = &l_1754;
                    int *l_1829 = &l_1804;
                    int *l_1830 = &g_1221;
                    int *l_1831 = &g_204.f0;
                    ++g_1832;
                    (*l_1790) = l_1824;
                }
                else
                {
                    char l_1860 = 0x37L;
                    int l_1864 = 1L;
                    union U2 *l_1902 = &g_53;
                    if ((g_204 , p_15.f3))
                    {
                        int *l_1835 = &l_1789;
                        int *l_1836 = &g_949;
                        int *l_1837 = &l_1824;
                        int *l_1838 = &l_1754;
                        int *l_1839 = (void*)0;
                        int *l_1840 = &l_1804;
                        int *l_1841 = &l_1754;
                        int *l_1842 = &l_1756;
                        int *l_1843 = &l_1824;
                        int *l_1844 = &g_949;
                        int *l_1845 = (void*)0;
                        int *l_1846 = &l_1754;
                        int *l_1847 = &g_1221;
                        int *l_1848 = (void*)0;
                        int *l_1849 = &l_1754;
                        int *l_1850 = &l_1745;
                        int *l_1851 = (void*)0;
                        int *l_1852 = &g_1221;
                        int *l_1853 = &l_1766;
                        int *l_1854 = (void*)0;
                        int *l_1855 = &l_1766;
                        int *l_1856 = &l_1766;
                        int *l_1857 = &g_1221;
                        int *l_1859 = &l_1766;
                        int *l_1861 = &l_1692;
                        int *l_1862 = (void*)0;
                        int *l_1863 = &l_1766;
                        int *l_1866 = &g_482;
                        int *l_1867 = &l_1858;
                        int *l_1868 = &g_482;
                        int *l_1869 = &g_1221;
                        int *l_1870 = &l_1824;
                        int *l_1871 = &g_62;
                        int *l_1872 = (void*)0;
                        char *l_1890 = &g_209.f2;
                        long long l_1892 = 1L;
                        int *l_1893 = &l_1804;
                        int *l_1894 = (void*)0;
                        int *l_1895 = &g_255;
                        int *l_1896 = (void*)0;
                        int *l_1897 = &g_204.f0;
                        int *l_1898 = &l_1745;
                        ++g_1873;
                        (*l_1867) &= ((((((l_1876 == ((g_1879 != (void*)0) , l_1881)) != (func_16((**g_182), (*g_875), ((*l_1842) > (*g_51)), (*l_1696), (*g_51)) , p_15.f2)) < 0UL) > (*l_1871)) || 0x7AA3L) ^ g_246);
                        ++l_1899;
                    }
                    else
                    {
                        return l_1902;


                    }
                    (**l_1752) &= p_15.f0;
                }
            }
            else
            {
                char l_1908 = 1L;
                int *l_1909 = &g_482;
                unsigned long long l_1921 = 0xE37D6F88FB5ACC6CLL;
                union U3 l_1931 = {0x33D7L};
                union U2 l_1936 = {0x9E6B7468L};
                unsigned short *l_1944 = &g_1694;
                l_1745 |= p_15.f3;
                for (l_1899 = 0; (l_1899 != 29); l_1899++)
                {
                    long long *l_1927 = &g_171;
                    unsigned long long **l_1930 = &l_1738;
                    union U1 *l_1932 = &l_1690;
                    union U1 **l_1933 = &l_1932;
                    int l_1946 = 0x483FF456L;
                    union U0 l_1949 = {-9L};
                    int *l_1952 = &g_482;
                    if (((((*l_1696) = ((***g_1880) = (safe_rshift_func_int8_t_s_s(l_1754, ((void*)0 == g_1907))))) | p_15.f3) != l_1908))
                    {
                        l_1909 = &l_1804;

                        ;
                    }
                    else
                    {
                        if (l_1745)
                            break;
                    }
                    for (g_1422 = 5; (g_1422 < (-14)); g_1422 = safe_sub_func_uint8_t_u_u(g_1422, 1))
                    {
                        union U3 l_1914 = {5UL};
                        union U0 l_1919 = {0xCD2E54022C5F6D8ELL};
                        int l_1924 = 0L;
                        (**g_762) = (*l_1752);

                        ;
                        (**g_763) = func_38(((*g_875) = l_1717), func_16(p_15.f3, ((g_91 , l_1912) , l_1913), (((((l_1914 , l_1818) ^ (safe_sub_func_uint64_t_u_u((l_1917 == (void*)0), g_1540.f3))) , &g_53) != (void*)0) , p_15.f0), p_15.f0, (**l_1752)), (**g_182));

                        ;
                        l_1924 &= (((*g_185) = ((func_38((*g_875), l_1919, (&g_1880 != l_1920)) ^ p_15.f3) <= ((l_1921 ^ (((safe_add_func_int8_t_s_s((g_541 , ((*l_1909) == (*g_51))), (**l_1752))) == g_932) || p_15.f3)) != (*l_1909)))) ^ 249UL);
                    }
                    (**l_1752) = ((((*l_1927) = (safe_rshift_func_int16_t_s_s((*g_51), ((0xDDA3550E775E4EC0LL & p_15.f2) & (**g_182))))) && ((safe_rshift_func_int8_t_s_s((((*l_1930) = &g_89) != (l_1931 , &g_858)), 7)) >= (*l_1909))) & ((((*l_1933) = l_1932) != &g_204) || (*g_185)));
                    if (((p_15 , (safe_add_func_int8_t_s_s(0xD4L, ((((*l_1883) = l_1936) , func_38(l_1717, l_1937, (***g_1880))) == (safe_sub_func_uint64_t_u_u(g_1417, p_15.f2)))))) ^ 6UL))
                    {
                        unsigned char l_1950 = 1UL;
                        (*l_1909) = (safe_sub_func_int16_t_s_s((p_15.f0 != g_1422), 0L));
                    }
                    else
                    {
                        (**l_1752) &= 0xCE56D51EL;
                        l_1952 = &l_1946;

                        ;
                        return l_1953;


                    }
                }


                ;
                ;
            }


            ;
            (**g_762) = (*l_1752);

            ;
            if (((safe_mod_func_uint16_t_u_u((*g_183), l_1951)) < (0xE3EBE9A0L & (safe_sub_func_uint64_t_u_u(l_1958, ((safe_sub_func_int8_t_s_s((g_1540.f3 < (**l_1752)), (safe_add_func_uint32_t_u_u((~l_1754), func_38((*g_875), l_1963, (****g_1879)))))) , g_65))))))
            {
                char **l_1964 = &g_1539;
                (**l_1752) |= func_38(((*l_1964) = ((*g_875) = l_1717)), ((*g_332) = l_1937), (safe_rshift_func_int8_t_s_s((+((*l_1913) = l_1804)), 2)));

                ;
                ;
            }
            else
            {
                return l_1953;


            }

            ;
            ;
        }


        ;
        ;
        for (g_246 = (-28); (g_246 == 26); ++g_246)
        {
            long long l_1977 = 0x51AD37F1A5462884LL;
            unsigned long long *l_1979 = (void*)0;
            unsigned long long *l_1980 = &l_1912.f4;
            int l_1993 = (-1L);
            (*l_1696) = (safe_lshift_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s((safe_sub_func_uint64_t_u_u((((+(safe_sub_func_uint64_t_u_u((l_1977 , (g_189 &= g_1978)), 0xA945CCFD05B76F11LL))) == (safe_sub_func_uint32_t_u_u((safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(l_1977, ((((void*)0 == l_1987) , p_15.f2) , (((safe_add_func_uint32_t_u_u(0xE206454EL, ((((*l_1700) = (0x6EE89B01E9B2E75DLL <= 0x69EA02C1AE507AC4LL)) >= 0x68DE5A34L) , p_15.f2))) , l_1963.f0) , l_1963.f2)))), l_1818)), l_1977))) <= l_1977), p_15.f2)), p_15.f2)) != l_1899), 3));
            l_1990 = &g_1221;

            ;
            l_1993 = (safe_lshift_func_int8_t_s_s((**g_875), 5));
        }

        ;
        return &g_53;


    }
    else
    {
lbl_2334:
        g_1994 = ((*l_1696) |= p_15.f2);
    }


    for (g_1671 = 0; (g_1671 < 3); g_1671++)
    {
        char **l_2040 = &g_277;
        union U0 l_2127 = {0xE63704125CE1533FLL};
        union U0 *l_2146 = (void*)0;
        short *l_2160 = &g_773;
        long long l_2170 = 0x269F98ACD79DA131LL;
        int l_2272 = 1L;
        int l_2275 = (-9L);
        int l_2277 = 0L;
        int l_2278 = 0x7522B2B9L;
        int l_2285 = 0xE0711C75L;
        int l_2292 = 6L;
        int l_2309 = 0x9E480DC5L;
        int l_2316 = 0xCFB65942L;
        union U1 **l_2435 = (void*)0;
        union U1 ***l_2434 = &l_2435;
        union U3 *l_2676 = &g_154;
        union U3 **l_2675 = &l_2676;
        if (p_15.f2)
        {
            unsigned char l_2027 = 0UL;
            char **l_2039 = (void*)0;
            short *l_2043 = &g_116;
            int l_2045 = 0x5CF42ACDL;
            char *l_2153 = &g_1994;
            int l_2196 = (-8L);
            union U1 *l_2264 = &l_1690;
            union U1 **l_2263 = &l_2264;
            union U1 ***l_2262 = &l_2263;
            unsigned l_2271 = 0x567B2BC8L;
            char l_2276 = 0L;
            short **l_2340 = &g_51;
            short ***l_2339 = &l_2340;
            int **l_2429 = &l_1695;
            union U0 l_2430 = {0xA559418AD6B4A796LL};
            if (l_1997)
            {
                int *l_1998 = &g_62;
                int *l_1999 = &g_62;
                int *l_2000 = &l_1690.f0;
                int *l_2001 = &g_204.f0;
                int *l_2002 = &l_1692;
                int *l_2003 = &g_1221;
                int *l_2004 = &g_255;
                int *l_2005 = &g_949;
                int *l_2006 = &g_949;
                int *l_2007 = &l_1692;
                int *l_2008 = &g_1221;
                int *l_2009 = &g_482;
                int *l_2010 = &l_1692;
                int *l_2011 = (void*)0;
                int *l_2012 = &g_204.f0;
                int *l_2013 = (void*)0;
                int *l_2014 = &g_255;
                int *l_2015 = &g_1221;
                int *l_2016 = &g_949;
                int *l_2017 = &g_62;
                int *l_2018 = &g_204.f0;
                int *l_2019 = (void*)0;
                int *l_2020 = &g_204.f0;
                int *l_2021 = &g_1221;
                int *l_2022 = &g_1221;
                int *l_2023 = &g_482;
                int *l_2024 = &g_62;
                int *l_2025 = (void*)0;
                int *l_2026 = (void*)0;
                unsigned long long *l_2030 = (void*)0;
                unsigned long long *l_2031 = &g_189;
                char *l_2038 = &g_769;
                --l_2027;
                (*l_2021) ^= (((*g_185) = (((*l_2031) = p_15.f0) != (l_2027 , ((0xA5B310C1L > (safe_lshift_func_uint16_t_u_s((*g_183), (safe_add_func_int32_t_s_s((l_2027 && l_2027), p_15.f2))))) != (l_2038 != ((*g_1907) , &l_1997)))))) >= l_2027);
            }
            else
            {
                (*l_1696) = (l_2039 != (l_2040 = l_2040));
                if (p_15.f3)
                    continue;
            }
            if (p_15.f0)
            {
                char l_2091 = 0L;
                unsigned l_2119 = 0xEE8E5166L;
                char l_2128 = (-9L);
                unsigned long long l_2135 = 18446744073709551607UL;
                int l_2136 = 6L;
                unsigned long long l_2155 = 18446744073709551607UL;
                for (g_701 = 22; (g_701 >= 16); g_701--)
                {
                    char l_2088 = 0x2CL;
                    int *l_2124 = &l_2045;
                    if (((void*)0 == l_2043))
                    {
                        l_2045 &= (safe_unary_minus_func_uint16_t_u((***g_1880)));
                    }
                    else
                    {
                        int *l_2046 = &g_949;
                        int *l_2047 = &g_1221;
                        int *l_2048 = &l_1692;
                        int *l_2049 = &g_62;
                        int *l_2050 = &g_482;
                        int *l_2051 = &g_1221;
                        int *l_2052 = &g_482;
                        int *l_2053 = &g_255;
                        int *l_2054 = &g_949;
                        int *l_2055 = &g_62;
                        int *l_2056 = &l_1692;
                        int *l_2057 = &g_1221;
                        int *l_2058 = (void*)0;
                        int *l_2059 = (void*)0;
                        int *l_2060 = &g_255;
                        int *l_2061 = (void*)0;
                        int *l_2062 = &l_1690.f0;
                        int *l_2063 = &g_482;
                        int *l_2064 = &l_1692;
                        int *l_2065 = &g_62;
                        int *l_2066 = &l_1692;
                        int *l_2067 = &g_204.f0;
                        int *l_2068 = &g_482;
                        int *l_2069 = &l_1692;
                        int *l_2070 = &l_1692;
                        int *l_2071 = &g_482;
                        int *l_2072 = (void*)0;
                        int *l_2073 = (void*)0;
                        int *l_2074 = &g_204.f0;
                        int *l_2075 = &g_62;
                        int *l_2076 = &g_62;
                        int *l_2077 = &g_1221;
                        int *l_2078 = &l_1692;
                        int *l_2079 = (void*)0;
                        int *l_2080 = &g_1221;
                        int *l_2081 = &l_1692;
                        int *l_2082 = &l_1690.f0;
                        int *l_2083 = &g_1221;
                        int *l_2084 = &l_1692;
                        int *l_2085 = &g_255;
                        int l_2086 = (-1L);
                        int *l_2087 = &g_62;
                        int *l_2089 = &g_1221;
                        int *l_2090 = &g_949;
                        int *l_2092 = &g_949;
                        int *l_2093 = &g_949;
                        int *l_2094 = &l_1692;
                        int *l_2095 = &g_1221;
                        int *l_2096 = &g_482;
                        int *l_2097 = &g_949;
                        int *l_2098 = (void*)0;
                        int l_2099 = (-1L);
                        int *l_2100 = &l_1690.f0;
                        int l_2101 = 0x92F27538L;
                        int *l_2102 = &g_482;
                        int *l_2103 = &g_204.f0;
                        int *l_2104 = &g_1221;
                        int *l_2105 = (void*)0;
                        int *l_2106 = &g_255;
                        int *l_2107 = &l_1690.f0;
                        int *l_2109 = &g_482;
                        int *l_2110 = &g_255;
                        int *l_2111 = (void*)0;
                        int *l_2112 = &g_1221;
                        int *l_2113 = &l_2099;
                        int *l_2114 = (void*)0;
                        int *l_2115 = &l_2101;
                        int *l_2116 = &l_2045;
                        int *l_2117 = &l_2108;
                        int *l_2118 = &l_2045;
                        union U1 *l_2123 = &g_204;
                        union U1 **l_2122 = &l_2123;
                        l_2119--;
                        (*l_2122) = &l_1690;

                        ;
                        if (p_15.f3)
                            break;
                        (**g_762) = l_2124;

                        ;
                    }
                }


                l_2136 &= ((safe_mod_func_int16_t_s_s((((l_2127 , g_736) != l_2128) , func_38(&l_2128, func_16((l_2127.f0 ^ (safe_mod_func_int64_t_s_s(((p_15.f0 || l_2091) | (((safe_lshift_func_uint16_t_u_u(((((safe_sub_func_int32_t_s_s(0L, l_2127.f2)) < 0x55L) >= 0x36D5L) <= l_2128), (**g_182))) <= l_2127.f0) > l_2135)), p_15.f0))), (*g_875), l_2027, g_1221, (*g_51)), l_2127.f2)), 5UL)) < g_858);
                for (g_1669 = 0; (g_1669 < (-10)); g_1669 = safe_sub_func_int8_t_s_s(g_1669, 9))
                {
                    char *l_2154 = &l_1997;
                    long long l_2156 = 0x9D05EA40EF2B68D4LL;
                    unsigned long long *l_2158 = &l_1912.f4;
                    unsigned long long *l_2159 = &g_189;
                    union U0 l_2167 = {9L};
                    unsigned short ****l_2168 = &g_1880;
                    if (p_15.f2)
                    {
                        unsigned l_2161 = 0xC2A9FB41L;
                        unsigned short *l_2164 = (void*)0;
                        char *l_2169 = &g_1669;
                        --l_2161;
                        (**g_762) = (((g_665 |= ((*g_183) = 1UL)) < (g_540 , ((65533UL || l_2136) || (safe_mod_func_uint64_t_u_u(((l_2127.f3 , (l_2167 , p_15.f0)) >= ((l_2161 != ((l_2170 >= (*l_1696)) || l_2161)) || l_2161)), (-5L)))))) , &l_2136);

                        ;
                    }
                    else
                    {
                        unsigned l_2171 = 0UL;
                        ++l_2171;
                    }
                }


            }
            else
            {
                int *l_2180 = &l_1692;
                int *l_2181 = &l_2045;
                int *l_2182 = &g_949;
                int *l_2183 = &l_1690.f0;
                int *l_2184 = &g_62;
                int *l_2185 = &g_1221;
                int *l_2186 = &g_255;
                int *l_2187 = (void*)0;
                int *l_2188 = &g_949;
                int *l_2189 = (void*)0;
                int *l_2190 = &g_949;
                int *l_2191 = &g_949;
                int *l_2192 = (void*)0;
                int *l_2193 = (void*)0;
                int *l_2194 = &l_1692;
                int *l_2195 = &g_62;
                int *l_2197 = &l_1690.f0;
                int *l_2198 = &l_2108;
                int *l_2199 = &l_1692;
                int *l_2200 = &g_204.f0;
                int *l_2201 = &l_1690.f0;
                int *l_2202 = &l_1692;
                int *l_2203 = (void*)0;
                int *l_2204 = &g_949;
                int *l_2205 = &l_2108;
                int *l_2206 = &g_62;
                int *l_2207 = &g_1221;
                int *l_2208 = &l_1692;
                int *l_2209 = (void*)0;
                int *l_2210 = &l_1692;
                int *l_2211 = (void*)0;
                int *l_2212 = &g_482;
                int *l_2213 = &g_949;
                int *l_2214 = &g_62;
                int *l_2215 = &l_2108;
                int *l_2216 = (void*)0;
                int *l_2217 = &g_62;
                int *l_2218 = (void*)0;
                int *l_2219 = (void*)0;
                int *l_2220 = (void*)0;
                int *l_2221 = &l_1690.f0;
                int *l_2222 = &g_949;
                int *l_2223 = &l_2196;
                int *l_2224 = &g_255;
                int *l_2225 = &g_482;
                int *l_2226 = &g_482;
                int *l_2227 = &g_482;
                int *l_2228 = &l_2045;
                int *l_2229 = &l_1690.f0;
                int *l_2230 = &g_204.f0;
                int *l_2231 = (void*)0;
                int *l_2232 = (void*)0;
                int *l_2233 = &g_482;
                int *l_2234 = &g_1221;
                int *l_2235 = &l_1690.f0;
                int *l_2236 = (void*)0;
                int *l_2237 = (void*)0;
                int *l_2238 = &l_1692;
                int *l_2239 = &l_2108;
                int *l_2240 = &g_255;
                int *l_2241 = &g_62;
                int *l_2242 = &l_2108;
                int *l_2243 = &g_62;
                int *l_2244 = &l_2108;
                int *l_2245 = &l_2045;
                int *l_2246 = &g_1221;
                int *l_2247 = &g_255;
                int *l_2248 = &l_2196;
                int l_2317 = 0x59F7CF33L;
                (*l_1696) = (safe_lshift_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((l_2127.f2 ^ (safe_add_func_uint32_t_u_u(0xE8BFB8A2L, (p_15.f3 != (*g_51))))), p_15.f0)), 7));
                l_2180 = l_2180;
                --g_2249;
                if (p_15.f0)
                {
                    union U1 **l_2261 = (void*)0;
                    union U1 ***l_2260 = &l_2261;
                    int l_2279 = 8L;
                    int l_2305 = (-1L);
                    for (g_246 = 0; (g_246 == (-28)); g_246 = safe_sub_func_uint16_t_u_u(g_246, 2))
                    {
                        unsigned long long l_2255 = 0xE202FAC21DF91566LL;
                        char l_2273 = (-9L);
                        unsigned *l_2274 = &g_204.f2;
                        int *l_2282 = (void*)0;
                        int *l_2283 = &l_2279;
                        int *l_2284 = &g_62;
                        int *l_2286 = &l_1692;
                        int *l_2287 = &g_204.f0;
                        int *l_2288 = &g_62;
                        int *l_2289 = &l_1692;
                        int *l_2290 = &g_255;
                        int *l_2291 = &g_1221;
                        int *l_2293 = &g_1221;
                        int *l_2294 = &l_2285;
                        int *l_2295 = &l_2196;
                        int l_2296 = 0L;
                        int *l_2297 = &l_2196;
                        int *l_2298 = &g_482;
                        int *l_2299 = &g_949;
                        int l_2300 = 0x5D735E6DL;
                        int *l_2301 = &g_949;
                        int *l_2302 = (void*)0;
                        int *l_2303 = &g_1221;
                        int *l_2304 = &l_2045;
                        int *l_2306 = &g_1221;
                        int *l_2307 = &l_2277;
                        int *l_2308 = (void*)0;
                        int *l_2310 = &l_2275;
                        int *l_2311 = &g_1221;
                        int *l_2312 = &l_2305;
                        int *l_2313 = &g_482;
                        int *l_2314 = &l_2296;
                        int *l_2315 = &g_482;
                        int *l_2318 = &l_2277;
                        int *l_2319 = (void*)0;
                        int *l_2320 = &l_2285;
                        int *l_2321 = &l_2108;
                        int l_2322 = 0x45C9C8CAL;
                        int *l_2323 = &l_2309;
                        int *l_2324 = &l_2309;
                        int *l_2325 = &g_949;
                        int *l_2326 = &l_1690.f0;
                        int *l_2327 = &l_2277;
                        l_2255++;
                        (*l_2198) &= ((+p_15.f2) != ((safe_sub_func_uint32_t_u_u(((*l_2274) = ((((((l_2262 = l_2260) != &l_2261) , (((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((l_2170 < (safe_add_func_int64_t_s_s((2UL && 0x31L), l_2271))), l_2127.f0)), (*g_51))) != 0xD6L) & l_2273)) & l_2272) >= 0x7F915657L) , p_15.f0)), (*l_2246))) == l_2273));

                                                ;
                        g_2328--;
                    }

                    ;
                    l_2196 = p_15.f0;
                    if (p_15.f0)
                        continue;
                    (*l_2213) = l_2170;
                }
                else
                {
                    unsigned long long l_2333 = 0xB08E658411DCE4CELL;
                    (*l_2234) ^= l_2271;
                    (*g_763) = (void*)0;

                    ;
                    (*l_2240) ^= (safe_lshift_func_int8_t_s_u(l_2333, 7));
                    if (g_1832)
                        goto lbl_2334;
                }


            }



            for (l_1690.f2 = 0; (l_1690.f2 <= 34); l_1690.f2 = safe_add_func_uint16_t_u_u(l_1690.f2, 9))
            {
                long long l_2341 = 0x2806E31C6DE94FB7LL;
                int *l_2436 = &l_1692;
                int *l_2444 = &l_2309;
                int l_2450 = 0x4247DF50L;
                l_2341 = (p_15.f2 , ((safe_sub_func_int32_t_s_s((((void*)0 == (*l_1917)) , p_15.f2), ((void*)0 == l_2339))) , p_15.f2));
                if (p_15.f2)
                {
                    unsigned short l_2344 = 8UL;
                    unsigned *l_2349 = &g_575;
                    short *l_2352 = &g_246;
                    union U3 l_2353 = {1UL};
                    int *l_2356 = &g_1035;
                    int l_2388 = 0xDF94168AL;
                    int l_2400 = 0x1AD99A6BL;
                    (*l_1696) = (safe_sub_func_uint64_t_u_u(l_2344, ((g_772 ^ (safe_rshift_func_int16_t_s_u((safe_add_func_uint32_t_u_u(((*l_2349) ^= g_2254), (((*l_2356) = (((safe_rshift_func_int8_t_s_u(l_2170, 6)) & ((*g_51) ^ 0x6B86L)) ^ 4294967295UL)) , 0x0E3F3F44L))), p_15.f0))) < 0UL)));
                    (**g_762) = &l_2275;

                    ;
                    (**g_763) = ((p_15.f0 == g_91) , ((*l_1696) = (((*l_2040) = (void*)0) != (void*)0)));

                    ;
                    if (l_2353.f3)
                    {
                        if (p_15.f3)
                            break;
                        l_2285 = (((**g_763) ^= (g_2357 != (void*)0)) != (!(l_2316 || 0x52L)));
                    }
                    else
                    {
                        unsigned l_2359 = 18446744073709551611UL;
                        int *l_2362 = &g_62;
                        int *l_2363 = &l_2045;
                        int *l_2364 = &l_2275;
                        int *l_2365 = &l_2277;
                        int *l_2366 = (void*)0;
                        int *l_2367 = (void*)0;
                        int *l_2368 = &l_2309;
                        int *l_2369 = &l_2316;
                        int *l_2370 = &l_2045;
                        int *l_2371 = &l_2196;
                        int *l_2372 = &l_1692;
                        int *l_2373 = &l_2196;
                        int *l_2374 = (void*)0;
                        int *l_2375 = (void*)0;
                        int *l_2376 = &g_1221;
                        int *l_2377 = &l_2309;
                        int *l_2378 = &l_2045;
                        int *l_2379 = &g_255;
                        int *l_2380 = &l_2277;
                        int *l_2381 = (void*)0;
                        int *l_2382 = &l_1692;
                        int *l_2383 = &l_2292;
                        int *l_2384 = &l_2108;
                        int *l_2385 = &l_2196;
                        int *l_2386 = &g_255;
                        int *l_2387 = &g_255;
                        int *l_2389 = &l_2316;
                        int *l_2390 = &l_2292;
                        int *l_2391 = &g_482;
                        int *l_2392 = &g_482;
                        int *l_2393 = &l_2292;
                        int *l_2394 = (void*)0;
                        int *l_2395 = &g_204.f0;
                        int *l_2396 = &l_2388;
                        int *l_2397 = &g_949;
                        int *l_2398 = &l_2045;
                        int *l_2399 = &g_204.f0;
                        int *l_2401 = (void*)0;
                        int *l_2402 = &l_2309;
                        int *l_2403 = &g_204.f0;
                        int *l_2404 = &g_204.f0;
                        int *l_2405 = &l_2196;
                        int *l_2406 = (void*)0;
                        int *l_2407 = &l_2309;
                        int *l_2408 = &l_1692;
                        int *l_2409 = &g_949;
                        int *l_2410 = &g_482;
                        int *l_2411 = &g_482;
                        int *l_2412 = &l_2400;
                        int *l_2413 = &l_2316;
                        int *l_2414 = (void*)0;
                        int *l_2415 = (void*)0;
                        int *l_2416 = &g_482;
                        int *l_2417 = &l_2285;
                        int *l_2418 = (void*)0;
                        int *l_2419 = &g_482;
                        int *l_2420 = &l_2275;
                        int *l_2421 = &g_1221;
                        int *l_2422 = (void*)0;
                        unsigned short l_2423 = 0x17CEL;
                        (***g_762) &= p_15.f2;
                        --l_2359;
                        l_2423++;
                    }
                }
                else
                {
                    int l_2431 = 0xECDD37BEL;
                    int *l_2446 = (void*)0;
                    int *l_2447 = &l_2108;
                    int *l_2448 = &l_2108;
                    int *l_2449 = &g_255;
                    int *l_2451 = &g_62;
                    int *l_2452 = &l_2108;
                    int *l_2453 = &g_949;
                    int *l_2454 = &l_1692;
                    int *l_2455 = &l_2108;
                    int *l_2456 = &l_2196;
                    int *l_2457 = (void*)0;
                    int *l_2458 = &g_255;
                    int *l_2459 = (void*)0;
                    int *l_2460 = &l_2285;
                    int *l_2461 = &g_949;
                    int *l_2462 = &l_2309;
                    int *l_2463 = &l_2450;
                    int *l_2464 = &l_2108;
                    int *l_2465 = &l_2450;
                    int *l_2466 = &l_2277;
                    int *l_2467 = &l_2316;
                    int *l_2468 = (void*)0;
                    int *l_2469 = (void*)0;
                    if ((safe_mod_func_int16_t_s_s(func_38(((*l_2040) = (p_15.f3 , (*l_2040))), (l_2430 = func_16(p_15.f3, g_2428, (((l_2429 == &l_1696) || g_1832) , p_15.f2), (**g_2357), p_15.f0)), l_2431), p_15.f3)))
                    {
                        l_2431 &= ((safe_sub_func_uint8_t_u_u((((1L | p_15.f3) & 1L) >= ((((void*)0 != l_2434) , (((0x20DAB26EL & l_2127.f0) , (**l_1882)) , &g_763)) == &l_2429)), p_15.f2)) <= p_15.f0);
                        (*l_1696) = (l_2431 && (*g_185));
                        (**g_762) = ((*l_2429) = l_2436);

                        ;
                        ;
                        (**l_2429) = ((safe_add_func_int16_t_s_s(((func_46(p_15.f2, &g_1431, g_116, g_154.f0) != ((safe_mod_func_uint16_t_u_u(((**g_2357) & p_15.f2), ((*l_2160) = g_1035))) , (0x2893L ^ p_15.f3))) >= p_15.f0), 0xA5B5L)) || p_15.f0);
                    }
                    else
                    {
                        (*l_2436) |= 0L;
                        l_2431 = p_15.f2;
                        (*l_1696) &= p_15.f0;
                        l_2441++;
                    }



                    (**g_762) = &l_2431;

                    ;
                    (*l_2429) = l_2444;

                    ;
                    ++l_2470;
                }


                if (p_15.f0)
                    break;
            }



        }
        else
        {
            char l_2475 = 0x94L;
            unsigned short *l_2476 = &l_1713;
            union U1 *l_2479 = &l_1690;
            int *l_2480 = &g_482;
            int l_2496 = 0x87B222F6L;
            int l_2517 = 0x5EE86B75L;
            int l_2527 = (-9L);
            int l_2583 = 0x5048A08AL;
            (*l_1696) &= (l_2170 > p_15.f0);
            if (p_15.f2)
            {
                if (p_15.f2)
                    break;
                l_2480 = &l_2108;

                ;
            }
            else
            {
                int l_2510 = (-8L);
                int l_2528 = 0x6A002DBCL;
                unsigned char l_2590 = 0x58L;
                unsigned ***l_2667 = &l_1918;
                (*l_2480) |= (safe_sub_func_int16_t_s_s(6L, (safe_rshift_func_uint16_t_u_s(((&l_2475 == (void*)0) & l_2127.f0), 12))));
                (*l_2480) = (*l_2480);
                if (p_15.f0)
                {
                    long long l_2551 = 0x537D072BD1958871LL;
                    int l_2576 = 0xA9993276L;
                    int l_2581 = 7L;
                    int l_2584 = 0L;
                    for (g_246 = 0; (g_246 == (-27)); g_246 = safe_sub_func_int64_t_s_s(g_246, 2))
                    {
                        int *l_2487 = &l_2285;
                        int *l_2488 = &l_1690.f0;
                        int *l_2489 = &l_2285;
                        int *l_2490 = &l_2277;
                        int l_2491 = 0x1751264CL;
                        int *l_2492 = (void*)0;
                        int *l_2493 = &g_482;
                        int *l_2494 = (void*)0;
                        int *l_2495 = &l_2108;
                        int *l_2497 = &l_2496;
                        int *l_2498 = &l_2491;
                        int *l_2499 = (void*)0;
                        int *l_2500 = &l_2108;
                        int *l_2501 = &g_482;
                        int *l_2502 = &l_2278;
                        int *l_2503 = &l_2292;
                        int *l_2504 = &g_949;
                        int *l_2505 = &l_2316;
                        int *l_2506 = &l_2275;
                        int *l_2507 = &g_949;
                        int *l_2508 = &l_2275;
                        int *l_2509 = &l_2285;
                        int *l_2511 = &g_1221;
                        int *l_2512 = &l_2510;
                        int *l_2513 = &g_62;
                        int *l_2514 = (void*)0;
                        int *l_2515 = &g_255;
                        int *l_2516 = &l_2277;
                        int *l_2518 = &l_2316;
                        int *l_2519 = (void*)0;
                        int *l_2520 = (void*)0;
                        int *l_2521 = &l_2285;
                        int *l_2522 = (void*)0;
                        int l_2523 = 0L;
                        int *l_2524 = (void*)0;
                        int *l_2525 = &g_255;
                        int *l_2526 = &l_2491;
                        int *l_2529 = (void*)0;
                        int *l_2530 = &l_2285;
                        int *l_2531 = &g_255;
                        int *l_2532 = (void*)0;
                        int *l_2533 = (void*)0;
                        int *l_2534 = &l_2491;
                        int *l_2535 = &g_62;
                        int *l_2536 = &g_204.f0;
                        int *l_2537 = &l_2316;
                        int *l_2538 = &g_482;
                        int *l_2539 = (void*)0;
                        int *l_2540 = &l_2278;
                        int *l_2541 = &g_949;
                        int *l_2542 = &g_204.f0;
                        int *l_2543 = &l_1692;
                        int *l_2544 = &l_1692;
                        int *l_2545 = &l_2523;
                        int *l_2546 = &l_1690.f0;
                        int *l_2547 = &l_2523;
                        int *l_2548 = &l_2277;
                        int *l_2549 = &l_2491;
                        int *l_2550 = &l_2491;
                        int *l_2552 = &l_2277;
                        int *l_2553 = &l_2491;
                        int *l_2554 = (void*)0;
                        int *l_2555 = &g_949;
                        int *l_2556 = &l_2309;
                        int *l_2557 = &l_2316;
                        int *l_2558 = &l_2316;
                        int *l_2559 = (void*)0;
                        int *l_2560 = &l_1692;
                        int *l_2561 = &g_949;
                        int *l_2562 = &l_2275;
                        int *l_2563 = &l_2316;
                        int *l_2564 = &g_482;
                        int *l_2565 = &l_2309;
                        int *l_2566 = &g_482;
                        int *l_2567 = (void*)0;
                        int *l_2568 = (void*)0;
                        int *l_2569 = &l_2528;
                        int *l_2570 = &l_2278;
                        int *l_2571 = &l_2277;
                        int *l_2572 = &l_1690.f0;
                        int *l_2573 = (void*)0;
                        int *l_2574 = (void*)0;
                        int *l_2575 = &l_2292;
                        int *l_2577 = &l_2275;
                        int *l_2578 = &l_2491;
                        int *l_2579 = &l_2277;
                        int *l_2580 = &g_482;
                        int *l_2582 = (void*)0;
                        int *l_2585 = &g_1221;
                        int *l_2586 = &l_2316;
                        int *l_2587 = (void*)0;
                        int *l_2588 = &l_1690.f0;
                        int *l_2589 = (void*)0;
                        (*l_2480) = (l_2127.f3 != p_15.f2);
                        --l_2590;
                    }
                }
                else
                {
                    int *l_2593 = &l_2275;
                    int *l_2594 = &l_2108;
                    int *l_2595 = &l_2277;
                    int *l_2596 = (void*)0;
                    int *l_2597 = &l_2316;
                    int *l_2598 = (void*)0;
                    int *l_2599 = &l_1690.f0;
                    int *l_2600 = (void*)0;
                    int *l_2601 = &l_2275;
                    int *l_2602 = &l_2527;
                    int *l_2603 = &l_2583;
                    int *l_2604 = &g_949;
                    int *l_2605 = &g_255;
                    int *l_2606 = &g_949;
                    int *l_2607 = &l_2108;
                    int *l_2608 = &l_2496;
                    int *l_2609 = &l_2309;
                    int *l_2610 = (void*)0;
                    int *l_2611 = &l_2309;
                    int *l_2612 = &l_2496;
                    int *l_2613 = &l_2292;
                    int *l_2614 = (void*)0;
                    int *l_2615 = &l_2496;
                    int *l_2616 = &g_204.f0;
                    int *l_2617 = (void*)0;
                    int *l_2618 = (void*)0;
                    int *l_2619 = &g_1221;
                    int *l_2620 = &g_949;
                    int *l_2621 = (void*)0;
                    int *l_2622 = &l_2517;
                    int *l_2623 = (void*)0;
                    int *l_2624 = &g_949;
                    int *l_2625 = &l_2285;
                    int *l_2626 = &g_482;
                    int *l_2627 = (void*)0;
                    int *l_2628 = &l_1690.f0;
                    int *l_2629 = &g_255;
                    int l_2630 = 6L;
                    int *l_2631 = &g_1221;
                    int *l_2632 = &l_2108;
                    int *l_2633 = &l_2309;
                    int l_2634 = 0x6FD94833L;
                    int *l_2635 = (void*)0;
                    int *l_2636 = &l_2634;
                    int *l_2637 = &l_2108;
                    int *l_2638 = &l_2634;
                    int *l_2639 = &g_62;
                    int *l_2640 = &l_2278;
                    int *l_2641 = &l_2630;
                    int *l_2642 = &l_2583;
                    int *l_2643 = &g_949;
                    int *l_2644 = &l_2277;
                    int *l_2645 = &l_2285;
                    int *l_2646 = &g_1221;
                    int *l_2647 = &l_2496;
                    int *l_2648 = &l_2277;
                    int *l_2649 = (void*)0;
                    int *l_2650 = &l_2278;
                    int *l_2651 = (void*)0;
                    int *l_2652 = &l_2527;
                    int *l_2653 = &l_2292;
                    int *l_2654 = &l_2285;
                    int *l_2655 = &l_2510;
                    int *l_2656 = &l_2108;
                    int *l_2657 = (void*)0;
                    int *l_2658 = &l_2634;
                    int *l_2659 = &l_2634;
                    int l_2660 = 0x2ED39971L;
                    int *l_2662 = &l_2275;
                    int *l_2663 = &g_949;
                    --g_2664;
                    if (l_2528)
                        continue;
                    if (((p_15 , l_2667) == g_2668))
                    {
                        if (p_15.f0)
                            break;
                    }
                    else
                    {
                        union U3 *l_2671 = &l_1912;
                        union U3 **l_2670 = &l_2671;
                        union U3 ***l_2673 = &l_2670;
                        int l_2674 = 0x98FC5501L;
                        (*l_2636) |= 0xF9E90DE8L;
                        (*l_2670) = &g_154;

                        ;
                        (*l_2673) = g_2672;

                        ;
                        if (l_2674)
                            break;
                    }
                }
                return &g_53;


            }

            ;
        }



        (*l_2675) = (void*)0;

        ;
    }
    return l_2677;


}







static union U0 func_16(unsigned short p_17, char * p_18, unsigned p_19, unsigned long long p_20, short p_21)
{
    int *l_1678 = &g_482;
    union U0 l_1679 = {0xECAF8FD61381EDCELL};
    l_1678 = l_1678;
    return l_1679;


    }







static short func_28(short p_29, char * p_30, union U2 * p_31, char * p_32)
{
    union U0 l_1010 = {0x01BF38B35FB31B78LL};
    int l_1011 = 1L;
    int *l_1012 = (void*)0;
    int *l_1013 = &g_482;
    union U2 *l_1016 = &g_53;
    union U3 l_1024 = {65528UL};
    short l_1059 = 0xB359L;
    int l_1086 = 1L;
    int l_1090 = 0x24784778L;
    int l_1444 = 0x8974938AL;
    char *l_1485 = (void*)0;
    int l_1604 = 0x7C297A2BL;
    int l_1605 = (-1L);
    int l_1649 = 0L;
    int l_1657 = 0xC55073B3L;
lbl_1120:
    (*l_1013) |= ((func_38((*g_875), l_1010, (l_1011 &= p_29)) <= (l_1010.f0 != 9UL)) ^ l_1010.f0);
    if ((*l_1013))
    {
        int **l_1020 = &g_61;
        union U0 l_1029 = {0xB52B39CA8FA26031LL};
        short l_1034 = (-1L);
        int *l_1037 = &g_62;
        union U2 **l_1060 = &l_1016;
        unsigned long long *l_1132 = &g_189;
        unsigned long long **l_1131 = &l_1132;
        unsigned long long ***l_1130 = &l_1131;
        int l_1147 = 9L;
        int l_1191 = 0xD781DD24L;
        int l_1226 = 5L;
        int **l_1240 = &g_61;
        int **l_1241 = &g_61;
        int **l_1242 = (void*)0;
        if (p_29)
        {
            long long *l_1017 = &g_541;
            long long *l_1021 = &g_171;
            unsigned *l_1022 = &g_53.f0;
            int l_1023 = 0x378AF67CL;
            int **l_1028 = (void*)0;
            union U1 l_1040 = {5L};
            l_1023 = ((safe_rshift_func_uint16_t_u_u(((void*)0 != l_1016), 6)) <= ((*l_1022) &= (((*l_1021) = ((((*l_1017) = 4L) || (g_204 , (((*g_762) = (*g_762)) != ((p_29 | (1L >= (p_29 || (safe_lshift_func_uint16_t_u_u(p_29, 5))))) , l_1020)))) , p_29)) | (*l_1013))));
            (*l_1013) = 0x3EBFDBB4L;
            if ((l_1024 , p_29))
            {
                int *l_1027 = &g_154.f2;
                unsigned long long *l_1036 = &g_189;
                union U1 *l_1049 = (void*)0;
                union U1 **l_1048 = &l_1049;
                union U1 ***l_1047 = &l_1048;
                long long l_1052 = 0x1305CCDD8EBC84A8LL;
                short **l_1053 = (void*)0;
                short **l_1054 = &g_51;
                (*l_1013) = (p_29 || ((*l_1036) = (safe_sub_func_uint64_t_u_u(func_38(((p_29 >= g_1035) , (*g_875)), (*g_332), l_1029.f0), 0xD70E8C3949C6922CLL))));
                l_1013 = l_1037;

                ;
                (*l_1037) = (safe_rshift_func_int8_t_s_u((*l_1037), (l_1040 , (&p_29 != ((*l_1054) = ((safe_lshift_func_uint8_t_u_u((l_1040 , (*g_185)), (safe_mod_func_uint32_t_u_u(0x021798CBL, ((safe_mod_func_uint16_t_u_u((((*l_1047) = (void*)0) == (((safe_mod_func_uint8_t_u_u((*l_1013), (*g_185))) ^ l_1052) , (void*)0)), p_29)) | 0x217AL))))) , &g_52))))));

                ;
            }
            else
            {
                unsigned l_1095 = 0xC26EF137L;
                (*g_763) = (void*)0;

                ;
                (**g_762) = (*l_1020);
                if ((safe_sub_func_int32_t_s_s(p_29, (safe_add_func_int8_t_s_s((-9L), ((*g_185) = l_1059))))))
                {
                    union U2 ***l_1061 = &l_1060;
                    int *l_1064 = (void*)0;
                    int *l_1065 = &l_1040.f0;
                    int *l_1066 = &g_949;
                    int *l_1067 = (void*)0;
                    int *l_1068 = &g_949;
                    int *l_1069 = &g_949;
                    int *l_1070 = &l_1011;
                    int *l_1071 = &g_62;
                    int *l_1072 = &g_949;
                    int *l_1073 = (void*)0;
                    int *l_1074 = &l_1011;
                    int *l_1075 = &g_949;
                    int *l_1076 = &l_1011;
                    int *l_1077 = &g_949;
                    int *l_1078 = &l_1011;
                    int *l_1079 = (void*)0;
                    int *l_1080 = &g_949;
                    int *l_1081 = &l_1040.f0;
                    int *l_1082 = &g_482;
                    int *l_1083 = &l_1011;
                    int *l_1084 = &l_1040.f0;
                    int *l_1085 = &g_482;
                    int *l_1087 = (void*)0;
                    int *l_1088 = &l_1040.f0;
                    int *l_1089 = &g_204.f0;
                    int *l_1091 = (void*)0;
                    int *l_1092 = &g_255;
                    int *l_1093 = (void*)0;
                    int *l_1094 = &l_1090;
                    (*l_1061) = l_1060;
                    for (g_154.f2 = 1; (g_154.f2 <= 20); g_154.f2 = safe_add_func_uint16_t_u_u(g_154.f2, 5))
                    {
                        return p_29;
                    }

                    l_1095--;
                    (*l_1082) = (*l_1013);
                }
                else
                {
                    (*l_1013) |= (-3L);
                }
                return l_1095;
            }

            ;
        }
        else
        {
            long long *l_1105 = (void*)0;
            long long **l_1104 = &l_1105;
            unsigned char l_1115 = 0xCEL;
            union U2 *l_1118 = (void*)0;
            long long *l_1129 = &g_209.f0;
            int *l_1139 = &g_255;
            unsigned l_1142 = 0xE74353DBL;
            int l_1148 = 0xB8953FF0L;
            int *l_1149 = &l_1148;
            int *l_1150 = &l_1147;
            int *l_1151 = &g_204.f0;
            int *l_1152 = &l_1148;
            int *l_1153 = &g_255;
            int *l_1154 = &l_1011;
            int *l_1155 = &g_949;
            int *l_1156 = &g_949;
            int *l_1157 = &l_1011;
            int *l_1158 = &g_949;
            int *l_1159 = &l_1148;
            int *l_1160 = &l_1086;
            int *l_1161 = &l_1086;
            int *l_1162 = &g_482;
            int *l_1163 = &l_1086;
            int *l_1164 = &l_1086;
            int *l_1165 = &l_1086;
            int l_1166 = 0x7303D86EL;
            int *l_1167 = &l_1147;
            int *l_1168 = &g_62;
            int *l_1169 = &l_1147;
            int *l_1170 = &l_1011;
            int *l_1171 = &l_1148;
            int *l_1172 = &l_1086;
            int *l_1173 = &l_1148;
            int *l_1174 = &g_255;
            int *l_1175 = &l_1166;
            int *l_1176 = &l_1166;
            int *l_1177 = &l_1011;
            int *l_1178 = (void*)0;
            int *l_1179 = &g_949;
            int *l_1180 = (void*)0;
            int *l_1181 = &g_255;
            int *l_1182 = (void*)0;
            int *l_1183 = (void*)0;
            int *l_1184 = &g_482;
            int l_1185 = 0xBA8C1E3AL;
            int *l_1186 = &g_62;
            int *l_1187 = (void*)0;
            int *l_1188 = (void*)0;
            int *l_1189 = &g_204.f0;
            int *l_1190 = &l_1011;
            int *l_1192 = &g_204.f0;
            int *l_1193 = &l_1166;
            int *l_1194 = (void*)0;
            int *l_1195 = &l_1191;
            int l_1196 = 0xFA42F33DL;
            int *l_1197 = &l_1196;
            int *l_1198 = (void*)0;
            int *l_1199 = (void*)0;
            int *l_1200 = (void*)0;
            int *l_1201 = (void*)0;
            int *l_1202 = (void*)0;
            int l_1203 = 0x6DC5C98FL;
            int *l_1204 = &l_1147;
            int *l_1205 = &l_1166;
            int *l_1206 = &g_62;
            int *l_1207 = &g_482;
            int *l_1208 = &g_482;
            int *l_1209 = &l_1090;
            int l_1210 = 1L;
            int l_1211 = 0x51D2DD17L;
            int *l_1212 = &l_1210;
            int *l_1213 = (void*)0;
            int *l_1214 = &l_1196;
            int *l_1215 = &l_1211;
            int *l_1216 = &l_1090;
            int *l_1217 = (void*)0;
            int *l_1218 = (void*)0;
            int *l_1219 = (void*)0;
            int *l_1220 = &l_1086;
            int *l_1222 = (void*)0;
            int *l_1223 = &g_482;
            int *l_1224 = &l_1086;
            int *l_1225 = &l_1191;
            int *l_1227 = &l_1196;
            int *l_1228 = &l_1166;
            int *l_1229 = &g_949;
            int *l_1230 = (void*)0;
            int *l_1231 = &l_1210;
            int *l_1232 = &l_1226;
            for (g_154.f2 = 0; (g_154.f2 >= (-4)); g_154.f2--)
            {
                union U2 l_1108 = {1UL};
                for (g_773 = (-25); (g_773 < 14); g_773 = safe_add_func_int8_t_s_s(g_773, 5))
                {
                    int l_1109 = 0xD5C908C8L;
                    unsigned *l_1110 = &l_1108.f0;
                    unsigned long long *l_1119 = &g_858;
                    (*l_1013) ^= p_29;
                    (*l_1013) &= (p_29 <= (((*l_1119) = (((safe_sub_func_int32_t_s_s((p_29 <= l_1115), 0x6551176FL)) < (*g_185)) & 0x2955086DL)) || 4L));
                    (**g_762) = &l_1090;

                    ;
                    if ((*g_61))
                        continue;
                }
                if (g_209.f2)
                    goto lbl_1120;
            }

            (*l_1013) = (safe_sub_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((((((*g_185) |= (safe_mod_func_uint64_t_u_u(18446744073709551610UL, (p_29 || 0x85B0L)))) < ((*p_32) , (((*l_1129) = (safe_lshift_func_int8_t_s_u(((*l_1013) , (-10L)), (*l_1013)))) == 0L))) & p_29) >= p_29), 3)), (*l_1037)));
            if ((l_1130 != g_1133))
            {
                (*l_1060) = &g_53;
            }
            else
            {
                int l_1134 = (-9L);
                int *l_1145 = (void*)0;
                int *l_1146 = (void*)0;
                (*g_763) = (((l_1134 || g_154.f1) , ((safe_lshift_func_int8_t_s_s((*p_32), (g_541 == 7L))) , (g_301 &= (--(*g_185))))) , l_1139);

                ;
                l_1147 ^= ((*l_1139) = (safe_add_func_uint32_t_u_u(((*l_1013) != l_1142), ((*g_61) > (~((*l_1037) &= (safe_lshift_func_uint8_t_u_s(l_1134, 6))))))));
            }
            g_1233++;
        }

        ;
        (*l_1013) = ((safe_lshift_func_int8_t_s_u((p_29 > g_62), p_29)) , (0UL ^ ((((p_29 && func_38(p_32, l_1010, (safe_lshift_func_uint8_t_u_s(((l_1012 = (l_1037 = &l_1090)) != (g_53 , &l_1086)), 3)))) && (**g_875)) & g_773) <= 0UL)));

        ;
        ;
        (*l_1013) = (*l_1013);
    }
    else
    {
        int l_1249 = 0x2170EF9FL;
        union U2 *l_1269 = (void*)0;
        int l_1348 = 0x0B4C4520L;
        int l_1420 = 6L;
        char *l_1465 = &g_769;
        unsigned l_1467 = 0UL;
        unsigned short ***l_1489 = &g_182;
        union U3 l_1534 = {0x1089L};
        unsigned short l_1535 = 0x4EB4L;
        int l_1591 = (-7L);
        int l_1653 = (-1L);
        int l_1659 = 0x545D02BAL;
        for (g_470 = 0; (g_470 <= 19); g_470 = safe_add_func_int16_t_s_s(g_470, 1))
        {
            unsigned l_1267 = 0xD11E2532L;
            short *l_1268 = &g_209.f3;
            int l_1283 = 0xD079577DL;
            int l_1284 = 0x0D12432AL;
            int l_1285 = 0x4290FE06L;
            int l_1351 = 1L;
            int l_1354 = (-3L);
            int l_1401 = 0x7159FCAEL;
            long long l_1456 = 0x2E0C5CF1A3842323LL;
            short l_1536 = 0x92CEL;
            union U0 l_1542 = {-7L};
            int *l_1544 = (void*)0;
            int *l_1545 = (void*)0;
            int *l_1546 = &g_482;
            int *l_1547 = &l_1354;
            int *l_1548 = &l_1283;
            int *l_1549 = &l_1284;
            int *l_1550 = &g_204.f0;
            int *l_1551 = &g_1221;
            int *l_1552 = (void*)0;
            int *l_1553 = &g_949;
            int *l_1554 = &g_1221;
            int *l_1555 = &l_1285;
            int *l_1556 = &g_204.f0;
            int *l_1557 = (void*)0;
            int *l_1558 = &g_949;
            int *l_1559 = (void*)0;
            int *l_1560 = &g_62;
            int *l_1561 = &l_1283;
            int *l_1562 = (void*)0;
            int *l_1563 = &l_1283;
            int *l_1564 = &l_1249;
            int *l_1565 = &l_1285;
            int *l_1566 = &l_1086;
            int *l_1567 = (void*)0;
            int *l_1568 = (void*)0;
            int *l_1569 = (void*)0;
            int *l_1570 = &l_1444;
            int *l_1571 = &g_255;
            int *l_1572 = (void*)0;
            int *l_1573 = &l_1284;
            int *l_1574 = &l_1354;
            int *l_1575 = &l_1348;
            int *l_1576 = &l_1285;
            int *l_1577 = &g_204.f0;
            int *l_1578 = &l_1011;
            int *l_1579 = &l_1348;
            int *l_1580 = &g_482;
            int *l_1581 = &l_1086;
            int *l_1582 = (void*)0;
            int *l_1583 = (void*)0;
            int *l_1584 = &g_949;
            int *l_1585 = &g_255;
            int *l_1586 = &g_949;
            int *l_1587 = &g_62;
            int *l_1588 = (void*)0;
            int *l_1589 = &l_1011;
            int *l_1590 = &g_1221;
            int *l_1592 = &g_949;
            int *l_1593 = &l_1348;
            int *l_1594 = &l_1086;
            int *l_1595 = &g_482;
            int *l_1596 = (void*)0;
            int *l_1597 = &l_1283;
            int *l_1598 = &l_1444;
            int *l_1599 = &l_1351;
            int *l_1600 = &l_1090;
            int *l_1601 = &l_1086;
            int *l_1602 = &l_1354;
            int *l_1603 = &l_1285;
            int *l_1606 = &g_62;
            int *l_1607 = &l_1444;
            int *l_1608 = &l_1285;
            int *l_1609 = (void*)0;
            int *l_1610 = &g_482;
            int *l_1611 = (void*)0;
            int *l_1612 = &l_1284;
            int *l_1613 = &l_1283;
            int *l_1614 = (void*)0;
            int *l_1615 = (void*)0;
            int *l_1616 = (void*)0;
            int *l_1617 = &g_62;
            int *l_1618 = &l_1604;
            int *l_1619 = &l_1604;
            int *l_1620 = (void*)0;
            int *l_1621 = &l_1401;
            int *l_1622 = &l_1249;
            int *l_1623 = (void*)0;
            int *l_1624 = &l_1591;
            int *l_1625 = &l_1249;
            int *l_1626 = &l_1090;
            int *l_1627 = &l_1285;
            int *l_1628 = &l_1011;
            int *l_1629 = &l_1444;
            int *l_1630 = &l_1401;
            int *l_1631 = (void*)0;
            int *l_1632 = &l_1011;
            int *l_1633 = (void*)0;
            int *l_1634 = &g_1221;
            int *l_1635 = &l_1401;
            int *l_1636 = &g_62;
            int *l_1637 = &g_204.f0;
            int *l_1638 = &l_1420;
            int *l_1639 = (void*)0;
            int *l_1640 = &g_949;
            int *l_1641 = &g_482;
            int *l_1642 = (void*)0;
            int *l_1643 = &g_62;
            int *l_1644 = (void*)0;
            int *l_1645 = &l_1284;
            int *l_1646 = &g_949;
            int *l_1647 = &g_204.f0;
            int *l_1648 = &l_1011;
            int *l_1650 = (void*)0;
            int *l_1651 = &l_1284;
            int *l_1652 = &l_1011;
            int *l_1654 = (void*)0;
            int *l_1655 = &g_255;
            int *l_1656 = &g_482;
            int *l_1658 = &l_1090;
            int *l_1660 = &l_1090;
            int *l_1661 = (void*)0;
            int *l_1662 = &l_1653;
            int *l_1663 = &l_1086;
            int *l_1664 = &l_1354;
            int *l_1665 = &l_1090;
            int *l_1666 = &l_1444;
            int *l_1667 = &l_1086;
            int *l_1668 = &l_1649;
            int *l_1670 = &l_1420;
        }
    }

    ;
    ;
    return p_29;


}







static char * func_35(char * p_36)
{
    char *l_42 = &g_8;
    int l_45 = 0xB3AE5D5EL;
    long long *l_54 = &g_55;
    unsigned *l_56 = (void*)0;
    unsigned *l_57 = (void*)0;
    unsigned *l_58 = &g_53.f0;
    unsigned short *l_64 = &g_65;
    union U0 l_66 = {-1L};
    unsigned l_67 = 0x7720F84BL;
    long long *l_320 = &l_66.f0;
    union U1 l_327 = {0x6084F89FL};
    long long l_351 = 0xBA642168D3E81342LL;
    union U2 l_390 = {0xBA828A99L};
    int l_469 = 0xA27D7E99L;
    int l_474 = 1L;
    int l_730 = 0x685B3335L;
    int l_906 = (-8L);
    int l_908 = 0x2CE39208L;
    int l_917 = 0x59814DE3L;
    unsigned long long l_957 = 8UL;
    int *l_989 = &l_469;
    int *l_990 = &l_469;
    int *l_991 = &l_917;
    int *l_992 = (void*)0;
    int *l_993 = &g_482;
    int *l_994 = (void*)0;
    int *l_995 = &l_908;
    int *l_996 = &g_255;
    int *l_997 = (void*)0;
    int *l_998 = &l_730;
    int *l_999 = &l_45;
    int *l_1000 = &g_255;
    int *l_1001 = &l_469;
    int *l_1002 = (void*)0;
    int *l_1003 = &l_906;
    unsigned l_1004 = 18446744073709551615UL;
    if (func_38(l_42, (((*l_64) &= (safe_add_func_int64_t_s_s(l_45, func_46(l_45, g_51, (g_52 , ((*l_58) = (g_8 < ((g_53 , ((*l_54) = (g_53.f0 ^ l_45))) > g_8)))), l_45)))) , l_66), l_67))
    {
        int *l_272 = &g_62;
        int **l_273 = &g_61;
        union U1 l_292 = {-7L};
        char *l_307 = &g_209.f2;
        long long *l_321 = &l_66.f0;
        (*g_61) = ((1L != func_38(&g_8, g_209, l_66.f2)) & 0x9826L);
lbl_322:
        (*l_273) = l_272;

        ;
        if ((*g_61))
        {
            char l_274 = 0x2BL;
            unsigned *l_303 = &g_53.f0;
            if (((*g_61) < l_274))
            {
                char **l_278 = &l_42;
                char *l_280 = &g_8;
                char **l_279 = &l_280;
                int l_281 = (-1L);
                int *l_282 = (void*)0;
                int *l_283 = &g_255;
                int *l_284 = &l_281;
                union U0 *l_297 = (void*)0;
                (*l_284) = ((*l_283) = ((*g_61) = (safe_lshift_func_int8_t_s_s((*p_36), ((((void*)0 == (*g_182)) & (*g_183)) , (l_66.f2 != func_38(((*l_279) = ((*l_278) = (g_277 = p_36))), l_66, l_281)))))));

                ;
                (*l_284) &= ((*l_272) = (safe_lshift_func_int8_t_s_s((-10L), ((*l_283) = (safe_unary_minus_func_uint64_t_u((safe_sub_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((l_292 , (safe_sub_func_uint16_t_u_u((**l_273), (*g_51)))), (*l_272))), (safe_sub_func_uint32_t_u_u(g_53.f0, (l_297 == &l_66)))))))))));
                (*l_283) ^= 0x03560D2BL;
            }
            else
            {
                unsigned char *l_300 = &g_301;
                union U2 l_302 = {0x375AD3DDL};
                unsigned *l_306 = &l_302.f0;
                (*l_272) = (((0xE4L | ((*l_300) = ((*g_185) ^= (safe_rshift_func_int16_t_s_u(l_67, 0))))) , (l_302 , l_303)) == ((((*g_183)--) == (*l_272)) , l_306));
                return p_36;


            }

            ;
            return l_307;


        }
        else
        {
            char **l_315 = &l_42;
            for (g_140 = 0; (g_140 < 33); g_140 = safe_add_func_uint32_t_u_u(g_140, 9))
            {
                union U2 *l_311 = &g_53;
                union U2 **l_310 = &l_311;
                int *l_312 = &l_45;
                (*l_310) = &g_53;
                (*l_273) = l_312;

                ;
            }

            ;
            l_45 = (4294967287UL ^ (safe_add_func_int32_t_s_s((((*l_315) = p_36) != &g_8), 0xB7BDAAF6L)));
            (*l_272) = (l_66.f2 != ((--g_189) < (func_46((*l_272), l_64, ((*l_58) = (**l_273)), g_301) & (safe_rshift_func_int16_t_s_s((l_320 == (g_120 , l_321)), 3)))));
        }

        ;
        if (l_45)
            goto lbl_322;
    }
    else
    {
        char *l_328 = (void*)0;
        union U0 l_329 = {3L};
        union U0 *l_333 = (void*)0;
        int l_349 = 0L;
        short *l_367 = &g_52;
        unsigned l_486 = 0x37DDA91CL;
        char l_584 = 0x71L;
        int l_588 = 0xAC7301CDL;
        int *l_589 = &g_255;
        if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u((g_154 , 65535UL), (func_38((l_327 , l_328), l_329, (*g_183)) ^ ((l_329.f2 & l_327.f2) | l_329.f2)))), 0x51L)))
        {
            unsigned char l_338 = 1UL;
            union U0 l_339 = {3L};
            union U3 l_365 = {65535UL};
            int *l_370 = &g_255;
            union U2 l_495 = {4294967295UL};
            long long **l_496 = &l_54;
            long long *l_497 = &g_171;
            for (g_154.f1 = 0; (g_154.f1 >= 11); g_154.f1 = safe_add_func_int64_t_s_s(g_154.f1, 4))
            {
                unsigned short l_348 = 8UL;
                short *l_350 = &l_327.f1;
                unsigned l_352 = 0xE45068F4L;
                char l_374 = (-9L);
                l_333 = g_332;

                ;
            }

                        ;
            for (g_204.f0 = 22; (g_204.f0 > (-20)); g_204.f0--)
            {
                int **l_377 = &l_370;
                unsigned char l_393 = 255UL;
                int l_419 = 0xEDEC9501L;
                unsigned l_423 = 8UL;
                short *l_490 = &g_154.f3;
                int *l_491 = (void*)0;
                int *l_492 = &l_474;
                (*l_377) = &g_62;

                ;
                for (g_186 = 25; (g_186 == 56); g_186++)
                {
                    unsigned char l_385 = 0x0AL;
                    union U2 *l_391 = &g_53;
                    unsigned l_420 = 0xBEA66983L;
                    int l_456 = 0x7E33F6FDL;
                    (*l_370) = ((*g_51) <= l_67);
                    (*l_370) = (((g_204.f2 < (((void*)0 == p_36) >= l_329.f3)) , ((safe_rshift_func_int16_t_s_s((safe_unary_minus_func_uint32_t_u(((((l_329.f0 || (safe_rshift_func_uint8_t_u_s((l_385 | (1UL & (((*l_64) ^= 0UL) , l_66.f3))), 4))) != 0x46L) > (**l_377)) != (-2L)))), l_329.f2)) & l_66.f0)) | l_385);
                    if ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint8_t_u_s((~(*g_185)), l_351)), (((0x8E5FL & (l_327.f0 |= ((((*l_391) = l_390) , ((*l_370) = (g_392 < (l_393 <= ((safe_mod_func_uint8_t_u_u((safe_mod_func_int64_t_s_s((g_55 |= ((*g_183) & ((((0x316BE27C55D314EDLL > (((l_329.f3 != (*l_370)) == (*p_36)) & 0x2E7404A6E0F1F1B9LL)) , (*g_61)) , (**l_377)) > (**g_182)))), g_204.f1)), (*g_185))) > (*g_51)))))) || l_385))) < 0xD2ED5C3192946A0ALL) < l_329.f2))))
                    {
                        int *l_398 = (void*)0;
                        int *l_399 = &g_62;
                        int *l_400 = &l_349;
                        int *l_401 = (void*)0;
                        int *l_402 = (void*)0;
                        int *l_403 = &l_349;
                        int *l_404 = &g_255;
                        int *l_405 = &g_62;
                        int *l_406 = &l_327.f0;
                        int *l_407 = &l_45;
                        int *l_408 = &l_349;
                        int *l_409 = &g_62;
                        int *l_410 = &l_45;
                        int *l_411 = &g_255;
                        int *l_412 = (void*)0;
                        int *l_413 = &g_62;
                        int *l_414 = &g_62;
                        int *l_415 = &l_327.f0;
                        int *l_416 = &g_62;
                        int *l_417 = &g_255;
                        int *l_418 = &g_255;
                        if (l_66.f2)
                            break;
                        l_420--;
                    }
                    else
                    {
                        short l_426 = (-6L);
                        int *l_427 = &l_419;
                        int *l_428 = &l_45;
                        int *l_429 = &g_62;
                        int *l_430 = &l_419;
                        int *l_431 = (void*)0;
                        int *l_432 = &g_255;
                        int *l_433 = &l_45;
                        int *l_434 = &g_62;
                        int *l_435 = &l_349;
                        int *l_436 = &g_255;
                        int *l_437 = &g_255;
                        int *l_438 = &l_327.f0;
                        int *l_439 = &l_349;
                        int *l_440 = &l_349;
                        int *l_441 = &l_327.f0;
                        int *l_442 = &l_419;
                        int *l_443 = &g_255;
                        int *l_444 = &l_419;
                        int *l_445 = &l_419;
                        int *l_446 = &l_349;
                        int *l_447 = &l_45;
                        int *l_448 = &g_255;
                        int l_449 = 0x98EBF401L;
                        int *l_450 = &l_349;
                        int *l_451 = &l_449;
                        int *l_452 = &l_45;
                        int *l_453 = &l_419;
                        int *l_454 = &l_449;
                        int *l_455 = &l_449;
                        int *l_457 = &l_45;
                        int *l_458 = &l_45;
                        int *l_459 = &l_419;
                        int *l_460 = &l_456;
                        int *l_461 = &g_255;
                        int *l_462 = (void*)0;
                        int *l_463 = &l_349;
                        int *l_464 = (void*)0;
                        int *l_465 = &l_449;
                        int *l_466 = &l_45;
                        int *l_467 = &l_419;
                        int *l_468 = &l_349;
                        int *l_471 = &l_456;
                        int *l_472 = &l_469;
                        int *l_473 = &l_456;
                        int *l_475 = &l_419;
                        int *l_476 = &l_327.f0;
                        int *l_477 = &l_449;
                        int *l_478 = &l_349;
                        int *l_479 = &l_474;
                        int *l_480 = &l_456;
                        int *l_481 = &g_255;
                        int *l_483 = &l_474;
                        int *l_484 = &l_45;
                        int *l_485 = (void*)0;
                        ++l_423;
                        (**l_377) = (((*g_51) ^ ((**l_377) || (*l_370))) >= l_426);
                        l_486++;
                    }
                    if (l_456)
                    {
                        int *l_489 = &l_456;
                        (*l_489) &= (*g_61);
                        if ((*g_61))
                            continue;
                        return p_36;


                    }
                    else
                    {
                        (*l_377) = (l_420 , (*l_377));
                    }
                }
                (*l_492) ^= func_46(g_154.f2, l_490, (*l_370), (*l_370));
                (*g_61) = ((g_209.f0 && (l_66.f0 < (((g_209.f3 ^ ((**l_377) , (safe_lshift_func_uint8_t_u_u(l_329.f2, 0)))) , l_329.f3) , (g_61 != l_492)))) >= (l_495 , (*l_370)));
            }

            ;
            (*g_61) = ((((*l_496) = &g_55) == l_497) , (*l_370));
        }
        else
        {
            int **l_498 = &g_61;
            (*l_498) = &l_349;

            ;
            if (l_329.f0)
            {
                (*l_498) = &g_255;

                ;
                (*l_498) = &g_482;

                ;
                return &g_122;


            }
            else
            {
                int l_503 = 0x367E7310L;
                short l_516 = 1L;
                int l_539 = 0x7FE94AFAL;
                int l_542 = 4L;
                int l_567 = 4L;
                unsigned *l_585 = (void*)0;
                unsigned *l_586 = (void*)0;
                unsigned *l_587 = &g_392;
                for (g_257 = 0; (g_257 < 48); g_257 = safe_add_func_uint32_t_u_u(g_257, 8))
                {
                    char l_515 = (-1L);
                    int l_517 = 0xDDC7D824L;
                    int *l_521 = (void*)0;
                    int *l_522 = &l_45;
                    int *l_523 = &l_517;
                    int *l_524 = &l_503;
                    int *l_525 = &l_469;
                    int *l_526 = &l_349;
                    int *l_527 = &l_327.f0;
                    int *l_528 = &l_517;
                    int *l_529 = &l_327.f0;
                    int *l_530 = &l_349;
                    int *l_531 = (void*)0;
                    int *l_532 = (void*)0;
                    int *l_533 = &l_474;
                    int *l_534 = &g_204.f0;
                    int *l_535 = (void*)0;
                    int *l_536 = (void*)0;
                    int *l_537 = &l_517;
                    int *l_538 = &l_469;
                    int *l_543 = &g_255;
                    int *l_544 = &g_204.f0;
                    int *l_545 = &g_255;
                    int *l_546 = (void*)0;
                    int *l_547 = &g_204.f0;
                    int *l_548 = (void*)0;
                    int *l_549 = &l_327.f0;
                    int *l_550 = &l_539;
                    int *l_551 = &l_474;
                    int *l_552 = &l_517;
                    int *l_553 = &l_327.f0;
                    int *l_554 = &g_204.f0;
                    int *l_555 = &g_255;
                    int *l_557 = &l_327.f0;
                    int *l_558 = &l_542;
                    int *l_559 = &l_349;
                    int *l_560 = &g_255;
                    int *l_561 = &l_469;
                    int *l_562 = &l_539;
                    int *l_563 = (void*)0;
                    int *l_564 = &l_539;
                    int *l_565 = &g_255;
                    int *l_566 = &l_539;
                    int l_568 = 0xB1655B86L;
                    int *l_569 = &l_568;
                    int *l_570 = &l_45;
                    int l_571 = 5L;
                    int *l_572 = &l_45;
                    int *l_573 = &l_45;
                    int *l_574 = &g_62;
                    for (g_204.f2 = 0; (g_204.f2 <= 37); g_204.f2 = safe_add_func_uint64_t_u_u(g_204.f2, 3))
                    {
                        unsigned long long *l_504 = &g_89;
                        short *l_505 = (void*)0;
                        int *l_518 = &l_503;
                        l_517 = func_46(((*l_504) = l_503), l_505, g_62, ((safe_rshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((safe_unary_minus_func_uint32_t_u((safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s((l_515 | ((**l_498) == l_516)), l_66.f2)), (l_474 <= l_516))))), 0xCAL)), l_516)) <= (**l_498)));
                        (*l_498) = (*l_498);
                        (*l_498) = l_518;

                        ;
                        (*l_518) = (l_517 < (g_52 , ((*l_58) &= l_329.f2)));
                    }

                                        for (l_517 = 0; (l_517 > 15); l_517 = safe_add_func_int16_t_s_s(l_517, 8))
                    {
                        (*l_498) = (*l_498);
                        return &g_122;



                    }
                    g_575++;
                    for (g_154.f3 = 18; (g_154.f3 == (-20)); --g_154.f3)
                    {
                        (*l_498) = &l_349;

                        ;
                        return p_36;



                    }

                                    }

                ;
                l_588 &= (((*l_587) = ((((safe_lshift_func_uint16_t_u_u(l_542, l_390.f0)) , l_539) & func_38(&g_470, l_329, ((*l_64) |= ((*g_332) , func_46((safe_rshift_func_int8_t_s_s(l_584, ((*g_61) <= (func_38(p_36, l_66, (**g_182)) > l_567)))), &l_516, (**l_498), (**l_498)))))) ^ l_390.f0)) , 0L);
            }


        }


        ;
        l_588 = ((*l_589) = ((p_36 == (void*)0) == ((*g_51) <= (1UL && (*g_277)))));
    }


    for (g_154.f3 = 23; (g_154.f3 > (-3)); g_154.f3 = safe_sub_func_uint8_t_u_u(g_154.f3, 1))
    {
        int *l_592 = &l_327.f0;
        int l_602 = 0x622A05F7L;
        int l_637 = 0xACD0A6EEL;
        union U2 l_657 = {1UL};
        short *l_663 = &l_327.f1;
        union U0 *l_723 = &l_66;
        int ***l_764 = (void*)0;
        unsigned l_766 = 8UL;
        int l_813 = 0xE2FEDE1CL;
        int l_844 = 0x2656696DL;
        int l_857 = 9L;
        char *l_864 = &g_769;
        (*l_592) ^= l_351;
        if (l_327.f1)
            continue;
        if ((*l_592))
        {
            int *l_593 = &g_204.f0;
            int *l_594 = &l_469;
            int *l_595 = &l_474;
            int *l_596 = &g_204.f0;
            int *l_597 = &l_474;
            int *l_598 = &g_482;
            int *l_599 = &g_482;
            int *l_600 = &l_45;
            int *l_601 = &l_474;
            int *l_603 = &l_474;
            int *l_604 = &g_62;
            int *l_605 = &l_602;
            int *l_606 = &l_474;
            int *l_607 = &g_482;
            int *l_608 = &g_62;
            int *l_609 = &g_482;
            int *l_610 = &g_255;
            int l_611 = (-7L);
            int *l_612 = (void*)0;
            int *l_613 = (void*)0;
            int *l_614 = (void*)0;
            int *l_615 = (void*)0;
            int *l_616 = (void*)0;
            int *l_617 = &g_204.f0;
            int *l_618 = &g_255;
            int *l_619 = &g_62;
            int *l_620 = &g_62;
            int l_621 = 0x8A35FD44L;
            int *l_622 = &g_482;
            int *l_623 = (void*)0;
            int *l_624 = &l_474;
            int l_625 = 0xA3DFBA84L;
            int *l_626 = &l_602;
            int *l_627 = &l_45;
            int *l_628 = &g_204.f0;
            int *l_629 = &g_482;
            int *l_630 = &g_62;
            int *l_631 = &g_255;
            int *l_632 = &l_611;
            int *l_633 = &g_255;
            int *l_634 = &l_621;
            int *l_635 = (void*)0;
            int *l_636 = &l_327.f0;
            int *l_638 = &l_637;
            int *l_639 = &g_204.f0;
            int *l_640 = &l_474;
            int *l_641 = &g_204.f0;
            int *l_642 = &l_611;
            int *l_643 = (void*)0;
            long long l_647 = 1L;
            union U2 l_654 = {0UL};
            union U0 l_655 = {1L};
            union U3 l_758 = {5UL};
            int l_812 = 0x0F2893CDL;
            char *l_876 = &g_736;
            unsigned short *l_878 = &g_750;
            int *l_960 = &l_857;
            union U1 *l_968 = &l_327;
            unsigned char l_973 = 0x13L;
            g_644--;
            if (((*l_596) = (((void*)0 != &g_182) >= g_540)))
            {
                if (l_647)
                    break;
            }
            else
            {
                char l_656 = 0x1AL;
                int l_669 = 0L;
                int l_688 = (-1L);
                short l_708 = 0x4344L;
                int l_905 = 0x95E8D6A0L;
                if ((safe_sub_func_int16_t_s_s((*l_601), (((safe_mod_func_int8_t_s_s(0xBEL, (l_654 , (*p_36)))) == (func_38(&g_556, ((*g_332) = l_655), l_656) < (l_469 = (l_657 , (*p_36))))) & (*g_277)))))
                {
                    long long l_660 = 0x670EDC74811CE01DLL;
                    short **l_664 = &g_51;
                    int l_667 = 0x23015230L;
                    int l_668 = 8L;
                    int l_676 = (-2L);
                    int l_677 = 0x74F2756BL;
                    int l_707 = 1L;
                    union U0 l_811 = {0xC3C87BAB5F643539LL};
                    (*l_641) &= ((l_660 = ((safe_sub_func_uint8_t_u_u(l_656, 0x65L)) , 1L)) , 0x0C40EB8FL);
                    if ((safe_add_func_int8_t_s_s((*p_36), ((g_204 , (((*l_632) = (*l_624)) >= ((l_656 > (l_469 , g_665)) < 0x26790ED09D8D0A3ELL))) != 7UL))))
                    {
                        char l_666 = 0x0FL;
                        int *l_670 = &l_669;
                        int *l_671 = &l_621;
                        int *l_672 = &l_327.f0;
                        int *l_673 = &g_204.f0;
                        int *l_674 = (void*)0;
                        int *l_675 = &g_482;
                        int *l_678 = &l_669;
                        int *l_679 = (void*)0;
                        int *l_680 = &l_611;
                        int *l_681 = &g_255;
                        int *l_682 = &g_482;
                        int *l_683 = &l_677;
                        int *l_684 = (void*)0;
                        int *l_685 = &l_668;
                        int *l_686 = (void*)0;
                        int *l_687 = &g_255;
                        int *l_689 = &l_676;
                        int *l_690 = (void*)0;
                        int *l_691 = &g_482;
                        int *l_692 = (void*)0;
                        int *l_693 = &l_602;
                        int *l_694 = &l_474;
                        int *l_695 = &l_677;
                        int *l_696 = (void*)0;
                        int *l_698 = &l_676;
                        int *l_699 = &l_602;
                        int *l_700 = &l_668;
                        int *l_702 = &l_688;
                        int *l_703 = &l_667;
                        int l_704 = 0xA0E59066L;
                        int *l_705 = &l_668;
                        int *l_706 = &l_688;
                        int *l_709 = (void*)0;
                        int *l_710 = &g_482;
                        int *l_711 = (void*)0;
                        int *l_712 = &l_669;
                        int l_713 = 0x5B65FB09L;
                        int *l_714 = (void*)0;
                        int *l_715 = &l_602;
                        int *l_716 = &l_713;
                        int *l_717 = &l_677;
                        int *l_718 = &l_713;
                        int *l_719 = &l_667;
                        ++g_720;
                        l_688 = (255UL | ((l_723 != &g_209) | (*l_628)));
                    }
                    else
                    {
                        int **l_724 = &l_627;
                        int *l_725 = (void*)0;
                        int *l_727 = &l_611;
                        int *l_728 = &l_637;
                        int *l_729 = &g_62;
                        int *l_731 = &l_730;
                        int *l_732 = &l_730;
                        int *l_733 = &l_327.f0;
                        int *l_734 = &l_474;
                        int *l_735 = &l_667;
                        int *l_737 = &g_482;
                        int *l_738 = &l_730;
                        int *l_739 = &g_204.f0;
                        int *l_740 = &l_730;
                        int *l_741 = &l_669;
                        int *l_742 = &l_611;
                        int *l_743 = &l_474;
                        int *l_744 = &l_602;
                        int *l_745 = &l_625;
                        int *l_746 = &l_621;
                        int *l_747 = &l_474;
                        int *l_748 = &g_62;
                        int *l_749 = &l_637;
                        (*l_724) = &g_62;

                        ;
                        (*l_592) = ((*l_605) = (*l_592));
                        g_750++;
                    }

                    ;
                    if (l_688)
                    {
                        unsigned char l_761 = 0xA4L;
                        unsigned long long *l_765 = &g_189;
                        unsigned long long *l_767 = (void*)0;
                        unsigned long long *l_768 = &g_89;
                        unsigned char l_770 = 253UL;
                        int l_771 = 0xDA103A0FL;
                        int *l_775 = &l_611;
                        int *l_776 = (void*)0;
                        int *l_777 = (void*)0;
                        int *l_778 = &l_637;
                        int *l_779 = &l_771;
                        int *l_780 = (void*)0;
                        int *l_781 = &l_621;
                        int *l_782 = &l_625;
                        int *l_783 = &g_482;
                        int *l_784 = &l_637;
                        int *l_785 = (void*)0;
                        int *l_786 = (void*)0;
                        int *l_787 = (void*)0;
                        int *l_788 = &l_677;
                        int *l_789 = &g_482;
                        int *l_790 = &g_482;
                        int *l_791 = &l_637;
                        int *l_792 = &l_469;
                        int *l_793 = (void*)0;
                        int *l_794 = &l_602;
                        int *l_795 = &l_611;
                        int *l_796 = &l_669;
                        int *l_797 = &l_637;
                        int *l_798 = &l_469;
                        int *l_799 = &l_637;
                        int *l_800 = &g_62;
                        int *l_801 = &g_204.f0;
                        int *l_802 = &g_204.f0;
                        int *l_803 = &g_255;
                        int *l_804 = (void*)0;
                        union U0 l_810 = {0x9BB694883F7417FCLL};
                        int *l_814 = &l_45;
                        int *l_815 = &l_668;
                        int *l_816 = &l_621;
                        int *l_817 = &l_676;
                        int *l_818 = &l_771;
                        int *l_819 = &l_469;
                        int *l_820 = &l_602;
                        int *l_821 = &l_637;
                        int *l_822 = &l_602;
                        int *l_823 = &l_611;
                        int *l_824 = (void*)0;
                        int *l_825 = (void*)0;
                        int *l_826 = &g_482;
                        int *l_827 = (void*)0;
                        int *l_828 = &l_688;
                        int *l_829 = &g_62;
                        int *l_830 = (void*)0;
                        int *l_831 = &l_771;
                        int *l_832 = &l_611;
                        int *l_833 = &l_676;
                        int *l_834 = &g_482;
                        int *l_835 = &l_602;
                        int *l_836 = (void*)0;
                        int *l_837 = &l_327.f0;
                        int *l_838 = (void*)0;
                        int *l_839 = &l_611;
                        int *l_840 = &l_707;
                        int *l_841 = (void*)0;
                        int *l_842 = &l_611;
                        int *l_843 = &l_677;
                        int *l_845 = (void*)0;
                        int *l_846 = &l_730;
                        int *l_847 = &l_771;
                        int *l_848 = &l_637;
                        int *l_849 = &l_327.f0;
                        int *l_850 = &l_327.f0;
                        int *l_851 = &l_676;
                        int *l_852 = &l_621;
                        int *l_853 = &l_707;
                        int *l_854 = &g_482;
                        int *l_855 = (void*)0;
                        int *l_856 = &l_812;
                        (*l_633) = (safe_sub_func_int8_t_s_s((safe_add_func_uint32_t_u_u(((safe_unary_minus_func_int16_t_s(func_38(&g_540, (*g_332), (*g_183)))) , ((l_688 != g_644) && 0L)), l_770)), (*g_185)));
                        g_805++;
                        (*l_791) = (safe_mod_func_uint8_t_u_u(func_38((g_277 = l_42), (*g_332), (func_38(p_36, l_810, func_38(p_36, ((*l_723) = l_811), (*l_781))) | l_656)), l_708));

                        ;
                        --g_858;
                    }
                    else
                    {
                        unsigned long long l_863 = 1UL;
                        l_863 &= ((*l_622) = (safe_sub_func_int8_t_s_s((g_540 != (*l_624)), 0x4DL)));
                    }

                    ;
                    return l_864;



                }
                else
                {
                    unsigned char l_865 = 0x1CL;
                    unsigned long long *l_868 = &g_858;
                    l_865 |= (l_654 , 0x651F1FFBL);
                    (**g_762) = &l_625;

                    ;
                    (*l_619) ^= func_46(((l_876 = ((((g_89 = (((*p_36) == (safe_rshift_func_uint16_t_u_u(func_46(((*l_868) ^= ((void*)0 == &g_805)), l_64, (safe_sub_func_int64_t_s_s(g_772, (safe_lshift_func_int16_t_s_s(0x1293L, 5)))), (safe_lshift_func_int8_t_s_s(((g_875 = &g_277) != &g_277), func_46((((((g_255 , g_8) , l_708) && (-5L)) < (***g_762)) , 0x6A83A9B56FADF87CLL), l_64, g_171, g_805)))), 13))) && (*l_594))) == l_351) , g_154) , (*g_875))) != p_36), &g_774, (*l_592), (*l_592));

                    ;
                    (*l_630) = func_46(((~(*g_51)) , (safe_unary_minus_func_int32_t_s((l_878 == l_878)))), &g_246, g_120, l_865);
                }

                ;
                ;
                if (l_708)
                    break;

                if ((+((void*)0 == (*g_763))))
                {
                    long long l_879 = 0xF5745F8BEFAD5F02LL;
                    int l_880 = 9L;
                    int *l_881 = &g_204.f0;
                    int *l_882 = &l_688;
                    int *l_883 = &l_327.f0;
                    int *l_884 = &l_688;
                    int *l_885 = &l_625;
                    int *l_886 = (void*)0;
                    int *l_887 = &l_602;
                    int *l_888 = (void*)0;
                    int *l_889 = &l_637;
                    int *l_890 = &g_62;
                    int *l_891 = &l_637;
                    int *l_892 = &l_812;
                    int *l_893 = &g_482;
                    int *l_894 = &g_62;
                    int *l_895 = &l_880;
                    int *l_896 = &l_45;
                    int *l_897 = (void*)0;
                    int *l_898 = &l_474;
                    int *l_899 = &l_812;
                    int *l_900 = &l_812;
                    int *l_901 = &l_469;
                    int *l_902 = &l_880;
                    int *l_903 = &l_611;
                    int *l_904 = &l_637;
                    int *l_907 = (void*)0;
                    int *l_909 = (void*)0;
                    int *l_910 = &l_812;
                    int *l_911 = &l_813;
                    int *l_912 = &l_857;
                    int *l_913 = (void*)0;
                    int *l_914 = (void*)0;
                    int *l_915 = &l_905;
                    int *l_916 = &l_813;
                    int *l_918 = &l_625;
                    int *l_919 = (void*)0;
                    int *l_920 = &l_474;
                    int *l_922 = &l_917;
                    int *l_923 = &l_844;
                    int *l_924 = &l_327.f0;
                    int *l_926 = (void*)0;
                    int *l_927 = &g_482;
                    int *l_928 = &g_62;
                    int *l_929 = (void*)0;
                    int *l_930 = (void*)0;
                    int *l_931 = &g_255;
                    int *l_933 = &l_611;
                    int *l_934 = &l_905;
                    int *l_935 = &l_602;
                    int *l_936 = &l_844;
                    int l_937 = 0xF45BC2F7L;
                    int *l_938 = &l_327.f0;
                    int *l_939 = &l_602;
                    int *l_940 = &l_621;
                    int *l_941 = &l_611;
                    int *l_942 = &l_327.f0;
                    int *l_943 = &l_621;
                    int *l_944 = &l_327.f0;
                    int *l_945 = &l_857;
                    int *l_946 = &g_62;
                    int *l_947 = &l_637;
                    int *l_948 = &l_813;
                    int l_950 = 0x1965B5E9L;
                    int *l_951 = &l_950;
                    int *l_952 = (void*)0;
                    int *l_953 = &l_812;
                    int *l_954 = &l_45;
                    int *l_955 = &l_857;
                    int *l_956 = &l_637;
                    l_957++;
                    l_596 = (*g_763);

                    ;
                    (*g_763) = l_960;

                    ;
                }
                else
                {
                    short *l_964 = (void*)0;
                    for (g_805 = 0; (g_805 <= 8); g_805++)
                    {
                        short l_963 = (-1L);
                        int l_965 = 1L;
                        l_965 |= func_46(l_963, l_964, g_209.f2, l_905);
                    }
                    (*g_763) = &l_906;

                    ;
                }

                ;
                ;
            }


            ;
            ;
            for (g_949 = 0; (g_949 > (-21)); g_949 = safe_sub_func_uint8_t_u_u(g_949, 6))
            {
                union U1 *l_969 = (void*)0;
                unsigned long long *l_975 = (void*)0;
                unsigned long long **l_974 = &l_975;
                unsigned char l_977 = 1UL;
                (*l_639) = l_351;
                l_969 = l_968;

                ;
                for (g_301 = (-1); (g_301 == 40); g_301 = safe_add_func_uint16_t_u_u(g_301, 3))
                {
                    long long l_972 = 1L;
                    unsigned long long ***l_976 = &l_974;
                    l_973 = l_972;
                    (*l_976) = l_974;
                    (*l_627) = (~l_977);
                    (*l_592) = ((safe_rshift_func_uint8_t_u_u((*g_185), 4)) & 0x78L);
                }
                if ((*l_592))
                    continue;
            }
        }
        else
        {
            int l_980 = 0xA3F10614L;
            l_980 = (l_980 & (safe_mod_func_uint32_t_u_u(((*l_58) = (0x20DEF0B04DB3EDBCLL ^ func_38(p_36, (*g_332), (safe_rshift_func_uint8_t_u_s(l_66.f2, 6))))), (*l_592))));
        }


        (**g_762) = &l_730;

        ;
    }


        (*l_989) = ((1UL >= ((*g_185) ^= ((*p_36) == ((((**g_875) = l_327.f1) || ((safe_add_func_int64_t_s_s((safe_lshift_func_int16_t_s_s(((l_327 , 255UL) >= (((**g_875) = l_351) >= ((l_957 >= (~l_469)) == l_390.f0))), 1)), l_906)) >= 0xA893L)) || l_917)))) && l_730);
    l_1004--;
    return p_36;



}







static int func_38(char * p_39, union U0 p_40, unsigned short p_41)
{
    unsigned *l_80 = &g_53.f0;
    int l_118 = 0xD501105CL;
    short **l_205 = &g_51;
    for (g_55 = 0; (g_55 >= 24); g_55 = safe_add_func_int64_t_s_s(g_55, 1))
    {
        int *l_151 = &l_118;
        unsigned long long *l_155 = &g_89;
        unsigned short *l_173 = &g_65;
        unsigned short **l_172 = &l_173;
        unsigned l_197 = 0x6C064F7AL;
        unsigned long long l_237 = 0xAB8F038425995402LL;
        for (g_62 = (-22); (g_62 > 22); g_62++)
        {
            unsigned *l_72 = (void*)0;
            unsigned short *l_75 = &g_65;
            int l_87 = 0x7BC07E7FL;
            unsigned long long *l_88 = &g_89;
            unsigned short *l_90 = &g_91;
            int l_126 = 0xD5381D84L;
            int *l_145 = (void*)0;
            int *l_146 = &l_126;
            short l_216 = 0x4BA4L;
            short **l_219 = &g_51;
            union U0 *l_271 = &g_209;
            union U0 **l_270 = &l_271;
        }
    }
    return l_118;
}







static long long func_46(unsigned long long p_47, short * p_48, unsigned p_49, unsigned p_50)
{
    for (g_52 = 0; (g_52 == 1); g_52++)
    {
        int **l_63 = &g_61;
        (*l_63) = g_61;
    }
    (*g_61) = (*g_61);
    return p_50;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_52, "g_52", print_hash_value);
    transparent_crc(g_53.f0, "g_53.f0", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_62, "g_62", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_89, "g_89", print_hash_value);
    transparent_crc(g_91, "g_91", print_hash_value);
    transparent_crc(g_116, "g_116", print_hash_value);
    transparent_crc(g_120, "g_120", print_hash_value);
    transparent_crc(g_122, "g_122", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_154.f0, "g_154.f0", print_hash_value);
    transparent_crc(g_154.f3, "g_154.f3", print_hash_value);
    transparent_crc(g_171, "g_171", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_189, "g_189", print_hash_value);
    transparent_crc(g_204.f0, "g_204.f0", print_hash_value);
    transparent_crc(g_204.f1, "g_204.f1", print_hash_value);
    transparent_crc(g_204.f2, "g_204.f2", print_hash_value);
    transparent_crc(g_209.f0, "g_209.f0", print_hash_value);
    transparent_crc(g_209.f2, "g_209.f2", print_hash_value);
    transparent_crc(g_209.f3, "g_209.f3", print_hash_value);
    transparent_crc(g_246, "g_246", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    transparent_crc(g_257, "g_257", print_hash_value);
    transparent_crc(g_301, "g_301", print_hash_value);
    transparent_crc(g_392, "g_392", print_hash_value);
    transparent_crc(g_470, "g_470", print_hash_value);
    transparent_crc(g_482, "g_482", print_hash_value);
    transparent_crc(g_540, "g_540", print_hash_value);
    transparent_crc(g_541, "g_541", print_hash_value);
    transparent_crc(g_556, "g_556", print_hash_value);
    transparent_crc(g_575, "g_575", print_hash_value);
    transparent_crc(g_644, "g_644", print_hash_value);
    transparent_crc(g_665, "g_665", print_hash_value);
    transparent_crc(g_697, "g_697", print_hash_value);
    transparent_crc(g_701, "g_701", print_hash_value);
    transparent_crc(g_720, "g_720", print_hash_value);
    transparent_crc(g_726, "g_726", print_hash_value);
    transparent_crc(g_736, "g_736", print_hash_value);
    transparent_crc(g_750, "g_750", print_hash_value);
    transparent_crc(g_769, "g_769", print_hash_value);
    transparent_crc(g_772, "g_772", print_hash_value);
    transparent_crc(g_773, "g_773", print_hash_value);
    transparent_crc(g_774, "g_774", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_858, "g_858", print_hash_value);
    transparent_crc(g_921, "g_921", print_hash_value);
    transparent_crc(g_925, "g_925", print_hash_value);
    transparent_crc(g_932, "g_932", print_hash_value);
    transparent_crc(g_949, "g_949", print_hash_value);
    transparent_crc(g_1035, "g_1035", print_hash_value);
    transparent_crc(g_1221, "g_1221", print_hash_value);
    transparent_crc(g_1233, "g_1233", print_hash_value);
    transparent_crc(g_1417, "g_1417", print_hash_value);
    transparent_crc(g_1422, "g_1422", print_hash_value);
    transparent_crc(g_1431, "g_1431", print_hash_value);
    transparent_crc(g_1441, "g_1441", print_hash_value);
    transparent_crc(g_1540.f2, "g_1540.f2", print_hash_value);
    transparent_crc(g_1669, "g_1669", print_hash_value);
    transparent_crc(g_1671, "g_1671", print_hash_value);
    transparent_crc(g_1694, "g_1694", print_hash_value);
    transparent_crc(g_1703, "g_1703", print_hash_value);
    transparent_crc(g_1832, "g_1832", print_hash_value);
    transparent_crc(g_1873, "g_1873", print_hash_value);
    transparent_crc(g_1945, "g_1945", print_hash_value);
    transparent_crc(g_1978, "g_1978", print_hash_value);
    transparent_crc(g_1994, "g_1994", print_hash_value);
    transparent_crc(g_2249, "g_2249", print_hash_value);
    transparent_crc(g_2254, "g_2254", print_hash_value);
    transparent_crc(g_2328, "g_2328", print_hash_value);
    transparent_crc(g_2661, "g_2661", print_hash_value);
    transparent_crc(g_2664, "g_2664", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
