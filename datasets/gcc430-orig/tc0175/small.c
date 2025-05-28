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
   unsigned long long f0;
   unsigned long long f1;
};


static unsigned g_2[9] = {18446744073709551615UL, 0x8901F2C2L, 18446744073709551615UL, 0x8901F2C2L, 18446744073709551615UL, 0x8901F2C2L, 18446744073709551615UL, 0x8901F2C2L, 18446744073709551615UL};
static int g_28 = 0L;
static const struct S0 g_38 = {0x7B75AE7BE98B8724LL,18446744073709551615UL};
static int g_45 = 6L;
static int g_60 = 0x267125BDL;
static int *g_59 = &g_60;
static short g_73 = 0x9391L;
static int g_74[9] = {6L, 6L, 6L, 6L, 6L, 6L, 6L, 6L, 6L};
static int g_168[2][7][10] = {{{0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}}, {{0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}, {0x6BAF6D2AL, (-1L), (-1L), 0x6BAF6D2AL, 0xC9AB25B9L, 0xC438BB68L, 0xFB194119L, (-1L), 1L, 0x87A81754L}}};
static struct S0 g_225 = {1UL,0x91785BB1C78F11A6LL};
static struct S0 *g_224 = &g_225;
static struct S0 **g_223[9] = {&g_224, (void*)0, &g_224, (void*)0, &g_224, (void*)0, &g_224, (void*)0, &g_224};
static int g_273[2] = {0xC807B8FDL, 0xC807B8FDL};
static int g_296 = 0x005B0D64L;
static unsigned g_471 = 5UL;
static struct S0 g_510[4][3][1] = {{{{0x233BBD18D4405491LL,1UL}}, {{0x233BBD18D4405491LL,1UL}}, {{0x233BBD18D4405491LL,1UL}}}, {{{0x233BBD18D4405491LL,1UL}}, {{0x233BBD18D4405491LL,1UL}}, {{0x233BBD18D4405491LL,1UL}}}, {{{0x233BBD18D4405491LL,1UL}}, {{0x233BBD18D4405491LL,1UL}}, {{0x233BBD18D4405491LL,1UL}}}, {{{0x233BBD18D4405491LL,1UL}}, {{0x233BBD18D4405491LL,1UL}}, {{0x233BBD18D4405491LL,1UL}}}};
static int g_514[1] = {(-3L)};
static int **g_558 = &g_59;
static int ***g_557[1] = {&g_558};
static int *g_569 = &g_514[0];



static unsigned char func_1(void);
static unsigned long long func_9(unsigned short p_10, long long p_11, const unsigned long long p_12, unsigned long long p_13, unsigned long long p_14);
static const int * func_18(int * p_19);
static int * func_20(int * p_21, unsigned p_22, unsigned char p_23, const long long p_24);
static int * func_25(int p_26);
static short func_34(unsigned p_35, const struct S0 p_36, unsigned long long p_37);
static struct S0 func_39(int p_40);
static int func_46(unsigned long long p_47, int * p_48, int * const p_49, const unsigned p_50, int * p_51);
static int * func_52(unsigned char p_53, int * p_54, int * p_55, long long p_56);
static char func_63(int * const * p_64);
static unsigned char func_1(void)
{
    int l_524 = (-7L);
    int l_526 = 1L;
    int **l_534 = &g_59;
    unsigned l_572 = 0xCFF36F15L;
    struct S0 *l_579 = &g_225;
    if (g_2[3])
    {
        unsigned short l_15 = 4UL;
        int *l_525[7][10][3] = {{{(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}}, {{(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}}, {{(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}}, {{(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}}, {{(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}}, {{(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}}, {{(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}, {(void*)0, (void*)0, &g_514[0]}}};
        const int l_538 = 0L;
        int i, j, k;
lbl_544:
        l_526 &= (((g_2[3] != (safe_lshift_func_int8_t_s_u((-10L), ((0x0091L || ((safe_add_func_int32_t_s_s(g_2[3], ((safe_rshift_func_uint8_t_u_s(g_2[6], (func_9(l_15, g_2[3], (safe_rshift_func_uint8_t_u_s(g_2[8], 2)), l_15, g_2[7]) && g_510[2][2][0].f1))) <= 0x0569D14B359D00E7LL))) >= l_524)) == 0xFE2AL)))) >= 0xD8BEL) >= g_2[3]);
        for (g_73 = (-2); (g_73 != (-13)); --g_73)
        {
            struct S0 ***l_529 = &g_223[1];
            const int *l_539[9][1] = {{&g_74[5]}, {&g_74[5]}, {&g_74[5]}, {&g_74[5]}, {&g_74[5]}, {&g_74[5]}, {&g_74[5]}, {&g_74[5]}, {&g_74[5]}};
            int l_555 = 0xFEC5FD45L;
            int i, j;
            (*l_529) = &g_224;
            if ((safe_add_func_int64_t_s_s(((safe_rshift_func_int16_t_s_u((((void*)0 != (*l_529)) >= l_524), 7)) != (g_510[2][2][0].f1 | l_524)), (l_534 == &g_59))))
            {
                int l_535 = (-1L);
                (*g_59) ^= l_535;
            }
            else
            {
                long long l_541[4] = {8L, 0L, 8L, 0L};
                int i;
                if ((*g_59))
                {
                    unsigned long long l_540 = 2UL;
                    for (l_526 = 0; (l_526 <= 14); l_526 = safe_add_func_uint16_t_u_u(l_526, 4))
                    {
                        if (l_538)
                            break;
                        l_539[0][0] = &l_538;


                        return l_540;
                    }
                }
                else
                {
                    return l_541[1];
                }
                if ((*g_59))
                    break;
                for (g_471 = 0; (g_471 < 47); g_471 = safe_add_func_int16_t_s_s(g_471, 3))
                {
                    char l_551[9][5] = {{3L, 3L, 0xC0L, 3L, 3L}, {3L, 3L, 0xC0L, 3L, 3L}, {3L, 3L, 0xC0L, 3L, 3L}, {3L, 3L, 0xC0L, 3L, 3L}, {3L, 3L, 0xC0L, 3L, 3L}, {3L, 3L, 0xC0L, 3L, 3L}, {3L, 3L, 0xC0L, 3L, 3L}, {3L, 3L, 0xC0L, 3L, 3L}, {3L, 3L, 0xC0L, 3L, 3L}};
                    int i, j;
                    if (g_225.f0)
                        goto lbl_544;
                    for (g_45 = 0; (g_45 != (-10)); --g_45)
                    {
                        return g_74[5];
                    }
                    (*g_59) = ((safe_mul_func_int8_t_s_s(g_168[0][4][8], (0xE366L > (safe_mul_func_int8_t_s_s(l_551[1][2], l_551[8][0]))))) | (safe_unary_minus_func_int8_t_s(g_273[0])));
                }
                (*g_59) |= (&g_59 != (void*)0);
            }
            for (g_471 = 0; (g_471 < 10); g_471 = safe_add_func_uint16_t_u_u(g_471, 5))
            {
                g_59 = (*l_534);
                (**l_534) = 7L;
                l_555 = 1L;
            }
        }
    }
    else
    {
        const unsigned l_556[9] = {0xEAF439F0L, 0x043C9A07L, 0xEAF439F0L, 0x043C9A07L, 0xEAF439F0L, 0x043C9A07L, 0xEAF439F0L, 0x043C9A07L, 0xEAF439F0L};
        struct S0 **l_561 = &g_224;
        int *l_564 = (void*)0;
        int *l_565 = &g_514[0];
        unsigned char l_566 = 0x72L;
        int i;
        g_514[0] |= func_46(g_510[2][2][0].f0, (*l_534), (*l_534), l_556[7], &g_45);


        (*l_565) = (g_73 >= ((((void*)0 != g_557[0]) > (safe_rshift_func_int8_t_s_s((-9L), (((void*)0 == l_561) <= l_556[8])))) > (((safe_add_func_int32_t_s_s((-1L), 0x5448E243L)) <= 1L) | l_556[7])));
        (*l_534) = func_52((l_566 || (g_74[5] > (safe_rshift_func_uint8_t_u_u(1UL, 7)))), g_569, l_564, (*l_565));

        ;
    }

    ;
    ;
    (**l_534) = (safe_rshift_func_uint16_t_u_s((g_471 == l_572), 7));
    (**g_558) = (1L != (~0xDC38L));
    (*l_534) = func_52((safe_mod_func_uint8_t_u_u(g_225.f0, (safe_rshift_func_uint8_t_u_s((safe_rshift_func_uint16_t_u_u((((void*)0 != l_579) || (0x05BC0DA3BA49B938LL == g_510[2][2][0].f0)), (safe_rshift_func_uint16_t_u_s((safe_add_func_int8_t_s_s(g_73, ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u((safe_mul_func_int8_t_s_s((**l_534), (((safe_sub_func_int32_t_s_s((safe_mul_func_uint8_t_u_u(g_514[0], ((g_38.f0 & 0x802E6FE4146D6C0ALL) && (**l_534)))), 0x4A8BE571L)) >= 0x33589C1FL) >= (**l_534)))), g_38.f0)), g_514[0])) & (**l_534)))), 7)))), (**l_534))))), (*l_534), (*g_558), g_273[0]);

    ;
    return g_73;
}







static unsigned long long func_9(unsigned short p_10, long long p_11, const unsigned long long p_12, unsigned long long p_13, unsigned long long p_14)
{
    long long l_504[8][6][2] = {{{5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}}, {{5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}}, {{5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}}, {{5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}}, {{5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}}, {{5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}}, {{5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}}, {{5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}, {5L, 5L}}};
    struct S0 *l_509 = &g_510[2][2][0];
    int *l_513 = &g_514[0];
    int ** const l_512[4][10] = {{&l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513}, {&l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513}, {&l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513}, {&l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513, &l_513}};
    int ** const *l_511 = &l_512[2][5];
    const int *l_519 = &g_168[0][2][4];
    const int **l_518 = &l_519;
    int i, j, k;
    (*l_518) = func_18(func_20(func_25(p_10), l_504[5][1][0], l_504[6][2][1], (safe_lshift_func_int16_t_s_s((safe_sub_func_uint8_t_u_u(((void*)0 == l_509), l_504[0][0][0])), (l_511 != &l_512[2][5])))));

    ;
    for (g_296 = 0; (g_296 == (-6)); g_296--)
    {
        int **l_522 = &l_513;
        struct S0 **l_523 = &g_224;
        l_522 = &g_59;

        ;
        (*l_523) = l_509;

        ;
    }
    return g_225.f0;
}







static const int * func_18(int * p_19)
{
    unsigned char l_515 = 0UL;
    ++l_515;
    return &g_168[0][2][5];


}







static int * func_20(int * p_21, unsigned p_22, unsigned char p_23, const long long p_24)
{
    return p_21;


}







static int * func_25(int p_26)
{
    int *l_27 = &g_28;
    long long l_29[9][5][5] = {{{0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}}, {{0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}}, {{0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}}, {{0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}}, {{0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}}, {{0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}}, {{0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}}, {{0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}}, {{0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}, {0xEC6EA3D88101AEDFLL, 0xC0B333EE67684593LL, (-1L), (-4L), 5L}}};
    int l_417 = 0x3592F900L;
    int l_423 = 0xB8B4F2ACL;
    int l_424 = (-7L);
    int l_425 = 0xD677B8B7L;
    int l_426 = 0x0C445E68L;
    int l_427 = 1L;
    int l_428 = 0xD4691961L;
    int l_429[2][9][5] = {{{0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}}, {{0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}, {0x06483E3CL, 0x632EC828L, 0x6F2181AFL, 8L, 0x7C6B4077L}}};
    unsigned l_430 = 0x4DD88782L;
    struct S0 l_443 = {18446744073709551615UL,0x68C6BA49600CC59BLL};
    unsigned l_449 = 0xF3F38C42L;
    int *l_484 = &g_74[6];
    struct S0 *l_499 = &g_225;
    int **l_503[1][3];
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 3; j++)
            l_503[i][j] = &l_484;
    }
lbl_477:
    (*l_27) = (l_27 != &g_28);
    for (g_28 = 0; (g_28 <= 4); g_28 += 1)
    {
        unsigned long long l_418 = 1UL;
        int *l_419 = &g_168[0][2][5];
        int l_420 = (-9L);
        int l_421[2];
        int *l_422[5] = {&g_273[0], &l_420, &g_273[0], &l_420, &g_273[0]};
        struct S0 **l_436 = &g_224;
        struct S0 l_444[7][3] = {{{0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}, {1UL,1UL}, {0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}}, {{0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}, {1UL,1UL}, {0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}}, {{0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}, {1UL,1UL}, {0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}}, {{0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}, {1UL,1UL}, {0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}}, {{0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}, {1UL,1UL}, {0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}}, {{0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}, {1UL,1UL}, {0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}}, {{0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}, {1UL,1UL}, {0x64FD1BE92B278FF3LL,0x06B20EEF31F8D096LL}}};
        int l_451 = 0x00705841L;
        short l_489 = 0xC7C8L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_421[i] = 0x6E548B2BL;
        l_417 = ((safe_mod_func_uint8_t_u_u((((((0UL > 0UL) < (18446744073709551607UL || (g_2[2] > ((&g_28 == l_27) <= (safe_add_func_int8_t_s_s((func_34((1L == (p_26 >= p_26)), g_38, p_26) ^ p_26), (*l_27))))))) >= p_26) >= p_26) == 0xAD8A29F6L), p_26)) & 0xB278L);
        if (l_418)
            continue;
        l_430++;
        for (l_418 = 0; (l_418 <= 4); l_418 += 1)
        {
            unsigned long long l_433[6] = {0x9BE31256A9D8C043LL, 0xADDAA1F57B0019C1LL, 0x9BE31256A9D8C043LL, 0xADDAA1F57B0019C1LL, 0x9BE31256A9D8C043LL, 0xADDAA1F57B0019C1LL};
            struct S0 **l_434 = &g_224;
            struct S0 ***l_435[8][4] = {{&g_223[1], &g_223[1], &g_223[3], &g_223[1]}, {&g_223[1], &g_223[1], &g_223[3], &g_223[1]}, {&g_223[1], &g_223[1], &g_223[3], &g_223[1]}, {&g_223[1], &g_223[1], &g_223[3], &g_223[1]}, {&g_223[1], &g_223[1], &g_223[3], &g_223[1]}, {&g_223[1], &g_223[1], &g_223[3], &g_223[1]}, {&g_223[1], &g_223[1], &g_223[3], &g_223[1]}, {&g_223[1], &g_223[1], &g_223[3], &g_223[1]}};
            int *l_437 = &l_429[0][5][1];
            int *l_442 = &g_168[1][3][1];
            int l_456 = (-9L);
            int l_457 = 0xF5A83CB4L;
            int l_461 = 0x89AF48A0L;
            int l_463 = 0L;
            int l_466 = (-7L);
            int l_468 = (-4L);
            int l_469 = 8L;
            int l_470[10][4] = {{(-1L), 6L, (-7L), 0L}, {(-1L), 6L, (-7L), 0L}, {(-1L), 6L, (-7L), 0L}, {(-1L), 6L, (-7L), 0L}, {(-1L), 6L, (-7L), 0L}, {(-1L), 6L, (-7L), 0L}, {(-1L), 6L, (-7L), 0L}, {(-1L), 6L, (-7L), 0L}, {(-1L), 6L, (-7L), 0L}, {(-1L), 6L, (-7L), 0L}};
            int i, j;
            if (l_433[5])
                break;
            l_436 = l_434;
            for (l_417 = 1; (l_417 <= 4); l_417 += 1)
            {
                unsigned l_439 = 0x56B6647FL;
                int *l_450 = &l_421[0];
                int l_458 = 0x0BD6704BL;
                int l_459 = 0xB2885A71L;
                char l_464 = 0xDBL;
                int l_465 = 0xD77C6B65L;
                int l_467[7][10][3] = {{{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}}, {{(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}, {(-1L), (-1L), (-1L)}}};
                char l_490[2];
                long long l_491 = 0x2A7DA74F73D1D156LL;
                unsigned l_492 = 0UL;
                int i, j, k;
                for (i = 0; i < 2; i++)
                    l_490[i] = (-1L);
                for (g_225.f1 = 0; (g_225.f1 <= 4); g_225.f1 += 1)
                {
                    int **l_438 = &g_59;
                    (*l_438) = l_437;

                    ;
                    ++l_439;
                    for (l_424 = 4; (l_424 >= 0); l_424 -= 1)
                    {
                        int i, j, k;
                        (*l_438) = l_442;

                        ;
                        if (l_29[(g_28 + 4)][l_418][l_417])
                            continue;
                    }
                    for (l_423 = 4; (l_423 >= 0); l_423 -= 1)
                    {
                        l_444[2][0] = l_443;
                    }
                }
                (*l_450) |= (p_26 & (safe_mul_func_uint8_t_u_u(((safe_mul_func_uint8_t_u_u(g_2[6], (p_26 && p_26))) || 1L), (*l_27))));
                for (l_443.f1 = 0; (l_443.f1 <= 2); l_443.f1 += 1)
                {
                    int l_453[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_453[i] = 1L;
                    if (l_451)
                        break;
                    (*l_442) |= p_26;
                    for (l_443.f0 = 0; (l_443.f0 <= 3); l_443.f0 += 1)
                    {
                        int i;
                        l_422[l_418] = l_422[(l_443.f0 + 1)];
                    }
                    if ((p_26 || g_296))
                    {
                        int **l_452 = &l_437;
                        int l_454 = (-10L);
                        int l_455 = 0xC53DD501L;
                        int l_460 = 1L;
                        int l_462[7];
                        unsigned l_474 = 1UL;
                        int i;
                        for (i = 0; i < 7; i++)
                            l_462[i] = 0x8C78EB8EL;
                        (*l_452) = &g_168[1][4][0];

                        ;
                        ++g_471;
                        l_474--;
                        if (l_443.f1)
                            goto lbl_477;
                    }
                    else
                    {
                        int *l_487 = &g_273[0];
                        unsigned short l_488[7][10] = {{2UL, 0xD465L, 2UL, 7UL, 0x2D26L, 0x98CDL, 1UL, 1UL, 0x98CDL, 0x2D26L}, {2UL, 0xD465L, 2UL, 7UL, 0x2D26L, 0x98CDL, 1UL, 1UL, 0x98CDL, 0x2D26L}, {2UL, 0xD465L, 2UL, 7UL, 0x2D26L, 0x98CDL, 1UL, 1UL, 0x98CDL, 0x2D26L}, {2UL, 0xD465L, 2UL, 7UL, 0x2D26L, 0x98CDL, 1UL, 1UL, 0x98CDL, 0x2D26L}, {2UL, 0xD465L, 2UL, 7UL, 0x2D26L, 0x98CDL, 1UL, 1UL, 0x98CDL, 0x2D26L}, {2UL, 0xD465L, 2UL, 7UL, 0x2D26L, 0x98CDL, 1UL, 1UL, 0x98CDL, 0x2D26L}, {2UL, 0xD465L, 2UL, 7UL, 0x2D26L, 0x98CDL, 1UL, 1UL, 0x98CDL, 0x2D26L}};
                        int i, j;
                        (*l_437) = (safe_mul_func_int16_t_s_s(((((+(g_2[8] >= (safe_lshift_func_int8_t_s_u((safe_lshift_func_int8_t_s_s(((((l_484 == &g_28) != g_28) ^ func_46(g_38.f1, func_52(p_26, func_52((((safe_sub_func_int16_t_s_s(g_74[1], g_296)) >= g_73) && g_168[0][2][5]), &g_168[1][0][0], l_487, (*l_442)), &l_426, p_26), &g_60, g_74[0], &l_421[0])) ^ l_488[0][0]), 7)), 2)))) < g_2[3]) ^ 0x95L) == (-1L)), g_296));


                        (*g_224) = l_444[l_417][l_443.f1];
                    }
                }
                l_492--;
            }

            ;
        }
    }
    for (l_449 = 0; (l_449 != 4); ++l_449)
    {
        struct S0 *l_497 = &g_225;
        struct S0 **l_498[6] = {(void*)0, (void*)0, &g_224, (void*)0, (void*)0, &g_224};
        int l_502[5];
        int i;
        for (i = 0; i < 5; i++)
            l_502[i] = 1L;
        l_499 = l_497;
        (*l_27) ^= (safe_mod_func_int32_t_s_s((g_74[5] | (*l_484)), g_2[3]));
        (*l_484) ^= l_502[4];
    }
    g_59 = &g_74[5];

    ;
    return &g_45;


}







static short func_34(unsigned p_35, const struct S0 p_36, unsigned long long p_37)
{
    int l_363 = 1L;
    int l_364 = 0x4C8B5C7FL;
    int l_365 = (-10L);
    unsigned char l_382[1][8][4];
    char l_410 = 2L;
    int i, j, k;
    for (i = 0; i < 1; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 4; k++)
                l_382[i][j][k] = 9UL;
        }
    }
    (*g_224) = func_39(p_36.f0);
    for (p_37 = 0; (p_37 >= 42); p_37++)
    {
        int l_354[1];
        int l_358 = 0L;
        int l_373[3][3][7] = {{{0x26437566L, 0x1D48FA49L, 0xFA1F455BL, 0x20D5BA97L, 0L, 0x20D5BA97L, 0xFA1F455BL}, {0x26437566L, 0x1D48FA49L, 0xFA1F455BL, 0x20D5BA97L, 0L, 0x20D5BA97L, 0xFA1F455BL}, {0x26437566L, 0x1D48FA49L, 0xFA1F455BL, 0x20D5BA97L, 0L, 0x20D5BA97L, 0xFA1F455BL}}, {{0x26437566L, 0x1D48FA49L, 0xFA1F455BL, 0x20D5BA97L, 0L, 0x20D5BA97L, 0xFA1F455BL}, {0x26437566L, 0x1D48FA49L, 0xFA1F455BL, 0x20D5BA97L, 0L, 0x20D5BA97L, 0xFA1F455BL}, {0x26437566L, 0x1D48FA49L, 0xFA1F455BL, 0x20D5BA97L, 0L, 0x20D5BA97L, 0xFA1F455BL}}, {{0x26437566L, 0x1D48FA49L, 0xFA1F455BL, 0x20D5BA97L, 0L, 0x20D5BA97L, 0xFA1F455BL}, {0x26437566L, 0x1D48FA49L, 0xFA1F455BL, 0x20D5BA97L, 0L, 0x20D5BA97L, 0xFA1F455BL}, {0x26437566L, 0x1D48FA49L, 0xFA1F455BL, 0x20D5BA97L, 0L, 0x20D5BA97L, 0xFA1F455BL}}};
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_354[i] = 0xD017B623L;
        for (g_60 = 14; (g_60 > (-5)); g_60 = safe_sub_func_int8_t_s_s(g_60, 7))
        {
            unsigned l_355 = 18446744073709551614UL;
            int *l_359 = (void*)0;
            int *l_360 = &g_45;
            int *l_361 = &g_273[0];
            int *l_362[10] = {&g_60, &g_273[1], &g_60, &g_273[1], &g_60, &g_273[1], &g_60, &g_273[1], &g_60, &g_273[1]};
            unsigned l_366 = 1UL;
            int i;
            l_358 &= (((p_36.f0 >= l_354[0]) >= (0x62L != l_355)) <= ((safe_lshift_func_uint16_t_u_u(p_37, p_36.f0)) & l_354[0]));
            if (p_36.f0)
                continue;
            l_366--;
        }
        for (p_35 = 0; (p_35 <= 0); p_35 += 1)
        {
            int l_393 = 0x2A8C4D1AL;
            int *l_408 = &g_74[5];
            int *l_409 = &g_168[1][2][8];
            int *l_411 = &g_60;
            int *l_412 = &g_74[8];
            int *l_413[4] = {&l_364, &l_393, &l_364, &l_393};
            unsigned short l_414 = 0xE0F6L;
            int i;
            for (g_225.f0 = 3; (g_225.f0 <= 8); g_225.f0 += 1)
            {
                int **l_369 = &g_59;
                int ***l_370 = (void*)0;
                int ***l_371 = &l_369;
                unsigned short l_377 = 0UL;
                (*l_371) = l_369;
                for (l_358 = 0; l_358 < 1; l_358 += 1)
                {
                    l_354[l_358] = 1L;
                }
                for (l_364 = 1; (l_364 <= 8); l_364 += 1)
                {
                    struct S0 *l_376 = &g_225;
                    int i;
                    if (l_354[p_35])
                        break;
                    for (g_73 = 0; (g_73 <= 8); g_73 += 1)
                    {
                        int i;
                        l_358 |= (safe_unary_minus_func_int64_t_s((l_373[1][2][5] || ((safe_add_func_uint32_t_u_u((&p_36 != l_376), l_377)) >= 0x80B08F5DL))));
                    }
                    g_273[0] = (safe_lshift_func_uint16_t_u_u(((safe_add_func_uint8_t_u_u(l_382[0][0][3], (0UL == (65528UL ^ 0x7223L)))) | 0x592AL), 4));
                }
            }
            for (g_225.f0 = 0; (g_225.f0 <= 8); g_225.f0 += 1)
            {
                int * const *l_385 = &g_59;
                for (l_363 = 3; (l_363 <= 8); l_363 += 1)
                {
                    int *l_392 = &g_74[1];
                    int i;
                    (*l_392) = (safe_rshift_func_uint8_t_u_u(0x56L, (g_74[l_363] & (p_37 || ((safe_mod_func_uint64_t_u_u(((safe_rshift_func_uint8_t_u_u((&g_74[l_363] != &g_74[l_363]), 3)) | (&g_224 == (void*)0)), 1UL)) < 1UL)))));
                    g_273[1] &= func_63(&l_392);
                }
                for (l_365 = 8; (l_365 >= 3); l_365 -= 1)
                {
                    for (l_363 = 0; (l_363 <= 8); l_363 += 1)
                    {
                        return g_273[0];
                    }
                }
                return g_273[0];
            }
            for (g_60 = 8; (g_60 >= 0); g_60 -= 1)
            {
                unsigned l_404[1];
                int **l_407 = &g_59;
                int i;
                for (i = 0; i < 1; i++)
                    l_404[i] = 7UL;
                if (p_37)
                {
                    for (l_358 = 5; (l_358 >= 0); l_358 -= 1)
                    {
                        return l_393;
                    }
                }
                else
                {
                    struct S0 l_394[7] = {{18446744073709551615UL,0x9DBC0B57C8751287LL}, {18446744073709551615UL,0x9DBC0B57C8751287LL}, {18446744073709551615UL,0x9DBC0B57C8751287LL}, {18446744073709551615UL,0x9DBC0B57C8751287LL}, {18446744073709551615UL,0x9DBC0B57C8751287LL}, {18446744073709551615UL,0x9DBC0B57C8751287LL}, {18446744073709551615UL,0x9DBC0B57C8751287LL}};
                    int l_400[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_400[i] = 0x39F6E73FL;
                    for (l_358 = 3; (l_358 <= 8); l_358 += 1)
                    {
                        int *l_399 = &l_393;
                        int *l_401 = (void*)0;
                        int *l_402 = (void*)0;
                        int *l_403[9] = {&g_74[5], &g_168[1][5][7], &g_74[5], &g_168[1][5][7], &g_74[5], &g_168[1][5][7], &g_74[5], &g_168[1][5][7], &g_74[5]};
                        int i;
                        l_394[2] = (*g_224);
                        (*l_399) |= (safe_add_func_uint16_t_u_u(g_225.f1, (safe_lshift_func_int16_t_s_u((-1L), 7))));
                        --l_404[0];
                        if (l_393)
                            continue;
                    }
                }
                (*l_407) = func_52(g_2[4], &l_358, &g_74[2], l_373[1][2][5]);

                ;
            }
            --l_414;
        }
    }
    return p_36.f1;
}







static struct S0 func_39(int p_40)
{
    int *l_43 = &g_28;
    int l_347 = (-1L);
    struct S0 l_349 = {0UL,1UL};
    for (p_40 = 0; (p_40 != (-18)); --p_40)
    {
        int *l_44[7] = {(void*)0, &g_45, (void*)0, &g_45, (void*)0, &g_45, (void*)0};
        int i;
        l_44[3] = l_43;


        if (func_46(g_45, func_52(g_45, &g_28, &g_45, (&p_40 != &p_40)), &g_28, p_40, &g_28))
        {
            g_273[1] |= g_2[1];
        }
        else
        {
            unsigned l_331 = 0x2DFF973AL;
            struct S0 *l_337 = &g_225;
            int l_339 = 0x8D246230L;
            int **l_344 = (void*)0;
            for (g_296 = 18; (g_296 > 17); g_296--)
            {
                unsigned l_340 = 1UL;
                int l_345 = 0L;
                struct S0 l_348 = {0xD152EA28EFC4CA0ELL,3UL};
                l_331 &= 0xF0B6A1A7L;
                if ((0x31A8L ^ g_273[0]))
                {
                    struct S0 l_332[4][3] = {{{1UL,0xEE9F895235A56B93LL}, {1UL,0xEE9F895235A56B93LL}, {1UL,0xEE9F895235A56B93LL}}, {{1UL,0xEE9F895235A56B93LL}, {1UL,0xEE9F895235A56B93LL}, {1UL,0xEE9F895235A56B93LL}}, {{1UL,0xEE9F895235A56B93LL}, {1UL,0xEE9F895235A56B93LL}, {1UL,0xEE9F895235A56B93LL}}, {{1UL,0xEE9F895235A56B93LL}, {1UL,0xEE9F895235A56B93LL}, {1UL,0xEE9F895235A56B93LL}}};
                    int i, j;
                    (*g_224) = l_332[2][1];
                    if (((safe_sub_func_uint32_t_u_u(g_168[1][4][8], p_40)) < (safe_add_func_int64_t_s_s((&l_44[0] != &l_43), ((void*)0 != l_337)))))
                    {
                        int **l_338 = &l_44[3];
                        (*l_338) = &p_40;


                        l_340--;
                    }
                    else
                    {
                        short l_343 = 0x2B5AL;
                        l_343 = (&l_44[3] == (void*)0);
                    }


                }
                else
                {
                    struct S0 **l_346 = (void*)0;
                    l_345 = (l_344 == &l_44[0]);
                    l_347 |= ((void*)0 == l_346);
                }


                return l_348;
            }
        }


    }
    return l_349;
}







static int func_46(unsigned long long p_47, int * p_48, int * const p_49, const unsigned p_50, int * p_51)
{
    int *l_275 = &g_273[1];
    int *l_276[3][1][9] = {{{&g_45, &g_168[1][4][9], &g_45, &g_60, &g_45, &g_168[1][4][9], &g_45, &g_168[0][2][5], &g_74[5]}}, {{&g_45, &g_168[1][4][9], &g_45, &g_60, &g_45, &g_168[1][4][9], &g_45, &g_168[0][2][5], &g_74[5]}}, {{&g_45, &g_168[1][4][9], &g_45, &g_60, &g_45, &g_168[1][4][9], &g_45, &g_168[0][2][5], &g_74[5]}}};
    long long l_277 = (-5L);
    unsigned long long l_278 = 0x0E9826A327AF7920LL;
    short l_298 = 0x8535L;
    unsigned long long l_315 = 5UL;
    int i, j, k;
    if ((*p_48))
    {
        int * const *l_65 = &g_59;
        int *l_272 = &g_273[0];
        (*l_272) &= (safe_mod_func_int8_t_s_s(func_63(l_65), g_2[3]));


    }
    else
    {
        int l_274[6][2] = {{0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}, {0L, 1L}};
        int i, j;
        return l_274[1][0];
    }


    ++l_278;
    for (g_45 = 0; (g_45 == (-3)); g_45--)
    {
        int l_290 = (-10L);
        int l_294 = (-1L);
        int l_295 = 7L;
        int l_297[6][10] = {{5L, 5L, 0x810EA93CL, 0xB33DAA00L, 0x59B8E94AL, 0xB33DAA00L, 0x810EA93CL, 5L, 5L, 0x810EA93CL}, {5L, 5L, 0x810EA93CL, 0xB33DAA00L, 0x59B8E94AL, 0xB33DAA00L, 0x810EA93CL, 5L, 5L, 0x810EA93CL}, {5L, 5L, 0x810EA93CL, 0xB33DAA00L, 0x59B8E94AL, 0xB33DAA00L, 0x810EA93CL, 5L, 5L, 0x810EA93CL}, {5L, 5L, 0x810EA93CL, 0xB33DAA00L, 0x59B8E94AL, 0xB33DAA00L, 0x810EA93CL, 5L, 5L, 0x810EA93CL}, {5L, 5L, 0x810EA93CL, 0xB33DAA00L, 0x59B8E94AL, 0xB33DAA00L, 0x810EA93CL, 5L, 5L, 0x810EA93CL}, {5L, 5L, 0x810EA93CL, 0xB33DAA00L, 0x59B8E94AL, 0xB33DAA00L, 0x810EA93CL, 5L, 5L, 0x810EA93CL}};
        unsigned l_299 = 0UL;
        const int *l_311 = &g_60;
        const int **l_310 = &l_311;
        struct S0 ***l_314 = (void*)0;
        int i, j;
        for (p_47 = 0; (p_47 > 60); p_47 = safe_add_func_int16_t_s_s(p_47, 6))
        {
            char l_287 = 0L;
            int l_293[3];
            int *l_306 = &g_74[5];
            int i;
            for (i = 0; i < 3; i++)
                l_293[i] = 1L;
            if ((*p_49))
            {
                short l_288 = 0x65BBL;
                int l_289[3];
                struct S0 *l_309[6] = {&g_225, &g_225, &g_225, &g_225, &g_225, &g_225};
                int i;
                for (i = 0; i < 3; i++)
                    l_289[i] = 4L;
                if ((safe_rshift_func_int8_t_s_s((*l_275), p_47)))
                {
                    long long l_291 = 0xA786EB2C5C1250BALL;
                    int l_292[7][7] = {{1L, 0x857A57CAL, 0xC1674A97L, (-3L), 0x395B3AD1L, 6L, 0x395B3AD1L}, {1L, 0x857A57CAL, 0xC1674A97L, (-3L), 0x395B3AD1L, 6L, 0x395B3AD1L}, {1L, 0x857A57CAL, 0xC1674A97L, (-3L), 0x395B3AD1L, 6L, 0x395B3AD1L}, {1L, 0x857A57CAL, 0xC1674A97L, (-3L), 0x395B3AD1L, 6L, 0x395B3AD1L}, {1L, 0x857A57CAL, 0xC1674A97L, (-3L), 0x395B3AD1L, 6L, 0x395B3AD1L}, {1L, 0x857A57CAL, 0xC1674A97L, (-3L), 0x395B3AD1L, 6L, 0x395B3AD1L}, {1L, 0x857A57CAL, 0xC1674A97L, (-3L), 0x395B3AD1L, 6L, 0x395B3AD1L}};
                    int i, j;
                    --l_299;
                    g_168[1][5][9] = (*p_49);
                }
                else
                {
                    for (l_295 = 0; (l_295 >= (-29)); l_295--)
                    {
                        int *l_304 = &l_293[2];
                        int **l_305 = (void*)0;
                        l_306 = l_304;

                        ;
                        (*l_304) = (safe_lshift_func_int16_t_s_u((g_296 && (p_47 ^ (p_50 != (18446744073709551611UL >= g_73)))), 3));
                    }

                    ;
                    if ((*p_49))
                        break;
                }

                ;
                (*l_306) = (l_309[0] == (void*)0);
            }
            else
            {
                (*l_306) = ((((0x66507DCFA46F0B38LL ^ l_299) >= (l_310 != (void*)0)) || (safe_mod_func_uint8_t_u_u(((7UL && p_47) <= (g_168[1][0][5] < (l_314 == &g_223[1]))), 0xC3L))) | p_50);
                if (l_315)
                    continue;
            }

            ;
        }
        for (p_47 = 0; (p_47 > 44); p_47 = safe_add_func_int8_t_s_s(p_47, 1))
        {
            unsigned l_318 = 0xA252A003L;
            --l_318;
        }
        if ((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(((+1L) != (~g_273[0])), g_60)), (safe_sub_func_int8_t_s_s(((*l_311) < p_50), (safe_rshift_func_int16_t_s_u((p_50 <= g_73), 3)))))))
        {
            (*l_310) = l_276[0][0][7];

            ;
            return (*p_48);
        }
        else
        {
            return (*p_48);
        }
    }
    return (*l_275);
}







static int * func_52(unsigned char p_53, int * p_54, int * p_55, long long p_56)
{
    int *l_57 = &g_45;
    int **l_58[5] = {&l_57, (void*)0, &l_57, (void*)0, &l_57};
    int i;
    g_59 = l_57;

    ;
    g_59 = (void*)0;

    ;
    return &g_45;


}







static char func_63(int * const * p_64)
{
    int l_66 = (-10L);
    struct S0 l_69 = {0x8F5644FE3D079042LL,0x2E26E4AE4714FE20LL};
    int l_72 = 0xE931266FL;
    int l_75 = 0L;
    int l_76[1];
    unsigned char l_77 = 0x2DL;
    char l_133[4][2][4];
    struct S0 *l_204[9][9] = {{&l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69}, {&l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69, &l_69}};
    struct S0 **l_203[6][6] = {{(void*)0, &l_204[4][8], &l_204[3][2], &l_204[5][0], &l_204[3][2], &l_204[4][8]}, {(void*)0, &l_204[4][8], &l_204[3][2], &l_204[5][0], &l_204[3][2], &l_204[4][8]}, {(void*)0, &l_204[4][8], &l_204[3][2], &l_204[5][0], &l_204[3][2], &l_204[4][8]}, {(void*)0, &l_204[4][8], &l_204[3][2], &l_204[5][0], &l_204[3][2], &l_204[4][8]}, {(void*)0, &l_204[4][8], &l_204[3][2], &l_204[5][0], &l_204[3][2], &l_204[4][8]}, {(void*)0, &l_204[4][8], &l_204[3][2], &l_204[5][0], &l_204[3][2], &l_204[4][8]}};
    unsigned long long l_227 = 4UL;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_76[i] = 0L;
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 4; k++)
                l_133[i][j][k] = (-5L);
        }
    }
lbl_157:
    if (l_66)
    {
        int *l_71[6] = {&g_45, &g_45, &g_45, &g_45, &g_45, &g_45};
        int i;
        for (l_66 = (-28); (l_66 > 13); l_66 = safe_add_func_uint8_t_u_u(l_66, 7))
        {
            struct S0 *l_70 = &l_69;
            (*l_70) = l_69;
        }
        --l_77;
    }
    else
    {
        struct S0 *l_89[4][1];
        const int l_106 = 0x6A529824L;
        int l_108[1];
        int i, j;
        for (i = 0; i < 4; i++)
        {
            for (j = 0; j < 1; j++)
                l_89[i][j] = &l_69;
        }
        for (i = 0; i < 1; i++)
            l_108[i] = 0x8AE3155DL;
        for (g_60 = 8; (g_60 < 14); g_60++)
        {
            int l_86 = 1L;
            int **l_98 = &g_59;
            for (g_73 = 2; (g_73 <= 8); g_73 += 1)
            {
                int *l_107 = &g_74[2];
                int i;
                if ((safe_add_func_uint32_t_u_u((safe_add_func_int16_t_s_s((g_74[g_73] & g_2[3]), l_86)), ((safe_sub_func_int64_t_s_s(g_60, (l_72 > g_73))) | (l_89[0][0] == &g_38)))))
                {
                    int **l_93 = &g_59;
                    for (l_66 = 8; (l_66 >= 1); l_66 -= 1)
                    {
                        int **l_90 = (void*)0;
                        int **l_91 = (void*)0;
                        int **l_92 = &g_59;
                        if (g_45)
                            break;
                        (*l_92) = (*p_64);

                        ;
                    }
                    (*l_93) = &l_86;

                    ;
                }
                else
                {
                    int i;
                    g_74[g_73] = g_74[g_73];
                }


                for (l_72 = 2; (l_72 > 6); l_72 = safe_add_func_uint32_t_u_u(l_72, 8))
                {
                    int l_102 = (-1L);
                    for (l_69.f0 = 0; (l_69.f0 != 27); l_69.f0 = safe_add_func_uint64_t_u_u(l_69.f0, 4))
                    {
                        return l_86;


                    }
                    for (l_86 = 0; (l_86 <= 0); l_86 += 1)
                    {
                        short l_99[8] = {0xFC2EL, 0L, 0xFC2EL, 0L, 0xFC2EL, 0L, 0xFC2EL, 0L};
                        int i;
                        l_99[2] ^= ((void*)0 != l_98);
                        (*l_98) = &l_76[l_86];

                        ;
                        (*l_98) = &l_76[l_86];
                    }
                    for (l_75 = 0; (l_75 > 17); ++l_75)
                    {
                        struct S0 *l_105 = &l_69;
                        l_102 = 0x56EC938AL;
                        g_45 |= (safe_rshift_func_int16_t_s_u((g_74[5] ^ (l_105 != &g_38)), 12));
                    }
                    if (l_69.f0)
                        break;
                }


                (*l_107) ^= l_106;
                return l_69.f0;


            }
            l_108[0] &= 0L;
        }
    }
    for (g_73 = 0; (g_73 <= 0); g_73 += 1)
    {
        unsigned char l_122 = 0xF0L;
        int l_135 = 0x71252307L;
        int l_136 = 0xC3978F7DL;
        int l_139 = 0x543CBF0CL;
        int l_166 = 0x199BFBAFL;
        int l_167 = (-1L);
        int l_169 = 0xE571FBC6L;
        int l_170 = 0x31424406L;
        int l_171 = 0x1C847789L;
        int l_172 = 0x621B0013L;
        long long l_206 = 0x5AE06843F4B22B9ELL;
        struct S0 **l_234 = &l_204[3][2];
        int l_246 = 3L;
        unsigned short l_249 = 0x828BL;
        int l_252[2];
        int l_260 = 1L;
        int i;
        for (i = 0; i < 2; i++)
            l_252[i] = 7L;
        for (l_66 = 1; (l_66 <= 8); l_66 += 1)
        {
            struct S0 l_109 = {1UL,0xD1ADB1F9A50F5FFFLL};
            struct S0 *l_110 = &l_69;
            int l_134 = 1L;
            int l_137 = (-9L);
            int l_138 = 0x711D43F7L;
            unsigned long long l_140 = 18446744073709551609UL;
            int l_149 = 5L;
            int l_197[10][5] = {{0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}, {0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}, {0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}, {0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}, {0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}, {0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}, {0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}, {0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}, {0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}, {0x4E4F83ABL, 0x883BD3BFL, 0x883BD3BFL, 0x4E4F83ABL, (-1L)}};
            unsigned short l_200 = 0x8759L;
            unsigned l_268[2];
            unsigned long long l_269 = 0UL;
            int i, j;
            for (i = 0; i < 2; i++)
                l_268[i] = 0x3CB7B073L;
            (*l_110) = l_109;
            (*l_110) = g_38;
            if (((safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((safe_unary_minus_func_uint16_t_u((p_64 != p_64))), (safe_add_func_int64_t_s_s(((safe_mul_func_int16_t_s_s((l_76[g_73] && l_109.f0), (0x98L ^ ((safe_add_func_uint32_t_u_u(l_122, 0xEF2C45E8L)) != (0xE05B3D2223408E39LL | ((safe_add_func_uint64_t_u_u((&l_76[g_73] == &g_28), g_28)) > l_76[g_73])))))) | l_122), l_76[g_73])))), l_122)) | l_122))
            {
                int *l_125 = &l_76[g_73];
                int *l_126 = &l_72;
                int *l_127 = &l_76[g_73];
                int *l_128 = &g_60;
                int *l_129 = &g_74[5];
                int *l_130 = &g_45;
                int *l_131 = &l_76[g_73];
                int *l_132[1];
                int l_163[7];
                unsigned l_173 = 0UL;
                int i;
                for (i = 0; i < 1; i++)
                    l_132[i] = &l_76[g_73];
                for (i = 0; i < 7; i++)
                    l_163[i] = 1L;
                l_140--;
                for (l_138 = 2; (l_138 <= 8); l_138 += 1)
                {
                    unsigned l_150[7] = {0x6F5A32C3L, 0x6F5A32C3L, 0xAED6AE4AL, 0x6F5A32C3L, 0x6F5A32C3L, 0xAED6AE4AL, 0x6F5A32C3L};
                    int i;
                    for (l_140 = 0; (l_140 <= 8); l_140 += 1)
                    {
                        unsigned l_143[5][6][8] = {{{0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}}, {{0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}}, {{0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}}, {{0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}}, {{0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}, {0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L, 0x689FF313L, 0xF2F43CA9L}}};
                        int **l_146 = &l_125;
                        int l_147 = 0xC66ACBFBL;
                        int l_148[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_148[i] = 0L;
                        l_143[3][1][2]--;
                        (*l_110) = g_38;
                        (*l_146) = (void*)0;

                        ;
                        ++l_150[6];
                    }
                }

                ;
                for (l_139 = 0; (l_139 >= 0); l_139 -= 1)
                {
                    int i;
                    (*l_129) |= l_76[g_73];
                    (*l_128) |= 0x8E932EB6L;
                }
                if ((safe_sub_func_uint16_t_u_u(g_73, (safe_rshift_func_uint8_t_u_s((*l_129), 3)))))
                {
                    int l_160 = 0x22193E6AL;
                    int l_161 = 8L;
                    int l_162 = 0x31C22BA5L;
                    int l_164[1][10] = {{(-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L), (-5L), (-1L)}};
                    int i, j;
                    if (l_140)
                        goto lbl_157;
                    if (g_2[3])
                        continue;
                    if (l_109.f0)
                    {
                        unsigned char l_158 = 255UL;
                        int l_159[4][5] = {{0xE02A2B83L, 0xE02A2B83L, 0x96262B8EL, 0xE02A2B83L, 0xE02A2B83L}, {0xE02A2B83L, 0xE02A2B83L, 0x96262B8EL, 0xE02A2B83L, 0xE02A2B83L}, {0xE02A2B83L, 0xE02A2B83L, 0x96262B8EL, 0xE02A2B83L, 0xE02A2B83L}, {0xE02A2B83L, 0xE02A2B83L, 0x96262B8EL, 0xE02A2B83L, 0xE02A2B83L}};
                        char l_165 = (-1L);
                        int i, j;
                        (*l_130) |= (g_38.f1 != (g_38.f1 || l_158));
                        ++l_173;
                        return g_28;
                    }
                    else
                    {
                        unsigned char l_176[8];
                        int i;
                        for (i = 0; i < 8; i++)
                            l_176[i] = 1UL;
                        l_176[0] |= (*l_128);
                    }
                    if (l_77)
                        break;
                }
                else
                {
                    for (l_75 = 0; (l_75 <= (-18)); l_75 = safe_sub_func_int16_t_s_s(l_75, 6))
                    {
                        int **l_179 = &l_132[0];
                        (*l_129) |= (-4L);
                        (*l_179) = &l_75;
                        if (l_140)
                            break;
                    }


                }


            }
            else
            {
                short l_182 = 0xF29AL;
                int l_199 = 0xB8BEBA22L;
                int *l_209 = (void*)0;
                int l_247 = (-1L);
                int l_248 = 0L;
                int l_259 = (-1L);
                for (l_136 = 0; (l_136 > 22); ++l_136)
                {
                    int l_196[2];
                    int l_198[3];
                    struct S0 ***l_205 = &l_203[5][0];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_196[i] = (-4L);
                    for (i = 0; i < 3; i++)
                        l_198[i] = 0xDCF5AF98L;
                    if (l_167)
                    {
                        g_59 = &g_74[7];

                        ;
                        if (g_38.f1)
                            goto lbl_157;
                        g_59 = (*p_64);

                        ;
                    }
                    else
                    {
                        char l_183 = (-9L);
                        int *l_184 = &g_74[5];
                        int *l_185 = &g_74[5];
                        int *l_186 = (void*)0;
                        int *l_187 = &l_167;
                        int *l_188 = (void*)0;
                        int *l_189 = &g_45;
                        int *l_190 = &l_171;
                        int *l_191 = &l_76[0];
                        int *l_192 = &g_168[0][2][5];
                        int *l_193 = &l_170;
                        int *l_194 = &l_166;
                        int *l_195[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_195[i] = &l_167;
                        --l_200;
                        if (l_170)
                            continue;
                    }
                    (*l_205) = l_203[1][4];
                    if (l_109.f0)
                    {
                        return g_45;
                    }
                    else
                    {
                        unsigned long long l_207[3][7][10] = {{{1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}}, {{1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}}, {{1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}, {1UL, 0xACDA75E78B5091CFLL, 0x407F4EC8A6FC8C2ELL, 18446744073709551611UL, 0UL, 8UL, 0x362EE10B6CEE0769LL, 18446744073709551609UL, 0xD6C61763957BBCE2LL, 5UL}}};
                        int *l_208 = &l_171;
                        int i, j, k;
                        g_60 = l_206;
                        (*l_208) = l_207[0][1][2];
                        if (l_196[1])
                            break;
                    }
                    if (g_168[0][2][5])
                    {
                        l_209 = (*p_64);
                    }
                    else
                    {
                        int *l_210 = (void*)0;
                        int *l_211 = (void*)0;
                        int *l_212 = &l_75;
                        (*l_212) ^= l_196[1];
                        if (l_198[1])
                            break;
                    }
                }

                ;
                for (l_171 = 4; (l_171 >= 1); l_171 -= 1)
                {
                    int *l_226 = &l_72;
                    int i, j;
                    if ((safe_lshift_func_uint8_t_u_u(l_197[l_66][l_171], (safe_lshift_func_int16_t_s_u((((0x9DL || (l_169 || 255UL)) > l_197[l_66][l_171]) ^ ((((void*)0 != &g_45) < (~0x5CCBL)) >= (((void*)0 != l_203[(g_73 + 5)][l_171]) && g_2[2]))), 8)))))
                    {
                        char l_217 = (-10L);
                        if (l_217)
                            break;
                    }
                    else
                    {
                        unsigned short l_218 = 1UL;
                        ++l_218;
                    }
                    if (l_76[0])
                    {
                        if (l_139)
                            break;
                    }
                    else
                    {
                        l_136 ^= (0xAC758EC4L && (l_200 || (&g_38 != &l_109)));
                        g_74[5] = l_66;
                        if (g_38.f0)
                            break;
                    }
                    (*l_226) |= ((safe_lshift_func_uint16_t_u_u((l_197[l_66][l_171] >= (g_168[0][2][5] && (g_223[1] != &g_224))), g_2[3])) != l_170);
                }
                l_227--;
                if ((safe_rshift_func_int16_t_s_u(0L, 3)))
                {
                    int *l_232 = &l_139;
                    (*l_232) = g_38.f0;
                    for (l_77 = 0; (l_77 <= 1); l_77 += 1)
                    {
                        unsigned long long l_233[2];
                        int **l_235 = &l_209;
                        int i;
                        for (i = 0; i < 2; i++)
                            l_233[i] = 0x1C527838CB54408CLL;
                        (*l_110) = (*g_224);
                        l_209 = func_52((l_233[0] > l_109.f1), &g_74[3], &l_75, ((p_64 == p_64) == (l_234 != &l_110)));

                        ;
                        ;
                        (*l_235) = &l_166;

                        ;
                    }

                    ;
                }
                else
                {
                    unsigned long long l_240 = 1UL;
                    int *l_241 = &g_60;
                    (*l_241) = (safe_lshift_func_int8_t_s_u((g_74[5] | (safe_sub_func_int8_t_s_s(g_74[5], (l_240 < l_167)))), (0x4BEFL || g_225.f0)));
                    if (g_28)
                    {
                        (*l_241) |= (0x8A12L == ((0x19BAF287L >= l_122) || (safe_sub_func_int32_t_s_s(l_72, ((l_109.f1 != g_168[0][2][5]) || l_197[6][0])))));
                        return g_60;
                    }
                    else
                    {
                        int *l_244 = &l_75;
                        int *l_245[8] = {&g_74[5], (void*)0, &g_74[5], (void*)0, &g_74[5], (void*)0, &g_74[5], (void*)0};
                        int **l_261 = &l_245[0];
                        int i;
                        l_249--;
                        (*l_261) = func_52((0xD94905E8L | l_252[0]), func_52((*l_241), &l_199, func_52(l_72, &g_168[0][2][5], &l_72, (safe_lshift_func_int16_t_s_s((safe_mul_func_uint8_t_u_u((safe_mul_func_uint16_t_u_u(l_135, l_149)), g_225.f0)), 6))), l_259), &g_74[5], l_260);

                        ;

                        l_268[1] &= (safe_sub_func_uint32_t_u_u((0x39B3L != g_168[0][4][4]), (safe_rshift_func_uint16_t_u_s(l_69.f0, (safe_rshift_func_uint8_t_u_u((&g_223[1] == (void*)0), 3))))));
                        l_269--;
                    }

                    ;
                }

                ;
            }
        }
    }
    return g_168[1][0][6];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_28, "g_28", print_hash_value);
    transparent_crc(g_38.f0, "g_38.f0", print_hash_value);
    transparent_crc(g_38.f1, "g_38.f1", print_hash_value);
    transparent_crc(g_45, "g_45", print_hash_value);
    transparent_crc(g_60, "g_60", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_74[i], "g_74[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 10; k++)
            {
                transparent_crc(g_168[i][j][k], "g_168[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_225.f0, "g_225.f0", print_hash_value);
    transparent_crc(g_225.f1, "g_225.f1", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_273[i], "g_273[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_296, "g_296", print_hash_value);
    transparent_crc(g_471, "g_471", print_hash_value);
    for (i = 0; i < 4; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_510[i][j][k].f0, "g_510[i][j][k].f0", print_hash_value);
                transparent_crc(g_510[i][j][k].f1, "g_510[i][j][k].f1", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_514[i], "g_514[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
