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



static int g_18 = (-1L);
static char g_61[7] = {1L,0L,1L,1L,0L,1L,1L};
static unsigned long long g_82 = 0xCBABA27FA52E963ELL;
static int g_101 = 0xD4A066EEL;
static long long g_102 = 0x6553ECF3843C9D40LL;
static unsigned char g_113 = 0xB4L;
static unsigned char g_133 = 1UL;
static unsigned short g_164[4] = {9UL,9UL,9UL,9UL};
static unsigned short g_183 = 65528UL;
static long long g_222 = 0xD841891164B7CAA2LL;
static unsigned long long g_235 = 4UL;
static unsigned char g_253 = 255UL;
static char g_255 = 0xA6L;
static unsigned short g_269[10][9][2] = {{{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L}},{{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L}},{{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L}},{{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L}},{{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L}},{{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L}},{{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L}},{{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L}},{{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L}},{{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L},{0x5C2CL,0x8581L},{1UL,0x8581L},{0x5C2CL,0x79C4L},{1UL,0x79C4L}}};
static unsigned char g_292 = 0UL;
static unsigned char g_311 = 0xB9L;
static const unsigned short g_383 = 65535UL;
static char g_410 = 0xBAL;
static int g_411 = 2L;
static long long g_458[3] = {(-1L),(-1L),(-1L)};
static unsigned long long g_502 = 0x2C3A3E334D8D64D9LL;
static unsigned g_526 = 1UL;
static char g_579 = 1L;
static unsigned long long g_582[8] = {0x15CB8369F3CE1828LL,0xCE7FAF82C61DAAADLL,0xCE7FAF82C61DAAADLL,0x15CB8369F3CE1828LL,0xCE7FAF82C61DAAADLL,0xCE7FAF82C61DAAADLL,0x15CB8369F3CE1828LL,0xCE7FAF82C61DAAADLL};
static unsigned g_587[1][10] = {{0xAF0F9DC9L,0xAF0F9DC9L,1UL,0xAF0F9DC9L,0xAF0F9DC9L,1UL,0xAF0F9DC9L,0xAF0F9DC9L,1UL,0xAF0F9DC9L}};
static long long g_596 = 0x436DDAB2FE517E33LL;
static short g_611 = 0xDAC1L;
static unsigned long long g_631 = 4UL;
static int g_711[6][4][4] = {{{0xE3AC6AC4L,1L,1L,0x0C50A9BDL},{0x3DB996CFL,1L,1L,0x3DB996CFL},{0x0C50A9BDL,1L,1L,0xE3AC6AC4L},{(-6L),(-2L),0xA0D424D7L,1L}},{{1L,(-3L),0x55DDF470L,1L},{0xBA38A8A6L,(-2L),(-6L),0xE3AC6AC4L},{8L,0x79B49519L,0xE3AC6AC4L,0xACF9B968L},{0xBA38A8A6L,0xA0D424D7L,0xBA38A8A6L,0x96AA4F08L}},{{(-3L),1L,(-2L),7L},{0x79B49519L,0x5C69F8C2L,7L,1L},{8L,(-6L),7L,0x0C50A9BDL},{0x79B49519L,8L,(-2L),(-1L)}},{{(-3L),0xE3AC6AC4L,0xBA38A8A6L,0xBA38A8A6L},{0xBA38A8A6L,0xBA38A8A6L,0xE3AC6AC4L,(-3L)},{(-1L),(-2L),8L,0x79B49519L},{0x0C50A9BDL,7L,(-6L),8L}},{{1L,7L,0x5C69F8C2L,0x79B49519L},{7L,(-2L),1L,(-3L)},{0x96AA4F08L,0xBA38A8A6L,0xA0D424D7L,0xBA38A8A6L},{0xACF9B968L,0xE3AC6AC4L,0x79B49519L,(-1L)}},{{1L,8L,0x95375E05L,0x0C50A9BDL},{0xA0D424D7L,(-6L),1L,1L},{0xA0D424D7L,0x5C69F8C2L,0x95375E05L,7L},{1L,1L,0x79B49519L,0x96AA4F08L}}};
static int g_865 = 0x7FDB56B7L;
static unsigned long long g_956 = 18446744073709551611UL;
static unsigned short g_974 = 65528UL;
static char g_1116[3] = {2L,2L,2L};
static int g_1182 = 4L;
static long long g_1257 = 0x646AFA10476E4040LL;
static long long g_1298 = 1L;
static const unsigned short g_1551[8][9] = {{0x0E50L,3UL,3UL,0x0E50L,3UL,65529UL,0xD4DDL,65535UL,0xD4DDL},{2UL,0xF62CL,0x6648L,0x6648L,0xF62CL,2UL,65529UL,0UL,8UL},{65535UL,65529UL,65535UL,3UL,3UL,0x0E50L,3UL,65529UL,0xD4DDL},{0xF62CL,0UL,0xE974L,2UL,0x6356L,0x6356L,2UL,0xE974L,0UL},{3UL,65529UL,0xCA06L,0xD4DDL,6UL,7UL,7UL,6UL,0xD4DDL},{0UL,8UL,0UL,65529UL,2UL,0xF62CL,0x6648L,0x6648L,0xF62CL},{0xCA06L,65529UL,3UL,65529UL,0xCA06L,0xD4DDL,6UL,7UL,7UL},{0xE974L,0UL,0xF62CL,65529UL,0xF62CL,0UL,0xE974L,2UL,0x6356L}};
static int g_1671 = 0L;
static char g_1733[9][9] = {{2L,(-5L),(-1L),(-1L),0x7FL,1L,0xAAL,1L,0x7FL},{0x47L,0x1FL,0x1FL,0x47L,1L,0L,0xABL,1L,1L},{0x10L,7L,0xB5L,0xAAL,0x3DL,(-1L),0xBEL,0xBEL,(-1L)},{1L,(-3L),0x47L,(-3L),1L,1L,(-1L),0x88L,0x1FL},{(-5L),1L,1L,0x10L,0x7FL,7L,0xD2L,0xADL,0xAAL},{0x0FL,1L,0xACL,0xACL,1L,0x0FL,0x47L,5L,0xABL},{(-5L),0x10L,7L,0xB5L,0xAAL,0x3DL,(-1L),0xBEL,0xBEL},{0x47L,0x3AL,1L,0L,1L,0x3AL,0x47L,0xACL,(-1L)},{0x35L,0xBEL,0x3DL,0xE7L,1L,0xADL,0xAAL,(-1L),0xD2L}};
static long long g_1787 = 0x79FCF8A6661312E9LL;
static int g_1852[1] = {2L};
static unsigned char g_2091 = 0UL;
static long long g_2092 = 0x8B032ECC343C82C3LL;
static long long g_2094 = 0x018234261BE8CE93LL;
static int g_2132 = 0x1A579136L;
static unsigned long long g_2150 = 1UL;
static unsigned char g_2151 = 255UL;



static long long func_1(void);
static unsigned func_5(unsigned char p_6, char p_7, unsigned short p_8, short p_9, const int p_10);
static unsigned char func_11(unsigned char p_12, const unsigned p_13);
static unsigned long long func_14(char p_15, unsigned p_16, long long p_17);
static int func_19(char p_20, long long p_21, const int p_22, unsigned p_23);
static unsigned short func_26(char p_27, unsigned p_28);
static char func_29(unsigned char p_30, const unsigned short p_31, unsigned short p_32, unsigned char p_33, int p_34);
static char func_52(unsigned long long p_53, int p_54, short p_55, const short p_56);
static short func_63(int p_64, int p_65, short p_66, char p_67);
static int func_68(char p_69);
static long long func_1(void)
{
    short l_4 = 0x8E97L;
    unsigned long long l_2090 = 0xF0B3138D0E1DE578LL;
    unsigned long long l_2093 = 18446744073709551615UL;
    int l_2095 = 0xFE753631L;
    int l_2134 = 0L;
    int l_2143 = 1L;
    l_2134 = ((safe_mul_func_int8_t_s_s(l_4, ((~func_5(func_11((l_2095 = (func_14(l_4, g_18, g_18) > (g_1852[0] && ((l_4 < ((253UL & (((safe_lshift_func_int16_t_s_s((g_2092 = ((((((safe_mod_func_int64_t_s_s(((g_2091 = (((g_956 < l_2090) , g_956) < l_2090)) <= 1UL), g_956)) , 0x7F24L) , l_4) > l_2090) != g_383) != 0L)), 7)) , l_2090) > 0x3CFC819757E1C4DELL)) ^ l_2093)) ^ g_2094)))), g_1852[0]), l_2090, g_1551[6][7], l_4, g_383)) , 1L))) <= 0xDC12F0F2L);
    g_1182 = ((-1L) >= (safe_add_func_uint16_t_u_u((safe_add_func_int16_t_s_s(((l_2134 = (safe_rshift_func_int8_t_s_u(g_222, 5))) && (l_2090 < ((safe_lshift_func_int16_t_s_u(l_2143, g_711[0][2][0])) , ((safe_add_func_int8_t_s_s(((g_587[0][5] = 0xD8C6C7F4L) >= (l_2134 = l_2093)), g_1551[6][7])) && (g_611 = (l_2090 && 0x587BBB39B2B42F82LL)))))), g_235)), 0x1148L)));
    g_1182 = ((g_1852[0] > g_587[0][4]) >= func_11(l_2093, (safe_lshift_func_uint16_t_u_s(g_956, (g_2151 = (((func_63((l_2134 = ((((g_611 = (l_2090 ^ func_5(l_4, func_68((l_2095 = g_292)), ((safe_add_func_int64_t_s_s(6L, 0xAEB0B9341E065B5DLL)) > l_2093), g_458[1], l_2134))) <= g_61[1]) ^ l_2093) & l_4)), l_2090, g_292, l_2090) == g_61[4]) > l_2090) , g_2150))))));
    l_2134 = ((func_29(l_2134, g_255, g_1671, l_2095, ((func_5(g_311, (g_526 == 0L), (l_4 || l_2090), l_2143, l_2093) >= g_1733[1][8]) , l_2093)) >= l_2093) < g_1116[1]);
    return g_458[1];
}







static unsigned func_5(unsigned char p_6, char p_7, unsigned short p_8, short p_9, const int p_10)
{
    unsigned l_2107 = 0UL;
    int l_2111 = 0xBDB86665L;
    for (g_102 = (-25); (g_102 == (-24)); ++g_102)
    {
        unsigned l_2110 = 4294967295UL;
        int l_2131 = 1L;
        g_18 = 1L;
        if (l_2107)
            continue;
        if ((p_10 ^ (((safe_mod_func_int8_t_s_s((+(p_6 , (l_2111 = l_2110))), ((safe_mul_func_int16_t_s_s(func_11(p_7, (g_526 = p_9)), 0x1026L)) ^ g_1116[2]))) != (g_2094 = (safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(0xE4L, 6)) != g_611), 10)))) , p_10)))
        {
            g_18 = (safe_sub_func_uint16_t_u_u(g_1852[0], 4L));
        }
        else
        {
            unsigned l_2120 = 3UL;
            int l_2133 = (-1L);
            l_2111 = (-10L);
            l_2133 = (l_2120 & (safe_rshift_func_uint16_t_u_u((((-5L) == ((l_2131 = (safe_mul_func_uint8_t_u_u(((safe_rshift_func_int8_t_s_u((((safe_lshift_func_uint8_t_u_s((1L | p_9), l_2110)) != (safe_mod_func_uint32_t_u_u(p_6, (((g_711[4][2][0] || func_11(l_2107, l_2120)) <= 0x01689116L) , 0x5FE5635DL)))) == 250UL), p_7)) & p_7), l_2107))) == l_2120)) <= g_1852[0]), g_2132)));
        }
    }
    return p_8;
}







static unsigned char func_11(unsigned char p_12, const unsigned p_13)
{
    unsigned char l_2098 = 0x14L;
    int l_2099 = 1L;
    unsigned short l_2100 = 0xBB2CL;
    l_2099 = (g_253 ^ (safe_add_func_int16_t_s_s(1L, l_2098)));
    g_711[3][2][3] = (l_2100 != (safe_add_func_int64_t_s_s(g_711[3][2][3], (safe_add_func_int64_t_s_s(l_2100, (~0x717612B16AE2ACC6LL))))));
    return g_183;
}







static unsigned long long func_14(char p_15, unsigned p_16, long long p_17)
{
    const char l_35 = 0xC5L;
    int l_883 = 0x4A11DB31L;
    int l_885[3];
    char l_894 = (-7L);
    unsigned long long l_896 = 9UL;
    int l_920 = (-1L);
    int l_967 = 0x8ADB835DL;
    const short l_1048 = 0L;
    char l_1299 = (-5L);
    unsigned char l_1587[8][9][3] = {{{0x57L,1UL,1UL},{0xF8L,1UL,0xF8L},{0x55L,0xCBL,1UL},{0x55L,0xE1L,0x57L},{0xF8L,0xCBL,0x57L},{0x57L,1UL,1UL},{0xF8L,1UL,0xF8L},{0x55L,0xCBL,1UL},{0x55L,0xE1L,0x57L}},{{0xF8L,0xCBL,0x57L},{0x57L,1UL,1UL},{0xF8L,1UL,0xF8L},{0x55L,0xCBL,1UL},{0x55L,0xE1L,0x57L},{0xF8L,0xCBL,0x57L},{0x57L,1UL,1UL},{0xF8L,1UL,0xF8L},{0x55L,0xCBL,1UL}},{{0x55L,0xE1L,0x57L},{0xF8L,251UL,1UL},{1UL,0xCBL,0x55L},{0x1CL,0xCBL,0x1CL},{0xF8L,251UL,0x55L},{0xF8L,0xD4L,1UL},{0x1CL,251UL,1UL},{1UL,0xCBL,0x55L},{0x1CL,0xCBL,0x1CL}},{{0xF8L,251UL,0x55L},{0xF8L,0xD4L,1UL},{0x1CL,251UL,1UL},{1UL,0xCBL,0x55L},{0x1CL,0xCBL,0x1CL},{0xF8L,251UL,0x55L},{0xF8L,0xD4L,1UL},{0x1CL,251UL,1UL},{1UL,0xCBL,0x55L}},{{0x1CL,0xCBL,0x1CL},{0xF8L,251UL,0x55L},{0xF8L,0xD4L,1UL},{0x1CL,251UL,1UL},{1UL,0xCBL,0x55L},{0x1CL,0xCBL,0x1CL},{0xF8L,251UL,0x55L},{0xF8L,0xD4L,1UL},{0x1CL,251UL,1UL}},{{1UL,0xCBL,0x55L},{0x1CL,0xCBL,0x1CL},{0xF8L,251UL,0x55L},{0xF8L,0xD4L,1UL},{0x1CL,251UL,1UL},{1UL,0xCBL,0x55L},{0xE2L,0x55L,0xE2L},{0xC4L,0xF8L,0xE8L},{0xC4L,0x57L,255UL}},{{0xE2L,0xF8L,255UL},{255UL,0x55L,0xE8L},{0xE2L,0x55L,0xE2L},{0xC4L,0xF8L,0xE8L},{0xC4L,0x57L,255UL},{0xE2L,0xF8L,255UL},{255UL,0x55L,0xE8L},{0xE2L,0x55L,0xE2L},{0xC4L,0xF8L,0xE8L}},{{0xC4L,0x57L,255UL},{0xE2L,0xF8L,255UL},{255UL,0x55L,0xE8L},{0xE2L,0x55L,0xE2L},{0xC4L,0xF8L,0xE8L},{0xC4L,0x57L,255UL},{0xE2L,0xF8L,255UL},{255UL,0x55L,0xE8L},{0xE2L,0x55L,0xE2L}}};
    int l_1617 = 0xB794AB74L;
    unsigned l_1689 = 0x4A2EA7F5L;
    long long l_1690[4];
    char l_1850 = 0xADL;
    short l_1851 = 0x0D20L;
    int l_1865[6];
    long long l_1903 = 0L;
    int l_2082 = 0L;
    int l_2083 = 7L;
    short l_2084 = 0x0E62L;
    int l_2085 = (-1L);
    int i, j, k;
    for (i = 0; i < 3; i++)
        l_885[i] = (-3L);
    for (i = 0; i < 4; i++)
        l_1690[i] = (-9L);
    for (i = 0; i < 6; i++)
        l_1865[i] = 0xBFAEF8B9L;
lbl_1704:
    if ((!func_19(((safe_mul_func_int16_t_s_s(1L, func_26(func_29(p_17, (g_18 , l_35), ((safe_rshift_func_uint8_t_u_s(((safe_mod_func_int32_t_s_s(((safe_sub_func_uint32_t_u_u(((((safe_mul_func_int16_t_s_s(g_18, (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(l_35, ((safe_sub_func_int32_t_s_s((safe_mod_func_int32_t_s_s((g_18 ^ p_17), g_18)), g_18)) < 0x38CAL))), 0x98AAL)))) != g_18) < g_18) & p_15), g_18)) < l_35), 0x2D50FA8FL)) < 1L), l_35)) && (-3L)), l_35, g_18), l_35))) > g_383), p_17, g_383, l_35)))
    {
        unsigned short l_878 = 65532UL;
        unsigned short l_884 = 0x72E9L;
        int l_897[10] = {(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L),(-1L)};
        int l_917 = 0x57F8E504L;
        int i;
        l_885[2] = (p_16 & func_52((+(l_885[2] = (g_458[0] , (safe_lshift_func_int8_t_s_u(((+1L) >= func_19((g_61[2] = func_63(func_68((((0L >= func_19(((safe_lshift_func_uint16_t_u_s(func_19((p_15 = (g_631 , (safe_sub_func_uint64_t_u_u((l_878 , ((safe_mul_func_uint16_t_u_u(((p_17 | (safe_mul_func_uint16_t_u_u(g_631, (l_883 = l_35)))) < 0x8C6AC3664BF0CA81LL), l_35)) , 0x814D8D1C92D2CD1ELL)), (-1L))))), l_884, p_17, p_16), l_35)) , p_16), p_16, l_884, l_878)) == (-6L)) != 0L)), g_579, g_596, p_17)), p_17, p_16, p_17)), g_383))))), g_579, p_17, g_458[2]));
        if ((safe_sub_func_int64_t_s_s(l_884, (1UL ^ func_68((g_18 == (((p_17 ^ g_579) && ((g_113 = p_15) , p_16)) || p_16)))))))
        {
            unsigned short l_895 = 5UL;
            int l_906 = 9L;
            l_897[8] = ((((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_uint8_t_u_u((((((g_587[0][7] | g_61[1]) ^ g_596) ^ l_878) && p_17) , (func_26(func_68((l_883 = (((((p_15 = p_16) != (g_253 <= p_16)) , ((l_894 && l_878) | p_16)) != g_582[1]) || g_579))), l_895) && p_15)), p_17)), l_878)), l_896)) == g_458[1]) >= p_16) <= l_878);
            for (g_865 = 0; (g_865 < (-13)); g_865--)
            {
                unsigned l_900 = 0UL;
                unsigned long long l_932 = 0xC4E00CFEB6492103LL;
                const unsigned char l_940 = 0x6DL;
                int l_941 = 0L;
                l_885[2] = func_26((l_900 = (g_61[1] = 0xADL)), (0x338D6295L ^ (l_884 || l_894)));
                for (p_15 = 0; (p_15 > 20); p_15 = safe_add_func_int64_t_s_s(p_15, 1))
                {
                    unsigned l_909 = 18446744073709551615UL;
                    int l_933 = 0xCA7F2CC0L;
                    l_885[2] = 0x21E39505L;
                    for (g_255 = (-22); (g_255 > (-6)); ++g_255)
                    {
                        unsigned short l_905 = 65535UL;
                        g_711[3][2][0] = (func_26(g_183, (l_35 ^ (p_16 | p_17))) , p_15);
                        if (l_905)
                            break;
                        g_711[3][2][3] = (!((g_611 = (func_68(func_68(g_61[1])) | l_895)) || (g_269[7][5][0] = l_900)));
                        l_906 = l_900;
                    }
                    l_917 = ((l_897[8] = p_15) , (safe_mod_func_int32_t_s_s(((l_909 ^ p_17) <= ((((safe_mul_func_uint8_t_u_u((0xF43DD0874CB951FBLL & (l_885[2] = func_29(g_164[1], l_900, ((safe_mod_func_int64_t_s_s((safe_unary_minus_func_uint32_t_u((l_885[0] = p_16))), (((g_582[7] = 18446744073709551615UL) < ((safe_add_func_int8_t_s_s((~((((3L < g_253) , p_17) < 3UL) & p_16)), g_183)) & g_253)) || g_269[7][5][0]))) , 1UL), p_17, g_579))), l_35)) & l_909) == 1L) > l_897[2])), p_17)));
                    if ((safe_lshift_func_uint8_t_u_s(((g_18 = (0L != (p_16 || 0x9764L))) , func_68((g_255 = l_900))), 4)))
                    {
                        l_920 = l_900;
                    }
                    else
                    {
                        unsigned char l_931 = 0xD4L;
                        g_711[3][2][3] = ((safe_add_func_uint64_t_u_u(((g_235 , (g_269[7][5][0] = (!(((g_526 >= (safe_rshift_func_uint8_t_u_u(func_63((l_931 = (safe_rshift_func_uint16_t_u_s(((((safe_mod_func_int32_t_s_s((1UL < ((l_900 ^ (l_885[2] = (l_897[8] = p_15))) ^ (l_35 && ((g_82 , (g_587[0][6] = (safe_mod_func_int64_t_s_s(((p_17 | func_63(l_900, g_631, g_410, g_222)) , p_17), 1UL)))) && 4294967295UL)))), l_920)) < g_410) <= 2UL) != l_35), g_711[3][2][3]))), p_17, g_502, g_61[1]), 0))) <= 0x4E7DL) , g_113)))) && l_900), g_611)) , 0x03E5BF94L);
                        l_933 = l_932;
                        l_941 = (safe_rshift_func_int16_t_s_s((safe_mul_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((func_52((func_52((((g_164[0] == (l_940 , (((l_909 ^ (l_933 ^ p_16)) | (!(+p_15))) & g_502))) , 0UL) | 1UL), p_17, p_17, p_16) | g_865), g_383, p_17, l_917) ^ 0UL), 1UL)), p_16)), p_16));
                    }
                }
            }
        }
        else
        {
            unsigned l_942 = 0xA76EF455L;
            int l_957 = 0L;
            unsigned long long l_978 = 0x463F49720A45741DLL;
            unsigned short l_1028 = 65535UL;
            if (l_942)
            {
                l_957 = ((((safe_mul_func_int16_t_s_s(((g_411 & (((((safe_unary_minus_func_uint16_t_u((!func_26((((func_68((p_15 = g_18)) , (p_15 = (safe_sub_func_int16_t_s_s((l_35 && (((safe_lshift_func_int16_t_s_u((-1L), 15)) <= (((0xD4479DBCL > (g_410 > ((((safe_rshift_func_uint8_t_u_s((((safe_lshift_func_int8_t_s_u(((l_883 = 1UL) && (+(safe_add_func_int64_t_s_s((!0xE17C24FA13380607LL), p_16)))), 0)) || p_16) && p_16), p_16)) || g_164[1]) > p_16) & g_82))) | g_526) == 65534UL)) < g_631)), g_269[7][5][0])))) != l_894) & p_17), g_253)))) & g_956) >= l_942) , p_17) == 0L)) ^ 0L), l_884)) >= p_16) <= p_17) , 0x70CF7F63L);
            }
            else
            {
                unsigned l_958 = 0xFD005EB1L;
                int l_1003 = 1L;
                int l_1017 = 6L;
                unsigned l_1029[9] = {0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL,0UL};
                int i;
                if (g_61[3])
                {
                    return l_958;
                }
                else
                {
                    g_711[5][1][1] = g_956;
                }
                g_974 = func_68(((((safe_sub_func_int64_t_s_s(l_958, (safe_rshift_func_int8_t_s_s(((0x6D47L | (l_957 = func_52((g_582[1] = (((safe_sub_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(l_967, 13)) , ((safe_add_func_int32_t_s_s(g_133, ((l_894 != (safe_rshift_func_uint16_t_u_s((func_26(g_311, (safe_add_func_uint32_t_u_u(0x9C8BE35FL, l_957))) && g_611), 3))) | 0x8881L))) , g_587[0][5])), 0x8CL)) , l_958) >= (-2L))), l_897[8], p_15, l_884))) , 5L), 2)))) != 0xA1L) , l_957) | 1UL));
                for (g_410 = 0; (g_410 < 13); ++g_410)
                {
                    short l_977 = 0xFBF2L;
                    l_885[2] = g_956;
                    l_897[8] = (((g_411 < (l_978 = (!(l_917 = l_977)))) > g_974) ^ l_920);
                    l_897[8] = l_958;
                }
                for (g_596 = 0; (g_596 != (-1)); --g_596)
                {
                    int l_1007[9][5] = {{0x25FCBD6DL,0x11DA2940L,0L,0L,0x11DA2940L},{(-8L),0x5AB999AFL,0xEFA4674AL,4L,0L},{0x25FCBD6DL,0x11DA2940L,0L,0L,0x25FCBD6DL},{0xEFA4674AL,0L,0x78041B1EL,(-2L),(-8L)},{0L,0x25FCBD6DL,0x89CEC924L,0x89CEC924L,0x25FCBD6DL},{0xEFA4674AL,0L,0x78041B1EL,(-2L),(-8L)},{0L,0x25FCBD6DL,0x89CEC924L,0x89CEC924L,0x25FCBD6DL},{0xEFA4674AL,0L,0x78041B1EL,(-2L),(-8L)},{0L,0x25FCBD6DL,0x89CEC924L,0x89CEC924L,0x25FCBD6DL}};
                    int l_1008 = (-1L);
                    int i, j;
                    for (g_235 = (-22); (g_235 != 50); ++g_235)
                    {
                        const unsigned short l_1006 = 0x6410L;
                        l_1008 = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint16_t_u_u((((l_885[2] = (safe_mod_func_int32_t_s_s((safe_add_func_int16_t_s_s((((safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(((((g_956 < (l_897[8] = g_956)) , ((p_17 , l_958) , func_19((safe_rshift_func_uint16_t_u_u((((safe_mul_func_uint16_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int16_t_s_s(p_17, ((l_1003 = g_458[0]) | (safe_sub_func_uint8_t_u_u((p_15 | g_458[0]), (p_16 != p_17)))))), 0xDCCDD030L)), 0xFE0CL)) || 1UL) , 9UL), 12)), p_17, l_1006, p_15))) , 1L) ^ 0x9DE7C3ECL), 0xAC75L)), l_896)) , g_101) < 1UL), l_1007[5][2])), (-1L)))) == g_582[2]) < p_15), g_579)), 12));
                    }
                    g_711[3][2][3] = ((0UL >= g_502) & (+(safe_sub_func_int64_t_s_s((((g_582[1] & 0x4919E3DB0B980CE2LL) || (l_1017 = (g_611 = (func_63(func_63(l_1008, p_16, (((safe_mod_func_int64_t_s_s(((safe_add_func_uint8_t_u_u(p_15, func_68(((safe_lshift_func_int16_t_s_u(((l_917 , (0x411404E88A8AAD80LL > g_164[2])) & l_1003), l_967)) != l_957)))) <= 0x7AA4C4836DEDF04BLL), (-7L))) <= p_16) <= l_1017), l_957), p_16, p_15, l_917) < (-1L))))) <= l_978), l_1007[7][1]))));
                    l_1029[6] = ((p_15 | (((0x05A55A74037D8D84LL < (safe_lshift_func_uint16_t_u_u(l_884, 12))) | (safe_lshift_func_int8_t_s_u(l_967, (safe_add_func_int8_t_s_s((l_917 = p_17), (func_63(((((((safe_add_func_int8_t_s_s((g_18 && ((((func_68(p_16) > 255UL) , g_631) , l_957) < p_16)), 0xB9L)) == p_16) == g_269[7][5][0]) || 1L) || 0xA01C7570B16172FBLL) , 0x4A46FF06L), g_311, p_16, l_1028) < 0x88EE2C90279B1DB0LL)))))) != p_17)) ^ p_16);
                }
            }
        }
        l_885[1] = l_967;
    }
    else
    {
        unsigned char l_1038 = 255UL;
        int l_1045 = 9L;
        g_711[3][2][3] = (safe_add_func_uint8_t_u_u((((l_885[0] = (safe_sub_func_uint32_t_u_u(l_894, ((((safe_rshift_func_int8_t_s_s(p_15, ((safe_lshift_func_uint16_t_u_s(g_235, 2)) , ((l_1038 && func_19(((safe_mul_func_int16_t_s_s(((g_61[1] & (safe_sub_func_uint64_t_u_u((((safe_lshift_func_uint16_t_u_u(p_16, 3)) , (l_1045 = l_885[0])) ^ (safe_lshift_func_int16_t_s_u(l_1048, 1))), 2UL))) < l_1038), 0xC2B0L)) >= l_35), g_222, p_16, l_1038)) < p_16)))) || p_17) < l_1038) >= g_502)))) & 8UL) || 0x8D39L), 255UL));
    }
    g_711[3][1][0] = ((g_526 ^ (l_920 < l_885[2])) == g_458[0]);
    if (l_35)
    {
        unsigned short l_1054[10][4][6] = {{{0UL,0xC59CL,0xA45AL,0UL,0xE710L,65535UL},{0xD563L,0UL,0UL,65535UL,0x6E7BL,0x8756L},{0x3563L,0UL,1UL,0x59E9L,0xE710L,2UL},{0x77D0L,0xC59CL,0x3563L,0UL,0UL,0UL}},{{0x8756L,0x641EL,0xE910L,0x1007L,65535UL,65527UL},{0UL,65535UL,0xA45AL,0xA45AL,65535UL,0UL},{0UL,0UL,65535UL,65535UL,0xD563L,0x641EL},{65535UL,1UL,65535UL,2UL,0xE710L,0x59E9L}},{{65535UL,3UL,2UL,65535UL,1UL,0UL},{0UL,0xD563L,1UL,0xA45AL,0xE910L,0xAE72L},{0UL,0xC59CL,4UL,0x1007L,0x1007L,0xAE72L},{0xE710L,0x8756L,65535UL,0x8756L,0xE710L,3UL}},{{65535UL,0xAE72L,0xD563L,0UL,0UL,65535UL},{65535UL,1UL,0UL,0xAE72L,0x641EL,65535UL},{0x5168L,1UL,0xD563L,65535UL,0x6E7BL,3UL},{0x641EL,0x1007L,65535UL,2UL,4UL,0xAE72L}},{{1UL,0x641EL,0x59E9L,0xD563L,0x2287L,0x2287L},{65535UL,65527UL,65527UL,65535UL,0x1007L,0xE910L},{0xE910L,1UL,1UL,0x8756L,0xAE72L,0UL},{65535UL,0xE710L,0xD563L,65535UL,0xAE72L,65535UL}},{{65527UL,1UL,0x77D0L,2UL,0x1007L,0x8756L},{0x5168L,65527UL,65535UL,0x6E7BL,0x2287L,3UL},{0UL,0x641EL,0x6E7BL,0xE910L,4UL,0xE910L},{65535UL,0x1007L,65535UL,0xD563L,0x6E7BL,1UL}},{{65535UL,1UL,65527UL,0UL,0x641EL,0xE710L},{0xAE72L,1UL,65535UL,0UL,0UL,0xD563L},{65535UL,0xAE72L,65535UL,2UL,65535UL,1UL},{1UL,0x3563L,65535UL,0xA45AL,0x6E7BL,4UL}},{{0x381CL,0x8756L,0UL,65535UL,65535UL,0UL},{1UL,1UL,65535UL,1UL,0x77D0L,65535UL},{0UL,0x6E7BL,65535UL,0xE710L,0xD563L,65535UL},{1UL,0UL,65535UL,0x3563L,1UL,65535UL}},{{0xA45AL,0x3563L,65535UL,4UL,65527UL,0UL},{4UL,65527UL,0UL,2UL,0x59E9L,4UL},{65535UL,1UL,65535UL,1UL,65535UL,1UL},{65535UL,0x8756L,0xE710L,3UL,0xD563L,2UL}},{{1UL,65535UL,3UL,0x59E9L,0UL,65535UL},{1UL,65535UL,0UL,0UL,0xD563L,65535UL},{4UL,0x8756L,1UL,0x3563L,65535UL,0xA45AL},{65535UL,1UL,65535UL,0xC59CL,0x59E9L,0xE910L}}};
        int l_1085 = 0xACE75569L;
        int l_1175[4][3];
        unsigned l_1241 = 4294967295UL;
        unsigned char l_1262 = 0xBFL;
        short l_1300 = (-3L);
        int l_1311 = 0x213E5C2FL;
        long long l_1406 = 1L;
        int l_1437 = 6L;
        unsigned short l_1493[1][10][8] = {{{9UL,0x6C23L,0x353DL,0x22B6L,0UL,0x716DL,0UL,0x22B6L},{3UL,0x6C23L,3UL,0x716DL,9UL,0xA6ADL,0UL,0x716DL},{0UL,1UL,3UL,1UL,0UL,0x6C23L,0UL,0xA6ADL},{0UL,0x6C23L,0UL,0xA6ADL,0UL,0x6C23L,0UL,1UL},{9UL,1UL,0UL,0x716DL,0x353DL,0x716DL,0UL,1UL},{0UL,0x22B6L,3UL,0xA6ADL,0x353DL,1UL,0x353DL,0xA6ADL},{9UL,0x22B6L,9UL,1UL,0UL,0x716DL,0x353DL,0x716DL},{0UL,1UL,3UL,1UL,0UL,0x6C23L,0UL,0xA6ADL},{0UL,0x6C23L,0UL,0xA6ADL,0UL,0x6C23L,0UL,1UL},{9UL,1UL,0UL,0x716DL,0x353DL,0x716DL,0UL,1UL}}};
        unsigned l_1534 = 4294967287UL;
        int l_1542 = 0x3215E96CL;
        int l_1608 = 0x77B64883L;
        int i, j, k;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 3; j++)
                l_1175[i][j] = 0x7E93737EL;
        }
lbl_1137:
        for (g_101 = (-13); (g_101 == 24); g_101 = safe_add_func_uint16_t_u_u(g_101, 6))
        {
            const short l_1051 = (-1L);
            g_711[3][2][3] = ((l_1051 & func_26(p_17, (p_16 > ((!l_1051) , (p_16 ^ (safe_add_func_uint32_t_u_u(((l_1054[4][3][4] >= (safe_sub_func_int64_t_s_s((l_1051 || g_292), (safe_sub_func_int8_t_s_s(((65535UL != 65535UL) && g_631), l_1054[4][3][4]))))) && 0UL), g_255))))))) & l_883);
            if ((safe_sub_func_int64_t_s_s((g_458[0] = 0x5F3CB588EDEB71A9LL), (safe_lshift_func_int16_t_s_u(((func_26(g_269[9][1][0], ((safe_lshift_func_int16_t_s_u(((func_26((+(p_16 != (safe_sub_func_int64_t_s_s(((safe_add_func_uint64_t_u_u((safe_rshift_func_int16_t_s_u((p_16 > (safe_mul_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(p_16, g_222)), ((g_61[6] | (l_1051 >= (safe_sub_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(func_26((safe_add_func_uint8_t_u_u(((func_26((p_15 = p_17), p_17) < 0x80537A340D232761LL) >= (-6L)), g_526)), g_133), 0x62L)), 7)) > l_1051), 0x66FAL)))) <= g_61[0])))), 7)), g_18)) < l_1048), g_974)))), g_411) ^ l_1051) , l_1051), l_1051)) , l_1051)) > 65532UL) || l_920), g_292)))))
            {
                long long l_1086 = 0L;
                g_711[1][3][0] = (((l_1086 = func_26((((g_269[9][6][1] = (l_1085 = (g_113 , ((safe_lshift_func_uint16_t_u_s((func_26(g_587[0][5], l_1054[4][3][4]) , p_16), 7)) != (p_15 ^ ((((p_17 & p_15) & ((g_865 = g_526) , 0xABDF14DDL)) , p_15) >= (-1L))))))) , p_16) > 0x7ACBB0C7087C562BLL), l_883)) , 0L) , l_1086);
                if (p_16)
                    continue;
                g_18 = g_458[0];
            }
            else
            {
                l_885[2] = 0xE900D5B9L;
                return g_526;
            }
        }
lbl_1497:
        if ((g_311 | (safe_rshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(((1L || ((g_18 = (safe_lshift_func_uint8_t_u_s((g_269[7][5][0] , g_711[3][2][3]), (g_579 = (safe_mul_func_int8_t_s_s(l_1085, ((((l_885[0] != ((6L && (safe_add_func_int64_t_s_s(p_17, g_611))) , p_16)) <= g_82) & 248UL) , 0xC0L))))))) , g_411)) & g_502), 4)), 13))))
        {
            unsigned l_1113 = 4294967295UL;
            int l_1148 = 1L;
            int l_1149[10];
            unsigned l_1155 = 5UL;
            char l_1206 = (-1L);
            const int l_1219 = 0x9D39B07CL;
            int i;
            for (i = 0; i < 10; i++)
                l_1149[i] = 0xDC7249DFL;
            for (g_526 = 0; (g_526 != 10); ++g_526)
            {
                int l_1136[4] = {2L,2L,2L,2L};
                int i;
                g_711[0][3][3] = (g_711[5][0][1] ^ (safe_rshift_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u(0x4B759AF0F2EEB876LL, 18446744073709551615UL)), (g_183 = (!(safe_mod_func_uint16_t_u_u((safe_mod_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_u((g_611 = (safe_rshift_func_int8_t_s_s((g_579 = (~((g_61[3] >= (g_164[0] && (0x60L > (~(g_222 >= l_1113))))) & ((safe_sub_func_int8_t_s_s(p_15, g_82)) || 1L)))), 6))), l_1113)), g_1116[2])), p_17)), l_1113)))))));
                for (g_183 = 0; (g_183 != 45); g_183 = safe_add_func_uint8_t_u_u(g_183, 2))
                {
                    char l_1134 = 0x26L;
                    unsigned short l_1150 = 65535UL;
                    if ((safe_lshift_func_int16_t_s_s((-10L), 0)))
                    {
                        l_883 = 0xFAB62ED1L;
                    }
                    else
                    {
                        unsigned l_1133 = 18446744073709551611UL;
                        int l_1135 = 0x94753F33L;
                        l_1135 = (safe_rshift_func_uint8_t_u_s(p_16, (safe_sub_func_int16_t_s_s(((safe_mul_func_int16_t_s_s(func_68((p_15 , func_26((g_502 , g_253), ((safe_mul_func_uint16_t_u_u((p_15 < (+(safe_add_func_int8_t_s_s((l_1133 = ((safe_mul_func_uint8_t_u_u(g_582[1], p_17)) & g_865)), l_1134)))), p_16)) , p_17)))), p_17)) ^ 0x05L), p_16))));
                        l_885[0] = p_17;
                        g_711[0][1][2] = l_1136[0];
                        if (g_410)
                            goto lbl_1137;
                    }
                    g_711[3][2][3] = l_1134;
                    l_1150 = (l_1149[2] = ((safe_sub_func_uint16_t_u_u((~(~(p_16 <= ((g_133 = (g_253 = l_1136[3])) != (((((safe_mul_func_int16_t_s_s(0L, (g_611 = ((safe_add_func_uint64_t_u_u((l_1148 = (safe_rshift_func_uint16_t_u_u((((safe_lshift_func_uint16_t_u_s(((g_711[3][2][3] = l_1085) | 0xD20026D6L), (p_17 || p_15))) > (-1L)) ^ l_1136[0]), 0))), 1UL)) != p_16)))) && l_1134) < l_885[2]) <= 1UL) && p_15))))), l_1134)) <= 0xFF09A1E0A5C84D70LL));
                    return l_1113;
                }
                if (l_1054[4][0][5])
                    continue;
            }
            if (g_164[0])
            {
                unsigned l_1168 = 1UL;
                int l_1185 = 0x93CFD637L;
                int l_1187[5] = {0x3B710714L,0x3B710714L,0x3B710714L,0x3B710714L,0x3B710714L};
                unsigned char l_1242[5];
                int i;
                for (i = 0; i < 5; i++)
                    l_1242[i] = 1UL;
                for (l_1113 = 0; (l_1113 <= 3); l_1113 += 1)
                {
                    return g_502;
                }
                if (g_611)
                {
                    long long l_1171 = (-1L);
                    int l_1172 = 1L;
                    l_1149[8] = func_52((g_582[6] , (((safe_rshift_func_uint16_t_u_s(g_587[0][0], 9)) & ((safe_mod_func_int8_t_s_s(func_63(l_1155, (safe_lshift_func_int16_t_s_s(((safe_mod_func_uint64_t_u_u((g_458[0] > (p_17 , ((safe_mul_func_int16_t_s_s(0x6131L, (((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(func_26(((((((safe_add_func_int16_t_s_s(l_1168, ((func_26(p_16, ((l_1149[4] = (safe_add_func_int32_t_s_s((g_582[7] > g_82), l_896))) && p_15)) , p_16) == 0x05L))) < 0x17D47FCBL) , 0x67A1L) | 0x70D1L) & 1UL) , 0x08L), g_611), p_17)), l_1171)) , p_15) <= 0xE1B8L))) && 0UL))), 8UL)) , l_894), 15)), g_1116[2], g_253), p_16)) | 1UL)) || (-1L))), l_1171, p_16, l_1168);
                    l_1172 = l_1085;
                    g_711[0][2][3] = (safe_rshift_func_int8_t_s_u(g_61[4], 3));
                    if (l_1175[2][2])
                    {
                        int l_1186 = 3L;
                        l_1172 = p_16;
                        l_1186 = ((((((l_1085 = p_15) | (safe_mod_func_int16_t_s_s((safe_add_func_int16_t_s_s((+g_269[7][5][0]), func_68((l_883 = (safe_add_func_uint32_t_u_u(((g_253 && g_1182) ^ ((((((0xFF598C4BL || ((safe_mul_func_int8_t_s_s(l_1172, g_101)) | p_16)) , (g_235 = (l_1185 = g_183))) > p_17) <= g_255) ^ 0UL) , 0x58F2L)), 0x7D3DCCC6L)))))), p_15))) , 0xE34664CBL) | p_16) , g_101) ^ p_15);
                        l_1186 = l_1187[3];
                        g_1182 = l_1186;
                    }
                    else
                    {
                        l_883 = ((safe_mod_func_uint32_t_u_u((safe_add_func_int32_t_s_s(0xF4FE8E15L, 0L)), (1L ^ g_255))) , (g_1182 = p_15));
                    }
                }
                else
                {
                    int l_1218 = 0x4FBF4D04L;
                    int l_1239[8];
                    int i;
                    for (i = 0; i < 8; i++)
                        l_1239[i] = 0L;
lbl_1256:
                    for (g_133 = 0; (g_133 != 15); g_133++)
                    {
                        const unsigned short l_1209 = 65535UL;
                        int l_1240 = (-5L);
                        int l_1243 = 0x34EBA9EEL;
                        l_885[1] = (safe_mul_func_uint16_t_u_u((safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s(0xB099L, (0xFA82FCB5L >= g_292))), (safe_sub_func_uint64_t_u_u(((safe_rshift_func_uint16_t_u_s((safe_rshift_func_int8_t_s_s((l_1206 > ((safe_sub_func_int64_t_s_s(l_1209, (p_17 = g_1116[2]))) && ((safe_mod_func_int16_t_s_s(((safe_mod_func_uint32_t_u_u(l_1209, (safe_sub_func_int8_t_s_s(func_26(((safe_lshift_func_int8_t_s_u((g_61[0] = 0xB0L), l_1218)) < 0x9506L), g_596), l_1219)))) , 8L), p_16)) == 9UL))), l_1148)), p_15)) || 0x6F59FA8CL), p_16)))), 65535UL));
                        l_1185 = (((safe_mul_func_uint8_t_u_u(((((l_1218 && ((l_1218 , p_17) <= (l_1243 = ((safe_add_func_int8_t_s_s(p_16, ((safe_sub_func_uint8_t_u_u((l_885[2] = (((safe_sub_func_uint8_t_u_u((~p_17), (func_26(((safe_mod_func_int16_t_s_s(p_15, ((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_int64_t_s((safe_rshift_func_uint16_t_u_s((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((l_1239[1] = 65535UL) <= p_15), ((-1L) ^ 0UL))), 1L)), 4)))), p_16)) , l_1240))) >= 0x93E0EC3A11DE80F5LL), g_410) , (-6L)))) > g_582[1]) ^ l_1241)), l_1054[4][2][0])) ^ g_587[0][5]))) & l_1242[2])))) <= 0xB7L) <= (-3L)) != p_17), 0xFBL)) && 5L) && 0xFEL);
                        return l_1243;
                    }
                    if (l_1242[0])
                    {
                        g_711[0][2][2] = (p_15 == p_16);
                        g_1182 = (safe_mul_func_int8_t_s_s(p_17, (safe_mul_func_uint8_t_u_u((g_956 , 1UL), (l_1239[1] = (((p_15 = l_1149[2]) == (l_883 >= func_52((safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s(((1L ^ p_16) & ((safe_mul_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((g_611 = (0x00FBL == (g_526 == 0x89017A753376B004LL))), 7)), p_17)) | 65533UL)), 1)), 0x5847L)), l_1187[3], l_1149[2], p_17))) , 0x1CL))))));
                        l_1239[5] = g_18;
                    }
                    else
                    {
                        return p_16;
                    }
                    if (p_15)
                        goto lbl_1256;
                }
                return g_1257;
            }
            else
            {
                unsigned short l_1268 = 0x3F45L;
                int l_1278 = 0x76E02960L;
                long long l_1297 = (-1L);
                if (p_15)
                {
                    const unsigned short l_1267 = 0xA126L;
                    int l_1276 = 0L;
                    for (g_865 = 0; (g_865 <= (-21)); --g_865)
                    {
                        unsigned l_1275 = 0x22D58E9BL;
                        int l_1277[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_1277[i] = (-1L);
                        l_1085 = ((safe_rshift_func_int8_t_s_u((((p_16 , (func_52(l_1262, (g_411 = 0x81A08063L), p_15, (((safe_lshift_func_uint16_t_u_s(((((func_26((((((((((safe_lshift_func_int16_t_s_s((l_885[0] , func_68((l_1267 & (l_1268 = p_15)))), 9)) , g_711[2][3][2]) & 0x4E871746L) & g_865) | p_16) & l_1267) && l_1268) ^ (-1L)) != p_17), g_502) == 4294967291UL) , 0xF18A330BL) <= p_16) != 0L), 9)) , g_865) || g_579)) >= l_920)) ^ g_1182) || g_582[1]), p_15)) <= 9UL);
                        g_711[3][2][3] = ((safe_mod_func_uint8_t_u_u((g_113 = p_17), (safe_lshift_func_int16_t_s_u(g_865, p_16)))) , ((p_15 = (p_15 || ((g_235 && (safe_rshift_func_int8_t_s_s((func_52((l_1085 = (l_1278 = (l_1277[3] = (((l_1276 = func_68(l_1275)) == (l_1268 , l_885[2])) && g_61[6])))), g_1257, g_1182, p_15) > p_15), 5))) != p_16))) , p_17));
                    }
                    l_1300 = (((g_164[0] > (safe_mod_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(((safe_add_func_uint64_t_u_u(p_16, ((((0xBEL ^ p_16) | (l_1299 = (safe_add_func_int32_t_s_s((safe_mod_func_uint64_t_u_u((((safe_mod_func_uint8_t_u_u((safe_sub_func_int64_t_s_s((safe_sub_func_uint8_t_u_u(((l_1241 != g_458[0]) == (((safe_add_func_uint32_t_u_u((p_16 > (p_16 != (((func_26(((func_26((g_255 = (g_1116[1] = p_16)), l_1297) == g_253) != 0xFBAEFB75EC6AFF32LL), p_16) , 0xD0E1L) < 6L) || l_35))), g_1298)) < 0L) & g_631)), l_1149[5])), 18446744073709551615UL)), g_631)) || g_1257) >= l_1149[1]), l_1149[7])), (-1L))))) >= l_967) >= p_15))) , p_17), 3)) >= 0x05F8L) && p_17), l_1262))) , p_16) || (-7L));
                    g_18 = 0xC2D4B21EL;
                    l_883 = (((l_1300 , ((g_102 = (safe_rshift_func_uint8_t_u_s(0x3AL, 5))) , g_1116[0])) > 0UL) ^ (g_164[1] >= ((safe_lshift_func_uint8_t_u_u((safe_sub_func_int32_t_s_s((safe_mul_func_uint16_t_u_u((l_1297 || (g_596 = (((l_1276 = 5L) | ((g_587[0][2] = l_1155) & (safe_sub_func_uint8_t_u_u((0UL <= g_458[0]), g_222)))) && p_15))), 0x8681L)), l_885[2])), 5)) & 0xA430L)));
                }
                else
                {
                    l_1311 = p_16;
                }
                l_1085 = (func_26(l_1175[3][1], func_68(((l_1278 = (safe_mul_func_uint16_t_u_u((g_974 = (safe_lshift_func_uint16_t_u_u((p_17 | (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u((g_383 != (l_1113 ^ func_29((l_1149[2] = (g_164[0] || g_865)), (g_711[3][2][3] ^ (l_1148 = 0xC0E3L)), l_1113, l_1175[3][0], g_253))), p_15)), g_383))), 0))), 0xA8B5L))) && l_1085))) | 0x5EBF611EL);
            }
        }
        else
        {
            unsigned l_1320 = 0x27D5E11DL;
            for (l_1262 = 0; (l_1262 <= 2); l_1262 += 1)
            {
                int i;
                g_711[2][2][1] = (l_1320 = g_1116[l_1262]);
                for (g_411 = 0; (g_411 <= 2); g_411 += 1)
                {
                    unsigned short l_1327[3];
                    int i;
                    for (i = 0; i < 3; i++)
                        l_1327[i] = 65535UL;
                    for (l_1311 = 2; (l_1311 >= 0); l_1311 -= 1)
                    {
                        int i;
                        g_711[3][2][3] = (((g_1298 , (l_1320 , (safe_mod_func_int64_t_s_s(((((l_1320 != 0x11F5L) | (safe_mul_func_uint8_t_u_u(((g_1116[l_1311] = (((-3L) && (18446744073709551609UL == p_16)) >= (safe_mod_func_int64_t_s_s(p_17, g_587[0][5])))) , l_1054[4][1][4]), l_1327[0]))) && g_1116[l_1262]) < g_974), p_15)))) < g_164[0]) , p_17);
                        if (l_1085)
                            goto lbl_1137;
                    }
                }
                return p_15;
            }
            for (g_253 = 0; (g_253 == 6); g_253 = safe_add_func_uint32_t_u_u(g_253, 5))
            {
                int l_1345 = 0x22C5F843L;
                for (l_1311 = 0; (l_1311 < 2); l_1311++)
                {
                    unsigned char l_1342 = 3UL;
                    int l_1348 = 0x65151650L;
                    unsigned long long l_1349[2][10] = {{0x50E7C0D7709800FELL,18446744073709551615UL,0x50E7C0D7709800FELL,0x50E7C0D7709800FELL,18446744073709551615UL,0x50E7C0D7709800FELL,0x50E7C0D7709800FELL,18446744073709551615UL,0x50E7C0D7709800FELL,0x50E7C0D7709800FELL},{18446744073709551615UL,18446744073709551615UL,0x97BE585C2699FF4BLL,18446744073709551615UL,18446744073709551615UL,0x97BE585C2699FF4BLL,18446744073709551615UL,18446744073709551615UL,0x97BE585C2699FF4BLL,18446744073709551615UL}};
                    int l_1350 = 0x13DE1379L;
                    int i, j;
                    if (g_311)
                        break;
                    l_1350 = ((safe_mul_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_974, ((safe_mul_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((l_1348 = (safe_lshift_func_int16_t_s_s(((0x00BB3976L ^ (((l_1342 < func_68((g_255 = (-2L)))) & ((safe_lshift_func_int16_t_s_u(((g_269[5][4][1] = l_1345) != (-1L)), (safe_mul_func_uint8_t_u_u(l_885[1], ((p_15 , l_1320) ^ p_17))))) , l_1320)) & g_458[2])) || 18446744073709551613UL), l_894))), l_883)) && p_16), p_16)) < l_1320))), g_458[2])) == l_1349[1][8]);
                }
            }
        }
lbl_1670:
        if ((!func_19(l_920, ((safe_add_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((p_15 ^ (l_1175[2][1] == (-1L))), 9)), (l_885[2] , (safe_rshift_func_int8_t_s_s(func_29(((((safe_add_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(0x02L, l_1300)), 0x6EEDL)) || (0xABL && l_1175[2][2])) && 0x64C21709L) < 6L), p_16, p_16, g_582[5], l_35), p_15))))) , l_885[2]), p_17, g_1257)))
        {
            unsigned short l_1363 = 0x1E67L;
            int l_1423 = 1L;
            long long l_1451 = 0xD4DE5D89A50EDD14LL;
            l_883 = ((func_68(p_17) != (g_587[0][9] | (g_587[0][5] , (l_885[2] = (((((~(safe_rshift_func_uint16_t_u_s((g_383 , g_711[3][2][3]), 2))) , ((g_255 = (g_865 <= (~l_1363))) , l_885[0])) ^ p_16) >= p_16) == p_17))))) > g_596);
            g_711[1][3][0] = (+(+0x24DBDEB7L));
            for (g_1298 = (-7); (g_1298 > 15); ++g_1298)
            {
                int l_1368 = 6L;
                int l_1402[2][1][10] = {{{0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L}},{{0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L,0xCA667BE5L}}};
                int l_1420 = 0xAF9B4656L;
                int l_1436 = 0x52C0927BL;
                int i, j, k;
                g_18 = (safe_mul_func_int16_t_s_s((g_611 = (~l_1368)), l_885[2]));
                if (p_16)
                {
                    short l_1369 = 0x0CCDL;
                    l_1369 = 0xF10C6EAAL;
                    l_885[2] = 0x410CA9E0L;
                }
                else
                {
                    unsigned l_1390[8] = {0x32FB0A24L,0x32FB0A24L,0x32FB0A24L,0x32FB0A24L,0x32FB0A24L,0x32FB0A24L,0x32FB0A24L,0x32FB0A24L};
                    int i;
                    if (func_68((p_17 , (safe_mul_func_uint8_t_u_u((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s(((safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(((~(safe_mod_func_uint64_t_u_u((((0L && 0UL) , (2L <= (safe_add_func_uint16_t_u_u((safe_mod_func_uint32_t_u_u(p_16, (l_883 ^ (safe_mul_func_uint16_t_u_u((safe_add_func_uint64_t_u_u(p_17, ((((p_15 && (l_1390[6] && (-9L))) >= 0x63080180B5D050B8LL) || g_18) || 7L))), p_15))))), g_526)))) <= l_1368), 0x1C537A9C75582C02LL))) , l_1054[4][3][1]), p_15)) & 1L), p_16)) & g_183), g_711[2][3][2])), 0x69CDL)), g_956)))))
                    {
                        if (g_269[0][1][1])
                            break;
                        g_18 = ((-9L) > (safe_sub_func_int64_t_s_s(4L, 0xBFEC54F053B454A8LL)));
                    }
                    else
                    {
                        if (l_1363)
                            break;
                    }
                }
                for (g_526 = (-18); (g_526 < 25); g_526 = safe_add_func_int8_t_s_s(g_526, 6))
                {
                    int l_1407 = 0x4BBB2064L;
                    int l_1408 = 5L;
                    if (((safe_add_func_int64_t_s_s((safe_add_func_uint32_t_u_u(g_411, g_596)), ((safe_unary_minus_func_uint8_t_u(((((safe_rshift_func_int16_t_s_u((l_1402[1][0][0] = g_164[0]), 4)) >= ((l_1408 = (((4294967295UL <= ((safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int16_t_s((func_26(((l_1406 >= p_15) ^ l_1363), p_17) > p_17))), 6)) || l_1407)) && 0UL) , l_1175[0][0])) < 249UL)) > l_896) , 255UL))) && l_1402[1][0][3]))) , g_235))
                    {
                        unsigned l_1419 = 6UL;
                        g_711[3][2][3] = l_1406;
                        l_1402[1][0][0] = (func_68(((0x3ACAL & (g_611 = 0xF6A3L)) && func_63(func_63(((l_1408 , ((p_15 , func_68((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((p_15 >= (safe_rshift_func_int8_t_s_s((p_16 >= (safe_sub_func_uint8_t_u_u((func_63((safe_sub_func_uint32_t_u_u(g_1116[2], ((((g_269[7][5][0] = l_1419) , (1UL <= 0x78L)) ^ 1UL) | p_15))), p_17, p_17, p_15) >= g_1298), 1L))), l_1419))), p_17)), p_16)))) , 65535UL)) , p_17), g_1182, l_1420, l_1363), g_582[3], g_579, g_1298))) , g_133);
                        l_1402[1][0][9] = (-1L);
                        if (p_17)
                            break;
                        if (l_1241)
                            goto lbl_1670;
                    }
                    else
                    {
                        l_1402[1][0][0] = 0x1F39087EL;
                        g_711[4][3][2] = (-1L);
                    }
                    l_1402[1][0][3] = (l_920 , ((-4L) | (safe_mul_func_uint16_t_u_u(func_26(l_1300, ((g_311 = func_26(((l_1363 , (l_1402[1][0][0] = (g_164[1] = p_17))) || (l_1423 & p_16)), (l_1363 <= p_15))) < g_235)), g_611))));
                    if (l_1262)
                    {
                        const unsigned l_1434 = 0x9D1381DFL;
                        unsigned char l_1438 = 1UL;
                        g_711[0][1][2] = ((safe_lshift_func_uint16_t_u_u((255UL != func_26((p_17 & ((!((~(safe_lshift_func_int16_t_s_s(((((safe_lshift_func_uint16_t_u_s(func_63((l_1437 = (l_885[2] = (safe_mul_func_int8_t_s_s(((l_1085 = g_587[0][5]) < (safe_add_func_int16_t_s_s(l_1434, p_17))), ((safe_unary_minus_func_int32_t_s(0xC6EA5286L)) && l_1436))))), l_1434, func_26((((l_894 == g_269[7][5][0]) != 1L) > 0x50D05F680508B43ALL), l_967), p_15), l_1436)) , 0x6217L) == l_1368) < p_16), 10))) > g_1298)) , g_711[3][2][3])), l_1420)), l_1438)) || l_1434);
                    }
                    else
                    {
                        l_1085 = (p_17 < (g_269[4][3][1] <= g_61[1]));
                        return g_956;
                    }
                }
                g_711[5][1][1] = (g_1257 < (((l_1406 >= ((safe_rshift_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((safe_lshift_func_uint8_t_u_s(2UL, 1)), (g_164[0] = ((safe_mul_func_uint16_t_u_u(((safe_lshift_func_int8_t_s_u((g_1116[0] = ((l_1423 = ((l_1085 = (safe_add_func_uint64_t_u_u((l_1085 >= (0x8932L > (((l_1451 = (0UL >= (p_15 && p_15))) <= ((safe_sub_func_int64_t_s_s(l_1085, l_1402[0][0][5])) , l_1363)) == p_15))), 0xB7885E67D8E55CEBLL))) , 4294967291UL)) & l_1175[2][2])), p_15)) && l_896), 0x8B09L)) , g_974)))), g_611)) || p_16)) & p_17) <= 0UL));
            }
        }
        else
        {
            unsigned l_1454 = 18446744073709551614UL;
            int l_1471 = 0L;
            int l_1492[5][10] = {{(-8L),(-4L),(-1L),(-1L),(-4L),(-8L),4L,(-4L),4L,(-8L)},{0x54264E3BL,(-4L),0L,(-4L),0x54264E3BL,0L,0x4A7D5F3FL,0x4A7D5F3FL,0L,0x54264E3BL},{0x54264E3BL,4L,4L,0x54264E3BL,(-1L),(-8L),0x54264E3BL,(-8L),(-1L),0x54264E3BL},{(-8L),0x54264E3BL,(-8L),(-1L),0x54264E3BL,4L,4L,0x54264E3BL,(-1L),(-8L)},{0x4A7D5F3FL,0x4A7D5F3FL,0L,0x54264E3BL,(-4L),0L,(-4L),0x54264E3BL,0L,0x4A7D5F3FL}};
            int l_1609 = 0xF365D060L;
            int l_1616[9][5] = {{0x03C4E73BL,0xB452FEF0L,0x12474672L,8L,0xE5247BE2L},{0x365F9F86L,0x03C4E73BL,0x3155AF8CL,(-7L),8L},{0x69BC29CBL,(-1L),0xE5247BE2L,1L,0x8B150813L},{0x365F9F86L,1L,0L,0xE5247BE2L,1L},{1L,1L,0x3BE7BBB2L,0xE5247BE2L,0xB452FEF0L},{8L,0x12474672L,1L,8L,1L},{0x69BC29CBL,0x9D3CEF20L,(-6L),0L,0x9D3CEF20L},{1L,0x12474672L,0x03C4E73BL,0L,0L},{1L,1L,1L,(-6L),0L}};
            int l_1637 = 0x8F018982L;
            unsigned short l_1669 = 0xF96DL;
            int i, j;
            for (p_15 = 7; (p_15 >= 0); p_15 -= 1)
            {
                int l_1455 = 0x09F77B9AL;
                long long l_1521 = 0xF32F3C0C8651C058LL;
                unsigned char l_1524 = 251UL;
                int l_1533 = 1L;
                unsigned l_1535 = 18446744073709551613UL;
                int i;
                g_711[3][2][3] = ((+g_582[p_15]) && (l_1454 || 5UL));
                l_1455 = p_17;
                if (p_17)
                {
                    char l_1460[4][8];
                    int i, j;
                    for (i = 0; i < 4; i++)
                    {
                        for (j = 0; j < 8; j++)
                            l_1460[i][j] = 0x00L;
                    }
                    for (l_894 = 2; (l_894 >= 0); l_894 -= 1)
                    {
                        int l_1480 = 0x5B5C9D41L;
                        int i;
                        l_1437 = (safe_add_func_int8_t_s_s((((((g_458[l_894] > (safe_rshift_func_uint8_t_u_u((((((l_1460[0][5] = g_113) == g_1298) , (safe_mod_func_int64_t_s_s(((((((safe_mul_func_uint16_t_u_u(((g_711[3][2][3] != g_411) != p_17), (func_68(l_1054[4][3][4]) >= 4294967292UL))) , p_15) <= 0x7510L) == g_222) <= p_16) >= p_17), (-1L)))) >= g_1116[1]) | g_458[l_894]), 5))) , l_1454) < 0x695DDB09BE6030E6LL) && g_222) <= p_15), g_255));
                        l_1455 = g_269[7][5][0];
                        l_1085 = ((g_61[1] = func_26((0xFDL | (((safe_mul_func_int16_t_s_s((p_17 && 0x2BBF2C63L), 0L)) && (safe_rshift_func_uint8_t_u_s(func_29((safe_add_func_uint16_t_u_u((l_1471 = g_579), 0L)), (l_1455 = (l_885[2] = (safe_mul_func_uint8_t_u_u((safe_add_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u((l_1480 = (safe_mod_func_uint64_t_u_u(p_15, ((+4294967295UL) || func_68(l_1455))))), p_15)) >= g_582[7]), p_15)), 0x13L)))), p_15, l_1460[0][5], l_1454), l_1406))) && g_596)), p_15)) && p_16);
                    }
                    if (((func_26((l_1437 = 0x2DL), g_1182) || func_63((((((l_1455 = ((safe_lshift_func_int16_t_s_u((l_1492[3][0] = ((l_1455 >= ((l_1460[2][1] ^ 18446744073709551615UL) < (g_1116[2] = func_26((g_164[0] , (~(p_17 , (safe_mul_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u((((func_29((((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(l_1054[4][3][4], 7)), g_183)), p_15)) < g_61[0]) , 255UL), g_235, g_164[1], l_1454, p_16) & 3UL) < 6L) <= l_1460[0][5]))) < 0L), g_956))))), g_956)))) < 0xB905C5D014B6E68FLL)), g_1182)) , p_17)) > 18446744073709551615UL) , 5UL) && l_1493[0][4][0]) , p_15), g_865, l_35, l_1437)) != g_1257))
                    {
                        return l_1492[1][3];
                    }
                    else
                    {
                        l_885[1] = l_1455;
                    }
                    g_711[3][2][3] = (l_883 = l_1048);
                    g_1182 = g_269[7][5][0];
                }
                else
                {
                    unsigned l_1496 = 4294967290UL;
                    for (g_222 = 0; (g_222 < (-21)); --g_222)
                    {
                        l_1496 = p_16;
                        if (g_383)
                            goto lbl_1137;
                        if (g_18)
                            goto lbl_1497;
                        g_711[1][3][0] = g_582[3];
                    }
                    if ((1UL == l_1496))
                    {
                        l_885[0] = l_1496;
                    }
                    else
                    {
                        long long l_1508 = 4L;
                        l_1508 = (safe_mul_func_int16_t_s_s(((l_885[2] = (p_15 ^ (safe_mod_func_uint32_t_u_u(((((safe_sub_func_int16_t_s_s(g_292, (~((safe_mul_func_int8_t_s_s(func_68((func_19((l_1455 = (func_26((255UL < g_164[3]), ((safe_lshift_func_int16_t_s_s((65532UL >= g_311), g_253)) != g_255)) & g_458[0])), g_101, g_582[p_15], l_1262) , g_164[0])), g_956)) < p_17)))) | p_16) != g_269[9][3][1]) > 0xBC49L), 4294967295UL)))) != 0x5873L), g_582[p_15]));
                        l_883 = (func_29(p_16, l_1241, (l_1508 , (((((safe_mul_func_int8_t_s_s((+(safe_add_func_uint64_t_u_u(g_61[1], (safe_mul_func_uint16_t_u_u(g_164[2], (safe_sub_func_int64_t_s_s((safe_mod_func_uint8_t_u_u((safe_add_func_int8_t_s_s(((0L <= ((l_1521 = g_631) , (safe_rshift_func_int8_t_s_u((((p_17 > p_17) , g_582[1]) ^ l_967), l_1471)))) <= p_17), 0UL)), l_1496)), 0x65A13FCC2CC3F415LL))))))), l_1508)) , 1UL) | l_1471) >= p_15) && p_16)), l_1493[0][0][1], l_1175[3][1]) && l_1508);
                        return g_18;
                    }
                }
                l_1535 = ((p_16 < (p_17 , p_15)) != ((((((l_1455 = (l_1524 = p_16)) ^ (safe_mul_func_uint8_t_u_u((safe_sub_func_int8_t_s_s(func_29(g_1182, (g_611 , (l_1471 = l_1521)), (((g_1257 ^ func_19((l_885[0] = ((safe_mod_func_uint32_t_u_u((l_1534 = (safe_lshift_func_int16_t_s_u((l_1533 = (0x18L != g_587[0][4])), 3))), 0xADBC7A44L)) > 0x501D845CL)), g_631, g_1182, p_15)) | 0L) == 0x64L), l_1406, g_292), 0L)), g_1182))) == 9L) , 0L) <= p_16) != g_1116[1]));
            }
            if (g_255)
            {
                long long l_1543 = 0xF334A91D727DF66CLL;
                int l_1550 = 0xA9594277L;
                const short l_1571 = 0xCE8EL;
                if ((((p_15 > (func_26((l_1437 = (safe_rshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u((l_1543 = (safe_lshift_func_uint16_t_u_u(l_1542, 15))), (safe_rshift_func_uint16_t_u_u(func_68(p_17), (l_1471 != (((safe_sub_func_uint16_t_u_u(g_311, g_222)) ^ l_1048) || (!(safe_sub_func_int32_t_s_s(g_292, p_16))))))))), l_1550))), g_865) | l_1085)) , g_1551[6][7]) == 0L))
                {
                    int l_1570 = 1L;
                    g_711[2][1][0] = ((((safe_mod_func_int32_t_s_s(((((0L > (~(((((safe_mul_func_uint8_t_u_u(p_16, ((safe_lshift_func_int8_t_s_s((l_1085 = (((safe_mod_func_uint32_t_u_u((p_15 < ((safe_sub_func_uint32_t_u_u(((0x47L & g_458[0]) <= (safe_add_func_uint64_t_u_u(l_1550, ((safe_rshift_func_uint8_t_u_s((g_253 = ((safe_add_func_uint64_t_u_u((safe_add_func_int64_t_s_s((-6L), (p_15 && l_1570))), 0xB18459C95DFB5455LL)) < g_974)), 4)) , (-6L))))), 0L)) < g_222)), 0xC05F3879L)) <= 0UL) , g_253)), p_15)) | g_582[1]))) >= 1UL) != l_35) <= g_383) >= 0x935C426CL))) , l_1492[4][6]) || p_17) ^ g_383), g_865)) , l_1543) <= l_1571) > p_15);
                    for (g_974 = 25; (g_974 >= 29); ++g_974)
                    {
                        int l_1580 = 0x82BEB136L;
                        l_1471 = p_17;
                        l_1085 = (safe_add_func_int8_t_s_s((safe_sub_func_int16_t_s_s((func_19(g_113, p_15, (((func_26(((func_26((safe_add_func_int32_t_s_s((+func_26(l_1580, func_26((l_1570 = (safe_mul_func_uint8_t_u_u(((func_26(g_974, func_26(g_61[0], (safe_lshift_func_uint8_t_u_s(((l_1587[5][2][2] = (safe_lshift_func_int8_t_s_s(l_1299, 7))) || (safe_mul_func_int16_t_s_s(l_1570, g_502))), (p_15 > g_164[0]))))) , l_1262) <= g_255), p_17))), p_15))), g_587[0][8])), p_15) , 0x48FDL) , 1L), l_920) && 0x8FL) ^ l_1048) || p_16), g_865) && l_1454), g_582[6])), 0x98L));
                        l_1085 = ((4294967289UL != p_17) <= ((safe_sub_func_uint32_t_u_u(((safe_lshift_func_int8_t_s_s((p_15 = l_1570), 6)) < g_411), 0x9B62E645L)) < (g_502 , g_253)));
                    }
                }
                else
                {
                    g_18 = 1L;
                }
                l_1085 = (l_1492[1][9] , func_68((p_15 = (l_1550 = (((safe_sub_func_uint8_t_u_u((safe_add_func_int8_t_s_s((safe_mul_func_int16_t_s_s((safe_lshift_func_uint8_t_u_u((safe_mul_func_int8_t_s_s(((l_1437 = l_1492[3][1]) <= 0x3C78L), ((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u((l_1471 = p_17), ((l_1608 , 0x0907CD5BL) != 0xC1AEE363L))), (((l_1609 = g_133) > ((safe_mul_func_int16_t_s_s(((func_26((((safe_mod_func_uint16_t_u_u((safe_add_func_int16_t_s_s(l_1454, p_15)), g_102)) != p_17) , p_16), l_1616[0][1]) && l_1617) ^ p_15), g_526)) != 18446744073709551615UL)) || l_1617))) , 4UL))), 3)), 65535UL)), p_17)), 0L)) , g_1551[6][7]) , g_587[0][1])))));
                for (g_183 = (-28); (g_183 > 7); ++g_183)
                {
                    int l_1626 = (-7L);
                    short l_1638 = 0x8543L;
                    g_1182 = (safe_lshift_func_int8_t_s_u(((((safe_mul_func_uint8_t_u_u(0xD4L, (safe_lshift_func_uint16_t_u_s((l_1626 && l_1550), 5)))) != (safe_sub_func_int16_t_s_s(func_26(((safe_sub_func_uint8_t_u_u((((p_16 == (g_1116[2] == (safe_sub_func_int64_t_s_s((((((g_587[0][5] = l_1616[8][0]) < ((p_15 , g_1298) ^ (((((safe_rshift_func_uint8_t_u_s((((safe_add_func_uint8_t_u_u((((g_711[3][2][3] = g_253) || p_15) == 0xB6547DCA81316D12LL), l_1637)) || l_1626) , p_17), g_956)) >= 0xB7DECF46DD2E6047LL) || (-1L)) & g_183) == (-5L)))) == l_885[2]) || 8UL) > g_102), 0x35C5D60356873A2ALL)))) < (-1L)) != l_1471), p_16)) >= p_15), g_61[5]), g_18))) ^ l_1542) ^ g_311), l_1638));
                }
            }
            else
            {
                unsigned l_1655 = 18446744073709551608UL;
                int l_1658[5][8][2] = {{{0L,(-1L)},{(-9L),(-1L)},{(-10L),(-1L)},{(-9L),(-1L)},{0L,(-1L)},{(-6L),(-1L)},{0L,(-1L)},{(-9L),(-1L)}},{{(-10L),(-1L)},{(-9L),(-1L)},{0L,(-1L)},{(-6L),(-1L)},{0L,(-1L)},{(-9L),(-1L)},{(-10L),(-1L)},{(-9L),(-1L)}},{{0L,(-1L)},{(-6L),(-1L)},{0L,(-1L)},{(-9L),(-1L)},{(-10L),(-1L)},{(-9L),(-1L)},{0L,(-1L)},{(-6L),(-1L)}},{{0L,(-1L)},{(-9L),(-1L)},{(-10L),(-1L)},{(-9L),(-1L)},{0L,(-1L)},{(-6L),(-1L)},{0L,(-1L)},{(-9L),(-1L)}},{{(-10L),(-1L)},{(-9L),(-1L)},{0L,(-1L)},{(-6L),(-1L)},{0L,(-1L)},{(-9L),(-1L)},{(-10L),(-1L)},{(-9L),(-1L)}}};
                int i, j, k;
                for (g_411 = 0; (g_411 == 18); g_411 = safe_add_func_int8_t_s_s(g_411, 1))
                {
                    unsigned l_1649 = 18446744073709551615UL;
                    g_1182 = g_101;
                    for (g_255 = 0; (g_255 > (-14)); g_255 = safe_sub_func_int32_t_s_s(g_255, 7))
                    {
                        unsigned l_1645 = 0x174C5796L;
                        int l_1646 = 0L;
                        l_1646 = ((safe_mod_func_int64_t_s_s(p_15, p_15)) , l_1645);
                    }
                    l_1649 = (safe_sub_func_uint32_t_u_u(g_255, 1L));
                    for (g_410 = 0; (g_410 >= (-10)); --g_410)
                    {
                        unsigned long long l_1652 = 0xC2B7FAF644DF5E99LL;
                        if (g_1298)
                            break;
                        l_1652 = g_1116[2];
                        return g_61[1];
                    }
                }
                for (l_1542 = 18; (l_1542 >= 13); l_1542--)
                {
                    l_1658[2][7][0] = (g_82 ^ (((l_1655 ^ (1UL || func_26(l_1655, ((l_1437 = (safe_mod_func_int8_t_s_s(func_26(g_1182, p_15), p_16))) , p_15)))) && p_15) , p_15));
                    l_1609 = (l_1637 = (((g_411 && 4L) , 0UL) != ((-1L) | (func_68(g_18) > l_1655))));
                }
                l_1085 = (((safe_sub_func_int32_t_s_s((-4L), (l_883 = (safe_sub_func_int16_t_s_s((~(l_1241 == (l_1542 = (g_311 = (safe_add_func_uint8_t_u_u(((safe_rshift_func_int16_t_s_s(func_68(p_16), (l_1048 && 0xFEB0L))) < g_526), ((safe_mul_func_uint8_t_u_u((l_1669 ^ ((g_61[5] , g_269[7][5][0]) == p_17)), 0x57L)) , 0x04L))))))), l_1175[2][0]))))) || 0xA3L) && p_15);
            }
        }
        g_1671 = p_16;
    }
    else
    {
        long long l_1684 = 5L;
        int l_1693 = 0x32FFE998L;
        long long l_1694 = 1L;
        unsigned l_1732 = 0xE4057FF8L;
        int l_1734[7][5][7] = {{{(-1L),1L,(-3L),0x9676BCA3L,(-3L),1L,(-1L)},{0L,(-1L),(-1L),0x51F2ECBBL,0L,0L,0x9676BCA3L},{0xF3393A18L,0xFF101562L,0xB50AE09FL,0L,1L,0x66EC68EDL,9L},{0x2E3F90F5L,0x083BC259L,(-1L),0x00023C2FL,0xF5C39B2FL,(-1L),0x2FA5CFF9L},{0x9CD38A0CL,0xB50AE09FL,(-3L),9L,0x00023C2FL,(-8L),0xEA724382L}},{{0L,(-1L),0x880D638DL,0xEA724382L,(-8L),0xB50AE09FL,1L},{0x9676BCA3L,(-1L),0x2E3F90F5L,0L,0x880D638DL,9L,(-1L)},{3L,0xFAC1D0A5L,(-1L),1L,0x8CDB1D4CL,0L,0x9CD38A0CL},{3L,0xFD4D24C6L,(-1L),(-1L),0x66EC68EDL,0xFDC4943FL,0xFAC1D0A5L},{0x9676BCA3L,(-1L),0L,1L,0L,1L,9L}},{{0L,8L,(-8L),0xFDC4943FL,0L,0L,0xFDC4943FL},{0x9CD38A0CL,0L,0x9CD38A0CL,0xF3393A18L,1L,(-1L),(-1L)},{1L,0L,(-1L),9L,0x0C653C70L,0x8CDB1D4CL,(-1L)},{(-3L),(-1L),(-7L),0x880D638DL,(-1L),0x433910B0L,1L},{0L,0L,9L,(-1L),0xA156C4E2L,1L,0xEA724382L}},{{0L,0xB50AE09FL,0L,0xE0CD724FL,0x3A2CE66BL,0L,0xFAC1D0A5L},{0xB50AE09FL,0x893C34B7L,4L,(-8L),0L,0x61F5FA4FL,0L},{0x0C653C70L,0x61F5FA4FL,0xA156C4E2L,0x0823D118L,(-1L),(-1L),0xE0CD724FL},{0L,0xF5C39B2FL,0x2FA5CFF9L,0x0823D118L,1L,4L,0x00023C2FL},{9L,(-1L),0L,(-8L),4L,0L,0x433910B0L}},{{0xA156C4E2L,0x0C653C70L,0x51F2ECBBL,0xE0CD724FL,0L,9L,0xEFDA396EL},{0x51F2ECBBL,0x4F8727EBL,(-1L),(-1L),0x4F8727EBL,0x51F2ECBBL,0xB50AE09FL},{4L,0xFD4D24C6L,0xFDC4943FL,0x880D638DL,0x09336F70L,1L,(-1L)},{1L,0x880D638DL,0x9CD38A0CL,9L,0x2FA5CFF9L,(-3L),0x66EC68EDL},{(-1L),0xFD4D24C6L,0x66EC68EDL,(-3L),1L,8L,0L}},{{(-8L),0x4F8727EBL,1L,0x61F5FA4FL,0x66EC68EDL,0x62E3DDC1L,0x880D638DL},{1L,0x09336F70L,0x2FA5CFF9L,1L,(-1L),0x66EC68EDL,0L},{(-1L),0L,0x0C653C70L,0x66EC68EDL,1L,0xFF101562L,9L},{0L,(-1L),3L,0x9676BCA3L,0L,0L,9L},{0L,0L,0L,9L,9L,0x9676BCA3L,0L}},{{0xFAC1D0A5L,0x433910B0L,(-3L),0xDD0E171CL,3L,1L,0x880D638DL},{0xEFDA396EL,0x61F5FA4FL,(-8L),0L,(-8L),0L,(-8L)},{0x0823D118L,0x0823D118L,(-1L),(-1L),(-1L),(-1L),1L},{0x083BC259L,0x9CD38A0CL,0x0823D118L,4L,9L,(-3L),1L},{0x0C653C70L,0x8CDB1D4CL,(-1L),0xEFDA396EL,(-1L),0x3A2CE66BL,0x61F5FA4FL}}};
        int i, j, k;
lbl_2036:
        g_1182 = ((safe_mod_func_uint64_t_u_u(p_17, (p_16 || ((((safe_mod_func_uint32_t_u_u((safe_rshift_func_int16_t_s_u(func_63((p_16 != p_15), g_587[0][4], (l_1617 = ((((safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_u((l_885[2] = ((p_16 , 65535UL) > (safe_lshift_func_uint16_t_u_u(l_1684, ((safe_mod_func_uint32_t_u_u((safe_lshift_func_uint8_t_u_s(1UL, p_16)), 0x2A198090L)) && p_15))))), g_235)) == p_15), l_1684)) || 65528UL) < g_411) == l_1689)), l_1684), p_16)), l_1684)) , 0x7155L) && l_1690[3]) ^ l_1048)))) ^ p_16);
        l_885[2] = (func_29(g_269[7][6][0], l_896, ((safe_rshift_func_uint8_t_u_s((l_1693 = 0x5DL), 2)) || 0x7B15L), ((l_1694 && (safe_add_func_int64_t_s_s((((g_311 || func_26(p_17, (l_1689 <= (safe_add_func_int32_t_s_s((safe_mul_func_int8_t_s_s(g_1182, 0UL)), g_269[1][5][0]))))) , l_920) , g_526), g_311))) , p_17), p_17) | 0xEAD6624FL);
        for (g_292 = (-23); (g_292 > 53); ++g_292)
        {
            g_711[3][2][3] = g_458[2];
        }
        if (p_16)
        {
            unsigned long long l_1703 = 0x48B749F64EBE86BBLL;
            int l_1722[10] = {0x6EAA83C0L,0x6EAA83C0L,0x6EAA83C0L,0x6EAA83C0L,0x6EAA83C0L,0x6EAA83C0L,0x6EAA83C0L,0x6EAA83C0L,0x6EAA83C0L,0x6EAA83C0L};
            int l_1831 = 0x8BE2087CL;
            unsigned char l_1948 = 0UL;
            unsigned long long l_1968 = 0x78964405E0421EDALL;
            char l_2029 = 0xB3L;
            int i;
            if (l_1703)
            {
                int l_1729[5][10] = {{0x8BC8883FL,0x8BC8883FL,0x67E813BAL,0x5D1D2B49L,0x91923E00L,(-4L),4L,0xE5677ED8L,(-3L),0x1F831DF4L},{0xA0113E16L,0xE5677ED8L,7L,0xFF1942F6L,0L,(-3L),4L,0x5D1D2B49L,4L,(-3L)},{0x32167771L,(-6L),0x91923E00L,(-6L),0x32167771L,1L,0xA5D9BEFAL,0L,0x67E813BAL,0L},{0x63A05D1CL,0x67E813BAL,0x56C542F9L,0xFF1942F6L,0x91923E00L,6L,1L,0x3393A232L,0L,0L},{0xA5D9BEFAL,0xFF1942F6L,0x63A05D1CL,0x32167771L,0x32167771L,0x63A05D1CL,0xFF1942F6L,0xA5D9BEFAL,(-6L),0x8BC8883FL}};
                int l_1737 = 0x9031A986L;
                int l_1786 = (-10L);
                int i, j;
                if (g_101)
                    goto lbl_1704;
                for (l_1703 = (-18); (l_1703 == 55); ++l_1703)
                {
                    long long l_1715 = 0x32D8FB09AE988E5DLL;
                    for (g_113 = 16; (g_113 >= 34); ++g_113)
                    {
                        g_1671 = l_1703;
                        g_18 = ((safe_add_func_int16_t_s_s(g_1116[2], 1L)) & (safe_rshift_func_int8_t_s_s(p_17, (g_1298 >= (p_16 > (l_894 , l_1715))))));
                        if (g_61[1])
                            continue;
                        if (p_15)
                            break;
                    }
                    g_711[3][2][3] = (!(((((g_956 | func_26((safe_lshift_func_int16_t_s_s(((safe_lshift_func_uint16_t_u_u(p_15, 4)) , (!p_17)), (safe_mod_func_int16_t_s_s((((l_1722[5] = (p_15 & p_15)) <= ((p_15 , (safe_rshift_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_u((l_885[0] , (safe_mul_func_uint8_t_u_u((4294967293UL > func_68(p_16)), g_1116[0]))), 0)) >= l_1694), l_1729[1][8]))) == g_579)) ^ l_1729[1][8]), p_17)))), l_1689)) || 0xC2130F1FBE13E808LL) != 0xB774L) | p_16) | p_15));
                    for (g_1257 = 0; (g_1257 <= 3); g_1257 += 1)
                    {
                        int i;
                        l_1734[3][1][2] = ((g_1733[1][8] = (g_587[0][5] = (p_17 & (safe_mod_func_uint64_t_u_u((0x7E577568AF436966LL >= ((g_292 = (g_410 && l_1732)) && (((func_29(p_16, l_1715, ((g_1182 = ((g_164[g_1257] = (p_16 || g_587[0][5])) || l_1729[3][1])) == g_711[4][2][2]), g_101, g_1257) , g_164[g_1257]) >= l_1694) == 0x55F0DA6AA54D2F77LL))), 0x61FF0E76DC7F0676LL))))) < l_1703);
                    }
                    l_1722[3] = 8L;
                }
                if (l_1729[1][8])
                {
                    char l_1738 = 1L;
                    for (g_411 = (-11); (g_411 == (-30)); g_411 = safe_sub_func_uint8_t_u_u(g_411, 3))
                    {
                        l_1737 = 0x3E756EC6L;
                        if (l_1693)
                            break;
                        return l_1738;
                    }
                    l_1722[7] = (g_711[3][2][3] = 1L);
                    l_1722[5] = p_15;
                }
                else
                {
                    unsigned l_1762 = 0xBB755D6DL;
                    for (l_896 = 0; (l_896 <= 3); l_896 += 1)
                    {
                        unsigned char l_1747[9] = {0x69L,0x69L,0x69L,0x69L,0x69L,0x69L,0x69L,0x69L,0x69L};
                        int l_1763 = 0x2EAA7DD1L;
                        int i;
                        g_18 = (safe_lshift_func_int8_t_s_s(p_15, 4));
                        l_1737 = (((safe_mod_func_int64_t_s_s(l_1703, 18446744073709551606UL)) || (l_1763 = (((safe_rshift_func_uint8_t_u_s(func_68(((safe_add_func_uint16_t_u_u(((l_1747[3] = l_1729[2][9]) , (safe_mod_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u(p_15, (func_63(func_63((func_19(g_596, (((func_68(g_235) <= ((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_mod_func_int64_t_s_s((p_16 , (((safe_add_func_int16_t_s_s((((((safe_mod_func_uint32_t_u_u(p_16, l_1762)) & l_896) >= l_1684) , 7UL) == 0L), p_17)) , 0xB983F454L) & 0L)), (-2L))), 0xCE1AL)), 12)) , 0x700FD83BL)) >= p_17) , g_611), l_1729[1][8], p_17) , p_17), g_1551[6][7], l_1587[5][2][2], g_253), l_1703, l_1747[3], l_1747[6]) , l_1703))) , (-1L)), p_15))), p_16)) > 0x42FB48FAEB920C4ELL)), 0)) , l_885[1]) | 0x17419C5FL))) | l_1737);
                        return l_1684;
                    }
                    if (l_1299)
                        goto lbl_1704;
                    g_711[1][1][1] = (0UL && g_1733[1][8]);
                }
                for (g_1671 = (-25); (g_1671 < (-26)); g_1671 = safe_sub_func_uint8_t_u_u(g_1671, 5))
                {
                    unsigned char l_1766 = 0x4DL;
                    int l_1785 = (-1L);
                    unsigned l_1788 = 0x349AF460L;
                    g_711[2][3][3] = g_526;
                    l_883 = func_19(((l_1734[3][1][2] = ((l_1766 >= (safe_mul_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_add_func_uint64_t_u_u((safe_sub_func_int16_t_s_s(((((((safe_lshift_func_uint8_t_u_u(p_15, p_15)) , (safe_sub_func_uint16_t_u_u(func_29(p_17, (safe_mul_func_int16_t_s_s(p_15, (((safe_mod_func_int8_t_s_s(p_15, (safe_lshift_func_int8_t_s_u((g_61[1] = (((l_1786 = ((l_1737 = (p_15 < func_63((l_1785 = p_17), l_1729[4][9], g_164[0], p_16))) >= p_17)) > g_1787) && g_411)), 1)))) , l_1766) , l_967))), p_17, l_1694, p_17), l_1788))) > g_1787) ^ p_15) , 0x4EL) < (-1L)), 8L)), 0UL)), 0xADL)), 65535UL))) < 0xFB8BA50664878323LL)) < l_1788), p_15, l_1732, l_1788);
                }
            }
            else
            {
                unsigned char l_1803[3];
                int l_1806 = 1L;
                int i;
                for (i = 0; i < 3; i++)
                    l_1803[i] = 1UL;
                g_1182 = (safe_add_func_uint8_t_u_u(((l_1722[1] , (((l_1722[5] = ((safe_rshift_func_int8_t_s_s((0x8A3E2D38L > 0x33F15E76L), 2)) == 0x3E0BL)) , (18446744073709551612UL <= ((l_1693 = (safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((((safe_lshift_func_int8_t_s_u(p_16, 6)) < ((safe_mod_func_int16_t_s_s((~(safe_lshift_func_int16_t_s_s((g_611 = (((l_1734[3][1][2] = (l_1803[0] = g_1733[1][8])) | ((((safe_mod_func_uint16_t_u_u((func_68(p_16) || l_1694), l_1693)) || (-9L)) && l_896) != 0x25F7L)) & 65535UL)), 8))), 0xEA91L)) || p_17)) >= p_17), g_311)), l_1806))) | g_582[5]))) , l_1803[0])) != l_1694), g_1182));
                for (g_631 = 0; (g_631 != 48); g_631 = safe_add_func_int8_t_s_s(g_631, 5))
                {
                    l_1806 = l_1693;
                    l_1806 = ((g_1551[0][8] , (l_1690[3] <= 0x4124L)) | (0UL <= (l_1703 < func_19(p_17, (((safe_mul_func_int8_t_s_s(l_1722[5], g_1733[1][8])) , ((l_1722[7] || (-10L)) & p_15)) == g_222), l_1722[4], l_35))));
                }
            }
            for (g_411 = 0; (g_411 != (-9)); g_411 = safe_sub_func_int8_t_s_s(g_411, 3))
            {
                unsigned char l_1826 = 0UL;
                l_1722[1] = (safe_unary_minus_func_uint16_t_u((l_1693 = p_15)));
                g_1671 = (l_1703 | (1UL >= ((safe_lshift_func_int8_t_s_s(func_19(g_631, func_19(func_19(l_1722[5], (safe_mod_func_uint16_t_u_u(p_15, (l_1734[6][3][4] = (safe_mod_func_uint64_t_u_u((safe_add_func_int16_t_s_s((l_1694 <= (safe_add_func_uint8_t_u_u(((g_1787 = l_1826) >= (safe_lshift_func_uint16_t_u_u((l_1831 = ((((safe_mod_func_uint8_t_u_u(p_16, 0x82L)) != g_1182) ^ g_1116[1]) | p_17)), 3))), 0x2EL))), l_896)), p_15))))), l_1732, g_255), p_15, l_1299, p_16), l_1703, l_1689), l_1694)) | 0UL)));
            }
lbl_2032:
            l_883 = ((l_1617 = (p_16 || (g_383 ^ (l_885[1] = (((~l_1703) & 1L) && g_582[4]))))) | ((safe_add_func_int32_t_s_s((((((safe_sub_func_int64_t_s_s(p_16, (safe_rshift_func_int8_t_s_s(((safe_lshift_func_int8_t_s_s(((g_502 = (safe_lshift_func_int8_t_s_u((((safe_mul_func_uint16_t_u_u((l_1851 = (p_15 < ((safe_sub_func_uint32_t_u_u(((safe_mul_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(g_255, 8)), ((g_235 != l_1722[9]) > 0xD5L))) && l_1850), 0x7761C6A4L)) ^ 0xCFL))), 0x2624L)) ^ g_1852[0]) | l_1722[5]), l_967))) | p_17), g_1733[1][8])) > 1UL), p_17)))) & 0x3B4EL) ^ l_1703) || 65535UL) , (-1L)), g_865)) , 1UL));
            if ((g_383 && p_16))
            {
                unsigned l_1866 = 0xDB8F9AF7L;
                int l_1867 = 0xFF27D2C1L;
                l_1722[5] = (-5L);
                l_1866 = (safe_lshift_func_uint16_t_u_s(65528UL, (g_269[1][5][0] , (l_885[2] = (((safe_add_func_int8_t_s_s((safe_add_func_uint64_t_u_u(((+((g_269[7][5][0] > ((((safe_mul_func_int16_t_s_s((safe_sub_func_int16_t_s_s(l_1684, func_68(p_17))), 1UL)) || ((((safe_mod_func_int8_t_s_s((((g_253 = (~g_631)) , (((!p_15) > l_1831) && l_1865[2])) & 6UL), g_587[0][6])) && l_1865[2]) <= g_596) == 1L)) | g_255) , l_1693)) == p_16)) < (-8L)), 0L)), 9UL)) <= p_17) , l_1722[4])))));
                l_1867 = 0L;
                if ((safe_lshift_func_int16_t_s_s(p_16, 5)))
                {
                    char l_1875 = 0x88L;
                    int l_1882 = (-3L);
                    for (p_16 = (-22); (p_16 >= 53); p_16++)
                    {
                        char l_1874[1][1];
                        char l_1910 = 0x3EL;
                        int l_1911 = 9L;
                        int i, j;
                        for (i = 0; i < 1; i++)
                        {
                            for (j = 0; j < 1; j++)
                                l_1874[i][j] = 1L;
                        }
                        g_711[4][2][1] = (g_61[2] , (l_885[2] = ((safe_mul_func_uint8_t_u_u((l_1875 = l_1874[0][0]), ((~((l_1866 | (safe_rshift_func_uint8_t_u_s((safe_add_func_int64_t_s_s(((((func_26((((safe_mod_func_uint32_t_u_u(l_1882, (safe_sub_func_uint32_t_u_u((l_1684 <= ((safe_lshift_func_uint16_t_u_s(g_411, (safe_rshift_func_int16_t_s_s(2L, (g_611 = (safe_add_func_int16_t_s_s((safe_mod_func_int64_t_s_s(l_1882, func_19(((l_1867 = g_1298) , g_458[0]), p_17, g_1733[2][5], l_1874[0][0]))), 0x4B43L))))))) && g_582[6])), g_1551[3][3])))) != 0x739BL) , g_502), g_61[2]) < 1L) , 0x5BCDL) == g_974) & 1L), l_885[2])), p_15))) != g_1787)) != (-1L)))) , p_16)));
                        if (g_596)
                            break;
                        l_1617 = func_29((((p_17 , (safe_rshift_func_int16_t_s_u(g_1733[4][1], ((safe_add_func_uint8_t_u_u(g_1116[2], ((g_865 , (func_29(l_894, (((safe_lshift_func_uint16_t_u_s((safe_lshift_func_int8_t_s_u((-1L), func_29(((safe_sub_func_int16_t_s_s((((l_1903 < 0x742AL) > (3L != p_16)) , (-3L)), g_1298)) , p_15), l_1875, p_17, g_502, g_61[1]))), g_1671)) == p_16) ^ 0xA595C1C7907ED95ELL), l_1874[0][0], p_16, g_1733[7][4]) >= g_1182)) == 0x7C213F07L))) >= l_894)))) ^ l_1875) , l_35), l_1693, l_1875, l_967, l_1875);
                        l_1911 = (l_1684 >= (func_63((p_16 > (g_587[0][5] = (0xF68E0A209CDF7720LL < (safe_mod_func_uint8_t_u_u((((safe_rshift_func_uint8_t_u_s(g_164[3], 1)) <= l_1910) >= l_1851), g_410))))), l_920, (0L >= g_631), g_1551[4][3]) && (-5L)));
                    }
                    for (l_1694 = 0; (l_1694 == 11); ++l_1694)
                    {
                        if (g_1733[1][8])
                            break;
                    }
                    for (g_611 = 9; (g_611 <= (-28)); g_611 = safe_sub_func_int32_t_s_s(g_611, 6))
                    {
                        g_1671 = func_68(p_15);
                        g_1182 = p_16;
                        l_1693 = g_101;
                    }
                    l_1734[3][1][2] = (254UL == ((safe_unary_minus_func_uint64_t_u(((func_19(((l_1693 = (255UL && p_15)) , (safe_add_func_int16_t_s_s((safe_lshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s(func_63(l_1734[3][1][2], g_579, func_68(p_17), p_16), p_17)), 5)), p_15))), l_1732, g_1116[2], g_582[7]) > g_582[6]) & 18446744073709551615UL))) , p_16));
                }
                else
                {
                    short l_1929 = 7L;
                    int l_1941 = 1L;
                    for (g_526 = 0; (g_526 > 56); ++g_526)
                    {
                        long long l_1930 = 0x4D35B811E103D9F9LL;
                        int l_1942 = 1L;
                        g_1182 = (safe_rshift_func_uint8_t_u_u(((g_102 = (safe_mod_func_uint32_t_u_u(l_1929, (g_711[3][2][3] = (l_1930 , (l_1930 ^ 0UL)))))) , (l_1942 = (safe_mod_func_uint8_t_u_u((((safe_mul_func_int16_t_s_s((p_15 || (safe_mod_func_uint8_t_u_u((l_1941 = func_63(g_1551[2][4], ((safe_lshift_func_uint8_t_u_s(p_16, g_410)) , ((((l_1734[0][4][2] = (safe_mod_func_uint8_t_u_u(p_16, l_1929))) , l_1929) , l_1048) || (-6L))), p_17, l_1866)), 0x1AL))), 0xB551L)) , p_17) , 0xEDL), 0x84L)))), 0));
                        l_1941 = ((safe_rshift_func_int16_t_s_s((g_611 = (safe_lshift_func_uint8_t_u_u(p_15, g_410))), l_1587[7][0][0])) && func_19((((func_63((!g_1182), (l_1942 = (l_1689 || (p_15 ^ (safe_unary_minus_func_uint8_t_u(0x3BL))))), l_1930, (g_1733[1][8] = 8L)) == 0x29E13D68L) >= p_15) < g_611), l_1948, p_16, g_711[0][3][2]));
                    }
                }
            }
            else
            {
                unsigned char l_1967 = 0x28L;
                int l_1984 = 1L;
                unsigned l_1993 = 0xA13F3234L;
                unsigned short l_2031 = 1UL;
                for (l_1299 = 0; (l_1299 > (-4)); --l_1299)
                {
                    int l_1951 = 0x803EA00DL;
                    l_1722[5] = (func_29(((l_1722[9] = (l_1951 | (func_19(g_582[1], g_865, l_1684, ((g_1671 && (func_68(l_35) != (safe_rshift_func_int16_t_s_u((g_611 = g_255), (l_896 == p_17))))) | g_269[7][5][0])) > 0L))) != l_1948), l_1951, l_1703, l_1903, p_17) >= p_16);
                    l_883 = p_16;
                    for (l_967 = 2; (l_967 != 17); l_967 = safe_add_func_uint16_t_u_u(l_967, 1))
                    {
                        int l_1960 = 0x7E43340DL;
                        if (l_1617)
                            break;
                        l_1831 = (func_19(g_1116[2], (g_1298 = (safe_sub_func_uint64_t_u_u(((g_1551[4][6] , (safe_add_func_int16_t_s_s(((4294967293UL | (l_1722[5] = func_63((g_711[4][2][1] = (l_1960 > l_1960)), ((l_885[2] = ((safe_rshift_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(l_1722[5], (safe_rshift_func_uint16_t_u_s((p_17 == g_1787), 15)))), g_1257)) && l_1831)) || l_1734[2][4][0]), g_1551[6][7], g_1551[6][7]))) == l_1617), 0x04F2L))) >= l_1967), g_1733[1][8]))), l_1960, l_1968) , g_1298);
                        if (p_16)
                            break;
                    }
                }
lbl_1971:
                for (l_883 = (-15); (l_883 >= 11); ++l_883)
                {
                    l_1617 = p_15;
                    if (p_15)
                        break;
                    if (g_18)
                        goto lbl_1971;
                    for (l_896 = 0; l_896 < 1; l_896 += 1)
                    {
                        for (g_311 = 0; g_311 < 10; g_311 += 1)
                        {
                            g_587[l_896][g_311] = 4294967293UL;
                        }
                    }
                }
                if (((g_235 , func_29(((0x81L <= 0xAAL) && func_29(g_1852[0], g_1116[2], (g_269[7][5][0] = func_19((p_15 , (safe_mod_func_int8_t_s_s((((safe_sub_func_uint16_t_u_u((g_269[6][8][0] = (0x6AL >= func_68((l_1587[3][6][2] || (g_579 <= 65534UL))))), g_183)) >= 5L) <= p_15), (-6L)))), p_15, g_1182, g_611)), l_1967, l_1831)), l_1703, p_17, g_1551[7][5], p_15)) != p_17))
                {
                    short l_1992[9] = {0xE0F1L,7L,0xE0F1L,0xE0F1L,7L,0xE0F1L,0xE0F1L,7L,0xE0F1L};
                    int l_1994 = (-2L);
                    int i;
                    g_711[3][2][3] = g_269[7][5][0];
                    for (l_1948 = 0; (l_1948 > 60); ++l_1948)
                    {
                        unsigned l_1985[1];
                        int l_1991 = (-3L);
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1985[i] = 4294967287UL;
                        g_711[3][2][3] = (((l_1734[3][1][2] = g_1116[2]) || ((safe_mul_func_int16_t_s_s((safe_mod_func_int32_t_s_s((((safe_mul_func_int8_t_s_s((((p_17 == ((g_164[0] = func_52(l_1722[5], (l_1984 = (l_1703 & g_596)), l_1693, ((l_1985[0] = 0xEBBFB52A2C91D1C3LL) <= (safe_unary_minus_func_int32_t_s((safe_sub_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(((l_1703 , (p_17 , l_1991)) , l_1991), p_17)), 5L))))))) > 0x62D0L)) ^ l_1693) < l_1693), 0xFCL)) , p_16) != g_956), 0x0703AF36L)), l_1992[0])) && 0xA24BL)) , l_1992[0]);
                        l_1994 = l_1993;
                    }
                }
                else
                {
                    long long l_2030[5];
                    int i;
                    for (i = 0; i < 5; i++)
                        l_2030[i] = 1L;
                    if ((safe_mod_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((g_1733[8][6] = (p_17 , (l_1984 = (safe_lshift_func_int16_t_s_s((-10L), 14))))), 2)), (p_15 = l_1948))))
                    {
                        long long l_2005 = 0x46BDDCACD4A9A982LL;
                        l_1984 = (safe_lshift_func_int8_t_s_u(1L, 5));
                        l_2031 = (((safe_sub_func_int8_t_s_s((g_61[1] = p_17), p_15)) && (l_1967 && l_2005)) ^ func_26((((safe_unary_minus_func_int8_t_s((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s((((g_711[5][1][3] = (g_164[0] || (safe_mod_func_int64_t_s_s((safe_mod_func_uint16_t_u_u((((l_1984 = (safe_lshift_func_int8_t_s_s((l_1617 = (safe_mod_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((safe_mul_func_int16_t_s_s((g_611 = (safe_lshift_func_uint8_t_u_s((func_26((l_2005 , (safe_rshift_func_uint8_t_u_s(((safe_sub_func_uint32_t_u_u(p_17, g_133)) >= (l_1734[4][1][6] = ((func_26(l_1984, p_15) > l_1967) , l_2029))), 7))), p_17) == 4L), g_164[0]))), 0xCDFCL)) || g_1733[1][8]) , g_113), 13)) < l_2030[1]), g_101))), 1))) > p_16) , 0x65A8L), 7UL)), g_222)))) || g_1787) , (-7L)), 0xECL)), g_113)))) , 0xB6C2BEDAL) , 0x32L), l_1831));
                        if (l_1732)
                            goto lbl_2032;
                        if (l_35)
                            goto lbl_2033;
                    }
                    else
                    {
lbl_2033:
                        l_885[0] = 0xCEA29248L;
                        l_885[2] = (safe_lshift_func_uint16_t_u_u(g_253, 6));
                        if (g_255)
                            goto lbl_2036;
                        l_1984 = (g_711[3][2][3] > func_68((!((0x57L > (safe_rshift_func_uint16_t_u_s(p_15, 5))) > (l_1617 = ((0x4F3EED1E99682D67LL | 0UL) >= func_68(((g_1733[1][8] = ((safe_mod_func_int64_t_s_s(((func_68((p_16 , 4L)) < g_1852[0]) != l_1903), p_16)) != l_2030[1])) != p_16))))))));
                    }
                    return p_17;
                }
            }
        }
        else
        {
            char l_2045 = 0xABL;
            int l_2046 = 0L;
            for (g_865 = 0; (g_865 <= (-5)); --g_865)
            {
                g_711[2][0][2] = g_711[4][1][1];
                l_885[2] = ((safe_add_func_uint64_t_u_u(18446744073709551613UL, (p_16 != l_2045))) == (g_1551[5][0] ^ (l_1734[3][1][2] = g_113)));
            }
lbl_2047:
            l_2046 = 0xACA94628L;
            for (g_133 = 0; (g_133 <= 2); g_133 += 1)
            {
                if (l_1684)
                    goto lbl_2047;
            }
            l_1734[3][4][3] = (p_17 , (safe_add_func_uint64_t_u_u((l_2046 = l_2045), (g_269[7][5][0] <= (!(safe_mul_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u((l_885[2] = ((func_19(p_16, ((g_956 | func_19(((safe_unary_minus_func_uint16_t_u(((-5L) && g_101))) & (safe_unary_minus_func_uint16_t_u((safe_add_func_uint64_t_u_u(l_1734[3][1][2], p_17))))), g_1852[0], l_1684, g_255)) || p_16), g_61[3], g_411) ^ p_15) | 0x85F267E2L)), g_410)) | 0x3B8FL), 0xC71AL)))))));
        }
    }
    g_1182 = ((safe_add_func_uint16_t_u_u(func_29((safe_add_func_int64_t_s_s((func_19(l_920, (safe_sub_func_uint64_t_u_u((l_885[1] = p_15), (safe_add_func_uint8_t_u_u((g_311 = func_26(g_269[2][1][0], func_68(((g_311 , (((l_1690[3] < 65535UL) , (safe_add_func_uint32_t_u_u(((l_2084 = ((l_2083 = (((safe_mul_func_int16_t_s_s(((l_2082 = (safe_mul_func_int16_t_s_s((safe_mul_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((safe_mul_func_uint16_t_u_u(g_458[0], (l_883 = (safe_sub_func_int16_t_s_s((l_1617 = (-1L)), (safe_sub_func_uint32_t_u_u((g_411 <= 0xBD8F590581F660B4LL), 0x84DA722DL))))))), p_15)), 0x6CBCL)), g_61[6]))) , 0x88E5L), 0x8086L)) == l_1689) , 0xBD2FL)) <= p_17)) , 0x616CF5BFL), 5L))) , g_1852[0])) == l_1587[5][2][2])))), l_1690[3])))), l_1865[2], p_17) <= l_2085), 0x84401019B0E127C9LL)), l_894, g_1116[2], p_16, l_1865[2]), 65527UL)) , 0L);
    return l_1587[5][2][2];
}







static int func_19(char p_20, long long p_21, const int p_22, unsigned p_23)
{
    unsigned l_856 = 4294967295UL;
    int l_866 = 0x8461E873L;
lbl_867:
    for (g_183 = 0; (g_183 < 28); g_183 = safe_add_func_int16_t_s_s(g_183, 2))
    {
        int l_855 = 0x82AA8A1EL;
        g_711[3][2][3] = ((safe_mul_func_int16_t_s_s(g_582[1], (((safe_mod_func_int64_t_s_s((l_855 , ((l_855 == ((l_856 ^ ((safe_rshift_func_int8_t_s_s(((l_866 = (p_23 = (g_865 = ((((safe_add_func_uint16_t_u_u(0xFCF8L, (safe_mod_func_uint32_t_u_u((((g_587[0][9] = (safe_lshift_func_uint16_t_u_u(p_21, func_68(l_855)))) == l_855) , p_20), (-2L))))) ^ g_183) , 18446744073709551613UL) ^ l_855)))) & (-1L)), p_22)) , 0x396A4970L)) == 0x5DL)) ^ p_21)), l_855)) <= l_855) < 4294967295UL))) > l_855);
        if (g_101)
            goto lbl_867;
    }
    for (l_856 = 0; (l_856 != 60); ++l_856)
    {
        unsigned long long l_870 = 18446744073709551614UL;
        int l_871 = 9L;
        g_18 = l_870;
        l_871 = 0x3E695F74L;
        if (p_20)
            break;
    }
    return p_20;
}







static unsigned short func_26(char p_27, unsigned p_28)
{
    char l_840 = 7L;
    int l_847 = 1L;
    unsigned long long l_848[9][4][1] = {{{0UL},{0x41405B2AD954E0B7LL},{0x41405B2AD954E0B7LL},{0UL}},{{0x41405B2AD954E0B7LL},{0x41405B2AD954E0B7LL},{0UL},{0x41405B2AD954E0B7LL}},{{0x41405B2AD954E0B7LL},{0UL},{0x41405B2AD954E0B7LL},{0x41405B2AD954E0B7LL}},{{0UL},{0x41405B2AD954E0B7LL},{0x41405B2AD954E0B7LL},{0UL}},{{0x41405B2AD954E0B7LL},{0x41405B2AD954E0B7LL},{0UL},{0x41405B2AD954E0B7LL}},{{0x41405B2AD954E0B7LL},{0UL},{0x41405B2AD954E0B7LL},{0x41405B2AD954E0B7LL}},{{0UL},{0x41405B2AD954E0B7LL},{0x41405B2AD954E0B7LL},{0UL}},{{0x41405B2AD954E0B7LL},{0x41405B2AD954E0B7LL},{0UL},{0x41405B2AD954E0B7LL}},{{0x41405B2AD954E0B7LL},{0UL},{0x41405B2AD954E0B7LL},{0x41405B2AD954E0B7LL}}};
    int i, j, k;
    g_711[3][2][3] = (safe_mod_func_uint16_t_u_u((safe_lshift_func_uint16_t_u_u(((safe_mul_func_uint8_t_u_u(g_102, ((safe_lshift_func_uint16_t_u_u((safe_mod_func_uint16_t_u_u((safe_sub_func_uint32_t_u_u(0x33E42B39L, l_840)), (safe_add_func_int16_t_s_s((l_847 = (!(safe_lshift_func_uint8_t_u_s(((safe_sub_func_int32_t_s_s(l_840, 0x312A12A7L)) || (p_27 > p_27)), (l_840 | 1UL))))), l_840)))), 2)) == 8UL))) , l_847), l_848[0][2][0])), l_848[0][2][0]));
    return p_27;
}







static char func_29(unsigned char p_30, const unsigned short p_31, unsigned short p_32, unsigned char p_33, int p_34)
{
    unsigned long long l_62 = 0x9D62BFEED1B4B1C2LL;
    int l_70 = 0xD270C173L;
    int l_170[3];
    int l_414 = 0x1E52DDF6L;
    const int l_415 = (-2L);
    int i;
    for (i = 0; i < 3; i++)
        l_170[i] = (-1L);
    l_170[2] = (func_52((l_414 = ((((l_170[1] = ((safe_add_func_int32_t_s_s(2L, (safe_rshift_func_int16_t_s_s((g_61[1] , (l_62 = 0x57F5L)), func_63(func_68((l_70 = p_30)), l_170[0], g_61[4], g_61[0]))))) , p_34)) | p_34) , l_170[0]) , l_170[0])), g_61[1], p_33, l_415) >= l_415);
    l_170[1] = (safe_rshift_func_int8_t_s_u(l_70, func_68(g_579)));
    return g_255;
}







static char func_52(unsigned long long p_53, int p_54, short p_55, const short p_56)
{
    char l_418 = 7L;
    int l_419 = 3L;
    unsigned l_436[10][2];
    unsigned long long l_445 = 18446744073709551611UL;
    const unsigned short l_451 = 1UL;
    unsigned short l_651 = 65527UL;
    char l_807 = 1L;
    int l_824 = 7L;
    int l_825 = (-8L);
    int i, j;
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 2; j++)
            l_436[i][j] = 1UL;
    }
    for (g_183 = 0; (g_183 <= 1); g_183 += 1)
    {
        return g_383;
    }
lbl_528:
    l_419 = (safe_lshift_func_uint8_t_u_s(l_418, 0));
    if (g_18)
    {
        unsigned l_420 = 0x536DFCB9L;
        int l_421 = 0xE79639F5L;
        long long l_434 = 0xDD42086BAE5D8CDCLL;
        int l_435 = 0x8040B7BDL;
        l_420 = (-1L);
        l_421 = g_183;
        for (l_421 = 0; (l_421 <= 6); l_421 += 1)
        {
            int l_437[2];
            int i;
            for (i = 0; i < 2; i++)
                l_437[i] = (-1L);
            l_435 = (safe_rshift_func_int8_t_s_u((safe_add_func_int8_t_s_s((func_68((g_61[l_421] == (((safe_sub_func_uint16_t_u_u((g_269[7][5][0] = (func_68(p_53) != (safe_add_func_uint8_t_u_u((~(safe_add_func_int16_t_s_s((((l_419 = (l_434 = (p_53 || ((safe_rshift_func_int8_t_s_u(0xFCL, g_269[7][5][0])) == 0xDA28L)))) ^ (g_61[l_421] < g_269[5][5][1])) >= g_410), g_292))), g_383)))), l_418)) , 0x69L) < l_418))) == g_411), l_418)), 4));
            l_435 = ((g_18 = (l_436[7][1] = (-1L))) >= ((0x75D905F7L < (l_437[1] = p_55)) > g_222));
            for (l_434 = 0; (l_434 <= 1); l_434 += 1)
            {
                unsigned l_438[10] = {0UL,0xC0B45EBCL,1UL,0xC0B45EBCL,0UL,0UL,0xC0B45EBCL,1UL,0xC0B45EBCL,0UL};
                int i;
                l_438[9] = g_410;
                l_437[1] = ((func_68((safe_sub_func_int8_t_s_s((safe_mod_func_int8_t_s_s(func_68((g_410 = (safe_lshift_func_uint8_t_u_s((((p_54 && ((((func_63(g_411, l_445, ((safe_add_func_int8_t_s_s(l_437[1], l_438[9])) , p_55), ((safe_unary_minus_func_int64_t_s(p_56)) , ((g_269[7][5][0] == (func_68(((safe_add_func_int8_t_s_s(g_133, g_235)) , g_383)) & 0xDD11894EL)) == g_61[l_421]))) <= l_438[6]) && g_292) && p_54) , g_383)) & p_56) <= l_438[3]), l_436[7][1])))), 255UL)), 251UL))) != p_56) | l_451);
                if (p_54)
                    continue;
                for (g_82 = 0; (g_82 <= 3); g_82 += 1)
                {
                    g_18 = (-2L);
                }
            }
        }
    }
    else
    {
        long long l_456 = (-10L);
        int l_521 = 0x39A542B2L;
        unsigned long long l_541[10][2][4] = {{{0x31140BBA02064611LL,1UL,0x31140BBA02064611LL,18446744073709551615UL},{1UL,0xD1A50530FA9D26E6LL,0x254AECEE97A19AC1LL,0x05D2D8527DD136CBLL}},{{18446744073709551615UL,0xEC474B8D6EC7CFEDLL,1UL,0x58E6B8853C91B4BBLL},{0x4C21B0B1D8BA16A3LL,18446744073709551608UL,18446744073709551615UL,0xB306A14611E9D9F5LL}},{{0x38CFB7E95BB0361CLL,0xB25297FCE3681FFCLL,18446744073709551615UL,1UL},{0xA5C24F940AD292A5LL,18446744073709551615UL,18446744073709551614UL,18446744073709551615UL}},{{0xB25297FCE3681FFCLL,0xDF06EF8A51724CF2LL,0x58E6B8853C91B4BBLL,18446744073709551614UL},{0x5C796044DC670791LL,18446744073709551615UL,1UL,18446744073709551607UL}},{{1UL,0xD1A50530FA9D26E6LL,0x38CFB7E95BB0361CLL,0xA178049E541D10A7LL},{1UL,0xB25297FCE3681FFCLL,1UL,18446744073709551615UL}},{{0x5C796044DC670791LL,0xA178049E541D10A7LL,0x58E6B8853C91B4BBLL,0xB306A14611E9D9F5LL},{0xB25297FCE3681FFCLL,0x61932CC709F55AB7LL,18446744073709551614UL,0x05D2D8527DD136CBLL}},{{0xA5C24F940AD292A5LL,0x5C796044DC670791LL,18446744073709551615UL,18446744073709551607UL},{0x38CFB7E95BB0361CLL,0xDF06EF8A51724CF2LL,18446744073709551615UL,18446744073709551615UL}},{{0x4C21B0B1D8BA16A3LL,1UL,1UL,0x4C21B0B1D8BA16A3LL},{18446744073709551615UL,18446744073709551615UL,0x254AECEE97A19AC1LL,0xA178049E541D10A7LL}},{{1UL,0x61932CC709F55AB7LL,0x31140BBA02064611LL,0x58E6B8853C91B4BBLL},{0x5C796044DC670791LL,0xA5C24F940AD292A5LL,0xB306A14611E9D9F5LL,0x58E6B8853C91B4BBLL}},{{0x38CFB7E95BB0361CLL,0x61932CC709F55AB7LL,0xB2DAFED50DEDFE4CLL,0xA178049E541D10A7LL},{1UL,18446744073709551615UL,18446744073709551615UL,0x4C21B0B1D8BA16A3LL}}};
        unsigned char l_548 = 0UL;
        short l_615 = 0x3E6EL;
        unsigned long long l_656 = 0x4162E51B1E854B1BLL;
        unsigned char l_751 = 0xA3L;
        unsigned l_776 = 1UL;
        short l_782[10][10] = {{0x6C4CL,0xE310L,8L,0xE310L,0x6C4CL,0x6C4CL,0xE310L,8L,0xE310L,0x6C4CL},{0x6C4CL,0xE310L,8L,0xE310L,0x6C4CL,0x6C4CL,0x6C4CL,0xDFCEL,0x6C4CL,(-1L)},{(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L),(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L)},{(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L),(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L)},{(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L),(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L)},{(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L),(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L)},{(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L),(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L)},{(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L),(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L)},{(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L),(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L)},{(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L),(-1L),0x6C4CL,0xDFCEL,0x6C4CL,(-1L)}};
        char l_793[3][4] = {{(-1L),(-1L),1L,(-1L)},{(-1L),(-8L),(-8L),(-1L)},{(-8L),(-1L),(-8L),(-8L)}};
        const unsigned char l_802[8] = {0xE7L,0xE7L,0xE7L,0xE7L,0xE7L,0xE7L,0xE7L,0xE7L};
        int i, j, k;
        l_419 = p_55;
        for (g_102 = (-25); (g_102 > (-17)); g_102 = safe_add_func_uint32_t_u_u(g_102, 2))
        {
            unsigned short l_467 = 0x37F5L;
            unsigned char l_468 = 0UL;
            int l_527 = 0x7165928EL;
            for (g_133 = 14; (g_133 < 45); g_133 = safe_add_func_uint16_t_u_u(g_133, 2))
            {
                int l_457 = 0xA56B2E20L;
                l_457 = l_456;
            }
            g_458[0] = p_55;
            if ((safe_add_func_int64_t_s_s(p_53, l_456)))
            {
                return g_458[0];
            }
            else
            {
                int l_470 = 0xBCB7791EL;
                int l_486 = 0L;
                int l_489 = 0x0829D97DL;
                int l_490 = 0x02927D22L;
                int l_493 = 0x5A1E8B5FL;
                for (g_222 = (-7); (g_222 >= 11); g_222 = safe_add_func_uint8_t_u_u(g_222, 2))
                {
                    unsigned short l_469 = 0x9B23L;
                    l_419 = (g_269[4][0][1] , g_164[0]);
                    g_18 = ((l_418 >= 65528UL) > 0x425BCE41L);
                    g_18 = (g_61[2] , ((!((safe_mod_func_uint32_t_u_u(((0x80A26F176BC0FC32LL <= (safe_sub_func_uint16_t_u_u(65528UL, ((l_470 = (((l_467 || l_468) ^ l_469) , g_101)) > (safe_mul_func_uint16_t_u_u(0x41CAL, (((l_467 >= 0xFA77A25A86136CE8LL) >= p_55) == p_55))))))) || 0xF8L), 0xE7C08E44L)) || l_436[5][1])) > g_269[7][5][0]));
                    return p_55;
                }
                for (p_54 = 0; (p_54 >= 22); p_54 = safe_add_func_int8_t_s_s(p_54, 1))
                {
                    unsigned char l_501 = 0x9FL;
                    short l_542[10][2] = {{0xB7EBL,0x4582L},{0x4582L,4L},{0xA8C9L,5L},{0xB7EBL,0xA8C9L},{5L,4L},{5L,0xA8C9L},{0xB7EBL,5L},{0xA8C9L,4L},{0x4582L,0x4582L},{0xB7EBL,0x4582L}};
                    int l_546 = 6L;
                    int l_549 = 5L;
                    int i, j;
                    for (g_410 = 0; (g_410 < 1); g_410++)
                    {
                        unsigned char l_484 = 4UL;
                        int l_485 = 0x8532F8F7L;
                        l_485 = ((((safe_unary_minus_func_uint64_t_u((safe_add_func_int64_t_s_s((((safe_sub_func_int32_t_s_s((p_54 , ((safe_mod_func_int32_t_s_s(((l_484 = g_269[7][5][0]) < (g_101 , (l_470 = p_54))), (p_56 && g_82))) | (l_468 && (-3L)))), (g_18 = ((!(l_419 = p_54)) <= 4294967287UL)))) <= 0xFD9DL) >= 4294967295UL), 18446744073709551615UL)))) && l_445) < p_55) == p_56);
                    }
                    if (((+(g_253 , (((l_486 = (l_470 = (-8L))) & p_53) & ((!(((safe_rshift_func_uint16_t_u_s((l_490 = (((l_489 = g_411) < p_56) <= p_53)), 7)) < (g_502 = ((safe_add_func_uint64_t_u_u(l_493, (safe_mul_func_int8_t_s_s((l_493 >= (((safe_mul_func_int16_t_s_s((safe_unary_minus_func_int16_t_s(((g_235 = (safe_rshift_func_int16_t_s_s(g_222, 7))) ^ p_54))), p_53)) && 0xEEC6L) , g_235)), p_54)))) & l_501))) , l_456)) != g_458[0])))) <= 0xB9L))
                    {
                        return g_411;
                    }
                    else
                    {
                        long long l_507 = (-1L);
                        g_18 = ((safe_lshift_func_uint16_t_u_s(((g_82 <= ((l_507 <= (p_56 ^ g_133)) < p_55)) <= g_101), (safe_rshift_func_int8_t_s_u((((((((((safe_mul_func_int8_t_s_s((safe_mul_func_int32_t_s_s((safe_lshift_func_int16_t_s_s(g_269[4][4][1], p_53)), 0UL)), l_419)) >= 0xEAL) || l_501) < p_54) != g_164[0]) , l_468) != 255UL) < p_55) & 4L), g_255)))) ^ g_164[3]);
                    }
                    for (l_419 = (-9); (l_419 == (-10)); l_419 = safe_sub_func_int64_t_s_s(l_419, 6))
                    {
                        unsigned char l_518 = 0xBFL;
                        g_18 = l_518;
                        if (l_456)
                            continue;
                    }
                    if ((p_54 | (safe_mod_func_int8_t_s_s((l_521 = p_53), (safe_sub_func_uint8_t_u_u(l_419, ((safe_add_func_int16_t_s_s((g_526 = g_411), g_183)) ^ (((-1L) || p_56) , l_486))))))))
                    {
                        char l_529 = 0xC4L;
                        l_527 = g_269[6][8][1];
                        if (l_418)
                            goto lbl_528;
                        l_529 = l_467;
                        g_18 = (p_54 && ((safe_unary_minus_func_uint32_t_u((safe_add_func_uint16_t_u_u((safe_mul_func_int8_t_s_s(g_383, p_53)), g_502)))) <= p_56));
                    }
                    else
                    {
                        unsigned char l_545 = 0x50L;
                        int l_547 = 5L;
                        if (g_411)
                            break;
                        l_527 = l_501;
                        l_549 = (p_56 > (((l_456 > (safe_rshift_func_int8_t_s_s((safe_mod_func_int64_t_s_s(p_54, (0xF1DFA212D3318047LL & ((((l_541[1][1][2] , (0UL ^ p_56)) , l_542[8][1]) < (((safe_add_func_uint16_t_u_u(((l_547 = ((l_546 = (((((l_545 = (((l_527 = (l_541[4][1][2] , 5UL)) | p_56) & 18446744073709551609UL)) < l_541[0][0][0]) & p_54) , 18446744073709551615UL) , g_292)) , 0L)) ^ p_56), l_548)) , g_18) ^ p_55)) > 0x0E65FA4FL)))), g_222))) , l_456) ^ 0xE07706A0ACE968B8LL));
                    }
                }
            }
        }
        if (g_458[0])
        {
            unsigned char l_550 = 0x59L;
            int l_573 = 0x9136E059L;
            unsigned char l_640[1];
            int l_659 = 0x32AE5405L;
            int l_738 = 0x2369E32AL;
            char l_781 = 0x83L;
            int i;
            for (i = 0; i < 1; i++)
                l_640[i] = 0x68L;
            g_18 = g_410;
            for (p_53 = 0; (p_53 <= 1); p_53 += 1)
            {
                int l_612 = 0x82CFA0F6L;
                int l_616 = (-6L);
                unsigned short l_618 = 2UL;
                int i;
                for (l_456 = 1; (l_456 >= 0); l_456 -= 1)
                {
                    unsigned short l_567 = 0x3489L;
                    int l_580 = 0x81D5C723L;
                    int l_593 = 0x6D61AAB3L;
                    for (g_411 = 1; (g_411 >= 0); g_411 -= 1)
                    {
                        int i, j;
                        if (g_458[g_411])
                            break;
                        g_18 = l_436[(p_53 + 2)][g_411];
                        if (l_436[(p_53 + 8)][l_456])
                            continue;
                    }
                    if (((((p_54 & func_68(l_550)) != (!((safe_lshift_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_183, (p_55 = ((safe_mul_func_uint16_t_u_u(l_548, ((safe_mod_func_int64_t_s_s((safe_mul_func_int8_t_s_s(p_54, (((g_311 != 0xF8430B5DL) == ((safe_mul_func_int16_t_s_s(((safe_mul_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s(((-10L) | g_61[1]), p_54)) , g_311), p_53)) && 0xF904L), 65528UL)) && p_54)) == p_54))), (-1L))) && l_456))) && (-1L))))), 4)) , l_541[3][0][3]))) , 0x99EEL) < 0x029CL))
                    {
                        l_567 = p_54;
                        if (p_56)
                            continue;
                        if (g_18)
                            break;
                    }
                    else
                    {
                        short l_572 = 9L;
                        int l_574[9][7] = {{1L,0x4D9F11B3L,0L,0L,0x4D9F11B3L,1L,0xCC3E8ECBL},{0x4D9F11B3L,5L,0L,0L,6L,0x7910C1E4L,0L},{(-7L),1L,1L,6L,(-1L),6L,1L},{5L,5L,0x4970F706L,0xFA40E25AL,0L,1L,1L},{0xCC3E8ECBL,0x4D9F11B3L,0xFA40E25AL,5L,1L,0L,0L},{0L,(-1L),(-7L),(-1L),0L,5L,0xCC3E8ECBL},{0x7910C1E4L,0x4970F706L,(-7L),0x8EBB5BF9L,(-1L),6L,1L},{0x8EBB5BF9L,6L,0xFA40E25AL,6L,6L,0xFA40E25AL,6L},{0x7910C1E4L,0x8EBB5BF9L,0x4970F706L,0xCC3E8ECBL,0x4D9F11B3L,0xFA40E25AL,5L}};
                        int i, j;
                        if (g_269[7][6][1])
                            break;
                        l_573 = (safe_add_func_uint64_t_u_u(l_550, (((~((g_458[(p_53 + 1)] = (+((0x51L || g_311) , (safe_mod_func_uint64_t_u_u(l_541[1][1][2], (l_572 = (((g_458[1] , (!((g_383 , 7L) ^ g_164[0]))) >= g_269[7][5][0]) || g_164[0]))))))) && 0xA8213EF97A3386E6LL)) && p_55) || p_55)));
                        l_574[4][6] = g_101;
                    }
                    for (g_311 = 0; (g_311 <= 1); g_311 += 1)
                    {
                        int l_581[10][8][3] = {{{1L,0L,(-2L)},{0x42C41942L,0x7BB5B1DDL,5L},{0x0A314201L,(-6L),1L},{1L,(-7L),0L},{0x12D32456L,1L,(-2L)},{(-1L),(-1L),0x9AB53385L},{0x53C792F5L,(-10L),0xF2CD21EDL},{0x9AB53385L,0x9513B74CL,(-2L)}},{{0L,0x1F72CB4BL,0x1955019AL},{0x161FD81AL,0x9AB53385L,(-2L)},{(-1L),0x12D32456L,0xF2CD21EDL},{0xEE88220AL,5L,0x9AB53385L},{0x0A314201L,0xE40B8747L,(-2L)},{0L,(-3L),0L},{1L,0L,1L},{0x7174BC46L,(-1L),5L}},{{(-2L),0x0A314201L,(-10L)},{0x9AB53385L,0x4996F1CAL,0L},{(-2L),1L,0x1955019AL},{0x7174BC46L,0xE1229404L,(-1L)},{1L,0x12D32456L,1L},{0L,0xD09F3888L,0xD09F3888L},{0x0A314201L,0L,0xDFA95DB2L},{0xEE88220AL,(-1L),0L}},{{(-1L),0xF2CD21EDL,0x24493689L},{0x161FD81AL,(-1L),0xE1229404L},{0L,0xF2CD21EDL,0L},{0x9AB53385L,(-1L),0x42C41942L},{0x53C792F5L,0L,0x1955019AL},{(-1L),0xD09F3888L,0xCEA49BCBL},{0x12D32456L,0x12D32456L,0x0A314201L},{1L,0xE1229404L,0x7BB5B1DDL}},{{0x0A314201L,1L,0L},{0x4996F1CAL,0xD09F3888L,0x9513B74CL},{0x1955019AL,1L,0x12D32456L},{0x68AEB970L,1L,0L},{0xE40B8747L,0L,1L},{0x42C41942L,5L,0xE4D190E2L},{1L,0L,1L},{0xEE88220AL,(-2L),0x7174BC46L}},{{0L,0x53C792F5L,0L},{(-7L),0x42C41942L,0xCEA49BCBL},{1L,1L,(-1L)},{(-7L),0x7BB5B1DDL,0x9513B74CL},{0L,(-2L),0x3E673C8EL},{0xEE88220AL,1L,(-1L)},{1L,0xDFA95DB2L,0xDFA95DB2L},{0x42C41942L,0xE1229404L,0x161FD81AL}},{{0xE40B8747L,0x0A314201L,1L},{0x68AEB970L,0L,(-2L)},{0x1955019AL,0x53C792F5L,(-2L)},{0x4996F1CAL,0L,(-2L)},{1L,0x0A314201L,(-1L)},{(-1L),0xE1229404L,0x9513B74CL},{0x53C792F5L,0xDFA95DB2L,1L},{1L,1L,0x42C41942L}},{{(-6L),(-2L),0x24493689L},{0x42C41942L,0x7BB5B1DDL,(-1L)},{0x1F72CB4BL,1L,1L},{0L,0x42C41942L,(-1L)},{(-2L),0x53C792F5L,0x24493689L},{(-3L),(-2L),0x42C41942L},{1L,0L,1L},{0x9513B74CL,5L,0x9513B74CL}},{{0xCEE7FD55L,0L,(-1L)},{0xD09F3888L,0x9AB53385L,1L},{(-2L),0L,0xCEE7FD55L},{(-2L),0x161FD81AL,(-7L)},{(-2L),(-1L),0x24493689L},{0xD09F3888L,0xEE88220AL,0x9513B74CL},{0L,0x0A314201L,0x1955019AL},{0L,0L,0L}},{{0L,1L,1L},{(-2L),0x7174BC46L,0L},{(-10L),(-2L),0L},{0x7BB5B1DDL,0x9AB53385L,0xEE88220AL},{0xDFA95DB2L,(-2L),0x53C792F5L},{(-2L),0x7174BC46L,0x4996F1CAL},{1L,1L,0x24493689L},{0x9AB53385L,0L,(-3L)}}};
                        int i, j, k;
                        if (l_541[(l_456 + 5)][p_53][(g_311 + 2)])
                            break;
                        g_582[1] = ((0x62A683DF5D2659EDLL || func_68((safe_mod_func_int64_t_s_s(((safe_mod_func_int32_t_s_s((~func_68((l_580 = g_579))), g_269[3][5][0])) > (p_53 >= (l_581[9][0][2] = (l_419 = 0L)))), (g_458[1] = p_56))))) == l_456);
                        l_581[8][6][2] = l_541[6][1][2];
                        l_593 = ((l_580 = ((l_541[(l_456 + 7)][l_456][g_311] = ((func_68(g_164[1]) , (p_55 || ((((safe_add_func_uint16_t_u_u(((p_56 , (p_53 | ((safe_rshift_func_int8_t_s_s(func_68(g_587[0][5]), (safe_unary_minus_func_uint8_t_u((l_580 == ((safe_lshift_func_int16_t_s_s((safe_mul_func_int16_t_s_s(g_61[6], p_55)), p_53)) & p_53)))))) <= g_587[0][5]))) & g_61[1]), p_56)) || g_292) , (-9L)) ^ l_541[0][0][1]))) , p_53)) >= 1UL)) & p_56);
                    }
                }
                l_573 = (0xA84520F04C2A207ELL | (safe_lshift_func_int8_t_s_u((7L & g_458[p_53]), 6)));
                for (g_311 = 0; (g_311 <= 2); g_311 += 1)
                {
                    int l_617 = (-1L);
                    int i, j;
                    for (g_526 = 0; (g_526 <= 2); g_526 += 1)
                    {
                        int i, j, k;
                        if (l_436[g_311][p_53])
                            break;
                        if (l_541[(g_311 + 3)][p_53][g_311])
                            continue;
                        if (g_269[(p_53 + 7)][(p_53 + 1)][p_53])
                            continue;
                    }
                    for (g_292 = 0; (g_292 <= 2); g_292 += 1)
                    {
                        int i, j, k;
                        g_18 = l_436[(g_311 + 6)][p_53];
                        g_596 = func_68(l_541[(g_292 + 4)][p_53][g_311]);
                    }
                    l_617 = (~(safe_rshift_func_uint8_t_u_u(((l_616 = ((((((safe_sub_func_int64_t_s_s(((safe_mod_func_int64_t_s_s(0L, (safe_mul_func_int16_t_s_s((func_68(l_436[(p_53 + 4)][p_53]) | (safe_mod_func_int16_t_s_s((safe_add_func_uint16_t_u_u(((((((((-1L) == (safe_mod_func_uint16_t_u_u(((g_611 = l_436[(p_53 + 2)][p_53]) <= (g_587[0][5] = (g_579 && ((l_612 = p_54) > ((l_436[(p_53 + 2)][p_53] != (safe_lshift_func_int8_t_s_s(p_55, l_445))) >= g_222))))), 65530UL))) > l_436[(p_53 + 4)][p_53]) & p_55) & l_436[(p_53 + 2)][p_53]) == 0xB3L) || l_615) || 65535UL), 1L)), g_582[1]))), p_55)))) > p_56), p_56)) | 1UL) , 0x3E23L) == 3L) != 0xEDEC76C5L) ^ p_53)) , g_411), g_411)));
                    for (l_445 = 0; (l_445 <= 2); l_445 += 1)
                    {
                        int i, j, k;
                        g_631 = (l_573 = (l_541[(g_311 + 6)][p_53][(p_53 + 1)] == (func_68((((l_618 = (-1L)) & (g_253 ^ (safe_mul_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_s(g_18, (safe_sub_func_uint32_t_u_u((safe_add_func_int8_t_s_s(0L, p_53)), 0x4F876F79L)))) && (((p_55 = (safe_add_func_int64_t_s_s(g_611, ((((((safe_rshift_func_int16_t_s_u((-1L), 8)) , 6UL) & g_458[0]) > 0xAF0BL) <= l_541[(g_311 + 6)][p_53][(p_53 + 1)]) != p_56)))) != g_587[0][0]) & g_458[0])) & 0xEBL), p_54)))) , p_56)) <= p_54)));
                    }
                }
            }
            l_640[0] = ((g_235 & ((safe_rshift_func_uint8_t_u_u((((l_521 = l_541[1][1][2]) , ((l_573 = ((safe_lshift_func_uint16_t_u_u((((p_53 & (safe_mod_func_uint16_t_u_u((((safe_add_func_int32_t_s_s((g_101 | p_56), 0xC291B8A2L)) , 9L) <= ((g_82 = ((p_55 || g_311) > 3UL)) , l_418)), p_56))) > p_53) && 0x6FL), 14)) == 0xC795L)) || l_615)) ^ l_550), 7)) <= 0xBFL)) | p_54);
            if (l_418)
            {
                l_573 = (g_269[5][4][1] > ((g_579 = (l_419 = (p_55 || (l_521 <= 4UL)))) || p_54));
            }
            else
            {
                int l_646 = 1L;
                int l_768 = (-3L);
                char l_769 = (-1L);
                const int l_789[6][10][1] = {{{0x263323A5L},{0x37D5000EL},{0x27CE3CDBL},{1L},{0xCFB02DFFL},{0xB0F50F90L},{0L},{0L},{0xB0F50F90L},{0xCFB02DFFL}},{{1L},{0x27CE3CDBL},{0x37D5000EL},{0x263323A5L},{0x806AA32EL},{1L},{4L},{0x7E42C477L},{0x840495FCL},{0x7E42C477L}},{{4L},{1L},{0x806AA32EL},{0x263323A5L},{0x37D5000EL},{0x27CE3CDBL},{1L},{0xCFB02DFFL},{0xB0F50F90L},{0L}},{{0L},{0xB0F50F90L},{0xCFB02DFFL},{1L},{0x27CE3CDBL},{0x37D5000EL},{0x263323A5L},{0x806AA32EL},{1L},{4L}},{{0x7E42C477L},{0x840495FCL},{0x7E42C477L},{4L},{1L},{0x806AA32EL},{0x263323A5L},{0x37D5000EL},{0x27CE3CDBL},{1L}},{{0x9874D8B8L},{0x806AA32EL},{0x846B8E69L},{0x846B8E69L},{0x806AA32EL},{0x9874D8B8L},{0x27CE3CDBL},{0x12F94B84L},{0xDB505DEBL},{0L}}};
                int i, j, k;
                l_521 = (safe_unary_minus_func_int16_t_s((safe_lshift_func_uint8_t_u_u((l_646 = g_579), 1))));
                if ((l_521 = (l_659 = (((l_573 = (safe_sub_func_int8_t_s_s(((((p_53 = (safe_sub_func_uint32_t_u_u(l_651, (safe_mul_func_int16_t_s_s(((safe_rshift_func_int8_t_s_u(((((((func_63(p_55, g_253, g_383, (((l_656 >= (safe_add_func_uint64_t_u_u(l_640[0], 1L))) | g_410) != 0x4A76L)) <= g_410) == p_55) <= 4294967293UL) || 0x03L) | l_646) , l_651), 7)) > 0x1AL), l_573))))) < l_615) , g_458[0]) <= g_526), g_587[0][5]))) < 0xC5L) >= 0x37BF76D0L))))
                {
                    unsigned l_662 = 0UL;
                    int l_663 = 0x2EE6F333L;
                    l_663 = ((safe_lshift_func_uint16_t_u_s(g_269[7][5][0], 3)) || func_68(l_662));
lbl_697:
                    if (l_651)
                    {
                        l_419 = l_646;
                        l_646 = (safe_lshift_func_int8_t_s_s((g_410 = (safe_mul_func_uint8_t_u_u((l_656 < (p_53 , 0x5F792841L)), ((l_663 && ((p_53 == (func_63(g_292, (+l_651), (((safe_lshift_func_uint16_t_u_u(((0xAC8AB658L <= p_53) >= 65535UL), p_55)) == p_53) , (-1L)), g_596) <= p_55)) , 0xA4L)) ^ 0x647F9DD7L)))), l_656));
                        if (g_101)
                            goto lbl_697;
                    }
                    else
                    {
                        unsigned l_680 = 0xED67857CL;
                        unsigned long long l_681[5][8][5] = {{{4UL,18446744073709551607UL,0x20AE27E426FD6583LL,18446744073709551607UL,0x20AE27E426FD6583LL},{0x7B4B13B15E579A47LL,0x7B4B13B15E579A47LL,0x773B9D18D5E8E1C5LL,0xD80873826415CE1DLL,0UL},{0xD261E3F99CCE772BLL,18446744073709551607UL,0x08CD5CE16E0D96C5LL,18446744073709551607UL,0x08CD5CE16E0D96C5LL},{0x7B4B13B15E579A47LL,18446744073709551609UL,0x773B9D18D5E8E1C5LL,0xB7F62CFC37988330LL,0UL},{4UL,18446744073709551607UL,0x20AE27E426FD6583LL,18446744073709551607UL,0x20AE27E426FD6583LL},{0x7B4B13B15E579A47LL,0x7B4B13B15E579A47LL,0x773B9D18D5E8E1C5LL,0xD80873826415CE1DLL,0UL},{0xD261E3F99CCE772BLL,18446744073709551607UL,0x08CD5CE16E0D96C5LL,18446744073709551607UL,0x08CD5CE16E0D96C5LL},{0x7B4B13B15E579A47LL,18446744073709551609UL,0x773B9D18D5E8E1C5LL,0xB7F62CFC37988330LL,0UL}},{{4UL,18446744073709551607UL,0x20AE27E426FD6583LL,18446744073709551607UL,0x20AE27E426FD6583LL},{0x7B4B13B15E579A47LL,0x7B4B13B15E579A47LL,0x773B9D18D5E8E1C5LL,0xD80873826415CE1DLL,0UL},{0xD261E3F99CCE772BLL,18446744073709551607UL,0x08CD5CE16E0D96C5LL,18446744073709551607UL,0x08CD5CE16E0D96C5LL},{0x7B4B13B15E579A47LL,18446744073709551609UL,0x773B9D18D5E8E1C5LL,0xB7F62CFC37988330LL,0UL},{4UL,18446744073709551607UL,0x20AE27E426FD6583LL,18446744073709551607UL,0x20AE27E426FD6583LL},{0x7B4B13B15E579A47LL,0x7B4B13B15E579A47LL,0x773B9D18D5E8E1C5LL,0xD80873826415CE1DLL,0UL},{0xD261E3F99CCE772BLL,18446744073709551607UL,0x08CD5CE16E0D96C5LL,18446744073709551607UL,0x08CD5CE16E0D96C5LL},{0x7B4B13B15E579A47LL,18446744073709551609UL,0x773B9D18D5E8E1C5LL,0xB7F62CFC37988330LL,0UL}},{{4UL,18446744073709551607UL,0x20AE27E426FD6583LL,18446744073709551607UL,0x20AE27E426FD6583LL},{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,1UL,0x7B4B13B15E579A47LL},{18446744073709551615UL,0UL,0xD261E3F99CCE772BLL,0xBF5ABBC39918F3B4LL,0xD261E3F99CCE772BLL},{18446744073709551615UL,18446744073709551614UL,18446744073709551609UL,0x9F11625DBF1EBFC0LL,0x7B4B13B15E579A47LL},{9UL,0UL,4UL,0xBF5ABBC39918F3B4LL,4UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,1UL,0x7B4B13B15E579A47LL},{18446744073709551615UL,0UL,0xD261E3F99CCE772BLL,0xBF5ABBC39918F3B4LL,0xD261E3F99CCE772BLL},{18446744073709551615UL,18446744073709551614UL,18446744073709551609UL,0x9F11625DBF1EBFC0LL,0x7B4B13B15E579A47LL}},{{9UL,0UL,4UL,0xBF5ABBC39918F3B4LL,4UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,1UL,0x7B4B13B15E579A47LL},{18446744073709551615UL,0UL,0xD261E3F99CCE772BLL,0xBF5ABBC39918F3B4LL,0xD261E3F99CCE772BLL},{18446744073709551615UL,18446744073709551614UL,18446744073709551609UL,0x9F11625DBF1EBFC0LL,0x7B4B13B15E579A47LL},{9UL,0UL,4UL,0xBF5ABBC39918F3B4LL,4UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,1UL,0x7B4B13B15E579A47LL},{18446744073709551615UL,0UL,0xD261E3F99CCE772BLL,0xBF5ABBC39918F3B4LL,0xD261E3F99CCE772BLL},{18446744073709551615UL,18446744073709551614UL,18446744073709551609UL,0x9F11625DBF1EBFC0LL,0x7B4B13B15E579A47LL}},{{9UL,0UL,4UL,0xBF5ABBC39918F3B4LL,4UL},{18446744073709551615UL,18446744073709551615UL,18446744073709551609UL,1UL,0x7B4B13B15E579A47LL},{18446744073709551615UL,0UL,0xD261E3F99CCE772BLL,0xBF5ABBC39918F3B4LL,0xD261E3F99CCE772BLL},{18446744073709551615UL,18446744073709551614UL,18446744073709551609UL,0x9F11625DBF1EBFC0LL,0x7B4B13B15E579A47LL},{9UL,18446744073709551606UL,4UL,0UL,4UL},{0UL,0UL,1UL,18446744073709551614UL,0x9F11625DBF1EBFC0LL},{0x08CD5CE16E0D96C5LL,18446744073709551606UL,0x284EDE8DD4FD84C8LL,0UL,0x284EDE8DD4FD84C8LL},{0UL,0x773B9D18D5E8E1C5LL,1UL,18446744073709551615UL,0x9F11625DBF1EBFC0LL}}};
                        int i, j, k;
                        g_18 = (0xC2D8BCCDFE4163B6LL || (0x2DL < ((safe_mul_func_int8_t_s_s(p_56, ((safe_add_func_int16_t_s_s((safe_mod_func_int32_t_s_s((l_521 = ((safe_mul_func_int16_t_s_s(0L, p_54)) , 1L)), (+((0UL == p_54) ^ (safe_add_func_int16_t_s_s(((l_615 > 0x1776A5BCL) != p_56), l_680)))))), l_681[3][3][2])) == 0x62AB1EB5ED2453B1LL))) & p_53)));
                        if (g_292)
                            goto lbl_682;
lbl_682:
                        g_18 = (-2L);
                        l_663 = (safe_lshift_func_uint8_t_u_u(((func_68(((g_61[6] = l_662) ^ (p_54 , (safe_add_func_uint8_t_u_u((safe_mul_func_int16_t_s_s((safe_mod_func_int8_t_s_s(g_502, (safe_sub_func_int8_t_s_s(g_458[0], 3L)))), p_55)), (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(g_133, 4)), (g_222 ^ p_53)))))))) == 0x44L) >= 1UL), 2));
                    }
                    g_18 = l_663;
                }
                else
                {
                    unsigned l_702 = 4294967286UL;
                    int l_740[3];
                    int l_772[10] = {0xCA28ACC9L,0xCA28ACC9L,0L,0L,0L,0xCA28ACC9L,0xCA28ACC9L,0L,0L,0L};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_740[i] = 0x70FBED05L;
lbl_771:
                    if ((((safe_mul_func_uint8_t_u_u((safe_mul_func_uint8_t_u_u(l_541[1][1][2], ((l_573 = l_702) != p_55))), g_502)) != g_502) , (safe_add_func_int32_t_s_s(((((g_255 = p_53) , ((((safe_lshift_func_int16_t_s_u((safe_lshift_func_int16_t_s_u((g_611 = (p_53 == ((g_582[3] >= ((!((safe_sub_func_uint8_t_u_u(l_646, 0x70L)) < l_646)) | l_541[4][0][3])) != p_55))), g_711[3][2][3])), l_456)) , p_55) != 0UL) || g_311)) ^ g_582[1]) ^ g_82), p_54))))
                    {
                        unsigned char l_739 = 0xFAL;
                        int l_741[5][2][10] = {{{0xD3363C11L,0x67126809L,1L,(-1L),1L,0x67126809L,0xD3363C11L,9L,0x881E116AL,9L},{0xD3363C11L,0x67126809L,1L,(-1L),1L,0x67126809L,0xD3363C11L,9L,0x881E116AL,9L}},{{0xD3363C11L,0x67126809L,1L,(-1L),1L,0x67126809L,0xD3363C11L,9L,0x881E116AL,9L},{0xD3363C11L,0x67126809L,1L,(-1L),1L,0x67126809L,0xD3363C11L,9L,0x881E116AL,9L}},{{0xD3363C11L,0x67126809L,1L,(-1L),1L,0x67126809L,0xD3363C11L,9L,0x881E116AL,9L},{0xD3363C11L,0x67126809L,1L,(-1L),1L,0x67126809L,0xD3363C11L,9L,0x881E116AL,9L}},{{0xD3363C11L,0x67126809L,1L,(-1L),1L,0x67126809L,(-1L),0x67126809L,(-5L),0x67126809L},{(-1L),0x732A22D5L,0xD3363C11L,0x32FBB870L,0xD3363C11L,0x732A22D5L,(-1L),0x67126809L,(-5L),0x67126809L}},{{(-1L),0x732A22D5L,0xD3363C11L,0x32FBB870L,0xD3363C11L,0x732A22D5L,(-1L),0x67126809L,(-5L),0x67126809L},{(-1L),0x732A22D5L,0xD3363C11L,0x32FBB870L,0xD3363C11L,0x732A22D5L,(-1L),0x67126809L,(-5L),0x67126809L}}};
                        int i, j, k;
                        l_573 = (((safe_add_func_int8_t_s_s(((l_740[1] = (l_739 = (((l_738 = (l_646 = ((p_55 < (p_53 > (l_419 = (func_63(l_550, (safe_lshift_func_uint16_t_u_s((safe_add_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(((-1L) >= g_102), (safe_mul_func_int8_t_s_s((g_133 != ((g_711[3][2][3] = (((safe_sub_func_uint64_t_u_u((safe_lshift_func_uint16_t_u_s(l_702, ((safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int8_t_s_s(p_56, (safe_mul_func_uint16_t_u_u(p_56, p_53)))) , l_702), l_646)), 255UL)) || g_596))), p_55)) > g_502) >= g_631)) & p_54)), g_183)))) < 0L), 4)), g_183)), g_579)), l_702, l_521) == l_702)))) && 9L))) ^ p_54) | l_541[1][1][2]))) > l_741[2][0][3]), g_458[0])) >= 0x5484L) != g_582[1]);
                    }
                    else
                    {
                        unsigned l_744[2][5];
                        unsigned char l_770 = 0xB0L;
                        int i, j;
                        for (i = 0; i < 2; i++)
                        {
                            for (j = 0; j < 5; j++)
                                l_744[i][j] = 18446744073709551606UL;
                        }
                        g_711[1][3][2] = (safe_mod_func_int8_t_s_s(0x5EL, (((l_744[1][2] <= func_63(l_646, ((g_222 = ((~(g_611 = g_582[1])) && (g_164[3] = (l_436[1][0] <= (g_253 <= (safe_add_func_int64_t_s_s(((p_53 | (safe_mul_func_int16_t_s_s((~func_68(l_646)), g_587[0][5]))) <= 0xBD3EDF5670AFF7B0LL), 0L))))))) ^ p_53), l_419, g_383)) != l_646) ^ p_53)));
                        l_768 = (~(l_521 = ((4L ^ (safe_lshift_func_uint16_t_u_u((l_769 = ((l_751 < ((safe_mod_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u((1L > ((safe_mod_func_uint64_t_u_u(((((safe_mul_func_uint16_t_u_u((l_740[2] = ((safe_sub_func_uint16_t_u_u(65534UL, (((func_63(p_54, g_458[1], (safe_sub_func_int32_t_s_s(((l_646 = (safe_rshift_func_int16_t_s_u((safe_sub_func_uint32_t_u_u(l_646, l_744[1][2])), (l_659 = l_646)))) || p_55), 4294967295UL)), l_521) , g_502) == p_54) , g_222))) , l_740[1])), 0x920AL)) , g_61[4]) && g_269[7][5][0]) , g_183), g_587[0][5])) > 3L)), l_615)), l_768)) <= 7L)) , l_550)), g_61[1]))) >= l_768)));
                        l_770 = 0x4DAFFCB8L;
                        return g_61[1];
                    }
                    if ((l_419 = l_646))
                    {
                        g_711[2][3][3] = func_63((func_68((l_521 = l_436[1][0])) & 0UL), ((p_55 = l_541[8][0][3]) >= l_436[7][1]), p_56, (l_573 = (-4L)));
                        g_711[3][2][3] = p_53;
                        if (p_54)
                            goto lbl_771;
                        l_772[2] = g_61[1];
                    }
                    else
                    {
                        int l_773 = 0xB470CF4BL;
                        l_773 = g_458[2];
                        l_768 = g_269[7][5][0];
                        g_711[1][0][3] = ((safe_mul_func_uint16_t_u_u((l_776 = g_235), ((safe_rshift_func_int16_t_s_u((safe_sub_func_int64_t_s_s((((((l_419 & (func_68(((l_773 = p_54) , (func_68(l_781) <= (g_383 >= 1UL)))) >= p_53)) , l_773) & p_53) >= p_53) >= 3L), g_61[6])), 2)) & 0xF3FEL))) , (-1L));
                    }
                    l_659 = (g_18 = l_768);
                }
                l_768 = ((((func_63((!l_782[9][4]), (l_521 = func_63((0x8EL < (g_101 == (l_419 = ((safe_sub_func_uint16_t_u_u((((p_55 < (65533UL >= (l_419 < (safe_add_func_uint16_t_u_u((((((safe_lshift_func_int8_t_s_s(l_541[1][1][2], 7)) || (p_53 = (g_596 < (0x8368L | l_789[2][9][0])))) >= 0xDFC8L) && p_56) > (-7L)), 1UL))))) > l_548) , l_789[2][9][0]), p_55)) , p_55)))), g_235, l_769, p_56)), p_56, p_56) & 0UL) > 247UL) <= p_55) <= g_711[5][3][2]);
            }
        }
        else
        {
            char l_790 = (-1L);
            g_711[3][2][3] = p_56;
            l_419 = (p_55 & (func_68((func_68((l_790 < ((((l_436[5][1] < (p_53 || 1L)) | p_55) ^ (func_68(p_54) , (((((safe_mul_func_int8_t_s_s((l_418 >= l_793[2][2]), g_82)) , 0xEA52L) >= l_615) , 0UL) == l_436[7][1]))) || l_790))) ^ g_61[3])) , 0xD10B71D9L));
        }
        l_521 = ((-8L) || (safe_rshift_func_int8_t_s_s((safe_mul_func_uint16_t_u_u((~(g_502 & (-1L))), ((((func_63(l_521, ((safe_sub_func_int64_t_s_s((safe_mod_func_int64_t_s_s(l_802[7], func_63((l_419 = (~l_793[0][1])), ((g_102 == (g_611 != (safe_mod_func_int32_t_s_s((safe_add_func_int32_t_s_s(0xC7798A39L, l_451)), l_451)))) > 4294967289UL), g_611, g_133))), 0x20A66318F150F8EDLL)) >= l_807), g_711[3][2][3], g_383) >= (-1L)) == l_751) <= g_579) && 0xEC57EFF2L))), 5)));
    }
    g_711[2][3][2] = func_63((((safe_add_func_uint64_t_u_u((safe_sub_func_uint32_t_u_u(0x3E0D9AB0L, (0x97L <= l_807))), p_54)) != ((((safe_rshift_func_uint8_t_u_s((l_825 = ((g_611 & ((safe_add_func_int16_t_s_s((-7L), p_54)) , ((safe_rshift_func_uint8_t_u_s((g_253 = (g_383 ^ ((((safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_s((func_68((l_419 = (g_410 = func_68((((g_587[0][2] = ((g_292 = (safe_rshift_func_int8_t_s_s(g_410, l_451))) == l_824)) , 18446744073709551615UL) , p_55))))) , 0x8DL), l_824)), l_436[7][1])) <= p_55) == 0x736783D73649E683LL) < l_436[7][1]))), 0)) | l_451))) || p_53)), 6)) || 0xA477L) || p_55) | p_53)) | 1L), g_526, l_651, l_807);
    return p_55;
}







static short func_63(int p_64, int p_65, short p_66, char p_67)
{
    unsigned short l_171 = 0xD5BCL;
    int l_172 = 1L;
    int l_174 = 0x2788A455L;
    unsigned l_332 = 0x5951A698L;
    int l_378[8] = {0x595985F0L,0xA5137B5AL,0x595985F0L,0xA5137B5AL,0x595985F0L,0xA5137B5AL,0x595985F0L,0xA5137B5AL};
    long long l_412 = 0xF8167146D1E40F14LL;
    unsigned l_413 = 0xEE0B1472L;
    int i;
    l_171 = g_133;
    if (g_82)
    {
        unsigned char l_173 = 0UL;
        unsigned char l_184 = 0x2AL;
        int l_197[4];
        int l_218 = (-6L);
        unsigned short l_250 = 65535UL;
        long long l_333 = 0xB1BB6D1EDAE9904FLL;
        int i;
        for (i = 0; i < 4; i++)
            l_197[i] = 0x2E02E4CAL;
        p_64 = (p_65 = (1UL & ((((l_172 = p_64) != (g_164[3] , ((g_183 = (((l_174 = (l_173 , (0L != g_61[1]))) >= (safe_add_func_int64_t_s_s(0xE376772AFA6F6173LL, (safe_mod_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((p_67 , ((safe_sub_func_int16_t_s_s(0x2F14L, g_101)) != g_61[5])), g_102)) != g_164[0]), (-6L)))))) != g_164[0])) , g_102))) | g_18) , g_164[0])));
        for (p_64 = 0; (p_64 <= 3); p_64 += 1)
        {
            int l_195 = (-1L);
            int l_196 = (-1L);
            unsigned long long l_249 = 0x0E7B0658B699BD09LL;
            int l_266 = 0x896D3C32L;
            p_65 = g_102;
            p_65 = l_184;
            if (((0x19176D0589183112LL ^ (l_197[0] = (safe_lshift_func_int16_t_s_u(((g_18 == ((safe_sub_func_uint32_t_u_u(((g_164[0] , (((safe_sub_func_uint32_t_u_u(((l_174 < l_184) != (g_133 ^ (safe_add_func_int64_t_s_s((~(~(g_133 < (((0x96B2L != ((+(g_102 = (((((l_195 = (g_82 = p_66)) ^ 0xB4A03188522CE914LL) >= p_67) & g_183) > 0x35C7AEBAL))) , g_102)) & 5UL) || 0x096D4882EDD942F1LL)))), p_67)))), g_133)) > p_66) ^ g_61[1])) != l_171), g_113)) <= l_196)) , l_174), p_65)))) | p_66))
            {
                int l_219 = 0x7E1829C3L;
                int l_220 = 0xFCBFF38EL;
                int l_221 = 0xFAA8155EL;
                unsigned l_254 = 0x28B4F057L;
                g_222 = (safe_mul_func_uint16_t_u_u(((((((((safe_add_func_uint64_t_u_u(l_195, (p_65 & (safe_sub_func_int32_t_s_s(((func_68((((l_196 = (safe_lshift_func_int8_t_s_u((safe_rshift_func_int8_t_s_s((((l_174 = 0x0F6CL) > g_133) <= (l_220 = ((((l_219 = ((safe_lshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_u(g_101, 5)), (l_197[0] >= ((p_67 = (l_218 = ((safe_lshift_func_uint8_t_u_s((safe_rshift_func_int8_t_s_u(p_65, g_164[0])), p_66)) & g_164[1]))) && 0L)))) && l_171)) >= g_183) ^ 0xAAB8839AD851558ELL) , (-10L)))), l_221)), 6))) ^ g_18) , (-1L))) && l_221) > l_171), l_195))))) != p_65) >= 0L) | p_66) != 1UL) != 0xAC18CAC2623A6D7ALL) != p_66) == 18446744073709551607UL), g_61[0]));
                for (g_183 = 0; (g_183 <= 3); g_183 += 1)
                {
                    short l_223 = 0x5A3AL;
                    for (p_66 = 0; (p_66 <= 3); p_66 += 1)
                    {
                        char l_228 = 0xD9L;
                        p_65 = l_223;
                        l_228 = ((safe_sub_func_uint8_t_u_u(249UL, (safe_mul_func_int16_t_s_s(g_82, 1L)))) ^ g_61[6]);
                        l_219 = (g_18 <= 1L);
                        l_196 = p_67;
                    }
                }
                for (l_171 = 0; (l_171 <= 3); l_171 += 1)
                {
                    unsigned short l_229 = 0xDFC6L;
                    int l_230 = 0x0841C128L;
                    p_65 = g_82;
                    for (l_195 = 3; (l_195 >= 0); l_195 -= 1)
                    {
                        l_229 = l_174;
                        l_230 = (g_164[1] ^ 2L);
                    }
                    g_235 = ((g_18 = l_229) | (safe_mod_func_int64_t_s_s((g_61[5] && ((safe_rshift_func_int16_t_s_u(g_183, 10)) , g_113)), (l_219 = (g_82 = g_133)))));
                    g_255 = (safe_mul_func_uint8_t_u_u((safe_mod_func_uint32_t_u_u((safe_unary_minus_func_int64_t_s(((p_65 , (safe_mod_func_int16_t_s_s((safe_lshift_func_int8_t_s_s(((l_197[0] = ((-1L) & (l_254 = (safe_add_func_uint32_t_u_u((safe_mul_func_int16_t_s_s(((func_68(p_66) >= ((((((((g_183 ^ (l_249 & l_250)) , (safe_mul_func_uint8_t_u_u(p_67, (p_67 , g_253)))) != 0x3AL) ^ l_171) && 0UL) <= l_230) ^ 18446744073709551606UL) , 8L)) , p_67), l_174)), 3UL))))) == p_64), 3)), 7UL))) | p_67))), 1UL)), p_66));
                }
            }
            else
            {
                short l_275 = 3L;
                int l_319[8];
                int i;
                for (i = 0; i < 8; i++)
                    l_319[i] = 0x6EB9614AL;
                for (p_67 = 0; (p_67 <= 3); p_67 += 1)
                {
                    l_197[3] = (((g_102 = 0xD391C6798BE1ECB5LL) && ((safe_sub_func_uint8_t_u_u(((p_67 > 0x2667C334L) >= g_102), g_164[1])) || func_68(g_61[1]))) & (p_64 & 0xD1B8L));
                    if (g_164[3])
                        continue;
                    for (l_196 = 3; (l_196 >= 0); l_196 -= 1)
                    {
                        int l_270 = 0x9420FC96L;
                        int i;
                        p_65 = (((((0xB932FE9E5AFB12ACLL | ((safe_mod_func_uint8_t_u_u(((l_197[p_64] = ((func_68((safe_sub_func_uint32_t_u_u((((safe_add_func_uint8_t_u_u(0x07L, func_68(g_164[p_64]))) || (g_164[p_64] && ((((g_133 = (l_266 = (l_197[p_67] & 0xA1488773L))) , func_68((safe_add_func_uint32_t_u_u((g_269[7][5][0] = p_67), (g_61[6] , g_102))))) && 0x55L) <= p_66))) || g_113), l_249))) ^ p_64) != g_253)) , p_65), p_64)) <= 0L)) <= l_171) != l_270) >= l_250) & 0x60L);
                        return g_253;
                    }
                }
                if ((safe_sub_func_uint32_t_u_u((func_68(p_67) , func_68(((safe_add_func_uint32_t_u_u(func_68((func_68(g_164[0]) >= 0L)), (p_67 >= (l_275 , ((((g_222 == l_197[1]) | l_275) ^ g_61[1]) , 0UL))))) , p_67))), l_195)))
                {
                    const unsigned short l_276 = 0x5523L;
                    if (l_266)
                    {
                        unsigned short l_281 = 65535UL;
                        int i;
                        p_65 = (l_276 != ((l_266 = (safe_lshift_func_uint16_t_u_s((g_164[p_64] = (safe_rshift_func_uint16_t_u_u(l_281, p_67))), 0))) == p_65));
                        l_266 = (safe_lshift_func_int8_t_s_s(((g_292 = ((safe_add_func_uint8_t_u_u(l_171, func_68((func_68(g_183) , ((safe_mul_func_int8_t_s_s(func_68(g_164[0]), (p_67 = (safe_add_func_int32_t_s_s(1L, 0x97F0C942L))))) && ((safe_add_func_uint16_t_u_u(((g_164[p_64] ^ g_269[7][5][0]) >= 18446744073709551608UL), 5UL)) ^ g_61[1])))))) ^ l_276)) || 0x85FDC69AL), g_222));
                    }
                    else
                    {
                        g_18 = (-7L);
                        return l_275;
                    }
                }
                else
                {
                    char l_308[4] = {0x67L,0x67L,0x67L,0x67L};
                    int l_328[9][7][4] = {{{5L,(-1L),0x2F6EA9D6L,0x67607D27L},{0x67607D27L,0x57B35241L,0x2F6EA9D6L,4L},{5L,(-1L),6L,0x2F6EA9D6L},{0xEE038D1FL,0x47CB3112L,9L,(-1L)},{9L,(-1L),(-1L),0L},{(-1L),(-1L),0xBCC3F394L,6L},{(-1L),(-1L),1L,1L}},{{5L,5L,4L,0x924034DBL},{0L,0x57B35241L,(-1L),(-1L)},{1L,0x8043FA16L,6L,(-1L)},{0x2B93D780L,0x8043FA16L,0xBCC3F394L,(-1L)},{0x8043FA16L,0x57B35241L,0x8D4A8BD8L,0x924034DBL},{(-1L),5L,4L,(-3L)},{0xB119A467L,0x8043FA16L,(-1L),0x924034DBL}},{{(-1L),0x2F6EA9D6L,1L,0x47CB3112L},{9L,0x1A44A4B0L,0x556329EAL,0x1A44A4B0L},{0x2F6EA9D6L,(-1L),(-3L),0x556329EAL},{0xB2CAF75AL,0xEE038D1FL,4L,3L},{0x57B35241L,0x8BA4317EL,(-1L),0xBCC3F394L},{0x57B35241L,0x2F6EA9D6L,4L,(-1L)},{0xB2CAF75AL,0xBCC3F394L,(-3L),0x924034DBL}},{{0x2F6EA9D6L,4L,0x556329EAL,(-1L)},{9L,0xB2CAF75AL,1L,3L},{(-1L),(-1L),(-1L),1L},{0xB119A467L,4L,4L,0xB119A467L},{0xEE038D1FL,0x1A44A4B0L,(-1L),0xBCC3F394L},{4L,4L,0x2B93D780L,(-3L)},{0xB2CAF75AL,9L,0x924034DBL,(-3L)}},{{(-1L),4L,2L,0xBCC3F394L},{0x47CB3112L,0x1A44A4B0L,1L,0xB119A467L},{(-1L),4L,(-3L),1L},{0x1A44A4B0L,(-1L),0x2B93D780L,3L},{0xEE038D1FL,0xB2CAF75AL,0x2F6EA9D6L,(-1L)},{0x57B35241L,4L,0x57B35241L,0x924034DBL},{0xB119A467L,0xBCC3F394L,0x924034DBL,(-1L)}},{{(-1L),0x2F6EA9D6L,0x556329EAL,0xBCC3F394L},{0xBCC3F394L,(-1L),1L,0x47CB3112L},{0x8BA4317EL,0x67607D27L,(-1L),1L},{0xBCC3F394L,(-3L),0x924034DBL,9L},{0x924034DBL,9L,0xB2CAF75AL,1L},{0x67607D27L,0xB2CAF75AL,(-1L),(-1L)},{9L,0x556329EAL,(-1L),(-1L)}},{{0x8BA4317EL,0x8BA4317EL,1L,2L},{1L,(-1L),0x8D4A8BD8L,9L},{0x1A44A4B0L,0L,(-1L),0x8D4A8BD8L},{0x8043FA16L,0L,(-1L),9L},{0L,(-1L),0xB119A467L,2L},{0x67607D27L,0x8BA4317EL,0L,(-1L)},{0xBCC3F394L,0x556329EAL,0x2F6EA9D6L,(-1L)}},{{0x1A44A4B0L,0xB2CAF75AL,1L,1L},{6L,9L,1L,9L},{0xB2CAF75AL,(-3L),(-1L),1L},{0x8043FA16L,0x67607D27L,0L,0x47CB3112L},{0x924034DBL,(-1L),0x1A44A4B0L,0x4F0B97A4L},{0x924034DBL,0xB2CAF75AL,0L,0x2F6EA9D6L},{0x8043FA16L,0x4F0B97A4L,(-1L),(-1L)}},{{0xB2CAF75AL,3L,1L,2L},{6L,0x8043FA16L,1L,0x47CB3112L},{0x1A44A4B0L,(-3L),0x2F6EA9D6L,1L},{0xBCC3F394L,0L,0L,0xBCC3F394L},{0xBCC3F394L,0x57B35241L,(-1L),(-1L)},{0x47CB3112L,1L,0x8043FA16L,6L},{4L,0x924034DBL,2L,6L}}};
                    int i, j, k;
                    if ((((l_218 = (safe_lshift_func_int16_t_s_u(((p_64 != (((p_66 <= (safe_mul_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(func_68((l_195 | (l_275 <= (safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(((safe_mul_func_int16_t_s_s(0xE5EFL, (g_255 ^ (safe_lshift_func_uint8_t_u_s((g_255 & ((safe_mul_func_int8_t_s_s(g_101, ((g_269[7][5][0] > (-1L)) > l_308[0]))) , l_275)), g_102))))) | 0xBF2F6F7A06AB12BALL))), g_164[0]))))), p_64)) ^ l_174), g_269[7][5][0]))) == g_255) , g_183)) == l_173), p_65))) , p_65) | 1UL))
                    {
                        char l_312[6] = {0x52L,0x55L,0x52L,0x52L,0x55L,0x52L};
                        int i;
                        l_312[1] = (((0x57DEBA7D9984E951LL != (l_218 , func_68((l_171 , (safe_mul_func_uint8_t_u_u(((l_196 = (func_68(p_65) > ((g_269[7][5][0] > (g_311 = (g_255 < (g_269[7][5][0] & l_275)))) >= p_66))) > 0x15L), 0xC5L)))))) && l_249) >= 0x4855E6FC1642C3FELL);
                    }
                    else
                    {
                        return l_195;
                    }
                    for (g_102 = 0; (g_102 > (-30)); --g_102)
                    {
                        unsigned long long l_329 = 1UL;
                        g_18 = (safe_add_func_int64_t_s_s(((0x4FL <= (safe_sub_func_uint8_t_u_u(0UL, (0xF07FCD34L && (((l_319[2] = l_197[0]) , p_66) || ((safe_mul_func_int16_t_s_s((-1L), ((safe_add_func_int64_t_s_s(((safe_mod_func_uint8_t_u_u((l_319[2] = 0x62L), 0x6DL)) && l_218), 7L)) == p_64))) <= 0UL)))))) && 9L), l_184));
                        g_18 = (g_101 & ((g_164[3] > (p_65 > (p_64 != l_249))) ^ (l_328[1][3][0] = l_275)));
                        g_18 = ((((((1L || g_269[7][5][0]) != ((((l_275 != g_269[7][5][0]) & 1L) ^ ((l_329 != (g_235 , ((safe_add_func_uint32_t_u_u((~0x276D528FL), g_101)) , (-1L)))) , 0x0A9068FD7EE3A75CLL)) ^ l_173)) < 6UL) && g_222) , 0x870E668943922995LL) <= 0x767012BB54E963DFLL);
                        return l_332;
                    }
                }
                if (l_333)
                    continue;
            }
            p_65 = (safe_sub_func_uint64_t_u_u((safe_lshift_func_uint8_t_u_s(((safe_add_func_int32_t_s_s((safe_add_func_uint32_t_u_u((0xAFC9L ^ ((safe_sub_func_uint16_t_u_u(0UL, (((((((g_164[0] = (p_64 ^ (((safe_add_func_int8_t_s_s(((l_174 = ((g_82 = (safe_lshift_func_uint16_t_u_s(p_66, 7))) == p_66)) ^ 0UL), 0xCFL)) != ((((p_67 = g_269[7][5][0]) , l_332) & l_332) < l_218)) , l_250))) , (-1L)) != 0UL) || l_196) | p_64) && l_184) | 1L))) != 0x39DE8AD8L)), l_171)), g_133)) , p_65), 4)), l_171));
        }
        p_65 = (safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_u(((safe_rshift_func_int8_t_s_s((func_68(g_61[1]) == (g_222 = (l_218 = (safe_mod_func_uint32_t_u_u((((1L > ((((((g_222 >= (g_269[7][3][1] < 4294967295UL)) , g_311) , ((0x66L || p_67) , 0xC072L)) <= (-5L)) ^ p_64) != (-1L))) , g_235) == p_66), p_64))))), 5)) , 0x6C8FL), g_61[0])), l_332));
    }
    else
    {
        unsigned long long l_360 = 0UL;
        if ((func_68(g_101) <= (l_332 , (safe_add_func_uint64_t_u_u((((safe_rshift_func_int8_t_s_u(l_360, 2)) <= (safe_add_func_int8_t_s_s(((p_67 = ((((safe_lshift_func_uint16_t_u_u(l_360, (((g_235 <= (safe_rshift_func_uint8_t_u_u(g_311, (safe_mul_func_int8_t_s_s(g_183, g_222))))) == 1L) & l_171))) < 0x76C442C3B5483367LL) | l_360) < g_222)) >= g_269[1][0][0]), l_360))) | l_360), p_65)))))
        {
            g_18 = l_360;
        }
        else
        {
            int l_369[10][6] = {{0xCBC2341EL,0x51E8F3A9L,0x19D0CF3FL,0x50834627L,(-1L),0x5153C903L},{0x5153C903L,(-1L),0x51E8F3A9L,0x51E8F3A9L,(-1L),0x5153C903L},{0x50834627L,1L,0x19D0CF3FL,0xAB2AEFC5L,0x5153C903L,0x79E0AD51L},{(-1L),0xCBC2341EL,0x5C964AADL,0x5153C903L,0x5C964AADL,0xCBC2341EL},{(-1L),0x79E0AD51L,0x5153C903L,0xAB2AEFC5L,0x19D0CF3FL,1L},{0x50834627L,0x5153C903L,(-1L),0x51E8F3A9L,0x51E8F3A9L,(-1L)},{0x5153C903L,0x5153C903L,(-1L),0x50834627L,0x19D0CF3FL,0x51E8F3A9L},{0xCBC2341EL,0x79E0AD51L,0xAB2AEFC5L,(-1L),0x5C964AADL,(-1L)},{0xAB2AEFC5L,0xCBC2341EL,0xAB2AEFC5L,1L,0x5153C903L,0x51E8F3A9L},{1L,1L,(-1L),0x424F33D7L,(-1L),(-1L)}};
            int i, j;
            p_65 = (func_68(l_369[8][5]) == ((safe_sub_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(((safe_lshift_func_int8_t_s_s(p_65, (safe_mod_func_int64_t_s_s(5L, ((p_64 = 0x31939976L) , ((g_61[4] < l_378[5]) , (safe_sub_func_uint16_t_u_u(g_292, (safe_mod_func_int64_t_s_s(p_65, l_172)))))))))) ^ g_383), p_67)), l_360)) != g_292));
            for (g_253 = 0; (g_253 == 4); ++g_253)
            {
                unsigned long long l_388[5] = {0x18FBDC8BF43261D0LL,0x18FBDC8BF43261D0LL,0x18FBDC8BF43261D0LL,0x18FBDC8BF43261D0LL,0x18FBDC8BF43261D0LL};
                int i;
                p_64 = (safe_rshift_func_uint16_t_u_s(p_65, (((l_388[1] | (((p_65 , 1L) >= func_68(p_67)) , (g_311 , l_388[2]))) & 0L) && 0x5FEAA6BBL)));
            }
        }
        for (g_113 = 0; (g_113 <= 56); g_113++)
        {
            int l_393 = 0xC916C79CL;
            if (p_65)
                break;
            g_18 = (safe_add_func_int64_t_s_s(l_393, ((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint32_t_u_u(((safe_rshift_func_uint8_t_u_s(p_65, 5)) , l_360), p_64)) ^ (safe_lshift_func_int16_t_s_s(p_66, 3))), ((((p_67 | p_65) || (l_378[5] = ((!g_61[6]) & 1UL))) != (-1L)) > 0xD0L))) <= 0xAA460217L)));
            l_393 = g_18;
            return l_360;
        }
        l_172 = func_68(l_360);
    }
    p_65 = (((l_174 = (p_67 = (l_171 , ((((safe_sub_func_uint16_t_u_u((l_172 = (safe_mul_func_uint16_t_u_u(((((safe_sub_func_int16_t_s_s(func_68(func_68(g_102)), (safe_sub_func_int32_t_s_s(g_255, (g_411 = (l_378[5] = g_410)))))) , (l_412 = g_183)) != (l_413 = ((((((p_66 || ((((65527UL || 8L) == p_66) >= 0xC3151456B708064ELL) > p_67)) > 0x21L) <= 1UL) || g_269[7][5][0]) || 1L) || 0x47E50A9CAA30F8ACLL))) == p_66), l_172))), l_174)) >= l_332) | p_64) | l_171)))) , (-3L)) > g_235);
    return p_66;
}







static int func_68(char p_69)
{
    unsigned l_79[2][10] = {{7UL,0x718CE682L,0x6F6D7797L,0x46FAC5ADL,0x46FAC5ADL,0x6F6D7797L,0x718CE682L,7UL,0x718CE682L,0x6F6D7797L},{4294967295UL,0x6C0953B2L,0x46FAC5ADL,4294967295UL,0x46FAC5ADL,7UL,7UL,0x46FAC5ADL,4294967295UL,4294967295UL}};
    int l_90[7][3] = {{0x898D4ED1L,0x898D4ED1L,0x898D4ED1L},{0x7922C1E9L,0x7922C1E9L,0x7922C1E9L},{0x898D4ED1L,0x898D4ED1L,0x898D4ED1L},{0x7922C1E9L,0x7922C1E9L,0x7922C1E9L},{0x898D4ED1L,0x898D4ED1L,0x898D4ED1L},{0x7922C1E9L,0x7922C1E9L,0x7922C1E9L},{0x898D4ED1L,0x898D4ED1L,0x898D4ED1L}};
    short l_122 = 8L;
    const int l_168 = 0L;
    int i, j;
    if (p_69)
    {
        long long l_80 = 0x825D8284A8988ED9LL;
        int l_81 = 0x1C064292L;
        g_18 = (((safe_mul_func_int8_t_s_s((safe_rshift_func_uint16_t_u_u(p_69, 15)), g_61[1])) < ((safe_lshift_func_uint8_t_u_s(((1UL < (safe_lshift_func_int8_t_s_s(l_79[1][6], (((l_81 = (l_80 = p_69)) && (l_81 || l_80)) | ((g_82 = 6L) >= p_69))))) , g_61[1]), 7)) , 1L)) & 0L);
    }
    else
    {
        unsigned l_89 = 0x53D3C485L;
        int l_92 = (-1L);
        if (g_61[5])
        {
            int l_91 = 1L;
            unsigned char l_93 = 0xA9L;
            unsigned char l_112 = 254UL;
            int l_116 = 2L;
            unsigned char l_163[9] = {255UL,255UL,0xFEL,255UL,255UL,0xFEL,255UL,255UL,0xFEL};
            int i;
            if ((safe_mod_func_int32_t_s_s((~(safe_lshift_func_uint16_t_u_s(((safe_rshift_func_int8_t_s_s(l_89, 7)) || (p_69 == (0x735FL || g_82))), (((l_89 | (l_90[5][1] = g_82)) ^ (((p_69 <= (l_93 = (l_92 = l_91))) | ((safe_rshift_func_int16_t_s_u((p_69 , (-4L)), 14)) == p_69)) | 18446744073709551609UL)) , l_89)))), l_79[1][6])))
            {
                unsigned char l_107[5] = {1UL,1UL,1UL,1UL,1UL};
                short l_134 = (-5L);
                int l_137 = 1L;
                int i;
                for (g_82 = (-26); (g_82 >= 40); g_82 = safe_add_func_int32_t_s_s(g_82, 6))
                {
                    int l_98 = 1L;
                    if (g_61[3])
                        break;
                    g_18 = (l_98 , (((safe_sub_func_uint64_t_u_u(p_69, (((g_18 ^ (g_102 = ((g_101 = g_61[5]) , p_69))) || (g_113 = (safe_rshift_func_int8_t_s_s(((((((g_102 = (g_61[2] > ((safe_sub_func_int8_t_s_s(l_107[4], (+(safe_mod_func_int16_t_s_s(((safe_rshift_func_int8_t_s_s(l_112, (p_69 | (-1L)))) && p_69), p_69))))) & 0x4242223AA5B3E5B6LL))) ^ p_69) < g_18) & g_101) >= 0x07L) , p_69), 1)))) , p_69))) | 0x84D8593D46743159LL) , 1L));
                }
                if ((((l_92 = (4294967289UL && (l_116 = (safe_add_func_uint16_t_u_u(0UL, p_69))))) ^ g_82) , ((0L > 0xF6B01AB1L) > (safe_sub_func_int16_t_s_s((safe_unary_minus_func_int8_t_s((((0UL | (+p_69)) && (l_116 = (safe_rshift_func_uint8_t_u_u((l_122 < 5UL), 7)))) != 4294967294UL))), p_69)))))
                {
                    for (g_101 = 0; (g_101 == 25); g_101++)
                    {
                        int l_125 = 0L;
                        l_125 = p_69;
                        l_92 = g_82;
                        l_90[5][1] = (safe_mod_func_int32_t_s_s(((safe_unary_minus_func_int32_t_s((((safe_mod_func_uint16_t_u_u(0x3792L, (0x0563AB882180DBEALL ^ (l_122 | l_125)))) , g_101) > 0xA3FE182CL))) != (safe_rshift_func_int16_t_s_s((l_134 = ((((1L | (l_89 & ((g_133 = (l_125 == 3UL)) , l_125))) < g_101) , l_91) & 0UL)), p_69))), 0xCB2A787EL));
                    }
                }
                else
                {
                    l_90[1][2] = l_90[2][1];
                }
                for (l_134 = 0; (l_134 <= (-6)); l_134--)
                {
                    unsigned char l_140 = 246UL;
                    int l_151 = 0L;
                    g_18 = p_69;
                    l_137 = (g_18 = (~g_102));
                    if (((safe_mul_func_int16_t_s_s(((p_69 , ((l_116 = l_140) > (g_18 = p_69))) && (-1L)), ((((safe_lshift_func_int16_t_s_s(((((((g_82 = (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(0xD339L, ((safe_mod_func_uint64_t_u_u((safe_add_func_int8_t_s_s(p_69, g_133)), (p_69 , (l_107[4] || l_107[0])))) != (-3L)))), g_101))) == g_61[1]) , p_69) | 0xE307L) & p_69) , g_113), 8)) || g_102) && p_69) != g_101))) > l_134))
                    {
                        return l_93;
                    }
                    else
                    {
                        l_151 = 0x5608B997L;
                        if (p_69)
                            continue;
                        return l_112;
                    }
                }
            }
            else
            {
                unsigned l_162[8][5] = {{0x09D16BB7L,1UL,0x09D16BB7L,0x09D16BB7L,1UL},{1UL,0x09D16BB7L,0x09D16BB7L,1UL,0x09D16BB7L},{1UL,1UL,0xFA4CC697L,1UL,1UL},{0x09D16BB7L,1UL,0x09D16BB7L,0x09D16BB7L,1UL},{1UL,0x09D16BB7L,0x09D16BB7L,1UL,0x09D16BB7L},{1UL,1UL,0xFA4CC697L,1UL,1UL},{0x09D16BB7L,1UL,0x09D16BB7L,0x09D16BB7L,1UL},{1UL,0x09D16BB7L,0x09D16BB7L,1UL,0x09D16BB7L}};
                const unsigned l_165 = 0UL;
                unsigned short l_169 = 1UL;
                int i, j;
                g_18 = ((safe_rshift_func_int8_t_s_s((g_164[0] = (safe_mul_func_int8_t_s_s(l_91, (safe_rshift_func_uint8_t_u_s(((l_116 = (((g_102 = ((((-1L) && 0x567760C71652FD55LL) >= (((p_69 && ((((~(safe_sub_func_int64_t_s_s(l_79[1][6], (safe_add_func_int32_t_s_s((p_69 , ((p_69 , l_162[7][3]) , ((1L || g_101) , g_18))), 0xF8564011L))))) <= 0x370524A1A4E4CF6FLL) ^ p_69) >= g_82)) >= l_163[6]) || 1L)) == 0L)) < g_18) , g_61[2])) < g_61[1]), 7))))), 4)) , g_164[0]);
                l_169 = (l_165 && (safe_mul_func_int8_t_s_s(l_168, p_69)));
            }
        }
        else
        {
            g_18 = l_90[5][0];
            return g_133;
        }
        l_92 = (l_92 & l_90[0][0]);
    }
    g_18 = l_79[1][6];
    return p_69;
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_18, "g_18", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_101, "g_101", print_hash_value);
    transparent_crc(g_102, "g_102", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_133, "g_133", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_164[i], "g_164[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_183, "g_183", print_hash_value);
    transparent_crc(g_222, "g_222", print_hash_value);
    transparent_crc(g_235, "g_235", print_hash_value);
    transparent_crc(g_253, "g_253", print_hash_value);
    transparent_crc(g_255, "g_255", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_269[i][j][k], "g_269[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_292, "g_292", print_hash_value);
    transparent_crc(g_311, "g_311", print_hash_value);
    transparent_crc(g_383, "g_383", print_hash_value);
    transparent_crc(g_410, "g_410", print_hash_value);
    transparent_crc(g_411, "g_411", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_458[i], "g_458[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_502, "g_502", print_hash_value);
    transparent_crc(g_526, "g_526", print_hash_value);
    transparent_crc(g_579, "g_579", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_582[i], "g_582[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 10; j++)
        {
            transparent_crc(g_587[i][j], "g_587[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_596, "g_596", print_hash_value);
    transparent_crc(g_611, "g_611", print_hash_value);
    transparent_crc(g_631, "g_631", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 4; j++)
        {
            for (k = 0; k < 4; k++)
            {
                transparent_crc(g_711[i][j][k], "g_711[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_865, "g_865", print_hash_value);
    transparent_crc(g_956, "g_956", print_hash_value);
    transparent_crc(g_974, "g_974", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_1116[i], "g_1116[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1182, "g_1182", print_hash_value);
    transparent_crc(g_1257, "g_1257", print_hash_value);
    transparent_crc(g_1298, "g_1298", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1551[i][j], "g_1551[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1671, "g_1671", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_1733[i][j], "g_1733[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1787, "g_1787", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_1852[i], "g_1852[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_2091, "g_2091", print_hash_value);
    transparent_crc(g_2092, "g_2092", print_hash_value);
    transparent_crc(g_2094, "g_2094", print_hash_value);
    transparent_crc(g_2132, "g_2132", print_hash_value);
    transparent_crc(g_2150, "g_2150", print_hash_value);
    transparent_crc(g_2151, "g_2151", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
