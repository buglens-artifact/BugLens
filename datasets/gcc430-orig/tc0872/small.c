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



static volatile unsigned g_2 = 8UL;
static unsigned g_5 = 0x69F7FD1EL;
static unsigned g_14 = 18446744073709551615UL;
static unsigned g_21 = 0xB69B2E41L;
static unsigned char g_26 = 0UL;
static unsigned g_34 = 0UL;
static short g_70 = 0x2805L;
static unsigned char g_72 = 6UL;
static unsigned short g_82 = 65531UL;
static unsigned short g_84 = 9UL;
static int g_87 = 9L;
static int *g_109 = &g_87;
static int **g_110 = (void*)0;
static unsigned char g_129 = 0x3DL;
static int g_132 = 0x04DBB371L;
static int g_134 = 0xB86155BFL;
static char g_153 = 0xA3L;
static const char *g_197 = &g_153;
static const char **g_196 = &g_197;
static unsigned char g_216 = 255UL;
static int g_241 = 1L;
static int g_244 = 0x0EF8999BL;
static const unsigned *g_246 = &g_34;
static const unsigned **g_245 = &g_246;
static unsigned *g_248 = &g_34;
static unsigned * const *g_247 = &g_248;
static unsigned g_319 = 0UL;
static short *g_325 = &g_70;
static short **g_324 = &g_325;
static unsigned g_331 = 4294967295UL;
static unsigned g_333 = 0x311AD503L;
static unsigned g_335 = 4294967286UL;
static int g_337 = 1L;
static char g_348 = (-1L);
static unsigned g_449 = 7UL;
static unsigned g_511 = 0x61053FC6L;
static unsigned short g_535 = 1UL;
static volatile unsigned short * volatile *g_545 = (void*)0;
static int g_602 = (-1L);
static unsigned short g_604 = 0x423DL;
static char g_676 = (-1L);
static unsigned short g_693 = 0xEFFCL;
static short g_738 = 0x5E8EL;
static const unsigned short g_746 = 0x5ED1L;
static int *g_800 = (void*)0;
static const int *g_836 = &g_244;
static const int **g_835 = &g_836;
static const int ***g_834 = &g_835;
static int g_872 = 0x5BF2FEC3L;
static int g_998 = 9L;
static int g_1017 = 0x0F4D5559L;
static unsigned g_1023 = 0x2312E50FL;
static char *g_1044 = &g_153;
static char **g_1043 = &g_1044;
static char ** volatile *g_1042 = &g_1043;
static char ** volatile * const volatile *g_1041 = &g_1042;
static char g_1144 = 0x21L;
static int g_1152 = 0x01ECD0F4L;
static char g_1155 = (-5L);
static int g_1168 = (-1L);
static char g_1181 = 0x9BL;
static unsigned short g_1187 = 0x6A3AL;
static int g_1328 = 0x67BAA7F9L;
static unsigned g_1337 = 5UL;
static short g_1391 = 0x3047L;
static short g_1481 = 1L;
static short g_1518 = 0xF782L;
static short g_1526 = (-9L);
static unsigned char g_1545 = 0xDCL;
static short g_1556 = 5L;
static int ***g_1592 = &g_110;
static int ****g_1591 = &g_1592;
static unsigned * const *g_1617 = (void*)0;
static unsigned char g_1699 = 252UL;



static int func_1(void);
static int func_6(char p_7, unsigned p_8, char p_9, int p_10);
static unsigned short func_15(unsigned p_16, unsigned short p_17, const unsigned char p_18);
static unsigned char func_27(unsigned char * const p_28, unsigned short p_29, unsigned p_30);
static unsigned char * const func_31(const unsigned * p_32);
static unsigned * func_37(const unsigned p_38, short p_39);
static unsigned * func_47(unsigned p_48, unsigned short p_49, unsigned ** p_50, unsigned * const * p_51);
static unsigned func_52(char p_53, const unsigned ** p_54, unsigned * const * p_55);
static char func_56(int p_57, int p_58, char p_59, unsigned p_60, unsigned * p_61);
static unsigned char func_77(unsigned short p_78, unsigned p_79, short * p_80);
static int func_1(void)
{
    short l_13 = 0xEFA4L;
    int l_19 = (-1L);
    unsigned *l_20 = &g_21;
    unsigned char *l_25 = &g_26;
    unsigned *l_33 = &g_34;
    unsigned **l_46 = &l_33;
    unsigned **l_697 = &g_248;
    unsigned short *l_1213 = &g_1187;
    unsigned char l_1565 = 1UL;
    unsigned l_1577 = 1UL;
    unsigned char l_1702 = 0x6CL;
    unsigned l_1724 = 4294967295UL;
    unsigned l_1733 = 4294967292UL;
    if ((g_2 , (l_19 = ((safe_sub_func_uint16_t_u_u(g_2, g_5)) == (func_6((g_14 |= (safe_rshift_func_int16_t_s_s(l_13, 11))), ((*l_20) = (+(0xC865B49DL == (func_15((--(*l_20)), ((*l_1213) = ((+((*l_25) = (safe_unary_minus_func_uint32_t_u(l_13)))) & func_27(func_31(((++(*l_33)) , func_37((safe_sub_func_uint8_t_u_u((safe_div_func_int16_t_s_s((safe_mod_func_uint16_t_u_u((((*l_46) = &g_34) == ((*l_697) = func_47(func_52(func_56(l_19, (((safe_sub_func_int32_t_s_s(0x8F9611CAL, l_13)) < g_5) , l_13), g_34, g_34, &g_34), g_245, g_247), l_13, &g_248, &l_20))), 65529UL)), g_602)), l_19)), l_13))), g_602, l_13))), g_1023) , l_13)))), l_19, l_13) , 0x44L)))))
    {
        unsigned char l_1548 = 251UL;
        int l_1549 = 0x19E27D1CL;
        int *l_1550 = &g_998;
        const unsigned l_1555 = 0xA04E03C1L;
        (*l_1550) ^= (l_1549 = l_1548);
        for (g_449 = 0; (g_449 == 24); g_449 = safe_add_func_int8_t_s_s(g_449, 1))
        {
            for (g_604 = (-17); (g_604 == 3); g_604 = safe_add_func_int8_t_s_s(g_604, 9))
            {
                (**g_834) = &l_19;

                ;
            }
            (*l_1550) = func_15(l_13, (*l_1550), ((***g_1042) , l_1555));
        }


        return g_1556;


    }
    else
    {
        unsigned char l_1557 = 6UL;
        short *l_1564 = &g_1391;
        int *l_1566 = &g_241;
        int l_1581 = 0x4F684ADCL;
        char **l_1586 = &g_1044;
        unsigned l_1621 = 0xD209FA9CL;
        int l_1633 = 0x119E8251L;
        int l_1690 = 4L;
        const unsigned l_1725 = 0x5D732FE6L;
        int *l_1726 = &l_1633;
        int *l_1727 = &g_244;
        int *l_1728 = &g_134;
        int *l_1729 = &l_19;
        int *l_1730 = &g_87;
        int *l_1731 = &l_1690;
        int *l_1732 = &g_1328;
        (*l_1566) = ((func_15(l_13, l_1557, l_19) && 255UL) || (((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_s(l_1557, 6)), ((*g_325) = (-1L)))), 11)) == l_1565) | g_604));
        if ((*l_1566))
        {
            unsigned short l_1569 = 0x65A2L;
            unsigned l_1570 = 0xF6CC2E20L;
            unsigned *l_1571 = &g_333;
            int l_1576 = (-4L);
            unsigned char *l_1594 = &g_1545;
            unsigned char **l_1600 = &l_25;
            unsigned char ***l_1599 = &l_1600;
            (*l_1566) |= l_1565;
            (**g_834) = l_1566;

            ;
            for (g_348 = 26; (g_348 != (-5)); --g_348)
            {
                char ***l_1580 = &g_1043;
                unsigned char *l_1582 = &g_72;
                unsigned char *l_1585 = &g_129;
                int *****l_1593 = &g_1591;
                (*l_1566) = ((**g_247) , (((*l_1580) = (void*)0) == ((0x83L > (func_15(func_15((**g_245), l_1581, g_331), g_153, ((*l_1585) = ((*l_1582)++))) == g_244)) , l_1586)));

                ;
                l_1576 ^= ((0xD323L && l_19) <= (safe_mod_func_int32_t_s_s(((((*l_1571) = ((((*l_1593) = g_1591) == (void*)0) == (*g_325))) | ((void*)0 == l_1594)) , ((*l_1566) = (safe_rshift_func_uint8_t_u_u(((*l_25) ^= ((**g_835) && (safe_add_func_uint16_t_u_u(((((+(*l_1566)) < g_1391) ^ l_1570) > 0xB7F1L), 0x4DE4L)))), 6)))), g_449)));
                (*g_835) = (g_109 = &l_19);

                ;
                ;
            }


            ;
            ;
            (*l_1599) = &l_1594;

            ;
        }
        else
        {
            for (g_676 = 0; (g_676 <= 0); g_676++)
            {
                unsigned short l_1603 = 0xA5B9L;
                ++l_1603;
            }
        }



        ;
        for (g_82 = (-9); (g_82 <= 29); g_82 = safe_add_func_int8_t_s_s(g_82, 5))
        {
            unsigned l_1612 = 0x1E4890C4L;
            int l_1616 = 0x58D083C3L;
            int l_1618 = 0xBDA9FF5EL;
            int l_1630 = 1L;
            (*l_1566) = (func_15(((**g_324) | ((((*l_1566) = ((*g_325) != func_15((((((safe_div_func_uint32_t_u_u(g_216, ((safe_sub_func_int8_t_s_s(((((*g_1044) <= ((g_535 < (func_15(l_1577, (l_1612 , l_13), (safe_rshift_func_int16_t_s_s((l_1616 = (safe_unary_minus_func_int16_t_s((((**g_324) & 0x9BEFL) > (*g_325))))), 9))) || l_13)) , g_134)) != g_2) >= g_84), (*g_1044))) , (*l_1566)))) , l_1612) , (*l_1566)) ^ 0x2EB1L) , (**g_247)), g_72, (*l_1566)))) , (-4L)) ^ 65530UL)), g_1017, l_1612) , l_1577);
            l_1618 &= (!func_52(l_1616, &g_246, g_1617));
            if ((*l_1566))
            {
                (*l_1566) = l_1577;
            }
            else
            {
                int *l_1619 = &g_998;
                int *l_1620 = &g_134;
                int l_1651 = 0xFCCAD7D2L;
                const unsigned char l_1703 = 0x5BL;
                unsigned char **l_1706 = (void*)0;
                unsigned char **l_1707 = &l_25;
                l_1621++;
                for (g_1328 = 24; (g_1328 >= 4); g_1328 = safe_sub_func_uint8_t_u_u(g_1328, 3))
                {
                    int *l_1626 = (void*)0;
                    int *l_1627 = &g_132;
                    int *l_1628 = &l_1618;
                    int *l_1629 = &l_19;
                    int *l_1631 = &g_87;
                    int *l_1632 = (void*)0;
                    int *l_1634 = &g_244;
                    int *l_1635 = &l_1618;
                    int *l_1636 = &l_1616;
                    int *l_1637 = (void*)0;
                    int *l_1638 = (void*)0;
                    int *l_1639 = (void*)0;
                    int *l_1640 = &l_19;
                    int *l_1641 = &l_1618;
                    int *l_1642 = &l_1633;
                    int *l_1643 = &g_998;
                    int *l_1644 = &g_244;
                    int *l_1645 = &l_19;
                    int *l_1646 = &l_1618;
                    int *l_1647 = (void*)0;
                    int *l_1648 = &g_241;
                    int *l_1649 = &g_244;
                    int *l_1650 = &g_998;
                    int *l_1652 = &g_241;
                    int *l_1653 = &l_1633;
                    int *l_1654 = &g_1152;
                    int *l_1655 = &l_1633;
                    int *l_1656 = &g_1152;
                    int *l_1657 = (void*)0;
                    int *l_1658 = &g_241;
                    int *l_1659 = &l_19;
                    int *l_1660 = &g_241;
                    int *l_1661 = (void*)0;
                    int *l_1662 = &g_134;
                    int *l_1663 = &l_19;
                    int *l_1664 = &g_244;
                    int *l_1665 = &l_1618;
                    int *l_1666 = &g_134;
                    int *l_1667 = &g_132;
                    int *l_1668 = &l_1616;
                    int *l_1669 = &l_19;
                    int *l_1670 = &l_1618;
                    int *l_1671 = &g_244;
                    int *l_1672 = &l_1618;
                    int *l_1673 = (void*)0;
                    int *l_1674 = (void*)0;
                    int *l_1675 = &l_1633;
                    int *l_1676 = &g_241;
                    int *l_1677 = &g_244;
                    int *l_1678 = &g_132;
                    int *l_1679 = &g_87;
                    int *l_1680 = (void*)0;
                    int *l_1681 = &l_1616;
                    int *l_1682 = (void*)0;
                    int *l_1683 = &g_241;
                    int *l_1684 = (void*)0;
                    int *l_1685 = &g_241;
                    int *l_1686 = &g_134;
                    int *l_1687 = (void*)0;
                    int *l_1688 = &l_1616;
                    int *l_1689 = &l_1633;
                    int *l_1691 = &l_1633;
                    int *l_1692 = &g_244;
                    int *l_1693 = (void*)0;
                    int *l_1694 = &g_132;
                    int *l_1695 = &l_1690;
                    int *l_1696 = &g_244;
                    int *l_1697 = &g_244;
                    int *l_1698 = &l_1618;
                    g_1699--;
                    (*l_1697) = l_1702;
                    (*l_1670) &= ((((l_1703 == ((*l_1213) = (*l_1620))) , (*l_1566)) , (*l_1666)) <= ((-5L) || (safe_mul_func_uint16_t_u_u((*l_1697), (&l_1651 == (void*)0)))));
                }
                (*l_1566) = func_27(((*l_1707) = func_31((*g_245))), l_1616, (**g_245));

                ;
                (*l_1619) = ((safe_mod_func_int16_t_s_s((((*l_1566) = (*l_1620)) , ((safe_div_func_int16_t_s_s(((*l_1564) ^= (safe_add_func_int16_t_s_s(((safe_add_func_int8_t_s_s((((*l_1620) &= ((safe_div_func_int8_t_s_s((((0xEFL == (safe_div_func_uint16_t_u_u(l_1630, (*l_1566)))) == (**g_324)) , (safe_mod_func_int32_t_s_s((l_1616 ^= (safe_lshift_func_uint16_t_u_u(1UL, ((g_331 , l_13) , (+1UL))))), l_1577))), g_14)) > (*g_1044))) || (*l_1619)), g_70)) != l_1724), (*l_1566)))), (*l_1619))) && l_1724)), g_333)) | l_1725);
            }
        }

        ;
        ++l_1733;
    }

    ;


    ;
    ;

    ;
    return g_604;



}







static int func_6(char p_7, unsigned p_8, char p_9, int p_10)
{
    unsigned short *l_1353 = &g_82;
    int l_1356 = 0xC9776F68L;
    const unsigned *l_1360 = &g_449;
    char l_1376 = 0x21L;
    short l_1389 = 0x020AL;
    int l_1392 = 0x2784C7F4L;
    int l_1416 = 0x752B9E8DL;
    int l_1441 = (-10L);
    int l_1491 = 0x4E0D2A2AL;
    int l_1492 = 0L;
    for (g_244 = 3; (g_244 < (-17)); --g_244)
    {
        unsigned char * const l_1344 = &g_26;
        unsigned *l_1347 = &g_319;
        int l_1352 = 0xC92A9CC4L;
        int *l_1357 = (void*)0;
        int *l_1358 = (void*)0;
        int *l_1359 = &g_1328;
        int l_1433 = (-10L);
        char l_1447 = 0x67L;
        int l_1467 = 0x4FBAC102L;
        int l_1472 = 0xC54D22B5L;
        int l_1498 = 0x3B1FA37DL;
        int l_1499 = 8L;
        int l_1502 = 0x97D48292L;
        int l_1511 = 0L;
        int l_1513 = (-1L);
        (*l_1359) = (safe_mod_func_uint16_t_u_u(((p_10 && func_15(p_8, (((safe_rshift_func_int16_t_s_s(((safe_sub_func_uint16_t_u_u((l_1352 & ((l_1353 != (void*)0) | (l_1352 <= ((*l_1359) &= (safe_lshift_func_uint16_t_u_s(((l_1352 == p_8) > l_1356), p_10)))))), p_8)) >= g_738), 2)) , l_1360) == (void*)0), g_693)) , p_7), (*g_325)));
        if ((0xCD2DE1CCL || ((safe_sub_func_uint16_t_u_u(((l_1356 , (safe_add_func_int32_t_s_s((safe_mod_func_int8_t_s_s((l_1356 >= l_1356), (safe_add_func_int16_t_s_s(0xC7D0L, ((safe_mul_func_uint16_t_u_u(((((safe_mod_func_int16_t_s_s((((g_449 > (!p_8)) && ((*l_1344) = g_602)) > (*g_1044)), 0x79D7L)) , (void*)0) != l_1353) , 0xB266L), g_216)) > p_10))))), p_8))) | l_1356), g_70)) > 0x79L)))
        {
            const unsigned *l_1379 = &g_511;
            int l_1386 = 0xB3189308L;
            int *l_1387 = &g_87;
            int *l_1388 = &g_134;
            unsigned short *l_1390 = &g_1187;
            for (g_872 = 0; (g_872 != 18); ++g_872)
            {
                unsigned l_1375 = 1UL;
                (*l_1359) = (func_27(func_31(l_1360), p_10, l_1375) < ((void*)0 != &g_84));
            }
            g_1391 ^= ((((((l_1376 & ((*l_1390) |= (safe_rshift_func_uint16_t_u_s((p_7 && func_27(func_31(((*g_245) = l_1379)), ((safe_div_func_int32_t_s_s(((g_335 , (((p_8 == (((((((safe_mul_func_uint16_t_u_u(((safe_add_func_uint32_t_u_u(l_1386, ((*l_1388) ^= ((*l_1387) &= ((*l_1359) = (((*l_1353) ^= ((void*)0 == &l_1352)) != (**g_324))))))) && 4294967291UL), 0L)) , l_1389) == 0x4F63L) >= 0xB9L) , l_1388) == l_1379) || 3UL)) <= (*g_325)) || p_7)) , (*l_1359)), p_7)) , p_10), (**g_247))), p_7)))) <= p_8) <= p_9) <= p_9) , l_1389) , p_9);
        }
        else
        {
            int *l_1393 = &g_241;
            int *l_1394 = &g_87;
            int *l_1395 = &g_87;
            int *l_1396 = &l_1352;
            int *l_1397 = &l_1356;
            int *l_1398 = &l_1352;
            int *l_1399 = &g_998;
            int *l_1400 = (void*)0;
            int l_1401 = 0xE11F63F1L;
            int *l_1402 = &g_132;
            int *l_1403 = (void*)0;
            int *l_1404 = &g_998;
            int *l_1405 = &g_1328;
            int *l_1406 = &g_1152;
            int l_1407 = 1L;
            int *l_1408 = &g_132;
            int *l_1409 = &g_87;
            int *l_1410 = (void*)0;
            int *l_1411 = &l_1407;
            int *l_1412 = (void*)0;
            int *l_1413 = &l_1352;
            int *l_1414 = &g_1328;
            int *l_1415 = &l_1401;
            int *l_1417 = &l_1407;
            int *l_1418 = &g_134;
            int *l_1419 = &g_998;
            int *l_1420 = &l_1356;
            int *l_1421 = &g_87;
            int l_1422 = (-2L);
            int *l_1423 = &g_134;
            int *l_1424 = &l_1407;
            int *l_1425 = &l_1356;
            int *l_1426 = &l_1422;
            int *l_1427 = &l_1352;
            int *l_1428 = &g_998;
            int *l_1429 = &g_134;
            int *l_1430 = &g_1152;
            int *l_1431 = &g_132;
            int *l_1432 = &l_1401;
            int *l_1434 = &g_1328;
            int *l_1435 = &g_132;
            int *l_1436 = &l_1356;
            int *l_1437 = &l_1433;
            int *l_1438 = &g_1328;
            int *l_1439 = (void*)0;
            int *l_1440 = &l_1352;
            int *l_1442 = (void*)0;
            int l_1443 = 0x673D0F02L;
            int l_1444 = 0x2FA01861L;
            int *l_1445 = &g_241;
            int *l_1446 = &g_132;
            int *l_1448 = (void*)0;
            int *l_1449 = &g_134;
            int *l_1450 = (void*)0;
            int *l_1451 = &l_1356;
            int *l_1452 = (void*)0;
            int *l_1453 = &l_1441;
            int *l_1454 = &l_1356;
            int *l_1455 = &l_1441;
            int *l_1456 = &l_1352;
            int *l_1457 = &g_134;
            int *l_1458 = &g_132;
            int *l_1459 = &l_1422;
            int *l_1460 = &g_134;
            int *l_1461 = &l_1401;
            int *l_1462 = &l_1401;
            int *l_1463 = &l_1441;
            int *l_1464 = &g_87;
            int *l_1465 = &g_132;
            int *l_1466 = &g_241;
            int *l_1468 = (void*)0;
            int *l_1469 = (void*)0;
            int *l_1470 = (void*)0;
            int *l_1471 = &l_1443;
            int *l_1473 = &l_1356;
            int *l_1474 = &g_241;
            int *l_1475 = (void*)0;
            int *l_1476 = &l_1467;
            int *l_1477 = &l_1443;
            int *l_1478 = &g_134;
            int *l_1479 = &l_1401;
            int *l_1480 = (void*)0;
            int *l_1482 = (void*)0;
            int *l_1483 = (void*)0;
            int *l_1484 = &l_1441;
            int *l_1485 = &g_134;
            int *l_1486 = (void*)0;
            int *l_1487 = &l_1443;
            int *l_1488 = &l_1407;
            int *l_1489 = &l_1444;
            int *l_1490 = &l_1441;
            int *l_1493 = &g_134;
            int *l_1494 = &l_1416;
            int *l_1495 = &l_1433;
            int *l_1496 = &g_241;
            int *l_1497 = (void*)0;
            int *l_1500 = &l_1422;
            int *l_1501 = &l_1407;
            int *l_1503 = &l_1443;
            int *l_1504 = &l_1401;
            int *l_1505 = (void*)0;
            int *l_1506 = &l_1443;
            int *l_1507 = (void*)0;
            int *l_1508 = &l_1444;
            int *l_1509 = &l_1499;
            int l_1510 = 0xA0D7784EL;
            int *l_1512 = &l_1491;
            int *l_1514 = (void*)0;
            int *l_1515 = &l_1499;
            int *l_1516 = &l_1510;
            int *l_1517 = &l_1491;
            int *l_1519 = &l_1513;
            int *l_1520 = &l_1401;
            int *l_1521 = &l_1407;
            int *l_1522 = &l_1441;
            int *l_1523 = &g_132;
            int *l_1524 = &l_1422;
            int *l_1525 = &l_1407;
            int *l_1527 = &l_1401;
            int *l_1528 = &l_1441;
            int *l_1529 = &l_1444;
            int *l_1530 = &l_1407;
            int *l_1531 = &l_1513;
            int *l_1532 = &l_1491;
            int *l_1533 = &g_1152;
            int *l_1534 = &l_1498;
            int *l_1535 = &l_1472;
            int *l_1536 = &l_1511;
            int *l_1537 = &g_1152;
            int *l_1538 = &l_1416;
            int *l_1539 = &g_134;
            int *l_1540 = &l_1499;
            int *l_1541 = (void*)0;
            int *l_1542 = &l_1356;
            int *l_1543 = &g_1328;
            int *l_1544 = &g_998;
            if (l_1392)
                break;
            --g_1545;
        }
    }

    ;
    return g_132;
}







static unsigned short func_15(unsigned p_16, unsigned short p_17, const unsigned char p_18)
{
    char l_1214 = 1L;
    int *l_1215 = &g_134;
    int *l_1216 = &g_132;
    int *l_1217 = &g_87;
    int l_1218 = (-4L);
    int *l_1219 = (void*)0;
    int *l_1220 = &l_1218;
    int l_1221 = 0x8A1E2BD9L;
    int *l_1222 = &g_241;
    int *l_1223 = &l_1218;
    int *l_1224 = &g_134;
    int *l_1225 = &l_1221;
    int *l_1226 = &g_998;
    int *l_1227 = &g_1152;
    int *l_1228 = &l_1221;
    int *l_1229 = &g_132;
    int *l_1230 = &g_244;
    int *l_1231 = (void*)0;
    int *l_1232 = &g_998;
    int *l_1233 = &l_1218;
    int *l_1234 = &l_1218;
    int *l_1235 = &l_1218;
    int *l_1236 = (void*)0;
    int *l_1237 = (void*)0;
    int l_1238 = 1L;
    int l_1239 = 0xA9713616L;
    int *l_1240 = &g_132;
    int *l_1241 = (void*)0;
    int *l_1242 = (void*)0;
    int *l_1243 = (void*)0;
    int *l_1244 = (void*)0;
    int l_1245 = 0x9A42D45EL;
    int l_1246 = 0x62B43E68L;
    int *l_1247 = &g_241;
    int *l_1248 = &l_1245;
    int *l_1249 = &l_1239;
    int *l_1250 = &g_244;
    int *l_1251 = &l_1246;
    int *l_1252 = &g_87;
    int l_1253 = 0x94A6329BL;
    int *l_1254 = &g_134;
    int l_1255 = 0x6FCC8321L;
    int *l_1256 = (void*)0;
    int *l_1257 = &l_1255;
    int *l_1258 = &g_134;
    int *l_1259 = &g_1152;
    int *l_1260 = (void*)0;
    int *l_1261 = &l_1221;
    int *l_1262 = &l_1255;
    int *l_1263 = &l_1255;
    int *l_1264 = &g_998;
    int *l_1265 = (void*)0;
    int *l_1266 = &l_1245;
    char l_1267 = 1L;
    int *l_1268 = &g_134;
    int *l_1269 = &g_87;
    int l_1270 = 1L;
    int *l_1271 = &g_241;
    int *l_1272 = &l_1218;
    int *l_1273 = &g_132;
    int l_1274 = 0L;
    int *l_1275 = &l_1253;
    int *l_1276 = &g_998;
    int *l_1277 = &l_1221;
    int *l_1278 = &g_998;
    int *l_1279 = &l_1245;
    int *l_1280 = (void*)0;
    int *l_1281 = &g_132;
    int *l_1282 = &l_1246;
    char l_1283 = (-8L);
    int *l_1284 = &g_241;
    int *l_1285 = (void*)0;
    int l_1286 = 0xF2ED7767L;
    int *l_1287 = &l_1270;
    int *l_1288 = &l_1274;
    int *l_1289 = &g_87;
    int *l_1290 = &g_241;
    int *l_1291 = &l_1274;
    int *l_1292 = &l_1270;
    int *l_1293 = &l_1221;
    int *l_1294 = &l_1286;
    int *l_1295 = &g_998;
    int *l_1296 = &g_1152;
    int *l_1297 = &g_241;
    int l_1298 = (-1L);
    int *l_1299 = &g_1152;
    int l_1300 = 0x2556E323L;
    int *l_1301 = &g_998;
    int *l_1302 = (void*)0;
    int *l_1303 = &l_1239;
    int l_1304 = 0xEB6834CEL;
    int *l_1305 = &l_1239;
    int *l_1306 = &l_1218;
    int *l_1307 = (void*)0;
    int *l_1308 = &l_1300;
    int *l_1309 = &l_1270;
    int *l_1310 = &g_244;
    int *l_1311 = (void*)0;
    int *l_1312 = &l_1274;
    int *l_1313 = (void*)0;
    int *l_1314 = &l_1286;
    int l_1315 = 0x23290A2FL;
    int *l_1316 = &l_1274;
    int *l_1317 = &l_1300;
    int *l_1318 = &l_1245;
    int *l_1319 = (void*)0;
    int *l_1320 = (void*)0;
    int *l_1321 = &l_1298;
    int *l_1322 = &l_1300;
    int *l_1323 = &l_1304;
    int *l_1324 = &l_1286;
    int *l_1325 = &l_1253;
    int *l_1326 = &g_241;
    int *l_1327 = &l_1218;
    int *l_1329 = &g_132;
    int *l_1330 = &g_244;
    int *l_1331 = (void*)0;
    int *l_1332 = &l_1255;
    int *l_1333 = &l_1274;
    int *l_1334 = (void*)0;
    int *l_1335 = (void*)0;
    int l_1336 = 4L;
    g_1337--;
    return g_241;
}







static unsigned char func_27(unsigned char * const p_28, unsigned short p_29, unsigned p_30)
{
    char l_747 = 0xF2L;
    short ***l_749 = &g_324;
    int l_772 = 9L;
    int l_785 = 0L;
    char *l_787 = &g_348;
    char **l_786 = &l_787;
    char ***l_788 = &l_786;
    char ***l_789 = (void*)0;
    char **l_791 = &l_787;
    char ***l_790 = &l_791;
    unsigned *l_794 = &g_319;
    const int l_795 = (-1L);
    unsigned l_876 = 0xF6808376L;
    int l_976 = 0xBF9DD21BL;
    const short l_1026 = 0xDF1EL;
    short ***l_1037 = (void*)0;
    const unsigned **l_1046 = &g_246;
    int l_1091 = 0x4349C25FL;
    int l_1130 = (-1L);
    int l_1139 = 0x814FAB29L;
    int l_1142 = (-10L);
    int l_1157 = (-5L);
    if (((safe_lshift_func_int8_t_s_u((safe_mod_func_int32_t_s_s((-1L), (safe_sub_func_int8_t_s_s((g_746 || (p_29 , ((*p_28) ^= g_216))), p_30)))), 5)) != l_747))
    {
        int *l_748 = &g_241;
        unsigned *l_750 = (void*)0;
        unsigned *l_751 = &g_331;
        int *l_752 = &g_134;
        (*l_748) ^= 0xAAAFD065L;
        (*l_752) |= ((*l_748) > ((((g_335 = ((*l_751) ^= (((l_749 == (void*)0) >= (g_602 >= (l_747 > p_29))) == (*g_325)))) , g_5) ^ g_153) , p_30));
        return g_738;
    }
    else
    {
        int **l_753 = &g_109;
        int *l_755 = &g_132;
        int **l_754 = &l_755;
        char *l_773 = &g_348;
        unsigned short *l_774 = &g_535;
        (*l_754) = ((*l_753) = (void*)0);

        ;
        ;
        for (g_693 = (-15); (g_693 < 11); ++g_693)
        {
            unsigned short **l_759 = (void*)0;
            unsigned short ***l_758 = &l_759;
            (*l_754) = &g_134;

            ;
            (**l_754) = (&g_545 == l_758);
        }

        ;
        (*l_753) = func_37((((*l_774) = (l_747 | ((~(safe_mul_func_int8_t_s_s(((((safe_mul_func_uint16_t_u_u(0x9467L, (**g_324))) & l_747) != p_29) < (safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_mul_func_int16_t_s_s((*g_325), (**g_324))) >= 0x34A37A20L), (-5L))), 0UL))), g_676))) || p_29))) & 0x108BL), p_30);

        ;
    }

    ;
    (*g_109) = (*g_109);
    if ((((safe_rshift_func_int8_t_s_u((p_30 , (safe_div_func_int32_t_s_s((safe_div_func_int16_t_s_s((l_772 >= (0xBCL | ((*p_28) = (safe_lshift_func_uint16_t_u_u(((l_785 = (safe_mod_func_int32_t_s_s(p_29, (p_29 , 0xD210D425L)))) == (((*l_790) = ((*l_788) = l_786)) != ((safe_add_func_uint8_t_u_u((((***l_749) = (-7L)) ^ ((void*)0 != l_794)), 0x78L)) , &g_197))), 10))))), 6L)), l_772))), 6)) , 0x3779L) | l_795))
    {
        int *l_816 = &g_134;
        short *l_871 = &g_70;
        unsigned char l_873 = 0x34L;
        const unsigned short l_880 = 65535UL;
        int l_902 = 0xD27AAE40L;
        int l_904 = 0x07879FD1L;
        int l_915 = (-5L);
        int l_943 = 0xE215B427L;
        int l_988 = 0xDB20ED09L;
        int l_989 = (-1L);
        int l_995 = 0xD2346786L;
        const char l_1035 = (-1L);
        short ****l_1036 = &l_749;
        short **l_1038 = &l_871;
        char l_1045 = 0xABL;
        short *l_1199 = (void*)0;
        unsigned **l_1200 = &g_248;
    }
    else
    {
        (**g_834) = &l_1091;

        ;
    }


    return (*p_28);


}







static unsigned char * const func_31(const unsigned * p_32)
{
    char l_706 = (-9L);
    int *l_707 = (void*)0;
    int *l_708 = &g_241;
    unsigned char *l_713 = &g_72;
    char *l_734 = &g_153;
    unsigned char *l_735 = &g_129;
    int l_736 = (-1L);
    short *l_737 = &g_738;
    int *l_739 = &g_132;
    (*l_708) = (!l_706);
    (*l_739) &= ((*l_708) = (safe_add_func_int16_t_s_s((safe_div_func_uint16_t_u_u((((++(*l_713)) <= (safe_lshift_func_uint16_t_u_s((*l_708), 10))) && (-5L)), ((*l_737) |= (safe_sub_func_uint8_t_u_u(((((*l_735) = ((((*l_734) = (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((((safe_rshift_func_int8_t_s_u((*g_197), 2)) != 0UL) && ((safe_lshift_func_int8_t_s_s(4L, 7)) < (safe_div_func_uint32_t_u_u((g_34 >= (*l_708)), (*l_708))))), ((safe_lshift_func_int16_t_s_u(((safe_add_func_int16_t_s_s(((((g_70 , &l_706) == &l_706) , 0L) , (-4L)), g_449)) < 65530UL), g_70)) >= (*l_708)))), g_5))) || 0x41L) <= 0xDC2BL)) | l_736) <= g_602), 0xA8L))))), g_348)));
    return l_713;


}







static unsigned * func_37(const unsigned p_38, short p_39)
{
    const unsigned l_700 = 0x54496E03L;
    char *l_702 = &g_676;
    char **l_701 = &l_702;
    int l_703 = (-7L);
    unsigned *l_704 = &g_34;
    int *l_705 = &g_87;
    (*l_705) = (safe_add_func_uint32_t_u_u(p_39, ((!(l_700 , ((0x48D2584CL == p_38) , l_700))) , ((((l_701 != &l_702) | (l_703 < 0UL)) ^ p_39) >= p_38))));
    return l_705;


}







static unsigned * func_47(unsigned p_48, unsigned short p_49, unsigned ** p_50, unsigned * const * p_51)
{
    int *l_608 = &g_134;
    int *l_609 = &g_244;
    int *l_610 = &g_241;
    int *l_611 = &g_132;
    int *l_612 = &g_244;
    int *l_613 = &g_132;
    int *l_614 = &g_132;
    int *l_615 = (void*)0;
    int l_616 = 0x165134EAL;
    int *l_617 = (void*)0;
    int l_618 = (-1L);
    int *l_619 = (void*)0;
    int *l_620 = (void*)0;
    int *l_621 = &g_241;
    int *l_622 = &l_616;
    int *l_623 = &g_241;
    int *l_624 = (void*)0;
    int *l_625 = &g_132;
    int *l_626 = (void*)0;
    int *l_627 = &l_616;
    int *l_628 = &g_132;
    int *l_629 = &g_134;
    int *l_630 = &g_241;
    int *l_631 = &g_244;
    int *l_632 = (void*)0;
    int *l_633 = &g_241;
    int l_634 = 0x181665E0L;
    int *l_635 = &g_134;
    int *l_636 = &l_618;
    int *l_637 = &g_241;
    int *l_638 = (void*)0;
    int *l_639 = &g_244;
    int *l_640 = (void*)0;
    int *l_641 = &l_616;
    int *l_642 = &l_634;
    int *l_643 = (void*)0;
    int *l_644 = &g_244;
    int *l_645 = &g_87;
    int *l_646 = &g_134;
    int *l_647 = &l_618;
    int l_648 = (-2L);
    int *l_649 = (void*)0;
    int *l_650 = &l_616;
    int l_651 = 0xB30A4D82L;
    int *l_652 = &l_634;
    int l_653 = 0x2F90A0EEL;
    int *l_654 = &g_132;
    int *l_655 = &l_653;
    int *l_656 = (void*)0;
    int l_657 = 1L;
    int l_658 = 6L;
    int *l_659 = (void*)0;
    int *l_660 = &l_657;
    int *l_661 = &l_634;
    int *l_662 = (void*)0;
    int *l_663 = &g_241;
    int *l_664 = &l_648;
    int *l_665 = &l_634;
    int *l_666 = &l_634;
    int *l_667 = &g_87;
    int *l_668 = &l_658;
    int *l_669 = (void*)0;
    int l_670 = 6L;
    int *l_671 = &l_648;
    int *l_672 = (void*)0;
    int *l_673 = (void*)0;
    int *l_674 = (void*)0;
    int *l_675 = &g_134;
    int *l_677 = &g_134;
    int *l_678 = &g_241;
    int *l_679 = &l_648;
    int *l_680 = &l_618;
    int *l_681 = &l_616;
    int *l_682 = &l_670;
    int *l_683 = &g_134;
    int *l_684 = &l_618;
    int *l_685 = &l_651;
    int *l_686 = (void*)0;
    int *l_687 = (void*)0;
    int l_688 = 0xDD52420EL;
    int *l_689 = &l_651;
    int *l_690 = &l_651;
    int *l_691 = &l_651;
    int *l_692 = (void*)0;
    unsigned *l_696 = &g_511;
    g_693--;
    return l_696;


}







static unsigned func_52(char p_53, const unsigned ** p_54, unsigned * const * p_55)
{
    unsigned char l_251 = 5UL;
    short *l_253 = &g_70;
    short **l_252 = &l_253;
    int l_254 = 2L;
    int l_255 = 0xA57B682BL;
    unsigned char l_256 = 249UL;
    int l_302 = 0xAC88D01BL;
    int l_308 = 0L;
    int l_485 = 2L;
    int l_494 = 0xFA7D3C94L;
    int l_506 = 0xE1F3E717L;
    unsigned short l_544 = 0UL;
    int l_596 = 0x76E8D941L;
    int *l_607 = &l_308;
    if ((l_255 = l_254))
    {
        short l_265 = 0x84E5L;
        int l_274 = 0x1BEE393EL;
        int l_286 = 0L;
        int l_316 = 1L;
        int *l_322 = &g_241;
        unsigned short l_339 = 0xDBF6L;
        int l_396 = 0x3A229741L;
        if (l_256)
        {
            int l_287 = 0L;
            int l_299 = 0xB9AFEEB8L;
            int *l_357 = &l_274;
            int *l_358 = &g_244;
            int *l_359 = &l_274;
            int *l_360 = &g_132;
            int *l_361 = &l_274;
            int *l_362 = &g_132;
            int *l_363 = &g_244;
            int *l_364 = &l_255;
            int *l_365 = (void*)0;
            int *l_366 = &g_241;
            int *l_367 = &l_299;
            int *l_368 = &l_316;
            int *l_369 = (void*)0;
            int *l_370 = &l_287;
            int *l_371 = (void*)0;
            int *l_372 = &l_255;
            int *l_373 = &l_274;
            int *l_374 = &g_241;
            int *l_375 = &l_255;
            int *l_376 = (void*)0;
            unsigned short l_377 = 0x6A52L;
            int **l_380 = &l_365;
            if (p_53)
            {
                int *l_257 = &g_132;
                int *l_258 = &g_132;
                int *l_259 = &g_132;
                int *l_260 = &l_255;
                int *l_261 = (void*)0;
                int *l_262 = &g_132;
                int *l_263 = (void*)0;
                int *l_264 = &l_255;
                int *l_266 = &l_255;
                int *l_267 = &g_87;
                int *l_268 = (void*)0;
                int *l_269 = (void*)0;
                int *l_270 = &g_87;
                int *l_271 = &g_244;
                int *l_272 = (void*)0;
                int *l_273 = &l_255;
                int *l_275 = &g_132;
                int *l_276 = (void*)0;
                int *l_277 = &l_255;
                int *l_278 = &g_132;
                int *l_279 = &l_274;
                int *l_280 = &g_132;
                int *l_281 = &g_244;
                int *l_282 = &g_132;
                int *l_283 = &g_134;
                int *l_284 = &g_244;
                int *l_285 = (void*)0;
                int *l_288 = &l_286;
                int *l_289 = &g_87;
                int *l_290 = &l_286;
                int *l_291 = &g_241;
                int *l_292 = &l_255;
                int *l_293 = &g_87;
                int *l_294 = &l_286;
                int *l_295 = &g_134;
                int *l_296 = &g_134;
                int *l_297 = &g_134;
                int *l_298 = &g_132;
                int *l_300 = &l_286;
                int *l_301 = &l_287;
                int *l_303 = &l_274;
                int *l_304 = (void*)0;
                int *l_305 = &g_244;
                int *l_306 = &l_299;
                int *l_307 = &g_132;
                int *l_309 = &l_286;
                int *l_310 = &l_287;
                int *l_311 = &l_255;
                int *l_312 = &l_302;
                int *l_313 = &l_299;
                int *l_314 = (void*)0;
                int *l_315 = &g_241;
                int *l_317 = &g_134;
                int *l_318 = &l_286;
                int **l_323 = &l_282;
                short ***l_326 = &l_252;
                short ***l_327 = &g_324;
                --g_319;
                (*l_323) = l_322;

                ;
                (*l_327) = ((*l_326) = g_324);

                ;
            }
            else
            {
                unsigned short l_344 = 0xE1C7L;
                char *l_347 = &g_348;
                unsigned short *l_353 = &l_339;
                unsigned l_354 = 0xAB0956CDL;
                int *l_355 = (void*)0;
                int *l_356 = &g_87;
                for (g_84 = 0; (g_84 != 10); ++g_84)
                {
                    unsigned *l_330 = &g_331;
                    unsigned *l_332 = &g_333;
                    unsigned *l_334 = &g_335;
                    unsigned *l_336 = (void*)0;
                    int *l_338 = &g_132;
                    (*l_322) &= (((*l_334) ^= ((*l_332) = (((*l_330) |= g_132) != 0xDE11BDC7L))) <= (g_337 = l_255));
                    l_339--;
                }
                (*l_356) &= ((p_53 & (safe_div_func_int16_t_s_s((0x01E9L != ((4294967292UL == l_344) , (safe_sub_func_int8_t_s_s((*g_197), ((*l_347) = ((void*)0 != &g_109)))))), ((safe_add_func_int32_t_s_s(p_53, (safe_sub_func_uint16_t_u_u((+((*l_353) = g_241)), l_354)))) ^ g_241)))) , p_53);
            }

            ;
            l_377++;
            (*l_380) = &l_299;

            ;
            (*l_380) = (void*)0;

            ;
        }
        else
        {
            int **l_381 = &g_109;
            int *l_382 = &g_241;
            int l_383 = (-1L);
            int *l_384 = (void*)0;
            int *l_385 = &l_286;
            int *l_386 = &l_274;
            int *l_387 = (void*)0;
            int *l_388 = &l_383;
            int *l_389 = (void*)0;
            int l_390 = (-5L);
            int *l_391 = &l_316;
            int *l_392 = &l_390;
            int *l_393 = (void*)0;
            int *l_394 = &l_274;
            int *l_395 = &l_383;
            int l_397 = 0x23C1EDEDL;
            int *l_398 = &l_302;
            int l_399 = 1L;
            int *l_400 = &l_274;
            int *l_401 = &l_316;
            int *l_402 = &l_316;
            int l_403 = (-1L);
            int *l_404 = &l_390;
            int *l_405 = (void*)0;
            int *l_406 = &l_274;
            int *l_407 = &l_308;
            int *l_408 = &l_274;
            int *l_409 = &l_383;
            int *l_410 = &l_274;
            int *l_411 = (void*)0;
            int *l_412 = &l_316;
            int *l_413 = &l_274;
            int *l_414 = &l_308;
            int *l_415 = &l_397;
            int *l_416 = &g_87;
            int *l_417 = &l_396;
            int *l_418 = &g_134;
            int *l_419 = (void*)0;
            int *l_420 = &l_255;
            int *l_421 = &g_244;
            int *l_422 = &g_132;
            int *l_423 = &l_302;
            int *l_424 = &l_302;
            int *l_425 = &l_286;
            int *l_426 = &g_132;
            int *l_427 = &l_403;
            int *l_428 = &l_286;
            int *l_429 = &l_255;
            int *l_430 = &g_134;
            int l_431 = 8L;
            int l_432 = 1L;
            int *l_433 = (void*)0;
            int *l_434 = &l_316;
            int *l_435 = (void*)0;
            int *l_436 = &l_255;
            int *l_437 = (void*)0;
            int l_438 = 1L;
            int *l_439 = (void*)0;
            int *l_440 = &l_255;
            int *l_441 = &l_302;
            int *l_442 = &g_87;
            int *l_443 = &l_383;
            int *l_444 = &l_390;
            int *l_445 = &l_308;
            int *l_446 = (void*)0;
            int l_447 = 3L;
            int *l_448 = (void*)0;
            (*l_381) = &l_255;

            ;
            --g_449;
        }


        ;
        (*l_322) = (-5L);
    }
    else
    {
        unsigned short l_458 = 1UL;
        int l_459 = 1L;
        int *l_464 = (void*)0;
        int *l_465 = &l_255;
        int *l_466 = &g_244;
        int *l_467 = (void*)0;
        int *l_468 = &g_241;
        int *l_469 = &g_134;
        int *l_470 = &l_308;
        int *l_471 = &g_134;
        int *l_472 = &l_302;
        int *l_473 = &l_308;
        int *l_474 = (void*)0;
        int *l_475 = &g_132;
        int *l_476 = &g_244;
        int *l_477 = &g_241;
        int *l_478 = &g_87;
        int *l_479 = &g_132;
        int *l_480 = &l_308;
        int *l_481 = &l_255;
        int *l_482 = &l_255;
        int *l_483 = &l_459;
        int *l_484 = &g_87;
        int *l_486 = &g_134;
        int *l_487 = &g_241;
        int *l_488 = &g_87;
        int *l_489 = &l_308;
        int *l_490 = (void*)0;
        int *l_491 = &l_302;
        int *l_492 = (void*)0;
        int *l_493 = &l_302;
        int *l_495 = &g_134;
        int *l_496 = (void*)0;
        int *l_497 = &l_494;
        int *l_498 = &g_241;
        int *l_499 = &l_302;
        int *l_500 = &g_244;
        int *l_501 = (void*)0;
        int *l_502 = &g_244;
        int *l_503 = &l_302;
        int *l_504 = &l_485;
        int *l_505 = &l_494;
        int *l_507 = &g_132;
        int *l_508 = (void*)0;
        int *l_509 = (void*)0;
        int *l_510 = &l_308;
        unsigned short l_520 = 65527UL;
        short ***l_525 = &l_252;
        int *l_526 = &l_302;
        int *l_527 = &l_302;
        int *l_528 = &g_241;
        int *l_529 = (void*)0;
        int *l_530 = &l_459;
        int *l_531 = &g_134;
        int *l_532 = &g_244;
        int *l_533 = &l_506;
        int *l_534 = &g_241;
        for (l_254 = 0; (l_254 == 4); l_254 = safe_add_func_uint16_t_u_u(l_254, 1))
        {
            short l_454 = 0x1EC3L;
            int *l_455 = &l_308;
            (*l_455) = l_454;
            if (p_53)
                break;
            l_459 ^= (((*g_325) = (safe_mod_func_uint8_t_u_u(1UL, (0UL ^ (l_458 >= g_34))))) >= p_53);
            (*l_455) |= ((p_53 ^ 0x62F06579L) , l_251);
        }
        --g_511;
        (*l_466) = (safe_sub_func_int32_t_s_s(p_53, 4L));
        ++g_535;
    }


    ;
    if ((l_506 = (safe_add_func_uint8_t_u_u(((*g_197) ^ (l_494 ^ (0xDE27L < g_337))), ((((p_53 < (safe_add_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_544, 0x848DC6E2L)), l_251))) && ((g_84 != 0xA3L) , g_511)) , 0xFA73D8C0L) == p_53)))))
    {
        volatile unsigned short * volatile **l_546 = &g_545;
        (*l_546) = g_545;
    }
    else
    {
        int *l_547 = &l_255;
        int *l_548 = (void*)0;
        int *l_549 = &g_241;
        int *l_550 = &l_494;
        int l_551 = 0xAA3BE4C5L;
        int *l_552 = (void*)0;
        int *l_553 = &g_87;
        int *l_554 = &g_241;
        int *l_555 = &g_87;
        int *l_556 = &l_308;
        int *l_557 = (void*)0;
        int *l_558 = &l_308;
        int *l_559 = &g_87;
        int *l_560 = &l_494;
        int *l_561 = &l_485;
        int *l_562 = &l_255;
        int l_563 = 0x2C697FA2L;
        int *l_564 = &l_563;
        int *l_565 = &l_551;
        int *l_566 = &l_506;
        int *l_567 = (void*)0;
        int *l_568 = &g_87;
        int *l_569 = &g_87;
        int *l_570 = (void*)0;
        int *l_571 = &g_134;
        int *l_572 = &l_494;
        int *l_573 = &g_134;
        int *l_574 = &l_494;
        int *l_575 = (void*)0;
        int *l_576 = &g_132;
        int *l_577 = &l_255;
        int *l_578 = &l_494;
        int *l_579 = &l_302;
        int *l_580 = &g_132;
        int *l_581 = &g_241;
        int *l_582 = (void*)0;
        int *l_583 = &g_87;
        int *l_584 = &g_244;
        int *l_585 = &g_244;
        int *l_586 = &g_241;
        int *l_587 = &g_241;
        int *l_588 = &g_134;
        int l_589 = 0xC6697B58L;
        int *l_590 = &l_551;
        int *l_591 = &l_255;
        int *l_592 = &g_244;
        int *l_593 = &g_244;
        int *l_594 = &l_494;
        int *l_595 = &g_134;
        int *l_597 = &g_134;
        int *l_598 = (void*)0;
        int *l_599 = &l_589;
        int *l_600 = &g_134;
        int *l_601 = &l_551;
        int *l_603 = &l_506;
        g_604--;
        l_607 = &l_551;

        ;
    }


    l_485 &= (-1L);
    return g_70;


}







static char func_56(int p_57, int p_58, char p_59, unsigned p_60, unsigned * p_61)
{
    int l_64 = (-7L);
    short *l_69 = &g_70;
    unsigned char *l_71 = &g_72;
    const unsigned *l_74 = &g_34;
    const unsigned **l_73 = &l_74;
    unsigned short *l_81 = &g_82;
    unsigned short *l_83 = &g_84;
    int *l_240 = &g_241;
    int *l_242 = (void*)0;
    int *l_243 = &g_244;
    p_58 = (l_64 , (safe_div_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(((*l_69) = 0x87B3L), ((void*)0 != l_71))), (((((void*)0 == l_73) | l_64) <= ((safe_div_func_int16_t_s_s(((((((*l_243) ^= ((*l_240) |= (func_77(((*l_83) = ((*l_81) = p_58)), ((!(l_64 , 0L)) , (*p_61)), l_81) & l_64))) <= g_5) >= p_60) , g_129) & g_34), (-1L))) , p_60)) & p_60))));



    return (*g_197);
}







static unsigned char func_77(unsigned short p_78, unsigned p_79, short * p_80)
{
    unsigned l_92 = 0UL;
    unsigned char l_127 = 1UL;
    int *l_137 = &g_132;
    unsigned l_172 = 0x8EEC8966L;
    int **l_239 = &g_109;
    if (p_78)
    {
        char l_85 = 0x93L;
        int *l_86 = &g_87;
        int *l_88 = &g_87;
        int *l_89 = (void*)0;
        int *l_90 = &g_87;
        int *l_91 = &g_87;
        unsigned char l_99 = 0xCDL;
        (*l_86) = l_85;
        l_92--;
        for (g_72 = (-13); (g_72 < 8); g_72 = safe_add_func_uint16_t_u_u(g_72, 5))
        {
            (*l_90) = (g_82 == (safe_add_func_uint16_t_u_u(2UL, l_99)));
        }
        for (l_99 = 0; (l_99 >= 58); l_99 = safe_add_func_int32_t_s_s(l_99, 1))
        {
            return g_87;
        }
    }
    else
    {
        int l_102 = (-1L);
        const int *l_103 = &g_87;
        unsigned l_114 = 0x1CA98231L;
        int l_130 = 4L;
        int *l_176 = &l_130;
        int *l_234 = &l_130;
        if ((l_102 , g_72))
        {
            const int **l_104 = (void*)0;
            const int *l_105 = &g_87;
            int **l_108 = (void*)0;
            int ***l_111 = &g_110;
            unsigned char *l_128 = &g_129;
            int *l_131 = &g_132;
            int *l_133 = &g_134;
            l_105 = l_103;
            (*l_133) ^= (safe_add_func_int8_t_s_s(((g_109 = (void*)0) != ((&l_105 != ((*l_111) = g_110)) , l_103)), ((((*l_131) = ((g_87 = (l_130 = (safe_mod_func_uint8_t_u_u((l_114 != ((*l_128) |= ((safe_unary_minus_func_uint8_t_u((safe_sub_func_int32_t_s_s(g_34, ((((((safe_mod_func_int8_t_s_s((*l_103), (*l_103))) < (safe_unary_minus_func_uint32_t_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint8_t_u_u((g_72++), 3)), ((*l_103) , l_127)))))) <= (*p_80)) < 0x24L) > p_79) ^ 0L))))) | l_127))), g_84)))) | g_82)) || p_79) >= g_82)));

            ;
        }
        else
        {
            int **l_139 = &l_137;
            unsigned l_185 = 4294967295UL;
            unsigned l_192 = 2UL;
            int *l_193 = (void*)0;
            const char *l_195 = &g_153;
            const char **l_194 = &l_195;
            int *l_198 = &g_132;
            int *l_199 = &l_130;
            int *l_200 = &g_87;
            int *l_201 = &g_87;
            int *l_202 = &g_134;
            int *l_203 = &g_87;
            int *l_204 = &l_130;
            int *l_205 = &g_87;
            int *l_206 = &g_134;
            int *l_207 = &l_130;
            int *l_208 = &g_87;
            int *l_209 = (void*)0;
            int *l_210 = &g_134;
            int *l_211 = &g_132;
            int *l_212 = (void*)0;
            int *l_213 = &g_132;
            int *l_214 = &l_130;
            int l_215 = 0x0CCDA4A6L;
            int *l_219 = &g_132;
            for (p_79 = 0; (p_79 == 23); p_79 = safe_add_func_int32_t_s_s(p_79, 6))
            {
                int **l_138 = &g_109;
                unsigned short *l_142 = &g_82;
                int *l_145 = (void*)0;
                int *l_146 = &l_130;
                unsigned **l_151 = (void*)0;
                char *l_152 = &g_153;
                int l_164 = 0x005B5690L;
                (*l_138) = l_137;

                ;
                (*l_146) = ((*g_109) = ((((l_139 != (((safe_add_func_int16_t_s_s(0xDF8BL, 0L)) <= (--(*l_142))) , &g_109)) , ((0x63L >= (*l_103)) && ((**l_138) >= (((*g_109) , p_78) , (*l_137))))) , g_34) , 0x3E184A18L));
                if ((safe_add_func_int16_t_s_s(((*l_146) , g_129), (((((**l_138) , ((safe_lshift_func_int16_t_s_u(((*p_80) = (+g_132)), 7)) , l_151)) == (void*)0) , ((*l_152) = g_82)) ^ p_78))))
                {
                    (*l_138) = &l_130;

                    ;
                }
                else
                {
                    const short l_154 = 0x5E16L;
                    int *l_155 = &l_130;
                    g_109 = (l_154 , l_155);

                    ;
                    if (((**l_138) |= p_79))
                    {
                        int ***l_156 = &l_138;
                        int *l_157 = (void*)0;
                        int *l_158 = &g_132;
                        int *l_159 = (void*)0;
                        int *l_160 = &g_87;
                        int *l_161 = &l_130;
                        int *l_162 = &g_132;
                        int *l_163 = &g_134;
                        int *l_165 = &l_130;
                        int *l_166 = &g_134;
                        int *l_167 = (void*)0;
                        int *l_168 = &l_164;
                        int *l_169 = (void*)0;
                        int *l_170 = &g_87;
                        int *l_171 = &l_130;
                        (*l_139) = (*l_139);
                        (*l_146) |= 0x5AE12EA5L;
                        (*l_156) = &g_109;
                        --l_172;
                    }
                    else
                    {
                        return g_153;


                    }
                    if (g_129)
                        goto lbl_177;
                }

                ;
            }

            ;
            if (((safe_unary_minus_func_uint8_t_u((~((**l_139) >= ((l_176 = l_137) == l_137))))) != 4294967288UL))
            {
                if (p_79)
                {
                    if (p_79)
                    {
lbl_177:
                        (**l_139) = ((p_79 , (6L < 0L)) || g_129);
                        (*l_139) = &g_134;

                        ;
                    }
                    else
                    {
                        unsigned char *l_184 = &g_72;
                        int l_188 = (-2L);
                        unsigned short *l_191 = &g_84;
                        (*l_137) = (((safe_sub_func_int16_t_s_s((*l_137), (l_192 = (safe_mul_func_int16_t_s_s((65534UL != ((safe_mul_func_uint8_t_u_u(((*l_184) |= 255UL), (l_185 , p_79))) > (((safe_mul_func_uint16_t_u_u((p_78 = 0xFACBL), l_188)) == g_87) != (safe_rshift_func_uint16_t_u_u(((*l_191) = (g_82 = p_79)), p_79))))), 0x0607L))))) < g_87) < p_79);
                        (**l_139) |= ((p_78 , l_137) != l_193);
                        l_137 = (void*)0;

                        ;
                        g_196 = l_194;

                        ;
                    }

                    ;
                    ;

                    l_199 = l_198;

                    ;
                    g_216++;
                    (*l_139) = l_219;

                    ;
                }
                else
                {
                    unsigned l_220 = 0x62BC82BFL;
                    int l_227 = (-2L);
                    (*l_202) = p_79;
                    l_220--;
                    (**l_139) &= (safe_rshift_func_int16_t_s_s((-1L), 11));
                    l_227 = (safe_div_func_uint8_t_u_u(((*p_80) | g_72), (*l_137)));
                }

                ;

                ;
            }
            else
            {
                (**l_139) = (*g_109);
                (*l_139) = (*l_139);
                (*l_201) &= (*l_210);
            }

            ;

            ;
        }

        ;
        ;
        (*l_234) |= ((*l_137) = (safe_sub_func_uint32_t_u_u((((-1L) == (safe_mul_func_uint16_t_u_u(0x8C27L, (((void*)0 != &g_109) >= (p_78 & (*l_103)))))) , g_132), ((((g_82 , ((safe_rshift_func_int8_t_s_s((*l_103), 5)) < (*p_80))) & g_134) ^ 0x6CL) , 0x7D805DE6L))));
        return (*l_137);


    }
    for (l_127 = 10; (l_127 >= 3); l_127--)
    {
        for (p_79 = (-21); (p_79 < 11); p_79++)
        {
            return g_153;
        }
        return g_72;
    }
    (*l_239) = l_137;

    ;
    return p_78;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_21, "g_21", print_hash_value);
    transparent_crc(g_26, "g_26", print_hash_value);
    transparent_crc(g_34, "g_34", print_hash_value);
    transparent_crc(g_70, "g_70", print_hash_value);
    transparent_crc(g_72, "g_72", print_hash_value);
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    transparent_crc(g_87, "g_87", print_hash_value);
    transparent_crc(g_129, "g_129", print_hash_value);
    transparent_crc(g_132, "g_132", print_hash_value);
    transparent_crc(g_134, "g_134", print_hash_value);
    transparent_crc(g_153, "g_153", print_hash_value);
    transparent_crc(g_216, "g_216", print_hash_value);
    transparent_crc(g_241, "g_241", print_hash_value);
    transparent_crc(g_244, "g_244", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_337, "g_337", print_hash_value);
    transparent_crc(g_348, "g_348", print_hash_value);
    transparent_crc(g_449, "g_449", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_535, "g_535", print_hash_value);
    transparent_crc(g_602, "g_602", print_hash_value);
    transparent_crc(g_604, "g_604", print_hash_value);
    transparent_crc(g_676, "g_676", print_hash_value);
    transparent_crc(g_693, "g_693", print_hash_value);
    transparent_crc(g_738, "g_738", print_hash_value);
    transparent_crc(g_746, "g_746", print_hash_value);
    transparent_crc(g_872, "g_872", print_hash_value);
    transparent_crc(g_998, "g_998", print_hash_value);
    transparent_crc(g_1017, "g_1017", print_hash_value);
    transparent_crc(g_1023, "g_1023", print_hash_value);
    transparent_crc(g_1144, "g_1144", print_hash_value);
    transparent_crc(g_1152, "g_1152", print_hash_value);
    transparent_crc(g_1155, "g_1155", print_hash_value);
    transparent_crc(g_1168, "g_1168", print_hash_value);
    transparent_crc(g_1181, "g_1181", print_hash_value);
    transparent_crc(g_1187, "g_1187", print_hash_value);
    transparent_crc(g_1328, "g_1328", print_hash_value);
    transparent_crc(g_1337, "g_1337", print_hash_value);
    transparent_crc(g_1391, "g_1391", print_hash_value);
    transparent_crc(g_1481, "g_1481", print_hash_value);
    transparent_crc(g_1518, "g_1518", print_hash_value);
    transparent_crc(g_1526, "g_1526", print_hash_value);
    transparent_crc(g_1545, "g_1545", print_hash_value);
    transparent_crc(g_1556, "g_1556", print_hash_value);
    transparent_crc(g_1699, "g_1699", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
