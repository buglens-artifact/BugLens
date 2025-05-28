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



static volatile unsigned g_14 = 1UL;
static int g_18 = 0x1D52AA0AL;
static unsigned g_41 = 0UL;
static int g_55 = 0x92279191L;
static int g_106 = 0L;
static char g_111 = 1L;
static unsigned g_114 = 1UL;
static unsigned g_123 = 0UL;
static short g_139 = 0x4C67L;
static char g_140 = 1L;
static unsigned char g_167 = 255UL;
static int g_178 = 1L;
static int g_186 = 0xCBB7F497L;
static char g_266 = 0xCCL;
static unsigned char g_303 = 1UL;
static unsigned char g_352 = 0xCBL;
static unsigned short g_381 = 2UL;
static const unsigned char g_442 = 7UL;
static unsigned short g_546 = 0x9B7FL;
static unsigned g_672 = 0xA0E88F05L;
static unsigned short g_865 = 0x6708L;
static unsigned g_959[1][9][8] = {{{0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL, 0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL}, {0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL, 0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL}, {0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL, 0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL}, {0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL, 0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL}, {0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL, 0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL}, {0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL, 0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL}, {0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL, 0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL}, {0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL, 0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL}, {0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL, 0xF0608DC9L, 4294967295UL, 4294967295UL, 4294967295UL}}};
static char g_1000 = 4L;
static int g_1100 = 0xECCC0CB0L;
static unsigned short g_1213 = 0xB6DEL;
static char g_1367 = 0x3EL;
static unsigned g_1414 = 3UL;



static char func_1(void);
static unsigned short func_3(int p_4, unsigned char p_5, unsigned char p_6, short p_7);
static int func_8(int p_9, char p_10, unsigned p_11, unsigned short p_12, unsigned short p_13);
static int func_15(const short p_16);
static int func_21(unsigned p_22, unsigned p_23, const unsigned p_24);
static const int func_25(int p_26, unsigned p_27);
static unsigned func_35(short p_36, unsigned p_37, int p_38, unsigned p_39, unsigned p_40);
static unsigned func_43(const unsigned char p_44, char p_45, int p_46, unsigned short p_47, int p_48);
static int func_57(int p_58);
static unsigned char func_79(char p_80, short p_81, short p_82, unsigned p_83);
static char func_1(void)
{
    const int l_17[4][5] = {{(-1L), 0x092F644AL, (-1L), 0x092F644AL, (-1L)}, {(-1L), 0x092F644AL, (-1L), 0x092F644AL, (-1L)}, {(-1L), 0x092F644AL, (-1L), 0x092F644AL, (-1L)}, {(-1L), 0x092F644AL, (-1L), 0x092F644AL, (-1L)}};
    unsigned l_32 = 0xC1031C36L;
    int l_1413[4][6][3] = {{{(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}}, {{(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}}, {{(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}}, {{(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}, {(-1L), 0L, (-6L)}}};
    int i, j, k;
    g_1414 = (safe_unary_minus_func_uint16_t_u((l_1413[3][0][2] = func_3(func_8(((g_14 && func_15(l_17[0][0])) < l_17[0][0]), l_17[2][3], l_17[0][4], g_18, (+(safe_sub_func_uint16_t_u_u((func_21((func_25(g_18, ((safe_lshift_func_int8_t_s_u((((safe_mod_func_uint8_t_u_u(((g_18 | 0UL) || l_17[0][0]), g_18)) , 4294967295UL) && l_17[0][0]), g_18)) != l_32)) , g_546), l_17[0][0], l_17[1][3]) ^ g_18), 0x2007L)))), g_1000, g_18, l_17[0][2]))));
    return g_442;
}







static unsigned short func_3(int p_4, unsigned char p_5, unsigned char p_6, short p_7)
{
    char l_1230 = 0x0DL;
    int l_1255 = (-1L);
    int l_1256[4][1][2];
    unsigned char l_1294 = 0x6CL;
    unsigned l_1304 = 18446744073709551615UL;
    char l_1306 = 9L;
    unsigned short l_1412 = 0x8825L;
    int i, j, k;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 2; k++)
                l_1256[i][j][k] = 0xCF272769L;
        }
    }
    for (p_4 = 0; (p_4 <= 0); p_4 += 1)
    {
        unsigned l_1231 = 18446744073709551608UL;
        int l_1232 = (-10L);
        int l_1254 = 4L;
        int l_1295 = (-1L);
        unsigned l_1305 = 2UL;
        short l_1307 = 0x6160L;
        int l_1308 = (-9L);
        short l_1319 = 6L;
        unsigned short l_1344[9][4][7] = {{{0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}}, {{0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}}, {{0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}}, {{0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}}, {{0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}}, {{0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}}, {{0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}}, {{0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}}, {{0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}, {0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L, 0x09B4L, 0x0DA4L}}};
        int i, j, k;
        if (l_1230)
        {
            unsigned char l_1241 = 7UL;
            int l_1253 = 6L;
            g_55 = p_7;
            l_1253 = func_21(l_1231, (l_1232 = p_4), (func_25(((l_1256[0][0][0] = ((g_140 < ((l_1255 = (safe_add_func_int16_t_s_s((l_1254 = (p_6 & (safe_sub_func_uint16_t_u_u(((l_1230 >= (safe_add_func_uint16_t_u_u(g_266, ((safe_rshift_func_int16_t_s_s((l_1241 = g_1213), 4)) ^ (safe_rshift_func_uint16_t_u_u((safe_unary_minus_func_int16_t_s(((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0L, func_35(func_35((safe_mod_func_uint32_t_u_u(func_43(p_6, l_1231, l_1230, l_1253, p_5), 0x1D087F44L)), g_865, g_140, l_1231, p_6), g_111, l_1253, g_865, g_1213))), g_959[0][8][2])), g_178)) && g_178))), 4)))))) || 0x071BB3B0L), p_7)))), g_1213))) , l_1230)) || g_55)) != g_442), g_1213) | g_1000));
        }
        else
        {
            short l_1257 = 0L;
            int l_1258[5][4] = {{(-1L), (-6L), 0x162F98F5L, 0x162F98F5L}, {(-1L), (-6L), 0x162F98F5L, 0x162F98F5L}, {(-1L), (-6L), 0x162F98F5L, 0x162F98F5L}, {(-1L), (-6L), 0x162F98F5L, 0x162F98F5L}, {(-1L), (-6L), 0x162F98F5L, 0x162F98F5L}};
            int i, j;
            l_1258[3][1] = l_1257;
        }
        for (g_106 = 0; (g_106 >= 0); g_106 -= 1)
        {
            int l_1263[2];
            int l_1296 = 0x72C5C0FAL;
            int i;
            for (i = 0; i < 2; i++)
                l_1263[i] = 0L;
            if ((safe_add_func_uint8_t_u_u(0x5EL, p_4)))
            {
                l_1232 = (p_5 == (((g_381 = ((0x00L >= (!((g_139 = l_1232) == (safe_mul_func_int16_t_s_s(0xFF28L, 0xC804L))))) < ((l_1263[0] , ((func_43(p_5, g_18, p_7, g_672, p_5) > p_4) < g_114)) > l_1254))) & 0xAAF0L) <= p_6));
            }
            else
            {
                unsigned l_1264 = 0x5E4BEA81L;
                const unsigned char l_1265 = 1UL;
                int l_1266 = (-1L);
                int l_1267 = (-1L);
                l_1267 = (g_1100 = (func_35(g_1213, g_167, l_1263[0], p_4, (l_1264 = g_123)) , (l_1266 = ((((((func_35((g_139 = (!func_15(l_1265))), ((((p_7 , g_303) <= 0UL) ^ p_6) , 18446744073709551615UL), g_672, p_6, l_1254) <= g_266) <= g_1000) ^ p_4) | l_1230) && g_111) || l_1231))));
                g_1100 = (l_1263[0] = (((g_352 , p_4) , (p_5 & (p_4 >= (safe_sub_func_int32_t_s_s(g_111, (safe_mod_func_int32_t_s_s((-2L), g_959[0][5][3]))))))) < (l_1231 < l_1266)));
                if (l_1232)
                    break;
            }
            if ((safe_lshift_func_uint16_t_u_s(((safe_lshift_func_uint16_t_u_u(g_111, 5)) , (g_266 && g_55)), 13)))
            {
                short l_1278 = (-1L);
                l_1263[0] = ((l_1278 = (safe_mul_func_int8_t_s_s(l_1232, g_41))) , (l_1232 = g_178));
            }
            else
            {
                unsigned l_1287[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_1287[i] = 4294967291UL;
                g_178 = func_43(g_442, ((l_1296 = (safe_unary_minus_func_uint8_t_u((~((g_1100 = (safe_unary_minus_func_uint32_t_u((safe_add_func_int8_t_s_s(0x2AL, ((((l_1254 = func_15((p_7 = (safe_mod_func_uint8_t_u_u(((l_1295 = ((safe_mul_func_uint8_t_u_u(((((g_1000 = (((((l_1263[1] = l_1287[1]) > (p_5 , (p_7 == ((safe_add_func_int16_t_s_s((safe_rshift_func_int8_t_s_s(((g_41 >= ((safe_sub_func_int16_t_s_s(func_43((p_6 = (func_35(l_1294, l_1231, ((((l_1232 = func_43(p_6, g_106, p_6, g_186, p_6)) | l_1230) >= g_352) , p_4), l_1295, g_41) ^ (-6L))), g_442, p_4, l_1294, p_7), 0xBBA3L)) >= p_5)) | p_5), g_672)), l_1296)) | g_1100)))) ^ (-8L)) > g_303) , g_18)) < 253UL) , 1L) , p_7), 255UL)) >= 0x6DA3L)) != p_4), p_4))))) && p_6) > g_266) && 0x7CL)))))) > p_5))))) ^ g_41), g_178, l_1256[0][0][0], p_4);
            }
            for (g_1100 = 0; (g_1100 >= 0); g_1100 -= 1)
            {
                int l_1297 = 1L;
                int i, j, k;
                l_1297 = g_959[p_4][(p_4 + 3)][(g_106 + 5)];
                g_178 = g_959[p_4][(g_1100 + 6)][(g_1100 + 6)];
            }
        }
        l_1256[0][0][0] = (l_1308 = (l_1295 = ((safe_rshift_func_int16_t_s_s(((g_266 <= (0xD7A3C4FDL == p_4)) == 255UL), ((l_1232 = (~(safe_lshift_func_uint16_t_u_s(l_1232, (65528UL | ((l_1254 = func_79((!func_79((g_1000 = (safe_mod_func_uint32_t_u_u(l_1304, (~(l_1305 = (p_5 ^ (g_139 = g_865))))))), g_106, l_1306, l_1232)), p_6, g_865, l_1307)) , g_111)))))) <= p_6))) & (-1L))));
        for (g_123 = 0; (g_123 <= 0); g_123 += 1)
        {
            unsigned l_1318 = 9UL;
            int l_1334 = 3L;
            g_178 = g_186;
            g_178 = ((safe_unary_minus_func_int32_t_s(func_15(g_114))) != func_43(((safe_mod_func_int16_t_s_s(p_6, g_865)) , (safe_mod_func_int8_t_s_s(g_18, ((safe_mul_func_int8_t_s_s(0x71L, (g_167 = (safe_mod_func_uint16_t_u_u((func_35((g_139 = (l_1318 & (((p_4 >= p_7) != 246UL) | p_6))), p_6, l_1318, p_4, g_1000) <= 2L), l_1295))))) && 4294967294UL)))), g_1213, g_186, l_1294, l_1319));
            for (g_1100 = 0; (g_1100 <= 0); g_1100 += 1)
            {
                char l_1332 = 1L;
                int l_1349 = 4L;
                int l_1350 = 0x22E697A2L;
                for (g_140 = 0; (g_140 <= 0); g_140 += 1)
                {
                    short l_1333 = 1L;
                    int l_1335 = (-6L);
                    int i, j, k;
                    for (l_1319 = 0; (l_1319 >= 0); l_1319 -= 1)
                    {
                        int i, j, k;
                        l_1335 = (l_1334 = (((g_959[g_140][(l_1319 + 6)][(g_123 + 6)] != p_6) , (((safe_rshift_func_uint16_t_u_u(l_1256[2][0][0], (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u(func_35((p_7 = func_43(((((g_186 = (!l_1319)) , (65535UL < ((((((safe_sub_func_int32_t_s_s(l_1318, (safe_mul_func_int8_t_s_s((safe_mod_func_int8_t_s_s(g_114, g_41)), 0x97L)))) , 0x6B7D6BD0L) < g_41) && g_672) && g_546) > 0xD6L))) || l_1332) >= g_959[g_140][(l_1319 + 6)][(g_123 + 6)]), l_1333, p_7, g_865, g_352)), l_1333, l_1318, g_1213, g_672), 4294967293UL)), p_6)))) && 250UL) != l_1231)) , p_4));
                        g_55 = (g_106 = func_15(g_546));
                        l_1308 = 0x52E445C1L;
                    }
                    g_55 = (g_959[g_140][(p_4 + 3)][(p_4 + 2)] >= (safe_sub_func_uint32_t_u_u(((safe_mod_func_int16_t_s_s(((l_1350 = (l_1349 = ((safe_rshift_func_uint8_t_u_s((safe_add_func_int32_t_s_s(((l_1344[1][2][1] != ((-1L) || l_1256[0][0][0])) , 0xBFDAE423L), (l_1334 = g_303))), 6)) < (safe_add_func_int8_t_s_s((!(g_1000 , l_1255)), (safe_add_func_uint8_t_u_u(g_442, g_114))))))) == l_1332), g_266)) < g_442), 1L)));
                    g_106 = g_865;
                    return g_959[p_4][(g_140 + 4)][g_140];
                }
            }
        }
        for (l_1231 = 0; (l_1231 <= 0); l_1231 += 1)
        {
            unsigned short l_1357 = 65531UL;
            unsigned char l_1361 = 4UL;
            int l_1376 = 0x4A9A1545L;
            for (g_546 = 0; (g_546 <= 0); g_546 += 1)
            {
                short l_1358 = 0x40DEL;
                int l_1362 = 0x8428276EL;
                int i, j, k;
                l_1256[(g_546 + 1)][l_1231][(g_546 + 1)] = ((safe_mul_func_int8_t_s_s(g_959[l_1231][p_4][(p_4 + 5)], 255UL)) >= (func_79(l_1256[(p_4 + 3)][g_546][p_4], ((~(safe_rshift_func_int16_t_s_u(p_7, 8))) , (safe_lshift_func_uint16_t_u_u((l_1357 = (!(g_111 , l_1344[1][2][1]))), 10))), (g_139 = func_15((l_1358 > (safe_lshift_func_int8_t_s_s((!p_6), (l_1362 = func_35(p_6, p_7, g_123, l_1361, l_1231))))))), l_1255) ^ l_1254));
                for (l_1306 = 0; (l_1306 >= 0); l_1306 -= 1)
                {
                    unsigned char l_1370 = 0x58L;
                    unsigned char l_1374 = 0x0AL;
                    int l_1375[4][1];
                    int i, j, k;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 1; j++)
                            l_1375[i][j] = 0x79FB1416L;
                    }
                    if (((p_4 <= (g_959[g_546][(l_1231 + 8)][(l_1306 + 2)] = (((p_5 >= (65535UL | (safe_rshift_func_uint8_t_u_s(func_43(l_1361, g_140, (0x94L ^ ((safe_add_func_int8_t_s_s(7L, (+p_5))) == l_1308)), g_111, g_178), g_1367)))) != g_381) == p_5))) >= p_7))
                    {
                        char l_1373[5] = {0x93L, 0x81L, 0x93L, 0x81L, 0x93L};
                        int i;
                        l_1256[(g_546 + 1)][l_1231][(g_546 + 1)] = ((((safe_mod_func_uint32_t_u_u(4294967292UL, l_1370)) <= ((!((safe_mod_func_uint8_t_u_u((g_55 <= (-8L)), 5UL)) > (p_4 | ((p_7 = (!((func_79(g_959[g_546][(l_1231 + 8)][(l_1306 + 2)], (l_1373[0] , ((l_1373[0] > g_18) < g_1000)), g_865, l_1307) , l_1361) , l_1374))) <= g_672)))) || 1L)) ^ g_55) ^ 1UL);
                    }
                    else
                    {
                        g_106 = (l_1375[2][0] = g_186);
                    }
                }
            }
            l_1308 = (g_167 <= 0L);
            for (l_1232 = 0; (l_1232 <= 0); l_1232 += 1)
            {
                int l_1383 = 0x4532D89CL;
                int l_1405 = 8L;
                int i, j, k;
                l_1383 = (~((((l_1376 = 0x7EBD7E68L) | g_959[l_1232][(p_4 + 8)][l_1232]) ^ (l_1256[1][0][1] = ((safe_lshift_func_uint16_t_u_s(l_1232, (((((((safe_add_func_uint32_t_u_u((g_41 = (((g_106 = (p_7 , g_1367)) && (246UL != ((!((safe_mod_func_uint32_t_u_u(g_352, ((l_1256[2][0][0] , (g_167 = p_5)) | p_7))) <= g_106)) <= l_1361))) != g_865)), g_442)) == (-3L)) >= 0x13L) >= 1UL) < 1L) > p_4) | p_6))) < 0xFAE0L))) == (-9L)));
                l_1376 = g_1213;
                l_1383 = (l_1256[0][0][0] = (safe_lshift_func_int8_t_s_u(func_57(g_1367), 0)));
                for (l_1383 = (-16); (l_1383 >= (-1)); l_1383 = safe_add_func_uint32_t_u_u(l_1383, 4))
                {
                    int l_1394 = 0x196290AEL;
                    if (p_4)
                        break;
                    if ((g_1100 = 6L))
                    {
                        int l_1388 = 1L;
                        g_1100 = (l_1230 && g_1000);
                        l_1388 = p_5;
                        if (p_6)
                            break;
                        l_1394 = ((0x2BL <= (safe_mul_func_uint8_t_u_u(0xE3L, (((p_6 = (safe_mul_func_uint16_t_u_u(0x4DD8L, g_55))) ^ 3L) ^ g_123)))) ^ (safe_unary_minus_func_uint32_t_u(((g_186 == (((p_7 <= ((g_1213 < g_352) ^ g_106)) > 0UL) || 0xBEF3L)) >= l_1305))));
                    }
                    else
                    {
                        int l_1411 = 1L;
                        l_1394 = ((safe_lshift_func_uint8_t_u_u(l_1305, ((l_1256[3][0][0] = func_79((safe_rshift_func_int8_t_s_s((0L | (l_1254 = (0L >= ((+p_4) < g_959[0][2][6])))), (safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(func_43((l_1405 = (safe_mod_func_int16_t_s_s(p_4, g_167))), ((safe_unary_minus_func_uint32_t_u((((safe_lshift_func_uint16_t_u_s((((safe_lshift_func_int16_t_s_s(l_1394, p_5)) , l_1357) , p_5), l_1411)) || 0UL) && 0x21B5L))) < g_865), l_1230, l_1411, l_1255), 11)) < g_1367), l_1412)))), p_7, g_959[l_1232][(p_4 + 8)][l_1232], l_1344[1][2][1])) != g_865))) , p_7);
                    }
                }
            }
        }
    }
    return l_1304;
}







static int func_8(int p_9, char p_10, unsigned p_11, unsigned short p_12, unsigned short p_13)
{
    unsigned short l_1216[1];
    int l_1217 = 4L;
    const unsigned short l_1220 = 0UL;
    unsigned l_1228 = 0UL;
    int i;
    for (i = 0; i < 1; i++)
        l_1216[i] = 0x6009L;
    if ((l_1217 = (((-1L) && l_1216[0]) < p_9)))
    {
        unsigned char l_1221 = 0xA0L;
        unsigned short l_1222 = 0UL;
        int l_1223 = 1L;
        l_1223 = func_21((safe_mod_func_int32_t_s_s(((g_123 = func_43(func_43((g_167 = (l_1216[0] ^ 0x7E0A5D9EL)), func_15(l_1220), p_13, p_9, (+(-3L))), (p_10 = (g_111 = (g_41 , p_11))), g_41, p_11, l_1221)) , l_1216[0]), l_1222)), g_18, l_1222);
    }
    else
    {
        short l_1227 = (-1L);
        int l_1229 = 1L;
        g_106 = (l_1228 = (safe_sub_func_int32_t_s_s((safe_unary_minus_func_int32_t_s((l_1227 = p_13))), l_1220)));
        l_1229 = l_1227;
    }
    return p_10;
}







static int func_15(const short p_16)
{
    return p_16;
}







static int func_21(unsigned p_22, unsigned p_23, const unsigned p_24)
{
    int l_947 = 0x0A46E853L;
    const int l_982 = 0x80995AA5L;
    short l_1045[9] = {(-1L), (-1L), (-9L), (-1L), (-1L), (-9L), (-1L), (-1L), (-9L)};
    short l_1072 = (-1L);
    int l_1210 = 1L;
    short l_1214 = 0x8EF4L;
    short l_1215 = 0L;
    int i;
    if ((l_947 & 0xB9L))
    {
        unsigned short l_948 = 0x2ED3L;
        short l_949 = 0L;
        int l_994 = 0xDD460B0DL;
        char l_1004[2][1];
        const unsigned l_1029[5] = {1UL, 0UL, 1UL, 0UL, 1UL};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 1; j++)
                l_1004[i][j] = 0x43L;
        }
        l_949 = ((g_178 <= l_948) < (p_23 & (l_947 = g_352)));
        for (l_949 = 0; (l_949 <= 21); l_949++)
        {
            short l_969 = 0xBC4DL;
            int l_999[7][3] = {{(-1L), (-1L), 0x61C486ADL}, {(-1L), (-1L), 0x61C486ADL}, {(-1L), (-1L), 0x61C486ADL}, {(-1L), (-1L), 0x61C486ADL}, {(-1L), (-1L), 0x61C486ADL}, {(-1L), (-1L), 0x61C486ADL}, {(-1L), (-1L), 0x61C486ADL}};
            int i, j;
            g_55 = ((safe_lshift_func_uint16_t_u_u((safe_add_func_int8_t_s_s(g_266, l_948)), p_24)) && ((l_947 ^ ((g_139 = (l_949 >= (safe_unary_minus_func_int32_t_s(0x0673878EL)))) , ((safe_sub_func_uint16_t_u_u(p_24, p_23)) ^ l_949))) == 9UL));
            for (p_23 = 0; (p_23 <= 0); p_23 += 1)
            {
                int l_968 = 0x07CD26FCL;
                int l_983 = 9L;
                l_947 = ((((safe_mul_func_int8_t_s_s((((~((safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((g_266 = (g_55 == (((!(l_949 & (g_865 = 65534UL))) > (((g_303 = ((safe_sub_func_uint16_t_u_u(g_178, l_949)) , (l_968 = (p_22 , p_24)))) < (g_672 <= (p_24 , l_969))) ^ p_22)) ^ p_22))), 3)), l_947)) && 0x30098253L)) != l_947) & p_24), g_167)) , g_106) , p_22) > 4L);
                for (g_178 = 0; (g_178 <= 0); g_178 += 1)
                {
                    int l_993 = 0x5C2B74EBL;
                    int i, j, k;
                    if (g_959[g_178][g_178][(p_23 + 2)])
                        break;
                    l_983 = func_35(((safe_sub_func_uint16_t_u_u(((g_959[g_178][(p_23 + 4)][(p_23 + 7)] != (safe_add_func_int8_t_s_s(p_22, (!(func_79(g_959[g_178][(p_23 + 4)][(p_23 + 7)], g_186, g_959[g_178][(p_23 + 4)][(p_23 + 7)], (safe_mod_func_int32_t_s_s(p_24, func_35((~(!(g_106 != (((g_865 = l_969) ^ (((l_947 = (safe_rshift_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s(func_43((g_167 = (((safe_lshift_func_int16_t_s_u(g_352, 1)) < l_947) , 0xADL)), p_24, p_22, g_959[g_178][(p_23 + 4)][(p_23 + 7)], g_672), p_24)) >= g_123) , g_959[g_178][g_178][(p_23 + 2)]), 6))) == l_948) < 9UL)) & 1L)))), l_968, g_106, p_23, l_968)))) | 0L))))) && 0xFAL), g_381)) | l_982), g_959[g_178][g_178][(p_23 + 2)], p_24, g_959[g_178][g_178][(p_23 + 2)], g_178);
                    for (g_546 = 0; (g_546 <= 0); g_546 += 1)
                    {
                        short l_986 = 0x97CBL;
                        int l_1003 = 0xEA32A638L;
                        l_993 = (l_947 <= ((((safe_sub_func_int32_t_s_s(l_986, l_986)) < (!p_23)) ^ (0x8EL | (1L ^ (safe_add_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u((l_949 < (safe_lshift_func_uint16_t_u_s(l_982, 6))), (65535UL && p_23))) , 0xEB4C5C12L) | l_948), g_140))))) != g_140));
                        l_999[6][1] = func_15(((((p_24 <= p_22) && (l_994 = (g_139 , func_15((g_186 == (l_968 ^ p_22)))))) , (p_22 && (((+(safe_lshift_func_uint16_t_u_u(((safe_mod_func_int8_t_s_s((0x326DL || l_983), 0x91L)) || p_22), p_23))) && g_106) | 0UL))) < g_178));
                        l_999[4][1] = ((func_43((func_79((l_947 , (func_35(g_1000, func_43(((l_1003 = (p_22 <= (g_139 , (safe_mul_func_uint8_t_u_u(p_24, ((func_15((6UL != p_24)) ^ 1UL) > g_18)))))) || g_123), p_23, l_986, l_983, l_983), p_23, l_949, g_106) | g_303)), p_23, g_959[0][3][3], l_1004[0][0]) ^ l_986), p_24, g_442, g_381, p_24) != 0x7661L) >= l_968);
                        if (l_949)
                            continue;
                    }
                }
            }
            l_947 = l_969;
            if (g_266)
                break;
        }
        for (g_139 = (-20); (g_139 > (-5)); ++g_139)
        {
            unsigned l_1007[9];
            int l_1018 = 0xC9631548L;
            unsigned char l_1084 = 0UL;
            unsigned char l_1107 = 0xC8L;
            int l_1125 = (-8L);
            int l_1126 = 0x2E8C3D03L;
            int i;
            for (i = 0; i < 9; i++)
                l_1007[i] = 0xECA77017L;
            g_178 = (5UL || (l_1007[1] > ((((l_947 = g_352) >= g_303) != ((safe_lshift_func_int8_t_s_u((((0xB9B1L & (safe_add_func_uint32_t_u_u(l_982, (safe_mod_func_int32_t_s_s(g_352, l_982))))) , 1L) , l_1007[1]), 2)) || g_442)) , p_22)));
            l_947 = ((l_1018 = (safe_lshift_func_int16_t_s_u((g_41 | func_15((safe_sub_func_int8_t_s_s((p_24 , (l_1004[0][0] >= l_947)), 251UL)))), 4))) >= func_43(g_1000, p_22, g_266, l_982, p_23));
            if ((safe_lshift_func_uint16_t_u_s((g_546 = ((p_24 <= (safe_lshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(0x75L, (~(0xAC2DBA04L < p_24)))), (l_994 = (g_114 == (l_1007[1] , (func_35(((l_1018 = (safe_add_func_int8_t_s_s((((safe_mod_func_int32_t_s_s(0x91FE5DA1L, (l_947 = 0x0065CDD7L))) != ((func_15(l_1029[2]) || (-1L)) == l_982)) , 0x01L), 0x03L))) > l_1007[1]), g_1000, g_381, p_24, l_1004[0][0]) & p_23))))))) || g_546)), 0)))
            {
                unsigned short l_1030[9][10] = {{0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL}, {0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL}, {0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL}, {0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL}, {0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL}, {0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL}, {0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL}, {0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL}, {0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL, 65526UL, 7UL, 0xAAFCL, 7UL}};
                int i, j;
                return l_1030[5][2];
            }
            else
            {
                unsigned l_1031 = 0x1DBA312EL;
                const unsigned short l_1046 = 0x1025L;
                int l_1047 = (-1L);
                int l_1110 = 0xAF8013BDL;
                if ((func_15(l_948) ^ (g_442 || l_1031)))
                {
                    const unsigned l_1036 = 18446744073709551615UL;
                    if ((l_1047 = (p_22 , (~((((((safe_sub_func_int32_t_s_s(1L, l_1031)) , (g_18 , l_1007[0])) <= (l_947 = (safe_sub_func_int32_t_s_s((l_1036 > (safe_add_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_u(0x81L, 3)), (((safe_mul_func_uint16_t_u_u(((l_1018 , (((safe_sub_func_int8_t_s_s(l_948, l_1031)) || g_672) ^ l_947)) == l_1045[2]), p_23)) , l_1046) <= 4294967295UL)))), g_672)))) , l_1036) , (-1L)) | p_22)))))
                    {
                        l_1018 = p_23;
                        return g_114;
                    }
                    else
                    {
                        g_178 = g_178;
                        g_106 = ((+(g_865 = g_41)) , g_352);
                    }
                }
                else
                {
                    unsigned l_1048[5][4] = {{0UL, 0xC0FA8FC4L, 18446744073709551614UL, 18446744073709551614UL}, {0UL, 0xC0FA8FC4L, 18446744073709551614UL, 18446744073709551614UL}, {0UL, 0xC0FA8FC4L, 18446744073709551614UL, 18446744073709551614UL}, {0UL, 0xC0FA8FC4L, 18446744073709551614UL, 18446744073709551614UL}, {0UL, 0xC0FA8FC4L, 18446744073709551614UL, 18446744073709551614UL}};
                    int l_1049[9];
                    int i, j;
                    for (i = 0; i < 9; i++)
                        l_1049[i] = 1L;
                    l_1049[7] = l_1048[2][2];
                }
                for (l_1018 = 8; (l_1018 >= 0); l_1018 -= 1)
                {
                    char l_1050 = 0xCBL;
                    int l_1071 = 0x3BB48223L;
                    int l_1127 = 1L;
                    int i;
                    l_1050 = 0xFC1E55F0L;
                    if ((safe_add_func_uint32_t_u_u(((((((safe_lshift_func_uint8_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(l_1045[l_1018], ((safe_rshift_func_int8_t_s_u(func_35(((safe_mul_func_uint16_t_u_u((g_865 = (func_15(g_114) != (p_23 = (g_672 = (g_41 = g_381))))), ((safe_mul_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s((g_442 | g_303), (safe_sub_func_int16_t_s_s(((l_1071 = l_1047) | (l_1045[l_1018] < (func_15(p_24) != g_55))), g_266)))), 0)) ^ 4UL) ^ 0x57L), p_24)) > 6L))) ^ p_24), g_123, l_1045[l_1018], g_266, p_24), g_167)) && g_186))), 15)) , 0UL) == l_1045[l_1018]), p_22)) >= 4UL) < l_1018) && p_22) , p_22) != l_1072), g_139)))
                    {
                        int l_1083[10][3] = {{0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}, {0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}, {0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}, {0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}, {0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}, {0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}, {0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}, {0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}, {0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}, {0x88653BBFL, 0x16BF4F18L, 0xD9259E55L}};
                        int i, j;
                        l_994 = (((g_178 = g_139) == (l_1007[1] && ((l_1084 = (safe_mul_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((4294967295UL || ((safe_lshift_func_int16_t_s_u((((g_18 && ((safe_add_func_uint16_t_u_u(65529UL, (p_23 , (safe_mul_func_uint8_t_u_u(((((((((0x487AL <= p_24) & ((g_303 , l_1083[6][1]) < l_982)) & l_1047) || 0xC3AEL) , g_106) && g_139) > p_24) || l_1045[5]), l_948))))) && g_140)) & g_381) && l_1046), 4)) < 0x84A4L)), l_1045[5])), g_266))) , p_24))) < p_23);
                        g_178 = 0x1A0AA267L;
                    }
                    else
                    {
                        unsigned l_1097 = 0xC709A505L;
                        int l_1098 = (-1L);
                        int l_1099[6][7] = {{0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L, 0x8EE279ADL, 0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L}, {0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L, 0x8EE279ADL, 0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L}, {0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L, 0x8EE279ADL, 0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L}, {0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L, 0x8EE279ADL, 0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L}, {0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L, 0x8EE279ADL, 0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L}, {0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L, 0x8EE279ADL, 0x62F99EE7L, 0x8EE279ADL, 0x49BF4969L}};
                        int i, j;
                        l_1099[4][0] = (safe_rshift_func_uint8_t_u_s((g_167 = ((l_1098 = (g_178 <= (safe_mod_func_int16_t_s_s(((func_35((l_1045[l_1018] = p_22), ((1L == (safe_lshift_func_int16_t_s_u((+(func_15(g_266) , ((safe_sub_func_uint32_t_u_u(l_949, (safe_lshift_func_int8_t_s_s(g_18, p_22)))) != (g_303 = (safe_sub_func_int32_t_s_s((g_442 | g_167), (-2L))))))), 5))) < 0UL), l_1097, l_982, p_24) ^ 0xA74D49D0L) != g_41), p_22)))) , g_865)), 0));
                        l_947 = ((g_1100 = (0xCAB7L == p_24)) != (func_43(l_1031, ((((((safe_sub_func_int8_t_s_s(p_22, (safe_lshift_func_int16_t_s_u(((l_1127 = (safe_rshift_func_uint8_t_u_u(l_1107, (((safe_rshift_func_int16_t_s_u((l_1110 = (l_994 = (-1L))), 0)) | ((safe_sub_func_int32_t_s_s((((((safe_rshift_func_uint16_t_u_u(func_15(((safe_add_func_uint16_t_u_u((g_381 = g_114), 5L)) < ((l_1126 = (safe_mul_func_int8_t_s_s((l_1125 = (safe_add_func_int32_t_s_s((!(g_106 = (safe_mul_func_uint16_t_u_u((safe_mul_func_int16_t_s_s(9L, l_1084)), g_114)))), 0xD1BDDDBBL))), g_442))) > 0L))), 0)) != 0xA7C3F542L) && (-1L)) , 0x1083L) == 0UL), (-1L))) , g_41)) < g_442)))) | g_546), l_1045[l_1018])))) && g_55) >= 0xD8L) >= 0x27L) , 3L) , 0x3AL), p_23, l_1029[2], g_114) >= 0UL));
                    }
                    for (l_1071 = 8; (l_1071 >= 0); l_1071 -= 1)
                    {
                        int l_1150 = 0xD711E544L;
                        g_106 = (safe_lshift_func_uint8_t_u_s((safe_add_func_int8_t_s_s((g_140 = (!(safe_mul_func_int8_t_s_s(((g_55 = (l_1126 = func_15(l_1031))) == (+(g_1100 = (g_178 = p_24)))), (safe_mod_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s(func_15(func_35(p_23, ((0xDBL & (safe_rshift_func_uint8_t_u_s((l_994 = ((g_167 , (((safe_mul_func_uint8_t_u_u(p_22, g_140)) >= (p_22 <= l_1045[2])) | 1L)) >= p_22)), l_1071))) & p_22), g_123, p_24, l_1045[l_1018])), g_167)), l_1007[1])))))), g_123)), p_23));
                        l_1150 = (l_1125 = func_15(((safe_add_func_uint32_t_u_u(0x31FD13F4L, (g_106 = (safe_add_func_uint32_t_u_u(((safe_mul_func_uint8_t_u_u(((((safe_add_func_uint16_t_u_u((l_1047 , (l_1150 , (safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u(((l_1127 = (l_994 = (safe_mul_func_int16_t_s_s(((((safe_sub_func_uint16_t_u_u((safe_add_func_uint8_t_u_u(func_15(g_865), p_22)), l_1031)) , 4L) <= p_23) & p_23), 0x48B2L)))) & g_865), 1UL)), p_24)))), l_1150)) , p_23) > 65528UL) && l_1045[l_1018]), (-1L))) >= g_865), 4294967295UL))))) , p_22)));
                    }
                }
                for (p_22 = 0; (p_22 <= 8); p_22 += 1)
                {
                    int l_1169 = (-2L);
                    unsigned l_1175 = 18446744073709551615UL;
                    int i;
                    l_1169 = ((((l_1045[p_22] = (safe_lshift_func_int8_t_s_u(l_1045[p_22], (l_1110 != func_43(g_178, (safe_mod_func_int16_t_s_s(1L, (safe_sub_func_uint32_t_u_u((g_114 <= (safe_sub_func_uint8_t_u_u(g_865, 251UL))), (-6L))))), func_43(g_442, p_24, p_24, p_23, l_1045[p_22]), g_106, l_1045[p_22]))))) & 65535UL) && p_23) | p_22);
                    for (g_352 = 0; (g_352 <= 0); g_352 += 1)
                    {
                        int l_1172[4];
                        int i, j, k;
                        for (i = 0; i < 4; i++)
                            l_1172[i] = 0x31B4BEC6L;
                        l_947 = ((g_959[g_352][g_352][(g_352 + 4)] = 0xB61B25AAL) == ((g_266 >= (safe_mul_func_uint16_t_u_u(func_35(l_1029[2], g_178, (((((g_140 = (((g_106 = l_1047) == (l_994 = (((l_1172[1] | (((g_672 = 0UL) >= (+(safe_rshift_func_uint8_t_u_s(l_1029[2], 2)))) > g_546)) > p_24) != l_949))) >= g_140)) | p_24) < l_1045[p_22]) != l_1007[6]) , 0xA72F4D86L), l_1175, l_1175), g_167))) & g_178));
                        l_1169 = p_24;
                        l_1172[3] = func_35(g_140, l_1045[p_22], func_35((l_1169 = ((safe_lshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s((safe_lshift_func_int8_t_s_u(l_949, 4)), func_15((0L & func_43((((g_959[g_352][p_22][(g_352 + 1)] , (g_865 = (func_35(p_23, ((p_24 <= (func_43((safe_mod_func_uint16_t_u_u((func_15((func_35(((safe_sub_func_uint32_t_u_u(0xDA0D22A1L, 4294967289UL)) != l_1046), p_22, p_23, g_139, p_24) != 1UL)) , 0xBCE5L), 0x9C04L)), p_24, g_1000, g_672, p_23) | 8UL)) ^ p_23), p_24, p_24, l_1045[p_22]) < p_24))) > p_24) , l_948), p_22, p_22, g_139, l_1045[p_22]))))), 7)) >= p_23)), p_23, g_111, g_123, p_22), g_1000, p_24);
                    }
                }
            }
            l_994 = (g_178 = (safe_lshift_func_int16_t_s_u(g_266, 1)));
        }
    }
    else
    {
        return l_1045[2];
    }
    for (g_41 = 0; (g_41 >= 27); g_41 = safe_add_func_uint16_t_u_u(g_41, 9))
    {
        int l_1194 = 0xBE700BB5L;
        int l_1211 = (-7L);
        int l_1212[1];
        int i;
        for (i = 0; i < 1; i++)
            l_1212[i] = 0xB4E26769L;
        g_178 = ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_s((func_43((0xBAL >= (l_1194 != (safe_mul_func_int16_t_s_s(((g_1213 = ((((0xD6B129D8L ^ l_1045[2]) == p_22) & (func_35((g_139 = ((safe_lshift_func_int8_t_s_u(func_43((l_947 = ((func_43((l_1211 = (g_139 | (safe_mul_func_int8_t_s_s((safe_lshift_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s(func_15(((l_1210 = (safe_rshift_func_uint16_t_u_s((255UL != (safe_mul_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(((l_1194 == g_18) >= 0x3B0CL))), p_22))), 13))) ^ p_22)), g_55)) == l_1194), p_22)), 255UL)))), p_22, g_167, g_546, l_947) >= g_123) & g_186)), g_352, p_22, g_114, l_1194), g_139)) > g_18)), p_24, l_1212[0], l_982, g_303) ^ 0x5B06L)) == p_23)) <= g_178), p_24)))), l_1072, g_381, l_1212[0], l_1072) & 8L), 7)), 5)) , p_23);
    }
    l_1215 = ((l_947 = l_1214) >= p_23);
    return p_23;
}







static const int func_25(int p_26, unsigned p_27)
{
    int l_42 = (-5L);
    int l_49 = 0x1D0C0B80L;
    int l_54[2];
    unsigned short l_493 = 0x107FL;
    char l_573 = 0x77L;
    short l_631 = 1L;
    const unsigned l_704 = 0x94A2D674L;
    unsigned l_748 = 0x73E63186L;
    unsigned short l_753[10];
    int l_796[5];
    char l_894 = (-1L);
    const unsigned l_928 = 0UL;
    unsigned short l_929 = 0x97BCL;
    unsigned l_938[1][7] = {{4294967289UL, 0x5F95A988L, 4294967289UL, 0x5F95A988L, 4294967289UL, 0x5F95A988L, 4294967289UL}};
    int i, j;
    for (i = 0; i < 2; i++)
        l_54[i] = 8L;
    for (i = 0; i < 10; i++)
        l_753[i] = 0xDB90L;
    for (i = 0; i < 5; i++)
        l_796[i] = (-4L);
    if (((safe_rshift_func_int8_t_s_u(p_26, 7)) < func_35(g_18, (p_27 = (g_18 , (l_42 = (g_41 = 18446744073709551606UL)))), p_26, g_18, func_43(p_26, l_49, (g_55 = (~(safe_sub_func_uint8_t_u_u(func_15(func_15((l_54[1] = (safe_mod_func_uint8_t_u_u((p_26 || p_26), 7UL))))), p_26)))), g_18, g_18))))
    {
        int l_59 = 1L;
        l_59 = func_57(l_59);
    }
    else
    {
        unsigned short l_421[6] = {0xB49BL, 0xB49BL, 0xD1D2L, 0xB49BL, 0xB49BL, 0xD1D2L};
        int l_494 = 0x61F404C8L;
        const int l_513[2] = {0xC58D41E6L, 0xC58D41E6L};
        short l_563[1];
        int i;
        for (i = 0; i < 1; i++)
            l_563[i] = 0x35E1L;
        g_178 = 0xEB3FEC1FL;
        for (g_139 = 0; (g_139 <= 16); ++g_139)
        {
            unsigned l_422 = 7UL;
            int l_438 = 0x374226B9L;
            unsigned char l_460 = 0xD8L;
            int l_492[8] = {1L, 0x707B15FAL, 1L, 0x707B15FAL, 1L, 0x707B15FAL, 1L, 0x707B15FAL};
            int i;
            for (g_303 = 0; (g_303 > 31); ++g_303)
            {
                int l_447 = 0x6A073343L;
                int l_461 = 0L;
                for (p_26 = 0; (p_26 > (-10)); p_26 = safe_sub_func_int32_t_s_s(p_26, 6))
                {
                    unsigned char l_418[1];
                    int l_439 = 9L;
                    int i;
                    for (i = 0; i < 1; i++)
                        l_418[i] = 0UL;
                    l_54[0] = (g_186 != ((l_422 = (((((-9L) != g_381) , p_27) , (((g_178 = l_418[0]) && (g_114 , ((((g_41 = (((safe_mul_func_uint16_t_u_u(((p_26 && 0x24293831L) < g_381), 0xBA3DL)) <= g_186) , 1UL)) ^ 4294967292UL) > l_421[5]) != 1UL))) , l_421[5])) , p_27)) , 0x185C5583L));
                    if (p_26)
                    {
                        unsigned l_433[6] = {0UL, 1UL, 0UL, 1UL, 0UL, 1UL};
                        int i;
                        g_178 = (safe_add_func_int32_t_s_s(((safe_lshift_func_uint16_t_u_u((((safe_add_func_uint16_t_u_u(1UL, (safe_add_func_uint32_t_u_u((safe_lshift_func_int16_t_s_s(l_421[5], ((((l_433[3] == g_106) ^ 1L) <= (safe_mul_func_uint8_t_u_u(g_381, (g_352 = l_418[0])))) | (safe_mul_func_uint8_t_u_u(p_26, ((l_438 = (+255UL)) , g_266)))))), 0x6456F045L)))) & 0xF4E722B1L) , 0xB1DBL), g_167)) , g_114), g_140));
                        return l_422;
                    }
                    else
                    {
                        char l_472 = 0xC1L;
                        g_55 = (func_35(p_27, (((g_140 = (l_439 = p_26)) , (safe_add_func_uint16_t_u_u(g_442, l_421[5]))) == (((func_35(g_18, l_421[5], l_438, ((((safe_mul_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_s(l_447, (g_114 && p_27))) , 65526UL), p_26)) | 5L) >= 0L) != 0xE21BC243L), g_186) , l_49) > l_422) > g_123)), g_381, g_178, g_41) , p_26);
                        l_461 = (((safe_lshift_func_int8_t_s_u(((p_27 > (safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((+(l_439 = g_266)), 0)), (safe_mul_func_int8_t_s_s((safe_mod_func_int32_t_s_s((safe_sub_func_int32_t_s_s(p_27, (l_54[0] = (g_55 = (-1L))))), p_27)), (l_460 , (-8L))))))) , l_422), (l_438 == (-1L)))) || p_27) & 0x8ED6L);
                        g_106 = ((g_266 ^ g_140) <= (255UL ^ (safe_sub_func_uint16_t_u_u((1UL || p_27), (safe_lshift_func_int16_t_s_u(((safe_lshift_func_uint8_t_u_s(0x7EL, 4)) | ((safe_add_func_int16_t_s_s((safe_add_func_uint16_t_u_u((!(g_106 == 0x3ED7L)), l_54[1])), l_472)) != 0xA2L)), g_352))))));
                    }
                }
                for (g_266 = 1; (g_266 >= 0); g_266 -= 1)
                {
                    unsigned l_473[9][1][3] = {{{0x730C4FFEL, 4294967295UL, 0UL}}, {{0x730C4FFEL, 4294967295UL, 0UL}}, {{0x730C4FFEL, 4294967295UL, 0UL}}, {{0x730C4FFEL, 4294967295UL, 0UL}}, {{0x730C4FFEL, 4294967295UL, 0UL}}, {{0x730C4FFEL, 4294967295UL, 0UL}}, {{0x730C4FFEL, 4294967295UL, 0UL}}, {{0x730C4FFEL, 4294967295UL, 0UL}}, {{0x730C4FFEL, 4294967295UL, 0UL}}};
                    int i, j, k;
                    for (l_49 = 1; (l_49 >= 0); l_49 -= 1)
                    {
                        int i;
                        return l_421[(l_49 + 4)];
                    }
                    l_54[g_266] = 0xD501CAF7L;
                    if (((l_461 <= (-5L)) >= (-3L)))
                    {
                        p_26 = l_42;
                        l_473[6][0][1] = (-2L);
                    }
                    else
                    {
                        g_106 = l_438;
                        g_178 = ((safe_sub_func_uint8_t_u_u(8UL, p_27)) && p_26);
                        g_106 = 0x25314A50L;
                        if (g_139)
                            continue;
                    }
                    g_55 = ((safe_rshift_func_uint8_t_u_u(((func_15(g_381) == ((safe_sub_func_int8_t_s_s((((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u((g_106 >= (safe_lshift_func_uint8_t_u_u(0UL, 3))), 1)), 6)) > l_460) ^ func_35((safe_sub_func_int16_t_s_s(p_26, (g_266 , p_27))), func_35((safe_lshift_func_uint16_t_u_u((((l_492[5] = ((((safe_rshift_func_int16_t_s_u((l_54[1] = l_54[0]), 8)) , g_55) | 0L) == l_461)) && (-4L)) , p_26), g_381)), g_442, g_55, g_114, g_178), p_26, l_421[0], l_493)), l_494)) <= l_473[6][0][0])) , g_140), 1)) >= g_111);
                }
            }
        }
        for (g_55 = 16; (g_55 < 20); g_55++)
        {
            unsigned l_517[5] = {0x6B886002L, 3UL, 0x6B886002L, 3UL, 0x6B886002L};
            int l_521 = 0xAED8941FL;
            int l_526[6][1][3] = {{{0x7B84E984L, 0x7B84E984L, 0xF0C3CF87L}}, {{0x7B84E984L, 0x7B84E984L, 0xF0C3CF87L}}, {{0x7B84E984L, 0x7B84E984L, 0xF0C3CF87L}}, {{0x7B84E984L, 0x7B84E984L, 0xF0C3CF87L}}, {{0x7B84E984L, 0x7B84E984L, 0xF0C3CF87L}}, {{0x7B84E984L, 0x7B84E984L, 0xF0C3CF87L}}};
            int l_542 = (-1L);
            char l_585 = 0x0DL;
            int i, j, k;
            l_494 = (((safe_lshift_func_uint8_t_u_u(((g_106 , (((safe_mod_func_int8_t_s_s(func_35((g_139 = (safe_add_func_int8_t_s_s(p_27, (g_266 = g_139)))), g_41, p_26, p_27, (g_123 = func_15(l_54[0]))), 0x87L)) < p_26) | p_26)) , g_114), p_26)) | 0L) >= 0L);
            for (g_41 = (-9); (g_41 == 25); ++g_41)
            {
                unsigned short l_533 = 0x6424L;
                for (p_26 = 0; (p_26 > (-20)); p_26 = safe_sub_func_int32_t_s_s(p_26, 3))
                {
                    int l_518 = (-1L);
                    int l_543 = 0x480F26E6L;
                    l_49 = 5L;
                    for (g_123 = 0; (g_123 > 17); ++g_123)
                    {
                        int l_514 = 0xC1710C65L;
                        l_54[1] = (g_106 = (safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((l_513[1] , (((l_494 = l_514) > p_26) || g_442)), (g_381 = 1UL))), (((safe_mod_func_uint16_t_u_u(l_517[1], ((((p_27 ^ l_518) && (l_42 < 0x85D8E012L)) & p_27) && (-1L)))) > p_27) ^ 0x19E8L))));
                        g_106 = func_35(g_106, l_517[4], (g_41 != p_26), (l_54[1] = g_186), (g_114 = (251UL && g_303)));
                        g_106 = func_35((g_442 == (((safe_rshift_func_uint16_t_u_u((l_526[5][0][1] = ((l_521 = 0x9004EAEBL) , ((l_494 = (l_517[1] || l_54[0])) ^ func_15((safe_sub_func_uint32_t_u_u(l_518, (l_42 | (safe_lshift_func_uint16_t_u_s(g_111, g_266))))))))), 3)) != 0x24812E44L) || p_26)), g_114, l_518, p_26, p_27);
                        l_518 = (l_518 == (((safe_rshift_func_int16_t_s_u(func_35(g_303, (safe_mod_func_int8_t_s_s((l_42 | (safe_mod_func_int8_t_s_s((l_533 < func_15((((!g_106) != (((safe_mod_func_int16_t_s_s(g_442, func_35((g_139 = (safe_mod_func_int32_t_s_s((l_494 = func_15((l_543 = ((safe_lshift_func_int8_t_s_u((((l_514 && (p_26 || ((((safe_rshift_func_uint16_t_u_u((255UL && g_55), 4)) , l_542) < l_517[0]) == g_114))) == l_514) <= 255UL), 3)) || 0x3EL)))), p_26))), g_18, p_26, p_26, p_27))) , g_381) < p_27)) != 8UL))), 0x1DL))), (-5L))), g_18, g_303, p_26), g_381)) ^ p_27) | 1L));
                    }
                }
            }
            g_106 = func_15((+(+(((safe_rshift_func_int8_t_s_s(0xA1L, 6)) <= (g_139 = (func_35((l_54[0] = 0L), (p_26 && g_546), (g_140 ^ ((safe_lshift_func_uint16_t_u_u((l_49 = ((g_111 = (p_26 , (func_35(p_27, (0x4D44ACA6L & (safe_add_func_uint16_t_u_u((0x4D4F22A7L | l_421[5]), l_526[5][0][1]))), p_26, p_26, l_42) || 6UL))) && g_140)), 1)) >= g_266)), g_18, l_517[1]) ^ 0x4EL))) , p_26))));
            if (((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((l_573 = ((func_79((l_421[5] | (((l_526[5][0][1] = (g_41 = p_27)) > (((safe_mod_func_uint16_t_u_u(((((safe_add_func_int16_t_s_s((l_42 = (func_35((l_494 = (-1L)), func_15((safe_rshift_func_uint8_t_u_s(l_563[0], (p_26 >= (safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int32_t_s(g_55)), 10)), ((((safe_add_func_int8_t_s_s((l_521 = ((+p_27) & ((safe_lshift_func_int16_t_s_s((g_139 = g_18), 10)) , g_55))), p_27)) && l_54[1]) <= p_27) && g_546))))))), g_106, p_27, g_123) | 3L)), p_27)) , l_563[0]) || 65535UL) != g_18), l_421[5])) >= l_513[1]) ^ p_26)) < 5UL)), g_111, g_106, p_27) > g_442) == g_186)), 14)), l_563[0])) >= 0xF7L))
            {
                unsigned l_574 = 0xEC40709CL;
                g_106 = l_574;
            }
            else
            {
                char l_581[7][10][3] = {{{0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}}, {{0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}}, {{0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}}, {{0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}}, {{0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}}, {{0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}}, {{0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}, {0xD0L, (-10L), (-10L)}}};
                int l_584 = 0L;
                int i, j, k;
                p_26 = g_303;
                l_585 = (p_26 = ((((l_421[5] ^ (((g_111 = (((((l_584 = ((((safe_rshift_func_int16_t_s_u(((l_526[5][0][1] = p_26) != (safe_mod_func_int8_t_s_s((g_111 >= p_27), (safe_rshift_func_int8_t_s_s(l_542, (func_35((l_542 == l_581[3][3][2]), p_26, ((safe_mul_func_int16_t_s_s((l_494 = (l_581[3][6][0] && 6UL)), l_513[1])) , l_581[4][0][0]), l_563[0], l_54[1]) ^ 0x3AL)))))), 5)) > p_27) , 0UL) && 252UL)) >= g_178) != g_266) >= g_186) != p_27)) >= 1UL) < 1UL)) && l_49) || p_26) , (-3L)));
                if (l_49)
                    break;
            }
        }
    }
    p_26 = (p_27 , func_15(l_49));
    if ((safe_rshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_s(g_167, func_35(((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_u(((l_49 = (l_493 , g_178)) <= (((g_139 = (-10L)) > (1L | l_493)) <= (l_573 < g_381))), 7)), (p_26 , l_573))) , g_266), p_27, g_352, g_303, g_381))), g_41)))
    {
        char l_594 = 0L;
        int l_599[4] = {1L, 0x8A3CB5E6L, 1L, 0x8A3CB5E6L};
        unsigned l_655 = 0x257558D9L;
        short l_726 = 1L;
        unsigned short l_783[2];
        int l_797 = (-8L);
        int i;
        for (i = 0; i < 2; i++)
            l_783[i] = 0x6645L;
        p_26 = (0xC9L != l_594);
        if (((l_594 && (((l_54[0] = l_493) , 0x4CL) | 1UL)) , ((0L && 0L) && (g_41 = (l_49 = func_79((l_54[1] = l_54[0]), p_27, ((safe_lshift_func_int8_t_s_s(1L, 6)) , 0x34B0L), p_26))))))
        {
            int l_608 = 0L;
            unsigned short l_618 = 65534UL;
            short l_671 = 0L;
            p_26 = p_27;
            if ((safe_rshift_func_int16_t_s_u((l_599[2] = ((g_381 , p_27) <= 0xB4C0L)), ((safe_rshift_func_int16_t_s_u((((safe_sub_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_int8_t_s_s((g_140 = 0xB6L), p_26)), 0x08L)), l_594)) > g_106) , (65527UL & 0x8B15L)), 15)) & l_608))))
            {
                return g_55;
            }
            else
            {
                unsigned l_615 = 4294967293UL;
                for (g_352 = 0; (g_352 <= 1); g_352 += 1)
                {
                    int l_641[5][1] = {{1L}, {1L}, {1L}, {1L}, {1L}};
                    int l_642 = 0x92D113E6L;
                    int i, j;
                    l_54[g_352] = (l_54[g_352] >= p_26);
                    for (g_381 = 0; (g_381 <= 1); g_381 += 1)
                    {
                        int l_640 = 0x9F1F1DE7L;
                        int i;
                        l_54[g_381] = l_599[2];
                        l_42 = (safe_mod_func_int16_t_s_s((l_54[0] = (((safe_rshift_func_int8_t_s_u(p_26, (safe_sub_func_uint16_t_u_u(l_615, (safe_add_func_int32_t_s_s(0xF3C7F4FBL, p_27)))))) , l_618) , (safe_sub_func_int8_t_s_s(l_599[2], (safe_lshift_func_int8_t_s_s(l_54[g_352], (l_54[g_381] ^ (((safe_lshift_func_uint8_t_u_s((g_303 = (safe_add_func_uint32_t_u_u((safe_mul_func_uint8_t_u_u(l_54[g_352], 247UL)), l_599[2]))), g_139)) >= 0UL) | g_139)))))))), l_631));
                        g_106 = ((((safe_unary_minus_func_int8_t_s(func_15((func_35(((l_641[2][0] = (safe_unary_minus_func_uint8_t_u(((safe_add_func_uint8_t_u_u((l_54[g_381] = (g_178 < l_608)), 1L)) > (p_27 , ((p_27 && 0x2CL) , func_15((l_640 = ((!l_615) > (p_26 = (safe_lshift_func_int16_t_s_u((safe_mod_func_uint8_t_u_u(p_26, g_139)), 11)))))))))))) != 0xC6L), g_140, g_41, p_27, l_573) , l_640)))) > g_186) != l_642) == p_27);
                    }
                }
                g_55 = (l_608 = l_618);
                l_608 = func_15((safe_sub_func_uint16_t_u_u(g_442, g_55)));
                g_106 = (safe_lshift_func_int16_t_s_s(l_594, (safe_rshift_func_int8_t_s_s(0xA5L, 7))));
            }
            for (l_618 = 0; (l_618 <= 3); l_618 += 1)
            {
                int i;
                l_599[l_618] = l_599[l_618];
            }
            if ((p_26 = (((l_608 = (l_655 = (safe_add_func_uint16_t_u_u((g_41 ^ g_114), (((((safe_sub_func_uint32_t_u_u(g_114, 4UL)) >= (l_599[2] = g_167)) && l_54[1]) >= (safe_rshift_func_int8_t_s_u(((p_26 , (((((g_442 & (-1L)) <= p_26) < g_303) && 0x7C5101E9L) & p_27)) , g_352), p_27))) >= 1UL))))) | p_27) == 1UL)))
            {
                unsigned l_656 = 0x4D4B1AA5L;
                g_106 = l_656;
                p_26 = (safe_add_func_uint8_t_u_u((p_26 , (safe_mul_func_int8_t_s_s((safe_sub_func_int16_t_s_s(0L, p_26)), (safe_mod_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u((((((g_672 = (g_111 = (((-1L) >= ((safe_mod_func_uint32_t_u_u((g_41 = 0xDED47BAAL), (g_186 & (l_573 < g_123)))) , (((l_671 = ((0UL || p_26) != g_381)) | 3UL) != 0x00C0L))) != 0xFAL))) != l_656) == g_352) | (-7L)) & p_26), p_27)) > p_26) ^ p_27), p_26))))), p_27));
            }
            else
            {
                int l_689 = 0x18CB6987L;
                int l_691 = 0xFCE3A2B2L;
                for (g_546 = 0; (g_546 != 35); ++g_546)
                {
                    unsigned l_690 = 0x2829E50EL;
                    int l_700 = (-1L);
                    for (g_303 = 0; (g_303 <= 55); g_303 = safe_add_func_int16_t_s_s(g_303, 5))
                    {
                        if (g_303)
                            break;
                        p_26 = (g_18 ^ func_43((safe_lshift_func_int16_t_s_s(g_178, g_114)), (func_35((g_139 = p_26), p_26, (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s(g_178, (safe_mod_func_int8_t_s_s((func_15(g_106) & (safe_lshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((0x61CCL ^ 8UL), g_41)), p_27))), p_26)))), g_266)), l_689, g_266) ^ p_27), l_690, g_442, g_114));
                        l_691 = 0x9480C232L;
                    }
                    l_700 = (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(p_26, (safe_lshift_func_uint8_t_u_u(((p_27 < 1L) , (safe_lshift_func_int8_t_s_s(0x91L, (l_594 & (func_35(p_27, ((l_691 = g_114) , 0x81FF2A07L), g_123, l_671, p_26) , l_599[2]))))), p_27)))), g_186));
                    g_55 = l_655;
                }
            }
        }
        else
        {
            unsigned char l_703 = 0x65L;
            int l_708 = (-1L);
            int l_729[3][5] = {{(-5L), 0x55B9A436L, 0x3157FB10L, 0x55B9A436L, (-5L)}, {(-5L), 0x55B9A436L, 0x3157FB10L, 0x55B9A436L, (-5L)}, {(-5L), 0x55B9A436L, 0x3157FB10L, 0x55B9A436L, (-5L)}};
            int l_909 = 0x4D401FA6L;
            int i, j;
            g_55 = ((255UL || (safe_lshift_func_int8_t_s_u(p_26, l_703))) != l_493);
            if (l_704)
            {
                char l_707 = (-1L);
                int l_727 = 0x9FB83C25L;
                unsigned short l_782 = 9UL;
                l_707 = ((func_15((((l_655 > p_26) <= (safe_mul_func_uint16_t_u_u(func_57(((l_599[2] = g_111) <= g_672)), (((l_42 = (((((l_703 != 0x25L) ^ (2UL & ((p_26 && l_655) , 0x3A1BL))) <= l_573) ^ l_703) != p_27)) & g_546) > 0UL)))) | l_594)) , 3L) & p_27);
                for (l_703 = 0; (l_703 <= 3); l_703 += 1)
                {
                    unsigned short l_728 = 4UL;
                    int i;
                    if ((l_599[l_703] <= (g_167 , p_27)))
                    {
                        l_599[l_703] = p_26;
                        l_708 = p_27;
                    }
                    else
                    {
                        short l_709 = 0x6B4BL;
                        l_709 = l_707;
                    }
                    for (l_631 = 0; (l_631 >= (-14)); --l_631)
                    {
                        unsigned l_712 = 6UL;
                        int l_721 = 0xE79A07B2L;
                        l_729[2][3] = (l_712 , (l_728 = (p_26 = (((safe_mul_func_uint16_t_u_u((func_57((l_727 = (((g_266 = (safe_mul_func_int16_t_s_s((0x7259L & ((((l_708 = p_26) > (8UL == (((safe_mod_func_uint16_t_u_u((l_721 = (p_27 , 0UL)), (safe_mul_func_int16_t_s_s(((g_178 , p_27) , (safe_lshift_func_uint8_t_u_u((g_139 <= l_707), 3))), 0xD85CL)))) , 0x256DDB40L) ^ 0x1FC4A1C6L))) , l_655) >= 1L)), l_726))) >= l_707) , p_27))) , l_599[l_703]), (-6L))) != 0x0C9D268BL) ^ l_712))));
                        p_26 = g_381;
                    }
                    if (((l_727 = ((((((safe_mod_func_int32_t_s_s((safe_add_func_uint16_t_u_u((p_27 , g_178), (safe_add_func_int32_t_s_s(((l_727 | (g_672 != (((safe_mod_func_uint16_t_u_u(((safe_rshift_func_uint16_t_u_u(((((safe_rshift_func_uint16_t_u_u(0x6BA0L, (safe_add_func_uint8_t_u_u((l_753[6] = (safe_sub_func_uint8_t_u_u((safe_mod_func_int8_t_s_s(0x86L, ((!l_748) && (safe_sub_func_int16_t_s_s(l_726, ((safe_mul_func_uint16_t_u_u(l_729[1][2], 0xB1A6L)) >= 1UL)))))), l_727))), l_728)))) >= g_178) , p_26) | 0x6AL), 8)) & p_26), 0xF235L)) ^ 0x7920L) >= p_27))) < l_727), l_599[2])))), 0x1BF49EE5L)) > p_27) == g_106) , l_599[l_703]) && p_26) <= p_27)) >= g_442))
                    {
                        int l_756 = 0x77B9BE1EL;
                        int l_768 = 0xF9D73B66L;
                        g_55 = func_35(l_599[2], (l_768 = (safe_add_func_uint8_t_u_u((l_756 = (~g_303)), ((safe_mul_func_int8_t_s_s((l_54[0] = p_26), (safe_mul_func_uint16_t_u_u((((l_42 = (safe_sub_func_uint8_t_u_u((((g_442 >= (safe_unary_minus_func_int16_t_s((l_727 = l_703)))) , (safe_mod_func_uint8_t_u_u(l_599[l_703], (safe_add_func_uint32_t_u_u(l_768, (safe_sub_func_uint16_t_u_u((~(((safe_unary_minus_func_int16_t_s(0x1D17L)) || (((safe_lshift_func_int8_t_s_u((0x6C7BL > l_768), l_573)) , g_266) , l_599[0])) , 0xF87DL)), 0UL))))))) , 3UL), l_42))) | l_728) , p_26), l_704)))) > g_546)))), g_41, p_27, g_186);
                        return p_26;
                    }
                    else
                    {
                        return p_26;
                    }
                }
                if ((((g_167 | (safe_rshift_func_int8_t_s_s((safe_lshift_func_int8_t_s_s((-5L), 7)), (g_111 = p_26)))) , ((((0UL == (((0L < (safe_mod_func_int16_t_s_s((((((p_27 , 0L) || p_27) | ((+(((safe_rshift_func_int8_t_s_s((-4L), l_782)) ^ g_442) <= g_546)) == 0x64L)) >= l_599[2]) | 0x3FL), l_783[0]))) ^ g_546) <= g_18)) & p_26) < 4294967295UL) && g_672)) ^ 0x35848704L))
                {
                    g_106 = ((((((func_15(((safe_add_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(g_114, ((safe_sub_func_uint16_t_u_u(((g_55 = 0x09CE9722L) , (+(((safe_mod_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_u((func_15(g_123) , (g_18 >= (safe_mul_func_uint8_t_u_u(((g_140 >= (func_35(p_26, l_655, l_748, g_140, p_27) , 2UL)) , p_27), p_26)))), 8)) | 1L), l_729[1][3])) && g_41) <= l_707))), l_727)) >= g_303))), g_140)) ^ g_41)) , l_796[3]) < p_27) >= 0xE105L) > p_26) >= 0xE095DF67L) , l_797);
                }
                else
                {
                    unsigned l_804[7] = {0xB8E66AA5L, 0UL, 0xB8E66AA5L, 0UL, 0xB8E66AA5L, 0UL, 0xB8E66AA5L};
                    char l_805 = (-3L);
                    int l_828 = (-2L);
                    int i;
                    g_178 = g_167;
                    l_49 = ((0xE7FDL > (((((+(safe_lshift_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(func_43(((safe_mod_func_uint8_t_u_u(0x1BL, l_804[6])) > l_729[2][3]), l_707, l_804[6], (p_26 , (l_727 = ((~((l_704 <= l_729[2][3]) >= l_805)) < 0UL))), g_546), p_27)), 0))) , p_26) == 0x6670L) , g_114) == 246UL)) != l_783[0]);
                    g_106 = (l_708 , (-2L));
                    if (l_703)
                    {
                        char l_826 = 0x44L;
                        int l_827 = 0x05B5FD8EL;
                        g_55 = 0x715F465FL;
                        p_26 = ((safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(l_54[1], 3)), 12)) ^ (l_828 = (safe_unary_minus_func_int8_t_s(((safe_lshift_func_int8_t_s_s(0xF2L, 5)) != ((safe_mod_func_uint32_t_u_u(func_15((l_827 = (l_729[2][1] >= ((func_79((safe_mul_func_int16_t_s_s(1L, (((safe_sub_func_int32_t_s_s((g_186 ^ (safe_unary_minus_func_int8_t_s((func_79(p_27, p_27, (safe_lshift_func_int16_t_s_u(func_79(((!(safe_mod_func_int8_t_s_s(((((l_708 = (func_35((g_139 = (l_49 != ((safe_add_func_uint16_t_u_u(func_15(l_804[3]), 0x88FAL)) < l_493))), l_573, p_26, g_114, p_27) || l_729[0][0])) , p_26) && p_26) && 0x4EA4L), g_266))) , l_826), l_797, l_599[0], p_26), 11)), g_178) || l_783[0])))), l_782)) >= p_27) , l_748))), p_26, g_352, g_18) || p_27) , g_55)))), p_27)) , p_26))))));
                    }
                    else
                    {
                        char l_829 = 0L;
                        p_26 = g_167;
                        l_828 = ((((l_729[0][3] = l_829) && (func_79(g_139, p_26, p_27, ((safe_mod_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_s((((safe_mod_func_int16_t_s_s((g_55 | p_27), ((~((g_114 , (((safe_rshift_func_uint8_t_u_u(((-10L) > (((((safe_lshift_func_uint8_t_u_u(((g_106 = (g_178 = (safe_rshift_func_uint8_t_u_u(l_707, l_708)))) > l_797), 4)) >= g_442) <= g_123) ^ p_27) , p_27)), 6)) || l_828) & l_828)) , 0UL)) & p_27))) != 0x89B4A878L) , l_707), g_123)), p_27)) >= p_26)) ^ g_266)) == g_55) && 0x75E8L);
                        l_797 = (safe_lshift_func_uint16_t_u_u((func_57((g_186 = ((((safe_add_func_uint32_t_u_u(g_18, 0x82A69183L)) >= l_829) >= (-1L)) ^ ((((safe_mul_func_uint8_t_u_u(g_442, ((p_26 >= (safe_rshift_func_uint8_t_u_s((safe_add_func_int16_t_s_s(g_55, (func_79(p_26, g_546, p_27, l_707) >= l_707))), 1))) != 0xB8F6DF52L))) && g_186) , p_26) & l_729[1][4])))) , 65534UL), 0));
                    }
                }
            }
            else
            {
                unsigned l_854[7][10][3] = {{{0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}}, {{0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}}, {{0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}}, {{0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}}, {{0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}}, {{0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}}, {{0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}, {0x7580F6F8L, 4294967287UL, 0x5121453BL}}};
                unsigned l_893[5] = {0x93306F22L, 0x0CB0B22FL, 0x93306F22L, 0x0CB0B22FL, 0x93306F22L};
                int i, j, k;
                p_26 = ((((safe_mul_func_int8_t_s_s(p_26, (l_854[3][2][2] >= (((safe_mod_func_uint32_t_u_u((l_599[2] = 4294967293UL), ((safe_sub_func_int8_t_s_s(0x8BL, (safe_rshift_func_uint16_t_u_u(((((safe_mod_func_int8_t_s_s((safe_mul_func_uint16_t_u_u(func_35(g_114, l_797, l_703, (g_123 = ((l_42 = ((g_865 , (safe_lshift_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s((((-2L) >= l_797) & 0x79D5L), 0x7CL)) , 0x13L), p_26))) == g_352)) & 0x1A770123L)), g_167), g_114)), g_546)) , l_729[2][3]) >= p_26) , l_854[4][8][2]), p_27)))) | p_27))) , 0xE740C4DEL) >= 0xE6664E67L)))) || l_708) >= g_672) & p_27);
                if ((safe_unary_minus_func_int16_t_s(p_26)))
                {
                    unsigned l_881 = 0x8E0F734AL;
                    p_26 = ((((0xC807L != g_303) > 1UL) & (safe_mod_func_int16_t_s_s((((func_15(((safe_add_func_uint16_t_u_u(((g_140 > ((func_15(g_672) <= (safe_add_func_int32_t_s_s((g_114 ^ func_43(p_26, ((safe_mul_func_uint8_t_u_u((l_881 = (safe_rshift_func_int8_t_s_u((l_599[2] >= p_26), 3))), 0xC1L)) == p_27), l_703, p_26, l_493)), g_352))) , 0xD2L)) , 7UL), l_49)) <= p_26)) , 0x57906492L) && 0L) > g_186), g_672))) && l_703);
                    for (g_303 = 0; (g_303 <= 4); g_303 += 1)
                    {
                        int i;
                        l_49 = l_796[g_303];
                        if (l_729[2][0])
                            break;
                    }
                    for (l_594 = 8; (l_594 == 11); l_594 = safe_add_func_uint16_t_u_u(l_594, 7))
                    {
                        unsigned l_892 = 0x7F1C4108L;
                        l_894 = (0L >= ((((l_892 = (((p_26 , (p_26 == func_15((((safe_mul_func_uint8_t_u_u(((p_27 = l_49) , p_27), (l_854[3][2][2] && (l_797 = ((l_708 = ((safe_add_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(l_881, (g_114 | ((safe_rshift_func_int8_t_s_s((p_26 == p_26), 7)) > 1UL)))), g_55)) , p_26)) ^ p_26))))) & 4294967294UL) > l_729[2][3])))) != l_729[2][3]) , 0x4B2BL)) != 0xFB80L) <= g_672) , l_893[0]));
                    }
                }
                else
                {
                    unsigned l_910[7][3][4] = {{{0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}}, {{0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}}, {{0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}}, {{0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}}, {{0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}}, {{0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}}, {{0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}, {0x0EE58F3AL, 2UL, 18446744073709551615UL, 0x50B83A33L}}};
                    int i, j, k;
                    g_178 = ((safe_mod_func_int32_t_s_s((safe_sub_func_uint8_t_u_u((l_599[2] & ((g_41 = (((g_546 & ((l_783[1] , (safe_mul_func_uint16_t_u_u(l_783[0], (g_139 = (((safe_lshift_func_uint16_t_u_s(func_43((safe_lshift_func_uint16_t_u_s((l_729[2][3] == p_26), (7L ^ (g_266 = ((safe_add_func_uint8_t_u_u((~func_43(g_381, (g_111 = (safe_lshift_func_int8_t_s_s(g_123, 4))), p_26, p_27, g_546)), l_748)) >= g_41))))), l_493, l_909, p_26, l_703), 2)) != l_910[3][0][3]) <= l_910[6][2][3]))))) , p_27)) , g_140) <= 0x8E79L)) | g_381)), 0xF6L)), g_442)) >= 0L);
                }
            }
        }
    }
    else
    {
        const unsigned short l_925 = 65527UL;
        g_178 = (safe_sub_func_uint32_t_u_u((((safe_lshift_func_int8_t_s_s((l_54[1] = func_15(g_111)), p_26)) ^ (g_303 = ((safe_rshift_func_int16_t_s_s(((safe_rshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((g_303 > (func_43(func_43(g_123, func_35((safe_add_func_int16_t_s_s((g_139 = (((safe_add_func_int16_t_s_s(((g_186 && ((((p_27 , func_43(l_925, (safe_sub_func_uint8_t_u_u(g_114, g_442)), g_139, g_865, p_26)) || l_925) < (-2L)) ^ l_928)) , g_442), 0x1432L)) , 0x3638L) , 0xBDDFL)), (-9L))), p_27, p_26, p_26, p_27), g_186, l_925, p_26), l_42, l_925, p_26, l_925) == l_704)), l_704)), l_929)) , p_26), 7)) && g_352))) , 0x1533DBB9L), 4294967293UL));
        l_54[0] = (safe_rshift_func_int16_t_s_u((safe_add_func_int8_t_s_s(((l_49 = ((4294967294UL | 0UL) <= 0x1B1855DEL)) | (safe_mod_func_int16_t_s_s(7L, (safe_rshift_func_int8_t_s_s(p_27, ((l_925 >= ((8UL >= 4294967295UL) >= (~(g_106 = g_140)))) , 1L)))))), p_26)), l_938[0][0]));
        g_55 = (-4L);
        return p_27;
    }
    p_26 = ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int32_t_s_s(g_352, (g_41 = ((p_26 == (safe_rshift_func_int8_t_s_u(((p_27 <= g_55) , p_26), 1))) , (safe_add_func_uint16_t_u_u(func_15(g_546), (g_139 || 6L))))))), l_54[0])) == 0xA981A759L);
    return l_894;
}







static unsigned func_35(short p_36, unsigned p_37, int p_38, unsigned p_39, unsigned p_40)
{
    return p_37;
}







static unsigned func_43(const unsigned char p_44, char p_45, int p_46, unsigned short p_47, int p_48)
{
    int l_56[1];
    int i;
    for (i = 0; i < 1; i++)
        l_56[i] = 0x43E62C90L;
    g_55 = (l_56[0] != p_47);
    return g_55;
}







static int func_57(int p_58)
{
    unsigned short l_84 = 0xEDE8L;
    int l_85[5][2];
    short l_213 = 0x3267L;
    int l_227 = 0xCB6478E9L;
    char l_275 = 2L;
    int i, j;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 2; j++)
            l_85[i][j] = 0xB9FE2185L;
    }
    if ((g_41 ^ (((safe_add_func_int32_t_s_s((l_85[1][1] = ((safe_mul_func_int8_t_s_s(((safe_mod_func_uint32_t_u_u(((p_58 & ((safe_sub_func_int32_t_s_s((safe_sub_func_uint32_t_u_u((((safe_mod_func_uint32_t_u_u(((safe_unary_minus_func_uint32_t_u(p_58)) , (safe_mul_func_int8_t_s_s(p_58, (safe_mod_func_int8_t_s_s(func_43(g_55, p_58, ((safe_sub_func_int16_t_s_s(g_18, (1UL ^ func_79((l_85[2][1] = l_84), p_58, p_58, g_18)))) >= l_84), g_41, l_84), p_58))))), p_58)) > 8L) > l_84), g_18)), 0x40A1BDD1L)) > (-3L))) | p_58), 0xCF246574L)) < l_84), 4L)) > l_84)), (-1L))) >= 0x5FL) || 0x421CF732L)))
    {
        int l_144 = 0xC59027B0L;
        int l_148 = 0xF6F77BD3L;
        for (p_58 = 0; (p_58 != 25); p_58 = safe_add_func_uint8_t_u_u(p_58, 9))
        {
            short l_145 = (-4L);
            int l_160[9][5][2] = {{{0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}}, {{0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}}, {{0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}}, {{0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}}, {{0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}}, {{0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}}, {{0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}}, {{0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}}, {{0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}, {0xDE1DBEFCL, 0x46AC6E24L}}};
            unsigned char l_162 = 0UL;
            char l_190 = 0x7BL;
            int i, j, k;
            l_145 = l_144;
            if ((g_114 | g_140))
            {
                int l_159 = 0x3805CA1CL;
                int l_161 = 0xF4EC59EFL;
                int l_187 = 5L;
                if ((((safe_rshift_func_int8_t_s_u(g_111, ((l_148 = 255UL) & l_85[2][1]))) <= (safe_sub_func_int8_t_s_s(((g_139 = (((((l_159 = ((g_41 = l_85[0][1]) | ((safe_add_func_uint8_t_u_u(p_58, (safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(g_139, 2)), (l_160[2][4][0] = (((l_144 ^ func_35(g_18, (safe_sub_func_uint8_t_u_u((~(l_85[2][1] | p_58)), p_58)), p_58, l_144, l_145)) > l_159) <= l_145)))))) >= 0xAF674826L))) ^ l_161) == l_162) || l_84) | p_58)) , g_114), g_114))) && g_114))
                {
                    unsigned char l_164 = 0UL;
                    g_106 = p_58;
                    for (l_144 = 1; (l_144 >= 0); l_144 -= 1)
                    {
                        unsigned l_163 = 0x249A0EE2L;
                        int i, j;
                        l_85[(l_144 + 1)][l_144] = ((l_144 < func_79(l_144, l_163, g_114, (l_148 = 0xDD5A8A1FL))) | ((l_164 == p_58) || p_58));
                        l_159 = (safe_lshift_func_uint8_t_u_u((g_167 = g_114), 6));
                        l_85[2][1] = p_58;
                        l_85[(l_144 + 1)][l_144] = (l_160[0][3][1] = (safe_rshift_func_uint16_t_u_s(((((safe_sub_func_uint32_t_u_u(p_58, (safe_lshift_func_int8_t_s_s((g_55 != (safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u(((l_163 ^ ((((((g_123 || ((l_159 = (func_15(g_55) && p_58)) ^ ((g_178 = 0x3CD5L) | 1L))) <= 0x93L) != 0x95L) == l_85[2][1]) > g_123) < p_58)) < g_139), g_139)), 9))), 6)))) <= g_140) ^ 0x301CD7A3L) , p_58), 8)));
                    }
                    for (l_161 = 0; (l_161 > 4); ++l_161)
                    {
                        char l_185[7] = {0x17L, 8L, 0x17L, 8L, 0x17L, 8L, 0x17L};
                        int i;
                        l_187 = (0L | (+((l_159 = l_148) , (((((safe_add_func_int16_t_s_s(0L, (g_186 = (0x8DL == (safe_add_func_uint32_t_u_u(0x15007456L, (l_185[2] = p_58))))))) & l_161) != 0x17L) || ((l_148 > (-1L)) , p_58)) & 0xD7C0A1D4L))));
                    }
                }
                else
                {
                    l_160[1][1][0] = 4L;
                    l_159 = (((~((func_43(g_140, l_161, g_123, g_106, ((g_178 = g_139) , (safe_lshift_func_int16_t_s_s((l_160[0][2][0] = (0xB891L ^ 0x0856L)), 14)))) || (l_160[2][4][0] = p_58)) >= 0xBF24L)) < l_162) | 1L);
                    l_148 = l_190;
                    for (l_144 = 2; (l_144 == 11); l_144++)
                    {
                        l_148 = p_58;
                        l_161 = (p_58 != (-1L));
                    }
                }
            }
            else
            {
                int l_193 = (-8L);
                g_55 = g_18;
                l_193 = g_186;
            }
        }
        for (g_140 = (-17); (g_140 >= 6); g_140 = safe_add_func_uint32_t_u_u(g_140, 9))
        {
            int l_202 = 0L;
            g_178 = (((8UL || ((safe_mul_func_uint8_t_u_u(p_58, 0x85L)) == (safe_mul_func_uint8_t_u_u((safe_rshift_func_int8_t_s_s(p_58, (func_35(l_202, g_106, (g_167 > (safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s(0x8DDEL, g_18)), l_202))), p_58, g_111) , 1L))), (-1L))))) > 0UL) , l_148);
            l_148 = p_58;
        }
    }
    else
    {
        g_106 = g_123;
    }
    for (l_84 = 0; (l_84 <= 1); l_84 += 1)
    {
        const char l_217 = 0x33L;
        int l_226 = 0xB1659892L;
        int l_236 = 1L;
        l_227 = ((safe_mul_func_int8_t_s_s(((safe_lshift_func_int8_t_s_u(((safe_lshift_func_int16_t_s_u((l_226 = (l_213 > ((safe_mod_func_int32_t_s_s(((((safe_unary_minus_func_int16_t_s(l_217)) , (l_85[4][1] = 0UL)) , (l_84 || ((safe_mul_func_uint8_t_u_u(p_58, ((safe_rshift_func_uint16_t_u_s(0x28ECL, (0L | (safe_lshift_func_uint16_t_u_u(p_58, 1))))) | (g_41 = ((safe_mul_func_uint16_t_u_u(65527UL, 0x11A3L)) , p_58))))) <= g_178))) == l_213), (-1L))) >= g_55))), p_58)) , p_58), 4)) , g_114), g_167)) == g_123);
        g_106 = (func_43((l_213 , g_186), g_106, l_217, (l_85[0][0] = g_178), (((func_35((0x0CECDE52L >= (safe_add_func_int16_t_s_s(((l_227 = ((safe_sub_func_int8_t_s_s((0xC9L ^ (g_41 < (((safe_mod_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(p_58, g_178)) & p_58), l_236)) && g_41) == g_167))), l_236)) | g_18)) == 1UL), g_123))), p_58, l_226, g_18, p_58) & 1UL) == l_213) , l_84)) > l_236);
        for (g_123 = 0; (g_123 <= 1); g_123 += 1)
        {
            char l_237 = 1L;
            char l_258 = 1L;
            short l_269 = (-7L);
            unsigned char l_300 = 0xB0L;
            int l_351 = 1L;
            char l_363 = 0xF4L;
            if ((0x7694L < func_43(g_186, l_237, func_35((p_58 == 1L), func_35(g_18, ((((safe_sub_func_uint32_t_u_u(p_58, (g_114 > p_58))) || g_114) , 0x4EL) <= 0UL), p_58, l_85[2][1], g_55), g_41, l_237, l_227), g_55, p_58)))
            {
                unsigned char l_259[10] = {249UL, 0x31L, 249UL, 0x31L, 249UL, 0x31L, 249UL, 0x31L, 249UL, 0x31L};
                int l_260 = 0xC0CF1EBDL;
                unsigned l_284[4][7][2] = {{{0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}}, {{0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}}, {{0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}}, {{0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}, {0x15EC44A5L, 8UL}}};
                int l_287 = 0xB28AE0F1L;
                short l_317 = (-5L);
                unsigned short l_373 = 65535UL;
                int i, j, k;
                for (l_227 = 0; (l_227 <= 1); l_227 += 1)
                {
                    int i, j;
                    if (((l_260 = (func_35((g_139 = ((((safe_add_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_u(func_15((l_258 = (func_15(((((((((l_236 = (safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((l_85[l_84][l_227] > (l_85[(l_227 + 1)][l_84] < (func_15(((safe_lshift_func_uint8_t_u_s(l_85[(l_84 + 1)][g_123], l_85[(l_84 + 1)][g_123])) | (g_139 < (((+(safe_lshift_func_int16_t_s_u(1L, (g_114 ^ (safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0x6CE235BBL, (func_15(l_85[(l_84 + 1)][g_123]) >= 1UL))), 7)))))) ^ p_58) < l_237)))) | l_237))) != 0xDBAC1779L), l_226)) || p_58), g_123))) == g_55) > g_18) , g_178) , 0x7BL) <= 0UL) != 0x68L) , 0xDF24L)) ^ 0xA313L))), 4)) , g_139), g_167)) | g_139) >= 0x6D02A7A2L) <= p_58)), g_167, l_217, g_106, l_259[7]) , g_167)) >= 1UL))
                    {
                        int i, j;
                        l_85[(g_123 + 3)][l_84] = (-6L);
                        return p_58;
                    }
                    else
                    {
                        int l_261[7] = {0xDC88A89DL, 1L, 0xDC88A89DL, 1L, 0xDC88A89DL, 1L, 0xDC88A89DL};
                        int i;
                        return l_261[1];
                    }
                }
                if ((l_85[0][1] = (safe_lshift_func_uint16_t_u_s((g_266 = (((safe_rshift_func_uint16_t_u_s(l_85[1][1], 13)) >= (4294967287UL >= func_43(p_58, g_123, p_58, l_85[2][1], (l_227 = p_58)))) || g_178)), 1))))
                {
                    unsigned char l_274 = 0xADL;
                    int l_378[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_378[i] = 0x2FBB70EFL;
                    l_275 = (((func_15((+(safe_mul_func_uint8_t_u_u(l_269, p_58)))) , ((safe_mul_func_int16_t_s_s((g_139 = ((((func_43(l_213, func_35(g_18, (l_226 = ((safe_mod_func_uint16_t_u_u(l_258, l_259[2])) & g_111)), ((g_266 || 0x90C542ADL) , 0xF70C1038L), p_58, g_139), g_139, p_58, p_58) || l_274) , 0xB8L) || 0x35L) ^ l_274)), g_18)) != 65535UL)) && g_106) <= 2UL);
                    if ((((safe_add_func_uint8_t_u_u(func_43((safe_lshift_func_uint8_t_u_s((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((p_58 , (((g_139 = ((g_111 = (l_226 == (((-8L) == 0x714165D3L) | (65535UL & (+(g_123 <= (g_167 && ((l_284[2][5][0] < (safe_add_func_uint32_t_u_u(p_58, l_258))) , l_259[6])))))))) >= g_106)) && l_287) ^ p_58)), l_226)), 0UL)) || l_85[(l_84 + 3)][g_123]) & g_266), 4)), p_58, l_258, g_123, p_58), 0L)) , g_106) ^ l_259[4]))
                    {
                        char l_328 = 0L;
                        int l_343 = 0xAD29EC4DL;
                        g_178 = (((g_140 ^ func_15((safe_rshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(((l_258 , (safe_add_func_uint16_t_u_u(p_58, ((g_123 , g_41) , (safe_lshift_func_int8_t_s_u(0x10L, (safe_mul_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(l_300, ((safe_mul_func_int16_t_s_s(6L, g_303)) | g_167))), 0x67BFL)))))))) , l_236), g_303)) && 248UL), 3)))) | 0xB836L) ^ (-1L));
                        g_106 = (((safe_lshift_func_uint8_t_u_s(((safe_lshift_func_uint16_t_u_s(((((safe_rshift_func_int16_t_s_s(p_58, 0)) <= (safe_mul_func_int16_t_s_s((((func_35((((((-8L) != 65530UL) || (safe_sub_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u(0x6470L, 10)), (safe_unary_minus_func_int32_t_s(func_43(l_284[3][5][0], g_41, p_58, (p_58 || g_106), p_58)))))) ^ p_58) == p_58), l_317, l_274, p_58, l_269) && g_178) , g_186) || 65530UL), g_167))) || g_55) > 0x88L), 5)) > (-7L)), g_111)) >= 0x3AL) < 0xC08CL);
                        l_328 = (safe_sub_func_uint32_t_u_u(((((safe_mul_func_int8_t_s_s(((g_123 , 0x833479E1L) , l_269), ((p_58 , (safe_mul_func_int16_t_s_s(0xE3E8L, p_58))) , (func_15(l_284[2][5][0]) , ((safe_sub_func_uint8_t_u_u(((safe_mul_func_uint16_t_u_u((l_237 && g_167), p_58)) || p_58), p_58)) == 0xCEDF3DF7L))))) <= 9L) & g_18) , 4294967295UL), l_274));
                        l_343 = func_15((safe_sub_func_int16_t_s_s((((((safe_mod_func_uint16_t_u_u((((((p_58 , (l_236 , ((p_58 || (safe_sub_func_uint32_t_u_u(l_274, g_186))) < 0x0B60L))) <= (safe_lshift_func_uint16_t_u_s(((g_186 , (g_266 != func_43(((safe_add_func_uint8_t_u_u((safe_rshift_func_uint16_t_u_u(((func_43((safe_rshift_func_uint16_t_u_u(func_35(g_139, g_140, p_58, l_260, g_167), p_58)), p_58, g_41, p_58, l_287) , l_237) == p_58), 4)), g_303)) >= p_58), p_58, l_259[3], g_167, l_317))) < g_140), l_85[2][0]))) , g_123) <= l_328) & 0x0603L), g_123)) > 0x675D3DC8L) != g_303) == 2UL) , 0L), g_114)));
                    }
                    else
                    {
                        if (l_237)
                            break;
                    }
                    if (p_58)
                    {
                        unsigned l_348 = 0UL;
                        l_351 = ((safe_lshift_func_uint8_t_u_u(g_55, 5)) , (safe_sub_func_int16_t_s_s(l_348, (safe_rshift_func_int16_t_s_s(l_226, 8)))));
                    }
                    else
                    {
                        unsigned l_368 = 2UL;
                        l_260 = ((g_352 = (l_351 = (g_114 = g_41))) , (safe_add_func_int8_t_s_s(0x87L, ((safe_mod_func_int16_t_s_s(func_15(p_58), (safe_lshift_func_uint16_t_u_u((safe_mul_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((1UL > (g_352 ^ ((l_363 = (p_58 != 0x14L)) && ((safe_rshift_func_uint8_t_u_u(p_58, 7)) && l_274)))), g_178)), 0xBABBL)), 7)))) < 0x0EL))));
                        l_85[(l_84 + 3)][g_123] = func_15(func_35(g_111, p_58, (p_58 & ((safe_mul_func_uint16_t_u_u(l_274, (((l_368 && p_58) , ((((((((((((func_35(p_58, (safe_sub_func_uint8_t_u_u((l_373 = l_368), (g_140 = (l_351 = p_58)))), l_259[7], p_58, g_167) ^ 0x5D0869CCL) , l_227) > p_58) ^ 0UL) ^ 65535UL) < g_114) ^ 0xEFADL) > l_269) , 4294967290UL) , p_58) , 5UL) == g_178)) & l_275))) > 0L)), g_114, l_226));
                    }
                    l_378[0] = (l_274 & func_43((l_274 , l_84), ((((l_236 ^ ((1L == (((g_139 = ((((safe_lshift_func_uint8_t_u_u((((-4L) <= g_352) , (safe_lshift_func_uint8_t_u_s((l_274 < g_178), g_114))), g_41)) , l_274) | l_274) < p_58)) < p_58) != p_58)) != p_58)) , 5UL) || l_275) || g_123), g_111, p_58, g_114));
                }
                else
                {
                    g_106 = ((l_213 > (((((((((~(l_85[(l_84 + 3)][g_123] = ((((func_43(l_275, g_55, (l_351 = (l_260 = func_35((g_381 = (func_35(l_259[7], ((g_178 = g_106) != func_15((g_139 = g_55))), (+(l_85[2][1] = (safe_sub_func_int8_t_s_s(((-10L) == (func_15(p_58) | 0xA32C99ABL)), g_123)))), p_58, g_106) == 0x011F4390L)), g_266, l_269, g_266, p_58))), g_41, p_58) ^ g_186) != p_58) & 1UL) | (-5L)))) < 0xDDL) & p_58) && 0xFC46L) | p_58) | 1UL) , 0x259C5DC8L) & l_300) ^ g_111)) && 0x6CEA0210L);
                }
                l_260 = (safe_rshift_func_int8_t_s_u(((safe_lshift_func_uint8_t_u_u((safe_add_func_int8_t_s_s((p_58 > ((g_139 = g_114) , (safe_sub_func_uint16_t_u_u((g_381 = (safe_lshift_func_uint16_t_u_s(0x7B4FL, 11))), func_43(l_85[(l_84 + 3)][g_123], p_58, func_43((safe_lshift_func_uint16_t_u_u(((((l_227 = ((l_226 = l_85[2][1]) , g_167)) ^ g_123) && (safe_lshift_func_int8_t_s_s(g_111, p_58))) | 65535UL), 7)), l_85[(l_84 + 3)][g_123], g_41, l_213, g_266), p_58, l_317))))), 7L)), 5)) || 0UL), l_351));
            }
            else
            {
                for (g_303 = 0; (g_303 <= 1); g_303 += 1)
                {
                    unsigned l_396 = 0UL;
                    return l_396;
                }
                for (l_227 = 0; (l_227 == 0); l_227 = safe_add_func_uint32_t_u_u(l_227, 9))
                {
                    int l_399 = 0xEAEA008FL;
                    l_399 = l_84;
                    if (g_106)
                        continue;
                }
            }
            l_236 = (safe_lshift_func_int8_t_s_u((l_226 = (p_58 > ((g_139 = ((safe_sub_func_int16_t_s_s((-1L), g_352)) , (safe_rshift_func_uint16_t_u_s((g_140 != (safe_add_func_int32_t_s_s((p_58 < (g_111 == 0x4708B7C6L)), ((safe_sub_func_int8_t_s_s((func_15((l_269 , (safe_add_func_uint8_t_u_u(0UL, 252UL)))) != l_226), 0UL)) < l_213)))), l_213)))) , l_226))), l_217));
        }
    }
    return g_178;
}







static unsigned char func_79(char p_80, short p_81, short p_82, unsigned p_83)
{
    short l_94 = 0x0CE4L;
    unsigned char l_105 = 255UL;
    unsigned l_121 = 0x200C290CL;
    int l_122 = 0x224176C3L;
    unsigned char l_124 = 0x49L;
    if ((safe_lshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(9L, (((safe_rshift_func_int8_t_s_u(l_94, 4)) != (safe_mod_func_uint16_t_u_u((safe_lshift_func_int16_t_s_u((g_41 || ((!(((((0xB3EAL & func_15((safe_add_func_int8_t_s_s((~(g_106 = (g_55 <= ((safe_add_func_uint32_t_u_u(((safe_rshift_func_uint16_t_u_s(g_18, (!(func_15(func_15(l_94)) | l_94)))) , p_82), l_105)) , g_18)))), 0UL)))) | (-4L)) , 0x3D49E3F4L) >= g_41) & 0x5DC571EBL)) && g_55)), l_94)), p_80))) , 1UL))), 0)), 2)))
    {
        unsigned short l_109 = 0xB4CDL;
        int l_110 = 0xA11AD519L;
        int l_125 = (-8L);
        l_110 = (((safe_mod_func_int8_t_s_s(l_94, 0xB7L)) < p_80) | l_109);
        l_110 = ((((0x1D0942DFL > (((g_111 = (0L | g_18)) == g_55) , (((safe_add_func_uint8_t_u_u((func_35(((g_114 = func_15(p_80)) != (safe_rshift_func_int8_t_s_s(func_35((safe_mod_func_uint16_t_u_u((g_123 = (l_122 = (g_55 & (safe_sub_func_uint8_t_u_u(g_106, (((((g_111 || 0x1AE354A5L) >= l_121) == l_121) ^ g_106) >= 7UL)))))), 9L)), p_82, l_121, g_55, g_106), 4))), l_124, p_81, g_41, p_82) & l_125), p_83)) == g_18) <= p_81))) | l_105) == 0UL) && 0xDF84L);
    }
    else
    {
        unsigned l_126 = 0xCEE854D9L;
        int l_141 = 0L;
        l_122 = func_35((p_81 = g_114), l_126, l_126, (((func_15(((((l_126 < (p_83 < ((safe_sub_func_uint16_t_u_u(0x0F62L, (0UL != (safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s((p_82 | p_80), 0x2E68L)), p_82))))) && l_126))) == 0x3EL) >= p_83) , 0xEC4AL)) == 255UL) > 1L) , 0x8D4C3CCEL), g_114);
        l_141 = ((safe_rshift_func_uint8_t_u_u((l_121 , ((1UL || (p_81 || ((g_140 = (safe_lshift_func_uint8_t_u_s(l_126, (p_81 & (g_139 = 1UL))))) >= ((l_126 & 0xA34F7B72L) & p_81)))) >= l_126)), p_83)) ^ 0x8FL);
    }
    return g_139;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_14, "g_14", print_hash_value);
    transparent_crc(g_18, "g_18", print_hash_value);
    transparent_crc(g_41, "g_41", print_hash_value);
    transparent_crc(g_55, "g_55", print_hash_value);
    transparent_crc(g_106, "g_106", print_hash_value);
    transparent_crc(g_111, "g_111", print_hash_value);
    transparent_crc(g_114, "g_114", print_hash_value);
    transparent_crc(g_123, "g_123", print_hash_value);
    transparent_crc(g_139, "g_139", print_hash_value);
    transparent_crc(g_140, "g_140", print_hash_value);
    transparent_crc(g_167, "g_167", print_hash_value);
    transparent_crc(g_178, "g_178", print_hash_value);
    transparent_crc(g_186, "g_186", print_hash_value);
    transparent_crc(g_266, "g_266", print_hash_value);
    transparent_crc(g_303, "g_303", print_hash_value);
    transparent_crc(g_352, "g_352", print_hash_value);
    transparent_crc(g_381, "g_381", print_hash_value);
    transparent_crc(g_442, "g_442", print_hash_value);
    transparent_crc(g_546, "g_546", print_hash_value);
    transparent_crc(g_672, "g_672", print_hash_value);
    transparent_crc(g_865, "g_865", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 8; k++)
            {
                transparent_crc(g_959[i][j][k], "g_959[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1000, "g_1000", print_hash_value);
    transparent_crc(g_1100, "g_1100", print_hash_value);
    transparent_crc(g_1213, "g_1213", print_hash_value);
    transparent_crc(g_1367, "g_1367", print_hash_value);
    transparent_crc(g_1414, "g_1414", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
