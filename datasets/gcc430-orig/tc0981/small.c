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



static unsigned g_6[7][5][3] = {{{0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}}, {{0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}}, {{0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}}, {{0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}}, {{0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}}, {{0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}}, {{0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}, {0x4F4E7975L, 4294967287UL, 0UL}}};
static unsigned long long g_32[3][9] = {{0xC94681C37F5E1753LL, 1UL, 0xC94681C37F5E1753LL, 0x01CEA0262B0969E0LL, 0xD1AD702C910760B9LL, 8UL, 1UL, 1UL, 8UL}, {0xC94681C37F5E1753LL, 1UL, 0xC94681C37F5E1753LL, 0x01CEA0262B0969E0LL, 0xD1AD702C910760B9LL, 8UL, 1UL, 1UL, 8UL}, {0xC94681C37F5E1753LL, 1UL, 0xC94681C37F5E1753LL, 0x01CEA0262B0969E0LL, 0xD1AD702C910760B9LL, 8UL, 1UL, 1UL, 8UL}};
static unsigned long long g_34 = 0x0B2D4AD4463028ECLL;
static short g_37[1] = {0xF16CL};
static short g_59[6] = {0x279CL, 0x279CL, 0x279CL, 0x279CL, 0x279CL, 0x279CL};
static short g_61[4] = {0x1997L, 1L, 0x1997L, 1L};
static int g_64[2] = {0x38BA7019L, 0x38BA7019L};
static int g_68 = 1L;
static unsigned long long *g_74 = &g_34;
static unsigned long long **g_73 = &g_74;
static short *g_79 = &g_61[2];
static int g_113 = 0x8FFC656BL;
static unsigned char g_115 = 255UL;
static unsigned short g_218[9] = {65529UL, 65529UL, 0xCD15L, 65529UL, 65529UL, 0xCD15L, 65529UL, 65529UL, 0xCD15L};
static char g_239 = 0xB6L;
static volatile short g_248 = (-10L);
static unsigned short *g_259 = &g_218[3];
static long long g_277 = 0xE0BE8C19A5450BA3LL;
static long long g_279 = 0x6745701A609B3721LL;
static int *g_337 = &g_64[1];
static unsigned short g_368[2][5] = {{0UL, 65535UL, 0UL, 65535UL, 0UL}, {0UL, 65535UL, 0UL, 65535UL, 0UL}};
static unsigned char g_371 = 0x89L;
static unsigned g_389 = 0xDDEF1034L;
static short ***g_401 = (void*)0;
static unsigned short g_407 = 0x7CC0L;
static long long g_416 = 0x59C74483278865ABLL;
static unsigned long long ***g_422 = &g_73;
static unsigned long long ****g_421[9] = {&g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422};
static char g_456 = 1L;
static unsigned g_501 = 0UL;
static unsigned g_507[5] = {0x26BE1EBEL, 7UL, 0x26BE1EBEL, 7UL, 0x26BE1EBEL};
static unsigned *g_506[7][9] = {{&g_507[2], &g_507[2], &g_507[2], &g_507[0], (void*)0, (void*)0, &g_507[1], &g_507[3], &g_507[1]}, {&g_507[2], &g_507[2], &g_507[2], &g_507[0], (void*)0, (void*)0, &g_507[1], &g_507[3], &g_507[1]}, {&g_507[2], &g_507[2], &g_507[2], &g_507[0], (void*)0, (void*)0, &g_507[1], &g_507[3], &g_507[1]}, {&g_507[2], &g_507[2], &g_507[2], &g_507[0], (void*)0, (void*)0, &g_507[1], &g_507[3], &g_507[1]}, {&g_507[2], &g_507[2], &g_507[2], &g_507[0], (void*)0, (void*)0, &g_507[1], &g_507[3], &g_507[1]}, {&g_507[2], &g_507[2], &g_507[2], &g_507[0], (void*)0, (void*)0, &g_507[1], &g_507[3], &g_507[1]}, {&g_507[2], &g_507[2], &g_507[2], &g_507[0], (void*)0, (void*)0, &g_507[1], &g_507[3], &g_507[1]}};
static unsigned **g_505 = &g_506[6][0];
static char *g_520 = &g_456;
static unsigned *g_582[6] = {&g_501, (void*)0, &g_501, (void*)0, &g_501, (void*)0};
static volatile long long g_625 = 0x24424549D1EA1CDFLL;
static volatile long long *g_624 = &g_625;
static volatile long long **g_623 = &g_624;
static volatile long long ***g_622 = &g_623;
static int *g_636 = &g_113;
static int **g_635 = &g_636;
static unsigned g_642[7][9][1] = {{{0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}}, {{0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}}, {{0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}}, {{0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}}, {{0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}}, {{0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}}, {{0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}, {0x05AA96F9L}}};
static unsigned char *g_650 = &g_115;
static unsigned char **g_649 = &g_650;
static long long g_718 = 5L;
static int **g_724 = &g_636;
static int *g_730 = &g_68;
static unsigned short g_786 = 0x3B41L;
static unsigned long long *g_803[9] = {&g_32[0][2], &g_34, &g_32[0][2], &g_34, &g_32[0][2], &g_34, &g_32[0][2], &g_34, &g_32[0][2]};
static volatile unsigned char g_822 = 0xDAL;
static unsigned g_850[5][8] = {{0x45737D0AL, 0x87B0919DL, 0x45737D0AL, 0x8534C3B2L, 0x676A3A2BL, 2UL, 0UL, 0UL}, {0x45737D0AL, 0x87B0919DL, 0x45737D0AL, 0x8534C3B2L, 0x676A3A2BL, 2UL, 0UL, 0UL}, {0x45737D0AL, 0x87B0919DL, 0x45737D0AL, 0x8534C3B2L, 0x676A3A2BL, 2UL, 0UL, 0UL}, {0x45737D0AL, 0x87B0919DL, 0x45737D0AL, 0x8534C3B2L, 0x676A3A2BL, 2UL, 0UL, 0UL}, {0x45737D0AL, 0x87B0919DL, 0x45737D0AL, 0x8534C3B2L, 0x676A3A2BL, 2UL, 0UL, 0UL}};
static unsigned ***g_898 = &g_505;
static unsigned ****g_897[3][4][2] = {{{&g_898, (void*)0}, {&g_898, (void*)0}, {&g_898, (void*)0}, {&g_898, (void*)0}}, {{&g_898, (void*)0}, {&g_898, (void*)0}, {&g_898, (void*)0}, {&g_898, (void*)0}}, {{&g_898, (void*)0}, {&g_898, (void*)0}, {&g_898, (void*)0}, {&g_898, (void*)0}}};
static volatile short *g_968[9][5] = {{&g_248, (void*)0, &g_248, &g_248, &g_248}, {&g_248, (void*)0, &g_248, &g_248, &g_248}, {&g_248, (void*)0, &g_248, &g_248, &g_248}, {&g_248, (void*)0, &g_248, &g_248, &g_248}, {&g_248, (void*)0, &g_248, &g_248, &g_248}, {&g_248, (void*)0, &g_248, &g_248, &g_248}, {&g_248, (void*)0, &g_248, &g_248, &g_248}, {&g_248, (void*)0, &g_248, &g_248, &g_248}, {&g_248, (void*)0, &g_248, &g_248, &g_248}};
static volatile short **g_967[5][8] = {{(void*)0, &g_968[0][0], &g_968[0][0], &g_968[0][0], (void*)0, &g_968[0][0], (void*)0, &g_968[0][0]}, {(void*)0, &g_968[0][0], &g_968[0][0], &g_968[0][0], (void*)0, &g_968[0][0], (void*)0, &g_968[0][0]}, {(void*)0, &g_968[0][0], &g_968[0][0], &g_968[0][0], (void*)0, &g_968[0][0], (void*)0, &g_968[0][0]}, {(void*)0, &g_968[0][0], &g_968[0][0], &g_968[0][0], (void*)0, &g_968[0][0], (void*)0, &g_968[0][0]}, {(void*)0, &g_968[0][0], &g_968[0][0], &g_968[0][0], (void*)0, &g_968[0][0], (void*)0, &g_968[0][0]}};
static volatile short ***g_966 = &g_967[0][1];
static int g_1043 = 0xB002ACF7L;



static unsigned short func_1(void);
static unsigned func_2(char p_3, unsigned long long p_4, unsigned long long p_5);
static unsigned long long func_9(unsigned char p_10);
static char func_13(unsigned p_14);
static unsigned char func_16(unsigned p_17, unsigned long long p_18);
static unsigned func_25(unsigned p_26, short p_27, short p_28, unsigned long long p_29, char p_30);
static int * func_38(short p_39, int p_40);
static unsigned func_41(unsigned p_42, short * p_43, unsigned long long * p_44, unsigned long long * p_45);
static short * func_46(char p_47, unsigned p_48);
static short * func_49(short * p_50, short * p_51, unsigned long long * p_52);
static unsigned short func_1(void)
{
    char l_15 = 0x78L;
    unsigned long long *l_31 = &g_32[1][8];
    unsigned long long *l_33 = &g_34;
    int l_35[5] = {0x0438315EL, 0x58D3B3E2L, 0x0438315EL, 0x58D3B3E2L, 0x0438315EL};
    short *l_36 = &g_37[0];
    unsigned *l_648 = &g_389;
    unsigned l_1015 = 4294967289UL;
    int **l_1019 = &g_337;
    unsigned **l_1020 = (void*)0;
    unsigned l_1042 = 0xD2F6DEE5L;
    char l_1044 = 5L;
    int l_1049 = 0x6A254DCAL;
    int i;
    if ((func_2(g_6[1][2][0], (65530UL >= (safe_sub_func_int8_t_s_s(0xCBL, (func_9((safe_mul_func_int8_t_s_s(func_13(((-4L) && (((*l_648) = ((((l_15 ^ func_16(g_6[1][2][0], ((l_15 >= (((*l_36) |= ((safe_mul_func_int16_t_s_s((l_35[2] |= (((*l_33) = ((*l_31) = ((safe_mod_func_uint8_t_u_u((safe_sub_func_int32_t_s_s(l_15, func_25(g_6[1][2][0], g_6[1][2][0], l_15, g_6[1][0][0], g_6[1][2][0]))), 255UL)) <= g_6[4][0][0]))) == g_6[1][2][0])), 7L)) || 0x2B63L)) < g_6[4][3][1])) <= g_6[1][2][0]))) || l_35[3]) >= g_368[0][1]) == l_15)) > g_501))), l_15))) > l_15)))), l_15) <= 4294967295UL))
    {
        char l_959 = 0x7EL;
        l_959 = (-2L);
    }
    else
    {
        short ***l_964 = (void*)0;
        int l_969 = 0x20C4054EL;
        short **l_978 = &g_79;
        int l_981 = 0L;
        for (g_115 = 0; (g_115 <= 1); g_115 += 1)
        {
            short l_979[7][6] = {{0x2C6BL, 4L, 0L, (-1L), 0L, (-8L)}, {0x2C6BL, 4L, 0L, (-1L), 0L, (-8L)}, {0x2C6BL, 4L, 0L, (-1L), 0L, (-8L)}, {0x2C6BL, 4L, 0L, (-1L), 0L, (-8L)}, {0x2C6BL, 4L, 0L, (-1L), 0L, (-8L)}, {0x2C6BL, 4L, 0L, (-1L), 0L, (-8L)}, {0x2C6BL, 4L, 0L, (-1L), 0L, (-8L)}};
            int l_991[9] = {0x3734D29EL, 0x89ED6CA0L, 0x3734D29EL, 0x89ED6CA0L, 0x3734D29EL, 0x89ED6CA0L, 0x3734D29EL, 0x89ED6CA0L, 0x3734D29EL};
            unsigned short l_1000 = 0xF9EDL;
            unsigned short **l_1012 = &g_259;
            unsigned short ***l_1011 = &l_1012;
            int l_1017 = 0x76A053D3L;
            unsigned l_1030 = 2UL;
            int l_1037 = 0xB23200A5L;
            unsigned long long l_1041[3][5][3] = {{{18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}}, {{18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}}, {{18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}, {18446744073709551615UL, 18446744073709551615UL, 0x6FA04855A1CB13C9LL}}};
            int l_1045 = 1L;
            unsigned char **l_1046[10] = {&g_650, &g_650, &g_650, &g_650, &g_650, &g_650, &g_650, &g_650, &g_650, &g_650};
            unsigned char ***l_1047 = (void*)0;
            unsigned char ***l_1048 = &g_649;
            int i, j, k;
        }
        l_1049 = 0xAC46B25DL;
    }
    for (l_1042 = 0; (l_1042 < 36); l_1042 = safe_add_func_uint32_t_u_u(l_1042, 3))
    {
        unsigned l_1052 = 4294967295UL;
        short *l_1056 = &g_61[1];
        int l_1066 = 6L;
        unsigned long long *l_1074 = &g_32[0][1];
        int *l_1077 = &g_64[1];
    }
    return (*g_259);
}







static unsigned func_2(char p_3, unsigned long long p_4, unsigned long long p_5)
{
    char l_957 = 0x60L;
    int *l_958 = &g_113;
    (*g_730) = l_957;
    (*g_730) = l_957;
    (*g_724) = l_958;
    l_958 = ((*g_724) = (void*)0);
    return p_5;
}







static unsigned long long func_9(unsigned char p_10)
{
    long long l_808 = (-10L);
    int l_809[6][9] = {{0xD8A3D08FL, 0xB0AE9BDFL, 7L, (-1L), 0x6BAA1D83L, (-9L), 0x6BAA1D83L, (-1L), 7L}, {0xD8A3D08FL, 0xB0AE9BDFL, 7L, (-1L), 0x6BAA1D83L, (-9L), 0x6BAA1D83L, (-1L), 7L}, {0xD8A3D08FL, 0xB0AE9BDFL, 7L, (-1L), 0x6BAA1D83L, (-9L), 0x6BAA1D83L, (-1L), 7L}, {0xD8A3D08FL, 0xB0AE9BDFL, 7L, (-1L), 0x6BAA1D83L, (-9L), 0x6BAA1D83L, (-1L), 7L}, {0xD8A3D08FL, 0xB0AE9BDFL, 7L, (-1L), 0x6BAA1D83L, (-9L), 0x6BAA1D83L, (-1L), 7L}, {0xD8A3D08FL, 0xB0AE9BDFL, 7L, (-1L), 0x6BAA1D83L, (-9L), 0x6BAA1D83L, (-1L), 7L}};
    unsigned short ***l_818 = (void*)0;
    int l_849 = 0x1967288DL;
    unsigned long long l_870 = 18446744073709551614UL;
    unsigned long long ****l_878 = (void*)0;
    short l_879 = (-1L);
    long long l_918 = 6L;
    short *l_951 = &g_37[0];
    int i, j;
    (*g_730) &= (-4L);
    for (p_10 = 0; (p_10 <= 8); p_10 += 1)
    {
        char l_807[3];
        short l_848 = 0x4378L;
        int l_851 = 1L;
        unsigned long long **l_856[7];
        unsigned long long *l_859 = &g_34;
        unsigned long long *****l_863 = &g_421[3];
        unsigned long long *****l_865 = (void*)0;
        int l_887 = 1L;
        int l_903 = 1L;
        unsigned short *l_933 = (void*)0;
        int l_946[4][4] = {{(-10L), 1L, (-8L), 1L}, {(-10L), 1L, (-8L), 1L}, {(-10L), 1L, (-8L), 1L}, {(-10L), 1L, (-8L), 1L}};
        int i, j;
        for (i = 0; i < 3; i++)
            l_807[i] = 0x7BL;
        for (i = 0; i < 7; i++)
            l_856[i] = &g_74;
        if (l_807[0])
            break;
        (*g_730) = (l_809[4][1] = l_808);
        for (g_416 = 3; (g_416 <= 8); g_416 += 1)
        {
            int l_823[8][6][1] = {{{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}, {{(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}, {(-6L)}}};
            int l_860 = (-9L);
            int i, j, k;
            (*g_730) ^= ((*g_624) | p_10);
            for (g_113 = 5; (g_113 >= 0); g_113 -= 1)
            {
                int l_821[7][10] = {{(-3L), 0L, 0L, 0x96B7BBEEL, 0x0FF08450L, 0x96B7BBEEL, 0L, 0L, (-3L), 0x9153BC11L}, {(-3L), 0L, 0L, 0x96B7BBEEL, 0x0FF08450L, 0x96B7BBEEL, 0L, 0L, (-3L), 0x9153BC11L}, {(-3L), 0L, 0L, 0x96B7BBEEL, 0x0FF08450L, 0x96B7BBEEL, 0L, 0L, (-3L), 0x9153BC11L}, {(-3L), 0L, 0L, 0x96B7BBEEL, 0x0FF08450L, 0x96B7BBEEL, 0L, 0L, (-3L), 0x9153BC11L}, {(-3L), 0L, 0L, 0x96B7BBEEL, 0x0FF08450L, 0x96B7BBEEL, 0L, 0L, (-3L), 0x9153BC11L}, {(-3L), 0L, 0L, 0x96B7BBEEL, 0x0FF08450L, 0x96B7BBEEL, 0L, 0L, (-3L), 0x9153BC11L}, {(-3L), 0L, 0L, 0x96B7BBEEL, 0x0FF08450L, 0x96B7BBEEL, 0L, 0L, (-3L), 0x9153BC11L}};
                int i, j;
                (*g_730) = (safe_lshift_func_uint8_t_u_s(0xB7L, (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_lshift_func_uint16_t_u_s(p_10, 9)), ((((!((void*)0 != l_818)) || (~((safe_sub_func_uint16_t_u_u((0x171C1CFB4DFED1ABLL ^ ((-1L) <= (((**g_649) ^= l_821[5][4]) || ((p_10 & (~0x5395L)) || (-5L))))), 65532UL)) != p_10))) && 0x4C60860CL) ^ g_822))), l_807[0]))));
                if (l_808)
                    break;
                if (((*g_730) = (*g_730)))
                {
                    for (g_456 = 5; (g_456 >= 2); g_456 -= 1)
                    {
                        int i, j;
                        l_809[g_113][g_416] |= 0x2C6F4373L;
                        return p_10;
                    }
                    (*g_724) = &l_809[1][1];
                }
                else
                {
                    unsigned char l_830 = 0x5FL;
                    short *l_857[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_857[i] = &g_61[3];
                    for (g_115 = 2; (g_115 <= 8); g_115 += 1)
                    {
                        unsigned l_847 = 7UL;
                        (*g_730) |= l_823[0][0][0];
                        l_823[0][0][0] |= (((safe_add_func_int8_t_s_s((!(safe_lshift_func_int16_t_s_u(p_10, 2))), 3UL)) & (safe_sub_func_uint8_t_u_u((((((*g_520) = (l_830 | (((safe_lshift_func_int8_t_s_u(func_25((((p_10 <= (safe_add_func_int8_t_s_s((((safe_mul_func_uint8_t_u_u(((safe_sub_func_uint16_t_u_u(((((*g_520) = 3L) && (safe_sub_func_uint32_t_u_u(((func_25((l_809[4][1] | (safe_rshift_func_int16_t_s_u((safe_add_func_int16_t_s_s(((*g_79) = (safe_mod_func_int8_t_s_s((*g_520), (0xB56388EEA2E3D8F1LL || p_10)))), 0UL)), (*g_259)))), l_821[1][6], l_807[2], p_10, l_830) ^ p_10) >= l_807[0]), (*g_730)))) <= l_807[0]), 5UL)) | p_10), l_807[0])) < l_847) <= l_848), 0L))) && (-8L)) ^ l_847), l_808, p_10, l_849, p_10), 2)) && 0xEB70D13BE538EDBBLL) >= p_10))) < 5L) >= g_850[0][2]) > l_807[0]), 0L))) & 252UL);
                    }
                    for (l_849 = 8; (l_849 >= 1); l_849 -= 1)
                    {
                        unsigned long long *l_858 = &g_34;
                        (*g_730) = func_41(((l_851 = func_25(p_10, (*g_79), p_10, l_808, ((*g_520) &= p_10))) <= (safe_sub_func_uint32_t_u_u((safe_sub_func_uint8_t_u_u(0UL, ((&g_803[g_416] == (l_856[4] = (*g_422))) < 65535UL))), l_807[0]))), l_857[1], l_858, l_859);
                        (*g_724) = &l_823[0][0][0];
                        (*g_636) &= p_10;
                        if (p_10)
                            continue;
                    }
                }
                l_823[0][0][0] ^= l_821[5][4];
            }
            (*g_724) = &l_823[0][0][0];
            for (g_786 = 0; (g_786 <= 8); g_786 += 1)
            {
                unsigned long long ******l_864 = &l_863;
                int l_873 = 0xEDC7F9B0L;
                int l_880 = 0xE7EAE31CL;
                unsigned char *l_892[9][10];
                unsigned ****l_900 = &g_898;
                unsigned *****l_899 = &l_900;
                int i, j;
                for (i = 0; i < 9; i++)
                {
                    for (j = 0; j < 10; j++)
                        l_892[i][j] = &g_371;
                }
                if (((*g_636) = (func_41(l_860, &l_848, (*g_73), g_803[g_416]) > (((*g_520) = (1L ^ ((((p_10 ^ (safe_sub_func_uint16_t_u_u(p_10, (((*l_864) = l_863) == l_865)))) < l_807[0]) ^ 0x08L) | p_10))) ^ p_10))))
                {
                    (*g_730) = (safe_mul_func_int8_t_s_s((*g_520), (((void*)0 == &g_456) >= (safe_add_func_uint32_t_u_u(p_10, (*g_636))))));
                }
                else
                {
                    if (l_870)
                        break;
                }
                for (g_239 = 0; (g_239 <= 8); g_239 += 1)
                {
                    short *l_883 = &l_848;
                    if ((safe_mod_func_int64_t_s_s((l_873 != (l_880 = ((l_807[2] || ((safe_lshift_func_uint8_t_u_u(((*g_259) ^ (((*g_624) | 7L) <= (l_823[1][5][0] |= ((void*)0 == &g_649)))), (p_10 ^ (safe_lshift_func_uint8_t_u_u(((void*)0 != l_878), 5))))) == l_879)) || p_10))), p_10)))
                    {
                        unsigned long long *l_884[1][10][7] = {{{&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}, {&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}, {&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}, {&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}, {&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}, {&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}, {&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}, {&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}, {&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}, {&g_34, (void*)0, &g_32[0][4], (void*)0, &l_870, &l_870, &g_34}}};
                        int l_886 = 2L;
                        int i, j, k;
                        l_887 &= (safe_sub_func_int32_t_s_s(func_41(p_10, l_883, l_884[0][6][5], l_884[0][2][1]), func_25(l_809[4][1], (*g_79), (~(*g_79)), (((safe_unary_minus_func_int8_t_s(0x26L)) && l_886) > l_823[0][0][0]), l_880)));
                        if (p_10)
                            continue;
                        (*g_635) = &l_823[7][3][0];
                    }
                    else
                    {
                        (*g_724) = &l_880;
                        (*g_635) = (*g_724);
                        (*g_636) |= (l_809[2][4] = l_823[0][0][0]);
                        return l_873;
                    }
                }
                l_880 &= (safe_add_func_int32_t_s_s((safe_mod_func_uint8_t_u_u(((*g_650) = p_10), (l_887 |= l_870))), ((((safe_mod_func_int16_t_s_s(l_873, (*g_259))) && (18446744073709551613UL < ((((l_823[0][0][0] = (((safe_mul_func_int16_t_s_s((((((*l_899) = (g_897[1][0][0] = g_897[0][2][1])) == &g_898) || ((0xD8L | (*g_520)) <= p_10)) > (*g_259)), l_823[0][0][0])) && l_809[4][1]) ^ l_807[0])) || p_10) || 4294967295UL) || 0x9969L))) == 0x69L) ^ 0x96L)));
                l_887 &= 0xE60EFFFDL;
            }
        }
        for (l_808 = 0; (l_808 <= 8); l_808 += 1)
        {
            int l_912 = 0x54F1593CL;
            short *l_947[8][3] = {{&g_59[3], &g_59[3], &g_61[3]}, {&g_59[3], &g_59[3], &g_61[3]}, {&g_59[3], &g_59[3], &g_61[3]}, {&g_59[3], &g_59[3], &g_61[3]}, {&g_59[3], &g_59[3], &g_61[3]}, {&g_59[3], &g_59[3], &g_61[3]}, {&g_59[3], &g_59[3], &g_61[3]}, {&g_59[3], &g_59[3], &g_61[3]}};
            int i, j;
            l_809[4][1] |= ((safe_mod_func_int16_t_s_s(l_807[2], 0x1712L)) && (0x35E8B7C0EA97337CLL != l_903));
            for (g_416 = 8; (g_416 >= 3); g_416 -= 1)
            {
                int l_917 = 0x41CB444FL;
                unsigned long long *****l_944 = &l_878;
                for (g_239 = 0; (g_239 <= 0); g_239 += 1)
                {
                    int i, j, k;
                    if (((safe_rshift_func_int16_t_s_u(((safe_lshift_func_uint16_t_u_s(func_25(g_64[(g_239 + 1)], g_64[(g_239 + 1)], (+g_642[(g_239 + 4)][l_808][g_239]), ((safe_lshift_func_uint16_t_u_s(g_642[(g_239 + 6)][(g_239 + 4)][g_239], (+(safe_sub_func_uint16_t_u_u((func_25((g_507[(g_239 + 3)] |= (l_912 <= (0x7C52708B1E72A962LL & func_25(((((p_10 <= (safe_mod_func_int16_t_s_s(((safe_rshift_func_int16_t_s_s((*g_79), 5)) | p_10), l_879))) < 0xBCL) | l_851) && p_10), g_642[(g_239 + 6)][(g_239 + 4)][g_239], p_10, l_912, l_917)))), l_918, p_10, p_10, p_10) || g_642[(g_239 + 6)][(g_239 + 4)][g_239]), 65535UL))))) | l_917), p_10), p_10)) > l_912), (*g_259))) != l_917))
                    {
                        unsigned short **l_934 = &g_259;
                        int l_935[2][9][1] = {{{0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}}, {{0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}, {0x085C38FDL}}};
                        unsigned char *l_936 = &g_371;
                        unsigned long long *****l_943 = &g_421[4];
                        unsigned *l_945 = &g_389;
                        int i, j, k;
                        (*g_730) &= (((l_887 = ((safe_lshift_func_uint16_t_u_s(p_10, (((safe_mul_func_uint8_t_u_u((g_64[(g_239 + 1)] ^= ((*l_936) = ((**g_649) = ((((((0x968C6B2DL <= func_25(p_10, ((1UL <= (p_10 < ((safe_lshift_func_uint16_t_u_s((safe_rshift_func_uint8_t_u_u((safe_sub_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(p_10, 11)), p_10)), 5)), 13)) < (l_933 == ((*l_934) = &g_218[7]))))) == l_935[0][7][0]), (*g_79), p_10, g_507[(g_239 + 3)])) <= 0xDE3B46327EBE258DLL) > (*g_520)) <= l_879) <= p_10) | l_917)))), 0xBCL)) <= g_61[3]) & l_808))) >= 0L)) && 0x2F564D72L) | p_10);
                        if (l_879)
                            break;
                        if (l_809[4][5])
                            continue;
                        l_935[0][7][0] = ((~(safe_rshift_func_uint8_t_u_s(0xE5L, (p_10 <= (p_10 == ((l_946[3][0] = (l_887 ^= ((((*l_945) = (safe_rshift_func_int8_t_s_s(g_64[(g_239 + 1)], (safe_mod_func_int16_t_s_s(p_10, ((-5L) & (((*g_79) = ((***g_622) < ((((l_943 == l_944) && l_917) || l_912) >= (*g_730)))) >= g_368[1][0]))))))) & 0x44D2CD66L) == (*g_520)))) ^ 0x6886D8EEL)))))) ^ 0x5BL);
                    }
                    else
                    {
                        short **l_950[5][8][6] = {{{&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}}, {{&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}}, {{&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}}, {{&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}}, {{&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}, {&g_79, &g_79, &l_947[5][1], (void*)0, &g_79, &l_947[5][0]}}};
                        int i, j, k;
                        (*g_730) = ((func_41(l_946[3][0], l_947[0][1], (*g_73), g_803[l_808]) & (p_10 | (*g_624))) != l_912);
                        (*g_730) = (safe_rshift_func_int16_t_s_u((func_41(p_10, func_49((l_951 = &l_848), &l_848, (*g_73)), g_803[l_808], (*g_73)) <= (p_10 <= 0x94B0C695L)), 6));
                        g_64[(g_239 + 1)] = (*g_730);
                    }
                }
                l_809[2][3] = (safe_add_func_int8_t_s_s(((void*)0 != (*g_649)), 0UL));
                if (((&l_912 == (void*)0) <= l_849))
                {
                    unsigned long long *l_954 = &g_32[1][8];
                    int *l_955[2];
                    char l_956 = 8L;
                    int i;
                    for (i = 0; i < 2; i++)
                        l_955[i] = (void*)0;
                    l_809[0][2] |= ((*g_730) = func_41(l_912, l_947[3][0], (*g_73), l_954));
                    return l_956;
                }
                else
                {
                    (*g_730) = ((p_10 != l_917) <= p_10);
                }
            }
            if (p_10)
                continue;
        }
    }
    return p_10;
}







static char func_13(unsigned p_14)
{
    unsigned char ***l_651 = &g_649;
    unsigned char **l_653 = &g_650;
    unsigned char ***l_652 = &l_653;
    unsigned char **l_655 = &g_650;
    unsigned char ***l_654 = &l_655;
    int *l_656 = &g_64[1];
    short *l_668 = (void*)0;
    unsigned long long *l_677 = &g_32[0][1];
    long long *l_689[9] = {&g_279, &g_277, &g_279, &g_277, &g_279, &g_277, &g_279, &g_277, &g_279};
    long long **l_688 = &l_689[1];
    unsigned l_717[7] = {1UL, 0UL, 1UL, 0UL, 1UL, 0UL, 1UL};
    int ***l_723[3];
    unsigned long long l_729 = 0x0766668B43416FD1LL;
    unsigned **l_799 = &g_582[4];
    unsigned short l_806 = 65535UL;
    int i;
    for (i = 0; i < 3; i++)
        l_723[i] = &g_635;
    if ((((*l_652) = ((*l_651) = g_649)) != ((*l_654) = &g_650)))
    {
        unsigned short *l_667 = &g_368[0][1];
        short **l_669 = &l_668;
        unsigned long long *l_670 = (void*)0;
        int l_671 = 0x7CF0EF51L;
        (*g_635) = l_656;
        for (g_277 = 0; (g_277 <= 20); g_277++)
        {
            return (*l_656);
        }
        (**g_635) = (safe_sub_func_uint32_t_u_u(((((**g_635) <= (safe_sub_func_int32_t_s_s(5L, p_14))) < (safe_mod_func_int8_t_s_s(((*g_520) &= p_14), func_41(((safe_mod_func_uint16_t_u_u((*g_259), ((*l_667) = p_14))) == (**g_635)), ((*l_669) = l_668), l_670, l_670)))) ^ 0xBFL), (*l_656)));
        l_671 &= (*g_636);
    }
    else
    {
        short *l_674[10][5] = {{(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}, {(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}, {(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}, {(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}, {(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}, {(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}, {(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}, {(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}, {(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}, {(void*)0, &g_59[0], (void*)0, &g_61[2], &g_37[0]}};
        short **l_675 = (void*)0;
        short **l_676 = &l_674[3][4];
        short ***l_678 = &l_675;
        int l_679 = 0x65436B7AL;
        long long **l_690 = &l_689[1];
        unsigned long long *l_699 = &g_34;
        int l_700[1];
        int i, j;
        for (i = 0; i < 1; i++)
            l_700[i] = 0x8FE94F16L;
        if ((safe_mul_func_int8_t_s_s(func_41((p_14 = (*l_656)), ((*l_676) = l_674[6][4]), (**g_422), l_677), func_25((((*l_678) = &g_79) != &l_668), (*l_656), (*g_79), l_679, (*g_520)))))
        {
            for (g_416 = 7; (g_416 == (-10)); --g_416)
            {
                return (*g_520);
            }
        }
        else
        {
            int l_691 = 0x68F6EF93L;
            short *l_696 = &g_37[0];
            unsigned long long *l_697 = &g_34;
            unsigned *l_698 = &g_642[2][0][0];
            int *l_701 = &g_113;
            (*g_337) = ((safe_add_func_int16_t_s_s(p_14, 6L)) == (**g_649));
            (*g_635) = func_38(l_679, (safe_mod_func_int8_t_s_s((safe_add_func_int64_t_s_s(p_14, p_14)), (l_679 & ((*g_337) = ((*g_624) > ((*l_677) = (l_688 == l_690))))))));
            (*g_635) = &l_679;
            (*l_701) ^= (safe_mul_func_uint8_t_u_u(p_14, ((((*l_656) != (~1UL)) >= (func_41(((*l_698) ^= (safe_add_func_int64_t_s_s(l_691, ((((-7L) & (*l_656)) || ((l_679 &= (-1L)) < func_41(p_14, l_696, l_697, (**g_422)))) && 0x979FL)))), &g_59[2], l_699, (**g_422)) ^ (**g_623))) != l_700[0])));
        }
        for (g_239 = 0; (g_239 >= (-25)); g_239 = safe_sub_func_uint16_t_u_u(g_239, 5))
        {
            int l_708[5];
            int *l_719 = &g_68;
            int i;
            for (i = 0; i < 5; i++)
                l_708[i] = 0xFBBED41BL;
            (*l_719) |= (safe_add_func_uint16_t_u_u(((((safe_mod_func_int64_t_s_s(((**l_688) = 0x32B4419068058C9DLL), ((*l_656) ^= l_700[0]))) | l_708[4]) | ((safe_sub_func_uint16_t_u_u(p_14, ((void*)0 == &g_422))) >= (((*g_650) = ((safe_sub_func_int16_t_s_s(0xFE10L, (((*l_699) = (safe_add_func_int32_t_s_s(func_25((!(safe_add_func_uint8_t_u_u(0x01L, (l_717[3] & 0L)))), p_14, p_14, l_679, g_718), p_14))) > p_14))) < l_708[4])) != (*g_520)))) ^ l_708[4]), 65535UL));
            (*g_635) = &l_708[4];
        }
        l_679 = p_14;
        for (g_68 = 0; (g_68 >= 17); g_68 = safe_add_func_uint8_t_u_u(g_68, 4))
        {
            unsigned *l_722 = &g_507[1];
            l_679 = ((void*)0 != l_722);
            (*g_635) = &l_700[0];
            (*g_635) = &l_700[0];
        }
    }
    g_730 = ((*g_635) = &g_68);
    (*l_656) = ((*g_730) = ((void*)0 != (*g_622)));
    for (g_239 = 27; (g_239 > (-14)); --g_239)
    {
        short **l_738 = (void*)0;
        short ***l_737[3][10][4] = {{{&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}}, {{&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}}, {{&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}, {&l_738, &l_738, &l_738, &l_738}}};
        int l_744 = 0xB4362C5EL;
        unsigned l_752 = 1UL;
        unsigned **l_798 = (void*)0;
        unsigned long long *l_804[8] = {(void*)0, (void*)0, &g_32[2][3], (void*)0, (void*)0, &g_32[2][3], (void*)0, (void*)0};
        int l_805 = 0xF81D6705L;
        int i, j, k;
        for (g_34 = 0; (g_34 >= 47); g_34 = safe_add_func_int64_t_s_s(g_34, 6))
        {
            unsigned long long *l_749 = &g_32[1][8];
            int l_764 = 4L;
            int *l_769 = &g_68;
            unsigned long long *l_774[7][4] = {{&g_32[0][8], &g_32[0][8], &l_729, &g_32[0][4]}, {&g_32[0][8], &g_32[0][8], &l_729, &g_32[0][4]}, {&g_32[0][8], &g_32[0][8], &l_729, &g_32[0][4]}, {&g_32[0][8], &g_32[0][8], &l_729, &g_32[0][4]}, {&g_32[0][8], &g_32[0][8], &l_729, &g_32[0][4]}, {&g_32[0][8], &g_32[0][8], &l_729, &g_32[0][4]}, {&g_32[0][8], &g_32[0][8], &l_729, &g_32[0][4]}};
            int l_780[7][10][3] = {{{0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}}, {{0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}}, {{0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}}, {{0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}}, {{0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}}, {{0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}}, {{0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}, {0x277F3D7FL, 2L, 0xE5A530ECL}}};
            int l_794 = 1L;
            int i, j, k;
            for (l_729 = 0; (l_729 < 39); l_729 = safe_add_func_uint64_t_u_u(l_729, 6))
            {
                short ****l_739 = &l_737[0][8][3];
                (*l_656) = (*g_730);
                (*l_656) ^= ((g_401 == ((*l_739) = l_737[1][0][3])) > 0L);
            }
            for (l_729 = 0; (l_729 > 34); ++l_729)
            {
                char l_751[4] = {(-4L), 0xC6L, (-4L), 0xC6L};
                int *l_768 = (void*)0;
                short *l_802[1];
                int i;
                for (i = 0; i < 1; i++)
                    l_802[i] = &g_61[3];
                for (g_501 = (-1); (g_501 > 3); g_501 = safe_add_func_uint16_t_u_u(g_501, 5))
                {
                    char l_747 = 1L;
                    short *l_748 = &g_37[0];
                    unsigned long long **l_750 = &l_677;
                    int **l_761 = &g_730;
                    (*l_656) ^= (l_744 ^ (safe_mul_func_uint16_t_u_u(((*g_79) <= func_25(l_747, func_41(l_747, l_748, (**g_422), ((*l_750) = (l_749 = &l_729))), (!l_747), p_14, l_751[0])), l_752)));
                    for (g_115 = 0; (g_115 != 10); g_115 = safe_add_func_int32_t_s_s(g_115, 1))
                    {
                        unsigned ***l_757 = &g_505;
                        unsigned ***l_759 = &g_505;
                        unsigned ****l_758 = &l_759;
                        int l_760 = 0x2CFF1D72L;
                        l_744 = (((+(safe_add_func_uint16_t_u_u(l_747, (l_757 == ((*l_758) = &g_505))))) & func_25((((*l_656) = (-1L)) != (p_14 == p_14)), l_760, (*g_79), p_14, l_751[0])) ^ l_752);
                        (**l_761) &= ((void*)0 != l_761);
                        (*l_656) = p_14;
                    }
                }
                for (g_279 = 0; (g_279 >= 0); g_279 -= 1)
                {
                    unsigned short l_770[9] = {65535UL, 65535UL, 0xC35CL, 65535UL, 65535UL, 0xC35CL, 65535UL, 65535UL, 0xC35CL};
                    short *l_773 = &g_61[3];
                    int l_776 = 0x873F8E37L;
                    int i;
                    if ((*g_730))
                    {
                        unsigned **l_767 = &g_582[4];
                        int l_771[7][7] = {{(-2L), (-1L), 3L, (-1L), (-2L), (-1L), 3L}, {(-2L), (-1L), 3L, (-1L), (-2L), (-1L), 3L}, {(-2L), (-1L), 3L, (-1L), (-2L), (-1L), 3L}, {(-2L), (-1L), 3L, (-1L), (-2L), (-1L), 3L}, {(-2L), (-1L), 3L, (-1L), (-2L), (-1L), 3L}, {(-2L), (-1L), 3L, (-1L), (-2L), (-1L), 3L}, {(-2L), (-1L), 3L, (-1L), (-2L), (-1L), 3L}};
                        unsigned *l_772 = &g_507[2];
                        unsigned long long *l_775 = &g_32[2][0];
                        int i, j;
                        (*l_656) ^= p_14;
                        (*l_656) = ((safe_lshift_func_uint8_t_u_s(l_764, 3)) && ((((**g_649) &= 6UL) > (&g_636 != (void*)0)) | (&g_6[0][3][2] != ((*l_767) = &g_389))));
                        l_769 = ((*g_724) = l_768);
                        (*g_730) = (l_770[7] <= func_41(((*l_772) = (l_770[7] == l_771[2][4])), l_773, l_774[1][2], l_775));
                    }
                    else
                    {
                        l_776 ^= ((*g_730) = ((*l_656) &= 0xE8095E9CL));
                    }
                }
                for (g_371 = (-17); (g_371 == 33); g_371 = safe_add_func_uint32_t_u_u(g_371, 3))
                {
                    unsigned short l_785 = 65535UL;
                    for (g_456 = 8; (g_456 >= 0); g_456 -= 1)
                    {
                        unsigned l_779 = 18446744073709551615UL;
                        unsigned *l_795 = &g_501;
                        l_780[6][0][0] = l_779;
                        (*l_656) ^= (safe_mul_func_int16_t_s_s((p_14 & ((safe_mul_func_uint8_t_u_u(l_785, (**g_649))) >= (p_14 > (*g_520)))), func_25(g_786, (safe_add_func_int64_t_s_s(((l_744 & ((*l_795) = (safe_unary_minus_func_int64_t_s(((safe_mul_func_uint16_t_u_u((safe_add_func_uint16_t_u_u((func_25(func_25(((p_14 & p_14) >= p_14), p_14, p_14, l_785, p_14), (*g_79), (*g_79), p_14, l_794) > (-8L)), p_14)), (-1L))) && 0UL))))) | l_779), p_14)), p_14, l_785, p_14)));
                    }
                    (*l_656) = p_14;
                    if ((+(l_805 &= (safe_mul_func_uint16_t_u_u(((*g_520) <= (l_798 != l_799)), ((*g_79) = ((safe_add_func_int32_t_s_s(p_14, (func_41(l_744, l_668, g_803[5], l_804[6]) || (*l_656)))) ^ p_14)))))))
                    {
                        l_769 = (void*)0;
                    }
                    else
                    {
                        if (p_14)
                            break;
                        if ((*g_730))
                            break;
                        (*g_635) = (void*)0;
                    }
                }
            }
        }
        for (g_34 = 1; (g_34 <= 7); g_34 += 1)
        {
            return (*g_520);
        }
        if (l_744)
            break;
    }
    return l_806;
}







static unsigned char func_16(unsigned p_17, unsigned long long p_18)
{
    short *l_53 = &g_37[0];
    unsigned long long *l_54[4][2][5] = {{{&g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8]}, {&g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8]}}, {{&g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8]}, {&g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8]}}, {{&g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8]}, {&g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8]}}, {{&g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8]}, {&g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8], &g_32[1][8]}}};
    short **l_65 = &l_53;
    int l_305[5];
    int **l_441 = &g_337;
    short *l_444 = &g_61[0];
    unsigned long long *l_448 = &g_32[1][8];
    unsigned char l_465 = 0x0FL;
    unsigned long long *l_517 = &g_32[1][8];
    unsigned long long ****l_566 = &g_422;
    unsigned l_588 = 0UL;
    int **l_638 = (void*)0;
    short l_643 = (-6L);
    long long *l_646 = &g_279;
    long long **l_645 = &l_646;
    long long ***l_644 = &l_645;
    int l_647[9] = {0x3FFD5316L, 0x12FA117FL, 0x3FFD5316L, 0x12FA117FL, 0x3FFD5316L, 0x12FA117FL, 0x3FFD5316L, 0x12FA117FL, 0x3FFD5316L};
    int i, j, k;
    for (i = 0; i < 5; i++)
        l_305[i] = 0x977314DBL;
    (*l_441) = func_38(func_25(func_41(g_37[0], func_46((((*l_65) = func_49(l_53, &g_37[0], l_54[1][0][3])) != &g_61[0]), g_61[2]), l_54[1][0][3], g_74), (*g_79), p_17, p_17, l_305[1]), l_305[1]);
    for (p_17 = 0; (p_17 >= 36); p_17 = safe_add_func_uint16_t_u_u(p_17, 8))
    {
        unsigned long long *l_445 = &g_34;
        unsigned long long *l_447 = &g_34;
        unsigned long long **l_446[10][10] = {{&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}, {&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}, {&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}, {&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}, {&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}, {&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}, {&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}, {&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}, {&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}, {&l_445, &l_447, (void*)0, &l_447, &l_54[1][0][4], &l_54[1][0][3], &l_54[1][0][4], &l_447, (void*)0, &l_447}};
        int i, j;
        (*l_441) = func_38(((func_41((+0x524075B9L), l_444, l_54[1][0][3], l_445) <= 0UL) | (g_61[2] && ((l_448 = ((**g_422) = (void*)0)) == (void*)0))), (**l_441));
    }
    for (g_239 = 4; (g_239 >= 0); g_239 -= 1)
    {
        char *l_455 = &g_456;
        unsigned short **l_459 = &g_259;
        unsigned long long *l_469 = &g_32[1][8];
        int l_513 = 1L;
        unsigned *l_525 = &g_507[2];
        unsigned *l_526 = (void*)0;
        unsigned *l_527[2];
        int i;
        for (i = 0; i < 2; i++)
            l_527[i] = &g_501;
        if ((safe_rshift_func_int16_t_s_s(((-4L) & ((safe_mod_func_int8_t_s_s(((*l_455) = (2UL < (safe_add_func_int16_t_s_s(g_59[g_239], g_59[g_239])))), 3L)) && (**l_441))), 0)))
        {
            unsigned short **l_458 = &g_259;
            unsigned short ***l_457 = &l_458;
            unsigned char *l_461 = &g_115;
            unsigned char **l_460 = &l_461;
            int *l_462 = &l_305[1];
            (*l_441) = &g_64[0];
            for (g_115 = 1; (g_115 <= 5); g_115 += 1)
            {
                for (g_371 = 2; (g_371 <= 8); g_371 += 1)
                {
                    int i;
                    return g_218[(g_115 + 2)];
                }
                for (g_407 = 0; (g_407 <= 5); g_407 += 1)
                {
                    for (g_389 = 1; (g_389 <= 5); g_389 += 1)
                    {
                        int i;
                        return g_218[g_407];
                    }
                }
            }
            (*l_462) = ((**l_441) = ((~(((*l_457) = &g_259) == l_459)) <= (((*l_460) = (void*)0) == &g_371)));
        }
        else
        {
            unsigned short l_468[7][1] = {{0xAE0BL}, {0xAE0BL}, {0xAE0BL}, {0xAE0BL}, {0xAE0BL}, {0xAE0BL}, {0xAE0BL}};
            int i, j;
            for (p_18 = 0; (p_18 <= 1); p_18 += 1)
            {
                int i, j;
                g_68 |= (safe_sub_func_uint8_t_u_u((g_368[p_18][g_239] > (**l_441)), l_465));
            }
            l_468[3][0] ^= (safe_add_func_int16_t_s_s(g_59[g_239], (**l_441)));
            if (p_17)
                continue;
        }
        for (g_389 = 1; (g_389 <= 5); g_389 += 1)
        {
            unsigned long long *l_470 = (void*)0;
            int l_498 = 0x470BCABCL;
            short *l_516[3];
            char *l_521 = &g_239;
            int i;
            for (i = 0; i < 3; i++)
                l_516[i] = (void*)0;
            for (p_18 = 0; (p_18 <= 4); p_18 += 1)
            {
                short **l_476 = &g_79;
                int *l_480 = &g_64[1];
                int l_502 = (-1L);
                unsigned ***l_508 = &g_505;
                unsigned *l_511 = (void*)0;
                unsigned *l_512[2][5] = {{&g_501, &g_501, &g_501, &g_501, &g_501}, {&g_501, &g_501, &g_501, &g_501, &g_501}};
                int i, j;
            }
        }
        l_513 &= ((((**l_441) = func_41(((*l_525) = (**l_441)), &g_59[g_239], (**g_422), &p_18)) < p_18) | (*g_79));
        (*g_337) = 5L;
    }
    for (g_416 = 9; (g_416 <= 18); g_416++)
    {
        int *l_538 = &g_64[0];
        short **l_549 = &l_53;
        unsigned char *l_630 = &l_465;
        unsigned char **l_629 = &l_630;
        unsigned char *l_631[2];
        int ***l_634[8] = {&l_441, &l_441, &l_441, &l_441, &l_441, &l_441, &l_441, &l_441};
        int **l_637 = &g_636;
        unsigned *l_639 = (void*)0;
        unsigned *l_640 = &g_507[2];
        unsigned *l_641 = &g_642[2][0][0];
        int i;
        for (i = 0; i < 2; i++)
            l_631[i] = (void*)0;
        (*l_441) = (*l_441);
        for (g_277 = (-15); (g_277 == 26); g_277 = safe_add_func_uint32_t_u_u(g_277, 1))
        {
            unsigned l_542[1][10] = {{18446744073709551609UL, 18446744073709551609UL, 0x432EC6BDL, 18446744073709551609UL, 18446744073709551609UL, 0x432EC6BDL, 18446744073709551609UL, 18446744073709551609UL, 0x432EC6BDL, 18446744073709551609UL}};
            unsigned l_543 = 0xE484E08BL;
            unsigned *l_581[4][4][3] = {{{&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}}, {{&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}}, {{&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}}, {{&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}, {&l_543, &g_6[2][2][2], &g_389}}};
            unsigned **l_580[8] = {(void*)0, &l_581[3][0][0], (void*)0, &l_581[3][0][0], (void*)0, &l_581[3][0][0], (void*)0, &l_581[3][0][0]};
            long long *l_591 = &g_279;
            long long **l_590 = &l_591;
            int l_602 = (-1L);
            int i, j, k;
            for (g_68 = 20; (g_68 >= (-9)); g_68 = safe_sub_func_int64_t_s_s(g_68, 9))
            {
                int *l_541 = &l_305[1];
                short ***l_546 = &l_65;
                short **l_548 = &l_444;
                short ***l_547 = &l_548;
                unsigned long long ****l_567[8][7] = {{&g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422}, {&g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422}, {&g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422}, {&g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422}, {&g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422}, {&g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422}, {&g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422}, {&g_422, &g_422, &g_422, &g_422, &g_422, &g_422, &g_422}};
                unsigned char *l_574 = &g_371;
                int *l_575 = &l_305[1];
                int i, j;
                for (g_34 = 0; (g_34 <= 48); g_34 = safe_add_func_uint64_t_u_u(g_34, 3))
                {
                    for (p_17 = 16; (p_17 > 9); --p_17)
                    {
                        (*l_441) = l_538;
                        (*g_337) ^= p_17;
                    }
                    for (g_407 = 1; (g_407 <= 4); g_407 += 1)
                    {
                        int i;
                        l_305[g_407] ^= (safe_lshift_func_uint8_t_u_s(0x2FL, 4));
                        (**l_441) = 0x7CD50492L;
                    }
                    if ((*l_538))
                        break;
                    l_541 = l_538;
                }
                (*g_337) = (func_25(p_18, (*l_541), l_542[0][2], p_18, l_543) && ((l_542[0][2] && (safe_sub_func_uint32_t_u_u((*l_538), (((*l_547) = ((*l_546) = (void*)0)) != l_549)))) > p_17));
                (*l_575) = (safe_rshift_func_int16_t_s_s((safe_sub_func_int32_t_s_s(((((safe_rshift_func_uint8_t_u_u((((**l_441) = (safe_rshift_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_s(((*l_574) |= (safe_add_func_int64_t_s_s(((((*g_337) < (((void*)0 != &g_456) || 0x05EB7875D7E58F22LL)) < (safe_add_func_uint64_t_u_u((((p_18 < (l_566 != l_567[5][4])) <= ((l_543 <= ((*g_259) = (safe_mul_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_u((+(((-8L) | p_18) || 1UL)), 2)) | (*g_520)), 3)), 0x0B36L)))) < 0x0CL)) & g_456), p_18))) != (*l_538)), p_17))), 6)) || (*g_520)), (*g_79)))) || 0L), g_61[2])) | 0x0DF4L) != l_542[0][2]) | (-1L)), p_17)), 1));
            }
            if ((((safe_lshift_func_int16_t_s_s((safe_rshift_func_uint8_t_u_u(((&g_501 != (g_582[4] = &g_389)) >= (*l_538)), 3)), 0)) && (*l_538)) & (-1L)))
            {
                unsigned long long l_585 = 18446744073709551606UL;
                int *l_589 = &l_305[1];
                (*l_538) = 1L;
                (*l_589) &= ((*g_337) = (safe_lshift_func_uint16_t_u_u((((func_25(p_18, l_585, ((p_17 || (safe_sub_func_int16_t_s_s(((*l_444) = ((**l_566) == (void*)0)), ((**l_549) ^= (func_25((func_25(p_18, (&g_501 != (void*)0), (**l_441), p_17, (*l_538)) != p_18), l_585, l_585, p_17, (*g_520)) != l_588))))) < p_17), l_542[0][2], (*g_520)) | (-1L)) < (**l_441)) == 0x0603L), 9)));
                if ((*l_589))
                    continue;
            }
            else
            {
                long long ***l_592 = &l_590;
                int l_612 = (-1L);
                (*l_592) = l_590;
                for (g_407 = 0; (g_407 == 9); g_407 = safe_add_func_int64_t_s_s(g_407, 1))
                {
                    int *l_595 = &g_68;
                }
                (*g_337) = (*g_337);
                (*g_337) = (**l_441);
            }
            if (l_542[0][8])
                break;
        }
        (*l_538) = (((*g_520) ^= (func_25(((*l_641) = ((*l_640) = (safe_sub_func_uint8_t_u_u(((((*l_629) = &l_465) == l_631[1]) & 65530UL), ((*g_337) & (g_59[5] == ((g_635 = &g_337) != (l_638 = (l_441 = (l_637 = &g_636)))))))))), l_643, (l_644 == (void*)0), p_18, l_647[6]) <= p_18)) != p_18);
    }
    return g_32[1][8];
}







static unsigned func_25(unsigned p_26, short p_27, short p_28, unsigned long long p_29, char p_30)
{
    return p_27;
}







static int * func_38(short p_39, int p_40)
{
    unsigned short **l_312 = &g_259;
    int l_322 = (-2L);
    int l_343 = (-5L);
    int *l_358 = &l_343;
    unsigned long long ****l_424 = &g_422;
    unsigned long long **l_428 = &g_74;
    int **l_434[5][2][4] = {{{(void*)0, (void*)0, &l_358, &l_358}, {(void*)0, (void*)0, &l_358, &l_358}}, {{(void*)0, (void*)0, &l_358, &l_358}, {(void*)0, (void*)0, &l_358, &l_358}}, {{(void*)0, (void*)0, &l_358, &l_358}, {(void*)0, (void*)0, &l_358, &l_358}}, {{(void*)0, (void*)0, &l_358, &l_358}, {(void*)0, (void*)0, &l_358, &l_358}}, {{(void*)0, (void*)0, &l_358, &l_358}, {(void*)0, (void*)0, &l_358, &l_358}}};
    unsigned long long l_435 = 18446744073709551606UL;
    unsigned *l_436 = &g_389;
    int i, j, k;
    for (g_68 = 26; (g_68 == 17); g_68 = safe_sub_func_int8_t_s_s(g_68, 2))
    {
        int *l_308 = (void*)0;
        int *l_309 = (void*)0;
        int *l_310 = &g_64[1];
        unsigned short **l_311 = &g_259;
        short **l_403 = (void*)0;
        short ***l_402 = &l_403;
        char l_404[4] = {0xF6L, (-2L), 0xF6L, (-2L)};
        int i;
        (*l_310) = g_277;
        if (g_6[5][1][0])
            continue;
        (*l_310) = (l_311 == l_312);
        for (g_239 = 0; (g_239 <= 1); g_239 += 1)
        {
            int **l_313 = (void*)0;
            int **l_314 = &l_310;
            unsigned char *l_317 = &g_115;
            unsigned l_325 = 1UL;
            unsigned long long l_326[1][2];
            int *l_349[6] = {&g_64[1], (void*)0, &g_64[1], (void*)0, &g_64[1], (void*)0};
            unsigned short *l_375[9] = {&g_368[0][4], &g_218[3], &g_368[0][4], &g_218[3], &g_368[0][4], &g_218[3], &g_368[0][4], &g_218[3], &g_368[0][4]};
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 2; j++)
                    l_326[i][j] = 18446744073709551609UL;
            }
            (*l_314) = &g_64[g_239];
        }
    }
    for (g_371 = (-29); (g_371 <= 37); g_371 = safe_add_func_uint64_t_u_u(g_371, 9))
    {
        unsigned *l_412 = &g_389;
        long long *l_413 = &g_277;
        long long *l_414 = &g_279;
        long long *l_415 = &g_416;
        unsigned long long *****l_423 = &g_421[4];
        char l_425 = (-4L);
        unsigned char *l_426[9][2][9] = {{{&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}, {&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}}, {{&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}, {&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}}, {{&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}, {&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}}, {{&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}, {&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}}, {{&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}, {&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}}, {{&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}, {&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}}, {{&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}, {&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}}, {{&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}, {&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}}, {{&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}, {&g_371, &g_371, (void*)0, (void*)0, &g_115, &g_115, &g_115, &g_115, &g_115}}};
        int l_427 = 1L;
        int i, j, k;
        if (g_407)
            break;
        for (g_239 = 0; (g_239 > 1); g_239 = safe_add_func_int32_t_s_s(g_239, 1))
        {
            int **l_410 = &l_358;
            short l_411 = 0x6C75L;
            (*l_410) = &p_40;
            l_411 = (*g_337);
        }
        if ((((g_59[3] || ((((*g_79) = (((*l_412) = (*l_358)) == ((((((*l_413) = p_40) != (((*l_415) &= ((*l_414) = (-1L))) & ((safe_mod_func_uint64_t_u_u((0xAC0DL | (g_64[0] | (l_427 = (((p_40 || (safe_rshift_func_int8_t_s_u((*l_358), (func_25((((*l_423) = g_421[3]) == l_424), l_425, p_39, l_425, l_425) | (*g_259))))) != l_425) || p_40)))), p_40)) > 0xCD4EL))) < l_425) == (-1L)) | g_113))) == (*l_358)) < p_40)) | (*g_259)) ^ 0xE9L))
        {
            unsigned long long **l_429 = &g_74;
            int l_430 = 1L;
            unsigned char *l_433 = (void*)0;
            if (p_39)
                break;
            if ((*l_358))
                break;
            (*g_337) = ((((((**l_424) = (*g_422)) != (l_429 = l_428)) & l_430) <= ((safe_add_func_int8_t_s_s(g_368[1][2], (*l_358))) == ((*g_79) = 0x20EFL))) & (l_433 == (void*)0));
            (*l_358) &= (*g_337);
        }
        else
        {
            return &g_64[0];
        }
    }
    g_337 = &p_40;
    g_68 = ((*l_358) = func_25(p_40, l_435, p_40, ((p_40 == (((((*l_436) = 0x4AC04ED1L) || (safe_mod_func_int64_t_s_s((safe_mul_func_uint8_t_u_u(p_39, g_37[0])), 0xC065375967B10358LL))) & p_39) ^ 0x0AL)) > 0xA6L), g_218[5]));
    return &g_113;
}







static unsigned func_41(unsigned p_42, short * p_43, unsigned long long * p_44, unsigned long long * p_45)
{
    unsigned l_304 = 0xB1678012L;
    for (g_277 = 20; (g_277 == 26); g_277 = safe_add_func_uint32_t_u_u(g_277, 5))
    {
        for (g_115 = 2; (g_115 >= 1); --g_115)
        {
            int *l_303 = &g_68;
            (*l_303) = 1L;
        }
    }
    return l_304;
}







static short * func_46(char p_47, unsigned p_48)
{
    int *l_66 = &g_64[1];
    int *l_67 = &g_68;
    int **l_69 = &l_67;
    unsigned long long *l_80 = (void*)0;
    short *l_81 = &g_37[0];
    unsigned long long l_119 = 0x95FA104C7A4504AELL;
    char l_269 = 1L;
    (*l_67) = ((*l_66) = 0x6A5A8E70L);
    (*l_69) = l_66;
    if (((-1L) | (safe_add_func_uint16_t_u_u(6UL, 65534UL))))
    {
        long long l_72[5];
        unsigned long long ***l_75 = &g_73;
        int i;
        for (i = 0; i < 5; i++)
            l_72[i] = 0xB0596E72D3BEAFE2LL;
        g_68 ^= (l_72[2] = (*l_66));
        (*l_75) = g_73;
    }
    else
    {
        short *l_78 = (void*)0;
        short **l_82[6][1][7] = {{{(void*)0, &l_81, &l_81, &l_81, (void*)0, &g_79, (void*)0}}, {{(void*)0, &l_81, &l_81, &l_81, (void*)0, &g_79, (void*)0}}, {{(void*)0, &l_81, &l_81, &l_81, (void*)0, &g_79, (void*)0}}, {{(void*)0, &l_81, &l_81, &l_81, (void*)0, &g_79, (void*)0}}, {{(void*)0, &l_81, &l_81, &l_81, (void*)0, &g_79, (void*)0}}, {{(void*)0, &l_81, &l_81, &l_81, (void*)0, &g_79, (void*)0}}};
        unsigned long long *l_83 = (void*)0;
        unsigned l_84 = 18446744073709551613UL;
        int l_85 = 7L;
        int i, j, k;
        l_85 = ((**l_69) = (safe_rshift_func_uint16_t_u_s(func_25((((l_81 = func_49(l_81, l_81, l_83)) == &g_61[3]) != p_48), l_84, l_84, p_47, p_47), (*g_79))));
        (*l_67) |= 0x733021B5L;
        (*l_67) = ((void*)0 != &l_81);
        (*l_67) = (safe_mul_func_uint16_t_u_u((&l_78 == (void*)0), (!9UL)));
    }
    if (((**l_69) &= 0xB9364919L))
    {
        int *l_88 = &g_68;
        (*l_88) &= (*l_67);
        (**l_69) &= 1L;
        (*l_69) = &g_64[1];
    }
    else
    {
        unsigned long long l_101 = 0UL;
        int l_116 = (-5L);
        unsigned l_122 = 4294967295UL;
        unsigned char *l_139 = &g_115;
        unsigned char *l_140 = &g_115;
        unsigned l_191 = 0UL;
        unsigned l_261 = 0UL;
        int *l_268 = (void*)0;
        short ***l_292 = (void*)0;
        short ***l_293 = (void*)0;
        short ***l_294 = (void*)0;
        short **l_296[2][8];
        short ***l_295 = &l_296[1][0];
        unsigned long long *l_297[5];
        char *l_298[6] = {(void*)0, (void*)0, &l_269, (void*)0, (void*)0, &l_269};
        int i, j;
        for (i = 0; i < 2; i++)
        {
            for (j = 0; j < 8; j++)
                l_296[i][j] = &l_81;
        }
        for (i = 0; i < 5; i++)
            l_297[i] = &l_101;
        for (g_34 = 0; (g_34 <= 7); g_34 = safe_add_func_uint8_t_u_u(g_34, 4))
        {
            long long l_102 = 0x931259C1DB3DAD61LL;
            unsigned char *l_114[7] = {&g_115, &g_115, &g_115, &g_115, &g_115, &g_115, &g_115};
            int l_131 = 5L;
            int i;
            (**l_69) = (safe_sub_func_uint8_t_u_u(((safe_mul_func_int8_t_s_s(g_34, (safe_rshift_func_int16_t_s_s((safe_add_func_uint32_t_u_u((g_32[2][2] || ((safe_rshift_func_uint16_t_u_u((0x89L != func_25(((l_116 ^= (((((l_101 & (l_102 != (safe_rshift_func_int16_t_s_u(((*g_74) != g_64[1]), ((safe_lshift_func_uint8_t_u_s((g_113 = (safe_sub_func_uint64_t_u_u(((safe_lshift_func_uint8_t_u_u((((safe_mod_func_int16_t_s_s(l_101, p_48)) && l_101) >= p_47), g_32[1][8])) || (-1L)), 18446744073709551615UL))), g_68)) <= 0xE9L))))) == 0x9CL) < 0xE333L) > l_102) || (*l_66))) > p_47), l_102, (*g_79), (*g_74), l_102)), l_102)) > 9UL)), l_101)), (*g_79))))) != 0UL), l_102));
            for (l_102 = 0; (l_102 < (-30)); l_102--)
            {
                int *l_130[7][1] = {{&g_113}, {&g_113}, {&g_113}, {&g_113}, {&g_113}, {&g_113}, {&g_113}};
                int i, j;
                if (l_119)
                    break;
                l_131 = ((**l_69) = (safe_rshift_func_uint8_t_u_s((l_122 && 0x03D6BE2EL), (safe_rshift_func_int8_t_s_s((&l_81 == &g_79), func_25((safe_add_func_int64_t_s_s((0xEA51855DL != ((**l_69) > (g_6[1][2][0] != (safe_unary_minus_func_uint16_t_u((!(((safe_mul_func_int8_t_s_s((func_25(l_122, (((p_48 <= 0x2BL) != 0xAAL) && 0x64A7L), (*g_79), p_47, p_47) > (**g_73)), l_122)) >= p_47) ^ p_48))))))), g_34)), p_47, (*g_79), (*l_67), g_59[1]))))));
            }
        }
        if ((*l_67))
        {
            unsigned char *l_138[3];
            int l_141 = (-5L);
            unsigned *l_142 = &l_122;
            long long l_154 = 0xAC27E58AAE48550CLL;
            unsigned long long ***l_194 = &g_73;
            unsigned long long *l_244 = &g_32[1][8];
            int i;
            for (i = 0; i < 3; i++)
                l_138[i] = &g_115;
            l_141 = (func_25(g_32[1][8], l_122, func_25(((~(func_25(((safe_lshift_func_uint16_t_u_u(g_113, ((*l_67) <= func_25((safe_mul_func_uint16_t_u_u(g_34, (((((**l_69) < l_101) > 0xFDAFL) < (safe_mul_func_int8_t_s_s(((l_139 = l_138[0]) == l_140), p_48))) ^ 0x18D861C513462E2FLL))), (*g_79), p_47, p_47, p_47)))) & l_116), p_48, p_47, (**g_73), l_141) ^ p_47)) <= p_48), (*g_79), (*l_67), (*g_74), l_141), p_47, p_48) || l_141);
            if ((+((4L ^ ((*l_142) = ((*l_66) | 0x7388L))) || l_101)))
            {
                short l_145 = 0xBD73L;
                int l_155[3];
                unsigned long long ***l_192[6][8][5] = {{{&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}}, {{&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}}, {{&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}}, {{&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}}, {{&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}}, {{&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}, {&g_73, &g_73, &g_73, &g_73, &g_73}}};
                unsigned short *l_257 = &g_218[3];
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_155[i] = 0x8B0A1B9EL;
                (*l_66) = ((((safe_lshift_func_int8_t_s_s((l_145 = (-7L)), 5)) < ((func_25(p_48, (safe_sub_func_int16_t_s_s((*g_79), l_141)), (*g_79), (safe_mod_func_uint32_t_u_u(((*l_142) = (((safe_mul_func_int16_t_s_s(p_47, (safe_lshift_func_int8_t_s_s(func_25(g_64[1], (!0x1277L), (p_48 != 0x22L), (**g_73), g_64[1]), p_48)))) | l_154) || p_48)), 0x8386D6A5L)), p_47) & g_59[3]) & l_155[2])) ^ g_115) | p_48);
                g_113 |= ((*l_66) = (l_145 == (0L | (((safe_add_func_uint64_t_u_u(((*g_74) = l_154), 18446744073709551606UL)) ^ l_155[1]) || ((*l_139) &= 1UL)))));
                if ((safe_mod_func_uint16_t_u_u(p_47, 8L)))
                {
                    short **l_176 = &g_79;
                    for (g_115 = 0; (g_115 >= 43); g_115 = safe_add_func_uint16_t_u_u(g_115, 4))
                    {
                        unsigned short l_166 = 65535UL;
                        short *l_167 = (void*)0;
                        short *l_168 = &l_145;
                        int l_175 = (-1L);
                        (*l_67) = ((safe_lshift_func_uint8_t_u_s(g_34, ((*g_79) == ((safe_rshift_func_int16_t_s_u((l_166 ^= 0x9DF4L), 7)) == (((*l_168) &= (g_59[2] = 1L)) < p_47))))) | (l_122 & (((safe_add_func_int64_t_s_s(((((safe_mod_func_int32_t_s_s((**l_69), (safe_mod_func_uint16_t_u_u(l_155[2], (*g_79))))) | 5UL) == g_68) | 0xD1F0D1286CDD36E1LL), 0L)) || l_175) & p_47)));
                        l_155[1] |= ((void*)0 != l_176);
                        (*l_67) = (safe_sub_func_int8_t_s_s((((((0x15EB048BL || ((safe_rshift_func_int16_t_s_u((l_116 ^= (g_61[2] == ((safe_add_func_int16_t_s_s((safe_mul_func_uint8_t_u_u(((void*)0 != &l_145), 0x3BL)), (!3UL))) || 1L))), 4)) ^ ((*g_73) == (void*)0))) ^ 0x5AL) & 0x03F8E5C4L) == p_47) && g_64[1]), 1L));
                        if (g_34)
                            break;
                    }
                }
                else
                {
                    unsigned long long ****l_193[3][4] = {{&l_192[5][5][2], &l_192[5][5][2], &l_192[5][5][2], &l_192[5][5][2]}, {&l_192[5][5][2], &l_192[5][5][2], &l_192[5][5][2], &l_192[5][5][2]}, {&l_192[5][5][2], &l_192[5][5][2], &l_192[5][5][2], &l_192[5][5][2]}};
                    int l_209 = 1L;
                    long long l_226[8][1][2] = {{{(-10L), (-10L)}}, {{(-10L), (-10L)}}, {{(-10L), (-10L)}}, {{(-10L), (-10L)}}, {{(-10L), (-10L)}}, {{(-10L), (-10L)}}, {{(-10L), (-10L)}}, {{(-10L), (-10L)}}};
                    unsigned long long l_240 = 0x8365F3817B0A8863LL;
                    int i, j, k;
                    if ((safe_mod_func_int16_t_s_s((l_116 ^ (g_113 &= (safe_add_func_uint8_t_u_u(((1L || (2L || (safe_add_func_int32_t_s_s(g_6[6][0][2], l_191)))) <= ((l_192[4][1][1] = l_192[5][5][2]) == l_194)), (safe_mod_func_int8_t_s_s(p_47, (safe_sub_func_uint8_t_u_u(g_64[0], p_48)))))))), g_64[1])))
                    {
                        short *l_214 = &l_145;
                        int l_215 = 0x318DEAA3L;
                        unsigned *l_216 = (void*)0;
                        unsigned short *l_217 = &g_218[3];
                        int *l_219 = &g_68;
                        short l_237 = (-1L);
                        char *l_238 = &g_239;
                        int *l_241 = &l_141;
                        (*l_219) &= (((safe_add_func_uint16_t_u_u(((*l_217) &= func_25(l_141, func_25(((**l_69) = (safe_add_func_int8_t_s_s(((safe_lshift_func_uint16_t_u_s((p_47 && g_61[3]), l_101)) | func_25(g_59[3], ((*l_67) >= (safe_lshift_func_int8_t_s_s((safe_sub_func_int64_t_s_s(l_209, 0xB24A6380375A509CLL)), 1))), (l_215 &= ((*l_214) = (safe_rshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_u(func_25(p_47, l_155[0], p_47, p_47, g_61[3]), 0)), p_47)))), l_101, l_141)), p_48))), p_47, (*g_79), p_47, p_47), (*g_79), p_48, g_61[3])), l_119)) > 0xFBL) < 0xB69BL);
                        (*l_66) ^= ((*l_219) = (safe_sub_func_int32_t_s_s(l_209, (safe_add_func_int64_t_s_s((g_218[5] >= (safe_rshift_func_int8_t_s_u(l_226[6][0][1], 4))), l_116)))));
                        (*l_241) |= func_25(p_47, (*l_66), (((*l_219) = p_47) == (safe_lshift_func_uint8_t_u_u((1UL | (l_209 = (l_226[6][0][1] | (safe_mod_func_uint16_t_u_u((((*l_214) = ((safe_lshift_func_int8_t_s_u((((*l_238) = (!((l_122 < (safe_mod_func_uint16_t_u_u((safe_mod_func_int64_t_s_s((l_237 ^ (p_47 && (g_115 && p_47))), 0x5B793A5FC61F8F8ELL)), (*l_67)))) | p_47))) && 0UL), 4)) && 0L)) | 65535UL), p_48))))), l_240))), p_47, p_48);
                        return &g_61[3];
                    }
                    else
                    {
                        int l_247[6][5] = {{1L, 0x9FE853EBL, (-5L), (-5L), 0x9FE853EBL}, {1L, 0x9FE853EBL, (-5L), (-5L), 0x9FE853EBL}, {1L, 0x9FE853EBL, (-5L), (-5L), 0x9FE853EBL}, {1L, 0x9FE853EBL, (-5L), (-5L), 0x9FE853EBL}, {1L, 0x9FE853EBL, (-5L), (-5L), 0x9FE853EBL}, {1L, 0x9FE853EBL, (-5L), (-5L), 0x9FE853EBL}};
                        int i, j;
                        (*l_67) = (safe_mod_func_uint32_t_u_u(p_47, (l_141 = (((*g_73) != (l_244 = (*g_73))) && (safe_mul_func_int8_t_s_s(1L, l_247[5][1]))))));
                    }
                    (*l_67) ^= l_155[2];
                    (**l_69) = (-7L);
                    for (p_47 = 1; (p_47 >= 0); p_47 -= 1)
                    {
                        char *l_251 = &g_239;
                        unsigned short *l_254[2][5] = {{&g_218[3], (void*)0, &g_218[3], (void*)0, &g_218[3]}, {&g_218[3], (void*)0, &g_218[3], (void*)0, &g_218[3]}};
                        unsigned short **l_258[6][4][8] = {{{&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}}, {{&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}}, {{&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}}, {{&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}}, {{&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}}, {{&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}, {&l_257, &l_254[1][2], &l_254[0][3], &l_254[1][0], &l_254[0][3], &l_254[1][2], &l_257, &l_257}}};
                        int *l_260[6];
                        int i, j, k;
                        for (i = 0; i < 6; i++)
                            l_260[i] = &l_116;
                        l_116 |= ((g_248 || (safe_sub_func_int32_t_s_s((((*l_251) = 0x0AL) == l_101), (safe_rshift_func_uint16_t_u_u(((*l_66) |= (g_32[1][8] | g_37[0])), ((*g_74) ^ l_209)))))) && ((*g_74) ^= (((g_64[p_47] = (((safe_lshift_func_int16_t_s_s((((l_257 != (g_259 = &g_218[8])) > 1L) < 0x38CEL), (*g_79))) < g_239) ^ p_47)) <= g_61[3]) && l_155[2])));
                        (*l_66) ^= g_239;
                    }
                }
            }
            else
            {
                (*l_69) = &g_113;
            }
            if (l_261)
            {
                (**l_69) = (safe_rshift_func_uint16_t_u_s(((*g_259) = p_47), 14));
            }
            else
            {
                (*l_69) = &g_113;
            }
        }
        else
        {
            unsigned l_286 = 4294967289UL;
            for (p_47 = (-5); (p_47 == (-23)); p_47--)
            {
                for (g_68 = 0; g_68 < 3; g_68 += 1)
                {
                    for (g_115 = 0; g_115 < 9; g_115 += 1)
                    {
                        g_32[g_68][g_115] = 0xE046A1E6C3D03F82LL;
                    }
                }
                (*l_66) &= (safe_lshift_func_int8_t_s_s(g_218[1], 7));
            }
            (*l_69) = l_268;
            for (l_261 = 0; (l_261 <= 8); l_261 += 1)
            {
                unsigned long long l_284 = 0x0937FBBC769E7B83LL;
                int *l_287 = &g_113;
                for (g_68 = 4; (g_68 >= 1); g_68 -= 1)
                {
                    int **l_285[8][4] = {{&l_66, &l_66, &l_66, &l_66}, {&l_66, &l_66, &l_66, &l_66}, {&l_66, &l_66, &l_66, &l_66}, {&l_66, &l_66, &l_66, &l_66}, {&l_66, &l_66, &l_66, &l_66}, {&l_66, &l_66, &l_66, &l_66}, {&l_66, &l_66, &l_66, &l_66}, {&l_66, &l_66, &l_66, &l_66}};
                    int i, j;
                    l_269 ^= g_59[(g_68 + 1)];
                    for (l_122 = 0; (l_122 <= 1); l_122 += 1)
                    {
                        int i;
                        g_64[l_122] = (safe_rshift_func_int8_t_s_u((safe_rshift_func_uint16_t_u_s(0x0C1CL, 12)), 7));
                        if (g_64[l_122])
                            break;
                        g_64[1] = p_47;
                        (*l_69) = &g_64[1];
                    }
                    for (g_34 = 3; (g_34 <= 8); g_34 += 1)
                    {
                        long long *l_276 = &g_277;
                        long long *l_278 = &g_279;
                        int i;
                        (*l_66) ^= (((*l_278) = ((*l_276) = (safe_rshift_func_uint8_t_u_u(g_59[g_68], 5)))) > (safe_rshift_func_int16_t_s_s((((p_47 = func_25((g_61[3] != (safe_rshift_func_int16_t_s_s(p_48, 14))), (*g_79), ((l_284 <= (l_284 > p_48)) | l_284), (*g_74), g_32[1][8])) >= 1UL) != p_48), 7)));
                        l_286 = (g_113 = (l_285[3][0] == (void*)0));
                        (*l_69) = l_287;
                    }
                }
                for (l_116 = 0; l_116 < 2; l_116 += 1)
                {
                    g_64[l_116] = 1L;
                }
                if (p_48)
                    continue;
            }
        }
        (*l_66) = (safe_mod_func_uint64_t_u_u((func_25((+0x39D85764L), (*g_79), (safe_rshift_func_uint8_t_u_u(((&g_79 != ((*l_295) = &g_79)) != p_48), 6)), ((*l_66) = (g_32[1][8] = ((**g_73) |= p_47))), (g_239 ^= (((*l_69) = &g_113) == (void*)0))) != g_277), 18446744073709551612UL));
        (*l_69) = &g_113;
    }
    return &g_59[2];
}







static short * func_49(short * p_50, short * p_51, unsigned long long * p_52)
{
    long long l_55 = (-1L);
    short *l_58 = &g_59[3];
    short *l_60[5] = {&g_37[0], &g_61[3], &g_37[0], &g_61[3], &g_37[0]};
    int l_62 = 1L;
    int *l_63[8][1] = {{&g_64[1]}, {&g_64[1]}, {&g_64[1]}, {&g_64[1]}, {&g_64[1]}, {&g_64[1]}, {&g_64[1]}, {&g_64[1]}};
    int i, j;
    g_64[0] ^= (g_6[3][0][0] & ((func_25((l_55 | g_32[1][8]), (*p_50), g_34, (safe_add_func_int16_t_s_s(0L, (l_62 = ((*l_58) = g_32[2][8])))), g_37[0]) || l_62) && g_61[3]));
    return &g_37[0];
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 5; j++)
        {
            for (k = 0; k < 3; k++)
            {
                transparent_crc(g_6[i][j][k], "g_6[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_32[i][j], "g_32[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_34, "g_34", print_hash_value);
    for (i = 0; i < 1; i++)
    {
        transparent_crc(g_37[i], "g_37[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_59[i], "g_59[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_61[i], "g_61[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_64[i], "g_64[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_68, "g_68", print_hash_value);
    transparent_crc(g_113, "g_113", print_hash_value);
    transparent_crc(g_115, "g_115", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        transparent_crc(g_218[i], "g_218[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_239, "g_239", print_hash_value);
    transparent_crc(g_248, "g_248", print_hash_value);
    transparent_crc(g_277, "g_277", print_hash_value);
    transparent_crc(g_279, "g_279", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 5; j++)
        {
            transparent_crc(g_368[i][j], "g_368[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_371, "g_371", print_hash_value);
    transparent_crc(g_389, "g_389", print_hash_value);
    transparent_crc(g_407, "g_407", print_hash_value);
    transparent_crc(g_416, "g_416", print_hash_value);
    transparent_crc(g_456, "g_456", print_hash_value);
    transparent_crc(g_501, "g_501", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        transparent_crc(g_507[i], "g_507[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_625, "g_625", print_hash_value);
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 9; j++)
        {
            for (k = 0; k < 1; k++)
            {
                transparent_crc(g_642[i][j][k], "g_642[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_718, "g_718", print_hash_value);
    transparent_crc(g_786, "g_786", print_hash_value);
    transparent_crc(g_822, "g_822", print_hash_value);
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_850[i][j], "g_850[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1043, "g_1043", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
