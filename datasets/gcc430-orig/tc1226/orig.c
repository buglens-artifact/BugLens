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



static const long long g_2 = 0xAEEF20FE6E3245F1LL;
static unsigned char g_8 = 3UL;
static unsigned short g_24 = 65533UL;
static int g_71 = (-7L);
static unsigned char *g_80 = &g_8;
static unsigned g_115 = 0x79EC88C4L;
static unsigned short g_135 = 0x9399L;
static int *g_141 = &g_71;
static unsigned g_161 = 6UL;
static unsigned char g_167 = 0x56L;
static char g_168 = 2L;
static unsigned g_191 = 2UL;
static int g_214 = 0L;
static unsigned char g_251 = 0xBBL;
static unsigned char **g_283 = (void*)0;
static unsigned char *** const g_282 = &g_283;
static unsigned char g_289 = 0x60L;
static unsigned char *g_288 = &g_289;
static short g_320 = 0x65A5L;
static unsigned long long g_325 = 0x0FA8BC2D74987338LL;
static unsigned long long g_327 = 0x7AC5B85297743FDFLL;
static long long g_332 = (-1L);
static const unsigned short **g_346 = (void*)0;
static const int g_373 = (-1L);
static int g_416 = (-4L);
static unsigned g_444 = 4294967295UL;
static char g_458 = 9L;
static short g_472 = (-1L);
static unsigned g_572 = 0x5CC2FB1EL;
static short g_632 = 0x2EBBL;
static unsigned short g_672 = 65535UL;
static unsigned g_776 = 4294967295UL;
static unsigned long long g_805 = 0x022988283429B82FLL;
static const short g_823 = 9L;
static int g_882 = (-9L);
static unsigned g_890 = 0UL;
static unsigned g_1068 = 0x06177477L;
static int g_1143 = 9L;
static unsigned g_1145 = 0x237DB2EBL;
static const unsigned *g_1156 = &g_572;
static const unsigned **g_1155 = &g_1156;
static char g_1185 = (-10L);
static int g_1186 = (-1L);
static int g_1189 = 0x41CCF6E3L;
static unsigned long long g_1193 = 0xD66DE8CB71DB0B8BLL;
static short g_1253 = 0L;
static long long g_1260 = 0xB3F6C187DEDC448DLL;
static unsigned long long g_1272 = 18446744073709551612UL;
static unsigned g_1337 = 0x106EAF32L;
static long long *g_1349 = (void*)0;
static long long **g_1348 = &g_1349;
static unsigned g_1487 = 4294967295UL;
static unsigned long long g_1495 = 0xAF841B842A3AAC67LL;
static unsigned g_1555 = 4294967293UL;
static const int *g_1579 = &g_71;
static unsigned g_1630 = 0UL;
static unsigned g_1705 = 1UL;
static unsigned short ***g_1839 = (void*)0;
static unsigned short ****g_1838 = &g_1839;
static int **g_1857 = &g_141;
static int ***g_1856 = &g_1857;
static const unsigned short g_1873 = 65535UL;
static unsigned short g_1897 = 65535UL;



static unsigned short func_1(void);
static char func_12(const char p_13, int p_14, unsigned char * p_15);
static unsigned short func_16(unsigned long long p_17, int p_18, unsigned char * p_19, long long p_20, unsigned p_21);
static const unsigned short func_25(unsigned char * p_26, long long p_27);
static unsigned char * func_28(int p_29, unsigned short p_30, unsigned char * p_31, unsigned short p_32, unsigned short p_33);
static const int func_37(const unsigned p_38, unsigned long long p_39, unsigned char * const p_40);
static const unsigned func_41(unsigned char * p_42, unsigned char * p_43, unsigned char * p_44, unsigned p_45);
static unsigned char * func_46(unsigned char * const p_47, unsigned char * p_48, unsigned p_49, unsigned long long p_50);
static unsigned char * func_51(short p_52, unsigned p_53, long long p_54);
static const char func_55(unsigned char * const p_56);
static unsigned short func_1(void)
{
    unsigned char *l_7 = &g_8;
    int l_11 = 1L;
    unsigned char l_36 = 247UL;
    unsigned long long l_1746 = 1UL;
    char *l_1820 = &g_1185;
    int l_1898 = 0L;
    int *l_1901 = &g_71;
    char l_1902 = 0xB8L;
    l_1898 ^= ((g_1897 &= (g_2 | (safe_mul_func_int16_t_s_s((safe_sub_func_uint32_t_u_u((((((*l_7)--) , g_2) && l_11) && ((*l_1820) = func_12(((*l_1820) = (func_16(g_2, ((safe_mul_func_uint8_t_u_u((((g_24 = g_8) && func_25(func_28(g_24, l_11, &g_8, (safe_lshift_func_uint8_t_u_u(g_2, 4)), l_36), l_1746)) , (*g_288)), g_1260)) , g_890), &l_36, g_1143, l_11) && g_672)), g_373, l_7))), 0x1159498EL)), (-5L))))) , l_1746);
    (*l_1901) = (safe_mod_func_int8_t_s_s(0xCAL, 253UL));
    l_1898 &= ((*l_1901) = 1L);
    return l_1902;
}







static char func_12(const char p_13, int p_14, unsigned char * p_15)
{
    unsigned short l_1821 = 0xE76EL;
    const unsigned *l_1828 = (void*)0;
    int *l_1833 = &g_71;
    int * const *l_1846 = &g_141;
    int * const **l_1845 = &l_1846;
    long long l_1860 = (-1L);
    const short l_1861 = (-1L);
    unsigned char * const l_1880 = &g_251;
    unsigned long long l_1883 = 0x65B295D8A129CBE1LL;
    (*l_1833) ^= (l_1821 > (safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((((*g_1155) = l_1828) != l_1828), (*p_15))), 4)), ((safe_lshift_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(p_14, p_14)), 10)) ^ 4294967295UL))));
    for (g_472 = 0; (g_472 > 3); g_472++)
    {
        unsigned l_1842 = 0x8568AB98L;
        unsigned char **l_1847 = (void*)0;
        unsigned char **l_1848 = &g_288;
        const unsigned l_1855 = 0x4607E122L;
        int ***l_1859 = &g_1857;
        unsigned char *l_1862 = &g_251;
        int l_1884 = 0L;
    }
    return p_14;
}







static unsigned short func_16(unsigned long long p_17, int p_18, unsigned char * p_19, long long p_20, unsigned p_21)
{
    unsigned char * const l_1798 = (void*)0;
    int l_1799 = 0x411FB5BCL;
    int l_1800 = 0x185428F4L;
    unsigned short *l_1809 = &g_135;
    unsigned short **l_1808 = &l_1809;
    unsigned short ***l_1807 = &l_1808;
    unsigned short ****l_1806 = &l_1807;
    unsigned long long ***l_1814 = (void*)0;
    unsigned long long *l_1817 = &g_1193;
    unsigned long long **l_1816 = &l_1817;
    unsigned long long ***l_1815 = &l_1816;
    int *l_1818 = &g_416;
    int **l_1819 = &l_1818;
    for (g_416 = 0; (g_416 == (-3)); g_416 = safe_sub_func_int16_t_s_s(g_416, 3))
    {
        unsigned l_1795 = 0x49762F80L;
        int l_1801 = (-1L);
        l_1800 &= func_37(((safe_mod_func_int32_t_s_s((*g_1579), 0x8B7F9AB0L)) , ((0L < (safe_unary_minus_func_uint16_t_u(l_1795))) >= p_17)), (g_2 != (((((safe_mul_func_int16_t_s_s(0xA721L, ((*g_1156) & (func_37(func_37(g_191, g_320, p_19), g_251, l_1798) , l_1795)))) , 249UL) <= 255UL) <= l_1795) > l_1799)), l_1798);
        l_1801 = l_1795;
    }
    (*l_1818) = (((((*p_19)--) > (l_1799 || (safe_mod_func_int32_t_s_s((((*l_1806) = (p_21 , (void*)0)) != &g_346), (*g_1156))))) , g_1185) || (safe_rshift_func_uint16_t_u_s(0x92C2L, (safe_rshift_func_uint16_t_u_s(((l_1814 != l_1815) == 0UL), g_805)))));
    (*l_1819) = &l_1799;
    return g_1068;
}







static const unsigned short func_25(unsigned char * p_26, long long p_27)
{
    int *l_1747 = &g_416;
    int *l_1748 = (void*)0;
    int *l_1749 = &g_214;
    int *l_1750 = &g_416;
    int l_1751 = 0L;
    int *l_1752 = (void*)0;
    int *l_1753 = &g_71;
    int *l_1754 = &l_1751;
    int *l_1755 = &g_416;
    int *l_1756 = (void*)0;
    int *l_1757 = &g_416;
    int l_1758 = 0L;
    int *l_1759 = &g_416;
    int *l_1760 = &g_214;
    int *l_1761 = &l_1758;
    int *l_1762 = &g_214;
    int *l_1763 = (void*)0;
    int *l_1764 = &g_416;
    int *l_1765 = (void*)0;
    int *l_1766 = (void*)0;
    int *l_1767 = (void*)0;
    int *l_1768 = (void*)0;
    int *l_1769 = &g_214;
    int *l_1770 = &l_1758;
    int *l_1771 = &g_71;
    int *l_1772 = &l_1751;
    int *l_1773 = &g_416;
    int *l_1774 = &g_416;
    int *l_1775 = &l_1758;
    int l_1776 = 0x1AEFE4D2L;
    int l_1777 = 0x45C4DD9EL;
    int *l_1778 = &l_1758;
    int *l_1779 = &l_1776;
    int *l_1780 = &g_416;
    int *l_1781 = &g_416;
    int *l_1782 = &l_1776;
    int *l_1783 = &g_71;
    int *l_1784 = (void*)0;
    int l_1785 = 0xEAC4E4EDL;
    int *l_1786 = &l_1758;
    unsigned long long l_1787 = 1UL;
    l_1787--;
    (*l_1750) = (*l_1754);
    return p_27;
}







static unsigned char * func_28(int p_29, unsigned short p_30, unsigned char * p_31, unsigned short p_32, unsigned short p_33)
{
    unsigned char * const l_57 = &g_8;
    int l_74 = 1L;
    short l_75 = 0xC9E2L;
    unsigned long long l_76 = 0xDD9CEC61C9C8A038LL;
    short l_77 = 0xA770L;
    unsigned char **l_287 = &g_80;
    unsigned long long *l_1713 = &g_1193;
    unsigned *l_1718 = &g_1555;
    unsigned **l_1717 = &l_1718;
    unsigned ***l_1716 = &l_1717;
    int *l_1719 = &g_1189;
    if (func_37((l_74 = func_41(((*l_287) = func_46((g_80 = func_51(g_8, ((func_55(l_57) || (safe_mod_func_uint8_t_u_u(g_24, (*p_31)))) , ((l_74 & ((((g_2 <= (((((g_8 , &l_74) == &l_74) || g_71) ^ l_75) >= (-1L))) , l_76) > 0L) || l_77)) , 0x730A04A8L)), p_30)), &g_8, g_8, g_8)), p_31, g_288, l_74)), p_30, l_57))
    {
        int *l_1646 = &l_74;
        (*l_1646) = p_33;
    }
    else
    {
        unsigned char *l_1647 = &g_167;
        int l_1654 = 0xA0EB1B9AL;
        char l_1655 = (-1L);
        int *l_1656 = (void*)0;
        int *l_1657 = &g_416;
        int l_1678 = 0x3D9EDCCEL;
        int l_1690 = 0x9DE0DE89L;
        int l_1702 = 0x19A3AFD4L;
        int l_1703 = 1L;
        (*l_1657) |= func_55(func_51((g_458 , g_1630), l_1655, l_1655));
        for (g_472 = (-24); (g_472 <= 5); ++g_472)
        {
            int *l_1660 = &l_1654;
            int *l_1661 = &l_1654;
            int l_1662 = 0x2F04F5F5L;
            int *l_1663 = &g_71;
            int *l_1664 = &l_1654;
            int *l_1665 = &l_74;
            int *l_1666 = &g_71;
            int *l_1667 = &l_1654;
            int *l_1668 = &l_1662;
            int *l_1669 = &l_1662;
            int *l_1670 = &g_416;
            int *l_1671 = &g_71;
            int *l_1672 = (void*)0;
            int *l_1673 = &l_1662;
            int *l_1674 = &g_416;
            int *l_1675 = &g_416;
            int *l_1676 = &l_1654;
            int *l_1677 = &l_1662;
            int *l_1679 = &l_1654;
            int *l_1680 = &g_416;
            int *l_1681 = (void*)0;
            int *l_1682 = &l_1654;
            int *l_1683 = (void*)0;
            int *l_1684 = &l_1662;
            int *l_1685 = &l_74;
            int *l_1686 = &l_1662;
            int *l_1687 = &g_416;
            int *l_1688 = &g_71;
            int *l_1689 = (void*)0;
            int *l_1691 = &l_1678;
            int *l_1692 = &g_214;
            int *l_1693 = &g_214;
            int *l_1694 = &g_71;
            int *l_1695 = &g_71;
            int *l_1696 = &g_416;
            int *l_1697 = &l_1662;
            int *l_1698 = &l_74;
            int *l_1699 = (void*)0;
            int *l_1700 = (void*)0;
            int *l_1701 = &l_1690;
            int *l_1704 = &g_71;
            g_1705--;
        }
    }
    if ((+((((safe_unary_minus_func_int8_t_s((((safe_lshift_func_int8_t_s_u(p_29, (((*l_1719) = ((safe_lshift_func_int8_t_s_s(g_1068, (((((l_77 < (-5L)) | ((func_37(g_191, ((*l_1713)++), p_31) , l_1716) == &g_1155)) || l_74) <= g_416) && 1UL))) < 1UL)) , (*p_31)))) != p_30) , g_572))) , &l_287) != &l_287) , p_33)))
    {
        int *l_1720 = (void*)0;
        int *l_1721 = &g_214;
        (*l_1721) = (*g_1579);
        for (g_1189 = 0; (g_1189 > 20); g_1189++)
        {
            unsigned char *l_1724 = &g_289;
            return l_1724;
        }
    }
    else
    {
        int l_1727 = 0xBCD192F4L;
        int *l_1732 = &g_71;
        long long *l_1737 = &g_332;
        char *l_1738 = (void*)0;
        unsigned long long **l_1743 = &l_1713;
        int *l_1744 = &g_416;
        int **l_1745 = &l_1744;
        (*l_1732) = (safe_sub_func_int64_t_s_s((((l_77 > ((*l_1713) |= 1UL)) >= (l_75 > (-9L))) , func_55(p_31)), ((l_1727 || p_30) ^ ((safe_lshift_func_uint16_t_u_u((safe_mul_func_uint16_t_u_u(p_33, l_75)), g_823)) != 0xACE9L))));
        l_74 |= (*l_1732);
        (*l_1744) ^= (((safe_add_func_int64_t_s_s(((*l_1737) = (safe_rshift_func_int8_t_s_u(5L, 4))), ((*g_288) ^ (l_74 = (*l_1732))))) , p_29) && (safe_rshift_func_int8_t_s_s((((safe_rshift_func_int16_t_s_s((l_1743 == (void*)0), 12)) || (*p_31)) , ((l_76 <= l_77) < (*l_1732))), g_1193)));
        (*l_1745) = &g_71;
    }
    return p_31;
}







static const int func_37(const unsigned p_38, unsigned long long p_39, unsigned char * const p_40)
{
    int l_1639 = (-1L);
    unsigned char *l_1642 = (void*)0;
    short *l_1644 = &g_472;
    short **l_1643 = &l_1644;
    int *l_1645 = &g_214;
    for (g_24 = 25; (g_24 != 59); g_24 = safe_add_func_int64_t_s_s(g_24, 9))
    {
        return (*g_1579);
    }
    (*l_1645) = ((((((((((+((safe_mod_func_uint8_t_u_u(((g_191 && (safe_add_func_uint16_t_u_u(((l_1639 ^ p_38) != ((l_1639 , ((safe_lshift_func_uint8_t_u_s(((g_332 < l_1639) & (-9L)), 7)) && g_135)) & g_1143)), l_1639))) || (-2L)), g_823)) && 0x0904L)) || p_39) < 2UL) , g_1189) , l_1639) , g_1260) & 0xBD26L) && g_882) , l_1643) == (void*)0);
    return (*l_1645);
}







static const unsigned func_41(unsigned char * p_42, unsigned char * p_43, unsigned char * p_44, unsigned p_45)
{
    unsigned l_290 = 1UL;
    unsigned short *l_333 = &g_135;
    unsigned l_339 = 1UL;
    int *l_344 = (void*)0;
    const int l_366 = 0xC0D326C4L;
    char l_404 = 0x5CL;
    unsigned char * const l_453 = &g_289;
    unsigned char ** const *l_456 = &g_283;
    int l_479 = 6L;
    int l_534 = 7L;
    long long l_586 = 5L;
    int l_638 = 0xF185931FL;
    int l_644 = 0L;
    int l_657 = (-10L);
    short l_691 = 0L;
    unsigned long long *l_704 = &g_325;
    unsigned *l_707 = &g_444;
    int *l_708 = &l_534;
    unsigned long long l_709 = 0UL;
    int l_742 = 0x67B717F7L;
    unsigned l_1018 = 0xE4D828B7L;
    const int *l_1078 = &l_742;
    const int **l_1077 = &l_1078;
    const int ***l_1076 = &l_1077;
    unsigned **l_1154 = &l_707;
    unsigned short **l_1374 = &l_333;
    unsigned short ***l_1373 = &l_1374;
    int l_1382 = 8L;
    int l_1390 = (-1L);
    int l_1491 = 1L;
    if (l_290)
    {
        int ** const l_293 = &g_141;
        int l_313 = 0xECD13544L;
        int **l_329 = &g_141;
        int ***l_328 = &l_329;
        const unsigned short *l_353 = (void*)0;
        int l_447 = (-5L);
        long long *l_457 = &g_332;
        int *l_459 = &g_416;
        for (g_161 = 10; (g_161 > 56); g_161 = safe_add_func_int64_t_s_s(g_161, 4))
        {
            int **l_295 = &g_141;
            int ***l_294 = &l_295;
            unsigned *l_308 = &g_191;
            unsigned short *l_356 = &g_135;
            unsigned char * const l_380 = &g_167;
            int l_408 = (-3L);
            int l_419 = 0xFD5306C5L;
            char *l_448 = (void*)0;
            char *l_449 = &g_168;
            int *l_450 = &l_313;
            (*l_294) = l_293;
            if ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((func_55(func_51(g_115, ((0x6BE51E04L != (safe_rshift_func_uint8_t_u_s(((safe_add_func_uint8_t_u_u((g_251 , (safe_add_func_uint32_t_u_u(((*l_308) = (safe_sub_func_uint16_t_u_u(g_251, g_115))), p_45))), ((*g_288)++))) >= (safe_mul_func_uint16_t_u_u(g_71, l_290))), 2))) | p_45), p_45)) | l_313), p_45)), p_45)))
            {
                int *l_314 = &g_71;
                (*l_314) = 0x4357E977L;
            }
            else
            {
                short *l_319 = &g_320;
                unsigned char * const l_323 = (void*)0;
                unsigned long long *l_324 = &g_325;
                unsigned long long *l_326 = &g_327;
                int ***l_330 = &l_329;
                long long *l_331 = &g_332;
                const unsigned short **l_334 = (void*)0;
                const unsigned short *l_336 = (void*)0;
                const unsigned short **l_335 = &l_336;
                unsigned l_401 = 0x854DA350L;
                int l_424 = 0x9F98AEEAL;
                int l_430 = 1L;
                g_214 = ((safe_add_func_uint64_t_u_u(((safe_mod_func_int64_t_s_s(((*l_331) = (((func_55((((*l_319) |= p_45) , func_51((((g_24 , (safe_mul_func_int16_t_s_s(((*l_319) |= l_290), p_45))) == ((p_45 , (void*)0) == (l_330 = ((((*l_326) = ((*l_324) = (((func_55(l_323) | ((g_168 ^= p_45) >= (*g_288))) , (void*)0) != (void*)0))) == g_8) , l_328)))) , p_45), g_24, g_24))) , p_45) < g_2) < 0xB51E3D79L)), 1L)) > l_290), 4L)) , p_45);
                if (((*g_80) , ((246UL ^ ((l_333 != ((*l_335) = l_333)) && (safe_add_func_int16_t_s_s((((((g_168 = l_339) , (((++(*p_43)) , (safe_mul_func_uint8_t_u_u(247UL, (p_45 >= (~((*l_331) = ((*p_42) , g_8))))))) , 0x86DE7BFBL)) >= 1UL) != g_2) && p_45), g_325)))) & 0x6EE1C27CL)))
                {
                    int **l_345 = &l_344;
                    const unsigned short ***l_347 = (void*)0;
                    const unsigned short ***l_348 = &l_335;
                    (*l_345) = ((*l_293) = l_344);
                    (*l_348) = g_346;
                    for (g_135 = (-20); (g_135 > 12); g_135 = safe_add_func_uint16_t_u_u(g_135, 1))
                    {
                        if (p_45)
                            break;
                    }
                    for (p_45 = (-13); (p_45 >= 28); p_45++)
                    {
                        unsigned char * const l_354 = (void*)0;
                        unsigned short * const l_355 = &g_135;
                        unsigned short **l_357 = &l_333;
                        const int l_367 = 0L;
                        char *l_368 = &g_168;
                        int *l_369 = (void*)0;
                        int *l_370 = &g_71;
                        (*l_370) = ((l_353 != (((func_55(l_354) > (l_355 == ((*l_357) = l_356))) == p_45) , l_333)) & (safe_rshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(((*l_368) |= ((((*l_319) = (safe_mod_func_int8_t_s_s(((l_366 != (p_45 , p_45)) || 18446744073709551615UL), l_367))) == p_45) ^ 0x1CL)), g_135)), (*p_44))), 2)));
                        return p_45;
                    }
                }
                else
                {
                    int l_374 = (-3L);
                    int l_384 = 9L;
                    char *l_393 = &g_168;
                    char l_398 = 1L;
                    char *l_399 = &l_398;
                    if ((g_71 = (l_374 = ((safe_lshift_func_uint16_t_u_u(p_45, 7)) >= g_373))))
                    {
                        int *l_375 = &g_71;
                        (**l_330) = &g_214;
                        l_375 = l_344;
                    }
                    else
                    {
                        char *l_383 = &g_168;
                        l_384 = func_55(((((((0x3408L && (safe_mul_func_int8_t_s_s(((*l_383) |= ((0UL < (safe_sub_func_uint32_t_u_u((func_55(l_380) == (0x9B935AE75D5ED675LL >= (&l_323 != ((safe_sub_func_uint64_t_u_u(p_45, p_45)) , (*g_282))))), g_115))) , (-8L))), p_45))) ^ (-5L)) >= l_374) , &g_320) != (void*)0) , l_323));
                    }
                    if ((((safe_rshift_func_uint8_t_u_u((0x707C22DAAB47B460LL & g_214), (safe_add_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((*p_44) = (*g_288)), (*g_80))), 0xBE0EL)))) == (safe_mod_func_uint8_t_u_u((((*l_393) = (g_168 && p_45)) > (*p_43)), ((((*l_399) = ((safe_mod_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_s(p_45, g_2)) == 0x137AL) || l_398) && 0x05L), g_251)) > 0x3B34L)) & 255UL) , g_24)))) | g_320))
                    {
                        int *l_400 = (void*)0;
                        l_401--;
                    }
                    else
                    {
                        int l_405 = 0xF40358BFL;
                        int *l_406 = &l_313;
                        int *l_407 = &l_384;
                        int *l_409 = &g_71;
                        int *l_410 = &g_71;
                        int *l_411 = &g_71;
                        int *l_412 = (void*)0;
                        int *l_413 = &g_214;
                        int *l_414 = &l_408;
                        int *l_415 = &g_71;
                        int *l_417 = &l_313;
                        int *l_418 = &g_214;
                        int *l_420 = (void*)0;
                        int *l_421 = (void*)0;
                        int *l_422 = &l_408;
                        int *l_423 = (void*)0;
                        int *l_425 = &l_384;
                        int *l_426 = &g_71;
                        int *l_427 = &l_384;
                        int *l_428 = &l_313;
                        int *l_429 = (void*)0;
                        int *l_431 = (void*)0;
                        int *l_432 = &l_419;
                        int *l_433 = &l_419;
                        int *l_434 = &l_408;
                        int *l_435 = &l_313;
                        int *l_436 = (void*)0;
                        int *l_437 = &l_313;
                        int *l_438 = &l_408;
                        int *l_439 = &g_416;
                        int l_440 = 0xD144D72BL;
                        int *l_441 = (void*)0;
                        int *l_442 = &l_384;
                        int *l_443 = &l_313;
                        l_405 = ((p_45 & p_45) <= ((l_404 , (l_384 <= l_398)) , ((&g_283 == &g_283) == (*p_44))));
                        if (p_45)
                            break;
                        ++g_444;
                    }
                }
                l_447 = ((*g_288) >= (*g_288));
            }
            (*l_450) |= (((*l_449) |= 0xACL) && (*p_44));
            (**l_328) = (void*)0;
        }
        (*l_459) = ((p_45 > (~((p_45 != (safe_lshift_func_int16_t_s_u(((func_55(l_453) , ((safe_sub_func_int64_t_s_s(((*l_457) = ((p_45 || func_55(p_42)) && ((void*)0 != l_456))), l_339)) <= g_458)) > 0xA24DL), p_45))) && p_45))) , p_45);
    }
    else
    {
        int l_466 = 8L;
        short *l_471 = &g_472;
        int l_497 = (-2L);
        int l_601 = (-4L);
        int l_603 = (-1L);
        int l_627 = 0x275AE569L;
        int l_643 = 0x6A378866L;
        int l_645 = (-1L);
        unsigned char **l_696 = (void*)0;
        unsigned char **l_697 = &g_288;
        long long l_700 = 0x5816370B6D149394LL;
        int *l_701 = &l_603;
        if ((safe_mul_func_int8_t_s_s((safe_add_func_uint16_t_u_u(p_45, (safe_rshift_func_uint8_t_u_u(((*p_42) = l_466), ((*g_288) = ((safe_lshift_func_uint8_t_u_s(l_466, 6)) <= ((safe_lshift_func_int8_t_s_s(((((*l_471) |= g_320) & (((safe_sub_func_int32_t_s_s((safe_sub_func_int16_t_s_s(p_45, ((safe_add_func_uint64_t_u_u(((~g_2) != l_466), (p_45 | (l_466 || 0xC0L)))) , p_45))), p_45)) , g_444) , p_45)) <= (-9L)), 5)) >= l_479))))))), 0x2CL)))
        {
            int *l_501 = &l_497;
            for (g_251 = 0; (g_251 > 10); ++g_251)
            {
                int *l_482 = (void*)0;
                int *l_483 = &g_214;
                int *l_518 = &g_416;
                (*l_483) &= 0xAE73DDC5L;
                for (g_167 = 2; (g_167 >= 4); g_167++)
                {
                    unsigned short l_492 = 65535UL;
                    short l_498 = 0L;
                    int l_499 = (-1L);
                    int *l_500 = &g_416;
                    int **l_517 = &g_141;
                    for (g_135 = 4; (g_135 <= 57); g_135++)
                    {
                        const int *l_489 = &g_416;
                        const int **l_488 = &l_489;
                        (*l_488) = &g_373;
                    }
                }
            }
        }
        else
        {
            int *l_575 = (void*)0;
            int *l_576 = &l_534;
            int *l_577 = (void*)0;
            int *l_578 = (void*)0;
            int *l_579 = &g_416;
            int *l_580 = (void*)0;
            int *l_581 = (void*)0;
            int *l_582 = &g_416;
            int *l_583 = &l_534;
            int l_584 = 0x03F3EE06L;
            int *l_585 = &g_214;
            int *l_587 = &g_214;
            int *l_588 = (void*)0;
            int *l_589 = (void*)0;
            int *l_590 = &g_214;
            int *l_591 = &l_584;
            int *l_592 = &l_584;
            int *l_593 = &l_497;
            int *l_594 = &g_214;
            int *l_595 = &l_584;
            int *l_596 = &l_497;
            int *l_597 = &l_534;
            int *l_598 = &g_416;
            int *l_599 = &g_71;
            int *l_600 = &g_71;
            int *l_602 = &l_534;
            int l_604 = 0x36DF9666L;
            int *l_605 = (void*)0;
            int *l_606 = (void*)0;
            int *l_607 = &g_416;
            int *l_608 = (void*)0;
            int *l_609 = (void*)0;
            int *l_610 = (void*)0;
            int *l_611 = (void*)0;
            int *l_612 = &l_584;
            int l_613 = 0x4668484EL;
            int *l_614 = &l_603;
            int *l_615 = (void*)0;
            int *l_616 = &g_416;
            int *l_617 = &l_604;
            int *l_618 = (void*)0;
            int *l_619 = &l_584;
            int *l_620 = (void*)0;
            int *l_621 = &l_604;
            int *l_622 = &l_613;
            int *l_623 = &g_71;
            int l_624 = 0x52A5139FL;
            int *l_625 = &l_624;
            int *l_626 = &l_497;
            int *l_628 = &l_627;
            int *l_629 = (void*)0;
            int *l_630 = &l_627;
            int *l_631 = (void*)0;
            int *l_633 = &l_601;
            int *l_634 = &l_534;
            int *l_635 = &l_603;
            int *l_636 = &l_601;
            int *l_637 = &l_624;
            int l_639 = (-9L);
            char l_640 = (-1L);
            int *l_641 = &l_624;
            int *l_642 = &l_613;
            int *l_646 = (void*)0;
            int *l_647 = &l_643;
            int *l_648 = &l_643;
            int *l_649 = &l_603;
            int *l_650 = &g_214;
            int *l_651 = &l_645;
            int *l_652 = &l_627;
            int l_653 = 3L;
            int *l_654 = &g_71;
            int *l_655 = &l_613;
            int *l_656 = &l_639;
            int *l_658 = &g_214;
            int *l_659 = &g_71;
            int *l_660 = &l_645;
            int *l_661 = &g_416;
            int *l_662 = &l_624;
            int *l_663 = (void*)0;
            int *l_664 = &g_214;
            int *l_665 = &l_601;
            int *l_666 = &l_613;
            int *l_667 = &l_584;
            int *l_668 = &l_627;
            int *l_669 = &l_645;
            int *l_670 = (void*)0;
            int *l_671 = &l_627;
            int **l_692 = &l_621;
            int **l_693 = &l_652;
            for (g_135 = 0; (g_135 == 52); g_135 = safe_add_func_int8_t_s_s(g_135, 4))
            {
                int **l_521 = &l_344;
                int **l_522 = (void*)0;
                int **l_523 = &g_141;
                int *l_524 = &l_497;
                int *l_525 = (void*)0;
                int l_526 = 0L;
                int *l_527 = &g_71;
                int *l_528 = &g_416;
                int *l_529 = (void*)0;
                int *l_530 = (void*)0;
                int *l_531 = &g_71;
                int *l_532 = &l_497;
                int *l_533 = &l_526;
                int *l_535 = (void*)0;
                int *l_536 = &g_416;
                int *l_537 = &l_534;
                int *l_538 = &l_526;
                int *l_539 = &l_534;
                int *l_540 = &l_526;
                int *l_541 = &l_534;
                int *l_542 = &g_71;
                int *l_543 = &l_497;
                int *l_544 = &g_416;
                int *l_545 = &l_534;
                int *l_546 = &g_71;
                int *l_547 = &l_534;
                int *l_548 = &l_497;
                int *l_549 = &g_416;
                int *l_550 = &l_497;
                int *l_551 = &l_526;
                int *l_552 = &g_214;
                int *l_553 = (void*)0;
                int *l_554 = (void*)0;
                int *l_555 = (void*)0;
                int *l_556 = &l_526;
                int *l_557 = (void*)0;
                int *l_558 = (void*)0;
                int *l_559 = &g_71;
                int *l_560 = &g_71;
                int *l_561 = &g_214;
                int *l_562 = (void*)0;
                int *l_563 = &g_416;
                int *l_564 = &l_497;
                int *l_565 = &l_497;
                int *l_566 = (void*)0;
                int *l_567 = &l_497;
                int *l_568 = &g_71;
                int *l_569 = &l_526;
                int *l_570 = &g_214;
                int *l_571 = &l_526;
                (*l_523) = ((*l_521) = (void*)0);
                --g_572;
            }
            --g_672;
            for (l_657 = (-9); (l_657 > (-6)); l_657 = safe_add_func_int32_t_s_s(l_657, 6))
            {
                short **l_679 = &l_471;
                short *l_681 = (void*)0;
                short **l_680 = &l_681;
                short *l_683 = &g_632;
                short **l_682 = &l_683;
                unsigned *l_684 = (void*)0;
                unsigned *l_685 = (void*)0;
                unsigned *l_686 = &g_191;
                int l_687 = 0x64EAC22BL;
                if ((p_45 < (g_572 = (((safe_add_func_int32_t_s_s(0x0B8108AFL, (*l_633))) & (((((*l_682) = ((*l_680) = ((*l_679) = (void*)0))) == &g_472) & ((*l_686) = 4294967295UL)) >= l_687)) && ((safe_sub_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((*l_579))), (g_115 , p_45))) && p_45)))))
                {
                    if ((*l_665))
                        break;
                }
                else
                {
                    if (g_8)
                        break;
                }
                (*l_579) &= l_691;
            }
            (*l_693) = ((*l_692) = &l_584);
        }
        (*l_701) = (safe_rshift_func_uint16_t_u_s(func_55(((*l_697) = p_43)), ((safe_lshift_func_int8_t_s_s(g_251, (((l_645 > ((p_45 , ((p_45 > l_700) ^ l_601)) , ((p_45 && g_444) < (*p_43)))) || p_45) == p_45))) | g_24)));
    }
    (*l_708) = (((p_45 , (safe_sub_func_int16_t_s_s(g_458, ((*l_333) = (0xFC19CCB66470C1F8LL || ((*l_704) = func_55(l_453))))))) & (p_45 > (((+(safe_lshift_func_int8_t_s_s((((*l_707) |= ((void*)0 == &p_43)) , p_45), p_45))) , (void*)0) != (void*)0))) & 4294967293UL);
    if (((*l_708) , l_709))
    {
        unsigned l_722 = 0x17CD5688L;
        int l_723 = 0x7C754F3BL;
        long long *l_728 = &g_332;
        unsigned char l_745 = 251UL;
        int l_781 = 0L;
        for (g_458 = 16; (g_458 >= 17); ++g_458)
        {
            char l_724 = 0x57L;
            int l_753 = 0x4D21DA14L;
            int l_754 = 0x5330F8EAL;
            int l_769 = 0L;
            unsigned char **l_826 = &g_80;
            unsigned l_911 = 4294967288UL;
            unsigned l_914 = 0x08F47CF5L;
            (*l_708) = p_45;
            for (l_404 = 0; (l_404 >= 3); l_404++)
            {
                long long *l_727 = &l_586;
                int l_744 = 0x25DB258EL;
                unsigned char *l_816 = &l_745;
                short *l_824 = &g_320;
                char l_831 = (-3L);
                const unsigned long long l_832 = 7UL;
                if ((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s((((*l_704)--) || (l_722 = (p_45 > p_45))), (((*l_333) |= g_444) | 0x5246L))), l_723)), 13)))
                {
                    unsigned short l_729 = 0x7239L;
                    unsigned char **l_734 = &g_80;
                    unsigned char **l_735 = &g_288;
                    int *l_743 = &g_214;
                    int l_748 = 8L;
                    int l_802 = 8L;
                    l_729 = ((*l_708) = (l_724 , (safe_mul_func_uint8_t_u_u((l_727 != l_728), 0xA2L))));
                    for (l_722 = (-6); (l_722 < 23); l_722 = safe_add_func_uint64_t_u_u(l_722, 6))
                    {
                        g_71 = ((*l_708) |= 1L);
                    }
                    (*l_708) = (((((*l_707) = (safe_sub_func_uint16_t_u_u(((!func_55(((*l_735) = ((*l_734) = p_42)))) >= p_45), (-9L)))) , ((*l_707) = ((+((((((*l_333) = func_55(func_51((!(l_724 , (safe_mul_func_uint16_t_u_u(((*l_333) = ((*l_708) = p_45)), ((safe_add_func_int16_t_s_s((safe_sub_func_uint16_t_u_u(l_742, (((g_472 >= ((l_729 < 0x96CDF555L) != 65535UL)) , &g_416) == l_743))), g_115)) != l_744))))), p_45, p_45))) || (*l_743)) || l_745) < p_45) > g_472)) || 65535UL))) != g_672) != 0x13L);
                    for (g_214 = 0; (g_214 >= (-14)); g_214 = safe_sub_func_int16_t_s_s(g_214, 1))
                    {
                        int l_749 = 0xE3F0D4D6L;
                        int *l_750 = &l_644;
                        int *l_751 = &l_723;
                        int *l_752 = &l_744;
                        int *l_755 = &l_744;
                        int *l_756 = (void*)0;
                        int *l_757 = (void*)0;
                        int *l_758 = &l_748;
                        int *l_759 = (void*)0;
                        int *l_760 = &g_71;
                        int *l_761 = &l_754;
                        int *l_762 = &l_644;
                        int *l_763 = &l_754;
                        int *l_764 = &l_644;
                        int *l_765 = &g_416;
                        int *l_766 = &l_753;
                        int *l_767 = &l_744;
                        int *l_768 = (void*)0;
                        int *l_770 = &g_416;
                        int *l_771 = &l_742;
                        int *l_772 = &l_657;
                        int *l_773 = &l_723;
                        int *l_774 = &l_748;
                        int *l_775 = &l_744;
                        int *l_779 = &l_657;
                        int *l_780 = &l_754;
                        int *l_782 = &l_657;
                        int l_783 = (-1L);
                        int *l_784 = &l_754;
                        int *l_785 = &l_723;
                        int *l_786 = &l_753;
                        int *l_787 = &l_748;
                        int *l_788 = &l_657;
                        int *l_789 = &l_534;
                        int *l_790 = &l_534;
                        int *l_791 = &l_534;
                        int *l_792 = &l_783;
                        int *l_793 = &l_748;
                        int *l_794 = &l_748;
                        int *l_795 = &g_416;
                        int *l_796 = &l_638;
                        int *l_797 = &l_753;
                        int l_798 = 0x9D1D5172L;
                        int *l_799 = &l_723;
                        int *l_800 = &l_657;
                        int *l_801 = (void*)0;
                        int *l_803 = &g_71;
                        int *l_804 = &l_802;
                        l_723 = p_45;
                        if (p_45)
                            break;
                        ++g_776;
                        g_805--;
                    }
                }
                else
                {
                    const short *l_822 = &g_823;
                    const short **l_821 = &l_822;
                    int l_825 = 0x37608CD1L;
                    unsigned char **l_827 = &g_288;
                    unsigned char **l_829 = &g_80;
                    unsigned char ***l_828 = &l_829;
                    int *l_830 = &l_644;
                    char l_869 = (-1L);
                    int l_873 = 0L;
                    short l_887 = 0x0B32L;
                    (*l_708) ^= ((l_744 && ((--(*l_707)) , g_373)) | (0x2F8DL ^ func_55(p_42)));
                    (*l_708) ^= (g_167 , 0x93A8FCBEL);
                    if ((safe_mul_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(6UL, (safe_mod_func_uint64_t_u_u(func_55(l_453), l_781)))), l_832)))
                    {
                        int *l_833 = (void*)0;
                        int *l_834 = &l_742;
                        int *l_835 = &l_534;
                        int *l_836 = (void*)0;
                        int *l_837 = &l_644;
                        int *l_838 = &g_71;
                        int *l_839 = &l_769;
                        int *l_840 = &l_744;
                        int *l_841 = &l_534;
                        int *l_842 = &g_416;
                        int *l_843 = &g_416;
                        int *l_844 = &g_71;
                        int *l_845 = &l_744;
                        int *l_846 = &l_769;
                        int *l_847 = &l_657;
                        int *l_848 = &l_753;
                        int *l_849 = &l_753;
                        int *l_850 = &l_638;
                        int *l_851 = &l_753;
                        int *l_852 = &g_71;
                        int *l_853 = &l_644;
                        int *l_854 = &l_744;
                        int *l_855 = &l_781;
                        int *l_856 = &l_753;
                        int *l_857 = &l_769;
                        int *l_858 = &l_754;
                        int *l_859 = &l_742;
                        int *l_860 = &l_754;
                        int *l_861 = &g_214;
                        int *l_862 = &l_534;
                        int *l_863 = &l_723;
                        int *l_864 = &l_534;
                        int *l_865 = &l_754;
                        int *l_866 = &l_781;
                        int *l_867 = &l_657;
                        int l_868 = 0x13204137L;
                        int *l_870 = &l_638;
                        int *l_871 = &l_781;
                        int *l_872 = &l_825;
                        int *l_874 = &l_753;
                        int *l_875 = (void*)0;
                        int *l_876 = &l_744;
                        int *l_877 = (void*)0;
                        int *l_878 = &l_868;
                        int *l_879 = (void*)0;
                        int *l_880 = &l_723;
                        int *l_881 = (void*)0;
                        int *l_883 = (void*)0;
                        int *l_884 = &g_71;
                        int *l_885 = &g_214;
                        int *l_886 = (void*)0;
                        int *l_888 = &l_781;
                        int *l_889 = &l_754;
                        (*l_708) = p_45;
                        g_890--;
                        if (l_769)
                            continue;
                    }
                    else
                    {
                        int *l_893 = (void*)0;
                        int *l_894 = &g_71;
                        int *l_895 = &l_534;
                        int *l_896 = &l_744;
                        int *l_897 = &l_723;
                        int *l_898 = &l_723;
                        int *l_899 = (void*)0;
                        int *l_900 = (void*)0;
                        int *l_901 = &l_723;
                        int *l_902 = (void*)0;
                        int *l_903 = (void*)0;
                        int *l_904 = (void*)0;
                        int *l_905 = &l_754;
                        int *l_906 = (void*)0;
                        int *l_907 = &g_214;
                        int *l_908 = &l_781;
                        int *l_909 = &l_657;
                        int *l_910 = &l_657;
                        --l_911;
                        if (p_45)
                            break;
                        (*l_908) |= l_831;
                        (*l_830) = (*l_830);
                    }
                }
                if (l_831)
                    break;
                (*l_708) &= l_914;
                (*l_708) = g_251;
            }
        }
    }
    else
    {
        const int *l_916 = &g_71;
        const int **l_915 = &l_916;
        (*l_915) = &g_373;
        (*l_708) |= ((*g_80) != (*g_288));
        for (l_479 = 10; (l_479 > (-20)); l_479--)
        {
            short *l_919 = &g_632;
            unsigned **l_932 = &l_707;
            (*g_282) = (*g_282);
            if ((func_55(((((-1L) <= p_45) , (((g_115 < 0xAF7012B9F9C04248LL) , g_115) >= ((*l_919) &= (g_672 && 18446744073709551615UL)))) , (((safe_mul_func_uint16_t_u_u(0xCBB2L, ((safe_mul_func_int16_t_s_s((p_45 , p_45), 0x3F48L)) == p_45))) , p_45) , p_42))) | 18446744073709551611UL))
            {
                char *l_930 = &l_404;
                int *l_931 = &l_657;
                (*l_931) |= (0x00B2L | (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s(p_45, (safe_add_func_uint64_t_u_u(((+g_24) , p_45), (0xC6L | (*l_708)))))), ((*l_930) ^= ((void*)0 != &l_915)))));
            }
            else
            {
                unsigned ***l_933 = &l_932;
                unsigned **l_935 = (void*)0;
                unsigned ***l_934 = &l_935;
                (*l_934) = ((*l_933) = l_932);
                if (p_45)
                    continue;
                (*l_915) = &g_373;
            }
            for (g_161 = 0; (g_161 == 23); g_161 = safe_add_func_int32_t_s_s(g_161, 7))
            {
                int *l_938 = &l_638;
                (*l_915) = l_938;
                if ((**l_915))
                    continue;
                for (g_882 = 0; (g_882 <= 8); g_882 = safe_add_func_uint32_t_u_u(g_882, 3))
                {
                    unsigned long long l_948 = 0xD08C5B8456DB6610LL;
                    char *l_957 = &g_168;
                    for (l_709 = 1; (l_709 < 39); l_709 = safe_add_func_uint8_t_u_u(l_709, 6))
                    {
                        int *l_943 = &g_71;
                        (*l_915) = l_943;
                    }
                    for (g_416 = 0; (g_416 < 22); g_416++)
                    {
                        if (p_45)
                            break;
                    }
                    g_71 = ((((**l_932) |= (safe_sub_func_uint64_t_u_u(l_948, ((safe_lshift_func_int8_t_s_u(((*l_957) &= ((+(!((*l_938) = ((((((0xF2L & ((safe_add_func_uint8_t_u_u(((*l_938) , 0x1BL), g_71)) & (p_45 , (*l_916)))) > (safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u(0x6BL, 0xB4L)) == (*l_916)), p_45))) < 0x14L) != l_948) , g_572) == g_167)))) == 4294967289UL)), (*p_42))) , p_45)))) && g_71) != p_45);
                }
            }
        }
    }
    if ((func_55(p_44) >= 0x6A45L))
    {
        const unsigned l_970 = 0x57DFFF56L;
        int l_994 = 0xC1426936L;
        const int l_1009 = 0xF9DB0145L;
        int l_1037 = (-1L);
        int l_1064 = 3L;
        unsigned char * const l_1280 = (void*)0;
        int l_1306 = 0x28F05A44L;
        int *l_1353 = &l_1037;
        unsigned l_1383 = 1UL;
        unsigned **l_1414 = &l_707;
        int l_1554 = 0x3E49569EL;
        if ((p_45 | (++(*l_704))))
        {
            unsigned l_962 = 2UL;
            unsigned char * const l_963 = &g_167;
            int l_985 = 0x58207DC2L;
            long long *l_995 = (void*)0;
            const int **l_1075 = (void*)0;
            const int ***l_1074 = &l_1075;
            int l_1291 = 0x25529902L;
            int l_1292 = (-4L);
            int l_1293 = 0x31BECA1AL;
            unsigned char *l_1403 = &g_289;
            int l_1492 = 0x61C4D291L;
            if ((safe_mul_func_int8_t_s_s(g_167, ((-1L) < ((&g_346 == ((l_962 ^ (~(((void*)0 == l_963) != ((safe_mul_func_uint8_t_u_u((p_45 == func_55(func_51((safe_sub_func_uint32_t_u_u(((*l_707) = (((safe_rshift_func_int8_t_s_u(p_45, ((1L || 0xD442L) || g_320))) == p_45) <= (*l_708))), 0x6138972DL)), p_45, p_45))), g_214)) , p_45)))) , &g_346)) < l_962)))))
            {
                unsigned short l_984 = 4UL;
                if (p_45)
                {
                    return l_970;
                }
                else
                {
                    unsigned short l_981 = 0x7208L;
                    short *l_982 = (void*)0;
                    short *l_983 = &g_472;
                    int l_989 = (-8L);
                    l_985 |= (((*p_42) , 0UL) , ((safe_sub_func_int8_t_s_s(0L, ((safe_lshift_func_int8_t_s_s((safe_mul_func_int8_t_s_s((safe_mul_func_int16_t_s_s(((*l_983) = (safe_lshift_func_uint8_t_u_u(((*l_963) = l_962), ((((g_320 || ((func_55(p_44) & p_45) , (l_981 <= g_115))) == 4294967295UL) != 255UL) == 0x88L)))), 0x415AL)), l_984)), 6)) <= p_45))) , 0xECB16B84L));
                    for (g_191 = 19; (g_191 > 26); g_191 = safe_add_func_uint8_t_u_u(g_191, 1))
                    {
                        long long l_988 = (-7L);
                        (*l_708) = g_572;
                        (*l_708) = l_988;
                        (*l_708) = (&g_458 != &l_404);
                    }
                    l_989 = 0x1A01931AL;
                    for (g_805 = 0; (g_805 <= 7); g_805++)
                    {
                        l_994 = (safe_mul_func_int8_t_s_s(l_984, (*p_44)));
                    }
                }
                (*l_708) ^= p_45;
            }
            else
            {
                unsigned long long l_1006 = 18446744073709551608UL;
                long long *l_1010 = &l_586;
                int l_1015 = 1L;
                l_985 ^= (l_995 == &g_332);
                if ((~((g_672 > (g_332 &= ((*l_1010) = ((2UL != (p_45 == (safe_lshift_func_int16_t_s_u((safe_lshift_func_uint16_t_u_u(((safe_add_func_int32_t_s_s(((*l_708) |= 0xE6CBC389L), g_805)) >= (func_55(p_43) <= 0x3DDEC6CEL)), l_1006)), p_45)))) != 0xD7D54A9BL)))) != (*p_44))))
                {
                    int *l_1013 = &l_638;
                    int *l_1016 = &l_1015;
                    int *l_1017 = &g_214;
                    if (func_55(p_42))
                    {
                        unsigned long long **l_1011 = &l_704;
                        unsigned long long ***l_1012 = &l_1011;
                        int **l_1014 = &l_708;
                        l_994 = (-10L);
                        (*l_1012) = l_1011;
                        (*l_1014) = l_1013;
                    }
                    else
                    {
                        (*l_1013) |= func_55(p_42);
                    }
                    l_1018++;
                    return l_1006;
                }
                else
                {
                    long long l_1073 = 0xB50F4D54FE662892LL;
                    for (g_472 = 27; (g_472 != 0); --g_472)
                    {
                        int l_1023 = 0L;
                        int *l_1024 = &l_534;
                        int *l_1025 = &g_416;
                        int *l_1026 = &l_638;
                        int *l_1027 = &l_994;
                        int *l_1028 = &l_534;
                        int *l_1029 = &l_657;
                        int *l_1030 = &l_644;
                        int *l_1031 = &l_985;
                        int *l_1032 = (void*)0;
                        int *l_1033 = &l_1015;
                        int *l_1034 = &l_534;
                        int *l_1035 = &l_1015;
                        int l_1036 = (-10L);
                        int *l_1038 = &l_994;
                        int *l_1039 = &g_214;
                        int *l_1040 = &g_71;
                        int *l_1041 = &g_71;
                        int *l_1042 = &l_1015;
                        int *l_1043 = &g_416;
                        int *l_1044 = &l_985;
                        int *l_1045 = &l_534;
                        int *l_1046 = &l_985;
                        int *l_1047 = (void*)0;
                        int *l_1048 = &l_742;
                        int *l_1049 = &l_985;
                        int *l_1050 = (void*)0;
                        int *l_1051 = &g_416;
                        int *l_1052 = &l_1037;
                        int *l_1053 = &g_416;
                        int *l_1054 = (void*)0;
                        int *l_1055 = &l_985;
                        int *l_1056 = &l_1037;
                        int *l_1057 = &l_534;
                        int *l_1058 = &g_71;
                        int *l_1059 = &l_638;
                        int *l_1060 = (void*)0;
                        int *l_1061 = &l_1037;
                        int *l_1062 = &l_1037;
                        int *l_1063 = &g_416;
                        int *l_1065 = &l_742;
                        int *l_1066 = &l_1015;
                        int *l_1067 = &l_657;
                        --g_1068;
                    }
                    l_985 |= (((safe_mod_func_int16_t_s_s(0xBD92L, l_1073)) , l_1074) == (((*p_43) |= l_1006) , l_1076));
                    for (g_444 = 0; (g_444 > 56); g_444 = safe_add_func_int64_t_s_s(g_444, 1))
                    {
                        (*l_708) = ((safe_mod_func_int8_t_s_s((-4L), (***l_1076))) != p_45);
                    }
                }
                for (g_8 = 0; (g_8 == 7); ++g_8)
                {
                    int *l_1085 = &l_985;
                    int *l_1086 = &g_71;
                    int *l_1087 = (void*)0;
                    int *l_1088 = &l_994;
                    int *l_1089 = (void*)0;
                    int *l_1090 = &l_1015;
                    int *l_1091 = &l_644;
                    int l_1092 = 3L;
                    int *l_1093 = &l_644;
                    int *l_1094 = &l_742;
                    int *l_1095 = &g_416;
                    int *l_1096 = &l_1064;
                    int *l_1097 = &g_416;
                    int *l_1098 = (void*)0;
                    int *l_1099 = &l_985;
                    int *l_1100 = (void*)0;
                    int *l_1101 = &l_1037;
                    int *l_1102 = &l_534;
                    int *l_1103 = &l_638;
                    int *l_1104 = &l_638;
                    int *l_1105 = &g_214;
                    int *l_1106 = (void*)0;
                    int *l_1107 = &l_1037;
                    int l_1108 = 0x12FE805DL;
                    int *l_1109 = &l_985;
                    int *l_1110 = &l_534;
                    int *l_1111 = &l_534;
                    int *l_1112 = &l_1015;
                    int *l_1113 = (void*)0;
                    int *l_1114 = &l_1108;
                    int *l_1115 = &l_638;
                    int *l_1116 = &l_742;
                    int *l_1117 = &g_416;
                    int *l_1118 = &l_1108;
                    int *l_1119 = &l_638;
                    int *l_1120 = &g_416;
                    int *l_1121 = &g_214;
                    int *l_1122 = &g_71;
                    int *l_1123 = &l_1092;
                    int *l_1124 = (void*)0;
                    int *l_1125 = &g_71;
                    int *l_1126 = &l_638;
                    int *l_1127 = &l_994;
                    int *l_1128 = &l_985;
                    int *l_1129 = &l_657;
                    int *l_1130 = &l_638;
                    int *l_1131 = (void*)0;
                    int *l_1132 = &l_742;
                    int *l_1133 = &l_534;
                    int *l_1134 = &l_1092;
                    int *l_1135 = &l_1064;
                    int *l_1136 = (void*)0;
                    int *l_1137 = &l_657;
                    int *l_1138 = &l_985;
                    int *l_1139 = &l_1037;
                    int *l_1140 = &l_638;
                    int *l_1141 = &l_985;
                    int *l_1142 = &l_644;
                    int *l_1144 = &l_644;
                    ++g_1145;
                    for (l_404 = 0; (l_404 == 15); ++l_404)
                    {
                        (*l_1093) = p_45;
                        (*l_1077) = &g_71;
                        (*l_1139) &= l_994;
                    }
                    (*l_1115) &= (0x561EA05AL < func_55(p_43));
                }
            }
            if (((((((*l_707) |= (safe_rshift_func_uint16_t_u_s((--(*l_333)), 10))) , l_1154) != g_1155) > func_55(p_42)) <= g_805))
            {
                int *l_1157 = &l_994;
                int *l_1158 = &l_638;
                int *l_1159 = &l_657;
                int *l_1160 = &l_1064;
                int *l_1161 = &g_214;
                int *l_1162 = &l_1037;
                int *l_1163 = &l_657;
                int *l_1164 = &l_534;
                int *l_1165 = &l_657;
                int *l_1166 = (void*)0;
                int *l_1167 = (void*)0;
                int *l_1168 = &l_638;
                int *l_1169 = &g_71;
                int *l_1170 = &l_985;
                int *l_1171 = &l_534;
                int *l_1172 = &l_985;
                int *l_1173 = &g_214;
                int l_1174 = 0x2CCAB8ECL;
                int *l_1175 = &l_742;
                int *l_1176 = (void*)0;
                int *l_1177 = (void*)0;
                int *l_1178 = &l_994;
                int *l_1179 = &l_644;
                int *l_1180 = &l_1037;
                int *l_1181 = &l_534;
                int *l_1182 = &l_985;
                int *l_1183 = (void*)0;
                int *l_1184 = &l_638;
                int *l_1187 = &l_1064;
                int *l_1188 = &l_1174;
                int *l_1190 = &g_71;
                int *l_1191 = (void*)0;
                int *l_1192 = &g_416;
                ++g_1193;
            }
            else
            {
                unsigned * const l_1203 = &l_962;
                long long *l_1206 = &l_586;
                long long **l_1207 = &l_1206;
                short l_1228 = 0x6A36L;
                int l_1257 = 0xDE38AB67L;
                int l_1268 = 0xE8010A45L;
                short l_1401 = 0x131DL;
                unsigned long long l_1498 = 18446744073709551615UL;
                int *l_1501 = &l_534;
                int *l_1502 = &l_1257;
                int *l_1503 = &l_742;
                int *l_1504 = &l_1491;
                int *l_1505 = &l_1037;
                int *l_1506 = &l_985;
                int *l_1507 = (void*)0;
                int *l_1508 = &l_1268;
                int *l_1509 = &l_1293;
                int *l_1510 = (void*)0;
                int *l_1511 = &l_1257;
                int *l_1512 = &l_1306;
                int *l_1513 = &l_1293;
                int *l_1514 = &l_1382;
                int *l_1515 = (void*)0;
                int *l_1516 = &l_657;
                int *l_1517 = &l_1268;
                int *l_1518 = &l_1382;
                int *l_1519 = &g_416;
                int *l_1520 = &l_1291;
                int *l_1521 = &l_1064;
                int *l_1522 = (void*)0;
                int *l_1523 = (void*)0;
                int *l_1524 = (void*)0;
                int *l_1525 = &l_742;
                int *l_1526 = &l_1268;
                int *l_1527 = &l_1492;
                int *l_1528 = &l_1293;
                int *l_1529 = &l_1491;
                int *l_1530 = &l_994;
                int *l_1531 = &l_1291;
                int *l_1532 = &l_1306;
                int *l_1533 = (void*)0;
                int *l_1534 = (void*)0;
                int *l_1535 = &g_71;
                int *l_1536 = &l_534;
                int *l_1537 = &l_1037;
                int *l_1538 = &g_71;
                int *l_1539 = (void*)0;
                int *l_1540 = &l_742;
                int *l_1541 = &l_1292;
                int *l_1542 = &l_1492;
                int *l_1543 = &l_994;
                int *l_1544 = &l_657;
                int *l_1545 = &l_1037;
                int *l_1546 = &l_534;
                int *l_1547 = (void*)0;
                int *l_1548 = (void*)0;
                int *l_1549 = (void*)0;
                int *l_1550 = (void*)0;
                int *l_1551 = &l_1064;
                int *l_1552 = &l_1291;
                int *l_1553 = &l_657;
                for (g_632 = 0; (g_632 > 21); ++g_632)
                {
                    short *l_1200 = &g_472;
                    (*l_708) = (safe_rshift_func_int16_t_s_u(((*l_1200) |= (g_167 ^ 0xE7E93BF603F4FE94LL)), 15));
                    for (g_251 = 0; (g_251 <= 12); g_251++)
                    {
                        (*l_708) ^= (p_45 && ((*g_1155) == l_1203));
                        if (p_45)
                            break;
                        (*l_708) = p_45;
                        g_141 = &g_71;
                    }
                }
                (*l_708) = ((safe_sub_func_uint32_t_u_u((((*l_707) = 0xE09FA516L) != p_45), (((*l_1207) = l_1206) != l_995))) < 0xD5EC23C2A44F1A65LL);
                if ((safe_unary_minus_func_int32_t_s((safe_mod_func_int32_t_s_s((((*l_1154) != (((*l_1078) && (p_45 < l_1064)) , (*g_1155))) ^ p_45), (**g_1155))))))
                {
                    int *l_1211 = &l_534;
                    int *l_1212 = &l_1037;
                    int *l_1213 = &l_1037;
                    int l_1214 = 0x402B01B8L;
                    int *l_1215 = &l_985;
                    int *l_1216 = &l_638;
                    int *l_1217 = &l_657;
                    int *l_1218 = (void*)0;
                    int *l_1219 = &l_644;
                    int *l_1220 = &l_644;
                    int *l_1221 = &l_985;
                    int *l_1222 = &l_638;
                    int l_1223 = 1L;
                    int *l_1224 = &l_742;
                    int *l_1225 = &l_994;
                    int *l_1226 = (void*)0;
                    int *l_1227 = &g_214;
                    int *l_1229 = &l_1064;
                    int *l_1230 = (void*)0;
                    int *l_1231 = &l_644;
                    int *l_1232 = &l_644;
                    int *l_1233 = &g_214;
                    int *l_1234 = &l_657;
                    int *l_1235 = &l_985;
                    int *l_1236 = &l_1214;
                    int *l_1237 = &l_1223;
                    int *l_1238 = &g_71;
                    int *l_1239 = (void*)0;
                    int *l_1240 = &g_214;
                    int *l_1241 = (void*)0;
                    int *l_1242 = &g_214;
                    int *l_1243 = &l_1223;
                    int *l_1244 = &l_1223;
                    int *l_1245 = &g_71;
                    int *l_1246 = &l_994;
                    int *l_1247 = &l_1214;
                    int *l_1248 = &l_742;
                    int *l_1249 = &l_994;
                    int *l_1250 = (void*)0;
                    int *l_1251 = (void*)0;
                    int *l_1252 = &l_742;
                    int *l_1254 = &l_657;
                    int *l_1255 = &g_214;
                    int *l_1256 = &g_71;
                    int *l_1258 = &l_1064;
                    int *l_1259 = &l_1064;
                    int *l_1261 = &l_1223;
                    int *l_1262 = &l_1037;
                    int *l_1263 = &l_1223;
                    int *l_1264 = &l_1257;
                    int *l_1265 = &l_657;
                    int *l_1266 = &l_994;
                    int *l_1267 = &g_416;
                    int l_1269 = 0x715AA200L;
                    int *l_1270 = (void*)0;
                    int *l_1271 = &l_657;
                    (*l_1077) = &g_214;
                    g_1272--;
                    if ((g_327 < (safe_lshift_func_int8_t_s_s((g_1253 && ((*l_704) = func_55(l_1280))), p_45))))
                    {
                        short *l_1286 = &g_472;
                        unsigned char * const l_1289 = (void*)0;
                        int l_1290 = (-1L);
                        int *l_1294 = &l_638;
                        int *l_1295 = (void*)0;
                        int *l_1296 = (void*)0;
                        int *l_1297 = &l_657;
                        int *l_1298 = &l_1268;
                        int l_1299 = 0x6ED9B40EL;
                        int *l_1300 = &l_657;
                        int *l_1301 = &l_1293;
                        int *l_1302 = &l_1292;
                        int *l_1303 = &g_416;
                        int *l_1304 = &l_644;
                        int *l_1305 = &l_1290;
                        int *l_1307 = &l_657;
                        int *l_1308 = &l_1257;
                        int *l_1309 = (void*)0;
                        int *l_1310 = &l_1291;
                        int *l_1311 = &l_1064;
                        int *l_1312 = &g_416;
                        int *l_1313 = &l_1291;
                        int *l_1314 = &l_985;
                        int *l_1315 = &l_1268;
                        int *l_1316 = &l_1291;
                        int *l_1317 = &l_1257;
                        int *l_1318 = &l_534;
                        int *l_1319 = &l_1064;
                        int *l_1320 = &l_1214;
                        int *l_1321 = &l_1293;
                        int *l_1322 = &l_1293;
                        int *l_1323 = &l_1064;
                        int *l_1324 = (void*)0;
                        int *l_1325 = &l_1223;
                        int *l_1326 = &l_1290;
                        int *l_1327 = &g_71;
                        int *l_1328 = &l_1223;
                        int l_1329 = 0x00512A1AL;
                        int *l_1330 = &l_994;
                        int *l_1331 = &l_1293;
                        int *l_1332 = &l_1299;
                        int *l_1333 = &l_1268;
                        int *l_1334 = &g_214;
                        int *l_1335 = &l_994;
                        int *l_1336 = (void*)0;
                        long long ***l_1350 = &l_1207;
                        int **l_1351 = (void*)0;
                        int **l_1352 = &l_1309;
                        (*l_1225) |= (((((p_45 >= (*l_1227)) , 0x5EL) || (safe_mul_func_uint8_t_u_u((safe_unary_minus_func_int16_t_s((safe_rshift_func_int16_t_s_u(((((*l_1286) = 0x67D2L) <= g_1185) == (*p_43)), ((*l_333) = ((safe_rshift_func_uint16_t_u_s((0xA029L && ((((func_55(l_1289) <= (**g_1155)) , 8UL) <= 0UL) ^ (***l_1076))), 11)) != p_45)))))), g_332))) , (void*)0) == l_333);
                        g_1337--;
                        (*l_1321) ^= p_45;
                        l_1353 = ((*l_1352) = (((safe_mod_func_uint32_t_u_u(l_1268, l_1257)) && ((safe_mod_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((safe_mod_func_int64_t_s_s((p_45 < (g_1348 == ((*l_1350) = (void*)0))), (g_1143 && (((*l_1317) &= l_1306) , ((*l_704) = ((*l_1331) > (((*l_1314) | p_45) , g_289))))))), 3)), g_1186)) >= p_45)) , &g_71));
                    }
                    else
                    {
                        long long l_1367 = 3L;
                        int l_1368 = 0xE618DE25L;
                        l_1368 = (((safe_sub_func_int8_t_s_s((((safe_add_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u((**g_1155), (safe_mod_func_uint32_t_u_u(((**l_1154) = (((func_55(p_44) , p_45) >= (g_1186 , (safe_unary_minus_func_uint64_t_u((safe_mul_func_uint16_t_u_u((*l_1266), (safe_sub_func_uint64_t_u_u(((65535UL != l_1257) == ((((*l_333) = p_45) ^ 0x7AAFL) , p_45)), l_1257)))))))) | g_191)), l_1367)))) & (*l_1353)), 1UL)) | 0UL) >= p_45), g_327)) , g_416) , (*l_1232));
                        (*l_1212) = ((**g_1155) , ((*l_708) , p_45));
                        (*l_1077) = &g_416;
                        g_141 = &l_1268;
                    }
                    for (g_1145 = (-10); (g_1145 < 20); g_1145 = safe_add_func_uint8_t_u_u(g_1145, 4))
                    {
                        long long l_1375 = 0x48002BF2E8356469LL;
                        int l_1376 = 1L;
                        unsigned long long l_1377 = 2UL;
                        (*l_1261) = (safe_add_func_int64_t_s_s(g_1185, p_45));
                        (*l_1227) = ((l_1373 == (void*)0) < 0xFE6D81A18413E035LL);
                        l_1377--;
                        (**l_1076) = &g_71;
                    }
                }
                else
                {
                    int l_1400 = 1L;
                    short l_1490 = 2L;
                    int l_1493 = 0xAD4852F3L;
                    int l_1494 = 0xCB92CFDAL;
                    (*l_1077) = (**l_1076);
                    (*l_1353) = (safe_add_func_uint32_t_u_u(func_55(p_42), (l_1382 , ((p_45 != p_45) || (g_325 | (((*l_453) = (((void*)0 == (*g_282)) < (p_45 , p_45))) ^ l_1383))))));
                    for (g_882 = 0; (g_882 <= 22); g_882 = safe_add_func_int64_t_s_s(g_882, 4))
                    {
                        (*l_708) = p_45;
                    }
                    if ((l_1390 = ((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(g_472, (*p_44))), 1)) <= (*g_288))))
                    {
                        unsigned l_1391 = 0UL;
                        unsigned char ***l_1395 = &g_283;
                        unsigned char ****l_1394 = &l_1395;
                        unsigned char **l_1402 = &g_288;
                        short l_1404 = 6L;
                        int **l_1405 = (void*)0;
                        int **l_1406 = &g_141;
                        char *l_1413 = &g_458;
                        ++l_1391;
                        (*l_1077) = ((*l_1406) = ((p_45 , func_55(l_1280)) , (void*)0));
                        l_1306 |= (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(((((func_55(p_43) || (safe_mul_func_int8_t_s_s(((*l_1413) |= (~g_805)), (&g_1156 == l_1414)))) , p_45) <= ((*l_1353) &= ((((g_1145 & 0x340B3639171FDE2ALL) != ((*p_43) >= (*p_43))) >= 0UL) != p_45))) | 0x02BA3357L), (*g_80))), p_45));
                    }
                    else
                    {
                        int *l_1416 = (void*)0;
                        int *l_1417 = &l_1268;
                        int *l_1418 = &l_638;
                        int *l_1419 = &l_534;
                        int *l_1420 = &l_1306;
                        int *l_1421 = (void*)0;
                        int *l_1422 = (void*)0;
                        int *l_1423 = (void*)0;
                        int *l_1424 = &l_1291;
                        int *l_1425 = (void*)0;
                        int *l_1426 = &l_644;
                        int *l_1427 = &l_1400;
                        int *l_1428 = &l_742;
                        int *l_1429 = &l_657;
                        int *l_1430 = &l_638;
                        int *l_1431 = (void*)0;
                        int *l_1432 = (void*)0;
                        int *l_1433 = &g_214;
                        int *l_1434 = &l_994;
                        int *l_1435 = &l_1400;
                        int *l_1436 = &l_742;
                        int *l_1437 = &l_985;
                        int *l_1438 = &l_1382;
                        int *l_1439 = &l_644;
                        int *l_1440 = &l_994;
                        int *l_1441 = &g_71;
                        int *l_1442 = &g_416;
                        int *l_1443 = (void*)0;
                        int *l_1444 = &g_416;
                        int *l_1445 = (void*)0;
                        int *l_1446 = &g_214;
                        int *l_1447 = &l_994;
                        int *l_1448 = &l_1306;
                        int *l_1449 = (void*)0;
                        int *l_1450 = &l_1268;
                        int *l_1451 = &l_1257;
                        int *l_1452 = &l_644;
                        int *l_1453 = &l_1257;
                        int *l_1454 = &l_742;
                        int *l_1455 = &l_534;
                        int *l_1456 = &l_742;
                        int *l_1457 = (void*)0;
                        int *l_1458 = &l_1306;
                        int *l_1459 = &l_742;
                        int *l_1460 = (void*)0;
                        int *l_1461 = &l_657;
                        int *l_1462 = &l_985;
                        int *l_1463 = &l_638;
                        int *l_1464 = &l_1291;
                        int *l_1465 = &l_1268;
                        int *l_1466 = &g_71;
                        int *l_1467 = &l_1064;
                        int *l_1468 = &l_1306;
                        int *l_1469 = &l_1064;
                        int *l_1470 = &g_416;
                        int *l_1471 = &l_742;
                        int *l_1472 = &g_416;
                        int *l_1473 = (void*)0;
                        int *l_1474 = &l_742;
                        int *l_1475 = &l_985;
                        int *l_1476 = &l_1257;
                        int *l_1477 = &l_1037;
                        int *l_1478 = &l_644;
                        int *l_1479 = &l_638;
                        int *l_1480 = &l_1382;
                        int *l_1481 = (void*)0;
                        int *l_1482 = &l_985;
                        int *l_1483 = &l_742;
                        int *l_1484 = &l_1292;
                        int *l_1485 = (void*)0;
                        int *l_1486 = &l_742;
                        (*l_1353) ^= (safe_unary_minus_func_int8_t_s(p_45));
                        g_1487--;
                        --g_1495;
                        l_1498--;
                    }
                }
                --g_1555;
            }
            if (((*l_1353) &= p_45))
            {
                char l_1564 = (-4L);
                int l_1565 = 0x50FC5755L;
                if (((*l_708) ^= func_55(l_1403)))
                {
                    unsigned l_1558 = 0x20EE1B17L;
                    int l_1559 = (-4L);
                    l_1559 |= l_1558;
                }
                else
                {
                    int **l_1566 = (void*)0;
                    l_1291 &= (((**g_1155) == (p_45 , (((safe_add_func_int32_t_s_s(((safe_sub_func_uint8_t_u_u((g_327 , ((l_1565 = l_1564) && l_1564)), ((*l_963) = ((**g_1155) | (((+((p_45 < (!(l_1566 == l_1566))) && (*g_1156))) , 1UL) | 0x6D2AAA82ABCE3FA6LL))))) & (-9L)), p_45)) | 18446744073709551615UL) <= (*p_43)))) , p_45);
                    for (g_472 = 0; (g_472 <= 9); g_472 = safe_add_func_int32_t_s_s(g_472, 9))
                    {
                        unsigned l_1569 = 0xDF7AE1EDL;
                        const unsigned short ***l_1572 = &g_346;
                        l_1569++;
                        (*l_1572) = g_346;
                        g_416 = ((((0xC2D7C969L <= 1UL) ^ (safe_rshift_func_uint8_t_u_s((--(*l_1403)), g_776))) >= (+p_45)) <= (g_115 > 0xACA19B622B762A81LL));
                        (*l_708) &= (1UL == (((p_45 , func_55(p_42)) , 1UL) | (--(**l_1154))));
                    }
                }
                g_1579 = &g_373;
            }
            else
            {
                return g_1145;
            }
        }
        else
        {
            unsigned l_1580 = 0x0E6E1AA6L;
            short *l_1581 = &g_472;
            (*l_708) = ((p_45 | ((*l_704) = (*l_1078))) > (l_1580 || (((((*l_1076) != (void*)0) , func_55(func_51((g_320 = ((*l_1581) &= p_45)), p_45, (p_45 , (safe_mod_func_int8_t_s_s(((safe_mod_func_int32_t_s_s((((((0x650FL < l_1580) >= 7L) > 1L) | (*l_708)) || (-1L)), (-1L))) , (**l_1077)), p_45)))))) == (*g_288)) , (*l_1353))));
            (*l_1353) &= ((*l_708) = (*g_1579));
        }
        (*l_708) &= (*l_1353);
    }
    else
    {
        for (l_742 = 27; (l_742 < 6); l_742--)
        {
            short *l_1598 = &g_1253;
            short * const *l_1597 = &l_1598;
            long long ***l_1599 = &g_1348;
            int *l_1600 = &g_71;
            int *l_1601 = &l_644;
            int *l_1602 = (void*)0;
            int *l_1603 = &l_657;
            int *l_1604 = &l_644;
            int *l_1605 = (void*)0;
            int *l_1606 = &l_657;
            int *l_1607 = (void*)0;
            int *l_1608 = (void*)0;
            int *l_1609 = &l_1382;
            int *l_1610 = &l_644;
            int *l_1611 = &l_1382;
            int *l_1612 = &l_1491;
            int *l_1613 = &g_71;
            int *l_1614 = &l_638;
            int *l_1615 = &l_644;
            int *l_1616 = &l_638;
            int *l_1617 = &g_416;
            int *l_1618 = &g_71;
            int *l_1619 = (void*)0;
            int *l_1620 = &l_1382;
            int *l_1621 = &l_638;
            int *l_1622 = (void*)0;
            int *l_1623 = &l_1382;
            int *l_1624 = &g_214;
            int *l_1625 = (void*)0;
            int l_1626 = 0xD53DDA9FL;
            int *l_1627 = &l_644;
            int *l_1628 = (void*)0;
            int l_1629 = 0L;
            for (g_416 = (-1); (g_416 == 13); g_416 = safe_add_func_uint16_t_u_u(g_416, 8))
            {
                int *l_1590 = &g_214;
                (*l_1077) = l_1590;
            }
            (*l_1600) |= (((safe_mod_func_uint32_t_u_u((((*g_1348) = &l_586) != (void*)0), (**g_1155))) < ((safe_add_func_int64_t_s_s(p_45, (safe_lshift_func_uint8_t_u_u(0x6EL, 0)))) != (((void*)0 == l_1597) | ((((*l_708) = p_45) , l_1599) != &g_1348)))) < (**g_1155));
            ++g_1630;
        }
    }
    return p_45;
}







static unsigned char * func_46(unsigned char * const p_47, unsigned char * p_48, unsigned p_49, unsigned long long p_50)
{
    unsigned short l_81 = 1UL;
    unsigned char *l_88 = &g_8;
    unsigned l_89 = 0xE8D13708L;
    unsigned char **l_90 = &l_88;
    unsigned short l_91 = 0xC0F4L;
    int l_140 = 0xF942F024L;
    int **l_183 = &g_141;
    if (((0x39L ^ l_81) <= (safe_sub_func_int64_t_s_s(((0x56384447L != (((*l_90) = func_51((safe_sub_func_uint32_t_u_u(p_49, (safe_sub_func_uint32_t_u_u((g_8 != (l_88 == (p_48 = p_48))), (l_89 && (l_89 ^ 65535UL)))))), p_50, p_50)) != &g_8)) , l_91), l_81))))
    {
        unsigned short *l_100 = &g_24;
        unsigned char ***l_103 = &l_90;
        unsigned char **l_105 = &l_88;
        unsigned char ***l_104 = &l_105;
        unsigned long long l_112 = 1UL;
        unsigned *l_113 = &l_89;
        unsigned short l_114 = 7UL;
        int *l_116 = &g_71;
        int * const l_144 = (void*)0;
        int l_149 = 0x53DC631AL;
        unsigned char *l_166 = &g_167;
        unsigned long long *l_173 = (void*)0;
        unsigned long long *l_174 = &l_112;
        int l_184 = 0x86503B76L;
        if (((*l_116) = (((safe_sub_func_int8_t_s_s((g_115 &= ((safe_add_func_uint64_t_u_u((safe_add_func_uint32_t_u_u(((*l_113) &= (((((*l_100)--) <= (0xE514D861344E0D2CLL <= (((*l_104) = ((*l_103) = &g_80)) != &p_48))) || ((safe_add_func_uint32_t_u_u(g_71, 0x09C3C7D9L)) > (safe_mod_func_int32_t_s_s((safe_mul_func_uint8_t_u_u((((p_49 | (p_50 > g_2)) , l_112) > g_8), 0x75L)), g_24)))) == 249UL)), 4294967291UL)), l_81)) > l_114)), 252UL)) > l_91) >= (-7L))))
        {
            int *l_117 = &g_71;
            int *l_118 = &g_71;
            int *l_119 = &g_71;
            int *l_120 = &g_71;
            int *l_121 = &g_71;
            int *l_122 = &g_71;
            int *l_123 = &g_71;
            int *l_124 = (void*)0;
            int *l_125 = &g_71;
            int *l_126 = &g_71;
            int *l_127 = (void*)0;
            int *l_128 = &g_71;
            int *l_129 = &g_71;
            int *l_130 = (void*)0;
            int *l_131 = &g_71;
            int *l_132 = (void*)0;
            int *l_133 = (void*)0;
            int *l_134 = &g_71;
            unsigned char * const l_138 = &g_8;
            unsigned char **l_139 = &l_88;
            g_135++;
            l_140 |= func_55(((*l_139) = l_138));
            (*l_125) = func_55(func_51(func_55(&g_8), g_2, g_135));
            (*l_134) = g_71;
        }
        else
        {
            g_141 = &g_71;
            for (l_114 = 0; (l_114 >= 19); l_114++)
            {
                int **l_145 = &l_116;
                int l_146 = (-9L);
                int l_147 = 0x43A6B221L;
                int *l_148 = &l_140;
                int *l_150 = &g_71;
                int *l_151 = &l_147;
                int *l_152 = &g_71;
                int *l_153 = &l_146;
                int *l_154 = &l_146;
                int *l_155 = &l_149;
                int *l_156 = &l_147;
                int *l_157 = &l_146;
                int *l_158 = &l_147;
                int *l_159 = &l_140;
                int *l_160 = &l_146;
                (*l_145) = l_144;
                ++g_161;
                (*l_145) = (*l_145);
            }
        }
        if (((safe_mul_func_uint8_t_u_u(l_140, (((*p_48) = (g_168 |= ((*l_166) &= func_55(&g_8)))) , (safe_mul_func_int8_t_s_s((18446744073709551606UL & ((*l_174) = (safe_rshift_func_uint16_t_u_u(l_91, 7)))), (func_55(p_48) < (safe_mul_func_int8_t_s_s((((safe_mul_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_s(((safe_rshift_func_uint8_t_u_s((*p_48), 0)) , ((l_183 == &g_141) , 0xB3E3L)), l_184)) , p_50), 0x5D29L)) > p_49) && p_49), p_49)))))))) <= p_50))
        {
            int *l_185 = &g_71;
            int *l_186 = &l_140;
            int *l_187 = &l_184;
            int *l_188 = &g_71;
            int *l_189 = &l_149;
            int *l_190 = (void*)0;
            int l_229 = (-9L);
            ++g_191;
            (*l_183) = l_190;
            if (p_49)
            {
                unsigned l_194 = 3UL;
                int *l_195 = &l_149;
                unsigned char * const l_200 = &g_167;
                (*l_187) = ((*l_185) = l_194);
                (*l_183) = l_195;
                (*l_187) = (safe_sub_func_uint16_t_u_u((p_49 || (g_168 | ((((&g_71 == ((*l_183) = (((p_49 , ((safe_mod_func_int32_t_s_s((0L && ((*l_195) = ((*l_188) = func_55(l_200)))), (((~p_50) < (+(*l_187))) , p_50))) , g_191)) & 1L) , l_187))) && (*l_188)) != p_49) , (*g_141)))), l_81));
            }
            else
            {
                int *l_201 = (void*)0;
                int *l_202 = &l_140;
                int *l_203 = (void*)0;
                int *l_204 = (void*)0;
                int *l_205 = &l_140;
                int *l_206 = &g_71;
                int *l_207 = &l_149;
                int *l_208 = (void*)0;
                int *l_209 = &l_140;
                int *l_210 = (void*)0;
                int *l_211 = &g_71;
                int *l_212 = (void*)0;
                int *l_213 = (void*)0;
                int *l_215 = (void*)0;
                int *l_216 = &g_214;
                int *l_217 = &l_140;
                int *l_218 = &l_184;
                int *l_219 = &l_184;
                int *l_220 = (void*)0;
                int *l_221 = &l_149;
                int *l_222 = (void*)0;
                int *l_223 = &l_140;
                int *l_224 = &g_214;
                int *l_225 = &l_184;
                int *l_226 = &g_214;
                int *l_227 = &g_71;
                int *l_228 = &g_71;
                int *l_230 = (void*)0;
                int *l_231 = &l_229;
                unsigned char l_232 = 255UL;
                (*l_183) = (*l_183);
                (*l_183) = &g_71;
                --l_232;
            }
        }
        else
        {
            int *l_237 = &l_184;
            int *l_238 = &l_149;
            int *l_239 = &l_184;
            int *l_240 = &l_149;
            int *l_241 = &l_149;
            int *l_242 = &l_184;
            int *l_243 = &l_149;
            int *l_244 = &l_149;
            int *l_245 = &g_71;
            int *l_246 = &g_214;
            int *l_247 = &l_184;
            int *l_248 = &l_184;
            int *l_249 = (void*)0;
            int *l_250 = (void*)0;
            short l_261 = 1L;
            (**l_183) = (safe_rshift_func_int8_t_s_s(7L, 6));
            (*l_183) = &l_149;
            g_251--;
            for (g_214 = (-11); (g_214 != (-7)); g_214++)
            {
                int *l_258 = &g_214;
                (*l_183) = &g_71;
                for (g_24 = (-4); (g_24 < 35); ++g_24)
                {
                    (*l_183) = l_258;
                    (*l_244) = (0xD8F591B348779212LL != (p_50 < ((safe_rshift_func_int16_t_s_u(0x469DL, (**l_183))) != g_168)));
                    if (l_261)
                        continue;
                    (*l_240) = 0x6102277CL;
                }
            }
        }
    }
    else
    {
        long long l_269 = (-10L);
        int l_270 = 0x75B8AA76L;
        int l_271 = 0L;
        int *l_273 = &g_71;
        int **l_272 = &l_273;
        unsigned char ** const *l_284 = &l_90;
        (*l_272) = ((*l_183) = (((**l_183) > (((safe_rshift_func_int8_t_s_u((((((l_271 = (g_191 & ((safe_add_func_int16_t_s_s(((0x1F1FEEA0L > ((((safe_unary_minus_func_int8_t_s((!p_49))) , 0x99D42BC8L) , (-4L)) , (p_50 > 0x3F69FC186F313AD8LL))) >= ((safe_add_func_int8_t_s_s((g_135 > p_50), 0x12L)) != l_269)), 65535UL)) > l_270))) == g_161) , p_50) & p_50) > p_50), 7)) || g_161) || (**l_183))) , (void*)0));
        (*l_183) = ((((safe_add_func_int64_t_s_s((p_50 , (g_71 || (safe_sub_func_int16_t_s_s(g_168, (0UL < (((((p_49 != (safe_add_func_int32_t_s_s((safe_sub_func_uint8_t_u_u(g_191, (g_282 != (l_284 = l_284)))), (safe_mod_func_uint32_t_u_u(((p_50 > g_115) >= p_50), p_50))))) && g_71) && p_49) == g_8) ^ p_50)))))), p_50)) , 255UL) < (*p_48)) , &g_71);
    }
    return p_48;
}







static unsigned char * func_51(short p_52, unsigned p_53, long long p_54)
{
    int *l_78 = &g_71;
    unsigned char *l_79 = (void*)0;
    (*l_78) = p_54;
    return l_79;
}







static const char func_55(unsigned char * const p_56)
{
    unsigned l_60 = 5UL;
    unsigned l_69 = 0xCCFE983DL;
    int *l_70 = &g_71;
    (*l_70) &= (safe_lshift_func_int16_t_s_u((l_60 || g_2), ((safe_lshift_func_int16_t_s_u((((+(((l_60 <= (~l_60)) & (((safe_add_func_uint16_t_u_u(l_60, ((l_60 && ((((safe_add_func_int32_t_s_s(g_2, (safe_mul_func_uint16_t_u_u((((((l_60 , (0x5BL > g_8)) , l_60) , g_24) || l_69) == 0x1BL), l_69)))) , g_8) & g_2) ^ (-2L))) , 0xA324L))) ^ g_2) , l_60)) && l_69)) == l_69) == l_60), 7)) , l_60)));
    return g_8;
}





int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_8, "g_8", print_hash_value);
    transparent_crc(g_24, "g_24", print_hash_value);
    transparent_crc(g_71, "g_71", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_135, "g_135", print_hash_value);
    transparent_crc(g_161, "g_161", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_168, "g_168", print_hash_value);
    transparent_crc(g_191, "g_191", print_hash_value);
    transparent_crc(g_214, "g_214", print_hash_value);
    transparent_crc(g_251, "g_251", print_hash_value);
    transparent_crc(g_289, "g_289", print_hash_value);
    transparent_crc(g_320, "g_320", print_hash_value);
    transparent_crc(g_325, "g_325", print_hash_value);
    transparent_crc(g_327, "g_327", print_hash_value);
    transparent_crc(g_332, "g_332", print_hash_value);
    transparent_crc(g_373, "g_373", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_444, "g_444", print_hash_value);
    transparent_crc(g_458, "g_458", print_hash_value);
    transparent_crc(g_472, "g_472", print_hash_value);
    transparent_crc(g_572, "g_572", print_hash_value);
    transparent_crc(g_632, "g_632", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_776, "g_776", print_hash_value);
    transparent_crc(g_805, "g_805", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    transparent_crc(g_882, "g_882", print_hash_value);
    transparent_crc(g_890, "g_890", print_hash_value);
    transparent_crc(g_1068, "g_1068", print_hash_value);
    transparent_crc(g_1143, "g_1143", print_hash_value);
    transparent_crc(g_1145, "g_1145", print_hash_value);
    transparent_crc(g_1185, "g_1185", print_hash_value);
    transparent_crc(g_1186, "g_1186", print_hash_value);
    transparent_crc(g_1189, "g_1189", print_hash_value);
    transparent_crc(g_1193, "g_1193", print_hash_value);
    transparent_crc(g_1253, "g_1253", print_hash_value);
    transparent_crc(g_1260, "g_1260", print_hash_value);
    transparent_crc(g_1272, "g_1272", print_hash_value);
    transparent_crc(g_1337, "g_1337", print_hash_value);
    transparent_crc(g_1487, "g_1487", print_hash_value);
    transparent_crc(g_1495, "g_1495", print_hash_value);
    transparent_crc(g_1555, "g_1555", print_hash_value);
    transparent_crc(g_1630, "g_1630", print_hash_value);
    transparent_crc(g_1705, "g_1705", print_hash_value);
    transparent_crc(g_1873, "g_1873", print_hash_value);
    transparent_crc(g_1897, "g_1897", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
