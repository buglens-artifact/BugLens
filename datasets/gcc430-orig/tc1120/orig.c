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



static int g_7 = (-1L);
static int *g_6 = &g_7;
static unsigned g_43 = 0x992DB756L;
static int g_65 = (-1L);
static char g_95 = 0x74L;
static char g_106 = 0x40L;
static unsigned char g_131 = 0x63L;
static unsigned g_150 = 18446744073709551615UL;
static int g_236 = (-3L);
static char g_258 = 1L;
static int g_286 = (-1L);
static int g_298 = 0L;
static char g_302 = 8L;
static int g_333 = 0x16FE8FEFL;
static unsigned g_335 = 0UL;
static int *g_339 = &g_65;
static unsigned g_384 = 18446744073709551615UL;
static unsigned short g_386 = 0x1A1AL;
static unsigned short *g_385 = &g_386;
static short g_396 = 0x11F1L;
static short *g_395 = &g_396;
static short g_416 = 7L;
static short g_461 = 0xB4F6L;
static int g_472 = 0x288EAD58L;
static int g_497 = 0xBD82A387L;
static int g_512 = 1L;
static short g_513 = 7L;
static int g_537 = (-3L);
static unsigned g_554 = 0x44536B68L;
static int g_622 = 0x08A2A92AL;
static unsigned char g_625 = 5UL;
static unsigned char g_808 = 0x9FL;
static unsigned g_823 = 0x451BB408L;
static unsigned char g_993 = 7UL;
static int *g_1015 = &g_236;
static int **g_1014 = &g_1015;
static unsigned char *g_1192 = &g_131;
static unsigned *g_1247 = (void*)0;
static unsigned **g_1246 = &g_1247;
static unsigned ***g_1245 = &g_1246;
static unsigned ****g_1265 = &g_1245;
static unsigned *****g_1264 = &g_1265;
static unsigned char g_1350 = 255UL;
static unsigned g_1359 = 9UL;
static int g_1458 = 0x6A96F33BL;
static unsigned g_1475 = 1UL;
static char g_1571 = (-1L);
static int g_1579 = (-8L);
static short g_1602 = (-1L);
static int g_1634 = 0xC5311353L;
static int g_1702 = 0xCBD14152L;
static unsigned short g_1732 = 0x0614L;
static int *g_1797 = &g_1579;
static unsigned short g_1831 = 0xB36EL;
static unsigned g_2101 = 0UL;
static int g_2255 = 0x3C295032L;
static int g_2461 = (-1L);
static short g_2762 = (-1L);
static short g_2782 = 0x9C22L;
static short g_2790 = (-3L);
static unsigned g_2800 = 0xF815969DL;



static unsigned char func_1(void);
static int * func_2(unsigned p_3, unsigned char p_4);
static int * func_12(unsigned char p_13, unsigned p_14, int p_15, int * p_16, unsigned p_17);
static short func_20(unsigned char p_21);
static short func_22(int * p_23, int * p_24, unsigned p_25, unsigned p_26);
static unsigned char func_27(int * p_28, int * p_29, int * p_30, unsigned p_31, int * p_32);
static int * func_33(char p_34, unsigned p_35, unsigned char p_36, unsigned p_37, int p_38);
static int * func_45(unsigned p_46, unsigned short p_47, unsigned * p_48);
static unsigned func_50(int p_51, unsigned short p_52, unsigned char p_53, unsigned short p_54, int * p_55);
static unsigned short func_60(unsigned p_61);
static unsigned char func_1(void)
{
    unsigned l_5 = 0x16210B99L;
    unsigned *l_41 = (void*)0;
    unsigned *l_42 = &g_43;
    char l_44 = 0x90L;
    char l_2143 = (-8L);
    char l_2477 = 0xA6L;
    int **l_2639 = &g_1797;
    (*l_2639) = func_2((l_5 == 0xB023L), (g_6 == (((safe_lshift_func_uint8_t_u_s((g_7 < (l_5 , (safe_sub_func_int32_t_s_s((((*l_2639) = func_12(((safe_lshift_func_uint16_t_u_s(0x0B54L, func_20(((l_5 ^ ((func_22(((func_27(func_33((((*l_42) = (safe_sub_func_int32_t_s_s((&g_7 == &g_7), 0x2EF7E291L))) & l_44), g_7, l_44, g_7, g_7), &g_7, l_42, l_2143, &g_7) , l_2477) , &g_1634), l_41, l_2477, g_7) != 1UL) & l_5)) && 0x26A198A1L)))) , 0x3BL), g_1702, (*g_6), &g_7, g_1702)) != (void*)0), 0x4A78BED7L)))), g_2461)) , (**l_2639)) , &g_65)));

    ;
    ;
    ;
    ;
    ;
    (*l_2639) = &g_7;

    ;
    return (**l_2639);
}







static int * func_2(unsigned p_3, unsigned char p_4)
{
    int **l_2640 = (void*)0;
    int **l_2641 = &g_339;
    unsigned **l_2642 = &g_1247;
    unsigned char l_2648 = 2UL;
    int l_2650 = (-10L);
    int l_2674 = 0L;
    int l_2702 = 5L;
    int l_2704 = 0x6CF977BCL;
    int l_2716 = 0L;
    int l_2722 = 0x8360F2A3L;
    int l_2746 = 0L;
    (*l_2641) = &g_298;

    ;
    (***g_1264) = l_2642;
    for (g_1579 = 9; (g_1579 <= (-9)); --g_1579)
    {
        unsigned short l_2645 = 1UL;
        int l_2649 = 0x33413E45L;
        int *l_2651 = &g_537;
        int *l_2652 = &g_622;
        int *l_2653 = (void*)0;
        int *l_2654 = &g_7;
        int *l_2655 = &g_65;
        int *l_2656 = &g_1458;
        int *l_2657 = &l_2650;
        int *l_2658 = &g_7;
        int *l_2659 = &g_537;
        int l_2660 = 0L;
        int *l_2661 = &g_298;
        int *l_2662 = &g_472;
        int *l_2663 = &g_333;
        int *l_2664 = &g_497;
        int *l_2665 = &g_65;
        int *l_2666 = &g_1634;
        int *l_2667 = (void*)0;
        int *l_2668 = &g_497;
        int l_2669 = 7L;
        int *l_2670 = &l_2649;
        int *l_2671 = &g_1458;
        int *l_2672 = (void*)0;
        int *l_2673 = &g_1458;
        int *l_2675 = &g_298;
        int *l_2676 = &g_7;
        int *l_2677 = &g_7;
        int *l_2678 = &l_2674;
        int *l_2679 = &l_2650;
        int *l_2680 = &g_472;
        int *l_2681 = &g_472;
        int *l_2682 = &l_2669;
        int *l_2683 = &g_65;
        int *l_2684 = &g_65;
        int *l_2685 = &g_65;
        int *l_2686 = &g_7;
        int *l_2687 = &l_2674;
        int *l_2688 = &g_1458;
        int *l_2689 = &g_472;
        int *l_2690 = &l_2650;
        int *l_2691 = &l_2674;
        int *l_2692 = &l_2660;
        int *l_2693 = &g_65;
        int l_2694 = 1L;
        int l_2695 = 0x5397216CL;
        int *l_2696 = &g_537;
        int *l_2697 = &l_2695;
        int *l_2698 = &g_537;
        int *l_2699 = &g_7;
        int *l_2700 = &l_2650;
        int *l_2701 = &g_298;
        int *l_2703 = &g_1634;
        int *l_2705 = &l_2649;
        int *l_2706 = &g_1634;
        int *l_2707 = (void*)0;
        int *l_2708 = (void*)0;
        int l_2709 = (-10L);
        int *l_2710 = &g_1634;
        int l_2711 = 0xF9A4309EL;
        int *l_2712 = &g_537;
        int *l_2713 = &l_2711;
        int *l_2714 = (void*)0;
        int *l_2715 = &g_472;
        int *l_2717 = &l_2709;
        int *l_2718 = (void*)0;
        int *l_2719 = (void*)0;
        int *l_2720 = (void*)0;
        int *l_2721 = &l_2695;
        int *l_2723 = &g_7;
        int *l_2724 = (void*)0;
        int *l_2725 = &l_2694;
        int *l_2726 = &l_2695;
        int *l_2727 = &l_2660;
        int *l_2728 = &l_2674;
        int *l_2729 = (void*)0;
        int *l_2730 = &g_1458;
        int *l_2731 = &l_2711;
        int *l_2732 = &g_537;
        int *l_2733 = &l_2660;
        int *l_2734 = &l_2650;
        int *l_2735 = &g_622;
        int *l_2736 = &l_2695;
        int *l_2737 = &l_2716;
        int *l_2738 = (void*)0;
        int *l_2739 = (void*)0;
        int *l_2740 = &l_2660;
        int *l_2741 = &l_2650;
        int *l_2742 = &g_2461;
        int *l_2743 = &l_2674;
        int *l_2744 = &g_298;
        int *l_2745 = &g_472;
        int *l_2747 = &g_2461;
        int *l_2748 = &g_537;
        int *l_2749 = &g_2461;
        int *l_2750 = &g_537;
        int *l_2751 = (void*)0;
        int *l_2752 = &l_2716;
        int *l_2753 = &l_2650;
        int *l_2754 = &l_2746;
        int l_2755 = 0xD19C092CL;
        int *l_2756 = &g_1634;
        int *l_2757 = &g_472;
        int *l_2758 = &l_2669;
        int *l_2759 = &g_1634;
        int *l_2760 = &g_622;
        int *l_2761 = &l_2709;
        int *l_2763 = &l_2746;
        int *l_2764 = (void*)0;
        int *l_2765 = (void*)0;
        int *l_2766 = &g_65;
        int *l_2767 = &l_2694;
        int *l_2768 = &l_2674;
        int *l_2769 = &l_2695;
        int *l_2770 = &g_1634;
        int *l_2771 = &g_2461;
        int *l_2772 = &g_472;
        int *l_2773 = &g_2461;
        int *l_2774 = (void*)0;
        int *l_2775 = &l_2746;
        int *l_2776 = &l_2722;
        int *l_2777 = &l_2704;
        int *l_2778 = &g_2461;
        int *l_2779 = &g_1458;
        int *l_2780 = &g_622;
        int *l_2781 = &l_2716;
        int *l_2783 = &g_7;
        int *l_2784 = &g_497;
        int *l_2785 = &g_7;
        int *l_2786 = &g_298;
        int *l_2787 = &g_298;
        int *l_2788 = &l_2722;
        int *l_2789 = (void*)0;
        int *l_2791 = &l_2704;
        int *l_2792 = &g_537;
        int *l_2793 = (void*)0;
        int *l_2794 = &g_497;
        int *l_2795 = &l_2704;
        int *l_2796 = &l_2746;
        int *l_2797 = (void*)0;
        int *l_2798 = &g_2461;
        int *l_2799 = &g_537;
        l_2645--;
        if ((**l_2641))
            continue;
        if (l_2648)
            continue;
        g_2800--;
    }
    return &g_65;


}







static int * func_12(unsigned char p_13, unsigned p_14, int p_15, int * p_16, unsigned p_17)
{
    unsigned l_2529 = 6UL;
    int *l_2533 = (void*)0;
    int **l_2534 = &g_1797;
    unsigned l_2551 = 1UL;
    short l_2559 = 2L;
    int l_2620 = 1L;
    (*l_2534) = l_2533;

    ;
    for (p_13 = (-16); (p_13 < 10); p_13 = safe_add_func_int32_t_s_s(p_13, 1))
    {
        (*l_2534) = &g_298;

        ;
        (*g_339) = ((*g_339) != 0x00A20117L);
    }

    ;
    p_15 = ((*g_339) = (p_14 , (*g_339)));
    for (g_1458 = 18; (g_1458 <= (-10)); g_1458 = safe_sub_func_int16_t_s_s(g_1458, 1))
    {
        unsigned short l_2539 = 0xBAE5L;
        int l_2576 = 0xB00BE820L;
        int l_2613 = 0xB3E6A8CEL;
        unsigned l_2636 = 1UL;
        (*l_2534) = &g_1579;

        ;
        if (l_2539)
            continue;
        for (p_17 = 28; (p_17 == 26); p_17 = safe_sub_func_uint32_t_u_u(p_17, 2))
        {
            unsigned l_2548 = 2UL;
            unsigned *l_2552 = &l_2529;
            unsigned char *l_2555 = (void*)0;
            unsigned char *l_2556 = &g_808;
            int l_2557 = 0xF82E9F9EL;
            unsigned char *l_2558 = &g_1350;
            int *l_2560 = &g_622;
            int *l_2561 = &g_1579;
            int *l_2562 = &g_2461;
            int *l_2563 = &g_497;
            int *l_2564 = &g_472;
            int *l_2565 = (void*)0;
            int *l_2566 = &g_472;
            int *l_2567 = (void*)0;
            int *l_2568 = &g_622;
            int *l_2569 = &g_622;
            int *l_2570 = &g_333;
            int *l_2571 = &g_65;
            int *l_2572 = &g_1579;
            int *l_2573 = &l_2557;
            int *l_2574 = &g_1634;
            int *l_2575 = (void*)0;
            int *l_2577 = &g_333;
            int *l_2578 = &g_472;
            int *l_2579 = &l_2557;
            int *l_2580 = (void*)0;
            int *l_2581 = &g_537;
            int *l_2582 = &g_472;
            int *l_2583 = &g_622;
            int *l_2584 = &g_537;
            int *l_2585 = &l_2557;
            int *l_2586 = &g_65;
            int *l_2587 = (void*)0;
            int l_2588 = (-6L);
            int *l_2589 = &g_1634;
            int l_2590 = 0xD0148888L;
            int *l_2591 = &g_537;
            int *l_2592 = &g_497;
            int *l_2593 = &g_537;
            int *l_2594 = &g_2461;
            int *l_2595 = (void*)0;
            int *l_2596 = &g_65;
            int *l_2597 = &g_298;
            int *l_2598 = &l_2576;
            int *l_2599 = &l_2557;
            int *l_2600 = (void*)0;
            int *l_2601 = &g_537;
            int *l_2602 = &l_2588;
            int *l_2603 = &g_1634;
            int *l_2604 = (void*)0;
            int *l_2605 = &l_2576;
            int *l_2606 = (void*)0;
            int *l_2607 = &l_2590;
            int *l_2608 = (void*)0;
            int *l_2609 = &g_537;
            int *l_2610 = &g_622;
            int *l_2611 = &g_537;
            int *l_2612 = &l_2576;
            int *l_2614 = &l_2588;
            int *l_2615 = (void*)0;
            int *l_2616 = &g_537;
            int *l_2617 = &g_333;
            int *l_2618 = (void*)0;
            int *l_2619 = &g_1634;
            int *l_2621 = &g_333;
            int *l_2622 = &l_2557;
            int *l_2623 = &l_2620;
            int *l_2624 = &g_298;
            int *l_2625 = &g_65;
            int *l_2626 = (void*)0;
            int *l_2627 = &g_1579;
            int *l_2628 = &l_2590;
            int *l_2629 = &g_2461;
            int *l_2630 = &l_2590;
            int *l_2631 = &l_2613;
            int l_2632 = 0L;
            int *l_2633 = &l_2590;
            int l_2634 = 0xD9B0646DL;
            int *l_2635 = (void*)0;
            g_1634 ^= (safe_mul_func_uint8_t_u_u(p_17, (((*l_2558) = (safe_div_func_int8_t_s_s(p_13, (l_2557 = ((*l_2556) = (safe_rshift_func_int8_t_s_u(l_2548, (0x00D96CB2L == ((safe_lshift_func_uint16_t_u_s((((**l_2534) = ((p_14 = ((*l_2552) = l_2551)) , (safe_mod_func_int32_t_s_s((*p_16), (*g_6))))) == (p_13 <= 252UL)), 0)) & 0x9A88L))))))))) & l_2559)));
            l_2636++;
            (*l_2573) = (*l_2561);
            (*l_2627) &= (*g_339);
        }
        (**l_2534) = (l_2576 &= 1L);
    }

    ;
    return &g_497;


}







static short func_20(unsigned char p_21)
{
    unsigned short l_2508 = 0x01E2L;
    int *l_2511 = &g_333;
    unsigned char l_2514 = 0x77L;
    unsigned *l_2522 = (void*)0;
    unsigned **l_2521 = &l_2522;
    unsigned ***l_2520 = &l_2521;
    if ((safe_add_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(func_50((**g_1014), ((g_625 &= p_21) , (safe_lshift_func_int8_t_s_s((safe_add_func_uint32_t_u_u((l_2508 , (safe_div_func_int16_t_s_s((func_22(l_2511, l_2511, (((func_60(((safe_mod_func_int16_t_s_s(0xFC08L, 1L)) , ((*l_2511) ^= g_497))) == 0x08L) == p_21) , p_21), g_1634) | 0x9CE96485L), p_21))), p_21)), 2))), l_2514, p_21, &g_622), 1)), p_21)))
    {
        return p_21;
    }
    else
    {
        unsigned char l_2515 = 0x0DL;
        int *l_2516 = (void*)0;
        int l_2517 = 0xE949C0D8L;
        unsigned ***l_2523 = &g_1246;
        (*g_1797) = ((l_2515 | (-1L)) || ((func_50((*g_1015), p_21, p_21, l_2515, l_2516) > l_2517) , 8L));
        g_339 = l_2511;

        ;
        if ((0xD124L & (*l_2511)))
        {
            return p_21;
        }
        else
        {
            int l_2528 = 0x67F10D88L;
            return l_2528;
        }
    }
}







static short func_22(int * p_23, int * p_24, unsigned p_25, unsigned p_26)
{
    char l_2490 = 0x03L;
    unsigned l_2495 = 7UL;
    unsigned *l_2496 = &g_150;
    unsigned char l_2497 = 0x6FL;
    int l_2498 = 1L;
    int l_2499 = 7L;
    (*g_339) = ((*g_1015) , ((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s(l_2499, p_26)), p_25)) | 0xAA17L));
    return (*g_395);
}







static unsigned char func_27(int * p_28, int * p_29, int * p_30, unsigned p_31, int * p_32)
{
    unsigned l_2144 = 1UL;
    unsigned short *l_2150 = &g_1732;
    unsigned *l_2151 = &g_2101;
    int *l_2152 = (void*)0;
    unsigned char l_2161 = 6UL;
    unsigned ***l_2164 = &g_1246;
    int **l_2194 = &g_1015;
    int l_2235 = 4L;
    unsigned l_2243 = 0x8654E381L;
    int l_2256 = 8L;
    int l_2276 = 0xE68F3B3FL;
    int l_2285 = 1L;
    int l_2315 = 0L;
    int l_2322 = (-6L);
    int l_2327 = (-5L);
    int l_2365 = 1L;
    int l_2374 = 0L;
    int l_2381 = 0x08D4E719L;
    int l_2407 = 0xC2CA74ECL;
    short **l_2417 = (void*)0;
    short **l_2422 = (void*)0;
    short ***l_2421 = &l_2422;
    unsigned l_2449 = 18446744073709551608UL;
    unsigned l_2452 = 0x2D3378E2L;
    int *l_2455 = &l_2365;
    int *l_2456 = &l_2235;
    unsigned short l_2457 = 7UL;
    int **l_2460 = &l_2152;
    int ***l_2470 = (void*)0;
    int ***l_2471 = &g_1014;
    int ***l_2472 = &l_2194;
    int l_2475 = 0L;
    unsigned l_2476 = 4UL;
    if ((((*g_395) && l_2144) , (l_2144 < (safe_rshift_func_int16_t_s_u((0UL != p_31), (safe_mul_func_int16_t_s_s((!((*g_395) = (l_2144 > (((*l_2151) &= ((safe_unary_minus_func_uint16_t_u(((((*l_2150) = 0UL) , p_31) >= (&g_823 == l_2151)))) , l_2144)) , 0x81L)))), 0x7873L)))))))
    {
        unsigned *l_2155 = &g_43;
        int l_2160 = 0x89827661L;
        int *l_2165 = (void*)0;
        unsigned **l_2190 = &l_2151;
        unsigned char l_2238 = 0x5CL;
        short *l_2263 = (void*)0;
        short *l_2264 = (void*)0;
        char *l_2271 = &g_258;
        l_2152 = &g_537;

        ;
        (*l_2152) = func_50(((safe_mod_func_uint16_t_u_u(g_416, (((--(*l_2155)) || 0x1E0CAA83L) , (safe_add_func_uint16_t_u_u((((l_2160 | func_50((*l_2152), (*l_2152), (func_50((0x91C6AD2EL && (*l_2152)), (l_2160 || g_622), (*l_2152), l_2160, l_2151) ^ (*p_28)), p_31, p_30)) ^ (*l_2152)) && g_808), (*l_2152)))))) , 0xB684749BL), p_31, p_31, l_2160, &l_2160);
        if ((((func_50(l_2161, func_60(g_1702), p_31, (p_31 , (safe_sub_func_int16_t_s_s(((void*)0 == l_2164), l_2160))), l_2165) , &l_2151) != (void*)0) > 1UL))
        {
            int l_2168 = 2L;
            int l_2199 = 0L;
            int l_2214 = 0x977B0A28L;
            for (g_384 = 0; (g_384 > 12); ++g_384)
            {
                unsigned short l_2173 = 0x1562L;
                unsigned l_2192 = 4UL;
                int l_2217 = 0L;
                char l_2241 = 1L;
                int **l_2242 = &l_2165;
            }
        }
        else
        {
            int **l_2247 = &g_339;
            int ***l_2246 = &l_2247;
            short l_2254 = (-1L);
            l_2243++;
            (*g_1797) = (((*l_2246) = &l_2165) == (((safe_mul_func_uint16_t_u_u(p_31, (((((safe_div_func_uint8_t_u_u((((p_28 != (void*)0) > (func_60(g_43) == (p_29 == (void*)0))) || (safe_mod_func_uint32_t_u_u(p_31, p_31))), 0x70L)) | l_2254) > g_2255) != l_2256) , p_31))) , (-7L)) , (void*)0));

            ;
        }
        (*p_30) &= ((0xA3E1531AL > (((*p_28) = ((safe_mod_func_uint8_t_u_u((+p_31), ((*l_2271) = (safe_mul_func_uint16_t_u_u(func_50((p_31 , (0UL <= (safe_sub_func_int16_t_s_s(((*l_2152) &= (g_416 |= (*g_395))), (safe_mul_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s(((*l_2150) = p_31), 1)) & (*g_6)), ((safe_mod_func_int8_t_s_s(p_31, g_461)) && p_31))))))), p_31, g_396, p_31, &g_497), p_31))))) != (*g_1797))) , p_31)) , (*p_32));
    }
    else
    {
        int *l_2272 = &g_333;
        int *l_2273 = &g_65;
        int *l_2274 = &g_1634;
        int *l_2275 = &g_1634;
        int *l_2277 = &g_65;
        int *l_2278 = &g_1458;
        int *l_2279 = (void*)0;
        int l_2280 = 0x9F12936CL;
        int *l_2281 = &l_2276;
        int *l_2282 = &l_2280;
        int *l_2283 = (void*)0;
        int *l_2284 = &l_2280;
        int *l_2286 = &l_2235;
        int *l_2287 = &l_2280;
        int *l_2288 = &g_497;
        int *l_2289 = (void*)0;
        int *l_2290 = &l_2276;
        int *l_2291 = &l_2280;
        int *l_2292 = (void*)0;
        int l_2293 = 0xDE9E9DBEL;
        int *l_2294 = &g_622;
        int *l_2295 = &g_537;
        int *l_2296 = (void*)0;
        int *l_2297 = &g_1634;
        int *l_2298 = &l_2276;
        int *l_2299 = &g_65;
        int *l_2300 = &g_537;
        int *l_2301 = (void*)0;
        int *l_2302 = &g_1634;
        int *l_2303 = &g_65;
        int *l_2304 = &l_2276;
        int *l_2305 = &l_2293;
        int *l_2306 = &g_65;
        int *l_2307 = &g_622;
        int *l_2308 = &g_1579;
        int *l_2309 = &g_1458;
        int *l_2310 = &g_1634;
        int l_2311 = (-4L);
        int *l_2312 = &l_2285;
        int *l_2313 = &g_1458;
        int *l_2314 = &g_622;
        int *l_2316 = &l_2315;
        int *l_2317 = &l_2276;
        int *l_2318 = &l_2315;
        int *l_2319 = &g_298;
        int *l_2320 = (void*)0;
        int *l_2321 = &l_2280;
        int *l_2323 = &g_537;
        int *l_2324 = &g_537;
        int *l_2325 = &l_2276;
        int *l_2326 = &l_2322;
        int *l_2328 = &l_2327;
        int *l_2329 = &g_537;
        int l_2330 = 0x1BD1E575L;
        int *l_2331 = &g_298;
        int *l_2332 = &g_497;
        int *l_2333 = &g_65;
        int *l_2334 = &g_1634;
        int *l_2335 = (void*)0;
        int *l_2336 = (void*)0;
        int *l_2337 = &g_298;
        int *l_2338 = &l_2276;
        int *l_2339 = &g_1579;
        int *l_2340 = &g_472;
        int *l_2341 = &l_2315;
        int *l_2342 = &g_1634;
        int l_2343 = (-10L);
        int *l_2344 = &g_1458;
        int *l_2345 = (void*)0;
        int *l_2346 = &g_497;
        int *l_2347 = &l_2343;
        int *l_2348 = &g_472;
        int *l_2349 = &g_1634;
        int *l_2350 = &l_2293;
        int *l_2351 = &g_1634;
        int *l_2352 = &g_333;
        int *l_2353 = &g_333;
        int *l_2354 = &l_2311;
        int l_2355 = (-9L);
        int *l_2356 = &g_298;
        int *l_2357 = &l_2311;
        int *l_2358 = (void*)0;
        int *l_2359 = &g_1458;
        int *l_2360 = &g_537;
        int *l_2361 = &l_2285;
        int *l_2362 = &l_2285;
        int *l_2363 = (void*)0;
        int *l_2364 = &l_2235;
        int *l_2366 = &l_2327;
        int *l_2367 = &l_2293;
        int *l_2368 = &l_2311;
        int *l_2369 = &l_2293;
        int *l_2370 = &l_2311;
        int *l_2371 = &g_1634;
        int *l_2372 = (void*)0;
        int *l_2373 = &l_2276;
        int *l_2375 = &g_1458;
        int *l_2376 = &l_2322;
        int *l_2377 = &g_65;
        int *l_2378 = (void*)0;
        int *l_2379 = &g_622;
        int *l_2380 = (void*)0;
        int *l_2382 = &g_1458;
        int *l_2383 = &l_2293;
        int *l_2384 = (void*)0;
        int *l_2385 = &g_622;
        int *l_2386 = &l_2315;
        int *l_2387 = &l_2343;
        int *l_2388 = &l_2293;
        int *l_2389 = &g_298;
        int *l_2390 = &l_2355;
        int *l_2391 = &l_2322;
        int *l_2392 = &l_2343;
        int *l_2393 = &l_2322;
        int *l_2394 = (void*)0;
        int *l_2395 = (void*)0;
        int *l_2396 = (void*)0;
        int *l_2397 = &g_1458;
        int l_2398 = 0xBD413918L;
        int *l_2399 = (void*)0;
        int *l_2400 = &l_2327;
        int l_2401 = 1L;
        int *l_2402 = &l_2365;
        int *l_2403 = &g_1634;
        int *l_2404 = (void*)0;
        int *l_2405 = &l_2311;
        int *l_2406 = (void*)0;
        int *l_2408 = &l_2322;
        int *l_2409 = &l_2327;
        int *l_2410 = &l_2311;
        int *l_2411 = &g_1579;
        unsigned l_2412 = 0x11C150CFL;
        short **l_2415 = &g_395;
        short ***l_2416 = &l_2415;
        short ***l_2418 = (void*)0;
        short ***l_2419 = (void*)0;
        short ***l_2420 = &l_2417;
        short ****l_2423 = &l_2418;
        short l_2426 = 0x755DL;
        int *l_2427 = &g_537;
        int *l_2428 = (void*)0;
        int *l_2429 = &l_2322;
        int *l_2430 = &l_2398;
        int *l_2431 = (void*)0;
        int *l_2432 = &g_1634;
        int *l_2433 = &l_2293;
        int *l_2434 = &l_2374;
        int *l_2435 = &g_497;
        int *l_2436 = (void*)0;
        int *l_2437 = &l_2327;
        char l_2438 = 0L;
        int *l_2439 = &l_2235;
        int *l_2440 = &l_2322;
        int *l_2441 = &l_2401;
        int *l_2442 = (void*)0;
        int *l_2443 = &g_1579;
        int *l_2444 = &l_2276;
        int *l_2445 = &g_497;
        int *l_2446 = (void*)0;
        int *l_2447 = &g_537;
        int *l_2448 = &l_2276;
        --l_2412;
        (*l_2314) = ((((*l_2416) = l_2415) == ((*l_2420) = l_2417)) == ((((*g_395) , l_2421) == ((*l_2423) = &l_2422)) < (safe_rshift_func_uint16_t_u_s(l_2381, 4))));

        ;
        l_2449++;
        l_2452--;
    }

    ;
    ++l_2457;
    (*l_2460) = (void*)0;

    ;
    (*p_30) ^= ((func_60((func_60(g_622) < g_2461)) <= (safe_lshift_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u(((((*l_2455) = (safe_div_func_int16_t_s_s(((*g_395) = (p_31 == (((((*l_2472) = ((*l_2471) = &g_1015)) != &g_1015) | ((((*g_339) = (0xC8A0L ^ (safe_rshift_func_uint16_t_u_s(((*l_2456) <= 0xBE12L), 7)))) <= p_31) , g_286)) ^ (*g_395)))), 0xBB65L))) || (*g_339)) , p_31), p_31)) , l_2475), (-6L))), 2))) & 0UL);

    ;
    return l_2476;
}







static int * func_33(char p_34, unsigned p_35, unsigned char p_36, unsigned p_37, int p_38)
{
    char l_49 = (-1L);
    int *l_137 = &g_65;
    unsigned *l_155 = &g_43;
    unsigned **l_154 = &l_155;
    int **l_2141 = (void*)0;
    int **l_2142 = &g_339;
    (*l_2142) = func_45(l_49, p_38, ((*l_154) = ((l_49 == func_50(g_7, (g_43 , p_38), ((safe_sub_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_s(255UL, (func_60((l_49 > (((((((safe_sub_func_uint16_t_u_u(2UL, l_49)) , p_37) || 65528UL) , &g_43) == &g_43) != g_7) >= 0x9FL))) , p_35))) || p_37), l_49)) != p_37), g_65, l_137)) , &g_43)));

    ;
    ;
    ;
    ;
    ;
    (*g_1797) ^= p_38;
    (*l_2142) = (g_1797 = &g_1458);

    ;
    ;
    return &g_537;


}







static int * func_45(unsigned p_46, unsigned short p_47, unsigned * p_48)
{
    int *l_157 = &g_65;
    int **l_156 = &l_157;
    unsigned l_168 = 0x10498C5DL;
    unsigned *l_228 = (void*)0;
    unsigned **l_227 = &l_228;
    unsigned short l_230 = 1UL;
    int l_235 = (-2L);
    int l_271 = 0xDBC95396L;
    int l_294 = 0x87B70EE5L;
    int l_325 = 0x286D0CB5L;
    unsigned short *l_383 = &l_230;
    int l_414 = 0L;
    int l_518 = 0x6B0D4AEBL;
    short **l_570 = &g_395;
    int l_571 = 0xB6539B9AL;
    int l_592 = 0x41092094L;
    int **l_639 = &l_157;
    unsigned *l_852 = &g_335;
    unsigned **l_851 = &l_852;
    unsigned char *l_907 = &g_625;
    int ***l_1079 = &g_1014;
    unsigned short l_1103 = 65535UL;
    unsigned char l_1108 = 0x7EL;
    unsigned ***l_1153 = (void*)0;
    unsigned l_1159 = 0x225DE871L;
    short l_1203 = 9L;
    int *l_1209 = &l_235;
    unsigned *l_1224 = &l_168;
    int l_1270 = 0xB34F68D2L;
    int l_1357 = 0x855A4FADL;
    unsigned *l_1777 = (void*)0;
    unsigned *****l_1867 = (void*)0;
    short l_2139 = 0L;
    int l_2140 = 9L;
    (*l_156) = p_48;

    ;
    if (((safe_mul_func_uint16_t_u_u((**l_156), (g_131 < 0x94B8L))) < 0x6C92F0D9L))
    {
        short l_208 = (-1L);
        int l_209 = 0xE034D058L;
        int l_210 = 0x4AA1647FL;
        unsigned l_226 = 0xC39D9FE8L;
        int l_426 = 9L;
        int l_476 = 0xB9C1FDE3L;
        int l_511 = (-4L);
        int l_550 = 0xC94A6896L;
        int *l_557 = &g_333;
        char *l_572 = &g_258;
        if ((safe_lshift_func_uint8_t_u_s(g_95, ((((safe_mod_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(g_95, 4)) || l_168), ((safe_add_func_uint32_t_u_u(func_60(p_46), ((safe_lshift_func_uint8_t_u_u(p_46, 2)) != ((((*l_157) = p_46) | g_106) && (**l_156))))) <= g_106))), g_106)) && p_46) , (*l_157)) , g_150))))
        {
            unsigned short l_182 = 1UL;
            int **l_202 = (void*)0;
            unsigned short *l_217 = &l_182;
            unsigned *l_229 = &l_226;
            int l_284 = 0xBFDF0F64L;
            int *l_338 = &l_235;
            if (func_60(p_46))
            {
                (**l_156) |= p_47;
            }
            else
            {
                int l_179 = 0x427A07EEL;
                unsigned short *l_183 = &l_182;
                (**l_156) = (safe_rshift_func_uint16_t_u_u((((p_47 & g_95) <= ((safe_add_func_int16_t_s_s(g_150, func_60(((g_106 = (-2L)) != ((safe_div_func_int32_t_s_s(((func_60(g_150) , ((*l_183) = (((l_179 >= (safe_rshift_func_uint8_t_u_s(func_60(l_182), 6))) || 255UL) | 4294967295UL))) ^ (*l_157)), p_47)) != 7UL))))) > 2L)) >= p_46), 13));
            }
            for (l_168 = 28; (l_168 < 1); l_168--)
            {
                unsigned l_207 = 0x42021A1DL;
                unsigned short *l_211 = (void*)0;
                int l_212 = 6L;
                if ((*g_6))
                    break;
                l_212 = ((((**l_156) = (safe_sub_func_int16_t_s_s(g_7, (safe_sub_func_int8_t_s_s((l_210 = ((safe_rshift_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_div_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((1UL == (safe_mul_func_int16_t_s_s(0x79C6L, 4UL))), func_50(g_150, ((((((safe_mul_func_uint16_t_u_u(((l_202 != (g_7 , (void*)0)) > ((safe_mul_func_int16_t_s_s(((safe_rshift_func_uint8_t_u_u(l_207, p_46)) == g_131), 0x9B53L)) ^ 0L)), g_106)) , p_46) == 2UL) <= p_47) && l_208) , p_47), l_208, l_209, p_48))), 0xADL)), p_46)), (**l_156))) , l_207)), 0x92L))))) > l_207) == 0UL);
            }
            if (func_50(l_209, ((*l_217) = ((safe_div_func_uint16_t_u_u(65532UL, 0xEC01L)) ^ (((g_131 , func_60(((*l_229) = (safe_mul_func_int8_t_s_s(((func_60((g_43 , ((((*l_217) = g_65) <= (safe_lshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_s((l_202 == &l_157), ((safe_mod_func_int16_t_s_s((l_226 <= l_210), 0xC4AFL)) , g_65))), p_46)), 6))) , g_7))) , &p_48) == l_227), g_43))))) , p_47) | g_106))), g_65, g_95, &g_65))
            {
                int *l_237 = &l_235;
                int *l_238 = (void*)0;
                int *l_239 = &g_65;
                int l_240 = (-8L);
                int *l_241 = &g_65;
                int *l_242 = &g_65;
                int *l_243 = &g_65;
                int *l_244 = (void*)0;
                int *l_245 = &g_65;
                int *l_246 = &l_210;
                int *l_247 = &l_235;
                int *l_248 = &g_65;
                int *l_249 = &g_65;
                int *l_250 = &l_210;
                int *l_251 = &l_240;
                int *l_252 = &l_210;
                int *l_253 = &l_210;
                int *l_254 = (void*)0;
                int *l_255 = &g_65;
                int *l_256 = (void*)0;
                int *l_257 = &l_240;
                int *l_259 = &l_240;
                int *l_260 = &l_235;
                int *l_261 = (void*)0;
                int *l_262 = &l_240;
                int *l_263 = &g_65;
                int l_264 = 0x9179A281L;
                int *l_265 = &l_240;
                int *l_266 = &l_240;
                int *l_267 = &g_65;
                int *l_268 = &l_235;
                int *l_269 = &l_210;
                int *l_270 = &l_240;
                int *l_272 = &l_210;
                int *l_273 = &l_235;
                int *l_274 = &l_240;
                int *l_275 = &l_264;
                int *l_276 = &g_65;
                int *l_277 = &l_271;
                int *l_278 = &l_240;
                int *l_279 = (void*)0;
                int *l_280 = &l_271;
                int *l_281 = &l_240;
                int *l_282 = (void*)0;
                int *l_283 = &l_271;
                int *l_285 = &l_235;
                int l_287 = 0x38B79B9AL;
                int l_288 = 0x0D86458DL;
                int *l_289 = (void*)0;
                int *l_290 = (void*)0;
                int *l_291 = &l_264;
                int *l_292 = &l_287;
                int l_293 = (-1L);
                int *l_295 = (void*)0;
                int *l_296 = (void*)0;
                int *l_297 = &l_288;
                int *l_299 = (void*)0;
                int *l_300 = &l_240;
                int *l_301 = (void*)0;
                int *l_303 = &l_271;
                int *l_304 = (void*)0;
                int *l_305 = &l_287;
                int *l_306 = &l_284;
                int *l_307 = &g_65;
                int *l_308 = &l_210;
                int *l_309 = &l_294;
                int *l_310 = &l_284;
                int *l_311 = &l_210;
                int l_312 = 0xF4AD5260L;
                int *l_313 = &l_240;
                int *l_314 = &g_298;
                int *l_315 = &l_287;
                int *l_316 = &l_235;
                int *l_317 = &l_264;
                int *l_318 = &l_294;
                int *l_319 = &l_294;
                int *l_320 = &l_235;
                int *l_321 = &l_287;
                int *l_322 = &l_264;
                int *l_323 = &l_287;
                int *l_324 = &l_293;
                int *l_326 = &g_298;
                int *l_327 = &g_298;
                int *l_328 = &l_271;
                int *l_329 = &l_240;
                int *l_330 = &l_235;
                int *l_331 = &l_312;
                int *l_332 = &g_65;
                int *l_334 = &g_65;
                l_230++;
                for (g_65 = 12; (g_65 > 3); g_65 = safe_sub_func_int32_t_s_s(g_65, 1))
                {
                    (*l_156) = &g_7;

                    ;
                }

                ;
                g_335--;
                g_339 = l_338;

                ;
            }
            else
            {
                unsigned short *l_344 = &l_182;
                int l_345 = 0x8E4816DBL;
                char *l_354 = &g_95;
                char *l_355 = (void*)0;
                char *l_356 = &g_106;
                short *l_365 = &l_208;
                (*l_157) = (safe_rshift_func_int8_t_s_u((safe_add_func_int16_t_s_s(((-4L) >= (((*g_339) != p_47) , (((g_106 , ((l_344 != (void*)0) , (((*l_338) = func_60((*l_338))) , func_50(l_345, l_345, g_258, l_345, &l_345)))) | l_345) >= g_258))), 8UL)), 7));
                if (((*l_338) <= (((*l_365) = (safe_div_func_int32_t_s_s((safe_sub_func_int16_t_s_s((safe_sub_func_int8_t_s_s((safe_mul_func_uint8_t_u_u(g_43, 0x41L)), (((*l_217) = (p_46 ^ (((*l_356) = ((*l_354) = 6L)) , p_47))) , (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_47, ((*l_356) = (((safe_rshift_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((p_47 | (*g_6)), (*l_157))), 13)) > p_46) == 0xADL)))), 5))))), l_209)), (-6L)))) , l_208)))
                {
                    return p_48;


                }
                else
                {
                    int l_368 = (-9L);
                    int *l_369 = (void*)0;
                    char l_372 = 0x46L;
                    (*l_157) = (safe_sub_func_uint8_t_u_u((((func_50(p_46, g_106, (g_131 = l_368), p_46, (l_226 , l_369)) || (safe_mul_func_uint16_t_u_u(func_60(((p_46 , 0L) , l_372)), g_335))) < (**l_156)) < 0x57L), 3L));
                    for (g_65 = 0; (g_65 != 16); ++g_65)
                    {
                        int *l_387 = &g_236;
                        (*l_156) = &l_210;

                        ;
                        l_345 |= (safe_mul_func_uint16_t_u_u((((*l_344) = g_302) | ((*l_365) = (safe_mod_func_int8_t_s_s(g_65, ((((*l_387) = (g_298 & (&l_226 == ((safe_sub_func_int16_t_s_s(g_302, (safe_sub_func_uint32_t_u_u((0x1AL | 0xE3L), (l_383 != (g_385 = (func_50(g_286, g_106, g_384, g_384, &g_298) , (void*)0))))))) , (void*)0)))) , 255UL) & g_384))))), g_335));

                        ;
                        (*l_157) &= p_47;
                    }

                    ;
                    ;
                    (**l_156) = (safe_lshift_func_uint8_t_u_s(g_333, 5));
                    (**l_156) &= p_46;
                }

                ;
                ;
            }

            ;
            ;
            ;
        }
        else
        {
            for (g_150 = 16; (g_150 > 33); g_150 = safe_add_func_int8_t_s_s(g_150, 4))
            {
                int **l_403 = (void*)0;
                int *l_405 = &g_286;
                int **l_404 = &l_405;
                for (g_286 = 3; (g_286 < (-22)); --g_286)
                {
                    short **l_394 = (void*)0;
                    short *l_398 = &l_208;
                    short **l_397 = &l_398;
                    (*l_157) = ((g_395 = g_385) == ((*l_397) = l_383));

                    ;
                    ;
                }
                (*l_156) = &l_210;

                ;
                (*g_339) ^= (safe_lshift_func_uint8_t_u_s(g_95, (safe_div_func_int8_t_s_s((((*l_404) = p_48) == (l_209 , &g_236)), (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(0xF06DL, 4)), 3))))));

                ;
            }

            ;
            ;
        }

        ;
        ;
        ;
        ;
        (*l_156) = &g_333;

        ;
        for (l_271 = (-26); (l_271 > (-28)); l_271 = safe_sub_func_int16_t_s_s(l_271, 8))
        {
            int l_415 = 0x9C3CA289L;
            int l_473 = 0L;
            int l_494 = 5L;
            int l_525 = (-1L);
            for (g_298 = 0; (g_298 <= 3); g_298 = safe_add_func_int32_t_s_s(g_298, 7))
            {
                int *l_417 = &l_294;
                int *l_418 = &l_235;
                int *l_419 = (void*)0;
                int *l_420 = (void*)0;
                int *l_421 = (void*)0;
                int *l_422 = &l_210;
                int *l_423 = &g_65;
                int *l_424 = &l_294;
                int *l_425 = &g_65;
                int *l_427 = &l_294;
                int *l_428 = &l_294;
                int *l_429 = (void*)0;
                int *l_430 = &g_333;
                int *l_431 = (void*)0;
                int *l_432 = &l_210;
                int *l_433 = (void*)0;
                int *l_434 = &l_210;
                int *l_435 = &g_65;
                int *l_436 = (void*)0;
                int *l_437 = (void*)0;
                int *l_438 = &l_426;
                int *l_439 = &l_294;
                int l_440 = 3L;
                int *l_441 = &l_426;
                int *l_442 = &l_440;
                int *l_443 = &g_65;
                int *l_444 = &g_333;
                int *l_445 = &l_426;
                int *l_446 = (void*)0;
                int *l_447 = &l_440;
                int *l_448 = &l_210;
                int *l_449 = &l_210;
                int *l_450 = &l_426;
                int *l_451 = &g_65;
                int *l_452 = &l_235;
                int *l_453 = &l_294;
                int *l_454 = &g_65;
                int *l_455 = (void*)0;
                int l_456 = (-8L);
                int *l_457 = &l_456;
                int *l_458 = &l_294;
                int *l_459 = &l_456;
                int l_460 = 1L;
                int l_462 = 0x375581D7L;
                int l_463 = 0L;
                int *l_464 = &l_460;
                int *l_465 = &l_462;
                int *l_466 = (void*)0;
                int *l_467 = &g_65;
                int *l_468 = &l_460;
                int *l_469 = &l_440;
                int *l_470 = &l_426;
                int *l_471 = (void*)0;
                int *l_474 = (void*)0;
                int *l_475 = &l_325;
                int *l_477 = &l_235;
                int *l_478 = &l_456;
                int *l_479 = (void*)0;
                int *l_480 = &l_440;
                int *l_481 = &l_440;
                int *l_482 = &l_456;
                int *l_483 = &l_235;
                int *l_484 = &l_456;
                int *l_485 = &l_325;
                int *l_486 = &l_456;
                int *l_487 = &g_472;
                int *l_488 = &g_65;
                int *l_489 = (void*)0;
                int *l_490 = &l_235;
                int *l_491 = &l_463;
                int *l_492 = &l_235;
                int *l_493 = &l_440;
                int *l_495 = (void*)0;
                int *l_496 = &g_65;
                int *l_498 = (void*)0;
                int *l_499 = &l_460;
                int *l_500 = (void*)0;
                int *l_501 = &l_325;
                int *l_502 = &g_472;
                int *l_503 = (void*)0;
                int *l_504 = (void*)0;
                int *l_505 = &l_476;
                int l_506 = 0L;
                int *l_507 = &g_65;
                int *l_508 = &l_463;
                int *l_509 = (void*)0;
                int *l_510 = &l_294;
                int *l_514 = &l_325;
                int *l_515 = &l_511;
                int *l_516 = &l_511;
                int *l_517 = (void*)0;
                int *l_519 = &l_463;
                int *l_520 = &l_294;
                int *l_521 = &l_462;
                int *l_522 = &l_210;
                int *l_523 = &l_440;
                int *l_524 = &l_506;
                int *l_526 = &l_460;
                int *l_527 = (void*)0;
                int *l_528 = &l_460;
                int *l_529 = &l_506;
                int *l_530 = &l_294;
                int *l_531 = &l_460;
                int *l_532 = &l_426;
                int *l_533 = &g_472;
                int *l_534 = &g_472;
                int *l_535 = &l_476;
                int *l_536 = (void*)0;
                int *l_538 = &l_494;
                int *l_539 = (void*)0;
                int *l_540 = &l_476;
                int *l_541 = (void*)0;
                int *l_542 = &g_497;
                int *l_543 = &g_333;
                int *l_544 = &l_325;
                int *l_545 = (void*)0;
                int *l_546 = &l_440;
                int *l_547 = (void*)0;
                int *l_548 = &l_506;
                int *l_549 = &l_473;
                int *l_551 = &g_333;
                int *l_552 = &l_476;
                int *l_553 = (void*)0;
                (*g_339) = l_414;
                ++g_554;
                l_477 = (l_557 = p_48);

                ;
                ;
            }
        }

        ;
        if ((((safe_lshift_func_uint8_t_u_s(0xA4L, 5)) == p_47) != (safe_add_func_int8_t_s_s(((*l_572) = (safe_rshift_func_uint8_t_u_u((safe_div_func_uint16_t_u_u(((p_46 | (safe_rshift_func_uint8_t_u_s(((((safe_mul_func_uint16_t_u_u(((65535UL < ((void*)0 != l_570)) || l_571), (**l_156))) || ((void*)0 != &l_557)) || 0UL) >= 1UL), g_396))) & (*l_157)), 0x2BA8L)), 1))), g_131))))
        {
            (*l_156) = (void*)0;

            ;
            (*l_156) = &l_476;

            ;
            return p_48;



        }
        else
        {
            int l_573 = 0L;
            int *l_574 = &l_294;
            int *l_575 = &g_497;
            int *l_576 = (void*)0;
            int *l_577 = &g_65;
            int *l_578 = &g_497;
            int *l_579 = (void*)0;
            int *l_580 = (void*)0;
            int *l_581 = &l_325;
            int *l_582 = &l_511;
            int *l_583 = (void*)0;
            int *l_584 = &l_550;
            int *l_585 = &l_294;
            int *l_586 = &l_511;
            int *l_587 = &l_426;
            int *l_588 = &g_497;
            int *l_589 = &g_298;
            int *l_590 = &g_333;
            int *l_591 = &l_518;
            int *l_593 = &g_298;
            int l_594 = 1L;
            int *l_595 = &l_325;
            int *l_596 = &g_298;
            int *l_597 = (void*)0;
            int *l_598 = &l_210;
            int *l_599 = &l_511;
            int *l_600 = &l_294;
            int *l_601 = &l_476;
            int *l_602 = &l_426;
            int *l_603 = (void*)0;
            int l_604 = 1L;
            int *l_605 = &l_511;
            int *l_606 = &l_604;
            int *l_607 = &g_65;
            int *l_608 = &l_550;
            int *l_609 = &l_271;
            int *l_610 = &l_550;
            int *l_611 = (void*)0;
            int *l_612 = (void*)0;
            int *l_613 = (void*)0;
            int *l_614 = (void*)0;
            int *l_615 = &g_65;
            int *l_616 = (void*)0;
            int *l_617 = &l_511;
            int *l_618 = &g_497;
            int *l_619 = &l_571;
            int *l_620 = &g_298;
            int *l_621 = &g_298;
            int *l_623 = &g_65;
            int *l_624 = &g_65;
            g_625--;
        }
    }
    else
    {
        int **l_628 = &g_339;
        int l_647 = 0xB3874F58L;
        int l_701 = 1L;
        int l_706 = (-1L);
        int l_711 = 0L;
        int l_740 = 0xE6BF6D66L;
        int l_752 = (-1L);
        int l_799 = 1L;
        unsigned *l_835 = &g_384;
        int *l_905 = &l_414;
        int **l_904 = &l_905;
        (*l_156) = &g_537;

        ;
        (*l_628) = ((*l_156) = p_48);

        ;
        ;
        (*l_156) = ((*l_628) = &g_472);

        ;
        ;
        for (g_554 = 0; (g_554 >= 41); g_554 = safe_add_func_int32_t_s_s(g_554, 6))
        {
            unsigned short l_637 = 3UL;
            int *l_638 = &l_592;
            int l_670 = 0x7E63882DL;
            int l_691 = 0x3ECF46E8L;
            int l_699 = 8L;
            int l_715 = (-1L);
            int l_724 = 1L;
            int l_730 = 0xE67CEA31L;
            int l_777 = 0xB88D4735L;
            short l_804 = 0xB157L;
            unsigned short l_901 = 0x9973L;
        }
    }

    ;
    ;
    ;
    ;
    if (((*g_339) &= (l_907 == l_907)))
    {
        int *l_908 = &l_571;
        int *l_909 = &g_298;
        int *l_910 = &l_325;
        int *l_911 = &l_235;
        int *l_912 = &g_497;
        int *l_913 = &l_235;
        int *l_914 = &g_333;
        int *l_915 = &g_65;
        int *l_916 = (void*)0;
        int *l_917 = &g_537;
        int l_918 = 0xE3FB1D8FL;
        int *l_919 = (void*)0;
        int l_920 = 2L;
        int *l_921 = &g_65;
        int *l_922 = &g_497;
        int *l_923 = &l_294;
        int *l_924 = &g_497;
        int *l_925 = &l_592;
        int *l_926 = &g_65;
        int *l_927 = &g_65;
        int *l_928 = &l_920;
        int *l_929 = (void*)0;
        int *l_930 = &g_537;
        int *l_931 = &g_537;
        int *l_932 = &l_918;
        int *l_933 = (void*)0;
        int *l_934 = &l_571;
        int *l_935 = &g_333;
        int l_936 = (-7L);
        int *l_937 = (void*)0;
        int *l_938 = (void*)0;
        int *l_939 = &l_936;
        int *l_940 = &g_537;
        int *l_941 = &l_918;
        int *l_942 = (void*)0;
        int *l_943 = (void*)0;
        int *l_944 = &l_920;
        int *l_945 = &g_65;
        int *l_946 = (void*)0;
        int *l_947 = &l_920;
        int *l_948 = &l_235;
        int *l_949 = &l_936;
        int *l_950 = &l_518;
        int *l_951 = &l_918;
        int l_952 = 0x2C092C46L;
        int *l_953 = &g_537;
        int *l_954 = &l_325;
        int l_955 = 1L;
        int *l_956 = &g_472;
        int *l_957 = &l_920;
        int *l_958 = &l_294;
        int *l_959 = &g_65;
        int *l_960 = &l_952;
        int *l_961 = &g_65;
        int *l_962 = (void*)0;
        int *l_963 = &l_235;
        int *l_964 = &l_235;
        int *l_965 = &l_955;
        int *l_966 = &l_235;
        int *l_967 = &l_952;
        int *l_968 = &l_952;
        int *l_969 = (void*)0;
        int *l_970 = &l_920;
        int l_971 = 0xD64A8A4FL;
        int *l_972 = (void*)0;
        int *l_973 = &g_622;
        int l_974 = 0x7E43D728L;
        int *l_975 = &g_65;
        int l_976 = 1L;
        int l_977 = 1L;
        int l_978 = 1L;
        int l_979 = 0x9E97CFCCL;
        int *l_980 = (void*)0;
        int *l_981 = &l_979;
        int *l_982 = (void*)0;
        int *l_983 = &l_971;
        int *l_984 = (void*)0;
        int *l_985 = &g_298;
        int *l_986 = &l_918;
        int l_987 = (-1L);
        int l_988 = 1L;
        int *l_989 = &g_622;
        int *l_990 = (void*)0;
        int *l_991 = &l_952;
        int *l_992 = &g_333;
        unsigned short l_1057 = 0UL;
        int *l_1098 = &g_497;
        short **l_1170 = (void*)0;
        unsigned l_1186 = 0xBAD6694DL;
        char l_1214 = 0xB9L;
        (**l_639) &= 9L;
        ++g_993;
        for (g_258 = 3; (g_258 == (-23)); g_258 = safe_sub_func_uint32_t_u_u(g_258, 3))
        {
            char l_1048 = 0xA6L;
            unsigned **l_1060 = &l_228;
        }
        if (((*l_913) = (0x74L == ((safe_rshift_func_uint16_t_u_s(65535UL, 6)) <= ((p_46 >= (l_1103 < p_46)) , (safe_sub_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_s((func_50((**l_156), (4294967292UL >= (p_47 <= (((&g_808 == (void*)0) & p_46) <= l_1108))), p_47, (*l_157), (*l_639)) , 0x6B25L), (*l_949))) > (*g_395)), (*g_395))))))))
        {
            short l_1119 = 0L;
            char *l_1120 = &g_106;
            int l_1134 = 0x3B9E6C42L;
            int l_1135 = 0xB7E426E6L;
            int l_1158 = (-10L);
            (*l_989) &= ((*l_927) = (*g_6));
            if ((safe_mod_func_int8_t_s_s((**l_156), (safe_div_func_uint32_t_u_u(((*p_48) & ((safe_mul_func_uint16_t_u_u((safe_div_func_uint16_t_u_u((((safe_sub_func_int8_t_s_s(((*l_1120) = l_1119), (safe_div_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((safe_mul_func_uint16_t_u_u(65535UL, ((**l_639) , ((*g_339) | (safe_mul_func_int8_t_s_s(g_7, ((*l_940) , ((((safe_add_func_uint32_t_u_u(((*g_339) && g_625), g_461)) && 0x4FL) ^ 0x3AL) | l_1119)))))))), g_286)), p_47)))) < l_1119) || 0x6CL), (*l_944))), 0x2BBEL)) == (**l_639))), l_1119)))))
            {
                return &g_298;



            }
            else
            {
                unsigned char l_1137 = 0xCCL;
                unsigned ***l_1150 = &l_227;
                if (p_46)
                {
                    unsigned l_1140 = 0xA5E97BEEL;
                    for (l_920 = (-7); (l_920 <= 2); l_920++)
                    {
                        short l_1133 = 7L;
                        int l_1136 = 2L;
                        --l_1137;
                        (*g_339) = (*g_6);
                        --l_1140;
                        (*l_156) = &g_298;

                        ;
                    }

                    ;
                    (*l_156) = p_48;

                    ;
                }
                else
                {
                    int *l_1143 = &l_978;
                    l_1143 = (g_472 , ((*l_639) = p_48));

                    ;
                    ;
                    for (l_976 = (-20); (l_976 < 28); l_976 = safe_add_func_int8_t_s_s(l_976, 1))
                    {
                        unsigned ****l_1151 = (void*)0;
                        unsigned ****l_1152 = &l_1150;
                        (*g_339) = (safe_lshift_func_uint8_t_u_u(((**l_156) < ((safe_lshift_func_uint8_t_u_s((((*l_1152) = l_1150) == l_1153), 5)) == (*l_1143))), 5));
                        l_1134 = l_1134;
                    }
                    (*l_989) = func_50((**g_1014), (((safe_rshift_func_uint16_t_u_s(((*l_383) &= (((((func_60(((**l_851) = l_1137)) ^ ((++(*p_48)) <= p_47)) == (((*l_932) = (*l_992)) ^ (((void*)0 == p_48) , (*g_339)))) < (((((*l_989) = (l_1158 == p_46)) | 0x33D9DED7L) , &g_302) == &g_106)) , 7L) != 0x56119FBDL)), 13)) , l_1137) , p_46), p_47, l_1159, &g_7);
                }

                ;
            }

            ;
            if ((func_60((--(*l_852))) && ((((safe_mul_func_uint8_t_u_u(g_95, (((func_50(p_47, ((safe_add_func_int8_t_s_s(((*l_1120) &= g_65), g_497)) && ((((&g_395 != (func_50(((g_537 , func_50(((safe_lshift_func_uint8_t_u_u(((*l_907) = (safe_mod_func_int16_t_s_s(((g_95 >= p_46) <= 0x0AE924FBL), (*g_395)))), 7)) || (**l_156)), p_47, p_46, p_46, p_48)) , (**g_1014)), l_1134, p_46, p_47, p_48) , l_1170)) ^ l_1158) > g_384) , g_512)), g_7, p_47, p_48) <= (*p_48)) > (*p_48)) , 0x94L))) , p_46) >= l_1135) , p_47)))
            {
                short l_1171 = 0x0216L;
                char l_1185 = (-1L);
                l_1171 |= (*g_339);
                (*l_156) = &g_65;

                ;
                (*l_992) &= (safe_add_func_uint32_t_u_u((~(~(1UL | ((*g_395) &= (((*g_339) < 0x11F7DEC9L) <= (safe_unary_minus_func_uint8_t_u((g_65 >= (safe_add_func_uint16_t_u_u((((((((*l_986) , func_60((safe_mul_func_int16_t_s_s(((safe_mod_func_int16_t_s_s((((1UL >= (safe_div_func_int16_t_s_s(((**l_156) <= ((safe_mod_func_uint32_t_u_u(((*l_157) > g_302), 0xDB909375L)) , l_1185)), l_1186))) , (*l_157)) ^ 0x69L), p_46)) || (**l_156)), p_46)))) , 0xFAL) >= 0xF1L) , (*g_1015)) , (**l_639)) < p_46), p_46)))))))))), 4294967295UL));
                (*l_639) = p_48;

                ;
            }
            else
            {
                unsigned ****l_1187 = &l_1153;
                unsigned *****l_1188 = &l_1187;
                unsigned ****l_1189 = &l_1153;
                if (((((*l_1188) = l_1187) == l_1189) <= ((**l_570) = (safe_add_func_int8_t_s_s(p_46, ((*l_928) & ((l_1135 , (g_1192 = (void*)0)) == &g_625)))))))
                {
                    (*l_156) = &g_622;

                    ;
                }
                else
                {
                    unsigned char *l_1199 = &l_1108;
                    short *l_1200 = &g_461;
                    int *l_1208 = &l_979;
                    (*l_639) = (func_60((*l_940)) , &g_497);

                    ;
                    (*l_991) = (((safe_mod_func_int8_t_s_s((((((((((g_513 ^= ((*l_1200) = ((**l_570) = (g_554 , (safe_add_func_uint8_t_u_u(((*l_1199) = ((*l_907)++)), 0x91L)))))) , (safe_rshift_func_uint8_t_u_u(func_60(((*l_852) = 18446744073709551610UL)), 4))) >= l_1203) , (*g_6)) <= ((safe_add_func_uint32_t_u_u((((**l_156) , ((((p_47 , g_395) != &p_47) >= p_47) , p_47)) , g_298), 0x2B94357FL)) , 1UL)) ^ g_823) >= l_1135) != 0xD4L) >= 0xA2357B5CL), (**l_156))) & p_46) , p_47);
                    for (g_384 = 26; (g_384 >= 36); ++g_384)
                    {
                        l_1209 = (g_339 = ((*l_156) = l_1208));

                        ;
                        ;
                        ;
                        return &g_537;



                    }
                }

                ;
                ;
                return p_48;



            }
            (*l_157) &= p_47;
        }
        else
        {
            char l_1215 = 1L;
            (*l_959) = (func_50(((func_50((safe_mul_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*g_6) ^ (((l_1214 ^ (*p_48)) , (*l_1079)) != &g_1015)), 0xD8L)), (((((**l_639) , &p_46) != &p_46) < 0x69L) && p_46))), (*l_157), (*l_1209), g_497, p_48) == (*g_6)) , (*l_157)), g_472, p_46, (*l_966), (*l_156)) && l_1215);
            (*l_960) &= p_47;
        }

        ;
    }
    else
    {
        int l_1225 = 0xC24D1698L;
        int l_1226 = 0xC9F4CAAAL;
        short l_1387 = 0L;
        int l_1481 = 0L;
        int l_1495 = 0xBCBA6B84L;
        int l_1508 = (-6L);
        int l_1522 = 1L;
        int l_1544 = 6L;
        int l_1568 = 1L;
        int l_1587 = 1L;
        int l_1596 = 0xED0CD920L;
        int l_1607 = 0xA7438C43L;
        int l_1619 = 0x64DC1626L;
        int l_1647 = 0x286EF590L;
        int l_1674 = 0x81376577L;
        int l_1704 = 7L;
        int l_1711 = 0xCF3B8012L;
        int l_1739 = 0x67C93CD0L;
        unsigned **l_1752 = (void*)0;
        unsigned char l_1765 = 249UL;
        unsigned *l_1778 = &g_1359;
        int l_1786 = 4L;
        if ((l_1226 ^= ((safe_rshift_func_int8_t_s_s(((safe_mod_func_int32_t_s_s(((((*l_383) = ((g_497 > p_46) | (**l_156))) <= ((((safe_rshift_func_int8_t_s_u(((func_60((&l_852 == (void*)0)) && (**l_156)) | (0x6AL < (++g_993))), 5)) , p_48) != l_1224) , (*g_395))) == (*l_157)), g_823)) != p_47), l_1225)) > g_512)))
        {
            int *l_1248 = &g_7;
            unsigned **l_1277 = &l_228;
            unsigned l_1285 = 1UL;
            int l_1292 = 0xFEF654BDL;
            int l_1337 = (-5L);
            short l_1340 = 0x0804L;
            int l_1406 = 0x1E38770BL;
            int l_1785 = 3L;
            unsigned char **l_1862 = &g_1192;
            int **l_1902 = &g_1015;
            int l_1963 = 9L;
            int l_1994 = 0xAC4C492CL;
            int l_2090 = 0xA19A4653L;
            if ((((!(--(*l_383))) && func_50(p_46, p_46, func_60(l_1225), p_46, p_48)) >= (*l_157)))
            {
                unsigned l_1243 = 1UL;
                int *l_1249 = &g_298;
                unsigned l_1276 = 9UL;
                int l_1289 = 0xBE16657AL;
                int l_1317 = (-1L);
                int *l_1363 = &l_1357;
                int *l_1364 = &g_497;
                int *l_1365 = &l_1317;
                int *l_1366 = &g_333;
                int *l_1367 = &l_294;
                int *l_1368 = &l_294;
                int *l_1369 = &l_518;
                int *l_1370 = &g_497;
                int *l_1371 = &l_325;
                int *l_1372 = &l_1317;
                int *l_1373 = (void*)0;
                int *l_1374 = (void*)0;
                int *l_1375 = &g_472;
                int *l_1376 = &g_65;
                int *l_1377 = &l_1225;
                int *l_1378 = &g_497;
                int *l_1379 = (void*)0;
                int *l_1380 = &l_518;
                int *l_1381 = &l_271;
                int *l_1382 = (void*)0;
                int *l_1383 = &l_1337;
                int *l_1384 = &l_1289;
                int *l_1385 = &l_1289;
                int *l_1386 = (void*)0;
                int *l_1388 = &l_294;
                int *l_1389 = (void*)0;
                int *l_1390 = (void*)0;
                int *l_1391 = &g_497;
                int *l_1392 = &l_1317;
                int *l_1393 = &l_271;
                int *l_1394 = (void*)0;
                int *l_1395 = &g_537;
                int *l_1396 = &g_537;
                int *l_1397 = &l_325;
                int *l_1398 = &l_1225;
                int *l_1399 = (void*)0;
                int *l_1400 = &l_518;
                int *l_1401 = &g_622;
                int *l_1402 = &l_1292;
                int *l_1403 = &l_518;
                int *l_1404 = (void*)0;
                int *l_1405 = &l_571;
                int *l_1407 = (void*)0;
                int *l_1408 = &g_622;
                int *l_1409 = &l_1292;
                int *l_1410 = &g_298;
                int *l_1411 = &g_298;
                int *l_1412 = &l_1289;
                int *l_1413 = &l_592;
                int *l_1414 = (void*)0;
                int *l_1415 = &l_294;
                int *l_1416 = &l_1292;
                int *l_1417 = &l_271;
                int *l_1418 = (void*)0;
                int *l_1419 = &l_294;
                int *l_1420 = &l_518;
                int *l_1421 = (void*)0;
                int *l_1422 = &g_537;
                int *l_1423 = &g_622;
                int *l_1424 = (void*)0;
                int *l_1425 = &l_1317;
                int *l_1426 = &l_1225;
                int *l_1427 = &l_1317;
                int *l_1428 = &l_271;
                int *l_1429 = &g_497;
                int *l_1430 = (void*)0;
                int *l_1431 = &g_622;
                int *l_1432 = &g_537;
                int *l_1433 = &l_325;
                int *l_1434 = &l_1357;
                int *l_1435 = &l_1406;
                int *l_1436 = &l_1225;
                int *l_1437 = &g_622;
                int *l_1438 = &l_592;
                int *l_1439 = &l_1406;
                int *l_1440 = (void*)0;
                int *l_1441 = &l_1292;
                int *l_1442 = &g_65;
                int *l_1443 = &l_1225;
                int *l_1444 = &g_497;
                int *l_1445 = &l_1226;
                int *l_1446 = &g_333;
                int *l_1447 = &g_497;
                int *l_1448 = &l_592;
                int *l_1449 = &l_1406;
                int *l_1450 = &l_271;
                int *l_1451 = &l_1317;
                int *l_1452 = &l_1292;
                int *l_1453 = &g_65;
                int *l_1454 = &l_1289;
                int *l_1455 = &l_325;
                int *l_1456 = &g_298;
                int *l_1457 = &l_1289;
                int *l_1459 = &l_1406;
                int *l_1460 = &l_1292;
                int *l_1461 = &g_472;
                int *l_1462 = &l_592;
                int *l_1463 = &g_497;
                int *l_1464 = &g_497;
                int *l_1465 = &l_1289;
                int *l_1466 = &g_298;
                int *l_1467 = (void*)0;
                int *l_1468 = &l_571;
                int *l_1469 = &g_537;
                int *l_1470 = &l_1406;
                int *l_1471 = (void*)0;
                int *l_1472 = &g_298;
                int *l_1473 = &g_622;
                int *l_1474 = &g_622;
                if (((*g_1192) == ((*l_907) = ((l_1225 = 4294967294UL) | (*g_339)))))
                {
                    char *l_1239 = &g_302;
                    int l_1242 = 1L;
                    char *l_1244 = &g_106;
                    int l_1261 = 0x4BE8D330L;
                    if (func_60(func_60((safe_lshift_func_int16_t_s_s(((((safe_mul_func_uint16_t_u_u((0xA257L >= p_47), (safe_sub_func_int8_t_s_s((((*l_907) = (safe_mul_func_uint8_t_u_u(((*g_6) > (((*l_1239) = g_286) != ((safe_lshift_func_uint16_t_u_s(l_1242, p_47)) < p_46))), ((((*l_1244) = (l_1243 >= ((*l_383) = ((*g_6) > p_47)))) & (-1L)) < p_47)))) < (*g_1192)), p_46)))) , g_1245) == (void*)0) , (*g_395)), l_1226)))))
                    {
                        return p_48;



                    }
                    else
                    {
                        char l_1260 = 8L;
                        (*l_1209) = (l_1248 != ((*l_639) = l_1249));

                        ;
                        (*l_639) = &g_472;

                        ;
                        (*l_1249) = ((!((*g_339) = ((*g_395) == (safe_lshift_func_int8_t_s_s((**l_639), 4))))) > (safe_mod_func_int8_t_s_s((safe_sub_func_int16_t_s_s(func_50(p_46, ((safe_mul_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_106, (((*g_1192) < (*g_1192)) ^ (*g_395)))), (l_1260 ^ l_1261))) >= 0x74L), (*g_1192), (*l_1248), &l_1261), l_1225)), g_513)));
                        (*l_1209) = (safe_mul_func_int16_t_s_s(((void*)0 == g_1264), ((**l_639) , ((*l_1248) <= l_1226))));
                    }

                    ;
                }
                else
                {
                    short l_1275 = (-9L);
                    for (l_414 = 29; (l_414 < (-16)); l_414--)
                    {
                        unsigned short l_1280 = 0x2B8CL;
                    }
                }
                if ((*g_6))
                {
                    unsigned l_1353 = 0x2D58814BL;
                    char l_1356 = (-1L);
                    int l_1358 = (-1L);
                    for (g_808 = 0; (g_808 <= 5); g_808++)
                    {
                        char l_1286 = (-9L);
                        int *l_1287 = &g_65;
                        int *l_1288 = &l_1226;
                        int *l_1290 = &l_1226;
                        int *l_1291 = &l_235;
                        int *l_1293 = &l_1226;
                        int *l_1294 = &g_298;
                        int *l_1295 = &l_325;
                        int *l_1296 = (void*)0;
                        int *l_1297 = &g_298;
                        int *l_1298 = &g_497;
                        int *l_1299 = &l_294;
                        int *l_1300 = (void*)0;
                        int *l_1301 = &l_1225;
                        int *l_1302 = &g_333;
                        int *l_1303 = (void*)0;
                        int *l_1304 = (void*)0;
                        int *l_1305 = &l_1225;
                        int *l_1306 = &g_622;
                        int *l_1307 = (void*)0;
                        int *l_1308 = &g_298;
                        int *l_1309 = &l_1226;
                        int *l_1310 = &l_1289;
                        int *l_1311 = &l_325;
                        int *l_1312 = &l_592;
                        int *l_1313 = &g_298;
                        int *l_1314 = &l_592;
                        int l_1315 = 0x7A1594CDL;
                        int *l_1316 = &g_333;
                        int *l_1318 = &l_518;
                        int *l_1319 = &l_592;
                        int *l_1320 = &l_235;
                        int *l_1321 = &l_325;
                        int *l_1322 = (void*)0;
                        int *l_1323 = &l_1315;
                        int *l_1324 = &l_325;
                        int *l_1325 = &g_497;
                        int *l_1326 = &g_65;
                        int *l_1327 = &l_1317;
                        int *l_1328 = &l_1226;
                        int *l_1329 = (void*)0;
                        int *l_1330 = &g_298;
                        int *l_1331 = &g_497;
                        int *l_1332 = &g_333;
                        int *l_1333 = &l_1225;
                        int *l_1334 = &l_1226;
                        int *l_1335 = &g_472;
                        int *l_1336 = &g_65;
                        int *l_1338 = &g_497;
                        int *l_1339 = &l_235;
                        int *l_1341 = &g_472;
                        int *l_1342 = &l_1225;
                        int *l_1343 = &g_333;
                        int *l_1344 = &g_298;
                        int *l_1345 = &l_325;
                        int *l_1346 = &l_1226;
                        int *l_1347 = &g_537;
                        int *l_1348 = &l_271;
                        int *l_1349 = &l_235;
                        (**l_156) = (safe_add_func_uint16_t_u_u(l_1225, l_1285));
                        g_1350++;
                        ++l_1353;
                        --g_1359;
                    }
                }
                else
                {
                    char l_1362 = 3L;
                    (*l_1209) = (*g_6);
                    l_1362 |= (*g_339);
                }
                g_1475--;
            }
            else
            {
                int *l_1478 = &g_622;
                int *l_1479 = &g_622;
                int *l_1480 = &g_497;
                int *l_1482 = &l_592;
                int *l_1483 = &l_592;
                int *l_1484 = (void*)0;
                int *l_1485 = &l_571;
                int *l_1486 = &g_298;
                int *l_1487 = &l_592;
                int *l_1488 = &g_65;
                int *l_1489 = &g_497;
                int *l_1490 = &l_1225;
                int *l_1491 = &g_622;
                int *l_1492 = &g_1458;
                int *l_1493 = &l_1481;
                int *l_1494 = &l_592;
                int *l_1496 = &g_537;
                int *l_1497 = (void*)0;
                int *l_1498 = &l_325;
                int *l_1499 = &l_1337;
                int *l_1500 = &l_571;
                int *l_1501 = &l_1292;
                int *l_1502 = &l_1292;
                int *l_1503 = &g_537;
                int *l_1504 = &l_1406;
                int *l_1505 = &g_298;
                int *l_1506 = (void*)0;
                int *l_1507 = (void*)0;
                int *l_1509 = &l_1337;
                int *l_1510 = (void*)0;
                int *l_1511 = &l_1508;
                int *l_1512 = &g_65;
                int *l_1513 = &l_1225;
                int *l_1514 = &l_235;
                int *l_1515 = &l_1292;
                int *l_1516 = &g_1458;
                int *l_1517 = &l_1406;
                int *l_1518 = &g_333;
                int *l_1519 = &l_1226;
                int *l_1520 = &g_1458;
                int *l_1521 = &l_1508;
                int *l_1523 = (void*)0;
                int *l_1524 = &g_472;
                int l_1525 = 0L;
                short l_1526 = 0x380AL;
                int *l_1527 = &l_1495;
                int *l_1528 = &l_1525;
                int *l_1529 = &g_65;
                int *l_1530 = &l_325;
                int *l_1531 = &l_592;
                int l_1532 = 0xA7EC6EE8L;
                int *l_1533 = &g_622;
                int *l_1534 = &l_235;
                int *l_1535 = &l_518;
                int *l_1536 = &l_1525;
                int *l_1537 = &l_325;
                int *l_1538 = &g_472;
                int *l_1539 = (void*)0;
                int *l_1540 = (void*)0;
                int *l_1541 = &g_497;
                int *l_1542 = &l_1522;
                int *l_1543 = &g_497;
                int *l_1545 = &g_472;
                int *l_1546 = (void*)0;
                int *l_1547 = (void*)0;
                int *l_1548 = &g_472;
                int *l_1549 = &l_1532;
                int *l_1550 = &g_537;
                int *l_1551 = &g_537;
                int *l_1552 = &l_294;
                int l_1553 = 0L;
                int *l_1554 = &g_65;
                int *l_1555 = &g_1458;
                int *l_1556 = &g_298;
                int *l_1557 = (void*)0;
                int *l_1558 = &l_1544;
                int *l_1559 = &l_1532;
                int *l_1560 = &l_1495;
                int *l_1561 = &l_1357;
                int *l_1562 = &l_1357;
                int *l_1563 = (void*)0;
                int *l_1564 = &l_571;
                int *l_1565 = &l_1508;
                int *l_1566 = &l_1225;
                int *l_1567 = &l_1292;
                int *l_1569 = &l_1522;
                int *l_1570 = &g_622;
                int *l_1572 = &l_1522;
                int *l_1573 = &l_1553;
                int *l_1574 = (void*)0;
                int *l_1575 = &l_592;
                int *l_1576 = &l_1532;
                int *l_1577 = &l_1522;
                int *l_1578 = &g_333;
                int *l_1580 = &l_1508;
                int *l_1581 = &l_271;
                int *l_1582 = (void*)0;
                int *l_1583 = &l_1522;
                int *l_1584 = &g_1458;
                int *l_1585 = &l_571;
                int *l_1586 = &l_1292;
                int *l_1588 = (void*)0;
                int *l_1589 = &l_1495;
                int l_1590 = 3L;
                int *l_1591 = &l_325;
                int *l_1592 = &l_592;
                int *l_1593 = &l_571;
                int *l_1594 = (void*)0;
                int *l_1595 = (void*)0;
                int *l_1597 = (void*)0;
                int *l_1598 = (void*)0;
                int *l_1599 = &l_1357;
                int *l_1600 = &g_537;
                int *l_1601 = (void*)0;
                int *l_1603 = (void*)0;
                int *l_1604 = &l_1553;
                int *l_1605 = (void*)0;
                int *l_1606 = &l_1481;
                int *l_1608 = &l_1357;
                int *l_1609 = &l_1481;
                int *l_1610 = &l_294;
                int *l_1611 = (void*)0;
                int *l_1612 = &l_592;
                int *l_1613 = &l_1508;
                int *l_1614 = &g_537;
                int *l_1615 = (void*)0;
                int *l_1616 = &l_1596;
                int *l_1617 = &l_325;
                int *l_1618 = &l_1587;
                int *l_1620 = &l_1532;
                int *l_1621 = (void*)0;
                int *l_1622 = (void*)0;
                int *l_1623 = &g_497;
                int *l_1624 = &l_1544;
                int *l_1625 = &g_537;
                int *l_1626 = &g_472;
                int *l_1627 = &g_1579;
                int *l_1628 = &l_1568;
                int *l_1629 = (void*)0;
                int *l_1630 = &l_1406;
                int *l_1631 = &g_298;
                int *l_1632 = &l_1619;
                int *l_1633 = &l_325;
                int *l_1635 = &l_1495;
                int *l_1636 = &l_1596;
                int *l_1637 = &l_235;
                int *l_1638 = &l_1292;
                int *l_1639 = &l_1522;
                int *l_1640 = &g_622;
                int *l_1641 = &g_333;
                int *l_1642 = &l_294;
                int *l_1643 = &l_1225;
                int l_1644 = 0xDE3AA17CL;
                int *l_1645 = &l_1406;
                int *l_1646 = &g_472;
                int *l_1648 = &l_1532;
                int *l_1649 = &l_294;
                int *l_1650 = &l_1357;
                int l_1651 = 0xDA83A8DBL;
                int *l_1652 = (void*)0;
                int *l_1653 = &l_1525;
                int *l_1654 = (void*)0;
                int *l_1655 = &l_235;
                int *l_1656 = &l_1532;
                int *l_1657 = &l_325;
                int *l_1658 = &l_1553;
                int *l_1659 = &l_1607;
                int *l_1660 = &g_537;
                int *l_1661 = &l_1619;
                int *l_1662 = &l_1357;
                int *l_1663 = &l_1226;
                int *l_1664 = &l_1590;
                int *l_1665 = &g_298;
                int *l_1666 = &l_1651;
                int *l_1667 = (void*)0;
                int *l_1668 = &l_294;
                int *l_1669 = &l_1226;
                int *l_1670 = &l_1292;
                int *l_1671 = (void*)0;
                int *l_1672 = &l_1226;
                int *l_1673 = &l_1590;
                int *l_1675 = &l_571;
                int *l_1676 = &l_1357;
                int *l_1677 = &l_1553;
                int *l_1678 = (void*)0;
                int *l_1679 = &l_1619;
                int *l_1680 = &l_518;
                int *l_1681 = &l_1481;
                int *l_1682 = &l_1226;
                int *l_1683 = (void*)0;
                int *l_1684 = &l_1337;
                int *l_1685 = &l_1674;
                int l_1686 = 1L;
                int l_1687 = 0x9D60214CL;
                int *l_1688 = (void*)0;
                int *l_1689 = &l_1357;
                int *l_1690 = &g_65;
                int *l_1691 = &g_65;
                int *l_1692 = &l_1619;
                int l_1693 = 0xC96CFF19L;
                int *l_1694 = &g_497;
                int *l_1695 = &l_1587;
                int *l_1696 = &g_333;
                int *l_1697 = (void*)0;
                int *l_1698 = &l_294;
                int *l_1699 = &g_1458;
                int *l_1700 = (void*)0;
                int *l_1701 = &l_1292;
                int *l_1703 = &l_1226;
                int *l_1705 = &l_1674;
                int *l_1706 = &l_1651;
                int *l_1707 = &l_1607;
                int *l_1708 = &l_1607;
                int *l_1709 = (void*)0;
                int *l_1710 = (void*)0;
                int *l_1712 = &g_537;
                int *l_1713 = &l_1568;
                int *l_1714 = (void*)0;
                int *l_1715 = &l_1568;
                int *l_1716 = (void*)0;
                int *l_1717 = &l_1337;
                int *l_1718 = &l_1693;
                int *l_1719 = &l_1337;
                int *l_1720 = (void*)0;
                int *l_1721 = (void*)0;
                int *l_1722 = &l_518;
                int *l_1723 = &l_518;
                int *l_1724 = &l_1532;
                int *l_1725 = (void*)0;
                int l_1726 = 1L;
                int *l_1727 = &l_1544;
                int *l_1728 = &l_1481;
                int *l_1729 = (void*)0;
                int *l_1730 = &l_1686;
                int *l_1731 = &l_1225;
                char *l_1745 = &g_95;
                unsigned char l_1816 = 0x2EL;
                g_1732++;
                if ((safe_div_func_int32_t_s_s(((*l_1690) = (0x777FDB1CL && ((*p_48) != (safe_mul_func_int16_t_s_s(l_1739, (((safe_rshift_func_uint8_t_u_s(((*g_1192) > (safe_add_func_uint8_t_u_u(0x70L, ((safe_unary_minus_func_int32_t_s((0x26L >= ((*l_1745) = (-3L))))) & 0xD1BAL)))), 7)) , (p_47 , g_472)) , (*g_395))))))), l_1226)))
                {
                    for (l_1495 = 0; (l_1495 >= 21); l_1495 = safe_add_func_int16_t_s_s(l_1495, 7))
                    {
                        int **l_1748 = &l_1482;
                        if (l_1739)
                            break;
                        if ((*g_6))
                            continue;
                        (*l_639) = (void*)0;

                        ;
                        (*l_1748) = ((*l_156) = &g_622);

                        ;
                        ;
                    }

                    ;
                    ;
                    (*l_639) = p_48;

                    ;
                }
                else
                {
                    int *l_1754 = &l_1607;
                    for (l_1387 = (-24); (l_1387 <= 28); ++l_1387)
                    {
                        int l_1751 = 6L;
                        unsigned **l_1753 = &g_1247;
                        (*l_639) = &g_537;

                        ;
                        if ((*g_6))
                            continue;
                        (*l_1642) &= (((*l_907) = l_1751) ^ ((**g_1265) != (l_1753 = l_1752)));

                        ;
                    }

                    ;
                    (*l_156) = l_1754;

                    ;
                    (*l_1638) = (*g_339);
                }

                ;
                ;
                if ((safe_mod_func_int32_t_s_s((((((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s((*g_395), (safe_mul_func_uint16_t_u_u(((((safe_mod_func_uint32_t_u_u((*p_48), (l_1568 = (*p_48)))) || ((*g_1192) , 5L)) | (l_1765 || ((*l_1548) |= 0x8452A9AFL))) && (((safe_mul_func_int16_t_s_s((*g_395), p_47)) , (*p_48)) & 0x1AA55AAAL)), p_47)))), p_46)) == 0x012FB685L) ^ (*l_1248)) != (*l_1624)) < (*g_1192)), (*g_6))))
                {
                    unsigned char l_1770 = 250UL;
                    short *l_1787 = (void*)0;
                    (*l_1692) = (*l_1248);
                    (*l_1494) &= func_60((((safe_rshift_func_uint8_t_u_u(l_1770, 5)) , (((void*)0 == p_48) , ((safe_mod_func_int16_t_s_s(((**l_570) = (((*l_907) = ((p_46 >= 65531UL) >= ((~((0xAF76L == p_46) , (safe_mod_func_uint32_t_u_u(((*p_48) = (*p_48)), (((l_1777 = &g_1359) != l_1778) , p_46))))) >= (*g_395)))) > 0x72L)), l_1568)) | p_46))) , l_1481));

                    ;
                    (*l_1625) = func_50((**g_1014), ((*l_383) = p_47), p_46, (safe_add_func_uint16_t_u_u((p_47 >= (l_1765 && (!(g_461 = (((0L && ((safe_mod_func_uint8_t_u_u(p_47, ((*g_1192) &= l_1225))) , ((((*g_395) &= (safe_rshift_func_int8_t_s_s((((*l_1248) , l_1785) , g_497), p_47))) && 0x932DL) & l_1786))) , 0xA247L) , (*g_395)))))), l_1226)), p_48);
                    for (g_298 = 8; (g_298 != 29); g_298 = safe_add_func_int32_t_s_s(g_298, 8))
                    {
                        unsigned char l_1796 = 255UL;
                        (*l_1514) = ((safe_lshift_func_int16_t_s_u(0L, 0)) | (((g_150 , ((((*p_48) = (((*p_48) ^ (safe_div_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s((0x960B7CB1L && (l_1796 > 0UL)), ((***g_1265) != (void*)0))) , 0xC0L), l_1770))) , 0UL)) & p_46) > 1UL)) & g_150) != (*l_1600)));
                        (*l_639) = g_1797;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned l_1817 = 4294967289UL;
                    int l_1818 = 0x708B6033L;
                    unsigned **l_1823 = &l_1777;
                    int l_1825 = (-1L);
                    int l_1826 = 0xC8F43992L;
                    for (g_497 = 0; (g_497 <= (-3)); --g_497)
                    {
                        if (p_47)
                            break;
                        g_339 = (void*)0;

                        ;
                        (*l_639) = (void*)0;

                        ;
                    }

                    ;
                    ;
                    if ((p_46 , ((func_50((((safe_mod_func_int16_t_s_s((~(func_50(l_1739, ((p_46 > (safe_mod_func_int16_t_s_s((0x72L && (safe_mul_func_int16_t_s_s((safe_lshift_func_int8_t_s_u((safe_mod_func_uint32_t_u_u(0xEB17576AL, 0x20B04B27L)), (safe_sub_func_int8_t_s_s((safe_mul_func_int8_t_s_s(((*l_1745) &= ((((*g_1192) = ((0x250837E2L > (safe_lshift_func_uint16_t_u_u(((void*)0 != &g_395), p_46))) == (*p_48))) > g_513) | l_1816)), p_47)), p_47)))), p_47))), 0x5FBDL))) , 0xABE0L), p_46, l_1817, &g_1458) && (*g_395))), p_46)) > 251UL) , (**g_1014)), l_1818, p_46, g_106, &g_497) != 0x1DL) <= l_1508)))
                    {
                        (*l_1537) = (*g_6);
                    }
                    else
                    {
                        short l_1824 = 0x9FA8L;
                        int l_1827 = 0x832B6F39L;
                        int l_1828 = 0xDB5909A9L;
                        int l_1829 = (-1L);
                        short l_1830 = (-4L);
                        (*l_1616) &= (l_1587 , (safe_lshift_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s((func_60(p_47) == (*p_48)), ((void*)0 == l_1823))), 6)));
                        g_1831--;
                        l_1696 = &g_1634;

                        ;
                        (*l_1599) = (*g_1797);
                    }

                    ;
                    l_1248 = (*l_156);

                    ;
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
            (*l_1209) ^= (safe_mul_func_uint8_t_u_u(((*l_907) = p_47), p_47));
            if (l_1786)
            {
                unsigned short l_1836 = 0xF5C4L;
                l_1836++;
                (*l_639) = &l_1406;

                ;
            }
            else
            {
                unsigned l_1855 = 0xB1284C45L;
                for (g_386 = (-26); (g_386 == 24); g_386++)
                {
                    int *l_1841 = &l_1544;
                    int *l_1842 = &l_1508;
                    int *l_1843 = &l_235;
                    int *l_1844 = &l_1357;
                    int *l_1845 = (void*)0;
                    int *l_1846 = (void*)0;
                    int *l_1847 = (void*)0;
                    int *l_1848 = &l_1568;
                    int *l_1849 = (void*)0;
                    int *l_1850 = &l_1292;
                    int *l_1851 = &l_271;
                    int *l_1852 = &l_1544;
                    int *l_1853 = (void*)0;
                    int *l_1854 = &g_1458;
                    --l_1855;
                    (*l_1844) &= p_47;
                }
                return &g_497;



            }

            ;
            if (((safe_add_func_int32_t_s_s((*g_1797), (safe_lshift_func_int8_t_s_u(p_46, 6)))) > ((((*l_1862) = &g_808) == &l_1765) < 254UL)))
            {
                (*l_156) = p_48;

                ;
                (*l_157) = (safe_div_func_int32_t_s_s((-1L), 0x0A381405L));
            }
            else
            {
                int *l_1872 = (void*)0;
                int **l_1903 = (void*)0;
                int *l_1909 = &l_1596;
                int *l_1910 = &l_1587;
                int *l_1911 = &l_235;
                int *l_1912 = &l_571;
                int *l_1913 = &l_271;
                int *l_1914 = &l_1711;
                int *l_1915 = (void*)0;
                int *l_1916 = &g_298;
                int *l_1917 = &g_333;
                int *l_1918 = &l_1704;
                int *l_1919 = &l_1522;
                int *l_1920 = &l_1508;
                int *l_1921 = &l_1337;
                int *l_1922 = &l_1495;
                int *l_1923 = &l_1225;
                int *l_1924 = &g_472;
                int *l_1925 = (void*)0;
                int *l_1926 = &l_1587;
                int l_1927 = (-1L);
                int *l_1928 = &l_1587;
                int *l_1929 = (void*)0;
                int *l_1930 = (void*)0;
                int *l_1931 = &g_298;
                int *l_1932 = (void*)0;
                int *l_1933 = &l_592;
                int *l_1934 = &l_1927;
                int *l_1935 = &l_518;
                int *l_1936 = &l_592;
                int *l_1937 = &l_1739;
                int *l_1938 = &l_1786;
                int *l_1939 = &l_592;
                int *l_1940 = &g_622;
                int *l_1941 = &l_1739;
                int *l_1942 = (void*)0;
                int *l_1943 = &l_1544;
                int *l_1944 = &l_271;
                int *l_1945 = &l_1508;
                int *l_1946 = &l_1495;
                int *l_1947 = &g_537;
                int *l_1948 = &l_1607;
                int *l_1949 = &l_1587;
                int *l_1950 = &l_571;
                int *l_1951 = &g_472;
                int *l_1952 = &l_1357;
                int *l_1953 = &l_1544;
                int *l_1954 = &g_1634;
                int l_1955 = 0x7770C975L;
                int *l_1956 = &l_1357;
                int *l_1957 = &l_1568;
                int *l_1958 = (void*)0;
                int *l_1959 = &l_1337;
                int *l_1960 = (void*)0;
                int *l_1961 = (void*)0;
                int *l_1962 = &l_1495;
                int *l_1964 = &l_1647;
                int *l_1965 = &l_1786;
                int *l_1966 = &g_65;
                int *l_1967 = &l_1704;
                int *l_1968 = &l_1522;
                int *l_1969 = &l_1927;
                int *l_1970 = &g_65;
                int *l_1971 = &l_1226;
                int *l_1972 = &g_472;
                int *l_1973 = (void*)0;
                int *l_1974 = &g_1458;
                int l_1975 = 1L;
                int *l_1976 = (void*)0;
                int *l_1977 = &l_1704;
                int *l_1978 = &g_1579;
                int *l_1979 = &l_1607;
                int *l_1980 = &g_1634;
                int *l_1981 = &l_1647;
                int *l_1982 = &g_333;
                int *l_1983 = (void*)0;
                int *l_1984 = &l_325;
                int *l_1985 = &l_1786;
                int *l_1986 = &g_1634;
                int *l_1987 = &l_235;
                int *l_1988 = (void*)0;
                int *l_1989 = &g_1458;
                int *l_1990 = &l_1927;
                int *l_1991 = &g_65;
                int *l_1992 = &g_65;
                int *l_1993 = &g_1579;
                int *l_1995 = &l_1994;
                int *l_1996 = (void*)0;
                int *l_1997 = &l_1704;
                int l_1998 = 0x83CDAEEEL;
                int *l_1999 = &l_1739;
                int *l_2000 = &l_1963;
                int *l_2001 = &l_271;
                int *l_2002 = (void*)0;
                int *l_2003 = (void*)0;
                int *l_2004 = &l_1481;
                int *l_2005 = &l_518;
                int l_2006 = 0x0788F3E7L;
                int *l_2007 = &l_1739;
                int *l_2008 = &l_1226;
                int *l_2009 = &l_1647;
                int *l_2010 = &l_294;
                int *l_2011 = &g_472;
                int *l_2012 = &l_1596;
                int *l_2013 = &l_1544;
                int *l_2014 = &l_1739;
                int *l_2015 = &l_571;
                int *l_2016 = &l_294;
                int *l_2017 = &l_592;
                int *l_2018 = (void*)0;
                int *l_2019 = &l_1406;
                int *l_2020 = &l_1963;
                int *l_2021 = &l_1674;
                int *l_2022 = &g_298;
                int *l_2023 = &l_1225;
                int *l_2024 = &l_1544;
                int *l_2025 = &l_1607;
                int *l_2026 = &l_1481;
                int *l_2027 = &g_298;
                int *l_2028 = &l_1587;
                int *l_2029 = &l_1994;
                int *l_2030 = &g_65;
                int *l_2031 = &l_1927;
                int *l_2032 = &l_1975;
                int *l_2033 = &l_1481;
                int *l_2034 = &l_1998;
                int *l_2035 = (void*)0;
                int *l_2036 = &g_622;
                int *l_2037 = (void*)0;
                int *l_2038 = (void*)0;
                int *l_2039 = &l_1786;
                int *l_2040 = &l_1711;
                int *l_2041 = &g_622;
                int l_2042 = 0x73AC54FBL;
                int *l_2043 = &l_1998;
                int *l_2044 = &g_472;
                int *l_2045 = &l_1994;
                int *l_2046 = &l_1226;
                int *l_2047 = &l_1994;
                int *l_2048 = &l_1739;
                int *l_2049 = (void*)0;
                int *l_2050 = &l_571;
                int *l_2051 = &l_1406;
                int *l_2052 = &l_1786;
                int *l_2053 = (void*)0;
                int *l_2054 = &l_1587;
                int l_2055 = 0L;
                int *l_2056 = &l_2055;
                int *l_2057 = &l_1568;
                int *l_2058 = (void*)0;
                int *l_2059 = &l_1619;
                int *l_2060 = &l_1739;
                int *l_2061 = &l_1337;
                int *l_2062 = &g_1458;
                int *l_2063 = &l_1739;
                int *l_2064 = (void*)0;
                int *l_2065 = &l_1292;
                int *l_2066 = &g_622;
                int *l_2067 = &l_1607;
                int *l_2068 = &l_325;
                int *l_2069 = &l_294;
                int *l_2070 = &l_1587;
                int *l_2071 = &l_1998;
                int *l_2072 = &g_65;
                int *l_2073 = &l_1587;
                int *l_2074 = &l_235;
                int *l_2075 = &l_1495;
                int *l_2076 = (void*)0;
                int *l_2077 = &l_1674;
                int *l_2078 = &g_1579;
                int *l_2079 = &l_1739;
                int *l_2080 = &l_1647;
                int *l_2081 = &l_1647;
                int *l_2082 = &l_1522;
                int *l_2083 = &l_294;
                int *l_2084 = &g_472;
                int *l_2085 = &l_1522;
                int *l_2086 = &l_1786;
                int *l_2087 = (void*)0;
                int *l_2088 = &l_571;
                int *l_2089 = &l_1927;
                int *l_2091 = &l_1711;
                int *l_2092 = (void*)0;
                int *l_2093 = &l_1927;
                int *l_2094 = &l_1406;
                int *l_2095 = &l_1994;
                int *l_2096 = &l_1619;
                int *l_2097 = &l_1596;
                int *l_2098 = &l_1975;
                int *l_2099 = &l_1647;
                int *l_2100 = &l_518;
                (**l_156) = (-1L);
                if (l_1765)
                {
                    unsigned l_1887 = 0x85A14B6DL;
                    (*l_157) = ((safe_div_func_int32_t_s_s(((void*)0 != l_1867), func_50(((*g_1015) ^= ((safe_div_func_uint32_t_u_u((p_47 , (((p_47 ^ (p_47 && (safe_lshift_func_uint16_t_u_u((p_46 , (0UL <= p_46)), 5)))) , (**l_639)) ^ 0xDFL)), (*p_48))) < (*l_157))), l_1596, (*g_1192), p_47, l_1872))) && (**l_156));
                    for (g_386 = 0; (g_386 == 13); g_386 = safe_add_func_int32_t_s_s(g_386, 2))
                    {
                        int *l_1875 = (void*)0;
                        int *l_1876 = &l_571;
                        int *l_1877 = (void*)0;
                        int *l_1878 = &l_1587;
                        int *l_1879 = &l_1674;
                        int *l_1880 = (void*)0;
                        int *l_1881 = (void*)0;
                        int *l_1882 = &l_1619;
                        int *l_1883 = &g_537;
                        int *l_1884 = &l_1596;
                        int *l_1885 = &l_1786;
                        int *l_1886 = &l_1596;
                        ++l_1887;
                    }
                    (*l_639) = &g_7;

                    ;
                    for (g_1458 = 0; (g_1458 != (-5)); g_1458 = safe_sub_func_uint16_t_u_u(g_1458, 4))
                    {
                        int **l_1892 = &l_157;
                        (*l_1209) = ((l_1892 != &l_1872) | p_47);
                    }
                }
                else
                {
                    char *l_1895 = &g_1571;
                    int l_1908 = 0xA9D705C5L;
                    (**l_156) &= (((safe_sub_func_int8_t_s_s(((*l_1895) = g_512), (safe_add_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_46, g_622)), (safe_div_func_uint16_t_u_u((l_1902 != ((*l_1079) = l_1903)), ((*g_395) || 65529UL))))))) , (safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((((*l_1895) = 1L) , ((((*g_1797) ^= (l_1908 >= (-1L))) >= p_47) < g_150)), (-6L))), p_46))) | p_46);

                    ;
                    return p_48;



                }

                ;
                g_2101++;
            }

            ;
            ;
        }
        else
        {
            unsigned short l_2106 = 65535UL;
            (*l_1209) = (&g_106 == l_907);
            for (l_592 = 8; (l_592 < 5); l_592 = safe_sub_func_int8_t_s_s(l_592, 2))
            {
                int *l_2109 = (void*)0;
            }
            (*l_157) = ((safe_div_func_int8_t_s_s(8L, (safe_unary_minus_func_uint16_t_u((safe_rshift_func_uint16_t_u_s(p_47, 4)))))) , (safe_sub_func_int32_t_s_s((safe_rshift_func_int8_t_s_u((l_2106 == (*g_1797)), (safe_rshift_func_int8_t_s_s(((safe_rshift_func_int8_t_s_u((((void*)0 != p_48) < l_2106), (l_1226 <= ((*g_395) &= ((*g_1192) < l_2106))))) && g_298), 0)))), p_47)));
        }

        ;
        ;
        ;
        ;
        (*l_1209) = ((safe_add_func_uint16_t_u_u((((l_1387 > (func_50((safe_rshift_func_int16_t_s_s(((l_1522 , (((*l_157) , ((*g_1192) = ((*l_907) = (safe_lshift_func_int8_t_s_u((safe_add_func_uint32_t_u_u((*p_48), (*l_157))), (safe_add_func_uint16_t_u_u(p_46, ((*l_157) ^ p_46)))))))) ^ (safe_lshift_func_int8_t_s_u((safe_mul_func_uint16_t_u_u((safe_add_func_uint32_t_u_u(l_1226, (*l_157))), p_46)), 1)))) ^ (*l_157)), p_47)), p_47, (**l_639), l_2139, &g_622) >= p_47)) | l_2140) <= l_1508), p_46)) | (-1L));
    }

    ;
    ;
    ;
    ;
    return &g_7;



}







static unsigned func_50(int p_51, unsigned short p_52, unsigned char p_53, unsigned short p_54, int * p_55)
{
    int *l_142 = &g_65;
    int *l_144 = &g_65;
    int l_145 = 1L;
    int *l_146 = &g_65;
    int *l_147 = (void*)0;
    int *l_148 = &g_65;
    int *l_149 = &g_65;
    int **l_153 = &l_148;
    for (g_131 = (-9); (g_131 == 26); g_131 = safe_add_func_int32_t_s_s(g_131, 2))
    {
        return g_131;
    }
    for (g_131 = 0; (g_131 <= 23); g_131++)
    {
        int **l_143 = &l_142;
        (*l_143) = l_142;
    }
    --g_150;
    (*l_153) = p_55;


    return g_95;
}







static unsigned short func_60(unsigned p_61)
{
    int *l_64 = &g_65;
    int *l_66 = (void*)0;
    int *l_67 = (void*)0;
    int *l_68 = &g_65;
    int *l_69 = (void*)0;
    int *l_70 = (void*)0;
    int *l_71 = &g_65;
    int *l_72 = &g_65;
    int *l_73 = &g_65;
    int *l_74 = &g_65;
    int *l_75 = &g_65;
    int *l_76 = (void*)0;
    int *l_77 = (void*)0;
    int l_78 = 3L;
    int *l_79 = (void*)0;
    int *l_80 = &l_78;
    int *l_81 = &l_78;
    int *l_82 = &l_78;
    int *l_83 = (void*)0;
    int *l_84 = (void*)0;
    int *l_85 = &g_65;
    int *l_86 = (void*)0;
    int l_87 = 8L;
    int *l_88 = &g_65;
    int l_89 = 0xBF04B2B3L;
    int *l_90 = (void*)0;
    int *l_91 = &l_78;
    int l_92 = (-4L);
    int *l_93 = &l_87;
    int *l_94 = &l_89;
    int *l_96 = &g_65;
    int *l_97 = &l_78;
    int *l_98 = &g_65;
    int *l_99 = &l_92;
    int *l_100 = (void*)0;
    int *l_101 = &l_92;
    int *l_102 = (void*)0;
    int *l_103 = &l_87;
    int *l_104 = &l_89;
    int *l_105 = &l_78;
    int l_107 = (-10L);
    int *l_108 = &l_107;
    int *l_109 = &l_87;
    int *l_110 = &l_92;
    int *l_111 = &l_92;
    int *l_112 = &l_89;
    int *l_113 = &l_89;
    int *l_114 = (void*)0;
    int *l_115 = &l_87;
    int *l_116 = &l_92;
    int *l_117 = &l_107;
    int *l_118 = (void*)0;
    int *l_119 = (void*)0;
    int *l_120 = (void*)0;
    int *l_121 = &l_89;
    int *l_122 = &l_78;
    int *l_123 = &l_78;
    int *l_124 = &l_92;
    int *l_125 = &l_87;
    int *l_126 = &l_89;
    int *l_127 = (void*)0;
    int *l_128 = &l_92;
    int *l_129 = (void*)0;
    int *l_130 = &l_87;
    unsigned *l_135 = &g_43;
    unsigned **l_134 = &l_135;
    unsigned ***l_136 = &l_134;
    --g_131;
    (*l_136) = l_134;
    return g_65;
}





int main (void)
{
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_43, "g_43", print_hash_value);
    transparent_crc(g_65, "g_65", print_hash_value);
    transparent_crc(g_95, "g_95", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_131, "g_131", print_hash_value);
    transparent_crc(g_150, "g_150", print_hash_value);
    transparent_crc(g_236, "g_236", print_hash_value);
    transparent_crc(g_258, "g_258", print_hash_value);
    transparent_crc(g_286, "g_286", print_hash_value);
    transparent_crc(g_298, "g_298", print_hash_value);
    transparent_crc(g_302, "g_302", print_hash_value);
    transparent_crc(g_333, "g_333", print_hash_value);
    transparent_crc(g_335, "g_335", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_396, "g_396", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_461, "g_461", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_497, "g_497", print_hash_value);
    transparent_crc(g_512, "g_512", print_hash_value);
    transparent_crc(g_513, "g_513", print_hash_value);
    transparent_crc(g_537, "g_537", print_hash_value);
    transparent_crc(g_554, "g_554", print_hash_value);
    transparent_crc(g_622, "g_622", print_hash_value);
    transparent_crc(g_625, "g_625", print_hash_value);
    transparent_crc(g_808, "g_808", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_993, "g_993", print_hash_value);
    transparent_crc(g_1350, "g_1350", print_hash_value);
    transparent_crc(g_1359, "g_1359", print_hash_value);
    transparent_crc(g_1458, "g_1458", print_hash_value);
    transparent_crc(g_1475, "g_1475", print_hash_value);
    transparent_crc(g_1571, "g_1571", print_hash_value);
    transparent_crc(g_1579, "g_1579", print_hash_value);
    transparent_crc(g_1602, "g_1602", print_hash_value);
    transparent_crc(g_1634, "g_1634", print_hash_value);
    transparent_crc(g_1702, "g_1702", print_hash_value);
    transparent_crc(g_1732, "g_1732", print_hash_value);
    transparent_crc(g_1831, "g_1831", print_hash_value);
    transparent_crc(g_2101, "g_2101", print_hash_value);
    transparent_crc(g_2255, "g_2255", print_hash_value);
    transparent_crc(g_2461, "g_2461", print_hash_value);
    transparent_crc(g_2762, "g_2762", print_hash_value);
    transparent_crc(g_2782, "g_2782", print_hash_value);
    transparent_crc(g_2790, "g_2790", print_hash_value);
    transparent_crc(g_2800, "g_2800", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
