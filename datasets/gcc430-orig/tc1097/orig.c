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



static int g_2[2] = {0x6AF1124FL,0x6AF1124FL};
static int g_3 = 1L;
static int g_4 = 0xC19C5A65L;
static int g_5 = 8L;
static int g_6[10] = {(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L),(-3L)};
static int g_7 = 1L;
static unsigned char g_13 = 0xFDL;
static unsigned char g_15 = 0x47L;
static int g_17 = 2L;
static int g_56 = 0x2CAEABA4L;
static unsigned g_73[6][8][5] = {{{4294967295UL,0xC6E12CDFL,0UL,0xCA5EB5A4L,4294967295UL},{1UL,1UL,0UL,2UL,0UL},{4294967295UL,4294967295UL,4294967294UL,0xC6E12CDFL,4294967295UL},{0xCF8610F1L,2UL,4UL,2UL,0xCF8610F1L},{4294967295UL,0UL,0UL,0xCA5EB5A4L,0xCA5EB5A4L},{0UL,2UL,0UL,1UL,1UL},{4294967295UL,4294967295UL,0xC6E12CDFL,0UL,0xCA5EB5A4L},{0xCF8610F1L,1UL,0xBA8B036CL,4294967287UL,0xCF8610F1L}},{{0xCA5EB5A4L,0xC6E12CDFL,0xC6E12CDFL,0xCA5EB5A4L,4294967295UL},{1UL,4294967287UL,0UL,0x60700C0DL,0UL},{0xCA5EB5A4L,4294967295UL,0UL,0xC6E12CDFL,4294967295UL},{0xCF8610F1L,0x60700C0DL,4UL,0x60700C0DL,0xCF8610F1L},{4294967295UL,0UL,4294967294UL,0xCA5EB5A4L,4294967295UL},{0UL,0x60700C0DL,0UL,4294967287UL,1UL},{4294967295UL,4294967295UL,0UL,0UL,4294967295UL},{0xCF8610F1L,4294967287UL,0xBA8B036CL,1UL,0xCF8610F1L}},{{4294967295UL,0xC6E12CDFL,0UL,0xCA5EB5A4L,4294967295UL},{1UL,1UL,0UL,2UL,0UL},{4294967295UL,4294967295UL,4294967294UL,0xC6E12CDFL,4294967295UL},{0xCF8610F1L,2UL,4UL,2UL,0xCF8610F1L},{4294967295UL,0UL,0UL,0xCA5EB5A4L,0xCA5EB5A4L},{0UL,2UL,0UL,1UL,1UL},{4294967295UL,4294967295UL,0xC6E12CDFL,0UL,0xCA5EB5A4L},{0xCF8610F1L,1UL,0xBA8B036CL,4294967287UL,0xCF8610F1L}},{{0xCA5EB5A4L,0xC6E12CDFL,0xC6E12CDFL,0xCA5EB5A4L,4294967295UL},{1UL,4294967287UL,0UL,0x60700C0DL,0UL},{0xCA5EB5A4L,4294967295UL,0UL,0xC6E12CDFL,4294967295UL},{0xCF8610F1L,0x60700C0DL,4UL,0x60700C0DL,0xCF8610F1L},{4294967295UL,0UL,4294967294UL,0xCA5EB5A4L,4294967295UL},{0UL,0x60700C0DL,0UL,4294967287UL,1UL},{4294967295UL,4294967295UL,0UL,0UL,4294967295UL},{0xCF8610F1L,4294967287UL,0xBA8B036CL,1UL,0xCF8610F1L}},{{4294967295UL,0xC6E12CDFL,0UL,0xCA5EB5A4L,4294967295UL},{1UL,1UL,0UL,2UL,0UL},{4294967295UL,4294967295UL,4294967294UL,0xC6E12CDFL,4294967295UL},{0xCF8610F1L,2UL,4UL,2UL,0xCF8610F1L},{4294967295UL,0UL,0UL,0xCA5EB5A4L,0xCA5EB5A4L},{0UL,2UL,0UL,1UL,1UL},{4294967295UL,4294967295UL,0xC6E12CDFL,0UL,0xCA5EB5A4L},{0xCF8610F1L,1UL,0xBA8B036CL,4294967287UL,0xCF8610F1L}},{{0xCA5EB5A4L,0xC6E12CDFL,0xC6E12CDFL,0xCA5EB5A4L,4294967295UL},{1UL,4294967287UL,0UL,0x60700C0DL,0UL},{0xCA5EB5A4L,4294967295UL,0UL,0xC6E12CDFL,4294967295UL},{0xCF8610F1L,0x60700C0DL,4UL,0x60700C0DL,0xCF8610F1L},{4294967295UL,0UL,4294967294UL,0xCA5EB5A4L,4294967295UL},{0UL,0x60700C0DL,0UL,4294967287UL,1UL},{4294967295UL,4294967295UL,0UL,0UL,4294967295UL},{0xCF8610F1L,4294967287UL,0xBA8B036CL,1UL,0xCF8610F1L}}};
static int g_75[4] = {(-8L),(-8L),(-8L),(-8L)};
static int g_82 = 0x05992E41L;
static int g_84 = 7L;
static unsigned g_102[2] = {0xE2C279A1L,0xE2C279A1L};
static unsigned short g_127 = 65535UL;
static int *g_128[7] = {(void*)0,&g_6[2],(void*)0,(void*)0,&g_6[2],(void*)0,(void*)0};
static unsigned *g_135 = &g_73[1][6][3];
static unsigned **g_134 = &g_135;
static unsigned short g_141 = 0x894EL;
static char g_153[10] = {(-1L),(-1L),0xB8L,(-1L),(-1L),0xB8L,(-1L),(-1L),0xB8L,(-1L)};
static short g_159[5][9] = {{0x49C9L,(-1L),0x2524L,0x2524L,(-1L),0x49C9L,(-1L),0x2524L,0x2524L},{0x2478L,0x2478L,0xF972L,0xDA6AL,0xF972L,0x2478L,0x2478L,0xF972L,0xDA6AL},{(-1L),(-1L),(-1L),0x49C9L,0x49C9L,(-1L),(-1L),(-1L),0x49C9L},{(-1L),0xF972L,0xF972L,(-1L),0L,(-1L),0xF972L,0xF972L,(-1L)},{0xDBDEL,0x49C9L,0x2524L,0x49C9L,0xDBDEL,0xDBDEL,0x49C9L,0x2524L,0x49C9L}};
static const char *g_245 = &g_153[3];
static const char ** const g_244 = &g_245;
static const char ** const *g_243 = &g_244;
static unsigned char **g_264 = (void*)0;
static unsigned char g_280 = 0x9DL;
static short g_288 = 0x88A8L;
static int g_319 = 4L;
static int g_330 = 4L;
static short g_331 = (-2L);
static short **g_334 = (void*)0;
static unsigned g_384 = 1UL;
static unsigned char g_385 = 6UL;
static int g_386 = 0xE58E42AEL;
static int *g_419 = &g_56;
static short ** const *g_482[8] = {&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334,&g_334};
static int *g_505[4] = {&g_330,&g_330,&g_330,&g_330};
static unsigned g_511 = 7UL;
static unsigned g_568 = 0x7788D99BL;
static const unsigned char g_585 = 7UL;
static char g_608 = 0xF5L;
static int g_612 = 0xA4E017BDL;
static char *g_633[9][1] = {{&g_153[4]},{&g_608},{&g_153[4]},{&g_608},{&g_153[4]},{&g_608},{&g_153[4]},{&g_608},{&g_153[4]}};
static char **g_632 = &g_633[4][0];
static int *g_876 = &g_2[0];
static unsigned char g_900 = 0x91L;
static int *g_954[8][5][6] = {{{(void*)0,&g_6[0],(void*)0,&g_3,&g_4,&g_6[0]},{&g_6[0],&g_7,&g_4,&g_6[7],&g_6[7],&g_3},{&g_7,(void*)0,&g_4,&g_7,&g_5,(void*)0},{&g_4,&g_6[0],&g_4,&g_6[0],(void*)0,(void*)0},{(void*)0,&g_6[0],&g_7,(void*)0,&g_7,(void*)0}},{{&g_4,&g_3,&g_7,&g_6[0],&g_7,&g_5},{&g_3,(void*)0,&g_3,&g_7,&g_5,&g_3},{(void*)0,&g_3,&g_7,&g_3,(void*)0,&g_6[6]},{(void*)0,&g_6[0],&g_5,&g_6[4],(void*)0,&g_5},{&g_6[0],(void*)0,&g_3,&g_6[0],(void*)0,&g_5}},{{&g_5,&g_7,&g_5,&g_7,&g_5,&g_6[6]},{(void*)0,&g_3,&g_7,&g_6[4],&g_3,&g_3},{&g_7,(void*)0,&g_3,&g_4,&g_3,&g_5},{(void*)0,&g_7,&g_7,&g_5,&g_6[4],(void*)0},{&g_6[8],&g_7,(void*)0,&g_4,&g_6[4],&g_6[8]}},{{&g_3,&g_6[0],(void*)0,&g_6[0],&g_6[6],&g_7},{&g_7,&g_3,(void*)0,&g_7,&g_5,&g_6[0]},{&g_6[0],&g_4,&g_5,(void*)0,&g_7,(void*)0},{&g_6[0],&g_7,&g_3,&g_6[7],&g_6[0],(void*)0},{&g_3,&g_5,&g_6[0],(void*)0,(void*)0,&g_3}},{{&g_6[0],&g_6[0],&g_7,(void*)0,&g_3,&g_7},{(void*)0,(void*)0,&g_7,&g_3,(void*)0,(void*)0},{&g_4,&g_3,&g_3,&g_6[0],&g_3,(void*)0},{&g_5,&g_6[2],&g_3,(void*)0,&g_5,(void*)0},{&g_4,&g_4,&g_7,(void*)0,&g_5,&g_6[7]}},{{&g_3,&g_6[3],&g_5,&g_6[4],&g_6[0],&g_6[0]},{&g_6[0],&g_4,&g_4,&g_6[0],&g_7,&g_7},{&g_7,&g_5,&g_4,&g_5,&g_6[0],&g_6[0]},{&g_6[3],(void*)0,(void*)0,&g_6[7],&g_6[0],&g_6[0]},{&g_5,&g_5,&g_4,(void*)0,&g_7,&g_5}},{{&g_7,&g_4,(void*)0,&g_6[3],&g_5,(void*)0},{&g_5,&g_4,&g_6[0],&g_5,&g_3,&g_6[3]},{&g_3,&g_5,&g_4,&g_6[0],&g_6[7],&g_5},{&g_6[0],&g_5,(void*)0,(void*)0,&g_6[2],(void*)0},{&g_5,&g_6[9],(void*)0,&g_6[3],&g_7,&g_6[0]}},{{(void*)0,&g_4,&g_3,&g_4,&g_7,&g_6[0]},{&g_7,&g_7,&g_5,(void*)0,&g_4,&g_6[0]},{&g_3,&g_3,&g_4,&g_6[0],&g_7,(void*)0},{&g_7,&g_5,&g_5,&g_7,&g_6[4],&g_7},{&g_6[3],(void*)0,&g_5,&g_3,&g_6[7],&g_7}}};
static char g_980 = 0x8AL;
static unsigned g_984 = 0x433830FBL;
static short * const g_1047 = (void*)0;
static short * const *g_1046 = &g_1047;
static short * const **g_1045[8] = {&g_1046,&g_1046,&g_1046,&g_1046,&g_1046,&g_1046,&g_1046,&g_1046};
static short * const ***g_1044 = &g_1045[1];
static short ***g_1049 = (void*)0;
static short ****g_1048 = &g_1049;
static const int g_1060 = (-6L);
static const int *g_1059 = &g_1060;
static const int **g_1058 = &g_1059;
static const char g_1063 = 0x70L;
static unsigned char *g_1095 = &g_385;
static unsigned char * const *g_1094[10] = {&g_1095,&g_1095,&g_1095,&g_1095,&g_1095,&g_1095,&g_1095,&g_1095,&g_1095,&g_1095};
static unsigned char * const **g_1093 = &g_1094[0];
static unsigned char * const *** const g_1092 = &g_1093;
static unsigned char ** const g_1120 = (void*)0;
static unsigned char ** const *g_1119[8] = {&g_1120,&g_1120,&g_1120,&g_1120,&g_1120,&g_1120,&g_1120,&g_1120};
static unsigned g_1132 = 0x6BE23839L;
static unsigned short g_1168 = 65535UL;
static int g_1170 = 0xA946ACB2L;
static int **g_1174 = &g_419;
static int ***g_1173[2] = {&g_1174,&g_1174};
static const char **g_1180 = &g_245;
static const char ***g_1179 = &g_1180;
static unsigned char **g_1294 = (void*)0;
static int **g_1320 = &g_954[0][3][5];
static int ***g_1319 = &g_1320;
static unsigned short g_1405[10][8] = {{3UL,0xAB5BL,65535UL,65535UL,0xAB5BL,3UL,0x308CL,0xAB5BL},{0x0629L,0x751DL,0xB030L,0x308CL,0xB030L,0x751DL,0x308CL,0x4E3CL},{3UL,65535UL,3UL,0x308CL,0x308CL,3UL,65535UL,3UL},{0x4E3CL,0x308CL,0x751DL,0xB030L,0x308CL,0xB030L,0x751DL,0x308CL},{3UL,0x751DL,0x4E3CL,3UL,0xB030L,0xB030L,3UL,0x4E3CL},{0x308CL,0x308CL,3UL,65535UL,3UL,3UL,3UL,65535UL},{0x4E3CL,65535UL,0x4E3CL,0xB030L,65535UL,0x751DL,0x751DL,65535UL},{65535UL,0x751DL,0x751DL,65535UL,0xB030L,0x4E3CL,65535UL,0x4E3CL},{65535UL,3UL,3UL,3UL,65535UL,3UL,0x308CL,0x308CL},{0x4E3CL,3UL,0xB030L,0xB030L,3UL,0x4E3CL,0x751DL,3UL}};
static short ***g_1510 = &g_334;
static char ***g_1544 = &g_632;
static char ****g_1543 = &g_1544;
static unsigned ***g_1570 = (void*)0;
static unsigned ***g_1573 = &g_134;
static int g_1612 = 0x24C4B310L;



static int func_1(void);
static int * func_8(char p_9);
static char func_19(int * p_20, unsigned char * p_21, unsigned p_22, int * p_23);
static unsigned char * func_24(unsigned p_25, int * p_26, unsigned char * p_27, unsigned p_28);
static unsigned char * func_29(int * p_30, short p_31, const unsigned p_32, unsigned char * p_33);
static unsigned func_34(int * p_35, unsigned short p_36, const short p_37, int p_38, unsigned p_39);
static int * func_40(unsigned char * p_41, int * p_42, unsigned p_43, int p_44);
static int * func_45(short p_46, int p_47, int * const p_48, unsigned p_49);
static short func_61(char p_62, unsigned p_63, int p_64);
static unsigned func_65(int * p_66, int * p_67, int * p_68, int p_69);
static int func_1(void)
{
    int l_54 = 1L;
    int l_1055 = 0x5B54B00BL;
    unsigned char *l_1066[7] = {&g_13,&g_900,&g_900,&g_13,&g_900,&g_900,&g_13};
    unsigned l_1069 = 4294967289UL;
    short ** const *l_1078 = &g_334;
    unsigned char ** const *l_1097[2];
    unsigned char ** const **l_1096 = &l_1097[0];
    unsigned l_1101 = 18446744073709551609UL;
    int l_1103[6][9] = {{6L,(-3L),6L,6L,(-3L),6L,6L,(-3L),6L},{(-1L),5L,(-1L),(-1L),5L,(-1L),(-1L),5L,(-1L)},{6L,(-3L),6L,6L,(-3L),6L,6L,(-3L),6L},{(-1L),5L,(-1L),(-1L),5L,(-1L),(-1L),5L,(-1L)},{6L,(-3L),6L,6L,(-3L),6L,6L,(-3L),6L},{(-1L),5L,(-1L),(-1L),5L,(-1L),(-1L),5L,(-1L)}};
    short l_1121 = 0x34B3L;
    short *l_1128[6];
    short **l_1127 = &l_1128[0];
    int l_1135 = 0xEAD59CF3L;
    short l_1151 = 0x7987L;
    char ***l_1178 = &g_632;
    unsigned l_1208 = 4294967295UL;
    const int *l_1213 = (void*)0;
    const int **l_1212 = &l_1213;
    int l_1231 = 0L;
    const int *l_1235 = &g_6[0];
    int *l_1283 = &l_1231;
    short ****l_1300 = &g_1049;
    int ****l_1343[4][7][4] = {{{&g_1173[0],&g_1173[1],&g_1173[0],&g_1173[0]},{&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]},{&g_1173[1],&g_1173[0],&g_1173[0],&g_1173[1]},{&g_1173[0],&g_1173[1],&g_1173[0],&g_1173[0]},{&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]},{&g_1173[1],&g_1173[0],&g_1173[0],&g_1173[1]},{&g_1173[0],&g_1173[1],&g_1173[0],&g_1173[0]}},{{&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]},{&g_1173[1],&g_1173[0],&g_1173[0],&g_1173[1]},{&g_1173[0],&g_1173[1],&g_1173[0],&g_1173[0]},{&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]},{&g_1173[1],&g_1173[0],&g_1173[0],&g_1173[1]},{&g_1173[0],&g_1173[1],&g_1173[0],&g_1173[0]},{&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]}},{{&g_1173[1],&g_1173[0],&g_1173[0],&g_1173[0]},{&g_1173[1],&g_1173[0],&g_1173[1],&g_1173[1]},{&g_1173[0],&g_1173[0],&g_1173[1],&g_1173[0]},{&g_1173[0],&g_1173[1],&g_1173[1],&g_1173[0]},{&g_1173[1],&g_1173[0],&g_1173[1],&g_1173[1]},{&g_1173[0],&g_1173[0],&g_1173[1],&g_1173[0]},{&g_1173[0],&g_1173[1],&g_1173[1],&g_1173[0]}},{{&g_1173[1],&g_1173[0],&g_1173[1],&g_1173[1]},{&g_1173[0],&g_1173[0],&g_1173[1],&g_1173[0]},{&g_1173[0],&g_1173[1],&g_1173[1],&g_1173[0]},{&g_1173[1],&g_1173[0],&g_1173[1],&g_1173[1]},{&g_1173[0],&g_1173[0],&g_1173[1],&g_1173[0]},{&g_1173[0],&g_1173[1],&g_1173[1],&g_1173[0]},{&g_1173[1],&g_1173[0],&g_1173[1],&g_1173[1]}}};
    int ***** const l_1342[6] = {&l_1343[1][3][0],&l_1343[1][3][0],&l_1343[1][3][0],&l_1343[1][3][0],&l_1343[1][3][0],&l_1343[1][3][0]};
    int l_1345 = 0x60D844B5L;
    const unsigned l_1368 = 18446744073709551614UL;
    unsigned short l_1379 = 0xE396L;
    unsigned char l_1384 = 0UL;
    int l_1389 = 0x32DC96DAL;
    unsigned char ***l_1391[4] = {&g_264,&g_264,&g_264,&g_264};
    unsigned char ****l_1390 = &l_1391[3];
    const unsigned l_1419 = 0xE46B33D9L;
    short l_1420 = (-1L);
    int l_1446[7];
    int ***l_1475[1][9][6] = {{{&g_1320,&g_1320,&g_1320,&g_1320,&g_1320,&g_1320},{&g_1320,&g_1320,&g_1320,&g_1320,&g_1320,&g_1320},{&g_1320,&g_1320,&g_1320,&g_1320,&g_1320,&g_1320},{&g_1320,&g_1320,&g_1320,&g_1320,&g_1320,&g_1320},{&g_1320,&g_1320,&g_1320,&g_1320,&g_1320,&g_1320},{&g_1320,&g_1320,&g_1320,&g_1320,&g_1320,&g_1320},{&g_1320,&g_1320,&g_1320,&g_1320,&g_1320,&g_1320},{&g_1320,&g_1320,&g_1320,&g_1320,&g_1320,&g_1320},{&g_1320,&g_1320,&g_1320,&g_1320,&g_1320,&g_1320}}};
    char * const *l_1491 = &g_633[4][0];
    char * const **l_1490 = &l_1491;
    short l_1503 = 0x20A7L;
    unsigned l_1505 = 0x8AAB64D6L;
    int *l_1534 = &g_75[2];
    int l_1593 = 0xF9C3355CL;
    const int ***l_1629 = &l_1212;
    const int ****l_1628[10][3][4] = {{{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,(void*)0,&l_1629}},{{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,&l_1629,(void*)0}},{{&l_1629,&l_1629,(void*)0,(void*)0},{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629}},{{&l_1629,&l_1629,(void*)0,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629}},{{&l_1629,&l_1629,&l_1629,(void*)0},{&l_1629,&l_1629,(void*)0,(void*)0},{&l_1629,&l_1629,&l_1629,&l_1629}},{{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,(void*)0,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629}},{{&l_1629,&l_1629,&l_1629,&l_1629},{(void*)0,&l_1629,(void*)0,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629}},{{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,(void*)0,&l_1629,&l_1629}},{{&l_1629,(void*)0,(void*)0,&l_1629},{(void*)0,&l_1629,&l_1629,&l_1629},{(void*)0,&l_1629,(void*)0,&l_1629}},{{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629},{&l_1629,&l_1629,&l_1629,&l_1629}}};
    const int *****l_1627 = &l_1628[5][1][3];
    int *l_1632[5][1][6];
    int i, j, k;
    for (i = 0; i < 2; i++)
        l_1097[i] = &g_264;
    for (i = 0; i < 6; i++)
        l_1128[i] = &g_159[0][0];
    for (i = 0; i < 7; i++)
        l_1446[i] = 0x1B9DF2BBL;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 1; j++)
        {
            for (k = 0; k < 6; k++)
                l_1632[i][j][k] = &g_6[5];
        }
    }
    for (g_3 = 1; (g_3 >= 0); g_3 -= 1)
    {
        unsigned l_339 = 0UL;
        unsigned char *l_514 = &g_15;
        int l_990 = 0xA7C241F6L;
        unsigned short *l_1070 = &g_127;
        int **l_1071 = &g_505[2];
        short l_1136[5][5] = {{0x89E1L,0x89E1L,0x89E1L,0x89E1L,0x89E1L},{0xBAD0L,0L,0xBAD0L,0L,0xBAD0L},{0x89E1L,0x89E1L,0x89E1L,0x89E1L,0x89E1L},{0xBAD0L,0L,0xBAD0L,0L,0xBAD0L},{0x89E1L,0x89E1L,0x89E1L,0x89E1L,0x89E1L}};
        char ***l_1141 = &g_632;
        unsigned l_1202[9] = {0xDCCE9792L,1UL,0xDCCE9792L,1UL,0xDCCE9792L,1UL,0xDCCE9792L,1UL,0xDCCE9792L};
        int *l_1241 = &g_6[0];
        int **l_1273 = &g_876;
        int **l_1277 = &g_876;
        unsigned short l_1282 = 65535UL;
        unsigned char **l_1308[7][10] = {{&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514},{&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514},{&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514},{&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514},{&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514},{&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514},{&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514,&l_514}};
        short l_1310[2];
        int l_1313 = 0x3783FD1EL;
        int ****l_1316 = (void*)0;
        int ****l_1317[4] = {&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]};
        unsigned char *l_1346 = &g_280;
        short l_1374 = 0xFC85L;
        int i, j;
        for (i = 0; i < 2; i++)
            l_1310[i] = (-2L);
        for (g_4 = 1; (g_4 >= 0); g_4 -= 1)
        {
            char l_943[1];
            int *l_1003 = &g_330;
            unsigned short l_1013 = 0x9AA1L;
            short * const ***l_1040 = (void*)0;
            int i;
            for (i = 0; i < 1; i++)
                l_943[i] = 0L;
            for (g_5 = 0; (g_5 <= 1); g_5 += 1)
            {
                int *l_18 = &g_17;
                unsigned l_252 = 18446744073709551611UL;
                for (g_6[0] = 0; (g_6[0] <= 1); g_6[0] += 1)
                {
                    const int l_513[3] = {(-4L),(-4L),(-4L)};
                    unsigned * const l_983 = &g_984;
                    unsigned * const *l_982 = &l_983;
                    unsigned * const **l_981 = &l_982;
                    char *l_987 = &g_608;
                    int i;
                    for (g_7 = 1; (g_7 >= 0); g_7 -= 1)
                    {
                        int *l_55 = &g_56;
                        int i;
                        if (g_2[g_5])
                            break;
                        l_18 = func_8(g_4);
                    }
                    (*l_18) = ((((*l_981) = &g_135) != &g_135) && ((safe_add_func_int8_t_s_s(((*l_987) = 0x14L), l_943[0])) > g_280));
                }
                for (g_17 = 0; (g_17 <= 1); g_17 += 1)
                {
                    int *l_988 = (void*)0;
                    int *l_989[2][4][9] = {{{&g_82,&g_84,&g_5,&g_6[0],&g_5,&g_84,&g_82,&g_84,&g_5},{&g_7,&g_4,&g_82,(void*)0,&g_4,&g_4,(void*)0,&g_82,&g_4},{(void*)0,&g_84,&g_7,&g_6[0],&g_7,&g_84,(void*)0,&g_84,&g_7},{&g_7,&g_82,&g_82,&g_7,&g_4,&g_82,&g_82,&g_82,&g_82}},{{&g_5,&g_319,(void*)0,&g_84,(void*)0,&g_319,&g_5,&g_319,(void*)0},{&g_4,&g_82,(void*)0,&g_82,&g_82,&g_82,&g_82,(void*)0,&g_82},{&g_7,&g_319,&g_17,&g_84,&g_17,&g_319,&g_7,&g_319,&g_17},{&g_4,(void*)0,(void*)0,&g_4,&g_82,(void*)0,&g_82,&g_82,&g_82}}};
                    int i, j, k;
                    l_990 = g_2[g_3];
                }
            }
        }
        (**l_1071) ^= ((g_102[0] , &g_127) != l_1070);
        for (g_319 = 0; (g_319 <= 25); g_319 = safe_add_func_uint8_t_u_u(g_319, 5))
        {
            short ** const **l_1079 = &g_482[7];
            unsigned char ***l_1089 = (void*)0;
            unsigned char ****l_1088 = &l_1089;
            char *l_1090 = (void*)0;
            char *l_1091 = &g_608;
            char *l_1098 = &g_153[4];
            int l_1099 = 0x5F880F44L;
            const int l_1100 = 0x3202C066L;
            int *l_1102 = &g_7;
            unsigned l_1107 = 4294967292UL;
            char l_1153 = 0x5EL;
            short l_1193 = (-3L);
            l_1103[1][2] |= ((*l_1102) ^= (safe_add_func_int16_t_s_s(((((((*g_1044) != ((*l_1079) = l_1078)) < (l_54 , ((safe_div_func_int32_t_s_s((safe_mod_func_int8_t_s_s((((safe_add_func_uint8_t_u_u((l_1099 &= (safe_add_func_int8_t_s_s((((&g_264 == ((*l_1088) = &g_264)) == ((g_511 || l_54) && (((*l_1098) ^= (((*l_1091) = (**l_1071)) || ((***g_1093) = (l_54 = (g_1092 != l_1096))))) != l_1055))) == l_1069), (-1L)))), l_1100)) , 0xF57DL) , (-2L)), l_1069)), (*g_135))) >= 0xFA8FL))) ^ (**l_1071)) , l_1101) <= l_1100), l_1055)));
            for (g_331 = 1; (g_331 >= 0); g_331 -= 1)
            {
                short l_1112 = 0x32C5L;
                unsigned char *l_1118 = (void*)0;
                unsigned char ** const l_1117 = &l_1118;
                unsigned char ** const *l_1116 = &l_1117;
                unsigned char ***l_1122[3];
                short **l_1138[8][10][3] = {{{&l_1128[3],&l_1128[3],&l_1128[0]},{&l_1128[0],&l_1128[4],&l_1128[5]},{(void*)0,&l_1128[3],(void*)0},{&l_1128[0],&l_1128[0],&l_1128[0]},{&l_1128[0],(void*)0,&l_1128[3]},{&l_1128[0],&l_1128[5],&l_1128[4]},{(void*)0,&l_1128[5],&l_1128[2]},{(void*)0,&l_1128[0],&l_1128[4]},{&l_1128[3],(void*)0,&l_1128[3]},{&l_1128[3],&l_1128[4],&l_1128[0]}},{{&l_1128[3],&l_1128[0],(void*)0},{(void*)0,&l_1128[0],&l_1128[5]},{&l_1128[0],&l_1128[1],&l_1128[0]},{(void*)0,&l_1128[5],&l_1128[0]},{&l_1128[3],&l_1128[2],&l_1128[2]},{&l_1128[3],&l_1128[0],&l_1128[5]},{&l_1128[3],(void*)0,&l_1128[0]},{(void*)0,&l_1128[4],&l_1128[0]},{(void*)0,(void*)0,(void*)0},{&l_1128[0],&l_1128[0],&l_1128[0]}},{{&l_1128[0],&l_1128[2],&l_1128[3]},{&l_1128[0],&l_1128[5],&l_1128[3]},{(void*)0,&l_1128[1],&l_1128[2]},{&l_1128[0],&l_1128[0],&l_1128[3]},{&l_1128[3],&l_1128[0],&l_1128[3]},{&l_1128[0],&l_1128[4],&l_1128[0]},{&l_1128[3],(void*)0,(void*)0},{&l_1128[0],&l_1128[0],&l_1128[0]},{&l_1128[0],&l_1128[5],&l_1128[0]},{&l_1128[0],&l_1128[5],&l_1128[5]}},{{&l_1128[3],(void*)0,&l_1128[2]},{&l_1128[0],&l_1128[0],&l_1128[0]},{&l_1128[3],&l_1128[3],&l_1128[0]},{&l_1128[0],&l_1128[4],&l_1128[5]},{(void*)0,&l_1128[3],(void*)0},{&l_1128[0],&l_1128[0],&l_1128[0]},{&l_1128[0],(void*)0,&l_1128[3]},{&l_1128[0],&l_1128[5],&l_1128[4]},{(void*)0,&l_1128[5],&l_1128[2]},{(void*)0,&l_1128[0],&l_1128[4]}},{{&l_1128[3],(void*)0,&l_1128[3]},{&l_1128[3],&l_1128[4],&l_1128[0]},{&l_1128[3],&l_1128[0],(void*)0},{(void*)0,&l_1128[0],&l_1128[5]},{&l_1128[0],&l_1128[1],&l_1128[0]},{(void*)0,&l_1128[5],&l_1128[0]},{&l_1128[3],&l_1128[2],&l_1128[2]},{&l_1128[3],&l_1128[0],&l_1128[5]},{&l_1128[3],(void*)0,&l_1128[0]},{(void*)0,&l_1128[4],&l_1128[0]}},{{(void*)0,(void*)0,(void*)0},{&l_1128[0],&l_1128[0],&l_1128[0]},{&l_1128[0],&l_1128[2],&l_1128[3]},{&l_1128[0],&l_1128[5],&l_1128[3]},{(void*)0,&l_1128[1],&l_1128[2]},{&l_1128[0],&l_1128[0],&l_1128[3]},{&l_1128[3],&l_1128[0],&l_1128[3]},{&l_1128[0],&l_1128[4],&l_1128[0]},{&l_1128[3],(void*)0,(void*)0},{&l_1128[0],&l_1128[0],&l_1128[0]}},{{&l_1128[0],&l_1128[5],&l_1128[0]},{&l_1128[0],&l_1128[5],&l_1128[5]},{&l_1128[3],(void*)0,&l_1128[2]},{&l_1128[0],&l_1128[0],&l_1128[0]},{&l_1128[3],&l_1128[3],&l_1128[0]},{&l_1128[0],&l_1128[4],&l_1128[5]},{(void*)0,&l_1128[3],(void*)0},{&l_1128[0],&l_1128[0],&l_1128[0]},{&l_1128[0],(void*)0,&l_1128[3]},{&l_1128[0],&l_1128[5],&l_1128[4]}},{{(void*)0,&l_1128[5],&l_1128[2]},{(void*)0,&l_1128[0],&l_1128[4]},{&l_1128[3],(void*)0,&l_1128[3]},{&l_1128[3],&l_1128[4],&l_1128[0]},{&l_1128[3],&l_1128[0],(void*)0},{(void*)0,&l_1128[0],&l_1128[5]},{&l_1128[0],&l_1128[1],&l_1128[0]},{(void*)0,&l_1128[5],&l_1128[0]},{&l_1128[3],&l_1128[2],&l_1128[2]},{&l_1128[3],&l_1128[0],&l_1128[5]}}};
                int i, j, k;
                for (i = 0; i < 3; i++)
                    l_1122[i] = (void*)0;
                (*g_1058) = func_45(((((*l_514) |= (((safe_mod_func_int32_t_s_s(((g_102[g_3] & l_1103[5][5]) || l_1103[1][2]), l_1103[0][1])) & (*l_1102)) || g_75[2])) != (***g_243)) <= (*l_1102)), (*g_419), &g_319, l_1055);
                (*l_1102) = ((**l_1071) , 6L);
                for (l_1069 = 0; (l_1069 <= 1); l_1069 += 1)
                {
                    char l_1115 = 0xB5L;
                    short ***l_1129 = &l_1127;
                    int *l_1137 = (void*)0;
                    char ***l_1140 = &g_632;
                    char ****l_1139 = &l_1140;
                    (*l_1102) = (((safe_rshift_func_uint8_t_u_s((****g_1092), 0)) <= func_65(func_8(((((**l_1071) = (**g_134)) > (l_54 , (((l_1115 < (*l_1102)) , (*g_1092)) == (g_1119[2] = (l_1116 = ((*l_1096) = (void*)0)))))) & ((l_1122[2] = (l_1121 , &g_264)) != (*g_1092)))), g_954[(g_331 + 5)][g_3][g_3], g_954[(g_331 + 5)][g_3][g_3], (*g_876))) <= (*l_1102));
                    (**l_1071) = ((*l_1102) = (safe_sub_func_int32_t_s_s((((**g_134) = ((((safe_lshift_func_int8_t_s_s((**l_1071), 0)) | ((&g_632 == (l_1141 = ((*l_1139) = ((!((**l_1071) == ((((*l_1129) = l_1127) == (func_65(&g_7, (func_65(func_8((safe_add_func_uint16_t_u_u(((*l_1070) = ((0L < g_1132) != (**g_244))), 3UL))), (*l_1071), &g_2[1], (*g_419)) , (void*)0), l_1137, l_1115) , l_1138[1][0][2])) , (**l_1071)))) , &g_632)))) , g_2[1])) , l_1115) | (*l_1102))) > l_1121), (*l_1102))));
                    for (g_1132 = 0; (g_1132 <= 1); g_1132 += 1)
                    {
                        unsigned l_1142 = 0UL;
                        unsigned char * const l_1152 = &g_280;
                        if (l_1142)
                            break;
                    }
                }
            }
            for (l_1101 = 0; (l_1101 <= 50); l_1101 = safe_add_func_uint32_t_u_u(l_1101, 3))
            {
                unsigned short l_1160 = 1UL;
                int l_1207 = 0x0851AF30L;
                for (g_17 = 1; (g_17 <= (-25)); g_17 = safe_sub_func_int8_t_s_s(g_17, 9))
                {
                    return (*g_419);
                }
                for (g_511 = 1; (g_511 <= 4); g_511 += 1)
                {
                    unsigned short *l_1167 = &g_141;
                    int l_1186 = 0x2B0FFF08L;
                    int *l_1211 = &l_990;
                    int i, j;
                }
            }
        }
        for (g_385 = 0; (g_385 < 43); g_385 = safe_add_func_uint16_t_u_u(g_385, 6))
        {
            char ****l_1222 = &l_1141;
            unsigned short *l_1225 = (void*)0;
            char *l_1226[9][2][2];
            int l_1227 = 0x53C94EC5L;
            int *l_1228 = &g_82;
            int *l_1242 = &g_17;
            int **l_1275 = &g_419;
            int *l_1295 = &g_75[2];
            unsigned char l_1307[8] = {1UL,1UL,1UL,1UL,1UL,1UL,1UL,1UL};
            int ****l_1309[4][4] = {{&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]},{&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]},{&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]},{&g_1173[1],&g_1173[1],&g_1173[1],&g_1173[1]}};
            int *l_1347 = (void*)0;
            int i, j, k;
            for (i = 0; i < 9; i++)
            {
                for (j = 0; j < 2; j++)
                {
                    for (k = 0; k < 2; k++)
                        l_1226[i][j][k] = &g_153[4];
                }
            }
        }
    }
    for (g_980 = 0; (g_980 == (-15)); g_980--)
    {
        unsigned l_1387 = 0x274552B6L;
        int *l_1388 = &g_6[2];
    }
    if (((*l_1283) = (((*l_1390) = (void*)0) != (*g_1092))))
    {
        const int **l_1397 = &l_1213;
        int l_1406 = 0xA95E78ABL;
        char ****l_1414 = &l_1178;
        int *l_1418 = &l_1406;
        int l_1443 = 0x3443B79BL;
        const unsigned char l_1477 = 0x3FL;
        int l_1515 = 0x3EBF870DL;
        unsigned l_1523 = 0xA446B6EEL;
        unsigned l_1535 = 18446744073709551615UL;
        unsigned char l_1583 = 252UL;
        char l_1594 = 0L;
        unsigned char l_1601 = 2UL;
        unsigned l_1604 = 3UL;
        unsigned short *l_1617 = &l_1379;
        const int ***l_1624 = &l_1212;
        const int ****l_1623 = &l_1624;
        const int *****l_1622 = &l_1623;
        const int *****l_1626 = &l_1623;
        const int ******l_1625[10][4][6] = {{{(void*)0,&l_1626,(void*)0,(void*)0,&l_1626,(void*)0},{&l_1626,&l_1622,&l_1626,&l_1626,(void*)0,&l_1622},{&l_1626,(void*)0,&l_1626,&l_1622,(void*)0,&l_1626},{(void*)0,(void*)0,&l_1626,&l_1622,&l_1626,&l_1622}},{{(void*)0,&l_1626,&l_1626,(void*)0,&l_1626,&l_1626},{&l_1622,&l_1622,&l_1626,(void*)0,&l_1626,&l_1626},{&l_1622,&l_1626,(void*)0,(void*)0,(void*)0,&l_1626},{(void*)0,&l_1622,&l_1626,&l_1622,&l_1622,&l_1622}},{{(void*)0,&l_1626,&l_1626,&l_1626,(void*)0,(void*)0},{&l_1626,&l_1626,&l_1626,(void*)0,&l_1622,(void*)0},{(void*)0,&l_1622,(void*)0,&l_1622,(void*)0,&l_1622},{&l_1622,&l_1626,&l_1622,&l_1626,&l_1626,&l_1622}},{{&l_1626,&l_1622,&l_1622,&l_1626,&l_1626,&l_1626},{(void*)0,&l_1622,&l_1622,(void*)0,&l_1622,&l_1626},{(void*)0,&l_1622,&l_1622,&l_1626,&l_1626,(void*)0},{&l_1626,&l_1622,&l_1626,&l_1622,&l_1622,&l_1626}},{{&l_1622,&l_1622,(void*)0,(void*)0,&l_1622,&l_1626},{&l_1622,&l_1626,(void*)0,&l_1626,&l_1626,(void*)0},{&l_1626,&l_1622,(void*)0,(void*)0,&l_1622,&l_1626},{&l_1626,(void*)0,(void*)0,(void*)0,(void*)0,&l_1626}},{{(void*)0,(void*)0,&l_1626,&l_1622,(void*)0,(void*)0},{(void*)0,&l_1622,&l_1622,&l_1622,&l_1626,&l_1626},{&l_1626,&l_1626,&l_1622,(void*)0,&l_1622,&l_1622},{&l_1626,(void*)0,&l_1622,(void*)0,&l_1626,&l_1626}},{{&l_1626,&l_1622,&l_1622,&l_1626,&l_1626,&l_1626},{(void*)0,(void*)0,(void*)0,&l_1626,&l_1622,(void*)0},{&l_1622,&l_1626,&l_1622,(void*)0,&l_1622,(void*)0},{(void*)0,&l_1622,(void*)0,(void*)0,&l_1622,&l_1626}},{{&l_1622,(void*)0,(void*)0,&l_1626,(void*)0,&l_1626},{&l_1622,&l_1626,&l_1626,&l_1626,&l_1622,&l_1626},{&l_1626,&l_1626,&l_1622,&l_1622,&l_1626,&l_1626},{&l_1626,&l_1626,(void*)0,(void*)0,&l_1626,&l_1626}},{{&l_1626,&l_1622,&l_1622,&l_1626,(void*)0,&l_1626},{&l_1626,&l_1622,&l_1626,(void*)0,(void*)0,(void*)0},{&l_1622,&l_1626,&l_1626,&l_1622,(void*)0,&l_1626},{&l_1626,&l_1622,&l_1622,&l_1626,(void*)0,&l_1626}},{{&l_1626,(void*)0,&l_1622,&l_1622,(void*)0,&l_1626},{&l_1626,&l_1622,&l_1626,&l_1622,(void*)0,(void*)0},{&l_1622,&l_1626,&l_1622,&l_1622,(void*)0,&l_1622},{&l_1622,&l_1622,&l_1626,&l_1626,(void*)0,&l_1622}}};
        int *l_1630 = (void*)0;
        unsigned char *l_1631 = (void*)0;
        int i, j, k;
        for (l_1121 = 14; (l_1121 >= 5); l_1121 = safe_sub_func_int16_t_s_s(l_1121, 2))
        {
            int l_1396[6];
            unsigned char *l_1404[2];
            unsigned short l_1407 = 0xC08EL;
            char *****l_1415 = &l_1414;
            char ****l_1417 = &l_1178;
            char *****l_1416 = &l_1417;
            const char l_1428 = (-1L);
            unsigned l_1478 = 7UL;
            unsigned l_1479 = 4UL;
            unsigned l_1482 = 4294967286UL;
            unsigned l_1506 = 0x7211B5D3L;
            short ***l_1509 = &g_334;
            int **l_1513 = &g_419;
            char l_1514[9][6] = {{0x93L,(-2L),0x5DL,0x93L,0x5DL,(-2L)},{0xBCL,(-2L),0L,0xBCL,0x5DL,0x5DL},{0L,(-2L),(-2L),0L,0x5DL,0L},{0x93L,(-2L),0x5DL,0x93L,0x5DL,(-2L)},{0xBCL,(-2L),0L,0xBCL,0x5DL,0x8CL},{0x5DL,(-1L),(-1L),0x5DL,0x8CL,1L},{(-2L),(-1L),0x8CL,(-2L),0x8CL,(-1L)},{0L,(-1L),1L,0L,0x8CL,0x8CL},{0x5DL,(-1L),(-1L),0x5DL,0x8CL,1L}};
            unsigned char l_1536 = 1UL;
            int l_1559 = 1L;
            int l_1562 = 0xB43C7FF2L;
            unsigned l_1610 = 0x9DF8D88AL;
            int i, j;
            for (i = 0; i < 6; i++)
                l_1396[i] = 1L;
            for (i = 0; i < 2; i++)
                l_1404[i] = &g_15;
        }
        (*l_1283) |= (safe_mod_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_s(((*l_1617) = g_900), 4)), 65528UL));
        (*l_1418) = (safe_div_func_uint8_t_u_u(((****g_1092) &= ((safe_lshift_func_uint8_t_u_u((l_1622 != (l_1627 = &l_1623)), ((*l_1418) < ((~((*l_1418) & (g_6[5] & (((((((*l_1418) == (**g_1180)) == (*l_1418)) & 255UL) != 0xF08BL) , (*g_419)) , 9L)))) >= 2UL)))) <= (*l_1418))), 0x0DL));
    }
    else
    {
        return (*g_419);
    }
    return (*g_419);
}







static int * func_8(char p_9)
{
    unsigned short l_10 = 0xD714L;
    unsigned char *l_11 = (void*)0;
    unsigned char *l_12 = &g_13;
    const unsigned char *l_14 = &g_15;
    int *l_16 = &g_17;
    (*l_16) &= (((*l_12) &= l_10) > (l_14 != &g_15));
    return l_16;
}







static char func_19(int * p_20, unsigned char * p_21, unsigned p_22, int * p_23)
{
    int l_958 = 0L;
    unsigned l_973[4][5] = {{4294967294UL,9UL,9UL,4294967294UL,0UL},{4294967294UL,9UL,9UL,4294967294UL,0UL},{4294967294UL,9UL,9UL,4294967294UL,0UL},{4294967294UL,9UL,9UL,4294967294UL,0UL}};
    int l_979 = (-9L);
    int i, j;
    for (g_288 = 1; (g_288 <= 7); g_288 += 1)
    {
        char l_955 = (-1L);
        int l_972 = 0x8003C2DFL;
        for (g_84 = 1; (g_84 >= 0); g_84 -= 1)
        {
            int *l_959 = &g_386;
            const unsigned char *l_977 = &g_900;
            const unsigned char **l_976 = &l_977;
            const unsigned char ** const *l_975[2][2][1] = {{{&l_976},{(void*)0}},{{&l_976},{(void*)0}}};
            int i, j, k;
            (*l_959) = (((((l_955 | p_22) | (((*g_876) , p_20) == (*g_134))) & ((p_22 <= (safe_add_func_uint16_t_u_u(((l_958 , p_21) == p_21), g_330))) , p_22)) | l_955) <= l_955);
            for (g_568 = 0; (g_568 <= 7); g_568 += 1)
            {
                int **l_960 = &g_954[0][3][5];
                int **l_961 = &g_505[2];
                (*l_961) = ((*l_960) = l_959);
            }
            if (l_958)
            {
                int **l_964 = &g_954[0][3][5];
                (*l_964) = func_8((safe_add_func_int8_t_s_s((((void*)0 != &p_21) && (-6L)), g_585)));
                return l_955;
            }
            else
            {
                short l_965 = (-9L);
                unsigned l_978 = 0x91C690E4L;
                for (g_612 = 1; (g_612 <= 7); g_612 += 1)
                {
                    for (g_13 = 2; (g_13 <= 7); g_13 += 1)
                    {
                        int **l_971 = (void*)0;
                        int ***l_970 = &l_971;
                        int l_974 = 0xB0B6EA97L;
                        l_965 = l_958;
                        l_979 = (((*l_959) = (5L >= (safe_rshift_func_uint8_t_u_u((((l_955 == (*g_135)) && 0xE2L) || p_22), ((safe_rshift_func_int8_t_s_s((l_972 &= (((**g_244) , ((*l_970) = &g_876)) == (void*)0)), ((+((((l_958 = ((((+(l_973[1][2] , l_974)) , p_22) && p_22) < l_965)) , (*p_20)) , &g_264) != l_975[1][0][0])) && 0x71C8L))) , l_978))))) != p_22);
                    }
                }
            }
        }
        return l_979;
    }
    return l_973[1][2];
}







static unsigned char * func_24(unsigned p_25, int * p_26, unsigned char * p_27, unsigned p_28)
{
    unsigned l_948 = 4294967295UL;
    (*p_26) = (((safe_sub_func_uint8_t_u_u(g_330, (~(+(safe_add_func_uint8_t_u_u((((l_948 <= p_28) , (void*)0) != (void*)0), 0L)))))) & 0x7E3A42C3L) , 0x73B375B7L);
    return p_27;
}







static unsigned char * func_29(int * p_30, short p_31, const unsigned p_32, unsigned char * p_33)
{
    int l_515 = 5L;
    int l_516 = 0xBDAD497EL;
    char l_517 = 0xAEL;
    int **l_543 = &g_419;
    int l_636 = 0L;
    unsigned l_662 = 4294967292UL;
    unsigned **l_665 = (void*)0;
    unsigned l_674 = 4294967292UL;
    char ***l_690 = &g_632;
    short * const *l_729 = (void*)0;
    short * const * const *l_728[1][5][3] = {{{&l_729,&l_729,&l_729},{&l_729,&l_729,&l_729},{&l_729,&l_729,&l_729},{&l_729,&l_729,&l_729},{&l_729,&l_729,&l_729}}};
    unsigned char *l_780 = &g_385;
    unsigned l_785 = 1UL;
    short l_787 = 0x78BAL;
    int l_792[3][3] = {{1L,1L,1L},{(-7L),0L,(-7L)},{1L,1L,1L}};
    int * const l_795[3][9] = {{&g_4,(void*)0,&g_3,&g_3,(void*)0,&g_4,(void*)0,&g_3,&g_3},{&g_319,&g_319,&g_4,&g_3,&g_4,&g_319,&g_319,&g_4,&g_3},{&g_330,(void*)0,&g_330,&g_4,&g_4,(void*)0,&g_4,(void*)0,&g_3}};
    int l_810 = 0xE9A36B4BL;
    unsigned l_829 = 9UL;
    unsigned char **l_844[1];
    unsigned char ***l_845 = (void*)0;
    unsigned char l_850 = 9UL;
    char *l_853 = (void*)0;
    char *l_854 = &g_153[1];
    char *l_855 = (void*)0;
    char *l_856[10] = {&g_608,&g_608,&g_608,&g_608,&g_608,&g_608,&g_608,&g_608,&g_608,&g_608};
    unsigned l_857 = 0UL;
    int l_858 = 6L;
    int *l_929 = &g_612;
    int i, j, k;
    for (i = 0; i < 1; i++)
        l_844[i] = &l_780;
    if ((l_516 &= l_515))
    {
        int *l_520 = &g_319;
        int **l_521 = &g_128[2];
        int l_539 = 0x321D8E63L;
        const unsigned *l_580[6][8] = {{(void*)0,&g_73[0][5][4],&g_73[0][5][4],(void*)0,(void*)0,&g_568,&g_73[5][4][3],&g_384},{&g_384,&g_384,&g_73[5][5][4],&g_73[0][5][4],&g_568,&g_73[4][7][2],&g_73[2][0][1],&g_73[5][0][1]},{&g_73[5][0][1],&g_384,&g_73[5][4][3],&g_73[5][4][3],&g_73[5][5][4],&g_568,&g_73[5][5][4],&g_73[5][4][3]},{&g_568,&g_73[0][5][4],&g_568,&g_73[5][4][3],&g_73[5][4][3],&g_73[5][4][3],(void*)0,&g_73[5][5][4]},{(void*)0,&g_73[5][5][4],&g_384,&g_73[5][4][3],&g_73[0][5][4],(void*)0,&g_73[5][4][3],&g_384},{(void*)0,&g_73[5][4][3],(void*)0,&g_568,&g_73[5][4][3],&g_73[5][4][3],&g_568,(void*)0}};
        const unsigned **l_579[9][9] = {{&l_580[4][2],&l_580[4][2],&l_580[5][4],&l_580[5][4],&l_580[1][1],&l_580[5][4],&l_580[5][4],&l_580[4][2],&l_580[4][2]},{&l_580[4][6],&l_580[5][4],&l_580[0][4],&l_580[5][4],&l_580[0][4],&l_580[5][4],&l_580[4][6],&l_580[4][6],&l_580[5][4]},{&l_580[5][4],(void*)0,&l_580[5][4],(void*)0,&l_580[5][4],&l_580[5][4],&l_580[5][4],&l_580[5][4],(void*)0},{&l_580[4][6],&l_580[0][4],&l_580[4][6],&l_580[5][4],&l_580[2][6],&l_580[2][6],&l_580[0][4],&l_580[5][4],&l_580[5][4]},{(void*)0,&l_580[5][4],&l_580[4][2],&l_580[1][1],&l_580[1][1],&l_580[4][2],&l_580[5][4],(void*)0,&l_580[5][4]},{&l_580[5][4],&l_580[2][6],&l_580[0][4],&l_580[0][4],&l_580[2][6],&l_580[5][4],&l_580[5][4],&l_580[5][4],&l_580[2][6]},{&l_580[5][4],&l_580[5][4],&l_580[5][4],&l_580[5][4],(void*)0,&l_580[5][4],(void*)0,&l_580[5][4],&l_580[5][4]},{&l_580[5][4],&l_580[5][4],&l_580[5][4],&l_580[2][6],&l_580[4][6],&l_580[2][6],&l_580[5][4],&l_580[5][4],&l_580[5][4]},{&l_580[5][4],&l_580[5][4],(void*)0,&l_580[5][4],(void*)0,&l_580[5][4],&l_580[5][4],&l_580[5][4],&l_580[5][4]}};
        unsigned **l_667 = &g_135;
        int i, j;
        (*l_521) = func_45((0x06L < (g_75[3] , (l_517 ^= (p_32 == p_32)))), ((g_385 = ((safe_sub_func_uint8_t_u_u(func_65((func_65(l_520, &g_319, (l_516 , &g_56), (p_31 == g_385)) , p_30), &l_516, p_30, l_516), (*p_33))) != 3UL)) > 0x55L), &g_6[7], p_31);
        (*l_521) = (void*)0;
        (*l_520) &= p_32;
        for (l_516 = 6; (l_516 >= 0); l_516 -= 1)
        {
            int *l_537 = &g_5;
            int **l_536 = &l_537;
            int l_538 = 0x483E7C6BL;
            short l_605 = 0x65CEL;
            int *l_609[2][3] = {{&g_7,&g_7,&g_7},{&g_386,&g_386,&g_386}};
            short l_614 = 1L;
            char l_645 = (-5L);
            int i, j;
            if ((safe_rshift_func_int16_t_s_u((safe_div_func_uint16_t_u_u(((safe_lshift_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u((0x4626L | (safe_add_func_uint32_t_u_u((*g_135), (**g_134)))), 15)), p_32)) != 0L), p_31)), 2)))
            {
                unsigned char l_540[1][4];
                char *l_541 = (void*)0;
                char *l_542 = &l_517;
                int ***l_544 = &l_543;
                unsigned l_545 = 6UL;
                unsigned short *l_546 = &g_127;
                short l_552 = 0x4304L;
                unsigned **l_571 = &g_135;
                int l_613 = (-1L);
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 4; j++)
                        l_540[i][j] = 1UL;
                }
                if (((((*l_546) = ((l_540[0][3] >= (l_516 , (func_61(((*l_542) = l_517), (((&g_135 == &g_135) , &g_419) != ((*l_544) = l_543)), ((*l_520) = (-1L))) , l_545))) & l_516)) != p_32) >= (*p_33)))
                {
                    short *l_547 = &g_331;
                    int l_572[3][3][8] = {{{0x67EAECDCL,0x1B8FC703L,0x4067F709L,0x4067F709L,0x1B8FC703L,0x67EAECDCL,0L,0x67EAECDCL},{0x1B8FC703L,0x67EAECDCL,0L,0x67EAECDCL,0x1B8FC703L,0x4067F709L,0x4067F709L,0x1B8FC703L},{0x67EAECDCL,0x31F8D096L,0x31F8D096L,0x67EAECDCL,0x4CF6FB8BL,0x1B8FC703L,0x4CF6FB8BL,0x67EAECDCL}},{{0x31F8D096L,0x4CF6FB8BL,0x31F8D096L,0x4067F709L,0L,0L,0x4067F709L,0x31F8D096L},{0x4CF6FB8BL,0x4CF6FB8BL,0L,0x1B8FC703L,0x808F2C17L,0x1B8FC703L,0L,0x4CF6FB8BL},{0x4CF6FB8BL,0x67EAECDCL,0x1B8FC703L,0x4067F709L,0x4067F709L,0x1B8FC703L,0x67EAECDCL,0L}},{{0x67EAECDCL,0x808F2C17L,0L,0x31F8D096L,0L,0x808F2C17L,0x67EAECDCL,0x67EAECDCL},{0x808F2C17L,0x31F8D096L,0x1B8FC703L,0x1B8FC703L,0x31F8D096L,0x808F2C17L,0x4067F709L,0x808F2C17L},{0x31F8D096L,0x808F2C17L,0x4067F709L,0x808F2C17L,0x31F8D096L,0x1B8FC703L,0x1B8FC703L,0x31F8D096L}}};
                    const unsigned ***l_581 = &l_579[2][4];
                    int i, j, k;
                    if (((**l_536) & (l_547 != (void*)0)))
                    {
                        l_515 |= ((*p_33) >= (g_153[9] = (((safe_sub_func_int16_t_s_s(p_31, l_516)) < g_75[0]) | ((*g_135) &= 0UL))));
                        (*l_520) |= l_540[0][3];
                    }
                    else
                    {
                        unsigned *l_563 = &g_384;
                        int l_564 = 2L;
                        unsigned * const l_567[1] = {&g_568};
                        unsigned * const *l_566 = &l_567[0];
                        unsigned * const **l_565 = &l_566;
                        int i;
                        l_564 = (0x93L ^ ((*l_542) = (((safe_sub_func_uint32_t_u_u((((p_31 = l_552) != (~(p_32 , ((**g_243) != (((*l_563) ^= ((safe_add_func_int16_t_s_s(l_552, (safe_add_func_int8_t_s_s((*g_245), (safe_lshift_func_int8_t_s_s((safe_div_func_int8_t_s_s(2L, (safe_mod_func_uint32_t_u_u(p_32, (**g_134))))), 1)))))) && p_32)) , &l_517))))) == (-9L)), (*g_135))) | (*p_33)) >= l_515)));
                        (*l_520) = (((*l_547) = (((*l_565) = &g_135) == ((safe_rshift_func_int8_t_s_u(l_564, 6)) , l_571))) && (0x9453B17CL || ((**l_566) = (((g_385 = 0UL) || l_572[2][1][3]) , (l_540[0][3] | (((*l_546) = (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((((*l_542) = (((((void*)0 == (*l_566)) , (**g_244)) , (void*)0) == p_33)) && (*p_33)), 3L)), (**g_244)))) | g_102[1]))))));
                    }
                    (*l_520) = (p_31 , 0x125F0955L);
                    (*l_520) = (safe_lshift_func_int8_t_s_u((((*l_581) = l_579[4][4]) != (void*)0), (safe_rshift_func_int16_t_s_u(((*l_547) = 5L), 10))));
                    if (l_517)
                    {
                        unsigned l_584 = 4UL;
                        (*l_520) = l_584;
                        (*l_520) = g_585;
                    }
                    else
                    {
                        unsigned **l_594 = (void*)0;
                        unsigned ***l_595 = &l_594;
                        int l_598 = 0x0105066EL;
                        (*l_520) = (((0x7BL != (safe_lshift_func_int8_t_s_s((safe_mod_func_int16_t_s_s((p_31 == (g_280 = (safe_lshift_func_uint8_t_u_s(0x57L, ((safe_add_func_int16_t_s_s(p_31, func_61(l_517, p_31, (&l_580[5][4] != ((*l_595) = l_594))))) | l_516))))), 0x3FB8L)), l_572[2][1][3]))) , g_75[2]) < g_2[0]);
                        l_598 = ((*l_520) = ((safe_sub_func_uint32_t_u_u(0x8A0E0323L, (-7L))) , ((*l_520) >= ((*g_135) = 0x612FA446L))));
                        (*l_536) = &g_6[0];
                        (*l_520) = ((**l_536) != l_572[2][1][3]);
                    }
                }
                else
                {
                    int *l_604[4] = {&l_515,&l_515,&l_515,&l_515};
                    int **l_624 = (void*)0;
                    unsigned l_627 = 0x84A8CB7AL;
                    int i;
                    for (g_384 = 0; (g_384 < 54); g_384 = safe_add_func_uint16_t_u_u(g_384, 4))
                    {
                        unsigned char *l_601 = (void*)0;
                        return l_601;
                    }
                    if (((func_65((*l_536), p_30, p_30, (safe_div_func_uint16_t_u_u(((void*)0 != &g_102[1]), g_159[1][4]))) , g_82) ^ 8L))
                    {
                        l_614 |= (g_319 < func_61((*g_245), (l_613 |= func_65(&g_330, &g_84, &l_539, func_65(l_604[0], ((*l_536) = l_609[1][0]), &g_75[2], (safe_add_func_int8_t_s_s(func_65(&g_6[6], &g_386, l_604[2], g_612), (*p_33)))))), p_32));
                    }
                    else
                    {
                        int l_621 = 0x929F1B72L;
                        short ***l_626 = &g_334;
                        short ****l_625 = &l_626;
                        char ***l_634[7][10] = {{&g_632,&g_632,&g_632,(void*)0,&g_632,(void*)0,(void*)0,&g_632,(void*)0,&g_632},{(void*)0,(void*)0,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,(void*)0},{&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,(void*)0},{&g_632,(void*)0,&g_632,&g_632,(void*)0,&g_632,(void*)0,&g_632,&g_632,(void*)0},{&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632},{&g_632,&g_632,(void*)0,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632,&g_632},{&g_632,&g_632,&g_632,&g_632,&g_632,(void*)0,&g_632,&g_632,&g_632,&g_632}};
                        short *l_635 = &g_288;
                        int i, j;
                        (*l_520) &= (safe_mod_func_uint16_t_u_u(p_32, ((safe_rshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s(func_65(&g_330, ((*l_521) = (void*)0), (((g_2[1] == l_621) , (0xA83AL == ((safe_mod_func_int16_t_s_s(((l_624 = &g_505[1]) == ((((*l_625) = &g_334) == ((g_15 | p_31) , (void*)0)) , &p_30)), (-9L))) && 0x5AD3FE70L))) , p_30), l_621), p_32)), l_516)) ^ l_621)));
                        (*l_624) = (l_627 , func_45((func_65(((*l_520) , ((safe_sub_func_int16_t_s_s((1L || (((*l_542) = ((safe_add_func_int8_t_s_s((((g_632 = g_632) == (void*)0) && ((p_32 | g_385) && (((*g_245) ^ ((((*l_635) = func_65(&g_4, &l_515, p_30, p_32)) >= 0x3B34L) | 7UL)) ^ 0xEDCFL))), 0L)) , 0x0CL)) | l_552)), p_31)) , &g_6[0])), p_30, p_30, p_31) < p_32), l_636, &g_7, g_4));
                        if (l_621)
                            break;
                    }
                }
            }
            else
            {
                unsigned char *l_637 = &g_385;
                int * const *l_640 = &g_419;
                int * const l_651 = &l_538;
                unsigned l_655 = 18446744073709551614UL;
                int *l_671 = &g_612;
                for (l_614 = 5; (l_614 >= 0); l_614 -= 1)
                {
                    char l_644 = (-8L);
                    int l_668 = (-2L);
                    for (g_612 = 5; (g_612 >= 0); g_612 -= 1)
                    {
                        unsigned *l_646 = &g_102[0];
                        int **l_654 = &l_609[1][0];
                        unsigned ***l_666[10] = {&l_665,&l_665,&l_665,&l_665,&l_665,&l_665,&l_665,&l_665,&l_665,&l_665};
                        unsigned short *l_672 = (void*)0;
                        unsigned short *l_673 = &g_141;
                        int i, j;
                        (*l_536) = &g_330;
                        (*l_521) = (*l_654);
                        (**l_536) = 1L;
                        (*l_520) = (safe_add_func_uint32_t_u_u(((safe_sub_func_int32_t_s_s(((g_330 | ((*l_673) = g_6[7])) <= p_32), p_32)) == l_662), (**l_654)));
                    }
                    (*l_651) = (-5L);
                    if (l_674)
                        continue;
                    if (p_32)
                        continue;
                }
                for (g_280 = 0; (g_280 >= 34); ++g_280)
                {
                    unsigned l_677 = 2UL;
                    char **l_685 = &g_633[7][0];
                    (*l_671) ^= (*l_651);
                    if (l_677)
                        continue;
                    (*l_651) ^= ((safe_mod_func_int32_t_s_s((g_75[2] >= l_662), (((safe_mul_func_uint16_t_u_u((((safe_sub_func_int16_t_s_s(((p_31 , (safe_unary_minus_func_int32_t_s((*l_671)))) | ((void*)0 == l_685)), (safe_div_func_uint16_t_u_u(0x6F86L, g_82)))) >= ((safe_lshift_func_uint8_t_u_u((((void*)0 != l_690) ^ p_32), 2)) && 0x794DL)) != p_31), 0UL)) | (*l_520)) , l_677))) && l_636);
                }
                (*l_671) |= (safe_unary_minus_func_uint8_t_u((safe_mod_func_uint16_t_u_u((g_386 & 1L), 0xE053L))));
            }
            (*l_521) = (void*)0;
        }
    }
    else
    {
        int * const l_716 = &g_612;
        int *l_719 = &l_516;
        unsigned short *l_732 = &g_141;
        unsigned *l_733 = &g_568;
        int **l_734 = &g_128[5];
        unsigned short l_735 = 1UL;
        unsigned char *l_736[10][3] = {{&g_15,&g_15,&g_15},{(void*)0,&g_280,(void*)0},{&g_15,&g_15,&g_15},{&g_280,&g_280,&g_280},{&g_15,&g_15,&g_15},{(void*)0,&g_280,(void*)0},{&g_15,&g_15,&g_15},{&g_280,&g_280,&g_280},{&g_15,&g_15,&g_15},{(void*)0,&g_280,(void*)0}};
        int i, j;
        for (g_386 = 0; (g_386 <= 0); g_386 += 1)
        {
            int l_702 = (-9L);
            char l_707 = (-1L);
            unsigned char *l_723 = &g_280;
            unsigned char **l_722 = &l_723;
            int **l_724[4][6] = {{&g_128[5],&g_128[5],&g_128[5],&g_128[5],&l_719,&g_128[1]},{&g_505[1],&g_128[5],&g_128[3],&g_128[1],&g_128[3],&g_128[5]},{&g_128[5],&g_505[1],&g_128[3],&g_128[5],&g_128[5],&g_128[1]},{&g_128[5],&g_128[5],&g_128[5],&g_128[5],&g_128[5],&g_128[5]}};
            int i, j;
            for (l_516 = 0; (l_516 >= 0); l_516 -= 1)
            {
                int *l_703 = &g_82;
                int **l_704 = &g_128[1];
                for (g_280 = 0; (g_280 <= 0); g_280 += 1)
                {
                    unsigned short l_698 = 1UL;
                    int *l_700 = &g_82;
                    int **l_701[4];
                    int i;
                    for (i = 0; i < 4; i++)
                        l_701[i] = &l_700;
                    for (g_288 = 0; (g_288 >= 0); g_288 -= 1)
                    {
                        int *l_696 = (void*)0;
                        int **l_697 = &g_128[5];
                        int *l_699 = &g_319;
                        (*l_697) = l_696;
                        if (p_31)
                            continue;
                        l_515 = l_698;
                        (*l_699) = 2L;
                    }
                    (*l_700) &= p_32;
                    g_505[1] = &g_319;
                }
                (*l_703) ^= l_702;
                (*l_704) = p_30;
            }
            for (l_674 = 0; (l_674 <= 0); l_674 += 1)
            {
                unsigned char l_705 = 253UL;
                if (l_702)
                    break;
                if (l_705)
                    continue;
                for (l_516 = 0; (l_516 <= 0); l_516 += 1)
                {
                    int *l_706 = &g_84;
                    int **l_708 = (void*)0;
                    int **l_709 = &l_706;
                    char *l_717 = &g_608;
                    int *l_718 = &l_702;
                    (*l_706) ^= 0xBB40B8B2L;
                    (*l_709) = func_40(&g_15, func_45(l_707, p_31, ((*l_709) = &g_612), p_32), p_31, (((*l_718) = (safe_sub_func_int32_t_s_s((safe_sub_func_int8_t_s_s((((*l_717) = (safe_sub_func_int16_t_s_s((l_716 != (void*)0), p_32))) == (*p_33)), 0UL)), p_32))) , 0x867A0EE0L));
                }
            }
            p_30 = func_40(p_33, l_719, p_31, (0x1CC9D5F5L < ((-1L) != ((l_515 = (((p_32 || (l_516 = ((safe_div_func_uint16_t_u_u(func_65(&l_515, &g_386, p_30, l_662), (*l_719))) , p_32))) <= p_31) == (**g_244))) & 5UL))));
            for (g_384 = 0; (g_384 <= 0); g_384 += 1)
            {
                unsigned short l_725[4];
                int i;
                for (i = 0; i < 4; i++)
                    l_725[i] = 0x10DDL;
                l_725[1] = (*p_30);
            }
        }
        (*l_734) = ((l_515 |= (safe_rshift_func_uint8_t_u_u((((&g_334 == l_728[0][2][1]) >= (((**g_134) ^ (**g_134)) != (((safe_add_func_uint32_t_u_u(((*l_733) = ((g_73[0][4][1] & ((*l_732) = (0x0F1BL & func_65(&g_84, &g_84, p_30, p_32)))) > (*l_719))), 4294967295UL)) || l_516) <= p_32))) & (-8L)), 1))) , (void*)0);
        if (l_735)
        {
            return l_736[6][2];
        }
        else
        {
            short l_745[6];
            unsigned ***l_750 = &l_665;
            char *l_751 = &g_608;
            char *l_752 = &g_153[7];
            int i;
            for (i = 0; i < 6; i++)
                l_745[i] = 0x1966L;
            (*l_716) = ((safe_div_func_uint8_t_u_u(((safe_div_func_int16_t_s_s((safe_sub_func_uint32_t_u_u(3UL, ((l_516 = (l_515 == (p_32 < (safe_sub_func_int32_t_s_s(l_745[0], p_32))))) , ((safe_add_func_int8_t_s_s((l_516 = (((*l_752) = ((*l_751) &= (safe_add_func_int8_t_s_s((5L >= (*l_716)), (((void*)0 != l_750) <= l_745[0]))))) <= p_31)), 0x6AL)) && 0x43B3C8F3L)))), l_674)) && l_517), (*l_716))) == g_82);
        }
    }
    for (p_31 = 0; (p_31 >= (-2)); p_31 = safe_sub_func_int8_t_s_s(p_31, 6))
    {
        int *l_755 = (void*)0;
        int *l_756 = &g_386;
        short l_772 = 0x613FL;
        unsigned short l_778[1];
        unsigned short l_794 = 0UL;
        int *l_822[1][4][8];
        unsigned l_840 = 0x06862827L;
        int l_841 = (-6L);
        int i, j, k;
        for (i = 0; i < 1; i++)
            l_778[i] = 65530UL;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 4; j++)
            {
                for (k = 0; k < 8; k++)
                    l_822[i][j][k] = &g_75[2];
            }
        }
        (*l_756) = 0x9ABFD4B8L;
        for (g_385 = 17; (g_385 <= 32); g_385 = safe_add_func_uint32_t_u_u(g_385, 2))
        {
            unsigned char *l_763[8] = {&g_280,&g_280,&g_280,&g_280,&g_280,&g_280,&g_280,&g_280};
            int l_764[9] = {(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L),(-4L)};
            char l_765[4];
            unsigned short *l_766 = &g_141;
            char *l_771[9][8] = {{&l_517,&g_153[3],(void*)0,(void*)0,&l_517,(void*)0,&l_517,(void*)0},{&g_153[3],&l_517,&l_765[2],&g_153[2],(void*)0,&l_765[2],&l_517,&l_765[2]},{&l_765[2],&g_153[2],&l_517,&g_153[2],&l_765[2],&l_765[2],&g_153[2],(void*)0},{&l_765[3],&l_765[2],(void*)0,&l_765[3],&g_153[2],&l_765[3],&l_765[3],&g_153[2]},{&g_153[3],(void*)0,(void*)0,&g_153[3],&l_517,&l_765[2],&g_153[2],(void*)0},{&g_153[2],&l_517,&l_517,(void*)0,&l_517,&l_765[1],&l_517,(void*)0},{&l_765[2],&l_517,&l_765[2],(void*)0,&g_153[2],&l_765[2],&l_517,&g_153[3]},{&l_765[2],(void*)0,&l_765[3],&g_153[2],&l_765[3],&l_765[3],&g_153[2],&l_765[3]},{&l_765[2],&l_765[2],&l_765[1],(void*)0,&g_153[2],&l_765[2],&l_765[2],&g_153[2]}};
            int l_784 = 1L;
            int *l_797 = &g_84;
            char l_808[7][3] = {{(-8L),0xDDL,0x1BL},{(-8L),9L,1L},{(-8L),0x07L,(-8L)},{(-8L),0xDDL,0x1BL},{(-8L),9L,1L},{(-8L),0x07L,(-8L)},{(-8L),0xDDL,0x1BL}};
            unsigned short l_838[1][6] = {{0x13C1L,4UL,0x13C1L,0x13C1L,4UL,0x13C1L}};
            int i, j;
            for (i = 0; i < 4; i++)
                l_765[i] = 0xCAL;
            if ((l_772 = (safe_lshift_func_uint8_t_u_u(g_15, (((l_636 , ((safe_lshift_func_uint8_t_u_u((l_764[8] = l_662), 3)) , ((g_7 & (*l_756)) , (**g_244)))) , ((*l_766) = ((*l_756) = (l_765[2] <= 0x1391L)))) || (safe_rshift_func_int8_t_s_s(func_61((l_764[8] = ((safe_add_func_uint8_t_u_u((0xC6L <= (-1L)), g_331)) & 4294967295UL)), p_31, p_31), 2)))))))
            {
                int *l_793 = &g_2[1];
                int **l_796[1][3];
                int i, j;
                for (i = 0; i < 1; i++)
                {
                    for (j = 0; j < 3; j++)
                        l_796[i][j] = &g_505[3];
                }
                for (g_511 = 0; (g_511 <= 7); g_511 += 1)
                {
                    unsigned char l_783[4][4] = {{0x67L,0x67L,0x67L,0x67L},{0x67L,0x67L,0x67L,0x67L},{0x67L,0x67L,0x67L,0x67L},{0x67L,0x67L,0x67L,0x67L}};
                    int **l_786 = &l_755;
                    int i, j;
                    for (g_386 = 2; (g_386 <= 7); g_386 += 1)
                    {
                        int **l_773 = &g_505[2];
                        int *l_779 = &g_612;
                        (*l_773) = &g_6[0];
                        (*l_773) = &g_84;
                        (*l_779) = (l_516 = (safe_sub_func_int32_t_s_s(((p_31 > ((1UL >= ((p_32 , ((safe_sub_func_int8_t_s_s(0L, (l_515 = (*g_245)))) == ((*g_245) > (0x1422L == func_65(&g_7, p_30, &g_2[0], p_32))))) != 0UL)) | l_778[0])) , p_31), 0xDB2B1C41L)));
                    }
                    (*l_786) = func_40(l_780, &g_386, p_32, (((safe_sub_func_uint16_t_u_u((((func_61(l_765[0], l_783[3][3], ((*l_756) = l_784)) || l_764[2]) , (+0xFDB66E82L)) && l_516), 0x97DBL)) & l_785) || g_612));
                    (*l_786) = (*l_786);
                }
                g_505[1] = func_45(l_787, p_31, (p_31 , &g_5), p_32);
                l_797 = p_30;
            }
            else
            {
                unsigned l_798 = 0xD0205B39L;
                short *l_815 = &g_288;
                short **l_814[8];
                int l_817 = 1L;
                int l_819 = 0L;
                int *l_828[2];
                int i;
                for (i = 0; i < 8; i++)
                    l_814[i] = &l_815;
                for (i = 0; i < 2; i++)
                    l_828[i] = &l_636;
                (*l_756) = l_798;
                for (g_56 = 6; (g_56 >= 2); g_56 -= 1)
                {
                    short l_811 = 6L;
                    short **l_816 = &l_815;
                    int *l_818 = &l_792[1][1];
                    int i;
                    for (g_127 = 0; (g_127 <= 7); g_127 += 1)
                    {
                        int *l_805 = (void*)0;
                        int *l_809 = &g_75[3];
                        int i;
                        (*l_797) = ((func_65((((func_65(&g_612, (g_4 , ((safe_div_func_int16_t_s_s((safe_add_func_int16_t_s_s((safe_sub_func_int16_t_s_s(((+0xFF4F698CL) && (func_65(l_755, l_805, &g_2[1], ((*l_809) ^= ((1UL != (((*l_756) = (((p_31 > (safe_div_func_uint16_t_u_u(g_4, (*l_797)))) , g_4) | g_330)) , 0x41L)) <= l_808[5][0]))) >= l_810)), p_32)), 1L)), 1UL)) , &g_3)), p_30, p_31) , g_15) >= p_32) , &g_6[8]), p_30, &g_2[0], l_798) <= p_31) | p_32);
                        g_128[g_56] = &g_386;
                    }
                    for (l_515 = 1; (l_515 <= 6); l_515 += 1)
                    {
                        int i;
                        g_128[g_56] = p_30;
                        (*l_797) |= l_811;
                    }
                    if ((((**g_134) || (safe_lshift_func_int8_t_s_s((*g_245), (l_819 = ((l_817 = (l_814[6] != l_816)) == func_65(p_30, &g_7, &g_75[1], ((*l_818) = p_31))))))) , 0x44D7EB7DL))
                    {
                        int l_820 = (-2L);
                        int l_821 = 1L;
                        (*l_756) ^= func_61((l_820 |= (5L | ((*l_797) | (+0xE55AL)))), l_819, l_821);
                    }
                    else
                    {
                        (*l_756) ^= (-6L);
                        if (l_819)
                            break;
                        if (l_811)
                            continue;
                    }
                    if (l_798)
                    {
                        (*l_756) |= ((l_817 |= ((p_32 | ((void*)0 != l_822[0][0][3])) & (((safe_unary_minus_func_int8_t_s((func_65(((safe_lshift_func_uint16_t_u_u((safe_sub_func_int32_t_s_s(0xA9C9E58FL, ((void*)0 == l_665))), 10)) , &g_319), &g_3, l_828[0], g_75[2]) & (**g_134)))) , (*l_797)) < l_829))) == 65535UL);
                    }
                    else
                    {
                        unsigned l_830 = 0xCE9A5EA9L;
                        int **l_835 = &g_505[0];
                        l_830 = ((*l_797) = (*l_756));
                        if (l_811)
                            continue;
                        (*l_797) = (safe_add_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(((**g_134) & func_65(&g_5, ((*l_835) = p_30), &g_75[2], (((*l_815) = l_811) == 0x147FL))), 5)) || (safe_rshift_func_uint8_t_u_s(((((g_3 < p_32) || l_838[0][5]) >= p_31) ^ l_798), 3))), p_32));
                        if (l_811)
                            break;
                    }
                }
            }
            (*l_756) = (safe_unary_minus_func_uint32_t_u(func_65(&g_5, p_30, (((((*p_33) || func_61(l_808[0][2], ((0xE2L > ((((0x2608L <= l_840) != func_61(p_31, (&p_31 != (void*)0), p_31)) , g_153[4]) >= 0x2CL)) | 0xADL), l_841)) ^ 0x2BL) , 0x36D39448L) , l_797), p_32)));
            (*l_756) |= p_31;
        }
    }
    l_858 = (g_75[2] > (safe_add_func_uint16_t_u_u(g_3, ((l_844[0] = l_844[0]) != (((g_82 >= (((((0x9DL <= (l_857 = ((**g_244) && ((*l_854) = (safe_rshift_func_uint8_t_u_u((*p_33), (l_850 || (safe_div_func_uint8_t_u_u(g_6[0], p_32))))))))) != p_31) && 0UL) , (void*)0) == (*l_690))) , 0x87L) , (void*)0)))));
    for (p_31 = 15; (p_31 < (-10)); p_31 = safe_sub_func_int16_t_s_s(p_31, 7))
    {
        unsigned l_863 = 0xB4958426L;
        int l_875 = 1L;
        short *l_914 = (void*)0;
        short **l_913 = &l_914;
        int l_921 = 0xA6327228L;
        int *l_941 = &g_56;
        int **l_942 = &g_505[1];
        if ((safe_lshift_func_int8_t_s_s(0x26L, 3)))
        {
            unsigned char l_864[7][3][10] = {{{1UL,0UL,0x41L,0x4FL,0x58L,0x77L,0xAFL,0UL,3UL,3UL},{0UL,247UL,0x77L,0x8AL,0x8AL,0x77L,247UL,0UL,0x4FL,0xAFL},{1UL,0x41L,247UL,0UL,0UL,0x8AL,1UL,0xAFL,1UL,0x8AL}},{{0x90L,0UL,247UL,0UL,0x90L,0xAFL,0x4FL,0UL,247UL,0x77L},{0x4FL,0x58L,0x77L,0xAFL,0UL,3UL,3UL,0UL,0xAFL,0x77L},{0xAFL,0xAFL,0x41L,0x77L,0x90L,1UL,0UL,247UL,0UL,0x8AL}},{{247UL,1UL,0UL,247UL,0UL,247UL,0UL,1UL,247UL,0xAFL},{0x58L,0xAFL,0UL,0x90L,0x8AL,1UL,3UL,0UL,0UL,3UL},{247UL,0x77L,0x8AL,0x8AL,0x77L,247UL,0UL,0x4FL,0xAFL,0x90L}},{{0x90L,1UL,0UL,0x41L,0x58L,3UL,247UL,3UL,0x58L,0x41L},{0x90L,3UL,0x90L,1UL,1UL,247UL,0x41L,0UL,0UL,0x4FL},{247UL,0x41L,0UL,0UL,0x4FL,0x4FL,0UL,0UL,0x41L,247UL}},{{0x77L,247UL,0x90L,1UL,0UL,0x41L,0x58L,3UL,247UL,3UL},{0xAFL,0x90L,0UL,247UL,0UL,0x90L,0xAFL,0x4FL,0UL,247UL},{0UL,0x58L,0x8AL,0UL,0x4FL,1UL,1UL,1UL,1UL,0x4FL}},{{0UL,0x58L,0x58L,0UL,1UL,0UL,0xAFL,247UL,0UL,0x41L},{0x8AL,0x90L,0UL,0xAFL,0x58L,0UL,0x58L,0xAFL,0UL,0x90L},{0x4FL,247UL,3UL,0UL,0x77L,0x58L,247UL,0x8AL,0x41L,0x41L}},{{0x4FL,1UL,0x58L,0x90L,0x90L,0x58L,1UL,0x4FL,1UL,247UL},{0x77L,247UL,0UL,0x4FL,0xAFL,0x90L,0UL,247UL,0UL,0x90L},{1UL,0xAFL,0UL,0xAFL,1UL,247UL,1UL,0x4FL,1UL,0x58L}}};
            const char **l_888 = &g_245;
            const char ***l_887 = &l_888;
            int l_896 = 0x16328E67L;
            short ** const l_915 = (void*)0;
            short l_916[6][4] = {{(-1L),(-1L),0xB60CL,(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),0xB60CL,(-1L)},{(-1L),(-1L),(-1L),(-1L)},{(-1L),(-1L),(-1L),(-1L)}};
            unsigned short *l_920 = &g_127;
            int i, j, k;
            if ((l_864[5][2][2] = l_863))
            {
                char l_879[7][8] = {{4L,4L,1L,0x47L,1L,4L,4L,1L},{0x33L,1L,1L,0x33L,0x1DL,0x33L,1L,1L},{1L,0x1DL,0x47L,0x47L,0x1DL,1L,0x1DL,0x47L},{0x33L,0x1DL,0x33L,1L,1L,0x33L,0x1DL,0x33L},{4L,1L,0x47L,1L,4L,0x33L,0x47L,4L},{0x33L,0x33L,0x47L,4L,0x47L,0x33L,0x33L,0x47L},{0x1DL,0x47L,0x47L,0x1DL,1L,0x1DL,0x47L,0x47L}};
                int l_889[5][1];
                int i, j;
                for (i = 0; i < 5; i++)
                {
                    for (j = 0; j < 1; j++)
                        l_889[i][j] = 0xFD50AE16L;
                }
                if (l_864[5][2][2])
                    break;
                for (g_608 = 5; (g_608 >= 0); g_608 -= 1)
                {
                    char l_877 = 0x1CL;
                    unsigned l_878 = 0UL;
                    unsigned char l_901 = 1UL;
                    l_879[5][1] = (safe_lshift_func_uint16_t_u_u((safe_mod_func_int8_t_s_s(l_864[5][2][2], (*g_245))), p_32));
                    for (l_785 = 0; (l_785 <= 7); l_785 += 1)
                    {
                        short l_882 = 0x539AL;
                        int **l_897 = &g_128[5];
                        l_882 = (safe_sub_func_uint32_t_u_u((*g_135), p_32));
                        l_896 ^= ((safe_sub_func_uint32_t_u_u(0x40B2514BL, (safe_div_func_uint8_t_u_u(((((void*)0 == l_887) , (l_877 & ((*g_135) > l_875))) >= l_882), p_32)))) != 0x8AL);
                        p_30 = ((*l_897) = &g_7);
                    }
                    for (g_141 = 0; (g_141 <= 7); g_141 += 1)
                    {
                        if (l_863)
                            break;
                        if (l_896)
                            continue;
                        if (l_877)
                            continue;
                        g_900 = (safe_lshift_func_int8_t_s_u(0x2EL, 5));
                    }
                    for (g_386 = 3; (g_386 >= 0); g_386 -= 1)
                    {
                        int i;
                        l_901 &= g_75[g_386];
                        return p_33;
                    }
                }
                return &g_15;
            }
            else
            {
                int l_902 = 0xCD42B175L;
                l_902 ^= (l_896 = ((l_875 = l_875) , p_31));
            }
            l_875 = 0xEB8A8621L;
            l_875 = (l_921 |= (safe_mod_func_int16_t_s_s(((safe_div_func_uint8_t_u_u((*p_33), (*p_33))) , (safe_add_func_uint32_t_u_u((+p_32), ((safe_lshift_func_uint8_t_u_u(l_875, (safe_rshift_func_uint8_t_u_s(((l_913 != l_915) | ((*l_920) = ((l_916[1][1] != (safe_rshift_func_int16_t_s_u((l_863 , (func_65(func_45((safe_unary_minus_func_uint16_t_u(0xAC58L)), (*g_876), &l_896, l_863), &l_875, p_30, (*g_876)) < (*p_33))), p_31))) , p_31))), 0)))) == 0x56EB17BFL)))), l_875)));
        }
        else
        {
            int l_930 = (-10L);
            int *l_935 = &l_515;
            int **l_936 = &l_935;
            l_921 = l_863;
            if (l_921)
                continue;
            for (g_511 = 0; (g_511 > 45); g_511 = safe_add_func_int8_t_s_s(g_511, 2))
            {
                unsigned char l_926[6][3] = {{255UL,0x8CL,0x8CL},{249UL,1UL,249UL},{255UL,255UL,0x8CL},{0xC8L,1UL,0xC8L},{255UL,0x8CL,0x8CL},{249UL,1UL,249UL}};
                int *l_932 = (void*)0;
                int i, j;
                if ((((*l_854) = p_32) | ((safe_add_func_uint16_t_u_u(g_900, 0xA6ECL)) && l_926[0][1])))
                {
                    return p_33;
                }
                else
                {
                    int **l_931[2];
                    int i;
                    for (i = 0; i < 2; i++)
                        l_931[i] = &g_128[5];
                    (*l_929) = (safe_mod_func_int8_t_s_s(func_65(&l_875, l_929, &g_75[3], l_930), 6UL));
                    l_932 = (p_30 = (g_128[4] = p_30));
                    if (l_875)
                        continue;
                    for (g_331 = 25; (g_331 != 24); g_331 = safe_sub_func_uint16_t_u_u(g_331, 7))
                    {
                        g_505[2] = l_935;
                        (*l_929) = p_31;
                    }
                }
            }
            (*l_936) = &g_386;
        }
        (*l_942) = func_45((((*l_929) = (((safe_div_func_int8_t_s_s(p_32, (*l_929))) <= l_875) > (safe_rshift_func_uint8_t_u_s(0xC4L, (((*l_929) , func_65(&l_858, &l_921, l_941, l_863)) != g_585))))) ^ p_32), (*g_876), &l_921, p_32);
    }
    return p_33;
}







static unsigned func_34(int * p_35, unsigned short p_36, const short p_37, int p_38, unsigned p_39)
{
    const int l_342 = 0x8FDB146EL;
    int *l_343[6][8][1] = {{{&g_82},{&g_84},{(void*)0},{&g_6[9]},{(void*)0},{&g_84},{&g_82},{&g_84}},{{(void*)0},{&g_6[9]},{(void*)0},{&g_84},{&g_82},{&g_84},{(void*)0},{&g_6[9]}},{{(void*)0},{&g_84},{&g_82},{&g_84},{(void*)0},{&g_6[9]},{(void*)0},{&g_84}},{{&g_82},{&g_84},{(void*)0},{&g_6[9]},{(void*)0},{&g_84},{&g_82},{&g_84}},{{(void*)0},{&g_6[9]},{(void*)0},{&g_84},{&g_82},{&g_84},{(void*)0},{&g_6[9]}},{{(void*)0},{&g_84},{&g_82},{&g_84},{(void*)0},{&g_6[9]},{(void*)0},{&g_84}}};
    unsigned char l_344 = 0x65L;
    unsigned l_367[8][3] = {{0x47FC0E88L,0x23BE1CA8L,0x6792CEC7L},{0x23BE1CA8L,0x19DE1A63L,0x19DE1A63L},{18446744073709551609UL,0x47FC0E88L,0x6792CEC7L},{0xDB5AF54CL,1UL,0x19DE1A63L},{0UL,0xDB5AF54CL,18446744073709551609UL},{0x6792CEC7L,18446744073709551610UL,0x6792CEC7L},{18446744073709551609UL,0xDB5AF54CL,0UL},{0x19DE1A63L,1UL,0UL}};
    char l_477[3][1][9] = {{{0xA0L,0x52L,0xA0L,0xA0L,0x52L,0xA0L,0xA0L,0x52L,0xA0L}},{{0xA0L,0x52L,0xA0L,0xA0L,0x52L,0xA0L,0xA0L,0x52L,0xA0L}},{{0xA0L,0x52L,0xA0L,0xA0L,0x52L,0xA0L,0xA0L,0x52L,0xA0L}}};
    int i, j, k;
    l_344 &= (safe_lshift_func_int16_t_s_u((g_102[1] != g_15), l_342));
    for (g_319 = (-21); (g_319 < 2); g_319++)
    {
        unsigned short l_351 = 0UL;
        int l_352[4] = {0x7E8BED67L,0x7E8BED67L,0x7E8BED67L,0x7E8BED67L};
        int l_359 = 0x6002CCF0L;
        int l_368[1][2];
        int l_369 = (-5L);
        unsigned l_403 = 1UL;
        int *l_434 = &g_84;
        int **l_442 = &g_419;
        unsigned char *l_480 = (void*)0;
        unsigned char **l_479 = &l_480;
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 2; j++)
                l_368[i][j] = (-1L);
        }
        for (g_331 = 0; (g_331 <= 15); g_331 = safe_add_func_int32_t_s_s(g_331, 8))
        {
            char l_355 = 6L;
            unsigned short l_400[5];
            int * const l_409 = &g_4;
            int *l_416 = (void*)0;
            int l_420[4];
            int l_444 = (-2L);
            unsigned char *l_453 = (void*)0;
            unsigned char **l_452[6][7] = {{(void*)0,&l_453,(void*)0,&l_453,(void*)0,&l_453,(void*)0},{&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453},{(void*)0,&l_453,(void*)0,&l_453,(void*)0,&l_453,(void*)0},{&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453},{(void*)0,&l_453,(void*)0,&l_453,(void*)0,&l_453,(void*)0},{&l_453,&l_453,&l_453,&l_453,&l_453,&l_453,&l_453}};
            unsigned char *l_504 = &g_385;
            int i, j;
            for (i = 0; i < 5; i++)
                l_400[i] = 0UL;
            for (i = 0; i < 4; i++)
                l_420[i] = 1L;
            l_352[2] |= ((safe_mod_func_uint16_t_u_u(0x5ECDL, l_351)) > 0xF6L);
            for (g_280 = 6; (g_280 >= 30); ++g_280)
            {
                int l_356 = (-4L);
                int **l_424 = &l_416;
                char l_432 = (-5L);
                if (((l_355 , 0L) || l_356))
                {
                    int *l_364 = &l_352[2];
                    int l_366 = 0xA35D8650L;
                    for (p_39 = (-29); (p_39 >= 43); p_39 = safe_add_func_uint32_t_u_u(p_39, 3))
                    {
                        unsigned char *l_365 = (void*)0;
                        int l_370 = 1L;
                        unsigned *l_383 = &g_384;
                        l_370 = (l_369 = (l_368[0][1] = ((l_359 , (((safe_sub_func_uint8_t_u_u(((65528UL > p_38) || p_37), (l_359 &= func_61((safe_sub_func_uint32_t_u_u((func_65(p_35, func_45(p_38, g_7, &l_356, l_351), l_364, p_39) <= p_39), p_36)), l_351, g_15)))) , l_366) , g_319)) >= l_367[3][0])));
                        g_386 |= func_61(l_352[2], (safe_sub_func_int8_t_s_s((safe_add_func_int8_t_s_s((!((~(safe_add_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((g_385 = ((safe_mod_func_uint32_t_u_u((**g_134), (safe_lshift_func_uint16_t_u_s(g_330, (func_65(&g_3, p_35, &g_2[0], g_153[4]) > ((((*l_383) ^= 0x774B7937L) >= (*g_135)) && p_36)))))) == p_37)), 7)), 4L))) , p_39)), l_366)), p_37)), (*p_35));
                    }
                    l_366 = ((safe_lshift_func_uint8_t_u_s(251UL, 3)) ^ p_36);
                    if ((*p_35))
                        continue;
                }
                else
                {
                    char l_390[2][8][8] = {{{0xACL,0x10L,0x95L,0x10L,0xACL,0xDEL,1L,0x10L},{(-1L),0x10L,(-10L),(-1L),0xACL,(-1L),(-10L),0x10L},{0xACL,(-1L),(-10L),0x10L,(-1L),(-1L),1L,(-1L)},{0xACL,0x10L,0x95L,0x10L,0xACL,0xDEL,1L,0x10L},{(-1L),0x10L,(-10L),(-1L),0xACL,(-1L),(-10L),0x10L},{0xACL,(-1L),(-10L),0x10L,(-1L),(-1L),1L,(-1L)},{0xACL,0x10L,0x95L,0x10L,0xACL,0xDEL,1L,0x10L},{(-1L),0x10L,(-10L),(-1L),0xACL,(-1L),(-10L),0x10L}},{{0xACL,(-1L),(-10L),0x10L,(-1L),(-1L),1L,(-1L)},{0xACL,0x10L,0x95L,0x10L,0xACL,0xDEL,1L,0x10L},{(-1L),0x10L,(-10L),(-1L),0xACL,(-1L),(-10L),0x10L},{0xACL,(-1L),(-10L),0x10L,(-1L),(-1L),1L,(-1L)},{0xACL,0x10L,0x95L,0x10L,0xACL,0xDEL,1L,0x10L},{5L,(-1L),0x95L,0xDEL,(-1L),0xDEL,0x95L,(-1L)},{(-1L),0xDEL,0x95L,(-1L),5L,0xDEL,(-10L),0xDEL},{(-1L),(-1L),1L,(-1L),(-1L),0x10L,(-10L),(-1L)}}};
                    int **l_423 = &g_419;
                    int *l_441 = &g_3;
                    short *l_443 = &g_288;
                    int i, j, k;
                    if ((*p_35))
                    {
                        int * const l_389 = &g_82;
                        char *l_391 = (void*)0;
                        int **l_392 = &l_343[0][5][0];
                        (*l_392) = func_45(l_355, p_36, l_389, ((l_355 & (p_39 , l_390[0][6][6])) , (l_391 != (func_61(p_38, (p_36 , p_36), l_390[0][5][6]) , l_391))));
                        if ((*p_35))
                            continue;
                    }
                    else
                    {
                        char *l_393 = &g_153[7];
                        int l_397[2];
                        unsigned *l_404 = &g_384;
                        unsigned *l_410 = &g_102[0];
                        int l_415 = 0x40F323D7L;
                        int *l_417 = &l_415;
                        int **l_418[10] = {&l_416,&l_417,&l_416,&l_417,&l_416,&l_417,&l_416,&l_417,&l_416,&l_417};
                        int i;
                        for (i = 0; i < 2; i++)
                            l_397[i] = (-9L);
                        l_356 = ((((*l_404) = func_61(((*l_393) = l_390[0][6][6]), p_39, (((l_359 = (safe_add_func_uint32_t_u_u((safe_unary_minus_func_uint16_t_u((((l_397[1] || (((safe_sub_func_uint8_t_u_u(((l_400[2] , (l_356 , p_38)) , l_368[0][1]), ((*g_135) == ((*l_404) = ((((safe_add_func_uint32_t_u_u((l_403 == p_37), (**g_134))) | 0x300A990EL) ^ p_36) < (*g_135)))))) > 0UL) < 1UL)) && (-1L)) > (*p_35)))), l_356))) != p_37) , (*p_35)))) ^ l_397[1]) > g_3);
                        l_397[1] = (((p_36 | ((safe_lshift_func_int8_t_s_u((((g_419 = l_417) == (void*)0) | p_37), 4)) , p_36)) , &g_102[1]) == (void*)0);
                        return l_403;
                    }
                    l_420[2] = (*p_35);
                    for (l_359 = 6; (l_359 >= 0); l_359 -= 1)
                    {
                        int ***l_425 = &l_424;
                        unsigned short *l_430[10][9][2] = {{{&l_400[4],&g_141},{&l_400[2],&l_351},{&g_141,&l_351},{&l_400[2],&g_141},{&l_400[4],&l_400[4]},{&l_400[4],&g_141},{&l_400[2],&l_351},{&g_141,&l_351},{&l_400[2],&g_141}},{{&l_400[4],&l_400[4]},{&l_400[4],&g_141},{&l_400[2],&l_351},{&g_141,&l_351},{&l_400[2],&g_141},{&l_400[4],&l_400[4]},{&l_400[4],&g_141},{&l_400[2],&l_351},{&g_141,&l_351}},{{&l_400[2],&g_141},{&l_400[4],&l_400[4]},{&l_400[4],&g_141},{&l_400[2],&l_351},{&g_141,&l_351},{&l_400[2],&g_141},{&l_400[4],&l_400[4]},{&l_400[4],&g_141},{&l_400[2],&l_351}},{{&g_141,&l_351},{&l_400[2],&g_141},{&l_400[4],&l_400[4]},{&l_400[4],&l_400[0]},{&l_351,&g_141},{&l_400[0],&g_141},{&l_351,&l_400[0]},{&l_400[2],&l_400[2]},{&l_400[2],&l_400[0]}},{{&l_351,&g_141},{&l_400[0],&g_141},{&l_351,&l_400[0]},{&l_400[2],&l_400[2]},{&l_400[2],&l_400[0]},{&l_351,&g_141},{&l_400[0],&g_141},{&l_351,&l_400[0]},{&l_400[2],&l_400[2]}},{{&l_400[2],&l_400[0]},{&l_351,&g_141},{&l_400[0],&g_141},{&l_351,&l_400[0]},{&l_400[2],&l_400[2]},{&l_400[2],&l_400[0]},{&l_351,&g_141},{&l_400[0],&g_141},{&l_351,&l_400[0]}},{{&l_400[2],&l_400[2]},{&l_400[2],&l_400[0]},{&l_351,&g_141},{&l_400[0],&g_141},{&l_351,&l_400[0]},{&l_400[2],&l_400[2]},{&l_400[2],&l_400[0]},{&l_351,&g_141},{&l_400[0],&g_141}},{{&l_351,&l_400[0]},{&l_400[2],&l_400[2]},{&l_400[2],&l_400[0]},{&l_351,&g_141},{&l_400[0],&g_141},{&l_351,&l_400[0]},{&l_400[2],&l_400[2]},{&l_400[2],&l_400[0]},{&l_351,&g_141}},{{&l_400[0],&g_141},{&l_351,&l_400[0]},{&l_400[2],&l_400[2]},{&l_400[2],&l_400[0]},{&l_351,&g_141},{&l_400[0],&g_141},{&l_400[0],&l_400[2]},{&g_141,&g_141},{&g_141,&l_400[2]}},{{&l_400[0],&l_400[4]},{&l_400[2],&l_400[4]},{&l_400[0],&l_400[2]},{&g_141,&g_141},{&g_141,&l_400[2]},{&l_400[0],&l_400[4]},{&l_400[2],&l_400[4]},{&l_400[0],&l_400[2]},{&g_141,&g_141}}};
                        int l_431 = 0x268097A9L;
                        int **l_433[2];
                        int i, j, k;
                        for (i = 0; i < 2; i++)
                            l_433[i] = &g_128[5];
                        l_356 |= g_153[(l_359 + 1)];
                        l_432 ^= ((l_431 = ((65535UL && (l_423 == ((*l_425) = l_424))) == ((((safe_div_func_int8_t_s_s((4294967292UL >= (l_420[2] = (func_61(p_37, ((safe_mod_func_int32_t_s_s((l_356 , (l_403 == 0x1DE7L)), (*p_35))) , 4294967292UL), g_153[(l_359 + 1)]) <= 0L))), p_39)) , p_38) && 0L) <= l_351))) < 1UL);
                        l_434 = func_45(l_359, (*g_419), &l_356, p_39);
                    }
                    l_444 = ((safe_sub_func_uint8_t_u_u(p_36, (safe_sub_func_int16_t_s_s(((*l_443) |= ((((p_36 == (((safe_add_func_uint8_t_u_u(248UL, (p_37 != ((l_420[1] = func_65(&l_359, l_441, ((*l_424) = l_416), p_38)) & (*p_35))))) <= 1L) , 0xF606L)) , l_442) == (void*)0) | p_36)), p_36)))) | (*g_135));
                }
            }
            for (g_141 = 0; (g_141 == 9); g_141++)
            {
                unsigned short *l_449 = &l_400[2];
                unsigned char *l_451 = &g_385;
                unsigned char * const *l_450 = &l_451;
                short *l_454 = &g_288;
                char *l_455 = &g_153[4];
                int l_461[2][9][2] = {{{(-1L),(-6L)},{1L,(-6L)},{(-1L),(-6L)},{1L,(-6L)},{(-1L),(-6L)},{1L,(-6L)},{(-1L),(-6L)},{1L,(-6L)},{(-1L),(-6L)}},{{1L,(-6L)},{(-1L),(-6L)},{1L,(-6L)},{(-1L),(-6L)},{1L,(-6L)},{(-1L),(-6L)},{1L,(-6L)},{(-1L),(-6L)},{1L,(-6L)}}};
                int *l_502 = (void*)0;
                int i, j, k;
                l_420[2] |= (safe_mod_func_int32_t_s_s((0xADL > ((p_36 <= ((*l_449) = p_37)) > ((*l_455) |= (((((0x68B4F459L || (((void*)0 == &l_367[3][0]) & ((l_450 == l_452[2][0]) == ((*l_454) ^= p_38)))) <= (*l_409)) , (*g_135)) , g_331) < 0xD100L)))), 0xA0BECA20L));
                if ((safe_mod_func_int16_t_s_s(p_37, p_37)))
                {
                    char l_460 = 0xECL;
                    int l_462 = (-1L);
                    for (l_403 = 28; (l_403 > 26); l_403 = safe_sub_func_int16_t_s_s(l_403, 2))
                    {
                        l_460 |= 0x3D109C56L;
                        if ((*p_35))
                            continue;
                        l_462 |= ((l_461[0][7][0] , ((*g_135) = (p_38 , 2UL))) , 0x5DFB46C0L);
                    }
                    if (l_460)
                        break;
                }
                else
                {
                    short l_475 = 0L;
                    int l_476 = (-1L);
                    if ((*p_35))
                        break;
                    for (g_127 = (-8); (g_127 <= 39); ++g_127)
                    {
                        unsigned char l_465 = 246UL;
                        int l_466 = 0x99C48B1EL;
                        int **l_467 = &l_343[5][0][0];
                        unsigned *l_478 = &l_403;
                        l_466 |= l_465;
                        (*l_467) = &l_466;
                        l_466 = ((safe_lshift_func_uint8_t_u_s((safe_unary_minus_func_uint32_t_u(((*l_478) ^= (safe_mod_func_int32_t_s_s(4L, func_65((((+(safe_sub_func_int32_t_s_s(0xA1A426F7L, ((l_475 , (l_476 ^= func_65(((*l_467) = &g_84), &l_461[0][7][0], &g_2[0], (p_38 = func_65(&g_84, &l_369, (p_36 , &p_38), (*l_434)))))) >= l_477[2][0][7])))) && (*g_135)) , (void*)0), &g_386, p_35, (*g_419))))))), 7)) & (*g_245));
                    }
                }
                if ((l_479 != g_264))
                {
                    unsigned l_481 = 1UL;
                    int *l_483 = (void*)0;
                    char l_501[9][9][3] = {{{0x08L,(-1L),0x9EL},{(-3L),0x59L,0x39L},{(-1L),(-4L),(-3L)},{0x63L,(-3L),0x39L},{0x15L,1L,0x9EL},{(-6L),0L,0L},{0xDEL,(-4L),0x0CL},{(-6L),0xCDL,0L},{0x15L,(-1L),(-1L)}},{{0x63L,1L,0L},{(-1L),(-1L),0x3FL},{(-3L),0xCDL,0x39L},{1L,(-1L),0xF7L},{(-6L),(-1L),(-4L)},{(-1L),0xEFL,0x0CL},{0xCDL,(-1L),0x39L},{0xDFL,(-1L),0L},{0xCDL,0L,0x9DL}},{{(-1L),8L,0L},{(-6L),(-6L),0x39L},{1L,8L,(-1L)},{(-1L),0L,(-4L)},{(-10L),(-1L),7L},{(-6L),(-1L),(-4L)},{0x08L,0xEFL,(-1L)},{0xCDL,(-1L),0x39L},{4L,(-1L),0L}},{{0xCDL,(-3L),0x9DL},{0x08L,8L,0L},{(-6L),0x8EL,0x39L},{(-10L),8L,0x0CL},{(-1L),(-3L),(-4L)},{1L,(-1L),0xF7L},{(-6L),(-1L),(-4L)},{(-1L),0xEFL,0x0CL},{0xCDL,(-1L),0x39L}},{{0xDFL,(-1L),0L},{0xCDL,0L,0x9DL},{(-1L),8L,0L},{(-6L),(-6L),0x39L},{1L,8L,(-1L)},{(-1L),0L,(-4L)},{(-10L),(-1L),7L},{(-6L),(-1L),0x59L},{0xB7L,0x90L,0x08L}},{{0xFDL,0xAFL,0x8EL},{0L,0x09L,(-10L)},{0xFDL,1L,(-1L)},{0xB7L,0x9CL,1L},{1L,1L,0x8EL},{(-8L),0x9CL,(-1L)},{0x25L,1L,0x59L},{(-8L),0x09L,0xDFL},{1L,0xAFL,0x59L}},{{0xA8L,0x90L,(-1L)},{0xFDL,0x25L,0x8EL},{1L,0x09L,1L},{0xFDL,(-6L),(-1L)},{0xA8L,0x9CL,(-10L)},{1L,1L,0x8EL},{(-8L),0x9CL,0x08L},{0x25L,(-6L),0x59L},{(-8L),0x09L,4L}},{{1L,0x25L,0x59L},{0xB7L,0x90L,0x08L},{0xFDL,0xAFL,0x8EL},{0L,0x09L,(-10L)},{0xFDL,1L,(-1L)},{0xB7L,0x9CL,1L},{1L,1L,0x8EL},{(-8L),0x9CL,(-1L)},{0x25L,1L,0x59L}},{{(-8L),0x09L,0xDFL},{1L,0xAFL,0x59L},{0xA8L,0x90L,(-1L)},{0xFDL,0x56L,0x59L},{0L,0x9CL,0L},{1L,0xAFL,1L},{(-8L),2L,0xDEL},{0xFDL,0xFDL,0x59L},{0L,2L,1L}}};
                    int **l_506 = &l_502;
                    int i, j, k;
                    if ((l_368[0][0] = ((func_65((((l_481 , (g_482[4] != (void*)0)) , (~((void*)0 == &p_39))) , &g_3), l_483, &g_56, (safe_div_func_uint32_t_u_u((((safe_mod_func_uint8_t_u_u(((~((safe_sub_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(0x106EL)), 0xDDB7L)) , (***g_243))) < 1L), p_38)) <= l_461[1][3][0]) >= (*p_35)), (-1L)))) >= (*p_35)) , (*p_35))))
                    {
                        unsigned short l_493 = 0x22EFL;
                        int **l_500 = &l_483;
                        l_461[1][1][0] = (((safe_lshift_func_int16_t_s_u(((p_36 = ((*p_35) > ((***g_243) ^ l_461[1][1][1]))) && g_331), (l_493 && (safe_sub_func_int8_t_s_s((**g_244), p_38))))) < (*l_409)) ^ (((p_39 = (((*l_454) = 0xD37DL) != p_39)) || (**g_134)) == 0x96L));
                        (*l_500) = ((safe_mod_func_uint8_t_u_u(((5UL & l_461[0][6][0]) >= (safe_add_func_int8_t_s_s((**g_244), p_37))), 0xA1L)) , &l_368[0][0]);
                        (*l_500) = &g_84;
                    }
                    else
                    {
                        short l_503 = 0xA55BL;
                        l_501[7][7][2] &= l_461[1][2][1];
                        l_359 |= (*p_35);
                        l_503 |= func_65(l_483, l_502, (*l_442), (*g_419));
                    }
                    l_368[0][0] &= ((func_65(&l_461[1][7][1], p_35, &g_56, p_39) ^ ((&g_385 != l_504) == (p_38 | (1L | p_38)))) , (*p_35));
                    (*l_506) = g_505[1];
                }
                else
                {
                    int l_509 = 6L;
                    int **l_510 = &g_505[1];
                    l_509 = ((*l_409) & ((safe_sub_func_uint32_t_u_u(func_65(p_35, &g_6[0], &p_38, (((*l_434) >= ((((((*l_442) = (p_36 , &g_75[2])) != &g_75[2]) || 0xEE1CL) , p_39) , (*l_434))) < (***g_243))), 0L)) || 250UL));
                    (*l_510) = &g_386;
                    for (g_288 = 1; (g_288 >= 0); g_288 -= 1)
                    {
                        int i;
                        return g_102[g_288];
                    }
                }
            }
            if ((g_511 = 0x803D52B5L))
            {
                int **l_512 = &l_343[1][5][0];
                (*l_512) = func_45(p_39, p_38, p_35, g_330);
            }
            else
            {
                return (*g_135);
            }
        }
    }
    return (**g_134);
}







static int * func_40(unsigned char * p_41, int * p_42, unsigned p_43, int p_44)
{
    char *l_257 = &g_153[8];
    char **l_256[7] = {&l_257,&l_257,&l_257,&l_257,&l_257,&l_257,&l_257};
    char ***l_255 = &l_256[3];
    int l_258 = 0xB1545FFFL;
    int *l_259[9] = {&g_82,&l_258,&l_258,&g_82,&l_258,&l_258,&g_82,&l_258,&l_258};
    int l_260[4];
    int i;
    for (i = 0; i < 4; i++)
        l_260[i] = (-9L);
    l_260[0] ^= (safe_add_func_int8_t_s_s(((l_255 != &l_256[2]) != l_258), (*p_41)));
    if ((*p_42))
    {
        const unsigned char l_281 = 0xC2L;
        int l_291[1][3];
        int i, j;
        for (i = 0; i < 1; i++)
        {
            for (j = 0; j < 3; j++)
                l_291[i][j] = 0L;
        }
        for (p_44 = 0; (p_44 >= (-25)); --p_44)
        {
            int **l_263 = &l_259[6];
            short *l_265 = &g_159[0][0];
            int *l_266 = &g_2[0];
            unsigned **l_277 = &g_135;
            int l_278 = 5L;
            const unsigned l_290 = 0x6C617639L;
            int * const l_292 = &g_6[8];
            char l_310 = 0L;
            int l_312[2][7][2] = {{{0x91785BB1L,1L},{0x91785BB1L,0x91785BB1L},{1L,0x91785BB1L},{0x91785BB1L,1L},{0x91785BB1L,0x91785BB1L},{1L,0x91785BB1L},{0x91785BB1L,1L}},{{0x91785BB1L,0x91785BB1L},{1L,0x91785BB1L},{0x91785BB1L,1L},{0x91785BB1L,0x91785BB1L},{1L,0x91785BB1L},{0x91785BB1L,1L},{0x91785BB1L,0x91785BB1L}}};
            unsigned l_313[5] = {0UL,0UL,0UL,0UL,0UL};
            int i, j, k;
            (*l_263) = &l_258;
            if (func_65(&g_82, func_45(((*l_265) = (g_264 != &p_41)), func_65(p_42, p_42, l_266, (**l_263)), &g_7, p_43), &g_2[1], p_44))
            {
                int **l_272 = &g_128[5];
                int **l_273 = (void*)0;
                int **l_274 = &l_266;
                unsigned char *l_279 = &g_280;
                int *l_282 = &l_258;
                short *l_287 = &g_288;
                int *l_289 = &g_84;
                (*l_282) &= ((((safe_add_func_uint8_t_u_u(((*l_279) ^= (safe_div_func_uint32_t_u_u(4294967295UL, (safe_unary_minus_func_int32_t_s((l_278 = (func_65(((*l_272) = ((*l_263) = p_42)), &g_4, ((*l_274) = &g_2[1]), ((***g_243) ^ ((g_82 != ((*g_245) , (l_277 != (void*)0))) > l_260[0]))) < 0x3993L))))))), l_281)) & 0x16L) , g_6[0]) != 0UL);
                (*l_263) = func_45(g_75[1], (l_291[0][2] = ((!(func_65(&g_3, &g_82, &p_44, (safe_add_func_uint8_t_u_u((g_6[0] == ((((safe_rshift_func_uint16_t_u_s(0x3325L, ((*l_287) = ((*l_265) = p_43)))) , p_44) , (func_65(l_289, p_42, &g_75[2], p_43) <= (*p_41))) , l_290)), (**g_244)))) | 4294967295UL)) & l_281)), l_292, g_2[1]);
            }
            else
            {
                char l_308 = 0x5AL;
                int *l_309 = &g_75[2];
                int l_311 = 4L;
                char **l_318 = &l_257;
                l_313[4] &= (safe_sub_func_int32_t_s_s((((safe_sub_func_int32_t_s_s((*p_42), 0xDE01A913L)) == ((((**l_277) = (safe_div_func_uint32_t_u_u((((p_44 && ((safe_rshift_func_int16_t_s_u((-2L), (((((l_291[0][0] = (*p_42)) ^ (safe_unary_minus_func_int8_t_s(((l_310 &= (safe_div_func_uint16_t_u_u((((**g_244) && (safe_rshift_func_int16_t_s_s((((((((*l_309) |= (((l_308 = (0x64BEL <= g_159[0][0])) != (**l_263)) > l_281)) , l_281) > (*p_42)) , (*p_41)) | (**g_244)) == (**l_263)), 5))) > g_4), p_43))) < (*p_41))))) , l_308) ^ (*p_41)) && (-2L)))) & p_44)) >= l_311) > (*p_41)), p_43))) > l_312[1][5][0]) > 0x0818E70DL)) == (*p_41)), (*l_292)));
                (*l_263) = func_45(g_141, ((*l_255) != (((p_44 & (((((1L == (&g_244 != (void*)0)) ^ ((p_44 & (l_308 != (*p_42))) <= (***g_243))) , l_291[0][2]) , g_73[1][3][0]) , g_73[5][4][3])) ^ p_44) , l_318)), &g_6[1], g_102[1]);
                l_278 = (*p_42);
            }
            if ((*p_42))
                break;
        }
    }
    else
    {
        int *l_321 = &g_56;
        int ** const l_320 = &l_321;
        int l_322[7][8] = {{2L,0xAFC1F1D4L,2L,0x9774D5AFL,8L,0x7CC61FBEL,(-1L),0x33DCA61DL},{1L,8L,2L,0x7CC61FBEL,0x7CC61FBEL,2L,8L,1L},{1L,0x9774D5AFL,0L,2L,8L,0L,2L,0L},{2L,0x20CC7A63L,0x33DCA61DL,0x20CC7A63L,2L,0L,2L,0x33DCA61DL},{0xAFC1F1D4L,2L,(-1L),0L,0L,0L,0L,(-1L)},{0x33DCA61DL,0x33DCA61DL,(-1L),0x7CC61FBEL,8L,0x9774D5AFL,2L,0xAFC1F1D4L},{0L,2L,0x20CC7A63L,0x33DCA61DL,0x20CC7A63L,2L,0L,0xAFC1F1D4L}};
        int l_323 = 0L;
        short *l_328 = (void*)0;
        short *l_329 = &g_159[3][2];
        int **l_338 = &l_259[6];
        int i, j;
        g_331 &= ((g_330 ^= ((0x4173EEF1L ^ 9L) & (func_61(func_61((l_322[6][3] = ((*l_257) = (g_319 > (l_320 != &l_321)))), l_323, (((safe_sub_func_uint16_t_u_u(p_44, g_2[1])) , (safe_rshift_func_int16_t_s_u(((*l_329) = g_159[0][0]), 8))) ^ p_43)), p_43, g_6[9]) < 0L))) , (*p_42));
        for (g_56 = 0; (g_56 > (-15)); g_56 = safe_sub_func_int16_t_s_s(g_56, 9))
        {
            short ***l_335 = &g_334;
            (*l_335) = g_334;
        }
        (*l_338) = func_45((safe_mod_func_uint8_t_u_u((l_322[6][3] &= 0x87L), (*p_41))), (p_44 & 0x44L), &l_260[0], g_331);
        (*l_338) = &l_260[2];
    }
    return &g_6[3];
}







static int * func_45(short p_46, int p_47, int * const p_48, unsigned p_49)
{
    int *l_70 = &g_6[0];
    int **l_250 = &l_70;
    int *l_251 = &g_84;
    for (g_56 = 0; (g_56 != 9); g_56 = safe_add_func_uint8_t_u_u(g_56, 2))
    {
        unsigned *l_71 = (void*)0;
        unsigned *l_72 = &g_73[5][4][3];
        int *l_74 = &g_75[2];
        int *l_210 = &g_84;
        int l_220 = 0xB2783F5DL;
        unsigned char *l_237 = &g_15;
        unsigned char **l_236 = &l_237;
        char *l_242 = &g_153[8];
        char **l_241[7] = {&l_242,&l_242,&l_242,&l_242,&l_242,&l_242,&l_242};
        char ***l_240 = &l_241[4];
        unsigned **l_249[9] = {&l_71,&l_72,&l_72,&l_71,&l_72,&l_72,&l_71,&l_72,&l_72};
        int i;
        (*l_210) = (safe_mod_func_int16_t_s_s(func_61(((void*)0 != &p_47), func_65(l_70, l_70, &p_47, ((*l_74) = (((*l_72) = g_15) | (*l_70)))), g_2[0]), g_2[1]));
        if ((safe_sub_func_uint16_t_u_u((*l_70), func_65(l_70, (p_46 , (void*)0), &g_75[3], g_75[2]))))
        {
            int l_225 = 0x30807B0CL;
            int l_232 = 1L;
            int **l_233 = &g_128[5];
            for (g_82 = 0; (g_82 != 17); g_82 = safe_add_func_int8_t_s_s(g_82, 5))
            {
                for (g_141 = 0; (g_141 != 36); g_141 = safe_add_func_int16_t_s_s(g_141, 2))
                {
                    return &g_7;
                }
                (*l_210) = (&g_159[0][0] == &p_46);
                for (p_47 = (-27); (p_47 < 4); ++p_47)
                {
                    (*l_210) = 0x18D4A032L;
                    for (g_84 = 5; (g_84 >= 2); g_84 -= 1)
                    {
                        int *l_219[9][7][4] = {{{&g_6[0],&g_3,(void*)0,(void*)0},{(void*)0,(void*)0,&g_3,(void*)0},{(void*)0,&g_3,&g_84,&g_6[0]},{&g_3,&g_3,&g_5,&g_82},{&g_84,&g_3,&g_6[2],&g_7},{&g_84,&g_82,&g_5,&g_6[9]},{&g_3,&g_7,&g_84,&g_3}},{{(void*)0,&g_82,&g_3,&g_82},{(void*)0,&g_82,(void*)0,&g_3},{&g_6[0],&g_7,&g_84,&g_6[9]},{&g_5,&g_82,(void*)0,&g_7},{&g_84,&g_3,(void*)0,&g_82},{&g_5,&g_3,&g_84,&g_6[0]},{&g_6[0],&g_82,&g_5,&g_3}},{{&g_5,&g_3,&g_5,&g_3},{&g_4,&g_82,&g_3,&g_6[9]},{&g_6[0],&g_3,&g_3,&g_84},{&g_3,&g_3,&g_5,&g_3},{&g_3,&g_6[2],&g_3,&g_7},{&g_6[0],&g_3,&g_3,&g_3},{&g_4,&g_6[0],&g_5,&g_6[2]}},{{&g_5,&g_6[0],&g_5,&g_3},{(void*)0,&g_3,&g_84,&g_7},{&g_6[2],&g_6[2],&g_4,&g_3},{&g_84,&g_3,&g_4,&g_84},{&g_6[2],&g_3,&g_84,&g_6[9]},{(void*)0,&g_82,&g_5,&g_3},{&g_5,&g_3,&g_5,&g_3}},{{&g_4,&g_82,&g_3,&g_6[9]},{&g_6[0],&g_3,&g_3,&g_84},{&g_3,&g_3,&g_5,&g_3},{&g_3,&g_6[2],&g_3,&g_7},{&g_6[0],&g_3,&g_3,&g_3},{&g_4,&g_6[0],&g_5,&g_6[2]},{&g_5,&g_6[0],&g_5,&g_3}},{{(void*)0,&g_3,&g_84,&g_7},{&g_6[2],&g_6[2],&g_4,&g_3},{&g_84,&g_82,&g_84,&g_82},{&g_5,&g_3,&g_3,&g_7},{&g_5,&g_84,&g_6[2],&g_82},{&g_6[2],&g_82,&g_3,&g_82},{&g_84,&g_84,&g_5,&g_7}},{{(void*)0,&g_3,&g_6[0],&g_82},{&g_5,&g_82,(void*)0,&g_3},{&g_5,(void*)0,&g_6[0],&g_3},{(void*)0,&g_3,&g_5,&g_3},{&g_84,&g_6[9],&g_3,(void*)0},{&g_6[2],&g_6[9],&g_6[2],&g_3},{&g_5,&g_3,&g_3,&g_3}},{{&g_5,(void*)0,&g_84,&g_3},{&g_84,&g_82,&g_84,&g_82},{&g_5,&g_3,&g_3,&g_7},{&g_5,&g_84,&g_6[2],&g_82},{&g_6[2],&g_82,&g_3,&g_82},{&g_84,&g_84,&g_5,&g_7},{(void*)0,&g_3,&g_6[0],&g_82}},{{&g_5,&g_82,(void*)0,&g_3},{&g_5,(void*)0,&g_6[0],&g_3},{(void*)0,&g_3,&g_5,&g_3},{&g_84,&g_6[9],&g_3,(void*)0},{&g_6[2],&g_6[9],&g_6[2],&g_3},{&g_6[2],&g_3,&g_5,&g_3},{(void*)0,&g_3,&g_84,&g_3}}};
                        unsigned char **l_226 = (void*)0;
                        unsigned char *l_228[3][3][1] = {{{&g_15},{(void*)0},{&g_15}},{{&g_15},{(void*)0},{&g_15}},{{&g_15},{(void*)0},{&g_15}}};
                        unsigned char **l_227 = &l_228[1][0][0];
                        char *l_229 = (void*)0;
                        char *l_230 = (void*)0;
                        char *l_231 = &g_153[4];
                        int i, j, k;
                        l_220 = (*p_48);
                        l_232 = ((safe_rshift_func_uint8_t_u_s((0x5BA9L != (g_141 >= ((g_6[6] , (((~0x1754238FL) ^ (safe_lshift_func_int8_t_s_u((p_46 || g_5), l_225))) , p_46)) , ((*l_231) = (((*l_227) = (void*)0) != (void*)0))))), 7)) != 8L);
                        if (l_232)
                            break;
                    }
                    return &g_7;
                }
            }
            (*l_233) = &l_220;
            l_220 = ((*l_210) = (p_47 != ((safe_mod_func_int32_t_s_s((((void*)0 == l_236) >= (((1L == 0x830CL) == (safe_sub_func_int16_t_s_s((((l_240 == g_243) == (**g_134)) > ((safe_add_func_uint8_t_u_u(p_47, l_225)) , (*l_70))), 0x3871L))) & 0x94L)), p_46)) , p_49)));
            return l_70;
        }
        else
        {
            unsigned **l_248 = &l_71;
            l_249[6] = l_248;
            return l_70;
        }
    }
    (*l_250) = p_48;
    (*l_250) = &g_6[9];
    return l_251;
}







static short func_61(char p_62, unsigned p_63, int p_64)
{
    short l_103[9] = {9L,9L,9L,9L,9L,9L,9L,9L,9L};
    unsigned char * const l_104 = &g_15;
    unsigned char *l_105 = &g_15;
    int *l_110 = &g_2[1];
    char *l_152[3];
    char **l_151 = &l_152[2];
    int l_160 = 0L;
    char l_161 = (-1L);
    int i;
    for (i = 0; i < 3; i++)
        l_152[i] = &g_153[4];
    if ((l_103[1] , (p_62 > ((l_104 == (l_105 = l_105)) < func_65(&p_64, (((safe_add_func_int32_t_s_s(((safe_div_func_int32_t_s_s((((0x5B56L == (((p_62 >= g_3) || 255UL) <= 1L)) >= g_15) != l_103[3]), p_63)) < p_64), g_4)) , 0x47L) , &g_84), l_110, g_15)))))
    {
        int *l_111[9] = {&g_7,&g_84,&g_84,&g_7,&g_84,&g_84,&g_7,&g_84,&g_84};
        int *l_113 = &g_6[0];
        int **l_112 = &l_113;
        int l_178[7][1] = {{0x35D7CC8FL},{6L},{0x35D7CC8FL},{6L},{0x35D7CC8FL},{6L},{0x35D7CC8FL}};
        int **l_179 = (void*)0;
        int *l_190[5][7];
        int i, j;
        for (i = 0; i < 5; i++)
        {
            for (j = 0; j < 7; j++)
                l_190[i][j] = &l_160;
        }
        (*l_112) = (l_111[0] = l_110);
        for (g_82 = (-29); (g_82 > (-19)); g_82 = safe_add_func_uint8_t_u_u(g_82, 1))
        {
            (*l_112) = (*l_112);
        }
        for (g_82 = 0; (g_82 >= 19); g_82++)
        {
            char l_126 = (-1L);
            unsigned l_187 = 0x44D412DDL;
            int *l_191 = &g_7;
            for (g_84 = 0; (g_84 != (-16)); --g_84)
            {
                for (p_64 = 23; (p_64 == (-23)); --p_64)
                {
                    for (p_62 = 27; (p_62 > (-13)); p_62 = safe_sub_func_uint16_t_u_u(p_62, 1))
                    {
                        g_127 &= (safe_sub_func_uint32_t_u_u((g_7 , 4294967292UL), l_126));
                        g_128[5] = &g_6[0];
                    }
                }
                for (p_62 = 0; (p_62 > 22); p_62 = safe_add_func_uint32_t_u_u(p_62, 9))
                {
                    unsigned l_131 = 0xBCDCAF52L;
                    p_64 = l_131;
                }
            }
            for (p_63 = 14; (p_63 != 32); p_63++)
            {
                int l_148 = (-4L);
                int l_167 = 0x8E39048CL;
                if (p_64)
                {
                    unsigned ***l_136 = &g_134;
                    (*l_112) = &p_64;
                    (*l_136) = g_134;
                }
                else
                {
                    char l_149 = 0x8EL;
                    unsigned char l_150 = 0xEBL;
                    int l_165 = (-1L);
                    unsigned short *l_166 = &g_141;
                    (*l_112) = &p_64;
                    for (g_127 = 7; (g_127 == 14); g_127 = safe_add_func_int8_t_s_s(g_127, 3))
                    {
                        short *l_139 = &l_103[1];
                        unsigned short *l_140 = &g_141;
                        char *l_144 = (void*)0;
                        char *l_145 = &l_126;
                        (*l_112) = l_110;
                        p_64 |= (((*l_140) = (((*l_139) = g_75[2]) || p_62)) >= g_6[0]);
                        (*l_112) = ((((0x1EL == 255UL) < (((((*l_145) = (safe_mod_func_uint32_t_u_u(0x81571CF3L, 0x47AAB454L))) ^ (safe_mod_func_int32_t_s_s(l_148, ((**g_134) &= (l_149 < (((7UL != (&g_5 == &g_6[0])) ^ l_150) | p_62)))))) < 0x32677FA2L) != p_64)) < g_15) , l_110);
                    }
                    if (p_63)
                    {
                        char ***l_154 = &l_151;
                        char **l_155 = (void*)0;
                        int l_158 = (-2L);
                        short *l_162 = &g_159[0][0];
                        l_155 = ((*l_154) = l_151);
                        p_64 = (+(safe_div_func_int32_t_s_s((((((g_15 && (g_159[0][0] |= l_158)) , g_82) , (((**l_155) = p_62) < (((((l_161 = (l_160 ^= 9L)) == 0xA9L) , &l_103[1]) != l_162) > p_62))) || 0L) & 0L), (*g_135))));
                        (*l_112) = (void*)0;
                        if (p_63)
                            break;
                    }
                    else
                    {
                        return g_73[1][6][3];
                    }
                    l_167 = (((*l_166) = (safe_rshift_func_uint8_t_u_s((l_165 = g_6[7]), 1))) | p_63);
                }
                (*l_112) = &l_167;
                p_64 = ((**l_112) = (safe_add_func_int16_t_s_s(g_56, ((*g_135) < (l_126 > l_103[1])))));
                l_160 |= ((g_75[0] < (!l_167)) , (safe_lshift_func_int16_t_s_u((((safe_rshift_func_uint16_t_u_u((safe_add_func_uint16_t_u_u(0xC039L, (g_159[1][4] & ((l_178[2][0] , l_179) != (void*)0)))), 7)) && (safe_div_func_uint8_t_u_u(0xCAL, 0x1DL))) | (-10L)), (*l_113))));
            }
            for (g_127 = 0; (g_127 <= 4); g_127 += 1)
            {
                unsigned l_188 = 0xF1BF41CAL;
                int l_189 = 1L;
                if (p_63)
                {
                    (*l_112) = &g_5;
                }
                else
                {
                    int l_182 = (-1L);
                    unsigned char **l_185 = (void*)0;
                    unsigned char **l_186 = &l_105;
                    p_64 = (p_64 & ((l_189 = ((p_63 != ((l_182 >= l_126) || ((g_102[0] , (safe_add_func_int8_t_s_s(((((*l_186) = l_105) == &g_15) > ((p_64 == (+l_187)) == l_188)), l_188))) , g_4))) == p_64)) , p_63));
                    for (p_62 = 0; (p_62 <= 4); p_62 += 1)
                    {
                        (*l_112) = l_190[3][1];
                        return g_15;
                    }
                    return l_103[7];
                }
                l_160 = p_63;
                for (l_126 = 0; (l_126 <= 4); l_126 += 1)
                {
                    (*l_112) = l_191;
                    for (p_63 = 0; (p_63 <= 4); p_63 += 1)
                    {
                        unsigned char l_192 = 251UL;
                        (*l_112) = &g_5;
                        g_128[5] = &g_82;
                        if (l_192)
                            continue;
                    }
                    p_64 ^= 0xA368C117L;
                }
            }
        }
    }
    else
    {
        unsigned l_193 = 0x51A3F53AL;
        int *l_194 = &g_75[0];
        unsigned *l_201 = (void*)0;
        unsigned *l_202 = &l_193;
        int l_203 = 0x1070E863L;
        char l_208 = (-10L);
        int *l_209 = &g_84;
        g_128[5] = (((*l_194) |= l_193) , &g_82);
        (*l_209) = (l_160 = (safe_rshift_func_int8_t_s_u(((safe_div_func_uint8_t_u_u(func_65(((safe_div_func_uint32_t_u_u((*g_135), (((p_63 ^ (((*l_202) |= (+(l_160 >= p_64))) || (((~2L) > l_203) < 252UL))) || ((safe_lshift_func_int8_t_s_u(g_75[2], 7)) >= (((safe_sub_func_int32_t_s_s(l_193, l_103[3])) , 0xB83AE85CL) , 0x05L))) && g_159[4][1]))) , &g_4), &g_82, l_194, l_208), (-7L))) & l_208), g_15)));
    }
    return g_73[4][7][2];
}







static unsigned func_65(int * p_66, int * p_67, int * p_68, int p_69)
{
    char l_76 = 1L;
    char *l_79 = &l_76;
    int *l_80 = &g_6[0];
    int *l_81 = &g_82;
    int *l_83 = &g_84;
    (*l_83) &= ((*l_81) |= (g_73[3][7][1] <= ((l_76 || l_76) , (safe_add_func_int8_t_s_s((p_69 ^ (((*l_79) = (-8L)) && (-1L))), ((l_80 != (void*)0) <= ((*l_80) == g_6[0])))))));
    for (p_69 = 0; (p_69 == 22); p_69++)
    {
        char l_87 = 0xE6L;
        int *l_99 = &g_75[1];
        int **l_98 = &l_99;
        unsigned *l_100 = (void*)0;
        unsigned *l_101 = &g_102[1];
        (*l_81) ^= (((void*)0 != &l_76) , (((l_87 , ((*l_101) = (((((safe_rshift_func_uint16_t_u_s(p_69, l_87)) || (~((safe_lshift_func_uint8_t_u_s((safe_lshift_func_int8_t_s_s((p_69 != p_69), (safe_rshift_func_uint8_t_u_s((safe_sub_func_uint8_t_u_u(((((*l_98) = &p_69) != &g_2[1]) <= (-1L)), p_69)), l_87)))), 0)) < g_4))) , l_87) == g_73[5][4][3]) != 0xA9D0L))) , p_69) & 0xBE831782L));
        return p_69;
    }
    return g_75[2];
}





int main (void)
{
    int i, j, k;
    int print_hash_value = 0;
    platform_main_begin();
    crc32_gentab();
    func_1();
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_2[i], "g_2[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_3, "g_3", print_hash_value);
    transparent_crc(g_4, "g_4", print_hash_value);
    transparent_crc(g_5, "g_5", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_6[i], "g_6[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_7, "g_7", print_hash_value);
    transparent_crc(g_13, "g_13", print_hash_value);
    transparent_crc(g_15, "g_15", print_hash_value);
    transparent_crc(g_17, "g_17", print_hash_value);
    transparent_crc(g_56, "g_56", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        for (j = 0; j < 8; j++)
        {
            for (k = 0; k < 5; k++)
            {
                transparent_crc(g_73[i][j][k], "g_73[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    for (i = 0; i < 4; i++)
    {
        transparent_crc(g_75[i], "g_75[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_82, "g_82", print_hash_value);
    transparent_crc(g_84, "g_84", print_hash_value);
    for (i = 0; i < 2; i++)
    {
        transparent_crc(g_102[i], "g_102[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_127, "g_127", print_hash_value);
    transparent_crc(g_141, "g_141", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_153[i], "g_153[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 9; j++)
        {
            transparent_crc(g_159[i][j], "g_159[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_280, "g_280", print_hash_value);
    transparent_crc(g_288, "g_288", print_hash_value);
    transparent_crc(g_319, "g_319", print_hash_value);
    transparent_crc(g_330, "g_330", print_hash_value);
    transparent_crc(g_331, "g_331", print_hash_value);
    transparent_crc(g_384, "g_384", print_hash_value);
    transparent_crc(g_385, "g_385", print_hash_value);
    transparent_crc(g_386, "g_386", print_hash_value);
    transparent_crc(g_511, "g_511", print_hash_value);
    transparent_crc(g_568, "g_568", print_hash_value);
    transparent_crc(g_585, "g_585", print_hash_value);
    transparent_crc(g_608, "g_608", print_hash_value);
    transparent_crc(g_612, "g_612", print_hash_value);
    transparent_crc(g_900, "g_900", print_hash_value);
    transparent_crc(g_980, "g_980", print_hash_value);
    transparent_crc(g_984, "g_984", print_hash_value);
    transparent_crc(g_1060, "g_1060", print_hash_value);
    transparent_crc(g_1063, "g_1063", print_hash_value);
    transparent_crc(g_1132, "g_1132", print_hash_value);
    transparent_crc(g_1168, "g_1168", print_hash_value);
    transparent_crc(g_1170, "g_1170", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1405[i][j], "g_1405[i][j]", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1612, "g_1612", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
