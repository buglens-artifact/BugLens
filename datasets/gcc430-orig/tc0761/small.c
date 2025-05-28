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
   int f1;
   short f2;
   long long f3;
   int f4;
};

union U1 {
   int f0;
   unsigned f1;
   int f2;
   unsigned f3;
};


static unsigned g_14 = 0xB21A35CAL;
static unsigned short g_22 = 0x13B2L;
static unsigned char g_25 = 1UL;
static unsigned short *g_27 = (void*)0;
static int g_43 = 1L;
static int g_94 = 0x03401FF3L;
static int g_102 = (-7L);
static long long g_107 = 0xC99B0BF1997376B2LL;
static union U0 g_115 = {5L};
static unsigned g_130 = 0UL;
static unsigned long long g_205 = 1UL;
static char g_227 = 0xD9L;
static int g_234 = (-1L);
static unsigned char g_241 = 248UL;
static unsigned g_283 = 4294967295UL;
static long long g_318 = 0x661964D51499A76ELL;
static long long g_326 = (-1L);
static long long g_352 = 0x3E5249ECE0AAE0DDLL;
static short g_366 = 7L;
static int g_382 = 0xC67E9A63L;
static unsigned char g_384 = 0x5CL;
static unsigned short g_403 = 0xE08BL;
static unsigned g_445 = 1UL;
static long long g_461 = 0x95154DCB419A3F20LL;
static unsigned char g_465 = 0xD4L;
static union U0 g_516 = {1L};
static union U0 *g_550 = &g_115;
static union U0 **g_549 = &g_550;
static char *g_572 = &g_227;
static char **g_571 = &g_572;
static char ***g_570 = &g_571;
static unsigned long long g_624 = 0xACFC42F424CE64EALL;
static unsigned *g_695 = &g_283;
static int *g_829 = &g_43;
static unsigned g_866 = 18446744073709551608UL;
static int g_889 = 0L;
static unsigned g_928 = 18446744073709551608UL;
static unsigned char *g_932 = (void*)0;
static unsigned char **g_931 = &g_932;
static long long g_984 = 1L;
static int g_993 = 5L;
static unsigned char g_1006 = 0x0BL;
static int g_1013 = (-1L);
static unsigned long long g_1019 = 0xFDA639FB57FBEEC9LL;
static unsigned long long *g_1073 = &g_205;
static unsigned short **g_1083 = &g_27;
static unsigned short g_1145 = 0x91F0L;
static int **g_1171 = (void*)0;
static int ***g_1170 = &g_1171;
static char g_1181 = 0L;
static int g_1192 = 0x66975D16L;
static unsigned short g_1220 = 0x0FCAL;
static char ****g_1272 = &g_570;
static unsigned short g_1384 = 65526UL;
static int g_1481 = 0xE1DDA927L;
static unsigned g_1511 = 4294967291UL;
static short g_1516 = 0L;
static union U0 ***g_1557 = &g_549;
static union U0 ****g_1556 = &g_1557;
static char g_1576 = 0x76L;
static unsigned g_1710 = 3UL;
static unsigned char g_1753 = 0UL;
static unsigned g_1827 = 0x67B11609L;
static unsigned g_1917 = 18446744073709551615UL;
static unsigned g_2082 = 0UL;
static union U1 g_2170 = {0x8D01E076L};
static unsigned short g_2267 = 65535UL;
static unsigned char **g_2271 = (void*)0;
static unsigned char g_2300 = 0xF0L;
static union U1 *g_2304 = &g_2170;



static union U0 func_1(void);
static short func_9(char p_10, int p_11, union U1 p_12, union U0 p_13);
static int func_17(unsigned long long p_18);
static int func_36(unsigned short * p_37, long long p_38, int p_39);
static unsigned short * func_40(unsigned char p_41);
static unsigned short * func_50(int p_51, unsigned short * p_52, short p_53, int p_54, unsigned short ** p_55);
static unsigned short * func_56(int * p_57);
static int * func_58(long long p_59);
static short func_74(unsigned char p_75, unsigned p_76, short p_77);
static unsigned long long func_81(unsigned p_82, long long p_83, char p_84);
static union U0 func_1(void)
{
    short l_6 = 0xF90EL;
    unsigned short **l_28 = (void*)0;
    unsigned short **l_29 = (void*)0;
    unsigned short **l_30 = &g_27;
    union U1 l_31 = {-10L};
    union U0 l_32 = {0xD52A2848L};
    short *l_2172 = &l_32.f2;
    int l_2173 = 0x6C96F432L;
    int l_2176 = 0x47C330F8L;
    unsigned l_2181 = 0xBDC1B840L;
    unsigned l_2182 = 0x2326C1F9L;
    int *l_2189 = &g_2170.f2;
    unsigned short *l_2190 = &g_1145;
    union U1 *l_2192 = &l_31;
    union U1 **l_2191 = &l_2192;
    l_2173 = (safe_div_func_int8_t_s_s(0x25L, (safe_sub_func_uint8_t_u_u(l_6, (l_31.f2 = ((safe_mul_func_uint16_t_u_u(l_6, ((*l_2172) = func_9(g_14, (+(g_14 || ((safe_add_func_int32_t_s_s(func_17(l_6), ((((*l_30) = g_27) != (void*)0) < l_6))) && l_6))), l_31, l_32)))) != 0x57L))))));
    (*l_2189) = (l_2173 |= (safe_lshift_func_int8_t_s_s(l_2176, (safe_mod_func_uint32_t_u_u(((l_31.f3 | l_2181) != (g_1220 <= ((l_2182 || 1L) > ((safe_add_func_uint64_t_u_u((safe_div_func_int8_t_s_s(l_31.f3, l_2176)), ((safe_div_func_uint64_t_u_u((&g_984 != &g_352), g_403)) < 0xF4F3D787L))) == l_31.f3)))), (-6L))))));
    if ((func_81((g_115.f2 <= (*l_2189)), ((-9L) > (func_17((*l_2189)) & (((*l_2190) = (*l_2189)) <= g_1192))), (l_2191 == &l_2192)) >= (*l_2189)))
    {
        union U0 l_2193 = {0x359851AEL};
        return l_2193;
    }
    else
    {
        unsigned short l_2200 = 0x75ECL;
        union U0 l_2212 = {0L};
        int l_2243 = 0x63C6E7D8L;
        union U0 *****l_2302 = &g_1556;
        int *l_2303 = &l_31.f2;
        for (g_1481 = 0; (g_1481 == 15); ++g_1481)
        {
            int l_2196 = 0xE925EF15L;
            int *l_2201 = (void*)0;
            int *l_2202 = &g_102;
            unsigned *l_2205 = &g_1710;
            if (l_2196)
                break;
            (*l_2202) |= (l_2196 & (safe_unary_minus_func_uint64_t_u((((*l_2189) = (safe_lshift_func_int8_t_s_s(l_2196, l_2200))) >= l_2200))));
            (*l_2189) = ((*l_2202) = (*l_2202));
            if ((0x44DECE196EF37DFALL ^ (+((g_866 & ((safe_lshift_func_uint8_t_u_u(g_102, 4)) > (*l_2202))) | ((*l_2205)++)))))
            {
                int l_2262 = 0x7760786CL;
                int l_2264 = 1L;
                for (g_43 = 0; (g_43 == (-27)); g_43 = safe_sub_func_int8_t_s_s(g_43, 3))
                {
                    int *l_2213 = (void*)0;
                    int **l_2214 = &l_2201;
                    int *l_2215 = &g_102;
                    int *l_2216 = &l_2173;
                    int *l_2217 = &g_2170.f2;
                    int *l_2218 = (void*)0;
                    int l_2219 = 1L;
                    int *l_2220 = &g_889;
                    int *l_2221 = &l_2219;
                    int *l_2222 = &g_2170.f2;
                    int *l_2223 = (void*)0;
                    int *l_2224 = &g_889;
                    int *l_2225 = &l_31.f2;
                    int *l_2226 = &l_2219;
                    int *l_2227 = &l_2173;
                    int *l_2228 = &g_94;
                    int *l_2229 = &g_102;
                    int *l_2230 = (void*)0;
                    int *l_2231 = &l_2173;
                    int *l_2232 = &l_2173;
                    int *l_2233 = &g_2170.f2;
                    int *l_2234 = &l_2219;
                    int *l_2235 = &g_234;
                    int *l_2236 = &l_31.f2;
                    int *l_2237 = &g_889;
                    int *l_2238 = &l_2173;
                    int *l_2239 = &g_94;
                    int *l_2240 = &g_2170.f2;
                    int *l_2241 = &l_31.f2;
                    int *l_2242 = &l_31.f2;
                    int *l_2244 = &g_102;
                    int *l_2245 = &g_234;
                    int *l_2246 = &g_234;
                    int *l_2247 = (void*)0;
                    int *l_2248 = &g_2170.f2;
                    int *l_2249 = &l_31.f2;
                    int *l_2250 = (void*)0;
                    int *l_2251 = &g_102;
                    int *l_2252 = (void*)0;
                    int *l_2253 = &l_2243;
                    int *l_2254 = &l_2219;
                    int *l_2255 = &g_2170.f2;
                    int *l_2256 = &g_102;
                    int *l_2257 = (void*)0;
                    int *l_2258 = &g_94;
                    int *l_2259 = (void*)0;
                    int *l_2260 = &g_234;
                    int *l_2261 = &l_2219;
                    int *l_2263 = &g_234;
                    int *l_2265 = &l_2264;
                    int *l_2266 = &g_889;
                    for (g_382 = 0; (g_382 >= (-28)); --g_382)
                    {
                        return l_2212;
                    }
                    (*l_2214) = l_2213;
                    g_2267++;
                    (*l_2255) = l_2200;
                }
            }
            else
            {
                unsigned char ***l_2272 = &g_931;
                int l_2295 = (-1L);
                if ((safe_unary_minus_func_int32_t_s((((*l_2272) = g_2271) == (void*)0))))
                {
                    int *l_2273 = &g_2170.f2;
                    int **l_2274 = &l_2201;
                    (*l_2274) = l_2273;
                    for (g_516.f3 = 7; (g_516.f3 <= 11); g_516.f3++)
                    {
                        int *l_2277 = (void*)0;
                    }
                    (*l_2274) = &l_2243;
                    (*l_2202) |= (*l_2273);
                }
                else
                {
                    unsigned l_2280 = 0UL;
                    unsigned *l_2287 = &l_2181;
                    int *l_2288 = &g_43;
                    (*l_2288) = ((*l_2202) = ((((*l_2189) ^= ((*g_1073) ^ (safe_rshift_func_int16_t_s_u(0x0D02L, l_2280)))) == ((*l_2205) = 0UL)) | (safe_mod_func_int32_t_s_s((((*l_2287) = (safe_mod_func_uint64_t_u_u((safe_mod_func_uint64_t_u_u((l_2280 && ((*l_2190) = func_17((*g_1073)))), g_1181)), l_2243))) < 4L), 4294967295UL))));
                    if ((*l_2189))
                        break;
                    for (g_2170.f0 = 0; (g_2170.f0 >= (-16)); g_2170.f0 = safe_sub_func_int32_t_s_s(g_2170.f0, 8))
                    {
                        unsigned short *l_2291 = (void*)0;
                        int l_2294 = 0xDCADBBF5L;
                        long long *l_2299 = &g_461;
                        int *l_2301 = &l_31.f2;
                        (*l_2301) &= func_81(g_2300, g_283, (*l_2189));
                    }
                }
                if (l_2295)
                    continue;
            }
        }
        (*l_2189) |= (0x5ACBBD88447DD23DLL ^ (l_2243 = (&g_1556 != l_2302)));
        g_829 = l_2303;
        l_2243 = (*g_829);
    }
    g_2304 = &g_2170;
    return l_32;
}







static short func_9(char p_10, int p_11, union U1 p_12, union U0 p_13)
{
    long long l_35 = 0x85950CFDFE924F63LL;
    long long *l_1268 = &g_461;
    long long **l_1267 = &l_1268;
    unsigned long long l_1294 = 0xD08A5053CD819565LL;
    unsigned char *l_1387 = &g_384;
    int l_1414 = 0x66BB52CEL;
    unsigned long long l_1482 = 0x6E35F9526474D94BLL;
    int *l_1523 = (void*)0;
    unsigned char l_1543 = 255UL;
    unsigned long long l_1577 = 0x419A60A01B95AB15LL;
    int l_1637 = 1L;
    int l_1643 = 0x4704E90AL;
    int l_1691 = (-1L);
    unsigned l_1925 = 0x3A7AE149L;
    unsigned **l_1944 = &g_695;
    unsigned long long l_2161 = 0x5C44C8C3BE976301LL;
    int **l_2171 = &g_829;
    if (((-5L) | (safe_div_func_uint16_t_u_u(l_35, g_14))))
    {
        unsigned short **l_1223 = (void*)0;
        unsigned short **l_1224 = &g_27;
        char l_1240 = (-10L);
        int l_1259 = 0x093FA9C1L;
        int l_1269 = 0x4A5D3924L;
        short l_1277 = 0L;
        int ****l_1299 = &g_1170;
        long long l_1540 = 0x582208A47893A0ACLL;
        int l_1833 = 4L;
        int l_2048 = 0L;
        int l_2057 = 0L;
        int l_2059 = 0x91207649L;
        int l_2077 = 1L;
        unsigned *l_2086 = &g_445;
        unsigned **l_2085 = &l_2086;
        unsigned short l_2088 = 0x22DDL;
        if (func_36(((*l_1224) = func_40(p_13.f4)), l_35, p_12.f3))
        {
            int l_1245 = 1L;
            unsigned char *l_1250 = &g_1006;
            int *l_1251 = &g_234;
            int ****l_1300 = &g_1170;
            int l_1313 = 0L;
            int l_1326 = 0x218B0C86L;
            int l_1363 = (-3L);
            int l_1377 = 0L;
            unsigned char l_1388 = 1UL;
            if ((safe_lshift_func_uint8_t_u_s(l_35, (safe_mul_func_int8_t_s_s(l_1240, ((safe_add_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((0x9EFFFEC6L > ((l_1245 && p_13.f1) | ((*g_1073)--))), ((((*l_1250) = (l_1245 || (safe_mod_func_int16_t_s_s((4294967295UL == (!p_12.f1)), p_11)))) != 0xACL) ^ p_11))), (*g_27))) & p_12.f0))))))
            {
                int *l_1252 = (void*)0;
                l_1252 = l_1251;
            }
            else
            {
                short l_1257 = (-9L);
                union U0 *l_1258 = &g_516;
                int l_1262 = 0x632EEC7FL;
                char ****l_1273 = &g_570;
                int l_1281 = 4L;
                (*g_829) = ((((g_1083 = &g_27) != (void*)0) < (((*l_1251) |= (safe_rshift_func_int16_t_s_u(g_366, 12))) & ((safe_mod_func_uint8_t_u_u(0xF8L, p_10)) == l_1257))) >= (p_12.f0 < (&g_570 != (void*)0)));
                if (l_1240)
                {
                    int **l_1270 = &g_829;
                    char *****l_1271 = (void*)0;
                    (*g_549) = l_1258;
                    (*l_1270) = func_58((((((l_1259 |= (*l_1251)) & (safe_rshift_func_int16_t_s_s((l_1262 = p_13.f0), (l_1269 = (((*g_1073) | (safe_rshift_func_int8_t_s_u((safe_lshift_func_int16_t_s_u(((((***g_570) ^= l_1240) > ((((void*)0 != l_1267) | 0xE7L) < l_1257)) || (**g_571)), 7)), p_12.f2))) ^ g_115.f2))))) & 1UL) | (*g_1073)) != p_12.f3));
                    l_1269 &= ((func_74(p_12.f0, l_35, g_102) || l_1262) | ((g_1272 = &g_570) != l_1273));
                    (*g_829) &= 0xB0FC9509L;
                }
                else
                {
                    int *l_1274 = &g_94;
                    int *l_1275 = &l_1262;
                    int *l_1276 = &g_43;
                    int *l_1278 = (void*)0;
                    int *l_1279 = &l_1262;
                    int *l_1280 = (void*)0;
                    int *l_1282 = &l_1281;
                    int *l_1283 = &g_889;
                    int *l_1284 = &g_234;
                    int *l_1285 = &l_1281;
                    int *l_1286 = &l_1259;
                    int *l_1287 = (void*)0;
                    int *l_1288 = &g_889;
                    int *l_1289 = &l_1262;
                    int *l_1290 = &g_102;
                    int *l_1291 = &g_102;
                    int *l_1292 = (void*)0;
                    int *l_1293 = &g_234;
                    ++l_1294;
                    (*l_1283) &= func_17((*g_1073));
                    (*l_1286) = l_1257;
                    (*l_1288) |= func_81(((*g_829) & (safe_lshift_func_uint8_t_u_u(p_13.f4, 6))), (*l_1285), (*l_1251));
                }
            }
            if ((*g_829))
            {
                long long *l_1303 = &g_984;
                int l_1308 = 8L;
                int *l_1311 = &g_234;
                int *l_1312 = &g_889;
                int *l_1314 = (void*)0;
                int *l_1315 = &l_1269;
                int *l_1316 = &g_43;
                int *l_1317 = (void*)0;
                int *l_1318 = &l_1313;
                int *l_1319 = &l_1313;
                int *l_1320 = &g_234;
                int *l_1321 = &g_94;
                int *l_1322 = &l_1259;
                int *l_1323 = &g_889;
                int *l_1324 = &g_234;
                int *l_1325 = &g_43;
                int *l_1327 = &l_1326;
                int *l_1328 = &l_1326;
                int *l_1329 = (void*)0;
                int *l_1330 = &g_102;
                int *l_1331 = &l_1326;
                int *l_1332 = &g_43;
                int *l_1333 = (void*)0;
                int *l_1334 = (void*)0;
                int *l_1335 = (void*)0;
                int *l_1336 = &l_1313;
                int *l_1337 = &g_234;
                int *l_1338 = (void*)0;
                int *l_1339 = &g_234;
                int *l_1340 = &g_889;
                int *l_1341 = &l_1308;
                int *l_1342 = (void*)0;
                int *l_1343 = (void*)0;
                int *l_1344 = (void*)0;
                int *l_1345 = &g_102;
                int *l_1346 = &l_1269;
                int *l_1347 = (void*)0;
                int *l_1348 = (void*)0;
                int *l_1349 = &g_43;
                int *l_1350 = &l_1259;
                int *l_1351 = &l_1269;
                int *l_1352 = &g_102;
                int *l_1353 = &l_1269;
                int *l_1354 = &l_1326;
                int *l_1355 = &l_1313;
                int *l_1356 = &g_102;
                int *l_1357 = &l_1308;
                int *l_1358 = &g_94;
                int *l_1359 = &g_94;
                int *l_1360 = &g_102;
                int *l_1361 = &l_1326;
                int *l_1362 = (void*)0;
                int *l_1364 = &g_94;
                int *l_1365 = (void*)0;
                int *l_1366 = &l_1326;
                int *l_1367 = &l_1259;
                int *l_1368 = (void*)0;
                int *l_1369 = &g_234;
                int *l_1370 = &l_1269;
                int *l_1371 = &g_43;
                int *l_1372 = &l_1308;
                int *l_1373 = &g_94;
                int *l_1374 = &l_1313;
                int *l_1375 = &g_94;
                int *l_1376 = &l_1308;
                int *l_1378 = &g_43;
                int *l_1379 = &l_1313;
                int *l_1380 = &g_43;
                int *l_1381 = &l_1313;
                int *l_1382 = &g_43;
                int *l_1383 = &l_1313;
                (*g_829) ^= (((g_366 != (l_1299 == l_1300)) != (safe_div_func_int64_t_s_s(((*l_1303) &= ((*l_1268) ^= (-1L))), (safe_add_func_uint16_t_u_u((safe_div_func_int8_t_s_s(p_12.f3, p_13.f0)), ((l_1308 || (***g_570)) && (!((*g_1073) = ((safe_mul_func_uint8_t_u_u(p_12.f2, (****g_1272))) & (-1L)))))))))) < p_12.f0);
                --g_1384;
                (*l_1374) |= p_13.f0;
            }
            else
            {
                int l_1393 = (-8L);
                int l_1443 = 0x493F8610L;
                int l_1455 = 0x6C771D91L;
                int l_1462 = (-1L);
                if ((((void*)0 != &g_1170) > (l_1387 != (*g_931))))
                {
                    (*l_1251) = l_1388;
                    (*l_1251) &= (*g_829);
                    (*l_1251) &= (*g_829);
                }
                else
                {
                    (*g_829) ^= (safe_rshift_func_uint16_t_u_u((&g_932 == (void*)0), 6));
                    (*g_829) |= ((0x5FDEL ^ (*l_1251)) | ((*g_695) = 0xFF8D507DL));
                }
                for (p_12.f1 = 0; (p_12.f1 == 40); ++p_12.f1)
                {
                    char l_1424 = 0x71L;
                    int l_1430 = 0x0C22804BL;
                    if (l_1393)
                    {
                        int *l_1394 = &l_1326;
                        int *l_1395 = &l_1313;
                        int *l_1396 = &l_1326;
                        int *l_1397 = (void*)0;
                        int *l_1398 = &g_102;
                        int *l_1399 = &l_1313;
                        int *l_1400 = &g_234;
                        int *l_1401 = &l_1326;
                        int *l_1402 = &l_1326;
                        int *l_1403 = (void*)0;
                        int *l_1404 = &g_43;
                        int *l_1405 = &g_102;
                        int *l_1406 = &l_1313;
                        int *l_1407 = &l_1326;
                        int *l_1408 = (void*)0;
                        int *l_1409 = (void*)0;
                        int *l_1410 = &l_1326;
                        unsigned l_1411 = 7UL;
                        int *l_1415 = &g_43;
                        int *l_1416 = &l_1313;
                        int *l_1417 = &g_234;
                        int *l_1418 = &l_1377;
                        int *l_1419 = &l_1269;
                        int *l_1420 = (void*)0;
                        int *l_1421 = (void*)0;
                        int *l_1422 = (void*)0;
                        int *l_1423 = &l_1269;
                        int *l_1425 = &g_43;
                        int *l_1426 = (void*)0;
                        int *l_1427 = &g_94;
                        int l_1428 = 9L;
                        int l_1429 = 1L;
                        int *l_1431 = &l_1393;
                        int *l_1432 = &l_1377;
                        int *l_1433 = (void*)0;
                        int *l_1434 = &l_1326;
                        int *l_1435 = &l_1326;
                        int *l_1436 = &g_43;
                        int *l_1437 = &g_102;
                        int *l_1438 = (void*)0;
                        int *l_1439 = &l_1393;
                        int *l_1440 = &g_43;
                        int *l_1441 = &l_1430;
                        int *l_1442 = &g_94;
                        int *l_1444 = &l_1429;
                        int *l_1445 = &l_1443;
                        int *l_1446 = &g_234;
                        int *l_1447 = &l_1269;
                        int *l_1448 = &l_1377;
                        int *l_1449 = &l_1414;
                        int *l_1450 = &l_1326;
                        int *l_1451 = &l_1414;
                        int *l_1452 = &l_1377;
                        int *l_1453 = &g_94;
                        int *l_1454 = (void*)0;
                        int *l_1456 = &l_1455;
                        int *l_1457 = &g_43;
                        int *l_1458 = (void*)0;
                        int *l_1459 = &l_1259;
                        int *l_1460 = (void*)0;
                        int *l_1461 = &l_1443;
                        int *l_1463 = (void*)0;
                        int *l_1464 = &l_1428;
                        int *l_1465 = &g_94;
                        int *l_1466 = &l_1443;
                        int *l_1467 = (void*)0;
                        int *l_1468 = &l_1326;
                        int *l_1469 = (void*)0;
                        int *l_1470 = &l_1455;
                        int *l_1471 = (void*)0;
                        int *l_1472 = &l_1313;
                        int *l_1473 = &l_1326;
                        int *l_1474 = (void*)0;
                        int *l_1475 = &l_1326;
                        int *l_1476 = (void*)0;
                        int *l_1477 = &l_1443;
                        int *l_1478 = &l_1443;
                        int *l_1479 = (void*)0;
                        int *l_1480 = &g_102;
                        ++l_1411;
                        (*l_1407) = 0x4456736AL;
                        l_1482--;
                    }
                    else
                    {
                        int *l_1485 = &g_889;
                        int *l_1486 = &l_1414;
                        int *l_1487 = &l_1414;
                        int l_1488 = 1L;
                        int *l_1489 = &l_1259;
                        int *l_1490 = &g_102;
                        int *l_1491 = (void*)0;
                        int *l_1492 = &l_1269;
                        int *l_1493 = &l_1377;
                        int *l_1494 = &l_1443;
                        int *l_1495 = &l_1443;
                        int *l_1496 = &l_1393;
                        int *l_1497 = &l_1462;
                        int *l_1498 = &l_1393;
                        int *l_1499 = &g_102;
                        int *l_1500 = &g_94;
                        int *l_1501 = &l_1363;
                        int *l_1502 = &l_1326;
                        int *l_1503 = &g_889;
                        int *l_1504 = &g_234;
                        int *l_1505 = &l_1462;
                        int *l_1506 = &g_94;
                        int *l_1507 = &l_1326;
                        int *l_1508 = (void*)0;
                        int *l_1509 = (void*)0;
                        int *l_1510 = &l_1269;
                        (*l_1251) &= (&l_1424 != ((**g_570) = &p_10));
                        g_1511++;
                        (*l_1504) |= (*g_829);
                        l_1523 = func_58(((((*l_1506) >= 18446744073709551615UL) == (safe_lshift_func_uint8_t_u_u((l_1443 = g_1516), 3))) == (safe_div_func_uint64_t_u_u((safe_mod_func_uint32_t_u_u(p_11, p_11)), func_17((+(safe_rshift_func_int16_t_s_u((p_13.f0 >= (func_17(l_1455) < l_1424)), 7))))))));
                    }
                }
                l_1269 |= (safe_unary_minus_func_uint32_t_u(p_13.f1));
            }
            (*g_829) = (safe_rshift_func_int8_t_s_s(5L, 0));
        }
        else
        {
            unsigned l_1553 = 0x5F91934EL;
            int l_1580 = 0L;
            int l_1713 = 0x8226D5B1L;
            char l_1920 = (-1L);
            long long *l_1948 = &g_516.f3;
            long long *l_1951 = &l_1540;
            int l_1952 = 1L;
            int *l_1953 = &l_1637;
            if (p_13.f0)
            {
                int *l_1527 = (void*)0;
                int *l_1528 = &g_889;
                int *l_1529 = &g_889;
                int *l_1530 = &l_1259;
                int *l_1531 = (void*)0;
                int *l_1532 = &l_1269;
                int *l_1533 = &g_43;
                int *l_1534 = &g_102;
                int *l_1535 = &l_1414;
                int *l_1536 = &g_43;
                int *l_1537 = &g_94;
                int *l_1538 = &l_1414;
                int *l_1539 = &g_234;
                int *l_1541 = &g_889;
                int *l_1542 = &l_1269;
                int ***l_1547 = (void*)0;
                int ****l_1548 = &l_1547;
                int l_1590 = 0xD5497A55L;
                int l_1597 = 0xB7CBBC40L;
                int l_1683 = 1L;
                int l_1763 = 1L;
                l_1543++;
                if (((safe_unary_minus_func_int16_t_s(((*l_1299) == ((*l_1548) = l_1547)))) != 18446744073709551610UL))
                {
                    int l_1552 = 0xE24A4EBBL;
                    int l_1611 = 0xA0E48DB5L;
                    int l_1616 = (-1L);
                    int l_1693 = (-3L);
                    (*l_1530) = (-5L);
                    for (g_107 = 27; (g_107 <= 16); --g_107)
                    {
                        int **l_1551 = &l_1538;
                        (*l_1551) = l_1527;
                        (*l_1535) = func_81(l_1552, l_1553, (****g_1272));
                        (*g_829) = p_12.f2;
                        if (l_1553)
                            break;
                    }
                    if ((~p_13.f0))
                    {
                        union U0 *****l_1558 = (void*)0;
                        union U0 ****l_1560 = (void*)0;
                        union U0 *****l_1559 = &l_1560;
                        int l_1575 = 0x6FA9C45BL;
                        int *l_1581 = &l_1414;
                        int *l_1582 = &l_1259;
                        int *l_1583 = &g_102;
                        int *l_1584 = &g_234;
                        int *l_1585 = &l_1269;
                        int *l_1586 = &l_1269;
                        int *l_1587 = &g_234;
                        int *l_1588 = (void*)0;
                        int *l_1589 = &l_1575;
                        int *l_1591 = &g_889;
                        int *l_1592 = &l_1259;
                        int *l_1593 = (void*)0;
                        int *l_1594 = &l_1269;
                        int *l_1595 = &g_43;
                        int *l_1596 = &l_1259;
                        int *l_1598 = &g_234;
                        int *l_1599 = (void*)0;
                        int *l_1600 = &g_43;
                        int *l_1601 = &g_102;
                        int *l_1602 = &l_1259;
                        int *l_1603 = (void*)0;
                        int *l_1604 = &l_1259;
                        int *l_1605 = &g_889;
                        int *l_1606 = &g_94;
                        int *l_1607 = &l_1269;
                        int *l_1608 = &g_889;
                        int *l_1609 = &l_1580;
                        int *l_1610 = &l_1414;
                        int *l_1612 = &g_889;
                        int *l_1613 = (void*)0;
                        int *l_1614 = (void*)0;
                        int *l_1615 = &g_94;
                        int *l_1617 = (void*)0;
                        int *l_1618 = &g_889;
                        int *l_1619 = (void*)0;
                        int *l_1620 = &l_1259;
                        int *l_1621 = &l_1269;
                        int *l_1622 = (void*)0;
                        int *l_1623 = &l_1580;
                        int l_1624 = 5L;
                        int *l_1625 = (void*)0;
                        int *l_1626 = &g_889;
                        int *l_1627 = &l_1269;
                        int *l_1628 = &g_234;
                        int *l_1629 = &l_1575;
                        int *l_1630 = &l_1414;
                        int *l_1631 = (void*)0;
                        int *l_1632 = &l_1259;
                        int *l_1633 = &l_1269;
                        int *l_1634 = (void*)0;
                        int *l_1635 = &l_1580;
                        int *l_1636 = &l_1580;
                        int *l_1638 = &l_1611;
                        int *l_1639 = &l_1269;
                        int *l_1640 = (void*)0;
                        int *l_1641 = &l_1575;
                        int *l_1642 = &l_1597;
                        int *l_1644 = (void*)0;
                        int *l_1645 = &l_1580;
                        int *l_1646 = &g_889;
                        int *l_1647 = (void*)0;
                        int *l_1648 = &l_1624;
                        int *l_1649 = &l_1580;
                        int *l_1650 = &g_102;
                        int *l_1651 = &g_234;
                        int *l_1652 = &l_1624;
                        int *l_1653 = &l_1611;
                        int *l_1654 = (void*)0;
                        int *l_1655 = &l_1597;
                        int *l_1656 = &g_234;
                        int *l_1657 = (void*)0;
                        int *l_1658 = &l_1580;
                        int *l_1659 = &l_1597;
                        int *l_1660 = &g_234;
                        int *l_1661 = &l_1259;
                        int *l_1662 = &l_1269;
                        int *l_1663 = &l_1580;
                        int *l_1664 = &l_1269;
                        int *l_1665 = &l_1637;
                        int *l_1666 = (void*)0;
                        int *l_1667 = (void*)0;
                        int *l_1668 = (void*)0;
                        int *l_1669 = &l_1616;
                        int *l_1670 = (void*)0;
                        int *l_1671 = &g_889;
                        int *l_1672 = &l_1637;
                        int *l_1673 = &l_1580;
                        int *l_1674 = &l_1575;
                        int *l_1675 = (void*)0;
                        int *l_1676 = &l_1269;
                        int *l_1677 = &g_94;
                        int *l_1678 = (void*)0;
                        int *l_1679 = &g_43;
                        int *l_1680 = &l_1597;
                        int *l_1681 = &l_1259;
                        int *l_1682 = &l_1624;
                        int *l_1684 = &l_1580;
                        int *l_1685 = (void*)0;
                        int *l_1686 = &l_1624;
                        int *l_1687 = &l_1616;
                        int *l_1688 = &g_94;
                        int *l_1689 = (void*)0;
                        int *l_1690 = &g_889;
                        int *l_1692 = &l_1683;
                        int *l_1694 = &l_1624;
                        int *l_1695 = &l_1683;
                        int *l_1696 = &l_1269;
                        int *l_1697 = &l_1691;
                        int *l_1698 = (void*)0;
                        int *l_1699 = &g_43;
                        int *l_1700 = (void*)0;
                        int *l_1701 = &l_1269;
                        int *l_1702 = &l_1414;
                        int *l_1703 = &l_1643;
                        int *l_1704 = &l_1683;
                        int *l_1705 = &l_1580;
                        int *l_1706 = &l_1269;
                        int *l_1707 = &l_1624;
                        int *l_1708 = &g_234;
                        int *l_1709 = (void*)0;
                        int *l_1714 = &l_1269;
                        int *l_1715 = &l_1616;
                        int *l_1716 = &g_889;
                        int *l_1717 = &l_1693;
                        int *l_1718 = (void*)0;
                        int *l_1719 = (void*)0;
                        int *l_1720 = &l_1616;
                        int *l_1721 = &l_1616;
                        int *l_1722 = &l_1713;
                        int *l_1723 = &l_1637;
                        int *l_1724 = &l_1616;
                        int *l_1725 = &l_1590;
                        int *l_1726 = &g_102;
                        int *l_1727 = &l_1611;
                        int *l_1728 = &l_1575;
                        int *l_1729 = (void*)0;
                        int *l_1730 = &g_94;
                        int *l_1731 = &l_1597;
                        int *l_1732 = &l_1691;
                        int *l_1733 = &l_1575;
                        int *l_1734 = &l_1575;
                        int *l_1735 = (void*)0;
                        int *l_1736 = &g_43;
                        int *l_1737 = &l_1637;
                        int *l_1738 = &l_1637;
                        int *l_1739 = &l_1693;
                        int *l_1740 = &g_102;
                        int *l_1741 = (void*)0;
                        int *l_1742 = (void*)0;
                        int *l_1743 = &l_1575;
                        int *l_1744 = (void*)0;
                        int *l_1745 = &l_1693;
                        int *l_1746 = &l_1597;
                        int *l_1747 = &l_1637;
                        int *l_1748 = &l_1637;
                        int *l_1749 = &l_1259;
                        int *l_1750 = (void*)0;
                        int *l_1751 = &l_1597;
                        int *l_1752 = (void*)0;
                        g_1576 |= (safe_div_func_int64_t_s_s(((**l_1267) = ((g_1556 != ((*l_1559) = &g_1557)) <= (safe_mul_func_uint16_t_u_u(65528UL, func_81((safe_lshift_func_int8_t_s_s((func_74((+(safe_sub_func_int32_t_s_s(p_12.f0, ((*g_695) = (safe_mod_func_int8_t_s_s((~(((*l_1542) = (safe_mod_func_uint16_t_u_u((l_1552 > (((*g_27) ^ ((***g_570) | (****g_1272))) < (safe_mul_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_u((p_13.f1 ^ p_13.f4), l_1294)) && 0x4760392CB646BB07LL), l_1552)))), g_889))) | l_1575)), p_10)))))), p_11, g_1006) && l_1553), p_13.f2)), p_13.f1, p_13.f0))))), p_12.f3));
                        l_1577--;
                        g_1710++;
                        g_1753++;
                    }
                    else
                    {
                        int *l_1756 = &l_1637;
                        int *l_1757 = &l_1259;
                        int *l_1758 = (void*)0;
                        int *l_1759 = &l_1691;
                        int *l_1760 = &l_1269;
                        int *l_1761 = &l_1611;
                        int *l_1762 = &l_1597;
                        int *l_1764 = &l_1763;
                        int *l_1765 = &l_1693;
                        int *l_1766 = &l_1590;
                        int *l_1767 = &g_94;
                        int l_1768 = 0L;
                        int *l_1769 = &l_1580;
                        int *l_1770 = &g_94;
                        int *l_1771 = (void*)0;
                        int l_1772 = 0x7C3500DAL;
                        int *l_1773 = &l_1693;
                        int *l_1774 = &g_43;
                        int *l_1775 = &l_1597;
                        int *l_1776 = (void*)0;
                        int *l_1777 = (void*)0;
                        int *l_1778 = &l_1772;
                        int *l_1779 = &l_1693;
                        int *l_1780 = &g_102;
                        int *l_1781 = (void*)0;
                        int *l_1782 = (void*)0;
                        int *l_1783 = (void*)0;
                        int *l_1784 = &l_1580;
                        int *l_1785 = &g_43;
                        int *l_1786 = &g_889;
                        int *l_1787 = &g_102;
                        int *l_1788 = (void*)0;
                        int *l_1789 = &l_1683;
                        int *l_1790 = &l_1693;
                        int *l_1791 = &l_1763;
                        int *l_1792 = (void*)0;
                        int *l_1793 = &l_1693;
                        int *l_1794 = (void*)0;
                        int *l_1795 = &l_1616;
                        int *l_1796 = &l_1616;
                        int *l_1797 = &l_1414;
                        int *l_1798 = &l_1597;
                        int *l_1799 = &l_1643;
                        int l_1800 = 1L;
                        int *l_1801 = &l_1691;
                        int *l_1802 = &l_1597;
                        int *l_1803 = &l_1683;
                        int *l_1804 = &l_1643;
                        int *l_1805 = &l_1763;
                        int *l_1806 = &l_1683;
                        int *l_1807 = &g_94;
                        int *l_1808 = (void*)0;
                        int *l_1809 = &l_1616;
                        int *l_1810 = &l_1611;
                        int *l_1811 = (void*)0;
                        int *l_1812 = &l_1414;
                        int *l_1813 = &l_1259;
                        int *l_1814 = &l_1259;
                        int *l_1815 = &g_234;
                        int *l_1816 = (void*)0;
                        int *l_1817 = &l_1768;
                        int *l_1818 = (void*)0;
                        int *l_1819 = (void*)0;
                        int *l_1820 = &l_1691;
                        int *l_1821 = &l_1597;
                        int *l_1822 = &l_1763;
                        int *l_1823 = &l_1590;
                        int *l_1824 = &l_1616;
                        int *l_1825 = &g_43;
                        int *l_1826 = &l_1643;
                        (*l_1537) = (-5L);
                        --g_1827;
                        (*l_1802) &= (&l_1772 == &l_1713);
                    }
                }
                else
                {
                    return g_352;
                }
            }
            else
            {
                unsigned long long *l_1830 = &l_1482;
                int l_1859 = 2L;
                int l_1872 = (-1L);
                int l_1914 = 0x5DD52F3AL;
                union U0 *****l_1936 = (void*)0;
                unsigned ***l_1945 = &l_1944;
                if ((((*l_1830) = (func_81(p_13.f2, p_12.f2, (**g_571)) & func_17((--(*l_1830))))) <= ((l_1637 = l_1833) <= (-5L))))
                {
                    int *l_1834 = &g_889;
                    int *l_1835 = (void*)0;
                    int *l_1836 = &g_234;
                    int *l_1837 = &l_1643;
                    int l_1838 = 0L;
                    int *l_1839 = &l_1643;
                    int *l_1840 = (void*)0;
                    int *l_1841 = &l_1259;
                    int *l_1842 = &g_94;
                    int *l_1843 = &l_1713;
                    int *l_1844 = &l_1580;
                    int *l_1845 = (void*)0;
                    int *l_1846 = &g_234;
                    int *l_1847 = &g_102;
                    int *l_1848 = &l_1643;
                    int *l_1849 = &g_102;
                    int *l_1850 = &l_1643;
                    int *l_1851 = &g_889;
                    int *l_1852 = (void*)0;
                    int *l_1853 = &g_102;
                    int *l_1854 = &g_234;
                    int *l_1855 = &g_43;
                    int *l_1856 = (void*)0;
                    int *l_1857 = &l_1838;
                    int *l_1858 = &g_889;
                    int *l_1860 = &g_94;
                    int *l_1861 = (void*)0;
                    int *l_1862 = &g_102;
                    int *l_1863 = &g_234;
                    int *l_1864 = &l_1414;
                    int *l_1865 = &g_94;
                    int *l_1866 = &l_1580;
                    int *l_1867 = (void*)0;
                    int *l_1868 = &l_1859;
                    int *l_1869 = &l_1259;
                    int *l_1870 = &l_1713;
                    int *l_1871 = &l_1259;
                    int *l_1873 = &l_1859;
                    int *l_1874 = &l_1838;
                    int *l_1875 = &l_1269;
                    int *l_1876 = &l_1580;
                    int *l_1877 = (void*)0;
                    int *l_1878 = &l_1414;
                    int *l_1879 = &l_1691;
                    int *l_1880 = &g_889;
                    int *l_1881 = &l_1414;
                    int *l_1882 = &l_1838;
                    int *l_1883 = &l_1691;
                    int *l_1884 = &l_1637;
                    int *l_1885 = &g_889;
                    int *l_1886 = (void*)0;
                    int *l_1887 = &g_102;
                    int *l_1888 = &l_1713;
                    int *l_1889 = (void*)0;
                    int *l_1890 = (void*)0;
                    int *l_1891 = &l_1414;
                    int *l_1892 = &l_1833;
                    int *l_1893 = &g_234;
                    int *l_1894 = &l_1259;
                    int *l_1895 = &g_94;
                    int l_1896 = 0x60FC6691L;
                    int *l_1897 = &g_234;
                    int *l_1898 = &l_1872;
                    int *l_1899 = &l_1643;
                    int *l_1900 = (void*)0;
                    int *l_1901 = &g_94;
                    int *l_1902 = &g_889;
                    int *l_1903 = &g_889;
                    int *l_1904 = &l_1896;
                    int *l_1905 = &l_1269;
                    int *l_1906 = &g_889;
                    int *l_1907 = &l_1637;
                    int *l_1908 = &l_1414;
                    int *l_1909 = &l_1896;
                    int *l_1910 = &l_1259;
                    int *l_1911 = (void*)0;
                    int *l_1912 = &l_1838;
                    int *l_1913 = &g_102;
                    int *l_1915 = &g_102;
                    int *l_1916 = (void*)0;
                    int *l_1921 = &g_889;
                    int *l_1922 = &l_1691;
                    int *l_1923 = &l_1713;
                    int *l_1924 = &l_1269;
                    g_1917++;
                    --l_1925;
                    for (g_1019 = 0; (g_1019 < 5); g_1019++)
                    {
                        if (p_13.f0)
                            break;
                    }
                    (*l_1904) = (safe_div_func_uint16_t_u_u(((**l_1224) = (safe_mod_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u(p_10, (func_81((*g_695), ((*l_1268) = ((+(***g_570)) ^ 0xB1L)), ((*g_829) >= (l_1936 == (void*)0))) > (l_1859 != p_13.f2)))), l_1553))), l_1914));
                }
                else
                {
                    unsigned long long l_1943 = 18446744073709551606UL;
                    for (g_445 = 28; (g_445 <= 39); g_445++)
                    {
                        int **l_1939 = (void*)0;
                        int **l_1940 = (void*)0;
                        int **l_1941 = (void*)0;
                        int **l_1942 = &g_829;
                        (***g_1556) = &p_13;
                        if (p_13.f1)
                            break;
                        if (l_1872)
                            continue;
                        (*l_1942) = (void*)0;
                    }
                    l_1523 = func_58(g_115.f4);
                    l_1269 = func_17(l_1943);
                }
                p_12.f2 &= (l_1859 = p_13.f0);
                (*l_1945) = l_1944;
            }
            (*l_1953) = func_81((7L && (**g_571)), ((*l_1951) &= ((((*l_1948) = ((**l_1267) |= p_12.f1)) <= (0x3E0FL > ((p_12.f0 < g_130) >= (safe_mod_func_uint16_t_u_u((*g_27), (*g_27)))))) < p_13.f1)), l_1952);
            l_1414 &= (safe_sub_func_int8_t_s_s(((*g_572) |= 0xDDL), ((((*g_1073) = 0UL) || (safe_add_func_int8_t_s_s(p_12.f1, ((safe_div_func_int32_t_s_s((0UL | p_13.f4), (safe_mod_func_int8_t_s_s((safe_div_func_int32_t_s_s(func_17(p_13.f1), 0x7936F6B6L)), ((*l_1953) || p_12.f0))))) > p_10)))) == (*g_695))));
        }
        for (l_1259 = 0; (l_1259 >= (-21)); --l_1259)
        {
            unsigned long long l_1990 = 0x676F4842BE52A9A4LL;
            int *l_1994 = &l_1833;
            int *l_1995 = &g_889;
            int *l_1996 = &l_1637;
            int *l_1997 = &g_102;
            int *l_1998 = &g_889;
            int *l_1999 = &l_1414;
            int *l_2000 = &g_102;
            int *l_2001 = &l_1833;
            int *l_2002 = &l_1269;
            int *l_2003 = (void*)0;
            int *l_2004 = (void*)0;
            int *l_2005 = &g_102;
            int *l_2006 = (void*)0;
            int l_2007 = 0xC3BB0765L;
            int *l_2008 = (void*)0;
            int *l_2009 = &g_102;
            int *l_2010 = &l_1643;
            int *l_2011 = &l_1414;
            int *l_2012 = &g_889;
            int *l_2013 = &l_1643;
            int *l_2014 = &l_2007;
            int *l_2015 = &l_2007;
            int *l_2016 = &l_1691;
            int *l_2017 = &l_1643;
            int *l_2018 = &l_1414;
            int *l_2019 = &l_1637;
            int *l_2020 = &l_1414;
            int *l_2021 = &g_234;
            int *l_2022 = (void*)0;
            int *l_2023 = &l_1414;
            int *l_2024 = &l_1414;
            int *l_2025 = &l_1643;
            int *l_2026 = &l_1637;
            int *l_2027 = &g_102;
            int *l_2028 = &g_889;
            int *l_2029 = &l_1414;
            int *l_2030 = &g_94;
            int *l_2031 = &l_1414;
            int *l_2032 = &g_102;
            int *l_2033 = &g_94;
            int *l_2034 = &l_1691;
            int *l_2035 = &l_1691;
            int *l_2036 = &l_1643;
            int *l_2037 = &l_1637;
            int l_2038 = 0x837F89E5L;
            int l_2039 = 4L;
            int *l_2040 = &l_2038;
            int *l_2041 = &g_102;
            int *l_2042 = &g_43;
            int *l_2043 = &l_1833;
            int *l_2044 = &g_234;
            int *l_2045 = (void*)0;
            int *l_2046 = &l_1643;
            int *l_2047 = (void*)0;
            int *l_2049 = &g_234;
            int *l_2050 = (void*)0;
            int *l_2051 = &l_2007;
            int *l_2052 = &l_1833;
            int *l_2053 = &l_2048;
            int *l_2054 = &l_1643;
            int *l_2055 = &l_1637;
            int *l_2056 = &l_2007;
            int l_2058 = 0x527049F6L;
            int *l_2060 = &l_2059;
            int l_2061 = 8L;
            int *l_2062 = &l_1637;
            int *l_2063 = &l_1637;
            int *l_2064 = &g_102;
            int *l_2065 = &l_2048;
            int *l_2066 = &l_2007;
            int *l_2067 = (void*)0;
            int *l_2068 = (void*)0;
            int *l_2069 = &l_2007;
            int *l_2070 = &g_889;
            int *l_2071 = &l_2048;
            int *l_2072 = (void*)0;
            int *l_2073 = (void*)0;
            int *l_2074 = &g_234;
            int *l_2075 = &l_2059;
            int *l_2076 = &g_102;
            int *l_2078 = &g_94;
            int *l_2079 = &g_889;
            int *l_2080 = &l_2039;
            int *l_2081 = &l_2058;
            for (g_115.f0 = 0; (g_115.f0 == (-28)); g_115.f0 = safe_sub_func_int8_t_s_s(g_115.f0, 9))
            {
                unsigned l_1972 = 18446744073709551606UL;
                int l_1973 = 0xABED0607L;
                unsigned **l_1986 = (void*)0;
                int *l_1993 = &g_94;
                for (g_205 = 11; (g_205 < 27); g_205++)
                {
                    char *l_1989 = &g_1576;
                    short *l_1991 = &g_1516;
                    unsigned char *l_1992 = &g_1753;
                    g_102 ^= (safe_add_func_int64_t_s_s((((**g_1083) && l_1972) <= l_1973), (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_u(((**g_571) = p_12.f1), 5)), ((*l_1992) = ((*l_1387) |= (safe_rshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_u((((*l_1991) = (safe_rshift_func_int16_t_s_u(((l_1944 != l_1986) && (safe_add_func_int64_t_s_s(p_12.f2, ((g_465 || (((*l_1989) = (-1L)) > l_1990)) <= g_115.f4)))), 15))) <= 0UL), 3)), 1))))))));
                    if (p_12.f2)
                        continue;
                    if (p_13.f4)
                        break;
                }
                l_1973 ^= ((*l_1993) = p_12.f3);
            }
            p_12.f2 = 0x32674E12L;
            g_2082--;
        }
        if ((((*l_1944) = (void*)0) != ((*l_2085) = &g_1710)))
        {
            int *l_2087 = &l_2077;
            unsigned char l_2091 = 7UL;
            short *l_2092 = &l_1277;
            l_2087 = l_2087;
            (*l_2087) = l_2088;
            l_2057 ^= (safe_mul_func_uint16_t_u_u((*l_2087), (((*l_2092) = g_234) > ((**g_1083) = (*l_2087)))));
            return g_107;
        }
        else
        {
            int *l_2093 = &g_94;
            int *l_2094 = &l_1414;
            int *l_2095 = &g_234;
            int *l_2096 = &l_2059;
            int *l_2097 = &l_2057;
            int *l_2098 = &l_2057;
            int *l_2099 = &l_1637;
            int *l_2100 = (void*)0;
            int *l_2101 = &g_94;
            int *l_2102 = (void*)0;
            int *l_2103 = (void*)0;
            int *l_2104 = &l_1833;
            int *l_2105 = &l_2059;
            int *l_2106 = &l_2059;
            int *l_2107 = (void*)0;
            int *l_2108 = &g_102;
            int *l_2109 = &l_1414;
            int *l_2110 = (void*)0;
            int *l_2111 = (void*)0;
            int *l_2112 = &l_2048;
            int *l_2113 = &l_1833;
            int *l_2114 = (void*)0;
            int *l_2115 = (void*)0;
            int *l_2116 = &g_102;
            int *l_2117 = &g_43;
            int l_2118 = 0L;
            int *l_2119 = &l_1269;
            int *l_2120 = &l_1643;
            int *l_2121 = &l_1643;
            int *l_2122 = &l_2118;
            int *l_2123 = &g_102;
            int *l_2124 = &l_2048;
            int *l_2125 = &l_1643;
            int *l_2126 = &g_889;
            int *l_2127 = &l_1833;
            int *l_2128 = &g_43;
            int *l_2129 = &l_2057;
            int *l_2130 = &g_102;
            int *l_2131 = &l_1259;
            int *l_2132 = (void*)0;
            int *l_2133 = &l_1691;
            int *l_2134 = &l_2057;
            int *l_2135 = &g_43;
            int *l_2136 = &l_1643;
            int *l_2137 = &g_43;
            int *l_2138 = &l_1643;
            int *l_2139 = &l_1833;
            int *l_2140 = &l_2077;
            int *l_2141 = (void*)0;
            int *l_2142 = &l_2118;
            int *l_2143 = &l_1269;
            int *l_2144 = (void*)0;
            int *l_2145 = &l_1637;
            int *l_2146 = (void*)0;
            int *l_2147 = &l_1637;
            int *l_2148 = &l_2118;
            int *l_2149 = (void*)0;
            int *l_2150 = &l_2048;
            int *l_2151 = &g_102;
            int *l_2152 = &g_94;
            int *l_2153 = &l_2059;
            int *l_2154 = &l_1691;
            int l_2155 = (-1L);
            int *l_2156 = &l_1269;
            int *l_2157 = &l_1643;
            int l_2158 = 0xDBC074ECL;
            int *l_2159 = &l_2077;
            int *l_2160 = &l_1637;
            ++l_2161;
        }
        for (g_1917 = 0; (g_1917 < 6); g_1917 = safe_add_func_int16_t_s_s(g_1917, 1))
        {
            int *l_2166 = (void*)0;
            int *l_2167 = &l_1269;
            union U1 *l_2169 = &g_2170;
            union U1 **l_2168 = &l_2169;
            (*l_2167) &= (&l_2161 == (void*)0);
            (*l_2168) = &p_12;
            (**g_1556) = (**g_1556);
            if (l_2077)
                break;
        }
    }
    else
    {
        (***g_1556) = (*g_549);
    }
    (*l_2171) = &l_1637;
    (*l_2171) = (void*)0;
    return g_984;
}







static int func_17(unsigned long long p_18)
{
    unsigned short *l_21 = &g_22;
    int l_26 = 0xE6BB2F14L;
    g_25 = (safe_lshift_func_uint16_t_u_u(((*l_21)++), (l_21 == l_21)));
    return l_26;
}







static int func_36(unsigned short * p_37, long long p_38, int p_39)
{
    int **l_1227 = (void*)0;
    int **l_1228 = &g_829;
    int l_1235 = 0L;
    for (g_1006 = (-29); (g_1006 > 42); g_1006 = safe_add_func_int64_t_s_s(g_1006, 4))
    {
        p_39 = ((*g_829) |= (-1L));
    }
    (*l_1228) = func_58(p_39);
    l_1235 &= ((!p_38) >= ((*g_695) = (p_39 != (((safe_mul_func_int16_t_s_s(((p_38 >= 0x73L) > 0xC336L), g_1019)) > (safe_rshift_func_uint16_t_u_u(65533UL, 13))) <= (8UL | func_74(func_17((*g_1073)), p_38, (**l_1228)))))));
    return p_39;
}







static unsigned short * func_40(unsigned char p_41)
{
    int *l_42 = &g_43;
    unsigned short **l_1149 = &g_27;
    int l_1178 = 0xCC246274L;
    char *l_1179 = (void*)0;
    char *l_1180 = &g_1181;
    int *l_1182 = &g_102;
    int *l_1183 = (void*)0;
    int *l_1184 = &l_1178;
    int *l_1185 = &g_234;
    int *l_1186 = &g_234;
    int *l_1187 = (void*)0;
    int *l_1188 = &l_1178;
    int *l_1189 = (void*)0;
    int *l_1190 = &g_102;
    int *l_1191 = &g_102;
    int *l_1193 = &g_43;
    int *l_1194 = (void*)0;
    int *l_1195 = &g_43;
    int *l_1196 = &g_234;
    int *l_1197 = &g_889;
    int *l_1198 = &g_102;
    int l_1199 = 0x599B2344L;
    int *l_1200 = &g_102;
    int *l_1201 = &g_43;
    int l_1202 = (-6L);
    int *l_1203 = (void*)0;
    int *l_1204 = &g_43;
    int *l_1205 = &g_102;
    int *l_1206 = (void*)0;
    int *l_1207 = &l_1178;
    int *l_1208 = (void*)0;
    int *l_1209 = &l_1199;
    int *l_1210 = (void*)0;
    int *l_1211 = (void*)0;
    int l_1212 = 0L;
    int *l_1213 = &g_234;
    int *l_1214 = &g_102;
    int *l_1215 = &g_43;
    int *l_1216 = &g_102;
    int *l_1217 = &g_889;
    int *l_1218 = (void*)0;
    int *l_1219 = &g_94;
    (*l_42) = g_22;
    (*l_42) = (safe_mul_func_int8_t_s_s(((*g_572) = ((*l_1180) &= (safe_rshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((0xC3L == (&g_22 != ((*l_1149) = func_50((*l_42), func_56(func_58(p_41)), g_984, (*l_42), (g_1083 = l_1149))))), l_1178)), 1)))), 8UL));
    --g_1220;
    return (*l_1149);
}







static unsigned short * func_50(int p_51, unsigned short * p_52, short p_53, int p_54, unsigned short ** p_55)
{
    unsigned l_1150 = 0x1A842C4DL;
    int **l_1156 = &g_829;
    int ***l_1155 = &l_1156;
    long long *l_1159 = &g_352;
    short l_1160 = 0x03B7L;
    short *l_1161 = &g_115.f2;
    int ****l_1172 = &l_1155;
    int l_1173 = 0xE3A813C6L;
    unsigned short *l_1174 = &g_1145;
    int l_1175 = (-2L);
    unsigned long long *l_1176 = &g_1019;
    int *l_1177 = &g_102;
    (*g_829) &= l_1150;
    (*g_829) = (safe_lshift_func_int8_t_s_s((p_53 != (**l_1156)), (*g_572)));
    (*l_1177) ^= ((safe_mul_func_int16_t_s_s(g_318, 0xC352L)) != (((*g_695) = (safe_div_func_int16_t_s_s(((((safe_div_func_uint64_t_u_u((*g_1073), (safe_div_func_uint64_t_u_u(((*l_1176) = (((*l_1174) = ((+((**l_1156) = (**l_1156))) ^ ((g_1170 != ((*l_1172) = &l_1156)) ^ (((!func_17(p_54)) || func_17(l_1173)) < p_53)))) || l_1175)), p_54)))) | 6L) || p_53) || 0x67449045L), p_54))) <= 0xDAE98471L));
    return l_1174;
}







static unsigned short * func_56(int * p_57)
{
    long long *l_510 = &g_461;
    int l_511 = 4L;
    unsigned short *l_529 = &g_403;
    unsigned char *l_566 = (void*)0;
    int l_603 = 1L;
    char ***l_644 = &g_571;
    unsigned char l_649 = 8UL;
    short l_653 = 0x6960L;
    unsigned char l_707 = 0x7EL;
    short *l_709 = (void*)0;
    union U0 **l_750 = &g_550;
    int l_890 = 0xBCC2ADB7L;
    int l_977 = 0xB6653C8BL;
    int l_982 = 1L;
    short l_1031 = (-1L);
    int *l_1148 = (void*)0;
    if ((safe_add_func_int64_t_s_s(((*l_510) = 3L), l_511)))
    {
        char *l_512 = &g_227;
        char ***l_524 = (void*)0;
        int l_540 = 0x8351A493L;
        union U0 *l_548 = (void*)0;
        union U0 **l_547 = &l_548;
        int l_600 = 0x25A927A8L;
        unsigned l_605 = 18446744073709551615UL;
        short *l_708 = &g_366;
        if (((void*)0 == l_512))
        {
            int *l_518 = &g_94;
            char **l_523 = &l_512;
            char ***l_522 = &l_523;
            long long *l_534 = &g_318;
            unsigned l_574 = 0x7B96491EL;
            int l_575 = 0xC01033B0L;
            int *l_576 = &g_94;
            int *l_577 = (void*)0;
            int *l_578 = &l_540;
            int *l_579 = &g_234;
            int *l_580 = &g_102;
            int *l_581 = (void*)0;
            int *l_582 = &l_540;
            int *l_583 = &l_575;
            int *l_584 = (void*)0;
            int *l_585 = &g_94;
            int *l_586 = (void*)0;
            int *l_587 = &g_234;
            int *l_588 = &g_94;
            int l_589 = 0x1041986CL;
            int *l_590 = &g_102;
            int *l_591 = &l_540;
            int *l_592 = &g_94;
            int *l_593 = &g_102;
            int *l_594 = &l_589;
            int *l_595 = &g_94;
            int *l_596 = &g_234;
            int *l_597 = (void*)0;
            int *l_598 = &l_589;
            int *l_599 = &l_575;
            int *l_601 = &g_94;
            int *l_602 = &g_94;
            int *l_604 = &g_234;
            unsigned long long *l_622 = (void*)0;
            unsigned long long *l_623 = &g_624;
            unsigned char *l_683 = (void*)0;
            unsigned char *l_684 = (void*)0;
            unsigned char *l_685 = (void*)0;
            unsigned char *l_686 = &l_649;
            short *l_694 = &g_366;
            for (g_115.f4 = 18; (g_115.f4 != 29); g_115.f4 = safe_add_func_int8_t_s_s(g_115.f4, 9))
            {
                union U0 *l_515 = &g_516;
                int l_530 = 0xFF59F603L;
                unsigned short l_554 = 0x1D25L;
                unsigned char *l_567 = &g_241;
                if ((g_115.f2 == (g_115.f0 ^ g_115.f2)))
                {
                    int *l_517 = &g_234;
                    char ****l_525 = &l_524;
                    unsigned short *l_528 = &g_22;
                    union U0 *l_531 = (void*)0;
                    l_515 = (void*)0;
                    (*l_517) |= (&p_57 == (void*)0);
                    if (g_107)
                    {
                        int **l_519 = &l_517;
                        p_57 = (void*)0;
                        (*l_519) = l_518;
                    }
                    else
                    {
                        (*l_518) = g_516.f2;
                        return &g_403;
                    }
                    if ((safe_sub_func_uint16_t_u_u((l_522 != ((*l_525) = l_524)), (g_234 | (safe_mod_func_uint16_t_u_u((l_528 != l_529), func_81(l_530, (*l_518), ((&g_115 != l_531) < (*l_517)))))))))
                    {
                        long long **l_535 = (void*)0;
                        long long **l_536 = &l_510;
                        unsigned char *l_537 = &g_384;
                        unsigned *l_543 = &g_283;
                        int *l_544 = &l_530;
                        union U0 ***l_551 = &g_549;
                        union U0 **l_553 = &l_531;
                        union U0 ***l_552 = &l_553;
                        (*l_544) = ((*l_518) = ((safe_mod_func_uint8_t_u_u(((*l_537) = func_81((&g_318 == ((*l_536) = l_534)), func_74(((*l_537)++), ((*l_543) = (func_74(g_25, g_516.f2, l_540) && (0xAF2070FDL && func_81((safe_lshift_func_uint8_t_u_s((((1UL && l_540) > 0xED7A292EE644F433LL) | 0x2F6A369502C5DCA2LL), l_511)), g_234, l_511)))), g_43), l_540)), g_382)) <= g_403));
                        (*l_518) = (-3L);
                        if (g_283)
                            continue;
                        (*l_518) ^= ((safe_sub_func_uint8_t_u_u((((**l_523) |= 0xECL) != (func_17(g_461) & 8UL)), ((l_547 == ((*l_552) = ((*l_551) = g_549))) < g_234))) > l_554);
                    }
                    else
                    {
                        int **l_555 = &l_517;
                        int l_573 = 0x8B888BF6L;
                        if (g_14)
                            break;
                        (*l_555) = (void*)0;
                        (*l_518) = ((safe_mod_func_uint16_t_u_u(func_74(((safe_rshift_func_int16_t_s_s(func_74((*l_518), (safe_mul_func_int8_t_s_s((safe_add_func_uint64_t_u_u(l_511, ((safe_lshift_func_int8_t_s_u(((l_566 != l_567) < (*l_518)), g_115.f2)) & (safe_add_func_uint32_t_u_u((g_570 == ((*l_525) = (void*)0)), ((&g_550 == &g_550) == g_465)))))), 0xA6L)), g_115.f1), g_326)) ^ l_573), l_540, g_115.f0), l_540)) <= l_574);
                    }
                }
                else
                {
                    return &g_403;
                }
            }
            --l_605;
            if ((((g_107 >= (safe_div_func_int16_t_s_s((g_366 = func_81((*l_599), ((--(*l_529)) != (safe_lshift_func_uint8_t_u_u((((safe_mod_func_int64_t_s_s(((*l_534) = (safe_div_func_int64_t_s_s(l_540, ((safe_mul_func_int16_t_s_s(g_516.f1, (+65535UL))) ^ ((*l_623) |= ((*l_585) | (((safe_mul_func_uint16_t_u_u((*l_598), ((l_603 | g_205) == g_234))) <= l_600) < (*l_599)))))))), 0x1EBD941FA45E1252LL)) != l_511) > l_605), l_605))), (*l_578))), l_603))) > 0xEA7EL) <= l_600))
            {
                short l_625 = (-1L);
                union U0 **l_642 = &l_548;
                char *l_643 = &g_227;
                l_540 &= (!5L);
                if (func_17(l_625))
                {
                    int l_628 = 1L;
                    unsigned long long l_629 = 0UL;
                    (*l_604) = 0x4B1AE772L;
                    (*l_595) &= l_625;
                    for (g_130 = 0; (g_130 <= 7); g_130 = safe_add_func_uint64_t_u_u(g_130, 4))
                    {
                        (*l_588) = g_94;
                        --l_629;
                    }
                    for (l_574 = 0; (l_574 == 25); l_574 = safe_add_func_uint32_t_u_u(l_574, 1))
                    {
                        int l_652 = 0xFB2059F0L;
                        (*l_583) = func_17(g_352);
                        (*l_576) = ((safe_sub_func_int32_t_s_s(g_205, (((safe_mul_func_int16_t_s_s((safe_mod_func_uint8_t_u_u(l_540, (safe_sub_func_uint32_t_u_u((func_17(g_382) >= (&g_550 == l_642)), 0xF54270C1L)))), ((*l_529) = l_625))) || (l_540 = (l_643 == (*g_571)))) | 0x95L))) >= (*l_596));
                        (*l_604) = (((g_570 = l_644) == (void*)0) || (safe_mul_func_int16_t_s_s((safe_div_func_int8_t_s_s((0x31AAL != (l_649 < (safe_mul_func_uint8_t_u_u(func_17(l_628), (5UL >= func_74(l_652, l_628, l_652)))))), g_115.f1)), (*l_583))));
                    }
                }
                else
                {
                    unsigned long long **l_662 = &l_623;
                    short *l_663 = &l_653;
                    unsigned char l_668 = 0x56L;
                    (*l_580) = (~l_653);
                    (*l_601) = func_81(l_625, (safe_sub_func_int64_t_s_s((1L | (((*l_534) = (l_603 > ((safe_div_func_int32_t_s_s(((*l_588) != (safe_add_func_uint16_t_u_u((g_318 > ((safe_lshift_func_int16_t_s_u(((*l_663) &= (((*l_662) = l_622) != (void*)0)), 1)) | (safe_add_func_int32_t_s_s(((safe_sub_func_int16_t_s_s(9L, l_511)) ^ g_318), 1UL)))), l_600))), g_516.f2)) ^ g_205))) != l_668)), 0xD0C7AC6AED9C4399LL)), (*l_578));
                }
            }
            else
            {
                for (l_653 = 0; (l_653 != 3); l_653 = safe_add_func_int64_t_s_s(l_653, 7))
                {
                    (*l_582) = g_115.f4;
                }
                p_57 = func_58(l_653);
            }
            (*l_588) = (safe_add_func_int64_t_s_s((safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((safe_mul_func_int16_t_s_s(((*g_572) <= (*l_596)), ((*l_529) &= ((*l_576) <= (safe_div_func_uint8_t_u_u((--(*l_686)), (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(((*l_694) = (safe_unary_minus_func_int32_t_s(g_115.f1))), 0x06FBL)), func_17((g_695 != (void*)0)))))))))) != (safe_rshift_func_int8_t_s_u(((*l_598) = (5UL || 246UL)), (*l_601)))), 1UL)), (*l_580))), l_600)), l_605));
        }
        else
        {
            unsigned l_702 = 0x72BF6ECEL;
            int *l_705 = (void*)0;
            int *l_706 = (void*)0;
            char l_710 = 0x14L;
            g_102 |= (safe_add_func_int16_t_s_s((safe_add_func_int16_t_s_s(l_702, 6UL)), l_702));
            l_710 &= (safe_add_func_uint8_t_u_u(((l_511 ^= (*p_57)) | l_707), ((l_709 = l_708) == (void*)0)));
            g_234 = ((safe_lshift_func_uint8_t_u_s((g_445 == 0x6451FEA3L), (***g_570))) < (***g_570));
        }
    }
    else
    {
        unsigned l_717 = 4294967292UL;
        char l_722 = 0x94L;
        int *l_730 = &g_43;
        int *l_731 = (void*)0;
        int *l_732 = &l_511;
        int l_733 = 0xC889A904L;
        int **l_734 = (void*)0;
        int **l_735 = &l_730;
        for (g_516.f0 = 0; (g_516.f0 > (-11)); g_516.f0--)
        {
            long long l_727 = (-1L);
            p_57 = func_58(l_511);
            if ((((((safe_lshift_func_uint16_t_u_s(l_717, 15)) & (safe_div_func_int64_t_s_s(func_17(l_707), (safe_mod_func_int8_t_s_s((~l_722), (safe_add_func_int32_t_s_s((l_653 ^ (safe_lshift_func_int8_t_s_s(((~(((void*)0 != &g_445) && 0x7FL)) != 0xE1EEL), l_722))), l_511))))))) & l_722) > l_717) != 0x56DBL))
            {
                l_727 &= (-1L);
            }
            else
            {
                int *l_729 = &l_603;
                int **l_728 = &l_729;
                (*l_728) = func_58(g_115.f2);
                if (g_516.f1)
                    continue;
                (*l_728) = l_730;
            }
        }
        (*l_732) ^= (*p_57);
        l_733 &= l_511;
        (*l_735) = &g_234;
    }
    for (g_283 = 0; (g_283 >= 41); g_283 = safe_add_func_int8_t_s_s(g_283, 8))
    {
        char *l_740 = &g_227;
        int l_741 = 0L;
        unsigned short l_826 = 65527UL;
        short l_918 = 9L;
        int l_992 = 0x6AB14715L;
        union U0 ***l_1029 = (void*)0;
        unsigned short l_1032 = 0xA5E9L;
        unsigned short **l_1082 = &l_529;
        int l_1117 = 0x9C916FF9L;
        for (g_25 = 26; (g_25 > 27); g_25 = safe_add_func_int16_t_s_s(g_25, 1))
        {
            unsigned short l_746 = 65529UL;
            int l_779 = 0xA465EE46L;
            int l_840 = (-8L);
            int l_849 = 3L;
            unsigned char ***l_933 = (void*)0;
            unsigned char ***l_934 = &g_931;
            int l_997 = 0xE2F74331L;
            if (func_81((*g_695), (((l_740 != (void*)0) | l_707) | 1L), l_741))
            {
                union U0 ***l_749 = &g_549;
                union U0 ***l_751 = &l_750;
                long long *l_752 = &g_318;
                long long *l_753 = &g_326;
                long long *l_754 = &g_516.f3;
                long long *l_755 = &g_516.f3;
                long long *l_756 = (void*)0;
                int l_757 = 0x1C56A950L;
                int l_758 = 5L;
                int **l_830 = &g_829;
                l_758 |= (((*l_752) = (safe_add_func_int32_t_s_s(func_81((l_603 = (safe_rshift_func_int8_t_s_s((((*l_752) = (l_746 ^ ((((*l_749) = &g_550) == ((*l_751) = l_750)) | ((*l_755) = ((-1L) != func_81(l_653, g_461, ((***l_644) = (((g_107 |= (func_81((*g_695), ((*l_752) = g_227), (((*l_753) = 0xB277BD7251C7DA0ALL) || l_746)) > l_741)) | l_757) < 0xC19A4992157995CFLL)))))))) != l_746), 5))), g_461, l_757), l_746))) && l_741);
                if ((safe_sub_func_uint64_t_u_u(l_649, (safe_rshift_func_uint8_t_u_s((safe_mod_func_int8_t_s_s((**g_571), (-3L))), l_746)))))
                {
                    int *l_766 = &l_741;
                    int **l_765 = &l_766;
                    (*l_765) = &g_102;
                }
                else
                {
                    long long l_780 = (-1L);
                    int l_816 = 4L;
                    for (g_382 = 0; (g_382 != (-25)); --g_382)
                    {
                        unsigned *l_781 = &g_130;
                        int l_782 = (-10L);
                        int *l_783 = &l_782;
                        int *l_784 = &l_779;
                        int *l_785 = (void*)0;
                        int *l_786 = (void*)0;
                        int *l_787 = &l_511;
                        int *l_788 = &g_94;
                        int *l_789 = (void*)0;
                        int *l_790 = &l_758;
                        int *l_791 = &l_511;
                        int *l_792 = &g_94;
                        int *l_793 = &l_782;
                        int *l_794 = (void*)0;
                        int *l_795 = (void*)0;
                        int *l_796 = &l_782;
                        int *l_797 = &l_757;
                        int *l_798 = &g_234;
                        int *l_799 = &l_741;
                        int *l_800 = &g_94;
                        int *l_801 = (void*)0;
                        int *l_802 = &l_782;
                        int *l_803 = (void*)0;
                        int *l_804 = &g_94;
                        int *l_805 = &l_603;
                        int *l_806 = &g_94;
                        int *l_807 = (void*)0;
                        int *l_808 = &g_234;
                        int *l_809 = &l_603;
                        int *l_810 = (void*)0;
                        int *l_811 = &g_102;
                        int *l_812 = (void*)0;
                        int *l_813 = &g_94;
                        int *l_814 = &g_94;
                        int *l_815 = &l_511;
                        int *l_817 = &l_741;
                        int *l_818 = &l_782;
                        int *l_819 = &g_94;
                        int *l_820 = &l_757;
                        int *l_821 = &l_511;
                        int *l_822 = &l_741;
                        int *l_823 = &l_603;
                        int *l_824 = &l_603;
                        int *l_825 = &l_758;
                        (*l_783) = ((safe_mod_func_uint8_t_u_u(g_326, func_81(((*l_781) = (safe_mod_func_uint32_t_u_u(((65529UL ^ (((((l_746 >= (l_779 &= (safe_add_func_int16_t_s_s(g_624, ((safe_div_func_int8_t_s_s((***g_570), (g_461 || ((g_283 & (-1L)) == (g_205 = (safe_sub_func_int8_t_s_s(l_758, g_516.f2))))))) >= 0x0F25L))))) ^ l_780) != 0x58L) && l_649) > g_115.f0)) <= l_757), (-1L)))), l_741, l_782))) >= 0x3EEDL);
                        l_826--;
                    }
                }
                if (g_403)
                    break;
                (*l_830) = g_829;
            }
            else
            {
                int *l_831 = &l_511;
                int *l_832 = (void*)0;
                int *l_833 = &l_603;
                int *l_834 = &g_102;
                int *l_835 = &g_94;
                int *l_836 = &l_603;
                int *l_837 = &l_779;
                int *l_838 = &g_102;
                int *l_839 = &g_94;
                int *l_841 = &g_94;
                int *l_842 = &l_603;
                int *l_843 = &l_741;
                int *l_844 = &g_102;
                int *l_845 = (void*)0;
                int *l_846 = &l_741;
                int *l_847 = &l_511;
                int *l_848 = (void*)0;
                int *l_850 = &l_603;
                int *l_851 = (void*)0;
                int *l_852 = &g_234;
                int *l_853 = &g_102;
                int *l_854 = &l_840;
                int *l_855 = (void*)0;
                int *l_856 = &l_779;
                int *l_857 = &l_849;
                int *l_858 = &g_94;
                int *l_859 = &l_511;
                int *l_860 = &g_94;
                int *l_861 = &l_741;
                int *l_862 = (void*)0;
                int *l_863 = &g_94;
                int *l_864 = (void*)0;
                int *l_865 = &l_741;
                int l_895 = 0x8C5AB1CBL;
                p_57 = &l_741;
                g_866++;
                for (g_326 = (-3); (g_326 >= (-9)); --g_326)
                {
                    unsigned *l_873 = &g_130;
                    unsigned short l_904 = 65535UL;
                    int l_927 = (-1L);
                    if ((safe_add_func_uint32_t_u_u(((*l_873) &= (*g_695)), (*p_57))))
                    {
                        char l_874 = 0L;
                        int *l_875 = &l_603;
                        int *l_876 = &l_840;
                        int *l_877 = &l_741;
                        int *l_878 = &l_849;
                        int *l_879 = &l_741;
                        int *l_880 = &l_840;
                        int *l_881 = &l_779;
                        int *l_882 = (void*)0;
                        int *l_883 = &l_741;
                        int *l_884 = &l_741;
                        int *l_885 = &l_840;
                        int *l_886 = &l_603;
                        int *l_887 = (void*)0;
                        int *l_888 = (void*)0;
                        int *l_891 = &g_102;
                        int *l_892 = &g_102;
                        int *l_893 = &g_234;
                        int *l_894 = &l_840;
                        int *l_896 = &g_102;
                        int *l_897 = &l_511;
                        int *l_898 = &g_234;
                        int *l_899 = (void*)0;
                        int *l_900 = &l_603;
                        int *l_901 = (void*)0;
                        int *l_902 = &g_889;
                        int *l_903 = &g_234;
                        int **l_907 = (void*)0;
                        int **l_908 = &l_858;
                        l_904++;
                        (*l_891) &= (*p_57);
                        if (l_511)
                            continue;
                        (*l_908) = &g_43;
                    }
                    else
                    {
                        unsigned char *l_909 = (void*)0;
                        unsigned char *l_910 = (void*)0;
                        unsigned char *l_911 = &l_649;
                        int **l_922 = (void*)0;
                        int **l_923 = (void*)0;
                        int **l_924 = &l_834;
                        (*l_852) &= ((*l_838) &= 0xDF5AC9C0L);
                        (*l_838) = (((*l_911) ^= (*l_831)) ^ (safe_add_func_int16_t_s_s(l_890, (((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(func_81((*g_695), l_779, l_918), (safe_unary_minus_func_int32_t_s((*p_57))))), 6)) & (((safe_mod_func_uint16_t_u_u(l_849, 0x58FAL)) ^ l_779) & g_43)) && l_511))));
                        (*l_924) = p_57;
                    }
                    if (func_81(((*l_873)--), (*l_858), (*g_572)))
                    {
                        return &g_22;
                    }
                    else
                    {
                        --g_928;
                        (*p_57) = (*p_57);
                        if ((*l_843))
                            continue;
                    }
                }
            }
            (*l_934) = g_931;
            if ((*g_829))
            {
                int *l_935 = &l_890;
                int *l_936 = &l_890;
                int *l_937 = &g_889;
                int *l_938 = &l_603;
                int *l_939 = &l_741;
                int *l_940 = &l_840;
                int *l_941 = &g_889;
                int *l_942 = (void*)0;
                int *l_943 = (void*)0;
                int *l_944 = (void*)0;
                int *l_945 = &g_889;
                int *l_946 = &l_890;
                int *l_947 = (void*)0;
                int *l_948 = (void*)0;
                int *l_949 = &l_849;
                int *l_950 = &l_511;
                int *l_951 = &l_890;
                int *l_952 = (void*)0;
                int *l_953 = &g_94;
                int *l_954 = &l_511;
                int *l_955 = &l_741;
                int *l_956 = &l_779;
                int *l_957 = &g_94;
                int *l_958 = &l_840;
                int *l_959 = &l_603;
                int *l_960 = &l_603;
                int *l_961 = &l_890;
                int *l_962 = &g_94;
                int *l_963 = &l_849;
                int *l_964 = &l_603;
                int *l_965 = &g_889;
                char l_966 = 0x5EL;
                int *l_967 = &g_889;
                int *l_968 = &l_840;
                int *l_969 = &l_741;
                int *l_970 = &g_102;
                int *l_971 = &g_94;
                int *l_972 = &l_779;
                int *l_973 = &g_94;
                int *l_974 = &g_94;
                int *l_975 = &g_889;
                int *l_976 = &l_849;
                int *l_978 = &l_977;
                int *l_979 = (void*)0;
                int *l_980 = &l_741;
                int *l_981 = (void*)0;
                int l_983 = 1L;
                int *l_985 = &l_741;
                int *l_986 = &g_889;
                int *l_987 = &l_890;
                int *l_988 = &l_741;
                int *l_989 = &l_977;
                int *l_990 = &l_741;
                int *l_991 = &g_889;
                int *l_994 = &l_511;
                int *l_995 = &l_849;
                int *l_996 = (void*)0;
                int *l_998 = &l_779;
                int *l_999 = &g_94;
                int *l_1000 = &l_741;
                int *l_1001 = &l_849;
                int *l_1002 = &l_840;
                int *l_1003 = &l_997;
                int *l_1004 = (void*)0;
                int *l_1005 = &l_977;
                if (l_840)
                    break;
                ++g_1006;
                for (g_516.f3 = 0; (g_516.f3 <= (-13)); g_516.f3--)
                {
                    int *l_1011 = &l_983;
                    int **l_1012 = &l_954;
                    int *l_1014 = &l_779;
                    int *l_1015 = &l_982;
                    int *l_1016 = &g_102;
                    int *l_1017 = (void*)0;
                    int *l_1018 = &l_982;
                    union U0 ***l_1028 = &l_750;
                    if ((*g_829))
                        break;
                    (*l_1012) = l_1011;
                    ++g_1019;
                    if ((safe_mod_func_int64_t_s_s((*l_1011), (*l_1015))))
                    {
                        union U0 ****l_1030 = &l_1029;
                        (*l_969) = ((safe_add_func_uint64_t_u_u((safe_add_func_int8_t_s_s(((*l_740) |= (l_1028 == ((*l_1030) = l_1029))), g_993)), g_928)) != g_1019);
                        (*l_1000) = ((g_115.f1 && l_1031) >= l_1032);
                    }
                    else
                    {
                        return &g_22;
                    }
                }
            }
            else
            {
                unsigned l_1058 = 8UL;
                int l_1125 = 0x2A1E0A9EL;
                int l_1131 = 0x571B87A0L;
                int l_1142 = 0xB40D87BFL;
                for (l_1032 = 20; (l_1032 <= 15); l_1032 = safe_sub_func_int64_t_s_s(l_1032, 5))
                {
                    unsigned short *l_1035 = (void*)0;
                    return l_1035;
                }
                for (g_384 = 0; (g_384 >= 14); g_384 = safe_add_func_uint64_t_u_u(g_384, 5))
                {
                    short l_1048 = 0xC08FL;
                    unsigned short l_1051 = 0xF459L;
                    int *l_1063 = &l_849;
                    unsigned long long *l_1071 = &g_1019;
                    unsigned short **l_1088 = &g_27;
                }
                for (g_1006 = 0; (g_1006 == 7); g_1006 = safe_add_func_int32_t_s_s(g_1006, 9))
                {
                    int *l_1105 = &l_890;
                    int *l_1106 = &l_890;
                    int l_1107 = 1L;
                    int *l_1108 = &g_234;
                    int *l_1109 = &l_992;
                    int *l_1110 = &g_889;
                    int *l_1111 = &l_603;
                    int *l_1112 = &l_890;
                    int *l_1113 = &l_603;
                    int *l_1114 = &l_1107;
                    int *l_1115 = &l_849;
                    int *l_1116 = &l_997;
                    int *l_1118 = &g_234;
                    int *l_1119 = &l_890;
                    int *l_1120 = &g_94;
                    int *l_1121 = &l_1107;
                    int *l_1122 = (void*)0;
                    int *l_1123 = (void*)0;
                    int *l_1124 = &l_992;
                    int *l_1126 = (void*)0;
                    int *l_1127 = &g_889;
                    int *l_1128 = (void*)0;
                    int *l_1129 = &l_840;
                    int *l_1130 = &l_997;
                    int *l_1132 = &l_1125;
                    int *l_1133 = &g_889;
                    int *l_1134 = &l_992;
                    int *l_1135 = &l_1131;
                    int *l_1136 = &l_982;
                    int *l_1137 = &l_997;
                    int *l_1138 = &l_1125;
                    int *l_1139 = &g_889;
                    int *l_1140 = &g_94;
                    int *l_1141 = (void*)0;
                    int *l_1143 = &l_1125;
                    int *l_1144 = &l_511;
                    --g_1145;
                }
            }
            l_779 ^= (l_890 |= (*g_829));
        }
    }
    l_1148 = &l_977;
    return l_529;
}







static int * func_58(long long p_59)
{
    unsigned char *l_69 = &g_25;
    int l_78 = 0L;
    unsigned char *l_286 = (void*)0;
    int *l_287 = &g_102;
    int l_363 = 0xB4A18077L;
    char l_367 = 1L;
    char *l_420 = &g_227;
    unsigned l_490 = 18446744073709551611UL;
    (*l_287) = (func_17(((l_78 = (safe_add_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_s(g_25, 3)) && ((&g_22 != (void*)0) || (6L ^ (safe_add_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(p_59)), (safe_lshift_func_uint8_t_u_u((++(*l_69)), 2))))))), (g_107 = ((safe_add_func_int8_t_s_s((func_74(g_22, (((void*)0 == l_69) < l_78), l_78) && l_78), g_115.f0)) <= l_78))))) && l_78)) == p_59);
    for (g_234 = 5; (g_234 == (-27)); --g_234)
    {
        int *l_290 = (void*)0;
        int *l_291 = (void*)0;
        int l_292 = 0L;
        int *l_293 = &l_292;
        int *l_294 = &g_94;
        int *l_295 = &l_292;
        int *l_296 = &g_94;
        int *l_297 = &l_78;
        int *l_298 = (void*)0;
        int *l_299 = &l_292;
        int *l_300 = &l_292;
        int *l_301 = &l_292;
        int *l_302 = &g_94;
        int *l_303 = &g_94;
        int *l_304 = &g_102;
        int *l_305 = &g_94;
        int *l_306 = &l_78;
        int *l_307 = &g_102;
        int *l_308 = &g_102;
        int *l_309 = &l_292;
        int *l_310 = &g_102;
        int *l_311 = &g_102;
        int *l_312 = &l_78;
        int *l_313 = &l_292;
        int *l_314 = &g_94;
        int l_315 = (-1L);
        int *l_316 = &l_78;
        int *l_317 = &l_315;
        int l_319 = 0L;
        int *l_320 = &g_94;
        int l_321 = 0L;
        int *l_322 = &l_292;
        int *l_323 = (void*)0;
        int *l_324 = &g_102;
        int *l_325 = (void*)0;
        int *l_327 = (void*)0;
        int *l_328 = (void*)0;
        int *l_329 = &l_319;
        long long l_330 = (-1L);
        int *l_331 = (void*)0;
        int *l_332 = &l_321;
        int l_333 = 0x20683FD9L;
        int *l_334 = &g_94;
        int *l_335 = (void*)0;
        int *l_336 = &l_333;
        int *l_337 = &l_292;
        int *l_338 = &l_319;
        int *l_339 = &l_321;
        int *l_340 = &l_321;
        int *l_341 = &l_78;
        int *l_342 = &l_292;
        int *l_343 = &l_292;
        int *l_344 = &l_333;
        int *l_345 = (void*)0;
        int *l_346 = (void*)0;
        int *l_347 = &l_292;
        int *l_348 = &l_321;
        int l_349 = (-1L);
        int *l_350 = &g_102;
        int *l_351 = &l_333;
        int *l_353 = &g_94;
        int *l_354 = &l_292;
        int *l_355 = &l_333;
        int *l_356 = &l_315;
        int *l_357 = &l_319;
        int *l_358 = &l_321;
        int *l_359 = &l_333;
        int *l_360 = &l_333;
        int *l_361 = (void*)0;
        int *l_362 = &l_292;
        int *l_364 = (void*)0;
        int *l_365 = &l_319;
        int *l_368 = (void*)0;
        int *l_369 = &l_321;
        int *l_370 = &l_333;
        int *l_371 = (void*)0;
        int *l_372 = &l_321;
        int *l_373 = &g_94;
        int *l_374 = &l_333;
        int *l_375 = &l_319;
        int *l_376 = &g_94;
        int *l_377 = &l_349;
        int *l_378 = &l_363;
        int *l_379 = &g_94;
        int *l_380 = &l_349;
        int *l_381 = &l_333;
        int *l_383 = &l_333;
        if (g_115.f2)
            break;
        g_384++;
    }
    (*l_287) = p_59;
    for (g_382 = 0; (g_382 < (-21)); g_382 = safe_sub_func_int16_t_s_s(g_382, 1))
    {
        int *l_389 = &l_78;
        int *l_390 = (void*)0;
        int *l_391 = &g_234;
        int *l_392 = &l_78;
        int *l_393 = &l_78;
        int *l_394 = &g_234;
        int l_395 = 0L;
        int *l_396 = &g_234;
        int *l_397 = &l_363;
        int *l_398 = &g_234;
        int l_399 = (-1L);
        int *l_400 = &g_234;
        int l_401 = 0x19A83302L;
        int *l_402 = (void*)0;
        int **l_408 = (void*)0;
        unsigned short *l_411 = (void*)0;
        unsigned short **l_412 = &l_411;
        char *l_413 = (void*)0;
        char **l_469 = (void*)0;
        unsigned long long l_506 = 18446744073709551609UL;
        --g_403;
        if (((safe_mul_func_int8_t_s_s(((l_287 = &l_399) != (void*)0), (safe_sub_func_int16_t_s_s((g_94 & (g_227 &= (((*l_412) = l_411) == (void*)0))), (l_78 || l_78))))) != l_78))
        {
            unsigned l_416 = 4294967295UL;
            unsigned short *l_417 = &g_403;
            int l_432 = 1L;
            int l_459 = 0xE2E9172EL;
            if ((safe_sub_func_uint8_t_u_u(g_22, l_416)))
            {
                short *l_423 = &g_366;
                int l_431 = 0x37CD8053L;
                unsigned *l_491 = &g_283;
                if (func_74(p_59, ((((*l_412) = &g_22) == l_417) && ((l_420 == l_413) == (((void*)0 == &l_417) > p_59))), ((*l_423) &= (safe_mul_func_uint8_t_u_u(g_115.f0, (*l_394))))))
                {
                    short l_433 = 0x449BL;
                    int *l_434 = &l_399;
                    int *l_435 = &l_78;
                    int *l_436 = &g_234;
                    int *l_437 = &l_363;
                    int *l_438 = &g_94;
                    int *l_439 = &l_78;
                    int *l_440 = &g_94;
                    int *l_441 = (void*)0;
                    int *l_442 = (void*)0;
                    int *l_443 = &l_401;
                    int *l_444 = &l_395;
                    for (g_283 = 12; (g_283 != 5); g_283 = safe_sub_func_int32_t_s_s(g_283, 1))
                    {
                        char *l_428 = (void*)0;
                        char *l_429 = (void*)0;
                        char *l_430 = &l_367;
                        (*l_394) &= ((g_366 >= 0xE5L) && (safe_mul_func_int8_t_s_s(((*l_430) = ((*l_420) &= p_59)), p_59)));
                    }
                    (*l_397) = ((void*)0 != l_287);
                    (*l_392) = p_59;
                    ++g_445;
                }
                else
                {
                    short l_448 = 0L;
                    int *l_449 = &l_363;
                    int *l_450 = &l_431;
                    int *l_451 = &l_432;
                    int *l_452 = &l_78;
                    int *l_453 = &l_363;
                    int *l_454 = &l_399;
                    int *l_455 = &g_102;
                    int *l_456 = &l_401;
                    int *l_457 = &l_78;
                    int *l_458 = &g_234;
                    int *l_460 = &l_395;
                    int *l_462 = &l_401;
                    int *l_463 = &g_94;
                    int *l_464 = &l_431;
                    char ***l_468 = (void*)0;
                    --g_465;
                    l_469 = &l_413;
                }
                if ((safe_div_func_int8_t_s_s(((safe_sub_func_int64_t_s_s(p_59, g_445)) | (safe_sub_func_uint8_t_u_u(((safe_div_func_uint8_t_u_u(g_465, ((*l_420) ^= p_59))) < (p_59 | ((*l_491) ^= (safe_div_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_int8_t_s_s((*l_393), func_17((*l_287)))), (safe_add_func_int16_t_s_s((!(safe_lshift_func_int8_t_s_u((safe_mod_func_uint64_t_u_u(0x9F2FE954CA7728DFLL, g_318)), g_115.f1))), l_490)))), (*l_391)))))), (-6L)))), 2L)))
                {
                    (*l_389) = ((-1L) && (*l_287));
                }
                else
                {
                    for (l_432 = 0; (l_432 > 21); l_432 = safe_add_func_int64_t_s_s(l_432, 6))
                    {
                        int *l_494 = &g_102;
                        int **l_495 = &l_392;
                        (*l_495) = l_494;
                    }
                    if (p_59)
                        continue;
                }
                for (g_115.f1 = 0; (g_115.f1 >= 29); g_115.f1 = safe_add_func_int8_t_s_s(g_115.f1, 1))
                {
                    int **l_498 = &l_400;
                    union U0 *l_503 = &g_115;
                    union U0 **l_502 = &l_503;
                    union U0 ***l_501 = &l_502;
                    (*l_498) = &l_431;
                    if ((safe_add_func_int64_t_s_s(0x3622FC61834C5308LL, 18446744073709551611UL)))
                    {
                        if (g_384)
                            break;
                    }
                    else
                    {
                        (*l_394) |= 8L;
                    }
                    (*l_501) = (void*)0;
                    (*l_400) = ((*l_397) = g_115.f0);
                }
                for (l_401 = (-16); (l_401 != (-22)); --l_401)
                {
                    (*l_287) ^= 0x1CA11431L;
                    (*l_397) |= ((*l_394) = (-1L));
                    (*l_397) = p_59;
                    return &g_43;
                }
            }
            else
            {
                int **l_507 = &l_397;
                l_506 ^= ((g_403 == (*l_287)) ^ (*l_389));
                (*l_507) = &l_78;
            }
        }
        else
        {
            return &g_102;
        }
    }
    return &g_43;
}







static short func_74(unsigned char p_75, unsigned p_76, short p_77)
{
    unsigned char l_87 = 8UL;
    unsigned l_232 = 4294967292UL;
    int *l_233 = &g_234;
    unsigned *l_242 = &g_130;
    int l_245 = 1L;
    char *l_250 = &g_227;
    unsigned short l_251 = 0x3C17L;
    int l_264 = 0L;
    int l_272 = 0xD1DE3320L;
    (*l_233) &= ((safe_mod_func_int64_t_s_s(0xEA27655505F459CALL, func_81(g_43, p_77, (safe_sub_func_uint32_t_u_u(l_87, (safe_mul_func_int8_t_s_s(p_77, (((safe_sub_func_uint32_t_u_u(p_77, 1L)) <= 0x1CD3C6E85A6EDB5BLL) < p_77)))))))) || l_232);
    g_94 &= (*l_233);
    if ((l_251 |= (safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s((g_241 = (++p_75)), func_81((((*l_233) <= func_81(func_81(func_81(((*l_242) = g_115.f0), ((*l_233) != (safe_div_func_int64_t_s_s((65529UL <= l_245), (safe_add_func_uint16_t_u_u(p_77, p_76))))), ((*l_250) = ((g_115.f2 > (safe_sub_func_int8_t_s_s((*l_233), g_227))) & g_115.f0))), g_115.f4, (*l_233)), (*l_233), g_115.f1)) ^ (*l_233)), g_115.f1, g_234))), (*l_233)))))
    {
        (*l_233) = g_107;
    }
    else
    {
        long long l_255 = 1L;
        int *l_258 = &g_102;
        int *l_262 = &g_234;
        int *l_263 = &g_102;
        int *l_265 = &g_94;
        int l_266 = 0L;
        int *l_267 = (void*)0;
        int *l_268 = (void*)0;
        int *l_269 = &l_266;
        int *l_270 = &g_102;
        int *l_271 = (void*)0;
        int *l_273 = &l_272;
        int *l_274 = &g_94;
        int *l_275 = &l_272;
        int *l_276 = &g_94;
        int *l_277 = (void*)0;
        int *l_278 = (void*)0;
        int *l_279 = &l_264;
        int *l_280 = &g_94;
        int *l_281 = &g_102;
        int *l_282 = &l_266;
        (*l_258) = ((*l_233) = (g_130 | (safe_div_func_int8_t_s_s(((safe_unary_minus_func_uint32_t_u((l_255 < g_130))) < p_77), ((*l_250) = (safe_div_func_int8_t_s_s((*l_233), 0x72L)))))));
        (*l_258) = p_75;
        if (p_75)
        {
            unsigned short l_259 = 0xD433L;
            return l_259;
        }
        else
        {
            for (g_102 = 0; (g_102 == 5); g_102 = safe_add_func_uint16_t_u_u(g_102, 6))
            {
                (*l_233) = g_115.f2;
                if (p_76)
                    continue;
                return p_76;
            }
        }
        g_283++;
    }
    return p_76;
}







static unsigned long long func_81(unsigned p_82, long long p_83, char p_84)
{
    unsigned char l_92 = 0xD1L;
    int *l_93 = &g_94;
    int l_136 = 1L;
    char *l_226 = &g_227;
    unsigned char *l_228 = &l_92;
    short l_229 = 0x1569L;
    int *l_230 = &g_102;
    int **l_231 = &l_230;
    (*l_93) |= l_92;
    for (p_82 = 0; (p_82 == 15); p_82 = safe_add_func_int64_t_s_s(p_82, 1))
    {
        int *l_112 = (void*)0;
        int l_179 = 0L;
        int l_183 = 0x9B9B320AL;
        int l_186 = 0x69C2BC1CL;
        int l_187 = 0L;
        if (p_83)
        {
            int l_99 = 0x3B787D1AL;
            int *l_100 = (void*)0;
            int *l_101 = &g_102;
            unsigned char *l_108 = &l_92;
            unsigned long long l_125 = 18446744073709551614UL;
            unsigned short *l_128 = &g_22;
            int *l_171 = (void*)0;
            int **l_172 = &l_171;
            (*l_101) = ((*l_93) = (safe_lshift_func_uint8_t_u_u(((p_84 >= g_43) >= l_99), 0)));
            if ((safe_mod_func_uint64_t_u_u((safe_sub_func_uint8_t_u_u((--(*l_108)), p_82)), p_84)))
            {
                int **l_111 = &l_100;
                (*l_111) = &g_94;
                (*l_111) = l_112;
                if (p_84)
                    break;
            }
            else
            {
                union U0 *l_114 = &g_115;
                union U0 **l_113 = &l_114;
                unsigned short *l_122 = &g_22;
                unsigned *l_129 = &g_130;
                int l_131 = (-6L);
                int l_167 = 6L;
                unsigned short l_168 = 0xA995L;
                union U0 *l_170 = &g_115;
                (*l_113) = (void*)0;
                (*l_93) &= p_84;
                l_131 = ((safe_lshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(((safe_div_func_int16_t_s_s((l_122 == (void*)0), ((0x145CL >= (safe_sub_func_int64_t_s_s(g_115.f2, l_125))) | g_102))) & (safe_lshift_func_uint8_t_u_s(p_84, (g_115.f0 == ((*l_129) = (l_128 == &g_22)))))), g_115.f4)), 1)) < g_115.f1);
                for (l_125 = 0; (l_125 != 29); ++l_125)
                {
                    unsigned *l_152 = &g_130;
                    int l_153 = 0x1C7CC605L;
                    for (g_130 = 0; (g_130 == 23); g_130 = safe_add_func_int8_t_s_s(g_130, 7))
                    {
                        int *l_137 = &l_136;
                        int *l_138 = &l_131;
                        int *l_139 = &l_136;
                        int *l_140 = &g_94;
                        int *l_141 = &g_94;
                        int *l_142 = &g_102;
                        int *l_143 = (void*)0;
                        int *l_144 = (void*)0;
                        unsigned short l_145 = 0x79EAL;
                        --l_145;
                        (*l_139) = ((*l_101) &= l_131);
                    }
                    (*l_101) = (safe_mod_func_uint32_t_u_u(((((*l_93) = 7UL) | (safe_div_func_int64_t_s_s((&p_82 != l_152), l_131))) || (l_153 ^ g_115.f2)), ((p_82 < (safe_unary_minus_func_uint16_t_u(((safe_add_func_uint8_t_u_u(0x8AL, (-1L))) > 0x5DBD19AAL)))) | g_14)));
                    if ((0L <= ((safe_mul_func_uint8_t_u_u((l_168 = (safe_mul_func_uint16_t_u_u((g_115.f4 != (g_43 & ((((*l_108) = 0xB8L) == (safe_rshift_func_uint16_t_u_s(l_131, 7))) > ((l_167 = (safe_mul_func_uint16_t_u_u((p_83 & ((safe_rshift_func_int16_t_s_u(p_82, 10)) || p_84)), p_83))) & g_102)))), p_83))), 0xC7L)) >= 0x70F7B9E3L)))
                    {
                        int **l_169 = &l_93;
                        (*l_169) = &g_94;
                        (*l_101) &= (*l_93);
                        l_170 = ((*l_113) = &g_115);
                    }
                    else
                    {
                        (*l_93) |= g_43;
                        if (g_102)
                            continue;
                    }
                }
            }
            (*l_172) = l_171;
        }
        else
        {
            int *l_173 = (void*)0;
            int *l_174 = &g_102;
            int *l_175 = &l_136;
            int *l_176 = &l_136;
            int *l_177 = &l_136;
            int *l_178 = &g_102;
            int *l_180 = (void*)0;
            int *l_181 = &l_136;
            int *l_182 = &l_136;
            int *l_184 = &l_179;
            int *l_185 = (void*)0;
            int *l_188 = &l_187;
            int *l_189 = (void*)0;
            int *l_190 = &l_179;
            int l_191 = 0x88EEA078L;
            int *l_192 = (void*)0;
            int *l_193 = &l_187;
            int l_194 = (-1L);
            int l_195 = 0x286226F5L;
            int *l_196 = &l_179;
            int *l_197 = &g_94;
            int *l_198 = &g_102;
            int *l_199 = &g_94;
            int *l_200 = &l_183;
            int *l_201 = &g_94;
            int *l_202 = (void*)0;
            int *l_203 = &l_191;
            int *l_204 = &l_186;
            g_205--;
            g_94 ^= (+1L);
        }
        for (l_187 = 0; (l_187 <= (-28)); --l_187)
        {
            int **l_210 = &l_112;
            (*l_210) = &l_186;
            if ((*l_93))
                break;
        }
    }
    (*l_230) = ((((safe_lshift_func_int8_t_s_u((safe_unary_minus_func_uint8_t_u((safe_lshift_func_uint16_t_u_s((safe_sub_func_uint32_t_u_u((((*l_93) = ((*l_228) = (((safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s((~1L), p_84)), (((p_82 & g_102) < p_84) > (((*l_226) = (safe_add_func_int64_t_s_s(g_43, ((safe_add_func_int32_t_s_s((*l_93), (((void*)0 != l_93) <= g_94))) | 0x58L)))) != p_83)))) > 1L) || g_130))) < l_229), p_84)), 12)))), 6)) || g_130) > g_115.f2) || (*l_93));
    (*l_231) = &l_136;
    return p_84;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_22, "g_22", print_hash_value);
    transparent_crc(g_25, "g_25", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_94, "g_94", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_107, "g_107", print_hash_value);
    transparent_crc(g_115.f0, "g_115.f0", print_hash_value);
    transparent_crc(g_115.f1, "g_115.f1", print_hash_value);
    transparent_crc(g_115.f2, "g_115.f2", print_hash_value);
    transparent_crc(g_115.f4, "g_115.f4", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_205, "g_205", print_hash_value);
    transparent_crc(g_227, "g_227", print_hash_value);
    transparent_crc(g_234, "g_234", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_283, "g_283", print_hash_value);
    transparent_crc(g_318, "g_318", print_hash_value);
    transparent_crc(g_326, "g_326", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_366, "g_366", print_hash_value);
    transparent_crc(g_382, "g_382", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_445, "g_445", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_465, "g_465", print_hash_value);
    transparent_crc(g_516.f0, "g_516.f0", print_hash_value);
    transparent_crc(g_516.f1, "g_516.f1", print_hash_value);
    transparent_crc(g_516.f2, "g_516.f2", print_hash_value);
    transparent_crc(g_516.f4, "g_516.f4", print_hash_value);
    transparent_crc(g_624, "g_624", print_hash_value);
    transparent_crc(g_866, "g_866", print_hash_value);
    transparent_crc(g_889, "g_889", print_hash_value);
    transparent_crc(g_928, "g_928", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_993, "g_993", print_hash_value);
    transparent_crc(g_1006, "g_1006", print_hash_value);
    transparent_crc(g_1013, "g_1013", print_hash_value);
    transparent_crc(g_1019, "g_1019", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    transparent_crc(g_1181, "g_1181", print_hash_value);
    transparent_crc(g_1192, "g_1192", print_hash_value);
    transparent_crc(g_1220, "g_1220", print_hash_value);
    transparent_crc(g_1384, "g_1384", print_hash_value);
    transparent_crc(g_1481, "g_1481", print_hash_value);
    transparent_crc(g_1511, "g_1511", print_hash_value);
    transparent_crc(g_1516, "g_1516", print_hash_value);
    transparent_crc(g_1576, "g_1576", print_hash_value);
    transparent_crc(g_1710, "g_1710", print_hash_value);
    transparent_crc(g_1753, "g_1753", print_hash_value);
    transparent_crc(g_1827, "g_1827", print_hash_value);
    transparent_crc(g_1917, "g_1917", print_hash_value);
    transparent_crc(g_2082, "g_2082", print_hash_value);
    transparent_crc(g_2170.f0, "g_2170.f0", print_hash_value);
    transparent_crc(g_2170.f1, "g_2170.f1", print_hash_value);
    transparent_crc(g_2170.f2, "g_2170.f2", print_hash_value);
    transparent_crc(g_2170.f3, "g_2170.f3", print_hash_value);
    transparent_crc(g_2267, "g_2267", print_hash_value);
    transparent_crc(g_2300, "g_2300", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
