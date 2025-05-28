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



static unsigned g_2[5][9][5] = {{{18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}}, {{18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}}, {{18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}}, {{18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}}, {{18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}, {18446744073709551615UL, 18446744073709551606UL, 0x7383CC47L, 0UL, 0xB2BC8F96L}}};
static int g_3[3] = {(-1L), (-1L), (-1L)};
static int g_16 = 1L;
static unsigned g_73 = 4294967292UL;
static short g_84[9][2][1] = {{{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}, {{(-1L)}, {(-1L)}}};
static char g_86 = (-1L);
static char **g_91 = (void*)0;
static short *g_105 = &g_84[7][0][0];
static short ** const g_104[10] = {&g_105, &g_105, &g_105, &g_105, &g_105, &g_105, &g_105, &g_105, &g_105, &g_105};
static char g_109 = 0x7DL;
static int g_110 = 0xA55526D7L;
static unsigned char g_128 = 251UL;
static unsigned g_130 = 3UL;
static int * const g_144 = &g_110;
static int * const *g_143 = &g_144;
static unsigned short g_147 = 0x6DC2L;
static unsigned char g_176 = 0xA2L;
static short g_228 = 2L;
static int g_247 = 1L;
static int *g_262 = &g_110;
static unsigned g_263 = 0x8B8C2CD7L;
static unsigned g_281 = 0xC95441F1L;
static char g_298[2][9][2] = {{{0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}}, {{0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}, {0xF4L, 6L}}};
static short g_314 = (-1L);
static unsigned g_321 = 0x2C9D8CCFL;
static int *g_346[5] = {&g_110, &g_110, &g_110, &g_110, &g_110};
static int * const g_401[1][4][3] = {{{&g_3[0], &g_3[0], &g_3[1]}, {&g_3[0], &g_3[0], &g_3[1]}, {&g_3[0], &g_3[0], &g_3[1]}, {&g_3[0], &g_3[0], &g_3[1]}}};
static unsigned g_403 = 4294967295UL;
static const int *g_432 = &g_247;
static const int **g_431 = &g_432;
static int g_522 = 0xE24FB3AEL;
static int *g_521 = &g_522;
static int g_537[3] = {1L, 1L, 1L};
static unsigned char g_539[3][1] = {{1UL}, {1UL}, {1UL}};
static unsigned short g_580 = 0x6EC0L;
static unsigned char g_584 = 0xC9L;
static int *g_604 = &g_537[2];
static const unsigned *g_638 = &g_321;
static const unsigned **g_637 = &g_638;
static char ***g_665 = &g_91;
static char ***g_666 = &g_91;
static int g_745 = 8L;
static int g_823 = 0xF7525A05L;
static char ****g_897 = &g_665;



static unsigned short func_1(void);
static int * const func_4(int p_5, unsigned short p_6, unsigned p_7);
static char func_8(int * p_9, int p_10, int * const p_11);
static int * func_12(unsigned short p_13, int * p_14);
static char func_25(int * p_26, int * p_27, const short p_28);
static unsigned short func_29(int * p_30, int * p_31, int * p_32);
static int * func_33(int * p_34, int * p_35, unsigned char p_36, int * p_37);
static int * func_38(int p_39, int * p_40, int * const p_41);
static unsigned char func_46(char p_47, int p_48, int p_49, int p_50);
static unsigned char func_51(int * p_52, short p_53, short p_54, unsigned p_55);
static unsigned short func_1(void)
{
    int *l_56 = (void*)0;
    int l_586 = 5L;
    int l_765 = 9L;
    unsigned *l_769 = &g_263;
    unsigned ** const l_768 = &l_769;
    int l_866 = 0x4394456DL;
    unsigned l_879 = 0xADAD79EEL;
    char ** const **l_898 = (void*)0;
    unsigned short l_901 = 0xD24AL;
    unsigned l_937 = 0xCC54CCA4L;
    for (g_3[0] = 4; (g_3[0] >= 0); g_3[0] -= 1)
    {
        int *l_15[2];
        unsigned l_21 = 0x75F98A97L;
        short l_148 = (-1L);
        int **l_520 = &g_262;
        unsigned short *l_585[4];
        int **l_754 = &g_262;
        int **l_755 = &g_521;
        unsigned *l_759 = &g_263;
        unsigned **l_758 = &l_759;
        unsigned ***l_760 = &l_758;
        char *l_766 = (void*)0;
        char *l_767 = &g_298[0][0][1];
        int i;
        for (i = 0; i < 2; i++)
            l_15[i] = &g_16;
        for (i = 0; i < 4; i++)
            l_585[i] = &g_147;
        (*l_754) = func_4(g_3[0], (func_8(func_12((l_586 = ((g_16 = 0xD3C5EBB4L) , ((safe_lshift_func_uint8_t_u_s(((safe_rshift_func_uint8_t_u_u(l_21, ((safe_mul_func_int8_t_s_s((safe_unary_minus_func_int8_t_s(func_25(&g_16, ((func_29(((*l_520) = func_33(func_38((((g_16 | (safe_rshift_func_uint8_t_u_s((safe_mod_func_int16_t_s_s((func_46((func_51(l_56, l_21, (((safe_mul_func_uint16_t_u_u((g_2[1][5][0] || ((((safe_rshift_func_uint16_t_u_u((l_56 == (void*)0), 12)) , 0xFEL) ^ g_16) >= l_21)), 0x0A0DL)) >= g_3[0]) , g_3[0]), g_3[0]) , l_21), g_2[1][6][2], l_148, g_3[2]) , l_21), g_2[2][4][0])), l_148))) & l_21) , (**g_143)), l_56, l_56), &g_3[2], g_3[0], l_56)), g_521, &g_3[0]) >= g_298[0][5][0]) , &g_16), l_148))), g_2[3][3][0])) & g_3[1]))) || (*g_105)), 0)) != g_584))), l_56), l_148, (*g_143)) , (**l_520)), g_3[0]);
        if ((((*l_767) = func_51(&l_586, ((((*l_755) = (void*)0) != (void*)0) || ((safe_lshift_func_uint16_t_u_s((((*l_760) = l_758) != ((safe_sub_func_uint8_t_u_u(g_321, ((*l_767) = (~(l_586 , (safe_mod_func_uint16_t_u_u((g_298[1][3][1] == ((l_765 < (*g_105)) == l_765)), (**l_520)))))))) , l_768)), 1)) & l_765)), l_765, (**l_754))) > l_765))
        {
            int **l_770 = &g_346[3];
            (*l_770) = (*g_143);
        }
        else
        {
            int **l_771 = (void*)0;
            int **l_772 = (void*)0;
            int **l_773 = &g_604;
            (*l_773) = (*g_143);
        }
        (*g_144) = (**g_143);
        return g_314;
    }
    for (g_247 = 2; (g_247 >= 0); g_247 -= 1)
    {
        char * const l_809[3][2][7] = {{{&g_298[1][3][0], &g_86, &g_298[1][3][0], &g_86, &g_298[1][3][0], &g_298[1][3][0], &g_298[1][3][0]}, {&g_298[1][3][0], &g_86, &g_298[1][3][0], &g_86, &g_298[1][3][0], &g_298[1][3][0], &g_298[1][3][0]}}, {{&g_298[1][3][0], &g_86, &g_298[1][3][0], &g_86, &g_298[1][3][0], &g_298[1][3][0], &g_298[1][3][0]}, {&g_298[1][3][0], &g_86, &g_298[1][3][0], &g_86, &g_298[1][3][0], &g_298[1][3][0], &g_298[1][3][0]}}, {{&g_298[1][3][0], &g_86, &g_298[1][3][0], &g_86, &g_298[1][3][0], &g_298[1][3][0], &g_298[1][3][0]}, {&g_298[1][3][0], &g_86, &g_298[1][3][0], &g_86, &g_298[1][3][0], &g_298[1][3][0], &g_298[1][3][0]}}};
        char * const *l_808 = &l_809[2][0][4];
        char * const ** const l_807[3][1][4] = {{{&l_808, &l_808, &l_808, &l_808}}, {{&l_808, &l_808, &l_808, &l_808}}, {{&l_808, &l_808, &l_808, &l_808}}};
        char * const ** const *l_806[6] = {(void*)0, (void*)0, &l_807[1][0][1], (void*)0, (void*)0, &l_807[1][0][1]};
        int *l_850 = &g_3[g_247];
        unsigned l_942 = 4294967287UL;
        unsigned char *l_943[6] = {&g_176, &g_176, &g_584, &g_176, &g_176, &g_584};
        int **l_944[6][5] = {{&l_850, &g_604, &g_346[4], &g_346[0], &g_346[0]}, {&l_850, &g_604, &g_346[4], &g_346[0], &g_346[0]}, {&l_850, &g_604, &g_346[4], &g_346[0], &g_346[0]}, {&l_850, &g_604, &g_346[4], &g_346[0], &g_346[0]}, {&l_850, &g_604, &g_346[4], &g_346[0], &g_346[0]}, {&l_850, &g_604, &g_346[4], &g_346[0], &g_346[0]}};
        int **l_945 = &l_56;
        int i, j, k;
        g_3[g_247] &= g_537[g_247];
        for (g_403 = 0; (g_403 <= 1); g_403 += 1)
        {
            unsigned char l_775 = 0UL;
            int l_799 = 0xD62EECE4L;
            for (g_147 = 0; (g_147 <= 1); g_147 += 1)
            {
                int l_779 = 0x98846317L;
                int *l_810 = &g_537[g_247];
                (*g_144) &= 0x573DA477L;
                for (g_745 = 1; (g_745 >= 0); g_745 -= 1)
                {
                    unsigned char l_774 = 2UL;
                    for (g_176 = 0; (g_176 <= 1); g_176 += 1)
                    {
                        unsigned char *l_777 = &g_128;
                        int **l_778 = &l_56;
                        int **l_782 = &l_56;
                        int i, j, k;
                        (**g_143) |= g_298[g_176][(g_247 + 3)][g_176];
                        (**g_143) = l_774;
                        (*l_778) = ((l_775 == ((safe_unary_minus_func_int32_t_s(0xB1D6FFA2L)) , (g_537[g_247] , ((*l_777) = 0x8AL)))) , (*g_143));
                        (*l_782) = func_4((**l_778), (((l_779 && (g_537[g_247] <= 4294967295UL)) && l_774) , ((g_584 != ((safe_rshift_func_uint8_t_u_u((**l_778), 3)) , (*g_105))) > g_3[0])), (**l_778));
                    }
                    for (l_765 = 1; (l_765 >= 0); l_765 -= 1)
                    {
                        short l_783 = 1L;
                        unsigned char *l_798 = &g_584;
                        unsigned char *l_800 = (void*)0;
                        unsigned char *l_801[5][5][7] = {{{&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}}, {{&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}}, {{&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}}, {{&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}}, {{&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}, {&g_539[2][0], &l_775, &l_774, &l_774, &g_539[1][0], &g_539[1][0], &l_774}}};
                        char ****l_803[3];
                        char *****l_802 = &l_803[1];
                        int i, j, k;
                        for (i = 0; i < 3; i++)
                            l_803[i] = &g_666;
                        (*g_604) &= ((*g_144) ^= 0x8521A851L);
                        (*g_604) &= (l_783 <= (0xEDE0L && ((safe_lshift_func_uint16_t_u_u((safe_sub_func_int8_t_s_s((g_298[l_765][(g_247 + 1)][l_765] = l_775), (safe_sub_func_int8_t_s_s((l_775 || g_522), (((l_765 , 0x03BB6BFDL) ^ l_774) , (safe_mul_func_int16_t_s_s(((*g_431) != l_769), 0xA02BL))))))), g_314)) && 0x060FL)));
                        l_810 = func_4(((*g_521) = ((0x15527194L == l_783) , (safe_sub_func_uint32_t_u_u(l_783, ((safe_mul_func_uint8_t_u_u(((*l_798) = l_779), ((**g_637) , (g_176 = (l_799 &= l_783))))) & (((*l_802) = &g_666) != ((65531UL ^ ((safe_mod_func_uint16_t_u_u(((g_522 | l_779) || 0L), l_774)) , l_779)) , l_806[5]))))))), g_3[1], l_779);
                    }
                }
            }
        }
        for (g_110 = (-7); (g_110 >= 5); g_110 = safe_add_func_int16_t_s_s(g_110, 4))
        {
            unsigned char l_813 = 0UL;
            int *l_820[10][4][5] = {{{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}, {{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}, {{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}, {{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}, {{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}, {{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}, {{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}, {{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}, {{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}, {{&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}, {&g_537[g_247], (void*)0, (void*)0, &g_3[g_247], &g_537[g_247]}}};
            const char l_849 = (-1L);
            short l_865 = 0x0E7FL;
            int i, j, k;
            if ((l_813 , (((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_s((0x3F62L < g_537[g_247]), 3)), g_321)) && g_247) <= (l_813 < (safe_rshift_func_int8_t_s_u((((((l_586 = ((*g_521) , g_537[g_247])) , (g_110 | g_537[g_247])) < 0L) | 0UL) <= g_537[2]), g_580))))))
            {
                int l_824[10][1] = {{0x57FD7F22L}, {0x57FD7F22L}, {0x57FD7F22L}, {0x57FD7F22L}, {0x57FD7F22L}, {0x57FD7F22L}, {0x57FD7F22L}, {0x57FD7F22L}, {0x57FD7F22L}, {0x57FD7F22L}};
                int **l_825[5][3] = {{&l_56, &l_56, (void*)0}, {&l_56, &l_56, (void*)0}, {&l_56, &l_56, (void*)0}, {&l_56, &l_56, (void*)0}, {&l_56, &l_56, (void*)0}};
                unsigned l_828 = 0x1844C90AL;
                unsigned l_848 = 0x127C4407L;
                int i, j;
                l_56 = func_4(((*g_521) = (safe_lshift_func_int8_t_s_u(g_263, 3))), (g_403 != g_823), l_824[7][0]);
                if (g_537[g_247])
                    break;
                for (g_176 = 0; (g_176 <= 5); g_176 += 1)
                {
                    unsigned char *l_846 = (void*)0;
                    unsigned char *l_847[7];
                    int i;
                    for (i = 0; i < 7; i++)
                        l_847[i] = &l_813;
                    if ((+g_537[g_247]))
                    {
                        unsigned char *l_829 = &g_128;
                        unsigned short *l_831[2];
                        int **l_832 = &g_346[0];
                        int i;
                        for (i = 0; i < 2; i++)
                            l_831[i] = &g_580;
                        (*l_832) = func_4(((*g_521) = (*g_432)), ((safe_add_func_int16_t_s_s((((*l_829) = l_828) , 0x553DL), (g_147 = (safe_unary_minus_func_uint32_t_u((+g_86)))))) | (g_580 = g_537[g_247])), g_537[g_247]);
                        (*g_604) = (*g_604);
                        if ((*g_144))
                            continue;
                    }
                    else
                    {
                        int **l_833 = &g_346[3];
                        (*l_833) = (*g_143);
                        (*g_604) |= 0x238E1063L;
                        l_765 |= ((*g_144) == g_537[g_247]);
                        if (g_537[g_247])
                            continue;
                    }
                    for (g_73 = 0; (g_73 <= 0); g_73 += 1)
                    {
                        int i, j;
                        l_824[(g_176 + 3)][g_73] = (safe_rshift_func_uint8_t_u_s((g_539[g_247][g_73] = 0x20L), 1));
                    }
                    if ((safe_sub_func_uint16_t_u_u((*l_56), (safe_sub_func_int16_t_s_s((*g_105), (((((**g_143) >= ((g_580 && g_147) == ((safe_add_func_uint32_t_u_u((~((**l_768) = (1L ^ g_228))), ((safe_mul_func_uint8_t_u_u(g_537[g_247], (l_848 = (safe_sub_func_uint8_t_u_u(0xD7L, g_298[0][2][1]))))) > 65535UL))) > 0x93FAFB0FL))) && (-7L)) > (**g_143)) < l_849))))))
                    {
                        int l_851 = 1L;
                        if ((*g_144))
                            break;
                        l_820[4][0][0] = l_850;
                        g_346[3] = &g_537[g_247];
                        (*g_604) = l_851;
                    }
                    else
                    {
                        char l_852 = 0x85L;
                        (*g_604) ^= (g_147 ^ l_852);
                    }
                }
            }
            else
            {
                int l_853[2];
                int l_868[10] = {0x02E5223DL, 0x21788D2BL, 0x02E5223DL, 0x21788D2BL, 0x02E5223DL, 0x21788D2BL, 0x02E5223DL, 0x21788D2BL, 0x02E5223DL, 0x21788D2BL};
                unsigned *l_877[1];
                int l_878 = 5L;
                int l_880 = 0x874630D5L;
                char ****l_881[7] = {&g_666, &g_666, &g_666, &g_666, &g_666, &g_666, &g_666};
                int i;
                for (i = 0; i < 2; i++)
                    l_853[i] = 0x0894D9C2L;
                for (i = 0; i < 1; i++)
                    l_877[i] = &g_281;
                for (g_228 = 1; (g_228 >= 0); g_228 -= 1)
                {
                    int l_859 = 0x69BE4943L;
                    int l_860 = 0x02A57B59L;
                    for (g_86 = 0; (g_86 <= 1); g_86 += 1)
                    {
                        unsigned char *l_867 = &g_539[1][0];
                        int i, j, k;
                        l_853[1] |= g_298[g_228][(g_86 + 3)][g_228];
                        l_868[9] = ((((safe_mod_func_int8_t_s_s(((safe_add_func_uint32_t_u_u(((*l_769) ^= (safe_unary_minus_func_uint16_t_u((g_298[g_228][g_228][g_86] < ((*g_604) = l_853[1]))))), (*l_850))) || (-2L)), (l_860 = l_859))) && ((*l_867) = ((~(safe_mod_func_uint16_t_u_u(0x31B9L, ((g_281 | (g_298[g_86][g_247][g_86] || ((safe_add_func_int32_t_s_s(((void*)0 != l_56), l_865)) || (*g_105)))) | l_866)))) | g_263))) | g_84[7][1][0]) ^ 0L);
                        if (l_859)
                            continue;
                        (*g_604) = (+((void*)0 == &g_147));
                    }
                    if ((**g_143))
                        continue;
                    if ((*g_144))
                        break;
                }
                l_868[5] = ((*l_850) = (safe_add_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(l_868[3], (safe_mul_func_int8_t_s_s(2L, ((&g_666 == (((safe_sub_func_int8_t_s_s((*l_850), ((*l_850) >= (l_878 = (((*l_768) = (*l_768)) == l_850))))) <= (l_880 |= ((g_745 || l_879) , 3UL))) , l_881[0])) >= g_298[0][2][0]))))), 0x12497D69L)));
                for (l_866 = (-23); (l_866 < 12); l_866 = safe_add_func_uint16_t_u_u(l_866, 2))
                {
                    int * const l_886 = &l_866;
                    for (g_281 = 0; (g_281 < 20); ++g_281)
                    {
                        int **l_887 = (void*)0;
                        int **l_888[3][10];
                        int **l_889 = &g_262;
                        int i, j;
                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 10; j++)
                                l_888[i][j] = &g_346[4];
                        }
                        (*l_889) = l_886;
                    }
                }
            }
            if (((safe_add_func_int32_t_s_s((*l_850), 0x8883026CL)) > ((*l_769) = 4294967295UL)))
            {
                unsigned l_904 = 0x7B815C8DL;
                int l_907 = 0xD4B6C4ACL;
                int **l_927 = &g_262;
                for (l_865 = 0; (l_865 < (-4)); l_865 = safe_sub_func_int32_t_s_s(l_865, 8))
                {
                    int l_896 = 1L;
                    char ** const ***l_899 = (void*)0;
                    char ** const ***l_900 = &l_898;
                    int l_924 = 0x60F5CAD1L;
                    (*g_604) |= (safe_add_func_uint8_t_u_u((((l_896 , &g_143) == &g_143) <= ((((((g_897 = &g_665) != ((*l_900) = l_898)) | (*g_105)) != ((0xA9FE58BAL == g_298[1][3][0]) >= (l_901 ^ (*l_850)))) | 0xA2L) ^ 0x97327515L)), (*l_850)));
                    if (((*g_604) = (safe_lshift_func_uint8_t_u_u((l_904 || g_73), 1))))
                    {
                        (*l_850) = (**g_143);
                    }
                    else
                    {
                        return g_403;
                    }
                    for (l_879 = (-26); (l_879 <= 4); l_879 = safe_add_func_int32_t_s_s(l_879, 4))
                    {
                        unsigned char l_923 = 0xD4L;
                        int l_925 = 0L;
                        int **l_926 = &l_820[9][3][4];
                        (*g_604) |= ((*l_850) = (l_907 = (**g_143)));
                        if (l_896)
                            break;
                        l_925 |= ((((**l_768) = (g_110 , (safe_mul_func_int8_t_s_s(((l_896 || (safe_sub_func_int8_t_s_s((*l_850), g_539[1][0]))) > g_539[2][0]), ((((safe_rshift_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u(((safe_mod_func_int16_t_s_s((-1L), (safe_sub_func_uint8_t_u_u(255UL, (l_924 = (safe_rshift_func_int16_t_s_s(((safe_unary_minus_func_uint16_t_u(((l_896 , (((*l_850) , (*l_850)) & g_537[2])) ^ (*g_604)))) | l_923), (*l_850)))))))) , g_314), (*l_850))) , g_2[2][2][4]), g_176)) | (*l_850)) >= l_923) > g_247))))) | l_896) & 1L);
                        (*l_926) = (*g_143);
                    }
                    (*l_850) = ((0xB102L > (*g_105)) >= ((g_130 , g_73) | g_2[2][4][2]));
                }
                (*l_927) = &g_537[g_247];
            }
            else
            {
                char l_928[3][2][6] = {{{0xFDL, 0xD2L, 0x5AL, 1L, (-1L), 0x42L}, {0xFDL, 0xD2L, 0x5AL, 1L, (-1L), 0x42L}}, {{0xFDL, 0xD2L, 0x5AL, 1L, (-1L), 0x42L}, {0xFDL, 0xD2L, 0x5AL, 1L, (-1L), 0x42L}}, {{0xFDL, 0xD2L, 0x5AL, 1L, (-1L), 0x42L}, {0xFDL, 0xD2L, 0x5AL, 1L, (-1L), 0x42L}}};
                int i, j, k;
                if ((**g_143))
                    break;
                if ((*g_144))
                    continue;
                l_928[0][1][4] |= (**g_143);
            }
            (*l_850) = (*l_850);
        }
        (*l_945) = ((~(safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u((safe_mod_func_uint8_t_u_u((*l_850), (g_584 = ((safe_sub_func_uint16_t_u_u((l_937 >= (*g_105)), (*l_850))) || (safe_lshift_func_int16_t_s_s((((void*)0 == &g_637) < (((safe_sub_func_int8_t_s_s((func_51(&l_586, (*l_850), (*g_105), l_942) != (*l_850)), (*l_850))) & 0UL) && (*l_850))), 12)))))), g_3[0])), (*g_604)))) , (*g_143));
    }
    return g_147;
}







static int * const func_4(int p_5, unsigned short p_6, unsigned p_7)
{
    int l_753 = 3L;
    l_753 |= 0L;
    return (*g_143);
}







static char func_8(int * p_9, int p_10, int * const p_11)
{
    unsigned short l_593 = 65528UL;
    int * const l_601 = (void*)0;
    const unsigned short l_617[1][6] = {{0x37ABL, 0x37ABL, 0x37ABL, 0x37ABL, 0x37ABL, 0x37ABL}};
    int l_629[4][3] = {{0xEF03D2CDL, 0xFD5D7374L, 0x21378D74L}, {0xEF03D2CDL, 0xFD5D7374L, 0x21378D74L}, {0xEF03D2CDL, 0xFD5D7374L, 0x21378D74L}, {0xEF03D2CDL, 0xFD5D7374L, 0x21378D74L}};
    int l_630 = 0xCC61AE91L;
    unsigned *l_675[9][2] = {{(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}, {(void*)0, (void*)0}};
    int **l_684 = &g_521;
    int ***l_683 = &l_684;
    int *l_696 = &g_537[2];
    unsigned l_730[2][8] = {{1UL, 9UL, 1UL, 9UL, 1UL, 9UL, 1UL, 9UL}, {1UL, 9UL, 1UL, 9UL, 1UL, 9UL, 1UL, 9UL}};
    int i, j;
    for (g_281 = 0; (g_281 > 21); ++g_281)
    {
        unsigned l_594 = 8UL;
        int *l_599 = &g_110;
        const unsigned l_600 = 7UL;
        int **l_602 = &g_346[3];
        int **l_603 = (void*)0;
    }
    l_630 ^= ((~(((((safe_lshift_func_uint16_t_u_s(0x5FB4L, 2)) >= func_25(&g_16, &g_16, (0UL | (*p_11)))) <= (safe_mul_func_int8_t_s_s((((safe_add_func_int32_t_s_s(((safe_add_func_uint8_t_u_u((((safe_mul_func_uint16_t_u_u(65535UL, l_617[0][5])) == (l_629[1][2] = p_10)) ^ (-1L)), g_403)) || l_629[2][2]), 0xF46B5106L)) , 4294967286UL) , l_617[0][5]), g_16))) & l_617[0][5]) , (*g_604))) & 5UL);
    for (l_593 = (-23); (l_593 != 7); l_593 = safe_add_func_int16_t_s_s(l_593, 5))
    {
        int l_640 = 0xA5938989L;
        char ***l_662 = (void*)0;
        short **l_680 = &g_105;
        if ((*g_144))
        {
            unsigned short l_655 = 0x1CA7L;
            char ****l_663 = (void*)0;
            char ****l_664[10][7][3] = {{{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}, {{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}, {{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}, {{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}, {{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}, {{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}, {{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}, {{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}, {{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}, {{&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}, {&l_662, &l_662, &l_662}}};
            int i, j, k;
            for (g_522 = 17; (g_522 == (-1)); --g_522)
            {
                for (g_281 = 0; (g_281 != 33); g_281 = safe_add_func_int8_t_s_s(g_281, 1))
                {
                    const unsigned ***l_639 = &g_637;
                    (*l_639) = g_637;
                }
            }
            (*p_11) = (((~p_10) == p_10) >= l_640);
            for (g_522 = 0; (g_522 < (-7)); --g_522)
            {
                int ** const l_649 = &g_346[3];
                unsigned short *l_650 = &g_147;
                (*g_604) = (*g_604);
                (*g_144) = func_46((safe_mul_func_uint8_t_u_u((p_10 & (((*g_105) = ((0x75L >= l_640) >= ((safe_mul_func_uint16_t_u_u((0x61AE8303L == p_10), ((safe_lshift_func_int8_t_s_u(((g_580 = ((*l_650) = ((&g_346[0] != l_649) < p_10))) , (func_46(l_640, p_10, p_10, l_640) != l_617[0][5])), 3)) | l_640))) & g_16))) ^ 0xC37BL)), p_10)), (*g_521), p_10, l_617[0][2]);
            }
            (*g_144) = ((8L <= ((safe_sub_func_int8_t_s_s((!l_640), (l_655 != (safe_mul_func_uint8_t_u_u(((!l_655) , ((safe_mod_func_int8_t_s_s(0L, (safe_mul_func_int16_t_s_s(((g_666 = (g_665 = l_662)) == ((safe_add_func_int8_t_s_s(l_629[0][0], 0xB4L)) , &g_91)), 0xDEC3L)))) >= l_655)), 255UL))))) <= 0x57L)) , l_640);
        }
        else
        {
            unsigned *l_674[2];
            unsigned **l_673[3][1];
            int l_681 = (-3L);
            unsigned char *l_682 = &g_176;
            int i, j;
            for (i = 0; i < 2; i++)
                l_674[i] = &g_321;
            for (i = 0; i < 3; i++)
            {
                for (j = 0; j < 1; j++)
                    l_673[i][j] = &l_674[0];
            }
            (*g_604) = ((*g_144) = (safe_add_func_int32_t_s_s(func_51(p_9, (safe_lshift_func_uint8_t_u_s((~g_130), p_10)), l_640, (l_640 , g_73)), ((l_675[2][1] = func_12(g_3[0], &g_537[2])) == p_11))));
            (**g_143) = (**g_143);
            (*p_11) = (0UL ^ ((*g_262) = (((0xF967L <= l_617[0][0]) | (safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_u(((((&g_431 != ((((((void*)0 != l_680) != ((*l_682) ^= l_681)) < l_681) , p_10) , l_683)) | g_247) , p_10) && 0xA9L), p_10)), 0x2522365AL))) , (*p_11))));
        }
    }
    for (p_10 = (-26); (p_10 > (-22)); p_10 = safe_add_func_int32_t_s_s(p_10, 2))
    {
        const unsigned char l_687[9] = {0UL, 0UL, 0xA0L, 0UL, 0UL, 0xA0L, 0UL, 0UL, 0xA0L};
        const int *l_701 = &g_110;
        unsigned char l_707 = 0UL;
        int l_719 = 3L;
        int l_720 = 0xE44A411CL;
        int l_722 = 1L;
        char l_726 = (-1L);
        int l_731[1][4][7] = {{{0x7B1E21E9L, 0x6624C4F8L, 0x4D545EECL, (-8L), 0x4D545EECL, 0x6624C4F8L, 0x7B1E21E9L}, {0x7B1E21E9L, 0x6624C4F8L, 0x4D545EECL, (-8L), 0x4D545EECL, 0x6624C4F8L, 0x7B1E21E9L}, {0x7B1E21E9L, 0x6624C4F8L, 0x4D545EECL, (-8L), 0x4D545EECL, 0x6624C4F8L, 0x7B1E21E9L}, {0x7B1E21E9L, 0x6624C4F8L, 0x4D545EECL, (-8L), 0x4D545EECL, 0x6624C4F8L, 0x7B1E21E9L}}};
        unsigned **l_734[4][3][7] = {{{&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}, {&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}, {&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}}, {{&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}, {&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}, {&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}}, {{&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}, {&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}, {&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}}, {{&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}, {&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}, {&l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1], &l_675[2][1]}}};
        unsigned ***l_733 = &l_734[2][0][0];
        const char *l_741[3][9][1] = {{{&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}}, {{&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}}, {{&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}, {&g_109}}};
        const char **l_740 = &l_741[2][5][0];
        const char ***l_739[1];
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_739[i] = &l_740;
    }
    return p_10;
}







static int * func_12(unsigned short p_13, int * p_14)
{
    return p_14;
}







static char func_25(int * p_26, int * p_27, const short p_28)
{
    unsigned l_569 = 0x487C337AL;
    char *l_570 = &g_298[1][3][0];
    unsigned short *l_571 = (void*)0;
    unsigned short *l_572 = &g_147;
    unsigned short *l_579[3];
    int **l_581 = (void*)0;
    int **l_582 = &g_346[3];
    int **l_583 = &g_262;
    int i;
    for (i = 0; i < 3; i++)
        l_579[i] = &g_580;
    (*l_583) = ((*l_582) = func_38(((g_580 = (safe_add_func_uint8_t_u_u((safe_lshift_func_int16_t_s_u((p_28 && 0x7C70L), 11)), (~(((safe_lshift_func_uint8_t_u_s((((((*l_570) ^= l_569) , ((*l_572) &= g_314)) > (safe_rshift_func_int8_t_s_u(l_569, 5))) | (safe_sub_func_int32_t_s_s((g_314 , (safe_mul_func_int8_t_s_s(((l_569 | (g_522 , p_28)) > 0x09D3L), 0xA1L))), p_28))), l_569)) == (*g_144)) <= 9UL))))) < g_281), p_27, &g_247));
    (**g_143) |= 0x77119389L;
    return g_176;
}







static unsigned short func_29(int * p_30, int * p_31, int * p_32)
{
    short l_523 = 0x8F54L;
    unsigned char *l_524 = &g_128;
    unsigned *l_527 = (void*)0;
    unsigned *l_528 = &g_73;
    unsigned *l_529 = &g_263;
    unsigned short l_532[3];
    int l_535 = (-1L);
    int *l_536 = &g_537[2];
    unsigned char *l_538 = &g_539[1][0];
    int i;
    for (i = 0; i < 3; i++)
        l_532[i] = 0x3E7FL;
    (**g_143) = ((((((((*l_524) = l_523) && (((((((*g_521) = (safe_mul_func_uint16_t_u_u(0x423BL, l_523))) , ((*l_529) &= (g_281 |= (l_523 != func_51(p_32, l_523, l_523, ((*l_528) = g_314)))))) , l_523) >= l_523) == l_523) , l_523)) < l_523) , l_523) , g_321) <= l_523) || 0x6F5BC233L);
    if (((**g_143) = ((((*l_538) ^= ((safe_mul_func_int16_t_s_s(0x4914L, ((l_523 <= (((*l_536) ^= (((l_535 &= ((l_532[0] && (safe_lshift_func_int8_t_s_s((l_532[0] > ((*p_32) < (((func_46((!(((void*)0 == &l_532[0]) != (g_403 = g_247))), (l_532[0] && g_298[1][6][0]), (*g_521), (*p_32)) >= l_532[0]) | (-1L)) , l_532[0]))), 2))) && l_532[0])) , l_535) || l_535)) , (**g_143))) <= 1UL))) , 0x89L)) > 0x47L) != l_523)))
    {
        unsigned char l_543[1];
        int i;
        for (i = 0; i < 1; i++)
            l_543[i] = 255UL;
        for (g_263 = 19; (g_263 == 7); g_263--)
        {
            int **l_542[10][3][2] = {{{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}, {{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}, {{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}, {{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}, {{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}, {{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}, {{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}, {{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}, {{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}, {{&g_346[4], &g_262}, {&g_346[4], &g_262}, {&g_346[4], &g_262}}};
            int i, j, k;
            g_346[3] = p_31;
            return g_16;
        }
        l_543[0] |= (*p_32);
    }
    else
    {
        int *l_544 = &l_535;
        int **l_545 = &g_262;
        int **l_546 = &l_544;
        int **l_549 = &g_521;
        int ***l_550 = &l_549;
        int **l_552 = &g_521;
        int ***l_551 = &l_552;
        int l_558 = 0x5E790BD5L;
        l_544 = (*g_143);
        (*l_546) = ((*l_545) = p_30);
        l_535 &= func_51(p_32, ((*g_105) = ((void*)0 == p_30)), (g_539[1][0] || (((*l_551) = ((*l_550) = l_549)) == &p_31)), ((*l_529) = ((safe_mod_func_uint16_t_u_u((*l_536), (safe_unary_minus_func_uint16_t_u(((((*l_536) || ((safe_rshift_func_uint16_t_u_s(l_558, 12)) , (*l_536))) ^ (*l_536)) ^ (*p_32)))))) , 0xBFDB9972L)));
    }
    (**g_143) = ((0x4417L | (*g_105)) == ((safe_mul_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(g_3[0], (*l_536))), (g_321 >= (*l_536)))) , g_147));
    (*g_144) = ((*l_536) ^ 0x543FL);
    return g_110;
}







static int * func_33(int * p_34, int * p_35, unsigned char p_36, int * p_37)
{
    unsigned short l_265 = 1UL;
    short *l_289 = &g_228;
    int l_302 = 0x0A0EE0BAL;
    char l_363 = 2L;
    int l_364 = 0x8E6EC505L;
    int * const l_498 = &g_16;
    if (l_265)
    {
        int *l_266[3];
        short *l_277 = &g_84[2][1][0];
        unsigned l_318[10][7][1] = {{{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}, {{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}, {{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}, {{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}, {{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}, {{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}, {{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}, {{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}, {{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}, {{0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}, {0xE6948D25L}}};
        int l_482 = 0L;
        int i, j, k;
        for (i = 0; i < 3; i++)
            l_266[i] = &g_110;
        g_262 = (*g_143);
        if (((void*)0 == l_266[2]))
        {
            unsigned l_280 = 0x5A496925L;
            int **l_282 = &g_262;
            for (p_36 = (-24); (p_36 != 27); p_36++)
            {
                unsigned l_272 = 18446744073709551606UL;
                short **l_278 = &g_105;
                unsigned short *l_279 = &g_147;
                if ((safe_add_func_uint32_t_u_u(p_36, (**g_143))))
                {
                    int **l_271 = &g_262;
                    (*l_271) = (*g_143);
                }
                else
                {
                    (**g_143) ^= ((p_36 , l_272) & p_36);
                }
                g_281 &= (0xC2L == func_51(p_35, p_36, ((((safe_mod_func_uint32_t_u_u(p_36, 0x0C178906L)) ^ ((l_272 , ((+(((safe_rshift_func_uint16_t_u_s((func_51(func_38(((((*l_279) = ((g_110 , l_277) != ((*l_278) = l_277))) >= 0UL) ^ (**g_143)), l_266[2], &g_16), l_280, p_36, p_36) , g_110), p_36)) & g_2[2][7][2]) & (-1L))) > 0L)) >= g_2[1][8][2])) | g_16) & g_2[4][7][0]), g_2[0][1][4]));
            }
            (*l_282) = (void*)0;
        }
        else
        {
            char *l_297[1];
            int l_299 = 0x388DD8D8L;
            int l_300 = 8L;
            unsigned *l_301[5][3] = {{&g_263, &g_263, &g_73}, {&g_263, &g_263, &g_73}, {&g_263, &g_263, &g_73}, {&g_263, &g_263, &g_73}, {&g_263, &g_263, &g_73}};
            int l_365 = 0xC9084D83L;
            unsigned l_437 = 0UL;
            int i, j;
            for (i = 0; i < 1; i++)
                l_297[i] = &g_298[1][3][0];
            if ((safe_rshift_func_int8_t_s_s((safe_add_func_int32_t_s_s((safe_mod_func_uint32_t_u_u((((void*)0 == l_289) | l_265), (g_281 = (((safe_add_func_uint8_t_u_u((func_51(p_34, (l_265 ^ 0x51L), p_36, (l_302 = ((func_46((l_299 &= (safe_sub_func_uint16_t_u_u(func_46((safe_unary_minus_func_uint16_t_u((safe_add_func_uint8_t_u_u(0xF3L, ((p_36 || g_73) > (*p_35)))))), g_281, (*p_34), (**g_143)), p_36))), l_265, g_3[2], l_300) | 0x40B1L) <= 0x6AL))) | l_300), g_281)) != 0x02L) & l_300)))), l_265)), g_3[0])))
            {
                int l_303 = 0L;
                int l_324 = 0L;
                int l_439 = 2L;
                unsigned l_440 = 0xB271DC77L;
                unsigned char *l_443[1];
                unsigned short l_444 = 0xAA43L;
                int i;
                for (i = 0; i < 1; i++)
                    l_443[i] = &g_176;
                if ((l_303 = ((*g_262) = l_303)))
                {
                    char l_315 = 0L;
                    (**g_143) = func_51(func_38((*g_144), l_266[2], p_34), ((safe_mod_func_uint16_t_u_u(((p_36 , (g_298[1][4][1] , (safe_add_func_int16_t_s_s(0x11A6L, (safe_sub_func_uint16_t_u_u(g_281, (safe_rshift_func_int8_t_s_s((safe_rshift_func_int8_t_s_s((g_314 <= l_303), 6)), l_315)))))))) != 65535UL), p_36)) , p_36), l_299, g_3[0]);
                }
                else
                {
                    return p_35;
                }
                if ((safe_mod_func_uint8_t_u_u(l_318[7][3][0], (((safe_mul_func_int8_t_s_s(9L, ((g_321 <= l_303) == ((l_324 ^= ((**g_143) || (safe_mul_func_uint16_t_u_u(l_303, (func_46(g_73, ((void*)0 == &g_144), l_303, (*p_35)) || p_36))))) < 0xDB1197ECL)))) < (*p_35)) , l_324))))
                {
                    unsigned l_327 = 0UL;
                    const unsigned l_330 = 0x2C017171L;
                    short **l_335[8][6][2] = {{{&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}}, {{&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}}, {{&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}}, {{&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}}, {{&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}}, {{&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}}, {{&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}}, {{&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}, {&l_289, &l_289}}};
                    unsigned short l_336 = 2UL;
                    int l_337 = 0x2BDF8E17L;
                    short l_338 = 1L;
                    int i, j, k;
                    for (l_299 = 20; (l_299 != 28); ++l_299)
                    {
                        (**g_143) = l_327;
                    }
                    if ((l_338 ^= ((l_337 = (func_46((func_51(&l_303, ((safe_rshift_func_uint8_t_u_u(l_265, 7)) , (l_330 , (~((((safe_sub_func_uint32_t_u_u((((g_3[0] & ((safe_mod_func_uint16_t_u_u((+(p_36 <= p_36)), 1L)) && (l_335[4][2][0] == ((0xCD53L != l_299) , (void*)0)))) , g_2[3][6][1]) < g_109), l_336)) ^ 0xF3L) != g_176) > 0x6507706CL)))), l_324, p_36) <= g_281), g_298[0][4][0], l_302, l_336) | 0x564DL)) , (*p_35))))
                    {
                        int l_343[4] = {(-5L), 9L, (-5L), 9L};
                        int **l_344 = (void*)0;
                        int **l_345 = &g_262;
                        int i;
                        l_343[2] = ((((*g_144) = 8L) ^ (safe_lshift_func_int16_t_s_u(((*l_289) = ((*g_105) , (safe_lshift_func_uint8_t_u_s(g_281, 0)))), g_128))) > p_36);
                        p_35 = func_38((&l_277 == (void*)0), &g_247, &g_16);
                        g_346[3] = ((*l_345) = (void*)0);
                    }
                    else
                    {
                        int *l_362 = (void*)0;
                        int **l_361 = &l_362;
                        int * const l_366 = &g_16;
                        int **l_367 = &l_266[2];
                        (*l_367) = func_38((l_365 ^= (safe_mul_func_uint16_t_u_u(((safe_sub_func_int16_t_s_s((safe_add_func_int16_t_s_s((!(g_130 | (l_337 = ((safe_mul_func_uint8_t_u_u((p_36 && (safe_rshift_func_int16_t_s_s(l_302, 3))), (l_303 ^= (4294967295UL & (safe_add_func_int8_t_s_s(0x67L, (l_299 |= (l_364 &= ((((-1L) | (((*l_289) = (*g_105)) , (l_300 = ((safe_mul_func_uint8_t_u_u(((((*l_361) = &g_16) != &g_16) , 0x6AL), p_36)) > l_363)))) ^ p_36) || 0xA6L))))))))) , l_299)))), p_36)), p_36)) <= g_84[8][0][0]), 65531UL))), &g_247, l_366);
                        (**l_367) = l_364;
                    }
                    l_324 = (+(-1L));
                    for (g_321 = (-16); (g_321 == 19); g_321 = safe_add_func_int32_t_s_s(g_321, 1))
                    {
                        (**g_143) = func_46(l_303, g_84[8][0][0], g_247, ((*p_35) , (safe_unary_minus_func_uint8_t_u(0xB0L))));
                        if ((*p_35))
                            continue;
                        (*g_144) = (safe_mod_func_uint16_t_u_u((~((safe_mod_func_int8_t_s_s((safe_mod_func_int8_t_s_s(((~p_36) != ((7L && l_327) || p_36)), ((g_298[1][3][0] , ((void*)0 != &g_105)) , g_109))), (safe_add_func_int16_t_s_s(p_36, p_36)))) == (*g_105))), (*g_105)));
                    }
                }
                else
                {
                    short l_382[8];
                    unsigned *l_400 = &g_130;
                    int i;
                    for (i = 0; i < 8; i++)
                        l_382[i] = 5L;
                    (**g_143) = l_303;
                    for (l_363 = 24; (l_363 != 15); l_363 = safe_sub_func_int32_t_s_s(l_363, 5))
                    {
                        int **l_381 = &g_346[3];
                        unsigned short *l_383 = &g_147;
                        (*l_381) = func_38((*p_35), &g_16, ((l_324 || ((((*l_381) = p_34) == (void*)0) | ((*l_383) = l_382[0]))) , &g_16));
                    }
                    for (g_130 = 0; (g_130 <= 0); g_130 += 1)
                    {
                        unsigned char *l_392 = &g_128;
                        unsigned short *l_393 = &l_265;
                        l_364 |= ((safe_mod_func_int8_t_s_s(0x3FL, ((g_84[8][0][0] <= (**g_143)) ^ 4294967295UL))) && ((g_314 && (safe_add_func_int16_t_s_s(((((*l_393) = (safe_sub_func_int16_t_s_s(p_36, (((*l_392) |= (safe_lshift_func_int8_t_s_u(0L, ((&g_105 != (void*)0) | 0x0BC5L)))) >= g_298[1][3][0])))) , &l_266[0]) != (void*)0), p_36))) || 0x8E12L));
                    }
                    if ((func_51(&l_303, (safe_rshift_func_int8_t_s_s(p_36, 2)), (*g_105), ((l_299 != ((p_36 >= l_324) || (safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(l_300, (((*l_400) &= p_36) , g_109))), 0)))) , 0x0E77FDF4L)) || l_382[0]))
                    {
                        int **l_402 = &g_346[3];
                        (*l_402) = g_401[0][1][2];
                    }
                    else
                    {
                        unsigned l_404 = 18446744073709551606UL;
                        unsigned short *l_433 = (void*)0;
                        unsigned short *l_434 = (void*)0;
                        unsigned short *l_435 = &g_147;
                        unsigned char *l_436 = &g_176;
                        int **l_438[9][4][5] = {{{&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}}, {{&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}}, {{&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}}, {{&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}}, {{&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}}, {{&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}}, {{&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}}, {{&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}}, {{&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}, {&g_346[3], &l_266[2], &g_346[3], (void*)0, &l_266[2]}}};
                        int i, j, k;
                        (*g_144) ^= g_403;
                        l_404 = l_302;
                        l_439 ^= ((safe_mod_func_uint32_t_u_u((func_51((p_37 = ((safe_sub_func_uint8_t_u_u((func_46(p_36, l_324, func_46(p_36, ((((safe_rshift_func_int8_t_s_u((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((safe_mul_func_int16_t_s_s((((*p_35) != ((safe_sub_func_uint8_t_u_u((((safe_mul_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(p_36, (safe_sub_func_uint32_t_u_u(func_46((safe_mod_func_uint8_t_u_u(((*l_436) = (safe_lshift_func_int16_t_s_s((g_3[1] <= 3UL), (safe_lshift_func_uint16_t_u_s(((*l_435) = (((void*)0 != g_431) | g_109)), 8))))), 0x15L)), (*p_34), (*g_432), (*p_35)), 0x1BBB74A1L)))), l_437)) , 0L) & g_321), g_263)) ^ 251UL)) != l_365), l_324)), p_36)), p_36)), 0)) , l_382[5]) < p_36) , l_324), g_281, l_404), l_265) || (*g_105)), g_321)) , (void*)0)), l_303, p_36, p_36) || l_303), (*p_35))) || p_36);
                    }
                }
                (*g_144) = ((l_440 & p_36) ^ ((*l_289) = (g_128 , ((*l_277) = ((safe_sub_func_uint8_t_u_u(p_36, (l_444 |= l_439))) , (0xC6L | ((func_46(g_84[2][1][0], (*p_34), (l_300 = (g_16 = (65532UL == l_302))), (*p_35)) <= 0xD747L) ^ l_303)))))));
                for (l_299 = 0; (l_299 < 28); l_299 = safe_add_func_uint8_t_u_u(l_299, 7))
                {
                    int l_453 = 0xD4E8DBB4L;
                    int *l_455[1][4][2];
                    int **l_454 = &l_455[0][3][1];
                    int i, j, k;
                    for (i = 0; i < 1; i++)
                    {
                        for (j = 0; j < 4; j++)
                        {
                            for (k = 0; k < 2; k++)
                                l_455[i][j][k] = &g_247;
                        }
                    }
                    if ((safe_add_func_int16_t_s_s(((safe_rshift_func_uint16_t_u_s((((safe_rshift_func_int16_t_s_s(p_36, l_453)) <= 5UL) != ((*g_431) == ((*l_454) = func_38((l_300 &= (l_324 = 0x827D78AAL)), (l_265 , &g_16), &g_247)))), p_36)) , l_453), l_453)))
                    {
                        unsigned l_469 = 0x4F491E00L;
                        g_346[3] = (*g_143);
                        l_469 = (((safe_mul_func_int16_t_s_s((((*g_105) >= (safe_sub_func_int32_t_s_s((((g_3[0] <= (-2L)) != ((safe_rshift_func_uint8_t_u_s(g_130, 7)) || ((l_453 , (safe_unary_minus_func_uint32_t_u((safe_mul_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((((((g_130 = g_109) , (p_36 || (safe_lshift_func_uint16_t_u_u((((**g_143) = ((-1L) == (((g_130 >= 0x8CD9C27FL) , 0UL) <= 0xB945C73EL))) >= l_453), 15)))) == (*g_105)) & (-1L)) > p_36) == p_36), 4)), 0xFCL))))) >= g_314))) && p_36), 0x7EBB6B82L))) != 0xAFL), p_36)) , p_36) , (*p_35));
                    }
                    else
                    {
                        const unsigned short *l_474 = &l_265;
                        int l_481 = (-1L);
                        (*g_144) = (safe_sub_func_uint8_t_u_u(((safe_sub_func_int16_t_s_s(l_363, (((l_277 != l_474) <= (l_481 = ((safe_add_func_uint32_t_u_u(l_300, (*p_35))) , (l_453 ^ (l_364 = (((safe_add_func_int16_t_s_s(l_437, (safe_mod_func_uint16_t_u_u((g_147 &= (((0UL & g_298[1][5][1]) <= g_16) && 0x0FL)), g_314)))) , (*g_105)) && g_3[1])))))) , 0xC682L))) >= p_36), g_298[0][7][0]));
                    }
                }
            }
            else
            {
                int *l_483 = &g_110;
                (*g_144) = (((void*)0 != l_277) == l_482);
                l_483 = (*g_143);
            }
            for (g_247 = (-3); (g_247 > (-25)); g_247 = safe_sub_func_int8_t_s_s(g_247, 8))
            {
                unsigned char *l_490 = &g_176;
                int l_497 = 0xAB1D79FBL;
                if ((safe_mod_func_int8_t_s_s(g_3[1], (safe_lshift_func_int8_t_s_u((((((g_128 = (((*l_490) = (g_3[0] , (g_3[2] && p_36))) , ((safe_add_func_uint32_t_u_u(0x2E50F9D8L, (safe_sub_func_int32_t_s_s(((safe_sub_func_uint16_t_u_u(((**g_431) , g_176), p_36)) , (p_36 && l_497)), g_16)))) , g_84[6][1][0]))) == 0x3CL) , l_300) , p_36) <= p_36), l_265)))))
                {
                    return &g_110;
                }
                else
                {
                    return &g_110;
                }
            }
            (*g_144) &= 8L;
            return l_266[2];
        }
    }
    else
    {
        p_35 = func_38((**g_143), p_37, l_498);
        (*p_35) = ((void*)0 == (*g_431));
    }
    for (g_109 = 7; (g_109 >= (-24)); g_109--)
    {
        char l_503[9] = {0x9CL, 0xCFL, 0x9CL, 0xCFL, 0x9CL, 0xCFL, 0x9CL, 0xCFL, 0x9CL};
        int l_506 = 0L;
        int l_519 = 1L;
        int i;
        (**g_143) = (*p_35);
        for (g_128 = 0; (g_128 <= 33); g_128 = safe_add_func_int16_t_s_s(g_128, 3))
        {
            int *l_505[7][1];
            int i, j;
            for (i = 0; i < 7; i++)
            {
                for (j = 0; j < 1; j++)
                    l_505[i][j] = &l_364;
            }
            if (l_503[0])
            {
                return p_37;
            }
            else
            {
                int **l_504[4][1];
                int i, j;
                for (i = 0; i < 4; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_504[i][j] = &g_346[3];
                }
                l_505[0][0] = p_34;
                l_506 &= (*p_35);
                (**g_143) = (safe_mul_func_uint8_t_u_u((safe_mul_func_int16_t_s_s(p_36, (safe_mul_func_uint16_t_u_u(g_84[8][1][0], (safe_mul_func_uint8_t_u_u(p_36, p_36)))))), (safe_lshift_func_int16_t_s_s(((safe_sub_func_int32_t_s_s((l_519 &= (l_506 , (g_228 & g_110))), (*g_144))) || (*p_35)), 1))));
            }
            l_506 ^= (**g_143);
        }
    }
    return p_35;
}







static int * func_38(int p_39, int * p_40, int * const p_41)
{
    unsigned *l_257 = &g_73;
    unsigned **l_256 = &l_257;
    char l_258 = 0x17L;
    char *l_259 = &g_86;
    int **l_264 = &g_262;
    if ((((((safe_lshift_func_uint8_t_u_s(0x32L, (l_258 |= (l_256 != &l_257)))) <= p_39) > p_39) | ((*l_259) ^= 0L)) , (((safe_mod_func_int8_t_s_s(func_46(p_39, g_2[2][5][3], (p_39 , g_228), p_39), g_3[0])) || p_39) < l_258)))
    {
        return &g_247;
    }
    else
    {
        g_262 = (*g_143);
        (**g_143) |= 0xBD345BA3L;
    }
    (*l_264) = (((g_263 = ((*g_144) = (-2L))) != (((p_39 || (p_39 ^ (l_258 , ((((void*)0 == &g_143) > l_258) == 65529UL)))) > ((*l_259) = (g_84[4][0][0] & 0x2CL))) > l_258)) , (void*)0);
    return l_257;
}







static unsigned char func_46(char p_47, int p_48, int p_49, int p_50)
{
    int l_151 = 0xE19F6601L;
    short *l_164 = &g_84[6][0][0];
    char l_175 = 0xCFL;
    int *l_179 = &g_110;
    int **l_178 = &l_179;
    unsigned char *l_250 = &g_176;
    int l_253 = 0L;
    for (p_48 = 0; (p_48 == (-28)); p_48 = safe_sub_func_uint32_t_u_u(p_48, 8))
    {
        int *l_154 = &l_151;
        char *l_161 = &g_109;
        int l_165 = 0x1287B45AL;
        unsigned *l_166 = &g_73;
        char l_167 = (-7L);
        short l_174 = 0L;
        int **l_177 = &l_154;
        (*g_144) = l_151;
        (*g_144) = ((safe_mul_func_uint16_t_u_u(func_51(l_154, p_50, (p_50 , (safe_mod_func_uint8_t_u_u(((((*l_166) = (safe_lshift_func_uint8_t_u_s(((safe_lshift_func_int8_t_s_u(p_48, 2)) & ((((*l_161) ^= (-4L)) & ((safe_mul_func_int16_t_s_s((*l_154), (((l_164 != (void*)0) <= ((void*)0 == l_164)) < p_47))) < l_165)) , g_16)), 0))) ^ p_49) >= p_47), 255UL))), (*l_154)), g_128)) >= g_2[2][8][1]);
        g_176 ^= func_51(&g_3[2], (*l_154), (l_167 || (safe_lshift_func_uint16_t_u_s((0x28DDL || (!func_51(&g_3[0], ((safe_add_func_int16_t_s_s(0x1AD5L, l_174)) , (-8L)), (l_175 <= 0xA7C3L), g_110))), (*l_154)))), (*l_154));
        (*l_177) = (*g_143);
    }
    (*l_178) = &l_151;
    for (g_128 = 0; (g_128 <= 4); g_128 += 1)
    {
        unsigned l_182 = 0x5E0C9667L;
        int l_183 = (-4L);
        int l_211 = (-4L);
        char ***l_224 = (void*)0;
        for (g_130 = 0; (g_130 <= 4); g_130 += 1)
        {
            char *l_187 = &l_175;
            int l_198 = 8L;
            const int *l_213[2][10][5] = {{{&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}}, {{&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}, {&g_3[0], &l_211, &l_198, &g_110, &l_198}}};
            int i, j, k;
            (**g_143) |= (safe_mod_func_int16_t_s_s((l_183 ^= l_182), ((*g_105) &= ((safe_mod_func_int16_t_s_s((p_49 != (safe_unary_minus_func_int8_t_s(((*l_187) &= p_50)))), 0x1FBCL)) || p_50))));
            for (p_49 = 0; (p_49 <= 0); p_49 += 1)
            {
                short l_199 = 0xD2DDL;
                const int *l_212 = &g_3[2];
                int l_248 = 0x89DD2A3BL;
                int i, j, k;
                l_198 = (safe_rshift_func_int16_t_s_s((safe_mod_func_int8_t_s_s((+g_2[g_128][(p_49 + 3)][g_130]), (safe_add_func_uint32_t_u_u(g_2[g_130][(g_128 + 2)][g_128], ((g_86 = ((g_84[(g_128 + 3)][p_49][p_49] <= (safe_mul_func_uint8_t_u_u((!(~g_84[(g_128 + 3)][p_49][p_49])), ((safe_lshift_func_int16_t_s_u(l_198, g_2[g_130][(g_128 + 2)][g_128])) , g_2[g_130][(g_128 + 2)][g_128])))) && p_49)) , l_199))))), p_50));
                (*l_178) = &p_50;
                for (p_50 = 0; (p_50 <= 0); p_50 += 1)
                {
                    short *l_208 = &l_199;
                    int l_229 = (-4L);
                    int i, j, k;
                    (*g_144) = (safe_sub_func_int32_t_s_s((((safe_lshift_func_uint16_t_u_u(g_2[g_130][(p_49 + 2)][g_130], 8)) || (g_84[(p_49 + 3)][(p_50 + 1)][p_49] > g_84[(p_49 + 1)][p_50][p_50])) > (safe_lshift_func_int8_t_s_u(g_84[(g_130 + 1)][p_50][p_50], (((*l_208) = (safe_rshift_func_int8_t_s_s(0x59L, 7))) && ((p_50 & (safe_rshift_func_int16_t_s_s((((p_47 < g_3[2]) == 0x43L) & g_2[g_130][(p_49 + 2)][g_130]), (*g_105)))) || l_198))))), (**g_143)));
                    if ((g_110 | ((*l_208) = l_211)))
                    {
                        l_213[1][9][0] = l_212;
                    }
                    else
                    {
                        int ** const l_227[8][3][7] = {{{(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}}, {{(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}}, {{(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}}, {{(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}}, {{(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}}, {{(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}}, {{(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}}, {{(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}, {(void*)0, &l_179, &l_179, &l_179, &l_179, &l_179, &l_179}}};
                        int *l_246 = &g_247;
                        int i, j, k;
                        l_198 = (g_228 = ((*g_144) = ((**g_143) <= (safe_mul_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(((safe_add_func_int32_t_s_s(((((safe_rshift_func_int8_t_s_u(((((safe_add_func_uint16_t_u_u(l_182, (l_224 == (void*)0))) < (safe_mul_func_int8_t_s_s((g_3[2] < ((void*)0 != l_227[1][1][6])), (-8L)))) >= p_47) || 0xED0E5276L), p_50)) != (*g_144)) || p_50) >= g_109), p_50)) , 1L), (**g_143))), 1UL)))));
                        l_229 = 6L;
                        l_248 |= ((safe_add_func_uint32_t_u_u(((!(safe_add_func_uint8_t_u_u((safe_sub_func_uint16_t_u_u(g_84[(g_130 + 1)][p_50][p_50], ((l_183 = (0x4E10L <= (*g_105))) < 1UL))), 0x84L))) , p_48), (safe_mod_func_uint8_t_u_u((((safe_rshift_func_int16_t_s_s((g_84[(p_49 + 3)][(p_50 + 1)][p_49] , (safe_sub_func_uint8_t_u_u((((((*l_246) = (safe_mul_func_int16_t_s_s((*g_105), (safe_sub_func_uint8_t_u_u(g_110, p_48))))) , (void*)0) == &p_49) < 4294967293UL), p_49))), 0)) < 0UL) != 0xFA7DL), 0x1DL)))) , 0xEE3016BBL);
                        if ((**g_143))
                            continue;
                    }
                    (*g_144) ^= ((safe_unary_minus_func_uint32_t_u((p_48 == g_228))) || p_49);
                    (*g_144) = p_47;
                }
            }
        }
        return g_2[3][1][1];
    }
    l_253 |= (((*l_250) = 0x0BL) > func_51(&g_3[1], (*l_179), (safe_mod_func_int16_t_s_s(p_48, (g_128 , (-1L)))), p_47));
    return g_109;
}







static unsigned char func_51(int * p_52, short p_53, short p_54, unsigned p_55)
{
    unsigned *l_70 = (void*)0;
    unsigned *l_71 = (void*)0;
    unsigned *l_72 = &g_73;
    int l_74 = 0xC01D5BC3L;
    const unsigned short l_145 = 9UL;
    unsigned short *l_146[6][4][10] = {{{&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}}, {{&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}}, {{&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}}, {{&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}}, {{&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}}, {{&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}, {&g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, &g_147, (void*)0, &g_147}}};
    int i, j, k;
    if (((safe_mod_func_int16_t_s_s(((p_54 , ((p_54 >= p_55) || (safe_mod_func_int32_t_s_s((safe_mul_func_int16_t_s_s(1L, ((safe_unary_minus_func_int8_t_s((((safe_mod_func_uint16_t_u_u(g_16, ((((*l_72) ^= g_16) , p_54) && l_74))) , &g_16) == (void*)0))) > l_74))), g_3[1])))) > g_3[1]), p_54)) >= 0x0213L))
    {
        int *l_94 = &g_3[0];
        int **l_95 = &l_94;
        if ((~g_16))
        {
            int *l_76 = &g_3[2];
            int **l_75 = &l_76;
            int *l_77 = &l_74;
            short *l_83 = &g_84[8][0][0];
            char *l_85 = &g_86;
            (*l_75) = (void*)0;
            (*l_77) = g_3[0];
            (*l_77) &= g_2[4][7][1];
            l_74 = (((((p_53 || ((safe_rshift_func_int8_t_s_u((((*l_85) = (safe_mod_func_int16_t_s_s(((((safe_unary_minus_func_uint32_t_u(l_74)) , (l_74 && p_55)) && g_3[0]) , ((*l_83) = g_3[0])), p_54))) | ((safe_unary_minus_func_int32_t_s(0xA7EABB87L)) || g_3[1])), g_3[0])) , g_84[7][0][0])) != 4UL) >= 0x36L) , p_53) || 0L);
        }
        else
        {
            char *l_89 = &g_86;
            char **l_88 = &l_89;
            char ***l_90[1];
            int *l_93 = &g_3[0];
            int **l_92 = &l_93;
            int i;
            for (i = 0; i < 1; i++)
                l_90[i] = &l_88;
            g_91 = l_88;
            (*l_92) = p_52;
        }
        (*l_95) = l_94;
        (*l_95) = p_52;
    }
    else
    {
        unsigned l_96[5][8][6] = {{{4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}}, {{4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}}, {{4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}}, {{4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}}, {{4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}, {4UL, 0UL, 1UL, 0xC3742197L, 1UL, 0x8777786DL}}};
        short **l_106 = &g_105;
        int l_129 = 0x87753CBCL;
        int *l_131 = &g_110;
        int **l_142 = &l_131;
        int ***l_141 = &l_142;
        int i, j, k;
        if (l_96[0][1][3])
        {
            unsigned l_98 = 4294967288UL;
            if ((p_55 ^ l_74))
            {
                return p_54;
            }
            else
            {
                int *l_97 = &l_74;
                p_52 = &g_3[1];
                (*l_97) = 1L;
            }
            return l_98;
        }
        else
        {
            int *l_103 = &l_74;
            int **l_102 = &l_103;
            for (g_73 = 24; (g_73 != 36); ++g_73)
            {
                int *l_101 = &l_74;
                (*l_101) = g_73;
            }
            (*l_102) = &g_3[0];
            if (p_55)
            {
                unsigned **l_113 = &l_71;
                unsigned *l_114 = &l_96[0][1][3];
                char *l_119 = &g_109;
                short l_126 = (-4L);
                unsigned char *l_127[7][8] = {{&g_128, &g_128, &g_128, &g_128, &g_128, (void*)0, &g_128, (void*)0}, {&g_128, &g_128, &g_128, &g_128, &g_128, (void*)0, &g_128, (void*)0}, {&g_128, &g_128, &g_128, &g_128, &g_128, (void*)0, &g_128, (void*)0}, {&g_128, &g_128, &g_128, &g_128, &g_128, (void*)0, &g_128, (void*)0}, {&g_128, &g_128, &g_128, &g_128, &g_128, (void*)0, &g_128, (void*)0}, {&g_128, &g_128, &g_128, &g_128, &g_128, (void*)0, &g_128, (void*)0}, {&g_128, &g_128, &g_128, &g_128, &g_128, (void*)0, &g_128, (void*)0}};
                int i, j;
                l_106 = g_104[7];
                for (p_54 = 25; (p_54 < (-3)); p_54 = safe_sub_func_uint16_t_u_u(p_54, 8))
                {
                    return l_96[3][1][4];
                }
                g_110 = (g_109 = ((void*)0 != l_103));
                g_130 ^= (safe_add_func_int8_t_s_s((((*l_113) = &g_73) != &g_73), (((*l_114) = p_55) , (safe_lshift_func_uint8_t_u_u((l_129 |= (8UL <= ((safe_mod_func_int8_t_s_s(((*l_119) = (**l_102)), (safe_add_func_int32_t_s_s((g_110 , ((((safe_lshift_func_uint8_t_u_u(((**l_102) <= p_54), (safe_mul_func_uint16_t_u_u(g_16, l_126)))) <= g_84[7][1][0]) > l_126) < l_74)), l_126)))) & p_53))), 1)))));
            }
            else
            {
                (*l_102) = p_52;
                g_110 = p_55;
            }
        }
        (*l_131) = g_84[8][0][0];
        l_129 |= (safe_mul_func_int8_t_s_s((((((safe_sub_func_uint32_t_u_u(0xA1CF38B8L, ((l_74 <= (((safe_add_func_uint32_t_u_u(p_55, ((*l_72) = (safe_unary_minus_func_int16_t_s(0x26C7L))))) < (((g_3[0] && 0xC1375103L) ^ ((*l_131) | (((*l_141) = &l_131) == g_143))) ^ p_53)) , p_53)) > g_16))) & 4294967291UL) != p_55) | (-1L)) || (***l_141)), p_54));
    }
    (*g_144) = l_145;
    (*g_144) |= (p_54 < (g_147 = l_145));
    return l_74;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_2[i][j][k], "g_2[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_3[i], "g_3[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_16, "g_16", print_hash_value);
    transparent_crc(g_73, "g_73", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_84[i][j][k], "g_84[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_86, "g_86", print_hash_value);
    transparent_crc(g_109, "g_109", print_hash_value);
    transparent_crc(g_110, "g_110", print_hash_value);
    transparent_crc(g_128, "g_128", print_hash_value);
    transparent_crc(g_130, "g_130", print_hash_value);
    transparent_crc(g_147, "g_147", print_hash_value);
    transparent_crc(g_176, "g_176", print_hash_value);
    transparent_crc(g_228, "g_228", print_hash_value);
    transparent_crc(g_247, "g_247", print_hash_value);
    transparent_crc(g_263, "g_263", print_hash_value);
    transparent_crc(g_281, "g_281", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_298[i][j][k], "g_298[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_314, "g_314", print_hash_value);
    transparent_crc(g_321, "g_321", print_hash_value);
    transparent_crc(g_403, "g_403", print_hash_value);
    transparent_crc(g_522, "g_522", print_hash_value);
    for (i = 0; i < 3; i++)
    {
        transparent_crc(g_537[i], "g_537[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 1; j++)
        {
            transparent_crc(g_539[i][j], "g_539[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_580, "g_580", print_hash_value);
    transparent_crc(g_584, "g_584", print_hash_value);
    transparent_crc(g_745, "g_745", print_hash_value);
    transparent_crc(g_823, "g_823", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
