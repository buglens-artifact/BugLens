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
   volatile int f0;
   volatile unsigned f1;
   volatile int f2;
   unsigned short f3;
};


static int g_5 = (-7L);
static struct S0 g_11 = {0xC87A7525L,0x2D91509CL,5L,0x13A6L};
static struct S0 g_12 = {0L,0xEDA8ED40L,0L,0x0187L};
static short g_37 = 0x7A33L;
static int g_40 = (-2L);
static char g_107[6] = {1L, 1L, 1L, 1L, 1L, 1L};
static int g_115 = 9L;
static int g_158 = 0L;
static short g_357 = 0xD9D5L;
static int g_670 = 0x52E4C181L;
static unsigned char g_690 = 0xF1L;
static unsigned g_896 = 3UL;
static unsigned g_1299 = 18446744073709551614UL;
static short g_1392 = 5L;
static struct S0 g_1585[10][7] = {{{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}, {{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}, {{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}, {{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}, {{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}, {{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}, {{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}, {{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}, {{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}, {{0L,18446744073709551615UL,0x89F91E01L,9UL}, {4L,18446744073709551607UL,-1L,0x0667L}, {-1L,1UL,3L,0x1670L}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,0x2F9AD5FEL,0xCCFB12B8L,65534UL}, {-1L,1UL,3L,0x1670L}, {4L,18446744073709551607UL,-1L,0x0667L}}};
static struct S0 g_1587 = {8L,0x285596C8L,0xF7E8E7A1L,65527UL};
static struct S0 g_1588 = {1L,3UL,0x1F0ED68DL,0UL};
static struct S0 g_1592[8] = {{0x35923A80L,0x23F4F483L,-5L,1UL}, {0x45FFE36BL,5UL,0x483B3EA7L,0x1F35L}, {0x35923A80L,0x23F4F483L,-5L,1UL}, {0x45FFE36BL,5UL,0x483B3EA7L,0x1F35L}, {0x35923A80L,0x23F4F483L,-5L,1UL}, {0x45FFE36BL,5UL,0x483B3EA7L,0x1F35L}, {0x35923A80L,0x23F4F483L,-5L,1UL}, {0x45FFE36BL,5UL,0x483B3EA7L,0x1F35L}};
static struct S0 g_1593 = {0L,3UL,-1L,65535UL};
static unsigned short g_1617 = 0x7637L;
static unsigned short g_1620[9][10][2] = {{{6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}}, {{6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}}, {{6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}}, {{6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}}, {{6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}}, {{6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}}, {{6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}}, {{6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}}, {{6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}, {6UL, 0x6F28L}}};
static volatile struct S0 g_1642 = {1L,18446744073709551606UL,0x46227530L,0x2310L};
static volatile struct S0 g_1643 = {0x641F04C4L,4UL,7L,0x607BL};
static struct S0 g_1653 = {0xA4A6E2AEL,0xA06FF489L,8L,0x2EE6L};
static struct S0 g_1662 = {-1L,5UL,-1L,0x8DBCL};
static struct S0 g_1665 = {0xB81CBEA5L,1UL,1L,0xE5C0L};
static struct S0 g_1666[10] = {{0L,0UL,0x8ACE9D74L,0x8310L}, {0L,18446744073709551606UL,-8L,6UL}, {0x38857509L,1UL,0x4CC7E26AL,65527UL}, {0x38857509L,1UL,0x4CC7E26AL,65527UL}, {0L,18446744073709551606UL,-8L,6UL}, {0L,0UL,0x8ACE9D74L,0x8310L}, {0L,18446744073709551606UL,-8L,6UL}, {0x38857509L,1UL,0x4CC7E26AL,65527UL}, {0x38857509L,1UL,0x4CC7E26AL,65527UL}, {0L,18446744073709551606UL,-8L,6UL}};
static volatile struct S0 g_1667 = {0x2B73534BL,0xE62D97DBL,-1L,3UL};
static struct S0 g_1668 = {0x9BB1DB6BL,0xB0319E8BL,0x7320408AL,65534UL};
static struct S0 g_1686 = {0x4C9D0535L,0xB98E0929L,0x0E2D1B6AL,0xC145L};
static struct S0 g_1687 = {-1L,18446744073709551615UL,0x764F6D4DL,1UL};
static struct S0 g_1764 = {-7L,18446744073709551615UL,0xD57C8825L,0x3520L};
static struct S0 g_1765 = {0L,18446744073709551615UL,0x6261DD20L,4UL};
static struct S0 g_1766[9][8] = {{{-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {0x433932E4L,0xDD27ED31L,0x9A9F2B9FL,1UL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {-5L,8UL,8L,0xF44BL}, {0xED32A3B0L,6UL,0L,0xCAE5L}, {-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}}, {{-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {0x433932E4L,0xDD27ED31L,0x9A9F2B9FL,1UL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {-5L,8UL,8L,0xF44BL}, {0xED32A3B0L,6UL,0L,0xCAE5L}, {-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}}, {{-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {0x433932E4L,0xDD27ED31L,0x9A9F2B9FL,1UL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {-5L,8UL,8L,0xF44BL}, {0xED32A3B0L,6UL,0L,0xCAE5L}, {-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}}, {{-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {0x433932E4L,0xDD27ED31L,0x9A9F2B9FL,1UL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {-5L,8UL,8L,0xF44BL}, {0xED32A3B0L,6UL,0L,0xCAE5L}, {-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}}, {{-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {0x433932E4L,0xDD27ED31L,0x9A9F2B9FL,1UL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {-5L,8UL,8L,0xF44BL}, {0xED32A3B0L,6UL,0L,0xCAE5L}, {-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}}, {{-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {0x433932E4L,0xDD27ED31L,0x9A9F2B9FL,1UL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {-5L,8UL,8L,0xF44BL}, {0xED32A3B0L,6UL,0L,0xCAE5L}, {-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}}, {{-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {0x433932E4L,0xDD27ED31L,0x9A9F2B9FL,1UL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {-5L,8UL,8L,0xF44BL}, {0xED32A3B0L,6UL,0L,0xCAE5L}, {-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}}, {{-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {0x433932E4L,0xDD27ED31L,0x9A9F2B9FL,1UL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {-5L,8UL,8L,0xF44BL}, {0xED32A3B0L,6UL,0L,0xCAE5L}, {-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}}, {{-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {0x433932E4L,0xDD27ED31L,0x9A9F2B9FL,1UL}, {0x75A804FFL,0xB7069775L,1L,1UL}, {-5L,8UL,8L,0xF44BL}, {0xED32A3B0L,6UL,0L,0xCAE5L}, {-5L,8UL,8L,0xF44BL}, {0x75A804FFL,0xB7069775L,1L,1UL}}};
static struct S0 g_1778 = {-1L,1UL,0x81221380L,0x337CL};
static struct S0 g_1788 = {-10L,0UL,0L,0xE50FL};
static struct S0 g_1797 = {0x119AA7B3L,0x5F989C9CL,-1L,0x0E7AL};



static struct S0 func_1(void);
static unsigned short func_2(unsigned char p_3, unsigned p_4);
static unsigned func_6(int p_7, short p_8, unsigned p_9);
static unsigned char func_26(short p_27, unsigned short p_28, char p_29);
static unsigned char func_30(unsigned short p_31, short p_32);
static short func_33(unsigned short p_34, unsigned p_35);
static int func_44(unsigned short p_45, short p_46);
static short func_50(unsigned char p_51);
static unsigned short func_59(int p_60, char p_61);
static unsigned func_69(char p_70, unsigned p_71, unsigned p_72, unsigned p_73);
static struct S0 func_1(void)
{
    unsigned l_10 = 4294967295UL;
    int l_1476 = 0xDE3CD796L;
    int l_1501 = 0xA38E1D29L;
    int l_1696[1];
    unsigned l_1743 = 4UL;
    unsigned short l_1768 = 9UL;
    unsigned char l_1828 = 0xD4L;
    int i;
    for (i = 0; i < 1; i++)
        l_1696[i] = 0xCA02C4FDL;
    g_11.f0 = ((((func_2(g_5, func_6(g_5, (+g_5), l_10)) == l_10) & g_5) >= ((safe_mod_func_uint8_t_u_u(g_11.f3, g_5)) != (-5L))) | 6UL);
    if (((((safe_lshift_func_uint16_t_u_s((g_11.f0 && (252UL != (0x2C3BL | (safe_lshift_func_uint8_t_u_s(g_5, ((safe_add_func_uint8_t_u_u(((g_11.f0 ^ (safe_lshift_func_uint8_t_u_s(func_26(g_11.f3, (l_10 <= (func_30(l_10, func_33(l_10, l_10)) ^ l_10)), l_10), 4))) <= l_10), 0x7CL)) != (-6L))))))), 2)) & (-1L)) | l_10) | g_5))
    {
        l_1476 = 0L;
    }
    else
    {
        unsigned l_1490 = 0x04590AB7L;
        g_115 = 0x8C360C6DL;
        for (g_158 = 23; (g_158 >= 3); g_158--)
        {
            char l_1481 = 0xCEL;
            g_12.f0 = (safe_mod_func_int16_t_s_s(((func_59(l_1476, (l_1481 > ((!(safe_add_func_int32_t_s_s((safe_sub_func_int8_t_s_s((func_59(g_107[0], (((((safe_add_func_int8_t_s_s(l_1481, (safe_rshift_func_int16_t_s_u((g_1392 && l_10), (g_107[0] && (func_33(l_10, g_11.f2) >= 1UL)))))) != 0xB39FL) || 65531UL) != 0x4E9DF0D6L) && 0x5B933EEEL)) <= l_1490), g_1299)), g_690))) != 0x75L))) && l_1490) & g_1392), l_1490));
        }
    }
    if (l_1476)
    {
        int l_1492 = 0xAA72CA83L;
        char l_1566 = 0L;
        unsigned short l_1568 = 65529UL;
        char l_1586[1];
        int l_1616 = 0x1AD62710L;
        char l_1683 = 0x6AL;
        unsigned short l_1767 = 0xFE52L;
        int i;
        for (i = 0; i < 1; i++)
            l_1586[i] = 0x9CL;
        g_40 = g_107[5];
        if (g_1299)
        {
            int l_1491[5][6] = {{0x48452919L, (-3L), 0x22D6D603L, 0x22D6D603L, (-3L), 0x48452919L}, {0x48452919L, (-3L), 0x22D6D603L, 0x22D6D603L, (-3L), 0x48452919L}, {0x48452919L, (-3L), 0x22D6D603L, 0x22D6D603L, (-3L), 0x48452919L}, {0x48452919L, (-3L), 0x22D6D603L, 0x22D6D603L, (-3L), 0x48452919L}, {0x48452919L, (-3L), 0x22D6D603L, 0x22D6D603L, (-3L), 0x48452919L}};
            unsigned short l_1576 = 0UL;
            int i, j;
            l_1491[0][4] = ((l_1491[0][4] < 5L) != l_1492);
            if ((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s((g_1392 > (((((255UL & ((safe_add_func_uint32_t_u_u(l_1491[0][4], (((safe_mod_func_uint8_t_u_u(l_1501, func_69((((safe_add_func_int32_t_s_s(func_59(((safe_rshift_func_int8_t_s_u(g_12.f1, 2)) && g_12.f2), l_1492), l_1492)) < g_670) == 0x1B3E9945L), l_1491[2][0], l_1501, l_1492))) > g_1299) ^ g_1392))) & l_1492)) >= g_158) & (-1L)) != l_1491[0][4]) == l_1476)), 6)) <= g_670), g_12.f3)))
            {
                unsigned short l_1512 = 0x0D50L;
                short l_1569 = 1L;
                int l_1577 = 1L;
                if ((g_11.f0 ^ ((safe_lshift_func_uint8_t_u_u((((safe_sub_func_uint8_t_u_u(0x5EL, (g_12.f3 >= g_107[0]))) ^ g_107[0]) <= ((safe_lshift_func_int16_t_s_s(g_896, 15)) != (l_1512 ^ ((func_33((l_1476 != g_670), l_1491[0][4]) == (-1L)) >= 0UL)))), 2)) == l_1492)))
                {
                    l_1476 = l_10;
                    g_11.f2 = g_1392;
                }
                else
                {
                    unsigned char l_1513 = 0x3CL;
                    int l_1518 = 0L;
                    l_1518 = (l_1513 < (safe_mod_func_int16_t_s_s(l_1492, (safe_lshift_func_int16_t_s_u(0x30A1L, 5)))));
                }
                l_1476 = ((safe_unary_minus_func_uint32_t_u(4294967292UL)) | (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((safe_rshift_func_int8_t_s_s((safe_add_func_int8_t_s_s((((-1L) <= (((safe_mod_func_int32_t_s_s((g_115 ^ g_12.f3), (safe_sub_func_uint16_t_u_u(l_1492, (safe_lshift_func_int16_t_s_u(g_11.f3, 3)))))) >= ((safe_sub_func_uint32_t_u_u((0x7104AE63L == (!func_33(l_1476, l_1476))), 0UL)) != g_670)) == 1UL)) == g_357), g_115)), 0)), 12)), 10)));
                for (g_690 = 0; (g_690 > 36); ++g_690)
                {
                    unsigned short l_1567 = 65535UL;
                    g_11.f2 = ((safe_lshift_func_int8_t_s_u((safe_add_func_uint8_t_u_u(((((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int8_t_s_u((((safe_add_func_uint32_t_u_u(((g_690 || ((safe_add_func_int16_t_s_s(((((safe_mod_func_int32_t_s_s((((safe_sub_func_int8_t_s_s(func_44(g_11.f0, (safe_lshift_func_int16_t_s_u(g_896, 15))), (+((safe_sub_func_int16_t_s_s((((+g_11.f3) >= (l_1476 && (safe_rshift_func_int8_t_s_u((l_1492 > ((l_1501 == ((safe_sub_func_int8_t_s_s((0xFD3AL ^ l_1476), g_11.f3)) == l_1491[0][1])) & 0x67L)), l_1566)))) & 0xD7CEL), g_670)) < 253UL)))) <= 0x27A9L) >= l_1567), l_1501)) || l_1491[1][4]) ^ l_1567) == l_1568), l_1567)) > l_1567)) < l_1512), g_11.f3)) | 1UL) & l_1512), 3)), g_690)), l_1567)) ^ g_357) | l_1569) | 1L), g_690)), l_1476)) >= 0x2AL);
                    l_1577 = (safe_lshift_func_uint8_t_u_s(((safe_rshift_func_int8_t_s_s(1L, 7)) || (l_1568 != ((0xD1L <= (safe_add_func_uint16_t_u_u((func_50(func_30(g_11.f3, l_1491[1][2])) > ((l_1576 == ((0xEC8F2E8DL && 0xFE10B11FL) != 0L)) | g_11.f3)), g_357))) & 0L))), g_12.f1));
                    if ((safe_mod_func_int8_t_s_s((-3L), l_10)))
                    {
                        unsigned l_1584 = 0xB17CD725L;
                        g_115 = g_11.f0;
                        l_1491[0][4] = (l_1569 >= g_11.f2);
                        l_1577 = (l_1566 == ((g_896 | (l_1566 < (((l_1501 || 1UL) > (g_37 > ((((g_12.f1 ^ (safe_add_func_uint8_t_u_u((g_12.f3 & (l_1491[1][2] ^ 0xAFL)), g_670))) >= l_1566) != g_37) && l_1584))) > 0x77L))) || (-7L)));
                    }
                    else
                    {
                        if (l_1569)
                            break;
                        g_1585[1][6] = g_12;
                        g_11.f2 = l_1586[0];
                    }
                }
                g_1588 = g_1587;
            }
            else
            {
                unsigned char l_1615 = 0x95L;
                if (g_1587.f3)
                {
                    int l_1591 = 0x04354BDCL;
                    for (g_690 = 0; (g_690 <= 39); g_690++)
                    {
                        g_12.f2 = g_670;
                        g_1588.f2 = l_1591;
                        g_11.f2 = (g_12.f1 <= l_1476);
                        if (g_12.f1)
                            continue;
                    }
                    g_1593 = g_1592[5];
                    g_1592[5].f2 = ((~func_69(l_1591, (~(safe_add_func_uint32_t_u_u(((l_1576 <= 0x58L) || ((safe_add_func_int32_t_s_s((((safe_add_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((safe_mod_func_int8_t_s_s(g_1592[5].f0, ((l_1568 ^ ((safe_rshift_func_uint16_t_u_u(0x8D00L, 7)) > (((((safe_add_func_uint8_t_u_u(((((g_1299 & (safe_mod_func_int16_t_s_s((safe_lshift_func_int16_t_s_u((safe_unary_minus_func_uint16_t_u(l_10)), ((!func_59(l_1615, l_1616)) < 0x7FD1L))), 65527UL))) || 0xE5D4A795L) | 1L) > g_1299), g_1617)) >= g_11.f3) == 0x61A7FA83L) ^ l_1586[0]) | l_1586[0]))) | l_1591))) || l_1615), l_10)), 9)), l_1492)) >= l_1615) & 2L), g_1585[1][6].f3)) | g_1587.f3)), 0x9BDA7EBBL))), g_1593.f3, l_1586[0])) ^ g_1588.f3);
                }
                else
                {
                    unsigned short l_1626 = 0x563EL;
                    unsigned short l_1627 = 0xFB63L;
                    for (l_1568 = 0; (l_1568 == 23); l_1568 = safe_add_func_int32_t_s_s(l_1568, 8))
                    {
                        short l_1625 = 0xFFEFL;
                        g_1620[2][2][1] = 0x43747426L;
                        g_1593.f2 = (safe_add_func_int16_t_s_s(l_1501, ((safe_mod_func_uint8_t_u_u((l_1586[0] == (((0x694DL && ((g_896 != l_1501) > (((l_1492 || 250UL) >= (l_1625 >= l_1476)) ^ l_1626))) | l_1625) >= g_670)), l_1627)) != 0x1536L)));
                        g_12.f0 = (((((safe_add_func_int16_t_s_s((l_1625 & (func_44(g_1592[5].f0, l_10) & (safe_lshift_func_uint8_t_u_u(g_1588.f3, (safe_lshift_func_int8_t_s_s((safe_sub_func_int32_t_s_s((g_357 > g_1299), (((l_1625 == 1L) <= l_1501) > l_1625))), l_1568)))))), g_11.f3)) < l_1491[0][4]) != l_1625) < l_1625) < l_1566);
                        g_1592[5].f2 = (safe_lshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u(func_30((safe_add_func_int8_t_s_s(g_1593.f3, 0xF2L)), (g_357 || l_10)), l_1625)), 5));
                    }
                }
            }
            g_1643 = g_1642;
            if ((0x5786L == l_1576))
            {
                int l_1648 = 0x86811264L;
                g_1588.f2 = ((safe_sub_func_int32_t_s_s((safe_lshift_func_int8_t_s_u((l_1648 || g_1620[2][2][1]), (((func_30((safe_sub_func_int32_t_s_s((((-9L) & l_1568) & g_1642.f3), (g_1587.f3 & (safe_sub_func_uint32_t_u_u((l_1491[4][0] && g_1588.f3), (func_50(g_670) && g_896)))))), l_1491[4][5]) <= 0x12152653L) ^ l_1491[0][4]) == 4UL))), l_1648)) && l_1491[0][4]);
                return g_1653;
            }
            else
            {
                int l_1660 = 0L;
                short l_1661 = 0L;
                if (((safe_rshift_func_uint16_t_u_s((g_1643.f1 && func_69((safe_mod_func_int32_t_s_s(l_1492, func_26((g_1592[5].f2 & g_690), ((safe_add_func_uint16_t_u_u((g_40 >= l_1492), g_158)) <= l_1586[0]), l_1660))), g_1588.f3, l_1661, l_1586[0])), 15)) | 0x0AL))
                {
                    g_1585[3][0] = g_1662;
                    for (g_158 = (-14); (g_158 != 11); ++g_158)
                    {
                        g_1666[6] = g_1665;
                        g_12 = g_1667;
                        l_1660 = g_107[0];
                    }
                    g_1668 = g_1585[1][6];
                }
                else
                {
                    g_1665.f0 = func_69(func_69(l_1491[1][4], (safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s((safe_add_func_int8_t_s_s((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((l_1586[0] == ((l_1491[0][4] > 9L) ^ l_1501)), 0x114DD5C6L)), (g_1665.f0 & ((g_37 ^ (safe_lshift_func_int8_t_s_s(((safe_rshift_func_uint16_t_u_s((l_1660 != g_1588.f3), g_896)) < g_1666[6].f3), 7))) > g_5)))), l_1491[0][4])), l_1660)), l_1683)), g_1617, l_1660), g_1587.f3, l_1660, g_1668.f3);
                    for (g_1665.f3 = 0; (g_1665.f3 <= 1); g_1665.f3 += 1)
                    {
                        return g_1642;
                    }
                }
                if (g_5)
                {
                    unsigned l_1684 = 1UL;
                    for (g_357 = 0; (g_357 <= 1); g_357 += 1)
                    {
                        unsigned short l_1685 = 1UL;
                        if (l_1684)
                            break;
                        g_1585[1][6] = g_1668;
                        l_1685 = l_1576;
                        l_1476 = (((l_1491[0][4] < g_1299) >= g_11.f2) >= 0L);
                    }
                    g_1687 = g_1686;
                    l_1476 = 1L;
                }
                else
                {
                    char l_1701 = 0L;
                    unsigned l_1720[3][10][2] = {{{4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}}, {{4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}}, {{4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}, {4294967295UL, 1UL}}};
                    int l_1728[6] = {1L, 1L, 0x95F061DDL, 1L, 1L, 0x95F061DDL};
                    int i, j, k;
                    g_1686 = g_1592[5];
                    if ((func_69(((safe_mod_func_int8_t_s_s(1L, func_59(l_1501, func_6((safe_lshift_func_uint16_t_u_u(((safe_rshift_func_uint8_t_u_u(0xF3L, l_1661)) & (safe_rshift_func_int8_t_s_s(l_1683, l_1696[0]))), ((((safe_lshift_func_int16_t_s_u((((safe_rshift_func_int16_t_s_s(0xEFA8L, l_1568)) <= (l_1701 != g_1585[1][6].f0)) || l_1701), 9)) && g_1620[3][3][0]) != g_1585[1][6].f3) > 0xD25AL))), g_12.f3, l_1586[0])))) || 0x816696B5L), g_1392, g_11.f3, l_1586[0]) == (-1L)))
                    {
                        int l_1709 = 0x077E004CL;
                        g_1687.f0 = ((l_1661 & g_670) > g_1653.f1);
                        g_1642.f2 = (0x8FDDL && (g_1662.f0 == ((safe_lshift_func_uint8_t_u_s((((~g_158) > ((safe_mod_func_uint16_t_u_u((safe_sub_func_int16_t_s_s(((func_50(g_1662.f3) <= g_1593.f3) | (safe_unary_minus_func_uint8_t_u((l_1709 == (0xCC28ADC0L & ((safe_lshift_func_int8_t_s_u((l_1701 > l_1701), l_1660)) < g_158)))))), l_1661)), l_1701)) > 3L)) >= g_357), l_1709)) && l_1709)));
                        l_1728[4] = (((((((l_1491[0][4] >= func_69((((((((safe_rshift_func_int16_t_s_u(l_1660, 3)) >= (safe_lshift_func_uint16_t_u_s(((safe_add_func_int32_t_s_s((((((+((safe_add_func_uint16_t_u_u(l_1720[1][9][0], (safe_rshift_func_int16_t_s_u((safe_unary_minus_func_int8_t_s(g_1588.f2)), g_670)))) ^ l_1696[0])) && ((safe_rshift_func_int8_t_s_u(g_12.f0, l_1491[1][4])) != (safe_lshift_func_uint16_t_u_u(0xCCD7L, l_1709)))) <= l_1660) == 1L) && 0x9FL), g_115)) ^ l_1709), 4))) >= g_1620[2][2][1]) < 0L) | 0x5665L) & g_1687.f3) || l_1501), g_1666[6].f3, l_1709, l_1720[2][5][1])) != g_1593.f3) ^ g_1620[0][5][1]) >= g_1653.f3) >= 0xF3L) & 0x37FF02D5L) == 1L);
                    }
                    else
                    {
                        g_1662.f0 = func_6(g_1592[5].f1, (safe_rshift_func_int16_t_s_u((((-1L) == (safe_rshift_func_uint16_t_u_s(0UL, 14))) <= 0xF6L), (g_40 <= ((safe_add_func_int8_t_s_s((safe_sub_func_uint8_t_u_u(1UL, (((safe_add_func_uint16_t_u_u(func_33(l_1576, (g_11.f3 || (safe_sub_func_int32_t_s_s(g_107[0], g_1653.f3)))), 0L)) || g_158) | g_1665.f3))), 0xCCL)) <= 65535UL)))), l_1743);
                    }
                }
            }
        }
        else
        {
            short l_1746[1][3];
            int i, j;
            for (i = 0; i < 1; i++)
            {
                for (j = 0; j < 3; j++)
                    l_1746[i][j] = 0x1DB4L;
            }
            if ((((((safe_add_func_int32_t_s_s((0xDAD7C065L | l_1746[0][0]), (safe_sub_func_uint8_t_u_u((safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((-10L), 4294967289UL)), (safe_rshift_func_int8_t_s_s((safe_lshift_func_int16_t_s_s(0L, func_69(g_1620[3][9][1], (safe_rshift_func_int16_t_s_s((65526UL | (g_1687.f3 >= (safe_lshift_func_uint8_t_u_s((((safe_unary_minus_func_int16_t_s(l_1568)) < l_1746[0][0]) | g_1662.f3), g_12.f2)))), g_12.f3)), l_1746[0][1], l_1746[0][0]))), 1)))), g_1687.f3)))) || l_1743) > g_1593.f3) == g_1666[6].f3) || (-9L)))
            {
                return g_1665;
            }
            else
            {
                for (g_1686.f3 = 1; (g_1686.f3 <= 9); g_1686.f3 += 1)
                {
                    int i;
                    return g_1666[g_1686.f3];
                }
                for (g_1665.f3 = 0; (g_1665.f3 == 27); g_1665.f3 = safe_add_func_uint16_t_u_u(g_1665.f3, 2))
                {
                    if (l_1566)
                    {
                        g_1686 = g_1764;
                        if (g_1588.f0)
                            break;
                    }
                    else
                    {
                        g_1687 = g_1588;
                        g_1765 = g_1764;
                        return g_1766[2][5];
                    }
                }
            }
        }
        l_1767 = 0xB44594C1L;
    }
    else
    {
        unsigned short l_1771 = 0x844BL;
        int l_1779 = 2L;
        if ((248UL != (l_1768 || g_1764.f0)))
        {
            int l_1770 = 0xFF2AE093L;
            if (g_690)
            {
                unsigned l_1769[2];
                int i;
                for (i = 0; i < 2; i++)
                    l_1769[i] = 0x608C11D7L;
                l_1770 = l_1769[0];
                l_1771 = (-10L);
                for (l_1768 = 0; (l_1768 <= 7); l_1768 += 1)
                {
                    int l_1787[7] = {(-8L), (-1L), (-8L), (-1L), (-8L), (-1L), (-8L)};
                    int i;
                    if ((safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_u((4294967295UL != g_1587.f2), ((g_12.f3 == g_1662.f3) >= ((safe_add_func_uint32_t_u_u(0x45522A40L, (-4L))) || 0x6F5AL)))), 2)))
                    {
                        if (l_1769[0])
                            break;
                        g_1778 = g_1585[3][4];
                    }
                    else
                    {
                        l_1779 = func_33(g_11.f1, (0xFEB0L != g_690));
                        if (g_1764.f2)
                            break;
                    }
                    g_1666[1] = g_1643;
                    for (g_1587.f3 = 0; (g_1587.f3 <= 1); g_1587.f3 += 1)
                    {
                        char l_1786 = 5L;
                        int i, j;
                        g_1666[6].f2 = (safe_sub_func_uint16_t_u_u(l_10, l_1696[0]));
                        g_1653.f0 = ((safe_sub_func_uint8_t_u_u(g_12.f1, (safe_add_func_uint32_t_u_u((l_1786 >= (g_1585[1][6].f3 ^ l_1779)), (((l_1786 <= (l_1771 < (func_69(g_1587.f3, g_1392, g_1666[6].f3, g_1620[3][2][0]) >= 1UL))) && l_1770) <= 1UL))))) != l_1787[4]);
                        g_1653.f2 = 0x23CF9876L;
                        g_1766[(l_1768 + 1)][l_1768] = g_1766[(g_1587.f3 + 6)][l_1768];
                    }
                }
            }
            else
            {
                unsigned char l_1791 = 0x5BL;
                g_1788 = g_1585[9][3];
                for (l_1771 = 27; (l_1771 <= 51); l_1771 = safe_add_func_uint16_t_u_u(l_1771, 4))
                {
                    unsigned short l_1794[6] = {0x5AF4L, 0x5AF4L, 0xEBD3L, 0x5AF4L, 0x5AF4L, 0xEBD3L};
                    int i;
                    if (l_1791)
                        break;
                    for (g_115 = (-23); (g_115 < 19); ++g_115)
                    {
                        g_1588.f2 = (l_1794[2] ^ (+func_2(l_1779, l_1770)));
                        l_1476 = ((65526UL && g_1687.f0) <= l_10);
                        g_1667 = g_1778;
                    }
                    for (l_1743 = (-10); (l_1743 <= 19); ++l_1743)
                    {
                        g_1766[2][5] = g_1788;
                        g_1778.f2 = 0x18EECD9BL;
                    }
                }
            }
        }
        else
        {
            g_1797 = g_1588;
        }
        g_1666[6].f2 = (~(safe_add_func_int16_t_s_s((+(safe_mod_func_uint32_t_u_u((safe_lshift_func_int16_t_s_u(g_1592[5].f0, 0)), func_50(l_1501)))), (safe_add_func_int8_t_s_s(((0L | ((1L > (g_1668.f3 && g_1666[6].f3)) != 0x04L)) & ((0x57L | 1UL) & g_357)), 0x55L)))));
        l_1476 = (safe_sub_func_uint8_t_u_u((+(g_1643.f1 != l_1476)), ((safe_rshift_func_uint16_t_u_u(func_44(((safe_lshift_func_int8_t_s_u(func_69(((0x0DAD1963L && l_1696[0]) == (safe_sub_func_uint32_t_u_u((safe_mod_func_uint8_t_u_u(0UL, (func_44((((((safe_rshift_func_uint16_t_u_u(((safe_mod_func_uint32_t_u_u(g_670, l_10)) <= ((l_1771 <= ((safe_mod_func_int16_t_s_s(((safe_add_func_uint16_t_u_u((safe_sub_func_uint8_t_u_u(func_59(((safe_rshift_func_int8_t_s_s(l_1771, g_5)) <= 0x7BEEL), l_1771), l_1828)), g_1766[2][5].f3)) & l_1779), g_1620[2][2][1])) < g_1788.f3)) | 65535UL)), 2)) || 0UL) | 0xA6L) ^ 0x3A03L) == g_357), g_1766[2][5].f3) ^ l_1696[0]))), g_1797.f3))), g_1662.f3, l_10, l_1779), 1)) ^ 0x608D033BL), l_1696[0]), l_1771)) != l_1768)));
    }
    return g_1643;
}







static unsigned short func_2(unsigned char p_3, unsigned p_4)
{
    short l_14 = (-1L);
    int l_15 = 0x16488A97L;
    l_15 = func_6(g_5, p_3, l_14);
    return l_15;
}







static unsigned func_6(int p_7, short p_8, unsigned p_9)
{
    int l_13 = 0xE77E815FL;
    g_12 = g_11;
    g_12 = g_12;
    return l_13;
}







static unsigned char func_26(short p_27, unsigned short p_28, char p_29)
{
    unsigned char l_284 = 0UL;
    int l_309[4][4][3] = {{{0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}}, {{0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}}, {{0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}}, {{0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}, {0x24E963F0L, 0x5DACA86BL, 0x24E963F0L}}};
    int l_313 = 0xD8F268BEL;
    unsigned char l_643 = 255UL;
    char l_818 = 0x86L;
    unsigned l_878[7][9][4] = {{{0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}}, {{0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}}, {{0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}}, {{0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}}, {{0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}}, {{0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}}, {{0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}, {0x00186B60L, 0x3DBF8298L, 0xF3D10E32L, 0xA1BCC46DL}}};
    char l_899 = 0x6EL;
    unsigned l_915 = 0xBDF6C2F2L;
    int l_967[3][6][2] = {{{5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}}, {{5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}}, {{5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}, {5L, (-1L)}}};
    short l_970 = 0L;
    unsigned l_1020 = 6UL;
    int l_1063[1][5][9] = {{{0xDF1B8F7BL, (-4L), (-1L), 0L, 0L, (-1L), (-4L), 0xDF1B8F7BL, (-1L)}, {0xDF1B8F7BL, (-4L), (-1L), 0L, 0L, (-1L), (-4L), 0xDF1B8F7BL, (-1L)}, {0xDF1B8F7BL, (-4L), (-1L), 0L, 0L, (-1L), (-4L), 0xDF1B8F7BL, (-1L)}, {0xDF1B8F7BL, (-4L), (-1L), 0L, 0L, (-1L), (-4L), 0xDF1B8F7BL, (-1L)}, {0xDF1B8F7BL, (-4L), (-1L), 0L, 0L, (-1L), (-4L), 0xDF1B8F7BL, (-1L)}}};
    char l_1080 = 0xEFL;
    unsigned l_1087 = 4UL;
    unsigned char l_1191 = 2UL;
    int l_1220 = 0xDDA7F9B0L;
    int l_1440 = 0x860123A7L;
    int l_1441 = 5L;
    int i, j, k;
    for (g_37 = 0; (g_37 <= 5); g_37 += 1)
    {
        int l_297 = 0xEED68367L;
        int l_312 = 1L;
        int l_315 = 1L;
        int i;
        if (g_107[g_37])
        {
            int l_277[6] = {(-1L), (-1L), (-1L), (-1L), (-1L), (-1L)};
            int l_300 = 1L;
            int i;
            if ((safe_rshift_func_uint8_t_u_s(p_29, ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_s(l_277[0], ((g_40 != (safe_sub_func_int32_t_s_s((((g_107[0] | g_107[0]) ^ p_29) <= (g_158 <= (((safe_rshift_func_int8_t_s_s(0x88L, (safe_rshift_func_uint8_t_u_u(g_107[0], p_28)))) && 0UL) && l_277[0]))), l_284))) > g_158))), 8)) || (-1L)))))
            {
                unsigned char l_296 = 0x8FL;
                for (l_284 = 0; (l_284 <= 5); l_284 += 1)
                {
                    int l_299 = (-5L);
                    for (g_11.f3 = 0; (g_11.f3 <= 5); g_11.f3 += 1)
                    {
                        unsigned short l_293 = 0x5842L;
                        l_297 = ((0xC689B7A3L > (safe_rshift_func_uint8_t_u_u((safe_lshift_func_int8_t_s_u((p_27 < ((-1L) && (safe_lshift_func_uint8_t_u_s(0x96L, g_107[0])))), 6)), 5))) ^ ((((safe_lshift_func_int16_t_s_s((l_293 != ((((safe_rshift_func_int16_t_s_u(p_28, 14)) && 0L) <= l_293) == g_37)), l_296)) <= 0x9AL) != 0x75L) >= p_29));
                        g_115 = (safe_unary_minus_func_uint32_t_u(l_299));
                        if (l_277[2])
                            break;
                        g_40 = 0x31B00550L;
                    }
                    l_300 = (0x0CF2ABC8L != 1UL);
                }
                g_40 = g_158;
            }
            else
            {
                g_40 = (p_27 ^ 0x3B82L);
            }
            if ((safe_add_func_uint16_t_u_u((((~p_29) == (safe_rshift_func_int8_t_s_u(g_40, (safe_lshift_func_uint8_t_u_s((0x519DDE95L & (l_284 > g_107[0])), (p_28 > g_11.f3)))))) == (((safe_rshift_func_int8_t_s_u((g_12.f3 || ((((p_29 == g_107[g_37]) > 0L) ^ l_277[0]) <= g_158)), g_11.f3)) >= p_28) >= g_37)), 0x9FF6L)))
            {
                int l_314 = 0xC1E68B15L;
                l_309[2][1][2] = l_300;
                l_314 = (safe_lshift_func_uint16_t_u_s(((p_29 && l_312) || (l_313 <= g_11.f3)), (g_115 && l_297)));
                for (g_158 = 0; (g_158 <= 5); g_158 += 1)
                {
                    l_297 = ((g_158 == l_313) < l_309[2][0][1]);
                    if (p_29)
                        break;
                }
                for (l_297 = 5; (l_297 >= 0); l_297 -= 1)
                {
                    for (l_314 = 1; (l_314 <= 5); l_314 += 1)
                    {
                        l_315 = 0xA78A4743L;
                        g_115 = 0x1504472EL;
                        l_315 = (g_115 & (safe_sub_func_uint16_t_u_u((((g_107[4] ^ (safe_lshift_func_uint16_t_u_s((safe_sub_func_int8_t_s_s((p_27 ^ 4294967286UL), (4294967295UL < (safe_mod_func_int8_t_s_s(p_27, g_40))))), p_29))) && p_28) | 0x6E4B2847L), g_5)));
                    }
                    g_115 = (safe_sub_func_uint8_t_u_u((!g_12.f3), (safe_rshift_func_int8_t_s_s((safe_rshift_func_uint8_t_u_s((g_37 != ((safe_lshift_func_uint16_t_u_u(l_277[2], 12)) ^ 0x28AC29C0L)), 1)), (0x00C3L && p_28)))));
                    l_313 = l_315;
                    if (l_314)
                        break;
                }
            }
            else
            {
                unsigned char l_332 = 1UL;
                l_332 = (g_158 <= g_107[g_37]);
                l_309[1][2][2] = ((l_277[0] <= (65531UL & (safe_add_func_uint32_t_u_u(4294967295UL, (safe_rshift_func_int8_t_s_u(g_115, 4)))))) | (((safe_sub_func_int8_t_s_s((g_107[0] & p_28), p_28)) != g_12.f3) && p_29));
                return l_309[1][0][2];
            }
            l_297 = l_309[2][1][2];
        }
        else
        {
            unsigned short l_341 = 0x4785L;
            for (g_40 = 0; (g_40 <= 5); g_40 += 1)
            {
                return p_28;
            }
            l_309[2][1][2] = (0x6BD3L < (l_313 != (65527UL > ((l_341 ^ 0x19L) != (safe_mod_func_uint32_t_u_u((safe_mod_func_uint16_t_u_u(l_313, l_341)), 0xB3ED8FF8L))))));
            if (g_158)
                break;
            l_315 = (g_12.f3 | (g_11.f3 ^ (0x7A35L & ((p_28 >= (safe_add_func_int16_t_s_s((g_107[g_37] < g_40), ((safe_rshift_func_int16_t_s_s((((g_107[0] != (g_107[0] ^ 9L)) >= g_5) >= g_107[0]), 10)) != g_11.f3)))) == g_107[0]))));
        }
    }
    if (g_11.f3)
    {
        unsigned l_406 = 0xDEA53E32L;
        int l_458 = 0L;
        short l_489[1][10][1] = {{{0x41FAL}, {0x41FAL}, {0x41FAL}, {0x41FAL}, {0x41FAL}, {0x41FAL}, {0x41FAL}, {0x41FAL}, {0x41FAL}, {0x41FAL}}};
        int l_542[9] = {0x3AD03C19L, 0x7470D357L, 0x3AD03C19L, 0x7470D357L, 0x3AD03C19L, 0x7470D357L, 0x3AD03C19L, 0x7470D357L, 0x3AD03C19L};
        unsigned l_650[2];
        short l_721 = 0x0F67L;
        int i, j, k;
        for (i = 0; i < 2; i++)
            l_650[i] = 4294967288UL;
        for (l_313 = 0; (l_313 <= (-6)); l_313--)
        {
            unsigned l_356 = 0xA04B4920L;
            for (p_28 = (-30); (p_28 == 37); p_28 = safe_add_func_int8_t_s_s(p_28, 8))
            {
                l_309[2][1][2] = ((safe_sub_func_int32_t_s_s(l_356, l_356)) > g_158);
                if (p_29)
                    break;
            }
            l_309[2][1][2] = (-9L);
        }
        for (g_12.f3 = 0; (g_12.f3 <= 5); g_12.f3 += 1)
        {
            unsigned short l_359 = 65526UL;
            short l_393 = (-1L);
            unsigned short l_433 = 0xEA8CL;
            int l_459 = 0x28F6DF68L;
            int l_481 = 0x5AA17D50L;
            g_357 = 0x3D22CD79L;
            for (l_313 = 4; (l_313 >= 0); l_313 -= 1)
            {
                unsigned char l_374[10][1] = {{0x35L}, {0x35L}, {0x35L}, {0x35L}, {0x35L}, {0x35L}, {0x35L}, {0x35L}, {0x35L}, {0x35L}};
                unsigned char l_396 = 252UL;
                char l_432 = 0xF1L;
                int l_461 = 7L;
                int i, j;
                if (p_29)
                {
                    char l_358 = 0xC0L;
                    int l_375[10][4][6] = {{{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}, {{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}, {{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}, {{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}, {{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}, {{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}, {{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}, {{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}, {{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}, {{4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}, {4L, 1L, 0x8EA86686L, 0L, 0x53E8852DL, 0xE8790BD5L}}};
                    int i, j, k;
                    for (g_40 = 5; (g_40 >= 0); g_40 -= 1)
                    {
                        if (g_158)
                            break;
                    }
                    if (((func_33(func_33((g_40 != g_107[0]), l_358), (((l_359 <= l_359) || (-1L)) == (g_107[1] >= (p_29 ^ 3L)))) < g_11.f3) < p_29))
                    {
                        l_375[9][0][4] = (safe_add_func_int16_t_s_s(((l_309[2][1][2] || (safe_add_func_int32_t_s_s(func_69(func_59(g_158, (0xBF89DE6CL ^ func_69((safe_rshift_func_int16_t_s_u(0x6E64L, 8)), g_115, ((safe_add_func_uint8_t_u_u((safe_rshift_func_int16_t_s_s(g_40, 12)), (((safe_mod_func_uint32_t_u_u(0x324EF418L, g_115)) >= ((safe_sub_func_int16_t_s_s((l_309[2][1][2] || l_358), l_374[1][0])) != p_27)) != g_115))) && p_28), l_358))), g_11.f3, g_357, g_5), l_359))) || (-10L)), 0x3495L));
                    }
                    else
                    {
                        return l_313;
                    }
                    for (g_115 = 1; (g_115 <= 5); g_115 += 1)
                    {
                        l_309[2][1][2] = p_28;
                        return l_359;
                    }
                    if (g_107[0])
                        break;
                }
                else
                {
                    char l_384 = (-2L);
                    unsigned l_385 = 18446744073709551608UL;
                    g_115 = ((l_359 <= (safe_lshift_func_int16_t_s_u((~((safe_mod_func_int32_t_s_s(g_11.f3, p_29)) || p_28)), (safe_mod_func_uint32_t_u_u(g_11.f3, g_107[3]))))) == ((safe_rshift_func_int8_t_s_u((((1UL & (l_384 && (g_37 & l_385))) == g_40) <= g_357), g_357)) | g_115));
                    return g_107[2];
                }
                if (func_69(p_28, (g_37 >= l_374[5][0]), (((g_11.f3 <= (safe_mod_func_uint16_t_u_u(g_12.f3, ((safe_mod_func_int32_t_s_s(((p_27 > ((g_357 && ((!((safe_unary_minus_func_uint32_t_u((safe_rshift_func_uint16_t_u_u((l_393 == (safe_sub_func_uint16_t_u_u(g_12.f3, g_12.f3))), p_29)))) & 0xEF4EL)) > g_107[0])) && l_396)) >= p_27), 1UL)) | 0x9840CDF6L)))) ^ p_29) <= g_107[0]), g_37))
                {
                    unsigned l_401 = 18446744073709551609UL;
                    int l_407 = (-1L);
                    l_309[2][1][2] = ((safe_lshift_func_int8_t_s_u(func_69(g_40, ((p_27 >= l_396) >= ((func_33((safe_mod_func_int16_t_s_s(l_401, (safe_add_func_uint8_t_u_u((((safe_add_func_uint16_t_u_u(0x7270L, ((0x0FA86CC8L & (0x5FF3L > 0x37C5L)) && l_406))) || 0x1D7B1E90L) | 4294967295UL), (-7L))))), l_309[0][0][2]) < p_29) != 0L)), l_309[0][1][0], g_40), 5)) <= 8L);
                    l_407 = 0L;
                }
                else
                {
                    int l_434 = 0x063AF954L;
                    short l_435 = (-5L);
                    int l_436 = (-6L);
                    if (((((safe_rshift_func_int8_t_s_s(((func_33((safe_mod_func_uint8_t_u_u(((g_158 || g_115) ^ (-1L)), ((safe_add_func_uint32_t_u_u((((safe_mod_func_int16_t_s_s((safe_mod_func_uint32_t_u_u(6UL, (safe_lshift_func_uint8_t_u_u(((p_28 <= ((safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s((-1L), g_12.f3)), (safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint8_t_u_s(0xBFL, 1)) <= (safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u((0UL != 0x27L), l_432)) && g_107[0]), g_107[5]))), 1)))) && l_433)) || l_393), p_28)))), g_107[0])) != l_396) > l_434), l_435)) ^ 0xD8L))), l_393) | g_357) && 1UL), 0)) > 1UL) ^ g_11.f3) & 0x9322F4BEL))
                    {
                        unsigned l_453 = 0x0156790AL;
                        int l_454 = 0xAF14233DL;
                        l_436 = (~p_28);
                        l_454 = (g_5 & ((func_69((safe_rshift_func_uint8_t_u_s(((0xBDL >= 0xFDL) > g_357), (safe_mod_func_uint16_t_u_u(g_107[0], (safe_lshift_func_int8_t_s_u(((safe_mod_func_uint32_t_u_u((safe_rshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((253UL > (((safe_lshift_func_int16_t_s_u(p_29, 6)) && (safe_mod_func_int16_t_s_s(func_33(g_107[0], l_434), p_29))) > l_309[3][3][0])), g_40)), l_453)), p_27)) && 65527UL), 3)))))), g_11.f3, g_5, l_432) >= g_11.f3) && g_11.f3));
                    }
                    else
                    {
                        unsigned l_457 = 18446744073709551608UL;
                        g_115 = g_37;
                        g_40 = (-1L);
                        l_458 = (safe_rshift_func_int8_t_s_u((g_158 || 0x9620L), (l_457 || (-1L))));
                    }
                }
                if (g_11.f3)
                {
                    int l_460 = (-7L);
                    if (l_432)
                        break;
                    l_459 = (-6L);
                    if (l_460)
                    {
                        l_461 = (g_107[1] | p_28);
                    }
                    else
                    {
                        unsigned l_472 = 0xF4DCA163L;
                        g_115 = p_29;
                        l_309[2][1][2] = ((safe_sub_func_uint16_t_u_u(((safe_sub_func_int32_t_s_s((safe_add_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((p_27 ^ (~g_115)), (safe_rshift_func_uint8_t_u_u(((l_472 || (safe_add_func_uint32_t_u_u(p_28, (p_27 && (safe_sub_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(func_33(g_12.f3, ((l_432 == (safe_mod_func_int32_t_s_s((((g_357 > p_28) <= g_115) == p_28), 4294967291UL))) ^ p_28)), p_27)) != l_481), p_28)))))) != g_357), p_28)))) < p_27), 0L)), p_27)) | g_158), p_29)) & 0x7BB51946L);
                    }
                    for (l_433 = 1; (l_433 <= 5); l_433 += 1)
                    {
                        unsigned char l_488 = 9UL;
                        l_461 = (((safe_lshift_func_int16_t_s_s(p_28, 13)) == 4294967293UL) >= l_374[1][0]);
                        l_488 = ((((p_29 ^ p_29) < (func_69(l_481, g_11.f3, l_461, ((safe_sub_func_uint32_t_u_u((func_59(((((safe_sub_func_uint32_t_u_u(func_69(g_5, (l_284 ^ g_12.f3), g_12.f3, p_29), g_12.f3)) & 0L) || l_313) | (-5L)), l_432) == 65535UL), 4294967295UL)) | 0x7E70L)) < g_11.f3)) | 1L) != g_12.f3);
                    }
                }
                else
                {
                    unsigned l_500 = 0x6F2395F1L;
                    int l_505 = 0x3BFDC7CBL;
                    l_489[0][5][0] = ((-7L) > l_406);
                    if (g_357)
                        break;
                    l_505 = func_59(l_313, ((safe_mod_func_int32_t_s_s((safe_rshift_func_int16_t_s_s(func_59(g_12.f3, p_29), g_5)), ((safe_rshift_func_uint8_t_u_u(((((safe_mod_func_int32_t_s_s(g_5, (safe_sub_func_int16_t_s_s(l_489[0][5][0], (l_500 >= ((safe_lshift_func_uint16_t_u_s((safe_lshift_func_uint8_t_u_s(0xA1L, 0)), 11)) > 0xB15BL)))))) < p_28) && 1L) > (-6L)), 6)) || 5UL))) || l_309[0][2][0]));
                    return l_393;
                }
            }
        }
        for (l_284 = 0; (l_284 <= 5); l_284 += 1)
        {
            unsigned char l_506 = 246UL;
            int l_543 = 0xA4806D7AL;
            int l_550 = 1L;
            short l_649 = 4L;
            unsigned char l_686 = 255UL;
            int i;
            l_506 = g_107[l_284];
            for (g_11.f3 = 0; (g_11.f3 <= 2); g_11.f3 += 1)
            {
                char l_521 = (-1L);
                int l_541 = (-9L);
                for (l_458 = 5; (l_458 >= 0); l_458 -= 1)
                {
                    int l_544[5][8] = {{0x7142BA44L, 0x6C492D29L, 0x60410B5BL, 0x6C492D29L, 0x7142BA44L, 0x8775C50DL, 0x60410B5BL, 0x8775C50DL}, {0x7142BA44L, 0x6C492D29L, 0x60410B5BL, 0x6C492D29L, 0x7142BA44L, 0x8775C50DL, 0x60410B5BL, 0x8775C50DL}, {0x7142BA44L, 0x6C492D29L, 0x60410B5BL, 0x6C492D29L, 0x7142BA44L, 0x8775C50DL, 0x60410B5BL, 0x8775C50DL}, {0x7142BA44L, 0x6C492D29L, 0x60410B5BL, 0x6C492D29L, 0x7142BA44L, 0x8775C50DL, 0x60410B5BL, 0x8775C50DL}, {0x7142BA44L, 0x6C492D29L, 0x60410B5BL, 0x6C492D29L, 0x7142BA44L, 0x8775C50DL, 0x60410B5BL, 0x8775C50DL}};
                    int i, j;
                    for (g_12.f3 = 0; (g_12.f3 <= 2); g_12.f3 += 1)
                    {
                        int i, j, k;
                        l_309[(g_12.f3 + 1)][g_12.f3][g_12.f3] = l_309[(g_12.f3 + 1)][g_12.f3][g_12.f3];
                        g_40 = (~(safe_sub_func_uint8_t_u_u((safe_add_func_int16_t_s_s(((safe_sub_func_uint32_t_u_u((safe_rshift_func_uint16_t_u_s(g_107[(g_11.f3 + 2)], 10)), (l_458 != p_29))) != ((-1L) < g_158)), (safe_mod_func_int32_t_s_s((-3L), p_28)))), ((g_107[0] | (((((safe_lshift_func_int16_t_s_s((g_107[(g_11.f3 + 2)] != p_28), 5)) >= l_521) < l_309[3][2][1]) & p_27) < g_11.f3)) == l_521))));
                    }
                    for (p_28 = 0; (p_28 <= 2); p_28 += 1)
                    {
                        int i, j, k;
                        l_541 = (safe_rshift_func_int16_t_s_u((safe_sub_func_int32_t_s_s((-2L), ((func_59((safe_unary_minus_func_uint16_t_u(l_309[g_11.f3][(g_11.f3 + 1)][p_28])), (((safe_add_func_uint8_t_u_u(((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((0x2CL || g_107[(p_28 + 2)]), (safe_add_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_s((g_107[0] || (((g_115 | g_107[5]) >= func_33((safe_rshift_func_int16_t_s_u((safe_sub_func_uint16_t_u_u(0x64B5L, g_107[l_284])), 0)), p_28)) & g_40)), 4)), l_309[2][2][0])))), p_27)) && 0x534AAFD4L), 0x15L)) == g_158) <= p_28)) == 4294967295UL) & 0x13L))), 9));
                        l_542[1] = l_458;
                        if (l_543)
                            break;
                        l_550 = func_69(((l_544[2][2] || ((p_28 >= (func_69(p_27, (safe_rshift_func_int16_t_s_s(((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint8_t_u(func_69(l_521, p_28, l_541, ((-1L) > g_158)))), g_158)) && 0x5A1CD896L), p_29)), p_29, p_28) != g_5)) && 0xF401L)) <= 4UL), l_284, p_27, l_542[6]);
                    }
                }
                for (l_458 = 0; (l_458 <= 2); l_458 += 1)
                {
                    int i, j, k;
                    l_309[(l_458 + 1)][l_458][l_458] = l_309[l_458][l_458][l_458];
                    l_309[(g_11.f3 + 1)][(g_11.f3 + 1)][l_458] = (0x7FB5L && ((safe_rshift_func_int8_t_s_s(func_44(l_309[l_458][l_458][l_458], func_50(p_27)), 4)) ^ 1L));
                    l_550 = (safe_lshift_func_int16_t_s_s(((safe_mod_func_int16_t_s_s(p_28, l_521)) && 0x1E55L), 8));
                }
            }
            if ((safe_sub_func_uint8_t_u_u((l_309[2][1][2] ^ g_115), (safe_mod_func_uint16_t_u_u(func_33(func_33(l_542[4], (0x3776L & g_37)), ((-1L) < p_27)), l_506)))))
            {
                if ((l_542[7] | p_28))
                {
                    l_542[8] = l_313;
                }
                else
                {
                    unsigned short l_563 = 1UL;
                    l_563 = (safe_mod_func_uint16_t_u_u(g_115, l_313));
                    for (l_543 = 0; l_543 < 4; l_543 += 1)
                    {
                        for (p_29 = 0; p_29 < 4; p_29 += 1)
                        {
                            for (p_28 = 0; p_28 < 3; p_28 += 1)
                            {
                                l_309[l_543][p_29][p_28] = 0xC0175571L;
                            }
                        }
                    }
                }
                return g_107[0];
            }
            else
            {
                short l_578[4];
                int l_601 = 0x302DD7A8L;
                unsigned short l_623 = 65535UL;
                char l_640 = 0x12L;
                int l_659 = 0L;
                int l_687 = 1L;
                int l_689 = 0xE0529986L;
                int i;
                for (i = 0; i < 4; i++)
                    l_578[i] = (-1L);
                l_309[2][1][2] = (safe_add_func_int16_t_s_s((((safe_sub_func_int8_t_s_s((safe_sub_func_uint16_t_u_u(((safe_add_func_uint16_t_u_u(p_27, func_69(((safe_rshift_func_int16_t_s_s((((safe_lshift_func_uint16_t_u_u(((+l_550) < g_11.f3), 10)) | g_357) | ((safe_rshift_func_int8_t_s_u((g_5 && func_44(p_28, g_5)), 4)) || func_69(((g_11.f3 > 0x684DL) ^ p_28), p_29, p_27, g_40))), g_5)) || g_12.f3), p_29, g_11.f3, g_158))) != 0xD86CL), l_458)), 0x3DL)) || l_578[2]) & 0x71L), 0x840CL));
                if (((safe_lshift_func_int8_t_s_u((~func_33(l_578[0], (0xA20CL & (+(safe_mod_func_uint16_t_u_u((((safe_mod_func_uint8_t_u_u(func_33((safe_rshift_func_uint8_t_u_u(l_578[2], (safe_mod_func_int16_t_s_s(0xF264L, (((safe_mod_func_int8_t_s_s(g_115, p_29)) > (((safe_lshift_func_int16_t_s_u((4UL & (safe_rshift_func_int16_t_s_s(p_29, 2))), 6)) ^ ((safe_add_func_int8_t_s_s((0x7701B571L & 0L), p_28)) < p_28)) == 1L)) | p_29))))), p_29), l_489[0][5][0])) | l_578[1]) <= l_543), g_5)))))), 7)) < 0x1961L))
                {
                    unsigned l_626 = 18446744073709551607UL;
                    if ((((p_27 | (safe_sub_func_int16_t_s_s((safe_add_func_uint16_t_u_u(func_44(g_107[l_284], p_29), p_28)), 0x4184L))) ^ g_5) || p_29))
                    {
                        l_601 = g_40;
                        l_550 = (safe_add_func_uint32_t_u_u(((safe_add_func_int32_t_s_s(l_601, g_107[1])) < (safe_rshift_func_uint8_t_u_s(l_542[6], l_578[2]))), (safe_mod_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_u(((safe_add_func_uint32_t_u_u(((safe_mod_func_uint16_t_u_u((safe_unary_minus_func_uint16_t_u(l_406)), func_33(((-8L) ^ g_107[l_284]), (((safe_mod_func_int8_t_s_s(((((safe_rshift_func_int16_t_s_u(((func_33(p_29, (~((safe_lshift_func_int8_t_s_u((p_29 == g_37), 3)) || p_27))) < p_28) >= 0x0AB6L), p_27)) ^ l_543) < l_489[0][1][0]) & p_27), 1UL)) <= g_357) && l_284)))) || 1L), p_27)) == l_542[3]), g_115)) >= 0UL), l_623))));
                        l_542[8] = (safe_mod_func_uint32_t_u_u(l_626, g_357));
                    }
                    else
                    {
                        g_115 = g_158;
                    }
                    if ((safe_rshift_func_int16_t_s_u(g_11.f3, 15)))
                    {
                        unsigned l_629 = 0x783B507EL;
                        if (p_29)
                            break;
                        l_629 = l_543;
                    }
                    else
                    {
                        int l_648 = 1L;
                        if (g_357)
                            break;
                        l_550 = 0x22F71711L;
                        l_309[3][1][1] = ((safe_rshift_func_int16_t_s_u((p_27 ^ 0L), (safe_mod_func_uint8_t_u_u(((safe_lshift_func_int8_t_s_s(l_309[2][1][2], 2)) ^ func_33(l_626, g_37)), (safe_rshift_func_uint16_t_u_u((g_107[1] ^ (safe_lshift_func_int16_t_s_u(((~(p_27 > ((g_158 | l_640) >= p_28))) < g_12.f3), p_27))), g_357)))))) || (-2L));
                        l_550 = ((0x583C150DL == g_107[2]) ^ (safe_sub_func_int16_t_s_s(l_643, ((p_29 || (p_28 == ((((p_28 == ((0x8FC8L || (safe_lshift_func_int8_t_s_s(((func_33(g_107[0], (safe_lshift_func_uint16_t_u_u(l_623, l_623))) != 1UL) <= g_107[0]), l_648))) <= p_29)) >= 3UL) == 0UL) & g_40))) && l_649))));
                    }
                    for (g_115 = 0; (g_115 <= 2); g_115 += 1)
                    {
                        unsigned l_651[6][3] = {{3UL, 18446744073709551615UL, 3UL}, {3UL, 18446744073709551615UL, 3UL}, {3UL, 18446744073709551615UL, 3UL}, {3UL, 18446744073709551615UL, 3UL}, {3UL, 18446744073709551615UL, 3UL}, {3UL, 18446744073709551615UL, 3UL}};
                        int i, j;
                        if (l_650[0])
                            break;
                        if (p_28)
                            continue;
                        if (g_357)
                            continue;
                        l_601 = (g_158 < (l_651[2][0] != p_27));
                    }
                    for (l_601 = 2; (l_601 >= 0); l_601 -= 1)
                    {
                        unsigned l_654 = 0UL;
                        l_313 = (p_27 > 0UL);
                        l_659 = (((safe_rshift_func_uint16_t_u_s(g_357, func_50(p_28))) ^ ((0xDDL & l_654) ^ 4L)) < (g_357 <= (((safe_add_func_int8_t_s_s(((safe_sub_func_int32_t_s_s(((l_284 < (g_158 || g_5)) & p_29), l_309[2][1][2])) < g_5), 6UL)) || 0xD4L) > l_578[2])));
                        l_550 = func_30(g_107[0], (6UL == p_27));
                    }
                }
                else
                {
                    char l_671 = 0x2CL;
                    char l_688 = 0x16L;
                    int l_700 = 0L;
                    l_309[0][2][2] = ((safe_sub_func_uint8_t_u_u(g_5, g_107[5])) | func_33(p_27, ((l_640 & (safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(p_28, (safe_sub_func_uint32_t_u_u((l_649 == (func_33(func_33(func_33(((g_107[l_284] & (p_27 || (safe_mod_func_int16_t_s_s(g_670, 1UL)))) <= p_27), l_671), l_543), g_158) != g_107[4])), 0xEBC0B31DL)))) ^ p_29), 4))) && p_27)));
                    if ((func_69((0xB1A4L >= (safe_add_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(0x39L, ((safe_add_func_uint8_t_u_u(((safe_add_func_int32_t_s_s((((9UL == (p_27 <= g_670)) & (safe_lshift_func_int16_t_s_u((safe_sub_func_uint8_t_u_u(((safe_sub_func_uint8_t_u_u(p_27, (g_107[0] >= g_11.f3))) && ((func_69(l_671, l_686, l_650[1], g_12.f3) > 1L) & g_5)), l_687)), l_601))) != l_688), p_29)) <= p_27), l_689)) || p_29))), p_29))), p_27, l_309[2][1][2], l_284) <= g_690))
                    {
                        unsigned char l_691 = 0x2AL;
                        g_40 = l_688;
                        l_700 = (func_59(g_107[4], l_691) == (safe_add_func_int8_t_s_s((p_29 > (safe_sub_func_uint8_t_u_u((((((safe_sub_func_uint16_t_u_u(l_650[0], l_671)) > ((((p_28 || (safe_sub_func_int16_t_s_s(p_29, l_643))) != 6L) <= g_357) == p_28)) <= l_643) > g_158) == 0L), 248UL))), l_489[0][5][0])));
                        l_659 = l_550;
                        l_700 = (safe_unary_minus_func_int16_t_s(l_659));
                    }
                    else
                    {
                        int l_722 = 0x11B13862L;
                        l_700 = (safe_sub_func_uint32_t_u_u(((p_27 >= ((((safe_rshift_func_uint16_t_u_u((safe_lshift_func_int16_t_s_s(((safe_mod_func_int8_t_s_s(g_357, (~(safe_rshift_func_int16_t_s_u(((((safe_unary_minus_func_uint32_t_u(l_686)) > (func_33(((0x9141L == (g_40 != (safe_lshift_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_s(func_33((p_28 != g_5), (((safe_lshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(p_28, 3)) || p_27), g_107[1])) ^ 4294967286UL) == 6L)), 7)), p_27)))) >= g_357), g_115) > p_28)) < p_27) & 0xF5C0L), l_721))))) != p_28), g_40)), 2)) ^ p_29) == l_722) && l_722)) > 0x06L), 0xF2AAAF7BL));
                        l_550 = p_29;
                    }
                    for (g_158 = 2; (g_158 >= 0); g_158 -= 1)
                    {
                        unsigned char l_735[8] = {250UL, 0x3DL, 250UL, 0x3DL, 250UL, 0x3DL, 250UL, 0x3DL};
                        int i;
                        g_40 = p_29;
                        if (g_12.f3)
                            continue;
                        g_40 = l_506;
                        g_40 = ((((0x53L && g_107[0]) || (((func_33((safe_unary_minus_func_uint32_t_u(((safe_rshift_func_int8_t_s_s(((((g_115 == p_27) | ((safe_rshift_func_uint8_t_u_u((((safe_sub_func_uint16_t_u_u((safe_sub_func_uint16_t_u_u((func_33(((safe_lshift_func_int8_t_s_s(g_107[0], (safe_unary_minus_func_int32_t_s(l_284)))) || l_735[3]), p_27) && l_671), (-4L))), 0xFA38L)) <= g_158) | l_458), l_313)) | l_506)) & l_643) < 0x2B2FL), 0)) <= 0x82L))), p_28) ^ l_578[3]) == 0xD203L) | 0x124FF497L)) < p_28) <= p_28);
                    }
                    for (l_601 = 2; (l_601 >= 0); l_601 -= 1)
                    {
                        return g_690;
                    }
                }
                l_309[2][1][2] = g_11.f3;
            }
            return p_29;
        }
    }
    else
    {
        unsigned l_738 = 0xF22B9134L;
        short l_739 = 0L;
        int l_794 = (-1L);
        short l_852 = 0x72A0L;
        unsigned l_919 = 0x22584AA9L;
        for (g_115 = 0; (g_115 <= (-13)); --g_115)
        {
            if (l_738)
                break;
        }
        l_309[2][1][2] = p_29;
        if ((g_115 >= ((4294967288UL ^ func_33((l_309[1][3][0] ^ (g_37 == l_738)), l_309[1][2][2])) ^ (g_107[1] <= l_643))))
        {
            unsigned short l_745 = 1UL;
            short l_778[6] = {0xCF8FL, 0xCF8FL, 0xE96CL, 0xCF8FL, 0xCF8FL, 0xE96CL};
            int i;
            g_115 = l_739;
            g_115 = 0x792F65CBL;
            for (g_357 = 5; (g_357 >= 0); g_357 -= 1)
            {
                int l_744 = 0L;
                l_309[2][1][2] = p_29;
                if (p_28)
                {
                    char l_753 = 0x3BL;
                    for (l_739 = 5; (l_739 >= 0); l_739 -= 1)
                    {
                        short l_752[4];
                        int i;
                        for (i = 0; i < 4; i++)
                            l_752[i] = (-1L);
                        l_309[2][1][2] = func_50(func_59((func_30((safe_lshift_func_uint8_t_u_u(((p_28 == (safe_lshift_func_int8_t_s_s(g_107[0], g_107[5]))) | func_33(g_107[3], l_744)), p_28)), l_739) <= g_5), l_745));
                        g_115 = (safe_add_func_uint32_t_u_u((safe_add_func_uint32_t_u_u((p_28 & p_29), (safe_lshift_func_int16_t_s_s(g_107[0], (1L && (1UL > 1UL)))))), (l_752[3] != l_753)));
                    }
                }
                else
                {
                    unsigned char l_766 = 0xCDL;
                    unsigned l_771 = 0x595F65FBL;
                    l_744 = (g_40 ^ (safe_mod_func_uint32_t_u_u(((g_670 >= ((safe_mod_func_uint8_t_u_u(0x9BL, (~((safe_add_func_uint32_t_u_u(4294967287UL, p_29)) || (safe_add_func_int16_t_s_s((+(func_33(p_28, l_744) && func_33((((safe_add_func_uint32_t_u_u(p_28, p_27)) == l_744) == p_28), p_28))), g_11.f3)))))) & g_690)) == (-1L)), p_29)));
                    if ((safe_lshift_func_int16_t_s_s(((l_766 == ((((safe_rshift_func_uint16_t_u_s(l_745, 6)) > (((-7L) & g_11.f3) != ((((func_44((p_28 < 0UL), (safe_mod_func_int8_t_s_s(0L, g_11.f3))) & l_309[3][0][0]) >= 1UL) && g_40) > l_284))) && l_744) || g_11.f3)) | p_29), 13)))
                    {
                        int l_781 = 6L;
                        l_781 = ((((l_771 | ((safe_lshift_func_int8_t_s_u((-6L), (g_37 >= (((safe_sub_func_uint8_t_u_u(p_27, (l_771 || (safe_add_func_int32_t_s_s(g_357, 0x08C8C2B2L))))) || (l_778[3] | (safe_sub_func_int16_t_s_s((g_40 <= (-1L)), l_781)))) == p_28)))) <= g_40)) == l_739) || g_107[3]) != g_5);
                        return g_5;
                    }
                    else
                    {
                        unsigned short l_790 = 9UL;
                        short l_791 = 0x4E4EL;
                        l_791 = ((safe_rshift_func_uint8_t_u_u(((safe_rshift_func_uint16_t_u_u(p_28, func_69(p_28, p_27, (g_357 > p_27), (safe_rshift_func_int8_t_s_s((safe_sub_func_int16_t_s_s(l_738, (p_28 | l_309[2][1][2]))), (0x2CL ^ 0L)))))) < 0xF05095ECL), l_790)) ^ g_11.f3);
                    }
                    for (g_12.f3 = 0; (g_12.f3 <= 5); g_12.f3 += 1)
                    {
                        int i;
                        g_115 = (safe_lshift_func_int8_t_s_s(0xC9L, g_107[g_12.f3]));
                    }
                    l_794 = (func_50(func_44(g_158, (g_12.f3 || (p_29 == 0x79DA767AL)))) <= 0x3FL);
                }
            }
        }
        else
        {
            unsigned char l_797 = 0x5BL;
            int l_838 = 0xA389A028L;
            int l_842[10] = {2L, 1L, 3L, 3L, 1L, 2L, 1L, 3L, 3L, 1L};
            int i;
            if ((safe_lshift_func_int8_t_s_u((l_797 == (g_107[0] & ((safe_rshift_func_uint16_t_u_s((safe_lshift_func_uint16_t_u_u(((func_33(p_29, (g_37 < ((-4L) == (g_115 ^ (safe_lshift_func_int8_t_s_u(p_28, g_40)))))) ^ 0L) & 1UL), l_284)), 14)) | g_690))), 5)))
            {
                unsigned l_808 = 0UL;
                int l_841 = 0xBAC08165L;
                int l_853 = 0x317E62F0L;
                for (g_12.f3 = 1; (g_12.f3 <= 5); g_12.f3 += 1)
                {
                    int l_811 = 0x9BAE6AA5L;
                    int i;
                    l_811 = (((g_107[g_12.f3] || ((safe_mod_func_uint32_t_u_u((safe_sub_func_int32_t_s_s(func_59((+func_69(func_33(func_69(l_284, l_808, g_12.f3, g_115), p_29), (safe_add_func_uint16_t_u_u(0x0A22L, p_27)), l_797, g_11.f3)), g_5), p_29)), 4294967295UL)) != 0x8C9EL)) == 0x82849DDAL) < 0x1CADL);
                    for (g_357 = 0; (g_357 <= 2); g_357 += 1)
                    {
                        int i;
                        g_115 = func_33((g_107[(g_357 + 2)] || 4294967289UL), (((safe_add_func_int16_t_s_s((((safe_lshift_func_int16_t_s_u((safe_rshift_func_uint8_t_u_u(p_29, 7)), 2)) <= l_818) && (+((0xD3L && 0L) && ((safe_rshift_func_uint8_t_u_s((((safe_sub_func_uint16_t_u_u(((safe_sub_func_uint8_t_u_u(p_28, l_797)) != ((g_5 < g_670) == l_643)), l_797)) <= p_29) == g_107[g_12.f3]), l_811)) > p_28)))), g_107[g_12.f3])) < g_107[1]) < g_357));
                        return g_690;
                    }
                    if (p_27)
                        break;
                    for (g_115 = 0; (g_115 <= 5); g_115 += 1)
                    {
                        l_811 = (safe_unary_minus_func_int8_t_s((safe_lshift_func_uint16_t_u_u(0UL, (((safe_mod_func_uint8_t_u_u((((safe_lshift_func_uint8_t_u_u(((0xCC0BL != 65535UL) && ((-6L) | l_284)), (l_794 & l_797))) >= g_37) & p_28), g_40)) != l_738) | 0xB7L)))));
                        l_838 = (safe_add_func_int8_t_s_s(l_739, (p_28 || func_33((p_29 & 0UL), (((func_33(p_28, g_158) | (safe_add_func_int32_t_s_s(p_28, (p_28 < g_40)))) > p_29) <= l_818)))));
                    }
                }
                for (g_158 = 0; (g_158 >= 2); g_158++)
                {
                    unsigned l_850 = 0x4A1862AAL;
                    int l_851 = 1L;
                    for (g_11.f3 = 0; (g_11.f3 <= 2); g_11.f3 += 1)
                    {
                        int l_845[4];
                        int l_856[6] = {0xFDAEB840L, 0xFC718653L, 0xFDAEB840L, 0xFC718653L, 0xFDAEB840L, 0xFC718653L};
                        int i;
                        for (i = 0; i < 4; i++)
                            l_845[i] = 0L;
                        l_841 = p_27;
                        g_115 = (0xFBL && ((l_842[0] | (g_40 | ((safe_sub_func_uint16_t_u_u((func_33(l_845[3], g_37) ^ (((((((-7L) & ((p_28 || (safe_mod_func_uint32_t_u_u((safe_sub_func_int8_t_s_s(g_115, 0xAAL)), g_107[2]))) ^ l_850)) >= 0xA2FAL) == 0x1E087C31L) & p_27) > g_107[1]) & l_851)), 0x039EL)) <= 0xBC96E29BL))) ^ l_852));
                        l_841 = g_107[0];
                        l_856[5] = (func_44(l_851, g_12.f3) != (l_853 || (safe_rshift_func_int16_t_s_s(g_357, 15))));
                    }
                    return l_853;
                }
                for (g_357 = 14; (g_357 == 29); ++g_357)
                {
                    unsigned short l_863 = 0xBE42L;
                    unsigned char l_870[2][2];
                    int i, j;
                    for (i = 0; i < 2; i++)
                    {
                        for (j = 0; j < 2; j++)
                            l_870[i][j] = 1UL;
                    }
                    l_313 = (safe_add_func_int32_t_s_s((safe_mod_func_int32_t_s_s((func_30((+0xE8C0L), func_33((~(((g_670 | p_27) || l_863) <= 0xDB86L)), p_29)) || (g_12.f3 != p_28)), g_5)), l_794));
                    l_870[0][1] = func_33(p_27, (((safe_lshift_func_int16_t_s_s(g_40, (4294967295UL >= (255UL | g_107[5])))) && (l_794 <= (safe_lshift_func_uint16_t_u_s((((safe_add_func_uint8_t_u_u(0x77L, p_28)) != (((0x52799550L > g_12.f3) & l_863) != 4294967292UL)) & p_27), 0)))) >= 4294967295UL));
                }
            }
            else
            {
                short l_889 = 1L;
                int l_890 = 0x2DE493A6L;
                for (l_313 = 0; (l_313 != 21); l_313 = safe_add_func_uint8_t_u_u(l_313, 1))
                {
                    short l_875 = 0xCC8FL;
                    g_40 = p_28;
                    l_890 = (safe_mod_func_int32_t_s_s((l_875 > (((safe_lshift_func_uint16_t_u_s(func_44(g_107[5], (func_33(g_11.f3, (246UL > (((l_878[2][0][2] == (safe_rshift_func_int16_t_s_s((safe_lshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((((p_29 && ((((safe_mod_func_int8_t_s_s(((safe_add_func_uint16_t_u_u((func_33(l_738, p_28) && p_29), l_889)) > 0xF166D276L), p_27)) == 0xD2F3177EL) && l_875) != (-6L))) != 0xEF7AL) != 247UL), (-1L))), 15)), 15))) <= g_11.f3) <= 7UL))) <= l_838)), p_28)) && 0xE1L) || l_794)), g_11.f3));
                    l_309[3][2][1] = 0x29710101L;
                }
            }
        }
        if ((safe_lshift_func_int8_t_s_s(0x42L, l_313)))
        {
            int l_895 = 0x31EAA5EEL;
            for (g_37 = 2; (g_37 >= 0); g_37 -= 1)
            {
                unsigned char l_893[7] = {0x21L, 0x21L, 1UL, 0x21L, 0x21L, 1UL, 0x21L};
                int i;
                g_115 = l_893[6];
                l_794 = g_670;
                l_309[0][3][2] = p_27;
                for (g_158 = 0; (g_158 <= 2); g_158 += 1)
                {
                    unsigned l_894 = 7UL;
                    l_894 = 0xC7DAC880L;
                    g_896 = l_895;
                    return l_878[4][3][3];
                }
            }
        }
        else
        {
            int l_926 = (-1L);
            unsigned l_958 = 0xA6ACAA3DL;
            char l_990 = 1L;
            for (l_643 = 0; l_643 < 4; l_643 += 1)
            {
                for (g_37 = 0; g_37 < 4; g_37 += 1)
                {
                    for (l_852 = 0; l_852 < 3; l_852 += 1)
                    {
                        l_309[l_643][g_37][l_852] = 0L;
                    }
                }
            }
            for (g_357 = 0; (g_357 > (-1)); g_357--)
            {
                int l_948 = 0x5D01B00AL;
                if (l_309[2][1][2])
                {
                    g_115 = func_33(g_896, l_899);
                }
                else
                {
                    l_309[3][3][1] = g_40;
                    for (p_29 = 0; (p_29 <= 5); p_29 += 1)
                    {
                        int i;
                        return g_107[p_29];
                    }
                }
                if ((p_29 >= 0xBD8BB09FL))
                {
                    int l_901 = (-5L);
                    l_901 = (safe_unary_minus_func_uint8_t_u(g_40));
                    for (p_27 = 22; (p_27 <= (-2)); p_27--)
                    {
                        char l_904 = 0x39L;
                        char l_914 = 0xE4L;
                        l_309[1][1][1] = g_40;
                        if (l_852)
                            continue;
                        l_915 = (l_904 != (safe_unary_minus_func_uint32_t_u((safe_sub_func_uint16_t_u_u(p_27, ((safe_lshift_func_int8_t_s_u((safe_rshift_func_uint8_t_u_u((func_30((0x27L <= ((((safe_add_func_uint8_t_u_u(p_29, p_29)) == (p_29 && p_29)) > g_107[0]) >= (-1L))), l_914) ^ (-1L)), 1)), 7)) && p_27))))));
                    }
                    if ((~func_44(func_30((func_59(g_37, g_40) >= (g_357 != (safe_unary_minus_func_uint16_t_u((safe_add_func_int16_t_s_s(l_919, ((0x05L == g_158) > (p_29 ^ (((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((safe_add_func_int32_t_s_s(g_12.f3, l_919)), p_27)), l_926)) < g_670) > l_901))))))))), g_690), p_28)))
                    {
                        unsigned short l_933 = 7UL;
                        l_309[3][2][2] = g_5;
                        g_40 = (p_27 <= g_115);
                        l_901 = (safe_lshift_func_int16_t_s_s(((safe_sub_func_int16_t_s_s((-9L), (safe_add_func_uint32_t_u_u(p_27, g_896)))) == (l_933 <= (safe_sub_func_uint16_t_u_u(l_901, ((((safe_mod_func_int8_t_s_s(((((safe_lshift_func_int16_t_s_s(l_933, 12)) > (~0x88L)) <= p_27) == (safe_sub_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_add_func_int32_t_s_s(0x4B870878L, g_107[0])), p_27)), l_901))), l_948)) == l_901) < 0L) || l_948))))), p_29));
                    }
                    else
                    {
                        unsigned l_949 = 0xA1E1C447L;
                        return l_949;
                    }
                    if (g_37)
                        continue;
                }
                else
                {
                    l_309[2][1][2] = g_37;
                }
                for (g_12.f3 = 0; (g_12.f3 <= 2); g_12.f3 += 1)
                {
                    int l_957[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_957[i] = (-1L);
                    for (l_284 = 0; (l_284 <= 2); l_284 += 1)
                    {
                        int i;
                        if (g_107[g_12.f3])
                            break;
                    }
                    for (g_670 = 4; (g_670 >= 0); g_670 -= 1)
                    {
                        int i, j, k;
                        l_309[(g_12.f3 + 1)][g_12.f3][g_12.f3] = ((safe_add_func_uint32_t_u_u((safe_add_func_int8_t_s_s(func_59(g_107[(g_670 + 1)], func_33((safe_unary_minus_func_int16_t_s((-10L))), ((l_309[(g_12.f3 + 1)][g_12.f3][g_12.f3] || l_878[(g_670 + 1)][(g_12.f3 + 6)][(g_12.f3 + 1)]) ^ (func_33((l_878[g_12.f3][(g_670 + 4)][g_12.f3] || (safe_rshift_func_uint16_t_u_s((~(func_33(l_878[(g_670 + 2)][(g_670 + 2)][g_12.f3], p_29) >= (((((g_40 ^ l_957[1]) && l_738) >= g_40) ^ 0xCAL) && 0UL))), 2))), l_852) > g_670)))), g_12.f3)), g_12.f3)) && 9UL);
                        l_958 = p_28;
                    }
                    if (g_107[(g_12.f3 + 3)])
                    {
                        int i;
                        l_309[2][1][2] = g_107[(g_12.f3 + 3)];
                        if (g_107[(g_12.f3 + 3)])
                            continue;
                        g_40 = (g_107[(g_12.f3 + 2)] < p_27);
                        l_948 = (((l_958 < (safe_sub_func_uint16_t_u_u(((safe_lshift_func_uint8_t_u_s(l_958, (safe_mod_func_uint32_t_u_u(((p_27 < ((safe_rshift_func_uint16_t_u_s(g_690, 9)) || (func_59(g_40, l_919) != l_967[2][1][1]))) ^ ((safe_sub_func_int32_t_s_s(l_284, p_27)) <= 0x322DL)), g_11.f3)))) ^ 0xED1CL), g_690))) & 255UL) > 1L);
                    }
                    else
                    {
                        return l_970;
                    }
                    for (l_643 = 0; (l_643 <= 5); l_643 += 1)
                    {
                        int i, j, k;
                        l_309[g_12.f3][g_12.f3][g_12.f3] = ((0x3BECL | (l_309[g_12.f3][g_12.f3][g_12.f3] & (safe_rshift_func_uint8_t_u_s(((func_69(l_926, g_115, g_12.f3, g_107[1]) | (p_29 >= l_899)) <= l_739), g_357)))) < 0x70E222BEL);
                    }
                    for (l_970 = 0; (l_970 <= 2); l_970 += 1)
                    {
                        unsigned short l_989[8];
                        int i, j, k;
                        for (i = 0; i < 8; i++)
                            l_989[i] = 65535UL;
                        l_309[(l_970 + 1)][(l_970 + 1)][g_12.f3] = ((safe_rshift_func_int8_t_s_u((0x27L | ((safe_sub_func_uint8_t_u_u((g_690 || (safe_sub_func_uint16_t_u_u((safe_mod_func_int32_t_s_s((l_948 || func_59(p_28, (safe_add_func_uint8_t_u_u(p_27, func_33(g_107[0], ((safe_add_func_uint32_t_u_u(0x50021FA4L, (safe_rshift_func_uint16_t_u_s((func_33(((safe_lshift_func_int16_t_s_s(func_33(p_29, g_158), l_643)) ^ l_989[5]), l_957[1]) > g_357), l_958)))) > 1UL)))))), g_5)), 0x6ABDL))), g_12.f3)) ^ l_989[5])), g_896)) || l_990);
                        l_794 = (safe_add_func_int32_t_s_s((0L != (!((p_27 <= l_948) >= (-5L)))), p_29));
                        g_115 = ((!l_990) != l_926);
                    }
                }
            }
            g_115 = (p_28 ^ 0x35L);
            g_115 = g_107[0];
        }
    }
    for (g_357 = 0; (g_357 < 20); g_357 = safe_add_func_int32_t_s_s(g_357, 5))
    {
        unsigned l_1060 = 1UL;
        int l_1077[7] = {1L, 1L, 0x0D8755C2L, 1L, 1L, 0x0D8755C2L, 1L};
        int i;
        for (p_29 = 1; (p_29 >= 0); p_29 -= 1)
        {
            int l_1011 = 0x6317F5BCL;
            unsigned l_1021 = 0xAD9E7C07L;
            int l_1022 = 1L;
            if (g_37)
            {
                unsigned char l_1002 = 249UL;
                for (g_670 = 1; (g_670 >= 0); g_670 -= 1)
                {
                    int i, j, k;
                    if ((l_967[(g_670 + 1)][(p_29 + 1)][g_670] > (((safe_unary_minus_func_uint32_t_u(((safe_lshift_func_int16_t_s_s((safe_sub_func_int8_t_s_s(((l_1002 >= g_11.f3) != p_28), (p_28 || 1L))), (p_29 ^ ((((safe_rshift_func_int8_t_s_s((safe_mod_func_int32_t_s_s((0xD693L || p_29), l_967[(g_670 + 1)][(p_29 + 1)][g_670])), 1)) >= (-10L)) != l_967[(g_670 + 1)][(p_29 + 1)][g_670]) != 0x9F33ADEDL)))) || 0x58L))) > (-1L)) <= p_28)))
                    {
                        return p_29;
                    }
                    else
                    {
                        return l_1002;
                    }
                }
            }
            else
            {
                unsigned l_1025 = 0x3F2030C1L;
                int l_1041 = (-1L);
                l_1022 = (((safe_rshift_func_int8_t_s_s((safe_lshift_func_uint16_t_u_s(l_1011, 6)), l_1011)) && 0xB8L) || (((safe_rshift_func_int8_t_s_s((safe_rshift_func_int16_t_s_s((safe_add_func_uint16_t_u_u(0x826BL, p_28)), 11)), (((~(g_40 > (l_970 | (((safe_mod_func_int32_t_s_s(p_29, func_33(l_1020, g_37))) ^ p_28) == l_1021)))) > g_12.f3) != 1L))) <= l_1021) ^ g_12.f3));
                for (p_28 = 0; (p_28 <= 2); p_28 += 1)
                {
                    int l_1026 = 0x2D5DE27DL;
                    int i, j, k;
                    for (g_12.f3 = 0; (g_12.f3 <= 2); g_12.f3 += 1)
                    {
                        int i, j, k;
                        l_309[(g_12.f3 + 1)][(p_29 + 1)][p_28] = ((func_33((func_59(l_309[(p_28 + 1)][(g_12.f3 + 1)][g_12.f3], ((((safe_add_func_int32_t_s_s(l_967[p_28][(p_29 + 1)][p_29], func_59(((((0xDC5D8753L ^ (0x3AL | (l_970 <= 0UL))) > (p_27 > 247UL)) <= 9L) || l_1025), l_1021))) == l_1026) && (-8L)) || l_1022)) != 0x7518L), g_896) < l_899) > p_28);
                    }
                    l_309[p_28][p_28][(p_29 + 1)] = ((safe_lshift_func_uint8_t_u_s(0x1FL, 5)) || (l_309[p_28][(p_28 + 1)][p_28] | ((safe_rshift_func_uint16_t_u_u(0x808EL, 2)) && (((safe_rshift_func_int16_t_s_s((safe_sub_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u((4294967295UL != l_309[p_29][p_28][p_28]), 0)), 0xBD59L)), (safe_sub_func_uint16_t_u_u((l_309[p_28][p_29][p_29] && func_44(l_309[(p_29 + 2)][(p_29 + 1)][p_29], l_309[p_28][(p_28 + 1)][p_28])), p_27)))) == p_29) && 0UL))));
                    for (g_115 = (-29); (g_115 <= (-25)); ++g_115)
                    {
                        unsigned short l_1050[4] = {0xC33AL, 0x11D3L, 0xC33AL, 0x11D3L};
                        int l_1076 = 1L;
                        int i;
                        g_40 = p_27;
                        l_1041 = 0L;
                        l_1041 = (safe_mod_func_int8_t_s_s((safe_rshift_func_int16_t_s_u(((safe_mod_func_uint8_t_u_u(((-1L) | ((safe_lshift_func_int8_t_s_s(p_27, 0)) | ((!((((g_37 < (((~l_1050[1]) ^ 0xE7L) ^ ((safe_lshift_func_int16_t_s_u((((safe_mod_func_int32_t_s_s((safe_lshift_func_int16_t_s_s((p_29 && l_967[2][1][1]), (safe_rshift_func_uint16_t_u_s((safe_unary_minus_func_int32_t_s(l_1060)), (safe_rshift_func_uint8_t_u_u((l_1063[0][1][8] && 0x02L), g_40)))))), (-5L))) & p_29) > g_37), 13)) ^ g_5))) < p_29) | g_670) == p_28)) || 8L))), g_40)) < p_28), p_28)), 0xC8L));
                        l_1076 = (safe_rshift_func_uint8_t_u_s((g_5 < (safe_add_func_int32_t_s_s((safe_lshift_func_int16_t_s_u((p_28 != (safe_rshift_func_int16_t_s_u(p_28, (safe_add_func_int8_t_s_s(p_29, (safe_lshift_func_int8_t_s_s(p_29, 2))))))), 13)), (!l_309[p_28][(p_28 + 1)][p_28])))), 6));
                    }
                }
                return l_1077[6];
            }
            l_309[2][1][2] = (safe_sub_func_int32_t_s_s(l_1060, p_28));
        }
        return l_1080;
    }
    if ((g_107[0] <= (((safe_rshift_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u((safe_add_func_int32_t_s_s(l_899, (g_12.f3 < ((((((1L > l_1087) & 5L) && p_28) ^ ((safe_mod_func_uint8_t_u_u((((p_29 == g_670) <= 0x0DL) | 7UL), p_28)) && l_309[2][1][2])) ^ p_29) != (-5L))))), 3)), 2)) | l_1063[0][1][8]) && g_5)))
    {
        char l_1092 = 0xFEL;
        int l_1098 = (-1L);
        unsigned short l_1183[4][8] = {{0x6B75L, 65535UL, 0x2315L, 0UL, 0x2315L, 65535UL, 0x6B75L, 65535UL}, {0x6B75L, 65535UL, 0x2315L, 0UL, 0x2315L, 65535UL, 0x6B75L, 65535UL}, {0x6B75L, 65535UL, 0x2315L, 0UL, 0x2315L, 65535UL, 0x6B75L, 65535UL}, {0x6B75L, 65535UL, 0x2315L, 0UL, 0x2315L, 65535UL, 0x6B75L, 65535UL}};
        int l_1271 = 0L;
        short l_1330 = 0xE370L;
        int l_1341 = 1L;
        int i, j;
        if (g_115)
        {
            unsigned char l_1093 = 251UL;
            unsigned short l_1111 = 0xE780L;
            int l_1118 = 8L;
            char l_1133 = 0xADL;
            int l_1138 = 0x305CA881L;
            for (l_970 = (-30); (l_970 > (-29)); l_970 = safe_add_func_int32_t_s_s(l_970, 4))
            {
                unsigned l_1110 = 0UL;
                g_40 = l_1092;
                l_1093 = p_28;
                for (g_670 = (-17); (g_670 <= 3); g_670 = safe_add_func_uint16_t_u_u(g_670, 7))
                {
                    short l_1099[4][5][7] = {{{0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}}, {{0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}}, {{0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}}, {{0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}, {0L, 1L, 0xB690L, 0x9C27L, 2L, 0x68B7L, 0x126CL}}};
                    int i, j, k;
                    if ((safe_lshift_func_int16_t_s_s(g_357, 0)))
                    {
                        l_1098 = (l_1092 && p_27);
                        l_1099[2][3][2] = (0x0A35L && g_670);
                        return g_896;
                    }
                    else
                    {
                        unsigned short l_1106 = 2UL;
                        unsigned short l_1109[9][6][1] = {{{0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}}, {{0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}}, {{0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}}, {{0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}}, {{0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}}, {{0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}}, {{0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}}, {{0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}}, {{0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}, {0x8A5BL}}};
                        int i, j, k;
                        l_1110 = (safe_lshift_func_int8_t_s_s((safe_lshift_func_uint8_t_u_s((safe_mod_func_uint8_t_u_u((((p_27 >= p_29) ^ (l_1106 > g_896)) || p_29), ((safe_lshift_func_uint16_t_u_u((((p_28 != g_107[0]) & p_28) & (((func_33(g_107[0], p_27) || l_1109[8][5][0]) <= p_27) == 6UL)), 12)) | g_158))), 7)), l_1099[2][3][2]));
                        l_967[2][1][1] = g_5;
                        g_40 = (((g_896 ^ (l_1109[1][5][0] != l_1111)) > p_29) < (-10L));
                    }
                    for (g_37 = 0; (g_37 <= (-2)); --g_37)
                    {
                        return l_1110;
                    }
                }
                if ((((0UL ^ 0x6AL) <= (safe_rshift_func_uint16_t_u_u(p_27, (p_27 < (safe_sub_func_int8_t_s_s((l_1093 >= (((0xD1DFABD8L ^ ((g_158 && (((l_967[0][1][0] < g_5) > 0xC6A0L) && g_11.f3)) || 0x20ED8389L)) <= 7UL) | 0x793463A2L)), l_1087)))))) <= l_1118))
                {
                    char l_1121 = 0xF2L;
                    for (g_158 = 0; (g_158 <= 0); g_158 += 1)
                    {
                        int i;
                        g_115 = (safe_add_func_uint32_t_u_u(g_107[(g_158 + 4)], g_107[(g_158 + 2)]));
                        l_1121 = g_107[(g_158 + 2)];
                    }
                }
                else
                {
                    g_115 = p_29;
                    for (g_670 = 3; (g_670 >= 0); g_670 -= 1)
                    {
                        int l_1122 = (-7L);
                        l_1122 = g_107[0];
                    }
                }
            }
            for (g_357 = 0; (g_357 == 25); g_357 = safe_add_func_int16_t_s_s(g_357, 4))
            {
                short l_1143 = 0x96A3L;
                l_967[2][1][1] = (safe_rshift_func_uint16_t_u_s(func_30((((safe_rshift_func_uint16_t_u_u(p_28, 8)) <= p_28) & (safe_rshift_func_uint8_t_u_u(((func_69(((((safe_mod_func_int32_t_s_s(l_1133, (safe_sub_func_int16_t_s_s((-1L), 65535UL)))) && ((safe_rshift_func_int8_t_s_s(((((l_1138 == (safe_mod_func_int32_t_s_s((safe_add_func_int8_t_s_s(l_1138, l_1098)), 1UL))) != 0x7553L) || l_1138) | 0UL), g_690)) >= 0UL)) & g_11.f3) == l_1138), g_357, p_28, g_107[0]) > 1UL) == l_1143), g_690))), l_1143), 3));
                l_967[2][1][1] = l_1138;
                if (g_107[0])
                    continue;
                g_40 = p_29;
            }
            l_967[2][1][1] = (l_1063[0][2][5] <= ((g_357 > (((0L < ((safe_mod_func_int8_t_s_s((safe_rshift_func_uint8_t_u_u((+g_5), 5)), g_12.f3)) && (l_1098 | g_40))) > g_40) > ((safe_rshift_func_uint8_t_u_u((0UL != l_1133), 4)) < (-1L)))) == g_158));
            l_967[2][1][1] = (safe_add_func_uint8_t_u_u(l_878[2][7][2], (safe_mod_func_int32_t_s_s(g_107[0], (p_27 & (p_29 != ((safe_sub_func_uint8_t_u_u((l_1098 || func_33(g_37, p_28)), (safe_sub_func_uint32_t_u_u(((((((((((safe_rshift_func_uint16_t_u_s(0UL, p_29)) < 0xFDL) > 0UL) == 65530UL) < (-3L)) ^ 1L) >= p_27) && p_27) <= g_12.f3) & 0xE8B7L), l_1092)))) & 1UL)))))));
        }
        else
        {
            char l_1184 = 1L;
            if (p_27)
            {
                return g_107[0];
            }
            else
            {
                unsigned short l_1182 = 0x3349L;
                g_40 = (safe_lshift_func_uint16_t_u_s(((((safe_sub_func_int32_t_s_s((g_115 == ((5UL ^ p_28) && ((safe_rshift_func_int16_t_s_u(p_29, g_896)) > ((~(safe_sub_func_int16_t_s_s((safe_rshift_func_int16_t_s_s((((safe_lshift_func_int8_t_s_s(p_28, 4)) <= ((safe_sub_func_uint8_t_u_u(((safe_mod_func_int32_t_s_s((safe_rshift_func_uint8_t_u_u((func_33(((g_357 && (p_28 < ((safe_mod_func_uint16_t_u_u(func_33(g_40, p_27), l_1063[0][1][8])) == l_1182))) ^ 0xDAC0L), l_1092) ^ l_1092), 1)), p_28)) < l_1183[3][7]), p_29)) <= 4294967295UL)) & g_107[0]), 2)), 0xEF2FL))) <= 0x477719D1L)))), 4294967295UL)) || (-3L)) ^ l_1092) == 255UL), g_107[3]));
                l_1098 = func_30(p_29, ((((func_69(p_28, p_27, func_44(l_1184, l_1182), (0x9DL != (safe_rshift_func_uint16_t_u_u(0UL, 7)))) > l_899) & 0x31L) != p_27) >= 3L));
                return l_1182;
            }
        }
        l_313 = (safe_rshift_func_int16_t_s_s((l_1183[3][7] & ((((l_309[1][2][1] | (((p_27 ^ l_1183[3][7]) & (g_690 ^ p_29)) || p_27)) ^ (safe_add_func_int16_t_s_s((l_1191 | func_44(l_1092, p_28)), 0x5377L))) ^ 0L) || p_28)), 1));
        for (g_357 = 22; (g_357 > 27); g_357 = safe_add_func_int32_t_s_s(g_357, 1))
        {
            unsigned l_1200[4][10][6] = {{{0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}}, {{0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}}, {{0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}}, {{0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}, {0UL, 4294967295UL, 8UL, 1UL, 0xE3387606L, 4294967288UL}}};
            int l_1215 = 0x1E85CE5CL;
            unsigned l_1344 = 6UL;
            int i, j, k;
            for (g_40 = 0; (g_40 <= (-8)); g_40 = safe_sub_func_int32_t_s_s(g_40, 2))
            {
                unsigned l_1210 = 1UL;
                int l_1232 = 0xCF0A36E3L;
                unsigned short l_1246 = 65530UL;
                int l_1278 = 0x69972517L;
                if ((1L < l_1087))
                {
                    unsigned l_1214 = 0x4E65D52FL;
                    if ((safe_add_func_uint32_t_u_u(func_33((((((((g_37 > (~(g_37 || p_28))) > ((safe_rshift_func_uint8_t_u_s(g_107[0], l_878[2][0][2])) >= (g_107[0] <= (((0xBCC6L || ((65533UL >= p_28) | p_28)) != l_1200[2][2][4]) & g_5)))) & g_11.f3) <= g_11.f3) > g_896) < p_27) ^ p_27), p_27), l_967[2][4][1])))
                    {
                        char l_1201[1];
                        int i;
                        for (i = 0; i < 1; i++)
                            l_1201[i] = 0L;
                        l_1201[0] = (p_29 >= (l_309[2][1][1] < (-3L)));
                    }
                    else
                    {
                        char l_1211 = 6L;
                        g_115 = (safe_mod_func_uint32_t_u_u((safe_add_func_uint32_t_u_u(p_27, (((safe_mod_func_int8_t_s_s(g_107[4], l_1183[3][7])) & (-1L)) | g_896))), (safe_lshift_func_uint8_t_u_u((l_1210 | ((1L != 1UL) != l_1211)), p_28))));
                        l_1098 = ((safe_lshift_func_uint16_t_u_u(p_27, func_33(l_1183[0][3], p_29))) <= (g_11.f3 > p_28));
                    }
                    l_1215 = func_33(l_1214, p_28);
                }
                else
                {
                    unsigned l_1229 = 1UL;
                    g_115 = (safe_rshift_func_uint8_t_u_s(((safe_mod_func_int8_t_s_s(((l_1220 & (safe_mod_func_int8_t_s_s(p_27, l_284))) > (safe_add_func_uint32_t_u_u(((-1L) | (func_33(g_115, p_28) ^ (safe_rshift_func_uint8_t_u_u((p_28 && (safe_add_func_int8_t_s_s(1L, l_1229))), 2)))), p_28))), g_357)) ^ g_5), 1));
                    for (g_690 = (-7); (g_690 >= 26); g_690 = safe_add_func_int32_t_s_s(g_690, 5))
                    {
                        l_1232 = 0L;
                    }
                    if (((safe_add_func_int32_t_s_s(l_1098, (p_29 && (safe_mod_func_int16_t_s_s(((safe_add_func_int8_t_s_s((g_5 != (((safe_lshift_func_uint8_t_u_u(((safe_lshift_func_uint8_t_u_u(l_1229, ((0xD553L >= 0L) <= func_33(g_896, p_28)))) | p_29), 4)) & p_27) != g_11.f3)), p_27)) & 0x81DCD6ABL), g_670))))) <= 0x27EAA8B6L))
                    {
                        short l_1245 = 0x3253L;
                        l_1245 = (safe_add_func_uint32_t_u_u(func_33(func_33(l_1200[3][6][3], p_29), p_28), g_670));
                    }
                    else
                    {
                        return l_1246;
                    }
                }
                for (p_28 = 0; (p_28 < 31); p_28++)
                {
                    unsigned char l_1264[3][8][1] = {{{0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}}, {{0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}}, {{0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}, {0xB9L}}};
                    int i, j, k;
                    for (l_1098 = 1; (l_1098 >= 0); l_1098 -= 1)
                    {
                        unsigned l_1252 = 4294967294UL;
                        int i, j, k;
                        l_967[(l_1098 + 1)][(l_1098 + 4)][l_1098] = ((l_1246 >= g_690) | ((safe_unary_minus_func_int16_t_s(((func_33(((func_33((~(((safe_add_func_uint8_t_u_u((l_1183[2][1] && l_1092), (!(((p_28 != l_1252) || (safe_unary_minus_func_uint32_t_u(l_1200[2][2][4]))) | ((safe_sub_func_uint8_t_u_u((((safe_rshift_func_uint16_t_u_u((safe_sub_func_int16_t_s_s((safe_rshift_func_uint16_t_u_s(((~((safe_mod_func_uint8_t_u_u(((l_1252 | ((g_11.f3 <= l_1200[2][2][4]) <= l_1264[2][5][0])) || (-7L)), (-9L))) & g_158)) <= p_29), 8)), p_29)), g_37)) == 0x99L) != p_28), l_1183[3][7])) | g_37))))) ^ 0x6B3BL) != l_878[4][2][2])), g_357) == l_1264[2][5][0]) > g_670), g_107[2]) ^ 0x6261B6D6L) && g_896))) <= g_40));
                        l_967[(l_1098 + 1)][(l_1098 + 4)][l_1098] = (l_1215 || (((safe_add_func_uint8_t_u_u((safe_lshift_func_uint16_t_u_u(l_1200[0][3][2], 4)), (((safe_sub_func_int16_t_s_s(g_107[2], p_28)) && l_1271) > (safe_rshift_func_int8_t_s_u((safe_lshift_func_uint16_t_u_u(p_28, p_27)), (safe_lshift_func_int8_t_s_u(((p_28 == func_33((((l_1278 | p_29) == 0x9D745619L) < g_107[3]), g_40)) && 0L), 3))))))) == g_690) & g_107[0]));
                        return l_1183[1][5];
                    }
                    l_1232 = ((safe_mod_func_int8_t_s_s(((g_11.f3 & 6L) > l_1200[2][4][4]), 6UL)) != (((safe_sub_func_uint16_t_u_u((safe_rshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s((safe_mod_func_uint16_t_u_u(0x81A4L, (safe_rshift_func_int16_t_s_u(((p_28 <= (g_107[0] & func_33(p_28, ((safe_lshift_func_int8_t_s_u(((safe_sub_func_int8_t_s_s(((((safe_rshift_func_uint16_t_u_u((safe_rshift_func_int8_t_s_u(g_5, p_28)), g_107[4])) != 0xEAL) >= g_896) > l_1191), g_1299)) != g_896), 5)) < l_1232)))) | g_40), l_818)))), g_11.f3)) != g_5), 6)), g_11.f3)) || p_29) != g_896));
                    l_1098 = g_690;
                    for (l_1278 = 0; (l_1278 >= 0); l_1278 -= 1)
                    {
                        int i, j, k;
                        g_115 = l_1063[l_1278][(l_1278 + 2)][(l_1278 + 7)];
                        if (l_1063[l_1278][(l_1278 + 1)][(l_1278 + 7)])
                            break;
                    }
                }
                g_115 = (((-1L) ^ (0x96F7L != ((safe_mod_func_int32_t_s_s(((((safe_sub_func_int16_t_s_s((255UL ^ (safe_sub_func_int16_t_s_s((safe_lshift_func_uint8_t_u_s(0x50L, (!((func_33(p_29, (g_670 | (safe_rshift_func_uint16_t_u_s((safe_rshift_func_int16_t_s_s((-9L), (func_33(p_28, p_29) & l_1087))), l_1092)))) > 0xEF42L) & 0xE5L)))), 65535UL))), g_357)) != l_1220) != (-7L)) || p_28), 0x5E7B1CB9L)) <= g_690))) && g_158);
            }
            l_1098 = ((safe_sub_func_int32_t_s_s((p_27 != l_1183[3][7]), (safe_add_func_int32_t_s_s(((safe_sub_func_int8_t_s_s((safe_mod_func_uint8_t_u_u(((safe_add_func_int16_t_s_s(((safe_lshift_func_uint8_t_u_u(0xBAL, func_30((((safe_add_func_int16_t_s_s(l_643, 0UL)) > g_115) || (safe_lshift_func_int8_t_s_u((!(((safe_lshift_func_uint8_t_u_u((0xE0EE4F62L || 0x484F40FBL), ((((l_1200[2][1][2] > 1L) <= 0x7DL) <= 65535UL) == l_1330))) && 0xBCL) | l_1215)), 1))), g_37))) ^ 0xAC91L), 65531UL)) < 0xABL), 0xD6L)), l_1183[1][3])) <= 247UL), 0x322221BFL)))) >= p_28);
            for (l_1092 = 0; (l_1092 != 19); l_1092 = safe_add_func_uint32_t_u_u(l_1092, 6))
            {
                int l_1349 = 1L;
                for (l_970 = 0; (l_970 < 7); l_970 = safe_add_func_int8_t_s_s(l_970, 4))
                {
                    g_115 = (safe_add_func_uint16_t_u_u(p_27, ((-4L) ^ 65526UL)));
                    l_1344 = (0x8C1275E0L && (func_69(((func_33(g_1299, ((((~0xDB92L) || (g_12.f3 < ((safe_rshift_func_uint8_t_u_u((safe_rshift_func_uint8_t_u_s(l_1341, 4)), (safe_lshift_func_uint16_t_u_u(((g_37 ^ (g_158 & g_690)) <= 0xF5225D22L), 4)))) ^ g_690))) ^ g_690) < 0UL)) != p_28) < (-1L)), g_690, l_1330, p_29) != 1UL));
                    l_1215 = g_40;
                }
                for (g_158 = 3; (g_158 >= 0); g_158 -= 1)
                {
                    unsigned l_1366 = 0x0CFC36D5L;
                    int i, j;
                    for (l_1330 = 0; (l_1330 <= 3); l_1330 += 1)
                    {
                        int i, j;
                        l_1098 = l_1183[l_1330][(g_158 + 1)];
                    }
                    g_40 = (((!l_1183[g_158][(g_158 + 3)]) == ((safe_add_func_int8_t_s_s(p_29, ((((l_1183[g_158][(g_158 + 3)] != ((safe_rshift_func_int16_t_s_u(l_1349, g_107[0])) == (safe_sub_func_int8_t_s_s((p_29 ^ (safe_lshift_func_uint16_t_u_u(p_27, ((safe_sub_func_uint8_t_u_u((safe_rshift_func_int8_t_s_u(0x0AL, ((safe_rshift_func_uint16_t_u_u((((p_28 || g_107[0]) < l_1183[g_158][(g_158 + 3)]) & l_1183[g_158][(g_158 + 3)]), l_1341)) & 0x523DD707L))), p_27)) != 1L)))), 0x63L)))) <= p_27) != p_27) | 0x509707BAL))) ^ p_28)) ^ 5L);
                    l_1366 = (safe_rshift_func_int8_t_s_s((l_284 | (safe_rshift_func_int16_t_s_s((safe_lshift_func_int16_t_s_u(g_670, func_33(p_29, l_1183[g_158][(g_158 + 3)]))), 4))), 1));
                }
                g_40 = g_690;
            }
        }
        for (l_1087 = 1; (l_1087 <= 5); l_1087 += 1)
        {
            int l_1387 = 0L;
            int i;
            l_309[1][3][2] = ((safe_mod_func_int32_t_s_s(((((safe_sub_func_uint32_t_u_u(func_50(g_107[l_1087]), (safe_rshift_func_uint8_t_u_s((safe_lshift_func_uint16_t_u_s(g_690, 0)), (g_11.f3 < ((255UL != ((safe_mod_func_int32_t_s_s((safe_rshift_func_uint16_t_u_u((0x3612B3CEL == (safe_add_func_int32_t_s_s(g_11.f3, l_1183[2][2]))), p_27)), p_28)) || g_11.f3)) < l_1063[0][2][1])))))) == 1UL) || g_107[l_1087]) & p_28), g_158)) >= g_896);
            l_1387 = ((safe_rshift_func_uint8_t_u_s(g_5, 0)) < ((g_107[l_1087] <= (safe_sub_func_uint16_t_u_u(0xE5E6L, (l_643 | 0xF2L)))) > func_33(g_107[0], g_107[l_1087])));
            g_1392 = (safe_add_func_uint8_t_u_u((l_1330 <= func_44((safe_add_func_int32_t_s_s(g_5, g_357)), p_27)), g_1299));
            for (l_1271 = 5; (l_1271 >= 0); l_1271 -= 1)
            {
                int l_1397 = (-1L);
                int l_1398 = 0x74EE0E1DL;
                l_1098 = func_33((g_12.f3 && 0x523FL), func_59((func_59(p_27, (g_5 ^ (g_11.f3 || 0xA424L))) > (safe_sub_func_uint16_t_u_u((0x7106A884L || 0L), g_11.f3))), g_1299));
                l_1397 = l_313;
                l_1398 = (~g_37);
            }
        }
    }
    else
    {
        int l_1403 = 0xE3F68CDFL;
        char l_1413 = 0xF9L;
        if (func_59((g_1392 <= g_670), p_28))
        {
            int l_1412 = 2L;
            int l_1418 = (-1L);
            if (p_28)
            {
                unsigned short l_1407[4][3][7] = {{{0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}, {0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}, {0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}}, {{0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}, {0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}, {0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}}, {{0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}, {0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}, {0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}}, {{0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}, {0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}, {0x783DL, 1UL, 5UL, 0x3012L, 1UL, 0xC2A0L, 65527UL}}};
                int i, j, k;
                for (l_313 = 5; (l_313 >= 0); l_313 -= 1)
                {
                    unsigned l_1404[6];
                    int i;
                    for (i = 0; i < 6; i++)
                        l_1404[i] = 1UL;
                    for (l_899 = 0; (l_899 <= 5); l_899 += 1)
                    {
                        int i;
                        l_309[2][2][1] = ((((((safe_mod_func_int8_t_s_s((safe_sub_func_uint32_t_u_u((8UL & g_107[l_899]), p_28)), g_12.f3)) && l_1403) < ((g_5 < l_1404[4]) > l_313)) & l_1404[4]) == 0x71A4271CL) < l_1403);
                    }
                    g_115 = (!(!p_27));
                    l_1412 = (g_12.f3 <= (safe_add_func_int8_t_s_s((g_690 && l_1407[0][0][2]), (safe_rshift_func_uint16_t_u_u((safe_rshift_func_uint8_t_u_u(p_29, l_1403)), 13)))));
                    for (g_11.f3 = 0; (g_11.f3 <= 3); g_11.f3 += 1)
                    {
                        int l_1419 = (-4L);
                        l_1418 = (l_1413 | (safe_mod_func_uint16_t_u_u((func_33(p_28, (((((g_11.f3 | l_1412) < 0x0947L) ^ p_27) != ((safe_sub_func_uint32_t_u_u(func_33(l_1403, l_1412), p_27)) ^ g_11.f3)) > p_29)) ^ g_5), p_27)));
                        l_1419 = p_27;
                    }
                }
            }
            else
            {
                int l_1420 = (-1L);
                unsigned l_1423[4];
                int l_1430 = 0xA678ABB4L;
                int i;
                for (i = 0; i < 4; i++)
                    l_1423[i] = 0xDFF42BADL;
                l_1430 = ((l_1420 > (safe_sub_func_uint32_t_u_u((((((func_50(g_107[2]) >= p_28) >= l_1423[0]) <= l_284) & 1UL) >= (safe_lshift_func_int16_t_s_u(((safe_mod_func_int8_t_s_s(((safe_rshift_func_int8_t_s_s(p_28, ((g_158 ^ p_27) == l_1412))) == l_967[2][5][1]), l_1418)) != 0L), p_28))), 2L))) ^ p_29);
                for (l_1080 = 0; (l_1080 < 23); ++l_1080)
                {
                    return g_12.f3;
                }
                l_1403 = (safe_sub_func_uint8_t_u_u(l_1430, ((l_1413 && func_50(p_29)) | g_1392)));
            }
        }
        else
        {
            unsigned char l_1443 = 255UL;
            int l_1444 = 0x164302A1L;
            int l_1455[10][7] = {{0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}, {0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}, {0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}, {0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}, {0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}, {0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}, {0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}, {0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}, {0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}, {0L, 9L, 0x0EF21AD9L, (-1L), 1L, 0x8EB0AB90L, 0xB6D27CB3L}};
            int i, j;
            g_40 = 0xC3B33650L;
            for (g_690 = 27; (g_690 == 44); ++g_690)
            {
                unsigned l_1437 = 4294967295UL;
                int l_1442 = 0xBA84B432L;
                l_967[2][1][1] = func_44(func_50(g_896), g_670);
                if (g_896)
                    continue;
                l_1441 = ((((0x43E0L ^ l_1437) ^ (safe_lshift_func_int8_t_s_u(0x3DL, 0))) ^ (0x8389L | (l_1437 >= l_1403))) >= (p_27 || (((p_29 & p_28) ^ l_1440) & 0xFC591944L)));
                l_1442 = 4L;
            }
            l_1444 = (l_1443 && (g_11.f3 & l_1443));
            for (g_690 = (-10); (g_690 != 45); ++g_690)
            {
                int l_1469 = 0x17C993E3L;
                g_115 = l_1443;
                l_967[2][1][1] = (g_1299 <= (func_69(g_158, g_107[2], l_1444, l_643) != ((g_1392 == (safe_lshift_func_int16_t_s_u(((safe_sub_func_uint32_t_u_u((safe_lshift_func_uint16_t_u_u(g_896, ((safe_lshift_func_uint8_t_u_s((p_27 != 0xA9L), 3)) ^ l_1455[7][6]))), 1UL)) >= g_12.f3), g_670))) && g_11.f3)));
                l_313 = ((safe_lshift_func_int16_t_s_s((safe_unary_minus_func_uint8_t_u((safe_lshift_func_int16_t_s_s((func_33((safe_mod_func_int32_t_s_s((safe_lshift_func_uint8_t_u_s(func_69(l_1441, g_5, (safe_rshift_func_int16_t_s_u((safe_rshift_func_int8_t_s_s(9L, 2)), l_1469)), (safe_add_func_uint32_t_u_u(((((7UL == g_357) || ((l_1413 || (safe_sub_func_int32_t_s_s(l_1220, (safe_rshift_func_uint8_t_u_u(l_1469, g_896))))) == 0xC07AL)) & l_1469) > 0xC7L), l_1469))), 3)), g_1299)), p_27) & l_1469), 0)))), g_1392)) >= g_1392);
            }
        }
    }
    return p_27;
}







static unsigned char func_30(unsigned short p_31, short p_32)
{
    unsigned short l_39[2];
    int l_42 = (-1L);
    int l_43 = 0x8AB82AECL;
    int i;
    for (i = 0; i < 2; i++)
        l_39[i] = 0x9191L;
    for (p_32 = 0; (p_32 <= 1); p_32 += 1)
    {
        int l_41 = 0L;
        int i;
        g_40 = l_39[p_32];
        l_41 = l_39[1];
    }
    l_42 = g_12.f3;
    for (l_42 = 1; (l_42 >= 0); l_42 -= 1)
    {
        unsigned l_49 = 0x1B3FE78DL;
        l_43 = (0xDA7DA9FCL > l_42);
        l_43 = func_44((safe_rshift_func_uint16_t_u_s(l_49, 6)), g_5);
        if (g_11.f3)
            continue;
        g_115 = (p_31 >= p_32);
        for (p_32 = 1; (p_32 >= 0); p_32 -= 1)
        {
            int l_270 = (-1L);
            l_270 = 0x8AE3A1A5L;
        }
    }
    return p_31;
}







static short func_33(unsigned short p_34, unsigned p_35)
{
    int l_36 = 4L;
    int l_38 = 8L;
    g_37 = l_36;
    l_38 = l_36;
    return g_5;
}







static int func_44(unsigned short p_45, short p_46)
{
    char l_52 = 1L;
    int l_269 = 8L;
    l_269 = (func_50(l_52) >= 0xD2F7L);
    l_269 = p_45;
    return g_107[0];
}







static short func_50(unsigned char p_51)
{
    unsigned short l_64[6] = {0UL, 0UL, 8UL, 0UL, 0UL, 8UL};
    int l_215 = 0x9092B1ACL;
    unsigned short l_233 = 8UL;
    unsigned l_253 = 0xFAFDFC82L;
    unsigned short l_268 = 65535UL;
    int i;
    l_215 = (safe_rshift_func_int16_t_s_u(func_33(g_5, ((safe_mod_func_uint16_t_u_u(((safe_lshift_func_int16_t_s_u(g_11.f3, func_59(g_5, (safe_add_func_uint8_t_u_u(l_64[2], (safe_lshift_func_int8_t_s_u(p_51, (0xCF76L | ((safe_sub_func_uint32_t_u_u((l_64[2] < (func_69(func_33(g_11.f3, p_51), l_64[5], l_64[5], l_64[3]) & p_51)), p_51)) > 0x69C13BACL))))))))) & p_51), g_11.f3)) < g_5)), 11));
    for (g_12.f3 = 22; (g_12.f3 >= 7); --g_12.f3)
    {
        unsigned l_226 = 4UL;
        unsigned l_234 = 0x53055AC8L;
        short l_235 = 4L;
        unsigned short l_244 = 0UL;
        int l_249 = 1L;
        g_40 = (safe_add_func_int8_t_s_s((0L <= (g_115 >= 1UL)), ((((safe_rshift_func_uint16_t_u_u(l_215, 6)) < g_40) ^ (safe_sub_func_uint16_t_u_u((safe_lshift_func_uint8_t_u_s(0x7CL, ((((func_33(l_226, ((safe_sub_func_int8_t_s_s((safe_sub_func_int32_t_s_s((safe_mod_func_int8_t_s_s(0xFDL, func_33(func_33(l_233, p_51), l_226))), l_215)), l_234)) || g_158)) < p_51) < p_51) > l_226) ^ l_235))), 65532UL))) | 0x29L)));
        l_244 = ((safe_mod_func_uint32_t_u_u((safe_mod_func_uint32_t_u_u((g_12.f3 > (func_59(p_51, ((func_33(p_51, g_5) && 0x66B8L) | ((p_51 >= ((+(safe_rshift_func_int8_t_s_u(((safe_rshift_func_int16_t_s_s(g_115, ((p_51 > 6UL) != p_51))) <= p_51), 7))) ^ 0L)) >= g_158))) <= g_5)), g_5)), l_234)) & l_226);
        l_253 = (!((((safe_add_func_int8_t_s_s(((((l_233 != (safe_rshift_func_uint8_t_u_u(255UL, 0))) ^ func_33(g_11.f3, l_249)) | (safe_unary_minus_func_uint16_t_u(p_51))) && g_40), ((safe_add_func_uint8_t_u_u(p_51, g_115)) <= p_51))) < p_51) != p_51) != 0x827A0DF3L));
    }
    l_215 = (((3UL || ((((l_64[2] & l_215) <= (safe_mod_func_int8_t_s_s(func_33(func_59((0x778AA8BEL < (safe_mod_func_int8_t_s_s(((((-7L) || (safe_lshift_func_int16_t_s_u((safe_mod_func_uint32_t_u_u((((safe_lshift_func_uint16_t_u_u(((safe_sub_func_uint32_t_u_u(0xC0CA2B1CL, ((safe_add_func_int32_t_s_s(((((((l_64[0] == g_40) && ((l_64[2] ^ p_51) || g_37)) <= p_51) ^ p_51) != p_51) >= g_158), g_115)) ^ g_115))) <= g_115), 11)) ^ p_51) < g_11.f3), p_51)), g_5))) & p_51) ^ l_253), l_215))), l_253), l_64[2]), l_268))) < g_11.f3) | l_233)) < g_5) != 0x3DL);
    return p_51;
}







static unsigned short func_59(int p_60, char p_61)
{
    unsigned char l_207 = 254UL;
    int l_214[9] = {6L, 6L, (-1L), 6L, 6L, (-1L), 6L, 6L, (-1L)};
    int i;
    l_214[7] = (func_69(g_115, ((safe_sub_func_uint32_t_u_u((func_33(l_207, l_207) < (((safe_add_func_int32_t_s_s((safe_mod_func_int16_t_s_s((l_207 <= l_207), (((safe_rshift_func_uint16_t_u_u(l_207, ((-2L) >= p_60))) >= 255UL) && 0x12L))), 0xF20A964BL)) ^ l_207) || p_61)), l_207)) > g_115), g_5, p_61) | l_207);
    return p_60;
}







static unsigned func_69(char p_70, unsigned p_71, unsigned p_72, unsigned p_73)
{
    unsigned char l_78 = 0x97L;
    short l_108 = 0xB63EL;
    int l_129 = 0x7796E21EL;
    int l_139 = 0x69E21D65L;
    if ((g_40 ^ 255UL))
    {
        unsigned l_79 = 0UL;
        int l_80 = (-1L);
        l_80 = (p_73 & ((safe_lshift_func_int16_t_s_s(g_40, (g_40 < (safe_lshift_func_int8_t_s_s(g_5, (0xE161529AL < func_33(p_70, ((p_73 && func_33(l_78, p_70)) == g_11.f3)))))))) > l_79));
    }
    else
    {
        int l_83[5][6][8] = {{{1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}}, {{1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}}, {{1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}}, {{1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}}, {{1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}, {1L, 1L, 0xC813C75FL, 0x7FC0BD78L, 1L, 0xCA2EBD35L, 0x092FBB16L, 0x037A9E21L}}};
        int l_103 = 0x4D3C6A4CL;
        int l_179 = 0x9DFC485CL;
        int i, j, k;
        g_40 = (safe_sub_func_uint16_t_u_u((l_83[4][5][7] > func_33(l_78, p_72)), (safe_lshift_func_int8_t_s_s(l_83[4][2][1], 4))));
        for (g_40 = 0; (g_40 != 17); g_40++)
        {
            char l_88 = 0x0DL;
            l_88 = func_33((+l_78), ((l_83[4][5][7] <= g_37) < (p_73 && g_11.f3)));
        }
        for (l_78 = 0; (l_78 <= 4); l_78 += 1)
        {
            int l_89 = 6L;
            int l_145[6] = {0x9366B1B6L, 0xD07C0FF9L, 0x9366B1B6L, 0xD07C0FF9L, 0x9366B1B6L, 0xD07C0FF9L};
            int l_159 = 0xAD161D8DL;
            int i;
            for (g_40 = 0; (g_40 <= 4); g_40 += 1)
            {
                short l_94 = 0x61DEL;
                int l_118 = 4L;
                l_94 = (l_83[1][4][4] > ((p_71 ^ l_78) && ((func_33(g_11.f3, l_89) ^ (safe_mul_func_int16_t_s_s(g_40, (!(safe_mod_func_int8_t_s_s(g_5, g_5)))))) >= g_12.f3)));
                l_103 = (p_73 & (p_73 & ((safe_add_func_int8_t_s_s((((((safe_add_func_uint8_t_u_u(((safe_sub_func_int32_t_s_s(0L, l_89)) || l_83[4][5][7]), (safe_add_func_int16_t_s_s(func_33(func_33(p_70, (1UL | l_78)), g_12.f3), l_89)))) > 0L) > 0x1C9BL) & 0x9A98420AL) < 0x07D0L), l_94)) ^ l_78)));
                for (l_94 = 4; (l_94 >= 0); l_94 -= 1)
                {
                    int l_106 = (-6L);
                    int i, j, k;
                    l_106 = (safe_add_func_uint8_t_u_u(l_83[l_78][(l_78 + 1)][(g_40 + 2)], 0x34L));
                    for (p_73 = 1; (p_73 <= 4); p_73 += 1)
                    {
                        g_107[0] = p_73;
                        l_108 = (-1L);
                    }
                    g_115 = (0xB7L > ((safe_rshift_func_uint16_t_u_s(g_11.f3, 5)) || ((l_108 ^ func_33((safe_add_func_int8_t_s_s((func_33((9UL & p_71), ((((safe_mod_func_uint16_t_u_u((~func_33(l_83[1][0][2], g_107[0])), g_107[0])) | p_70) || 0UL) < p_71)) || p_70), p_71)), g_5)) <= 0x30B3L)));
                    l_118 = func_33((safe_mod_func_uint8_t_u_u(p_72, l_108)), g_11.f3);
                }
            }
            g_40 = (safe_sub_func_uint32_t_u_u(l_89, p_71));
            for (l_108 = 0; (l_108 <= 4); l_108 += 1)
            {
                int l_127[9] = {0x18C22C6AL, (-1L), 0x18C22C6AL, (-1L), 0x18C22C6AL, (-1L), 0x18C22C6AL, (-1L), 0x18C22C6AL};
                int l_130 = (-4L);
                int l_172 = 0x432FECA5L;
                unsigned l_195 = 0UL;
                int i;
                l_103 = p_73;
                for (g_37 = 4; (g_37 >= 0); g_37 -= 1)
                {
                    short l_128 = 0L;
                    l_103 = p_72;
                    for (l_89 = 4; (l_89 >= 0); l_89 -= 1)
                    {
                        l_129 = (safe_mod_func_uint16_t_u_u((safe_rshift_func_int8_t_s_s((g_107[0] || ((0x3A5B0B60L >= l_89) < p_71)), (+((safe_sub_func_uint8_t_u_u(247UL, l_127[3])) & (((g_5 != (((g_5 & g_115) > l_128) & l_89)) != l_83[4][5][7]) <= g_107[0]))))), 0x1037L));
                        l_103 = (l_128 & l_128);
                    }
                    l_130 = g_40;
                }
                l_129 = ((safe_sub_func_int32_t_s_s(p_71, (-1L))) > g_107[0]);
                for (g_40 = 1; (g_40 <= 4); g_40 += 1)
                {
                    char l_133 = 2L;
                    unsigned short l_138[3];
                    int l_144[5] = {0x8B624CABL, 2L, 0x8B624CABL, 2L, 0x8B624CABL};
                    int i;
                    for (i = 0; i < 3; i++)
                        l_138[i] = 65535UL;
                    if (g_115)
                    {
                        int l_140 = 0x5C7EDEB1L;
                        l_133 = g_115;
                        l_103 = ((safe_lshift_func_int16_t_s_u((safe_rshift_func_int16_t_s_u(((l_138[2] < p_70) ^ l_139), 2)), (l_140 == p_72))) != ((safe_sub_func_uint8_t_u_u(func_33(p_70, (p_71 ^ p_73)), l_133)) && p_72));
                    }
                    else
                    {
                        unsigned l_143 = 4294967287UL;
                        int l_146 = 0xC1AF1848L;
                        l_103 = (l_89 >= l_143);
                        l_144[0] = l_133;
                        l_146 = (((((p_72 & 249UL) || func_33(l_78, l_145[2])) > p_70) >= (g_40 > p_70)) <= 0x76L);
                    }
                    for (g_37 = 4; (g_37 >= 1); g_37 -= 1)
                    {
                        unsigned l_149[1][7] = {{0x5433B4ECL, 0x31276630L, 0x5433B4ECL, 0x31276630L, 0x5433B4ECL, 0x31276630L, 0x5433B4ECL}};
                        int i, j;
                        l_159 = (g_115 > (((safe_rshift_func_int16_t_s_s((g_40 != (0UL > ((l_149[0][0] | 0x50E43E29L) >= (safe_add_func_int32_t_s_s((safe_add_func_int32_t_s_s((safe_lshift_func_int8_t_s_s((g_107[0] > (((l_83[0][1][6] != (safe_mod_func_int32_t_s_s(g_158, ((p_72 && p_70) ^ g_107[0])))) <= 1L) & l_108)), l_108)), 0x94D58820L)), l_83[0][3][5]))))), g_107[5])) == l_127[3]) >= l_129));
                        l_103 = (((safe_rshift_func_int8_t_s_u(g_158, (safe_lshift_func_int16_t_s_s(((g_40 == (safe_add_func_int8_t_s_s(((safe_lshift_func_uint8_t_u_u(g_5, 2)) != (safe_add_func_uint32_t_u_u((safe_lshift_func_int8_t_s_s(g_107[0], 3)), ((l_149[0][5] != (p_72 | l_89)) == p_73)))), 0x1AL))) <= 0x6486L), 1)))) > (-1L)) >= (-3L));
                        l_129 = (l_108 < p_72);
                    }
                    for (p_70 = 1; (p_70 <= 4); p_70 += 1)
                    {
                        int i;
                        l_172 = func_33(((0x5A3B4368L | 0x2381DE45L) && 1UL), l_127[(p_70 + 3)]);
                        l_103 = ((safe_lshift_func_int16_t_s_s((safe_rshift_func_int16_t_s_u((safe_add_func_uint8_t_u_u(((p_73 != p_73) > l_179), g_37)), ((safe_add_func_uint8_t_u_u((safe_lshift_func_uint8_t_u_u(p_71, 4)), (0x753E4B6FL | g_5))) & 1UL))), 10)) != 65528UL);
                    }
                    for (l_130 = 0; (l_130 <= 4); l_130 += 1)
                    {
                        int l_200 = 0x8872ADFBL;
                        l_139 = (safe_add_func_int32_t_s_s((safe_sub_func_uint16_t_u_u(func_33((safe_unary_minus_func_uint8_t_u(((((safe_add_func_int16_t_s_s((safe_sub_func_int8_t_s_s(4L, ((safe_mod_func_uint8_t_u_u(l_195, g_37)) != (safe_add_func_uint16_t_u_u(g_40, 6UL))))), (safe_lshift_func_uint16_t_u_u(g_158, 5)))) >= (p_70 ^ g_115)) ^ (g_115 ^ l_200)) <= g_5))), p_71), p_72)), g_40));
                        l_144[0] = ((g_12.f3 | g_37) > g_107[0]);
                    }
                }
            }
        }
        return p_73;
    }
    g_40 = (((l_129 <= p_71) > (g_37 > 0xE466L)) ^ ((-10L) == ((safe_lshift_func_int8_t_s_s((0xE85CL & (safe_mod_func_int16_t_s_s(g_12.f3, g_158))), (g_107[0] < 0xD0L))) & g_115)));
    return p_72;
}





int main (int argc, char* argv[])
{
    int i, j, k;
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_5, "g_5", print_hash_value);
    transparent_crc(g_11.f0, "g_11.f0", print_hash_value);
    transparent_crc(g_11.f1, "g_11.f1", print_hash_value);
    transparent_crc(g_11.f2, "g_11.f2", print_hash_value);
    transparent_crc(g_11.f3, "g_11.f3", print_hash_value);
    transparent_crc(g_12.f0, "g_12.f0", print_hash_value);
    transparent_crc(g_12.f1, "g_12.f1", print_hash_value);
    transparent_crc(g_12.f2, "g_12.f2", print_hash_value);
    transparent_crc(g_12.f3, "g_12.f3", print_hash_value);
    transparent_crc(g_37, "g_37", print_hash_value);
    transparent_crc(g_40, "g_40", print_hash_value);
    for (i = 0; i < 6; i++)
    {
        transparent_crc(g_107[i], "g_107[i]", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_115, "g_115", print_hash_value);
    transparent_crc(g_158, "g_158", print_hash_value);
    transparent_crc(g_357, "g_357", print_hash_value);
    transparent_crc(g_670, "g_670", print_hash_value);
    transparent_crc(g_690, "g_690", print_hash_value);
    transparent_crc(g_896, "g_896", print_hash_value);
    transparent_crc(g_1299, "g_1299", print_hash_value);
    transparent_crc(g_1392, "g_1392", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        for (j = 0; j < 7; j++)
        {
            transparent_crc(g_1585[i][j].f0, "g_1585[i][j].f0", print_hash_value);
            transparent_crc(g_1585[i][j].f1, "g_1585[i][j].f1", print_hash_value);
            transparent_crc(g_1585[i][j].f2, "g_1585[i][j].f2", print_hash_value);
            transparent_crc(g_1585[i][j].f3, "g_1585[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1587.f0, "g_1587.f0", print_hash_value);
    transparent_crc(g_1587.f1, "g_1587.f1", print_hash_value);
    transparent_crc(g_1587.f2, "g_1587.f2", print_hash_value);
    transparent_crc(g_1587.f3, "g_1587.f3", print_hash_value);
    transparent_crc(g_1588.f0, "g_1588.f0", print_hash_value);
    transparent_crc(g_1588.f1, "g_1588.f1", print_hash_value);
    transparent_crc(g_1588.f2, "g_1588.f2", print_hash_value);
    transparent_crc(g_1588.f3, "g_1588.f3", print_hash_value);
    for (i = 0; i < 8; i++)
    {
        transparent_crc(g_1592[i].f0, "g_1592[i].f0", print_hash_value);
        transparent_crc(g_1592[i].f1, "g_1592[i].f1", print_hash_value);
        transparent_crc(g_1592[i].f2, "g_1592[i].f2", print_hash_value);
        transparent_crc(g_1592[i].f3, "g_1592[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1593.f0, "g_1593.f0", print_hash_value);
    transparent_crc(g_1593.f1, "g_1593.f1", print_hash_value);
    transparent_crc(g_1593.f2, "g_1593.f2", print_hash_value);
    transparent_crc(g_1593.f3, "g_1593.f3", print_hash_value);
    transparent_crc(g_1617, "g_1617", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 10; j++)
        {
            for (k = 0; k < 2; k++)
            {
                transparent_crc(g_1620[i][j][k], "g_1620[i][j][k]", print_hash_value);
                if (print_hash_value) printf("index = [%d][%d][%d]\n", i, j, k);

            }
        }
    }
    transparent_crc(g_1642.f0, "g_1642.f0", print_hash_value);
    transparent_crc(g_1642.f1, "g_1642.f1", print_hash_value);
    transparent_crc(g_1642.f2, "g_1642.f2", print_hash_value);
    transparent_crc(g_1642.f3, "g_1642.f3", print_hash_value);
    transparent_crc(g_1643.f0, "g_1643.f0", print_hash_value);
    transparent_crc(g_1643.f1, "g_1643.f1", print_hash_value);
    transparent_crc(g_1643.f2, "g_1643.f2", print_hash_value);
    transparent_crc(g_1643.f3, "g_1643.f3", print_hash_value);
    transparent_crc(g_1653.f0, "g_1653.f0", print_hash_value);
    transparent_crc(g_1653.f1, "g_1653.f1", print_hash_value);
    transparent_crc(g_1653.f2, "g_1653.f2", print_hash_value);
    transparent_crc(g_1653.f3, "g_1653.f3", print_hash_value);
    transparent_crc(g_1662.f0, "g_1662.f0", print_hash_value);
    transparent_crc(g_1662.f1, "g_1662.f1", print_hash_value);
    transparent_crc(g_1662.f2, "g_1662.f2", print_hash_value);
    transparent_crc(g_1662.f3, "g_1662.f3", print_hash_value);
    transparent_crc(g_1665.f0, "g_1665.f0", print_hash_value);
    transparent_crc(g_1665.f1, "g_1665.f1", print_hash_value);
    transparent_crc(g_1665.f2, "g_1665.f2", print_hash_value);
    transparent_crc(g_1665.f3, "g_1665.f3", print_hash_value);
    for (i = 0; i < 10; i++)
    {
        transparent_crc(g_1666[i].f0, "g_1666[i].f0", print_hash_value);
        transparent_crc(g_1666[i].f1, "g_1666[i].f1", print_hash_value);
        transparent_crc(g_1666[i].f2, "g_1666[i].f2", print_hash_value);
        transparent_crc(g_1666[i].f3, "g_1666[i].f3", print_hash_value);
        if (print_hash_value) printf("index = [%d]\n", i);

    }
    transparent_crc(g_1667.f0, "g_1667.f0", print_hash_value);
    transparent_crc(g_1667.f1, "g_1667.f1", print_hash_value);
    transparent_crc(g_1667.f2, "g_1667.f2", print_hash_value);
    transparent_crc(g_1667.f3, "g_1667.f3", print_hash_value);
    transparent_crc(g_1668.f0, "g_1668.f0", print_hash_value);
    transparent_crc(g_1668.f1, "g_1668.f1", print_hash_value);
    transparent_crc(g_1668.f2, "g_1668.f2", print_hash_value);
    transparent_crc(g_1668.f3, "g_1668.f3", print_hash_value);
    transparent_crc(g_1686.f0, "g_1686.f0", print_hash_value);
    transparent_crc(g_1686.f1, "g_1686.f1", print_hash_value);
    transparent_crc(g_1686.f2, "g_1686.f2", print_hash_value);
    transparent_crc(g_1686.f3, "g_1686.f3", print_hash_value);
    transparent_crc(g_1687.f0, "g_1687.f0", print_hash_value);
    transparent_crc(g_1687.f1, "g_1687.f1", print_hash_value);
    transparent_crc(g_1687.f2, "g_1687.f2", print_hash_value);
    transparent_crc(g_1687.f3, "g_1687.f3", print_hash_value);
    transparent_crc(g_1764.f0, "g_1764.f0", print_hash_value);
    transparent_crc(g_1764.f1, "g_1764.f1", print_hash_value);
    transparent_crc(g_1764.f2, "g_1764.f2", print_hash_value);
    transparent_crc(g_1764.f3, "g_1764.f3", print_hash_value);
    transparent_crc(g_1765.f0, "g_1765.f0", print_hash_value);
    transparent_crc(g_1765.f1, "g_1765.f1", print_hash_value);
    transparent_crc(g_1765.f2, "g_1765.f2", print_hash_value);
    transparent_crc(g_1765.f3, "g_1765.f3", print_hash_value);
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 8; j++)
        {
            transparent_crc(g_1766[i][j].f0, "g_1766[i][j].f0", print_hash_value);
            transparent_crc(g_1766[i][j].f1, "g_1766[i][j].f1", print_hash_value);
            transparent_crc(g_1766[i][j].f2, "g_1766[i][j].f2", print_hash_value);
            transparent_crc(g_1766[i][j].f3, "g_1766[i][j].f3", print_hash_value);
            if (print_hash_value) printf("index = [%d][%d]\n", i, j);

        }
    }
    transparent_crc(g_1778.f0, "g_1778.f0", print_hash_value);
    transparent_crc(g_1778.f1, "g_1778.f1", print_hash_value);
    transparent_crc(g_1778.f2, "g_1778.f2", print_hash_value);
    transparent_crc(g_1778.f3, "g_1778.f3", print_hash_value);
    transparent_crc(g_1788.f0, "g_1788.f0", print_hash_value);
    transparent_crc(g_1788.f1, "g_1788.f1", print_hash_value);
    transparent_crc(g_1788.f2, "g_1788.f2", print_hash_value);
    transparent_crc(g_1788.f3, "g_1788.f3", print_hash_value);
    transparent_crc(g_1797.f0, "g_1797.f0", print_hash_value);
    transparent_crc(g_1797.f1, "g_1797.f1", print_hash_value);
    transparent_crc(g_1797.f2, "g_1797.f2", print_hash_value);
    transparent_crc(g_1797.f3, "g_1797.f3", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}
